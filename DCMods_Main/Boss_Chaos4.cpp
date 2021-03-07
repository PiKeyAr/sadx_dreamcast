#include "stdafx.h"

NJS_TEXNAME textures_chaos4_object[6];
NJS_TEXLIST texlist_chaos4_object = {arrayptrandlength(textures_chaos4_object)};

NJS_TEXNAME textures_chaos4[14];
NJS_TEXLIST texlist_chaos4 = { arrayptrandlength(textures_chaos4) };

//#include "Chaos4.h"

NJS_OBJECT *Chaos4CleanWater = nullptr;
DataPointer(NJS_VECTOR, ChaosPosition, 0x3C5A358);
DataPointer(float, Chaos4NumaTransparency, 0x3C688D4);
DataArray(FogData, Chaos4Fog, 0x0118FA00, 3);
DataArray(PVMEntry, CHAOS4_OBJECT_TEXLISTS, 0x118FDB0, 18);

FunctionPointer(void, sub_408530, (NJS_OBJECT *o), 0x408530);
FunctionPointer(void, sub_40A1E0, (NJS_OBJECT *a1, int a2, float a3), 0x40A1E0);
FunctionPointer(void, sub_4B9540, (NJS_VECTOR *position, NJS_VECTOR *scale_v, float scale), 0x4B9540);
FunctionPointer(void, sub_407CF0, (NJS_MODEL_SADX *a1, QueuedModelFlagsB a2), 0x407CF0);

static int Chaos4Water = 0;

void Chaos4CleanWater_Display(ObjectMaster* o1)
{
	float xshift = -145.92953f;
	float zshift = -27.3004f;
	NJS_VECTOR a1;
	NJS_VECTOR a2;
	//Swamp water
	if (Chaos4NumaTransparency > -1.0f && !MissedFrames)
	{
		njSetTexture((NJS_TEXLIST*)0x11C6D4C); //Specific texture that SADX gets from the NUMA texlist
		Chaos4CleanWater->basicdxmodel->mats[0].diffuse.argb.a = (int)(153.0f * (1.0f + Chaos4NumaTransparency));
		njPushMatrix(0);
		if (Camera_Data1->Position.y <= 0) DrawQueueDepthBias = -17900.0f;
		if (Camera_Data1->Position.y > 0)
		{
			//Camera above water and Chaos above water - move to back
			if (ChaosPosition.y >= 15) DrawQueueDepthBias = -17900.0f;
			//Camera above water and Chaos below water - move to front
			else DrawQueueDepthBias = 8000.0f;
		}
		ProcessModelNode_D_WrapperB(Chaos4CleanWater, 0, 1.0f);
		njPopMatrix(1u);
		DrawQueueDepthBias = 0.0f;
	}
	//Waterfall effect
	if (GameState == 15)
	{
		int v40;
		a2 = { 0, 0, 0 };
		a1.y = 20.0f;
		SetParticleDepthOverride(100.0f);
		v40 = FrameCounter2;
		if (!(FrameCounter2 & 3))
		{
			a1.x = 9.3f;
			a1.z = -280.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR*)&a2, 1.5f);
			a1.x = 12.3f;
			a1.z = -275.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR*)&a2, 1.5f);
			a1.x = 15.3f;
			a1.z = -270.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR*)&a2, 1.5f);
			v40 = FrameCounter2;
		}
		if ((v40 & 3) == 1)
		{
			a1.x = 23.3f;
			a1.z = -267.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR*)&a2, 1.5f);
			a1.x = 31.3f;
			a1.z = -268.5f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR*)&a2, 1.5f);
			a1.x = 37.3f;
			a1.z = -269.5f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR*)&a2, 1.5f);
			v40 = FrameCounter2;
		}
		if ((v40 & 3) == 2)
		{
			a1.x = 43.3f;
			a1.z = -270.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR*)&a2, 1.5f);
			a1.x = 42.5f;
			a1.z = -275.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR*)&a2, 1.5f);
			a1.x = 48.3f;
			a1.z = -280.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR*)&a2, 1.5f);
		}
		SetParticleDepthOverride(0.0f);
	}
}

void __cdecl Chaos4Kama(ObjectMaster *a1)
{
	EntityData1 *v1; // esi

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		njSetTexture(&CHAOS4_KAMA_TEXLIST);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		DisplayAnimationFrame((NJS_ACTION*)0x11C117C, *(float *)&v1->LoopData, QueuedModelFlagsB_SomeTextureThing, 0.0f, (void(__cdecl *)(NJS_MODEL_SADX *, int, int))sub_407CF0);
		DisplayAnimationFrame((NJS_ACTION*)0x11C13CC, *(float *)&v1->LoopData, QueuedModelFlagsB_SomeTextureThing, 0.0f, (void(__cdecl *)(NJS_MODEL_SADX *, int, int))sub_407CF0);
		njPopMatrix(1u);
	}
}

void Chaos4KamaWave(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = 12000.0f;
	ProcessModelNode(a1, a2, a3);
	DrawQueueDepthBias = 0.0f;
}

void SetMaterial_Chaos4Wave(float a, float r, float g, float b)
{
	if (r > 0) SetMaterialAndSpriteColor_Float(r, r, g, b);
	else SetMaterialAndSpriteColor_Float(0, 0, 0, 0);
}

void UnloadLevelFiles_B_CHAOS4()
{
	NJS_MATERIAL *material;
	LandTable *B_CHAOS4 = LandTableArray[16];
	for (int j = 0; j < B_CHAOS4->COLCount; j++)
	{
		for (int k = 0; k < B_CHAOS4->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			if (B_CHAOS4->Col[j].Model->basicdxmodel->mats[k].attr_texId == 4)
			{
				material = (NJS_MATERIAL*)&B_CHAOS4->Col[j].Model->basicdxmodel->mats[k];
				RemoveWhiteDiffuseMaterial(material);
			}
		}
	}
	delete B_CHAOS4_Info;
	B_CHAOS4_Info = nullptr;
}

void Chaos4BrainHook(NJS_SPRITE *sp, Int n, NJD_SPRITE attr, QueuedModelFlagsB zfunc_type)
{
	if (CurrentLevel == LevelIDs_Chaos4)
	{
		//Camera below water - Chaos above water
		if (Camera_Data1->Position.y <= 0) DrawQueueDepthBias = 8500.0f;
		if (Camera_Data1->Position.y > 0)
		{
			//Camera above water and Chaos above water - Chaos above water
			if (ChaosPosition.y >= 15) DrawQueueDepthBias = 8500.0f;
			//Camera above water and Chaos below water - Chaos below water
			else DrawQueueDepthBias = -19500.0f;
		}
		njDrawSprite3D_Queue(sp, n, attr, zfunc_type);
	}
	else njDrawSprite3D_Queue(sp, n, attr, zfunc_type);
}

void Chaos4Action(NJS_ACTION *a1, float frameNumber)
{
	//Camera below water - Chaos above water
	if (Camera_Data1->Position.y <= 0) DrawQueueDepthBias = 8000.0f;
	if (Camera_Data1->Position.y > 0)
	{
		//Camera above water and Chaos above water - Chaos above water
		if (ChaosPosition.y >= 15) DrawQueueDepthBias = 8000.0f;
		//Camera above water and Chaos below water - Chaos below water
		else DrawQueueDepthBias = -20000.0f;
	}
	//PrintDebug("Bias: %f\n", DrawQueueDepthBias);
	njAction_Queue_407FC0(a1, frameNumber, (QueuedModelFlagsB)0);
	DrawQueueDepthBias = 0.0f;
}

void Chaos4NumaFix(NJS_OBJECT *a1, int blend_mode, float scale)
{
	ProcessModelNode_D_WrapperB(a1, 0, scale);
}

void Chaos4Ball(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	ProcessModelNode_D_Wrapper(a1, 0);
}

void __cdecl Chaos4_Lilypad_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi
	Angle v3; // eax
	Angle v4; // eax
	Angle v5; // eax
	v1 = a2->Data1;
	if (!MissedFrames)
	{
		j_ClampGlobalColorThing_Thing();
		njSetTexture(&CHAOS4_OBJECT_TEXLIST);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v3 = v1->Rotation.z;
		if (v3)
		{
			njRotateZ(0, v3);
		}
		v4 = v1->Rotation.x;
		if (v4)
		{
			njRotateX(0, v4);
		}
		v5 = v1->Rotation.y;
		if (v5)
		{
			njRotateY(0, v5);
		}
		if (v1->Position.y < 10.0f) DrawQueueDepthBias = -17952.0f;
		else DrawQueueDepthBias = 20;
		sub_40A1E0((NJS_OBJECT*)0x11E3240, 1, 1.0f);
		DrawQueueDepthBias = 0.0f;
		njPopMatrix(1u);
	}
}

static void Chaos4Balls_r(ObjectMaster *a1);
static Trampoline Chaos4Balls_t(0x554FF0, 0x554FF5, Chaos4Balls_r);
static void __cdecl Chaos4Balls_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(Chaos4Balls_r)*>(Chaos4Balls_t.Target());
	EntityData1 *v1 = a1->Data1;
	if (EnableChaos4)
	{
		//Chaos above water
		if (v1->Position.y >= 10) DrawQueueDepthBias = 8500.0f;
		//Chaos below water
		else DrawQueueDepthBias = -28500.0f;
	}
	original(a1);
}

static void Chaos4BallsAttack_r(ObjectMaster *a1);
static Trampoline Chaos4BallsAttack_t(0x555A10, 0x555A15, Chaos4BallsAttack_r);
static void __cdecl Chaos4BallsAttack_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(Chaos4BallsAttack_r)*>(Chaos4BallsAttack_t.Target());
	EntityData1 *v1 = a1->Data1;
	if (EnableChaos4)
	{
		//Chaos above water
		if (v1->Position.y >= 10) DrawQueueDepthBias = 8500.0f;
		//Chaos below water
		else DrawQueueDepthBias = -28500.0f;
	}
	original(a1);
}

void Chaos4_Transform(NJS_OBJECT *object)
{
	DrawQueueDepthBias = -17000.0f;
	ProcessModelNode_D_Wrapper(object, (QueuedModelFlagsB)0);
	DrawQueueDepthBias = 0;
}

void Chaos4_Init()
{
	NJS_MATERIAL* material;
	B_CHAOS4_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS4\\0.sa1lvl"));
	LandTable* B_CHAOS4 = B_CHAOS4_Info->getlandtable(); // &landtable_00000238;
	RemoveMaterialColors_Landtable(B_CHAOS4);
	B_CHAOS4->TexList = &texlist_chaos4;
	LandTableArray[16] = B_CHAOS4;
	for (int j = 0; j < B_CHAOS4->COLCount; j++)
	{
		for (int k = 0; k < B_CHAOS4->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			if (B_CHAOS4->Col[j].Model->basicdxmodel->mats[k].attr_texId == 4)
			{
				material = (NJS_MATERIAL*)&B_CHAOS4->Col[j].Model->basicdxmodel->mats[k];
				AddWhiteDiffuseMaterial(material);
			}
		}
	}
	if (!ModelsLoaded_B_CHAOS4)
	{
		*(NJS_TEXLIST*)0x118FF08 = texlist_chaos4;
		CHAOS4_OBJECT_TEXLIST = texlist_chaos4_object;
		WriteData<1>((char*)0x00555A42, NJD_COLOR_BLENDING_INVSRCALPHA);
		WriteCall((void*)0x5528ED, Chaos4Action); //Main model
		WriteData<10>((char*)0x55507D, 0x90u); //Disable depth bias setting for balls
		WriteData<10>((char*)0x555AB1, 0x90u); //Disable depth bias setting for balls attack
		WriteCall((void*)0x555096, Chaos4Ball);
		WriteJump((void*)0x553F60, Chaos4_Lilypad_Display);
		WriteCall((void*)0x7ADC1E, Chaos4BrainHook);
		WriteCall((void*)0x553380, Chaos4NumaFix);
		WriteCall((void*)0x552918, Chaos4_Transform); //Chaos' model formed from balls
		*(NJS_OBJECT*)0x11C4B90 = *LoadModel("SYSTEM\\data\\B_CHAOS4\\Models\\000425F8.sa1mdl", false); //Chaos 4 swamp water
		Chaos4CleanWater = LoadModel("SYSTEM\\data\\B_CHAOS4\\Models\\0004476C.sa1mdl", false); //Chaos 4 swamp water
		WriteData<1>((char*)0x00555B3F, 0x08); //Chaos 4 bubble blending mode SA_SRC instead of SA_ONE
		WriteJump((void*)0x552F80, Chaos4CleanWater_Display);
		*(NJS_OBJECT*)0x11E3240 = *LoadModel("SYSTEM\\data\\B_CHAOS4\\Models\\0003E6CC.sa1mdl", false); //Lilypad
		//Chaos 4
		RemoveVertexColors_Object((NJS_OBJECT*)0x11A652C); //Chaos4 alt model
		RemoveVertexColors_Object((NJS_OBJECT*)0x11A11C8); //Chaos4 hand attack
		RemoveVertexColors_Object((NJS_OBJECT*)0x11C1C24); //Chaos4 broken into balls
		RemoveVertexColors_Object((NJS_OBJECT*)0x11EC85C); //Chaos4 ball attack
		RemoveVertexColors_Object((NJS_OBJECT*)0x11BFFF4); //Chaos4 wave attack 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x11C077C); //Chaos4 wave attack 2
		RemoveVertexColors_Object((NJS_OBJECT*)0x11C0F04); //Chaos4 wave attack 3
		WriteJump((void*)0x556420, Chaos4Kama); //Chaos 4 attack effect fix
		WriteCall((void*)0x55667C, Chaos4KamaWave);
		WriteCall((void*)0x5539E6, SetMaterial_Chaos4Wave); //Make Chaos 4 wave visible
		((NJS_MATERIAL*)0x11C7BEC)->attr_texId = 0; //Fix Chaos 4 wave texture ID
		for (int i = 0; i < 3; i++)
		{
			Chaos4Fog[i].Color = 0xFF000000;
			Chaos4Fog[i].Layer = 1.0f;
			Chaos4Fog[i].Distance = 2000.0f;
			Chaos4Fog[i].Toggle = 0;
		}
		ModelsLoaded_B_CHAOS4 = true;
	}
}