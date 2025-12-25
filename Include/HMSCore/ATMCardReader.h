#ifndef ATMCARDREADER_H
#define ATMCARDREADER_H
#include "ATM.h"
#include <winscard.h>
class AFX_EXT_CLASS ATMCardReader
{
	ATM*	m_atm;   
	DWORD	m_handle;
	DWORD	m_hContext;
	bool	m_connected;
	CString	m_cardId;
	bool	m_establishContext;
	CString	m_readerName;
	CStringArray	m_readerList;
	CStringArray	m_blockList;
	CString	m_statusDesc;
	CString m_cardStatus;
	CString m_atrLabel;

	int		m_releaseFlag;                      //Flag to release 
	int		m_cardType;						    //Stores the card type
	void ATR_UID(int card_type);
	void card_Type_Identification();
	bool	m_timer;
public:
	SCARD_READERSTATE ReaderState1;
	ATMCardReader(ATM* atm);
	~ATMCardReader();
	void	SetReaderName(CString szReaderName);
	LONG	RegisterContext();
	LONG	ReleaseContext();
	void	GetListReaders();
	int		GetReaderCount();
	CString GetReaderAt(int nIndex);

	bool	Connect();
	void	Disconnect();
	bool	IsConnected();
	LONG	Transmit();
	UINT	GetState();
	UINT	GetStatus();
	UINT	GetStatusChange();
	LONG	LoadKey();
	LONG	Authenticate();
	CString ReadBlock(CString blockId);
	CString ReadBlockData();
	bool	WriteBlock(CString blockId, CString data);
	CString	GetCardId(){ return m_cardId;}
	bool	IsEnableTimer(){ return m_timer; }
	void	OnTimer();
};


#endif