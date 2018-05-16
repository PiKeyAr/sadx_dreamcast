#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

NJS_MATERIAL matlist_01828018[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 151, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_SRC | NJD_SA_ONE | 0x40 },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 76, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_0182807C[] = {
	0x8000u | 6, 2, 17, 5, 14, 8, 11
};

Sint16 poly_0182808C[] = {
	4, 4, 1, 3, 0,
	4, 7, 4, 6, 3,
	4, 1, 16, 0, 15,
	4, 16, 13, 15, 12,
	4, 10, 7, 9, 6,
	4, 13, 10, 12, 9
};

Sint16 poly_018280C8[] = {
	4, 5, 2, 4, 1,
	4, 2, 17, 1, 16,
	4, 8, 5, 7, 4,
	4, 11, 8, 10, 7,
	4, 17, 14, 16, 13,
	4, 14, 11, 13, 10
};

Sint16 poly_01828104[] = {
	0x8000u | 6, 12, 15, 9, 0, 6, 3
};

Sint16 poly_01828114[] = {
	4, 20, 21, 19, 18,
	4, 24, 25, 23, 22
};

NJS_TEX uv_01828128[] = {
	{ 223, 31 },
{ 0, 31 },
{ 223, 143 },
{ 0, 143 },
{ 223, 255 },
{ 0, 255 }
};

NJS_TEX uv_01828140[] = {
	{ 105, 87 },
{ 105, 22 },
{ 252, 87 },
{ 252, 22 },
{ 105, 87 },
{ 105, 22 },
{ 252, 87 },
{ 252, 22 },
{ 105, 87 },
{ 105, 22 },
{ 252, 87 },
{ 252, 22 },
{ 105, 87 },
{ 105, 22 },
{ 252, 87 },
{ 252, 22 },
{ 105, 87 },
{ 105, 22 },
{ 252, 87 },
{ 252, 22 },
{ 105, 87 },
{ 105, 22 },
{ 252, 87 },
{ 252, 22 }
};

NJS_TEX uv_018281A0[] = {
	{ 0, 255 },
{ 0, 15 },
{ 239, 255 },
{ 239, 15 },
{ 0, 255 },
{ 0, 15 },
{ 239, 255 },
{ 239, 15 },
{ 0, 255 },
{ 0, 15 },
{ 239, 255 },
{ 239, 15 },
{ 0, 255 },
{ 0, 15 },
{ 239, 255 },
{ 239, 15 },
{ 0, 255 },
{ 0, 15 },
{ 239, 255 },
{ 239, 15 },
{ 0, 255 },
{ 0, 15 },
{ 239, 255 },
{ 239, 15 }
};

NJS_TEX uv_01828200[] = {
	{ 0, 255 },
{ 223, 255 },
{ 0, 143 },
{ 223, 143 },
{ 0, 31 },
{ 223, 31 }
};

NJS_TEX uv_01828218[] = {
	{ 7, 23 },
{ 231, 23 },
{ 7, 247 },
{ 231, 247 },
{ 7, 23 },
{ 231, 23 },
{ 7, 247 },
{ 231, 247 }
};

NJS_MESHSET_SADX meshlist_01828238[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0182807C, NULL, NULL, NULL, uv_01828128, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0182808C, NULL, NULL, NULL, uv_01828140, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_018280C8, NULL, NULL, NULL, uv_018281A0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_01828104, NULL, NULL, NULL, uv_01828200, NULL },
	//{ NJD_MESHSET_TRIMESH | 4, 2, poly_01828114, NULL, NULL, NULL, uv_01828218, NULL }
};

NJS_MESHSET_SADX meshlist_01828238_2[] = {
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_01828114, NULL, NULL, NULL, uv_01828218, NULL }
};

NJS_VECTOR vertex_018282C8[] = {
	{ 0.492801f, -0.07547799f, -0.798372f },
{ 0.492801f, -0.07547799f, 1.232754f },
{ 0.211905f, -0.07547799f, 1.023453f },
{ 0.2464f, 0.3513f, -0.798372f },
{ 0.2464f, 0.3513f, 1.232754f },
{ 0.105952f, 0.108037f, 1.023453f },
{ -0.2464f, 0.3513f, -0.798372f },
{ -0.2464f, 0.3513f, 1.232754f },
{ -0.105952f, 0.108037f, 1.023453f },
{ -0.492801f, -0.07547799f, -0.798372f },
{ -0.492801f, -0.07547799f, 1.232754f },
{ -0.211905f, -0.07547799f, 1.023453f },
{ -0.2464f, -0.502255f, -0.798372f },
{ -0.2464f, -0.502255f, 1.232754f },
{ -0.105952f, -0.258992f, 1.023453f },
{ 0.2464f, -0.502255f, -0.798372f },
{ 0.2464f, -0.502255f, 1.232754f },
{ 0.105952f, -0.258992f, 1.023453f },
{ -0.361256f, -0.09941299f, 1.204595f },
{ -3.893497f, -0.09941299f, 28.10469f },
{ 3.223505f, -0.09941299f, 28.10469f },
{ 0.322192f, -0.09941299f, 1.204595f },
{ 0.015073f, 0.276916f, 1.204595f },
{ 0.015073f, 3.809155f, 28.10469f },
{ 0.015073f, -3.888825f, 28.10469f },
{ 0.015073f, -0.424051f, 1.204595f }
};

NJS_VECTOR normal_01828400[] = {
	{ 0.792406f, 0, -0.609994f },
{ 0.626711f, 0, 0.779252f },
{ -0.402126f, 0, 0.915584f },
{ 0.396203f, 0.686244f, -0.609994f },
{ 0.313356f, 0.542748f, 0.779252f },
{ -0.201063f, -0.348251f, 0.915584f },
{ -0.396203f, 0.686244f, -0.609994f },
{ -0.313356f, 0.542748f, 0.779252f },
{ 0.201063f, -0.348251f, 0.915584f },
{ -0.792406f, 0, -0.609994f },
{ -0.626711f, 0, 0.779252f },
{ 0.402126f, 0, 0.915584f },
{ -0.396203f, -0.686244f, -0.609994f },
{ -0.313355f, -0.542748f, 0.779252f },
{ 0.201063f, 0.348251f, 0.915584f },
{ 0.396203f, -0.686244f, -0.609994f },
{ 0.313356f, -0.542748f, 0.779252f },
{ -0.201063f, 0.348251f, 0.915584f },
{ 0, 1, 0 },
{ 0, 1, 0 },
{ 0, 1, 0 },
{ 0, 1, 0 },
{ 1, 0, 0 },
{ 1, 0, 0 },
{ 1, 0, 0 },
{ 1, 0, 0 }
};

NJS_MODEL_SADX attach_01828538 = { vertex_018282C8, normal_01828400, LengthOfArray<Sint32>(vertex_018282C8), meshlist_01828238, matlist_01828018, LengthOfArray<Uint16>(meshlist_01828238), LengthOfArray<Uint16>(matlist_01828018),{ -0.334996f, -0.039835f, 13.65316f }, 15.07127f, NULL };

NJS_MODEL_SADX attach_01828538_2 = { vertex_018282C8, normal_01828400, LengthOfArray<Sint32>(vertex_018282C8), meshlist_01828238_2, matlist_01828018, LengthOfArray<Uint16>(meshlist_01828238_2), LengthOfArray<Uint16>(matlist_01828018),{ -0.334996f, -0.039835f, 13.65316f }, 15.07127f, NULL };

NJS_OBJECT object_01828564_2 = { NJD_EVAL_BREAK, &attach_01828538_2, 0, 11.11258f, -0.867072f, 0xFFFFFCBE, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_01828564 = { NJD_EVAL_UNIT_SCL, &attach_01828538, 0, 11.11258f, -0.867072f, 0xFFFFFCBE, 0, 0, 1, 1, 1, &object_01828564_2, NULL };


NJS_MATERIAL matlist_01828598[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 83, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFF4D4948 },{ 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_01828610[] = {
	0x8000u | 5, 4, 2, 0, 12, 10,
	0x8000u | 5, 10, 8, 0, 6, 4,
	14, 7, 6, 5, 4, 3, 2, 1, 12, 11, 10, 9, 8, 7, 6
};

Sint16 poly_01828648[] = {
	4, 24, 28, 23, 27,
	4, 26, 24, 25, 23,
	4, 28, 26, 27, 25
};

Sint16 poly_01828668[] = {
	0x8000u | 5, 14, 22, 16, 20, 18,
	0x8000u | 5, 17, 19, 15, 21, 13
};

Sint16 poly_01828680[] = {
	4, 22, 20, 21, 19,
	4, 20, 18, 19, 17,
	4, 16, 14, 15, 13,
	4, 18, 16, 17, 15,
	4, 14, 22, 13, 21
};

Sint16 poly_018286B4[] = {
	0x8000u | 8, 31, 35, 32, 36, 29, 33, 30, 34
};

Sint16 poly_018286C8[] = {
	4, 35, 36, 34, 33,
	4, 30, 29, 31, 32
};

NJS_TEX uv_018286E0[] = {
	{ 163, 210 },
{ 199, 149 },
{ 126, 149 },
{ 163, 88 },
{ 89, 88 },
{ 89, 88 },
{ 53, 149 },
{ 126, 149 },
{ 89, 210 },
{ 163, 210 },
{ 0, 149 },
{ 89, 210 },
{ 63, 254 },
{ 163, 210 },
{ 189, 254 },
{ 199, 149 },
{ 253, 149 },
{ 163, 88 },
{ 189, 43 },
{ 89, 88 },
{ 63, 43 },
{ 53, 149 },
{ 0, 149 },
{ 89, 210 }
};

NJS_TEX uv_01828740[] = {
	{ 0, 255 },
{ 0, 15 },
{ 5100, 255 },
{ 5100, 15 },
{ 0, 255 },
{ 0, 15 },
{ 5100, 255 },
{ 5100, 15 },
{ 0, 255 },
{ 0, 15 },
{ 5100, 255 },
{ 5100, 15 }
};

NJS_TEX uv_01828770[] = {
	{ 0, 222 },
{ 249, 221 },
{ 3, 53 },
{ 253, 54 },
{ 133, -1 },
{ 133, 12 },
{ 245, 56 },
{ 8, 56 },
{ 244, 220 },
{ 7, 218 }
};

NJS_TEX uv_01828798[] = {
	{ 0, 3 },
{ 251, 3 },
{ 0, 255 },
{ 251, 255 },
{ 0, 3 },
{ 251, 3 },
{ 0, 255 },
{ 251, 255 },
{ 0, 3 },
{ 251, 3 },
{ 0, 255 },
{ 251, 255 },
{ 0, 3 },
{ 251, 3 },
{ 0, 255 },
{ 251, 255 },
{ 0, 3 },
{ 251, 3 },
{ 0, 255 },
{ 251, 255 }
};

NJS_TEX uv_018287E8[] = {
	{ 247, -1275 },
{ 0, -1275 },
{ 247, -688 },
{ 0, -688 },
{ 247, -439 },
{ 0, -439 },
{ 247, 255 },
{ 0, 255 }
};

NJS_TEX uv_01828808[] = {
	{ 0, 254 },
{ 0, 28 },
{ 253, 254 },
{ 128, 1 },
{ 253, 254 },
{ 128, 1 },
{ 0, 254 },
{ 0, 28 }
};

NJS_MESHSET_SADX meshlist_01828828[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_01828610, NULL, NULL, NULL, uv_018286E0, NULL },
{ NJD_MESHSET_TRIMESH | 1, 3, poly_01828648, NULL, NULL, NULL, uv_01828740, NULL },
{ NJD_MESHSET_TRIMESH | 2, 2, poly_01828668, NULL, NULL, NULL, uv_01828770, NULL },
{ NJD_MESHSET_TRIMESH | 3, 5, poly_01828680, NULL, NULL, NULL, uv_01828798, NULL },
{ NJD_MESHSET_TRIMESH | 4, 1, poly_018286B4, NULL, NULL, NULL, uv_018287E8, NULL },
{ NJD_MESHSET_TRIMESH | 5, 2, poly_018286C8, NULL, NULL, NULL, uv_01828808, NULL }
};

NJS_VECTOR vertex_018288D0[] = {
	{ 0, 0.828626f, -0.263483f },
{ 1.486466f, 0.01394f, -0.263483f },
{ 0.858212f, 0.610332f, -0.263483f },
{ 0.743233f, 0.01394f, -1.550801f },
{ 0.429106f, 0.610332f, -1.006716f },
{ -0.743233f, 0.01394f, -1.5508f },
{ -0.429106f, 0.610332f, -1.006716f },
{ -1.486466f, 0.01394f, -0.263483f },
{ -0.858212f, 0.610332f, -0.263483f },
{ -0.743233f, 0.01394f, 1.023834f },
{ -0.429106f, 0.610332f, 0.47975f },
{ 0.743233f, 0.01394f, 1.023834f },
{ 0.429106f, 0.610332f, 0.47975f },
{ -0.836994f, 9.123271f, -1.106837f },
{ -0.891397f, 9.769961f, -1.154505f },
{ -0.83034f, 9.123271f, 0.838524f },
{ -0.868009f, 9.769961f, 0.869377f },
{ 0.024349f, 9.123271f, 1.366645f },
{ 0.028606f, 9.769961f, 1.528495f },
{ 0.793967f, 9.123271f, 0.833752f },
{ 0.846949f, 9.769961f, 0.856082f },
{ 0.785781f, 9.123271f, -1.131165f },
{ 0.821567f, 9.769961f, -1.15374f },
{ 0.007017f, 0.595133f, 0.048774f },
{ 0.007017f, 9.142028f, 0.048774f },
{ 0.277883f, 0.595133f, -0.44469f },
{ 0.277883f, 9.151853f, -0.44469f },
{ -0.284902f, 0.595133f, -0.432535f },
{ -0.284902f, 9.151853f, -0.432535f },
{ -0.7f, 11.31025f, -0.358304f },
{ -0.7f, 9.773953f, 0.185589f },
{ -0.7f, 9.773953f, -0.918194f },
{ -0.7f, 11.15022f, -0.918194f },
{ 0.7f, 11.31025f, -0.358304f },
{ 0.7f, 9.773953f, 0.185589f },
{ 0.7f, 9.773953f, -0.918194f },
{ 0.7f, 11.15022f, -0.918194f }
};

NJS_VECTOR normal_01828A90[] = {
	{ 0, 1, 0 },
{ 0.688477f, 0.725259f, 0 },
{ 0.5418f, 0.840507f, 0 },
{ 0.344238f, 0.725258f, -0.596238f },
{ 0.2709f, 0.840507f, -0.469213f },
{ -0.344238f, 0.725258f, -0.596238f },
{ -0.2709f, 0.840507f, -0.469213f },
{ -0.688477f, 0.725258f, 0 },
{ -0.5418f, 0.840507f, 0 },
{ -0.344238f, 0.725258f, 0.596238f },
{ -0.2709f, 0.840507f, 0.469213f },
{ 0.344238f, 0.725258f, 0.596238f },
{ 0.2709f, 0.840507f, 0.469213f },
{ -0.561948f, -0.612224f, -0.556234f },
{ -0.600251f, 0.54306f, -0.587183f },
{ -0.657467f, -0.670106f, 0.344521f },
{ -0.730864f, 0.559411f, 0.39102f },
{ 0.024531f, -0.667413f, 0.744284f },
{ 0.027893f, 0.530185f, 0.847423f },
{ 0.690185f, -0.638575f, 0.340392f },
{ 0.71938f, 0.598724f, 0.352166f },
{ 0.551079f, -0.612806f, -0.566375f },
{ 0.594559f, 0.540965f, -0.594858f },
{ 0.021593f, 0, 0.999767f },
{ 0.021593f, 0, 0.999767f },
{ 0.855027f, 0, -0.518584f },
{ 0.849969f, 0, -0.526832f },
{ -0.87662f, 0, -0.481183f },
{ -0.871924f, 0, -0.489642f },
{ -0.580673f, 0.723608f, 0.373109f },
{ -0.616687f, 0.262717f, 0.742077f },
{ -0.707107f, 0, -0.707107f },
{ -0.59342f, 0.48467f, -0.64261f },
{ 0.580673f, 0.723608f, 0.373109f },
{ 0.616687f, 0.262717f, 0.742077f },
{ 0.707107f, 0, -0.707107f },
{ 0.59342f, 0.48467f, -0.64261f }
};

NJS_MODEL_SADX attach_01828C4C = { vertex_018288D0, normal_01828A90, LengthOfArray<Sint32>(vertex_018288D0), meshlist_01828828, matlist_01828598, LengthOfArray<Uint16>(meshlist_01828828), LengthOfArray<Uint16>(matlist_01828598),{ 0, 5.662093f, -0.011153f }, 5.854242f, NULL };

NJS_OBJECT object_01828C78 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_01828C4C, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_01828564, NULL };

