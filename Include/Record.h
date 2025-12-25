#ifndef RECORDSET_H
#define RECORDSET_H

#include "Db.h"

class odbcres;


class AFX_EXT_CLASS CRecord
{
	odbcres*	m_odbcRes;

public:
	CRecord(CDb* pDb);
	virtual ~CRecord();
	virtual long	ExecSQL(LPCTSTR szSQL);
	virtual void	Clear();
	virtual void    MoveFirst();
    virtual void    MoveLast();
    virtual void    MoveNext();
    virtual void    MovePrev();
    virtual void    Move(int nIndex);
    virtual bool    IsEOF();
    virtual int     GetFieldCount();
    virtual int     GetRecordCount();
	
	virtual CString GetFieldName(int nIndex);
    virtual long	GetFieldLength(int nIndex);
	virtual int		GetFieldPrecision(int nIndex);
	virtual int		GetFieldType(int nIndex);
	virtual int		GetFieldIndex(LPCTSTR lpszFieldName);
	CString GetValue(int nIndex);
    CString GetValue(LPCTSTR szFieldName);
	virtual void	GetValue(LPCTSTR szFieldName, bool& retVal);
	virtual void	GetValue(LPCTSTR szFieldName, TCHAR& retVal);
	virtual void	GetValue(LPCTSTR szFieldName, short& retVal);
	void	GetValue(LPCTSTR szFieldName, int& retVal);
	virtual void	GetValue(LPCTSTR szFieldName, long& retVal);
	virtual void	GetValue(LPCTSTR szFieldName, float& retVal);
	virtual void	GetValue(LPCTSTR szFieldName, double& retVal);
	virtual void	GetValue(LPCTSTR szFieldName, CString& retVal);
	
	virtual CString	GetStringValue();
    virtual long	GetIntValue();
	virtual double	GetDoubleValue();

	std::string GetBlob(LPCTSTR lpszFieldName);
	size_t		WriteBlob(LPCTSTR lpszFieldName, std::string data);



};

#endif
