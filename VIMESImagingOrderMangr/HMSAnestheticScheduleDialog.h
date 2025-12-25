#ifndef HMSAnestheticScheduleDetailVIEW_H
#define HMSAnestheticScheduleDetailVIEW_H
#include "GuiDialog.h"
#include "HMSAnestheticScheduleDetail.h"
#include "HMSAnestheticScheduleList.h"

class CHMSAnestheticScheduleDialog :
	public CGuiDialog
{
public:
	CHMSAnestheticScheduleList	m_wndOrderList;
	CHMSAnestheticScheduleDetail		m_wndOrder;

	CHMSAnestheticScheduleDialog(CWnd* pWnd);
	~CHMSAnestheticScheduleDialog(void);
	void	OnCreateComponents();
	void	OnInitializeComponents();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

#endif
