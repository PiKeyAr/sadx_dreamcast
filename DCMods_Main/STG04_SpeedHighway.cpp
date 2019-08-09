#include "stdafx.h"

//TODO: The weird behavior of the light on conveyour belt

NJS_TEXNAME textures_highway1[89];
NJS_TEXLIST texlist_hw1 = { arrayptrandlength(textures_highway1) };

NJS_TEXNAME textures_highway2[32];
NJS_TEXLIST texlist_hw2 = { arrayptrandlength(textures_highway2) };

NJS_TEXNAME textures_highway3[107];
NJS_TEXLIST texlist_hw3 = { arrayptrandlength(textures_highway3) };

NJS_OBJECT *ConeBase = nullptr;
NJS_OBJECT *ConeTop = nullptr;
NJS_OBJECT *FountainBottom = nullptr;
NJS_OBJECT *FountainSide = nullptr;
NJS_OBJECT *Fountain1 = nullptr;
NJS_OBJECT *Fountain2 = nullptr;
NJS_OBJECT *Fountain3 = nullptr;
NJS_OBJECT *HelicopterLight1 = nullptr;
NJS_OBJECT *HelicopterLight2 = nullptr;
NJS_OBJECT *HelicopterLight3 = nullptr;
NJS_OBJECT *HelicopterLight4 = nullptr;
NJS_OBJECT *Antenna = nullptr;
NJS_OBJECT *FlySt1 = nullptr;
NJS_OBJECT *FlySt2 = nullptr;
NJS_OBJECT *MissileLogo = nullptr;
NJS_OBJECT *HW3FountainMesh = nullptr; //This unloads when the level unloads

/*
#include "Highway1.h"
#include "Highway2.h"
#include "Highway3.h"
*/

int Highway3Cols[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
static bool Highway3ColsLoaded = false;
static int shwwater = 0;
SETObjData setdata_hw = {};

FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
FunctionPointer(long double, sub_49CC70, (float a1, float a2, float a3), 0x49CC70);
FunctionPointer(void, sub_408530, (NJS_OBJECT *obj), 0x408530);
FunctionPointer(void, sub_407FC0, (NJS_MODEL_SADX *a1, int blend), 0x407FC0);

DataArray(FogData, SpeedHighway1Fog, 0x024CA4E4, 3);
DataArray(FogData, SpeedHighway2Fog, 0x024CA514, 3);
DataArray(FogData, SpeedHighway3Fog, 0x024CA544, 3);

PVMEntry SpeedHighway3Textures_list[] = {
	{ "HIGHWAY03", (TexList *)&HIGHWAY03_TEXLIST },
	{ "EC_WATER", (TexList *)0x10F30A0 },
};

void FountainPart1(NJS_MODEL_SADX *a1, int a2, float a3)
{
	DrawQueueDepthBias = 3000.0f;
	sub_409E70(Fountain1->basicdxmodel, 0, a3);
}

void FountainPart2(NJS_MODEL_SADX *a1, int a2, float a3)
{
	DrawQueueDepthBias = 3050.0f;
	sub_409E70(Fountain2->basicdxmodel, 0, a3);
}

void FountainPart3(NJS_MODEL_SADX *a1, int a2, float a3)
{
	DrawQueueDepthBias = 3060.0f;
	sub_409E70(Fountain3->basicdxmodel, 0, a3);
}

NJS_MATERIAL* DisableAlphaRejection_SpeedHighway[] = {
	((NJS_MATERIAL*)0x02696920), //OLmpa
	((NJS_MATERIAL*)0x026877CC), //OLamp 1
	((NJS_MATERIAL*)0x026878D8), //OLamp 2
};

NJS_MATERIAL* WhiteDiffuse_Highway[] = {
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
	sub_408530(obj);
	ProcessModelNode(Antenna, (QueuedModelFlagsB)0, 1.0f);
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
	if (EnableSpeedHighway && HW3FountainMesh != nullptr)
	{
		if (!MissedFrames)
		{
			njSetTexture((NJS_TEXLIST*)0x10F30A0);
			njPushMatrix(0);
			ProcessModelNode(HW3FountainMesh, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			njPopMatrix(1u);
		}
	}
	original(a1);
}

void RemoveMaterials_SpeedHighway(LandTable *landtable)
{
	Uint32 materialflags;
	NJS_MATERIAL *material;
	int colflags;
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			if (materialflags & NJD_CUSTOMFLAG_NO_REJECT)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				RemoveAlphaRejectMaterial(material);
			}
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				RemoveWhiteDiffuseMaterial(material);
			}
		}
	}
}

void UnloadLevelFiles_STG04()
{
	if (DLLLoaded_Lantern) RemoveMaterials_SpeedHighway(STG04_0_Info->getlandtable());
	for (int i = 0; i < LengthOfArray(Highway3Cols); i++)
	{
		Highway3Cols[i] = -1;
	}
	HW3FountainMesh = nullptr;
	delete STG04_0_Info;
	delete STG04_1_Info;
	delete STG04_2_Info;
	STG04_0_Info = nullptr;
	STG04_1_Info = nullptr;
	STG04_2_Info = nullptr;
}

void AddHighway3TransparentThing(int colnumber)
{
	for (int i = 0; i < LengthOfArray(Highway3Cols); i++)
	{
		if (Highway3Cols[i] == colnumber) return;
		else if (Highway3Cols[i] == -1)
		{
			Highway3Cols[i] = colnumber;
			//PrintDebug("Added COl: %d\n", colnumber);
			return;
		}
	}
}

void OCraneFix(NJS_MODEL_SADX *a1, int a2, float a3)
{
	DrawModel(a1);
}

void Highway3Cols_Display(ObjectMaster *a1)
{
	NJS_VECTOR sphere = { 0, 0, 0 };
	float radius = 0.0f;
	if (!MissedFrames && CurrentAct == 2)
	{
		for (int i = 0; i < LengthOfArray(Highway3Cols); i++)
		{
			if (Highway3Cols[i] != -1)
			{
				//PrintDebug("Trying COl: %d\n", Highway3Cols[i]);
				radius = 2500.0f + GeoLists[34]->Col[Highway3Cols[i]].Radius;
				//PrintDebug("Radius: %f", radius);
				sphere.x = GeoLists[34]->Col[Highway3Cols[i]].Center.x;
				sphere.y = GeoLists[34]->Col[Highway3Cols[i]].Center.y;
				sphere.z = GeoLists[34]->Col[Highway3Cols[i]].Center.z;
				if (radius != 0 && IsPlayerInsideSphere(&sphere, radius))
				{
					njSetTexture(&texlist_hw3);
					njPushMatrix(0);
					njTranslate(0, 0, 0, 0);
					if (GeoLists[34]->Col[Highway3Cols[i]].Flags & 0x01000000) DrawQueueDepthBias = 3000.0f;
					else DrawQueueDepthBias = 1000.0f;
					ProcessModelNode_D(GeoLists[34]->Col[Highway3Cols[i]].Model, 1, 1.0f);
					njPopMatrix(1u);
					DrawQueueDepthBias = 0;
				}
			}
		}
	}
}

void Highway3Cols_Delete(ObjectMaster *a1)
{
	Highway3ColsLoaded = false;
	CheckThingButThenDeleteObject(a1);
}

void Highway3Cols_Main(ObjectMaster *a1)
{
	if (CurrentLevel == LevelIDs_SpeedHighway)
	{
		if (CurrentAct == 2) Highway3Cols_Display(a1);
	}
	else Highway3Cols_Delete(a1);
}

void Highway3Cols_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Highway3Cols_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Highway3Cols_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))Highway3Cols_Delete;
}

void LoadHighway3Cols()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Highway3Cols_Load);
	setdata_hw.Distance = 612800.0f;
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_hw;
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
	Highway3ColsLoaded = true;
}

static void SkyBox_Highway_Load_r(ObjectMaster *a1);
static Trampoline SkyBox_Highway_Load_t(0x610A70, 0x610A7B, SkyBox_Highway_Load_r);
static void __cdecl SkyBox_Highway_Load_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(SkyBox_Highway_Load_r)*>(SkyBox_Highway_Load_t.Target());
	original(a1);
	if (EnableSpeedHighway && !Highway3ColsLoaded) LoadHighway3Cols();
}

void ProcessMaterials_SpeedHighway(LandTable *landtable)
{
	Uint32 materialflags;
	NJS_MATERIAL *material;
	int colflags;
	for (int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (colflags & 0x08000000)
		{
			if (landtable->Col[j].Flags & ColFlags_Visible)landtable->Col[j].Flags &= ~ColFlags_Visible;
			AddHighway3TransparentThing(j);
		}
		if (colflags == 0x00000002)
		{
			HW3FountainMesh = landtable->Col[j].Model;
		}
		if (DLLLoaded_Lantern)
		{
			for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
			{
				materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
				if (materialflags & NJD_CUSTOMFLAG_NO_REJECT)
				{
					material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
					AddAlphaRejectMaterial(material);
				}
				if (materialflags & NJD_CUSTOMFLAG_WHITE)
				{
					material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
					AddWhiteDiffuseMaterial(material);
				}
			}
		}
	}
}

void ConeSprite(NJS_SPRITE *sp, Int n, NJD_SPRITE attr, QueuedModelFlagsB zfunc_type)
{
	DrawQueueDepthBias = 2000.0f;
	njDrawSprite3D_Queue(sp, n, attr, zfunc_type);
	DrawQueueDepthBias = 0.0f;
}

void ConeModel(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	DrawQueueDepthBias = 2000.0f;
	DrawModel(ConeBase->basicdxmodel);
	DrawModel_Queue(ConeTop->basicdxmodel, (QueuedModelFlagsB)0);
	DrawQueueDepthBias = 0.0f;
}

void OLmpaFix(NJS_MODEL_SADX *model, QueuedModelFlagsB blend)
{
	DrawQueueDepthBias = 3000.0f;
	DrawVisibleModel_Queue(model, blend);
	DrawQueueDepthBias = 0.0f;
}

void OLampFix(NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float scale)
{
	DrawQueueDepthBias = 3000.0f;
	DrawModel_QueueVisible(model, blend, scale);
	DrawQueueDepthBias = 0.0f;
}

void HelicopterLight(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	ProcessModelNode_A_WrapperB(HelicopterLight1, QueuedModelFlagsB_EnableZWrite);
	ProcessModelNode_A_WrapperB(HelicopterLight2, QueuedModelFlagsB_EnableZWrite);
	ProcessModelNode_A_WrapperB(HelicopterLight3, QueuedModelFlagsB_SomeTextureThing);
	ProcessModelNode_A_WrapperB(HelicopterLight4, QueuedModelFlagsB_SomeTextureThing);
}

void FlyStFix(NJS_ACTION *action, Float frame)
{
	njAction(action, frame);
	ProcessModelNode(FlySt2, QueuedModelFlagsB_EnableZWrite, 1.0f);
}

void MissileFix(NJS_OBJECT *obj)
{
	ProcessModelNode_AB_Wrapper(obj, 1.0f);
	njTranslate(0, -0.5f, 0, 0);
	ProcessModelNode(MissileLogo, QueuedModelFlagsB_EnableZWrite, 1.0f);
}

void SpeedHighway_Init()
{
	STG04_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG04\\0.sa1lvl"));
	STG04_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG04\\1.sa1lvl"));
	STG04_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG04\\2.sa1lvl"));
	LandTable* STG04_0 = STG04_0_Info->getlandtable(); //&landtable_0001853C; // STG04_0_Info->getlandtable();
	LandTable* STG04_1 = STG04_1_Info->getlandtable(); //&landtable_00019178; // STG04_1_Info->getlandtable();
	LandTable* STG04_2 = STG04_2_Info->getlandtable(); //&landtable_0001B08C; // STG04_2_Info->getlandtable();
	RemoveMaterialColors_Landtable(STG04_0);
	RemoveMaterialColors_Landtable(STG04_1);
	RemoveMaterialColors_Landtable(STG04_2);
	ProcessMaterials_SpeedHighway(STG04_0);
	ProcessMaterials_SpeedHighway(STG04_2);
	STG04_0->TexList = &texlist_hw1;
	STG04_1->TexList = &texlist_hw2;
	STG04_2->TexList = &texlist_hw3;
	WriteData((LandTable**)0x97DA88, STG04_0);
	WriteData((LandTable**)0x97DA8C, STG04_1);
	WriteData((LandTable**)0x97DA90, STG04_2);
	if (!ModelsLoaded_STG04)
	{
		ReplaceBIN_DC("CAM0400M");
		ReplaceBIN_DC("CAM0400S");
		ReplaceBIN_DC("CAM0401S");
		ReplaceBIN_DC("CAM0402K");
		ReplaceBIN_DC("CAM0402S");
		if (!Use1999SetFiles)
		{
			ReplaceBIN_DC("SET0400M");
			ReplaceBIN_DC("SET0400S");
			ReplaceBIN_DC("SET0401S");
			ReplaceBIN_DC("SET0402K");
			ReplaceBIN_DC("SET0402S");
		}
		else
		{
			ReplaceBIN_1999("SET0400M");
			ReplaceBIN_1999("SET0400S");
			ReplaceBIN_1999("SET0401S");
			ReplaceBIN_1999("SET0402K");
			ReplaceBIN_1999("SET0402S");
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
		//Fountain fixes
		WriteCall((void*)0x0061BAA0, FountainPart1);
		WriteCall((void*)0x0061BAF1, FountainPart2);
		WriteCall((void*)0x0061BB31, FountainPart3);
		FountainBottom = LoadModel("system\\data\\STG04\\Models\\00134B34.sa1mdl", false); //Fountain bottom
		FountainBottom->basicdxmodel->mats[0].attr_texId = 25;
		WriteData((NJS_OBJECT**)0x0061BC4C, FountainBottom);
		FountainSide = LoadModel("system\\data\\STG04\\Models\\001350C8.sa1mdl", false); //Fountain side
		FountainSide->basicdxmodel->mats[0].attr_texId = 25;
		WriteData((NJS_OBJECT**)0x026B3150, FountainSide);
		//Fountain animation enhancement
		TexLists_Level[11]->PVMList = (PVMEntry*)& SpeedHighway3Textures_list;
		TexLists_Level[11]->NumTextures = LengthOfArray(SpeedHighway3Textures_list);
		*(NJS_OBJECT*)0x0266403C = *LoadModel("system\\data\\STG04\\Models\\00136320.sa1mdl", false); //OJamer
		((NJS_OBJECT*)0x0266403C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x0266403C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x0266403C)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		WriteData((NJS_TEXNAME**)0x26B2968, (NJS_TEXNAME*)0x2670590); //OJamer texture list 1
		WriteData((NJS_TEXNAME**)0x26B2960, (NJS_TEXNAME*)0x2670554); //OJamer texture list 2
		*(NJS_OBJECT*)0x026919C0 = *LoadModel("system\\data\\STG04\\Models\\0015D440.sa1mdl", false); //Antenna model
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x026919C0)->basicdxmodel->mats[4]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x026919C0)->basicdxmodel->mats[5]);
		HideMesh_Object(((NJS_OBJECT*)0x026919C0), 3); //Hide DA_ONE thing
		Antenna = LoadModel("system\\data\\STG04\\Models\\0015D440.sa1mdl", false); //Antenna model
		HideMesh_Object(Antenna, 0); //Hide all but the DA_ONE thing
		HideMesh_Object(Antenna, 1); //Hide all but the DA_ONE thing
		HideMesh_Object(Antenna, 2); //Hide all but the DA_ONE thing
		HideMesh_Object(Antenna, 4); //Hide all but the DA_ONE thing
		HideMesh_Object(Antenna, 5); //Hide all but the DA_ONE thing
		WriteCall((void*)0x00615D60, AntennaModel);
		WriteData<1>((char*)0x004B19E2, 0x08); //Cop speeder effect blending
		WriteCall((void*)0x4B1C6F, SetCopSpeederEffectAlpha);
		WriteCall((void*)0x615577, OLmpaFix);
		WriteCall((void*)0x61632E, OLampFix);
		WriteCall((void*)0x6163AB, OLampFix);
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
			material_register_ptr(WhiteDiffuse_Highway, LengthOfArray(WhiteDiffuse_Highway), &ForceWhiteDiffuse);
			material_register_ptr(DisableAlphaRejection_SpeedHighway, LengthOfArray(DisableAlphaRejection_SpeedHighway), &DisableAlphaRejection);
		}
		WriteCall((void*)0x61AF66, OCraneFix); //Was it really necessary to queue a non-transparent model??
		//Helicopter light
		HelicopterLight1 = LoadModel("system\\data\\STG04\\Models\\00159588.sa1mdl", false); //Helicopter light (edited model)
		HelicopterLight2 = HelicopterLight1->child;
		HelicopterLight3 = HelicopterLight1->child->child;
		HelicopterLight4 = HelicopterLight1->child->child->child;
		HelicopterLight1->evalflags |= NJD_EVAL_BREAK;
		HelicopterLight2->evalflags |= NJD_EVAL_BREAK;
		HelicopterLight3->evalflags |= NJD_EVAL_BREAK;
		AddWhiteDiffuseMaterial(&HelicopterLight1->basicdxmodel->mats[0]);
		AddWhiteDiffuseMaterial(&HelicopterLight1->basicdxmodel->mats[1]);
		AddAlphaRejectMaterial(&HelicopterLight3->basicdxmodel->mats[0]);
		WriteCall((void*)0x61378E, HelicopterLight);
		((NJS_MATERIAL*)0x0268C98C)->diffuse.color = 0xB2B2B2B2;
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
		ConeBase = LoadModel("system\\data\\STG04\\Models\\001554A8.sa1mdl", false); //Cone
		HideMesh_Object(ConeBase, 0);
		AddWhiteDiffuseMaterial(&ConeBase->basicdxmodel->mats[1]);
		ConeTop = LoadModel("system\\data\\STG04\\Models\\001554A8.sa1mdl", false); //Cone
		HideMesh_Object(ConeTop, 1);
		WriteCall((void*)0x6165E5, ConeModel);
		WriteCall((void*)0x616733, ConeSprite);
		*(NJS_OBJECT*)0x0267497C = *LoadModel("system\\data\\STG04\\Models\\001434F4.sa1mdl", false); //Platform
		*(NJS_OBJECT*)0x02687284 = *LoadModel("system\\data\\STG04\\Models\\00154480.sa1mdl", true); //Small plant in Act 3
		FlySt1 = LoadModel("system\\data\\STG04\\Models\\00142D48.sa1mdl", false); //Platform2
		HideMesh_Object(FlySt1, 6);
		AddAlphaRejectMaterial(&FlySt1->child->basicdxmodel->mats[0]);
		AddAlphaRejectMaterial(&FlySt1->child->sibling->basicdxmodel->mats[0]);
		AddAlphaRejectMaterial(&FlySt1->child->sibling->sibling->basicdxmodel->mats[0]);
		AddAlphaRejectMaterial(&FlySt1->child->sibling->sibling->sibling->basicdxmodel->mats[0]);
		FlySt2 = LoadModel("system\\data\\STG04\\Models\\00142D48.sa1mdl", false); //Platform2
		HideMesh_Object(FlySt2, 0);
		HideMesh_Object(FlySt2, 1);
		HideMesh_Object(FlySt2, 2);
		HideMesh_Object(FlySt2, 3);
		HideMesh_Object(FlySt2, 4);
		HideMesh_Object(FlySt2, 5);
		((NJS_ACTION*)0x02674424)->object = FlySt1;
		WriteCall((void*)0x617FCA, FlyStFix);
		*(NJS_OBJECT*)0x02679ECC = *LoadModel("system\\data\\STG04\\Models\\00148880.sa1mdl", false); //Platform (Tails)
		*(NJS_OBJECT*)0x026A0008 = *LoadModel("system\\data\\STG04\\Models\\0016B6FC.sa1mdl", false); //Missile (Tails)
		HideMesh_Object(((NJS_OBJECT*)0x026A0008), 6); //Hide Eggman logo
		MissileLogo = LoadModel("system\\data\\STG04\\Models\\0016B6FC.sa1mdl", false);
		HideMesh_Object(MissileLogo, 0);
		HideMesh_Object(MissileLogo, 1);
		HideMesh_Object(MissileLogo, 2);
		HideMesh_Object(MissileLogo, 3);
		HideMesh_Object(MissileLogo, 4);
		HideMesh_Object(MissileLogo, 5);
		AddAlphaRejectMaterial(&MissileLogo->basicdxmodel->mats[6]);
		WriteCall((void*)0x613FD6, MissileFix);
		*(NJS_OBJECT*)0x0267225C = *LoadModel("system\\data\\STG04\\Models\\00140EA4.sa1mdl", false); //OCrane
		*(NJS_OBJECT*)0x02690DCC = *LoadModel("system\\data\\STG04\\Models\\0015C898.sa1mdl", true); //Escalator2
		((NJS_OBJECT*)0x02690DCC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x02690DCC)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x02690DCC)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x02690DCC)->basicdxmodel->mats[5].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x02690DCC)->basicdxmodel->mats[6].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x02690DCC)->basicdxmodel->mats[7].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		*(NJS_OBJECT*)0x0268F054 = *LoadModel("system\\data\\STG04\\Models\\0015B100.sa1mdl", true); //Escalator1
		*(NJS_MODEL_SADX*)0x02696630 = *LoadModel("system\\data\\STG04\\Models\\00161F84.sa1mdl", true)->basicdxmodel; //Clock tower
		*(NJS_OBJECT*)0x026777D4 = *LoadModel("system\\data\\STG04\\Models\\00146254.sa1mdl", true); //container B top broken 1
		*(NJS_OBJECT*)0x02677288 = *LoadModel("system\\data\\STG04\\Models\\00145D34.sa1mdl", true); //container B top broken 2
		WriteData<1>((void*)0x00619545, 1); //blending mode for poster
		WriteData<1>((void*)0x0061A8EA, 0); //blending mode for glass
		WriteData<1>((void*)0x0061A8EA, 0); //blending mode for glass 2
		WriteData<1>((void*)0x0061A951, 0); //blending mode for glass 3
		((NJS_TEXLIST*)0x26B2B90)->textures = (NJS_TEXNAME*)0x26705CC; //Texlists for posters
		((NJS_TEXLIST*)0x26B2B98)->textures = (NJS_TEXNAME*)0x26705F0; //Texlists for posters
		((NJS_TEXLIST*)0x26B2BA0)->textures = (NJS_TEXNAME*)0x2670614; //Texlists for posters
		((NJS_TEXLIST*)0x26B2BA8)->textures = (NJS_TEXNAME*)0x2670638; //Texlists for posters
		((NJS_TEXLIST*)0x26B2BB0)->textures = (NJS_TEXNAME*)0x267065C; //Texlists for posters
		((NJS_OBJECT*)0x02671A20)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA; //O Crane platform alpha fix
		((NJS_OBJECT*)0x02671A20)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //O Crane platform specular fix
		RemoveVertexColors_Object((NJS_OBJECT*)0x02671A20);
		*(NJS_OBJECT*)0x0267DC14 = *LoadModel("system\\data\\STG04\\Models\\0014B12C.sa1mdl", false); //Turnasi part 1
		*(NJS_OBJECT*)0x0267D3B4 = *LoadModel("system\\data\\STG04\\Models\\0014ABC8.sa1mdl", false); //Turnasi part 2
		((NJS_OBJECT*)0x0267D3B4)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0267D3B4)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0267D3B4)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		*(NJS_OBJECT*)0x0267C7AC = *LoadModel("system\\data\\STG04\\Models\\0014A5B0.sa1mdl", false); //Turnasi part 3
		*(NJS_OBJECT*)0x0268C058 = *LoadModel("system\\data\\STG04\\Models\\00158720.sa1mdl", false); //SH Helicopter
		*(NJS_OBJECT*)0x0266D90C = *LoadModel("system\\data\\STG04\\Models\\0013D068.sa1mdl", true); //SH Bus
		*(NJS_OBJECT*)0x0266B484 = *LoadModel("system\\data\\STG04\\Models\\0013B15C.sa1mdl", true); //SH Red Car
		*(NJS_OBJECT*)0x026682B8 = *LoadModel("system\\data\\STG04\\Models\\0013949C.sa1mdl", true); //SH Blue Car
		*(NJS_OBJECT*)0x0266FC8C = *LoadModel("system\\data\\STG04\\Models\\0013E9CC.sa1mdl", true); //SH Yellow Car
		*(NJS_MODEL_SADX*)0x0267A1A0 = *LoadModel("system\\data\\STG04\\Models\\00148B4C.sa1mdl", false)->basicdxmodel; //SH Glass
		//Glass fragments
		*(NJS_OBJECT*)0x02679FDC = *LoadModel("system\\data\\STG04\\Models\\00148984.sa1mdl", false);
		*(NJS_OBJECT*)0x0267A2DC = *LoadModel("system\\data\\STG04\\Models\\00148C50.sa1mdl", false);
		*(NJS_OBJECT*)0x0267A410 = *LoadModel("system\\data\\STG04\\Models\\00148D54.sa1mdl", false);
		*(NJS_OBJECT*)0x0267A56C = *LoadModel("system\\data\\STG04\\Models\\00148E5C.sa1mdl", false);
		*(NJS_OBJECT*)0x0267A67C = *LoadModel("system\\data\\STG04\\Models\\00148F64.sa1mdl", false);
		*(NJS_OBJECT*)0x0267A7B0 = *LoadModel("system\\data\\STG04\\Models\\0014906C.sa1mdl", false);
		*(NJS_OBJECT*)0x0267A8C0 = *LoadModel("system\\data\\STG04\\Models\\00149174.sa1mdl", false);
		*(NJS_OBJECT*)0x0267AA7C = *LoadModel("system\\data\\STG04\\Models\\001492CC.sa1mdl", false);
		*(NJS_OBJECT*)0x0267ABB0 = *LoadModel("system\\data\\STG04\\Models\\001493D4.sa1mdl", false);
		*(NJS_OBJECT*)0x0267ACC0 = *LoadModel("system\\data\\STG04\\Models\\001494D8.sa1mdl", false);
		*(NJS_OBJECT*)0x0267ADD0 = *LoadModel("system\\data\\STG04\\Models\\001495DC.sa1mdl", false);
		*(NJS_OBJECT*)0x0267AF14 = *LoadModel("system\\data\\STG04\\Models\\001496F4.sa1mdl", false);
		*(NJS_OBJECT*)0x0267B06C = *LoadModel("system\\data\\STG04\\Models\\001497F8.sa1mdl", false);
		Fountain1 = LoadModel("system\\data\\STG04\\Models\\00135B8C.sa1mdl", false);
		Fountain1->basicdxmodel->mats[0].attr_texId = 25;
		Fountain2 = LoadModel("system\\data\\STG04\\Models\\00135948.sa1mdl", false);
		Fountain2->basicdxmodel->mats[0].attr_texId = 25;
		Fountain3 = LoadModel("system\\data\\STG04\\Models\\0013547C.sa1mdl", false);
		Fountain3->basicdxmodel->mats[0].attr_texId = 25;
		Fountain3->basicdxmodel->mats[1].attr_texId = 25;
		RemoveVertexColors_Object((NJS_OBJECT*)0x2697888); //Bell
		RemoveVertexColors_Object((NJS_OBJECT*)0x2682CF4); //ONeon1
		RemoveVertexColors_Object((NJS_OBJECT*)0x2683024); //ONeon2
		RemoveVertexColors_Object((NJS_OBJECT*)0x2683434); //ONeon3
		RemoveVertexColors_Object((NJS_OBJECT*)0x26838F4); //ONeon4
		RemoveVertexColors_Object((NJS_OBJECT*)0x2683AD4); //OPoster0
		RemoveVertexColors_Object((NJS_OBJECT*)0x2683E94); //OPoster1
		RemoveVertexColors_Object((NJS_OBJECT*)0x2683CB4); //OPoster2
		RemoveVertexColors_Object((NJS_OBJECT*)0x2674658); //OSignB light thing
		RemoveVertexColors_Object((NJS_OBJECT*)0x26785FC); //OTankA variation 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x267890C); //OTankA variation 2
		RemoveVertexColors_Object((NJS_OBJECT*)0x267943C); //OTankA variation 3
		RemoveVertexColors_Object((NJS_OBJECT*)0x2679A94); //OTankA variation 4
		RemoveVertexColors_Object((NJS_OBJECT*)0x2676A4C); //OTankA variation 5
		RemoveVertexColors_Object((NJS_OBJECT*)0x2677010); //OTankA variation 6
		RemoveVertexColors_Object((NJS_OBJECT*)0x2677FE4); //OTankA variation 7
		RemoveVertexColors_Object((NJS_OBJECT*)0x26751EC); //OTankA variation 8
		RemoveVertexColors_Object((NJS_OBJECT*)0x26755B0); //OTankA variation 9
		RemoveVertexColors_Object((NJS_OBJECT*)0x2676514); //OTankA variation 10
		RemoveVertexColors_Object((NJS_OBJECT*)0x2678AFC); //OTankA variation 11
		RemoveVertexColors_Object((NJS_OBJECT*)0x26777D4); //container B top broken 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x2677288); //container B top broken 2
		RemoveVertexColors_Object((NJS_OBJECT*)0x2675730); //container B top broken 3
		RemoveVertexColors_Object((NJS_OBJECT*)0x2677A4C); //container B top broken 4
		RemoveVertexColors_Object((NJS_OBJECT*)0x26774B8); //container B top broken 5
		for (int i = 0; i < 3; i++)
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
		ModelsLoaded_STG04 = true;
	}
}

void SpeedHighway_OnFrame()
{
	if (CurrentLevel == LevelIDs_SpeedHighway)
	{
		if (CurrentAct == 2 && !IsGamePaused())
		{
			if ((FramerateSetting < 2 && FrameCounterUnpaused % 4 == 0) || (FramerateSetting >= 2 && FrameCounterUnpaused % 2 == 0)) shwwater++;
			if (shwwater > 13) shwwater = 0;
			if (HW3FountainMesh) HW3FountainMesh->basicdxmodel->mats[0].attr_texId = shwwater;
		}
	}
}