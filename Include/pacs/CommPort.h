#pragma once

// CCommPort command target
enum eParity
{   
	NoParity    = 0,
	OddParity   = 1,
    EvenParity  = 2,
    MarkParity  = 3,
    SpaceParity = 4
 };

enum eStopBits
{
	OneStopBit		= 0,
	OneFiveStopBits = 1,
	TwoStopBits		= 2
};

enum eFlowControl
{
	NoFlowControl=0,
    XonXoffFlowControl,
	Hardware
};

 
class CCommPort : public CObject
{
protected: 
	HANDLE m_hComm;
	HANDLE m_hThread;
	HANDLE m_hEventTerminate;
	volatile LONG lReqTerminate; //  
	
	static DWORD WINAPI EventHandler ( LPVOID lpParam );

public: 

	double	m_nTimeout;
	long	m_nMaxTimeout;

  enum 
  {
	COMM_SET_EVNT_MASK_ERROR = 1,
	COMM_WAIT_FOR_EVENT_ERROR = 2 
  };

public:
	CCommPort();
	CCommPort( const CString& sPortname );
	virtual ~CCommPort();
	BOOL Open ( CString sPortName, DWORD dwBaudRate = CBR_9600, BYTE bDataBits = 8, BYTE stopbit = OneStopBit, 
				BYTE parity = NoParity, BYTE fc = NoFlowControl );

	BOOL Open ( CString sPortName, CString sConfig );

	static BOOL TestOpen( CString );  
	void Close();
	BOOL IsOpen() const { return m_hComm != INVALID_HANDLE_VALUE; };
	operator HANDLE() const { return m_hComm; };

	static DWORD GetAvailablePorts ( CStringList* portList );
	virtual DWORD Read ( LPVOID lpBuf, DWORD dwCount );
	virtual DWORD Write(LPCVOID lpBuf, DWORD dwCount );
		
    BOOL GetConfig( COMMCONFIG& config);
    BOOL SetConfig( COMMCONFIG& config);
	BOOL SetState ( LPDCB dcb);
	BOOL GetState ( LPDCB dcb);

	BOOL SetTimeouts( LPCOMMTIMEOUTS lpCommTimeouts );
	BOOL GetTimeouts( LPCOMMTIMEOUTS lpCommTimeouts ); 

	BOOL Purge ( DWORD dwFlags );
	BOOL ClearWriteQueue ();
	BOOL ClearReadQueue  ();
	BOOL AbortAllRead    ();
	BOOL AbortAllWrite   ();
	BOOL Flush           ();

	BOOL TransmitChar( char cChar );
	BOOL SetBreak();
	BOOL ClearBreak();
	BOOL EscapeFunction( DWORD dwFunc );
	BOOL ClearError( LPDWORD lpErrors, LPCOMSTAT lpStat);
	BOOL GetModemStatus( LPDWORD lpModemStat );  
	BOOL GetProperties( LPCOMMPROP lpCommProp );


	BOOL  SetBaudrate   ( DWORD dwBaudRate );
	DWORD GetBaudrate   ( );
	
	BOOL SetDataBits	( BYTE bDataBits );
	BYTE GetDataBits	( );
	
	BOOL SetParity     ( BYTE  Parity );
	BOOL GetParity	   ( BYTE& Parity );

    BOOL SetStopBits   ( BYTE StopBits  );	
	BOOL GetStopBits   ( BYTE &StopBits );
	
	BOOL SetFlowControl( BYTE fc );
	
	// mask events   
	BOOL SetMask ( DWORD dwMask );
	BOOL GetMask ( DWORD& dwMask );

	virtual void OnBreak();
	virtual void OnCTS ( BOOL fCTS );
	virtual void OnDSR ( BOOL fDSR );
	virtual void OnERR ( DWORD dwError );
	virtual void OnRing( BOOL fRing );
	virtual void OnRlsd( BOOL fLSD );
	virtual void OnRxChar( DWORD dwCount );
	virtual void OnRxFlag();  
	virtual void OnTxEmpty();
	virtual void OnEventError ( DWORD dwErrCode );
	virtual void OnTimeOut();
};