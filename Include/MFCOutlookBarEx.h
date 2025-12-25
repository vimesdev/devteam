#ifndef MFCOUTLOOKBAREX_H
#define MFCOUTLOOKBAREX_H

#include <afxcontrolbars.h>

class CMFCOutlookBarEx : public CMFCOutlookBar
{
public:
	CMFCOutlookBarEx();
	~CMFCOutlookBarEx();

	virtual BOOL AllowShowOnPaneMenu() const;
	virtual void GetPaneName(CString& strName) const
	{
		strName = _T("Outlook Bar");
	}
	virtual BOOL OnShowControlBarMenu(CPoint point)
	{
		return FALSE;
	}
	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

#endif