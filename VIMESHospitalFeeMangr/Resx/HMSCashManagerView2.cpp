#include "HMSCashManagerView2.h"
#include "MainFrm.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCashManagerView2* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSCashManagerView2 *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView2 *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnStaffChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnStaffChange();
} */
/*static void _OnStaffSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnStaffSetfocus();} */ 
/*static void _OnStaffKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnStaffKillfocus();
} */
static int _OnStaffCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView2 *)pWnd)->OnStaffCheckValue();
} 
/*static void _OnCashIDChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnCashIDChange();
} */
/*static void _OnCashIDSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnCashIDSetfocus();} */ 
/*static void _OnCashIDKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnCashIDKillfocus();
} */
static int _OnCashIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView2 *)pWnd)->OnCashIDCheckValue();
} 
static void _OnSearchInfoSelectFnc(CWnd *pWnd){
	CHMSCashManagerView2 *pVw = (CHMSCashManagerView2 *)pWnd;
	pVw->OnSearchInfoSelect();
} 
static long _OnStaffListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCashManagerView2*)pWnd)->OnStaffListLoadData();
} 
static void _OnStaffListDblClickFnc(CWnd *pWnd){
	((CHMSCashManagerView2*)pWnd)->OnStaffListDblClick();
} 
static void _OnStaffListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCashManagerView2*)pWnd)->OnStaffListSelectChange(nOldItem, nNewItem);
} 
static int _OnStaffListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView2*)pWnd)->OnStaffListDeleteItem();
} 
/*static void _OnReceiptPaymentNoChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnReceiptPaymentNoChange();
} */
/*static void _OnReceiptPaymentNoSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnReceiptPaymentNoSetfocus();} */ 
/*static void _OnReceiptPaymentNoKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnReceiptPaymentNoKillfocus();
} */
static int _OnReceiptPaymentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView2 *)pWnd)->OnReceiptPaymentNoCheckValue();
} 
static void _OnPostReceiptAndPaymentSelectFnc(CWnd *pWnd){
	CHMSCashManagerView2 *pVw = (CHMSCashManagerView2 *)pWnd;
	pVw->OnPostReceiptAndPaymentSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSCashManagerView2 *pVw = (CHMSCashManagerView2 *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCashManagerView2*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSCashManagerView2*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCashManagerView2*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView2*)pWnd)->OnListDeleteItem();
} 
/*static void _OnSearchPatientInfoChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnSearchPatientInfoChange();
} */
/*static void _OnSearchPatientInfoSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnSearchPatientInfoSetfocus();} */ 
/*static void _OnSearchPatientInfoKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnSearchPatientInfoKillfocus();
} */
static int _OnSearchPatientInfoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView2 *)pWnd)->OnSearchPatientInfoCheckValue();
} 
static void _OnSearchPatientSelectFnc(CWnd *pWnd){
	CHMSCashManagerView2 *pVw = (CHMSCashManagerView2 *)pWnd;
	pVw->OnSearchPatientSelect();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView2 *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView2 *)pWnd)->OnTotalAmountCheckValue();
} 
static int _OnAddHMSCashManagerView2Fnc(CWnd *pWnd){
	 return ((CHMSCashManagerView2*)pWnd)->OnAddHMSCashManagerView2();
} 
static int _OnEditHMSCashManagerView2Fnc(CWnd *pWnd){
	 return ((CHMSCashManagerView2*)pWnd)->OnEditHMSCashManagerView2();
} 
static int _OnDeleteHMSCashManagerView2Fnc(CWnd *pWnd){
	 return ((CHMSCashManagerView2*)pWnd)->OnDeleteHMSCashManagerView2();
} 
static int _OnSaveHMSCashManagerView2Fnc(CWnd *pWnd){
	 return ((CHMSCashManagerView2*)pWnd)->OnSaveHMSCashManagerView2();
} 
static int _OnCancelHMSCashManagerView2Fnc(CWnd *pWnd){
	 return ((CHMSCashManagerView2*)pWnd)->OnCancelHMSCashManagerView2();
} 
CHMSCashManagerView2::CHMSCashManagerView2(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 661;
	SetDefaultValues();
}
CHMSCashManagerView2::~CHMSCashManagerView2(){
}
void CHMSCashManagerView2::OnCreateComponents(){
	m_wndReceiptAndPaymentInformation.Create(this, _T("Receipt && Payment Information"), 5, 5, 960, 235);
	m_wndPatientReceiptPaymentList.Create(this, _T("Patient receipt && payment list"), 5, 270, 960, 590);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 90, 55);
	m_wndType.Create(this,95, 30, 205, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 210, 30, 290, 55);
	m_wndFromDate.Create(this,295, 30, 385, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 390, 30, 470, 55);
	m_wndToDate.Create(this,475, 30, 565, 55); 
	m_wndStaffLabel.Create(this, _T("Staff"), 570, 30, 650, 55);
	m_wndStaff.Create(this,655, 30, 745, 55); 
	m_wndCashIDLabel.Create(this, _T("Cash ID"), 750, 30, 830, 55);
	m_wndCashID.Create(this,835, 30, 925, 55); 
	m_wndSearchInfo.Create(this, _T("@"), 930, 30, 955, 55);
	m_wndStaffList.Create(this,10, 60, 955, 230); 
	m_wndReceiptPaymentNoLabel.Create(this, _T("Receipt/Payment No"), 5, 240, 135, 265);
	m_wndReceiptPaymentNo.Create(this,140, 240, 240, 265); 
	m_wndPostReceiptAndPayment.Create(this, _T("Post Receipt and payment"), 700, 240, 870, 265);
	m_wndPrint.Create(this, _T("&Print"), 875, 240, 955, 265);
	m_wndList.Create(this,10, 295, 955, 555); 
	m_wndSearchPatientInfoLabel.Create(this, _T("Search Patient"), 10, 560, 110, 585);
	m_wndSearchPatientInfo.Create(this,115, 560, 315, 585); 
	m_wndSearchPatient.Create(this, _T("@"), 320, 560, 345, 585);
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 730, 560, 830, 585);
	m_wndTotalAmount.Create(this,835, 560, 955, 585); 

}
void CHMSCashManagerView2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStaff.SetLimitText(35);
	m_wndStaff.SetCheckValue(true);
	m_wndCashID.SetLimitText(35);
	m_wndCashID.SetCheckValue(true);
	m_wndReceiptPaymentNo.SetLimitText(16);
	m_wndReceiptPaymentNo.SetCheckValue(true);
	m_wndSearchPatientInfo.SetLimitText(35);
	m_wndSearchPatientInfo.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndStaffList.InsertColumn(0, _T("Cash ID"), CFMT_TEXT, 90);
	m_wndStaffList.InsertColumn(1, _T("Date"), CFMT_DATE, 90);
	m_wndStaffList.InsertColumn(2, _T("Staff ID"), CFMT_TEXT, 70);
	m_wndStaffList.InsertColumn(3, _T("Staff Name"), CFMT_TEXT, 200);
	m_wndStaffList.InsertColumn(4, _T("Amount"), CFMT_NUMBER, 200);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Document No"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(3, _T("Record No"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Department"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 120);

}
void CHMSCashManagerView2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndStaff.SetEvent(WE_CHANGE, _OnStaffChangeFnc);
	//m_wndStaff.SetEvent(WE_SETFOCUS, _OnStaffSetfocusFnc);
	//m_wndStaff.SetEvent(WE_KILLFOCUS, _OnStaffKillfocusFnc);
	m_wndStaff.SetEvent(WE_CHECKVALUE, _OnStaffCheckValueFnc);
	//m_wndCashID.SetEvent(WE_CHANGE, _OnCashIDChangeFnc);
	//m_wndCashID.SetEvent(WE_SETFOCUS, _OnCashIDSetfocusFnc);
	//m_wndCashID.SetEvent(WE_KILLFOCUS, _OnCashIDKillfocusFnc);
	m_wndCashID.SetEvent(WE_CHECKVALUE, _OnCashIDCheckValueFnc);
	m_wndSearchInfo.SetEvent(WE_CLICK, _OnSearchInfoSelectFnc);
	m_wndStaffList.SetEvent(WE_SELCHANGE, _OnStaffListSelectChangeFnc);
	m_wndStaffList.SetEvent(WE_LOADDATA, _OnStaffListLoadDataFnc);
	m_wndStaffList.SetEvent(WE_DBLCLICK, _OnStaffListDblClickFnc);
	m_wndStaffList.AddEvent(1, _T("Delete"), _OnStaffListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndReceiptPaymentNo.SetEvent(WE_CHANGE, _OnReceiptPaymentNoChangeFnc);
	//m_wndReceiptPaymentNo.SetEvent(WE_SETFOCUS, _OnReceiptPaymentNoSetfocusFnc);
	//m_wndReceiptPaymentNo.SetEvent(WE_KILLFOCUS, _OnReceiptPaymentNoKillfocusFnc);
	m_wndReceiptPaymentNo.SetEvent(WE_CHECKVALUE, _OnReceiptPaymentNoCheckValueFnc);
	m_wndPostReceiptAndPayment.SetEvent(WE_CLICK, _OnPostReceiptAndPaymentSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndSearchPatientInfo.SetEvent(WE_CHANGE, _OnSearchPatientInfoChangeFnc);
	//m_wndSearchPatientInfo.SetEvent(WE_SETFOCUS, _OnSearchPatientInfoSetfocusFnc);
	//m_wndSearchPatientInfo.SetEvent(WE_KILLFOCUS, _OnSearchPatientInfoKillfocusFnc);
	m_wndSearchPatientInfo.SetEvent(WE_CHECKVALUE, _OnSearchPatientInfoCheckValueFnc);
	m_wndSearchPatient.SetEvent(WE_CLICK, _OnSearchPatientSelectFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSCashManagerView2Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSCashManagerView2Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSCashManagerView2Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSCashManagerView2Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSCashManagerView2Fnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSCashManagerView2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndCashID.GetDlgCtrlID(), m_szCashID);
	DDX_Text(pDX, m_wndReceiptPaymentNo.GetDlgCtrlID(), m_nReceiptPaymentNo);
	DDX_Text(pDX, m_wndSearchPatientInfo.GetDlgCtrlID(), m_szSearchPatientInfo);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CHMSCashManagerView2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCashManagerView2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCashManagerView2::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStaff.Empty();
	m_szCashID.Empty();
	m_nReceiptPaymentNo=0;
	m_szSearchPatientInfo.Empty();
	m_nTotalAmount=0;

}
int CHMSCashManagerView2::SetMode(int nMode){
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
void CHMSCashManagerView2::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashManagerView2::OnTypeSelendok(){
	 
}
/*void CHMSCashManagerView2::OnTypeSetfocus(){
	
}*/
/*void CHMSCashManagerView2::OnTypeKillfocus(){
	
}*/
long CHMSCashManagerView2::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCashManagerView2::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCashManagerView2::OnFromDateChange(){
	
} */
/*void CHMSCashManagerView2::OnFromDateSetfocus(){
	
} */
/*void CHMSCashManagerView2::OnFromDateKillfocus(){
	
} */
int CHMSCashManagerView2::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSCashManagerView2::OnToDateChange(){
	
} */
/*void CHMSCashManagerView2::OnToDateSetfocus(){
	
} */
/*void CHMSCashManagerView2::OnToDateKillfocus(){
	
} */
int CHMSCashManagerView2::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSCashManagerView2::OnStaffChange(){
	
} */
/*void CHMSCashManagerView2::OnStaffSetfocus(){
	
} */
/*void CHMSCashManagerView2::OnStaffKillfocus(){
	
} */
int CHMSCashManagerView2::OnStaffCheckValue(){
	return 0;
} 
/*void CHMSCashManagerView2::OnCashIDChange(){
	
} */
/*void CHMSCashManagerView2::OnCashIDSetfocus(){
	
} */
/*void CHMSCashManagerView2::OnCashIDKillfocus(){
	
} */
int CHMSCashManagerView2::OnCashIDCheckValue(){
	return 0;
} 
void CHMSCashManagerView2::OnSearchInfoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashManagerView2::OnStaffListDblClick(){
	
} 
void CHMSCashManagerView2::OnStaffListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCashManagerView2::OnStaffListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSCashManagerView2::OnStaffListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndStaffList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStaffList.AddItems(
			rs.GetValue(_T("CashID")), 
			rs.GetValue(_T("Date")), 
			rs.GetValue(_T("StaffID")), 
			rs.GetValue(_T("StaffName")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndStaffList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSCashManagerView2::OnReceiptPaymentNoChange(){
	
} */
/*void CHMSCashManagerView2::OnReceiptPaymentNoSetfocus(){
	
} */
/*void CHMSCashManagerView2::OnReceiptPaymentNoKillfocus(){
	
} */
int CHMSCashManagerView2::OnReceiptPaymentNoCheckValue(){
	return 0;
} 
void CHMSCashManagerView2::OnPostReceiptAndPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashManagerView2::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashManagerView2::OnListDblClick(){
	
} 
void CHMSCashManagerView2::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCashManagerView2::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSCashManagerView2::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("RecordNo")), 
			rs.GetValue(_T("Department")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSCashManagerView2::OnSearchPatientInfoChange(){
	
} */
/*void CHMSCashManagerView2::OnSearchPatientInfoSetfocus(){
	
} */
/*void CHMSCashManagerView2::OnSearchPatientInfoKillfocus(){
	
} */
int CHMSCashManagerView2::OnSearchPatientInfoCheckValue(){
	return 0;
} 
void CHMSCashManagerView2::OnSearchPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSCashManagerView2::OnTotalAmountChange(){
	
} */
/*void CHMSCashManagerView2::OnTotalAmountSetfocus(){
	
} */
/*void CHMSCashManagerView2::OnTotalAmountKillfocus(){
	
} */
int CHMSCashManagerView2::OnTotalAmountCheckValue(){
	return 0;
} 
int CHMSCashManagerView2::OnAddHMSCashManagerView2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCashManagerView2::OnEditHMSCashManagerView2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCashManagerView2::OnDeleteHMSCashManagerView2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSCashManagerView2();
 	}
	return 0;
}
int CHMSCashManagerView2::OnSaveHMSCashManagerView2(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnHMSCashManagerView2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCashManagerView2::OnCancelHMSCashManagerView2(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSCashManagerView2::OnHMSCashManagerView2ListLoadData(){
	return 0;
}
