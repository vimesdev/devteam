#ifndef PANEL_H
#define PANEL_H
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


class AFX_EXT_CLASS CGuiTabCtrl:
	public CTabCtrl, public CGuiBase
{
protected:
	
	bool		m_bIsHovering;
	BOOL		m_bIsTracking;
	bool		m_bIsMain;
public:
	
	CGuiTabCtrl();
	~CGuiTabCtrl();
	virtual BOOL Create(CWnd *pParent, int x, int y, int width, int height, UINT nID = NULL);
	BOOL	Create(CWnd *pParent, CRect rect=CRect(0, 0, 0, 0));
	int		Add(LPCTSTR lpszCaption, CWnd *pWnd=NULL, int nImage=-1, bool bCenter=false, bool bResize=false);
	int		AddView(LPCTSTR lpszCaption, CRuntimeClass *pRuntimeClass, int nImage=-1);
	int		InsertAt(int nIndex, LPCTSTR lpszCaption, CWnd *pWnd, int nImage=-1);
	BOOL	SelectAt(int iIndex);
	BOOL	SelectByName(LPCTSTR lpszCaption);
	BOOL	SetActiveTab(int iIndex);
	CWnd*	GetWindowAt(int iIndex);
	CWnd*	GetWindowSel();
	CWnd*	GetTabWnd(int iIndex);
	CWnd*	GetActiveWnd();

	int		SetCurSel(int nItem);
	int		GetActiveTab();
	

protected:
	int		m_nMouseOverIndex;
	int		m_nSelectedTab;
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void PreSubclassWindow();
	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
	virtual void OnInitializes(){}

	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPaint();
	afx_msg void OnNcPaint();;
	afx_msg void OnTcnSelchange(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnTcnSelchanging(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
	afx_msg void OnSize(UINT nType, int cx, int cy);

	DECLARE_MESSAGE_MAP()

public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
	afx_msg void OnTcnFocusChange(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg LRESULT OnMouseLeave(WPARAM wparam, LPARAM lparam);
	afx_msg LRESULT OnMouseHover(WPARAM wparam, LPARAM lparam) ;

	afx_msg void OnDestroy();
	afx_msg void OnMeasureItem(int nIDCtl, LPMEASUREITEMSTRUCT lpMeasureItemStruct);
};


#endif