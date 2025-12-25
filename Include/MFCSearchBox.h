#ifndef MFCSEARCHBOX_H
#define MFCSEARCHBOX_H

#include <afxcontrolbars.h>
#include "MFCToolWrap.h"

class CMFCSearchBox : public CWnd
{

public:
    CMFCEditBrowseCtrl  m_wndText;
    CMFCToolWrap         m_Impl;

    CMFCSearchBox();
    ~CMFCSearchBox();

    DECLARE_MESSAGE_MAP()
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    afx_msg void OnDestroy();
    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
    afx_msg void OnMouseLeave();
    afx_msg void OnPaint();
};

#endif