#include "HMSAdditionFeeSetupDialog_new.h"
#include "MainFrm.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnNameCheckValue();
} 
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnServicePriceCheckValue();
} 
/*static void _OnReturnDeptChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnReturnDeptChange();
} */
/*static void _OnReturnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnReturnDeptSetfocus();} */ 
/*static void _OnReturnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnReturnDeptKillfocus();
} */
static int _OnReturnDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnReturnDeptCheckValue();
} 
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static void _OnInsDiffPaymentChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnInsDiffPaymentChange();
} */
/*static void _OnInsDiffPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnInsDiffPaymentSetfocus();} */ 
/*static void _OnInsDiffPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnInsDiffPaymentKillfocus();
} */
static int _OnInsDiffPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnInsDiffPaymentCheckValue();
} 
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnPolicyPriceCheckValue();
} 
/*static void _OnPolDiffPaymentChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnPolDiffPaymentChange();
} */
/*static void _OnPolDiffPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnPolDiffPaymentSetfocus();} */ 
/*static void _OnPolDiffPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnPolDiffPaymentKillfocus();
} */
static int _OnPolDiffPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeSetupDialog_new *)pWnd)->OnPolDiffPaymentCheckValue();
} 
static void _OnHitechSelectFnc(CWnd *pWnd){
	 ((CHMSAdditionFeeSetupDialog_new*)pWnd)->OnHitechSelect();
}
static void _OnPlasticSurgerySelectFnc(CWnd *pWnd){
	 ((CHMSAdditionFeeSetupDialog_new*)pWnd)->OnPlasticSurgerySelect();
}
static void _OnHitechMachineSelectFnc(CWnd *pWnd){
	 ((CHMSAdditionFeeSetupDialog_new*)pWnd)->OnHitechMachineSelect();
}
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSAdditionFeeSetupDialog_new*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdditionFeeSetupDialog_new *pVw = (CHMSAdditionFeeSetupDialog_new *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAdditionFeeSetupDialog_new *pVw = (CHMSAdditionFeeSetupDialog_new *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSAdditionFeeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeSetupDialog_new*)pWnd)->OnAddHMSAdditionFeeSetupDialog();
} 
static int _OnEditHMSAdditionFeeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeSetupDialog_new*)pWnd)->OnEditHMSAdditionFeeSetupDialog();
} 
static int _OnDeleteHMSAdditionFeeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeSetupDialog_new*)pWnd)->OnDeleteHMSAdditionFeeSetupDialog();
} 
static int _OnSaveHMSAdditionFeeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeSetupDialog_new*)pWnd)->OnSaveHMSAdditionFeeSetupDialog();
} 
static int _OnCancelHMSAdditionFeeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeSetupDialog_new*)pWnd)->OnCancelHMSAdditionFeeSetupDialog();
} 
CHMSAdditionFeeSetupDialog_new::CHMSAdditionFeeSetupDialog_new(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 485;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CHMSAdditionFeeSetupDialog_new::~CHMSAdditionFeeSetupDialog_new(){
}
void CHMSAdditionFeeSetupDialog_new::OnCreateComponents(){
	m_wndFeeInformation.Create(this, _T("Fee Information"), 4, 5, 467, 181);
	m_wndNameLabel.Create(this, _T("Name"), 10, 29, 130, 54);
	m_wndName.Create(this,135, 30, 464, 55); 
	m_wndServicePriceLabel.Create(this, _T("Service Price (Old)"), 10, 60, 130, 85);
	m_wndServicePrice.Create(this,135, 60, 235, 85); 
	m_wndReturnDeptLabel.Create(this, _T("Return Dept"), 240, 60, 360, 85);
	m_wndReturnDept.Create(this,365, 60, 465, 85); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price (Old)"), 10, 90, 130, 115);
	m_wndInsurancePrice.Create(this,135, 90, 235, 115); 
	m_wndInsDiffPaymentLabel.Create(this, _T("Ins Diff Payment"), 240, 90, 360, 115);
	m_wndInsDiffPayment.Create(this,365, 90, 465, 115); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price (Old)"), 10, 120, 130, 145);
	m_wndPolicyPrice.Create(this,135, 120, 235, 145); 
	m_wndPolDiffPaymentLabel.Create(this, _T("Pol Diff Payment"), 240, 120, 360, 145);
	m_wndPolDiffPayment.Create(this,365, 120, 465, 145); 
	m_wndHitech.Create(this, _T("Hitech"), 10, 150, 130, 175);
	m_wndPlasticSurgery.Create(this, _T("Plastic Surgery"), 135, 150, 285, 175);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 290, 150, 440, 175);
	m_wndActive.Create(this, _T("Active"), 8, 186, 128, 211);
	m_wndSave.Create(this, _T("&Save"), 305, 186, 385, 211);
	m_wndCancel.Create(this, _T("&Cancel"), 390, 186, 470, 211);

}
void CHMSAdditionFeeSetupDialog_new::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(512);
	m_wndName.SetCheckValue(true);
	m_wndServicePrice.SetLimitText(16);
	m_wndServicePrice.SetCheckValue(true);
	m_wndReturnDept.SetLimitText(16);
	m_wndReturnDept.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(16);
	m_wndInsurancePrice.SetCheckValue(true);
	m_wndInsDiffPayment.SetLimitText(16);
	m_wndInsDiffPayment.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(16);
	m_wndPolicyPrice.SetCheckValue(true);
	m_wndPolDiffPayment.SetLimitText(16);
	m_wndPolDiffPayment.SetCheckValue(true);

	
	m_wndReturnDept.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitech.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitechMachine.ModifyStyle(WS_TABSTOP, 0);
	m_wndPlasticSurgery.ModifyStyle(WS_TABSTOP, 0);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndServicePrice.SetCurrencyFormat(true);
	m_wndInsurancePrice.SetCurrencyFormat(true);
	m_wndPolDiffPayment.SetCurrencyFormat(true);
	m_wndPolicyPrice.SetCurrencyFormat(true);
	m_wndInsDiffPayment.SetCurrencyFormat(true);
	m_wndReturnDept.SetCurrencyFormat(true);
}
void CHMSAdditionFeeSetupDialog_new::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndServicePrice.SetEvent(WE_CHANGE, _OnServicePriceChangeFnc);
	//m_wndServicePrice.SetEvent(WE_SETFOCUS, _OnServicePriceSetfocusFnc);
	//m_wndServicePrice.SetEvent(WE_KILLFOCUS, _OnServicePriceKillfocusFnc);
	m_wndServicePrice.SetEvent(WE_CHECKVALUE, _OnServicePriceCheckValueFnc);
	//m_wndReturnDept.SetEvent(WE_CHANGE, _OnReturnDeptChangeFnc);
	//m_wndReturnDept.SetEvent(WE_SETFOCUS, _OnReturnDeptSetfocusFnc);
	//m_wndReturnDept.SetEvent(WE_KILLFOCUS, _OnReturnDeptKillfocusFnc);
	m_wndReturnDept.SetEvent(WE_CHECKVALUE, _OnReturnDeptCheckValueFnc);
	//m_wndInsurancePrice.SetEvent(WE_CHANGE, _OnInsurancePriceChangeFnc);
	//m_wndInsurancePrice.SetEvent(WE_SETFOCUS, _OnInsurancePriceSetfocusFnc);
	//m_wndInsurancePrice.SetEvent(WE_KILLFOCUS, _OnInsurancePriceKillfocusFnc);
	m_wndInsurancePrice.SetEvent(WE_CHECKVALUE, _OnInsurancePriceCheckValueFnc);
	//m_wndInsDiffPayment.SetEvent(WE_CHANGE, _OnInsDiffPaymentChangeFnc);
	//m_wndInsDiffPayment.SetEvent(WE_SETFOCUS, _OnInsDiffPaymentSetfocusFnc);
	//m_wndInsDiffPayment.SetEvent(WE_KILLFOCUS, _OnInsDiffPaymentKillfocusFnc);
	m_wndInsDiffPayment.SetEvent(WE_CHECKVALUE, _OnInsDiffPaymentCheckValueFnc);
	//m_wndPolicyPrice.SetEvent(WE_CHANGE, _OnPolicyPriceChangeFnc);
	//m_wndPolicyPrice.SetEvent(WE_SETFOCUS, _OnPolicyPriceSetfocusFnc);
	//m_wndPolicyPrice.SetEvent(WE_KILLFOCUS, _OnPolicyPriceKillfocusFnc);
	m_wndPolicyPrice.SetEvent(WE_CHECKVALUE, _OnPolicyPriceCheckValueFnc);
	//m_wndPolDiffPayment.SetEvent(WE_CHANGE, _OnPolDiffPaymentChangeFnc);
	//m_wndPolDiffPayment.SetEvent(WE_SETFOCUS, _OnPolDiffPaymentSetfocusFnc);
	//m_wndPolDiffPayment.SetEvent(WE_KILLFOCUS, _OnPolDiffPaymentKillfocusFnc);
	m_wndPolDiffPayment.SetEvent(WE_CHECKVALUE, _OnPolDiffPaymentCheckValueFnc);
	m_wndHitech.SetEvent(WE_CLICK, _OnHitechSelectFnc);
	m_wndPlasticSurgery.SetEvent(WE_CLICK, _OnPlasticSurgerySelectFnc);
	m_wndHitechMachine.SetEvent(WE_CLICK, _OnHitechMachineSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();
	if(m_szFeeID.Left(2) == _T("B2") || m_szFeeID.Left(2) == _T("B4") || m_szFeeID.Left(5) == _T("B5"))
	{
		m_wndHitech.EnableWindow(true);
	}
	else
	{
		m_wndHitech.EnableWindow(false);
		m_bHitech = false;
	}
	UpdateData(false);
}
void CHMSAdditionFeeSetupDialog_new::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndReturnDept.GetDlgCtrlID(), m_nReturnDept);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndInsDiffPayment.GetDlgCtrlID(), m_nInsDiffPayment);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Text(pDX, m_wndPolDiffPayment.GetDlgCtrlID(), m_nPolDiffPayment);
	DDX_Check(pDX, m_wndHitech.GetDlgCtrlID(), m_bHitech);
	DDX_Check(pDX, m_wndPlasticSurgery.GetDlgCtrlID(), m_bPlasticSurgery);
	DDX_Check(pDX, m_wndHitechMachine.GetDlgCtrlID(), m_bHitechMachine);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CHMSAdditionFeeSetupDialog_new::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_fee_list WHERE hfl_feeid='%s' "), m_szFeeID);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hfl_name"), m_szName);

		rs.GetValue(_T("hfl_servprice_prev"), m_nServicePrice);
		rs.GetValue(_T("hfl_insprice_prev"), m_nInsurancePrice);
		rs.GetValue(_T("hfl_insdiff"), m_nInsDiffPayment);
		rs.GetValue(_T("hfl_polprice_prev"), m_nPolicyPrice);
		rs.GetValue(_T("hfl_poldiff"), m_nPolDiffPayment);
		rs.GetValue(_T("hfl_reqprice"), m_nRequestPrice);
		rs.GetValue(_T("hfl_retprice"), m_nReturnDept);

		rs.GetValue(_T("hfl_hitech"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bHitech = true;
		else m_bHitech = false;

		rs.GetValue(_T("hfl_active"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bActive = true;
		else m_bActive = false;

		rs.GetValue(_T("hfl_plasticsurgery"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bPlasticSurgery = TRUE;

		rs.GetValue(_T("hfl_hitechmachine"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bHitechMachine = true;

		UpdateData(false);
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_NONE);

}
void CHMSAdditionFeeSetupDialog_new::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdditionFeeSetupDialog_new::SetDefaultValues(){

	m_szName.Empty();
	m_nServicePrice=0;
	m_nReturnDept=0;
	m_nInsurancePrice=0;
	m_nInsDiffPayment=0;
	m_nPolicyPrice=0;
	m_nRequestPrice=0;
	m_nReturnDept=0;
	m_bDifferencePayment=FALSE;
	m_bInsurancePayment=TRUE;
	m_bPolicyPayment=TRUE;
	m_bHitech=FALSE;
	m_bPlasticSurgery=FALSE;
	m_bHitechMachine=FALSE;
	m_bActive=TRUE;

}
int CHMSAdditionFeeSetupDialog_new::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
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
/*void CHMSAdditionFeeSetupDialog_new::OnNameChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnNameSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnNameKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog_new::OnNameCheckValue(){
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog_new::OnServicePriceChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnServicePriceSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnServicePriceKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog_new::OnServicePriceCheckValue(){
	if(m_nServicePrice < 0)
		return -1;
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog_new::OnReturnDeptChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnReturnDeptSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnReturnDeptKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog_new::OnReturnDeptCheckValue(){
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog_new::OnInsurancePriceChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnInsurancePriceKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog_new::OnInsurancePriceCheckValue(){
	if(m_nInsurancePrice < 0) return -1;
	UpdateData(FALSE);
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog_new::OnInsDiffPaymentChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnInsDiffPaymentSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnInsDiffPaymentKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog_new::OnInsDiffPaymentCheckValue(){
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog_new::OnPolicyPriceChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnPolicyPriceKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog_new::OnPolicyPriceCheckValue(){
	if(m_nPolicyPrice < 0) return -1;
	UpdateData(FALSE);
	return 0;
} 
/*void CHMSAdditionFeeSetupDialog_new::OnPolDiffPaymentChange(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnPolDiffPaymentSetfocus(){
	
} */
/*void CHMSAdditionFeeSetupDialog_new::OnPolDiffPaymentKillfocus(){
	
} */
int CHMSAdditionFeeSetupDialog_new::OnPolDiffPaymentCheckValue(){
	
	return 0;
} 
	void CHMSAdditionFeeSetupDialog_new::OnHitechSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSAdditionFeeSetupDialog_new::OnPlasticSurgerySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSAdditionFeeSetupDialog_new::OnHitechMachineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSAdditionFeeSetupDialog_new::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSAdditionFeeSetupDialog_new::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveHMSAdditionFeeSetupDialog() > 0)
		CGuiDialog::OnOK();
} 
void CHMSAdditionFeeSetupDialog_new::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSAdditionFeeSetupDialog_new::OnAddHMSAdditionFeeSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdditionFeeSetupDialog_new::OnEditHMSAdditionFeeSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdditionFeeSetupDialog_new::OnDeleteHMSAdditionFeeSetupDialog(){
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
 		OnCancelHMSAdditionFeeSetupDialog();
 	}
	return 0;
}
int CHMSAdditionFeeSetupDialog_new::OnSaveHMSAdditionFeeSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	if(m_nInsDiffPayment < 0 || m_nPolDiffPayment < 0 || m_nReturnDept < 0)
		return -1;
	if(m_nInsDiffPayment > m_nServicePrice || m_nPolDiffPayment > m_nServicePrice)
		return -1;
	if(m_nReturnDept > m_nServicePrice)
		return -1;
	
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	CDbfMap feeTbl;

	szSQL.Format(_T(" INSERT INTO hms_fee_list_edit SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szFeeID);
	pMF->ExecSQL(szSQL);

	feeTbl.SetTableName(_T("hms_fee_list"));
	feeTbl.AddField(_T("hfl_updatedby"), dfText, 15); 
	feeTbl.AddField(_T("hfl_updateddate"), dfDateTime); 
	feeTbl.AddField(_T("hfl_servprice_prev"), dfDouble);
	feeTbl.AddField(_T("hfl_insprice_prev"), dfDouble);
	feeTbl.AddField(_T("hfl_insdiff"), dfDouble);
	feeTbl.AddField(_T("hfl_polprice_prev"), dfDouble);
	feeTbl.AddField(_T("hfl_poldiff"), dfDouble);
	feeTbl.AddField(_T("hfl_retprice"), dfDouble);
	feeTbl.AddField(_T("hfl_reqprice"), dfDouble);
	feeTbl.AddField(_T("hfl_active"), dfText, 1);
	feeTbl.AddField(_T("hfl_hitech"), dfText, 1);
	feeTbl.AddField(_T("hfl_plasticsurgery"), dfText, 1);
	feeTbl.AddField(_T("hfl_hitechmachine"), dfText, 1);
	feeTbl.AddField(_T("hfl_hostname"), dfText, 100);
	
	
	feeTbl.SetValue(_T("hfl_updatedby"), pMF->GetCurrentUser()); 
	feeTbl.SetValue(_T("hfl_updateddate"), pMF->GetSysDateTime()); 
	feeTbl.SetValue(_T("hfl_servprice_prev"), m_nServicePrice);
	feeTbl.SetValue(_T("hfl_insprice_prev"), m_nInsurancePrice);
	feeTbl.SetValue(_T("hfl_insdiff"), m_nInsDiffPayment);
	feeTbl.SetValue(_T("hfl_polprice_prev"), m_nPolicyPrice);
	feeTbl.SetValue(_T("hfl_poldiff"), m_nPolDiffPayment);
	feeTbl.SetValue(_T("hfl_retprice"), m_nReturnDept);
	feeTbl.SetValue(_T("hfl_reqprice"), m_nRequestPrice);
	feeTbl.SetValue(_T("hfl_active"), m_bActive?_T("Y"):_T("N"));
	feeTbl.SetValue(_T("hfl_hitech"), m_bHitech?_T("Y"):_T("N"));
	feeTbl.SetValue(_T("hfl_plasticsurgery"), m_bPlasticSurgery?_T("Y"):_T("N"));
	feeTbl.SetValue(_T("hfl_hitechmachine"), m_bHitechMachine?_T("Y"):_T("N"));
	feeTbl.SetValue(_T("hfl_hostname"), pMF->m_szLocalHostName);

	szSQL.Format(_T("%s"), feeTbl.GetUpdateSQL(_T("hfl_feeid")));
	szSQL.AppendFormat(_T(" WHERE hfl_feeid='%s' "), m_szFeeID);
	//_fmsg(_T("%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		CString szEvent, szDesc;
		szEvent.Format(_T("Edit"));
		szDesc.Format(_T("ID:%s, Name:%s"), m_szFeeID, m_szName);
		pMF->SystemLog(szEvent, szDesc);
		OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSAdditionFeeSetupDialog_new::OnCancelHMSAdditionFeeSetupDialog(){
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
int CHMSAdditionFeeSetupDialog_new::OnHMSAdditionFeeSetupDialogListLoadData(){
	return 0;
}
