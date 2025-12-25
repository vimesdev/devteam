#ifndef DB_H
#define DB_H
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(c) VIETNAM MEDICAL SOFTWARE JOINT STOCK COMPANY. 2008-2010.							  
//	All rights reserved.
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	hayhv@vimes.com.vn or hayhv@yahoo.com
//	http://www.vimes.com.vn
//
//	Ban quy cua CONG TY CO PHAN PHAN MEM Y TE VIET NAM (VIMES).
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh (GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <afxwin.h>
#include <afxtempl.h>
#include <string>

class odbc;
#ifndef DBTYPE_ODBC
#define DBTYPE_NONE		0
#define DBTYPE_PGSQL	1
#define DBTYPE_ORACLE	2
#define DBTYPE_MSSQL	3
#define	DBTYPE_MYSQL	4
#define DBTYPE_SQLITE	5
#define DBTYPE_ACCESS	6
#define DBTYPE_FIREBIRD	7
#define DBTYPE_SYBASE	8
#define DBTYPE_ODBC		9
#endif //DBTYPE

class odbc;
class odbcbinder;


class AFX_EXT_CLASS CDb
{
protected:
	odbc*	m_pODBC;
	bool	m_bAutoDestroy;
public:
	CDb(void);
	virtual ~CDb(void);
	void	Clone(const CDb* pDb);

	virtual void	Init(const char* host, int port, int backend=DBTYPE_PGSQL);
	virtual bool	Open(const char* dbname, const char* username, const char* password, int method=0);
	virtual void	Init(const wchar_t* host, int port, int backend=DBTYPE_PGSQL);
	virtual bool	Open(const wchar_t* dbname, const wchar_t* username, const wchar_t* password, int method=0);
	virtual bool	Reopen();
	virtual bool	IsOpen();
	virtual void	Close();
	virtual bool	Reconnect(){ return true;}
	virtual int		ExecSQL(const char* szSQL, odbcbinder* binder=NULL);
	virtual int		ExecSQL(const wchar_t* szSQL, odbcbinder* binder=NULL);
	virtual CString		ExecDML(const char* szSQL, odbcbinder* binder=NULL);
	virtual CString		ExecDML(const wchar_t* szSQL,  odbcbinder* binder=NULL);
	virtual void*	GetDbHandle();
	virtual odbc*	GetODBC();
	virtual odbc*	GetDbReplication();
	
	virtual int		GetBackend();
	virtual void	SetHostname(const char* lpszHostname);
	virtual void	SetHostname(const wchar_t* lpszHostname);
	virtual void	SetServerPort(int nPort);
	virtual void	SetDatabaseName(const char* lpszDatabase);
	virtual void	SetDatabaseName(const wchar_t* lpszDatabase);
	virtual void	SetUserName(const char* lpszUser);
	virtual void	SetUserName(const wchar_t* lpszUser);
	virtual void	SetPassword(const char* lpszPassword);
	virtual void	SetPassword(const wchar_t* lpszPassword);
	virtual void	SetConnectTimeout(int nTimeout);
	virtual void	SetSSLMode(bool nMode);
	virtual void	SetDebug(bool bDebug=true);

	virtual const char*	GetHostname();
	virtual const char*	GetDatabaseName();
	virtual const char*	GetUsername();
	virtual const char*	GetPassword();
	
	virtual unsigned int GetServerPort();
	virtual unsigned int GetConnectTimeout();
	virtual bool	GetSSLMode();
	virtual bool	HasDebug();


	virtual bool	UploadFile(const char* lpszName, const char* szFileName);
	virtual bool	DownloadFile(const char* lpszName, const char* szFileName);
	virtual bool	UnlinkFile(const char* szName);
	virtual bool	UploadFile(const wchar_t* lpszName, const wchar_t* szFileName);
	virtual bool	DownloadFile(const wchar_t* lpszName, const wchar_t* szFileName);
	virtual bool	UnlinkFile(const wchar_t* szName);

	virtual size_t	WriteLob(const char* uid, std::string strLob);
	virtual size_t	ReadLob(const char* uid, std::string& strLob);
	virtual bool	DeleteLob(const char* uid);
	virtual size_t	WriteLob(const wchar_t* uid, std::wstring strLob);
	virtual size_t	ReadLob(const wchar_t* uid, std::wstring& strLob);
	virtual bool	DeleteLob(const wchar_t* uid);
	

	virtual const char*	GetClientEncoding();
	virtual void	SetClientEncoding(const char* encode);
	virtual int		RegisterReplications(const char* lpszHost);
	virtual void	SetMater(bool bFlags=true);
	virtual bool	IsMaster();
	virtual void	SetBusy(bool bFlags);
	virtual bool	IsBusy();
	virtual bool	BeginTransaction();
	virtual bool	CommitTransaction();
	virtual bool	RollbackTransaction();
	CString			GetSystemDate();
	CString			GetSystemTime();
	CString			GetStringValue();
	int				GetIntValue();
	bool			Ping();
};

void testdb();
#endif
