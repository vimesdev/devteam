#ifndef GUICAPTIONBAR_H
#define GUICAPTIONBAR_H

class AFX_EXT_CLASS CGuiCaptionBar: public CDialogBar
{
	CString		m_szCaption;
	COLORREF	m_clrText;
	CBitmap		m_bmpBackground;
public:
	CGuiCaptionBar(void);
	~CGuiCaptionBar(void);
	void	SetCaption(LPCTSTR lpszCaption);
	void	SetTextColor(COLORREF clrText);
protected:	
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	DECLARE_MESSAGE_MAP()
};

#endif
