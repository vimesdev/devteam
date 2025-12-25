#ifndef POSCOMMDEVICE_H
#define POSCOMMDEVICE_H
#include "SerialEx.h"
#include <string>

#define WM_POS_RECV_TEXT RegisterWindowMessage(_T("WM_POS_RECV_TEXT"))

#define HAVE_POS	1

class AFX_EXT_CLASS CPOSCommDevice :
	public CSerialEx
{
public:
	CWnd *m_pWnd;

	std::string	m_szData;
	std::string	m_szLine;
	CPOSCommDevice(void);
	~CPOSCommDevice(void);
	bool	Initialize(LPCTSTR lpszComm, CWnd *pWnd);
	void	Uninitialze();

	virtual void OnEvent (EEvent eEvent, EError eError); 
	

};

#endif