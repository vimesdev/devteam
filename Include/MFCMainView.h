#ifndef GUITOOLBOX_H
#define GUITOOLBOX_H

#include <afxcontrolbars.h>
#include "GuiButton.h"
#include "GuiTextCtrl.h"
#include "Icons.h"

class AFX_EXT_CLASS CMFCToolBarButtonEx : public CMFCToolBarButton {
public:
	
	IconData	m_icon;
	UINT		m_state;
	BOOL		m_isTab;

	CMFCToolBarButtonEx();
	~CMFCToolBarButtonEx();
	virtual void OnDraw(CDC* pDC, const CRect& rect, CMFCToolBarImages* pImages, BOOL bHorz = TRUE, BOOL bCustomizeMode = FALSE,
		BOOL bHighlight = FALSE, BOOL bDrawBorder = TRUE, BOOL bGrayDisabledButtons = TRUE);
	
};
class AFX_EXT_CLASS CMFCMainView :
	public CWnd
{
public:

	struct ITEMBOX {
		UINT		id;
		IconData	icon;
		CString		caption;
		CRect		rect;
		UINT		state;
		BOOL		isTab;
		void		Draw(CDC *pDC);
	};
	
	int		m_nFocused;
	int		m_nMinWidth;
	int		m_nTabHeight;
	UINT	m_nIdSelectted;
	CSize	m_szPadding;
	CRect	m_rcClient;

	CArray<CMFCToolBarButtonEx*, CMFCToolBarButtonEx*>	m_Tools;
	CMFCToolBarButtonEx*	m_FocusedBox;
	CMFCToolBarButtonEx*	m_HightlightBox;
	CGuiTextCtrl			m_wndSearch;

	CMFCMainView();
	~CMFCMainView();
	int		AddTool(UINT nID, IconData icon, LPCTSTR lpszTooltip);
	int		AddTab(LPCTSTR lpszCaption, UINT nID, IconData icon=icons::close);
	int		Add(CMFCToolBarButtonEx* pNewButton);
	BOOL	Remove(UINT nId);
	void	RemoveAll(bool bTab, bool bTool);

	void	RecalcLayout();
	
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnMouseLeave();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#endif