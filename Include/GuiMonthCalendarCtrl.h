#ifndef GUIMONTHCALENDARCTRL_H
#define GUIMONTHCALENDARCTRL_H
#include "afxdtctl.h"

class AFX_EXT_CLASS CGuiMonthCalendarCtrl :
	public CMonthCalCtrl
{
public:
	CGuiMonthCalendarCtrl(CWnd *pComboParent);
	~CGuiMonthCalendarCtrl(void);
	void ClosePopup();
protected:
	CWnd*	m_pComboParent;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg void OnMcnSelect(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnNcDestroy();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()

};


class AFX_EXT_CLASS CMonthCalPopup : public CWnd
{
public:
	CMonthCalPopup();
	~CMonthCalPopup();

	BOOL CreatePopup(CPoint point, CWnd* pParent, COleDateTime& dtToday);
	CGuiMonthCalendarCtrl* GetMonthCtrl() { return m_pMonthCal; }

	
protected:
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg void OnClose();
	afx_msg void OnNcDestroy();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	DECLARE_MESSAGE_MAP()

private:
	CGuiMonthCalendarCtrl* m_pMonthCal;
	CFont	m_Font;
	
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};


#endif
