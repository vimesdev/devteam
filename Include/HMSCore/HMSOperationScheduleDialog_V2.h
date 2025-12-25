#ifndef HMSOperationScheduleDetailVIEW_H
#define HMSOperationScheduleDetailVIEW_H
#include "GuiDialog.h"
#include "HMSOperationScheduleDetail_V2.h"
#include "HMSOperationScheduleList_V2.h"

class AFX_EXT_CLASS CHMSOperationScheduleDialog_V2 :
	public CGuiDialog
{
public:
	CHMSOperationScheduleList_V2	m_wndOrderList;
	CHMSOperationScheduleDetail_V2		m_wndOrder;

	CHMSOperationScheduleDialog_V2(CWnd* pWnd);
	~CHMSOperationScheduleDialog_V2(void);
	void	OnCreateComponents();
	void	OnInitializeComponents();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
#endif
