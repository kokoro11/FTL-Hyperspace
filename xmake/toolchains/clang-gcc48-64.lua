
option("toolchain/clang-gcc48-64/gcc48")
    set_description("GCC 4.8 executable path")
    set_showmenu(true)
    set_default("gcc-4.8")
    set_category("Toolchain Configs/clang-gcc48-64")
option_end()

toolchain("clang-gcc48-64") do
    --- boilerplate
    set_kind("standalone")
    set_toolset("cc", "clang")
    set_toolset("cxx", "clang", "clang++")
    set_toolset("as", "clang")
    set_toolset("ld", "clang++", "clang")
    set_toolset("sh", "clang++", "clang")
    set_toolset("ar", "ar")
    set_toolset("strip", "strip")
    on_check(function (toolchain)
        if not (toolchain:is_plat("linux") and toolchain:is_arch("x86_64", "x64")) then
            raise("clang-gcc48-64: Only Linux x86_64 is supported!")
        end
        local gcc_path = get_config("toolchain/clang-gcc48-64/gcc48") or "gcc-4.8"
        if not import("lib.detect.find_program")(gcc_path) then
            raise("clang-gcc48-64: Invalid GCC 4.8 executable path!")
        end
        return import("lib.detect.find_tool")("clang")
    end)

    --- custom configs
    set_runtimes("stdc++_shared")
    add_defines("_GLIBCXX_USE_CXX11_ABI=0")
    on_load(function (toolchain)
        local march = "-m64"
        local gcc_path = get_config("toolchain/clang-gcc48-64/gcc48") or "gcc-4.8"
        vprint("clang-gcc48-64: GCC  4.8  executable  path: [%s]", gcc_path)
        local chost = os.iorunv(gcc_path, {"-dumpmachine"}):trim()
        vprint("clang-gcc48-64: Detected    GCC 4.8 target: [%s]", chost)
        local _, clang_output = os.iorunv("clang", {"-E", "-Wp,-v", "-"}, {stdin = "/dev/null"})
        local clang_include_dir = clang_output:match("%s(/[^%c]+include)%c")
        vprint("clang-gcc48-64: Detected clang_include_dir: [%s]", clang_include_dir)
        local gcc_install_dir = path.directory(os.iorunv(gcc_path, {"-print-prog-name=cc1"}))
        vprint("clang-gcc48-64: Detected   gcc_install_dir: [%s]", gcc_install_dir)
        local flag_gcc_install_dir = "--gcc-install-dir="..gcc_install_dir
        toolchain:add("cxflags", march, flag_gcc_install_dir, "-nostdinc", "-fPIC")
        toolchain:add("sysincludedirs",
            clang_include_dir,
            gcc_install_dir.."/include/c++",
            gcc_install_dir.."/include/c++/"..chost,
            gcc_install_dir.."/include/c++/backward",
            gcc_install_dir.."/include",
            "/usr/local/include",
            "/usr/include"
        )
        toolchain:add("asflags", march, flag_gcc_install_dir)
        toolchain:add("ldflags", march, flag_gcc_install_dir, "-fuse-ld=lld")
        toolchain:add("shflags", march, flag_gcc_install_dir, "-fuse-ld=lld")
        vprint("clang-gcc48-64: cxflags =", toolchain:get('cxflags'))
        vprint("clang-gcc48-64: asflags =", toolchain:get('asflags'))
        vprint("clang-gcc48-64: ldflags =", toolchain:get('ldflags'))
        vprint("clang-gcc48-64: shflags =", toolchain:get('shflags'))
        vprint("clang-gcc48-64: sysincludedirs =", toolchain:get('sysincludedirs'))
    end)
end toolchain_end()
