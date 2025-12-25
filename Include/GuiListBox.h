#ifndef GUILISTBOX_H
#define GUILISTBOX_H
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
#include "GuiBase.h"


struct LISTBOXITEMINFO{
		CString szCaption;
		bool	bEnable;
		int		nSubitem;
		bool	bBold;
		bool	bItalic;
		UINT	nIcon;
		LPARAM	lParam;
	};

class AFX_EXT_CLASS CGuiListBox : 
	public CListBox, public CGuiBase{
public:
	

	CArray<LISTBOXITEMINFO, LISTBOXITEMINFO&> m_arItems;
	CBitmap		m_bitmap;
	int			m_nHighlight;
	int			m_nCurSel;
	int			m_nItemHeight;
	BOOL		m_bTracking;
	LOGFONT		m_lf;
	
	void		SetBkColor(COLORREF clrBackground);
	void		SetTextColor(COLORREF clrText);
	COLORREF	GetBkColor();
	COLORREF	GetTextColor();
	void		SetItemHeight(int nItemsRange);

	CGuiListBox();
	~CGuiListBox();
	virtual BOOL Create(CWnd *pParent, int x, int y, int width, int height);
	void	SetItem(int nIndex, LISTBOXITEMINFO lbi);
	void	GetItem(int nIndex, LISTBOXITEMINFO& lbi);
	int		AddItem(LPCTSTR lpszItem, int nSubItem=0, bool bEnable=true, bool bBold=false, bool bItalic=false, UINT nIcon=-1, LPARAM lParam=NULL);
	void	ResetContent();
protected:
	virtual void PreSubclassWindow();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
public:
	DECLARE_MESSAGE_MAP()
	afx_msg void OnNcPaint();;
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);

	
	int InsertItem(int nIndex, LPCTSTR lpszItem);
	int DeleteItem(int nIndex);

	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void MeasureItem(LPMEASUREITEMSTRUCT /*lpMeasureItemStruct*/);
	afx_msg HBRUSH CtlColor(CDC* /*pDC*/, UINT /*nCtlColor*/);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg LRESULT OnMouseLeave(WPARAM wparam, LPARAM lparam);
	afx_msg void OnNcMouseMove(UINT nHitTest, CPoint point);
	afx_msg void OnLbnSelchange();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	};

#endif