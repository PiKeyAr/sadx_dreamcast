#include "stdafx.h"

void RemoveMaterialColors(NJS_MATERIAL* material)
{
	material->diffuse.argb.r = 178;
	material->diffuse.argb.g = 178;
	material->diffuse.argb.b = 178;
}

bool ForceWhiteDiffuse1(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuse3(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(3, false);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuse3_Night(NJS_MATERIAL* material, Uint32 flags)
{
	if (GetTimeOfDay() == 2) set_diffuse(3, false); else set_diffuse(0, false);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuse3Specular1(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(3, false);
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceDiffuse2Specular2(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(2, false);
	use_default_diffuse(true);
	return true;
}

bool ForceDiffuse2Specular3(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(3, false);
	return true;
}

bool ForceDiffuse0Specular1(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(0, false);
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceDiffuse0Specular0(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(0, false);
	set_specular(0, false);
	use_default_diffuse(true);
	return true;
}

bool ForceSpecular3(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(3, false);
	return true;
}

bool ForceDiffuse0Specular0or1(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(0, false);
	if (material->attrflags & NJD_FLAG_IGNORE_SPECULAR) set_specular(0, false); else set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceDiffuse4Specular5(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(4, false);
	set_specular(5, false);
	use_default_diffuse(true);
	return true;
}

bool Chaos4NPCFunction(NJS_MATERIAL* material, Uint32 flags)
{
	if (CurrentLevel == LevelIDs_EggCarrierOutside)
	{
		set_diffuse(2, false);
		set_specular(3, false);
	}
	else
	{
		set_diffuse(0, false);
		set_specular(1, false);
	}
	return true;
}

bool ChaosPuddleFunc(NJS_MATERIAL* material, Uint32 flags)
{
	if (CurrentLevel == 18 || CurrentLevel == 16 || CurrentLevel == 19)
	{
		set_diffuse(4, false);
		set_specular(5, false);
	}
	else
	{
		set_diffuse(0, false);
		set_specular(1, false);
	}
	use_default_diffuse(true);
	return true;
}

bool Chaos2Function(NJS_MATERIAL* material, Uint32 flags)
{
	if (CurrentLevel == 16)
	{
		set_diffuse(4, false);
		set_specular(5, false);
	}
	else
	{
		set_diffuse(2, false);
		set_specular(3, false);
	}
	use_default_diffuse(true);
	return true;
}
