#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H
#include "Define.h"
#include <string>
#include "SocketStream.h"

class SocketClient
{
protected:
	SOCKET_HANDLE m_sockfd;
	struct addrinfo* m_addrinfo;
	ushort		m_nPort;
	char	m_strHost[254];
	char	m_strPassword[254];
	char	m_strLastError[254];

	bool		m_bConnected;
	int			m_iLastError;
	

	int		OnLogin(const char* username, const char* password);
	
public:
	SocketClient(void);
	~SocketClient(void);

	static int InitSockets();
	static int UninitSockets();

	bool	Connect(const char* strHost, ushort nPort);
	bool	Connect();
	void	Disconnect();
	bool	IsConnected();
	void	Close();
	void	SetServerPort(ushort nPort);
	ushort	GetServerPort();
	void	SetServerHost(const char* strHost);
	const char*	GetServerHost();
	const char*	GetDbPassword();
	const char*	GetErrorString();
	int		GetLastError();
	
	void	ClearLastError();
	bool	Login(const char* username, const char* password);
	bool	DownloadFile(const char* filename, const char* store_name);
	bool	UploadFile(const char* filename, const char* store_name);
	bool	RemoveFile(const char* filename);
	bool	RebootServer();
	bool	RestartService();
	int		SendCommand(ESOCKET cmd);
};

#endif
