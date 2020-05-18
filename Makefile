#------------------------------------------------------------------------------#
# This makefile was generated by 'cbp2make' tool rev.147                       #
#------------------------------------------------------------------------------#


WORKDIR = %cd%

CC = gcc.exe
CXX = g++.exe
AR = ar.exe
LD = g++.exe
WINDRES = windres.exe

INC = 
CFLAGS = 
RESINC = 
LIBDIR =
BOOSTDIR =  C:/boost/lib
LUADIR = ./Lua/lib
LIB = 
LDFLAGS = -L$(BOOSTDIR) -L$(LUADIR)

INC_DEBUG = $(INC) -Irapidxml -IC:\boost\include\boost-1_70 -Ilua\luajit\src
CFLAGS_DEBUG = $(CFLAGS) -Wall -g -masm=intel -std=c++11 -g -DBUILD_DLL -DDEBUG
RESINC_DEBUG = $(RESINC)
RCFLAGS_DEBUG = $(RCFLAGS)
LIBDIR_DEBUG = $(LIBDIR)
LIB_DEBUG = $(LIB) -luser32 -lboost_atomic-mgw82-mt-x32-1_70 -lboost_chrono-mgw82-mt-x32-1_70 -lboost_container-mgw82-mt-x32-1_70 -lboost_context-mgw82-mt-x32-1_70 -lboost_contract-mgw82-mt-x32-1_70 -lboost_coroutine-mgw82-mt-x32-1_70 -lboost_date_time-mgw82-mt-x32-1_70 -lboost_exception-mgw82-mt-x32-1_70 -lboost_filesystem-mgw82-mt-x32-1_70 -lboost_graph-mgw82-mt-x32-1_70 -lboost_iostreams-mgw82-mt-x32-1_70 -lboost_locale-mgw82-mt-x32-1_70 -lboost_log_setup-mgw82-mt-x32-1_70 -lboost_log-mgw82-mt-x32-1_70 -lboost_math_c99f-mgw82-mt-x32-1_70 -lboost_math_c99l-mgw82-mt-x32-1_70 -lboost_math_c99-mgw82-mt-x32-1_70 -lboost_math_tr1f-mgw82-mt-x32-1_70 -lboost_math_tr1l-mgw82-mt-x32-1_70 -lboost_math_tr1-mgw82-mt-x32-1_70 -lboost_prg_exec_monitor-mgw82-mt-x32-1_70 -lboost_program_options-mgw82-mt-x32-1_70 -lboost_random-mgw82-mt-x32-1_70 -lboost_regex-mgw82-mt-x32-1_70 -lboost_serialization-mgw82-mt-x32-1_70 -lboost_stacktrace_basic-mgw82-mt-x32-1_70 -lboost_stacktrace_noop-mgw82-mt-x32-1_70 -lboost_system-mgw82-mt-x32-1_70 -lboost_test_exec_monitor-mgw82-mt-x32-1_70 -lboost_thread-mgw82-mt-x32-1_70 -lboost_timer-mgw82-mt-x32-1_70 -lboost_type_erasure-mgw82-mt-x32-1_70 -lboost_unit_test_framework-mgw82-mt-x32-1_70 -lboost_wave-mgw82-mt-x32-1_70 -lboost_wserialization-mgw82-mt-x32-1_70 -llua51
LDFLAGS_DEBUG = $(LDFLAGS) -static-libstdc++ -static-libgcc
OBJDIR_DEBUG = obj\\Debug
DEP_DEBUG = 
DEF_DEBUG = ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light\\Hyperspace.def
SHAREDINT_DEBUG = ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light\\libHyperspace.a
OUT_DEBUG = ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light\\Hyperspace.dll

INC_RELEASE = $(INC) -Irapidxml -IC:\boost\include\boost-1_70
CFLAGS_RELEASE = $(CFLAGS) -Wall -masm=intel -std=c++11 -DBUILD_DLL
RESINC_RELEASE = $(RESINC)
RCFLAGS_RELEASE = $(RCFLAGS)
LIBDIR_RELEASE = $(LIBDIR)
LIB_RELEASE = $(LIB) -luser32 -lboost_atomic-mgw82-mt-x32-1_70 -lboost_chrono-mgw82-mt-x32-1_70 -lboost_container-mgw82-mt-x32-1_70 -lboost_context-mgw82-mt-x32-1_70 -lboost_contract-mgw82-mt-x32-1_70 -lboost_coroutine-mgw82-mt-x32-1_70 -lboost_date_time-mgw82-mt-x32-1_70 -lboost_exception-mgw82-mt-x32-1_70 -lboost_filesystem-mgw82-mt-x32-1_70 -lboost_graph-mgw82-mt-x32-1_70 -lboost_iostreams-mgw82-mt-x32-1_70 -lboost_locale-mgw82-mt-x32-1_70 -lboost_log_setup-mgw82-mt-x32-1_70 -lboost_log-mgw82-mt-x32-1_70 -lboost_math_c99f-mgw82-mt-x32-1_70 -lboost_math_c99l-mgw82-mt-x32-1_70 -lboost_math_c99-mgw82-mt-x32-1_70 -lboost_math_tr1f-mgw82-mt-x32-1_70 -lboost_math_tr1l-mgw82-mt-x32-1_70 -lboost_math_tr1-mgw82-mt-x32-1_70 -lboost_prg_exec_monitor-mgw82-mt-x32-1_70 -lboost_program_options-mgw82-mt-x32-1_70 -lboost_random-mgw82-mt-x32-1_70 -lboost_regex-mgw82-mt-x32-1_70 -lboost_serialization-mgw82-mt-x32-1_70 -lboost_stacktrace_basic-mgw82-mt-x32-1_70 -lboost_stacktrace_noop-mgw82-mt-x32-1_70 -lboost_system-mgw82-mt-x32-1_70 -lboost_test_exec_monitor-mgw82-mt-x32-1_70 -lboost_thread-mgw82-mt-x32-1_70 -lboost_timer-mgw82-mt-x32-1_70 -lboost_type_erasure-mgw82-mt-x32-1_70 -lboost_unit_test_framework-mgw82-mt-x32-1_70 -lboost_wave-mgw82-mt-x32-1_70 -lboost_wserialization-mgw82-mt-x32-1_70
LDFLAGS_RELEASE = $(LDFLAGS) -s -static-libstdc++ -static-libgcc
OBJDIR_RELEASE = obj\\Release
DEP_RELEASE = 
DEF_RELEASE = ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light\\Hyperspace.def
SHAREDINT_RELEASE = ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light\\libHyperspace.a
OUT_RELEASE = ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light\\Hyperspace.dll

OBJ_DEBUG = $(OBJDIR_DEBUG)\\HullNumbers.o $(OBJDIR_DEBUG)\\Infinite.o $(OBJDIR_DEBUG)\\MainMenu.o $(OBJDIR_DEBUG)\\Misc.o $(OBJDIR_DEBUG)\\Resources.o $(OBJDIR_DEBUG)\\Seeds.o $(OBJDIR_DEBUG)\\ShipManager_Extend.o $(OBJDIR_DEBUG)\\ShipTypeC.o $(OBJDIR_DEBUG)\\SigScan.o $(OBJDIR_DEBUG)\\Wormhole.o $(OBJDIR_DEBUG)\\freetype.o $(OBJDIR_DEBUG)\\hde.o $(OBJDIR_DEBUG)\\main.o $(OBJDIR_DEBUG)\\zhl.o $(OBJDIR_DEBUG)\\CustomCrew.o $(OBJDIR_DEBUG)\\AugmentValues.o $(OBJDIR_DEBUG)\\Augments.o $(OBJDIR_DEBUG)\\Balance.o $(OBJDIR_DEBUG)\\Captain.o $(OBJDIR_DEBUG)\\Colors.o $(OBJDIR_DEBUG)\\CommandConsole.o $(OBJDIR_DEBUG)\\CrewMember_Extend.o $(OBJDIR_DEBUG)\\CrewVTable.o $(OBJDIR_DEBUG)\\CustomAugments.o $(OBJDIR_DEBUG)\\ASMHooks.o $(OBJDIR_DEBUG)\\CustomEvents.o $(OBJDIR_DEBUG)\\CustomMap.o $(OBJDIR_DEBUG)\\CustomSaves.o $(OBJDIR_DEBUG)\\CustomShips.o $(OBJDIR_DEBUG)\\CustomSystems.o $(OBJDIR_DEBUG)\\CustomWeapons.o $(OBJDIR_DEBUG)\\FTLGame.o $(OBJDIR_DEBUG)\\Global.o

OBJ_RELEASE = $(OBJDIR_RELEASE)\\HullNumbers.o $(OBJDIR_RELEASE)\\Infinite.o $(OBJDIR_RELEASE)\\MainMenu.o $(OBJDIR_RELEASE)\\Misc.o $(OBJDIR_RELEASE)\\Resources.o $(OBJDIR_RELEASE)\\Seeds.o $(OBJDIR_RELEASE)\\ShipManager_Extend.o $(OBJDIR_RELEASE)\\ShipTypeC.o $(OBJDIR_RELEASE)\\SigScan.o $(OBJDIR_RELEASE)\\Wormhole.o $(OBJDIR_RELEASE)\\freetype.o $(OBJDIR_RELEASE)\\hde.o $(OBJDIR_RELEASE)\\main.o $(OBJDIR_RELEASE)\\zhl.o $(OBJDIR_RELEASE)\\CustomCrew.o $(OBJDIR_RELEASE)\\AugmentValues.o $(OBJDIR_RELEASE)\\Augments.o $(OBJDIR_RELEASE)\\Balance.o $(OBJDIR_RELEASE)\\Captain.o $(OBJDIR_RELEASE)\\Colors.o $(OBJDIR_RELEASE)\\CommandConsole.o $(OBJDIR_RELEASE)\\CrewMember_Extend.o $(OBJDIR_RELEASE)\\CrewVTable.o $(OBJDIR_RELEASE)\\CustomAugments.o $(OBJDIR_RELEASE)\\ASMHooks.o $(OBJDIR_RELEASE)\\CustomEvents.o $(OBJDIR_RELEASE)\\CustomMap.o $(OBJDIR_RELEASE)\\CustomSaves.o $(OBJDIR_RELEASE)\\CustomShips.o $(OBJDIR_RELEASE)\\CustomSystems.o $(OBJDIR_RELEASE)\\CustomWeapons.o $(OBJDIR_RELEASE)\\FTLGame.o $(OBJDIR_RELEASE)\\Global.o

all: before_build build_debug build_release after_build

clean: clean_debug clean_release

before_build: 
	

after_build: 

before_debug: 
	cmd /c if not exist ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light md ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light
	cmd /c if not exist $(OBJDIR_DEBUG) md $(OBJDIR_DEBUG)

after_debug: 

build_debug: before_debug out_debug after_debug

debug: before_build build_debug after_build

out_debug: before_debug $(OBJ_DEBUG) $(DEP_DEBUG)
	$(LD) -shared $(LIBDIR_DEBUG) $(OBJ_DEBUG)  -o $(OUT_DEBUG) $(LDFLAGS_DEBUG) $(LIB_DEBUG)

$(OBJDIR_DEBUG)\\HullNumbers.o: HullNumbers.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c HullNumbers.cpp -o $(OBJDIR_DEBUG)\\HullNumbers.o

$(OBJDIR_DEBUG)\\Infinite.o: Infinite.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c Infinite.cpp -o $(OBJDIR_DEBUG)\\Infinite.o

$(OBJDIR_DEBUG)\\MainMenu.o: MainMenu.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c MainMenu.cpp -o $(OBJDIR_DEBUG)\\MainMenu.o

$(OBJDIR_DEBUG)\\Misc.o: Misc.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c Misc.cpp -o $(OBJDIR_DEBUG)\\Misc.o

$(OBJDIR_DEBUG)\\Resources.o: Resources.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c Resources.cpp -o $(OBJDIR_DEBUG)\\Resources.o

$(OBJDIR_DEBUG)\\Seeds.o: Seeds.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c Seeds.cpp -o $(OBJDIR_DEBUG)\\Seeds.o

$(OBJDIR_DEBUG)\\ShipManager_Extend.o: ShipManager_Extend.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c ShipManager_Extend.cpp -o $(OBJDIR_DEBUG)\\ShipManager_Extend.o

$(OBJDIR_DEBUG)\\ShipTypeC.o: ShipTypeC.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c ShipTypeC.cpp -o $(OBJDIR_DEBUG)\\ShipTypeC.o

$(OBJDIR_DEBUG)\\SigScan.o: SigScan.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c SigScan.cpp -o $(OBJDIR_DEBUG)\\SigScan.o

$(OBJDIR_DEBUG)\\Wormhole.o: Wormhole.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c Wormhole.cpp -o $(OBJDIR_DEBUG)\\Wormhole.o

$(OBJDIR_DEBUG)\\freetype.o: freetype.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c freetype.cpp -o $(OBJDIR_DEBUG)\\freetype.o

$(OBJDIR_DEBUG)\\hde.o: hde.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c hde.cpp -o $(OBJDIR_DEBUG)\\hde.o

$(OBJDIR_DEBUG)\\main.o: main.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c main.cpp -o $(OBJDIR_DEBUG)\\main.o

$(OBJDIR_DEBUG)\\zhl.o: zhl.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c zhl.cpp -o $(OBJDIR_DEBUG)\\zhl.o

$(OBJDIR_DEBUG)\\CustomCrew.o: CustomCrew.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c CustomCrew.cpp -o $(OBJDIR_DEBUG)\\CustomCrew.o

$(OBJDIR_DEBUG)\\AugmentValues.o: AugmentValues.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c AugmentValues.cpp -o $(OBJDIR_DEBUG)\\AugmentValues.o

$(OBJDIR_DEBUG)\\Augments.o: Augments.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c Augments.cpp -o $(OBJDIR_DEBUG)\\Augments.o

$(OBJDIR_DEBUG)\\Balance.o: Balance.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c Balance.cpp -o $(OBJDIR_DEBUG)\\Balance.o

$(OBJDIR_DEBUG)\\Captain.o: Captain.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c Captain.cpp -o $(OBJDIR_DEBUG)\\Captain.o

$(OBJDIR_DEBUG)\\Colors.o: Colors.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c Colors.cpp -o $(OBJDIR_DEBUG)\\Colors.o

$(OBJDIR_DEBUG)\\CommandConsole.o: CommandConsole.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c CommandConsole.cpp -o $(OBJDIR_DEBUG)\\CommandConsole.o

$(OBJDIR_DEBUG)\\CrewMember_Extend.o: CrewMember_Extend.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c CrewMember_Extend.cpp -o $(OBJDIR_DEBUG)\\CrewMember_Extend.o

$(OBJDIR_DEBUG)\\CrewVTable.o: CrewVTable.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c CrewVTable.cpp -o $(OBJDIR_DEBUG)\\CrewVTable.o

$(OBJDIR_DEBUG)\\CustomAugments.o: CustomAugments.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c CustomAugments.cpp -o $(OBJDIR_DEBUG)\\CustomAugments.o

$(OBJDIR_DEBUG)\\ASMHooks.o: ASMHooks.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c ASMHooks.cpp -o $(OBJDIR_DEBUG)\\ASMHooks.o

$(OBJDIR_DEBUG)\\CustomEvents.o: CustomEvents.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c CustomEvents.cpp -o $(OBJDIR_DEBUG)\\CustomEvents.o

$(OBJDIR_DEBUG)\\CustomMap.o: CustomMap.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c CustomMap.cpp -o $(OBJDIR_DEBUG)\\CustomMap.o

$(OBJDIR_DEBUG)\\CustomSaves.o: CustomSaves.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c CustomSaves.cpp -o $(OBJDIR_DEBUG)\\CustomSaves.o

$(OBJDIR_DEBUG)\\CustomShips.o: CustomShips.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c CustomShips.cpp -o $(OBJDIR_DEBUG)\\CustomShips.o

$(OBJDIR_DEBUG)\\CustomSystems.o: CustomSystems.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c CustomSystems.cpp -o $(OBJDIR_DEBUG)\\CustomSystems.o

$(OBJDIR_DEBUG)\\CustomWeapons.o: CustomWeapons.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c CustomWeapons.cpp -o $(OBJDIR_DEBUG)\\CustomWeapons.o

$(OBJDIR_DEBUG)\\FTLGame.o: FTLGame.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c FTLGame.cpp -o $(OBJDIR_DEBUG)\\FTLGame.o

$(OBJDIR_DEBUG)\\Global.o: Global.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c Global.cpp -o $(OBJDIR_DEBUG)\\Global.o

clean_debug: 
	cmd /c del /f $(OBJ_DEBUG) $(OUT_DEBUG)
	cmd /c rd ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light
	cmd /c rd $(OBJDIR_DEBUG)

before_release: 
	cmd /c if not exist ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light md ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light
	cmd /c if not exist $(OBJDIR_RELEASE) md $(OBJDIR_RELEASE)

after_release: 

build_release: before_release out_release after_release

release: before_build build_release after_build

out_release: before_release $(OBJ_RELEASE) $(DEP_RELEASE)
	$(LD) -shared $(LIBDIR_RELEASE) $(OBJ_RELEASE)  -o $(OUT_RELEASE) $(LDFLAGS_RELEASE) $(LIB_RELEASE)

$(OBJDIR_RELEASE)\\HullNumbers.o: HullNumbers.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c HullNumbers.cpp -o $(OBJDIR_RELEASE)\\HullNumbers.o

$(OBJDIR_RELEASE)\\Infinite.o: Infinite.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c Infinite.cpp -o $(OBJDIR_RELEASE)\\Infinite.o

$(OBJDIR_RELEASE)\\MainMenu.o: MainMenu.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c MainMenu.cpp -o $(OBJDIR_RELEASE)\\MainMenu.o

$(OBJDIR_RELEASE)\\Misc.o: Misc.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c Misc.cpp -o $(OBJDIR_RELEASE)\\Misc.o

$(OBJDIR_RELEASE)\\Resources.o: Resources.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c Resources.cpp -o $(OBJDIR_RELEASE)\\Resources.o

$(OBJDIR_RELEASE)\\Seeds.o: Seeds.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c Seeds.cpp -o $(OBJDIR_RELEASE)\\Seeds.o

$(OBJDIR_RELEASE)\\ShipManager_Extend.o: ShipManager_Extend.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c ShipManager_Extend.cpp -o $(OBJDIR_RELEASE)\\ShipManager_Extend.o

$(OBJDIR_RELEASE)\\ShipTypeC.o: ShipTypeC.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c ShipTypeC.cpp -o $(OBJDIR_RELEASE)\\ShipTypeC.o

$(OBJDIR_RELEASE)\\SigScan.o: SigScan.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c SigScan.cpp -o $(OBJDIR_RELEASE)\\SigScan.o

$(OBJDIR_RELEASE)\\Wormhole.o: Wormhole.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c Wormhole.cpp -o $(OBJDIR_RELEASE)\\Wormhole.o

$(OBJDIR_RELEASE)\\freetype.o: freetype.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c freetype.cpp -o $(OBJDIR_RELEASE)\\freetype.o

$(OBJDIR_RELEASE)\\hde.o: hde.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c hde.cpp -o $(OBJDIR_RELEASE)\\hde.o

$(OBJDIR_RELEASE)\\main.o: main.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c main.cpp -o $(OBJDIR_RELEASE)\\main.o

$(OBJDIR_RELEASE)\\zhl.o: zhl.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c zhl.cpp -o $(OBJDIR_RELEASE)\\zhl.o

$(OBJDIR_RELEASE)\\CustomCrew.o: CustomCrew.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c CustomCrew.cpp -o $(OBJDIR_RELEASE)\\CustomCrew.o

$(OBJDIR_RELEASE)\\AugmentValues.o: AugmentValues.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c AugmentValues.cpp -o $(OBJDIR_RELEASE)\\AugmentValues.o

$(OBJDIR_RELEASE)\\Augments.o: Augments.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c Augments.cpp -o $(OBJDIR_RELEASE)\\Augments.o

$(OBJDIR_RELEASE)\\Balance.o: Balance.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c Balance.cpp -o $(OBJDIR_RELEASE)\\Balance.o

$(OBJDIR_RELEASE)\\Captain.o: Captain.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c Captain.cpp -o $(OBJDIR_RELEASE)\\Captain.o

$(OBJDIR_RELEASE)\\Colors.o: Colors.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c Colors.cpp -o $(OBJDIR_RELEASE)\\Colors.o

$(OBJDIR_RELEASE)\\CommandConsole.o: CommandConsole.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c CommandConsole.cpp -o $(OBJDIR_RELEASE)\\CommandConsole.o

$(OBJDIR_RELEASE)\\CrewMember_Extend.o: CrewMember_Extend.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c CrewMember_Extend.cpp -o $(OBJDIR_RELEASE)\\CrewMember_Extend.o

$(OBJDIR_RELEASE)\\CrewVTable.o: CrewVTable.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c CrewVTable.cpp -o $(OBJDIR_RELEASE)\\CrewVTable.o

$(OBJDIR_RELEASE)\\CustomAugments.o: CustomAugments.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c CustomAugments.cpp -o $(OBJDIR_RELEASE)\\CustomAugments.o

$(OBJDIR_RELEASE)\\ASMHooks.o: ASMHooks.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c ASMHooks.cpp -o $(OBJDIR_RELEASE)\\ASMHooks.o

$(OBJDIR_RELEASE)\\CustomEvents.o: CustomEvents.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c CustomEvents.cpp -o $(OBJDIR_RELEASE)\\CustomEvents.o

$(OBJDIR_RELEASE)\\CustomMap.o: CustomMap.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c CustomMap.cpp -o $(OBJDIR_RELEASE)\\CustomMap.o

$(OBJDIR_RELEASE)\\CustomSaves.o: CustomSaves.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c CustomSaves.cpp -o $(OBJDIR_RELEASE)\\CustomSaves.o

$(OBJDIR_RELEASE)\\CustomShips.o: CustomShips.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c CustomShips.cpp -o $(OBJDIR_RELEASE)\\CustomShips.o

$(OBJDIR_RELEASE)\\CustomSystems.o: CustomSystems.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c CustomSystems.cpp -o $(OBJDIR_RELEASE)\\CustomSystems.o

$(OBJDIR_RELEASE)\\CustomWeapons.o: CustomWeapons.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c CustomWeapons.cpp -o $(OBJDIR_RELEASE)\\CustomWeapons.o

$(OBJDIR_RELEASE)\\FTLGame.o: FTLGame.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c FTLGame.cpp -o $(OBJDIR_RELEASE)\\FTLGame.o

$(OBJDIR_RELEASE)\\Global.o: Global.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c Global.cpp -o $(OBJDIR_RELEASE)\\Global.o

clean_release: 
	cmd /c del /f $(OBJ_RELEASE) $(OUT_RELEASE)
	cmd /c rd ..\\Program\ Files\ (x86)\\Steam\\steamapps\\common\\FTL\ Faster\ Than\ Light
	cmd /c rd $(OBJDIR_RELEASE)

.PHONY: before_build after_build before_debug after_debug clean_debug before_release after_release clean_release

