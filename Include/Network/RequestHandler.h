#ifndef REQUESTHANDLER_H
#define REQUESTHANDLER_H
#include "Define.h"

#include "SocketServer.h"
#include "SocketStream.h"

class RequestHandler
{
protected:
	SocketServer*	m_pMainServer;
	//virtual void	OnLogin(char *szUser, char* szPassword);
	//virtual void	getAuth(char* szUser, char* szPassword, char* szAuth);
public:
	RequestHandler(SocketServer *pMainServer);
	~RequestHandler();
	int 	HandleRequest(void *connection);
	


};

#endif
