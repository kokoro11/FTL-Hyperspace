
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
        local clang_sysroot = get_config("toolchain/clang-mingw-32/sysroot")
        if clang_sysroot and clang_sysroot ~= "" and not os.isdir(clang_sysroot) then
            raise("clang-mingw-32: Invalid sysroot path!")
        end
        if not import("lib.detect.find_program")("i686-w64-mingw32-gcc") then
            raise("clang-mingw-32: MinGW toolchain (i686-w64-mingw32-gcc) not found!")
        end
        return import("lib.detect.find_tool")("clang")
    end)

    --- custom configs
    local clang_target = "i686-w64-windows-gnu"
    local clang_sysroot = get_config("toolchain/clang-mingw-32/sysroot") or ""
    local flag_target = "--target="..clang_target
    local flag_sysroot = "--sysroot="..clang_sysroot
    local chost = "i686-w64-mingw32"
    set_runtimes("stdc++_static")
    set_toolset("ar", chost.."-ar", "ar.exe", "llvm-ar")
    set_toolset("strip", chost.."-strip", "strip.exe", "llvm-strip")
    set_toolset("ranlib", chost.."-ranlib", "ranlib.exe", "llvm-ranlib")
    set_toolset("objcopy", chost.."-objcopy", "objcopy.exe", "llvm-objcopy")
    set_toolset("mrc", chost.."-windres", "windres.exe", "llvm-windres")
    add_defines("__GXX_TYPEINFO_EQUALITY_INLINE=0")
    add_cxflags(flag_target, flag_sysroot, "-fdwarf-exceptions", "-pthread")
    add_asflags(flag_target, flag_sysroot)
    add_ldflags(flag_target, flag_sysroot, "-fdwarf-exceptions", "-pthread", "-fuse-ld=lld")
    add_shflags(flag_target, flag_sysroot, "-fdwarf-exceptions", "-pthread", "-fuse-ld=lld")
end toolchain_end()
