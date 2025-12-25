#ifndef SOCKETSERVER_H
#define SOCKETSERVER_H

#include "Define.h"
#include "string.h"
#include "vector"

class SocketConnection;

class SocketServer{
public:
	SocketServer();
	~SocketServer();

	int InitSockets();
	int UninitSockets();
	void LoadConfig();

	bool Start(int nPort);
	bool Start();
	void Stop();

	bool SetServerPort(int nPort);
	int	 GetServerPort();
	char* GetDataDir();

	void AddClientSocket(SocketConnection* socket);
	void RemoveClientSocket(SocketConnection* socket);
	void KillConnections();
  	bool IsListening() const { return m_bRunning; };
	SocketConnection* Accept(SOCKET_HANDLE sock);
	int 	RegisterServer(int argc, char** argv);
	void 	ProcessClient(SocketConnection *socket);

protected:
	int				StreamServerPort(int family, char *hostName, int portNumber, SOCKET_HANDLE ListenSocket[], int MaxListen);
private:
	int		m_nPort;
	bool	m_bRunning;
	char	m_szDataDir[254];
	char	m_szRegistedKey[254];
	std::vector<SocketConnection*> m_ClientSockets;
};

#endif
