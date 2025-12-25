// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "VIMESGlassShopMangr.h"
#include "MainFrm.h"
#include "DocPane.h"
#include ".\mainfrm.h"
#include "HMSReportFormDialog.h"
#include "AdChangePasswordDialog.h"


#pragma comment(lib, "../lib/VIMESCORE_E10.LIB")
#pragma comment(lib, "../lib/HMSREPORTFORMS.LIB")
// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMainFrame_E10)

BEGIN_MESSAGE_MAP(CMainFrame, CMainFrame_E10)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_REPORTS, OnFileReports)
	ON_COMMAND(ID_FILE_CHANGEPASSSWOD, OnFileChangepassswod)
END_MESSAGE_MAP()
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//	SetEnableLogin(FALSE);
	SetLocalLang(0);
	m_szModuleID = _T("GLS");
	m_szSize = CSize(1024, 720);
	SetLayoutStyle(LAYOUT_DOCPANE);
	m_szVersion = _T("5.0");
}

CMainFrame::~CMainFrame()
{

}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMainFrame_E10::OnCreate(lpCreateStruct) == -1)
		return -1;
	CString szLabel;
	TranslateString(_T("PHÂN HỆ KÍNH MẮT"), szLabel);
	SetWindowText(szLabel);

	CRecord rs(&m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM m_storagelist WHERE msl_dept_id='%s' and msl_org_id='%s' "), GetDepartmentID(), GetModuleID());
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
	{
		//ShowMessageBox(_T("Permission denied"));
	//exit(0);
	}
	return 0;
}


void CMainFrame::OnCreateComponents(){
	CRect rect;
	GetClientRect(&rect);

	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj=NULL;
	pDocPane->SetItemHeight(25);
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

	m_wndStorageList.Create(pDocPane);
	m_wndStorageList.ShowWindow(SW_HIDE);
	m_wndProductCategory.Create(pDocPane);
	m_wndProductCategory.ShowWindow(SW_HIDE);
	m_wndProductClass.Create(pDocPane);
	m_wndProductClass.ShowWindow(SW_HIDE);
	m_wndProductClass.ShowWindow(SW_HIDE);
	m_wndProduct.ShowWindow(SW_HIDE);
	m_wndProductCategory.ShowWindow(SW_HIDE);
//	m_wndProductResource.Create(pDocPane);
	m_wndCountry.Create(pDocPane);
	m_wndCountry.ShowWindow(SW_HIDE);
//	m_wndProductResource.ShowWindow(SW_HIDE);
	m_wndPermSetup.Create(pDocPane);
	m_wndPermSetup.ShowWindow(SW_HIDE);
//	m_wndProductType.Create(pDocPane);
//	m_wndProductType.ShowWindow(SW_HIDE);

	m_wndPurchaseOrderList.Create(GetPane());
	m_wndPurchaseOrderList.ShowWindow(SW_HIDE);
	
	m_wndPurchaseReturnOrderList.m_szType = _T("PRO");
	m_wndPurchaseReturnOrderList.Create(GetPane());
	m_wndPurchaseReturnOrderList.ShowWindow(SW_HIDE);
	m_wndPurchaseOrderInvoicePaymentList.Create(GetPane());
	m_wndPurchaseOrderInvoicePaymentList.ShowWindow(SW_HIDE);
	
//	m_wndContractList.Create(GetPane());
//	m_wndContractList.ShowWindow(SW_HIDE);
//	m_wndBankList.Create(GetPane());
//	m_wndBankList.ShowWindow(SW_HIDE);

//	obj= pDocPane->AddPane(_T("Birding"));

//	m_wndPurchaseDesktop.Create(this);
//	m_wndPurchaseDesktop.ShowWindow(SW_HIDE);

	
	obj= pDocPane->AddPane(_T("Purchases"), _T("Suppliers management system"), NULL);
		if(obj){
			obj->AddCaption(_T("Functions"));
			//obj->Add(_T("Purchase Requistion"), _T(""), &m_wndPurchaseOrderList);
			obj->Add(_T("Purchase Orders"), _T(""), &m_wndPurchaseOrderList);
			obj->Add(_T("Purchase Return Orders"), _T(""), &m_wndPurchaseReturnOrderList);
		//	obj->Add(_T("Purchase Invoices"), _T(""), &m_wndPurchaseOrderList);
			obj->Add(_T("Pay Purchase Invoices"), _T(""), &m_wndPurchaseOrderInvoicePaymentList);
		//	obj->Add(_T("Issue Payments"), _T(""), &m_wndPurchaseOrderList);

			obj->AddCaption(_T("Lists"));
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

			//m_wndPrescription.Create(pDocPane);
			//obj->Add(_T("Material Orders"), _T(""), &m_wndPrescription);
			m_wndSaleOrderList.Create(pDocPane);
			obj->Add(_T("Đơn bán"), _T(""), &m_wndSaleOrderList);
			m_wndPrescriptionReturnList.Create(pDocPane);
			obj->Add(_T("Đơn bán trả lại"), _T(""), &m_wndPrescriptionReturnList);
			
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
			obj->Add(_T("Permission"), _T(""), &m_wndPermSetup);
			obj->AddCaption(_T("Lists"));
		//	obj->Add(_T("Contract List"), _T(""), &m_wndContractList);
			//obj->Add(_T("Bank List"), _T(""), &m_wndBankList);
			obj->Add(_T("Warehouses"), _T(""), &m_wndStorageList);

			//m_wndDeliveryMethod.Create(GetPane());
			//obj->Add(_T("Delivery Method"), _T(""), &m_wndDeliveryMethod);
			//m_wndDeliveryTerm.Create(GetPane());
			//obj->Add(_T("Delivery Terms"), _T(""), &m_wndDeliveryTerm);

			//m_wndPaymentTerm.Create(GetPane());
			//obj->Add(_T("Payment Terms"), _T(""), &m_wndPaymentTerm);

			//obj->Add(_T("Product Resources"), _T(""), &m_wndProductResource);
			
			obj->Add(_T("Vendor-Customers"), _T(""), &m_wndAdBusinessPartnerList);

			obj->Add(_T("Producing Country"), _T(""), &m_wndCountry);
			obj->Add(_T("Product Manufacture"), _T(""), &m_wndManufactureList);

			m_wndUom.Create(GetPane());
			obj->Add(_T("Uom List"), _T(""), &m_wndUom);
			
	//		obj->Add(_T("Item Types"), _T(""), &m_wndProductType);
			
			obj->Add(_T("Item Categorys"), _T(""), &m_wndProductCategory);
			//obj->Add(_T("Active Principles"), _T(""), &m_wndProductClass);
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
