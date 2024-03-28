
toolchain("mingw-32-hs") do
    --- boilerplate
    set_kind("standalone")
    local cross = "i686-w64-mingw32-"
    add_toolset("cc", cross .. "gcc")
    add_toolset("cxx", cross .. "g++", cross .. "gcc")
    add_toolset("cpp", cross .. "gcc -E")
    add_toolset("as", cross .. "gcc")
    add_toolset("ld", cross .. "g++", cross .. "gcc")
    add_toolset("sh", cross .. "g++", cross .. "gcc")
    add_toolset("ar", cross .. "ar", "ar.exe")
    add_toolset("strip", cross .. "strip", "strip.exe")
    add_toolset("ranlib", cross .. "ranlib", "ranlib.exe")
    add_toolset("objcopy", cross .. "objcopy", "objcopy.exe")
    add_toolset("mrc", cross .. "windres", "windres.exe")
    on_check(function (toolchain)
        if not (toolchain:is_plat("mingw") and toolchain:is_arch("i386", "x86", "i686")) then
            raise("mingw-32-hs: Only MinGW x86 is supported!")
        end
        local mingw = import("lib.detect.find_program")("i686-w64-mingw32-gcc")
        if not mingw then
            raise("mingw-32-hs: MinGW toolchain (i686-w64-mingw32-gcc) not found!")
        end
        return mingw
    end)

    --- custom configs
    set_runtimes("stdc++_static")
    add_defines("__GXX_TYPEINFO_EQUALITY_INLINE=0")
    add_cxflags("-pthread")
    add_ldflags("-pthread")
    add_shflags("-pthread")
end toolchain_end()
