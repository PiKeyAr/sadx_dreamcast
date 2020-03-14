#include "stdafx.h"

//TODO: Chaos 2 ball right after being attacked should use object light type

NJS_TEXNAME textures_chaos2[15];
NJS_TEXLIST texlist_chaos2 = { arrayptrandlength(textures_chaos2) };

//#include "Chaos2.h"
//#include "Chaos2_Objects.h"

DataArray(FogData, Chaos2Fog, 0x01120638, 3);

void FixChaos2Columns(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = 8000.0f;
	ProcessModelNode_A_Wrapper(a1, (QueuedModelFlagsB)0, a3);
	DrawQueueDepthBias = 0;
}

void UnloadLevelFiles_B_CHAOS2()
{
	delete B_CHAOS2_Info;
	B_CHAOS2_Info = nullptr;
}

void Chaos2Ball(NJS_OBJECT *object)
{
	ProcessModelNode_D_Wrapper(object, (QueuedModelFlagsB)0);
}

void Chaos2_Transform(NJS_OBJECT *object)
{
	DrawQueueDepthBias = -17000.0f;
	ProcessModelNode_D_Wrapper(object, (QueuedModelFlagsB)0);
	DrawQueueDepthBias = 0;
}

void Chaos2Action(NJS_ACTION *a1, float frameNumber)
{
	njAction_Queue_407FC0(a1, frameNumber, (QueuedModelFlagsB)0);
}

void ChandelierFix(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	ProcessModelNode_D_Wrapper(a1, (QueuedModelFlagsB)1);
}

void Chaos2TableTopFix(NJS_MODEL_SADX *model, float scale)
{
	DrawQueueDepthBias = -20000.0f;
	DrawModel_Queue(model, QueuedModelFlagsB_EnableZWrite);
	DrawQueueDepthBias = 0.0f;
}

void ChandLightFix(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	SetMaterialAndSpriteColor_Float(0.65f, 0.6f, 0.6f, 0.6f);
	DrawQueueDepthBias = -18000.0f;
	ProcessModelNode(a1, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void Chaos2_Init()
{
	B_CHAOS2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS2\\0.sa1lvl"));
	LandTable* B_CHAOS2 = B_CHAOS2_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_CHAOS2);
	B_CHAOS2->TexList = &texlist_chaos2;
	LandTableArray[8] = B_CHAOS2; //Chaos 2
	if (!ModelsLoaded_B_CHAOS2)
	{
		ResizeTextureList((NJS_TEXLIST*)0x117C76C, textures_chaos2);
		*(NJS_MODEL_SADX*)0x11863C0 = *LoadModel("system\\data\\B_CHAOS2\\Models\\0006CD68.sa1mdl", false)->basicdxmodel; //Column
		*(NJS_OBJECT*)0x11835B4 = *LoadModel("system\\data\\B_CHAOS2\\Models\\0006812C.sa1mdl", false); //Table
		((NJS_OBJECT*)0x11835B4)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_USE_ALPHA; //This doesn't use alpha anyway
		*(NJS_MODEL_SADX*)0x1183690 = *LoadModel("system\\data\\B_CHAOS2\\Models\\0006822C.sa1mdl", false)->basicdxmodel; //Transparent thing on table
		WriteCall((void*)0x54E3FE, Chaos2TableTopFix);
		*(NJS_OBJECT*)0x117E86C = *LoadModel("system\\data\\B_CHAOS2\\Models\\0006A160.sa1mdl", false); //Chandelier
		*(NJS_OBJECT*)0x117EB1C = *LoadModel("system\\data\\B_CHAOS2\\Models\\0006A400.sa1mdl", false); //Chandelier floor light
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x117EB1C)->basicdxmodel->mats[0]);
		WriteCall((void*)0x54DFCC, ChandelierFix);
		WriteCall((void*)0x54E13C, ChandLightFix);
		((NJS_OBJECT*)0x117EB1C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		WriteCall((void*)0x0054AC30, FixChaos2Columns);
		WriteCall((void*)0x54D991, Chaos2Ball); //Ball bouncing
		WriteCall((void*)0x54C5E7, Chaos2_Transform); //Ball transforming
		WriteCall((void*)0x54F496, Chaos2Ball); //Chaos transformation model
		WriteCall((void*)0x54CFC9, Chaos2Ball); //Hand attack
		WriteCall((void*)0x54DA8A, Chaos2Action); //Main model
		WriteCall((void*)0x54D928, Chaos2Ball); //Puddle
		//WriteCall((void*)0x54F5AC, Chaos2Ball); //Small puddles - disabled because it runs out of memory for late_alloca
		WriteCall((void*)0x54F5DF, Chaos2Ball); //Small ball attack
		RemoveVertexColors_Object((NJS_OBJECT*)0x114B918); //Chaos2 (alt)
		RemoveVertexColors_Object((NJS_OBJECT*)0x11339EC); //Chaos2 small ball
		RemoveVertexColors_Object((NJS_OBJECT*)0x1139274); //Chaos2 ball
		RemoveVertexColors_Object((NJS_OBJECT*)0x113F81C); //Chaos2 ball 2
		for (int i = 0; i < 3; i++)
		{
			Chaos2Fog[i].Color = 0xFF000000;
			Chaos2Fog[i].Layer = 700.0f;
			Chaos2Fog[i].Distance = 1700.0f;
			Chaos2Fog[i].Toggle = 0;
		}
		ModelsLoaded_B_CHAOS2 = true;
	}
}