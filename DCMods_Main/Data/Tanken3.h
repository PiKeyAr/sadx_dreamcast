#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

NJS_OBJECT object_00229368 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -2.615491f, -4.99393f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0022939C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -1.53418f, 9.91825f, 0, 0, 0, 0, 1, 1, 1, &object_00229368, NULL };

NJS_OBJECT object_002293D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -1.018445f, -5.774789f, -0.26764f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00229404 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.227057f, -1.464129f, -2.143114f, 0, 0, 0, 1, 1, 1, &object_002293D0, &object_0022939C };

NJS_OBJECT object_00229438 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -0.695875f, -2.961776f, 0.000001f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0022946C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.227058f, -1.464129f, 2.143114f, 0, 0, 0, 1, 1, 1, &object_00229438, &object_00229404 };

NJS_OBJECT object_002294A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 5.658334f, 0.725561f, -2.143114f, 0, 0, 0, 1, 1, 1, NULL, &object_0022946C };

NJS_OBJECT object_002294D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 5.658334f, 0.725561f, 2.143114f, 0, 0, 0, 1, 1, 1, NULL, &object_002294A0 };

NJS_OBJECT object_00229508 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 4.986345f, -5.380502f, 0.95f, 0, 0, 0, 1, 1, 1, NULL, &object_002294D4 };

NJS_OBJECT object_0022953C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 4.986347f, -5.380502f, -0.95f, 0, 0, 0, 1, 1, 1, NULL, &object_00229508 };

NJS_OBJECT object_00229570 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -3.821123f, 0.994835f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_002295A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.582343f, -9.486165f, 0.95f, 0, 0, 0, 1, 1, 1, &object_00229570, &object_0022953C };

NJS_OBJECT object_002295D8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -3.821123f, 0.994836f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0022960C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.582343f, -9.486165f, -0.95f, 0, 0, 0, 1, 1, 1, &object_002295D8, &object_002295A4 };

NJS_OBJECT object_00229640 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.728641f, -0.185255f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0022960C };

NJS_OBJECT object_00229674 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -3.632681f, 0.225311f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00229640 };

NJS_MATERIAL matlist3_002296A8[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_002296BC[] = {
	0, 1, 3,
	7, 8, 13,
	4, 6, 7,
	9, 10, 0,
	7, 6, 11,
	6, 9, 11,
	11, 8, 7,
	12, 8, 3,
	3, 8, 11,
	4, 10, 9,
	2, 3, 11,
	11, 9, 2,
	3, 1, 12,
	3, 2, 0,
	7, 5, 4,
	13, 5, 7,
	9, 6, 4,
	0, 2, 9
};

NJS_TEX uv3_00229728[] = {
	{ 103, 206 },
	{ 126, 205 },
	{ 128, 151 },
	{ 218, 151 },
	{ 173, 155 },
	{ 185, 219 },
	{ 250, 205 },
	{ 250, 152 },
	{ 218, 151 },
	{ 46, 152 },
	{ 47, 211 },
	{ 103, 206 },
	{ 218, 151 },
	{ 250, 152 },
	{ 234, 138 },
	{ 0, 152 },
	{ 46, 152 },
	{ 23, 137 },
	{ 174, 138 },
	{ 173, 155 },
	{ 218, 151 },
	{ 163, 218 },
	{ 173, 155 },
	{ 128, 151 },
	{ 128, 151 },
	{ 173, 155 },
	{ 174, 138 },
	{ 0, 206 },
	{ 47, 211 },
	{ 46, 152 },
	{ 93, 150 },
	{ 128, 151 },
	{ 112, 138 },
	{ 69, 138 },
	{ 46, 152 },
	{ 93, 150 },
	{ 128, 151 },
	{ 126, 205 },
	{ 163, 218 },
	{ 128, 151 },
	{ 93, 150 },
	{ 103, 206 },
	{ 218, 151 },
	{ 221, 205 },
	{ 250, 205 },
	{ 185, 219 },
	{ 221, 205 },
	{ 218, 151 },
	{ 46, 152 },
	{ 0, 152 },
	{ 0, 206 },
	{ 103, 206 },
	{ 93, 150 },
	{ 46, 152 }
};

NJS_MESHSET_SADX meshlist3_00229800[] = {
	{ NJD_MESHSET_3 | 0, 18, poly3_002296BC, NULL, NULL, NULL, uv3_00229728, NULL }
};

NJS_VECTOR vertex_00229818[] = {
	{ -2.141728f, -1.112522f, -1.066207f },
	{ -2.036017f, -1.133088f, 0.803161f },
	{ -1.305205f, 0.210567f, -0.773064f },
	{ -1.418701f, 0.219247f, 0.587795f },
	{ 2.141728f, -1.112522f, -1.066207f },
	{ 2.036017f, -1.133088f, 0.803161f },
	{ 1.305205f, 0.210567f, -0.773064f },
	{ 1.418701f, 0.219247f, 0.587795f },
	{ 0, 0.219247f, 1.185836f },
	{ 0, 0.219247f, -0.991581f },
	{ 0, -1.289121f, -1.47557f },
	{ 0, 0.46444f, 0.09118699f },
	{ -0.449149f, -1.491876f, 1.581006f },
	{ 0.536684f, -1.500368f, 1.589799f }
};

NJS_VECTOR normal_002298C0[] = {
	{ -0.6813419f, 0.498503f, -0.535974f },
	{ -0.729225f, 0.419029f, 0.540967f },
	{ -0.438996f, 0.745479f, -0.501541f },
	{ -0.555834f, 0.728009f, 0.401312f },
	{ 0.6813419f, 0.498503f, -0.535974f },
	{ 0.732877f, 0.41981f, 0.5353979f },
	{ 0.438996f, 0.745479f, -0.501541f },
	{ 0.556456f, 0.730318f, 0.396222f },
	{ -0.004184f, 0.728595f, 0.684932f },
	{ 0, 0.71412f, -0.7000239f },
	{ 0, 0.305527f, -0.952184f },
	{ 0, 0.999949f, 0.010129f },
	{ -0.366548f, 0.302926f, 0.879704f },
	{ 0.374108f, 0.316128f, 0.871841f }
};

NJS_MODEL_SADX attach_00229968 = { vertex_00229818, normal_002298C0, LengthOfArray(vertex_00229818), meshlist3_00229800, matlist3_002296A8, LengthOfArray(meshlist3_00229800), LengthOfArray(matlist3_002296A8),{ 0, -0.5179639f, 0.057114f }, 2.630393f, NULL };

NJS_OBJECT object_00229990 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00229968, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist3_00221CD0[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken04, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_002299C4[] = {
	9, 2, 5,
	1, 8, 3,
	2, 8, 5,
	5, 10, 9,
	5, 1, 0,
	5, 8, 1,
	5, 0, 10,
	0, 6, 4,
	8, 2, 7,
	4, 7, 2,
	9, 10, 4,
	3, 6, 1,
	0, 1, 6,
	8, 7, 3,
	4, 2, 9,
	10, 0, 4
};

NJS_TEX uv3_00229A24[] = {
	{ 155, 134 },
	{ 233, 131 },
	{ 125, 172 },
	{ 70, 129 },
	{ 180, 129 },
	{ 125, 36 },
	{ 233, 131 },
	{ 180, 129 },
	{ 125, 172 },
	{ 125, 172 },
	{ 95, 134 },
	{ 155, 134 },
	{ 125, 172 },
	{ 70, 129 },
	{ 17, 131 },
	{ 125, 172 },
	{ 180, 129 },
	{ 70, 129 },
	{ 125, 172 },
	{ 17, 131 },
	{ 95, 134 },
	{ 17, 131 },
	{ 48, 44 },
	{ 125, 33 },
	{ 180, 129 },
	{ 233, 131 },
	{ 202, 44 },
	{ 125, 33 },
	{ 202, 44 },
	{ 233, 131 },
	{ 155, 134 },
	{ 95, 134 },
	{ 125, 33 },
	{ 125, 36 },
	{ 48, 44 },
	{ 70, 129 },
	{ 17, 131 },
	{ 70, 129 },
	{ 48, 44 },
	{ 180, 129 },
	{ 202, 44 },
	{ 125, 36 },
	{ 125, 33 },
	{ 233, 131 },
	{ 155, 134 },
	{ 95, 134 },
	{ 17, 131 },
	{ 125, 33 }
};

NJS_MESHSET_SADX meshlist3_00229AE4[] = {
	{ NJD_MESHSET_3 | 0, 16, poly3_002299C4, NULL, NULL, NULL, uv3_00229A24, NULL }
};

NJS_VECTOR vertex_00229AFC[] = {
	{ -2.060683f, -1.437393f, -0.384065f },
	{ -1.039533f, -1.397692f, 1.066848f },
	{ 2.060683f, -1.437393f, -0.384065f },
	{ 0, 0.195171f, 1.190118f },
	{ 0, 0.239294f, -0.986843f },
	{ 0, -2.136999f, -0.275375f },
	{ -1.459595f, 0.053154f, -0.048336f },
	{ 1.459595f, 0.053154f, -0.048336f },
	{ 1.039533f, -1.397692f, 1.066848f },
	{ 0.576342f, -1.48097f, -1.207818f },
	{ -0.577641f, -1.48097f, -1.207818f }
};

NJS_VECTOR normal_00229B80[] = {
	{ -0.921695f, -0.323326f, -0.214333f },
	{ -0.471981f, -0.398503f, 0.7864029f },
	{ 0.921663f, -0.323353f, -0.214428f },
	{ 0, 0.239962f, 0.970782f },
	{ 0.000038f, 0.319245f, -0.9476719f },
	{ 0.000035f, -0.998294f, -0.058394f },
	{ -0.886763f, 0.461183f, -0.031009f },
	{ 0.886763f, 0.461183f, -0.031009f },
	{ 0.471981f, -0.398503f, 0.7864029f },
	{ 0.273026f, -0.36464f, -0.890222f },
	{ -0.273308f, -0.364579f, -0.89016f }
};

NJS_MODEL_SADX attach_00229C04 = { vertex_00229AFC, normal_00229B80, LengthOfArray(vertex_00229AFC), meshlist3_00229AE4, matlist3_00221CD0, LengthOfArray(meshlist3_00229AE4), LengthOfArray(matlist3_00221CD0),{ 0, -0.9488519f, -0.00885f }, 2.401014f, NULL };

NJS_OBJECT object_00229C2C = { NJD_EVAL_UNIT_SCL, &attach_00229C04, -0.028397f, 0.033302f, 0, 0xD4, 0xFFFFC005, 0xD4, 1, 1, 1, &object_00229990, NULL };

NJS_MATERIAL matlist3_00221F80[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken04, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_00229C60[] = {
	1, 2, 3,
	3, 7, 5,
	7, 6, 4,
	6, 2, 0,
	1, 0, 2,
	0, 4, 6,
	4, 5, 7,
	7, 3, 8,
	2, 6, 8,
	8, 6, 7,
	8, 3, 2,
	3, 5, 1
};

Sint16 poly3_00229CA8[] = {
	11, 12, 10,
	9, 10, 13,
	14, 13, 12,
	15, 14, 11,
	12, 11, 14,
	10, 9, 11,
	13, 14, 9,
	11, 9, 15,
	15, 9, 14
};

NJS_TEX uv3_00229CE0[] = {
	{ 123, 248 },
	{ 126, 39 },
	{ 66, 52 },
	{ 66, 52 },
	{ 126, 37 },
	{ 63, 248 },
	{ 126, 37 },
	{ 215, 26 },
	{ 122, 248 },
	{ 215, 26 },
	{ 126, 39 },
	{ 236, 248 },
	{ 123, 248 },
	{ 236, 248 },
	{ 126, 39 },
	{ 236, 248 },
	{ 122, 248 },
	{ 215, 26 },
	{ 122, 248 },
	{ 63, 248 },
	{ 126, 37 },
	{ 126, 37 },
	{ 66, 52 },
	{ 126, 7 },
	{ 126, 39 },
	{ 215, 26 },
	{ 126, 7 },
	{ 126, 7 },
	{ 215, 26 },
	{ 126, 37 },
	{ 126, 7 },
	{ 66, 52 },
	{ 126, 39 },
	{ 66, 52 },
	{ 63, 248 },
	{ 123, 248 }
};

NJS_TEX uv3_00229D70[] = {
	{ 9, 52 },
	{ 8, 8 },
	{ 9, 8 },
	{ 31, 52 },
	{ 9, 8 },
	{ 48, 8 },
	{ 55, 52 },
	{ 48, 8 },
	{ 8, 8 },
	{ 32, 56 },
	{ 55, 52 },
	{ 9, 52 },
	{ 8, 8 },
	{ 9, 52 },
	{ 55, 52 },
	{ 9, 8 },
	{ 31, 52 },
	{ 9, 52 },
	{ 48, 8 },
	{ 55, 52 },
	{ 31, 52 },
	{ 9, 52 },
	{ 31, 52 },
	{ 32, 56 },
	{ 32, 56 },
	{ 31, 52 },
	{ 55, 52 }
};

NJS_MESHSET_SADX meshlist3_00229DDC[] = {
	{ NJD_MESHSET_3 | 0, 12, poly3_00229C60, NULL, NULL, NULL, uv3_00229CE0, NULL },
	{ NJD_MESHSET_3 | 1, 9, poly3_00229CA8, NULL, NULL, NULL, uv3_00229D70, NULL }
};

NJS_VECTOR vertex_00229E0C[] = {
	{ 1.154735f, -2.916996f, -0.244473f },
	{ -0.238331f, -2.916996f, 1.229253f },
	{ -0.197651f, 0.229003f, 0.987892f },
	{ -0.930039f, 0.02441f, -0.227652f },
	{ -0.246309f, -2.916996f, -1.227055f },
	{ -0.976877f, -2.916996f, -0.236519f },
	{ 0.8993649f, 0.426754f, -0.227635f },
	{ -0.19957f, 0.247068f, -1.000675f },
	{ -0.201156f, 0.703862f, -0.227107f },
	{ -0.015591f, -3.789233f, -0.5904149f },
	{ -0.476985f, -1.077093f, -0.520767f },
	{ -0.473598f, -3.789233f, 0.240837f },
	{ -0.49938f, -1.077093f, 0.428047f },
	{ 0.333515f, -1.077093f, -0.026965f },
	{ 0.475291f, -3.789233f, 0.221856f },
	{ -0.007372f, -4.04653f, -0.179534f }
};

NJS_VECTOR normal_00229ECC[] = {
	{ 0.992227f, 0.071698f, -0.101714f },
	{ -0.136116f, 0.057444f, 0.989026f },
	{ -0.107753f, 0.488795f, 0.8657179f },
	{ -0.93748f, 0.333716f, -0.098817f },
	{ -0.162602f, 0.071696f, -0.984083f },
	{ -0.994701f, 0.034809f, -0.096738f },
	{ 0.8236139f, 0.560266f, -0.088103f },
	{ -0.13423f, 0.444908f, -0.88546f },
	{ -0.222386f, 0.972405f, -0.070517f },
	{ 0.01265f, -0.435588f, -0.900057f },
	{ -0.512801f, 0.061447f, -0.856306f },
	{ -0.721684f, -0.512657f, 0.46514f },
	{ -0.549188f, 0.057447f, 0.833722f },
	{ 0.984031f, 0.176418f, 0.023643f },
	{ 0.781067f, -0.456645f, 0.425923f },
	{ -0.003505f, -0.9845189f, -0.175242f }
};

NJS_MODEL_SADX attach_00229F8C = { vertex_00229E0C, normal_00229ECC, LengthOfArray(vertex_00229E0C), meshlist3_00229DDC, matlist3_00221F80, LengthOfArray(meshlist3_00229DDC), LengthOfArray(matlist3_00221F80),{ 0.088929f, -1.671334f, 0.001099f }, 2.603363f, NULL };

NJS_OBJECT object_00229FB4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00229F8C, 0.012378f, -0.013827f, 0, 0x1FFD, 0xFFFFC005, 0x1FFD, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist3_00222330[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_00229FE8[] = {
	4, 1, 2,
	7, 5, 0,
	0, 2, 3,
	3, 7, 0,
	8, 6, 1,
	2, 1, 6,
	1, 0, 5,
	2, 6, 3,
	1, 5, 8,
	4, 0, 1,
	2, 0, 4
};

Sint16 poly3_0022A02A[] = {
	3, 6, 8,
	5, 7, 3,
	3, 8, 5
};

NJS_TEX uv3_0022A03C[] = {
	{ 40, 6 },
	{ 24, 18 },
	{ 61, 18 },
	{ 119, 247 },
	{ 140, 247 },
	{ 133, 18 },
	{ 133, 18 },
	{ 61, 18 },
	{ 82, 247 },
	{ 82, 247 },
	{ 119, 247 },
	{ 133, 18 },
	{ 4, 247 },
	{ 43, 223 },
	{ 24, 18 },
	{ 61, 18 },
	{ 24, 18 },
	{ 43, 223 },
	{ 197, 18 },
	{ 133, 18 },
	{ 140, 247 },
	{ 61, 18 },
	{ 43, 223 },
	{ 82, 247 },
	{ 197, 18 },
	{ 140, 247 },
	{ 177, 247 },
	{ 213, 6 },
	{ 133, 18 },
	{ 197, 18 },
	{ 61, 18 },
	{ 133, 18 },
	{ 213, 6 }
};

NJS_TEX uv3_0022A0C0[] = {
	{ 12, 245 },
	{ 6, 241 },
	{ 0, 246 },
	{ 3, 252 },
	{ 9, 252 },
	{ 12, 245 },
	{ 12, 245 },
	{ 0, 246 },
	{ 3, 252 }
};

NJS_MESHSET_SADX meshlist3_0022A0E4[] = {
	{ NJD_MESHSET_3 | 0, 11, poly3_00229FE8, NULL, NULL, NULL, uv3_0022A03C, NULL },
	{ NJD_MESHSET_3 | 1, 3, poly3_0022A02A, NULL, NULL, NULL, uv3_0022A0C0, NULL }
};

NJS_VECTOR vertex_0022A114[] = {
	{ -0.021243f, -0.020111f, -0.332525f },
	{ -0.495782f, -0.02011f, 0.489402f },
	{ 0.453296f, -0.02011f, 0.489402f },
	{ 0.751131f, -4.111679f, -0.003528f },
	{ -0.021243f, 0.194284f, 0.078439f },
	{ -0.347329f, -4.111679f, -1.00966f },
	{ 0.01288f, -3.696045f, 0.7615589f },
	{ 0.358581f, -4.111679f, -0.998816f },
	{ -0.749046f, -4.111678f, -0.008951f }
};

NJS_VECTOR normal_0022A180[] = {
	{ 0.006853f, 0.535185f, -0.844707f },
	{ -0.720318f, 0.530229f, 0.447213f },
	{ 0.725572f, 0.526849f, 0.442691f },
	{ 0.776894f, -0.602917f, 0.181456f },
	{ 0, 0.986362f, -0.164589f },
	{ -0.454821f, -0.536781f, -0.710636f },
	{ 0.008695999f, -0.365723f, 0.930683f },
	{ 0.478503f, -0.530995f, -0.699342f },
	{ -0.768523f, -0.611637f, 0.187811f }
};

NJS_MODEL_SADX attach_0022A1EC = { vertex_0022A114, normal_0022A180, LengthOfArray(vertex_0022A114), meshlist3_0022A0E4, matlist3_00222330, LengthOfArray(meshlist3_0022A0E4), LengthOfArray(matlist3_00222330),{ 0.001042f, -1.958698f, -0.124051f }, 2.329427f, NULL };

NJS_OBJECT object_0022A214 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022A1EC, -0.009746999f, 0.255953f, 0.003955f, 0x1D56, 0xFFFFC005, 0x1D56, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist3_002225B8[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022A248[] = {
	2, 1, 0,
	6, 5, 4,
	5, 8, 3,
	1, 2, 6,
	8, 5, 6,
	6, 7, 1,
	6, 2, 8,
	0, 8, 2,
	3, 4, 5,
	4, 7, 6
};

Sint16 poly3_0022A284[] = {
	3, 0, 1,
	1, 4, 3,
	1, 7, 4
};

NJS_TEX uv3_0022A298[] = {
	{ 203, 203 },
	{ 251, 220 },
	{ 245, 105 },
	{ 175, 227 },
	{ 203, 203 },
	{ 251, 220 },
	{ 203, 203 },
	{ 175, 102 },
	{ 245, 105 },
	{ 251, 220 },
	{ 203, 203 },
	{ 175, 227 },
	{ 175, 102 },
	{ 203, 203 },
	{ 175, 227 },
	{ 175, 227 },
	{ 249, 247 },
	{ 251, 220 },
	{ 175, 227 },
	{ 203, 203 },
	{ 175, 102 },
	{ 245, 105 },
	{ 175, 102 },
	{ 203, 203 },
	{ 245, 105 },
	{ 251, 220 },
	{ 203, 203 },
	{ 251, 220 },
	{ 249, 247 },
	{ 175, 227 }
};

NJS_TEX uv3_0022A310[] = {
	{ 2, 254 },
	{ 11, 254 },
	{ 13, 244 },
	{ 13, 244 },
	{ 0, 244 },
	{ 2, 254 },
	{ 13, 244 },
	{ 6, 241 },
	{ 0, 244 }
};

NJS_MESHSET_SADX meshlist3_0022A334[] = {
	{ NJD_MESHSET_3 | 0, 10, poly3_0022A248, NULL, NULL, NULL, uv3_0022A298, NULL },
	{ NJD_MESHSET_3 | 1, 3, poly3_0022A284, NULL, NULL, NULL, uv3_0022A310, NULL }
};

NJS_VECTOR vertex_0022A364[] = {
	{ 0.602242f, -0.470595f, -0.368907f },
	{ 0.866013f, -0.68041f, 2.081452f },
	{ 0.777411f, 0.120663f, 1.754521f },
	{ -0.553256f, -0.470595f, -0.368907f },
	{ -0.857697f, -0.68041f, 2.081452f },
	{ -0.7690949f, 0.120663f, 1.754521f },
	{ 0.004158f, 0.551703f, 2.287123f },
	{ 0.004158f, -0.680409f, 2.664931f },
	{ 0.004161f, 0.684581f, -0.366104f }
};

NJS_VECTOR normal_0022A3D0[] = {
	{ 0.8082179f, -0.5399179f, -0.235101f },
	{ 0.755187f, -0.536756f, 0.376277f },
	{ 0.846676f, 0.491591f, 0.203664f },
	{ -0.796924f, -0.553935f, -0.240971f },
	{ -0.7577969f, -0.536151f, 0.371869f },
	{ -0.85019f, 0.487828f, 0.197992f },
	{ 0, 0.780578f, 0.6250589f },
	{ 0, -0.487373f, 0.873194f },
	{ -0.009746999f, 0.9675739f, -0.252401f }
};

NJS_MODEL_SADX attach_0022A43C = { vertex_0022A364, normal_0022A3D0, LengthOfArray(vertex_0022A364), meshlist3_0022A334, matlist3_002225B8, LengthOfArray(meshlist3_0022A334), LengthOfArray(matlist3_002225B8),{ 0.004158f, 0.002086f, 1.148012f }, 1.731692f, NULL };

NJS_OBJECT object_0022A464 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022A43C, 0.018719f, -0.019394f, 0.00746f, 0xFFFFC1CD, 0xFFFFC005, 0xFFFFC1CD, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0022A498 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 3.439611f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0022A464 };

NJS_OBJECT object_0022A4CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x7C68, 1, 1, 1, &object_0022A498, NULL };

NJS_OBJECT object_0022A500 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -0.7401159f, -0.301181f, 0, 0, 0, 0x3AAE, 1, 1, 1, &object_0022A4CC, NULL };

NJS_OBJECT object_0022A534 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 4.140634f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0022A500, &object_0022A214 };

NJS_OBJECT object_0022A568 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 3.837219f, 0, 0, 0, 0, 0x54B, 1, 1, 1, &object_0022A534, &object_00229FB4 };

NJS_OBJECT object_0022A59C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFC006, 1, 1, 1, &object_0022A568, NULL };

NJS_OBJECT object_0022A5D0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -2.625482f, -1.466684f, 0.95f, 0, 0, 0x1A9, 1, 1, 1, &object_0022A59C, NULL };

NJS_MATERIAL matlist3_0022299C[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken04, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022A604[] = {
	3, 2, 1,
	5, 7, 3,
	4, 6, 7,
	0, 2, 6,
	2, 0, 1,
	6, 4, 0,
	7, 5, 4,
	8, 3, 7,
	8, 6, 2,
	7, 6, 8,
	2, 3, 8,
	1, 5, 3
};

Sint16 poly3_0022A64C[] = {
	10, 12, 11,
	13, 10, 9,
	12, 13, 14,
	11, 14, 15,
	14, 11, 12,
	11, 9, 10,
	9, 14, 13,
	15, 9, 11,
	14, 9, 15
};

NJS_TEX uv3_0022A684[] = {
	{ 66, 52 },
	{ 126, 39 },
	{ 123, 248 },
	{ 63, 248 },
	{ 126, 37 },
	{ 66, 52 },
	{ 122, 248 },
	{ 215, 26 },
	{ 126, 37 },
	{ 236, 248 },
	{ 126, 39 },
	{ 215, 26 },
	{ 126, 39 },
	{ 236, 248 },
	{ 123, 248 },
	{ 215, 26 },
	{ 122, 248 },
	{ 236, 248 },
	{ 126, 37 },
	{ 63, 248 },
	{ 122, 248 },
	{ 126, 7 },
	{ 66, 52 },
	{ 126, 37 },
	{ 126, 7 },
	{ 215, 26 },
	{ 126, 39 },
	{ 126, 37 },
	{ 215, 26 },
	{ 126, 7 },
	{ 126, 39 },
	{ 66, 52 },
	{ 126, 7 },
	{ 123, 248 },
	{ 63, 248 },
	{ 66, 52 }
};

NJS_TEX uv3_0022A714[] = {
	{ 10, 7 },
	{ 9, 7 },
	{ 7, 54 },
	{ 48, 7 },
	{ 10, 7 },
	{ 29, 54 },
	{ 9, 7 },
	{ 48, 7 },
	{ 52, 54 },
	{ 7, 54 },
	{ 52, 54 },
	{ 29, 58 },
	{ 52, 54 },
	{ 7, 54 },
	{ 9, 7 },
	{ 7, 54 },
	{ 29, 54 },
	{ 10, 7 },
	{ 29, 54 },
	{ 52, 54 },
	{ 48, 7 },
	{ 29, 58 },
	{ 29, 54 },
	{ 7, 54 },
	{ 52, 54 },
	{ 29, 54 },
	{ 29, 58 }
};

NJS_MESHSET_SADX meshlist3_0022A780[] = {
	{ NJD_MESHSET_3 | 0, 12, poly3_0022A604, NULL, NULL, NULL, uv3_0022A684, NULL },
	{ NJD_MESHSET_3 | 1, 9, poly3_0022A64C, NULL, NULL, NULL, uv3_0022A714, NULL }
};

NJS_VECTOR vertex_0022A7B0[] = {
	{ 1.154735f, -2.916996f, 0.244473f },
	{ -0.238331f, -2.916996f, -1.229253f },
	{ -0.197651f, 0.229003f, -0.987892f },
	{ -0.930039f, 0.02441f, 0.227652f },
	{ -0.246309f, -2.916996f, 1.227055f },
	{ -0.976877f, -2.916996f, 0.236519f },
	{ 0.8993649f, 0.426754f, 0.227635f },
	{ -0.19957f, 0.247068f, 1.000675f },
	{ -0.201156f, 0.703862f, 0.227107f },
	{ -0.070554f, -3.789233f, 0.590416f },
	{ -0.476985f, -1.077093f, 0.520767f },
	{ -0.528561f, -3.789233f, -0.240837f },
	{ -0.49938f, -1.077093f, -0.428047f },
	{ 0.333515f, -1.077093f, 0.026965f },
	{ 0.420328f, -3.789233f, -0.221856f },
	{ -0.062335f, -4.04653f, 0.179534f }
};

NJS_VECTOR normal_0022A870[] = {
	{ 0.992227f, 0.071698f, 0.101714f },
	{ -0.136116f, 0.057444f, -0.989026f },
	{ -0.107753f, 0.488795f, -0.8657179f },
	{ -0.93748f, 0.333717f, 0.098817f },
	{ -0.162602f, 0.071696f, 0.984083f },
	{ -0.994701f, 0.034809f, 0.096738f },
	{ 0.8236139f, 0.560266f, 0.088102f },
	{ -0.13423f, 0.444908f, 0.88546f },
	{ -0.222386f, 0.972405f, 0.070517f },
	{ 0.004879f, -0.436157f, 0.899858f },
	{ -0.504099f, 0.07240999f, 0.8606049f },
	{ -0.727672f, -0.505579f, -0.463556f },
	{ -0.540912f, 0.06899f, -0.838245f },
	{ 0.987363f, 0.156736f, -0.023404f },
	{ 0.775934f, -0.464188f, -0.427148f },
	{ -0.003505f, -0.9845189f, 0.175242f }
};

NJS_MODEL_SADX attach_0022A930 = { vertex_0022A7B0, normal_0022A870, LengthOfArray(vertex_0022A7B0), meshlist3_0022A780, matlist3_0022299C, LengthOfArray(meshlist3_0022A780), LengthOfArray(matlist3_0022299C),{ 0.088929f, -1.671334f, -0.001099f }, 2.603363f, NULL };

NJS_OBJECT object_0022A958 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022A930, 0.012377f, -0.013827f, 0, 0xFFFFE004, 0x3FFB, 0x1FFC, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist3_00222D4C[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022A98C[] = {
	4, 3, 8,
	1, 0, 5,
	4, 5, 7,
	3, 2, 6,
	2, 3, 4,
	0, 1, 3,
	5, 4, 1,
	7, 2, 4,
	6, 0, 3,
	8, 1, 4,
	3, 1, 8
};

Sint16 poly3_0022A9CE[] = {
	5, 0, 6,
	6, 2, 7,
	6, 7, 5
};

NJS_TEX uv3_0022A9E0[] = {
	{ 26, 18 },
	{ 63, 18 },
	{ 49, 6 },
	{ 125, 18 },
	{ 120, 247 },
	{ 141, 247 },
	{ 199, 18 },
	{ 141, 247 },
	{ 177, 247 },
	{ 63, 18 },
	{ 43, 223 },
	{ 82, 247 },
	{ 43, 223 },
	{ 63, 18 },
	{ 26, 18 },
	{ 120, 247 },
	{ 125, 18 },
	{ 63, 18 },
	{ 141, 247 },
	{ 199, 18 },
	{ 125, 18 },
	{ 4, 247 },
	{ 43, 223 },
	{ 26, 18 },
	{ 82, 247 },
	{ 120, 247 },
	{ 63, 18 },
	{ 49, 6 },
	{ 125, 18 },
	{ 199, 18 },
	{ 63, 18 },
	{ 125, 18 },
	{ 49, 6 }
};

NJS_TEX uv3_0022AA64[] = {
	{ 4, 253 },
	{ 9, 253 },
	{ 12, 247 },
	{ 12, 247 },
	{ 6, 242 },
	{ 1, 247 },
	{ 12, 247 },
	{ 1, 247 },
	{ 4, 253 }
};

NJS_MESHSET_SADX meshlist3_0022AA88[] = {
	{ NJD_MESHSET_3 | 0, 11, poly3_0022A98C, NULL, NULL, NULL, uv3_0022A9E0, NULL },
	{ NJD_MESHSET_3 | 1, 3, poly3_0022A9CE, NULL, NULL, NULL, uv3_0022AA64, NULL }
};

NJS_VECTOR vertex_0022AAB8[] = {
	{ 0.35149f, -4.086264f, -1.009663f },
	{ 0.050803f, 0.005304f, -0.378233f },
	{ -0.008718999f, -3.670631f, 0.761557f },
	{ 0.5253429f, 0.005305f, 0.489401f },
	{ -0.423736f, 0.005304f, 0.489401f },
	{ -0.354421f, -4.086264f, -0.998818f },
	{ 0.753207f, -4.086264f, -0.008954f },
	{ -0.74697f, -4.086265f, -0.00353f },
	{ 0.050803f, 0.219698f, 0.07843699f }
};

NJS_VECTOR normal_0022AB24[] = {
	{ 0.45446f, -0.540728f, -0.7078699f },
	{ 0.005538f, 0.552922f, -0.833215f },
	{ -0.011832f, -0.365655f, 0.930675f },
	{ 0.7194059f, 0.5259669f, 0.453667f },
	{ -0.711925f, 0.534614f, 0.455359f },
	{ -0.472467f, -0.538345f, -0.697825f },
	{ 0.76675f, -0.613791f, 0.188032f },
	{ -0.771696f, -0.60761f, 0.187871f },
	{ -0.00001f, 0.990005f, -0.141032f }
};

NJS_MODEL_SADX attach_0022AB90 = { vertex_0022AAB8, normal_0022AB24, LengthOfArray(vertex_0022AAB8), meshlist3_0022AA88, matlist3_00222D4C, LengthOfArray(meshlist3_0022AA88), LengthOfArray(matlist3_00222D4C),{ 0.003119f, -1.933283f, -0.124053f }, 2.329426f, NULL };

NJS_OBJECT object_0022ABB8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022AB90, 0.015449f, 0.252653f, 0.021448f, 0x1D56, 0xFFFFC005, 0x1D56, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist3_00222FD4[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022ABEC[] = {
	0, 1, 2,
	4, 5, 6,
	3, 8, 5,
	6, 2, 1,
	6, 5, 8,
	1, 7, 6,
	8, 2, 6,
	2, 8, 0,
	5, 4, 3,
	6, 7, 4
};

Sint16 poly3_0022AC28[] = {
	1, 0, 3,
	3, 4, 1,
	4, 7, 1
};

NJS_TEX uv3_0022AC3C[] = {
	{ 245, 105 },
	{ 251, 220 },
	{ 203, 203 },
	{ 251, 220 },
	{ 203, 203 },
	{ 175, 227 },
	{ 245, 105 },
	{ 175, 102 },
	{ 203, 203 },
	{ 175, 227 },
	{ 203, 203 },
	{ 251, 220 },
	{ 175, 227 },
	{ 203, 203 },
	{ 175, 102 },
	{ 251, 220 },
	{ 249, 247 },
	{ 175, 227 },
	{ 175, 102 },
	{ 203, 203 },
	{ 175, 227 },
	{ 203, 203 },
	{ 175, 102 },
	{ 245, 105 },
	{ 203, 203 },
	{ 251, 220 },
	{ 245, 105 },
	{ 175, 227 },
	{ 249, 247 },
	{ 251, 220 }
};

NJS_TEX uv3_0022ACB4[] = {
	{ 0, 244 },
	{ 3, 254 },
	{ 10, 254 },
	{ 10, 254 },
	{ 13, 244 },
	{ 0, 244 },
	{ 13, 244 },
	{ 6, 242 },
	{ 0, 244 }
};

NJS_MESHSET_SADX meshlist3_0022ACD8[] = {
	{ NJD_MESHSET_3 | 0, 10, poly3_0022ABEC, NULL, NULL, NULL, uv3_0022AC3C, NULL },
	{ NJD_MESHSET_3 | 1, 3, poly3_0022AC28, NULL, NULL, NULL, uv3_0022ACB4, NULL }
};

NJS_VECTOR vertex_0022AD08[] = {
	{ -0.5562209f, -0.470588f, -0.368907f },
	{ -0.861856f, -0.680405f, 2.081453f },
	{ -0.773255f, 0.120669f, 1.754522f },
	{ 0.518393f, -0.470587f, -0.368908f },
	{ 0.861854f, -0.6804039f, 2.081451f },
	{ 0.773251f, 0.12067f, 1.75452f },
	{ -0.00001f, 0.551709f, 2.287124f },
	{ 0, -0.680405f, 2.664931f },
	{ -0.00006f, 0.684588f, -0.366104f }
};

NJS_VECTOR normal_0022AD74[] = {
	{ -0.796584f, -0.554352f, -0.241137f },
	{ -0.757872f, -0.5361339f, 0.37174f },
	{ -0.850292f, 0.487717f, 0.197826f },
	{ 0.785665f, -0.567531f, -0.246249f },
	{ 0.760256f, -0.535585f, 0.36764f },
	{ 0.8534999f, 0.484218f, 0.19254f },
	{ 0, 0.7805769f, 0.6250589f },
	{ 0.000001f, -0.487374f, 0.873194f },
	{ 0.00924f, 0.961307f, -0.275325f }
};

NJS_MODEL_SADX attach_0022ADE0 = { vertex_0022AD08, normal_0022AD74, LengthOfArray(vertex_0022AD08), meshlist3_0022ACD8, matlist3_00222FD4, LengthOfArray(meshlist3_0022ACD8), LengthOfArray(matlist3_00222FD4),{ -0.00001f, 0.002092f, 1.148011f }, 1.731693f, NULL };

NJS_OBJECT object_0022AE08 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022ADE0, 0.018726f, -0.019387f, 0.017954f, 0xFFFFC1CD, 0xFFFFC005, 0xFFFFC1CD, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0022AE3C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 3.43961f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0022AE08 };

NJS_OBJECT object_0022AE70 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x7C68, 1, 1, 1, &object_0022AE3C, NULL };

NJS_OBJECT object_0022AEA4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -0.740117f, -0.301181f, 0, 0, 0, 0x3AAE, 1, 1, 1, &object_0022AE70, NULL };

NJS_OBJECT object_0022AED8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 4.140633f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0022AEA4, &object_0022ABB8 };

NJS_OBJECT object_0022AF0C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 3.837219f, 0, 0, 0, 0, 0x54B, 1, 1, 1, &object_0022AED8, &object_0022A958 };

NJS_OBJECT object_0022AF40 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFC006, 1, 1, 1, &object_0022AF0C, NULL };

NJS_OBJECT object_0022AF74 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -2.625482f, -1.466684f, -0.95f, 0, 0, 0x1A9, 1, 1, 1, &object_0022AF40, &object_0022A5D0 };

NJS_OBJECT object_0022AFA8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.701483f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0022AF74, &object_00229C2C };

NJS_OBJECT object_0022AFDC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFFE57, 1, 1, 1, &object_0022AFA8, NULL };

NJS_OBJECT object_0022B010 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.02942f, -0.074718f, 0, 0, 0, 0, 1, 1, 1, &object_0022AFDC, NULL };

NJS_MATERIAL matlist3_0022B044[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken07, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022B058[] = {
	0, 2, 1,
	4, 6, 12,
	11, 5, 3,
	13, 10, 8,
	7, 9, 11
};

Sint16 poly3_0022B076[] = {
	3, 5, 4, 6,
	5, 11, 6, 12,
	11, 9, 13, 10,
	9, 7, 10, 8
};

NJS_TEX uv3_0022B098[] = {
	{ 123, 149 },
	{ 200, 104 },
	{ 49, 109 },
	{ 28, 216 },
	{ 66, 254 },
	{ 107, 217 },
	{ 122, 255 },
	{ 42, 235 },
	{ 0, 255 },
	{ 138, 217 },
	{ 176, 254 },
	{ 214, 216 },
	{ 247, 255 },
	{ 204, 235 },
	{ 122, 255 }
};

NJS_TEX uv3_0022B0D4[] = {
	{ 0, 255 },
	{ 42, 250 },
	{ 28, 7 },
	{ 66, 15 },
	{ 42, 250 },
	{ 122, 255 },
	{ 66, 15 },
	{ 107, 9 },
	{ 122, 255 },
	{ 204, 250 },
	{ 138, 8 },
	{ 176, 15 },
	{ 204, 250 },
	{ 247, 255 },
	{ 176, 15 },
	{ 214, 7 }
};

NJS_MESHSET_SADX meshlist3_0022B114[] = {
	{ NJD_MESHSET_3 | 0, 5, poly3_0022B058, NULL, NULL, NULL, uv3_0022B098, NULL },
	{ NJD_MESHSET_4 | 0, 4, poly3_0022B076, NULL, NULL, NULL, uv3_0022B0D4, NULL }
};

NJS_VECTOR vertex_0022B144[] = {
	{ -0.012298f, 2.118362f, 1.188275f },
	{ -0.7557859f, 2.49694f, 1.198782f },
	{ 0.758985f, 2.500677f, 1.198782f },
	{ -1.25529f, 0.634839f, 0.8902f },
	{ -0.964745f, 2.734245f, 0.784739f },
	{ -0.824251f, 0.8030109f, 2.030707f },
	{ -0.585431f, 2.671784f, 1.564605f },
	{ 1.230696f, 0.634839f, 0.902068f },
	{ 0.903408f, 2.734245f, 0.7966059f },
	{ 0.799656f, 0.8030109f, 2.042574f },
	{ 0.524094f, 2.671785f, 1.576472f },
	{ -0.01953f, 0.634839f, 1.257918f },
	{ -0.172113f, 2.721482f, 1.092507f },
	{ 0.13362f, 2.727391f, 1.163827f }
};

NJS_VECTOR normal_0022B1EC[] = {
	{ 0.00006799999f, -0.02761f, 0.9996189f },
	{ 0.00006799999f, -0.02761f, 0.9996189f },
	{ 0.00006799999f, -0.02761f, 0.9996189f },
	{ -0.825113f, -0.378243f, 0.419668f },
	{ -0.746923f, 0.572282f, 0.338525f },
	{ -0.202069f, -0.345004f, 0.9165919f },
	{ -0.103708f, 0.6365629f, 0.76422f },
	{ 0.8085369f, -0.417776f, 0.414404f },
	{ 0.784714f, 0.5085599f, 0.354389f },
	{ 0.215151f, -0.394489f, 0.893358f },
	{ 0.114999f, 0.597205f, 0.793802f },
	{ 0.009323999f, -0.6186129f, 0.785641f },
	{ 0.502997f, 0.6681769f, 0.548208f },
	{ -0.487256f, 0.660805f, 0.570892f }
};

NJS_MODEL_SADX attach_0022B294 = { vertex_0022B144, normal_0022B1EC, LengthOfArray(vertex_0022B144), meshlist3_0022B114, matlist3_0022B044, LengthOfArray(meshlist3_0022B114), LengthOfArray(matlist3_0022B044),{ -0.012297f, 1.684542f, 1.413656f }, 1.393043f, NULL };

NJS_OBJECT object_0022B2BC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022B294, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist3_0022B2F0[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022B304[] = {
	12, 10, 7,
	7, 5, 11,
	14, 3, 10,
	10, 9, 13,
	1, 5, 6,
	9, 10, 3,
	5, 1, 15,
	8, 9, 2,
	8, 4, 0,
	6, 0, 1,
	13, 7, 10,
	3, 2, 9,
	5, 7, 13,
	9, 8, 13,
	13, 8, 6,
	6, 5, 13,
	2, 4, 8,
	0, 6, 8
};

NJS_TEX uv3_0022B370[] = {
	{ 224, 239 },
	{ 209, 229 },
	{ 183, 251 },
	{ 183, 251 },
	{ 154, 229 },
	{ 142, 239 },
	{ 245, 233 },
	{ 231, 217 },
	{ 209, 229 },
	{ 209, 229 },
	{ 211, 211 },
	{ 183, 223 },
	{ 134, 217 },
	{ 154, 229 },
	{ 155, 211 },
	{ 211, 211 },
	{ 209, 229 },
	{ 231, 217 },
	{ 154, 229 },
	{ 134, 217 },
	{ 118, 234 },
	{ 183, 196 },
	{ 211, 211 },
	{ 213, 207 },
	{ 183, 196 },
	{ 183, 204 },
	{ 153, 207 },
	{ 155, 211 },
	{ 153, 207 },
	{ 134, 217 },
	{ 183, 223 },
	{ 183, 251 },
	{ 209, 229 },
	{ 231, 217 },
	{ 213, 207 },
	{ 211, 211 },
	{ 154, 229 },
	{ 183, 251 },
	{ 183, 223 },
	{ 211, 211 },
	{ 183, 196 },
	{ 183, 223 },
	{ 183, 223 },
	{ 183, 196 },
	{ 155, 211 },
	{ 155, 211 },
	{ 154, 229 },
	{ 183, 223 },
	{ 213, 207 },
	{ 183, 204 },
	{ 183, 196 },
	{ 153, 207 },
	{ 155, 211 },
	{ 183, 196 }
};

NJS_MESHSET_SADX meshlist3_0022B448[] = {
	{ NJD_MESHSET_3 | 0, 18, poly3_0022B304, NULL, NULL, NULL, uv3_0022B370, NULL }
};

NJS_VECTOR vertex_0022B460[] = {
	{ -0.776963f, 4.415877f, -0.797473f },
	{ -1.256103f, 4.280281f, -0.087532f },
	{ 0.77859f, 4.415877f, -0.797473f },
	{ 1.252087f, 4.280281f, -0.087532f },
	{ 0, 4.39437f, -1.155176f },
	{ -0.750453f, 3.92006f, 0.490788f },
	{ -0.7116449f, 4.615487f, -0.034844f },
	{ 0.014555f, 2.993652f, 1.12094f },
	{ 0.017302f, 5.01736f, -0.883126f },
	{ 0.73834f, 4.615487f, -0.034844f },
	{ 0.6921279f, 3.92006f, 0.490788f },
	{ -1.062608f, 3.429353f, 0.65625f },
	{ 1.068907f, 3.447123f, 0.65625f },
	{ 0.014507f, 3.532194f, -0.728283f },
	{ 1.632181f, 3.707742f, 0.558594f },
	{ -1.675721f, 3.642587f, 0.546875f }
};

NJS_VECTOR normal_0022B520[] = {
	{ -0.560339f, 0.748387f, -0.354876f },
	{ -0.410257f, 0.792215f, 0.451757f },
	{ 0.575175f, 0.728957f, -0.371207f },
	{ 0.403202f, 0.795889f, 0.451651f },
	{ -0.005449f, 0.400312f, -0.916362f },
	{ 0.278996f, 0.682948f, 0.675088f },
	{ 0.068073f, 0.852356f, 0.518513f },
	{ -0.009137f, 0.805262f, 0.5928479f },
	{ 0.011974f, 0.9782929f, -0.20688f },
	{ -0.042737f, 0.862164f, 0.504823f },
	{ -0.335024f, 0.687624f, 0.644152f },
	{ -0.206451f, 0.428017f, 0.8798749f },
	{ 0.188215f, 0.45454f, 0.870614f },
	{ -0.011369f, 0.629726f, 0.776734f },
	{ 0.131763f, 0.7791179f, 0.612873f },
	{ -0.187191f, 0.751974f, 0.632055f }
};

NJS_MODEL_SADX attach_0022B5E0 = { vertex_0022B460, normal_0022B520, LengthOfArray(vertex_0022B460), meshlist3_0022B448, matlist3_0022B2F0, LengthOfArray(meshlist3_0022B448), LengthOfArray(matlist3_0022B2F0),{ -0.02177f, 4.005507f, -0.017118f }, 1.982798f, NULL };

NJS_OBJECT object_0022B608 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022B5E0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0022B2BC };

NJS_MATERIAL matlist3_0022B63C[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022B664[] = {
	1, 3, 2,
	8, 10, 5,
	6, 7, 5,
	0, 2, 16,
	0, 9, 11,
	12, 16, 15,
	5, 10, 11,
	12, 6, 4,
	7, 6, 14,
	8, 3, 1,
	8, 7, 14,
	2, 3, 13,
	11, 10, 1,
	11, 9, 4,
	11, 4, 5,
	1, 0, 11,
	9, 16, 12,
	12, 4, 9,
	16, 9, 0,
	6, 12, 15,
	13, 3, 8,
	2, 0, 1,
	15, 14, 6,
	15, 16, 2,
	5, 7, 8,
	1, 10, 8,
	5, 4, 6,
	13, 15, 2
};

Sint16 poly3_0022B70C[] = {
	14, 15, 13,
	13, 8, 14
};

NJS_TEX uv3_0022B718[] = {
	{ 127, 149 },
	{ 114, 43 },
	{ 94, 27 },
	{ 174, 57 },
	{ 174, 149 },
	{ 223, 149 },
	{ 251, 28 },
	{ 236, 43 },
	{ 223, 149 },
	{ 95, 149 },
	{ 94, 27 },
	{ 77, 47 },
	{ 90, 149 },
	{ 50, 149 },
	{ 65, 165 },
	{ 19, 47 },
	{ 77, 47 },
	{ 49, 3 },
	{ 223, 149 },
	{ 174, 149 },
	{ 198, 167 },
	{ 19, 47 },
	{ 1, 28 },
	{ 1, 148 },
	{ 236, 43 },
	{ 230, 2 },
	{ 191, 33 },
	{ 174, 57 },
	{ 114, 43 },
	{ 127, 149 },
	{ 174, 57 },
	{ 236, 43 },
	{ 191, 33 },
	{ 116, 3 },
	{ 114, 43 },
	{ 160, 33 },
	{ 148, 165 },
	{ 174, 149 },
	{ 127, 149 },
	{ 24, 165 },
	{ 50, 149 },
	{ 8, 149 },
	{ 242, 167 },
	{ 250, 147 },
	{ 223, 149 },
	{ 127, 149 },
	{ 90, 149 },
	{ 105, 167 },
	{ 50, 149 },
	{ 77, 47 },
	{ 19, 47 },
	{ 19, 47 },
	{ 1, 148 },
	{ 50, 149 },
	{ 77, 47 },
	{ 50, 149 },
	{ 95, 149 },
	{ 1, 28 },
	{ 19, 47 },
	{ 49, 3 },
	{ 160, 33 },
	{ 114, 43 },
	{ 174, 57 },
	{ 94, 27 },
	{ 95, 149 },
	{ 127, 149 },
	{ 175, 2 },
	{ 191, 33 },
	{ 230, 2 },
	{ 49, 3 },
	{ 77, 47 },
	{ 94, 27 },
	{ 223, 149 },
	{ 236, 43 },
	{ 174, 57 },
	{ 127, 149 },
	{ 174, 149 },
	{ 174, 57 },
	{ 223, 149 },
	{ 250, 147 },
	{ 251, 28 },
	{ 160, 33 },
	{ 173, 3 },
	{ 116, 3 }
};

NJS_TEX uv3_0022B868[] = {
	{ 56, 18 },
	{ 29, 7 },
	{ 5, 18 },
	{ 5, 18 },
	{ 30, 58 },
	{ 56, 18 }
};

NJS_MESHSET_SADX meshlist3_0022B880[] = {
	{ NJD_MESHSET_3 | 0, 28, poly3_0022B664, NULL, NULL, NULL, uv3_0022B718, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly3_0022B70C, NULL, NULL, NULL, uv3_0022B868, NULL }
};

NJS_VECTOR vertex_0022B8B0[] = {
	{ -1.400404f, -0.027266f, -0.884928f },
	{ -1.572719f, -0.027266f, 0.58034f },
	{ -2.166391f, 3.82916f, -0.823036f },
	{ -1.997755f, 3.609943f, 0.292376f },
	{ 1.400404f, -0.027266f, -0.884928f },
	{ 1.572719f, -0.027266f, 0.58034f },
	{ 2.213476f, 3.82916f, -0.823036f },
	{ 1.997755f, 3.609943f, 0.292376f },
	{ 0.002187f, 3.025403f, 1.035776f },
	{ 0, -0.027266f, -1.058669f },
	{ 0, -0.027266f, 1.283434f },
	{ 0, -0.32104f, 0.129209f },
	{ 1.22127f, 3.205545f, -1.342228f },
	{ -0.916804f, 4.288171f, -0.003675f },
	{ 0.9183249f, 4.288171f, -0.003675f },
	{ -0.036565f, 4.638895f, -0.889317f },
	{ -1.105582f, 3.205545f, -1.342228f }
};

NJS_VECTOR normal_0022B97C[] = {
	{ -0.54965f, -0.615587f, -0.5647449f },
	{ -0.685878f, -0.567606f, 0.455406f },
	{ -0.796023f, 0.458767f, -0.394817f },
	{ -0.714382f, 0.377167f, 0.589409f },
	{ 0.54597f, -0.619818f, -0.563686f },
	{ 0.6831959f, -0.569607f, 0.456937f },
	{ 0.802511f, 0.462566f, -0.376841f },
	{ 0.701293f, 0.378139f, 0.6043169f },
	{ 0.000327f, 0.279287f, 0.960207f },
	{ -0.000784f, -0.641791f, -0.766879f },
	{ -0.000128f, -0.5131969f, 0.8582709f },
	{ 0, -0.99975f, 0.022351f },
	{ 0.233675f, 0.10961f, -0.966117f },
	{ -0.224397f, 0.855482f, 0.466686f },
	{ 0.220533f, 0.858266f, 0.463406f },
	{ -0.009109f, 0.904449f, -0.426484f },
	{ -0.216431f, 0.108812f, -0.970215f }
};

NJS_MODEL_SADX attach_0022BA48 = { vertex_0022B8B0, normal_0022B97C, LengthOfArray(vertex_0022B8B0), meshlist3_0022B880, matlist3_0022B63C, LengthOfArray(meshlist3_0022B880), LengthOfArray(matlist3_0022B63C),{ 0.023542f, 2.158927f, -0.029397f }, 3.328221f, NULL };

NJS_OBJECT object_0022BA70 = { NJD_EVAL_UNIT_SCL, &attach_0022BA48, 0.013353f, 0.005054f, 0, 0xFFFFC141, 0xFFFFC005, 0xFFFFC141, 1, 1, 1, &object_0022B608, NULL };

NJS_MATERIAL matlist3_00223E64[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken04, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022BAA4[] = {
	7, 4, 3,
	1, 0, 5,
	3, 4, 5,
	8, 0, 6,
	6, 3, 2,
	0, 1, 6,
	6, 2, 8,
	7, 6, 1,
	1, 4, 7,
	3, 6, 7,
	5, 4, 1,
	5, 2, 3
};

Sint16 poly3_0022BAEC[] = {
	10, 12, 11,
	10, 9, 14,
	13, 14, 15,
	16, 15, 14,
	15, 11, 12,
	12, 13, 15,
	11, 9, 10,
	14, 13, 10,
	16, 9, 11,
	14, 9, 16,
	11, 15, 16
};

NJS_TEX uv3_0022BB30[] = {
	{ 124, 5 },
	{ 125, 41 },
	{ 71, 39 },
	{ 170, 41 },
	{ 195, 232 },
	{ 125, 232 },
	{ 71, 39 },
	{ 125, 41 },
	{ 125, 232 },
	{ 247, 232 },
	{ 195, 232 },
	{ 247, 40 },
	{ 2, 40 },
	{ 71, 39 },
	{ 56, 232 },
	{ 195, 232 },
	{ 170, 41 },
	{ 247, 40 },
	{ 2, 40 },
	{ 56, 232 },
	{ 1, 232 },
	{ 217, 7 },
	{ 247, 40 },
	{ 170, 41 },
	{ 170, 41 },
	{ 125, 41 },
	{ 124, 5 },
	{ 71, 39 },
	{ 2, 40 },
	{ 39, 6 },
	{ 125, 232 },
	{ 125, 41 },
	{ 170, 41 },
	{ 125, 232 },
	{ 56, 232 },
	{ 71, 39 }
};

NJS_TEX uv3_0022BBC0[] = {
	{ 1, 9 },
	{ 2, 8 },
	{ 5, 50 },
	{ 1, 9 },
	{ 28, 51 },
	{ 54, 50 },
	{ 43, 8 },
	{ 54, 50 },
	{ 28, 49 },
	{ 28, 55 },
	{ 28, 49 },
	{ 54, 50 },
	{ 28, 49 },
	{ 5, 50 },
	{ 2, 8 },
	{ 2, 8 },
	{ 43, 8 },
	{ 28, 49 },
	{ 5, 50 },
	{ 28, 51 },
	{ 1, 9 },
	{ 54, 50 },
	{ 43, 8 },
	{ 1, 9 },
	{ 28, 55 },
	{ 28, 51 },
	{ 5, 50 },
	{ 54, 50 },
	{ 28, 51 },
	{ 28, 55 },
	{ 5, 50 },
	{ 28, 49 },
	{ 28, 55 }
};

NJS_MESHSET_SADX meshlist3_0022BC44[] = {
	{ NJD_MESHSET_3 | 0, 12, poly3_0022BAA4, NULL, NULL, NULL, uv3_0022BB30, NULL },
	{ NJD_MESHSET_3 | 1, 11, poly3_0022BAEC, NULL, NULL, NULL, uv3_0022BBC0, NULL }
};

NJS_VECTOR vertex_0022BC74[] = {
	{ -0.013594f, -2.211447f, 0.983384f },
	{ 0.004033f, -0.07752299f, 0.668749f },
	{ -0.013594f, -2.211447f, -1.38277f },
	{ 0.018056f, 0.038142f, -0.821809f },
	{ 0.514791f, 0.088819f, 0.022457f },
	{ 0.9592479f, -2.258525f, -0.218593f },
	{ -0.615698f, -0.125848f, -0.044379f },
	{ 0.144258f, 0.386105f, 0.030651f },
	{ -0.9816599f, -2.193585f, -0.199694f },
	{ -0.306259f, -2.621169f, 0.171416f },
	{ -0.301684f, -0.497523f, 0.244243f },
	{ -0.618601f, -2.507921f, -0.263573f },
	{ -0.278555f, -0.414898f, -0.520611f },
	{ 0.297707f, -0.531324f, -0.135617f },
	{ 0.072931f, -2.610469f, -0.237965f },
	{ -0.286721f, -2.516843f, -0.6380619f },
	{ -0.333711f, -2.811514f, -0.275325f }
};

NJS_VECTOR normal_0022BD40[] = {
	{ 0.020864f, 0.139846f, 0.989953f },
	{ -0.014318f, 0.442737f, 0.8965369f },
	{ 0.007764f, 0.249448f, -0.968357f },
	{ 0.009920999f, 0.5908f, -0.806757f },
	{ 0.8722979f, 0.478392f, 0.101183f },
	{ 0.986814f, 0.159892f, -0.025157f },
	{ -0.887122f, 0.459612f, 0.042082f },
	{ 0.07918499f, 0.990446f, 0.112901f },
	{ -0.983991f, 0.176174f, -0.026901f },
	{ -0.067856f, -0.486446f, 0.871072f },
	{ -0.492702f, 0.058998f, 0.868196f },
	{ -0.955836f, -0.284503f, -0.07371999f },
	{ -0.444645f, 0.183627f, -0.876682f },
	{ 0.9982629f, -0.05889f, 0.001861f },
	{ 0.874427f, -0.48505f, -0.010208f },
	{ -0.03075f, -0.342752f, -0.938922f },
	{ -0.170181f, -0.9763499f, -0.13334f }
};

NJS_MODEL_SADX attach_0022BE0C = { vertex_0022BC74, normal_0022BD40, LengthOfArray(vertex_0022BC74), meshlist3_0022BC44, matlist3_00223E64, LengthOfArray(meshlist3_0022BC44), LengthOfArray(matlist3_00223E64),{ -0.011206f, -1.212704f, -0.199693f }, 1.883979f, NULL };

NJS_OBJECT object_0022BE34 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022BE0C, -0.104239f, 0.203508f, 0.041087f, 0xFFFFC198, 0x45D0, 0x1F7, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist3_00224250[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022BE68[] = {
	7, 6, 3,
	5, 4, 1,
	6, 4, 5,
	5, 0, 2,
	3, 2, 0,
	2, 3, 6,
	6, 5, 2,
	0, 1, 3,
	7, 1, 4,
	3, 1, 7,
	4, 6, 7,
	1, 0, 5
};

NJS_TEX uv3_0022BEB0[] = {
	{ 28, 10 },
	{ 29, 16 },
	{ 8, 15 },
	{ 43, 54 },
	{ 52, 15 },
	{ 27, 14 },
	{ 29, 16 },
	{ 52, 15 },
	{ 43, 54 },
	{ 43, 54 },
	{ 11, 53 },
	{ 13, 53 },
	{ 8, 15 },
	{ 13, 53 },
	{ 11, 53 },
	{ 13, 53 },
	{ 8, 15 },
	{ 29, 16 },
	{ 29, 16 },
	{ 43, 54 },
	{ 13, 53 },
	{ 11, 53 },
	{ 27, 14 },
	{ 8, 15 },
	{ 28, 10 },
	{ 27, 14 },
	{ 52, 15 },
	{ 8, 15 },
	{ 27, 14 },
	{ 28, 10 },
	{ 52, 15 },
	{ 29, 16 },
	{ 28, 10 },
	{ 27, 14 },
	{ 11, 53 },
	{ 43, 54 }
};

NJS_MESHSET_SADX meshlist3_0022BF40[] = {
	{ NJD_MESHSET_3 | 0, 12, poly3_0022BE68, NULL, NULL, NULL, uv3_0022BEB0, NULL }
};

NJS_VECTOR vertex_0022BF58[] = {
	{ -0.270129f, -2.129136f, 0.319696f },
	{ -0.019514f, 0.081921f, 0.363544f },
	{ -0.244472f, -2.139552f, -0.326278f },
	{ -0.32043f, 0.007487f, -0.000955f },
	{ 0.378932f, 0.009241999f, -0.057069f },
	{ 0.223671f, -2.199213f, -0.036882f },
	{ -0.000299f, -0.030573f, -0.429612f },
	{ -0.015805f, 0.270332f, -0.022361f }
};

NJS_VECTOR normal_0022BFB8[] = {
	{ -0.416604f, -0.549152f, 0.724481f },
	{ -0.009621999f, 0.47415f, 0.8803909f },
	{ -0.417407f, -0.565322f, -0.7114649f },
	{ -0.921574f, 0.388141f, -0.006868f },
	{ 0.928871f, 0.367984f, -0.042266f },
	{ 0.7454529f, -0.666241f, -0.020579f },
	{ -0.038393f, 0.362739f, -0.9311f },
	{ -0.05894f, 0.995505f, -0.07413799f }
};

NJS_MODEL_SADX attach_0022C018 = { vertex_0022BF58, normal_0022BFB8, LengthOfArray(vertex_0022BF58), meshlist3_0022BF40, matlist3_00224250, LengthOfArray(meshlist3_0022BF40), LengthOfArray(matlist3_00224250),{ 0.029251f, -0.96444f, -0.033034f }, 1.27218f, NULL };

NJS_OBJECT object_0022C040 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022C018, -0.002998f, 0.001958f, -0.029987f, 0x431, 0x40F5, 0x453B, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist3_00224470[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022C074[] = {
	3, 2, 4,
	1, 2, 3,
	0, 2, 9,
	7, 0, 6,
	7, 4, 2,
	6, 3, 4,
	1, 3, 8,
	9, 2, 1,
	5, 3, 6,
	8, 3, 5,
	8, 5, 6,
	6, 0, 9,
	9, 8, 6,
	2, 0, 7,
	6, 4, 7,
	9, 1, 8
};

NJS_TEX uv3_0022C0D4[] = {
	{ 9, 26 },
	{ 34, 39 },
	{ 19, 55 },
	{ 34, 9 },
	{ 34, 39 },
	{ 9, 26 },
	{ 54, 36 },
	{ 34, 39 },
	{ 45, 11 },
	{ 40, 56 },
	{ 54, 36 },
	{ 20, 27 },
	{ 40, 56 },
	{ 19, 55 },
	{ 34, 39 },
	{ 20, 27 },
	{ 9, 26 },
	{ 19, 55 },
	{ 34, 9 },
	{ 9, 26 },
	{ 25, 8 },
	{ 45, 11 },
	{ 34, 39 },
	{ 34, 9 },
	{ 6, 40 },
	{ 9, 26 },
	{ 20, 27 },
	{ 25, 8 },
	{ 9, 26 },
	{ 6, 40 },
	{ 25, 8 },
	{ 6, 40 },
	{ 20, 27 },
	{ 20, 27 },
	{ 54, 36 },
	{ 45, 11 },
	{ 45, 11 },
	{ 25, 8 },
	{ 20, 27 },
	{ 34, 39 },
	{ 54, 36 },
	{ 40, 56 },
	{ 20, 27 },
	{ 19, 55 },
	{ 40, 56 },
	{ 45, 11 },
	{ 34, 9 },
	{ 25, 8 }
};

NJS_MESHSET_SADX meshlist3_0022C194[] = {
	{ NJD_MESHSET_3 | 0, 16, poly3_0022C074, NULL, NULL, NULL, uv3_0022C0D4, NULL }
};

NJS_VECTOR vertex_0022C1AC[] = {
	{ -0.127408f, -0.813377f, 0.6105f },
	{ 0.115732f, 0.230657f, 0.00823f },
	{ 0.458327f, -0.912465f, 0.02008f },
	{ -0.187049f, -0.436358f, -0.701439f },
	{ -0.269819f, -1.555079f, -0.419061f },
	{ -0.5209889f, -0.948036f, -0.780362f },
	{ 0.013026f, -0.459407f, -0.383042f },
	{ -0.249487f, -1.600299f, 0.208335f },
	{ -0.258343f, 0.262639f, -0.230584f },
	{ -0.259858f, 0.144682f, 0.341841f }
};

NJS_VECTOR normal_0022C224[] = {
	{ -0.315036f, -0.004198f, 0.94907f },
	{ 0.687868f, 0.7216319f, 0.078006f },
	{ 0.983124f, -0.178436f, 0.040334f },
	{ 0.247321f, 0.203608f, -0.9472989f },
	{ -0.400035f, -0.675608f, -0.6192949f },
	{ -0.479429f, -0.803444f, -0.353024f },
	{ -0.897498f, -0.178007f, 0.403499f },
	{ -0.390806f, -0.816439f, 0.425087f },
	{ -0.556368f, 0.696929f, -0.452487f },
	{ -0.506831f, 0.439701f, 0.741475f }
};

NJS_MODEL_SADX attach_0022C29C = { vertex_0022C1AC, normal_0022C224, LengthOfArray(vertex_0022C1AC), meshlist3_0022C194, matlist3_00224470, LengthOfArray(meshlist3_0022C194), LengthOfArray(matlist3_00224470),{ -0.031331f, -0.66883f, -0.08493099f }, 1.031915f, NULL };

NJS_OBJECT object_0022C2C4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022C29C, 0.002315f, -0.017385f, -0.098552f, 0x40A9, 0x43E9, 0x84D3, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0022C2F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 3.029859f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0022C2C4 };

NJS_OBJECT object_0022C32C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0x1DB, 0xFFFFB888, 1, 1, 1, &object_0022C2F8, NULL };

NJS_OBJECT object_0022C360 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.015077f, 0.054541f, 0, 0, 0, 0x47E2, 1, 1, 1, &object_0022C32C, NULL };

NJS_OBJECT object_0022C394 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.231593f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0022C360, &object_0022C040 };

NJS_OBJECT object_0022C3C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.639057f, 0, 0, 0, 0, 0xFFFFF335, 1, 1, 1, &object_0022C394, &object_0022BE34 };

NJS_OBJECT object_0022C3FC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFC4EA, 1, 1, 1, &object_0022C3C8, NULL };

NJS_OBJECT object_0022C430 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -3.777741f, -3.355054f, -2.143114f, 0, 0, 0xFFFF8281, 1, 1, 1, &object_0022C3FC, NULL };

NJS_MATERIAL matlist3_00224874[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken04, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022C464[] = {
	3, 4, 7,
	5, 0, 1,
	5, 4, 3,
	6, 0, 8,
	2, 3, 6,
	6, 1, 0,
	8, 2, 6,
	1, 6, 7,
	7, 4, 1,
	7, 6, 3,
	1, 4, 5,
	3, 2, 5
};

Sint16 poly3_0022C4AC[] = {
	11, 12, 10,
	14, 9, 10,
	15, 14, 13,
	14, 15, 16,
	12, 11, 15,
	15, 13, 12,
	10, 9, 11,
	10, 13, 14,
	11, 9, 16,
	16, 9, 14,
	16, 15, 11
};

NJS_TEX uv3_0022C4F0[] = {
	{ 71, 39 },
	{ 125, 41 },
	{ 124, 5 },
	{ 125, 232 },
	{ 195, 232 },
	{ 170, 41 },
	{ 125, 232 },
	{ 125, 41 },
	{ 71, 39 },
	{ 247, 40 },
	{ 195, 232 },
	{ 247, 232 },
	{ 56, 232 },
	{ 71, 39 },
	{ 2, 40 },
	{ 247, 40 },
	{ 170, 41 },
	{ 195, 232 },
	{ 1, 232 },
	{ 56, 232 },
	{ 2, 40 },
	{ 170, 41 },
	{ 247, 40 },
	{ 217, 7 },
	{ 124, 5 },
	{ 125, 41 },
	{ 170, 41 },
	{ 39, 6 },
	{ 2, 40 },
	{ 71, 39 },
	{ 170, 41 },
	{ 125, 41 },
	{ 125, 232 },
	{ 71, 39 },
	{ 56, 232 },
	{ 125, 232 }
};

NJS_TEX uv3_0022C580[] = {
	{ 9, 50 },
	{ 5, 8 },
	{ 4, 9 },
	{ 58, 50 },
	{ 32, 51 },
	{ 4, 9 },
	{ 32, 49 },
	{ 58, 50 },
	{ 46, 8 },
	{ 58, 50 },
	{ 32, 49 },
	{ 33, 55 },
	{ 5, 8 },
	{ 9, 50 },
	{ 32, 49 },
	{ 32, 49 },
	{ 46, 8 },
	{ 5, 8 },
	{ 4, 9 },
	{ 32, 51 },
	{ 9, 50 },
	{ 4, 9 },
	{ 46, 8 },
	{ 58, 50 },
	{ 9, 50 },
	{ 32, 51 },
	{ 33, 55 },
	{ 33, 55 },
	{ 32, 51 },
	{ 58, 50 },
	{ 33, 55 },
	{ 32, 49 },
	{ 9, 50 }
};

NJS_MESHSET_SADX meshlist3_0022C604[] = {
	{ NJD_MESHSET_3 | 0, 12, poly3_0022C464, NULL, NULL, NULL, uv3_0022C4F0, NULL },
	{ NJD_MESHSET_3 | 1, 11, poly3_0022C4AC, NULL, NULL, NULL, uv3_0022C580, NULL }
};

NJS_VECTOR vertex_0022C634[] = {
	{ -0.013594f, -2.211447f, -0.983384f },
	{ 0.004033f, -0.07752299f, -0.668749f },
	{ -0.013594f, -2.211447f, 1.38277f },
	{ 0.018056f, 0.038142f, 0.821809f },
	{ 0.514791f, 0.088819f, -0.022457f },
	{ 0.9592479f, -2.258525f, 0.218593f },
	{ -0.615698f, -0.125848f, 0.044378f },
	{ 0.144258f, 0.386105f, -0.030651f },
	{ -0.9816599f, -2.193585f, 0.199694f },
	{ -0.246099f, -2.629839f, -0.171751f },
	{ -0.261577f, -0.503303f, -0.244466f },
	{ -0.558441f, -2.516592f, 0.263238f },
	{ -0.238448f, -0.420679f, 0.5203879f },
	{ 0.337814f, -0.537105f, 0.135394f },
	{ 0.133091f, -2.619139f, 0.23763f },
	{ -0.226561f, -2.525513f, 0.637727f },
	{ -0.273551f, -2.820184f, 0.27499f }
};

NJS_VECTOR normal_0022C700[] = {
	{ 0.020864f, 0.139846f, -0.989953f },
	{ -0.014318f, 0.442737f, -0.8965369f },
	{ 0.007764f, 0.249448f, 0.968357f },
	{ 0.009920999f, 0.5908f, 0.806757f },
	{ 0.8722979f, 0.478392f, -0.101183f },
	{ 0.986814f, 0.159892f, 0.025157f },
	{ -0.887122f, 0.459612f, -0.042082f },
	{ 0.07918499f, 0.990446f, -0.112901f },
	{ -0.983991f, 0.176174f, 0.026901f },
	{ -0.065001f, -0.486492f, -0.871264f },
	{ -0.497837f, 0.054911f, -0.86553f },
	{ -0.9543959f, -0.289173f, 0.074212f },
	{ -0.449507f, 0.17934f, 0.875089f },
	{ 0.998781f, -0.04928f, -0.002841f },
	{ 0.876587f, -0.481142f, 0.009892999f },
	{ -0.027635f, -0.342868f, 0.9389769f },
	{ -0.170181f, -0.9763499f, 0.13334f }
};

NJS_MODEL_SADX attach_0022C7CC = { vertex_0022C634, normal_0022C700, LengthOfArray(vertex_0022C634), meshlist3_0022C604, matlist3_00224874, LengthOfArray(meshlist3_0022C604), LengthOfArray(matlist3_00224874),{ -0.011206f, -1.21704f, 0.199693f }, 1.883979f, NULL };

NJS_OBJECT object_0022C7F4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022C7CC, -0.104239f, 0.203508f, -0.143847f, 0x3E68, 0xFFFFBA30, 0x1F7, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist3_00224C60[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022C828[] = {
	3, 6, 7,
	1, 4, 5,
	5, 4, 6,
	2, 0, 5,
	0, 2, 3,
	6, 3, 2,
	2, 5, 6,
	3, 1, 0,
	4, 1, 7,
	7, 1, 3,
	7, 6, 4,
	5, 0, 1
};

NJS_TEX uv3_0022C870[] = {
	{ 8, 15 },
	{ 29, 16 },
	{ 28, 10 },
	{ 27, 14 },
	{ 52, 15 },
	{ 44, 54 },
	{ 44, 54 },
	{ 52, 15 },
	{ 29, 16 },
	{ 14, 53 },
	{ 14, 53 },
	{ 44, 54 },
	{ 14, 53 },
	{ 14, 53 },
	{ 8, 15 },
	{ 29, 16 },
	{ 8, 15 },
	{ 14, 53 },
	{ 14, 53 },
	{ 44, 54 },
	{ 29, 16 },
	{ 8, 15 },
	{ 27, 14 },
	{ 14, 53 },
	{ 52, 15 },
	{ 27, 14 },
	{ 28, 10 },
	{ 28, 10 },
	{ 27, 14 },
	{ 8, 15 },
	{ 28, 10 },
	{ 29, 16 },
	{ 52, 15 },
	{ 44, 54 },
	{ 14, 53 },
	{ 27, 14 }
};

NJS_MESHSET_SADX meshlist3_0022C900[] = {
	{ NJD_MESHSET_3 | 0, 12, poly3_0022C828, NULL, NULL, NULL, uv3_0022C870, NULL }
};

NJS_VECTOR vertex_0022C918[] = {
	{ -0.176735f, -2.13652f, -0.32322f },
	{ 0.041251f, 0.082071f, -0.364995f },
	{ -0.163452f, -2.139351f, 0.324344f },
	{ -0.259665f, 0.007637f, -0.000496f },
	{ 0.439697f, 0.009392f, 0.055618f },
	{ 0.304691f, -2.199013f, 0.034948f },
	{ 0.060466f, -0.030423f, 0.428161f },
	{ 0.04496f, 0.270482f, 0.02091f }
};

NJS_VECTOR normal_0022C978[] = {
	{ -0.39705f, -0.556878f, -0.729547f },
	{ -0.012904f, 0.473582f, -0.880655f },
	{ -0.419026f, -0.565141f, 0.7106569f },
	{ -0.9239579f, 0.382455f, 0.005467f },
	{ 0.927259f, 0.371983f, 0.042644f },
	{ 0.750511f, -0.660318f, 0.026688f },
	{ -0.04152f, 0.36257f, 0.931031f },
	{ -0.05894f, 0.995505f, 0.07413799f }
};

NJS_MODEL_SADX attach_0022C9D8 = { vertex_0022C918, normal_0022C978, LengthOfArray(vertex_0022C918), meshlist3_0022C900, matlist3_00224C60, LengthOfArray(meshlist3_0022C900), LengthOfArray(matlist3_00224C60),{ 0.090016f, -0.964265f, 0.031583f }, 1.27218f, NULL };

NJS_OBJECT object_0022CA00 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022C9D8, -0.002998f, 0.001959f, -0.07277399f, 0xFFFFFBCF, 0xFFFFBF0B, 0x453B, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist3_00224E80[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022CA34[] = {
	4, 2, 3,
	3, 2, 1,
	9, 2, 0,
	6, 0, 7,
	2, 4, 7,
	4, 3, 6,
	8, 3, 1,
	1, 2, 9,
	6, 3, 5,
	5, 3, 8,
	6, 5, 8,
	9, 0, 6,
	6, 8, 9,
	7, 0, 2,
	7, 4, 6,
	8, 1, 9
};

NJS_TEX uv3_0022CA94[] = {
	{ 42, 55 },
	{ 27, 39 },
	{ 52, 27 },
	{ 52, 27 },
	{ 27, 39 },
	{ 27, 8 },
	{ 16, 11 },
	{ 27, 39 },
	{ 6, 36 },
	{ 41, 27 },
	{ 6, 36 },
	{ 20, 56 },
	{ 27, 39 },
	{ 42, 55 },
	{ 20, 56 },
	{ 42, 55 },
	{ 52, 27 },
	{ 41, 27 },
	{ 36, 9 },
	{ 52, 27 },
	{ 27, 8 },
	{ 27, 8 },
	{ 27, 39 },
	{ 16, 11 },
	{ 41, 27 },
	{ 52, 27 },
	{ 54, 40 },
	{ 54, 40 },
	{ 52, 27 },
	{ 36, 9 },
	{ 41, 27 },
	{ 54, 40 },
	{ 36, 9 },
	{ 16, 11 },
	{ 6, 36 },
	{ 41, 27 },
	{ 41, 27 },
	{ 36, 9 },
	{ 16, 11 },
	{ 20, 56 },
	{ 6, 36 },
	{ 27, 39 },
	{ 20, 56 },
	{ 42, 55 },
	{ 41, 27 },
	{ 36, 9 },
	{ 27, 8 },
	{ 16, 11 }
};

NJS_MESHSET_SADX meshlist3_0022CB54[] = {
	{ NJD_MESHSET_3 | 0, 16, poly3_0022CA34, NULL, NULL, NULL, uv3_0022CA94, NULL }
};

NJS_VECTOR vertex_0022CB6C[] = {
	{ -0.107039f, -0.814182f, -0.610027f },
	{ 0.133755f, 0.278367f, 0.000539f },
	{ 0.478696f, -0.91327f, -0.019606f },
	{ -0.16668f, -0.437163f, 0.701912f },
	{ -0.24945f, -1.555884f, 0.419534f },
	{ -0.5006199f, -0.948841f, 0.780835f },
	{ 0.033395f, -0.460212f, 0.383515f },
	{ -0.229118f, -1.601104f, -0.207862f },
	{ -0.229254f, 0.26659f, 0.243303f },
	{ -0.260616f, 0.183679f, -0.326845f }
};

NJS_VECTOR normal_0022CBE4[] = {
	{ -0.312216f, -0.001215f, -0.9500099f },
	{ 0.663463f, 0.744391f, -0.075496f },
	{ 0.9829929f, -0.178636f, -0.042587f },
	{ 0.248116f, 0.194336f, 0.949037f },
	{ -0.400034f, -0.675608f, 0.6192949f },
	{ -0.48135f, -0.803813f, 0.349553f },
	{ -0.902014f, -0.17189f, -0.39601f },
	{ -0.390806f, -0.816439f, -0.425087f },
	{ -0.558109f, 0.660946f, 0.501663f },
	{ -0.532047f, 0.446056f, -0.719694f }
};

NJS_MODEL_SADX attach_0022CC5C = { vertex_0022CB6C, normal_0022CBE4, LengthOfArray(vertex_0022CB6C), meshlist3_0022CB54, matlist3_00224E80, LengthOfArray(meshlist3_0022CB54), LengthOfArray(matlist3_00224E80),{ -0.010962f, -0.661368f, 0.08540399f }, 1.037938f, NULL };

NJS_OBJECT object_0022CC84 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022CC5C, 0.020393f, -0.008072f, 0.014437f, 0xFFFFC0F8, 0xFFFFBC17, 0x84D3, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0022CCB8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 3.029859f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0022CC84 };

NJS_OBJECT object_0022CCEC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFB5E2, 1, 1, 1, &object_0022CCB8, NULL };

NJS_OBJECT object_0022CD20 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.015077f, 0.054541f, 0, 0, 0, 0x47E2, 1, 1, 1, &object_0022CCEC, NULL };

NJS_OBJECT object_0022CD54 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.231593f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0022CD20, &object_0022CA00 };

NJS_OBJECT object_0022CD88 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.639057f, 0, 0, 0, 0, 0xFFFFF335, 1, 1, 1, &object_0022CD54, &object_0022C7F4 };

NJS_OBJECT object_0022CDBC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFC4EA, 1, 1, 1, &object_0022CD88, NULL };

NJS_OBJECT object_0022CDF0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -3.777741f, -3.355054f, 2.143114f, 0, 0, 0xFFFF8281, 1, 1, 1, &object_0022CDBC, &object_0022C430 };

NJS_MATERIAL matlist3_00225284[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022CE24[] = {
	4, 5, 2,
	6, 1, 7,
	2, 7, 1,
	3, 4, 0,
	7, 0, 6,
	2, 1, 4,
	3, 5, 4,
	0, 7, 3
};

NJS_TEX uv3_0022CE54[] = {
	{ 31, 12 },
	{ 30, 57 },
	{ 56, 49 },
	{ 31, 7 },
	{ 41, 9 },
	{ 31, 39 },
	{ 56, 49 },
	{ 31, 39 },
	{ 41, 9 },
	{ 5, 49 },
	{ 31, 12 },
	{ 21, 9 },
	{ 31, 39 },
	{ 21, 9 },
	{ 31, 7 },
	{ 56, 49 },
	{ 41, 9 },
	{ 31, 12 },
	{ 5, 49 },
	{ 30, 57 },
	{ 31, 12 },
	{ 21, 9 },
	{ 31, 39 },
	{ 5, 49 }
};

NJS_MESHSET_SADX meshlist3_0022CEB4[] = {
	{ NJD_MESHSET_3 | 0, 8, poly3_0022CE24, NULL, NULL, NULL, uv3_0022CE54, NULL }
};

NJS_VECTOR vertex_0022CECC[] = {
	{ -0.28597f, 1.187347f, 0.205311f },
	{ 0.284651f, 1.187347f, 0.205311f },
	{ 0.705026f, -0.541674f, 0.44294f },
	{ -0.7309999f, -0.541674f, 0.44294f },
	{ -0.00001f, 1.040204f, 0.537483f },
	{ -0.022737f, -0.913865f, 0.874724f },
	{ -0.000659f, 1.254356f, 0.045343f },
	{ 0.010517f, -0.129301f, -0.429756f }
};

NJS_VECTOR normal_0022CF2C[] = {
	{ -0.9019409f, 0.339054f, -0.267478f },
	{ 0.904254f, 0.336921f, -0.262313f },
	{ 0.834537f, 0.206722f, 0.5107f },
	{ -0.836933f, 0.219424f, 0.501395f },
	{ 0.005324f, 0.306216f, 0.951947f },
	{ -0.005311f, 0.170127f, 0.9854079f },
	{ -0.002443f, 0.324735f, -0.945802f },
	{ 0.018249f, 0.215426f, -0.9763499f }
};

NJS_MODEL_SADX attach_0022CF8C = { vertex_0022CECC, normal_0022CF2C, LengthOfArray(vertex_0022CECC), meshlist3_0022CEB4, matlist3_00225284, LengthOfArray(meshlist3_0022CEB4), LengthOfArray(matlist3_00225284),{ -0.012987f, 0.170246f, 0.222484f }, 1.141944f, NULL };

NJS_OBJECT object_0022CFB4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022CF8C, 0.035428f, 0.006295f, 0, 0xFFFFD934, 0xFFFFC005, 0xFFFFD934, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0022CFE8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 0, 0, 0, 0xFFFFC005, 0x3D23, 0xFFFFC005, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist3_00225490[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_002254A4[] = {
	18, 3, 0,
	1, 4, 5,
	1, 5, 2,
	2, 5, 6,
	2, 6, 3,
	3, 6, 0,
	17, 2, 3,
	17, 3, 18,
	4, 7, 8,
	4, 8, 5,
	5, 8, 9,
	5, 9, 6,
	6, 9, 0,
	16, 1, 2,
	16, 2, 17,
	7, 10, 11,
	7, 11, 8,
	8, 11, 12,
	8, 12, 9,
	9, 12, 0,
	15, 18, 0,
	10, 13, 14,
	10, 14, 11,
	11, 14, 15,
	11, 15, 12,
	12, 15, 0,
	14, 17, 18,
	14, 18, 15,
	13, 16, 17,
	13, 17, 14
};

NJS_TEX uv3_00225558[] = {
	{ 126, 60 },
	{ 181, 94 },
	{ 125, 129 },
	{ 249, 250 },
	{ 236, 250 },
	{ 231, 195 },
	{ 249, 250 },
	{ 231, 195 },
	{ 240, 195 },
	{ 247, 129 },
	{ 186, 239 },
	{ 182, 163 },
	{ 247, 129 },
	{ 182, 163 },
	{ 181, 94 },
	{ 181, 94 },
	{ 182, 163 },
	{ 125, 129 },
	{ 186, 19 },
	{ 247, 129 },
	{ 181, 94 },
	{ 186, 19 },
	{ 181, 94 },
	{ 125, 64 },
	{ 236, 250 },
	{ 209, 250 },
	{ 214, 195 },
	{ 236, 250 },
	{ 214, 195 },
	{ 231, 195 },
	{ 174, 251 },
	{ 76, 251 },
	{ 125, 198 },
	{ 186, 239 },
	{ 127, 192 },
	{ 182, 163 },
	{ 182, 163 },
	{ 128, 198 },
	{ 125, 129 },
	{ 236, 250 },
	{ 249, 250 },
	{ 240, 195 },
	{ 236, 250 },
	{ 240, 195 },
	{ 231, 195 },
	{ 209, 250 },
	{ 196, 250 },
	{ 205, 195 },
	{ 209, 250 },
	{ 205, 195 },
	{ 214, 195 },
	{ 64, 239 },
	{ 3, 129 },
	{ 69, 164 },
	{ 64, 239 },
	{ 69, 164 },
	{ 124, 192 },
	{ 122, 198 },
	{ 69, 164 },
	{ 125, 129 },
	{ 68, 95 },
	{ 122, 60 },
	{ 125, 129 },
	{ 196, 250 },
	{ 209, 250 },
	{ 214, 195 },
	{ 196, 250 },
	{ 214, 195 },
	{ 205, 195 },
	{ 3, 129 },
	{ 64, 19 },
	{ 68, 95 },
	{ 3, 129 },
	{ 68, 95 },
	{ 69, 164 },
	{ 69, 164 },
	{ 68, 95 },
	{ 125, 129 },
	{ 76, 7 },
	{ 174, 7 },
	{ 125, 60 },
	{ 64, 19 },
	{ 123, 63 },
	{ 68, 95 },
	{ 209, 250 },
	{ 236, 250 },
	{ 231, 195 },
	{ 209, 250 },
	{ 231, 195 },
	{ 214, 195 }
};

NJS_MESHSET_SADX meshlist3_002256C0[] = {
	{ NJD_MESHSET_3 | 0, 30, poly3_002254A4, NULL, NULL, NULL, uv3_00225558, NULL }
};

NJS_VECTOR vertex_0022D01C[] = {
	{ 0, 1.573733f, 0 },
	{ 1.747199f, -0.479952f, 0 },
	{ 1.15f, 0, 0 },
	{ 0.848671f, 1.1514f, 0.419698f },
	{ 0.873599f, -0.479952f, -1.422332f },
	{ 0.575f, 0, -0.9959289f },
	{ 0.854967f, 1.1514f, -0.410493f },
	{ -0.8735999f, -0.479952f, -1.422332f },
	{ -0.575f, 0, -0.9959289f },
	{ 0.006296f, 1.1514f, -0.830191f },
	{ -1.747199f, -0.479952f, 0 },
	{ -1.15f, 0, 0 },
	{ -0.848671f, 1.1514f, -0.419698f },
	{ -0.873599f, -0.479952f, 1.422332f },
	{ -0.575f, 0, 0.9959289f },
	{ -0.854967f, 1.1514f, 0.410493f },
	{ 0.8735999f, -0.479952f, 1.422332f },
	{ 0.575f, 0, 0.9959289f },
	{ -0.006296f, 1.1514f, 0.830191f }
};

NJS_VECTOR normal_0022D100[] = {
	{ 0, 1, 0 },
	{ 0.630971f, 0.7757969f, 0.003884f },
	{ 0.84601f, 0.53313f, 0.00634f },
	{ 0.701314f, 0.575936f, 0.420068f },
	{ 0.341747f, 0.734017f, -0.58688f },
	{ 0.398255f, 0.527395f, -0.750498f },
	{ 0.706742f, 0.575767f, -0.411107f },
	{ -0.343162f, 0.738549f, -0.580332f },
	{ -0.404173f, 0.524662f, -0.749249f },
	{ 0.004655f, 0.594377f, -0.804173f },
	{ -0.630971f, 0.7757969f, -0.003884f },
	{ -0.84601f, 0.53313f, -0.00634f },
	{ -0.701314f, 0.5759349f, -0.420068f },
	{ -0.341747f, 0.734017f, 0.58688f },
	{ -0.398255f, 0.527395f, 0.750498f },
	{ -0.706742f, 0.575767f, 0.411107f },
	{ 0.343162f, 0.738549f, 0.580332f },
	{ 0.404173f, 0.524662f, 0.749249f },
	{ -0.004655f, 0.594377f, 0.804173f }
};

NJS_MODEL_SADX attach_0022D1E4 = { vertex_0022D01C, normal_0022D100, LengthOfArray(vertex_0022D01C), meshlist3_002256C0, matlist3_00225490, LengthOfArray(meshlist3_002256C0), LengthOfArray(matlist3_00225490),{ 0, 0.54689f, 0 }, 2.240642f, NULL };

NJS_OBJECT object_0022D20C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022D1E4, -0.005667f, 1.655639f, -0.087266f, 0xFFFFC005, 0x376D, 0xFFFFC005, 1, 1, 1, NULL, &object_0022CFE8 };

NJS_MATERIAL matlist3_002258FC[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly3_0022D240[] = {
	24, 18, 23,
	7, 5, 24,
	23, 18, 4,
	7, 3, 5,
	4, 14, 2,
	25, 16, 14,
	5, 18, 24,
	23, 4, 2,
	3, 17, 26,
	5, 26, 29,
	18, 5, 27,
	5, 3, 26,
	29, 25, 4,
	29, 27, 5,
	4, 27, 29,
	25, 14, 4,
	27, 4, 18
};

Sint16 poly3_0022D2A6[] = {
	17, 3, 0,
	16, 28, 12,
	8, 21, 6,
	6, 21, 7,
	1, 22, 11,
	11, 20, 8,
	20, 11, 22,
	15, 13, 10,
	12, 28, 19,
	28, 9, 19,
	1, 2, 22,
	2, 14, 12,
	21, 8, 20,
	10, 13, 19,
	19, 13, 15,
	19, 9, 0,
	15, 22, 12,
	0, 21, 10,
	20, 22, 15,
	7, 21, 0,
	12, 19, 15,
	10, 19, 0,
	0, 3, 7,
	10, 21, 20,
	10, 20, 15,
	12, 14, 16,
	0, 9, 17,
	12, 22, 2
};

Sint16 poly3_0022D34E[] = {
	24, 6, 7,
	2, 1, 23,
	23, 11, 8,
	11, 23, 1,
	31, 30, 34,
	34, 32, 33,
	40, 30, 31,
	33, 32, 40,
	30, 40, 32,
	39, 35, 36,
	38, 37, 39,
	36, 35, 41,
	41, 37, 38,
	35, 39, 37,
	31, 33, 40,
	41, 38, 36,
	37, 41, 35,
	32, 34, 30,
	8, 6, 24,
	24, 23, 8
};

NJS_TEX uv3_0022D3C8[] = {
	{ 200, 59 },
	{ 186, 48 },
	{ 201, 59 },
	{ 209, 40 },
	{ 191, 35 },
	{ 200, 59 },
	{ 201, 59 },
	{ 186, 48 },
	{ 193, 35 },
	{ 209, 40 },
	{ 210, 20 },
	{ 191, 35 },
	{ 193, 35 },
	{ 214, 20 },
	{ 212, 40 },
	{ 197, 8 },
	{ 217, 6 },
	{ 214, 20 },
	{ 191, 35 },
	{ 186, 48 },
	{ 200, 59 },
	{ 201, 59 },
	{ 193, 35 },
	{ 212, 40 },
	{ 210, 20 },
	{ 214, 6 },
	{ 195, 8 },
	{ 191, 35 },
	{ 195, 8 },
	{ 184, 8 },
	{ 186, 48 },
	{ 191, 35 },
	{ 182, 32 },
	{ 191, 35 },
	{ 210, 20 },
	{ 195, 8 },
	{ 184, 8 },
	{ 197, 8 },
	{ 193, 35 },
	{ 184, 8 },
	{ 182, 32 },
	{ 191, 35 },
	{ 193, 35 },
	{ 182, 32 },
	{ 184, 8 },
	{ 197, 8 },
	{ 214, 20 },
	{ 193, 35 },
	{ 182, 32 },
	{ 193, 35 },
	{ 186, 48 }
};

NJS_TEX uv3_0022D494[] = {
	{ 19, 3 },
	{ 2, 58 },
	{ 37, 72 },
	{ 169, 4 },
	{ 122, 1 },
	{ 152, 72 },
	{ 70, 190 },
	{ 50, 141 },
	{ 28, 161 },
	{ 28, 161 },
	{ 50, 141 },
	{ 6, 104 },
	{ 159, 159 },
	{ 137, 141 },
	{ 115, 190 },
	{ 115, 190 },
	{ 95, 172 },
	{ 70, 190 },
	{ 95, 172 },
	{ 115, 190 },
	{ 137, 141 },
	{ 108, 123 },
	{ 95, 115 },
	{ 82, 123 },
	{ 152, 72 },
	{ 122, 1 },
	{ 95, 57 },
	{ 122, 1 },
	{ 67, 1 },
	{ 95, 57 },
	{ 159, 159 },
	{ 182, 100 },
	{ 137, 141 },
	{ 182, 100 },
	{ 184, 52 },
	{ 152, 72 },
	{ 50, 141 },
	{ 70, 190 },
	{ 95, 172 },
	{ 82, 123 },
	{ 95, 115 },
	{ 95, 57 },
	{ 95, 57 },
	{ 95, 115 },
	{ 108, 123 },
	{ 95, 57 },
	{ 67, 1 },
	{ 37, 72 },
	{ 108, 123 },
	{ 137, 141 },
	{ 152, 72 },
	{ 37, 72 },
	{ 50, 141 },
	{ 82, 123 },
	{ 95, 172 },
	{ 137, 141 },
	{ 108, 123 },
	{ 6, 104 },
	{ 50, 141 },
	{ 37, 72 },
	{ 152, 72 },
	{ 95, 57 },
	{ 108, 123 },
	{ 82, 123 },
	{ 95, 57 },
	{ 37, 72 },
	{ 37, 72 },
	{ 2, 58 },
	{ 6, 104 },
	{ 82, 123 },
	{ 50, 141 },
	{ 95, 172 },
	{ 82, 123 },
	{ 95, 172 },
	{ 108, 123 },
	{ 152, 72 },
	{ 184, 52 },
	{ 169, 4 },
	{ 37, 72 },
	{ 67, 1 },
	{ 19, 3 },
	{ 152, 72 },
	{ 137, 141 },
	{ 182, 100 }
};

NJS_TEX uv3_0022D5E4[] = {
	{ 22, 55 },
	{ 14, 25 },
	{ 8, 29 },
	{ 53, 29 },
	{ 47, 25 },
	{ 39, 55 },
	{ 39, 55 },
	{ 36, 10 },
	{ 24, 10 },
	{ 36, 10 },
	{ 39, 55 },
	{ 47, 25 },
	{ 53, 61 },
	{ 2, 52 },
	{ 29, 22 },
	{ 29, 22 },
	{ 2, 4 },
	{ 59, 5 },
	{ 2, 27 },
	{ 2, 52 },
	{ 53, 61 },
	{ 59, 5 },
	{ 2, 4 },
	{ 2, 27 },
	{ 2, 52 },
	{ 2, 27 },
	{ 2, 4 },
	{ 29, 22 },
	{ 2, 52 },
	{ 53, 61 },
	{ 59, 5 },
	{ 2, 4 },
	{ 29, 22 },
	{ 53, 61 },
	{ 2, 52 },
	{ 2, 27 },
	{ 2, 27 },
	{ 2, 4 },
	{ 59, 5 },
	{ 2, 52 },
	{ 29, 22 },
	{ 2, 4 },
	{ 53, 61 },
	{ 59, 5 },
	{ 2, 27 },
	{ 2, 27 },
	{ 59, 5 },
	{ 53, 61 },
	{ 2, 4 },
	{ 2, 27 },
	{ 2, 52 },
	{ 2, 4 },
	{ 29, 22 },
	{ 2, 52 },
	{ 24, 10 },
	{ 14, 25 },
	{ 22, 55 },
	{ 22, 55 },
	{ 39, 55 },
	{ 24, 10 }
};

NJS_MESHSET_SADX meshlist3_0022D6D4[] = {
	{ NJD_MESHSET_3 | 0, 17, poly3_0022D240, NULL, NULL, NULL, uv3_0022D3C8, NULL },
	{ NJD_MESHSET_3 | 1, 28, poly3_0022D2A6, NULL, NULL, NULL, uv3_0022D494, NULL },
	{ NJD_MESHSET_3 | 2, 20, poly3_0022D34E, NULL, NULL, NULL, uv3_0022D5E4, NULL }
};

NJS_VECTOR vertex_0022D71C[] = {
	{ -0.73498f, 1.02869f, 0.633317f },
	{ 0.635188f, 0.072743f, 0.04332f },
	{ 0.882275f, 0.684023f, -0.019849f },
	{ -0.901234f, 1.361884f, 0.062232f },
	{ 0.750306f, 0.871313f, -0.782329f },
	{ -0.74422f, 0.871313f, -0.782329f },
	{ -0.633745f, 0.072743f, 0.04332f },
	{ -0.880803f, 0.684023f, -0.019848f },
	{ -0.239761f, -0.319119f, 0.264911f },
	{ -0.350563f, 1.949015f, 0.7540359f },
	{ -0.163008f, 0.351536f, 1.044959f },
	{ 0.232382f, -0.319119f, 0.26491f },
	{ 0.736194f, 1.02869f, 0.633317f },
	{ 0.000396f, 0.451258f, 1.326f },
	{ 0.929678f, 1.361884f, 0.062231f },
	{ 0.1638f, 0.351536f, 1.044959f },
	{ 0.894852f, 1.866295f, 0.219261f },
	{ -0.8951859f, 1.866293f, 0.219261f },
	{ -0.006291f, 0.412609f, -1.022274f },
	{ 0.000396f, 1.279563f, 1.049743f },
	{ 0.000396f, -0.260964f, 0.870185f },
	{ -0.6731589f, 0.111682f, 0.480742f },
	{ 0.640633f, 0.111682f, 0.480741f },
	{ 0.335207f, 0.026272f, -0.412341f },
	{ -0.334586f, 0.026272f, -0.412341f },
	{ 0.612254f, 1.801521f, -0.617515f },
	{ -0.647698f, 1.801519f, -0.617515f },
	{ 0.00141f, 0.968608f, -1.185853f },
	{ 0.348686f, 1.949015f, 0.7540359f },
	{ -0.00015f, 1.801521f, -1.121454f },
	{ -1.033032f, 0.522931f, -0.223001f },
	{ -0.720159f, 0.388889f, 0.051701f },
	{ -1.145457f, 1.20034f, -0.226259f },
	{ -0.834381f, 1.182839f, 0.08830699f },
	{ -0.736829f, 0.939674f, -0.07683399f },
	{ 1.020298f, 0.522931f, -0.223f },
	{ 0.707425f, 0.388889f, 0.051701f },
	{ 1.133232f, 1.20034f, -0.226259f },
	{ 0.821647f, 1.18284f, 0.08830699f },
	{ 0.724095f, 0.939674f, -0.07683399f },
	{ -1.213288f, 0.873884f, -0.22463f },
	{ 1.199407f, 0.873884f, -0.22463f }
};

NJS_VECTOR normal_0022D914[] = {
	{ -0.799314f, 0.001152f, 0.600912f },
	{ 0.80021f, -0.562681f, -0.207494f },
	{ 0.968278f, -0.246529f, -0.040753f },
	{ -0.9997309f, 0.016146f, -0.016642f },
	{ 0.7892179f, -0.165788f, -0.591311f },
	{ -0.791306f, -0.16904f, -0.587588f },
	{ -0.791865f, -0.563037f, -0.236517f },
	{ -0.97338f, -0.222456f, -0.055177f },
	{ -0.347683f, -0.933614f, -0.086498f },
	{ -0.424937f, 0.258485f, 0.867533f },
	{ -0.525084f, -0.299876f, 0.796468f },
	{ 0.351953f, -0.932472f, -0.081397f },
	{ 0.794428f, -0.01089f, 0.6072609f },
	{ 0, -0.250877f, 0.9680189f },
	{ 0.9992869f, 0.035715f, -0.012205f },
	{ 0.53268f, -0.304201f, 0.7897559f },
	{ 0.959762f, 0.150928f, 0.236808f },
	{ -0.964757f, 0.112774f, 0.237751f },
	{ -0.006807f, -0.551726f, -0.833997f },
	{ 0.000224f, 0.175512f, 0.984477f },
	{ 0.009427f, -0.7496909f, 0.661721f },
	{ -0.823033f, -0.448085f, 0.349051f },
	{ 0.815689f, -0.449904f, 0.363646f },
	{ 0.423414f, -0.754569f, -0.501344f },
	{ -0.424242f, -0.754256f, -0.501115f },
	{ 0.813628f, 0.211017f, -0.541739f },
	{ -0.830546f, 0.170575f, -0.530186f },
	{ 0.0008189999f, -0.086981f, -0.99621f },
	{ 0.42389f, 0.259873f, 0.867631f },
	{ 0.005885f, 0.175471f, -0.984467f },
	{ -0.390623f, -0.758278f, -0.521947f },
	{ -0.177168f, -0.978125f, 0.109005f },
	{ -0.508204f, 0.761753f, -0.401822f },
	{ -0.207887f, 0.825004f, 0.525501f },
	{ 0.535691f, 0.188838f, -0.823028f },
	{ 0.392049f, -0.757876f, -0.521461f },
	{ 0.179062f, -0.97786f, 0.108285f },
	{ 0.510579f, 0.760497f, -0.401191f },
	{ 0.209563f, 0.824977f, 0.524877f },
	{ -0.5354f, 0.189008f, -0.8231789f },
	{ -0.948823f, -0.119296f, -0.292411f },
	{ 0.94849f, -0.120231f, -0.293106f }
};

NJS_MODEL_SADX attach_0022DB0C = { vertex_0022D71C, normal_0022D914, LengthOfArray(vertex_0022D71C), meshlist3_0022D6D4, matlist3_002258FC, LengthOfArray(meshlist3_0022D6D4), LengthOfArray(matlist3_002258FC),{ -0.00694f, 0.814948f, 0.070074f }, 1.724978f, NULL };

NJS_OBJECT object_0022DB34 = { NJD_EVAL_UNIT_SCL, &attach_0022DB0C, -0.118787f, -0.007893f, 0.006261f, 0xFFFFC17D, 0xFFFFC005, 0xFFFFC17D, 1, 1, 1, &object_0022D20C, NULL };

NJS_OBJECT object_0022DB68 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 4.305619f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0022DB34 };

NJS_OBJECT object_0022DB9C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x7FBF, 1, 1, 1, &object_0022DB68, NULL };

NJS_OBJECT object_0022DBD0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -5.210675f, 0.06350999f, 0, 0, 0, 0xFFFFB267, 1, 1, 1, &object_0022DB9C, NULL };

NJS_OBJECT object_0022DC04 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 6.085301f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0022DBD0, &object_0022CFB4 };

NJS_OBJECT object_0022DC38 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x4DB8, 1, 1, 1, &object_0022DC04, NULL };

NJS_OBJECT object_0022DC6C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -3.892979f, -4.127754f, 0, 0, 0, 0xFFFF8281, 1, 1, 1, &object_0022DC38, &object_0022CDF0 };

NJS_OBJECT object_0022DCA0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 3.653011f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0022DC6C, &object_0022BA70 };

NJS_OBJECT object_0022DCD4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x7D7F, 1, 1, 1, &object_0022DCA0, NULL };

NJS_OBJECT object_0022DD08 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.013635f, 0.004237f, 0, 0, 0, 0, 1, 1, 1, &object_0022DCD4, &object_0022B010 };

NJS_OBJECT object_0022DD3C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0022DD08, &object_00229674 };

NJS_OBJECT object_0022DD70 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0022DD3C, NULL };

NJS_OBJECT object_0022DDA4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0.05138f, 0, 0, 0, 1, 1, 1, &object_0022DD70, NULL };

#pragma warning(pop)
