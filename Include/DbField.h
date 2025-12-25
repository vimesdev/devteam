#ifndef DBFIELD_H
#define DBFIELD_H

#include "datetime.h"

#ifndef ODBC_TYPE_BOOLEAN

enum odbc_type {
	ODBC_TYPE_BOOLEAN = 0x00,
#define ODBC_TYPE_BOOLEAN   ODBC_TYPE_BOOLEAN
	ODBC_TYPE_SMALLINT = 0x01,
#define ODBC_TYPE_SMALLINT   ODBC_TYPE_SMALLINT
	ODBC_TYPE_INTEGER = 0x02,
#define ODBC_TYPE_INTEGER   ODBC_TYPE_INTEGER
	ODBC_TYPE_BIGINT = 0x03,
#define ODBC_TYPE_BIGINT   ODBC_TYPE_BIGINT
	ODBC_TYPE_DECIMAL = 0x07,
#define ODBC_TYPE_DECIMAL   ODBC_TYPE_DECIMAL

	ODBC_TYPE_REAL = 0x08,
#define ODBC_TYPE_REAL   ODBC_TYPE_REAL
	ODBC_TYPE_DOUBLE = 0x09,
#define ODBC_TYPE_DOUBLE   ODBC_TYPE_DOUBLE
	ODBC_TYPE_FLOAT = 0x0f,
#define ODBC_TYPE_FLOAT   ODBC_TYPE_FLOAT

	ODBC_TYPE_CHAR = 0x10,
#define ODBC_TYPE_CHAR   ODBC_TYPE_CHAR
	ODBC_TYPE_NCHAR = 0x11,
#define ODBC_TYPE_NCHAR   ODBC_TYPE_NCHAR
	ODBC_TYPE_VARCHAR = 0x12,
#define ODBC_TYPE_VARCHAR   ODBC_TYPE_VARCHAR
	ODBC_TYPE_NVARCHAR = 0x13,
#define ODBC_TYPE_NVARCHAR  ODBC_TYPE_NVARCHAR

	ODBC_TYPE_CLOB = 0x20,
#define ODBC_TYPE_CLOB   ODBC_TYPE_CLOB
	ODBC_TYPE_NCLOB = 0x21,
#define ODBC_TYPE_NCLOB   ODBC_TYPE_NCLOB
	ODBC_TYPE_XML = 0x22,
#define ODBC_TYPE_XML   ODBC_TYPE_XML

	ODBC_TYPE_BLOB = 0x2f,
#define ODBC_TYPE_BLOB   ODBC_TYPE_BLOB

	ODBC_TYPE_TIME = 0x30,
#define ODBC_TYPE_TIME   ODBC_TYPE_TIME
	ODBC_TYPE_TIMETZ = 0x31,
#define ODBC_TYPE_TIMETZ   ODBC_TYPE_TIMETZ
	ODBC_TYPE_TIMESTAMP = 0x32,
#define ODBC_TYPE_TIMESTAMP   ODBC_TYPE_TIMESTAMP
	ODBC_TYPE_TIMESTAMPTZ = 0x33,
#define ODBC_TYPE_TIMESTAMPTZ ODBC_TYPE_TIMESTAMPTZ
	ODBC_TYPE_DATE = 0x34,
#define ODBC_TYPE_DATE   ODBC_TYPE_DATE
	ODBC_TYPE_INTERVAL = 0x35,
#define ODBC_TYPE_INTERVAL   ODBC_TYPE_INTERVAL

	ODBC_TYPE_ARRAY = 0x40,
#define ODBC_TYPE_ARRAY   ODBC_TYPE_ARRAY
	ODBC_TYPE_MULTISET = 0x41,
#define ODBC_TYPE_MULTISET   ODBC_TYPE_MULTISET

	ODBC_TYPE_DATALINK = 0x50,
#define ODBC_TYPE_DATALINK   ODBC_TYPE_DATALINK

	ODBC_TYPE_UNKNOWN = 0xff
#define ODBC_TYPE_UNKNOWN   ODBC_TYPE_UNKNOWN
};

#endif 



#define dfNull			-1
#define dfBool			ODBC_TYPE_BOOLEAN
#define dfChar			ODBC_TYPE_CHAR
#define dfInteger		ODBC_TYPE_SMALLINT
#define dfLong			ODBC_TYPE_INTEGER
#define dfINT64			ODBC_TYPE_BIGINT
#define dfText			ODBC_TYPE_CLOB
#define dfFloat			ODBC_TYPE_FLOAT
#define dfDouble		ODBC_TYPE_DOUBLE
#define dfDate			ODBC_TYPE_DATE
#define dfTime			ODBC_TYPE_TIME
#define dfDateTime		ODBC_TYPE_TIMESTAMPTZ





class AFX_EXT_CLASS CDbField{
public:
	CDbField();
	CDbField(LPCTSTR szName, int nType, int nLength=0);
	CDbField(const CDbField& dbv);
	virtual ~CDbField();

	
	CDbField& operator =( const bool bVal );
	CDbField& operator =( const TCHAR chVal );
	CDbField& operator =( const short sVal );
	CDbField& operator =( const int iVal );
	CDbField& operator =( const long lVal );
	CDbField& operator =( const INT64 bigVal );
	CDbField& operator =( const float fVal );
	CDbField& operator =( const double fVal );
	CDbField& operator =( const CDate& dtVal );
	CDbField& operator =( const CTimeStamp& dtVal );
	CDbField& operator =( const CDateTime& dtVal );
	CDbField& operator =( const CString& cVal );
	CDbField& operator =( const LPCTSTR szVal );
	CDbField& operator =( const CDbField& dbv );
	bool			ToBool()	const;
	TCHAR			ToChar()	const;
	short			ToShort()	const;
	int				ToInt()		const;
	long			ToLong()	const;
	INT64			ToINT64()	const;
	float			ToFloat()	const;
	double			ToDouble()	const;
	CDate			ToDate()	const;
	CTimeStamp		ToTimeStamp() const;
	CDateTime		ToDateTime()const;
	CString			ToString()	const;


	//	Data type conversion operators

	operator	bool() const;
	operator	TCHAR() const;
	operator	short() const;
	operator	int() const;
	operator	long() const;
	operator	INT64() const;
	operator	float() const;
	operator	double() const;
	operator	CDate()	const;
	operator	CTimeStamp() const;
	operator	CDateTime() const;
	operator	LPCTSTR() const;
	operator	CString() const;
	//	Field type query methods
	bool	IsBool()	const	{ return (m_nType == dfBool); };
	bool	IsChar()	const	{ return (m_nType == dfChar); };
	bool	IsInt()		const	{ return (m_nType == dfInteger); };
	bool	IsLong()	const	{ return (m_nType == dfLong); };
	bool	IsINT64()	const	{ return (m_nType == dfINT64); };
	bool	IsFloat()	const	{ return (m_nType == dfFloat); };
	bool	IsDouble()	const	{ return (m_nType == dfDouble); };
	bool	IsNumber()	const	{ return (IsLong() || IsFloat() || IsDouble()); };
	bool	IsDate()	const	{ return (m_nType == dfDate); }
	bool	IsTimeStamp()	const	{ return (m_nType == dfTime); }
	bool	IsDateTime()	const	{ return (m_nType == dfDateTime); };
	bool	IsString()	const	{ return (m_nType == dfText); };

	//	Set the field name
	void	SetName(LPCTSTR szName);
	void	SetType(int nType);
	void	SetLength(int nLength);
	//	Get the field name
	CString	GetName()	const;
	int		GetType() const;
	int		GetLength() const;
private:
	union
	{
	  bool              m_bVal;
	  TCHAR				m_chVal;
	  short             m_iVal;
	  long              m_lVal;
	  INT64				m_bigVal;
	  float             m_fVal;
	  double            m_dblVal;
	  CDate*			m_pdate;
	  CTimeStamp*		m_ptime;
	  CDateTime*		m_pdtime;
	  CString*          m_pstring;
	};
	int			m_nType;	//	Contain the type of data
	int			m_nLength;
	TCHAR		m_szName[35];	//	Contain the field (column) name
	void	Clear();
};
/////////////////////////////////////////////////////////////////////////////
inline
CString	CDbField::GetName()	const{
	return	m_szName;
}

inline
CDbField::operator	bool() const {
	return	ToBool();
}
inline
CDbField::operator	TCHAR() const {
	return	ToChar();
}
inline
CDbField::operator	short() const {
	return	this->ToShort();
}
inline
CDbField::operator	int() const {
	return	this->ToInt();
}
inline
CDbField::operator	long() const {
	return	this->ToLong();
}

inline
CDbField::operator	INT64() const {
	return	this->ToINT64();
}


inline
CDbField::operator	float() const {
	return	this->ToFloat();
}
inline
CDbField::operator	double() const {
	return	this->ToDouble();
}
inline
CDbField::operator	CDate() const {
	return	ToDate();
}
inline
CDbField::operator	CTimeStamp() const {
	return	ToTimeStamp();
}

inline
CDbField::operator	CDateTime() const {
	return	ToDateTime();
}
inline
CDbField::operator	LPCTSTR() const {
	return	(LPCTSTR)ToString();
}

inline
CDbField::operator	CString() const {
	return	ToString();
}

#endif
