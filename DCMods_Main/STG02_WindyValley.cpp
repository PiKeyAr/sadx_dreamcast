#include "stdafx.h"

NJS_TEXNAME textures_windy1[20];
NJS_TEXLIST texlist_windy1 = { arrayptrandlength(textures_windy1) };

NJS_TEXNAME textures_windy2[17];
NJS_TEXLIST texlist_windy2 = { arrayptrandlength(textures_windy2) };

NJS_TEXNAME textures_windy3[28];
NJS_TEXLIST texlist_windy3 = { arrayptrandlength(textures_windy3) };

DataArray(SkyboxScale, SkyboxScale_Windy1, 0x00AFE924, 3);
DataArray(FogData, FogData_Windy1, 0x00AFEA20, 3);
DataArray(FogData, FogData_Windy2, 0x00AFEA50, 3);
DataArray(FogData, FogData_Windy3, 0x00AFEA80, 3);
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(ObjectMaster*, TornadoObjectMaster, 0x03C5B32C);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(NJS_VECTOR, CurrentSkybox, 0x03ABDC94);
DataPointer(NJS_BGRA, CurrentFogColorX, 0x03ABDC68);
FunctionPointer(void, sub_4CACF0, (NJS_VECTOR *a1, float a2), 0x4CACF0);
static int TornadoMode = 0;
static float SkyTrans = 1.0f;
NJS_VECTOR TornadoSpawnPosition = { 3254, -421, -1665 };

void RetrieveWindy1SkyTransparency(float a, float r, float g, float b)
{
	SkyTrans = a;
}

void RenderWindy1Sky()
{
	SetMaterialAndSpriteColor_Float(SkyTrans, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -30000.0f;
	lateDrawObject((NJS_OBJECT*)0xC05E10, (QueuedModelFlagsB)0, 1.0f); // Main
	DrawQueueDepthBias = -28000.0f;
	lateDrawObject((NJS_OBJECT*)0xC06450, (QueuedModelFlagsB)0, 1.0f); // Bottom non-trans
	SetMaterialAndSpriteColor_Float(SkyTrans* 0.6f, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -25000.0f;
	lateDrawObject((NJS_OBJECT*)0xC0655C, (QueuedModelFlagsB)0, 1.0f); // Bottom trans
	DrawQueueDepthBias = -20000.0f;
	SetMaterialAndSpriteColor_Float(SkyTrans, 1.0f, 1.0f, 1.0f);
	lateDrawObject((NJS_OBJECT*)0xC06344, (QueuedModelFlagsB)0, 1.0f); // Cloud 1
	DrawQueueDepthBias = -18000.0f;
	lateDrawObject((NJS_OBJECT*)0xC06A94, (QueuedModelFlagsB)0, 1.0f); // Cloud 2
	DrawQueueDepthBias = 0;
}

void UnloadLevelFiles_STG02()
{
	delete STG02_0_Info;
	delete STG02_1_Info;
	delete STG02_2_Info;
	STG02_0_Info = nullptr;
	STG02_1_Info = nullptr;
	STG02_2_Info = nullptr;
}

void OHasieFix(NJS_MODEL_SADX *model, float scale)
{
	DrawModelMesh(model, (QueuedModelFlagsB)0);
}

void DrawTransparentBrokenBlocks(NJS_MODEL_SADX *model, QueuedModelFlagsB blend)
{
	DrawQueueDepthBias = 5000.0f;
	lateDrawModel(model, blend);
	DrawQueueDepthBias = 0.0f;
}

void DrawTransparentBrokenBlocksExplosion(NJS_VECTOR *a1, float a2)
{
	ParticleDepthOverride = 22048.0f;
	sub_4CACF0(a1, a2);
	ParticleDepthOverride = 0.0f;
}

void __cdecl OTanpopo_Child_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	EntityData1 *v2; // edi
	float ZDist; // ST08_4
	float YDist; // ST04_4
	float XDist; // ST00_4
	Angle v6; // ecx

	v1 = a1->Data1;
	v2 = a1->Parent->Data1;
	ZDist = v2->Scale.z + v1->Position.z;
	YDist = v2->Scale.y + v1->Position.y;
	XDist = v2->Scale.x + v1->Position.x;
	if ((abs(v1->Position.x - v2->Position.x) > 0.5f || abs(v1->Position.y-v2->Position.y > 0.5f) || abs(v1->Position.z - v2->Position.z) > 0.5f))
	{
		if (!MissedFrames)
		{
			SetTextureToLevelObj();
			njPushMatrix(0);
			njTranslate(0, XDist, YDist, ZDist);
			v6 = Camera_Data1->Rotation.y;
			if (v6)
			{
				njRotateY(0, (unsigned __int16)v6);
			}
			late_DrawObjectClip((NJS_OBJECT*)0x00C1DBFC, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			njPopMatrix(1u);
		}
	}
}

void OTuriBr2_Particle(NJS_VECTOR *a1, NJS_VECTOR *a2, float a3)
{
	ParticleDepthOverride = 20000.0f;
	Bridge_CreateDustParticle(a1, a2, a3);
	ParticleDepthOverride = 0.0f;
}

void OHaneAFix(NJS_MODEL_SADX *model, QueuedModelFlagsB blend, float scale)
{
	DrawQueueDepthBias = -5000.0f;
	late_DrawModelClipEx(model, blend, scale);
	DrawQueueDepthBias = 0.0f;
}

void WindyValley_Init()
{
	STG02_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG02\\0.sa1lvl"));
	STG02_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG02\\1.sa1lvl"));
	STG02_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG02\\2.sa1lvl"));
	LandTable* STG02_0 = STG02_0_Info->getlandtable(); //&landtable_0000D7E0; //STG02_0_Info->getlandtable();
	LandTable* STG02_1 = STG02_1_Info->getlandtable(); //&landtable_0000DB40; //STG02_1_Info->getlandtable();
	LandTable* STG02_2 = STG02_2_Info->getlandtable(); //&landtable_0000F274; //STG02_2_Info->getlandtable();
	RemoveMaterialColors_Landtable(STG02_0);
	RemoveMaterialColors_Landtable(STG02_1);
	RemoveMaterialColors_Landtable(STG02_2);
	STG02_0->TexList = &texlist_windy1;
	STG02_1->TexList = &texlist_windy2;
	STG02_2->TexList = &texlist_windy3;
	WriteData((LandTable**)0x97DA48, STG02_0); // Act 1
	WriteData((LandTable**)0x97DA4C, STG02_1); // Act 2
	WriteData((LandTable**)0x97DA50, STG02_2); // Act 3
	AddLateDrawLandtable(STG02_2);
	if (!ModelsLoaded_STG02)
	{
		WINDY01_TEXLIST = texlist_windy1;
		WINDY02_TEXLIST = texlist_windy2;
		WINDY03_TEXLIST = texlist_windy3;
		// Skybox stuff
		WriteCall((void*)0x004DD794, RetrieveWindy1SkyTransparency);
		WriteCall((void*)0x004DD7D1, RenderWindy1Sky);
		WriteData<5>((void*)0x004DD7DB, 0x90);
		WriteData<5>((void*)0x004DD7E5, 0x90);
		WriteData<5>((void*)0x004DD7EF, 0x90);
		WriteData<5>((void*)0x004DD7F9, 0x90);
		// Material fixes
		RemoveVertexColors_Object((NJS_OBJECT*)0xC496BC); // E103 rocket
		((NJS_MATERIAL*)0x00C1C468)->attr_texId &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x00C1C47C)->attr_texId &= ~NJD_FLAG_IGNORE_SPECULAR;
		WriteData<1>((void*)0x4DD120, 0xC3); // Disable some fog thing
		WriteCall((void*)0x004E1E35, late_DrawModelClipMesh); // Wind gate rendering function
		WriteCall((void*)0x004E1E9A, late_DrawModelClipMesh); // Wind gate rendering function
		WriteCall((void*)0x004E1F08, late_DrawModelClipMesh); // Wind gate rendering function
		WriteCall((void*)0x004E1F77, late_DrawModelClipMesh); // Wind gate rendering function
		WriteCall((void**)0x4E126F, OHasieFix);
		WriteCall((void**)0x4E12D2, OHasieFix);
		WriteCall((void**)0x4E133E, OHasieFix);
		WriteCall((void*)0x4E282D, DrawTransparentBrokenBlocksExplosion);
		WriteCall((void*)0x4E2703, DrawTransparentBrokenBlocksExplosion);
		WriteCall((void*)0x4E2262, DrawTransparentBrokenBlocks);
		WriteJump((void*)0x4DFA60, OTanpopo_Child_Display); // Fix hanging dandelion seed
		*(NJS_MODEL_SADX*)0xC1DDF8 = *LoadModel("system\\data\\STG02\\Models\\000C4A70.sa1mdl")->basicdxmodel; // Bridge piece
		*(NJS_MODEL_SADX*)0xC1E168 = *LoadModel("system\\data\\STG02\\Models\\000C4D24.sa1mdl")->basicdxmodel; // Fixed bridge rope
		WriteCall((void*)0x7A525C, OTuriBr2_Particle);
		WriteCall((void*)0x4E09FB, OTuriBr2_Particle);
		*(NJS_MODEL_SADX*)0xC1D068 = *LoadModel("system\\data\\STG02\\Models\\000C4024.sa1mdl")->basicdxmodel; // OPopo base
		*(NJS_OBJECT*)0xC1C648 = *LoadModel("system\\data\\STG02\\Models\\000C3A70.sa1mdl"); // OPopo part 2
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0xC1C648)->basicdxmodel->mats[1]);
		*(NJS_OBJECT*)0xC1C848 = *LoadModel("system\\data\\STG02\\Models\\000C38A8.sa1mdl"); // OPopo part 1 (I swapped these because SADX renders them in an incorrect order)
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0xC1C848)->basicdxmodel->mats[1]);
		*(NJS_MODEL_SADX*)0xC1DAB4 = *LoadModel("system\\data\\STG02\\Models\\000C47B0.sa1mdl")->basicdxmodel; // OTanpopo base
		*(NJS_OBJECT*)0xC1D1B0 = *LoadModel("system\\data\\STG02\\Models\\000C4128.sa1mdl"); // OTanpopo fuzz
		*(NJS_OBJECT*)0xC1DBFC = *LoadModel("system\\data\\STG02\\Models\\000C48B4.sa1mdl"); // OTanpopo seed
		*(NJS_OBJECT*)0xC2663C = *LoadModel("system\\data\\STG02\\Models\\000CB98C.sa1mdl"); // OTreeM
		*(NJS_OBJECT*)0xC32DB8 = *LoadModel("system\\data\\STG02\\Models\\000D40D4.sa1mdl"); // Grassy rock
		*(NJS_OBJECT*)0xC34384 = *LoadModel("system\\data\\STG02\\Models\\000D4D88.sa1mdl"); // OTatel (rock fencing)
		*(NJS_OBJECT*)0xC18A7C = *LoadModel("system\\data\\STG02\\Models\\000C1494.sa1mdl"); // OCubeS
		*(NJS_OBJECT*)0xC18ED4 = *LoadModel("system\\data\\STG02\\Models\\000C177C.sa1mdl"); // OCubeM
		*(NJS_OBJECT*)0xC1935C = *LoadModel("system\\data\\STG02\\Models\\000C1A90.sa1mdl"); // OCubeL
		*(NJS_OBJECT*)0xC2EF68 = *LoadModel("system\\data\\STG02\\Models\\000D1ADC.sa1mdl"); // OGrFlowerA / OHanaA
		*(NJS_OBJECT*)0xC2F5A0 = *LoadModel("system\\data\\STG02\\Models\\000D1FF8.sa1mdl"); // OGrFlowerB / OHanaB
		*(NJS_OBJECT*)0xC34BDC = *LoadModel("system\\data\\STG02\\Models\\000D5250.sa1mdl"); // OTateS
		*(NJS_OBJECT*)0xC3D428 = *LoadModel("system\\data\\STG02\\Models\\000DB1B8.sa1mdl"); // OWasi
		*(NJS_OBJECT*)0xC2AF48 = *LoadModel("system\\data\\STG02\\Models\\000CEF44.sa1mdl"); // OBroobj (breakable fan)
		*(NJS_OBJECT*)0xC2B08C = *LoadModel("system\\data\\STG02\\Models\\000CF048.sa1mdl"); // OBroobj broken 1
		*(NJS_OBJECT*)0xC2B438 = *LoadModel("system\\data\\STG02\\Models\\000CF334.sa1mdl"); // OBroobj broken 2
		*(NJS_OBJECT*)0xC2B57C = *LoadModel("system\\data\\STG02\\Models\\000CF438.sa1mdl"); // OBroobj broken 3
		*(NJS_OBJECT*)0xC2B860 = *LoadModel("system\\data\\STG02\\Models\\000CF660.sa1mdl"); // OBroobj broken 4
		*(NJS_OBJECT*)0xC2C160 = *LoadModel("system\\data\\STG02\\Models\\000CFC44.sa1mdl"); // OBroobj broken 5
		*(NJS_OBJECT*)0xC2C314 = *LoadModel("system\\data\\STG02\\Models\\000CFDA8.sa1mdl"); // OBroobj broken 6
		*(NJS_OBJECT*)0xC2C788 = *LoadModel("system\\data\\STG02\\Models\\000D0098.sa1mdl"); // OBroobj broken 7
		*(NJS_OBJECT*)0xC2CB24 = *LoadModel("system\\data\\STG02\\Models\\000D030C.sa1mdl"); // OBroobj broken 8
		*(NJS_OBJECT*)0xC2CF4C = *LoadModel("system\\data\\STG02\\Models\\000D05C8.sa1mdl"); // OBroobj broken 9
		*(NJS_OBJECT*)0xC0B188 = *LoadModel("system\\data\\STG02\\Models\\000B6C3C.sa1mdl"); // Skybox bottom in Act 3
		*(NJS_OBJECT*)0xC21704 = *LoadModel("system\\data\\STG02\\Models\\000C7F08.sa1mdl"); // Yure
		*(NJS_OBJECT*)0xC29B94 = *LoadModel("system\\data\\STG02\\Models\\000CE310.sa1mdl"); // HaneA
		WriteCall((void*)0x4E108A, OHaneAFix);
		WriteCall((void*)0x4E11C1, OHaneAFix);
		*(NJS_OBJECT*)0xC3C8D4 = *LoadModel("system\\data\\STG02\\Models\\000DA8FC.sa1mdl"); // OStBrid
		*(NJS_OBJECT*)0xC157C4 = *LoadModel("system\\data\\STG02\\Models\\000BF0F8.sa1mdl"); // Bridge D
		*(NJS_OBJECT*)0xC1560C = *LoadModel("system\\data\\STG02\\Models\\000BEF7C.sa1mdl"); // Bridge C
		*(NJS_OBJECT*)0xC142FC = *LoadModel("system\\data\\STG02\\Models\\000BE2F0.sa1mdl"); // Bridge B
		*(NJS_OBJECT*)0xC13274 = *LoadModel("system\\data\\STG02\\Models\\000BD7C8.sa1mdl"); // Bridge A
		*(NJS_OBJECT*)0xC2433C = *LoadModel("system\\data\\STG02\\Models\\000C9DE8.sa1mdl"); // OSaku C
		*(NJS_OBJECT*)0xC23384 = *LoadModel("system\\data\\STG02\\Models\\000C9298.sa1mdl"); // OSaku B
		*(NJS_OBJECT*)0xC22E74 = *LoadModel("system\\data\\STG02\\Models\\000C8F20.sa1mdl"); // OSaku A
		*(NJS_OBJECT*)0xC315FC = *LoadModel("system\\data\\STG02\\Models\\000D38A8.sa1mdl"); // Wind gate 1
		*(NJS_OBJECT*)0xC30C44 = *LoadModel("system\\data\\STG02\\Models\\000D31C8.sa1mdl"); // Wind gate 2
		*(NJS_OBJECT*)0xC305A4 = *LoadModel("system\\data\\STG02\\Models\\000D2C98.sa1mdl"); // Wind gate 3
		*(NJS_OBJECT*)0xC2FF04 = *LoadModel("system\\data\\STG02\\Models\\000D2768.sa1mdl"); // Wind gate 4
		*(NJS_OBJECT*)0xC359E0 = *LoadModel("system\\data\\STG02\\Models\\000D5CE4.sa1mdl"); // OHaneA
		*(NJS_OBJECT*)0xC1A7E4 = *LoadModel("system\\data\\STG02\\Models\\000C2728.sa1mdl"); // OUkisim
		*(NJS_OBJECT*)0xC280A4 = *LoadModel("system\\data\\STG02\\Models\\000CCDC8.sa1mdl"); // OHasiE 1
		*(NJS_OBJECT*)0xC27200 = *LoadModel("system\\data\\STG02\\Models\\000CC348.sa1mdl"); // OHasiE 2
		*(NJS_OBJECT*)0xC278F0 = *LoadModel("system\\data\\STG02\\Models\\000CC830.sa1mdl"); // OHasiE 3
		*(NJS_OBJECT*)0xC15B2C = *LoadModel("system\\data\\STG02\\Models\\000BF404.sa1mdl"); // PuWind 1
		*(NJS_OBJECT*)0xC159FC = *LoadModel("system\\data\\STG02\\Models\\000BF300.sa1mdl"); // PuWind 2
		*(NJS_OBJECT*)0xC158E0 = *LoadModel("system\\data\\STG02\\Models\\000BF1FC.sa1mdl"); // PuWind 3
		*(NJS_OBJECT*)0xC21B10 = *LoadModel("system\\data\\STG02\\Models\\000C81F4.sa1mdl"); // OPoline 1
		*(NJS_OBJECT*)0xC21E88 = *LoadModel("system\\data\\STG02\\Models\\000C844C.sa1mdl"); // OPoline 2
		*(NJS_OBJECT*)0xC22A94 = *LoadModel("system\\data\\STG02\\Models\\000C8C98.sa1mdl"); // OPoline 3
		*(NJS_OBJECT*)0xC1C434 = *LoadModel("system\\data\\STG02\\Models\\000C36D4.sa1mdl"); // OBigfla
		*(NJS_MODEL_SADX*)0xC185E0 = *LoadModel("system\\data\\STG02\\Models\\000C11D4.sa1mdl")->basicdxmodel; // OVcRock 1
		*(NJS_MODEL_SADX*)0xC1673C = *LoadModel("system\\data\\STG02\\Models\\000BFCE8.sa1mdl")->basicdxmodel; // OVcRock 2
		*(NJS_OBJECT*)0xC16C30 = *LoadModel("system\\data\\STG02\\Models\\000C003C.sa1mdl"); // OVcRock 3
		*(NJS_OBJECT*)0xC17110 = *LoadModel("system\\data\\STG02\\Models\\000C0390.sa1mdl"); // OVcRock 4
		*(NJS_OBJECT*)0xC174D8 = *LoadModel("system\\data\\STG02\\Models\\000C0664.sa1mdl"); // OVcRock 5
		*(NJS_OBJECT*)0xC17860 = *LoadModel("system\\data\\STG02\\Models\\000C08D0.sa1mdl"); // OVcRock 6
		*(NJS_OBJECT*)0xC17DAC = *LoadModel("system\\data\\STG02\\Models\\000C0CAC.sa1mdl"); // OVcRock 7
		*(NJS_MODEL_SADX*)0xC1DFB0 = *LoadModel("system\\data\\STG02\\Models\\000C4BBC.sa1mdl")->basicdxmodel; // OTuriBr2 top rope
		*(NJS_MODEL_SADX*)0xC2AF1C = *((NJS_OBJECT*)0xC2AF48)->basicdxmodel; // OSetiff 1
		*(NJS_MODEL_SADX*)0xC2B060 = *((NJS_OBJECT*)0xC2B08C)->basicdxmodel; // OSetiff 2
		*(NJS_MODEL_SADX*)0xC2B40C = *((NJS_OBJECT*)0xC2B438)->basicdxmodel; // OSetiff 3 
		*(NJS_MODEL_SADX*)0xC2B550 = *((NJS_OBJECT*)0xC2B57C)->basicdxmodel; // OSetiff 4
		*(NJS_MODEL_SADX*)0xC2B834 = *((NJS_OBJECT*)0xC2B860)->basicdxmodel; // OSetiff 5
		*(NJS_MODEL_SADX*)0xC2C134 = *((NJS_OBJECT*)0xC2C160)->basicdxmodel; // OSetiff 6
		*(NJS_MODEL_SADX*)0xC2C2E8 = *((NJS_OBJECT*)0xC2C314)->basicdxmodel; // OSetiff 7
		*(NJS_MODEL_SADX*)0xC2C75C = *((NJS_OBJECT*)0xC2C788)->basicdxmodel; // OSetiff 8
		*(NJS_MODEL_SADX*)0xC2CAF8 = *((NJS_OBJECT*)0xC2CB24)->basicdxmodel; // OSetiff 9
		*(NJS_OBJECT*)0xC0EC58 = *LoadModel("system\\data\\STG02\\Models\\000BA270.sa1mdl"); // Broken bridge pieces 21
		*(NJS_MODEL_SADX*)0xC0EC2C = *((NJS_OBJECT*)0xC0EC58)->basicdxmodel; // OSetiff 10
		*(NJS_OBJECT*)0xC109A0 = *LoadModel("system\\data\\STG02\\Models\\000BB974.sa1mdl"); // Broken bridge pieces 1
		*(NJS_OBJECT*)0xC10BAC = *LoadModel("system\\data\\STG02\\Models\\000BBB18.sa1mdl"); // Broken bridge pieces 2
		*(NJS_OBJECT*)0xC10DEC = *LoadModel("system\\data\\STG02\\Models\\000BBCE0.sa1mdl"); // Broken bridge pieces 3
		*(NJS_OBJECT*)0xC10FA0 = *LoadModel("system\\data\\STG02\\Models\\000BBE44.sa1mdl"); // Broken bridge pieces 4
		*(NJS_OBJECT*)0xC111AC = *LoadModel("system\\data\\STG02\\Models\\000BBFDC.sa1mdl"); // Broken bridge pieces 5
		*(NJS_OBJECT*)0xC11418 = *LoadModel("system\\data\\STG02\\Models\\000BC1BC.sa1mdl"); // Broken bridge pieces 6
		*(NJS_OBJECT*)0xC119A8 = *LoadModel("system\\data\\STG02\\Models\\000BC56C.sa1mdl"); // Broken bridge pieces 7
		*(NJS_OBJECT*)0xC11C40 = *LoadModel("system\\data\\STG02\\Models\\000BC74C.sa1mdl"); // Broken bridge pieces 8
		*(NJS_OBJECT*)0xC11F04 = *LoadModel("system\\data\\STG02\\Models\\000BC96C.sa1mdl"); // Broken bridge pieces 9
		*(NJS_OBJECT*)0xC12144 = *LoadModel("system\\data\\STG02\\Models\\000BCB34.sa1mdl"); // Broken bridge pieces 10
		*(NJS_OBJECT*)0xC1233C = *LoadModel("system\\data\\STG02\\Models\\000BCCCC.sa1mdl"); // Broken bridge pieces 11
		*(NJS_OBJECT*)0xC12548 = *LoadModel("system\\data\\STG02\\Models\\000BCE70.sa1mdl"); // Broken bridge pieces 12
		*(NJS_OBJECT*)0xC12970 = *LoadModel("system\\data\\STG02\\Models\\000BD13C.sa1mdl"); // Broken bridge pieces 13
		*(NJS_OBJECT*)0xC12B8C = *LoadModel("system\\data\\STG02\\Models\\000BD2B8.sa1mdl"); // Broken bridge pieces 14
		*(NJS_OBJECT*)0xC0DCE8 = *LoadModel("system\\data\\STG02\\Models\\000B9694.sa1mdl"); // Broken bridge pieces 15
		*(NJS_OBJECT*)0xC0DEF4 = *LoadModel("system\\data\\STG02\\Models\\000B9838.sa1mdl"); // Broken bridge pieces 16
		*(NJS_OBJECT*)0xC0E134 = *LoadModel("system\\data\\STG02\\Models\\000B9A00.sa1mdl"); // Broken bridge pieces 17
		*(NJS_OBJECT*)0xC0E40C = *LoadModel("system\\data\\STG02\\Models\\000B9C20.sa1mdl"); // Broken bridge pieces 18
		*(NJS_OBJECT*)0xC0E690 = *LoadModel("system\\data\\STG02\\Models\\000B9E00.sa1mdl"); // Broken bridge pieces 19
		*(NJS_OBJECT*)0xC0E93C = *LoadModel("system\\data\\STG02\\Models\\000BA020.sa1mdl"); // Broken bridge pieces 20
		*(NJS_OBJECT*)0xC0EE0C = *LoadModel("system\\data\\STG02\\Models\\000BA3D4.sa1mdl"); // Broken bridge pieces 22
		*(NJS_OBJECT*)0xC0F0CC = *LoadModel("system\\data\\STG02\\Models\\000BA5F4.sa1mdl"); // Broken bridge pieces 23
		*(NJS_OBJECT*)0xC0F280 = *LoadModel("system\\data\\STG02\\Models\\000BA74C.sa1mdl"); // Broken bridge pieces 24
		*(NJS_OBJECT*)0xC0F500 = *LoadModel("system\\data\\STG02\\Models\\000BA92C.sa1mdl"); // Broken bridge pieces 25
		*(NJS_OBJECT*)0xC0F6B4 = *LoadModel("system\\data\\STG02\\Models\\000BAA90.sa1mdl"); // Broken bridge pieces 26
		*(NJS_OBJECT*)0xC0F8F4 = *LoadModel("system\\data\\STG02\\Models\\000BAC58.sa1mdl"); // Broken bridge pieces 27
		*(NJS_OBJECT*)0xC0FB00 = *LoadModel("system\\data\\STG02\\Models\\000BADFC.sa1mdl"); // Broken bridge pieces 28
		*(NJS_OBJECT*)0xC0FE08 = *LoadModel("system\\data\\STG02\\Models\\000BB04C.sa1mdl"); // Broken bridge pieces 29
		*(NJS_OBJECT*)0xC1009C = *LoadModel("system\\data\\STG02\\Models\\000BB25C.sa1mdl"); // Broken bridge pieces 30
		*(NJS_OBJECT*)0xC10250 = *LoadModel("system\\data\\STG02\\Models\\000BB3B4.sa1mdl"); // Broken bridge pieces 31
		*(NJS_OBJECT*)0xC10514 = *LoadModel("system\\data\\STG02\\Models\\000BB5D4.sa1mdl"); // Broken bridge pieces 32
		*(NJS_OBJECT*)0xC10720 = *LoadModel("system\\data\\STG02\\Models\\000BB778.sa1mdl"); // Broken bridge pieces 33
		*(NJS_MODEL_SADX*)0xC15B00 = *((NJS_OBJECT*)0xC15B2C)->basicdxmodel; // Tornado stuff 1
		*(NJS_MODEL_SADX*)0xC158B4 = *((NJS_OBJECT*)0xC158E0)->basicdxmodel; // Tornado stuff 2
		*(NJS_MODEL_SADX*)0xC159D0 = *((NJS_OBJECT*)0xC159FC)->basicdxmodel; // Tornado stuff 3
		*(NJS_OBJECT*)0xC3BB80 = *LoadModel("system\\data\\STG02\\Models\\000DA0E8.sa1mdl"); // OBigflo
		*(NJS_OBJECT*)0xC2D900 = *LoadModel("system\\data\\STG02\\Models\\000D0BB8.sa1mdl"); // OIshiA
		*(NJS_OBJECT*)0xC2E944 = *LoadModel("system\\data\\STG02\\Models\\000D15C0.sa1mdl"); // OIshiB
		*(NJS_OBJECT*)0xC36E44 = *LoadModel("system\\data\\STG02\\Models\\000D6BF8.sa1mdl"); // OKazami 1
		*(NJS_OBJECT*)0xC365AC = *LoadModel("system\\data\\STG02\\Models\\000D6630.sa1mdl"); // OKazami 2
		*(NJS_OBJECT*)0xC35F44 = *LoadModel("system\\data\\STG02\\Models\\000D6134.sa1mdl"); // OKazami 3
		// Skybox/fog data stuff
		for (int i = 0; i < 3; i++)
		{
			SkyboxScale_Windy1->Far.x = 1.0f;
			SkyboxScale_Windy1->Far.y = 1.0f;
			SkyboxScale_Windy1->Far.z = 1.0f;
			SkyboxScale_Windy1->Normal.x = 1.0f;
			SkyboxScale_Windy1->Normal.y = 1.0f;
			SkyboxScale_Windy1->Normal.z = 1.0f;
			SkyboxScale_Windy1->Near.x = 1.0f;
			SkyboxScale_Windy1->Near.y = 1.0f;
			SkyboxScale_Windy1->Near.z = 1.0f;
			DrawDist_WindyValley1[i].Maximum = -8000.0f;
			FogData_Windy1[i].Distance = 12000.0f;
			FogData_Windy1[i].Layer = 1000.0f;
			FogData_Windy1[i].Color = 0xFFFFFFFF;
			FogData_Windy2[i].Color = 0xFFFFFFFF;
			FogData_Windy2[i].Distance = 2500.0f;
			FogData_Windy2[i].Layer = 50.0f;
			FogData_Windy2[i].Toggle = 1;
			FogData_Windy3[i].Distance = 6000.0f;
			FogData_Windy3[i].Layer = 200.0f;
			FogData_Windy3[i].Color = 0xFFFFFFFF;
		}
		ModelsLoaded_STG02 = true;
	}
};

void WindyValley_OnFrame()
{
	float TornadoDistance;
	auto entity = EntityData1Ptrs[0];
	// Tornado stuff
	if (CurrentLevel == LevelIDs_WindyValley)
	{
		if (CurrentAct == 0)
		{
			if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21 || CurrentCharacter == 6) TornadoMode = 0;
			if (CurrentCharacter != 6 && entity != nullptr)
			{
				TornadoDistance = squareroot((entity->Position.x - TornadoSpawnPosition.x) * (entity->Position.x - TornadoSpawnPosition.x) + (entity->Position.y - TornadoSpawnPosition.y) * (entity->Position.y - TornadoSpawnPosition.y) + (entity->Position.z - TornadoSpawnPosition.z) * (entity->Position.z - TornadoSpawnPosition.z));
				if (TornadoMode != 4)
				{
					if (TornadoDistance < 680) TornadoMode = 1;
					if (TornadoDistance < 310) TornadoMode = 2;
					if (TornadoDistance < 170) TornadoMode = 3;
					if (TornadoDistance < 150) TornadoMode = 4;
				}
				if (TornadoMode == 0 || TornadoMode == 4)
				{
					if (CurrentFogDist < 2200) CurrentFogDist = CurrentFogDist + 32.0f;
					if (CurrentFogLayer < 400) CurrentFogLayer = CurrentFogLayer + 16.0f;
				}
				if (TornadoMode == 1)
				{
					if (CurrentFogColorX.r > 7)
					{
						CurrentFogColorX.r = CurrentFogColorX.r - 8;
						CurrentFogColorX.g = CurrentFogColorX.g - 8;
						CurrentFogColorX.b = CurrentFogColorX.b - 8;
					}
					if (CurrentFogColorX.r <= 7 && CurrentFogColorX.r > 0)
					{
						CurrentFogColorX.r = 0;
						CurrentFogColorX.g = 0;
						CurrentFogColorX.b = 0;
					}
					if (CurrentFogDist > 5000) CurrentFogDist = CurrentFogDist - 128.0f;
					if (CurrentFogLayer >= 100) CurrentFogLayer = CurrentFogLayer - 128.0f;
				}
				if (TornadoMode == 2)
				{
					if (CurrentFogDist > 450) CurrentFogDist = CurrentFogDist - 64.0f;
					if (CurrentFogLayer >= 64) CurrentFogLayer = CurrentFogLayer - 64.0f;
					if (CurrentFogColorX.r > 1)
					{
						CurrentFogColorX.r--;
						CurrentFogColorX.g--;
						CurrentFogColorX.b--;
					}
				}
			}
		}
		// Clear tornado ObjectMaster pointer after Act 1 - if it isn't cleared the dandelions get weird
		if (CurrentAct != 0 && TornadoObjectMaster != nullptr) TornadoObjectMaster = nullptr;
	}
}