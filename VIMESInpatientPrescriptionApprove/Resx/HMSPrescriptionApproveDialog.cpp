#include "HMSPrescriptionApproveDialog.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnTotalPatientChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalPatientChange();
} */
/*static void _OnTotalPatientSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalPatientSetfocus();} */ 
/*static void _OnTotalPatientKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalPatientKillfocus();
} */
static int _OnTotalPatientCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalPatientCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnSheetNoChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnSheetNoChange();
} */
/*static void _OnSheetNoSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnSheetNoSetfocus();} */ 
/*static void _OnSheetNoKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnSheetNoKillfocus();
} */
static int _OnSheetNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnSheetNoCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionApproveDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnToDateCheckValue();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnOrderListDeleteItem();
} 
static void _OnApprovedOrderSelectFnc(CWnd *pWnd){
	 ((CHMSPrescriptionApproveDialog*)pWnd)->OnApprovedOrderSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnListDeleteItem();
} 
static long _OnLineLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog*)pWnd)->OnLineLoadData();
} 
static void _OnLineDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnLineDblClick();
} 
static void _OnLineSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnLineSelectChange(nOldItem, nNewItem);
} 
static int _OnLineDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnLineDeleteItem();
} 
static void _OnApproveSelectFnc(CWnd *pWnd){
	CHMSPrescriptionApproveDialog *pVw = (CHMSPrescriptionApproveDialog *)pWnd;
	pVw->OnApproveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CHMSPrescriptionApproveDialog *pVw = (CHMSPrescriptionApproveDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddHMSPrescriptionApproveDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnAddHMSPrescriptionApproveDialog();
} 
static int _OnEditHMSPrescriptionApproveDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnEditHMSPrescriptionApproveDialog();
} 
static int _OnDeleteHMSPrescriptionApproveDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnDeleteHMSPrescriptionApproveDialog();
} 
static int _OnSaveHMSPrescriptionApproveDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnSaveHMSPrescriptionApproveDialog();
} 
static int _OnCancelHMSPrescriptionApproveDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnCancelHMSPrescriptionApproveDialog();
} 
CHMSPrescriptionApproveDialog::CHMSPrescriptionApproveDialog(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CHMSPrescriptionApproveDialog::~CHMSPrescriptionApproveDialog(){
}
void CHMSPrescriptionApproveDialog::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 370, 90);
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 95, 370, 590);
	m_wndPrescriptionInformation.Create(this, _T("Prescription Information"), 375, 95, 1015, 315);
	m_wndLines.Create(this, _T("Lines"), 375, 320, 1015, 620);
	m_wndInformationBar.Create(this, _T(""), 375, 5, 1015, 90);
	m_wndTITLE.Create(this, _T("INPATIENT PRESCRIPTION PROCESS"), 380, 30, 1005, 55);
	m_wndIDLabel.Create(this, _T("ID"), 381, 60, 461, 85);
	m_wndID.Create(this,465, 60, 615, 85); 
	m_wndTotalPatientLabel.Create(this, _T("Total Patient"), 620, 60, 720, 85);
	m_wndTotalPatient.Create(this,725, 60, 795, 85); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 800, 60, 900, 85);
	m_wndTotalAmount.Create(this,905, 60, 1005, 85); 
	m_wndSheetNoLabel.Create(this, _T("Sheet No"), 10, 30, 90, 55);
	m_wndSheetNo.Create(this,95, 30, 185, 55); 
	m_wndDepartmentLabel.Create(this, _T("Dept"), 190, 30, 270, 55);
	m_wndDepartment.Create(this,275, 30, 365, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 185, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 190, 60, 270, 85);
	m_wndToDate.Create(this,275, 60, 365, 85); 
	m_wndOrderList.Create(this,10, 120, 365, 585); 
	m_wndApprovedOrder.Create(this, _T("Approved Order"), 5, 595, 155, 620);
	m_wndList.Create(this,380, 120, 1010, 310); 
	m_wndLine.Create(this,380, 345, 1010, 615); 
	m_wndApprove.Create(this, _T("&Approve"), 185, 595, 275, 620);
	m_wndDiscard.Create(this, _T("&Discard"), 280, 595, 370, 620);

}
void CHMSPrescriptionApproveDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndTotalPatient.SetLimitText(16);
	m_wndTotalPatient.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetCheckValue(true);
	m_wndSheetNo.SetLimitText(1024);
	m_wndSheetNo.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndOrderList.InsertColumn(0, _T("Order ID"), CFMT_NUMBER, 100);
	m_wndOrderList.InsertColumn(1, _T("Storage"), CFMT_TEXT, 200);





}
void CHMSPrescriptionApproveDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndTotalPatient.SetEvent(WE_CHANGE, _OnTotalPatientChangeFnc);
	//m_wndTotalPatient.SetEvent(WE_SETFOCUS, _OnTotalPatientSetfocusFnc);
	//m_wndTotalPatient.SetEvent(WE_KILLFOCUS, _OnTotalPatientKillfocusFnc);
	m_wndTotalPatient.SetEvent(WE_CHECKVALUE, _OnTotalPatientCheckValueFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	//m_wndSheetNo.SetEvent(WE_CHANGE, _OnSheetNoChangeFnc);
	//m_wndSheetNo.SetEvent(WE_SETFOCUS, _OnSheetNoSetfocusFnc);
	//m_wndSheetNo.SetEvent(WE_KILLFOCUS, _OnSheetNoKillfocusFnc);
	m_wndSheetNo.SetEvent(WE_CHECKVALUE, _OnSheetNoCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApprovedOrder.SetEvent(WE_CLICK, _OnApprovedOrderSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndLine.SetEvent(WE_SELCHANGE, _OnLineSelectChangeFnc);
	m_wndLine.SetEvent(WE_LOADDATA, _OnLineLoadDataFnc);
	m_wndLine.SetEvent(WE_DBLCLICK, _OnLineDblClickFnc);
	m_wndLine.AddEvent(1, _T("Delete"), _OnLineDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApprove.SetEvent(WE_CLICK, _OnApproveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPrescriptionApproveDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPrescriptionApproveDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPrescriptionApproveDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPrescriptionApproveDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPrescriptionApproveDialogFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPrescriptionApproveDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndTotalPatient.GetDlgCtrlID(), m_nTotalPatient);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_Text(pDX, m_wndSheetNo.GetDlgCtrlID(), m_szSheetNo);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndApprovedOrder.GetDlgCtrlID(), m_bApprovedOrder);

}
void CHMSPrescriptionApproveDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescriptionApproveDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrescriptionApproveDialog::SetDefaultValues(){

	m_szID.Empty();
	m_nTotalPatient=0;
	m_nTotalAmount=0;
	m_szSheetNo.Empty();
	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bApprovedOrder=FALSE;

}
int CHMSPrescriptionApproveDialog::SetMode(int nMode){
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
/*void CHMSPrescriptionApproveDialog::OnIDChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnIDSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnIDKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnIDCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionApproveDialog::OnTotalPatientChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnTotalPatientSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnTotalPatientKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnTotalPatientCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionApproveDialog::OnTotalAmountChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnTotalAmountSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnTotalAmountKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionApproveDialog::OnSheetNoChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnSheetNoSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnSheetNoKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnSheetNoCheckValue(){
	return 0;
} 
void CHMSPrescriptionApproveDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionApproveDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSPrescriptionApproveDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPrescriptionApproveDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSPrescriptionApproveDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionApproveDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionApproveDialog::OnFromDateChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnFromDateKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionApproveDialog::OnToDateChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnToDateSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnToDateKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSPrescriptionApproveDialog::OnOrderListDblClick(){
	
} 
void CHMSPrescriptionApproveDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionApproveDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionApproveDialog::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("OrderID")), 
			rs.GetValue(_T("Storage")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
	void CHMSPrescriptionApproveDialog::OnApprovedOrderSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSPrescriptionApproveDialog::OnListDblClick(){
	
} 
void CHMSPrescriptionApproveDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionApproveDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionApproveDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPrescriptionApproveDialog::OnLineDblClick(){
	
} 
void CHMSPrescriptionApproveDialog::OnLineSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionApproveDialog::OnLineDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionApproveDialog::OnLineLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndLine.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLine.AddItems(
		rs.MoveNext();
	}
	m_wndLine.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPrescriptionApproveDialog::OnApproveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionApproveDialog::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionApproveDialog::OnAddHMSPrescriptionApproveDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPrescriptionApproveDialog::OnEditHMSPrescriptionApproveDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionApproveDialog::OnDeleteHMSPrescriptionApproveDialog(){
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
 		OnCancelHMSPrescriptionApproveDialog();
 	}
	return 0;
}
int CHMSPrescriptionApproveDialog::OnSaveHMSPrescriptionApproveDialog(){
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
 		//OnHMSPrescriptionApproveDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPrescriptionApproveDialog::OnCancelHMSPrescriptionApproveDialog(){
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
int CHMSPrescriptionApproveDialog::OnHMSPrescriptionApproveDialogListLoadData(){
	return 0;
}
