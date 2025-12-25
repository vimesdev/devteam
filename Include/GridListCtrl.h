#ifndef GRIDLISTCTRL_H
#define GRIDLISTCTRL_H

#include "guilistctrlEx.h"

class AFX_EXT_CLASS CGridListCtrl :
	public CGuiListCtrlEx
{
	
protected:
	int		m_nNcLeftWidth;
	bool	m_bEnableEdit;
	void	OnDrawIndex();
	void	SetNcLeftWidth(int nWidth);
public:
	CGridListCtrl(void);
	~CGridListCtrl(void);

	bool	EnsureColumnVisible(int nColumn, bool bPartialOK);
	void	SetEditView(CWnd *pWnd);
	CWnd*	BeginEdit(int nItem, int nSubItem);
	void	EndEdit(BOOL bEsc);
	int		InsertLine(int nIndex);
	void	EditLine(int nIndex);
	int		AddNewLine();
	void	EnableEdit(bool bFlag);


	DECLARE_MESSAGE_MAP()
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
	afx_msg void OnPaint();
	afx_msg void OnLvnItemchanged(NMHDR *pNMHDR, LRESULT *pResult);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnLvnKeydown(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnHdnEndtrack(NMHDR *pNMHDR, LRESULT *pResult);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void PreSubclassWindow();
};

#endif
