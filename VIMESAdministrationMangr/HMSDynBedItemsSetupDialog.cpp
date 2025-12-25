#include "HMSDynBedItemsSetupDialog.h"
#include "HMSMainFrame.h"
#include "HMSDynBedSetupDialog.h"

/*static void _OnDaysChangeFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnDaysChange();
} */
/*static void _OnDaysSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnDaysSetfocus();} */ 
/*static void _OnDaysKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnDaysKillfocus();
} */
static int _OnDaysCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedItemsSetupDialog *)pWnd)->OnDaysCheckValue();
} 
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedItemsSetupDialog *)pWnd)->OnServicePriceCheckValue();
} 
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedItemsSetupDialog *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedItemsSetupDialog *)pWnd)->OnPolicyPriceCheckValue();
} 
/*static void _OnRequirePriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnRequirePriceChange();
} */
/*static void _OnRequirePriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnRequirePriceSetfocus();} */ 
/*static void _OnRequirePriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedItemsSetupDialog *)pWnd)->OnRequirePriceKillfocus();
} */
static int _OnRequirePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedItemsSetupDialog *)pWnd)->OnRequirePriceCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDynBedItemsSetupDialog *pVw = (CHMSDynBedItemsSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDynBedItemsSetupDialog *pVw = (CHMSDynBedItemsSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDynBedItemsSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedItemsSetupDialog*)pWnd)->OnAddHMSDynBedItemsSetupDialog();
} 
static int _OnEditHMSDynBedItemsSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedItemsSetupDialog*)pWnd)->OnEditHMSDynBedItemsSetupDialog();
} 
static int _OnDeleteHMSDynBedItemsSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedItemsSetupDialog*)pWnd)->OnDeleteHMSDynBedItemsSetupDialog();
} 
static int _OnSaveHMSDynBedItemsSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedItemsSetupDialog*)pWnd)->OnSaveHMSDynBedItemsSetupDialog();
} 
static int _OnCancelHMSDynBedItemsSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedItemsSetupDialog*)pWnd)->OnCancelHMSDynBedItemsSetupDialog();
} 
CHMSDynBedItemsSetupDialog::CHMSDynBedItemsSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 240;
	m_nDlgHeight = 215;
	SetDefaultValues();
}
CHMSDynBedItemsSetupDialog::~CHMSDynBedItemsSetupDialog(){
}
void CHMSDynBedItemsSetupDialog::OnCreateComponents(){
	m_wndDaysLabel.Create(this, _T("Days"), 10, 30, 130, 55);
	m_wndDays.Create(this,135, 30, 230, 55); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 60, 130, 85);
	m_wndServicePrice.Create(this,135, 60, 230, 85); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 10, 90, 130, 115);
	m_wndBedLevelInformation.Create(this, _T("Bed Level Information"), 5, 5, 235, 180);
	m_wndInsurancePrice.Create(this,135, 90, 230, 115); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 10, 120, 130, 145);
	m_wndPolicyPrice.Create(this,135, 120, 230, 145); 
	m_wndRequirePriceLabel.Create(this, _T("Require Price"), 10, 150, 130, 175);
	m_wndRequirePrice.Create(this,135, 150, 230, 175); 
	m_wndSave.Create(this, _T("&Save"), 70, 185, 150, 210);
	m_wndClose.Create(this, _T("&Close"), 155, 185, 235, 210);

}
void CHMSDynBedItemsSetupDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDays.SetCheckValue(true);
	m_wndServicePrice.SetLimitText(10);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(10);
//	m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(10);
//	m_wndPolicyPrice.SetCheckValue(true);
	m_wndRequirePrice.SetLimitText(10);
//	m_wndRequirePrice.SetCheckValue(true);

	m_hms_dynbedlist_itemsTbl.SetTableName(_T("hms_dynbedlist_items"));
	m_hms_dynbedlist_itemsTbl.AddField(_T("hdbli_id"), dfLong); 
	m_hms_dynbedlist_itemsTbl.AddField(_T("hdbli_lnidx"), dfLong); 
	m_hms_dynbedlist_itemsTbl.AddField(_T("hdbli_days"), dfLong); 
	m_hms_dynbedlist_itemsTbl.AddField(_T("hdbli_servprice"), dfDouble); 
	m_hms_dynbedlist_itemsTbl.AddField(_T("hdbli_insprice"), dfDouble); 
	m_hms_dynbedlist_itemsTbl.AddField(_T("hdbli_polprice"), dfDouble); 
	m_hms_dynbedlist_itemsTbl.AddField(_T("hdbli_reqprice"), dfDouble); 

}
void CHMSDynBedItemsSetupDialog::OnSetWindowEvents(){
	//m_wndDays.SetEvent(WE_CHANGE, _OnDaysChangeFnc);
	//m_wndDays.SetEvent(WE_SETFOCUS, _OnDaysSetfocusFnc);
	//m_wndDays.SetEvent(WE_KILLFOCUS, _OnDaysKillfocusFnc);
	m_wndDays.SetEvent(WE_CHECKVALUE, _OnDaysCheckValueFnc);
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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	if(GetMode() == VM_EDIT)
		GetDataToScreen();
	SetMode(GetMode());
}
void CHMSDynBedItemsSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDays.GetDlgCtrlID(), m_nDays);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Text(pDX, m_wndRequirePrice.GetDlgCtrlID(), m_nRequirePrice);

}
void CHMSDynBedItemsSetupDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_dynbedlist_items WHERE hdbli_id=%d and hdbli_lnidx=%d"), m_nID, m_nLine);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hdbli_days"), m_nDays);
		rs.GetValue(_T("hdbli_servprice"), m_nServicePrice);
		rs.GetValue(_T("hdbli_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hdbli_polprice"), m_nPolicyPrice);
		rs.GetValue(_T("hdbli_reqprice"), m_nRequirePrice);
	//	SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSDynBedItemsSetupDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_ADD){
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("select coalesce(max(hdbli_lnidx), 0)+1 as lnidx FROM hms_dynbedlist_items "));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("lnidx"), m_nLine);
	}
	m_hms_dynbedlist_itemsTbl.SetValue(_T("hdbli_id"), m_nID);
	m_hms_dynbedlist_itemsTbl.SetValue(_T("hdbli_lnidx"), m_nLine);
	m_hms_dynbedlist_itemsTbl.SetValue(_T("hdbli_days"), m_nDays);
	m_hms_dynbedlist_itemsTbl.SetValue(_T("hdbli_servprice"), m_nServicePrice);
	m_hms_dynbedlist_itemsTbl.SetValue(_T("hdbli_insprice"), m_nInsurancePrice);
	m_hms_dynbedlist_itemsTbl.SetValue(_T("hdbli_polprice"), m_nPolicyPrice);
	m_hms_dynbedlist_itemsTbl.SetValue(_T("hdbli_reqprice"), m_nRequirePrice);

}
void CHMSDynBedItemsSetupDialog::SetDefaultValues(){

	m_nDays=0;
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_nRequirePrice=0;

}
int CHMSDynBedItemsSetupDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
			m_wndDays.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1,  -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSDynBedItemsSetupDialog::OnDaysChange(){
	
} */
/*void CHMSDynBedItemsSetupDialog::OnDaysSetfocus(){
	
} */
/*void CHMSDynBedItemsSetupDialog::OnDaysKillfocus(){
	
} */
int CHMSDynBedItemsSetupDialog::OnDaysCheckValue(){
	return 0;
} 
/*void CHMSDynBedItemsSetupDialog::OnServicePriceChange(){
	
} */
/*void CHMSDynBedItemsSetupDialog::OnServicePriceSetfocus(){
	
} */
/*void CHMSDynBedItemsSetupDialog::OnServicePriceKillfocus(){
	
} */
int CHMSDynBedItemsSetupDialog::OnServicePriceCheckValue(){
	UpdateData(true);
	if(m_nPolicyPrice == 0)
		m_nInsurancePrice = m_nPolicyPrice = m_nRequirePrice = m_nServicePrice;
	UpdateData(false);
	return 0;
} 
/*void CHMSDynBedItemsSetupDialog::OnInsurancePriceChange(){
	
} */
/*void CHMSDynBedItemsSetupDialog::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSDynBedItemsSetupDialog::OnInsurancePriceKillfocus(){
	
} */
int CHMSDynBedItemsSetupDialog::OnInsurancePriceCheckValue(){
	return 0;
} 
/*void CHMSDynBedItemsSetupDialog::OnPolicyPriceChange(){
	
} */
/*void CHMSDynBedItemsSetupDialog::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSDynBedItemsSetupDialog::OnPolicyPriceKillfocus(){
	
} */
int CHMSDynBedItemsSetupDialog::OnPolicyPriceCheckValue(){
	return 0;
} 
/*void CHMSDynBedItemsSetupDialog::OnRequirePriceChange(){
	
} */
/*void CHMSDynBedItemsSetupDialog::OnRequirePriceSetfocus(){
	
} */
/*void CHMSDynBedItemsSetupDialog::OnRequirePriceKillfocus(){
	
} */
int CHMSDynBedItemsSetupDialog::OnRequirePriceCheckValue(){
	return 0;
} 
void CHMSDynBedItemsSetupDialog::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSDynBedItemsSetupDialog();
} 
void CHMSDynBedItemsSetupDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSDynBedItemsSetupDialog::OnAddHMSDynBedItemsSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDynBedItemsSetupDialog::OnEditHMSDynBedItemsSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDynBedItemsSetupDialog::OnDeleteHMSDynBedItemsSetupDialog(){
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
 		OnCancelHMSDynBedItemsSetupDialog(); 
 	}
	return 0;
}
int CHMSDynBedItemsSetupDialog::OnSaveHMSDynBedItemsSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_dynbedlist_itemsTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hdbli_id=%d and hdbli_lnidx=%d "), m_nID, m_nLine); 
 		szSQL = m_hms_dynbedlist_itemsTbl.GetUpdateSQL(_T("hdbli_id,hdbli_lnidx")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_EDIT)
			CGuiDialog::OnOK();
		else
		{
			SetMode(VM_ADD);
			((CHMSDynBedSetupDialog *)GetParent())->OnPriceListLoadData();
		}
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDynBedItemsSetupDialog::OnCancelHMSDynBedItemsSetupDialog(){
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
int CHMSDynBedItemsSetupDialog::OnHMSDynBedItemsSetupDialogListLoadData(){
	return 0;
}
