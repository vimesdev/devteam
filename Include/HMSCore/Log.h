#ifndef LOG_H
#define LOG_H

#include <fstream>
#include <afxmt.h>

#define LOG_ERROR	-1
#define LOG_NORMAL	0
#define LOG_INFO	1
#define LOG_WARNING	2


class CLog
{
public:

	static CLog* Instance();
	static void ShutDown();
	void Log(int nCode, const char* szLog);
	void Log(int nCode, const wchar_t* szLog);

private:
	CLog(void);
	CLog(CLog const&);
	CLog& operator=(CLog const&);  

	static CLog *m_pInstance;
	static CCriticalSection m_csinit;

	std::ofstream m_LogFile;
	CCriticalSection m_cs;

};

#endif
