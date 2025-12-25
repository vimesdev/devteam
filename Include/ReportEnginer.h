#ifndef REPORTENGINER_H
#define REPORTENGINER_H

#include <afxext.h>
#include "Containers.h"
#include <atlimage.h>


enum erptSection{
	rptReportHeader=0,
	rptPageHeader,
	rptGroupHeader,
	rptDetail,
	rptGroupFooter,
	rptPageFooter,
	rptReportFooter,
	rptReportEnd
};

#define REPORT_FRAME	0
#define REPORT_LABEL	1
#define REPORT_TEXT		2
#define REPORT_RECTANGLE 3
#define REPORT_LINE		4
#define REPORT_IMAGE	5
#define REPORT_TABLE	6
#define REPORT_BARCODE	7
#define REPORT_CHECKBOX	8
#define REPORT_HTML		9
#define REPORT_SIGNATURE	10


#define FORMAT_LEFT		DT_LEFT
#define FORMAT_TOP		DT_TOP
#define FORMAT_RIGHT	DT_RIGHT
#define FORMAT_BOTTOM	DT_BOTTOM
#define FORMAT_CENTER	DT_CENTER
#define FORMAT_VCENTER	DT_VCENTER
#define FORMAT_WORDWRAP	DT_WORDBREAK
#define FORMAT_NUMBER	0x001000000
#define FORMAT_DATETIME	0x002000000
#define FORMAT_NORESIZE 0x004000000
#define FORMAT_NOREPOS	0x008000000



//Define pen style
#define REPORT_NONE		0x000
#define REPORT_LEFT		0x001
#define REPORT_TOP		0x002
#define REPORT_RIGHT	0x004
#define REPORT_BOTTOM	0x008
#define REPORT_TOPLEFT	(REPORT_LEFT|REPORT_TOP)
#define REPORT_RIGHTBOTTOM (REPORT_RIGHT|REPORT_BOTTOM)
#define REPORT_BORDER	(REPORT_TOPLEFT|REPORT_RIGHTBOTTOM)
#define REPORT_FILL		0x010


#define	PS_SOILD_LEFT	0x001
#define	PS_SOILD_TOP	0x002
#define	PS_SOILD_RIGHT	0x004
#define	PS_SOILD_BOTTOM	0x008
#define	PS_DASH_LEFT	0x010
#define	PS_DASH_TOP		0x020
#define	PS_DASH_RIGHT	0x040
#define	PS_DASH_BOTTOM	0x080
#define	PS_DOT_LEFT		0x100
#define	PS_DOT_TOP		0x200
#define	PS_DOT_RIGHT	0x400
#define	PS_DOT_BOTTOM	0x800

/*
class  CTextStyle{
public:
	CTextStyle(){
		m_bBold = m_bItalic = m_bUnderline = false;
		m_nSize = 8;
		m_nStyle = FORMAT_LEFT;
		m_clrText = 0;
		m_szFace = _T("Tahoma");
	}

	CTextStyle(CTextStyle *obj){
		*this = *obj;
	}
	CTextStyle(CString szFace, int nSize, bool bBold = false, bool bItalic = false, bool bUnderline = false, int nStyle=FORMAT_LEFT, COLORREF clrText = 0){
		m_szFace = szFace;
		m_nSize = nSize;
		m_bBold = bBold;
		m_bItalic = bItalic;
		m_bUnderline = bUnderline;
		m_nStyle = nStyle;
		m_clrText = clrText;
	}
	~CTextStyle(){};

	CTextStyle& operator=(const CTextStyle& obj){
		m_bBold = obj.m_bBold;
		m_bItalic = obj.m_bItalic;
		m_bUnderline = obj.m_bUnderline;
		m_nSize = obj.m_nSize;
		m_nStyle = obj.m_nStyle;
		m_clrText = obj.m_clrText;
		m_szFace = obj.m_szFace;
		return *this;
	}
	bool	m_bBold;
    bool	m_bItalic;
    bool	m_bUnderline;
	int		m_nSize;	//Size of font
	int		m_nStyle;
	CString	m_szFace;
	COLORREF	m_clrText;
};
*/

class CReportSection;
class CReportPrinter;


#pragma comment(linker, "/section:.Shared,rws")
#pragma data_seg(".Shared") 
extern float kReportVersion;
extern BYTE kChatset;
#pragma data_seg()


class  AFX_EXT_CLASS CReportItem: public CObject{
protected:
	CImage		mImg;
public:
	CRect		m_rectDraw;
	CRect		m_rect;
	CString		m_szName;
	CString		m_szText;
	CString		m_szFileName;
	CString		m_szFaceName;
	int			m_nType;
	int			m_nPenWidth;
	int			m_nPenStyle;
	int			m_nStyle;
	int			m_nTextAlign;
	int			m_nFaceSize;
	bool		m_bBold;
	bool		m_bItalic;
	bool		m_bUnderline;
	int			m_nRotation;
	bool		m_bFixedHeight;
	bool		m_bVisible;
	float		m_nZoom;
	int			m_nHeight;
	int			m_nGroup;
	int			m_nSubGroup;
	int			m_nFrame;
	int			m_nSection;
	int			m_nResize;
	int			m_nRepos;
	bool		m_bAutoSize;
	bool		m_bCalcSize;
	bool		m_bDesign;
	int			m_nRow1;
	int			m_nCol1;
	int			m_nRow2;
	int			m_nCol2;
	bool		m_bHasMergeCell;
	bool		m_bDestroy;
	COLORREF	m_clrBorder;
	COLORREF	m_clrBackground;
	COLORREF	m_clrText;
	HBITMAP		m_hBitmap;
	int			m_nFontHeight;
	int			m_nWidth;
	bool		m_bCheck;
	CReportSection*	m_Section;
	CReportItem();
	CReportItem(CReportSection *section);
	virtual ~CReportItem();

	void	Copy(CReportItem *obj);
	void	SetSection(CReportSection* section);
	void	SetType(int nType){ m_nType = nType; }
	void	SetRect(int x, int y, int cx, int cy) { m_rect = CRect(x, y, x+cx, y+cy); }
	void	SetName(CString szName){ m_szName = szName;}
	void	SetText(CString szText) { m_szText = szText; }
	void	SetTextAlign(int nTextAlign) { m_nTextAlign = nTextAlign; }
	void	SetStyle(int nStyle){ m_nStyle = nStyle; }
	void	SetBkColor(COLORREF clrBk){ m_clrBackground = clrBk; }
	void	SetTextColor(COLORREF clrText) { m_clrText = clrText; }
	void	SetBold(bool bBold) { m_bBold = bBold;}
	void	SetItalic(bool bItalic) { m_bItalic = bItalic;}
	void	SetUnderline(bool bUnderline) { m_bUnderline = bUnderline;}
	void	SetFaceName(CString szFace) { m_szFaceName = szFace; }
	void	SetFaceSize(int nFaceSize) { m_nFaceSize = nFaceSize; }
	void	SetPenStyle(int nStyle) { m_nPenStyle = nStyle; } 
	void	SetPenWidth(int nWidth) { m_nPenWidth = nWidth; }
	void	SetPenColor(COLORREF clr) { m_clrBorder = clr;}
	void	SetHeight(int nHeight) { m_nHeight = nHeight; }
	void	SetFixedHeight(bool bFixedHeight) { m_bFixedHeight = bFixedHeight; }
	void	SetFileName(CString szFileName);
	void	SetBitmapRes(int nID);
	void	SetHBITMAP(HBITMAP hBitmap);
	void	SetCheck(bool bCheck){ m_bCheck = bCheck;}
	bool	GetCheck() { return m_bCheck;}
	void	SetRotate(int nRotate){ m_nRotation = nRotate;}
//	CTextStyle	SetTextStyle(CTextStyle textStyle);
	inline void	SetVisible(bool bVisible) { m_bVisible = bVisible; }
	inline LPCTSTR	GetName() { return m_szName; }
	inline LPCTSTR GetText() { return m_szText; }
	inline bool	GetFixedHeight(){ return m_bFixedHeight; }
	inline int		GetStyle(){ return m_nStyle; }
	inline int		GetHeight(){ return m_nHeight; }
	inline bool	IsVisible(){ return m_bVisible; } ;
	inline int		GetFaceSize(){return m_nFaceSize; }
	inline int		GetGroupID(){ return m_nGroup; }
	inline int		GetFrame() { return m_nFrame; }
	inline int		GetSection(){ return m_nSection; }
	inline int		GetType() { return m_nType; }
	inline CRect	GetItemRect() { return m_rect; }

	virtual void	BeginPrint(CDC *pDC, CRect rect);
	virtual void	Print(CDC *pDC, CRect rect, float nZoom=1);
	virtual void	DrawBorder(CDC *pDC, CRect rect);
	virtual void	operator=(CReportItem* obj);
	virtual void	SetRect(CRect rect){ m_rect = rect;}
	void	Serialize(CArchive& ar);
	int		DrawBitmap(CDC *pDC, CRect rect, HBITMAP hBitmap);


	void	PrintPDF(void* page, CRect rect, float nZoom=1);



};

class AFX_EXT_CLASS CReportSection{
public:
	int		m_nType;
	int		m_nHeight;
	int		m_nNewHeight;
	int		m_nFixHeight;
	bool	m_bVisible;
	bool	m_bPageBreak;
	int		m_nPage;
	int		m_nCol;
	bool	m_bIsFixedHeight;

	CRect	m_rect;
	CString	m_szName;
	CArray<CReportItem*,CReportItem*> m_aItem;


	CReportPrinter*	m_pReportPrinter;
	CReportSection(CReportPrinter* pPrinter);
	~CReportSection();
	void	SetReportPrinter(CReportPrinter* rptDocument);
	void	Add(CReportItem *obj);
	void MeasureSections();
	void BeginPrint(CDC *pDC, CRect& rcBound, float nZoom=1);
	void Print(CDC *pDC, CRect& rcBound, float nZoom=1);
	void Copy(CReportSection* prs);
	void	SetValue(int nIndex, bool nVal);
	void	SetValue(int nIndex, short nVal);
	void	SetValue(int nIndex, int nVal);
	void	SetValue(int nIndex, long nVal);
	void	SetValue(int nIndex, float nVal);
	void	SetValue(int nIndex, double nVal);
	void	SetValue(int nIndex, LPCTSTR lpszData);
	void	SetValue(LPCTSTR lpszName, bool nVal);
	void	SetValue(LPCTSTR lpszName, short nVal);
	void	SetValue(LPCTSTR lpszName, int nVal);
	void	SetValue(LPCTSTR lpszName, long nVal);
	void	SetValue(LPCTSTR lpszName, float nVal);
	void	SetValue(LPCTSTR lpszName, double nVal);
	void	SetValue(LPCTSTR lpszName, LPCTSTR lpszData);
	void	SetCheck(LPCTSTR lpszName, bool bCheck);
	
	void	Format(LPCTSTR lpszName, ...);
	

	CString	GetValue(LPCTSTR lpszName);
	
	CReportItem*	GetItem(int nIndex);
	CReportItem*	GetItem(LPCTSTR lpszName);
	void	SetItem(int nIndex, CReportItem* obj);
	void	SetItem(LPCTSTR lpszName, CReportItem* obj);
	void	SetVisible(bool bVisible);
	void	SetPageBreak(bool bPageBreak=true);
	bool	GetVisible();
	bool	GetPageBreak();
	void	Cleanup();
	int		GetItemCount();
	void	SetFixedHeight(bool bFixed);

};

void _declspec(dllexport) SetReportVersion(float ver);

#endif;

