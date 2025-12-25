#ifndef SYSTEMUI_H
#define SYSTEMUI_H

#pragma once

#ifndef __AFXCMN_H__
	#include <afxcmn.h> // MFC support for Windows Common Controls
#endif

#ifndef __AFXTEMPL_H__
	#include "afxtempl.h"
#endif


#if defined(WINDOWS) || defined(WIN32)
#define    DLLEXPORT WINAPI
#else
#define    DLLEXPORT _declspec(dllexport)
#endif

#define	SM_BITMAP_CAPTION_LEFT		1
#define	SM_BITMAP_CAPTION_RIGHT		2
#define	SM_BITMAP_CAPTION_MIDDLE	3
#define	SM_BITMAP_CAPTION_CLOSE	4
#define	SM_BITMAP_CAPTION_MINIMIZE			5
#define	SM_BITMAP_CAPTION_MAXIMIZE	6
#define	SM_BITMAP_CAPTION_MAINMENU			7
#define	SM_BITMAP_CAPTION_BACKGROUND		8
#define	SM_BITMAP_MAINBKGND			9
#define	SM_BITMAP_TOPBKGND			10
#define	SM_BITMAP_BOTTOMBKGND		11
#define SM_BITMAP_BUTTON			12
#define SM_BITMAP_COMBOBOX			13
#define SM_BITMAP_TABBUTTON			14
#define SM_BITMAP_GROUPBOX			15
#define SM_BITMAP_HEADER			16
#define SM_BITMAP_LISTITEM			17
#define SM_BITMAP_STATUS			18
#define SM_BITMAP_CALENDAR			19
#define SM_BITMAP_SYSTEM_GUISTYLE	20
#define SM_BITMAP_SYSTEM_GUIICON	21




#define SM_SIZE_CAPTIONHEIGHT		100
#define SM_SIZE_BORDERSIZE			101
#define SM_SIZE_STATUSHEIGHT		102


#define SM_BKCOLOR_WINDOW			500
#define SM_BKCOLOR_TEXTFOCUS		501
#define SM_BKCOLOR_TEXTKILLFOCUS	502
#define SM_BKCOLOR_TEXTDISABLE		503
#define SM_KBCOLOR_GROUPBOX			504

#define	SM_TEXTCOLOR_TEXT			601
#define SM_TEXTCOLOR_MENUITEM		602
#define SM_TEXTCOLOR_GROUPBOX		603
#define SM_TEXTCOLOR_STATUS			604
#define SM_TEXTCOLOR_LABEL			605
#define SM_COLOR_WINDOWBORDER		700
#define SM_COLOR_TEXTBORDER			701

#define SM_CAPTIONHEIGHT		100
#define SM_BORDERSIZE			101
#define SM_STATUSBARHEIGHT		102


#ifdef __cplusplus
extern "C" {
#endif

void	DLLEXPORT	uiStartup();
void	DLLEXPORT	uiCleanup();
void	DLLEXPORT	uiSetSystemStyle(int nStyle, bool bSkin=false);
CBitmap* DLLEXPORT	uiGetSystemBitmap(int nIndex);
COLORREF DLLEXPORT	uiGetSystemColor(int nIndex);
int		DLLEXPORT	uiGetSystemSize(int nnIndex);



#ifdef __cplusplus
}
#endif

#endif