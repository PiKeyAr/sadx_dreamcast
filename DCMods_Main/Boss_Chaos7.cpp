#include "stdafx.h"


NJS_TEXNAME textures_chaos7[168];
NJS_TEXLIST texlist_chaos7 = { arrayptrandlength(textures_chaos7) };

//#include "Chaos7.h"

NJS_OBJECT *TornadoAttack1 = nullptr;
NJS_OBJECT *TornadoAttack2 = nullptr;
NJS_OBJECT *TornadoAttack3 = nullptr;

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

FunctionPointer(void, sub_408530, (NJS_OBJECT *a1), 0x408530);
FunctionPointer(void, njAction_TryReallyHard, (NJS_ACTION *a1, float frameNumber), 0x409FB0);
FunctionPointer(void, sub_407CF0, (NJS_MODEL_SADX *a1, QueuedModelFlagsB a2), 0x407CF0);

NJS_OBJECT* Chaos7UnderwaterPieces[] = { nullptr, nullptr, nullptr };

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

void __cdecl TornadoFunc()
{
	nj_constant_material_temp.a = TornadoAlpha;
	nj_constant_material_temp.r = 1.0f;
	nj_constant_material_temp.g = 1.0f;
	nj_constant_material_temp.b = 1.0f;
	SetMaterialAndSpriteColor(&nj_constant_material_temp);
	if (!(((NJS_OBJECT*)0x13A6E8C)->evalflags & NJD_EVAL_HIDE))
	{
		ProcessModelNode_TryReallyHard_2((NJS_OBJECT*)0x13A6E8C);
	}
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
	ProcessModelNode_D(a1, (QueuedModelFlagsB)0, a3);
}

void UnloadLevelFiles_B_CHAOS7()
{
	Chaos7UnderwaterPieces[0] = nullptr;
	Chaos7UnderwaterPieces[1] = nullptr;
	Chaos7UnderwaterPieces[2] = nullptr;
	delete B_CHAOS7_Info;
	B_CHAOS7_Info = nullptr;
}

void Chaos7WaterHook(NJS_OBJECT *object)
{
	sub_408530(object); //Skybox
	njSetTexture(&texlist_chaos7);
	DrawQueueDepthBias = -49952.0f;
	ProcessModelNode(Chaos7UnderwaterPieces[0], QueuedModelFlagsB_SomeTextureThing, 1.0f);
	DrawQueueDepthBias = -48952.0f;
	ProcessModelNode(Chaos7UnderwaterPieces[1], QueuedModelFlagsB_SomeTextureThing, 1.0f);
	DrawQueueDepthBias = -47952.0f;
	ProcessModelNode(Chaos7UnderwaterPieces[2], QueuedModelFlagsB_SomeTextureThing, 1.0f);
	SetTextureToLevelObj();
}

void Chaos7TornadoAttackHook(NJS_ACTION *a1, float a2, int a3, int a4)
{
	NJS_ACTION action1 = { nullptr, nullptr };
	NJS_ACTION action2 = { nullptr, nullptr };
	NJS_ACTION action3 = { nullptr, nullptr };
	action1.motion = a1->motion;
	action2.motion = a1->motion;
	action3.motion = a1->motion;
	action1.object = TornadoAttack1;
	action2.object = TornadoAttack2;
	action3.object = TornadoAttack3;
	DrawQueueDepthBias = 2000.0f;
	njAction_TryReallyHard(&action1, a2);
	DrawQueueDepthBias = 3000.0f;
	njAction_TryReallyHard(&action2, a2);
	DrawQueueDepthBias = 4000.0f;
	njAction_TryReallyHard(&action3, a2);
	DrawQueueDepthBias = 0.0f;
}

void PerfectChaosBreathFix2(NJS_OBJECT *a1, float scale)
{
	DrawQueueDepthBias = 50.0f;
	ProcessModelNode_A_Wrapper(a1, (QueuedModelFlagsB)0, scale);
}

void PerfectChaos_Init()
{
	CheckAndUnloadLevelFiles();
	B_CHAOS7_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS7\\0.sa1lvl"));
	LandTable* B_CHAOS7 = B_CHAOS7_Info->getlandtable(); //&landtable_00001214;
	RemoveMaterialColors_Landtable(B_CHAOS7);
	for (int j = 0; j < B_CHAOS7->COLCount; j++)
	{
		if (B_CHAOS7->Col[j].Flags & 0x8000000)
		{
			if (Chaos7UnderwaterPieces[0] == nullptr) Chaos7UnderwaterPieces[0] = B_CHAOS7->Col[j].Model;
			else if (Chaos7UnderwaterPieces[1] == nullptr) Chaos7UnderwaterPieces[1] = B_CHAOS7->Col[j].Model;
			else if (Chaos7UnderwaterPieces[2] == nullptr) Chaos7UnderwaterPieces[2] = B_CHAOS7->Col[j].Model;
		}
	}
	B_CHAOS7->TexList = &texlist_chaos7;
	LandTableArray[32] = B_CHAOS7;
	if (!ModelsLoaded_B_CHAOS7)
	{
		if (!Use1999SetFiles)
		{
			ReplaceBIN_DC("SET1900S");
			ReplaceBIN_DC("CAM1900S");
		}
		else
		{
			ReplaceBIN_1999("SET1900S");
			ReplaceBIN_1999("CAM1900S");
		}
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
		//Tornado around Perfect Chaos
		WriteCall((void*)0x562303, TornadoFunc); //Perfect Chaos tornado fade-in
		//Tornado attack fix
		WriteCall((void*)0x566673, Chaos7TornadoAttackHook);
		TornadoAttack1 = LoadModel("system\\data\\B_CHAOS7\\Models\\000E16E8.sa1mdl", false); //Tornado attack
		TornadoAttack2 = LoadModel("system\\data\\B_CHAOS7\\Models\\000E16E8.sa1mdl", false); //Tornado attack
		TornadoAttack3 = LoadModel("system\\data\\B_CHAOS7\\Models\\000E16E8.sa1mdl", false); //Tornado attack
		//1 is just the middle layer
		TornadoAttack1->basicdxmodel->meshsets[0].nbMesh = 0;
		TornadoAttack1->child->basicdxmodel->meshsets[0].nbMesh = 0;
		TornadoAttack1->child->basicdxmodel->meshsets[1].nbMesh = 0;
		TornadoAttack1->child->sibling->sibling->basicdxmodel->meshsets[0].nbMesh = 0;
		//2 is just the top layer
		TornadoAttack2->basicdxmodel->meshsets[0].nbMesh = 0;
		TornadoAttack2->child->sibling->basicdxmodel->meshsets[0].nbMesh = 0;
		TornadoAttack2->child->sibling->basicdxmodel->meshsets[1].nbMesh = 0;
		TornadoAttack2->child->sibling->sibling->basicdxmodel->meshsets[0].nbMesh = 0;
		//3 is just the front layer
		TornadoAttack3->basicdxmodel->meshsets[0].nbMesh = 0;
		TornadoAttack3->child->basicdxmodel->meshsets[0].nbMesh = 0;
		TornadoAttack3->child->basicdxmodel->meshsets[1].nbMesh = 0;
		TornadoAttack3->child->sibling->basicdxmodel->meshsets[0].nbMesh = 0;
		TornadoAttack3->child->sibling->basicdxmodel->meshsets[1].nbMesh = 0;
		//Perfect Chaos breath fix
		WriteData((float*)0x566A03, 1.0f);
		WriteCall((void*)0x5660BE, PerfectChaosBreathFix2);
		//Egg Carrier 2 crash in Perfect Chaos cutscene
		WriteData((float*)0x65D8D1, 837.418f); //X1
		WriteData((float*)0x65D8CC, 412.38f); //Y1
		WriteData((float*)0x65D8C7, -406.796f); //Z1
		WriteData((int*)0x65D8E3, 65238); //XA1
		WriteData((int*)0x65D8DE, 29421); //YA1
		WriteData((float*)0x65D8FC, 1148.37f); //X2
		WriteData((float*)0x65D8F7, 423.5f); //Y2
		WriteData((float*)0x65D8F2, -325.65f); //Z2
		WriteData((int*)0x65D912, 64083); //XA2
		WriteData((int*)0x65D90D, 28705); //YA2
		//Perfect Chaos damage functions
		WriteJump((void*)0x5632F0, Chaos7Explosion_DisplayX);
		WriteJump((void*)0x5633C0, Chaos7Damage_DisplayX);
		//Perfect Chaos misc
		WriteCall((void*)0x55DC0C, Chaos7WaterHook);
		((NJS_OBJECT*)0x248B1B4)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; //Egg Carrier 2
		//Objects
		*(NJS_OBJECT*)0x142C740 = *LoadModel("system\\data\\B_CHAOS7\\Models\\0006B410.sa1mdl", false); //ORoad0
		*(NJS_OBJECT*)0x1455C0C = *LoadModel("system\\data\\B_CHAOS7\\Models\\000938C4.sa1mdl", false); //ORoad1
		*(NJS_OBJECT*)0x1458A58 = *LoadModel("system\\data\\B_CHAOS7\\Models\\00095598.sa1mdl", false); //ORoad2
		*(NJS_OBJECT*)0x145B4AC = *LoadModel("system\\data\\B_CHAOS7\\Models\\00096FC8.sa1mdl", false); //ORoad3
		*(NJS_OBJECT*)0x145D000 = *LoadModel("system\\data\\B_CHAOS7\\Models\\000981B8.sa1mdl", false); //ORoad4
		//Remove material colors in cars and other objects
		RemoveVertexColors_Object((NJS_OBJECT*)0x142F08C);
		RemoveVertexColors_Object((NJS_OBJECT*)0x14319AC);
		RemoveVertexColors_Object((NJS_OBJECT*)0x14342F4);
		RemoveVertexColors_Object((NJS_OBJECT*)0x1447898);
		RemoveVertexColors_Object((NJS_OBJECT*)0x144A28C);
		RemoveVertexColors_Object((NJS_OBJECT*)0x144DEF0);
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
		for (int i = 0; i < 3; i++)
		{
			Chaos7Fog[i].Layer = -6000.0f;
			Chaos7Fog[i].Distance = -15000.0f;
			Chaos7Fog[i].Toggle = 1;
			Chaos7Fog[i].Color = 0xFF19CED3;
			DrawDist_Chaos7[i].Maximum = -6500.0;
		}
		ModelsLoaded_B_CHAOS7 = true;
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