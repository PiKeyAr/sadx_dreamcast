#include "stdafx.h"
#include "EggCarrier_Motions.h"

NJS_TEXNAME textures_obj_ec00[206];

NJS_TEXNAME textures_ec00[98];
NJS_TEXLIST texlist_ec00 = { arrayptrandlength(textures_ec00) };

NJS_TEXNAME textures_ec01[90];
NJS_TEXLIST texlist_ec01 = { arrayptrandlength(textures_ec01) };

NJS_TEXNAME textures_ec02[66];
NJS_TEXLIST texlist_ec02 = { arrayptrandlength(textures_ec02) };

NJS_TEXNAME textures_ec03[46];
NJS_TEXLIST texlist_ec03 = { arrayptrandlength(textures_ec03) };

NJS_TEXNAME textures_ec04[77];
NJS_TEXLIST texlist_ec04 = { arrayptrandlength(textures_ec04) };

NJS_TEXNAME textures_ec05[40];
NJS_TEXLIST texlist_ec05 = { arrayptrandlength(textures_ec05) };

/*
#include "ADV0100_0.h"
#include "ADV0100_1.h"
#include "ADV0100_2.h"
#include "ADV0100_3.h"
#include "ADV0100_4.h"
#include "ADV0100_5.h"
*/

FunctionPointer(void, sub_409FB0, (NJS_ACTION* a1, float frameNumber), 0x409FB0);
FunctionPointer(void, sub_6F4570, (ObjectMaster* a1), 0x6F4570);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX* model, float scale), 0x407A00);
DataPointer(ObjectMaster*, dword_3C85138, 0x3C85138);
DataArray(PVMEntry, stru_10F34A8, 0x10F34A8, 6);
DataArray(PVMEntry, stru_1101360, 0x1101360, 2);
DataArray(DrawDistance, EggCarrierOutsideDrawDist1, 0x10F2264, 3);
DataArray(DrawDistance, EggCarrierOutsideDrawDist2, 0x10F227C, 3);
DataArray(DrawDistance, EggCarrierOutsideDrawDist3, 0x10F2294, 3);
DataArray(DrawDistance, EggCarrierOutsideDrawDist7, 0x10F22F4, 3);
DataArray(DrawDistance, EggCarrierOutsideSkyDrawDist3, 0x10F2204, 3);
DataArray(FogData, EggCarrierOutside2Fog, 0x10F233C, 3);
DataArray(FogData, EggCarrierOutside3Fog, 0x10F236C, 3);
DataArray(FogData, EggCarrierOutside4Fog, 0x10F239C, 3);
DataArray(FogData, EggCarrierOutside5Fog, 0x10F23CC, 3);
DataArray(FogData, EggCarrierOutside6Fog, 0x10F23FC, 3);
DataArray(FogData, EggCarrierOutside7Fog, 0x10F242C, 3);
DataArray(NJS_VECTOR, SkyboxScale_EggCarrier4, 0x10F212C, 3);
DataArray(PVMEntry, EggCarrierObjectTexlist_Sea, 0x10F34A8, 6);

NJS_OBJECT* EggCarrierSeaModel = nullptr;

void sub_10001050(NJS_OBJECT* a1)
{
	NJS_MODEL_SADX* v1; // edx@1
	signed int v2; // ecx@1
	__int16* v3; // eax@2

	v1 = (NJS_MODEL_SADX*)a1->model;
	v2 = 0;
	if (v1->nbMat)
	{
		v3 = (__int16*)& v1->mats->attrflags;
		do
		{
			*(_DWORD*)v3 &= 0xFFEFFFFF;
			++v2;
			v3 += 10;
		} while (v2 < v1->nbMat);
	}
}

void __cdecl SetClip_EggCarrier(signed int cliplevel)
{
	return;
}

void __cdecl EggCarrierSkyBox_Top(EntityData1* a1, float a2)
{
	float v2; // ST0C_4

	if (!MissedFrames)
	{
		if (CurrentAct != 6) Direct3D_SetNearFarPlanes(SkyboxDrawDistance.Minimum, SkyboxDrawDistance.Maximum);
		DisableFog();
		njSetTexture(&EC_SKY_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, a2, Camera_Data1->Position.z);
		njScaleV(0, &Skybox_Scale);
		v2 = VectorMaxAbs(&Skybox_Scale);
		ProcessModelNode_AB_Wrapper(ADV01_OBJECTS[65], v2);
		njScale(0, 1.0, 1.0, 1.0);
		njPopMatrix(1u);
		ToggleStageFog();
		if (CurrentAct != 6) Direct3D_SetNearFarPlanes(LevelDrawDistance.Minimum, LevelDrawDistance.Maximum);
	}
}

void __cdecl EggCarrierSkyBox_Bottom(EntityData1* a1, float a2)
{
	NJS_OBJECT* v2; // esi
	NJS_TEX* v3; // eax
	Sint16 v4; // cx
	float v5; // ST0C_4
	v2 = ADV01_OBJECTS[66];
	v3 = v2->basicdxmodel->meshsets->vertuv;
	v4 = *(Sint16*)& a1->LoopData;
	v3[1].v = v4;
	v3[3].v = v4;
	v3->v = v4 + 2040;
	v3[2].v = v4 + 2040;
	DisableFog();
	njSetTexture(&EC_SKY_TEXLIST);
	njPushMatrix(0);
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	njTranslate(0, Camera_Data1->Position.x, a2, Camera_Data1->Position.z);
	njScale(0, 3.0, 1.0, 3.0);
	njScaleV(0, &Skybox_Scale);
	v5 = VectorMaxAbs(&Skybox_Scale);
	ProcessModelNode_AB_Wrapper(v2, v5);
	njScale(0, 1.0, 1.0, 1.0);
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	njPopMatrix(1u);
	ToggleStageFog();
}

void EggCarrierSea()
{
	if (!DroppedFrames)
	{
		DisableFog();
		njSetTexture(&EC_SEA_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		ProcessModelNode_A_Wrapper(EggCarrierSeaModel, QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
	}
}

void ODoseiFix(NJS_MODEL_SADX* model, float scale)
{
	SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	sub_407A00(model, scale);
	ClampGlobalColorThing_Thing();
}

void OLivingLightFix(NJS_OBJECT* a1, int blend_mode, float scale)
{
	SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	ProcessModelNode_D_WrapperB(a1, blend_mode, scale);
	ClampGlobalColorThing_Thing();
}

void DrawTornado2WithQueue(NJS_OBJECT* obj, float scale)
{
	DrawModel_Queue_407FC0(obj->basicdxmodel, QueuedModelFlagsB_EnableZWrite);
}

void ParseEC00Materials(bool remove)
{
	Uint32 materialflags;
	NJS_MATERIAL* material;
	NJS_TEX* uv;
	int texid;
	LandTable* landtable;
	landtable = LANDTABLEEC0[0];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
				if (!remove) AddWhiteDiffuseMaterial(material);
				else RemoveWhiteDiffuseMaterial(material);
			}
		}
	}
	landtable = LANDTABLEEC0[1];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
				if (!remove) AddWhiteDiffuseMaterial(material);
				else RemoveWhiteDiffuseMaterial(material);
			}
		}
	}
	landtable = LANDTABLEEC0[2];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
				if (!remove) AddWhiteDiffuseMaterial(material);
				else RemoveWhiteDiffuseMaterial(material);
			}
		}
	}
	landtable = LANDTABLEEC0[3];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		//White diffuse for landtable animation
		if (!remove)
		{
			AddWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[1]);
			AddWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[2]);
			AddWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[3]);
			AddWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[4]);
			AddWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[6]);
			AddWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[7]);
			AddWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[8]);
			AddWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[9]);
		}
		else
		{
			RemoveWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[1]);
			RemoveWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[2]);
			RemoveWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[3]);
			RemoveWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[4]);
			RemoveWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[6]);
			RemoveWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[7]);
			RemoveWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[8]);
			RemoveWhiteDiffuseMaterial(&LANDTABLEEC0[3]->AnimData[LANDTABLEEC0[3]->AnimCount - 1].Model->basicdxmodel->mats[9]);
		}
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
				if (!remove) AddWhiteDiffuseMaterial(material);
				else RemoveWhiteDiffuseMaterial(material);
			}
		}
	}
	landtable = LANDTABLEEC0[4];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
				if (!remove) AddWhiteDiffuseMaterial(material);
				else RemoveWhiteDiffuseMaterial(material);
			}
		}
	}
	landtable = LANDTABLEEC0[5];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
				if (!remove) AddWhiteDiffuseMaterial(material);
				else RemoveWhiteDiffuseMaterial(material);
			}
		}
	}
}

void UnloadLevelFiles_ADV01()
{
	ParseEC00Materials(true);
	delete ADV01_0_Info;
	delete ADV01_1_Info;
	delete ADV01_2_Info;
	delete ADV01_3_Info;
	delete ADV01_4_Info;
	delete ADV01_5_Info;
	ADV01_0_Info = nullptr;
	ADV01_1_Info = nullptr;
	ADV01_2_Info = nullptr;
	ADV01_3_Info = nullptr;
	ADV01_4_Info = nullptr;
	ADV01_5_Info = nullptr;
}

void ADV01_Init()
{
	//This is done every time the function is called
	ADV01_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV0100\\0.sa1lvl"));
	ADV01_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV0100\\1.sa1lvl"));
	ADV01_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV0100\\2.sa1lvl"));
	ADV01_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV0100\\3.sa1lvl"));
	ADV01_4_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV0100\\4.sa1lvl"));
	ADV01_5_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV0100\\5.sa1lvl"));
	LandTable* ADV01_0 = ADV01_0_Info->getlandtable(); //&landtable_00162260; // ADV01_0_Info->getlandtable();
	LandTable* ADV01_1 = ADV01_1_Info->getlandtable(); //&landtable_001631F0; // ADV01_1_Info->getlandtable();
	LandTable* ADV01_2 = ADV01_2_Info->getlandtable(); //&landtable_00163CE8; // ADV01_2_Info->getlandtable();
	LandTable* ADV01_3 = ADV01_3_Info->getlandtable(); //&landtable_001650C8; // ADV01_3_Info->getlandtable();
	LandTable* ADV01_4 = ADV01_4_Info->getlandtable(); //&landtable_00165830; // ADV01_4_Info->getlandtable();
	LandTable* ADV01_5 = ADV01_5_Info->getlandtable(); //&landtable_001666F4; // ADV01_5_Info->getlandtable();
	RemoveMaterialColors_Landtable(ADV01_0);
	RemoveMaterialColors_Landtable(ADV01_1);
	RemoveMaterialColors_Landtable(ADV01_2);
	RemoveMaterialColors_Landtable(ADV01_3);
	RemoveMaterialColors_Landtable(ADV01_4);
	RemoveMaterialColors_Landtable(ADV01_5);
	ADV01_0->TexList = &texlist_ec00;
	ADV01_1->TexList = &texlist_ec01;
	ADV01_2->TexList = &texlist_ec02;
	ADV01_3->TexList = &texlist_ec03;
	ADV01_4->TexList = &texlist_ec04;
	ADV01_5->TexList = &texlist_ec05;
	LANDTABLEEC0[0] = ADV01_0;
	LANDTABLEEC0[1] = ADV01_1;
	LANDTABLEEC0[2] = ADV01_2;
	LANDTABLEEC0[3] = ADV01_3;
	LANDTABLEEC0[4] = ADV01_4;
	LANDTABLEEC0[5] = ADV01_5;
	LandTableArray[112] = ADV01_0;
	LandTableArray[113] = ADV01_1;
	LandTableArray[114] = ADV01_2;
	LandTableArray[115] = ADV01_3;
	LandTableArray[116] = ADV01_4;
	LandTableArray[117] = ADV01_5;
	ParseEC00Materials(false);
	if (!ModelsLoaded_ADV0100)
	{
		ResizeTextureList(&OBJ_EC00_TEXLIST, textures_obj_ec00);
		ADV01_TEXLISTS[0] = &texlist_ec00;
		ADV01_TEXLISTS[1] = &texlist_ec01;
		ADV01_TEXLISTS[2] = &texlist_ec02;
		ADV01_TEXLISTS[3] = &texlist_ec03;
		ADV01_TEXLISTS[4] = &texlist_ec04;
		ADV01_TEXLISTS[5] = &texlist_ec05;
		if (!SADXWater_EggCarrier)
		{
			EggCarrierSeaModel = LoadModel("system\\data\\ADV0100\\Models\\001C0478.sa1mdl", false);
			AddTextureAnimation_Permanent(29, 0, &EggCarrierSeaModel->basicdxmodel->mats[0], false, 4, 4, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
			AddTextureAnimation_Permanent(29, 1, &EggCarrierSeaModel->basicdxmodel->mats[0], false, 4, 4, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
			AddTextureAnimation_Permanent(29, 2, &EggCarrierSeaModel->basicdxmodel->mats[0], false, 4, 4, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
			WriteJump((void*)0x51C440, EggCarrierSea);
		}
		//Code fixes
		WriteData<5>((void*)0x5244D6, 0x90); //Disable light flickering
		WriteCall((void*)0x522B49, DrawTornado2WithQueue);
		WriteCall((void*)0x51F637, ODoseiFix);
		WriteCall((void*)0x51F669, ODoseiFix);
		WriteCall((void*)0x51EB2C, OLivingLightFix);
		WriteJump((void*)0x51B210, EggCarrierSkyBox_Top);
		WriteJump((void*)0x51B3B0, EggCarrierSkyBox_Bottom);
		//Swap EC skybox draw calls to render the outer part last in Acts 1/2
		WriteCall((void*)0x51B717, EggCarrierSkyBox_Bottom);
		WriteCall((void*)0x51B71F, EggCarrierSkyBox_Top);
		WriteCall((void*)0x51B76F, EggCarrierSkyBox_Bottom); //Transformation cutscene
		WriteCall((void*)0x51B77A, EggCarrierSkyBox_Top); //Transformation cutscene
		//Fix Sonic jumps in "Come back here" cutscene
		WriteData((float*)0x6D5227, 2.0f); //Sonic's speed before the first jump
		WriteData((float*)0x6D5371, -420.0f); //Sonic's X position before the last jump
		//Fix camera in Amy-Gamma prison cutscene
		WriteData((float*)0x6A4EBE, -134.0f); //X1
		WriteData((float*)0x6A4EB9, 15.0f); //Y1
		WriteData((float*)0x6A4EB4, 54.0f); //Z1
		WriteData((float*)0x6A4F41, -143.85f); //X2
		WriteData((float*)0x6A4F3C, 15.93f); //Y2
		WriteData((float*)0x6A4F37, 80.25f); //Z2
		//Fix camera in Gamma-Amy prison cutscene
		WriteData((float*)0x678C48, -134.0f); //X1
		WriteData((float*)0x678C43, 15.0f); //Y1
		WriteData((float*)0x678C3E, 54.0f); //Z1
		WriteData((float*)0x678CCB, -143.85f); //X2
		WriteData((float*)0x678CC6, 15.93f); //Y2
		WriteData((float*)0x678CC1, 80.25f); //Z2
		//Material fixes
		AddAlphaRejectMaterial((NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x209B6C)); //Rotating lights outside
		AddAlphaRejectMaterial((NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV01MODELS") + 0x1F7A58)); //Monorail sign (outside)
		RemoveVertexColors_Model(ADV01_MODELS[13]); //Slot machine
		RemoveVertexColors_Object(ADV01_OBJECTS[11]); //Books 1
		RemoveVertexColors_Object(ADV01_OBJECTS[12]); //Books 2
		RemoveVertexColors_Object((NJS_OBJECT*)0x10FEF74); //Eggman in Eggmobile NPC model (Egg Carrier)
		//Fix materials on elevator buttons
		WriteData((float*)0x51E818, 1.0f);
		WriteData((float*)0x51E81D, 1.0f);
		WriteData((float*)0x51E88F, 1.0f);
		WriteData((float*)0x51E894, 1.0f);
		WriteJump((char*)GetProcAddress(GetModuleHandle(L"ADV01MODELS"), "SetClip_EC00"), SetClip_EggCarrier);
		WriteJump((char*)GetProcAddress(GetModuleHandle(L"ADV01MODELS"), "SetClip_EC01"), SetClip_EggCarrier);
		WriteData<5>((void*)0x51BB8C, 0x90); //Don't disable fog in EC transformation cutscene
		//Model replacements
		NJS_OBJECT* EggChair = LoadModel("system\\data\\ADV0100\\Models\\0019795C.sa1mdl", false); //OEggChair
		ADV01_ACTIONS[2]->object = EggChair;
		ADV01_ACTIONS[2]->motion = &_197dbc; //OEggChair
		ADV01_OBJECTS[21] = EggChair->child->child;
		ADV01_OBJECTS[22] = EggChair->child->child->sibling->sibling->sibling;
		ADV01_OBJECTS[23] = EggChair->child->child->sibling->sibling->sibling->sibling;
		ADV01_OBJECTS[24] = EggChair->child->child->sibling->sibling->sibling->sibling->sibling;
		ADV01_ACTIONS[6]->object = LoadModel("system\\data\\ADV0100\\Models\\0016991C.sa1mdl", false); //OSkyDeck
		NJS_OBJECT* ECTransform = LoadModel("system\\data\\ADV0100\\Models\\00209538.sa1mdl", false);
		ADV01_ACTIONS[7]->object = ECTransform; //EC transform
		ADV01_OBJECTS[64] = ECTransform; //EC transform
		ADV01_OBJECTS[0] = LoadModel("system\\data\\ADV0100\\Models\\00182160.sa1mdl", false); //SideLift
		ADV01_OBJECTS[1] = LoadModel("system\\data\\ADV0100\\Models\\00181DBC.sa1mdl", false); //SideLift
		ADV01_OBJECTS[2] = LoadModel("system\\data\\ADV0100\\Models\\00181684.sa1mdl", false); //SideLift
		ADV01_ACTIONS[3]->object = LoadModel("system\\data\\ADV0100\\Models\\0019A490.sa1mdl", false); //OGunSight
		ADV01_OBJECTS[6] = LoadModel("system\\data\\ADV0100\\Models\\001AA1A8.sa1mdl", false); //OBChair
		ADV01_OBJECTS[8] = LoadModel("system\\data\\ADV0100\\Models\\001A01A0.sa1mdl", false); //OEggmanBed
		ADV01_OBJECTS[29] = ADV01_ACTIONS[3]->object;
		ADV01_OBJECTS[55] = LoadModel("system\\data\\ADV0100\\Models\\0017D82C.sa1mdl", false); //OSLight
		ADV01_OBJECTS[56] = ADV01_OBJECTS[55]->child; //OSLight
		ADV01_OBJECTS[57] = ADV01_OBJECTS[55]->child->child; //OSLight
		AddWhiteDiffuseMaterial(&ADV01_OBJECTS[55]->child->child->basicdxmodel->mats[3]);
		AddWhiteDiffuseMaterial(&ADV01_OBJECTS[55]->child->child->basicdxmodel->mats[4]);
		AddWhiteDiffuseMaterial(&ADV01_OBJECTS[55]->child->child->basicdxmodel->mats[5]);
		AddWhiteDiffuseMaterial(&ADV01_OBJECTS[55]->child->child->basicdxmodel->mats[6]);
		AddWhiteDiffuseMaterial(&ADV01_OBJECTS[55]->child->child->basicdxmodel->mats[7]);
		ADV01_OBJECTS[58] = LoadModel("system\\data\\ADV0100\\Models\\0017BFE4.sa1mdl", false); //OSLight
		ADV01_OBJECTS[61] = LoadModel("system\\data\\ADV0100\\Models\\001B4794.sa1mdl", false); //OTornado2
		AddWhiteDiffuseMaterial(&ADV01_OBJECTS[61]->basicdxmodel->mats[24]);
		AddWhiteDiffuseMaterial(&ADV01_OBJECTS[61]->basicdxmodel->mats[25]);
		SwapMeshsets(ADV01_OBJECTS[61], 0, 22);
		NJS_OBJECT* SomeStupidThing = LoadModel("system\\data\\ADV0100\\Models\\00178BC4.sa1mdl", false);
		ADV01_ACTIONS[0]->object = SomeStupidThing; //This thing is stupid
		ADV01_OBJECTS[5] = SomeStupidThing; //This thing is stupid
		ADV01_OBJECTS[13] = LoadModel("system\\data\\ADV0100\\Models\\001A85F0.sa1mdl", false); //OParasol
		ADV01_OBJECTS[27] = LoadModel("system\\data\\ADV0100\\Models\\001782D4.sa1mdl", false); //Door top
		NJS_OBJECT* Taihou = LoadModel("system\\data\\ADV0100\\Models\\0017FDB4.sa1mdl", false);
		ADV01_OBJECTS[14]->basicdxmodel = Taihou->basicdxmodel; //OTaihou (Cannon)
		ADV01_OBJECTS[14]->child->basicdxmodel = Taihou->child->basicdxmodel; //OTaihou (Cannon)
		ADV01_OBJECTS[14]->child->child->basicdxmodel = Taihou->child->child->basicdxmodel; //OTaihou (Cannon)
		ADV01_OBJECTS[14]->child->child->sibling->basicdxmodel = Taihou->child->child->sibling->basicdxmodel; //OTaihou (Cannon)
		ADV01_OBJECTS[28] = LoadModel("system\\data\\ADV0100\\Models\\001777B4.sa1mdl", false); //Door 2
		ADV01_OBJECTS[18] = LoadModel("system\\data\\ADV0100\\Models\\00189EA0.sa1mdl", false); //Eggcap
		ADV01_OBJECTS[19] = LoadModel("system\\data\\ADV0100\\Models\\001760A0.sa1mdl", false); //Egglift
		ADV01_OBJECTS[34] = LoadModel("system\\data\\ADV0100\\Models\\00189090.sa1mdl", false); //OMast
		ADV01_OBJECTS[51]->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Pool water
		ADV01_OBJECTS[51]->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Pool water
		ADV01_OBJECTS[51]->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Pool water
		NJS_OBJECT* MonorailFront = LoadModel("system\\data\\ADV0100\\Models\\00170498.sa1mdl", false);
		ADV01_OBJECTS[69]->basicdxmodel = MonorailFront->basicdxmodel;
		ADV01_OBJECTS[69]->child->basicdxmodel = MonorailFront->child->basicdxmodel;
		ADV01_OBJECTS[69]->child->child->basicdxmodel = MonorailFront->child->child->basicdxmodel;
		ADV01_OBJECTS[69]->child->sibling->basicdxmodel = MonorailFront->child->sibling->basicdxmodel;
		AddAlphaRejectMaterial(&ADV01_OBJECTS[69]->child->sibling->basicdxmodel->mats[0]);
		NJS_OBJECT* MonorailBack = LoadModel("system\\data\\ADV0100\\Models\\00170498.sa1mdl", false);
		ADV01_OBJECTS[70]->basicdxmodel = MonorailBack->basicdxmodel;
		ADV01_OBJECTS[70]->child->basicdxmodel = MonorailBack->child->basicdxmodel;
		ADV01_OBJECTS[70]->child->child->basicdxmodel = MonorailBack->child->child->basicdxmodel;
		for (int i = 0; i < 3; i++)
		{
			SkyboxScale_EggCarrier4[i].x = 1.0f;
			SkyboxScale_EggCarrier4[i].y = 1.0f;
			SkyboxScale_EggCarrier4[i].z = 1.0f;
			EggCarrierOutsideSkyDrawDist3[i].Maximum = -9000;
			EggCarrierOutsideDrawDist1[i].Maximum = -11000;
			EggCarrierOutsideDrawDist2[i].Maximum = -11000;
			EggCarrierOutsideDrawDist3[i].Maximum = -11000;
			EggCarrierOutsideDrawDist7[i].Maximum = -28000;
			EggCarrierOutside2Fog[i].Distance = -12000;
			EggCarrierOutside2Fog[i].Layer = -12000;
			EggCarrierOutside3Fog[i].Distance = -12000;
			EggCarrierOutside3Fog[i].Layer = -12000;
			EggCarrierOutside4Fog[i].Distance = -12000;
			EggCarrierOutside4Fog[i].Layer = -12000;
			EggCarrierOutside5Fog[i].Distance = -12000;
			EggCarrierOutside5Fog[i].Layer = -12000;
			EggCarrierOutside6Fog[i].Distance = -12000;
			EggCarrierOutside6Fog[i].Layer = -12000;
			EggCarrierOutside7Fog[i].Toggle = 1;
			EggCarrierOutside7Fog[i].Layer = 6500;
			EggCarrierOutside7Fog[i].Color = 0xFF000000;
			EggCarrierOutside7Fog[i].Distance = 17000;
		}
		ReinitializeDLLStuff();
		ModelsLoaded_ADV0100 = true;
	}
}

void ADV01_OnFrame()
{
	//This dirty hack is needed to prevent the DX collision object from interfering with Gamma's hover animation in cutscenes
	if (CurrentLevel == LevelIDs_EggCarrierOutside && CurrentAct == 2)
	{
		if (ADV01_2_Info)
		{
			if (EV_MainThread_ptr)
			{
				{
					if (LANDTABLEEC0[2]->Col[0].Flags == 0x40000001 && LANDTABLEEC0[2]->Col[0].Radius < 53.0f)
					{
						if (LANDTABLEEC0[2]->Col[0].Model->pos[1] >= 1524.0f)
						{
							//PrintDebug("Disabling collision\n");
							LANDTABLEEC0[2]->Col[0].Model->pos[1] = -1500.0f;
							LANDTABLEEC0[2]->Col[0].Center = { 0, 0, 0 };
							LANDTABLEEC0[2]->Col[0].Radius = 0;
							LANDTABLEEC0[2]->Col[0].Flags = 0;
						}

					}
				}
			}
			else
			{
				if (LANDTABLEEC0[2]->Col[0].Model->pos[1] == -1500.0f)
				{
					//PrintDebug("Enabling collision\n");
					LANDTABLEEC0[2]->Col[0].Model->pos[1] = 1525.692f;
					LANDTABLEEC0[2]->Col[0].Center = { 1.572876f, 1527.742f, 3462.564f };
					LANDTABLEEC0[2]->Col[0].Radius = 51.01946f;
					LANDTABLEEC0[2]->Col[0].Flags = 0x40000001;
				}
			}
		}
	}
}