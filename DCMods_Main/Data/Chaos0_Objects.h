#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

//Spotlight

NJS_MATERIAL matlistC0_01DFDD9C[] = {
	{ { 0x7FFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 polyC0_01DFDDB0[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uvC0_01DFDDBC[] = {
	{ 251, 4 },
	{ 251, 251 },
	{ 3, 4 },
	{ 3, 251 }
};

NJS_MESHSET_SADX meshlistC0_01DFDDCC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyC0_01DFDDB0, NULL, NULL, NULL, uvC0_01DFDDBC, NULL }
};

NJS_VECTOR vertexC0_01DFDDE8[] = {
	{ -22, 0, 34 },
	{ -22, 0, -34 },
	{ 22, 0, 34 },
	{ 22, 0, -34 }
};

NJS_VECTOR normalC0_01DFDE18[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attachC0_01DFDE48 = { vertexC0_01DFDDE8, normalC0_01DFDE18, LengthOfArray<Sint32>(vertexC0_01DFDDE8), meshlistC0_01DFDDCC, matlistC0_01DFDD9C, LengthOfArray<Uint16>(meshlistC0_01DFDDCC), LengthOfArray<Uint16>(matlistC0_01DFDD9C),{ 0, -0.00001f, 0.000004f }, 5, NULL };

NJS_OBJECT spotlight = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachC0_01DFDE48, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

#pragma warning(pop)