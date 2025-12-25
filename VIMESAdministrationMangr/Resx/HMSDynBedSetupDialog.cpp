#include "HMSDynBedSetupDialog.h"
#include "MainFrm.h"
static long _OnPriceListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog*)pWnd)->OnPriceListLoadData();
} 
static void _OnPriceListDblClickFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog*)pWnd)->OnPriceListDblClick();
} 
static void _OnPriceListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDynBedSetupDialog*)pWnd)->OnPriceListSelectChange(nOldItem, nNewItem);
} 
static int _OnPriceListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnPriceListDeleteItem();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog *)pWnd)->OnServicePriceCheckValue();
} 
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog *)pWnd)->OnPolicyPriceCheckValue();
} 
/*static void _OnRequirePriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnRequirePriceChange();
} */
/*static void _OnRequirePriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnRequirePriceSetfocus();} */ 
/*static void _OnRequirePriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnRequirePriceKillfocus();
} */
static int _OnRequirePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog *)pWnd)->OnRequirePriceCheckValue();
} 
static void _OnInsurancePaidSelectFnc(CWnd *pWnd){
	 ((CHMSDynBedSetupDialog*)pWnd)->OnInsurancePaidSelect();
}
static void _OnPolicyPaidSelectFnc(CWnd *pWnd){
	 ((CHMSDynBedSetupDialog*)pWnd)->OnPolicyPaidSelect();
}
static void _OnDifferencePaidSelectFnc(CWnd *pWnd){
	 ((CHMSDynBedSetupDialog*)pWnd)->OnDifferencePaidSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDynBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnAddHMSDynBedSetupDialog();
} 
static int _OnEditHMSDynBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnEditHMSDynBedSetupDialog();
} 
static int _OnDeleteHMSDynBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnDeleteHMSDynBedSetupDialog();
} 
static int _OnSaveHMSDynBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnSaveHMSDynBedSetupDialog();
} 
static int _OnCancelHMSDynBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnCancelHMSDynBedSetupDialog();
} 
CHMSDynBedSetupDialog::CHMSDynBedSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSDynBedSetupDialog::~CHMSDynBedSetupDialog(){
}
void CHMSDynBedSetupDialog::OnCreateComponents(){
	m_wndDynamicBedInformation.Create(this, _T("Dynamic Bed Information"), 5, 5, 800, 445);
	m_wndPriceList.Create(this,10, 30, 795, 350); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 355, 130, 380);
	m_wndName.Create(this,135, 355, 795, 380); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 385, 130, 410);
	m_wndServicePrice.Create(this,135, 385, 225, 410); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 230, 385, 350, 410);
	m_wndInsurancePrice.Create(this,355, 385, 445, 410); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 10, 415, 130, 440);
	m_wndPolicyPrice.Create(this,135, 415, 225, 440); 
	m_wndRequirePriceLabel.Create(this, _T("Require Price"), 230, 415, 350, 440);
	m_wndRequirePrice.Create(this,355, 415, 445, 440); 
	m_wndInsurancePaid.Create(this, _T("Insurance Paid"), 450, 385, 573, 410);
	m_wndPolicyPaid.Create(this, _T("Policy Paid"), 578, 385, 701, 410);
	m_wndDifferencePaid.Create(this, _T("Difference Paid"), 450, 415, 573, 440);
	m_wndAdd.Create(this, _T("&Add"), 295, 450, 375, 475);
	m_wndEdit.Create(this, _T("&Edit"), 380, 450, 460, 475);
	m_wndDelete.Create(this, _T("&Delete"), 465, 450, 545, 475);
	m_wndSave.Create(this, _T("&Save"), 550, 450, 630, 475);
	m_wndCancel.Create(this, _T("&Cancel"), 635, 450, 715, 475);
	m_wndClose.Create(this, _T("&Close"), 720, 450, 800, 475);

}
void CHMSDynBedSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndServicePrice.SetLimitText(1024);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(1024);
	m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(1024);
	m_wndPolicyPrice.SetCheckValue(true);
	m_wndRequirePrice.SetLimitText(1024);
	m_wndRequirePrice.SetCheckValue(true);



}
void CHMSDynBedSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPriceList.SetEvent(WE_SELCHANGE, _OnPriceListSelectChangeFnc);
	m_wndPriceList.SetEvent(WE_LOADDATA, _OnPriceListLoadDataFnc);
	m_wndPriceList.SetEvent(WE_DBLCLICK, _OnPriceListDblClickFnc);
	m_wndPriceList.AddEvent(1, _T("Delete"), _OnPriceListDeleteItemFnc, 0, VK_DELETE, 0);
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
	//m_wndRequirePrice.SetEvent(WE_CHANGE, _OnRequirePriceChangeFnc);
	//m_wndRequirePrice.SetEvent(WE_SETFOCUS, _OnRequirePriceSetfocusFnc);
	//m_wndRequirePrice.SetEvent(WE_KILLFOCUS, _OnRequirePriceKillfocusFnc);
	m_wndRequirePrice.SetEvent(WE_CHECKVALUE, _OnRequirePriceCheckValueFnc);
	m_wndInsurancePaid.SetEvent(WE_CLICK, _OnInsurancePaidSelectFnc);
	m_wndPolicyPaid.SetEvent(WE_CLICK, _OnPolicyPaidSelectFnc);
	m_wndDifferencePaid.SetEvent(WE_CLICK, _OnDifferencePaidSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDynBedSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Text(pDX, m_wndRequirePrice.GetDlgCtrlID(), m_nRequirePrice);
	DDX_Check(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_bInsurancePaid);
	DDX_Check(pDX, m_wndPolicyPaid.GetDlgCtrlID(), m_bPolicyPaid);
	DDX_Check(pDX, m_wndDifferencePaid.GetDlgCtrlID(), m_bDifferencePaid);

}
void CHMSDynBedSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDynBedSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDynBedSetupDialog::SetDefaultValues(){

	m_szName.Empty();
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_nRequirePrice=0;
	m_bInsurancePaid=FALSE;
	m_bPolicyPaid=FALSE;
	m_bDifferencePaid=FALSE;

}
int CHMSDynBedSetupDialog::SetMode(int nMode){
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
void CHMSDynBedSetupDialog::OnPriceListDblClick(){
	
} 
void CHMSDynBedSetupDialog::OnPriceListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDynBedSetupDialog::OnPriceListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDynBedSetupDialog::OnPriceListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPriceList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPriceList.AddItems(
		rs.MoveNext();
	}
	m_wndPriceList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSDynBedSetupDialog::OnNameChange(){
	
} */
/*void CHMSDynBedSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSDynBedSetupDialog::OnNameKillfocus(){
	
} */
int CHMSDynBedSetupDialog::OnNameCheckValue(){
	return 0;
} 
/*void CHMSDynBedSetupDialog::OnServicePriceChange(){
	
} */
/*void CHMSDynBedSetupDialog::OnServicePriceSetfocus(){
	
} */
/*void CHMSDynBedSetupDialog::OnServicePriceKillfocus(){
	
} */
int CHMSDynBedSetupDialog::OnServicePriceCheckValue(){
	return 0;
} 
/*void CHMSDynBedSetupDialog::OnInsurancePriceChange(){
	
} */
/*void CHMSDynBedSetupDialog::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSDynBedSetupDialog::OnInsurancePriceKillfocus(){
	
} */
int CHMSDynBedSetupDialog::OnInsurancePriceCheckValue(){
	return 0;
} 
/*void CHMSDynBedSetupDialog::OnPolicyPriceChange(){
	
} */
/*void CHMSDynBedSetupDialog::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSDynBedSetupDialog::OnPolicyPriceKillfocus(){
	
} */
int CHMSDynBedSetupDialog::OnPolicyPriceCheckValue(){
	return 0;
} 
/*void CHMSDynBedSetupDialog::OnRequirePriceChange(){
	
} */
/*void CHMSDynBedSetupDialog::OnRequirePriceSetfocus(){
	
} */
/*void CHMSDynBedSetupDialog::OnRequirePriceKillfocus(){
	
} */
int CHMSDynBedSetupDialog::OnRequirePriceCheckValue(){
	return 0;
} 
	void CHMSDynBedSetupDialog::OnInsurancePaidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSDynBedSetupDialog::OnPolicyPaidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSDynBedSetupDialog::OnDifferencePaidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSDynBedSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedSetupDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedSetupDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDynBedSetupDialog::OnAddHMSDynBedSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDynBedSetupDialog::OnEditHMSDynBedSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDynBedSetupDialog::OnDeleteHMSDynBedSetupDialog(){
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
 		OnCancelHMSDynBedSetupDialog();
 	}
	return 0;
}
int CHMSDynBedSetupDialog::OnSaveHMSDynBedSetupDialog(){
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
 		//OnHMSDynBedSetupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDynBedSetupDialog::OnCancelHMSDynBedSetupDialog(){
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
int CHMSDynBedSetupDialog::OnHMSDynBedSetupDialogListLoadData(){
	return 0;
}
