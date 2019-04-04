#include "stdafx.h"

NJS_TEXNAME textures_skydeck1[76];
NJS_TEXLIST texlist_skydeck1 = { arrayptrandlength(textures_skydeck1) };

NJS_TEXNAME textures_skydeck2[58];
NJS_TEXLIST texlist_skydeck2 = { arrayptrandlength(textures_skydeck2) };

NJS_TEXNAME textures_skydeck3[65];
NJS_TEXLIST texlist_skydeck3 = { arrayptrandlength(textures_skydeck3) };

#include "SkyDeck_objects.h"
#include "SkyDeck3_Fixes.h"

static int UVShift1 = 0;
static int UVShift2 = 0;
static int SkyboxAlpha = 255;
static bool SkyDeckTransitionEnable = false;
DataPointer(float, SkyDeckAltitude, 0x03C80610); //0 to 700
DataPointer(float, CurrentSkyBoxScaleX, 0x03ABDC94);
DataPointer(float, CurrentSkyBoxScaleY, 0x03ABDC98);
DataPointer(float, CurrentSkyBoxScaleZ, 0x03ABDC9C);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(float, CurrentFogDistance, 0x03ABDC64);
DataPointer(int, dword_3C7F030, 0x3C7F030);
DataPointer(float, flt_3C8046C, 0x3C8046C);
DataPointer(NJS_BGRA, CurrentFogColorX, 0x03ABDC68);
DataPointer(NJS_OBJECT, stru_214E2A0, 0x214E2A0);
DataPointer(NJS_OBJECT, stru_214C9E4, 0x214C9E4);
DataPointer(NJS_OBJECT, stru_214E3AC, 0x214E3AC);
DataPointer(NJS_OBJECT, stru_214BF20, 0x214BF20);
DataArray(NJS_OBJECT*, Connect0DebrisArray, 0x223AE90, 9);
DataArray(NJS_OBJECT*, Talap0DebrisArray, 0x0223AF78, 34);
DataArray(char, byte_223AEB4, 0x223AEB4, 100);
DataArray(char, byte_223B000, 0x223B000, 4);
DataArray(FogData, SkyDeck1Fog, 0x0203A094, 3);
DataArray(FogData, SkyDeck2Fog, 0x0203A0C4, 3);
DataArray(FogData, SkyDeck3Fog, 0x0203A0F4, 3);
DataArray(SkyboxScale, SkyDeck3SkyboxScale, 0x02039FE0, 3);
DataArray(DrawDistance, SkyDeck1DrawDist, 0x0203A04C, 3);
DataArray(DrawDistance, SkyDeck2DrawDist, 0x0203A064, 3);
DataArray(DrawDistance, SkyDeck3DrawDist, 0x0203A07C, 3);
FunctionPointer(void, sub_408530, (NJS_OBJECT *a1), 0x408530);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float scale), 0x407A00);
FunctionPointer(void, sub_5ED790, (ObjectMaster *a1, NJS_OBJECT *a2), 0x5ED790);

NJS_MATERIAL* DisableAlphaRejection_SkyDeck[] = {
	//Decals
	&matlistSTG06_00197C5C[0],
	&matlistSTG06_00198788[0],
	&matlistSTG06_00198990[0],
	&matlistSTG06_0019888C[0],
	&matlistSTG06_00198A94[0],
	&matlistSTG06_00198B98[0],
	&matlistSTG06_00198C9C[0],
};

NJS_MATERIAL* WhiteDiffuse_SkyDeck[] = {
	//Aircraft stuff
	&matlistSTG06_001E11BC[4],
	&matlistSTG06_001E11BC[5],
	&matlistSTG06_001E11BC[6],
	&matlistSTG06_001E11BC[7],
	&matlistSTG06_001E11BC[8],
	//OUeKi
	((NJS_MATERIAL*)0x021FB38C),
	((NJS_MATERIAL*)0x021FB3A0),
	((NJS_MATERIAL*)0x021FB3B4),
	//Hangar 2
	&matlistSTG06_001599A0[0],
	&matlistSTG06_001599A0[1],
	&matlistSTG06_001599A0[2],
	&matlistSTG06_001599A0[3],
	&matlistSTG06_001599A0[4],
};

NJS_MATERIAL* ObjectSpecular_SkyDeck[] = {
	((NJS_MATERIAL*)0x02151EF0),
	((NJS_MATERIAL*)0x02151F04),
	((NJS_MATERIAL*)0x021512F8),
	((NJS_MATERIAL*)0x0215130C),
	((NJS_MATERIAL*)0x02151320),
	((NJS_MATERIAL*)0x02151334),
	((NJS_MATERIAL*)0x021508C4),
	((NJS_MATERIAL*)0x021508D8),
	((NJS_MATERIAL*)0x021508EC),
	((NJS_MATERIAL*)0x02150234),
	((NJS_MATERIAL*)0x02150248),
	((NJS_MATERIAL*)0x0214FBA8),
	((NJS_MATERIAL*)0x0214FBBC),
	((NJS_MATERIAL*)0x0214F388),
	((NJS_MATERIAL*)0x0214F39C),
	((NJS_MATERIAL*)0x0214F3B0),
	((NJS_MATERIAL*)0x0214F3C4),
	((NJS_MATERIAL*)0x0214F3D8),
	((NJS_MATERIAL*)0x0214F3EC),
	((NJS_MATERIAL*)0x0214EDC0),
	((NJS_MATERIAL*)0x0214EDD4),
	((NJS_MATERIAL*)0x0214EDE8),
	((NJS_MATERIAL*)0x0214EB58),
	((NJS_MATERIAL*)0x0214EB6C),
	((NJS_MATERIAL*)0x0214EB80),
	((NJS_MATERIAL*)0x0214E4EC),
	((NJS_MATERIAL*)0x0214E500),
	//OConnect pieces
	((NJS_MATERIAL*)0x021E06F0),
	((NJS_MATERIAL*)0x021E0704),
	((NJS_MATERIAL*)0x021E0718),
	((NJS_MATERIAL*)0x021E072C),
	((NJS_MATERIAL*)0x021E0740),
	((NJS_MATERIAL*)0x021E0754),
	((NJS_MATERIAL*)0x021E0768),
	((NJS_MATERIAL*)0x021E077C),
	((NJS_MATERIAL*)0x021E0E08),
	((NJS_MATERIAL*)0x021E0E1C),
	((NJS_MATERIAL*)0x021E0E30),
	((NJS_MATERIAL*)0x021E0E44),
	((NJS_MATERIAL*)0x021E0E58),
	((NJS_MATERIAL*)0x021E0E6C),
	((NJS_MATERIAL*)0x021E0E80),
	((NJS_MATERIAL*)0x021E0E94),
	((NJS_MATERIAL*)0x021E1520),
	((NJS_MATERIAL*)0x021E1534),
	((NJS_MATERIAL*)0x021E1548),
	((NJS_MATERIAL*)0x021E155C),
	((NJS_MATERIAL*)0x021E1570),
	((NJS_MATERIAL*)0x021E1584),
	((NJS_MATERIAL*)0x021E1598),
	((NJS_MATERIAL*)0x021E15AC),
	((NJS_MATERIAL*)0x021E1C38),
	((NJS_MATERIAL*)0x021E1C4C),
	((NJS_MATERIAL*)0x021E1C60),
	((NJS_MATERIAL*)0x021E1C74),
	((NJS_MATERIAL*)0x021E1C88),
	((NJS_MATERIAL*)0x021E1C9C),
	((NJS_MATERIAL*)0x021E1CB0),
	((NJS_MATERIAL*)0x021E1CC4),
	((NJS_MATERIAL*)0x021E2350),
	((NJS_MATERIAL*)0x021E2364),
	((NJS_MATERIAL*)0x021E2378),
	((NJS_MATERIAL*)0x021E2834),
	((NJS_MATERIAL*)0x021E2848),
	((NJS_MATERIAL*)0x021E29E8),
	((NJS_MATERIAL*)0x021E29FC),
	((NJS_MATERIAL*)0x021E2E0C),
	((NJS_MATERIAL*)0x021E2E20),
	((NJS_MATERIAL*)0x021E3048),
	((NJS_MATERIAL*)0x021E305C),
	((NJS_MATERIAL*)0x021E3070),
	//Cyl_S
	((NJS_MATERIAL*)0x021774D8),
	((NJS_MATERIAL*)0x021774EC),
	((NJS_MATERIAL*)0x02177500),
	((NJS_MATERIAL*)0x02176EBC),
	((NJS_MATERIAL*)0x02176ED0),
	((NJS_MATERIAL*)0x02176EE4),
	//Other stuff
	((NJS_MATERIAL*)0x021768B0),
	((NJS_MATERIAL*)0x021768C4),
	((NJS_MATERIAL*)0x021768D8),
	((NJS_MATERIAL*)0x02175E68),
	((NJS_MATERIAL*)0x02175E7C),
	((NJS_MATERIAL*)0x02175E90),
	((NJS_MATERIAL*)0x02175984),
	((NJS_MATERIAL*)0x02175998),
	//Other stuff 2
	((NJS_MATERIAL*)0x02175378),
	((NJS_MATERIAL*)0x0217538C),
	((NJS_MATERIAL*)0x021753A0),
	((NJS_MATERIAL*)0x02174930),
	((NJS_MATERIAL*)0x02174944),
	((NJS_MATERIAL*)0x02174958),
	((NJS_MATERIAL*)0x02174450),
	((NJS_MATERIAL*)0x02174464),
	//Big cylinder near the end of Act 1
	((NJS_MATERIAL*)0x02173CA4),
	((NJS_MATERIAL*)0x02173CB8),
	((NJS_MATERIAL*)0x02173CCC),
	((NJS_MATERIAL*)0x021730F0),
	((NJS_MATERIAL*)0x02173104),
	((NJS_MATERIAL*)0x02173118),
	((NJS_MATERIAL*)0x0217312C),
	//Another big cylinder
	((NJS_MATERIAL*)0x021728F4),
	((NJS_MATERIAL*)0x02172908),
	((NJS_MATERIAL*)0x0217291C),
	((NJS_MATERIAL*)0x02171D40),
	((NJS_MATERIAL*)0x02171D54),
	((NJS_MATERIAL*)0x02171D68),
	((NJS_MATERIAL*)0x02171D7C),
	//One more cylinder
	((NJS_MATERIAL*)0x0216F6B0),
	((NJS_MATERIAL*)0x0216F6C4),
	((NJS_MATERIAL*)0x0216F6D8),
	((NJS_MATERIAL*)0x0216F6EC),
	//Bottom of big cylinder
	((NJS_MATERIAL*)0x02177B28),
	((NJS_MATERIAL*)0x02177B3C),
	((NJS_MATERIAL*)0x02177B50),
	//OTalap_0 pieces
	((NJS_MATERIAL*)0x021E3310),
	((NJS_MATERIAL*)0x021E342C),
	((NJS_MATERIAL*)0x021E3440),
	((NJS_MATERIAL*)0x021E3454),
	((NJS_MATERIAL*)0x021E37E8),
	((NJS_MATERIAL*)0x021E38E0),
	((NJS_MATERIAL*)0x021E39FC),
	((NJS_MATERIAL*)0x021E3A10),
	((NJS_MATERIAL*)0x021E3A24),
	((NJS_MATERIAL*)0x021E3C90),
	((NJS_MATERIAL*)0x021E3CA4),
	((NJS_MATERIAL*)0x021E3CB8),
	((NJS_MATERIAL*)0x021E3F20),
	((NJS_MATERIAL*)0x021E3F34),
	((NJS_MATERIAL*)0x021E3F48),
	((NJS_MATERIAL*)0x021E41D8),
	((NJS_MATERIAL*)0x021E42F8),
	((NJS_MATERIAL*)0x021E430C),
	((NJS_MATERIAL*)0x021E4320),
	((NJS_MATERIAL*)0x021E4334),
	((NJS_MATERIAL*)0x021E46C8),
	((NJS_MATERIAL*)0x021E46DC),
	((NJS_MATERIAL*)0x021E46F0),
	((NJS_MATERIAL*)0x021E4704),
	((NJS_MATERIAL*)0x021E4A98),
	((NJS_MATERIAL*)0x021E4AAC),
	((NJS_MATERIAL*)0x021E4AC0),
	((NJS_MATERIAL*)0x021E4E58),
	((NJS_MATERIAL*)0x021E4E6C),
	((NJS_MATERIAL*)0x021E4E80),
	((NJS_MATERIAL*)0x021E50E8),
	((NJS_MATERIAL*)0x021E5204),
	((NJS_MATERIAL*)0x021E52FC),
	((NJS_MATERIAL*)0x021E53F4),
	((NJS_MATERIAL*)0x021E5510),
	((NJS_MATERIAL*)0x021E562C),
	((NJS_MATERIAL*)0x021E5640),
	((NJS_MATERIAL*)0x021E58E0),
	((NJS_MATERIAL*)0x021E58F4),
	((NJS_MATERIAL*)0x021E5D00),
	((NJS_MATERIAL*)0x021E5D14),
	((NJS_MATERIAL*)0x021E5F10),
	((NJS_MATERIAL*)0x021E5F24),
	((NJS_MATERIAL*)0x021E6150),
	((NJS_MATERIAL*)0x021E6164),
	((NJS_MATERIAL*)0x021E662C),
	((NJS_MATERIAL*)0x021E6640),
	((NJS_MATERIAL*)0x021E6800),
	((NJS_MATERIAL*)0x021E6814),
	((NJS_MATERIAL*)0x021E6828),
	((NJS_MATERIAL*)0x021E6D7C),
	((NJS_MATERIAL*)0x021E6D90),
	((NJS_MATERIAL*)0x021E6DA4),
	((NJS_MATERIAL*)0x021E7084),
	((NJS_MATERIAL*)0x021E7098),
	((NJS_MATERIAL*)0x021E70AC),
	((NJS_MATERIAL*)0x021E7560),
	((NJS_MATERIAL*)0x021E7574),
	((NJS_MATERIAL*)0x021E7738),
	((NJS_MATERIAL*)0x021E774C),
	((NJS_MATERIAL*)0x021E7760),
	((NJS_MATERIAL*)0x021E7CB4),
	((NJS_MATERIAL*)0x021E7CC8),
	((NJS_MATERIAL*)0x021E7CDC),
	((NJS_MATERIAL*)0x021E7FBC),
	((NJS_MATERIAL*)0x021E7FD0),
	((NJS_MATERIAL*)0x021E81A0),
	((NJS_MATERIAL*)0x021E81B4),
	((NJS_MATERIAL*)0x021E83E0),
	((NJS_MATERIAL*)0x021E83F4),
	((NJS_MATERIAL*)0x021E85B8),
	((NJS_MATERIAL*)0x021E85CC),
	((NJS_MATERIAL*)0x021E8790),
	((NJS_MATERIAL*)0x021E87A4),
	//DUCT_0
	((NJS_MATERIAL*)0x0219E9E8),
	((NJS_MATERIAL*)0x0219E9FC),
	((NJS_MATERIAL*)0x0219EA10),
	((NJS_MATERIAL*)0x0219EA24),
	((NJS_MATERIAL*)0x0219EA38),
	((NJS_MATERIAL*)0x0219EA4C),
	((NJS_MATERIAL*)0x0219EA60),
	((NJS_MATERIAL*)0x0219EA74),
	//Cannon thing
	((NJS_MATERIAL*)0x02196AF4),
	((NJS_MATERIAL*)0x02196B08),
	((NJS_MATERIAL*)0x02196010),
	((NJS_MATERIAL*)0x02196024),
	((NJS_MATERIAL*)0x02196038),
	((NJS_MATERIAL*)0x0219604C),
	((NJS_MATERIAL*)0x02195B10),
	((NJS_MATERIAL*)0x02195B24),
	((NJS_MATERIAL*)0x02195B38),
	//Another cannon thing
	((NJS_MATERIAL*)0x02198068),
	((NJS_MATERIAL*)0x0219807C),
	((NJS_MATERIAL*)0x02198090),
	((NJS_MATERIAL*)0x021980A4),
	((NJS_MATERIAL*)0x021980B8),
	((NJS_MATERIAL*)0x021980CC),
	((NJS_MATERIAL*)0x021977D0),
	((NJS_MATERIAL*)0x021977E4),
	((NJS_MATERIAL*)0x021972D0),
	((NJS_MATERIAL*)0x021972E4),
	((NJS_MATERIAL*)0x021972F8),
	((NJS_MATERIAL*)0x02196EC4),
	//Yet another cannon thing
	((NJS_MATERIAL*)0x0219A938),
	((NJS_MATERIAL*)0x0219A94C),
	((NJS_MATERIAL*)0x0219A960),
	((NJS_MATERIAL*)0x0219A974),
	((NJS_MATERIAL*)0x0219A1F4),
	((NJS_MATERIAL*)0x0219A208),
	((NJS_MATERIAL*)0x0219A21C),
	((NJS_MATERIAL*)0x02199DCC),
	((NJS_MATERIAL*)0x02199DE0),
	((NJS_MATERIAL*)0x02199DF4),
	((NJS_MATERIAL*)0x021990F8),
	((NJS_MATERIAL*)0x0219910C),
	((NJS_MATERIAL*)0x02199120),
	((NJS_MATERIAL*)0x02199134),
	((NJS_MATERIAL*)0x02198BC4),
	((NJS_MATERIAL*)0x02198BD8),
	((NJS_MATERIAL*)0x02198BEC),
	((NJS_MATERIAL*)0x02198694),
	((NJS_MATERIAL*)0x021986A8),
	((NJS_MATERIAL*)0x021986BC),
	//OSkyEv
	((NJS_MATERIAL*)0x021F5420),
	((NJS_MATERIAL*)0x021F5434),
	((NJS_MATERIAL*)0x021F5448),
	((NJS_MATERIAL*)0x021F4EF4),
	((NJS_MATERIAL*)0x021F4F08),
	((NJS_MATERIAL*)0x021F4F1C),
};

void __cdecl SkyDeck_QueueDrawQ(NJS_OBJECT *obj, NJS_TEX *uv, int uvSTG06_count, float depth)
{
	NJS_OBJECT *v3; // ebx
	NJS_MODEL_SADX *v4; // ebp
	NJS_MESHSET_SADX *v5; // ebx
	NJS_TEX *v6; // eax

	v3 = (NJS_OBJECT *)late_alloca(0x34);
	if (v3)
	{
		memcpy(v3, obj, sizeof(NJS_OBJECT));
		v4 = (NJS_MODEL_SADX *)late_alloca(44);
		if (v4)
		{
			memcpy(v4, obj->model, sizeof(NJS_MODEL_SADX));
			v3->model = v4;
			v5 = (NJS_MESHSET_SADX *)late_alloca(0x1C * v4->nbMeshset);
			if (v5)
			{
				memcpy(v5, obj->basicdxmodel->meshsets, sizeof(NJS_MESHSET_SADX));
				v4->meshsets = v5;
				v6 = (NJS_TEX *)late_alloca(4 * uvSTG06_count);
				if (v6)
				{
					memcpy(v6, uv, 4 * uvSTG06_count);
					v5->vertuv = v6;
					DrawQueueDepthBias = depth;
					ProcessModelNode_A_WrapperB(obj, (QueuedModelFlagsB)0);
					DrawQueueDepthBias = 0.0f;
				}
			}
		}
	}
}

void SkyDeckSky_new(ObjectMaster *_this)
{
	float depthsucks;
	unsigned __int64 v1; // rax@6
	NJS_OBJECT *v2; // esi@7
	long double v3; // st7@9
	long double v4; // st7@13
	NJS_OBJECT *v5; // eax@13
	long double v6; // st7@15
	long double v7; // st7@19
	NJS_OBJECT *v8; // eax@19
	NJS_ARGB a1; // [sp+4h] [bp-10h]@13
	njControl3D_Backup();
	njControl3D_Add(NJD_CONTROL_3D_OFFSET_MATERIAL);
	DisableFog();
	Direct3D_SetNearFarPlanes(SkyboxDrawDistance.Minimum, SkyboxDrawDistance.Maximum);
	njPushMatrix(0);
	njTranslate(0, SkyDeck_SkyPosition.x, SkyDeck_SkyPosition.y, SkyDeck_SkyPosition.z);
	if (SkyDeck_SkyRotationZ)
	{
		njRotateZ(0, (unsigned __int16)SkyDeck_SkyRotationZ);
	}
	if (SkyDeck_SkyRotationX)
	{
		njRotateX(0, (unsigned __int16)SkyDeck_SkyRotationX);
	}
	njScale(0, 1.7f, 1.0f, 1.7f);
	if (!dword_3C7F030)
	{
		v1 = (unsigned __int64)(flt_3C8046C * 255.0f);
		SetGlobalPoint2Col_Colors(
			v1 | (((unsigned int)v1 | (((unsigned __int8)v1 | 0xFFFFFF00) << 8)) << 8),
			v1 | (((unsigned int)v1 | (((unsigned __int8)v1 | 0xFFFFFF00) << 8)) << 8),
			v1 | (((unsigned int)v1 | (((unsigned __int8)v1 | 0xFFFFFF00) << 8)) << 8));
		if (!MissedFrames)
		{
			v2 = &stru_214E2A0;
			if (SkyDeck_SkyPosition.y - 1350.0f - 50.0f <= Camera_Data1->Position.y)
			{
				v2 = &stru_214C9E4;
			}
			njSetTexture(&OBJ_SKYDECK_TEXLIST);
			njScaleEx(&Skybox_Scale);
			sub_408530(v2);
			njScale(0, 1.0f, 1.0f, 1.0f);
			v3 = 1.0f - fabs(Camera_Data1->Position.y - (SkyDeck_SkyPosition.y - 1350.0f)) * 0.025f;
			if (v3 >= 0.05f)
			{
				if (v3 > 0.9f)
				{
					v3 = 0.9f;
				}
			}
			else
			{
				v3 = 0.05f;
			}
			v4 = v3 * -1.0f;
			a1.b = v4;
			a1.g = v4;
			a1.r = v4;
			a1.a = v4;
			SetMaterialAndSpriteColor(&a1);
			v5 = &objectSTG06_01D4E3AC;
			depthsucks = -20000.0f;
			if (SkyDeck_SkyPosition.y - 1350.0f - 100.0f <= Camera_Data1->Position.y)
			{
				depthsucks = -12000.0f;
				v5 = &objectSTG06_01D4BF20;
			}
			SkyDeck_QueueDrawQ(v5, SkyDeck_SkyUVsB, 32, depthsucks);
			v6 = 1.0f - fabs(Camera_Data1->Position.y - (SkyDeck_SkyPosition.y - 1350.0f - 100.0f)) * 0.025f;
			if (v6 >= 0.01f)
			{
				if (v6 > 0.9f)
				{
					v6 = 0.9f;
				}
			}
			else
			{
				v6 = 0.01f;
			}
			v7 = v6 * -1.0f;
			a1.b = v7;
			a1.g = v7;
			a1.r = v7;
			a1.a = v7;
			SetMaterialAndSpriteColor(&a1);
			njTranslate(0, 0.0f, -100.0f, 0.0f);
			v8 = &objectSTG06_01D4E3AC_2;
			if (SkyDeck_SkyPosition.y - 1350.0f - 100.0f <= Camera_Data1->Position.y)
			{
				v8 = &objectSTG06_01D4BF20_2;
			}
			SkyDeck_QueueDrawQ(v8, SkyDeck_SkyUVsA, 32, -16000.0f);
			if (SkyDeck_SkyPosition.y - 1350.0f - 100.0f > Camera_Data1->Position.y)
			{
				a1.a = a1.a - 0.25f;
				SetMaterialAndSpriteColor(&a1);
				njTranslate(0, 0.0f, -600.0f, 0.0f);
				njScaleEx(&Skybox_Scale);
				VectorMaxAbs(&Skybox_Scale);
				SkyDeck_QueueDrawQ(&objectSTG06_01D4E3AC, SkyDeck_SkyUVsA, 32, -16000.0f);
				njScale(0, 1.0f, 1.0f, 1.0f);
				njTranslate(0, 0.0f, -100.0f, 0.0f);
				SkyDeck_QueueDrawQ(&objectSTG06_01D4E3AC_2, SkyDeck_SkyUVsB, 32, -12000.0f);
			}
			ClampGlobalColorThing_Thing();
		}
	}
	njPopMatrix(1u);
	ToggleStageFog();
	njControl3D_Restore();
	Direct3D_SetNearFarPlanes(LevelDrawDistance.Minimum, LevelDrawDistance.Maximum);
}

void RenderSmallCloud(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = -6000.0f;
	ProcessModelNode_A_Wrapper(a1, a2, a3);
	DrawQueueDepthBias = 0.0f;
}

void __cdecl Connect0Display_FixedRotation(ObjectMaster *a1)
{
	ObjectMaster *v1; // esi
	EntityData1 *v2; // ebp
	Angle v3; // eax
	int v4; // ebx
	NJS_OBJECT **v5; // edi
	void *v6; // esi
	Sint32 v7; // eax
	int v8; // esi
	Angle v9; // eax
	Angle v10; // eax

	v1 = a1;
	v2 = a1->Data1;
	if (!ClipObject(a1, 4410100.0f) && v2->Action != 1 && !MissedFrames)
	{
		njPushMatrix(0);
		njTranslateV(0, &v2->Position);
		v3 = v2->Rotation.y;
		if (v3 && !*(Sint32*)&v2->LoopData)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		if (*(Sint32*)&v2->LoopData)
		{
			njSetTexture(&OBJ_SKYDECK_TEXLIST);
			v4 = 0;
			v5 = Connect0DebrisArray;
			do
			{
				v6 = (void *)v2->LoopData;
				v7 = *(_DWORD *)(*(Sint32*)&v6 + v4);
				v8 = v4 + *(Sint32*)&v6;
				if (!v7)
				{
					njPushMatrix(0);
					njTranslateV(0, (NJS_VECTOR *)(v8 + 16));
					v9 = *(_DWORD *)(v8 + 40);
					if (v9)
					{
						njRotateZ(0, v9);
					}
					v10 = *(_DWORD *)(v8 + 36);
					if (v10)
					{
						njRotateX(0, v10);
					}
					sub_407A00((*v5)->basicdxmodel, 1.0f);
					njPopMatrix(1u);
				}
				++v5;
				v4 += 44;
			} while ((signed int)v5 < (signed int)byte_223AEB4);
			v1 = a1;
		}
		else
		{
			njSetTexture(&OBJ_SKYDECK_TEXLIST);
			ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x216B984, 1.0);
		}
		njPopMatrix(1u);
		if (!*(Sint32*)&v2->LoopData)
		{
			sub_5ED790(v1, (NJS_OBJECT*)0x21D6D44);
		}
	}
}

void __cdecl Talap0Display_FixedRotation(ObjectMaster *a2)
{
	EntityData1 *v1; // ebp
	Angle v2; // eax
	Angle v22; // eax
	int v3; // ebx
	NJS_OBJECT** v4; // edi
	void *v5; // esi
	int v6; // eax
	int v7; // esi
	Angle v8; // eax
	Angle v9; // eax

	v1 = a2->Data1;
	if (!ClipObject(a2, 4410100.0) && v1->Action != 1 && !MissedFrames)
	{
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.y;
		v22 = v1->Rotation.y + 0xC000;
		if (v2 && !*(Sint32 *)&v1->LoopData)
		{
			njRotateY(0, v2);
		}
		if (*(Sint32 *)&v1->LoopData)
		{
			njRotateY(0, v22);
			njSetTexture(&OBJ_SKYDECK_TEXLIST);
			v3 = 0;
			v4 = Talap0DebrisArray;
			do
			{
				v5 = (void *)v1->LoopData;
				v6 = *(_DWORD *)(*(Sint32 *)&v5 + v3);
				v7 = v3 + *(Sint32*)&v5;
				if (!v6)
				{
					njPushMatrix(0);
					njTranslateV(0, (NJS_VECTOR *)(v7 + 16));
					v8 = *(_DWORD *)(v7 + 40);
					if (v8)
					{
						njRotateZ(0, v8);
					}
					v9 = *(_DWORD *)(v7 + 36);
					if (v9)
					{
						njRotateX(0, v9);
					}
					sub_407A00(*((NJS_MODEL_SADX **)*v4 + 1), 1.0);
					njPopMatrix(1u);
				}
				++v4;
				v3 += 44;
			} while ((signed int)v4 < (signed int)byte_223B000);
			njPopMatrix(1u);
		}
		else
		{
			njSetTexture(&OBJ_SKYDECK_TEXLIST);
			ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x21642D4, 1.0);
			njPopMatrix(1u);
		}
	}
}

void UnloadLevelFiles_STG06()
{
	delete STG06_0_Info;
	delete STG06_1_Info;
	delete STG06_2_Info;
	STG06_0_Info = nullptr;
	STG06_1_Info = nullptr;
	STG06_2_Info = nullptr;
}

void LoadLevelFiles_STG06()
{
	CheckAndUnloadLevelFiles();
	STG06_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG06\\0.sa1lvl"));
	STG06_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG06\\1.sa1lvl"));
	STG06_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG06\\2.sa1lvl"));
	LandTable *STG06_0 = STG06_0_Info->getlandtable();
	LandTable *STG06_1 = STG06_1_Info->getlandtable();
	LandTable *STG06_2 = STG06_2_Info->getlandtable();
	STG06_0->TexList = &texlist_skydeck1;
	STG06_1->TexList = &texlist_skydeck2;
	STG06_2->TexList = &texlist_skydeck3;
	WriteData((LandTable**)0x97DAC8, STG06_0);
	WriteData((LandTable**)0x97DACC, STG06_1);
	WriteData((LandTable**)0x97DAD0, STG06_2);
	((LandTable*)0x022369A0)->COLCount = STG06_1->COLCount;
	((LandTable*)0x022369A0)->Col = STG06_1->Col;
}

void SkyDeck_Init()
{
	ReplaceBIN_DC("SET0600M");
	ReplaceBIN_DC("SET0600S");
	ReplaceBIN_DC("SET0601M");
	ReplaceBIN_DC("SET0601S");
	ReplaceBIN_DC("SET0602K");
	ReplaceBIN_DC("SET0602M");
	ReplaceBIN_DC("SET0602S");
	ReplaceBIN_DC("CAM0600M");
	ReplaceBIN_DC("CAM0600S");
	ReplaceBIN_DC("CAM0601S");
	ReplaceBIN_DC("CAM0602K");
	ReplaceBIN_DC("CAM0602S");
	switch (EnableSETFixes)
	{
	case SETFixes_Normal:
		AddSETFix("SET0600M");
		AddSETFix("SET0600S");
		AddSETFix("SET0601S");
		AddSETFix("SET0602K");
		AddSETFix("SET0602S");
		break;
	case SETFixes_Extra:
		AddSETFix_Extra("SET0600M");
		AddSETFix_Extra("SET0600S");
		AddSETFix_Extra("SET0601S");
		AddSETFix_Extra("SET0602K");
		AddSETFix_Extra("SET0602S");
		break;
	default:
		break;
	}
	ReplacePVM("E_AIRCRAFT");
	ReplacePVM("OBJ_SKYDECK");
	ReplacePVM("SKYDECK01");
	ReplacePVM("SKYDECK02");
	ReplacePVM("SKYDECK03");
	//Skybox transparency
	((NJS_OBJECT*)0x214E2A0)->basicdxmodel->nbMeshset = 2; //Disable the annoying sky mesh
	stru_214E2A0.basicdxmodel->mats[0].diffuse.color = 0x11FFFFFF;
	stru_214E2A0.basicdxmodel->mats[1].diffuse.color = 0x11FFFFFF;
	stru_214E2A0.basicdxmodel->mats[2].diffuse.color = 0x11FFFFFF;
	stru_214C9E4.basicdxmodel->mats[0].diffuse.color = 0x11FFFFFF;
	stru_214C9E4.basicdxmodel->mats[1].diffuse.color = 0x11FFFFFF;
	stru_214C9E4.basicdxmodel->mats[2].diffuse.color = 0x11FFFFFF;
	stru_214C9E4.basicdxmodel->mats[3].diffuse.color = 0x11FFFFFF;
	((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[0].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
	((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[1].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
	((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[2].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
	((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[0].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
	((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[1].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
	((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[2].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
	((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[0].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
	((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[1].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
	((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[2].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
	((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[3].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
	((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[0].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
	((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[1].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
	((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[2].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
	((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[3].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
	WriteCall((void*)0x005ED72F, RenderSmallCloud);
	WriteJump((void*)0x005ED1E0, SkyDeckSky_new);
	//Platform rotation fixes
	WriteJump((void*)0x5FAD60, Connect0Display_FixedRotation);
	WriteJump((void*)0x5FB4C0, Talap0Display_FixedRotation);
	//Lantern stuff
	if (DLLLoaded_Lantern)
	{
		if (set_alpha_reject_ptr != nullptr) material_register_ptr(DisableAlphaRejection_SkyDeck, LengthOfArray(DisableAlphaRejection_SkyDeck), &DisableAlphaRejection);
		material_register_ptr(WhiteDiffuse_SkyDeck, LengthOfArray(WhiteDiffuse_SkyDeck), &ForceWhiteDiffuse1);
		material_register_ptr(ObjectSpecular_SkyDeck, LengthOfArray(ObjectSpecular_SkyDeck), &ForceDiffuse0Specular1);
	}
	//Some material fixes
	((NJS_OBJECT*)0x95A334)->basicdxmodel->mats[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x95A334)->basicdxmodel->mats[4].diffuse.color = 0xFF000000;
	((NJS_OBJECT*)0x95D0F4)->basicdxmodel->mats[7].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x95D0F4)->basicdxmodel->mats[7].diffuse.color = 0xFF000000;
	((NJS_OBJECT*)0x95C204)->basicdxmodel->mats[7].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x95C204)->basicdxmodel->mats[7].diffuse.color = 0xFF000000;
	//Lol wtf is this? Disable robot underwear?
	WriteData((float*)0x005F4D20, 1.0f);
	WriteData((float*)0x005F4D28, 1.0f);
	WriteData((float*)0x005F4D30, 1.0f);
	WriteData((float*)0x005F4D38, 1.0f);
	((NJS_OBJECT *)0x214BF20)->basicdxmodel->meshsets->vertuv = uvSTG06_01D4E2F4_2;
	((NJS_OBJECT *)0x214E3AC)->basicdxmodel->meshsets->vertuv = uvSTG06_01D4E2F4_3;
	*(NJS_MODEL_SADX *)0x961300 = attachSTG06_001E10F8; //Aircraft pad
	*(NJS_MODEL_SADX *)0x961EF8 = attachSTG06_001E1CBC; //Aircraft pad something
	*(NJS_OBJECT*)0x21A2804 = objectSTG06_001434E8; //Stop
	*(NJS_OBJECT *)0x21FDE74 = objectSTG06_00197D2C; //Decal 1
	*(NJS_OBJECT *)0x21FE9F8 = objectSTG06_00198858; //Decal 2
	*(NJS_OBJECT *)0x21FEB04 = objectSTG06_0019895C; //Decal 3
	*(NJS_OBJECT *)0x21FEC10 = objectSTG06_00198A60; //Decal 4
	*(NJS_OBJECT *)0x21FED1C = objectSTG06_00198B64; //Decal 5 not sure
	*(NJS_OBJECT *)0x21FEE28 = objectSTG06_00198C68; //Decal 6 not sure
	*(NJS_OBJECT *)0x21FEF34 = objectSTG06_00198D6C; //Warning sign
	*(NJS_OBJECT *)0x214FB74 = objectSTG06_000FF4A4; //Cannon in Act 1
	*(NJS_OBJECT *)0x2161F68 = objectSTG06_0010EB4C; //Cannon in Act 2
	*(NJS_OBJECT *)0x21802BC = objectSTG06_00126000; //Rail platform 1
	*(NJS_OBJECT *)0x218346C = objectSTG06_00128644; //Rail platform 2
	*(NJS_OBJECT *)0x2186254 = objectSTG06_0012A9C8; //Rail platform 3
	*(NJS_OBJECT *)0x216F67C = objectSTG06_00118920; //Rail platform 4
	*(NJS_OBJECT *)0x2162D5C = objectSTG06_0010FAFC; //Rail platform 5
	*(NJS_OBJECT *)0x2171694 = objectSTG06_0011A3D8; //Rail platform 6
	*(NJS_OBJECT *)0x2171834 = objectSTG06_0011A564; //Some ladder
	*(NJS_OBJECT *)0x216B984 = objectSTG06_00115F88; //OConnect_0
	*(NJS_OBJECT *)0x21660AC = objectSTG06_001118F8; //Curved platform
	*(NJS_OBJECT *)0x216E770 = objectSTG06_00117D5C; //WTF is this thing?
	*(NJS_OBJECT *)0x2171D0C = objectSTG06_0011AA1C; //Platform with ladder
	*(NJS_OBJECT *)0x21936AC = objectSTG06_00135E10; //Small round thing
	*(NJS_OBJECT *)0x216889C = objectSTG06_001138B4; //Stairs 1
	*(NJS_OBJECT *)0x216A4AC = objectSTG06_00114F2C; //Stairs 2
	*(NJS_OBJECT *)0x21C4FD8 = objectSTG06_00162F84; //Crane
	*(NJS_OBJECT *)0x21642D4 = objectSTG06_00110634; //Talap 0
	*(NJS_OBJECT *)0x21AD794 = objectSTG06_0014D990; //Trolley thing or whatever that is
	*(NJS_OBJECT *)0x21F7F8C = objectSTG06_00192044; //ORoboA
	*(NJS_OBJECT *)0x21B29B4 = objectSTG06_00152A40; //Another cleaning robot
	*(NJS_OBJECT *)0x21FA6F4 = objectSTG06_001946BC; //ORoboB
	*(NJS_ACTION*)0x02223EF4 = action_Robo2_action; //ORoboB action
	*(NJS_OBJECT *)0x21B995C = objectSTG06_001592E0; //Platform2
	*(NJS_OBJECT *)0x21CAE18 = objectSTG06_00168CFC; //Another big object
	*(NJS_OBJECT *)0x2194F44 = objectSTG06_001370C4; //OAnaA
	*(NJS_OBJECT *)0x218C52C = objectSTG06_00130724; //ORaneA
	*(NJS_MODEL_SADX *)0x2177AC8 = attachSTG06_0011E83C; //Cyl_S
	*(NJS_OBJECT *)0x218E0BC = objectSTG06_00131D70; //ORaneC
	*(NJS_OBJECT *)0x218F7CC = objectSTG06_00132DE4; //ORaneD
	*(NJS_OBJECT *)0x2190D94 = objectSTG06_00133CD0; //ORaneE
	*(NJS_OBJECT *)0x2192798 = objectSTG06_00134F30; //ORaneF
	*(NJS_OBJECT *)0x21BA014 = objectSTG06_0015996C; //Hangar 1
	*(NJS_OBJECT *)0x21BA484 = objectSTG06_00159DBC; //Hangar 2
	*(NJS_OBJECT *)0x21BCA10 = objectSTG06_0015C2D0; //Radar-like thing
	*(NJS_OBJECT *)0x21BDD24 = objectSTG06_0015D5B8; //Huge thing 2
	*(NJS_OBJECT *)0x21BF034 = objectSTG06_0015E8A0; //Huge thing 3
	*(NJS_OBJECT *)0x214E4B8 = objectSTG06_000FE140; //Target
	*(NJS_OBJECT *)0x21A34C8 = objectSTG06_00144178; //Top red orb
	*(NJS_OBJECT *)0x21A4C38 = objectSTG06_0014589C; //Light-like thing
	*(NJS_OBJECT *)0x21D1CC0 = objectSTG06_0016FA10; //Huge Egg Carrier decoration
	*(NJS_OBJECT *)0x21D41A0 = objectSTG06_00171E3C; //Another decoration
	*(NJS_OBJECT *)0x21F4EC0 = objectSTG06_0018F244; //Elevator
	*(NJS_OBJECT *)0x21FBF84 = objectSTG06_00195B24; //Escalator
	*(NJS_OBJECT *)0x217CFE4 = objectSTG06_001238FC; //Untei
	*(NJS_OBJECT *)0x960DFC = objectSTG06_001E0C04; //Aircraft lift piece
	((NJS_OBJECT *)0x21B0254)->model = &attachSTG06_00150394; //OLever
	WriteData((NJS_OBJECT**)0x005ED3AC, (NJS_OBJECT*)&objectSTG06_01D4BF20); //sky normal
	WriteData((NJS_OBJECT**)0x005ED3A5, (NJS_OBJECT*)&objectSTG06_01D4E3AC_2); //sky dark top 2 
	WriteData((NJS_OBJECT**)0x005ED46D, (NJS_OBJECT*)&objectSTG06_01D4E3AC); //sky dark top 1
	WriteData((NJS_OBJECT**)0x005ED4FC, (NJS_OBJECT*)&objectSTG06_01D4E3AC); //sky dark bottom 1 
	ResizeTextureList((NJS_TEXLIST*)0x20E0BB0, textures_skydeck1);
	ResizeTextureList((NJS_TEXLIST*)0x20AA63C, textures_skydeck2);
	ResizeTextureList((NJS_TEXLIST*)0x203ACE0, textures_skydeck3);
	ResizeTextureList(&OBJ_SKYDECK_TEXLIST, 213);
	for (unsigned int i = 0; i < 3; i++)
	{
		SkyDeck1Fog[i].Layer = 4000.0f;
		SkyDeck1Fog[i].Distance = 12000.0f;
		SkyDeck1Fog[i].Color = 0xFF000000;
		SkyDeck2Fog[i].Layer = 4000.0f;
		SkyDeck2Fog[i].Distance = 12000.0f;
		SkyDeck2Fog[i].Color = 0xFF000000;
		SkyDeck3Fog[i].Layer = 4000.0f;
		SkyDeck3Fog[i].Distance = 12000.0f;
		SkyDeck1DrawDist[i].Maximum = -20000.0f;
		SkyDeck2DrawDist[i].Maximum = -20000.0f;
		SkyDeck3DrawDist[i].Maximum = -16000.0f;
		SkyDeck3SkyboxScale->Far.x = 1.0f;
		SkyDeck3SkyboxScale->Far.y = 1.0f;
		SkyDeck3SkyboxScale->Far.z = 1.0f;
		SkyDeck3SkyboxScale->Normal.x = 1.0f;
		SkyDeck3SkyboxScale->Normal.y = 1.0f;
		SkyDeck3SkyboxScale->Normal.z = 1.0f;
		SkyDeck3SkyboxScale->Near.x = 1.0f;
		SkyDeck3SkyboxScale->Near.y = 1.0f;
		SkyDeck3SkyboxScale->Near.z = 1.0f;	
	}
}

void SkyDeck_OnFrame()
{
	if (CurrentLevel == 6)
	{
		{
			if (STG06_1_Info && (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
				for (int i = 0; i < STG06_1_Info->getlandtable()->COLCount; i++)
				{
					if (STG06_1_Info->getlandtable()->Col[i].anonymous_6 & 4)
						STG06_1_Info->getlandtable()->Col[i].Flags |= ColFlags_Solid;
				}
		}
	}
	if (CurrentLevel == 6 && GameState != 16)
	{
		UVShift1 = (UVShift1 - 4 * FramerateSetting) % 255;
		UVShift2 = (UVShift2 - 2 * FramerateSetting) % 255;
		for (unsigned int q = 0; q < LengthOfArray(uvSTG06_01D4BE68); q++)
		{
			uvSTG06_01D4BE68[q].u = uvSTG06_01D4BE68_0[q].u + UVShift2;
			uvSTG06_01D4E2F4[q].u = uvSTG06_01D4E2F4_0[q].u + UVShift2;
			uvSTG06_01D4E2F4_2[q].u = uvSTG06_01D4E2F4_0[q].u + UVShift1;
			uvSTG06_01D4BE68_2[q].u = uvSTG06_01D4BE68_0[q].u + UVShift1;
			uvSTG06_01D4E2F4_3[q].u = uvSTG06_01D4E2F4_0[q].u + UVShift1;
		}
		CurrentFogLayer = 4000.0f - flt_3C8046C * 3000;
		CurrentFogDistance = 12000.0f - flt_3C8046C * 9000;
		if (flt_3C8046C <= 0)
		{
			if (CurrentFogColorX.r > 4) CurrentFogColorX.r = CurrentFogColorX.r - 4;
			if (CurrentFogColorX.g > 4) CurrentFogColorX.g = CurrentFogColorX.r - 4;
			if (CurrentFogColorX.b > 4) CurrentFogColorX.b = CurrentFogColorX.r - 4;
		}
		if (SkyDeckAltitude >= 300.0f)
		{
			if (((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.r > 8)
			{
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.r -= 8;
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.g -= 8;
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.b -= 8;
			}
			else
			{
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.r = 0;
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.g = 0;
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.b = 0;
			}
		}
		else
		{
			if (((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.r < 170)
			{
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.r += 8;
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.g += 8;
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.b += 8;
			}
			else
			{
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.r = 178;
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.g = 178;
				((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.b = 178;
			}
		}
		if (flt_3C8046C > 0)
		{
			if (CurrentFogColorX.r < 178) CurrentFogColorX.r = CurrentFogColorX.r + 4;
			if (CurrentFogColorX.g < 178) CurrentFogColorX.g = CurrentFogColorX.g + 4;
			if (CurrentFogColorX.b < 178) CurrentFogColorX.b = CurrentFogColorX.b + 4;
		}
		if (CurrentAct == 0 || CurrentAct == 1)
		{
			if (flt_3C8046C > 0 && SkyDeckTransitionEnable == false)
			{
				SkyDeckTransitionEnable = true;
				((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_USE_ALPHA;
			}
			if (flt_3C8046C <= 0 && SkyDeckTransitionEnable == true)
			{
				SkyDeckTransitionEnable = false;
				((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214E2A0)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA;
				((NJS_OBJECT*)0x214C9E4)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA;

			}
		}
	}
}