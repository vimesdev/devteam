#ifndef CHILDFRAME_H
#define CHILDFRAME_H
#include "DcmControl.h"

// CChildFrame frame

class CChildFrame : public CFrameWnd
{
	DECLARE_DYNCREATE(CChildFrame)
public:
	CDcmControl	m_wndView;
	CToolBar	m_wndDcmToolkit;
	CToolBar	m_wndImageProperty;

	CChildFrame();           // protected constructor used by dynamic creation
	virtual ~CChildFrame();
	

protected:
	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
protected:
	virtual BOOL OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult);
public:
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};

#endif


