#ifndef SOCKETCONNECTION_H
#define SOCKETCONNECTION_H

#include "Define.h"
#include "SocketStream.h"

class SocketServer;


class SocketConnection
{
protected:
	SOCKET_HANDLE 	m_sockfd;
	SOCKET_HANDLE 	m_sockNew;
	int				m_nSize;
	char			IP[16];
	char			m_szDataDir[254];
	SocketStack*	m_pStack;
	
	bool			m_bRunning;

	//Virtual functions
	virtual	int		OnLogin();
	virtual int		OnLogout();
	virtual int		OnTransmitFile();
	virtual int		OnStoreFile();
	virtual int		OnMakeDirectory();
	virtual int		OnRemoveDirectory();	
	virtual int		OnDeleteFile();
	virtual int		OnRealtime();
	virtual int		OnRebootServer();
	virtual int		OnRestartService();
public:
	SocketServer*	m_pServer;

	SocketConnection(SOCKET_HANDLE sockfd);
	~SocketConnection();
	
	SOCKET_HANDLE	Accept();
	void			Close();
	int				HandleRequest();
	const char*		GetInformation();
	bool			IsRunning();
	void			SetDataDir(char* szDir);
};

#endif
