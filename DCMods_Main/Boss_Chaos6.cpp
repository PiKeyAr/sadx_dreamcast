#include "stdafx.h"

NJS_TEXNAME textures_chaos6s[77];
NJS_TEXLIST texlist_chaos6s = { arrayptrandlength(textures_chaos6s) };

NJS_TEXNAME textures_chaos6k[79];
NJS_TEXLIST texlist_chaos6k = { arrayptrandlength(textures_chaos6k) };

NJS_OBJECT *Chaos6Main_OpaqueOnly = nullptr;

DataArray(FogData, Chaos6SFog, 0x011EF0E8, 3);
DataArray(FogData, Chaos6KFog, 0x011EF118, 3);
DataArray(NJS_VECTOR, SkyBoxScale_Chaos6S, 0x011EF040, 3);
DataArray(NJS_VECTOR, SkyBoxScale_Chaos6K, 0x011EF064, 3);
DataArray(DrawDistance, DrawDist_Chaso6S, 0x011EF0B8, 3);
DataArray(DrawDistance, DrawDist_Chaso6K, 0x011EF0D0, 3);

void __cdecl Chaos6SkyboxBottom(EntityData1 *a1)
{
	Sint16 v1; // cx
	NJS_TEX *v2; // eax

	if (!MissedFrames)
	{
		v1 = *(Sint16*)&a1->LoopData;
		v2 = ((NJS_OBJECT*)0x11EDF38)->basicdxmodel->meshsets->vertuv;
		v2->v = v1 + 2040;
		v2[2].v = v1 + 2040;
		v2[1].v = v1;
		v2[3].v = v1;
		DisableFog();
		njSetTexture(&CHAOS6_BG_TEXLIST);
		njPushMatrix(0);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		SetMaterialAndSpriteColor_Float(0.5, 0.0, 0.0, 0.0);
		njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		njScale(0, 3.0, 1.0, 3.0);
		DrawQueueDepthBias = -32000.0f;
		lateDrawObject((NJS_OBJECT*)0x11EDF38, QueuedModelFlagsB_SomeTextureThing, 3.0f);
		DrawQueueDepthBias = 0;
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void __cdecl Chaos6SkyboxMain()
{
	if (!MissedFrames)
	{
		DisableFog();
		njSetTexture(&CHAOS6_BG_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, 0.0, Camera_Data1->Position.z);
		njRotateY(0, 57344);
		njScaleV(0, &Skybox_Scale);
		DrawQueueDepthBias = -30000.0f;
		lateDrawObject((NJS_OBJECT*)0x11EEED8, QueuedModelFlagsB_SomeTextureThing, 3.0f);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void UnloadLevelFiles_B_CHAOS6()
{
	delete B_CHAOS6_0_Info;
	delete B_CHAOS6_1_Info;
	B_CHAOS6_0_Info = nullptr;
	B_CHAOS6_1_Info = nullptr;
}

void Chaos6Action(NJS_ACTION *a1, float frameNumber)
{
	NJS_ACTION Chaos6Actions_OpaqueOnly = { nullptr, nullptr };
	if (a1->object == (NJS_OBJECT*)0x1272FF4)
	{
		Chaos6Actions_OpaqueOnly.motion = a1->motion;
		Chaos6Actions_OpaqueOnly.object = Chaos6Main_OpaqueOnly;
		if (Chaos6Actions_OpaqueOnly.object) njAction(&Chaos6Actions_OpaqueOnly, frameNumber);
	}
	CHAOS_Action(a1, frameNumber);
}

void njDrawSprite3D_Queue_TheyForgotToClamp(NJS_SPRITE *sp, Int n, NJD_SPRITE attr, QueuedModelFlagsB zfunc_type)
{
	njDrawSprite3D_Queue(sp, n, attr, zfunc_type);
	ClampGlobalColorThing_Thing();
}

void HideTransparentParts(NJS_OBJECT *obj)
{
	bool hidemesh = false;
	if (obj->basicdxmodel)
	{
		if (obj->basicdxmodel->mats[0].attrflags & NJD_FLAG_USE_ALPHA)
		{
			hidemesh = true;
		}
		if (hidemesh) obj->evalflags |= NJD_EVAL_HIDE;
	}
	if (obj->child) HideTransparentParts(obj->child);
	if (obj->sibling) HideTransparentParts(obj->sibling);
}

void HideOpaqueParts(NJS_OBJECT *obj)
{
	bool hidemesh = true;
	if (obj->basicdxmodel)
	{
		if (obj->basicdxmodel->mats[0].attrflags & NJD_FLAG_USE_ALPHA)
		{
			hidemesh = false;
		}
		if (hidemesh) obj->evalflags |= NJD_EVAL_HIDE;
	}
	if (obj->child) HideOpaqueParts(obj->child);
	if (obj->sibling) HideOpaqueParts(obj->sibling);
}

void B_CHAOS6_Init()
{
	ReplaceSET("SET1800B");
	ReplaceSET("SET1800S");
	ReplaceSET("SET1801K");
	ReplacePVM("LM_CHAOS6");
	ReplacePVM("LM_CHAOS6_2");
	ReplacePVM("CHAOS6");
	ReplacePVM("CHAOS6_BG");
	ReplacePVM("CHAOS6_EFFECT");
	ReplacePVM("CHAOS6_EGGMAN");
	ReplacePVM("CHAOS6_EISEI");
	ReplacePVM("CHAOS6_OBJECT");
	for (int i = 0; i < 3; i++)
	{
		Chaos6SFog[i].Distance = 12000.0f;
		Chaos6KFog[i].Distance = 12000.0f;
		SkyBoxScale_Chaos6S[i].x = 1.0f;
		SkyBoxScale_Chaos6S[i].y = 1.0f;
		SkyBoxScale_Chaos6S[i].z = 1.0f;
		SkyBoxScale_Chaos6K[i].x = 1.0f;
		SkyBoxScale_Chaos6K[i].y = 1.0f;
		SkyBoxScale_Chaos6K[i].z = 1.0f;
		DrawDist_Chaso6S[i].Maximum = -18000.0f;
		DrawDist_Chaso6K[i].Maximum = -18000.0f;
	}
}

void B_CHAOS6_Load()
{
	B_CHAOS6_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS6\\0.sa1lvl"));
	B_CHAOS6_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS6\\1.sa1lvl"));
	LandTable* B_CHAOS6_0 = B_CHAOS6_0_Info->getlandtable(); //&landtable_00000318; // B_CHAOS6_0_Info->getlandtable();
	LandTable* B_CHAOS6_1 = B_CHAOS6_1_Info->getlandtable(); //&landtable_0000033C; // B_CHAOS6_1_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_CHAOS6_0);
	RemoveMaterialColors_Landtable(B_CHAOS6_1);
	B_CHAOS6_0->TexList = &texlist_chaos6s;
	B_CHAOS6_1->TexList = &texlist_chaos6k;
	LandTableArray[24] = B_CHAOS6_0; // Chaos 6S
	LandTableArray[25] = B_CHAOS6_1; // Chaos 6K
	if (!ModelsLoaded_B_CHAOS6)
	{
		*(NJS_TEXLIST*)0x121FF28 = texlist_chaos6s;
		*(NJS_TEXLIST*)0x11F04A0 = texlist_chaos6k;
		// Main model stuff
		RemoveVertexColors_Object((NJS_OBJECT*)0x1272FF4);
		Chaos6Main_OpaqueOnly = LoadModel("system\\data\\B_CHAOS6\\Models\\DX\\00E72FF4.sa1mdl");
		AddBossMaterials_Object(Chaos6Main_OpaqueOnly);
		HideOpaqueParts((NJS_OBJECT*)0x1272FF4);
		HideTransparentParts(Chaos6Main_OpaqueOnly);
		// Other models
		RemoveVertexColors_Object((NJS_OBJECT*)0x1257754); // Chaos 6 Eggmobile
		RemoveVertexColors_Object((NJS_OBJECT*)0x12545AC); // Chaos 6 Eggman
		RemoveVertexColors_Object((NJS_OBJECT*)0x12941B0); // Chaos 6 transformed
		RemoveVertexColors_Object((NJS_OBJECT*)0x1262B54); // Chaos 6 frozen
		RemoveVertexColors_Object((NJS_OBJECT*)0x128A6DC); // Chaos 6 transforming
		RemoveVertexColors_Object((NJS_OBJECT*)0x13802D4); // Ice brick 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x1380724); // Ice brick 2
		RemoveVertexColors_Object((NJS_OBJECT*)0x1380B74); // Ice brick 3
		RemoveVertexColors_Object((NJS_OBJECT*)0x1380F7C); // Ice brick 4
		RemoveVertexColors_Object((NJS_OBJECT*)0x13812D0); // Ice brick 5
		RemoveVertexColors_Object((NJS_OBJECT*)0x138154C); // Ice brick 6
		RemoveVertexColors_Object((NJS_OBJECT*)0x1381690); // Ice brick 7
		RemoveVertexColors_Object((NJS_OBJECT*)0x1383D54); // Freezer
		WriteCall((void*)0x558FFC, Chaos6Action); // Chaos 6 main model rendering
		WriteCall((void*)0x55BCF4, njDrawSprite3D_Queue_TheyForgotToClamp);
		WriteJump((void*)0x556FD0, Chaos6SkyboxBottom);
		WriteJump((void*)0x556F20, Chaos6SkyboxMain);
		((NJS_ACTION*)0x134C56C)->motion = LoadAnimation("system\\data\\B_CHAOS6\\Models\\0011889C.saanim"); // Fix flickering parts in Chaos 6' walking animation
		WriteData<1>((char*)0x556E40, 0xC3u); // Disable SetClip_Chaos6S
		WriteData<1>((char*)0x556D60, 0xC3u); // Disable SetClip_Chaos6K
		ModelsLoaded_B_CHAOS6 = true;
	}
}