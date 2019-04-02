#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

#include "SADXModLoader.h"

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

//Toys

//Ball

NJS_MATERIAL matlist_0014AC00[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 212, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0014AC14[] = {
	9, 2, 8, 3, 9, 4, 10, 5, 11, 6,
	4, 13, 7, 12, 0,
	0x8000u | 24, 14, 13, 8, 7, 2, 0, 37, 32, 38, 33, 39, 34, 40, 35, 41, 36, 1, 31, 26, 25, 20, 19, 14, 13,
	11, 8, 14, 9, 15, 10, 16, 11, 1, 6, 41, 40,
	6, 19, 13, 18, 12, 17, 0,
	6, 14, 20, 15, 21, 16, 1,
	8, 25, 19, 24, 18, 23, 17, 22, 0,
	4, 20, 26, 21, 1,
	10, 0, 27, 22, 28, 23, 29, 24, 30, 25, 31,
	11, 0, 32, 27, 33, 28, 34, 29, 35, 30, 36, 31,
	9, 6, 40, 5, 39, 4, 38, 3, 37, 2
};

NJS_TEX uv_0014ACF8[] = {
	{ 382, 0 },
{ 410, 156 },
{ 474, 0 },
{ 434, 180 },
{ 510, 0 },
{ 410, 156 },
{ 474, 0 },
{ 344, 90 },
{ 382, 0 },
{ 255, 220 },
{ 344, 90 },
{ 255, 127 },
{ 255, 0 },
{ 255, 255 },
{ 255, 220 },
{ 410, 156 },
{ 344, 90 },
{ 382, 0 },
{ 255, 0 },
{ 344, -90 },
{ 255, -127 },
{ 410, -156 },
{ 255, -220 },
{ 434, -180 },
{ 255, -255 },
{ 410, -156 },
{ 255, -220 },
{ 344, -90 },
{ 255, -127 },
{ 255, 0 },
{ 164, -90 },
{ 127, 0 },
{ 34, 0 },
{ 98, 156 },
{ 74, 180 },
{ 255, 255 },
{ 255, 220 },
{ 410, 156 },
{ 255, 255 },
{ 434, 180 },
{ 255, 220 },
{ 410, 156 },
{ 255, 127 },
{ 344, 90 },
{ 255, 0 },
{ 382, 0 },
{ 344, -90 },
{ 410, -156 },
{ 74, 180 },
{ 255, 220 },
{ 98, 156 },
{ 255, 127 },
{ 164, 90 },
{ 255, 0 },
{ 255, 255 },
{ 98, 156 },
{ 255, 220 },
{ 164, 90 },
{ 255, 127 },
{ 255, 0 },
{ 34, 0 },
{ 74, 180 },
{ 0 },
{ 98, 156 },
{ 34, 0 },
{ 164, 90 },
{ 127, 0 },
{ 255, 0 },
{ 98, 156 },
{ 127, 0 },
{ 164, 90 },
{ 255, 0 },
{ 255, 0 },
{ 164, -90 },
{ 127, 0 },
{ 98, -156 },
{ 34, 0 },
{ 74, -180 },
{ 0 },
{ 98, -156 },
{ 34, 0 },
{ 164, -90 },
{ 255, 0 },
{ 255, -127 },
{ 164, -90 },
{ 255, -220 },
{ 98, -156 },
{ 255, -255 },
{ 74, -180 },
{ 255, -220 },
{ 98, -156 },
{ 255, -127 },
{ 164, -90 },
{ 382, 0 },
{ 410, -156 },
{ 474, 0 },
{ 434, -180 },
{ 510, 0 },
{ 410, -156 },
{ 474, 0 },
{ 344, -90 },
{ 382, 0 }
};

NJS_MESHSET_SADX meshlist_0014AE90[] = {
	{ NJD_MESHSET_TRIMESH | 0, 11, poly_0014AC14, NULL, NULL, NULL, uv_0014ACF8, NULL }
};

NJS_VECTOR vertex_0014AEA8[] = {
	{ 0, -1, 0 },
{ 0, 1, 0 },
{ 0.5f, -0.866025f, 0 },
{ 0.866025f, -0.5f, 0 },
{ 1, 0, 0 },
{ 0.866025f, 0.5f, 0 },
{ 0.5f, 0.866025f, 0 },
{ 0.353553f, -0.866025f, -0.353553f },
{ 0.612372f, -0.5f, -0.612372f },
{ 0.7071069f, 0, -0.7071069f },
{ 0.612372f, 0.5f, -0.612372f },
{ 0.353553f, 0.866025f, -0.353553f },
{ 0, -0.866025f, -0.5f },
{ 0, -0.5f, -0.866025f },
{ 0, 0, -1 },
{ 0, 0.5f, -0.866025f },
{ 0, 0.866025f, -0.5f },
{ -0.353553f, -0.866025f, -0.353553f },
{ -0.612372f, -0.5f, -0.612372f },
{ -0.7071069f, 0, -0.7071069f },
{ -0.612372f, 0.5f, -0.612372f },
{ -0.353553f, 0.866025f, -0.353553f },
{ -0.5f, -0.866025f, 0 },
{ -0.866025f, -0.5f, 0 },
{ -1, 0, 0 },
{ -0.866025f, 0.5f, 0 },
{ -0.5f, 0.866025f, 0 },
{ -0.353553f, -0.866025f, 0.353553f },
{ -0.612372f, -0.5f, 0.612372f },
{ -0.7071069f, 0, 0.7071069f },
{ -0.612372f, 0.5f, 0.612372f },
{ -0.353553f, 0.866025f, 0.353553f },
{ 0, -0.866025f, 0.5f },
{ 0, -0.5f, 0.866025f },
{ 0, 0, 1 },
{ 0, 0.5f, 0.866025f },
{ 0, 0.866025f, 0.5f },
{ 0.353553f, -0.866025f, 0.353553f },
{ 0.612372f, -0.5f, 0.612372f },
{ 0.7071069f, 0, 0.7071069f },
{ 0.612372f, 0.5f, 0.612372f },
{ 0.353553f, 0.866025f, 0.353553f }
};

NJS_VECTOR normal_0014B0A0[] = {
	{ 0, -1, 0 },
{ 0, 1, 0 },
{ 0.545164f, -0.838329f, 0 },
{ 0.8803149f, -0.47439f, 0 },
{ 1, 0, 0 },
{ 0.8803149f, 0.47439f, 0 },
{ 0.5451649f, 0.838329f, 0 },
{ 0.385489f, -0.838329f, -0.385489f },
{ 0.622477f, -0.47439f, -0.622476f },
{ 0.7071069f, 0, -0.7071069f },
{ 0.622477f, 0.47439f, -0.622477f },
{ 0.38549f, 0.838329f, -0.38549f },
{ 0, -0.838329f, -0.5451649f },
{ 0, -0.47439f, -0.8803149f },
{ 0, 0, -1 },
{ 0, 0.47439f, -0.8803149f },
{ 0, 0.838329f, -0.5451649f },
{ -0.38549f, -0.838329f, -0.385489f },
{ -0.622476f, -0.47439f, -0.622477f },
{ -0.7071069f, 0, -0.7071069f },
{ -0.622477f, 0.47439f, -0.622477f },
{ -0.38549f, 0.838329f, -0.38549f },
{ -0.5451649f, -0.838329f, 0 },
{ -0.8803149f, -0.47439f, 0 },
{ -1, 0, 0 },
{ -0.8803149f, 0.47439f, 0 },
{ -0.5451649f, 0.838329f, 0 },
{ -0.385489f, -0.838329f, 0.385489f },
{ -0.622477f, -0.47439f, 0.622476f },
{ -0.7071069f, 0, 0.7071069f },
{ -0.622477f, 0.47439f, 0.622477f },
{ -0.38549f, 0.838329f, 0.38549f },
{ 0, -0.838329f, 0.5451649f },
{ 0, -0.47439f, 0.8803149f },
{ 0, 0, 1 },
{ 0, 0.47439f, 0.8803149f },
{ 0, 0.838329f, 0.5451649f },
{ 0.38549f, -0.838329f, 0.385489f },
{ 0.622476f, -0.47439f, 0.622477f },
{ 0.7071069f, 0, 0.7071069f },
{ 0.622477f, 0.47439f, 0.622477f },
{ 0.38549f, 0.838329f, 0.38549f }
};

NJS_MODEL_SADX attach_0014B298 = { vertex_0014AEA8, normal_0014B0A0, LengthOfArray<Sint32>(vertex_0014AEA8), meshlist_0014AE90, matlist_0014AC00, LengthOfArray<Uint16>(meshlist_0014AE90), LengthOfArray<Uint16>(matlist_0014AC00),{ 0 }, 1.414214f, NULL };

NJS_OBJECT object_0014B2C0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014B298, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

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

//Cracker

NJS_MATERIAL matlist_00046288[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0004629C[] = {
	6, 0, 1, 3, 2, 0, 1
};

NJS_TEX uv_000462AC[] = {
	{ 255, 81 },
{ 0, 208 },
{ 0, 116 },
{ 0, 46 },
{ 255, 81 },
{ 0, 208 }
};

NJS_MESHSET_SADX meshlist_000462C4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0004629C, NULL, NULL, NULL, uv_000462AC, NULL }
};

NJS_VECTOR vertex_000462DC[] = {
	{ -0.190109f, 0, 0 },
{ 3.219104f, -0.92f, 1.593486f },
{ 3.219104f, -0.92f, -1.593486f },
{ 3.219104f, 1.839999f, 0 }
};

NJS_VECTOR normal_0004630C[] = {
	{ -1, 0, 0 },
{ 0.376196f, -0.46327f, 0.802407f },
{ 0.376196f, -0.46327f, -0.802407f },
{ 0.376196f, 0.92654f, 0 }
};

NJS_MODEL_SADX attach_0004633C = { vertex_000462DC, normal_0004630C, LengthOfArray<Sint32>(vertex_000462DC), meshlist_000462C4, matlist_00046288, LengthOfArray<Uint16>(meshlist_000462C4), LengthOfArray<Uint16>(matlist_00046288),{ 1.514497f, 0.46f, 0 }, 2.333427f, NULL };

NJS_OBJECT object_00046364 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0004633C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Waterfall

NJS_MATERIAL matlist_00045A18[] = {
	{ { 0x4CB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00045A2C[] = {
	4, 0, 3, 4, 7,
	4, 1, 0, 5, 4,
	4, 2, 1, 6, 5,
	4, 3, 2, 7, 6,
	4, 4, 7, 8, 11,
	4, 5, 4, 9, 8,
	4, 6, 5, 10, 9,
	4, 7, 6, 11, 10,
	4, 8, 11, 12, 15,
	4, 9, 8, 13, 12,
	4, 10, 9, 14, 13,
	4, 11, 10, 15, 14,
	4, 12, 15, 16, 19,
	4, 13, 12, 17, 16,
	4, 14, 13, 18, 17,
	4, 15, 14, 19, 18,
	4, 16, 19, 20, 23,
	4, 17, 16, 21, 20,
	4, 18, 17, 22, 21,
	4, 19, 18, 23, 22
};

NJS_TEX uv_00045AF4[] = {
	{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 }
};

NJS_TEX uv_00045AF4_r[] = {
	{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 },
{ 2, 2 },
{ 252, 2 },
{ 1, 253 },
{ 252, 253 }
};

NJS_MESHSET_SADX meshlist_00045C34[] = {
	{ NJD_MESHSET_TRIMESH | 0, 20, poly_00045A2C, NULL, NULL, NULL, uv_00045AF4, NULL }
};

NJS_VECTOR vertex_00045C4C[] = {
	{ 9.283212f, 163.5019f, -8.466371f },
{ 10.58677f, 163.5019f, 7.152827f },
{ 10.52008f, 162.8927f, 7.384455f },
{ 9.209562f, 162.8927f, -7.425387f },
{ -18.47578f, 160.3005f, -12.3035f },
{ -17.23361f, 160.3005f, 10.43825f },
{ -15.8697f, 157.5965f, 9.599185f },
{ -17.12658f, 157.5965f, -11.43647f },
{ -44.90736f, 140.8715f, -16.03111f },
{ -43.7128f, 140.8715f, 12.23453f },
{ -36.60028f, 134.9479f, 10.9874f },
{ -37.81847f, 134.9479f, -14.53564f },
{ -60.28432f, 112.4654f, -17.81231f },
{ -59.12028f, 112.4654f, 13.99343f },
{ -48.84193f, 108.9751f, 12.56166f },
{ -50.03311f, 108.9751f, -16.09547f },
{ -66.99786f, 74.03789f, -18.48134f },
{ -65.84866f, 74.03789f, 15.047f },
{ -55.14808f, 71.84339f, 13.56608f },
{ -56.32534f, 71.84339f, -16.70554f },
{ -73.24492f, -5.168385f, -18.00279f },
{ -72.11017f, -5.168385f, 17.20189f },
{ -59.32874f, -4.411171f, 15.67257f },
{ -60.49169f, -4.411171f, -16.25982f }
};

NJS_VECTOR normal_00045D6C[] = {
	{ 0.038902f, 0.620672f, -0.7831039f },
{ -0.018928f, 0.732574f, 0.680424f },
{ 0.198573f, -0.685133f, 0.700829f },
{ 0.216989f, -0.844336f, -0.489912f },
{ -0.209851f, 0.647387f, -0.732703f },
{ -0.201784f, 0.6719159f, 0.712609f },
{ 0.388744f, -0.586898f, 0.7102309f },
{ 0.409021f, -0.633584f, -0.656715f },
{ -0.499137f, 0.4983f, -0.708914f },
{ -0.495177f, 0.490713f, 0.716938f },
{ 0.638887f, -0.383405f, 0.666952f },
{ 0.6256109f, -0.362484f, -0.690808f },
{ -0.65007f, 0.251579f, -0.717019f },
{ -0.63366f, 0.252599f, 0.7312109f },
{ 0.713209f, -0.191408f, 0.674311f },
{ 0.693571f, -0.192247f, -0.694263f },
{ -0.666522f, 0.089246f, -0.740124f },
{ -0.651009f, 0.103502f, 0.7519799f },
{ 0.751667f, -0.06458399f, 0.656373f },
{ 0.730173f, -0.07940499f, -0.678633f },
{ -0.7035469f, 0.051927f, -0.708749f },
{ -0.676411f, 0.075917f, 0.732601f },
{ 0.73636f, -0.021039f, 0.676262f },
{ 0.725236f, -0.046168f, -0.686951f }
};

NJS_MODEL_SADX attach_00045E8C = { vertex_00045C4C, normal_00045D6C, LengthOfArray<Sint32>(vertex_00045C4C), meshlist_00045C34, matlist_00045A18, LengthOfArray<Uint16>(meshlist_00045C34), LengthOfArray<Uint16>(matlist_00045A18),{ -31.32907f, 79.16676f, -0.639721f }, 86.84367f, NULL };

NJS_OBJECT object_00045EB4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00045E8C, 382.1735f, 0, 199.4976f, 0x68, 0x88E, 0, 1, 1, 1, NULL, NULL };

//SADX Crackers

NJS_MATERIAL matlistCHAO_03055194[] = {
	{ { 0xFF000000 },{ 0x00FFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyCHAO_030551BC[] = {
	8, 6, 5, 7, 4, 8, 3, 1, 2
};

Sint16 polyCHAO_030551D0[] = {
	3, 1, 2, 0,
	3, 2, 3, 0,
	3, 3, 4, 0,
	3, 4, 5, 0,
	3, 5, 6, 0,
	3, 6, 7, 0,
	3, 8, 1, 0,
	3, 7, 8, 0
};

NJS_TEX uvCHAO_03055290[] = {
	{ 119, 119 },
{ 115, 127 },
{ 127, 115 },
{ 119, 135 },
{ 135, 119 },
{ 127, 139 },
{ 139, 127 },
{ 135, 135 }
};

NJS_TEX uvCHAO_030552B0[] = {
	{ 7, 255 },
{ 119, 255 },
{ 63, -510 },
{ 7, 255 },
{ 119, 255 },
{ 63, -510 },
{ 7, 255 },
{ 119, 255 },
{ 63, -510 },
{ 7, 255 },
{ 119, 255 },
{ 63, -510 },
{ 7, 255 },
{ 119, 255 },
{ 63, -510 },
{ 7, 255 },
{ 119, 255 },
{ 63, -510 },
{ 7, 255 },
{ 119, 255 },
{ 63, -510 },
{ 7, 255 },
{ 119, 255 },
{ 63, -510 }
};

NJS_MESHSET_SADX meshlistCHAO_03055310[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_030551BC, NULL, NULL, NULL, uvCHAO_03055290, NULL },
{ NJD_MESHSET_TRIMESH | 1, 8, polyCHAO_030551D0, NULL, NULL, NULL, uvCHAO_030552B0, NULL }
};

NJS_VECTOR vertexCHAO_03055348[] = {
	{ 0 },
{ 1.4f, 4.2f, 0 },
{ 0.989949f, 4.200001f, 0.989949f },
{ 0, 4.200001f, 1.4f },
{ -0.989949f, 4.200001f, 0.989949f },
{ -1.4f, 4.2f, 0 },
{ -0.989949f, 4.200001f, -0.98995f },
{ 0, 4.200001f, -1.4f },
{ 0.989949f, 4.200001f, -0.98995f }
};

NJS_VECTOR normalCHAO_030553B8[] = {
	{ 0, -1, -0.00001f },
{ 0.862334f, 0.50634f, 0 },
{ 0.609762f, 0.506341f, 0.609762f },
{ 0, 0.50634f, 0.862334f },
{ -0.609762f, 0.506341f, 0.609762f },
{ -0.862334f, 0.50634f, 0 },
{ -0.609762f, 0.506341f, -0.609762f },
{ 0, 0.50634f, -0.862334f },
{ 0.609762f, 0.506341f, -0.609762f }
};

NJS_MODEL_SADX attachCHAO_03055424 = { vertexCHAO_03055348, normalCHAO_030553B8, LengthOfArray<Sint32>(vertexCHAO_03055348), meshlistCHAO_03055310, matlistCHAO_03055194, LengthOfArray<Uint16>(meshlistCHAO_03055310), LengthOfArray<Uint16>(matlistCHAO_03055194),{ 0, 2.100001f, 0 }, 2.660212f, NULL };

NJS_OBJECT cracker_sadx = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_03055424, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT objectCHAO_03055450 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_03055424, -65.59506f, 9.999999f, 335.2233f, 0x1555, 0, 0x11C7, 1, 1, 1, NULL, NULL };
NJS_OBJECT objectCHAO_030B367C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_03055424, -54.14839f, 9.999999f, 386.5659f, 0xFFFFEAAB, 0, 0x11C7, 1, 1, 1, NULL, NULL };
NJS_OBJECT objectCHAO_030B36B0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_03055424, -84.39774f, 9.999999f, 393.2881f, 0xFFFFEAAB, 0, 0xFFFFF8E4, 1, 1, 1, NULL, NULL };
NJS_OBJECT objectCHAO_030B36E4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_03055424, -94.60615f, 9.999999f, 342.6531f, 0xAAA, 0, 0xFFFFEAAB, 1, 1, 1, NULL, NULL };

//Letters

NJS_MATERIAL matlistCHAO_00047DEC[] = {
	/*C - 31*/{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 40, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC },
	/*H*/{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC },
	/*A*/{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 42, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC },
	/*O*/{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC },
	/*E*/{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 47, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC },
	/*C*/{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 46, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC },
	/*R*/{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 44, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC },
	/*A*/{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 45, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 polyCHAO_00047E8C[] = {
	4, 11, 10, 1, 0
};

Sint16 polyCHAO_00047E96[] = {
	4, 12, 11, 2, 1
};

Sint16 polyCHAO_00047EA0[] = {
	4, 13, 12, 3, 2
};

Sint16 polyCHAO_00047EAA[] = {
	4, 14, 13, 4, 3
};

Sint16 polyCHAO_00047EB4[] = {
	4, 19, 18, 9, 8
};

Sint16 polyCHAO_00047EBE[] = {
	4, 18, 17, 8, 7
};

Sint16 polyCHAO_00047EC8[] = {
	4, 16, 15, 6, 5
};

Sint16 polyCHAO_00047ED2[] = {
	4, 17, 16, 7, 6
};

NJS_TEX uvCHAO_00047EDC[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

NJS_TEX uvCHAO_00047EEC[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

NJS_TEX uvCHAO_00047EFC[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uvCHAO_00047F0C[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

NJS_TEX uvCHAO_00047F1C[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uvCHAO_00047F2C[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

NJS_TEX uvCHAO_00047F3C[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

NJS_TEX uvCHAO_00047F4C[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlistCHAO_00047F5C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_00047E8C, NULL, NULL, NULL, uvCHAO_00047EDC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polyCHAO_00047E96, NULL, NULL, NULL, uvCHAO_00047EEC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polyCHAO_00047EA0, NULL, NULL, NULL, uvCHAO_00047EFC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polyCHAO_00047EAA, NULL, NULL, NULL, uvCHAO_00047F0C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polyCHAO_00047EB4, NULL, NULL, NULL, uvCHAO_00047F1C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, polyCHAO_00047EBE, NULL, NULL, NULL, uvCHAO_00047F2C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, polyCHAO_00047EC8, NULL, NULL, NULL, uvCHAO_00047F3C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, polyCHAO_00047ED2, NULL, NULL, NULL, uvCHAO_00047F4C, NULL }
};

NJS_VECTOR vertexCHAO_0004801C[] = {
	{ -3.25307f, -10.99883f, -51.70616f },
	{ 16.00968f, -10.99883f, -49.27271f },
	{ 33.02391f, -10.99883f, -39.91904f },
	{ 45.40004f, -10.99883f, -24.95886f },
	{ 51.39986f, -10.99883f, -6.493303f },
	{ 51.39986f, -10.99883f, 6.49332f },
	{ 45.40002f, -10.99883f, 24.95888f },
	{ 33.02389f, -10.99883f, 39.91904f },
	{ 16.00965f, -10.99883f, 49.27268f },
	{ -3.253087f, -10.99883f, 51.70613f },
	{ -3.25307f, 8.326491f, -51.70616f },
	{ 16.00968f, 8.326491f, -49.27271f },
	{ 33.02391f, 8.326491f, -39.91904f },
	{ 45.40004f, 8.326491f, -24.95886f },
	{ 51.39986f, 8.326491f, -6.493303f },
	{ 51.39986f, 8.326491f, 6.49332f },
	{ 45.40002f, 8.326491f, 24.95888f },
	{ 33.02389f, 8.326491f, 39.91904f },
	{ 16.00965f, 8.326491f, 49.27268f },
	{ -3.253087f, 8.326491f, 51.70613f }
};

NJS_VECTOR normalCHAO_0004810C[] = {
	{ -0.125333f, 0, 0.992115f },
	{ -0.309017f, 0, 0.951057f },
	{ -0.637424f, 0, 0.770513f },
	{ -0.876307f, 0, 0.481753f },
	{ -0.951057f, 0, 0.309017f },
	{ -0.9510559f, 0, -0.309018f },
	{ -0.876306f, 0, -0.481754f },
	{ -0.637424f, 0, -0.770514f },
	{ -0.309017f, 0, -0.951057f },
	{ -0.125333f, 0, -0.992115f },
	{ -0.125333f, 0, 0.992115f },
	{ -0.309017f, 0, 0.951057f },
	{ -0.637424f, 0, 0.770513f },
	{ -0.876307f, 0, 0.481753f },
	{ -0.951057f, 0, 0.309017f },
	{ -0.9510559f, 0, -0.309018f },
	{ -0.876306f, 0, -0.481754f },
	{ -0.637424f, 0, -0.770514f },
	{ -0.309017f, 0, -0.951057f },
	{ -0.125333f, 0, -0.992115f }
};

NJS_MODEL_SADX attachCHAO_000481FC = { vertexCHAO_0004801C, normalCHAO_0004810C, LengthOfArray<Sint32>(vertexCHAO_0004801C), meshlistCHAO_00047F5C, matlistCHAO_00047DEC, LengthOfArray<Uint16>(meshlistCHAO_00047F5C), LengthOfArray<Uint16>(matlistCHAO_00047DEC),{ 24.07339f, -1.336168f, -0.00011f }, 58.48301f, NULL };

NJS_OBJECT chao_letters = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_000481FC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT objectCHAO_00048224 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_000481FC, 2000, 35.81644f, 0, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT objectCHAO_00048224_2 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_000481FC, 2004, 35.81644f, 0, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT objectCHAO_00048224_3 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_000481FC, 2008, 35.81644f, 0, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

//Chao Race Entry stuff

//Numbers

NJS_MATERIAL matlistCHAO_0004E6EC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyCHAO_0004E700[] = {
	4, 2, 0, 3, 1
};

NJS_TEX uvCHAO_0004E70C[] = {
	{ 255, 0 },
{ 0 },
{ 255, 255 },
{ 0, 254 }
};

NJS_MESHSET_SADX meshlistCHAO_0004E71C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_0004E700, NULL, NULL, NULL, uvCHAO_0004E70C, NULL }
};

NJS_VECTOR vertexCHAO_0004E734[] = {
	{ 10.57651f, 29.95325f, 2.185986f },
{ 10.57653f, -0.046774f, 2.185964f },
{ -8.581009f, 29.89281f, -1.666675f },
{ -8.581006f, -0.107204f, -1.666684f }
};

NJS_VECTOR normalCHAO_0004E764[] = {
	{ 0.197157f, 0.000001f, -0.980372f },
{ 0.197156f, 0.000001f, -0.980372f },
{ 0.197157f, 0, -0.980372f },
{ 0.197157f, 0.000001f, -0.980372f }
};

NJS_MODEL_SADX attachCHAO_0004E794 = { vertexCHAO_0004E734, normalCHAO_0004E764, LengthOfArray<Sint32>(vertexCHAO_0004E734), meshlistCHAO_0004E71C, matlistCHAO_0004E6EC, LengthOfArray<Uint16>(meshlistCHAO_0004E71C), LengthOfArray<Uint16>(matlistCHAO_0004E6EC),{ 0.997761f, 14.92302f, 0.259651f }, 15.15317f, NULL };

NJS_OBJECT objectCHAO_0004E7BC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_0004E794, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };


NJS_MATERIAL matlistCHAO_0004E7F0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyCHAO_0004E804[] = {
	4, 2, 0, 3, 1
};

NJS_TEX uvCHAO_0004E810[] = {
	{ 255, 2 },
{ 0, 2 },
{ 255, 256 },
{ 0, 257 }
};

NJS_MESHSET_SADX meshlistCHAO_0004E820[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_0004E804, NULL, NULL, NULL, uvCHAO_0004E810, NULL }
};

NJS_VECTOR vertexCHAO_0004E838[] = {
	{ 9.834754f, 29.89281f, 5.97566f },
{ 9.834755f, -0.107189f, 5.975659f },
{ -6.256592f, 29.9533f, -4.79341f },
{ -6.256592f, -0.046705f, -4.79341f }
};

NJS_VECTOR normalCHAO_0004E868[] = {
	{ 0.556183f, 0, -0.83106f },
{ 0.556183f, 0, -0.83106f },
{ 0.556183f, 0, -0.83106f },
{ 0.556183f, 0, -0.83106f }
};

NJS_MODEL_SADX attachCHAO_0004E898 = { vertexCHAO_0004E838, normalCHAO_0004E868, LengthOfArray<Sint32>(vertexCHAO_0004E838), meshlistCHAO_0004E820, matlistCHAO_0004E7F0, LengthOfArray<Uint16>(meshlistCHAO_0004E820), LengthOfArray<Uint16>(matlistCHAO_0004E7F0),{ 1.789082f, 14.92305f, 0.591125f }, 15.96563f, NULL };

NJS_OBJECT objectCHAO_0004E8C0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_0004E898, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };


NJS_MATERIAL matlistCHAO_0004E8F4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyCHAO_0004E908[] = {
	4, 2, 0, 3, 1
};

NJS_TEX uvCHAO_0004E914[] = {
	{ 255, 2 },
{ 0, 2 },
{ 255, 257 },
{ 0, 257 }
};

NJS_MESHSET_SADX meshlistCHAO_0004E924[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_0004E908, NULL, NULL, NULL, uvCHAO_0004E914, NULL }
};

NJS_VECTOR vertexCHAO_0004E93C[] = {
	{ 6.265776f, 29.9533f, 8.828256f },
{ 6.265776f, -0.046705f, 8.828256f },
{ -4.436069f, 29.9533f, -7.126353f },
{ -4.43607f, -0.046709f, -7.126353f }
};

NJS_VECTOR normalCHAO_0004E96C[] = {
	{ 0.830475f, 0, -0.557056f },
{ 0.830475f, 0, -0.557056f },
{ 0.830475f, 0, -0.557056f },
{ 0.830475f, 0, -0.557056f }
};

NJS_MODEL_SADX attachCHAO_0004E99C = { vertexCHAO_0004E93C, normalCHAO_0004E96C, LengthOfArray<Sint32>(vertexCHAO_0004E93C), meshlistCHAO_0004E924, matlistCHAO_0004E8F4, LengthOfArray<Uint16>(meshlistCHAO_0004E924), LengthOfArray<Uint16>(matlistCHAO_0004E8F4),{ 0.914853f, 14.9533f, 0.850951f }, 16.98933f, NULL };

NJS_OBJECT objectCHAO_0004E9C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_0004E99C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };


NJS_MATERIAL matlistCHAO_0004E9F8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyCHAO_0004EA0C[] = {
	4, 2, 0, 3, 1
};

NJS_TEX uvCHAO_0004EA18[] = {
	{ 255, 2 },
{ 0, 2 },
{ 255, 257 },
{ 0, 257 }
};

NJS_MESHSET_SADX meshlistCHAO_0004EA28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_0004EA0C, NULL, NULL, NULL, uvCHAO_0004EA18, NULL }
};

NJS_VECTOR vertexCHAO_0004EA40[] = {
	{ 2.044479f, 29.9533f, 10.20113f },
{ 2.044479f, -0.046717f, 10.20113f },
{ -1.803599f, 29.95331f, -9.000092f },
{ -1.803599f, -0.04669f, -9.000092f }
};

NJS_VECTOR normalCHAO_0004EA70[] = {
	{ 0.980504f, 0, -0.196501f },
{ 0.980504f, 0, -0.196501f },
{ 0.980504f, 0, -0.196501f },
{ 0.980504f, 0, -0.196501f }
};

NJS_MODEL_SADX attachCHAO_0004EAA0 = { vertexCHAO_0004EA40, normalCHAO_0004EA70, LengthOfArray<Sint32>(vertexCHAO_0004EA40), meshlistCHAO_0004EA28, matlistCHAO_0004E9F8, LengthOfArray<Uint16>(meshlistCHAO_0004EA28), LengthOfArray<Uint16>(matlistCHAO_0004E9F8),{ 0.12044f, 14.9533f, 0.60052f }, 17.80933f, NULL };

NJS_OBJECT objectCHAO_0004EAC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_0004EAA0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };


NJS_MATERIAL matlistCHAO_0004EAFC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyCHAO_0004EB10[] = {
	4, 2, 0, 3, 1
};

NJS_TEX uvCHAO_0004EB1C[] = {
	{ 255, 2 },
{ 0, 2 },
{ 255, 257 },
{ 0, 257 }
};

NJS_MESHSET_SADX meshlistCHAO_0004EB2C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_0004EB10, NULL, NULL, NULL, uvCHAO_0004EB1C, NULL }
};

NJS_VECTOR vertexCHAO_0004EB44[] = {
	{ -2.028337f, 29.95331f, 10.12596f },
{ -2.028337f, -0.046698f, 10.12596f },
{ 1.819751f, 29.9533f, -9.075256f },
{ 1.819751f, -0.046701f, -9.075256f }
};

NJS_VECTOR normalCHAO_0004EB74[] = {
	{ 0.980504f, 0, 0.196501f },
{ 0.980504f, 0, 0.196501f },
{ 0.980503f, 0, 0.196501f },
{ 0.980504f, 0, 0.196501f }
};

NJS_MODEL_SADX attachCHAO_0004EBA4 = { vertexCHAO_0004EB44, normalCHAO_0004EB74, LengthOfArray<Sint32>(vertexCHAO_0004EB44), meshlistCHAO_0004EB2C, matlistCHAO_0004EAFC, LengthOfArray<Uint16>(meshlistCHAO_0004EB2C), LengthOfArray<Uint16>(matlistCHAO_0004EAFC),{ -0.104293f, 14.9533f, 0.525353f }, 17.80932f, NULL };

NJS_OBJECT objectCHAO_0004EBCC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_0004EBA4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };


NJS_MATERIAL matlistCHAO_0004EC00[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyCHAO_0004EC14[] = {
	4, 2, 0, 3, 1
};

NJS_TEX uvCHAO_0004EC20[] = {
	{ 255, 2 },
{ 0, 2 },
{ 255, 257 },
{ 0, 257 }
};

NJS_MESHSET_SADX meshlistCHAO_0004EC30[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_0004EC14, NULL, NULL, NULL, uvCHAO_0004EC20, NULL }
};

NJS_VECTOR vertexCHAO_0004EC48[] = {
	{ -6.036068f, 29.9533f, 9.178274f },
{ -6.036069f, -0.046701f, 9.178274f },
{ 4.66578f, 29.9533f, -6.776328f },
{ 4.66578f, -0.046705f, -6.776329f }
};

NJS_VECTOR normalCHAO_0004EC78[] = {
	{ 0.830475f, 0, 0.557056f },
{ 0.830475f, 0, 0.557056f },
{ 0.830475f, 0, 0.557056f },
{ 0.830475f, 0, 0.557056f }
};

NJS_MODEL_SADX attachCHAO_0004ECA8 = { vertexCHAO_0004EC48, normalCHAO_0004EC78, LengthOfArray<Sint32>(vertexCHAO_0004EC48), meshlistCHAO_0004EC30, matlistCHAO_0004EC00, LengthOfArray<Uint16>(meshlistCHAO_0004EC30), LengthOfArray<Uint16>(matlistCHAO_0004EC00),{ -0.685145f, 14.9533f, 1.200973f }, 16.98933f, NULL };

NJS_OBJECT objectCHAO_0004ECD0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_0004ECA8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };


NJS_MATERIAL matlistCHAO_0004ED04[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyCHAO_0004ED18[] = {
	4, 2, 0, 3, 1
};

NJS_TEX uvCHAO_0004ED24[] = {
	{ 255, 2 },
{ 0, 2 },
{ 255, 257 },
{ 0, 256 }
};

NJS_MESHSET_SADX meshlistCHAO_0004ED34[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_0004ED18, NULL, NULL, NULL, uvCHAO_0004ED24, NULL }
};

NJS_VECTOR vertexCHAO_0004ED4C[] = {
	{ -9.356563f, 29.9533f, 6.34534f },
{ -9.356562f, -0.046705f, 6.345342f },
{ 6.734783f, 29.89281f, -4.423734f },
{ 6.734784f, -0.107189f, -4.423732f }
};

NJS_VECTOR normalCHAO_0004ED7C[] = {
	{ 0.556184f, 0, 0.83106f },
{ 0.556184f, 0, 0.83106f },
{ 0.556184f, 0, 0.83106f },
{ 0.556184f, 0, 0.83106f }
};

NJS_MODEL_SADX attachCHAO_0004EDAC = { vertexCHAO_0004ED4C, normalCHAO_0004ED7C, LengthOfArray<Sint32>(vertexCHAO_0004ED4C), meshlistCHAO_0004ED34, matlistCHAO_0004ED04, LengthOfArray<Uint16>(meshlistCHAO_0004ED34), LengthOfArray<Uint16>(matlistCHAO_0004ED04),{ -1.310889f, 14.92305f, 0.960804f }, 15.96563f, NULL };

NJS_OBJECT objectCHAO_0004EDD4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_0004EDAC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistCHAO_0004EE08[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyCHAO_0004EE1C[] = {
	4, 2, 0, 3, 1
};

NJS_TEX uvCHAO_0004EE28[] = {
	{ 255, 2 },
{ 0, 2 },
{ 255, 256 },
{ 0, 257 }
};

NJS_MESHSET_SADX meshlistCHAO_0004EE38[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_0004EE1C, NULL, NULL, NULL, uvCHAO_0004EE28, NULL }
};

NJS_VECTOR vertexCHAO_0004EE50[] = {
	{ -10.98097f, 29.89281f, 1.518588f },
{ -10.98097f, -0.107189f, 1.51859f },
{ 8.176558f, 29.95325f, -2.334046f },
{ 8.176558f, -0.046747f, -2.334044f }
};

NJS_VECTOR normalCHAO_0004EE80[] = {
	{ 0.197156f, 0, 0.980372f },
{ 0.197156f, 0, 0.980372f },
{ 0.197156f, 0, 0.980372f },
{ 0.197156f, 0, 0.980372f }
};

NJS_MODEL_SADX attachCHAO_0004EEB0 = { vertexCHAO_0004EE50, normalCHAO_0004EE80, LengthOfArray<Sint32>(vertexCHAO_0004EE50), meshlistCHAO_0004EE38, matlistCHAO_0004EE08, LengthOfArray<Uint16>(meshlistCHAO_0004EE38), LengthOfArray<Uint16>(matlistCHAO_0004EE08),{ -1.402206f, 14.92303f, -0.407728f }, 15.15316f, NULL };

NJS_OBJECT objectCHAO_0004EED8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_0004EEB0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Chao Race Exit door

NJS_MATERIAL matlistCHAO_00049B24[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyCHAO_00049B38[] = {
	4, 0, 3, 1, 2
};

NJS_TEX uvCHAO_00049B44[] = {
	{ 0 },
{ 254, 0 },
{ 0, 254 },
{ 254, 254 }
};

NJS_MESHSET_SADX meshlistCHAO_00049B54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_00049B38, NULL, NULL, NULL, uvCHAO_00049B44, NULL }
};

NJS_VECTOR vertexCHAO_00049B6C[] = {
	{ -0.027122f, 25.6965f, 20.05006f },
{ 0.039581f, -0.01236f, 20.00001f },
{ 0.039581f, -0.01236f, 0.000011f },
{ -0.027122f, 25.6965f, -0.024487f }
};

NJS_VECTOR normalCHAO_00049B9C[] = {
	{ -0.999997f, -0.002595f, 0 },
{ -0.999997f, -0.002595f, 0 },
{ -0.999997f, -0.002595f, 0 },
{ -0.999997f, -0.002595f, 0 }
};

NJS_MODEL_SADX attachCHAO_00049BCC = { vertexCHAO_00049B6C, normalCHAO_00049B9C, LengthOfArray<Sint32>(vertexCHAO_00049B6C), meshlistCHAO_00049B54, matlistCHAO_00049B24, LengthOfArray<Uint16>(meshlistCHAO_00049B54), LengthOfArray<Uint16>(matlistCHAO_00049B24),{ 0.006229f, 12.84207f, 10.01279f }, 16.30899f, NULL };

NJS_OBJECT objectCHAO_00049BF4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_00049BCC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistCHAO_00049A20[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyCHAO_00049A34[] = {
	4, 1, 2, 0, 3
};

NJS_TEX uvCHAO_00049A40[] = {
	{ 0, 254 },
{ 254, 254 },
{ 0 },
{ 254, 0 }
};

NJS_MESHSET_SADX meshlistCHAO_00049A50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyCHAO_00049A34, NULL, NULL, NULL, uvCHAO_00049A40, NULL }
};

NJS_VECTOR vertexCHAO_00049A68[] = {
	{ -0.027122f, 25.6965f, -20.05007f },
{ 0.039581f, -0.012361f, -20.00002f },
{ 0.039581f, -0.012361f, -0.00013f },
{ -0.027122f, 25.6965f, 0.024485f }
};

NJS_VECTOR normalCHAO_00049A98[] = {
	{ -0.999997f, -0.002595f, 0 },
{ -0.999997f, -0.002595f, 0 },
{ -0.999997f, -0.002595f, 0 },
{ -0.999997f, -0.002595f, 0 }
};

NJS_MODEL_SADX attachCHAO_00049AC8 = { vertexCHAO_00049A68, normalCHAO_00049A98, LengthOfArray<Sint32>(vertexCHAO_00049A68), meshlistCHAO_00049A50, matlistCHAO_00049A20, LengthOfArray<Uint16>(meshlistCHAO_00049A50), LengthOfArray<Uint16>(matlistCHAO_00049A20),{ 0.006229f, 12.84207f, -10.01279f }, 16.30899f, NULL };

NJS_OBJECT objectCHAO_00049AF0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_00049AC8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Start Mark

NJS_MATERIAL matlist_000445D4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00044688[] = {
	6, 4, 3, 2, 1, 0, 11,
	0x8000u | 10, 6, 4, 5, 3, 7, 1, 9, 11, 10, 0,
	6, 10, 9, 8, 7, 6, 5,
	14, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 12, 13, 14,
	0x8000u | 6, 17, 15, 19, 13, 21, 23,
	0x8000u | 6, 29, 27, 31, 25, 33, 35,
	14, 28, 27, 26, 25, 24, 35, 34, 33, 32, 31, 30, 29, 28, 27,
	14, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 36, 37, 38,
	0x8000u | 6, 41, 39, 43, 37, 45, 47,
	0x8000u | 6, 53, 51, 55, 49, 57, 59,
	14, 48, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 59,
	14, 62, 61, 60, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61,
	0x8000u | 6, 65, 63, 67, 61, 69, 71,
	0x8000u | 6, 77, 75, 79, 73, 81, 83,
	14, 78, 77, 76, 75, 74, 73, 72, 83, 82, 81, 80, 79, 78, 77,
	14, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 84, 85, 86,
	0x8000u | 6, 89, 87, 91, 85, 93, 95,
	14, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 96, 97, 98,
	0x8000u | 6, 101, 99, 103, 97, 105, 107
};

Sint16 poly_0004481A[] = {
	4, 111, 110, 109, 108
};

Sint16 poly_00044824[] = {
	4, 115, 114, 113, 112
};

Sint16 poly_0004482E[] = {
	4, 119, 118, 117, 116
};

Sint16 poly_00044838[] = {
	4, 123, 122, 121, 120
};

Sint16 poly_00044842[] = {
	4, 127, 126, 125, 124
};

Sint16 poly_0004484C[] = {
	4, 131, 130, 129, 128
};

Sint16 poly_00044856[] = {
	4, 135, 134, 133, 132
};

Sint16 poly_00044860[] = {
	4, 139, 138, 137, 136
};

NJS_TEX uv_0004486C[] = {
	{ 50, 251 },
{ 48, -510 },
{ 48, 251 },
{ 46, -510 },
{ 46, 251 },
{ 47, -510 },
{ 51, 251 },
{ 50, 251 },
{ 50, -510 },
{ 48, -510 },
{ 51, -510 },
{ 46, -510 },
{ 50, -510 },
{ 47, -510 },
{ 47, 251 },
{ 46, 251 },
{ 47, 251 },
{ 50, -510 },
{ 50, 251 },
{ 51, -510 },
{ 51, 251 },
{ 50, -510 },
{ 481, -510 },
{ 413, 251 },
{ 413, -510 },
{ 271, 251 },
{ 271, -510 },
{ 198, 251 },
{ 198, -510 },
{ 266, 251 },
{ 266, -510 },
{ 408, 251 },
{ 408, -510 },
{ 481, 251 },
{ 481, -510 },
{ 413, 251 },
{ 271, 255 },
{ 413, 255 },
{ 198, 255 },
{ 481, 255 },
{ 266, 255 },
{ 408, 255 },
{ 243, 255 },
{ 384, 255 },
{ 169, 255 },
{ 453, 255 },
{ 238, 255 },
{ 380, 255 },
{ 243, 251 },
{ 384, -510 },
{ 384, 251 },
{ 453, -510 },
{ 453, 251 },
{ 380, -510 },
{ 380, 251 },
{ 238, -510 },
{ 238, 251 },
{ 169, -510 },
{ 169, 251 },
{ 243, -510 },
{ 243, 251 },
{ 384, -510 },
{ 424, -510 },
{ 356, 251 },
{ 356, -510 },
{ 214, 251 },
{ 214, -510 },
{ 141, 251 },
{ 141, -510 },
{ 210, 251 },
{ 210, -510 },
{ 351, 251 },
{ 351, -510 },
{ 424, 251 },
{ 424, -510 },
{ 356, 251 },
{ 214, 255 },
{ 356, 255 },
{ 141, 255 },
{ 424, 255 },
{ 210, 255 },
{ 351, 255 },
{ 131, 255 },
{ 386, 255 },
{ 0, 255 },
{ 510, 255 },
{ 123, 255 },
{ 378, 255 },
{ 510, 255 },
{ 378, -510 },
{ 378, 255 },
{ 123, -510 },
{ 123, 255 },
{ 0, -510 },
{ 0, 255 },
{ 131, -510 },
{ 131, 255 },
{ 386, -510 },
{ 386, 255 },
{ 510, -510 },
{ 510, 255 },
{ 378, -510 },
{ 299, 251 },
{ 368, -510 },
{ 368, 251 },
{ 295, -510 },
{ 295, 251 },
{ 153, -510 },
{ 153, 251 },
{ 85, -510 },
{ 85, 251 },
{ 158, -510 },
{ 158, 251 },
{ 299, -510 },
{ 299, 251 },
{ 368, -510 },
{ 158, 255 },
{ 299, 255 },
{ 85, 255 },
{ 368, 255 },
{ 153, 255 },
{ 295, 255 },
{ 129, 255 },
{ 271, 255 },
{ 56, 255 },
{ 339, 255 },
{ 125, 255 },
{ 266, 255 },
{ 56, 251 },
{ 129, -510 },
{ 129, 251 },
{ 271, -510 },
{ 271, 251 },
{ 339, -510 },
{ 339, 251 },
{ 266, -510 },
{ 266, 251 },
{ 125, -510 },
{ 125, 251 },
{ 56, -510 },
{ 56, 251 },
{ 129, -510 },
{ 311, -510 },
{ 243, 251 },
{ 243, -510 },
{ 101, 251 },
{ 101, -510 },
{ 28, 251 },
{ 28, -510 },
{ 96, 251 },
{ 96, -510 },
{ 238, 251 },
{ 238, -510 },
{ 311, 251 },
{ 311, -510 },
{ 243, 251 },
{ 101, 255 },
{ 243, 255 },
{ 28, 255 },
{ 311, 255 },
{ 96, 255 },
{ 238, 255 },
{ 283, -510 },
{ 214, 251 },
{ 214, -510 },
{ 73, 251 },
{ 73, -510 },
{ 0, 251 },
{ 0, -510 },
{ 68, 251 },
{ 68, -510 },
{ 210, 251 },
{ 210, -510 },
{ 283, 251 },
{ 283, -510 },
{ 214, 251 },
{ 73, 255 },
{ 214, 255 },
{ 0, 255 },
{ 283, 255 },
{ 68, 255 },
{ 210, 255 }
};

NJS_TEX uv_00044B44[] = {
	{ 255, 0 },
{ 0 },
{ 255, 255 },
{ 0, 255 }
};

NJS_TEX uv_00044B54[] = {
	{ 254, 0 },
{ 0 },
{ 254, 255 },
{ 0, 255 }
};

NJS_TEX uv_00044B64[] = {
	{ 254, 0 },
{ 0 },
{ 254, 255 },
{ 0, 255 }
};

NJS_TEX uv_00044B74[] = {
	{ 254, 0 },
{ 0 },
{ 254, 255 },
{ 0, 255 }
};

NJS_TEX uv_00044B84[] = {
	{ 254, 0 },
{ 0 },
{ 254, 255 },
{ 0, 255 }
};

NJS_TEX uv_00044B94[] = {
	{ 254, 0 },
{ 0 },
{ 254, 255 },
{ 0, 255 }
};

NJS_TEX uv_00044BA4[] = {
	{ 254, 0 },
{ 0 },
{ 254, 255 },
{ 0, 255 }
};

NJS_TEX uv_00044BB4[] = {
	{ 254, 0 },
{ 0 },
{ 254, 255 },
{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_00044BC4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 19, poly_00044688, NULL, NULL, NULL, uv_0004486C, NULL },
{ NJD_MESHSET_TRIMESH | 1, 1, poly_0004481A, NULL, NULL, NULL, uv_00044B44, NULL },
{ NJD_MESHSET_TRIMESH | 2, 1, poly_00044824, NULL, NULL, NULL, uv_00044B54, NULL },
{ NJD_MESHSET_TRIMESH | 3, 1, poly_0004482E, NULL, NULL, NULL, uv_00044B64, NULL },
{ NJD_MESHSET_TRIMESH | 4, 1, poly_00044838, NULL, NULL, NULL, uv_00044B74, NULL },
{ NJD_MESHSET_TRIMESH | 5, 1, poly_00044842, NULL, NULL, NULL, uv_00044B84, NULL },
{ NJD_MESHSET_TRIMESH | 6, 1, poly_0004484C, NULL, NULL, NULL, uv_00044B94, NULL },
{ NJD_MESHSET_TRIMESH | 7, 1, poly_00044856, NULL, NULL, NULL, uv_00044BA4, NULL },
{ NJD_MESHSET_TRIMESH | 8, 1, poly_00044860, NULL, NULL, NULL, uv_00044BB4, NULL }
};

NJS_VECTOR vertex_00044C9C[] = {
	{ 1.457936f, 0.136256f, -40.05421f },
{ 1.457936f, 11.85461f, -40.05421f },
{ 0.958137f, 0.136256f, -40.91986f },
{ 0.958137f, 11.85461f, -40.91986f },
{ -0.041468f, 0.136256f, -40.91988f },
{ -0.041468f, 11.85461f, -40.91988f },
{ -0.5412869f, 0.136256f, -40.05419f },
{ -0.5412869f, 11.85461f, -40.05419f },
{ -0.041489f, 0.136256f, -39.18855f },
{ -0.041489f, 11.85461f, -39.18855f },
{ 0.958109f, 0.136256f, -39.18852f },
{ 0.958109f, 11.85461f, -39.18852f },
{ 1.457824f, 0.136256f, -30.05813f },
{ 1.457824f, 11.85461f, -30.05813f },
{ 0.9580359f, 0.136256f, -30.92381f },
{ 0.9580359f, 11.85461f, -30.92381f },
{ -0.041576f, 0.136256f, -30.92381f },
{ -0.041576f, 11.85461f, -30.92381f },
{ -0.541327f, 0.136256f, -30.05812f },
{ -0.541327f, 11.85461f, -30.05812f },
{ -0.041537f, 0.136256f, -29.19244f },
{ -0.041537f, 11.85461f, -29.19244f },
{ 0.958075f, 0.136256f, -29.19245f },
{ 0.958075f, 11.85461f, -29.19245f },
{ 1.457838f, 0.136256f, -20.06224f },
{ 1.457838f, 11.85461f, -20.06224f },
{ 0.958049f, 0.136256f, -20.92792f },
{ 0.958049f, 11.85461f, -20.92792f },
{ -0.041561f, 0.136256f, -20.92791f },
{ -0.041561f, 11.85461f, -20.92791f },
{ -0.541374f, 0.136256f, -20.06225f },
{ -0.541374f, 11.85461f, -20.06225f },
{ -0.041526f, 0.136256f, -19.19655f },
{ -0.041526f, 11.85461f, -19.19655f },
{ 0.958025f, 0.136256f, -19.19658f },
{ 0.958025f, 11.85461f, -19.19658f },
{ 1.457868f, 0.136256f, -10.06618f },
{ 1.457868f, 11.85461f, -10.06618f },
{ 0.9580759f, 0.136256f, -10.93186f },
{ 0.9580759f, 11.85461f, -10.93186f },
{ -0.041534f, 0.136256f, -10.93186f },
{ -0.041534f, 11.85461f, -10.93186f },
{ -0.541286f, 0.136256f, -10.06618f },
{ -0.541286f, 11.85461f, -10.06618f },
{ -0.041497f, 0.136256f, -9.200493f },
{ -0.041497f, 11.85461f, -9.200493f },
{ 0.958114f, 0.136256f, -9.2005f },
{ 0.958114f, 11.85461f, -9.2005f },
{ 1.457894f, 0.136256f, -0.07012299f },
{ 1.457894f, 11.85461f, -0.07012299f },
{ 0.958105f, 0.136256f, -0.935806f },
{ 0.958105f, 11.85461f, -0.935806f },
{ -0.041506f, 0.136256f, -0.935798f },
{ -0.041506f, 11.85461f, -0.935798f },
{ -0.541258f, 0.136256f, -0.07012f },
{ -0.541258f, 11.85461f, -0.07012f },
{ -0.041469f, 0.136256f, 0.795563f },
{ -0.041469f, 11.85461f, 0.795563f },
{ 0.958141f, 0.136256f, 0.7955559f },
{ 0.958141f, 11.85461f, 0.7955559f },
{ 1.457948f, 0.136256f, 9.925844f },
{ 1.457948f, 11.85461f, 9.925844f },
{ 0.95815f, 0.136256f, 9.060188f },
{ 0.95815f, 11.85461f, 9.060188f },
{ -0.041452f, 0.136256f, 9.060174f },
{ -0.041452f, 11.85461f, 9.060174f },
{ -0.541272f, 0.136256f, 9.925861f },
{ -0.541272f, 11.85461f, 9.925861f },
{ -0.041474f, 0.136256f, 10.79151f },
{ -0.041474f, 11.85461f, 10.79151f },
{ 0.958127f, 0.136256f, 10.79154f },
{ 0.958127f, 11.85461f, 10.79154f },
{ 1.457935f, 0.136256f, 19.92182f },
{ 1.457935f, 11.85461f, 19.92182f },
{ 0.958146f, 0.136256f, 19.05614f },
{ 0.958146f, 11.85461f, 19.05614f },
{ -0.041465f, 0.136256f, 19.05615f },
{ -0.041465f, 11.85461f, 19.05615f },
{ -0.541219f, 0.136256f, 19.92183f },
{ -0.541219f, 11.85461f, 19.92183f },
{ -0.041428f, 0.136256f, 20.7875f },
{ -0.041428f, 11.85461f, 20.7875f },
{ 0.958182f, 0.136256f, 20.7875f },
{ 0.958182f, 11.85461f, 20.7875f },
{ 1.457893f, 0.136256f, 29.91789f },
{ 1.457893f, 11.85461f, 29.91789f },
{ 0.958105f, 0.136256f, 29.05221f },
{ 0.958105f, 11.85461f, 29.05221f },
{ -0.041506f, 0.136256f, 29.05223f },
{ -0.041506f, 11.85461f, 29.05223f },
{ -0.5412599f, 0.136256f, 29.9179f },
{ -0.5412599f, 11.85461f, 29.9179f },
{ -0.041474f, 0.136256f, 30.78359f },
{ -0.041474f, 11.85461f, 30.78359f },
{ 0.958147f, 0.136256f, 30.78355f },
{ 0.958147f, 11.85461f, 30.78355f },
{ 1.457916f, 0.136256f, 39.91396f },
{ 1.457916f, 11.85461f, 39.91396f },
{ 0.958128f, 0.136256f, 39.04829f },
{ 0.958128f, 11.85461f, 39.04829f },
{ -0.041476f, 0.136256f, 39.04826f },
{ -0.041476f, 11.85461f, 39.04826f },
{ -0.541223f, 0.136256f, 39.91393f },
{ -0.541223f, 11.85461f, 39.91393f },
{ -0.041438f, 0.136256f, 40.77964f },
{ -0.041438f, 11.85461f, 40.77964f },
{ 0.958164f, 0.136256f, 40.77965f },
{ 0.958164f, 11.85461f, 40.77965f },
{ -0.056222f, 0.076298f, 30.25782f },
{ -0.056225f, 0.076298f, 39.59409f },
{ -0.056222f, 11.81161f, 30.25782f },
{ -0.056225f, 11.81161f, 39.59409f },
{ -0.056298f, 0.076298f, 20.3218f },
{ -0.056298f, 0.076298f, 29.65805f },
{ -0.056298f, 11.81161f, 20.3218f },
{ -0.056298f, 11.81161f, 29.65805f },
{ -0.056327f, 0.076298f, 10.20578f },
{ -0.056327f, 0.076298f, 19.54203f },
{ -0.056327f, 11.81161f, 10.20578f },
{ -0.056327f, 11.81161f, 19.54203f },
{ -0.056324f, 0.076298f, 0.289735f },
{ -0.056324f, 0.076298f, 9.62599f },
{ -0.056324f, 11.81161f, 0.289735f },
{ -0.056324f, 11.81161f, 9.62599f },
{ -0.056218f, 0.076298f, -9.686307f },
{ -0.056228f, 0.076298f, -0.350016f },
{ -0.056218f, 11.81161f, -9.686307f },
{ -0.056228f, 11.81161f, -0.350016f },
{ -0.056219f, 0.076298f, -19.70227f },
{ -0.056228f, 0.076298f, -10.36598f },
{ -0.056219f, 11.81161f, -19.70227f },
{ -0.056228f, 11.81161f, -10.36598f },
{ -0.056284f, 0.076298f, -29.73826f },
{ -0.056284f, 0.076298f, -20.402f },
{ -0.056284f, 11.81161f, -29.73826f },
{ -0.056284f, 11.81161f, -20.402f },
{ -0.056319f, 0.076298f, -40.15405f },
{ -0.056318f, 0.076298f, -30.81779f },
{ -0.056319f, 11.81161f, -40.15405f },
{ -0.056318f, 11.81161f, -30.81779f }
};

NJS_VECTOR normal_0004532C[] = {
	{ 1, 0, -0.00001f },
{ 0.792407f, 0.609992f, 0 },
{ 0.5f, 0, -0.866026f },
{ 0.396202f, 0.609996f, -0.686242f },
{ -0.499989f, 0, -0.8660319f },
{ -0.396194f, 0.609994f, -0.686249f },
{ -1, 0, 0.000004f },
{ -0.792407f, 0.609992f, 0.000003f },
{ -0.500004f, 0, 0.8660229f },
{ -0.396205f, 0.609998f, 0.68624f },
{ 0.499982f, 0, 0.866036f },
{ 0.396189f, 0.609993f, 0.686252f },
{ 1, 0, -0.00017f },
{ 0.792403f, 0.609998f, -0.00014f },
{ 0.500003f, 0, -0.866024f },
{ 0.396206f, 0.609994f, -0.686243f },
{ -0.500021f, 0, -0.866013f },
{ -0.396221f, 0.609991f, -0.686236f },
{ -1, 0, 0.00002f },
{ -0.792403f, 0.609998f, 0.000016f },
{ -0.499997f, 0, 0.866027f },
{ -0.396202f, 0.609993f, 0.686246f },
{ 0.500024f, 0, 0.866011f },
{ 0.396223f, 0.609992f, 0.686234f },
{ 1, 0, 0.000017f },
{ 0.792406f, 0.609993f, 0.000014f },
{ 0.500001f, 0, -0.866025f },
{ 0.396204f, 0.609993f, -0.686244f },
{ -0.499995f, 0, -0.866028f },
{ -0.396198f, 0.609997f, -0.686244f },
{ -1, 0, 0.000003f },
{ -0.7924089f, 0.609991f, 0.000003f },
{ -0.499973f, 0, 0.8660409f },
{ -0.396182f, 0.609994f, 0.686256f },
{ 0.5000049f, 0, 0.8660229f },
{ 0.396205f, 0.609998f, 0.6862389f },
{ 1, 0, -0.00016f },
{ 0.792403f, 0.609998f, -0.00012f },
{ 0.500002f, 0, -0.866024f },
{ 0.396205f, 0.609993f, -0.686243f },
{ -0.50002f, 0, -0.8660139f },
{ -0.39622f, 0.609992f, -0.686236f },
{ -1, 0, 0.000013f },
{ -0.792403f, 0.609998f, 0.000011f },
{ -0.500002f, 0, 0.866024f },
{ -0.396205f, 0.609993f, 0.686244f },
{ 0.500021f, 0, 0.866013f },
{ 0.39622f, 0.609992f, 0.686236f },
{ 1, 0, -0.00015f },
{ 0.792403f, 0.609998f, -0.00012f },
{ 0.500002f, 0, -0.866024f },
{ 0.396205f, 0.609993f, -0.686244f },
{ -0.500021f, 0, -0.866013f },
{ -0.39622f, 0.609992f, -0.686236f },
{ -1, 0, 0.000015f },
{ -0.792403f, 0.609998f, 0.000012f },
{ -0.500002f, 0, 0.866024f },
{ -0.396205f, 0.609993f, 0.686244f },
{ 0.500021f, 0, 0.866013f },
{ 0.39622f, 0.609992f, 0.686236f },
{ 1, 0, 0.000001f },
{ 0.792407f, 0.609993f, 0.000001f },
{ 0.500003f, 0, -0.866024f },
{ 0.396204f, 0.609996f, -0.686241f },
{ -0.499988f, 0, -0.8660319f },
{ -0.396193f, 0.609994f, -0.686249f },
{ -1, 0, 0 },
{ -0.792407f, 0.609993f, 0 },
{ -0.5000049f, 0, 0.866022f },
{ -0.396206f, 0.609997f, 0.6862389f },
{ 0.499984f, 0, 0.866034f },
{ 0.396191f, 0.609993f, 0.686251f },
{ 1, 0, -0.00015f },
{ 0.792403f, 0.609998f, -0.00012f },
{ 0.500002f, 0, -0.866024f },
{ 0.396205f, 0.609993f, -0.686244f },
{ -0.500022f, 0, -0.866013f },
{ -0.396221f, 0.609992f, -0.686235f },
{ -1, 0, 0.000021f },
{ -0.792403f, 0.609997f, 0.000016f },
{ -0.500001f, 0, 0.866025f },
{ -0.396203f, 0.609994f, 0.686243f },
{ 0.5000179f, 0, 0.866015f },
{ 0.396218f, 0.609991f, 0.686237f },
{ 1, 0, -0.00014f },
{ 0.792403f, 0.609998f, -0.00011f },
{ 0.499999f, 0, -0.866026f },
{ 0.396202f, 0.609993f, -0.686245f },
{ -0.5000229f, 0, -0.866012f },
{ -0.396222f, 0.609992f, -0.686234f },
{ -1, 0, 0.00001f },
{ -0.792403f, 0.6099989f, 0.000008f },
{ -0.49999f, 0, 0.866031f },
{ -0.396197f, 0.6099899f, 0.686251f },
{ 0.500035f, 0, 0.8660049f },
{ 0.39623f, 0.6099949f, 0.686228f },
{ 1, 0, -0.00019f },
{ 0.792403f, 0.609998f, -0.00015f },
{ 0.500017f, 0, -0.866015f },
{ 0.396216f, 0.609996f, -0.686235f },
{ -0.5000049f, 0, -0.866022f },
{ -0.396209f, 0.609989f, -0.686245f },
{ -1, 0, 0.000008f },
{ -0.792402f, 0.6099989f, 0.000006f },
{ -0.5000179f, 0, 0.866015f },
{ -0.396218f, 0.609993f, 0.686236f },
{ 0.5000139f, 0, 0.866017f },
{ 0.396215f, 0.6099899f, 0.68624f },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, -0.00001f },
{ -1, 0, -0.00001f },
{ -1, 0, -0.00001f },
{ -1, 0, -0.00001f },
{ -1, 0, -0.00001f },
{ -1, 0, -0.00001f },
{ -1, 0, -0.00001f },
{ -1, 0, -0.00001f },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 },
{ -1, 0, 0 }
};

NJS_MODEL_SADX attach_000459BC = { vertex_00044C9C, normal_0004532C, LengthOfArray<Sint32>(vertex_00044C9C), meshlist_00044BC4, matlist_000445D4, LengthOfArray<Uint16>(meshlist_00044BC4), LengthOfArray<Uint16>(matlist_000445D4),{ 0.458287f, 5.965456f, -0.070112f }, 41.27209f, NULL };

NJS_OBJECT object_000459E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000459BC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Waterfall (small)
extern "C" __declspec(dllexport) NJS_MATERIAL matlistCHAO_00045EE8[] = {
	{ { 0x4CB2B2B2 }, { 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_00045EFC[] = {
	4, 0, 3, 4, 7,
	4, 1, 0, 5, 4,
	4, 2, 1, 6, 5,
	4, 14, 13, 18, 17,
	4, 4, 7, 8, 11,
	4, 5, 4, 9, 8,
	4, 6, 5, 10, 9,
	4, 13, 12, 17, 16,
	4, 8, 11, 12, 15,
	4, 9, 8, 13, 12,
	4, 10, 9, 14, 13,
	4, 12, 15, 16, 19
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00045F74[] = {
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00045F74_r[] = {
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistCHAO_00046034[] = {
	{ NJD_MESHSET_TRIMESH | 0, 12, polyCHAO_00045EFC, NULL, NULL, NULL, uvCHAO_00045F74, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexCHAO_0004604C[] = {
	{ 16.40823f, 68.53823f, -4.863199f },
	{ 16.76411f, 68.53823f, 4.039746f },
	{ 16.83165f, 67.52979f, 3.902464f },
	{ 16.47388f, 67.52979f, -4.539151f },
	{ -5.405023f, 64.05315f, -6.520226f },
	{ -5.06591f, 64.05315f, 6.442579f },
	{ -3.246659f, 60.74612f, 5.96686f },
	{ -3.589787f, 60.74612f, -6.023469f },
	{ -13.31216f, 52.40013f, -7.711645f },
	{ -12.95107f, 52.39429f, 7.817515f },
	{ -9.83245f, 49.70207f, 7.101551f },
	{ -10.37077f, 49.70402f, -7.264156f },
	{ -17.1002f, 32.62265f, -8.369639f },
	{ -16.7008f, 32.60903f, 8.401017f },
	{ -13.36667f, 31.71479f, 7.956337f },
	{ -13.72684f, 31.72062f, -7.795973f },
	{ -18.95043f, -5.334471f, -8.460799f },
	{ -18.54342f, -5.350019f, 9.09765f },
	{ -15.27645f, -5.290806f, 8.419199f },
	{ -15.46205f, -5.281088f, -7.853524f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalCHAO_0004613C[] = {
	{ -0.091088f, 0.707364f, -0.700956f },
	{ -0.06757899f, 0.7149979f, 0.695853f },
	{ 0.129824f, -0.083583f, 0.988008f },
	{ 0.103961f, -0.141923f, -0.984403f },
	{ -0.391955f, 0.6327519f, -0.667829f },
	{ -0.361124f, 0.641298f, 0.676998f },
	{ 0.172221f, -0.050989f, 0.9837379f },
	{ 0.142067f, -0.074649f, -0.987038f },
	{ -0.634391f, 0.29895f, -0.712865f },
	{ -0.606576f, 0.297241f, 0.73737f },
	{ 0.192941f, -0.003064f, 0.981205f },
	{ 0.16592f, -0.005591f, -0.986123f },
	{ -0.664565f, 0.09227999f, -0.741511f },
	{ -0.644689f, 0.097408f, 0.758213f },
	{ 0.174911f, 0.006931f, 0.98456f },
	{ 0.16519f, -0.002251f, -0.986259f },
	{ -0.6706319f, 0.034698f, -0.7409779f },
	{ -0.649566f, 0.040747f, 0.759213f },
	{ 0.16818f, 0.00365f, 0.98575f },
	{ 0.168904f, -0.005866f, -0.985615f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachCHAO_0004622C = { vertexCHAO_0004604C, normalCHAO_0004613C, LengthOfArray<Sint32>(vertexCHAO_0004604C), meshlistCHAO_00046034, matlistCHAO_00045EE8, LengthOfArray<Uint16>(meshlistCHAO_00046034), LengthOfArray<Uint16>(matlistCHAO_00045EE8), { -1.059391f, 31.5941f, 0.318425f }, 38.04255f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectCHAO_00046254 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_0004622C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Waterfall (big)

extern "C" __declspec(dllexport) NJS_MATERIAL matlistCHAO_00045A18[] = {
	{ { 0x4CB2B2B2 },{ 0xFFFFFFFF }, 11, 66, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_00045A2C[] = {
	4, 0, 3, 4, 7,
	4, 1, 0, 5, 4,
	4, 2, 1, 6, 5,
	4, 3, 2, 7, 6,
	4, 4, 7, 8, 11,
	4, 5, 4, 9, 8,
	4, 6, 5, 10, 9,
	4, 7, 6, 11, 10,
	4, 8, 11, 12, 15,
	4, 9, 8, 13, 12,
	4, 10, 9, 14, 13,
	4, 11, 10, 15, 14,
	4, 12, 15, 16, 19,
	4, 13, 12, 17, 16,
	4, 14, 13, 18, 17,
	4, 15, 14, 19, 18,
	4, 16, 19, 20, 23,
	4, 17, 16, 21, 20,
	4, 18, 17, 22, 21,
	4, 19, 18, 23, 22
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00045AF4[] = {
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 }
};


extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00045AF4R[] = {
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 },
	{ 2, 2 },
	{ 252, 2 },
	{ 1, 253 },
	{ 252, 253 }
};
extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistCHAO_00045C34[] = {
	{ NJD_MESHSET_TRIMESH | 0, 20, polyCHAO_00045A2C, NULL, NULL, NULL, uvCHAO_00045AF4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexCHAO_00045C4C[] = {
	{ 9.283212f, 163.5019f, -8.466371f },
	{ 10.58677f, 163.5019f, 7.152827f },
	{ 10.52008f, 162.8927f, 7.384455f },
	{ 9.209562f, 162.8927f, -7.425387f },
	{ -18.47578f, 160.3005f, -12.3035f },
	{ -17.23361f, 160.3005f, 10.43825f },
	{ -15.8697f, 157.5965f, 9.599185f },
	{ -17.12658f, 157.5965f, -11.43647f },
	{ -44.90736f, 140.8715f, -16.03111f },
	{ -43.7128f, 140.8715f, 12.23453f },
	{ -36.60028f, 134.9479f, 10.9874f },
	{ -37.81847f, 134.9479f, -14.53564f },
	{ -60.28432f, 112.4654f, -17.81231f },
	{ -59.12028f, 112.4654f, 13.99343f },
	{ -48.84193f, 108.9751f, 12.56166f },
	{ -50.03311f, 108.9751f, -16.09547f },
	{ -66.99786f, 74.03789f, -18.48134f },
	{ -65.84866f, 74.03789f, 15.047f },
	{ -55.14808f, 71.84339f, 13.56608f },
	{ -56.32534f, 71.84339f, -16.70554f },
	{ -73.24492f, -5.168385f, -18.00279f },
	{ -72.11017f, -5.168385f, 17.20189f },
	{ -59.32874f, -4.411171f, 15.67257f },
	{ -60.49169f, -4.411171f, -16.25982f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalCHAO_00045D6C[] = {
	{ 0.038902f, 0.620672f, -0.7831039f },
	{ -0.018928f, 0.732574f, 0.680424f },
	{ 0.198573f, -0.685133f, 0.700829f },
	{ 0.216989f, -0.844336f, -0.489912f },
	{ -0.209851f, 0.647387f, -0.732703f },
	{ -0.201784f, 0.6719159f, 0.712609f },
	{ 0.388744f, -0.586898f, 0.7102309f },
	{ 0.409021f, -0.633584f, -0.656715f },
	{ -0.499137f, 0.4983f, -0.708914f },
	{ -0.495177f, 0.490713f, 0.716938f },
	{ 0.638887f, -0.383405f, 0.666952f },
	{ 0.6256109f, -0.362484f, -0.690808f },
	{ -0.65007f, 0.251579f, -0.717019f },
	{ -0.63366f, 0.252599f, 0.7312109f },
	{ 0.713209f, -0.191408f, 0.674311f },
	{ 0.693571f, -0.192247f, -0.694263f },
	{ -0.666522f, 0.089246f, -0.740124f },
	{ -0.651009f, 0.103502f, 0.7519799f },
	{ 0.751667f, -0.06458399f, 0.656373f },
	{ 0.730173f, -0.07940499f, -0.678633f },
	{ -0.7035469f, 0.051927f, -0.708749f },
	{ -0.676411f, 0.075917f, 0.732601f },
	{ 0.73636f, -0.021039f, 0.676262f },
	{ 0.725236f, -0.046168f, -0.686951f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachCHAO_00045E8C = { vertexCHAO_00045C4C, normalCHAO_00045D6C, LengthOfArray(vertexCHAO_00045C4C), meshlistCHAO_00045C34, matlistCHAO_00045A18, LengthOfArray(meshlistCHAO_00045C34), LengthOfArray(matlistCHAO_00045A18),{ -31.32907f, 79.16676f, -0.639721f }, 86.84367f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectCHAO_00045EB4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_00045E8C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
//Skybox

extern "C" __declspec(dllexport) NJS_MATERIAL matlistCHAO_0001BFDC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polyX_0001BFF0[] = {
	0x8000u | 11, 0, 40, 5, 39, 4, 38, 3, 37, 2, 36, 1,
	14, 4, 5, 10, 0, 15, 20, 14, 19, 13, 18, 12, 17, 11, 16,
	0x8000u | 9, 10, 4, 9, 3, 8, 2, 7, 1, 6,
	10, 10, 15, 9, 14, 8, 13, 7, 12, 6, 11,
	12, 30, 0, 35, 40, 34, 39, 33, 38, 32, 37, 31, 36,
	10, 30, 35, 29, 34, 28, 33, 27, 32, 26, 31,
	10, 20, 25, 19, 24, 18, 23, 17, 22, 16, 21,
	12, 20, 0, 25, 30, 24, 29, 23, 28, 22, 27, 21, 26
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_0001C0B0[] = {
	{ 510, 0 },
{ 448, 14 },
{ 510, 14 },
{ 448, 54 },
{ 510, 54 },
{ 448, 113 },
{ 510, 113 },
{ 448, 184 },
{ 510, 184 },
{ 448, 255 },
{ 510, 255 },
{ 0, 54 },
{ 0, 14 },
{ 64, 14 },
{ 0 },
{ 128, 14 },
{ 192, 14 },
{ 128, 54 },
{ 192, 54 },
{ 128, 113 },
{ 192, 113 },
{ 128, 184 },
{ 192, 184 },
{ 128, 255 },
{ 192, 255 },
{ 64, 14 },
{ 0, 54 },
{ 64, 54 },
{ 0, 113 },
{ 64, 113 },
{ 0, 184 },
{ 64, 184 },
{ 0, 255 },
{ 64, 255 },
{ 64, 14 },
{ 128, 14 },
{ 64, 54 },
{ 128, 54 },
{ 64, 113 },
{ 128, 113 },
{ 64, 184 },
{ 128, 184 },
{ 64, 255 },
{ 128, 255 },
{ 320, 14 },
{ 510, 0 },
{ 384, 14 },
{ 448, 14 },
{ 384, 54 },
{ 448, 54 },
{ 384, 113 },
{ 448, 113 },
{ 384, 184 },
{ 448, 184 },
{ 384, 255 },
{ 448, 255 },
{ 320, 14 },
{ 384, 14 },
{ 320, 54 },
{ 384, 54 },
{ 320, 113 },
{ 384, 113 },
{ 320, 184 },
{ 384, 184 },
{ 320, 255 },
{ 384, 255 },
{ 192, 14 },
{ 256, 14 },
{ 192, 54 },
{ 256, 54 },
{ 192, 113 },
{ 256, 113 },
{ 192, 184 },
{ 256, 184 },
{ 192, 255 },
{ 256, 255 },
{ 192, 14 },
{ 510, 0 },
{ 256, 14 },
{ 320, 14 },
{ 256, 54 },
{ 320, 54 },
{ 256, 113 },
{ 320, 113 },
{ 256, 184 },
{ 320, 184 },
{ 256, 255 },
{ 320, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistCHAO_0001C210[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, polyX_0001BFF0, NULL, NULL, NULL, uvCHAO_0001C0B0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexCHAO_0001C228[] = {
	{ 0, 842.4f, 0 },
{ 864.7512f, -322.3725f, 0 },
{ 935.9999f, 0.000037f, 0 },
{ 864.7512f, 322.3726f, 0 },
{ 661.8519f, 595.6667f, 0 },
{ 358.1917f, 778.2761f, 0 },
{ 611.4714f, -322.3725f, -611.4714f },
{ 661.8519f, 0.000037f, -661.8519f },
{ 611.4714f, 322.3726f, -611.4714f },
{ 467.9999f, 595.6667f, -467.9999f },
{ 253.2798f, 778.2761f, -253.2798f },
{ 0, -322.3725f, -864.7511f },
{ 0, 0.000037f, -935.9999f },
{ 0, 322.3726f, -864.7511f },
{ 0, 595.6667f, -661.8519f },
{ 0, 778.2761f, -358.1917f },
{ -611.4714f, -322.3725f, -611.4714f },
{ -661.8519f, 0.000037f, -661.8519f },
{ -611.4714f, 322.3726f, -611.4714f },
{ -467.9999f, 595.6667f, -467.9999f },
{ -253.2798f, 778.2761f, -253.2798f },
{ -864.7511f, -322.3725f, 0 },
{ -935.9999f, 0.000037f, 0 },
{ -864.7511f, 322.3726f, 0 },
{ -661.8519f, 595.6667f, 0 },
{ -358.1917f, 778.2761f, 0 },
{ -611.4714f, -322.3725f, 611.4714f },
{ -661.8519f, 0.000037f, 661.8519f },
{ -611.4714f, 322.3726f, 611.4714f },
{ -467.9999f, 595.6667f, 467.9999f },
{ -253.2798f, 778.2761f, 253.2798f },
{ 0, -322.3725f, 864.7511f },
{ 0, 0.000037f, 935.9999f },
{ 0, 322.3726f, 864.7511f },
{ 0, 595.6667f, 661.8519f },
{ 0, 778.2761f, 358.1917f },
{ 611.4714f, -322.3725f, 611.4714f },
{ 661.8519f, 0.000037f, 661.8519f },
{ 611.4714f, 322.3726f, 611.4714f },
{ 467.9999f, 595.6667f, 467.9999f },
{ 253.2798f, 778.2761f, 253.2798f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalCHAO_0001C414[] = {
	{ 0, -1, 0 },
{ -0.976436f, 0.215806f, 0 },
{ -1, 0, 0 },
{ -0.917832f, -0.39697f, 0 },
{ -0.696602f, -0.717458f, 0 },
{ -0.389869f, -0.9208699f, 0 },
{ -0.6904449f, 0.215806f, 0.6904449f },
{ -0.7071069f, 0, 0.7071069f },
{ -0.649005f, -0.39697f, 0.649005f },
{ -0.492572f, -0.717458f, 0.492572f },
{ -0.275679f, -0.9208699f, 0.275679f },
{ 0, 0.215806f, 0.976436f },
{ 0, 0, 1 },
{ 0, -0.39697f, 0.917832f },
{ 0, -0.717458f, 0.696602f },
{ 0, -0.9208699f, 0.389869f },
{ 0.6904449f, 0.215806f, 0.6904449f },
{ 0.7071069f, 0, 0.7071069f },
{ 0.649005f, -0.39697f, 0.649005f },
{ 0.492572f, -0.717458f, 0.492572f },
{ 0.275679f, -0.9208699f, 0.275679f },
{ 0.976436f, 0.215806f, 0 },
{ 1, 0, 0 },
{ 0.917832f, -0.39697f, 0 },
{ 0.696602f, -0.717458f, 0 },
{ 0.389869f, -0.9208699f, 0 },
{ 0.6904449f, 0.215806f, -0.6904449f },
{ 0.7071069f, 0, -0.7071069f },
{ 0.649005f, -0.39697f, -0.649005f },
{ 0.492572f, -0.717458f, -0.492572f },
{ 0.275679f, -0.9208699f, -0.275679f },
{ 0, 0.215806f, -0.976436f },
{ 0, 0, -1 },
{ 0, -0.39697f, -0.917832f },
{ 0, -0.717458f, -0.696602f },
{ 0, -0.9208699f, -0.389869f },
{ -0.6904449f, 0.215806f, -0.6904449f },
{ -0.7071069f, 0, -0.7071069f },
{ -0.649005f, -0.39697f, -0.649005f },
{ -0.492572f, -0.717458f, -0.492572f },
{ -0.275679f, -0.9208699f, -0.275679f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachCHAO_0001C600 = { vertexCHAO_0001C228, normalCHAO_0001C414, LengthOfArray<Sint32>(vertexCHAO_0001C228), meshlistCHAO_0001C210, matlistCHAO_0001BFDC, LengthOfArray<Uint16>(meshlistCHAO_0001C210), LengthOfArray<Uint16>(matlistCHAO_0001BFDC),{ 0, 260.0137f, 0 }, 1323.704f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectCHAO_0001C628 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_0001C600, -167, 114.3956f, 156.6f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlistCHAO_0002A6F4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_0002A708[] = {
	4, 0, 1, 3, 4,
	4, 3, 4, 7, 8,
	4, 5, 4, 2, 1,
	4, 6, 8, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_0002A730[] = {
	{ 0, 255 },
	{ 2, 244 },
	{ 125, 254 },
	{ 122, 246 },
	{ 0, 255 },
	{ 2, 244 },
	{ 125, 254 },
	{ 122, 246 },
	{ 0, 255 },
	{ 2, 244 },
	{ 125, 254 },
	{ 122, 246 },
	{ 0, 255 },
	{ 2, 244 },
	{ 125, 254 },
	{ 122, 246 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistCHAO_0002A770[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polyCHAO_0002A708, NULL, NULL, NULL, uvCHAO_0002A730, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexCHAO_0002A788[] = {
	{ -811.287f, -0.00017f, -808.9822f },
	{ -811.287f, -0.00017f, 4.321931f },
	{ -811.2871f, -0.00017f, 808.9824f },
	{ -9.719082f, -0.00017f, -808.9822f },
	{ -9.719201f, -0.00017f, 4.322007f },
	{ -9.719322f, -0.00017f, 808.9824f },
	{ 811.2866f, -0.00017f, 808.9825f },
	{ 811.2867f, -0.00017f, -808.9821f },
	{ 811.2866f, -0.00017f, -4.321978f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalCHAO_0002A7F4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachCHAO_0002A860 = { vertexCHAO_0002A788, normalCHAO_0002A7F4, LengthOfArray(vertexCHAO_0002A788), meshlistCHAO_0002A770, matlistCHAO_0002A6F4, LengthOfArray(meshlistCHAO_0002A770), LengthOfArray(matlistCHAO_0002A6F4),{ -0.000214f, -0.00017f, 0.000122f }, 1620.077f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectCHAO_0002A888 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_0002A860, -156.2123f, -12.32f, 153.2003f, 0, 0x1F5F, 0, 1, 1, 1, NULL, NULL };


//Number plate 1
extern "C" __declspec(dllexport) NJS_MATERIAL matlistCHAO_000445D4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_00044688[] = {
	6, 4, 3, 2, 1, 0, 11,
	0x8000u | 10, 6, 4, 5, 3, 7, 1, 9, 11, 10, 0,
	6, 10, 9, 8, 7, 6, 5,
	14, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 12, 13, 14,
	0x8000u | 6, 17, 15, 19, 13, 21, 23,
	0x8000u | 6, 29, 27, 31, 25, 33, 35,
	14, 28, 27, 26, 25, 24, 35, 34, 33, 32, 31, 30, 29, 28, 27,
	14, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 36, 37, 38,
	0x8000u | 6, 41, 39, 43, 37, 45, 47,
	0x8000u | 6, 53, 51, 55, 49, 57, 59,
	14, 48, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 59,
	14, 62, 61, 60, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61,
	0x8000u | 6, 65, 63, 67, 61, 69, 71,
	0x8000u | 6, 77, 75, 79, 73, 81, 83,
	14, 78, 77, 76, 75, 74, 73, 72, 83, 82, 81, 80, 79, 78, 77,
	14, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 84, 85, 86,
	0x8000u | 6, 89, 87, 91, 85, 93, 95,
	14, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 96, 97, 98,
	0x8000u | 6, 101, 99, 103, 97, 105, 107
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_0004481A[] = {
	4, 111, 110, 109, 108
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_00044824[] = {
	4, 115, 114, 113, 112
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_0004482E[] = {
	4, 119, 118, 117, 116
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_00044838[] = {
	4, 123, 122, 121, 120
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_00044842[] = {
	4, 127, 126, 125, 124
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_0004484C[] = {
	4, 131, 130, 129, 128
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_00044856[] = {
	4, 135, 134, 133, 132
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_00044860[] = {
	4, 139, 138, 137, 136
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_0004486C[] = {
	{ 50, 251 },
	{ 48, -510 },
	{ 48, 251 },
	{ 46, -510 },
	{ 46, 251 },
	{ 47, -510 },
	{ 51, 251 },
	{ 50, 251 },
	{ 50, -510 },
	{ 48, -510 },
	{ 51, -510 },
	{ 46, -510 },
	{ 50, -510 },
	{ 47, -510 },
	{ 47, 251 },
	{ 46, 251 },
	{ 47, 251 },
	{ 50, -510 },
	{ 50, 251 },
	{ 51, -510 },
	{ 51, 251 },
	{ 50, -510 },
	{ 481, -510 },
	{ 413, 251 },
	{ 413, -510 },
	{ 271, 251 },
	{ 271, -510 },
	{ 198, 251 },
	{ 198, -510 },
	{ 266, 251 },
	{ 266, -510 },
	{ 408, 251 },
	{ 408, -510 },
	{ 481, 251 },
	{ 481, -510 },
	{ 413, 251 },
	{ 271, 255 },
	{ 413, 255 },
	{ 198, 255 },
	{ 481, 255 },
	{ 266, 255 },
	{ 408, 255 },
	{ 243, 255 },
	{ 384, 255 },
	{ 169, 255 },
	{ 453, 255 },
	{ 238, 255 },
	{ 380, 255 },
	{ 243, 251 },
	{ 384, -510 },
	{ 384, 251 },
	{ 453, -510 },
	{ 453, 251 },
	{ 380, -510 },
	{ 380, 251 },
	{ 238, -510 },
	{ 238, 251 },
	{ 169, -510 },
	{ 169, 251 },
	{ 243, -510 },
	{ 243, 251 },
	{ 384, -510 },
	{ 424, -510 },
	{ 356, 251 },
	{ 356, -510 },
	{ 214, 251 },
	{ 214, -510 },
	{ 141, 251 },
	{ 141, -510 },
	{ 210, 251 },
	{ 210, -510 },
	{ 351, 251 },
	{ 351, -510 },
	{ 424, 251 },
	{ 424, -510 },
	{ 356, 251 },
	{ 214, 255 },
	{ 356, 255 },
	{ 141, 255 },
	{ 424, 255 },
	{ 210, 255 },
	{ 351, 255 },
	{ 131, 255 },
	{ 386, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 123, 255 },
	{ 378, 255 },
	{ 510, 255 },
	{ 378, -510 },
	{ 378, 255 },
	{ 123, -510 },
	{ 123, 255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 131, -510 },
	{ 131, 255 },
	{ 386, -510 },
	{ 386, 255 },
	{ 510, -510 },
	{ 510, 255 },
	{ 378, -510 },
	{ 299, 251 },
	{ 368, -510 },
	{ 368, 251 },
	{ 295, -510 },
	{ 295, 251 },
	{ 153, -510 },
	{ 153, 251 },
	{ 85, -510 },
	{ 85, 251 },
	{ 158, -510 },
	{ 158, 251 },
	{ 299, -510 },
	{ 299, 251 },
	{ 368, -510 },
	{ 158, 255 },
	{ 299, 255 },
	{ 85, 255 },
	{ 368, 255 },
	{ 153, 255 },
	{ 295, 255 },
	{ 129, 255 },
	{ 271, 255 },
	{ 56, 255 },
	{ 339, 255 },
	{ 125, 255 },
	{ 266, 255 },
	{ 56, 251 },
	{ 129, -510 },
	{ 129, 251 },
	{ 271, -510 },
	{ 271, 251 },
	{ 339, -510 },
	{ 339, 251 },
	{ 266, -510 },
	{ 266, 251 },
	{ 125, -510 },
	{ 125, 251 },
	{ 56, -510 },
	{ 56, 251 },
	{ 129, -510 },
	{ 311, -510 },
	{ 243, 251 },
	{ 243, -510 },
	{ 101, 251 },
	{ 101, -510 },
	{ 28, 251 },
	{ 28, -510 },
	{ 96, 251 },
	{ 96, -510 },
	{ 238, 251 },
	{ 238, -510 },
	{ 311, 251 },
	{ 311, -510 },
	{ 243, 251 },
	{ 101, 255 },
	{ 243, 255 },
	{ 28, 255 },
	{ 311, 255 },
	{ 96, 255 },
	{ 238, 255 },
	{ 283, -510 },
	{ 214, 251 },
	{ 214, -510 },
	{ 73, 251 },
	{ 73, -510 },
	{ 0, 251 },
	{ 0, -510 },
	{ 68, 251 },
	{ 68, -510 },
	{ 210, 251 },
	{ 210, -510 },
	{ 283, 251 },
	{ 283, -510 },
	{ 214, 251 },
	{ 73, 255 },
	{ 214, 255 },
	{ 0, 255 },
	{ 283, 255 },
	{ 68, 255 },
	{ 210, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00044B44[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00044B54[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00044B64[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00044B74[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00044B84[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00044B94[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00044BA4[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00044BB4[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistCHAO_00044BC4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 19, polyCHAO_00044688, NULL, NULL, NULL, uvCHAO_0004486C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polyCHAO_0004481A, NULL, NULL, NULL, uvCHAO_00044B44, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polyCHAO_00044824, NULL, NULL, NULL, uvCHAO_00044B54, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polyCHAO_0004482E, NULL, NULL, NULL, uvCHAO_00044B64, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polyCHAO_00044838, NULL, NULL, NULL, uvCHAO_00044B74, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, polyCHAO_00044842, NULL, NULL, NULL, uvCHAO_00044B84, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, polyCHAO_0004484C, NULL, NULL, NULL, uvCHAO_00044B94, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, polyCHAO_00044856, NULL, NULL, NULL, uvCHAO_00044BA4, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, polyCHAO_00044860, NULL, NULL, NULL, uvCHAO_00044BB4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexCHAO_00044C9C[] = {
	{ 1.457936f, 0.136256f, -40.05421f },
	{ 1.457936f, 11.85461f, -40.05421f },
	{ 0.958137f, 0.136256f, -40.91986f },
	{ 0.958137f, 11.85461f, -40.91986f },
	{ -0.041468f, 0.136256f, -40.91988f },
	{ -0.041468f, 11.85461f, -40.91988f },
	{ -0.5412869f, 0.136256f, -40.05419f },
	{ -0.5412869f, 11.85461f, -40.05419f },
	{ -0.041489f, 0.136256f, -39.18855f },
	{ -0.041489f, 11.85461f, -39.18855f },
	{ 0.958109f, 0.136256f, -39.18852f },
	{ 0.958109f, 11.85461f, -39.18852f },
	{ 1.457824f, 0.136256f, -30.05813f },
	{ 1.457824f, 11.85461f, -30.05813f },
	{ 0.9580359f, 0.136256f, -30.92381f },
	{ 0.9580359f, 11.85461f, -30.92381f },
	{ -0.041576f, 0.136256f, -30.92381f },
	{ -0.041576f, 11.85461f, -30.92381f },
	{ -0.541327f, 0.136256f, -30.05812f },
	{ -0.541327f, 11.85461f, -30.05812f },
	{ -0.041537f, 0.136256f, -29.19244f },
	{ -0.041537f, 11.85461f, -29.19244f },
	{ 0.958075f, 0.136256f, -29.19245f },
	{ 0.958075f, 11.85461f, -29.19245f },
	{ 1.457838f, 0.136256f, -20.06224f },
	{ 1.457838f, 11.85461f, -20.06224f },
	{ 0.958049f, 0.136256f, -20.92792f },
	{ 0.958049f, 11.85461f, -20.92792f },
	{ -0.041561f, 0.136256f, -20.92791f },
	{ -0.041561f, 11.85461f, -20.92791f },
	{ -0.541374f, 0.136256f, -20.06225f },
	{ -0.541374f, 11.85461f, -20.06225f },
	{ -0.041526f, 0.136256f, -19.19655f },
	{ -0.041526f, 11.85461f, -19.19655f },
	{ 0.958025f, 0.136256f, -19.19658f },
	{ 0.958025f, 11.85461f, -19.19658f },
	{ 1.457868f, 0.136256f, -10.06618f },
	{ 1.457868f, 11.85461f, -10.06618f },
	{ 0.9580759f, 0.136256f, -10.93186f },
	{ 0.9580759f, 11.85461f, -10.93186f },
	{ -0.041534f, 0.136256f, -10.93186f },
	{ -0.041534f, 11.85461f, -10.93186f },
	{ -0.541286f, 0.136256f, -10.06618f },
	{ -0.541286f, 11.85461f, -10.06618f },
	{ -0.041497f, 0.136256f, -9.200493f },
	{ -0.041497f, 11.85461f, -9.200493f },
	{ 0.958114f, 0.136256f, -9.2005f },
	{ 0.958114f, 11.85461f, -9.2005f },
	{ 1.457894f, 0.136256f, -0.07012299f },
	{ 1.457894f, 11.85461f, -0.07012299f },
	{ 0.958105f, 0.136256f, -0.935806f },
	{ 0.958105f, 11.85461f, -0.935806f },
	{ -0.041506f, 0.136256f, -0.935798f },
	{ -0.041506f, 11.85461f, -0.935798f },
	{ -0.541258f, 0.136256f, -0.07012f },
	{ -0.541258f, 11.85461f, -0.07012f },
	{ -0.041469f, 0.136256f, 0.795563f },
	{ -0.041469f, 11.85461f, 0.795563f },
	{ 0.958141f, 0.136256f, 0.7955559f },
	{ 0.958141f, 11.85461f, 0.7955559f },
	{ 1.457948f, 0.136256f, 9.925844f },
	{ 1.457948f, 11.85461f, 9.925844f },
	{ 0.95815f, 0.136256f, 9.060188f },
	{ 0.95815f, 11.85461f, 9.060188f },
	{ -0.041452f, 0.136256f, 9.060174f },
	{ -0.041452f, 11.85461f, 9.060174f },
	{ -0.541272f, 0.136256f, 9.925861f },
	{ -0.541272f, 11.85461f, 9.925861f },
	{ -0.041474f, 0.136256f, 10.79151f },
	{ -0.041474f, 11.85461f, 10.79151f },
	{ 0.958127f, 0.136256f, 10.79154f },
	{ 0.958127f, 11.85461f, 10.79154f },
	{ 1.457935f, 0.136256f, 19.92182f },
	{ 1.457935f, 11.85461f, 19.92182f },
	{ 0.958146f, 0.136256f, 19.05614f },
	{ 0.958146f, 11.85461f, 19.05614f },
	{ -0.041465f, 0.136256f, 19.05615f },
	{ -0.041465f, 11.85461f, 19.05615f },
	{ -0.541219f, 0.136256f, 19.92183f },
	{ -0.541219f, 11.85461f, 19.92183f },
	{ -0.041428f, 0.136256f, 20.7875f },
	{ -0.041428f, 11.85461f, 20.7875f },
	{ 0.958182f, 0.136256f, 20.7875f },
	{ 0.958182f, 11.85461f, 20.7875f },
	{ 1.457893f, 0.136256f, 29.91789f },
	{ 1.457893f, 11.85461f, 29.91789f },
	{ 0.958105f, 0.136256f, 29.05221f },
	{ 0.958105f, 11.85461f, 29.05221f },
	{ -0.041506f, 0.136256f, 29.05223f },
	{ -0.041506f, 11.85461f, 29.05223f },
	{ -0.5412599f, 0.136256f, 29.9179f },
	{ -0.5412599f, 11.85461f, 29.9179f },
	{ -0.041474f, 0.136256f, 30.78359f },
	{ -0.041474f, 11.85461f, 30.78359f },
	{ 0.958147f, 0.136256f, 30.78355f },
	{ 0.958147f, 11.85461f, 30.78355f },
	{ 1.457916f, 0.136256f, 39.91396f },
	{ 1.457916f, 11.85461f, 39.91396f },
	{ 0.958128f, 0.136256f, 39.04829f },
	{ 0.958128f, 11.85461f, 39.04829f },
	{ -0.041476f, 0.136256f, 39.04826f },
	{ -0.041476f, 11.85461f, 39.04826f },
	{ -0.541223f, 0.136256f, 39.91393f },
	{ -0.541223f, 11.85461f, 39.91393f },
	{ -0.041438f, 0.136256f, 40.77964f },
	{ -0.041438f, 11.85461f, 40.77964f },
	{ 0.958164f, 0.136256f, 40.77965f },
	{ 0.958164f, 11.85461f, 40.77965f },
	{ -0.056222f, 0.076298f, 30.25782f },
	{ -0.056225f, 0.076298f, 39.59409f },
	{ -0.056222f, 11.81161f, 30.25782f },
	{ -0.056225f, 11.81161f, 39.59409f },
	{ -0.056298f, 0.076298f, 20.3218f },
	{ -0.056298f, 0.076298f, 29.65805f },
	{ -0.056298f, 11.81161f, 20.3218f },
	{ -0.056298f, 11.81161f, 29.65805f },
	{ -0.056327f, 0.076298f, 10.20578f },
	{ -0.056327f, 0.076298f, 19.54203f },
	{ -0.056327f, 11.81161f, 10.20578f },
	{ -0.056327f, 11.81161f, 19.54203f },
	{ -0.056324f, 0.076298f, 0.289735f },
	{ -0.056324f, 0.076298f, 9.62599f },
	{ -0.056324f, 11.81161f, 0.289735f },
	{ -0.056324f, 11.81161f, 9.62599f },
	{ -0.056218f, 0.076298f, -9.686307f },
	{ -0.056228f, 0.076298f, -0.350016f },
	{ -0.056218f, 11.81161f, -9.686307f },
	{ -0.056228f, 11.81161f, -0.350016f },
	{ -0.056219f, 0.076298f, -19.70227f },
	{ -0.056228f, 0.076298f, -10.36598f },
	{ -0.056219f, 11.81161f, -19.70227f },
	{ -0.056228f, 11.81161f, -10.36598f },
	{ -0.056284f, 0.076298f, -29.73826f },
	{ -0.056284f, 0.076298f, -20.402f },
	{ -0.056284f, 11.81161f, -29.73826f },
	{ -0.056284f, 11.81161f, -20.402f },
	{ -0.056319f, 0.076298f, -40.15405f },
	{ -0.056318f, 0.076298f, -30.81779f },
	{ -0.056319f, 11.81161f, -40.15405f },
	{ -0.056318f, 11.81161f, -30.81779f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalCHAO_0004532C[] = {
	{ 1, 0, -0.00001f },
	{ 0.792407f, 0.609992f, 0 },
	{ 0.5f, 0, -0.866026f },
	{ 0.396202f, 0.609996f, -0.686242f },
	{ -0.499989f, 0, -0.8660319f },
	{ -0.396194f, 0.609994f, -0.686249f },
	{ -1, 0, 0.000004f },
	{ -0.792407f, 0.609992f, 0.000003f },
	{ -0.500004f, 0, 0.8660229f },
	{ -0.396205f, 0.609998f, 0.68624f },
	{ 0.499982f, 0, 0.866036f },
	{ 0.396189f, 0.609993f, 0.686252f },
	{ 1, 0, -0.00017f },
	{ 0.792403f, 0.609998f, -0.00014f },
	{ 0.500003f, 0, -0.866024f },
	{ 0.396206f, 0.609994f, -0.686243f },
	{ -0.500021f, 0, -0.866013f },
	{ -0.396221f, 0.609991f, -0.686236f },
	{ -1, 0, 0.00002f },
	{ -0.792403f, 0.609998f, 0.000016f },
	{ -0.499997f, 0, 0.866027f },
	{ -0.396202f, 0.609993f, 0.686246f },
	{ 0.500024f, 0, 0.866011f },
	{ 0.396223f, 0.609992f, 0.686234f },
	{ 1, 0, 0.000017f },
	{ 0.792406f, 0.609993f, 0.000014f },
	{ 0.500001f, 0, -0.866025f },
	{ 0.396204f, 0.609993f, -0.686244f },
	{ -0.499995f, 0, -0.866028f },
	{ -0.396198f, 0.609997f, -0.686244f },
	{ -1, 0, 0.000003f },
	{ -0.7924089f, 0.609991f, 0.000003f },
	{ -0.499973f, 0, 0.8660409f },
	{ -0.396182f, 0.609994f, 0.686256f },
	{ 0.5000049f, 0, 0.8660229f },
	{ 0.396205f, 0.609998f, 0.6862389f },
	{ 1, 0, -0.00016f },
	{ 0.792403f, 0.609998f, -0.00012f },
	{ 0.500002f, 0, -0.866024f },
	{ 0.396205f, 0.609993f, -0.686243f },
	{ -0.50002f, 0, -0.8660139f },
	{ -0.39622f, 0.609992f, -0.686236f },
	{ -1, 0, 0.000013f },
	{ -0.792403f, 0.609998f, 0.000011f },
	{ -0.500002f, 0, 0.866024f },
	{ -0.396205f, 0.609993f, 0.686244f },
	{ 0.500021f, 0, 0.866013f },
	{ 0.39622f, 0.609992f, 0.686236f },
	{ 1, 0, -0.00015f },
	{ 0.792403f, 0.609998f, -0.00012f },
	{ 0.500002f, 0, -0.866024f },
	{ 0.396205f, 0.609993f, -0.686244f },
	{ -0.500021f, 0, -0.866013f },
	{ -0.39622f, 0.609992f, -0.686236f },
	{ -1, 0, 0.000015f },
	{ -0.792403f, 0.609998f, 0.000012f },
	{ -0.500002f, 0, 0.866024f },
	{ -0.396205f, 0.609993f, 0.686244f },
	{ 0.500021f, 0, 0.866013f },
	{ 0.39622f, 0.609992f, 0.686236f },
	{ 1, 0, 0.000001f },
	{ 0.792407f, 0.609993f, 0.000001f },
	{ 0.500003f, 0, -0.866024f },
	{ 0.396204f, 0.609996f, -0.686241f },
	{ -0.499988f, 0, -0.8660319f },
	{ -0.396193f, 0.609994f, -0.686249f },
	{ -1, 0, 0 },
	{ -0.792407f, 0.609993f, 0 },
	{ -0.5000049f, 0, 0.866022f },
	{ -0.396206f, 0.609997f, 0.6862389f },
	{ 0.499984f, 0, 0.866034f },
	{ 0.396191f, 0.609993f, 0.686251f },
	{ 1, 0, -0.00015f },
	{ 0.792403f, 0.609998f, -0.00012f },
	{ 0.500002f, 0, -0.866024f },
	{ 0.396205f, 0.609993f, -0.686244f },
	{ -0.500022f, 0, -0.866013f },
	{ -0.396221f, 0.609992f, -0.686235f },
	{ -1, 0, 0.000021f },
	{ -0.792403f, 0.609997f, 0.000016f },
	{ -0.500001f, 0, 0.866025f },
	{ -0.396203f, 0.609994f, 0.686243f },
	{ 0.5000179f, 0, 0.866015f },
	{ 0.396218f, 0.609991f, 0.686237f },
	{ 1, 0, -0.00014f },
	{ 0.792403f, 0.609998f, -0.00011f },
	{ 0.499999f, 0, -0.866026f },
	{ 0.396202f, 0.609993f, -0.686245f },
	{ -0.5000229f, 0, -0.866012f },
	{ -0.396222f, 0.609992f, -0.686234f },
	{ -1, 0, 0.00001f },
	{ -0.792403f, 0.6099989f, 0.000008f },
	{ -0.49999f, 0, 0.866031f },
	{ -0.396197f, 0.6099899f, 0.686251f },
	{ 0.500035f, 0, 0.8660049f },
	{ 0.39623f, 0.6099949f, 0.686228f },
	{ 1, 0, -0.00019f },
	{ 0.792403f, 0.609998f, -0.00015f },
	{ 0.500017f, 0, -0.866015f },
	{ 0.396216f, 0.609996f, -0.686235f },
	{ -0.5000049f, 0, -0.866022f },
	{ -0.396209f, 0.609989f, -0.686245f },
	{ -1, 0, 0.000008f },
	{ -0.792402f, 0.6099989f, 0.000006f },
	{ -0.5000179f, 0, 0.866015f },
	{ -0.396218f, 0.609993f, 0.686236f },
	{ 0.5000139f, 0, 0.866017f },
	{ 0.396215f, 0.6099899f, 0.68624f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, -0.00001f },
	{ -1, 0, -0.00001f },
	{ -1, 0, -0.00001f },
	{ -1, 0, -0.00001f },
	{ -1, 0, -0.00001f },
	{ -1, 0, -0.00001f },
	{ -1, 0, -0.00001f },
	{ -1, 0, -0.00001f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachCHAO_000459BC = { vertexCHAO_00044C9C, normalCHAO_0004532C, LengthOfArray<Sint32>(vertexCHAO_00044C9C), meshlistCHAO_00044BC4, matlistCHAO_000445D4, LengthOfArray<Uint16>(meshlistCHAO_00044BC4), LengthOfArray<Uint16>(matlistCHAO_000445D4), { 0.458287f, 5.965456f, -0.070112f }, 41.27209f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectCHAO_000459E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_000459BC, 181.6474f, 59.8748f, -38.82487f, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Number plate 2
extern "C" __declspec(dllexport) NJS_MATERIAL matlistCHAO_00043190[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_00043244[] = {
	6, 4, 3, 2, 1, 0, 11,
	0x8000u | 10, 6, 4, 5, 3, 7, 1, 9, 11, 10, 0,
	6, 10, 9, 8, 7, 6, 5,
	0x8000u | 6, 17, 15, 19, 13, 21, 23,
	14, 12, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 23,
	0x8000u | 6, 29, 27, 31, 25, 33, 35,
	14, 28, 27, 26, 25, 24, 35, 34, 33, 32, 31, 30, 29, 28, 27,
	14, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 36, 37, 38,
	0x8000u | 6, 41, 39, 43, 37, 45, 47,
	14, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 48, 49, 50,
	0x8000u | 6, 53, 51, 55, 49, 57, 59,
	14, 62, 61, 60, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61,
	0x8000u | 6, 65, 63, 67, 61, 69, 71,
	0x8000u | 6, 77, 75, 79, 73, 81, 83,
	14, 78, 77, 76, 75, 74, 73, 72, 83, 82, 81, 80, 79, 78, 77,
	14, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 84, 85, 86,
	0x8000u | 6, 89, 87, 91, 85, 93, 95,
	0x8000u | 6, 101, 99, 103, 97, 105, 107,
	14, 102, 101, 100, 99, 98, 97, 96, 107, 106, 105, 104, 103, 102, 101
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_000433D6[] = {
	4, 111, 110, 109, 108
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_000433E0[] = {
	4, 115, 114, 113, 112
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_000433EA[] = {
	4, 119, 118, 117, 116
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_000433F4[] = {
	4, 123, 122, 121, 120
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_000433FE[] = {
	4, 127, 126, 125, 124
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_00043408[] = {
	4, 131, 130, 129, 128
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_00043412[] = {
	4, 135, 134, 133, 132
};

extern "C" __declspec(dllexport) Sint16 polyCHAO_0004341C[] = {
	4, 139, 138, 137, 136
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00043428[] = {
	{ 50, 251 },
	{ 48, -510 },
	{ 48, 251 },
	{ 46, -510 },
	{ 46, 251 },
	{ 47, -510 },
	{ 51, 251 },
	{ 50, 251 },
	{ 50, -510 },
	{ 48, -510 },
	{ 51, -510 },
	{ 46, -510 },
	{ 50, -510 },
	{ 47, -510 },
	{ 47, 251 },
	{ 46, 251 },
	{ 47, 251 },
	{ 50, -510 },
	{ 50, 251 },
	{ 51, -510 },
	{ 51, 251 },
	{ 50, -510 },
	{ 271, 255 },
	{ 413, 255 },
	{ 198, 255 },
	{ 481, 255 },
	{ 266, 255 },
	{ 408, 255 },
	{ 481, 251 },
	{ 408, -510 },
	{ 408, 251 },
	{ 266, -510 },
	{ 266, 251 },
	{ 198, -510 },
	{ 198, 251 },
	{ 271, -510 },
	{ 271, 251 },
	{ 413, -510 },
	{ 413, 251 },
	{ 481, -510 },
	{ 481, 251 },
	{ 408, -510 },
	{ 243, 255 },
	{ 384, 255 },
	{ 169, 255 },
	{ 453, 255 },
	{ 238, 255 },
	{ 380, 255 },
	{ 243, 251 },
	{ 384, -510 },
	{ 384, 251 },
	{ 453, -510 },
	{ 453, 251 },
	{ 380, -510 },
	{ 380, 251 },
	{ 238, -510 },
	{ 238, 251 },
	{ 169, -510 },
	{ 169, 251 },
	{ 243, -510 },
	{ 243, 251 },
	{ 384, -510 },
	{ 424, -510 },
	{ 356, 251 },
	{ 356, -510 },
	{ 214, 251 },
	{ 214, -510 },
	{ 141, 251 },
	{ 141, -510 },
	{ 210, 251 },
	{ 210, -510 },
	{ 351, 251 },
	{ 351, -510 },
	{ 424, 251 },
	{ 424, -510 },
	{ 356, 251 },
	{ 214, 255 },
	{ 356, 255 },
	{ 141, 255 },
	{ 424, 255 },
	{ 210, 255 },
	{ 351, 255 },
	{ 510, -510 },
	{ 386, 255 },
	{ 386, -510 },
	{ 131, 255 },
	{ 131, -510 },
	{ 0, 255 },
	{ 0, -510 },
	{ 123, 255 },
	{ 123, -510 },
	{ 378, 255 },
	{ 378, -510 },
	{ 510, 255 },
	{ 510, -510 },
	{ 386, 255 },
	{ 131, 255 },
	{ 386, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 123, 255 },
	{ 378, 255 },
	{ 299, 251 },
	{ 368, -510 },
	{ 368, 251 },
	{ 295, -510 },
	{ 295, 251 },
	{ 153, -510 },
	{ 153, 251 },
	{ 85, -510 },
	{ 85, 251 },
	{ 158, -510 },
	{ 158, 251 },
	{ 299, -510 },
	{ 299, 251 },
	{ 368, -510 },
	{ 158, 255 },
	{ 299, 255 },
	{ 85, 255 },
	{ 368, 255 },
	{ 153, 255 },
	{ 295, 255 },
	{ 129, 255 },
	{ 271, 255 },
	{ 56, 255 },
	{ 339, 255 },
	{ 125, 255 },
	{ 266, 255 },
	{ 56, 251 },
	{ 129, -510 },
	{ 129, 251 },
	{ 271, -510 },
	{ 271, 251 },
	{ 339, -510 },
	{ 339, 251 },
	{ 266, -510 },
	{ 266, 251 },
	{ 125, -510 },
	{ 125, 251 },
	{ 56, -510 },
	{ 56, 251 },
	{ 129, -510 },
	{ 311, -510 },
	{ 243, 251 },
	{ 243, -510 },
	{ 101, 251 },
	{ 101, -510 },
	{ 28, 251 },
	{ 28, -510 },
	{ 96, 251 },
	{ 96, -510 },
	{ 238, 251 },
	{ 238, -510 },
	{ 311, 251 },
	{ 311, -510 },
	{ 243, 251 },
	{ 101, 255 },
	{ 243, 255 },
	{ 28, 255 },
	{ 311, 255 },
	{ 96, 255 },
	{ 238, 255 },
	{ 73, 255 },
	{ 214, 255 },
	{ 0, 255 },
	{ 283, 255 },
	{ 68, 255 },
	{ 210, 255 },
	{ 0, 251 },
	{ 73, -510 },
	{ 73, 251 },
	{ 214, -510 },
	{ 214, 251 },
	{ 283, -510 },
	{ 283, 251 },
	{ 210, -510 },
	{ 210, 251 },
	{ 68, -510 },
	{ 68, 251 },
	{ 0, -510 },
	{ 0, 251 },
	{ 73, -510 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00043700[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00043710[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00043720[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00043730[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00043740[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00043750[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00043760[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uvCHAO_00043770[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlistCHAO_00043780[] = {
	{ NJD_MESHSET_TRIMESH | 0, 19, polyCHAO_00043244, NULL, NULL, NULL, uvCHAO_00043428, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polyCHAO_000433D6, NULL, NULL, NULL, uvCHAO_00043700, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polyCHAO_000433E0, NULL, NULL, NULL, uvCHAO_00043710, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polyCHAO_000433EA, NULL, NULL, NULL, uvCHAO_00043720, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polyCHAO_000433F4, NULL, NULL, NULL, uvCHAO_00043730, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, polyCHAO_000433FE, NULL, NULL, NULL, uvCHAO_00043740, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, polyCHAO_00043408, NULL, NULL, NULL, uvCHAO_00043750, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, polyCHAO_00043412, NULL, NULL, NULL, uvCHAO_00043760, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, polyCHAO_0004341C, NULL, NULL, NULL, uvCHAO_00043770, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertexCHAO_00043858[] = {
	{ 1.107194f, 0.066792f, -19.6162f },
	{ 1.107194f, 5.811086f, -19.6162f },
	{ 0.870729f, 0.066792f, -20.04535f },
	{ 0.870729f, 5.811086f, -20.04535f },
	{ 0.380825f, 0.066792f, -20.05516f },
	{ 0.380825f, 5.811086f, -20.05516f },
	{ 0.127378f, 0.066792f, -19.63578f },
	{ 0.127378f, 5.811086f, -19.63578f },
	{ 0.363842f, 0.066792f, -19.20664f },
	{ 0.363842f, 5.811086f, -19.20664f },
	{ 0.853743f, 0.066792f, -19.19682f },
	{ 0.853743f, 5.811086f, -19.19682f },
	{ 1.009145f, 0.066792f, -14.71714f },
	{ 1.009145f, 5.811086f, -14.71714f },
	{ 0.7726859f, 0.066792f, -15.14631f },
	{ 0.7726859f, 5.811086f, -15.14631f },
	{ 0.282778f, 0.066792f, -15.1561f },
	{ 0.282778f, 5.811086f, -15.1561f },
	{ 0.029365f, 0.066792f, -14.73673f },
	{ 0.029365f, 5.811086f, -14.73673f },
	{ 0.265824f, 0.066792f, -14.30757f },
	{ 0.265824f, 5.811086f, -14.30757f },
	{ 0.755732f, 0.066792f, -14.29777f },
	{ 0.755732f, 5.811086f, -14.29777f },
	{ 0.911159f, 0.066792f, -9.818172f },
	{ 0.911159f, 5.811086f, -9.818172f },
	{ 0.6747f, 0.066792f, -10.24734f },
	{ 0.6747f, 5.811086f, -10.24734f },
	{ 0.184793f, 0.066792f, -10.25713f },
	{ 0.184793f, 5.811086f, -10.25713f },
	{ -0.068651f, 0.066792f, -9.837777f },
	{ -0.068651f, 5.811086f, -9.837777f },
	{ 0.167837f, 0.066792f, -9.408597f },
	{ 0.167837f, 5.811086f, -9.408597f },
	{ 0.657715f, 0.066792f, -9.398814f },
	{ 0.657715f, 5.811086f, -9.398814f },
	{ 0.813179f, 0.066792f, -4.919123f },
	{ 0.813179f, 5.811086f, -4.919123f },
	{ 0.576719f, 0.066792f, -5.348291f },
	{ 0.576719f, 5.811086f, -5.348291f },
	{ 0.086812f, 0.066792f, -5.358088f },
	{ 0.086812f, 5.811086f, -5.358088f },
	{ -0.166602f, 0.066792f, -4.938721f },
	{ -0.166602f, 5.811086f, -4.938721f },
	{ 0.06985699f, 0.066792f, -4.50955f },
	{ 0.06985699f, 5.811086f, -4.50955f },
	{ 0.559765f, 0.066792f, -4.499755f },
	{ 0.559765f, 5.811086f, -4.499755f },
	{ 0.715198f, 0.066792f, -0.020075f },
	{ 0.715198f, 5.811086f, -0.020075f },
	{ 0.478739f, 0.066792f, -0.449244f },
	{ 0.478739f, 5.811086f, -0.449244f },
	{ -0.011168f, 0.066792f, -0.45904f },
	{ -0.011168f, 5.811086f, -0.45904f },
	{ -0.264582f, 0.066792f, -0.039672f },
	{ -0.264582f, 5.811086f, -0.039672f },
	{ -0.028123f, 0.066792f, 0.389497f },
	{ -0.028123f, 5.811086f, 0.389497f },
	{ 0.461784f, 0.066792f, 0.399293f },
	{ 0.461784f, 5.811086f, 0.399293f },
	{ 0.617232f, 0.066792f, 4.87893f },
	{ 0.617232f, 5.811086f, 4.87893f },
	{ 0.380768f, 0.066792f, 4.449774f },
	{ 0.380768f, 5.811086f, 4.449774f },
	{ -0.109135f, 0.066792f, 4.439967f },
	{ -0.109135f, 5.811086f, 4.439967f },
	{ -0.362582f, 0.066792f, 4.859339f },
	{ -0.362582f, 5.811086f, 4.859339f },
	{ -0.126118f, 0.066792f, 5.288493f },
	{ -0.126118f, 5.811086f, 5.288493f },
	{ 0.363784f, 0.066792f, 5.298305f },
	{ 0.363784f, 5.811086f, 5.298305f },
	{ 0.519232f, 0.066792f, 9.777939f },
	{ 0.519232f, 5.811086f, 9.777939f },
	{ 0.282773f, 0.066792f, 9.348769f },
	{ 0.282773f, 5.811086f, 9.348769f },
	{ -0.207134f, 0.066792f, 9.338974f },
	{ -0.207134f, 5.811086f, 9.338974f },
	{ -0.46055f, 0.066792f, 9.758347f },
	{ -0.46055f, 5.811086f, 9.758347f },
	{ -0.224089f, 0.066792f, 10.18751f },
	{ -0.224089f, 5.811086f, 10.18751f },
	{ 0.265818f, 0.066792f, 10.19731f },
	{ 0.265818f, 5.811086f, 10.19731f },
	{ 0.421217f, 0.066792f, 14.67699f },
	{ 0.421217f, 5.811086f, 14.67699f },
	{ 0.184759f, 0.066792f, 14.24783f },
	{ 0.184759f, 5.811086f, 14.24783f },
	{ -0.305149f, 0.066792f, 14.23803f },
	{ -0.305149f, 5.811086f, 14.23803f },
	{ -0.5585639f, 0.066792f, 14.6574f },
	{ -0.5585639f, 5.811086f, 14.6574f },
	{ -0.322106f, 0.066792f, 15.08657f },
	{ -0.322106f, 5.811086f, 15.08657f },
	{ 0.167806f, 0.066792f, 15.09635f },
	{ 0.167806f, 5.811086f, 15.09635f },
	{ 0.323234f, 0.066792f, 19.57605f },
	{ 0.323234f, 5.811086f, 19.57605f },
	{ 0.086776f, 0.066792f, 19.14688f },
	{ 0.086776f, 5.811086f, 19.14688f },
	{ -0.403128f, 0.066792f, 19.13707f },
	{ -0.403128f, 5.811086f, 19.13707f },
	{ -0.656539f, 0.066792f, 19.55643f },
	{ -0.656539f, 5.811086f, 19.55643f },
	{ -0.420082f, 0.066792f, 19.98561f },
	{ -0.420082f, 5.811086f, 19.98561f },
	{ 0.06982099f, 0.066792f, 19.99542f },
	{ 0.06982099f, 5.811086f, 19.99542f },
	{ -0.32418f, 0.037401f, 14.82875f },
	{ -0.415707f, 0.037401f, 19.40443f },
	{ -0.32418f, 5.790004f, 14.82875f },
	{ -0.415707f, 5.790004f, 19.40443f },
	{ -0.226812f, 0.037401f, 9.959122f },
	{ -0.318338f, 0.037401f, 14.5348f },
	{ -0.226812f, 5.790004f, 9.959122f },
	{ -0.318338f, 5.790004f, 14.5348f },
	{ -0.127656f, 0.037401f, 5.001279f },
	{ -0.219181f, 0.037401f, 9.57696f },
	{ -0.127656f, 5.790004f, 5.001279f },
	{ -0.219181f, 5.790004f, 9.57696f },
	{ -0.030445f, 0.037401f, 0.141446f },
	{ -0.121971f, 0.037401f, 4.717127f },
	{ -0.030445f, 5.790004f, 0.141446f },
	{ -0.121971f, 5.790004f, 4.717127f },
	{ 0.06740499f, 0.037401f, -4.747791f },
	{ -0.024126f, 0.037401f, -0.172093f },
	{ 0.06740499f, 5.790004f, -4.747791f },
	{ -0.024126f, 5.790004f, -0.172093f },
	{ 0.165594f, 0.037401f, -9.656592f },
	{ 0.074063f, 0.037401f, -5.080899f },
	{ 0.165594f, 5.790004f, -9.656592f },
	{ 0.074063f, 5.790004f, -5.080899f },
	{ 0.263947f, 0.037401f, -14.57521f },
	{ 0.172422f, 0.037401f, -9.999534f },
	{ 0.263947f, 5.790004f, -14.57521f },
	{ 0.172422f, 5.790004f, -9.999534f },
	{ 0.366039f, 0.037401f, -19.67997f },
	{ 0.274514f, 0.037401f, -15.10429f },
	{ 0.366039f, 5.790004f, -19.67997f },
	{ 0.274514f, 5.790004f, -15.10429f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normalCHAO_00043EE8[] = {
	{ 0.9998f, 0, 0.019998f },
	{ 0.792249f, 0.609992f, 0.015847f },
	{ 0.51722f, 0, -0.8558519f },
	{ 0.409847f, 0.609997f, -0.678181f },
	{ -0.482569f, 0, -0.8758579f },
	{ -0.382391f, 0.609994f, -0.694035f },
	{ -0.9998f, 0, -0.019995f },
	{ -0.792249f, 0.609992f, -0.015844f },
	{ -0.517224f, 0, 0.85585f },
	{ -0.40985f, 0.609998f, 0.678178f },
	{ 0.482562f, 0, 0.8758619f },
	{ 0.382385f, 0.609993f, 0.694039f },
	{ 0.9998f, 0, 0.019982f },
	{ 0.792245f, 0.609998f, 0.015833f },
	{ 0.517222f, 0, -0.855851f },
	{ 0.40985f, 0.609993f, -0.6781819f },
	{ -0.482603f, 0, -0.875839f },
	{ -0.382418f, 0.609991f, -0.694022f },
	{ -0.9998f, 0, -0.019979f },
	{ -0.792245f, 0.609998f, -0.015831f },
	{ -0.517217f, 0, 0.855854f },
	{ -0.409846f, 0.609993f, 0.678185f },
	{ 0.482605f, 0, 0.875838f },
	{ 0.38242f, 0.609992f, 0.694021f },
	{ 0.9998f, 0, 0.020016f },
	{ 0.792248f, 0.609993f, 0.015861f },
	{ 0.51722f, 0, -0.8558519f },
	{ 0.409849f, 0.609993f, -0.678183f },
	{ -0.482575f, 0, -0.875855f },
	{ -0.382394f, 0.609996f, -0.6940309f },
	{ -0.9998f, 0, -0.019996f },
	{ -0.79225f, 0.609991f, -0.015845f },
	{ -0.517193f, 0, 0.855869f },
	{ -0.409827f, 0.609994f, 0.678196f },
	{ 0.482586f, 0, 0.8758489f },
	{ 0.382402f, 0.609998f, 0.694025f },
	{ 0.9998f, 0, 0.019983f },
	{ 0.792245f, 0.609998f, 0.015835f },
	{ 0.517221f, 0, -0.8558519f },
	{ 0.409849f, 0.609993f, -0.678183f },
	{ -0.482601f, 0, -0.8758399f },
	{ -0.382417f, 0.609992f, -0.694023f },
	{ -0.9998f, 0, -0.019985f },
	{ -0.792244f, 0.609998f, -0.015836f },
	{ -0.517221f, 0, 0.8558519f },
	{ -0.40985f, 0.609993f, 0.678183f },
	{ 0.482602f, 0, 0.8758399f },
	{ 0.382417f, 0.609992f, 0.694022f },
	{ 0.9998f, 0, 0.019984f },
	{ 0.792245f, 0.609998f, 0.015835f },
	{ 0.517221f, 0, -0.8558519f },
	{ 0.40985f, 0.609993f, -0.678183f },
	{ -0.482602f, 0, -0.8758399f },
	{ -0.382417f, 0.609992f, -0.694022f },
	{ -0.9998f, 0, -0.019984f },
	{ -0.792245f, 0.609998f, -0.015835f },
	{ -0.517221f, 0, 0.8558519f },
	{ -0.409849f, 0.609993f, 0.678183f },
	{ 0.482602f, 0, 0.8758399f },
	{ 0.382417f, 0.609992f, 0.694022f },
	{ 0.9998f, 0, 0.02f },
	{ 0.792249f, 0.609993f, 0.015848f },
	{ 0.517222f, 0, -0.855851f },
	{ 0.409849f, 0.609996f, -0.67818f },
	{ -0.482568f, 0, -0.8758579f },
	{ -0.38239f, 0.609994f, -0.6940359f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.792249f, 0.609993f, -0.015848f },
	{ -0.517225f, 0, 0.85585f },
	{ -0.409851f, 0.609997f, 0.678178f },
	{ 0.482565f, 0, 0.87586f },
	{ 0.382388f, 0.609993f, 0.694037f },
	{ 0.9998f, 0, 0.019984f },
	{ 0.792245f, 0.609998f, 0.015835f },
	{ 0.517221f, 0, -0.8558519f },
	{ 0.40985f, 0.609993f, -0.678183f },
	{ -0.482603f, 0, -0.875839f },
	{ -0.382418f, 0.609992f, -0.694022f },
	{ -0.9998f, 0, -0.019977f },
	{ -0.792245f, 0.609998f, -0.01583f },
	{ -0.5172189f, 0, 0.855853f },
	{ -0.409848f, 0.609994f, 0.678183f },
	{ 0.482599f, 0, 0.875841f },
	{ 0.382415f, 0.609991f, 0.694024f },
	{ 0.9998f, 0, 0.019985f },
	{ 0.792245f, 0.609998f, 0.015836f },
	{ 0.517218f, 0, -0.855854f },
	{ 0.409847f, 0.609992f, -0.678185f },
	{ -0.482604f, 0, -0.875839f },
	{ -0.382419f, 0.609993f, -0.694021f },
	{ -0.9998f, 0, -0.019988f },
	{ -0.792244f, 0.609998f, -0.015839f },
	{ -0.517211f, 0, 0.855858f },
	{ -0.409842f, 0.6099899f, 0.67819f },
	{ 0.482614f, 0, 0.875833f },
	{ 0.382426f, 0.609994f, 0.694015f },
	{ 0.9998f, 0, 0.019979f },
	{ 0.792244f, 0.609998f, 0.015831f },
	{ 0.5172369f, 0, -0.855842f },
	{ 0.409861f, 0.609996f, -0.6781729f },
	{ -0.482585f, 0, -0.8758489f },
	{ -0.382405f, 0.609989f, -0.694032f },
	{ -0.9998f, 0, -0.019992f },
	{ -0.7922429f, 0.6099989f, -0.015841f },
	{ -0.517239f, 0, 0.855841f },
	{ -0.409863f, 0.609993f, 0.678174f },
	{ 0.482595f, 0, 0.8758439f },
	{ 0.382412f, 0.6099899f, 0.6940269f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.02f },
	{ -0.9998f, 0, -0.02f },
	{ -0.9998f, 0, -0.02f },
	{ -0.9998f, 0, -0.02f },
	{ -0.9998f, 0, -0.02f },
	{ -0.9998f, 0, -0.02f },
	{ -0.9998f, 0, -0.02f },
	{ -0.9998f, 0, -0.02f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019999f },
	{ -0.9998f, 0, -0.019998f },
	{ -0.9998f, 0, -0.019998f },
	{ -0.9998f, 0, -0.019998f },
	{ -0.9998f, 0, -0.019998f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attachCHAO_00044578 = { vertexCHAO_00043858, normalCHAO_00043EE8, LengthOfArray<Sint32>(vertexCHAO_00043858), meshlistCHAO_00043780, matlistCHAO_00043190, LengthOfArray<Uint16>(meshlistCHAO_00043780), LengthOfArray<Uint16>(matlistCHAO_00043190), { 0.225327f, 2.924243f, -0.029869f }, 20.18581f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT objectCHAO_000445A0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachCHAO_00044578, 290.3142f, 9.916108f, 230.7135f, 0, 0xBD0, 0, 1, 1, 1, NULL, NULL };

#pragma warning(pop)