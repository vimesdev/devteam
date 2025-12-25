#include <windows.h>
#include "WorkThread.h"

CWorkThread::CWorkThread(void)
{
	m_hThread	= NULL;
	m_hStop		= NULL;
	m_trdID		= NULL;
}

CWorkThread::~CWorkThread(void)
{
	Stop();
	if(m_hThread) CloseHandle(m_hThread);
	if(m_hStop)   CloseHandle(m_hStop);
}

void CWorkThread::Run()
{
	Stop();
	m_hStop	  = CreateEvent(NULL, FALSE, FALSE, NULL);
	m_hThread = CreateThread(NULL, 0, sThreadProc, (LPVOID) this, 0, &m_trdID);
}

void CWorkThread::Stop()
{
	if(m_hThread)
	{
		if(m_hStop)
		{
			SetEvent(m_hStop);
		}
		WaitForSingleObject(m_hThread, 3000);
		CloseHandle(m_hThread);
		m_hThread = NULL;
	}
	if(m_hStop)   CloseHandle(m_hStop);
	m_hStop = NULL;
}

DWORD WINAPI CWorkThread::sThreadProc( LPVOID lpParameter )
{
	CWorkThread* pThis = (CWorkThread*) lpParameter;
	return pThis->ThreadMain();
}

BOOL CWorkThread::WaitForStop( DWORD ms )
{
	if(WaitForSingleObject(m_hStop, ms) != WAIT_TIMEOUT)
	{
		return TRUE;
	}
	return FALSE;
}

void CWorkThread::postMessage( UINT Msg, WPARAM wParam, LPARAM lParam )
{
	if(m_hThread)
	{
		PostThreadMessage(m_trdID, Msg, wParam, lParam);
	}
}