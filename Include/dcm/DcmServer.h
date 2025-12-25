#ifndef DCMSERVER_H
#define DCMSERVER_H
#include "DcmUtils.h"
class DCM_DLLEXPORT DcmServer
{
	std::string		m_peer;
    unsigned int	m_port;
	std::string		m_peerTitle;
	std::string		m_ourTitle;
    unsigned int	m_maxReceivePDULength;
    unsigned int	m_repeatCount;
    bool		    m_abortAssociation;
    unsigned int	m_numXferSyntaxes;
    unsigned int	m_numPresentationCtx;
public:
	DcmServer(void);
	~DcmServer(void);
	int EchoSCU(LPCTSTR lpszCmdLine);
};

#endif
