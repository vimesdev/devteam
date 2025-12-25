#include ".\storagebin.h"

CNetStorageBin::CNetStorageBin(void)
{
	m_pFptConnection = NULL;
}

CNetStorageBin::~CNetStorageBin(void)
{
	if(m_pFptConnection) delete m_pFptConnection;
	
}

void CNetStorageBin::SetConnection(LPCTSTR lpszHost, LPCTSTR lpszUserName, LPCTSTR lpszPassword){
	m_szHost = lpszHost;
	m_szUserName = lpszUserName;
	m_szPassword = lpszPassword;
}

void CNetStorageBin::Add(BYTE* buffer, int size){
	m_Buffers.Add(buffer);
	m_Sizes.Add(size);
}


bool CNetStorageBin::Download(){
	CInternetSession sess(_T("VIMES FTP Session"));
	bool bRes = true;
	CFtpConnection* pConnect = NULL;

	try
	{
		// Request a connection to ftp.microsoft.com. Default
		// parameters mean that we'll try with username = ANONYMOUS
		// and password set to the machine name @ domain name
		pConnect = sess.GetFtpConnection(m_szHost);

		// use a file find object to enumerate files
		CFtpFileFind finder(pConnect);

		// start looping
		BOOL bWorking = finder.FindFile(_T("*"));

		while (bWorking)
		{
			bWorking = finder.FindNextFile();
		}
	}
	catch (CInternetException* pEx)
	{
		TCHAR sz[1024];
		pEx->GetErrorMessage(sz, 1024);
//		_tprintf_s(_T("ERROR!  %s\n"), sz);
		pEx->Delete();
		bRes = false;
	}

	// if the connection is open, close it
	if (pConnect != NULL) 
	{
		pConnect->Close();
		delete pConnect;
	}
	return bRes;
}

bool CNetStorageBin::Upload(){
	CInternetSession sess(_T("VIMES FTP Session"));
	bool bRes = true;
	CFtpConnection* pConnect = NULL;

	try
	{
		// Request a connection to ftp.microsoft.com. Default
		// parameters mean that we'll try with username = ANONYMOUS
		// and password set to the machine name @ domain name
		pConnect = sess.GetFtpConnection(m_szHost);

		// use a file find object to enumerate files
		CFtpFileFind finder(pConnect);

		// start looping
		BOOL bWorking = finder.FindFile(_T("*"));

		while (bWorking)
		{
			bWorking = finder.FindNextFile();
		}
	}
	catch (CInternetException* pEx)
	{
		TCHAR sz[1024];
		pEx->GetErrorMessage(sz, 1024);
//		_tprintf_s(_T("ERROR!  %s\n"), sz);
		pEx->Delete();
		bRes = false;
	}

	// if the connection is open, close it
	if (pConnect != NULL) 
	{
		pConnect->Close();
		delete pConnect;
	}
	return bRes;
}