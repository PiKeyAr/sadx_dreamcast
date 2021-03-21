#include "stdafx.h"

NJS_TEXNAME textures_obj_skydeck[213];
NJS_TEXLIST texlist_obj_skydeck = {arrayptrandlength(textures_obj_skydeck)};

NJS_TEXNAME textures_skydeck1[76];
NJS_TEXLIST texlist_skydeck1 = { arrayptrandlength(textures_skydeck1) };

NJS_TEXNAME textures_skydeck2[58];
NJS_TEXLIST texlist_skydeck2 = { arrayptrandlength(textures_skydeck2) };

NJS_TEXNAME textures_skydeck3[65];
NJS_TEXLIST texlist_skydeck3 = { arrayptrandlength(textures_skydeck3) };

/*
#include "SkyDeck1.h"
#include "SkyDeck2.h"
#include "SkyDeck3.h"
*/

NJS_OBJECT* SkyNormal1 = nullptr;
NJS_OBJECT* SkyNormal2 = nullptr;
NJS_OBJECT* SkyDark2 = nullptr;
NJS_OBJECT* SkyDark1 = nullptr;

static int UVShift1 = 0;
static int UVShift2 = 0;
static int SkyboxAlpha = 255;
static bool SkyDeckTransitionEnable = false;
DataPointer(float, SkyDeckAltitude, 0x03C80610); // 0 to 700
DataPointer(float, CurrentSkyBoxScaleX, 0x03ABDC94);
DataPointer(float, CurrentSkyBoxScaleY, 0x03ABDC98);
DataPointer(float, CurrentSkyBoxScaleZ, 0x03ABDC9C);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(float, CurrentFogDistance, 0x03ABDC64);
DataPointer(int, dword_3C7F030, 0x3C7F030);
DataPointer(float, flt_3C8046C, 0x3C8046C);
DataPointer(NJS_BGRA, CurrentFogColorX, 0x03ABDC68);
DataPointer(NJS_OBJECT, SkyDeckSmallCloud, 0x0214D300);
DataPointer(NJS_OBJECT, SkyDeckSkyboxModel_Normal, 0x214E2A0);
DataPointer(NJS_OBJECT, SkyDeckSkyboxModel_Dark, 0x214C9E4);
DataArray(NJS_OBJECT*, SkyDeckObjectArray, 0x203A1C0, 300);
DataArray(NJS_MOTION*, SkyDeckSharedMotionArray, 0x203A6CC, 7);
DataArray(NJS_TEX, uvSTG06_01D4BE68_0, 0x0214BE68, 4);
DataArray(float, SkyDeckSharedMotionLengthArray, 0x203A6F4, 10);
DataArray(char, byte_223AEB4, 0x223AEB4, 100);
DataArray(char, byte_223B000, 0x223B000, 4);
DataArray(FogData, SkyDeck1Fog, 0x0203A094, 3);
DataArray(FogData, SkyDeck2Fog, 0x0203A0C4, 3);
DataArray(FogData, SkyDeck3Fog, 0x0203A0F4, 3);
DataArray(SkyboxScale, SkyDeck3SkyboxScale, 0x02039FE0, 3);
DataArray(DrawDistance, SkyDeck1DrawDist, 0x0203A04C, 3);
DataArray(DrawDistance, SkyDeck2DrawDist, 0x0203A064, 3);
DataArray(DrawDistance, SkyDeck3DrawDist, 0x0203A07C, 3);
FunctionPointer(void, sub_5ED790, (ObjectMaster *a1, NJS_OBJECT *a2), 0x5ED790);

void DisableMetalStruts(LandTable* landtable)
{
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			if (landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId == 62 && landtable->Col[j].Model->basicdxmodel->mats[k].attrflags & NJD_FLAG_USE_ALPHA) landtable->Col[j].Model->basicdxmodel->mats[k].attrflags &= ~NJD_FLAG_USE_ALPHA;
		}
	}
}

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
					late_DrawObject(obj, (QueuedModelFlagsB)0);
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
			v2 = &SkyDeckSkyboxModel_Normal;
			if (SkyDeck_SkyPosition.y - 1350.0f - 50.0f <= Camera_Data1->Position.y)
			{
				v2 = &SkyDeckSkyboxModel_Dark;
			}
			njSetTexture(&OBJ_SKYDECK_TEXLIST);
			njScaleEx(&Skybox_Scale);
			dsDrawObject(v2);
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
			v5 = SkyDark1;
			depthsucks = -42000.0f;
			if (SkyDeck_SkyPosition.y - 1350.0f - 100.0f <= Camera_Data1->Position.y)
			{
				depthsucks = -36000.0f;
				v5 = SkyNormal1;
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
			v8 = SkyDark2;
			if (SkyDeck_SkyPosition.y - 1350.0f - 100.0f <= Camera_Data1->Position.y)
			{
				v8 = SkyNormal2;
			}
			SkyDeck_QueueDrawQ(v8, SkyDeck_SkyUVsA, 32, -38000.0f);
			if (SkyDeck_SkyPosition.y - 1350.0f - 100.0f > Camera_Data1->Position.y)
			{
				a1.a = a1.a - 0.25f;
				SetMaterialAndSpriteColor(&a1);
				njTranslate(0, 0.0f, -600.0f, 0.0f);
				njScaleEx(&Skybox_Scale);
				VectorMaxAbs(&Skybox_Scale);
				SkyDeck_QueueDrawQ(SkyDark1, SkyDeck_SkyUVsA, 32, -38000.0f);
				njScale(0, 1.0f, 1.0f, 1.0f);
				njTranslate(0, 0.0f, -100.0f, 0.0f);
				SkyDeck_QueueDrawQ(SkyDark2, SkyDeck_SkyUVsB, 32, -36000.0f);
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
	late_DrawObjectClip(a1, a2, a3);
	DrawQueueDepthBias = 0.0f;
}

static Trampoline* TheyForgotToClampAgain_t = nullptr;
static void __cdecl TheyForgotToClampAgain_r(ObjectMaster *a1)
{
	const auto original = TARGET_DYNAMIC(TheyForgotToClampAgain);
	original(a1);
	if (EnabledLevels[LevelIDs_SkyDeck]) ClampGlobalColorThing_Thing();
}

/*

static void SkyDeckShockwave2_r(ObjectMaster *a1);
static Trampoline SkyDeckShockwave2_t(0x5FF370, 0x5FF378, SkyDeckShockwave2_r);
static void __cdecl SkyDeckShockwave2_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(SkyDeckShockwave2_r)*>(SkyDeckShockwave2_t.Target());
	if (EnabledLevels[LevelIDs_SkyDeck])
	{
		DrawQueueDepthBias = 4000.0f;
		original(a1);
		DrawQueueDepthBias = 0.0f;
	}
	else original(a1);
}

static void SkyDeckShockwave3_r(ObjectMaster *a1);
static Trampoline SkyDeckShockwave3_t(0x5FD860, 0x5FD867, SkyDeckShockwave3_r);
static void __cdecl SkyDeckShockwave3_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(SkyDeckShockwave3_r)*>(SkyDeckShockwave3_t.Target());
	if (EnabledLevels[LevelIDs_SkyDeck])
	{
		DrawQueueDepthBias = 4000.0f;
		original(a1);
		DrawQueueDepthBias = 0.0f;
	}
	else original(a1);
}
*/

void FixHangA(NJS_OBJECT *obj, float scale)
{
	lateDrawObject(obj, QueuedModelFlagsB_EnableZWrite, scale);
}

void RenderCrane(NJS_OBJECT* obj, float scale)
{
	DrawObjectClipMesh(obj, QueuedModelFlagsB_EnableZWrite, scale);
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

void __cdecl SkyDeckSharedDisplaySubFix(ObjectMaster *a1)
{
	ObjectMaster *v1; // ebp
	EntityData1 *v2; // esi
	NJS_OBJECT *v3; // edi
	Angle v4; // eax
	Angle v5; // eax
	Angle v6; // eax
	float v7; // eax
	unsigned __int8 v8; // al
	double v9; // st7
	NJS_MOTION *v10; // edx
	double v11; // st6
	double v12; // st7
	float a1a; // [esp+10h] [ebp+4h]

	v1 = a1;
	v2 = a1->Data1;
	v3 = SkyDeckObjectArray[4 * v2->NextAction];
	if ( !MissedFrames )
	{
		if ( v3 )
		{
			njSetTexture(&OBJ_SKYDECK_TEXLIST);
			njPushMatrix(0);
			njTranslateV(0, &v2->Position);
			v4 = v2->Rotation.z;
			if ( v4 )
			{
				njRotateZ(0, (unsigned __int16)v4);
			}
			v5 = v2->Rotation.x;
			if ( v5 )
			{
				njRotateX(0, (unsigned __int16)v5);
			}
			v6 = v2->Rotation.y;
			if ( v6 )
			{
				njRotateY(0, (unsigned __int16)v6);
			}
			v7 = v2->Scale.x;
			if ( v7 != 1.0 )
			{
				njScale(0, v7, v7, v2->Scale.x);
				ScaleVectorThing_Scale(v2->Scale.x);
			}
			v8 = v2->Index;
			if ( v8 )
			{
				v9 = v2->Scale.z;
				if (!IsGamePaused())
				{
					v9 = v9 + 0.5f * FramerateSetting;
				}
				v10 = (NJS_MOTION*)SkyDeckSharedMotionArray[v8];
				v11 = SkyDeckSharedMotionLengthArray[v8];
				if (v9 > v11 - 1.0f) v9 = 0;
				v2->Scale.z = v9;
				late_DrawMotionClipEx(v3, v10, v9, 1, v2->Scale.x);
			}
			else
			{
				late_DrawObjectClipEx(v3, QueuedModelFlagsB_EnableZWrite, v2->Scale.x);
			}
			if ( v2->Scale.x != 1.0f )
			{
				ScaleVectorThing_RestoreB();
			}
			njPopMatrix(1u);
		}
		sub_5ED790(v1, SkyDeckObjectArray[4 * v2->NextAction + 2]);
	}
}

void DrawDecalHook(NJS_OBJECT *a1)
{
	DrawQueueDepthBias = -47952.0f;
	lateDrawObject(a1, QueuedModelFlagsB_3, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void SkyDeck_Init()
{
	STG06_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG06\\0.sa1lvl"));
	STG06_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG06\\1.sa1lvl"));
	STG06_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG06\\2.sa1lvl"));
	LandTable* STG06_0 = STG06_0_Info->getlandtable(); //&landtable_0001F018;
	LandTable* STG06_1 = STG06_1_Info->getlandtable(); //&landtable_00021094;
	LandTable* STG06_2 = STG06_2_Info->getlandtable(); //&landtable_00023EB4;
	RemoveMaterialColors_Landtable(STG06_0);
	RemoveMaterialColors_Landtable(STG06_1);
	RemoveMaterialColors_Landtable(STG06_2);
	if (!AssumeOIT) DisableMetalStruts(STG06_2);
	STG06_0->TexList = &texlist_skydeck1;
	STG06_1->TexList = &texlist_skydeck2;
	STG06_2->TexList = &texlist_skydeck3;
	WriteData((LandTable**)0x97DAC8, STG06_0);
	WriteData((LandTable**)0x97DACC, STG06_1);
	WriteData((LandTable**)0x97DAD0, STG06_2);
	((LandTable*)0x022369A0)->COLCount = STG06_1->COLCount;
	((LandTable*)0x022369A0)->Col = STG06_1->Col;
	if (!ModelsLoaded_STG06)
	{
		TheyForgotToClampAgain_t = new Trampoline(0x4AA540, 0x4AA547, TheyForgotToClampAgain_r);
		SKYDECK01_TEXLIST = texlist_skydeck1;
		SKYDECK02_TEXLIST = texlist_skydeck2;
		SKYDECK03_TEXLIST = texlist_skydeck3;
		OBJ_SKYDECK_TEXLIST = texlist_obj_skydeck;
		WriteJump((void*)0x5EF870, SkyDeckSharedDisplaySubFix); // Fix jerky animation for some objects (mostly unused)
		// Skybox transparency
		SkyDeckSkyboxModel_Normal.basicdxmodel->nbMeshset = 2; // Disable the annoying sky mesh
		SkyDeckSkyboxModel_Normal.basicdxmodel->mats[0].diffuse.color = 0x11FFFFFF;
		SkyDeckSkyboxModel_Normal.basicdxmodel->mats[1].diffuse.color = 0x11FFFFFF;
		SkyDeckSkyboxModel_Normal.basicdxmodel->mats[2].diffuse.color = 0x11FFFFFF;
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[0].diffuse.color = 0x11FFFFFF;
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[1].diffuse.color = 0x11FFFFFF;
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[2].diffuse.color = 0x11FFFFFF;
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[3].diffuse.color = 0x11FFFFFF;
		SkyDeckSkyboxModel_Normal.basicdxmodel->mats[0].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
		SkyDeckSkyboxModel_Normal.basicdxmodel->mats[1].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
		SkyDeckSkyboxModel_Normal.basicdxmodel->mats[2].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
		SkyDeckSkyboxModel_Normal.basicdxmodel->mats[0].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
		SkyDeckSkyboxModel_Normal.basicdxmodel->mats[1].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
		SkyDeckSkyboxModel_Normal.basicdxmodel->mats[2].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[0].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[1].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[2].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[3].attrflags &= ~(NJD_SA_MASK | NJD_DA_MASK);
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[0].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[1].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[2].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
		SkyDeckSkyboxModel_Dark.basicdxmodel->mats[3].attrflags |= NJD_DA_ONE | NJD_SA_ONE;
		WriteCall((void*)0x005ED72F, RenderSmallCloud);
		WriteJump((void*)0x005ED1E0, SkyDeckSky_new);
		// Some material fixes
		((NJS_OBJECT*)0x95D0F4)->basicdxmodel->mats[7].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; // Aircraft
		((NJS_OBJECT*)0x95A334)->basicdxmodel->mats[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; // Some rocket or whatever
		((NJS_OBJECT*)0x95C204)->basicdxmodel->mats[7].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; // Some other thing related to aircraft
		// Lol wtf is this? Disable robot underwear?
		WriteData((float*)0x005F4D20, 1.0f);
		WriteData((float*)0x005F4D28, 1.0f);
		WriteData((float*)0x005F4D30, 1.0f);
		WriteData((float*)0x005F4D38, 1.0f);
		// Alpha rejected explosions/shockwaves
		*(NJS_OBJECT*)0x21DF2A4 = *LoadModel("system\\data\\STG06\\Models\\0017C8A8.sa1mdl");
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21DF2A4)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21DF554 = *LoadModel("system\\data\\STG06\\Models\\0017CB48.sa1mdl");
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21DF554)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21DFEB4 = *LoadModel("system\\data\\STG06\\Models\\0017D498.sa1mdl");
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21DFEB4)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21E0438 = *LoadModel("system\\data\\STG06\\Models\\0017DA08.sa1mdl");
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21E0438)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21E06BC = *LoadModel("system\\data\\STG06\\Models\\0017DC80.sa1mdl");
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21E06BC)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21ED6E4 = *LoadModel("system\\data\\STG06\\Models\\00188178.sa1mdl");
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21ED6E4)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21ED7F0 = *LoadModel("system\\data\\STG06\\Models\\0018827C.sa1mdl");
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21ED7F0)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21EDE68 = *LoadModel("system\\data\\STG06\\Models\\001888E4.sa1mdl");
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21EDE68)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21EE164 = *LoadModel("system\\data\\STG06\\Models\\00188BD4.sa1mdl");
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21EE164)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21ED460 = *LoadModel("system\\data\\STG06\\Models\\00187F00.sa1mdl");
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21ED460)->basicdxmodel->mats[0]);
		// Objects
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x21FB818)->basicdxmodel->mats[1]); // OUeKi
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x21FB818)->basicdxmodel->mats[2]); // OUeKi
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x21FB818)->basicdxmodel->mats[3]); // OUeKi
		RemoveVertexColors_Object((NJS_OBJECT*)0x960AE4); // Enemy aircraft
		RemoveVertexColors_Object((NJS_OBJECT*)0x95A334); // Enemy aircraft rocket
		RemoveVertexColors_Object((NJS_OBJECT*)0x21B6DF4); // Objects that fall down from Chambr
		RemoveVertexColors_Object((NJS_OBJECT*)0x21B5844); // Objects that fall down from Chambr
		RemoveVertexColors_Object((NJS_OBJECT*)0x21B3988); // Objects that fall down from Chambr
		RemoveVertexColors_Object((NJS_OBJECT*)0x21B29B4); // Objects that fall down from Chambr
		RemoveVertexColors_Object((NJS_OBJECT*)0x21F2CA4); // Objects that fall down from Chambr
		RemoveVertexColors_Object((NJS_OBJECT*)0x21F223C); // Objects that fall down from Chambr
		RemoveVertexColors_Object((NJS_OBJECT*)0x21F370C); // Objects that fall down from Chambr
		RemoveVertexColors_Object((NJS_OBJECT*)0x21B8A7C); // Objects that fall down from Chambr
		RemoveVertexColors_Object((NJS_OBJECT*)0x21B4D8C); // Objects that fall down from Chambr
		*(NJS_OBJECT*)0x21F4EC0 = *LoadModel("system\\data\\STG06\\Models\\0018F244.sa1mdl"); // OSkyEv 1
		*(NJS_OBJECT*)0x21F53EC = *LoadModel("system\\data\\STG06\\Models\\0018F744.sa1mdl"); // OSkyEv 2
		*(NJS_OBJECT*)0x21F5AB4 = *LoadModel("system\\data\\STG06\\Models\\0018FC54.sa1mdl"); // OSkyEv 3
		*(NJS_OBJECT*)0x21A7604 = *LoadModel("system\\data\\STG06\\Models\\00148250.sa1mdl"); // Fence_L
		*(NJS_OBJECT*)0x21A95B4 = *LoadModel("system\\data\\STG06\\Models\\0014A1E0.sa1mdl"); // Fence_M
		*(NJS_OBJECT*)0x21AA97C = *LoadModel("system\\data\\STG06\\Models\\0014B58C.sa1mdl"); // Fence_S
		*(NJS_OBJECT*)0x21523C4 = *LoadModel("system\\data\\STG06\\Models\\001011C4.sa1mdl"); // CannonB
		*(NJS_OBJECT*)0x21E0DD4 = *LoadModel("system\\data\\STG06\\Models\\0017E160.sa1mdl"); // OConnect0 debris
		*(NJS_OBJECT*)0x21E14EC = *LoadModel("system\\data\\STG06\\Models\\0017E640.sa1mdl"); // OConnect0 debris
		*(NJS_OBJECT*)0x21E1C04 = *LoadModel("system\\data\\STG06\\Models\\0017EB3C.sa1mdl"); // OConnect0 debris
		*(NJS_OBJECT*)0x21E231C = *LoadModel("system\\data\\STG06\\Models\\0017F038.sa1mdl"); // OConnect0 debris
		*(NJS_OBJECT*)0x21E2800 = *LoadModel("system\\data\\STG06\\Models\\0017F420.sa1mdl"); // OConnect0 debris
		*(NJS_OBJECT*)0x21E29B4 = *LoadModel("system\\data\\STG06\\Models\\0017F588.sa1mdl"); // OConnect0 debris
		*(NJS_OBJECT*)0x21E2DD8 = *LoadModel("system\\data\\STG06\\Models\\0017F8FC.sa1mdl"); // OConnect0 debris
		*(NJS_OBJECT*)0x21E3014 = *LoadModel("system\\data\\STG06\\Models\\0017FAAC.sa1mdl"); // OConnect0 debris
		*(NJS_OBJECT*)0x21E32DC = *LoadModel("system\\data\\STG06\\Models\\0017FD04.sa1mdl"); // OConnect0 debris
		*(NJS_OBJECT*)0x21E37B4 = *LoadModel("system\\data\\STG06\\Models\\0018010C.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E38AC = *LoadModel("system\\data\\STG06\\Models\\001801F0.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E39C8 = *LoadModel("system\\data\\STG06\\Models\\001802F4.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E3C5C = *LoadModel("system\\data\\STG06\\Models\\00180504.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E3EEC = *LoadModel("system\\data\\STG06\\Models\\00180714.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E41A4 = *LoadModel("system\\data\\STG06\\Models\\00180950.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E42C0 = *LoadModel("system\\data\\STG06\\Models\\00180A54.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E4694 = *LoadModel("system\\data\\STG06\\Models\\00180D58.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E4A64 = *LoadModel("system\\data\\STG06\\Models\\00181078.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E4E24 = *LoadModel("system\\data\\STG06\\Models\\0018137C.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E50B4 = *LoadModel("system\\data\\STG06\\Models\\0018158C.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E51D0 = *LoadModel("system\\data\\STG06\\Models\\00181690.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E52C8 = *LoadModel("system\\data\\STG06\\Models\\00181774.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E53C0 = *LoadModel("system\\data\\STG06\\Models\\00181858.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E54DC = *LoadModel("system\\data\\STG06\\Models\\0018195C.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E55F8 = *LoadModel("system\\data\\STG06\\Models\\00181A60.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E58AC = *LoadModel("system\\data\\STG06\\Models\\00181CB8.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E5CCC = *LoadModel("system\\data\\STG06\\Models\\00182038.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E5EDC = *LoadModel("system\\data\\STG06\\Models\\001821E8.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E611C = *LoadModel("system\\data\\STG06\\Models\\00182398.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E65F8 = *LoadModel("system\\data\\STG06\\Models\\00182778.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E67CC = *LoadModel("system\\data\\STG06\\Models\\001828F4.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E6D48 = *LoadModel("system\\data\\STG06\\Models\\00182D34.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E7050 = *LoadModel("system\\data\\STG06\\Models\\00182F78.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E752C = *LoadModel("system\\data\\STG06\\Models\\00183330.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E7704 = *LoadModel("system\\data\\STG06\\Models\\001834CC.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E7C80 = *LoadModel("system\\data\\STG06\\Models\\0018390C.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E7F88 = *LoadModel("system\\data\\STG06\\Models\\00183B50.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E816C = *LoadModel("system\\data\\STG06\\Models\\00183CEC.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E83AC = *LoadModel("system\\data\\STG06\\Models\\00183E9C.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E8584 = *LoadModel("system\\data\\STG06\\Models\\00184038.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E875C = *LoadModel("system\\data\\STG06\\Models\\001841D4.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21E8944 = *LoadModel("system\\data\\STG06\\Models\\00184370.sa1mdl"); // OTalap0 debris
		*(NJS_OBJECT*)0x21A2804 = *LoadModel("system\\data\\STG06\\Models\\001434E8.sa1mdl"); // Stop
		*(NJS_OBJECT*)0x21FDE74 = *LoadModel("system\\data\\STG06\\Models\\00197D2C.sa1mdl"); // Decal 1
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21FDE74)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21FE9F8 = *LoadModel("system\\data\\STG06\\Models\\00198858.sa1mdl"); // Decal 2
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21FE9F8)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21FEB04 = *LoadModel("system\\data\\STG06\\Models\\0019895C.sa1mdl"); // Decal 3
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21FEB04)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21FEC10 = *LoadModel("system\\data\\STG06\\Models\\00198A60.sa1mdl"); // Decal 4
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21FEC10)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21FED1C = *LoadModel("system\\data\\STG06\\Models\\00198B64.sa1mdl"); // Decal 5 not sure
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21FED1C)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x21FEE28 = *LoadModel("system\\data\\STG06\\Models\\00198C68.sa1mdl"); // Decal 6 not sure
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x21FEE28)->basicdxmodel->mats[0]);
		WriteCall((void*)0x5F2399, DrawDecalHook);
		*(NJS_OBJECT*)0x21FEF34 = *LoadModel("system\\data\\STG06\\Models\\00198D6C.sa1mdl"); // Warning sign
		*(NJS_OBJECT*)0x214FB74 = *LoadModel("system\\data\\STG06\\Models\\000FF4A4.sa1mdl"); // Cannon in Act 1
		*(NJS_OBJECT*)0x2161F68 = *LoadModel("system\\data\\STG06\\Models\\0010EB4C.sa1mdl"); // Cannon in Act 2
		*(NJS_OBJECT*)0x21802BC = *LoadModel("system\\data\\STG06\\Models\\00126000.sa1mdl"); // Rail platform 1
		*(NJS_OBJECT*)0x218346C = *LoadModel("system\\data\\STG06\\Models\\00128644.sa1mdl"); // Rail platform 2
		*(NJS_OBJECT*)0x2186254 = *LoadModel("system\\data\\STG06\\Models\\0012A9C8.sa1mdl"); // Rail platform 3
		*(NJS_OBJECT*)0x216F67C = *LoadModel("system\\data\\STG06\\Models\\00118920.sa1mdl"); // Rail platform 4
		*(NJS_OBJECT*)0x2162D5C = *LoadModel("system\\data\\STG06\\Models\\0010FAFC.sa1mdl"); // Rail platform 5
		*(NJS_OBJECT*)0x2171694 = *LoadModel("system\\data\\STG06\\Models\\0011A3D8.sa1mdl"); // Rail platform 6
		*(NJS_OBJECT*)0x2171834 = *LoadModel("system\\data\\STG06\\Models\\0011A564.sa1mdl"); // Some ladder
		*(NJS_OBJECT*)0x216B984 = *LoadModel("system\\data\\STG06\\Models\\00115F88.sa1mdl"); // OConnect_0
		*(NJS_OBJECT*)0x21660AC = *LoadModel("system\\data\\STG06\\Models\\001118F8.sa1mdl"); // Curved platform
		*(NJS_OBJECT*)0x216E770 = *LoadModel("system\\data\\STG06\\Models\\00117D5C.sa1mdl"); // Top0
		*(NJS_OBJECT*)0x2171D0C = *LoadModel("system\\data\\STG06\\Models\\0011AA1C.sa1mdl"); // Platform with ladder
		*(NJS_OBJECT*)0x21936AC = *LoadModel("system\\data\\STG06\\Models\\00135E10.sa1mdl"); // Small round thing
		*(NJS_OBJECT*)0x216889C = *LoadModel("system\\data\\STG06\\Models\\001138B4.sa1mdl"); // Stairs 1
		*(NJS_OBJECT*)0x216A4AC = *LoadModel("system\\data\\STG06\\Models\\00114F2C.sa1mdl"); // Stairs 2
		*(NJS_OBJECT*)0x21C4FD8 = *LoadModel("system\\data\\STG06\\Models\\00162F84.sa1mdl"); // Crane
		WriteCall((void*)0x5F2DD6, RenderCrane);
		((NJS_OBJECT*)0x21C4FD8)->child->basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_TEXTURE;
		((NJS_OBJECT*)0x21C4FD8)->child->basicdxmodel->mats[1].attr_texId = 6;
		((NJS_OBJECT*)0x21C4FD8)->child->sibling->basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_TEXTURE;
		((NJS_OBJECT*)0x21C4FD8)->child->sibling->basicdxmodel->mats[1].attr_texId = 6;
		*(NJS_OBJECT*)0x21642D4 = *LoadModel("system\\data\\STG06\\Models\\00110634.sa1mdl"); // Talap 0
		*(NJS_OBJECT*)0x21AD794 = *LoadModel("system\\data\\STG06\\Models\\0014D990.sa1mdl"); // Trolley thing or whatever that is
		((NJS_ACTION*)0x2223C0C)->object = LoadModel("system\\data\\STG06\\Models\\00192044.sa1mdl"); // ORoboA
		((NJS_ACTION*)0x2223EF4)->object = LoadModel("system\\data\\STG06\\Models\\001946BC.sa1mdl"); // ORoboB
		*(NJS_OBJECT*)0x21B29B4 = *LoadModel("system\\data\\STG06\\Models\\00152A40.sa1mdl"); // Another cleaning robot
		*(NJS_OBJECT*)0x21B995C = *LoadModel("system\\data\\STG06\\Models\\001592E0.sa1mdl"); // Platform2
		*(NJS_OBJECT*)0x21CAE18 = *LoadModel("system\\data\\STG06\\Models\\00168CFC.sa1mdl"); // Another big object
		*(NJS_OBJECT*)0x2194F44 = *LoadModel("system\\data\\STG06\\Models\\001370C4.sa1mdl"); // OAnaA
		*(NJS_OBJECT*)0x218C52C = *LoadModel("system\\data\\STG06\\Models\\00130724.sa1mdl"); // ORaneA
		*(NJS_OBJECT*)0x2176E88 = *LoadModel("system\\data\\STG06\\Models\\0011E1D4.sa1mdl"); // Pole_L
		*(NJS_OBJECT*)0x2175950 = *LoadModel("system\\data\\STG06\\Models\\0011D1E0.sa1mdl"); // Pole_S
		*(NJS_OBJECT*)0x2177AF4 = *LoadModel("system\\data\\STG06\\Models\\0011E864.sa1mdl"); // Cyl_S
		*(NJS_OBJECT*)0x2170324 = *LoadModel("system\\data\\STG06\\Models\\00119084.sa1mdl"); // Cyl_0
		*(NJS_OBJECT*)0x21730BC = *LoadModel("system\\data\\STG06\\Models\\0011B614.sa1mdl"); // Cyl_1
		*(NJS_OBJECT*)0x217441C = *LoadModel("system\\data\\STG06\\Models\\0011C1EC.sa1mdl"); // Cyl_2
		*(NJS_OBJECT*)0x217843C = *LoadModel("system\\data\\STG06\\Models\\0011EDC0.sa1mdl"); // BaseL
		*(NJS_OBJECT*)0x21A0084 = *LoadModel("system\\data\\STG06\\Models\\00140DFC.sa1mdl"); // Duct_0
		*(NJS_OBJECT*)0x219B084 = *LoadModel("system\\data\\STG06\\Models\\0013C4B0.sa1mdl"); // Cannon_M
		*(NJS_MODEL_SADX*)0x21B0228 = *LoadModel("system\\data\\STG06\\Models\\001503BC.sa1mdl")->basicdxmodel; // OLever
		((NJS_MODEL_SADX*)0x21B0228)->mats[8].attrflags |= NJD_FLAG_USE_TEXTURE;
		((NJS_MODEL_SADX*)0x21B0228)->mats[8].attr_texId = 6;
		*(NJS_MODEL_SADX*)0x0961300 = *LoadModel("system\\data\\STG06\\Models\\001E1120.sa1mdl")->basicdxmodel; // Aircraft pad
		*(NJS_MODEL_SADX*)0x0961EF8 = *LoadModel("system\\data\\STG06\\Models\\001E1CE4.sa1mdl")->basicdxmodel; // Aircraft pad something
		AddWhiteDiffuseMaterial(&((NJS_MODEL_SADX*)0x0961EF8)->mats[4]);
		AddWhiteDiffuseMaterial(&((NJS_MODEL_SADX*)0x0961EF8)->mats[5]);
		AddWhiteDiffuseMaterial(&((NJS_MODEL_SADX*)0x0961EF8)->mats[6]);
		AddWhiteDiffuseMaterial(&((NJS_MODEL_SADX*)0x0961EF8)->mats[7]);
		AddWhiteDiffuseMaterial(&((NJS_MODEL_SADX*)0x0961EF8)->mats[8]);
		*(NJS_OBJECT*)0x218E0BC = *LoadModel("system\\data\\STG06\\Models\\00131D70.sa1mdl"); // ORaneC
		*(NJS_OBJECT*)0x218F7CC = *LoadModel("system\\data\\STG06\\Models\\00132DE4.sa1mdl"); // ORaneD
		*(NJS_OBJECT*)0x2190D94 = *LoadModel("system\\data\\STG06\\Models\\00133CD0.sa1mdl"); // ORaneE
		*(NJS_OBJECT*)0x2192798 = *LoadModel("system\\data\\STG06\\Models\\00134F30.sa1mdl"); // ORaneF
		*(NJS_OBJECT*)0x21BA014 = *LoadModel("system\\data\\STG06\\Models\\0015996C.sa1mdl"); // Hangar 1
		*(NJS_OBJECT*)0x21BA484 = *LoadModel("system\\data\\STG06\\Models\\00159DBC.sa1mdl"); // Hangar 2
		*(NJS_OBJECT*)0x21BCA10 = *LoadModel("system\\data\\STG06\\Models\\0015C2D0.sa1mdl"); // Radar-like thing
		*(NJS_OBJECT*)0x21BDD24 = *LoadModel("system\\data\\STG06\\Models\\0015D5B8.sa1mdl"); // Huge thing 2
		*(NJS_OBJECT*)0x21BF034 = *LoadModel("system\\data\\STG06\\Models\\0015E8A0.sa1mdl"); // Huge thing 3
		*(NJS_OBJECT*)0x214E4B8 = *LoadModel("system\\data\\STG06\\Models\\000FE140.sa1mdl"); // Target
		*(NJS_OBJECT*)0x21A34C8 = *LoadModel("system\\data\\STG06\\Models\\00144178.sa1mdl"); // Top red orb
		*(NJS_OBJECT*)0x21A4C38 = *LoadModel("system\\data\\STG06\\Models\\0014589C.sa1mdl"); // Light-like thing
		*(NJS_OBJECT*)0x21D1CC0 = *LoadModel("system\\data\\STG06\\Models\\0016FA10.sa1mdl"); // Huge Egg Carrier decoration
		*(NJS_OBJECT*)0x21D41A0 = *LoadModel("system\\data\\STG06\\Models\\00171E3C.sa1mdl"); // Another decoration
		*(NJS_OBJECT*)0x21FBF84 = *LoadModel("system\\data\\STG06\\Models\\00195B24.sa1mdl"); // Escalator
		*(NJS_OBJECT*)0x217CFE4 = *LoadModel("system\\data\\STG06\\Models\\001238FC.sa1mdl"); // Untei
		*(NJS_OBJECT*)0x218A66C = *LoadModel("system\\data\\STG06\\Models\\0012EDA8.sa1mdl"); // Untei climbing part
		*(NJS_OBJECT*)0x21A4074 = *LoadModel("system\\data\\STG06\\Models\\00144D04.sa1mdl"); // Lb
		*(NJS_OBJECT*)0x0960DFC = *LoadModel("system\\data\\STG06\\Models\\001E0C04.sa1mdl"); // Aircraft lift piece
		*(NJS_OBJECT*)0x217C724 = *LoadModel("system\\data\\STG06\\Models\\00123054.sa1mdl"); // HangA 1
		*(NJS_OBJECT*)0x217AB2C = *LoadModel("system\\data\\STG06\\Models\\00121478.sa1mdl"); // HangA 2
		*(NJS_OBJECT*)0x2179C0C = *LoadModel("system\\data\\STG06\\Models\\00120574.sa1mdl"); // HangA 3
		WriteCall((void*)0x5EE8C0, FixHangA);
		WriteCall((void*)0x5EE8EC, FixHangA);
		WriteCall((void*)0x5EE919, FixHangA);
		SkyNormal1 = LoadModel("system\\data\\STG06\\Models\\000FBC08.sa1mdl"); // Clouds normal
		SkyNormal2 = LoadModel("system\\data\\STG06\\Models\\000FBC08.sa1mdl"); // Clouds normal
		SkyDark2 = LoadModel("system\\data\\STG06\\Models\\000FE03C.sa1mdl"); // Clouds dark top 2 
		SkyDark1 = LoadModel("system\\data\\STG06\\Models\\000FE03C.sa1mdl"); // Clouds dark top 1 
		WriteData((NJS_OBJECT**)0x005ED3AC, SkyNormal1);
		WriteData((NJS_OBJECT**)0x005ED3A5, SkyDark2);
		WriteData((NJS_OBJECT**)0x005ED46D, SkyDark1); // Clouds dark top
		WriteData((NJS_OBJECT**)0x005ED4FC, SkyDark1); // Clouds dark bottom
		// Clip distance improvements
		ObjList_SDeck[24].UseDistance = 1;
		ObjList_SDeck[25].UseDistance = 1;
		ObjList_SDeck[29].UseDistance = 1;
		ObjList_SDeck[30].UseDistance = 1;
		ObjList_SDeck[31].UseDistance = 1;
		ObjList_SDeck[32].UseDistance = 1;
		ObjList_SDeck[33].UseDistance = 1;
		ObjList_SDeck[34].UseDistance = 1;
		ObjList_SDeck[35].UseDistance = 1;
		ObjList_SDeck[36].UseDistance = 1;
		ObjList_SDeck[37].UseDistance = 1;
		ObjList_SDeck[38].UseDistance = 1;
		ObjList_SDeck[24].Distance = 8000000;
		ObjList_SDeck[25].Distance = 8000000;
		ObjList_SDeck[29].Distance = 8000000;
		ObjList_SDeck[30].Distance = 8000000;
		ObjList_SDeck[31].Distance = 8000000;
		ObjList_SDeck[32].Distance = 8000000;
		ObjList_SDeck[33].Distance = 8000000;
		ObjList_SDeck[34].Distance = 8000000;
		ObjList_SDeck[35].Distance = 8000000;
		ObjList_SDeck[36].Distance = 8000000;
		ObjList_SDeck[37].Distance = 8000000;
		ObjList_SDeck[38].Distance = 3000000;
		// Fog data
		for (int i = 0; i < 3; i++)
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
		ModelsLoaded_STG06 = true;
	}
}

void SkyDeck_OnFrame()
{
	if (CurrentLevel == LevelIDs_SkyDeck)
	{
		// Reset COL flags in Act 2 after the wing breaks off
		if (CurrentAct == 1 && STG06_1_Info != nullptr)
		{
			if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
				for (int i = 0; i < GeoLists[49]->COLCount; i++)
				{
					if (GeoLists[49]->Col[i].blockbits & 4)
						GeoLists[49]->Col[i].Flags |= ColFlags_Solid;
				}
		}
		// Cloud UVs and stuff
		if (!IsGamePaused())
		{
			UVShift1 = (UVShift1 - 4 * FramerateSetting) % 255;
			UVShift2 = (UVShift2 - 2 * FramerateSetting) % 255;
			if (SkyNormal1 && SkyNormal2 && SkyDark1 && SkyDark2)
			{
				for (int q = 0; q < 4; q++)
				{
					SkyNormal1->basicdxmodel->meshsets[0].vertuv[q].u = uvSTG06_01D4BE68_0[q].u + UVShift2;
					SkyNormal2->basicdxmodel->meshsets[0].vertuv[q].u = uvSTG06_01D4BE68_0[q].u + UVShift1;
					SkyDark1->basicdxmodel->meshsets[0].vertuv[q].u = uvSTG06_01D4BE68_0[q].u + UVShift2;
					SkyDark2->basicdxmodel->meshsets[0].vertuv[q].u = uvSTG06_01D4BE68_0[q].u + UVShift1;
				}
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
				if (SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.r > 8)
				{
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.r -= 8;
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.g -= 8;
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.b -= 8;
				}
				else
				{
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.r = 0;
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.g = 0;
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.b = 0;
				}
			}
			else
			{
				if (SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.r < 247)
				{
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.r += 8;
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.g += 8;
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.b += 8;
				}
				else
				{
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.r = 255;
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.g = 255;
					SkyDeckSmallCloud.basicdxmodel->mats[0].diffuse.argb.b = 255;
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
					SkyDeckSkyboxModel_Normal.basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Normal.basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Normal.basicdxmodel->mats[2].attrflags |= NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Dark.basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Dark.basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Dark.basicdxmodel->mats[2].attrflags |= NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Dark.basicdxmodel->mats[3].attrflags |= NJD_FLAG_USE_ALPHA;
				}
				if (flt_3C8046C <= 0 && SkyDeckTransitionEnable == true)
				{
					SkyDeckTransitionEnable = false;
					SkyDeckSkyboxModel_Normal.basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Normal.basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Normal.basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Dark.basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Dark.basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Dark.basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA;
					SkyDeckSkyboxModel_Dark.basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA;
				}
			}
		}
	}
}