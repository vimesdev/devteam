// ChildFrame.cpp : implementation file
//

#include "stdafx.h"
#include "HMSLAB.h"
#include "ChildFrame.h"
#include ".\childframe.h"

#define TOOLBAR_WITH	25

// CChildFrame

IMPLEMENT_DYNCREATE(CChildFrame, CFrameWnd)

CChildFrame::CChildFrame()
{
}

CChildFrame::~CChildFrame()
{
}


BEGIN_MESSAGE_MAP(CChildFrame, CFrameWnd)
	ON_WM_CREATE()
	ON_WM_SIZE()
	//ON_WM_ERASEBKGND()
END_MESSAGE_MAP()


// CChildFrame message handlers

int CChildFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	SetMenu(NULL);
	if (!m_wndDcmToolkit.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
				| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY) ||
				!m_wndDcmToolkit.LoadToolBar(IDR_DCMTOOLKIT))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndImageProperty.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_LEFT
			| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY) ||
			!m_wndImageProperty.LoadToolBar(IDR_DCMIMAGEPROPERTIES))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}
	
	CRect rect;
	GetClientRect(&rect);
	CRect rc = rect;
	rc.bottom = rc.top+TOOLBAR_WITH;
	m_wndDcmToolkit.MoveWindow(rc);
	m_wndDcmToolkit.ModifyStyle(0, 0x0800);
	rc = rect;
	rc.top += TOOLBAR_WITH;
	rc.right = rc.left+TOOLBAR_WITH;
	m_wndImageProperty.MoveWindow(rc);
	m_wndImageProperty.ModifyStyle(0, 0x0800);
	rect.top += TOOLBAR_WITH;
	rect.left += TOOLBAR_WITH;
	m_wndView.Create(this, rect);
	return 0;
}

BOOL CChildFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if (!CFrameWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOWTEXT), NULL);

	return TRUE;
}

void CChildFrame::OnSize(UINT nType, int cx, int cy)
{
	CFrameWnd::OnSize(nType, cx, cy);
	CRect rect;
	GetClientRect(&rect);
	rect.top += TOOLBAR_WITH;
	rect.left += TOOLBAR_WITH;
	m_wndView.MoveWindow(rect);
}

BOOL CChildFrame::OnEraseBkgnd(CDC* pDC)
{
	CRect rect;
	GetClientRect(&rect);
//	pDC->FillSolidRect(rect, RGB(0, 0, 0));
//	return FALSE;
	return CFrameWnd::OnEraseBkgnd(pDC);
}

BOOL CChildFrame::OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	// TODO: Add your specialized code here and/or call the base class
	return CFrameWnd::OnWndMsg(message, wParam, lParam, pResult);
	
}

BOOL CChildFrame::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
	// TODO: Add your specialized code here and/or call the base class
	return true;
	return CFrameWnd::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}

BOOL CChildFrame::OnCommand(WPARAM wParam, LPARAM lParam)
{
	m_wndView.OnCommand(wParam, lParam);
	return CFrameWnd::OnCommand(wParam, lParam);
}
