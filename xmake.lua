includes("xmake/toolchains/*.lua")

--- ==============
--- Config Section
--- ==============

add_rules("mode.debug", "mode.releasedbg", "mode.release", "mode.minsizerel")
set_defaultmode("debug")

option("compiler_warning_verbosity")
    set_description("Set compiler warning verbosity")
    set_showmenu(true)
    set_default("none")
    set_values("none", "less", "all", "allextra", "everything")
option_end()

option("linux_build_toolchain")
    set_description("Set build toolchain for linux version")
    set_showmenu(true)
    set_default("clang-gcc48-64")
    set_values("clang-gcc48-64")
option_end()

option("linux_steam_1_6_13_build")
    set_description("Enable STEAM_1_6_13_BUILD for linux version")
    set_showmenu(true)
    set_default(true)
    add_defines("STEAM_1_6_13_BUILD")
option_end()

option("windows_build_toolchain")
    set_description("Set build toolchain for Windows version")
    set_showmenu(true)
    set_default("clang-mingw-32")
    set_values("clang-mingw-32")
option_end()

local build_toolchain
if is_plat("linux") then
    build_toolchain = get_config("linux_build_toolchain")
elseif is_plat("mingw") then
    build_toolchain = get_config("windows_build_toolchain")
else
    build_toolchain = "unknown"
end

--- ===============
--- Package Section
--- ===============

package("lua-custom")
    set_base("lua")
    on_test(function() end)
package_end()

add_repositories("local xmake")
add_requires("lua-custom", {alias = "lua"})
add_requires("boost", {configs = {headers = true}})
if is_plat("linux") then
    add_requires("sdl2", {system = true, configs = {shared = true}})
end
add_requireconfs("**", {system = false, configs = {toolchains = build_toolchain, shared = false}})

--- ===============
--- Project Section
--- ===============

target("Hyperspace")
    set_default(true)
    set_toolchains(build_toolchain)
    set_languages("c99", "cxx11")
    set_warnings(get_config("compiler_warning_verbosity"))
    set_kind("shared")
    add_rules("swig.cpp", {moduletype = "lua"})
    add_cxflags("-msse", "-msse2", "-mfpmath=sse", "-Werror=narrowing")
    --- Defines
    add_defines(is_mode("debug", "releasedbg") and "DEBUG" or "NDEBUG")
    add_defines("_REENTRANT")
    add_defines("SKIPDISCORD")
    if is_plat("linux") then
        add_options("linux_steam_1_6_13_build")
    elseif is_plat("mingw") then
        add_defines("BUILD_DLL")
    end
    --- Sources
    add_includedirs("rapidxml", "lua", ".")
    add_files("*.cpp|FTLGame*32.cpp|FTLGame*64.cpp|main.cpp", "lua/*.cpp", "lua/*.c", "lua/modules/*.i", "main.cpp")
    --- Dependencies
    add_packages("boost", "lua")
    if is_plat("linux") then
        add_packages("sdl2")
    elseif is_plat("mingw") then
        add_shflags("-static")
        add_syslinks("opengl32", "advapi32", "gdi32", "kernel32", "user32", "shell32")
    end
    --- Custom Commands
    before_build(function (target)
        if not os.is_subhost("linux", "msys", "macosx") then
            raise("You can only build the project on Linux, MSYS2 or macOS!")
        end
        cprint("${default}Hyperspace build toolchain: ${green}%s", build_toolchain)
        local oldir = os.cd(os.projectdir())
        if os.isfile("lua/swigluarun.h") then
            cprint("${default}Found SWIG runtime file: ${green}lua/swigluarun.h")
        else
            cprintf('${default}Generating SWIG runtime... ')
            os.execv("swig", {"-c++", "-lua", "-external-runtime", "lua/swigluarun.h.temp1"})
            os.execv("bash", {"processSwigRuntime.sh"})
            cprint('${green}success')
        end
        cprintf('${default}Generating Hyperspace version... ')
        os.execv("bash", {"generateVersion.sh"})
        cprint('${green}success')
        os.cd(oldir)
    end)
    after_clean(function (target)
        local oldir = os.cd(os.projectdir())
        os.tryrm("lua/swigluarun.h")
        os.tryrm("Version.autogen.hpp")
        os.cd(oldir)
    end)
target_end()
