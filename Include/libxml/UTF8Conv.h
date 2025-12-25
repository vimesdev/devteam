//////////////////////////////////////////////////////////////////////////
//
// File : UTF8Conv.h 
//
// Version     : 1.0 ( 10-Juni-2006 )
// Description : Helper code and macros to convert WCHAR*/CHAR to and from UTF8 using Windows API
//
//
//    Author : Mathias Svensson  ( http://www.result42.com )
// Copyright : 2006 - Mathias Svensson
//   Licence : Free to use and modify as long this header is left as is.
//
//  Warranty : None what so ever. Use at own risk.
//
//////////////////////////////////////////////////////////////////////////

#pragma once


extern inline LPWSTR WINAPI A2WEXHelper( LPWSTR lpw, int nChars, LPCSTR lpa, UINT cp = CP_ACP );
extern inline LPSTR  WINAPI W2AEXHelper(LPSTR lpa, int nChars, LPCWSTR lpw, UINT cp = CP_ACP );

#define UTF82A( pszStr ) W2CA( UTF82W( pszStr ) )
#define A2UTF8( pszStr ) W2UTF8( A2CW(pszStr ) )

#ifdef _UNICODE
	#define UTF82T( pszStr )  UTF82W( pszStr )
	#define T2UTF8( pszStr )  W2UTF8( pszStr )
#else
	#define UTF82T( pszStr )  UTF82A( pszStr )
	#define T2UTF8( pszStr )  A2UTF8( pszStr )
#endif

#define W2UTF8(pwszStr) ( ((WCHAR*)pwszStr == NULL) ? "" : \
	\
	(W2AEXHelper((char *) _alloca((lstrlenW(pwszStr)+1)*5), (lstrlenW(pwszStr)+1)*5, (const wchar_t *) pwszStr,CP_UTF8)) )

#define UTF82W(pszStr)  ( ((CHAR*)pszStr == NULL) ? L"" : \
	\
	(A2WEXHelper((wchar_t *) _alloca((lstrlenA(pszStr)+1)*3),(lstrlenA(pszStr)+1)*3,(const char *) pszStr,CP_UTF8)) )

