#ifndef THREAD_H
#define THREAD_H

#ifdef WIN32
#include <wtypes.h>
#else //unix
#include <pthread.h>
#endif

#define MAX_WAIT_THREAD_CLOSE 3000

enum ThreadPriority
{ 
	prIdle, 
	prLower, 
	prNormal, 
	prHigher, 
	prHighest 
};

class Thread
{
public:
	Thread();
	virtual ~Thread();
	bool Start(bool bAutoDelete=false);
	void Stop();
	bool SetPriority(ThreadPriority priority);
	virtual void InitWork()=0;
	virtual void StopWork()=0;
	virtual void CleanWork()=0;
	virtual void DoWork() = 0;

  
	// Thread identity
#ifdef WIN32
	HANDLE		m_hThread;
	WORD		m_dwThread;
#else
	pthread_t	m_hThread;
	int		m_dwThread;
#endif

	bool		m_bAutoDelete;
};


#endif

