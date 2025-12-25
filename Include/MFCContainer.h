#ifndef MFCCONTAINER_H
#define MFCCONTAINER_H
#pragma once
#include <afxtempl.h>
#include <string>

class CMFCContainer
{
	static std::string	m_strData;
public:
	CMFCContainer();
	~CMFCContainer();

	static int __stdcall UTF8ToString(LPCSTR lpSrc, CString& strDst, int nLength);
	static int __stdcall StringToUTF8(LPCWSTR lpszSrc, CStringA& strDst, int nLength);
	static std::string __stdcall StringToUTF8(LPCWSTR lpszSrc, int nLength=-1);
};


#endif