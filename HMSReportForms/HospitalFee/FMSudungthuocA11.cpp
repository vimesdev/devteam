#include "stdafx.h"
#include "FMSudungthuocA11.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSudungthuocA11 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSudungthuocA11 *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSudungthuocA11* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CFMSudungthuocA11 *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnStockAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSudungthuocA11* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMSudungthuocA11 *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnTypeAddNew();
}*/
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSudungthuocA11* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CFMSudungthuocA11 *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnGroupAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSudungthuocA11* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CFMSudungthuocA11 *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CFMSudungthuocA11 *)pWnd)->OnItemAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMSudungthuocA11*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CFMSudungthuocA11*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CFMSudungthuocA11*)pWnd)->OnOutPatientSelect();
}
static void _OnOutInDeptSelectFnc(CWnd *pWnd){
	  ((CFMSudungthuocA11*)pWnd)->OnOutInDeptSelect();
}
static void _OnByDischargedDateSelectFnc(CWnd *pWnd){
	 ((CFMSudungthuocA11*)pWnd)->OnByDischargedDateSelect();
}
static void _OnInsuranceUnpaidSelectFnc(CWnd *pWnd){
	 ((CFMSudungthuocA11*)pWnd)->OnInsuranceUnpaidSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMSudungthuocA11 *pVw = (CFMSudungthuocA11 *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMSudungthuocA11*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMSudungthuocA11*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMSudungthuocA11*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMSudungthuocA11*)pWnd)->OnListDeleteItem();
} 
static void _OnAllFeeSelectFnc(CWnd *pWnd){
	 ((CFMSudungthuocA11*)pWnd)->OnAllFeeSelect();
}
static void _OnInsurancePaidSelectFnc(CWnd *pWnd){
	 ((CFMSudungthuocA11*)pWnd)->OnInsurancePaidSelect();
}
static int _OnAddFMSudungthuocA11Fnc(CWnd *pWnd){
	 return ((CFMSudungthuocA11*)pWnd)->OnAddFMSudungthuocA11();
} 
static int _OnEditFMSudungthuocA11Fnc(CWnd *pWnd){
	 return ((CFMSudungthuocA11*)pWnd)->OnEditFMSudungthuocA11();
} 
static int _OnDeleteFMSudungthuocA11Fnc(CWnd *pWnd){
	 return ((CFMSudungthuocA11*)pWnd)->OnDeleteFMSudungthuocA11();
} 
static int _OnSaveFMSudungthuocA11Fnc(CWnd *pWnd){
	 return ((CFMSudungthuocA11*)pWnd)->OnSaveFMSudungthuocA11();
} 
static int _OnCancelFMSudungthuocA11Fnc(CWnd *pWnd){
	 return ((CFMSudungthuocA11*)pWnd)->OnCancelFMSudungthuocA11();
} 
CFMSudungthuocA11::CFMSudungthuocA11(CWnd *pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 560;
	SetDefaultValues();
}
CFMSudungthuocA11::~CFMSudungthuocA11(){
}
void CFMSudungthuocA11::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 520);
	m_wndObjectInfo.Create(this, _T("Object"), 10, 180, 425, 455);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.Create(this,95, 60, 425, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 90, 90, 115);
	m_wndType.Create(this,95, 90, 425, 115); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 120, 90, 145);
	m_wndGroup.Create(this,95, 120, 425, 145); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 150, 90, 175);
	m_wndItem.Create(this,95, 150, 425, 175); 
	m_wndAll.Create(this, _T("All"), 15, 425, 95, 450);
	m_wndInPatient.Create(this, _T("InPatient"), 100, 425, 180, 450);
	m_wndOutPatient.Create(this, _T("OutPatient"), 185, 425, 265, 450);
	m_wndOutInDept.Create(this, _T("OutInDept"), 270, 425, 420, 450);
	m_wndByDischargedDate.Create(this, _T("By Discharged Date"), 15, 460, 200, 485);
	m_wndInsuranceUnpaid.Create(this, _T("InsuranceUnpaid"), 270, 490, 400, 515);
	m_wndExport.Create(this, _T("&Export"), 330, 525, 430, 550);
	m_wndList.Create(this,15, 205, 420, 420); 
	m_wndAllFee.Create(this, _T("AllFee"), 15, 490, 95, 515);
	m_wndInsurancePaid.Create(this, _T("InsurancePaid"), 100, 490, 258, 515);

}
void CFMSudungthuocA11::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(1024);
		m_wndItem.Format(3, 2);
	m_wndItem.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(1, _T("Code"), CFMT_TEXT, 70);
	m_wndItem.InsertColumn(2, _T("Description"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.SetCheckBox(TRUE);

		m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 380);

	m_wndGroup.Format(3, 2);
	m_wndGroup.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(2, _T("CategoryID"), CFMT_TEXT, 400);
	
	m_wndStock.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);











}
void CFMSudungthuocA11::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndOutInDept.SetEvent(WE_CLICK, _OnOutInDeptSelectFnc);
	m_wndByDischargedDate.SetEvent(WE_CLICK, _OnByDischargedDateSelectFnc);
	m_wndInsuranceUnpaid.SetEvent(WE_CLICK, _OnInsuranceUnpaidSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAllFee.SetEvent(WE_CLICK, _OnAllFeeSelectFnc);
	m_wndInsurancePaid.SetEvent(WE_CLICK, _OnInsurancePaidSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMSudungthuocA11Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMSudungthuocA11Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMSudungthuocA11Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMSudungthuocA11Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMSudungthuocA11Fnc, 0, 'T', VK_CONTROL);

	m_szFromDate =  pMF->GetSysDate()+ _T("00:00");	
	m_szToDate =pMF->GetSysDate() + _T("23:59");
	UpdateData(false);

	OnListLoadData();

}
void CFMSudungthuocA11::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndOutInDept.GetDlgCtrlID(), m_nOutInDept);
	DDX_Check(pDX, m_wndByDischargedDate.GetDlgCtrlID(), m_bByDischargedDate);
	DDX_Check(pDX, m_wndInsuranceUnpaid.GetDlgCtrlID(), m_bInsuranceUnpaid);
	DDX_Check(pDX, m_wndAllFee.GetDlgCtrlID(), m_bAllFee);
	DDX_Check(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_bInsurancePaid);

}
void CFMSudungthuocA11::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Stock")] =  m_szStockKey;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("Item")] =  m_szItemKey;
	m_jData[_T("All")] =  m_nAll;
	m_jData[_T("InPatient")] =  m_nInPatient;
	m_jData[_T("OutPatient")] =  m_nOutPatient;
	m_jData[_T("OutInDept")] =  m_nOutInDept;
	m_jData[_T("ByDischargedDate")] =  m_bByDischargedDate;
	m_jData[_T("InsuranceUnpaid")] =  m_bInsuranceUnpaid;
	m_jData[_T("AllFee")] =  m_bAllFee;
	m_jData[_T("InsurancePaid")] =  m_bInsurancePaid;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Stock")].GetValue(m_szStockKey);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("Item")].GetValue(m_szItemKey);
	m_jData[_T("All")].GetValue(m_nAll);
	m_jData[_T("InPatient")].GetValue(m_nInPatient);
	m_jData[_T("OutPatient")].GetValue(m_nOutPatient);
	m_jData[_T("OutInDept")].GetValue(m_nOutInDept);
	m_jData[_T("ByDischargedDate")].GetValue(m_bByDischargedDate);
	m_jData[_T("InsuranceUnpaid")].GetValue(m_bInsuranceUnpaid);
	m_jData[_T("AllFee")].GetValue(m_bAllFee);
	m_jData[_T("InsurancePaid")].GetValue(m_bInsurancePaid);
	}

}
void CFMSudungthuocA11::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMSudungthuocA11::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMSudungthuocA11::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_szGroupKey.Empty();
	m_szItemKey.Empty();
	m_nAll=0;
	m_nInPatient=0;
	m_nOutPatient=0;
	m_nOutInDept=0;
	m_bByDischargedDate=FALSE;
	m_bInsuranceUnpaid=FALSE;
	m_bAllFee=FALSE;
	m_bInsurancePaid=FALSE;

}
int CFMSudungthuocA11::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
/*void CFMSudungthuocA11::OnFromDateChange(){
	
} */
/*void CFMSudungthuocA11::OnFromDateSetfocus(){
	
} */
/*void CFMSudungthuocA11::OnFromDateKillfocus(){
	
} */
int CFMSudungthuocA11::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMSudungthuocA11::OnToDateChange(){
	
} */
/*void CFMSudungthuocA11::OnToDateSetfocus(){
	
} */
/*void CFMSudungthuocA11::OnToDateKillfocus(){
	
} */
int CFMSudungthuocA11::OnToDateCheckValue(){
	return 0;
} 
void CFMSudungthuocA11::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSudungthuocA11::OnStockSelendok(){
	 
}
/*void CFMSudungthuocA11::OnStockSetfocus(){
	
}*/
/*void CFMSudungthuocA11::OnStockKillfocus(){
	
}*/
long CFMSudungthuocA11::OnStockLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0)
	{
		szWhere.Format(_T(" AND msl_storage_id=%d "), ToInt(m_szStockKey));
	}
	CString szStorages;
	//szStorages = pMF->m_szStoragePerm;
	if (!szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" AND msl_storage_id in(%s) "), szStorages);
	//szWhere.AppendFormat(_T(" AND msl_storage_id in(%s) "), pMF->m_szStorages);

	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, ") \
		         _T("msl_name as name ") \
		         _T("FROM m_storagelist ") \
				 _T("WHERE msl_org_id in('GL','PM','WM') and msl_isactive='Y' %s ") \
				 _T("ORDER BY msl_storage_id"),
				 szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMSudungthuocA11::OnStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMSudungthuocA11::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSudungthuocA11::OnTypeSelendok(){
	 
}
/*void CFMSudungthuocA11::OnTypeSetfocus(){
	
}*/
/*void CFMSudungthuocA11::OnTypeKillfocus(){
	
}*/
long CFMSudungthuocA11::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" and mpt_product_type_id='%s' "), m_szTypeKey);
	}

	//szWhere.AppendFormat(_T(" AND hfg_moduleid = '%s'"), pMF->GetModuleID());

	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select mpt_product_type_id as id,") \
				_T("        mpt_name as name") \
				_T(" from m_product_type") \
				_T(" where substr(mpt_product_type_id, 1, 1)='A'") \
				_T(" order by id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMSudungthuocA11::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMSudungthuocA11::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSudungthuocA11::OnGroupSelendok(){
	 
}
/*void CFMSudungthuocA11::OnGroupSetfocus(){
	
}*/
/*void CFMSudungthuocA11::OnGroupKillfocus(){
	
}*/
long CFMSudungthuocA11::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" AND pmg_id='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT mpc_product_category_id as categoryid,") \
				_T("        mpc_code as id,") \
				_T("        mpc_name as name") \
				_T(" FROM m_product_category") \
				_T(" WHERE mpc_level > 0") \
				_T(" CONNECT BY PRIOR mpc_product_category_id=mpc_parent_id") \
				_T(" ORDER SIBLINGS BY mpc_product_category_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("categoryid")), 
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMSudungthuocA11::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMSudungthuocA11::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSudungthuocA11::OnItemSelendok(){
	 
}
/*void CFMSudungthuocA11::OnItemSetfocus(){
	
}*/
/*void CFMSudungthuocA11::OnItemKillfocus(){
	
}*/
long CFMSudungthuocA11::OnItemLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemKey
};
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFMSudungthuocA11::OnItemAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMSudungthuocA11::OnAllSelect(){
	
}
void CFMSudungthuocA11::OnInPatientSelect(){
	
}
void CFMSudungthuocA11::OnOutPatientSelect(){
	
}
void CFMSudungthuocA11::OnOutInDeptSelect(){
	
}
	void CFMSudungthuocA11::OnByDischargedDateSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMSudungthuocA11::OnInsuranceUnpaidSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMSudungthuocA11::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldGroup, szNewGroup;
	double nQty = 0, nCost = 0, nQty2 = 0, nCost2 = 0;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();

	int nRow =0, nCol = 0, nIdx = 1;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(3, 16);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 6);
	xls.SetColumnWidth(6, 12);
	xls.SetColumnWidth(7, 12);
	xls.SetColumnWidth(8, 25);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 10);
	xls.SetColumnWidth(11, 12);
	xls.SetColumnWidth(12, 6);
	xls.SetColumnWidth(14, 20);

	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol, nRow + 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);

	xls.SetCellText(0, 2, _T("THU\x1ED0\x43 \x42\x1EA2O HI\x1EC2M \x110\x1EA8Y R\x41 NGO\xC0I \x44\x41NH M\x1EE4\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("S\x1ED1 HS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("H\x1ECD t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("\x43\x1EA5p \x62\x1EAD\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 4, _T("Ng\xE0y v\xE0o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 4, _T("Ng\xE0y r\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 4, _T("T\xEAn thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 4, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 4, _T("Kho"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 4, _T("Hoa Don DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 4, _T("Số thẻ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 12);
	xls.SetMerge(3, 3, 0, 12);

	szSQL = GetQueryString4_3();
	_msg(_T("%s"),szSQL);
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}

	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){
		rs.GetValue(_T("docno"), szNewGroup);
		if (szNewGroup != szOldGroup)
		{	
			if(nCost > 0)
			{
				xls.SetCellText(nCol+2, nRow, _T("T\x1ED5ng thu\x1ED1\x63: "), FMT_TEXT, true);
				xls.SetCellText(nCol+9, nRow, double2str(nQty), FMT_NUMBER1, true);
				xls.SetCellText(nCol+11, nRow, double2str(nCost), FMT_NUMBER1, true);
				nQty2 += nQty;
				nCost2 += nCost;
				nQty = 0;
				nCost = 0;
				nRow++;
			}
			szOldGroup = szNewGroup;
			nIdx = 1;
		}

		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, szNewGroup, FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("pobject"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("prank"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("admitdate"), tmpStr);
		xls.SetCellText(nCol+6, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("enddate"), tmpStr);
		xls.SetCellText(nCol+7, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("productname"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("qty"), tmpStr);
		nQty += str2double(tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("price"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("amount"), tmpStr);
		nCost += str2double(tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("storageid"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("object_fi"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("card_no"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	if (nCost > 0)
	{
		xls.SetCellText(nCol+2, nRow, _T("T\x1ED5ng thu\x1ED1\x63: "), FMT_TEXT, true);
		xls.SetCellText(nCol+9, nRow, double2str(nQty), FMT_NUMBER1, true);
		xls.SetCellText(nCol+11, nRow, double2str(nCost), FMT_NUMBER1, true);
		nQty2 += nQty;
		nCost2 += nCost;
		nRow++;
	}

	if (nCost2 > 0)
	{									
		TranslateString(_T("T\x1ED5ng \x63\x1ED9ng: "), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT, true, 11, 0);
		tmpStr.Format(_T("%.f"), nQty2);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_NUMBER1, true, 11, 0);
		tmpStr.Format(_T("%.f"), nCost2);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_NUMBER1, true, 11, 0);							
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao su dung thuocA11.xls"));
	
} 
void CFMSudungthuocA11::OnListDblClick(){
	
} 
void CFMSudungthuocA11::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMSudungthuocA11::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMSudungthuocA11::OnListLoadData(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select cast(ho_id as int) as ObjectID, ho_desc as ObjectName from hms_object where ho_active='Y' order by ObjectID "));
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ObjectID")), 
			rs.GetValue(_T("ObjectName")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
	void CFMSudungthuocA11::OnAllFeeSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMSudungthuocA11::OnInsurancePaidSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CFMSudungthuocA11::OnAddFMSudungthuocA11(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMSudungthuocA11::OnEditFMSudungthuocA11(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMSudungthuocA11::OnDeleteFMSudungthuocA11(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelFMSudungthuocA11();
 	}
	return 0;
}
int CFMSudungthuocA11::OnSaveFMSudungthuocA11(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFMSudungthuocA11ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMSudungthuocA11::OnCancelFMSudungthuocA11(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CFMSudungthuocA11::OnFMSudungthuocA11ListLoadData(){
	return 0;
}
CString CFMSudungthuocA11::GetQueryString4_3(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szOrderBy;
	CString szDept, szFeeCondition;

	if (!m_szStockKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_storage_id = %d "), ToInt(m_szStockKey));

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szDept.IsEmpty())
				szDept += _T(",");
			szDept.AppendFormat(_T(" %s "), m_wndList.GetItemText(i, 0));
		}
	}

	if (!szDept.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object IN(%s)"), szDept);

	if(m_bInsuranceUnpaid)
		szWhere.AppendFormat(_T(" and fe.hfe_discount =0 "), szDept);
	else if(m_bInsurancePaid)
		szWhere.AppendFormat(_T(" and fe.hfe_discount >0  "), szDept);

	//szWhere.AppendFormat(_T(" AND fi.hfe_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	//	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	szSQL.Format(_T(" select   fe.hfe_docno AS docno,") \
				_T(" 		  get_patientname(fe.hfe_docno) AS pname,") \
				_T(" 		  hms_getobjectname(hd_object) AS pobject,") \
				_T(" 		  get_syssel_desc('hms_rank', hp_rank) AS prank,") \
				_T(" 		  fe.hfe_deptid AS deptid,") \
				_T(" 		  product_name AS productname,") \
				_T(" 		  SUM(fe.hfe_quantity) AS qty,") \
				_T(" 		  fe.hfe_unitprice AS price,") \
				_T(" 		  SUM(fe.hfe_quantity * fe.hfe_unitprice) AS amount") \
				_T("     from hms_fee_invoice  fi") \
				_T(" left join hms_fee fe on (fi.hfe_docno = fe.hfe_docno and fi.hfe_invoiceno = fe.hfe_invoiceno  )") \
				_T(" left join HMS_PHARMAORDER_VIEW on (hpo_orderid = hfe_orderid) ") \
				_T(" left join m_productitem_view on (product_item_id= cast(hfe_itemid as integer))") \
				_T(" left join hms_doc on hd_docno = fi.hfe_docno") \
				_T(" left join hms_patient on (hd_patientno = hp_patientno)") \
				_T(" where fi.hfe_date  BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T("    AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("    and fi.hfe_status='P' and fe.hfe_category <>'Y'  and fe.hfe_type in ('D','C','M') and PRODUCT_ORG_ID ='PM'  and fe.hfe_status='P'") \
				_T("   %s") \
				_T("   group by fe.hfe_docno,hd_object,hp_rank,fe.hfe_deptid,product_name,fe.hfe_unitprice,fi.hfe_date  order by fi.hfe_date ,fe.hfe_docno ") , m_szFromDate,m_szToDate,szWhere);
	return szSQL;
}