#include "stdafx.h"

#include "Chaos7_fixes.h"

NJS_TEXNAME textures_chaos7[168];
NJS_TEXLIST texlist_chaos7 = { arrayptrandlength(textures_chaos7) };

DataArray(FogData, Chaos7Fog, 0x01420E30, 3);
DataArray(DrawDistance, DrawDist_Chaos7, 0x01420E00, 3);
DataPointer(NJS_ARGB, nj_constant_material_temp, 0x03B18220);
DataPointer(NJS_TEXANIM, stru_149401C, 0x149401C);
DataPointer(NJS_TEXANIM, stru_1494050, 0x1494050);
DataPointer(NJS_SPRITE, stru_1494030, 0x1494030);
DataPointer(NJS_SPRITE, stru_1494064, 0x1494064);
DataPointer(NJS_ARGB, stru_1494114, 0x1494114);
DataPointer(NJS_ARGB, stru_1494124, 0x1494124);
DataPointer(unsigned char, byte_3C5A7EF, 0x3C5A7EF);
DataPointer(unsigned char, byte_3C5A7ED, 0x3C5A7ED);

static float TornadoAlpha = 1.0f;
static int TornadoTrigger = 0;

NJS_TEXANIM texanim_array[] =
{
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 0, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 1, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 2, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 3, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 4, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 5, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 6, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 7, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 8, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 9, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 10, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 11, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 12, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 13, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 14, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 15, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 16, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 17, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 18, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 19, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 20, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 21, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 22, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 23, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 24, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 25, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 26, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 27, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 28, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 29, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 30, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 31, 0 },
};

void __cdecl PerfectChaosUVs()
{
	if (EV_MainThread_ptr == nullptr)
	{
		object_000E483C.ang[1] += 1638;
		object_000E3B98.ang[1] += 1638;
		object_000E2BF4_3.ang[1] -= 819;
		object_000E2BF4_2.ang[1] += 819;
		object_000E2BF4_1.ang[1] += 3276;
		object_000E22A8.ang[1] -= 3276;
	}
	else
	{
		object_000E483C.ang[1] += 1638 * 2;
		object_000E3B98.ang[1] += 1638 * 2;
		object_000E2BF4_3.ang[1] -= 819 * 2;
		object_000E2BF4_2.ang[1] += 819 * 2;
		object_000E2BF4_1.ang[1] += 3276 * 2;
		object_000E22A8.ang[1] -= 3276 * 2;
	}
	if (object_000E483C.ang[1] > 65535) object_000E483C.ang[1] -= 65535;
	if (object_000E3B98.ang[1] > 65535) object_000E3B98.ang[1] -= 65535;
	if (object_000E2BF4_3.ang[1] < -65535) object_000E2BF4_3.ang[1] += 65535;
	if (object_000E2BF4_2.ang[1] > 65535) object_000E2BF4_2.ang[1] -= 65535;
	if (object_000E2BF4_1.ang[1] > 65535) object_000E2BF4_1.ang[1] -= 65535;
	if (object_000E22A8.ang[1] < -65535) object_000E22A8.ang[1] += 65535;
}

void __cdecl TornadoFunc()
{
	nj_constant_material_temp.a = TornadoAlpha;
	nj_constant_material_temp.r = 1.0f;
	nj_constant_material_temp.g = 1.0f;
	nj_constant_material_temp.b = 1.0f;
	SetMaterialAndSpriteColor(&nj_constant_material_temp);
	if (!(((NJS_OBJECT*)0x13A6E8C)->evalflags &= NJD_EVAL_HIDE))	ProcessModelNode_D_WrapperB(&object_000E483C, 0, 1.0f);
}

void __cdecl Chaos7Explosion_DisplayX(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	unsigned __int64 v2;
	v1 = a1->Data1;
	v2 = (unsigned __int64)*(float *)&v1->CharIndex;
	if (!DroppedFrames)
	{
		DisableFog();
		SetMaterialAndSpriteColor(&stru_1494114);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_ONE);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		stru_1494030.tanim = &texanim_array[v2];
		njDrawSprite3D_Queue(&stru_1494030, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE, QueuedModelFlagsB_SomeTextureThing);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void __cdecl Chaos7Damage_DisplayX(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	double v2; // st7@2
	short v3;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		DisableFog();
		SetMaterialAndSpriteColor(&stru_1494124);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_ONE);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v3 = ((signed short*)&v1->Object)[1];
		stru_1494064.tanim = &texanim_array[v3 + 16];
		v2 = v1->Scale.x;
		stru_1494064.sy = v1->Scale.x;
		stru_1494064.sx = v2;
		njDrawSprite3D_Queue(&stru_1494064, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE, QueuedModelFlagsB_SomeTextureThing);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void PerfectChaosWaterfallHook(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	if (EV_MainThread_ptr != nullptr && CutsceneID == 254) ProcessModelNode(a1, QueuedModelFlagsB_EnableZWrite, a3);
	else ProcessModelNode_A_Wrapper(a1, a2, a3);
}

void UnloadLevelFiles_B_CHAOS7()
{
	delete B_CHAOS7_Info;
	B_CHAOS7_Info = nullptr;
}

void LoadLevelFiles_B_CHAOS7()
{
	CheckAndUnloadLevelFiles();
	B_CHAOS7_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS7\\0.sa1lvl"));
	LandTable *B_CHAOS7 = B_CHAOS7_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_CHAOS7);
	B_CHAOS7->TexList = &texlist_chaos7;
	LandTableArray[32] = B_CHAOS7;
}

void PerfectChaos_Init()
{
	ReplaceBIN_DC("SET1900S");
	ReplaceBIN_DC("CAM1900S");
	ReplacePVM("CHAOS7_0");
	ReplacePVM("CHAOS7_0BREATH");
	ReplacePVM("CHAOS7_0BREATH2ND");
	ReplacePVM("CHAOS7_0DAMAGE");
	ReplacePVM("CHAOS7_0DEAD_PTCHG");
	ReplacePVM("CHAOS7_0SURFACE");
	ReplacePVM("CHAOS7_0WATEREXP");
	ReplacePVM("CHAOS7_0WEXP_PTCHG");
	ReplacePVM("LM_CHAOS7_0");
	ReplacePVM("OBJ_CHAOS7");
	ResizeTextureList((NJS_TEXLIST*)0x1494FBC, textures_chaos7);
	RemoveVertexColors_Object((NJS_OBJECT*)0x139757C); //Main model
	RemoveVertexColors_Object((NJS_OBJECT*)0x13A27F0); //Sinking/rising
	WriteCall((void*)0x56463B, PerfectChaosWaterfallHook);
	//Perfect Chaos tornado UVs
	WriteCall((void*)0x562D6D, PerfectChaosUVs);
	WriteCall((void*)0x00562303, TornadoFunc); //Perfect Chaos tornado fade-in
	//Perfect Chaos breath fix
	WriteData((float*)0x00566A03, 1.0f);
	//Egg Carrier 2 crash in Perfect Chaos cutscene
	WriteData((float*)0x0065D8D1, 837.418f); //X1
	WriteData((float*)0x0065D8CC, 412.38f); //Y1
	WriteData((float*)0x0065D8C7, -406.796f); //Z1
	WriteData((int*)0x0065D8E3, 65238); //XA1
	WriteData((int*)0x0065D8DE, 29421); //YA1
	WriteData((float*)0x0065D8FC, 1148.37f); //X2
	WriteData((float*)0x0065D8F7, 423.5f); //Y2
	WriteData((float*)0x0065D8F2, -325.65f); //Z2
	WriteData((int*)0x0065D912, 64083); //XA2
	WriteData((int*)0x0065D90D, 28705); //YA2
	//Perfect Chaos damage functions
	WriteJump((void*)0x5632F0, Chaos7Explosion_DisplayX);
	WriteJump((void*)0x005633C0, Chaos7Damage_DisplayX);
	//Perfect Chaos misc
	((NJS_OBJECT*)0x0248B1B4)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; //Egg Carrier 2
	//Remove material colors in cars and other objects
	RemoveVertexColors_Object((NJS_OBJECT*)0x142F08C);
	RemoveVertexColors_Object((NJS_OBJECT*)0x143A4FC);
	RemoveVertexColors_Object((NJS_OBJECT*)0x143463C);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1434A3C);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1435478);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1436BEC);
	RemoveVertexColors_Object((NJS_OBJECT*)0x14386F4);
	RemoveVertexColors_Object((NJS_OBJECT*)0x143A844);
	RemoveVertexColors_Object((NJS_OBJECT*)0x143AC44);
	RemoveVertexColors_Object((NJS_OBJECT*)0x143B680);
	RemoveVertexColors_Object((NJS_OBJECT*)0x143CDF4);
	RemoveVertexColors_Object((NJS_OBJECT*)0x143E8FC);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1440704);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1440A4C);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1440E4C);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1441888);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1443034);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1444B3C);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1446944);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1447A7C);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1447D3C);
	RemoveVertexColors_Object((NJS_OBJECT*)0x14483C0);
	RemoveVertexColors_Object((NJS_OBJECT*)0x14488BC);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1448B14);
	RemoveVertexColors_Object((NJS_OBJECT*)0x1448C7C);
	RemoveVertexColors_Object((NJS_OBJECT*)0x144AB4C);
	RemoveVertexColors_Object((NJS_OBJECT*)0x144B174);
	RemoveVertexColors_Object((NJS_OBJECT*)0x144C1CC);
	RemoveVertexColors_Object((NJS_OBJECT*)0x144CFE4);
	RemoveVertexColors_Object((NJS_OBJECT*)0x144D208);
	RemoveVertexColors_Object((NJS_OBJECT*)0x144D340);
	for (unsigned int i = 0; i < 3; i++)
	{
		Chaos7Fog[i].Layer = -6000.0f;
		Chaos7Fog[i].Distance = -15000.0f;
		Chaos7Fog[i].Toggle = 1;
		Chaos7Fog[i].Color = 0xFF19CED3;
		DrawDist_Chaos7[i].Maximum = -6500.0;
	}
}

void PerfectChaos_OnFrame()
{
	//Super stupid hax to make Perfect Chaos' tornadoes fade in
	if (EnablePerfectChaos)
	{
		if (byte_3C5A7ED != 11)
		{
			if (byte_3C5A7EF == 0) TornadoTrigger = 0;
			if (byte_3C5A7EF == 3)
			{
				TornadoTrigger = 1;
				TornadoAlpha = 0;
			}
			if (TornadoTrigger == 1 && byte_3C5A7EF != 3) TornadoTrigger = 2;
			if (TornadoTrigger == 2) TornadoAlpha = TornadoAlpha + 0.04f;
			if (TornadoAlpha >= 1.0f) TornadoTrigger = 0;
		}
		else
		{
			if (TornadoAlpha > 0.0f) TornadoTrigger = 3;
			if (TornadoTrigger == 3) TornadoAlpha = TornadoAlpha - 0.01f * FramerateSetting;
			if (TornadoTrigger == 3 && TornadoAlpha <= 0.01f)
			{
				TornadoTrigger = 4;
				TornadoAlpha = 0.0f;
			}
		}
	}
}