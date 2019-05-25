#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

enum TANKENTexName
{
	TANKENTexName_tanken07,
	TANKENTexName_tanken01,
	TANKENTexName_tanken02,
	TANKENTexName_tanken03,
	TANKENTexName_tanken04,
	TANKENTexName_tanken06,
	TANKENTexName_tanken09,
	TANKENTexName_tanken10,
	TANKENTexName_tanken12
};

NJS_OBJECT object_00221674 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -2.626305f, -5.143046f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_002216A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -1.549521f, 10.01743f, 0, 0, 0, 0, 1, 1, 1, &object_00221674, NULL };

NJS_OBJECT object_002216DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -0.7051049f, -2.976751f, 0.02143f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00221710 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.553017f, -1.048262f, -3.488591f, 0, 0, 0, 1, 1, 1, &object_002216DC, &object_002216A8 };

NJS_OBJECT object_00221744 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -0.705103f, -2.920174f, -0.02143f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00221778 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.553017f, -1.09707f, 3.47088f, 0, 0, 0, 1, 1, 1, &object_00221744, &object_00221710 };

NJS_OBJECT object_002217AC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 5.714913f, 0.732816f, -2.164543f, 0, 0, 0, 1, 1, 1, NULL, &object_00221778 };

NJS_OBJECT object_002217E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 5.714913f, 0.732816f, 2.164544f, 0, 0, 0, 1, 1, 1, NULL, &object_002217AC };

NJS_OBJECT object_00221814 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 5.036205f, -5.434303f, 0.9594989f, 0, 0, 0, 1, 1, 1, NULL, &object_002217E0 };

NJS_OBJECT object_00221848 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 5.036207f, -5.434303f, -0.9594989f, 0, 0, 0, 1, 1, 1, NULL, &object_00221814 };

NJS_OBJECT object_0022187C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -3.140141f, 0.881813f, -0.008913999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_002218B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.911855f, -7.736199f, 0.9594989f, 0, 0, 0, 1, 1, 1, &object_0022187C, &object_00221848 };

NJS_OBJECT object_002218E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -3.14014f, 0.8818139f, 0.008915f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00221918 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.927641f, -7.726909f, -0.959502f, 0, 0, 0, 1, 1, 1, &object_002218E4, &object_002218B0 };

NJS_OBJECT object_0022194C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.755925f, -0.050943f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00221918 };

NJS_OBJECT object_00221980 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -3.606627f, 0.333551f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0022194C };

NJS_MATERIAL matlist_002219B4[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken09, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002219C8[] = {
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

NJS_TEX uv_00221A34[] = {
	{ 103, 40 },
	{ 126, 39 },
	{ 128, 9 },
	{ 218, 10 },
	{ 173, 12 },
	{ 185, 47 },
	{ 250, 40 },
	{ 250, 10 },
	{ 218, 10 },
	{ 46, 10 },
	{ 47, 43 },
	{ 103, 40 },
	{ 218, 10 },
	{ 250, 10 },
	{ 234, 2 },
	{ 0, 10 },
	{ 46, 10 },
	{ 23, 2 },
	{ 174, 2 },
	{ 173, 12 },
	{ 218, 10 },
	{ 163, 47 },
	{ 173, 12 },
	{ 128, 9 },
	{ 128, 9 },
	{ 173, 12 },
	{ 174, 2 },
	{ 0, 40 },
	{ 47, 43 },
	{ 46, 10 },
	{ 93, 9 },
	{ 128, 9 },
	{ 112, 2 },
	{ 69, 2 },
	{ 46, 10 },
	{ 93, 9 },
	{ 128, 9 },
	{ 126, 39 },
	{ 163, 47 },
	{ 128, 9 },
	{ 93, 9 },
	{ 103, 40 },
	{ 218, 10 },
	{ 221, 39 },
	{ 250, 40 },
	{ 185, 47 },
	{ 221, 39 },
	{ 218, 10 },
	{ 46, 10 },
	{ 0, 10 },
	{ 0, 40 },
	{ 103, 40 },
	{ 93, 9 },
	{ 46, 10 }
};

NJS_MESHSET_SADX meshlist_00221B0C[] = {
	{ NJD_MESHSET_3 | 0, 18, poly_002219C8, NULL, NULL, NULL, uv_00221A34, NULL }
};

NJS_VECTOR vertex_00221B24[] = {
	{ -2.642496f, -0.997993f, -1.397237f },
	{ -2.763276f, -1.016442f, 1.052522f },
	{ -2.134074f, 0.268818f, -1.187111f },
	{ -2.472707f, 0.325071f, 1.017261f },
	{ 2.642496f, -0.997993f, -1.397237f },
	{ 2.763276f, -1.016442f, 1.052522f },
	{ 2.134074f, 0.268818f, -1.187111f },
	{ 2.472707f, 0.325071f, 1.017261f },
	{ 0, 0.311656f, 1.789637f },
	{ 0, 0.295984f, -1.557416f },
	{ 0, -1.156412f, -1.933697f },
	{ 0, 0.8680829f, 0.159052f },
	{ -0.8735009f, -1.284763f, 2.071867f },
	{ 1.043736f, -1.292076f, 2.08339f }
};

NJS_VECTOR normal_00221BCC[] = {
	{ -0.7025959f, 0.345372f, -0.622155f },
	{ -0.8483959f, 0.196679f, 0.491469f },
	{ -0.497758f, 0.671221f, -0.549271f },
	{ -0.652032f, 0.636973f, 0.411243f },
	{ 0.7025959f, 0.345372f, -0.622155f },
	{ 0.85697f, 0.198123f, 0.475761f },
	{ 0.497758f, 0.671221f, -0.549271f },
	{ 0.653008f, 0.641777f, 0.402123f },
	{ -0.005458f, 0.742429f, 0.669902f },
	{ 0, 0.657533f, -0.753426f },
	{ 0, 0.250796f, -0.96804f },
	{ 0, 0.999965f, 0.008404f },
	{ -0.339989f, 0.255214f, 0.9051369f },
	{ 0.352017f, 0.278139f, 0.893713f }
};

NJS_MODEL_SADX attach_00221C74 = { vertex_00221B24, normal_00221BCC, LengthOfArray(vertex_00221B24), meshlist_00221B0C, matlist_002219B4, LengthOfArray(meshlist_00221B0C), LengthOfArray(matlist_002219B4),{ 0, -0.211997f, 0.074846f }, 3.41351f, NULL };

NJS_OBJECT object_00221C9C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00221C74, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00221CD0[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken04, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00221CE4[] = {
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

NJS_TEX uv_00221D44[] = {
	{ 155, 132 },
	{ 233, 130 },
	{ 125, 172 },
	{ 70, 127 },
	{ 180, 127 },
	{ 125, 33 },
	{ 233, 130 },
	{ 180, 127 },
	{ 125, 172 },
	{ 125, 172 },
	{ 95, 132 },
	{ 155, 132 },
	{ 125, 172 },
	{ 70, 127 },
	{ 17, 130 },
	{ 125, 172 },
	{ 180, 127 },
	{ 70, 127 },
	{ 125, 172 },
	{ 17, 130 },
	{ 95, 132 },
	{ 17, 130 },
	{ 20, 40 },
	{ 125, 47 },
	{ 180, 127 },
	{ 233, 130 },
	{ 230, 40 },
	{ 125, 47 },
	{ 230, 40 },
	{ 233, 130 },
	{ 155, 132 },
	{ 95, 132 },
	{ 125, 47 },
	{ 125, 33 },
	{ 20, 40 },
	{ 70, 127 },
	{ 17, 130 },
	{ 70, 127 },
	{ 20, 40 },
	{ 180, 127 },
	{ 230, 40 },
	{ 125, 33 },
	{ 125, 47 },
	{ 233, 130 },
	{ 155, 132 },
	{ 95, 132 },
	{ 17, 130 },
	{ 125, 47 }
};

NJS_MESHSET_SADX meshlist_00221E04[] = {
	{ NJD_MESHSET_3 | 0, 16, poly_00221CE4, NULL, NULL, NULL, uv_00221D44, NULL }
};

NJS_VECTOR vertex_00221E1C[] = {
	{ -2.45592f, -1.45184f, -0.181939f },
	{ -1.238914f, -1.411708f, 1.419631f },
	{ 2.45592f, -1.45184f, -0.181939f },
	{ 0, 0.176931f, 1.708974f },
	{ 0, -0.057898f, -1.454119f },
	{ 0, -2.158366f, -0.328191f },
	{ -2.374273f, 0.057698f, 0.205136f },
	{ 2.374273f, 0.057698f, 0.205136f },
	{ 1.238914f, -1.411708f, 1.419631f },
	{ 0.686884f, -1.495778f, -1.439475f },
	{ -0.688432f, -1.495778f, -1.439475f }
};

NJS_VECTOR normal_00221EA0[] = {
	{ -0.871787f, -0.447202f, -0.199994f },
	{ -0.408039f, -0.482073f, 0.7753119f },
	{ 0.8717549f, -0.447232f, -0.200068f },
	{ 0, 0.08622999f, 0.9962749f },
	{ 0.000081f, 0.207341f, -0.978269f },
	{ 0.000043f, -0.997185f, -0.07498299f },
	{ -0.9767039f, 0.203178f, 0.069055f },
	{ 0.9767039f, 0.203178f, 0.069055f },
	{ 0.408039f, -0.482073f, 0.7753119f },
	{ 0.337074f, -0.409015f, -0.847991f },
	{ -0.337427f, -0.408828f, -0.847941f }
};

NJS_MODEL_SADX attach_00221F24 = { vertex_00221E1C, normal_00221EA0, LengthOfArray(vertex_00221E1C), meshlist_00221E04, matlist_00221CD0, LengthOfArray(meshlist_00221E04), LengthOfArray(matlist_00221CD0),{ 0, -0.9907179f, 0.127427f }, 2.93503f, NULL };

NJS_OBJECT object_00221F4C = { NJD_EVAL_UNIT_SCL, &attach_00221F24, -0.028681f, 0.033635f, 0, 0xD4, 0xFFFFC005, 0xD4, 1, 1, 1, &object_00221C9C, NULL };

NJS_MATERIAL matlist_00221F80[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken04, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00221FA8[] = {
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

Sint16 poly_00221FF0[] = {
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

NJS_TEX uv_00222028[] = {
	{ 110, 226 },
	{ 124, 59 },
	{ 57, 72 },
	{ 57, 72 },
	{ 124, 58 },
	{ 59, 226 },
	{ 124, 58 },
	{ 224, 47 },
	{ 109, 226 },
	{ 224, 47 },
	{ 124, 59 },
	{ 206, 226 },
	{ 110, 226 },
	{ 206, 226 },
	{ 124, 59 },
	{ 206, 226 },
	{ 109, 226 },
	{ 224, 47 },
	{ 109, 226 },
	{ 59, 226 },
	{ 124, 58 },
	{ 124, 58 },
	{ 57, 72 },
	{ 123, 9 },
	{ 124, 59 },
	{ 224, 47 },
	{ 123, 9 },
	{ 123, 9 },
	{ 224, 47 },
	{ 124, 58 },
	{ 123, 9 },
	{ 57, 72 },
	{ 124, 59 },
	{ 57, 72 },
	{ 59, 226 },
	{ 110, 226 }
};

NJS_TEX uv_002220B8[] = {
	{ 7, 49 },
	{ 9, 11 },
	{ 10, 11 },
	{ 27, 49 },
	{ 10, 11 },
	{ 56, 11 },
	{ 48, 49 },
	{ 56, 11 },
	{ 9, 11 },
	{ 27, 56 },
	{ 48, 49 },
	{ 7, 49 },
	{ 9, 11 },
	{ 7, 49 },
	{ 48, 49 },
	{ 10, 11 },
	{ 27, 49 },
	{ 7, 49 },
	{ 56, 11 },
	{ 48, 49 },
	{ 27, 49 },
	{ 7, 49 },
	{ 27, 49 },
	{ 27, 56 },
	{ 27, 56 },
	{ 27, 49 },
	{ 48, 49 }
};

NJS_MESHSET_SADX meshlist_00222124[] = {
	{ NJD_MESHSET_3 | 0, 12, poly_00221FA8, NULL, NULL, NULL, uv_00222028, NULL },
	{ NJD_MESHSET_3 | 1, 9, poly_00221FF0, NULL, NULL, NULL, uv_002220B8, NULL }
};

NJS_VECTOR vertex_00222154[] = {
	{ 1.009946f, -2.14455f, -0.212512f },
	{ -0.208852f, -2.144551f, 1.173905f },
	{ -0.030109f, 0.091401f, 1.304428f },
	{ -0.880282f, -0.07596499f, -0.212808f },
	{ -0.215832f, -2.144551f, -1.136883f },
	{ -0.8550079f, -2.14455f, -0.20503f },
	{ 1.24333f, 0.253172f, -0.212786f },
	{ -0.032337f, 0.106179f, -1.17769f },
	{ -0.034583f, 0.759451f, -0.215886f },
	{ -0.013948f, -3.025239f, -0.364369f },
	{ -0.357385f, -0.982453f, -0.6594999f },
	{ -0.418145f, -3.025239f, 0.424437f },
	{ -0.383608f, -0.982453f, 0.535103f },
	{ 0.591642f, -0.982453f, -0.03778f },
	{ 0.41926f, -3.025239f, 0.406426f },
	{ -0.007666f, -3.446185f, 0.0552f }
};

NJS_VECTOR normal_00222214[] = {
	{ 0.987916f, -0.106189f, -0.112899f },
	{ -0.172568f, -0.072956f, 0.982292f },
	{ -0.068839f, 0.422996f, 0.903513f },
	{ -0.941231f, 0.322534f, -0.100279f },
	{ -0.197423f, 0.000445f, -0.980318f },
	{ -0.99484f, 0.014489f, -0.10042f },
	{ 0.890385f, 0.445978f, -0.091208f },
	{ -0.098513f, 0.382612f, -0.918642f },
	{ -0.173574f, 0.981638f, -0.079109f },
	{ -0.005362f, -0.466277f, -0.884623f },
	{ -0.454769f, -0.068051f, -0.888006f },
	{ -0.738139f, -0.437503f, 0.513557f },
	{ -0.537074f, 0.108266f, 0.836558f },
	{ 0.99815f, 0.051354f, -0.032538f },
	{ 0.766556f, -0.420769f, 0.485124f },
	{ -0.005382f, -0.9897529f, -0.142692f }
};

NJS_MODEL_SADX attach_002222D4 = { vertex_00222154, normal_00222214, LengthOfArray(vertex_00222154), meshlist_00222124, matlist_00221F80, LengthOfArray(meshlist_00222124), LengthOfArray(matlist_00221F80),{ 0.181524f, -1.343367f, 0.063369f }, 2.359382f, NULL };

NJS_OBJECT object_002222FC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002222D4, -0.128346f, -0.001403f, -0.000198f, 0x1FFD, 0xFFFFC005, 0x1FFD, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00222330[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00222358[] = {
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

Sint16 poly_0022239A[] = {
	3, 6, 8,
	5, 7, 3,
	3, 8, 5
};

NJS_TEX uv_002223AC[] = {
	{ 37, 55 },
	{ 22, 65 },
	{ 63, 65 },
	{ 119, 243 },
	{ 140, 243 },
	{ 132, 65 },
	{ 132, 65 },
	{ 63, 65 },
	{ 82, 243 },
	{ 82, 243 },
	{ 119, 243 },
	{ 132, 65 },
	{ 4, 243 },
	{ 43, 223 },
	{ 22, 65 },
	{ 63, 65 },
	{ 22, 65 },
	{ 43, 223 },
	{ 195, 65 },
	{ 132, 65 },
	{ 140, 243 },
	{ 63, 65 },
	{ 43, 223 },
	{ 82, 243 },
	{ 195, 65 },
	{ 140, 243 },
	{ 177, 243 },
	{ 211, 55 },
	{ 132, 65 },
	{ 195, 65 },
	{ 63, 65 },
	{ 132, 65 },
	{ 211, 55 }
};

NJS_TEX uv_00222430[] = {
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

NJS_MESHSET_SADX meshlist_00222454[] = {
	{ NJD_MESHSET_3 | 0, 11, poly_00222358, NULL, NULL, NULL, uv_002223AC, NULL },
	{ NJD_MESHSET_3 | 1, 3, poly_0022239A, NULL, NULL, NULL, uv_00222430, NULL }
};

NJS_VECTOR vertex_00222484[] = {
	{ -0.020837f, -0.004004f, -0.398232f },
	{ -0.486946f, -0.004004f, 0.420722f },
	{ 0.445271f, -0.004004f, 0.420722f },
	{ 0.746274f, -3.285362f, 0.031712f },
	{ -0.020837f, 0.18015f, 0.011245f },
	{ -0.345618f, -3.285362f, -0.982811f },
	{ 0.012438f, -2.928353f, 0.803181f },
	{ 0.356072f, -3.285362f, -0.971875f },
	{ -0.7449329f, -3.285362f, 0.026245f }
};

NJS_VECTOR normal_002224F0[] = {
	{ 0.008603999f, 0.565742f, -0.824538f },
	{ -0.707416f, 0.5594569f, 0.431938f },
	{ 0.7132429f, 0.556761f, 0.425795f },
	{ 0.786671f, -0.593411f, 0.170328f },
	{ 0, 0.987974f, -0.15462f },
	{ -0.459601f, -0.5296969f, -0.712873f },
	{ 0.009210999f, -0.37886f, 0.9254079f },
	{ 0.485661f, -0.522546f, -0.700771f },
	{ -0.776617f, -0.6041149f, 0.178637f }
};

NJS_MODEL_SADX attach_0022255C = { vertex_00222484, normal_002224F0, LengthOfArray(vertex_00222484), meshlist_00222454, matlist_00222330, LengthOfArray(meshlist_00222454), LengthOfArray(matlist_00222330),{ 0.000671f, -1.552606f, -0.089815f }, 1.928541f, NULL };

NJS_OBJECT object_00222584 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0022255C, -0.109954f, 0.022069f, 0.003008f, 0x1D56, 0xFFFFC005, 0x1D56, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_002225B8[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002225E0[] = {
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

Sint16 poly_0022261C[] = {
	3, 0, 1,
	1, 4, 3,
	1, 7, 4
};

NJS_TEX uv_00222630[] = {
	{ 204, 197 },
	{ 251, 216 },
	{ 244, 105 },
	{ 176, 224 },
	{ 204, 197 },
	{ 251, 216 },
	{ 204, 197 },
	{ 175, 102 },
	{ 244, 105 },
	{ 251, 216 },
	{ 204, 197 },
	{ 176, 224 },
	{ 175, 102 },
	{ 204, 197 },
	{ 176, 224 },
	{ 176, 224 },
	{ 249, 247 },
	{ 251, 216 },
	{ 176, 224 },
	{ 204, 197 },
	{ 175, 102 },
	{ 244, 105 },
	{ 175, 102 },
	{ 204, 197 },
	{ 244, 105 },
	{ 251, 216 },
	{ 204, 197 },
	{ 251, 216 },
	{ 249, 247 },
	{ 176, 224 }
};

NJS_TEX uv_002226A8[] = {
	{ 3, 254 },
	{ 11, 254 },
	{ 13, 244 },
	{ 13, 244 },
	{ 0, 244 },
	{ 3, 254 },
	{ 13, 244 },
	{ 6, 241 },
	{ 0, 244 }
};

NJS_MESHSET_SADX meshlist_002226CC[] = {
	{ NJD_MESHSET_3 | 0, 10, poly_002225E0, NULL, NULL, NULL, uv_00222630, NULL },
	{ NJD_MESHSET_3 | 1, 3, poly_0022261C, NULL, NULL, NULL, uv_002226A8, NULL }
};

NJS_VECTOR vertex_002226FC[] = {
	{ 0.585349f, -0.410054f, 0.002938f },
	{ 0.89805f, -0.6132179f, 2.138388f },
	{ 0.8061709f, 0.108749f, 1.802514f },
	{ -0.534506f, -0.410054f, 0.002937f },
	{ -0.889426f, -0.6132179f, 2.138387f },
	{ -0.797547f, 0.108749f, 1.802514f },
	{ 0.004312f, 0.497224f, 2.349684f },
	{ 0.004312f, -0.613217f, 2.737828f },
	{ 0.005717f, 0.631048f, 0.006326f }
};

NJS_VECTOR normal_00222768[] = {
	{ 0.797385f, -0.533107f, -0.282797f },
	{ 0.766234f, -0.522545f, 0.373942f },
	{ 0.838966f, 0.514724f, 0.176619f },
	{ -0.784366f, -0.548309f, -0.290048f },
	{ -0.7691309f, -0.521908f, 0.368848f },
	{ -0.84322f, 0.510234f, 0.169241f },
	{ -0.00055f, 0.784179f, 0.620535f },
	{ 0, -0.473116f, 0.881f },
	{ -0.009082f, 0.963258f, -0.268423f }
};

NJS_MODEL_SADX attach_002227D4 = { vertex_002226FC, normal_00222768, LengthOfArray(vertex_002226FC), meshlist_002226CC, matlist_002225B8, LengthOfArray(meshlist_002226CC), LengthOfArray(matlist_002225B8),{ 0.004312f, 0.008915f, 1.370383f }, 1.586932f, NULL };

NJS_OBJECT object_002227FC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002227D4, 0.028997f, -0.11809f, 0.006156f, 0xFFFFC269, 0xFFFFC005, 0xFFFFC269, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00222830 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.829566f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_002227FC };

NJS_OBJECT object_00222864 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0.000001f, 0, 0, 0x2F, 0x7828, 1, 1, 1, &object_00222830, NULL };

NJS_OBJECT object_00222898 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -0.7192129f, -0.23237f, -0.000119f, 0, 0, 0x3AAE, 1, 1, 1, &object_00222864, NULL };

NJS_OBJECT object_002228CC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 3.33914f, 0, 0, 0, 0, 0, 1, 1, 1, &object_00222898, &object_00222584 };

NJS_OBJECT object_00222900 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.919301f, 0, 0, 0, 0, 0x90D, 1, 1, 1, &object_002228CC, &object_002222FC };

NJS_OBJECT object_00222934 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0xFFFFFFF9, 0xE, 0xFFFFBE8C, 1, 1, 1, &object_00222900, NULL };

NJS_OBJECT object_00222968 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -2.678252f, -1.496162f, 0.969094f, 0, 0, 0x1A9, 1, 1, 1, &object_00222934, NULL };

NJS_MATERIAL matlist_0022299C[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken04, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002229C4[] = {
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

Sint16 poly_00222A0C[] = {
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

NJS_TEX uv_00222A44[] = {
	{ 61, 72 },
	{ 128, 60 },
	{ 115, 228 },
	{ 64, 228 },
	{ 128, 59 },
	{ 61, 72 },
	{ 115, 228 },
	{ 228, 47 },
	{ 128, 59 },
	{ 211, 228 },
	{ 128, 60 },
	{ 228, 47 },
	{ 128, 60 },
	{ 211, 228 },
	{ 115, 228 },
	{ 228, 47 },
	{ 115, 228 },
	{ 211, 228 },
	{ 128, 59 },
	{ 64, 228 },
	{ 115, 228 },
	{ 127, 9 },
	{ 61, 72 },
	{ 128, 59 },
	{ 127, 9 },
	{ 228, 47 },
	{ 128, 60 },
	{ 128, 59 },
	{ 228, 47 },
	{ 127, 9 },
	{ 128, 60 },
	{ 61, 72 },
	{ 127, 9 },
	{ 115, 228 },
	{ 64, 228 },
	{ 61, 72 }
};

NJS_TEX uv_00222AD4[] = {
	{ 11, 10 },
	{ 10, 10 },
	{ 6, 50 },
	{ 56, 10 },
	{ 11, 10 },
	{ 26, 50 },
	{ 10, 10 },
	{ 56, 10 },
	{ 47, 50 },
	{ 6, 50 },
	{ 47, 50 },
	{ 26, 58 },
	{ 47, 50 },
	{ 6, 50 },
	{ 10, 10 },
	{ 6, 50 },
	{ 26, 50 },
	{ 11, 10 },
	{ 26, 50 },
	{ 47, 50 },
	{ 56, 10 },
	{ 26, 58 },
	{ 26, 50 },
	{ 6, 50 },
	{ 47, 50 },
	{ 26, 50 },
	{ 26, 58 }
};

NJS_MESHSET_SADX meshlist_00222B40[] = {
	{ NJD_MESHSET_3 | 0, 12, poly_002229C4, NULL, NULL, NULL, uv_00222A44, NULL },
	{ NJD_MESHSET_3 | 1, 9, poly_00222A0C, NULL, NULL, NULL, uv_00222AD4, NULL }
};

NJS_VECTOR vertex_00222B70[] = {
	{ 1.009946f, -2.14455f, 0.212512f },
	{ -0.208852f, -2.144551f, -1.173905f },
	{ -0.048223f, 0.09171899f, -1.304383f },
	{ -0.898396f, -0.07564799f, 0.212852f },
	{ -0.215832f, -2.144551f, 1.136882f },
	{ -0.8550079f, -2.14455f, 0.205029f },
	{ 1.225216f, 0.253489f, 0.212831f },
	{ -0.050451f, 0.106497f, 1.177736f },
	{ -0.052697f, 0.759789f, 0.213748f },
	{ -0.062454f, -3.025252f, 0.364875f },
	{ -0.375656f, -0.982474f, 0.659521f },
	{ -0.466651f, -3.025252f, -0.423931f },
	{ -0.401879f, -0.982474f, -0.535083f },
	{ 0.57337f, -0.982474f, 0.0378f },
	{ 0.370755f, -3.025252f, -0.40592f },
	{ -0.05494f, -3.415921f, -0.026042f }
};

NJS_VECTOR normal_00222C30[] = {
	{ 0.988753f, -0.098634f, 0.112427f },
	{ -0.168056f, -0.07488199f, -0.982929f },
	{ -0.071577f, 0.42283f, -0.903378f },
	{ -0.942621f, 0.318401f, 0.100435f },
	{ -0.193966f, -0.001552f, 0.981007f },
	{ -0.994878f, 0.006025f, 0.100899f },
	{ 0.8888569f, 0.448978f, 0.091387f },
	{ -0.100723f, 0.382828f, 0.918312f },
	{ -0.173599f, 0.981721f, 0.07801899f },
	{ -0.011788f, -0.466875f, 0.884245f },
	{ -0.44906f, -0.061272f, 0.891398f },
	{ -0.7346309f, -0.447247f, -0.510184f },
	{ -0.5305099f, 0.116342f, -0.8396569f },
	{ 0.9988199f, 0.036547f, 0.031987f },
	{ 0.755374f, -0.440778f, -0.484896f },
	{ -0.003314f, -0.9830689f, 0.183208f }
};

NJS_MODEL_SADX attach_00222CF0 = { vertex_00222B70, normal_00222C30, LengthOfArray(vertex_00222B70), meshlist_00222B40, matlist_0022299C, LengthOfArray(meshlist_00222B40), LengthOfArray(matlist_0022299C),{ 0.16341f, -1.328066f, -0.063324f }, 2.345354f, NULL };

NJS_OBJECT object_00222D18 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00222CF0, -0.128299f, -0.000782f, 0.000198f, 0xFFFFE004, 0x3FFB, 0x1FFC, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00222D4C[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00222D74[] = {
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

Sint16 poly_00222DB6[] = {
	5, 0, 6,
	6, 2, 7,
	6, 7, 5
};

NJS_TEX uv_00222DC8[] = {
	{ 24, 65 },
	{ 65, 65 },
	{ 55, 55 },
	{ 126, 65 },
	{ 120, 243 },
	{ 141, 243 },
	{ 197, 65 },
	{ 141, 243 },
	{ 177, 243 },
	{ 65, 65 },
	{ 43, 223 },
	{ 82, 243 },
	{ 43, 223 },
	{ 65, 65 },
	{ 24, 65 },
	{ 120, 243 },
	{ 126, 65 },
	{ 65, 65 },
	{ 141, 243 },
	{ 197, 65 },
	{ 126, 65 },
	{ 4, 243 },
	{ 43, 223 },
	{ 24, 65 },
	{ 82, 243 },
	{ 120, 243 },
	{ 65, 65 },
	{ 55, 55 },
	{ 126, 65 },
	{ 197, 65 },
	{ 65, 65 },
	{ 126, 65 },
	{ 55, 55 }
};

NJS_TEX uv_00222E4C[] = {
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

NJS_MESHSET_SADX meshlist_00222E70[] = {
	{ NJD_MESHSET_3 | 0, 11, poly_00222D74, NULL, NULL, NULL, uv_00222DC8, NULL },
	{ NJD_MESHSET_3 | 1, 3, poly_00222DB6, NULL, NULL, NULL, uv_00222E4C, NULL }
};

NJS_VECTOR vertex_00222EA0[] = {
	{ 0.349753f, -3.263829f, -0.984155f },
	{ 0.049872f, 0.01739f, -0.445345f },
	{ -0.008300999f, -2.906821f, 0.801836f },
	{ 0.515982f, 0.01739f, 0.419151f },
	{ -0.416236f, 0.017389f, 0.419152f },
	{ -0.351937f, -3.263829f, -0.973219f },
	{ 0.749069f, -3.263829f, 0.024901f },
	{ -0.742138f, -3.26383f, 0.03037f },
	{ 0.049873f, 0.201543f, 0.009674f }
};

NJS_VECTOR normal_00222F0C[] = {
	{ 0.459188f, -0.534607f, -0.709466f },
	{ 0.006936f, 0.581933f, -0.813207f },
	{ -0.012859f, -0.378737f, 0.925415f },
	{ 0.707491f, 0.554611f, 0.438023f },
	{ -0.697945f, 0.565221f, 0.43977f },
	{ -0.478566f, -0.531276f, -0.699086f },
	{ 0.774487f, -0.606771f, 0.178882f },
	{ -0.780832f, -0.598723f, 0.178414f },
	{ -0.00001f, 0.991223f, -0.1322f }
};

NJS_MODEL_SADX attach_00222F78 = { vertex_00222EA0, normal_00222F0C, LengthOfArray(vertex_00222EA0), meshlist_00222E70, matlist_00222D4C, LengthOfArray(meshlist_00222E70), LengthOfArray(matlist_00222D4C),{ 0.003465f, -1.531143f, -0.09115899f }, 1.930532f, NULL };

NJS_OBJECT object_00222FA0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00222F78, -0.09093f, 0.01782f, 0.017771f, 0x1D56, 0xFFFFC005, 0x1D56, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00222FD4[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00222FFC[] = {
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

Sint16 poly_00223038[] = {
	1, 0, 3,
	3, 4, 1,
	4, 7, 1
};

NJS_TEX uv_0022304C[] = {
	{ 244, 105 },
	{ 251, 216 },
	{ 204, 197 },
	{ 251, 216 },
	{ 204, 197 },
	{ 176, 224 },
	{ 244, 105 },
	{ 175, 102 },
	{ 204, 197 },
	{ 176, 224 },
	{ 204, 197 },
	{ 251, 216 },
	{ 176, 224 },
	{ 204, 197 },
	{ 175, 102 },
	{ 251, 216 },
	{ 249, 247 },
	{ 176, 224 },
	{ 175, 102 },
	{ 204, 197 },
	{ 176, 224 },
	{ 204, 197 },
	{ 175, 102 },
	{ 244, 105 },
	{ 204, 197 },
	{ 251, 216 },
	{ 244, 105 },
	{ 176, 224 },
	{ 249, 247 },
	{ 251, 216 }
};

NJS_TEX uv_002230C4[] = {
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

NJS_MESHSET_SADX meshlist_002230E8[] = {
	{ NJD_MESHSET_3 | 0, 10, poly_00222FFC, NULL, NULL, NULL, uv_0022304C, NULL },
	{ NJD_MESHSET_3 | 1, 3, poly_00223038, NULL, NULL, NULL, uv_002230C4, NULL }
};

NJS_VECTOR vertex_00223118[] = {
	{ -0.540752f, -0.410929f, 0.002964f },
	{ -0.893739f, -0.613215f, 2.138388f },
	{ -0.801861f, 0.108753f, 1.802515f },
	{ 0.500713f, -0.410929f, 0.002963f },
	{ 0.893737f, -0.613214f, 2.138387f },
	{ 0.801857f, 0.108754f, 1.802513f },
	{ -0.00001f, 0.497228f, 2.349685f },
	{ 0, -0.613214f, 2.737827f },
	{ -0.001695f, 0.630174f, 0.006353f }
};

NJS_VECTOR normal_00223184[] = {
	{ -0.784551f, -0.548672f, -0.288858f },
	{ -0.769002f, -0.521853f, 0.369195f },
	{ -0.843075f, 0.510317f, 0.169711f },
	{ 0.7718289f, -0.563045f, -0.295398f },
	{ 0.7716939f, -0.521268f, 0.364374f },
	{ 0.8469869f, 0.506121f, 0.162652f },
	{ 0.00006599999f, 0.784266f, 0.620425f },
	{ 0.000001f, -0.473117f, 0.881f },
	{ 0.008512f, 0.956337f, -0.292144f }
};

NJS_MODEL_SADX attach_002231F0 = { vertex_00223118, normal_00223184, LengthOfArray(vertex_00223118), meshlist_002230E8, matlist_00222FD4, LengthOfArray(meshlist_002230E8), LengthOfArray(matlist_00222FD4),{ -0.00001f, 0.008479999f, 1.370395f }, 1.582972f, NULL };

NJS_OBJECT object_00223218 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002231F0, 0.029004f, -0.118083f, 0.015051f, 0xFFFFC269, 0xFFFFC005, 0xFFFFC269, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0022324C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.829565f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00223218 };

NJS_OBJECT object_00223280 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0xFFFFFFD1, 0x7797, 1, 1, 1, &object_0022324C, NULL };

NJS_OBJECT object_002232B4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -0.719197f, -0.232373f, 0.000119f, 0, 0, 0x3AAE, 1, 1, 1, &object_00223280, NULL };

NJS_OBJECT object_002232E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 3.339141f, 0, 0, 0, 0, 0, 1, 1, 1, &object_002232B4, &object_00222FA0 };

NJS_OBJECT object_0022331C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.9193f, 0, 0, 0, 0, 0x9DA, 1, 1, 1, &object_002232E8, &object_00222D18 };

NJS_OBJECT object_00223350 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 7, 0xFFFFFFF2, 0xFFFFBE3B, 1, 1, 1, &object_0022331C, NULL };

NJS_OBJECT object_00223384 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -2.678252f, -1.496162f, -0.969094f, 0, 0, 0x1A9, 1, 1, 1, &object_00223350, &object_00222968 };

NJS_OBJECT object_002233B8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.728495f, 0, 0, 0, 0, 0, 1, 1, 1, &object_00223384, &object_00221F4C };

NJS_OBJECT object_002233EC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -0.000294f, 0.000747f, 0, 0, 0, 0x5A, 1, 1, 1, &object_002233B8, NULL };

NJS_OBJECT object_00223420 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.029714f, -0.07546499f, 0, 0, 0, 0, 1, 1, 1, &object_002233EC, NULL };

NJS_MATERIAL matlist_00223454[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00223468[] = {
	7, 11, 8,
	9, 10, 6,
	1, 10, 9,
	2, 11, 7,
	6, 10, 1,
	8, 11, 2
};

Sint16 poly_0022348C[] = {
	0, 3, 4, 5,
	8, 9, 7, 6,
	6, 4, 7, 5,
	7, 5, 2, 3,
	1, 0, 6, 4,
	2, 1, 8, 9
};

NJS_TEX uv_002234BC[] = {
	{ 172, 67 },
	{ 172, 4 },
	{ 136, 4 },
	{ 35, 4 },
	{ 0, 4 },
	{ 0, 67 },
	{ 0, 66 },
	{ 0, 4 },
	{ 34, 3 },
	{ 250, 62 },
	{ 212, 2 },
	{ 173, 63 },
	{ 177, 62 },
	{ 211, 6 },
	{ 248, 59 },
	{ 138, 3 },
	{ 172, 4 },
	{ 172, 66 }
};

NJS_TEX uv_00223504[] = {
	{ 0, 191 },
	{ 172, 191 },
	{ 0, 250 },
	{ 172, 250 },
	{ 136, 4 },
	{ 35, 4 },
	{ 172, 67 },
	{ 0, 67 },
	{ 0, 67 },
	{ 0, 251 },
	{ 172, 67 },
	{ 172, 251 },
	{ 172, 67 },
	{ 172, 254 },
	{ 249, 67 },
	{ 250, 254 },
	{ 249, 66 },
	{ 250, 254 },
	{ 172, 67 },
	{ 172, 254 },
	{ 172, 66 },
	{ 0, 66 },
	{ 138, 3 },
	{ 34, 3 }
};

NJS_MESHSET_SADX meshlist_00223564[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00223468, NULL, NULL, NULL, uv_002234BC, NULL },
	{ NJD_MESHSET_4 | 0, 6, poly_0022348C, NULL, NULL, NULL, uv_00223504, NULL }
};

NJS_VECTOR vertex_00223594[] = {
	{ 2.219061f, 0.070002f, -1.560797f },
	{ 2.201612f, 3.765548f, -1.153759f },
	{ -1.993059f, 3.765548f, -1.153759f },
	{ -2.085918f, 0.070002f, -1.560797f },
	{ 2.21331f, 0.134288f, -3.484604f },
	{ -2.066489f, 0.134288f, -3.484604f },
	{ 2.150038f, 3.924638f, -3.226433f },
	{ -1.977789f, 3.924638f, -3.226433f },
	{ -1.094512f, 5.198219f, -1.581474f },
	{ 1.336219f, 5.198219f, -1.581473f },
	{ 2.385221f, 5.404262f, -2.143357f },
	{ -2.159274f, 5.404263f, -2.143357f }
};

NJS_VECTOR normal_00223624[] = {
	{ 0.728258f, -0.684844f, -0.025062f },
	{ 0.863344f, 0.156617f, 0.479695f },
	{ -0.861517f, 0.170326f, 0.478308f },
	{ -0.7347029f, -0.677723f, -0.030067f },
	{ 0.578702f, -0.546388f, -0.605445f },
	{ -0.579808f, -0.5422249f, -0.608124f },
	{ 0.606043f, 0.332741f, -0.722493f },
	{ -0.607844f, 0.337f, -0.718998f },
	{ -0.006859f, 0.9324189f, 0.361314f },
	{ 0.007159f, 0.931168f, 0.36452f },
	{ 0.524443f, 0.837527f, -0.153322f },
	{ -0.513909f, 0.8445179f, -0.150619f }
};

NJS_MODEL_SADX attach_002236B4 = { vertex_00223594, normal_00223624, LengthOfArray(vertex_00223594), meshlist_00223564, matlist_00223454, LengthOfArray(meshlist_00223564), LengthOfArray(matlist_00223454),{ 0.112973f, 2.737132f, -2.319181f }, 2.910634f, NULL };

NJS_OBJECT object_002236DC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002236B4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00223710[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken09, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00223724[] = {
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

NJS_TEX uv_00223790[] = {
	{ 134, 106 },
	{ 129, 101 },
	{ 123, 116 },
	{ 123, 116 },
	{ 117, 101 },
	{ 113, 106 },
	{ 140, 102 },
	{ 136, 89 },
	{ 129, 101 },
	{ 129, 101 },
	{ 132, 86 },
	{ 123, 93 },
	{ 110, 89 },
	{ 117, 101 },
	{ 115, 86 },
	{ 132, 86 },
	{ 129, 101 },
	{ 136, 89 },
	{ 117, 101 },
	{ 110, 89 },
	{ 106, 103 },
	{ 123, 74 },
	{ 132, 86 },
	{ 134, 81 },
	{ 123, 74 },
	{ 123, 78 },
	{ 112, 81 },
	{ 115, 86 },
	{ 112, 81 },
	{ 110, 89 },
	{ 123, 93 },
	{ 123, 116 },
	{ 129, 101 },
	{ 136, 89 },
	{ 134, 81 },
	{ 132, 86 },
	{ 117, 101 },
	{ 123, 116 },
	{ 123, 93 },
	{ 132, 86 },
	{ 123, 74 },
	{ 123, 93 },
	{ 123, 93 },
	{ 123, 74 },
	{ 115, 86 },
	{ 115, 86 },
	{ 117, 101 },
	{ 123, 93 },
	{ 134, 81 },
	{ 123, 78 },
	{ 123, 74 },
	{ 112, 81 },
	{ 115, 86 },
	{ 123, 74 }
};

NJS_MESHSET_SADX meshlist_00223868[] = {
	{ NJD_MESHSET_3 | 0, 18, poly_00223724, NULL, NULL, NULL, uv_00223790, NULL }
};

NJS_VECTOR vertex_00223880[] = {
	{ -1.127603f, 4.390378f, -0.92698f },
	{ -1.376535f, 4.228999f, -0.119314f },
	{ 1.129965f, 4.390378f, -0.92698f },
	{ 1.365262f, 4.228999f, -0.119314f },
	{ 0, 4.367779f, -1.328303f },
	{ -0.6248339f, 3.742726f, 0.629903f },
	{ -0.913534f, 4.481601f, -0.044976f },
	{ 0.014848f, 3.031954f, 1.446947f },
	{ 0.017649f, 4.842417f, -0.990271f },
	{ 0.947801f, 4.481601f, -0.044976f },
	{ 0.607193f, 3.742726f, 0.629903f },
	{ -1.083966f, 3.458634f, 0.84711f },
	{ 1.09039f, 3.476036f, 0.84711f },
	{ 0.014799f, 3.603187f, -0.594336f },
	{ 1.786523f, 3.651036f, 0.721052f },
	{ -1.834181f, 3.588603f, 0.705925f }
};

NJS_VECTOR normal_00223940[] = {
	{ -0.401213f, 0.901684f, -0.161227f },
	{ -0.357976f, 0.811649f, 0.461605f },
	{ 0.415612f, 0.892568f, -0.174896f },
	{ 0.375426f, 0.807314f, 0.455301f },
	{ -0.004455f, 0.58021f, -0.814454f },
	{ 0.296431f, 0.800699f, 0.520587f },
	{ -0.018145f, 0.854422f, 0.519262f },
	{ -0.00674f, 0.8762169f, 0.481869f },
	{ 0.006929f, 0.990092f, -0.140246f },
	{ 0.048028f, 0.853117f, 0.519504f },
	{ -0.327185f, 0.803006f, 0.498127f },
	{ -0.106929f, 0.707172f, 0.698909f },
	{ 0.08728699f, 0.719389f, 0.689101f },
	{ -0.00366f, 0.715051f, 0.699062f },
	{ 0.0212f, 0.8286909f, 0.559305f },
	{ -0.065662f, 0.805631f, 0.588767f }
};

NJS_MODEL_SADX attach_00223A00 = { vertex_00223880, normal_00223940, LengthOfArray(vertex_00223880), meshlist_00223868, matlist_00223710, LengthOfArray(meshlist_00223868), LengthOfArray(matlist_00223710),{ -0.023829f, 3.937186f, 0.059322f }, 2.255102f, NULL };

NJS_OBJECT object_00223A28 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00223A00, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_002236DC };

NJS_MATERIAL matlist_00223A5C[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken09, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00223A84[] = {
	0, 2, 1,
	7, 8, 4,
	5, 6, 4,
	15, 1, 14,
	11, 13, 1,
	10, 14, 13,
	4, 8, 9,
	10, 5, 3,
	6, 5, 12,
	7, 2, 0,
	7, 6, 12,
	1, 2, 11,
	9, 8, 0,
	9, 15, 3,
	9, 3, 4,
	0, 15, 9,
	0, 8, 7,
	4, 6, 7,
	4, 3, 5,
	5, 10, 13,
	11, 2, 7,
	1, 15, 0,
	13, 12, 5,
	13, 14, 1
};

Sint16 poly_00223B14[] = {
	12, 13, 11,
	11, 7, 12
};

NJS_TEX uv_00223B20[] = {
	{ 78, 232 },
	{ 68, 122 },
	{ 38, 114 },
	{ 123, 137 },
	{ 125, 232 },
	{ 171, 232 },
	{ 208, 118 },
	{ 175, 119 },
	{ 171, 232 },
	{ 39, 232 },
	{ 38, 114 },
	{ 25, 129 },
	{ 101, 111 },
	{ 122, 81 },
	{ 62, 96 },
	{ 180, 64 },
	{ 67, 63 },
	{ 121, 81 },
	{ 171, 232 },
	{ 125, 232 },
	{ 125, 247 },
	{ 223, 128 },
	{ 208, 118 },
	{ 206, 232 },
	{ 175, 119 },
	{ 185, 95 },
	{ 145, 112 },
	{ 123, 137 },
	{ 68, 122 },
	{ 78, 232 },
	{ 123, 137 },
	{ 175, 119 },
	{ 145, 112 },
	{ 62, 96 },
	{ 68, 122 },
	{ 101, 111 },
	{ 125, 247 },
	{ 125, 232 },
	{ 78, 232 },
	{ 125, 247 },
	{ 39, 232 },
	{ 206, 232 },
	{ 125, 247 },
	{ 206, 232 },
	{ 171, 232 },
	{ 78, 232 },
	{ 39, 232 },
	{ 125, 247 },
	{ 78, 232 },
	{ 125, 232 },
	{ 123, 137 },
	{ 171, 232 },
	{ 175, 119 },
	{ 123, 137 },
	{ 171, 232 },
	{ 206, 232 },
	{ 208, 118 },
	{ 185, 95 },
	{ 181, 64 },
	{ 122, 81 },
	{ 101, 111 },
	{ 68, 122 },
	{ 123, 137 },
	{ 38, 114 },
	{ 39, 232 },
	{ 78, 232 },
	{ 122, 81 },
	{ 145, 112 },
	{ 185, 95 },
	{ 122, 81 },
	{ 67, 63 },
	{ 62, 96 }
};

NJS_TEX uv_00223C40[] = {
	{ 52, 20 },
	{ 30, 7 },
	{ 10, 20 },
	{ 10, 20 },
	{ 31, 57 },
	{ 52, 20 }
};

NJS_MESHSET_SADX meshlist_00223C58[] = {
	{ NJD_MESHSET_3 | 0, 24, poly_00223A84, NULL, NULL, NULL, uv_00223B20, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00223B14, NULL, NULL, NULL, uv_00223C40, NULL }
};

NJS_VECTOR vertex_00223C88[] = {
	{ -2.71624f, -0.027538f, 1.002303f },
	{ -2.275575f, 3.867444f, -0.665013f },
	{ -2.017731f, 3.60048f, 0.373674f },
	{ 2.219061f, 0.070002f, -1.560795f },
	{ 2.71624f, -0.027538f, 1.002303f },
	{ 2.325033f, 3.867444f, -0.665013f },
	{ 2.017731f, 3.60048f, 0.373674f },
	{ 0.002208f, 3.03371f, 1.323777f },
	{ 0, -0.027538f, 2.216615f },
	{ 0, -0.481036f, 0.234192f },
	{ 2.201612f, 3.765547f, -1.153757f },
	{ -0.925971f, 4.258085f, -0.004696f },
	{ 0.927507f, 4.258085f, -0.004696f },
	{ -0.036931f, 4.68527f, -0.898209f },
	{ -1.993059f, 3.765547f, -1.153757f },
	{ -2.085918f, 0.070002f, -1.560795f }
};

NJS_VECTOR normal_00223D48[] = {
	{ -0.771897f, -0.471954f, 0.425952f },
	{ -0.79804f, 0.591902f, -0.113066f },
	{ -0.598004f, 0.525268f, 0.60538f },
	{ 0.68033f, -0.6941569f, -0.235153f },
	{ 0.761649f, -0.474037f, 0.44179f },
	{ 0.793583f, 0.6083069f, -0.013704f },
	{ 0.583766f, 0.525322f, 0.6190749f },
	{ 0.000307f, 0.439791f, 0.8981f },
	{ -0.000122f, -0.438266f, 0.898845f },
	{ -0.001341f, -0.999893f, -0.014592f },
	{ 0.750344f, 0.515933f, -0.413275f },
	{ -0.203131f, 0.866771f, 0.455463f },
	{ 0.199663f, 0.869335f, 0.452096f },
	{ -0.007967999f, 0.9155329f, -0.402165f },
	{ -0.624275f, 0.517831f, -0.5849209f },
	{ -0.658753f, -0.698115f, -0.2805f }
};

NJS_MODEL_SADX attach_00223E08 = { vertex_00223C88, normal_00223D48, LengthOfArray(vertex_00223C88), meshlist_00223C58, matlist_00223A5C, LengthOfArray(meshlist_00223C58), LengthOfArray(matlist_00223A5C),{ 0, 2.102117f, 0.32791f }, 3.76883f, NULL };

NJS_OBJECT object_00223E30 = { NJD_EVAL_UNIT_SCL, &attach_00223E08, 0.013487f, 0.005105f, 0, 0xFFFFC141, 0xFFFFC005, 0xFFFFC141, 1, 1, 1, &object_00223A28, NULL };

NJS_MATERIAL matlist_00223E64[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken04, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00223E8C[] = {
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

Sint16 poly_00223ED4[] = {
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

NJS_TEX uv_00223F18[] = {
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

NJS_TEX uv_00223FA8[] = {
	{ 9, 13 },
	{ 4, 13 },
	{ 12, 48 },
	{ 9, 13 },
	{ 41, 48 },
	{ 74, 47 },
	{ 61, 12 },
	{ 74, 47 },
	{ 36, 48 },
	{ 42, 55 },
	{ 36, 48 },
	{ 74, 47 },
	{ 36, 48 },
	{ 12, 48 },
	{ 4, 13 },
	{ 4, 13 },
	{ 61, 12 },
	{ 36, 48 },
	{ 12, 48 },
	{ 41, 48 },
	{ 9, 13 },
	{ 74, 47 },
	{ 61, 12 },
	{ 9, 13 },
	{ 42, 55 },
	{ 41, 48 },
	{ 12, 48 },
	{ 74, 47 },
	{ 41, 48 },
	{ 42, 55 },
	{ 12, 48 },
	{ 36, 48 },
	{ 42, 55 }
};

NJS_MESHSET_SADX meshlist_0022402C[] = {
	{ NJD_MESHSET_3 | 0, 12, poly_00223E8C, NULL, NULL, NULL, uv_00223F18, NULL },
	{ NJD_MESHSET_3 | 1, 11, poly_00223ED4, NULL, NULL, NULL, uv_00223FA8, NULL }
};

NJS_VECTOR vertex_0022405C[] = {
	{ 0.102852f, -1.909372f, 0.967937f },
	{ 0.00381f, -0.07667799f, 0.661451f },
	{ 0.169142f, -1.783389f, -1.289757f },
	{ 0.029373f, 0.034039f, -0.728005f },
	{ 0.486411f, 0.087849f, 0.022211f },
	{ 1.033629f, -1.92815f, -0.221393f },
	{ -0.679822f, 0.091881f, -0.015262f },
	{ 0.136305f, 0.381891f, 0.030315f },
	{ -0.800279f, -1.863918f, -0.202701f },
	{ -0.161646f, -2.61747f, 0.435939f },
	{ -0.311311f, -0.7343079f, 0.439409f },
	{ -0.588864f, -2.554519f, -0.051479f },
	{ -0.381318f, -0.748673f, -0.484196f },
	{ 0.463062f, -0.835288f, -0.116137f },
	{ 0.336258f, -2.65983f, -0.13812f },
	{ -0.243433f, -2.614973f, -0.556502f },
	{ -0.219988f, -2.985173f, -0.07235999f }
};

NJS_VECTOR normal_00224128[] = {
	{ 0.058784f, 0.131303f, 0.989598f },
	{ 0.036756f, 0.425241f, 0.904333f },
	{ 0.08416799f, 0.283098f, -0.955391f },
	{ 0.053947f, 0.573653f, -0.81732f },
	{ 0.858389f, 0.504953f, 0.09050699f },
	{ 0.96888f, 0.247529f, 0.001266f },
	{ -0.83587f, 0.547781f, 0.035446f },
	{ 0.189859f, 0.977146f, 0.095598f },
	{ -0.996781f, 0.06578299f, -0.045821f },
	{ 0.020043f, -0.383805f, 0.923197f },
	{ -0.417406f, 0.075f, 0.90562f },
	{ -0.951133f, -0.304269f, 0.052603f },
	{ -0.5947599f, 0.147373f, -0.79028f },
	{ 0.998103f, -0.007506f, -0.061104f },
	{ 0.896313f, -0.434439f, -0.08880199f },
	{ -0.164328f, -0.388142f, -0.906831f },
	{ -0.144974f, -0.989411f, 0.006981f }
};

NJS_MODEL_SADX attach_002241F4 = { vertex_0022405C, normal_00224128, LengthOfArray(vertex_0022405C), meshlist_0022402C, matlist_00223E64, LengthOfArray(meshlist_0022402C), LengthOfArray(matlist_00223E64),{ 0.116675f, -1.301641f, -0.16091f }, 1.955133f, NULL };

NJS_OBJECT object_0022421C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002241F4, -0.098492f, 0.201287f, 0.040638f, 0xFFFFC339, 0x45D0, 0x1F7, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00224250[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00224264[] = {
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

NJS_TEX uv_002242AC[] = {
	{ 28, 10 },
	{ 26, 15 },
	{ 8, 16 },
	{ 36, 54 },
	{ 52, 15 },
	{ 28, 16 },
	{ 26, 15 },
	{ 52, 15 },
	{ 36, 54 },
	{ 36, 54 },
	{ 12, 54 },
	{ 10, 54 },
	{ 8, 16 },
	{ 10, 54 },
	{ 12, 54 },
	{ 10, 54 },
	{ 8, 16 },
	{ 26, 15 },
	{ 26, 15 },
	{ 36, 54 },
	{ 10, 54 },
	{ 12, 54 },
	{ 28, 16 },
	{ 8, 16 },
	{ 28, 10 },
	{ 28, 16 },
	{ 52, 15 },
	{ 8, 16 },
	{ 28, 16 },
	{ 28, 10 },
	{ 52, 15 },
	{ 26, 15 },
	{ 28, 10 },
	{ 28, 16 },
	{ 12, 54 },
	{ 36, 54 }
};

NJS_MESHSET_SADX meshlist_0022433C[] = {
	{ NJD_MESHSET_3 | 0, 12, poly_00224264, NULL, NULL, NULL, uv_002242AC, NULL }
};

NJS_VECTOR vertex_00224354[] = {
	{ -0.190569f, -2.00005f, 0.366254f },
	{ 0.151075f, 0.035165f, 0.57832f },
	{ -0.236799f, -1.973555f, -0.3795f },
	{ -0.269266f, 0.019717f, 0.076634f },
	{ 0.664517f, 0.055884f, 0.020742f },
	{ 0.318882f, -1.999561f, -0.028137f },
	{ 0.099801f, 0.071986f, -0.44707f },
	{ 0.146116f, 0.323968f, 0.082863f }
};

NJS_VECTOR normal_002243B4[] = {
	{ -0.36693f, -0.619043f, 0.694369f },
	{ 0.016568f, 0.38181f, 0.924092f },
	{ -0.441413f, -0.5654809f, -0.696697f },
	{ -0.904507f, 0.422903f, 0.054947f },
	{ 0.928974f, 0.366478f, -0.051969f },
	{ 0.7546239f, -0.653289f, -0.061291f },
	{ -0.080073f, 0.456363f, -0.886184f },
	{ -0.05645f, 0.996934f, 0.054182f }
};

NJS_MODEL_SADX attach_00224414 = { vertex_00224354, normal_002243B4, LengthOfArray(vertex_00224354), meshlist_0022433C, matlist_00224250, LengthOfArray(meshlist_0022433C), LengthOfArray(matlist_00224250),{ 0.197625f, -0.8380409f, 0.065625f }, 1.283338f, NULL };

NJS_OBJECT object_0022443C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00224414, 0.08738399f, -0.016274f, -0.007914999f, 0x431, 0x40F5, 0x453A, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00224470[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00224484[] = {
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

NJS_TEX uv_002244E4[] = {
	{ 6, 25 },
	{ 33, 38 },
	{ 18, 55 },
	{ 32, 8 },
	{ 33, 38 },
	{ 6, 25 },
	{ 54, 35 },
	{ 33, 38 },
	{ 48, 10 },
	{ 39, 56 },
	{ 54, 35 },
	{ 18, 26 },
	{ 39, 56 },
	{ 18, 55 },
	{ 33, 38 },
	{ 18, 26 },
	{ 6, 25 },
	{ 18, 55 },
	{ 32, 8 },
	{ 6, 25 },
	{ 20, 10 },
	{ 48, 10 },
	{ 33, 38 },
	{ 32, 8 },
	{ 11, 43 },
	{ 6, 25 },
	{ 18, 26 },
	{ 20, 10 },
	{ 6, 25 },
	{ 11, 43 },
	{ 20, 10 },
	{ 11, 43 },
	{ 18, 26 },
	{ 18, 26 },
	{ 54, 35 },
	{ 48, 10 },
	{ 48, 10 },
	{ 20, 10 },
	{ 18, 26 },
	{ 33, 38 },
	{ 54, 35 },
	{ 39, 56 },
	{ 18, 26 },
	{ 18, 55 },
	{ 39, 56 },
	{ 48, 10 },
	{ 32, 8 },
	{ 20, 10 }
};

NJS_MESHSET_SADX meshlist_002245A4[] = {
	{ NJD_MESHSET_3 | 0, 16, poly_00224484, NULL, NULL, NULL, uv_002244E4, NULL }
};

NJS_VECTOR vertex_002245BC[] = {
	{ -0.06614099f, -0.74212f, 0.635164f },
	{ 0.193307f, 0.17846f, 0.006678f },
	{ 0.514633f, -0.832873f, 0.020505f },
	{ -0.125276f, -0.396815f, -0.730633f },
	{ -0.188496f, -1.421431f, -0.396966f },
	{ -0.420185f, -1.022832f, -0.6148f },
	{ 0.07310399f, -0.417925f, -0.399165f },
	{ -0.170169f, -1.462847f, 0.196809f },
	{ -0.227896f, 0.13729f, -0.333201f },
	{ -0.295559f, 0.116809f, 0.447651f }
};

NJS_VECTOR normal_00224634[] = {
	{ -0.28417f, -0.057309f, 0.95706f },
	{ 0.659762f, 0.7486219f, 0.06540599f },
	{ 0.982074f, -0.183599f, 0.042692f },
	{ 0.07094599f, 0.154622f, -0.985423f },
	{ -0.410716f, -0.683792f, -0.6031089f },
	{ -0.413192f, -0.903194f, -0.116247f },
	{ -0.860751f, -0.224418f, 0.456885f },
	{ -0.404155f, -0.822861f, 0.399448f },
	{ -0.593664f, 0.629361f, -0.501465f },
	{ -0.546133f, 0.456377f, 0.702466f }
};

NJS_MODEL_SADX attach_002246AC = { vertex_002245BC, normal_00224634, LengthOfArray(vertex_002245BC), meshlist_002245A4, matlist_00224470, LengthOfArray(meshlist_002245A4), LengthOfArray(matlist_00224470),{ 0.047224f, -0.642194f, -0.047734f }, 0.966866f, NULL };

NJS_OBJECT object_002246D4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002246AC, 0.056079f, -0.077116f, -0.085861f, 0x2F80, 0x4454, 0x78A4, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00224708 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.911608f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_002246D4 };

NJS_OBJECT object_0022473C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0xFFFFF464, 0xFFFFB0D5, 1, 1, 1, &object_00224708, NULL };

NJS_OBJECT object_00224770 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -0.09192599f, 0.042782f, -0.020336f, 0, 0, 0x47E2, 1, 1, 1, &object_0022473C, NULL };

NJS_OBJECT object_002247A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.102243f, 0, -0.00001f, 0, 0, 0, 1, 1, 1, &object_00224770, &object_0022443C };

NJS_OBJECT object_002247D8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.493569f, 0, 0, 0xFFFFFF99, 0, 0xFFFFFCAE, 1, 1, 1, &object_002247A4, &object_0022421C };

NJS_OBJECT object_0022480C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0x8702, 0x75F0, 0x435C, 1, 1, 1, &object_002247D8, NULL };

NJS_OBJECT object_00224840 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -3.853671f, -3.422487f, -2.34189f, 0, 0, 0xFFFF8281, 1, 1, 1, &object_0022480C, NULL };

NJS_MATERIAL matlist_00224874[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken04, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0022489C[] = {
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

Sint16 poly_002248E4[] = {
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

NJS_TEX uv_00224928[] = {
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

NJS_TEX uv_002249B8[] = {
	{ 11, 49 },
	{ 4, 14 },
	{ 9, 13 },
	{ 73, 48 },
	{ 40, 49 },
	{ 9, 13 },
	{ 34, 49 },
	{ 73, 48 },
	{ 61, 13 },
	{ 73, 48 },
	{ 34, 49 },
	{ 40, 55 },
	{ 4, 14 },
	{ 11, 49 },
	{ 34, 49 },
	{ 34, 49 },
	{ 61, 13 },
	{ 4, 14 },
	{ 9, 13 },
	{ 40, 49 },
	{ 11, 49 },
	{ 9, 13 },
	{ 61, 13 },
	{ 73, 48 },
	{ 11, 49 },
	{ 40, 49 },
	{ 40, 55 },
	{ 40, 55 },
	{ 40, 49 },
	{ 73, 48 },
	{ 40, 55 },
	{ 34, 49 },
	{ 11, 49 }
};

NJS_MESHSET_SADX meshlist_00224A3C[] = {
	{ NJD_MESHSET_3 | 0, 12, poly_0022489C, NULL, NULL, NULL, uv_00224928, NULL },
	{ NJD_MESHSET_3 | 1, 11, poly_002248E4, NULL, NULL, NULL, uv_002249B8, NULL }
};

NJS_VECTOR vertex_00224A6C[] = {
	{ 0.102535f, -1.909214f, -0.969959f },
	{ 0.00381f, -0.07667799f, -0.661451f },
	{ 0.169501f, -1.784101f, 1.286963f },
	{ 0.030197f, 0.033095f, 0.728175f },
	{ 0.486411f, 0.087849f, -0.022211f },
	{ 1.03328f, -1.927976f, 0.21917f },
	{ -0.679821f, 0.091882f, 0.015262f },
	{ 0.136305f, 0.381892f, -0.030315f },
	{ -0.8006279f, -1.863744f, 0.200477f },
	{ -0.178776f, -2.599881f, -0.424232f },
	{ -0.31131f, -0.7343079f, -0.439409f },
	{ -0.605993f, -2.53693f, 0.063185f },
	{ -0.380659f, -0.749427f, 0.484331f },
	{ 0.463556f, -0.835854f, 0.116238f },
	{ 0.319128f, -2.642241f, 0.149826f },
	{ -0.260562f, -2.597384f, 0.568208f },
	{ -0.223538f, -2.910186f, 0.09660999f }
};

NJS_VECTOR normal_00224B38[] = {
	{ 0.058709f, 0.132369f, -0.98946f },
	{ 0.036846f, 0.425768f, -0.9040819f },
	{ 0.084406f, 0.281738f, 0.955772f },
	{ 0.054541f, 0.572708f, 0.817943f },
	{ 0.85835f, 0.505033f, -0.09042399f },
	{ 0.968954f, 0.247235f, -0.001526f },
	{ -0.83578f, 0.547962f, -0.034776f },
	{ 0.189712f, 0.977205f, -0.095289f },
	{ -0.9967729f, 0.065914f, 0.045822f },
	{ 0.014548f, -0.416537f, -0.9090019f },
	{ -0.411833f, 0.073244f, -0.9083109f },
	{ -0.942024f, -0.331546f, -0.051648f },
	{ -0.590724f, 0.158956f, 0.791062f },
	{ 0.998271f, -0.017419f, 0.056134f },
	{ 0.883178f, -0.4608f, 0.087525f },
	{ -0.168151f, -0.408324f, 0.897216f },
	{ -0.135087f, -0.990804f, 0.007695f }
};

NJS_MODEL_SADX attach_00224C04 = { vertex_00224A6C, normal_00224B38, LengthOfArray(vertex_00224A6C), meshlist_00224A3C, matlist_00224874, LengthOfArray(meshlist_00224A3C), LengthOfArray(matlist_00224874),{ 0.116326f, -1.264147f, 0.158502f }, 1.930584f, NULL };

NJS_OBJECT object_00224C2C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00224C04, -0.113283f, 0.21015f, -0.145564f, 0xFFFFBF8C, 0xFFFFC69F, 0x7F2C, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00224C60[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00224C74[] = {
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

NJS_TEX uv_00224CBC[] = {
	{ 8, 16 },
	{ 26, 16 },
	{ 28, 10 },
	{ 28, 16 },
	{ 52, 16 },
	{ 37, 54 },
	{ 37, 54 },
	{ 52, 16 },
	{ 26, 16 },
	{ 11, 54 },
	{ 13, 54 },
	{ 37, 54 },
	{ 13, 54 },
	{ 11, 54 },
	{ 8, 16 },
	{ 26, 16 },
	{ 8, 16 },
	{ 11, 54 },
	{ 11, 54 },
	{ 37, 54 },
	{ 26, 16 },
	{ 8, 16 },
	{ 28, 16 },
	{ 13, 54 },
	{ 52, 16 },
	{ 28, 16 },
	{ 28, 10 },
	{ 28, 10 },
	{ 28, 16 },
	{ 8, 16 },
	{ 28, 10 },
	{ 26, 16 },
	{ 52, 16 },
	{ 37, 54 },
	{ 13, 54 },
	{ 28, 16 }
};

NJS_MESHSET_SADX meshlist_00224D4C[] = {
	{ NJD_MESHSET_3 | 0, 12, poly_00224C74, NULL, NULL, NULL, uv_00224CBC, NULL }
};

NJS_VECTOR vertex_00224D64[] = {
	{ -0.190569f, -2.00005f, -0.366253f },
	{ 0.123778f, 0.051531f, -0.5803879f },
	{ -0.236799f, -1.973555f, 0.3795f },
	{ -0.294142f, 0.043435f, -0.07903299f },
	{ 0.63722f, 0.07224999f, -0.02281f },
	{ 0.318882f, -1.999561f, 0.028137f },
	{ 0.072504f, 0.08835199f, 0.445001f },
	{ 0.123395f, 0.369156f, -0.063116f }
};

NJS_VECTOR normal_00224DC4[] = {
	{ -0.36118f, -0.621316f, -0.695352f },
	{ 0.011716f, 0.373774f, -0.9274459f },
	{ -0.435799f, -0.567648f, 0.6984659f },
	{ -0.910522f, 0.409427f, -0.05762f },
	{ 0.932902f, 0.356669f, 0.049813f },
	{ 0.759083f, -0.6480989f, 0.06133f },
	{ -0.08661699f, 0.436642f, 0.895456f },
	{ -0.046207f, 0.99855f, -0.027635f }
};

NJS_MODEL_SADX attach_00224E24 = { vertex_00224D64, normal_00224DC4, LengthOfArray(vertex_00224D64), meshlist_00224D4C, matlist_00224C60, LengthOfArray(meshlist_00224D4C), LengthOfArray(matlist_00224C60),{ 0.171539f, -0.815447f, -0.067693f }, 1.306961f, NULL };

NJS_OBJECT object_00224E4C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00224E24, 0.058534f, -0.0112f, -0.042272f, 0x18C9, 0xFFFFBED8, 0x282F, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00224E80[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00224E94[] = {
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

NJS_TEX uv_00224EF4[] = {
	{ 43, 55 },
	{ 28, 38 },
	{ 54, 25 },
	{ 54, 25 },
	{ 28, 38 },
	{ 28, 8 },
	{ 13, 10 },
	{ 28, 38 },
	{ 6, 35 },
	{ 43, 26 },
	{ 6, 35 },
	{ 22, 56 },
	{ 28, 38 },
	{ 43, 55 },
	{ 22, 56 },
	{ 43, 55 },
	{ 54, 25 },
	{ 43, 26 },
	{ 40, 10 },
	{ 54, 25 },
	{ 28, 8 },
	{ 28, 8 },
	{ 28, 38 },
	{ 13, 10 },
	{ 43, 26 },
	{ 54, 25 },
	{ 50, 43 },
	{ 50, 43 },
	{ 54, 25 },
	{ 40, 10 },
	{ 43, 26 },
	{ 50, 43 },
	{ 40, 10 },
	{ 13, 10 },
	{ 6, 35 },
	{ 43, 26 },
	{ 43, 26 },
	{ 40, 10 },
	{ 13, 10 },
	{ 22, 56 },
	{ 6, 35 },
	{ 28, 38 },
	{ 22, 56 },
	{ 43, 55 },
	{ 43, 26 },
	{ 40, 10 },
	{ 28, 8 },
	{ 13, 10 }
};

NJS_MESHSET_SADX meshlist_00224FB4[] = {
	{ NJD_MESHSET_3 | 0, 16, poly_00224E94, NULL, NULL, NULL, uv_00224EF4, NULL }
};

NJS_VECTOR vertex_00224FCC[] = {
	{ -0.06614099f, -0.74212f, -0.635165f },
	{ 0.193307f, 0.17846f, -0.006678f },
	{ 0.514633f, -0.832873f, -0.020505f },
	{ -0.125276f, -0.396815f, 0.730633f },
	{ -0.188495f, -1.421431f, 0.396966f },
	{ -0.420185f, -1.022832f, 0.6148f },
	{ 0.07310399f, -0.417925f, 0.399165f },
	{ -0.170169f, -1.462847f, -0.196809f },
	{ -0.227896f, 0.13729f, 0.333201f },
	{ -0.295559f, 0.116809f, -0.447651f }
};

NJS_VECTOR normal_00225044[] = {
	{ -0.28417f, -0.057309f, -0.95706f },
	{ 0.659762f, 0.7486219f, -0.06540599f },
	{ 0.982074f, -0.183599f, -0.042692f },
	{ 0.07094599f, 0.154622f, 0.985423f },
	{ -0.410716f, -0.683792f, 0.60311f },
	{ -0.413192f, -0.903194f, 0.116248f },
	{ -0.860751f, -0.224418f, -0.456885f },
	{ -0.404155f, -0.822861f, -0.399448f },
	{ -0.593664f, 0.629361f, 0.501465f },
	{ -0.546133f, 0.456377f, -0.702466f }
};

NJS_MODEL_SADX attach_002250BC = { vertex_00224FCC, normal_00225044, LengthOfArray(vertex_00224FCC), meshlist_00224FB4, matlist_00224E80, LengthOfArray(meshlist_00224FB4), LengthOfArray(matlist_00224E80),{ 0.047224f, -0.642194f, 0.047734f }, 0.9644729f, NULL };

NJS_OBJECT object_002250E4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002250BC, 0.01459f, -0.088571f, 0.06731f, 0x51F3, 0xFFFFC467, 0xFFFFF761, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00225118 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.934748f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_002250E4 };

NJS_OBJECT object_0022514C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0xAEA, 0xFFFFB112, 1, 1, 1, &object_00225118, NULL };

NJS_OBJECT object_00225180 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -0.092329f, 0.044377f, 0.018134f, 0, 0, 0x47E2, 1, 1, 1, &object_0022514C, NULL };

NJS_OBJECT object_002251B4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.118951f, 0, 0, 0, 0, 0, 1, 1, 1, &object_00225180, &object_00224E4C };

NJS_OBJECT object_002251E8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.505848f, 0, 0, 0, 0, 0xFFFFFBF6, 1, 1, 1, &object_002251B4, &object_00224C2C };

NJS_OBJECT object_0022521C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0xFFFFF8D4, 0xFFFFF6DE, 0xFFFFC3B9, 1, 1, 1, &object_002251E8, NULL };

NJS_OBJECT object_00225250 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -3.853671f, -3.422487f, 2.408619f, 0, 0, 0xFFFF8281, 1, 1, 1, &object_0022521C, &object_00224840 };

NJS_MATERIAL matlist_00225284[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00225298[] = {
	4, 5, 2,
	6, 1, 7,
	2, 7, 1,
	3, 4, 0,
	7, 0, 6,
	2, 1, 4,
	3, 5, 4,
	0, 7, 3
};

NJS_TEX uv_002252C8[] = {
	{ 31, 12 },
	{ 30, 57 },
	{ 56, 49 },
	{ 31, 7 },
	{ 41, 9 },
	{ 31, 37 },
	{ 56, 49 },
	{ 31, 37 },
	{ 41, 9 },
	{ 5, 49 },
	{ 31, 12 },
	{ 21, 9 },
	{ 31, 37 },
	{ 21, 9 },
	{ 31, 7 },
	{ 56, 49 },
	{ 41, 9 },
	{ 31, 12 },
	{ 5, 49 },
	{ 30, 57 },
	{ 31, 12 },
	{ 21, 9 },
	{ 31, 37 },
	{ 5, 49 }
};

NJS_MESHSET_SADX meshlist_00225328[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00225298, NULL, NULL, NULL, uv_002252C8, NULL }
};

NJS_VECTOR vertex_00225340[] = {
	{ -0.396195f, 1.223126f, 0.174939f },
	{ 0.394368f, 1.223126f, 0.174939f },
	{ 0.976774f, -0.558086f, 0.552301f },
	{ -1.012759f, -0.558086f, 0.552301f },
	{ -0.00002f, 1.071722f, 0.670186f },
	{ -0.031501f, -0.941553f, 1.090692f },
	{ -0.000913f, 1.291969f, -0.105588f },
	{ 0.015026f, -0.04972f, -0.236119f }
};

NJS_VECTOR normal_002253A0[] = {
	{ -0.909386f, 0.268927f, -0.317327f },
	{ 0.9126689f, 0.267669f, -0.308852f },
	{ 0.816079f, 0.254993f, 0.518645f },
	{ -0.817051f, 0.270457f, 0.509195f },
	{ 0.006241f, 0.394682f, 0.918797f },
	{ -0.006112f, 0.204542f, 0.978839f },
	{ -0.004075f, 0.096782f, -0.995297f },
	{ 0.020137f, 0.07221299f, -0.9971859f }
};

NJS_MODEL_SADX attach_00225400 = { vertex_00225340, normal_002253A0, LengthOfArray(vertex_00225340), meshlist_00225328, matlist_00225284, LengthOfArray(meshlist_00225328), LengthOfArray(matlist_00225284),{ -0.017993f, 0.175208f, 0.427287f }, 1.380352f, NULL };

NJS_OBJECT object_00225428 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00225400, 0.036502f, 0.006486f, 0, 0xFFFFD934, 0xFFFFC005, 0xFFFFD934, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0022545C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 0, 0, 0, 0xFFFFC005, 0x3C71, 0xFFFFC005, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00225490[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002254A4[] = {
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

NJS_TEX uv_00225558[] = {
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

NJS_MESHSET_SADX meshlist_002256C0[] = {
	{ NJD_MESHSET_3 | 0, 30, poly_002254A4, NULL, NULL, NULL, uv_00225558, NULL }
};

NJS_VECTOR vertex_002256D8[] = {
	{ 0, 1.538225f, 0 },
	{ 1.83632f, -0.469123f, 0 },
	{ 1.208659f, 0, 0 },
	{ 0.89196f, 1.125421f, 0.441106f },
	{ 0.91816f, -0.469123f, -1.494882f },
	{ 0.604329f, 0, -1.046729f },
	{ 0.898577f, 1.125421f, -0.431432f },
	{ -0.91816f, -0.469123f, -1.494882f },
	{ -0.6043299f, 0, -1.046729f },
	{ 0.006617f, 1.125421f, -0.872537f },
	{ -1.83632f, -0.469123f, 0 },
	{ -1.208659f, 0, 0 },
	{ -0.89196f, 1.125421f, -0.441106f },
	{ -0.91816f, -0.469123f, 1.494882f },
	{ -0.604329f, 0, 1.046729f },
	{ -0.898577f, 1.125421f, 0.431432f },
	{ 0.91816f, -0.469123f, 1.494882f },
	{ 0.604329f, 0, 1.046729f },
	{ -0.006617f, 1.125421f, 0.872537f }
};

NJS_VECTOR normal_002257BC[] = {
	{ 0, 1, 0 },
	{ 0.603169f, 0.797605f, 0.003736f },
	{ 0.830573f, 0.556875f, 0.006286f },
	{ 0.694104f, 0.58851f, 0.41458f },
	{ 0.328447f, 0.758024f, -0.563491f },
	{ 0.389395f, 0.5531f, -0.736514f },
	{ 0.699452f, 0.5883f, -0.405795f },
	{ -0.329725f, 0.7622499f, -0.557007f },
	{ -0.395237f, 0.5505559f, -0.735306f },
	{ 0.004557f, 0.610283f, -0.79217f },
	{ -0.603169f, 0.797605f, -0.003736f },
	{ -0.830573f, 0.556875f, -0.006286f },
	{ -0.694104f, 0.58851f, -0.41458f },
	{ -0.328446f, 0.758024f, 0.563491f },
	{ -0.389394f, 0.5531f, 0.736514f },
	{ -0.699452f, 0.5883f, 0.405795f },
	{ 0.329725f, 0.7622499f, 0.5570059f },
	{ 0.395237f, 0.550557f, 0.735306f },
	{ -0.004556f, 0.610283f, 0.79217f }
};

NJS_MODEL_SADX attach_002258A0 = { vertex_002256D8, normal_002257BC, LengthOfArray(vertex_002256D8), meshlist_002256C0, matlist_00225490, LengthOfArray(meshlist_002256C0), LengthOfArray(matlist_00225490),{ 0, 0.534551f, 0 }, 2.359486f, NULL };

NJS_OBJECT object_002258C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002258A0, -0.005956f, 1.740089f, -0.091718f, 0xFFFFC005, 0x376D, 0xFFFFC005, 1, 1, 1, NULL, &object_0022545C };

NJS_MATERIAL matlist_002258FC[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, TANKENTexName_tanken06, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00225938[] = {
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

Sint16 poly_0022599E[] = {
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

Sint16 poly_00225A46[] = {
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

NJS_TEX uv_00225AC0[] = {
	{ 202, 58 },
	{ 187, 48 },
	{ 201, 58 },
	{ 211, 38 },
	{ 193, 35 },
	{ 202, 58 },
	{ 201, 58 },
	{ 187, 48 },
	{ 192, 35 },
	{ 211, 38 },
	{ 213, 22 },
	{ 193, 35 },
	{ 192, 35 },
	{ 213, 22 },
	{ 211, 38 },
	{ 196, 10 },
	{ 216, 8 },
	{ 213, 22 },
	{ 193, 35 },
	{ 187, 48 },
	{ 202, 58 },
	{ 201, 58 },
	{ 192, 35 },
	{ 211, 38 },
	{ 213, 22 },
	{ 217, 8 },
	{ 197, 10 },
	{ 193, 35 },
	{ 197, 10 },
	{ 184, 10 },
	{ 187, 48 },
	{ 193, 35 },
	{ 183, 33 },
	{ 193, 35 },
	{ 213, 22 },
	{ 197, 10 },
	{ 184, 10 },
	{ 196, 10 },
	{ 192, 35 },
	{ 184, 10 },
	{ 183, 33 },
	{ 193, 35 },
	{ 192, 35 },
	{ 183, 33 },
	{ 184, 10 },
	{ 196, 10 },
	{ 213, 22 },
	{ 192, 35 },
	{ 183, 33 },
	{ 192, 35 },
	{ 187, 48 }
};

NJS_TEX uv_00225B8C[] = {
	{ 19, 3 },
	{ 2, 58 },
	{ 37, 64 },
	{ 169, 4 },
	{ 131, 1 },
	{ 152, 64 },
	{ 70, 190 },
	{ 45, 133 },
	{ 28, 161 },
	{ 28, 161 },
	{ 45, 133 },
	{ 6, 104 },
	{ 159, 159 },
	{ 142, 133 },
	{ 115, 190 },
	{ 115, 190 },
	{ 95, 165 },
	{ 70, 190 },
	{ 95, 165 },
	{ 115, 190 },
	{ 142, 133 },
	{ 108, 123 },
	{ 95, 115 },
	{ 82, 123 },
	{ 152, 64 },
	{ 131, 1 },
	{ 95, 61 },
	{ 131, 1 },
	{ 59, 1 },
	{ 95, 61 },
	{ 159, 159 },
	{ 182, 100 },
	{ 142, 133 },
	{ 182, 100 },
	{ 184, 52 },
	{ 152, 64 },
	{ 45, 133 },
	{ 70, 190 },
	{ 95, 165 },
	{ 82, 123 },
	{ 95, 115 },
	{ 95, 61 },
	{ 95, 61 },
	{ 95, 115 },
	{ 108, 123 },
	{ 95, 61 },
	{ 59, 1 },
	{ 37, 64 },
	{ 108, 123 },
	{ 142, 133 },
	{ 152, 64 },
	{ 37, 64 },
	{ 45, 133 },
	{ 82, 123 },
	{ 95, 165 },
	{ 142, 133 },
	{ 108, 123 },
	{ 6, 104 },
	{ 45, 133 },
	{ 37, 64 },
	{ 152, 64 },
	{ 95, 61 },
	{ 108, 123 },
	{ 82, 123 },
	{ 95, 61 },
	{ 37, 64 },
	{ 37, 64 },
	{ 2, 58 },
	{ 6, 104 },
	{ 82, 123 },
	{ 45, 133 },
	{ 95, 165 },
	{ 82, 123 },
	{ 95, 165 },
	{ 108, 123 },
	{ 152, 64 },
	{ 184, 52 },
	{ 169, 4 },
	{ 37, 64 },
	{ 59, 1 },
	{ 19, 3 },
	{ 152, 64 },
	{ 142, 133 },
	{ 182, 100 }
};

NJS_TEX uv_00225CDC[] = {
	{ 20, 55 },
	{ 11, 24 },
	{ 7, 29 },
	{ 54, 29 },
	{ 50, 24 },
	{ 41, 55 },
	{ 41, 55 },
	{ 37, 3 },
	{ 24, 3 },
	{ 37, 3 },
	{ 41, 55 },
	{ 50, 24 },
	{ 53, 58 },
	{ 2, 49 },
	{ 29, 20 },
	{ 29, 20 },
	{ 2, 2 },
	{ 59, 3 },
	{ 2, 20 },
	{ 2, 49 },
	{ 53, 58 },
	{ 59, 3 },
	{ 2, 2 },
	{ 2, 20 },
	{ 2, 49 },
	{ 2, 20 },
	{ 2, 2 },
	{ 29, 20 },
	{ 2, 49 },
	{ 53, 58 },
	{ 59, 3 },
	{ 2, 2 },
	{ 29, 20 },
	{ 53, 58 },
	{ 2, 49 },
	{ 2, 20 },
	{ 2, 20 },
	{ 2, 2 },
	{ 59, 3 },
	{ 2, 49 },
	{ 29, 20 },
	{ 2, 2 },
	{ 53, 58 },
	{ 59, 3 },
	{ 2, 20 },
	{ 2, 20 },
	{ 59, 3 },
	{ 53, 58 },
	{ 2, 2 },
	{ 2, 20 },
	{ 2, 49 },
	{ 2, 2 },
	{ 29, 20 },
	{ 2, 49 },
	{ 24, 3 },
	{ 11, 24 },
	{ 20, 55 },
	{ 20, 55 },
	{ 41, 55 },
	{ 24, 3 }
};

NJS_MESHSET_SADX meshlist_00225DCC[] = {
	{ NJD_MESHSET_3 | 0, 17, poly_00225938, NULL, NULL, NULL, uv_00225AC0, NULL },
	{ NJD_MESHSET_3 | 1, 28, poly_0022599E, NULL, NULL, NULL, uv_00225B8C, NULL },
	{ NJD_MESHSET_3 | 2, 20, poly_00225A46, NULL, NULL, NULL, uv_00225CDC, NULL }
};

NJS_VECTOR vertex_00225E14[] = {
	{ -0.77247f, 1.081162f, 0.665621f },
	{ 0.923609f, 0.084864f, 0.050994f },
	{ 1.090894f, 0.797994f, -0.023365f },
	{ -0.947204f, 1.431352f, 0.06540599f },
	{ 0.788578f, 0.915758f, -0.822234f },
	{ -0.782181f, 0.915758f, -0.822234f },
	{ -0.921511f, 0.084864f, 0.050994f },
	{ -1.089074f, 0.797994f, -0.023364f },
	{ -0.296454f, -0.403396f, 0.384866f },
	{ -0.368444f, 2.048431f, 0.792498f },
	{ -0.257053f, 0.322851f, 1.17418f },
	{ 0.28733f, -0.403396f, 0.384866f },
	{ 0.773746f, 1.081162f, 0.665621f },
	{ 0.000416f, 0.474276f, 1.393637f },
	{ 0.9770989f, 1.431352f, 0.065405f },
	{ 0.258302f, 0.322851f, 1.17418f },
	{ 0.940497f, 1.961492f, 0.230445f },
	{ -0.940847f, 1.96149f, 0.230445f },
	{ -0.006612f, 0.433656f, -1.074418f },
	{ 0.000416f, 1.344832f, 1.103288f },
	{ 0.000416f, -0.186247f, 0.9876029f },
	{ -0.978822f, 0.130292f, 0.5658939f },
	{ 0.931527f, 0.130292f, 0.5658939f },
	{ 0.478935f, 0.027613f, -0.433373f },
	{ -0.478049f, 0.027613f, -0.433373f },
	{ 0.643484f, 1.893413f, -0.649013f },
	{ -0.6807359f, 1.893411f, -0.649013f },
	{ 0.001482f, 1.018016f, -1.246341f },
	{ 0.366472f, 2.048431f, 0.792498f },
	{ -0.000158f, 1.893413f, -1.178656f },
	{ -1.281155f, 0.549606f, -0.234375f },
	{ -0.893134f, 0.408727f, 0.054339f },
	{ -1.203885f, 1.261568f, -0.2378f },
	{ -0.876941f, 1.243174f, 0.092811f },
	{ -0.774413f, 0.987606f, -0.080753f },
	{ 1.265362f, 0.549606f, -0.234375f },
	{ 0.877341f, 0.408727f, 0.054339f },
	{ 1.191036f, 1.261568f, -0.2378f },
	{ 0.863557f, 1.243175f, 0.092811f },
	{ 0.7610289f, 0.987606f, -0.080753f },
	{ -1.459565f, 0.993406f, -0.236088f },
	{ 1.442867f, 0.993406f, -0.236088f }
};

NJS_VECTOR normal_0022600C[] = {
	{ -0.763284f, 0.133348f, 0.6321509f },
	{ 0.797209f, -0.53616f, -0.277471f },
	{ 0.995381f, -0.040242f, -0.087161f },
	{ -0.994818f, 0.100837f, -0.013022f },
	{ 0.762126f, -0.121856f, -0.635858f },
	{ -0.764192f, -0.125006f, -0.632759f },
	{ -0.781829f, -0.539539f, -0.312476f },
	{ -0.994501f, -0.011568f, -0.10409f },
	{ -0.27902f, -0.960179f, 0.014285f },
	{ -0.424937f, 0.258485f, 0.867533f },
	{ -0.459346f, -0.240084f, 0.855196f },
	{ 0.283637f, -0.95876f, 0.018144f },
	{ 0.761984f, 0.117613f, 0.636826f },
	{ -0.000343f, -0.142601f, 0.9897799f },
	{ 0.99279f, 0.119582f, -0.008234999f },
	{ 0.46885f, -0.244722f, 0.848699f },
	{ 0.959762f, 0.150928f, 0.236808f },
	{ -0.964757f, 0.112774f, 0.237751f },
	{ -0.006242f, -0.534772f, -0.844974f },
	{ 0.000191f, 0.223557f, 0.974691f },
	{ 0.007771f, -0.708349f, 0.705819f },
	{ -0.831324f, -0.38545f, 0.40041f },
	{ 0.8178779f, -0.391771f, 0.421416f },
	{ 0.411855f, -0.72527f, -0.5516869f },
	{ -0.412779f, -0.7248009f, -0.551613f },
	{ 0.813628f, 0.211017f, -0.541739f },
	{ -0.830546f, 0.170575f, -0.530186f },
	{ 0.0008189999f, -0.086981f, -0.99621f },
	{ 0.42389f, 0.259872f, 0.867631f },
	{ 0.005885f, 0.175471f, -0.984467f },
	{ -0.515061f, -0.747403f, -0.419643f },
	{ -0.111159f, -0.992147f, 0.05735f },
	{ -0.247565f, 0.839104f, -0.484372f },
	{ 0.000334f, 0.900143f, 0.435595f },
	{ 0.503554f, 0.126296f, -0.854683f },
	{ 0.51525f, -0.747234f, -0.419714f },
	{ 0.113145f, -0.9919569f, 0.056735f },
	{ 0.251985f, 0.838861f, -0.48251f },
	{ 0.002687f, 0.899471f, 0.436973f },
	{ -0.503501f, 0.127052f, -0.854602f },
	{ -0.96373f, 0.13597f, -0.229644f },
	{ 0.963884f, 0.133427f, -0.23049f }
};

NJS_MODEL_SADX attach_00226204 = { vertex_00225E14, normal_0022600C, LengthOfArray(vertex_00225E14), meshlist_00225DCC, matlist_002258FC, LengthOfArray(meshlist_00225DCC), LengthOfArray(matlist_002258FC),{ -0.008349f, 0.822518f, 0.073648f }, 1.938803f, NULL };

NJS_OBJECT object_0022622C = { NJD_EVAL_UNIT_SCL, &attach_00226204, -0.120899f, 0.182161f, 0.006581f, 0xFFFFC17D, 0xFFFFC005, 0xFFFFC17D, 1, 1, 1, &object_002258C8, NULL };

NJS_OBJECT object_00226260 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 4.52524f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0022622C };

NJS_OBJECT object_00226294 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0.000002f, 0, 0, 0, 0x7F5E, 1, 1, 1, &object_00226260, NULL };

NJS_OBJECT object_002262C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -5.42224f, 0.066088f, 0, 0, 0, 0xFFFFB267, 1, 1, 1, &object_00226294, NULL };

NJS_OBJECT object_002262FC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 6.269685f, 0, 0, 0, 0, 0, 1, 1, 1, &object_002262C8, &object_00225428 };

NJS_OBJECT object_00226330 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x5006, 1, 1, 1, &object_002262FC, NULL };

NJS_OBJECT object_00226364 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -3.971224f, -4.210719f, 0, 0, 0, 0xFFFF8281, 1, 1, 1, &object_00226330, &object_00225250 };

NJS_OBJECT object_00226398 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 3.689539f, 0, 0, 0, 0, 0, 1, 1, 1, &object_00226364, &object_00223E30 };

NJS_OBJECT object_002263CC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -0.000136f, -0.00042f, 0, 0, 0, 0x7C45, 1, 1, 1, &object_00226398, NULL };

NJS_OBJECT object_00226400 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.013771f, 0.004279f, 0, 0, 0, 0, 1, 1, 1, &object_002263CC, &object_00223420 };

NJS_OBJECT object_00226434 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00226400, &object_00221980 };

NJS_OBJECT object_00226468 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00226434, NULL };

#pragma warning(pop)
