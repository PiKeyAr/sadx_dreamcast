#include "stdafx.h"

// Texlists
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
FunctionPointer(void, EmeraldShardCutscene_DrawLightRays_Real, (ObjectMaster *a1), 0x7A6950);

NJS_VECTOR TempleVector = {-515.99f, 90.0f, -1137.45f};
NJS_ARGB EmeraldShardGlowColor = {0, 0, 0, 0};
static bool InsideTemple = 0;
static bool AmyMissionCollision = false;
static int MasterEmeraldTimer = 0;

// Model pointers
NJS_OBJECT* MROcean = nullptr;
NJS_OBJECT* OFinalEggModel_Opaque = nullptr;
NJS_OBJECT* OFinalEggModel_Transparent = nullptr;
NJS_OBJECT* OFinalEggModel_Lights = nullptr;
NJS_OBJECT* OFinalWayMain = nullptr;
NJS_OBJECT* OFinalWayCar = nullptr;
NJS_OBJECT* IceCapDoorSnowflakeWall = nullptr;
NJS_OBJECT* IceCapDoorSnowflake = nullptr;
NJS_OBJECT* WindyKey_Inside = nullptr;
NJS_OBJECT* WindyKey_Outside = nullptr;
NJS_OBJECT* IceKey_Inside = nullptr;
NJS_OBJECT* IceKey_Outside = nullptr;

// Lists
NJS_OBJECT* MRJungle_Propeller;
NJS_OBJECT* MRJungle_Propeller2;
NJS_OBJECT* MRJungle_LanternTop;

// Render Mystic Ruins ocean
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
			if (MROcean) ds_DrawObjectClip(MROcean, 1.0f);
			DrawQueueDepthBias = 0.0f;
			njPopMatrix(1u);
			ToggleStageFog();
		}
	}
}

// Set Master Emerald glow color
void SetColor(float a, float r, float g, float b)
{
	// Minimum - 0.35f/0.25f
	// Maximum - 0.35f/1.0f
	//PrintDebug("Glow: %f, %f, %f, %f\n", a, r, g, b);
	a = 0.35f;
	r = 0;
	g = max(0.25f, g/0.6f);
	b = 0;
	SetMaterialAndSpriteColor_Float(a, r, g, b);
	ADV02_MODELS[15]->mats[0].diffuse.argb.a = (Uint8)(a * 255.0f);
	ADV02_MODELS[15]->mats[0].diffuse.argb.r = (Uint8)(r * 255.0f);
	ADV02_MODELS[15]->mats[0].diffuse.argb.g = (Uint8)(g * 255.0f);
	ADV02_MODELS[15]->mats[0].diffuse.argb.b = (Uint8)(b * 255.0f);
}

// Render Eggman's base object (OFinalEgg)
void OFinalEgg_DisplayFix(ObjectMaster *a1)
{
	Angle v1; // eax
	EntityData1 *v2; // esi
	NJS_ACTION OFinalEggOpaqueAction = { nullptr, nullptr };
	NJS_ACTION OFinalEggLightsAction = { nullptr, nullptr };
	NJS_ACTION OFinalWayMainAction = { nullptr, nullptr };
	NJS_ACTION OFinalWayCarAction = { nullptr, nullptr };
	OFinalEggOpaqueAction.object = OFinalEggModel_Opaque;
	OFinalEggOpaqueAction.motion = ADV02_ACTIONS[0]->motion;
	OFinalEggLightsAction.object = OFinalEggModel_Lights;
	OFinalEggLightsAction.motion = ADV02_ACTIONS[0]->motion;
	OFinalWayMainAction.object = OFinalWayMain;
	OFinalWayMainAction.motion = ADV02_ACTIONS[30]->motion;
	OFinalWayCarAction.object = OFinalWayCar;
	OFinalWayCarAction.motion = ADV02_ACTIONS[30]->motion;
	v2 = a1->Data1;
	//v2->Scale.y += 0.2f; // Animate the car
	//if (v2->Scale.y >= 29) v2->Scale.y = 0;
	Direct3D_SetNearFarPlanes(-1.0f, -100000.0f);
	DisableFog();
	njSetTexture(ADV02_TEXLISTS[1]);
	njPushMatrix(0);
	njTranslateV(0, &v2->Position);
	v1 = v2->Rotation.y;
	if (v1)
	{
		njRotateY(0, (unsigned __int16)v1);
	}
	// Render the animation without the lights
	late_ActionEx(&OFinalEggOpaqueAction, v2->Scale.x, QueuedModelFlagsB_EnableZWrite);
	// Render the transparent part of the animation without the lights
	DrawModelMesh(OFinalEggModel_Transparent->child->basicdxmodel, QueuedModelFlagsB_SomeTextureThing);
	// Render the FinalWay car
	Direct3D_SetNearFarPlanes(-1.0f, -6000.0f);
	DrawQueueDepthBias = -20000.0f;
	njAction_Queue(&OFinalWayCarAction, v2->Scale.y, QueuedModelFlagsB_EnableZWrite);
	// Render the FinalWay without the car
	Direct3D_SetNearFarPlanes(-1.0f, -100000.0f);
	DrawQueueDepthBias = -1000.0f;
	njAction_Queue(&OFinalWayMainAction, v2->Scale.y, QueuedModelFlagsB_EnableZWrite);
	// Render the lights
	late_ActionMesh(&OFinalEggLightsAction, v2->Scale.x, 0);
	// Render the EfHikari thing
	DrawModelMesh(OFinalEggModel_Opaque->child->sibling->sibling->basicdxmodel, QueuedModelFlagsB_3);
	njPopMatrix(1u);
	ToggleStageFog();
	Direct3D_SetNearFarPlanes(LevelDrawDistance.Minimum, LevelDrawDistance.Maximum);
	DrawQueueDepthBias = 0.0f;
}

// Set transparency for the glow that shows up when you put Gold/Silver statues in place
void SetBlockEntryMaterialColor(float a, float r, float g, float b)
{
	a = min(a, 1.0f);
	r = min(r, 1.0f);
	g = min(g, 1.0f);
	b = min(b, 1.0f);
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.a = Uint8(max(0, min(255.0f, 255.0f + r * 255.0f)));
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.r = Uint8(max(0, min(255.0f, 255.0f + r * 255.0f)));
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.g = Uint8(max(0, min(255.0f, 255.0f + g * 255.0f)));
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.b = Uint8(max(0, min(255.0f, 255.0f + b * 255.0f)));
	SetMaterialAndSpriteColor_Float(0, 0, 0, 0);
}

void MasterEmeraldFix(NJS_OBJECT* obj, float scale)
{
	if (!(EV_MainThread_ptr && CutsceneID == 128)) 
		DrawQueueDepthBias = 2000.0f;
	late_DrawObjectClipMesh(obj, 1, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

float __fastcall MrEmeTimer(Angle n)
{
	if (MasterEmeraldTimer > 245) 
		MasterEmeraldTimer = 0;
	if (MasterEmeraldTimer > 45 && MasterEmeraldTimer < 180) 
		MasterEmeraldTimer = 180;
	//PrintDebug("Value: %d\n", MasterEmeraldTimer);
	return njSin(MasterEmeraldTimer * 150);
}

void DrawMasterEmeraldGlow(NJS_MODEL_SADX* model, QueuedModelFlagsB blend, float scale)
{
	if (!(EV_MainThread_ptr && CutsceneID == 128)) 
		DrawQueueDepthBias = 4000.0f;
	late_DrawModelClip(model, blend, scale);
	DrawQueueDepthBias = 0.0f;
}

void EmeraldShardGlow_GetColor(float a, float r, float g, float b)
{
	EmeraldShardGlowColor.a = a;
	EmeraldShardGlowColor.r = r;
	EmeraldShardGlowColor.g = g;
	EmeraldShardGlowColor.b = b;
	SetMaterialAndSpriteColor_Float(1.0f, 0.78f, 0.78f, 0.78f);
}

void RenderEmeraldShard(NJS_OBJECT *a1, int blend_mode, float scale)
{
	SetMaterialAndSpriteColor_Float(0.78f, 0.78f, 0.78f, 0.78f);
	DrawQueueDepthBias = -4000.0f;
	late_DrawObjectClipMesh(a1, 1, scale);
	DrawQueueDepthBias = 0.0f;
}

// Emerald shard glow in Knuckles' cutscene
void RenderEmeraldShardGlow(NJS_MODEL_SADX *a1, int a2, float a3)
{
	float radius; // ST04_4
	if (a3 == 0.0f || a1->r == 0.0f || (radius = a3 * a1->r, IsVisible(&a1->center, radius)))
	{
		if (!MissedFrames && !VerifyTexList(CurrentTexList))
		{
			if (a1)
			{
				if (a3 == 0.0 || a1->r == 0.0 || (radius = a3 * a1->r, IsVisible(&a1->center, radius)))
				{
					SetMaterialAndSpriteColor(&EmeraldShardGlowColor);
					DrawQueueDepthBias = -2000.0f;
					DrawModelMesh(a1, (QueuedModelFlagsB)0);
					DrawQueueDepthBias = 0.0f;
				}
			}
		}
	}
}

// Emerald shard glow in Big's cutscene
void RenderEmeraldShardGlow_Final(NJS_MODEL_SADX *a1, int a2, float a3)
{
	float radius; // ST04_4
	if (a3 == 0.0f || a1->r == 0.0f || (radius = a3 * a1->r, IsVisible(&a1->center, radius)))
	{
		if (!MissedFrames && !VerifyTexList(CurrentTexList))
		{
			if (a1)
			{
				if (a3 == 0.0 || a1->r == 0.0 || (radius = a3 * a1->r, IsVisible(&a1->center, radius)))
				{
					SetMaterialAndSpriteColor(&EmeraldShardGlowColor);
					DrawQueueDepthBias = 6000.0f;
					DrawModelMesh(a1, (QueuedModelFlagsB)0);
					DrawQueueDepthBias = 0.0f;
				}
			}
		}
	}
}

void EmeraldShardCutscene_DrawLightRays_Callback(ObjectMaster *a1)
{
	DrawModelCallback_QueueObjectMaster(EmeraldShardCutscene_DrawLightRays_Real, a1, -27000.0f, QueuedModelFlagsB_SomeTextureThing);
}

void RustlingGrassDepthFix1(NJS_ACTION *a1, float a2, int a3, float a4)
{
	if (EV_MainThread_ptr != nullptr) 
		DrawQueueDepthBias = -27000.0f;
	late_ActionClipEx(a1, a2, a3, a4);
	DrawQueueDepthBias = 0.0f;
}

void RustlingGrassDepthFix2(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	if (EV_MainThread_ptr != nullptr) 
		DrawQueueDepthBias = -27000.0f;
	late_DrawObjectClipEx(a1, a2, a3);
	DrawQueueDepthBias = 0.0f;
}

void ParseMRColFlags()
{
	// Jungle area
	LandTable* landtable = LANDTABLEMR[2];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		if (landtable->Col[j].Radius == 19.45961f)
			MRJungle_LanternTop = landtable->Col[j].Model;
	}
	MRJungle_Propeller = landtable->AnimData->Model->child->sibling->sibling->sibling;	
	MRJungle_Propeller2 = landtable->AnimData->Model->child->sibling->sibling;
}

void RemoveMRMaterials(int act)
{
	LandTable* landtable;
	Uint32 materialflags;
	NJS_MATERIAL* material;
	landtable = LANDTABLEMR[act];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				RemoveWhiteDiffuseMaterial(material);
			}
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
	// Station area
	landtable = LANDTABLEMR[0];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			// Texanim 1
			if (material->attr_texId == 128 || (material->attr_texId >= 130 && material->attr_texId <= 139))
			{
				AddTextureAnimation(33, 0, material, false, 5, 130, 139);
			}
			// Texanim 2
			if (material->attr_texId == 129 || (material->attr_texId >= 140 && material->attr_texId <= 154))
			{
				AddTextureAnimation(33, 0, material, false, 4, 140, 154);
			}
			// UVAnim 1
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM1) && !(materialflags & NJD_CUSTOMFLAG_UVANIM2))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(33, 0, uv, 32, 1, 0, 1);
			}
			// UVAnim 2
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM2) && !(materialflags & NJD_CUSTOMFLAG_UVANIM1))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(33, 0, uv, 184, 1, 0, -1);
			}
		}
	}
	// Angel Island
	landtable = LANDTABLEMR[1];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			// Texanim 1
			if (material->attr_texId >= 76 && material->attr_texId <= 89)
			{
				AddTextureAnimation(33, 1, material, false, 2, 76, 89);
			}
		}
	}
	// Jungle
	landtable = LANDTABLEMR[2];
	// Lantern white diffuse
	AddWhiteDiffuseMaterial(&landtable->AnimData[0].Model->child->basicdxmodel->mats[0]);
	AddWhiteDiffuseMaterial(&landtable->AnimData[0].Model->child->basicdxmodel->mats[1]);
	AddWhiteDiffuseMaterial(&landtable->AnimData[0].Model->child->basicdxmodel->mats[2]);
	AddWhiteDiffuseMaterial(&landtable->AnimData[0].Model->child->basicdxmodel->mats[3]);
	AddWhiteDiffuseMaterial(&landtable->AnimData[0].Model->child->basicdxmodel->mats[4]);
	AddWhiteDiffuseMaterial(&landtable->AnimData[0].Model->child->basicdxmodel->mats[5]);
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
			texid = landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId;
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			// White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				AddWhiteDiffuseMaterial(material);
			}
			// UVAnim 1
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM1) && !(materialflags & NJD_CUSTOMFLAG_UVANIM2))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(33, 2, uv, 32, 2, 0, 1);
				//PrintDebug("Added UVAnim1\n");
			}
			// UVAnim 2
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM2) && !(materialflags & NJD_CUSTOMFLAG_UVANIM1))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(33, 2, uv, 14, 2, 0, 1);
				//PrintDebug("Added UVAnim2\n");
			}
			// UVAnim 3
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM2) && (materialflags & NJD_CUSTOMFLAG_UVANIM1))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				if (texid == 83)
				{
					AddUVAnimation(33, 2, uv, 126, 2, 0, -1);
					//PrintDebug("Added UVAnim4 - 126\n");
				}
				else 
				{
					if (landtable->Col[j].Model->basicdxmodel->meshsets[k].nbMesh == 3)
					{
						AddUVAnimation(33, 2, uv, 48, 2, 0, 1);
						//PrintDebug("Added UVAnim3 - 48\n");
					}
					else
					{
						AddUVAnimation(33, 2, uv, 46, 2, 0, 1);
						//PrintDebug("Added UVAnim3 - 46\n");
					}
				}
			}
		}
	}
	// Final Egg base
	landtable = LANDTABLEMR[3];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = material->attrflags;
			// White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				AddWhiteDiffuseMaterial(material);
			}
		}
	}
	AddWhiteDiffuseMaterial(&LANDTABLEMR[3]->AnimData[1].Model->basicdxmodel->mats[0]); // Metal Sonic in tube
	AddWhiteDiffuseMaterial(&LANDTABLEMR[3]->AnimData[1].Model->basicdxmodel->mats[1]); // Metal Sonic in tube
	AddWhiteDiffuseMaterial(&LANDTABLEMR[3]->AnimData[1].Model->basicdxmodel->mats[2]); // Metal Sonic in tube
	AddWhiteDiffuseMaterial(&LANDTABLEMR[3]->AnimData[1].Model->basicdxmodel->mats[3]); // Metal Sonic in tube
}

void UnloadLevelFiles_ADV02()
{
	// Clear all pointers and arrays
	MRJungle_Propeller = nullptr;
	MRJungle_Propeller2 = nullptr;
	MRJungle_LanternTop = nullptr;
	// Unregister white diffuse
	RemoveMRMaterials(0);
	RemoveMRMaterials(1);
	RemoveMRMaterials(2);
	RemoveMRMaterials(3);
	RemoveWhiteDiffuseMaterial(&LANDTABLEMR[3]->AnimData[1].Model->basicdxmodel->mats[0]); // Metal Sonic in tube
	RemoveWhiteDiffuseMaterial(&LANDTABLEMR[3]->AnimData[1].Model->basicdxmodel->mats[1]); // Metal Sonic in tube
	RemoveWhiteDiffuseMaterial(&LANDTABLEMR[3]->AnimData[1].Model->basicdxmodel->mats[2]); // Metal Sonic in tube
	RemoveWhiteDiffuseMaterial(&LANDTABLEMR[3]->AnimData[1].Model->basicdxmodel->mats[3]); // Metal Sonic in tube
	RemoveWhiteDiffuseMaterial(&LANDTABLEMR[2]->AnimData[0].Model->child->basicdxmodel->mats[0]); // Lantern in jungle
	RemoveWhiteDiffuseMaterial(&LANDTABLEMR[2]->AnimData[0].Model->child->basicdxmodel->mats[1]); // Lantern in jungle
	RemoveWhiteDiffuseMaterial(&LANDTABLEMR[2]->AnimData[0].Model->child->basicdxmodel->mats[2]); // Lantern in jungle
	RemoveWhiteDiffuseMaterial(&LANDTABLEMR[2]->AnimData[0].Model->child->basicdxmodel->mats[3]); // Lantern in jungle
	RemoveWhiteDiffuseMaterial(&LANDTABLEMR[2]->AnimData[0].Model->child->basicdxmodel->mats[4]); // Lantern in jungle
	RemoveWhiteDiffuseMaterial(&LANDTABLEMR[2]->AnimData[0].Model->child->basicdxmodel->mats[5]); // Lantern in jungle
	// Finish
	delete ADV02_0_Info;
	delete ADV02_1_Info;
	delete ADV02_2_Info;
	delete ADV02_3_Info;
	ADV02_0_Info = nullptr;
	ADV02_1_Info = nullptr;
	ADV02_2_Info = nullptr;
	ADV02_3_Info = nullptr;
}

void IceCapDoorFix(NJS_MODEL_SADX *a1, QueuedModelFlagsB a2, float a3)
{
	// Draw the solid stuff underneath the wall
	late_DrawModelClipMesh(a1, a2, a3);
	DrawQueueDepthBias = -27000.0f;
	// Draw the snowflake
	late_DrawModelClipMesh(IceCapDoorSnowflake->basicdxmodel, a2, a3);
	DrawQueueDepthBias = -20000.0f;
	// Draw the icy surface
	late_DrawModelClipMesh(IceCapDoorSnowflakeWall->basicdxmodel, a2, a3);
	DrawQueueDepthBias = 0.0f;
}

void OTreeFix(NJS_OBJECT* a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = -25000.0f;
	late_DrawObjectClipEx(a1, a2, a3);
}

void OHandKeyFix(NJS_ACTION* action, float frame, int flags, float scale)
{
	NJS_ACTION inside_action;
	// Wind Stone
	if (action->object == ADV02_OBJECTS[76])
	{
		inside_action.motion = action->motion;
		inside_action.object = WindyKey_Inside;
		DrawQueueDepthBias = -1000.0f;
		late_ActionClipEx(&inside_action, frame, 1, scale);
		DrawQueueDepthBias = 0.0f;
		late_DrawObjectClipMesh(WindyKey_Outside, 1, scale);
	}
	// Ice Stone
	else if (action->object == ADV02_OBJECTS[88])
	{
		inside_action.motion = action->motion;
		inside_action.object = IceKey_Inside;
		DrawQueueDepthBias = -1000.0f;
		late_ActionClipEx(&inside_action, frame, 1, scale);
		DrawQueueDepthBias = 0.0f;
		late_DrawObjectClipMesh(IceKey_Outside, 1, scale);
	}
	else
		late_ActionClipEx(action, frame, flags, scale);
}

void ADV02_Init()
{
	// This is done every time the function is called
	ADV02_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\0.sa1lvl"));
	ADV02_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\1.sa1lvl"));
	ADV02_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\2.sa1lvl"));
	ADV02_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\3.sa1lvl"));
	LandTable* ADV02_0 = ADV02_0_Info->getlandtable(); //&landtable_00017960; //ADV02_0_Info->getlandtable();
	LandTable* ADV02_1 = ADV02_1_Info->getlandtable(); //&landtable_0009E7B0; //ADV02_1_Info->getlandtable();
	LandTable* ADV02_2 = ADV02_2_Info->getlandtable(); //&landtable_00000178; //ADV02_2_Info->getlandtable();
	LandTable* ADV02_3 = ADV02_3_Info->getlandtable(); //&landtable_0000019C; //ADV02_3_Info->getlandtable();
	RemoveMaterialColors_Landtable(ADV02_0);
	RemoveMaterialColors_Landtable(ADV02_1);
	RemoveMaterialColors_Landtable(ADV02_2);
	RemoveMaterialColors_Landtable(ADV02_3);
	ADV02_0->TexList = &texlist_mr00;
	ADV02_1->TexList = &texlist_mr01;
	ADV02_2->TexList = &texlist_mr02;
	ADV02_3->TexList = &texlist_mr03;
	*LANDTABLEMR[0] = *ADV02_0;
	*LANDTABLEMR[1] = *ADV02_1;
	*LANDTABLEMR[2] = *ADV02_2;
	*LANDTABLEMR[3] = *ADV02_3;
	LandTableArray[144] = ADV02_0;
	LandTableArray[145] = ADV02_1;
	LandTableArray[146] = ADV02_2;
	LandTableArray[147] = ADV02_3;
	ParseMRColFlags();
	ParseMRMaterials();
	WriteCall((void*)0x52FDC3, MRWater_Display);
	// This is done only once
	if (!ModelsLoaded_ADV02)
	{
		WriteCall((void*)0x538896, OTreeFix); // OTree depth
		WriteData<5>((void*)0x52FC73, 0x90u); // Disable MR jungle callback
		WriteCall((void*)0x53816F, RustlingGrassDepthFix1); // Rustling grass depth bias for Knuckles' cutscene
		WriteCall((void*)0x53818F, RustlingGrassDepthFix2); // Rustling grass depth bias for Knuckles' cutscene
		// MR base stuff
		WriteJump((void*)0x538430, OFinalEgg_DisplayFix);
		// Base opaque model
		OFinalEggModel_Opaque = LoadModel("system\\data\\ADV02\\Models\\0020C3B0.sa1mdl");
		OFinalEggModel_Transparent = CloneObject(OFinalEggModel_Opaque);
		OFinalEggModel_Lights = CloneObject(OFinalEggModel_Opaque);
		HideMesh_Object(OFinalEggModel_Opaque->child, 4); // Lights around the tower
		OFinalEggModel_Opaque->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Opaque->child->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Opaque->child->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
		AddWhiteDiffuseMaterial(&OFinalEggModel_Opaque->basicdxmodel->mats[7]); // Grass stuff
		AddWhiteDiffuseMaterial(&OFinalEggModel_Opaque->basicdxmodel->mats[13]); // Platforms
		AddWhiteDiffuseMaterial(&OFinalEggModel_Opaque->child->basicdxmodel->mats[5]); // City 1
		AddWhiteDiffuseMaterial(&OFinalEggModel_Opaque->child->basicdxmodel->mats[6]); // City 2
		AddWhiteDiffuseMaterial(&OFinalEggModel_Opaque->child->basicdxmodel->mats[7]); // City 3
		OFinalEggModel_Opaque->basicdxmodel->mats[8].attrflags = 0x8631A400; // Not the same as on DC but looks like an error in the original
		// Base transparent model
		OFinalEggModel_Transparent->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
		HideMesh_Object(OFinalEggModel_Transparent->child, 0, 1, 2, 3, 4, 5, 6, 7);
		// Base lights model
		OFinalEggModel_Lights->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Lights->child->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Lights->child->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Lights->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Lights->child->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Lights->child->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Lights->child->sibling->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		OFinalEggModel_Lights->child->sibling->sibling->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		// Transporter model (without car)
		OFinalWayMain = LoadModel("system\\data\\ADV02\\Models\\0020DC78.sa1mdl"); // OFinalWay
		OFinalWayCar = CloneObject(OFinalWayMain); // OFinalWay
		OFinalWayMain->child->sibling->evalflags |= NJD_EVAL_HIDE; // Hide car
		// Transporter model (car only)
		OFinalWayCar->evalflags |= NJD_EVAL_HIDE;
		OFinalWayCar->child->evalflags |= NJD_EVAL_HIDE;
		// Code fixes
		WriteData((float*)0x005343BE, 239.0f); // Windows in Tails' workshop
		WriteData((float*)0x005343EF, 239.0f); // Windows in Tails' workshop 
		WriteData<1>((char*)0x005370E0, 0x01); // Fix blending mode on floating bricks in WV entrance
		WriteData<1>((char*)0x00537038, 0x01); // Fix blending mode on floating bricks in WV entrance
		WriteData<1>((char*)0x00537181, 0x01); // Fix blending mode on floating bricks in WV entrance
		WriteData<1>((char*)0x00537354, 0x01); // Fix blending mode on floating bricks in WV entrance
		WriteCall((void*)0x6F4A89, EmeraldShardGlow_GetColor); // Delay the setting of sprite color
		WriteCall((void*)0x7A69FA, EmeraldShardCutscene_DrawLightRays_Callback); // Draw light rays behind glow
		WriteCall((void*)0x7A6A8F, EmeraldShardCutscene_DrawLightRays_Callback); // Draw light rays behind glow
		WriteCall((void*)0x6F4AF3, RenderEmeraldShard); // Emerald shard (cutscene)
		WriteCall((void*)0x6F4BF3, RenderEmeraldShardGlow); // Emerald shard (cutscene) glow
		WriteCall((void*)0x6F4F02, RenderEmeraldShardGlow_Final); // Emerald shard (cutscene) glow (big)
		// OBlockEntry brightness
		WriteCall((void*)0x53B5E8, SetBlockEntryMaterialColor);
		RemoveVertexColors_Object(ADV02_OBJECTS[50]);
		// Cutscene after Lost World
		WriteData((float*)0x006D2537, 16.0f); // Y1
		WriteData((float*)0x006D2507, 16.0f); // Y2
		WriteData((float*)0x006D1CF6, 14.52f); // Y after cutscene
		WriteData((int*)0x006D1D13, 0); // X rotation after cutscene
		WriteData((int*)0x006D1D1D, 0); // Z rotation after cutscene
		WriteData((float*)0x6BA1EC, 200.5f); // Fix Tails' position in "The time has come at last"
		WriteData((float*)0x6BA24E, 200.5f); // Fix Tails' position in "The time has come at last"
		WriteData((float*)0x6BA326, 200.5f); // Fix Tails' position in "The time has come at last"
		// Enable MR light direction adjustment code
		WriteData<6>((char*)0x00412536, 0x90u);
		WriteData<6>((char*)0x00412544, 0x90u);
		// Master Emerald fixes
		WriteCall((void*)0x53CCD2, MasterEmeraldFix); // Always use the more expensive function to render the Master Emerald
		WriteCall((void*)0x53CCEF, MrEmeTimer); // Timer for Master Emerald glow
		WriteCall((void*)0x53CD37, SetColor); // Set material color for Master Emerald glow
		WriteCall((void*)0x53CE7D, DrawMasterEmeraldGlow);
		WriteCall((void*)0x53CEDC, DrawMasterEmeraldGlow);
		for (int i = 0; i < 3; i++)
		{
			MR1FogDay[i].Distance = -14000.0f;
			MR1FogDay[i].Layer = -2000.0f;
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
			MR3DrawDist[i].Maximum = -16000.0f;
			MR4DrawDist[i].Maximum = -4000.0f;
		}
		*ADV02_TEXLISTS[38] = texlist_mr00;
		*ADV02_TEXLISTS[39] = texlist_mr01;
		*ADV02_TEXLISTS[40] = texlist_mr02;
		*ADV02_TEXLISTS[41] = texlist_mr03;
		*MROBJ_TEXLISTS[0].TexList = texlist_mrobj; // MROBJ
		*ADV02_TEXLISTS[21] = texlist_mrobj; // MROBJ
		*ADV02_TEXLISTS[4] = texlist_mrtrain;
		*(NJS_OBJECT*)0x1108A4C = *LoadModel("system\\data\\ADV02\\Models\\0022649C.sa1mdl"); // TANKEN
		*(NJS_OBJECT*)0x110CF34 = *LoadModel("system\\data\\ADV02\\Models\\00229334.sa1mdl"); // TANKEN 2
		*(NJS_OBJECT*)0x11112CC = *LoadModel("system\\data\\ADV02\\Models\\0022DDA4.sa1mdl"); // TANKEN 3
		// Palm trees near Tails' house
		LoadModel_ReplaceMeshes(ADV02_OBJECTS[67], "system\\data\\ADV02\\Models\\001DCF78.sa1mdl");
		RemoveVertexColors_Object(ADV02_OBJECTS[67]);
		AddWhiteDiffuseMaterial(&ADV02_OBJECTS[67]->child->child->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&ADV02_OBJECTS[67]->child->sibling->child->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&ADV02_OBJECTS[67]->child->sibling->sibling->child->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&ADV02_OBJECTS[67]->child->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&ADV02_OBJECTS[67]->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&ADV02_OBJECTS[67]->child->sibling->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
		*ADV02_OBJECTS[84] = *LoadModel("system\\data\\ADV02\\Models\\001F6A04.sa1mdl"); // Windows and the light above the door of Tails' house
		ForceLevelSpecular_Object(ADV02_OBJECTS[84], false);
		*ADV02_OBJECTS[85] = *LoadModel("system\\data\\ADV02\\Models\\001F764C.sa1mdl"); // Same as above but lit up
		AddWhiteDiffuseMaterial(&ADV02_OBJECTS[85]->basicdxmodel->mats[4]);
		ForceLevelSpecular_Object(ADV02_OBJECTS[85], false);
		// Material fixes
		for (int i = 27; i < 44; i++)
		{
			RemoveVertexColors_Object(ADV02_OBJECTS[i]); // Monkey cage (broken) material fixes
		}
		RemoveVertexColors_Object(ADV02_OBJECTS[101]); // Chaos emeralds in ADV02MODELS
		RemoveVertexColors_Object(ADV02_OBJECTS[102]); // Chaos emeralds in ADV02MODELS
		RemoveVertexColors_Object(ADV02_OBJECTS[106]); // Chaos emeralds in ADV02MODELS
		RemoveVertexColors_Object(ADV02_OBJECTS[107]); // Chaos emeralds in ADV02MODELS
		RemoveVertexColors_Object(ADV02_OBJECTS[110]); // Chaos emeralds in ADV02MODELS
		RemoveVertexColors_Object(ADV02_OBJECTS[111]); // Chaos emeralds in ADV02MODELS
		RemoveVertexColors_Object(ADV02_OBJECTS[112]); // Chaos emeralds in ADV02MODELS
		RemoveVertexColors_Object(ADV02_OBJECTS[53]); // Diggable place
		ADV02_OBJECTS[90]->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; // Palm trees
		ADV02_OBJECTS[91]->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; // Palm trees
		// Ice Cap door fix
		*ADV02_OBJECTS[23] = *LoadModel("system\\data\\ADV02\\Models\\001BACAC.sa1mdl"); // Ice Cap door full
		*ADV02_OBJECTS[25] = *LoadModel("system\\data\\ADV02\\Models\\001B9854.sa1mdl"); // Ice Cap door 1 (with snowflake)
		IceCapDoorSnowflake = CloneObject(ADV02_OBJECTS[25]);
		IceCapDoorSnowflakeWall = CloneObject(ADV02_OBJECTS[25]);
		HideMesh_Object(ADV02_OBJECTS[25], 0, 2);
		HideMesh_Object(IceCapDoorSnowflake, 0, 1);
		HideMesh_Object(IceCapDoorSnowflakeWall, 1, 2);
		WriteCall((void*)0x53E0B2, IceCapDoorFix);
		// OHandKey fixes
		WriteCall((void*)0x5322C3, OHandKeyFix);
		// Wind Stone
		WindyKey_Outside = LoadModel("system\\data\\ADV02\\Models\\001BCA10.sa1mdl");
		WindyKey_Inside = CloneObject(WindyKey_Outside);
		*ADV02_OBJECTS[76] = *CloneObject(WindyKey_Outside);
		*ADV02_ACTIONS[28]->object = *ADV02_OBJECTS[76];
		ForceLevelSpecular_Object(ADV02_OBJECTS[76], false);
		ForceLevelSpecular_Object(WindyKey_Outside, false);
		WindyKey_Outside->child->evalflags |= NJD_EVAL_HIDE;
		WindyKey_Inside->evalflags |= NJD_EVAL_HIDE;
		// Ice Stone
		IceKey_Outside= LoadModel("system\\data\\ADV02\\Models\\001BBA04.sa1mdl");
		IceKey_Inside = CloneObject(IceKey_Outside);
		*ADV02_OBJECTS[88] = *CloneObject(IceKey_Outside);
		*ADV02_ACTIONS[29]->object = *ADV02_OBJECTS[88]; // Ice Stone
		ForceLevelSpecular_Object(ADV02_OBJECTS[88], false); // Ice Stone
		ForceLevelSpecular_Object(IceKey_Outside, false); // Ice Stone
		IceKey_Outside->child->evalflags |= NJD_EVAL_HIDE;
		IceKey_Inside->evalflags |= NJD_EVAL_HIDE;		
		// Other objects
		MROcean = LoadModel("system\\data\\ADV02\\Models\\0005FEE0.sa1mdl");
		AddTextureAnimation_Permanent(33, 0, &MROcean->basicdxmodel->mats[0], false, 5, 130, 139);
		*ADV02_OBJECTS[26] = *LoadModel("system\\data\\ADV02\\Models\\001B9D9C.sa1mdl"); // Ice Cap door 2
		*ADV02_OBJECTS[86] = *LoadModel("system\\data\\ADV02\\Models\\001BF00C.sa1mdl"); // Ice Cap lock
		*ADV02_OBJECTS[64] = *LoadModel("system\\data\\ADV02\\Models\\001E87F0.sa1mdl"); // Angel Island rock
		*ADV02_OBJECTS[68] = *LoadModel("system\\data\\ADV02\\Models\\002145D4.sa1mdl"); // That thing that pushes the Chao Egg out
		*ADV02_OBJECTS[100] = *LoadModel("system\\data\\ADV02\\Models\\001F41C0.sa1mdl"); // Grass
		*ADV02_ACTIONS[32]->object = *ADV02_OBJECTS[100]; // Rustling grass
		*ADV02_OBJECTS[20] = *LoadModel("system\\data\\ADV02\\Models\\001B5F40.sa1mdl"); // Torokko 
		*ADV02_ACTIONS[11]->object = *ADV02_OBJECTS[20]; // Torokko
		*ADV02_ACTIONS[18]->object = *LoadModel("system\\data\\ADV02\\Models\\001D76AC.sa1mdl"); // Wall in Tails' house
		*ADV02_OBJECTS[61] = *LoadModel("system\\data\\ADV02\\Models\\001B1A98.sa1mdl"); // OIslandDoor
		*ADV02_OBJECTS[60] = *LoadModel("system\\data\\ADV02\\Models\\001B0FE0.sa1mdl"); // OIslandDoor right
		ADV02_OBJECTS[60]->pos[2] = 0.05f;
		*ADV02_OBJECTS[59] = *LoadModel("system\\data\\ADV02\\Models\\001B1648.sa1mdl"); // OIslandDoor left
		ADV02_OBJECTS[59]->pos[2] = 0.05f;
		*ADV02_OBJECTS[39] = *LoadModel("system\\data\\ADV02\\Models\\001AF63C.sa1mdl"); // Monkey cage (full)
		*ADV02_OBJECTS[38] = *LoadModel("system\\data\\ADV02\\Models\\001AF0B0.sa1mdl"); // Monkey cage (bottom)
		*ADV02_OBJECTS[42] = *LoadModel("system\\data\\ADV02\\Models\\001AE9B0.sa1mdl"); // Monkey cage (bottom)
		*ADV02_OBJECTS[43] = *LoadModel("system\\data\\ADV02\\Models\\001AE70C.sa1mdl"); // Monkey cage (bottom)
		*ADV02_OBJECTS[10] = *LoadModel("system\\data\\ADV02\\Models\\001A79D0.sa1mdl"); // Item stand
		*ADV02_OBJECTS[12] = *LoadModel("system\\data\\ADV02\\Models\\001A7370.sa1mdl"); // Item stand
		*ADV02_OBJECTS[13] = *LoadModel("system\\data\\ADV02\\Models\\001A6B1C.sa1mdl"); // Item stand
		*ADV02_OBJECTS[96] = *LoadModel("system\\data\\ADV02\\Models\\001BD918.sa1mdl"); // OHandKey gold
		*ADV02_OBJECTS[97] = *LoadModel("system\\data\\ADV02\\Models\\001BE56C.sa1mdl"); // OHandKey silver
		*ADV02_OBJECTS[55] = *LoadModel("system\\data\\ADV02\\Models\\001A9178.sa1mdl"); // ODigPlace1
		*ADV02_ACTIONS[16]->object = *ADV02_OBJECTS[55];
		*ADV02_OBJECTS[103] = *LoadModel("system\\data\\ADV02\\Models\\001C76EC.sa1mdl"); // Master Emerald (complete)
		*ADV02_OBJECTS[71] = *LoadModel("system\\data\\ADV02\\Models\\001D6AC8.sa1mdl"); // The gate for Tails' Tornado
		*ADV02_OBJECTS[69] = *ADV02_OBJECTS[71]->child;
		*ADV02_OBJECTS[70] = *ADV02_OBJECTS[71]->child->sibling;
		*ADV02_OBJECTS[72] = *ADV02_OBJECTS[71]->child->sibling->sibling; // I have no idea why it's set up this way
		*ADV02_MODELS[15] = *LoadModel("system\\data\\ADV02\\Models\\002043D0.sa1mdl")->basicdxmodel; // Master Emerald glow
		*ADV02_ACTIONS[10]->object = *LoadModel("system\\data\\ADV02\\Models\\00201C18.sa1mdl"); // Train
		AddWhiteDiffuseMaterial(&ADV02_ACTIONS[10]->object->child->sibling->sibling->sibling->basicdxmodel->mats[9]);
		*ADV02_ACTIONS[21]->object = *LoadModel("system\\data\\ADV02\\Models\\001DDBFC.sa1mdl"); // Plane platform
		*ADV02_ACTIONS[9]->object = *LoadModel("system\\data\\ADV02\\Models\\001B2D5C.sa1mdl"); // Final Egg base door
		*ADV02_ACTIONS[17]->object = *LoadModel("system\\data\\ADV02\\Models\\001CCFBC.sa1mdl"); // OHiddenGate
		*ADV02_MODELS[9] = *LoadModel("system\\data\\ADV02\\Models\\001CDEF0.sa1mdl")->basicdxmodel; // OHiddenGate button
		AddWhiteDiffuseMaterial(&ADV02_MODELS[9]->mats[2]);
		NJS_OBJECT* SandSwitch = LoadModel("system\\data\\ADV02\\Models\\001B42DC.sa1mdl");
		*ADV02_MODELS[12] = *SandSwitch->child->basicdxmodel; // OSandSwitch
		*ADV02_MODELS[13] = *SandSwitch->basicdxmodel; // OSandSwitch
		ModelsLoaded_ADV02 = true;
	}
}

void ADV02_OnFrame()
{
	auto entity = EntityData1Ptrs[0];
	if (CurrentLevel == LevelIDs_MysticRuins)
	{
		// Master Emerald glow timer
		if (FramerateSetting >= 2 || (FramerateSetting < 2 && FrameCounter % 2 == 0)) MasterEmeraldTimer += 1;
		// Amy's Mission Mode hacks
		if (CurrentAct == 0 && ADV02_0_Info)
		{
			if (!AmyMissionCollision && CurrentCharacter == Characters_Amy && GameMode == GameModes_Mission)
			{
				if (LANDTABLEMR[0]->Col[0].Radius > 252 && LANDTABLEMR[0]->Col[0].Radius < 253) LANDTABLEMR[0]->Col[0].Flags = 0x1;
				if (LANDTABLEMR[0]->Col[1].Radius > 260 && LANDTABLEMR[0]->Col[1].Radius < 261) LANDTABLEMR[0]->Col[1].Flags = 0x1;
				AmyMissionCollision = true;
			}
			if (AmyMissionCollision && (CurrentCharacter != Characters_Amy || GameMode != GameModes_Mission))
			{
				if (LANDTABLEMR[0]->Col[0].Radius > 252 && LANDTABLEMR[0]->Col[0].Radius < 253) LANDTABLEMR[0]->Col[0].Flags = 0;
				if (LANDTABLEMR[0]->Col[1].Radius > 260 && LANDTABLEMR[0]->Col[1].Radius < 261) LANDTABLEMR[0]->Col[1].Flags = 0;
				AmyMissionCollision = false;
			}
		}
		// Animate rotating stuff in MR Jungle
		if (!IsGamePaused() && CurrentAct == 2 && ADV02_2_Info)
		{
			MRJungle_Propeller->ang[0] += (0x444 * FramerateSetting) % 65535;
			MRJungle_Propeller2->ang[0] += (0x222 * FramerateSetting) % 65535;
			MRJungle_LanternTop->ang[1] += (0x111 * FramerateSetting) % 65535;
		}
		// Prevent dynamic direction from being adjusted in Eggman's base
		if (CurrentAct == 3)
		{
			CasinoLightRotation_Y = 0;
			CasinoLightRotation_Z = 0;
		}
		// Dynamic fog in the jungle + cutscene exclusions
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