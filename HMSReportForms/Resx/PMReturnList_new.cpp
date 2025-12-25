#include "PMReturnList.h"
#include "MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPMReturnList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMReturnList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CPMReturnList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMReturnList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMReturnList *)pWnd)->OnToDateCheckValue();
} 
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMReturnList* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPMReturnList *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnSupplierAddNew();
}*/
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMReturnList* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMReturnList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMReturnList* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CPMReturnList *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMReturnList* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CPMReturnList *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnSourceAddNew();
}*/
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMReturnList* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CPMReturnList *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnPaymentMethodAddNew();
}*/
static void _OnContractSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMReturnList* )pWnd)->OnContractSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnContractSelendokFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnContractSelendok();
}
/*static void _OnContractSetfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnContractKillfocus();
}*/
/*static void _OnContractKillfocusFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnContractKillfocus();
}*/
static long _OnContractLoadDataFnc(CWnd *pWnd){
	return ((CPMReturnList *)pWnd)->OnContractLoadData();
}
/*static void _OnContractAddNewFnc(CWnd *pWnd){
	((CPMReturnList *)pWnd)->OnContractAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CPMReturnList*)pWnd)->OnAllSelect();
}
static void _OnIsPaidSelectFnc(CWnd *pWnd){
	  ((CPMReturnList*)pWnd)->OnIsPaidSelect();
}
static void _OnNotPaidSelectFnc(CWnd *pWnd){
	  ((CPMReturnList*)pWnd)->OnNotPaidSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMReturnList *pVw = (CPMReturnList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMReturnList *pVw = (CPMReturnList *)pWnd;
	pVw->OnExportSelect();
} 
CPMReturnList::CPMReturnList(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMReturnList::~CPMReturnList(){
}
void CPMReturnList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 210);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
	m_wndYear.Create(this,105, 30, 290, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Period"), 295, 30, 375, 55);
	m_wndReportPeriod.Create(this,380, 30, 570, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 290, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 60, 375, 85);
	m_wndToDate.Create(this,380, 60, 570, 85); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 90, 100, 115);
	m_wndSupplier.Create(this,105, 90, 570, 115); 
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 120, 100, 145);
	m_wndStorage.Create(this,105, 120, 570, 145); 
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 150, 100, 175);
	m_wndItemGroup.Create(this,105, 150, 290, 175); 
	m_wndSourceLabel.Create(this, _T("Source"), 295, 150, 375, 175);
	m_wndSource.Create(this,380, 150, 570, 175); 
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 10, 180, 100, 205);
	m_wndPaymentMethod.Create(this,105, 180, 290, 205); 
	m_wndContractLabel.Create(this, _T("Contract"), 295, 180, 375, 205);
	m_wndContract.Create(this,380, 180, 570, 205); 
	m_wndAll.Create(this, _T("All"), 5, 215, 80, 240);
	m_wndIsPaid.Create(this, _T("Is Paid"), 85, 215, 225, 240);
	m_wndNotPaid.Create(this, _T("Not paid"), 230, 215, 370, 240);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 375, 215, 485, 240);
	m_wndExport.Create(this, _T("&Export"), 490, 215, 570, 240);

}
void CPMReturnList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(1024);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndItemGroup.SetCheckValue(true);
	m_wndItemGroup.LimitText(1024);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(1024);
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(1024);
	m_wndContract.SetCheckValue(true);
	m_wndContract.LimitText(35);














	m_wndContract.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndContract.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPMReturnList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndItemGroup.SetEvent(WE_SELENDOK, _OnItemGroupSelendokFnc);
	//m_wndItemGroup.SetEvent(WE_SETFOCUS, _OnItemGroupSetfocusFnc);
	//m_wndItemGroup.SetEvent(WE_KILLFOCUS, _OnItemGroupKillfocusFnc);
	m_wndItemGroup.SetEvent(WE_SELCHANGE, _OnItemGroupSelectChangeFnc);
	m_wndItemGroup.SetEvent(WE_LOADDATA, _OnItemGroupLoadDataFnc);
	//m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	m_wndContract.SetEvent(WE_SELENDOK, _OnContractSelendokFnc);
	//m_wndContract.SetEvent(WE_SETFOCUS, _OnContractSetfocusFnc);
	//m_wndContract.SetEvent(WE_KILLFOCUS, _OnContractKillfocusFnc);
	m_wndContract.SetEvent(WE_SELCHANGE, _OnContractSelectChangeFnc);
	m_wndContract.SetEvent(WE_LOADDATA, _OnContractLoadDataFnc);
	//m_wndContract.SetEvent(WE_ADDNEW, _OnContractAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndIsPaid.SetEvent(WE_CLICK, _OnIsPaidSelectFnc);
	m_wndNotPaid.SetEvent(WE_CLICK, _OnNotPaidSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	SetMode(VM_NONE);

}
void CPMReturnList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_TextEx(pDX, m_wndContract.GetDlgCtrlID(), m_szContractKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndIsPaid.GetDlgCtrlID(), m_nIsPaid);
	DDX_Radio(pDX, m_wndNotPaid.GetDlgCtrlID(), m_nNotPaid);

}
void CPMReturnList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("ReportPeriod")] =  m_szReportPeriodKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Supplier")] =  m_szSupplierKey;
	m_jData[_T("Storage")] =  m_szStorageKey;
	m_jData[_T("ItemGroup")] =  m_szItemGroupKey;
	m_jData[_T("Source")] =  m_szSourceKey;
	m_jData[_T("PaymentMethod")] =  m_szPaymentMethodKey;
	m_jData[_T("Contract")] =  m_szContractKey;
	m_jData[_T("All")] =  m_nAll;
	m_jData[_T("IsPaid")] =  m_nIsPaid;
	m_jData[_T("NotPaid")] =  m_nNotPaid;
	}
	else
	{
			
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Supplier")].GetValue(m_szSupplierKey);
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	m_jData[_T("ItemGroup")].GetValue(m_szItemGroupKey);
	m_jData[_T("Source")].GetValue(m_szSourceKey);
	m_jData[_T("PaymentMethod")].GetValue(m_szPaymentMethodKey);
	m_jData[_T("Contract")].GetValue(m_szContractKey);
	m_jData[_T("All")].GetValue(m_nAll);
	m_jData[_T("IsPaid")].GetValue(m_nIsPaid);
	m_jData[_T("NotPaid")].GetValue(m_nNotPaid);
	}

}
void CPMReturnList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSupplierKey.Empty();
	m_szStorageKey.Empty();
	m_szItemGroupKey.Empty();
	m_szSourceKey.Empty();
	m_szPaymentMethodKey.Empty();
	m_szContractKey.Empty();
	m_nAll=0;
	m_nIsPaid=0;
	m_nNotPaid=0;

}
int CPMReturnList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CPMReturnList::OnYearChange(){
	
} */
/*void CPMReturnList::OnYearSetfocus(){
	
} */
/*void CPMReturnList::OnYearKillfocus(){
	
} */
int CPMReturnList::OnYearCheckValue(){
	return 0;
} 
void CPMReturnList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMReturnList::OnReportPeriodSelendok(){
	 
}
/*void CPMReturnList::OnReportPeriodSetfocus(){
	
}*/
/*void CPMReturnList::OnReportPeriodKillfocus(){
	
}*/
long CPMReturnList::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReportPeriodKey
};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMReturnList::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPMReturnList::OnFromDateChange(){
	
} */
/*void CPMReturnList::OnFromDateSetfocus(){
	
} */
/*void CPMReturnList::OnFromDateKillfocus(){
	
} */
int CPMReturnList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMReturnList::OnToDateChange(){
	
} */
/*void CPMReturnList::OnToDateSetfocus(){
	
} */
/*void CPMReturnList::OnToDateKillfocus(){
	
} */
int CPMReturnList::OnToDateCheckValue(){
	return 0;
} 
void CPMReturnList::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMReturnList::OnSupplierSelendok(){
	 
}
/*void CPMReturnList::OnSupplierSetfocus(){
	
}*/
/*void CPMReturnList::OnSupplierKillfocus(){
	
}*/
long CPMReturnList::OnSupplierLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSupplier.IsSearchKey() && !m_szSupplierKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSupplierKey
};
	m_wndSupplier.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSupplier.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMReturnList::OnSupplierAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMReturnList::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMReturnList::OnStorageSelendok(){
	 
}
/*void CPMReturnList::OnStorageSetfocus(){
	
}*/
/*void CPMReturnList::OnStorageKillfocus(){
	
}*/
long CPMReturnList::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMReturnList::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMReturnList::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMReturnList::OnItemGroupSelendok(){
	 
}
/*void CPMReturnList::OnItemGroupSetfocus(){
	
}*/
/*void CPMReturnList::OnItemGroupKillfocus(){
	
}*/
long CPMReturnList::OnItemGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemGroup.IsSearchKey() && !m_szItemGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemGroupKey
};
	m_wndItemGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMReturnList::OnItemGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMReturnList::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMReturnList::OnSourceSelendok(){
	 
}
/*void CPMReturnList::OnSourceSetfocus(){
	
}*/
/*void CPMReturnList::OnSourceKillfocus(){
	
}*/
long CPMReturnList::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSourceKey
};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMReturnList::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMReturnList::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMReturnList::OnPaymentMethodSelendok(){
	 
}
/*void CPMReturnList::OnPaymentMethodSetfocus(){
	
}*/
/*void CPMReturnList::OnPaymentMethodKillfocus(){
	
}*/
long CPMReturnList::OnPaymentMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentMethodKey
};
	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMReturnList::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMReturnList::OnContractSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMReturnList::OnContractSelendok(){
	 
}
/*void CPMReturnList::OnContractSetfocus(){
	
}*/
/*void CPMReturnList::OnContractKillfocus(){
	
}*/
long CPMReturnList::OnContractLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndContract.IsSearchKey() && !m_szContractKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szContractKey
};
	m_wndContract.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndContract.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMReturnList::OnContractAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMReturnList::OnAllSelect(){
	
}
void CPMReturnList::OnIsPaidSelect(){
	
}
void CPMReturnList::OnNotPaidSelect(){
	
}
void CPMReturnList::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMReturnList::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
