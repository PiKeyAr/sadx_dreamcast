#include "stdafx.h"
#include "textures.h"
#include "SH_bus.h"
#include "SH_yellowcar.h"
#include "SH_bluecar.h"
#include "SH_redcar.h"
#include "SH_helicopter.h"
#include "SH_turnasi.h"
#include "SH_glass.h"
#include "Highway_objects.h"
#include "HW_Jammer.h"

NJS_TEXNAME textures_highway1[89];
NJS_TEXLIST texlist_hw1 = { arrayptrandlength(textures_highway1) };

NJS_TEXNAME textures_highway2[32];
NJS_TEXLIST texlist_hw2 = { arrayptrandlength(textures_highway2) };

NJS_TEXNAME textures_highway3[107];
NJS_TEXLIST texlist_hw3 = { arrayptrandlength(textures_highway3) };

FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
FunctionPointer(long double, sub_49CC70, (float a1, float a2, float a3), 0x49CC70);
FunctionPointer(void, sub_408530, (NJS_OBJECT *obj), 0x408530);
FunctionPointer(void, sub_407FC0, (NJS_MODEL_SADX *a1, int blend), 0x407FC0);

static int shwwater = 0;

PVMEntry SpeedHighway3Textures_list[] = {
	{ "HIGHWAY03", (TexList *)&HIGHWAY03_TEXLIST },
	{ "EC_WATER", (TexList *)0x10F30A0 },
};

void FountainPart1(NJS_MODEL_SADX *a1, int a2, float a3)
{
	DrawQueueDepthBias = 2000.0f;
	sub_409E70(&attachSTG04_00135B64, 4, a3);
}

void FountainPart2(NJS_MODEL_SADX *a1, int a2, float a3)
{
	DrawQueueDepthBias = 4000.0f;
	sub_409E70(&attachSTG04_00135920, 4, a3);
}

void FountainPart3(NJS_MODEL_SADX *a1, int a2, float a3)
{
	DrawQueueDepthBias = 6000.0f;
	sub_409E70(&attachSTG04_00135454, 4, a3);
}

NJS_MATERIAL* DisableAlphaRejection_SpeedHighway[] = {
	((NJS_MATERIAL*)0x02696920), //OLmpa
};

NJS_MATERIAL* WhiteDiffuse_HighwayExternal[] = {
	//Level stuff
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
};

NJS_MATERIAL* WhiteDiffuse_Highway[] = {
	//OAntena
	((NJS_MATERIAL*)0x02691188),
	((NJS_MATERIAL*)0x0269119C),
	//Helicopter
	((NJS_MATERIAL*)0x0268CB54),
	((NJS_MATERIAL*)0x0268CB68),
	((NJS_MATERIAL*)0x0268CB7C),
	&matlistSTG04_001591D8[0],
	&matlistSTG04_001591D8[1],
	&matlistSTG04_001591D8[2],
	//Cone
	&matlistSTG04_001552C0[0],
	//Cop speeder
	((NJS_MATERIAL*)0x00971AA0),
	((NJS_MATERIAL*)0x00971AB4),
	((NJS_MATERIAL*)0x00971AF0),
};

void RocketSprite(float a, float r, float g, float b)
{
	float af;
	if (a < 0.0f) af = 0; else af = a;
	SetMaterialAndSpriteColor_Float(af, r, g, b);
}

void AntennaModel(NJS_OBJECT *obj)
{
	sub_408530(&objectSTG04_022919C0);
	ProcessModelNode(&objectSTG04_022919C0_2, (QueuedModelFlagsB)0, 1.0f);
}

void AntennaSprite(NJS_ARGB *a1)
{
	NJS_ARGB q1;
	q1.a = 1.0f;
	if (a1->r < 0.0f)
	{
		q1.r = 0;
		q1.g = 0;
		q1.b = 0;
	}
	else if (a1->r > 1.0f)
	{
		q1.r = 1.0f;
		q1.g = 1.0f;
		q1.b = 1.0f;
	}
	else
	{
		q1.r = a1->r;
		q1.g = a1->g;
		q1.b = a1->b;
	}
	SetMaterialAndSpriteColor(&q1);
}

void SetCopSpeederEffectAlpha(float a, float r, float g, float b)
{
	SetMaterialAndSpriteColor_Float(a-0.1f, 1.0f, 1.0f, 0.95f);
}

static void __cdecl FountainDisplay_r(ObjectMaster *a1);
static Trampoline FountainDisplay_t(0x61BA10, 0x61BA15, FountainDisplay_r);
static void __cdecl FountainDisplay_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(FountainDisplay_r)*>(FountainDisplay_t.Target());
	if (EnableSpeedHighway)
	{
		if (!MissedFrames)
		{
			njSetTexture((NJS_TEXLIST*)0x10F30A0);
			njPushMatrix(0);
			
			njTranslate(0, ((NJS_OBJECT*)STG04_2_Info->getdata("objectSTG04_00133AD8"))->pos[0], ((NJS_OBJECT*)STG04_2_Info->getdata("objectSTG04_00133AD8"))->pos[1], ((NJS_OBJECT*)STG04_2_Info->getdata("objectSTG04_00133AD8"))->pos[2]);
			sub_407FC0((NJS_MODEL_SADX*)STG04_2_Info->getdata("attachSTG04_00133AB0"), 4);
			njPopMatrix(1u);
		}
	}
	original(a1);
}

void UnloadLevelFiles_STG04()
{
	if (DLLLoaded_Lantern)
	{
		material_unregister_ptr(WhiteDiffuse_HighwayExternal, LengthOfArray(WhiteDiffuse_HighwayExternal), &ForceWhiteDiffuse1);
	}
	delete STG04_0_Info;
	delete STG04_1_Info;
	delete STG04_2_Info;
	STG04_0_Info = nullptr;
	STG04_1_Info = nullptr;
	STG04_2_Info = nullptr;
}

void LoadLevelFiles_STG04()
{
	CheckAndUnloadLevelFiles();
	STG04_0_Info = new LandTableInfo(ModPath + "\\data\\STG04\\0.sa1lvl");
	STG04_1_Info = new LandTableInfo(ModPath + "\\data\\STG04\\1.sa1lvl");
	STG04_2_Info = new LandTableInfo(ModPath + "\\data\\STG04\\2.sa1lvl");
	LandTable *STG04_0 = STG04_0_Info->getlandtable();
	LandTable *STG04_1 = STG04_1_Info->getlandtable();
	LandTable *STG04_2 = STG04_2_Info->getlandtable();
	STG04_0->TexList = &texlist_hw1;
	STG04_1->TexList = &texlist_hw2;
	STG04_2->TexList = &texlist_hw3;
	WriteData((LandTable**)0x97DA88, STG04_0);
	WriteData((LandTable**)0x97DA8C, STG04_1);
	WriteData((LandTable**)0x97DA90, STG04_2);
	if (DLLLoaded_Lantern)
	{
		WhiteDiffuse_HighwayExternal[0] = &((NJS_MATERIAL*)STG04_0_Info->getdata("matlistSTG04_000774B8"))[0];
		WhiteDiffuse_HighwayExternal[1] = &((NJS_MATERIAL*)STG04_0_Info->getdata("matlistSTG04_000774B8"))[1];
		WhiteDiffuse_HighwayExternal[2] = &((NJS_MATERIAL*)STG04_0_Info->getdata("matlistSTG04_000774B8"))[2];
		WhiteDiffuse_HighwayExternal[3] = &((NJS_MATERIAL*)STG04_0_Info->getdata("matlistSTG04_000774B8"))[3];
		WhiteDiffuse_HighwayExternal[4] = &((NJS_MATERIAL*)STG04_0_Info->getdata("matlistSTG04_000774B8"))[4];
		WhiteDiffuse_HighwayExternal[5] = &((NJS_MATERIAL*)STG04_0_Info->getdata("matlistSTG04_000774B8"))[5];
		WhiteDiffuse_HighwayExternal[6] = &((NJS_MATERIAL*)STG04_0_Info->getdata("matlistSTG04_000774B8"))[6];
		WhiteDiffuse_HighwayExternal[7] = &((NJS_MATERIAL*)STG04_0_Info->getdata("matlistSTG04_000774B8"))[7];
		WhiteDiffuse_HighwayExternal[8] = &((NJS_MATERIAL*)STG04_0_Info->getdata("matlistSTG04_000774B8"))[8];
		WhiteDiffuse_HighwayExternal[9] = &((NJS_MATERIAL*)STG04_0_Info->getdata("matlistSTG04_000774B8"))[9];
		material_register_ptr(WhiteDiffuse_HighwayExternal, LengthOfArray(WhiteDiffuse_HighwayExternal), &ForceWhiteDiffuse1);
	}
}

void SpeedHighway_Init()
{
	ReplaceBIN("PL_40B", "PL_40X");
	ReplaceBIN("PL_41B", "PL_41X");
	ReplaceBIN_DC("CAM0400M");
	ReplaceBIN_DC("CAM0400S");
	ReplaceBIN_DC("CAM0401S");
	ReplaceBIN_DC("CAM0402K");
	ReplaceBIN_DC("CAM0402S");
	ReplaceBIN_DC("SET0400M");
	ReplaceBIN_DC("SET0400S");
	ReplaceBIN_DC("SET0401S");
	ReplaceBIN_DC("SET0402K");
	ReplaceBIN_DC("SET0402S");
	switch (EnableSETFixes)
	{
	case SETFixes_Normal:
		AddSETFix("SET0400M");
		AddSETFix("SET0400S");
		AddSETFix("SET0401S");
		AddSETFix("SET0402K");
		AddSETFix("SET0402S");
		break;
	case SETFixes_Extra:
		AddSETFix_Extra("SET0400M");
		AddSETFix_Extra("SET0400S");
		AddSETFix_Extra("SET0401S");
		AddSETFix_Extra("SET0402K");
		AddSETFix_Extra("SET0402S");
		break;
	default:
		break;
	}
	ReplacePVM("BG_HIGHWAY");
	ReplacePVM("BG_HIGHWAY01");
	ReplacePVM("BG_HIGHWAY02");
	ReplacePVM("BG_HIGHWAY03");
	ReplacePVM("HIGHWAY01");
	ReplacePVM("HIGHWAY02");
	ReplacePVM("HIGHWAY03");
	ReplacePVM("HIGHWAY_CAR");
	ReplacePVM("OBJ_HIGHWAY");
	ReplacePVM("OBJ_HIGHWAY2");
	ResizeTextureList(&HIGHWAY_CAR_TEXLIST, 16);
	//Fountain fixes
	WriteCall((void*)0x0061BAA0, FountainPart1);
	WriteCall((void*)0x0061BAF1, FountainPart2);
	WriteCall((void*)0x0061BB31, FountainPart3);
	WriteData((NJS_OBJECT**)0x0061BC4C, &objectSTG04_00134B34); //Fountain bottom
	WriteData((NJS_OBJECT**)0x026B3150, &objectSTG04_001350C8); //Fountain side
	//Fountain animation enhancement
	TexLists_Level[11]->PVMList = (PVMEntry*)&SpeedHighway3Textures_list;
	TexLists_Level[11]->NumTextures = LengthOfArray(SpeedHighway3Textures_list);
	*(NJS_OBJECT*)0x0266403C = object_00136320; //OJamer
	WriteData((NJS_TEXNAME**)0x26B2968, (NJS_TEXNAME*)0x2670590); //OJamer texture list 1
	WriteData((NJS_TEXNAME**)0x26B2960, (NJS_TEXNAME*)0x2670554); //OJamer texture list 2
	*(NJS_OBJECT*)0x026919C0 = objectSTG04_022919C0; //Antenna model
	WriteCall((void*)0x00615D60, AntennaModel);
	WriteData<1>((char*)0x004B19E2, 0x08); //Cop speeder effect blending
	WriteCall((void*)0x4B1C6F, SetCopSpeederEffectAlpha);
	//Fix light sprites in various objects
	((NJS_MATERIAL*)0x02696920)->diffuse.color = 0xFFFFFFFF; //OLmpa
	WriteData<1>((char*)0x00615DBB, 0x8); //Antenna sprite blending SA_SRC
	WriteData((float**)0x00615DA0, (float*)0x7DCB10); //Antenna sprite maximum brightness 1.0 instead of 0.5
	WriteData((float**)0x00616625, (float*)0x7DCC98); //GCLight sprite maximum brightness 0.5 instead of 0.8
	WriteData((float**)0x0061662B, (float*)0x7DCB5C); //Prevent inversion of the GCLight sprite alpha sign
	WriteCall((void*)0x00615DB5, AntennaSprite);
	WriteCall((void*)0x00616649, AntennaSprite); //This works for GCLight too
	WriteCall((void*)0x00614122, RocketSprite);
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(WhiteDiffuse_Highway, LengthOfArray(WhiteDiffuse_Highway), &ForceWhiteDiffuse1);
		if (set_alpha_reject_ptr != nullptr) material_register_ptr(DisableAlphaRejection_SpeedHighway, LengthOfArray(DisableAlphaRejection_SpeedHighway), &DisableAlphaRejection);
	}
	//Helicopter light
	((NJS_OBJECT*)0x268CF20)->child->sibling->evalflags |= NJD_EVAL_HIDE;
	*(NJS_MODEL_SADX*)0x268CEF4 = attachSTG04_00159560;
	((NJS_OBJECT*)0x268CF20)->model = &attachSTG04_00159560;
	//WriteData((char*)0x00613787, 0x01, 1); //Light blending mode
	((NJS_MATERIAL*)0x0268C98C)->diffuse.color = 0xB2B2B2B2;
	//OJamer lighting
	((NJS_MATERIAL*)0x0266390C)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x02663920)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x02663948)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	//NBox1 specular
	((NJS_MATERIAL*)0x0267F418)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267F42C)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267F440)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267F454)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267F468)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267F47C)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267F490)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267F4A4)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267FDD0)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267FDE4)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267FDF8)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267FE0C)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267FE20)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267FE34)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267FE48)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0267FE5C)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	//Nbox2 specular
	((NJS_MATERIAL*)0x02680788)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0268079C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x026807B0)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x026807C4)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x026807D8)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x026807EC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x02680800)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x026812B8)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x026812CC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x026812E0)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x026812F4)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x02681308)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0268131C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x02681330)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	*(NJS_OBJECT*)0x0268843C = objectSTG04_001554A8; //Cone
	WriteData((char*)0x006165DF, 0x00, 1); //Cone blending mode
	*(NJS_OBJECT*)0x0267497C = objectSTG04_001434F4; //Platform
	*(NJS_OBJECT*)0x02687284 = objectSTG04_02287284; //Small plant in Act 3
	*(NJS_ACTION*)0x02674424 = action_Platform2_action;
	*(NJS_OBJECT*)0x02679ECC = objectSTG04_00148880; //Platform (Tails)
	//*(NJS_OBJECT*)0x026A0008 = objectSTG04_0016B6FC; //Missile (Tails)
	*(NJS_OBJECT*)0x0267225C = objectSTG04_00140EA4; //OCrane
	*(NJS_OBJECT*)0x02690DCC = objectSTG04_0015C898; //Escalator2
	*(NJS_OBJECT*)0x0268F054 = objectSTG04_0015B100; //Escalator1
	//*(NJS_OBJECT*)0x0266387C = objectSTG04_00135B8C; //Fountain top
	*(NJS_MODEL_SADX*)0x02696630 = attachSTG04_00161F5C; //Clock tower
	((NJS_OBJECT*)0x026785FC)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //material fix for container A
	((NJS_OBJECT*)0x0267943C)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2; //material fix for container A
	((NJS_OBJECT*)0x02676A4C)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //material fix for container B
	*(NJS_OBJECT*)0x026777D4 = objectSTG04_00146254;//container B top broken 1
	*(NJS_OBJECT*)0x02677288 = objectSTG04_00145D34;//container B top broken 2
	WriteData<1>((void*)0x00619545, 1); //blending mode for poster
	WriteData<1>((void*)0x0061A8EA, 0); //blending mode for glass
	WriteData<1>((void*)0x0061A8EA, 0); //blending mode for glass 2
	WriteData<1>((void*)0x0061A951, 0); //blending mode for glass 3
	((NJS_TEXLIST*)0x26B2B90)->textures = (NJS_TEXNAME*)0x26705CC; //Texlists for posters
	((NJS_TEXLIST*)0x26B2B98)->textures = (NJS_TEXNAME*)0x26705F0; //Texlists for posters
	((NJS_TEXLIST*)0x26B2BA0)->textures = (NJS_TEXNAME*)0x2670614; //Texlists for posters
	((NJS_TEXLIST*)0x26B2BA8)->textures = (NJS_TEXNAME*)0x2670638; //Texlists for posters
	((NJS_TEXLIST*)0x26B2BB0)->textures = (NJS_TEXNAME*)0x267065C; //Texlists for posters
	ResizeTextureList((NJS_TEXLIST*)0x2592E8C, textures_highway1);
	ResizeTextureList((NJS_TEXLIST*)0x2581310, textures_highway2);
	ResizeTextureList((NJS_TEXLIST*)0x24CAC94, textures_highway3);
	ResizeTextureList(&OBJ_HIGHWAY_TEXLIST, 118);
	((NJS_OBJECT *)0x02671A20)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA; //O Crane platform alpha fix
	((NJS_OBJECT *)0x02671A20)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //O Crane platform specular
	*(NJS_OBJECT*)0x0267DC14 = objectSTG04_0227DC14; //Turnasi part 1
	*(NJS_OBJECT*)0x0267D3B4 = objectSTG04_0014ABC8; //Turnasi part 2
	*(NJS_OBJECT*)0x0267C7AC = objectSTG04_0014A5B0; //Turnasi part 3
	*(NJS_OBJECT*)0x0268C058 = objectSTG04_0228C058; //SH Helicopter
	*(NJS_OBJECT*)0x0266D90C = objectSTG04_0013D068; //SH Bus
	*(NJS_OBJECT*)0x0266B484 = objectSTG04_0013B15C; //SH Red Car
	*(NJS_OBJECT*)0x026682B8 = objectSTG04_0013949C; //SH Blue Car
	*(NJS_OBJECT*)0x0266FC8C = objectSTG04_0013E9CC; //SH Yellow Car
	*(NJS_MODEL_SADX*)0x0267A1A0 = attachSTG04_00148B24; //SH Glass
	//Glass fragments
	*(NJS_OBJECT*)0x02679FDC = objectSTG04_00148984;
	*(NJS_OBJECT*)0x0267A2DC = objectSTG04_00148C50;
	*(NJS_OBJECT*)0x0267A410 = objectSTG04_00148D54;
	*(NJS_OBJECT*)0x0267A56C = objectSTG04_00148E5C;
	*(NJS_OBJECT*)0x0267A67C = objectSTG04_00148F64;
	*(NJS_OBJECT*)0x0267A7B0 = objectSTG04_0014906C;
	*(NJS_OBJECT*)0x0267A8C0 = objectSTG04_00149174;
	*(NJS_OBJECT*)0x0267AA7C = objectSTG04_001492CC;
	*(NJS_OBJECT*)0x0267ABB0 = objectSTG04_001493D4;
	*(NJS_OBJECT*)0x0267ACC0 = objectSTG04_001494D8;
	*(NJS_OBJECT*)0x0267ADD0 = objectSTG04_001495DC;
	*(NJS_OBJECT*)0x0267AF14 = objectSTG04_001496F4;
	*(NJS_OBJECT*)0x0267B06C = objectSTG04_001497F8;
	//Fountain materials
	((NJS_OBJECT*)0x0266387C)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
	((NJS_OBJECT*)0x0266387C)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
	((NJS_OBJECT*)0x02663488)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
	((NJS_OBJECT*)0x02663488)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
	((NJS_OBJECT*)0x02662D68)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
	((NJS_OBJECT*)0x02662D68)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
	DataArray(FogData, SpeedHighway1Fog, 0x024CA4E4, 3);
	DataArray(FogData, SpeedHighway2Fog, 0x024CA514, 3);
	DataArray(FogData, SpeedHighway3Fog, 0x024CA544, 3);
	for (unsigned int i = 0; i < 3; i++)
	{
		SpeedHighway1Fog[i].Layer = 2000.0f;
		SpeedHighway1Fog[i].Distance = 5200.0f;
		SpeedHighway3Fog[i].Color = 0xFF7FB2E5;
		SpeedHighway3Fog[i].Layer = 1200.0f;
		SpeedHighway3Fog[i].Distance = 2900.0f;
		SpeedHighway3Fog[i].Toggle = 1;
		SpeedHighway2Fog[i].Layer = 1600.0f;
		SpeedHighway2Fog[i].Distance = 4800.0f;
		SpeedHighway2Fog[i].Color = 0xFF300020;
	}
}

void SpeedHighway_OnFrame()
{
	if (CurrentLevel == 4)
	{
		if (STG04_2_Info && CurrentAct == 2 && GameState != 16)
		{
			if ((FramerateSetting < 2 && FrameCounterUnpaused % 4 == 0) || (FramerateSetting >= 2 && FrameCounterUnpaused % 2 == 0)) shwwater++;
			if (shwwater > 13) shwwater = 0;
			((NJS_MATERIAL*)STG04_2_Info->getdata("matlistSTG04_001338A0"))[0].attr_texId = shwwater;
		}
	}
}