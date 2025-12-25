#ifndef POSCOMM_H
#define POSCOMM_H
#include "sdkcommserial.h"
#include "string"
class CPOSComm :
	public CSDKCommSerial
{
protected:
	std::string	m_szData;
public:

	CPOSComm(void);
	~CPOSComm(void);
	void OnReceive(BYTE* lpBuf, int nSize);
};

#endif
