#ifndef GUIVIEW_H
#define GUIVIEW_H
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
#ifndef __AFXEXT_H__
#include <afxext.h>
#endif
#include <vector>
#include "GuiDefs.h"
#include "GuiTextCtrl.h"
#include "GuiCheckBox.h"
#include "GuiButton.h"
#include "GuiRadioButton.h"
#include "GuiComboBox.h"
#include "GuiGroupBox.h"
#include "GuiListBox.h"
#include "GuiListCtrl.h"
#include "GuiDateCtrl.h"
#include "GuiTimeCtrl.h"
#include "GuiDateTimeCtrl.h"
#include "GuiNumberCtrl.h"
#include "GuiTabCtrl.h"
#include "GuiToolTip.h"
#include "GuiLabel.h"
#include "GuiPictureCtrl.h"
#include "GuiMenu.h"
#include "DDXData.h"
#include "DbField.h"
#include "DbMap.h"
#include "Record.h"
#include "LayoutCtrl.h"
#include "json.h"
#include "GridListView.h"


class AFX_EXT_CLASS CGuiView :
	public CScrollView
{
	DECLARE_DYNCREATE(CGuiView)
	bool	m_bInited;
	CString	m_szWindowName;
	
protected:
	int		m_nX;
	int		m_nY;
	int		m_nDlgWidth;
	int		m_nDlgHeight;
	int		m_nCurrentMode;
	CWnd*	m_pWndRelation; //Window relation 
	CBitmap	m_bmpBackground;
	CBrush	m_brBackground;
	HWND	m_hWndFocus;
	CGuiTooltip*	m_wndToolTip;
	CGuiMenu*	m_pMenu;
	CString GetClassName(CWnd *pWnd);
	CArray<WEVENT, WEVENT> m_arEvent;
	JSONVALUE	m_jData;
	bool	m_bEnableResize;
	CFont	m_Font;
	CLayoutCtrl	m_Layout;

	CRect					m_cltRect, m_cltR0;
	int						m_xMin, m_yMin;
	int						m_xSt,  m_ySt;
	UINT					m_nDelaySide;
	void 					AddLayoutControl(CWnd* pWnd, UINT nStyle, int xRatio = 100, int yRatio = 100, int cxRatio = 100,  int cyRatio = 100 );	
	void 					AddLayoutControls(UINT nStyle, int xRatio , int yRatio, int cxRatio,  int cyRatio, CWnd* pWnd, ... );	
	void 					AllowSizing(int xst, int yst);
	void 					AddResize(CWnd* pWnd, float xscale, float yscale);
	void					AddBottom(CWnd* pWnd, int space=5, bool left = false);
	int						UpdateControlRect(UINT nID, CRect *pnr);

public:
	CGuiView();
	virtual ~CGuiView();
	BOOL	Create(CWnd *pParent, CRect rect=CRect(0, 0, 0, 0), LPCTSTR lpszWindowName=_T(""), DWORD dwStyle=WS_CHILD|WS_VISIBLE);
	
	BOOL	SaveFocusControl();
	void	SetWindowRelation(CWnd *pWnd);
	BOOL	SetNextFocus(BOOL bPrev=FALSE);
	virtual void	EnableControls(BOOL bFlag=TRUE);
	virtual void	EnableButtons(BOOL bFlags, int nFirst, ...);
	virtual void	OnResizeLayout();
	virtual void	ClearLayouts();
	void			EnableResize(bool bFlags);
	virtual int		SetMode(int nCurrentMode);
	int		GetMode();
	int		IsValidateData(bool bSaveData=true);
	CRect	GetDefRect();
	void	SetMenuState(int nID, BOOL bState);
	void	AddEvent(int nID, LPCTSTR lpszName, int(*eventProc)(CWnd *pWnd)=NULL, HICON hIcon=NULL, UINT nChar=-1, UINT nFlags=0);
	void	ShowToolTip(CWnd *pWnd, LPCTSTR lpszTitle);
	

	virtual BOOL OnInitDialog();
	virtual void OnCreateComponents();
	virtual void OnInitializeComponents();
	virtual void OnSetWindowEvents();
	virtual void DoDataExchange(CDataExchange *pDX);
	virtual void OnDoDataExchange(CDataExchange *pDX);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual void GetDataToScreen(){};
	virtual void GetScreenToData(){};

	int		GetWidth();
	int		GetHeight();
	void	SetWindowName(LPCTSTR lpszWindowName);


	void UpdateControlData(CWnd *pWnd, BYTE& value, BOOL bSaveAndValidate=TRUE);
	void UpdateControlData(CWnd *pWnd, short& value, BOOL bSaveAndValidate=TRUE);
	void UpdateControlData(CWnd *pWnd, int& value, BOOL bSaveAndValidate=TRUE);
	void UpdateControlData(CWnd *pWnd, UINT& value, BOOL bSaveAndValidate=TRUE);
	void UpdateControlData(CWnd *pWnd, long& value, BOOL bSaveAndValidate=TRUE);
	void UpdateControlData(CWnd *pWnd, DWORD& value, BOOL bSaveAndValidate=TRUE);
	void UpdateControlData(CWnd *pWnd, CString& value, BOOL bSaveAndValidate=TRUE);
	void UpdateControlData(CWnd *pWnd, float& value, BOOL bSaveAndValidate=TRUE);
	void UpdateControlData(CWnd *pWnd, double& value, BOOL bSaveAndValidate=TRUE);
	void UpdateControlData(CWnd *pWnd, COleCurrency& value, BOOL bSaveAndValidate=TRUE);
	void UpdateControlData(CWnd *pWnd, COleDateTime& value, BOOL bSaveAndValidate=TRUE);

protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnDraw(CDC* /*pDC*/);
	virtual void OnInitialUpdate();
	virtual void PostNcDestroy();
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	BOOL	OnEraseBkgnd(CDC *pDC);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPaint();	
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnSettingChange(UINT uFlags, LPCTSTR lpszSection);
	afx_msg void OnSysKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnSysColorChange();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnDestroy();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
	afx_msg void OnMeasureItem(int nIDCtl, LPMEASUREITEMSTRUCT lpMeasureItemStruct);

	DECLARE_MESSAGE_MAP()
	
	
};



class AFX_EXT_CLASS CListItemEdit: public CGuiView{
protected:	
	struct ItemInfo{
		int		nColumn;
		int		nStyle;
		bool	bFree;
		CWnd*	pWnd;
		CString	szText;
	};
	CArray<ItemInfo, ItemInfo> m_arControls;
	CGuiButton	m_wndApply;

	int		m_nRowIndex;
	int		m_nColIndex;
	int		m_nEditMode;
	int		m_nButtonAtColumn;

	bool	m_bShow;
	
	void	RecalcLayout();
	
public:
	
	CListItemEdit();
	~CListItemEdit();
	BOOL	Create(CWnd *pParent);
	void	Show();
	void	Hide();
	void	SetEditCtrl(int nCol, CWnd* pWnd=NULL);
	void	SetButtonCtrl(int nCol);
	void	SetEditMode(int nMode);

	int		GetRowIndex();
	int		GetColIndex();
	virtual	int OnOK(){ return 0;}
	virtual void OnCancel(){};
	void	OnButtonSelect();
	
protected:
	virtual BOOL	PreTranslateMessage(MSG* pMsg);
	afx_msg void	OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg int		OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void	OnSize(UINT nType, int cx, int cy);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMeasureItem(int nIDCtl, LPMEASUREITEMSTRUCT lpMeasureItemStruct);
	afx_msg void OnNcDestroy();
};


static BOOL CALLBACK WndExEnumChildFontProc(HWND hwndChild, LPARAM lParam) ;

#endif