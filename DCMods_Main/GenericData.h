#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

NJS_COLOR DebugFontColorBK;
float DebugFontSizeBK;
bool DebugFontItalic = false;

NJS_MATERIAL DeadMaterial[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 0, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 DeadPoly[] = {
	0, 0, 0
};

NJS_MESHSET_SADX DeadMeshset = { NJD_MESHSET_TRIMESH | 0, 1, DeadPoly, NULL, NULL, NULL, NULL, NULL };
NJS_MESHSET_SADX TempMeshset = { NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL };

NJS_MATERIAL tempmaterialarray_transparent[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
};

NJS_MATERIAL tempmaterialarray_opaque[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
};

NJS_MESHSET_SADX tempmeshsetarray_opaque[] = {
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
};

NJS_MESHSET_SADX tempmeshsetarray_transparent[] = {
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 0, NULL, NULL, NULL, NULL, NULL, NULL },
};

int OpaqueMeshes[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
int TransparentMeshes[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

NJS_MATERIAL* TemporaryMaterialArray[] = { nullptr };

TextureAnimation TextureAnimationData[] = {
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
};

TextureAnimation TextureAnimationData_Permanent[] = {
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
};

UVAnimation UVAnimationData[] =
{
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
};

UVAnimation UVAnimationData_Permanent[] =
{
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
	{ -1, -1, nullptr, 0, 0, 0, 0, 0, 0 },
};

#pragma warning(pop)