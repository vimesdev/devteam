#ifndef DATETIME_H
#define DATETIME_H
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) VIETNAM MEDICAL SOFTWARE JOINT STOCK COMPANY. 2008-2010.							  
//	All rights reserved.
//	This program is protected by Viet Nam and international treaties.  
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

typedef unsigned int uint;

#define yyyymmdd	0x001
#define ddmmyyyy	0x002
#define mmddyyyy	0x004
#define mmddyy		0x008
#define ddmmyy		0x010
#define yymmdd		0x020
#define hhmmssms	0x100
#define hhmmss		0x200
#define hhmm		0x400

static const uint FIRST_DAY	= 2361222;	// Julian day for 1752/09/14


class AFX_EXT_CLASS CTimeStamp{
protected:
	unsigned long m_ts;
public:
	
	CTimeStamp();
	CTimeStamp(long nTimeStamp);
	CTimeStamp(int nHour, int nMinite, int nSecond, int nMilisecond=0);
	CTimeStamp(LPCTSTR szTime);
	~CTimeStamp();
	bool	ParseTime(CString szTime);
	void	SetTime(int nHour, int nMinite, int nSecond, int nMilisecond=0);
	void	SetNull();
	bool	IsNull() const;		
	bool	IsValid() const;		
	int		GetHour() const;		//0..23
	int		GetMinute() const;		//0..59
	int		GetSecond() const;		//0..59
	int		GetMilisecond() const;	//0.999
	unsigned long	GetTimeStamp() const { return m_ts;}
	CTimeStamp GetCurrentTime();
	CString GetTime(int nFormat=hhmm) const;
    bool   operator==( const CTimeStamp &ts ) const;
    bool   operator!=( const CTimeStamp &ts ) const;
    bool   operator<( const CTimeStamp &ts )	const;
    bool   operator<=( const CTimeStamp &ts ) const;
    bool   operator>( const CTimeStamp &ts )	const;
    bool   operator>=( const CTimeStamp &ts ) const;
	const CTimeStamp& operator +=(long inc);
	const CTimeStamp& operator -=(long dec);
	const CTimeStamp& operator --();      // prefix operator
	const CTimeStamp& operator ++();      // prefix operator
	const CTimeStamp& operator --( int ); // postfix operator
	const CTimeStamp& operator ++( int ); // postfix operator

	CTimeStamp operator+(CTimeStamp ts);
	CTimeStamp operator -(CTimeStamp ts);
	CTimeStamp& operator=(const CTimeStamp &src);

	operator LPCTSTR();
};



class AFX_EXT_CLASS CDate{
protected:
	int		m_nYear;	//
	int		m_nMonth;	//1-12
	int		m_nDay;		//1-31
	unsigned long m_nJulianYMD;
public:
	enum weekDays { Sunday = 0, Monday, Tuesday, Wednesday, Thrusday, Friday, Saturday };

	CDate();
	CDate(unsigned long nDate);
	CDate(int nYear, int nMonth, int nDay);
	CDate(LPCTSTR szDate, int nFormat=yyyymmdd);
	~CDate();
	void	SetDate(int nYear, int nMonth, int nDay);
	void	SetNull();

	bool	IsNull() const;		
	bool	IsValid() const;		
	int		GetYear() const;
	int		GetMonth() const;
	int		GetDay() const;
	unsigned long	GetJulianDate() const;
	int		GetDayOfWeek() const;
	int		GetMonthLastDay() const;
	int		GetYearDay() const;
	int		GetYearWeek() const;
	weekDays	GetWeekDay() const;
	int		GetCentury() const;
	CDate	GetCurrentDate() const;
	void	AdjustDays();
	bool	IsLeapYear() const;
	CString GetDate(int nFormat=yyyymmdd) const;
	static	CString Convert(CString szDate, int nFmt1=yyyymmdd, int nFmt2=ddmmyyyy);
	static	bool	IsValid(LPCTSTR lpszDate);
	int		Compare(CString szDate, int nFmt=yyyymmdd);
	int		Compare(CDate sdate);

	bool	ParseDate(CString szDate, int nFormat=yyyymmdd);
	bool   operator==( const CDate& date ) const;
    bool   operator!=( const CDate &date ) const;
    bool   operator<( const CDate &date )	const;
    bool   operator<=( const CDate &date ) const;
    bool   operator>( const CDate &date )	const;
    bool   operator>=( const CDate &date ) const;
	const CDate& operator +=(long inc);
	const CDate& operator -=(long dec);
	const CDate& operator --();      // prefix operator
	const CDate& operator ++();      // prefix operator
	const CDate& operator --( int ); // postfix operator
	const CDate& operator ++( int ); // postfix operator

	CDate operator+(CDate ts);
	CDate operator -(CDate ts);
	CDate& operator=(const CDate& dtSrc);
	CDate& operator=(const LPCTSTR dtSrc);
	
	operator LPCTSTR();
/*
	bool operator > (LPCTSTR Date);
	bool operator < (LPCTSTR Date);
	bool operator >= (LPCTSTR Date);
	bool operator <= (LPCTSTR Date);
	bool operator == (LPCTSTR Date);
	bool operator != (LPCTSTR Date);
*/	
	
	void PrintDebug();
};

class AFX_EXT_CLASS CDateTime
{
protected:
	CDate		m_date;
	CTimeStamp	m_time;
public:
	CDateTime();
	~CDateTime();
	CDateTime(CDateTime& dtSrc );
	CDateTime( int nYear, int nMonth, int nDay, int nHour, int nMinute, int nSecond, int nMilisecond=0);
	CDateTime(CString szDateTime, int nFormat=yyyymmdd|hhmmss);
	bool	ParseDateTime(CString szDateTime, int nFormat=yyyymmdd|hhmmss);
	bool	IsValid() const;
	void	SetDate(int nYear, int nMonth, int nDay);
	void	SetNull();
	void	SetTime(int nHour, int nMinute, int nSecond, int nMilisecond=0);
	int		GetCurrentDateTime() const;
	void	AddDays(int nDay);
	void	AddSecs(int nSecond); //Add seconds
	const CDate&	GetDate() const;
	const CTimeStamp& GetTime() const;
	CString GetDateTime(int nFormat=yyyymmdd|hhmm) const;
	CDateTime& operator=(const CDateTime& dtSrc);
	static CString Convert(CString szDateTime, int nFmt1, int nFmt2);
	static bool		IsValid(LPCTSTR lpszDateTime);
	operator CDate();
	operator CTimeStamp();
	operator LPCTSTR();

	// Comparison operators
	bool operator ==(const CDateTime& dtSrc) const;
	bool operator  <(const CDateTime& dtSrc) const;
	bool operator  >(const CDateTime& dtSrc) const;
	bool operator <=(const CDateTime& dtSrc) const;
	bool operator >=(const CDateTime& dtSrc) const;
	bool operator !=(const CDateTime& dtSrc) const;
	
};

#endif