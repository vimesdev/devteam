#ifndef REPORTMAIN_H
#define REPORTMAIN_H

#include "GuiMiniFrame.h"
#include "ReportPrinter.h"
#include "GuiDlgBar.h"
#include "GuiTextCtrl.h"


class CReportMain :
	public CGuiMiniFrame
{
	
	CWnd*	m_pWndPrint;
    CWnd*	m_pWndFocus;
    CWnd*	m_pWndActive;

protected:
	
	CReportPrinter	m_wndView;
	bool			m_bShowThumbnails;
	CGuiDialogBar	m_wndDialogBar;
	CGuiTextCtrl	m_wndZoomDesc;
	CGuiTextCtrl	m_wndGotoPage;
	CGuiTextCtrl	m_wndPage;
	CGuiTextCtrl	m_wndZoom;
	CGuiLabel		m_wndTotalPage;
    CGuiButton		m_wndSetting;
	bool		m_bEnablePrint;
public:
	
	CWnd*	m_pWndMain;
	CString	m_szFileName;

	CReportMain(void);
	~CReportMain(void);
	void	AddPrintWnd();
	int		GetPreviewCount();
	
	void	UpdateInformations(int nTotalPage, int nCurrentPage, int nZoom);
	void	EnablePrint(bool bEnable);
	void	Signature();
    void	OnSettingSignature();
    
	CReportPrinter*	GetPrinter();

	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnSize(UINT nType, int cx, int cy);
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
public:
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	afx_msg void OnDestroy();
	afx_msg void OnWindowPosChanged(WINDOWPOS* lpwndpos);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
	afx_msg void OnClose();
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
public:
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
};

#endif
