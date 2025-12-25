// StringParser.h: interface for the CStringParser class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STRINGPARSER_H__E3708777_30A5_11D5_A483_00105ADBB436__INCLUDED_)
#define AFX_STRINGPARSER_H__E3708777_30A5_11D5_A483_00105ADBB436__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#ifndef assert
#define assert ASSERT
#endif
class CParseOptions
{
public:
	CParseOptions(TCHAR chDelimiter, TCHAR chQuoter, TCHAR chEscape, BOOL bGather)
		: m_chDelimiter( chDelimiter )
		, m_chQuoter( chQuoter )
		, m_chEscape( chEscape )
		, m_bGather( bGather )
	{}

	inline void SetDelimiter( TCHAR chDelimiter )	{ m_chDelimiter = chDelimiter; }
	inline void SetQuoter( TCHAR chQuoter )			{ m_chQuoter = chQuoter; }
	inline void SetEscape( TCHAR chEscape )			{ m_chEscape = chEscape; }

	inline TCHAR GetDelimiter() const				{ return( m_chDelimiter ); }
	inline TCHAR GetQuoter() const					{ return( m_chQuoter ); }
	inline TCHAR GetEscape() const					{ return( m_chEscape ); }

	inline void NoDelimiter()						{ m_chDelimiter = _T('\0'); }
	inline void NoQuoter()							{ m_chQuoter = _T('\0'); }
	inline void NoEscape()							{ m_chEscape = _T('\0'); }

	inline void SetGather( BOOL bGather )			{ m_bGather = bGather; }
	inline BOOL IsGather() const					{ return( m_bGather ); }

protected:

	TCHAR		m_chDelimiter;	// to separate each string
	TCHAR		m_chQuoter;		// to introduce a quoted string
	TCHAR		m_chEscape;		// to escape to next character
	BOOL		m_bGather;		// to treat adjacent delimiters as one delimiter
};


const CParseOptions poPathLine( _T('/'), _T('"'), _T('\0'), TRUE );
const CParseOptions poPathLine2( _T('\\'), _T('"'), _T('\0'), TRUE );
const CParseOptions poCmdLine( _T(' '), _T('"'), _T('\0'), TRUE );
const CParseOptions poCRLine( _T('\n'), _T('"'), _T('\0'), TRUE );
const CParseOptions poCsvLine( _T(';'), _T('"'), _T('\0'), FALSE );
const CParseOptions poPipeLine( _T('|'), _T('"'), _T('\0'), FALSE );
const CParseOptions poTabbedCsvLine( _T('\t'), _T('"'), _T('\0'), FALSE );
const CParseOptions poCommaLine(_T(','), _T('"'), _T('\0'), FALSE );
const CParseOptions poCommaLine2(_T(','), _T('"'), _T('\0'), TRUE );
const CParseOptions poDotLine(_T('.'), _T('"'), _T('\0'), FALSE );
const CParseOptions poCnfLine(_T('('), _T('"'), _T('\0'), FALSE );
const CParseOptions poCnfLine2(_T('('), _T('"'), _T('\0'), TRUE );


class CStringParser  
{
public:
	CStringParser();
	virtual ~CStringParser();

	void Empty();
	int Parse( LPCTSTR pszStr, const CParseOptions& po );
	int GetCount() const;
	LPCTSTR GetAt(int nIndex) const;

	#ifndef NDEBUG 
	void Dump() const;
	#endif // #ifndef NDEBUG

protected:

	BYTE*		m_pAlloc;
	TCHAR**		m_argv;
	int			m_argc;

	void Parse( LPCTSTR pszStr, const CParseOptions& po, int& numargs, int& numchars, TCHAR** argv = NULL, TCHAR* args = NULL );

};

inline int CStringParser::GetCount() const
{
	return( m_argc );
}

inline LPCTSTR CStringParser::GetAt(int nIndex) const
{
	assert( m_argv != NULL && nIndex >= 0 && nIndex < m_argc );
	return( m_argv[nIndex] );
}

#endif // !defined(AFX_STRINGPARSER_H__E3708777_30A5_11D5_A483_00105ADBB436__INCLUDED_)
