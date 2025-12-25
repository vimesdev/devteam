#ifndef MFCLISTPANE_H
#define MFCLISTPANE_H


#pragma once
#include <afxdockablepane.h>
#include "GuiView.h"
#include "MFCLinksBar.h"
#include "MFCTaskCtrl.h"
#include "MFCSearchBox.h"

class AFX_EXT_CLASS CMFCListPane :
    public CDockablePane
{
public: 

    CMFCTaskCtrl  m_wndState;
    CGuiView* m_wndView;
    CMFCListPane();
    ~CMFCListPane();
    void SetView(CGuiView* pView);
    virtual CSize CalcFixedLayout(BOOL bStretch, BOOL bHorz);

    DECLARE_MESSAGE_MAP()
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    afx_msg void OnDestroy();
    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnPaint();
};


#endif