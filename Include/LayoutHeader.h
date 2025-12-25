#ifndef LAYOUTHEADER_H
#define LAYOUTHEADER_H

#include "GuiHeaderCtrl.h"

class AFX_EXT_CLASS CLayoutHeader: public CGuiHeaderCtrl
{
	CPtrArray	m_arCtrls;
public:
	CLayoutHeader(void);
	~CLayoutHeader(void);
	void AddColumn(LPCTSTR lpszCaption, int nWidth, CWnd* pCtrl);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

#endif
