#ifndef MFCCAPTIONBAREX_H
#define MFCCAPTIONBAREX_H

#include <afxcontrolbars.h>

class CWidgetItem;


class AFX_EXT_CLASS  CMFCCaptionBarEx : public CMFCCaptionBar {

public:
	BOOL	m_bTracked;
	CWidgetItem* m_Leading;
	CWidgetItem* m_Option;
	CWidgetItem* m_Modules;
	CWidgetItem* m_Apps;
	CWidgetItem* m_Setting;
	CWidgetItem* m_Help;
	CWidgetItem* m_Notification;
	CWidgetItem* m_Voice;

	CSize		m_szItemSize;
	COLORREF	m_clrText;
	COLORREF	m_clrIcon;
	COLORREF	m_clrBackground;
	
	CSize		m_szActionsSize;
	int			m_nFocused;
	int			m_nCurSel;
	BOOL		m_bTabStyle;
	BOOL		m_bEnableLeading;
	CString		m_szTitle;
	int			m_nCaptionHeight;
    bool m_bEnableSwitchModule;
	CArray<CWidgetItem*, CWidgetItem*>	m_Actions;
	
	int(*_OnSelChangeFnc)(CWnd*, UINT nCmdId, int nNewSel);


	CMFCCaptionBarEx();
	virtual ~CMFCCaptionBarEx();
	BOOL Create(CWnd* pParentWnd, DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP, UINT nID = AFX_IDW_RIBBON_BAR);

	virtual void	SetCurSel(int nIndex);
	virtual int		GetCurSel();
	virtual void	RecalcLayout();
	virtual void	OnSelected(int nIndex);
	virtual int		Add(CWidgetItem* pNewItem);
	virtual void	Remove(int nIndex);
	virtual void	RemoveAll();

	virtual void OnDrawBackground(CDC* pDC, CRect rect);

	void	EnableTabstyle(BOOL bFlag);
	void	EnableLeading(BOOL bFlag);
	void	SetCallback(UINT nEvent, void* pCallback);
	int		HitTest(CPoint pt);
	void	SetCaptionHeight(int nHeight);
    void	EnableSwitchModule(bool bEnable) { m_bEnableSwitchModule = bEnable; }

protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnMouseLeave();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnMouseHover(UINT nFlags, CPoint point);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual CSize CalcFixedLayout(BOOL bStretch, BOOL bHorz);
	DECLARE_MESSAGE_MAP()
};


#endif