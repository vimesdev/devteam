#ifndef MFCTOOLBOX_H
#define MFCTOOLBOX_H
#include "Icons.h"

#include "MFCToolTipCtrlEx.h"
#include "MFCWidget.h"
#include <functional>

class AFX_EXT_CLASS CMFCToolWrap {
protected:
	BOOL	m_bTracked;
	CRect	m_rectTasks;
	
	int		m_nHotLight;
	CWnd*	m_pWnd;
	
	
	CWidgetItem* m_pHitTask;
	CWidgetItem* m_pSelected;
	

	
	
	void(*_OnClickFnc)(CWnd* pWnd, int nId);

public:
	COLORREF	m_clrBackground;
	COLORREF	m_clrText;
	CSize	m_szButtonSize;
	CMFCToolTipCtrl	m_ToolTip;
	UINT	m_nStyle;
	CObList	m_lstWidget;
	int		m_nCurrentId;
	int		m_nFocusIndex;

	CMFCToolWrap();
	~CMFCToolWrap();
	int		AddLabel(LPCTSTR lpszCaption);
	int		Add(UINT nCmdId, IconData icon, LPCTSTR lpszCaption, LPCTSTR lpszTooltip = _T(""), CWnd* pView = NULL, UINT nStyle=BS_LEFT);
	void	SetActive(int nCmdId);
	void	SetActiveIndex(int nIndex);
	CWidgetItem* Get(int nCmdId);
	int		GetActive() { return m_nCurrentId; }
	int		GetActiveIndex();
	void	SetButtonSize(CSize sz) { m_szButtonSize = sz; }
	int		GetItemCount() { return m_lstWidget.GetCount();  }
	void	SetButtonStyle(UINT nStyle);
	UINT	GetButtonStyle();
	void	SetCallback(void* cb);
	CObList& GetList() { return m_lstWidget; }
	CMFCToolTipCtrl* GetToolTip() { return &m_ToolTip; }
	bool	IsSelected();
	CWidgetItem* GetSelected();

	void	RemoveAll();
	void	DoPaint(CDC* pDC, CRect rect);

	virtual void OnDraw(CDC* pDC, CRect /*rectWorkArea*/);
	virtual void OnDrawItem(CDC* pDC, CWidgetItem* pTask);
	virtual CSize CalcFixedLayout(CRect rect, BOOL bStretch, BOOL bHorz);
	virtual int HitTest(CPoint point, BOOL bDetectCaption = FALSE);
	virtual void	OnClickTask(CWidgetItem* pTask);

	
	afx_msg int OnCreate(CWnd* pWnd, LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseLeave();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);


};

#endif