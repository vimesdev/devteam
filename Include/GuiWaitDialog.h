#ifndef GUIWAITDIALOG_H
#define GUIWAITDIALOG_H

#include <afxwin.h>

class AFX_EXT_CLASS CWaitDialog :
	public CDialog
{
protected:
	
	CString	m_szNotice;
	int		m_nPercent;
	float	m_fRotate;
	HANDLE	m_hThread;
	BOOL	m_bAbort;
public:
	 CWaitDialog ();
    virtual ~CWaitDialog ();
	BOOL	BeginWait();
	void	EndWait();

    virtual void OnCancel ();
    BOOL Pump();
    void SetPercentComplete(int);
    void SetPercentCompleteAndPump(int);
    void SetMessageText(LPCTSTR);
	void Show();
    void Close();
    bool Cancel() const;    // did user press cancel button?
	void DrawNotice(CDC *pDC);
	void OnDraw();
	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnNcPaint();
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
public:
	afx_msg void OnPaint();
	afx_msg void OnTimer(UINT nIDEvent);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnInitDialog();
};

#endif
