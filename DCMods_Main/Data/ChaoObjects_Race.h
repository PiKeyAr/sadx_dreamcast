#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

//Stuff for "Chao Race" letters

bool letteranims[][8] = {
	{ true, false, false, false, false,	false, false, false },
	{ false, true, false, false, false,	false, false, false },
	{ false, false, true, false, false,	false, false, false },
	{ false, false, false, true, false,	false, false, false },
	{ false, false, false, false, true,	false, false, false },
	{ false, false, false, false, false, true, false, false },
	{ false, false, false, false, false, false, true, false },
	{ false, false, false, false, false, false, false, true },
	{ true, false, false, false, false,	false, false, true },
	{ false, true, false, false, false,	false, false, true },
	{ false, false, true, false, false,	false, false, true },
	{ false, false, false, true, false,	false, false, true },
	{ false, false, false, false, true,	false, false, true },
	{ false, false, false, false, false, true, false, true },
	{ false, false, false, false, false, false, true, true },
	{ true, false, false, false, false,	false, true, true },
	{ false, true, false, false, false,	false, true, true },
	{ false, false, true, false, false,	false, true, true },
	{ false, false, false, true, false,	false, true, true },
	{ false, false, false, false, true,	false, true, true },
	{ false, false, false, false, false, true, true, true },
	{ true, false, false, false, false,	true, true, true },
	{ false, true, false, false, false,	true, true, true },
	{ false, false, true, false, false,	true, true, true },
	{ false, false, false, true, false,	true, true, true },
	{ false, false, false, false, true,	true, true, true },
	{ true, false, false, false, true, true, true, true },
	{ false, true, false, false, true, true, true, true },
	{ false, false, true, false, true, true, true, true },
	{ false, false, false, true, true, true, true, true },
	{ true, false, false, true, true, true, true, true },
	{ false, true, false, true, true, true, true, true },
	{ false, false, true, true, true, true, true, true },
	{ true, false, true, true, true, true, true, true },
	{ false, true, true, true, true, true, true, true },
	{ true, true, true, true, true,	true, true, true },
	{ false, false, false, false, false, false, false, false },
	{ true, true, true, true, true,	true, true, true },
	{ false, false, false, false, false, false, false, false },
	{ true, true, true, true, true,	true, true, true },
	{ false, false, false, false, false, false, false, false },
	{ true, true, true, true, true,	true, true, true },
	{ false, false, false, false, false, false, false, false },
	{ false, false, false, true, true, false, false, false },
	{ false, false, true, false, false, true, false, false },
	{ false, false, false, false, false, false, false, false },
	{ false, true, false, false, false, false, true, false },
	{ true, false, false, false, false, false, false, true },
	{ false, false, false, false, false, false, false, false },
	{ false, false, false, true, true, false, false, false },
	{ false, false, true, false, false, true, false, false },
	{ true, false, true, false, false, true, false, true },
	{ false, true, false, true, true, false, true, false },
	{ false, false, false, false, false, false, false, false },
	{ true, false, true, false, false, true, false, true },
	{ false, true, false, true, true, false, true, false },
	{ false, false, false, false, false, false, false, false },
	{ true, false, false, false, false, false, false, false },
	{ false, true, false, false, false, false, false, false },
	{ true, false, true, false, false, false, false, false },
	{ true, false, true, false, true, false, false, false },
	{ false, true, false, true, false, true, false, false },
	{ true, false, true, false, true, false, true, false },
	{ false, true, false, true, false, true, false, true },
	{ true, false, true, false, true, false, true, false },
	{ false, true, false, true, false, true, false, true },
	{ true, false, true, false, true, false, true, false },
	{ false, true, false, true, false, true, false, true },
	{ true, false, true, false, true, false, true, false },
	{ false, false, false, false, false, false, false, false },
};

struct ChaoName
{
	char n1;
	char n2;
	char n3;
	char n4;
	char n5;
	char n6;
	char n7;
};

//Chao Race names

//Child Chao
static ChaoName PUCHA = { 0x30, 0x55, 0x43, 0x48, 0x41, 0x5F, 0x5F };
static ChaoName TAHCHA = { 0x34, 0x41, 0x48, 0x43, 0x48, 0x41, 0x5F };
static ChaoName RUKICHA = { 0x32, 0x55, 0x4B, 0x49, 0x43, 0x48, 0x41 };
static ChaoName KUNCHA = { 0x2B, 0x55, 0x4E, 0x43, 0x48, 0x41, 0x5F };
static ChaoName TETOCHA = { 0x34, 0x45, 0x54, 0x4F, 0x43, 0x48, 0x41 };
static ChaoName PITECHA = { 0x30, 0x49, 0x54, 0x45, 0x43, 0x48, 0x41 };
static ChaoName RUPICHA = { 0x32, 0x55, 0x50, 0x49, 0x43, 0x48, 0x41 };
static ChaoName PIPOCHA = { 0x30, 0x49, 0x50, 0x4F, 0x43, 0x48, 0x41 };

//Adult Chao
static ChaoName CHAHURA = { 0x23, 0x48, 0x41, 0x48, 0x55, 0x52, 0x41 };
static ChaoName CHAPATA = { 0x23, 0x48, 0x41, 0x50, 0x41, 0x54, 0x41 };
static ChaoName CHANNA = { 0x23, 0x48, 0x41, 0x4E, 0x4E, 0x41, 0x5F };
static ChaoName CHASUPI = { 0x23, 0x48, 0x41, 0x53, 0x55, 0x50, 0x49 };
static ChaoName CHAPUWA = { 0x23, 0x48, 0x41, 0x50, 0x55, 0x57, 0x41, };
static ChaoName CHACKLE = { 0x23, 0x48, 0x41, 0x43, 0x4C, 0x45, 0x5F };
static ChaoName CHAIMA = { 0x23, 0x48, 0x41, 0x49, 0x4D, 0x41, 0x5F };
static ChaoName CHARUKA = { 0x23, 0x48, 0x41, 0x52, 0x55, 0x4B, 0x41 };

//Silver Chao
static ChaoName ELIZA = { 0x25, 0x4C, 0x49, 0x5A, 0x41, 0x5F, 0x5F };
static ChaoName SOPHIA = { 0x33, 0x4F, 0x50, 0x48, 0x49, 0x41, 0x5F };
static ChaoName JULIE = { 0x2A, 0x55, 0x4C, 0x49, 0x45, 0x5F, 0x5F };
static ChaoName JODIE = { 0x2A, 0x4F, 0x44, 0x49, 0x45, 0x5F, 0x5F };
static ChaoName VIVIAN = { 0x36, 0x49, 0x56, 0x49, 0x41, 0x4E, 0x5F };
static ChaoName AUDREY = { 0x21, 0x55, 0x44, 0x52, 0x45, 0x59, 0x5F };
static ChaoName FAYE = { 0x26, 0x41, 0x59, 0x45, 0x5F, 0x5F, 0x5F };
static ChaoName INGRID = { 0x29, 0x4E, 0x47, 0x52, 0x49, 0x44, 0x5F };

//Gold Chao
static ChaoName KING = { 0x2B, 0x49, 0x4E, 0x47, 0x5F, 0x5F, 0x5F };
static ChaoName CAESAR = { 0x23, 0x41, 0x45, 0x53, 0x41, 0x52, 0x5F };
static ChaoName EMPEROR = { 0x25, 0x4D, 0x50, 0x45, 0x52, 0x4F, 0x52 };
static ChaoName GENERAL = { 0x27, 0x45, 0x4E, 0x45, 0x52, 0x41, 0x4C };
static ChaoName PHARAOH = { 0x30, 0x48, 0x41, 0x52, 0x41, 0x4F, 0x48 };
static ChaoName SHOGUN = { 0x33, 0x48, 0x4F, 0x47, 0x55, 0x4E, 0x5F };
static ChaoName CHAMP = { 0x23, 0x48, 0x41, 0x4D, 0x50, 0x5F, 0x5F };
static ChaoName LORD = { 0x2C, 0x4F, 0x52, 0x44, 0x5F, 0x5F, 0x5F };

//Other names
static ChaoName CHACLON = { 0x23, 0x48, 0x41, 0x43, 0x4C, 0x4F, 0x4E };
static ChaoName CHAOTI = { 0x23, 0x48, 0x41, 0x4F, 0x54, 0x49, 0x5F };
static ChaoName CHAOMA = { 0x23, 0x48, 0x41, 0x4F, 0x4D, 0x41, 0x5F };
static ChaoName CHAOCHA = { 0x23, 0x48, 0x41, 0x4F, 0x23, 0x48, 0x41 };

static ChaoName ChaoNames_Child[] = { PUCHA, TAHCHA, RUKICHA, KUNCHA, TETOCHA, PITECHA, RUPICHA, PIPOCHA };
static ChaoName ChaoNames_Adult[] = { CHAHURA, CHAPATA, CHANNA, CHASUPI, CHAPUWA, CHACKLE, CHAIMA, CHARUKA };
static ChaoName ChaoNames_Silver[] = { ELIZA, SOPHIA, JULIE, JODIE, VIVIAN, AUDREY, FAYE, INGRID };
static ChaoName ChaoNames_Gold[] = { KING, CAESAR, EMPEROR, GENERAL, PHARAOH, SHOGUN, CHAMP, LORD };

//Cheer hologram

NJS_MATERIAL matlistCHAO_03270F10[] = {
	{ { 0xFFFFFFFF },{ 0x00FFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 polyCHAO_03270F38[] = {
	4, 1, 0, 3, 2
};

NJS_TEX uvCHAO_03270F54[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlistCHAO_03270F64[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_03270F38, NULL, NULL, NULL, uvCHAO_03270F54, NULL }
};

NJS_VECTOR vertexCHAO_03270F80[] = {
	{ -6, 6, -0.00001f },
	{ -6, -6, 0 },
	{ 6, 6, -0.00001f },
	{ 6, -6, 0 }
};

NJS_VECTOR normalCHAO_03270FB0[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

NJS_MODEL_SADX attachCHAO_03270FE0 = { vertexCHAO_03270F80, normalCHAO_03270FB0, LengthOfArray<Sint32>(vertexCHAO_03270F80), meshlistCHAO_03270F64, matlistCHAO_03270F10, LengthOfArray<Uint16>(meshlistCHAO_03270F64), LengthOfArray<Uint16>(matlistCHAO_03270F10),{ 0, 0, -0.00001f }, 1.89f, NULL };

NJS_OBJECT cheer_hologram = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_03270FE0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

#pragma warning(pop)