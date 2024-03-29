
option("toolchain/clang-mingw-32/sysroot")
    set_description("Set clang sysroot path")
    set_showmenu(true)
    set_default("")
    set_category("Toolchain Configs/clang-mingw-32")
option_end()

toolchain("clang-mingw-32") do
    --- boilerplate
    set_kind("standalone")
    set_toolset("cc", "clang")
    set_toolset("cxx", "clang", "clang++")
    set_toolset("as", "clang")
    set_toolset("ld", "clang++", "clang")
    set_toolset("sh", "clang++", "clang")
    on_check(function (toolchain)
        if not (toolchain:is_plat("mingw") and toolchain:is_arch("i386", "x86", "i686")) then
            raise("clang-mingw-32: Only MinGW x86 is supported!")
        end
        local clang_sysroot = get_config("toolchain/clang-mingw-32/sysroot")
        if clang_sysroot and clang_sysroot ~= "" and not os.isdir(clang_sysroot) then
            raise("clang-mingw-32: Invalid sysroot path: [%s]!", clang_sysroot)
        end
        if not import("lib.detect.find_program")("i686-w64-mingw32-gcc") then
            raise("clang-mingw-32: MinGW toolchain (i686-w64-mingw32-gcc) not found!")
        end
        return import("lib.detect.find_tool")("clang")
    end)

    --- custom configs
    local clang_target = "i686-w64-windows-gnu"
    local flag_target = "--target="..clang_target
    local chost = "i686-w64-mingw32"
    set_runtimes("stdc++_static")
    set_toolset("ar", "llvm-ar", chost.."-ar", "ar.exe")
    set_toolset("strip", "llvm-strip", chost.."-strip", "strip.exe")
    set_toolset("ranlib", "llvm-ranlib", chost.."-ranlib", "ranlib.exe")
    set_toolset("objcopy", "llvm-objcopy", chost.."-objcopy", "objcopy.exe")
    set_toolset("mrc", "llvm-windres", chost.."-windres", "windres.exe")
    add_defines("__GXX_TYPEINFO_EQUALITY_INLINE=0")
    add_cxflags(flag_target, "-fdwarf-exceptions", "-pthread")
    add_asflags(flag_target)
    add_ldflags(flag_target, "-fdwarf-exceptions", "-pthread", "-fuse-ld=lld")
    add_shflags(flag_target, "-fdwarf-exceptions", "-pthread", "-fuse-ld=lld")
    on_load(function (toolchain)
        local march = "-m32"
        local clang_sysroot = get_config("toolchain/clang-mingw-32/sysroot") or ""
        local flag_sysroot = "--sysroot="..clang_sysroot
        toolchain:add("cxflags", march, flag_sysroot)
        toolchain:add("asflags", march, flag_sysroot)
        toolchain:add("ldflags", march, flag_sysroot)
        toolchain:add("shflags", march, flag_sysroot)
    end)
end toolchain_end()
