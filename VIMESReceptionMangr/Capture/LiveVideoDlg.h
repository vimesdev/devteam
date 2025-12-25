// LiveVideoDlg.h : header file
//

#if !defined(AFX_LIVEVIDEODLG2_H__C98F7498_7259_47EC_9D5D_44E9823DEF60__INCLUDED_)
#define AFX_LIVEVIDEODLG_H2__C98F7498_7259_47EC_9D5D_44E9823DEF60__INCLUDED_

#include "CaptureVideo.h"	// Added by ClassView
#include "../Resource.h"
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <vector>
/////////////////////////////////////////////////////////////////////////////
// CLiveVideoDlg dialog


class CLiveVideoDlg : public CDialog
{
// Construction
public:
	int		m_nVideoMode;
	int		m_width;
	int		m_height;
	CString m_szImagePath;
	CCaptureVideo capVideo;
	CLiveVideoDlg(CWnd* pParent = NULL);	// standard constructor
	void AddResolution(CString name, int width, int height);
// Dialog Data
	//{{AFX_DATA(CLiveVideoDlg)
	enum { IDD = IDD_VIDEOCAPTURE_SETTING };
	CStatic	m_staticScreen;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLiveVideoDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	afx_msg void OnSelectVideo(UINT uID);
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CLiveVideoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnCancel();
	afx_msg void OnApply();
	afx_msg void OnDestroy();
	afx_msg void OnBrowse();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CButton* m_btnSVideo ;
	CButton* m_btnComposite ;
	CButton* m_btnTVTuner ;
	CButton* m_btnWebcam ;
	CButton* m_btnAverCapture ;

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIVEVIDEODLG_H__C98F7498_7259_47EC_9D5D_44E9823DEF60__INCLUDED_)