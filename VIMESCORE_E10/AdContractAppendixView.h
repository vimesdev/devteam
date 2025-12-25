#ifndef AdContractAppendixView_H
#define AdContractAppendixView_H

#include "GuiView.h"

class CAdContractAppendixView :
    public CGuiView
{
public:
    long    m_nContractID;
    long    m_nPackageID;
    CString m_szAppendixID;
    CString m_szAppendixLineID;

    CGuiListCtrl  m_wndAppendix;
    CGuiListCtrl  m_wndAppendixLine;

    void OnCreateComponents();
    void OnInitializeComponents();
    void OnSetWindowEvents();

    CAdContractAppendixView();
    ~CAdContractAppendixView();

	int OnAppendixLoadData();
	int OnAppendixLineLoadData();
    int OnAppendixSelectChange(int nOldItem, int nNewItem);
	int	OnAppendixAddItem();
	int	OnAppendixEditItem();
	int	OnAppendixDeleteItem();
    void OnAppendixDblClick();

	int OnAppendixLineSelectChange(int nOldItem, int nNewItem);
	void OnAppendixLineDblClick();
	int OnAppendixLineAddItem();
	int OnAppendixLineEditItem();
	int OnAppendixLineDeleteItem();

    DECLARE_MESSAGE_MAP()
    afx_msg void OnSize(UINT nType, int cx, int cy);
    virtual BOOL PreTranslateMessage(MSG* pMsg);

};
#endif