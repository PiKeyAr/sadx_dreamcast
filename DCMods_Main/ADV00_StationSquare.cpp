#include "stdafx.h"
#include "ADV00_Motions.h"

//TODO: Very slight transparency issue with Casino door
//TODO: OS1Dnto shouldn't ignore lighting (use object specular) - this'll have to wait until soft particles are implemented in sadx-dc-lighting

NJS_TEXNAME textures_sscar[22];
NJS_TEXNAME textures_sstrain[31];
NJS_TEXNAME textures_obj_ss[177];

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

int SS03SeaModel = -1;
int SS04SeaModel = -1;
NJS_OBJECT* BurgerShopMan = nullptr;
NJS_OBJECT* PoliceCarModel_LightsOnly = nullptr;
NJS_OBJECT* Parasol_1 = nullptr;
NJS_OBJECT* Parasol_2 = nullptr;
NJS_OBJECT* Parasol_3 = nullptr;
NJS_OBJECT* Parasol_4 = nullptr;
NJS_OBJECT* EVHelicopterLight1 = nullptr;
NJS_OBJECT* EVHelicopterLight2 = nullptr;

int SS03Cols[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1  };

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

void __cdecl RenderStationSquareOcean(OceanData *x)
{
	if (CurrentAct == 3 && SS03SeaModel != -1)
	{
		if (!DroppedFrames)
		{
			njSetTexture(&texlist_advss03);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			Direct3D_SetZFunc(1u);
			Direct3D_EnableZWrite(0);
			ProcessModelNode_AB_Wrapper(LANDTABLESS[3]->Col[SS03SeaModel].Model, 1.0f);
			Direct3D_SetZFunc(1u);
			Direct3D_EnableZWrite(1u);
			njPopMatrix(1u);
		}
	}
	if (CurrentAct == 4 && SS04SeaModel != -1)
	{
		if (!DroppedFrames)
		{
			njSetTexture(&texlist_advss04);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_AB_Wrapper(LANDTABLESS[4]->Col[SS04SeaModel].Model, 1.0f);
			njPopMatrix(1u);
		}
	}
}

void AddSS03Cols(int colnumber)
{
	for (int i = 0; i < LengthOfArray(SS03Cols); i++)
	{
		if (SS03Cols[i] == colnumber) return;
		else if (SS03Cols[i] == -1)
		{
			SS03Cols[i] = colnumber;
			//PrintDebug("Added COl: %d\n", colnumber);
			return;
		}
	}
}

void RenderSS03Cols_1(OceanData *data)
{
	if (CurrentAct == 3 && ADV00_3_Info)
	{
		if (!DroppedFrames)
		{
			njSetTexture(&texlist_advss03);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			for (int i = 0; i < LengthOfArray(SS03Cols); i++)
			{
				if (SS03Cols[i] != -1)
				{
					if (!(LANDTABLESS[3]->Col[SS03Cols[i]].Flags & 0x1000000)) ProcessModelNode_AB_Wrapper(LANDTABLESS[3]->Col[SS03Cols[i]].Model, 3.0f);
				}
			}
			njPopMatrix(1u);
		}
	}
}

void RenderSS03Cols_2()
{
	if (CurrentAct == 3 && ADV00_3_Info)
	{
		if (!DroppedFrames)
		{
			njSetTexture(&texlist_advss03);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			for (int i = 0; i < LengthOfArray(SS03Cols); i++)
			{
				if (SS03Cols[i] != -1)
				{
					//Glass, Twinkle top etc.
					if (LANDTABLESS[3]->Col[SS03Cols[i]].Flags & 0x1000000 && LANDTABLESS[3]->Col[SS03Cols[i]].Flags != 0xA9040000)
					{
						DrawQueueDepthBias = 5000.0f;
						ProcessModelNode(LANDTABLESS[3]->Col[SS03Cols[i]].Model, (QueuedModelFlagsB)0, 1.0f);
						DrawQueueDepthBias = 0.0f;
					}
					//Shadow thing in the sewers
					else if (LANDTABLESS[3]->Col[SS03Cols[i]].Flags == 0xA9040000)
					{
						DrawQueueDepthBias = -12000.0f;
						ProcessModelNode(LANDTABLESS[3]->Col[SS03Cols[i]].Model, (QueuedModelFlagsB)0, 1.0f);
						DrawQueueDepthBias = 0.0f;
					}
				}
			}
			njPopMatrix(1u);
		}
	}
}


void SSOceanCallback(void(__cdecl *function)(OceanData *), OceanData *data, float depth, QueuedModelFlagsB queueflags)
{
	if (SADXWater_StationSquare) DrawModelCallback_QueueOceanData(StationSquare_OceanDraw, data, depth, queueflags);
	else
	{
		DrawModelCallback_QueueOceanData(RenderStationSquareOcean, data, depth, queueflags);
	}
	DrawModelCallback_QueueOceanData(RenderSS03Cols_1, data, -6000.0f, (QueuedModelFlagsB)0);
	RenderSS03Cols_2();
}

void FixPoliceCar(NJS_ACTION *a1, float a2, int a3)
{
	njAction_DontQueue(a1, a2, a3);
	if (a1->object == ((NJS_OBJECT*)0x2AF4FC0))
	{
		DrawQueueDepthBias = 1000.0f;
		ProcessModelNode(PoliceCarModel_LightsOnly, (QueuedModelFlagsB)0, 1.0f);
		DrawQueueDepthBias = 0.0f;
	}
}

void RenderPoliceCarBarricade(NJS_OBJECT *obj, float scale)
{
	ProcessModelNode_AB_Wrapper(obj, scale);
	DrawQueueDepthBias = 1000.0f;
	ProcessModelNode(PoliceCarModel_LightsOnly, (QueuedModelFlagsB)0, scale);
	DrawQueueDepthBias = 0.0f;
}

void RenderOfficeDoor(NJS_MODEL_SADX *a1, float scale)
{
	DrawQueueDepthBias = -2000.0f;
	DrawModel_Queue(a1, QueuedModelFlagsB_EnableZWrite);
}

void RenderOfficeDoor_Child(NJS_MODEL_SADX *a1, float scale)
{
	DrawQueueDepthBias = -3000.0f;
	DrawModel_Queue(a1, QueuedModelFlagsB_EnableZWrite);
}

static void SSCar_Display_r(ObjectMaster* a1);
static Trampoline SSCar_Display_t(0x6325D0, 0x6325D5, SSCar_Display_r);
static void __cdecl SSCar_Display_r(ObjectMaster* a1)
{
	auto original = reinterpret_cast<decltype(SSCar_Display_r)*>(SSCar_Display_t.Target());
	EntityData2* Data2 = (EntityData2*)a1->Data2;
	//Animation frame fix
	if (EnableStationSquare && Data2->field_38 > 7) Data2->field_38 = 0;
	original(a1);
}

void RenderParasol(NJS_MODEL_SADX *a1, int a2, float a3)
{
	ProcessModelNode(Parasol_1, QueuedModelFlagsB_EnableZWrite, 1.0f); //Main model
	DrawQueueDepthBias = 1000.0f;
	ProcessModelNode(Parasol_2, QueuedModelFlagsB_EnableZWrite, 1.0f); //Chair transparency
	DrawQueueDepthBias = 1100.0f;
	ProcessModelNode(Parasol_4, QueuedModelFlagsB_EnableZWrite, 1.0f); //Glass
	DrawQueueDepthBias = 1200.0f;
	ProcessModelNode(Parasol_3, QueuedModelFlagsB_EnableZWrite, 1.0f); //Umbrella
	DrawQueueDepthBias = 0.0f;
}

void LSCutsceneRotationFix()
{
	DisableControl();
	EntityData1Ptrs[0]->Rotation.x = 0;
	EntityData1Ptrs[0]->Rotation.z = 0;
	EntityData1Ptrs[0]->Rotation.y = 49072;
}

void DelaySettingTimeOfDay(Sint8 time)
{
	DelayedTimeOfDay = time;
}

void OMSakuFix(NJS_OBJECT *a1, float scale)
{
	ProcessModelNode(a1, QueuedModelFlagsB_EnableZWrite, scale);
}

void OOfficeBarricade_Fix(NJS_MODEL_SADX* a1, float scale)
{
	DrawModel_Queue(a1, QueuedModelFlagsB_EnableZWrite);
}

void __fastcall EggWalkerCarsFix(NJS_MATRIX_PTR m, const NJS_VECTOR *v)
{
	njTranslate(0, v->x, -2.65f, v->z);
}

void BigPuzzleFix(NJS_OBJECT* obj, float scale)
{
	ProcessModelNode(obj, QueuedModelFlagsB_SomeTextureThing, 1.0f);
}

void OWakuseiFix(NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float scale)
{
	if (EV_MainThread_ptr) DrawQueueDepthBias = 9000.0f;
	DrawModel_QueueVisible(model, blend, scale);
	if (EV_MainThread_ptr) DrawQueueDepthBias = 0.0f;
}

void DrawEventHelicopter(NJS_ACTION *a1, float a2, int a3)
{
	NJS_ACTION Light1Action = { nullptr, nullptr };
	NJS_ACTION Light2Action = { nullptr, nullptr };
	Light1Action.motion = a1->motion;
	Light2Action.motion = a1->motion;
	Light1Action.object = EVHelicopterLight1;
	Light2Action.object = EVHelicopterLight2;
	//Draw the helicopter
	njAction_Queue_407BB0_2(a1, a2, 1, 0);
	//Draw the light cover
	njAction_Queue_407BB0_2(&Light1Action, a2, 1, 1.0f);
	//Draw the light
	njAction_Queue_407BB0_2(&Light2Action, a2, a3, 1.0f);
}

void SouvenirShopDoor_Depth(NJS_ACTION* a1, float a2, int a3, float a4)
{
	DrawQueueDepthBias = 3000.0f;
	njAction_Queue_407BB0_2(a1, a2, a3, a4);
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
	//Sewers
	landtable = LANDTABLESS[2];
	if (SADXWater_StationSquare)
	{
		for (int j = 0; j < landtable->COLCount; j++)
		{
			colflags = landtable->Col[j].Flags;
			if ((colflags & ColFlags_Visible) && (colflags & ColFlags_Water)) landtable->Col[j].Model->basicdxmodel->mats[0].diffuse.argb.a = 0xD2; //Make the water less transparent
		}
	}
	//Main area
	landtable = LANDTABLESS[3];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (!SADXWater_StationSquare)
		{
			if (colflags == 0x88000000)
			{
				SS03SeaModel = j;
				landtable->Col[j].Flags &= ~ColFlags_Visible;
			}
		}
		else
		{
			if (colflags == 0x88000000) landtable->Col[j].Flags &= ~ColFlags_Visible; //Hide SA1 sea
			if (colflags == 0) landtable->Col[j].Flags = 0x80000000; //Show SADX sea bottom
			if ((colflags & ColFlags_Visible) && (colflags & ColFlags_Water)) landtable->Col[j].Flags = 0x00000002; //Hide sewers water
		}
		//Add sea waves
		if (colflags == 0x88040000 || colflags == 0x89000000)
		{
			landtable->Col[j].Flags &= ~ColFlags_Visible;
			AddSS03Cols(j);
		}
	}
	//Hotel area
	landtable = LANDTABLESS[4];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (!SADXWater_StationSquare)
		{
			if (colflags & 0x8000000) SS04SeaModel = j;
		}
		else
		{
			if (colflags == 0) landtable->Col[j].Flags = 0x80000000; //Show SADX sea bottom
			if ((colflags & ColFlags_Visible) && (colflags & ColFlags_Water)) landtable->Col[j].Flags &= ~ColFlags_Visible; //Hide SA1 pool water
		}
	}
}

void ParseSSMaterials(bool remove)
{
	Uint32 materialflags;
	NJS_MATERIAL *material;
	LandTable *landtable;
	//Casino
	landtable = LANDTABLESS[1];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				if (remove) RemoveWhiteDiffuseMaterial(material);
				else AddWhiteDiffuseMaterial(material);
			}
		}
	}
	//Sewers
	landtable = LANDTABLESS[2];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = material->attrflags;
			//White diffuse night
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				if (remove) RemoveWhiteDiffuseMaterial(material);
				else AddWhiteDiffuseMaterial(material);
			}
			//Texanim 1
			if (material->attr_texId >= 46 && material->attr_texId <= 55)
			{
				AddTextureAnimation(26, 2, material, false, 4, 46, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
	//Main area
	landtable = LANDTABLESS[3];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = material->attrflags;
			//White diffuse night
			if ((materialflags & NJD_CUSTOMFLAG_NIGHT) && (materialflags & NJD_CUSTOMFLAG_WHITE))
			{
				if (remove) RemoveWhiteDiffuseNightMaterial(material);
				else AddWhiteDiffuseNightMaterial(material);
			}
			//Texanim 1
			if (material->attr_texId == 183)
			{
				AddTextureAnimation(26, 3, material, true, 4, 183, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, -1);
			}
			//Texanim 2
			if (material->attr_texId == 29)
			{
				AddTextureAnimation(26, 3, material, true, 4, 29, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, -1);
			}
			//Texanim 3
			if (material->attr_texId == 142)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(26, 3, material, true, 4, 142, 219, 220, 221, 222, 223, 224, 225, 226, 227, -1, -1, -1, -1, -1, -1);
			}
		}
	}
	//Hotel and pool
	landtable = LANDTABLESS[4];
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//White diffuse night
			if ((materialflags & NJD_CUSTOMFLAG_NIGHT) && (materialflags & NJD_CUSTOMFLAG_WHITE))
			{
				if (remove) RemoveWhiteDiffuseNightMaterial(material);
				else AddWhiteDiffuseNightMaterial(material);
			}
			//Texanim 1
			if (material->attr_texId >= 101 && material->attr_texId <= 114)
			{
				AddTextureAnimation(26, 4, material, false, 4, 101, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			//Texanim 2
			if (material->attr_texId >= 87 && material->attr_texId <= 100)
			{
				AddTextureAnimation(26, 4, material, false, 4, 87, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			//Texanim 3
			if (material->attr_texId == 65)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(26, 4, material, true, 4, 65, 78, 79, 80, 81, 82, 83, 84, 85, 86, -1, 0, 0, 0, 0, 0);
			}
		}
	}
}

void SwitchLighting_TimeOfDay(int act)
{
	Sint8 TimeOfDay = GetTimeOfDay();
	Uint32 materialflags;
	int texid;
	LandTable *landtable;
	if (act == 0) landtable = LANDTABLESS[0];
	else if (act == 1) landtable = LANDTABLESS[1];
	else if (act == 2) landtable = LANDTABLESS[2];
	else if (act == 3) landtable = LANDTABLESS[3];
	else if (act == 4) landtable = LANDTABLESS[4];
	else landtable = LANDTABLESS[5];
	//OGaitou "fix"
	if (TimeOfDay != 2) ((NJS_OBJECT*)0x2AC9F10)->child->sibling->basicdxmodel->mats[0].attrflags = 0x9421A500;
	else ((NJS_OBJECT*)0x2AC9F10)->child->sibling->basicdxmodel->mats[0].attrflags = 0x9621A500;
	//Add or remove "ignore light"
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			texid = landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId;
			if (materialflags & NJD_CUSTOMFLAG_NIGHT && !(materialflags & NJD_CUSTOMFLAG_WHITE))
			{
				if (TimeOfDay == 2)
				{
					if (!(materialflags & NJD_FLAG_IGNORE_LIGHT)) landtable->Col[j].Model->basicdxmodel->mats[k].attrflags |= NJD_FLAG_IGNORE_LIGHT;
				}
				else
				{
					if (materialflags & NJD_FLAG_IGNORE_LIGHT) landtable->Col[j].Model->basicdxmodel->mats[k].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
				}
			}
			//Day textures
			if (TimeOfDay == 0)
			{
				if (act == 0)
				{
					if (texid == 207 || texid == 206) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 124;
					if (texid == 209 || texid == 208) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 145;
					if (texid == 211 || texid == 210) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 69;
					if (texid == 213 || texid == 212) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 184;
					if (texid == 215 || texid == 214) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 36;
					if (texid == 217 || texid == 216) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 39;
					if (texid == 219 || texid == 218) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 185;
				}
				if (act == 1)
				{
					if (texid == 265 || texid == 264) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 240;
				}
				if (act == 3)
				{
					if ((landtable->Col[j].Model->pos[1] == 45) && (texid == 259 || texid == 258)) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 52;
					if (texid == 258 || texid == 259) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 60;
					if (texid == 262 || texid == 263) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 89;
					if (texid == 260 || texid == 261) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 94;
					if (texid == 256 || texid == 257) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 165;
				}
				if (act == 4)
				{
					if (texid == 116 || texid == 118) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 69;
					if (texid == 115 || texid == 117) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 70;
				}
			}
			//Evening textures
			else if (TimeOfDay == 1)
			{
				if (act == 0)
				{
					if (texid == 124 || texid == 207) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 206;
					if (texid == 145 || texid == 209) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 208;
					if (texid == 69 || texid == 211) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 210;
					if (texid == 184 || texid == 213) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 212;
					if (texid == 36 || texid == 215) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 214;
					if (texid == 39 || texid == 217) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 216;
					if (texid == 185 || texid == 219) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 218;
				}
				if (act == 1)
				{
					if (texid == 240 || texid == 265) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 264;
				}
				if (act == 3)
				{
					if ((landtable->Col[j].Model->pos[1] == 45) && (texid == 52 || texid == 259)) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 258;
					if (texid == 60 || texid == 259) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 258;
					if (texid == 89 || texid == 263) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 262;
					if (texid == 94 || texid == 261) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 260;
					if (texid == 165 || texid == 257) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 256;
				}
				if (act == 4)
				{
					if (texid == 69 || texid == 118) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 116;
					if (texid == 70 || texid == 117) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 115;
				}
			}
			//Night textures
			else
			{
				if (act == 0)
				{
					if (texid == 124 || texid == 206) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 207;
					if (texid == 145 || texid == 208) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 209;
					if (texid == 69 || texid == 210) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 211;
					if (texid == 184 || texid == 212) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 213;
					if (texid == 36 || texid == 214) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 215;
					if (texid == 39 || texid == 216) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 217;
					if (texid == 185 || texid == 218) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 219;
				}
				if (act == 1)
				{
					if (texid == 240 || texid == 264) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 265;
				}
				if (act == 3)
				{
					if ((landtable->Col[j].Model->pos[1] == 45) && (texid == 52 || texid == 258)) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 259;
					if (texid == 60 || texid == 258) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 259;
					if (texid == 89 || texid == 262) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 263;
					if (texid == 94 || texid == 260) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 261;
					if (texid == 165 || texid == 256) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 257;
				}
				if (act == 4)
				{
					if (texid == 69 || texid == 116) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 118;
					if (texid == 70 || texid == 115) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 117;
				}
			}
		}
	}
}

void UnloadLevelFiles_ADV00()
{
	for (int i = 0; i < LengthOfArray(SS03Cols); i++)
	{
		SS03Cols[i] = -1;
	}
	ParseSSMaterials(true);
	SS03SeaModel = -1;
	SS04SeaModel = -1;
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
	//This is done every time the function is called
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
	LANDTABLESS[0] = ADV00_0;
	LANDTABLESS[1] = ADV00_1;
	LANDTABLESS[2] = ADV00_2;
	LANDTABLESS[3] = ADV00_3;
	LANDTABLESS[4] = ADV00_4;
	LANDTABLESS[5] = ADV00_5;
	ParseSSColFlags();
	ParseSSMaterials(false);
	PreviousTimeOfDay = -1;
	//This is done only once
	if (!ModelsLoaded_ADV00)
	{
		ResizeTextureList((NJS_TEXLIST*)0x2AEE920, textures_sscar); //SSCAR 
		ResizeTextureList((NJS_TEXLIST*)0x2AD9F58, textures_sstrain); //SS_TRAIN
		ResizeTextureList(&OBJ_SS_TEXLIST, textures_obj_ss);
		WriteCall((void*)0x62EC3C, SSOceanCallback); //Render SS ocean separately (both normal and SADX water)
		if (!SADXWater_StationSquare) 
		{
			WriteData<5>((char*)0x62EC52, 0x90u); //Don't call the ocean rendering function twice
		}
		ADV00_TEXLISTS[0] = &texlist_advss00;
		ADV00_TEXLISTS[1] = &texlist_advss01;
		ADV00_TEXLISTS[2] = &texlist_advss02;
		ADV00_TEXLISTS[3] = &texlist_advss03;
		ADV00_TEXLISTS[4] = &texlist_advss04;
		ADV00_TEXLISTS[5] = &texlist_advss05;
		StationSquareCarTextureIDs[5] = 7; //Not an actual car surface texture but it's like that in SA1 too
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
		WriteCall((void*)0x6F7EA4, EggWalkerCarsFix); //Fixed cars not showing up in the cutscene before Egg Walker
		WriteData((float*)0x634EB9, 0.601f); //Prevent Z fighting with SS NPC shadow when overlapping transparent stuff
		//Fix camera in Light Speed Shoes cutscene
		WriteData((float*)0x652F74, 800.0f); //X1
		WriteData((float*)0x652F79, -92.6f); //Y1
		WriteData((float*)0x6532BB, 509.9f); //X2
		WriteData((float*)0x6532B6, -89.4f); //Y2
		WriteData((float*)0x6532B1, 812.3f); //Z2
		WriteCall((void*)0x6304B6, DelaySettingTimeOfDay); //Prevent sudden lighting change in Sonic's story
		WriteCall((void*)0x652F4F, LSCutsceneRotationFix); //Fix Sonic's rotation after getting the Light Speed Shoes
		WriteData((float*)0x00652EA1, 487.0f); //LSD cutscene end camera X
		WriteData((float*)0x00652E9C, -77.0f); //LSD cutscene end camera Y
		WriteData((float*)0x00652E97, 837.0f); //LSD cutscene end camera Z
		//Fix materials
		for (int i = 0; i < 26; i++)
		{
			RemoveVertexColors_Object(MODEL_SS_PEOPLE_OBJECTS[i]);
		}
		RemoveVertexColors_Object((NJS_OBJECT*)0x2ABF65C); //OS1Solt
		RemoveVertexColors_Object((NJS_OBJECT*)0x2AB89D4); //OKomonoExit
		RemoveVertexColors_Object((NJS_OBJECT*)0x2AD702C); //OKeyBlock 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x2AD746C); //OKeyBlock 2
		RemoveVertexColors_Object((NJS_OBJECT*)0x2AD7674); //OKeyBlock 3
		AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x2DBE574); //Police car in first cutscene
		AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x2DBE588); //Police car in first cutscene
		AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x2DBE59C); //Police car in first cutscene
		WriteData<5>((void*)0x630ADA, 0x90); //Hotel door fix 1
		WriteData<5>((void*)0x630AE6, 0x90); //Hotel door fix 2
		WriteData<5>((void*)0x630B03, 0x90); //Hotel door fix 3
		WriteJump((void*)0x62EA30, CheckIfCameraIsInHotel_Lol); //Disable hotel lighting check
		WriteCall((void*)0x639B90, OMSakuFix); //OMSaku fence fadeout fix
		WriteCall((void*)0x639CD2, OMSakuFix); //OMSaku target fadeout fix
		//Material stuff
		((NJS_OBJECT*)0x2AB757C)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA; //Speed Highway elevator door
		((NJS_OBJECT*)0x2AB6E4C)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA; //Speed Highway elevator door
		ForceObjectSpecular_Object((NJS_OBJECT*)0x2AB7F74, false); //OHighEle (elevator in sewers)
		//Objects
		BurgerShopMan = LoadModel("system\\data\\ADV00\\Models\\001C9E28.sa1mdl", false);
		ForceLightType_Object(BurgerShopMan, 0, false);
		WriteCall((void*)0x63072B, BurgerShopManHook);
		*(NJS_MODEL_SADX*)0x2ACBB80 = *LoadModel("system\\data\\ADV00\\Models\\0017F588.sa1mdl", false)->basicdxmodel; //OPoolChair
		*(NJS_MODEL_SADX*)0x2AC95BC = *LoadModel("system\\data\\ADV00\\Models\\0017D568.sa1mdl", false)->basicdxmodel; //Fire hydrant
		WriteCall((void*)0x6372D4, OOfficeBarricade_Fix); //Fix office barricade rendering (same problem as OMSaku)
		WriteCall((void*)0x6372F8, OOfficeBarricade_Fix); //Fix office barricade rendering (same problem as OMSaku)
		WriteCall((void*)0x63731C, OOfficeBarricade_Fix); //Fix office barricade rendering (same problem as OMSaku)
		*(NJS_OBJECT*)0x2AD7ED4 = *LoadModel("system\\data\\ADV00\\Models\\00189DC0.sa1mdl", false); //OOfficeBarricade
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x2AD7ED4)->child->basicdxmodel->mats[0]);  //OOfficeBarricade shadow
		*(NJS_OBJECT*)0x2AC9F10 = *LoadModel("system\\data\\ADV00\\Models\\0017DDE8.sa1mdl", false); //OGaitou (street light)
		*(NJS_OBJECT*)0x2AEA9F8 = *LoadModel("system\\data\\ADV00\\Models\\00197228.sa1mdl", false); //OS1Dnto
		((NJS_OBJECT*)0x2AEA9F8)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //OS1Dnto doesn't ignore lighting on DC even though the model does
		*(NJS_OBJECT*)0x2AB2CCC = *LoadModel("system\\data\\ADV00\\Models\\001689C4.sa1mdl", true); //Souvenir shop door
		*(NJS_OBJECT*)0x2AB57E4 = *LoadModel("system\\data\\ADV00\\Models\\0016B404.sa1mdl", false); //OTwaDoor
		*(NJS_MOTION*)0x2AB5960 = _0016B4B4; //OTwaDoor motion
		*(NJS_OBJECT*)0x2AFE668 = *LoadModel("system\\data\\ADV00\\Models\\001A6DEC.sa1mdl", false); //Casino decoration 1 (stars)
		*(NJS_OBJECT*)0x2B027D8 = *LoadModel("system\\data\\ADV00\\Models\\001AADA4.sa1mdl", false); //Casino decoration 2 (wall)
		*(NJS_OBJECT*)0x2B04CF8 = *LoadModel("system\\data\\ADV00\\Models\\001AD220.sa1mdl", false); //Casino decoration 3 (letters)
		ForceLevelSpecular_Object((NJS_OBJECT*)0x2B03A38, false); //Big Casino object
		ForceLevelSpecular_Object((NJS_OBJECT*)0x2B03320, false); //Big Casino object
		ForceLevelSpecular_Object((NJS_OBJECT*)0x2B00E14, true); //Big Casino object (wall)
		*(NJS_OBJECT*)0x2AC8AEC = *LoadModel("system\\data\\ADV00\\Models\\0017CD14.sa1mdl", false); //OStDoor
		*(NJS_OBJECT*)0x2AB146C = *LoadModel("system\\data\\ADV00\\Models\\001671B8.sa1mdl", false); //Burger shop door
		*(NJS_OBJECT*)0x2AD4EA4 = *LoadModel("system\\data\\ADV00\\Models\\00186E88.sa1mdl", false); //Hidden door 1
		*(NJS_OBJECT*)0x2AD4CD4 = *LoadModel("system\\data\\ADV00\\Models\\00186CC4.sa1mdl", false); //Hidden door 2
		*(NJS_OBJECT*)0x2AEE7B0 = *LoadModel("system\\data\\ADV00\\Models\\0019AF04.sa1mdl", false); //Boat
		*(NJS_OBJECT*)0x2AAB0E4 = *LoadModel("system\\data\\ADV00\\Models\\00164444.sa1mdl", false); //OHotelFront 1
		*(NJS_OBJECT*)0x2AAE0BC = *LoadModel("system\\data\\ADV00\\Models\\00164444.sa1mdl", false); //OHotelFront 2 (duplicate?)
		*(NJS_OBJECT*)0x2ABDF0C = *LoadModel("system\\data\\ADV00\\Models\\00172BD4.sa1mdl", true); //Box in the sewers
		*(NJS_OBJECT*)0x2AF1974 = *LoadModel("system\\data\\ADV00\\Models\\0019CBD8.sa1mdl", false); //Red Car
		*(NJS_OBJECT*)0x2AF8400 = *LoadModel("system\\data\\ADV00\\Models\\001A17C4.sa1mdl", false); //Blue Car
		*(NJS_OBJECT*)0x2AFBA64 = *LoadModel("system\\data\\ADV00\\Models\\001A4268.sa1mdl", false); //Taxi
		*(NJS_OBJECT*)0x2AD362C = *LoadModel("system\\data\\ADV00\\Models\\00185A20.sa1mdl", false); //OWakusei
		WriteCall((void*)0x6366C1, BigPuzzleFix);
		WriteCall((void*)0x63951A, OWakuseiFix);
		WriteCall((void*)0x639584, OWakuseiFix);
		*(NJS_OBJECT*)0x2AB6900 = *LoadModel("system\\data\\ADV00\\Models\\0016C3FC.sa1mdl", false); //Twinkle Park elevator
		*(NJS_OBJECT*)0x2AD14C8 = *LoadModel("system\\data\\ADV00\\Models\\00183B8C.sa1mdl", false); //OMSaku (Gamma's target)
		*(NJS_OBJECT*)0x2AD484C = *LoadModel("system\\data\\ADV00\\Models\\0018684C.sa1mdl", false); //Ice Key
		//Event helicopter (set up exactly like the Chaos 0 helicopter so lots of copy-paste here)
		((NJS_ACTION*)0x2DBD864)->object = LoadModel("system\\data\\Other\\00011208.sa1mdl", false);
		//UV-less stuff fix
		((NJS_ACTION*)0x2DBD864)->object->child->child->child->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		//Add white diffuse on opaque things (have to use a different function because it "forgets" the light type
		AddWhiteDiffuseMaterial_Specular3(&((NJS_ACTION*)0x2DBD864)->object->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial_Specular3(&((NJS_ACTION*)0x2DBD864)->object->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[2]);
		//Disable all transparent bits in the original model except SSPD
		HideMesh_Object(((NJS_ACTION*)0x2DBD864)->object->child->sibling->sibling->sibling->sibling->child, 0);
		((NJS_ACTION*)0x2DBD864)->object->child->sibling->sibling->sibling->sibling->child->child->evalflags |= NJD_EVAL_HIDE;
		//Remove transparency in the part the light is coming from, because it isn't a transparent texture and it uses regular blending
		((NJS_ACTION*)0x2DBD864)->object->child->sibling->sibling->sibling->sibling->child->child->sibling->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		//Light1 is the metal cover of the thing the light is supposed to be coming from
		EVHelicopterLight1 = LoadModel("system\\data\\Other\\00011208.sa1mdl", false);
		HideEntireObject(EVHelicopterLight1);
		EVHelicopterLight1->child->sibling->sibling->sibling->sibling->child->evalflags &= ~NJD_EVAL_HIDE; //Unhide first transparent bit in mesh 1
		HideMesh_Object(EVHelicopterLight1->child->sibling->sibling->sibling->sibling->child, 1); //Hide opaque bits in mesh 1
		HideMesh_Object(EVHelicopterLight1->child->sibling->sibling->sibling->sibling->child, 2); //Hide opaque bits in mesh 1
		//Light2 is the actual light
		EVHelicopterLight2 = LoadModel("system\\data\\Other\\00011208.sa1mdl", false);
		HideEntireObject(EVHelicopterLight2);
		EVHelicopterLight2->child->sibling->sibling->sibling->sibling->child->child->evalflags &= ~NJD_EVAL_HIDE; //Unhide the light
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x2DBD6D0)->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x2DBD6D0)->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[2]);
		*(NJS_OBJECT*)0x2AE8674 = *LoadModel("system\\data\\ADV00\\Models\\00195DC0.sa1mdl", false); //Train
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x2AE8674)->child->sibling->sibling->sibling->basicdxmodel->mats[9]);
		//Police car stuff
		*(NJS_OBJECT*)0x2AF4FC0 = *LoadModel("system\\data\\ADV00\\Models\\0019F390.sa1mdl", false); //Police
		HideMesh_Object(((NJS_OBJECT*)0x2AF4FC0), 9); //Hide lights
		HideMesh_Object(((NJS_OBJECT*)0x2AF4FC0), 10); //Hide lights
		PoliceCarModel_LightsOnly = LoadModel("system\\data\\ADV00\\Models\\0019F390.sa1mdl", false);
		HideMesh_Object(PoliceCarModel_LightsOnly, 0);
		HideMesh_Object(PoliceCarModel_LightsOnly, 1);
		HideMesh_Object(PoliceCarModel_LightsOnly, 2);
		HideMesh_Object(PoliceCarModel_LightsOnly, 3);
		HideMesh_Object(PoliceCarModel_LightsOnly, 4);
		HideMesh_Object(PoliceCarModel_LightsOnly, 5);
		HideMesh_Object(PoliceCarModel_LightsOnly, 6);
		HideMesh_Object(PoliceCarModel_LightsOnly, 7);
		HideMesh_Object(PoliceCarModel_LightsOnly, 8);
		HideMesh_Object(PoliceCarModel_LightsOnly, 11);
		HideMesh_Object(PoliceCarModel_LightsOnly, 12);
		HideMesh_Object(PoliceCarModel_LightsOnly, 13);
		PoliceCarModel_LightsOnly->child->evalflags |= NJD_EVAL_HIDE;
		PoliceCarModel_LightsOnly->child->sibling->evalflags |= NJD_EVAL_HIDE;
		PoliceCarModel_LightsOnly->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		PoliceCarModel_LightsOnly->child->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
		//Parasol stuff
		//Main model
		Parasol_1 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl", false);
		HideMesh_Object(Parasol_1, 1);
		HideMesh_Object(Parasol_1, 2);
		HideMesh_Object(Parasol_1, 5);
		HideMesh_Object(Parasol_1, 6);
		HideMesh_Object(Parasol_1, 7);
		HideMesh_Object(Parasol_1, 8);
		HideMesh_Object(Parasol_1, 11);
		//Chair transparency
		Parasol_2 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl", false);
		HideMesh_Object(Parasol_2, 0);
		HideMesh_Object(Parasol_2, 3);
		HideMesh_Object(Parasol_2, 4);
		HideMesh_Object(Parasol_2, 5);
		HideMesh_Object(Parasol_2, 6);
		HideMesh_Object(Parasol_2, 7);
		HideMesh_Object(Parasol_2, 8);
		HideMesh_Object(Parasol_2, 9);
		HideMesh_Object(Parasol_2, 10);
		HideMesh_Object(Parasol_2, 11);
		HideMesh_Object(Parasol_2, 12);
		HideMesh_Object(Parasol_2, 13);
		HideMesh_Object(Parasol_2, 14);
		//Umbrella
		Parasol_3 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl", false);
		HideMesh_Object(Parasol_3, 0);
		HideMesh_Object(Parasol_3, 1);
		HideMesh_Object(Parasol_3, 2);
		HideMesh_Object(Parasol_3, 3);
		HideMesh_Object(Parasol_3, 4);
		HideMesh_Object(Parasol_3, 5);
		HideMesh_Object(Parasol_3, 6);
		HideMesh_Object(Parasol_3, 7);
		HideMesh_Object(Parasol_3, 8);
		HideMesh_Object(Parasol_3, 9);
		HideMesh_Object(Parasol_3, 10);
		HideMesh_Object(Parasol_3, 12);
		HideMesh_Object(Parasol_3, 13);
		HideMesh_Object(Parasol_3, 14);
		//Glass
		Parasol_4 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl", false);
		HideMesh_Object(Parasol_4, 0);
		HideMesh_Object(Parasol_4, 1);
		HideMesh_Object(Parasol_4, 2);
		HideMesh_Object(Parasol_4, 3);
		HideMesh_Object(Parasol_4, 4);
		HideMesh_Object(Parasol_4, 9);
		HideMesh_Object(Parasol_4, 10);
		HideMesh_Object(Parasol_4, 11);
		HideMesh_Object(Parasol_4, 12);
		HideMesh_Object(Parasol_4, 13);
		HideMesh_Object(Parasol_4, 14);
		SwapMeshsets(Parasol_4, 8, 6); //Move heart after glass
		SwapMeshsets(Parasol_4, 7, 8); //Move lemon after glass
		WriteCall((void*)0x63A6A4, RenderParasol); //Parasol
		//Fog data
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
		ReinitializeDLLStuff();
		ModelsLoaded_ADV00 = true;
	}
}

void ADV00_OnFrame()
{
	if (CurrentLevel == LevelIDs_StationSquare)
	{
		//Switch textures/lighting depending on time of day
		if (ADV00_0_Info && ADV00_1_Info && ADV00_3_Info && ADV00_4_Info && PreviousTimeOfDay != GetTimeOfDay())
		{
			SwitchLighting_TimeOfDay(0);
			SwitchLighting_TimeOfDay(1);
			SwitchLighting_TimeOfDay(3);
			SwitchLighting_TimeOfDay(4);
			PreviousTimeOfDay = GetTimeOfDay();
		}
		//Delayed time of day for Sonic's cutscene
		{
			if (CurrentAct != 2 && DelayedTimeOfDay != -1)
			{
				SetTimeOfDay(DelayedTimeOfDay);
				DelayedTimeOfDay = -1;
			}
		}
	}
}