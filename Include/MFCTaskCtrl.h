#ifndef MFCTASKCTRL_H
#define MFCTASKCTRL_H

#include "MFCWidgetImpl.h"

class AFX_EXT_CLASS CMFCTaskCtrl :
    public CWnd
{
    CWidgetItem*    m_optWidget;
    CMFCWidgetImpl  m_Impl;
    COLORREF        m_clrBackground;
    
public:
    CMFCTaskCtrl();
    ~CMFCTaskCtrl();
    int     Add(LPCTSTR lpszCaption, LPCTSTR lpszDescription);
    void    SetItemState(int nIndex, UINT nState);
    UINT    GetItemState(int nIndex);
    void    SetItemColor(LPCTSTR lpszName, ItemState state);

    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    afx_msg void OnDestroy();
    afx_msg void OnPaint();
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
    afx_msg void OnMouseLeave();

    DECLARE_MESSAGE_MAP()
    afx_msg void OnSize(UINT nType, int cx, int cy);
    virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
    afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
    afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
    afx_msg void OnSetFocus(CWnd* pOldWnd);
    afx_msg void OnKillFocus(CWnd* pNewWnd);
};


#endif