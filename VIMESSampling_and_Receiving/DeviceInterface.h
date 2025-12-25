#ifndef DEVICEINTERFACE_H
#define DEVICEINTERFACE_H
#include "afxwin.h"
#include "CommPort.h"
#include "afxtempl.h"
#include "InterfaceProtocol.h"


//  Dec oct	hexa bin	code  desc
//#define	NULL 0x00	// 000 000 000 00000000 NUL (Null char.)
#define	SOH	0x01	// 001 001 001 00000001 SOH (Start of Header)
#define	STX	0x02	// 002 002 002 00000010 STX (Start of Text)
#define	ETX	0x03	// 003 003 003 00000011 ETX (End of Text)
#define	EOT	0x04	// 004 004 004 00000100 EOT (End of Transmission)
#define	ENQ	0x05	// 005 005 005 00000101 ENQ (Enquiry)
#define	ACK	0x06	// 006 006 006 00000110 ACK (Acknowledgment)
#define	BELL0x07	// 007 007 007 00000111 BEL (Bell)
#define	BS	0x08	// 008 010 008 00001000 BS  (Backspace)
#define	HT	0x09	// 009 011 009 00001001 HT  (Horizontal Tab)
#define	LF	0x0A	 // 010 012 00A 00001010 LF  (Line Feed)
#define	VT	0x0B	 // 011 013 00B 00001011 VT  (Vertical Tab)
#define	FF	0x0C	 // 012 014 00C 00001100 FF  (Form Feed)
#define	CR	0x0D	 // 013 015 00D 00001101 CR  (Carriage Return)
#define SO	0x0E	 // 014  016 00E 00001110 SO  (Shift Out)
#define SI	0x0F	 // 015 017 00F 00001111 SI  (Shift In)
#define DLE	0x10	 // 016 020 010 00010000 DLE (Data Link Escape)
#define DC1	0x11	 // 017 021 011 00010001 DC1 (XON)(Device Control 1)
#define DC2	0x12	 // 018 022 012 00010010 DC2 (Device Control 2)
#define DC3	0x13	 // 019 023 013 00010011 DC3 (XOFF)(Device Control 3)
#define DC4	0x14	 // 020 024 014 00010100 DC4 (Device Control 4)
#define NAK	0x15	 // 021 025 015 00010101 NAK (Negative Acknowledgement)
#define SYN	0x16	 // 022 026 016 00010110 SYN (Synchronous Idle)
#define ETB	0x17	 // 023 027 017 00010111 ETB (End of Trans. Block)
#define CAN	0x18	 // 024 030 018 00011000 CAN (Cancel)
#define EM	0x19	 // 025 031 019 00011001 EM  (End of Medium)
#define SUB	0x1A	 // 026 032 01A 00011010 SUB (Substitute)
#define ESC	0x1B	 // 027 033 01B 00011011 ESC (Escape)
#define FC	0x1C	 // 028 034 01C 00011100 FS  (File Separator)
#define GS	0x1D	 // 029 035 01D 00011101 GS  (Group Separator)
#define RS	0x1E	 // 030 036 01E 00011110 RS  (Record Separator)
#define US	0x1F	 // 031 037 01F 00011111 US  (Unit Separator)
#define SP	0x20	 // 032 040 020 00100000 SP  (Space)


#define		TAG_BEGIN		0x001
#define		TAG_HEADER		0x002
#define		TAG_PATIENT		0x004
#define		TAG_ORDER		0x008
#define		TAG_RESULT		0x010
#define		TAG_TERMINATE	0x020
#define		TAG_COMMENT		0x040
#define		TAG_EXTENDED	0x080
#define		TAG_QUERY		0x100
#define		TAG_END			0x200
#define		TAG_ENDFILE		0x400
#define		TAG_SEPERATOR	0x800

#define		TRANSMITTYPE_UNIDIRECTIONAL	1
#define		TRANSMITTYPE_BIDIRECTIONAL	2

#define	PROTOCOL_ASTM		1
#define	PROTOCOL_BINARY		2
#define	PROTOCOL_SEPARATOR	3
#define	PROTOCOL_AU			4
#define	PROTOCOL_ADVIAD		5
#define	PROTOCOL_CD			6
#define	PROTOCOL_CELLDYN	7
#define	PROTOCOL_HITACHI	8
#define	PROTOCOL_MTX		9
#define	PROTOCOL_NUCLEUS	10
#define	PROTOCOL_SYSMEX		11
#define	PROTOCOL_TEST1		12
#define	PROTOCOL_TOSOH1		13
#define	PROTOCOL_URISCAN	14
#define	PROTOCOL_YNSTAR		15
#define	PROTOCOL_ABXARGOS	16


const TCHAR PREFERENCES_KEY[] = _T("Software\\VIMES\\PortConfig");

void _debug(TCHAR *fmt, ...);

typedef struct tagPATIENTINFO{
	CString	szPID;
	CString szName;
	CString szAge;
	CString	szSex;
	int		nTray;
	int		nCup;
}PATIENTINFO;

typedef struct tagORDERINFO{
		CString szOrderID;
		CString szOrderDate;
		CString szSpecimenID;
}ORDERINFO;

typedef struct tagRESULTINFO{
		CString	szTestID;
		CString	szTestName;
		CString	szResult;
		CString	szResultType;
		int		nLength;
}RESULTINFO;

typedef struct tagFIELDINFO{
	CString	szType;
	TCHAR	chSep;
	CString	szName;
	CString	szValue;
	int		nLength;
}FIELDINFO;


class CDeviceInterface: public CCommPort{
protected:
	TCHAR		GetLRC(LPCTSTR lpszBuffer, int nLength);
public:
	int			m_nInstID;
	CString		m_szMachine;
//Patient Information
	CString		m_szSID;
	CString		m_szPID;
	CString		m_szName;
	CString		m_szAge;
	CString		m_szBirthDate;
	CString		m_szSex;
	int			m_nTray;
	int			m_nCup;
	int			m_nRackNo;
	long		m_nOrderID;
	long		m_nRefID;
	CString		m_szResultDate;
	CString		m_szPName;
	int			m_nIndex;
	

	int		m_nPosition;
//Com port information
	DWORD	m_dwState;
	DWORD	m_dwBaudrate;
	int		m_nDataBits;
	int		m_nStopBits;
	int		m_nParity;
	int		m_nFlowControl;
	CString	m_szPortName;

//Machine Information
	int		m_nMode; //1: Unidirection(1 chieu), 2: Bidirection(2 chieu)
	int		m_nFlags;
	int		m_nFieldIndex;
	TCHAR	m_chSep;
	int		m_nProtocolType; //1: ASTM, 2: Seperator, 3: Binary
	bool	m_bSendToken;
	
	CString	m_szBeginTransmission;
	CString	m_szHeaderInfo;
	CString	m_szPatientInfo;
	CString	m_szOrderInfo;
	CString	m_szResultInfo;
	CString	m_szRequestInfo;
	CString	m_szTerminateInfo;
	CString	m_szEndTransmission;
	CString	m_szSeperator;
	CString	m_szInitializeData;
	CString	m_szTransferMessage;
	CString	m_szData;
	CString	m_szLine;

//Define for Binary and Seperator;
	
	CString	m_szHeaderRecord;
	CString	m_szPatientRecord;
	CString	m_szOrderRecord;
	CString	m_szResultRecord;
	CString	m_szCommentRecord;
	CString	m_szExtendedRecord;
	CString	m_szRequestRecord;
	CString	m_szTrailerRecord;

	CString	m_szHeaderRecordUp;
	CString	m_szPatientRecordUp;
	CString	m_szOrderRecordUp;
	CString	m_szResultRecordUp;
	CString	m_szCommentRecordUp;
	CString	m_szExtendedRecordUp;
	CString	m_szRequestRecordUp;
	CString	m_szTrailerRecordUp;
	
	
	
	CArray<FIELDINFO, FIELDINFO&> m_HeaderInfo;
	CArray<FIELDINFO, FIELDINFO&> m_PatientInfo;
	CArray<FIELDINFO, FIELDINFO&> m_OrderInfo;
	CArray<FIELDINFO, FIELDINFO&> m_ResultInfo;
	CArray<FIELDINFO, FIELDINFO&> m_QueryInfo;
	CArray<FIELDINFO, FIELDINFO&> m_TerminateInfo;

	CArray<PATIENTINFO, PATIENTINFO&>	m_arrayPatient;
	CArray<ORDERINFO, ORDERINFO&>		m_arrayOrder;
	CArray<RESULTINFO, RESULTINFO&>		m_arrayResult;
	CStringArray						m_arrayUploadData;
	CStringArray						m_arrayRequest;

	CString	m_szTestType;
	CWnd*	m_pMainWnd;
	void	TestMain();
	CDeviceInterface(CWnd *pMainWnd);
	~CDeviceInterface();
	BOOL	Open();
	void	SetMachine(LPCTSTR lpszMachine);
	void	SetSaveLog(bool bSave);
	BOOL	LoadSettings();
	BOOL	SaveSettings();
	void	OnRxChar( DWORD dwCount );
	void	ParseData(LPCTSTR lpszData);
	void	ParseASTMData(LPCTSTR lpszData);
	TCHAR	GetSeperator();
	void	DownloadData(LPCTSTR lpszData);
	void	UploadData();
	void	SendRequest();
	void	InitializeData();
	long	AddRecord(long nSIP);

	void	AddTemplateFieldInfo(int nType, LPCTSTR lpszString);
	void	AddFieldInfo(int nType, TCHAR chSeperator, LPCTSTR lpszName, LPCTSTR lpszValue, int nLength=0);
	void	AddFieldInfo(LPCTSTR lpszName, int nLength);

	long		OnAddPatient();
	int		OnAddResult(LPCTSTR lpszTestID, LPCTSTR lpszResult, LPCTSTR lpszComment);
	void	OnSyncData();
	int		OnProcessRequest();
	int		OnSend();
	int		OnInitializeData();
	void	OnTimeOut();
	int		OnReceive(LPCTSTR lpszData);
	void	receive_ASTM(LPCTSTR lpszData);
	void	receive_AU(LPCTSTR lpszData);
	void	receive_ADVIAD(LPCTSTR lpszData);
	void	receive_CD(LPCTSTR lpszData);
	void	receive_CELLDYN(LPCTSTR lpszData);
	void	receive_HITACHI(LPCTSTR lpszData);
	void	receive_MTX(LPCTSTR lpszData);
	void	receive_NUCLEUS(LPCTSTR lpszData);
	void	receive_SYSMEX(LPCTSTR lpszData);
	void	receive_TEST1(LPCTSTR lpszData);
	void	receive_TOSOH1(LPCTSTR lpszData);
	void	receive_URISCAN(LPCTSTR lpszData);
	void	receive_YNSTAR(LPCTSTR lpszData);
	void	receive_ABXARGOS(LPCTSTR lpszData);


	void	send_ASTM();
	void	send_AU();
	void	send_ADVIAD();
	void	send_CD();
	void	send_CELLDYN();
	void	send_HITACHI();
	void	send_MTX();
	void	send_NUCLEUS();
	void	send_SYSMEX();
	void	send_TEST1();
	void	send_TOSOH1();
	void	send_URISCAN();
	void	send_YNSTAR();
	void	send_ABXARGOS();

};


#endif