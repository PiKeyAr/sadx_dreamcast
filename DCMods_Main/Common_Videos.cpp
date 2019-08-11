#include "stdafx.h"
#include "FileSystem.h"

//Ini stuff
static bool ColorizeVideos = true;
static bool SA1Intro = false;
static int SonicTeamLogoMode = 2;

//Video stuff
static int VideoFadeMode = 1;
static int VideoPlayMode = 0;
static int VideoFadeValue = 255;
static bool SkipPressed = false;
static bool AreYouEvenPlayingVideos = false;
static int GameModePrevious = -1;

DataPointer(NJS_TEXANIM, VideoFrame_TEXANIM, 0x3C600C8);
DataPointer(NJS_TEXLIST, VideoFrame_TEXLIST, 0x3C60094);
DataPointer(int, CurrentVideoFrame, 0x3C60018);
DataPointer(int, CurrentVideoNumber, 0x3C5FFEC);
NJS_POINT2COL VideoFrame_Point2Col;
NJS_POINT2 VideoFrame_Points[4];
NJS_COLOR VideoFrame_Colors[4];
NJS_COLOR VideoFadeout_Colors[4];
NJD_DRAW VideoFrame_Attr = 0x62;
FunctionPointer(void, sub_40EFE0, (), 0x40EFE0);

VideoData VideoDataArray[] = {
	{ "system\\intro.mpg", 0, 6420, 640, 448 },
	{ "system\\Sa1.mpg", 0, 5760, 640, 480 },
	{ "system\\Sa2.mpg", 0, 786, 640, 480 },
	{ "system\\Sa3.mpg", 0, 1750, 640, 480 },
	{ "system\\Sa4.mpg", 0, 1120, 640, 480 },
	{ "system\\Sa5.mpg", 0, 830, 640, 480 },
	{ "system\\Sa6.mpg", 0, 1250, 640, 480 },
	{ "system\\Sa7.mpg", 0, 630, 640, 480 },
	{ "system\\Sa8.mpg", 0, 1110, 640, 480 },
	{ "system\\sonicteam.mpg", 0, 300, 640, 448 },
};

char VideoList0[] = { 9, -1 };
char VideoList1[] = { 1, -1 };
char VideoList2[] = { 2, -1 };
char VideoList3[] = { 3, -1 };
char VideoList4[] = { 4, -1 };
char VideoList5[] = { 5, -1 };
char VideoList6[] = { 6, -1 };
char VideoList7[] = { 7, -1 };
char VideoList8[] = { 8, -1 };
char VideoList9[] = { 9, -1 };

char* VideoNumbersArray[] = {
	VideoList0,
	VideoList1,
	VideoList2,
	VideoList3,
	VideoList4,
	VideoList5,
	VideoList6,
	VideoList7,
	VideoList8,
	VideoList9,
};

//Video functions

void InitVideoFrameStuff()
{
	//Variables
	VideoPlayMode = 0;
	VideoFadeMode = 1;
	VideoFadeValue = 255;
	//Specular frame
	VideoFrame_Points[1] = { 0, (float)VerticalResolution };
	VideoFrame_Points[2] = { (float)HorizontalResolution, 0 };
	VideoFrame_Points[3] = { (float)HorizontalResolution, (float)VerticalResolution };
	VideoFrame_Colors[0].color = 0x13FFFFFF;
	VideoFrame_Colors[1].color = 0x13FFFFFF;
	VideoFrame_Colors[2].color = 0x13FFFFFF;
	VideoFrame_Colors[3].color = 0x13FFFFFF;
	VideoFrame_Point2Col.p = (NJS_POINT2*)&VideoFrame_Points;
	VideoFrame_Point2Col.col = (NJS_COLOR*)&VideoFrame_Colors;
	VideoFrame_Point2Col.tex = 0;
	VideoFrame_Point2Col.num = 4;
	//Fadeout
	VideoFadeout_Colors[0].color = 0x00000000;
	VideoFadeout_Colors[1].color = 0x00000000;
	VideoFadeout_Colors[2].color = 0x00000000;
	VideoFadeout_Colors[3].color = 0x00000000;
}

void AdjustVideoFrame()
{
	int height_new;
	float centering = 0.0f;
	//Get proper width/height from the array because SADX gets confused for some reason
	height_new = VideoDataArray[CurrentVideoNumber].Height;
	//If playing the logo or SA1 intro, adjust the center of the video frame
	if (height_new < 480.0f)
	{
		centering = (480.0f - (float)height_new) / 2.0f;
	}
	VideoFrame.p.y = VideoFrame.p.y + centering;
}

void InputHookForVideos()
{
	if (VideoPlayMode == 3)
	{
		ControllerPointers[0]->PressedButtons |= Buttons_C;
		VideoPlayMode = 0;
	}
	sub_40EFE0();
}

void DisplayVideoFadeout(int fadeout, int mode)
{
	NJS_POINT2COL VideoFadeoutFrame;
	VideoFadeout_Colors[0].argb.a = fadeout;
	VideoFadeout_Colors[1].argb.a = fadeout;
	VideoFadeout_Colors[2].argb.a = fadeout;
	VideoFadeout_Colors[3].argb.a = fadeout;
	VideoFadeoutFrame.col = (NJS_COLOR*)&VideoFadeout_Colors;
	VideoFadeoutFrame.p = (NJS_POINT2*)&VideoFrame_Points;
	VideoFadeoutFrame.num = 4;
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	Direct3D_SetZFunc(7u);
	Direct3D_EnableZWrite(0);
	if (mode == 0) njDrawTriangle2D_SomeOtherVersion((NJS_POINT2COL*)&VideoFadeoutFrame, 4, -1000.0f, NJD_TRANSPARENT | NJD_FILL);
	else DrawRect_Queue(0.0, 0.0, HorizontalResolution, VerticalResolution, 22048.0f, fadeout << 24, QueuedModelFlagsB_EnableZWrite);
	Direct3D_EnableZWrite(1);
	Direct3D_SetZFunc(3u);
}

void DrawVideoWithSpecular(int width, int height)
{
	//Variables
	int width_new;
	int height_new;
	float centering = 0.0f;
	//Get proper width/height from the array because SADX gets confused for some reason
	width_new = VideoDataArray[CurrentVideoNumber].Width;
	height_new = VideoDataArray[CurrentVideoNumber].Height;
	//If playing the logo or SA1 intro, adjust the center of the video frame
	if (height_new < 480.0f)
	{
		centering = ((480.0f - (float)height_new) / 2.0f)*((float)VerticalResolution / 480.0f);
	}
	//Display the video frame
	DisplayVideoFrame(width_new, 480);
	//Display the specular
	if (ColorizeVideos == true)
	{
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		Direct3D_SetZFunc(7u);
		Direct3D_EnableZWrite(0);
		njDrawTriangle2D_SomeOtherVersion((NJS_POINT2COL*)&VideoFrame_Point2Col, 4, -1000.0f, VideoFrame_Attr);
		Direct3D_EnableZWrite(1);
		Direct3D_SetZFunc(3u);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	}
	//Display the fadeout frame
	if (CurrentVideoFrame > VideoDataArray[CurrentVideoNumber].NumFrames) VideoFadeMode = 2;
	if (VideoFadeMode == 1)
	{
		if (VideoFadeValue > 0) VideoFadeValue = VideoFadeValue - 6;
		if (VideoFadeValue < 0) VideoFadeValue = 0;
	}
	if (VideoFadeMode == 2)
	{
		if (VideoFadeValue < 255) VideoFadeValue = VideoFadeValue + 6;
		if (VideoFadeValue > 255) VideoFadeValue = 255;
	}
	if (VideoFadeMode != 0) DisplayVideoFadeout(VideoFadeValue, 0);
	if (VideoFadeMode < 2 && SkipPressed == true) VideoFadeMode = 2;
	if (VideoFadeMode == 2 && VideoFadeValue >= 254 && SkipPressed == true) VideoPlayMode = 3;
}

void LoadSegalogoPVM(const char *filename, NJS_TEXLIST *texlist)
{
	LoadPVM("SEGALOGO", texlist);
}

void Videos_Init(const IniFile *config, const HelperFunctions &helperFunctions)
{
	//Load configuration settings
	ColorizeVideos = config->getBool("Videos", "ColorizeVideos", true);
	SA1Intro = config->getBool("Videos", "EnableSA1Intro", true);
	//Set Sonic Team logo mode
	const std::string SonicTeamLogo_String = config->getString("Videos", "SonicTeamLogoMode", "Animated");
	if (SonicTeamLogo_String == "Animated")
	{
		SonicTeamLogoMode = 0;
		//Use original DC PVM if possible
		if (!DLLLoaded_HDGUI)
		{
			ReplacePVM("SEGALOGO");
			WriteCall((void*)0x42C756, LoadSegalogoPVM);
			ResizeTextureList(&SEGALOGO_E_TEXLIST, 6);
		}
	}
	else if (SonicTeamLogo_String == "Static")
		SonicTeamLogoMode = 1;
	else if (SonicTeamLogo_String == "Off")
	{
		SonicTeamLogoMode = 2;
		//Use original DC PVM if possible
		if (!DLLLoaded_HDGUI)
		{
			ReplacePVM("SEGALOGO");
			WriteCall((void*)0x42C756, LoadSegalogoPVM);
			ResizeTextureList(&SEGALOGO_E_TEXLIST, 6);
		}
	}
	//Fix EC crash cutscene fadeout
	WriteData((float*)0x10F1D44, (float)HorizontalResolution);
	WriteData((float*)0x10F1D54, (float)HorizontalResolution);
	WriteData((float*)0x10F1D48, (float)HorizontalResolution);
	WriteData((float*)0x10F1D50, (float)HorizontalResolution);
	//Video stuff
	InitVideoFrameStuff();
	WriteCall((void*)0x00513A88, AdjustVideoFrame); //Center video frame vertically if playing Sonic Team logo/SA1 intro
	WriteData<1>((char*)0x512D30, 0xC3u); //Don't fade out videos SADX style
	WriteCall((void*)0x0051330A, DrawVideoWithSpecular); //DisplayVideoFrame call
	WriteCall((void*)0x00513271, InputHookForVideos); //Wait to cancel videos
	WriteData<1>((char*)0x005132B9, 0x01); //Wait for Button_C instead of Button_A or Button_Start
	if (ColorizeVideos == true)
	{
		DefaultVideoColor.r = 0.6627450980392157f;
		DefaultVideoColor.g = 0.6627450980392157f;
		DefaultVideoColor.b = 0.6627450980392157f;
	}
	WriteData((char***)0x5130F9, VideoNumbersArray);
	WriteData((VideoData**)0x513182, (VideoData*)&VideoDataArray);
	WriteData((int**)0x512EE6, (int*)&VideoDataArray->field_4);
	WriteData((int**)0x513143, (int*)&VideoDataArray->field_4);
	WriteData((int**)0x512E9D, (int*)&VideoDataArray->NumFrames);
	WriteData((int16_t**)0x5130D2, (int16_t*)&VideoDataArray->Width);
	WriteData((int16_t**)0x5130D9, (int16_t*)&VideoDataArray->Height);
	if (SonicTeamLogoMode != 0)
	{
		VideoList0[0] = 0;
	}
	if (SonicTeamLogoMode != 1) WriteData<1>((void*)0x0042CCF3, 0x0F); //Disable the SADX Sonic Team logo
	//Check for untouched SA1 videos
	if (SA1Intro == true)
	{
		if (Exists(helperFunctions.GetReplaceablePath("system\\SAH448_6.MPG")))
		{
			VideoDataArray[0].Filename = "system\\SAH448_6.MPG";
			VideoDataArray[0].field_4 = 0;
			VideoDataArray[0].NumFrames = 6420;
			VideoDataArray[0].Width = 320;
			VideoDataArray[0].Height = 448;
		}
		else
		{
			VideoDataArray[0].Filename = "system\\INTRO.MPG";
			VideoDataArray[0].field_4 = 0;
			VideoDataArray[0].Width = 640;
			VideoDataArray[0].Height = 480;
			VideoDataArray[0].NumFrames = 6420;
		}
	}
	else
	{
		VideoDataArray[0].Filename = "system\\RE-US.MPG";
		VideoDataArray[0].field_4 = 0;
		VideoDataArray[0].Width = 640;
		VideoDataArray[0].Height = 480;
		VideoDataArray[0].NumFrames = 2147483647;
	}
	if (SonicTeamLogoMode == 0)
	{
		if (Exists(helperFunctions.GetReplaceablePath("system\\SLH448_1.MPG")))
		{
			VideoDataArray[9].Filename = "system\\SLH448_1.MPG";
			VideoDataArray[9].field_4 = 0;
			VideoDataArray[9].NumFrames = 300;
			VideoDataArray[9].Width = 320;
			VideoDataArray[9].Height = 448;
		}
		else
		{
			VideoDataArray[9].Filename = "system\\SONICTEAM.MPG";
			VideoDataArray[9].field_4 = 0;
			VideoDataArray[9].NumFrames = 300;
			VideoDataArray[9].Width = 640;
			VideoDataArray[9].Height = 480;
		}
	}
}

void Videos_OnFrame()
{
	//Check if the game has video stuff loaded
	if (CurrentVideoNumber >= 0 && CurrentVideoNumber <= 9) AreYouEvenPlayingVideos = true; else AreYouEvenPlayingVideos = false;
	if (GameModePrevious != GameMode)
	{
		//Check if the player has skipped the Sonic Team logo; if not, play the intro
		if (SonicTeamLogoMode == 0 && GameModePrevious == 8 && VideoPlayMode == 0)
		{
			if (SkipPressed == false)
			{
				VideoPlayMode = 1;
				VideoList0[0] = 0;
				GameMode = GameModes_Movie;
				VideoFadeMode = 1;
				VideoFadeValue = 255;
			}
		}
		//Reset various things when not in video mode
		if (GameMode != GameModes_CharSel && GameMode != GameModes_Movie)
		{
			SkipPressed = false;
			if (VideoPlayMode != 0)
			{
				VideoPlayMode = 0;
				if (SonicTeamLogoMode == 0) VideoList0[0] = 9; else VideoList0[0] = 0;
				VideoFadeMode = 1;
				VideoFadeValue = 255;
			}
		}
		GameModePrevious = GameMode;
	}
	//Reset fadeouts in story mode
	if (GameMode != GameModes_Movie && GameModePrevious == GameMode && AreYouEvenPlayingVideos == false)
	{
		SkipPressed = false;
		VideoPlayMode = 0;
		if (SonicTeamLogoMode == 0) VideoList0[0] = 9; else VideoList0[0] = 0;
		VideoFadeMode = 1;
		VideoFadeValue = 255;
	}
}

void Videos_OnInput()
{
	//Input hook for videos
	if (CurrentVideoNumber >= 0 && CurrentVideoNumber <= 9 && GameMode != GameModes_Logo && GameMode != GameModes_CharSel)
	{
		if (SkipPressed == false && ControllerPointers[0]->PressedButtons & (Buttons_Start | Buttons_A))
		{
			//PrintDebug("Skip video pressed!\n");
			SkipPressed = true;
		}
	}
}