#ifndef GUIHEADERCTRL_H
#define GUIHEADERCTRL_H
#include <afxcmn.h>

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
//	hayhv@vimes.com.vn or hayhv@yahoo.com
//	http://www.vimes.com.vn
//
//	Ban quy cua CONG TY CO PHAN PHAN MEM Y TE VIET NAM (VIMES).
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh (GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////


//Define column format CF
#define	CFMT_LEFT		LVCFMT_LEFT
#define CFMT_RIGHT		LVCFMT_RIGHT
#define CFMT_CENTER		LVCFMT_CENTER

#define CFMT_TEXT		0x0100
#define CFMT_NUMBER		0x0200
#define CFMT_MONEY		0x0400
#define CFMT_DATE		0x0800
#define CFMT_TIME		0x1000
#define CFMT_DATETIME	0x2000
#define CFMT_AUTOSIZE	0x4000
#define CFMT_FIXSIZE	0x8000
#define CFMT_TOP		0x0001
#define CFMT_CHECKBOX	0x0010



struct MERGECELLHDR{
	int		nCol1;
	int		nCol2;
	int		nRow1;
	int		nRow2;
	UINT	nStyle;
	bool	bBold;
	bool	bItalic;
	COLORREF	clrText;
	CString	szText;
};

class AFX_EXT_CLASS CGuiHeaderCtrl : public CHeaderCtrl
{
	int		m_nMaxRow;
	int		m_nHeight;
	int		m_nSortColumn;
	bool	m_bSortAscending;
	bool	m_bHasCaption;
	bool	m_bGridLayout;
	bool	m_bHasToolBar;

	CFont	m_Font;
	CBitmap	m_bmpHeader;
	CBitmap	m_bmpHeaderBackground;
	CArray<MERGECELLHDR, MERGECELLHDR&> m_arrayMergeCell;
	
public:
	CGuiHeaderCtrl();
	~CGuiHeaderCtrl();
	BOOL	CreateEx(CWnd *pParent, int x, int y, int cx, int cy);

	virtual void DrawItem(LPDRAWITEMSTRUCT lpDis);
	void	SetItemHeight(int nHeight);
	int		GetItemHeight();
	int		GetColumnWidth(int nCol);
	void	SetSort(int nCol, bool bAsc=true);
	void	MergeCell(LPCTSTR lpszText, int nRow1, int nCol1, int nRow2, int nCol2,  bool bBold=false, bool bItalic=false, COLORREF clrText=0);
	
	void	DoPaint(CDC *pDC);
	LRESULT	DefWindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	void	HasCaption(bool bCaption);
	void	InsertColumn(int nCol, LPCTSTR lpszCaption, int nWidth, CWnd* pCtrl);
	void	DeleteAllColumn();
	void	RecalcLayout();

protected:
	virtual void PreSubclassWindow();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnNcPaint();;
	afx_msg void OnPaint();
	afx_msg	void OnFontChange();
	afx_msg LRESULT OnLayout(WPARAM wparam, LPARAM lparam);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
	afx_msg void OnSize(UINT nType, int cx, int cy);

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDestroy();
};


#endif