#ifndef OPTIONS_H
#define OPTIONS_H
#include <afx.h>
#include <map>
#include <string>
#pragma once
class AFX_EXT_CLASS COptions{
    std::map<std::wstring, std::wstring> m_data;
public:
    COptions();
    ~COptions();
    
    CString GetOption(LPCTSTR lpszName);

};

COptions theOptions;

namespace options
{
    inline CString GetOption(LPCTSTR lpszName)
    {
        return theOptions.GetOption(lpszName);
    }
}


#endif