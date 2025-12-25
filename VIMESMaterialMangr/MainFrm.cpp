// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "VIMESMaterialMangr.h"
#include "MainFrm.h"
#include "DocPane.h"
#include ".\mainfrm.h"
#include "HMSReportFormDialog.h"
#include "AdChangePasswordDialog.h"
#include "PurchaseOrderLockDialog.h"
#include "HMSDrugCancerByItemSetupDlg.h"
#include "MachineList.h"


#pragma comment(lib, "../lib/VIMESCORE_E10.LIB")
#pragma comment(lib, "../lib/HMSREPORTFORMS.LIB")
// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMainFrame_E10)

BEGIN_MESSAGE_MAP(CMainFrame, CMainFrame_E10)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_REPORTS, OnFileReports)
	ON_COMMAND(ID_FILE_CHANGEPASSSWOD, OnFileChangepassswod)
	ON_COMMAND(ID_TASK_LOCKORDERS, OnTaskLockorders)
	ON_COMMAND(ID_HATVICAU_SETUP, OnFileSetuphatvicau)
	ON_COMMAND(ID_SETTINGS_DANHSACHMAY, OnFileSetupMachineList)

END_MESSAGE_MAP()
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//	SetEnableLogin(FALSE);
	SetLocalLang(0);
	m_szModuleID = _T("MA");
	m_szSize = CSize(1024, 800);
	SetLayoutStyle(LAYOUT_DOCPANE);
	m_szVersion = _T("5.5");
}

CMainFrame::~CMainFrame()
{

}
int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMainFrame_E10::OnCreate(lpCreateStruct) == -1)
		return -1;
	CString szLabel;
	TranslateString(_T("PHÂN HỆ QUẢN LÝ VẬT TƯ - TRANG BỊ"), szLabel);
	SetWindowText(szLabel);

	CRecord rs(&m_db);
	CString szSQL;
	if (CheckCoreVersion() == false)
	{
		exit(0);
	}
	szSQL.Format(_T("SELECT count(*) FROM m_storagelist WHERE msl_dept_id='%s' and msl_org_id='%s' "), GetDepartmentID(), GetModuleID());
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
	{
		ShowMessageBox(_T("Permission denied"));
		exit(0);
	}
	return 0;
}
void CMainFrame::OnCreateComponents(){
	CRect rect;
	GetClientRect(&rect);

	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj=NULL;
	pDocPane->SetItemHeight(45);
	pDocPane->SetPaneStyle(DPS_LEFT|DPS_OUTLOOK);

	OnCreateMMComponents();
	pDocPane->RecalcLayout();
}


void CMainFrame::OnCreateMMComponents(){

	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj=NULL;

	m_wndAdBusinessPartnerList.Create(GetPane());
	m_wndAdBusinessPartnerList.ShowWindow(SW_HIDE);
	m_wndProduct.Create(GetPane());
	m_wndProduct.ShowWindow(SW_HIDE);
	m_wndManufactureList.Create(pDocPane);
	m_wndManufactureList.ShowWindow(SW_HIDE);
	/*m_wndDeliveryMethod.Create(GetPane());
	m_wndDeliveryMethod.ShowWindow(SW_HIDE);
	m_wndDeliveryTerm.Create(GetPane());
	m_wndDeliveryTerm.ShowWindow(SW_HIDE);
	m_wndPaymentTerm.Create(GetPane());
	m_wndPaymentTerm.ShowWindow(SW_HIDE);*/
	m_wndContractPackageList.Create(GetPane());
	m_wndContractPackageList.ShowWindow(SW_HIDE);
	m_wndStorageList.Create(pDocPane);
	m_wndStorageList.ShowWindow(SW_HIDE);
	m_wndProductCategory.Create(pDocPane);
	m_wndProductCategory.ShowWindow(SW_HIDE);
	m_wndProductClass.Create(pDocPane);
	m_wndProductClass.ShowWindow(SW_HIDE);
	m_wndProductClass.ShowWindow(SW_HIDE);
	m_wndProduct.ShowWindow(SW_HIDE);
	m_wndProductCategory.ShowWindow(SW_HIDE);
	m_wndProductResource.Create(pDocPane);
	m_wndCountry.Create(pDocPane);
	m_wndCountry.ShowWindow(SW_HIDE);
	m_wndProductResource.ShowWindow(SW_HIDE);
	m_wndPermSetup.Create(pDocPane);
	m_wndPermSetup.ShowWindow(SW_HIDE);
//	m_wndProductType.Create(pDocPane);
//	m_wndProductType.ShowWindow(SW_HIDE);

	m_wndPurchaseOrderList.Create(GetPane());
	m_wndPurchaseOrderList.ShowWindow(SW_HIDE);
	
	
	m_wndPurchaseOrderNList.m_szType = _T("PON");
	m_wndPurchaseOrderNList.Create(GetPane());
	m_wndPurchaseOrderNList.ShowWindow(SW_HIDE);
	
	m_wndPurchaseReturnOrderList.m_szType = _T("PRO");
	m_wndPurchaseReturnOrderList.Create(GetPane());
	m_wndPurchaseReturnOrderList.ShowWindow(SW_HIDE);
	m_wndPurchaseOrderInvoicePaymentList.Create(GetPane());
	m_wndPurchaseOrderInvoicePaymentList.ShowWindow(SW_HIDE);

	m_wndContractPaymentOrderList.Create(GetPane());
	m_wndContractPaymentOrderList.ShowWindow(SW_HIDE);
	
//	m_wndContractList.Create(GetPane());
//	m_wndContractList.ShowWindow(SW_HIDE);
	m_wndBankList.Create(GetPane());
	m_wndBankList.ShowWindow(SW_HIDE);

//	obj= pDocPane->AddPane(_T("Birding"));

//	m_wndPurchaseDesktop.Create(this);
//	m_wndPurchaseDesktop.ShowWindow(SW_HIDE);

	// TRinh ky
    m_wndTrinhKy.Create(pDocPane);
    m_wndTrinhKy.ShowWindow(SW_HIDE);

	obj = pDocPane->AddPane(_T("Văn bản giấy tờ"), _T("Văn bản giấy tờ"), NULL);
    if (obj)
    {
        obj->Add(_T("Trình ký"), _T(""), &m_wndTrinhKy);
    }
	
	obj= pDocPane->AddPane(_T("Purchases"), _T("Suppliers management system"), NULL);
		if(obj){
			obj->AddCaption(_T("Functions"));
			//obj->Add(_T("Purchase Requistion"), _T(""), &m_wndPurchaseOrderList);
			obj->Add(_T("Purchase Orders"), _T(""), &m_wndPurchaseOrderList);
			//obj->Add(_T("Mua hàng không qua kho"), _T(""), &m_wndPurchaseOrderNList);
			obj->Add(_T("Purchase Return Orders"), _T(""), &m_wndPurchaseReturnOrderList);
		//	obj->Add(_T("Purchase Invoices"), _T(""), &m_wndPurchaseOrderList);

			obj->AddCaption(_T("Quản lý công nợ"));

			m_wndPaymentOrderList.Create(GetPane());
			m_wndPaymentOrderList.ShowWindow(SW_HIDE);
			obj->Add(_T("Đề nghị thanh toán"), _T(""), &m_wndPaymentOrderList);

			obj->Add(_T("Thanh toán hóa đơn"), _T(""), &m_wndPurchaseOrderInvoicePaymentList);
			obj->Add(_T("Thanh toán hợp đồng"), _T(""), &m_wndContractPaymentOrderList);
		//	obj->Add(_T("Issue Payments"), _T(""), &m_wndPurchaseOrderList);

			obj->AddCaption(_T("Lists"));
			obj->Add(_T("Danh mục gói thầu"), _T(""), &m_wndContractPackageList);
			obj->Add(_T("Danh mục hợp đồng"), _T(""), &m_wndContractList);
		
			obj->Add(_T("Vendors"), _T(""), &m_wndAdBusinessPartnerList);
			
			
			obj->Add(_T("Material-Items"), _T(""), &m_wndProduct);

//			obj->Add(_T("Transport Method"), _T(""), &m_wndTransportMethod);
//			obj->Add(_T("Delivery Method"), _T(""), &m_wndDeliveryMethod);
//			obj->Add(_T("Delivery Terms"), _T(""), &m_wndDeliveryTerm);
//			obj->Add(_T("Payment Terms"), _T(""), &m_wndPaymentTerm);
//			obj->Add(_T("Resources"), _T(""), NULL);
			//obj->AddCaption(_T("Reports"));
			//obj->Add(_T("Purchase Reports"), _T(""), NULL);
			//obj->Add(_T("Purchase Return Reports"), _T(""), NULL);
		}
		obj = pDocPane->AddPane(_T("Sales"));
		if(obj){
			obj->AddCaption( _T("Functions"));

			m_wndPrescription.Create(pDocPane);
			obj->Add(_T("Material Orders"), _T(""), &m_wndPrescription);
			m_wndSaleOrderList.Create(pDocPane);
			obj->Add(_T("Retain Material Orders"), _T(""), &m_wndSaleOrderList);
			m_wndPrescriptionReturnList.Create(pDocPane);
			obj->Add(_T("Material Return Orders"), _T(""), &m_wndPrescriptionReturnList);
			
		}

	
		obj = pDocPane->AddPane(_T("Warehouse"));
		if(obj){
			
			m_wndStorageMovementList.Create(pDocPane);
			
			m_wndStorageMedicalCabinetList.Create(pDocPane);

			obj->AddCaption(_T("Import-Export Management"));
			
			m_wndStorageReturnOrderList.Create(pDocPane);
			obj->Add(_T("Transfer Orders"), _T(""), &m_wndStorageMovementList);
			
			//Loai tu truc
			obj->Add(_T("Medical Cabinet Orders"), _T(""), &m_wndStorageMedicalCabinetList);

			m_wndStorageTransactionList.Create(pDocPane);
			obj->Add(_T("Department Issue Orders"), _T(""), &m_wndStorageTransactionList);

						// Don thuoc cap phat noi tru
			m_wndPrescriptionIN.Create(pDocPane);
			obj->Add(_T("Inpatient Prescription Orders"), _T(""), &m_wndPrescriptionIN);


			m_wndStorageDeliveryOrderList.Create(pDocPane);
			obj->Add(_T("Other Export"), _T(""), &m_wndStorageDeliveryOrderList);

			obj->Add(_T("Return Order"), _T(""), &m_wndStorageReturnOrderList);

			m_wndStorageAdjImport.Create(pDocPane);
			obj->Add(_T("Adjustment Import"), _T(""), &m_wndStorageAdjImport);
			obj->AddCaption(_T("Storage Management"));
			m_wndStorageAdjustmentList.Create(pDocPane);
			obj->Add(_T("Inventory and Adjustment"), _T(""), &m_wndStorageAdjustmentList);

			m_wndStorageInventory.Create(pDocPane);
			obj->Add(_T("Inventory Control"), _T(""), &m_wndStorageInventory);
			

		//	obj->AddCaption(_T("Lists"));
		//
		//	obj->Add(_T("Warehouses"), _T(""), &m_wndStorageList);
		//	obj->Add(_T("Vendor-Customers"), _T(""), &m_wndAdBusinessPartnerList);

		//	obj->Add(_T("Manufactures"), _T(""), &m_wndManufactureList);

		////	obj->Add(_T("Item Types"), _T(""), &m_wndProductType);

		//	obj->Add(_T("Item Categorys"), _T(""), &m_wndProductCategory);

		//	obj->Add(_T("Material-Items"), _T(""), &m_wndProduct);


		}
	
			
		obj = pDocPane->AddPane(_T("Administration"), _T(""), &m_wndProduct);
		if (obj)
		{
			obj->AddCaption(_T("Administration"));
			obj->Add(_T("Warehouses"), _T(""), &m_wndStorageList);
			obj->Add(_T("Permission"), _T(""), &m_wndPermSetup);
			
			obj->AddCaption(_T("Lists"));
			
			obj->Add(_T("Vendor-Customers"), _T(""), &m_wndAdBusinessPartnerList);
			obj->Add(_T("Bank List"), _T(""), &m_wndBankList);
			

			//m_wndDeliveryMethod.Create(GetPane());
			//obj->Add(_T("Delivery Method"), _T(""), &m_wndDeliveryMethod);
			//m_wndDeliveryTerm.Create(GetPane());
			//obj->Add(_T("Delivery Terms"), _T(""), &m_wndDeliveryTerm);

			//m_wndPaymentTerm.Create(GetPane());
			//obj->Add(_T("Payment Terms"), _T(""), &m_wndPaymentTerm);

			
			obj->Add(_T("Producing Country"), _T(""), &m_wndCountry);
			obj->Add(_T("Product Manufacture"), _T(""), &m_wndManufactureList);

			
	//		obj->Add(_T("Item Types"), _T(""), &m_wndProductType);
			
			obj->Add(_T("Item Categorys"), _T(""), &m_wndProductCategory);
			//obj->Add(_T("Active Principles"), _T(""), &m_wndProductClass);
			obj->Add(_T("Product Resources"), _T(""), &m_wndProductResource);
			
			m_wndUom.Create(GetPane());
			obj->Add(_T("Đơn vị tính"), _T(""), &m_wndUom);

			obj->Add(_T("Material-Items"), _T(""), &m_wndProduct);

		}
}

void CMainFrame::OnFileReports()
{
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileChangepassswod()
{
	CAdChangePasswordDialog dlg(this);
	dlg.DoModal();

}

void CMainFrame::OnTaskLockorders()
{
	// TODO: Add your command handler code here
	if (!CheckPermission(_T("40.04")))
	{
		ShowMessageBox(_T("Permission Denied."));
		return;
	}
	CPurchaseOrderLockDialog dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnFileSetuphatvicau()
{
	// TODO: Add your command handler code here
	//CHMSDrugCancerSetupDlg dlg(this);
	CHMSDrugCancerByItemSetupDlg dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnFileSetupMachineList()
{
	CMachineList dlg(this);
	dlg.DoModal();
}