/* Global definitions */
#pragma once

#include "stdafx.h"
#include <WeaselCommon.h>

#define TEXTSERVICE_LANGID	MAKELANGID(LANG_CHINESE, SUBLANG_CHINESE_SIMPLIFIED)

#define TEXTSERVICE_DESC	WEASEL_IME_NAME L" (TSF)"
#define TEXTSERVICE_DESC_A	"Weasel (TSF)"
#define TEXTSERVICE_MODEL	"Apartment"

#define TEXTSERVICE_ICON_INDEX	0

void DllAddRef();
void DllRelease();

extern HINSTANCE g_hInst;

extern LONG g_cRefDll;

extern CRITICAL_SECTION g_cs;

extern const CLSID c_clsidTextService;

extern const GUID c_guidProfile;

extern const GUID c_guidLangBarItemButton;

/* for Windows 8 */
#define TF_TMF_IMMERSIVEMODE			0x40000000
#define TF_IPP_CAPS_IMMERSIVESUPPORT	0x00010000
#define TF_IPP_CAPS_SYSTRAYSUPPORT		0x00020000

extern const GUID GUID_TFCAT_TIPCAP_IMMERSIVESUPPORT;
extern const GUID GUID_TFCAT_TIPCAP_SYSTRAYSUPPORT;
extern const GUID GUID_LBI_INPUTMODE;