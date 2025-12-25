#pragma once
#include "workthread.h"

class CAutoSync :
	public CWorkThread
{
	CWnd*	m_pMain;
	
public:
	bool	m_running;
	CAutoSync(void);
	~CAutoSync(void);
	void Init(CWnd *pWnd);
	DWORD ThreadMain();

};
