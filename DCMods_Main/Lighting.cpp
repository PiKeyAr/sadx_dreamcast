#include "stdafx.h"

void RemoveMaterialColors(NJS_MATERIAL* material)
{
	material->diffuse.argb.r = 178;
	material->diffuse.argb.g = 178;
	material->diffuse.argb.b = 178;
}

bool ForceWhiteDiffuse1(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(1, false);
	return true;
}

bool DisableAlphaRejection(NJS_MATERIAL* material, uint32_t flags)
{
	set_alpha_reject_ptr(0.0f, false);
	return true;
}

bool ForceWhiteDiffuse3(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(3, false);
	return true;
}

bool ForceWhiteDiffuse3_Night(NJS_MATERIAL* material, uint32_t flags)
{
	if (GetTimeOfDay() == 2) set_diffuse_ptr(3, false); else set_diffuse_ptr(0, false);
	return true;
}

bool ForceWhiteDiffuse3Specular1(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(3, false);
	set_specular_ptr(1, false);
	return true;
}

bool ForceDiffuse2Specular2(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(2, false);
	set_specular_ptr(2, false);
	return true;
}

bool ForceDiffuse2Specular3(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(2, false);
	set_specular_ptr(3, false);
	return true;
}

bool ForceDiffuse0Specular1(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(0, false);
	set_specular_ptr(1, false);
	return true;
}

bool ForceDiffuse0Specular0(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(0, false);
	set_specular_ptr(0, false);
	return true;
}

bool ForceSpecular3(NJS_MATERIAL* material, uint32_t flags)
{
	set_specular_ptr(3, false);
	return true;
}

bool ForceDiffuse0Specular0or1(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(0, false);
	if (material->attrflags & NJD_FLAG_IGNORE_SPECULAR) set_specular_ptr(0, false); else set_specular_ptr(1, false);
	return true;
}

bool ForceDiffuse4Specular5(NJS_MATERIAL* material, uint32_t flags)
{
	set_diffuse_ptr(4, false);
	set_specular_ptr(5, false);
	return true;
}

bool Chaos4NPCFunction(NJS_MATERIAL* material, uint32_t flags)
{
	if (CurrentLevel == LevelIDs_EggCarrierOutside)
	{
		set_diffuse_ptr(2, false);
		set_specular_ptr(3, false);
	}
	else
	{
		set_diffuse_ptr(0, false);
		set_specular_ptr(1, false);
	}
	return true;
}

bool ChaosPuddleFunc(NJS_MATERIAL* material, uint32_t flags)
{
	if (CurrentLevel == 18 || CurrentLevel == 16 || CurrentLevel == 19)
	{
		set_diffuse_ptr(4, false);
		set_specular_ptr(5, false);
	}
	else
	{
		set_diffuse_ptr(0, false);
		set_specular_ptr(1, false);
	}
	return true;
}

bool Chaos2Function(NJS_MATERIAL* material, uint32_t flags)
{
	if (CurrentLevel == 16)
	{
		set_diffuse_ptr(4, false);
		set_specular_ptr(5, false);
	}
	else
	{
		set_diffuse_ptr(2, false);
		set_specular_ptr(3, false);
	}
	return true;
}
