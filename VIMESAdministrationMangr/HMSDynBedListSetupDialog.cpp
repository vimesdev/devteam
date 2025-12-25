#include "HMSDynBedListSetupDialog.h"
#include "HMSMainFrame.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedListSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDynBedListSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDynBedListSetupDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedListSetupDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedListSetupDialog *)pWnd)->OnServicePriceCheckValue();
} 
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedListSetupDialog *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedListSetupDialog *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedListSetupDialog *)pWnd)->OnPolicyPriceCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSDynBedListSetupDialog*)pWnd)->OnActiveSelect();
}
static void _OnDifferencePaidSelectFnc(CWnd *pWnd){
	 ((CHMSDynBedListSetupDialog*)pWnd)->OnDifferencePaidSelect();
}
static void _OnInsurancePaidSelectFnc(CWnd *pWnd){
	 ((CHMSDynBedListSetupDialog*)pWnd)->OnInsurancePaidSelect();
}
static void _OnPolicyPaidSelectFnc(CWnd *pWnd){
	 ((CHMSDynBedListSetupDialog*)pWnd)->OnPolicyPaidSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDynBedListSetupDialog *pVw = (CHMSDynBedListSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDynBedListSetupDialog *pVw = (CHMSDynBedListSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDynBedListSetupDialog *pVw = (CHMSDynBedListSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDynBedListSetupDialog *pVw = (CHMSDynBedListSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDynBedListSetupDialog *pVw = (CHMSDynBedListSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDynBedListSetupDialog *pVw = (CHMSDynBedListSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDynBedListSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedListSetupDialog*)pWnd)->OnAddHMSDynBedListSetupDialog();
} 
static int _OnEditHMSDynBedListSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedListSetupDialog*)pWnd)->OnEditHMSDynBedListSetupDialog();
} 
static int _OnDeleteHMSDynBedListSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedListSetupDialog*)pWnd)->OnDeleteHMSDynBedListSetupDialog();
} 
static int _OnSaveHMSDynBedListSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedListSetupDialog*)pWnd)->OnSaveHMSDynBedListSetupDialog();
} 
static int _OnCancelHMSDynBedListSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedListSetupDialog*)pWnd)->OnCancelHMSDynBedListSetupDialog();
} 
CHMSDynBedListSetupDialog::CHMSDynBedListSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 505;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSDynBedListSetupDialog::~CHMSDynBedListSetupDialog(){
}
void CHMSDynBedListSetupDialog::OnCreateComponents(){
	m_wndBedInformation.Create(this, _T("Bed Information"), 5, 5, 490, 450);
	m_wndList.Create(this,10, 30, 485, 325); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 330, 110, 355);
	m_wndName.Create(this,115, 330, 335, 355); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 360, 110, 385);
	m_wndServicePrice.Create(this,115, 360, 205, 385); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 10, 390, 110, 415);
	m_wndInsurancePrice.Create(this,115, 390, 205, 415); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 10, 420, 110, 445);
	m_wndPolicyPrice.Create(this,115, 420, 205, 445); 
	m_wndActive.Create(this, _T("Active"), 340, 330, 485, 355);
	m_wndDifferencePaid.Create(this, _T("Difference Paid"), 210, 360, 335, 385);
	m_wndInsurancePaid.Create(this, _T("Insurance Paid"), 210, 390, 335, 415);
	m_wndPolicyPaid.Create(this, _T("Policy Paid"), 210, 420, 335, 445);
	m_wndAdd.Create(this, _T("&Add"), 10, 455, 85, 480);
	m_wndEdit.Create(this, _T("&Edit"), 90, 455, 165, 480);
	m_wndDelete.Create(this, _T("&Delete"), 170, 455, 245, 480);
	m_wndSave.Create(this, _T("&Save"), 250, 455, 325, 480);
	m_wndCancel.Create(this, _T("&Cancel"), 330, 455, 405, 480);
	m_wndClose.Create(this, _T("&Close"), 410, 455, 485, 480);

}
void CHMSDynBedListSetupDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndServicePrice.SetLimitText(16);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(16);
	m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(16);
	m_wndPolicyPrice.SetCheckValue(true);
	m_wndInsurancePaid.ModifyStyle(WS_TABSTOP, 0);
	m_wndPolicyPaid.ModifyStyle(WS_TABSTOP, 0);
	m_wndDifferencePaid.ModifyStyle(WS_TABSTOP, 0);
	m_wndServicePrice.SetCurrencyFormat(true);
	m_wndInsurancePrice.SetCurrencyFormat(true);
	m_wndPolicyPrice.SetCurrencyFormat(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Service Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(3, _T("Insurance Price"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(4, _T("Policy Price"), CFMT_MONEY, 100);
	
	m_hms_dynbedlistTbl.SetTableName(_T("hms_dynbedlist"));
	m_hms_dynbedlistTbl.AddField(_T("hdbl_deptid"), dfText, 7); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_id"), dfLong); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_name"), dfText, 35); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_servprice"), dfDouble); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_insprice"), dfDouble); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_polprice"), dfDouble); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_inspaid"), dfText, 1); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_polpaid"), dfText, 1); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_difpaid"), dfText, 1); 

}
void CHMSDynBedListSetupDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndServicePrice.SetEvent(WE_CHANGE, _OnServicePriceChangeFnc);
	//m_wndServicePrice.SetEvent(WE_SETFOCUS, _OnServicePriceSetfocusFnc);
	//m_wndServicePrice.SetEvent(WE_KILLFOCUS, _OnServicePriceKillfocusFnc);
	m_wndServicePrice.SetEvent(WE_CHECKVALUE, _OnServicePriceCheckValueFnc);
	//m_wndInsurancePrice.SetEvent(WE_CHANGE, _OnInsurancePriceChangeFnc);
	//m_wndInsurancePrice.SetEvent(WE_SETFOCUS, _OnInsurancePriceSetfocusFnc);
	//m_wndInsurancePrice.SetEvent(WE_KILLFOCUS, _OnInsurancePriceKillfocusFnc);
	m_wndInsurancePrice.SetEvent(WE_CHECKVALUE, _OnInsurancePriceCheckValueFnc);
	//m_wndPolicyPrice.SetEvent(WE_CHANGE, _OnPolicyPriceChangeFnc);
	//m_wndPolicyPrice.SetEvent(WE_SETFOCUS, _OnPolicyPriceSetfocusFnc);
	//m_wndPolicyPrice.SetEvent(WE_KILLFOCUS, _OnPolicyPriceKillfocusFnc);
	m_wndPolicyPrice.SetEvent(WE_CHECKVALUE, _OnPolicyPriceCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndDifferencePaid.SetEvent(WE_CLICK, _OnDifferencePaidSelectFnc);
	m_wndInsurancePaid.SetEvent(WE_CLICK, _OnInsurancePaidSelectFnc);
	m_wndPolicyPaid.SetEvent(WE_CLICK, _OnPolicyPaidSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
}
void CHMSDynBedListSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Check(pDX, m_wndDifferencePaid.GetDlgCtrlID(), m_bDifferencePaid);
	DDX_Check(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_bInsurancePaid);
	DDX_Check(pDX, m_wndPolicyPaid.GetDlgCtrlID(), m_bPolicyPaid);

}
void CHMSDynBedListSetupDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	SetDefaultValues();
	szSQL.Format(_T("SELECT * FROM hms_dynbedlist WHERE hdbl_id=%d "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hdbl_name"), m_szName);
		rs.GetValue(_T("hdbl_servprice"), m_nServicePrice);
		rs.GetValue(_T("hdbl_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hdbl_polprice"), m_nPolicyPrice);
		rs.GetValue(_T("hdbl_difpaid"), m_bDifferencePaid);
		rs.GetValue(_T("hdbl_inspaid"), m_bInsurancePaid);
		rs.GetValue(_T("hdbl_polpaid"), m_bPolicyPaid);
		rs.GetValue(_T("hdbl_active"), m_bActive);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSDynBedListSetupDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_createdby"), pMF->GetCurrentUser());
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_createddate"), pMF->GetSysDateTime());
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_updatedby"), pMF->GetCurrentUser());
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_updateddate"), pMF->GetSysDateTime());
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_deptid"), m_szDepartmentKey);

	if(GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("select coalesce(max(hdbl_id), 0)+1 FROM hms_dynbedlist "), m_szDepartmentKey);
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
		
	}

	m_hms_dynbedlistTbl.SetValue(_T("hdbl_id"), m_nID);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_name"), m_szName);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_servprice"), m_nServicePrice);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_insprice"), m_nInsurancePrice);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_polprice"), m_nPolicyPrice);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_regprice"), m_nServicePrice);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_difpaid"), m_bDifferencePaid);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_inspaid"), m_bInsurancePaid);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_polpaid"), m_bPolicyPaid);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_active"), m_bActive);
}
void CHMSDynBedListSetupDialog::SetDefaultValues(){

	m_szName.Empty();
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_bActive=TRUE;
	m_bDifferencePaid=FALSE;
	m_bInsurancePaid=TRUE;
	m_bPolicyPaid=TRUE;

}
int CHMSDynBedListSetupDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_wndName.SetFocus();

 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndName.SetFocus();
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
		m_wndClose.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSDynBedListSetupDialog::OnListDblClick(){
	
} 
void CHMSDynBedListSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	m_nID = ToInt(m_wndList.GetItemText(nSel, 0));
	GetDataToScreen();
} 
int CHMSDynBedListSetupDialog::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSDynBedListSetupDialog();
	 return 0;
} 
long CHMSDynBedListSetupDialog::OnListLoadData(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	
	szSQL.Format(_T("SELECT hdbl_id as id, hdbl_name as name, hdbl_servprice as servprice, hdbl_insprice as insprice, hdbl_polprice as polprice, hdbl_active as active FROM hms_dynbedlist WHERE hdbl_deptid='%s' ORDER BY hdbl_id"), m_szDepartmentKey);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("servprice")), 
			rs.GetValue(_T("insprice")), 
			rs.GetValue(_T("polprice")), 
			rs.GetValue(_T("active")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CHMSDynBedListSetupDialog::OnNameChange(){
	
} */
/*void CHMSDynBedListSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSDynBedListSetupDialog::OnNameKillfocus(){
	
} */
int CHMSDynBedListSetupDialog::OnNameCheckValue(){
	return 0;
} 
/*void CHMSDynBedListSetupDialog::OnServicePriceChange(){
	
} */
/*void CHMSDynBedListSetupDialog::OnServicePriceSetfocus(){
	
} */
/*void CHMSDynBedListSetupDialog::OnServicePriceKillfocus(){
	
} */
int CHMSDynBedListSetupDialog::OnServicePriceCheckValue(){
	return 0;
} 
/*void CHMSDynBedListSetupDialog::OnInsurancePriceChange(){
	
} */
/*void CHMSDynBedListSetupDialog::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSDynBedListSetupDialog::OnInsurancePriceKillfocus(){
	
} */
int CHMSDynBedListSetupDialog::OnInsurancePriceCheckValue(){
	return 0;
} 
/*void CHMSDynBedListSetupDialog::OnPolicyPriceChange(){
	
} */
/*void CHMSDynBedListSetupDialog::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSDynBedListSetupDialog::OnPolicyPriceKillfocus(){
	
} */
int CHMSDynBedListSetupDialog::OnPolicyPriceCheckValue(){
	return 0;
} 
	void CHMSDynBedListSetupDialog::OnActiveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CHMSDynBedListSetupDialog::OnDifferencePaidSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CHMSDynBedListSetupDialog::OnInsurancePaidSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CHMSDynBedListSetupDialog::OnPolicyPaidSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CHMSDynBedListSetupDialog::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAddHMSDynBedListSetupDialog();
	
} 
void CHMSDynBedListSetupDialog::OnEditSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnEditHMSDynBedListSetupDialog();
} 
void CHMSDynBedListSetupDialog::OnDeleteSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSDynBedListSetupDialog();
} 
void CHMSDynBedListSetupDialog::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSDynBedListSetupDialog();
} 
void CHMSDynBedListSetupDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelHMSDynBedListSetupDialog();
} 
void CHMSDynBedListSetupDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSDynBedListSetupDialog::OnAddHMSDynBedListSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDynBedListSetupDialog::OnEditHMSDynBedListSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDynBedListSetupDialog::OnDeleteHMSDynBedListSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	int nIdx = ToInt(m_wndList.GetItemText(nSel, 0));

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
 	szSQL.Format(_T("DELETE FROM  hms_dynbedlist WHERE hdbl_deptid='%s' AND hdbl_id=%d"), m_szDepartmentKey,  nIdx ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
		m_wndList.DeleteItem(nSel);
 	}
	return 0;
}
int CHMSDynBedListSetupDialog::OnSaveHMSDynBedListSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_dynbedlistTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hdbl_deptid='%s' AND hdbl_id=%d"), m_szDepartmentKey,  m_nID); 
 		szSQL = m_hms_dynbedlistTbl.GetUpdateSQL(_T("hdbl_createdby,hdbl_createddate, hdbl_id")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		SetMode(VM_VIEW);
		OnListLoadData();
		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CHMSDynBedListSetupDialog::OnCancelHMSDynBedListSetupDialog(){
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
int CHMSDynBedListSetupDialog::OnHMSDynBedListSetupDialogListLoadData(){
	return 0;
}
