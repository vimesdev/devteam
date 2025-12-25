#ifndef LISTREPORT_H
#define LISTREPORT_H
#include "GuiListCtrlEx.h"
// CGuiListReport
#define LVIS_DRAWFULLROWS	0x0100

class AFX_EXT_CLASS CGuiListReport : public CGuiListCtrlEx
{
	DECLARE_DYNAMIC(CGuiListReport)
	
public:
	enum EHighlight { HIGHLIGHT_NORMAL, HIGHLIGHT_ALLCOLUMNS, HIGHLIGHT_ROW };
	int		m_nHighlight;
	int		m_nCurSel;
	CGuiListReport();
	virtual ~CGuiListReport();
	void	SetGroupItem(int nItem);
	int		GetCurSel();
protected:
	DECLARE_MESSAGE_MAP()
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
public:
	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
	virtual BOOL Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID);
	afx_msg void OnLvnGetdispinfo(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMCustomdraw(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPaint();
	afx_msg void OnHdnEndtrack(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLvnItemchanged(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};


#endif
