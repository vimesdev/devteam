#ifndef DBMAP_H
#define DBMAP_H
#include <afxwin.h>
#include "Db.h"
#include "DbField.h"
#include <afxtempl.h>

class AFX_EXT_CLASS CDbfMap{
protected:
	void	Clear();
	CArray<CDbField, CDbField&> m_Fields;
	CString m_szTableName;
	CString	m_szSQL;
	bool	m_bEnableTimestamp;
	CDb*	m_pDatabase;
public:
	CDbfMap();
	~CDbfMap();
	void		EnableTimestamp(bool bFlag);

	void		SetTableName(LPCTSTR szName, CDb* pDatabase=NULL, bool bAutoAddFields=false);
	int			AddField(LPCTSTR szName, int nType, int nLength=0);
	
	CString		GetFieldName(int nID);
	int			GetFieldID(LPCTSTR szName);
	int			GetFieldType(int nID);
	int			GetFieldType(LPCTSTR szName);

	CDbField&	GetField(LPCTSTR szName);
	CDbField&	GetField(int nID);
	CDbField&	operator[](LPCTSTR szName);
	CDbField&	operator[](int nID);
	bool		SetValue(int nID, bool bVal);
	bool		SetValue(int nID, TCHAR chVal);
	bool		SetValue(int nID, int iVal);
	bool		SetValue(int nID, long lVal);
	bool		SetValue(int nID, float fVal);
	bool		SetValue(int nID, double dVal);
	bool		SetValue(int nID, LPCTSTR szVal);
	bool		SetValue(int nID, CDbField fldVal);

	bool		SetValue(LPCTSTR szName, bool bVal);
	bool		SetValue(LPCTSTR szName, TCHAR chVal);
	bool		SetValue(LPCTSTR szName, int iVal);
	bool		SetValue(LPCTSTR szName, long lVal);
	bool		SetValue(LPCTSTR szName, float fVal);
	bool		SetValue(LPCTSTR szName, double dVal);
	bool		SetValue(LPCTSTR szName, LPCTSTR szVal);
	bool		SetValue(LPCTSTR szName, CDbField fldVal);
	int			GetCount();
	CString		GetInsertSQL(LPCTSTR szExcept=NULL);
	CString		GetUpdateSQL(LPCTSTR szExcept=NULL);
	CString		FormatSQL(LPCTSTR szExcept=NULL, bool bDateFormat=false);
	int			Open(CDb *pDb, LPCTSTR lpszWhere);
	void		Test();
};


#endif
