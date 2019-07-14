#include "stdafx.h"
//TODO: Burger Shop man lighting should use type 0, but its materials are hardcoded in Lantern Engine
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

NJS_OBJECT *SS03SeaModel = nullptr;
NJS_OBJECT *SS04SeaModel = nullptr;

NJS_OBJECT* StreetLight_Night = nullptr;
NJS_OBJECT* OS1Dnto_Night = nullptr;
NJS_OBJECT* PoliceCarModel_LightsOnly = nullptr;
NJS_OBJECT* StationDoor = nullptr;
NJS_OBJECT* Parasol_1 = nullptr;
NJS_OBJECT* Parasol_2 = nullptr;
NJS_OBJECT* Parasol_3 = nullptr;
NJS_OBJECT* Parasol_4 = nullptr;

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
DataPointer(float, OS1Dnto_LightY, 0x2BC08A4);
DataPointer(float, OS1Dnto_LightZ, 0x2BC08A8);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(void, ProcessModel_NoSorting, (NJS_MODEL_SADX* model, float scale), 0x407A00);
FunctionPointer(long double, sub_49CC70, (float a1, float a2, float a3), 0x49CC70);
FunctionPointer(void, njAction_Queue_407BB0_2, (NJS_ACTION* a1, float a2, int a3, float a4), 0x408350);

static Sint8 PreviousTimeOfDay = -1;
static Sint8 DelayedTimeOfDay = -1;

int __cdecl CheckIfCameraIsInHotel_Lol()
{
	return 0;
}

void __cdecl RenderStationSquareOcean(OceanData *x)
{
	if (CurrentAct == 3 && SS03SeaModel)
	{
		if (!DroppedFrames)
		{
			njSetTexture(&texlist_advss03);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_AB_Wrapper(SS03SeaModel, 1.0f);
			njPopMatrix(1u);
		}
	}
	if (CurrentAct == 4 && SS04SeaModel)
	{
		if (!DroppedFrames)
		{
			njSetTexture(&texlist_advss04);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_AB_Wrapper(SS04SeaModel, 1.0f);
			njPopMatrix(1u);
		}
	}
}

void FixPoliceCar(NJS_ACTION *a1, float a2, int a3)
{
	sub_405450(a1, a2, a3);
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

void __cdecl OS1Dnto_Display_Night(ObjectMaster* a1)
{
	EntityData1* v1; // esi
	Angle v2; // eax

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		//Draw model
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		njSetTexture((NJS_TEXLIST*)0x2AEAA50);
		DrawQueueDepthBias = 100.0f;
		DrawModel_Queue_407CF0(OS1Dnto_Night->basicdxmodel, (QueuedModelFlagsB)0);
		njPopMatrix(1u);
		//Draw light
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		SetMaterialAndSpriteColor_Float(0.7f, 0.8f, 0.65f, 0.3f);
		((NJS_SPRITE*)0x2BC08A0)->p.x = v1->Position.x + 0.1f; //I moved it out a little bit but it's still not as good as on DC
		OS1Dnto_LightY = v1->Position.y - 2.2f;
		OS1Dnto_LightZ = v1->Position.z;
		Set3DSpriteDepth(3.0f);
		njDrawSprite3D_NoSkippedFrames((NJS_SPRITE*)0x2BC08A0, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE | NJD_SPRITE_COLOR);
		ClampGlobalColorThing_Thing();
		DrawQueueDepthBias = 0.0f;
	}
}

void __cdecl OGaitou_Display_Night(ObjectMaster* a1)
{
	float* z1; // esi
	z1 = (float*)& a1->Data1->Action;
	EntityData1* v1; // edi
	Angle v2; // eax
	NJS_OBJECT* v3; // esi
	NJS_OBJECT* v5; // esi
	Angle v4; // eax
	float ZDist; // ST08_4
	Float ZScale; // [esp+14h] [ebp-Ch]
	Float sy; // [esp+18h] [ebp-8h]
	Float sx; // [esp+1Ch] [ebp-4h]

	v1 = a1->Data1;
	SetTextureToLevelObj();
	njPushMatrix(0);
	njTranslateV(0, &v1->Position);
	njTranslateV(0, (NJS_VECTOR*) & ((NJS_OBJECT*)0x2AC9F10)->pos);
	njPushMatrix(0);
	v2 = v1->Rotation.y;
	if (v2)
	{
		njRotateY(0, (unsigned __int16)v2);
	}
	DrawQueueDepthBias = 200.0f;
	DrawModel_Queue_407CF0(StreetLight_Night->basicdxmodel, (QueuedModelFlagsB)0);
	njPopMatrix(1u);
	v3 = StreetLight_Night->child->sibling;
	sx = v3->scl[0];
	sy = v3->scl[1];
	ZScale = v3->scl[2];
	njTranslate(0, v3->pos[0], v3->pos[1], v3->pos[2]);
	v4 = v1->Rotation.y;
	if (v4)
	{
		njRotateY(0, (unsigned __int16)v4);
	}
	njScale(0, sx, sy, ZScale);
	ZDist = sub_49CC70(sx, sy, ZScale);
	if (!(v3->basicdxmodel->mats[0].attrflags & NJD_FLAG_USE_ALPHA)) v3->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
	DrawModel_Queue_407CF0(v3->basicdxmodel, (QueuedModelFlagsB)0);
	njPopMatrix(1u);
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	SetMaterialAndSpriteColor_Float(0.7f, 0.8f, 0.8f, 0.8f);
	((NJS_SPRITE*)0x2BC0334)->p.x = z1[8];
	((NJS_SPRITE*)0x2BC0334)->p.y = z1[9] + 39.0f;
	((NJS_SPRITE*)0x2BC0334)->p.z = z1[10];
	Set3DSpriteDepth(3.0f);
	njDrawSprite3D_NoSkippedFrames((NJS_SPRITE*)0x2BC0334, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE | NJD_SPRITE_COLOR);
	ClampGlobalColorThing_Thing();
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	DrawQueueDepthBias = 0.0f;
}

void OGaitou_Day_Fix(NJS_MODEL_SADX* model, QueuedModelFlagsB blend, float scale)
{
	ProcessModel_NoSorting(model, scale);
}

void SouvenirShopDoor_Depth(NJS_ACTION* a1, float a2, int a3, float a4)
{
	DrawQueueDepthBias = 3000.0f;
	njAction_Queue_407BB0_2(a1, a2, a3, a4);
	DrawQueueDepthBias = 0.0f;
}

void ParseSSColFlags()
{
	int colflags;
	LandTable *landtable;
	//Sewers
	landtable = ___LANDTABLESS[2];
	if (SADXWater_StationSquare)
	{
		for (unsigned int j = 0; j < landtable->COLCount; j++)
		{
			colflags = landtable->Col[j].Flags;
			if ((colflags & ColFlags_Visible) && (colflags & ColFlags_Water)) landtable->Col[j].Model->basicdxmodel->mats[0].diffuse.argb.a = 0xD2; //Make the water less transparent
		}
	}
	//Main area
	landtable = ___LANDTABLESS[3];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (!SADXWater_StationSquare)
		{
			if (colflags == 0x8000000) SS03SeaModel = landtable->Col[j].Model;
		}
		else
		{
			if (colflags == 0) landtable->Col[j].Flags = 0x80000000; //Show SADX sea bottom
			if ((colflags & ColFlags_Visible) && (colflags & ColFlags_Water)) landtable->Col[j].Flags = 0x00000002; //Hide sewers water
		}
	}
	//Hotel area
	landtable = ___LANDTABLESS[4];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (!SADXWater_StationSquare)
		{
			if (colflags & 0x8000000) SS04SeaModel = landtable->Col[j].Model;
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
	landtable = ___LANDTABLESS[1];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
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
	landtable = ___LANDTABLESS[2];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
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
	landtable = ___LANDTABLESS[3];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
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
	landtable = ___LANDTABLESS[4];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
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
	if (act == 0) landtable = ___LANDTABLESS[0];
	else if (act == 1) landtable = ___LANDTABLESS[1];
	else if (act == 2) landtable = ___LANDTABLESS[2];
	else if (act == 3) landtable = ___LANDTABLESS[3];
	else if (act == 4) landtable = ___LANDTABLESS[4];
	else landtable = ___LANDTABLESS[5];
	//Add or remove "ignore light"
	for (unsigned int j = 0; j < landtable->COLCount; j++)
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
	ParseSSMaterials(true);
	SS03SeaModel = nullptr;
	SS04SeaModel = nullptr;
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

void LoadLevelFiles_ADV00()
{
	CheckAndUnloadLevelFiles();
	ADV00_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\0.sa1lvl"));
	ADV00_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\1.sa1lvl"));
	ADV00_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\2.sa1lvl"));
	ADV00_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\3.sa1lvl"));
	ADV00_4_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\4.sa1lvl"));
	ADV00_5_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\5.sa1lvl"));
	LandTable *ADV00_0 = ADV00_0_Info->getlandtable(); // &landtable_000157F4; // 
	LandTable *ADV00_1 = ADV00_1_Info->getlandtable(); // &landtable_000738F4; // 
	LandTable *ADV00_2 = ADV00_2_Info->getlandtable(); // &landtable_000C21F0; // 
	LandTable *ADV00_3 = ADV00_3_Info->getlandtable(); // &landtable_000DCEBC; // 
	LandTable *ADV00_4 = ADV00_4_Info->getlandtable(); // &landtable_00135A90; // 
	LandTable *ADV00_5 = ADV00_5_Info->getlandtable(); // &landtable_001573CC; // 
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
	___LANDTABLESS[0] = ADV00_0;
	___LANDTABLESS[1] = ADV00_1;
	___LANDTABLESS[2] = ADV00_2;
	___LANDTABLESS[3] = ADV00_3;
	___LANDTABLESS[4] = ADV00_4;
	___LANDTABLESS[5] = ADV00_5;
	ParseSSColFlags();
	ParseSSMaterials(false);
	PreviousTimeOfDay = -1;
	if (!SADXWater_StationSquare) WriteJump((void*)0x631140, RenderStationSquareOcean); //Render SS ocean separately
}

void ADV00_Init()
{
	if (!Use1999SetFiles)
	{
		ReplaceBIN_DC("SETSS00A");
		ReplaceBIN_DC("SETSS00B");
		ReplaceBIN_DC("SETSS00E");
		ReplaceBIN_DC("SETSS00K");
		ReplaceBIN_DC("SETSS00L");
		ReplaceBIN_DC("SETSS00M");
		ReplaceBIN_DC("SETSS00S");
		ReplaceBIN_DC("SETSS01A");
		ReplaceBIN_DC("SETSS01B");
		ReplaceBIN_DC("SETSS01E");
		ReplaceBIN_DC("SETSS01K");
		ReplaceBIN_DC("SETSS01L");
		ReplaceBIN_DC("SETSS01M");
		ReplaceBIN_DC("SETSS01S");
		ReplaceBIN_DC("SETSS02S");
		ReplaceBIN_DC("SETSS02B");
		ReplaceBIN_DC("SETSS03A");
		ReplaceBIN_DC("SETSS03B");
		ReplaceBIN_DC("SETSS03E");
		ReplaceBIN_DC("SETSS03K");
		ReplaceBIN_DC("SETSS03L");
		ReplaceBIN_DC("SETSS03M");
		ReplaceBIN_DC("SETSS03S");
		ReplaceBIN_DC("SETSS04A");
		ReplaceBIN_DC("SETSS04B");
		ReplaceBIN_DC("SETSS04E");
		ReplaceBIN_DC("SETSS04K");
		ReplaceBIN_DC("SETSS04L");
		ReplaceBIN_DC("SETSS04M");
		ReplaceBIN_DC("SETSS04S");
		ReplaceBIN_DC("SETSS05S");
	}
	else
	{
		ReplaceBIN_1999("SETSS00A");
		ReplaceBIN_1999("SETSS00B");
		ReplaceBIN_1999("SETSS00E");
		ReplaceBIN_1999("SETSS00K");
		ReplaceBIN_1999("SETSS00L");
		ReplaceBIN_1999("SETSS00M");
		ReplaceBIN_1999("SETSS00S");
		ReplaceBIN_1999("SETSS01A");
		ReplaceBIN_1999("SETSS01B");
		ReplaceBIN_1999("SETSS01E");
		ReplaceBIN_1999("SETSS01K");
		ReplaceBIN_1999("SETSS01L");
		ReplaceBIN_1999("SETSS01M");
		ReplaceBIN_1999("SETSS01S");
		ReplaceBIN_1999("SETSS02S");
		ReplaceBIN_1999("SETSS02B");
		ReplaceBIN_1999("SETSS03A");
		ReplaceBIN_1999("SETSS03B");
		ReplaceBIN_1999("SETSS03E");
		ReplaceBIN_1999("SETSS03K");
		ReplaceBIN_1999("SETSS03L");
		ReplaceBIN_1999("SETSS03M");
		ReplaceBIN_1999("SETSS03S");
		ReplaceBIN_1999("SETSS04A");
		ReplaceBIN_1999("SETSS04B");
		ReplaceBIN_1999("SETSS04E");
		ReplaceBIN_1999("SETSS04K");
		ReplaceBIN_1999("SETSS04L");
		ReplaceBIN_1999("SETSS04M");
		ReplaceBIN_1999("SETSS04S");
		ReplaceBIN_1999("SETSS05S");
	}
	if (!DLLLoaded_DLCs)
	{
		ReplaceBIN_DC("CAMSS00S");
		ReplaceBIN_DC("CAMSS01S");
		ReplaceBIN_DC("CAMSS02S");
		ReplaceBIN_DC("CAMSS03S");
		ReplaceBIN_DC("CAMSS04S");
		ReplaceBIN_DC("CAMSS05S");
	}
	ReplacePVM("ADVSS00");
	ReplacePVM("ADVSS01");
	ReplacePVM("ADVSS02");
	ReplacePVM("ADVSS03");
	ReplacePVM("ADVSS04");
	ReplacePVM("ADVSS05");
	ReplacePVM("OBJ_SS");
	ReplacePVM("SS_BG");
	ReplacePVM("SS_BOAT");
	ReplacePVM("SS_BURGER");
	ReplacePVM("SS_CASINO");
	ReplacePVM("SS_DENTOU");
	ReplacePVM("SS_EKIIN");
	ReplacePVM("SS_KANBAN");
	ReplacePVM("SS_MIZUGI");
	ReplacePVM("SS_PEOPLE");
	ReplacePVM("SS_TRAIN");
	ReplacePVM("SS_TWINS");
	ReplacePVM("SSCAR");
	ReplacePVM("SSPATCAR_BODY");
	ReplacePVR("SS_FINESKY");
	ReplacePVR("SS_NIGHTSKY");
	ReplacePVR("SS_NIGHTSKYB");
	ReplacePVR("SS_YUSKAY_MINI");
	___ADV00_TEXLISTS[0] = &texlist_advss00;
	___ADV00_TEXLISTS[1] = &texlist_advss01;
	___ADV00_TEXLISTS[2] = &texlist_advss02;
	___ADV00_TEXLISTS[3] = &texlist_advss03;
	___ADV00_TEXLISTS[4] = &texlist_advss04;
	___ADV00_TEXLISTS[5] = &texlist_advss05;
	ResizeTextureList((NJS_TEXLIST*)0x2AEE920, 22); //SSCAR 
	ResizeTextureList((NJS_TEXLIST*)0x2AD9F58, 31); //SS_TRAIN
	ResizeTextureList(&OBJ_SS_TEXLIST, 177);
	StationSquareCarTextureIDs[5] = 7; //Not an actual car surface texture but it's like that in SA1 too
	WriteJump((void*)0x63C770, OS1Dnto_Display_Night);
	WriteJump((void*)0x63A930, OGaitou_Display_Night);
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
	WriteCall((void*)0x63A908, OGaitou_Day_Fix); //Don't queue a non-transparent model
	WriteData((float*)0x634EB9, 0.601f); //Prevent Z fighting with SS NPC shadow when overlapping transparent stuff
	//Fix camera in Light Speed Shoes cutscene
	WriteData((float*)0x652F74, 800.0f); //X1
	WriteData((float*)0x652F79, -92.6f); //Y1
	WriteData((float*)0x6532BB, 509.9f); //X2
	WriteData((float*)0x6532B6, -89.4f); //Y2
	WriteData((float*)0x6532B1, 812.3f); //Z2
	WriteCall((void*)0x6304B6, DelaySettingTimeOfDay); //Prevent sudden lighting change in Sonic's story
	WriteCall((void*)0x652F4F, LSCutsceneRotationFix); //Fix Sonic's rotation after getting the Light Speed Shoes
	//Fix materials
	for (unsigned int i = 0; i < 26; i++)
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
	//Material stuff
	((NJS_OBJECT*)0x2AB757C)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA; //Speed Highway elevator door
	((NJS_OBJECT*)0x2AB6E4C)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA; //Speed Highway elevator door
	//Objects
	*(NJS_MODEL_SADX*)0x2ACBB80 = *LoadModel("system\\data\\ADV00\\Models\\0017F588.sa1mdl", false)->basicdxmodel; //OPoolChair
	*(NJS_MODEL_SADX*)0x2AC95BC = *LoadModel("system\\data\\ADV00\\Models\\0017D568.sa1mdl", false)->basicdxmodel; //Fire hydrant
	*(NJS_OBJECT*)0x2AC9F10 = *LoadModel("system\\data\\ADV00\\Models\\0017DDE8.sa1mdl", false); //OGaitou (street light)
	StreetLight_Night = LoadModel("system\\data\\ADV00\\Models\\0017DDE8.sa1mdl", false); //OGaitou (street light);
	StreetLight_Night->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
	StreetLight_Night->basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_ALPHA;
	StreetLight_Night->basicdxmodel->mats[2].attrflags |= NJD_FLAG_USE_ALPHA;
	StreetLight_Night->child->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
	*(NJS_OBJECT*)0x2AEA9F8 = *LoadModel("system\\data\\ADV00\\Models\\00197228.sa1mdl", false); //OS1Dnto
	OS1Dnto_Night = LoadModel("system\\data\\ADV00\\Models\\00197228.sa1mdl", false); //OS1Dnto
	OS1Dnto_Night->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
	OS1Dnto_Night->basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_ALPHA;
	OS1Dnto_Night->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	OS1Dnto_Night->basicdxmodel->mats[1].attr_texId = 2; //Evening/night texture
	*(NJS_OBJECT*)0x2AB2CCC = *LoadModel("system\\data\\ADV00\\Models\\001689C4.sa1mdl", true); //Souvenir shop door
	*(NJS_OBJECT*)0x2AB57E4 = *LoadModel("system\\data\\ADV00\\Models\\0016B404.sa1mdl", false); //OTwaDoor
	*(NJS_OBJECT*)0x2AFE668 = *LoadModel("system\\data\\ADV00\\Models\\001A6DEC.sa1mdl", false); //Casino decoration 1
	*(NJS_OBJECT*)0x2B027D8 = *LoadModel("system\\data\\ADV00\\Models\\001AADA4.sa1mdl", false); //Casino decoration 2
	*(NJS_OBJECT*)0x2B04CF8 = *LoadModel("system\\data\\ADV00\\Models\\001AD220.sa1mdl", false); //Casino decoration 3
	*(NJS_OBJECT*)0x2AC8AEC = *LoadModel("system\\data\\ADV00\\Models\\0017CD14.sa1mdl", false); //OStDoor
	*(NJS_OBJECT*)0x2AB146C = *LoadModel("system\\data\\ADV00\\Models\\001671B8.sa1mdl", false); //Burger shop door
	*(NJS_OBJECT*)0x2AD4EA4 = *LoadModel("system\\data\\ADV00\\Models\\00186E88.sa1mdl", false); //Hidden door 1
	*(NJS_OBJECT*)0x2AD4CD4 = *LoadModel("system\\data\\ADV00\\Models\\00186CC4.sa1mdl", false); //Hidden door 2
	*(NJS_OBJECT*)0x2AEE7B0 = *LoadModel("system\\data\\ADV00\\Models\\0019AF04.sa1mdl", false); //Boat
	*(NJS_OBJECT*)0x2AAB0E4 = *LoadModel("system\\data\\ADV00\\Models\\00164444.sa1mdl", false); //OHotelFront 1
	*(NJS_OBJECT*)0x2AAE0BC = *LoadModel("system\\data\\ADV00\\Models\\00164444.sa1mdl", false); //OHotelFront 2 (duplicate?)
	*(NJS_OBJECT*)0x2ABDF0C = *LoadModel("system\\data\\ADV00\\Models\\00172BD4.sa1mdl", false); //Box in the sewers
	*(NJS_OBJECT*)0x2AF1974 = *LoadModel("system\\data\\ADV00\\Models\\0019CBD8.sa1mdl", false); //Red Car
	*(NJS_OBJECT*)0x2AF8400 = *LoadModel("system\\data\\ADV00\\Models\\001A17C4.sa1mdl", false); //Blue Car
	*(NJS_OBJECT*)0x2AFBA64 = *LoadModel("system\\data\\ADV00\\Models\\001A4268.sa1mdl", false); //Taxi
	*(NJS_OBJECT*)0x2AD362C = *LoadModel("system\\data\\ADV00\\Models\\00185A20.sa1mdl", false); //OWakusei
	*(NJS_OBJECT*)0x2AB6900 = *LoadModel("system\\data\\ADV00\\Models\\0016C3FC.sa1mdl", false); //Twinkle Park elevator
	*(NJS_OBJECT*)0x2AD14C8 = *LoadModel("system\\data\\ADV00\\Models\\00183B8C.sa1mdl", false); //OMSaku (Gamma's target)
	*(NJS_OBJECT*)0x2AD484C = *LoadModel("system\\data\\ADV00\\Models\\0018684C.sa1mdl", false); //Ice Key
	*(NJS_OBJECT*)0x2DBD6D0 = *LoadModel("system\\data\\Other\\00011208.sa1mdl", false); //Event helicopter
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x2DBD6D0)->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x2DBD6D0)->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[2]);
	*(NJS_OBJECT*)0x2AE8674 = *LoadModel("system\\data\\ADV00\\Models\\00195DC0.sa1mdl", false); //Train
	SwapMeshsets(((NJS_OBJECT*)0x2AE8674)->child->sibling->sibling->sibling, 8, 9); //Alpha thing just in case
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x2AE8674)->child->sibling->sibling->sibling->basicdxmodel->mats[9]);
	//Police car stuff
	*(NJS_OBJECT*)0x2AF4FC0 = *LoadModel("system\\data\\ADV00\\Models\\0019F390.sa1mdl", false); //Police
	((NJS_OBJECT*)0x2AF4FC0)->basicdxmodel->meshsets[9].nbMesh = 0; //Hide lights
	((NJS_OBJECT*)0x2AF4FC0)->basicdxmodel->meshsets[10].nbMesh = 0; //Hide lights
	PoliceCarModel_LightsOnly = LoadModel("system\\data\\ADV00\\Models\\0019F390.sa1mdl", false); //Police
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[0].nbMesh = 0;
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[1].nbMesh = 0;
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[2].nbMesh = 0;
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[3].nbMesh = 0;
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[4].nbMesh = 0;
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[5].nbMesh = 0;
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[6].nbMesh = 0;
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[7].nbMesh = 0;
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[8].nbMesh = 0;
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[11].nbMesh = 0;
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[12].nbMesh = 0;
	PoliceCarModel_LightsOnly->basicdxmodel->meshsets[13].nbMesh = 0;
	PoliceCarModel_LightsOnly->child->evalflags |= NJD_EVAL_HIDE;
	PoliceCarModel_LightsOnly->child->sibling->evalflags |= NJD_EVAL_HIDE;
	PoliceCarModel_LightsOnly->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
	PoliceCarModel_LightsOnly->child->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
	//Parasol stuff
	//Main model
	Parasol_1 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl", false);
	Parasol_1->basicdxmodel->meshsets[1].nbMesh = 0;
	Parasol_1->basicdxmodel->meshsets[2].nbMesh = 0;
	Parasol_1->basicdxmodel->meshsets[5].nbMesh = 0;
	Parasol_1->basicdxmodel->meshsets[6].nbMesh = 0;
	Parasol_1->basicdxmodel->meshsets[7].nbMesh = 0;
	Parasol_1->basicdxmodel->meshsets[8].nbMesh = 0;
	Parasol_1->basicdxmodel->meshsets[11].nbMesh = 0;
	//Chair transparency
	Parasol_2 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl", false);
	Parasol_2->basicdxmodel->meshsets[0].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[3].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[4].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[5].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[6].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[7].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[8].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[9].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[10].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[11].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[12].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[13].nbMesh = 0;
	Parasol_2->basicdxmodel->meshsets[14].nbMesh = 0;
	//Umbrella
	Parasol_3 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl", false);
	Parasol_3->basicdxmodel->meshsets[0].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[1].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[2].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[3].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[4].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[5].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[6].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[7].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[8].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[9].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[10].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[12].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[13].nbMesh = 0;
	Parasol_3->basicdxmodel->meshsets[14].nbMesh = 0;
	//Glass
	Parasol_4 = LoadModel("system\\data\\ADV00\\Models\\00182AD8.sa1mdl", false);
	Parasol_4->basicdxmodel->meshsets[0].nbMesh = 0;
	Parasol_4->basicdxmodel->meshsets[1].nbMesh = 0;
	Parasol_4->basicdxmodel->meshsets[2].nbMesh = 0;
	Parasol_4->basicdxmodel->meshsets[3].nbMesh = 0;
	Parasol_4->basicdxmodel->meshsets[4].nbMesh = 0;
	Parasol_4->basicdxmodel->meshsets[9].nbMesh = 0;
	Parasol_4->basicdxmodel->meshsets[10].nbMesh = 0;
	Parasol_4->basicdxmodel->meshsets[11].nbMesh = 0;
	Parasol_4->basicdxmodel->meshsets[12].nbMesh = 0;
	Parasol_4->basicdxmodel->meshsets[13].nbMesh = 0;
	Parasol_4->basicdxmodel->meshsets[14].nbMesh = 0;
	SwapMeshsets(Parasol_4, 8, 6); //Move heart after glass
	SwapMeshsets(Parasol_4, 7, 8); //Move lemon after glass
	WriteCall((void*)0x63A6A4, RenderParasol); //Parasol
	//Fog data
	for (unsigned int i = 0; i < 3; i++)
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