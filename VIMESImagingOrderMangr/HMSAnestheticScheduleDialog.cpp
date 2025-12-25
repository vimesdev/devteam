#include ".\HMSAnestheticScheduleDialog.h"

CHMSAnestheticScheduleDialog::CHMSAnestheticScheduleDialog(CWnd* pWnd)
{
}

CHMSAnestheticScheduleDialog::~CHMSAnestheticScheduleDialog(void)
{
}


void CHMSAnestheticScheduleDialog::OnCreateComponents(){
	int w = 0, h = 0;
	w = m_wndOrderList.GetWidth();
	h = m_wndOrderList.GetHeight();
	m_wndOrderList.Create(this, CRect(0, 0, w, h));
	m_wndOrder.Create(this, CRect(w, 5, w+m_wndOrder.GetWidth(), h));
	m_wndOrder.m_wndOrderList =&m_wndOrderList;
	m_wndOrderList.m_wndOrder = &m_wndOrder;
}

void CHMSAnestheticScheduleDialog::OnInitializeComponents(){
	
	
}

BEGIN_MESSAGE_MAP(CHMSAnestheticScheduleDialog, CGuiDialog)
	ON_WM_SIZE()
END_MESSAGE_MAP()

void CHMSAnestheticScheduleDialog::OnSize(UINT nType, int cx, int cy)
{
	CGuiDialog::OnSize(nType, cx, cy);
	CRect rect, rc;
	GetClientRect(&rect);
	rc = rect;
	rc.right = rc.left+m_wndOrderList.GetWidth();
	m_wndOrderList.MoveWindow(rc);
	rc = rect;
	rc.left += m_wndOrderList.GetWidth();
	m_wndOrder.MoveWindow(rc);
	// TODO: Add your message handler code here
}
