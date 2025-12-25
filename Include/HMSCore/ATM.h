#ifndef ATM_H
#define ATM_H
class ATMCardReader;

extern AFX_EXT_CLASS UINT WM_ON_CARD_CONNECTED;
extern AFX_EXT_CLASS UINT WM_ON_CARD_DISCONNECT;
extern AFX_EXT_CLASS UINT WM_ON_REFRESH_DATA;
class AFX_EXT_CLASS ATMRunner
{
	HANDLE	m_hThread;
	HANDLE	m_hStop;
	DWORD	m_trdID;
	
	static DWORD WINAPI sThreadProc(LPVOID lpParameter);
public:
	ATMRunner(void);
	virtual ~ATMRunner(void);
	virtual DWORD ThreadMain() = 0;

	DWORD	getID() { return m_trdID; }
	void	Run();
	void	Stop();
	BOOL	WaitForStop(DWORD ms);
	void	postMessage(UINT Msg, WPARAM wParam, LPARAM lParam);
};



class AFX_EXT_CLASS ATM: public ATMRunner
{
public:
	bool		m_running;
	CString		m_cardActive;
	CString		m_readerName;
	ATMCardReader*	m_atmCardReader;
	CWnd*		m_pParentWnd;
	ATM(void);
	~ATM(void);
	bool	Init(CWnd* pParent);
	void	Config();
	bool	Register();
	void	UnRegister();
	CString	GetActiveCardId();

	DWORD ThreadMain();
	void	SendMessage(CString szCardId);
	void	Disconnect();
	void	OnTimer();
	ATMCardReader* GetCardReader(){ return m_atmCardReader; }
};


#endif