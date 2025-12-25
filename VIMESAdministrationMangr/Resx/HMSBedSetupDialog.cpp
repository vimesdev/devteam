#include "HMSBedSetupDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSBedSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSBedSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedSetupDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedSetupDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnRoomAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnLimitChangeFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnLimitChange();
} */
/*static void _OnLimitSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnLimitSetfocus();} */ 
/*static void _OnLimitKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnLimitKillfocus();
} */
static int _OnLimitCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnLimitCheckValue();
} 
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnServicePriceCheckValue();
} 
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnPolicyPriceCheckValue();
} 
static void _OnDifferencePaidSelectFnc(CWnd *pWnd){
	 ((CHMSBedSetupDialog*)pWnd)->OnDifferencePaidSelect();
}
static void _OnInsurancePaidSelectFnc(CWnd *pWnd){
	 ((CHMSBedSetupDialog*)pWnd)->OnInsurancePaidSelect();
}
static void _OnPolicyPaidSelectFnc(CWnd *pWnd){
	 ((CHMSBedSetupDialog*)pWnd)->OnPolicyPaidSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSBedSetupDialog*)pWnd)->OnActiveSelect();
}
static int _OnAddHMSBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnAddHMSBedSetupDialog();
} 
static int _OnEditHMSBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnEditHMSBedSetupDialog();
} 
static int _OnDeleteHMSBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnDeleteHMSBedSetupDialog();
} 
static int _OnSaveHMSBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnSaveHMSBedSetupDialog();
} 
static int _OnCancelHMSBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnCancelHMSBedSetupDialog();
} 
CHMSBedSetupDialog::CHMSBedSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSBedSetupDialog::~CHMSBedSetupDialog(){
}
void CHMSBedSetupDialog::OnCreateComponents(){
	m_wndBedInformation.Create(this, _T("Bed Information"), 6, 5, 801, 450);
	m_wndList.Create(this,11, 30, 796, 295); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 300, 130, 325);
	m_wndDepartment.Create(this,135, 300, 410, 325); 
	m_wndRoomLabel.Create(this, _T("Room"), 415, 300, 515, 325);
	m_wndRoom.Create(this,520, 300, 796, 325); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 330, 130, 355);
	m_wndName.Create(this,135, 330, 796, 355); 
	m_wndLimitLabel.Create(this, _T("Limit of patients"), 415, 360, 515, 385);
	m_wndLimit.Create(this,520, 360, 590, 385); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 360, 130, 385);
	m_wndServicePrice.Create(this,135, 360, 235, 385); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 10, 390, 130, 415);
	m_wndInsurancePrice.Create(this,135, 390, 235, 415); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 10, 420, 130, 445);
	m_wndPolicyPrice.Create(this,135, 420, 235, 445); 
	m_wndDifferencePaid.Create(this, _T("Difference Paid"), 240, 420, 410, 445);
	m_wndInsurancePaid.Create(this, _T("Insurance Paid"), 240, 360, 410, 385);
	m_wndPolicyPaid.Create(this, _T("Policy Paid"), 240, 390, 410, 415);
	m_wndAdd.Create(this, _T("&Add"), 295, 455, 375, 480);
	m_wndEdit.Create(this, _T("&Edit"), 380, 455, 460, 480);
	m_wndDelete.Create(this, _T("&Delete"), 465, 455, 545, 480);
	m_wndSave.Create(this, _T("&Save"), 550, 455, 630, 480);
	m_wndCancel.Create(this, _T("&Cancel"), 635, 455, 715, 480);
	m_wndClose.Create(this, _T("&Close"), 720, 455, 800, 480);
	m_wndActive.Create(this, _T("Active"), 595, 360, 796, 385);

}
void CHMSBedSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndLimit.SetLimitText(1024);
	m_wndLimit.SetCheckValue(true);
	m_wndServicePrice.SetLimitText(1024);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(1024);
	m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(1024);
	m_wndPolicyPrice.SetCheckValue(true);







}
void CHMSBedSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndLimit.SetEvent(WE_CHANGE, _OnLimitChangeFnc);
	//m_wndLimit.SetEvent(WE_SETFOCUS, _OnLimitSetfocusFnc);
	//m_wndLimit.SetEvent(WE_KILLFOCUS, _OnLimitKillfocusFnc);
	m_wndLimit.SetEvent(WE_CHECKVALUE, _OnLimitCheckValueFnc);
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
	m_wndDifferencePaid.SetEvent(WE_CLICK, _OnDifferencePaidSelectFnc);
	m_wndInsurancePaid.SetEvent(WE_CLICK, _OnInsurancePaidSelectFnc);
	m_wndPolicyPaid.SetEvent(WE_CLICK, _OnPolicyPaidSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	SetMode(VM_NONE);

}
void CHMSBedSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndLimit.GetDlgCtrlID(), m_nLimit);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Check(pDX, m_wndDifferencePaid.GetDlgCtrlID(), m_bDifferencePaid);
	DDX_Check(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_bInsurancePaid);
	DDX_Check(pDX, m_wndPolicyPaid.GetDlgCtrlID(), m_bPolicyPaid);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CHMSBedSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSBedSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBedSetupDialog::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();
	m_szName.Empty();
	m_nLimit=0;
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_bDifferencePaid=FALSE;
	m_bInsurancePaid=FALSE;
	m_bPolicyPaid=FALSE;
	m_bActive=FALSE;

}
int CHMSBedSetupDialog::SetMode(int nMode){
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
void CHMSBedSetupDialog::OnListDblClick(){
	
} 
void CHMSBedSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSBedSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSBedSetupDialog::OnListLoadData(){
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
void CHMSBedSetupDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedSetupDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSBedSetupDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSBedSetupDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSBedSetupDialog::OnDepartmentLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedSetupDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSBedSetupDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedSetupDialog::OnRoomSelendok(){
	 
}
/*void CHMSBedSetupDialog::OnRoomSetfocus(){
	
}*/
/*void CHMSBedSetupDialog::OnRoomKillfocus(){
	
}*/
long CHMSBedSetupDialog::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRoomKey
};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedSetupDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSBedSetupDialog::OnNameChange(){
	
} */
/*void CHMSBedSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSBedSetupDialog::OnNameKillfocus(){
	
} */
int CHMSBedSetupDialog::OnNameCheckValue(){
	return 0;
} 
/*void CHMSBedSetupDialog::OnLimitChange(){
	
} */
/*void CHMSBedSetupDialog::OnLimitSetfocus(){
	
} */
/*void CHMSBedSetupDialog::OnLimitKillfocus(){
	
} */
int CHMSBedSetupDialog::OnLimitCheckValue(){
	return 0;
} 
/*void CHMSBedSetupDialog::OnServicePriceChange(){
	
} */
/*void CHMSBedSetupDialog::OnServicePriceSetfocus(){
	
} */
/*void CHMSBedSetupDialog::OnServicePriceKillfocus(){
	
} */
int CHMSBedSetupDialog::OnServicePriceCheckValue(){
	return 0;
} 
/*void CHMSBedSetupDialog::OnInsurancePriceChange(){
	
} */
/*void CHMSBedSetupDialog::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSBedSetupDialog::OnInsurancePriceKillfocus(){
	
} */
int CHMSBedSetupDialog::OnInsurancePriceCheckValue(){
	return 0;
} 
/*void CHMSBedSetupDialog::OnPolicyPriceChange(){
	
} */
/*void CHMSBedSetupDialog::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSBedSetupDialog::OnPolicyPriceKillfocus(){
	
} */
int CHMSBedSetupDialog::OnPolicyPriceCheckValue(){
	return 0;
} 
	void CHMSBedSetupDialog::OnDifferencePaidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSBedSetupDialog::OnInsurancePaidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSBedSetupDialog::OnPolicyPaidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSBedSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedSetupDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedSetupDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CHMSBedSetupDialog::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSBedSetupDialog::OnAddHMSBedSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSBedSetupDialog::OnEditHMSBedSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSBedSetupDialog::OnDeleteHMSBedSetupDialog(){
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
 		OnCancelHMSBedSetupDialog();
 	}
	return 0;
}
int CHMSBedSetupDialog::OnSaveHMSBedSetupDialog(){
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
 		//OnHMSBedSetupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSBedSetupDialog::OnCancelHMSBedSetupDialog(){
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
int CHMSBedSetupDialog::OnHMSBedSetupDialogListLoadData(){
	return 0;
}
