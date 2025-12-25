#include "HMSDiscountLineDialog.h"
#include "MainFrm.h"
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSDiscountLineDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountLineDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountLineDialog *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountLineDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountLineDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSDiscountLineDialog *pVw = (CHMSDiscountLineDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDiscountLineDialog *pVw = (CHMSDiscountLineDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountLineDialog*)pWnd)->OnAddHMSDiscountLineDialog();
} 
static int _OnEditHMSDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountLineDialog*)pWnd)->OnEditHMSDiscountLineDialog();
} 
static int _OnDeleteHMSDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountLineDialog*)pWnd)->OnDeleteHMSDiscountLineDialog();
} 
static int _OnSaveHMSDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountLineDialog*)pWnd)->OnSaveHMSDiscountLineDialog();
} 
static int _OnCancelHMSDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountLineDialog*)pWnd)->OnCancelHMSDiscountLineDialog();
} 
CHMSDiscountLineDialog::CHMSDiscountLineDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 395;
	m_nDlgHeight = 215;
	SetDefaultValues();
}
CHMSDiscountLineDialog::~CHMSDiscountLineDialog(){
}
void CHMSDiscountLineDialog::OnCreateComponents(){
	m_wndDiscountInformation.Create(this, _T("Discount Information"), 5, 5, 385, 175);
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 30, 90, 55);
	m_wndDescription.Create(this,95, 30, 382, 80); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 10, 85, 90, 110);
	m_wndQuantity.Create(this,95, 85, 175, 110); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 10, 115, 90, 140);
	m_wndUnitPrice.Create(this,95, 115, 175, 140); 
	m_wndAmountLabel.Create(this, _T("Amount"), 10, 145, 90, 170);
	m_wndAmount.Create(this,95, 145, 175, 170); 
	m_wndOK.Create(this, _T("&OK"), 220, 180, 300, 205);
	m_wndClose.Create(this, _T("&Close"), 305, 180, 385, 205);

}
void CHMSDiscountLineDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(16);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);

}
void CHMSDiscountLineDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDiscountLineDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CHMSDiscountLineDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDiscountLineDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDiscountLineDialog::SetDefaultValues(){

	m_szDescription.Empty();
	m_nQuantity=0;
	m_nUnitPrice=0;
	m_nAmount=0;

}
int CHMSDiscountLineDialog::SetMode(int nMode){
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
/*void CHMSDiscountLineDialog::OnDescriptionChange(){
	
} */
/*void CHMSDiscountLineDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSDiscountLineDialog::OnDescriptionKillfocus(){
	
} */
int CHMSDiscountLineDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CHMSDiscountLineDialog::OnQuantityChange(){
	
} */
/*void CHMSDiscountLineDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSDiscountLineDialog::OnQuantityKillfocus(){
	
} */
int CHMSDiscountLineDialog::OnQuantityCheckValue(){
	return 0;
} 
/*void CHMSDiscountLineDialog::OnUnitPriceChange(){
	
} */
/*void CHMSDiscountLineDialog::OnUnitPriceSetfocus(){
	
} */
/*void CHMSDiscountLineDialog::OnUnitPriceKillfocus(){
	
} */
int CHMSDiscountLineDialog::OnUnitPriceCheckValue(){
	return 0;
} 
/*void CHMSDiscountLineDialog::OnAmountChange(){
	
} */
/*void CHMSDiscountLineDialog::OnAmountSetfocus(){
	
} */
/*void CHMSDiscountLineDialog::OnAmountKillfocus(){
	
} */
int CHMSDiscountLineDialog::OnAmountCheckValue(){
	return 0;
} 
void CHMSDiscountLineDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountLineDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDiscountLineDialog::OnAddHMSDiscountLineDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDiscountLineDialog::OnEditHMSDiscountLineDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDiscountLineDialog::OnDeleteHMSDiscountLineDialog(){
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
 		OnCancelHMSDiscountLineDialog();
 	}
	return 0;
}
int CHMSDiscountLineDialog::OnSaveHMSDiscountLineDialog(){
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
 		//OnHMSDiscountLineDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDiscountLineDialog::OnCancelHMSDiscountLineDialog(){
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
int CHMSDiscountLineDialog::OnHMSDiscountLineDialogListLoadData(){
	return 0;
}
