#ifndef MFCAPPLICATIONPANE_H
#define MFCAPPLICATIONPANE_H

#include "MFCDockablePane.h"



class AFX_EXT_CLASS CMFCApplicationPane : public CMFCDockablePane {
protected:
	COLORREF	m_clrText;

public:
	CString		m_szIdModule;
	CMFCApplicationPane();
	~CMFCApplicationPane();

	int OnCreate(LPCREATESTRUCT lpCreateStruct);
	void OnDrawItem(CDC* pDC, CWidgetItem* pTask);
	virtual void	OnClickTask(CWidgetItem* pTask);
	

	DECLARE_MESSAGE_MAP()

	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};

#endif