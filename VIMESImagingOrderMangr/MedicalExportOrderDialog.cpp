#include ".\medicalexportorderdialog.h"

CMedicalExportOrderDialog::CMedicalExportOrderDialog(CWnd *pParent):
CGuiDialog(pParent)
{
	m_nDlgWidth = 960;
	m_nDlgHeight = 680;
}

CMedicalExportOrderDialog::~CMedicalExportOrderDialog(void)
{


}


void CMedicalExportOrderDialog::OnCreateComponents()
{
	m_wndTab.Create(this, CRect(0, 0, 1010, 640));
}



void CMedicalExportOrderDialog::OnInitializeComponents()
{


}

void CMedicalExportOrderDialog::OnSetWindowEvents()
{
	m_wndOrderList.Create(&m_wndTab);
	m_wndOrderView.Create(&m_wndTab);

	
	m_wndTab.Add(_T("List"), &m_wndOrderList);
	m_wndTab.Add(_T("Order Information"), &m_wndOrderView);

	m_wndOrderList.OnInitDialog();
	m_wndOrderView.OnInitDialog();
	m_wndOrderList.m_wndOrder = &m_wndOrderView;
	m_wndOrderView.m_wndList = &m_wndOrderList;

}
