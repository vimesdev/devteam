#ifndef DLGBAR_H
#define DLGBAR_H

#include "GuiButton.h"
#include "GuiTextCtrl.h"
#include "GuiLabel.h"
#include "ToolTip.h"

typedef CArray<CWnd*,CWnd*>	ArrayCtrl;

class AFX_EXT_CLASS CGuiDialogBar: public CDialogBar
{
	CPtrArray	m_arrayButton;
	CPtrArray	m_arrayGroup;	
	CRect		m_rcItem;
	CBitmap		m_bmpBackground;
	int			m_nBasicWidth;
	int			m_nTop;	
	int			m_nGroupSelected;
	int			m_nCurrentGroup;
	ArrayCtrl	m_arrayCtrl;
	CArray<ArrayCtrl*,ArrayCtrl*> m_groupCtrl;
	CWnd*		m_pWndSelected;
	CToolTip	m_wndTooltip;
	
public:
	bool	m_bShowToolTip;

	CGuiDialogBar(void);
	~CGuiDialogBar(void);
	void	AddGroup(LPCTSTR lpszTitle);
	CWnd*	AddButton(CRect& rect, UINT nIDBitmap, UINT nID, LPCTSTR lpszTooltip=_T(""), HANDLE hModule=NULL);
	CWnd*	AddButton(LPCTSTR lpszTitle, CRect& rect, UINT nIDBitmap, UINT nID, LPCTSTR lpszTooltip=_T(""), HANDLE hModule=NULL);
	CWnd*	AddText(CGuiTextCtrl* pCtrl, CRect& rect);
	CWnd*	AddLabel(CGuiLabel* pCtrl, LPCTSTR lpszCaption, CRect& rect);

	UINT	HitTest(UINT nFlags, CPoint pt);
	UINT	GetFirstGroupID();
	void	SetSystemWidth(int nWidth);
	void	SetGroupSel(int nIndex);
	void	SetSelected(UINT nID);

protected:	
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	virtual void OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHandler);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	DECLARE_MESSAGE_MAP()
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
};

#endif
