#ifndef STORATEBIN_H
#define STORAGEBIN_H
#include <afxtempl.h>
#include <afxinet.h>

class CNetStorageBin
{
protected:
	CFtpConnection*	m_pFptConnection;
public:
	CArray<int, int> m_Sizes;
	CArray<BYTE*, BYTE*> m_Buffers;

	CNetStorageBin(void);
	~CNetStorageBin(void);
	void SetConnection(LPCTSTR lpszHost, LPCTSTR lpszUserName, LPCTSTR lpszPassword);

	CString	m_szUserName;
	CString	m_szPassword;
	CString	m_szHost;
	int		m_nPort;
	CString	m_szFileName;
	CString m_szType;
	CString m_szName;
	CString	m_szValue;
	CString	m_szVersion;
	CString	m_szDescription;
	CString	m_szDate;
	int		m_nCount;
	void	Add(BYTE* buffer, int nSize);
	int		Insert(int nIndex, BYTE* buffer, int size);
	void	Remove(int nIndex);
	bool	Download();
	bool	Upload();
	
};

#endif