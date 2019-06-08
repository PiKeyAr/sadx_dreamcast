#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

//Helicopter light

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0015901C[] = {
	{ { 0xB2FAFF7F }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC | 0x1 }
};

extern "C" __declspec(dllexport) Sint16 poly_00159030[] = {
	0x8000u | 5, 2, 1, 0, 8, 7,
	5, 2, 3, 0, 4, 5,
	4, 7, 0, 6, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159054[] = {
	{ 217, 253 },
	{ 255, 253 },
	{ 126, 29 },
	{ 217, 253 },
	{ 127, 253 },
	{ 217, 253 },
	{ 127, 253 },
	{ 126, 29 },
	{ 37, 253 },
	{ 0, 253 },
	{ 127, 253 },
	{ 126, 29 },
	{ 37, 253 },
	{ 0, 253 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0015908C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00159030, NULL, NULL, NULL, uv_00159054, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001590A4[] = {
	{ 0.004442f, -0.00005f, 0 },
	{ -106.4411f, -37.8519f, 0 },
	{ -106.4411f, -26.89189f, -26.45985f },
	{ -106.4411f, -0.432095f, -37.41986f },
	{ -106.4411f, 26.02775f, -26.45985f },
	{ -106.4411f, 36.98776f, 0 },
	{ -106.4411f, 26.02775f, 26.45985f },
	{ -106.4411f, -0.432095f, 37.41986f },
	{ -106.4411f, -26.89189f, 26.45985f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00159110[] = {
	{ 0.999993f, 0.003652f, 0 },
	{ 0.335046f, -0.942202f, 0 },
	{ 0.334052f, -0.666879f, -0.6660939f },
	{ 0.331647f, -0.0007879999f, -0.9434029f },
	{ 0.329233f, 0.66729f, -0.668079f },
	{ 0.32823f, 0.944598f, 0 },
	{ 0.329233f, 0.66729f, 0.668079f },
	{ 0.331647f, -0.0007879999f, 0.9434029f },
	{ 0.334052f, -0.666879f, 0.6660939f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015917C = { vertex_001590A4, normal_00159110, LengthOfArray<Sint32>(vertex_001590A4), meshlist_0015908C, matlist_0015901C, LengthOfArray<Uint16>(meshlist_0015908C), LengthOfArray<Uint16>(matlist_0015901C), { -53.21833f, -0.432072f, 0 }, 65.19829f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001591A4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015917C, 0, 0, 0, 0, 0, 0x4060, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001591D8_2[] = {
	{ { 0xB2FFFFFF }, { 0xFFFFFFFF }, 11, 114, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE },
};

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001591D8[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 0, NJD_CUSTOMFLAG_WHITE | NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 6, NJD_CUSTOMFLAG_WHITE | NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
};

extern "C" __declspec(dllexport) Sint16 poly_00159214[] = {
	0x8000u | 5, 2, 5, 0, 8, 11,
	0x8000u | 5, 11, 14, 0, 17, 2
};

extern "C" __declspec(dllexport) Sint16 poly_0015922C[] = {
	14, 6, 8, 9, 11, 12, 14, 15, 17, 18, 2, 3, 5, 6, 8
};

extern "C" __declspec(dllexport) Sint16 poly_0015924A[] = {
	14, 6, 4, 3, 1, 18, 16, 15, 13, 12, 10, 9, 7, 6, 4,
	3, 4, 7, 10,
	3, 10, 13, 16,
	3, 16, 1, 4,
	3, 4, 10, 16
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159288[] = {
	{ 255, 127 },
	{ 191, 255 },
	{ 127, 127 },
	{ 63, 255 },
	{ 0, 127 },
	{ 0, 127 },
	{ 63, 0 },
	{ 127, 127 },
	{ 191, 0 },
	{ 255, 127 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001592B0[] = {
	{ 191, 180 },
	{ 77, 223 },
	{ 63, 180 },
	{ 26, 223 },
	{ 0, 180 },
	{ 77, 223 },
	{ 63, 180 },
	{ 177, 223 },
	{ 191, 180 },
	{ 228, 223 },
	{ 255, 180 },
	{ 177, 223 },
	{ 191, 180 },
	{ 77, 223 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001592E8[] = {
	{ 191, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 191, 79 },
	{ 191, 254 },
	{ 63, 0 },
	{ 63, 254 },
	{ 0, 79 },
	{ 0, 254 },
	{ 63, 0 },
	{ 63, 254 },
	{ 191, 79 },
	{ 191, 254 },
	{ 255, 0 },
	{ 255, 0 },
	{ 191, 79 },
	{ 63, 0 },
	{ 63, 0 },
	{ 0, 79 },
	{ 63, 0 },
	{ 63, 0 },
	{ 191, 79 },
	{ 255, 0 },
	{ 255, 255 },
	{ 63, 255 },
	{ 63, 255 }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00159398[] = {
	{ 0, -2.703429f, 0 },
	{ 1.546301f, 0.976781f, 2.621286f },
	{ 2.443155f, -2.128659f, 0 },
	{ 3.0926f, -1.32322f, 0 },
	{ 3.0926f, 2.012167f, 0 },
	{ 1.221577f, -2.128659f, -2.070816f },
	{ 1.5463f, -1.32322f, -2.621286f },
	{ 1.5463f, 0.976781f, -2.621286f },
	{ -1.221577f, -2.128659f, -2.070816f },
	{ -1.5463f, -1.32322f, -2.621286f },
	{ -1.5463f, 2.012167f, -2.621286f },
	{ -2.443155f, -2.128659f, 0 },
	{ -3.0926f, -1.32322f, 0 },
	{ -3.0926f, 0.976781f, 0 },
	{ -1.221577f, -2.128659f, 2.070816f },
	{ -1.5463f, -1.32322f, 2.621286f },
	{ -1.5463f, 2.012167f, 2.621286f },
	{ 1.221578f, -2.128659f, 2.070816f },
	{ 1.546301f, -1.32322f, 2.621286f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015947C[] = {
	{ 0, -1, 0 },
	{ 0.465442f, 0.342636f, 0.816067f },
	{ 0.601679f, -0.7987379f, 0 },
	{ 0.952942f, -0.303154f, 0 },
	{ 0.772626f, 0.634861f, 0 },
	{ 0.298458f, -0.796378f, -0.526028f },
	{ 0.473701f, -0.300648f, -0.827779f },
	{ 0.465442f, 0.342636f, -0.816067f },
	{ -0.298458f, -0.796378f, -0.526028f },
	{ -0.473702f, -0.300648f, -0.827779f },
	{ -0.38435f, 0.635985f, -0.669177f },
	{ -0.601679f, -0.7987379f, 0 },
	{ -0.952942f, -0.303154f, 0 },
	{ -0.939144f, 0.343524f, 0 },
	{ -0.298458f, -0.796378f, 0.526028f },
	{ -0.473701f, -0.300648f, 0.827779f },
	{ -0.38435f, 0.635985f, 0.6691779f },
	{ 0.298458f, -0.796378f, 0.526028f },
	{ 0.473702f, -0.300648f, 0.827779f }
};


extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00159350_2[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00159214, NULL, NULL, NULL, uv_00159288, NULL },
};
extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00159560_2 = { vertex_00159398, normal_0015947C, LengthOfArray<Sint32>(vertex_00159398), meshlist_00159350_2, matlist_001591D8_2, LengthOfArray<Uint16>(meshlist_00159350_2), LengthOfArray<Uint16>(matlist_001591D8_2), { 0, -0.345631f, 0 }, 4.054049f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00159588_2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00159560_2, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_001591A4, NULL };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00158EAC[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_SA_SRC | NJD_DA_INV_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00158EC0[] = {
	0x8000u | 5, 1, 2, 0, 3, 4,
	0x8000u | 5, 4, 5, 0, 6, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_00158ED8[] = {
	{ 252, 128 },
	{ 188, 229 },
	{ 127, 127 },
	{ 67, 229 },
	{ 6, 126 },
	{ 6, 126 },
	{ 62, 15 },
	{ 127, 127 },
	{ 190, 15 },
	{ 252, 128 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00158F00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00158EC0, NULL, NULL, NULL, uv_00158ED8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00158F18[] = {
	{ 0, -1.081385f, 0 },
	{ 2.443154f, -1.608952f, 0 },
	{ 1.221577f, -1.608952f, -2.070816f },
	{ -1.221578f, -1.608952f, -2.070816f },
	{ -2.443155f, -1.608952f, 0 },
	{ -1.221576f, -1.608952f, 2.070816f },
	{ 1.221577f, -1.608952f, 2.070816f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00158F6C[] = {
	{ 0, -1, 0 },
	{ -0.211072f, -0.977471f, 0 },
	{ -0.106858f, -0.976759f, 0.185806f },
	{ 0.106858f, -0.976759f, 0.185806f },
	{ 0.211072f, -0.977471f, 0 },
	{ 0.106858f, -0.976759f, -0.185806f },
	{ -0.106858f, -0.976759f, -0.185806f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00158FC0 = { vertex_00158F18, normal_00158F6C, LengthOfArray<Sint32>(vertex_00158F18), meshlist_00158F00, matlist_00158EAC, LengthOfArray<Uint16>(meshlist_00158F00), LengthOfArray<Uint16>(matlist_00158EAC), { 0, -1.345168f, 0 }, 3.202699f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00158FE8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00158FC0, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00159588_2, NULL };

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00159350[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0015922C, NULL, NULL, NULL, uv_001592B0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_0015924A, NULL, NULL, NULL, uv_001592E8, NULL },
	//{ NJD_MESHSET_TRIMESH | 2, 2, poly_00159214, NULL, NULL, NULL, uv_00159288, NULL },
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00159560 = { vertex_00159398, normal_0015947C, LengthOfArray<Sint32>(vertex_00159398), meshlist_00159350, matlist_001591D8, LengthOfArray<Uint16>(meshlist_00159350), LengthOfArray<Uint16>(matlist_001591D8), { 0, -0.345631f, 0 }, 4.054049f, NULL };


extern "C" __declspec(dllexport) NJS_OBJECT object_00159588 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00159560, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00158FE8, NULL };

#pragma warning(pop)