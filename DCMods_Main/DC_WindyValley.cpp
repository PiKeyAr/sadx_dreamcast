#include "stdafx.h"

NJS_TEXNAME textures_windy1[20];
NJS_TEXLIST texlist_windy1 = { arrayptrandlength(textures_windy1) };

NJS_TEXNAME textures_windy2[17];
NJS_TEXLIST texlist_windy2 = { arrayptrandlength(textures_windy2) };

NJS_TEXNAME textures_windy3[28];
NJS_TEXLIST texlist_windy3 = { arrayptrandlength(textures_windy3) };

int Windy3Cols[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 }; 

/*
#include "Windy1.h"
#include "Windy2.h"
#include "Windy3.h"
*/

DataArray(SkyboxScale, SkyboxScale_Windy1, 0x00AFE924, 3);
DataArray(FogData, FogData_Windy1, 0x00AFEA20, 3);
DataArray(FogData, FogData_Windy2, 0x00AFEA50, 3);
DataArray(FogData, FogData_Windy3, 0x00AFEA80, 3);
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(NJS_VECTOR, CurrentSkybox, 0x03ABDC94);
DataPointer(NJS_BGRA, CurrentFogColorX, 0x03ABDC68);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
FunctionPointer(void, sub_408530, (NJS_OBJECT *o), 0x408530);
FunctionPointer(void, sub_408350, (NJS_ACTION *a1, float a2, int a3, float a4), 0x408350);
FunctionPointer(void, sub_4CACF0, (NJS_VECTOR *a1, float a2), 0x4CACF0);
FunctionPointer(void, sub_407FC0, (NJS_MODEL_SADX *a1, int blend), 0x407FC0);
static int TornadoMode = 0;
static float SkyTrans = 1.0f;
static bool Windy3ColsLoaded = false;
SETObjData setdata_wv = {};
NJS_VECTOR TornadoSpawnPosition = { 3254, -421, -1665 };

void RetrieveWindy1SkyTransparency(float a, float r, float g, float b)
{
	SkyTrans = a;
}

void RenderWindy1Sky()
{
	SetMaterialAndSpriteColor_Float(SkyTrans, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -30000.0f;
	ProcessModelNode((NJS_OBJECT*)0xC05E10, (QueuedModelFlagsB)0, 1.0f); //Main
	DrawQueueDepthBias = -28000.0f;
	ProcessModelNode((NJS_OBJECT*)0xC06450, (QueuedModelFlagsB)0, 1.0f); //Bottom non-trans
	SetMaterialAndSpriteColor_Float(SkyTrans* 0.6f, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -25000.0f;
	ProcessModelNode((NJS_OBJECT*)0xC0655C, (QueuedModelFlagsB)0, 1.0f); //Bottom trans
	DrawQueueDepthBias = -20000.0f;
	SetMaterialAndSpriteColor_Float(SkyTrans, 1.0f, 1.0f, 1.0f);
	ProcessModelNode((NJS_OBJECT*)0xC06344, (QueuedModelFlagsB)0, 1.0f); //Cloud 1
	DrawQueueDepthBias = -18000.0f;
	ProcessModelNode((NJS_OBJECT*)0xC06A94, (QueuedModelFlagsB)0, 1.0f); //Cloud 2
	DrawQueueDepthBias = 0;
}

void UnloadLevelFiles_STG02()
{
	for (int i = 0; i < LengthOfArray(Windy3Cols); i++)
	{
		Windy3Cols[i] = -1;
	}
	delete STG02_0_Info;
	delete STG02_1_Info;
	delete STG02_2_Info;
	STG02_0_Info = nullptr;
	STG02_1_Info = nullptr;
	STG02_2_Info = nullptr;
}

void OHasieFix(NJS_MODEL_SADX *model, float scale)
{
	sub_407FC0(model, (QueuedModelFlagsB)0);
}

void AddWindyTransparentThing(int colnumber)
{
	for (int i = 0; i < LengthOfArray(Windy3Cols); i++)
	{
		if (Windy3Cols[i] == colnumber) return;
		else if (Windy3Cols[i] == -1)
		{
			Windy3Cols[i] = colnumber;
			//PrintDebug("Added COl: %d\n", colnumber);
			return;
		}
	}
}

void ParseWindyColFlags(LandTable *landtable)
{
	int colflags;
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (colflags == 0x88000000)
		{
			if (landtable->Col[j].Flags & ColFlags_Visible) landtable->Col[j].Flags &= ~ColFlags_Visible;
			AddWindyTransparentThing(j);
		}
	}
}

void LoadLevelFiles_STG02()
{
	CheckAndUnloadLevelFiles();
	STG02_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG02\\0.sa1lvl"));
	STG02_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG02\\1.sa1lvl"));
	STG02_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG02\\2.sa1lvl"));
	LandTable *STG02_0 = STG02_0_Info->getlandtable(); //&landtable_0000D7E0; //STG02_0_Info->getlandtable();
	LandTable *STG02_1 = STG02_1_Info->getlandtable(); //&landtable_0000DB40; //STG02_1_Info->getlandtable();
	LandTable *STG02_2 = STG02_2_Info->getlandtable(); //&landtable_0000F274; //STG02_2_Info->getlandtable();
	RemoveMaterialColors_Landtable(STG02_0);
	RemoveMaterialColors_Landtable(STG02_1);
	RemoveMaterialColors_Landtable(STG02_2);
	STG02_0->TexList = &texlist_windy1;
	STG02_1->TexList = &texlist_windy2;
	STG02_2->TexList = &texlist_windy3;
	WriteData((LandTable**)0x97DA48, STG02_0); //Act 1
	WriteData((LandTable**)0x97DA4C, STG02_1); //Act 2
	WriteData((LandTable**)0x97DA50, STG02_2); //Act 3
	ParseWindyColFlags(STG02_2);
}

void DrawTransparentBrokenBlocks(NJS_MODEL_SADX *model, QueuedModelFlagsB blend)
{
	DrawQueueDepthBias = 5000.0f;
	DrawModel_Queue(model, blend);
	DrawQueueDepthBias = 0.0f;
}

void DrawTransparentBrokenBlocksExplosion(NJS_VECTOR *a1, float a2)
{
	ParticleDepthOverride = 22048.0f;
	sub_4CACF0(a1, a2);
	ParticleDepthOverride = 0.0f;
}

void __cdecl OTanpopo_Child_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	EntityData1 *v2; // edi
	float ZDist; // ST08_4
	float YDist; // ST04_4
	float XDist; // ST00_4
	Angle v6; // ecx

	v1 = a1->Data1;
	v2 = a1->Parent->Data1;
	ZDist = v2->Scale.z + v1->Position.z;
	YDist = v2->Scale.y + v1->Position.y;
	XDist = v2->Scale.x + v1->Position.x;
	if ((abs(v1->Position.x - v2->Position.x) > 0.5f || abs(v1->Position.y-v2->Position.y > 0.5f) || abs(v1->Position.z - v2->Position.z) > 0.5f))
	{
		if (!MissedFrames)
		{
			SetTextureToLevelObj();
			njPushMatrix(0);
			njTranslate(0, XDist, YDist, ZDist);
			v6 = Camera_Data1->Rotation.y;
			if (v6)
			{
				njRotateY(0, (unsigned __int16)v6);
			}
			ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x00C1DBFC, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			njPopMatrix(1u);
		}
	}
}

void WindyValley_Init()
{
	ReplaceBIN_DC("SET0200S");
	ReplaceBIN_DC("SET0200E");
	ReplaceBIN_DC("SET0201S");
	ReplaceBIN_DC("SET0202M");
	ReplaceBIN_DC("SET0202S");
	ReplaceBIN_DC("CAM0200E");
	ReplaceBIN_DC("CAM0200S");
	ReplaceBIN_DC("CAM0201S");
	ReplaceBIN_DC("CAM0202M");
	ReplaceBIN_DC("CAM0202S");
	switch (EnableSETFixes)
	{
	case SETFixes_Normal:
		AddSETFix("SET0200E");
		AddSETFix("SET0200S");
		AddSETFix("SET0201S");
		AddSETFix("SET0202M");
		AddSETFix("SET0202S");
		break;
	case SETFixes_Extra:
		AddSETFix_Extra("SET0200E");
		AddSETFix_Extra("SET0200S");
		AddSETFix_Extra("SET0201S");
		AddSETFix_Extra("SET0202M");
		AddSETFix_Extra("SET0202S");
		break;
	default:
		break;
	}
	ReplacePVM("OBJ_WINDY");
	ReplacePVM("WINDY01");
	ReplacePVM("WINDY02");
	ReplacePVM("WINDY03");
	ReplacePVM("WINDY_BACK");
	ReplacePVM("WINDY_BACK2");
	ReplacePVM("WINDY_BACK3");
	//Skybox stuff
	WriteCall((void*)0x004DD794, RetrieveWindy1SkyTransparency);
	WriteCall((void*)0x004DD7D1, RenderWindy1Sky);
	WriteData<5>((void*)0x004DD7DB, 0x90);
	WriteData<5>((void*)0x004DD7E5, 0x90);
	WriteData<5>((void*)0x004DD7EF, 0x90);
	WriteData<5>((void*)0x004DD7F9, 0x90);
	//Material fixes
	((NJS_MATERIAL*)0x00C1C468)->attr_texId &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x00C1C47C)->attr_texId &= ~NJD_FLAG_IGNORE_SPECULAR;
	WriteData<1>((void*)0x4DD120, 0xC3); //Disable some fog thing
	WriteCall((void*)0x004E1E35, sub_409E70); //Wind gate rendering function
	WriteCall((void*)0x004E1E9A, sub_409E70); //Wind gate rendering function
	WriteCall((void*)0x004E1F08, sub_409E70); //Wind gate rendering function
	WriteCall((void*)0x004E1F77, sub_409E70); //Wind gate rendering function
	WriteCall((void**)0x4E126F, OHasieFix);
	WriteCall((void**)0x4E12D2, OHasieFix);
	WriteCall((void**)0x4E133E, OHasieFix);
	WriteCall((void*)0x4E282D, DrawTransparentBrokenBlocksExplosion);
	WriteCall((void*)0x4E2703, DrawTransparentBrokenBlocksExplosion);
	WriteCall((void*)0x4E2262, DrawTransparentBrokenBlocks);
	WriteJump((void*)0x4DFA60, OTanpopo_Child_Display); //Fix hanging dandelion seed
	*(NJS_MODEL_SADX*)0xC1DDF8 = *LoadModel("system\\data\\STG02\\Models\\000C4A70.sa1mdl", false)->basicdxmodel; //Bridge piece
	*(NJS_MODEL_SADX*)0xC1E168 = *LoadModel("system\\data\\STG02\\Models\\000C4D24.sa1mdl", false)->basicdxmodel; //Fixed bridge rope
	*(NJS_MODEL_SADX*)0xC1D068 = *LoadModel("system\\data\\STG02\\Models\\000C4024.sa1mdl", false)->basicdxmodel; //OPopo base
	*(NJS_OBJECT*)0xC1C648 = *LoadModel("system\\data\\STG02\\Models\\000C3A70.sa1mdl", false); //OPopo part 2
	*(NJS_OBJECT*)0xC1C848 = *LoadModel("system\\data\\STG02\\Models\\000C38A8.sa1mdl", false); //OPopo part 1 (I swapped these because SADX renders them in an incorrect order)
	*(NJS_MODEL_SADX*)0xC1DAB4 = *LoadModel("system\\data\\STG02\\Models\\000C47B0.sa1mdl", false)->basicdxmodel; //OTanpopo base
	*(NJS_OBJECT*)0xC1D1B0 = *LoadModel("system\\data\\STG02\\Models\\000C4128.sa1mdl", false); //OTanpopo fuzz
	*(NJS_OBJECT*)0xC1DBFC = *LoadModel("system\\data\\STG02\\Models\\000C48B4.sa1mdl", false); //OTanpopo seed
	*(NJS_OBJECT*)0xC2663C = *LoadModel("system\\data\\STG02\\Models\\000CB98C.sa1mdl", false); //OTreeM
	*(NJS_OBJECT*)0xC32DB8 = *LoadModel("system\\data\\STG02\\Models\\000D40D4.sa1mdl", true); //Grassy rock
	*(NJS_OBJECT*)0xC34384 = *LoadModel("system\\data\\STG02\\Models\\000D4D88.sa1mdl", false); //OTatel (rock fencing)
	*(NJS_OBJECT*)0xC18A7C = *LoadModel("system\\data\\STG02\\Models\\000C1494.sa1mdl", false); //OCubeS
	*(NJS_OBJECT*)0xC18ED4 = *LoadModel("system\\data\\STG02\\Models\\000C177C.sa1mdl", false); //OCubeM
	*(NJS_OBJECT*)0xC1935C = *LoadModel("system\\data\\STG02\\Models\\000C1A90.sa1mdl", false); //OCubeL
	*(NJS_OBJECT*)0xC2EF68 = *LoadModel("system\\data\\STG02\\Models\\000D1ADC.sa1mdl", false); //OGrFlowerA / OHanaA
	*(NJS_OBJECT*)0xC2F5A0 = *LoadModel("system\\data\\STG02\\Models\\000D1FF8.sa1mdl", false); //OGrFlowerB / OHanaB
	*(NJS_OBJECT*)0xC34BDC = *LoadModel("system\\data\\STG02\\Models\\000D5250.sa1mdl", false); //OTateS
	*(NJS_OBJECT*)0xC3D428 = *LoadModel("system\\data\\STG02\\Models\\000DB1B8.sa1mdl", false); //OWasi
	*(NJS_OBJECT*)0xC2AF48 = *LoadModel("system\\data\\STG02\\Models\\000CEF44.sa1mdl", true); //OBroobj (breakable fan)
	*(NJS_OBJECT*)0xC2B08C = *LoadModel("system\\data\\STG02\\Models\\000CF048.sa1mdl", false); //OBroobj broken 1
	*(NJS_OBJECT*)0xC2B438 = *LoadModel("system\\data\\STG02\\Models\\000CF334.sa1mdl", true); //OBroobj broken 2
	*(NJS_OBJECT*)0xC2B57C = *LoadModel("system\\data\\STG02\\Models\\000CF438.sa1mdl", false); //OBroobj broken 3
	*(NJS_OBJECT*)0xC2B860 = *LoadModel("system\\data\\STG02\\Models\\000CF660.sa1mdl", true); //OBroobj broken 4
	*(NJS_OBJECT*)0xC2C160 = *LoadModel("system\\data\\STG02\\Models\\000CFC44.sa1mdl", true); //OBroobj broken 5
	*(NJS_OBJECT*)0xC2C314 = *LoadModel("system\\data\\STG02\\Models\\000CFDA8.sa1mdl", false); //OBroobj broken 6
	*(NJS_OBJECT*)0xC2C788 = *LoadModel("system\\data\\STG02\\Models\\000D0098.sa1mdl", true); //OBroobj broken 7
	*(NJS_OBJECT*)0xC2CB24 = *LoadModel("system\\data\\STG02\\Models\\000D030C.sa1mdl", false); //OBroobj broken 8
	*(NJS_OBJECT*)0xC2CF4C = *LoadModel("system\\data\\STG02\\Models\\000D05C8.sa1mdl", false); //OBroobj broken 9
	*(NJS_OBJECT*)0xC0B188 = *LoadModel("system\\data\\STG02\\Models\\000B6C3C.sa1mdl", false); //Skybox bottom in Act 3
	*(NJS_OBJECT*)0xC21704 = *LoadModel("system\\data\\STG02\\Models\\000C7F08.sa1mdl", false); //Yure
	*(NJS_OBJECT*)0xC29B94 = *LoadModel("system\\data\\STG02\\Models\\000CE310.sa1mdl", false); //HaneA
	*(NJS_OBJECT*)0xC3C8D4 = *LoadModel("system\\data\\STG02\\Models\\000DA8FC.sa1mdl", false); //OStBrid
	*(NJS_OBJECT*)0xC157C4 = *LoadModel("system\\data\\STG02\\Models\\000BF0F8.sa1mdl", false); //Bridge D
	*(NJS_OBJECT*)0xC1560C = *LoadModel("system\\data\\STG02\\Models\\000BEF7C.sa1mdl", false); //Bridge C
	*(NJS_OBJECT*)0xC142FC = *LoadModel("system\\data\\STG02\\Models\\000BE2F0.sa1mdl", false); //Bridge B
	*(NJS_OBJECT*)0xC13274 = *LoadModel("system\\data\\STG02\\Models\\000BD7C8.sa1mdl", false); //Bridge A
	*(NJS_OBJECT*)0xC2433C = *LoadModel("system\\data\\STG02\\Models\\000C9DE8.sa1mdl", false); //OSaku C
	*(NJS_OBJECT*)0xC23384 = *LoadModel("system\\data\\STG02\\Models\\000C9298.sa1mdl", false); //OSaku B
	*(NJS_OBJECT*)0xC22E74 = *LoadModel("system\\data\\STG02\\Models\\000C8F20.sa1mdl", false); //OSaku A
	*(NJS_OBJECT*)0xC315FC = *LoadModel("system\\data\\STG02\\Models\\000D38A8.sa1mdl", false); //Wind gate 1
	*(NJS_OBJECT*)0xC30C44 = *LoadModel("system\\data\\STG02\\Models\\000D31C8.sa1mdl", false); //Wind gate 2
	*(NJS_OBJECT*)0xC305A4 = *LoadModel("system\\data\\STG02\\Models\\000D2C98.sa1mdl", false); //Wind gate 3
	*(NJS_OBJECT*)0xC2FF04 = *LoadModel("system\\data\\STG02\\Models\\000D2768.sa1mdl", false); //Wind gate 4
	*(NJS_OBJECT*)0xC359E0 = *LoadModel("system\\data\\STG02\\Models\\000D5CE4.sa1mdl", true); //OHaneA
	*(NJS_OBJECT*)0xC1A7E4 = *LoadModel("system\\data\\STG02\\Models\\000C2728.sa1mdl", false); //OUkisim
	*(NJS_OBJECT*)0xC280A4 = *LoadModel("system\\data\\STG02\\Models\\000CCDC8.sa1mdl", false); //OHasiE 1
	*(NJS_OBJECT*)0xC27200 = *LoadModel("system\\data\\STG02\\Models\\000CC348.sa1mdl", false); //OHasiE 2
	*(NJS_OBJECT*)0xC278F0 = *LoadModel("system\\data\\STG02\\Models\\000CC830.sa1mdl", false); //OHasiE 3
	*(NJS_OBJECT*)0xC15B2C = *LoadModel("system\\data\\STG02\\Models\\000BF404.sa1mdl", false); //PuWind 1
	*(NJS_OBJECT*)0xC159FC = *LoadModel("system\\data\\STG02\\Models\\000BF300.sa1mdl", false); //PuWind 2
	*(NJS_OBJECT*)0xC158E0 = *LoadModel("system\\data\\STG02\\Models\\000BF1FC.sa1mdl", false); //PuWind 3
	*(NJS_OBJECT*)0xC21B10 = *LoadModel("system\\data\\STG02\\Models\\000C81F4.sa1mdl", false); //OPoline 1
	*(NJS_OBJECT*)0xC21E88 = *LoadModel("system\\data\\STG02\\Models\\000C844C.sa1mdl", false); //OPoline 2
	*(NJS_OBJECT*)0xC22A94 = *LoadModel("system\\data\\STG02\\Models\\000C8C98.sa1mdl", false); //OPoline 3
	*(NJS_OBJECT*)0xC1C434 = *LoadModel("system\\data\\STG02\\Models\\000C36D4.sa1mdl", false); //OBigfla
	*(NJS_MODEL_SADX*)0xC185E0 = *LoadModel("system\\data\\STG02\\Models\\000C11D4.sa1mdl", false)->basicdxmodel; //OVcRock 1
	*(NJS_MODEL_SADX*)0xC1673C = *LoadModel("system\\data\\STG02\\Models\\000BFCE8.sa1mdl", false)->basicdxmodel; //OVcRock 2
	*(NJS_OBJECT*)0xC16C30 = *LoadModel("system\\data\\STG02\\Models\\000C003C.sa1mdl", false); //OVcRock 3
	*(NJS_OBJECT*)0xC17110 = *LoadModel("system\\data\\STG02\\Models\\000C0390.sa1mdl", false); //OVcRock 4
	*(NJS_OBJECT*)0xC174D8 = *LoadModel("system\\data\\STG02\\Models\\000C0664.sa1mdl", false); //OVcRock 5
	*(NJS_OBJECT*)0xC17860 = *LoadModel("system\\data\\STG02\\Models\\000C08D0.sa1mdl", false); //OVcRock 6
	*(NJS_OBJECT*)0xC17DAC = *LoadModel("system\\data\\STG02\\Models\\000C0CAC.sa1mdl", false); //OVcRock 7
	*(NJS_MODEL_SADX*)0xC1DFB0 = *LoadModel("system\\data\\STG02\\Models\\000C4BBC.sa1mdl", false)->basicdxmodel; //OTuriBr2 top rope
	*(NJS_MODEL_SADX*)0xC2AF1C = *((NJS_OBJECT*)0xC2AF48)->basicdxmodel; //OSetiff 1
	*(NJS_MODEL_SADX*)0xC2B060 = *((NJS_OBJECT*)0xC2B08C)->basicdxmodel; //OSetiff 2
	*(NJS_MODEL_SADX*)0xC2B40C = *((NJS_OBJECT*)0xC2B438)->basicdxmodel; //OSetiff 3 
	*(NJS_MODEL_SADX*)0xC2B550 = *((NJS_OBJECT*)0xC2B57C)->basicdxmodel; //OSetiff 4
	*(NJS_MODEL_SADX*)0xC2B834 = *((NJS_OBJECT*)0xC2B860)->basicdxmodel; //OSetiff 5
	*(NJS_MODEL_SADX*)0xC2C134 = *((NJS_OBJECT*)0xC2C160)->basicdxmodel; //OSetiff 6
	*(NJS_MODEL_SADX*)0xC2C2E8 = *((NJS_OBJECT*)0xC2C314)->basicdxmodel; //OSetiff 7
	*(NJS_MODEL_SADX*)0xC2C75C = *((NJS_OBJECT*)0xC2C788)->basicdxmodel; //OSetiff 8
	*(NJS_MODEL_SADX*)0xC2CAF8 = *((NJS_OBJECT*)0xC2CB24)->basicdxmodel; //OSetiff 9
	*(NJS_OBJECT*)0xC0EC58 = *LoadModel("system\\data\\STG02\\Models\\000BA270.sa1mdl", false); //Broken bridge pieces 21
	*(NJS_MODEL_SADX*)0xC0EC2C = *((NJS_OBJECT*)0xC0EC58)->basicdxmodel; //OSetiff 10
	*(NJS_OBJECT*)0xC109A0 = *LoadModel("system\\data\\STG02\\Models\\000BB974.sa1mdl", false); //Broken bridge pieces 1
	*(NJS_OBJECT*)0xC10BAC = *LoadModel("system\\data\\STG02\\Models\\000BBB18.sa1mdl", false); //Broken bridge pieces 2
	*(NJS_OBJECT*)0xC10DEC = *LoadModel("system\\data\\STG02\\Models\\000BBCE0.sa1mdl", false); //Broken bridge pieces 3
	*(NJS_OBJECT*)0xC10FA0 = *LoadModel("system\\data\\STG02\\Models\\000BBE44.sa1mdl", false); //Broken bridge pieces 4
	*(NJS_OBJECT*)0xC111AC = *LoadModel("system\\data\\STG02\\Models\\000BBFDC.sa1mdl", false); //Broken bridge pieces 5
	*(NJS_OBJECT*)0xC11418 = *LoadModel("system\\data\\STG02\\Models\\000BC1BC.sa1mdl", false); //Broken bridge pieces 6
	*(NJS_OBJECT*)0xC119A8 = *LoadModel("system\\data\\STG02\\Models\\000BC56C.sa1mdl", false); //Broken bridge pieces 7
	*(NJS_OBJECT*)0xC11C40 = *LoadModel("system\\data\\STG02\\Models\\000BC74C.sa1mdl", false); //Broken bridge pieces 8
	*(NJS_OBJECT*)0xC11F04 = *LoadModel("system\\data\\STG02\\Models\\000BC96C.sa1mdl", false); //Broken bridge pieces 9
	*(NJS_OBJECT*)0xC12144 = *LoadModel("system\\data\\STG02\\Models\\000BCB34.sa1mdl", false); //Broken bridge pieces 10
	*(NJS_OBJECT*)0xC1233C = *LoadModel("system\\data\\STG02\\Models\\000BCCCC.sa1mdl", false); //Broken bridge pieces 11
	*(NJS_OBJECT*)0xC12548 = *LoadModel("system\\data\\STG02\\Models\\000BCE70.sa1mdl", false); //Broken bridge pieces 12
	*(NJS_OBJECT*)0xC12970 = *LoadModel("system\\data\\STG02\\Models\\000BD13C.sa1mdl", false); //Broken bridge pieces 13
	*(NJS_OBJECT*)0xC12B8C = *LoadModel("system\\data\\STG02\\Models\\000BD2B8.sa1mdl", false); //Broken bridge pieces 14
	*(NJS_OBJECT*)0xC0DCE8 = *LoadModel("system\\data\\STG02\\Models\\000B9694.sa1mdl", false); //Broken bridge pieces 15
	*(NJS_OBJECT*)0xC0DEF4 = *LoadModel("system\\data\\STG02\\Models\\000B9838.sa1mdl", false); //Broken bridge pieces 16
	*(NJS_OBJECT*)0xC0E134 = *LoadModel("system\\data\\STG02\\Models\\000B9A00.sa1mdl", false); //Broken bridge pieces 17
	*(NJS_OBJECT*)0xC0E40C = *LoadModel("system\\data\\STG02\\Models\\000B9C20.sa1mdl", false); //Broken bridge pieces 18
	*(NJS_OBJECT*)0xC0E690 = *LoadModel("system\\data\\STG02\\Models\\000B9E00.sa1mdl", false); //Broken bridge pieces 19
	*(NJS_OBJECT*)0xC0E93C = *LoadModel("system\\data\\STG02\\Models\\000BA020.sa1mdl", false); //Broken bridge pieces 20
	*(NJS_OBJECT*)0xC0EE0C = *LoadModel("system\\data\\STG02\\Models\\000BA3D4.sa1mdl", false); //Broken bridge pieces 22
	*(NJS_OBJECT*)0xC0F0CC = *LoadModel("system\\data\\STG02\\Models\\000BA5F4.sa1mdl", false); //Broken bridge pieces 23
	*(NJS_OBJECT*)0xC0F280 = *LoadModel("system\\data\\STG02\\Models\\000BA74C.sa1mdl", false); //Broken bridge pieces 24
	*(NJS_OBJECT*)0xC0F500 = *LoadModel("system\\data\\STG02\\Models\\000BA92C.sa1mdl", false); //Broken bridge pieces 25
	*(NJS_OBJECT*)0xC0F6B4 = *LoadModel("system\\data\\STG02\\Models\\000BAA90.sa1mdl", false); //Broken bridge pieces 26
	*(NJS_OBJECT*)0xC0F8F4 = *LoadModel("system\\data\\STG02\\Models\\000BAC58.sa1mdl", false); //Broken bridge pieces 27
	*(NJS_OBJECT*)0xC0FB00 = *LoadModel("system\\data\\STG02\\Models\\000BADFC.sa1mdl", false); //Broken bridge pieces 28
	*(NJS_OBJECT*)0xC0FE08 = *LoadModel("system\\data\\STG02\\Models\\000BB04C.sa1mdl", false); //Broken bridge pieces 29
	*(NJS_OBJECT*)0xC1009C = *LoadModel("system\\data\\STG02\\Models\\000BB25C.sa1mdl", false); //Broken bridge pieces 30
	*(NJS_OBJECT*)0xC10250 = *LoadModel("system\\data\\STG02\\Models\\000BB3B4.sa1mdl", false); //Broken bridge pieces 31
	*(NJS_OBJECT*)0xC10514 = *LoadModel("system\\data\\STG02\\Models\\000BB5D4.sa1mdl", false); //Broken bridge pieces 32
	*(NJS_OBJECT*)0xC10720 = *LoadModel("system\\data\\STG02\\Models\\000BB778.sa1mdl", false); //Broken bridge pieces 33
	*(NJS_MODEL_SADX*)0xC15B00 = *((NJS_OBJECT*)0xC15B2C)->basicdxmodel; //Tornado stuff 1
	*(NJS_MODEL_SADX*)0xC158B4 = *((NJS_OBJECT*)0xC158E0)->basicdxmodel; //Tornado stuff 2
	*(NJS_MODEL_SADX*)0xC159D0 = *((NJS_OBJECT*)0xC159FC)->basicdxmodel; //Tornado stuff 3
	*(NJS_OBJECT*)0xC3BB80 = *LoadModel("system\\data\\STG02\\Models\\000DA0E8.sa1mdl", false); //OBigflo
	*(NJS_OBJECT*)0xC2D900 = *LoadModel("system\\data\\STG02\\Models\\000D0BB8.sa1mdl", false); //OIshiA
	*(NJS_OBJECT*)0xC2E944 = *LoadModel("system\\data\\STG02\\Models\\000D15C0.sa1mdl", false); //OIshiB
	*(NJS_OBJECT*)0xC36E44 = *LoadModel("system\\data\\STG02\\Models\\000D6BF8.sa1mdl", false); //OKazami 1
	*(NJS_OBJECT*)0xC365AC = *LoadModel("system\\data\\STG02\\Models\\000D6630.sa1mdl", false); //OKazami 2
	*(NJS_OBJECT*)0xC35F44 = *LoadModel("system\\data\\STG02\\Models\\000D6134.sa1mdl", true); //OKazami 3
	//Skybox/fog data stuff
	for (unsigned int i = 0; i < 3; i++)
	{
		SkyboxScale_Windy1->Far.x = 1.0f;
		SkyboxScale_Windy1->Far.y = 1.0f;
		SkyboxScale_Windy1->Far.z = 1.0f;
		SkyboxScale_Windy1->Normal.x = 1.0f;
		SkyboxScale_Windy1->Normal.y = 1.0f;
		SkyboxScale_Windy1->Normal.z = 1.0f;
		SkyboxScale_Windy1->Near.x = 1.0f;
		SkyboxScale_Windy1->Near.y = 1.0f;
		SkyboxScale_Windy1->Near.z = 1.0f;
		DrawDist_WindyValley1[i].Maximum = -8000.0f;
		FogData_Windy1[i].Distance = 12000.0f;
		FogData_Windy1[i].Layer = 1000.0f;
		FogData_Windy1[i].Color = 0xFFFFFFFF;
		FogData_Windy2[i].Color = 0xFFFFFFFF;
		FogData_Windy2[i].Distance = 2500.0f;
		FogData_Windy2[i].Layer = 50.0f;
		FogData_Windy2[i].Toggle = 1;
		FogData_Windy3[i].Distance = 6000.0f;
		FogData_Windy3[i].Layer = 200.0f;
		FogData_Windy3[i].Color = 0xFFFFFFFF;
	}
	ResizeTextureList((NJS_TEXLIST *)0xB98BF8, textures_windy1);
	ResizeTextureList((NJS_TEXLIST *)0xB81304, textures_windy2);
	ResizeTextureList((NJS_TEXLIST *)0xAFEC30, textures_windy3);
};

FunctionPointer(void, DrawModel_TryReallyHard, (NJS_MODEL_SADX *model), 0x409EF0);


void __cdecl Windy3Cols_Display(void *a1)
{
	NJS_MATRIX a2;
	NJS_VECTOR pos = { 0, 0, 0 };
	if (CurrentAct == 2 && !MissedFrames)
	{
		for (int i = 0; i < LengthOfArray(Windy3Cols); i++)
		{
			if (Windy3Cols[i] != -1)
			{
					njGetMatrix(a2);
					njSetTexture(&texlist_windy3);
					pos.x = GeoLists[18]->Col[Windy3Cols[i]].Model->pos[0];
					pos.y = GeoLists[18]->Col[Windy3Cols[i]].Model->pos[1];
					pos.z = GeoLists[18]->Col[Windy3Cols[i]].Model->pos[2];
					njTranslateEx(&pos);
					ProcessModelNode_TryReallyHard(GeoLists[18]->Col[Windy3Cols[i]].Model->basicdxmodel);
					njSetMatrix(0, a2);
			}
		}
	}
}

void Windy3Cols_Delete(ObjectMaster *a1)
{
	Windy3ColsLoaded = false;
	CheckThingButThenDeleteObject(a1);
}

void Windy3Cols_Main(ObjectMaster *a1)
{
	if (CurrentLevel == LevelIDs_WindyValley)
	{
		if (CurrentAct == 2) DrawModelCallback_Queue((void(__cdecl *)(void *))Windy3Cols_Display, a1, -27000.0f, QueuedModelFlagsB_EnableZWrite);
	}
	else Windy3Cols_Delete(a1);
}

void Windy3Cols_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Windy3Cols_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Windy3Cols_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))Windy3Cols_Delete;
}

void LoadWindy3Cols()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Windy3Cols_Load);
	setdata_wv.Distance = 612800.0f;
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_wv;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 0;
		ent->Position.y = 0;
		ent->Position.z = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
	}
	Windy3ColsLoaded = true;
}

static void SkyBox_Windy_Load_r(ObjectMaster *a1);
static Trampoline SkyBox_Windy_Load_t(0x4DDBF0, 0x4DDBFB, SkyBox_Windy_Load_r);
static void __cdecl SkyBox_Windy_Load_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(SkyBox_Windy_Load_r)*>(SkyBox_Windy_Load_t.Target());
	original(a1);
	if (EnableWindyValley && !Windy3ColsLoaded) LoadWindy3Cols();
}

void WindyValley_OnFrame()
{
	float TornadoDistance;
	auto entity = EntityData1Ptrs[0];
	//Tornado stuff
	if (CurrentLevel == LevelIDs_WindyValley && CurrentAct == 0)
	{
		if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21 || CurrentCharacter == 6) TornadoMode = 0;
		if (CurrentCharacter != 6 && entity != nullptr)
		{
			TornadoDistance = squareroot((entity->Position.x - TornadoSpawnPosition.x) * (entity->Position.x - TornadoSpawnPosition.x) + (entity->Position.y - TornadoSpawnPosition.y)*(entity->Position.y - TornadoSpawnPosition.y) + (entity->Position.z - TornadoSpawnPosition.z)*(entity->Position.z - TornadoSpawnPosition.z));
			if (TornadoMode != 4)
			{
				if (TornadoDistance < 680) TornadoMode = 1;
				if (TornadoDistance < 310) TornadoMode = 2;
				if (TornadoDistance < 170) TornadoMode = 3;
				if (TornadoDistance < 150) TornadoMode = 4;
			}
			if (TornadoMode == 0 || TornadoMode == 4)
			{
				if (CurrentFogDist < 2200) CurrentFogDist = CurrentFogDist + 32.0f;
				if (CurrentFogLayer < 400) CurrentFogLayer = CurrentFogLayer + 16.0f;
			}
			if (TornadoMode == 1)
			{
				if (CurrentFogColorX.r > 7)
				{
					CurrentFogColorX.r = CurrentFogColorX.r - 8;
					CurrentFogColorX.g = CurrentFogColorX.g - 8;
					CurrentFogColorX.b = CurrentFogColorX.b - 8;
				}
				if (CurrentFogColorX.r <= 7 && CurrentFogColorX.r > 0)
				{
					CurrentFogColorX.r = 0;
					CurrentFogColorX.g = 0;
					CurrentFogColorX.b = 0;
				}
				if (CurrentFogDist > 5000) CurrentFogDist = CurrentFogDist - 128.0f;
				if (CurrentFogLayer >= 100) CurrentFogLayer = CurrentFogLayer - 128.0f;
			}
			if (TornadoMode == 2)
			{
				if (CurrentFogDist > 450) CurrentFogDist = CurrentFogDist - 64.0f;
				if (CurrentFogLayer >= 64) CurrentFogLayer = CurrentFogLayer - 64.0f;
				if (CurrentFogColorX.r > 1)
				{
					CurrentFogColorX.r--;
					CurrentFogColorX.g--;
					CurrentFogColorX.b--;
				}
			}
		}
	}
}