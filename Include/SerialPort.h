#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <queue>
#include <afxwin.h>
#include <afxmt.h>
#include <string>

class AFX_EXT_CLASS CSerialPort
{
public:
	CSerialPort();
	virtual ~CSerialPort(void);
	void ShutDown(void);
	void WriteMessage(std::string sBuffer);
	void Write(const char* buffer);
	void Write(const wchar_t* buffer);
	void ExecuteNextCommand(void);

	BOOL Open(CString szPort);
	BOOL IsOpen();
	BOOL StartThreads(void);
	BOOL SetPortSettings(void);
	virtual void OnReceive(char* szMsg, DWORD dwSize);
protected:
	
private:

	static UINT ReaderThread(LPVOID pParam);
	static UINT WriterThread(LPVOID pParam);

	struct CommandItem 
	{
		std::string sATCommand; 
		int iNumberOfRetry;
	};

	BOOL m_bIsOpen;

	HANDLE  m_hCOMPort;
	HANDLE m_pReaderThread;
	HANDLE m_pWriteThread;

	CCriticalSection m_cs;

	DCB originaldcb;

	OVERLAPPED m_oReaderThreadExit; 
	OVERLAPPED m_oWriterThreadExit;
	OVERLAPPED m_oWriteNextCommandInQueue;

	COMMTIMEOUTS originalcommtimeouts;

	std::queue<CommandItem> m_qCommandsQueue;

};

#endif