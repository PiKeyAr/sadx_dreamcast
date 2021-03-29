#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

enum FROG1TexName
{
	FROG1TexName_ff_07,
	FROG1TexName_ff_08,
	FROG1TexName_ff_09,
	FROG1TexName_ff_01,
	FROG1TexName_ff_03,
	FROG1TexName_ff_05,
	FROG1TexName_ff_06
};

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC8F0C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -1.721398f, -1.500935f, -3.194073f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC8F40 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -1.723279f, -1.510409f, 3.18457f, 0, 0, 0, 1, 1, 1, NULL, &object_02CC8F0C };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC8F74 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -2.659199f, -1.438447f, -1.073165f, 0, 0, 0, 1, 1, 1, NULL, &object_02CC8F40 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC8FA8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -2.659199f, -1.438447f, 1.073165f, 0, 0, 0, 1, 1, 1, NULL, &object_02CC8F74 };

NJS_MATERIAL matlist_02CC8FDC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CC8FF0[] = {
	4, 2, 0,
	4, 1, 2,
	3, 4, 0,
	4, 3, 1,
	2, 3, 0,
	3, 2, 1
};

NJS_TEX uv_02CC9018[] = {
	{ 99, 169 },
{ 18, 169 },
{ 0, 254 },
{ 99, 169 },
{ 65, 3 },
{ 18, 169 },
{ 251, 169 },
{ 99, 169 },
{ 0, 254 },
{ 99, 169 },
{ 251, 169 },
{ 65, 3 },
{ 18, 169 },
{ 251, 169 },
{ 0, 254 },
{ 251, 169 },
{ 18, 169 },
{ 65, 3 }
};

NJS_MESHSET_SADX meshlist_02CC9060[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CC8FF0, NULL, NULL, NULL, uv_02CC9018, NULL }
};

NJS_VECTOR vertex_02CC907C[] = {
	{ 0.051374f, -1.624505f, -0.122164f },
{ 0.042237f, -0.106518f, -0.02127f },
{ 0.219462f, -1.105053f, -0.093663f },
{ 0.126472f, -1.108525f, 0.263313f },
{ -0.178488f, -1.10833f, 0.030635f }
};

NJS_VECTOR normal_02CC90B8[] = {
	{ -0.009961f, -0.945802f, -0.324591f },
{ -0.013527f, 0.996224f, -0.085757f },
{ 0.745892f, -0.015902f, -0.665877f },
{ 0.307463f, -0.148393f, 0.939918f },
{ -0.992535f, -0.087432f, -0.085031f }
};

NJS_MODEL_SADX attach_02CC90F4 = { vertex_02CC907C, normal_02CC90B8, LengthOfArray<Sint32>(vertex_02CC907C), meshlist_02CC9060, matlist_02CC8FDC, LengthOfArray<Uint16>(meshlist_02CC9060), LengthOfArray<Uint16>(matlist_02CC8FDC),{ 0.020487f, -0.865512f, 0.070575f }, 0.759805f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9120 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CC90F4, -0.125628f, 0.05868f, 0.132846f, 0xFFFFFFE5, 0x1BB6, 0x3EF0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CC9154[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CC9168[] = {
	3, 7, 0,
	8, 1, 9,
	7, 6, 0,
	4, 3, 9,
	4, 1, 8,
	0, 6, 2,
	0, 2, 5,
	5, 3, 0,
	9, 1, 4,
	8, 5, 4
};

Sint16 poly_02CC91A4[] = {
	3, 4, 7, 6,
	4, 5, 6, 2,
	9, 3, 8, 5
};

NJS_TEX uv_02CC91C0[] = {
	{ 121, 126 },
{ 251, 255 },
{ 109, 176 },
{ 46, 55 },
{ 105, 3 },
{ 155, 55 },
{ 251, 255 },
{ 139, 115 },
{ 109, 176 },
{ 139, 115 },
{ 121, 126 },
{ 155, 55 },
{ 139, 115 },
{ 105, 3 },
{ 46, 55 },
{ 109, 176 },
{ 139, 115 },
{ 0, 254 },
{ 109, 176 },
{ 0, 254 },
{ 71, 126 },
{ 71, 126 },
{ 121, 126 },
{ 109, 176 },
{ 155, 55 },
{ 105, 3 },
{ 139, 115 },
{ 46, 55 },
{ 71, 126 },
{ 139, 115 }
};

NJS_TEX uv_02CC9238[] = {
	{ 121, 126 },
{ 139, 115 },
{ 251, 255 },
{ 139, 115 },
{ 139, 115 },
{ 71, 126 },
{ 139, 115 },
{ 0, 254 },
{ 155, 55 },
{ 121, 126 },
{ 46, 55 },
{ 71, 126 }
};

NJS_MESHSET_SADX meshlist_02CC9268[] = {
	{ NJD_MESHSET_3 | 0, 10, poly_02CC9168, NULL, NULL, NULL, uv_02CC91C0, NULL },
{ NJD_MESHSET_4 | 0, 3, poly_02CC91A4, NULL, NULL, NULL, uv_02CC9238, NULL }
};

NJS_VECTOR vertex_02CC92A0[] = {
	{ 0.211622f, -1.601852f, -0.096711f },
{ 0.042134f, -0.085136f, -0.108841f },
{ -0.130982f, -2.289635f, -0.469736f },
{ 0.349782f, -1.164738f, -0.054533f },
{ -0.041338f, -1.064627f, 0.007335f },
{ 0.279834f, -1.164448f, -0.226093f },
{ -0.041338f, -1.064627f, 0.007335f },
{ 0.218762f, -2.291084f, 0.388061f },
{ 0.199778f, -0.538881f, -0.312149f },
{ 0.351601f, -0.53951f, 0.06022f }
};

NJS_VECTOR normal_02CC9318[] = {
	{ 0.570885f, -0.782768f, -0.247718f },
{ -0.275787f, 0.961186f, -0.007923f },
{ -0.272817f, -0.90049f, -0.338658f },
{ 0.999502f, 0.028393f, -0.01376f },
{ -0.887644f, -0.265608f, 0.376218f },
{ 0.422891f, -0.004562f, -0.906169f },
{ -0.826207f, -0.45371f, 0.33396f },
{ 0.638226f, -0.12126f, -0.760239f },
{ 0.154648f, 0.199441f, -0.96763f },
{ 0.714737f, 0.300976f, 0.63132f }
};

NJS_MODEL_SADX attach_02CC9390 = { vertex_02CC92A0, normal_02CC9318, LengthOfArray<Sint32>(vertex_02CC92A0), meshlist_02CC9268, matlist_02CC9154, LengthOfArray<Uint16>(meshlist_02CC9268), LengthOfArray<Uint16>(matlist_02CC9154),{ 0.11031f, -1.18811f, -0.040837f }, 1.07486f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC93BC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CC9390, -0.085538f, 0.018644f, 0.119972f, 0xFFFFFFE5, 0x1BB6, 0x3F89, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC93F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.451148f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CC93BC };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9424 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.498512f, 0, 0, 0x1872, 0, 0xFFFFA5EC, 1, 1, 1, &object_02CC93F0, &object_02CC9120 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9458 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0xFFFFEF7D, 0xFFFFFFB8, 0xFFFFE523, 1, 1, 1, &object_02CC9424, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC948C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -1.451924f, 0.065137f, 1.041546f, 0xFFFFFC2D, 0xFFFFE482, 0x5BD, 1, 1, 1, &object_02CC9458, NULL };

NJS_MATERIAL matlist_02CC94C0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CC94D4[] = {
	0, 2, 4,
	2, 1, 4,
	0, 4, 3,
	1, 3, 4,
	0, 3, 2,
	1, 2, 3
};

NJS_TEX uv_02CC94F8[] = {
	{ 251, 254 },
{ 232, 169 },
{ 151, 169 },
{ 232, 169 },
{ 185, 3 },
{ 151, 169 },
{ 251, 254 },
{ 151, 169 },
{ 0, 169 },
{ 185, 3 },
{ 0, 169 },
{ 151, 169 },
{ 251, 254 },
{ 0, 169 },
{ 232, 169 },
{ 185, 3 },
{ 232, 169 },
{ 0, 169 }
};

NJS_MESHSET_SADX meshlist_02CC9540[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CC94D4, NULL, NULL, NULL, uv_02CC94F8, NULL }
};

NJS_VECTOR vertex_02CC955C[] = {
	{ 0.051374f, -1.624505f, 0.122164f },
{ 0.042237f, -0.106518f, 0.02127f },
{ 0.219462f, -1.105053f, 0.093663f },
{ 0.126472f, -1.108525f, -0.263313f },
{ -0.178488f, -1.10833f, -0.030635f }
};

NJS_VECTOR normal_02CC9598[] = {
	{ -0.009961f, -0.945802f, 0.324591f },
{ -0.013527f, 0.996224f, 0.085757f },
{ 0.745892f, -0.015902f, 0.665877f },
{ 0.307463f, -0.148393f, -0.939918f },
{ -0.992535f, -0.087432f, 0.085031f }
};

NJS_MODEL_SADX attach_02CC95D4 = { vertex_02CC955C, normal_02CC9598, LengthOfArray<Sint32>(vertex_02CC955C), meshlist_02CC9540, matlist_02CC94C0, LengthOfArray<Uint16>(meshlist_02CC9540), LengthOfArray<Uint16>(matlist_02CC94C0),{ 0.020487f, -0.865512f, -0.070575f }, 0.759805f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9600 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CC95D4, -0.125628f, 0.05868f, -0.132846f, 0x1B, 0xFFFFE44A, 0x3EF0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CC9634[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CC9648[] = {
	0, 7, 3,
	9, 1, 8,
	0, 6, 7,
	9, 3, 4,
	8, 1, 4,
	2, 6, 0,
	5, 2, 0,
	0, 3, 5,
	4, 1, 9,
	4, 5, 8
};

Sint16 poly_02CC9684[] = {
	7, 6, 3, 4,
	6, 2, 4, 5,
	8, 5, 9, 3
};

NJS_TEX uv_02CC96A0[] = {
	{ 141, 176 },
{ 0, 255 },
{ 129, 126 },
{ 95, 55 },
{ 145, 3 },
{ 204, 55 },
{ 141, 176 },
{ 111, 115 },
{ 0, 255 },
{ 95, 55 },
{ 129, 126 },
{ 111, 115 },
{ 204, 55 },
{ 145, 3 },
{ 111, 115 },
{ 251, 254 },
{ 111, 115 },
{ 141, 176 },
{ 179, 126 },
{ 251, 254 },
{ 141, 176 },
{ 141, 176 },
{ 129, 126 },
{ 179, 126 },
{ 111, 115 },
{ 145, 3 },
{ 95, 55 },
{ 111, 115 },
{ 179, 126 },
{ 204, 55 }
};

NJS_TEX uv_02CC9718[] = {
	{ 0, 255 },
{ 111, 115 },
{ 129, 126 },
{ 111, 115 },
{ 111, 115 },
{ 251, 254 },
{ 111, 115 },
{ 179, 126 },
{ 204, 55 },
{ 179, 126 },
{ 95, 55 },
{ 129, 126 }
};

NJS_MESHSET_SADX meshlist_02CC9748[] = {
	{ NJD_MESHSET_3 | 0, 10, poly_02CC9648, NULL, NULL, NULL, uv_02CC96A0, NULL },
{ NJD_MESHSET_4 | 0, 3, poly_02CC9684, NULL, NULL, NULL, uv_02CC9718, NULL }
};

NJS_VECTOR vertex_02CC9780[] = {
	{ 0.211622f, -1.601852f, 0.096711f },
{ 0.042134f, -0.085136f, 0.108841f },
{ -0.130982f, -2.289635f, 0.469736f },
{ 0.349782f, -1.164738f, 0.054533f },
{ -0.041338f, -1.064627f, -0.007335f },
{ 0.279834f, -1.164448f, 0.226093f },
{ -0.041338f, -1.064627f, -0.007335f },
{ 0.218762f, -2.291084f, -0.388061f },
{ 0.199778f, -0.538881f, 0.312149f },
{ 0.351601f, -0.53951f, -0.06022f }
};

NJS_VECTOR normal_02CC97F8[] = {
	{ 0.570885f, -0.782768f, 0.247718f },
{ -0.275787f, 0.961186f, 0.007923f },
{ -0.272817f, -0.90049f, 0.338658f },
{ 0.999502f, 0.028393f, 0.01376f },
{ -0.887644f, -0.265608f, -0.376218f },
{ 0.422891f, -0.004562f, 0.906169f },
{ -0.826207f, -0.45371f, -0.33396f },
{ 0.638226f, -0.12126f, 0.760239f },
{ 0.154648f, 0.199441f, 0.96763f },
{ 0.714737f, 0.300976f, -0.63132f }
};

NJS_MODEL_SADX attach_02CC9870 = { vertex_02CC9780, normal_02CC97F8, LengthOfArray<Sint32>(vertex_02CC9780), meshlist_02CC9748, matlist_02CC9634, LengthOfArray<Uint16>(meshlist_02CC9748), LengthOfArray<Uint16>(matlist_02CC9634),{ 0.11031f, -1.18811f, 0.040837f }, 1.07486f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC989C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CC9870, -0.085538f, 0.018644f, -0.119972f, 0x1B, 0xFFFFE44A, 0x3F89, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC98D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.451148f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CC989C };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9904 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.498512f, 0, 0, 0xFFFFE85F, 0, 0xFFFFA5EC, 1, 1, 1, &object_02CC98D0, &object_02CC9600 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9938 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0x1083, 0x48, 0xFFFFE523, 1, 1, 1, &object_02CC9904, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC996C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -1.451924f, 0.065137f, -1.041546f, 0x3D3, 0x1B7E, 0x5BD, 1, 1, 1, &object_02CC9938, &object_02CC948C };

NJS_MATERIAL matlist_02CC99A0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CC99B4[] = {
	5, 2, 0,
	1, 2, 5,
	3, 4, 0,
	4, 3, 1,
	2, 3, 0,
	3, 2, 1,
	0, 4, 5,
	5, 4, 1
};

NJS_TEX uv_02CC99E8[] = {
	{ 0, 104 },
{ 108, 106 },
{ 115, 3 },
{ 107, 254 },
{ 108, 106 },
{ 0, 104 },
{ 251, 106 },
{ 105, 107 },
{ 115, 3 },
{ 105, 107 },
{ 251, 106 },
{ 107, 254 },
{ 108, 106 },
{ 251, 106 },
{ 115, 3 },
{ 251, 106 },
{ 108, 106 },
{ 107, 254 },
{ 115, 3 },
{ 105, 107 },
{ 0, 104 },
{ 0, 104 },
{ 105, 107 },
{ 107, 254 }
};

NJS_MESHSET_SADX meshlist_02CC9A48[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CC99B4, NULL, NULL, NULL, uv_02CC99E8, NULL }
};

NJS_VECTOR vertex_02CC9A68[] = {
	{ 0.006671f, 0.015107f, 0.001827f },
{ 0.008902f, -2.535252f, -0.016531f },
{ -0.345085f, -1.026273f, -0.013531f },
{ -0.034443f, -1.030066f, 0.304461f },
{ 0.372119f, -1.033098f, -0.020913f },
{ 0.03629f, -1.00759f, -0.256096f }
};

NJS_VECTOR normal_02CC9AB0[] = {
	{ -0.00022f, 0.999982f, -0.00607f },
{ 0.000594f, -0.999834f, -0.018223f },
{ -0.993752f, 0.04084f, -0.103872f },
{ -0.067506f, 0.032554f, 0.997188f },
{ 0.998742f, 0.038357f, -0.032298f },
{ 0.0286f, 0.049008f, -0.998389f }
};

NJS_MODEL_SADX attach_02CC9AF8 = { vertex_02CC9A68, normal_02CC9AB0, LengthOfArray<Sint32>(vertex_02CC9A68), meshlist_02CC9A48, matlist_02CC99A0, LengthOfArray<Uint16>(meshlist_02CC9A48), LengthOfArray<Uint16>(matlist_02CC99A0),{ 0.013517f, -1.260072f, 0.024182f }, 1.275208f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9B24 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CC9AF8, 0.009534f, -0.009495f, 0.001451f, 0xFFFFFFEC, 0xFFFFE242, 0x3FF0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CC9B58[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CC9B6C[] = {
	2, 5, 3,
	1, 4, 3,
	3, 4, 2,
	2, 4, 0,
	1, 2, 0,
	5, 2, 1,
	4, 1, 0,
	3, 5, 1
};

NJS_TEX uv_02CC9BA0[] = {
	{ 251, 120 },
{ 168, 254 },
{ 37, 211 },
{ 209, 121 },
{ 0, 90 },
{ 37, 211 },
{ 37, 211 },
{ 0, 90 },
{ 251, 120 },
{ 251, 120 },
{ 0, 90 },
{ 167, 3 },
{ 209, 121 },
{ 251, 120 },
{ 167, 3 },
{ 168, 254 },
{ 251, 120 },
{ 209, 121 },
{ 0, 90 },
{ 209, 121 },
{ 167, 3 },
{ 37, 211 },
{ 168, 254 },
{ 209, 121 }
};

NJS_MESHSET_SADX meshlist_02CC9C00[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CC9B6C, NULL, NULL, NULL, uv_02CC9BA0, NULL }
};

NJS_VECTOR vertex_02CC9C20[] = {
	{ 0.054948f, -0.004369f, 0.021657f },
{ 0.120943f, -1.407179f, 0.234645f },
{ 0.186027f, -1.398034f, -0.244152f },
{ -0.148431f, -2.487396f, -0.064259f },
{ -0.20796f, -1.032235f, -0.053899f },
{ 0.057273f, -3.001945f, 0.015528f }
};

NJS_VECTOR normal_02CC9C68[] = {
	{ 0.037153f, 0.998638f, 0.036639f },
{ 0.350213f, -0.002526f, 0.936667f },
{ 0.594012f, 0.022824f, -0.804132f },
{ -0.910943f, -0.321595f, -0.258378f },
{ -0.975065f, 0.160494f, -0.153264f },
{ 0.087005f, -0.994564f, 0.057206f }
};

NJS_MODEL_SADX attach_02CC9CB0 = { vertex_02CC9C20, normal_02CC9C68, LengthOfArray<Sint32>(vertex_02CC9C20), meshlist_02CC9C00, matlist_02CC9B58, LengthOfArray<Uint16>(meshlist_02CC9C00), LengthOfArray<Uint16>(matlist_02CC9B58),{ -0.010967f, -1.503157f, -0.004754f }, 1.481278f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9CDC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CC9CB0, -0.005175f, -0.025477f, -0.054118f, 0xFFFFFFEC, 0xFFFFE242, 0x3FF0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CC9D10[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_09, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CC9D38[] = {
	3, 1, 0,
	4, 3, 0,
	1, 2, 0,
	1, 3, 4,
	0, 2, 4,
	4, 2, 1
};

Sint16 poly_02CC9D5C[] = {
	7, 8, 5,
	8, 6, 5
};

NJS_TEX uv_02CC9D68[] = {
	{ 251, 248 },
{ 124, 3 },
{ 121, 58 },
{ 120, 120 },
{ 251, 248 },
{ 121, 58 },
{ 124, 3 },
{ 0, 255 },
{ 121, 58 },
{ 124, 3 },
{ 251, 248 },
{ 120, 120 },
{ 121, 58 },
{ 0, 255 },
{ 120, 120 },
{ 120, 120 },
{ 0, 255 },
{ 124, 3 }
};

NJS_TEX uv_02CC9DB0[] = {
	{ 0, 7 },
{ 72, 132 },
{ 247, 126 },
{ 72, 132 },
{ 11, 255 },
{ 247, 126 }
};

NJS_MESHSET_SADX meshlist_02CC9DC8[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CC9D38, NULL, NULL, NULL, uv_02CC9D68, NULL },
{ NJD_MESHSET_3 | 1, 2, poly_02CC9D5C, NULL, NULL, NULL, uv_02CC9DB0, NULL }
};

NJS_VECTOR vertex_02CC9E00[] = {
	{ -0.264966f, -0.474178f, -0.022535f },
{ 0.050115f, 0.005009f, 0.000004f },
{ -0.123845f, -2.214025f, -0.749918f },
{ 0.038229f, -2.159566f, 0.757453f },
{ -0.019264f, -1.027812f, -0.025861f },
{ -0.019264f, -1.027812f, -0.025861f },
{ 0.038229f, -2.159566f, 0.757453f },
{ -0.123845f, -2.214025f, -0.749918f },
{ -0.172262f, -1.863655f, 0.007913f }
};

NJS_VECTOR normal_02CC9E70[] = {
	{ -0.936692f, 0.348982f, -0.028632f },
{ 0.231117f, 0.972888f, 0.008615f },
{ -0.025027f, -0.91144f, -0.410671f },
{ 0.066367f, -0.894718f, 0.441674f },
{ 0.569088f, -0.821176f, -0.042543f },
{ -0.977973f, 0.183066f, 0.10028f },
{ -0.925382f, 0.182805f, 0.332041f },
{ -0.974675f, 0.172669f, -0.142102f },
{ -0.978415f, 0.182976f, 0.09604f }
};

NJS_MODEL_SADX attach_02CC9EDC = { vertex_02CC9E00, normal_02CC9E70, LengthOfArray<Sint32>(vertex_02CC9E00), meshlist_02CC9DC8, matlist_02CC9D10, LengthOfArray<Uint16>(meshlist_02CC9DC8), LengthOfArray<Uint16>(matlist_02CC9D10),{ -0.107426f, -1.104508f, 0.003768f }, 1.21636f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9F08 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CC9EDC, 0.002847f, -0.038992f, -0.03339f, 0xFFFFFFEC, 0xFFFFE242, 0x3FF0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9F3C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.896511f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CC9F08 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9F70 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.998877f, 0, 0, 0xFFFFE998, 0, 0xFFFF9429, 1, 1, 1, &object_02CC9F3C, &object_02CC9CDC };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9FA4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.54579f, 0, -0.00001f, 0, 0, 0x743C, 1, 1, 1, &object_02CC9F70, &object_02CC9B24 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CC9FD8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0xFFFFFBAB, 0x763, 0xFFFF79B2, 1, 1, 1, &object_02CC9FA4, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCA00C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.635742f, -0.509935f, 1.882038f, 0, 0x1DBE, 0, 1, 1, 1, &object_02CC9FD8, &object_02CC996C };

NJS_MATERIAL matlist_02CCA040[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCA054[] = {
	0, 2, 5,
	5, 2, 1,
	0, 4, 3,
	1, 3, 4,
	0, 3, 2,
	1, 2, 3,
	5, 4, 0,
	1, 4, 5
};

NJS_TEX uv_02CCA088[] = {
	{ 135, 3 },
{ 142, 106 },
{ 251, 104 },
{ 251, 104 },
{ 142, 106 },
{ 143, 254 },
{ 135, 3 },
{ 145, 107 },
{ 0, 106 },
{ 143, 254 },
{ 0, 106 },
{ 145, 107 },
{ 135, 3 },
{ 0, 106 },
{ 142, 106 },
{ 143, 254 },
{ 142, 106 },
{ 0, 106 },
{ 251, 104 },
{ 145, 107 },
{ 135, 3 },
{ 143, 254 },
{ 145, 107 },
{ 251, 104 }
};

NJS_MESHSET_SADX meshlist_02CCA0E8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CCA054, NULL, NULL, NULL, uv_02CCA088, NULL }
};

NJS_VECTOR vertex_02CCA108[] = {
	{ 0.006671f, 0.015107f, -0.001827f },
{ 0.008902f, -2.535252f, 0.016531f },
{ -0.345085f, -1.026273f, 0.013531f },
{ -0.034443f, -1.030066f, -0.304461f },
{ 0.372119f, -1.033098f, 0.020913f },
{ 0.03629f, -1.00759f, 0.256096f }
};

NJS_VECTOR normal_02CCA150[] = {
	{ -0.00022f, 0.999982f, 0.00607f },
{ 0.000594f, -0.999834f, 0.018223f },
{ -0.993752f, 0.04084f, 0.103872f },
{ -0.067506f, 0.032554f, -0.997188f },
{ 0.998742f, 0.038357f, 0.032298f },
{ 0.0286f, 0.049008f, 0.998389f }
};

NJS_MODEL_SADX attach_02CCA198 = { vertex_02CCA108, normal_02CCA150, LengthOfArray<Sint32>(vertex_02CCA108), meshlist_02CCA0E8, matlist_02CCA040, LengthOfArray<Uint16>(meshlist_02CCA0E8), LengthOfArray<Uint16>(matlist_02CCA040),{ 0.013517f, -1.260072f, -0.024182f }, 1.275208f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCA1C4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCA198, 0.009534f, -0.009495f, -0.001451f, 0x14, 0x1DBE, 0x3FF0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCA1F8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCA20C[] = {
	3, 5, 2,
	3, 4, 1,
	2, 4, 3,
	0, 4, 2,
	0, 2, 1,
	1, 2, 5,
	0, 1, 4,
	1, 5, 3
};

NJS_TEX uv_02CCA240[] = {
	{ 37, 211 },
{ 168, 254 },
{ 251, 120 },
{ 37, 211 },
{ 0, 90 },
{ 209, 121 },
{ 251, 120 },
{ 0, 90 },
{ 37, 211 },
{ 167, 3 },
{ 0, 90 },
{ 251, 120 },
{ 167, 3 },
{ 251, 120 },
{ 209, 121 },
{ 209, 121 },
{ 251, 120 },
{ 168, 254 },
{ 167, 3 },
{ 209, 121 },
{ 0, 90 },
{ 209, 121 },
{ 168, 254 },
{ 37, 211 }
};

NJS_MESHSET_SADX meshlist_02CCA2A0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CCA20C, NULL, NULL, NULL, uv_02CCA240, NULL }
};

NJS_VECTOR vertex_02CCA2C0[] = {
	{ 0.054948f, -0.004369f, -0.021657f },
{ 0.120943f, -1.407179f, -0.234645f },
{ 0.186027f, -1.398034f, 0.244152f },
{ -0.148431f, -2.487396f, 0.064259f },
{ -0.20796f, -1.032235f, 0.053899f },
{ 0.057273f, -3.001945f, -0.015528f }
};

NJS_VECTOR normal_02CCA308[] = {
	{ 0.037153f, 0.998638f, -0.036639f },
{ 0.350213f, -0.002526f, -0.936667f },
{ 0.594012f, 0.022824f, 0.804132f },
{ -0.910943f, -0.321595f, 0.258378f },
{ -0.975065f, 0.160494f, 0.153264f },
{ 0.087005f, -0.994564f, -0.057206f }
};

NJS_MODEL_SADX attach_02CCA350 = { vertex_02CCA2C0, normal_02CCA308, LengthOfArray<Sint32>(vertex_02CCA2C0), meshlist_02CCA2A0, matlist_02CCA1F8, LengthOfArray<Uint16>(meshlist_02CCA2A0), LengthOfArray<Uint16>(matlist_02CCA1F8),{ -0.010967f, -1.503157f, 0.004754f }, 1.479592f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCA37C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCA350, -0.005175f, -0.025477f, 0.054118f, 0x14, 0x1DBE, 0x3FF0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCA3B0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_09, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCA3D8[] = {
	0, 1, 3,
	0, 3, 4,
	0, 2, 1,
	4, 3, 1,
	4, 2, 0,
	1, 2, 4
};

Sint16 poly_02CCA3FC[] = {
	5, 8, 7,
	5, 6, 8
};

NJS_TEX uv_02CCA408[] = {
	{ 129, 58 },
{ 126, 3 },
{ 0, 248 },
{ 129, 58 },
{ 0, 248 },
{ 130, 120 },
{ 129, 58 },
{ 251, 255 },
{ 126, 3 },
{ 130, 120 },
{ 0, 248 },
{ 126, 3 },
{ 130, 120 },
{ 251, 255 },
{ 129, 58 },
{ 126, 3 },
{ 251, 255 },
{ 130, 120 }
};

NJS_TEX uv_02CCA450[] = {
	{ 247, 136 },
{ 72, 130 },
{ 0, 255 },
{ 247, 136 },
{ 11, 7 },
{ 72, 130 }
};

NJS_MESHSET_SADX meshlist_02CCA468[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CCA3D8, NULL, NULL, NULL, uv_02CCA408, NULL },
{ NJD_MESHSET_3 | 1, 2, poly_02CCA3FC, NULL, NULL, NULL, uv_02CCA450, NULL }
};

NJS_VECTOR vertex_02CCA4A0[] = {
	{ -0.264966f, -0.474178f, 0.022535f },
{ 0.050115f, 0.005009f, -0.00004f },
{ -0.123845f, -2.214025f, 0.749918f },
{ 0.038229f, -2.159566f, -0.757453f },
{ -0.019264f, -1.027812f, 0.025861f },
{ -0.019264f, -1.027812f, 0.025861f },
{ 0.038229f, -2.159566f, -0.757453f },
{ -0.123845f, -2.214025f, 0.749918f },
{ -0.172262f, -1.863655f, -0.007913f }
};

NJS_VECTOR normal_02CCA510[] = {
	{ -0.936692f, 0.348982f, 0.028632f },
{ 0.231117f, 0.972888f, -0.008615f },
{ -0.025027f, -0.91144f, 0.410671f },
{ 0.066367f, -0.894718f, -0.441674f },
{ 0.569088f, -0.821176f, 0.042543f },
{ -0.977973f, 0.183066f, -0.10028f },
{ -0.925382f, 0.182805f, -0.332041f },
{ -0.974675f, 0.172669f, 0.142102f },
{ -0.978415f, 0.182976f, -0.09604f }
};

NJS_MODEL_SADX attach_02CCA57C = { vertex_02CCA4A0, normal_02CCA510, LengthOfArray<Sint32>(vertex_02CCA4A0), meshlist_02CCA468, matlist_02CCA3B0, LengthOfArray<Uint16>(meshlist_02CCA468), LengthOfArray<Uint16>(matlist_02CCA3B0),{ -0.107426f, -1.104508f, -0.003768f }, 1.215052f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCA5A8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCA57C, 0.002847f, -0.038992f, 0.03339f, 0x14, 0x1DBE, 0x3FF0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCA5DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.89651f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CCA5A8 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCA610 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.998878f, 0, 0, 0x1600, 0, 0xFFFF944A, 1, 1, 1, &object_02CCA5DC, &object_02CCA37C };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCA644 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.545789f, 0, 0, 0, 0, 0x7458, 1, 1, 1, &object_02CCA610, &object_02CCA1C4 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCA678 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0x44C, 0xFFFFF8BB, 0x7966, 1, 1, 1, &object_02CCA644, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCA6AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.635742f, -0.509935f, -1.882038f, 0, 0xFFFFE242, 0, 1, 1, 1, &object_02CCA678, &object_02CCA00C };

NJS_MATERIAL matlist_02CCA6E0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_07, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCA6F4[] = {
	0, 1, 2, 3
};

NJS_TEX uv_02CCA6FC[] = {
	{ 0, 255 },
{ 0, 7 },
{ 247, 255 },
{ 247, 7 }
};

NJS_MESHSET_SADX meshlist_02CCA70C[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_02CCA6F4, NULL, NULL, NULL, uv_02CCA6FC, NULL }
};

NJS_VECTOR vertex_02CCA728[] = {
	{ -0.945878f, -0.323986f, -0.625f },
{ -0.945877f, -0.323986f, 0.625f },
{ 0.000165f, 0.000056f, -0.625f },
{ 0.000165f, 0.000056f, 0.625f }
};

NJS_VECTOR normal_02CCA758[] = {
	{ -0.324043f, 0.946042f, 0 },
{ -0.324043f, 0.946042f, 0 },
{ -0.324043f, 0.946042f, 0 },
{ -0.324043f, 0.946042f, 0 }
};

NJS_MODEL_SADX attach_02CCA788 = { vertex_02CCA728, normal_02CCA758, LengthOfArray<Sint32>(vertex_02CCA728), meshlist_02CCA70C, matlist_02CCA6E0, LengthOfArray<Uint16>(meshlist_02CCA70C), LengthOfArray<Uint16>(matlist_02CCA6E0),{ -0.472856f, -0.161965f, 0 }, 0.799128f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCA7B4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCA788, -0.927309f, 0.372009f, 0, 0, 0, 0xFFFFEEE4, 1, 1, 1, NULL, &object_02CCA6AC };

NJS_MATERIAL matlist_02CCA7E8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_05, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, FROG1TexName_ff_08, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCA850[] = {
	8, 5, 6,
	2, 3, 7,
	4, 5, 8,
	8, 7, 3,
	6, 1, 8,
	7, 1, 2,
	15, 14, 17,
	16, 12, 11,
	17, 14, 13,
	17, 13, 12,
	17, 10, 15,
	11, 10, 16,
	12, 16, 17,
	3, 4, 8
};

Sint16 poly_02CCA8A8[] = {
	3, 2, 0,
	2, 1, 0,
	4, 3, 0,
	5, 4, 0,
	6, 5, 0,
	1, 6, 0,
	9, 11, 12,
	9, 10, 11,
	9, 12, 13,
	9, 13, 14,
	9, 14, 15,
	9, 15, 10
};

Sint16 poly_02CCA8F0[] = {
	47, 45, 46,
	44, 45, 47,
	51, 37, 29,
	35, 30, 29,
	35, 36, 31,
	38, 39, 36,
	31, 30, 35,
	51, 50, 27,
	40, 38, 37,
	38, 40, 33,
	40, 28, 41,
	41, 33, 40,
	27, 28, 40,
	40, 37, 27,
	37, 38, 35,
	35, 29, 37,
	33, 39, 38,
	36, 35, 38,
	29, 49, 51,
	27, 37, 51
};

Sint16 poly_02CCA968[] = {
	44, 50, 45, 51,
	45, 51, 46, 49
};

Sint16 poly_02CCA978[] = {
	47, 46, 43,
	43, 44, 47,
	25, 48, 49,
	50, 48, 34,
	49, 29, 25,
	25, 20, 19,
	25, 26, 21,
	26, 31, 32,
	22, 32, 18,
	25, 30, 31,
	25, 19, 48,
	34, 27, 50,
	21, 24, 34,
	34, 28, 27,
	41, 28, 34,
	24, 21, 22,
	22, 18, 23,
	34, 20, 21,
	21, 20, 25,
	24, 22, 23,
	23, 41, 24,
	26, 32, 22,
	19, 20, 34,
	29, 30, 25,
	22, 21, 26,
	31, 26, 25,
	34, 24, 41,
	48, 19, 34
};

Sint16 poly_02CCAA20[] = {
	43, 48, 44, 50,
	46, 49, 43, 48
};

Sint16 poly_02CCAA30[] = {
	36, 39, 33,
	42, 31, 41,
	23, 18, 42,
	42, 18, 32,
	42, 41, 23,
	32, 31, 42
};

Sint16 poly_02CCAA54[] = {
	31, 36, 41, 33
};

NJS_TEX uv_02CCAA60[] = {
	{ 173, 122 },
{ 240, 79 },
{ 251, 205 },
{ 182, 158 },
{ 172, 32 },
{ 168, 154 },
{ 193, 3 },
{ 240, 79 },
{ 173, 122 },
{ 173, 122 },
{ 168, 154 },
{ 172, 32 },
{ 251, 205 },
{ 213, 255 },
{ 173, 122 },
{ 168, 154 },
{ 213, 255 },
{ 182, 158 },
{ 0, 205 },
{ 10, 79 },
{ 77, 122 },
{ 82, 154 },
{ 78, 32 },
{ 68, 158 },
{ 77, 122 },
{ 10, 79 },
{ 57, 3 },
{ 77, 122 },
{ 57, 3 },
{ 78, 32 },
{ 77, 122 },
{ 37, 255 },
{ 0, 205 },
{ 68, 158 },
{ 37, 255 },
{ 82, 154 },
{ 78, 32 },
{ 82, 154 },
{ 77, 122 },
{ 172, 32 },
{ 193, 3 },
{ 173, 122 }
};

NJS_TEX uv_02CCAB08[] = {
	{ 27, 57 },
{ 1, 165 },
{ 126, 114 },
{ 1, 165 },
{ 81, 256 },
{ 126, 114 },
{ 136, 16 },
{ 27, 57 },
{ 126, 114 },
{ 239, 83 },
{ 136, 16 },
{ 126, 114 },
{ 236, 204 },
{ 239, 83 },
{ 126, 114 },
{ 81, 256 },
{ 236, 204 },
{ 126, 114 },
{ 125, 115 },
{ 0, 165 },
{ 27, 57 },
{ 125, 115 },
{ 80, 255 },
{ 0, 165 },
{ 125, 115 },
{ 27, 57 },
{ 136, 15 },
{ 125, 115 },
{ 136, 15 },
{ 239, 83 },
{ 125, 115 },
{ 239, 83 },
{ 235, 205 },
{ 125, 115 },
{ 235, 205 },
{ 80, 255 }
};

NJS_TEX uv_02CCAB98[] = {
	{ 251, 129 },
{ 213, 129 },
{ 214, 194 },
{ 214, 64 },
{ 213, 129 },
{ 251, 129 },
{ 183, 129 },
{ 129, 129 },
{ 130, 255 },
{ 46, 213 },
{ 86, 254 },
{ 130, 255 },
{ 46, 213 },
{ 3, 190 },
{ 14, 227 },
{ 46, 129 },
{ 0, 129 },
{ 3, 190 },
{ 14, 227 },
{ 86, 254 },
{ 46, 213 },
{ 183, 129 },
{ 185, 16 },
{ 130, 3 },
{ 46, 45 },
{ 46, 129 },
{ 129, 129 },
{ 46, 129 },
{ 46, 45 },
{ 3, 68 },
{ 46, 45 },
{ 86, 4 },
{ 14, 31 },
{ 14, 31 },
{ 3, 68 },
{ 46, 45 },
{ 130, 3 },
{ 86, 4 },
{ 46, 45 },
{ 46, 45 },
{ 129, 129 },
{ 130, 3 },
{ 129, 129 },
{ 46, 129 },
{ 46, 213 },
{ 46, 213 },
{ 130, 255 },
{ 129, 129 },
{ 3, 68 },
{ 0, 129 },
{ 46, 129 },
{ 3, 190 },
{ 46, 213 },
{ 46, 129 },
{ 130, 255 },
{ 185, 242 },
{ 183, 129 },
{ 130, 3 },
{ 129, 129 },
{ 183, 129 }
};

NJS_TEX uv_02CCAC88[] = {
	{ 214, 64 },
{ 185, 16 },
{ 213, 129 },
{ 183, 129 },
{ 213, 129 },
{ 183, 129 },
{ 214, 194 },
{ 185, 242 }
};

NJS_TEX uv_02CCACA8[] = {
	{ 251, 125 },
{ 227, 164 },
{ 230, 125 },
{ 230, 125 },
{ 227, 94 },
{ 251, 125 },
{ 141, 197 },
{ 200, 125 },
{ 194, 207 },
{ 194, 51 },
{ 200, 125 },
{ 141, 61 },
{ 194, 207 },
{ 149, 255 },
{ 141, 197 },
{ 141, 197 },
{ 147, 125 },
{ 179, 125 },
{ 141, 197 },
{ 100, 175 },
{ 106, 129 },
{ 100, 175 },
{ 81, 242 },
{ 2, 190 },
{ 20, 125 },
{ 2, 190 },
{ 0, 125 },
{ 141, 197 },
{ 124, 245 },
{ 81, 242 },
{ 141, 197 },
{ 179, 125 },
{ 200, 125 },
{ 141, 61 },
{ 149, 3 },
{ 194, 51 },
{ 106, 125 },
{ 100, 83 },
{ 141, 61 },
{ 141, 61 },
{ 124, 13 },
{ 149, 3 },
{ 81, 16 },
{ 124, 13 },
{ 141, 61 },
{ 100, 83 },
{ 106, 125 },
{ 20, 125 },
{ 20, 125 },
{ 0, 125 },
{ 2, 68 },
{ 141, 61 },
{ 147, 125 },
{ 106, 125 },
{ 106, 125 },
{ 147, 125 },
{ 141, 197 },
{ 100, 83 },
{ 20, 125 },
{ 2, 68 },
{ 2, 68 },
{ 81, 16 },
{ 100, 83 },
{ 100, 175 },
{ 2, 190 },
{ 20, 125 },
{ 179, 125 },
{ 147, 125 },
{ 141, 61 },
{ 149, 255 },
{ 124, 245 },
{ 141, 197 },
{ 20, 125 },
{ 106, 125 },
{ 100, 175 },
{ 81, 242 },
{ 100, 175 },
{ 141, 197 },
{ 141, 61 },
{ 100, 83 },
{ 81, 16 },
{ 200, 125 },
{ 179, 125 },
{ 141, 61 }
};

NJS_TEX uv_02CCADF8[] = {
	{ 230, 125 },
{ 200, 125 },
{ 227, 94 },
{ 194, 51 },
{ 227, 164 },
{ 194, 207 },
{ 230, 125 },
{ 200, 125 }
};

NJS_TEX uv_02CCAE18[] = {
	{ 63, 104 },
{ 123, 100 },
{ 183, 104 },
{ 123, 72 },
{ 23, 113 },
{ 223, 113 },
{ 183, 104 },
{ 123, 72 },
{ 123, 72 },
{ 123, 72 },
{ 123, 72 },
{ 63, 104 },
{ 123, 72 },
{ 223, 113 },
{ 183, 104 },
{ 63, 104 },
{ 23, 113 },
{ 123, 72 }
};

NJS_TEX uv_02CCAE60[] = {
	{ 23, 113 },
{ 63, 104 },
{ 223, 113 },
{ 183, 104 }
};

NJS_MESHSET_SADX meshlist_02CCAE70[] = {
	{ NJD_MESHSET_3 | 0, 14, poly_02CCA850, NULL, NULL, NULL, uv_02CCAA60, NULL },
{ NJD_MESHSET_3 | 1, 12, poly_02CCA8A8, NULL, NULL, NULL, uv_02CCAB08, NULL },
{ NJD_MESHSET_3 | 2, 20, poly_02CCA8F0, NULL, NULL, NULL, uv_02CCAB98, NULL },
{ NJD_MESHSET_4 | 2, 2, poly_02CCA968, NULL, NULL, NULL, uv_02CCAC88, NULL },
{ NJD_MESHSET_3 | 3, 28, poly_02CCA978, NULL, NULL, NULL, uv_02CCACA8, NULL },
{ NJD_MESHSET_4 | 3, 2, poly_02CCAA20, NULL, NULL, NULL, uv_02CCADF8, NULL },
{ NJD_MESHSET_3 | 4, 6, poly_02CCAA30, NULL, NULL, NULL, uv_02CCAE18, NULL },
{ NJD_MESHSET_4 | 4, 1, poly_02CCAA54, NULL, NULL, NULL, uv_02CCAE60, NULL }
};

NJS_VECTOR vertex_02CCAF50[] = {
	{ -1.884634f, 1.225222f, 0.956686f },
{ -1.904534f, 0.605361f, 0.806363f },
{ -2.182782f, 0.977989f, 0.518892f },
{ -1.965659f, 1.460463f, 0.426102f },
{ -1.470289f, 1.57031f, 0.620784f },
{ -1.31085f, 1.279806f, 1.051393f },
{ -1.527973f, 0.797332f, 1.144182f },
{ -1.702015f, 0.991755f, 0.393202f },
{ -1.202544f, 1.116242f, 0.438081f },
{ -1.884634f, 1.225222f, -0.956686f },
{ -1.904534f, 0.605361f, -0.806363f },
{ -2.182782f, 0.977989f, -0.518892f },
{ -1.965659f, 1.460463f, -0.426102f },
{ -1.470289f, 1.57031f, -0.620784f },
{ -1.31085f, 1.279806f, -1.051393f },
{ -1.527973f, 0.797332f, -1.144182f },
{ -1.702015f, 0.991755f, -0.393201f },
{ -1.202544f, 1.116242f, -0.438081f },
{ -2.571571f, 0.857056f, 0 },
{ 1.295884f, 0.726292f, 0 },
{ 0.600179f, 1.412779f, 0 },
{ -0.288691f, 1.632111f, 0 },
{ -1.617887f, 1.422735f, 0 },
{ -2.010941f, 0.472168f, 0.919619f },
{ -0.413675f, 1.329847f, 0.692206f },
{ 0.479289f, 1.250867f, -1.224247f },
{ -0.413675f, 1.329848f, -0.692206f },
{ 0.636316f, -0.508688f, 1.89125f },
{ 0.057822f, 0.101134f, 1.802f },
{ 0.636316f, -0.508687f, -1.89125f },
{ 0.057822f, 0.101134f, -1.802f },
{ -0.814826f, 0.359697f, -1.53f },
{ -2.010941f, 0.472168f, -0.919619f },
{ -2.015151f, 0.468002f, 0.919619f },
{ 0.479289f, 1.250867f, 1.224247f },
{ -1.215809f, -0.101542f, -1.265792f },
{ -2.015151f, 0.468002f, -0.919619f },
{ -0.454354f, -1.103329f, 0 },
{ -1.782951f, -0.233107f, 0 },
{ -2.427083f, 0.52451f, 0 },
{ -1.215809f, -0.101542f, 1.265792f },
{ -0.814826f, 0.359697f, 1.53f },
{ -0.607897f, 0.860138f, 0 },
{ 2.386894f, -0.228997f, 0 },
{ 2.317187f, -0.97932f, 0.52874f },
{ 2.307851f, -1.079808f, 0 },
{ 2.317187f, -0.97932f, -0.52874f },
{ 2.825594f, -0.349404f, 0 },
{ 1.732681f, 0.261797f, 0 },
{ 1.6201f, -0.95001f, -1.17504f },
{ 1.6201f, -0.95001f, 1.17504f },
{ 1.58457f, -1.332466f, 0 }
};

NJS_VECTOR normal_02CCB1C0[] = {
	{ -0.574211f, 0.397659f, 0.715646f },
{ -0.46167f, -0.836071f, 0.296387f },
{ -0.915578f, -0.223941f, -0.334016f },
{ -0.521989f, 0.690855f, -0.500247f },
{ 0.285081f, 0.950808f, -0.121212f },
{ 0.600215f, 0.375316f, 0.706314f },
{ 0.251461f, -0.56422f, 0.786398f },
{ -0.089805f, -0.158987f, -0.983188f },
{ 0.862376f, 0.051535f, -0.503638f },
{ -0.574211f, 0.397659f, -0.715646f },
{ -0.46167f, -0.836071f, -0.296387f },
{ -0.915578f, -0.223941f, 0.334016f },
{ -0.521989f, 0.690855f, 0.500247f },
{ 0.285081f, 0.950808f, 0.121212f },
{ 0.600215f, 0.375316f, -0.706314f },
{ 0.251461f, -0.56422f, -0.786398f },
{ -0.089805f, -0.158987f, 0.983188f },
{ 0.862376f, 0.051535f, 0.503638f },
{ -0.998009f, -0.063066f, 0 },
{ 0.720928f, 0.69301f, 0 },
{ 0.491472f, 0.870893f, 0 },
{ -0.022699f, 0.999742f, 0 },
{ -0.378021f, 0.925797f, 0 },
{ -0.666441f, -0.474318f, 0.575221f },
{ -0.227682f, 0.824226f, 0.518471f },
{ 0.302373f, 0.737752f, -0.603566f },
{ -0.227682f, 0.824226f, -0.518471f },
{ 0.173238f, -0.365692f, 0.914471f },
{ -0.108826f, 0.166063f, 0.980092f },
{ 0.173238f, -0.365692f, -0.914471f },
{ -0.108826f, 0.166063f, -0.980092f },
{ -0.384771f, 0.290516f, -0.8761f },
{ -0.666441f, -0.474318f, -0.575221f },
{ -0.715648f, 0.420433f, 0.557749f },
{ 0.302373f, 0.737752f, 0.603566f },
{ -0.501007f, -0.534178f, -0.680915f },
{ -0.715648f, 0.420433f, -0.557749f },
{ -0.332328f, -0.943164f, 0 },
{ -0.656658f, -0.754189f, 0 },
{ -0.906577f, 0.42204f, 0 },
{ -0.501007f, -0.534178f, 0.680915f },
{ -0.384771f, 0.290516f, 0.876101f },
{ -0.773836f, -0.633386f, 0 },
{ 0.547748f, 0.836643f, 0 },
{ 0.693749f, -0.34912f, 0.629943f },
{ 0.56712f, -0.823635f, 0 },
{ 0.693749f, -0.349119f, -0.629943f },
{ 0.881985f, 0.471277f, 0 },
{ 0.796675f, 0.604408f, 0 },
{ 0.466313f, -0.467164f, -0.751206f },
{ 0.466313f, -0.467164f, 0.751205f },
{ 0.069174f, -0.997605f, 0 }
};

NJS_MODEL_SADX attach_02CCB430 = { vertex_02CCAF50, normal_02CCB1C0, LengthOfArray<Sint32>(vertex_02CCAF50), meshlist_02CCAE70, matlist_02CCA7E8, LengthOfArray<Uint16>(meshlist_02CCAE70), LengthOfArray<Uint16>(matlist_02CCA7E8),{ 0.127012f, 0.149822f, 0 }, 3.295327f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCB45C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_02CCB430, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02CCA7B4, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCB490 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0.048078f, 0, 0, 0, 0, 1, 1, 1, &object_02CCB45C, &object_02CC8FA8 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCB4C4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02CCB490, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCB4F8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02CCB4C4, NULL };

//FROG2
enum FROG2TexName
{
	FROG2TexName_ff_07,
	FROG2TexName_ff_08,
	FROG2TexName_ff_14,
	FROG2TexName_ff_10,
	FROG2TexName_ff_11,
	FROG2TexName_ff_12,
	FROG2TexName_ff_15
};

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCB58C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -1.94775f, -1.235089f, -0.322571f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCB5C0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -1.296937f, -1.296749f, -3.276174f, 0, 0, 0, 1, 1, 1, NULL, &object_02CCB58C };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCB5F4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -1.319626f, -1.313946f, 3.209754f, 0, 0, 0, 1, 1, 1, NULL, &object_02CCB5C0 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCB628 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -1.94775f, -1.228045f, 0.322571f, 0, 0, 0, 1, 1, 1, NULL, &object_02CCB5F4 };

NJS_MATERIAL matlist_02CCB65C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCB670[] = {
	0, 2, 4,
	2, 1, 4,
	0, 4, 3,
	1, 3, 4,
	0, 3, 2,
	1, 2, 3
};

NJS_TEX uv_02CCB698[] = {
	{ 66, 255 },
{ 0, 176 },
{ 251, 192 },
{ 0, 176 },
{ 246, 3 },
{ 251, 192 },
{ 66, 255 },
{ 251, 192 },
{ 58, 180 },
{ 246, 3 },
{ 58, 180 },
{ 251, 192 },
{ 66, 255 },
{ 58, 180 },
{ 0, 176 },
{ 246, 3 },
{ 0, 176 },
{ 58, 180 }
};

NJS_MESHSET_SADX meshlist_02CCB6E0[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CCB670, NULL, NULL, NULL, uv_02CCB698, NULL }
};

NJS_VECTOR vertex_02CCB6FC[] = {
	{ 0.030552f, -1.499545f, -0.018111f },
{ 0.042237f, -0.106518f, 0.02127f },
{ 0.219462f, -1.105053f, 0.093663f },
{ 0.126472f, -1.108524f, -0.263313f },
{ -0.178488f, -1.10833f, -0.030635f }
};

NJS_VECTOR normal_02CCB738[] = {
	{ -0.055241f, -0.992178f, 0.111941f },
{ -0.013526f, 0.996224f, 0.085756f },
{ 0.71476f, -0.135429f, 0.686132f },
{ 0.324216f, -0.127105f, -0.937405f },
{ -0.984592f, -0.117007f, 0.129955f }
};

NJS_MODEL_SADX attach_02CCB774 = { vertex_02CCB6FC, normal_02CCB738, LengthOfArray<Sint32>(vertex_02CCB6FC), meshlist_02CCB6E0, matlist_02CCB65C, LengthOfArray<Uint16>(meshlist_02CCB6E0), LengthOfArray<Uint16>(matlist_02CCB65C),{ 0.020487f, -0.803031f, -0.084825f }, 0.693549f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCB7A0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCB774, 0, 0, 0, 0x1B, 0xFFFFE44A, 0x3EF0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCB7D4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCB7E8[] = {
	0, 7, 3,
	9, 1, 8,
	0, 6, 7,
	9, 3, 4,
	8, 1, 4,
	2, 6, 0,
	5, 2, 0,
	0, 3, 5,
	4, 1, 9,
	4, 5, 8
};

Sint16 poly_02CCB824[] = {
	7, 6, 3, 4,
	6, 2, 4, 5,
	8, 5, 9, 3
};

NJS_TEX uv_02CCB840[] = {
	{ 105, 111 },
{ 89, 3 },
{ 152, 148 },
{ 225, 197 },
{ 251, 254 },
{ 186, 230 },
{ 105, 111 },
{ 168, 152 },
{ 89, 3 },
{ 225, 197 },
{ 152, 148 },
{ 168, 152 },
{ 186, 230 },
{ 251, 254 },
{ 168, 152 },
{ 0, 78 },
{ 168, 152 },
{ 105, 111 },
{ 134, 163 },
{ 0, 78 },
{ 105, 111 },
{ 105, 111 },
{ 152, 148 },
{ 134, 163 },
{ 168, 152 },
{ 251, 254 },
{ 225, 197 },
{ 168, 152 },
{ 134, 163 },
{ 186, 230 }
};

NJS_TEX uv_02CCB8B8[] = {
	{ 89, 3 },
{ 168, 152 },
{ 152, 148 },
{ 168, 152 },
{ 168, 152 },
{ 0, 78 },
{ 168, 152 },
{ 134, 163 },
{ 186, 230 },
{ 134, 163 },
{ 225, 197 },
{ 152, 148 }
};

NJS_MESHSET_SADX meshlist_02CCB8E8[] = {
	{ NJD_MESHSET_3 | 0, 10, poly_02CCB7E8, NULL, NULL, NULL, uv_02CCB840, NULL },
{ NJD_MESHSET_4 | 0, 3, poly_02CCB824, NULL, NULL, NULL, uv_02CCB8B8, NULL }
};

NJS_VECTOR vertex_02CCB920[] = {
	{ 0.211623f, -1.512524f, -0.010478f },
{ 0.000251f, -0.000464f, 0.001652f },
{ -0.130981f, -2.200304f, 0.362547f },
{ 0.349783f, -1.07541f, -0.052655f },
{ -0.041337f, -0.9753f, -0.114524f },
{ 0.279834f, -1.07512f, 0.118904f },
{ -0.041337f, -0.9753f, -0.114524f },
{ 0.218763f, -2.201753f, -0.49525f },
{ 0.199779f, -0.449555f, 0.204959f },
{ 0.351602f, -0.450184f, -0.167408f }
};

NJS_VECTOR normal_02CCB998[] = {
	{ 0.570884f, -0.782769f, 0.247719f },
{ -0.336124f, 0.941787f, 0.007608f },
{ -0.272814f, -0.900491f, 0.338656f },
{ 0.999502f, 0.028394f, 0.01376f },
{ -0.882948f, -0.280858f, -0.376193f },
{ 0.422891f, -0.004562f, 0.906169f },
{ -0.826207f, -0.45371f, -0.33396f },
{ 0.638226f, -0.121259f, 0.760239f },
{ 0.183242f, 0.203008f, 0.961878f },
{ 0.717831f, 0.314409f, -0.621181f }
};

NJS_MODEL_SADX attach_02CCBA10 = { vertex_02CCB920, normal_02CCB998, LengthOfArray<Sint32>(vertex_02CCB920), meshlist_02CCB8E8, matlist_02CCB7D4, LengthOfArray<Uint16>(meshlist_02CCB8E8), LengthOfArray<Uint16>(matlist_02CCB7D4),{ 0.11031f, -1.101108f, -0.066352f }, 1.119389f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCBA3C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCBA10, 0, 0, 0, 0x1B, 0xFFFFE44A, 0x3F89, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCBA70 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.451147f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CCBA3C };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCBAA4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.498511f, 0, 0, 0xFFFFD672, 0, 0xFFFF9F1E, 1, 1, 1, &object_02CCBA70, &object_02CCB7A0 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCBAD8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0x192, 0xFFFFFFC0, 0xFFFFEBCD, 1, 1, 1, &object_02CCBAA4, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCBB0C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -1.209298f, 0.2317f, -0.823476f, 0x3D3, 0x1B7E, 0x5BD, 1, 1, 1, &object_02CCBAD8, NULL };

NJS_MATERIAL matlist_02CCBB40[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCBB54[] = {
	5, 2, 0,
	1, 2, 5,
	3, 4, 0,
	4, 3, 1,
	2, 3, 0,
	3, 2, 1,
	0, 4, 5,
	5, 4, 1
};

NJS_TEX uv_02CCBB88[] = {
	{ 0, 5 },
{ 122, 128 },
{ 249, 5 },
{ 121, 128 },
{ 123, 128 },
{ 0, 5 },
{ 249, 254 },
{ 123, 129 },
{ 249, 3 },
{ 123, 129 },
{ 249, 254 },
{ 1, 254 },
{ 123, 128 },
{ 249, 254 },
{ 249, 3 },
{ 249, 254 },
{ 123, 128 },
{ 1, 254 },
{ 248, 5 },
{ 123, 128 },
{ 0, 5 },
{ 0, 5 },
{ 121, 130 },
{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_02CCBBE8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CCBB54, NULL, NULL, NULL, uv_02CCBB88, NULL }
};

NJS_VECTOR vertex_02CCBC08[] = {
	{ 0.006671f, 0.015107f, 0.001827f },
{ 0.008902f, -2.535252f, -0.016531f },
{ -0.345085f, -1.026273f, -0.013531f },
{ -0.034443f, -1.030066f, 0.304461f },
{ 0.372119f, -1.033098f, -0.020913f },
{ 0.03629f, -1.00759f, -0.256096f }
};

NJS_VECTOR normal_02CCBC50[] = {
	{ -0.00022f, 0.999982f, -0.00607f },
{ 0.000594f, -0.999834f, -0.018223f },
{ -0.993752f, 0.04084f, -0.103872f },
{ -0.067506f, 0.032554f, 0.997188f },
{ 0.998742f, 0.038357f, -0.032298f },
{ 0.0286f, 0.049008f, -0.998389f }
};

NJS_MODEL_SADX attach_02CCBC98 = { vertex_02CCBC08, normal_02CCBC50, LengthOfArray<Sint32>(vertex_02CCBC08), meshlist_02CCBBE8, matlist_02CCBB40, LengthOfArray<Uint16>(meshlist_02CCBBE8), LengthOfArray<Uint16>(matlist_02CCBB40),{ 0.013517f, -1.260072f, 0.024182f }, 1.185947f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCBCC4 = { NJD_EVAL_BREAK, &attach_02CCBC98, 0.009534f, -0.008831f, 0.001451f, 0xFFFFFFEC, 0xFFFFE242, 0x3FF0, 1, 0.93f, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCBCF8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCBD0C[] = {
	2, 5, 3,
	1, 4, 3,
	3, 4, 2,
	2, 4, 0,
	1, 2, 0,
	5, 2, 1,
	4, 1, 0,
	3, 5, 1
};

NJS_TEX uv_02CCBD40[] = {
	{ 0, 117 },
{ 3, 254 },
{ 15, 210 },
{ 238, 124 },
{ 141, 89 },
{ 15, 210 },
{ 15, 210 },
{ 141, 89 },
{ 0, 117 },
{ 0, 117 },
{ 141, 89 },
{ 251, 3 },
{ 238, 124 },
{ 0, 117 },
{ 251, 3 },
{ 3, 254 },
{ 0, 117 },
{ 238, 124 },
{ 141, 89 },
{ 238, 124 },
{ 251, 3 },
{ 15, 210 },
{ 3, 254 },
{ 238, 124 }
};

NJS_MESHSET_SADX meshlist_02CCBDA0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CCBD0C, NULL, NULL, NULL, uv_02CCBD40, NULL }
};

NJS_VECTOR vertex_02CCBDC0[] = {
	{ 0.054948f, -0.004369f, 0.021657f },
{ 0.120943f, -1.407179f, 0.234645f },
{ 0.186027f, -1.398034f, -0.244152f },
{ -0.148431f, -2.487396f, -0.064259f },
{ -0.20796f, -1.032235f, -0.053899f },
{ 0.057273f, -3.001945f, 0.015528f }
};

NJS_VECTOR normal_02CCBE08[] = {
	{ 0.037153f, 0.998638f, 0.036639f },
{ 0.350213f, -0.002526f, 0.936667f },
{ 0.594012f, 0.022824f, -0.804132f },
{ -0.910943f, -0.321595f, -0.258378f },
{ -0.975065f, 0.160494f, -0.153264f },
{ 0.087005f, -0.994564f, 0.057206f }
};

NJS_MODEL_SADX attach_02CCBE50 = { vertex_02CCBDC0, normal_02CCBE08, LengthOfArray<Sint32>(vertex_02CCBDC0), meshlist_02CCBDA0, matlist_02CCBCF8, LengthOfArray<Uint16>(meshlist_02CCBDA0), LengthOfArray<Uint16>(matlist_02CCBCF8),{ -0.010967f, -1.503157f, -0.004754f }, 1.251834f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCBE7C = { NJD_EVAL_BREAK, &attach_02CCBE50, -0.007659f, -0.021237f, -0.056557f, 0xFFFFFFEC, 0xFFFFE242, 0x3FF0, 1, 0.93f, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCBEB0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCBED8[] = {
	3, 1, 0,
	4, 3, 0,
	1, 2, 0,
	1, 3, 4,
	0, 2, 4,
	4, 2, 1
};

Sint16 poly_02CCBEFC[] = {
	7, 8, 5,
	8, 6, 5
};

NJS_TEX uv_02CCBF08[] = {
	{ 0, 253 },
{ 251, 3 },
{ 249, 127 },
{ 248, 254 },
{ 0, 253 },
{ 249, 127 },
{ 251, 3 },
{ 0, 254 },
{ 249, 127 },
{ 251, 3 },
{ 1, 254 },
{ 65, 59 },
{ 249, 127 },
{ 0, 254 },
{ 249, 254 },
{ 65, 59 },
{ 1, 252 },
{ 251, 3 }
};

NJS_TEX uv_02CCBF50[] = {
	{ 11, 7 },
{ 63, 132 },
{ 187, 126 },
{ 63, 132 },
{ 19, 255 },
{ 187, 126 }
};

NJS_MESHSET_SADX meshlist_02CCBF68[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CCBED8, NULL, NULL, NULL, uv_02CCBF08, NULL },
{ NJD_MESHSET_3 | 1, 2, poly_02CCBEFC, NULL, NULL, NULL, uv_02CCBF50, NULL }
};

NJS_VECTOR vertex_02CCBFA0[] = {
	{ -0.264966f, -0.474178f, -0.022535f },
{ 0.050115f, 0.005009f, 0.000004f },
{ -0.123845f, -2.214025f, -0.749918f },
{ 0.038229f, -2.159566f, 0.757453f },
{ -0.019264f, -1.027812f, -0.025861f },
{ -0.019264f, -1.027812f, -0.025861f },
{ 0.038229f, -2.159566f, 0.757453f },
{ -0.123845f, -2.214025f, -0.749918f },
{ -0.172262f, -1.863655f, 0.007913f }
};

NJS_VECTOR normal_02CCC010[] = {
	{ -0.936692f, 0.348982f, -0.028632f },
{ 0.231117f, 0.972888f, 0.008615f },
{ -0.025027f, -0.91144f, -0.410671f },
{ 0.066367f, -0.894718f, 0.441674f },
{ 0.569088f, -0.821176f, -0.042543f },
{ -0.977973f, 0.183066f, 0.10028f },
{ -0.925382f, 0.182805f, 0.332041f },
{ -0.974675f, 0.172669f, -0.142102f },
{ -0.978415f, 0.182976f, 0.09604f }
};

NJS_MODEL_SADX attach_02CCC07C = { vertex_02CCBFA0, normal_02CCC010, LengthOfArray<Sint32>(vertex_02CCBFA0), meshlist_02CCBF68, matlist_02CCBEB0, LengthOfArray<Uint16>(meshlist_02CCBF68), LengthOfArray<Uint16>(matlist_02CCBEB0),{ -0.107425f, -1.104508f, 0.003768f }, 1.234865f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC0A8 = { NJD_EVAL_BREAK, &attach_02CCC07C, 0.001308f, -0.035167f, -0.033955f, 0xFFFFFFEC, 0xFFFFE242, 0x3FF0, 1, 0.93f, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC0DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.693756f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CCC0A8 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC110 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.788955f, 0, 0, 0xFFFFE7F7, 0, 0xFFFFA1FB, 1, 1, 1, &object_02CCC0DC, &object_02CCBE7C };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC144 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.367584f, 0, -0.00001f, 0, 0, 0x735A, 1, 1, 1, &object_02CCC110, &object_02CCBCC4 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC178 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0xFFFFFF72, 0xFFFFFE80, 0xFFFF6D77, 1, 1, 1, &object_02CCC144, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC1AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.737783f, -0.235914f, 1.30777f, 0, 0x1DBE, 0, 1, 1, 1, &object_02CCC178, &object_02CCBB0C };

NJS_MATERIAL matlist_02CCC1E0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCC1F4[] = {
	0, 2, 5,
	5, 2, 1,
	0, 4, 3,
	1, 3, 4,
	0, 3, 2,
	1, 2, 3,
	5, 4, 0,
	1, 4, 5
};

NJS_TEX uv_02CCC228[] = {
	{ 251, 3 },
{ 147, 106 },
{ 2, 7 },
{ 2, 7 },
{ 147, 106 },
{ 0, 255 },
{ 251, 3 },
{ 146, 105 },
{ 250, 254 },
{ 0, 255 },
{ 250, 254 },
{ 146, 105 },
{ 251, 3 },
{ 250, 254 },
{ 147, 106 },
{ 0, 255 },
{ 147, 106 },
{ 250, 254 },
{ 2, 7 },
{ 145, 106 },
{ 251, 3 },
{ 0, 255 },
{ 145, 106 },
{ 2, 7 }
};

NJS_MESHSET_SADX meshlist_02CCC288[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CCC1F4, NULL, NULL, NULL, uv_02CCC228, NULL }
};

NJS_VECTOR vertex_02CCC2A8[] = {
	{ 0.006671f, 0.015107f, -0.001827f },
{ 0.008902f, -2.535252f, 0.016531f },
{ -0.345085f, -1.026273f, 0.013531f },
{ -0.034443f, -1.030066f, -0.304461f },
{ 0.372119f, -1.033098f, 0.020913f },
{ 0.03629f, -1.00759f, 0.256096f }
};

NJS_VECTOR normal_02CCC2F0[] = {
	{ -0.00022f, 0.999982f, 0.006069f },
{ 0.000594f, -0.999834f, 0.018223f },
{ -0.993752f, 0.04084f, 0.103872f },
{ -0.067505f, 0.032554f, -0.997188f },
{ 0.998742f, 0.038357f, 0.032298f },
{ 0.0286f, 0.049008f, 0.998389f }
};

NJS_MODEL_SADX attach_02CCC338 = { vertex_02CCC2A8, normal_02CCC2F0, LengthOfArray<Sint32>(vertex_02CCC2A8), meshlist_02CCC288, matlist_02CCC1E0, LengthOfArray<Uint16>(meshlist_02CCC288), LengthOfArray<Uint16>(matlist_02CCC1E0),{ 0.013517f, -1.260073f, -0.024182f }, 1.185947f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC364 = { NJD_EVAL_BREAK, &attach_02CCC338, 0.009534f, -0.008831f, -0.001451f, 0x14, 0x1DBE, 0x3FF0, 1, 0.93f, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCC398[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCC3AC[] = {
	3, 5, 2,
	3, 4, 1,
	2, 4, 3,
	0, 4, 2,
	0, 2, 1,
	1, 2, 5,
	0, 1, 4,
	1, 5, 3
};

NJS_TEX uv_02CCC3E0[] = {
	{ 15, 210 },
{ 3, 254 },
{ 0, 117 },
{ 15, 210 },
{ 141, 89 },
{ 238, 124 },
{ 0, 117 },
{ 141, 89 },
{ 15, 210 },
{ 251, 3 },
{ 141, 89 },
{ 0, 117 },
{ 251, 3 },
{ 0, 117 },
{ 238, 124 },
{ 238, 124 },
{ 0, 117 },
{ 3, 254 },
{ 251, 3 },
{ 238, 124 },
{ 141, 89 },
{ 238, 124 },
{ 3, 254 },
{ 15, 210 }
};

NJS_MESHSET_SADX meshlist_02CCC440[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CCC3AC, NULL, NULL, NULL, uv_02CCC3E0, NULL }
};

NJS_VECTOR vertex_02CCC460[] = {
	{ 0.054948f, -0.004369f, -0.021657f },
{ 0.120943f, -1.407179f, -0.234645f },
{ 0.186027f, -1.398034f, 0.244152f },
{ -0.148431f, -2.487396f, 0.064259f },
{ -0.20796f, -1.032235f, 0.053899f },
{ 0.057273f, -3.001945f, -0.015528f }
};

NJS_VECTOR normal_02CCC4A8[] = {
	{ 0.037153f, 0.998638f, -0.036639f },
{ 0.350213f, -0.002526f, -0.936667f },
{ 0.594012f, 0.022824f, 0.804132f },
{ -0.910943f, -0.321595f, 0.258378f },
{ -0.975065f, 0.160494f, 0.153264f },
{ 0.087005f, -0.994564f, -0.057206f }
};

NJS_MODEL_SADX attach_02CCC4F0 = { vertex_02CCC460, normal_02CCC4A8, LengthOfArray<Sint32>(vertex_02CCC460), meshlist_02CCC440, matlist_02CCC398, LengthOfArray<Uint16>(meshlist_02CCC440), LengthOfArray<Uint16>(matlist_02CCC398),{ -0.010967f, -1.503157f, 0.004754f }, 1.246211f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC51C = { NJD_EVAL_BREAK, &attach_02CCC4F0, -0.007659f, -0.021237f, 0.056557f, 0x14, 0x1DBE, 0x3FF0, 1, 0.93f, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCC550[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCC578[] = {
	0, 1, 3,
	0, 3, 4,
	0, 2, 1,
	4, 3, 1,
	4, 2, 0,
	1, 2, 4
};

Sint16 poly_02CCC59C[] = {
	5, 8, 7,
	5, 6, 8
};

NJS_TEX uv_02CCC5A8[] = {
	{ 249, 130 },
{ 251, 3 },
{ 0, 251 },
{ 249, 130 },
{ 0, 251 },
{ 249, 251 },
{ 249, 129 },
{ 1, 254 },
{ 251, 3 },
{ 65, 63 },
{ 0, 251 },
{ 251, 3 },
{ 248, 253 },
{ 1, 254 },
{ 249, 129 },
{ 251, 3 },
{ 1, 249 },
{ 66, 63 }
};

NJS_TEX uv_02CCC5F0[] = {
	{ 187, 136 },
{ 63, 130 },
{ 11, 255 },
{ 187, 136 },
{ 19, 7 },
{ 63, 130 }
};

NJS_MESHSET_SADX meshlist_02CCC608[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CCC578, NULL, NULL, NULL, uv_02CCC5A8, NULL },
{ NJD_MESHSET_3 | 1, 2, poly_02CCC59C, NULL, NULL, NULL, uv_02CCC5F0, NULL }
};

NJS_VECTOR vertex_02CCC640[] = {
	{ -0.264966f, -0.474178f, 0.022535f },
{ 0.050115f, 0.005009f, -0.00004f },
{ -0.123844f, -2.214025f, 0.749918f },
{ 0.038229f, -2.159566f, -0.757453f },
{ -0.019264f, -1.027812f, 0.025861f },
{ -0.019264f, -1.027812f, 0.025861f },
{ 0.038229f, -2.159566f, -0.757453f },
{ -0.123844f, -2.214025f, 0.749918f },
{ -0.172262f, -1.863655f, -0.007913f }
};

NJS_VECTOR normal_02CCC6B0[] = {
	{ -0.936692f, 0.348982f, 0.028632f },
{ 0.231117f, 0.972888f, -0.008615f },
{ -0.025027f, -0.91144f, 0.410671f },
{ 0.066367f, -0.894718f, -0.441674f },
{ 0.569088f, -0.821176f, 0.042543f },
{ -0.977973f, 0.183066f, -0.10028f },
{ -0.925382f, 0.182805f, -0.332041f },
{ -0.974675f, 0.172669f, 0.142102f },
{ -0.978415f, 0.182976f, -0.09604f }
};

NJS_MODEL_SADX attach_02CCC71C = { vertex_02CCC640, normal_02CCC6B0, LengthOfArray<Sint32>(vertex_02CCC640), meshlist_02CCC608, matlist_02CCC550, LengthOfArray<Uint16>(meshlist_02CCC608), LengthOfArray<Uint16>(matlist_02CCC550),{ -0.107425f, -1.104508f, -0.003768f }, 1.218645f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC748 = { NJD_EVAL_BREAK, &attach_02CCC71C, 0.001308f, -0.035167f, 0.033955f, 0x14, 0x1DBE, 0x3FF0, 1, 0.93f, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC77C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.693757f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CCC748 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC7B0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.788955f, 0, 0, 0x19AB, 0, 0xFFFFA229, 1, 1, 1, &object_02CCC77C, &object_02CCC51C };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC7E4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.367584f, 0, 0.000001f, 0, 0, 0x72EA, 1, 1, 1, &object_02CCC7B0, &object_02CCC364 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC818 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0xFFFFFEEB, 0x102, 0xFFFF6D1A, 1, 1, 1, &object_02CCC7E4, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC84C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.737783f, -0.235914f, -1.30777f, 0, 0xFFFFE242, 0, 1, 1, 1, &object_02CCC818, &object_02CCC1AC };

NJS_MATERIAL matlist_02CCC880[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCC894[] = {
	4, 2, 0,
	4, 1, 2,
	3, 4, 0,
	4, 3, 1,
	2, 3, 0,
	3, 2, 1
};

NJS_TEX uv_02CCC8B8[] = {
	{ 251, 192 },
{ 0, 176 },
{ 66, 255 },
{ 251, 192 },
{ 246, 3 },
{ 0, 176 },
{ 58, 180 },
{ 251, 192 },
{ 66, 255 },
{ 251, 192 },
{ 58, 180 },
{ 246, 3 },
{ 0, 176 },
{ 58, 180 },
{ 66, 255 },
{ 58, 180 },
{ 0, 176 },
{ 246, 3 }
};

NJS_MESHSET_SADX meshlist_02CCC900[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CCC894, NULL, NULL, NULL, uv_02CCC8B8, NULL }
};

NJS_VECTOR vertex_02CCC91C[] = {
	{ 0.030552f, -1.499545f, 0.018111f },
{ 0.042237f, -0.106518f, -0.02127f },
{ 0.219462f, -1.105053f, -0.093663f },
{ 0.126472f, -1.108524f, 0.263313f },
{ -0.178488f, -1.10833f, 0.030635f }
};

NJS_VECTOR normal_02CCC958[] = {
	{ -0.055241f, -0.992178f, -0.111941f },
{ -0.013526f, 0.996224f, -0.085756f },
{ 0.71476f, -0.135429f, -0.686132f },
{ 0.324216f, -0.127105f, 0.937405f },
{ -0.984592f, -0.117007f, -0.129955f }
};

NJS_MODEL_SADX attach_02CCC994 = { vertex_02CCC91C, normal_02CCC958, LengthOfArray<Sint32>(vertex_02CCC91C), meshlist_02CCC900, matlist_02CCC880, LengthOfArray<Uint16>(meshlist_02CCC900), LengthOfArray<Uint16>(matlist_02CCC880),{ 0.020487f, -0.803031f, 0.084825f }, 0.693549f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCC9C0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCC994, 0, 0, 0, 0xFFFFFFE5, 0x1BB6, 0x3EF0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCC9F4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCCA08[] = {
	3, 7, 0,
	8, 1, 9,
	7, 6, 0,
	4, 3, 9,
	4, 1, 8,
	0, 6, 2,
	0, 2, 5,
	5, 3, 0,
	9, 1, 4,
	8, 5, 4
};

Sint16 poly_02CCCA44[] = {
	3, 4, 7, 6,
	4, 5, 6, 2,
	9, 3, 8, 5
};

NJS_TEX uv_02CCCA60[] = {
	{ 147, 153 },
{ 0, 82 },
{ 111, 106 },
{ 230, 191 },
{ 251, 254 },
{ 193, 225 },
{ 0, 82 },
{ 150, 169 },
{ 111, 106 },
{ 150, 169 },
{ 147, 153 },
{ 193, 225 },
{ 150, 169 },
{ 251, 254 },
{ 230, 191 },
{ 111, 106 },
{ 150, 169 },
{ 85, 3 },
{ 111, 106 },
{ 85, 3 },
{ 164, 137 },
{ 164, 137 },
{ 147, 153 },
{ 111, 106 },
{ 193, 225 },
{ 251, 254 },
{ 150, 169 },
{ 230, 191 },
{ 164, 137 },
{ 150, 169 }
};

NJS_TEX uv_02CCCAD8[] = {
	{ 147, 153 },
{ 150, 169 },
{ 0, 82 },
{ 150, 169 },
{ 150, 169 },
{ 164, 137 },
{ 150, 169 },
{ 85, 3 },
{ 193, 225 },
{ 147, 153 },
{ 230, 191 },
{ 164, 137 }
};

NJS_MESHSET_SADX meshlist_02CCCB08[] = {
	{ NJD_MESHSET_3 | 0, 10, poly_02CCCA08, NULL, NULL, NULL, uv_02CCCA60, NULL },
{ NJD_MESHSET_4 | 0, 3, poly_02CCCA44, NULL, NULL, NULL, uv_02CCCAD8, NULL }
};

NJS_VECTOR vertex_02CCCB40[] = {
	{ 0.211623f, -1.512524f, 0.010478f },
{ 0.000251f, -0.000464f, -0.001652f },
{ -0.130981f, -2.200304f, -0.362547f },
{ 0.349783f, -1.07541f, 0.052655f },
{ -0.041337f, -0.9753f, 0.114524f },
{ 0.279834f, -1.07512f, -0.118904f },
{ -0.041337f, -0.9753f, 0.114524f },
{ 0.218763f, -2.201753f, 0.49525f },
{ 0.199779f, -0.449555f, -0.204959f },
{ 0.351602f, -0.450184f, 0.167408f }
};

NJS_VECTOR normal_02CCCBB8[] = {
	{ 0.570884f, -0.782769f, -0.247719f },
{ -0.336124f, 0.941787f, -0.007608f },
{ -0.272814f, -0.900491f, -0.338656f },
{ 0.999502f, 0.028394f, -0.01376f },
{ -0.882948f, -0.280858f, 0.376193f },
{ 0.422891f, -0.004562f, -0.906169f },
{ -0.826207f, -0.45371f, 0.33396f },
{ 0.638226f, -0.121259f, -0.760239f },
{ 0.183242f, 0.203008f, -0.961878f },
{ 0.717831f, 0.314409f, 0.621181f }
};

NJS_MODEL_SADX attach_02CCCC30 = { vertex_02CCCB40, normal_02CCCBB8, LengthOfArray<Sint32>(vertex_02CCCB40), meshlist_02CCCB08, matlist_02CCC9F4, LengthOfArray<Uint16>(meshlist_02CCCB08), LengthOfArray<Uint16>(matlist_02CCC9F4),{ 0.11031f, -1.101108f, 0.066352f }, 1.120352f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCCC5C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCCC30, 0, 0, 0, 0xFFFFFFE5, 0x1BB6, 0x3F89, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCCC90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.451146f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CCCC5C };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCCCC4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.498511f, 0, 0, 0x2785, 0, 0xFFFF9EF4, 1, 1, 1, &object_02CCCC90, &object_02CCC9C0 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCCCF8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0xFFFFFE6D, 0x42, 0xFFFFEBE7, 1, 1, 1, &object_02CCCCC4, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCCD2C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -1.209298f, 0.2317f, 0.823476f, 0xFFFFFC2D, 0xFFFFE482, 0x5BD, 1, 1, 1, &object_02CCCCF8, &object_02CCC84C };

NJS_MATERIAL matlist_02CCCD60[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_07, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCCD74[] = {
	0, 1, 2, 3
};

NJS_TEX uv_02CCCD7C[] = {
	{ 3, 251 },
{ 3, 11 },
{ 243, 251 },
{ 243, 11 }
};

NJS_MESHSET_SADX meshlist_02CCCD8C[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_02CCCD74, NULL, NULL, NULL, uv_02CCCD7C, NULL }
};

NJS_VECTOR vertex_02CCCDA8[] = {
	{ -0.999823f, 0.001999f, -0.499997f },
{ -0.999823f, 0.001999f, 0.499997f },
{ 0.000175f, -0.00001f, -0.499997f },
{ 0.000175f, -0.00001f, 0.499997f }
};

NJS_VECTOR normal_02CCCDD8[] = {
	{ 0.002f, 0.999998f, 0 },
{ 0.002f, 0.999998f, 0 },
{ 0.002f, 0.999998f, 0 },
{ 0.002f, 0.999998f, 0 }
};

NJS_MODEL_SADX attach_02CCCE08 = { vertex_02CCCDA8, normal_02CCCDD8, LengthOfArray<Sint32>(vertex_02CCCDA8), meshlist_02CCCD8C, matlist_02CCCD60, LengthOfArray<Uint16>(meshlist_02CCCD8C), LengthOfArray<Uint16>(matlist_02CCCD60),{ -0.499824f, 0.000999f, 0 }, 0.706031f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCCE34 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCCE08, -1.049491f, 0.458046f, 0, 0, 0, 0xFFFFFCE8, 1, 1, 1, NULL, &object_02CCCD2C };

NJS_MATERIAL matlist_02CCCE68[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_08, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, FROG2TexName_ff_15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCCEB8[] = {
	51, 27, 28,
	26, 27, 51,
	18, 17, 20,
	15, 21, 20,
	17, 11, 19,
	19, 20, 17,
	22, 19, 9,
	9, 10, 22,
	17, 12, 11,
	17, 18, 13,
	20, 21, 18,
	13, 12, 17,
	22, 20, 19,
	20, 22, 15,
	22, 10, 23,
	23, 15, 22
};

Sint16 poly_02CCCF18[] = {
	26, 49, 27, 50,
	27, 50, 28, 48,
	50, 19, 48, 11,
	19, 50, 9, 49
};

Sint16 poly_02CCCF38[] = {
	51, 28, 25,
	25, 26, 51,
	32, 33, 37,
	41, 45, 46,
	40, 39, 45,
	46, 39, 44,
	4, 3, 8,
	7, 1, 47,
	11, 12, 7,
	47, 1, 16,
	1, 2, 16,
	8, 14, 4,
	47, 48, 11,
	7, 2, 1,
	7, 8, 3,
	8, 13, 14,
	4, 14, 0,
	7, 12, 13,
	9, 49, 47,
	3, 6, 16,
	16, 10, 9,
	23, 10, 16,
	6, 3, 4,
	4, 0, 5,
	16, 2, 3,
	3, 2, 7,
	6, 4, 5,
	5, 23, 6,
	37, 34, 35,
	31, 32, 36,
	33, 34, 37,
	37, 36, 32,
	35, 30, 37,
	36, 30, 31,
	44, 43, 46,
	45, 41, 40,
	46, 43, 42,
	46, 42, 41,
	16, 9, 47,
	47, 11, 7,
	16, 6, 23,
	13, 8, 7
};

Sint16 poly_02CCD034[] = {
	25, 47, 26, 49,
	28, 48, 25, 47
};

Sint16 poly_02CCD044[] = {
	18, 21, 15,
	24, 13, 23,
	5, 0, 24,
	24, 0, 14,
	24, 23, 5,
	14, 13, 24
};

Sint16 poly_02CCD068[] = {
	13, 18, 23, 15
};

Sint16 poly_02CCD070[] = {
	32, 31, 29,
	31, 30, 29,
	33, 32, 29,
	34, 33, 29,
	35, 34, 29,
	30, 35, 29,
	38, 40, 41,
	38, 39, 40,
	38, 41, 42,
	38, 42, 43,
	38, 43, 44,
	38, 44, 39
};

NJS_TEX uv_02CCD0B8[] = {
	{ 251, 129 },
{ 226, 129 },
{ 226, 161 },
{ 226, 97 },
{ 226, 129 },
{ 251, 129 },
{ 27, 188 },
{ 67, 211 },
{ 39, 129 },
{ 27, 70 },
{ 7, 129 },
{ 39, 129 },
{ 67, 211 },
{ 160, 255 },
{ 105, 129 },
{ 105, 129 },
{ 39, 129 },
{ 67, 211 },
{ 67, 47 },
{ 105, 129 },
{ 160, 3 },
{ 160, 3 },
{ 131, 13 },
{ 67, 47 },
{ 67, 211 },
{ 131, 245 },
{ 160, 255 },
{ 67, 211 },
{ 27, 188 },
{ 87, 228 },
{ 39, 129 },
{ 7, 129 },
{ 27, 188 },
{ 87, 228 },
{ 131, 245 },
{ 67, 211 },
{ 67, 47 },
{ 39, 129 },
{ 105, 129 },
{ 39, 129 },
{ 67, 47 },
{ 27, 70 },
{ 67, 47 },
{ 131, 13 },
{ 87, 30 },
{ 87, 30 },
{ 27, 70 },
{ 67, 47 }
};

NJS_TEX uv_02CCD178[] = {
	{ 226, 97 },
{ 204, 57 },
{ 226, 129 },
{ 203, 129 },
{ 226, 129 },
{ 203, 129 },
{ 226, 161 },
{ 204, 201 },
{ 203, 129 },
{ 105, 129 },
{ 204, 201 },
{ 160, 255 },
{ 105, 129 },
{ 203, 129 },
{ 160, 3 },
{ 204, 57 }
};

NJS_TEX uv_02CCD1B8[] = {
	{ 251, 129 },
{ 226, 195 },
{ 223, 129 },
{ 223, 129 },
{ 226, 63 },
{ 251, 129 },
{ 28, 54 },
{ 35, 54 },
{ 61, 114 },
{ 31, 210 },
{ 36, 154 },
{ 59, 143 },
{ 4, 207 },
{ 1, 200 },
{ 36, 155 },
{ 59, 143 },
{ 38, 211 },
{ 26, 216 },
{ 43, 129 },
{ 79, 129 },
{ 80, 144 },
{ 152, 165 },
{ 177, 129 },
{ 182, 129 },
{ 160, 255 },
{ 111, 252 },
{ 152, 165 },
{ 182, 129 },
{ 177, 129 },
{ 152, 93 },
{ 177, 129 },
{ 150, 129 },
{ 152, 93 },
{ 80, 144 },
{ 0, 228 },
{ 43, 129 },
{ 182, 129 },
{ 204, 240 },
{ 160, 255 },
{ 152, 165 },
{ 150, 129 },
{ 177, 129 },
{ 152, 165 },
{ 80, 144 },
{ 79, 129 },
{ 80, 144 },
{ 87, 248 },
{ 0, 228 },
{ 43, 129 },
{ 0, 228 },
{ 0, 129 },
{ 152, 165 },
{ 111, 252 },
{ 87, 248 },
{ 160, 3 },
{ 204, 18 },
{ 182, 129 },
{ 79, 129 },
{ 80, 114 },
{ 152, 93 },
{ 152, 93 },
{ 111, 6 },
{ 160, 3 },
{ 87, 10 },
{ 111, 6 },
{ 152, 93 },
{ 80, 114 },
{ 79, 129 },
{ 43, 129 },
{ 43, 129 },
{ 0, 129 },
{ 0, 30 },
{ 152, 93 },
{ 150, 129 },
{ 79, 129 },
{ 79, 129 },
{ 150, 129 },
{ 152, 165 },
{ 80, 114 },
{ 43, 129 },
{ 0, 30 },
{ 0, 30 },
{ 87, 10 },
{ 80, 114 },
{ 61, 114 },
{ 28, 43 },
{ 28, 43 },
{ 2, 45 },
{ 28, 54 },
{ 36, 101 },
{ 35, 54 },
{ 23, 46 },
{ 61, 114 },
{ 61, 114 },
{ 36, 101 },
{ 28, 54 },
{ 42, 108 },
{ 25, 106 },
{ 27, 70 },
{ 36, 101 },
{ 3, 55 },
{ 2, 45 },
{ 39, 221 },
{ 33, 215 },
{ 59, 143 },
{ 36, 154 },
{ 31, 210 },
{ 3, 207 },
{ 59, 144 },
{ 29, 214 },
{ 38, 211 },
{ 59, 143 },
{ 38, 211 },
{ 31, 210 },
{ 152, 93 },
{ 160, 3 },
{ 182, 129 },
{ 182, 129 },
{ 160, 255 },
{ 152, 165 },
{ 152, 93 },
{ 80, 114 },
{ 87, 10 },
{ 87, 248 },
{ 80, 144 },
{ 152, 165 }
};

NJS_TEX uv_02CCD3B0[] = {
	{ 223, 129 },
{ 182, 129 },
{ 226, 63 },
{ 204, 18 },
{ 226, 195 },
{ 204, 240 },
{ 223, 129 },
{ 182, 129 }
};

NJS_TEX uv_02CCD3D0[] = {
	{ 27, 189 },
{ 7, 131 },
{ 27, 73 },
{ 96, 131 },
{ 86, 228 },
{ 86, 34 },
{ 27, 73 },
{ 0, 131 },
{ 96, 131 },
{ 96, 131 },
{ 0, 131 },
{ 27, 189 },
{ 96, 131 },
{ 86, 34 },
{ 27, 73 },
{ 27, 189 },
{ 86, 228 },
{ 96, 131 }
};

NJS_TEX uv_02CCD418[] = {
	{ 86, 228 },
{ 27, 189 },
{ 86, 34 },
{ 27, 73 }
};

NJS_TEX uv_02CCD428[] = {
	{ 1, 70 },
{ 16, 185 },
{ 128, 140 },
{ 16, 185 },
{ 118, 241 },
{ 128, 140 },
{ 134, 9 },
{ 1, 70 },
{ 128, 140 },
{ 247, 93 },
{ 134, 9 },
{ 128, 140 },
{ 228, 204 },
{ 247, 93 },
{ 128, 140 },
{ 118, 241 },
{ 228, 204 },
{ 128, 140 },
{ 128, 139 },
{ 16, 185 },
{ 1, 70 },
{ 128, 139 },
{ 118, 241 },
{ 16, 185 },
{ 128, 139 },
{ 1, 70 },
{ 134, 10 },
{ 128, 139 },
{ 134, 10 },
{ 246, 92 },
{ 128, 139 },
{ 246, 92 },
{ 234, 199 },
{ 128, 139 },
{ 234, 199 },
{ 118, 241 }
};

NJS_MESHSET_SADX meshlist_02CCD4B8[] = {
	{ NJD_MESHSET_3 | 0, 16, poly_02CCCEB8, NULL, NULL, NULL, uv_02CCD0B8, NULL },
{ NJD_MESHSET_4 | 0, 4, poly_02CCCF18, NULL, NULL, NULL, uv_02CCD178, NULL },
{ NJD_MESHSET_3 | 1, 42, poly_02CCCF38, NULL, NULL, NULL, uv_02CCD1B8, NULL },
{ NJD_MESHSET_4 | 1, 2, poly_02CCD034, NULL, NULL, NULL, uv_02CCD3B0, NULL },
{ NJD_MESHSET_3 | 2, 6, poly_02CCD044, NULL, NULL, NULL, uv_02CCD3D0, NULL },
{ NJD_MESHSET_4 | 2, 1, poly_02CCD068, NULL, NULL, NULL, uv_02CCD418, NULL },
{ NJD_MESHSET_3 | 3, 12, poly_02CCD070, NULL, NULL, NULL, uv_02CCD428, NULL }
};

NJS_VECTOR vertex_02CCD580[] = {
	{ -2.388926f, 0.817652f, 0 },
{ 1.37977f, 0.806088f, 0 },
{ 0.70183f, 1.258612f, 0 },
{ -0.164342f, 1.432649f, 0 },
{ -1.459595f, 1.266512f, 0 },
{ -1.842612f, 0.512247f, 0.620655f },
{ -0.286134f, 1.192806f, 0.467173f },
{ 0.584028f, 1.130136f, -0.82625f },
{ -0.286134f, 1.192806f, -0.467173f },
{ 0.737044f, -0.240607f, 1.314706f },
{ 0.173322f, 0.217836f, 1.216178f },
{ 0.737044f, -0.240607f, -1.314706f },
{ 0.173322f, 0.217836f, -1.216179f },
{ -0.677042f, 0.423003f, -1.032604f },
{ -1.842612f, 0.512247f, -0.620655f },
{ -1.846715f, 0.508942f, 0.620655f },
{ 0.584027f, 1.130136f, 0.82625f },
{ -1.067785f, 0.057015f, -0.854289f },
{ -1.846715f, 0.508942f, -0.620656f },
{ -0.325775f, -0.737892f, 0 },
{ -1.620445f, -0.04738f, 0 },
{ -2.248129f, 0.55378f, 0 },
{ -1.067785f, 0.057015f, 0.854289f },
{ -0.677042f, 0.423003f, 1.032605f },
{ -0.475397f, 0.820097f, 0 },
{ 2.136381f, -0.228469f, 0 },
{ 2.041118f, -0.668982f, 0.339007f },
{ 2.032477f, -0.744731f, 0 },
{ 2.041118f, -0.668982f, -0.339007f },
{ -1.714862f, 1.109986f, 0.635875f },
{ -1.740482f, 0.624651f, 0.52987f },
{ -2.010756f, 0.915078f, 0.391919f },
{ -1.808449f, 1.303714f, 0.286433f },
{ -1.318974f, 1.389035f, 0.412613f },
{ -1.169222f, 1.151007f, 0.706764f },
{ -1.368674f, 0.768273f, 0.786423f },
{ -1.736373f, 0.920791f, 0.125712f },
{ -1.1873f, 1.022764f, 0.152206f },
{ -1.714862f, 1.109986f, -0.635875f },
{ -1.740482f, 0.624651f, -0.52987f },
{ -2.010756f, 0.915078f, -0.391919f },
{ -1.80845f, 1.303714f, -0.286433f },
{ -1.318974f, 1.389035f, -0.412613f },
{ -1.169222f, 1.151007f, -0.706764f },
{ -1.368674f, 0.768273f, -0.786423f },
{ -1.736373f, 0.920791f, -0.125712f },
{ -1.1873f, 1.022764f, -0.152206f },
{ 1.715142f, 0.328054f, 0 },
{ 1.610922f, -0.585424f, -0.753389f },
{ 1.610922f, -0.585424f, 0.753388f },
{ 1.57803f, -0.873725f, 0 },
{ 2.511761f, -0.628801f, 0 }
};

NJS_VECTOR normal_02CCD7F0[] = {
	{ -0.999628f, -0.027286f, 0 },
{ 0.754136f, 0.656718f, 0 },
{ 0.39112f, 0.92034f, 0 },
{ -0.03462f, 0.999401f, 0 },
{ -0.323761f, 0.946139f, 0 },
{ -0.588161f, -0.521383f, 0.618245f },
{ -0.177654f, 0.792532f, 0.583379f },
{ 0.288335f, 0.708426f, -0.644201f },
{ -0.177654f, 0.792533f, -0.583379f },
{ 0.213528f, -0.332994f, 0.918434f },
{ -0.107966f, 0.169256f, 0.97964f },
{ 0.215264f, -0.319711f, -0.922738f },
{ -0.107966f, 0.169257f, -0.97964f },
{ -0.306408f, 0.283971f, -0.908557f },
{ -0.588161f, -0.521383f, -0.618245f },
{ -0.644711f, 0.38966f, 0.657657f },
{ 0.288335f, 0.708426f, 0.644202f },
{ -0.403553f, -0.530846f, -0.745216f },
{ -0.644711f, 0.38966f, -0.657657f },
{ -0.282025f, -0.95937f, -0.008455f },
{ -0.584843f, -0.811147f, 0 },
{ -0.934139f, 0.356909f, 0 },
{ -0.403553f, -0.530847f, 0.745216f },
{ -0.306408f, 0.28397f, 0.908557f },
{ -0.793855f, -0.608106f, 0 },
{ 0.794514f, 0.607245f, 0 },
{ 0.58359f, -0.406159f, 0.703176f },
{ 0.227549f, -0.973767f, 0 },
{ 0.583591f, -0.406159f, -0.703176f },
{ -0.471834f, 0.390411f, 0.790539f },
{ -0.429459f, -0.786973f, 0.442988f },
{ -0.986432f, -0.163849f, 0.010276f },
{ -0.532441f, 0.788205f, -0.308607f },
{ 0.318081f, 0.946325f, -0.057382f },
{ 0.699613f, 0.304212f, 0.646527f },
{ 0.311243f, -0.585262f, 0.74873f },
{ -0.431346f, 0.039687f, -0.901313f },
{ 0.753659f, 0.099687f, -0.649662f },
{ -0.471834f, 0.390411f, -0.790539f },
{ -0.429459f, -0.786973f, -0.442989f },
{ -0.986432f, -0.163849f, -0.010276f },
{ -0.532442f, 0.788205f, 0.308607f },
{ 0.318081f, 0.946325f, 0.057382f },
{ 0.699613f, 0.304212f, -0.646527f },
{ 0.311242f, -0.585262f, -0.74873f },
{ -0.431346f, 0.039687f, 0.901313f },
{ 0.753659f, 0.099687f, 0.649662f },
{ 0.843113f, 0.537736f, 0 },
{ 0.473658f, -0.375655f, -0.796575f },
{ 0.476203f, -0.394023f, 0.786115f },
{ 0.060147f, -0.998102f, -0.013221f },
{ 0.982402f, -0.186781f, 0 }
};

NJS_MODEL_SADX attach_02CCDA60 = { vertex_02CCD580, normal_02CCD7F0, LengthOfArray<Sint32>(vertex_02CCD580), meshlist_02CCD4B8, matlist_02CCCE68, LengthOfArray<Uint16>(meshlist_02CCD4B8), LengthOfArray<Uint16>(matlist_02CCCE68),{ 0.061418f, 0.279462f, 0 }, 2.780762f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCDA8C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_02CCDA60, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02CCCE34, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCDAC0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02CCDA8C, &object_02CCB628 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCDAF4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02CCDAC0, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCDB28 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02CCDAF4, NULL };

//FROG3
enum FROG3TexName
{
	FROG3TexName_ff_07,
	FROG3TexName_ff_08,
	FROG3TexName_ff_23,
	FROG3TexName_ff_20,
	FROG3TexName_ff_21,
	FROG3TexName_ff_22,
	FROG3TexName_ff_24,
	FROG3TexName_ff_25
};

NJS_MATERIAL matlist_02CCDBC8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_07, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCDBDC[] = {
	0, 1, 2, 3
};

NJS_TEX uv_02CCDBE4[] = {
	{ 0, 255 },
{ 0, 7 },
{ 247, 255 },
{ 247, 7 }
};

NJS_MESHSET_SADX meshlist_02CCDBF4[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_02CCDBDC, NULL, NULL, NULL, uv_02CCDBE4, NULL }
};

NJS_VECTOR vertex_02CCDC10[] = {
	{ -0.945877f, -0.323986f, -0.5f },
{ -0.945877f, -0.323986f, 0.5f },
{ 0.000165f, 0.000056f, -0.5f },
{ 0.000165f, 0.000056f, 0.5f }
};

NJS_VECTOR normal_02CCDC40[] = {
	{ -0.324043f, 0.946042f, 0 },
{ -0.324043f, 0.946042f, 0 },
{ -0.324043f, 0.946042f, 0 },
{ -0.324043f, 0.946042f, 0 }
};

NJS_MODEL_SADX attach_02CCDC70 = { vertex_02CCDC10, normal_02CCDC40, LengthOfArray<Sint32>(vertex_02CCDC10), meshlist_02CCDBF4, matlist_02CCDBC8, LengthOfArray<Uint16>(meshlist_02CCDBF4), LengthOfArray<Uint16>(matlist_02CCDBC8),{ -0.472856f, -0.161965f, 0 }, 0.705677f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCDC9C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCDC70, -1.314418f, 0.770645f, 0, 0, 0, 0xFFFFEEE4, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCDCD0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCDCE4[] = {
	4, 2, 0,
	4, 1, 2,
	3, 4, 0,
	4, 3, 1,
	2, 3, 0,
	3, 2, 1
};

NJS_TEX uv_02CCDD08[] = {
	{ 153, 168 },
{ 153, 167 },
{ 220, 223 },
{ 153, 168 },
{ 12, 29 },
{ 153, 167 },
{ 145, 22 },
{ 153, 168 },
{ 235, 61 },
{ 153, 168 },
{ 145, 22 },
{ 12, 29 },
{ 153, 167 },
{ 145, 22 },
{ 235, 61 },
{ 145, 22 },
{ 153, 167 },
{ 12, 29 }
};

NJS_MESHSET_SADX meshlist_02CCDD50[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CCDCE4, NULL, NULL, NULL, uv_02CCDD08, NULL }
};

NJS_VECTOR vertex_02CCDD6C[] = {
	{ 0.949791f, -0.951213f, 0.750283f },
{ 0.00004f, 0.000009f, 0.000038f },
{ 0.728168f, -0.483129f, 0.517572f },
{ 0.472657f, -0.557038f, 0.747321f },
{ 0.46991f, -0.796267f, 0.447484f }
};

NJS_VECTOR normal_02CCDDA8[] = {
	{ 0.710262f, -0.618741f, 0.33569f },
{ -0.555183f, 0.609055f, -0.566412f },
{ 0.808783f, 0.552012f, -0.202863f },
{ -0.382405f, 0.184381f, 0.905412f },
{ -0.349357f, -0.822758f, -0.448351f }
};

NJS_MODEL_SADX attach_02CCDDE4 = { vertex_02CCDD6C, normal_02CCDDA8, LengthOfArray<Sint32>(vertex_02CCDD6C), meshlist_02CCDD50, matlist_02CCDCD0, LengthOfArray<Uint16>(meshlist_02CCDD50), LengthOfArray<Uint16>(matlist_02CCDCD0),{ 0.474915f, -0.475602f, 0.375161f }, 0.76575f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCDE10 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCDDE4, -0.012642f, -0.006451f, 0.01559f, 0x49, 0x1BB7, 0x1AF9, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCDE44[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCDE58[] = {
	3, 7, 0,
	8, 1, 9,
	7, 6, 0,
	4, 3, 9,
	4, 1, 8,
	0, 6, 2,
	0, 2, 5,
	5, 3, 0,
	9, 1, 4,
	8, 5, 4
};

Sint16 poly_02CCDE94[] = {
	3, 4, 7, 6,
	4, 5, 6, 2,
	9, 3, 8, 5
};

NJS_TEX uv_02CCDEB0[] = {
	{ 131, 102 },
{ 0, 3 },
{ 80, 126 },
{ 202, 182 },
{ 251, 125 },
{ 202, 73 },
{ 0, 3 },
{ 140, 126 },
{ 80, 126 },
{ 140, 126 },
{ 131, 102 },
{ 202, 73 },
{ 140, 126 },
{ 251, 125 },
{ 202, 182 },
{ 80, 126 },
{ 140, 126 },
{ 0, 254 },
{ 80, 126 },
{ 0, 254 },
{ 131, 152 },
{ 131, 152 },
{ 131, 102 },
{ 80, 126 },
{ 202, 73 },
{ 251, 125 },
{ 140, 126 },
{ 202, 182 },
{ 131, 152 },
{ 140, 126 }
};

NJS_TEX uv_02CCDF28[] = {
	{ 131, 102 },
{ 140, 126 },
{ 0, 3 },
{ 140, 126 },
{ 140, 126 },
{ 131, 152 },
{ 140, 126 },
{ 0, 254 },
{ 202, 73 },
{ 131, 102 },
{ 202, 182 },
{ 131, 152 }
};

NJS_MESHSET_SADX meshlist_02CCDF58[] = {
	{ NJD_MESHSET_3 | 0, 10, poly_02CCDE58, NULL, NULL, NULL, uv_02CCDEB0, NULL },
{ NJD_MESHSET_4 | 0, 3, poly_02CCDE94, NULL, NULL, NULL, uv_02CCDF28, NULL }
};

NJS_VECTOR vertex_02CCDF90[] = {
	{ -1.206506f, -0.902699f, -0.003547f },
{ -0.00017f, 0.000084f, 0.000041f },
{ -1.891865f, -1.091043f, -0.477237f },
{ -0.771272f, -0.783071f, 0.086987f },
{ -0.8757f, -0.398723f, -0.003547f },
{ -0.771272f, -0.783071f, -0.098285f },
{ -0.8757f, -0.398723f, -0.003547f },
{ -1.891865f, -1.091043f, 0.449121f },
{ -0.248891f, -0.436705f, -0.209175f },
{ -0.248891f, -0.436705f, 0.192956f }
};

NJS_VECTOR normal_02CCE008[] = {
	{ -0.371098f, -0.928508f, -0.012624f },
{ 0.669096f, 0.743093f, 0.011054f },
{ -0.844358f, -0.338649f, -0.415183f },
{ 0.476416f, -0.842436f, 0.251652f },
{ -0.71827f, 0.695721f, 0.007759f },
{ 0.359054f, -0.639882f, -0.679434f },
{ -0.835992f, 0.548739f, -0.001979f },
{ 0.235144f, -0.753047f, -0.614514f },
{ 0.4657f, -0.271653f, -0.842216f },
{ 0.467107f, -0.287123f, 0.836284f }
};

NJS_MODEL_SADX attach_02CCE080 = { vertex_02CCDF90, normal_02CCE008, LengthOfArray<Sint32>(vertex_02CCDF90), meshlist_02CCDF58, matlist_02CCDE44, LengthOfArray<Uint16>(meshlist_02CCDF58), LengthOfArray<Uint16>(matlist_02CCDE44),{ -0.945941f, -0.545479f, -0.014058f }, 1.16088f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE0AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCE080, 0.007263f, 0.032373f, -0.009327f, 0xDF8, 0x77A, 0x6C2E, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE0E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.451148f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CCE0AC };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE114 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.498512f, 0, 0, 0, 0, 0xFFFFB4FC, 1, 1, 1, &object_02CCE0E0, &object_02CCDE10 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE148 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0xFFFFE872, 0xFFFFF825, 0xFFFFE48C, 1, 1, 1, &object_02CCE114, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE17C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -1.351728f, 0.362574f, 0.941229f, 0xFFFFFC2D, 0xFFFFE482, 0x5BD, 1, 1, 1, &object_02CCE148, &object_02CCDC9C };

NJS_MATERIAL matlist_02CCE1B0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCE1C4[] = {
	0, 2, 4,
	2, 1, 4,
	0, 4, 3,
	1, 3, 4,
	0, 3, 2,
	1, 2, 3
};

NJS_TEX uv_02CCE1E8[] = {
	{ 222, 221 },
{ 149, 171 },
{ 149, 170 },
{ 149, 171 },
{ 14, 28 },
{ 149, 170 },
{ 238, 62 },
{ 149, 171 },
{ 149, 38 },
{ 14, 28 },
{ 149, 38 },
{ 149, 171 },
{ 238, 62 },
{ 149, 38 },
{ 149, 171 },
{ 14, 28 },
{ 149, 171 },
{ 149, 38 }
};

NJS_MESHSET_SADX meshlist_02CCE230[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CCE1C4, NULL, NULL, NULL, uv_02CCE1E8, NULL }
};

NJS_VECTOR vertex_02CCE24C[] = {
	{ 0.949792f, -0.951213f, -0.750283f },
{ 0.000041f, 0.000009f, -0.00038f },
{ 0.728169f, -0.483129f, -0.517572f },
{ 0.472659f, -0.557038f, -0.747321f },
{ 0.469912f, -0.796267f, -0.447484f }
};

NJS_VECTOR normal_02CCE288[] = {
	{ 0.710262f, -0.618741f, -0.33569f },
{ -0.555185f, 0.609056f, 0.56641f },
{ 0.808783f, 0.552012f, 0.202863f },
{ -0.382405f, 0.184381f, -0.905412f },
{ -0.349357f, -0.822758f, 0.448351f }
};

NJS_MODEL_SADX attach_02CCE2C4 = { vertex_02CCE24C, normal_02CCE288, LengthOfArray<Sint32>(vertex_02CCE24C), meshlist_02CCE230, matlist_02CCE1B0, LengthOfArray<Uint16>(meshlist_02CCE230), LengthOfArray<Uint16>(matlist_02CCE1B0),{ 0.474917f, -0.475602f, -0.375161f }, 0.76575f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE2F0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCE2C4, -0.012642f, -0.006451f, -0.01559f, 0xFFFFFFB7, 0xFFFFE449, 0x1AF9, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCE324[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCE338[] = {
	0, 7, 3,
	9, 1, 8,
	0, 6, 7,
	9, 3, 4,
	8, 1, 4,
	2, 6, 0,
	5, 2, 0,
	0, 3, 5,
	4, 1, 9,
	4, 5, 8
};

Sint16 poly_02CCE374[] = {
	7, 6, 3, 4,
	6, 2, 4, 5,
	8, 5, 9, 3
};

NJS_TEX uv_02CCE390[] = {
	{ 80, 132 },
{ 0, 254 },
{ 131, 156 },
{ 202, 185 },
{ 251, 133 },
{ 202, 76 },
{ 80, 132 },
{ 140, 132 },
{ 0, 254 },
{ 202, 185 },
{ 131, 156 },
{ 140, 132 },
{ 202, 76 },
{ 251, 133 },
{ 140, 132 },
{ 0, 3 },
{ 140, 132 },
{ 80, 132 },
{ 131, 106 },
{ 0, 3 },
{ 80, 132 },
{ 80, 132 },
{ 131, 156 },
{ 131, 106 },
{ 140, 132 },
{ 251, 133 },
{ 202, 185 },
{ 140, 132 },
{ 131, 106 },
{ 202, 76 }
};

NJS_TEX uv_02CCE408[] = {
	{ 0, 254 },
{ 140, 132 },
{ 131, 156 },
{ 140, 132 },
{ 140, 132 },
{ 0, 3 },
{ 140, 132 },
{ 131, 106 },
{ 202, 76 },
{ 131, 106 },
{ 202, 185 },
{ 131, 156 }
};

NJS_MESHSET_SADX meshlist_02CCE438[] = {
	{ NJD_MESHSET_3 | 0, 10, poly_02CCE338, NULL, NULL, NULL, uv_02CCE390, NULL },
{ NJD_MESHSET_4 | 0, 3, poly_02CCE374, NULL, NULL, NULL, uv_02CCE408, NULL }
};

NJS_VECTOR vertex_02CCE470[] = {
	{ -1.206506f, -0.902699f, 0.003547f },
{ -0.00017f, 0.000084f, -0.00041f },
{ -1.891865f, -1.091043f, 0.477237f },
{ -0.771272f, -0.783071f, -0.086987f },
{ -0.8757f, -0.398723f, 0.003547f },
{ -0.771272f, -0.783071f, 0.098285f },
{ -0.8757f, -0.398723f, 0.003547f },
{ -1.891865f, -1.091043f, -0.449121f },
{ -0.248891f, -0.436705f, 0.209175f },
{ -0.248891f, -0.436705f, -0.192956f }
};

NJS_VECTOR normal_02CCE4E8[] = {
	{ -0.371098f, -0.928508f, 0.012624f },
{ 0.669097f, 0.743093f, -0.011054f },
{ -0.844357f, -0.338653f, 0.415181f },
{ 0.476416f, -0.842436f, -0.251652f },
{ -0.71827f, 0.695721f, -0.007759f },
{ 0.359054f, -0.639882f, 0.679434f },
{ -0.835992f, 0.548738f, 0.001979f },
{ 0.235144f, -0.753047f, 0.614515f },
{ 0.4657f, -0.271653f, 0.842216f },
{ 0.467107f, -0.287123f, -0.836284f }
};

NJS_MODEL_SADX attach_02CCE560 = { vertex_02CCE470, normal_02CCE4E8, LengthOfArray<Sint32>(vertex_02CCE470), meshlist_02CCE438, matlist_02CCE324, LengthOfArray<Uint16>(meshlist_02CCE438), LengthOfArray<Uint16>(matlist_02CCE324),{ -0.945941f, -0.545479f, 0.014058f }, 1.16088f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE58C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCE560, 0.007263f, 0.032373f, 0.009328f, 0xFFFFF208, 0xFFFFF886, 0x6C2E, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE5C0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.451148f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CCE58C };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE5F4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.498512f, 0, 0, 0, 0, 0xFFFFB4FC, 1, 1, 1, &object_02CCE5C0, &object_02CCE2F0 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE628 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0x178E, 0x7DB, 0xFFFFE48C, 1, 1, 1, &object_02CCE5F4, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE65C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -1.351728f, 0.362574f, -0.941229f, 0x3D3, 0x1B7E, 0x5BD, 1, 1, 1, &object_02CCE628, &object_02CCE17C };

NJS_MATERIAL matlist_02CCE690[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCE6A4[] = {
	0, 2, 5,
	5, 2, 1,
	0, 4, 3,
	1, 3, 4,
	0, 3, 2,
	1, 2, 3,
	5, 4, 0,
	1, 4, 5
};

NJS_TEX uv_02CCE6D8[] = {
	{ 84, 252 },
{ 155, 188 },
{ 155, 224 },
{ 155, 224 },
{ 155, 188 },
{ 247, 166 },
{ 84, 252 },
{ 162, 252 },
{ 155, 224 },
{ 247, 166 },
{ 155, 224 },
{ 162, 252 },
{ 84, 252 },
{ 155, 224 },
{ 155, 188 },
{ 247, 166 },
{ 155, 188 },
{ 155, 224 },
{ 155, 224 },
{ 162, 252 },
{ 84, 252 },
{ 247, 166 },
{ 162, 252 },
{ 155, 224 }
};

NJS_MESHSET_SADX meshlist_02CCE738[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CCE6A4, NULL, NULL, NULL, uv_02CCE6D8, NULL }
};

NJS_VECTOR vertex_02CCE758[] = {
	{ -0.00032f, -0.000111f, 0.000246f },
{ -1.778149f, 0.996221f, -1.537712f },
{ -0.623992f, 0.694614f, -0.542037f },
{ -0.504605f, 0.416229f, -0.849505f },
{ -0.827585f, 0.051407f, -0.714625f },
{ -0.871497f, 0.344319f, -0.447477f }
};

NJS_VECTOR normal_02CCE7A0[] = {
	{ 0.686885f, -0.368445f, 0.626448f },
{ -0.703353f, 0.404438f, -0.584571f },
{ 0.248847f, 0.900138f, 0.357528f },
{ 0.702361f, 0.044171f, -0.710449f },
{ -0.277825f, -0.937172f, -0.211001f },
{ -0.6366f, -0.053297f, 0.76935f }
};

NJS_MODEL_SADX attach_02CCE7E8 = { vertex_02CCE758, normal_02CCE7A0, LengthOfArray<Sint32>(vertex_02CCE758), meshlist_02CCE738, matlist_02CCE690, LengthOfArray<Uint16>(meshlist_02CCE738), LengthOfArray<Uint16>(matlist_02CCE690),{ -0.88909f, 0.498055f, -0.768733f }, 1.276536f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE814 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCE7E8, -0.035272f, 0.031254f, -0.03706f, 0, 0x1DBE, 0xFFFF8FB7, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCE848[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCE85C[] = {
	3, 5, 2,
	3, 4, 1,
	2, 4, 3,
	0, 4, 2,
	0, 2, 1,
	1, 2, 5,
	0, 1, 4,
	1, 5, 3
};

NJS_TEX uv_02CCE890[] = {
	{ 195, 224 },
{ 251, 255 },
{ 113, 108 },
{ 195, 224 },
{ 69, 108 },
{ 144, 108 },
{ 113, 108 },
{ 69, 108 },
{ 195, 224 },
{ 0, 3 },
{ 69, 108 },
{ 113, 108 },
{ 0, 3 },
{ 113, 108 },
{ 144, 108 },
{ 144, 108 },
{ 113, 108 },
{ 251, 255 },
{ 0, 3 },
{ 144, 108 },
{ 69, 108 },
{ 144, 108 },
{ 251, 255 },
{ 195, 224 }
};

NJS_MESHSET_SADX meshlist_02CCE8F0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CCE85C, NULL, NULL, NULL, uv_02CCE890, NULL }
};

NJS_VECTOR vertex_02CCE910[] = {
	{ 0.000083f, -0.000137f, -0.00063f },
{ 1.085908f, -0.863323f, 0.348303f },
{ 0.852764f, -0.863323f, 0.755497f },
{ 1.472566f, -1.828722f, 0.836135f },
{ 0.521082f, -0.863323f, 0.303579f },
{ 1.890112f, -2.078519f, 1.073126f }
};

NJS_VECTOR normal_02CCE958[] = {
	{ -0.628858f, 0.688961f, -0.360375f },
{ 0.717353f, 0.356501f, -0.598592f },
{ -0.141324f, 0.356481f, 0.923552f },
{ -0.433989f, -0.865906f, -0.248716f },
{ -0.681022f, -0.631163f, -0.371271f },
{ 0.649073f, -0.665862f, 0.367876f }
};

NJS_MODEL_SADX attach_02CCE9A0 = { vertex_02CCE910, normal_02CCE958, LengthOfArray<Sint32>(vertex_02CCE910), meshlist_02CCE8F0, matlist_02CCE848, LengthOfArray<Uint16>(meshlist_02CCE8F0), LengthOfArray<Uint16>(matlist_02CCE848),{ 0.945098f, -1.039328f, 0.536531f }, 1.395805f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCE9CC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCE9A0, -0.067574f, -0.019739f, -0.008791f, 0xFFFFFA91, 0x184A, 0x1C5B, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCEA00[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCEA28[] = {
	0, 1, 3,
	0, 3, 4,
	0, 2, 1,
	4, 3, 1,
	4, 2, 0,
	1, 2, 4
};

Sint16 poly_02CCEA4C[] = {
	5, 8, 7,
	5, 6, 8
};

NJS_TEX uv_02CCEA58[] = {
	{ 247, 142 },
{ 248, 142 },
{ 4, 10 },
{ 247, 142 },
{ 4, 10 },
{ 123, 157 },
{ 247, 142 },
{ 3, 10 },
{ 248, 142 },
{ 123, 157 },
{ 4, 10 },
{ 247, 142 },
{ 123, 157 },
{ 3, 10 },
{ 247, 142 },
{ 247, 142 },
{ 3, 10 },
{ 123, 157 }
};

NJS_TEX uv_02CCEAA0[] = {
	{ 244, 129 },
{ 0, 129 },
{ 0, 7 },
{ 244, 129 },
{ 0, 255 },
{ 0, 129 }
};

NJS_MESHSET_SADX meshlist_02CCEAB8[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CCEA28, NULL, NULL, NULL, uv_02CCEA58, NULL },
{ NJD_MESHSET_3 | 1, 2, poly_02CCEA4C, NULL, NULL, NULL, uv_02CCEAA0, NULL }
};

NJS_VECTOR vertex_02CCEAF0[] = {
	{ -0.417534f, 0.249778f, -0.236965f },
{ 0.000012f, -0.00018f, 0.000026f },
{ -2.273194f, -0.00017f, -0.433641f },
{ -1.541335f, -0.00017f, -1.71186f },
{ -0.892771f, -0.00017f, -0.511149f },
{ -0.892771f, -0.00017f, -0.511149f },
{ -1.541335f, -0.00017f, -1.71186f },
{ -2.273194f, -0.00017f, -0.433641f },
{ -1.627965f, 0.132539f, -0.915737f }
};

NJS_VECTOR normal_02CCEB60[] = {
	{ 0.250942f, 0.958287f, 0.136795f },
{ 0.85916f, -0.162588f, 0.48519f },
{ -0.995876f, -0.04447f, -0.079073f },
{ -0.585599f, -0.044743f, -0.809365f },
{ -0.678908f, -0.641856f, -0.356517f },
{ 0.136346f, 0.987753f, 0.07586f },
{ 0.246308f, 0.960017f, -0.133043f },
{ 0.015999f, 0.958413f, 0.284935f },
{ 0.134131f, 0.987739f, 0.079881f }
};

NJS_MODEL_SADX attach_02CCEBCC = { vertex_02CCEAF0, normal_02CCEB60, LengthOfArray<Sint32>(vertex_02CCEAF0), meshlist_02CCEAB8, matlist_02CCEA00, LengthOfArray<Uint16>(meshlist_02CCEAB8), LengthOfArray<Uint16>(matlist_02CCEA00),{ -1.136591f, 0.12488f, -0.855917f }, 1.112718f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCEBF8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCEBCC, -0.031415f, 0.044383f, 0.042689f, 0xFFFFFB21, 0x136D, 0x7CEE, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCEC2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.784034f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CCEBF8 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCEC60 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.88243f, 0, 0, 0x19, 0xFFFFFB1D, 0xFFFF9FB5, 1, 1, 1, &object_02CCEC2C, &object_02CCE9CC };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCEC94 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.446934f, 0, 0, 0xFFFFFF83, 0x6E8, 0xFFFF6FF6, 1, 1, 1, &object_02CCEC60, &object_02CCE814 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCECC8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x7049, 1, 1, 1, &object_02CCEC94, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCECFC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.805401f, -0.516492f, -1.499586f, 0, 0xFFFFE242, 0, 1, 1, 1, &object_02CCECC8, &object_02CCE65C };

NJS_MATERIAL matlist_02CCED30[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCED44[] = {
	5, 2, 0,
	1, 2, 5,
	3, 4, 0,
	4, 3, 1,
	2, 3, 0,
	3, 2, 1,
	0, 4, 5,
	5, 4, 1
};

NJS_TEX uv_02CCED78[] = {
	{ 154, 224 },
{ 156, 190 },
{ 85, 253 },
{ 245, 164 },
{ 156, 190 },
{ 154, 224 },
{ 155, 225 },
{ 164, 253 },
{ 85, 253 },
{ 164, 253 },
{ 155, 225 },
{ 247, 164 },
{ 156, 190 },
{ 155, 225 },
{ 85, 253 },
{ 155, 225 },
{ 156, 190 },
{ 247, 164 },
{ 85, 253 },
{ 164, 253 },
{ 154, 224 },
{ 154, 224 },
{ 164, 253 },
{ 247, 164 }
};

NJS_MESHSET_SADX meshlist_02CCEDD8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CCED44, NULL, NULL, NULL, uv_02CCED78, NULL }
};

NJS_VECTOR vertex_02CCEDF8[] = {
	{ -0.00032f, -0.000111f, -0.000247f },
{ -1.778149f, 0.996221f, 1.537711f },
{ -0.623991f, 0.694614f, 0.542036f },
{ -0.504605f, 0.416229f, 0.849504f },
{ -0.827585f, 0.051407f, 0.714624f },
{ -0.871497f, 0.344319f, 0.447477f }
};

NJS_VECTOR normal_02CCEE40[] = {
	{ 0.686885f, -0.368445f, -0.626448f },
{ -0.703352f, 0.404438f, 0.584574f },
{ 0.248847f, 0.900138f, -0.357528f },
{ 0.702361f, 0.044171f, 0.710449f },
{ -0.277825f, -0.937172f, 0.211001f },
{ -0.6366f, -0.053297f, -0.76935f }
};

NJS_MODEL_SADX attach_02CCEE88 = { vertex_02CCEDF8, normal_02CCEE40, LengthOfArray<Sint32>(vertex_02CCEDF8), meshlist_02CCEDD8, matlist_02CCED30, LengthOfArray<Uint16>(meshlist_02CCEDD8), LengthOfArray<Uint16>(matlist_02CCED30),{ -0.88909f, 0.498055f, 0.768732f }, 1.276536f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCEEB4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCEE88, -0.035272f, 0.031254f, 0.03706f, 0, 0xFFFFE242, 0xFFFF8FB7, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCEEE8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCEEFC[] = {
	2, 5, 3,
	1, 4, 3,
	3, 4, 2,
	2, 4, 0,
	1, 2, 0,
	5, 2, 1,
	4, 1, 0,
	3, 5, 1
};

NJS_TEX uv_02CCEF30[] = {
	{ 113, 108 },
{ 251, 254 },
{ 195, 224 },
{ 144, 108 },
{ 69, 108 },
{ 195, 224 },
{ 195, 224 },
{ 69, 108 },
{ 113, 108 },
{ 113, 108 },
{ 69, 108 },
{ 0, 3 },
{ 144, 108 },
{ 113, 108 },
{ 0, 3 },
{ 251, 254 },
{ 113, 108 },
{ 144, 108 },
{ 69, 108 },
{ 144, 108 },
{ 0, 3 },
{ 195, 224 },
{ 251, 254 },
{ 144, 108 }
};

NJS_MESHSET_SADX meshlist_02CCEF90[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_02CCEEFC, NULL, NULL, NULL, uv_02CCEF30, NULL }
};

NJS_VECTOR vertex_02CCEFB0[] = {
	{ 0.000083f, -0.000137f, 0.000063f },
{ 1.085908f, -0.863323f, -0.348303f },
{ 0.852764f, -0.863323f, -0.755497f },
{ 1.472566f, -1.828722f, -0.836135f },
{ 0.521082f, -0.863323f, -0.303579f },
{ 1.890112f, -2.078519f, -1.073126f }
};

NJS_VECTOR normal_02CCEFF8[] = {
	{ -0.628859f, 0.688963f, 0.36037f },
{ 0.717353f, 0.356501f, 0.598592f },
{ -0.141324f, 0.356481f, -0.923552f },
{ -0.433988f, -0.865907f, 0.248716f },
{ -0.681022f, -0.631163f, 0.371271f },
{ 0.649075f, -0.665859f, -0.367876f }
};

NJS_MODEL_SADX attach_02CCF040 = { vertex_02CCEFB0, normal_02CCEFF8, LengthOfArray<Sint32>(vertex_02CCEFB0), meshlist_02CCEF90, matlist_02CCEEE8, LengthOfArray<Uint16>(meshlist_02CCEF90), LengthOfArray<Uint16>(matlist_02CCEEE8),{ 0.945098f, -1.039328f, -0.536531f }, 1.395805f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCF06C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCF040, -0.067574f, -0.019739f, 0.008791f, 0x56F, 0xFFFFE7B6, 0x1C5B, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02CCF0A0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCF0C8[] = {
	3, 1, 0,
	4, 3, 0,
	1, 2, 0,
	1, 3, 4,
	0, 2, 4,
	4, 2, 1
};

Sint16 poly_02CCF0EC[] = {
	7, 8, 5,
	8, 6, 5
};

NJS_TEX uv_02CCF0F8[] = {
	{ 2, 8 },
{ 249, 144 },
{ 249, 144 },
{ 123, 154 },
{ 2, 8 },
{ 249, 145 },
{ 249, 144 },
{ 3, 8 },
{ 249, 144 },
{ 249, 144 },
{ 2, 8 },
{ 123, 154 },
{ 249, 145 },
{ 3, 8 },
{ 123, 154 },
{ 123, 154 },
{ 3, 8 },
{ 249, 144 }
};

NJS_TEX uv_02CCF140[] = {
	{ 1, 250 },
{ 0, 131 },
{ 246, 131 },
{ 0, 131 },
{ 2, 11 },
{ 246, 131 }
};

NJS_MESHSET_SADX meshlist_02CCF158[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_02CCF0C8, NULL, NULL, NULL, uv_02CCF0F8, NULL },
{ NJD_MESHSET_3 | 1, 2, poly_02CCF0EC, NULL, NULL, NULL, uv_02CCF140, NULL }
};

NJS_VECTOR vertex_02CCF190[] = {
	{ -0.417543f, 0.249803f, 0.236989f },
{ 0.000003f, 0.000006f, -0.00002f },
{ -2.273203f, 0.000008f, 0.433664f },
{ -1.541344f, 0.000007f, 1.711883f },
{ -0.892781f, 0.000007f, 0.511172f },
{ -0.892781f, 0.000007f, 0.511172f },
{ -1.541344f, 0.000007f, 1.711883f },
{ -2.273203f, 0.000008f, 0.433664f },
{ -1.627974f, 0.132564f, 0.915761f }
};

NJS_VECTOR normal_02CCF200[] = {
	{ 0.250942f, 0.958287f, -0.136796f },
{ 0.85916f, -0.162589f, -0.48519f },
{ -0.995876f, -0.044472f, 0.079073f },
{ -0.585605f, -0.044749f, 0.80936f },
{ -0.678907f, -0.641857f, 0.356518f },
{ 0.136347f, 0.987752f, -0.07586f },
{ 0.246309f, 0.960016f, 0.133043f },
{ 0.015999f, 0.958413f, -0.284936f },
{ 0.134131f, 0.987739f, -0.079881f }
};

NJS_MODEL_SADX attach_02CCF26C = { vertex_02CCF190, normal_02CCF200, LengthOfArray<Sint32>(vertex_02CCF190), meshlist_02CCF158, matlist_02CCF0A0, LengthOfArray<Uint16>(meshlist_02CCF158), LengthOfArray<Uint16>(matlist_02CCF0A0),{ -1.1366f, 0.124905f, 0.855941f }, 1.112718f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCF298 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02CCF26C, -0.031434f, 0.044406f, -0.042709f, 0x4DF, 0xFFFFEC93, 0x7CEE, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCF2CC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.784034f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02CCF298 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCF300 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.88243f, 0, 0, 0xFFFFFFE7, 0x4E3, 0xFFFF9FB5, 1, 1, 1, &object_02CCF2CC, &object_02CCF06C };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCF334 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.446934f, 0, 0, 0x7D, 0xFFFFF918, 0x6FF5, 1, 1, 1, &object_02CCF300, &object_02CCEEB4 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCF368 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x7049, 1, 1, 1, &object_02CCF334, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCF39C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.805401f, -0.516492f, 1.499586f, 0, 0x1DBE, 0, 1, 1, 1, &object_02CCF368, &object_02CCECFC };

NJS_MATERIAL matlist_02CCF3D0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_08, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, FROG3TexName_ff_21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02CCF420[] = {
	2, 1, 7,
	8, 1, 6,
	7, 8, 4,
	4, 3, 7,
	8, 5, 4,
	6, 5, 8,
	7, 3, 2,
	16, 10, 11,
	15, 10, 17,
	13, 17, 16,
	16, 12, 13,
	13, 14, 17,
	17, 14, 15,
	11, 12, 16,
	25, 19, 47,
	25, 20, 19,
	25, 26, 21,
	26, 31, 32,
	22, 32, 18,
	25, 30, 31,
	21, 24, 34,
	28, 27, 49,
	34, 24, 41,
	24, 21, 22,
	22, 18, 23,
	34, 20, 21,
	21, 20, 25,
	24, 22, 23,
	23, 41, 24,
	26, 32, 22,
	19, 20, 34,
	48, 29, 30,
	22, 21, 26,
	43, 47, 49,
	51, 46, 43,
	43, 44, 51,
	48, 47, 43,
	49, 44, 43,
	43, 46, 48,
	47, 19, 34,
	34, 49, 47,
	47, 48, 25,
	49, 34, 28,
	31, 26, 25,
	41, 28, 34,
	30, 25, 48
};

Sint16 poly_02CCF538[] = {
	0, 6, 1,
	0, 5, 6,
	0, 4, 5,
	0, 3, 4,
	0, 2, 3,
	0, 1, 2,
	10, 15, 9,
	15, 14, 9,
	14, 13, 9,
	13, 12, 9,
	12, 11, 9,
	11, 10, 9
};

Sint16 poly_02CCF580[] = {
	42, 31, 41,
	23, 18, 42,
	42, 18, 32,
	42, 41, 23,
	32, 31, 42,
	36, 39, 33
};

Sint16 poly_02CCF5A4[] = {
	31, 36, 41, 33
};

Sint16 poly_02CCF5B0[] = {
	35, 30, 29,
	35, 36, 31,
	38, 39, 36,
	31, 30, 35,
	40, 38, 37,
	38, 40, 33,
	40, 28, 41,
	41, 33, 40,
	27, 28, 40,
	40, 37, 27,
	37, 38, 35,
	35, 29, 37,
	51, 45, 46,
	44, 45, 51,
	36, 35, 38,
	33, 39, 38
};

Sint16 poly_02CCF610[] = {
	50, 37, 48, 29,
	37, 50, 27, 49,
	44, 49, 45, 50,
	45, 50, 46, 48
};

NJS_TEX uv_02CCF630[] = {
	{ 0, 168 },
{ 44, 200 },
{ 16, 248 },
{ 251, 160 },
{ 71, 200 },
{ 167, 254 },
{ 60, 162 },
{ 45, 139 },
{ 2, 200 },
{ 2, 200 },
{ 20, 213 },
{ 51, 151 },
{ 54, 160 },
{ 27, 253 },
{ 21, 200 },
{ 22, 199 },
{ 26, 253 },
{ 54, 160 },
{ 43, 156 },
{ 31, 212 },
{ 14, 231 },
{ 16, 249 },
{ 44, 200 },
{ 0, 167 },
{ 167, 3 },
{ 71, 58 },
{ 251, 98 },
{ 3, 200 },
{ 45, 139 },
{ 60, 161 },
{ 51, 151 },
{ 20, 213 },
{ 3, 200 },
{ 21, 199 },
{ 27, 253 },
{ 54, 159 },
{ 56, 93 },
{ 35, 30 },
{ 9, 51 },
{ 14, 231 },
{ 32, 211 },
{ 43, 156 },
{ 148, 192 },
{ 191, 129 },
{ 216, 129 },
{ 148, 192 },
{ 146, 129 },
{ 191, 129 },
{ 148, 192 },
{ 77, 173 },
{ 79, 129 },
{ 77, 173 },
{ 97, 252 },
{ 7, 237 },
{ 11, 129 },
{ 7, 237 },
{ 0, 129 },
{ 148, 192 },
{ 124, 252 },
{ 97, 252 },
{ 79, 129 },
{ 77, 77 },
{ 148, 66 },
{ 124, 6 },
{ 179, 5 },
{ 227, 28 },
{ 148, 66 },
{ 77, 77 },
{ 97, 6 },
{ 77, 77 },
{ 79, 129 },
{ 11, 129 },
{ 11, 129 },
{ 0, 129 },
{ 7, 12 },
{ 148, 66 },
{ 146, 129 },
{ 79, 129 },
{ 79, 129 },
{ 146, 129 },
{ 148, 192 },
{ 77, 77 },
{ 11, 129 },
{ 7, 12 },
{ 7, 12 },
{ 97, 6 },
{ 77, 77 },
{ 77, 173 },
{ 7, 237 },
{ 11, 129 },
{ 191, 129 },
{ 146, 129 },
{ 148, 66 },
{ 227, 230 },
{ 179, 253 },
{ 124, 252 },
{ 11, 129 },
{ 79, 129 },
{ 77, 173 },
{ 229, 129 },
{ 216, 129 },
{ 227, 28 },
{ 251, 129 },
{ 239, 196 },
{ 229, 129 },
{ 229, 129 },
{ 239, 62 },
{ 251, 129 },
{ 227, 230 },
{ 216, 129 },
{ 229, 129 },
{ 227, 28 },
{ 239, 62 },
{ 229, 129 },
{ 229, 129 },
{ 239, 196 },
{ 227, 230 },
{ 216, 129 },
{ 191, 129 },
{ 148, 66 },
{ 148, 66 },
{ 227, 28 },
{ 216, 129 },
{ 216, 129 },
{ 227, 230 },
{ 148, 192 },
{ 227, 28 },
{ 148, 66 },
{ 124, 6 },
{ 97, 252 },
{ 77, 173 },
{ 148, 192 },
{ 97, 6 },
{ 124, 6 },
{ 148, 66 },
{ 124, 252 },
{ 148, 192 },
{ 227, 230 }
};

NJS_TEX uv_02CCF858[] = {
	{ 118, 159 },
{ 205, 222 },
{ 90, 250 },
{ 118, 159 },
{ 251, 105 },
{ 205, 222 },
{ 118, 159 },
{ 139, 3 },
{ 251, 105 },
{ 118, 159 },
{ 8, 81 },
{ 139, 3 },
{ 118, 159 },
{ 2, 187 },
{ 8, 81 },
{ 118, 159 },
{ 90, 250 },
{ 2, 187 },
{ 90, 250 },
{ 205, 223 },
{ 118, 159 },
{ 205, 223 },
{ 251, 105 },
{ 118, 159 },
{ 251, 105 },
{ 139, 3 },
{ 118, 159 },
{ 139, 3 },
{ 8, 81 },
{ 118, 159 },
{ 8, 81 },
{ 2, 187 },
{ 118, 159 },
{ 2, 187 },
{ 90, 250 },
{ 118, 159 }
};

NJS_TEX uv_02CCF8E8[] = {
	{ 94, 131 },
{ 84, 246 },
{ 84, 16 },
{ 26, 57 },
{ 0, 131 },
{ 94, 131 },
{ 94, 131 },
{ 0, 131 },
{ 26, 205 },
{ 94, 131 },
{ 84, 16 },
{ 26, 57 },
{ 26, 205 },
{ 84, 246 },
{ 94, 131 },
{ 26, 205 },
{ 6, 131 },
{ 26, 57 }
};

NJS_TEX uv_02CCF930[] = {
	{ 84, 246 },
{ 26, 205 },
{ 84, 16 },
{ 26, 57 }
};

NJS_TEX uv_02CCF940[] = {
	{ 65, 211 },
{ 120, 254 },
{ 156, 251 },
{ 65, 211 },
{ 27, 204 },
{ 85, 246 },
{ 40, 129 },
{ 7, 129 },
{ 27, 204 },
{ 85, 246 },
{ 120, 254 },
{ 65, 211 },
{ 65, 47 },
{ 40, 129 },
{ 102, 129 },
{ 40, 129 },
{ 65, 47 },
{ 27, 54 },
{ 65, 47 },
{ 120, 3 },
{ 85, 12 },
{ 85, 12 },
{ 27, 54 },
{ 65, 47 },
{ 156, 7 },
{ 120, 3 },
{ 65, 47 },
{ 65, 47 },
{ 102, 129 },
{ 156, 7 },
{ 102, 129 },
{ 40, 129 },
{ 65, 211 },
{ 65, 211 },
{ 156, 251 },
{ 102, 129 },
{ 251, 129 },
{ 227, 129 },
{ 227, 163 },
{ 227, 95 },
{ 227, 129 },
{ 251, 129 },
{ 27, 204 },
{ 65, 211 },
{ 40, 129 },
{ 27, 54 },
{ 7, 129 },
{ 40, 129 }
};

NJS_TEX uv_02CCFA00[] = {
	{ 181, 129 },
{ 102, 129 },
{ 203, 195 },
{ 156, 251 },
{ 102, 129 },
{ 181, 129 },
{ 156, 7 },
{ 203, 63 },
{ 227, 95 },
{ 203, 63 },
{ 227, 129 },
{ 181, 129 },
{ 227, 129 },
{ 181, 129 },
{ 227, 163 },
{ 203, 195 }
};

NJS_MESHSET_SADX meshlist_02CCFA40[] = {
	{ NJD_MESHSET_3 | 0, 46, poly_02CCF420, NULL, NULL, NULL, uv_02CCF630, NULL },
{ NJD_MESHSET_3 | 1, 12, poly_02CCF538, NULL, NULL, NULL, uv_02CCF858, NULL },
{ NJD_MESHSET_3 | 2, 6, poly_02CCF580, NULL, NULL, NULL, uv_02CCF8E8, NULL },
{ NJD_MESHSET_4 | 2, 1, poly_02CCF5A4, NULL, NULL, NULL, uv_02CCF930, NULL },
{ NJD_MESHSET_3 | 3, 16, poly_02CCF5B0, NULL, NULL, NULL, uv_02CCF940, NULL },
{ NJD_MESHSET_4 | 3, 4, poly_02CCF610, NULL, NULL, NULL, uv_02CCFA00, NULL }
};

NJS_VECTOR vertex_02CCFAE8[] = {
	{ -1.681455f, 1.719956f, -1.069334f },
{ -1.71034f, 0.992755f, -0.685138f },
{ -2.114224f, 1.489985f, -0.377525f },
{ -1.799065f, 2.195712f, -0.377525f },
{ -1.080022f, 2.297842f, -0.685138f },
{ -0.848594f, 1.771258f, -1.219292f },
{ -1.163752f, 1.065531f, -1.219292f },
{ -1.416378f, 1.5435f, -0.20214f },
{ -0.691386f, 1.706921f, -0.300237f },
{ -1.681455f, 1.719956f, 1.069334f },
{ -1.71034f, 0.992755f, 0.685138f },
{ -2.114224f, 1.489985f, 0.377525f },
{ -1.799065f, 2.195712f, 0.377525f },
{ -1.080022f, 2.297842f, 0.685138f },
{ -0.848594f, 1.771258f, 1.219292f },
{ -1.163752f, 1.065531f, 1.219292f },
{ -1.416378f, 1.5435f, 0.20214f },
{ -0.691386f, 1.706921f, 0.300237f },
{ -2.740892f, 1.227846f, 0 },
{ 1.568811f, 1.056916f, 0 },
{ 0.798767f, 1.718259f, 0 },
{ -0.185082f, 1.929557f, 0 },
{ -1.656306f, 1.727851f, 0 },
{ -2.114088f, 0.829402f, 0.930581f },
{ -0.323421f, 1.638365f, 0.597567f },
{ 0.66496f, 1.436606f, -0.782865f },
{ -0.323421f, 1.638365f, -0.597567f },
{ 0.845634f, -0.558806f, 1.513f },
{ 0.025647f, 0.281846f, 1.555631f },
{ 0.845634f, -0.558806f, -1.513f },
{ 0.025647f, 0.281846f, -1.555631f },
{ -0.767436f, 0.684481f, -1.4529f },
{ -2.114088f, 0.829402f, -0.930581f },
{ -2.118795f, 0.82509f, 0.930581f },
{ 0.66496f, 1.436606f, 0.782865f },
{ -1.225104f, 0.235489f, -1.012634f },
{ -2.118795f, 0.82509f, -0.930581f },
{ -0.373772f, -0.801578f, 0 },
{ -1.820786f, -0.227128f, 0 },
{ -2.57935f, 0.947426f, 0 },
{ -1.225104f, 0.235489f, 1.012633f },
{ -0.767436f, 0.684481f, 1.4529f },
{ -0.538396f, 1.185859f, 0 },
{ 2.54386f, 0.143167f, 0 },
{ 2.490017f, -0.666162f, 0.422992f },
{ 2.47958f, -0.770189f, 0 },
{ 2.490017f, -0.666162f, -0.422992f },
{ 2.05224f, 0.609341f, 0 },
{ 1.945498f, -0.64296f, -0.815185f },
{ 1.945498f, -0.64296f, 0.815185f },
{ 1.425745f, -1.077288f, 0 },
{ 3.029438f, -0.154404f, 0 }
};

NJS_VECTOR normal_02CCFD58[] = {
	{ -0.5784f, 0.245941f, -0.777796f },
{ -0.479295f, -0.871585f, -0.103035f },
{ -0.909981f, -0.194729f, 0.366082f },
{ -0.476596f, 0.790971f, 0.383694f },
{ 0.270544f, 0.962687f, 0.006337f },
{ 0.60073f, 0.23567f, -0.763926f },
{ 0.222305f, -0.741256f, -0.63334f },
{ -0.040983f, 0.124778f, 0.991338f },
{ 0.822221f, 0.190837f, 0.536222f },
{ -0.5784f, 0.245941f, 0.777796f },
{ -0.479295f, -0.871585f, 0.103035f },
{ -0.909981f, -0.194729f, -0.366082f },
{ -0.476596f, 0.790971f, -0.383694f },
{ 0.270544f, 0.962687f, -0.006337f },
{ 0.60073f, 0.23567f, 0.763926f },
{ 0.222305f, -0.741256f, 0.63334f },
{ -0.040983f, 0.124778f, -0.991338f },
{ 0.822221f, 0.190837f, -0.536222f },
{ -0.999875f, -0.015841f, 0 },
{ 0.672862f, 0.739768f, 0 },
{ 0.443647f, 0.896201f, 0 },
{ 0.02699f, 0.999636f, 0 },
{ -0.30514f, 0.952307f, 0 },
{ -0.640394f, -0.445829f, 0.625405f },
{ -0.05712f, 0.809683f, 0.584081f },
{ 0.36175f, 0.668422f, -0.649884f },
{ -0.05712f, 0.809683f, -0.584081f },
{ 0.180496f, -0.357772f, 0.916199f },
{ 0.018959f, 0.049285f, 0.998605f },
{ 0.161908f, -0.443812f, -0.881372f },
{ 0.018959f, 0.049285f, -0.998605f },
{ -0.279532f, 0.201247f, -0.938809f },
{ -0.640394f, -0.445829f, -0.625405f },
{ -0.610245f, 0.418996f, 0.672342f },
{ 0.36175f, 0.668422f, 0.649883f },
{ -0.394481f, -0.611927f, -0.685515f },
{ -0.610245f, 0.418996f, -0.672342f },
{ -0.310617f, -0.949494f, 0.044473f },
{ -0.588031f, -0.808838f, 0 },
{ -0.848763f, 0.528774f, 0 },
{ -0.394481f, -0.611927f, 0.685514f },
{ -0.279532f, 0.201246f, 0.938809f },
{ -0.792386f, -0.61002f, 0 },
{ 0.67424f, 0.738513f, 0 },
{ 0.615116f, -0.428027f, 0.662137f },
{ 0.505703f, -0.862708f, 0 },
{ 0.615116f, -0.428027f, -0.662137f },
{ 0.774744f, 0.632275f, 0 },
{ 0.464454f, -0.42631f, -0.776236f },
{ 0.457017f, -0.362182f, 0.812379f },
{ 0.059397f, -0.993832f, 0.093648f },
{ 0.952801f, 0.303595f, 0 }
};

NJS_MODEL_SADX attach_02CCFFC8 = { vertex_02CCFAE8, normal_02CCFD58, LengthOfArray<Sint32>(vertex_02CCFAE8), meshlist_02CCFA40, matlist_02CCF3D0, LengthOfArray<Uint16>(meshlist_02CCFA40), LengthOfArray<Uint16>(matlist_02CCF3D0),{ 0.144273f, 0.610277f, 0 }, 3.277829f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CCFFF4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_02CCFFC8, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02CCF39C, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CD0028 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02CCFFF4, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CD005C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -2.697733f, -1.611806f, 1.703858f, 0, 0, 0, 1, 1, 1, NULL, &object_02CD0028 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CD0090 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -2.697733f, -1.611806f, -1.703858f, 0, 0, 0, 1, 1, 1, NULL, &object_02CD005C };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CD00C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -1.520146f, -1.648804f, -3.316216f, 0, 0, 0, 1, 1, 1, NULL, &object_02CD0090 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CD00F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -1.520146f, -1.648804f, 3.316216f, 0, 0, 0, 1, 1, 1, NULL, &object_02CD00C4 };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CD012C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02CD00F8, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_02CD0160 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02CD012C, NULL };

#pragma warning(pop)
