#include "stdafx.h"
#include "ADV00_Motions.h"

// TODO 
// Very slight transparency issue with Casino door
// OS1Dnto shouldn't ignore lighting (use object specular)

// Texlists
NJS_TEXNAME textures_sscar[22];
NJS_TEXLIST texlist_sscar = {arrayptrandlength(textures_sscar)};

NJS_TEXNAME textures_sstrain[31];
NJS_TEXLIST texlist_sstrain = {arrayptrandlength(textures_sstrain)};

NJS_TEXNAME textures_obj_ss[177];
NJS_TEXLIST texlist_obj_ss = {arrayptrandlength(textures_obj_ss)};

NJS_TEXNAME textures_advss00[220];
NJS_TEXLIST texlist_advss00 = { arrayptrandlength(textures_advss00) };

NJS_TEXNAME textures_advss01[266];
NJS_TEXLIST texlist_advss01 = { arrayptrandlength(textures_advss01) };

NJS_TEXNAME textures_advss02[56];
NJS_TEXLIST texlist_advss02 = { arrayptrandlength(textures_advss02) };

NJS_TEXNAME textures_advss03[264];
NJS_TEXLIST texlist_advss03 = { arrayptrandlength(textures_advss03) };

NJS_TEXNAME textures_advss04[119];
NJS_TEXLIST texlist_advss04 = { arrayptrandlength(textures_advss04) };

NJS_TEXNAME textures_advss05[33];
NJS_TEXLIST texlist_advss05 = { arrayptrandlength(textures_advss05) };

// Model pointers
NJS_OBJECT* BurgerShopMan = nullptr;
NJS_OBJECT* PoliceCarModel_LightsOnly = nullptr;
NJS_OBJECT* Parasol_1 = nullptr;
NJS_OBJECT* Parasol_2 = nullptr;
NJS_OBJECT* Parasol_3 = nullptr;
NJS_OBJECT* Parasol_4 = nullptr;
NJS_OBJECT* EVHelicopterLight1 = nullptr;
NJS_OBJECT* EVHelicopterLight2 = nullptr;

/*
#include "SS00_CityHall.h"
#include "SS01_Casino.h"
#include "SS02_Sewers.h"
#include "SS03_MainArea.h"
#include "SS04_Hotel.h"
#include "SS05_Twinkle.h"
*/

DataArray(int, StationSquareCarTextureIDs, 0x2BBE9D8, 6);
DataArray(FogData, StationSquare1Fog, 0x02AA3D10, 3);
DataArray(FogData, StationSquare2Fog, 0x02AA3D40, 3);
DataArray(FogData, StationSquare3Fog, 0x02AA3D70, 3);
DataArray(FogData, StationSquare4Fog, 0x02AA3DA0, 3);
DataArray(FogData, StationSquare5Fog, 0x02AA3DD0, 3);
DataArray(FogData, StationSquare6Fog, 0x02AA3E00, 3);
DataArray(DrawDistance, StationSquare6DrawDist, 0x02AA3CF8, 3);

static Sint8 PreviousTimeOfDay = -1;
static Sint8 DelayedTimeOfDay = -1;

int __cdecl CheckIfCameraIsInHotel_Lol()
{
	return 0;
}

// Replace the original ocean draw callback
void SSOceanCallback(void(__cdecl *function)(OceanData *), OceanData *data, float depth, QueuedModelFlagsB queueflags)
{
	if (SADXWater_StationSquare) 
		DrawModelCallback_QueueOceanData(StationSquare_OceanDraw, data, depth, queueflags);
}

void FixPoliceCar(NJS_ACTION *action, float frame, int flags)
{
	// Draw the car animation without transparent parts
	ds_ActionClip(action, frame, 1.0f);
	// Draw the transparent parts separately if this is the police car
	if (action->object == ((NJS_OBJECT*)0x2AF4FC0))
	{
		DrawQueueDepthBias = 1000.0f;
		lateDrawObject(PoliceCarModel_LightsOnly, (QueuedModelFlagsB)0, 1.0f);
		DrawQueueDepthBias = 0.0f;
	}
}

void RenderPoliceCarBarricade(NJS_OBJECT *obj, float scale)
{
	ds_DrawObjectClip(obj, scale);
	DrawQueueDepthBias = 1000.0f;
	lateDrawObject(PoliceCarModel_LightsOnly, (QueuedModelFlagsB)0, scale);
	DrawQueueDepthBias = 0.0f;
}

void RenderOfficeDoor(NJS_MODEL_SADX *a1, float scale)
{
	DrawQueueDepthBias = -2000.0f;
	lateDrawModel(a1, QueuedModelFlagsB_EnableZWrite);
}

void RenderOfficeDoor_Child(NJS_MODEL_SADX *a1, float scale)
{
	DrawQueueDepthBias = -3000.0f;
	lateDrawModel(a1, QueuedModelFlagsB_EnableZWrite);
}

static Trampoline* SSCar_Display_t = nullptr;
static void __cdecl SSCar_Display_r(ObjectMaster* a1)
{
	const auto original = TARGET_DYNAMIC(SSCar_Display);
	EntityData2* Data2 = (EntityData2*)a1->Data2;
	// Fix animation frame going out of range
	if (EnabledLevels[LevelIDs_StationSquare] && Data2->field_38 > 7) Data2->field_38 = 0;
	original(a1);
}

void RenderParasol(NJS_MODEL_SADX *a1, int a2, float a3)
{
	lateDrawObject(Parasol_1, QueuedModelFlagsB_EnableZWrite, 1.0f); // Main model
	DrawQueueDepthBias = 1000.0f;
	lateDrawObject(Parasol_2, QueuedModelFlagsB_EnableZWrite, 1.0f); // Chair transparency
	DrawQueueDepthBias = 1100.0f;
	lateDrawObject(Parasol_4, QueuedModelFlagsB_EnableZWrite, 1.0f); // Glass
	DrawQueueDepthBias = 1200.0f;
	lateDrawObject(Parasol_3, QueuedModelFlagsB_EnableZWrite, 1.0f); // Parasol
	DrawQueueDepthBias = 0.0f;
}

// Sonic's rotation in the Light Speed Dash cutscene
void LSCutsceneRotationFix()
{
	DisableControl();
	EntityData1Ptrs[0]->Rotation.x = 0;
	EntityData1Ptrs[0]->Rotation.z = 0;
	EntityData1Ptrs[0]->Rotation.y = 49072;
}

// Delay updating the time of day to prevent sudden lighting change when exiting the sewers
void DelaySettingTimeOfDay(Sint8 time)
{
	DelayedTimeOfDay = time;
}

void OMSakuFix(NJS_OBJECT *a1, float scale)
{
	lateDrawObject(a1, QueuedModelFlagsB_EnableZWrite, scale);
}

void OOfficeBarricade_Fix(NJS_MODEL_SADX* a1, float scale)
{
	lateDrawModel(a1, QueuedModelFlagsB_EnableZWrite);
}

// Put the cars slightly above ground in Egg Walker so that they land correctly and don't fall through
void __fastcall EggWalkerCarsFix(NJS_MATRIX_PTR m, const NJS_VECTOR *v)
{
	njTranslate(0, v->x, -2.65f, v->z);
}

void BigPuzzleFix(NJS_OBJECT* obj, float scale)
{
	lateDrawObject(obj, QueuedModelFlagsB_SomeTextureThing, 1.0f);
}

void OWakuseiFix(NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float scale)
{
	if (EV_MainThread_ptr) DrawQueueDepthBias = 9000.0f;
	late_DrawModelClip(model, blend, scale);
	if (EV_MainThread_ptr) DrawQueueDepthBias = 0.0f;
}

void DrawEventHelicopter(NJS_ACTION *a1, float a2, int a3)
{
	NJS_ACTION Light1Action = {EVHelicopterLight1, a1->motion};
	NJS_ACTION Light2Action = {EVHelicopterLight2, a1->motion};
	// Draw the helicopter
	late_ActionClipEx(a1, a2, 1, 0);
	// Draw the light cover
	late_ActionClipEx(&Light1Action, a2, 1, 1.0f);
	// Draw the light
	late_ActionClipEx(&Light2Action, a2, a3, 1.0f);
}

void SouvenirShopDoor_Depth(NJS_ACTION* a1, float a2, int a3, float a4)
{
	DrawQueueDepthBias = 3000.0f;
	late_ActionClipEx(a1, a2, a3, a4);
	DrawQueueDepthBias = 0.0f;
}

void BurgerShopManHook(NJS_OBJECT *a1, NJS_MOTION *a2, float a3)
{
	njAction_QueueObject(BurgerShopMan, a2, a3);
}

void ParseSSColFlags()
{
	int colflags;
	LandTable *landtable;
	// Sewers
	landtable = LANDTABLESS[2];
	if (SADXWater_StationSquare)
	{
		// Make the water less transparent like in DX
		for (int j = 0; j < landtable->COLCount; j++)
		{
			colflags = landtable->Col[j].Flags;
			if ((colflags & ColFlags_Visible) && (colflags & ColFlags_Water)) landtable->Col[j].Model->basicdxmodel->mats[0].diffuse.argb.a = 0xD2;
		}
	}
	// Main area
	landtable = LANDTABLESS[3];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (SADXWater_StationSquare)
		{
			// Show SADX sea bottom
			if (colflags == 0) landtable->Col[j].Flags = 0x80000000;
			// Hide SA1 water
			if ((colflags & ColFlags_Visible) && (colflags & ColFlags_Water)) landtable->Col[j].Flags = 0x00000002;
		}
	}
	// Hotel area
	landtable = LANDTABLESS[4];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (SADXWater_StationSquare)
		{
			// Show SADX sea bottom
			if (colflags == 0) landtable->Col[j].Flags = 0x80000000;
			// Hide SA1 water
			if ((colflags & ColFlags_Visible) && (colflags & ColFlags_Water)) landtable->Col[j].Flags &= ~ColFlags_Visible;
		}
	}
}

void ParseSSMaterials(bool remove)
{
	Uint32 materialflags;
	NJS_MATERIAL *material;
	LandTable *landtable;
	int texid;
	Sint8 TimeOfDay = GetTimeOfDay();
	// Casino
	landtable = LANDTABLESS[1];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = material->attrflags;
			texid = material->attr_texId;
			// White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				if (remove) RemoveWhiteDiffuseMaterial(material);
				else AddWhiteDiffuseMaterial(material);
			}
		}
	}
	// Sewers
	landtable = LANDTABLESS[2];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = material->attrflags;
			// White diffuse night
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				if (remove) RemoveWhiteDiffuseMaterial(material);
				else AddWhiteDiffuseMaterial(material);
			}
			// Texanim 1
			if (material->attr_texId >= 46 && material->attr_texId <= 55)
			{
				AddTextureAnimation(26, 2, material, false, 4, 46, 55);
			}
		}
	}
	// Main area
	landtable = LANDTABLESS[3];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = material->attrflags;
			// White diffuse night
			if ((materialflags & NJD_CUSTOMFLAG_NIGHT) && (materialflags & NJD_CUSTOMFLAG_WHITE))
			{
				if (remove) RemoveWhiteDiffuseNightMaterial(material);
				else AddWhiteDiffuseNightMaterial(material);
			}
			// Texanim 1
			if (material->attr_texId == 183)
			{
				AddTextureAnimation(26, 3, material, true, 4, 183, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255);
			}
			// Texanim 2
			if (material->attr_texId == 29)
			{
				AddTextureAnimation(26, 3, material, true, 4, 29, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241);
			}
			// Texanim 3
			if (material->attr_texId == 142)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(26, 3, material, true, 4, 142, 219, 220, 221, 222, 223, 224, 225, 226, 227);
			}
		}
	}
	// Hotel and pool
	landtable = LANDTABLESS[4];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = material->attrflags;
			// White diffuse night
			if ((materialflags & NJD_CUSTOMFLAG_NIGHT) && (materialflags & NJD_CUSTOMFLAG_WHITE))
			{
				if (remove) RemoveWhiteDiffuseNightMaterial(material);
				else AddWhiteDiffuseNightMaterial(material);
			}
			// Texanim 1
			if (material->attr_texId >= 101 && material->attr_texId <= 114)
			{
				AddTextureAnimation(26, 4, material, false, 4, 101, 114);
			}
			// Texanim 2
			if (material->attr_texId >= 87 && material->attr_texId <= 100)
			{
				AddTextureAnimation(26, 4, material, false, 4, 87, 100);
			}
			// Texanim 3
			if (material->attr_texId == 65)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(26, 4, material, true, 4, 65, 78, 79, 80, 81, 82, 83, 84, 85, 86);
			}
		}
	}
}

void SwitchLighting_Act0(NJS_MATERIAL* material, Sint8 TimeOfDay)
{
	int texid = material->attr_texId;
	switch (TimeOfDay)
	{
	case 0:
		if (texid == 207 || texid == 206) 
			material->attr_texId = 124;
		if (texid == 209 || texid == 208) 
			material->attr_texId = 145;
		if (texid == 211 || texid == 210) 
			material->attr_texId = 69;
		if (texid == 213 || texid == 212) 
			material->attr_texId = 184;
		if (texid == 215 || texid == 214) 
			material->attr_texId = 36;
		if (texid == 217 || texid == 216) 
			material->attr_texId = 39;
		if (texid == 219 || texid == 218) 
			material->attr_texId = 185;
		break;
	case 1:
		if (texid == 124 || texid == 207) 
			material->attr_texId = 206;
		if (texid == 145 || texid == 209) 
			material->attr_texId = 208;
		if (texid == 69 || texid == 211) 
			material->attr_texId = 210;
		if (texid == 184 || texid == 213) 
			material->attr_texId = 212;
		if (texid == 36 || texid == 215) 
			material->attr_texId = 214;
		if (texid == 39 || texid == 217) 
			material->attr_texId = 216;
		if (texid == 185 || texid == 219) 
			material->attr_texId = 218;
		break;
	case 2:
		if (texid == 124 || texid == 206) 
			material->attr_texId = 207;
		if (texid == 145 || texid == 208) 
			material->attr_texId = 209;
		if (texid == 69 || texid == 210) 
			material->attr_texId = 211;
		if (texid == 184 || texid == 212) 
			material->attr_texId = 213;
		if (texid == 36 || texid == 214) 
			material->attr_texId = 215;
		if (texid == 39 || texid == 216) 
			material->attr_texId = 217;
		if (texid == 185 || texid == 218) 
			material->attr_texId = 219;
		break;
	default:
		break;
	}
}

void SwitchLighting_Act1(NJS_MATERIAL* material, Sint8 TimeOfDay)
{
	int texid = material->attr_texId;
	switch (TimeOfDay)
	{
	case 0:
		if (texid == 265 || texid == 264) 
			material->attr_texId = 240;
		break; 
	case 1:
		if (texid == 240 || texid == 265) 
			material->attr_texId = 264;
		break;
	case 2:
		if (texid == 240 || texid == 264) 
			material->attr_texId = 265;
		break;
	default:
		break;
	}
}

void SwitchLighting_Act3(NJS_MATERIAL* material, Sint8 TimeOfDay)
{
	int texid = material->attr_texId;
	switch (TimeOfDay)
	{
	case 0:
		if (texid == 258 || texid == 259) 
			material->attr_texId = 60;
		if (texid == 262 || texid == 263) 
			material->attr_texId = 89;
		if (texid == 260 || texid == 261) 
			material->attr_texId = 94;
		if (texid == 256 || texid == 257) 
			material->attr_texId = 165;
		break;
	case 1:
		if (texid == 60 || texid == 259) 
			material->attr_texId = 258;
		if (texid == 89 || texid == 263) 
			material->attr_texId = 262;
		if (texid == 94 || texid == 261) 
			material->attr_texId = 260;
		if (texid == 165 || texid == 257) 
			material->attr_texId = 256;
		break;
	case 2:
		if (texid == 60 || texid == 258) 
			material->attr_texId = 259;
		if (texid == 89 || texid == 262) 
			material->attr_texId = 263;
		if (texid == 94 || texid == 260) 
			material->attr_texId = 261;
		if (texid == 165 || texid == 256) 
			material->attr_texId = 257;
		break;
	default:
		break;
	}
}

void SwitchLighting_Act4(NJS_MATERIAL* material, Sint8 TimeOfDay)
{
	int texid = material->attr_texId;
	switch (TimeOfDay)
	{
	case 0:
		if (texid == 116 || texid == 118) 
			material->attr_texId = 69;
		if (texid == 115 || texid == 117) 
			material->attr_texId = 70;
		break;
	case 1:
		if (texid == 69 || texid == 118)
			material->attr_texId = 116;
		if (texid == 70 || texid == 117) 
			material->attr_texId = 115;
		break;
	case 2:
		if (texid == 69 || texid == 116) 
			material->attr_texId = 118;
		if (texid == 70 || texid == 115) 
			material->attr_texId = 117;
		break;
	default:
		break;
	}
}

void AddOrRemoveIgnoreLightFlag_TimeOfDay(NJS_MATERIAL* material)
{
	Uint32 materialflags = material->attrflags;
	Sint8 TimeOfDay = GetTimeOfDay();
	int texid = material->attr_texId;
	if (materialflags & NJD_CUSTOMFLAG_NIGHT && !(materialflags & NJD_CUSTOMFLAG_WHITE))
	{
		// Add the Ignore Light flag at night
		if (TimeOfDay == 2)
		{
			if (!(materialflags & NJD_FLAG_IGNORE_LIGHT)) 
				material->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		}
		// Remove the Ignore Light flag at other times of day
		else
		{
			if (materialflags & NJD_FLAG_IGNORE_LIGHT) 
				material->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		}
	}
}

void SwitchLighting_TimeOfDay(int act)
{
	Uint32 materialflags;
	int texid;
	LandTable* landtable;
	
	Sint8 TimeOfDay = GetTimeOfDay();
	
	landtable = LANDTABLESS[act];
		
	// OGaitou "fix"
	if (TimeOfDay != 2) 
		((NJS_OBJECT*)0x2AC9F10)->child->sibling->basicdxmodel->mats[0].attrflags = 0x9421A500;
	else 
		((NJS_OBJECT*)0x2AC9F10)->child->sibling->basicdxmodel->mats[0].attrflags = 0x9621A500;

	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			NJS_MATERIAL* material = &landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = material->attrflags;
			texid = material->attr_texId;
			// Add or remove "ignore light"
			AddOrRemoveIgnoreLightFlag_TimeOfDay(material);
			// Go through all materials and set day/evening/night texture IDs
			switch (act)
			{
			case 0:
				SwitchLighting_Act0(&landtable->Col[j].Model->basicdxmodel->mats[k], TimeOfDay);
				break;
			case 1:
				SwitchLighting_Act1(&landtable->Col[j].Model->basicdxmodel->mats[k], TimeOfDay);
				break;
			case 3:
				// This is specialcased because bullshit
				if (landtable->Col[j].Model->pos[1] == 45 && (texid == 52 || texid == 258 || texid == 259))
				{
					switch (TimeOfDay)
					{
					case 1:
						material->attr_texId = 258;
						break;
					case 2:
						material->attr_texId = 259;
						break;
					case 0:
					default:
						material->attr_texId = 52;
						break;
					}
				}
				else SwitchLighting_Act3(&landtable->Col[j].Model->basicdxmodel->mats[k], TimeOfDay);
				break;
			case 4:
				SwitchLighting_Act4(&landtable->Col[j].Model->basicdxmodel->mats[k], TimeOfDay);
				break;
			default:
				break;
			}
		}
	}
}

void UnloadLevelFiles_ADV00()
{
	ParseSSMaterials(true);
	delete ADV00_0_Info;
	delete ADV00_1_Info;
	delete ADV00_2_Info;
	delete ADV00_3_Info;
	delete ADV00_4_Info;
	delete ADV00_5_Info;
	ADV00_0_Info = nullptr;
	ADV00_1_Info = nullptr;
	ADV00_2_Info = nullptr;
	ADV00_3_Info = nullptr;
	ADV00_4_Info = nullptr;
	ADV00_5_Info = nullptr;
	PreviousTimeOfDay = -1;
}

void ADV00_Init()
{
	// This is done every time the function is called
	ADV00_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\0.sa1lvl"));
	ADV00_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\1.sa1lvl"));
	ADV00_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\2.sa1lvl"));
	ADV00_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\3.sa1lvl"));
	ADV00_4_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\4.sa1lvl"));
	ADV00_5_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\5.sa1lvl"));
	LandTable* ADV00_0 = ADV00_0_Info->getlandtable(); // &landtable_000157F4; // 
	LandTable* ADV00_1 = ADV00_1_Info->getlandtable(); // &landtable_000738F4; // 
	LandTable* ADV00_2 = ADV00_2_Info->getlandtable(); // &landtable_000C21F0; // 
	LandTable* ADV00_3 = ADV00_3_Info->getlandtable(); // &landtable_000DCEBC; // 
	LandTable* ADV00_4 = ADV00_4_Info->getlandtable(); // &landtable_00135A90; // 
	LandTable* ADV00_5 = ADV00_5_Info->getlandtable(); // &landtable_001573CC; //
	RemoveMaterialColors_Landtable(ADV00_0);
	RemoveMaterialColors_Landtable(ADV00_1);
	RemoveMaterialColors_Landtable(ADV00_2);
	RemoveMaterialColors_Landtable(ADV00_3);
	RemoveMaterialColors_Landtable(ADV00_4);
	RemoveMaterialColors_Landtable(ADV00_5);
	ADV00_0->TexList = &texlist_advss00;
	ADV00_1->TexList = &texlist_advss01;
	ADV00_2->TexList = &texlist_advss02;
	ADV00_3->TexList = &texlist_advss03;
	ADV00_4->TexList = &texlist_advss04;
	ADV00_5->TexList = &texlist_advss05;
	LandTableArray[88] = ADV00_0;
	LandTableArray[89] = ADV00_1;
	LandTableArray[90] = ADV00_2;
	LandTableArray[91] = ADV00_3;
	LandTableArray[92] = ADV00_4;
	LandTableArray[93] = ADV00_5;
	LandTableArray[96] = ADV00_0;
	LandTableArray[97] = ADV00_1;
	LandTableArray[98] = ADV00_2;
	LandTableArray[99] = ADV00_3;
	LandTableArray[100] = ADV00_4;
	LandTableArray[101] = ADV00_5;
	LandTableArray[104] = ADV00_0;
	LandTableArray[105] = ADV00_1;
	LandTableArray[106] = ADV00_2;
	LandTableArray[107] = ADV00_3;
	LandTableArray[108] = ADV00_4;
	LandTableArray[109] = ADV00_5;
	*LANDTABLESS[0] = *ADV00_0;
	*LANDTABLESS[1] = *ADV00_1;
	*LANDTABLESS[2] = *ADV00_2;
	*LANDTABLESS[3] = *ADV00_3;
	*LANDTABLESS[4] = *ADV00_4;
	*LANDTABLESS[5] = *ADV00_5;
	ParseSSColFlags();
	ParseSSMaterials(false);
	PreviousTimeOfDay = -1;
	// This is done only once
	if (!ModelsLoaded_ADV00)
	{
		SSCar_Display_t = new Trampoline(0x6325D0, 0x6325D5, SSCar_Display_r);
		*(NJS_TEXLIST*)0x2AEE920 = texlist_sscar; // SSCAR 
		*(NJS_TEXLIST*)0x2AD9F58 = texlist_sstrain; // SS_TRAIN
		OBJ_SS_TEXLIST = texlist_obj_ss;
		WriteCall((void*)0x62EC3C, SSOceanCallback); // Render SS ocean (SADX water only)
		if (!SADXWater_StationSquare)
			WriteData<5>((char*)0x62EC52, 0x90u); // Don't call the ocean rendering function twice
		*ADV00_TEXLISTS[0] = texlist_advss00;
		*ADV00_TEXLISTS[1] = texlist_advss01;
		*ADV00_TEXLISTS[2] = texlist_advss02;
		*ADV00_TEXLISTS[3] = texlist_advss03;
		*ADV00_TEXLISTS[4] = texlist_advss04;
		*ADV00_TEXLISTS[5] = texlist_advss05;
		StationSquareCarTextureIDs[5] = 7; // Not an actual car surface texture but it's like that in SA1 too
		WriteCall((void*)0x63EECF, SouvenirShopDoor_Depth);
		WriteCall((void*)0x636DE9, RenderOfficeDoor);
		WriteCall((void*)0x636E99, RenderOfficeDoor);
		WriteCall((void*)0x636F0B, RenderOfficeDoor);
		WriteCall((void*)0x636E1A, RenderOfficeDoor_Child);
		WriteCall((void*)0x636E52, RenderOfficeDoor_Child);
		WriteCall((void*)0x636EC0, RenderOfficeDoor_Child);
		WriteCall((void*)0x636F32, RenderOfficeDoor_Child);
		WriteCall((void*)0x638B2E, RenderPoliceCarBarricade);
		WriteCall((void*)0x638B50, RenderPoliceCarBarricade);
		WriteCall((void*)0x632773, FixPoliceCar);
		WriteCall((void*)0x6F7EA4, EggWalkerCarsFix); // Fixed cars not showing up in the cutscene before Egg Walker
		WriteData((float*)0x634EB9, 0.601f); // Prevent Z fighting with SS NPC shadow when overlapping transparent stuff
		// Fix camera in Light Speed Shoes cutscene
		WriteData((float*)0x652F74, 800.0f); // X1
		WriteData((float*)0x652F79, -92.6f); // Y1
		WriteData((float*)0x6532BB, 509.9f); // X2
		WriteData((float*)0x6532B6, -89.4f); // Y2
		WriteData((float*)0x6532B1, 812.3f); // Z2
		WriteCall((void*)0x6304B6, DelaySettingTimeOfDay); // Prevent sudden lighting change in Sonic's story
		WriteCall((void*)0x652F4F, LSCutsceneRotationFix); // Fix Sonic's rotation after getting the Light Speed Shoes
		WriteData((float*)0x00652EA1, 487.0f); // LSD cutscene end camera X
		WriteData((float*)0x00652E9C, -77.0f); // LSD cutscene end camera Y
		WriteData((float*)0x00652E97, 837.0f); // LSD cutscene end camera Z
		//Fix materials
		for (int i = 0; i < 26; i++)
		{
			RemoveVertexColors_Object(MODEL_SS_PEOPLE_OBJECTS[i]);
		}
		RemoveVertexColors_Object((NJS_OBJECT*)0x2ABF65C); // OS1Solt
		RemoveVertexColors_Object((NJS_OBJECT*)0x2AB89D4); // OKomonoExit
		RemoveVertexColors_Object((NJS_OBJECT*)0x2AD702C); // OKeyBlock 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x2AD746C); // OKeyBlock 2
		RemoveVertexColors_Object((NJS_OBJECT*)0x2AD7674); // OKeyBlock 3
		AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x2DBE574); // Police car in first cutscene
		AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x2DBE588); // Police car in first cutscene
		AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x2DBE59C); // Police car in first cutscene
		WriteData<5>((void*)0x630ADA, 0x90); // Hotel door fix 1
		WriteData<5>((void*)0x630AE6, 0x90); // Hotel door fix 2
		WriteData<5>((void*)0x630B03, 0x90); // Hotel door fix 3
		WriteJump((void*)0x62EA30, CheckIfCameraIsInHotel_Lol); // Disable hotel lighting check
		WriteCall((void*)0x639B90, OMSakuFix); // OMSaku fence fadeout fix
		WriteCall((void*)0x639CD2, OMSakuFix); // OMSaku target fadeout fix
		// Material stuff
		((NJS_OBJECT*)0x2AB757C)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA; // Speed Highway elevator door
		((NJS_OBJECT*)0x2AB6E4C)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA; // Speed Highway elevator door
		ForceObjectSpecular_Object((NJS_OBJECT*)0x2AB7F74, false); // OHighEle (elevator in sewers)
		// Objects
		BurgerShopMan = LoadModel("system\\data\\ADV00\\Models\\001C9E28.sa1mdl");
		ForceLightType_Object(BurgerShopMan, 0, false);
		WriteCall((void*)0x63072B, BurgerShopManHook);
		*(NJS_MODEL_SADX*)0x2ACBB80 = *LoadModel("system\\data\\ADV00\\Models\\0017F588.sa1mdl")->basicdxmodel; // OPoolChair
		*(NJS_MODEL_SADX*)0x2AC95BC = *LoadModel("system\\data\\ADV00\\Models\\0017D568.sa1mdl")->basicdxmodel; // Fire hydrant
		WriteCall((void*)0x6372D4, OOfficeBarricade_Fix); // Fix office barricade rendering (same problem as OMSaku)
		WriteCall((void*)0x6372F8, OOfficeBarricade_Fix); // Fix office barricade rendering (same problem as OMSaku)
		WriteCall((void*)0x63731C, OOfficeBarricade_Fix); // Fix office barricade rendering (same problem as OMSaku)
		*(NJS_OBJECT*)0x2AD7ED4 = *LoadModel("system\\data\\ADV00\\Models\\00189DC0.sa1mdl"); // OOfficeBarricade
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x2AD7ED4)->child->basicdxmodel->mats[0]);  // OOfficeBarricade shadow
		*(NJS_OBJECT*)0x2AC9F10 = *LoadModel("system\\data\\ADV00\\Models\\0017DDE8.sa1mdl"); // OGaitou (street light)
		*(NJS_OBJECT*)0x2AEA9F8 = *LoadModel("system\\data\\ADV00\\Models\\00197228.sa1mdl"); // OS1Dnto
		((NJS_OBJECT*)0x2AEA9F8)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; // OS1Dnto doesn't ignore lighting on DC even though the model does
		*(NJS_OBJECT*)0x2AB2CCC = *LoadModel("system\\data\\ADV00\\Models\\001689C4.sa1mdl"); // Souvenir shop door
		*(NJS_OBJECT*)0x2AB57E4 = *LoadModel("system\\data\\ADV00\\Models\\0016B404.sa1mdl"); // OTwaDoor
		*(NJS_MOTION*)0x2AB5960 = _0016B4B4; // OTwaDoor motion
		*(NJS_OBJECT*)0x2AFE668 = *LoadModel("system\\data\\ADV00\\Models\\001A6DEC.sa1mdl"); // Casino decoration 1 (stars)
		*(NJS_OBJECT*)0x2B027D8 = *LoadModel("system\\data\\ADV00\\Models\\001AADA4.sa1mdl"); // Casino decoration 2 (wall)
		*(NJS_OBJECT*)0x2B04CF8 = *LoadModel("system\\data\\ADV00\\Models\\001AD220.sa1mdl"); // Casino decoration 3 (letters)
		ForceLevelSpecular_Object((NJS_OBJECT*)0x2B03A38, false); // Big Casino object
		ForceLevelSpecular_Object((NJS_OBJECT*)0x2B03320, false); // Big Casino object
		ForceLevelSpecular_Object((NJS_OBJECT*)0x2B00E14, true); // Big Casino object (wall)
		*(NJS_OBJECT*)0x2AC8AEC = *LoadModel("system\\data\\ADV00\\Models\\0017CD14.sa1mdl"); // OStDoor
		*(NJS_OBJECT*)0x2AB146C = *LoadModel("system\\data\\ADV00\\Models\\001671B8.sa1mdl"); // Burger shop door
		*(NJS_OBJECT*)0x2AD4EA4 = *LoadModel("system\\data\\ADV00\\Models\\00186E88.sa1mdl"); // Hidden door 1
		*(NJS_OBJECT*)0x2AD4CD4 = *LoadModel("system\\data\\ADV00\\Models\\00186CC4.sa1mdl"); // Hidden door 2
		*(NJS_OBJECT*)0x2AEE7B0 = *LoadModel("system\\data\\ADV00\\Models\\0019AF04.sa1mdl"); // Boat
		*(NJS_OBJECT*)0x2AAB0E4 = *LoadModel("system\\data\\ADV00\\Models\\00164444.sa1mdl"); // OHotelFront 1
		*(NJS_OBJECT*)0x2AAE0BC = *LoadModel("system\\data\\ADV00\\Models\\00164444.sa1mdl"); // OHotelFront 2 (duplicate?)
		*(NJS_OBJECT*)0x2ABDF0C = *LoadModel("system\\data\\ADV00\\Models\\00172BD4.sa1mdl"); // Box in the sewers
		*(NJS_OBJECT*)0x2AF1974 = *LoadModel("system\\data\\ADV00\\Models\\0019CBD8.sa1mdl"); // Red Car
		*(NJS_OBJECT*)0x2AF8400 = *LoadModel("system\\data\\ADV00\\Models\\001A17C4.sa1mdl"); // Blue Car
		*(NJS_OBJECT*)0x2AFBA64 = *LoadModel("system\\data\\ADV00\\Models\\001A4268.sa1mdl"); // Taxi
		*(NJS_OBJECT*)0x2AD362C = *LoadModel("system\\data\\ADV00\\Models\\00185A20.sa1mdl"); // OWakusei
		WriteCall((void*)0x6366C1, BigPuzzleFix);
		WriteCall((void*)0x63951A, OWakuseiFix);
		WriteCall((void*)0x639584, OWakuseiFix);
		*(NJS_OBJECT*)0x2AB6900 = *LoadModel("system\\data\\ADV00\\Models\\0016C3FC.sa1mdl"); // Twinkle Park elevator
		*(NJS_OBJECT*)0x2AD14C8 = *LoadModel("system\\data\\ADV00\\Models\\00183B8C.sa1mdl"); // OMSaku (Gamma's target)
		*(NJS_OBJECT*)0x2AD484C = *LoadModel("system\\data\\ADV00\\Models\\0018684C.sa1mdl"); // Ice Key
		// Event helicopter (set up exactly like the Chaos 0 helicopter so lots of copy-paste here)
		((NJS_ACTION*)0x2DBD864)->object = LoadModel("system\\data\\Other\\00011208.sa1mdl");
		// UV-less stuff fix
		((NJS_ACTION*)0x2DBD864)->object->child->child->child->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		// Add white diffuse on opaque things (have to use a different function because it "forgets" the light type
		AddWhiteDiffuseMaterial_Specular3(&((NJS_ACTION*)0x2DBD864)->object->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial_Specular3(&((NJS_ACTION*)0x2DBD864)->object->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[2]);
		// Disable all transparent bits in the original model except SSPD
		HideMesh_Object(((NJS_ACTION*)0x2DBD864)->object->child->sibling->sibling->sibling->sibling->child, 0);
		((NJS_ACTION*)0x2DBD864)->object->child->sibling->sibling->sibling->sibling->child->child->evalflags |= NJD_EVAL_HIDE;
		// Remove transparency in the part the light is coming from, because it isn't a transparent texture and it uses regular blending
		((NJS_ACTION*)0x2DBD864)->object->child->sibling->sibling->sibling->sibling->child->child->sibling->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		// Light1 is the metal cover of the thing the light is supposed to be coming from
		EVHelicopterLight1 = LoadModel("system\\data\\Other\\00011208.sa1mdl");
		HideEntireObject(EVHelicopterLight1);
		EVHelicopterLight1->child->sibling->sibling->sibling->sibling->child->evalflags &= ~NJD_EVAL_HIDE; // Unhide first transparent bit in mesh 1
		HideMesh_Object(EVHelicopterLight1->child->sibling->sibling->sibling->sibling->child, 1, 2); // Hide opaque bits in mesh 1
		// Light2 is the actual light
		EVHelicopterLight2 = LoadModel("system\\data\\Other\\00011208.sa1mdl");
		HideEntireObject(EVHelicopterLight2);
		EVHelicopterLight2->child->sibling->sibling->sibling->sibling->child->child->evalflags &= ~NJD_EVAL_HIDE; // Unhide the light
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x2DBD6D0)->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x2DBD6D0)->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[2]);
		*(NJS_OBJECT*)0x2AE8674 = *LoadModel("system\\data\\ADV00\\Models\\00195DC0.sa1mdl"); // Train
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x2AE8674)->child->sibling->sibling->sibling->basicdxmodel->mats[9]);
		// Police car stuff
		*(NJS_OBJECT*)0x2AF4FC0 = *LoadModel("system\\data\\ADV00\\Models\\0019F390.sa1mdl"); // Police
		HideMesh_Object(((NJS_OBJECT*)0x2AF4FC0), 9, 10); // Hide lights
		PoliceCarModel_LightsOnly = LoadModel("system\\data\\ADV00\\Models\\0019F390.sa1mdl");
		HideMesh_Object(PoliceCarModel_LightsOnly, 0, 1, 2, 3, 4, 5, 6, 7, 8, 11, 12, 13);
		PoliceCarModel_LightsOnly->child->evalflags |= NJD_EVAL_HIDE;
		PoliceCarModel_LightsOnly->child->sibling->evalflags |= NJD_EVAL_HIDE;
		PoliceCarModel_LightsOnly->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		PoliceCarModel_LightsOnly->child->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		// Parasol stuff
		Parasol_1 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl");
		Parasol_2 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl");
		Parasol_3 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl");
		Parasol_4 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl");
		// Main model
		HideMesh_Object(Parasol_1, 1, 2, 5, 6, 7, 8, 11);
		// Chair transparency
		HideMesh_Object(Parasol_2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14);
		// Parasol
		HideMesh_Object(Parasol_3, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14);
		// Glass
		HideMesh_Object(Parasol_4, 0, 1, 2, 3, 4, 9, 10, 11, 12, 13, 14);
		SwapMeshsets(Parasol_4, 8, 6); // Move heart after glass
		SwapMeshsets(Parasol_4, 7, 8); // Move lemon after glass
		WriteCall((void*)0x63A6A4, RenderParasol); //Parasol
		// Fog data
		for (int i = 0; i < 3; i++)
		{
			StationSquare1Fog[i].Toggle = 1;
			StationSquare2Fog[i].Toggle = 1;
			StationSquare3Fog[i].Toggle = 1;
			StationSquare4Fog[i].Toggle = 1;
			StationSquare5Fog[i].Toggle = 1;
			StationSquare6Fog[i].Toggle = 1;
			StationSquare1Fog[i].Distance = -12000.0f;
			StationSquare2Fog[i].Distance = -12000.0f;
			StationSquare3Fog[i].Distance = -12000.0f;
			StationSquare4Fog[i].Distance = -12000.0f;
			StationSquare5Fog[i].Distance = -12000.0f;
			StationSquare6Fog[i].Distance = -12000.0f;
			StationSquare1Fog[i].Layer = -12000.0f;
			StationSquare2Fog[i].Layer = -12000.0f;
			StationSquare3Fog[i].Layer = -12000.0f;
			StationSquare4Fog[i].Layer = -12000.0f;
			StationSquare5Fog[i].Layer = -12000.0f;
			StationSquare6Fog[i].Layer = -12000.0f;
			StationSquare6DrawDist[i].Maximum = -600.0f;
		}
		ModelsLoaded_ADV00 = true;
	}
}

void ADV00_OnFrame()
{
	if (CurrentLevel == LevelIDs_StationSquare)
	{
		// Switch textures/lighting depending on time of day
		if (ADV00_0_Info && ADV00_1_Info && ADV00_3_Info && ADV00_4_Info && PreviousTimeOfDay != GetTimeOfDay())
		{
			SwitchLighting_TimeOfDay(0);
			SwitchLighting_TimeOfDay(1);
			SwitchLighting_TimeOfDay(3);
			SwitchLighting_TimeOfDay(4);
			PreviousTimeOfDay = GetTimeOfDay();
		}
		// Delayed time of day for Sonic's cutscene
		{
			if (CurrentAct != 2 && DelayedTimeOfDay != -1)
			{
				SetTimeOfDay(DelayedTimeOfDay);
				DelayedTimeOfDay = -1;
			}
		}
	}
}