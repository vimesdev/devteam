#ifndef POSCONNECTION_H
#define POSCONNECTION_H
#include <afxinet.h>
#include <string>
#define DEVICE_ACTIVE		1
#define DEVICE_PAYMENT		2


#define URL_CUSTOMERINFO	_T("api/v1/retrieveCustomer")
#define URL_ACTIVECARD		_T("api/v1/activateCard")
#define URL_GETSESSIONCODE	_T("api/v1/getDeviceSessionCode")
#define URL_PAYMENT_INVOKE	_T("api/v1/invoke")
#define URL_UNPAY_INVOKE	_T("api/v1/invoke")




typedef struct tagCUSTOMERINFO{
	CString FullName;
	long	BirthDate;
	int		Gender;
	CString IdentityNumber;
	CString GuaranteeIdentityNumber;
	CString IdentityIssuePlace;
	long IdentityNumberIssueDate;
	CString Phone;
	CString Email;
	CString Address;
	double BankNoPinLimit;
	double OnelinkNoPinLimit;
	CString WithBankCode;

}CUSTOMERINFO;


#include "POSComm.h"

#ifndef HAVE_POS
	#define HAVE_POS	1
#endif


class AFX_EXT_CLASS CPOSConnection
{
protected:
	CInternetSession* m_session;
	CString	ConvertJson(CUSTOMERINFO customer);
	CString	ToDataSignature(CUSTOMERINFO customer);
	CStringA	UTF8Encode(LPCTSTR lpszData, int nLength);
	CStringW	UTF8Decode(LPCSTR lpszData, int nLength);
	
	CString		SHA256Encode(LPCTSTR szData);

	CString			m_szData;
	

	CPOSComm		m_CommPort;


public:
	CStringArray	m_resCodes;

	CString m_szHost;
	int		m_nPort;
	CString	m_szAPIFunction;
	CString	m_szClientID;
	CString	m_szSecretKey;
	CString	m_szError;
	CString	m_szDeviceSessionCode;
	bool	m_bHasCommPort;


	CPOSConnection(void);
	~CPOSConnection(void);

	void	Init(LPCTSTR szHost, int nPort,  LPCTSTR szClientID, LPCTSTR szSecretKey);
	
	CString	GetLastError();
	CString	GetData();
	BOOL	SendRequest(LPCTSTR szURL, CString szArgs, CString& szResponse, int nType=CHttpConnection::HTTP_VERB_GET);

	CString	GetHost() { return m_szHost;} 
	int		GetPort() { return m_nPort; }
	CString	GetClientID() { return m_szClientID; }
	CString	GetSecretKey() { return m_szSecretKey; }
	
	//Ham lay ma ket noi thiet bi hien tai
	//Ma duoc lay truoc do va luu vao registry
	CString	GetDeviceSessionCode();
	CString	GetNewDeviceSessionCode(int nDeviceType = DEVICE_ACTIVE);
	
	
	//HAM PHAT HANH THE KHACH HANG
	BOOL	ActiveCard(CUSTOMERINFO customer);
	BOOL	GetCustomerInformation(CString szCardCode, CString szServiceCode, CString szIdentifyNumber);
	BOOL	Invoke(CString szDescription);
	BOOL	OnActiveNewCard(CUSTOMERINFO customer);
	BOOL	Payment(CString szTransactionID, double nAmount, CString szDescription);
	BOOL	CancelPayment(CString szTransactioID, double nAmount, CString szDescription, CString szBillCode);

	bool	ParseResponse(LPCTSTR lpszResponse);

	bool	OpenPort(LPCTSTR lpszPort);
	void	ClosePort();

};

CString Date2Number(LPCTSTR lpszDate);

#endif
