#ifndef STRING_H
#define STRING_H
#include <stdio.h>

class String  
{
public: 
	String();
	String(const String& szString);
	String(const char* pszString);
	String(char ch, int nRepeat);
	virtual ~String();
	
	// Assignment Operations
	const String& operator=(String& strSrc);
	const String& operator=(const char* lpsz);
	operator const char*() const	{ return m_pszString; }
	operator char*(){ return m_pszString; }
	char*	GetString()			{ return m_pszString; }
	
	// Concatenation
	const String& operator+=(String& strSrc);
	const String& operator+=(const char* lpsz);
	const String& operator+=(char ch);
	friend String operator+(String& strSrc1, String& strSrc2);
	friend String operator+(String& strSrc, const char* lpsz);
	friend String operator+(const char* lpsz, String& strSrc);

	// Accessors for the String as an Array
	int		GetLength() const;
	bool	IsEmpty() const;
	void	Empty();
	char	GetAt(int nIndex);
	void	SetAt(int nIndex, char ch);
	char	operator[] (int nIndex);

	// Conversions
	void	MakeUpper();
	void	MakeLower();
	void	MakeReverse();
	void	TrimLeft();
	void	TrimRight();

	// Searching
	int		Find(char ch) const;
	int		Find(char ch, int nStart) const;
	int		Find(const char* lpszSub);
	int		Find(const char* lpszSub, int nStart);
	int		FindOneOf(const char* lpszCharSet) const;

	// Extraction
	String Mid(int nFirst) const;
	String Mid(int nFirst, int nCount) const;
	String Left(int nCount) const;
	String Right(int nCount) const;

	// Comparison
	int Compare(String& str) const;
	int Compare(const char* lpsz) const;
	int CompareNoCase(String& str) const;
	int CompareNoCase(const char* lpsz) const;
	int Collate(String& str) const;
	int Collate(const char* lpsz) const;

	// Formatting
	void Format(const char* pszCharSet, ...);

	// Replacing
	int Replace(char chOld, char chNew);
	int Replace(const char* lpszOld, const char* lpszNew);
	
protected:
	char*	m_pszString;
	void	Copy(String& str, int nLen, int nIndex, int nExtra) const;
	void	Copy(int nSrcLen, const char* lpszSrcData);
	void	Concat(const char* lpszData);
	void	Concat(char ch);
	void	Concat(const char* lpszData1, const char* lpszData2);
	void	AllocString(int nLen);
	void	ReAllocString(int nLen);
};	

// Compare operations
bool operator==(const String& s1, const String& s2);
bool operator==(const String& s1, const char* s2);
bool operator==(const char* s1, const String& s2);
bool operator!=(const String& s1, const String& s2);
bool operator!=(const String& s1, const char* s2);
bool operator!=(const char* s1, const String& s2);

// Compare implementations
inline bool operator==(const String& s1, const String& s2)
	{ return s1.Compare(s2) == 0; }
inline bool operator==(const String& s1, const char* s2)
	{ return s1.Compare(s2) == 0; }
inline bool operator==(const char* s1, const String& s2)
	{ return s2.Compare(s1) == 0; }
inline bool operator!=(const String& s1, const String& s2)
	{ return s1.Compare(s2) != 0; }
inline bool operator!=(const String& s1, const char* s2)
	{ return s1.Compare(s2) != 0; }
inline bool operator!=(const char* s1, const String& s2)
	{ return s2.Compare(s1) != 0; }


// Converts char * to wchar_t *.
// Allocates using new[]. Deallocate with delete [].
wchar_t * char2wchar(char * instr);
// Converts wchar_t * to char *.
// Allocates using new[]. Deallocate with delete [].
char * wchar2char(wchar_t * instr);

#endif

