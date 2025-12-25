#ifndef SOCKETTHREAD_H
#define SOCKETTHREAD_H

#include "Thread.h"

class SocketServer;
class SocketConnection;

class SocketThread: public Thread{
protected:
	SocketServer*	m_ServerMain;
	SocketConnection*	m_ClientConnection;

public:
	SocketThread(SocketServer* server, SocketConnection *client);
	~SocketThread();
  // Called at startup to do user initialisations
	void InitWork();
  // Called when the thread is launched to do interessting job
	void DoWork() ;
  // Called when the thread must be shutdowned to stop normal processing
	void StopWork();
  // Called after shutdown to do user cleanings
	void CleanWork();
	void ProcessData();
};

#endif
