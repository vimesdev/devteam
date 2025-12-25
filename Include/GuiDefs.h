#ifndef GUIDEFS_H
#define GUIDEFS_H
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) VIETNAM MEDICAL SOFTWARE JOINT STOCK COMPANY. 2008-2010.							  
//	All rights reserved.
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
//
//	Ban quy cua CONG TY CO PHAN PHAN MEM Y TE VIET NAM (VIMES).
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <afxwin.h>


#if defined(WINDOWS) || defined(WIN32)
#define    DLLEXPORT WINAPI
#else
#define    DLLEXPORT _declspec(dllexport)
#endif

#define 	MAX_INT8   127
#define 	MIN_INT8   -128
#define 	MAX_UINT8   255
#define 	MAX_INT16   32767
#define 	MIN_INT16   -32768
#define 	MAX_UINT16   65535
#define 	MAX_INT32   2147483647L
#define 	MIN_INT32   -2147483648L
#define 	MAX_UINT32   4294967295UL
#define 	MAX_INT64   9223372036854775807L
#define 	MIN_INT64   -9223372036854775808L
#define 	MAX_UINT64   18446744073709551615UL

const TCHAR chNULL   = _T('\0') ;
const TCHAR chCR     = _T('\r') ;
const TCHAR chLF     = _T('\n') ;
const TCHAR chSPACE  = _T(' ') ;
const TCHAR chPERIOD = _T('.') ;
const TCHAR chCOMMA  = _T(',') ;
const TCHAR chCOLON  = _T(':') ;
const TCHAR chSLASH  = _T('/') ;
const TCHAR chSUBSIGN  = _T('-') ;

const TCHAR chMaskDECIMALSEPARATOR   = _T('.') ;
const TCHAR chMaskTHOUSANDSSEPARATOR = _T(',') ;
const TCHAR chMaskTIMESEPARATOR      = _T(':')  ;
const TCHAR chMaskDATESEPARATOR      = _T('/')  ;
const TCHAR chMaskDIGIT              = _T('#')  ;
const TCHAR chMaskALPHANUMERIC       = _T('A')  ;
const TCHAR chMaskALPHABETIC         = _T('?')  ;
const TCHAR chMaskALPHABETICUPPER    = _T('>')  ;
const TCHAR chMaskALPHABETICLOWER    = _T('<')  ;
const TCHAR chMaskCHARACTER          = _T('&')  ;
const TCHAR chMaskLITERALESCAPE      = _T('\\') ;

#define LAYOUT_STYLE_NORMAL		0x01
#define LAYOUT_STYLE_BLUE		0x02
#define LAYOUT_STYLE_ANDROID	0x01

//static UINT	LayoutStyle = LAYOUT_STYLE_BLUE;


#define GUI_NONE			-1
#define GUI_LABEL			0
#define GUI_BUTTON			1
#define GUI_CHECKBOX		2
#define GUI_RADIOBUTTON		3
#define GUI_GROUPBOX		4
#define GUI_LISTBOX			5
#define GUI_COMBOBOX		6
#define GUI_TEXTCTRL		7
#define GUI_MASKCTRL		8
#define GUI_NUMBERCTRL		9
#define GUI_DATECTRL		10
#define GUI_TIMECTRL		11
#define GUI_DATETIMECTRL	12
#define GUI_LISTCTRL		13
#define GUI_TABCTRL			14
#define GUI_STATUSBAR		15
#define GUI_TOOLBAR			16
#define GUI_SCROLLBAR		17
#define GUI_PROGRESBAR		18
#define GUI_DIALOG			19
#define GUI_VIEW			20


#define CGUI_LABEL			_T("CGuiLabel")
#define CGUI_BUTTON			_T("CGuiButton")
#define CGUI_CHECKBOX		_T("CGuiCheckBox")
#define CGUI_RADIOBUTTON	_T("CGuiRadioButton")
#define CGUI_GROUPBOX		_T("CGuiGroupBox")
#define CGUI_LISTBOX		_T("CGuiListBox")
#define CGUI_COMBOBOX		_T("CGuiComboBox")
#define CGUI_TEXTCTRL		_T("CGuiTextCtrl")
#define CGUI_MASKCTRL		_T("CGuiMaskCtrl")
#define CGUI_NUMBERCTRL		_T("CGuiNumberCtrl")
#define CGUI_DATECTRL		_T("CGuiDateCtrl")
#define CGUI_TIMECTRL		_T("CGuiTimeCtrl")
#define CGUI_DATETIMECTRL	_T("CGuiDateTimeCtrl")
#define CGUI_LISTCTRL		_T("CGuiListCtrl")
#define CGUI_TABCTRL		_T("CGuiTabCtrl")
#define CGUI_STATUSBAR		_T("CGuiStatusBar")
#define CGUI_TOOLBAR		_T("CGuiToolBar")
#define CGUI_SCROLLBAR		_T("CGuiSrollBar")
#define CGUI_PROGRESBAR		_T("CGuiProgresBar")
#define CGUI_DIALOG			_T("CGuiDialog")
#define CGUI_VIEW			_T("CGuiView")

typedef struct tagClassType{
	int nID;
	LPCTSTR szClassName;
}ClassType;

static ClassType _classType[] = {
	{GUI_LABEL,		_T("CGuiLabel")},
	{GUI_BUTTON,		_T("CGuiButton")},
	{GUI_CHECKBOX,	_T("CGuiCheckBox")},
	{GUI_RADIOBUTTON,	_T("CGuiRadioButton")},
	{GUI_GROUPBOX,	_T("CGuiGroupBox")},
	{GUI_LISTBOX,		_T("CGuiListBox")},
	{GUI_COMBOBOX,	_T("CGuiComboBox")},
	{GUI_TEXTCTRL,	_T("CGuiTextCtrl")},
	{GUI_MASKCTRL,	_T("CGuiMaskCtrl")},
	{GUI_NUMBERCTRL,	_T("CGuiNumberCtrl")},
	{GUI_DATECTRL,	_T("CGuiDateCtrl")},
	{GUI_TIMECTRL,	_T("CGuiTimeCtrl")},
	{GUI_DATETIMECTRL,_T("CGuiDateTimeCtrl")},
	{GUI_LISTCTRL,	_T("CGuiListCtrl")},
	{GUI_TABCTRL,		_T("CGuiTabCtrl")},
	{GUI_STATUSBAR,	_T("CStatusBar")},
	{GUI_TOOLBAR,		_T("CToolBar")},
	{GUI_SCROLLBAR,	_T("CSrollBar")},
	{GUI_PROGRESBAR,	_T("CProgresBar")},
	{GUI_DIALOG,		_T("CGuiDialog")},
	{GUI_VIEW,	_T("CGuiView")}
};



#define TEXT_DATA	0x0010
#define DATE_DATA	0x0020
#define TIME_DATA	0x0040
#define DTIME_DATA	0x0080
#define NUMBER_DATA	0x0100
#define MONEY_DATA	0x0200

//Define View mode
#define VM_NONE		0x000
#define VM_VIEW		0x001
#define	VM_ADD		0x002
#define VM_EDIT		0x004
#define VM_ADDCHILD	0x008
#define VM_TERM		0x010

//Define Reposition of window flags
#define WP_LEFT	0x001
#define WP_TOP		0x002
#define WP_RIGHT	0x004
#define WP_BOTTOM	0x008
#define WP_LEFTTOP	(WP_LEFT|WP_TOP)
#define WP_TOPRIGHT (WP_RIGHT|WRS_TOP)
#define WP_LEFTBOTTOM (WP_LEFT|WP_BOTTOM)
#define WP_RIGHTBOTTOM (WP_RIGHT|WP_BOTTOM)
#define WP_ALL		(WP_LEFT|WP_TOP|WP_RIGHT|WP_BOTTOM)


#define KEYDOWN(Key) ((GetKeyState(Key)&0x8000)!=0)

//Define standard colors
#define COLOR_BORDER	RGB(100, 150, 200)
#define COLOR_RED        RGB(127,  0,  0)
#define COLOR_GREEN      RGB(  0,127,  0)
#define COLOR_BLUE       RGB(  0,  0,127)
#define COLOR_LIGHTRED   RGB(255,  0,  0)
#define COLOR_LIGHTGREEN RGB(  0,255,  0)
#define COLOR_LIGHTBLUE  RGB(  0,  0,255)
#define COLOR_BLACK      RGB(  0,  0,  0)
#define COLOR_WHITE      RGB(255,255,255)
#define COLOR_GRAY       RGB(192,192,192)
#define COLOR_DISABLE	 RGB(231, 241, 255)
#define COLOR_TEXT		 RGB(10, 0, 20)
#define COLOR_BKGND		RGB(203, 218, 239)	


#define DRAW_CAPTION			0x001
#define DRAW_BORDER				0x002
#define DRAW_SYSTEM_ICON		0x004
#define DRAW_SYSTEM_CLOSE		0x008
#define DRAW_SYSTEM_MAX			0x010
#define DRAW_SYSTEM_MIN			0x020
#define DRAW_TOOLBAR			0x040
#define	DRAW_STATUSBAR			0x080


#define NCS_CLOSE_NORMAL		0x00004
#define NCS_CLOSE_FOCUS			0x00008
#define NCS_CLOSE_SELECT		0x00010
#define NCS_CLOSE_DISABLE		0x00020
#define NCS_MIN_NORMAL			0x00040
#define NCS_MIN_FOCUS			0x00080
#define NCS_MIN_SELECT			0x00100
#define NCS_MIN_DISABLE			0x00200
#define NCS_MAX_NORMAL			0x00400
#define NCS_MAX_FOCUS			0x00800
#define NCS_MAX_SELECT			0x01000
#define NCS_MAX_DISABLE			0x02000
#define NCS_SYSTEM_NORMAL		0x04000
#define NCS_SYSTEM_FOCUS		0x08000
#define NCS_SYSTEM_SELECT		0x10000
#define NCS_SYSTEM_DISABLE		0x20000
#define NCS_CAPTION_ACTIVE		0x00001
#define NCS_CAPTION_DEACTIVE	0x00002




#define NCPAINT()\
{\
	CRect rect, rcWindow; \
	GetWindowRect(&rcWindow); \
	rect = rcWindow; \
	rect.OffsetRect(-rcWindow.left, -rcWindow.top); \
	CWindowDC cDC(this); \
	CPen pen; \
	pen.CreatePen(PS_SOLID, 1, COLOR_BORDER);\
	cDC.SelectObject(&pen); \
  cDC.SelectObject (::GetStockObject (NULL_BRUSH)); \
  cDC.Rectangle (rect.left, rect.top, rect.Width(), rect.Height()); \
	pen.DeleteObject();	 \
}

typedef struct tagWEVENT
{
    int nID;
    LPCTSTR lpszName;
    BOOL bState;
    HICON hIcon;
    UINT nKey;   // Shortcut key
    UINT nFlags; // Control or Shift flags
    int (*eWndProc)(CWnd *pWnd);
} WEVENT;





#define SAFE_DELETE(var){ if(var !=NULL){ delete var; var = NULL;}}

#endif