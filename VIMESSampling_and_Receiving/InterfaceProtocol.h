#ifndef INTERFACEPROTOCOL_H
#define INTERFACEPROTOCOL_H
#include "afxwin.h"
class CInterfaceProtocol
{
public:
	CString		m_szMachine;
	CString		m_szSID;
	CString		m_szPID;
	CString		m_szName;
	CString		m_szAge;
	CString		m_szBirthDate;
	CString		m_szSex;
	int			m_nTray;
	int			m_nCup;
	int			m_nRackNo;
	int			m_nProtocolType;
	CInterfaceProtocol(int nProtocolType, LPCTSTR lpszMachine);
	~CInterfaceProtocol(void);
	virtual int		OnReceive(LPCTSTR lpszData){ return 0;};
	virtual int		OnProcessRequest(){ return 0;};
	virtual int		OnSend(){return 0;};
	virtual long	OnAddPatient(){return 0;};
	virtual int		OnAddResult(){return 0;};
};

#endif