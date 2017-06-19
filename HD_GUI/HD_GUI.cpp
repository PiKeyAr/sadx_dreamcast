#include "stdafx.h"
#include <SADXModLoader.h>
#include "Objects.h"
#include "Objects_Shooting.h"
extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		HMODULE DC_Branding = GetModuleHandle(L"DC_Branding");
		HMODULE DC_SubGames = GetModuleHandle(L"DC_SubGames");
		if (DC_Branding == 0) WriteData((char*)0x007DDB2C, 0x44, 1); //Load CON_REGULAR_D with DX texture
		//*(NJS_MODEL_SADX*)0x008B6010 = attach_00197698; //Normal spring
		//*(NJS_MODEL_SADX*)0x008B5498 = attach_00196B5C; //Spring B
		//*(NJS_MODEL_SADX*)0x008C6624 = attach_001A7820; //Spring H
		*(NJS_MODEL_SADX*)0x008BFEC8 = attach_001A127C; //Rocket platform
		//*(NJS_MODEL_SADX*)0x008BE168 = attach_0019F5CC; //Balloon
		if (DC_SubGames == 0)
		{
		*(NJS_OBJECT *)0x02982F44 = object_0003FA40; //Egg Carrier model
		*(NJS_OBJECT *)0x298A894 = object_00047110; //Hodai
		*(NJS_OBJECT *)0x2941B2C = object_0001342C; //Kirai
		((NJS_ACTION*)0x28E596C)->object = &object_0009153C; //Beam in Act 1
		((NJS_ACTION*)0x2996C74)->object = &object_0004AEE0; //Beam in Act 2
		*(NJS_OBJECT *)0x028E2C88 = object_0009153C; //Beam in Act 1
		*(NJS_OBJECT *)0x0298E7D0 = object_0004AEE0; //Beam in Act 2
		}
	}
}



