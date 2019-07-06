#include "stdafx.h"
#include "FinalEgg_UVs.h"

NJS_TEXNAME textures_finalegg1[80];
NJS_TEXLIST texlist_finalegg1 = { arrayptrandlength(textures_finalegg1) };

NJS_TEXNAME textures_finalegg2[68];
NJS_TEXLIST texlist_finalegg2 = { arrayptrandlength(textures_finalegg2) };

NJS_TEXNAME textures_finalegg3[90];
NJS_TEXLIST texlist_finalegg3 = { arrayptrandlength(textures_finalegg3) };

NJS_TEXNAME textures_cylinder[256];
NJS_TEXLIST texlist_cylinder = { arrayptrandlength(textures_cylinder) };

/*
#include "FinalEgg1.h"
#include "FinalEgg2.h"
#include "FinalEgg3.h"
*/

NJS_OBJECT* OStandLight_Light = nullptr;
NJS_OBJECT* OLight2_Light = nullptr;

int FinalEgg2Cols[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

DataPointer(NJS_ACTION, off_1A1F944, 0x1A1F944);
DataArray(FogData, FinalEgg1Fog, 0x019C8FF0, 3);
DataArray(FogData, FinalEgg2Fog, 0x019C9020, 3);
DataArray(FogData, FinalEgg3Fog, 0x019C9050, 3);
FunctionPointer(void, sub_4094D0, (NJS_MODEL_SADX *model, char blend, float radius_scale), 0x4094D0);
FunctionPointer(void, sub_408530, (NJS_OBJECT*), 0x408530);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(void, sub_5ADCF0, (), 0x5ADCF0);

static bool Act2GlassLoaded = false;
static int cylinderframe = 0;
SETObjData setdata_fe = {};

PVMEntry FinalEggObjectTextures[] = {
	{ "OBJ_FINALEGG", (TexList *)0x19CC1C0 },
	{ "E_ROBO", (TexList *)0x94A318 },
	{ "GACHAPON", (TexList *)0x19C929C },
	{ "SUPI_SUPI", (TexList *)0x96F518 },
	{ "EFF_FINALEGG_POM", (TexList *)0x19C91B0 },
	{ "MOGU", (TexList *)0x93ECEC },
	{ "WARA", (TexList *)0x93852C },
	{ "USA", (TexList *)0x93CF74 },
	{ "BANB", (TexList *)0x93A8BC },
	{ "GORI", (TexList *)0x945964 },
	{ "CYLINDER", &texlist_cylinder },
	{ 0 }
};

NJS_MATERIAL* DisableAlphaRejection_FinalEggExternal[] = {
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

void DrawOSpinTubeModels(NJS_MODEL_SADX* model, float scale)
{
	DrawQueueDepthBias = 2000.0f;
	DrawModel_Queue_407CF0(model, QueuedModelFlagsB_EnableZWrite);
	DrawQueueDepthBias = 0;
}

void RenderBlueLight(NJS_OBJECT* a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = 4000.0f;
	ProcessModelNode_D(a1, QueuedModelFlagsB_SomeTextureThing, a3);
	DrawQueueDepthBias = 0.0f;
}

void DrawOUkishima(NJS_OBJECT* obj, float scale)
{
	ProcessModelNode_D(obj, QueuedModelFlagsB_EnableZWrite, scale);
}

void __cdecl OTatekan_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int v2; // eax@2
	int v3; // eax@4
	float YDist; // ST04_4@6
	int v5; // eax@6
	float scale; // [sp+10h] [bp+4h]@9
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		njPushMatrix(0);
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x1A45500, 1.0f); //Bottom
		njPopMatrix(1u);
		njPushMatrix(0);
		YDist = v1->Scale.y * 22.0;
		njTranslate(0, 0.0, YDist, 0.0);
		v5 = v1->Rotation.z;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x1A44A40, 1.0f); //Top
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0.0f, 4.0f, 0.0f);
		njScale(0, 1.0f, v1->Scale.y, 1.0f);
		DrawQueueDepthBias = -20000.0f;
		ProcessModelNode((NJS_OBJECT*)0x01A4425C, (QueuedModelFlagsB)0, v1->Scale.y); //Pivot
		if (v1->Scale.y >= 1.0f)
		{
			scale = v1->Scale.y;
		}
		else
		{
			scale = 1.0f;
		}
		njSetTexture(&texlist_cylinder);
		DrawQueueDepthBias = -18000.0f;
		ProcessModelNode((NJS_OBJECT*)0x01A4583C, (QueuedModelFlagsB)0, scale); //Glass
		DrawQueueDepthBias = 0.0f;
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl OStandLight_Display_F(ObjectMaster *a1)
{
	//There are two light beams in the model.
	//At the moment I don't know how the game selects the one to use (if it uses both).
	//So I just disable the vertices for the other beam.
	//Entity Rotation X is beam X rotation 
	//Entity Rotation Y is object Y rotation
	//Entity Rotation Z is ???
	//Entity Scale X is light+beam model Y rotation (in degrees)
	//Entity Scale Y is beam length 
	//Entity Scale Z is beam width
	int v2; // eax@2
	EntityData1 *v1; // esi@1
	v1 = a1->Data1;
	//Stretch beam vertices
	OStandLight_Light->child->basicdxmodel->points[19].z = (float)v1->Scale.y; //Beam length
	OStandLight_Light->child->basicdxmodel->points[20].z = (float)v1->Scale.y; //Beam length
	OStandLight_Light->child->basicdxmodel->points[19].x = (float)(-1.0f*v1->Scale.z); //Beam width
	OStandLight_Light->child->basicdxmodel->points[20].x = (float)v1->Scale.z; //Beam width
	//Disable the other beam
	OStandLight_Light->child->basicdxmodel->points[23].x = 0;
	OStandLight_Light->child->basicdxmodel->points[23].y = 0;
	OStandLight_Light->child->basicdxmodel->points[23].z = 0;
	OStandLight_Light->child->basicdxmodel->points[24].x = 0;
	OStandLight_Light->child->basicdxmodel->points[24].y = 0;
	OStandLight_Light->child->basicdxmodel->points[24].z = 0;
	if (!DroppedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		//Rotate the main object
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		//Render the main object model
		sub_407A00(((NJS_OBJECT*)0x1C28C78)->basicdxmodel, 1.0f);
		//Render the light part without the beam
		njTranslate(0, ((NJS_OBJECT*)0x1C28C78)->child->pos[0], ((NJS_OBJECT*)0x1C28C78)->child->pos[1], ((NJS_OBJECT*)0x1C28C78)->child->pos[2]);
		njRotateXYZ(0, ((NJS_OBJECT*)0x1C28C78)->child->ang[0] + *(Sint32 *)&v1->CharIndex, ((NJS_OBJECT*)0x1C28C78)->child->ang[1], ((NJS_OBJECT*)0x1C28C78)->child->ang[2]);
		sub_4094D0(((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel, 1, 1.0f);
		//Rotate and render the beam
		njRotateX(0, v1->Rotation.x);
		auto BaseRotation = atan2(Camera_Data1->Position.x - v1->Position.x, Camera_Data1->Position.y - v1->Position.y);
		//This is hardcoded for now until I figure out how to rotate it properly
		if (CurrentAct == 0 && CurrentCharacter != 5) njRotateZ(0, NJM_RAD_ANG(BaseRotation));
		if (CurrentAct == 1) njRotateZ(0, NJM_RAD_ANG(-BaseRotation));
		if (CurrentAct == 2 || CurrentCharacter == 5) njRotateZ(0, 16384);
		/* WIP stuff
		float deltax = Camera_Data1->Position.x - v1->Position.x;
		float deltaz = Camera_Data1->Position.z - v1->Position.z;
		float cosine = cos((NJM_ANG_DEG(v1->Rotation.y)*3.14159265 / 180.0f));
		auto BaseRotation = atan2(deltax, deltaz);
		PrintDebug("Cosine: %f\n", v1->Position.x*cosine);
		PrintDebug("DeltaX: %f\n", deltax);
		PrintDebug("DeltaZ: %f\n", deltaz);
		if (CurrentAct == 0) njRotateZ(0, NJM_RAD_ANG(BaseRotation));
		else njRotateZ(0, NJM_RAD_ANG(-BaseRotation));*/
		sub_4094D0(OStandLight_Light->child->basicdxmodel, 4, 1.0f);
		njPopMatrix(1u);
	}
}

void __cdecl OStandLight_Main_F(ObjectMaster *obj)
{
	EntityData1 *v1; // esi

	v1 = obj->Data1;
	AddToCollisionList(v1);
	if (!ClipSetObject(obj))
	{
		OStandLight_Display_F(obj);
	}
}

void __cdecl OStandLight_F(ObjectMaster *a1)
{
	*(Sint32 *)&a1->Data1->CharIndex = (Sint32)(a1->Data1->Scale.x * 65536.0f* 0.002777777777777778f);
	Collision_Init(a1, (CollisionData*)0x1AC4664, 1, 4u);
	a1->MainSub = OStandLight_Main_F;
	a1->DisplaySub = OStandLight_Display_F;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))CheckThingButThenDeleteObject;
}

//O Texture
void __cdecl OTexture_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	NJS_VECTOR *v2; // esi@2
	float a3; // ST24_4@2
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		BackupConstantAttr();
		AddConstantAttr(0, NJD_FLAG_USE_ALPHA);
		AddConstantAttr(0, NJD_DA_ONE);
		njColorBlendingMode(0, 8);
		njColorBlendingMode(1, 10);
		njPushMatrix(0);
		njSetTexture(&texlist_cylinder);
		njTranslateV(0, &v1->Position);
		njRotateXYZ(0, v1->Rotation.x, v1->Rotation.y, v1->Rotation.z);
		v2 = &v1->Scale;
		njScaleV(0, v2);
		DrawQueueDepthBias = -15000.0f;
		a3 = VectorMaxAbs(v2);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x1A45620, QueuedModelFlagsB_SomeTextureThing, a3);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
		ClampGlobalColorThing_Thing();
		njColorBlendingMode(0, 8);
		njColorBlendingMode(1, 6);
		RestoreConstantAttr();
	}
}

void SetGachaponEnvMaps1(NJS_MODEL_SADX* model, float scale)
{
	EnvMap1 = 1.0f;
	EnvMap2 = 1.0f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
	sub_407A00(model, scale);
	EnvMap1 = 0.5f;
	EnvMap2 = 0.5f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
}

void __cdecl SetGachaponEnvMaps2(int a1, EntityData1 *a2)
{
	EnvMap1 = 1.0f;
	EnvMap2 = 1.0f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
	sub_405450(&off_1A1F944, *(float *)&a2->LoopData, 1.5f);
	EnvMap1 = 0.5f;
	EnvMap2 = 0.5f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
}

static void __declspec(naked) sub_5B36E0X()
{
	__asm
	{
		push esi // a2
		push ecx // a1

				 // Call your __cdecl function here:
				 call SetGachaponEnvMaps2
				 pop ecx // a1
				 pop esi // a2
				 retn
	}
}

void Glass_Delete(ObjectMaster *a1)
{
	Act2GlassLoaded = false;
	CheckThingButThenDeleteObject(a1);
}

void FinalEgg2Cols_Display(ObjectMaster* a1)
{
	NJS_VECTOR sphere = { 0, 0, 0 };
	float radius = 0.0f;
	if (!MissedFrames && CurrentAct == 1)
	{
		for (int i = 0; i < LengthOfArray(FinalEgg2Cols); i++)
		{
			if (FinalEgg2Cols[i] != -1)
			{
				//PrintDebug("Trying COl: %d\n", FinalEgg2Cols[i]);
				radius = 2500.0f + GeoLists[81]->Col[FinalEgg2Cols[i]].Radius;
				sphere.x = GeoLists[81]->Col[FinalEgg2Cols[i]].Center.x;
				sphere.y = GeoLists[81]->Col[FinalEgg2Cols[i]].Center.y;
				sphere.z = GeoLists[81]->Col[FinalEgg2Cols[i]].Center.z;
				if (radius != 0 && IsPlayerInsideSphere(&sphere, radius))
				{
					//PrintDebug("Radius: %f\n", radius);
					njSetTexture(&texlist_finalegg2);
					njPushMatrix(0);
					njTranslate(0, 0, 0, 0);
					if (GeoLists[81]->Col[FinalEgg2Cols[i]].Flags & 0x01000000) DrawQueueDepthBias = 4500.0f;
					else if (GeoLists[81]->Col[FinalEgg2Cols[i]].Flags & 0x00040000) DrawQueueDepthBias = 1000.0f;
					else DrawQueueDepthBias = -15000.0;
					ProcessModelNode_D(GeoLists[81]->Col[FinalEgg2Cols[i]].Model, 0, 1.0f);
					njPopMatrix(1u);
					DrawQueueDepthBias = 0;
				}
			}
		}
	}
}

void AssFinalEgg2Cols_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (CurrentAct == 1 && !DroppedFrames)
	{
		njSetTexture(&texlist_finalegg2);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, 1.0f, 1.0f, 1.0f);
		njRotateXYZ(0, 0, 0, 0);
		DrawQueueDepthBias = -15000.0f;  
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("object_000C1350"), (QueuedModelFlagsB)0, 1.0f); //tube 1
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("object_000C0E68"), (QueuedModelFlagsB)0, 1.0f); //tube 2 
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("object_000C1A48"), (QueuedModelFlagsB)0, 1.0f); //tube 3 
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("object_00089114_2"), (QueuedModelFlagsB)0, 1.0f); //big glass inner layer 
		DrawQueueDepthBias = -12000.0f;
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("object_00087F80_2"), (QueuedModelFlagsB)0, 1.0f); //big glass outer layer 1
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("object_00085D08_2"), (QueuedModelFlagsB)0, 1.0f); //big glass outer layer 2
		DrawQueueDepthBias = 4500.0f;
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("object_000B9E54_2"), (QueuedModelFlagsB)0, 1.0f); //elevator glass 
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
	}
}

void Glass_Main(ObjectMaster *a1)
{
	if (CurrentLevel == LevelIDs_FinalEgg)
	{
		if (CurrentAct == 1) FinalEgg2Cols_Display(a1);
	}
	else Glass_Delete(a1);
}

void Glass_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Glass_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))FinalEgg2Cols_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))Glass_Delete;
}

void LoadGlass()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Glass_Load);
	setdata_fe.Distance = 612800.0f;
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_fe;
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
	Act2GlassLoaded = true;
}

void RenderOLight2WithDepth(NJS_OBJECT* a1, int a2, float a3)
{
	ProcessModelNode_AB_Wrapper(a1, a3);
	DrawQueueDepthBias = 4000.0f;
	ProcessModelNode_Try(OLight2_Light, QueuedModelFlagsB_SomeTextureThing, a3);
	DrawQueueDepthBias = 0.0f;
}

static void SkyBox_FinalEgg_Load_r(ObjectMaster *a1);
static Trampoline SkyBox_FinalEgg_Load_t(0x5ADFE0, 0x5ADFE9, SkyBox_FinalEgg_Load_r);
static void __cdecl SkyBox_FinalEgg_Load_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(SkyBox_FinalEgg_Load_r)*>(SkyBox_FinalEgg_Load_t.Target());
	original(a1);
	if (EnableFinalEgg && !Act2GlassLoaded) LoadGlass();
}

void GachaponExplosionFix(NJS_MODEL_SADX *a1)
{
	DrawQueueDepthBias = 10000.0f;
	DrawModel_Queue(a1, QueuedModelFlagsB_SomeTextureThing);
	DrawQueueDepthBias = 0;
}

void AddFinalEgg2TransparentThing(int colnumber)
{
	for (int i = 0; i < LengthOfArray(FinalEgg2Cols); i++)
	{
		if (FinalEgg2Cols[i] == colnumber) return;
		else if (FinalEgg2Cols[i] == -1)
		{
			FinalEgg2Cols[i] = colnumber;
			//PrintDebug("Added COl: %d\n", colnumber);
			return;
		}
	}
}

void ParseFinalEggMaterials(LandTable* landtable, int act, bool remove)
{
	Uint32 materialflags;
	NJS_MATERIAL* material;
	for (int j = 0; j < landtable->COLCount; j++)
	{
		if (!remove && landtable->Col[j].Flags & 0x8000000)
		{
			if (landtable->Col[j].Flags & ColFlags_Visible) landtable->Col[j].Flags &= ~ColFlags_Visible;
			AddFinalEgg2TransparentThing(j);
		}
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
			if (material->attrflags & NJD_CUSTOMFLAG_WHITE)
			{
				if (remove) RemoveWhiteDiffuseMaterial(material);
				else AddWhiteDiffuseMaterial(material);
			}
			if (act == 2 && (material->attr_texId == 16 || material->attr_texId == 79))
			{
				if (remove) RemoveAlphaRejectMaterial(material);
				else AddAlphaRejectMaterial(material);
			}
		}
	}
}

void UnloadLevelFiles_STG10()
{
	ParseFinalEggMaterials(STG10_0_Info->getlandtable(), 0, true);
	ParseFinalEggMaterials(STG10_1_Info->getlandtable(), 1, true);
	ParseFinalEggMaterials(STG10_2_Info->getlandtable(), 2, true);
	for (int i = 0; i < LengthOfArray(FinalEgg2Cols); i++)
	{
		FinalEgg2Cols[i] = -1;
	}
	delete STG10_0_Info;
	delete STG10_1_Info;
	delete STG10_2_Info;
	STG10_0_Info = nullptr;
	STG10_1_Info = nullptr;
	STG10_2_Info = nullptr;
}

void LoadLevelFiles_STG10()
{
	CheckAndUnloadLevelFiles();
	STG10_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG10\\0.sa1lvl"));
	STG10_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG10\\1.sa1lvl"));
	STG10_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG10\\2.sa1lvl"));
	LandTable* STG10_0 = STG10_0_Info->getlandtable(); //&landtable_0001D108;
	LandTable* STG10_1 = STG10_1_Info->getlandtable(); //&landtable_00083CCC; 
	LandTable* STG10_2 = STG10_2_Info->getlandtable(); //&landtable_000E67D0;
	RemoveMaterialColors_Landtable(STG10_0);
	RemoveMaterialColors_Landtable(STG10_1);
	RemoveMaterialColors_Landtable(STG10_2);
	STG10_0->TexList = &texlist_finalegg1;
	STG10_1->TexList = &texlist_finalegg2;
	STG10_2->TexList = &texlist_finalegg3;
	ParseFinalEggMaterials(STG10_0, 0, false);
	ParseFinalEggMaterials(STG10_1, 1, false);
	ParseFinalEggMaterials(STG10_2, 2, false);
	WriteData((LandTable**)0x97DB48, STG10_0); //Act 1
	WriteData((LandTable**)0x97DB4C, STG10_1); //Act 2
	WriteData((LandTable**)0x97DB50, STG10_2); //Act 3
}

void FinalEgg_Init()
{
	ReplaceBIN_DC("CAM1000A");
	ReplaceBIN_DC("CAM1000S");
	ReplaceBIN_DC("CAM1001S");
	ReplaceBIN_DC("CAM1002E");
	ReplaceBIN_DC("CAM1002S");
	ReplaceBIN_DC("CAM1003S");
	ReplaceBIN_DC("SET1000A");
	ReplaceBIN_DC("SET1000S");
	ReplaceBIN_DC("SET1001S");
	ReplaceBIN_DC("SET1002E");
	ReplaceBIN_DC("SET1002S");
	ReplaceBIN_DC("SET1003S");
	switch (EnableSETFixes)
	{
	case SETFixes_Normal:
		AddSETFix("SET1000A");
		AddSETFix("SET1000S");
		AddSETFix("SET1001S");
		AddSETFix("SET1002E");
		AddSETFix("SET1002S");
		AddSETFix("SET1003S");
		break;
	case SETFixes_Extra:
		AddSETFix_Extra("SET1000A");
		AddSETFix_Extra("SET1000S");
		AddSETFix_Extra("SET1001S");
		AddSETFix_Extra("SET1002E");
		AddSETFix_Extra("SET1002S");
		AddSETFix_Extra("SET1003S");
		break;
	default:
		break;
	}
	ReplacePVM("EFF_FINALEGG_POM");
	ReplacePVM("FINALEGG1");
	ReplacePVM("FINALEGG2");
	ReplacePVM("FINALEGG3");
	ReplacePVM("FINALEGG4");
	ReplaceBIN("PL_A2B", "PL_A2X");
	if (DLLLoaded_Lantern)
	{
		if (set_alpha_reject_ptr != nullptr)
		{
			ReplacePVM("OBJ_FINALEGG");
		}
		else
		{
			ReplaceGeneric("OBJ_FINALEGG.PVM", "OBJ_FINALEGG_DC_OLD.PVM");
		}
	}
	else ReplaceGeneric("OBJ_FINALEGG.PVM", "OBJ_FINALEGG_DC_OLD.PVM");
	TexLists_Obj[10] = FinalEggObjectTextures;
	WriteCall((void*)0x005AEF29, GachaponExplosionFix);
	WriteData<1>((char*)0x5ADC40, 0xC3u); //Disable SetClip_FEgg2
	//Environment maps thing
	WriteCall((void*)0x005B3785, SetGachaponEnvMaps1);
	WriteCall((void*)0x005B3744, sub_5B36E0X);
	//Queue OSpinTube models
	WriteCall((void*)0x5BD048, DrawOSpinTubeModels);
	WriteCall((void*)0x5BD06D, DrawOSpinTubeModels);
	WriteCall((void*)0x5BD07C, DrawOSpinTubeModels);
	WriteCall((void*)0x5BCD18, DrawOSpinTubeModels);
	WriteCall((void*)0x5BCD3D, DrawOSpinTubeModels);
	WriteCall((void*)0x5BCD4C, DrawOSpinTubeModels);
	WriteCall((void*)0x5BC9E8, DrawOSpinTubeModels);
	WriteCall((void*)0x5BCA0D, DrawOSpinTubeModels);
	WriteCall((void*)0x5BCA1C, DrawOSpinTubeModels);
	RemoveVertexColors_Model((NJS_MODEL_SADX*)0x19CA66C); //OEGacha destroyed
	RemoveVertexColors_Model((NJS_MODEL_SADX*)0x19CA8DC); //OEGacha destroyed
	RemoveVertexColors_Model((NJS_MODEL_SADX*)0x19CAF10); //OEGacha destroyed
	RemoveVertexColors_Model((NJS_MODEL_SADX*)0x94BAA0); //ERobo0 head
	AddWhiteDiffuseMaterial(&(((NJS_MODEL_SADX*)0x94BAA0)->mats[4]));
	RemoveVertexColors_Object((NJS_OBJECT*)0x94DA44); //ERobo0 body
	RemoveVertexColors_Object((NJS_OBJECT*)0x1A1D710); //OColorDoor 1
	RemoveVertexColors_Object((NJS_OBJECT*)0x1A1D928); //OColorDoor 2
	RemoveVertexColors_Object((NJS_OBJECT*)0x1A1DB40); //OColorDoor 3
	RemoveVertexColors_Object((NJS_OBJECT*)0x1A1DD58); //OColorDoor 4
	RemoveVertexColors_Object((NJS_OBJECT*)0x1A1DF70); //OColorDoor 5
	RemoveVertexColors_Object((NJS_OBJECT*)0x1A1E188); //OColorDoor 6
	RemoveVertexColors_Object((NJS_OBJECT*)0x1C2A588); //OPinLamp, OSideLamp
	RemoveVertexColors_Object((NJS_OBJECT*)0x1C298B4); //OPinLamp, OSideLamp
	RemoveVertexColors_Object((NJS_OBJECT*)0x1C29D4C); //OPinLamp, OSideLamp
	RemoveVertexColors_Object((NJS_OBJECT*)0x1C29124); //OPinLamp, OSideLamp
	RemoveVertexColors_Object((NJS_OBJECT*)0x1C301E0); //Character dolls 1
	RemoveVertexColors_Object((NJS_OBJECT*)0x1C33C0C); //Character dolls 2
	RemoveVertexColors_Object((NJS_OBJECT*)0x1C37880); //Character dolls 3
	RemoveVertexColors_Object((NJS_OBJECT*)0x1A07C44); //ODouble_Door 1
	RemoveVertexColors_Object((NJS_OBJECT*)0x1A07024); //ODouble_Door 2
	RemoveVertexColors_Object((NJS_OBJECT*)0x1A08874); //ODouble_Door 3
	RemoveVertexColors_Object((NJS_OBJECT*)0x1A09494); //ODouble_Door 4
	RemoveVertexColors_Object((NJS_OBJECT*)0x1C27FE4); //OEggKanban
	AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x1C26FD0); //OEggKanban
	AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x1C26FE4); //OEggKanban
	//OTatekan white diffuse
	*(NJS_OBJECT*)0x1A4425C = *LoadModel("system\\data\\STG10\\Models\\001ECA50.sa1mdl", false); //OTatekan pivot
	*(NJS_OBJECT*)0x1A4583C = *LoadModel("system\\data\\STG10\\Models\\001EDFBC.sa1mdl", false); //OTatekan glass
	//AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1A4583C)->basicdxmodel->mats[0]); //Glass
	//OLight1
	AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x01A46C10);
	AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x01A46C24);
	ForceObjectSpecular_Object((NJS_OBJECT*)0x1C27FB0); //OEggKanban sibling
	//0LightCamera lighting
	((NJS_MATERIAL*)0x019FD098)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD0AC)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD0C0)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD0D4)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD0E8)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD0FC)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD110)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	*(NJS_MODEL_SADX*)0x19FBDAC = *LoadModel("system\\data\\STG10\\Models\\001ABCC8.sa1mdl", false)->basicdxmodel; //OPurs_Camera
	AddAlphaRejectMaterial(&((NJS_MODEL_SADX*)0x19FBDAC)->mats[0]); //OPurs_Camera
	WriteCall((void*)0x5B2636, RenderOLight2WithDepth);
	*(NJS_OBJECT*)0x1A478CC = *LoadModel("system\\data\\STG10\\Models\\001EFCC8.sa1mdl", false); //OLight2
	((NJS_OBJECT*)0x1A478CC)->basicdxmodel->meshsets[3].nbMesh = 0; //Hide light
	((NJS_OBJECT*)0x1A478CC)->basicdxmodel->mats[5].attrflags &= ~NJD_FLAG_USE_ALPHA;
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1A478CC)->basicdxmodel->mats[5]);
	OLight2_Light = LoadModel("system\\data\\STG10\\Models\\001EFCC8.sa1mdl", false);
	OLight2_Light->basicdxmodel->meshsets[0].nbMesh = 0;
	OLight2_Light->basicdxmodel->meshsets[1].nbMesh = 0;
	OLight2_Light->basicdxmodel->meshsets[2].nbMesh = 0;
	OLight2_Light->basicdxmodel->meshsets[4].nbMesh = 0;
	AddAlphaRejectMaterial(&((NJS_OBJECT*)0x19FDD58)->basicdxmodel->mats[0]); //OLight_Camera
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x19FDC4C)->basicdxmodel->mats[1]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x19FDC4C)->basicdxmodel->mats[2]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x19FDC4C)->basicdxmodel->mats[3]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x19FDC4C)->basicdxmodel->mats[4]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x19FDC4C)->basicdxmodel->mats[5]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x19FDC4C)->basicdxmodel->mats[6]);
	*(NJS_MODEL_SADX*)0x19D7530 = *LoadModel("system\\data\\STG10\\Models\\00191518.sa1mdl", false)->basicdxmodel; //OSetStep
	*(NJS_MODEL_SADX*)0x19D77F0 = *LoadModel("system\\data\\STG10\\Models\\00191710.sa1mdl", false)->basicdxmodel; //OContainer
	*(NJS_MODEL_SADX*)0x19D6A20 = *LoadModel("system\\data\\STG10\\Models\\00190D8C.sa1mdl", false)->basicdxmodel; //OMova_thorn 1
	*(NJS_MODEL_SADX*)0x19D607C = *LoadModel("system\\data\\STG10\\Models\\00190870.sa1mdl", false)->basicdxmodel; //OMova_thorn 2
	*(NJS_MODEL_SADX*)0x19D493C = *LoadModel("system\\data\\STG10\\Models\\0018F9E0.sa1mdl", false)->basicdxmodel; //OMova_thorn 3
	*(NJS_MODEL_SADX*)0x19E8D88 = *LoadModel("system\\data\\STG10\\Models\\0019E638.sa1mdl", true)->basicdxmodel; //OSpin_TubeB 1
	*(NJS_MODEL_SADX*)0x19E2D30 = *LoadModel("system\\data\\STG10\\Models\\0019A5B4.sa1mdl", true)->basicdxmodel; //OSpin_TubeB 2
	*(NJS_MODEL_SADX*)0x19E4588 = *LoadModel("system\\data\\STG10\\Models\\0019B858.sa1mdl", true)->basicdxmodel; //OSpin_TubeB 3
	*(NJS_MODEL_SADX*)0x19F0408 = *LoadModel("system\\data\\STG10\\Models\\001A33FC.sa1mdl", true)->basicdxmodel; //OSpin_TubeM 1
	*(NJS_MODEL_SADX*)0x19EA370 = *LoadModel("system\\data\\STG10\\Models\\0019F350.sa1mdl", true)->basicdxmodel; //OSpin_TubeM 2
	*(NJS_MODEL_SADX*)0x19EBBE0 = *LoadModel("system\\data\\STG10\\Models\\001A05F4.sa1mdl", true)->basicdxmodel; //OSpin_TubeM 3
	*(NJS_MODEL_SADX*)0x19F7480 = *LoadModel("system\\data\\STG10\\Models\\001A7F38.sa1mdl", true)->basicdxmodel; //OSpin_TubeS 1
	*(NJS_MODEL_SADX*)0x19F1400 = *LoadModel("system\\data\\STG10\\Models\\001A3E8C.sa1mdl", true)->basicdxmodel; //OSpin_TubeS 2
	*(NJS_MODEL_SADX*)0x19F2C58 = *LoadModel("system\\data\\STG10\\Models\\001A5130.sa1mdl", true)->basicdxmodel; //OSpin_TubeS 3
	((NJS_ACTION*)0x1A3037C)->object = LoadModel("system\\data\\STG10\\Models\\001DD1E8.sa1mdl", false); //OFun
	((NJS_ACTION*)0x19D8F14)->object = LoadModel("system\\data\\STG10\\Models\\00192AD0.sa1mdl", false); // Laser
	SwapMeshsets(((NJS_ACTION*)0x19D8F14)->object->child, 0, 1);
	((NJS_ACTION*)0x19E14C4)->object = LoadModel("system\\data\\STG10\\Models\\001991C0.sa1mdl", false); //OSide_Arm
	*(NJS_OBJECT*)0x1A003F4 = *LoadModel("system\\data\\STG10\\Models\\001B01AC.sa1mdl", false); //_0BlueLight main
	*(NJS_OBJECT*)0x19FFC58 = *((NJS_OBJECT*)0x1A003F4)->child; //_0BlueLight light
	AddAlphaRejectMaterial(&((NJS_OBJECT*)0x1A003F4)->child->child->basicdxmodel->mats[0]); //_0BlueLight
	WriteCall((void*)0x5BBDA0, RenderBlueLight);
	*(NJS_OBJECT*)0x1A45620 = *LoadModel("system\\data\\STG10\\Models\\001EDDA8.sa1mdl", false); //OTexture
	*(NJS_OBJECT*)0x1A29BBC = *LoadModel("system\\data\\STG10\\Models\\001D7CE0.sa1mdl", true); //OUkishima
	WriteCall((void*)0x5B7AEA, DrawOUkishima); //Good idea not to queue a model with transparency, huh?
	*(NJS_OBJECT*)0x19DF364 = *LoadModel("system\\data\\STG10\\Models\\00197C30.sa1mdl", false); //OSide_Arm broken 1
	*(NJS_OBJECT*)0x19DE2AC = *LoadModel("system\\data\\STG10\\Models\\00197030.sa1mdl", false); //OSide_Arm broken 2
	*(NJS_OBJECT*)0x19DE6CC = *LoadModel("system\\data\\STG10\\Models\\0019735C.sa1mdl", false); //OSide_Arm broken 3
	*(NJS_OBJECT*)0x19DEAEC = *LoadModel("system\\data\\STG10\\Models\\00197688.sa1mdl", false); //OSide_Arm broken 4
	*(NJS_OBJECT*)0x19D228C = *LoadModel("system\\data\\STG10\\Models\\0018E284.sa1mdl", false); //OConvStop
	*(NJS_OBJECT*)0x1C2A588 = *LoadModel("system\\data\\STG10\\Models\\0021D560.sa1mdl", false); //OPinLamp
	*(NJS_OBJECT*)0x1A37A6C = *LoadModel("system\\data\\STG10\\Models\\001E1EF8.sa1mdl", false); //OElevator1 1 (the climbing thing)
	*(NJS_OBJECT*)0x1A3AC58 = *LoadModel("system\\data\\STG10\\Models\\001E4FA0.sa1mdl", false); //OElevator1 2 (the climbing thing)
	*(NJS_OBJECT*)0x1A3D74C = *LoadModel("system\\data\\STG10\\Models\\001E7168.sa1mdl", false); //OElevator2 1 (inside glass tube)
	*(NJS_OBJECT*)0x1A3D3EC = *LoadModel("system\\data\\STG10\\Models\\001E6E18.sa1mdl", false); //OElevator2 2 (inside glass tube)
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1A3D3EC)->basicdxmodel->mats[6]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1A3D3EC)->basicdxmodel->mats[7]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1A3D3EC)->basicdxmodel->mats[8]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1A3D3EC)->basicdxmodel->mats[9]);
	*(NJS_OBJECT*)0x1A462EC = *LoadModel("system\\data\\STG10\\Models\\001EE84C.sa1mdl", false); //OFSaku 1
	*(NJS_OBJECT*)0x1A46568 = *LoadModel("system\\data\\STG10\\Models\\001EEAB8.sa1mdl", false); //OFSaku 2
	*(NJS_OBJECT*)0x19CAF3C = *LoadModel("system\\data\\STG10\\Models\\00202C68.sa1mdl", false); //EGacha 1
	*(NJS_OBJECT*)0x19CB600 = *LoadModel("system\\data\\STG10\\Models\\002032F0.sa1mdl", false); //EGacha 2
	*(NJS_OBJECT*)0x19CA41C = *LoadModel("system\\data\\STG10\\Models\\002021B4.sa1mdl", false); //EGacha 3
	*(NJS_OBJECT*)0x1A44054 = *LoadModel("system\\data\\STG10\\Models\\001EC850.sa1mdl", false); //OHasiGo
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1A44054)->basicdxmodel->mats[2]);
	((NJS_OBJECT*)0x1A44054)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_ACTION*)0x1A1F944)->object = LoadModel("system\\data\\STG10\\Models\\001CE598.sa1mdl", false); //EGacha 4 (thrower thing)
	((NJS_ACTION*)0x1A2135C)->object = LoadModel("system\\data\\STG10\\Models\\001CF954.sa1mdl", false); //OGShooter
	((NJS_ACTION*)0x19DD9E4)->object = LoadModel("system\\data\\STG10\\Models\\001966EC.sa1mdl", false); //OUp_Arm
	*(NJS_OBJECT*)0x19DC0EC = *LoadModel("system\\data\\STG10\\Models\\00195974.sa1mdl", false); //OUp_Arm broken 1
	*(NJS_OBJECT*)0x19DB01C = *LoadModel("system\\data\\STG10\\Models\\00194D3C.sa1mdl", false); //OUp_Arm broken 2
	*(NJS_OBJECT*)0x19DB43C = *LoadModel("system\\data\\STG10\\Models\\00195068.sa1mdl", false); //OUp_Arm broken 3
	*(NJS_OBJECT*)0x19DB85C = *LoadModel("system\\data\\STG10\\Models\\00195394.sa1mdl", false); //OUp_Arm broken 4
	*(NJS_OBJECT*)0x19FBC64 = *LoadModel("system\\data\\STG10\\Models\\001ABB5C.sa1mdl", false); //OHammer 1
	*(NJS_MODEL_SADX*)0x19FA5DC = *LoadModel("system\\data\\STG10\\Models\\001AA9F0.sa1mdl", false)->basicdxmodel; //OHammer 2
	*(NJS_OBJECT*)0x1C28C78 = *LoadModel("system\\data\\STG10\\Models\\0021BC74.sa1mdl", false); //OStandLight
	((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->meshsets[4].nbMesh = 0; //Hide beam
	OStandLight_Light = LoadModel("system\\data\\STG10\\Models\\0021BC74.sa1mdl", false);
	OStandLight_Light->evalflags |= NJD_EVAL_HIDE;
	OStandLight_Light->child->basicdxmodel->meshsets[0].nbMesh = 0;
	OStandLight_Light->child->basicdxmodel->meshsets[1].nbMesh = 0;
	OStandLight_Light->child->basicdxmodel->meshsets[2].nbMesh = 0;
	OStandLight_Light->child->basicdxmodel->meshsets[3].nbMesh = 0;
	OStandLight_Light->child->basicdxmodel->mats[4].attrflags &= ~NJD_DA_SRC; //No idea why it has that in the original model
	OStandLight_Light->child->basicdxmodel->mats[4].attrflags |= NJD_DA_ONE;
	memcpy((void*)0x019CDCD0, uv_0018AD48, sizeof(uv_0018AD48)); //Conveyour belt UVs
	memcpy((void*)0x019CDD98, uv_0018AE10, sizeof(uv_0018AE10)); //Conveyour belt UVs
	memcpy((void*)0x019CDF08, uv_0018AF80, sizeof(uv_0018AF80)); //Conveyour belt UVs
	memcpy((void*)0x01C271F0, uv_0021DA1C, sizeof(uv_0021DA1C)); //Egg Kanban UVs
	ObjList_FEgg[59].UseDistance = 1; // O Suikomi 
	ObjList_FEgg[59].Distance = 1600000.0f; // O Suikomi
	WriteJump((void*)0x5AE330, OTexture_Display); //O Texture function
	WriteJump(OStandLight, OStandLight_F);
	WriteJump(OStandLight_Main, OStandLight_Main_F);
	WriteJump(OStandLight_Display, OStandLight_Display_F); //O Stand Light function
	WriteJump((void*)0x005B4690, OTatekan_Display); //Cylinder function
	ResizeTextureList((NJS_TEXLIST*)0x1B98518, textures_finalegg1);
	ResizeTextureList((NJS_TEXLIST*)0x1A60488, textures_finalegg2);
	ResizeTextureList((NJS_TEXLIST*)0x1AC5780, textures_finalegg3);
	ResizeTextureList(&OBJ_FINALEGG_TEXLIST, 169);
	for (unsigned int i = 0; i < 3; i++)
	{
		FinalEgg1Fog[i].Color = 0xFF000000;
		FinalEgg1Fog[i].Layer = 1200.0f;
		FinalEgg1Fog[i].Distance = 3000.0f;
		FinalEgg2Fog[i].Color = 0xFF000000;
		FinalEgg2Fog[i].Layer = 650.0f;
		FinalEgg2Fog[i].Distance = 2000.0f;
		FinalEgg2Fog[i].Toggle = 1;
		FinalEgg3Fog[i].Color = 0xFF000000;
		FinalEgg3Fog[i].Layer = 650.0f;
		FinalEgg3Fog[i].Distance = 2000.0f;
		DrawDist_FinalEgg2[i].Maximum = -2400.0f;
	}
}

void FinalEgg_OnFrame()
{
	auto entity = EntityData1Ptrs[0];
	if (CurrentLevel == LevelIDs_FinalEgg && !IsGamePaused())
	{
		if (CurrentAct == 0 && entity != nullptr)
		{
			if (entity->Position.z >= 0)
			{
				if (LevelFogData.Layer < 1400) LevelFogData.Layer = LevelFogData.Layer + 8; else LevelFogData.Layer = 1400;
				if (LevelFogData.Distance < 3400) LevelFogData.Distance = LevelFogData.Distance + 16; else LevelFogData.Distance = 3400;
			}
			else
			{
				if (LevelFogData.Layer > FinalEgg1Fog[0].Layer) LevelFogData.Layer = LevelFogData.Layer - 16; else LevelFogData.Layer = FinalEgg1Fog[0].Layer;
				if (LevelFogData.Distance > FinalEgg1Fog[0].Distance) LevelFogData.Distance = LevelFogData.Distance - 8; else LevelFogData.Distance = FinalEgg1Fog[0].Distance;
			}
		}
		if (CurrentAct == 1 && entity != nullptr)
		{
			if (entity->Position.x >= 900 && entity->Position.x <= 1250 && entity->Position.z >= -1050 && entity->Position.z <= -605 && entity->Position.y > -700)
			{
				if (LevelFogData.Layer > 500) LevelFogData.Layer = LevelFogData.Layer - 8; else LevelFogData.Layer = 500;
				if (LevelFogData.Distance > 1500) LevelFogData.Distance = LevelFogData.Distance - 16; else LevelFogData.Distance = 1500;
			}
			else
			{
				if (entity->Status & Status_Ground)
				{
					if (LevelFogData.Layer < FinalEgg2Fog[0].Layer) LevelFogData.Layer = LevelFogData.Layer + 8; else LevelFogData.Layer = FinalEgg2Fog[0].Layer;
					if (LevelFogData.Distance < FinalEgg2Fog[0].Distance) LevelFogData.Distance = LevelFogData.Distance + 16; else LevelFogData.Distance = FinalEgg2Fog[0].Distance;
				}
			}
		}
		if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2) cylinderframe++;
		if (cylinderframe > 255) cylinderframe = 0;
		((NJS_OBJECT*)0x1A4583C)->basicdxmodel->mats[0].attr_texId = cylinderframe;
		((NJS_OBJECT*)0x1A45620)->basicdxmodel->mats->attr_texId = cylinderframe;
	}
}