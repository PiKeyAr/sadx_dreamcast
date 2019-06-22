#include "stdafx.h"
#include "button.h"
#include "MasterEmerald.h"
#include "OFinalEgg.h"
#include "MR_train.h"
#include "MR_Rock.h"
#include "MR_IceCapDoor.h"
#include "Tanken.h"
#include "Tanken2.h"
#include "Tanken3.h"
#include "Grass.h"
#include "MR_Objects.h"
#include "MR_Palms.h"
#include "MR_JungleGeoAnim.h"

NJS_TEXNAME textures_mr00[153];
NJS_TEXLIST texlist_mr00 = { arrayptrandlength(textures_mr00) };

NJS_TEXNAME textures_mr01[90];
NJS_TEXLIST texlist_mr01 = { arrayptrandlength(textures_mr01) };

NJS_TEXNAME textures_mr02[126];
NJS_TEXLIST texlist_mr02 = { arrayptrandlength(textures_mr02) };

NJS_TEXNAME textures_mr03[104];
NJS_TEXLIST texlist_mr03 = { arrayptrandlength(textures_mr03) };

NJS_TEXNAME textures_mrobj[207];
NJS_TEXLIST texlist_mrobj = { arrayptrandlength(textures_mrobj) };

NJS_TEXNAME textures_mrtrain[31];
NJS_TEXLIST texlist_mrtrain = { arrayptrandlength(textures_mrtrain) };

/*
#include "MR00_Station.h"
#include "MR01_Island.h"
#include "MR02_Jungle.h"
#include "MR03_FinalEgg.h"
*/

DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataArray(FogData, MR1FogDay, 0x01103448, 3);
DataArray(FogData, MR2FogDay, 0x01103478, 3);
DataArray(FogData, MR3FogDay, 0x011034A8, 3);
DataArray(FogData, MR4FogDay, 0x011034D8, 3);
DataArray(FogData, MR1FogEvening, 0x01103508, 3);
DataArray(FogData, MR2FogEvening, 0x01103538, 3);
DataArray(FogData, MR1FogNight, 0x01103568, 3);
DataArray(FogData, MR3FogNight, 0x01103598, 3);
DataArray(DrawDistance, MR1DrawDist, 0x011033E8, 3);
DataArray(DrawDistance, MR2DrawDist, 0x01103400, 3);
DataArray(DrawDistance, MR3DrawDist, 0x01103418, 3);
DataArray(DrawDistance, MR4DrawDist, 0x01103430, 3);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
static bool InsideTemple = 0;
static float MRGeoAnimFrame = 0;
NJS_OBJECT* MROcean = nullptr;
NJS_OBJECT* MRWaterObjects[] = { nullptr, nullptr, nullptr, nullptr, nullptr };
NJS_OBJECT* MRJungleObjectAnimations_Propeller[] = { nullptr, nullptr, nullptr, nullptr, nullptr };
NJS_OBJECT* MRJungleObjectAnimations_Lantern[] = { nullptr, nullptr, nullptr, nullptr, nullptr };
NJS_OBJECT* MRJungleObjectsCallback[] = { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr };
NJS_VECTOR TempleVector = { -515.99f, 90.0f, -1137.45f };

NJS_MATERIAL* WhiteDiffuseADV02_External[] = {
	nullptr, nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,
};

NJS_MATERIAL* WhiteDiffuse[] = {
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0003CD50), //Button on HiddenGate
	&matlistADV02_001FCA84[8], //MR train
	//Palm trees
	&matlistADV02_001D76E0[1],
	&matlistADV02_001D85A8[1],
	&matlistADV02_001D9470[1],
	&matlistADV02_001DA32C[1],
	&matlistADV02_001DB210[1],
	&matlistADV02_001DC0BC[1],
	//Final Egg stuff
	&matlistADV02_002069C8[5],
	&matlistADV02_002069C8[6],
	&matlistADV02_002069C8[7],
	&matlistADV02_00208504Z[13],
	&matlistADV02_00208504[13],
	//OHiddenGate buttons
	&matlistADV02_0003CD28[2],
};

void AddMRWaterObject(NJS_OBJECT *object)
{
	for (int q = 0; q < LengthOfArray(MRWaterObjects); ++q)
	{
		if (MRWaterObjects[q] == object) return;
		else if (MRWaterObjects[q] == nullptr)
		{
			MRWaterObjects[q] = object;
			return;
		}
	}
}

void AddMRLandtableRotation(NJS_OBJECT *object, bool propeller)
{
	if (propeller)
	{
		for (int q = 0; q < LengthOfArray(MRJungleObjectAnimations_Propeller); ++q)
		{
			if (MRJungleObjectAnimations_Propeller[q] == object) return;
			else if (MRJungleObjectAnimations_Propeller[q] == nullptr)
			{
				MRJungleObjectAnimations_Propeller[q] = object;
				return;
			}
		}
	}
	else
	{
		for (int q = 0; q < LengthOfArray(MRJungleObjectAnimations_Lantern); ++q)
		{
			if (MRJungleObjectAnimations_Lantern[q] == object) return;
			else if (MRJungleObjectAnimations_Lantern[q] == nullptr)
			{
				MRJungleObjectAnimations_Lantern[q] = object;
				return;
			}
		}
	}
}

void AddMRJungleCallback(NJS_OBJECT *object)
{
	for (int q = 0; q < LengthOfArray(MRJungleObjectsCallback); ++q)
	{
		if (MRJungleObjectsCallback[q] == object) return;
		else if (MRJungleObjectsCallback[q] == nullptr)
		{
			MRJungleObjectsCallback[q] = object;
			return;
		}
	}
}

void ParseMRColFlags()
{
	int colflags;
	LandTable *landtable;
	//Station area
	landtable = ___LANDTABLEMR[0];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (colflags == 0x08000000) AddMRWaterObject(landtable->Col[j].Model);
		else if (colflags == 0x08000002) MROcean = landtable->Col[j].Model;
	}
	//Jungle area
	landtable = ___LANDTABLEMR[2];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (colflags == 0x88001000 || colflags == 0x88000400) AddMRLandtableRotation(landtable->Col[j].Model, false);
		else if (colflags == 0x88000000) AddMRLandtableRotation(landtable->Col[j].Model, true);
		else if (colflags == 0) AddMRJungleCallback(landtable->Col[j].Model);
	}
	//Add models for MR jungle callback
	___ADV02MR02_OBJECTS[118] = MRJungleObjectsCallback[0];
	___ADV02MR02_OBJECTS[119] = MRJungleObjectsCallback[1];
	___ADV02MR02_OBJECTS[135] = MRJungleObjectsCallback[2];
	___ADV02MR02_OBJECTS[136] = MRJungleObjectsCallback[3];
	___ADV02MR02_OBJECTS[137] = MRJungleObjectsCallback[4];
	___ADV02MR02_OBJECTS[138] = MRJungleObjectsCallback[5];
	___ADV02MR02_OBJECTS[139] = MRJungleObjectsCallback[6];
}

void AddWhiteDiffuseMaterial_MR(NJS_MATERIAL *material)
{
	for (int q = 0; q < LengthOfArray(WhiteDiffuseADV02_External); ++q)
	{
		if (WhiteDiffuseADV02_External[q] == material) return;
		else if (WhiteDiffuseADV02_External[q] == nullptr)
		{
			WhiteDiffuseADV02_External[q] = material;
			return;
		}
	}
}

void ParseMRMaterials()
{
	Uint32 materialflags;
	NJS_MATERIAL *material;
	NJS_TEX *uv;
	int texid;
	LandTable *landtable;
	//Station area
	landtable = ___LANDTABLEMR[0];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//Texanim 1
			if ((materialflags & NJD_CUSTOMFLAG_TEXANIM1) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM2))
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(0, material, false, 5, 130, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			//Texanim 2
			if ((materialflags & NJD_CUSTOMFLAG_TEXANIM2) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM1))
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(0, material, false, 4, 140, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			//UVAnim 1
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM1) && !(materialflags & NJD_CUSTOMFLAG_UVANIM2))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(uv, 32, 1, 0, 1);
			}
			//UVAnim 2
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM2) && !(materialflags & NJD_CUSTOMFLAG_UVANIM1))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(uv, 184, 1, 0, -1);
			}
		}
	}
	//Angel Island
	landtable = ___LANDTABLEMR[1];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//Texanim 1
			if ((materialflags & NJD_CUSTOMFLAG_TEXANIM1) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM2))
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(1, material, false, 2, 76, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	//Jungle
	landtable = ___LANDTABLEMR[2];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			texid = landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId;
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddWhiteDiffuseMaterial_MR(material);
			}
			//UVAnim 1
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM1) && !(materialflags & NJD_CUSTOMFLAG_UVANIM2))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(uv, 32, 2, 0, 1);
				//PrintDebug("Added UVAnim1\n");
			}
			//UVAnim 2
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM2) && !(materialflags & NJD_CUSTOMFLAG_UVANIM1))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(uv, 14, 2, 0, 1);
				//PrintDebug("Added UVAnim2\n");
			}
			//UVAnim 3
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM2) && (materialflags & NJD_CUSTOMFLAG_UVANIM1))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				if (texid == 83)
				{
					AddUVAnimation(uv, 126, 2, 0, -1);
					//PrintDebug("Added UVAnim4 - 126\n");
				}
				else 
				{
					if (landtable->Col[j].Model->basicdxmodel->meshsets[k].nbMesh == 3)
					{
						AddUVAnimation(uv, 48, 2, 0, 1);
						//PrintDebug("Added UVAnim3 - 48\n");
					}
					else
					{
						AddUVAnimation(uv, 46, 2, 0, 1);
						//PrintDebug("Added UVAnim3 - 46\n");
					}
				}
			}
		}
	}
	//Final Egg base
	landtable = ___LANDTABLEMR[3];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddWhiteDiffuseMaterial_MR(material);
			}
		}
	}
}

static void MRJungleCallback_r(void *a1);
static Trampoline MRJungleCallback_t(0x52F800, 0x52F806, MRJungleCallback_r);
static void __cdecl MRJungleCallback_r(void *a1)
{
	NJS_MATRIX a2;
	if (EnableMysticRuins)
	{
		njSetTexture(ADV02_TEXLISTS[40]);
		njGetMatrix(a2);
		njAction(&action_animationADV02_000818F4_real, MRGeoAnimFrame);
		njSetMatrix(0, a2);
	}
	auto original = reinterpret_cast<decltype(MRJungleCallback_r)*>(MRJungleCallback_t.Target());
	original(a1);
}

void __cdecl MRWater_Display(void(__cdecl *function)(void *), void *data, float depth, QueuedModelFlagsB queueflags)
{
	if (CurrentAct == 0 && !DroppedFrames)
	{
		if (SADXWater_MysticRuins)
		{
			DrawModelCallback_Queue((void(__cdecl *)(void *))MysticRuins_OceanDraw, OceanDataArray, -7952.0f, QueuedModelFlagsB_EnableZWrite);
		}
		else
		{
			DisableFog();
			njSetTexture(&texlist_mr00);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			DrawQueueDepthBias = -47952.0f;
			if (MROcean) ProcessModelNode_AB_Wrapper(MROcean, 1.0f);
			DrawQueueDepthBias = 0.0f;
			njPopMatrix(1u);
		}
		for (unsigned int i = 0; i < LengthOfArray(MRWaterObjects); i++)
		{
			if (MRWaterObjects[i])
			{
				njSetTexture(&texlist_mr00);
				njPushMatrix(0);
				njTranslate(0, 0, 0, 0);
				ProcessModelNode_A_Wrapper(MRWaterObjects[i], QueuedModelFlagsB_3, 1.0f);
				njPopMatrix(1u);
			}
		}
	}
}

NJS_MATERIAL* LevelSpecular[] = {
	//ODigPlace1
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x000168E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x000168FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x00017B40),
	//Echidna statue
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002C8F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002C90C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002C920),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002C934),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002C948),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002C95C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002C970),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002C984),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002C998),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002BC60),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002BC74),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002BC88),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002BC9C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002BCB0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002BCC4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002BCD8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002BCEC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002BD00),
	//Other stuff
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002AD38),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002AD4C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002AD60),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002AD74),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0002AC2C),
};

NJS_MATERIAL* ObjectSpecular[] = {
	//Shovel Claws
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x000964F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0009650C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x00095E48),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x00095E5C),
	//ODigPlace1
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x00017150),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x00017164),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x00017178),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x0001718C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x000171A0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x000171B4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x00016698),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV02MODELS") + 0x00016448),
};

void SetColor(float a, float r, float g, float b)
{
	SetMaterialAndSpriteColor_Float(a, 0, g, 0);
}

void FixMRBase(ObjectMaster *a1)
{
	Angle v1; // eax
	EntityData1 *v2; // esi
	v2 = a1->Data1;
	Direct3D_SetNearFarPlanes(-1.0f, -100000.0f);
	DisableFog();
	njSetTexture(___ADV02_TEXLISTS[1]);
	njPushMatrix(0);
	njTranslateV(0, &v2->Position);
	v1 = v2->Rotation.y;
	if (v1)
	{
		njRotateY(0, (unsigned __int16)v1);
	}
	//Render the FinalWay
	sub_405450(___ADV02_ACTIONS[30], v2->Scale.y, 1.0);
	//Render the animation without the lights
	sub_405450(*___ADV02_ACTIONS, v2->Scale.x, 1.0f);
	//Render the lights
	DisplayAnimationFrame(&MRBase_LightsOnly, v2->Scale.x, (QueuedModelFlagsB)4, 1.0f, (void(__cdecl *)(NJS_MODEL_SADX *, int, int))DrawModel_Queue);
	//Render the EfHikari thing
	ProcessModelNode(&object2_002062F3, QueuedModelFlagsB_3, 1.0f);
	njPopMatrix(1u);
	ToggleStageFog();
	Direct3D_SetNearFarPlanes(LevelDrawDistance.Minimum, LevelDrawDistance.Maximum);
}

void FixMRBase_Apply(const IniFile *config, const HelperFunctions &helperFunctions)
{
	ReplacePVM("MR_FINALEGG");
	//MR Base stuff
	objectADV02_0020454C.evalflags |= NJD_EVAL_HIDE;
	objectADV02_002046C8.evalflags |= NJD_EVAL_HIDE;
	objectADV02_00204BC4.evalflags |= NJD_EVAL_HIDE;
	objectADV02_00204D40.evalflags |= NJD_EVAL_HIDE;
	objectADV02_0020523C.evalflags |= NJD_EVAL_HIDE;
	objectADV02_002053B8.evalflags |= NJD_EVAL_HIDE;
	objectADV02_002058B4.evalflags |= NJD_EVAL_HIDE;
	objectADV02_00205A30.evalflags |= NJD_EVAL_HIDE;
	WriteJump((void*)0x538430, FixMRBase);
	___ADV02_ACTIONS[0]->object = &objectADV02_0020C3B0; //OFinalEgg
	___ADV02_ACTIONS[0]->motion = &animation_000862E8; //OFinalEgg animation
	___ADV02_ACTIONS[30]->object = &objectADV02_0020DC78; //OFinalWay
	for (unsigned int i = 0; i < 3; i++)
	{
		MR3DrawDist[i].Maximum = -32000.0f;
	}
}

void SetBlockEntryMaterialColor(float a, float r, float g, float b)
{
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.a = max(0, min(255, 255 + r * 255));
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.r = max(0, min(255, 255 + r * 255));
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.g = max(0, min(255, 255 + g * 255));
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.b = max(0, min(255, 255 + b * 255));
	SetMaterialAndSpriteColor_Float(0, 0, 0, 0);
}

void UnloadLevelFiles_ADV02()
{
	//Clear all pointers and arrays
	MROcean = nullptr;
	for (int k = 0; k < LengthOfArray(MRWaterObjects); ++k)
	{
		MRWaterObjects[k] = nullptr;
	}
	for (int k = 0; k < LengthOfArray(MRJungleObjectAnimations_Propeller); ++k)
	{
		MRJungleObjectAnimations_Propeller[k] = nullptr;
	}
	for (int k = 0; k < LengthOfArray(MRJungleObjectAnimations_Lantern); ++k)
	{
		MRJungleObjectAnimations_Lantern[k] = nullptr;
	}
	for (int k = 0; k < LengthOfArray(MRJungleObjectsCallback); ++k)
	{
		MRJungleObjectsCallback[k] = nullptr;
	}
	//Clear Lantern materials and remove pointers
	if (DLLLoaded_Lantern)
	{
		material_unregister_ptr(WhiteDiffuseADV02_External, LengthOfArray(WhiteDiffuseADV02_External), &ForceWhiteDiffuse);
		for (int k = 0; k < LengthOfArray(WhiteDiffuseADV02_External); ++k)
		{
			WhiteDiffuseADV02_External[k] = nullptr;
		}
	}
	delete ADV02_0_Info;
	delete ADV02_1_Info;
	delete ADV02_2_Info;
	delete ADV02_3_Info;
	ADV02_0_Info = nullptr;
	ADV02_1_Info = nullptr;
	ADV02_2_Info = nullptr;
	ADV02_3_Info = nullptr;
}

void LoadLevelFiles_ADV02()
{
	CheckAndUnloadLevelFiles();
	ADV02_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\0.sa1lvl"));
	ADV02_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\1.sa1lvl"));
	ADV02_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\2.sa1lvl"));
	ADV02_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\3.sa1lvl"));
	LandTable *ADV02_0 = ADV02_0_Info->getlandtable(); //&landtable_00017960; //ADV02_0_Info->getlandtable();
	LandTable *ADV02_1 = ADV02_1_Info->getlandtable(); //&landtable_0009E7B0; //ADV02_1_Info->getlandtable();
	LandTable *ADV02_2 = ADV02_2_Info->getlandtable(); //&landtable_00000178; //ADV02_2_Info->getlandtable();
	LandTable *ADV02_3 = ADV02_3_Info->getlandtable(); //&landtable_0000019C; //ADV02_3_Info->getlandtable();
	RemoveMaterialColors_Landtable(ADV02_0);
	RemoveMaterialColors_Landtable(ADV02_1);
	RemoveMaterialColors_Landtable(ADV02_2);
	RemoveMaterialColors_Landtable(ADV02_3);
	ADV02_0->TexList = &texlist_mr00;
	ADV02_1->TexList = &texlist_mr01;
	ADV02_2->TexList = &texlist_mr02;
	ADV02_3->TexList = &texlist_mr03;
	___LANDTABLEMR[0] = ADV02_0;
	___LANDTABLEMR[1] = ADV02_1;
	___LANDTABLEMR[2] = ADV02_2;
	___LANDTABLEMR[3] = ADV02_3;
	LandTableArray[144] = ADV02_0;
	LandTableArray[145] = ADV02_1;
	LandTableArray[146] = ADV02_2;
	LandTableArray[147] = ADV02_3;
	ParseMRColFlags();
	ParseMRMaterials();
	WriteCall((void*)0x52FDC3, MRWater_Display);
	if (DLLLoaded_Lantern) material_register_ptr(WhiteDiffuseADV02_External, LengthOfArray(WhiteDiffuseADV02_External), &ForceWhiteDiffuse);
}

void ADV02_Init()
{
	ReplaceBIN_DC("SETMR00A");
	ReplaceBIN_DC("SETMR00B");
	ReplaceBIN_DC("SETMR00E");
	ReplaceBIN_DC("SETMR00K");
	ReplaceBIN_DC("SETMR00L");
	ReplaceBIN_DC("SETMR00M");
	ReplaceBIN_DC("SETMR00S");
	ReplaceBIN_DC("SETMR01A");
	ReplaceBIN_DC("SETMR01B");
	ReplaceBIN_DC("SETMR01E");
	ReplaceBIN_DC("SETMR01K");
	ReplaceBIN_DC("SETMR01L");
	ReplaceBIN_DC("SETMR01M");
	ReplaceBIN_DC("SETMR01S");
	ReplaceBIN_DC("SETMR02S");
	ReplaceBIN_DC("SETMR03S");
	ReplaceBIN_DC("CAMMR00S");
	ReplaceBIN_DC("CAMMR01S");
	ReplaceBIN_DC("CAMMR02S");
	ReplaceBIN_DC("CAMMR03S");
	switch (EnableSETFixes)
	{
		case SETFixes_Normal:
			AddSETFix("SETMR00A");
			AddSETFix("SETMR00B");
			AddSETFix("SETMR00E");
			AddSETFix("SETMR00K");
			AddSETFix("SETMR00L");
			AddSETFix("SETMR00M");
			AddSETFix("SETMR00S");
			AddSETFix("SETMR01A");
			AddSETFix("SETMR01B");
			AddSETFix("SETMR01E");
			AddSETFix("SETMR01K");
			AddSETFix("SETMR01L");
			AddSETFix("SETMR01M");
			AddSETFix("SETMR01S");
			AddSETFix("SETMR02S");
			AddSETFix("SETMR03S");
			break;
		case SETFixes_Extra:
			AddSETFix_Extra("SETMR00A");
			AddSETFix_Extra("SETMR00B");
			AddSETFix_Extra("SETMR00E");
			AddSETFix_Extra("SETMR00K");
			AddSETFix_Extra("SETMR00L");
			AddSETFix_Extra("SETMR00M");
			AddSETFix_Extra("SETMR00S");
			AddSETFix_Extra("SETMR01A");
			AddSETFix_Extra("SETMR01B");
			AddSETFix_Extra("SETMR01E");
			AddSETFix_Extra("SETMR01K");
			AddSETFix_Extra("SETMR01L");
			AddSETFix_Extra("SETMR01M");
			AddSETFix_Extra("SETMR01S");
			AddSETFix_Extra("SETMR02S");
			AddSETFix_Extra("SETMR03S");
			break;
		default:
			break;
	}
	ReplacePVM("ADV_MR00");
	ReplacePVM("ADV_MR01");
	ReplacePVM("ADV_MR02");
	ReplacePVM("ADV_MR03");
	ReplacePVM("MROBJ");
	ReplacePVM("MR_SKY00");
	ReplacePVM("MR_SKY01");
	ReplacePVM("MR_SKY02");
	ReplacePVM("MR_TRAIN");
	ReplacePVM("TANKEN");
	ReplacePVM("MROBJ_MAST");
	ReplacePVM("MROBJ_MASTLDAM");
	ReplacePVM("MROBJ_MASTSDAM");
	ReplacePVM("MR_EGG");
	ReplacePVM("MR_PYRAMID");
	ReplacePVM("MR_TORNADO2");
	WriteData((float*)0x005343BE, 239.0f); //Windows in Tails' workshop
	WriteData((float*)0x005343EF, 239.0f); //Windows in Tails' workshop 
	WriteData<1>((char*)0x005370E0, 0x01); //Fix blending mode on floating bricks in WV entrance
	WriteData<1>((char*)0x00537038, 0x01); //Fix blending mode on floating bricks in WV entrance
	WriteData<1>((char*)0x00537181, 0x01); //Fix blending mode on floating bricks in WV entrance
	WriteData<1>((char*)0x00537354, 0x01); //Fix blending mode on floating bricks in WV entrance
	WriteData<1>((char*)0x006F4DA0, 0x04); //Emerald shard (cutscene) glow blending mode
	WriteData<1>((char*)0x006F4BF1, 0x04); //Emerald shard (cutscene) glow blending mode	
	//OBlockEntry brightness
	WriteCall((void*)0x53B5E8, SetBlockEntryMaterialColor);
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF;
	//Cutscene after Lost World
	WriteData((float*)0x006D2537, 16.0f); //Y1
	WriteData((float*)0x006D2507, 16.0f); //Y2
	WriteData((float*)0x006D1CF6, 14.52f); //Y after cutscene
	WriteData((int*)0x006D1D13, 0); //X rotation after cutscene
	WriteData((int*)0x006D1D1D, 0); //Z rotation after cutscene
	ReplaceBIN("SL_X0B", "SL_X0X"); //Day light direction override
	ReplaceBIN("SL_X1B", "SL_X1X"); //Evening light direction override
	ReplaceBIN("SL_X2B", "SL_X2X"); //Night light direction override
	//Enable MR light direction adjustment code
	WriteData<6>((char*)0x00412536, 0x90u);
	WriteData<6>((char*)0x00412544, 0x90u);
	if (GetModuleHandle(L"ADV02MODELS") != nullptr && DLLLoaded_Lantern)
	{
		material_register_ptr(ObjectSpecular, LengthOfArray(ObjectSpecular), &ForceDiffuse0Specular1);
		material_register_ptr(LevelSpecular, LengthOfArray(LevelSpecular), &ForceDiffuse0Specular0);
		material_register_ptr(WhiteDiffuse, LengthOfArray(WhiteDiffuse), &ForceWhiteDiffuse);
	}
	*(NJS_OBJECT*)0x1108A18 = object_00226468; //TANKEN
	*(NJS_OBJECT*)0x110CF34 = object2_00229334; //TANKEN 2
	*(NJS_OBJECT*)0x11112CC = object_0022DDA4; //TANKEN 3
	WriteCall((void*)0x0053CD37, SetColor); //Master Emerald glow
	for (int i = 0; i < 3; i++)
	{
		MR1FogDay[i].Distance = -10000.0f;
		MR1FogDay[i].Layer = -2500.0f;
		MR1FogDay[i].Toggle = 1;
		MR1FogDay[i].Color = 0xFFA0A0A0;
		MR1FogEvening[i].Distance = -9000.0f;
		MR1FogEvening[i].Layer = -3500.0f;
		MR1FogNight[i].Color = 0xFF001058;
		MR1FogNight[i].Distance = -10000.0f;
		MR1FogNight[i].Layer = -2000.0f;
		MR2FogDay[i].Layer = -2000.0f;
		MR2FogDay[i].Distance = -16000.0f;
		MR2FogDay[i].Color = 0xFFA0A0A0;
		MR2FogEvening[i].Distance = -12000.0f;
		MR2FogEvening[i].Layer = -5000.0f;
		MR2FogEvening[i].Color = 0xFF907858;
		MR3FogDay[i].Layer = -4000.0f;
		MR3FogDay[i].Distance = -16000.0f;
		MR3FogDay[i].Color = 0xFFA0A0A0;
		MR3FogNight[i].Distance = -12000;
		MR3FogNight[i].Color = 0xFF001058;
		MR3FogNight[i].Layer = -5000;
		MR1DrawDist[i].Maximum = -10000.0f;
		MR2DrawDist[i].Maximum = -10000.0f;
		MR4DrawDist[i].Maximum = -4000.0f;
	}
	___ADV02_TEXLISTS[38] = &texlist_mr00;
	___ADV02_TEXLISTS[39] = &texlist_mr01;
	___ADV02_TEXLISTS[40] = &texlist_mr02;
	___ADV02_TEXLISTS[41] = &texlist_mr03;
	MROBJ_TEXLISTS[0].TexList = &texlist_mrobj; //MROBJ
	___ADV02_TEXLISTS[21] = &texlist_mrobj; //MROBJ
	___ADV02_TEXLISTS[4] = &texlist_mrtrain;
	//Palm trees near Tails' house
	___ADV02_OBJECTS[67]->child->model = &attachADV02_001DCF1C;
	___ADV02_OBJECTS[67]->child->child->model = &attachADV02_001DCC88;
	___ADV02_OBJECTS[67]->child->sibling->model = &attachADV02_001DC060;
	___ADV02_OBJECTS[67]->child->sibling->child->model = &attachADV02_001DBDDC;
	___ADV02_OBJECTS[67]->child->sibling->sibling->model = &attachADV02_001DB1B4;
	___ADV02_OBJECTS[67]->child->sibling->sibling->child->model = &attachADV02_001DAF20;
	___ADV02_OBJECTS[67]->child->sibling->sibling->sibling->model = &attachADV02_001DA2D0;
	___ADV02_OBJECTS[67]->child->sibling->sibling->sibling->child->model = &attachADV02_001DA03C;
	___ADV02_OBJECTS[67]->child->sibling->sibling->sibling->sibling->model = &attachADV02_001D9414;
	___ADV02_OBJECTS[67]->child->sibling->sibling->sibling->sibling->child->model = &attachADV02_001D9174;
	___ADV02_OBJECTS[67]->child->sibling->sibling->sibling->sibling->sibling->model = &attachADV02_001D854C;
	___ADV02_OBJECTS[67]->child->sibling->sibling->sibling->sibling->sibling->child->model = &attachADV02_001D82AC;
	___ADV02_OBJECTS[84] = &objectADV02_000690B8; //Windows and the light above the door of Tails' house
	___ADV02_OBJECTS[85] = &object_00069D28; //Same as above but lit up
	//Material fixes
	___ADV02_OBJECTS[90]->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___ADV02_OBJECTS[91]->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	//Other objects
	___ADV02_OBJECTS[25] = &objectADV02_001B9854; //Ice Cap door 1 
	___ADV02_OBJECTS[26] = &objectADV02_001B9D9C; //Ice Cap door 2
	___ADV02_OBJECTS[86] = &objectADV02_001BF00C; //Ice Cap lock
	___ADV02_OBJECTS[88] = &objectADV02_001BBA04; //Ice Stone
	___ADV02_OBJECTS[64] = &objectADV02_001E87F0; //Angel Island rock
	___ADV02_OBJECTS[68] = &objectADV02_002145D4; //That thing that pushes the Chao Egg out
	___ADV02_OBJECTS[100] = &objectADV02_001F41C0; //Grass
	___ADV02_OBJECTS[20] = &objectADV02_001B5F40; //Torokko 
	___ADV02_OBJECTS[61] = &objectADV02_001B1A98; //OIslandDoor
	___ADV02_OBJECTS[60] = &objectADV02_001B0FE0; //OIslandDoor right
	___ADV02_OBJECTS[59] = &objectADV02_001B1648; //OIslandDoor left
	___ADV02_OBJECTS[39] = &objectADV02_001AF63C; //Monkey cage (full)
	___ADV02_OBJECTS[38] = &objectADV02_001AF0B0; //Monkey cage (bottom)
	___ADV02_OBJECTS[42] = &objectADV02_001AE9B0; //Monkey cage (bottom)
	___ADV02_OBJECTS[43] = &objectADV02_001AE70C; //Monkey cage (bottom)
	___ADV02_OBJECTS[10] = &objectADV02_001A79D0; //Item stand
	___ADV02_OBJECTS[12] = &objectADV02_001A7370; //Item stand
	___ADV02_OBJECTS[13] = &objectADV02_001A6B1C; //Item stand
	___ADV02_OBJECTS[53]->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Diggable place
	___ADV02_OBJECTS[103] = &objectADV02_001C76EC; //Master Emerald (complete)
	___ADV02_OBJECTS[71]->model = &attachADV02_001D6AA0; //The gate for Tails' Tornado
	___ADV02_OBJECTS[71]->child->sibling->sibling->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	___ADV02_OBJECTS[71]->child->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
	___ADV02_OBJECTS[71]->child->sibling->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
	___ADV02_OBJECTS[70]->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
	___ADV02_OBJECTS[69]->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
	___ADV02_MODELS[15] = &attachADV02_0007C3B8; //Master Emerald glow
	___ADV02_ACTIONS[11]->object = &objectADV02_001B5F40; //Torokko
	___ADV02_ACTIONS[29]->object = &objectADV02_001BBA04; //Ice Stone
	___ADV02_ACTIONS[32]->object = &objectADV02_001F41C0; //Rustling grass
	___ADV02_ACTIONS[10]->object = &objectADV02_00201C18; //Train
	___ADV02_ACTIONS[21]->object = &objectADV02_001DDBFC; //Plane platform
	___ADV02_ACTIONS[9]->object = &objectADV02_001B2D5C; //Final Egg base door
	___ADV02_ACTIONS[17]->object = &objectADV02_001CCFBC; //OHiddenGate
	___ADV02_MODELS[9] = &attachADV02_0003D34C; //OHiddenGate button
	___ADV02_MODELS[12] = &attachADV02_001B412C; //OSandSwitch
}

void ADV02_OnFrame()
{
	auto entity = EntityData1Ptrs[0];
	if (CurrentLevel == LevelIDs_MysticRuins)
	{
		if (!IsGamePaused())
		{
			//Animate rotating stuff in MR Jungle
			if (CurrentAct == 2)
			{
				MRGeoAnimFrame += 0.4f*FramerateSetting;
				if (MRGeoAnimFrame >= 120.0f) MRGeoAnimFrame = 0;
				for (int q = 0; q < LengthOfArray(MRJungleObjectAnimations_Propeller); ++q)
				{
					if (MRJungleObjectAnimations_Propeller[q])
					{
						MRJungleObjectAnimations_Propeller[q]->ang[0] = (MRJungleObjectAnimations_Propeller[q]->ang[0] + (1024 - 512 * (q % 2)) * FramerateSetting) % 65535;
					}
				}
				for (int q = 0; q < LengthOfArray(MRJungleObjectAnimations_Lantern); ++q)
				{
					if (MRJungleObjectAnimations_Lantern[q])
					{
						MRJungleObjectAnimations_Lantern[q]->ang[1] = (MRJungleObjectAnimations_Lantern[q]->ang[1] + (256 * FramerateSetting)) % 65535;
					}
				}
			}
		}
		//Prevent dynamic direction from being adjusted in Eggman's base
		if (CurrentAct == 3)
		{
			CasinoLightRotation_Y = 0;
			CasinoLightRotation_Z = 0;
		}
		//Evening and night materials Act 3
		if (CurrentAct == 2)
		{
			matlistADV02_00208504Z[9].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_00208504Z[10].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_00208504Z[11].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_00208504Z[12].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_00208504[9].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_00208504[10].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_00208504[11].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_00208504[12].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_0020632C[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_00208504Z[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_00208504Z[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_00208504[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlistADV02_00208504[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		}
		//Dynamic fog in the jungle + cutscene exclusions
		if (!IsGamePaused() && ADV02_2_Info && CurrentAct == 2)
		{
			if (IsPlayerInsideSphere(&TempleVector, 480.0f))
			{
				InsideTemple = 1;
			}
			else InsideTemple = 0;
			if (EV_MainThread_ptr != 0 && CurrentCharacter == 7 && CutsceneID == 208)  InsideTemple = 1;
			if (EV_MainThread_ptr != 0 && CurrentCharacter == 7 && CutsceneID == 226)  InsideTemple = 1;
			if (Camera_Data1 != nullptr && Camera_Data1->Position.y < 300.0f && InsideTemple == 0)
			{
				if (CurrentFogLayer < -65.0f) CurrentFogLayer = CurrentFogLayer + 64.0f;
				if (CurrentFogLayer > -65.0f) CurrentFogLayer = -1.0f;
				if (CurrentFogDist < -3200.0f) CurrentFogDist = CurrentFogDist + 128.0f;
			}
			if (Camera_Data1 != nullptr && Camera_Data1->Position.y > 300.0f)
			{
				if (GetTimeOfDay() != 0)
				{
					if (CurrentFogLayer > -1000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
					if (CurrentFogDist > -14000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
				}
				if (GetTimeOfDay() == 0)
				{
					if (CurrentFogLayer > -4000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
					if (CurrentFogDist > -16000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
				}
			}
			if (InsideTemple == 1)
			{
				if (GetTimeOfDay() != 0)
				{
					if (CurrentFogLayer > -1000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
					if (CurrentFogDist > -14000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
				}
				if (GetTimeOfDay() == 0)
				{
					if (CurrentFogLayer > -4000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
					if (CurrentFogDist > -16000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
				}
			}
		}
	}
}