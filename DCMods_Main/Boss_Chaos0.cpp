#include "stdafx.h"

NJS_TEXNAME textures_chaos0[34];
NJS_TEXLIST texlist_chaos0 = { arrayptrandlength(textures_chaos0) };

NJS_TEXNAME chaos0_obj_tex[33];
NJS_TEXLIST chaos0_object = { arrayptrandlength(chaos0_obj_tex) };

//#include "Chaos0.h"

NJS_TEXANIM Chaos0SpotlightTexanim = { 128, 128, 64, 64, 0, 0, 255, 255, 1, 0 };
NJS_SPRITE Chaos0SpotlightSprite1 = { -54.0f, 10.0f, 0, 0.25f, 0.42f, 17500, BOSSCHAOS0_TEXLISTS[1], &Chaos0SpotlightTexanim };
NJS_SPRITE Chaos0SpotlightSprite2 = { -54.0f, -10.0f, 0, 0.25f, 0.42f, 15000, BOSSCHAOS0_TEXLISTS[1], &Chaos0SpotlightTexanim };
DataPointer(PVMEntry, PVMEntry_CHAOS0EFFECT, 0x1120180);
DataPointer(ObjectMaster*, Chaos0ObjectMaster, 0x3C84628);

static int Chaos0PuddleTransparency = 255;
static bool Chaos0TransUp = false;

void DrawChaos0Spotlight(ObjectMaster *a1)
{
	EntityData1 *v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetMaterialAndSpriteColor_Float(0.5f, 1.0f, 1.0f, 1.0f);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njSetTexture(BOSSCHAOS0_TEXLISTS[1]);
		DrawQueueDepthBias = -17000.0f;
		//Left
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y + 0.1f, v1->Position.z);
		njRotateXYZ(0, 0xC000, v1->Rotation.y, 0);
		njDrawSprite3D_Queue(&Chaos0SpotlightSprite1, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR | NJD_SPRITE_ANGLE, QueuedModelFlagsB_SomeTextureThing);
		njPopMatrix(1u);
		//Right
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y + 0.1f, v1->Position.z);
		njRotateXYZ(0, 0xC000, v1->Rotation.y, 0);
		njDrawSprite3D_Queue(&Chaos0SpotlightSprite2, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR | NJD_SPRITE_ANGLE, QueuedModelFlagsB_SomeTextureThing);
		njPopMatrix(1u);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		ClampGlobalColorThing_Thing();
		DrawQueueDepthBias = 0.0f;
	}
}

static void OPato0_Display_r(ObjectMaster *a1);
static Trampoline OPato0_Display_t(0x549600, 0x549605, OPato0_Display_r);
static void __cdecl OPato0_Display_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(OPato0_Display_r)*>(OPato0_Display_t.Target());
	original(a1);
	if (EnableChaos0)
	{
		if (LANDTABLEBOSSCHAOS0[0]->Col[4].Flags & ColFlags_Visible)
		{
			DrawChaos0Spotlight(a1);
		}
	}
}

void FixChaos0Car(NJS_ACTION *a1, float frame, float scale)
{
	DisplayAnimationFrame(a1, frame, (QueuedModelFlagsB)0, scale, (void(__cdecl *)(NJS_MODEL_SADX *, int, int))DrawModelThing);
	DrawModel_Queue(a1->object->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->basicdxmodel, (QueuedModelFlagsB)0); //Top lights
	DrawModel_Queue(a1->object->child->sibling->sibling->sibling->sibling->sibling->sibling->basicdxmodel, QueuedModelFlagsB_EnableZWrite); //Front lights
}

void __cdecl ComeOneYaBigDrip()
{
	EntityData1 *v0; // esi
	v0 = Chaos0ObjectMaster->Data1;
	char Chaos0PuddleTransparency_object = *(char*)(*(Sint32*)&v0->LoopData + 28);
	if (Chaos0PuddleTransparency >= 255 && Chaos0TransUp == true) Chaos0TransUp = false;
	if (Chaos0PuddleTransparency <= 178 && !Chaos0TransUp) Chaos0TransUp = true;
	if (Chaos0TransUp) Chaos0PuddleTransparency += 4; else Chaos0PuddleTransparency -= 4;
	if (Chaos0PuddleTransparency_object != -103) Chaos_Puddle_Model.basicdxmodel->mats->diffuse.argb.a = Chaos0PuddleTransparency_object;
	else Chaos_Puddle_Model.basicdxmodel->mats->diffuse.argb.a = Chaos0PuddleTransparency;
	njSetTexture(&CHAOS_SURFACE_TEXLIST);
	njPushMatrix(0);
	njTranslateV(0, &v0->Position);
	njScaleV(0, &v0->Scale);
	ProcessModelNode_D(&Chaos_Puddle_Model, (QueuedModelFlagsB)0, 1.0f);
	njPopMatrix(1u);
}

void UnloadLevelFiles_B_CHAOS0()
{
	delete B_CHAOS0_Info;
	B_CHAOS0_Info = nullptr;
}

void LoadLevelFiles_B_CHAOS0()
{
	CheckAndUnloadLevelFiles();
	B_CHAOS0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS0\\0.sa1lvl"));
	LandTable *B_CHAOS0 = B_CHAOS0_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_CHAOS0);
	B_CHAOS0->TexList = &texlist_chaos0;
	LandTableArray[0] = B_CHAOS0;
	___LANDTABLEBOSSCHAOS0[0] = B_CHAOS0;
}

void Chaos0PuddleFix(NJS_OBJECT* a1)
{
	ProcessModelNode_D(a1, (QueuedModelFlagsB)0, 1.0f);
}

void Chaos0_Init()
{
	if (!Use1999SetFiles)
	{
		ReplaceBIN_DC("SET1500S");
	}
	else
	{
		ReplaceBIN_1999("SET1500S");
	}
	ReplacePVM("LM_CHAOS0");
	ReplacePVM("CHAOS0");
	ReplacePVM("CHAOS0_EFFECT");
	ReplacePVM("CHAOS0_OBJECT");
	ReplacePVM("EV_CHAOS0_MANJU");
	WriteData<1>((char*)0x54932B, 0x08); //Police car lights blending mode
	WriteData<1>((char*)0x7AD16D, 0x08); //Chaos 0 puddle mark blending mode
	WriteData<1>((char*)0x548470, 0i8); //Chaos 0 puddle queued flags I guess
	WriteCall((void*)0x54847B, Chaos0PuddleFix);
	WriteJump((void*)0x6E9B00, ComeOneYaBigDrip); //Alterating transparency in the cutscene after Chaos 0
	___BOSSCHAOS0_TEXLISTS[2] = &texlist_chaos0;
	___BOSSCHAOS0_TEXLISTS[3] = &chaos0_object;
	RemoveVertexColors_Object((NJS_OBJECT*)0x2C66B78); //Cutscene model
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[0]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[5]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[6]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[7]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[8]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[9]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[10]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[15]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[16]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[17]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[18]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[20]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[21]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[22]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[28]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[29]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[30]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[31]);
	RemoveVertexColors_Object(___BOSSCHAOS0_OBJECTS[33]);
	___BOSSCHAOS0_ACTIONS[17]->object = LoadModel("system\\data\\B_CHAOS0\\Models\\0005825C.sa1mdl", false); //Helicopter
	___BOSSCHAOS0_ACTIONS[18]->object = LoadModel("system\\data\\B_CHAOS0\\Models\\0005D234.sa1mdl", false); //Police car
	AddWhiteDiffuseMaterial(&___BOSSCHAOS0_ACTIONS[18]->object->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->basicdxmodel->mats[1]);
	___BOSSCHAOS0_ACTIONS[18]->object->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
	___BOSSCHAOS0_ACTIONS[18]->object->child->sibling->sibling->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
	WriteCall((void*)0x0054968E, FixChaos0Car);
	WriteData((float*)0x00549797, 0.12f); //Camera-based car light sprite scale
	WriteData((float*)0x005497A1, 0.12f); //Camera-based car light sprite scale
}