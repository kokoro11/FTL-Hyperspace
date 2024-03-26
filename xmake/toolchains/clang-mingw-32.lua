
toolchain("clang-mingw-32") do
    --- boilerplate
    set_kind("standalone")
    set_toolset("cc", "clang")
    set_toolset("cxx", "clang", "clang++")
    set_toolset("as", "clang")
    set_toolset("ld", "clang++", "clang")
    set_toolset("sh", "clang++", "clang")
    on_load(function (toolchain)
        local march = "-m32"
        toolchain:add("cxflags", march)
        toolchain:add("asflags", march)
        toolchain:add("ldflags", march)
        toolchain:add("shflags", march)
    end)
    on_check(function (toolchain)
        if not (toolchain:is_plat("mingw") and toolchain:is_arch("i386", "x86", "i686")) then
            raise("clang-mingw-32: Only MinGW x86 is supported!")
        end
        return import("detect.sdks.find_mingw")() and import("lib.detect.find_tool")("clang")
    end)

    --- custom configs
    local clang_target = "i686-w64-windows-gnu"
    local flag_target = "--target="..clang_target
    local chost = "i686-w64-mingw32"
    set_runtimes("stdc++_static")
    set_toolset("ar", chost.."-ar", "ar.exe")
    set_toolset("strip", chost.."-strip", "strip.exe")
    set_toolset("ranlib", chost.."-ranlib", "ranlib.exe")
    set_toolset("objcopy", chost.."-objcopy", "objcopy.exe")
    set_toolset("mrc", chost.."-windres", "windres.exe")
    add_defines("__GXX_TYPEINFO_EQUALITY_INLINE=0")
    add_cxflags(flag_target, "-fdwarf-exceptions", "-pthread")
    add_asflags(flag_target)
    add_ldflags(flag_target, "-fdwarf-exceptions", "-pthread", "-fuse-ld=lld")
    add_shflags(flag_target, "-fdwarf-exceptions", "-pthread", "-fuse-ld=lld")
    --[[
    local clang_version = "17"
    local mingw_dir = "/usr/"..chost
    local gcc_version = "13.1.0"
    local gcc_install_dir = "/usr/lib/gcc/"..chost.."/"..gcc_version
    local flag_gcc_install_dir = "--gcc-install-dir="..gcc_install_dir
    add_cxflags("-nostdinc")
    add_sysincludedirs(
        "/usr/lib/clang/"..clang_version.."/include",
        mingw_dir.."/include/c++/"..gcc_version,
        mingw_dir.."/include/c++/"..gcc_version.."/"..chost,
        mingw_dir.."/include/c++/"..gcc_version.."/backward",
        mingw_dir.."/include",
        gcc_install_dir.."/include"
    )]]
end toolchain_end()