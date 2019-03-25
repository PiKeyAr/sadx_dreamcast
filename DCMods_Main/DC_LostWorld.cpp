#include "stdafx.h"
#include "LostWorld_objects.h"

LandTableInfo *STG07_0_Info = nullptr;
LandTableInfo *STG07_1_Info = nullptr;
LandTableInfo *STG07_2_Info = nullptr;
LandTable *STG07_0 = nullptr;
LandTable *STG07_1 = nullptr;
LandTable *STG07_2 = nullptr;

NJS_TEXNAME textures_lw1[58];
NJS_TEXLIST texlist_lw1 = { arrayptrandlength(textures_lw1) };

NJS_TEXNAME textures_lw2[95];
NJS_TEXLIST texlist_lw2 = { arrayptrandlength(textures_lw2) };

NJS_TEXNAME textures_lw3[30];
NJS_TEXLIST texlist_lw3 = { arrayptrandlength(textures_lw3) };

DataPointer(float, CurrentDrawDist, 0x03ABDC74);
DataPointer(NJS_MODEL_SADX, Hasira1Model, 0x2004E80);

static int animw1 = 44;
static int animw2 = 81;

NJS_MATERIAL* ObjectSpecular_LostWorld[] = {
	//OSuimen
	((NJS_MATERIAL*)0x01FE4CC8),
	//OTap
	((NJS_MATERIAL*)0x0202AA38),
	((NJS_MATERIAL*)0x0202AA4C),

};

void RenderLWPlatformTriangle(NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float scale)
{
	DrawQueueDepthBias = -2000.0f;
	DrawModel_QueueVisible(model, blend, scale);
	DrawQueueDepthBias = 0.0f;
}

void RenderLWPlatformLight(NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float scale)
{
	DrawQueueDepthBias = -1000.0f;
	DrawModel_QueueVisible(model, blend, scale);
	DrawQueueDepthBias = 0.0f;
}

void LostWorld_Init()
{
	STG07_0_Info = new LandTableInfo(ModPath + "\\data\\STG07\\0.sa1lvl");
	STG07_1_Info = new LandTableInfo(ModPath + "\\data\\STG07\\1.sa1lvl");
	STG07_2_Info = new LandTableInfo(ModPath + "\\data\\STG07\\2.sa1lvl");
	STG07_0 = STG07_0_Info->getlandtable();
	STG07_1 = STG07_1_Info->getlandtable();
	STG07_2 = STG07_2_Info->getlandtable();
	STG07_0->TexList = &texlist_lw1;
	STG07_1->TexList = &texlist_lw2;
	STG07_2->TexList = &texlist_lw3;
	WriteData((LandTable**)0x97DAE8, STG07_0);
	WriteData((LandTable**)0x97DAEC, STG07_1);
	WriteData((LandTable**)0x97DAF0, STG07_2);
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(ObjectSpecular_LostWorld, LengthOfArray(ObjectSpecular_LostWorld), &ForceDiffuse0Specular1);
	}
	((NJS_MATERIAL*)0x0201A13C)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //TurnCube
	((NJS_MATERIAL*)0x0201A150)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //TurnCube
	((NJS_MATERIAL*)0x0201A164)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //TurnCube
	WriteData<1>((void*)0x005E2090, 0xC3u); //Kill water animation in Act 1
	Hasira1Model.mats[0].diffuse.color = 0x99B2B2B2;
	*(NJS_OBJECT*)0x20144CC = objectSTG07_0013BB70; //Kusa02 type 1
	*(NJS_OBJECT*)0x2015968 = objectSTG07_0013CA2C; //Kusa02 type 2
	//*(NJS_MODEL_SADX*)0x0202FF74 = attachSTG07_00151E30; //Aokiswitch
	*(NJS_OBJECT*)0x201AF8C = objectSTG07_00140C64; //Box part 1 object
	*(NJS_OBJECT*)0x201B1C4 = objectSTG07_00140E84; //Box part 2 object
	*(NJS_OBJECT*)0x201B40C = objectSTG07_001410B4; //Box part 3 object
	*(NJS_OBJECT*)0x201B6F4 = objectSTG07_00141374; //Box part 4 object
	*(NJS_OBJECT*)0x201B93C = objectSTG07_001415A4; //Box part 5 object
	*(NJS_OBJECT*)0x201BBBC = objectSTG07_0014180C; //Box part 6 object
	*(NJS_MODEL_SADX*)0x201AF60 = attachSTG07_00140C3C; //Box part 1 model
	*(NJS_MODEL_SADX*)0x201B198 = attachSTG07_00140E5C; //Box part 2 model
	*(NJS_MODEL_SADX*)0x201B3E0 = attachSTG07_0014108C; //Box part 3 model
	*(NJS_MODEL_SADX*)0x201B6C8 = attachSTG07_0014134C; //Box part 4 model
	*(NJS_MODEL_SADX*)0x201B910 = attachSTG07_0014157C; //Box part 5 model
	*(NJS_MODEL_SADX*)0x201BB90 = attachSTG07_001417E4; //Box part 6 model
	*(NJS_MODEL_SADX*)0x20062E0 = attachSTG07_001313BC; //Hasira02
	*(NJS_MODEL_SADX*)0x201CE60 = attachSTG07_001426E8; //TPanel
	*(NJS_OBJECT*)0x201F82C = objectSTG07_00144FD4; //Door front
	((NJS_OBJECT*)0x201C690)->child->model = &attachSTG07_00141B5C; //Water switch
	*(NJS_OBJECT*)0x200D9D4 = objectSTG07_00135F50; //Snake gate
	*(NJS_OBJECT*)0x1FFE9A4 = objectSTG07_0012BB88; //Ashiba01
	*(NJS_OBJECT*)0x1FFF454 = objectSTG07_0012C218; //Ashiba02
	*(NJS_OBJECT*)0x1FFFF04 = objectSTG07_0012C8B4; //Ashiba03
	*(NJS_OBJECT*)0x2023C08 = objectSTG07_00148264; //Snake head
	*(NJS_OBJECT*)0x20253BC = objectSTG07_00148E78; //Snake joints
	*(NJS_OBJECT*)0x2025D64 = objectSTG07_00149374; //Snake joint near the tail
	*(NJS_OBJECT*)0x202670C = objectSTG07_00149870; //Snake tail
	*(NJS_OBJECT*)0x2024828 = objectSTG07_001487A0; //Snake tail tip
	*(NJS_MODEL_SADX*)0x2026E38 = attachSTG07_00149E7C; //Fire obstacle
	*(NJS_OBJECT*)0x2031810 = objectSTG07_01C31810; //Ceiling light imitation
	((NJS_OBJECT*)0x01FE9D7C)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Water in snake room
	((NJS_OBJECT*)0x01FE9D7C)->basicdxmodel->mats[0].diffuse.color = 0x99B2B2B2; //Water in snake room
	((NJS_OBJECT*)0x01FE9D7C)->basicdxmodel->mats[0].attr_texId = 44; //Water in snake room
	((NJS_OBJECT*)0x01FE9F38)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Some other water
	((NJS_OBJECT*)0x01FE9F38)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x01FEB668)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Some other water
	((NJS_OBJECT*)0x01FEB668)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x01FEC26C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Some other water
	((NJS_OBJECT*)0x01FEC26C)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x1E9B594)->basicdxmodel->mats[0].diffuse.color = 0x99B2B2B2; //Some other water
	((NJS_OBJECT*)0x1E9B594)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x202E404)->basicdxmodel->mats[0].diffuse.color = 0x99B2B2B2; //Some other water
	((NJS_OBJECT*)0x202E404)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x279AC80)->basicdxmodel->mats[0].diffuse.color = 0x99B2B2B2; //Some other water
	((NJS_OBJECT*)0x279AC80)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x279B014)->basicdxmodel->mats[0].diffuse.color = 0x99B2B2B2; //Some other water
	((NJS_OBJECT*)0x279B014)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	WriteData((float*)0x814CB4, -25.0f); //LW2 fog stuff
	WriteData<1>((char*)0x005E315D, 0i8); //Prevent the mirror room from disabling character lighting
	WriteCall((void*)0x5E9216, RenderLWPlatformTriangle);
	WriteCall((void*)0x5E927F, RenderLWPlatformLight);
	ResizeTextureList((NJS_TEXLIST*)0x1F6F02C, textures_lw1);
	ResizeTextureList((NJS_TEXLIST*)0x1E9B9AC, textures_lw2);
	ResizeTextureList((NJS_TEXLIST*)0x1E79D80, textures_lw3);
	ResizeTextureList(&OBJ_RUIN_TEXLIST, 127);
	DataArray(FogData, LostWorld1Fog, 0x01E79AAC, 3);
	DataArray(FogData, LostWorld2Fog, 0x01E79ADC, 3);
	DataArray(FogData, LostWorld3Fog, 0x01E79B0C, 3);
	DataArray(DrawDistance, DrawDist_LostWorld2, 0x01E79A7C, 3);
	for (unsigned int i = 0; i < 3; i++)
	{
		LostWorld1Fog[i].Color = 0xFFFFFFFF;
		LostWorld1Fog[i].Layer = 1.0f;
		LostWorld1Fog[i].Distance = 3400.0f;
		LostWorld1Fog[i].Toggle = 1;
		LostWorld2Fog[i].Color = 0xFFFFFFFF;
		LostWorld2Fog[i].Layer = 150.0f;
		LostWorld2Fog[i].Distance = 3200.0f;
		LostWorld2Fog[i].Toggle = 1;
		LostWorld3Fog[i].Layer = 1.0f;
		LostWorld3Fog[i].Distance = 3400.0f;
		LostWorld3Fog[i].Color = 0xFFFFFFFF;
		DrawDist_LostWorld2[i].Maximum = -2700.0;
	}
}

void LostWorld_OnFrame()
{
	if (STG07_0_Info && CurrentLevel == 7 && CurrentAct == 0 && GameState != 16)
	{
		if (animw1 > 57) animw1 = 44;
		((NJS_OBJECT*)0x01FE9D7C)->basicdxmodel->mats[0].attr_texId = animw1;
		((NJS_MATERIAL*)STG07_0_Info->getdata("matlistSTG07_000584CC"))[0].attr_texId = animw1;
		((NJS_MATERIAL*)STG07_0_Info->getdata("matlistSTG07_00057E90"))[0].attr_texId = animw1;
		((NJS_MATERIAL*)STG07_0_Info->getdata("matlistSTG07_00059BE8"))[0].attr_texId = animw1;
		if (!MissedFrames) animw1++;
	}
	if (STG07_1_Info && CurrentLevel == 7 && CurrentAct == 1 && GameState != 16)
	{
		auto entity = EntityData1Ptrs[0];
		if (entity != nullptr && entity->Position.x < 7000 && entity->Position.x > 1800) CurrentDrawDist = -6000.0f; else CurrentDrawDist = -2700.0f;
		if (animw2 > 94) animw2 = 81;
		((NJS_MATERIAL*)STG07_1_Info->getdata("matlistSTG07_000E924C"))[0].attr_texId = animw2;
		((NJS_MATERIAL*)STG07_1_Info->getdata("matlistSTG07_000E3610"))[0].attr_texId = animw2;
		((NJS_MATERIAL*)STG07_1_Info->getdata("matlistSTG07_000E8A20"))[0].attr_texId = animw2;
		((NJS_MATERIAL*)STG07_1_Info->getdata("matlistSTG07_000E43D0"))[0].attr_texId = animw2;
		((NJS_MATERIAL*)STG07_1_Info->getdata("matlistSTG07_000E7228"))[0].attr_texId = animw2;
		((NJS_MATERIAL*)STG07_1_Info->getdata("matlistSTG07_000EF078"))[0].attr_texId = animw2;
		((NJS_MATERIAL*)STG07_1_Info->getdata("matlistSTG07_000ECF80"))[0].attr_texId = animw2;
		((NJS_MATERIAL*)STG07_1_Info->getdata("matlistSTG07_000EABDC"))[0].attr_texId = animw2;
		((NJS_MATERIAL*)STG07_1_Info->getdata("matlistSTG07_000EBB3C"))[0].attr_texId = animw2;
		if (!MissedFrames) animw2++;
	}
}