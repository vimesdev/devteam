#ifndef MEDICALEXPORTORDERDIALOG_H
#define MEDICALEXPORTORDERDIALOG_H
#include "GuiDialog.h"
#include "StorageDeliveryOrderList.h"
#include "StorageDeliveryOrderView.h"
class CMedicalExportOrderDialog : public CGuiDialog
{
public:
	CGuiTabCtrl	m_wndTab;

	CStorageDeliveryOrderList	m_wndOrderList;
	CStorageDeliveryOrderView	m_wndOrderView;

	CMedicalExportOrderDialog(CWnd *pWnd);
	~CMedicalExportOrderDialog(void);
	void	OnCreateComponents();
	void	OnInitializeComponents();
	void	OnSetWindowEvents();

};

#endif