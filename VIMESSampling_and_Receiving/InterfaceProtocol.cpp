#include ".\interfaceprotocol.h"

CInterfaceProtocol::CInterfaceProtocol(int nProtocolType, LPCTSTR lpszMachine): 
m_nProtocolType(nProtocolType), m_szMachine(lpszMachine)
{
}

CInterfaceProtocol::~CInterfaceProtocol(void)
{
}
