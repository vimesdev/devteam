#ifndef TOOLTIP_H
#define TOOLTIP_H

#include <afxcmn.h>
#include <afxtempl.h>

class CToolTip : public CWnd
{
	typedef struct
	{
		CString	szText;											// Tooltip text
		CString szTitle;
	} ToolTipInfo;

	enum
	{
		timerShow			= 100,								// Show timer
		timerHide			= 101								// Hide timer
	};


	CString	m_szTitle;
	HBITMAP m_hBitmap;
	int			m_nShowDelay;									// Show delay
	CPoint		m_ptOrigin;										// Popup origin
	CPoint		m_ptLast;										// Popup origin
	CString		m_szText;										// Tip text
	UINT		m_nTimer;										// Show/hide timer
	CFont		m_Font;
	CMap<HWND, HWND, ToolTipInfo, ToolTipInfo>	m_ToolMap;		// Tools map
	bool		m_bRelay;
public:
	CToolTip(void);
	~CToolTip(void);
	BOOL	Create(CWnd *parent);
	BOOL	SetTitle(LPCTSTR lpszTitle);
	

	void	AddTool(CWnd *pWnd, LPCTSTR szTooltipText);
	void	RemoveTool(CWnd *pWnd);

	void	Show(CString szText, CString szTitle, CPoint *pt = NULL);
	void	Hide() { this->ShowWindow(SW_HIDE); };

	// Sets the delay for the tooltip
	void	SetShowDelay(int nDelay) { m_nShowDelay = nDelay; };
	void	RelayEvent(LPMSG lpMsg);

	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnTimer(UINT nIDEvent);
};


#endif
