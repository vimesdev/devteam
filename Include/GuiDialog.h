#ifndef GUIDAILOG_H
#define GUIDAILOG_H
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
#include <afxcontrolbars.h>
#include <vector>
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
#include "GuiTaskPane.h"
#include "Resource.h"
#include "DDXData.h"
#include "DbField.h"
#include "DbMap.h"
#include "Record.h"
#include "json.h"
#include "GridListView.h"

typedef struct tagMapData{
	LPCTSTR szName;
	int		nType;
	void*	pData;
}MapData;


class AFX_EXT_CLASS CGuiDialog :
	public CDialogEx
{
	enum { IDD = IDD_DIALOG };
	HICON	m_hIcon;
	UINT	m_nHitTest;
	CString	m_szStatusDescription;
	CString m_szStatusNote;
	CString	m_szWindowName;

	bool	m_bHasStatusBar;
	
protected:
	DLGTEMPLATE	m_dlgTemplate;
	BOOL	m_bIsCreated;
	BOOL	m_bModelessDlg;
	CBitmap m_Bmp;
	CString GetClassName(CWnd *pWnd);
	int		m_nX;
	int		m_nY;
	int		m_nDlgWidth;
	int		m_nDlgHeight;
	bool	m_bAllowResize;
	bool	m_bMinInfo;
	int		m_nMinWidth;
	int		m_nMinHeight;
	int		m_nMaxWidth;
	int		m_nMaxHeight;
	int		m_nCurrentMode;
	HWND	m_hWndFocus;
	CWnd*	m_pWndRelation; //Window relation 
	CGuiTooltip*	m_wndToolTip;
	CString	m_szTitle;
	BOOL	SaveFocusControl();
	void	SetWindowRelation(CWnd *pWnd);
	bool	m_AutoCalcSize;
	bool	m_AutoCenter;
	JSONVALUE	m_jData;
	bool	m_bEnableResize;
	CGuiMenu*	m_pMenu;
	CArray<WEVENT, WEVENT> m_arEvent;
	CLayoutCtrl	m_Layout;

	CRect					m_cltRect, m_cltR0;
	int						m_xMin, m_yMin;
	int						m_xSt,  m_ySt;
	UINT					m_nDelaySide;


	CFont	m_Font;
	void	AddLayoutControl(CWnd* pWnd, UINT nStyle, int xRatio = 100, int yRatio = 100, int cxRatio = 100,  int cyRatio = 100 );	
	void 	AllowSizing(int xst, int yst);
	void 	AddResize(CWnd* pWnd, float xscale, float yscale);
	void	AddBottom(CWnd* pWnd, int space=5, bool left = false);
	int		UpdateControlRect(UINT nID, CRect *pnr);
	virtual void	OnResizeLayout() {};
public:

	CGuiDialog(CWnd *pParent=NULL);
	~CGuiDialog(void);
	BOOL	Create(CWnd *pParent, LPCTSTR lpszTitle=_T(""));
	BOOL	IsValidateData();
	BOOL	SetNextFocus(BOOL bPrev=FALSE);
	void	EnableControls(BOOL bFlag=TRUE);
	void	EnableButtons(BOOL bFlags, int nFirst...);
	void	SetWindowPos(CWnd* pParent, int nX, int nY);
	void	ShowToolTip(CWnd *pWnd, LPCTSTR lpszTitle);
	void	SetMode(int nMode);
	int		GetMode();
	void	SetWindowTitle(LPCTSTR lpszString);
	int		GetWidth();
	int		GetHeight();
	void	SetAutoCalcSize(bool bCalc);
	void	SetAutoCenter(bool bCenter);
	void	SetWindowName(LPCTSTR lpszWindowName);
	void	EnableResize(bool bFlags);

	void	SetMenuState(int nID, BOOL bState);
	void	AddEvent(int nID, LPCTSTR lpszName, int(*eventProc)(CWnd *pWnd)=NULL, HICON hIcon=NULL, UINT nChar=-1, UINT nFlags=0);


	void	UpdateControlData(CWnd *pWnd, BYTE& value, BOOL bSaveAndValidate=TRUE);
	void	UpdateControlData(CWnd *pWnd, short& value, BOOL bSaveAndValidate=TRUE);
	void	UpdateControlData(CWnd *pWnd, int& value, BOOL bSaveAndValidate=TRUE);
	void	UpdateControlData(CWnd *pWnd, UINT& value, BOOL bSaveAndValidate=TRUE);
	void	UpdateControlData(CWnd *pWnd, long& value, BOOL bSaveAndValidate=TRUE);
	void	UpdateControlData(CWnd *pWnd, DWORD& value, BOOL bSaveAndValidate=TRUE);
	void	UpdateControlData(CWnd *pWnd, CString& value, BOOL bSaveAndValidate=TRUE);
	void	UpdateControlData(CWnd *pWnd, float& value, BOOL bSaveAndValidate=TRUE);
	void	UpdateControlData(CWnd *pWnd, double& value, BOOL bSaveAndValidate=TRUE);
	void	UpdateControlData(CWnd *pWnd, COleCurrency& value, BOOL bSaveAndValidate=TRUE);
	void	UpdateControlData(CWnd *pWnd, COleDateTime& value, BOOL bSaveAndValidate=TRUE);
	

	virtual void	OnOK();
	virtual void	OnCancel();
	virtual bool	OnCloseWindow();
	virtual void	GetScreenToData(){}
	virtual void	GetDataToScreen(){}
	virtual void	SetDefaultValues(){};

	
	
	virtual void RecalcLayout();
	
	virtual int	 DoModal();
	virtual BOOL OnInitDialog();
	virtual void OnCreateComponents();
	virtual void OnSetWindowEvents();
	virtual void OnInitializeComponents();
	virtual void DoDataExchange(CDataExchange *pDX);
	virtual void OnDoDataExchange(CDataExchange *pDX);
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);

	afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	virtual BOOL OnChildNotify(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pLResult);
	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);	
	afx_msg void OnDestroy();
	afx_msg BOOL OnNcActivate(BOOL bActive);
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
#ifdef _WIN32_WINNT_MAXVER
	afx_msg LRESULT OnNcHitTest(CPoint point);
#else
	afx_msg UINT OnNcHitTest(CPoint point);
#endif
	afx_msg void OnNcLButtonDblClk(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonDown(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonUp(UINT nHitTest, CPoint point);
	afx_msg void OnNcMouseMove(UINT nHitTest, CPoint point);
	afx_msg void OnNcPaint();;
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);
protected:
	virtual void PostNcDestroy();
public:
	afx_msg void OnMeasureItem(int nIDCtl, LPMEASUREITEMSTRUCT lpMeasureItemStruct);
	afx_msg void OnClose();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
};

#endif

