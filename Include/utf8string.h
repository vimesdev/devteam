#ifndef UTF8STRING_H
#define UTF8STRING_H

#include <string>
#include <wtypes.h>

// Typedef for string
typedef std::basic_string<TCHAR> stdstring;


// Class for converting TCHAR to Multi-Byte UTF-8
	//   and vice versa
class AFX_EXT_CLASS UTF8MBSTR
{

public:
		UTF8MBSTR(void);
		UTF8MBSTR(LPCSTR lpStr );
		UTF8MBSTR(LPCWSTR lpStr );
		UTF8MBSTR( UTF8MBSTR& lpStr );
		virtual ~UTF8MBSTR();

		void operator =( LPCTSTR lpStr );
		void operator =( UTF8MBSTR& lpStr );
		operator char*();
		operator char*() const;
		operator wchar_t*();
		operator wchar_t*() const;
		operator stdstring ();
		static void ConvertUTF8ToString(const char * strInUTF8MB, TCHAR*& strOut, int codepage=CP_UTF8 );
		static size_t ConvertStringToUTF8( LPCTSTR strIn, char*& strOutUTF8MB, int codepage=CP_UTF8);
private:
		char*		m_strUTF8_MultiByte;
		wchar_t*	m_strWC;
		LPSTR	m_pString;
		LPWSTR	m_pWString;
		size_t m_iLen;
		
};


#endif;