#ifndef GUIMANAGER_H
#define GUIMANAGER_H
#include <vector>
#include <string>
#include <afxcontrolbars.h>
#include <afxwin.h>
#include "icons.h"
#include "MFCWidget.h"




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
#define SM_BITMAP_BACKGROUND		22





#define SM_CAPTION_HEIGHT		100
#define SM_BORDER_SIZE			101
#define SM_STATUS_HEIGHT		102


#define SM_BKCOLOR_WINDOW			500
#define SM_BKCOLOR_TEXTFOCUS		501
#define SM_BKCOLOR_TEXTKILLFOCUS	502
#define SM_BKCOLOR_TEXTDISABLE		503
#define SM_BKCOLOR_GROUPBOX			504
#define SM_BKCOLOR_BUTTON			505


#define	SM_TEXTCOLOR_TEXT			601
#define SM_TEXTCOLOR_MENUITEM		602
#define SM_TEXTCOLOR_GROUPBOX		603
#define SM_TEXTCOLOR_STATUS			604
#define SM_TEXTCOLOR_LABEL			605
#define SM_TEXTCOLOR_BUTTON			606
#define SM_COLOR_WINDOWBORDER		700
#define SM_COLOR_TEXTBORDER			701
#define	SM_BORDER_COLOR				702

#define SM_CAPTION_RECT				1000
#define SM_CAPTIONCLOSE_RECT		1001
#define SM_CAPTIONMAX_RECT			1002
#define SM_CAPTIONMIN_RECT			1003
#define SM_CAPTIONICON_RECT			1004


#define DFCS_CAPTIONICON		0x08
#define DFCS_CAPTIONBACKGROUND	0x10

#ifndef COLOR_INVALID
#define COLOR_INVALID	0xffffffff
#endif

namespace Gdiplus{
	class Bitmap;
}

typedef struct tagSTATUSBARINFO{
	CString	szText;
	int		nWidth;
	int		nIndex;
	CRect	rcItem;
	UINT	nStyle;
	COLORREF	clrText;
} STATUSBARINFO;

class CWidgetDrawer;
class CMFCBackstage;
class CVoiceRecorder;

extern HMODULE kUser32Module;
extern CString kSysDate;
extern CString kSysDateTime;
extern CString kLogHost;
extern CString kCurrentVersion;
extern CVoiceRecorder*	kVoiceRecorder;




void	EnableFullDpiSupportIfAvailable(HWND hwnd);
int		Scale(int source, double scale_factor);
UINT	GetDpiForHWND(HWND hwnd);
UINT	GetDpiForMonitor(HMONITOR monitor);


class AFX_EXT_CLASS CGuiManager : public CMFCVisualManagerWindows
{
	DECLARE_DYNCREATE(CGuiManager)
	ULONG_PTR	m_gdiplusToken;
	HANDLE		m_hFontHandle;
public:
	COLORREF m_clrBackground_Window;
	COLORREF m_clrBackground_GroupBox;
	COLORREF m_clrBackground_Header;
	COLORREF m_clrBackground_TextFocus;
	COLORREF m_clrBackground_TextKillFocus;
	COLORREF m_clrBackground_TextDisable;
	COLORREF m_clrBackground_Label;
	COLORREF m_clrTextColor_Label;
	COLORREF m_clrTextColor_Text;
	COLORREF m_clrTextColor_GroupBox;
	COLORREF m_clrTextColor_MenuItem;
	COLORREF m_clrTextColor_Button;
	COLORREF m_clrBackground_Button;
	COLORREF m_clrBackground_Button_Focus;
	COLORREF m_clrBackground_Button_Hot;
	COLORREF m_clrBackground_Button_Selected;
	COLORREF m_clrBackground_Button_Disable;

	COLORREF m_clrBackground_ComboButton;
	COLORREF m_clrBackground_ComboButton_Hot;
	COLORREF m_clrBackground_ComboButton_Selected;
	COLORREF m_clrBackground_ComboButton_Disable;

	COLORREF m_clrBackground_AppBar;
	COLORREF m_clrBackground_AppBarHot;
	COLORREF m_clrBackground_AppBarSelect;
	COLORREF m_clrTextColor_AppBar;
	COLORREF m_clrIconColor_AppBar;

	COLORREF m_clrBackground_Menu;
	COLORREF m_clrBackground_MenuHot;
	COLORREF m_clrTextColor_Menu;

	COLORREF m_clrBorder_Window;
	COLORREF m_clrBorder_Text;
	COLORREF m_clrBorder_Color;

	COLORREF m_clrBackground_ListCtrl;
	COLORREF m_clrTextColor_ListCtrl;

	COLORREF m_clrBackground_ListBox;
	COLORREF m_clrTextColor_ListBox;

	COLORREF m_clrBackground_Pane;
	COLORREF m_clrTextColor_Pane;

	COLORREF m_clrBackground_Dockable;
	COLORREF m_clrTextColor_Dockable;

	COLORREF m_clrBackground_Status;
	COLORREF m_clrTextColor_Status;
	

	int		m_nFontSize;
	CString	m_szFontName;
	CFont	m_fSystemFont;
	CFont	m_fGlobalFont;
	CFont	m_fIconFont;
	int		m_nCaptionHeight;
	int		m_nBorderSize;
	int		m_nStatusHeight;
	CSize	m_szClose;
	CSize	m_szMaximize;
	CSize	m_szMinimize;
	CSize	m_szIcon;
	CRect	m_rcVoice;
	HMODULE	m_hModule;
	int		m_nNumberDecimal;
	double	m_nCurrentDPI;



	void	DrawButton(CWnd *pWnd, CDC *pDC, CRect rcItem, UINT nState, CString szText, Gdiplus::Bitmap* pImage, UINT nStyle, COLORREF clrBackground);
	void	DrawComboButton(CWnd *pWnd, CDC *pDC, CRect rcItem, UINT nState, CString szText, Gdiplus::Bitmap* pImage, UINT nStyle, COLORREF clrBackground);
	void	OnDrawGroup(CWnd* pView, CDC* pDC);
public:
	enum UISTYLE{
		uiBlack,
		uiWhite,
		uiBlue		
	};
	UISTYLE	m_eStyle;

	//static CRuntimeClass*	m_pDefaultInstance;
	//static CGuiManager*		m_pInstance;
	
	CGuiManager();
	virtual ~CGuiManager();

	virtual void		Startup();
	virtual void		Cleanup();
	static CGuiManager* __stdcall GetInstance();
	//static void __stdcall SetDefaultManager(CRuntimeClass* pInstance);
	//static void	__stdcall DestroyInstance();

	virtual		void OnInitializes();

	void		SetThemeStyle(UISTYLE nStyle);
	void		SetSystemColor(int nIndex, COLORREF clr);
	void		SetFontSize(int nSize);
	void		SetFontName(LPCTSTR lpszFontName);
	void		SetNumberDecimal(int nDecimal);

	Gdiplus::Bitmap*		GetSystemBitmap(int nIndex);
	COLORREF	GetSystemColor(int nIndex);
	int			GetSystemSize(int nIndex);
	void		GetSystemRect(CWnd* pWnd, LPRECT rc);
	int			GetFontSize();
	CString		GetFontName();
	CFont*		GetDefaultFont();
	CFont*		GetGlobalFont();
	int			GetNumberDecimal();
	int			GetBorderSize();
	void		SetBorderSize(int nSize);

	//alpha in 0, 255
	COLORREF	GetAlphaColor(COLORREF clr, int alpha);
	Gdiplus::Bitmap*		LoadResource(LPCTSTR lpszName, LPCTSTR lpszType, HMODULE hModule=NULL);

	virtual BOOL DrawFrameControl(CDC* pDC,CRect rect, UINT uType, UINT uStyle, UINT uState);

	virtual void	OnFillBackground(CWnd *pWnd, CDC *pDC, CRect rect, COLORREF clrBackground=COLOR_INVALID);
	virtual void	OnDrawButton(CWnd *pWnd, CDC *pDC, CRect rcItem, UINT nState, CString szText, HBITMAP hbmp=NULL, UINT nStyle=BS_LEFT, COLORREF clrBack = COLOR_INVALID);
	virtual void	OnDrawButton(CWnd *pWnd, CDC *pDC, CRect rcItem, UINT nState, CString szText, HICON hIcon, UINT nStyle=BS_LEFT,  COLORREF clrBack = COLOR_INVALID);
	virtual void	OnDrawButton(CWnd *pWnd, CDC *pDC, CRect rcItem, UINT nState, CString szText, UINT nIconID, UINT nStyle=BS_LEFT,  COLORREF clrBack = COLOR_INVALID);
	virtual void	OnDrawComboBoxButton(CWnd *pWnd, CDC *pDC, CRect rcItem, UINT nState);
	virtual void	OnDrawBackgroundGroupBox(CWnd* pWnd, CDC* pDC, CRect rect);
	virtual void	OnDrawCaption(CWnd* pWnd, CDC *pDC, CRect rect, UINT nType, UINT nState, bool bActive=true);
	virtual void	OnDrawStatusBar(CWnd *pWnd, CString szDesc, CString szNote, CString szKey);
	virtual void	OnDrawBackgroundHeaderCtrl(CWnd* pWnd, CDC* pDC, CRect rect);
	virtual void	OnDrawBackgroundTabCtrl(CWnd* pWnd, CDC* pDC, CRect rect);
	virtual void	OnDrawTabItem(CWnd* pWnd, CDC* pDC, CRect rect, UINT nState);
	
	
	virtual void OnActivateApp(CWnd* pWnd, BOOL bActive);
	virtual BOOL OnNcPaint(CWnd* pWnd, UINT nHitTest,UINT nState);
	virtual BOOL OnNcActivate(CWnd* pWnd, BOOL bActive);
	virtual void OnDrawToolBar(CWnd* pWnd, UINT nHitTest, UINT nState);

	virtual void	DrawLine(CDC *pDC, int x1, int y1, int x2, int y2, COLORREF clrBorder=COLOR_INVALID, int nWidth=1);
	virtual void	DrawBorder(CDC *pDC, CRect rect, COLORREF clrBorder=COLOR_INVALID, int nWidth=1);
	virtual void	DrawTextBorder(CDC *pDC, CRect rect, COLORREF clrBorder=COLOR_INVALID, int nWidth=1);
	virtual void	DrawTextBorderFocus(CDC *pDC, CRect rect, COLORREF clrFocus=COLOR_INVALID);
	virtual void	DrawString(CDC* pDC, CString szString, CRect rect, UINT nFmt=DT_LEFT|DT_VCENTER|DT_SINGLELINE, COLORREF clrText=RGB(21, 21, 21), int nFontSize=10, bool bBold=false, bool bItalic=false, bool bUnderline=false);

	void	DrawImage(CWnd *pWnd, CDC *pDC, CRect rect, HBITMAP hBitmap, UINT nState=ODS_DEFAULT, BOOL bStretch=false);
	void	DrawImage(CWnd *pWnd, CDC *pDC, CRect rect, HICON hIcon, UINT nState=ODS_DEFAULT, BOOL bStretch=false);
	void	StretchBlt(CDC *pDC, CRect rcDest, HBITMAP hBitmap, CRect rcSrc, int xleft=0, int xtop=0, int xright=0, int xbotton=0);
	void	DrawImage(CDC* pDC, CRect rect, UINT nID);

	virtual UINT	OnNcHitTest(CWnd *pWnd, CPoint point);
	HMODULE	GetModuleInstance();
	HICON	LoadIcon(UINT nID);
	HICON	LoadIcon(LPCTSTR lpszName);
	
	void	DrawIcon(CDC* pDC, IconData icon, CRect rcIcon, COLORREF clrText = -1, int nFontSize = 12);
	void	DrawCaption(CWnd* pWnd, BOOL bActived, UINT Hit, CArray<CWidgetItem*, CWidgetItem*>& lstCaptions);
	BOOL	ScaleDPI(CWnd* pWnd, CFont* pFont);
	BOOL	ScaleWindow(CWnd* pWnd, float xscale, float yscale);

	BOOL	ScaleDPI(CRect& rect);
	BOOL	ScaleDPI(CSize& size);
	BOOL	ScaleDPI(CPoint& pt);
	int		ScaleByDPI(int val);

	double	GetScaleDPI();
	int		GetItemHeight();
	int		GetCaptionHeight();
	int		GetStatusHeight();
	void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
	void	SetCaptionHeight(int nHeight);
	COLORREF GetBackgroundColor(UINT nState = ODS_DEFAULT);

	COLORREF GetTextColor();
	CString Translate(LPCTSTR lpszString);
	void	CreateDpiContext(CWnd* pMain);

	BOOL IsHighContastMode();


	BOOL IsDarkColor(COLORREF clr);
	BOOL IsLightColor(COLORREF clr);
	BOOL IsPaleColor(COLORREF clr);
	COLORREF ColorMakeLighter(COLORREF clr, double dblRatio = .1, BOOL bKeepSaturation = FALSE);
	COLORREF ColorMakeDarker(COLORREF clr, double dblRatio = .1, BOOL bKeepSaturation = FALSE);
	COLORREF ColorMakePale(COLORREF clr, double dblLum = .97);
	COLORREF GetInterlaceColor(COLORREF clr);
	COLORREF MixColors(COLORREF clr1, COLORREF clr2, double dblRatio);
	COLORREF SmartMixColors(COLORREF color1, COLORREF color2, double dblLumRatio, int k1, int k2);

	COLORREF GetColor(COLORREF clr, UINT state);
	void	LoadTheme();	

};

static CGuiManager* afxGetInstance() {
    return CGuiManager::GetInstance();
}




class AFX_EXT_CLASS CPenSelector
{
public:
	CPenSelector(CDC& dc, CPen* pPen);
	CPenSelector(CDC& dc, COLORREF color, UINT nWidth = 1, DWORD dwStyle = PS_SOLID);
	~CPenSelector();

protected:
	CDC& m_dc;
	CPen* m_pOldPen;
	CPen	m_pen;
};

class AFX_EXT_CLASS CBrushSelector
{
public:
	CBrushSelector(CDC& dc, CBrush* pBrush);
	CBrushSelector(CDC& dc, COLORREF color);
	~CBrushSelector();

protected:
	CDC& m_dc;
	CBrush* m_pOldBrush;
	CBrush	m_brush;
};

class AFX_EXT_CLASS CFontSelector
{
public:
	CFontSelector(CDC& dc, CFont* pFont);
	CFontSelector(CDC& dc, int nPointSize, LPCTSTR lpszFaceName);	// Create point font
	CFontSelector(CDC& dc, const LOGFONT* pLogFont);
	~CFontSelector();

protected:
	CDC& m_dc;
	CFont* m_pOldFont;
	CFont	m_font;
};

class AFX_EXT_CLASS CAlphaDC : public CDC
{
public:
	CAlphaDC(CDC& originalDC, double dblOpacity = 1.0f);
	CAlphaDC(CDC& originalDC, const CRect& area, double dblOpacity = 1.0f);

	void IgnoreSourceAlpha();

	~CAlphaDC();

protected:
	HDC     m_hOriginalDC;
	CRect   m_rcClipBox;
	HBITMAP m_hBufferBitmap;
	HBITMAP m_hTempBitmap;
	BYTE    m_nOpacity;
	BOOL	m_bIgnoreAlpha;

	COLORREF* m_pImageBits;

	void Initialize();
};



#endif
