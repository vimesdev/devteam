#ifndef MFCHELPDIALOG_H
#define MFCHELPDIALOG_H

#pragma once
#include "GuiDialog.h"

class AFX_EXT_CLASS CMFCHelpDialog :
    public CGuiDialog
{
    CString m_szFile;
public:

    CMFCHelpDialog(CWnd *pParent, LPCTSTR lpszFile);
    ~CMFCHelpDialog();

    void OnCreateComponents();
    void OnInitializeComponents();
    bool LoadFile(LPCTSTR lpszFile);
    bool LoadData(LPCTSTR lpszData);

    virtual BOOL PreTranslateMessage(MSG* pMsg);
    virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
};


#endif