#ifndef MFCWIDGETIMPL_H
#define MFCWIDGETIMPL_H
#pragma once
#include "MFCWidget.h"
class CMFCWidgetImpl
{
protected:
	CWnd* m_pWnd;
	CObList	m_lstWidget;
	CWidgetItem* m_pHot;
    CWidgetItem* m_pFocused;
	CWidgetItem* m_pSelected;
    CSize   m_szItem;
    bool    m_bIsTracking;
    bool    GetSafeHwnd();
    
public:
    CMap<CString, LPCTSTR, ItemState, ItemState>	m_ItemState;

	CMFCWidgetImpl();
	~CMFCWidgetImpl();

    int     Add(LPCTSTR lpszCaption, LPCTSTR lpszDescription, IconData icon=icons::info, UINT nCmdID = -1);
    void    SetItemState(int nIndex, UINT nState);
    UINT    GetItemState(int nIndex);
    CObList& List();
    void    SetItemSize(CSize sz);
    CSize   ItemSize();
    void    SetItemColor(LPCTSTR lpszState, ItemState state);

    virtual int OnCreate(CWnd *pWnd, LPCREATESTRUCT lpCreateStruct);
    virtual void OnDestroy();
    virtual void OnDraw(CDC* pDC);
    virtual void OnLButtonDown(UINT nFlags, CPoint point);
    virtual void OnLButtonUp(UINT nFlags, CPoint point);
    virtual void OnMouseMove(UINT nFlags, CPoint point);
    virtual void OnMouseLeave();
    virtual void OnSize(UINT nType, int cx, int cy);

};


#endif