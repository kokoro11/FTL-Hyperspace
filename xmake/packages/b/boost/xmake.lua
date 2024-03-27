package("boost")
    set_homepage("https://www.boost.org/")
    set_description("Collection of portable C++ source libraries.")
    set_license("BSL-1.0")

    add_urls("https://github.com/boostorg/boost/releases/download/boost-$(version)/boost-$(version).tar.gz")
    add_versions("1.84.0", "4d27e9efed0f6f152dc28db6430b9d3dfb40c0345da7342eaa5a987dde57bd95")
    add_versions("1.83.0", "0c6049764e80aa32754acd7d4f179fd5551d8172a83b71532ae093e7384e98da")
    add_versions("1.82.0", "b62bd839ea6c28265af9a1f68393eda37fab3611425d3b28882d8e424535ec9d")
    add_versions("1.81.0", "121da556b718fd7bd700b5f2e734f8004f1cfa78b7d30145471c526ba75a151c")

    if is_plat("linux") then
        add_syslinks("pthread", "dl")
    end

    add_configs("staticrt", {description = "Determines if shared or static version of C and C++ runtimes should be used.", default = false, type = "boolean"})

    add_configs("pyver", {description = "python version x.y, e.g. 3.10", default = "3.10"})
    local libnames = {
        "atomic",
        "chrono",
        "cobalt",
        "container",
        "context",
        "contract",
        "coroutine",
        "date_time",
        "exception",
        "fiber",
        "filesystem",
        "graph",
        "graph_parallel",
        "headers",
        "iostreams",
        "json",
        "locale",
        "log",
        "math",
        "mpi",
        "nowide",
        "program_options",
        "python",
        "random",
        "regex",
        "serialization",
        "stacktrace",
        "system",
        "test",
        "thread",
        "timer",
        "type_erasure",
        "url",
        "wave"
    }

    add_configs("all",          {description = "Enable all library modules support.",   default = false, type = "boolean"})
    add_configs("multi",        {description = "Enable multi-thread support.",          default = false, type = "boolean"})
    for _, libname in ipairs(libnames) do
        add_configs(libname,    {description = "Enable " .. libname .. " library.",     default = false, type = "boolean"})
    end

    on_load(function (package)
        function get_linkname(package, libname)
            local linkname = "boost_" .. libname
            if libname == "python" or libname == "numpy" then
                linkname = linkname .. package:config("pyver"):gsub("%p+", "")
            end
            if package:config("multi") then
                linkname = linkname .. "-mt"
            end
            if package:is_debug() then
                linkname = linkname .. "-d"
            end
            return linkname
        end
        -- we need the fixed link order
        local sublibs = {
            log = {"log_setup", "log"},
            python = {"python", "numpy"},
            stacktrace = {"stacktrace_backtrace", "stacktrace_basic"}
        }
        for _, libname in ipairs(libnames) do
            local libsub = sublibs[libname]
            if libsub then
                for _, sublib in ipairs(libsub) do
                    package:add("links", get_linkname(package, sublib))
                end
            else
                package:add("links", get_linkname(package, libname))
            end
        end
        -- disable auto-link all libs
        if package:config("python") then
            if not package:config("shared") then
                package:add("defines", "BOOST_PYTHON_STATIC_LIB")
            end
            package:add("deps", "python " .. package:config("pyver") .. ".x", {configs = {headeronly = true}})
        end
    end)

    on_install("linux", "mingw", function (package)
        if is_host("windows") then
            raise("Installing boost package on windows is not supported, please use system boost library.")
        end
        import("core.base.option")

        local build_toolchain = package:toolchains()[1]
        local toolchain_sysincludedirs = build_toolchain:get('sysincludedirs') or {}
        local sysincludeflags = {}
        for _, dir in ipairs(toolchain_sysincludedirs) do
            table.insert(sysincludeflags, "-isystem")
            table.insert(sysincludeflags, dir)
        end
        local toolchain_defines = build_toolchain:get('defines') or {}
        local defineflags = {}
        for _, define in ipairs(toolchain_defines) do
            table.insert(defineflags, "-D"..define)
        end
        local compileflags = table.join(build_toolchain:get('cxflags'), sysincludeflags, defineflags)
        local b2_cflags = table.join(build_toolchain:get('cflags'), {})
        local b2_cxxflags = table.join(build_toolchain:get('cxxflags'), {})
        local b2_linkflags = table.join(build_toolchain:get('shflags'), {})

        -- run bootstrap.sh
        local bootstrap_argv =
        {
            "--prefix=" .. package:installdir(),
            "--libdir=" .. package:installdir("lib"),
            "--without-icu"
        }
        if package:has_tool("cxx", "clang", "clangxx") then
            table.insert(bootstrap_argv, "--with-toolset=clang")
        end
        os.vrunv("./bootstrap.sh", bootstrap_argv)

        -- set build toolchain
        local file = io.open("user-config.jam", "w")
        if file then
            local cxx = package:build_getenv("cxx")
            file:write(format('using gcc : : "%s" : <compileflags>%s ;\n', cxx:gsub("\\", "/"), os.args(compileflags)))
            file:close()
        end
        vprint("file user-config.jam = {%s}", io.readfile("user-config.jam"))
        os.vrunv("./b2", {"headers"})

        local njobs = option.get("jobs") or tostring(os.default_njob())
        local argv =
        {
            "--prefix=" .. package:installdir(),
            "--libdir=" .. package:installdir("lib"),
            "-d2",
            "-j" .. njobs,
            "--hash",
            "-q", -- quit on first error
            "--layout=tagged-1.66", -- prevent -x64 suffix in case cmake can't find it
            "--user-config=user-config.jam",
            "-sNO_LZMA=1",
            "-sNO_ZSTD=1",
            "install",
            "threading=" .. (package:config("multi") and "multi" or "single"),
            "debug-symbols=" .. (package:is_debug() and "on" or "off"),
            "link=" .. (package:config("shared") and "shared" or "static"),
            "variant=" .. (package:is_debug() and "debug" or "release"),
            "runtime-debugging=" .. (package:is_debug() and "on" or "off"),
            "runtime-link=" .. (package:config("staticrt") and "static" or "shared")
        }

        if package:config("lto") then
            table.insert(argv, "lto=on")
        end
        if package:is_arch(".+64.*") then
            table.insert(argv, "address-model=64")
        else
            table.insert(argv, "address-model=32")
        end

        table.insert(b2_cxxflags, "-std=c++11")
        if package:config("pic") ~= false then
            table.insert(b2_cxxflags, "-fPIC")
        end
        table.insert(argv, "cflags=" .. os.args(b2_cflags))
        table.insert(argv, "cxxflags=" .. os.args(b2_cxxflags))
        table.insert(argv, "linkflags=" .. os.args(b2_linkflags))
        for _, libname in ipairs(libnames) do
            if package:config("all") or package:config(libname) then
                table.insert(argv, "--with-" .. libname)
            end
        end

        if package:is_plat("linux") then
            table.insert(argv, "pch=off")
        end

        vprint("running ./b2 with argv =", argv)
        local tmpfile = os.tmpfile()
        if os.execv("./b2", argv, {try = true, stdout = tmpfile}) ~= 0 then
            raise("boost build failed, please check log in %s", tmpfile)
        end
        os.ln(tmpfile, path.join(package:installdir(), "xmake-boost-install.log"))
        vprint("boost install success, please check log in %s", tmpfile)
    end)
    on_test(function (package)
        local installdir = package:installdir()
        local logfile = path.join(installdir, "xmake-boost-install.log")
        if not os.isdir(path.join(installdir, "include", "boost")) then
            raise("boost test failed, please check log in %s", logfile)
        end
        vprint("boost test success, please check log in %s", logfile)
    end)
package_end()
