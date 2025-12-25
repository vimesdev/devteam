#include ".\notification.h"
#include "Record.h"
#include "GuiUtils.h"


CNotification::CNotification(void)
{
	m_pDb = NULL;
	m_bVisible = false;
}

CNotification::~CNotification(void)
{
}
BEGIN_MESSAGE_MAP(CNotification, CMiniFrameWnd)
	ON_WM_CLOSE()
	ON_WM_CREATE()
	ON_WM_SHOWWINDOW()
END_MESSAGE_MAP()

void CNotification::OnClose()
{
	// TODO: Add your message handler code here and/or call default
	    //Release the Critical section
	if(m_bVisible)
	{
		CString szSQL;
//		szSQL.Format(_T("UPDATE  system_notice SET sn_pending='N' ") \
//			_T(" WHERE sn_org_id in('GL','%s') and sn_to_userid='%s' and sn_pending='Y' "), 
		szSQL.Format(_T("DELETE FROM system_notice ") \
			_T(" WHERE sn_org_id in('GL','%s') and sn_to_userid='%s' and sn_pending='Y' "), 
			m_szModuleID, m_szUserID);
		if(m_pDb) m_pDb->ExecSQL(szSQL);

		_tprintf(_T("\r\nClose"));
		
		ShowWindow(SW_HIDE);
		m_bVisible = false;
		
	}
	
//	CMiniFrameWnd::OnClose();
}

BOOL CNotification::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN)
	{
		if(pMsg->wParam == VK_ESCAPE)
		{
			OnClose();
			return TRUE;
		}
	}
	return CMiniFrameWnd::PreTranslateMessage(pMsg);
}

int CNotification::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMiniFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
/*
	if(m_pDb == NULL)
	{
		m_dbNotice.Init(m_szHost, str2int(m_szPort), m_nBackend);
		
		if(!m_dbNotice.Open(m_szDatabase, m_szDbUserName, m_szPassword)){
			m_dbNotice.Close();
			return false;
		}
		m_pDb = &m_dbNotice;
	}

*/

	// TODO:  Add your specialized creation code here
	SetWindowFont(this, GetFaceName(), GetFaceSize());
	CRect rect;
	GetClientRect(&rect);
	rect.bottom -= 50;
	m_wndListNotification.Create(this, rect.left, rect.top, rect.Width(), rect.Height());
	SetWindowFont(&m_wndListNotification, GetFaceName(), GetFaceSize());

//	AddNotification(_T("PM"), _T("Admin"), _T("2014-01-01 11:00"), _T("adasdas"));
	return 0;
}



void CNotification::AddNotification(CString szOrgID, CString szUserID, CString szDate, CString szDesc, CString szType)
{
	CString szText;
	szText.Format(_T("<font color='#C00000'><b>[%s]</b><i>%s</i></font>"), szUserID, szDate);
	szText.AppendFormat(_T("<br>%s"), szDesc);
	m_wndListNotification.AddString(szText);

}
void CNotification::OnShowWindow(BOOL bShow, UINT nStatus)
{
	_tprintf(_T("\r\n%d"), bShow);
	
	CMiniFrameWnd::OnShowWindow(bShow, nStatus);
	
	// TODO: Add your message handler code here
}


void CNotification::Show()
{
	if(m_pDb == NULL)
		return;

	CRecord rs(m_pDb);
	CString szSQL, szNotice, szEvent;

	szSQL.Format(_T("SELECT * FROM system_notice ") \
		_T("WHERE sn_org_id IN('GL','%s') and sn_pending='Y' and sn_to_userid='%s' ") \
		_T("ORDER BY sn_createddate "), m_szModuleID, m_szUserID);
	rs.ExecSQL(szSQL);
	m_wndListNotification.ResetContent();
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("sn_event"), szEvent);
		rs.GetValue(_T("sn_notice"), szNotice);
		szEvent.AppendFormat(_T(" - %s"), szNotice);
		AddNotification(_T("PM"), rs.GetValue(_T("sn_createdby")), rs.GetValue(_T("sn_createddate")), szEvent);
		rs.MoveNext();
	}
	ShowWindow(SW_SHOW);
	UpdateWindow();
	BringWindowToTop(); 
	m_bVisible = true;
}


void CNotification::Hide()
{
	ShowWindow(SW_HIDE);
}

bool CNotification::IsVisible()
{
	return m_bVisible;
}