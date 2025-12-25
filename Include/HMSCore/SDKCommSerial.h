#ifndef CSDKCommSerial_H
#define CSDKCommSerial_H

#include <queue>
#include <afxmt.h>

#include "CommDefs.h"
#include <string>

#define SIZE_INQ     1152
#define SIZE_OUTQ    2048
#define MAX_READSIZE 80L


#define WM_MODEM_READ_EVNT (WM_USER + 1001)
#define WM_MODEM_DOWNLOAD (WM_USER + 1002)
#define WM_MODEM_UPLOAD (WM_USER + 1003)
#define WM_MODEM_RUNORDER (WM_USER + 1004)
#define WM_MODEM_PERFORMORDER (WM_USER + 1005)



DWORD  WINAPI CommReadThread(void *pvData);
DWORD  WINAPI CommWriteThread(void *pvData);

#define WM_RECEIVE_TEXT RegisterWindowMessage(_T("WM_RECEIVE_TEXT"))

class CSDKCommSerial
{
protected:
	int		m_nParity;
	int		m_nStopBits;
	int		m_nFlowControl;
	DWORD	m_dwBaudrate;
	int		m_nDataBits;
	int		m_nHanshaking;
	bool	m_bLog;
	int		PortDeactivate();

	CWnd*	m_pMainWnd;
public:
	
	LONG volatile	m_nCount;

	CSDKCommSerial();
	virtual ~CSDKCommSerial(void);
	void	Close(void);
	int		Write(const char* sBuffer, int nLength);
	int		SendBuffer(const char* sBuffer, int nLength);
	void	ExecuteNextCommand(void);

	BOOL	Open(CString szPort);
	BOOL	StartThreads(void);
	BOOL	Initialize(CWnd *pWnd);
	BOOL	PortConfigure(void);
	void	Settings(DWORD dwBaudrate, int nDatabit, int nPartity, int nStopbit);
	BOOL	IsConnected();
	void	Lock();
	void	UnLock();

	long	GetBaudrate();
	int		GetDataBits();
	int		GetStopBits();
	int		GetParity();
	int		GetHanshaking();
	void	EnableLog(bool bFlag);
	bool	IsEnableLog();
	virtual void DoBackground(){}
	virtual void OnExit(){}
	virtual void OnReceive(BYTE* lpBuf, int nSize){}
	virtual void OnTimeOut(){ }


	static UINT ReaderThread(LPVOID pParam);
	static UINT WriterThread(LPVOID pParam);
	DWORD	OnReaderThread();
	void	OnNotify(COM_EVENTS event);
	struct CommandItem 
	{
		std::string sATCommand; 
		int iNumberOfRetry;
	};

	std::queue<CommandItem> m_qCommandsQueue;

	BOOL	m_bConnected;


	HANDLE  m_hCOMPort;
	HANDLE m_pReaderThread;
	HANDLE m_pWriteThread;

	CCriticalSection m_cs;
	DCB originaldcb;
	OVERLAPPED m_oReaderThreadExit; 
	OVERLAPPED m_oWriterThreadExit;
	OVERLAPPED m_oWriteNextCommandInQueue;
	COMMTIMEOUTS originalcommtimeouts;


	//Define commstd
	HANDLE  m_hComstdThread;         // Thread to handle ongoing activity
	int     m_fHaltThread;           // To control when thread shuts down
    // Data access control
    CRITICAL_SECTION m_csect;        // To synchronize access to driver vars.
    HANDLE  m_ahEvent[EVENT_COUNT];  // To control scheduling
// Control fields for receiving
    int     m_nRBufrSize;            // Size of receive buffer
    BYTE   *m_pbBufrStart;           // Address of receive buffer
    BYTE   *m_pbBufrEnd;
    BYTE   *m_pbReadEnd;             // Where read thread left off
    BYTE   *m_pbComStart;            // Marks area being unloaded by main Com
    BYTE   *m_pbComEnd;
    int     m_fBufrFull;             // True when driver buffers are full
    int     m_fBufrEmpty;            // True when driver buffers are empty

    // Control fields for sending
    DWORD   m_dwBytesToSend;          // Number of bytes pending for write
    DWORD   m_dwSndOffset;            // Offset into send buffer for write
    BYTE   *m_pbSndBufr;              // Buffer used by pending write calls


	int      m_fBreakSignalOn;       // TRUE while sending break signal
    int      m_fNotifyRcv;           // TRUE if driver should send notification
    DWORD    m_dwEventMask;          // Mask used in Set/GetCommEventmask
    int      m_fSending;             // TRUE if we've sent a buffer of data
    long     m_lSndTimer;            // started when we issue a WriteComm
    long     m_lSndLimit;            // amt. of time to wait for send
    long     m_lSndStuck;            // amt. of time we've been waiting for
                                   //   handshaking
	OVERLAPPED m_stWriteOv;



	int RcvRefill();
	int RcvClear();
	int SndBufrSend(void *pvBufr, int  nSize);
	int SndBufrIsBusy();
	int SndBufrQuery(unsigned *pafStatus,long *plHandshakeDelay);
	int SndBufrClear();
	BOOL WriteString(char* lpszString, int nLength);
	void	Invoke(int nTimeout = 500);
};

DWORD  WINAPI CSDKCommSerialThread(void *pvData);

#endif



