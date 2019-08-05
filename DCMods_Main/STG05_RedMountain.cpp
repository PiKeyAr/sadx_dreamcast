#include "stdafx.h"
#include "RM_Objects.h"

//TODO: Hammer shadow maybe?
//TODO: Pre-transformed EV Tornado glass maybe

NJS_TEXNAME textures_mountain1[45];
NJS_TEXLIST texlist_mountain1 = { arrayptrandlength(textures_mountain1) };

NJS_TEXNAME textures_mountain2[43];
NJS_TEXLIST texlist_mountain2 = { arrayptrandlength(textures_mountain2) };

NJS_TEXNAME textures_mountain3[27];
NJS_TEXLIST texlist_mountain3 = { arrayptrandlength(textures_mountain3) };

/*
#include "Mountain1.h"
#include "Mountain2.h"
#include "Mountain3.h"
*/

NJS_OBJECT *RMCloudTop = nullptr;
NJS_OBJECT *RMCloudBottom = nullptr;
NJS_MODEL_SADX *PropellerGlass = nullptr;

DataPointer(float, CurrentDrawDistance, 0x03ABDC74);
DataPointer(float, RMCloudSonic_TopY, 0x006011B2);
DataPointer(float, RMCloudSonic_BottomY, 0x006011F6);
DataPointer(float, RMCloudKnuckles_TopY, 0x006011A9);
DataPointer(float, RMCloudKnuckles_BottomY, 0x006011ED);
DataArray(NJS_VECTOR, SkyboxScale_RedMountain2, 0x02240628, 3);
DataArray(FogData, RedMountain1Fog, 0x02240700, 3);
DataArray(FogData, RedMountain2Fog, 0x02240730, 3);
DataArray(FogData, RedMountain3Fog, 0x02240760, 3);
FunctionPointer(void, sub_600BF0, (ObjectMaster *a1, NJS_OBJECT *a2), 0x600BF0);

static int UVShift1 = 0;
static int UVShift2 = 0;

void RenderRMClouds_Top(ObjectMaster *a1, NJS_OBJECT *a2)
{
	float TopY = 0.0f;
	float BottomY = 0.0f;
	if (CurrentCharacter == Characters_Knuckles)
	{
		TopY = RMCloudKnuckles_TopY;
		BottomY = RMCloudKnuckles_BottomY;
	}
	else
	{
		TopY = RMCloudSonic_TopY;
		BottomY = RMCloudSonic_BottomY;
	}
	if (Camera_Data1->Position.y <= BottomY)
	{
		//PrintDebug("Top: Render behind\n");
		DrawQueueDepthBias = -8000.0f;
	}
	else
	{
		//PrintDebug("Top: Render above\n");
		DrawQueueDepthBias = -6000.0f;
	}
	sub_600BF0(a1, RMCloudTop);
	DrawQueueDepthBias = 0.0f;
}

void RenderRMClouds_Bottom(ObjectMaster *a1, NJS_OBJECT *a2)
{
	float TopY = 0.0f;
	float BottomY = 0.0f;
	if (CurrentCharacter == Characters_Knuckles)
	{
		TopY = RMCloudKnuckles_TopY;
		BottomY = RMCloudKnuckles_BottomY;
	}
	else
	{
		TopY = RMCloudSonic_TopY;
		BottomY = RMCloudSonic_BottomY;
	}
	if (Camera_Data1->Position.y <= BottomY)
	{
		//PrintDebug("Bottom: Render above\n");
		DrawQueueDepthBias = -6000.0f;
	}
	else
	{
		//PrintDebug("Bottom: Render behind\n");
		DrawQueueDepthBias = -8000.0f;
	}
	sub_600BF0(a1, RMCloudBottom);
	DrawQueueDepthBias = 0.0f;
}

void UnloadLevelFiles_STG05()
{
	delete STG05_0_Info;
	delete STG05_1_Info;
	delete STG05_2_Info;
	STG05_0_Info = nullptr;
	STG05_1_Info = nullptr;
	STG05_2_Info = nullptr;
}

void SetCloudColor(NJS_ARGB *a1)
{
	SetMaterialAndSpriteColor_Float(a1->a, 1.0f, 1.0f, 1.0f);
}

void FixPropellerThing(NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float scale)
{
	ProcessModel_NoSorting(model, scale);
	DrawQueueDepthBias = 2000.0f;
	DrawModel_Queue_407CF0(PropellerGlass, QueuedModelFlagsB_EnableZWrite); //Should have been 0, but that doesn't look good
	DrawQueueDepthBias = 0.0f;
}

void RedMountain_Init()
{
	CheckAndUnloadLevelFiles();
	STG05_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG05\\0.sa1lvl"));
	STG05_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG05\\1.sa1lvl"));
	STG05_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG05\\2.sa1lvl"));
	LandTable* STG05_0 = STG05_0_Info->getlandtable(); //&landtable_00018CB8;
	LandTable* STG05_1 = STG05_1_Info->getlandtable(); //&landtable_0001A8FC;
	LandTable* STG05_2 = STG05_2_Info->getlandtable(); //&landtable_0001E358;
	RemoveMaterialColors_Landtable(STG05_0);
	RemoveMaterialColors_Landtable(STG05_1);
	RemoveMaterialColors_Landtable(STG05_2);
	STG05_0->TexList = &texlist_mountain1;
	STG05_1->TexList = &texlist_mountain2;
	STG05_2->TexList = &texlist_mountain3;
	WriteData((LandTable**)0x97DAA8, STG05_0);
	WriteData((LandTable**)0x97DAAC, STG05_1);
	WriteData((LandTable**)0x97DAB0, STG05_2);
	if (!ModelsLoaded_STG05)
	{
		ReplaceBIN_DC("CAM0500S");
		ReplaceBIN_DC("CAM0501E");
		ReplaceBIN_DC("CAM0501S");
		ReplaceBIN_DC("CAM0502K");
		if (!Use1999SetFiles)
		{
			ReplaceBIN_DC("SET0500S");
			ReplaceBIN_DC("SET0501E");
			ReplaceBIN_DC("SET0501S");
			ReplaceBIN_DC("SET0502K");
		}
		else
		{
			ReplaceBIN_1999("SET0500S");
			ReplaceBIN_1999("SET0501E");
			ReplaceBIN_1999("SET0501S");
			ReplaceBIN_1999("SET0502K");
		}
		ReplacePVM("MOUNTAIN01");
		ReplacePVM("MOUNTAIN02");
		ReplacePVM("MOUNTAIN03");
		ReplacePVM("MOUNTAIN_CARRIER");
		ReplacePVM("MOUNTAIN_E104");
		ReplacePVM("MOUNTAIN_MEXPLOSION");
		ReplacePVM("MOUNTAIN_STEAM");
		ReplacePVM("OBJ_MOUNTAIN");
		ReplacePVM("YOUGAN_ANIM");
		ReplaceBIN("PL_51B", "PL_51X");
		WriteData<1>((char*)0x600700, 0xC3u); //Disable SetClip_RedMountain
		//Cloud fixes
		RMCloudTop = LoadModel("system\\data\\STG05\\Models\\00183AF8.sa1mdl", false);
		RMCloudBottom = LoadModel("system\\data\\STG05\\Models\\00183AF8.sa1mdl", false);
		WriteCall((void*)0x600CA3, SetCloudColor); //Set alpha, but keep colors at 1.0
		WriteCall((void*)0x006011D8, RenderRMClouds_Top);
		WriteCall((void*)0x0060121C, RenderRMClouds_Bottom);
		WriteData((float*)0x006011ED, -20.0f); //Cloud height (Knuckles) - this is inaccurate but I dunno how to fix it
		WriteData((float*)0x006011A9, 30.0f); //Cloud height (Knuckles) - this is inaccurate but I dunno how to fix it
		//Objects
		RemoveVertexColors_Object((NJS_OBJECT*)0x024A265C); //E104's rocket
		RemoveVertexColors_Object((NJS_OBJECT*)0x02459814); //MtnSpiderA
		RemoveVertexColors_Object((NJS_OBJECT*)0x0247E4D4); //OBat
		RemoveVertexColors_Object((NJS_OBJECT*)0x024633B8); //Syuujin
		*(NJS_OBJECT*)0x2439964 = *LoadModel("system\\data\\STG05\\Models\\001511FC.sa1mdl", false); //OLight
		*(NJS_OBJECT*)0x243A220 = *LoadModel("system\\data\\STG05\\Models\\00152358.sa1mdl", false); //OLightB
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x243A220)->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x243A220)->basicdxmodel->mats[2]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x243A220)->basicdxmodel->mats[3]);
		*(NJS_OBJECT*)0x248213C = *LoadModel("system\\data\\STG05\\Models\\00197E70.sa1mdl", false); //Lamp1
		ForceObjectSpecular_Object((NJS_OBJECT*)0x248213C, false);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x248213C)->basicdxmodel->mats[1]);
		*(NJS_OBJECT*)0x2482D94 = *LoadModel("system\\data\\STG05\\Models\\00198A88.sa1mdl", false); //Lamp2
		ForceObjectSpecular_Object((NJS_OBJECT*)0x2482D94, false);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x2482D94)->basicdxmodel->mats[1]);
		*(NJS_OBJECT*)0x243D1B4 = *LoadModel("system\\data\\STG05\\Models\\00155284.sa1mdl", false); //OSaku2
		ForceLevelSpecular_Object((NJS_OBJECT*)0x243D1B4, false);
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x243D1B4)->child->basicdxmodel->mats[0]);
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x243D1B4)->child->basicdxmodel->mats[1]);
		*(NJS_OBJECT*)0x2447920 = *LoadModel("system\\data\\STG05\\Models\\0015F77C.sa1mdl", false); //OErupt small piece //SL OBJECT
		((NJS_OBJECT*)0x2447920)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		*(NJS_OBJECT*)0x244FD8C = *LoadModel("system\\data\\STG05\\Models\\00167A5C.sa1mdl", false); //OErupt big piece
		*(NJS_OBJECT*)0x248042C = *LoadModel("system\\data\\STG05\\Models\\001961C4.sa1mdl", false); //OTree1
		*(NJS_OBJECT*)0x246B81C = *LoadModel("system\\data\\STG05\\Models\\00182900.sa1mdl", false); //OAshiba1
		*(NJS_OBJECT*)0x242FA04 = *LoadModel("system\\data\\STG05\\Models\\00147EE8.sa1mdl", false); //OUntei6 stuff
		*(NJS_OBJECT*)0x2432404 = *LoadModel("system\\data\\STG05\\Models\\0014A8C4.sa1mdl", false); //OUntei6 stuff
		*(NJS_OBJECT*)0x242B5FC = *LoadModel("system\\data\\STG05\\Models\\00143F94.sa1mdl", false); //Some mechanism part
		*(NJS_OBJECT*)0x242D004 = *LoadModel("system\\data\\STG05\\Models\\0014550C.sa1mdl", false); //Some other mechanism part
		*(NJS_OBJECT*)0x246A624 = *LoadModel("system\\data\\STG05\\Models\\00181CE0.sa1mdl", false); //O Bpole
		*(NJS_OBJECT*)0x246AB24 = *LoadModel("system\\data\\STG05\\Models\\001821C0.sa1mdl", false); //O Bpole 2
		*(NJS_MODEL_SADX*)0x243762C = *LoadModel("system\\data\\STG05\\Models\\0014F970.sa1mdl", false)->basicdxmodel; //OMAshiba
		*(NJS_MODEL_SADX*)0x2466818 = *LoadModel("system\\data\\STG05\\Models\\0017DF54.sa1mdl", false)->basicdxmodel; //Bridge piece
		*(NJS_MODEL_SADX*)0x2466568 = *LoadModel("system\\data\\STG05\\Models\\0017DCBC.sa1mdl", false)->basicdxmodel; //Bridge piece 2
		*(NJS_MODEL_SADX*)0x24390BC = *LoadModel("system\\data\\STG05\\Models\\00151AB4.sa1mdl", false)->basicdxmodel; //Light thing
		HideMesh_Model((NJS_MODEL_SADX*)0x24390BC, 0);
		PropellerGlass = LoadModel("system\\data\\STG05\\Models\\00151AB4.sa1mdl", false)->basicdxmodel;
		HideMesh_Model(PropellerGlass, 1);
		*(NJS_MODEL_SADX*)0x24394CC = *LoadModel("system\\data\\STG05\\Models\\00151600.sa1mdl", false)->basicdxmodel; //Light thing propeller 1
		*(NJS_MODEL_SADX*)0x24392C4 = *LoadModel("system\\data\\STG05\\Models\\001513F0.sa1mdl", false)->basicdxmodel; //Light thing propeller 2
		WriteCall((void*)0x60C987, FixPropellerThing);
		for (int i = 0; i < 3; i++)
		{
			RedMountain1Fog[i].Color = 0xFFFFFFFF;
			RedMountain1Fog[i].Layer = 2000.0f;
			RedMountain1Fog[i].Distance = 16000.0f;
			RedMountain1Fog[i].Toggle = 1;
			RedMountain2Fog[i].Layer = 1650.0f;
			RedMountain2Fog[i].Color = 0xFF000000;
			RedMountain2Fog[i].Distance = 4000.0f;
			RedMountain2Fog[i].Toggle = 1;
			RedMountain3Fog[i].Color = 0xFFFFFFFF;
			RedMountain3Fog[i].Layer = 1000.0f;
			RedMountain3Fog[i].Distance = 12000.0f;
			RedMountain3Fog[i].Toggle = 1;
			DrawDist_RedMountain1[i].Maximum = -16000.0f;
			DrawDist_RedMountain3[i].Maximum = -16000.0f;
			SkyboxScale_RedMountain2[i].x = 1.0f;
			SkyboxScale_RedMountain2[i].y = 1.0f;
			SkyboxScale_RedMountain2[i].z = 1.0f;
		}
		ModelsLoaded_STG05 = true;
	}
}
void RedMountain_OnFrame()
{
	if (CurrentLevel == LevelIDs_RedMountain && !IsGamePaused())
	{
		UVShift1 = (UVShift1 - 1 * FramerateSetting) % 255;
		UVShift2 = (UVShift2 - 2 * FramerateSetting) % 255;
		if (RMCloudTop && RMCloudBottom)
		{
			for (int q = 0; q < 4; q++)
			{
				RMCloudTop->basicdxmodel->meshsets[0].vertuv[q].u = uv_00183A48[q].u + UVShift1;
				RMCloudBottom->basicdxmodel->meshsets[0].vertuv[q].u = uv_00183A48[q].u + UVShift2;
			}
		}
		if (CurrentAct == 1 && Camera_Data1 != nullptr)
		{
			if (Camera_Data1->Position.y > 900) CurrentDrawDistance = -9000.0f;
		}
	}
}