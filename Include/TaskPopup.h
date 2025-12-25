#ifndef TASKPOPUP_H
#define TASKPOPUP_H

#include <afxwin.h>
#include <vector>
#include "GuiBitmapButton.h"

class AFX_EXT_CLASS CTaskPopup :
	public CWnd
{
protected:
	typedef struct tagTaskGroup {
		CString szTitle;
		CRect	rect;
		std::vector<CGuiBitmapButton*> m_TaskButtons;
	} TaskGroup;

	std::vector<TaskGroup*>	m_Group;
	TaskGroup*	m_pActiveTask;
	CBitmap		m_bmpBackground;
	virtual void OnShow();
	virtual void OnHide();
	virtual void CloseWindow();

	
public:
	CTaskPopup();
	~CTaskPopup(void);
	BOOL	Create(CWnd *pParentWnd);
	BOOL	CreateRegion(LPCTSTR lpszTitle, CRect rect);
	BOOL	CreateButton(UINT nID, LPCTSTR lpszCaption, UINT nBitmapID, CRect rect=CRect(0, 0, 0, 0));
	void	Show(int x, int y);
	void	Hide();
	DECLARE_MESSAGE_MAP()
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnNcDestroy();	
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#endif