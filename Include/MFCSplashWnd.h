#ifndef MFCMFCSplashWnd_H
#define MFCMFCSplashWnd_H

#include <afxcontrolbars.h>


/////////////////////////////////////////////////////////////////////////////
// CSplash dialog

#pragma warning(push)
// Disable warning on Create.
#pragma warning(disable : 4264)
#pragma warning(disable : 4263)

#define IDD_SPLASH 1512

class AFX_EXT_CLASS CMFCSplashWnd : public CDialogEx
{
private:
	using CDialogEx::Create;

	// Construction
public:
	BOOL Create(CWnd* pParent = NULL);

	// Dialog Data
		//{{AFX_DATA(CMFCSplashWnd)
	enum { IDD = IDD_SPLASH };
	// NOTE: the ClassWizard will add data members here
//}}AFX_DATA

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CMFCSplashWnd)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
public:
	DECLARE_MESSAGE_MAP()
	afx_msg void OnDestroy();
	afx_msg void OnPaint();
};

#pragma warning(pop)

#endif
