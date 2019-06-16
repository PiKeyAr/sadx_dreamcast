#include "stdafx.h"

enum SpriteThingFlagsA : __int8
{
	SpriteThingFlagsA_Scale = 0x1,
	SpriteThingFlagsA_2 = 0x2,
	SpriteThingFlagsA_4 = 0x4,
	SpriteThingFlagsA_8 = 0x8,
	SpriteThingFlagsA_10 = 0x10,
	SpriteThingFlagsA_20 = 0x20,
	SpriteThingFlagsA_40 = 0x40,
	SpriteThingFlagsA_80 = 0x80,
};

enum SpriteThingFlagsB : __int8
{
	SpriteThingFlagsB_1 = 0x1,
	SpriteThingFlagsB_2 = 0x2,
	SpriteThingFlagsB_4 = 0x4,
	SpriteThingFlagsB_8 = 0x8,
	SpriteThingFlagsB_10 = 0x10,
	SpriteThingFlagsB_20 = 0x20,
	SpriteThingFlagsB_40 = 0x40,
	SpriteThingFlagsB_80 = 0x80,
};

struct __declspec(align(8)) SomeSpriteThing
{
	SpriteThingFlagsA flags_a;
	SpriteThingFlagsB flags_b;
	__int16 field_2;
	unsigned int max_value;
	unsigned int value;
	float x;
	float y;
	int z;
	float scale;
	NJS_COLOR color;
};

DataPointer(NJS_POINT3COL, stru_9894C0, 0x9894C0);
DataPointer(NJS_VECTOR, FuseLine1, 0x3C5C484);
DataPointer(NJS_VECTOR, FuseLine2, 0x3C5C490);
DataPointer(int, PerfectChaosTornadoSpeed1, 0x1426CA0);
DataPointer(int, PerfectChaosTornadoSpeed2, 0x1426CA4);
DataPointer(int, PerfectChaosTornadoSpeed3, 0x1426CA8);
DataPointer(int, PerfectChaosTornadoSpeed4, 0x1426CAC);
FunctionPointer(void, OHae_Display, (ObjectMaster *a1), 0x5C8A20);
FunctionPointer(void, Fishies_Display, (ObjectMaster *a1), 0x4FC770);
FunctionPointer(void, CreateFireParticle, (NJS_VECTOR *a1, NJS_VECTOR *a2, float a3), 0x4CB060);
FunctionPointer(void, FireSprite, (ObjectMaster *a1), 0x5E81E0);
FunctionPointer(void, DrawSparkSprite, (ObjectMaster *a1), 0x4BAE50);
FunctionPointer(void, Chaos0_Raindrop_Display, (ObjectMaster *a1), 0x546090);
FunctionPointer(void, sub_4083F0, (NJS_ACTION *a1, float a2, int a3, float a4), 0x4083F0);
FunctionPointer(void, DrawHudCharacter, (SomeSpriteThing *a1), 0x427BB0);

//Main
static int FramerateSettingOld = 0;
static int FrameCounter_Half = 0;
static int MissedFrames_Half = 1;
static bool FixesApplied = false;

//General
float BigHudFix_float = 2.0f; //For both 30 and 60 FPS because it's broken in SADX
short RingCountFlashSpeed = 512;
float InvincibilitySpeed = 0.84f;
float DashPanelAnimationSpeedOverride = 0.25f;
short SpinnerYAnimationSpeedOverride = 384;
short SpinnerXAnimationSpeedOverride = 288;
short SpinnerZAnimationSpeedOverride = 416;
short SpinnerBladesAnimationSpeedOverride = 6144;
short EmeraldPieceAnimationSpeedOverride = 128;
float TailsWiggleSpeed_Run = 0.005f;
float TailsWiggleSpeed_RunX2 = 0.01f;
float TailsWiggleSpeed_Rotation = 2048.0f;
float TailsWiggleSpeed_RotationX2 = 4096.0f;
short Tails_819 = 819;
short Tails_20480 = 20480;
short Tails_2048 = 2048;
short Tails_1792 = 1792;
short Tails_1280 = 1280;
short Tails_1536 = 1536;
short HintMonitorAnimationSpeedOverride = 364;
char LeonTimer1 = 20;
char LeonTimer2 = 60;

//Emerald Coast
char TakiSpeed = 8;

//Windy Valley
short TornadoSpeed = 172;
float TornadoCenterLayer = 1.5f;
double OHaneaSpeedOverride = 0.0013888885f;
double OSetiffNegativeSpeedOverride = -0.0013888885f; //Debris
float LeafPathRotxyOverride = 512.0f;
float LeafPathPositionOverride = 0.444999995f; 
float WCWindSpeedOverride = 0.05f;

//Twinkle Park
float Flag1AnimationSpeedOverride = 0.2f;

//Red Mountain
float OGLSpeedOverride = 0.25f;

//Sky Deck
float OMekaSpeedOverride = 0.5f;
float TankhSpeedOverride = 0.25f;

//Casinopolis
double OKaizAnimationSpeedOverride = 0.001388885f;
int OCrystalAnimationSpeedOverride = 168;

//Ice Cap
float AvalancheMultiplier = 12.5f;

//Lost World
float OTPanel1SpeedOverride = 0.0084745765f;
char OTPanelTimer = 120;
char LostWorldDoorFix = 34;
char LostWorldDoorFix1 = 6;

//Final Egg
float OFunAnimationSpeedOverride = 0.25f; //Floating Fan Animation Speed Tweak

//Animals
float BubbleMovementSpeed = 0.0049999999f; //0.0099999998 at 60
float BubbleMovementSpeed2 = 0.0249999985f; //0.049999997 at 60
float BubbleMovementSpeed3 = 0.039999999f; //0.079999998 at 60
float BubbleRotationSpeed = 91.022225f; //182.04445 at 60
float AnimalMultiplier2 = 0.44999999f; //0.89999998 at 60
float AnimalGravity = 0.140475005f; //0.28095001 at 60
float AnimalPositionMultiplier = 0.125f; //0.25 at 60
float DistanceMultiplier_3 = 1.5f;
float DistanceMultiplier_1 = 0.5f;
float DistanceMultiplier_4 = 2.0f;
float DistanceMultiplier_8 = 4.0f;

static void __cdecl AmyHammerEffect_r(ObjectMaster *a1);
static Trampoline AmyHammerEffect_t(0x4C5BC0, 0x4C5BC9, AmyHammerEffect_r);
static void __cdecl AmyHammerEffect_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(AmyHammerEffect_r)*>(AmyHammerEffect_t.Target());
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) original(a1);
	}
	else original(a1);
}

static void __cdecl OHae_Main_r(ObjectMaster *a1);
static Trampoline OHae_Main_t(0x5C8B40, 0x5C8B48, OHae_Main_r);
static void __cdecl OHae_Main_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(OHae_Main_r)*>(OHae_Main_t.Target());
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) original(a1);
		else OHae_Display(a1);
	}
	else original(a1);
}

static void __cdecl OWsr2_Main_r(ObjectMaster *a1);
static Trampoline OWsr2_Main_t(0x5C93F0, 0x5C93F9, OWsr2_Main_r);
static void __cdecl OWsr2_Main_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(OWsr2_Main_r)*>(OWsr2_Main_t.Target());
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) original(a1);
	}
	else original(a1);
}

void __cdecl Fuse_Fixed(ObjectMaster *a1)
{
	EntityData1 *v1; // edi
	unsigned __int16 v2; // ax
	NJS_VECTOR *v3; // esi
	float *v4; // eax
	double v5; // st7
	double v6; // st6
	float v7; // ST34_4
	float v8; // edx
	float *v9; // eax
	float v10; // ST34_4
	float v11; // ST38_4
	float v12; // ST28_4
	double v13; // st7
	float v14; // ST34_4
	double v15; // st7
	double v16; // st6
	double v17; // st5
	double v18; // st4
	double v19; // st6
	float v20; // ST38_4
	float v21; // [esp+18h] [ebp+4h]
	float v22; // [esp+18h] [ebp+4h]
	float v23; // [esp+18h] [ebp+4h]
	float v24; // [esp+18h] [ebp+4h]
	v1 = a1->Data1;
	v2 = v1->InvulnerableTime;
	if (FrameCounter % 2 == 0)
	{
		v1->InvulnerableTime = v2 + 2;
		if (v2 <= 0xFu)
		{
			v3 = &v1->Position;
			if (IsVisible(&v1->Position, 5.0))
			{
				v4 = &v1->Scale.y;
				v21 = v1->Scale.x * 0.97500002;
				v5 = v1->Scale.y * 0.97500002 - 0.085000001;
				v6 = v1->Scale.z * 0.97500002;
				v4[1] = v6;
				*v4 = v5;
				*(v4 - 1) = v21;
				v7 = v3->x;
				v8 = v1->Position.y;
				v1->Position.z = v6 + v1->Position.z;
				v9 = &v1->Position.y;
				*v9 = v8 + v5;
				*(v9 - 1) = v7 + v21;
				v22 = v1->Scale.z;
				v10 = v1->Scale.y;
				v11 = v1->Scale.x;
				v12 = v22 * v22 + v10 * v10 + v11 * v11;
				v13 = 1.0 / squareroot(v12);
				v14 = v13 * v10;
				v23 = v13 * v22;
				v15 = v11 * v13 * 0.30000001;
				v16 = v14 * 0.30000001;
				v24 = v23 * 0.30000001;
				v17 = v3->x;
				v18 = v1->Position.y;
				FuseLine1.z = v1->Position.z + v24;
				FuseLine1.y = v18 + v16;
				FuseLine1.x = v17 + v15;
				v19 = v1->Position.y - v16;
				v20 = v3->x;
				FuseLine2.z = v1->Position.z - v24;
				FuseLine2.y = v19;
				FuseLine2.x = v20 - v15;
				njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
				njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
				DrawLineList(&stru_9894C0, 1, 0);
				njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
				njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
			}
		}
		else
		{
			CheckThingButThenDeleteObject(a1);
		}
	}
	else
	{
			if (IsVisible(&v1->Position, 5.0))
			{
				v3 = &v1->Position;
				v22 = v1->Scale.z;
				v10 = v1->Scale.y;
				v11 = v1->Scale.x;
				v12 = v22 * v22 + v10 * v10 + v11 * v11;
				v13 = 1.0f / squareroot(v12);
				v14 = v13 * v10;
				v23 = v13 * v22;
				v15 = v11 * v13 * 0.30000001f;
				v16 = v14 * 0.30000001f;
				v24 = v23 * 0.30000001f;
				v17 = v3->x;
				v18 = v1->Position.y;
				FuseLine1.z = v1->Position.z + v24;
				FuseLine1.y = v18 + v16;
				FuseLine1.x = v17 + v15;
				v19 = v1->Position.y - v16;
				v20 = v3->x;
				FuseLine2.z = v1->Position.z - v24;
				FuseLine2.y = v19;
				FuseLine2.x = v20 - v15;
				njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
				njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
				DrawLineList(&stru_9894C0, 1, 0);
				njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
				njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
			}
	}
}

static void __cdecl Fishies_Main_r(ObjectMaster *a1);
static Trampoline Fishies_Main_t(0x4FC9C0, 0x4FC9C8, Fishies_Main_r);
static void __cdecl Fishies_Main_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(Fishies_Main_r)*>(Fishies_Main_t.Target());
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) original(a1);
		else Fishies_Display(a1);
	}
	else original(a1);
}

static void __cdecl Fuse_r(ObjectMaster *a1);
static Trampoline Fuse_t(0x4CE830, 0x4CE837, Fuse_r);
static void __cdecl Fuse_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(Fuse_r)*>(Fuse_t.Target());
	if (EnableSpeedFixes) Fuse_Fixed(a1);
	else original(a1);
}

static void __cdecl PBJackPot_Main_r(ObjectMaster *a1);
static Trampoline PBJackPot_Main_t(0x5E12C0, 0x5E12C7, PBJackPot_Main_r);
static void __cdecl PBJackPot_Main_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(PBJackPot_Main_r)*>(PBJackPot_Main_t.Target());
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) original(a1);
		else
		{
			RunObjectChildren(a1);
			PinballJackpot_Display(a1);
		}
	}
	else original(a1);
}

static void __cdecl OFire_r(ObjectMaster *a1);
static Trampoline OFire_t(0x5E82F0, 0x5E82F5, OFire_r);
static void __cdecl OFire_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(OFire_r)*>(OFire_t.Target());
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) original(a1);
		else FireSprite(a1);
	}
	else original(a1);
}

int GetFrameCounter_Half()
{
	if (FramerateSetting == 1) return FrameCounter_Half;
	else return FrameCounter;
}

static void __cdecl UpgradeSparks_r(ObjectMaster *a1);
static Trampoline UpgradeSparks_t(0x4BAF10, 0x4BAF15, UpgradeSparks_r);
static void __cdecl UpgradeSparks_r(ObjectMaster *a1)
{
	EntityData1 *v1; // eax
	double v2; // st7
	v1 = a1->Data1;
	v2 = v1->Scale.z;
	auto original = reinterpret_cast<decltype(UpgradeSparks_r)*>(UpgradeSparks_t.Target());
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) original(a1);
		else
		{
			if (v2 < 7)
			{
				DrawSparkSprite(a1);
			}
		}
	}
	else original(a1);
}

void RenderUpgradeSparks(NJS_SPRITE *sp, Int n, NJD_SPRITE attr, QueuedModelFlagsB zfunc_type)
{
	DrawQueueDepthBias = 2000.0f;
	SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	njDrawSprite3D_Queue(sp, n, attr, QueuedModelFlagsB_3);
	DrawQueueDepthBias = 0;
}

void RenderMainUpgradeModel(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = 1000.0f;
	ProcessModelNode(a1, a2, a3);
	DrawQueueDepthBias = 0;
}

static void __cdecl Chaos0RainThing_r(ObjectMaster *a1);
static Trampoline Chaos0RainThing_t(0x546140, 0x546146, Chaos0RainThing_r);
static void __cdecl Chaos0RainThing_r(ObjectMaster *a1)
{
	EntityData1 *v2; // esi
	double v3; // st7
	v2 = a1->Data1;
	auto original = reinterpret_cast<decltype(Chaos0RainThing_r)*>(Chaos0RainThing_t.Target());
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) original(a1);
		else 
		{
			v3 = *(float*)&v2->CharIndex - 0.033333335f;
			*(float*)&v2->CharIndex = v3;
			if (v3 >= 0.0f)
			{
				Chaos0_Raindrop_Display(a1);
			}
		}
	}
	else original(a1);
}

static int __fastcall EggHornetJetThing_r(int a1);
static Trampoline EggHornetJetThing_t(0x572620, 0x572628, EggHornetJetThing_r);
static int __fastcall EggHornetJetThing_r(int a1)
{
	auto original = reinterpret_cast<decltype(EggHornetJetThing_r)*>(EggHornetJetThing_t.Target());
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) return original(a1);
		else return a1;
	}
	else return original(a1);
}

void UnidusFix(NJS_VECTOR *a1, NJS_VECTOR *a2, float a3)
{
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) CreateFireParticle(a1, a2, a3);
	}
	else CreateFireParticle(a1, a2, a3);
}

void Bubbles_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // edi
	float a2; // ST14_4
	void *v3; // esi
	int v4; // edi
	double v5; // st7
	float v6; // eax

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		a2 = (v1->Scale.x + 410.0f) * (v1->Scale.x + 410.0f);
		if (!ClipObject(a1, a2))
		{
			v3 = (void *)v1->LoopData;
			njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
			SetMaterialAndSpriteColor((NJS_ARGB*)0x38CD514);
			v4 = v1->InvulnerableTime;
			if (v4 > 0)
			{
				do
				{
					v5 = *(float *)(*(Sint32*)&v3 + 12) * 0.03125f;
					((NJS_SPRITE*)0x38CD540)->p.x = *(float *)&v3;
					((NJS_SPRITE*)0x38CD540)->p.y = *(float *)(*(Sint32*)&v3 + 4);
					v6 = *(float *)(*(Sint32*)&v3 + 8);
					((NJS_SPRITE*)0x38CD540)->sx = v5;
					((NJS_SPRITE*)0x38CD540)->sy = v5;
					((NJS_SPRITE*)0x38CD540)->p.z = v6;
					njDrawSprite3D((NJS_SPRITE*)0x38CD540, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE | NJD_SPRITE_COLOR);
					v3 = *(void **)(*(Sint32*)&v3 + 48);
					--v4;
				} while (v4);
			}
			ClampGlobalColorThing_Thing();
			njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		}
	}
}

static void __cdecl Bubbles_r(ObjectMaster *a1);
static Trampoline Bubbles_t(0x7A88B0, 0x7A88B5, Bubbles_r);
static void __cdecl Bubbles_r(ObjectMaster *a1)
{
	EntityData1 *v2; // esi
	double v3; // st7
	v2 = a1->Data1;
	auto original = reinterpret_cast<decltype(Bubbles_r)*>(Bubbles_t.Target());
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) original(a1);
		Bubbles_Display(a1);
	}
	else original(a1);
}

void IceKeySS_Display(ObjectMaster *obj)
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	double v4; // st7
	NJS_ACTION *action;
	v1 = obj->Data1;
	if (GetCharacterObject(0)->MainSub)
	{
		if (!ObjectSelectedDebug(obj))
		{
			if (v1->Status & 0x1000) v1->Rotation.y = -EntityData1Ptrs[0]->Rotation.y;
			v4 = *(float *)&v1->Object + FramerateSetting * 0.25f;
			if (v4 >= 39.0f) v4 = 0.0f;
			*(float *)&v1->Object = v4;
		}
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		SetTextureToLevelObj();
		action = *(NJS_ACTION **)&v1->CharIndex;
		if (CharObj2Ptrs[0]->UnderwaterTime) DrawQueueDepthBias = -25000.0f;
		else  DrawQueueDepthBias = 5000.0f;
		sub_4083F0(action, *(float *)&v1->Object, 0, 1.0f);
		DrawQueueDepthBias = 0.0f;
		njPopMatrix(1u);
	}
}

void BigHudFix(SomeSpriteThing *a1)
{
		if (Rings != 0)
		{
			a1->color.color = 0xFFFFFFFF;
			DrawHudCharacter(a1);
		}
		else DrawHudCharacter(a1);
}

static void __cdecl OLamp_Display_r(ObjectMaster *a1);
static Trampoline OLamp_Display_t(0x606610, 0x606617, OLamp_Display_r);
static void __cdecl OLamp_Display_r(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	v1 = a1->Data1;
	Angle v7;
	double v6; // st7
	__int16 v5; // ax
	NJS_OBJECT obj;
	auto original = reinterpret_cast<decltype(OLamp_Display_r)*>(OLamp_Display_t.Target());
	if (EnableSpeedFixes)
	{
		if (FramerateSetting >= 2 || FrameCounter % 2 == 0) original(a1);
		else
		{
			v5 = v1->InvulnerableTime;
			v6 = *(float*)&v1->Object - 0.05f;
			v1->InvulnerableTime = v5 - 1;
			*(float*)&v1->Object = v6;
			original(a1);
		}
	}
	else original(a1);
}

void SpeedFixes_Init()
{
	//Big ring flashing HUD
	WriteData((float**)0x0046CE9B, &BigHudFix_float);
	WriteData((short*)0x0046CE6B, RingCountFlashSpeed);
	WriteCall((void*)0x46CECD, BigHudFix);
	//Ice Key in Station Square
	WriteJump((void*)0x637DE0, IceKeySS_Display);
	//Ring count when red
	WriteData((short*)0x00425DBB, RingCountFlashSpeed);
	//Invincibility
	WriteData((float**)0x004BA4A7, &InvincibilitySpeed);
	//Character bubbles
	WriteData((int**)0x004A26B3, &MissedFrames_Half);
	//Ice Cap avalanche snow sprites
	WriteData((float**)0x4EB391, &AvalancheMultiplier);
	WriteData((float**)0x4EB3B6, &AvalancheMultiplier);
	//Character upgrades
	WriteCall((void*)0x4BEA22, RenderMainUpgradeModel);
	WriteCall((void*)0x4BEA33, RenderMainUpgradeModel);
	WriteCall((void*)0x4BAEED, RenderUpgradeSparks);
	WriteCall((void*)0x4BECBD, GetFrameCounter_Half);
	WriteCall((void*)0x4BEBD4, GetFrameCounter_Half);
	WriteCall((void*)0x4BEBC3, GetFrameCounter_Half);
	WriteCall((void*)0x4BF088, GetFrameCounter_Half);
	//Animals
	//sub_4D72B0 (Bubble)
	WriteData((float**)0x004D73FB, &BubbleMovementSpeed);
	WriteData((float**)0x004D7405, &BubbleMovementSpeed);
	WriteData((float**)0x004D740F, &BubbleMovementSpeed);
	WriteData((float**)0x004D73C4, &BubbleMovementSpeed2);
	WriteData((float**)0x004D73CE, &BubbleMovementSpeed2);
	WriteData((float**)0x004D73D8, &BubbleMovementSpeed2);
	WriteData((float**)0x004D7395, &BubbleMovementSpeed3);
	WriteData((float**)0x004D72F3, &BubbleRotationSpeed);
	//sub_4D8A10 (Distance calculation)
	WriteData((float**)0x4D8B01, &DistanceMultiplier_3);
	WriteData((float**)0x4D8AE0, &DistanceMultiplier_3);
	WriteData((float**)0x4D8B07, &DistanceMultiplier_1);
	WriteData((float**)0x4D8AE6, &DistanceMultiplier_4);
	WriteData((float**)0x4D8B63, &DistanceMultiplier_3);
	WriteData((float**)0x4D8B69, &DistanceMultiplier_1);
	WriteData((float**)0x4D8B36, &DistanceMultiplier_3);
	WriteData((float**)0x4D8B3C, &DistanceMultiplier_4);
	WriteData((float**)0x4D8C4A, &DistanceMultiplier_8);
	WriteData((float**)0x4D8C58, &DistanceMultiplier_8);
	WriteData((float**)0x4D8C66, &DistanceMultiplier_8);
	//sub_4D7A40 (Goma, Rako, Gori, Zou, Mogu, Koar)
	WriteData((float**)0x004D7ACB, &BubbleRotationSpeed);
	WriteData((float**)0x004D7B61, &AnimalGravity);
	WriteData((float**)0x004D7B44, &AnimalPositionMultiplier);
	WriteData((float**)0x004D7B54, &AnimalPositionMultiplier);
	//sub_4D7C30 (Pen, Suka)
	WriteData((float**)0x004D7C56, &BubbleMovementSpeed);
	WriteData((float**)0x004D7C69, &BubbleMovementSpeed);
	WriteData((float**)0x004D7C78, &AnimalGravity);
	//sub_4D7B70 (Called by functions used by Pen and Usa)
	WriteData((float**)0x004D7BB2, &BubbleRotationSpeed);
	//sub_4D7C90 (Banb, Lion)
	WriteData((float**)0x004D7D69, &AnimalMultiplier2);
	WriteData((float**)0x004D7D75, &AnimalMultiplier2);
	WriteData((float**)0x004D7D81, &AnimalMultiplier2);
	//sub_4D7D90 (hopping)
	WriteData((float**)0x004D7DBC, &AnimalGravity);
	WriteData((float**)0x004D7E56, &BubbleMovementSpeed);
	WriteData((float**)0x004D7EF6, &AnimalMultiplier2);
	WriteData((float**)0x004D7F02, &AnimalMultiplier2);
	WriteData((float**)0x004D7F0E, &AnimalMultiplier2);
	//General
	WriteCall((void*)0x4ADEF9, UnidusFix);
	WriteData((float**)0x007A441B, &DashPanelAnimationSpeedOverride);
	WriteData((short*)0x4AFB90, SpinnerYAnimationSpeedOverride);
	WriteData((short*)0x4AFB8A, SpinnerXAnimationSpeedOverride);
	WriteData((short*)0x4AFB85, SpinnerZAnimationSpeedOverride);
	WriteData((short*)0x4AFD67, SpinnerBladesAnimationSpeedOverride);
	WriteData((short*)0x7A9BFF, HintMonitorAnimationSpeedOverride);
	WriteData<1>((char*)0x004A6B8C, LeonTimer1); //Leon timer 1
	WriteData<1>((char*)0x004A81C1, LeonTimer2); //Leon timer 2
	WriteData((short*)0x4A2CA6, EmeraldPieceAnimationSpeedOverride);
	//Tails
	WriteData((float**)0x461284, &TailsWiggleSpeed_Run);
	WriteData((float**)0x461276, &TailsWiggleSpeed_Run);
	WriteData((float**)0x4613C0, &TailsWiggleSpeed_Rotation);
	WriteData((short*)0x0045DA2C, Tails_1536); //1 
	WriteData((short*)0x0045DA0C, Tails_1280); //2
	WriteData((short*)0x0045DA14, Tails_1792); //3
	WriteData((short*)0x0045DA1C, Tails_2048); //4
	WriteData((short*)0x0045DA7D, Tails_20480); //5
	WriteData((short*)0x004612DA, Tails_819); //6
	WriteData((short*)0x004612ED, Tails_819); //7
	//Emerald Coast
	WriteData((char*)0x004FB8BE, TakiSpeed);
	//Windy Valley
	WriteData((short*)0x004DD8C8, TornadoSpeed);
	WriteData((float**)0x004DD8E7, &TornadoCenterLayer);
	WriteData((double**)0x004DF63E, &OHaneaSpeedOverride); //O Setiff Debris inside tornado
	WriteData((double**)0x004DF6C6, &OHaneaSpeedOverride); //O Setiff Debris inside tornado
	WriteData((double**)0x004DF6A2, &OSetiffNegativeSpeedOverride); //O Setiff Debris inside tornado
	WriteData((double**)0x004E1169, &OHaneaSpeedOverride); //Fans
	WriteData((double**)0x004E113E, &OHaneaSpeedOverride); //Fans
	WriteData((double**)0x004E1194, &OHaneaSpeedOverride); //Fans
	//Windpath Position 0.899
	WriteData((float**)0x004E4714, &LeafPathPositionOverride);
	WriteData((float**)0x004E471C, &LeafPathPositionOverride);
	WriteData((float**)0x004E4736, &LeafPathPositionOverride);
	WriteData((float**)0x004E473E, &LeafPathPositionOverride);
	WriteData((float**)0x004E4758, &LeafPathPositionOverride);
	WriteData((float**)0x004E4760, &LeafPathPositionOverride);
	WriteData((float**)0x004E44C3, &LeafPathPositionOverride);
	WriteData((float**)0x004E44BB, &LeafPathPositionOverride);
	WriteData((float**)0x004E44DD, &LeafPathPositionOverride);
	WriteData((float**)0x004E44E5, &LeafPathPositionOverride);
	WriteData((float**)0x004E44FF, &LeafPathPositionOverride);
	WriteData((float**)0x004E4507, &LeafPathPositionOverride);
	//Rotation 1024
	WriteData((float**)0x004E478D, &LeafPathRotxyOverride); //Windpath Rx 
	WriteData((float**)0x004E47A6, &LeafPathRotxyOverride); //Windpath Ry
	WriteData((float**)0x004E422B, &WCWindSpeedOverride);
	//Twinkle Park
	WriteData((float**)0x6201FD, &Flag1AnimationSpeedOverride); //Flag1
	WriteData((float**)0x62028D, &Flag1AnimationSpeedOverride); //Flag2
	WriteData((float**)0x62059D, &Flag1AnimationSpeedOverride); //OFlagWLamp
	//Red Mountain
	WriteData((float**)0x0060C885, &OGLSpeedOverride); //OGL Speed Tweak
	WriteData((float**)0x0060B361, &OGLSpeedOverride); //O Gear Speed Tweak
	//Sky Deck
	WriteData((float**)0x005F4146, &OMekaSpeedOverride); //OMeka OTutu	
	WriteData((float**)0x005EE248, &TankhSpeedOverride); //Tank h	
	//Casinopolis
	WriteData((double**)0x5C802C, &OKaizAnimationSpeedOverride); //OKaiza Animation Speed Tweak
	WriteData((double**)0x5C747C, &OKaizAnimationSpeedOverride); //OKaizb Animation Speed Tweak
	WriteData((double**)0x5C698C, &OKaizAnimationSpeedOverride); //Green Pirate / KaizC Animation Speed Tweak
	WriteData((double**)0x5C5E9C, &OKaizAnimationSpeedOverride); //Captain Pirate / KaizS Animation Speed Tweak
	WriteData((int**)0x5D3D68, &OCrystalAnimationSpeedOverride); //Spinning golden emerald Animation Speed Tweak	
	//Lost World
	WriteData((float**)0x005E8F37, &OTPanel1SpeedOverride); //multiplier
	WriteData((char*)0x005E8BBD, OTPanelTimer);
	WriteData((char*)0x005E7C3A, LostWorldDoorFix);
	WriteData((char*)0x005E78E1, LostWorldDoorFix);
	WriteData((char*)0x005E7C63, LostWorldDoorFix1);
	WriteData((char*)0x005E7841, LostWorldDoorFix1);
	//Final Egg
	WriteData((float**)0x005B7530, &OFunAnimationSpeedOverride); //Floating Fan Animation Speed Tweaks
	//Zero FVF shit (barriers)
	WriteData((int**)0x0058F448, &MissedFrames_Half);
	WriteData((int**)0x0058F413, &MissedFrames_Half);
}

void SpeedFixes_OnFrame()
{
	//Half frame counter
	if (FrameCounter % 2 == 0) FrameCounter_Half++;
	if (!MissedFrames && ((FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2))) MissedFrames_Half = 0; else MissedFrames_Half = 1;
	if (FramerateSettingOld != FramerateSetting)
	{
		//Original values for 30 FPS
		if (FramerateSetting >= 2)
		{
			//Ring count
			RingCountFlashSpeed = 1024;
			//Invincibility
			InvincibilitySpeed = 0.7f;
			//Ice Cap avalanche
			AvalancheMultiplier = 25.0f;
			//Animals
			BubbleMovementSpeed = 0.0099999998f;
			BubbleMovementSpeed2 = 0.04999999f;
			BubbleMovementSpeed3 = 0.079999998f;
			BubbleRotationSpeed = 182.04445f;
			AnimalMultiplier2 = 0.89999998f;
			AnimalGravity = 0.28095001f;
			AnimalPositionMultiplier = 0.25f;
			DistanceMultiplier_3 = 1.5f;
			DistanceMultiplier_1 = 0.5f;
			DistanceMultiplier_4 = 2.0f;
			DistanceMultiplier_8 = 4.0f;
			//General
			DashPanelAnimationSpeedOverride = 1.0f;
			SpinnerYAnimationSpeedOverride = 768;
			SpinnerXAnimationSpeedOverride = 576;
			SpinnerZAnimationSpeedOverride = 832;
			SpinnerBladesAnimationSpeedOverride = 12288;
			HintMonitorAnimationSpeedOverride = 728;
			LeonTimer1 = 20;
			LeonTimer2 = 60;
			EmeraldPieceAnimationSpeedOverride = 256;
			//Tails
			TailsWiggleSpeed_Run = 0.01f;
			TailsWiggleSpeed_Rotation = 4096.0f;
			Tails_1536 = 1536;
			Tails_1280 = 1280;
			Tails_1792 = 1792;
			Tails_2048 = 2048;
			Tails_20480 = 20480;
			Tails_819 = 819;
			//Emerald Coast
			TakiSpeed = 8;
			//Windy Valley
			TornadoSpeed = 345;
			TornadoCenterLayer = 3.0f;
			OHaneaSpeedOverride = 0.002777777f;
			OSetiffNegativeSpeedOverride = -0.002777777f;
			LeafPathRotxyOverride = 1024.0f;
			LeafPathPositionOverride = 0.88999999f;
			WCWindSpeedOverride = 0.05f;
			//Twinkle Park
			Flag1AnimationSpeedOverride = 0.4f;
			//Sky Deck
			OMekaSpeedOverride = 1.0f;
			TankhSpeedOverride = 1.0f;
			//Red Mountain
			OGLSpeedOverride = 0.5f;
			//Casinopolis
			OKaizAnimationSpeedOverride = 0.00277777f;
			OCrystalAnimationSpeedOverride = 336;
			//LostWorld
			OTPanel1SpeedOverride = 0.016949153f;
			OTPanelTimer = 60;
			LostWorldDoorFix = 17;
			LostWorldDoorFix1 = 3;
			//Final Egg
			OFunAnimationSpeedOverride = 1.0f;
			//Perfect Chaos
			PerfectChaosTornadoSpeed1 = 3276;
			PerfectChaosTornadoSpeed2 = 0;
			PerfectChaosTornadoSpeed3 = 1638;
			PerfectChaosTornadoSpeed4 = 1638;
			}
		//60 FPS values
		else
		{
			//Ring count
			RingCountFlashSpeed = 512;
			//Invincibility
			InvincibilitySpeed = 0.84f;
			//Ice Cap avalanche
			AvalancheMultiplier = 12.5f;
			//Animals
			BubbleMovementSpeed = 0.0049999999f;
			BubbleMovementSpeed2 = 0.0249999985f;
			BubbleMovementSpeed3 = 0.039999999f;
			BubbleRotationSpeed = 91.022225f;
			AnimalMultiplier2 = 0.44999999f;
			AnimalGravity = 0.140475005f;
			AnimalPositionMultiplier = 0.125f;
			DistanceMultiplier_3 = 3.0f;
			DistanceMultiplier_1 = 1.0f;
			DistanceMultiplier_4 = 4.0f;
			DistanceMultiplier_8 = 8.0f;
			//General
			DashPanelAnimationSpeedOverride = 0.25f;
			SpinnerYAnimationSpeedOverride = 384;
			SpinnerXAnimationSpeedOverride = 288;
			SpinnerZAnimationSpeedOverride = 416;
			SpinnerBladesAnimationSpeedOverride = 6144;
			HintMonitorAnimationSpeedOverride = 364;
			LeonTimer1 = 10;
			LeonTimer2 = 30;
			EmeraldPieceAnimationSpeedOverride = 128;
			//Tails
			TailsWiggleSpeed_Run = 0.005f;
			TailsWiggleSpeed_Rotation = 2048.0f;
			Tails_1536 = 768;
			Tails_1280 = 640;
			Tails_1792 = 896;
			Tails_2048 = 1024;
			Tails_20480 = 10240;
			Tails_819 = 409;
			//Emerald Coast
			TakiSpeed = 0;
			//Windy Valley
			TornadoSpeed = 172;
			TornadoCenterLayer = 1.5f;
			OHaneaSpeedOverride = 0.0013888885f;
			OSetiffNegativeSpeedOverride = -0.0013888885f; //Debris
			LeafPathRotxyOverride = 512.0f;
			LeafPathPositionOverride = 0.444999995f;
			WCWindSpeedOverride = 0.05f;
			//Twinkle Park
			Flag1AnimationSpeedOverride = 0.2f;
			//Red Mountain
			OGLSpeedOverride = 0.25f;
			//Sky Deck
			OMekaSpeedOverride = 0.5f;
			TankhSpeedOverride = 0.25f;
			//Casinopolis
			OKaizAnimationSpeedOverride = 0.001388885f;
			OCrystalAnimationSpeedOverride = 168;
			//Lost World
			OTPanel1SpeedOverride = 0.0084745765f;
			OTPanelTimer = 120;
			LostWorldDoorFix = 34;
			LostWorldDoorFix1 = 6;
			//Final Egg
			OFunAnimationSpeedOverride = 0.25f;
			//Perfect Chaos
			PerfectChaosTornadoSpeed1 = 6552;
			PerfectChaosTornadoSpeed2 = 0;
			PerfectChaosTornadoSpeed3 = 3276;
			PerfectChaosTornadoSpeed4 = 3276;
			}
		SpeedFixes_Init();
		FramerateSettingOld = FramerateSetting;
	}
}