#include "Global.h"
#include "Resources.h"

Global *Global::instance = new Global();

ResourceControl* Global::__resourceControl = NULL;
CApp* Global::__cApp = NULL;
ShipInfo** Global::__enemyShipInfo = NULL;
CFPS* Global::__cFPS = NULL;
BlueprintManager *Global::__blueprints = NULL;
SoundControl *Global::__soundControl = NULL;
MouseControl *Global::__mouseControl = NULL;
TextLibrary *Global::__textLibrary = NULL;
CrewMemberFactory *Global::__crewFactory = NULL;
TutorialManager *Global::__tutorialManager = NULL;

bool *Global::__rng = NULL;

HOOK_METHOD(CApp, OnInit, () -> int)
{
    G_->Initialize(this);
    return super();
}

void Global::Initialize(CApp *cApp)
{
    printf("Initializing Hyperspace...\n");
    __baseAddress = (DWORD)GetModuleHandle(NULL);


    __resourceControl = (ResourceControl*)(__baseAddress + __resourcesOffset);
    __cApp = cApp;
    __cFPS = (CFPS*)(__baseAddress + __cFPSOffset);
    __enemyShipInfo = (ShipInfo**)(__baseAddress + __shipInfoOffset);
    __blueprints = (BlueprintManager*)(__baseAddress + __blueprintOffset);
    __soundControl = (SoundControl*)(__baseAddress + __soundOffset);
    __mouseControl = (MouseControl*)(__baseAddress + __mouseOffset);
    __textLibrary = (TextLibrary*)(__baseAddress + __textOffset);
    __crewFactory = (CrewMemberFactory*)(__baseAddress + __crewFactoryOffset);
    __tutorialManager = (TutorialManager*)(__baseAddress + __tutorialOffset);

    __rng = (bool*)(__baseAddress + __rngOffset);


    SetWindowTextA((HWND)GetModuleHandle(NULL), "FTL: Hyperspace");
    printf("Hyperspace initialized\n");
}