#ifndef DCMAPPLICATION_H
#define DCMAPPLICATION_H
#include "DcmUtils.h"

class DcmServer;
class DcmStudy;
class DcmSeries;
class DcmInstance;

class  DCM_DLLEXPORT DcmApplication
{
protected:
	static DcmApplication*	m_pAppInstance;

	CString		m_szLocalAET;
	CString		m_szLocalHost;
	int				m_nLocalPort;
	std::map<CString, DcmServer*>	m_vServer;
	std::vector<DcmStudy*>	m_vStudy;
	void		Cleanup();
public:
	DcmApplication(void);
	~DcmApplication(void);
	static DcmApplication*	GetInstance();

	void		AddServer(LPCTSTR lpszName, LPCTSTR lpszAET, LPCTSTR lpszHost, int nPort);
	DcmServer*	FindServer(LPCTSTR lpszServerName);
	int			EchoSCU(LPCTSTR lpszCmd);
};



#endif
