#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include "afxwin.h"
#include "ListNotification.h"
#include "Db.h"
#include "afxmt.h"

static CCriticalSection _cs;


class CNotification :
	public CMiniFrameWnd
{
	bool	m_bVisible;
public:
	CString		m_szHost;
	CString		m_szPort;
	int			m_nBackend;
	CString		m_szDatabase;
	CString		m_szDbUserName;
	CString		m_szPassword;



	CDb*	m_pDb;
	CDb		m_dbNotice;
	CString m_szModuleID;
	CString	m_szUserID;

	


	CListNotification	m_wndListNotification;
	void	AddNotification(CString szOrgID, CString szUserID, CString szDate, CString szDesc, CString szType=_T(""));

	CNotification(void);
	~CNotification(void);

	void	Show();
	void	Hide();
	bool	IsVisible();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnClose();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
};

#endif
