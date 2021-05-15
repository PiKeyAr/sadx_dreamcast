#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

// OLight1
NJS_MATERIAL matlist_001EF110[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
};

NJS_MATERIAL matlist_001EF110_1[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
};


NJS_MATERIAL matlist_001EF110_2[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 167, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE },
};

Sint16 poly_001EF160[] = {
	4, 2, 3, 1, 0,
	4, 6, 7, 5, 4,
	4, 10, 11, 9, 8
};

Sint16 poly_001EF17E[] = {
	0x8000u | 8, 29, 30, 41, 31, 43, 32, 40, 28
};

Sint16 poly_001EF190[] = {
	0x8000u | 18, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 12, 13
};

Sint16 poly_001EF1B6[] = {
	18, 39, 24, 38, 22, 37, 20, 42, 18, 36, 16, 35, 14, 34, 12, 33, 26, 39, 24
};

NJS_TEX uv_001EF1DC[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_TEX uv_001EF20C[] = {
	{ 28, 128 },
	{ 57, 48 },
	{ 57, 208 },
	{ 126, 15 },
	{ 126, 242 },
	{ 195, 48 },
	{ 195, 208 },
	{ 223, 128 }
};

NJS_TEX uv_001EF22C[] = {
	{ -211, 267 },
	{ -211, 0 },
	{ -18, 267 },
	{ -18, 0 },
	{ 173, 267 },
	{ 173, 0 },
	{ 362, 267 },
	{ 362, 0 },
	{ 552, 267 },
	{ 552, 0 },
	{ 743, 267 },
	{ 743, 0 },
	{ 936, 267 },
	{ 936, 0 },
	{ 1130, 267 },
	{ 1130, 0 },
	{ 1318, 267 },
	{ 1318, 0 }
};

NJS_TEX uv_001EF274[] = {
	{ 1529, 0 },
	{ 1785, 255 },
	{ 1785, 0 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 509, 255 },
	{ 509, 0 },
	{ 765, 255 },
	{ 764, 0 },
	{ 1020, 255 },
	{ 1019, 0 },
	{ 1275, 255 },
	{ 1274, 0 },
	{ 1530, 255 },
	{ 1529, 0 },
	{ 1785, 255 }
};

NJS_MESHSET_SADX meshlist_001EF2BC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001EF190, NULL, NULL, NULL, uv_001EF22C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_001EF1B6, NULL, NULL, NULL, uv_001EF274, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001EF17E, NULL, NULL, NULL, uv_001EF20C, NULL },
};

NJS_MESHSET_SADX meshlist_001EF2BC_1[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001EF17E, NULL, NULL, NULL, uv_001EF20C, NULL },
};

NJS_MESHSET_SADX meshlist_001EF2BC_2[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_001EF160, NULL, NULL, NULL, uv_001EF1DC, NULL },
};

NJS_VECTOR vertex_001EF31C[] = {
	{ -1.3f, -3.4f, 0 },
	{ -3.726003f, -17.15999f, 0 },
	{ 3.772003f, -17.15998f, 0 },
	{ 1.2f, -3.4f, 0 },
	{ -0.745649f, -3.4f, 1.064898f },
	{ -2.137148f, -17.15999f, 3.052163f },
	{ 2.163532f, -17.15998f, -3.089844f },
	{ 0.688292f, -3.4f, -0.982983f },
	{ -0.666292f, -3.4f, -1.116268f },
	{ -1.909699f, -17.15999f, -3.199399f },
	{ 1.933275f, -17.15998f, 3.238897f },
	{ 0.615039f, -3.4f, 1.030401f },
	{ 2.220001f, -3.900001f, 0 },
	{ 2.220001f, 0, 0 },
	{ 1.569777f, -3.900001f, -1.569777f },
	{ 1.569777f, 0, -1.569777f },
	{ 0, -3.900001f, -2.22f },
	{ 0, 0, -2.22f },
	{ -1.569777f, -3.900001f, -1.569777f },
	{ -1.569777f, 0, -1.569777f },
	{ -2.219999f, -3.900001f, 0 },
	{ -2.219999f, 0, 0 },
	{ -1.569777f, -3.900001f, 1.569777f },
	{ -1.569777f, 0, 1.569777f },
	{ 0, -3.900001f, 2.219999f },
	{ 0, 0, 2.219999f },
	{ 1.569777f, -3.900001f, 1.569777f },
	{ 1.569777f, 0, 1.569777f },
	{ 1.9092f, -2.225f, 0 },
	{ -1.909199f, -2.225f, 0 },
	{ -1.350008f, -2.225f, 1.350008f },
	{ 0, -2.225f, 1.909199f },
	{ 1.350008f, -2.225f, 1.350008f },
	{ 1.48f, -3.900001f, 0 },
	{ 1.046518f, -3.900001f, -1.046518f },
	{ 0, -3.900001f, -1.48f },
	{ -1.046518f, -3.900001f, -1.046518f },
	{ -1.046518f, -3.900001f, 1.046518f },
	{ 0, -3.900001f, 1.48f },
	{ 1.046518f, -3.900001f, 1.046518f },
	{ 1.350008f, -2.225f, -1.350008f },
	{ -1.350008f, -2.225f, -1.350008f },
	{ -1.48f, -3.900001f, 0 },
	{ 0, -2.225f, -1.909199f }
};

NJS_VECTOR normal_001EF52C[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.819152f, 0, 0.573576f },
	{ 0.819152f, 0, 0.573576f },
	{ 0.819152f, 0, 0.573576f },
	{ 0.819152f, 0, 0.573576f },
	{ -0.858668f, 0, 0.5125329f },
	{ -0.858668f, 0, 0.5125329f },
	{ -0.858668f, 0, 0.5125329f },
	{ -0.858668f, 0, 0.5125329f },
	{ 0.776382f, -0.630262f, 0 },
	{ 1, 0, 0 },
	{ 0.5489849f, -0.630263f, -0.5489849f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, -0.630262f, -0.776382f },
	{ 0, 0, -1 },
	{ -0.5489849f, -0.630263f, -0.5489849f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.776382f, -0.630262f, 0 },
	{ -1, 0, 0 },
	{ -0.5489849f, -0.630262f, 0.5489849f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, -0.630262f, 0.776382f },
	{ 0, 0, 1 },
	{ 0.5489849f, -0.630262f, 0.5489849f },
	{ 0.707106f, 0, 0.7071069f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 }
};

NJS_MODEL_SADX attach_001EF73C = {vertex_001EF31C, normal_001EF52C, LengthOfArray<Sint32>(vertex_001EF31C), meshlist_001EF2BC, matlist_001EF110, LengthOfArray<Uint16>(meshlist_001EF2BC), LengthOfArray<Uint16>(matlist_001EF110), { 0.023f, -8.579993f, 0.019749f }, 9.164018f, NULL};

NJS_MODEL_SADX attach_001EF73C_2 = {vertex_001EF31C, normal_001EF52C, LengthOfArray<Sint32>(vertex_001EF31C), meshlist_001EF2BC_2, matlist_001EF110_2, LengthOfArray<Uint16>(meshlist_001EF2BC_2), LengthOfArray<Uint16>(matlist_001EF110_2), { 0.023f, -8.579993f, 0.019749f }, 9.164018f, NULL};

NJS_MODEL_SADX attach_001EF73C_1 = {vertex_001EF31C, normal_001EF52C, LengthOfArray<Sint32>(vertex_001EF31C), meshlist_001EF2BC_1, matlist_001EF110_1, LengthOfArray<Uint16>(meshlist_001EF2BC_1), LengthOfArray<Uint16>(matlist_001EF110_1), { 0.023f, -8.579993f, 0.019749f }, 9.164018f, NULL};

extern "C" __declspec(dllexport) NJS_OBJECT object_001EF764_2 = {NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001EF73C_2, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL};

extern "C" __declspec(dllexport) NJS_OBJECT object_001EF764_1 = {NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001EF73C_1, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_001EF764_2, NULL};

extern "C" __declspec(dllexport) NJS_OBJECT object_001EF764 = {NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001EF73C, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_001EF764_1, NULL};

#pragma warning(pop)