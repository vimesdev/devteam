#include "StdAfx.h"
#include ".\autosync.h"

CAutoSync::CAutoSync(void)
{
	m_running = true;
}

CAutoSync::~CAutoSync(void)
{
}

void CAutoSync::Init(CWnd *pWnd)
{
	m_pMain = pWnd;
}

#include "MainFrm.h"

DWORD CAutoSync::ThreadMain(){
	static int i = 0;
	CMainFrame *pMF = (CMainFrame*) m_pMain;
	while(m_running)
	{
		pMF->AutoCheckOut();
		pMF->WriteCheckOut();
		Sleep(30000);
		
	}
	return 0;
}