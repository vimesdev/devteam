#ifndef MFCTOOLTIPCTRLEX_H
#define MFCTOOLTIPCTRLEX_H


#include <afxtooltipctrl.h>

class CMFCToolTipCtrlEx : public CMFCToolTipCtrl
{
	// Construction
public:
	CMFCToolTipCtrlEx();
	virtual ~CMFCToolTipCtrlEx();
	// Attributes
public:
	int	m_nCurrID;

	// Operations
public:

	// Overrides

	virtual CSize GetIconSize()
	{
		return CSize(32, 32);
	}

	virtual BOOL OnDrawIcon(CDC* pDC, CRect rectImage);

	// Implementation
public:
	

protected:
	afx_msg void OnShow(NMHDR* pNMHDR, LRESULT* pResult);

	DECLARE_MESSAGE_MAP()
};

#endif