#ifndef HMSOperationScheduleDetailVIEW_H
#define HMSOperationScheduleDetailVIEW_H
#include "GuiDialog.h"
#include "HMSOperationScheduleDetail.h"
#include "HMSOperationScheduleList.h"

class CHMSOperationScheduleDialog :
	public CGuiDialog
{
public:
	CHMSOperationScheduleList	m_wndOrderList;
	CHMSOperationScheduleDetail		m_wndOrder;

	CHMSOperationScheduleDialog(CWnd* pWnd);
	~CHMSOperationScheduleDialog(void);
	void	OnCreateComponents();
	void	OnInitializeComponents();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

#endif
