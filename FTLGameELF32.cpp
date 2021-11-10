#include "FTLGameELF32.h"
#include "zhl_internal.h"

#ifdef _WIN32
    #define FUNC_NAKED __declspec(naked)
#elif defined(__linux__)
    #if __GNUC__ < 8
        #error "GCC version too old, must be at least version 8"
    #endif
    #define FUNC_NAKED __attribute__((naked))
#endif

using namespace ZHL;

namespace _func0
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AchievementTracker::LoadAchievementDescriptions", typeid(void (AchievementTracker::*)()), "5589e557565381ecfc0101008b4508????????????????89853cfefeff65a114000000", argdata, 1, 6, &func);
}

FUNC_NAKED void AchievementTracker::LoadAchievementDescriptions()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func0::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AchievementTracker::GetShipAchievements", typeid(void *(*)(void *, AchievementTracker *, const std::string &)), "5557565383ec3c8b442458c744240c02000000", argdata, 3, 2, &func);
}

FUNC_NAKED void *AchievementTracker::GetShipAchievements(void *unk, AchievementTracker *tracker, const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// name
		"push [ebp+12]\n\t"		// tracker
		"push [ebp+8]\n\t"		// unk
	);
	__asm__("call %0\n\t" :: "m"(_func1::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func2
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AchievementTracker::SetAchievement", typeid(void (AchievementTracker::*)(const std::string &, bool , bool )), "5589e557565331db83ec4c0fb645108b7508", argdata, 4, 6, &func);
}

FUNC_NAKED void AchievementTracker::SetAchievement(const std::string &achievement, bool noPopup, bool sendToServer)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// sendToServer
		"push [ebp+16]\n\t"		// noPopup
		"push [ebp+12]\n\t"		// achievement
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func2::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func3
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AchievementTracker::UnlockShip", typeid(void (AchievementTracker::*)(int , int )), "538b4c24108b4424088b54240c83f902????8b580c8d14528d14938b128d1c8a", argdata, 3, 6, &func);
}

FUNC_NAKED void AchievementTracker::UnlockShip(int shipId, int shipType)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// shipType
		"push [ebp+12]\n\t"		// shipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func3::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func4
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AchievementTracker::SetSectorEight", typeid(void (AchievementTracker::*)()), "5589e557565381ec8c0000008d45b88d7dd8", argdata, 1, 6, &func);
}

FUNC_NAKED void AchievementTracker::SetSectorEight()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func4::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func5
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AchievementTracker::GetShipMarker", typeid(int (AchievementTracker::*)(const std::string &, const std::string &)), "5557565383ec2c8b7424448b5c24488b168b038b7af48b68f48954240489042439ef89e90f46cf894c2408", argdata, 3, 2, &func);
}

FUNC_NAKED int AchievementTracker::GetShipMarker(const std::string &baseName, const std::string &thisName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// thisName
		"push [ebp+12]\n\t"		// baseName
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func5::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func6
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AchievementTracker::SetFlag", typeid(void (AchievementTracker::*)(const std::string &)), "5589e557565383ec5c8b5d088d532889d78955b88b550c8d43248945b4894424048d45c489042489542408", argdata, 2, 6, &func);
}

FUNC_NAKED void AchievementTracker::SetFlag(const std::string &flagName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// flagName
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func6::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func7
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AchievementTracker::GetFlag", typeid(bool (AchievementTracker::*)(const std::string &)), "5589e557565383ec5c8b5d088d432489c28945b48d432889c78945b88b450c89542404894424088d45c4890424??????????31c089fa83ec043b7dc4", argdata, 2, 2, &func);
}

FUNC_NAKED bool AchievementTracker::GetFlag(const std::string &flagName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// flagName
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func7::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func8
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AchievementTracker::SaveProfile", typeid(void (AchievementTracker::*)(int )), "5557565383ec1c8b7c24308b6f188b5f1c29ebc1fb0285db", argdata, 2, 6, &func);
}

FUNC_NAKED void AchievementTracker::SaveProfile(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func8::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func9
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AchievementTracker::LoadProfile", typeid(void (AchievementTracker::*)(int , int )), "5589e557565383ec4c8b750c8d7dd8893424", argdata, 3, 6, &func);
}

FUNC_NAKED void AchievementTracker::LoadProfile(int file, int version)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// version
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func9::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func10
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AchievementTracker::SetVictoryAchievement", typeid(void (AchievementTracker::*)()), "57565383ec308b7424408d5c2420891c248d7e6c897c2404", argdata, 1, 6, &func);
}

FUNC_NAKED void AchievementTracker::SetVictoryAchievement()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func10::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func11
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x2ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Animation::constructor", typeid(void (Animation::*)(const std::string &, int , float , Pointf , int , int , int , int )), "5557565383ec3c8b5c????8b44????8b54????f30f1044????c74304000000008b7c????89433c8d??242f8b74????f30f114324", argdata, 9, 6, &func);
}

FUNC_NAKED void Animation::constructor(const std::string &_image, int _length, float _time, Pointf _position, int _imageWidth, int _imageHeight, int _stripStartX, int _numFrames)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+44]\n\t"		// _numFrames
		"push [ebp+40]\n\t"		// _stripStartX
		"push [ebp+36]\n\t"		// _imageHeight
		"push [ebp+32]\n\t"		// _imageWidth
		"push [ebp+28]\n\t"		// _position
		"push [ebp+24]\n\t"		// _position
		"push [ebp+20]\n\t"		// _time
		"push [ebp+16]\n\t"		// _length
		"push [ebp+12]\n\t"		// _image
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func11::func));
	__asm__
	(
		"add esp, 40\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 40\n\t"
	);
}

namespace _func12
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x4ff, 0x1ff};
	static FunctionDefinition funcObj("Animation::OnRender", typeid(void (Animation::*)(float , GL_Color , bool )), "57565383ec508b4424788b5c246084c089c675??0fb6735cf30f10442464f30f104b708b7b58f30f59442474f30f11442420", argdata, 4, 6, &func);
}

FUNC_NAKED void Animation::OnRender(float opacity, GL_Color color, bool mirror)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+32]\n\t"		// mirror
		"push [ebp+28]\n\t"		// color
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// opacity
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func12::func));
	__asm__
	(
		"add esp, 28\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 28\n\t"
	);
}

namespace _func13
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Animation::Update", typeid(void (Animation::*)()), "5557565383ec4c8b5c24608b4304807b3000f30f2ad0", argdata, 1, 6, &func);
}

FUNC_NAKED void Animation::Update()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func13::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func14
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Animation::SetCurrentFrame", typeid(void (Animation::*)(int )), "8b4424048b48048d51ff395424080f4e54240885d27e??f30f2ac20f57d2f30f2ad9", argdata, 2, 6, &func);
}

FUNC_NAKED void Animation::SetCurrentFrame(int frame)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// frame
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func14::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func15
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Animation::Start", typeid(void (Animation::*)(bool )), "5383ec28807c2434008b5c24300f85????????f30f10432c0f57c9c6433200c6433001c6433100f30f5e43240f2ec1", argdata, 2, 6, &func);
}

FUNC_NAKED void Animation::Start(bool reset)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// reset
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func15::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func16
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Animation::AddSoundQueue", typeid(void (Animation::*)(int , const std::string &)), "565383ec148b5424248b4424208b74242885d278??8b48608b406429c8c1f802", argdata, 3, 6, &func);
}

FUNC_NAKED void Animation::AddSoundQueue(int unk, const std::string &sound)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// sound
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func16::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func17
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Animation::SetAnimationId", typeid(void (Animation::*)(GL_Texture *)), "8b4424048b542408391074??89d185c9891074??8b4a0489480889d185c974??8b520889500c", argdata, 2, 6, &func);
}

FUNC_NAKED void Animation::SetAnimationId(GL_Texture *tex)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// tex
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func17::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func18
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Animation::destructor", typeid(void (Animation::*)()), "5557565383ec2c8d44241f894424048b4424408b40748944240883e80c890424e8????????8b4424408b4c24408b40648b69608944240839e8", argdata, 1, 6, &func);
}

FUNC_NAKED void Animation::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func18::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func19
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Animation::StartReverse", typeid(void (Animation::*)(bool )), "5383ec288b4424348b5c243084c075??f30f10432c0f57c9c6433200c64330010f2ec8", argdata, 2, 6, &func);
}

FUNC_NAKED void Animation::StartReverse(bool reset)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// reset
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func19::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func20
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Animation::SetProgress", typeid(void (Animation::*)(float )), "8b4424040f57c0f30f10542408f30f1048248b500480783000f30f59d1f30f2adaf30f11502c", argdata, 2, 6, &func);
}

FUNC_NAKED void Animation::SetProgress(float progress)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// progress
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func20::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func21
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Animation::RandomStart", typeid(int (Animation::*)()), "5383ec08803d????????008b5c241075??e8????????8b4b0499c6433200c6433001c6433100f7f9", argdata, 1, 2, &func);
}

FUNC_NAKED int Animation::RandomStart()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func21::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func22
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AnimationControl::GetAnimation", typeid(Animation *(*)(Animation &, AnimationControl *, const std::string &)), "5589e557565381ec1c0100008b4510c7442404????????890424??????????85c0", argdata, 3, 2, &func);
}

FUNC_NAKED Animation *AnimationControl::GetAnimation(Animation &animRef, AnimationControl *animControl, const std::string &animName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// animName
		"push [ebp+12]\n\t"		// animControl
		"push [ebp+8]\n\t"		// animRef
	);
	__asm__("call %0\n\t" :: "m"(_func22::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func23
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AnimationTracker::Update", typeid(void (AnimationTracker::*)()), "5383ec188b5c2420807b10000f84????????807b08000f84????????f30f104b180f57c00f2ec80f87????????807b11000f84????????0f2e430c7a??8d760075??", argdata, 1, 6, &func);
}

FUNC_NAKED void AnimationTracker::Update()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func23::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func24
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AnimationTracker::SetLoop", typeid(void (AnimationTracker::*)(bool , float )), "8b4424048b542408f30f1044240cc7401800000000885008f30f114014", argdata, 3, 6, &func);
}

FUNC_NAKED void AnimationTracker::SetLoop(bool loop, float loopDelay)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// loopDelay
		"push [ebp+12]\n\t"		// loop
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func24::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func25
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AnimationTracker::Stop", typeid(void (AnimationTracker::*)(bool )), "8b54????0f57c08b44????84d2c640100074??f30f10400cf30f11400c", argdata, 2, 6, &func);
}

FUNC_NAKED void AnimationTracker::Stop(bool resetTime)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// resetTime
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func25::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func26
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AnimationTracker::Start", typeid(void (AnimationTracker::*)(float )), "8b44????f30f1044????c6401200c6401001f30f11400cc6401100", argdata, 2, 6, &func);
}

FUNC_NAKED void AnimationTracker::Start(float time)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// time
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func26::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func27
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AnimationTracker::StartReverse", typeid(void (AnimationTracker::*)(float )), "8b44????0f57c9f30f1044????0f2ec8c6401200c640100176??f30f104004f30f11400cc6401101", argdata, 2, 6, &func);
}

FUNC_NAKED void AnimationTracker::StartReverse(float time)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// time
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func27::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func28
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AnimationTracker::Progress", typeid(float (AnimationTracker::*)(float )), "83ec040f57c08b44????f30f104c????8078100074??0f2ec10f28d077??f30f10400cf30f5ec10f2ec2", argdata, 2, 2, &func);
}

FUNC_NAKED float AnimationTracker::Progress(float speed)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// speed
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func28::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func29
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AnimationTracker::SetProgress", typeid(void (AnimationTracker::*)(float )), "8b442404f30f104004f30f59442408f30f11400c", argdata, 2, 6, &func);
}

FUNC_NAKED void AnimationTracker::SetProgress(float time)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// time
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func29::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func30
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AnimationTracker::GetAlphaLevel", typeid(float (AnimationTracker::*)(bool )), "83ec048b44????f30f1005????????f30f1015????????807c????00f30f594004f30f10480cf30f5cc80f28d80f54caf30f5cd90f28cbf30f5ec8", argdata, 2, 2, &func);
}

FUNC_NAKED float AnimationTracker::GetAlphaLevel(bool reverse)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// reverse
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func30::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func31
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ArmamentControl::Dragging", typeid(bool (ArmamentControl::*)()), "5383ec188b5c2420837b70ff74??8b43688b536c894424048d436089542408890424", argdata, 1, 2, &func);
}

FUNC_NAKED bool ArmamentControl::Dragging()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func31::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func32
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ArmamentControl::SetPosition", typeid(void (ArmamentControl::*)(int , int )), "565383ec148b7424208b4424248b54242839461c74??89461c", argdata, 3, 6, &func);
}

FUNC_NAKED void ArmamentControl::SetPosition(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func32::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func33
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ArmamentControl::KeyDown", typeid(bool (ArmamentControl::*)(SDLKey )), "57565331db83ec108b7c24208b7424248b57108b471429d0c1f80285c0", argdata, 2, 2, &func);
}

FUNC_NAKED bool ArmamentControl::KeyDown(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func33::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func34
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("ArtilleryBox::constructor", typeid(void (ArtilleryBox::*)(Point , ArtillerySystem *)), "565383ec248b5c24308b74243c8b4424348b542438891c2481c3f4010000", argdata, 3, 6, &func);
}

FUNC_NAKED void ArtilleryBox::constructor(Point pos, ArtillerySystem *sys)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func34::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func35
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ArtilleryBox::OnRender", typeid(void (ArtilleryBox::*)(bool )), "5557565381ec1c0100008b9c24300100008d6c24580fb6842434010000891c2489442404e8????????e8????????c744240800000000", argdata, 2, 6, &func);
}

FUNC_NAKED void ArtilleryBox::OnRender(bool ignoreStatus)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ignoreStatus
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func35::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func36
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ArtillerySystem::OnLoop", typeid(void (ArtillerySystem::*)()), "5589e557565383ec6c8b5d08891c24e8????????891c24e8????????85c0", argdata, 1, 6, &func);
}

FUNC_NAKED void ArtillerySystem::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func36::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func37
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AsteroidGenerator::constructor", typeid(void (AsteroidGenerator::*)()), "5557565383ec1cc70424200000008b5c2430e8????????89c78d400c89c1894424048d471039c1", argdata, 1, 6, &func);
}

FUNC_NAKED void AsteroidGenerator::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func37::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func38
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AsteroidGenerator::Initialize", typeid(float (AsteroidGenerator::*)(int , int , bool )), ".5383ec188b4424288b5c24208b54242c89c1c1e91f89838c00000001c8d1f883f801", argdata, 4, 2, &func);
}

FUNC_NAKED float AsteroidGenerator::Initialize(int numberOfShips, int shieldCount, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk
		"push [ebp+16]\n\t"		// shieldCount
		"push [ebp+12]\n\t"		// numberOfShips
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func38::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func39
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AsteroidGenerator::SetNumShips", typeid(void (AsteroidGenerator::*)(int )), ".8b5424088b442404895070", argdata, 2, 6, &func);
}

FUNC_NAKED void AsteroidGenerator::SetNumShips(int ships)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ships
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func39::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func40
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AsteroidGenerator::GetNextAsteroid", typeid(Projectile *(AsteroidGenerator::*)()), ".5557565381ecbc0100008b9c24d00100008b43083943180f84????????8b08", argdata, 1, 2, &func);
}

FUNC_NAKED Projectile *AsteroidGenerator::GetNextAsteroid()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func40::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func41
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AsteroidGenerator::OnLoop", typeid(void (AsteroidGenerator::*)()), ".5589e557565383ec3c8b5d0880bb880000000075??8d65f45b5e5f5d", argdata, 1, 6, &func);
}

FUNC_NAKED void AsteroidGenerator::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func41::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func42
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AsteroidGenerator::GetNextState", typeid(float (AsteroidGenerator::*)()), ".5383ec188b5c24208b437485c074??c743740000000031c0", argdata, 1, 2, &func);
}

FUNC_NAKED float AsteroidGenerator::GetNextState()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func42::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func43
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AsteroidGenerator::UpdateState", typeid(void (AsteroidGenerator::*)()), ".5383ec18c70424????????8b5c2420e8????????f30f108380000000", argdata, 1, 6, &func);
}

FUNC_NAKED void AsteroidGenerator::UpdateState()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func43::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func44
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AsteroidGenerator::SaveAsteroids", typeid(bool (AsteroidGenerator::*)(void *)), ".565383ec148b742420f30f1005????????8b5c2424f30f598680000000891c24f30f2cc0", argdata, 2, 2, &func);
}

FUNC_NAKED bool AsteroidGenerator::SaveAsteroids(void *file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func44::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func45
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AsteroidGenerator::LoadAsteroids", typeid(void (AsteroidGenerator::*)(void *)), ".565383ec148b7424248b5c2420893424", argdata, 2, 6, &func);
}

FUNC_NAKED void AsteroidGenerator::LoadAsteroids(void *file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func45::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func46
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AugmentEquipBox::RenderIcon", typeid(void (AugmentEquipBox::*)()), "5383ec188b5c2420e8????????c7442408000000008b4338f7d8f30f2ac0", argdata, 1, 6, &func);
}

FUNC_NAKED void AugmentEquipBox::RenderIcon()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func46::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func47
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AugmentEquipBox::CheckContents", typeid(void (AugmentEquipBox::*)()), "5589e557565383ec3c8b7d088b477085c0", argdata, 1, 6, &func);
}

FUNC_NAKED void AugmentEquipBox::CheckContents()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func47::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func48
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("AugmentEquipBox::RemoveItem", typeid(void (AugmentEquipBox::*)()), "565383ec248b5c24308b437085c0", argdata, 1, 6, &func);
}

FUNC_NAKED void AugmentEquipBox::RemoveItem()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func48::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func49
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("AugmentStoreBox::constructor", typeid(void (AugmentStoreBox::*)(ShipManager *, const AugmentBlueprint *)), "5557565383ec2c8d44241a8b5c24408d7c241c8b742448", argdata, 3, 6, &func);
}

FUNC_NAKED void AugmentStoreBox::constructor(ShipManager *ship, const AugmentBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// bp
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func49::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func50
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("BatteryBox::constructor", typeid(void (BatteryBox::*)(Point , BatterySystem *)), "5557565383ec7c8b9c24900000008d7c243e8b9424980000008bb4249c0000008b842494000000", argdata, 3, 6, &func);
}

FUNC_NAKED void BatteryBox::constructor(Point pos, BatterySystem *sys)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func50::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func51
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff, 0x2ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BeamWeapon::constructor", typeid(void (BeamWeapon::*)(Pointf , int , int , Pointf , Pointf , int , Targetable *)), "565383ec308b451c8b55208b75088b5d30", argdata, 8, 6, &func);
}

FUNC_NAKED void BeamWeapon::constructor(Pointf _position, int _ownerId, int _targetId, Pointf _target, Pointf _target2, int _length, Targetable *_targetable)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+48]\n\t"		// _targetable
		"push [ebp+44]\n\t"		// _length
		"push [ebp+40]\n\t"		// _target2
		"push [ebp+36]\n\t"		// _target2
		"push [ebp+32]\n\t"		// _target
		"push [ebp+28]\n\t"		// _target
		"push [ebp+24]\n\t"		// _targetId
		"push [ebp+20]\n\t"		// _ownerId
		"push [ebp+16]\n\t"		// _position
		"push [ebp+12]\n\t"		// _position
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func51::func));
	__asm__
	(
		"add esp, 44\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 44\n\t"
	);
}

namespace _func52
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Blueprint::destructor", typeid(void (Blueprint::*)()), "565383ec248b5c24308b433cc703????????8d50f481fa????????75??8b43348d50f481fa????????0f85????????8b43188d50f481fa????????", argdata, 1, 6, &func);
}

FUNC_NAKED void Blueprint::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func52::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func53
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Blueprint::GetNameShort", typeid(std::string *(*)(std::string &, Blueprint *)), "5589e55383ec148b450c8b5d0880781400", argdata, 2, 2, &func);
}

FUNC_NAKED std::string *Blueprint::GetNameShort(std::string &ret, Blueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// ret
	);
	__asm__("call %0\n\t" :: "m"(_func53::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func54
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetBlueprintList", typeid(std::vector<std::string> &(*)(std::vector<std::string> &, BlueprintManager *, const std::string &)), "5589e557565383ec5c8b5d10e8????????84c08b450c", argdata, 3, 2, &func);
}

FUNC_NAKED std::vector<std::string> &BlueprintManager::GetBlueprintList(std::vector<std::string> &vec, BlueprintManager *bpM, const std::string &str)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// str
		"push [ebp+12]\n\t"		// bpM
		"push [ebp+8]\n\t"		// vec
	);
	__asm__("call %0\n\t" :: "m"(_func54::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func55
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetShipBlueprint", typeid(ShipBlueprint *(BlueprintManager::*)(const std::string &, int )), "5589e557565383ec6c8b7d0c8d45d88b75088904248b5d10897c2404", argdata, 3, 2, &func);
}

FUNC_NAKED ShipBlueprint *BlueprintManager::GetShipBlueprint(const std::string &name, int sector)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// sector
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func55::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func56
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetDroneBlueprint", typeid(DroneBlueprint *(BlueprintManager::*)(const std::string &)), ".5589e557565383ec4c8d7dd78d75d8897c2408", argdata, 2, 2, &func);
}

FUNC_NAKED DroneBlueprint *BlueprintManager::GetDroneBlueprint(const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func56::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func57
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetAugmentValue", typeid(float (BlueprintManager::*)(const std::string &)), "5589e557565383ec5c8b5d088d434c89c28945b48d435089c7", argdata, 2, 2, &func);
}

FUNC_NAKED float BlueprintManager::GetAugmentValue(const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func57::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func58
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetItemBlueprint", typeid(ItemBlueprint *(BlueprintManager::*)(const std::string &)), "5589e557565383ec5c8b55088b45088bbacc00000005c80000008945b885ff", argdata, 2, 2, &func);
}

FUNC_NAKED ItemBlueprint *BlueprintManager::GetItemBlueprint(const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func58::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func59
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetAugmentBlueprint", typeid(AugmentBlueprint *(BlueprintManager::*)(const std::string &)), ".5589e557565383ec4c8d7dd78d75d8897c2408", argdata, 2, 2, &func);
}

FUNC_NAKED AugmentBlueprint *BlueprintManager::GetAugmentBlueprint(const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func59::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func60
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::ProcessWeaponBlueprint", typeid(WeaponBlueprint *(*)(WeaponBlueprint *, BlueprintManager *, rapidxml::xml_node<char> *)), "5589e557565381ec8c0000008b45088b75108d7db0890424", argdata, 3, 2, &func);
}

FUNC_NAKED WeaponBlueprint *BlueprintManager::ProcessWeaponBlueprint(WeaponBlueprint *bp, BlueprintManager *bpM, rapidxml::xml_node<char> *node)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// node
		"push [ebp+12]\n\t"		// bpM
		"push [ebp+8]\n\t"		// bp
	);
	__asm__("call %0\n\t" :: "m"(_func60::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func61
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::ProcessDescription", typeid(Description *(*)(Description *, BlueprintManager *, rapidxml::xml_node<char> *)), "5589e557565383ec6c8b7d088d5de0895c2408", argdata, 3, 2, &func);
}

FUNC_NAKED Description *BlueprintManager::ProcessDescription(Description *desc, BlueprintManager *bpM, rapidxml::xml_node<char> *node)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// node
		"push [ebp+12]\n\t"		// bpM
		"push [ebp+8]\n\t"		// desc
	);
	__asm__("call %0\n\t" :: "m"(_func61::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func62
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::ProcessEffectsBlueprint", typeid(EffectsBlueprint *(*)(EffectsBlueprint *, BlueprintManager *, rapidxml::xml_node<char> *)), "55660fefc089e557565383ec3c8b45088d5ddc", argdata, 3, 2, &func);
}

FUNC_NAKED EffectsBlueprint *BlueprintManager::ProcessEffectsBlueprint(EffectsBlueprint *bp, BlueprintManager *bpM, rapidxml::xml_node<char> *node)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// node
		"push [ebp+12]\n\t"		// bpM
		"push [ebp+8]\n\t"		// bp
	);
	__asm__("call %0\n\t" :: "m"(_func62::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func63
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetCrewBlueprint", typeid(CrewBlueprint *(*)(CrewBlueprint *, BlueprintManager *, const std::string &)), "5589e557565383ec5c8b5d088b7510", argdata, 3, 2, &func);
}

FUNC_NAKED CrewBlueprint *BlueprintManager::GetCrewBlueprint(CrewBlueprint *bp, BlueprintManager *bpM, const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// name
		"push [ebp+12]\n\t"		// bpM
		"push [ebp+8]\n\t"		// bp
	);
	__asm__("call %0\n\t" :: "m"(_func63::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func64
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetWeaponBlueprint", typeid(WeaponBlueprint *(BlueprintManager::*)(const std::string &)), "5589e557565383ec7c8b5d088b750c", argdata, 2, 2, &func);
}

FUNC_NAKED WeaponBlueprint *BlueprintManager::GetWeaponBlueprint(const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func64::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func65
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetRandomAugment", typeid(void (*)(std::vector<AugmentBlueprint*> &, BlueprintManager *, int , bool )), "5589e55383ec240fb655148b450c8b5d08895424108b551089442404891c248954240c8d504c", argdata, 4, 6, &func);
}

FUNC_NAKED void BlueprintManager::GetRandomAugment(std::vector<AugmentBlueprint*> &vec, BlueprintManager *bpM, int count, bool demo_lock)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// demo_lock
		"push [ebp+16]\n\t"		// count
		"push [ebp+12]\n\t"		// bpM
		"push [ebp+8]\n\t"		// vec
	);
	__asm__("call %0\n\t" :: "m"(_func65::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func66
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetSystemBlueprint", typeid(SystemBlueprint *(BlueprintManager::*)(const std::string &)), "5589e557565383ec5c8b55088b45088bbae4000000", argdata, 2, 2, &func);
}

FUNC_NAKED SystemBlueprint *BlueprintManager::GetSystemBlueprint(const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func66::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func67
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetUnusedCrewName", typeid(void (*)(std::string &, BlueprintManager *, bool *)), "5589e557565383ec3c8b4508c745c415000000", argdata, 3, 6, &func);
}

FUNC_NAKED void BlueprintManager::GetUnusedCrewName(std::string &strRef, BlueprintManager *bpM, bool *isMale_ret)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// isMale_ret
		"push [ebp+12]\n\t"		// bpM
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func67::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func68
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetCrewName", typeid(void (*)(std::string &, BlueprintManager *, bool *)), "5557565383ec4c8b5c2464c7442404????????", argdata, 3, 6, &func);
}

FUNC_NAKED void BlueprintManager::GetCrewName(std::string &strRef, BlueprintManager *bpM, bool *isMale_ret)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// isMale_ret
		"push [ebp+12]\n\t"		// bpM
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func68::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func69
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetRandomWeapon", typeid(void (*)(std::vector<WeaponBlueprint*> &, BlueprintManager *, int , bool )), "5589e55383ec240fb655148b450c8b5d08895424108b551089442404891c248954240c8d501c", argdata, 4, 6, &func);
}

FUNC_NAKED void BlueprintManager::GetRandomWeapon(std::vector<WeaponBlueprint*> &vec, BlueprintManager *bpM, int count, bool demo_lock)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// demo_lock
		"push [ebp+16]\n\t"		// count
		"push [ebp+12]\n\t"		// bpM
		"push [ebp+8]\n\t"		// vec
	);
	__asm__("call %0\n\t" :: "m"(_func69::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func70
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BlueprintManager::GetRandomDrone", typeid(void (*)(std::vector<DroneBlueprint*> &, BlueprintManager *, int , bool )), "5589e55383ec240fb655148b450c8b5d08895424108b551089442404891c248954240c8d5034", argdata, 4, 6, &func);
}

FUNC_NAKED void BlueprintManager::GetRandomDrone(std::vector<DroneBlueprint*> &vec, BlueprintManager *bpM, int count, bool demo_lock)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// demo_lock
		"push [ebp+16]\n\t"		// count
		"push [ebp+12]\n\t"		// bpM
		"push [ebp+8]\n\t"		// vec
	);
	__asm__("call %0\n\t" :: "m"(_func70::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func71
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BoarderPodDrone::constructor", typeid(void (BoarderPodDrone::*)(int , int , const DroneBlueprint &)), "5589e557565381ecdc0000008b45148b4d088dbd58ffffff", argdata, 4, 6, &func);
}

FUNC_NAKED void BoarderPodDrone::constructor(int _iShipId, int _selfId, const DroneBlueprint &_bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// _bp
		"push [ebp+16]\n\t"		// _selfId
		"push [ebp+12]\n\t"		// _iShipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func71::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func72
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BoarderPodDrone::SetMovementTarget", typeid(void (BoarderPodDrone::*)(Targetable *)), "5383ec288b4424348b5c243085c0", argdata, 2, 6, &func);
}

FUNC_NAKED void BoarderPodDrone::SetMovementTarget(Targetable *target)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// target
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func72::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func73
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff, 0x2ff};
	static FunctionDefinition funcObj("BombProjectile::constructor", typeid(void (BombProjectile::*)(Pointf , int , int , Pointf )), "5589e557565381ecdc0000008b451c8b55208d9d54ffffff", argdata, 5, 6, &func);
}

FUNC_NAKED void BombProjectile::constructor(Pointf _position, int _ownerId, int _targetId, Pointf _target)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+32]\n\t"		// _target
		"push [ebp+28]\n\t"		// _target
		"push [ebp+24]\n\t"		// _targetId
		"push [ebp+20]\n\t"		// _ownerId
		"push [ebp+16]\n\t"		// _position
		"push [ebp+12]\n\t"		// _position
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func73::func));
	__asm__
	(
		"add esp, 28\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 28\n\t"
	);
}

namespace _func74
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("BossShip::Restart", typeid(void (BossShip::*)()), "8b442404c7803401000000000000c7806001000001000000c6805c01000001", argdata, 1, 6, &func);
}

FUNC_NAKED void BossShip::Restart()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func74::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func75
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("BossShip::IncomingFire", typeid(bool (BossShip::*)()), ".8b442404f30f100d????????f30f108044010000f30f5c8040010000", argdata, 1, 2, &func);
}

FUNC_NAKED bool BossShip::IncomingFire()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func75::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func76
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BossShip::constructor", typeid(void (BossShip::*)(SpaceManager *)), ".!5383ec188b5c24208b442424c744240c01000000", argdata, 2, 6, &func);
}

FUNC_NAKED void BossShip::constructor(SpaceManager *space)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// space
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func76::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func77
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("BossShip::ClearLocation", typeid(int (BossShip::*)()), ".5383ec188b5c24208b430885c074??8b10", argdata, 1, 2, &func);
}

FUNC_NAKED int BossShip::ClearLocation()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func77::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func78
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("BossShip::Defeated", typeid(char (BossShip::*)()), ".83ec1c31c08b54242083ba3401000003", argdata, 1, 2, &func);
}

FUNC_NAKED char BossShip::Defeated()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func78::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func79
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("BossShip::GetSubEvent", typeid(int (BossShip::*)()), ".5557565383ec3c8b5c2450891c24e8????????84c0", argdata, 1, 2, &func);
}

FUNC_NAKED int BossShip::GetSubEvent()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func79::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func80
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("BossShip::StartStage", typeid(void (BossShip::*)()), ".5557565381ec1c0100008b8424300100008d5c24588bbc2430010000", argdata, 1, 6, &func);
}

FUNC_NAKED void BossShip::StartStage()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func80::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func81
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BossShip::SaveBoss", typeid(void (BossShip::*)(void *)), ".57565383ec108b7c24208b7424248b873401000089342489442404", argdata, 2, 6, &func);
}

FUNC_NAKED void BossShip::SaveBoss(void *file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func81::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func82
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("BossShip::GetEvent", typeid(LocationEvent *(BossShip::*)()), ".5557565381ec0c0100008d742474893424e8????????8b1d????????", argdata, 1, 2, &func);
}

FUNC_NAKED LocationEvent *BossShip::GetEvent()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func82::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func83
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("BossShip::LoadBoss", typeid(int (BossShip::*)(void *)), ".5557565383ec2c8b5c24448b6c2440891c24", argdata, 2, 2, &func);
}

FUNC_NAKED int BossShip::LoadBoss(void *file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func83::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func84
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("BossShip::OnLoop", typeid(void (BossShip::*)()), ".5557565383ec2c8b5c2440c6831001000001891c24", argdata, 1, 6, &func);
}

FUNC_NAKED void BossShip::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func84::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func85
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("Button::SetLocation", typeid(void (Button::*)(const Point )), "5756538b4424108b5424148b4c24188b58048b700839d3", argdata, 2, 6, &func);
}

FUNC_NAKED void Button::SetLocation(const Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func85::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func86
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Button::OnInit", typeid(void (Button::*)(const std::string &, int , int )), "5557565383ec4c8b6c2464", argdata, 4, 6, &func);
}

FUNC_NAKED void Button::OnInit(const std::string &img, int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// y
		"push [ebp+16]\n\t"		// x
		"push [ebp+12]\n\t"		// img
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func86::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func87
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Button::constructor", typeid(void (Button::*)()), "565383ec148b5c24208d4304c703????????8d7324", argdata, 1, 6, &func);
}

FUNC_NAKED void Button::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func87::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func88
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Button::OnRender", typeid(void (Button::*)()), "57565383ec408b5c24508b435485c0", argdata, 1, 6, &func);
}

FUNC_NAKED void Button::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func88::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func89
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Button::SetInactiveImage", typeid(void (Button::*)(GL_Texture *)), "8b4424048b542408395048", argdata, 2, 6, &func);
}

FUNC_NAKED void Button::SetInactiveImage(GL_Texture *texture)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// texture
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func89::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func90
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Button::SetActiveImage", typeid(void (Button::*)(GL_Texture *)), "8b4424048b54240839504c", argdata, 2, 6, &func);
}

FUNC_NAKED void Button::SetActiveImage(GL_Texture *texture)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// texture
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func90::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func91
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Button::SetImageBase", typeid(void (Button::*)(const std::string &)), "5557565383ec2c8b7c24448d5c241c891c248b742440897c2404", argdata, 2, 6, &func);
}

FUNC_NAKED void Button::SetImageBase(const std::string &imageBase)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// imageBase
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func91::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func92
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CAchievement::OnRender", typeid(void (CAchievement::*)(Point , int , bool )), "5589e557565381ec9c0000008b45188b7d108b750c8b5d0889458c", argdata, 4, 6, &func);
}

FUNC_NAKED void CAchievement::OnRender(Point pos, int selected, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// unk
		"push [ebp+20]\n\t"		// selected
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func92::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func93
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CAchievement::constructor", typeid(void (CAchievement::*)()), "5557565383ec2c8b5c24408d74241c897424088d7c241a", argdata, 1, 6, &func);
}

FUNC_NAKED void CAchievement::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func93::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func94
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnRequestExit", typeid(int (CApp::*)()), "5383ec188b5c24208b430885c074??8b530c", argdata, 1, 2, &func);
}

FUNC_NAKED int CApp::OnRequestExit()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func94::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func95
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnExit", typeid(int (CApp::*)()), "83ec1ce8????????c744240400000000c70424????????", argdata, 1, 2, &func);
}

FUNC_NAKED int CApp::OnExit()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func95::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func96
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::OnMButtonDown", typeid(void (CApp::*)(int , int )), "8b442404????????????0075??80781000", argdata, 3, 6, &func);
}

FUNC_NAKED void CApp::OnMButtonDown(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func96::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func97
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::OnTextInput", typeid(void (CApp::*)(int )), ".8b4424048b542408????????????0075??80781000", argdata, 2, 6, &func);
}

FUNC_NAKED void CApp::OnTextInput(int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func97::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func98
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::OnTextEvent", typeid(void (CApp::*)(CEvent::TextEvent )), ".8b4424048b542408????????????0075??80781000", argdata, 2, 6, &func);
}

FUNC_NAKED void CApp::OnTextEvent(CEvent::TextEvent textEvent)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// textEvent
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func98::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func99
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnInputFocus", typeid(int (CApp::*)()), "5383ec188b5c2420????????????0075??803d????????00", argdata, 1, 2, &func);
}

FUNC_NAKED int CApp::OnInputFocus()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func99::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func100
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnInputBlur", typeid(int (CApp::*)()), "5383ec188b5c2420803d????????008b4308", argdata, 1, 2, &func);
}

FUNC_NAKED int CApp::OnInputBlur()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func100::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func101
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::OnRButtonUp", typeid(void (CApp::*)(int , int )), ".5383ec288b5c24308b4424348b542438", argdata, 3, 6, &func);
}

FUNC_NAKED void CApp::OnRButtonUp(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func101::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func102
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::OnRButtonDown", typeid(void (CApp::*)(int , int )), ".5383ec288b5c24308b4424348b542438", argdata, 3, 6, &func);
}

FUNC_NAKED void CApp::OnRButtonDown(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func102::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func103
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::OnLButtonUp", typeid(void (CApp::*)(int , int )), ".5383ec288b5c24308b4424348b542438", argdata, 3, 6, &func);
}

FUNC_NAKED void CApp::OnLButtonUp(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func103::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func104
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::OnLButtonDown", typeid(void (CApp::*)(int , int )), ".5383ec288b5c24308b4424348b542438", argdata, 3, 6, &func);
}

FUNC_NAKED void CApp::OnLButtonDown(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func104::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func105
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::OnMouseMove", typeid(int (CApp::*)(int , int , int , int , bool , bool , bool )), "57565383ec208b5c24308b4424348b542438", argdata, 8, 2, &func);
}

FUNC_NAKED int CApp::OnMouseMove(int x, int y, int xdiff, int ydiff, bool holdingLMB, bool holdingRMB, bool holdingMMB)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+36]\n\t"		// holdingMMB
		"push [ebp+32]\n\t"		// holdingRMB
		"push [ebp+28]\n\t"		// holdingLMB
		"push [ebp+24]\n\t"		// ydiff
		"push [ebp+20]\n\t"		// xdiff
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func105::func));
	__asm__
	(
		"add esp, 32\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 32\n\t"
	);
}

namespace _func106
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::OnKeyUp", typeid(void (CApp::*)(SDLKey )), "57565383ec208b5c243485db", argdata, 2, 6, &func);
}

FUNC_NAKED void CApp::OnKeyUp(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func106::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func107
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnLanguageChange", typeid(void (CApp::*)()), "5589e557565383ec2c8b75088d5de4", argdata, 1, 6, &func);
}

FUNC_NAKED void CApp::OnLanguageChange()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func107::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func108
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::OnKeyDown", typeid(void (CApp::*)(SDLKey )), "5557565383ec4c8b5c246485db", argdata, 2, 6, &func);
}

FUNC_NAKED void CApp::OnKeyDown(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func108::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func109
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::constructor", typeid(void (CApp::*)()), "5383ec188b5c2420891c24e8????????8d4310", argdata, 1, 6, &func);
}

FUNC_NAKED void CApp::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func109::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func110
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::ParseArgs", typeid(void (CApp::*)(int , const char **)), ".f3c38db426000000008dbc2700000000", argdata, 3, 6, &func);
}

FUNC_NAKED void CApp::ParseArgs(int unk, const char **args)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// args
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func110::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func111
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnLoop", typeid(void (CApp::*)()), "5589e557565383ec2c8b5d08c70424????????e8????????e8????????884305c70424????????", argdata, 1, 6, &func);
}

FUNC_NAKED void CApp::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func111::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func112
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::SetupWindow", typeid(int (CApp::*)()), "5383ec38c7442404010000008b5c2440", argdata, 1, 2, &func);
}

FUNC_NAKED int CApp::SetupWindow()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func112::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func113
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnCleanup", typeid(void (CApp::*)()), "565383ec148b5c24208b430c890424", argdata, 1, 6, &func);
}

FUNC_NAKED void CApp::OnCleanup()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func113::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func114
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::GenInputEvents", typeid(void (CApp::*)()), "5383ec188b5c2420e8????????85c00f95??", argdata, 1, 6, &func);
}

FUNC_NAKED void CApp::GenInputEvents()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func114::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func115
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnSuspend", typeid(void (CApp::*)()), "5383ec188b5c2420e8????????8b4308", argdata, 1, 6, &func);
}

FUNC_NAKED void CApp::OnSuspend()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func115::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func116
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnResume", typeid(void (CApp::*)()), "5383ec188b5c242080??????????0075??807b100074??83c4185b", argdata, 1, 6, &func);
}

FUNC_NAKED void CApp::OnResume()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func116::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func117
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::TranslateMouse", typeid(Pointf (CApp::*)(int , int )), "565383ec148b5424248b4c24288b44242c8b742420", argdata, 4, 2, &func);
}

FUNC_NAKED Pointf CApp::TranslateMouse(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// y
		"push [ebp+16]\n\t"		// x
		"push [ebp+12]\n\t"		// implicit_output
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func117::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func118
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::UpdateFullScreen", typeid(void (CApp::*)()), "803d????????0074??c38db600000000575653", argdata, 1, 6, &func);
}

FUNC_NAKED void CApp::UpdateFullScreen()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func118::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func119
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::UpdateWindowSettings", typeid(int (CApp::*)()), "56538b44240c????????????00", argdata, 1, 2, &func);
}

FUNC_NAKED int CApp::UpdateWindowSettings()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func119::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func120
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnRender", typeid(void (CApp::*)()), "5589e557565383ec3c8b5d08891c24", argdata, 1, 6, &func);
}

FUNC_NAKED void CApp::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func120::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func121
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnInit", typeid(int (CApp::*)()), "5589e557565383ec4c8b5d08c7042400000000", argdata, 1, 2, &func);
}

FUNC_NAKED int CApp::OnInit()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func121::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func122
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CApp::OnExecute", typeid(int (CApp::*)()), "5589e557565381ecfc0100008b5d08", argdata, 1, 2, &func);
}

FUNC_NAKED int CApp::OnExecute()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func122::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func123
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CApp::OnEvent", typeid(void (CApp::*)(const InputEvent *)), "5557565383ec3c8b7424548b5c24508b4604f20f104608", argdata, 2, 6, &func);
}

FUNC_NAKED void CApp::OnEvent(const InputEvent *inputEvent)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// inputEvent
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func123::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func124
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CEvent::OnEvent", typeid(void (CEvent::*)(const InputEvent *)), "5557565383ec3c8b7424548b5c24508b4604f20f104608", argdata, 2, 6, &func);
}

FUNC_NAKED void CEvent::OnEvent(const InputEvent *event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// event
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func124::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func125
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CFPS::GetSpeedFactor", typeid(float (CFPS::*)()), "83ec048b4424088b4014890424d9042483c404", argdata, 1, 2, &func);
}

FUNC_NAKED float CFPS::GetSpeedFactor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func125::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func126
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CFPS::OnLoop", typeid(void (CFPS::*)()), "5383ec188b5c2420f20f1015????????", argdata, 1, 6, &func);
}

FUNC_NAKED void CFPS::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func126::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func127
{
	static void *func = 0;
	static short argdata[] = {0x4ff};
	static FunctionDefinition funcObj("CSurface::GL_SetColor", typeid(int (*)(GL_Color )), "83ec2c8b442430f30f10442430", argdata, 1, 2, &func);
}

FUNC_NAKED int CSurface::GL_SetColor(GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// color
		"push [ebp+8]\n\t"		// color
	);
	__asm__("call %0\n\t" :: "m"(_func127::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func128
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_SetColor", typeid(int (*)(float , float , float , float )), "83ec2c8b442430f30f10442430", argdata, 4, 2, &func);
}

FUNC_NAKED int CSurface::GL_SetColor(float r, float g, float b, float a)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// a
		"push [ebp+16]\n\t"		// b
		"push [ebp+12]\n\t"		// g
		"push [ebp+8]\n\t"		// r
	);
	__asm__("call %0\n\t" :: "m"(_func128::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func129
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_GetColor", typeid(GL_Color &(*)()), ".8b4424048b15????????8910", argdata, 0, 2, &func);
}

FUNC_NAKED GL_Color &CSurface::GL_GetColor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func129::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func130
{
	static void *func = 0;
	static short argdata[] = {0x4ff};
	static FunctionDefinition funcObj("CSurface::GL_SetColorTint", typeid(void (*)(GL_Color )), "83ec1ca1????????3b05????????74??85c0", argdata, 1, 6, &func);
}

FUNC_NAKED void CSurface::GL_SetColorTint(GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// color
		"push [ebp+8]\n\t"		// color
	);
	__asm__("call %0\n\t" :: "m"(_func130::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func131
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_SetColorTint", typeid(void (*)(float , float , float , float )), "83ec1ca1????????3b05????????74??85c0", argdata, 4, 6, &func);
}

FUNC_NAKED void CSurface::GL_SetColorTint(float r, float g, float b, float a)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// a
		"push [ebp+16]\n\t"		// b
		"push [ebp+12]\n\t"		// g
		"push [ebp+8]\n\t"		// r
	);
	__asm__("call %0\n\t" :: "m"(_func131::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func132
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::IsFrameBufferSupported", typeid(bool (*)()), "83ec0ce8????????85c0??????83c40c", argdata, 0, 2, &func);
}

FUNC_NAKED bool CSurface::IsFrameBufferSupported()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func132::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func133
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::StartFrame", typeid(void (*)()), "83ec0ce8????????83c40c", argdata, 0, 6, &func);
}

FUNC_NAKED void CSurface::StartFrame()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func133::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func134
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::FinishFrame", typeid(void (*)()), "83ec1ca1????????89442404a1????????890424", argdata, 0, 6, &func);
}

FUNC_NAKED void CSurface::FinishFrame()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func134::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func135
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_ClearAll", typeid(void (*)()), "0f57c083ec2cc744241400000000f30f1144240cf30f11442408f30f11442404", argdata, 0, 6, &func);
}

FUNC_NAKED void CSurface::GL_ClearAll()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func135::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func136
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_ClearColor", typeid(void (*)()), "0f57c083ec1cf30f1144240cf30f11442408f30f11442404f30f110424", argdata, 0, 6, &func);
}

FUNC_NAKED void CSurface::GL_ClearColor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func136::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func137
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::SetViewPort", typeid(int (*)(int , int , int , int )), "83ec1c8b44242c8944240c8b44242889442408", argdata, 4, 2, &func);
}

FUNC_NAKED int CSurface::SetViewPort(int left, int bottom, int h, int w)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// w
		"push [ebp+16]\n\t"		// h
		"push [ebp+12]\n\t"		// bottom
		"push [ebp+8]\n\t"		// left
	);
	__asm__("call %0\n\t" :: "m"(_func137::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func138
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_PopScissor", typeid(void (*)()), "83ec1c8b0d????????8b15????????89c829d0c1f804", argdata, 0, 6, &func);
}

FUNC_NAKED void CSurface::GL_PopScissor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func138::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func139
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_SetStencilMode", typeid(void (*)(GL_StencilMode , int , int )), "565383ec148b4424208b5c24248b74242883f801", argdata, 3, 6, &func);
}

FUNC_NAKED void CSurface::GL_SetStencilMode(GL_StencilMode stencilMode, int ref, int mask)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mask
		"push [ebp+12]\n\t"		// ref
		"push [ebp+8]\n\t"		// stencilMode
	);
	__asm__("call %0\n\t" :: "m"(_func139::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func140
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_PopStencilMode", typeid(void (*)()), "8b15????????8b0d????????89d029c8c1f80269c0abaaaaaa85c0", argdata, 0, 6, &func);
}

FUNC_NAKED void CSurface::GL_PopStencilMode()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func140::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func141
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_OrthoProjection", typeid(int (*)(float , float , float , float , float , float )), "83ec5ca1????????f30f10742464f30f1005????????f30f10542474", argdata, 6, 2, &func);
}

FUNC_NAKED int CSurface::GL_OrthoProjection(float mx1, float mx2, float mx3, float mx4, float mx5, float mx6)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// mx6
		"push [ebp+24]\n\t"		// mx5
		"push [ebp+20]\n\t"		// mx4
		"push [ebp+16]\n\t"		// mx3
		"push [ebp+12]\n\t"		// mx2
		"push [ebp+8]\n\t"		// mx1
	);
	__asm__("call %0\n\t" :: "m"(_func141::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func142
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_LoadIdentity", typeid(int (*)()), "83ec1c0f57d20f57c90f57c0", argdata, 0, 2, &func);
}

FUNC_NAKED int CSurface::GL_LoadIdentity()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func142::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func143
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_PushMatrix", typeid(int (*)()), "8b15????????83fa0f76??83ec1cc70424????????", argdata, 0, 2, &func);
}

FUNC_NAKED int CSurface::GL_PushMatrix()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func143::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func144
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_PopMatrix", typeid(int (*)()), "83ec2ca1????????85c00f84????????83e801", argdata, 0, 2, &func);
}

FUNC_NAKED int CSurface::GL_PopMatrix()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func144::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func145
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_Rotate2", typeid(void (*)(float , float , float , float )), "81ec0c0100000f57c9f30f10842410010000f30f10942414010000f30f109c2418010000", argdata, 4, 6, &func);
}

FUNC_NAKED void CSurface::GL_Rotate2(float angle, float x, float y, float z)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// z
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// angle
	);
	__asm__("call %0\n\t" :: "m"(_func145::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func146
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_Rotate", typeid(void (*)(float , float , float , float )), "81ec0c0100000f57c9f30f10842410010000f30f10942414010000f30f109c2418010000", argdata, 4, 6, &func);
}

FUNC_NAKED void CSurface::GL_Rotate(float angle, float x, float y, float z)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// z
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// angle
	);
	__asm__("call %0\n\t" :: "m"(_func146::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func147
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_Scale", typeid(void (*)(float , float , float )), "f30f104c2404b800000000f30f1005????????f30f10542408f30f105c240c", argdata, 3, 6, &func);
}

FUNC_NAKED void CSurface::GL_Scale(float x, float y, float z)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// z
		"push [ebp+12]\n\t"		// y
		"push [ebp+8]\n\t"		// x
	);
	__asm__("call %0\n\t" :: "m"(_func147::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func148
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_Translate", typeid(bool (*)(float , float , float )), "83ec100f57c0f30f104c2414b800000000f30f10542418f30f1074241c", argdata, 3, 2, &func);
}

FUNC_NAKED bool CSurface::GL_Translate(float x, float y, float z)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// z
		"push [ebp+12]\n\t"		// y
		"push [ebp+8]\n\t"		// x
	);
	__asm__("call %0\n\t" :: "m"(_func148::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func149
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_RemoveColorTint", typeid(void (*)()), "a1????????3b05????????74??83e810a3????????", argdata, 0, 6, &func);
}

FUNC_NAKED void CSurface::GL_RemoveColorTint()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func149::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func150
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CSurface::GetColorTint", typeid(GL_Color &(*)(GL_Color *)), "8b0d????????8b15????????8b442404", argdata, 1, 2, &func);
}

FUNC_NAKED GL_Color &CSurface::GetColorTint(GL_Color *ref)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// ref
	);
	__asm__("call %0\n\t" :: "m"(_func150::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func151
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_EnableBlend", typeid(bool (*)()), "83ec1cc744240804000000c744240403000000", argdata, 0, 2, &func);
}

FUNC_NAKED bool CSurface::GL_EnableBlend()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func151::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func152
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_DisableBlend", typeid(bool (*)()), "83ec1cc744240800000000c744240401000000c7042401000000e8????????83c41c", argdata, 0, 2, &func);
}

FUNC_NAKED bool CSurface::GL_DisableBlend()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func152::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func153
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_ForceAntialias", typeid(bool (*)()), "8b442404a2????????", argdata, 0, 2, &func);
}

FUNC_NAKED bool CSurface::GL_ForceAntialias()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func153::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func154
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff};
	static FunctionDefinition funcObj("CSurface::GL_DrawLine", typeid(bool (*)(float , float , float , float , float , GL_Color )), "81ecbc0000008b15????????a1????????f30f109c24d4000000f30f109424d8000000f30f108c24dc000000", argdata, 6, 2, &func);
}

FUNC_NAKED bool CSurface::GL_DrawLine(float x1, float y1, float x2, float y2, float lineWidth, GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+40]\n\t"		// color
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// color
		"push [ebp+24]\n\t"		// lineWidth
		"push [ebp+20]\n\t"		// y2
		"push [ebp+16]\n\t"		// x2
		"push [ebp+12]\n\t"		// y1
		"push [ebp+8]\n\t"		// x1
	);
	__asm__("call %0\n\t" :: "m"(_func154::func));
	__asm__
	(
		"add esp, 36\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 36\n\t"
	);
}

namespace _func155
{
	static void *func = 0;
	static short argdata[] = {0x2ff, 0x2ff, 0x2ff, 0x4ff};
	static FunctionDefinition funcObj("CSurface::GL_DrawTriangle", typeid(bool (*)(Point , Point , Point , GL_Color )), "5557565381ec8c0000008b15????????8b8424b00000008bbc24a00000008bac24a40000008b9c24a8000000", argdata, 4, 2, &func);
}

FUNC_NAKED bool CSurface::GL_DrawTriangle(Point vertex1, Point vertex2, Point vertex3, GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+44]\n\t"		// color
		"push [ebp+40]\n\t"		// color
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// vertex3
		"push [ebp+24]\n\t"		// vertex3
		"push [ebp+20]\n\t"		// vertex2
		"push [ebp+16]\n\t"		// vertex2
		"push [ebp+12]\n\t"		// vertex1
		"push [ebp+8]\n\t"		// vertex1
	);
	__asm__("call %0\n\t" :: "m"(_func155::func));
	__asm__
	(
		"add esp, 40\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 40\n\t"
	);
}

namespace _func156
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff};
	static FunctionDefinition funcObj("CSurface::GL_DrawRect", typeid(bool (*)(float , float , float , float , GL_Color )), "81ec9c0000008b15????????a1????????f30f108424a0000000f30f108c24a4000000", argdata, 5, 2, &func);
}

FUNC_NAKED bool CSurface::GL_DrawRect(float x1, float y1, float x2, float y2, GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// color
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// y2
		"push [ebp+16]\n\t"		// x2
		"push [ebp+12]\n\t"		// y1
		"push [ebp+8]\n\t"		// x1
	);
	__asm__("call %0\n\t" :: "m"(_func156::func));
	__asm__
	(
		"add esp, 32\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 32\n\t"
	);
}

namespace _func157
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_DrawRectOutline", typeid(bool (*)(int , int , int , int , GL_Color , float )), "5381ecc8010000f30f10a424e80100008b9424d80100008b9c24d0010000", argdata, 6, 2, &func);
}

FUNC_NAKED bool CSurface::GL_DrawRectOutline(int x1, int y1, int x2, int y2, GL_Color color, float lineWidth)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+40]\n\t"		// lineWidth
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// color
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// y2
		"push [ebp+16]\n\t"		// x2
		"push [ebp+12]\n\t"		// y1
		"push [ebp+8]\n\t"		// x1
	);
	__asm__("call %0\n\t" :: "m"(_func157::func));
	__asm__
	(
		"add esp, 36\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 36\n\t"
	);
}

namespace _func158
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_BlitImage", typeid(bool (*)(GL_Texture *, float , float , float , float , float , GL_Color , bool )), "565381ecb40000008b9424d8000000f30f109c24d8000000f30f10a424dc000000", argdata, 8, 2, &func);
}

FUNC_NAKED bool CSurface::GL_BlitImage(GL_Texture *tex, float x, float y, float x2, float y2, float rotation, GL_Color color, bool mirror)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+48]\n\t"		// mirror
		"push [ebp+44]\n\t"		// color
		"push [ebp+40]\n\t"		// color
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// rotation
		"push [ebp+24]\n\t"		// y2
		"push [ebp+20]\n\t"		// x2
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// tex
	);
	__asm__("call %0\n\t" :: "m"(_func158::func));
	__asm__
	(
		"add esp, 44\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 44\n\t"
	);
}

namespace _func159
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_BlitPixelImage", typeid(bool (*)(GL_Texture *, float , float , float , float , float , GL_Color , bool )), "57565381ecb00000000fb63d????????8b9424d8000000f30f109c24d8000000f30f10a424dc000000", argdata, 8, 2, &func);
}

FUNC_NAKED bool CSurface::GL_BlitPixelImage(GL_Texture *tex, float x, float y, float x2, float y2, float rotation, GL_Color color, bool mirror)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+48]\n\t"		// mirror
		"push [ebp+44]\n\t"		// color
		"push [ebp+40]\n\t"		// color
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// rotation
		"push [ebp+24]\n\t"		// y2
		"push [ebp+20]\n\t"		// x2
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// tex
	);
	__asm__("call %0\n\t" :: "m"(_func159::func));
	__asm__
	(
		"add esp, 44\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 44\n\t"
	);
}

namespace _func160
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_BlitImagePartial", typeid(bool (*)(GL_Texture *, float , float , float , float , float , float , float , float , float , GL_Color , bool )), "57565383ec6080bc24a8000000008b5c2470", argdata, 12, 2, &func);
}

FUNC_NAKED bool CSurface::GL_BlitImagePartial(GL_Texture *tex, float x, float y, float size_x, float size_y, float start_x, float end_x, float start_y, float end_y, float alpha, GL_Color color, bool mirror)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+64]\n\t"		// mirror
		"push [ebp+60]\n\t"		// color
		"push [ebp+56]\n\t"		// color
		"push [ebp+52]\n\t"		// color
		"push [ebp+48]\n\t"		// color
		"push [ebp+44]\n\t"		// alpha
		"push [ebp+40]\n\t"		// end_y
		"push [ebp+36]\n\t"		// start_y
		"push [ebp+32]\n\t"		// end_x
		"push [ebp+28]\n\t"		// start_x
		"push [ebp+24]\n\t"		// size_y
		"push [ebp+20]\n\t"		// size_x
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// tex
	);
	__asm__("call %0\n\t" :: "m"(_func160::func));
	__asm__
	(
		"add esp, 60\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 60\n\t"
	);
}

namespace _func161
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_BlitPixelImageWide", typeid(bool (*)(GL_Texture *, float , float , int , int , float , GL_Color , bool )), "5557565381ec8c0000008bbc24a00000008b9c24ac000000", argdata, 8, 2, &func);
}

FUNC_NAKED bool CSurface::GL_BlitPixelImageWide(GL_Texture *tex, float x, float y, int x2, int y2, float opacity, GL_Color color, bool mirror)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+48]\n\t"		// mirror
		"push [ebp+44]\n\t"		// color
		"push [ebp+40]\n\t"		// color
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// opacity
		"push [ebp+24]\n\t"		// y2
		"push [ebp+20]\n\t"		// x2
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// tex
	);
	__asm__("call %0\n\t" :: "m"(_func161::func));
	__asm__
	(
		"add esp, 44\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 44\n\t"
	);
}

namespace _func162
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_BlitMultiImage", typeid(void (*)(GL_Texture *, const std::vector<GL_TexVertex> &, bool )), "5557565383ec4c8b15????????8b4424688b5c24608b7c246489442418", argdata, 3, 6, &func);
}

FUNC_NAKED void CSurface::GL_BlitMultiImage(GL_Texture *tex, const std::vector<GL_TexVertex> &texVertices, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// texVertices
		"push [ebp+8]\n\t"		// tex
	);
	__asm__("call %0\n\t" :: "m"(_func162::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func163
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_BlitMultiColorImage", typeid(void (*)(GL_Texture *, const std::vector<GL_ColorTexVertex> &, bool )), "5557565383ec4c8b15????????8b4424688b5c24608b7c246489442420a1????????", argdata, 3, 6, &func);
}

FUNC_NAKED void CSurface::GL_BlitMultiColorImage(GL_Texture *tex, const std::vector<GL_ColorTexVertex> &texVertices, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// texVertices
		"push [ebp+8]\n\t"		// tex
	);
	__asm__("call %0\n\t" :: "m"(_func163::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func164
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_RenderPrimitive", typeid(void (*)(GL_Primitive *)), "5383ec288b5c243085db0f84????????8b15????????a1????????39c20f84????????29c283e2f08d4410f0f30f10400c", argdata, 1, 6, &func);
}

FUNC_NAKED void CSurface::GL_RenderPrimitive(GL_Primitive *primitive)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// primitive
	);
	__asm__("call %0\n\t" :: "m"(_func164::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func165
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_RenderPrimitiveWithAlpha", typeid(void (*)(GL_Primitive *, float )), "5383ec288b5c243085db0f84????????8b15????????a1????????39c20f84????????29c283e2f08d4410f0f30f10500c", argdata, 2, 6, &func);
}

FUNC_NAKED void CSurface::GL_RenderPrimitiveWithAlpha(GL_Primitive *primitive, float alpha)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// alpha
		"push [ebp+8]\n\t"		// primitive
	);
	__asm__("call %0\n\t" :: "m"(_func165::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func166
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff};
	static FunctionDefinition funcObj("CSurface::GL_RenderPrimitiveWithColor", typeid(void (*)(GL_Primitive *, GL_Color )), "5383ec288b5c2430f30f104c2434f30f106c2438f30f105c243c85dbf30f10542440", argdata, 2, 6, &func);
}

FUNC_NAKED void CSurface::GL_RenderPrimitiveWithColor(GL_Primitive *primitive, GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// color
		"push [ebp+8]\n\t"		// primitive
	);
	__asm__("call %0\n\t" :: "m"(_func166::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func167
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_DestroyPrimitive", typeid(void (*)(GL_Primitive *)), "5383ec188b5c242085db74??8b4324890424", argdata, 1, 6, &func);
}

FUNC_NAKED void CSurface::GL_DestroyPrimitive(GL_Primitive *primitive)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// primitive
	);
	__asm__("call %0\n\t" :: "m"(_func167::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func168
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff};
	static FunctionDefinition funcObj("CSurface::GL_CreateRectPrimitive", typeid(GL_Primitive *(*)(float , float , float , float , GL_Color )), "5383ec58f30f10442460f30f104c2464f30f10542468f30f10642478", argdata, 5, 2, &func);
}

FUNC_NAKED GL_Primitive *CSurface::GL_CreateRectPrimitive(float x, float y, float w, float h, GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// color
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// h
		"push [ebp+16]\n\t"		// w
		"push [ebp+12]\n\t"		// y
		"push [ebp+8]\n\t"		// x
	);
	__asm__("call %0\n\t" :: "m"(_func168::func));
	__asm__
	(
		"add esp, 32\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 32\n\t"
	);
}

namespace _func169
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff};
	static FunctionDefinition funcObj("CSurface::GL_CreateMultiRectPrimitive", typeid(GL_Primitive *(*)(std::vector<Globals::Rect> &, GL_Color )), "55b8ffffffff57565383ec4c8b7c24608b77042b37", argdata, 2, 2, &func);
}

FUNC_NAKED GL_Primitive *CSurface::GL_CreateMultiRectPrimitive(std::vector<Globals::Rect> &vec, GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// color
		"push [ebp+8]\n\t"		// vec
	);
	__asm__("call %0\n\t" :: "m"(_func169::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func170
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::GL_CreateMultiLinePrimitive", typeid(GL_Primitive *(*)(std::vector<GL_Line> &, GL_Color , float )), "5557565383ec4c8b6c2460f30f105424748b7d04", argdata, 3, 2, &func);
}

FUNC_NAKED GL_Primitive *CSurface::GL_CreateMultiLinePrimitive(std::vector<GL_Line> &vec, GL_Color color, float thickness)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// thickness
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// color
		"push [ebp+8]\n\t"		// vec
	);
	__asm__("call %0\n\t" :: "m"(_func170::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func171
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x4ff};
	static FunctionDefinition funcObj("CSurface::GL_CreateMultiImagePrimitive", typeid(GL_Primitive *(*)(GL_Texture *, std::vector<GL_TexVertex> *, GL_Color )), "5557565383ec4c8b7424648b5c24608b46048b2e", argdata, 3, 2, &func);
}

FUNC_NAKED GL_Primitive *CSurface::GL_CreateMultiImagePrimitive(GL_Texture *tex, std::vector<GL_TexVertex> *vec, GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// color
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// vec
		"push [ebp+8]\n\t"		// tex
	);
	__asm__("call %0\n\t" :: "m"(_func171::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func172
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CSurface::GL_PushStencilMode", typeid(void (*)()), "a1????????3b05????????74??85c074??8b15????????", argdata, 0, 6, &func);
}

FUNC_NAKED void CSurface::GL_PushStencilMode()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func172::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func173
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CSurface::AddTexVertices", typeid(void (*)(std::vector<GL_TexVertex> *, float , float , float , float , float , float , float , float )), "565383ec248b742430f30f10442434f30f104c2438f30f105c2444", argdata, 9, 6, &func);
}

FUNC_NAKED void CSurface::AddTexVertices(std::vector<GL_TexVertex> *vec, float x1, float y1, float u1, float v1, float x2, float y2, float u2, float v2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+40]\n\t"		// v2
		"push [ebp+36]\n\t"		// u2
		"push [ebp+32]\n\t"		// y2
		"push [ebp+28]\n\t"		// x2
		"push [ebp+24]\n\t"		// v1
		"push [ebp+20]\n\t"		// u1
		"push [ebp+16]\n\t"		// y1
		"push [ebp+12]\n\t"		// x1
		"push [ebp+8]\n\t"		// vec
	);
	__asm__("call %0\n\t" :: "m"(_func173::func));
	__asm__
	(
		"add esp, 36\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 36\n\t"
	);
}

namespace _func174
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff};
	static FunctionDefinition funcObj("CSurface::GL_CreateImagePrimitive", typeid(GL_Primitive *(*)(GL_Texture *, float , float , float , float , float , GL_Color )), "565383ec54f30f10442478", argdata, 7, 2, &func);
}

FUNC_NAKED GL_Primitive *CSurface::GL_CreateImagePrimitive(GL_Texture *tex, float x, float y, float size_x, float size_y, float rotate, GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+44]\n\t"		// color
		"push [ebp+40]\n\t"		// color
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// rotate
		"push [ebp+24]\n\t"		// size_y
		"push [ebp+20]\n\t"		// size_x
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// tex
	);
	__asm__("call %0\n\t" :: "m"(_func174::func));
	__asm__
	(
		"add esp, 40\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 40\n\t"
	);
}

namespace _func175
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CachedImage::destructor", typeid(void (CachedImage::*)()), "565383ec248b5c24308b4308", argdata, 1, 6, &func);
}

FUNC_NAKED void CachedImage::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func175::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func176
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CachedImage::SetImagePath", typeid(void (CachedImage::*)(const std::string &)), "565383ec148b4424248b5c2420c70424????????89442404", argdata, 2, 6, &func);
}

FUNC_NAKED void CachedImage::SetImagePath(const std::string &imagePath)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// imagePath
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func176::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func177
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CachedImage::SetPosition", typeid(void (CachedImage::*)(int , int )), ".57565383ec108b5c24208b7424248b7c2428397310", argdata, 3, 6, &func);
}

FUNC_NAKED void CachedImage::SetPosition(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func177::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func178
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CachedImage::constructor1", typeid(void (CachedImage::*)(const std::string &, int , int )), "5383ec188b5c24208b442424c7430400000000c703????????89442404", argdata, 4, 6, &func);
}

FUNC_NAKED void CachedImage::constructor1(const std::string &path, int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// y
		"push [ebp+16]\n\t"		// x
		"push [ebp+12]\n\t"		// path
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func178::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func179
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CachedPrimitive::OnRender", typeid(void (CachedPrimitive::*)(const GL_Color &)), "565383ec448b7424508b5c24548b460485c0", argdata, 2, 6, &func);
}

FUNC_NAKED void CachedPrimitive::OnRender(const GL_Color &color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// color
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func179::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func180
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ChoiceBox::OnRender", typeid(void (ChoiceBox::*)()), "5589e557565381ecdc0100008b7508", argdata, 1, 6, &func);
}

FUNC_NAKED void ChoiceBox::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func180::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func181
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ChoiceBox::MouseMove", typeid(void (ChoiceBox::*)(int , int )), "5557565383ec1c8b442430c70424????????", argdata, 3, 6, &func);
}

FUNC_NAKED void ChoiceBox::MouseMove(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func181::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func182
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("CloakingBox::constructor", typeid(void (CloakingBox::*)(Point , CloakingSystem *)), "5557565383ec6c8bbc2480000000", argdata, 3, 6, &func);
}

FUNC_NAKED void CloakingBox::constructor(Point pos, CloakingSystem *sys)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func182::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func183
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CloakingSystem::OnLoop", typeid(void (CloakingSystem::*)()), "565383ec148b5c2420891c24e8????????????????????890424", argdata, 1, 6, &func);
}

FUNC_NAKED void CloakingSystem::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func183::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func184
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("CloneBox::constructor", typeid(void (CloneBox::*)(Point , CloneSystem *)), "5557565381ec4c0100008b8424640100008b9c246c0100008b942468010000", argdata, 3, 6, &func);
}

FUNC_NAKED void CloneBox::constructor(Point pos, CloneSystem *sys)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func184::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func185
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CloneSystem::OnLoop", typeid(void (CloneSystem::*)()), "5589e557565381ec4c0100008b4508890424", argdata, 1, 6, &func);
}

FUNC_NAKED void CloneSystem::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func185::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func186
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::RenderTarget", typeid(void (CombatControl::*)()), "5589e557565381ecac0100008b7d08", argdata, 1, 6, &func);
}

FUNC_NAKED void CombatControl::RenderTarget()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func186::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func187
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::GetCurrentTarget", typeid(ShipManager *(CombatControl::*)()), "8b4424048b80b805000085c074??8b4008c38db60000000031c0", argdata, 1, 2, &func);
}

FUNC_NAKED ShipManager *CombatControl::GetCurrentTarget()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func187::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func188
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::CurrentTargetIsBoss", typeid(char (CombatControl::*)()), "8b4424048b80b805000085c074??8b10", argdata, 1, 2, &func);
}

FUNC_NAKED char CombatControl::CurrentTargetIsBoss()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func188::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func189
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::CanTargetSelf", typeid(char (CombatControl::*)()), "5589e557565383ec4c8b75088b86a4000000", argdata, 1, 2, &func);
}

FUNC_NAKED char CombatControl::CanTargetSelf()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func189::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func190
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::OnRenderCombat", typeid(void (CombatControl::*)()), "5589e5565383ec208b5d0880bb240b000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CombatControl::OnRenderCombat()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func190::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func191
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CombatControl::AddEnemyShip", typeid(void (CombatControl::*)(CompleteShip *)), "5557565383ec3c8b5c24508b83b8050000", argdata, 2, 6, &func);
}

FUNC_NAKED void CombatControl::AddEnemyShip(CompleteShip *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func191::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func192
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::UpdateAiming", typeid(void (CombatControl::*)()), "5589e557565383ec4c8b5d0883bbcc050000ff", argdata, 1, 6, &func);
}

FUNC_NAKED void CombatControl::UpdateAiming()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func192::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func193
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::UpdateTarget", typeid(bool (CombatControl::*)()), "5589e557565383ec7c8b7d08f30f2a4f08", argdata, 1, 2, &func);
}

FUNC_NAKED bool CombatControl::UpdateTarget()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func193::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func194
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff, 0x1ff};
	static FunctionDefinition funcObj("CombatControl::DrawHostileBox", typeid(void (CombatControl::*)(GL_Color , int )), "5557565383ec6c8bb424800000008d7c2448", argdata, 3, 6, &func);
}

FUNC_NAKED void CombatControl::DrawHostileBox(GL_Color color, int stencilBit)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// stencilBit
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// color
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func194::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func195
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("CombatControl::OnInit", typeid(void (CombatControl::*)(Point )), "565383ec348b5c24408b4424448b542448", argdata, 2, 6, &func);
}

FUNC_NAKED void CombatControl::OnInit(Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func195::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func196
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::OnLoop", typeid(void (CombatControl::*)()), "55575631f65383ec2c8b5c24408b93a0050000", argdata, 1, 6, &func);
}

FUNC_NAKED void CombatControl::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func196::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func197
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::SetMouseCursor", typeid(void (CombatControl::*)()), "5383ec188b5c24208b83a400000085c0", argdata, 1, 6, &func);
}

FUNC_NAKED void CombatControl::SetMouseCursor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func197::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func198
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::DisarmAll", typeid(void (CombatControl::*)()), "5383ec188b5c24208b93b805000085d2", argdata, 1, 6, &func);
}

FUNC_NAKED void CombatControl::DisarmAll()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func198::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func199
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::SelectTarget", typeid(bool (CombatControl::*)()), "5589e557565383ec5c8b5d08c744240409000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CombatControl::SelectTarget()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func199::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func200
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CombatControl::MouseRClick", typeid(bool (CombatControl::*)(int , int )), "5557565383ec1c8b5c24308b7424348b7c24388b83a4000000", argdata, 3, 2, &func);
}

FUNC_NAKED bool CombatControl::MouseRClick(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func200::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func201
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::WeaponsArmed", typeid(bool (CombatControl::*)()), "5383ec188b5c2420c7442404090000008b4304890424e8????????84c075??8b83a4000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CombatControl::WeaponsArmed()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func201::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func202
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CombatControl::KeyDown", typeid(void (CombatControl::*)(SDLKey )), "565383ec148b5c24208b7424248d4314", argdata, 2, 6, &func);
}

FUNC_NAKED void CombatControl::KeyDown(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func202::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func203
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::DisarmTeleporter", typeid(void (CombatControl::*)()), "5631f65383ec148b5c2420c744240409000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CombatControl::DisarmTeleporter()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func203::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func204
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::constructor", typeid(void (CombatControl::*)()), "5557565381ecbc0000008bb424d0000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CombatControl::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func204::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func205
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CombatControl::RenderSelfAiming", typeid(void (CombatControl::*)()), "5589e55383ec348b5d088d4314", argdata, 1, 6, &func);
}

FUNC_NAKED void CombatControl::RenderSelfAiming()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func205::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func206
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x4ff};
	static FunctionDefinition funcObj("CombatControl::RenderShipStatus", typeid(void (CombatControl::*)(Pointf , GL_Color )), "5589e557565381ec9c0000008b5d0c8b75108b7d08", argdata, 3, 6, &func);
}

FUNC_NAKED void CombatControl::RenderShipStatus(Pointf pos, GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// color
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func206::func));
	__asm__
	(
		"add esp, 28\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 28\n\t"
	);
}

namespace _func207
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CombatDrone::constructor", typeid(void (CombatDrone::*)(int , int , const DroneBlueprint *)), "5557565383ec3c8b4424588d5c242c8b7424508b7c245c", argdata, 4, 6, &func);
}

FUNC_NAKED void CombatDrone::constructor(int iShipId, int selfId, const DroneBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// bp
		"push [ebp+16]\n\t"		// selfId
		"push [ebp+12]\n\t"		// iShipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func207::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func208
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CombatDrone::SetWeaponTarget", typeid(void (CombatDrone::*)(Targetable *)), "565383ec148b7424248b5c242085f674??8b0389742404", argdata, 2, 6, &func);
}

FUNC_NAKED void CombatDrone::SetWeaponTarget(Targetable *target)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// target
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func208::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func209
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CommandGui::RunCommand", typeid(void (CommandGui::*)(std::string &)), "5589e557565331db81ec8c0000008b750c", argdata, 2, 6, &func);
}

FUNC_NAKED void CommandGui::RunCommand(std::string &command)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// command
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func209::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func210
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CommandGui::CreateNewStore", typeid(Store *(CommandGui::*)(int )), "5557565383ec2cc70424a40400008b5c2440", argdata, 2, 2, &func);
}

FUNC_NAKED Store *CommandGui::CreateNewStore(int sectorNumber)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// sectorNumber
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func210::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func211
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("CommandGui::GetWorldCoordinates", typeid(void *(CommandGui::*)(Point , bool )), "5589e557565383ec3c8b5d188d55d8", argdata, 3, 2, &func);
}

FUNC_NAKED void *CommandGui::GetWorldCoordinates(Point point, bool fromTarget)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// fromTarget
		"push [ebp+16]\n\t"		// point
		"push [ebp+12]\n\t"		// point
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func211::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func212
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CommandGui::KeyDown", typeid(void (CommandGui::*)(SDLKey , bool )), "5589e557565383ec4c8b5d088b4510", argdata, 3, 6, &func);
}

FUNC_NAKED void CommandGui::KeyDown(SDLKey key, bool shiftHeld)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// shiftHeld
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func212::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func213
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CommandGui::RenderStatic", typeid(void (CommandGui::*)()), "5589e557565383ec7c8b5d08803d????????00", argdata, 1, 6, &func);
}

FUNC_NAKED void CommandGui::RenderStatic()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func213::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func214
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CommandGui::constructor", typeid(void (CommandGui::*)()), "5557565381ec8c0000008b9c24a00000008d742470", argdata, 1, 6, &func);
}

FUNC_NAKED void CommandGui::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func214::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func215
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CommandGui::AddEnemyShip", typeid(void (CommandGui::*)(CompleteShip *)), "5557565383ec3c8b5c24508d7c24208b7424548d83ac030000", argdata, 2, 6, &func);
}

FUNC_NAKED void CommandGui::AddEnemyShip(CompleteShip *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func215::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func216
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CommandGui::Victory", typeid(void (CommandGui::*)()), "5589e557565383ec6c8b45088b80b4120000", argdata, 1, 6, &func);
}

FUNC_NAKED void CommandGui::Victory()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func216::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func217
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CommandGui::OnInit", typeid(void (CommandGui::*)()), "5557565381ecbc0000008b8424d00000008d7424688d7c244c", argdata, 1, 6, &func);
}

FUNC_NAKED void CommandGui::OnInit()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func217::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func218
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CommandGui::MouseMove", typeid(void (CommandGui::*)(int , int )), "5589e557565383ec6c8b5d088b750c8b4510", argdata, 3, 6, &func);
}

FUNC_NAKED void CommandGui::MouseMove(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func218::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func219
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CommandGui::LButtonDown", typeid(void (CommandGui::*)(int , int , bool )), "5589e557565383ec3c8b5d088b7514", argdata, 4, 6, &func);
}

FUNC_NAKED void CommandGui::LButtonDown(int mX, int mY, bool shiftHeld)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// shiftHeld
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func219::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func220
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CommandGui::OnLoop", typeid(void (CommandGui::*)()), "5589e557565383ec5c8b5d08????????????000f85????????????????????85ff", argdata, 1, 6, &func);
}

FUNC_NAKED void CommandGui::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func220::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func221
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CommandGui::CheckGameover", typeid(void (CommandGui::*)()), "5589e557565383ec5c8b7d08????????????0075??", argdata, 1, 6, &func);
}

FUNC_NAKED void CommandGui::CheckGameover()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func221::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func222
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CommandGui::IsGameOver", typeid(bool (CommandGui::*)()), "5383ec18803d????????008b5c242075??????????????85c0", argdata, 1, 2, &func);
}

FUNC_NAKED bool CommandGui::IsGameOver()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func222::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func223
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x4ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CommandGui::NewLocation", typeid(void (CommandGui::*)(const std::string &, std::vector<ChoiceText> , ResourceEvent &, bool )), "5557565381ec7c0100008bbc24980100008b8424a0010000", argdata, 5, 6, &func);
}

FUNC_NAKED void CommandGui::NewLocation(const std::string &mainText, std::vector<ChoiceText> choices, ResourceEvent &resources, bool testingEvents)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+36]\n\t"		// testingEvents
		"push [ebp+32]\n\t"		// resources
		"push [ebp+28]\n\t"		// choices
		"push [ebp+24]\n\t"		// choices
		"push [ebp+20]\n\t"		// choices
		"push [ebp+16]\n\t"		// choices
		"push [ebp+12]\n\t"		// mainText
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func223::func));
	__asm__
	(
		"add esp, 32\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 32\n\t"
	);
}

namespace _func224
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CompleteShip::DO_NOT_HOOK", typeid(void (CompleteShip::*)()), "!8b48fc8d59ff8958fc89c8e9????????8b48fc8d59ff8958fc89c8eb??6690", argdata, 0, 4, &func);
}

FUNC_NAKED void CompleteShip::DO_NOT_HOOK()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func224::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func225
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("CompleteShip::DO_NOT_HOOK2", typeid(void (CompleteShip::*)()), "!.8b48fc8d59ff8958fc89c8e9????????8b48fc8d59ff8958fc89c8eb??6690", argdata, 0, 4, &func);
}

FUNC_NAKED void CompleteShip::DO_NOT_HOOK2()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func225::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func226
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CompleteShip::PauseLoop", typeid(void (CompleteShip::*)()), "!.8b4424048b400889442404e9????????", argdata, 1, 6, &func);
}

FUNC_NAKED void CompleteShip::PauseLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func226::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func227
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CompleteShip::Restart", typeid(void (CompleteShip::*)()), "5383ec188b5c24208b430883c318890424", argdata, 1, 6, &func);
}

FUNC_NAKED void CompleteShip::Restart()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func227::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func228
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::constructor", typeid(void (CompleteShip::*)(SpaceManager *, bool , int )), "5383ec188b5c24208b54242c8b442428", argdata, 4, 6, &func);
}

FUNC_NAKED void CompleteShip::constructor(SpaceManager *space, bool unk, int unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk2
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// space
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func228::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func229
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::SetShip", typeid(void (CompleteShip::*)(ShipManager *)), "83ec1c8b4424248b5424208b8850050000894208", argdata, 2, 6, &func);
}

FUNC_NAKED void CompleteShip::SetShip(ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func229::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func230
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::OnInit", typeid(void (CompleteShip::*)(const ShipBlueprint *, int )), "5557565383ec1cc7042440060000", argdata, 3, 6, &func);
}

FUNC_NAKED void CompleteShip::OnInit(const ShipBlueprint *blueprint, int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// blueprint
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func230::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func231
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::AddBoarders", typeid(void (CompleteShip::*)(int , const std::string &, bool )), "5589e557565383ec6c8b4514c744240402000000", argdata, 4, 6, &func);
}

FUNC_NAKED void CompleteShip::AddBoarders(int amount, const std::string &race, bool unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk2
		"push [ebp+16]\n\t"		// race
		"push [ebp+12]\n\t"		// amount
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func231::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func232
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::AddCrewMember", typeid(CrewMember *(CompleteShip::*)(const CrewBlueprint *, bool )), "5589e557565381ecdc0000008b450c8b7d10", argdata, 3, 2, &func);
}

FUNC_NAKED CrewMember *CompleteShip::AddCrewMember(const CrewBlueprint *blueprint, bool hostile)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// hostile
		"push [ebp+12]\n\t"		// blueprint
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func232::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func233
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::AddCrewMember1", typeid(CrewMember *(CompleteShip::*)(const std::string &, const std::string &, bool )), "5589e557565383ec5c8b45148b5d10", argdata, 4, 2, &func);
}

FUNC_NAKED CrewMember *CompleteShip::AddCrewMember1(const std::string &race, const std::string &name, bool hostile)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// hostile
		"push [ebp+16]\n\t"		// name
		"push [ebp+12]\n\t"		// race
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func233::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func234
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::AddDrone", typeid(Drone *(CompleteShip::*)(const DroneBlueprint *, int )), "!.8b4424048b400889442404e9????????", argdata, 3, 2, &func);
}

FUNC_NAKED Drone *CompleteShip::AddDrone(const DroneBlueprint *blueprint, int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// blueprint
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func234::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func235
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::AddCrewMember2", typeid(CrewMember *(CompleteShip::*)(CrewMember *, int )), "57565383ec108b5c24248b7424208b7c242885db", argdata, 3, 2, &func);
}

FUNC_NAKED CrewMember *CompleteShip::AddCrewMember2(CrewMember *member, int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// member
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func235::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func236
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::SaveState", typeid(char (CompleteShip::*)(int )), "!8b5424048b4424088b92300100008944240489542408e9????????", argdata, 2, 2, &func);
}

FUNC_NAKED char CompleteShip::SaveState(int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func236::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func237
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::LoadState", typeid(void (CompleteShip::*)(int )), "5589e5565383ec208b450c8b5d088d75ec", argdata, 2, 6, &func);
}

FUNC_NAKED void CompleteShip::LoadState(int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func237::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func238
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::InitiateTeleport", typeid(void (CompleteShip::*)(int , int )), "5589e557565383ec3c8b5d088b8318010000", argdata, 3, 6, &func);
}

FUNC_NAKED void CompleteShip::InitiateTeleport(int targetRoom, int command)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// command
		"push [ebp+12]\n\t"		// targetRoom
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func238::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func239
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CompleteShip::OnLoop", typeid(void (CompleteShip::*)()), "5589e557565331db83ec3c8b45088b4008", argdata, 1, 6, &func);
}

FUNC_NAKED void CompleteShip::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func239::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func240
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CompleteShip::GetTeleportingParty", typeid(void (CompleteShip::*)()), "5557565383ec1c8b7424348b5c24308b8628010000", argdata, 1, 6, &func);
}

FUNC_NAKED void CompleteShip::GetTeleportingParty()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func240::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func241
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CompleteShip::KillRandomCrew", typeid(CrewMember *(CompleteShip::*)()), "!.8b4424048b400889442404e9????????", argdata, 1, 2, &func);
}

FUNC_NAKED CrewMember *CompleteShip::KillRandomCrew()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func241::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func242
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::CountCrew", typeid(int (CompleteShip::*)(bool )), "!0fb6442408894424088b4424048b400889442404e9????????", argdata, 2, 2, &func);
}

FUNC_NAKED int CompleteShip::CountCrew(bool boarders)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// boarders
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func242::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func243
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CompleteShip::Jump", typeid(CrewMember **(CompleteShip::*)()), "8b4424048b901801000089901c010000", argdata, 1, 2, &func);
}

FUNC_NAKED CrewMember **CompleteShip::Jump()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func243::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func244
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::SetEnemyShip", typeid(void (CompleteShip::*)(CompleteShip *)), "!8b4424088b54240485c0894210", argdata, 2, 6, &func);
}

FUNC_NAKED void CompleteShip::SetEnemyShip(CompleteShip *other)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// other
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func244::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func245
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CompleteShip::DeadCrew", typeid(bool (CompleteShip::*)()), "565383ec148b5c24200fb64314", argdata, 1, 2, &func);
}

FUNC_NAKED bool CompleteShip::DeadCrew()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func245::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func246
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::TeleportCrew", typeid(void (CompleteShip::*)(ShipManager *, int , bool )), "5589e55383ec140fb645148b5d08", argdata, 4, 6, &func);
}

FUNC_NAKED void CompleteShip::TeleportCrew(ShipManager *other, int room, bool comingBack)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// comingBack
		"push [ebp+16]\n\t"		// room
		"push [ebp+12]\n\t"		// other
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func246::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func247
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CompleteShip::OnRender", typeid(void (CompleteShip::*)()), "5383ec188b5c2420c7442408020000008b4304", argdata, 1, 6, &func);
}

FUNC_NAKED void CompleteShip::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func247::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func248
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CompleteShip::OnRenderSpace", typeid(void (CompleteShip::*)()), "83ec1c8b442420c74424080000803fc744240403000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CompleteShip::OnRenderSpace()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func248::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func249
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CompleteShip::OnRenderShip", typeid(void (CompleteShip::*)(bool , bool )), "57565383ec108b5c2420c744240802000000", argdata, 3, 6, &func);
}

FUNC_NAKED void CompleteShip::OnRenderShip(bool unk1, bool unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk2
		"push [ebp+12]\n\t"		// unk1
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func249::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func250
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ConfirmWindow::SetText", typeid(void (ConfirmWindow::*)(const TextString &, int , bool , const TextString &, const TextString &)), "5589e557565383ec4c8b5d088b4514", argdata, 6, 6, &func);
}

FUNC_NAKED void ConfirmWindow::SetText(const TextString &text_, int minWidth, bool autoCenter, const TextString &yesText_, const TextString &noText_)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// noText_
		"push [ebp+24]\n\t"		// yesText_
		"push [ebp+20]\n\t"		// autoCenter
		"push [ebp+16]\n\t"		// minWidth
		"push [ebp+12]\n\t"		// text_
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func250::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func251
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ConfirmWindow::OnRender", typeid(void (ConfirmWindow::*)()), "5589e557565381eccc0000008b5d088b434885c0", argdata, 1, 6, &func);
}

FUNC_NAKED void ConfirmWindow::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func251::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func252
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("ConfirmWindow::SetPosition", typeid(void (ConfirmWindow::*)(Point )), "5589e557565383ec3c8b5d088b450c8b5510", argdata, 2, 6, &func);
}

FUNC_NAKED void ConfirmWindow::SetPosition(Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func252::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func253
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ConfirmWindow::Open", typeid(void (ConfirmWindow::*)()), "5589e557565383ec4c8b5d088d7de0", argdata, 1, 6, &func);
}

FUNC_NAKED void ConfirmWindow::Open()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func253::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func254
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ConfirmWindow::MouseClick", typeid(void (ConfirmWindow::*)(int , int )), "8b4424048078040074??80b88c00000000", argdata, 3, 6, &func);
}

FUNC_NAKED void ConfirmWindow::MouseClick(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func254::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func255
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ConfirmWindow::MouseMove", typeid(void (ConfirmWindow::*)(int , int )), "5383ec188b5c2420807b040074??8b442428", argdata, 3, 6, &func);
}

FUNC_NAKED void ConfirmWindow::MouseMove(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func255::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func256
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ConfirmWindow::constructor", typeid(void (ConfirmWindow::*)()), "565383ec248b5c24308d74241f891c24e8????????8d431c", argdata, 1, 6, &func);
}

FUNC_NAKED void ConfirmWindow::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func256::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func257
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ConfirmWindow::Close", typeid(void (ConfirmWindow::*)()), "5383ec188b5c24208b4348890424", argdata, 1, 6, &func);
}

FUNC_NAKED void ConfirmWindow::Close()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func257::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func258
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ControlButton::OnRender", typeid(void (ControlButton::*)()), "5589e557565383ec6c8b5d08f30f102d????????", argdata, 1, 6, &func);
}

FUNC_NAKED void ControlButton::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func258::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func259
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ControlsScreen::OnInit", typeid(void (ControlsScreen::*)()), "5589e557565381ecbc0000008b45088b80cc040000", argdata, 1, 6, &func);
}

FUNC_NAKED void ControlsScreen::OnInit()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func259::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func260
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ControlsScreen::OnLoop", typeid(void (ControlsScreen::*)()), "5589e557565331db83ec4c8b45088b4d08", argdata, 1, 6, &func);
}

FUNC_NAKED void ControlsScreen::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func260::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func261
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ControlsScreen::OnRender", typeid(void (ControlsScreen::*)()), "5589e557565381ec7c0100008b7508", argdata, 1, 6, &func);
}

FUNC_NAKED void ControlsScreen::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func261::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func262
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CooldownSystemBox::constructor", typeid(void (CooldownSystemBox::*)(Point , ShipSystem *, bool )), "5557565381ec1c0100008bac24300100008b9c24340100008bb424380100008b84243c0100008bbc2440010000", argdata, 4, 6, &func);
}

FUNC_NAKED void CooldownSystemBox::constructor(Point pos, ShipSystem *sys, bool roundDown)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// roundDown
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func262::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func263
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CooldownSystemBox::OnRender", typeid(void (CooldownSystemBox::*)(bool )), "5589e557565383ec5c8b5d080fb6450c", argdata, 2, 6, &func);
}

FUNC_NAKED void CooldownSystemBox::OnRender(bool ignoreStatus)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ignoreStatus
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func263::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func264
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CreditScreen::OnRender", typeid(void (CreditScreen::*)()), "5589e557565383ec7c8b7508e8????????c70424????????", argdata, 1, 6, &func);
}

FUNC_NAKED void CreditScreen::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func264::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func265
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CreditScreen::constructor", typeid(void (CreditScreen::*)()), "8b442404c74008????????c7400c????????", argdata, 1, 6, &func);
}

FUNC_NAKED void CreditScreen::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func265::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func266
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CreditScreen::Start", typeid(void (CreditScreen::*)(const std::string &, const std::vector<std::string> &)), "5589e557565381ec0c0100008b5d08", argdata, 3, 6, &func);
}

FUNC_NAKED void CreditScreen::Start(const std::string &shipName, const std::vector<std::string> &crewNames)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// crewNames
		"push [ebp+12]\n\t"		// shipName
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func266::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func267
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CreditScreen::Done", typeid(bool (CreditScreen::*)()), "53baabaaaaaa83ec188b5c24208b431c2b4318", argdata, 1, 2, &func);
}

FUNC_NAKED bool CreditScreen::Done()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func267::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func268
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewAI::UpdateDrones", typeid(void (CrewAI::*)()), "5589e557565381ecbc0000008b5d08c78574ffffff00000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewAI::UpdateDrones()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func268::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func269
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewAI::AssignCrewmembers", typeid(void (CrewAI::*)()), "5557565331db83ec1c8b7424308b56308b4634", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewAI::AssignCrewmembers()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func269::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func270
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x3ff, 0x1ff};
	static FunctionDefinition funcObj("CrewAI::PrioritizeTask", typeid(int (CrewAI::*)(CrewTask , int )), "5557565383ec1c8b6c24408b5c24348b742438", argdata, 3, 2, &func);
}

FUNC_NAKED int CrewAI::PrioritizeTask(CrewTask task, int crewId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// crewId
		"push [ebp+20]\n\t"		// task
		"push [ebp+16]\n\t"		// task
		"push [ebp+12]\n\t"		// task
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func270::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func271
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewAI::UpdateIntruders", typeid(void (CrewAI::*)()), "5557565383ec3c8b6c24508b451c8b5518", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewAI::UpdateIntruders()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func271::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func272
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewAI::PrioritizeIntruderRoom", typeid(int (CrewAI::*)(CrewMember *, int , int )), "5557565383ec2c8b7c24448b5c24408b7424488b4778", argdata, 4, 2, &func);
}

FUNC_NAKED int CrewAI::PrioritizeIntruderRoom(CrewMember *crew, int roomId, int target)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// target
		"push [ebp+16]\n\t"		// roomId
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func272::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func273
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewAI::UpdateCrewMember", typeid(void (CrewAI::*)(int )), "5557565383ec5c8b5c24708b5424748b430c", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewAI::UpdateCrewMember(int crewId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// crewId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func273::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func274
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewAI::CheckForHealing", typeid(void (CrewAI::*)()), "5589e557565331db83ec4c8b7d088b4f0c8b4710", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewAI::CheckForHealing()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func274::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func275
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewAI::OnLoop", typeid(void (CrewAI::*)()), "5589e557565383ec4c8b5d088b0389442404", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewAI::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func275::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func276
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewAI::CheckForProblems", typeid(void (CrewAI::*)()), "5589e557565383ec7c8b7d088b07c6470801", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewAI::CheckForProblems()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func276::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func277
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("CrewAnimation::constructor", typeid(void (CrewAnimation::*)(int , const std::string &, Pointf , bool )), "5557565383ec4c8b4424748b4c2460", argdata, 5, 6, &func);
}

FUNC_NAKED void CrewAnimation::constructor(int shipId, const std::string &race, Pointf unk, bool hostile)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// hostile
		"push [ebp+24]\n\t"		// unk
		"push [ebp+20]\n\t"		// unk
		"push [ebp+16]\n\t"		// race
		"push [ebp+12]\n\t"		// shipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func277::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func278
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewAnimation::GetDeathSound", typeid(std::string &(*)(std::string &, CrewAnimation *)), "5589e557565381ec0c0100008b450c80b87409000000", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &CrewAnimation::GetDeathSound(std::string &strRef, CrewAnimation *anim)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// anim
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func278::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func279
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("DO_NOT_HOOK_MANTISANIMATIONSHOOTINGSOUND", typeid(void (*)()), "5557565381ec0c010000803d????????00", argdata, 0, 4, &func);
}

FUNC_NAKED void __stdcall DO_NOT_HOOK_MANTISANIMATIONSHOOTINGSOUND()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func279::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func280
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("DO_NOT_HOOK_ROCKANIMATIONSHOOTINGSOUND", typeid(void (*)()), ".5557565381ec0c010000803d????????00", argdata, 0, 4, &func);
}

FUNC_NAKED void __stdcall DO_NOT_HOOK_ROCKANIMATIONSHOOTINGSOUND()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func280::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func281
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewAnimation::GetShootingSound", typeid(std::string &(*)(std::string &, CrewAnimation *)), ".5557565381ec0c010000803d????????00", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &CrewAnimation::GetShootingSound(std::string &strRef, CrewAnimation *anim)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// anim
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func281::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func282
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewAnimation::OnRender", typeid(void (CrewAnimation::*)(float , int , bool )), "565383ec648b5c24708b74247c8b430485c0", argdata, 4, 6, &func);
}

FUNC_NAKED void CrewAnimation::OnRender(float scale, int selectedState, bool outlineOnly)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// outlineOnly
		"push [ebp+16]\n\t"		// selectedState
		"push [ebp+12]\n\t"		// scale
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func282::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func283
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewAnimation::OnRenderProps", typeid(void (CrewAnimation::*)()), "5631f65383ec348b5c2440", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewAnimation::OnRenderProps()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func283::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func284
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("CrewAnimation::OnInit", typeid(void (CrewAnimation::*)(const std::string &, Pointf , bool )), "5589e557565381eccc0000008b45188b5d08", argdata, 4, 6, &func);
}

FUNC_NAKED void CrewAnimation::OnInit(const std::string &name, Pointf position, bool enemy)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// enemy
		"push [ebp+20]\n\t"		// position
		"push [ebp+16]\n\t"		// position
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func284::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func285
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewAnimation::SetupStrips", typeid(void (CrewAnimation::*)()), "5589e557565381ec2c0100008b7d088d876c090000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewAnimation::SetupStrips()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func285::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func286
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewAnimation::OnUpdate", typeid(void (CrewAnimation::*)(Pointf , bool , bool , bool , bool , bool )), "5589e557565383ec3c8b45248b5d088b4d148b7518", argdata, 7, 6, &func);
}

FUNC_NAKED void CrewAnimation::OnUpdate(Pointf position, bool moving, bool fighting, bool repairing, bool dying, bool onFire)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+36]\n\t"		// onFire
		"push [ebp+32]\n\t"		// dying
		"push [ebp+28]\n\t"		// repairing
		"push [ebp+24]\n\t"		// fighting
		"push [ebp+20]\n\t"		// moving
		"push [ebp+16]\n\t"		// position
		"push [ebp+12]\n\t"		// position
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func286::func));
	__asm__
	(
		"add esp, 32\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 32\n\t"
	);
}

namespace _func287
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewAnimation::destructor", typeid(void (CrewAnimation::*)()), "5557565383ec5c8b442470c700????????8b807809000085c074??890424e8????????8b4424708b806c0900008d48f481f9????????0f85????????", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewAnimation::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func287::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func288
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewAnimation::FireShot", typeid(bool (CrewAnimation::*)()), "5383ec188b4424208d989c080000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewAnimation::FireShot()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func288::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func289
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewAnimation::GetFiringFrame", typeid(int (CrewAnimation::*)()), "8b5424048b423483f8ff", argdata, 1, 2, &func);
}

FUNC_NAKED int CrewAnimation::GetFiringFrame()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func289::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func290
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewBlueprint::RandomSkills", typeid(void (CrewBlueprint::*)(int )), "5531c057565383ec3c8b5424548b742450", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewBlueprint::RandomSkills(int worldLevel)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// worldLevel
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func290::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func291
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewBlueprint::RenderSkill", typeid(void (CrewBlueprint::*)(int , int , int , int , int )), "5557565383ec7c8b8424900000008b9424a40000008bbc24940000008bac24980000008b4864", argdata, 6, 6, &func);
}

FUNC_NAKED void CrewBlueprint::RenderSkill(int x, int y, int length, int height, int skill)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// skill
		"push [ebp+24]\n\t"		// height
		"push [ebp+20]\n\t"		// length
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func291::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func292
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewBlueprint::RenderIcon", typeid(void (CrewBlueprint::*)(float )), "5589e557565381eccc0100008b4508", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewBlueprint::RenderIcon(float opacity)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// opacity
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func292::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func293
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewBlueprint::destructor", typeid(void (CrewBlueprint::*)()), "5557565383ec2c8b7424408b467c", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewBlueprint::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func293::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func294
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewBlueprint::GetNameShort", typeid(std::string *(*)(std::string &, CrewBlueprint *)), "5589e557565383ec3c8b5d0c807b4800", argdata, 2, 2, &func);
}

FUNC_NAKED std::string *CrewBlueprint::GetNameShort(std::string &ret, CrewBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// ret
	);
	__asm__("call %0\n\t" :: "m"(_func294::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func295
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewBox::constructor", typeid(void (CrewBox::*)(Point , CrewMember *, int )), "5557565381ec8c0000008bbc24a00000008b8424a40000008b9c24ac000000", argdata, 4, 6, &func);
}

FUNC_NAKED void CrewBox::constructor(Point pos, CrewMember *crew, int number)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// number
		"push [ebp+20]\n\t"		// crew
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func295::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func296
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewBox::OnRender", typeid(void (CrewBox::*)()), "5589e557565383ec6c8b5d088d8380010000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewBox::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func296::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func297
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewBox::GetSelected", typeid(CrewMember *(CrewBox::*)(int , int )), "5589e557565381ecdc0200008b4508", argdata, 3, 2, &func);
}

FUNC_NAKED CrewMember *CrewBox::GetSelected(int mouseX, int mouseY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mouseY
		"push [ebp+12]\n\t"		// mouseX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func297::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func298
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewBox::OnLoop", typeid(void (CrewBox::*)(bool )), "565383ec148b5c24208b7424248b4320", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewBox::OnLoop(bool selected)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// selected
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func298::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func299
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewBox::OnRenderSkillLevel", typeid(void (CrewBox::*)()), "5383ec288b5c243080bb1c01000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewBox::OnRenderSkillLevel()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func299::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func300
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewBox::destructor", typeid(void (CrewBox::*)()), "5557565383ec2c8b7424408b8628010000890424", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewBox::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func300::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func301
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewControl::OnRender", typeid(void (CrewControl::*)()), "5589e557565381ec8c0000008b5d088b4b3c8b4340", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewControl::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func301::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func302
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewControl::OnLoop", typeid(void (CrewControl::*)()), "5589e557565383ec4c8b5d088db388000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewControl::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func302::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func303
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewControl::UpdateCrewBoxes", typeid(void (CrewControl::*)()), "5557565383ec4c8b5c24608d442430", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewControl::UpdateCrewBoxes()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func303::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func304
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewControl::LinkShip", typeid(void (CrewControl::*)(ShipManager *)), "5383ec188b5c24208b4424248903891c24", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewControl::LinkShip(ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func304::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func305
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewControl::MouseMove", typeid(void (CrewControl::*)(int , int , int , int )), "5589e557565381ecac0000008b7d08837d0cff", argdata, 5, 6, &func);
}

FUNC_NAKED void CrewControl::MouseMove(int mX, int mY, int wX, int wY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// wY
		"push [ebp+20]\n\t"		// wX
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func305::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func306
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewControl::LButton", typeid(void (CrewControl::*)(int , int , int , int , bool )), "5589e557565383ec2c8b5d088b8380000000", argdata, 6, 6, &func);
}

FUNC_NAKED void CrewControl::LButton(int mX, int mY, int wX, int wY, bool shiftHeld)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// shiftHeld
		"push [ebp+24]\n\t"		// wY
		"push [ebp+20]\n\t"		// wX
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func306::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func307
{
	static void *func = 0;
	static short argdata[] = {0x4ff};
	static FunctionDefinition funcObj("CrewControl::ClearDeadCrew", typeid(void (*)(std::vector<CrewMember*> )), "5557565331db83ec1c8b7424348b56048b0e", argdata, 1, 4, &func);
}

FUNC_NAKED void CrewControl::ClearDeadCrew(std::vector<CrewMember*> crew)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// crew
		"push [ebp+16]\n\t"		// crew
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// crew
	);
	__asm__("call %0\n\t" :: "m"(_func307::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func308
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewControl::ClearCrewBoxes", typeid(void (CrewControl::*)()), "57565383ec108b7c24208b4f408b573c", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewControl::ClearCrewBoxes()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func308::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func309
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewControl::SelectPotentialCrew", typeid(void (CrewControl::*)(CrewMember *, bool )), "57565383ec108b4424248b5c24208b742428", argdata, 3, 6, &func);
}

FUNC_NAKED void CrewControl::SelectPotentialCrew(CrewMember *crew, bool allowTeleportLeaving)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// allowTeleportLeaving
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func309::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func310
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewControl::RButton", typeid(void (CrewControl::*)(int , int , bool )), "5557565383ec1c8b742430807e3000", argdata, 4, 6, &func);
}

FUNC_NAKED void CrewControl::RButton(int mX, int mY, bool shiftHeld)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// shiftHeld
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func310::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func311
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewCustomizeBox::CheckContents", typeid(void (CrewCustomizeBox::*)()), "5589e5565383ec208b5d0880bbfc05000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewCustomizeBox::CheckContents()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func311::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func312
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewDrone::constructor", typeid(void (CrewDrone::*)(const std::string &, const std::string &, int , const DroneBlueprint *, CrewAnimation *)), "5589e557565381ecdc0000008b450c8b4d08", argdata, 6, 6, &func);
}

FUNC_NAKED void CrewDrone::constructor(const std::string &type, const std::string &name, int shipId, const DroneBlueprint *blueprint, CrewAnimation *anim)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// anim
		"push [ebp+24]\n\t"		// blueprint
		"push [ebp+20]\n\t"		// shipId
		"push [ebp+16]\n\t"		// name
		"push [ebp+12]\n\t"		// type
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func312::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func313
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewDrone::OnLoop", typeid(void (CrewDrone::*)()), "5589e557565383ec4c8b5d088db340050000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewDrone::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func313::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func314
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewDrone::ProvidesVision", typeid(bool (CrewDrone::*)()), "8b4424048b500485d2", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewDrone::ProvidesVision()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func314::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func315
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewDrone::SetCurrentShip", typeid(void (CrewDrone::*)(int )), "8b5424048b442408898238010000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewDrone::SetCurrentShip(int shipId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// shipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func315::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func316
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("DO_NOT_HOOK_DRONEGETNAME", typeid(void (*)()), "5589e55383ec148b450c8b5d088b401c80781400", argdata, 0, 4, &func);
}

FUNC_NAKED void __stdcall DO_NOT_HOOK_DRONEGETNAME()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func316::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func317
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewDrone::destructor", typeid(void (CrewDrone::*)()), ".5557565383ec2c8b442440c700????????", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewDrone::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func317::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func318
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewEquipBox::RemoveItem", typeid(void (CrewEquipBox::*)()), "5383ec188b5c24208b435485c0", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewEquipBox::RemoveItem()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func318::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func319
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewEquipBox::constructor", typeid(void (CrewEquipBox::*)(Point , ShipManager *, int )), "5557565383ec7c8b8424980000008d742448", argdata, 4, 6, &func);
}

FUNC_NAKED void CrewEquipBox::constructor(Point pos, ShipManager *ship, int slot)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// slot
		"push [ebp+20]\n\t"		// ship
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func319::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func320
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewEquipBox::GetConfirmDelete", typeid(bool (CrewEquipBox::*)()), "8b5424040fb68280020000c6828002000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewEquipBox::GetConfirmDelete()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func320::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func321
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewEquipBox::RenderLabels", typeid(void (CrewEquipBox::*)(bool , bool )), "5589e557565381ecac0000008b5d088b4d0c8b75108b434c", argdata, 3, 6, &func);
}

FUNC_NAKED void CrewEquipBox::RenderLabels(bool dragging, bool isNew)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// isNew
		"push [ebp+12]\n\t"		// dragging
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func321::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func322
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewEquipBox::OnRender", typeid(void (CrewEquipBox::*)(bool )), "5589e557565383ec2c8b5d08c70424????????8b750c", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewEquipBox::OnRender(bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func322::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func323
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewEquipBox::OnTextInput", typeid(void (CrewEquipBox::*)(SDLKey )), "565383ec148b4424208b7424248d9834020000891c24", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewEquipBox::OnTextInput(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func323::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func324
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewEquipBox::OnTextEvent", typeid(void (CrewEquipBox::*)(CEvent::TextEvent )), ".565383ec148b4424208b7424248d9834020000891c24", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewEquipBox::OnTextEvent(CEvent::TextEvent event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// event
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func324::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func325
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewEquipBox::MouseClick", typeid(void (CrewEquipBox::*)()), "5589e557565383ec2c8b5d088b734c85f6", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewEquipBox::MouseClick()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func325::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func326
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewEquipBox::CloseRename", typeid(void (CrewEquipBox::*)()), "8b44240480b83202000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewEquipBox::CloseRename()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func326::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func327
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewManifest::OnInit", typeid(void (CrewManifest::*)(ShipManager *)), "5557565383ec4c8b5c24608b4b748b537089c829d083f803", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewManifest::OnInit(ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func327::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func328
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewManifest::OnRender", typeid(void (CrewManifest::*)()), "5589e557565383ec6c8b5d08e8????????8b9304010000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewManifest::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func328::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func329
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewManifest::Update", typeid(void (CrewManifest::*)()), "565383ec448b7424508d442420", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewManifest::Update()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func329::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func330
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewManifest::constructor", typeid(void (CrewManifest::*)()), "5557565381ec8c0000008bbc24a00000008d5c24708d7424688d6c2458", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewManifest::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func330::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func331
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewManifest::OnKeyDown", typeid(void (CrewManifest::*)(SDLKey )), ".57565331db83ec108b7c24208b7424248b57708b477429d0c1f80285c0", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewManifest::OnKeyDown(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func331::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func332
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewManifest::OnKeyUp", typeid(void (CrewManifest::*)(SDLKey )), ".57565331db83ec108b7c24208b7424248b57708b477429d0c1f80285c0", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewManifest::OnKeyUp(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func332::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func333
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewManifest::OnTextInput", typeid(void (CrewManifest::*)(SDLKey )), ".57565331db83ec108b7c24208b7424248b57708b477429d0c1f80285c0", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewManifest::OnTextInput(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func333::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func334
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewManifest::OnTextEvent", typeid(void (CrewManifest::*)(CEvent::TextEvent )), ".57565331db83ec108b7c24208b7424248b57708b477429d0c1f80285c0", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewManifest::OnTextEvent(CEvent::TextEvent event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// event
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func334::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func335
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewManifest::Close", typeid(void (CrewManifest::*)()), "565331db83ec148b7424208b56708b4674", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewManifest::Close()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func335::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func336
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewManifest::MouseClick", typeid(void (CrewManifest::*)(int , int )), "565383ec148b7424208b4424248b5424288b8e0401000085c9", argdata, 3, 6, &func);
}

FUNC_NAKED void CrewManifest::MouseClick(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func336::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func337
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewManifest::MouseMove", typeid(void (CrewManifest::*)(int , int )), "5557565383ec2c8b5c24408b7424448b7c24488d437c", argdata, 3, 6, &func);
}

FUNC_NAKED void CrewManifest::MouseMove(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func337::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func338
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::OnRender", typeid(void (CrewMember::*)(bool )), "565383ec348b5c24408b74244480bbac01000000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::OnRender(bool outlineOnly)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// outlineOnly
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func338::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func339
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetRoomDamage", typeid(Damage *(*)(Damage *, CrewMember *)), "8b442404c70000000000c7400400000000c7400800000000c7400c00000000c7401000000000c7401400000000c7401800000000c7401c00000000", argdata, 2, 2, &func);
}

FUNC_NAKED Damage *CrewMember::GetRoomDamage(Damage *dmg, CrewMember *crew)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// dmg
	);
	__asm__("call %0\n\t" :: "m"(_func339::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func340
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::StartRepair", typeid(void (CrewMember::*)(Repairable *)), "5589e557565383ec3c8b5d08f30f1015????????", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::StartRepair(Repairable *toRepair)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// toRepair
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func340::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func341
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::UpdateRepair", typeid(void (CrewMember::*)()), "5589e557565383ec6c8b5d088b4368f30f2a8b90000000f30f104308", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::UpdateRepair()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func341::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func342
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::UpdateMovement", typeid(void (CrewMember::*)()), "5589e5565383ec408b5d088b839c00000083783806", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::UpdateMovement()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func342::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func343
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::OnLoop", typeid(void (CrewMember::*)()), "5589e557565381ec8c0000008b5d0880bbac01000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func343::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func344
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetTooltip", typeid(std::string &(*)(std::string &, CrewMember *)), "5589e557565381ec8c0000008b45088d5dd8895c2408", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &CrewMember::GetTooltip(std::string &strRef, CrewMember *crew)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func344::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func345
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetSex", typeid(void (CrewMember::*)(bool )), "565383ec148b5c24208b7424248b839c000000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetSex(bool male)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// male
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func345::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func346
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::CycleColorLayer", typeid(void (CrewMember::*)(int )), "5557565383ec4c8b442460????????00000000????????00000000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::CycleColorLayer(int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func346::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func347
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::constructor", typeid(void (CrewMember::*)(CrewBlueprint &, int , bool , CrewAnimation *)), "5557565381ec9c0000008b8424b00000008bbc24b80000008b9c24bc000000", argdata, 5, 6, &func);
}

FUNC_NAKED void CrewMember::constructor(CrewBlueprint &blueprint, int shipId, bool intruder, CrewAnimation *animation)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// animation
		"push [ebp+20]\n\t"		// intruder
		"push [ebp+16]\n\t"		// shipId
		"push [ebp+12]\n\t"		// blueprint
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func347::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func348
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::Functional", typeid(bool (CrewMember::*)()), "83ec1c8b4424208b10890424????????????83c41c", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::Functional()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func348::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func349
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::CountForVictory", typeid(bool (CrewMember::*)()), "5383ec188b5c24208b03891c24ff9088000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::CountForVictory()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func349::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func350
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::CanSabotage", typeid(bool (CrewMember::*)()), "8b4424040fb68098000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::CanSabotage()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func350::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func351
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::CanMan", typeid(bool (CrewMember::*)()), "8b54240431c080ba9800000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::CanMan()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func351::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func352
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::CanRepair", typeid(bool (CrewMember::*)()), "5383ec188b5c242080bb9800000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::CanRepair()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func352::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func353
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetControllable", typeid(bool (CrewMember::*)()), "5331c083ec188b5c24208b530485d2", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::GetControllable()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func353::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func354
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::ShipDamage", typeid(bool (CrewMember::*)(float )), "560f57c95383ec348b5c2440f30f10542444f30f105b28", argdata, 2, 2, &func);
}

FUNC_NAKED bool CrewMember::ShipDamage(float damage)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// damage
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func354::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func355
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::CanHeal", typeid(bool (CrewMember::*)()), "5383ec188b5c2420f30f1043280f2e432c", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::CanHeal()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func355::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func356
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::Jump", typeid(void (CrewMember::*)()), "8b4424048b908803000083420c018b108b82cc000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::Jump()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func356::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func357
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetOutOfGame", typeid(void (CrewMember::*)()), "8b0d????????8b4424048d5101c680a401000001c680ac01000001", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::SetOutOfGame()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func357::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func358
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::PositionShift", typeid(float (CrewMember::*)()), "83ec048b15????????8b442408f30f1015????????", argdata, 1, 2, &func);
}

FUNC_NAKED float CrewMember::PositionShift()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func358::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func359
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SaveState", typeid(void (CrewMember::*)(int )), "57565331db83ec108b7c24208b742424f30f108700050000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SaveState(int fileHelper)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// fileHelper
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func359::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func360
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::CanTeleport", typeid(bool (CrewMember::*)()), "5383ec188b5c24208b839c000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::CanTeleport()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func360::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func361
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::destructor", typeid(void (CrewMember::*)()), "5383ec188b5c2420891c24e8????????895c242083c4185be9????????9066905631c0", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func361::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func362
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::Cleanup", typeid(void (CrewMember::*)()), ".5383ec188b5c2420891c24", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::Cleanup()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func362::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func363
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::LoadState", typeid(void (CrewMember::*)(int )), "57565383ec108b7424248b7c2420893424", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::LoadState(int fileHelper)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// fileHelper
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func363::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func364
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetCurrentSystem", typeid(void (CrewMember::*)(ShipSystem *)), "565383ec148b5c24208b7424248b03c683b401000000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetCurrentSystem(ShipSystem *sys)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// sys
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func364::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func365
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::IsManningArtillery", typeid(bool (CrewMember::*)()), "8b44240483787c0b0f94??", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::IsManningArtillery()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func365::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func366
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::IncreaseSkill", typeid(void (CrewMember::*)(int )), "5557565383ec2c8b5c24408b7424448b03", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::IncreaseSkill(int skillId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// skillId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func366::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func367
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::CheckSkills", typeid(void (CrewMember::*)()), "57565383ec108b5c24208b83b8010000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::CheckSkills()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func367::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func368
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::MasterSkill", typeid(void (CrewMember::*)(int )), "8b4424048b5424088b8024020000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::MasterSkill(int skillId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// skillId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func368::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func369
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetSkillFromSystem", typeid(int (*)(int )), "8b54240483fa01", argdata, 1, 2, &func);
}

FUNC_NAKED int CrewMember::GetSkillFromSystem(int systemId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// systemId
	);
	__asm__("call %0\n\t" :: "m"(_func369::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func370
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetResisted", typeid(void (CrewMember::*)(bool )), "8b4424088b5424048882ec040000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetResisted(bool resisted)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// resisted
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func370::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func371
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetResisted", typeid(bool (CrewMember::*)()), "8b5424040fb682ec040000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::GetResisted()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func371::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func372
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetSkillProgress", typeid(void (CrewMember::*)(int , int )), "8b4424048b4c240c8b5424088b8024020000", argdata, 3, 6, &func);
}

FUNC_NAKED void CrewMember::SetSkillProgress(int skillId, int skillLevel)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// skillLevel
		"push [ebp+12]\n\t"		// skillId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func372::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func373
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetSkillLevel", typeid(int (CrewMember::*)(int )), "8b542408b80100000083fa05", argdata, 2, 2, &func);
}

FUNC_NAKED int CrewMember::GetSkillLevel(int skillId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// skillId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func373::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func374
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetSkillProgress", typeid(std::pair<int, int> (CrewMember::*)(int )), "8b5424088b4c240c8b4424048b9224020000", argdata, 2, 2, &func);
}

FUNC_NAKED std::pair<int, int> CrewMember::GetSkillProgress(int skillId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// skillId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func374::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func375
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetSkillModifier", typeid(void (CrewMember::*)(int )), "538b44240cba010000008b4c240883f805", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::GetSkillModifier(int skillId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// skillId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func375::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func376
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::BadAtCombat", typeid(bool (CrewMember::*)()), "5383ec188b5c24208b03891c24ff90a8000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::BadAtCombat()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func376::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func377
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::EmptySlot", typeid(void (CrewMember::*)()), "5383ec288b5c24308b8388000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::EmptySlot()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func377::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func378
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::NeedsSlot", typeid(bool (CrewMember::*)()), "8b44240480b8ac01000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::NeedsSlot()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func378::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func379
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::DirectModifyHealth", typeid(bool (CrewMember::*)(float )), "560f57c95383ec348b5c2440f30f10542444f30f105b28", argdata, 2, 2, &func);
}

FUNC_NAKED bool CrewMember::DirectModifyHealth(float health)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// health
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func379::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func380
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::ModifyHealth", typeid(void (CrewMember::*)(float )), "5383ec18f30f104c2424", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::ModifyHealth(float health)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// health
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func380::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func381
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::ApplyDamage", typeid(bool (CrewMember::*)(float )), "5383ec188b5c2420f30f10442424f30f104b28", argdata, 2, 2, &func);
}

FUNC_NAKED bool CrewMember::ApplyDamage(float damage)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// damage
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func381::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func382
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::RepairingSystem", typeid(bool (CrewMember::*)()), "5383ec188b5c24208b5368", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::RepairingSystem()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func382::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func383
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::Sabotaging", typeid(bool (CrewMember::*)()), "5383ec188b5c24208b436885c074??8b10", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::Sabotaging()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func383::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func384
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::RepairingFire", typeid(bool (CrewMember::*)()), "8b54240431c08b4a6885c9", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::RepairingFire()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func384::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func385
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::SelectSabotageTarget", typeid(void *(CrewMember::*)()), "5589e557565383ec2c8b750c8b5d088b4668", argdata, 1, 2, &func);
}

FUNC_NAKED void *CrewMember::SelectSabotageTarget()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func385::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func386
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::SavePosition", typeid(void (CrewMember::*)()), "8b4424048b90880000008990f0040000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::SavePosition()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func386::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func387
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::ClearPosition", typeid(void (CrewMember::*)()), "8b442404c780f4040000ffffffffc780f0040000ffffffff", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::ClearPosition()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func387::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func388
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetSavedPosition", typeid(void (*)(Slot *, CrewMember *)), "8b5424088b4424048b8af00400008908", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::GetSavedPosition(Slot *ret, CrewMember *crew)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// ret
	);
	__asm__("call %0\n\t" :: "m"(_func388::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func389
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff};
	static FunctionDefinition funcObj("CrewMember::SetSavePosition", typeid(void (CrewMember::*)(Slot )), "8b4424048b5424088990f00400008b54240c", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetSavePosition(Slot position)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// position
		"push [ebp+20]\n\t"		// position
		"push [ebp+16]\n\t"		// position
		"push [ebp+12]\n\t"		// position
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func389::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func390
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::StopRepairing", typeid(void (CrewMember::*)()), "5383ec188b5c24208b436885c074??8b03", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::StopRepairing()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func390::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func391
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::Repairing", typeid(bool (CrewMember::*)()), "8b4424048b406885c00f95??", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::Repairing()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func391::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func392
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetFrozen", typeid(void (CrewMember::*)(bool )), "8b5424088b44240484d274??", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetFrozen(bool frozen)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// frozen
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func392::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func393
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetFrozenLocation", typeid(void (CrewMember::*)(bool )), "8b4424088b542404888279010000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetFrozenLocation(bool frozenLocation)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// frozenLocation
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func393::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func394
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x3ff};
	static FunctionDefinition funcObj("CrewMember::SetCrewTask", typeid(void (CrewMember::*)(CrewTask )), "8b4424048b54240889907c010000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetCrewTask(CrewTask task)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// task
		"push [ebp+16]\n\t"		// task
		"push [ebp+12]\n\t"		// task
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func394::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func395
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x3ff};
	static FunctionDefinition funcObj("CrewMember::SetTask", typeid(void (CrewMember::*)(CrewTask )), "8b4424048b54240889907c010000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetTask(CrewTask task)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// task
		"push [ebp+16]\n\t"		// task
		"push [ebp+12]\n\t"		// task
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func395::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func396
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::FindSlot", typeid(Slot *(CrewMember::*)(int , int , bool )), "5589e557565383ec3c8b45188b7d0c8b5d088b7510", argdata, 4, 2, &func);
}

FUNC_NAKED Slot *CrewMember::FindSlot(int unk1, int roomId, bool unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk2
		"push [ebp+16]\n\t"		// roomId
		"push [ebp+12]\n\t"		// unk1
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func396::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func397
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::CheckRoomPath", typeid(bool (CrewMember::*)(int )), "5589e557565383ec6c8b750c8b5d088d45b8", argdata, 2, 2, &func);
}

FUNC_NAKED bool CrewMember::CheckRoomPath(int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func397::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func398
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::NeedsIntruderSlot", typeid(bool (CrewMember::*)()), ".8b44240480b8ad03000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::NeedsIntruderSlot()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func398::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func399
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("CrewMember::SetPosition", typeid(void (CrewMember::*)(Point )), "565383ec248b4424348b5424388b5c2430", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetPosition(Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func399::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func400
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::ClearTask", typeid(void (CrewMember::*)()), "8b4424048b5078c78084010000ffffffff", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::ClearTask()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func400::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func401
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::ClearPath", typeid(void (CrewMember::*)()), "5589e557565383ec5c8b5d088d55c0", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::ClearPath()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func401::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func402
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetRoom", typeid(void (CrewMember::*)(int )), "5589e557565383ec3c8b5d088b838c010000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetRoom(int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func402::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func403
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::IsBusy", typeid(bool (CrewMember::*)()), "8b542404b8010000008b4a6885c9", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::IsBusy()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func403::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func404
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::OnInit", typeid(bool (CrewMember::*)()), "8b442404c740201e000000c7406400000000c680ac01000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::OnInit()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func404::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func405
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetFinalGoal", typeid(void *(CrewMember::*)()), "83ec1c8b542424f30f1005????????", argdata, 1, 2, &func);
}

FUNC_NAKED void *CrewMember::GetFinalGoal()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func405::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func406
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetNextGoal", typeid(void *(CrewMember::*)()), "57565383ec108b7424248b5c2420f30f10461c", argdata, 1, 2, &func);
}

FUNC_NAKED void *CrewMember::GetNextGoal()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func406::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func407
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::CloseDoorBehind", typeid(void (CrewMember::*)(Door *)), "8b5424088b442404895064", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::CloseDoorBehind(Door *door)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// door
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func407::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func408
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetMoveSpeed", typeid(float (CrewMember::*)()), "5557565383ec4c8b5c24608d7424308d7c242e", argdata, 1, 2, &func);
}

FUNC_NAKED float CrewMember::GetMoveSpeed()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func408::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func409
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::Restart", typeid(void (CrewMember::*)()), "5589e557565383ec3c8b5d088d75d08b03", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::Restart()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func409::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func410
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetDamageBoost", typeid(void (CrewMember::*)(float )), "8b442404f30f10442408f30f1180e4040000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetDamageBoost(float damageBoost)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// damageBoost
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func410::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func411
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetHealthBoost", typeid(void (CrewMember::*)(int )), "5383ec188b5c24208b4424248b93e0040000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetHealthBoost(int healthBoost)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// healthBoost
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func411::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func412
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::InitializeSkills", typeid(void (CrewMember::*)()), "575631f65331db83ec108b7c2420", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::InitializeSkills()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func412::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func413
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetCloneReady", typeid(void (CrewMember::*)(bool )), "565383ec248b5c24308b44243480bbac01000000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetCloneReady(bool cloneReady)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// cloneReady
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func413::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func414
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::Kill", typeid(void (CrewMember::*)()), "565383ec248b5c24308b7424348b4368", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::Kill()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func414::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func415
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::NeedFrozenLocation", typeid(bool (CrewMember::*)()), "8b54240431c080ba7801000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::NeedFrozenLocation()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func415::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func416
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::CheckForTeleport", typeid(void (CrewMember::*)()), "565383ec148b5c24208bb39c000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::CheckForTeleport()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func416::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func417
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetCurrentShip", typeid(void (CrewMember::*)(int )), "8b5424048b442408898238010000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetCurrentShip(int shipId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// shipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func417::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func418
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::CheckFighting", typeid(void (CrewMember::*)()), "8b4424048b9060010000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::CheckFighting()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func418::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func419
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetDeathNumber", typeid(void (CrewMember::*)(int )), "8b4424088b5424043b05????????", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetDeathNumber(int deathNum)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// deathNum
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func419::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func420
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::ForceMindControl", typeid(void (CrewMember::*)(bool )), "8b4424088b5424048882ad030000", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::ForceMindControl(bool force)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// force
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func420::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func421
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("CrewMember::RenderSkillUpAnimation", typeid(void (CrewMember::*)(Point )), "5557565383ec6c8b842484000000c744242c0000000089442434", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::RenderSkillUpAnimation(Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func421::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func422
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::Clone", typeid(void (CrewMember::*)()), "57565383ec208b5c2430c683a401000000c683ac01000000c7830005000000000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::Clone()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func422::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func423
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::UpdateHealth", typeid(void (CrewMember::*)()), "565383ec448b5c24508b83b0010000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::UpdateHealth()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func423::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func424
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::OnRenderPath", typeid(void (CrewMember::*)()), "5383ec288b5c24308b4b0485c9", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::OnRenderPath()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func424::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func425
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetPath", typeid(bool (CrewMember::*)()), "5557565383ec3c8b742454f30f1005????????", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::SetPath()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func425::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func426
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetRoomPath", typeid(void (CrewMember::*)(int , int )), "5589e557565383ec5c8b5d088b750c8b7d108b838c010000", argdata, 3, 6, &func);
}

FUNC_NAKED void CrewMember::SetRoomPath(int roomId, int slotId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// slotId
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func426::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func427
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetLocation", typeid(void *(CrewMember::*)()), "57565383ec108b7424248b5c2420f30f10460c", argdata, 1, 2, &func);
}

FUNC_NAKED void *CrewMember::GetLocation()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func427::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func428
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::AtGoal", typeid(bool (CrewMember::*)()), "8b442404f30f1015????????f30f100d????????f30f105818", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::AtGoal()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func428::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func429
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::AtFinalGoal", typeid(bool (CrewMember::*)()), ".8b442404f30f1015????????f30f2a8890000000f30f104008", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::AtFinalGoal()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func429::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func430
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::OnRenderHealth", typeid(void (CrewMember::*)()), "5589e557565381ecac0000008b7d0880bfac01000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::OnRenderHealth()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func430::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func431
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetIntegerHealth", typeid(int (CrewMember::*)()), "8b54240431c080baac0100000075??f30f2c4228", argdata, 1, 2, &func);
}

FUNC_NAKED int CrewMember::GetIntegerHealth()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func431::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func432
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetRepairingId", typeid(int (CrewMember::*)()), "8b4424048b406885c074??", argdata, 1, 2, &func);
}

FUNC_NAKED int CrewMember::GetRepairingId()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func432::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func433
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::WithinRect", typeid(bool (CrewMember::*)(int , int , int , int )), "538b4424148b5c24088b54240c8b4c2418", argdata, 5, 2, &func);
}

FUNC_NAKED bool CrewMember::WithinRect(int x, int y, int w, int h)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// h
		"push [ebp+20]\n\t"		// w
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func433::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func434
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetLongName", typeid(std::string &(*)(std::string &, CrewMember *)), "5589e55383ec148b450c8b5d0880b81002000000", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &CrewMember::GetLongName(std::string &str, CrewMember *crew)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// str
	);
	__asm__("call %0\n\t" :: "m"(_func434::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func435
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x9ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetName", typeid(void (CrewMember::*)(TextString , bool )), "5589e557565383ec3c8b5d088b750c8b7d108d830c020000", argdata, 3, 6, &func);
}

FUNC_NAKED void CrewMember::SetName(TextString name, bool force)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+48]\n\t"		// force
		"push [ebp+44]\n\t"		// name
		"push [ebp+40]\n\t"		// name
		"push [ebp+36]\n\t"		// name
		"push [ebp+32]\n\t"		// name
		"push [ebp+28]\n\t"		// name
		"push [ebp+24]\n\t"		// name
		"push [ebp+20]\n\t"		// name
		"push [ebp+16]\n\t"		// name
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func435::func));
	__asm__
	(
		"add esp, 44\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 44\n\t"
	);
}

namespace _func436
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetName", typeid(std::string &(*)(std::string &, CrewMember *)), "5589e55383ec148b450c8b5d0880b80802000000", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &CrewMember::GetName(std::string &str, CrewMember *crew)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// str
	);
	__asm__("call %0\n\t" :: "m"(_func436::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func437
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetCurrentTarget", typeid(void (CrewMember::*)(CrewTarget *, bool )), "57565383ec108b5c24208b7424248b7c24288b03", argdata, 3, 6, &func);
}

FUNC_NAKED void CrewMember::SetCurrentTarget(CrewTarget *target, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// target
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func437::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func438
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetNewGoal", typeid(char (CrewMember::*)()), "5589e557565383ec5c8b7d088b4764", argdata, 1, 2, &func);
}

FUNC_NAKED char CrewMember::GetNewGoal()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func438::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func439
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::MoveToRoom", typeid(bool (CrewMember::*)(int , int , bool )), "5589e557565383ec7c8b5d088b7514f30f108300050000", argdata, 4, 2, &func);
}

FUNC_NAKED bool CrewMember::MoveToRoom(int roomId, int slotId, bool forceMove)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// forceMove
		"push [ebp+16]\n\t"		// slotId
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func439::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func440
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetMindControl", typeid(void (CrewMember::*)(bool )), "5589e5565383ec308b5d088b750c", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetMindControl(bool controlled)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// controlled
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func440::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func441
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::RestorePosition", typeid(bool (CrewMember::*)()), "5589e557565383ec7c8b5d088b038bbbf40400008bb3f0040000", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMember::RestorePosition()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func441::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func442
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::ContainsPoint", typeid(bool (CrewMember::*)(int , int )), "8b542404f30f1005????????f30f2a4c2408f30f594214f30f105208", argdata, 3, 2, &func);
}

FUNC_NAKED bool CrewMember::ContainsPoint(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func442::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func443
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::SetMedbay", typeid(void (CrewMember::*)(float )), "5383ec188b5c24208b03891c24ff5078", argdata, 2, 6, &func);
}

FUNC_NAKED void CrewMember::SetMedbay(float health)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// health
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func443::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func444
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::StartTeleport", typeid(void (CrewMember::*)()), ".5383ec188b4424208b989c000000c7433806000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::StartTeleport()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func444::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func445
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMember::StartTeleportArrive", typeid(void (CrewMember::*)()), ".5383ec188b4424208b989c000000c7433806000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMember::StartTeleportArrive()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func445::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func446
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::InsideRoom", typeid(bool (CrewMember::*)(int )), "8b4424048b5424083950780f94??", argdata, 2, 2, &func);
}

FUNC_NAKED bool CrewMember::InsideRoom(int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func446::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func447
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMember::GetUniqueRepairing", typeid(std::string &(*)(std::string &, CrewMember *)), ".5383ec288b5c24308d44241f89442408", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &CrewMember::GetUniqueRepairing(std::string &strRef, CrewMember *crew)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func447::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func448
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::destructor", typeid(void (CrewMemberFactory::*)()), "565383ec148b7424208b4e108b560c", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMemberFactory::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func448::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func449
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::Restart", typeid(void (CrewMemberFactory::*)()), "565383ec148b5c24208b430c8b5310", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMemberFactory::Restart()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func449::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func450
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::CountCloneReadyCrew", typeid(int (CrewMemberFactory::*)()), "5557565383ec1c8b6c24300fb67c2434", argdata, 1, 2, &func);
}

FUNC_NAKED int CrewMemberFactory::CountCloneReadyCrew()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func450::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func451
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::GetCrewPortraitList", typeid(void (CrewMemberFactory::*)(std::vector<CrewMember*> *, int )), "5557565331db83ec2c8b7424408b6c24448b560c8b4610", argdata, 3, 6, &func);
}

FUNC_NAKED void CrewMemberFactory::GetCrewPortraitList(std::vector<CrewMember*> *vec, int teamId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// teamId
		"push [ebp+12]\n\t"		// vec
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func451::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func452
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::GetCrewList", typeid(void (CrewMemberFactory::*)(std::vector<CrewMember*> *, int , bool )), "5557565331db83ec2c8b7424400fb644244c8b6c24488b560c", argdata, 4, 6, &func);
}

FUNC_NAKED void CrewMemberFactory::GetCrewList(std::vector<CrewMember*> *vec, int unk, bool unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk2
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// vec
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func452::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func453
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::GetPlayerCrewCount", typeid(int (CrewMemberFactory::*)()), ".8b4424048b00", argdata, 1, 2, &func);
}

FUNC_NAKED int CrewMemberFactory::GetPlayerCrewCount()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func453::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func454
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::GetEnemyCloneCount", typeid(int (CrewMemberFactory::*)()), ".8b4424048b4008", argdata, 1, 2, &func);
}

FUNC_NAKED int CrewMemberFactory::GetEnemyCloneCount()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func454::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func455
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::GetCrewCount", typeid(int (CrewMemberFactory::*)(bool )), "8b542404807c2408008b42040f4402", argdata, 2, 2, &func);
}

FUNC_NAKED int CrewMemberFactory::GetCrewCount(bool enemy)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// enemy
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func455::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func456
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::GetEnemyCrewCount", typeid(int (CrewMemberFactory::*)()), ".8b4424048b4004", argdata, 1, 2, &func);
}

FUNC_NAKED int CrewMemberFactory::GetEnemyCrewCount()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func456::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func457
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::IsRace", typeid(bool (*)(const std::string &)), ".5383ec188b5c2420c7442404????????891c24", argdata, 1, 2, &func);
}

FUNC_NAKED bool CrewMemberFactory::IsRace(const std::string &species)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// species
	);
	__asm__("call %0\n\t" :: "m"(_func457::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func458
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::CreateBoarderDrone", typeid(BoarderDrone *(CrewMemberFactory::*)(int , const DroneBlueprint *)), "5557565383ec4c8b442468c7442404????????", argdata, 3, 2, &func);
}

FUNC_NAKED BoarderDrone *CrewMemberFactory::CreateBoarderDrone(int shipId, const DroneBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// bp
		"push [ebp+12]\n\t"		// shipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func458::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func459
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::CreateBattleDrone", typeid(BattleDrone *(CrewMemberFactory::*)(int , const DroneBlueprint *)), "5557565383ec4cc70424a40600008b7424608d7c2434", argdata, 3, 2, &func);
}

FUNC_NAKED BattleDrone *CrewMemberFactory::CreateBattleDrone(int shipId, const DroneBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// bp
		"push [ebp+12]\n\t"		// shipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func459::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func460
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::GetCloneReadyList", typeid(void (CrewMemberFactory::*)(std::vector<CrewMember*> &, bool )), "5589e557565383ec3c0fb645108b7d08", argdata, 3, 6, &func);
}

FUNC_NAKED void CrewMemberFactory::GetCloneReadyList(std::vector<CrewMember*> &vec, bool player)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// player
		"push [ebp+12]\n\t"		// vec
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func460::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func461
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::CreateRepairDrone", typeid(RepairDrone *(CrewMemberFactory::*)(int , const DroneBlueprint *)), "5557565383ec4c8d4424308904248d5c2438c744240800000000", argdata, 3, 2, &func);
}

FUNC_NAKED RepairDrone *CrewMemberFactory::CreateRepairDrone(int shipId, const DroneBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// bp
		"push [ebp+12]\n\t"		// shipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func461::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func462
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::GetRandomFriendlyName", typeid(std::pair<std::string, bool> &(CrewMemberFactory::*)(const std::string &)), "5589e557565383ec4c8b750c??????00000000", argdata, 2, 2, &func);
}

FUNC_NAKED std::pair<std::string, bool> &CrewMemberFactory::GetRandomFriendlyName(const std::string &unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func462::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func463
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::GetCrewNames", typeid(std::vector<std::string> *(*)(std::vector<std::string> &, CrewMemberFactory *)), "5589e557565331db83ec3c8b750c8b45088b4e10", argdata, 2, 2, &func);
}

FUNC_NAKED std::vector<std::string> *CrewMemberFactory::GetCrewNames(std::vector<std::string> &vec, CrewMemberFactory *factory)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// factory
		"push [ebp+8]\n\t"		// vec
	);
	__asm__("call %0\n\t" :: "m"(_func463::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func464
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::OnLoop", typeid(void (CrewMemberFactory::*)()), "5589e557565381ecbc0000008b4508??????00000000", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMemberFactory::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func464::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func465
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::RemoveExcessCrew", typeid(void (CrewMemberFactory::*)()), "5557565331db83ec1c8b7424308b460c8b5610", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewMemberFactory::RemoveExcessCrew()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func465::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func466
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewMemberFactory::CreateCrewMember", typeid(CrewMember *(CrewMemberFactory::*)(CrewBlueprint *, int , bool )), "5589e557565381ecdc0000008b4514c7442404????????", argdata, 4, 2, &func);
}

FUNC_NAKED CrewMember *CrewMemberFactory::CreateCrewMember(CrewBlueprint *bp, int shipId, bool intruder)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// intruder
		"push [ebp+16]\n\t"		// shipId
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func466::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func467
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("CrewStoreBox::Purchase", typeid(void (CrewStoreBox::*)()), "5557565331db81eccc0000008bac24e0000000892c24", argdata, 1, 6, &func);
}

FUNC_NAKED void CrewStoreBox::Purchase()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func467::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func468
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CrewStoreBox::constructor", typeid(void (CrewStoreBox::*)(ShipManager *, int , const std::string &)), "5589e557565381ecdc0000008b5d088d8553ffffff", argdata, 4, 6, &func);
}

FUNC_NAKED void CrewStoreBox::constructor(ShipManager *ship, int worldLevel, const std::string &type)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// type
		"push [ebp+16]\n\t"		// worldLevel
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func468::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func469
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("DamageMessage::constructor", typeid(void (DamageMessage::*)(float , Pointf , DamageMessage::MessageType )), "565383ec748b8c24900000008b9c24800000008b8424880000008b94248c000000", argdata, 4, 6, &func);
}

FUNC_NAKED void DamageMessage::constructor(float length, Pointf pos, DamageMessage::MessageType type)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// type
		"push [ebp+20]\n\t"		// pos
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// length
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func469::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func470
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("DamageMessage::constructor2", typeid(void (DamageMessage::*)(float , int , Pointf , bool )), "5557565381ecec0100008b8c24140200008bac24000200008b84240c0200008b942410020000f30f10842404020000", argdata, 5, 6, &func);
}

FUNC_NAKED void DamageMessage::constructor2(float length, int amount, Pointf pos, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// unk
		"push [ebp+24]\n\t"		// pos
		"push [ebp+20]\n\t"		// pos
		"push [ebp+16]\n\t"		// amount
		"push [ebp+12]\n\t"		// length
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func470::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func471
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("DefenseDrone::ValidTargetObject", typeid(bool (DefenseDrone::*)(Targetable *)), "565383ec148b5c24248b74242085db74??8b4304", argdata, 2, 2, &func);
}

FUNC_NAKED bool DefenseDrone::ValidTargetObject(Targetable *other)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// other
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func471::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func472
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("DefenseDrone::PickTarget", typeid(void (DefenseDrone::*)()), "5589e5565383ec608b5d0880bbdd01000000", argdata, 1, 6, &func);
}

FUNC_NAKED void DefenseDrone::PickTarget()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func472::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func473
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Description::copy_assign_1", typeid(Description &(Description::*)(Description &&)), "565383ec148b5c24208b742424891c2489742404e8????????0fb646048843048d4608894424048d4308890424e8????????0fb6460c88430c8d4610894424048d4310890424e8????????0fb646148843148b46188943188b461c89431c8b46208943208b46248943240fb646288843288d462c83c634894424048d432c890424", argdata, 2, 2, &func);
}

FUNC_NAKED Description &Description::copy_assign_1(Description &&other)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// other
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func473::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func474
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Description::copy_assign_2", typeid(Description &(Description::*)(const Description &)), ".565383ec148b5c24208b742424891c2489742404e8????????0fb646048843048d4608894424048d4308890424e8????????0fb6460c88430c8d4610894424048d4310890424e8????????0fb646148843148b46188943188b461c89431c8b46208943208b46248943240fb646288843288d462c83c634894424048d432c890424", argdata, 2, 2, &func);
}

FUNC_NAKED Description &Description::copy_assign_2(const Description &other)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// other
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func474::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func475
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Description::destructor", typeid(void (Description::*)()), "565383ec248b5c24308b43348d50f4", argdata, 1, 6, &func);
}

FUNC_NAKED void Description::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func475::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func476
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Door::FakeClose", typeid(void (Door::*)()), "565383ec148b5c24200fb64318c6432000", argdata, 1, 6, &func);
}

FUNC_NAKED void Door::FakeClose()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func476::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func477
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Door::IsSealed", typeid(bool (Door::*)(int )), "8b5424048b82c40100008b4a0485c0", argdata, 2, 2, &func);
}

FUNC_NAKED bool Door::IsSealed(int shipId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// shipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func477::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func478
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Door::FakeOpen", typeid(void (Door::*)()), "565383ec148b5c242083bb8c00000004c6432001c783a001000000000000", argdata, 1, 6, &func);
}

FUNC_NAKED void Door::FakeOpen()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func478::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func479
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("DoorBox::constructor", typeid(void (DoorBox::*)(Point , ShipSystem *, ShipManager *)), "5557565383ec5c8b44247c8d74242c8b5c24708d6c242a8b542478", argdata, 4, 6, &func);
}

FUNC_NAKED void DoorBox::constructor(Point pos, ShipSystem *sys, ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// ship
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func479::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func480
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("DroneBlueprint::RenderIcon", typeid(void (DroneBlueprint::*)(float )), "83ec1c8b4424208b401c8b10", argdata, 2, 6, &func);
}

FUNC_NAKED void DroneBlueprint::RenderIcon(float scale)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// scale
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func480::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func481
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("DroneStoreBox::constructor", typeid(void (DroneStoreBox::*)(ShipManager *, Equipment *, const DroneBlueprint *)), "5557565383ec2c8d44241a8b5c24408d7c241c8b74244c89442408c7442404????????893c24e8????????8b442448897c2404891c248944240c", argdata, 4, 6, &func);
}

FUNC_NAKED void DroneStoreBox::constructor(ShipManager *ship, Equipment *equip, const DroneBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// bp
		"push [ebp+16]\n\t"		// equip
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func481::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func482
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("DroneSystem::RemoveDrone", typeid(void (DroneSystem::*)(int )), "5731c0565383ec108b4c24248b5c242085c9", argdata, 2, 6, &func);
}

FUNC_NAKED void DroneSystem::RemoveDrone(int slot)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// slot
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func482::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func483
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("DroneSystem::UpdateBonusPower", typeid(void (DroneSystem::*)()), "555731ff565383ec2c8b6c24408b85480100008b959c010000", argdata, 1, 6, &func);
}

FUNC_NAKED void DroneSystem::UpdateBonusPower()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func483::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func484
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("DroneSystem::SetBonusPower", typeid(void (DroneSystem::*)(int , int )), ".565383ec148b5c24208b742424891c24e8????????39f00f4ef0", argdata, 3, 6, &func);
}

FUNC_NAKED void DroneSystem::SetBonusPower(int amount, int permanentPower)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// permanentPower
		"push [ebp+12]\n\t"		// amount
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func484::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func485
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("DropBox::OnRender", typeid(void (DropBox::*)()), "5589e557565381ecac0000008b7d08893c24", argdata, 1, 6, &func);
}

FUNC_NAKED void DropBox::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func485::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func486
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("DropBox::GetHeight", typeid(int (DropBox::*)()), "8b5424048b4a0c89c885c0", argdata, 1, 2, &func);
}

FUNC_NAKED int DropBox::GetHeight()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func486::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func487
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("EnergyAlien::OnLoop", typeid(void (EnergyAlien::*)()), "5383ec188b5c2420891c24e8????????8b839c000000", argdata, 1, 6, &func);
}

FUNC_NAKED void EnergyAlien::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func487::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func488
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EnergyAlien::GetRoomDamage", typeid(Damage *(*)(Damage *, EnergyAlien *)), "8b5424088b44240480ba3d05000000", argdata, 2, 2, &func);
}

FUNC_NAKED Damage *EnergyAlien::GetRoomDamage(Damage *dmg, EnergyAlien *crew)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// dmg
	);
	__asm__("call %0\n\t" :: "m"(_func488::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func489
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Equipment::OnInit", typeid(void (Equipment::*)(ShipManager *)), "5557565381ec8c0000008bac24a00000008bb5200100008b8d1c010000", argdata, 2, 6, &func);
}

FUNC_NAKED void Equipment::OnInit(ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func489::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func490
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Equipment::OnLoop", typeid(void (Equipment::*)()), "55575631f65383ec2c8b5c24408b83140100002b8310010000", argdata, 1, 6, &func);
}

FUNC_NAKED void Equipment::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func490::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func491
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Equipment::MouseClick", typeid(void (Equipment::*)(int , int )), "5383ec188b4424288b5c242089442408", argdata, 3, 6, &func);
}

FUNC_NAKED void Equipment::MouseClick(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func491::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func492
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Equipment::MouseUp", typeid(void (Equipment::*)(int , int )), "565383ec548b5c246080bb3c01000000", argdata, 3, 6, &func);
}

FUNC_NAKED void Equipment::MouseUp(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func492::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func493
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("EquipmentBox::SetPosition", typeid(void (EquipmentBox::*)(Point )), "8b4424048b4c24088b54240c894834", argdata, 2, 6, &func);
}

FUNC_NAKED void EquipmentBox::SetPosition(Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func493::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func494
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::MouseMove", typeid(int (EquipmentBox::*)(int , int )), "538b44240831db8b54240c8b483c", argdata, 3, 2, &func);
}

FUNC_NAKED int EquipmentBox::MouseMove(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func494::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func495
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::Restart", typeid(void (EquipmentBox::*)()), ".8b442404660fefc0f30f7f404c", argdata, 1, 6, &func);
}

FUNC_NAKED void EquipmentBox::Restart()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func495::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func496
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff};
	static FunctionDefinition funcObj("EquipmentBox::AddItem", typeid(void (EquipmentBox::*)(EquipmentBoxItem )), "8b4424048b54240889504c8b54240c", argdata, 2, 6, &func);
}

FUNC_NAKED void EquipmentBox::AddItem(EquipmentBoxItem item)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// item
		"push [ebp+20]\n\t"		// item
		"push [ebp+16]\n\t"		// item
		"push [ebp+12]\n\t"		// item
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func496::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func497
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::CanHoldWeapon", typeid(bool (EquipmentBox::*)()), "8b5424048b424c85c074??85c0", argdata, 1, 2, &func);
}

FUNC_NAKED bool EquipmentBox::CanHoldWeapon()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func497::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func498
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::CanHoldDrone", typeid(bool (EquipmentBox::*)()), "8b4424048b504c85d28b5050", argdata, 1, 2, &func);
}

FUNC_NAKED bool EquipmentBox::CanHoldDrone()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func498::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func499
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::GetType", typeid(int (EquipmentBox::*)()), "8b5424048b4c24088b424c85c0", argdata, 1, 2, &func);
}

FUNC_NAKED int EquipmentBox::GetType()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func499::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func500
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::OnRender", typeid(void (EquipmentBox::*)(bool )), "57565383ec408b5c24508b742454", argdata, 2, 6, &func);
}

FUNC_NAKED void EquipmentBox::OnRender(bool isEmpty)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// isEmpty
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func500::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func501
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::Free", typeid(void (EquipmentBox::*)()), ".5383ec288b5c24308b431c", argdata, 1, 6, &func);
}

FUNC_NAKED EquipmentBox::~EquipmentBox()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func501::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func502
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::UpdateBoxImage", typeid(void (EquipmentBox::*)(bool )), "5557565383ec6c8bb42484000000", argdata, 2, 6, &func);
}

FUNC_NAKED void EquipmentBox::UpdateBoxImage(bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func502::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func503
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::RenderLabels", typeid(void (EquipmentBox::*)(bool )), "5589e557565383ec5c8b5d088b450c8d7dd8", argdata, 2, 6, &func);
}

FUNC_NAKED void EquipmentBox::RenderLabels(bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func503::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func504
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::constructor", typeid(void (EquipmentBox::*)(Point , int )), "565383ec548b0d????????8b5c24608d74243c8b4424688b542464894b088b0d????????8943388943408b44246c", argdata, 3, 6, &func);
}

FUNC_NAKED void EquipmentBox::constructor(Point pos, int slot)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// slot
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func504::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func505
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::GetItemValue", typeid(int (EquipmentBox::*)()), "8b5424048b424c85c074??8b401c", argdata, 1, 2, &func);
}

FUNC_NAKED int EquipmentBox::GetItemValue()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func505::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func506
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::SetBlueprint", typeid(void (EquipmentBox::*)(InfoBox *, bool )), "5731c0565383ec208b5c24308b7424348b7c2438", argdata, 3, 6, &func);
}

FUNC_NAKED void EquipmentBox::SetBlueprint(InfoBox *infoBox, bool detailedBox)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// detailedBox
		"push [ebp+12]\n\t"		// infoBox
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func506::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func507
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("EquipmentBox::GetBlueprint", typeid(Blueprint *(EquipmentBox::*)()), "8b5424048b425085c0", argdata, 1, 2, &func);
}

FUNC_NAKED Blueprint *EquipmentBox::GetBlueprint()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func507::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func508
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventGenerator::GetBaseEvent", typeid(LocationEvent *(EventGenerator::*)(const std::string &, int , char , int )), "5557565383ec1c8b4424408b5c24308b7424348b7c2438", argdata, 5, 2, &func);
}

FUNC_NAKED LocationEvent *EventGenerator::GetBaseEvent(const std::string &name, int worldLevel, char ignoreUnique, int seed)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// seed
		"push [ebp+20]\n\t"		// ignoreUnique
		"push [ebp+16]\n\t"		// worldLevel
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func508::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func509
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventGenerator::CreateEvent1", typeid(LocationEvent *(EventGenerator::*)(const std::string &, int )), "5589e557565381ecdc0100008b45148b5d0c", argdata, 3, 2, &func);
}

FUNC_NAKED LocationEvent *EventGenerator::CreateEvent1(const std::string &name, int worldLevel)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// worldLevel
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func509::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func510
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventGenerator::GetSpecificSector", typeid(Sector *(*)(SectorDescription *, EventGenerator *, const std::string &)), "5589e557565381ecac0000008b75108b450c", argdata, 3, 2, &func);
}

FUNC_NAKED Sector *EventGenerator::GetSpecificSector(SectorDescription *desc, EventGenerator *eventGenerator, const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// name
		"push [ebp+12]\n\t"		// eventGenerator
		"push [ebp+8]\n\t"		// desc
	);
	__asm__("call %0\n\t" :: "m"(_func510::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func511
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventGenerator::GetImageFromList", typeid(void (*)(std::string &, EventGenerator *, const std::string &)), "5589e557565383ec3c8b450c8b7d108b5d08", argdata, 3, 6, &func);
}

FUNC_NAKED void EventGenerator::GetImageFromList(std::string &ret, EventGenerator *eventGenerator, const std::string &listName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// listName
		"push [ebp+12]\n\t"		// eventGenerator
		"push [ebp+8]\n\t"		// ret
	);
	__asm__("call %0\n\t" :: "m"(_func511::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func512
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventGenerator::GetSectorDescription", typeid(SectorDescription *(*)(SectorDescription *, EventGenerator *, const std::string &, int )), "5589e557565383ec5c8b45088b5d108d7dc4", argdata, 4, 2, &func);
}

FUNC_NAKED SectorDescription *EventGenerator::GetSectorDescription(SectorDescription *desc, EventGenerator *eventGenerator, const std::string &type, int level)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// level
		"push [ebp+16]\n\t"		// type
		"push [ebp+12]\n\t"		// eventGenerator
		"push [ebp+8]\n\t"		// desc
	);
	__asm__("call %0\n\t" :: "m"(_func512::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func513
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventSystem::AddEvent", typeid(void (EventSystem::*)(int )), "8b5424088b44240485d278??8b480c", argdata, 2, 6, &func);
}

FUNC_NAKED void EventSystem::AddEvent(int id)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// id
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func513::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func514
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventsParser::PullMinMax", typeid(RandomAmount *(EventsParser::*)(rapidxml::xml_node<char> *, const std::string &)), "5557565383ec4c8d5c243c8d7c2420895c24088d6c2430", argdata, 3, 2, &func);
}

FUNC_NAKED RandomAmount *EventsParser::PullMinMax(rapidxml::xml_node<char> *node, const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// name
		"push [ebp+12]\n\t"		// node
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func514::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func515
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventsParser::ProcessEvent", typeid(void (*)(std::string &, EventsParser *, rapidxml::xml_node<char> *, const std::string &)), "55ba????????89e557565381ec3c0100008b4510", argdata, 4, 6, &func);
}

FUNC_NAKED void EventsParser::ProcessEvent(std::string &strRef, EventsParser *eventsParser, rapidxml::xml_node<char> *node, const std::string &eventName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// eventName
		"push [ebp+16]\n\t"		// node
		"push [ebp+12]\n\t"		// eventsParser
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func515::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func516
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventsParser::ProcessShipEvent", typeid(void (*)(ShipTemplate &, EventsParser *, rapidxml::xml_node<char> *)), "5589e557565381ec5c0200008d8508feffff89442408", argdata, 3, 6, &func);
}

FUNC_NAKED void EventsParser::ProcessShipEvent(ShipTemplate &shipEvent, EventsParser *eventsParser, rapidxml::xml_node<char> *node)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// node
		"push [ebp+12]\n\t"		// eventsParser
		"push [ebp+8]\n\t"		// shipEvent
	);
	__asm__("call %0\n\t" :: "m"(_func516::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func517
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventsParser::ProcessModifyItem", typeid(ResourcesTemplate *(EventsParser::*)(ResourcesTemplate &, rapidxml::xml_node<char> *, const std::string &)), "5589e557565383ec5c8b45188d7de48b5d10", argdata, 4, 2, &func);
}

FUNC_NAKED ResourcesTemplate *EventsParser::ProcessModifyItem(ResourcesTemplate &resources, rapidxml::xml_node<char> *node, const std::string &unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk
		"push [ebp+16]\n\t"		// node
		"push [ebp+12]\n\t"		// resources
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func517::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func518
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("EventsParser::AddAllEvents", typeid(void (EventsParser::*)()), "5557565383ec3c8d5c241c8d6c241ac744240800000000", argdata, 1, 6, &func);
}

FUNC_NAKED void EventsParser::AddAllEvents()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func518::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func519
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventsParser::AddEvents", typeid(void (EventsParser::*)(EventGenerator &, char *, const std::string &)), "5589e557565381ecac0001008b45088b7510", argdata, 4, 6, &func);
}

FUNC_NAKED void EventsParser::AddEvents(EventGenerator &generator, char *file, const std::string &fileName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// fileName
		"push [ebp+16]\n\t"		// file
		"push [ebp+12]\n\t"		// generator
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func519::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func520
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("EventsParser::ProcessEventList", typeid(void (*)(std::vector<std::string> &, EventsParser *, rapidxml::xml_node<char> *, const std::string &)), "55ba????????89e557565383ec2c8b4508c70000000000c7400400000000c74008000000008b451083c018e8????????85c089c60f84????????8db6000000008b4514", argdata, 4, 6, &func);
}

FUNC_NAKED void EventsParser::ProcessEventList(std::vector<std::string> &vecRef, EventsParser *eventsParser, rapidxml::xml_node<char> *node, const std::string &listName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// listName
		"push [ebp+16]\n\t"		// node
		"push [ebp+12]\n\t"		// eventsParser
		"push [ebp+8]\n\t"		// vecRef
	);
	__asm__("call %0\n\t" :: "m"(_func520::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func521
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x2ff};
	static FunctionDefinition funcObj("ExplosionAnimation::OnInit", typeid(void (ExplosionAnimation::*)(rapidxml::xml_node<char> *, const std::string &, Point )), "5557565381ec6c0100008b84248c0100008bb424800100008bac2484010000", argdata, 4, 6, &func);
}

FUNC_NAKED void ExplosionAnimation::OnInit(rapidxml::xml_node<char> *node, const std::string &name, Point glowOffset)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// glowOffset
		"push [ebp+20]\n\t"		// glowOffset
		"push [ebp+16]\n\t"		// name
		"push [ebp+12]\n\t"		// node
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func521::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func522
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FTLButton::OnRender", typeid(void (FTLButton::*)()), "5589e557565381ec6c0100008b5d08c744240401000000", argdata, 1, 6, &func);
}

FUNC_NAKED void FTLButton::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func522::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func523
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FileHelper::deleteFile", typeid(void (*)(const std::string &)), "5383ec188b5c2420c7442404000000008b03890424e8????????85c074??", argdata, 1, 6, &func);
}

FUNC_NAKED void FileHelper::deleteFile(const std::string &fileName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// fileName
	);
	__asm__("call %0\n\t" :: "m"(_func523::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func524
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FileHelper::getResourceFile", typeid(std::string &(*)(const std::string &)), "565383ec248b5c24308d74241ce8????????", argdata, 1, 2, &func);
}

FUNC_NAKED std::string &FileHelper::getResourceFile(const std::string &str)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// str
	);
	__asm__("call %0\n\t" :: "m"(_func524::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func525
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FileHelper::getUserFolder", typeid(std::string &(*)(std::string &)), "5383ec288b5c2430e8????????", argdata, 1, 2, &func);
}

FUNC_NAKED std::string &FileHelper::getUserFolder(std::string &str)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// str
	);
	__asm__("call %0\n\t" :: "m"(_func525::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func526
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FileHelper::getSaveFile", typeid(std::string &(*)(std::string &)), "57565383ec208b5c24308d74241ce8????????", argdata, 1, 2, &func);
}

FUNC_NAKED std::string &FileHelper::getSaveFile(std::string &str)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// str
	);
	__asm__("call %0\n\t" :: "m"(_func526::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func527
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("FileHelper::initFileHelper", typeid(void (*)()), "565383ec34c605????????018d5c241f", argdata, 0, 6, &func);
}

FUNC_NAKED void FileHelper::initFileHelper()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func527::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func528
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FileHelper::fileExists", typeid(bool (*)(const std::string &)), "83ec1c8b442420c7442404000000008b00", argdata, 1, 2, &func);
}

FUNC_NAKED bool FileHelper::fileExists(const std::string &fileName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// fileName
	);
	__asm__("call %0\n\t" :: "m"(_func528::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func529
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("FileHelper::renameFile", typeid(void (*)(const std::string &, const std::string &)), "8b4424088b00894424088b442404", argdata, 2, 6, &func);
}

FUNC_NAKED void FileHelper::renameFile(const std::string &fileName, const std::string &newName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// newName
		"push [ebp+8]\n\t"		// fileName
	);
	__asm__("call %0\n\t" :: "m"(_func529::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func530
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FileHelper::createBinaryFile", typeid(int (*)(const std::string &)), "5383ec188b5c2420c7442404000000008b03890424e8????????85c075??", argdata, 1, 2, &func);
}

FUNC_NAKED int FileHelper::createBinaryFile(const std::string &fileName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// fileName
	);
	__asm__("call %0\n\t" :: "m"(_func530::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func531
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("FileHelper::saveFileExists", typeid(bool (*)()), ".5557565383ec3c8d442420894424088d442410", argdata, 0, 2, &func);
}

FUNC_NAKED bool FileHelper::saveFileExists()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func531::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func532
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("FileHelper::readSaveFile", typeid(int (*)()), ".5557565383ec3c8d442420894424088d442410", argdata, 0, 2, &func);
}

FUNC_NAKED int FileHelper::readSaveFile()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func532::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func533
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("FileHelper::readStatsFile", typeid(int (*)()), ".5557565383ec3c8d442420894424088d442410", argdata, 0, 2, &func);
}

FUNC_NAKED int FileHelper::readStatsFile()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func533::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func534
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("FileHelper::createSaveFile", typeid(int (*)()), ".a1????????a3????????b8????????", argdata, 0, 2, &func);
}

FUNC_NAKED int FileHelper::createSaveFile()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func534::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func535
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("FileHelper::createStatsFile", typeid(int (*)()), ".a1????????a3????????b8????????", argdata, 0, 2, &func);
}

FUNC_NAKED int FileHelper::createStatsFile()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func535::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func536
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("FileHelper::deleteSaveFile", typeid(void (*)()), "5383ec18c70424????????e8????????89c3", argdata, 0, 6, &func);
}

FUNC_NAKED void FileHelper::deleteSaveFile()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func536::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func537
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("FileHelper::deleteAllSaveFiles", typeid(void (*)()), "5557565383ec2ce8????????8d74241c8d7c241b", argdata, 0, 6, &func);
}

FUNC_NAKED void FileHelper::deleteAllSaveFiles()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func537::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func538
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FileHelper::getPosition", typeid(int (*)(int )), ".a1????????c3", argdata, 1, 2, &func);
}

FUNC_NAKED int FileHelper::getPosition(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// file
	);
	__asm__("call %0\n\t" :: "m"(_func538::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func539
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FileHelper::readBinaryFile", typeid(int (*)(const std::string &)), "5383ec188b442420c744240400000000", argdata, 1, 2, &func);
}

FUNC_NAKED int FileHelper::readBinaryFile(const std::string &fileName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// fileName
	);
	__asm__("call %0\n\t" :: "m"(_func539::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func540
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("FileHelper::writeFloat", typeid(bool (*)(int , float )), "5557565383ec2cf30f1005????????", argdata, 2, 2, &func);
}

FUNC_NAKED bool FileHelper::writeFloat(int file, float data)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// data
		"push [ebp+8]\n\t"		// file
	);
	__asm__("call %0\n\t" :: "m"(_func540::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func541
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("FileHelper::writeInt", typeid(bool (*)(int , int )), "5557565383ec2c8b542444803d????????00", argdata, 2, 2, &func);
}

FUNC_NAKED bool FileHelper::writeInt(int file, int data)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// data
		"push [ebp+8]\n\t"		// file
	);
	__asm__("call %0\n\t" :: "m"(_func541::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func542
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("FileHelper::writeData", typeid(bool (*)(int , void *, int )), "5557565383ec2c8b4424408b5c24483dfffeff7f", argdata, 3, 2, &func);
}

FUNC_NAKED bool FileHelper::writeData(int file, void *data, int len)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// len
		"push [ebp+12]\n\t"		// data
		"push [ebp+8]\n\t"		// file
	);
	__asm__("call %0\n\t" :: "m"(_func542::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func543
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("FileHelper::writeString", typeid(bool (*)(int , const std::string &)), "5557565383ec3c8b4424548b7424508b38", argdata, 2, 2, &func);
}

FUNC_NAKED bool FileHelper::writeString(int file, const std::string &data)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// data
		"push [ebp+8]\n\t"		// file
	);
	__asm__("call %0\n\t" :: "m"(_func543::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func544
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FileHelper::closeBinaryFile", typeid(void (*)(int )), "5383ec188b4424203dfffeff7f", argdata, 1, 6, &func);
}

FUNC_NAKED void FileHelper::closeBinaryFile(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// file
	);
	__asm__("call %0\n\t" :: "m"(_func544::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func545
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("FileHelper::readString", typeid(std::string &(*)(const std::string &, int )), "5557565383ec3c8b5c24548d6c2420", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &FileHelper::readString(const std::string &str, int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// str
	);
	__asm__("call %0\n\t" :: "m"(_func545::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func546
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FileHelper::readFloat", typeid(float (*)(int )), ".5557565383ec3c8b5c24508d7c242081fbfffeff7f", argdata, 1, 2, &func);
}

FUNC_NAKED float FileHelper::readFloat(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// file
	);
	__asm__("call %0\n\t" :: "m"(_func546::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func547
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("FileHelper::readInteger", typeid(int (*)(int )), ".5557565383ec3c8b5c24508d7c242081fbfffeff7f", argdata, 1, 2, &func);
}

FUNC_NAKED int FileHelper::readInteger(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// file
	);
	__asm__("call %0\n\t" :: "m"(_func547::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func548
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("FileHelper::seekPosition", typeid(bool (*)(int , int )), "83ec1c8b442424c74424080000000089442404a3????????", argdata, 2, 2, &func);
}

FUNC_NAKED bool FileHelper::seekPosition(int file, int pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// file
	);
	__asm__("call %0\n\t" :: "m"(_func548::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func549
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("FileHelper::readBuffer", typeid(char *(*)(int , int , bool )), "5557565383ec2c8b6c24488b5c24448b742440", argdata, 3, 2, &func);
}

FUNC_NAKED char *FileHelper::readBuffer(int file, int len, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// len
		"push [ebp+8]\n\t"		// file
	);
	__asm__("call %0\n\t" :: "m"(_func549::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func550
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("FileHelper::readData", typeid(void (*)(int , void *, int )), "5557565383ec1c8b5c24308b7c24348b74243881fb????????", argdata, 3, 6, &func);
}

FUNC_NAKED void FileHelper::readData(int file, void *data, int len)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// len
		"push [ebp+12]\n\t"		// data
		"push [ebp+8]\n\t"		// file
	);
	__asm__("call %0\n\t" :: "m"(_func550::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func551
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Fire::OnLoop", typeid(void (Fire::*)()), "565383ec148b5c242080bb5c01000000", argdata, 1, 6, &func);
}

FUNC_NAKED void Fire::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func551::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func552
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Fire::UpdateDeathTimer", typeid(void (Fire::*)(int )), ".565383ec148b5c24208b7424248b03891c24ff502884c0", argdata, 2, 6, &func);
}

FUNC_NAKED void Fire::UpdateDeathTimer(int connectedFires)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// connectedFires
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func552::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func553
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Fire::UpdateStartTimer", typeid(void (Fire::*)(int )), ".565383ec148b5c24208b7424248b03891c24ff502884c0", argdata, 2, 6, &func);
}

FUNC_NAKED void Fire::UpdateStartTimer(int doorLevel)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// doorLevel
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func553::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func554
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("FocusWindow::MouseClick", typeid(void (FocusWindow::*)(int , int )), "8b44240480781000", argdata, 3, 6, &func);
}

FUNC_NAKED void FocusWindow::MouseClick(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func554::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func555
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("GameOver::OpenText", typeid(void (GameOver::*)(const std::string &)), "5589e557565381ec2c0100008b7d088b450cc6470401", argdata, 2, 6, &func);
}

FUNC_NAKED void GameOver::OpenText(const std::string &text)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// text
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func555::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func556
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("GameOver::OnRender", typeid(void (GameOver::*)()), "5589e557565381ec3c0100008b5d0880bb9000000000", argdata, 1, 6, &func);
}

FUNC_NAKED void GameOver::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func556::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func557
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("GameOver::OnLoop", typeid(void (GameOver::*)()), "5557565383ec4cc70424????????8b742460e8????????", argdata, 1, 6, &func);
}

FUNC_NAKED void GameOver::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func557::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func558
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("GenericButton::SetLocation", typeid(void (GenericButton::*)(Point )), "5756538b4424108b5424148b4c24188b58048b700839da", argdata, 2, 6, &func);
}

FUNC_NAKED void GenericButton::SetLocation(Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func558::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func559
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("GenericButton::SetActive", typeid(void (GenericButton::*)(bool )), "8b5424088b44240484d2885040", argdata, 2, 6, &func);
}

FUNC_NAKED void GenericButton::SetActive(bool active)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// active
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func559::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func560
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("GenericButton::MouseMove", typeid(void (GenericButton::*)(int , int , bool )), "5756538b4424108b5424148b5c24188b74241c", argdata, 4, 6, &func);
}

FUNC_NAKED void GenericButton::MouseMove(int x, int y, bool silent)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// silent
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func560::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func561
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("GenericButton::__DO_NOT_HOOK", typeid(void (*)()), "f3c36690669066906690669066906690", argdata, 0, 4, &func);
}

FUNC_NAKED void GenericButton::__DO_NOT_HOOK()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func561::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func562
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("GenericButton::OnClick", typeid(void (GenericButton::*)()), ".f3c36690669066906690669066906690", argdata, 1, 6, &func);
}

FUNC_NAKED void GenericButton::OnClick()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func562::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func563
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("GenericButton::OnRightClick", typeid(void (GenericButton::*)()), ".f3c36690669066906690669066906690", argdata, 1, 6, &func);
}

FUNC_NAKED void GenericButton::OnRightClick()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func563::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func564
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("GenericButton::ResetPrimitives", typeid(void (GenericButton::*)()), ".f3c36690669066906690669066906690", argdata, 1, 6, &func);
}

FUNC_NAKED void GenericButton::ResetPrimitives()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func564::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func565
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("font_text_width", typeid(float (*)(freetype::font_data &, const char *, float )), "5557565383ec4c8b4c24608b6c246485c9", argdata, 3, 2, &func);
}

FUNC_NAKED float __stdcall font_text_width(freetype::font_data &fontData, const char *str, float size)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// size
		"push [ebp+12]\n\t"		// str
		"push [ebp+8]\n\t"		// fontData
	);
	__asm__("call %0\n\t" :: "m"(_func565::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func566
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("random32", typeid(int (*)()), "6905????????????????690d????????????????01c1b82d7f954cf725????????01ca83c00183d200a3????????89d08915????????d1e8", argdata, 0, 0, &func);
}

FUNC_NAKED int __stdcall random32()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func566::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func567
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("srandom32", typeid(void (*)(unsigned int )), "8b442404c705????????00000000a3????????", argdata, 1, 6, &func);
}

FUNC_NAKED void __stdcall srandom32(unsigned int seed)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// seed
	);
	__asm__("call %0\n\t" :: "m"(_func567::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func568
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("getSkillBonus", typeid(float (*)(int , int )), "83ec048b5424088b44240c83fa05", argdata, 2, 2, &func);
}

FUNC_NAKED float __stdcall getSkillBonus(int skill, int level)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// level
		"push [ebp+8]\n\t"		// skill
	);
	__asm__("call %0\n\t" :: "m"(_func568::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func569
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("GenerateReward", typeid(void (*)(ResourceEvent &, RewardDesc &, int )), "5589e557565381ec4c0100008b450c8b400483f8ff", argdata, 3, 6, &func);
}

FUNC_NAKED void __stdcall GenerateReward(ResourceEvent &ref, RewardDesc &reward, int worldLevel)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// worldLevel
		"push [ebp+12]\n\t"		// reward
		"push [ebp+8]\n\t"		// ref
	);
	__asm__("call %0\n\t" :: "m"(_func569::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func570
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("GetValue", typeid(void (*)(ResourceEvent &, const std::string &, int , int )), "57565383ec108b5c2424c7442404????????", argdata, 4, 6, &func);
}

FUNC_NAKED void __stdcall GetValue(ResourceEvent &ref, const std::string &type, int level, int worldLevel)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// worldLevel
		"push [ebp+16]\n\t"		// level
		"push [ebp+12]\n\t"		// type
		"push [ebp+8]\n\t"		// ref
	);
	__asm__("call %0\n\t" :: "m"(_func570::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func571
{
	static void *func = 0;
	static short argdata[] = {0x2ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("Globals::AimAhead", typeid(float (*)(Pointf , Pointf , float )), "83ec1cf30f10642424f30f10442428f30f106c242c0f28f4", argdata, 3, 2, &func);
}

FUNC_NAKED float Globals::AimAhead(Pointf delta, Pointf vr, float muzzleV)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// muzzleV
		"push [ebp+20]\n\t"		// vr
		"push [ebp+16]\n\t"		// vr
		"push [ebp+12]\n\t"		// delta
		"push [ebp+8]\n\t"		// delta
	);
	__asm__("call %0\n\t" :: "m"(_func571::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func572
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Globals::GetNextSpaceId", typeid(int (*)()), "8b15????????b8650000008d4a0185d20f45c1", argdata, 0, 0, &func);
}

FUNC_NAKED int Globals::GetNextSpaceId()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func572::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func573
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("HackBox::constructor", typeid(void (HackBox::*)(Point , HackingSystem *, ShipManager *)), "5557565381ec9c0000008b9c24b00000008dbc2480000000", argdata, 4, 6, &func);
}

FUNC_NAKED void HackBox::constructor(Point pos, HackingSystem *sys, ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// ship
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func573::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func574
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("HackingDrone::OnLoop", typeid(void (HackingDrone::*)()), "5589e55756be050000005383ec7c8b5d08891c24", argdata, 1, 6, &func);
}

FUNC_NAKED void HackingDrone::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func574::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func575
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("HackingSystem::BlowHackingDrone", typeid(void (HackingSystem::*)()), "83ec1c8b44242080b8b001000000", argdata, 1, 6, &func);
}

FUNC_NAKED void HackingSystem::BlowHackingDrone()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func575::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func576
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("HackingSystem::OnLoop", typeid(void (HackingSystem::*)()), "57565383ec308b5c2440891c24e8????????80bbbc01000000", argdata, 1, 6, &func);
}

FUNC_NAKED void HackingSystem::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func576::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func577
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("InfoBox::OnRender", typeid(void (InfoBox::*)()), "5589e557565381ecbc0100008b7d088b078b7764", argdata, 1, 6, &func);
}

FUNC_NAKED void InfoBox::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func577::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func578
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("InfoBox::Clear", typeid(int (InfoBox::*)()), "57565383ec208b5c24308d7424188d7c2417", argdata, 1, 2, &func);
}

FUNC_NAKED int InfoBox::Clear()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func578::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func579
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("InfoBox::SetDescription", typeid(int (InfoBox::*)(Description *, int , int , InfoBox::ExpandDir )), "5557565383ec2c8b5c24408b7424448b7c24488b6c244c", argdata, 5, 2, &func);
}

FUNC_NAKED int InfoBox::SetDescription(Description *desc, int width, int height, InfoBox::ExpandDir dir)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// dir
		"push [ebp+20]\n\t"		// height
		"push [ebp+16]\n\t"		// width
		"push [ebp+12]\n\t"		// desc
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func579::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func580
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("InfoBox::SetText", typeid(void (InfoBox::*)(const std::string &, const std::string &, int , int , InfoBox::ExpandDir )), "5557565383ec7c8d7c24378b9c24900000008d7424388bac24a0000000", argdata, 6, 6, &func);
}

FUNC_NAKED void InfoBox::SetText(const std::string &title, const std::string &text, int width, int height, InfoBox::ExpandDir dir)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// dir
		"push [ebp+24]\n\t"		// height
		"push [ebp+20]\n\t"		// width
		"push [ebp+16]\n\t"		// text
		"push [ebp+12]\n\t"		// title
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func580::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func581
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("InfoBox::SetBlueprintWeapon", typeid(void (InfoBox::*)(const WeaponBlueprint *, int , bool , int )), "5589e557565383ec4c8b7d0c8d75d8", argdata, 5, 6, &func);
}

FUNC_NAKED void InfoBox::SetBlueprintWeapon(const WeaponBlueprint *bp, int status, bool hasWeaponSystem, int yShift)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// yShift
		"push [ebp+20]\n\t"		// hasWeaponSystem
		"push [ebp+16]\n\t"		// status
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func581::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func582
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("InfoBox::SetBlueprintDrone", typeid(void (InfoBox::*)(const DroneBlueprint *, int , bool , int )), "5589e557565381ec3c0100008b45148b7508", argdata, 5, 6, &func);
}

FUNC_NAKED void InfoBox::SetBlueprintDrone(const DroneBlueprint *bp, int status, bool hasDroneSystem, int yShift)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// yShift
		"push [ebp+20]\n\t"		// hasDroneSystem
		"push [ebp+16]\n\t"		// status
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func582::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func583
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("InfoBox::SetBlueprint", typeid(void (InfoBox::*)(const ItemBlueprint *)), ".57565383ec208b7424348b5c24308d4608894424048d430c890424", argdata, 2, 6, &func);
}

FUNC_NAKED void InfoBox::SetBlueprint(const ItemBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func583::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func584
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("InfoBox::SetBlueprintCrew", typeid(void (InfoBox::*)(const CrewBlueprint *, int , bool )), "5589e557565381ec8c0000008b45148b4d088945808b4508", argdata, 4, 6, &func);
}

FUNC_NAKED void InfoBox::SetBlueprintCrew(const CrewBlueprint *bp, int yShift, bool detailedCrew)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// detailedCrew
		"push [ebp+16]\n\t"		// yShift
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func584::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func585
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("InfoBox::SetBlueprintAugment", typeid(void (InfoBox::*)(const AugmentBlueprint *)), ".57565383ec208b7424348b5c24308d4608894424048d430c890424", argdata, 2, 6, &func);
}

FUNC_NAKED void InfoBox::SetBlueprintAugment(const AugmentBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func585::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func586
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("InfoBox::IsEmpty", typeid(bool (InfoBox::*)()), "5589e557565383ec3c8b5d08837b50ff", argdata, 1, 2, &func);
}

FUNC_NAKED bool InfoBox::IsEmpty()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func586::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func587
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("InfoBox::CalcBoxHeight", typeid(int (InfoBox::*)()), "5589e557565383ec6c8b7d08837f4801", argdata, 1, 2, &func);
}

FUNC_NAKED int InfoBox::CalcBoxHeight()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func587::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func588
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("InfoBox::constructor", typeid(void (InfoBox::*)()), "565383ec248b5c24308d74241fc744240800000000c744240400000000", argdata, 1, 6, &func);
}

FUNC_NAKED void InfoBox::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func588::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func589
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("InfoBox::SetSystemId", typeid(void (InfoBox::*)(int , int , int , int , int , int )), "5589e557565383ec3c8b5d088b45188b7d0c", argdata, 7, 6, &func);
}

FUNC_NAKED void InfoBox::SetSystemId(int systemId, int maxPower, int currentLevel, int upgrade, int yShift, int forceSystemWidth)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+32]\n\t"		// forceSystemWidth
		"push [ebp+28]\n\t"		// yShift
		"push [ebp+24]\n\t"		// upgrade
		"push [ebp+20]\n\t"		// currentLevel
		"push [ebp+16]\n\t"		// maxPower
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func589::func));
	__asm__
	(
		"add esp, 28\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 28\n\t"
	);
}

namespace _func590
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("InfoBox::SetSystem", typeid(void (InfoBox::*)(ShipSystem *, int , int , int )), "5557565383ec3c8b7424548b5c245085f6", argdata, 5, 6, &func);
}

FUNC_NAKED void InfoBox::SetSystem(ShipSystem *system, int upgrade, int yShift, int forceSystemWidth)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// forceSystemWidth
		"push [ebp+20]\n\t"		// yShift
		"push [ebp+16]\n\t"		// upgrade
		"push [ebp+12]\n\t"		// system
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func590::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func591
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("InputBox::TextEvent", typeid(void (InputBox::*)(CEvent::TextEvent )), "5557565383ec2c8b4424448b5c244083f801", argdata, 2, 6, &func);
}

FUNC_NAKED void InputBox::TextEvent(CEvent::TextEvent event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// event
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func591::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func592
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("InputBox::StartInput", typeid(void (InputBox::*)()), "565383ec348b5c2440c744240800000000", argdata, 1, 6, &func);
}

FUNC_NAKED void InputBox::StartInput()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func592::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func593
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("IonDrone::GetRoomDamage", typeid(Damage *(*)(Damage *, IonDrone *)), "565383ec148b7424248b5c24208b869c000000", argdata, 2, 2, &func);
}

FUNC_NAKED Damage *IonDrone::GetRoomDamage(Damage *dmg, IonDrone *crew)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// dmg
	);
	__asm__("call %0\n\t" :: "m"(_func593::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func594
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ItemStoreBox::constructor", typeid(void (ItemStoreBox::*)(ShipManager *, const std::string &)), "5557565383ec3c8b7c24588d7424208b5c2450", argdata, 3, 6, &func);
}

FUNC_NAKED void ItemStoreBox::constructor(ShipManager *ship, const std::string &resourceName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// resourceName
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func594::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func595
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("LaserBlast::OnUpdate", typeid(void (LaserBlast::*)()), "5589e55383ec448b5d0880bbb00000000074??8d8310010000", argdata, 1, 6, &func);
}

FUNC_NAKED void LaserBlast::OnUpdate()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func595::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func596
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("LaserBlast::OnInit", typeid(void (LaserBlast::*)()), "5383ec188b5c24208b4374394370c7433801000000", argdata, 1, 6, &func);
}

FUNC_NAKED void LaserBlast::OnInit()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func596::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

void **VTable_LaserBlast;

namespace _var597
{
	static VariableDefinition varObj("VTable_LaserBlast", "!e8????????8b8d3cfffffff30f108538ffffff8b4174394170c701(???????\?)c74104(???????\?)", &VTable_LaserBlast);
}

void **VTable_Targetable_LaserBlast;

namespace _var598
{
	static VariableDefinition varObj("VTable_Targetable_LaserBlast", "", &VTable_Targetable_LaserBlast);
}

namespace _func599
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("LocationEvent::ClearEvent", typeid(void (LocationEvent::*)(bool )), "5557565383ec4c8b7424608b442464", argdata, 2, 6, &func);
}

FUNC_NAKED void LocationEvent::ClearEvent(bool force)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// force
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func599::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func600
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("LockdownShard::Update", typeid(void (LockdownShard::*)()), "5589e55383ec348b5d08c70424????????", argdata, 1, 6, &func);
}

FUNC_NAKED void LockdownShard::Update()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func600::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func601
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("MainMenu::OnRender", typeid(void (MainMenu::*)()), "5589e557565381ecdc0200008b7d08????????????00", argdata, 1, 6, &func);
}

FUNC_NAKED void MainMenu::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func601::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func602
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("MainMenu::Open", typeid(void (MainMenu::*)()), ".5589e557565381ec", argdata, 1, 6, &func);
}

FUNC_NAKED void MainMenu::Open()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func602::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func603
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("MainMenu::MouseMove", typeid(void (MainMenu::*)(int , int )), "5589e557565383ec2c8b7d088b7510", argdata, 3, 6, &func);
}

FUNC_NAKED void MainMenu::MouseMove(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func603::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func604
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("MainMenu::OnLoop", typeid(void (MainMenu::*)()), ".5589e557565381ec", argdata, 1, 6, &func);
}

FUNC_NAKED void MainMenu::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func604::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func605
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("MainMenu::MouseClick", typeid(void (MainMenu::*)(int , int )), ".5589e557565383ec3c8b5d08????????????00", argdata, 3, 6, &func);
}

FUNC_NAKED void MainMenu::MouseClick(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func605::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func606
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("MainMenu::constructor", typeid(void (MainMenu::*)()), "5557565383ec3c8b5c24508d7424208d432c", argdata, 1, 6, &func);
}

FUNC_NAKED void MainMenu::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func606::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func607
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("MantisAnimation::__DO_NOT_HOOK", typeid(void (*)()), "565383ec148b7424208b5c2424893424895c2404e8????????f30f108640050000", argdata, 0, 4, &func);
}

FUNC_NAKED void MantisAnimation::__DO_NOT_HOOK()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func607::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func608
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("MantisAnimation::GetShootingSound", typeid(std::string &(*)(std::string &, MantisAnimation *)), ".5557565381ec0c010000803d????????00", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &MantisAnimation::GetShootingSound(std::string &strRef, MantisAnimation *anim)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// anim
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func608::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func609
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("MantisAnimation::__DO_NOT_HOOK2", typeid(void (*)()), "8b44240431d280b8d108000000", argdata, 0, 4, &func);
}

FUNC_NAKED void MantisAnimation::__DO_NOT_HOOK2()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func609::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func610
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("MantisAnimation::GetDeathSound", typeid(std::string &(*)(std::string &, MantisAnimation *)), ".5383ec288b5c24308d44241f89442408", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &MantisAnimation::GetDeathSound(std::string &strRef, MantisAnimation *anim)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// anim
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func610::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func611
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("MantisAnimation::__DO_NOT_HOOK3", typeid(void (*)()), "31c080bb9f0900000075??c6839f0900000183c418b8010000005b", argdata, 0, 4, &func);
}

FUNC_NAKED void MantisAnimation::__DO_NOT_HOOK3()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func611::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func612
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("MantisAnimation::FireShot", typeid(bool (MantisAnimation::*)()), ".5383ec188b5c2420c7442404000080bf", argdata, 1, 2, &func);
}

FUNC_NAKED bool MantisAnimation::FireShot()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func612::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func613
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("MenuScreen::OnRender", typeid(void (MenuScreen::*)()), "5589e557565381ecbc0000008b5d0880bb5c02000000", argdata, 1, 6, &func);
}

FUNC_NAKED void MenuScreen::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func613::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func614
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("MenuScreen::constructor", typeid(void (MenuScreen::*)()), "5557565381ec0c0100008b9c24200100008db424a8000000", argdata, 1, 6, &func);
}

FUNC_NAKED void MenuScreen::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func614::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func615
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("MindBox::constructor", typeid(void (MindBox::*)(Point , MindSystem *)), "5557565383ec7c8b9c24900000008d7c243c", argdata, 3, 6, &func);
}

FUNC_NAKED void MindBox::constructor(Point pos, MindSystem *sys)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func615::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func616
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("MindSystem::SetArmed", typeid(void (MindSystem::*)(int )), "5383ec18837c2424018b5c2420", argdata, 2, 6, &func);
}

FUNC_NAKED void MindSystem::SetArmed(int armed)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// armed
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func616::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func617
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("Missile::constructor", typeid(void (Missile::*)(Pointf , int , int , Pointf , float )), "5589e557565381ecdc0000008b451c8b55208b4d088b75148b5d18", argdata, 6, 6, &func);
}

FUNC_NAKED void Missile::constructor(Pointf _position, int _ownerId, int _targetId, Pointf _target, float _heading)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+36]\n\t"		// _heading
		"push [ebp+32]\n\t"		// _target
		"push [ebp+28]\n\t"		// _target
		"push [ebp+24]\n\t"		// _targetId
		"push [ebp+20]\n\t"		// _ownerId
		"push [ebp+16]\n\t"		// _position
		"push [ebp+12]\n\t"		// _position
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func617::func));
	__asm__
	(
		"add esp, 32\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 32\n\t"
	);
}

namespace _func618
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("MouseControl::SetTooltip", typeid(std::string &(MouseControl::*)(const std::string &)), "57565383ec108b7c24248b7424208b07", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &MouseControl::SetTooltip(const std::string &tooltip)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// tooltip
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func618::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func619
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("MouseControl::MeasureTooltip", typeid(Point (MouseControl::*)(int )), "5589e557565383ec5c8b7d0c8d45d8890424c744240800000000", argdata, 3, 2, &func);
}

FUNC_NAKED Point MouseControl::MeasureTooltip(int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// implicit_output
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func619::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func620
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("MouseControl::QueueStaticTooltip", typeid(void (MouseControl::*)(Point )), "8b4c24048b4424088b54240c8981e8000000", argdata, 2, 6, &func);
}

FUNC_NAKED void MouseControl::QueueStaticTooltip(Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func620::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func621
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("MouseControl::OnLoop", typeid(void (MouseControl::*)()), "5383ec188b5c242080bbc800000000", argdata, 1, 6, &func);
}

FUNC_NAKED void MouseControl::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func621::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func622
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("MouseControl::InstantTooltip", typeid(void (MouseControl::*)()), "8b442404c680d400000001", argdata, 1, 6, &func);
}

FUNC_NAKED void MouseControl::InstantTooltip()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func622::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func623
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("MouseControl::OnRender", typeid(void (MouseControl::*)()), "5557565381ec3c0100008b9c245001000080bbc900000000", argdata, 1, 6, &func);
}

FUNC_NAKED void MouseControl::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func623::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func624
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("MouseControl::SetDoor", typeid(void (MouseControl::*)(int )), "565383ec148b5c24248b74242083fb01", argdata, 2, 6, &func);
}

FUNC_NAKED void MouseControl::SetDoor(int state)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// state
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func624::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func625
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("OptionsScreen::OnInit", typeid(void (OptionsScreen::*)()), "5557565383ec6c8b9c2480000000????????c70424", argdata, 1, 6, &func);
}

FUNC_NAKED void OptionsScreen::OnInit()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func625::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func626
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("OptionsScreen::DO_NOT_HOOK1", typeid(void (OptionsScreen::*)()), "5589e557565331db83ec4c", argdata, 0, 4, &func);
}

FUNC_NAKED void OptionsScreen::DO_NOT_HOOK1()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func626::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func627
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("OptionsScreen::DO_NOT_HOOK2", typeid(void (OptionsScreen::*)()), ".5589e557565331db83ec4c", argdata, 0, 4, &func);
}

FUNC_NAKED void OptionsScreen::DO_NOT_HOOK2()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func627::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func628
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("OptionsScreen::OnLoop", typeid(void (OptionsScreen::*)()), ".5589e557565331db83ec4c", argdata, 1, 6, &func);
}

FUNC_NAKED void OptionsScreen::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func628::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func629
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("OxygenSystem::UpdateBreach", typeid(void (OxygenSystem::*)(int , int , bool )), "538b4424108b5c241485c0", argdata, 4, 6, &func);
}

FUNC_NAKED void OxygenSystem::UpdateBreach(int roomId, int hasBreach, bool unk3)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk3
		"push [ebp+16]\n\t"		// hasBreach
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func629::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func630
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("OxygenSystem::UpdateAirlock", typeid(void (OxygenSystem::*)(int , int )), "5557565383ec2c8b5c24488b7424408b7c244485db", argdata, 3, 6, &func);
}

FUNC_NAKED void OxygenSystem::UpdateAirlock(int roomId, int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func630::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func631
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("OxygenSystem::EmptyOxygen", typeid(void (OxygenSystem::*)(int )), "8b4424048b5424088b809c010000c7049000000000", argdata, 2, 6, &func);
}

FUNC_NAKED void OxygenSystem::EmptyOxygen(int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func631::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func632
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("OxygenSystem::ModifyRoomOxygen", typeid(void (OxygenSystem::*)(int , float )), "8b4424048b5424088b809c0100008d0490", argdata, 3, 6, &func);
}

FUNC_NAKED void OxygenSystem::ModifyRoomOxygen(int roomId, float value)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// value
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func632::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func633
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("OxygenSystem::ComputeAirLoss", typeid(void (OxygenSystem::*)(int , float , bool )), "5589e557565383ec3c0fb645148b7508", argdata, 4, 6, &func);
}

FUNC_NAKED void OxygenSystem::ComputeAirLoss(int roomId, float value, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk
		"push [ebp+16]\n\t"		// value
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func633::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func634
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("OxygenSystem::GetRefillSpeed", typeid(float (OxygenSystem::*)()), "5383ec188b5c242080bb84010000008b8380010000", argdata, 1, 2, &func);
}

FUNC_NAKED float OxygenSystem::GetRefillSpeed()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func634::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func635
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("OxygenSystem::constructor", typeid(void (OxygenSystem::*)(int , int , int , int )), "5557565383ec2c8b4424508b5c24408b742444", argdata, 5, 6, &func);
}

FUNC_NAKED void OxygenSystem::constructor(int numRooms, int roomId, int shipId, int startingPower)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// startingPower
		"push [ebp+20]\n\t"		// shipId
		"push [ebp+16]\n\t"		// roomId
		"push [ebp+12]\n\t"		// numRooms
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func635::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func636
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("Point::RelativeDistance", typeid(int (Point::*)(Point )), "8b4424048b108b40042b5424082b44240c", argdata, 2, 2, &func);
}

FUNC_NAKED int Point::RelativeDistance(Point other)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// other
		"push [ebp+12]\n\t"		// other
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func636::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func637
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("Point::Distance", typeid(int (Point::*)(Point )), "83ec1c8b4424208b108b40042b5424242b442428", argdata, 2, 2, &func);
}

FUNC_NAKED int Point::Distance(Point other)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// other
		"push [ebp+12]\n\t"		// other
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func637::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func638
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Pointf::constructor", typeid(void (Pointf::*)(float , float )), "8b442404f30f10442408f30f1100f30f1044240c", argdata, 3, 6, &func);
}

FUNC_NAKED void Pointf::constructor(float x, float y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func638::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func639
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("Pointf::RelativeDistance", typeid(float (Pointf::*)(Pointf )), "83ec048b442408f30f1000f30f104804f30f5c44240cf30f5c4c2410", argdata, 2, 2, &func);
}

FUNC_NAKED float Pointf::RelativeDistance(Pointf other)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// other
		"push [ebp+12]\n\t"		// other
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func639::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func640
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("PowerManager::GetPowerManager", typeid(PowerManager *(*)(int )), "565383ec448b15????????8b1d????????8b742450", argdata, 1, 2, &func);
}

FUNC_NAKED PowerManager *PowerManager::GetPowerManager(int iShipId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// iShipId
	);
	__asm__("call %0\n\t" :: "m"(_func640::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func641
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Projectile::CollisionCheck", typeid(void (Projectile::*)(Collideable *)), "5589e557565381ec8c0000008b750c8b5d088b06", argdata, 2, 6, &func);
}

FUNC_NAKED void Projectile::CollisionCheck(Collideable *other)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// other
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func641::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func642
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff, 0x2ff};
	static FunctionDefinition funcObj("Projectile::constructor", typeid(void (Projectile::*)(Pointf , int , int , Pointf )), "5589e557565381ecec0000008b7d088b450c", argdata, 5, 6, &func);
}

FUNC_NAKED void Projectile::constructor(Pointf position, int ownerId, int targetId, Pointf target)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+32]\n\t"		// target
		"push [ebp+28]\n\t"		// target
		"push [ebp+24]\n\t"		// targetId
		"push [ebp+20]\n\t"		// ownerId
		"push [ebp+16]\n\t"		// position
		"push [ebp+12]\n\t"		// position
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func642::func));
	__asm__
	(
		"add esp, 28\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 28\n\t"
	);
}

namespace _func643
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Projectile::destructor", typeid(void (Projectile::*)()), ".5557565383ec2c8b442440c700????????c74004????????c780c0010000????????8b80b4010000", argdata, 1, 6, &func);
}

FUNC_NAKED void Projectile::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func643::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func644
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Projectile::Initialize", typeid(void (Projectile::*)(WeaponBlueprint &)), "5589e557565381ecdc0000008b450cc78538ffffff00000000", argdata, 2, 6, &func);
}

FUNC_NAKED void Projectile::Initialize(WeaponBlueprint &bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func644::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func645
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::constructor", typeid(void (ProjectileFactory::*)(const WeaponBlueprint *, int )), "5589e557565381ecdc0000008b4d088b4510", argdata, 3, 6, &func);
}

FUNC_NAKED void ProjectileFactory::constructor(const WeaponBlueprint *bp, int shipId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// shipId
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func645::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func646
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::SelectChargeGoal", typeid(int (ProjectileFactory::*)()), ".5383ec08803d????????008b5c2410", argdata, 1, 2, &func);
}

FUNC_NAKED int ProjectileFactory::SelectChargeGoal()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func646::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func647
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::IsChargedGoal", typeid(bool (ProjectileFactory::*)()), "8b4424048b501c8b92fc00000085d2", argdata, 1, 2, &func);
}

FUNC_NAKED bool ProjectileFactory::IsChargedGoal()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func647::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func648
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::SetHacked", typeid(void (ProjectileFactory::*)(int )), "8b4424048b54240805f80000008990bc03000089442404", argdata, 2, 6, &func);
}

FUNC_NAKED void ProjectileFactory::SetHacked(int hacked)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// hacked
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func648::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func649
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::SetCurrentShip", typeid(void (ProjectileFactory::*)(Targetable *)), "8b4424048b5424083990f0000000", argdata, 2, 6, &func);
}

FUNC_NAKED void ProjectileFactory::SetCurrentShip(Targetable *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func649::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func650
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::SetCooldownModifier", typeid(void (ProjectileFactory::*)(float )), "8b442404f30f104c2408f30f105018f30f104008f30f11889c040000", argdata, 2, 6, &func);
}

FUNC_NAKED void ProjectileFactory::SetCooldownModifier(float mod)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// mod
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func650::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func651
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::ForceCoolup", typeid(void (ProjectileFactory::*)()), "5383ec188b5c242080bbba00000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ProjectileFactory::ForceCoolup()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func651::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func652
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::RenderChargeBar", typeid(void (ProjectileFactory::*)(float )), "8b44240405f800000089442404", argdata, 2, 6, &func);
}

FUNC_NAKED void ProjectileFactory::RenderChargeBar(float unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func652::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func653
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::StringToWeapon", typeid(int (*)(const std::string &)), ".5383ec188b5c2420c7442404????????891c24", argdata, 1, 2, &func);
}

FUNC_NAKED int ProjectileFactory::StringToWeapon(const std::string &str)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// str
	);
	__asm__("call %0\n\t" :: "m"(_func653::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func654
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::Fire", typeid(void (ProjectileFactory::*)(std::vector<Pointf> &, int )), "57565383ec108b7424208b7c24248b86c40000002b86c0000000", argdata, 3, 6, &func);
}

FUNC_NAKED void ProjectileFactory::Fire(std::vector<Pointf> &points, int target)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// target
		"push [ebp+12]\n\t"		// points
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func654::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func655
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::FireNextShot", typeid(char (ProjectileFactory::*)()), "538b54240831c08b8ab004000085c9", argdata, 1, 2, &func);
}

FUNC_NAKED char ProjectileFactory::FireNextShot()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func655::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func656
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::SpendMissiles", typeid(int (ProjectileFactory::*)()), "57565383ec308b5c24408b839804000085c0", argdata, 1, 2, &func);
}

FUNC_NAKED int ProjectileFactory::SpendMissiles()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func656::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func657
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::OnRender", typeid(void (ProjectileFactory::*)(float , bool )), "5383ec18807c2428008b5c2420f30f10442424", argdata, 3, 6, &func);
}

FUNC_NAKED void ProjectileFactory::OnRender(float alpha, bool forceVisual)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// forceVisual
		"push [ebp+12]\n\t"		// alpha
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func657::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func658
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::NumTargetsRequired", typeid(int (ProjectileFactory::*)()), "8b5424048b421c83b8fc00000001", argdata, 1, 2, &func);
}

FUNC_NAKED int ProjectileFactory::NumTargetsRequired()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func658::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func659
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ProjectileFactory::Update", typeid(void (ProjectileFactory::*)()), "5589e557565381ec7c0100008b7d088b8fb004000085c9", argdata, 1, 6, &func);
}

FUNC_NAKED void ProjectileFactory::Update()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func659::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func660
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ReactorButton::Accept", typeid(void (ReactorButton::*)()), "5589e5565383ec308b5d088b436c85c0", argdata, 1, 6, &func);
}

FUNC_NAKED void ReactorButton::Accept()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func660::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func661
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("RepairStoreBox::constructor", typeid(void (RepairStoreBox::*)(ShipManager *, bool , int )), "5589e557565383ec7c8b45108d75e08b5d08", argdata, 4, 6, &func);
}

FUNC_NAKED void RepairStoreBox::constructor(ShipManager *ship, bool repairAll, int price)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// price
		"push [ebp+16]\n\t"		// repairAll
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func661::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func662
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ResourceControl::constructor", typeid(void (ResourceControl::*)()), "57565383ec208b5c24308d4310c7430400000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ResourceControl::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func662::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func663
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ResourceControl::CreateImagePrimitive", typeid(GL_Primitive *(ResourceControl::*)(GL_Texture *, int , int , int , GL_Color , float , bool )), "83ec5c8b4424648b8c248800000085c00f84????????89c285d2f30f1074247cf30f10642478f30f106c2474f30f2a542470", argdata, 8, 2, &func);
}

FUNC_NAKED GL_Primitive *ResourceControl::CreateImagePrimitive(GL_Texture *tex, int unk1, int unk2, int unk3, GL_Color color, float alpha, bool mirror)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+48]\n\t"		// mirror
		"push [ebp+44]\n\t"		// alpha
		"push [ebp+40]\n\t"		// color
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// color
		"push [ebp+24]\n\t"		// unk3
		"push [ebp+20]\n\t"		// unk2
		"push [ebp+16]\n\t"		// unk1
		"push [ebp+12]\n\t"		// tex
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func663::func));
	__asm__
	(
		"add esp, 44\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 44\n\t"
	);
}

namespace _func664
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ResourceControl::OnInit", typeid(void (ResourceControl::*)(int )), "5383ec188b5c24208b442424c7838800000000000000894354c70424b80b0000", argdata, 2, 6, &func);
}

FUNC_NAKED void ResourceControl::OnInit(int imageSwappingMode)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// imageSwappingMode
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func664::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func665
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ResourceControl::LoadFile", typeid(char *(ResourceControl::*)(const std::string &)), "555731ff565383ec4c8d44241e8b5c246089442408", argdata, 2, 2, &func);
}

FUNC_NAKED char *ResourceControl::LoadFile(const std::string &fileName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// fileName
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func665::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func666
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ResourceControl::GetImageId", typeid(GL_Texture *(ResourceControl::*)(const std::string &)), "5589e557565383ec5c8d45d4890424", argdata, 2, 2, &func);
}

FUNC_NAKED GL_Texture *ResourceControl::GetImageId(const std::string &dir)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// dir
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func666::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func667
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ResourceControl::RenderImage", typeid(int (ResourceControl::*)(GL_Texture *, int , int , int , GL_Color , float , bool )), "83ec5c8b4424648b8c248800000085c00f84????????89c285d2f30f1074247cf30f10542478f30f105c2474f30f2a442470", argdata, 8, 2, &func);
}

FUNC_NAKED int ResourceControl::RenderImage(GL_Texture *tex, int x, int y, int rotation, GL_Color color, float opacity, bool mirror)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+48]\n\t"		// mirror
		"push [ebp+44]\n\t"		// opacity
		"push [ebp+40]\n\t"		// color
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// color
		"push [ebp+24]\n\t"		// rotation
		"push [ebp+20]\n\t"		// y
		"push [ebp+16]\n\t"		// x
		"push [ebp+12]\n\t"		// tex
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func667::func));
	__asm__
	(
		"add esp, 44\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 44\n\t"
	);
}

namespace _func668
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ResourceControl::RenderImageString", typeid(int (ResourceControl::*)(std::string &, int , int , int , GL_Color , float , bool )), "5383ec588b4424648b9c2488000000894424048b442460890424e8????????f30f104c2474f30f10442478f30f1054247c85c00f84????????89c285d2f30f2a5c2470", argdata, 8, 2, &func);
}

FUNC_NAKED int ResourceControl::RenderImageString(std::string &tex, int x, int y, int rotation, GL_Color color, float opacity, bool mirror)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+48]\n\t"		// mirror
		"push [ebp+44]\n\t"		// opacity
		"push [ebp+40]\n\t"		// color
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// color
		"push [ebp+24]\n\t"		// rotation
		"push [ebp+20]\n\t"		// y
		"push [ebp+16]\n\t"		// x
		"push [ebp+12]\n\t"		// tex
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func668::func));
	__asm__
	(
		"add esp, 44\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 44\n\t"
	);
}

namespace _func669
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x4ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ResourceControl::CreateImagePrimitiveString", typeid(GL_Primitive *(ResourceControl::*)(const std::string &, int , int , int , GL_Color , float , bool )), "5383ec588b4424648b9c2488000000894424048b442460890424e8????????f30f104c2474f30f10442478f30f1054247c85c00f84????????89c285d2f30f2a6c2470", argdata, 8, 2, &func);
}

FUNC_NAKED GL_Primitive *ResourceControl::CreateImagePrimitiveString(const std::string &tex, int x, int y, int rotation, GL_Color color, float alpha, bool mirror)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+48]\n\t"		// mirror
		"push [ebp+44]\n\t"		// alpha
		"push [ebp+40]\n\t"		// color
		"push [ebp+36]\n\t"		// color
		"push [ebp+32]\n\t"		// color
		"push [ebp+28]\n\t"		// color
		"push [ebp+24]\n\t"		// rotation
		"push [ebp+20]\n\t"		// y
		"push [ebp+16]\n\t"		// x
		"push [ebp+12]\n\t"		// tex
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func669::func));
	__asm__
	(
		"add esp, 44\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 44\n\t"
	);
}

namespace _func670
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ResourceControl::GetFontData", typeid(freetype::font_data &(ResourceControl::*)(int , bool )), "5557565383ec4c8b4424648b5c24608b4c24688d50fa83fa02", argdata, 3, 2, &func);
}

FUNC_NAKED freetype::font_data &ResourceControl::GetFontData(int fontType, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// fontType
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func670::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func671
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ResourceControl::GetImageData", typeid(void (*)(ImageDesc &, ResourceControl *, GL_Texture *)), "5531d257565383ec1c8b4424348b7c24388b7034", argdata, 3, 6, &func);
}

FUNC_NAKED void ResourceControl::GetImageData(ImageDesc &ref, ResourceControl *resources, GL_Texture *tex)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// tex
		"push [ebp+12]\n\t"		// resources
		"push [ebp+8]\n\t"		// ref
	);
	__asm__("call %0\n\t" :: "m"(_func671::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func672
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("RockAnimation::constructor", typeid(void (RockAnimation::*)(const std::string &, int , Pointf , bool )), "5589e557565383ec4c8b450c8b751c8d5de4891c248b7d0889442404", argdata, 5, 6, &func);
}

FUNC_NAKED void RockAnimation::constructor(const std::string &subRace, int iShipId, Pointf position, bool enemy)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// enemy
		"push [ebp+24]\n\t"		// position
		"push [ebp+20]\n\t"		// position
		"push [ebp+16]\n\t"		// iShipId
		"push [ebp+12]\n\t"		// subRace
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func672::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func673
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("RockAnimation::__DO_NOT_HOOK", typeid(void (*)()), "5557565381ec0c010000803d????????000f85????????e8????????89c7", argdata, 0, 4, &func);
}

FUNC_NAKED void RockAnimation::__DO_NOT_HOOK()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func673::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func674
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("RockAnimation::GetShootingSound", typeid(std::string &(*)(std::string &, RockAnimation *)), ".5557565381ec0c010000803d????????000f85????????e8????????89c7", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &RockAnimation::GetShootingSound(std::string &strRef, RockAnimation *anim)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// anim
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func674::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func675
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("RockAnimation::__DO_NOT_HOOK2", typeid(void (*)()), "5383ec288b5c24308d44241f89442408c7442404????????891c24e8????????83c42889d85b", argdata, 0, 4, &func);
}

FUNC_NAKED void RockAnimation::__DO_NOT_HOOK2()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func675::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func676
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("RockAnimation::__DO_NOT_HOOK3", typeid(void (*)()), ".5383ec288b5c24308d44241f89442408c7442404????????891c24e8????????83c42889d85b", argdata, 0, 4, &func);
}

FUNC_NAKED void RockAnimation::__DO_NOT_HOOK3()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func676::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func677
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("RockAnimation::GetDeathSound", typeid(std::string &(*)(std::string &, RockAnimation *)), ".5383ec288b5c24308d44241f89442408c7442404????????891c24e8????????83c42889d85b", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &RockAnimation::GetDeathSound(std::string &strRef, RockAnimation *anim)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// anim
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func677::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func678
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Room::GetEmptySlots", typeid(int (Room::*)(bool )), "56538b74240c0fb64c24108b4634", argdata, 2, 2, &func);
}

FUNC_NAKED int Room::GetEmptySlots(bool intruder)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// intruder
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func678::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func679
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Room::constructor", typeid(void (Room::*)(int , int , int , int , int , int )), "5589e557565381ec2c0100008b45088b5508c7400400000000", argdata, 7, 6, &func);
}

FUNC_NAKED void Room::constructor(int iShipId, int x, int y, int w, int h, int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+32]\n\t"		// roomId
		"push [ebp+28]\n\t"		// h
		"push [ebp+24]\n\t"		// w
		"push [ebp+20]\n\t"		// y
		"push [ebp+16]\n\t"		// x
		"push [ebp+12]\n\t"		// iShipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func679::func));
	__asm__
	(
		"add esp, 28\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 28\n\t"
	);
}

namespace _func680
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Room::OnRenderFloor", typeid(void (Room::*)(float , bool )), "83ec3c8b4c2440f30f1005????????f30f100d????????", argdata, 3, 6, &func);
}

FUNC_NAKED void Room::OnRenderFloor(float alpha, bool experimental)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// experimental
		"push [ebp+12]\n\t"		// alpha
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func680::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func681
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Room::OnRenderWalls", typeid(void (Room::*)(float )), "5383ec188b5c2420f30f104c2424807b4000", argdata, 2, 6, &func);
}

FUNC_NAKED void Room::OnRenderWalls(float alpha)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// alpha
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func681::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func682
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Room::destructor", typeid(void (Room::*)()), "5557565383ec4c8b442460c700????????c74008????????8b407c890424", argdata, 1, 6, &func);
}

FUNC_NAKED void Room::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func682::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func683
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::GetShipUnlocked", typeid(char (ScoreKeeper::*)(int , int )), "5531c057565381ec1c01000083bc243801000002", argdata, 3, 2, &func);
}

FUNC_NAKED char ScoreKeeper::GetShipUnlocked(int shipId, int shipVariant)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// shipVariant
		"push [ebp+12]\n\t"		// shipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func683::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func684
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::GetShipBlueprint", typeid(std::string *(*)(std::string *, ScoreKeeper *, int )), "5383ec188b4424288b5c2420??????????????89442404", argdata, 3, 2, &func);
}

FUNC_NAKED std::string *ScoreKeeper::GetShipBlueprint(std::string *str, ScoreKeeper *scoreKeeper, int index)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// index
		"push [ebp+12]\n\t"		// scoreKeeper
		"push [ebp+8]\n\t"		// str
	);
	__asm__("call %0\n\t" :: "m"(_func684::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func685
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::OnInit", typeid(void (ScoreKeeper::*)()), "5589e557565381ec9c0000008b5d08c744240400000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ScoreKeeper::OnInit()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func685::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func686
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::Save", typeid(void (ScoreKeeper::*)(bool )), "5589e557565383ec6c8b5d08c70424????????", argdata, 2, 6, &func);
}

FUNC_NAKED void ScoreKeeper::Save(bool newHighScore)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// newHighScore
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func686::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func687
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::OnRender", typeid(void (ScoreKeeper::*)(bool )), "5589e557565381ec0c0200008b5d088b450c", argdata, 2, 6, &func);
}

FUNC_NAKED void ScoreKeeper::OnRender(bool lastPlaythrough)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// lastPlaythrough
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func687::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func688
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::UnlockShip", typeid(void (ScoreKeeper::*)(int , int , bool , bool )), "555756538b5424188b6c24148b4c241c8b5c2420", argdata, 5, 6, &func);
}

FUNC_NAKED void ScoreKeeper::UnlockShip(int shipType, int shipVariant, bool save, bool hidePopup)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// hidePopup
		"push [ebp+20]\n\t"		// save
		"push [ebp+16]\n\t"		// shipVariant
		"push [ebp+12]\n\t"		// shipType
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func688::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func689
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::SetVictory", typeid(void (ScoreKeeper::*)(bool )), "8b5424088b44240484d28890e4000000", argdata, 2, 6, &func);
}

FUNC_NAKED void ScoreKeeper::SetVictory(bool victory)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// victory
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func689::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func690
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::constructor", typeid(void (ScoreKeeper::*)()), "5557565383ec4c8b442460c70000000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ScoreKeeper::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func690::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func691
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::GetShipIdType", typeid(int (ScoreKeeper::*)(const std::string &)), "55575653bb????????83ec3c8b6c2458c744241800000000", argdata, 2, 2, &func);
}

FUNC_NAKED int ScoreKeeper::GetShipIdType(const std::string &blueprintName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// blueprintName
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func691::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func692
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::LoadVersionFour", typeid(void (ScoreKeeper::*)(int , int )), "5589e557565381ec8c0000008b4d108b45088b7d0c", argdata, 3, 6, &func);
}

FUNC_NAKED void ScoreKeeper::LoadVersionFour(int file, int version)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// version
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func692::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func693
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::WipeProfile", typeid(void (ScoreKeeper::*)(bool )), "5557565383ec3c8b4c24508b442454", argdata, 2, 6, &func);
}

FUNC_NAKED void ScoreKeeper::WipeProfile(bool permanent)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// permanent
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func693::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func694
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::MouseClick", typeid(void (ScoreKeeper::*)(int , int )), "565383ec148b5c242080bb0809000000", argdata, 3, 6, &func);
}

FUNC_NAKED void ScoreKeeper::MouseClick(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func694::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func695
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::SetupTopShip", typeid(void (ScoreKeeper::*)(int )), "5589e557565383ec5c8b5d088d75c8", argdata, 2, 6, &func);
}

FUNC_NAKED void ScoreKeeper::SetupTopShip(int variant)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// variant
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func695::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func696
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::CheckTypes", typeid(void (ScoreKeeper::*)()), "5557565383ec2c8b6c2440c7442408010000008b85c4080000", argdata, 1, 6, &func);
}

FUNC_NAKED void ScoreKeeper::CheckTypes()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func696::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func697
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::AddTopScoreType", typeid(void (ScoreKeeper::*)(TopScore &, int )), "8b5424088b4424048b4c240c837a1000", argdata, 3, 6, &func);
}

FUNC_NAKED void ScoreKeeper::AddTopScoreType(TopScore &topScore, int type)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// type
		"push [ebp+12]\n\t"		// topScore
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func697::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func698
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::AddTopScoreList", typeid(int (ScoreKeeper::*)(TopScore &, std::vector<TopScore> &)), "5557565383ec4c8b5c24688b6c24648b4304", argdata, 3, 2, &func);
}

FUNC_NAKED int ScoreKeeper::AddTopScoreList(TopScore &score, std::vector<TopScore> &topScoreList)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// topScoreList
		"push [ebp+12]\n\t"		// score
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func698::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func699
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::RenderTopScores", typeid(void (ScoreKeeper::*)(const std::vector<TopScore> &, Point , int )), "5589e557565381eccc0100008b4510", argdata, 4, 6, &func);
}

FUNC_NAKED void ScoreKeeper::RenderTopScores(const std::vector<TopScore> &topScoreList, Point position, int newHighScore)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// newHighScore
		"push [ebp+20]\n\t"		// position
		"push [ebp+16]\n\t"		// position
		"push [ebp+12]\n\t"		// topScoreList
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func699::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func700
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::CycleLeft", typeid(void (ScoreKeeper::*)()), "56be090000005383ec14", argdata, 1, 6, &func);
}

FUNC_NAKED void ScoreKeeper::CycleLeft()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func700::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func701
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::CycleRight", typeid(void (ScoreKeeper::*)()), "5631f65383ec148b5c2420908d74??00", argdata, 1, 6, &func);
}

FUNC_NAKED void ScoreKeeper::CycleRight()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func701::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func702
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::Open", typeid(void (ScoreKeeper::*)(bool )), "5557565381ec9c0000008b9c24b0000000c74424080d000000", argdata, 2, 6, &func);
}

FUNC_NAKED void ScoreKeeper::Open(bool fromGameOver)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// fromGameOver
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func702::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func703
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::KeyDown", typeid(bool (ScoreKeeper::*)(SDLKey )), "565383ec148b5c24208b7424240fb68308090000", argdata, 2, 2, &func);
}

FUNC_NAKED bool ScoreKeeper::KeyDown(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func703::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func704
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::AddScrapCollected", typeid(void (ScoreKeeper::*)(int )), "565383ec24c70424????????8b5c24308b742434", argdata, 2, 6, &func);
}

FUNC_NAKED void ScoreKeeper::AddScrapCollected(int scrap)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// scrap
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func704::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func705
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ScoreKeeper::SaveScores", typeid(void (ScoreKeeper::*)(int , std::vector<TopScore> &)), "55575631f65383ec4c8b442468", argdata, 3, 6, &func);
}

FUNC_NAKED void ScoreKeeper::SaveScores(int file, std::vector<TopScore> &topScores)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// topScores
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func705::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func706
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Settings::GetCommandConsole", typeid(char (*)()), "0fb605????????c3908db4260000000083ec1c0fb605", argdata, 0, 0, &func);
}

FUNC_NAKED char Settings::GetCommandConsole()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func706::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func707
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Settings::GetDlcEnabled", typeid(bool (*)()), "31c0803d????????0075??c38d74260083ec1c", argdata, 0, 0, &func);
}

FUNC_NAKED bool Settings::GetDlcEnabled()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func707::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func708
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Settings::GetHotkeyName", typeid(std::string &(*)(std::string &, const std::string &)), "5589e557565383ec5c8b450c8d75d8", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &Settings::GetHotkeyName(std::string &strRef, const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func708::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func709
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Settings::GetHotkey", typeid(SDLKey (*)(const std::string &)), "5557565383ec2cc744241c????????", argdata, 1, 2, &func);
}

FUNC_NAKED SDLKey Settings::GetHotkey(const std::string &hotkeyName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// hotkeyName
	);
	__asm__("call %0\n\t" :: "m"(_func709::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func710
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Settings::SetHotkey", typeid(void (*)(const std::string &, SDLKey )), "5557565383ec5cc744242c????????", argdata, 2, 6, &func);
}

FUNC_NAKED void Settings::SetHotkey(const std::string &hotkeyName, SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// hotkeyName
	);
	__asm__("call %0\n\t" :: "m"(_func710::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func711
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Settings::SaveSettings", typeid(void (*)()), "5557565381ec3c0100008d84249c000000", argdata, 0, 6, &func);
}

FUNC_NAKED void Settings::SaveSettings()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func711::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func712
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Settings::ResetHotkeys", typeid(void (*)()), "5557bf????????565383ec4c8d6c2430", argdata, 0, 6, &func);
}

FUNC_NAKED void Settings::ResetHotkeys()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func712::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func713
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Settings::LoadSettings", typeid(void (*)()), "5589e557565381ec9c01000065a114000000", argdata, 0, 6, &func);
}

FUNC_NAKED void Settings::LoadSettings()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func713::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func714
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff, 0xdff, 0x1ff};
	static FunctionDefinition funcObj("Shields::CollisionReal", typeid(CollisionResponse *(*)(CollisionResponse &, Shields *, Pointf , DamageParameter , bool )), "5557565381ec9c0000008b8424c00000008bac24b0000000", argdata, 5, 2, &func);
}

FUNC_NAKED CollisionResponse *Shields::CollisionReal(CollisionResponse &ret, Shields *shields, Pointf pos, DamageParameter damage, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+76]\n\t"		// unk
		"push [ebp+72]\n\t"		// damage
		"push [ebp+68]\n\t"		// damage
		"push [ebp+64]\n\t"		// damage
		"push [ebp+60]\n\t"		// damage
		"push [ebp+56]\n\t"		// damage
		"push [ebp+52]\n\t"		// damage
		"push [ebp+48]\n\t"		// damage
		"push [ebp+44]\n\t"		// damage
		"push [ebp+40]\n\t"		// damage
		"push [ebp+36]\n\t"		// damage
		"push [ebp+32]\n\t"		// damage
		"push [ebp+28]\n\t"		// damage
		"push [ebp+24]\n\t"		// damage
		"push [ebp+20]\n\t"		// pos
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// shields
		"push [ebp+8]\n\t"		// ret
	);
	__asm__("call %0\n\t" :: "m"(_func714::func));
	__asm__
	(
		"add esp, 72\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 72\n\t"
	);
}

namespace _func715
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Shields::constructor", typeid(void (Shields::*)(int , int , int , const std::string &)), "57565383ec508b44246c8b5c2460c744240400000000", argdata, 5, 6, &func);
}

FUNC_NAKED void Shields::constructor(int roomId, int shipId, int startingPower, const std::string &shieldFile)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// shieldFile
		"push [ebp+20]\n\t"		// startingPower
		"push [ebp+16]\n\t"		// shipId
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func715::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func716
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff};
	static FunctionDefinition funcObj("Shields::SetBaseEllipse", typeid(void (Shields::*)(Globals::Ellipse )), "8b4c2404f30f10442410f30f104c2414", argdata, 2, 6, &func);
}

FUNC_NAKED void Shields::SetBaseEllipse(Globals::Ellipse ellipse)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// ellipse
		"push [ebp+20]\n\t"		// ellipse
		"push [ebp+16]\n\t"		// ellipse
		"push [ebp+12]\n\t"		// ellipse
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func716::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func717
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Shields::InstantCharge", typeid(void (Shields::*)()), "57565383ec208b5c2430891c248db310020000", argdata, 1, 6, &func);
}

FUNC_NAKED void Shields::InstantCharge()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func717::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func718
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Shields::Jump", typeid(void (Shields::*)()), "57565383ec208b5c24308d74241c891c24", argdata, 1, 6, &func);
}

FUNC_NAKED void Shields::Jump()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func718::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func719
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Shields::OnLoop", typeid(void (Shields::*)()), "5557565383ec3c8b5c24508d74242c891c24e8????????8d44242a", argdata, 1, 6, &func);
}

FUNC_NAKED void Shields::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func719::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func720
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("Shields::AddSuperShield", typeid(void (Shields::*)(Point )), "57ba05000000565383ec108b5c24208b7424248b7c2428", argdata, 2, 6, &func);
}

FUNC_NAKED void Shields::AddSuperShield(Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func720::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func721
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Shields::RenderBase", typeid(void (Shields::*)(float , float )), "5557565381ec8c0000008b9c24a00000008b83c4010000", argdata, 3, 6, &func);
}

FUNC_NAKED void Shields::RenderBase(float alpha, float superShieldOverwrite)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// superShieldOverwrite
		"push [ebp+12]\n\t"		// alpha
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func721::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func722
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::GetSelectedRoomId", typeid(int (Ship::*)(int , int , bool )), "57565383ec108b4424208b7424248b7c24288b5c242c8b40040fb6db890424e8????????895c242c897c2428897424248944242083c4105b5e5fe9????????9057", argdata, 4, 2, &func);
}

FUNC_NAKED int Ship::GetSelectedRoomId(int x, int y, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func722::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func723
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff};
	static FunctionDefinition funcObj("Ship::LockdownRoom", typeid(void (Ship::*)(int , Pointf )), "5589e557565381ec2c0100008b45088b4004890424", argdata, 3, 6, &func);
}

FUNC_NAKED void Ship::LockdownRoom(int roomId, Pointf pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// pos
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func723::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func724
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::RoomLocked", typeid(bool (Ship::*)(int )), "538b4424088b5c240c8b90f40200008b88f8020000", argdata, 2, 2, &func);
}

FUNC_NAKED bool Ship::RoomLocked(int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func724::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func725
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::FullRoom", typeid(bool (Ship::*)(int , bool )), "538b4424088b54240c8b5c24108b48088b400c", argdata, 3, 2, &func);
}

FUNC_NAKED bool Ship::FullRoom(int roomId, bool intruder)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// intruder
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func725::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func726
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::EmptySlots", typeid(int (Ship::*)(int )), "5557565331db83ec1c8b6c24308b4424348b5508", argdata, 2, 2, &func);
}

FUNC_NAKED int Ship::EmptySlots(int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func726::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func727
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::GetAvailableRoomSlot", typeid(int (Ship::*)(int , bool )), "0fb644240c8b542408894424088b4424048b40088b049089442404e9????????8b442404", argdata, 3, 2, &func);
}

FUNC_NAKED int Ship::GetAvailableRoomSlot(int roomId, bool intruder)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// intruder
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func727::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func728
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Ship::OnRenderBreaches", typeid(void (Ship::*)()), "565331db83ec148b7424208b56208b462429d0", argdata, 1, 6, &func);
}

FUNC_NAKED void Ship::OnRenderBreaches()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func728::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func729
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::OnRenderWalls", typeid(void (Ship::*)(bool , bool )), "555731ff565383ec4c8b5c24600fb6442464", argdata, 3, 6, &func);
}

FUNC_NAKED void Ship::OnRenderWalls(bool forceView, bool doorControlMode)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// doorControlMode
		"push [ebp+12]\n\t"		// forceView
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func729::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func730
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::OnInit", typeid(void (Ship::*)(ShipBlueprint &)), "5589e557565381ecfc0101008b45088b5d0c", argdata, 2, 6, &func);
}

FUNC_NAKED void Ship::OnInit(ShipBlueprint &bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func730::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func731
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Ship::OnRenderSparks", typeid(void (Ship::*)()), "565331db83ec148b7424208b56088b460c29d0c1f80285c074??8db6000000008b049a83c301890424e8????????8b56088b460c29d0c1f80239c372??83c4145b5ec3908db6000000008dbf00000000565331db83ec14", argdata, 1, 6, &func);
}

FUNC_NAKED void Ship::OnRenderSparks()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func731::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func732
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::SetRoomBlackout", typeid(void (Ship::*)(int , bool )), "0fb644240c8b542408894424088b4424048b40088b049089442404e9????????538b4424088b5c240c", argdata, 3, 6, &func);
}

FUNC_NAKED void Ship::SetRoomBlackout(int roomId, bool blackout)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// blackout
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func732::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func733
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::OnRenderBase", typeid(void (Ship::*)(bool )), "5557565383ec3c8b5c24508b6c24548b4304", argdata, 2, 6, &func);
}

FUNC_NAKED void Ship::OnRenderBase(bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func733::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func734
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::OnRenderFloor", typeid(void (Ship::*)(bool )), "565383ec248b5c24308b74243480bbf002000000", argdata, 2, 6, &func);
}

FUNC_NAKED void Ship::OnRenderFloor(bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func734::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func735
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::OnRenderJump", typeid(void (Ship::*)(float )), "5557565383ec5c8b5c24708b4304890424", argdata, 2, 6, &func);
}

FUNC_NAKED void Ship::OnRenderJump(float progress)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// progress
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func735::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func736
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::GetBaseEllipse", typeid(void (*)(Globals::Ellipse &, Ship *)), "565383ec248b7424348b5c24308b86a4010000", argdata, 2, 6, &func);
}

FUNC_NAKED void Ship::GetBaseEllipse(Globals::Ellipse &ret, Ship *_this)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// _this
		"push [ebp+8]\n\t"		// ret
	);
	__asm__("call %0\n\t" :: "m"(_func736::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func737
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::SetSelectedRoom", typeid(void (Ship::*)(int )), "57565331db83ec108b7c24208b7424248b57088b470c", argdata, 2, 6, &func);
}

FUNC_NAKED void Ship::SetSelectedRoom(int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func737::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func738
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::OnLoop", typeid(void (Ship::*)(std::vector<float> &)), "5589e557565381ec8c0000008b45088b5d0c8db0d4020000", argdata, 2, 6, &func);
}

FUNC_NAKED void Ship::OnLoop(std::vector<float> &oxygenLevels)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// oxygenLevels
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func738::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func739
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Ship::BreachRandomHull", typeid(void (Ship::*)(int )), "5557565383ec5c8b7c24708b742474c7442440????????", argdata, 2, 6, &func);
}

FUNC_NAKED void Ship::BreachRandomHull(int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func739::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func740
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipAI::constructor", typeid(void (ShipAI::*)(bool )), "565383ec148b5c24208b7424248d4308", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipAI::constructor(bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func740::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func741
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipAI::SetStalemate", typeid(void (ShipAI::*)(bool )), ".8b4424088b54240484c0", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipAI::SetStalemate(bool stalemate)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// stalemate
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func741::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func742
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipAI::OnLoop", typeid(void (ShipAI::*)(bool )), "5589e557565383ec4c8b750c8b5d0889f084c0", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipAI::OnLoop(bool hostile)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// hostile
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func742::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func743
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipAI::GetTeleportCommand", typeid(double (ShipAI::*)()), "565383ec148b7424248b5c24208b4604", argdata, 1, 10, &func);
}

FUNC_NAKED double ShipAI::GetTeleportCommand()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func743::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func744
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBlueprint::destructor", typeid(void (ShipBlueprint::*)()), "5557565383ec2c8b5c24408d7c241fc703????????", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipBlueprint::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func744::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func745
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::CheckTypes", typeid(void *(ShipBuilder::*)()), "5557565383ec2c8b6c2440c7442408010000008b85580f00008db578090000", argdata, 1, 2, &func);
}

FUNC_NAKED void *ShipBuilder::CheckTypes()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func745::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func746
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::MouseClick", typeid(void (ShipBuilder::*)(int , int )), "5557565383ec3c8b74245080beac15000000", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipBuilder::MouseClick(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func746::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func747
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::SwitchShip", typeid(void (ShipBuilder::*)(int , int )), "5589e557565383ec2c8b5d088b45108b7d0c", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipBuilder::SwitchShip(int shipType, int shipVariant)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// shipVariant
		"push [ebp+12]\n\t"		// shipType
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func747::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func748
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::CreateEquipmentBoxes", typeid(void (ShipBuilder::*)()), "5557565383ec5c8b5c24708b8b340e0000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipBuilder::CreateEquipmentBoxes()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func748::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func749
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::CreateSystemBoxes", typeid(void (ShipBuilder::*)()), "5557565383ec3c8b6c24508b8dc80e0000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipBuilder::CreateSystemBoxes()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func749::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func750
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::SetupShipAchievements", typeid(void (ShipBuilder::*)()), "5589e557565383ec4c8b75088d7dd88d5db8", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipBuilder::SetupShipAchievements()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func750::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func751
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::ClearShipAchievements", typeid(void (ShipBuilder::*)()), "8b4424048b9058170000c78064170000ffffffff", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipBuilder::ClearShipAchievements()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func751::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func752
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::SwapType", typeid(int (ShipBuilder::*)(int )), "5383ec188b5c24208b0385c0", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipBuilder::SwapType(int variant)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// variant
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func752::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func753
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::CycleShipNext", typeid(void (ShipBuilder::*)()), "575631f65383ec108b7c24208b8700170000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipBuilder::CycleShipNext()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func753::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func754
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::CycleShipPrevious", typeid(void (ShipBuilder::*)()), "5756be020000005383ec108b7c24208b8700170000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipBuilder::CycleShipPrevious()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func754::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func755
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::Open", typeid(void (ShipBuilder::*)()), "5589e557565381ec2c0300008b4508c6808c17000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipBuilder::Open()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func755::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func756
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::OnRender", typeid(void (ShipBuilder::*)()), "5589e557565381ecbc0000008b5d0880bb4410000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipBuilder::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func756::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func757
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::OnLoop", typeid(void (ShipBuilder::*)()), "5589e557565383ec5c8b5d08c70424????????", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipBuilder::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func757::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func758
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::constructor", typeid(void (ShipBuilder::*)()), "565383ec348b5c24408d74242c8d430c", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipBuilder::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func758::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func759
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::MouseMove", typeid(void (ShipBuilder::*)(int , int )), "5589e557565381ecac0000008b7d088d873c0e0000", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipBuilder::MouseMove(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func759::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func760
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipBuilder::OnKeyDown", typeid(void (ShipBuilder::*)(SDLKey )), "5557565383ec1c8b7424308b44243480be4410000000", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipBuilder::OnKeyDown(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func760::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func761
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipButton::constructor", typeid(void (ShipButton::*)(int , int )), "5589e557565381ecbc0100008b5d088d??????????", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipButton::constructor(int shipType, int shipVariant)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// shipVariant
		"push [ebp+12]\n\t"		// shipType
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func761::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func762
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff};
	static FunctionDefinition funcObj("ShipButton::OnInit", typeid(void (ShipButton::*)(const std::string &, Point )), "5383ec188b5c24208b5424288b44242c807b7000", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipButton::OnInit(const std::string &imgName, Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// pos
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// imgName
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func762::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func763
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipButton::MouseMove", typeid(bool (ShipButton::*)(int , int )), "5557565383ec2c8b5c24408b742444807b7000", argdata, 3, 2, &func);
}

FUNC_NAKED bool ShipButton::MouseMove(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func763::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func764
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipButton::OnRender", typeid(void (ShipButton::*)()), "5589e557565383ec7c8b5d08807b7000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipButton::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func764::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func765
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipEvent::constructor", typeid(void (ShipEvent::*)(const ShipEvent &)), "5531ed57565331db83ec1c8b7c24348b7424300fb607", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipEvent::constructor(const ShipEvent &event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// event
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func765::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func766
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGenerator::CreateShip", typeid(ShipManager *(*)(const std::string &, int , ShipEvent &)), "5589e557565381ec1c0300008b4510", argdata, 3, 2, &func);
}

FUNC_NAKED ShipManager *ShipGenerator::CreateShip(const std::string &name, int sector, ShipEvent &event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// event
		"push [ebp+12]\n\t"		// sector
		"push [ebp+8]\n\t"		// name
	);
	__asm__("call %0\n\t" :: "m"(_func766::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func767
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipGraph::GetShipInfo", typeid(ShipGraph *(*)(int )), "575381ec84000000a1????????", argdata, 1, 2, &func);
}

FUNC_NAKED ShipGraph *ShipGraph::GetShipInfo(int shipId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// shipId
	);
	__asm__("call %0\n\t" :: "m"(_func767::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func768
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::GetSlotRenderPosition", typeid(Point (ShipGraph::*)(int , int , char )), "5589e557565383ec4c8b7d0c8b75148b4518", argdata, 5, 2, &func);
}

FUNC_NAKED Point ShipGraph::GetSlotRenderPosition(int x, int y, char unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// unk
		"push [ebp+20]\n\t"		// y
		"push [ebp+16]\n\t"		// x
		"push [ebp+12]\n\t"		// implicit_output
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func768::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func769
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::DoorCount", typeid(int (ShipGraph::*)(int )), "538b4424088b4c240c8b58188b501c", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipGraph::DoorCount(int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func769::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func770
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::GetDoors", typeid(std::vector<Door*> &(ShipGraph::*)(int )), "5557565331db83ec1c8b7424308b7c2434c70600000000", argdata, 2, 2, &func);
}

FUNC_NAKED std::vector<Door*> &ShipGraph::GetDoors(int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func770::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func771
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::IsRoomConnected", typeid(int (ShipGraph::*)(int , int )), "5557bf01000000565383ec2c8b5c24443b5c24488b742440", argdata, 3, 2, &func);
}

FUNC_NAKED int ShipGraph::IsRoomConnected(int room1, int room2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// room2
		"push [ebp+12]\n\t"		// room1
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func771::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func772
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::ConnectingDoor", typeid(int (ShipGraph::*)(int , int , int , int )), "5589e557565383ec6c8b45108d5dd8", argdata, 5, 2, &func);
}

FUNC_NAKED int ShipGraph::ConnectingDoor(int x1, int y1, int x2, int y2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// y2
		"push [ebp+20]\n\t"		// x2
		"push [ebp+16]\n\t"		// y1
		"push [ebp+12]\n\t"		// x1
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func772::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func773
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::ConnectedGridSquares", typeid(int (ShipGraph::*)(int , int , int , int )), "5531ed57565383ec7c6b84249800000023", argdata, 5, 2, &func);
}

FUNC_NAKED int ShipGraph::ConnectedGridSquares(int x1, int y1, int x2, int y2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// y2
		"push [ebp+20]\n\t"		// x2
		"push [ebp+16]\n\t"		// y1
		"push [ebp+12]\n\t"		// x1
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func773::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func774
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x2ff};
	static FunctionDefinition funcObj("ShipGraph::ConnectedGridSquaresPoint", typeid(int (ShipGraph::*)(Point , Point )), "5531ed57565383ec7c6b84249800000023", argdata, 3, 2, &func);
}

FUNC_NAKED int ShipGraph::ConnectedGridSquaresPoint(Point p1, Point p2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// p2
		"push [ebp+20]\n\t"		// p2
		"push [ebp+16]\n\t"		// p1
		"push [ebp+12]\n\t"		// p1
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func774::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func775
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x2ff};
	static FunctionDefinition funcObj("ShipGraph::ConnectingDoor", typeid(int (ShipGraph::*)(Point , Point )), "5589e557565383ec6c8b45108d5dd8", argdata, 3, 2, &func);
}

FUNC_NAKED int ShipGraph::ConnectingDoor(Point p1, Point p2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// p2
		"push [ebp+20]\n\t"		// p2
		"push [ebp+16]\n\t"		// p1
		"push [ebp+12]\n\t"		// p1
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func775::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func776
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::GetNumSlots", typeid(int (ShipGraph::*)(int )), "8b4424048b5424088b008b0490", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipGraph::GetNumSlots(int room)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// room
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func776::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func777
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::PopClosestDoor", typeid(int (*)(std::vector<int> &, std::vector<float> &)), "5557565331db83ec2c8b4424448b38", argdata, 2, 0, &func);
}

FUNC_NAKED int ShipGraph::PopClosestDoor(std::vector<int> &unk, std::vector<float> &unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk2
		"push [ebp+8]\n\t"		// unk
	);
	__asm__("call %0\n\t" :: "m"(_func777::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func778
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::Dijkstra", typeid(int (ShipGraph::*)(Point , Point , int )), "5589e557565381ec8c0000008b45188b750c8b7d14", argdata, 4, 2, &func);
}

FUNC_NAKED int ShipGraph::Dijkstra(Point p1, Point p2, int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// unk
		"push [ebp+24]\n\t"		// p2
		"push [ebp+20]\n\t"		// p2
		"push [ebp+16]\n\t"		// p1
		"push [ebp+12]\n\t"		// p1
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func778::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func779
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::FindPath", typeid(int (ShipGraph::*)(Point , Point , int )), "5589e557565383ec5c8b45188b5d0c", argdata, 4, 2, &func);
}

FUNC_NAKED int ShipGraph::FindPath(Point p1, Point p2, int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// unk
		"push [ebp+24]\n\t"		// p2
		"push [ebp+20]\n\t"		// p2
		"push [ebp+16]\n\t"		// p1
		"push [ebp+12]\n\t"		// p1
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func779::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func780
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::ConvertToWorldAngle", typeid(float (ShipGraph::*)(float )), "83ec048b442408f30f1044240cf30f584034", argdata, 2, 2, &func);
}

FUNC_NAKED float ShipGraph::ConvertToWorldAngle(float ang)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ang
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func780::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func781
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::ConvertToLocalAngle", typeid(float (ShipGraph::*)(float )), "83ec048b442408f30f1044240cf30f5c4034", argdata, 2, 2, &func);
}

FUNC_NAKED float ShipGraph::ConvertToLocalAngle(float ang)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ang
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func781::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func782
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("ShipGraph::ConvertToWorldPosition", typeid(int64_t (ShipGraph::*)(Pointf )), "5589e5565383ec208b5d0c8b7508", argdata, 2, 10, &func);
}

FUNC_NAKED int64_t ShipGraph::ConvertToWorldPosition(Pointf p)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// p
		"push [ebp+12]\n\t"		// p
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func782::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func783
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::ConvertToLocalPosition", typeid(Pointf (ShipGraph::*)(Pointf , char )), "5589e5565383ec208b450c807d1800", argdata, 4, 2, &func);
}

FUNC_NAKED Pointf ShipGraph::ConvertToLocalPosition(Pointf p, char unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// unk
		"push [ebp+20]\n\t"		// p
		"push [ebp+16]\n\t"		// p
		"push [ebp+12]\n\t"		// implicit_output
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func783::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func784
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipGraph::ComputeCenter", typeid(int (ShipGraph::*)()), "5589e557565383ec3c8b7d088b4508", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipGraph::ComputeCenter()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func784::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func785
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::ContainsPoint", typeid(bool (ShipGraph::*)(int , int )), "538b54240831c08b4c240c8b5a44", argdata, 3, 2, &func);
}

FUNC_NAKED bool ShipGraph::ContainsPoint(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func785::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func786
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::GetSelectedRoom", typeid(int (ShipGraph::*)(int , int , bool )), "555731ff565383ec1c8b7424300fb65c243c", argdata, 4, 2, &func);
}

FUNC_NAKED int ShipGraph::GetSelectedRoom(int x, int y, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func786::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func787
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipGraph::RoomCount", typeid(int (ShipGraph::*)()), "8b5424048b42042b02", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipGraph::RoomCount()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func787::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func788
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::GetRoomShape", typeid(Globals::Rect *(ShipGraph::*)(int )), "5589e557565383ec1c8b550c8b4508", argdata, 2, 2, &func);
}

FUNC_NAKED Globals::Rect *ShipGraph::GetRoomShape(int room)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// room
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func788::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func789
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::GetRoomOxygen", typeid(float (ShipGraph::*)(int )), "5383ec048b15????????8b4c24108b44240c85c978??8b18", argdata, 2, 2, &func);
}

FUNC_NAKED float ShipGraph::GetRoomOxygen(int room)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// room
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func789::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func790
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::GetRoomBlackedOut", typeid(bool (ShipGraph::*)(int )), "538b4c240cb8010000008b54240885c9", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipGraph::GetRoomBlackedOut(int room)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// room
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func790::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func791
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipGraph::GetClosestSlot", typeid(Slot *(*)(Slot *, ShipGraph *, Point , int , bool )), "5589e5575631f65389f381ecac0000008b45108b7d0c", argdata, 5, 2, &func);
}

FUNC_NAKED Slot *ShipGraph::GetClosestSlot(Slot *slot, ShipGraph *graph, Point pos, int shipId, bool intruder)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// intruder
		"push [ebp+24]\n\t"		// shipId
		"push [ebp+20]\n\t"		// pos
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// graph
		"push [ebp+8]\n\t"		// slot
	);
	__asm__("call %0\n\t" :: "m"(_func791::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func792
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipInfo::AddAugmentation", typeid(char (ShipInfo::*)(const std::string &)), "5531c089e557565383ec6c8b5508837a3002", argdata, 2, 2, &func);
}

FUNC_NAKED char ShipInfo::AddAugmentation(const std::string &augment)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// augment
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func792::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func793
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipInfo::HasAugmentation", typeid(bool (ShipInfo::*)(const std::string &)), "5589e557565383ec5c8b450883c00489c78945b8", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipInfo::HasAugmentation(const std::string &augment)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// augment
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func793::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func794
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipInfo::GetAugmentationValue", typeid(float (ShipInfo::*)(const std::string &)), ".5589e557565383ec6c8b450c894424048d45c8890424", argdata, 2, 2, &func);
}

FUNC_NAKED float ShipInfo::GetAugmentationValue(const std::string &augment)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// augment
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func794::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func795
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::constructor", typeid(int (ShipManager::*)(int )), "5557565381ec9c0000008bb424b00000008b9c24b4000000", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipManager::constructor(int shipId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// shipId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func795::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func796
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::AddInitialCrew", typeid(void (ShipManager::*)(std::vector<CrewBlueprint> &)), "5589e557565381ecfc0000008b7d088d9d38ffffff", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipManager::AddInitialCrew(std::vector<CrewBlueprint> &blueprints)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// blueprints
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func796::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func797
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::GetDodgeFactor", typeid(int (ShipManager::*)()), "5383ec188b5c24208b93000400008b420483f8ff74??8b4b188b0c818b818001000085c07e??80b9840100000074??83f80174??31c0", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipManager::GetDodgeFactor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func797::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func798
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::OnRender", typeid(void (ShipManager::*)(char , char )), "5589e557565381ecdc0000008b5d0c8b4510", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipManager::OnRender(char showInterior, char doorControlMode)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// doorControlMode
		"push [ebp+12]\n\t"		// showInterior
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func798::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func799
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::CountCrew", typeid(int (ShipManager::*)(char )), "5557565383ec1c8b7c24300fb6442434", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipManager::CountCrew(char boarders)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// boarders
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func799::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func800
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::TeleportCrew", typeid(void (*)(std::vector<CrewMember*> &, ShipManager *, int , bool )), "5557565331db83ec1c0fb644243c", argdata, 4, 6, &func);
}

FUNC_NAKED void ShipManager::TeleportCrew(std::vector<CrewMember*> &crewList, ShipManager *ship, int roomId, bool intruders)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// intruders
		"push [ebp+16]\n\t"		// roomId
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// crewList
	);
	__asm__("call %0\n\t" :: "m"(_func800::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func801
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::OnInit", typeid(int (ShipManager::*)(ShipBlueprint *, int )), "5589e557565383ec6c8b7d088b450c8b7510", argdata, 3, 2, &func);
}

FUNC_NAKED int ShipManager::OnInit(ShipBlueprint *bp, int shipLevel)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// shipLevel
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func801::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func802
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::HasSystem", typeid(char (ShipManager::*)(int )), "8b44240883f81174??8b5424048b9200040000", argdata, 2, 2, &func);
}

FUNC_NAKED char ShipManager::HasSystem(int systemId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func802::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func803
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::GetSystemInRoom", typeid(ShipSystem *(ShipManager::*)(int )), "5557565331db83ec1c8b6c24308b7424348b55188b451c", argdata, 2, 2, &func);
}

FUNC_NAKED ShipSystem *ShipManager::GetSystemInRoom(int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func803::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func804
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::OnLoop", typeid(void (ShipManager::*)()), "83ec2c8b44243080b8d103000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func804::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func805
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("ShipManager::DO_NOT_HOOK", typeid(void (*)()), "5383ec188b4424248b5424208b5c242883f811", argdata, 0, 4, &func);
}

FUNC_NAKED void ShipManager::DO_NOT_HOOK()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func805::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func806
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::SetSystemPowerLoss", typeid(void (ShipManager::*)(int , int )), ".5383ec188b4424248b5424208b5c242883f811", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipManager::SetSystemPowerLoss(int systemId, int powerLoss)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// powerLoss
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func806::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func807
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::CreateSystems", typeid(int (ShipManager::*)()), "5589e557565383ec4c8b5d088b83c4040000", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipManager::CreateSystems()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func807::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func808
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::AddSystem", typeid(int (ShipManager::*)(int )), "5589e557565381ecdc0000008b45088d98c0040000", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipManager::AddSystem(int systemId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func808::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func809
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::UpdateCrewMembers", typeid(void (ShipManager::*)()), "5589e557565331db81ecfc0000008b7d088b57188b471c", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::UpdateCrewMembers()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func809::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func810
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::UpdateEnvironment", typeid(void (ShipManager::*)()), "5589e557565381ec9c0000008b7d088d4770", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::UpdateEnvironment()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func810::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func811
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::AddCrewMemberFromBlueprint", typeid(CrewMember *(ShipManager::*)(CrewBlueprint *, int , bool , int , bool )), "5589e557565383ec6c8b4514c7442404????????8b7508", argdata, 6, 2, &func);
}

FUNC_NAKED CrewMember *ShipManager::AddCrewMemberFromBlueprint(CrewBlueprint *bp, int slot, bool init, int roomId, bool intruder)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// intruder
		"push [ebp+24]\n\t"		// roomId
		"push [ebp+20]\n\t"		// init
		"push [ebp+16]\n\t"		// slot
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func811::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func812
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::AddCrewMemberFromString", typeid(CrewMember *(ShipManager::*)(const std::string &, const std::string &, char , int , char , char )), "5589e557565381ec6c0100008b75088b4d1c8b45148b5604", argdata, 7, 2, &func);
}

FUNC_NAKED CrewMember *ShipManager::AddCrewMemberFromString(const std::string &name, const std::string &race, char intruder, int roomId, char init, char male)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+32]\n\t"		// male
		"push [ebp+28]\n\t"		// init
		"push [ebp+24]\n\t"		// roomId
		"push [ebp+20]\n\t"		// intruder
		"push [ebp+16]\n\t"		// race
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func812::func));
	__asm__
	(
		"add esp, 28\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 28\n\t"
	);
}

namespace _func813
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::GetOxygenPercentage", typeid(int (ShipManager::*)()), "8b4424048b9000040000837a08ff74??8b4024f30f1005????????", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipManager::GetOxygenPercentage()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func813::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func814
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0xdff};
	static FunctionDefinition funcObj("ShipManager::DamageCrew", typeid(char (ShipManager::*)(CrewMember *, DamageParameter )), "5557565383ec1c807c246600", argdata, 3, 2, &func);
}

FUNC_NAKED char ShipManager::DamageCrew(CrewMember *crew, DamageParameter dmg)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+64]\n\t"		// dmg
		"push [ebp+60]\n\t"		// dmg
		"push [ebp+56]\n\t"		// dmg
		"push [ebp+52]\n\t"		// dmg
		"push [ebp+48]\n\t"		// dmg
		"push [ebp+44]\n\t"		// dmg
		"push [ebp+40]\n\t"		// dmg
		"push [ebp+36]\n\t"		// dmg
		"push [ebp+32]\n\t"		// dmg
		"push [ebp+28]\n\t"		// dmg
		"push [ebp+24]\n\t"		// dmg
		"push [ebp+20]\n\t"		// dmg
		"push [ebp+16]\n\t"		// dmg
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func814::func));
	__asm__
	(
		"add esp, 60\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 60\n\t"
	);
}

namespace _func815
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::RemoveItem", typeid(void (ShipManager::*)(const std::string &)), "5557565383ec3c8b442454894424048d44242c890424", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipManager::RemoveItem(const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func815::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func816
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0xdff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::DamageArea", typeid(char (ShipManager::*)(Pointf , DamageParameter , char )), "5589e557565381eccc0000008b45148b5d08", argdata, 4, 2, &func);
}

FUNC_NAKED char ShipManager::DamageArea(Pointf location, DamageParameter dmg, char forceHit)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+72]\n\t"		// forceHit
		"push [ebp+68]\n\t"		// dmg
		"push [ebp+64]\n\t"		// dmg
		"push [ebp+60]\n\t"		// dmg
		"push [ebp+56]\n\t"		// dmg
		"push [ebp+52]\n\t"		// dmg
		"push [ebp+48]\n\t"		// dmg
		"push [ebp+44]\n\t"		// dmg
		"push [ebp+40]\n\t"		// dmg
		"push [ebp+36]\n\t"		// dmg
		"push [ebp+32]\n\t"		// dmg
		"push [ebp+28]\n\t"		// dmg
		"push [ebp+24]\n\t"		// dmg
		"push [ebp+20]\n\t"		// dmg
		"push [ebp+16]\n\t"		// location
		"push [ebp+12]\n\t"		// location
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func816::func));
	__asm__
	(
		"add esp, 68\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 68\n\t"
	);
}

namespace _func817
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::SelectRandomCrew", typeid(CrewBlueprint *(*)(CrewBlueprint &, ShipManager *, int , const std::string &)), "5589e557565383ec6c8b45108b7d14", argdata, 4, 2, &func);
}

FUNC_NAKED CrewBlueprint *ShipManager::SelectRandomCrew(CrewBlueprint &bp, ShipManager *ship, int seed, const std::string &unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk
		"push [ebp+16]\n\t"		// seed
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// bp
	);
	__asm__("call %0\n\t" :: "m"(_func817::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func818
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::ClearStatusAll", typeid(void (ShipManager::*)()), "565331db83ec148b7424208b56188b461c29d0c1f80285c074??8db6000000008b049a83c301", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::ClearStatusAll()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func818::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func819
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::PrepareSuperDrones", typeid(void (ShipManager::*)()), "5557565383ec7c8bbc24900000008b87ec050000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::PrepareSuperDrones()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func819::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func820
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::JumpLeave", typeid(void (ShipManager::*)()), "5631c05383ec248b742430", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::JumpLeave()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func820::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func821
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::ModifyScrapCount", typeid(void (ShipManager::*)(int , bool )), "5557565383ec3c8b7424548b5c24508b442458", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipManager::ModifyScrapCount(int scrap, bool income)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// income
		"push [ebp+12]\n\t"		// scrap
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func821::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func822
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::DoSensorsProvide", typeid(bool (ShipManager::*)(int )), "5383ec188b5424208b82000400008b401c", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipManager::DoSensorsProvide(int vision)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// vision
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func822::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func823
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::IsCrewFull", typeid(bool (ShipManager::*)()), "5331c083ec188b5c24208b5304c70424????????85d2??????89442404e8????????b901000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool ShipManager::IsCrewFull()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func823::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func824
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::IsCrewOverFull", typeid(bool (ShipManager::*)()), "5331c083ec188b5c24208b5304c70424????????85d2??????89442404e8????????837b0401", argdata, 1, 2, &func);
}

FUNC_NAKED bool ShipManager::IsCrewOverFull()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func824::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func825
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::CreateCrewDrone", typeid(CrewDrone *(ShipManager::*)(const DroneBlueprint *)), "565383ec248b5424348b5c24308b4240", argdata, 2, 2, &func);
}

FUNC_NAKED CrewDrone *ShipManager::CreateCrewDrone(const DroneBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func825::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func826
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::CreateSpaceDrone", typeid(SpaceDrone *(ShipManager::*)(const DroneBlueprint *)), "5589e557565383ec7c8b750c8b5d08c745b800000000", argdata, 2, 2, &func);
}

FUNC_NAKED SpaceDrone *ShipManager::CreateSpaceDrone(const DroneBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func826::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func827
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::CommandCrewMoveRoom", typeid(bool (ShipManager::*)(CrewMember *, int )), "83ec1c8b442428c744240c00000000c7442408ffffffff", argdata, 3, 2, &func);
}

FUNC_NAKED bool ShipManager::CommandCrewMoveRoom(CrewMember *crew, int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// roomId
		"push [ebp+12]\n\t"		// crew
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func827::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func828
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::GetSystemRoom", typeid(int (ShipManager::*)(int )), "8b4424088b54240483f8ff74??8b8a000400008b048183f8ff74??8b52188b048285c074??8b1089442404", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipManager::GetSystemRoom(int sysId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// sysId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func828::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func829
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::GetWeaponList", typeid(std::vector<ProjectileFactory*> &(*)(std::vector<ProjectileFactory*> &, ShipManager *)), "5557565383ec1c8b4424348b5c24308b9000040000837a0cff", argdata, 2, 2, &func);
}

FUNC_NAKED std::vector<ProjectileFactory*> &ShipManager::GetWeaponList(std::vector<ProjectileFactory*> &wepList, ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// wepList
	);
	__asm__("call %0\n\t" :: "m"(_func829::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func830
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::AddDrone", typeid(Drone *(ShipManager::*)(const DroneBlueprint *, int )), "57565383ec208b5c24308b7c24348b8300040000", argdata, 3, 2, &func);
}

FUNC_NAKED Drone *ShipManager::AddDrone(const DroneBlueprint *bp, int slot)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// slot
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func830::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func831
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::Restart", typeid(void (ShipManager::*)()), "5557565383ec2c8b6c24408b450485c0", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::Restart()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func831::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func832
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::GetSystemPower", typeid(int (ShipManager::*)(int )), "8b5424048b4c24088b82000400008b048883f8ff74??8b52188b048289442404e9????????8d7600b8ffffffff", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipManager::GetSystemPower(int systemId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func832::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func833
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::CountCrewShipId", typeid(int (ShipManager::*)(int , int )), "5557565383ec1c8b4424308b50648b406889c129d1c1f90285c90f84????????", argdata, 3, 2, &func);
}

FUNC_NAKED int ShipManager::CountCrewShipId(int roomId, int shipId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// shipId
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func833::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func834
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::GetSystem", typeid(ShipSystem *(ShipManager::*)(int )), "8b4424088b54240483f8ff74??8b8a000400008b048183f8ff74??8b52188b0482c38db60000000031c0", argdata, 2, 2, &func);
}

FUNC_NAKED ShipSystem *ShipManager::GetSystem(int systemId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func834::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func835
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::ExportShip", typeid(void (ShipManager::*)(int )), "5589e557565381ec1c0100008b45088b7d0c0594040000", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipManager::ExportShip(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func835::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func836
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::destructor", typeid(void (ShipManager::*)()), ".5557565383ec1c8b7c2430", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func836::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func837
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::destructor2", typeid(void (ShipManager::*)()), ".5383ec188b5c2420891c24", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::destructor2()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func837::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func838
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::ImportShip", typeid(void (ShipManager::*)(int )), "5589e557565381ec7c0200008b7d0c8d8588feffff", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipManager::ImportShip(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func838::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func839
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::CheckVision", typeid(void (ShipManager::*)()), "5557565383ec4c8b7c24608b870004000083781cff", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::CheckVision()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func839::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func840
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::IsSystemHacked", typeid(bool (ShipManager::*)(int )), "56538b5424108b4c240c83fa118b8100040000", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipManager::IsSystemHacked(int systemId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func840::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func841
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::GetSelectedCrewPoint", typeid(CrewMember *(ShipManager::*)(int , int , bool )), "5589e557565383ec3c8b7d080fb645148b4f64", argdata, 4, 2, &func);
}

FUNC_NAKED CrewMember *ShipManager::GetSelectedCrewPoint(int x, int y, bool intruder)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// intruder
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func841::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func842
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::RenderWeapons", typeid(void (ShipManager::*)()), "5589e557565383ec6c8b75088d45b0890424", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::RenderWeapons()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func842::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func843
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::ClearStatusSystem", typeid(void (ShipManager::*)(int )), "83ec1c8b4424248b54242083f811", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipManager::ClearStatusSystem(int system)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// system
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func843::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func844
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::ResetScrapLevel", typeid(void (ShipManager::*)()), "a1????????8b54240483f801c7820c0400001e000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::ResetScrapLevel()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func844::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func845
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::JumpArrive", typeid(void (ShipManager::*)()), "565383ec248b7424308b86f4030000c786c403000000000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::JumpArrive()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func845::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func846
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::CheckSpreadDamage", typeid(void (ShipManager::*)()), "5589e557565383ec5c8b7d08c745b000000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::CheckSpreadDamage()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func846::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func847
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::ForceDecreaseSystemPower", typeid(bool (ShipManager::*)(int )), "8b4424088b54240483f8ff74??8b8a000400008b048183f8ff74??8b52188b048285c074??8b10c744240801000000894424048b8284000000", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipManager::ForceDecreaseSystemPower(int sys)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// sys
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func847::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func848
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::GetShieldPower", typeid(void (*)(ShieldPower &, ShipManager *)), "8b5424088b4424048b524485d2", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipManager::GetShieldPower(ShieldPower &power, ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// power
	);
	__asm__("call %0\n\t" :: "m"(_func848::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func849
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::AddWeapon", typeid(int (ShipManager::*)(const WeaponBlueprint *, int )), "538b4424088b9000040000837a0cff", argdata, 3, 2, &func);
}

FUNC_NAKED int ShipManager::AddWeapon(const WeaponBlueprint *bp, int slot)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// slot
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func849::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func850
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff};
	static FunctionDefinition funcObj("ShipManager::AddEquipmentFromList", typeid(void (ShipManager::*)(std::vector<std::string> )), "5557565331db83ec3c8b4424548d74242c", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipManager::AddEquipmentFromList(std::vector<std::string> equipmentList)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// equipmentList
		"push [ebp+20]\n\t"		// equipmentList
		"push [ebp+16]\n\t"		// equipmentList
		"push [ebp+12]\n\t"		// equipmentList
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func850::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func851
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::RenderChargeBars", typeid(void (ShipManager::*)()), "5589e557565383ec4c8b5d088b730485f6", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::RenderChargeBars()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func851::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func852
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::ExportBattleState", typeid(void (ShipManager::*)(int )), "5557565383ec2c8b7c24408b7424448b8700040000", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipManager::ExportBattleState(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func852::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func853
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::ImportBattleState", typeid(void (ShipManager::*)(int )), "5557565383ec3c8b7424508b5c24548b8600040000", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipManager::ImportBattleState(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func853::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func854
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::SystemFunctions", typeid(bool (ShipManager::*)(int )), "8b5424048b4c24088b82000400008b048883f8ff74??8b52188b04828b10894424048b422c", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipManager::SystemFunctions(int systemId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func854::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func855
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::CanFitSystem", typeid(bool (ShipManager::*)(int )), "57565383ec108b4424248b7c242083f805", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipManager::CanFitSystem(int systemId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func855::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func856
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::CanFitSubsystem", typeid(bool (ShipManager::*)(int )), "57565383ec108b7c24208b57188b471c", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipManager::CanFitSubsystem(int systemId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func856::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func857
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::DamageHull", typeid(int (ShipManager::*)(int , bool )), "565383ec148b5c24208b7424288b03891c24", argdata, 3, 2, &func);
}

FUNC_NAKED int ShipManager::DamageHull(int dmg, bool force)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// force
		"push [ebp+12]\n\t"		// dmg
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func857::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func858
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0xdff};
	static FunctionDefinition funcObj("ShipManager::DamageSystem", typeid(void (ShipManager::*)(int , DamageParameter )), "5589e557565383ec6c8b45248b7d088b5d10", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipManager::DamageSystem(int systemId, DamageParameter damage)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+64]\n\t"		// damage
		"push [ebp+60]\n\t"		// damage
		"push [ebp+56]\n\t"		// damage
		"push [ebp+52]\n\t"		// damage
		"push [ebp+48]\n\t"		// damage
		"push [ebp+44]\n\t"		// damage
		"push [ebp+40]\n\t"		// damage
		"push [ebp+36]\n\t"		// damage
		"push [ebp+32]\n\t"		// damage
		"push [ebp+28]\n\t"		// damage
		"push [ebp+24]\n\t"		// damage
		"push [ebp+20]\n\t"		// damage
		"push [ebp+16]\n\t"		// damage
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func858::func));
	__asm__
	(
		"add esp, 60\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 60\n\t"
	);
}

namespace _func859
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::StartFire", typeid(void (ShipManager::*)(int )), "83ec1c8b442424c74424080200000089442404", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipManager::StartFire(int roomId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// roomId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func859::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func860
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::FindCrew", typeid(CrewMember *(ShipManager::*)(const CrewBlueprint *)), "5557565383ec3c8d44242089442404c744240c00000000", argdata, 2, 2, &func);
}

FUNC_NAKED CrewMember *ShipManager::FindCrew(const CrewBlueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func860::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func861
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::GetDodged", typeid(bool (ShipManager::*)()), "57565383ec208b5c2430807b1000", argdata, 1, 2, &func);
}

FUNC_NAKED bool ShipManager::GetDodged()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func861::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func862
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::PrepareSuperBarrage", typeid(void (ShipManager::*)()), "5589e557565383ec7c8b7d088b87c0030000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipManager::PrepareSuperBarrage()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func862::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func863
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipManager::RestoreCrewPositions", typeid(bool (ShipManager::*)()), "5589e557565383ec6c8d45a8", argdata, 1, 2, &func);
}

FUNC_NAKED bool ShipManager::RestoreCrewPositions()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func863::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func864
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipManager::GetCrewmember", typeid(CrewMember *(ShipManager::*)(int , bool )), "555731ff565331db83ec1c8b7424308b4e688b4664", argdata, 3, 2, &func);
}

FUNC_NAKED CrewMember *ShipManager::GetCrewmember(int slot, bool present)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// present
		"push [ebp+12]\n\t"		// slot
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func864::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func865
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipObject::HasAugmentation", typeid(int (ShipObject::*)(const std::string &)), "5589e557565383ec6c8b450c894424048d45c8890424e8????????8b45088b400485c00f94??0fb6c06bc0348945a8a1????????0145a88b55a8", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipObject::HasAugmentation(const std::string &augment)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// augment
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func865::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func866
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipObject::GetAugmentationValue", typeid(float (ShipObject::*)(const std::string &)), "5589e557565383ec7c8b450c894424048d45b8890424", argdata, 2, 2, &func);
}

FUNC_NAKED float ShipObject::GetAugmentationValue(const std::string &augment)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// augment
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func866::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func867
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipObject::RemoveAugmentation", typeid(void (ShipObject::*)(const std::string &)), ".5589e557565383ec7c8b450c894424048d45b8890424", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipObject::RemoveAugmentation(const std::string &augment)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// augment
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func867::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func868
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipObject::HasEquipment", typeid(int (ShipObject::*)(const std::string &)), "5589e557565383ec7c8b5d0c8d45c8", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipObject::HasEquipment(const std::string &equip)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// equip
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func868::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func869
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipObject::GetAugmentationList", typeid(std::map<std::string, int> &(*)(std::vector<std::string> &, ShipObject *)), "5557565383ec1c8b4424348b5c24308b4004", argdata, 2, 2, &func);
}

FUNC_NAKED std::map<std::string, int> &ShipObject::GetAugmentationList(std::vector<std::string> &vec, ShipObject *shipObj)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// shipObj
		"push [ebp+8]\n\t"		// vec
	);
	__asm__("call %0\n\t" :: "m"(_func869::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func870
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipObject::AddAugmentation", typeid(bool (ShipObject::*)(const std::string &)), "5589e557565381ec8c0000008b450c894424048d45b8890424", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipObject::AddAugmentation(const std::string &augment)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// augment
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func870::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func871
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipObject::GetAugmentationCount", typeid(int (ShipObject::*)()), "8b4424048b400485c00f94??0fb6c06bc034", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipObject::GetAugmentationCount()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func871::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func872
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipObject::ClearShipInfo", typeid(void (ShipObject::*)()), "5331db83ec188b4424208b400485c0", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipObject::ClearShipInfo()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func872::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func873
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSelect::SelectShip", typeid(void (ShipSelect::*)(int )), "5383ec188b5424248b5c242085d2", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipSelect::SelectShip(int shipType)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// shipType
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func873::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func874
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSelect::constructor", typeid(void (ShipSelect::*)()), "565383ec248b5c24308d74241fc74424086e000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipSelect::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func874::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func875
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSelect::ClearShipButtons", typeid(int (ShipSelect::*)()), "565383ec148b7424208b4e208b561c89c829d083f8037e??31db8db600000000", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipSelect::ClearShipButtons()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func875::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func876
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSelect::MouseMove", typeid(void (ShipSelect::*)(int , int )), "5589e557565381ecac0000008b450880b84404000000", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipSelect::MouseMove(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func876::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func877
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSelect::OnLoop", typeid(void (ShipSelect::*)()), "5589e557565381ecac0000008b5d0880bb4404000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipSelect::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func877::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func878
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSelect::KeyDown", typeid(int (ShipSelect::*)(SDLKey )), "8b442404054004000089442404", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipSelect::KeyDown(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func878::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func879
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSelect::MouseClick", typeid(void (ShipSelect::*)()), "5383ec188b5c242080bb4404000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipSelect::MouseClick()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func879::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func880
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSelect::PreSelectShip", typeid(void (ShipSelect::*)(int )), "5383ec188b5424248b5c242085d2", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipSelect::PreSelectShip(int shipType)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// shipType
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func880::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func881
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSelect::Close", typeid(void (ShipSelect::*)()), "!8b442404c64034000540040000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipSelect::Close()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func881::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func882
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSelect::GetSelectedShip", typeid(int (ShipSelect::*)()), ".8b4424048b4038", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipSelect::GetSelectedShip()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func882::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func883
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSelect::Open", typeid(void (ShipSelect::*)(int , int )), "5589e557565381ec8c0100008b4508833d????????02", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipSelect::Open(int currentId, int currentType)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// currentType
		"push [ebp+12]\n\t"		// currentId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func883::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func884
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSelect::OnRender", typeid(void (ShipSelect::*)()), "5589e557565383ec5c8b5d0880bb4404000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipSelect::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func884::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func885
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipStatus::RenderHealth", typeid(void (ShipStatus::*)(bool )), "5589e557565381ec8c0000008b5d08807d0c00", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipStatus::RenderHealth(bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func885::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func886
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("ShipStatus::OnInit", typeid(void (ShipStatus::*)(Point , float )), "5557565381ec2c0100008bac24400100008d9c2400010000", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipStatus::OnInit(Point unk, float unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk2
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func886::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func887
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipStatus::RenderEvadeOxygen", typeid(void (ShipStatus::*)(bool )), "5589e557565381ecfc0100008b7d08807d0c008b470c890424", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipStatus::RenderEvadeOxygen(bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func887::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func888
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipStatus::OnRender", typeid(void (ShipStatus::*)()), "5589e557565381ec8c0000008b5d08e8????????c744240800000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipStatus::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func888::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func889
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipStatus::RenderShields", typeid(void (ShipStatus::*)(bool )), "807c2408008b44240474??", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipStatus::RenderShields(bool renderText)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// renderText
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func889::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func890
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::DamageOverTime", typeid(bool (ShipSystem::*)(float )), "565383ec14c70424????????8b5c2420", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipSystem::DamageOverTime(float unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func890::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func891
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::CheckForRepower", typeid(void (ShipSystem::*)()), "5557565383ec1c8b5c24308b432c", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipSystem::CheckForRepower()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func891::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func892
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::NameToSystemId", typeid(int (*)(const std::string &)), ".5383ec188b5c2420c7442404????????891c24e8????????85c075??83c4185b", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipSystem::NameToSystemId(const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// name
	);
	__asm__("call %0\n\t" :: "m"(_func892::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func893
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::IsMannedBoost", typeid(int (ShipSystem::*)()), "8b5424048b423485c0", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipSystem::IsMannedBoost()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func893::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func894
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::SystemIdToName", typeid(std::string &(*)(std::string &, int )), "5383ec288b4424348b5c243083f811", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &ShipSystem::SystemIdToName(std::string &strRef, int systemId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func894::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func895
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::OnLoop", typeid(void (ShipSystem::*)()), "565383ec148b7424208b8614010000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipSystem::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func895::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func896
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::Ioned", typeid(bool (ShipSystem::*)(int )), "555756538b5424148b8214010000", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipSystem::Ioned(int num)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// num
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func896::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func897
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::SetPowerLoss", typeid(int (ShipSystem::*)(int )), "5383ec188b5c24208b44242489830c010000", argdata, 2, 2, &func);
}

FUNC_NAKED int ShipSystem::SetPowerLoss(int power)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// power
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func897::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func898
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::constructor", typeid(void (ShipSystem::*)(int , int , int , int )), "5589e557565381ec9c0100008b75088b45148dbdf8feffff", argdata, 5, 6, &func);
}

FUNC_NAKED void ShipSystem::constructor(int systemId, int roomId, int shipId, int startingPower)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// startingPower
		"push [ebp+20]\n\t"		// shipId
		"push [ebp+16]\n\t"		// roomId
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func898::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func899
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::GetPowerCap", typeid(int (ShipSystem::*)()), "8b54240431c08b8a0801000083f907", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipSystem::GetPowerCap()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func899::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func900
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::SetPowerCap", typeid(void (ShipSystem::*)(int )), "5383ec188b5c24208b442424898308010000", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipSystem::SetPowerCap(int cap)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// cap
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func900::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func901
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::LockSystem", typeid(void (ShipSystem::*)(int )), "8b5424088b44240483fa00", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipSystem::LockSystem(int lock)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// lock
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func901::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func902
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::ForceDecreasePower", typeid(bool (ShipSystem::*)(int )), "5557565383ec2c8b6c24408b5c2444", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipSystem::ForceDecreasePower(int powerLoss)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// powerLoss
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func902::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func903
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::GetEffectivePower", typeid(int (ShipSystem::*)()), "8b54240431c98b423485c0", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipSystem::GetEffectivePower()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func903::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func904
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::GetMaxPower", typeid(int (ShipSystem::*)()), "538b5424088b4a408b82ec000000", argdata, 1, 2, &func);
}

FUNC_NAKED int ShipSystem::GetMaxPower()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func904::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func905
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::SetBonusPower", typeid(void (ShipSystem::*)(int , int )), "57565383ec108b5c24208b7424248b7c242880bb0401000000", argdata, 3, 6, &func);
}

FUNC_NAKED void ShipSystem::SetBonusPower(int amount, int permanentPower)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// permanentPower
		"push [ebp+12]\n\t"		// amount
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func905::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func906
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::CheckMaxPower", typeid(void (ShipSystem::*)()), "5557565383ec2c8b7c244080bf0401000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipSystem::CheckMaxPower()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func906::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func907
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::PartialDamage", typeid(bool (ShipSystem::*)(float )), "565383ec14c70424????????8b5c2420", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipSystem::PartialDamage(float amount)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// amount
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func907::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func908
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::IsSubsystem", typeid(bool (*)(int )), "8b44240483f80c", argdata, 1, 2, &func);
}

FUNC_NAKED bool ShipSystem::IsSubsystem(int systemType)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// systemType
	);
	__asm__("call %0\n\t" :: "m"(_func908::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func909
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::ClearStatus", typeid(void (ShipSystem::*)()), "8b44240483b80801000007", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipSystem::ClearStatus()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func909::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func910
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::GetLevelDescription", typeid(void (*)(std::string &, int , int , bool )), "5589e557565381ec3c0100008b450c8b7510", argdata, 4, 6, &func);
}

FUNC_NAKED void ShipSystem::GetLevelDescription(std::string &retStr, int systemId, int level, bool tooltip)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// tooltip
		"push [ebp+16]\n\t"		// level
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// retStr
	);
	__asm__("call %0\n\t" :: "m"(_func910::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func911
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::AddLock", typeid(void (ShipSystem::*)(int )), "538b5424088b4c240c8b8214010000", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipSystem::AddLock(int lock)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// lock
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func911::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func912
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::GetLocked", typeid(bool (ShipSystem::*)()), "8b4424048b901401000083faff", argdata, 1, 2, &func);
}

FUNC_NAKED bool ShipSystem::GetLocked()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func912::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func913
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("ShipSystem::StopHacking", typeid(void (ShipSystem::*)()), ".83ec1c8b4424208b10c6808401000000", argdata, 1, 6, &func);
}

FUNC_NAKED void ShipSystem::StopHacking()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func913::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func914
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::SaveState", typeid(void (ShipSystem::*)(int )), "565383ec148b7424208b5c24248b8608010000", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipSystem::SaveState(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func914::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func915
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::LoadState", typeid(void (ShipSystem::*)(int )), "565383ec148b7424248b5c2420893424e8????????898308010000", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipSystem::LoadState(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func915::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func916
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::UpgradeSystem", typeid(bool (ShipSystem::*)(int )), "565383ec148b5c24208b7424248b03891c24ff5010", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipSystem::UpgradeSystem(int amount)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// amount
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func916::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func917
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::IncreasePower", typeid(bool (ShipSystem::*)(int , bool )), "565383ec148b5c24208b7424288b8314010000", argdata, 3, 2, &func);
}

FUNC_NAKED bool ShipSystem::IncreasePower(int amount, bool force)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// force
		"push [ebp+12]\n\t"		// amount
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func917::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func918
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::DecreasePower", typeid(bool (ShipSystem::*)(bool )), "565383ec148b5c24208b7424240fb68304010000", argdata, 2, 2, &func);
}

FUNC_NAKED bool ShipSystem::DecreasePower(bool force)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// force
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func918::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func919
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::PartialRepair", typeid(bool (ShipSystem::*)(float , bool )), "5631c05383ec148b5c24208b7424288b93f0000000", argdata, 3, 2, &func);
}

FUNC_NAKED bool ShipSystem::PartialRepair(float speed, bool autoRepair)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// autoRepair
		"push [ebp+12]\n\t"		// speed
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func919::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func920
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::RenderPowerBoxes", typeid(void (ShipSystem::*)(int , int , int , int , int , int , bool )), "5557565381ec8c0000008bac24a00000000fb68424bc000000", argdata, 8, 6, &func);
}

FUNC_NAKED void ShipSystem::RenderPowerBoxes(int x, int y, int width, int height, int gap, int heightMod, bool flash)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+36]\n\t"		// flash
		"push [ebp+32]\n\t"		// heightMod
		"push [ebp+28]\n\t"		// gap
		"push [ebp+24]\n\t"		// height
		"push [ebp+20]\n\t"		// width
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func920::func));
	__asm__
	(
		"add esp, 32\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 32\n\t"
	);
}

namespace _func921
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("ShipSystem::AddDamage", typeid(void (ShipSystem::*)(int )), "56538b44240c8b88f00000008b90ec000000", argdata, 2, 6, &func);
}

FUNC_NAKED void ShipSystem::AddDamage(int amount)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// amount
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func921::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func922
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SoundControl::PlaySoundMix", typeid(int (SoundControl::*)(const std::string &, float , char )), "5589e557565383ec7c8b45148b5508", argdata, 4, 2, &func);
}

FUNC_NAKED int SoundControl::PlaySoundMix(const std::string &soundName, float volume, char loop)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// loop
		"push [ebp+16]\n\t"		// volume
		"push [ebp+12]\n\t"		// soundName
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func922::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func923
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SoundControl::StopPlaylist", typeid(void (SoundControl::*)(int )), "5557565383ec2c8b742440803e00", argdata, 2, 6, &func);
}

FUNC_NAKED void SoundControl::StopPlaylist(int fadeOut)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// fadeOut
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func923::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func924
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SoundControl::StartPlaylist", typeid(void (SoundControl::*)(std::vector<std::string> &)), "5557565383ec3c8b442450803800", argdata, 2, 6, &func);
}

FUNC_NAKED void SoundControl::StartPlaylist(std::vector<std::string> &playlist)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// playlist
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func924::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func925
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceDrone::UpdateAimingAngle", typeid(float (SpaceDrone::*)(Pointf , float , float )), "5589e5565383ec408b5d088b450c8b5510f30f105d14", argdata, 4, 2, &func);
}

FUNC_NAKED float SpaceDrone::UpdateAimingAngle(Pointf location, float percentage, float forceDesired)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// forceDesired
		"push [ebp+20]\n\t"		// percentage
		"push [ebp+16]\n\t"		// location
		"push [ebp+12]\n\t"		// location
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func925::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func926
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceDrone::SetDeployed", typeid(void (SpaceDrone::*)(bool )), "565383ec148b5c24208b7424248b03891c24ff503084c074??", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceDrone::SetDeployed(bool deployed)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// deployed
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func926::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func927
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceDrone::SetMovementTarget", typeid(void (SpaceDrone::*)(Targetable *)), "565383ec148b7424248b5c242085f674??8b06", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceDrone::SetMovementTarget(Targetable *target)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// target
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func927::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func928
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::constructor", typeid(void (SpaceManager::*)()), "57565383ec108b5c24208d430cc70300000000", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func928::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func929
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::GetScreenShake", typeid(int (SpaceManager::*)()), "8b5424040fb68274030000", argdata, 1, 2, &func);
}

FUNC_NAKED int SpaceManager::GetScreenShake()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func929::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func930
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::SaveSpace", typeid(void (SpaceManager::*)(int )), "57565383ec108b7424208b7c24240fb68674020000", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceManager::SaveSpace(int fileHelper)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// fileHelper
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func930::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func931
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::SwitchBeacon", typeid(void (SpaceManager::*)()), "8b5424088b4424048b8ad4020000", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::SwitchBeacon()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func931::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func932
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::SwitchPlanet", typeid(void (*)(ImageDesc *, SpaceManager *, const std::string &)), "5589e557565381ec8c0000008b4510c7442404????????", argdata, 3, 6, &func);
}

FUNC_NAKED void SpaceManager::SwitchPlanet(ImageDesc *ret, SpaceManager *space, const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// name
		"push [ebp+12]\n\t"		// space
		"push [ebp+8]\n\t"		// ret
	);
	__asm__("call %0\n\t" :: "m"(_func932::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func933
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::UpdatePlanetImage", typeid(void (SpaceManager::*)()), "565383ec548b5c24608b83bc000000", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::UpdatePlanetImage()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func933::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func934
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x7ff, 0x7ff, 0x7ff};
	static FunctionDefinition funcObj("SpaceManager::SwitchImages", typeid(void (SpaceManager::*)(ImageDesc , ImageDesc , ImageDesc )), "565383ec548b5c24608b5424688b842480000000", argdata, 4, 6, &func);
}

FUNC_NAKED void SpaceManager::SwitchImages(ImageDesc planet, ImageDesc unk1, ImageDesc unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+92]\n\t"		// unk2
		"push [ebp+88]\n\t"		// unk2
		"push [ebp+84]\n\t"		// unk2
		"push [ebp+80]\n\t"		// unk2
		"push [ebp+76]\n\t"		// unk2
		"push [ebp+72]\n\t"		// unk2
		"push [ebp+68]\n\t"		// unk2
		"push [ebp+64]\n\t"		// unk1
		"push [ebp+60]\n\t"		// unk1
		"push [ebp+56]\n\t"		// unk1
		"push [ebp+52]\n\t"		// unk1
		"push [ebp+48]\n\t"		// unk1
		"push [ebp+44]\n\t"		// unk1
		"push [ebp+40]\n\t"		// unk1
		"push [ebp+36]\n\t"		// planet
		"push [ebp+32]\n\t"		// planet
		"push [ebp+28]\n\t"		// planet
		"push [ebp+24]\n\t"		// planet
		"push [ebp+20]\n\t"		// planet
		"push [ebp+16]\n\t"		// planet
		"push [ebp+12]\n\t"		// planet
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func934::func));
	__asm__
	(
		"add esp, 88\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 88\n\t"
	);
}

namespace _func935
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::SwitchBackground", typeid(void (*)(ImageDesc *, SpaceManager *, const std::string &)), "5589e557565383ec3c8b450c8b7d08", argdata, 3, 6, &func);
}

FUNC_NAKED void SpaceManager::SwitchBackground(ImageDesc *ret, SpaceManager *space, const std::string &name)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// name
		"push [ebp+12]\n\t"		// space
		"push [ebp+8]\n\t"		// ret
	);
	__asm__("call %0\n\t" :: "m"(_func935::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func936
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::StartAsteroids", typeid(void (SpaceManager::*)(int , bool )), "5383ec280fb64424388d5c241c", argdata, 3, 6, &func);
}

FUNC_NAKED void SpaceManager::StartAsteroids(int shieldCount, bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk
		"push [ebp+12]\n\t"		// shieldCount
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func936::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func937
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::SetPlanetaryDefense", typeid(void (SpaceManager::*)(char , int )), "5589e557565381ec9c0000008b5d088b4510", argdata, 3, 6, &func);
}

FUNC_NAKED void SpaceManager::SetPlanetaryDefense(char state, int target)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// target
		"push [ebp+12]\n\t"		// state
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func937::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func938
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::SetPulsarLevel", typeid(void (SpaceManager::*)(bool )), "5557565383ec2c8b7424408d7c241a8b4424448d9ea4020000888675020000", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceManager::SetPulsarLevel(bool pulsarLevel)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// pulsarLevel
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func938::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func939
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::DangerousEnvironment", typeid(bool (SpaceManager::*)()), "8b5424040fb68a8402000084c9", argdata, 1, 2, &func);
}

FUNC_NAKED bool SpaceManager::DangerousEnvironment()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func939::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func940
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::MouseMove", typeid(void (SpaceManager::*)(int , int , int )), "5531ed57565383ec1c8b7424308b7c24348b5c243c", argdata, 4, 6, &func);
}

FUNC_NAKED void SpaceManager::MouseMove(int x, int y, int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func940::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func941
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::GetSelectedDrone", typeid(SpaceDrone *(SpaceManager::*)(int , int , int )), "5557565383ec1c8b6c24308b74243c8b85a8000000", argdata, 4, 2, &func);
}

FUNC_NAKED SpaceDrone *SpaceManager::GetSelectedDrone(int x, int y, int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func941::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func942
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::GetFlashOpacity", typeid(float (SpaceManager::*)()), "5383ec18a1????????8b542420", argdata, 1, 2, &func);
}

FUNC_NAKED float SpaceManager::GetFlashOpacity()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func942::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func943
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::GetColorTint", typeid(GL_Color *(SpaceManager::*)()), "8b5424088b4424040f2805????????80ba4c03000000", argdata, 1, 2, &func);
}

FUNC_NAKED GL_Color *SpaceManager::GetColorTint()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func943::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func944
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::OnRenderBackground", typeid(void (SpaceManager::*)()), "565383ec448b7424500f2805????????", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::OnRenderBackground()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func944::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func945
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::OnRenderFleet", typeid(void (SpaceManager::*)()), "57565383ec508b7c2460", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::OnRenderFleet()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func945::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func946
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::OnRenderForeground", typeid(void (SpaceManager::*)()), "5557565383ec6c8b9c24800000000f2805????????", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::OnRenderForeground()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func946::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func947
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::SetDangerZone", typeid(void (SpaceManager::*)(int )), "5557565383ec3c8b4424548b7c245085c0", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceManager::SetDangerZone(int fleetType)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// fleetType
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func947::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func948
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::OnRenderAsteroids", typeid(void (SpaceManager::*)(int , float )), "57565383ec308b7c24408b74244480bf9400000000", argdata, 3, 6, &func);
}

FUNC_NAKED void SpaceManager::OnRenderAsteroids(int fieldLayers, float unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk2
		"push [ebp+12]\n\t"		// fieldLayers
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func948::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func949
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::OnRenderProjectiles", typeid(void (SpaceManager::*)(int , int )), "5557565383ec4c8b7c24688b4424648b5c2460", argdata, 3, 6, &func);
}

FUNC_NAKED void SpaceManager::OnRenderProjectiles(int unk1, int unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk2
		"push [ebp+12]\n\t"		// unk1
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func949::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func950
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::OnInit", typeid(void (SpaceManager::*)()), "5589e557565383ec5c8b75088d5de4", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::OnInit()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func950::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func951
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::Restart", typeid(void (SpaceManager::*)()), ".57565383ec108b7424208b168b4604", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::Restart()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func951::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func952
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::ClearEnvironment", typeid(void (SpaceManager::*)()), "8b442404c6807402000000c6807502000000", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::ClearEnvironment()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func952::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func953
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::Clear", typeid(void (SpaceManager::*)()), "57565383ec108b5c24208b839c000000", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::Clear()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func953::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func954
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::ClearProjectiles", typeid(void (SpaceManager::*)()), ".57565383ec108b7424208b168b4604", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::ClearProjectiles()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func954::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func955
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::UpdateProjectile", typeid(void (SpaceManager::*)(Projectile *)), "555731ff565383ec1c8b5c24348b7424308b03", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceManager::UpdateProjectile(Projectile *proj)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// proj
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func955::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func956
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::TransferProjectile", typeid(void (SpaceManager::*)(Projectile *)), "565383ec148b5c24248b038b7370", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceManager::TransferProjectile(Projectile *proj)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// proj
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func956::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func957
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::AddShip", typeid(void (SpaceManager::*)(ShipManager *)), "5589e557565383ec2c8b5d088b83a00000003b83a4000000", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceManager::AddShip(ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func957::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func958
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::AddProjectile", typeid(void (SpaceManager::*)(Projectile *)), "83ec1c8b4424208b50043b5008", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceManager::AddProjectile(Projectile *proj)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// proj
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func958::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func959
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::LoadSpace", typeid(void (SpaceManager::*)(int )), "5589e557565383ec3c8b450c8b7508890424", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceManager::LoadSpace(int fileHelper)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// fileHelper
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func959::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func960
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::UpdatePDS", typeid(void (SpaceManager::*)()), "5589e5575631f65381ec0c010000", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::UpdatePDS()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func960::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func961
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::OnLoopNebulas", typeid(void (SpaceManager::*)()), "5557565331db81ec8c0000008b8424a00000008bbc24a0000000", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::OnLoopNebulas()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func961::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func962
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SpaceManager::OnLoop", typeid(void (SpaceManager::*)()), "5589e557565383ec6c8b75088d860c030000890424", argdata, 1, 6, &func);
}

FUNC_NAKED void SpaceManager::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func962::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func963
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::SetNebula", typeid(void (SpaceManager::*)(bool )), "5557565381ec9c0000008b9c24b00000008b8424b4000000", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceManager::SetNebula(bool state)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// state
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func963::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func964
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::SetStorm", typeid(void (SpaceManager::*)(bool )), "5383ec288b4424308d5c241cc6802a03000001", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceManager::SetStorm(bool state)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// state
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func964::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func965
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SpaceManager::SetFireLevel", typeid(void (SpaceManager::*)(bool )), "5557565383ec2c8b7424408d7c241a8b4424448d9ea4020000888674020000", argdata, 2, 6, &func);
}

FUNC_NAKED void SpaceManager::SetFireLevel(bool state)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// state
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func965::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func966
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("StarMap::SetPosition", typeid(void (StarMap::*)(Point )), "8b4c24048b4424088b54240c89415c", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::SetPosition(Point unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk0
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func966::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func967
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::KeyDown", typeid(void (StarMap::*)(int )), "56538b74240c80be8406000000", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::KeyDown(int unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func967::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func968
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::GetNextDangerMove", typeid(int (StarMap::*)()), "5631c0538b54240c83ba800000003b", argdata, 1, 2, &func);
}

FUNC_NAKED int StarMap::GetNextDangerMove()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func968::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func969
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::Open", typeid(void (StarMap::*)()), "5383ec188b5c2420807b040074??83c418", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::Open()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func969::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func970
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::Close", typeid(void (StarMap::*)()), "565383ec248b74243080be3406000000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::Close()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func970::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func971
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::SetOpen", typeid(void (StarMap::*)(bool )), "8b442404807c2408008b1075??", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::SetOpen(bool unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func971::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func972
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::InitMapTitle", typeid(void (StarMap::*)()), "5589e557565381ec8c0000008b45088d75d88d5dcc", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::InitMapTitle()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func972::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func973
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::InitNoFuelText", typeid(void (StarMap::*)()), "5557565383ec5c8b6c24708d5c24408d7c243f8b8568040000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::InitNoFuelText()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func973::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func974
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::InitBossMessageBox", typeid(void (StarMap::*)()), "5589e557565383ec3c8b5d088bb3cc050000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::InitBossMessageBox()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func974::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func975
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::OnLanguageChange", typeid(void (StarMap::*)()), "5383ec188b5c2420891c24e8????????891c24e8????????895c2420", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::OnLanguageChange()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func975::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func976
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::GetRandomSectorChoice", typeid(int (StarMap::*)()), "83ec0c803d????????0075??e8????????89c1", argdata, 1, 2, &func);
}

FUNC_NAKED int StarMap::GetRandomSectorChoice()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func976::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func977
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::NeighboringSector", typeid(void (StarMap::*)(int )), "5631c0538b5c24108b4c240c85db", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::NeighboringSector(int unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func977::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func978
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::GetSelectedSector", typeid(void (StarMap::*)(int , int , int )), "5557565383ec2c8b6c24408b5424488b4424448b5c244c", argdata, 4, 6, &func);
}

FUNC_NAKED void StarMap::GetSelectedSector(int unk0, int unk1, int unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk2
		"push [ebp+16]\n\t"		// unk1
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func978::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func979
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::StartSecretSector", typeid(void (StarMap::*)()), "5383ec288b4424308d5c241c8b9080060000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::StartSecretSector()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func979::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func980
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::ReachSector", typeid(void (StarMap::*)(Sector *)), "5557565383ec5c8b7c24748b442474", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::ReachSector(Sector *unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func980::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func981
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::UpdateSectorMap", typeid(void (StarMap::*)(Sector *)), "5756538b7c24148b74241085ff", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::UpdateSectorMap(Sector *unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func981::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func982
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::SaveGame", typeid(void (StarMap::*)(int )), "5557565383ec3c8b6c24508b5c24548b857c060000", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::SaveGame(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func982::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func983
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::InitStatistics", typeid(void (StarMap::*)()), ".f3c38db426000000008dbc2700000000f3c38db4", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::InitStatistics()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func983::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func984
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::PrintStatistics", typeid(void (StarMap::*)()), ".f3c38db426000000008dbc2700000000f3c38db4", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::PrintStatistics()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func984::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func985
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::AnalyzeMap", typeid(void (StarMap::*)()), ".f3c38db426000000008dbc27000000008b442404", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::AnalyzeMap()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func985::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func986
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::ModifyPursuit", typeid(void (StarMap::*)(int )), "8b4424048b542408019020040000", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::ModifyPursuit(int unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func986::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func987
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::AtBeacon", typeid(void (StarMap::*)()), "8b4424048b40500fb64014", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::AtBeacon()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func987::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func988
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::GetWaitLocation", typeid(void (StarMap::*)()), "8b44240480787c00", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::GetWaitLocation()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func988::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func989
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::StartBeacon", typeid(void (StarMap::*)()), "5631c0538b54240c8b8a18040000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::StartBeacon()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func989::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func990
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::LocationsConnected", typeid(void (StarMap::*)(Location *, Location *)), "538b44240c8b5c24108b48088b500c", argdata, 3, 6, &func);
}

FUNC_NAKED void StarMap::LocationsConnected(Location *unk0, Location *unk1)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk1
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func990::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func991
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::PointToGrid", typeid(void (StarMap::*)(float , float )), "5383ec18f30f1005????????f30f104c242c", argdata, 3, 6, &func);
}

FUNC_NAKED void StarMap::PointToGrid(float unk0, float unk1)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk1
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func991::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func992
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::TravelToLocation", typeid(void (StarMap::*)(Location *)), "538b44240c8b54240880787c00", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::TravelToLocation(Location *unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func992::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func993
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::ForceExitBeacon", typeid(void (StarMap::*)()), "8b4424048b4050c6401401", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::ForceExitBeacon()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func993::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func994
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::OnRenderFogEffect", typeid(void (StarMap::*)()), ".f3c38db426000000008dbc27000000005631c0", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::OnRenderFogEffect()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func994::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func995
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::LocationHasBoss", typeid(void (StarMap::*)(Location *)), "5631c0538b54240c8b742410", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::LocationHasBoss(Location *unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func995::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func996
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::LocationHasStore", typeid(void (StarMap::*)(Location *)), "56538b5424108b4c240c8b422085c0", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::LocationHasStore(Location *unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func996::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func997
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::LocationHasShip", typeid(void (StarMap::*)(Location *)), "8b4424088b402085c0", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::LocationHasShip(Location *unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func997::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func998
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::AdvanceWorldLevel", typeid(void (StarMap::*)()), "5557565383ec5c8b7424708b8618040000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::AdvanceWorldLevel()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func998::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func999
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::ReverseBossPath", typeid(void (StarMap::*)()), "56538b5c240c8b8bc4070000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::ReverseBossPath()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func999::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1000
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::ForceBossJump", typeid(void (StarMap::*)()), "5756538b5c241080bbbc07000000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::ForceBossJump()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1000::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1001
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::ClearBoss", typeid(void (StarMap::*)()), "565331db83ec148b7424208b56208b4624c686cc07000000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::ClearBoss()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1001::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1002
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::SetBossStage", typeid(void (StarMap::*)(int )), "8b5424088b4424048990f4080000", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::SetBossStage(int stage)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// stage
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1002::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1003
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::CheckGameOver", typeid(void (StarMap::*)()), "8b54240431c083bab807000004", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::CheckGameOver()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1003::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1004
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::RenderLabels", typeid(void (StarMap::*)()), "5589e557565381eccc0000008b7508e8????????", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::RenderLabels()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1004::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1005
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::DeleteMap", typeid(void (StarMap::*)()), "5557565383ec2c8b7424408bbee8080000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::DeleteMap()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1005::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1006
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::MouseClick", typeid(void (StarMap::*)(int , int )), "5557565383ec2c8b5c244080bb3005000000", argdata, 3, 6, &func);
}

FUNC_NAKED void StarMap::MouseClick(int unk0, int unk1)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk1
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1006::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1007
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::AddSectorColumn", typeid(void (StarMap::*)()), "5589e557565381ecdc0000008b75088b9ee4070000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::AddSectorColumn()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1007::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1008
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::PushSectorColumn", typeid(void (StarMap::*)()), "5557565331db83ec1c8b7c24308b8f74060000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::PushSectorColumn()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1008::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1009
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::SelectNewSector", typeid(void (StarMap::*)(int )), "57565383ec108b7424208b442424", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::SelectNewSector(int unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1009::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1010
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::GenerateSectorMap", typeid(void (StarMap::*)()), "5589e557565381ecbc0000008b5d088b8b74060000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::GenerateSectorMap()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1010::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1011
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::constructor", typeid(void (StarMap::*)()), "5589e557565381ec7c0100008b7d088d9d28ffffff", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1011::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1012
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x4ff};
	static FunctionDefinition funcObj("StarMap::RenderSectorName", typeid(void (StarMap::*)(Sector *, GL_Color )), "5589e557565381ec2c0100008b450c80787000", argdata, 3, 6, &func);
}

FUNC_NAKED void StarMap::RenderSectorName(Sector *unk0, GL_Color unk1)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// unk1
		"push [ebp+24]\n\t"		// unk1
		"push [ebp+20]\n\t"		// unk1
		"push [ebp+16]\n\t"		// unk1
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1012::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func1013
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::UpdateDangerZone", typeid(void (StarMap::*)()), "565383ec448b5c245080bb3406000000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::UpdateDangerZone()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1013::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1014
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::GetNewLocation", typeid(Location *(StarMap::*)()), "5731c0565383ec108b7c2420807f7c00", argdata, 1, 2, &func);
}

FUNC_NAKED Location *StarMap::GetNewLocation()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1014::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1015
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::OnLoop", typeid(void (StarMap::*)()), ".5589e557565383ec3c8b7d08807f0400", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1015::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1016
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::GenerateEvents", typeid(void (StarMap::*)(bool )), "5557565381ecdc0000008b8424f400000089442420", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::GenerateEvents(bool tutorial)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// tutorial
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1016::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1017
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::AddConnections", typeid(void (StarMap::*)(Location *)), "5589e557565383ec5c8b7d088d870c090000", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::AddConnections(Location *unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1017::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1018
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::MapConnected", typeid(void (StarMap::*)()), "5383ec188b5c24208b831009000089442404", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::MapConnected()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1018::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1019
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x2ff};
	static FunctionDefinition funcObj("StarMap::ConnectLocations", typeid(void (StarMap::*)(Point , Point )), "5589e557565383ec3c8b75088d45e48d7d0c", argdata, 3, 6, &func);
}

FUNC_NAKED void StarMap::ConnectLocations(Point unk0, Point unk1)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// unk1
		"push [ebp+20]\n\t"		// unk1
		"push [ebp+16]\n\t"		// unk0
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1019::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1020
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("StarMap::PopulateGrid", typeid(void (StarMap::*)(Point )), "5589e557565383ec6c8b5d088d4d0c", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::PopulateGrid(Point unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// unk0
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1020::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1021
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::PopClosestLoc", typeid(Location *(StarMap::*)(std::vector<Location*> &, std::map<Location*, int> &)), "5589e557565383ec5c8b750c8b46048b3e", argdata, 3, 2, &func);
}

FUNC_NAKED Location *StarMap::PopClosestLoc(std::vector<Location*> &vec, std::map<Location*, int> &map)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// map
		"push [ebp+12]\n\t"		// vec
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1021::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1022
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::Dijkstra0", typeid(void (*)(std::vector<Location*> &, StarMap *, Location *, Location *)), "5589e5575631f65381ecec000000", argdata, 4, 6, &func);
}

FUNC_NAKED void StarMap::Dijkstra0(std::vector<Location*> &ref, StarMap *starMap, Location *start, Location *finish)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// finish
		"push [ebp+16]\n\t"		// start
		"push [ebp+12]\n\t"		// starMap
		"push [ebp+8]\n\t"		// ref
	);
	__asm__("call %0\n\t" :: "m"(_func1022::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1023
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::AddQuest", typeid(bool (StarMap::*)(const std::string &, bool )), "5557565383ec6c0fb68424880000008bb42480000000", argdata, 3, 2, &func);
}

FUNC_NAKED bool StarMap::AddQuest(const std::string &questEvent, bool force)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// force
		"push [ebp+12]\n\t"		// questEvent
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1023::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1024
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::GenerateMap", typeid(Location *(StarMap::*)(bool , bool )), "5589e557565381ecfc0000008b5d0c807d1000", argdata, 3, 2, &func);
}

FUNC_NAKED Location *StarMap::GenerateMap(bool tutorial, bool seed)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// seed
		"push [ebp+12]\n\t"		// tutorial
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1024::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1025
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::NewGame", typeid(Location *(StarMap::*)(bool )), "5589e557565383ec6c8b7d088b450c8b8f64060000", argdata, 2, 2, &func);
}

FUNC_NAKED Location *StarMap::NewGame(bool unk0)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1025::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1026
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::Dijkstra1", typeid(void (*)(std::vector<Location*> &, StarMap *, Location *, Location *, bool )), "5589e557565381ecdc0000008b45088b7518", argdata, 5, 6, &func);
}

FUNC_NAKED void StarMap::Dijkstra1(std::vector<Location*> &ref, StarMap *starMap, Location *start, Location *finish, bool include_unknown)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// include_unknown
		"push [ebp+20]\n\t"		// finish
		"push [ebp+16]\n\t"		// start
		"push [ebp+12]\n\t"		// starMap
		"push [ebp+8]\n\t"		// ref
	);
	__asm__("call %0\n\t" :: "m"(_func1026::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1027
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::MouseMove", typeid(void (StarMap::*)(int , int )), "5589e557565381ec8c0000008b45088b5d0c8b7510", argdata, 3, 6, &func);
}

FUNC_NAKED void StarMap::MouseMove(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1027::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1028
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::OnTouch", typeid(void (StarMap::*)(TouchAction , int , int , int , int , int )), "5589e557565381ec8c0000008b750880be6006000000", argdata, 7, 6, &func);
}

FUNC_NAKED void StarMap::OnTouch(TouchAction unk0, int unk1, int unk2, int unk3, int unk4, int unk5)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+32]\n\t"		// unk5
		"push [ebp+28]\n\t"		// unk4
		"push [ebp+24]\n\t"		// unk3
		"push [ebp+20]\n\t"		// unk2
		"push [ebp+16]\n\t"		// unk1
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1028::func));
	__asm__
	(
		"add esp, 28\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 28\n\t"
	);
}

namespace _func1029
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::LoadGame", typeid(Location *(StarMap::*)(int )), "5589e557565381ecac0200008b450c8b5d08", argdata, 2, 2, &func);
}

FUNC_NAKED Location *StarMap::LoadGame(int fileHelper)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// fileHelper
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1029::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1030
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::RenderLeftInsetButton", typeid(void (StarMap::*)(float , float , bool )), "5589e5565383ec708b75148b5d08", argdata, 4, 6, &func);
}

FUNC_NAKED void StarMap::RenderLeftInsetButton(float unk0, float unk1, bool unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// unk2
		"push [ebp+16]\n\t"		// unk1
		"push [ebp+12]\n\t"		// unk0
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1030::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1031
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::RenderDistressButtons", typeid(void (StarMap::*)()), "5589e557565381eccc0000008b5d088d45b7", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::RenderDistressButtons()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1031::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1032
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::OnRender", typeid(void (StarMap::*)()), "8b4424048078040074??e9????????", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1032::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1033
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::DrawConnection", typeid(void (StarMap::*)(const Pointf &, const Pointf &, const GL_Color *)), "5589e557565381ec9c0000008b450c8b5d148b50048b00", argdata, 4, 6, &func);
}

FUNC_NAKED void StarMap::DrawConnection(const Pointf &pos1, const Pointf &pos2, const GL_Color *color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// pos2
		"push [ebp+12]\n\t"		// pos1
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1033::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1034
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::TurnIntoFleetLocation", typeid(void (StarMap::*)(Location *)), "5589e557565383ec5c8b5d0c8b4320", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::TurnIntoFleetLocation(Location *loc)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// loc
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1034::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1035
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::GetLocationText", typeid(std::string &(*)(std::string &, StarMap *, const Location *)), "5589e557565383ec3c8b45088b5d0c", argdata, 3, 2, &func);
}

FUNC_NAKED std::string &StarMap::GetLocationText(std::string &strRef, StarMap *starMap, const Location *loc)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// loc
		"push [ebp+12]\n\t"		// starMap
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func1035::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1036
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::SetupNoFuel", typeid(void (StarMap::*)(int , const std::string &)), "5589e557565381ec9c0000008b7d08837d0cff", argdata, 3, 6, &func);
}

FUNC_NAKED void StarMap::SetupNoFuel(int seed, const std::string &forceEscape)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// forceEscape
		"push [ebp+12]\n\t"		// seed
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1036::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1037
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StarMap::GenerateNebulas", typeid(void (StarMap::*)(const std::vector<std::string> &)), "5589e557565381ecbc0000008b450c8b5004", argdata, 2, 6, &func);
}

FUNC_NAKED void StarMap::GenerateNebulas(const std::vector<std::string> &names)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// names
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1037::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1038
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StarMap::UpdateBoss", typeid(void (StarMap::*)()), "8b44240480b8cc07000000", argdata, 1, 6, &func);
}

FUNC_NAKED void StarMap::UpdateBoss()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1038::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1039
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("StatusEffect::GetNebulaEffect", typeid(StatusEffect *(*)()), "5383ec18803d????????008b5c242074??660f6f05????????660f7f05????????a1????????c70302000000", argdata, 0, 2, &func);
}

FUNC_NAKED StatusEffect *StatusEffect::GetNebulaEffect()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func1039::func));
	__asm__
	(
		"add esp, 0\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func1040
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Store::OnInit", typeid(void (Store::*)(ShipManager *, Equipment *, int )), "5557565383ec1c8b5c24308b4424348b7c24388b6c243c", argdata, 4, 6, &func);
}

FUNC_NAKED void Store::OnInit(ShipManager *shopper, Equipment *equip, int worldLevel)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// worldLevel
		"push [ebp+16]\n\t"		// equip
		"push [ebp+12]\n\t"		// shopper
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1040::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1041
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Store::CreateStoreBoxes", typeid(void (Store::*)(int , Equipment *)), "5589e557565383ec7c8b750c8b7d08", argdata, 3, 6, &func);
}

FUNC_NAKED void Store::CreateStoreBoxes(int type, Equipment *equip)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// equip
		"push [ebp+12]\n\t"		// type
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1041::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1042
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Store::KeyDown", typeid(void (Store::*)(SDLKey )), "5383ec188b5c24208b542424", argdata, 2, 6, &func);
}

FUNC_NAKED void Store::KeyDown(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1042::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1043
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Store::OnLoop", typeid(void (Store::*)()), "565331db83ec148b7424208b9660030000", argdata, 1, 6, &func);
}

FUNC_NAKED void Store::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1043::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1044
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Store::Close", typeid(void (Store::*)()), "5383ec188b5c24208b839c040000", argdata, 1, 6, &func);
}

FUNC_NAKED void Store::Close()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1044::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1045
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Store::MouseMove", typeid(void (Store::*)(int , int )), "5589e557565381ec2c0100008b5d088b450c8b7d10", argdata, 3, 6, &func);
}

FUNC_NAKED void Store::MouseMove(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1045::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1046
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Store::constructor", typeid(void (Store::*)()), "5557565383ec2c8b5c24408d7c241f891c24", argdata, 1, 6, &func);
}

FUNC_NAKED void Store::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1046::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1047
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Store::SaveStore", typeid(void (Store::*)(int )), "5557565383ec1c8b5c24308b7424348b8384040000", argdata, 2, 6, &func);
}

FUNC_NAKED void Store::SaveStore(int file)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1047::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1048
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Store::RelinkShip", typeid(void (Store::*)(ShipManager *, Equipment *)), "5557565331db83ec1c8b6c24308b7424348b7c24388b9560030000", argdata, 3, 6, &func);
}

FUNC_NAKED void Store::RelinkShip(ShipManager *ship, Equipment *equip)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// equip
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1048::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1049
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Store::HasType", typeid(bool (Store::*)()), "8b5424048b442408398288040000", argdata, 1, 2, &func);
}

FUNC_NAKED bool Store::HasType()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1049::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1050
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Store::Clear", typeid(void (Store::*)()), "565383ec148b7424208b8e64030000", argdata, 1, 6, &func);
}

FUNC_NAKED void Store::Clear()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1050::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1051
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff};
	static FunctionDefinition funcObj("Store::InitHeading", typeid(void (Store::*)(int , Point )), "5557565383ec4c8d5c24388b742460", argdata, 3, 6, &func);
}

FUNC_NAKED void Store::InitHeading(int index, Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// pos
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// index
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1051::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1052
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Store::DrawBuySellTabText", typeid(void (Store::*)()), "5589e557565383ec4c8d45db8d5de4", argdata, 1, 6, &func);
}

FUNC_NAKED void Store::DrawBuySellTabText()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1052::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1053
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Store::MouseClick", typeid(void (Store::*)(int , int )), "5589e557565383ec4c8b45108b5d0889442408", argdata, 3, 6, &func);
}

FUNC_NAKED void Store::MouseClick(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1053::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1054
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Store::OnRender", typeid(void (Store::*)()), "5589e557565381ec8c0100008b5d08", argdata, 1, 6, &func);
}

FUNC_NAKED void Store::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1054::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1055
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Store::SetPositions", typeid(void (Store::*)()), "555731ff565381ec8c0000008b9c24a00000008d742470", argdata, 1, 6, &func);
}

FUNC_NAKED void Store::SetPositions()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1055::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1056
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Store::LoadStore", typeid(void (Store::*)(int , int )), "5589e557565383ec7c8b7d088b8f64030000", argdata, 3, 6, &func);
}

FUNC_NAKED void Store::LoadStore(int file, int worldLevel)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// worldLevel
		"push [ebp+12]\n\t"		// file
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1056::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1057
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("Store::SetPosition", typeid(void (Store::*)(Point )), "5383ec188b5c24208b4424248b542428891c24", argdata, 2, 6, &func);
}

FUNC_NAKED void Store::SetPosition(Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1057::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1058
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Store::destructor", typeid(void (Store::*)()), "55575631f65383ec2c8b5c24408b8b64030000", argdata, 1, 6, &func);
}

FUNC_NAKED void Store::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1058::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1059
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StoreBox::MouseClick", typeid(void (StoreBox::*)(int , int )), "8b44240480785000", argdata, 3, 6, &func);
}

FUNC_NAKED void StoreBox::MouseClick(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1059::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1060
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StoreBox::Activate", typeid(void (StoreBox::*)()), "5383ec288b4424308b90c0000000", argdata, 1, 6, &func);
}

FUNC_NAKED void StoreBox::Activate()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1060::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1061
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StoreBox::InitBlueprint", typeid(void (StoreBox::*)(Blueprint *)), "57565383ec208b7424348d7c241c", argdata, 2, 6, &func);
}

FUNC_NAKED void StoreBox::InitBlueprint(Blueprint *bp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// bp
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1061::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1062
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("StoreBox::constructor", typeid(void (StoreBox::*)(const std::string &, ShipManager *, Equipment *)), "5557565383ec3c8b5c24508d742428", argdata, 4, 6, &func);
}

FUNC_NAKED void StoreBox::constructor(const std::string &buttonImage, ShipManager *shopper, Equipment *equip)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// equip
		"push [ebp+16]\n\t"		// shopper
		"push [ebp+12]\n\t"		// buttonImage
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1062::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1063
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("StoreBox::SetPosition", typeid(void (StoreBox::*)(Point )), "565383ec248b4424308d70108b40108b580c8b442438", argdata, 2, 6, &func);
}

FUNC_NAKED void StoreBox::SetPosition(Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1063::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1064
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StoreBox::OnRender", typeid(void (StoreBox::*)()), "5589e557565381ec7c0300008b5d0880bbcc00000000", argdata, 1, 6, &func);
}

FUNC_NAKED void StoreBox::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1064::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1065
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StoreBox::OnLoop", typeid(void (StoreBox::*)()), "5331c083ec188b5c24208b93b800000085d2", argdata, 1, 6, &func);
}

FUNC_NAKED void StoreBox::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1065::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1066
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("StoreBox::Purchase", typeid(void (StoreBox::*)()), ".5557565383ec2c8d74241c8b5c24408d7c241a", argdata, 1, 6, &func);
}

FUNC_NAKED void StoreBox::Purchase()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1066::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1067
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SystemBox::OnRender", typeid(void (SystemBox::*)(bool )), "55b90100000089e557565383ec7c8b5d088b750c", argdata, 2, 6, &func);
}

FUNC_NAKED void SystemBox::OnRender(bool ignoreStatus)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ignoreStatus
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1067::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1068
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SystemBox::constructor", typeid(void (SystemBox::*)(Point , ShipSystem *, bool )), "5557565381ec3c0100008b9c24500100008d6c2470", argdata, 4, 6, &func);
}

FUNC_NAKED void SystemBox::constructor(Point pos, ShipSystem *sys, bool playerUI)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// playerUI
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1068::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1069
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SystemBox::MouseMove", typeid(void (SystemBox::*)(int , int )), "5589e557565383ec2c8b5d088b750c", argdata, 3, 6, &func);
}

FUNC_NAKED void SystemBox::MouseMove(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1069::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1070
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SystemBox::MouseClick", typeid(bool (SystemBox::*)(bool )), "57565331db83ec208b7424308b7c24348b464c", argdata, 2, 2, &func);
}

FUNC_NAKED bool SystemBox::MouseClick(bool shift)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// shift
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1070::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1071
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SystemBox::KeyDown", typeid(void (SystemBox::*)(SDLKey , bool )), "5589e557565383ec3c8b45108b7d088d5de0", argdata, 3, 6, &func);
}

FUNC_NAKED void SystemBox::KeyDown(SDLKey key, bool shift)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// shift
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1071::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1072
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SystemControl::CreateSystemBoxes", typeid(void (SystemControl::*)()), "5557565383ec5c8d7424408b5c2470c744240800000000", argdata, 1, 6, &func);
}

FUNC_NAKED void SystemControl::CreateSystemBoxes()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1072::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1073
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SystemControl::GetSystemBox", typeid(SystemBox *(SystemControl::*)(int )), "5557565331db83ec1c8b6c24308b7424348b55088b450c29d0c1f80285c0751aeb468db6000000008b550883c3018b450c29d0c1f80239c373??8b049a8d3c9d000000008b404c8b10890424ff525039f075??8b45088b043883c41c", argdata, 2, 2, &func);
}

FUNC_NAKED SystemBox *SystemControl::GetSystemBox(int systemId)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1073::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1074
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SystemControl::RenderPowerBar", typeid(void (SystemControl::*)()), "5589e557565383ec4c8b7d088d45e08b0f890424894c2404", argdata, 1, 6, &func);
}

FUNC_NAKED void SystemControl::RenderPowerBar()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1074::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1075
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SystemControl::GetPowerBars", typeid(SystemControl::PowerBars *(*)(int , int , int , bool )), "5557565381ec9c0000008b8424b00000008b9c24b40000008b9424bc000000", argdata, 4, 2, &func);
}

FUNC_NAKED SystemControl::PowerBars *SystemControl::GetPowerBars(int width, int height, int gap, bool useShieldGap)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// useShieldGap
		"push [ebp+16]\n\t"		// gap
		"push [ebp+12]\n\t"		// height
		"push [ebp+8]\n\t"		// width
	);
	__asm__("call %0\n\t" :: "m"(_func1075::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1076
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SystemCustomBox::constructor", typeid(void (SystemCustomBox::*)(Point , ShipSystem *, ShipManager *)), "5557565383ec5c8b5c24708b7424788b6c24748b44247c", argdata, 4, 6, &func);
}

FUNC_NAKED void SystemCustomBox::constructor(Point pos, ShipSystem *sys, ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// ship
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1076::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1077
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SystemStoreBox::SetExtraData", typeid(void (SystemStoreBox::*)(int )), "57565383ec208b5c24308b442434837b0404", argdata, 2, 6, &func);
}

FUNC_NAKED void SystemStoreBox::SetExtraData(int droneChoice)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// droneChoice
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1077::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1078
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SystemStoreBox::constructor", typeid(void (SystemStoreBox::*)(ShipManager *, Equipment *, int )), "5589e557565383ec6c8b75148b7d088d46fa", argdata, 4, 6, &func);
}

FUNC_NAKED void SystemStoreBox::constructor(ShipManager *shopper, Equipment *equip, int sys)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// equip
		"push [ebp+12]\n\t"		// shopper
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1078::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1079
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SystemStoreBox::CanHold", typeid(bool (SystemStoreBox::*)()), "5383ec188b5c24208b83c000000085c0", argdata, 1, 2, &func);
}

FUNC_NAKED bool SystemStoreBox::CanHold()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1079::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1080
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("SystemStoreBox::MouseMove", typeid(void (SystemStoreBox::*)(int , int )), "5589e557565383ec3c8b5d088b750c8b7d108b83b8000000", argdata, 3, 6, &func);
}

FUNC_NAKED void SystemStoreBox::MouseMove(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1080::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1081
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SystemStoreBox::Activate", typeid(void (SystemStoreBox::*)()), "5383ec288b5c24308b93c00000008b8398000000", argdata, 1, 6, &func);
}

FUNC_NAKED void SystemStoreBox::Activate()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1081::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1082
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("SystemStoreBox::Purchase", typeid(void (SystemStoreBox::*)()), "5557565383ec3c8b5c24508d74242c891c24e8????????8b4304", argdata, 1, 6, &func);
}

FUNC_NAKED void SystemStoreBox::Purchase()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1082::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1083
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TabbedWindow::Close", typeid(void (TabbedWindow::*)()), "5383ec188b5c24208b53408b43288b04908b10", argdata, 1, 6, &func);
}

FUNC_NAKED void TabbedWindow::Close()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1083::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1084
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("TeleportBox::constructor", typeid(void (TeleportBox::*)(Point , TeleportSystem *)), "5557565383ec7c8bbc24900000008d6c24508b842494000000", argdata, 3, 6, &func);
}

FUNC_NAKED void TeleportBox::constructor(Point pos, TeleportSystem *sys)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1084::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1085
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::SetHackingLevel", typeid(void (TeleportSystem::*)(int )), "565383ec148b7424248b5c242083fe017e??83bb80010000017e??89b38001000083c4145b5ec3??c783980100000000c842", argdata, 2, 6, &func);
}

FUNC_NAKED void TeleportSystem::SetHackingLevel(int hackingLevel)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// hackingLevel
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1085::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1086
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::OnRenderFloor", typeid(void (TeleportSystem::*)()), ".5557565383ec6c", argdata, 1, 6, &func);
}

FUNC_NAKED void TeleportSystem::OnRenderFloor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1086::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1087
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::constructor", typeid(void (TeleportSystem::*)(int , int , int , int )), "565383ec248b4424408b5c24308b74243889442410", argdata, 5, 6, &func);
}

FUNC_NAKED void TeleportSystem::constructor(int systemId, int roomId, int shipId, int startingPower)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// startingPower
		"push [ebp+20]\n\t"		// shipId
		"push [ebp+16]\n\t"		// roomId
		"push [ebp+12]\n\t"		// systemId
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1087::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1088
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::GetChargedPercent", typeid(float (TeleportSystem::*)()), "83ec048b442408f30f108098010000", argdata, 1, 2, &func);
}

FUNC_NAKED float TeleportSystem::GetChargedPercent()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1088::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1089
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::Charged", typeid(bool (TeleportSystem::*)()), ".5383ec188b5c2420891c24e8????????84c0", argdata, 1, 2, &func);
}

FUNC_NAKED bool TeleportSystem::Charged()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1089::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1090
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::ClearCrewLocations", typeid(void (TeleportSystem::*)()), "5557565383ec1c8b5c24308bbbbc010000c783b801000000000000", argdata, 1, 6, &func);
}

FUNC_NAKED void TeleportSystem::ClearCrewLocations()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1090::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1091
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::UpdateCrewLocation", typeid(void (TeleportSystem::*)(int )), "538b5424088b4c240c8b82a4010000", argdata, 2, 6, &func);
}

FUNC_NAKED void TeleportSystem::UpdateCrewLocation(int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1091::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1092
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::SetArmed", typeid(void (TeleportSystem::*)(int )), ".57565383ec208b4424348b5c243083f801", argdata, 2, 6, &func);
}

FUNC_NAKED void TeleportSystem::SetArmed(int armed)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// armed
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1092::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1093
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::ForceReady", typeid(void (TeleportSystem::*)()), "83ec1c8b442420c780980100000000c842", argdata, 1, 6, &func);
}

FUNC_NAKED void TeleportSystem::ForceReady()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1093::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1094
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::CanSend", typeid(bool (TeleportSystem::*)()), "57565383ec208b5c24308b4b0c", argdata, 1, 2, &func);
}

FUNC_NAKED bool TeleportSystem::CanSend()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1094::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1095
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::CanReceive", typeid(bool (TeleportSystem::*)()), "565383ec148b5c24208b74242480bb9d01000000", argdata, 1, 2, &func);
}

FUNC_NAKED bool TeleportSystem::CanReceive()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1095::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1096
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::InitiateTeleport", typeid(void (TeleportSystem::*)()), "5383ec288b5c2430891c24", argdata, 1, 6, &func);
}

FUNC_NAKED void TeleportSystem::InitiateTeleport()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1096::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1097
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::OnLoop", typeid(void (TeleportSystem::*)()), "57565383ec308b5c2440891c24e8????????8b03891c24ff502c84c0", argdata, 1, 6, &func);
}

FUNC_NAKED void TeleportSystem::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1097::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1098
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TeleportSystem::Jump", typeid(void (TeleportSystem::*)()), "5383ec188b5c2420891c24e8????????c7839801000000000000", argdata, 1, 6, &func);
}

FUNC_NAKED void TeleportSystem::Jump()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1098::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1099
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TextButton::ResetPrimitives", typeid(void (TextButton::*)()), "565331db83ec148b7424208b449e48", argdata, 1, 6, &func);
}

FUNC_NAKED void TextButton::ResetPrimitives()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1099::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1100
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TextButton::GetIdealButtonWidth", typeid(int (TextButton::*)()), "5589e5565383ec408b5d0880bbc800000000", argdata, 1, 2, &func);
}

FUNC_NAKED int TextButton::GetIdealButtonWidth()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1100::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1101
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TextButton::OnInit", typeid(void (TextButton::*)(int , int , int , int , int , TextString *, int )), "5589e557565383ec6c8b450c8b5d088b7520", argdata, 8, 6, &func);
}

FUNC_NAKED void TextButton::OnInit(int x, int y, int w, int h, int cornerInset, TextString *buttonLabel, int font)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+36]\n\t"		// font
		"push [ebp+32]\n\t"		// buttonLabel
		"push [ebp+28]\n\t"		// cornerInset
		"push [ebp+24]\n\t"		// h
		"push [ebp+20]\n\t"		// w
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1101::func));
	__asm__
	(
		"add esp, 32\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 32\n\t"
	);
}

namespace _func1102
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TextButton::OnRender", typeid(void (TextButton::*)()), "5589e557565383ec6c8b5d0880bbb400000000", argdata, 1, 6, &func);
}

FUNC_NAKED void TextButton::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1102::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1103
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TextButton::destructor", typeid(void (TextButton::*)()), "565383ec248b5c24308b4348", argdata, 1, 6, &func);
}

FUNC_NAKED void TextButton::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1103::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1104
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TextButton::GetSizeX", typeid(int64_t (TextButton::*)()), "5557565383ec2c8b5c24448b74244080bbb400000000", argdata, 1, 10, &func);
}

FUNC_NAKED int64_t TextButton::GetSizeX()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1104::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1105
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TextButton::OnInitRect", typeid(void (TextButton::*)(Globals::Rect &, int , TextString &, int )), "5557565383ec4c8b7424648b5c24608b7c246c", argdata, 5, 6, &func);
}

FUNC_NAKED void TextButton::OnInitRect(Globals::Rect &rect, int cornerInset, TextString &buttonLabel, int font)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// font
		"push [ebp+20]\n\t"		// buttonLabel
		"push [ebp+16]\n\t"		// cornerInset
		"push [ebp+12]\n\t"		// rect
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1105::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1106
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("TextButton::SetBaseImage", typeid(void (TextButton::*)(const std::string &, Point , int )), "5557565383ec1c8b4424348b5c24308b742438", argdata, 4, 6, &func);
}

FUNC_NAKED void TextButton::SetBaseImage(const std::string &name, Point pos, int autoWidthMin)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// autoWidthMin
		"push [ebp+20]\n\t"		// pos
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// name
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1106::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1107
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TextButton::SetAutoWidth", typeid(void (TextButton::*)(bool , bool , int , int )), "538b4c240c8b4424088b5424188b5c2410", argdata, 5, 6, &func);
}

FUNC_NAKED void TextButton::SetAutoWidth(bool autoWidth, bool autoRightAlign, int margin, int min)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// min
		"push [ebp+20]\n\t"		// margin
		"push [ebp+16]\n\t"		// autoRightAlign
		"push [ebp+12]\n\t"		// autoWidth
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1107::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1108
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TextButton::constructor", typeid(void (TextButton::*)()), "565383ec348b5c24408d4304c703????????8d7324890424", argdata, 1, 6, &func);
}

FUNC_NAKED void TextButton::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1108::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1109
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff};
	static FunctionDefinition funcObj("TextButton::SetInactiveColor", typeid(void (TextButton::*)(GL_Color )), ".!8b44240480786400", argdata, 2, 6, &func);
}

FUNC_NAKED void TextButton::SetInactiveColor(GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// color
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1109::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1110
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff};
	static FunctionDefinition funcObj("TextButton::SetActiveColor", typeid(void (TextButton::*)(GL_Color )), ".!8b44240480786400", argdata, 2, 6, &func);
}

FUNC_NAKED void TextButton::SetActiveColor(GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// color
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1110::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1111
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff};
	static FunctionDefinition funcObj("TextButton::SetSelectedColor", typeid(void (TextButton::*)(GL_Color )), ".!8b44240480786400", argdata, 2, 6, &func);
}

FUNC_NAKED void TextButton::SetSelectedColor(GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// color
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1111::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1112
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x4ff};
	static FunctionDefinition funcObj("TextButton::SetTextColor", typeid(void (TextButton::*)(GL_Color )), ".8b44240480786400", argdata, 2, 6, &func);
}

FUNC_NAKED void TextButton::SetTextColor(GL_Color color)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// color
		"push [ebp+20]\n\t"		// color
		"push [ebp+16]\n\t"		// color
		"push [ebp+12]\n\t"		// color
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1112::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1113
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TextButton::InitPrimitives", typeid(void (TextButton::*)()), "5557565381eccc0000008bb424e0000000807e6400", argdata, 1, 6, &func);
}

FUNC_NAKED void TextButton::InitPrimitives()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1113::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1114
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TextInput::constructor", typeid(void (TextInput::*)(int , TextInput::AllowedCharType , const std::string &)), "57565383ec108b5c24208b44242c8b7424248b7c2428", argdata, 4, 6, &func);
}

FUNC_NAKED void TextInput::constructor(int maxChars, TextInput::AllowedCharType allowedCharType, const std::string &prompt)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// prompt
		"push [ebp+16]\n\t"		// allowedCharType
		"push [ebp+12]\n\t"		// maxChars
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1114::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1115
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff};
	static FunctionDefinition funcObj("TextInput::OnRender", typeid(void (TextInput::*)(int , Point )), ".5589e557565383ec7c8b5d088b45108d75d0", argdata, 3, 6, &func);
}

FUNC_NAKED void TextInput::OnRender(int font, Point pos)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// pos
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// font
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1115::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1116
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TextInput::OnLoop", typeid(void (TextInput::*)()), ".!5383ec188b4424208b501c395020", argdata, 1, 6, &func);
}

FUNC_NAKED void TextInput::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1116::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1117
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TextInput::OnTextEvent", typeid(void (TextInput::*)(CEvent::TextEvent )), ".57565383ec108b5c24208b442424807b2400", argdata, 2, 6, &func);
}

FUNC_NAKED void TextInput::OnTextEvent(CEvent::TextEvent event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// event
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1117::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1118
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TextInput::GetActive", typeid(bool (TextInput::*)()), ".8b4424040fb64024", argdata, 1, 2, &func);
}

FUNC_NAKED bool TextInput::GetActive()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1118::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1119
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TextInput::GetText", typeid(std::string &(*)(std::string &, TextInput *)), ".5589e55383ec148b5d088b450c", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &TextInput::GetText(std::string &strRef, TextInput *textInput)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// textInput
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func1119::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1120
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TextInput::Start", typeid(void (TextInput::*)()), ".5589e5565383ec208b5d088b43082b4304", argdata, 1, 6, &func);
}

FUNC_NAKED void TextInput::Start()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1120::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1121
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TextInput::Stop", typeid(void (TextInput::*)()), ".!8b442404c6402400", argdata, 1, 6, &func);
}

FUNC_NAKED void TextInput::Stop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1121::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1122
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TextInput::SetText", typeid(int (TextInput::*)(const std::string &)), ".57565383ec308b7424408d5c2410", argdata, 2, 2, &func);
}

FUNC_NAKED int TextInput::SetText(const std::string &text)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// text
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1122::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1123
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TextInput::OnTextInput", typeid(void (TextInput::*)(int )), ".5589e557565383ec5c8b5d08807b2400", argdata, 2, 6, &func);
}

FUNC_NAKED void TextInput::OnTextInput(int asciiChar)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// asciiChar
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1123::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1124
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TextLibrary::GetText", typeid(std::string &(*)(std::string &, TextLibrary *, const std::string &, const std::string &)), "5589e557565383ec5c8b450c83c01c89c2", argdata, 4, 2, &func);
}

FUNC_NAKED std::string &TextLibrary::GetText(std::string &strRef, TextLibrary *textLibrary, const std::string &name, const std::string &lang)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// lang
		"push [ebp+16]\n\t"		// name
		"push [ebp+12]\n\t"		// textLibrary
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func1124::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1125
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TextString::GetText", typeid(std::string &(*)(std::string &, TextString *)), "5589e55383ec148b450c8b5d0880780400", argdata, 2, 2, &func);
}

FUNC_NAKED std::string &TextString::GetText(std::string &ref, TextString *textString)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// textString
		"push [ebp+8]\n\t"		// ref
	);
	__asm__("call %0\n\t" :: "m"(_func1125::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1126
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TimerHelper::Start", typeid(void (TimerHelper::*)(int )), "565383ec048b4424148b5c241083f8ffc6431101", argdata, 2, 6, &func);
}

FUNC_NAKED void TimerHelper::Start(int goal)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// goal
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1126::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1127
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TimerHelper::Running", typeid(bool (TimerHelper::*)()), ".8b4424040fb64011", argdata, 1, 2, &func);
}

FUNC_NAKED bool TimerHelper::Running()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1127::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1128
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TimerHelper::ResetMinMax", typeid(void (TimerHelper::*)(int , int )), ".8b4424048b54240c8910", argdata, 3, 6, &func);
}

FUNC_NAKED void TimerHelper::ResetMinMax(int min, int max)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// max
		"push [ebp+12]\n\t"		// min
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1128::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1129
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TimerHelper::SetMaxTime", typeid(void (TimerHelper::*)(float )), ".8b442404f30f104c2408", argdata, 2, 6, &func);
}

FUNC_NAKED void TimerHelper::SetMaxTime(float max)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// max
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1129::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1130
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TimerHelper::Stop", typeid(void (TimerHelper::*)()), ".8b442404c6401100", argdata, 1, 6, &func);
}

FUNC_NAKED void TimerHelper::Stop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1130::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1131
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TimerHelper::Update", typeid(void (TimerHelper::*)()), ".5383ec188b5c2420807b1100", argdata, 1, 6, &func);
}

FUNC_NAKED void TimerHelper::Update()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1131::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1132
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TimerHelper::Done", typeid(bool (TimerHelper::*)()), ".57565383ec108b5c24200fb6431184c0", argdata, 1, 2, &func);
}

FUNC_NAKED bool TimerHelper::Done()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1132::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1133
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TutorialManager::constructor", typeid(void (TutorialManager::*)()), "5383ec188b5c24208d4304c60300890424", argdata, 1, 6, &func);
}

FUNC_NAKED void TutorialManager::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1133::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1134
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("TutorialManager::Running", typeid(bool (TutorialManager::*)()), ".8b4424040fb600", argdata, 1, 2, &func);
}

FUNC_NAKED bool TutorialManager::Running()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1134::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1135
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("TutorialManager::OnInit", typeid(void (TutorialManager::*)(ShipManager *, CommandGui *, CrewControl *, Upgrades *, CombatControl *, SystemControl *, TabbedWindow *)), "5557565383ec4c8b5c24608d7424308b44247c8d7c2424", argdata, 8, 6, &func);
}

FUNC_NAKED void TutorialManager::OnInit(ShipManager *ship, CommandGui *gui, CrewControl *crewControl, Upgrades *upgradesScreen, CombatControl *combatControl, SystemControl *sysControl, TabbedWindow *unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+36]\n\t"		// unk
		"push [ebp+32]\n\t"		// sysControl
		"push [ebp+28]\n\t"		// combatControl
		"push [ebp+24]\n\t"		// upgradesScreen
		"push [ebp+20]\n\t"		// crewControl
		"push [ebp+16]\n\t"		// gui
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1135::func));
	__asm__
	(
		"add esp, 32\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 32\n\t"
	);
}

namespace _func1136
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("UnlockArrow::constructor", typeid(void (UnlockArrow::*)(Point , int , int )), "5557565383ec2c8b6c24408b4424508b4c244c", argdata, 4, 6, &func);
}

FUNC_NAKED void UnlockArrow::constructor(Point pos, int unk1, int unk2)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// unk2
		"push [ebp+20]\n\t"		// unk1
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1136::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1137
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("UnlockArrow::MouseMove", typeid(bool (UnlockArrow::*)(int , int )), ".8b542404837a0403", argdata, 3, 2, &func);
}

FUNC_NAKED bool UnlockArrow::MouseMove(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1137::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1138
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("UnlockArrow::OnRender", typeid(void (UnlockArrow::*)()), ".57565383ec508b5c24608b0385c0", argdata, 1, 6, &func);
}

FUNC_NAKED void UnlockArrow::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1138::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1139
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("UpgradeBox::constructorEmpty", typeid(void (UpgradeBox::*)(Point , bool )), "5557565383ec5c8b5c24708b7424748b7c24788b6c247c", argdata, 3, 6, &func);
}

FUNC_NAKED void UpgradeBox::constructorEmpty(Point pos, bool subsystem)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// subsystem
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1139::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1140
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x2ff, 0x1ff};
	static FunctionDefinition funcObj("UpgradeBox::constructorSystem", typeid(void (UpgradeBox::*)(ShipManager *, ShipSystem *, Point , bool )), "5589e557565383ec5c8b45148b75088b7d10", argdata, 5, 6, &func);
}

FUNC_NAKED void UpgradeBox::constructorSystem(ShipManager *ship, ShipSystem *sys, Point pos, bool subsystem)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// subsystem
		"push [ebp+24]\n\t"		// pos
		"push [ebp+20]\n\t"		// pos
		"push [ebp+16]\n\t"		// sys
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1140::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func1141
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("UpgradeBox::destructor", typeid(void (UpgradeBox::*)()), "5383ec288b5c24308b83fc000000890424", argdata, 1, 6, &func);
}

FUNC_NAKED void UpgradeBox::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1141::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1142
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("UpgradeBox::OnRender", typeid(void (UpgradeBox::*)()), "5589e557565381ec3c0100008b5d0880bbf900000000", argdata, 1, 6, &func);
}

FUNC_NAKED void UpgradeBox::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1142::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1143
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("UpgradeBox::MouseMove", typeid(void (UpgradeBox::*)(int , int )), "83ec1c8b4424208b1085d2", argdata, 3, 6, &func);
}

FUNC_NAKED void UpgradeBox::MouseMove(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1143::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1144
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("UpgradeBox::MouseClick", typeid(void (UpgradeBox::*)(int , int )), "5383ec288b5c24308b0385c0", argdata, 3, 6, &func);
}

FUNC_NAKED void UpgradeBox::MouseClick(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1144::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1145
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("UpgradeBox::MouseRightClick", typeid(void (UpgradeBox::*)(int , int )), ".565383ec248b5c24308b0385c0", argdata, 3, 6, &func);
}

FUNC_NAKED void UpgradeBox::MouseRightClick(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1145::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1146
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("UpgradeBox::Undo", typeid(void (UpgradeBox::*)()), "565383ec148b5c24208b431485c0", argdata, 1, 6, &func);
}

FUNC_NAKED void UpgradeBox::Undo()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1146::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1147
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("UpgradeBox::Accept", typeid(void (UpgradeBox::*)()), ".565383ec248b5c24308b0385c0", argdata, 1, 6, &func);
}

FUNC_NAKED void UpgradeBox::Accept()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1147::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1148
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Upgrades::OnInit", typeid(void (Upgrades::*)(ShipManager *)), "5557565381eccc0000008b9c24e00000008db424a0000000", argdata, 2, 6, &func);
}

FUNC_NAKED void Upgrades::OnInit(ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1148::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1149
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Upgrades::ClearUpgradeBoxes", typeid(void (Upgrades::*)()), "5557565383ec2c8b5c24408b4b248b532089c829d083f803", argdata, 1, 6, &func);
}

FUNC_NAKED void Upgrades::ClearUpgradeBoxes()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1149::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1150
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Upgrades::MouseMove", typeid(void (Upgrades::*)(int , int )), "5557565331db83ec1c8b6c24308b7424348b7c2438892c24", argdata, 3, 6, &func);
}

FUNC_NAKED void Upgrades::MouseMove(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1150::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1151
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Upgrades::OnLoop", typeid(void (Upgrades::*)()), "5589e557565383ec6c8b7d08807f0400", argdata, 1, 6, &func);
}

FUNC_NAKED void Upgrades::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1151::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1152
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Upgrades::MouseClick", typeid(void (Upgrades::*)(int , int )), "5589e557565331db83ec3c8b75088b450c8b7d10", argdata, 3, 6, &func);
}

FUNC_NAKED void Upgrades::MouseClick(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1152::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1153
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Upgrades::MouseRightClick", typeid(void (Upgrades::*)(int , int )), "55575631f65383ec2c8b7c24408b6f24", argdata, 3, 6, &func);
}

FUNC_NAKED void Upgrades::MouseRightClick(int mX, int mY)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// mY
		"push [ebp+12]\n\t"		// mX
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1153::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1154
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Upgrades::Close", typeid(void (Upgrades::*)()), ".5589e557565383ec3c8b7d08807f0400", argdata, 1, 6, &func);
}

FUNC_NAKED void Upgrades::Close()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1154::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1155
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Upgrades::OnRender", typeid(void (Upgrades::*)()), "5589e557565383ec7c8b5d080f2805????????", argdata, 1, 6, &func);
}

FUNC_NAKED void Upgrades::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1155::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1156
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Upgrades::ConfirmUpgrades", typeid(void (Upgrades::*)()), "5589e5575631f65383ec3c8b7d088b4f248b4720", argdata, 1, 6, &func);
}

FUNC_NAKED void Upgrades::ConfirmUpgrades()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1156::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1157
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WarningMessage::Start", typeid(void (WarningMessage::*)()), "5383ec188b5c2420807b1400", argdata, 1, 6, &func);
}

FUNC_NAKED void WarningMessage::Start()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1157::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1158
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WarningMessage::OnRender", typeid(void (WarningMessage::*)()), "5383ec188b5c2420807b1600", argdata, 1, 6, &func);
}

FUNC_NAKED void WarningMessage::OnRender()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1158::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1159
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WarningMessage::RenderWithAlpha", typeid(void (WarningMessage::*)(float )), "5589e557565383ec7c8b5d08807b2800", argdata, 2, 6, &func);
}

FUNC_NAKED void WarningMessage::RenderWithAlpha(float alpha)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// alpha
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1159::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1160
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WarningMessage::constructor", typeid(void (WarningMessage::*)()), "560f57c05383ec248b5c24308d74241ff30f1144240c", argdata, 1, 6, &func);
}

FUNC_NAKED void WarningMessage::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1160::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1161
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WarningMessage::InitImage", typeid(void (WarningMessage::*)(const std::string &, Point , float , bool )), "5557565383ec1c8b5c24308b7c24388b6c243c8b442434", argdata, 5, 6, &func);
}

FUNC_NAKED void WarningMessage::InitImage(const std::string &imageName, Point position, float time, bool flash)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// flash
		"push [ebp+24]\n\t"		// time
		"push [ebp+20]\n\t"		// position
		"push [ebp+16]\n\t"		// position
		"push [ebp+12]\n\t"		// imageName
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1161::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func1162
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x2ff, 0x1ff, 0x4ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WarningMessage::InitText", typeid(void (WarningMessage::*)(const TextString &, Point , float , GL_Color , bool , bool )), "5557565383ec1c8b5c24308b4424388b7424348b54243c8b6c2454", argdata, 7, 6, &func);
}

FUNC_NAKED void WarningMessage::InitText(const TextString &text, Point position, float time, GL_Color textColor, bool centerText, bool flash)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+48]\n\t"		// flash
		"push [ebp+44]\n\t"		// centerText
		"push [ebp+40]\n\t"		// textColor
		"push [ebp+36]\n\t"		// textColor
		"push [ebp+32]\n\t"		// textColor
		"push [ebp+28]\n\t"		// textColor
		"push [ebp+24]\n\t"		// time
		"push [ebp+20]\n\t"		// position
		"push [ebp+16]\n\t"		// position
		"push [ebp+12]\n\t"		// text
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1162::func));
	__asm__
	(
		"add esp, 44\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 44\n\t"
	);
}

namespace _func1163
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WarningMessage::OnLoop", typeid(void (WarningMessage::*)()), "565383ec148b5c24208d7304893424", argdata, 1, 6, &func);
}

FUNC_NAKED void WarningMessage::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1163::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1164
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WarningMessage::SetImage", typeid(void (WarningMessage::*)(const std::string &)), ".5557565383ec1c8b5c24308b742434807b2800", argdata, 2, 6, &func);
}

FUNC_NAKED void WarningMessage::SetImage(const std::string &imageName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// imageName
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1164::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1165
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WarningMessage::SetText", typeid(void (WarningMessage::*)(const TextString &)), ".5557565383ec1c8b5c24308b742434807b2800", argdata, 2, 6, &func);
}

FUNC_NAKED void WarningMessage::SetText(const TextString &text)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// text
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1165::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1166
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x4ff};
	static FunctionDefinition funcObj("WarningMessage::SetText", typeid(void (WarningMessage::*)(const TextString &, GL_Color )), ".5557565383ec1c8b5c24308b742434807b2800", argdata, 3, 6, &func);
}

FUNC_NAKED void WarningMessage::SetText(const TextString &text, GL_Color textColor)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// textColor
		"push [ebp+24]\n\t"		// textColor
		"push [ebp+20]\n\t"		// textColor
		"push [ebp+16]\n\t"		// textColor
		"push [ebp+12]\n\t"		// text
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1166::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

namespace _func1167
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff};
	static FunctionDefinition funcObj("WarningMessage::SetPosition", typeid(void (WarningMessage::*)(Point )), "8b4424048b5424088b4c240c80782800", argdata, 2, 6, &func);
}

FUNC_NAKED void WarningMessage::SetPosition(Point position)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// position
		"push [ebp+12]\n\t"		// position
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1167::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1168
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WarningMessage::SetLoop", typeid(void (WarningMessage::*)(bool )), "83ec1c0fb6442424c744240800000000", argdata, 2, 6, &func);
}

FUNC_NAKED void WarningMessage::SetLoop(bool loop)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// loop
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1168::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1169
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WarningMessage::SetSound", typeid(void (WarningMessage::*)(const std::string &)), "8b442404058c00000089442404", argdata, 2, 6, &func);
}

FUNC_NAKED void WarningMessage::SetSound(const std::string &sound)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// sound
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1169::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1170
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("WeaponBlueprint::__DO_NOT_HOOK", typeid(void (*)()), "565383ec248b5c24308d74241f8d4304c703????????89742408890424", argdata, 0, 4, &func);
}

FUNC_NAKED void WeaponBlueprint::__DO_NOT_HOOK()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func1170::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func1171
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("WeaponBlueprint::__DO_NOT_HOOK2", typeid(void (*)()), ".565383ec248b5c24308d74241f8d4304c703????????89742408890424", argdata, 0, 4, &func);
}

FUNC_NAKED void WeaponBlueprint::__DO_NOT_HOOK2()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func1171::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func1172
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("WeaponBlueprint::__DO_NOT_HOOK3", typeid(void (*)()), ".565383ec248b5c24308d74241f8d4304c703????????89742408890424", argdata, 0, 4, &func);
}

FUNC_NAKED void WeaponBlueprint::__DO_NOT_HOOK3()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func1172::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func1173
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WeaponBlueprint::constructor", typeid(void (WeaponBlueprint::*)()), ".565383ec248b5c24308d74241f8d4304c703????????89742408890424", argdata, 1, 6, &func);
}

FUNC_NAKED void WeaponBlueprint::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1173::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1174
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WeaponBlueprint::destructor", typeid(void (WeaponBlueprint::*)()), ".5557565383ec2c8b7c24408d74241f", argdata, 1, 6, &func);
}

FUNC_NAKED void WeaponBlueprint::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1174::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1175
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponBlueprint::GetDescription", typeid(void (*)(std::string &, WeaponBlueprint *, bool )), "5589e557565381ecac0000008b4510898564ffffff", argdata, 3, 6, &func);
}

FUNC_NAKED void WeaponBlueprint::GetDescription(std::string &strRef, WeaponBlueprint *_this, bool tooltip)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// tooltip
		"push [ebp+12]\n\t"		// _this
		"push [ebp+8]\n\t"		// strRef
	);
	__asm__("call %0\n\t" :: "m"(_func1175::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1176
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponBox::RenderBox", typeid(void (WeaponBox::*)(bool , bool )), "5589e557565381ec2c0200000fb64510", argdata, 3, 6, &func);
}

FUNC_NAKED void WeaponBox::RenderBox(bool dragging, bool flashPowerBox)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// flashPowerBox
		"push [ebp+12]\n\t"		// dragging
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1176::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1177
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponBox::GenerateTooltip", typeid(void (*)(std::string &, WeaponBox *)), "5589e557565383ec2c8b750c8b5d088b06", argdata, 2, 6, &func);
}

FUNC_NAKED void WeaponBox::GenerateTooltip(std::string &retStr, WeaponBox *_this)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// _this
		"push [ebp+8]\n\t"		// retStr
	);
	__asm__("call %0\n\t" :: "m"(_func1177::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1178
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponControl::Fire", typeid(void (WeaponControl::*)(std::vector<Pointf> &, int , bool )), "5557565383ec2c8b7424408b6c24448b54244c", argdata, 4, 6, &func);
}

FUNC_NAKED void WeaponControl::Fire(std::vector<Pointf> &points, int target, bool autoFire)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// autoFire
		"push [ebp+16]\n\t"		// target
		"push [ebp+12]\n\t"		// points
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1178::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1179
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponControl::OnRender", typeid(void (WeaponControl::*)(bool )), "565383ec248b5c2430c744240403000000", argdata, 2, 6, &func);
}

FUNC_NAKED void WeaponControl::OnRender(bool unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1179::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1180
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponControl::LButton", typeid(bool (WeaponControl::*)(int , int , bool )), "565383ec148b5424208b4c24248b5c24288b74242c", argdata, 4, 2, &func);
}

FUNC_NAKED bool WeaponControl::LButton(int x, int y, bool holdingShift)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// holdingShift
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1180::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1181
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponControl::MouseMove", typeid(void (WeaponControl::*)(int , int )), "57565383ec108b5c24208b7424248b7c2428891c2489742404", argdata, 3, 6, &func);
}

FUNC_NAKED void WeaponControl::MouseMove(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1181::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1182
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponControl::LinkShip", typeid(void (WeaponControl::*)(ShipManager *)), "5383ec488b5c24508b442454891c2489442404", argdata, 2, 6, &func);
}

FUNC_NAKED void WeaponControl::LinkShip(ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1182::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1183
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WeaponControl::constructor", typeid(void (WeaponControl::*)()), "5557565381ecfc0100008b9c2410020000c744240403000000", argdata, 1, 6, &func);
}

FUNC_NAKED void WeaponControl::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1183::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1184
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponControl::SetAutofiring", typeid(void (WeaponControl::*)(bool , bool )), "57565383ec508b4424648b7424608b7c2468", argdata, 3, 6, &func);
}

FUNC_NAKED void WeaponControl::SetAutofiring(bool on, bool simple)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// simple
		"push [ebp+12]\n\t"		// on
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1184::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1185
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponControl::KeyDown", typeid(bool (WeaponControl::*)(SDLKey )), "57bf01000000565383ec308b5c24408b742444", argdata, 2, 2, &func);
}

FUNC_NAKED bool WeaponControl::KeyDown(SDLKey key)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// key
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1185::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1186
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("WeaponStoreBox::__DO_NOT_HOOK", typeid(void (*)()), "5557565383ec2c8d44241a8b5c24408d7c241c8b74244c89442408", argdata, 0, 4, &func);
}

FUNC_NAKED void WeaponStoreBox::__DO_NOT_HOOK()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
	);
	__asm__("call %0\n\t" :: "m"(_func1186::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret\n\t"
	);
}

namespace _func1187
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponStoreBox::constructor", typeid(void (WeaponStoreBox::*)(ShipManager *, Equipment *, const WeaponBlueprint *)), ".5557565383ec2c8d44241a8b5c24408d7c241c8b74244c89442408", argdata, 4, 6, &func);
}

FUNC_NAKED void WeaponStoreBox::constructor(ShipManager *ship, Equipment *equip, const WeaponBlueprint *weaponBp)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// weaponBp
		"push [ebp+16]\n\t"		// equip
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1187::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1188
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponSystem::RemoveWeapon", typeid(void (WeaponSystem::*)(int )), "5531c057565383ec2c8b7c24448b5c244085ff", argdata, 2, 6, &func);
}

FUNC_NAKED void WeaponSystem::RemoveWeapon(int slot)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// slot
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1188::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1189
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponSystem::SetBonusPower", typeid(void (WeaponSystem::*)(int , int )), ".565383ec148b5c24208b742424891c24e8????????", argdata, 3, 6, &func);
}

FUNC_NAKED void WeaponSystem::SetBonusPower(int amount, int permanentPower)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// permanentPower
		"push [ebp+12]\n\t"		// amount
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1189::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1190
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x2ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WeaponSystemBox::constructor", typeid(void (WeaponSystemBox::*)(Point , ShipSystem *, WeaponControl *)), "5383ec288b44243c8b5c24308b542438c7442410010000008944240c8b442434891c248954240889442404e8????????8b442440c703????????8983b00100008d83b4010000", argdata, 4, 6, &func);
}

FUNC_NAKED void WeaponSystemBox::constructor(Point pos, ShipSystem *sys, WeaponControl *weapCtrl)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// weapCtrl
		"push [ebp+20]\n\t"		// sys
		"push [ebp+16]\n\t"		// pos
		"push [ebp+12]\n\t"		// pos
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1190::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1191
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WindowFrame::Draw", typeid(void (WindowFrame::*)(int , int )), "57565383ec108b7c24288b5c24208b742424", argdata, 3, 6, &func);
}

FUNC_NAKED void WindowFrame::Draw(int x, int y)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1191::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1192
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WindowFrame::DrawMask", typeid(void (WindowFrame::*)(int )), "83ec1c8b442424c70424010000008944240889442404", argdata, 2, 6, &func);
}

FUNC_NAKED void WindowFrame::DrawMask(int unk)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// unk
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1192::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1193
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WindowFrame::constructor", typeid(void (WindowFrame::*)(int , int , int , int )), "5557565381ecbc0000008b8424d00000008dbc24a0000000660f6eb424e0000000", argdata, 5, 6, &func);
}

FUNC_NAKED void WindowFrame::constructor(int x, int y, int w, int h)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// h
		"push [ebp+20]\n\t"		// w
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1193::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1194
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WindowFrame::destructor", typeid(void (WindowFrame::*)()), "5383ec188b5c24208b4310890424", argdata, 1, 6, &func);
}

FUNC_NAKED void WindowFrame::destructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1194::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1195
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WorldManager::constructor", typeid(void (WorldManager::*)()), "565383ec248b5c24308d74241f8d4308c70300000000", argdata, 1, 6, &func);
}

FUNC_NAKED void WorldManager::constructor()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1195::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1196
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WorldManager::OnInit", typeid(int (WorldManager::*)()), "57565383ec108b5c24208d7308893424", argdata, 1, 2, &func);
}

FUNC_NAKED int WorldManager::OnInit()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1196::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1197
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::CreateShip", typeid(CompleteShip *(WorldManager::*)(ShipEvent *, bool )), "5557565381ec1c02000080bc243802000000", argdata, 2, 0, &func);
}

FUNC_NAKED CompleteShip *WorldManager::CreateShip(ShipEvent *shipEvent, bool boss)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// boss
		"push [ebp+8]\n\t"		// shipEvent
	);
	__asm__("call %0\n\t" :: "m"(_func1197::func));
	__asm__
	(
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1198
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::CreateLocation", typeid(void (WorldManager::*)(Location *)), "5589e557565381ec7c0200008b75088b7d0cc686c20e000000", argdata, 2, 6, &func);
}

FUNC_NAKED void WorldManager::CreateLocation(Location *loc)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// loc
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1198::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1199
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WorldManager::SaveGame", typeid(void (WorldManager::*)()), "5589e557565383ec2c8b5d088b83cc0c0000890424", argdata, 1, 6, &func);
}

FUNC_NAKED void WorldManager::SaveGame()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1199::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1200
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::CreateChoiceBox", typeid(void (WorldManager::*)(LocationEvent *)), "565383ec148b5c24208b7424248b038b48088b01", argdata, 2, 6, &func);
}

FUNC_NAKED void WorldManager::CreateChoiceBox(LocationEvent *event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// event
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1200::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1201
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::UpdateLocation", typeid(void (WorldManager::*)(LocationEvent *)), ".565383ec148b5c24208b7424248b038b48088b01", argdata, 2, 6, &func);
}

FUNC_NAKED void WorldManager::UpdateLocation(LocationEvent *event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// event
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1201::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1202
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::ModifyResources", typeid(LocationEvent *(WorldManager::*)(LocationEvent *)), "5589e557565381ecbc0100008b7d0c8b75088b87dc010000", argdata, 2, 2, &func);
}

FUNC_NAKED LocationEvent *WorldManager::ModifyResources(LocationEvent *event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// event
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1202::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1203
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::ModifyEnvironment", typeid(void (WorldManager::*)(int , int )), "5383ec188b4424248b5c24208b54242883f801", argdata, 3, 6, &func);
}

FUNC_NAKED void WorldManager::ModifyEnvironment(int envFlag, int envTarget)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+16]\n\t"		// envTarget
		"push [ebp+12]\n\t"		// envFlag
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1203::func));
	__asm__
	(
		"add esp, 12\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 12\n\t"
	);
}

namespace _func1204
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::CheckStatusEffects", typeid(void (WorldManager::*)(std::vector<StatusEffect> &)), "5557565383ec3c8b5c24548b7c2450", argdata, 2, 6, &func);
}

FUNC_NAKED void WorldManager::CheckStatusEffects(std::vector<StatusEffect> &vec)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// vec
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1204::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1205
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::StartGame", typeid(void (WorldManager::*)(ShipManager *)), "5589e557565383ec3c8b5d088b750c8b0385c0", argdata, 2, 6, &func);
}

FUNC_NAKED void WorldManager::StartGame(ShipManager *ship)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// ship
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1205::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1206
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WorldManager::Restart", typeid(void (WorldManager::*)()), "5383ec188b5c2420891c24e8????????e8????????e8????????", argdata, 1, 6, &func);
}

FUNC_NAKED void WorldManager::Restart()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1206::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1207
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::LoadGame", typeid(void (WorldManager::*)(const std::string &)), "5589e557565381ec3c0100008b7508c78508ffffff00000000", argdata, 2, 6, &func);
}

FUNC_NAKED void WorldManager::LoadGame(const std::string &fileName)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// fileName
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1207::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1208
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WorldManager::OnLoop", typeid(void (WorldManager::*)()), "5589e557565381ecac0000008b7508c744240400000000", argdata, 1, 6, &func);
}

FUNC_NAKED void WorldManager::OnLoop()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1208::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1209
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WorldManager::CreateNewGame", typeid(void (WorldManager::*)()), "57565383ec208b7424308d5c241c8d7c241b8b068b4008", argdata, 1, 6, &func);
}

FUNC_NAKED void WorldManager::CreateNewGame()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1209::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1210
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("WorldManager::HostileEnvironment", typeid(bool (WorldManager::*)()), "5383ec188b5c24208d4308890424", argdata, 1, 2, &func);
}

FUNC_NAKED bool WorldManager::HostileEnvironment()
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1210::func));
	__asm__
	(
		"add esp, 4\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 4\n\t"
	);
}

namespace _func1211
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::AddBoarders", typeid(bool (WorldManager::*)(BoardingEvent &)), "5557565383ec2c8b7424408b5c24448b068b5008", argdata, 2, 2, &func);
}

FUNC_NAKED bool WorldManager::AddBoarders(BoardingEvent &boardingEvent)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// boardingEvent
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1211::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1212
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::CreateStore", typeid(void (WorldManager::*)(LocationEvent *)), "565383ec148b7424248b5c24208b86d4020000", argdata, 2, 6, &func);
}

FUNC_NAKED void WorldManager::CreateStore(LocationEvent *event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push eax\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// event
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1212::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop eax\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1213
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("WorldManager::CheckRequirements", typeid(bool (WorldManager::*)(LocationEvent *)), "5557565383ec3c8b5c245485db", argdata, 2, 2, &func);
}

FUNC_NAKED bool WorldManager::CheckRequirements(LocationEvent *event)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// event
		"push [ebp+8]\n\t"		// this
	);
	__asm__("call %0\n\t" :: "m"(_func1213::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1214
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("freetype::easy_measurePrintLines", typeid(double (*)(int , float , float , int , const std::string &)), "5589e5565383ec208b5d088d45f289442408", argdata, 5, 10, &func);
}

FUNC_NAKED double freetype::easy_measurePrintLines(int fontData, float x, float y, int width, const std::string &text)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// text
		"push [ebp+20]\n\t"		// width
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// fontData
	);
	__asm__("call %0\n\t" :: "m"(_func1214::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1215
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("freetype::easy_measureWidth", typeid(int (*)(int , const std::string &)), "5589e5565383ec308d45f289442408", argdata, 2, 2, &func);
}

FUNC_NAKED int freetype::easy_measureWidth(int fontData, const std::string &text)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+12]\n\t"		// text
		"push [ebp+8]\n\t"		// fontData
	);
	__asm__("call %0\n\t" :: "m"(_func1215::func));
	__asm__
	(
		"add esp, 8\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 8\n\t"
	);
}

namespace _func1216
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("freetype::easy_print", typeid(int (*)(int , float , float , const std::string &)), ".5589e5565383ec308b5d088d45f289442408", argdata, 4, 2, &func);
}

FUNC_NAKED int freetype::easy_print(int fontData, float x, float y, const std::string &text)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// text
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// fontData
	);
	__asm__("call %0\n\t" :: "m"(_func1216::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1217
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("freetype::easy_printRightAlign", typeid(int (*)(int , float , float , const std::string &)), ".5589e5565383ec308b5d088d45f289442408", argdata, 4, 2, &func);
}

FUNC_NAKED int freetype::easy_printRightAlign(int fontData, float x, float y, const std::string &text)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// text
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// fontData
	);
	__asm__("call %0\n\t" :: "m"(_func1217::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1218
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("freetype::easy_printNewlinesCentered", typeid(int (*)(int , float , float , int , const std::string &)), ".5589e5565383ec308b5d088d45f289442408", argdata, 5, 2, &func);
}

FUNC_NAKED int freetype::easy_printNewlinesCentered(int fontData, float x, float y, int width, const std::string &text)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// text
		"push [ebp+20]\n\t"		// width
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// fontData
	);
	__asm__("call %0\n\t" :: "m"(_func1218::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1219
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("freetype::easy_printAutoNewlines", typeid(int (*)(int , float , float , int , const std::string &)), ".5589e5565383ec308b5d088d45f289442408", argdata, 5, 2, &func);
}

FUNC_NAKED int freetype::easy_printAutoNewlines(int fontData, float x, float y, int width, const std::string &text)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+24]\n\t"		// text
		"push [ebp+20]\n\t"		// width
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// fontData
	);
	__asm__("call %0\n\t" :: "m"(_func1219::func));
	__asm__
	(
		"add esp, 20\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 20\n\t"
	);
}

namespace _func1220
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("freetype::easy_printCenter", typeid(double (*)(int , float , float , const std::string &)), ".5589e5565383ec308b5d088d45f289442408", argdata, 4, 10, &func);
}

FUNC_NAKED double freetype::easy_printCenter(int fontData, float x, float y, const std::string &text)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+20]\n\t"		// text
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// fontData
	);
	__asm__("call %0\n\t" :: "m"(_func1220::func));
	__asm__
	(
		"add esp, 16\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 16\n\t"
	);
}

namespace _func1221
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("freetype::easy_printAutoShrink", typeid(int (*)(int , float , float , int , char , const std::string &)), "5589e557565383ec6c8b7d088b75188b4514", argdata, 6, 2, &func);
}

FUNC_NAKED int freetype::easy_printAutoShrink(int fontData, float x, float y, int width, char unk, const std::string &text)
{
	__asm__
	(
		"push ebp\n\t"
		"mov ebp, esp\n\t"
		"push edx\n\t"
		"push ecx\n\t"
		"push ebx\n\t"
		"push esi\n\t"
		"push edi\n\t"
		"push [ebp+28]\n\t"		// text
		"push [ebp+24]\n\t"		// unk
		"push [ebp+20]\n\t"		// width
		"push [ebp+16]\n\t"		// y
		"push [ebp+12]\n\t"		// x
		"push [ebp+8]\n\t"		// fontData
	);
	__asm__("call %0\n\t" :: "m"(_func1221::func));
	__asm__
	(
		"add esp, 24\n\t"
		"pop edi\n\t"
		"pop esi\n\t"
		"pop ebx\n\t"
		"pop ecx\n\t"
		"pop edx\n\t"
		"mov esp, ebp\n\t"
		"pop ebp\n\t"
		"ret 24\n\t"
	);
}

