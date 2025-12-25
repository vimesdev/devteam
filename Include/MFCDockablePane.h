#ifndef MFCDOCKABLEPANE_H
#define MFCDOCKABLEPANE_H


#include <afxdockablepane.h>
#include "Icons.h"
#include "MFCLinksBarButton.h"
#include "MFCToolTipCtrlEx.h"
#include "MFCToolWrap.h"
#include "ScrollHelper.h"

class AFX_EXT_CLASS CMFCDockablePane : public CDockablePane {
protected:
	CWnd*	m_pSubView;
	int		m_nItemWidth;
	bool	m_bShowSubview;
	bool	m_bEnableSubview;
	CWidgetItem* m_pBackWidget;
	CMFCToolWrap	m_Impl;
	CScrollHelper m_ScrollHelper;
public:
	CMFCDockablePane();
	~CMFCDockablePane();
	
	int		AddLabel(LPCTSTR lpszCaption);
	int		Add(UINT nCmdId, IconData icon, LPCTSTR lpszCaption, LPCTSTR lpszTooltip = _T(""), CWnd* pView = NULL, UINT nStyle = BS_LEFT);

	CWnd*	GetSubView();
	bool	HasSubView();
	void	SetItemWidth(int nWidth);
	int		GetItemWidth();
	void	EnableSubView(BOOL bFlag);
	CMFCToolWrap* GetTool() { return &m_Impl;  }
	void	SetCallback(void* callback) { m_Impl.SetCallback(callback);  }


	virtual CSize	CalcFixedLayout(BOOL bStretch, BOOL bHorz);
	virtual int		HitTest(CPoint point, BOOL bDetectCaption);
	virtual void	OnClickTask(CWidgetItem* pTask);

	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseLeave();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg int  OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);

	

	DECLARE_MESSAGE_MAP()
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
};

#endif