#include "HMSTrackingPatientFeeDialog.h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTrackingPatientFeeDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromMoneyChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnFromMoneyChange();
} */
/*static void _OnFromMoneySetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnFromMoneySetfocus();} */ 
/*static void _OnFromMoneyKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnFromMoneyKillfocus();
} */
static int _OnFromMoneyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnFromMoneyCheckValue();
} 
/*static void _OnToMoneyChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnToMoneyChange();
} */
/*static void _OnToMoneySetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnToMoneySetfocus();} */ 
/*static void _OnToMoneyKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnToMoneyKillfocus();
} */
static int _OnToMoneyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnToMoneyCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTrackingPatientFeeDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnNumberInwardChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnNumberInwardChange();
} */
/*static void _OnNumberInwardSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnNumberInwardSetfocus();} */ 
/*static void _OnNumberInwardKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnNumberInwardKillfocus();
} */
static int _OnNumberInwardCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnNumberInwardCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSTrackingPatientFeeDialog *pVw = (CHMSTrackingPatientFeeDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTrackingPatientFeeDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnAddHMSTrackingPatientFeeDialog();
} 
static int _OnEditHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnEditHMSTrackingPatientFeeDialog();
} 
static int _OnDeleteHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnDeleteHMSTrackingPatientFeeDialog();
} 
static int _OnSaveHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnSaveHMSTrackingPatientFeeDialog();
} 
static int _OnCancelHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnCancelHMSTrackingPatientFeeDialog();
} 
CHMSTrackingPatientFeeDialog::CHMSTrackingPatientFeeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1010;
	m_nDlgHeight = 610;
	SetDefaultValues();
}
CHMSTrackingPatientFeeDialog::~CHMSTrackingPatientFeeDialog(){
}
void CHMSTrackingPatientFeeDialog::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient List"), 5, 95, 1000, 600);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1000, 90);
	m_wndDepartmentLabel.Create(this, _T("Department"), 410, 30, 520, 55);
	m_wndDepartment.Create(this,525, 30, 670, 55); 
	m_wndUnpaidLabel.Create(this, _T("Unpaid"), 675, 30, 770, 55);
	m_wndFromMoney.Create(this,775, 30, 875, 55); 
	m_wndSign.Create(this, _T("-"), 880, 30, 885, 55);
	m_wndToMoney.Create(this,890, 30, 990, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 30, 120, 55);
	m_wndObject.Create(this,125, 30, 405, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Doc No"), 410, 60, 520, 85);
	m_wndDocumentNo.Create(this,525, 60, 670, 85); 
	m_wndNumberInwardLabel.Create(this, _T("Number Inward"), 675, 60, 770, 85);
	m_wndNumberInward.Create(this,775, 60, 960, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 120, 85);
	m_wndPatientName.Create(this,125, 60, 405, 85); 
	m_wndSearch.Create(this, _T("@"), 965, 60, 990, 85);
	m_wndList.Create(this,10, 120, 995, 595); 

}
void CHMSTrackingPatientFeeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndFromMoney.SetLimitText(16);
	m_wndFromMoney.SetCheckValue(true);
	m_wndToMoney.SetLimitText(16);
	m_wndToMoney.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndNumberInward.SetLimitText(35);
	m_wndNumberInward.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(2, _T("Number Inward"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(4, _T("Age"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(5, _T("Sex"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(6, _T("Object"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Total Cost"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(8, _T("Total Insurance Paid"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(9, _T("Total Deposit"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(10, _T("Total Unpaid"), CFMT_MONEY, 110);

}
void CHMSTrackingPatientFeeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndFromMoney.SetEvent(WE_CHANGE, _OnFromMoneyChangeFnc);
	//m_wndFromMoney.SetEvent(WE_SETFOCUS, _OnFromMoneySetfocusFnc);
	//m_wndFromMoney.SetEvent(WE_KILLFOCUS, _OnFromMoneyKillfocusFnc);
	m_wndFromMoney.SetEvent(WE_CHECKVALUE, _OnFromMoneyCheckValueFnc);
	//m_wndToMoney.SetEvent(WE_CHANGE, _OnToMoneyChangeFnc);
	//m_wndToMoney.SetEvent(WE_SETFOCUS, _OnToMoneySetfocusFnc);
	//m_wndToMoney.SetEvent(WE_KILLFOCUS, _OnToMoneyKillfocusFnc);
	m_wndToMoney.SetEvent(WE_CHECKVALUE, _OnToMoneyCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndNumberInward.SetEvent(WE_CHANGE, _OnNumberInwardChangeFnc);
	//m_wndNumberInward.SetEvent(WE_SETFOCUS, _OnNumberInwardSetfocusFnc);
	//m_wndNumberInward.SetEvent(WE_KILLFOCUS, _OnNumberInwardKillfocusFnc);
	m_wndNumberInward.SetEvent(WE_CHECKVALUE, _OnNumberInwardCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CHMSTrackingPatientFeeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndFromMoney.GetDlgCtrlID(), m_nFromMoney);
	DDX_Text(pDX, m_wndToMoney.GetDlgCtrlID(), m_nToMoney);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndNumberInward.GetDlgCtrlID(), m_szNumberInward);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSTrackingPatientFeeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTrackingPatientFeeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTrackingPatientFeeDialog::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_nFromMoney=0;
	m_nToMoney=0;
	m_szObjectKey.Empty();
	m_nDocumentNo=0;
	m_szNumberInward.Empty();
	m_szPatientName.Empty();

}
int CHMSTrackingPatientFeeDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
void CHMSTrackingPatientFeeDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTrackingPatientFeeDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSTrackingPatientFeeDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSTrackingPatientFeeDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSTrackingPatientFeeDialog::OnDepartmentLoadData(){
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
/*void CHMSTrackingPatientFeeDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTrackingPatientFeeDialog::OnFromMoneyChange(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnFromMoneySetfocus(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnFromMoneyKillfocus(){
	
} */
int CHMSTrackingPatientFeeDialog::OnFromMoneyCheckValue(){
	return 0;
} 
/*void CHMSTrackingPatientFeeDialog::OnToMoneyChange(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnToMoneySetfocus(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnToMoneyKillfocus(){
	
} */
int CHMSTrackingPatientFeeDialog::OnToMoneyCheckValue(){
	return 0;
} 
void CHMSTrackingPatientFeeDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTrackingPatientFeeDialog::OnObjectSelendok(){
	 
}
/*void CHMSTrackingPatientFeeDialog::OnObjectSetfocus(){
	
}*/
/*void CHMSTrackingPatientFeeDialog::OnObjectKillfocus(){
	
}*/
long CHMSTrackingPatientFeeDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTrackingPatientFeeDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTrackingPatientFeeDialog::OnDocumentNoChange(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSTrackingPatientFeeDialog::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSTrackingPatientFeeDialog::OnNumberInwardChange(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnNumberInwardSetfocus(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnNumberInwardKillfocus(){
	
} */
int CHMSTrackingPatientFeeDialog::OnNumberInwardCheckValue(){
	return 0;
} 
/*void CHMSTrackingPatientFeeDialog::OnPatientNameChange(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnPatientNameKillfocus(){
	
} */
int CHMSTrackingPatientFeeDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSTrackingPatientFeeDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTrackingPatientFeeDialog::OnListDblClick(){
	
} 
void CHMSTrackingPatientFeeDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTrackingPatientFeeDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTrackingPatientFeeDialog::OnListLoadData(){
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
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("NumberInward")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("Object")), 
			rs.GetValue(_T("TotalCost")), 
			rs.GetValue(_T("TotalInsurancePaid")), 
			rs.GetValue(_T("TotalDeposit")), 
			rs.GetValue(_T("TotalUnpaid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSTrackingPatientFeeDialog::OnAddHMSTrackingPatientFeeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTrackingPatientFeeDialog::OnEditHMSTrackingPatientFeeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTrackingPatientFeeDialog::OnDeleteHMSTrackingPatientFeeDialog(){
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
 		OnCancelHMSTrackingPatientFeeDialog();
 	}
	return 0;
}
int CHMSTrackingPatientFeeDialog::OnSaveHMSTrackingPatientFeeDialog(){
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
 		//OnHMSTrackingPatientFeeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTrackingPatientFeeDialog::OnCancelHMSTrackingPatientFeeDialog(){
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
int CHMSTrackingPatientFeeDialog::OnHMSTrackingPatientFeeDialogListLoadData(){
	return 0;
}
