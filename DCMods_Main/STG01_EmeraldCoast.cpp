#include "stdafx.h"
#include "EmeraldCoast_Objects.h"

NJS_TEXNAME textures_ecoast1[97];
NJS_TEXLIST texlist_ecoast1 = { arrayptrandlength(textures_ecoast1) };

NJS_TEXNAME textures_ecoast2[86];
NJS_TEXLIST texlist_ecoast2 = { arrayptrandlength(textures_ecoast2) };

NJS_TEXNAME textures_ecoast3[94];
NJS_TEXLIST texlist_ecoast3 = { arrayptrandlength(textures_ecoast3) };

NJS_OBJECT* WaterObjects[] = { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr };
NJS_OBJECT *BigDeco1 = nullptr;
NJS_OBJECT *BigDeco2 = nullptr;
NJS_OBJECT *BigDeco3 = nullptr;
NJS_OBJECT *LowPolyOcean = nullptr;
NJS_OBJECT *HighPolyOcean_Static = nullptr;
NJS_OBJECT *HighPolyOcean_Dynamic = nullptr;
NJS_TEX *HighPolyOceanUVs_Dynamic = nullptr;
NJS_TEX *HighPolyOceanUVs_Static = nullptr;
NJS_TEX *LowPolyOceanUVs = nullptr;

/*
#include "EmeraldCoast1.h"
#include "EmeraldCoast2.h"
#include "EmeraldCoast3.h"
*/

static int anim1 = 82;
static int anim2 = 67;
static int anim3 = 42;
static int anim4 = 71;
static int anim5 = 50;
static int anim6 = 65;
static int anim7 = 57;
static int anim8 = 80;
static float float1 = 0.02f;
static float float2 = 66.0f;
static int SkyboxHidden = 0;
static int beachsea_water = 0;
static int inside_secret_area = 0;
static int water_anim = 17;
static bool lilocean = false;
static NJS_VECTOR oldpos{ 0,0,0 };

DataArray(FogData, EmeraldCoast1Fog, 0x00E99DDC, 3);
DataArray(FogData, EmeraldCoast2Fog, 0x00E99E0C, 3);
DataArray(FogData, EmeraldCoast3Fog, 0x00E99E3C, 3);
DataPointer(NJS_VECTOR, CurrentSkybox, 0x03ABDC94);
DataPointer(int, CurrentFogToggle, 0x03ABDC6C);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(float, EC1OceanYShift, 0x010C85A8);
DataPointer(OceanData, OceanDataA, 0x03D0B8F0);
DataPointer(OceanData, OceanDataB, 0x03D0B90C);
DataPointer(float, flt_7E00DC, 0x7E00DC);
DataPointer(float, flt_7DF1B0, 0x7DF1B0);
DataPointer(int, EffectActive, 0x3C5E4B0);
FunctionPointer(void, DrawEmeraldCoastOcean, (OceanData *x), 0x004F8A30);

int roundfloat(float r) {
	return (r > 0.0) ? (r + 0.5) : (r - 0.5);
}

void __cdecl Obj_EC23Water_DisplayX(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	float x; // ST14_4
	double y; // st7
	double z; // st6
	v1 = a1->Data1;
	int OceanUVShift1;
	if (!SADXWater_EmeraldCoast)
	{
		//Acts 2 and 3
		if (!DroppedFrames && (inside_secret_area == 0 || EV_MainThread_ptr != nullptr))
		{
			njSetTexture((NJS_TEXLIST*)0x010C0508); //BEACH_SEA
			njPushMatrix(0);
			njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
			//It looks kinda jumpy when you load the stage so I disabled it
			/*OceanUVShift1 = njSin(FrameCounterUnpaused << 7) * 96.0f + 2.5f;
			uvSTG01_00CC0530[0].u = uvSTG01_00CC0530_d[0].u + OceanUVShift1 % 255;
			uvSTG01_00CC0530[1].u = uvSTG01_00CC0530_d[1].u + OceanUVShift1 % 255;
			uvSTG01_00CC0530[2].u = uvSTG01_00CC0530_d[2].u + OceanUVShift1 % 255;
			uvSTG01_00CC0530[3].u = uvSTG01_00CC0530_d[3].u + OceanUVShift1 % 255;*/
			DrawQueueDepthBias = -25952.0f;
			ProcessModelNode_A_Wrapper(LowPolyOcean, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			DrawQueueDepthBias = 0;
			njPopMatrix(1u);
		}
		//Act 2 only
		if (CurrentAct == 1 && !DroppedFrames)
		{
			njSetTexture((NJS_TEXLIST*)&texlist_ecoast2);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			DrawQueueDepthBias = 1000.0f;
			for (int j = 0; j < LengthOfArray(WaterObjects); j++)
			{
				ProcessModelNode_A_Wrapper(WaterObjects[j], QueuedModelFlagsB_SomeTextureThing, 1.0f);
			}
			DrawQueueDepthBias = 0;
			njPopMatrix(1u);
		}
	}
	else
	{
		//Draw decorations in Big's level
		if (CurrentAct == 2 && BigDeco1 && BigDeco2 && BigDeco3)
		{
			njSetTexture((NJS_TEXLIST*)&texlist_sadxwtr_beach);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_AB_Wrapper(BigDeco1, 1.0f);
			ProcessModelNode_AB_Wrapper(BigDeco2, 1.0f);
			ProcessModelNode_AB_Wrapper(BigDeco3, 1.0f);
			njPopMatrix(1u);
		}
		//Draw main water
		if (inside_secret_area == 0 || EV_MainThread_ptr != nullptr)
		{
			DisableFog();
			if (CurrentAct == 2)
			{
				OceanDataA.Position.z = -800.0f;
				OceanDataA.Position.x = 4000.0f;
			}
			DrawModelCallback_Queue((void(__cdecl *)(void *))EmeraldCoast_OceanDraw_SADXStyle, &OceanDataA, -17952.0, (QueuedModelFlagsB)0); //Main water
		}
		//Draw second pool (Act 2 only because Act 3 looks pretty awful without vertex colors)
		if (CurrentAct == 1)
		{
			x = OceanDataArray[1].Position.x - Camera_Data1->Position.x;
			y = OceanDataArray[1].Position.y - Camera_Data1->Position.y;
			z = OceanDataArray[1].Position.z - Camera_Data1->Position.z;
			if (z * z + y * y + x * x < 9000000.0)
			{
				DrawModelCallback_Queue((void(__cdecl *)(void *))EmeraldCoast_OceanDraw_SADXStyle, &OceanDataArray[1], -17952.0f, (QueuedModelFlagsB)0); //Second pool
			}
		}
	}
}

void __cdecl Obj_EC1Water_DisplayX(ObjectMaster *a1)
{
	auto entity = EntityData1Ptrs[0];
	double v2;
	int OceanUVShift1;
	EntityData1 *v1; // esi@1
	v1 = a1->Data1;
	int unitsize_u_small = 10;
	int unitsize_v_small = 10;
	float u2_add;
	float v2_add;
	int u2_delta;
	int v2_delta;
	DisableFog();
	if (*(signed int*)&v1->CharIndex)
	{
		v2 = njSin(FrameCounterUnpaused << 11) * 1.5f + 0.2f;
		EC1OceanYShift = v2;
	}
	else
	{
		if (EC1OceanYShift > -1.5f)
		{
			EC1OceanYShift = EC1OceanYShift - 0.1f;
		}
	}
	if (entity != nullptr)
	{
		if (entity->Position.x>1800)
		{
			lilocean = true;
			WriteData((float**)0x00501824, &flt_7E00DC);
			WriteData((float**)0x00501849, &flt_7E00DC);
			WriteData((float**)0x00501832, &flt_7DF1B0);
			WriteData((float**)0x0050185B, &flt_7DF1B0);
		}
		if (entity->Position.x < 1400) lilocean = false;
	}
	if (!lilocean)
	{
		if (!SADXWater_EmeraldCoast)
		{
			WriteData((float**)0x00501824, &float1);
			WriteData((float**)0x00501849, &float1);
			WriteData((float**)0x00501832, &float2);
			WriteData((float**)0x0050185B, &float2);
			if (!DroppedFrames);
			{
				njSetTexture((NJS_TEXLIST*)0x010C0508); //BEACH_SEA
				njPushMatrix(0);
				njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
				//It looks kinda jumpy when you load the stage so I disabled it
				/*
				OceanUVShift1 = int(njSin(FrameCounterUnpaused << 7) * 96.0f + 2.5f) % 255;
				uvSTG01_00CC0530[0].u = uvSTG01_00CC0530_d[0].u + OceanUVShift1;
				uvSTG01_00CC0530[1].u = uvSTG01_00CC0530_d[1].u + OceanUVShift1;
				uvSTG01_00CC0530[2].u = uvSTG01_00CC0530_d[2].u + OceanUVShift1;
				uvSTG01_00CC0530[3].u = uvSTG01_00CC0530_d[3].u + OceanUVShift1;
				*/
				DrawQueueDepthBias = -19952.0f;
				ProcessModelNode_A_Wrapper(LowPolyOcean, QueuedModelFlagsB_SomeTextureThing, 1.0f);
				njPopMatrix(1u);
				DrawQueueDepthBias = 0;
			}
		}
		else
		{
			if (v1->CharIndex)
			{
				v2 = njSin(FrameCounterUnpaused << 11) * 3.0f + 2.5f;
				EC1OceanYShift = v2;
				OceanDataA.Position.y = v2;
			}
			else
			{
				if (EC1OceanYShift > -1.5f)
				{
					EC1OceanYShift = EC1OceanYShift - 0.1f;
				}
				OceanDataA.Position.y = EC1OceanYShift;
			}
			DrawModelCallback_Queue((void(__cdecl *)(void *))EmeraldCoast_OceanDraw_SADXStyle, &OceanDataA, -17952.0f, (QueuedModelFlagsB)0);
		}
	}
	else
	{
		if (!DroppedFrames)
		{
			if (SADXWater_EmeraldCoast) njSetTexture(&texlist_sadxwtr_beach);
			else njSetTexture((NJS_TEXLIST*)0x010C0508); //BEACH_SEA
			if (oldpos.x != v1->Position.x)
			{
				u2_add = int(255 * (v1->Position.x - oldpos.x) / unitsize_u_small) % 255;
				if (SADXWater_EmeraldCoast == true) u2_add = roundfloat(1.5f * u2_add);
				for (unsigned int u_step = 0; u_step < LengthOfArray(uvSTG01_00CBB000_d); u_step++)
				{
					HighPolyOceanUVs_Dynamic[u_step].u = HighPolyOceanUVs_Dynamic[u_step].u - u2_add;
					u2_delta = HighPolyOceanUVs_Dynamic[u_step].u - uvSTG01_00CBB000_d[u_step].u;
					HighPolyOceanUVs_Dynamic[u_step].u = uvSTG01_00CBB000_d[u_step].u + (u2_delta % 255);
					HighPolyOceanUVs_Static[u_step].u = HighPolyOceanUVs_Dynamic[u_step].u;
				}
			}
			if (oldpos.z != v1->Position.z)
			{
				v2_add = int(255 * (v1->Position.z - oldpos.z) / unitsize_v_small) % 255;
				if (SADXWater_EmeraldCoast == true) v2_add = roundfloat(0.5f * v2_add);
				for (unsigned int v_step = 0; v_step < LengthOfArray(uvSTG01_00CBB000_d); v_step++)
				{
					HighPolyOceanUVs_Dynamic[v_step].v = HighPolyOceanUVs_Dynamic[v_step].v - v2_add;
					v2_delta = HighPolyOceanUVs_Dynamic[v_step].v - uvSTG01_00CBB000_d[v_step].v;
					HighPolyOceanUVs_Dynamic[v_step].v = uvSTG01_00CBB000_d[v_step].v + (v2_delta % 255);
					HighPolyOceanUVs_Static[v_step].v = HighPolyOceanUVs_Dynamic[v_step].v;
				}
			}
			oldpos.x = v1->Position.x;
			oldpos.z = v1->Position.z;
			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z);
			DrawQueueDepthBias = -19952.0f;
			EC1OceanYShift = -1.5f;
			if (EffectActive) ProcessModelNode_D_Wrapper((NJS_OBJECT*)0x010C03FC, 1.0f);
			else ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x010C03FC, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 2000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 2000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 2000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z - 2000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z - 2000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z - 2000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 2000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 2000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 2000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z + 2000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z + 2000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z + 2000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(HighPolyOcean_Static, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);
			DrawQueueDepthBias = 0;
		}
	}
}

NJS_MATERIAL* ObjectSpecular_STG01[] = {
	((NJS_MATERIAL*)0x010C0510),
	((NJS_MATERIAL*)0x008BE2D0),
	((NJS_MATERIAL*)0x008BE2E4),
	((NJS_MATERIAL*)0x008BE1C8),
	((NJS_MATERIAL*)0x0109AF00),
	((NJS_MATERIAL*)0x0109AF14),
	((NJS_MATERIAL*)0x0109AF28),
	((NJS_MATERIAL*)0x0109AF3C),
	((NJS_MATERIAL*)0x0109AF50),
};

NJS_MATERIAL* LevelSpecular_STG01[] = {
	((NJS_MATERIAL*)0x0109BB18),
	((NJS_MATERIAL*)0x0109BB2C),
	((NJS_MATERIAL*)0x0109BB40),
	((NJS_MATERIAL*)0x01043278),
	((NJS_MATERIAL*)0x0104328C),
	((NJS_MATERIAL*)0x010432A0),
	((NJS_MATERIAL*)0x010429D0),
	((NJS_MATERIAL*)0x010429E4),
	((NJS_MATERIAL*)0x010429F8),
	((NJS_MATERIAL*)0x01042A0C),
	((NJS_MATERIAL*)0x0109B388),
	((NJS_MATERIAL*)0x0109B39C),
	((NJS_MATERIAL*)0x0109B3B0),
	((NJS_MATERIAL*)0x0109B688),
	((NJS_MATERIAL*)0x0109B69C),
	((NJS_MATERIAL*)0x0109B6B0),
	((NJS_MATERIAL*)0x0109B6C4),
	((NJS_MATERIAL*)0x0109B6D8),
	((NJS_MATERIAL*)0x010A6064),
	((NJS_MATERIAL*)0x010A6078),
	((NJS_MATERIAL*)0x010A5D9C),
	((NJS_MATERIAL*)0x010A5DB0),
	((NJS_MATERIAL*)0x010A5AD8),
	((NJS_MATERIAL*)0x010A5AEC),
	((NJS_MATERIAL*)0x038CA220),
	((NJS_MATERIAL*)0x038CA234),
	((NJS_MATERIAL*)0x038C9DF8),
	((NJS_MATERIAL*)0x038C9E0C),
	((NJS_MATERIAL*)0x0108B9F0),
	((NJS_MATERIAL*)0x0108BA04),
	((NJS_MATERIAL*)0x0108BA18),
	((NJS_MATERIAL*)0x0108BA2C),
	((NJS_MATERIAL*)0x01083868),
	((NJS_MATERIAL*)0x0108387C),
	((NJS_MATERIAL*)0x01083890),
	((NJS_MATERIAL*)0x010838A4),
	((NJS_MATERIAL*)0x010840A0),
	((NJS_MATERIAL*)0x01084C8C),
	((NJS_MATERIAL*)0x01084CA0),
	((NJS_MATERIAL*)0x01084CB4),
	((NJS_MATERIAL*)0x01085478),
	((NJS_MATERIAL*)0x01087080),
	((NJS_MATERIAL*)0x01087094),
	((NJS_MATERIAL*)0x01087C88),
	((NJS_MATERIAL*)0x01087E20),
	((NJS_MATERIAL*)0x01088090),
	((NJS_MATERIAL*)0x01088328),
	((NJS_MATERIAL*)0x01088598),
	((NJS_MATERIAL*)0x01088700),
	((NJS_MATERIAL*)0x01089354),
	((NJS_MATERIAL*)0x01089670),
	((NJS_MATERIAL*)0x01089898),
	((NJS_MATERIAL*)0x01089A38),
	((NJS_MATERIAL*)0x01089DB4),
	((NJS_MATERIAL*)0x01089FD0),
	((NJS_MATERIAL*)0x0108A3A8),
	((NJS_MATERIAL*)0x0108A3BC),
	((NJS_MATERIAL*)0x0108A3D0),
	((NJS_MATERIAL*)0x0108AC94),
	((NJS_MATERIAL*)0x0108ACA8),
	((NJS_MATERIAL*)0x0108AFAC),
	((NJS_MATERIAL*)0x0108AFC0),
	((NJS_MATERIAL*)0x0108B19C),
	((NJS_MATERIAL*)0x0108B1B0),
	((NJS_MATERIAL*)0x0108B3DC),
	((NJS_MATERIAL*)0x0108B3F0),
	((NJS_MATERIAL*)0x0108B58C),
	((NJS_MATERIAL*)0x0108B6E0),
};

void WhaleSplash(NJS_OBJECT *a1)
{
	DrawQueueDepthBias = 8000.0f;
	ProcessModelNode(a1, (QueuedModelFlagsB)0, 1.0f);
}

void UnloadLevelFiles_STG01()
{
	for (int j = 0; j < LengthOfArray(WaterObjects); j++)
	{
		WaterObjects[j] = nullptr;
	}
	delete STG01_0_Info;
	delete STG01_1_Info;
	delete STG01_2_Info;
	STG01_0_Info = nullptr;
	STG01_1_Info = nullptr;
	STG01_2_Info = nullptr;
}

void AddWaterObject(NJS_OBJECT *object)
{
	for (int j = 0; j < LengthOfArray(WaterObjects); j++)
	{
		if (WaterObjects[j] == object) return;
		else if (WaterObjects[j] == nullptr)
		{
			WaterObjects[j] = object;
			return;
		}
	}
}

void ParseEmeraldCoastColFlagsAndMaterials(LandTable *landtable, int act)
{
	Uint32 materialflags;
	int colflags;
	NJS_MATERIAL *material;
	NJS_TEX *uv;
	int texid;
	if (act == 0)
	{
		for (unsigned int j = 0; j < landtable->COLCount; j++)
		{
			for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
			{
				materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
				//Texanim 1
				if ((materialflags & NJD_CUSTOMFLAG_TEXANIM1) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM2))
				{
					material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
					AddTextureAnimation(0, material, false, 4, 82, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					if (SADXWater_EmeraldCoast) landtable->Col[j].Flags = 0x80000402;
				}
				//Texanim 2
				if ((materialflags & NJD_CUSTOMFLAG_TEXANIM2) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM1))
				{
					material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
					AddTextureAnimation(0, material, false, 3, 67, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	if (act == 1)
	{
		for (unsigned int j = 0; j < landtable->COLCount; j++)
		{
			colflags = landtable->Col[j].Flags;
			if (colflags == 0x28000002)
			{
				AddWaterObject(landtable->Col[j].Model);
			}
			if (colflags == 0xA8000002 && SADXWater_EmeraldCoast) landtable->Col[j].Flags = 0x20000002;
			for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
			{
				materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
				//Texanim 1
				if ((materialflags & NJD_CUSTOMFLAG_TEXANIM1) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM2))
				{
					material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
					AddTextureAnimation(1, material, false, 4, 71, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					if (SADXWater_EmeraldCoast) landtable->Col[j].Flags = 0x80000402;
				}
				//Texanim 2
				if ((materialflags & NJD_CUSTOMFLAG_TEXANIM2) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM1))
				{
					material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
					AddTextureAnimation(1, material, false, 3, 42, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				//Texanim 3
				if ((materialflags & NJD_CUSTOMFLAG_TEXANIM2) && (materialflags & NJD_CUSTOMFLAG_TEXANIM1))
				{
					material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
					AddTextureAnimation(1, material, false, 4, 57, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	if (act == 2)
	{
		for (unsigned int j = 0; j < landtable->COLCount; j++)
		{
			for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
			{
				materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
				//Texanim 1
				if ((materialflags & NJD_CUSTOMFLAG_TEXANIM1) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM2))
				{
					material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
					AddTextureAnimation(2, material, false, 3, 65, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				//Texanim 2
				if ((materialflags & NJD_CUSTOMFLAG_TEXANIM2) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM1))
				{
					material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
					AddTextureAnimation(2, material, false, 4, 50, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					if (SADXWater_EmeraldCoast) landtable->Col[j].Flags |= 0x00000400;
				}
				//Texanim 3
				if ((materialflags & NJD_CUSTOMFLAG_TEXANIM2) && (materialflags & NJD_CUSTOMFLAG_TEXANIM1))
				{
					material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
					AddTextureAnimation(2, material, false, 4, 80, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
	}
}

void LoadLevelFiles_STG01()
{
	CheckAndUnloadLevelFiles();
	//Landtables
	STG01_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG01\\0.sa1lvl"));
	STG01_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG01\\1.sa1lvl"));
	STG01_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG01\\2.sa1lvl"));
	LandTable *STG01_0 = STG01_0_Info->getlandtable();// &landtable_00081554; // STG01_0_Info->getlandtable();
	LandTable *STG01_1 = STG01_1_Info->getlandtable();// &landtable_000DEB60; // STG01_1_Info->getlandtable();
	LandTable *STG01_2 = STG01_2_Info->getlandtable();// &landtable_0011DD58; // STG01_2_Info->getlandtable();
	STG01_0->TexList = &texlist_ecoast1;
	STG01_1->TexList = &texlist_ecoast2;
	STG01_2->TexList = &texlist_ecoast3;
	RemoveMaterialColors_Landtable(STG01_0);
	RemoveMaterialColors_Landtable(STG01_1);
	RemoveMaterialColors_Landtable(STG01_2);
	WriteData((LandTable**)0x97DA28, STG01_0); //Act 1
	WriteData((LandTable**)0x97DA2C, STG01_1); //Act 2
	WriteData((LandTable**)0x97DA30, STG01_2); //Act 3
	ParseEmeraldCoastColFlagsAndMaterials(STG01_0, 0);
	ParseEmeraldCoastColFlagsAndMaterials(STG01_1, 1);
	ParseEmeraldCoastColFlagsAndMaterials(STG01_2, 2);
	//Ocean models
	if (HighPolyOcean_Dynamic == nullptr) HighPolyOcean_Dynamic = LoadModel("system\\data\\STG01\\Models\\001A132C.sa1mdl", false);
	if (HighPolyOcean_Static == nullptr) HighPolyOcean_Static = LoadModel("system\\data\\STG01\\Models\\001A132C.sa1mdl", false);
	if (LowPolyOcean == nullptr) LowPolyOcean = LoadModel("system\\data\\STG01\\Models\\001A1430.sa1mdl", false);
	LowPolyOceanUVs = LowPolyOcean->basicdxmodel->meshsets[0].vertuv;
	*(NJS_OBJECT*)0x010C03FC = *HighPolyOcean_Dynamic;
	HighPolyOcean_Dynamic->basicdxmodel->mats[0].diffuse.argb.a = 0x99; //Match dynamic ocean alpha with normal ocean
	HighPolyOcean_Static->basicdxmodel->mats[0].diffuse.argb.a = 0x99; //Match dynamic ocean alpha with normal ocean
	HighPolyOceanUVs_Dynamic = HighPolyOcean_Dynamic->basicdxmodel->meshsets[0].vertuv;
	HighPolyOceanUVs_Static = HighPolyOcean_Static->basicdxmodel->meshsets[0].vertuv;
	if (SADXWater_EmeraldCoast)
	{
		WriteData((float*)0x004F8D2F, -2153.0f); //Remove gap in Act 2 small pool
		//Blending modes for ocean models
		LowPolyOcean->basicdxmodel->mats[0].attrflags &= ~NJD_DA_INV_SRC;
		LowPolyOcean->basicdxmodel->mats[0].attrflags |= NJD_DA_ONE;
		LowPolyOcean->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF;
		HighPolyOcean_Dynamic->basicdxmodel->mats[0].attrflags &= ~NJD_DA_INV_SRC;
		HighPolyOcean_Dynamic->basicdxmodel->mats[0].attrflags |= NJD_DA_ONE;
		HighPolyOcean_Dynamic->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF;
		HighPolyOcean_Static->basicdxmodel->mats[0].attrflags &= ~NJD_DA_INV_SRC;
		HighPolyOcean_Static->basicdxmodel->mats[0].attrflags |= NJD_DA_ONE;
		HighPolyOcean_Static->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF;
		WriteData<1>((void*)0x004F783A, 0x0F); //15 animation frames for water in Act 2
		WriteData<1>((void*)0x004F790A, 0x0F); //15 animation frames for water in Act 3
		AddTextureAnimation(0, &HighPolyOcean_Static->basicdxmodel->mats[0], false, 4, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //Static ocean
		AddTextureAnimation(0, &HighPolyOcean_Dynamic->basicdxmodel->mats[0], false, 4, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //Dynamic ocean
		AddTextureAnimation(0, &LowPolyOcean->basicdxmodel->mats[0], false, 4, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //Static ocean
		AddTextureAnimation(1, &LowPolyOcean->basicdxmodel->mats[0], false, 4, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //Static ocean
		AddTextureAnimation(2, &LowPolyOcean->basicdxmodel->mats[0], false, 4, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //Static ocean
	}
	else
	{
		AddTextureAnimation(0, &HighPolyOcean_Static->basicdxmodel->mats[0], false, 4, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //Static ocean
		AddTextureAnimation(0, &HighPolyOcean_Dynamic->basicdxmodel->mats[0], false, 4, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //Dynamic ocean
		AddTextureAnimation(0, &LowPolyOcean->basicdxmodel->mats[0], false, 4, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //Static ocean
		AddTextureAnimation(1, &LowPolyOcean->basicdxmodel->mats[0], false, 4, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //Static ocean
		AddTextureAnimation(2, &LowPolyOcean->basicdxmodel->mats[0], false, 4, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //Static ocean
	}
}

void EmeraldCoast_Init()
{
	ReplaceBIN_DC("SET0100E");
	ReplaceBIN_DC("SET0100S");
	ReplaceBIN_DC("SET0101M");
	ReplaceBIN_DC("SET0101S");
	ReplaceBIN_DC("SET0102B");
	ReplaceBIN_DC("SET0102S");
	switch (EnableSETFixes)
	{
	case SETFixes_Normal:
		AddSETFix("SET0100S");
		AddSETFix("SET0100E");
		AddSETFix("SET0101S");
		break;
	case SETFixes_Extra:
		AddSETFix_Extra("SET0100S");
		AddSETFix_Extra("SET0100E");
		AddSETFix_Extra("SET0101S");
		break;
	default:
		break;
	}
	ReplacePVM("BEACH01");
	ReplacePVM("BEACH02");
	ReplacePVM("BEACH03");
	ReplacePVM("BG_BEACH");
	ReplacePVM("OBJ_BEACH");
	ReplacePVM("BEACH_SEA");
	WriteData<1>((char*)0x4F68E0, 0xC3u); //Disable SetClip_ECoast1
	if (!IamStupidAndIWantFuckedUpOcean)
	{
		for (unsigned int i = 0; i < 3; i++)
		{
			ReplaceBIN_DC("CAM0100E");
			ReplaceBIN_DC("CAM0100S");
			ReplaceBIN_DC("CAM0101S");
			ReplaceBIN_DC("CAM0102B");
			ReplaceBIN_DC("CAM0102S");
			SkyboxScale_EmeraldCoast1[i].x = 1.0f;
			SkyboxScale_EmeraldCoast1[i].y = 1.0f;
			SkyboxScale_EmeraldCoast1[i].z = 1.0f;
			SkyboxScale_EmeraldCoast2[i].x = 1.0f;
			SkyboxScale_EmeraldCoast2[i].y = 1.0f;
			SkyboxScale_EmeraldCoast2[i].z = 1.0f;
			SkyboxScale_EmeraldCoast3[i].x = 1.0f;
			SkyboxScale_EmeraldCoast3[i].y = 1.0f;
			SkyboxScale_EmeraldCoast3[i].z = 1.0f;
			DrawDist_EmeraldCoast1[i].Maximum = -6000.0f;
			DrawDist_EmeraldCoast2[i].Maximum = -3900.0f;
			FogData_EmeraldCoast1[i].Distance = -12000.0f;
			FogData_EmeraldCoast1[i].Layer = -12000.0f;
			FogData_EmeraldCoast2[i].Distance = -12000.0f;
			FogData_EmeraldCoast2[i].Layer = -12000.0f;
		}
	}
	else
	{
		ReplaceBIN("CAM0100E", "CAM0100E_R");
		ReplaceBIN("CAM0100S", "CAM0100S_R");
		ReplaceBIN("CAM0101S", "CAM0101S_R");
		ReplaceBIN("CAM0102S", "CAM0102S_R");
		ReplaceBIN("CAM0102B", "CAM0102B_R");
	}
	//Models
	RemoveVertexColors_Object((NJS_OBJECT*)0x10C782C); //Tails' crashed plane
	*(NJS_OBJECT*)0x10A298C = *LoadModel("system\\data\\STG01\\Models\\00183CDC.sa1mdl", false); //Jump panel (OJump) 
	*(NJS_OBJECT*)0x10937B4 = *LoadModel("system\\data\\STG01\\Models\\00174F68.sa1mdl", false); //Pier thing
	*(NJS_OBJECT*)0x10939A4 = *LoadModel("system\\data\\STG01\\Models\\0017514C.sa1mdl", false); //Log
	*(NJS_OBJECT*)0x10945EC = *LoadModel("system\\data\\STG01\\Models\\0017514C.sa1mdl", false); //Log2
	*(NJS_OBJECT*)0x1097F8C = *LoadModel("system\\data\\STG01\\Models\\001795B4.sa1mdl", false); //Pier edge
	*(NJS_OBJECT*)0x1049A1C = *LoadModel("system\\data\\STG01\\Models\\0012BE80.sa1mdl", false); //Pier small
	*(NJS_OBJECT*)0x104C00C = *LoadModel("system\\data\\STG01\\Models\\0012E428.sa1mdl", true); //Dolphin
	*(NJS_OBJECT*)0x106BB4C = *LoadModel("system\\data\\STG01\\Models\\0014DF28.sa1mdl", true); //Whale
	*(NJS_MODEL_SADX*)0x010C06C8 = *LoadModel("system\\data\\STG01\\Models\\001A16B8.sa1mdl", false)->basicdxmodel; //Spike gate shadow
	if (SADXWater_EmeraldCoast)
	{
		//Different UVs on the dynamic ocean model for SADX water
		for (unsigned int rq = 0; rq < LengthOfArray(uvSTG01_00CBB000_d); rq++)
		{
			uvSTG01_00CBB000_d[rq].u = round(0.5 * uvSTG01_00CBB000_d[rq].u);
			uvSTG01_00CBB000_d[rq].v = round(0.5 * uvSTG01_00CBB000_d[rq].v);
		}
		BigDeco1 = LoadModel("system\\data\\STG01\\Models\\DX\\00ACA3EC.sa1mdl", false);
		BigDeco2 = LoadModel("system\\data\\STG01\\Models\\DX\\00AC97B4.sa1mdl", false);
		BigDeco3 = LoadModel("system\\data\\STG01\\Models\\DX\\00ACA028.sa1mdl", false);
	}
	//Whale splash transparency fixes
	WriteCall((void*)0x00502F8F, WhaleSplash);
	WriteCall((void*)0x00502F9A, WhaleSplash);
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(LevelSpecular_STG01, LengthOfArray(LevelSpecular_STG01), &ForceDiffuse0Specular0);
		material_register_ptr(ObjectSpecular_STG01, LengthOfArray(ObjectSpecular_STG01), &ForceDiffuse0Specular1);
	}
	WriteData<2>((void*)0x004F8A9A, 0x90); //Disable water animation in Act 1
	WriteData<2>((char*)0x004F7816, 0xFF); //Disable water animation in Act 2
	WriteData<2>((char*)0x004F78E6, 0xFF); //Disable water animation in Act 3
	ResizeTextureList((NJS_TEXLIST*)0x010C0508, 10); //BEACH_SEA
	ResizeTextureList((NJS_TEXLIST*)0xF812AC, textures_ecoast1);
	ResizeTextureList((NJS_TEXLIST*)0xEF553C, textures_ecoast2);
	ResizeTextureList((NJS_TEXLIST*)0xE9A4CC, textures_ecoast3);
	//Write floats to fix buggy SADX water positioning code
	//Act 2
	WriteData((float**)0x004F7876, &float1);
	WriteData((float**)0x004F7891, &float1);
	WriteData((float**)0x004F78A4, &float2);
	WriteData((float**)0x004F78B1, &float2);
	//Act 3
	WriteData((float**)0x004F795D, &float1);
	WriteData((float**)0x004F7978, &float1);
	WriteData((float**)0x004F798B, &float2);
	WriteData((float**)0x004F7998, &float2);
	//Write water rendering functions
	WriteJump((void*)0x00501130, Obj_EC1Water_DisplayX); //Act 1
	WriteJump((void*)0x004F76C0, Obj_EC23Water_DisplayX); //Act 2
	WriteJump((void*)0x004F7760, Obj_EC23Water_DisplayX); //Act 3
	for (unsigned int i = 0; i < 3; i++)
	{
		DrawDist_EmeraldCoast3[i].Maximum = -4000.0f;
		EmeraldCoast3Fog[i].Toggle = 0;
		EmeraldCoast3Fog[i].Layer = -1200.0f;
		EmeraldCoast3Fog[i].Distance = -3000.0f;
		EmeraldCoast3Fog[i].Color = 0xFFFFFFFF;
	}
}

void EmeraldCoast_OnFrame()
{
	if (CurrentLevel == LevelIDs_EmeraldCoast)
	{
		//Hide skybox bottom in Act 3
		if (STG01_2_Info && !IamStupidAndIWantFuckedUpOcean)
		{
			if (CurrentAct == 2 && Camera_Data1 != nullptr)
			{
				if (Camera_Data1->Position.y < 50 && SkyboxHidden == 0)
				{
					((NJS_OBJECT *)0x103B37C)->evalflags |= NJD_EVAL_HIDE;
					SkyboxHidden = 1;
				}
				if (Camera_Data1->Position.y >= 50 && SkyboxHidden == 1)
				{
					((NJS_OBJECT *)0x103B37C)->evalflags &= ~NJD_EVAL_HIDE;
					SkyboxHidden = 0;
				}
			}
		}
		//Restore ocean UVs on level exit/restart
		if ((HighPolyOcean_Dynamic) && (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
		{
			for (unsigned int r = 0; r < LengthOfArray(uvSTG01_00CC0530_d); r++)
			{
				LowPolyOceanUVs[r].u = uvSTG01_00CC0530_d[r].u;
				LowPolyOceanUVs[r].v = uvSTG01_00CC0530_d[r].v;
			}
			for (unsigned int r2 = 0; r2 < LengthOfArray(uvSTG01_00CBB000_d); r2++)
			{
				HighPolyOceanUVs_Dynamic[r2].u = uvSTG01_00CBB000_d[r2].u;
				HighPolyOceanUVs_Dynamic[r2].v = uvSTG01_00CBB000_d[r2].v;
				HighPolyOceanUVs_Static[r2].u = uvSTG01_00CBB000_d[r2].u;
				HighPolyOceanUVs_Static[r2].v = uvSTG01_00CBB000_d[r2].v;
			}
		}
		//Fog stuff in Act 3
		if (CurrentAct == 2 && !IsGamePaused())
		{
			if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
			{
				inside_secret_area = 0;
				CurrentFogToggle = 0;
			}
			if (Camera_Data1 != nullptr && Camera_Data1->Position.z > 2000)
			{
				inside_secret_area = 1;
				CurrentFogToggle = 1;
				if (CurrentFogLayer < -21) CurrentFogLayer = CurrentFogLayer + 20;
			}
			else
			{
				if (CurrentFogLayer > -1200) CurrentFogLayer = CurrentFogLayer - 20;
				if (CurrentFogLayer <= -1200 && CurrentFogToggle == 1)
				{
					inside_secret_area = 0;
					CurrentFogToggle = 0;
				}
			}
		}
	}
}