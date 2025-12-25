// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "VIMESPharmacyMangr.h"
#include "MainFrm.h"
#include "DocPane.h"
#include "AdChangePasswordDialog.h"
#include "HMSReportFormDialog.h"
#include "MemberDialog.h"
#include "VIMESRecalOrderQuanlityDiaLog.h"
#include "HMSReportForms/PatientProfileDialog.h"
#include "PMDrugLevelSetup.h"
#include "HMSDrugCancerSetupDlg.h"
#include "HMSDrugCancerByClassSetupDlg.h"
#include "FormFooterSetup.h"
#include "ImportInsuranceListDialog.h"
#include "PurchaseOrderLockDialog.h"
#include "PMInteractionSetupDlg.h"
#include "HMSLienThongNhaThuoc.h"
#include "PMPostNationalGateDialog.h"
#include "PriceSchema/HMSExpenseDialog.h"

#pragma comment(lib, "../lib/VIMESCORE_E10.LIB")
#pragma comment(lib, "../lib/HMSREPORTFORMS.LIB")
#pragma comment(lib, "../lib/HMSEXT.LIB")
// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMainFrame_E10)

BEGIN_MESSAGE_MAP(CMainFrame, CMainFrame_E10)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_REPORTS, OnFileReports)
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
	ON_COMMAND(ID_APP_EXIT, OnAppExit)
	ON_COMMAND(ID_FILE_COMMAND, OnFileCommand)
	ON_COMMAND(ID_FILE_SETUPMEMBER, OnFileSetupmember)
	ON_COMMAND(ID_COMMAND_RECALORDERQUANLITY, OnCommandRecalorderquanlity)
	ON_COMMAND(ID_FILE_PATIENTPROFILETRACK, OnFilePatientprofiletrack)
	ON_COMMAND(ID_FILE_SETUPDRUGCANCER, OnFileSetupdrugcancer)
	ON_COMMAND(ID_FILE_SETUPDRUGLEVEL, OnFileSetupdruglevel)
	ON_COMMAND(ID_Menu, OnMenu)
	ON_COMMAND(ID_SETTINGS_IMPORTINSURANCELIST, OnSettingsImportinsurancelist)
	ON_COMMAND(ID_SETTINGS_TREATDIAGRAM, OnSettingsTreatDiagram)
	ON_COMMAND(ID_FILE_PATIENTPROFILE, OnPatientProfile)
	ON_COMMAND(ID_SETTINGS_SETTINGIOT131, OnSetupIot131)
	ON_COMMAND(ID_SETTINGS_INTERACTIONSETUP, OnSettingsInteractionsetup)
	ON_COMMAND(ID_COMMAND_LOCKORDER, OnCommandLockorder)
	ON_COMMAND(ID_COMMAND_POSTTONATIONALGATE, OnCommandPosttonationalgate)
	ON_COMMAND(ID_SETTINGS_EXPENSESETUP, OnSettingsExpense)
END_MESSAGE_MAP()
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//	SetEnableLogin(FALSE);
	SetLocalLang(0);
	m_szModuleID = _T("PM");
	m_szSize = CSize(1024, 720);
	SetLayoutStyle(LAYOUT_DOCPANE);
	m_szVersion = _T("5.5");

}

CMainFrame::~CMainFrame()
{

}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	printf("\npharmacy oncreate\n");
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (CMainFrame_E10::OnCreate(lpCreateStruct) == -1)
		return -1;
	if (CheckCoreVersion() == false)
	{
		exit(0);
	}
	
	
	CString szLabel;
	TranslateString(_T("Pharmacy Management System"), szLabel);
	SetWindowText(szLabel);

	CRecord rs(&m_db);
	CString szSQL, szWhere2;
	
	if (!pMF->m_UserInfo.su_hms_xdepts.IsEmpty())
	{
		szWhere2.AppendFormat(_T(" or msl_dept_id IN (%s) "), pMF->m_UserInfo.su_hms_xdepts);
	}

	szSQL.Format(_T("SELECT count(*) FROM m_storagelist WHERE (msl_dept_id='%s' %s) and msl_org_id='%s' "), GetDepartmentID(),szWhere2, GetModuleID());
	rs.ExecSQL(szSQL);

	if(rs.GetIntValue() <= 0)
	{
		ShowMessageBox(_T("Permission denied"));
		exit(0);
	}
	szLabel.Format(_T("Host: %s"), GetHost());
	//SetStatusText(szLabel);	
	return 0;
}


void CMainFrame::OnCreateComponents(){
	printf("\npharmacy create components\n");
	CRect rect;
	GetClientRect(&rect);

	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj=NULL;
	pDocPane->SetItemHeight(45);
	pDocPane->SetPaneStyle(DPS_LEFT|DPS_OUTLOOK);
	
	OnPMCreateComponents();	
	pDocPane->RecalcLayout();
}


void CMainFrame::OnPMCreateComponents(){
	printf("\npharmacy onpmcreate\n");

	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj=NULL;

	m_wndNotification.Create(pDocPane);
	pDocPane->AddDashboard(&m_wndNotification);
	m_wndAdBusinessPartnerList.Create(GetPane());
	m_wndAdBusinessPartnerList.ShowWindow(SW_HIDE);
	m_wndPartnerType.Create(GetPane());
	m_wndPartnerType.ShowWindow(SW_HIDE);
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
	m_wndProductResource.Create(pDocPane);
	m_wndPaymentResource.Create(pDocPane);
	m_wndCountry.Create(pDocPane);
	m_wndCountry.ShowWindow(SW_HIDE);
	m_wndProductResource.ShowWindow(SW_HIDE);
	m_wndPaymentResource.ShowWindow(SW_HIDE);
	m_wndPermSetup.Create(pDocPane);
	m_wndPermSetup.ShowWindow(SW_HIDE);
	m_wndUser.Create(pDocPane);
	m_wndUser.ShowWindow(SW_HIDE);
	m_wndProductType.Create(pDocPane);
	m_wndProductType.ShowWindow(SW_HIDE);
	
	m_wndPurchaseReturnOrderList.m_szType = _T("PRO");
	m_wndPurchaseReturnOrderList.Create(GetPane());
	m_wndPurchaseReturnOrderList.ShowWindow(SW_HIDE);
	m_wndPurchaseOrderInvoicePaymentList.Create(GetPane());
	m_wndPurchaseOrderInvoicePaymentList.ShowWindow(SW_HIDE);
	
	m_wndContractList.Create(GetPane());
	m_wndContractList.ShowWindow(SW_HIDE);
	m_wndBankList.Create(GetPane());
	m_wndBankList.ShowWindow(SW_HIDE);

	m_wndContractPackageList.Create(GetPane());
	m_wndContractPackageList.ShowWindow(SW_HIDE);

	m_wndProdutTenderList.Create(GetPane());
	m_wndProdutTenderList.ShowWindow(SW_HIDE);

	m_wndContractPaymentOrderList.Create(GetPane());
	m_wndContractPaymentOrderList.ShowWindow(SW_HIDE);

//	obj= pDocPane->AddPane(_T("Birding"));

	m_wndDeptIndexSetup.Create(GetPane());
	m_wndDeptIndexSetup.ShowWindow(SW_HIDE);
	m_wndPurchaseDesktop.Create(this);
	m_wndPurchaseDesktop.ShowWindow(SW_HIDE);

	//TRinh ky
    m_wndTrinhKy.Create(pDocPane);
    m_wndTrinhKy.ShowWindow(SW_HIDE);

	m_wndContractLiquidationList.Create(GetPane());
	
	obj = pDocPane->AddPane(_T("Văn bản giấy tờ"), _T("Văn bản giấy tờ"), NULL);
    if (obj)
    {
        obj->Add(_T("Trình ký"), _T(""), &m_wndTrinhKy);
    }

	obj= pDocPane->AddPane(_T("Purchases"), _T("Suppliers management system"), NULL);
		if(obj){
			obj->AddCaption(_T("Functions"));
			//obj->Add(_T("Purchase Requistion"), _T(""), &m_wndPurchaseOrderList);
			if (CheckPermission(_T("01"))){
				m_wndPurchaseOrderList.Create(pDocPane);
				obj->Add(_T("Purchase Orders"), _T(""), &m_wndPurchaseOrderList);
			}
			obj->Add(_T("Purchase Return Orders"), _T(""), &m_wndPurchaseReturnOrderList);
		//	obj->Add(_T("Purchase Invoices"), _T(""), &m_wndPurchaseOrderList);
			if (CheckPermission(_T("01.08")) && GetModuleID() == _T("PM"))
				obj->Add(_T("Đề nghị thanh toán"), _T(""), &m_wndPaymentOrderList);
				obj->Add(_T("Thanh toán hóa đơn"), _T(""), &m_wndPurchaseOrderInvoicePaymentList);
				obj->Add(_T("Thanh toán hợp đồng"), _T(""), &m_wndContractPaymentOrderList);
				obj->Add(_T("Thanh lý hợp đồng"), _T(""), &m_wndContractLiquidationList);
		//	obj->Add(_T("Issue Payments"), _T(""), &m_wndPurchaseOrderList);

			obj->AddCaption(_T("Lists"));
			if (CheckPermission(_T("10.04")))
				obj->Add(_T("Vendors"), _T(""), &m_wndAdBusinessPartnerList);
			if (CheckPermission(_T("10.07")))
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
			if (CheckPermission(_T("07")))
			{
				m_wndPrescription.Create(pDocPane);
				obj->Add(_T("Prescription Orders"), _T(""), &m_wndPrescription);
				
				m_wndPrescriptionEX.Create(pDocPane);
				obj->Add(_T("Đơn duyệt tự động"), _T(""), &m_wndPrescriptionEX);
				m_wndPrescriptionClearOrder.Create(pDocPane);
				obj->Add(_T("Đơn thuốc thanh toán, bệnh nhân không lĩnh"), _T(""), &m_wndPrescriptionClearOrder);
			}

			m_wndSaleOrderList.Create(pDocPane);
			obj->Add(_T("Đơn thuốc bán lẻ"), _T(""), &m_wndSaleOrderList);
			m_wndPrescriptionReturnList.Create(pDocPane);
			obj->Add(_T("Prescription Return Orders"), _T(""), &m_wndPrescriptionReturnList);		
		}
		obj = pDocPane->AddPane(_T("Warehouse"));
		if(obj)
			
			//m_wndStorageMovementImportList.SetImportForm(true);
			//3m_wndStorageMovementImportList.Create(pDocPane);
			//m_wndBalanceImportList.Create(pDocPane);			

			obj->AddCaption(_T("Import-Export Management"));
			
			
			//obj->Add(_T("Balance Import"), _T(""), &m_wndBalanceImportList);
			if (CheckPermission(_T("02"))){
				m_wndStorageMovementList.Create(pDocPane);
				obj->Add(_T("Transfer Orders"), _T(""), &m_wndStorageMovementList);
			}
			
			//Loai tu truc
			if (CheckPermission(_T("04")))
			{
				m_wndStorageMedicalCabinetList.Create(pDocPane);
				obj->Add(_T("Medical Cabinet Orders"), _T(""), &m_wndStorageMedicalCabinetList);
			}
			if (CheckPermission(_T("03")))
			{
				m_wndStorageTransactionList.Create(pDocPane);
				obj->Add(_T("Department Issue Orders"), _T(""), &m_wndStorageTransactionList);
			}
			// Don thuoc cap phat noi tru
			m_wndPrescriptionIN.Create(pDocPane);
			obj->Add(_T("Inpatient Prescription Orders"), _T(""), &m_wndPrescriptionIN);

			m_wndPrescriptionOrderINEX.Create(pDocPane);
				obj->Add(_T("Đơn duyệt tự động nội trú"), _T(""), &m_wndPrescriptionOrderINEX);
 
			if (CheckPermission(_T("05")))
			{
				m_wndStorageDeliveryOrderList.Create(pDocPane);
				obj->Add(_T("Other Export"), _T(""), &m_wndStorageDeliveryOrderList);
			}
			
			if (CheckPermission(_T("05")))
			{
				m_wndStorageImportList.Create(pDocPane);
				obj->Add(_T("Other Import"), _T(""), &m_wndStorageImportList);
			}

			if (CheckPermission(_T("06")))
			{
				m_wndStorageReturnOrderList.Create(pDocPane);
				obj->Add(_T("Return Order"), _T(""), &m_wndStorageReturnOrderList);
			}
			
			// Pha che thuoc ung thu
			if (CheckPermission(_T("07")))
			{
				m_wndCancerPrescriptionIN.Create(pDocPane);
				obj->Add(_T("Cancer Orders"), _T(""), &m_wndCancerPrescriptionIN);
			}

			//Duyệt hồ sơ ra viện 
			if (CheckPermission(_T("10.17")))
			{
				m_wndDocApprove.Create(pDocPane);
				obj->Add(_T("PM_DOCUMENT_APPROVE"), _T(""), &m_wndDocApprove);
			}
            
			if (CheckPermission(_T("PM.100.01")))
			{
				m_wndDocApproveA11.Create(pDocPane);
				obj->Add(_T("Duyệt hồ sơ ra viện - A11"), _T(""), &m_wndDocApproveA11);
			}

			if (CheckPermission(_T("10.17")))
			{
				m_wndAdviseOrder.Create(pDocPane);
				obj->Add(_T("Tư vấn dùng thuốc"), _T(""), &m_wndAdviseOrder);
			}

		//	if (CheckPermission(_T("10.17")))
			{
				m_wndA11OrderList.Create(pDocPane);
				obj->Add(_T("Export To A11"), _T(""), &m_wndA11OrderList);
			}
			
//			m_wndStorageAdjImport.Create(pDocPane);
//			obj->Add(_T("Adjustment Import"), _T(""), &m_wndStorageAdjImport);
			m_wndStorageAdjImport.Create(pDocPane);
			obj->Add(_T("Adjustment Import"), _T(""), &m_wndStorageAdjImport);
			obj->AddCaption(_T("Storage Management"));	

			if (CheckPermission(_T("08")))
			{
				m_wndStorageInventory.Create(pDocPane);
				obj->Add(_T("Inventory Control"), _T(""), &m_wndStorageInventory);
			}
			if (CheckPermission(_T("09")))
			{
				m_wndStorageAdjustmentList.Create(pDocPane);
				obj->Add(_T("Inventory and Adjustment"), _T(""), &m_wndStorageAdjustmentList);
			}

/*			
			obj->AddCaption(_T("Lists"));
			if (CheckPermission(_T("10.01")))
				obj->Add(_T("Warehouses"), _T(""), &m_wndStorageList);
			if (CheckPermission(_T("10.04")))
				obj->Add(_T("Vendor-Customers"), _T(""), &m_wndAdBusinessPartnerList);
			if (CheckPermission(_T("10.03")))
				obj->Add(_T("Manufactures"), _T(""), &m_wndManufactureList);

		//	obj->Add(_T("Item Types"), _T(""), &m_wndProductType);
			if (CheckPermission(_T("10.05")))
				obj->Add(_T("Item Categorys"), _T(""), &m_wndProductCategory);
			if (CheckPermission(_T("10.06")))
				obj->Add(_T("Active Principles"), _T(""), &m_wndProductClass);
			if (CheckPermission(_T("10.07")))
				obj->Add(_T("Material-Items"), _T(""), &m_wndProduct);
*/

		obj = pDocPane->AddPane(_T("Gói thầu && HĐ"), _T("Tender && contract management"), NULL);
		if (obj)
		{
			obj->Add(_T("Danh mục thầu"), _T(""), &m_wndProdutTenderList);
			obj->Add(_T("Quản lý gói thầu"), _T(""), &m_wndContractPackageList);
			obj->Add(_T("Quản lý hợp đồng"), _T(""), &m_wndContractList);
			if (CheckPermission(_T("01.08")) && GetModuleID() == _T("PM"))
				obj->Add(_T("Đề nghị thanh toán"), _T(""), &m_wndPaymentOrderList);
			obj->Add(_T("Thanh toán hóa đơn"), _T(""), &m_wndPurchaseOrderInvoicePaymentList);
			obj->Add(_T("Thanh toán hợp đồng"), _T(""), &m_wndContractPaymentOrderList);
			obj->Add(_T("Thanh lý hợp đồng"), _T(""), &m_wndContractLiquidationList);
			//	obj->Add(_T("Issue Payments"), _T(""), &m_wndPurchaseOrderList);

		}

		obj = NULL;
		if (CheckPermission(_T("10")))
			obj = pDocPane->AddPane(_T("Administration"), _T(""));
		if (obj)
		{
			obj->AddCaption(_T("Administration"));
			if (CheckPermission(_T("10.10")))
				obj->Add(_T("Phân quyền kho"), _T(""), &m_wndPermSetup);

			if (CheckPermission(_T("10.30")))
				obj->Add(_T("Phân quyền chức năng"), _T(""), &m_wndUser);
			obj->Add(_T("Department Index"), _T(""), &m_wndDeptIndexSetup);
			obj->AddCaption(_T("Lists"));

			//obj->Add(_T("Contract List"), _T(""), &m_wndContractList);
			obj->Add(_T("Bank List"), _T(""), &m_wndBankList);
			
			
			if (CheckPermission(_T("10.01")))
				obj->Add(_T("Warehouses"), _T(""), &m_wndStorageList);

			//m_wndDeliveryMethod.Create(GetPane());
			//obj->Add(_T("Delivery Method"), _T(""), &m_wndDeliveryMethod);
			//m_wndDeliveryTerm.Create(GetPane());
			//obj->Add(_T("Delivery Terms"), _T(""), &m_wndDeliveryTerm);

			//m_wndPaymentTerm.Create(GetPane());
			//obj->Add(_T("Payment Terms"), _T(""), &m_wndPaymentTerm);
			if (CheckPermission(_T("10.08")))
				obj->Add(_T("Product Resources"), _T(""), &m_wndProductResource);
			//if (CheckPermission(_T("10.08")))
			obj->Add(_T("Payment Resources"), _T(""), &m_wndPaymentResource);
			obj->Add(_T("Vendor Type"), _T(""), &m_wndPartnerType);
			if (CheckPermission(_T("10.04")))
				obj->Add(_T("Vendor-Customers"), _T(""), &m_wndAdBusinessPartnerList);
			if (CheckPermission(_T("10.02")))
				obj->Add(_T("Producing Country"), _T(""), &m_wndCountry);
			if (CheckPermission(_T("10.03")))
				obj->Add(_T("Product Manufacture"), _T(""), &m_wndManufactureList);
			m_wndUom.Create(GetPane());
			obj->Add(_T("Uom List"), _T(""), &m_wndUom);
			
			obj->Add(_T("Item Types"), _T(""), &m_wndProductType);
			if (CheckPermission(_T("10.05")))
				obj->Add(_T("Item Categorys"), _T(" "), &m_wndProductCategory);
			if (CheckPermission(_T("10.06")))
				obj->Add(_T("Active Principles"), _T(""), &m_wndProductClass);
			if (CheckPermission(_T("10.07")))
				obj->Add(_T("Material-Items"), _T(""), &m_wndProduct);
			obj->Add(_T("Product Tender"), _T(""), &m_wndProductTender);
		}

		
}

void CMainFrame::OnFileReports()
{
	if (!CheckPermission(_T("12")))
		return;
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
}



void CMainFrame::OnFileChangepassword()
{
	// TODO: Add your command handler code here
	CAdChangePasswordDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnAppExit()
{
	// TODO: Add your command handler code here
	OnClose();
}

void CMainFrame::OnFileCommand()
{
	// TODO: Add your command handler code here
}

void CMainFrame::OnFileSetupmember()
{
	if (!CheckPermission(_T("11")))
		return;
	CMemberDialog dlg(this); 
	dlg.DoModal();

}

void CMainFrame::OnCommandRecalorderquanlity()
{
	// TODO: Add your command handler code here
	CVIMESRecalOrderQuanlityDiaLog dlg(this);
	dlg.DoModal();
 
}

void CMainFrame::OnFilePatientprofiletrack()
{
	// TODO: Add your command handler code here
	if (!CheckPermission(_T("13.03")))
	{
		AfxMessageBox(_T("Permission Denied."));
		return;
	}
	CPatientProfileDialog dlg(this, 0);
	dlg.DoModal();
}

void CMainFrame::OnFileSetupdrugcancer()
{
	// TODO: Add your command handler code here
	//CHMSDrugCancerSetupDlg dlg(this);
	CHMSDrugCancerByClassSetupDlg dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileSetupdruglevel()
{
	// TODO: Add your command handler code here
	if (!CheckPermission(_T("10.16")))
	{
		AfxMessageBox(_T("Permission Denied."));
		return;
	}
	CPMDrugLevelSetup dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnMenu()
{
	// TODO: Add your command handler code here
	CFormFooterSetup dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSettingsImportinsurancelist()
{
	CImportInsuranceListDialog dlg(this);
	dlg.DoModal();
}
#include "HMSCancerTreatDiag.h"

void CMainFrame::OnSettingsTreatDiagram()
{
	CHMSCancerTreatDiag dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
}

#include "HMSPatientDocumentDialog.h"
void CMainFrame::OnPatientProfile()
{
	CHMSPatientDocumentDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
}
#include "PMSSetUpPhongXa.h"
#include ".\mainfrm.h"
void CMainFrame::OnSetupIot131()
{
	CPMSSetUpPhongXa dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
}

void CMainFrame::OnCommandLockorder()
{
	// TODO: Add your command handler code here
	if (!CheckPermission(_T("40.03")))
	{
		ShowMessageBox(_T("Permission Denied."));
		return;
	}
	CPurchaseOrderLockDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSettingsInteractionsetup()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (pMF->CheckPermission(_T("18")))
	{
		CPMInteractionSetupDlg dlg(this);
		dlg.DoModal();
	}
	else
	{
		ShowMessageBox(_T("Permission Denied."));
	}
	
}

void CMainFrame::OnCommandPosttonationalgate()
{
	// TODO: Add your command handler code here
	CPMPostNationalGateDialog dlg(this);
	dlg.DoModal();
	return;
	CRecord rs(&m_db);
	CString szSQL;
	long nStorage_id = 0;
	szSQL.Format(_T("hms_lienthong_createauto('%s', '%s')")
				, GetModuleID(), GetCurrentUser());
	ExecDML(szSQL);
	CHMSLienThongNhaThuoc lt;
	szSQL.Format(_T("select * from hms_lienthong_duoc"));
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("hld_stockid"), nStorage_id);
		lt.OnPostAuto(nStorage_id);
		rs.MoveNext();
	}
}

void CMainFrame::OnSettingsExpense()
{
	CHMSExpenseDialog dlg(this);
	dlg.DoModal();
}