#include "HMSReturnDrugDialog.h"
#include "MainFrm.h"
/*static void _OnOrderQuantityChangeFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnOrderQuantityChange();
} */
/*static void _OnOrderQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnOrderQuantitySetfocus();} */ 
/*static void _OnOrderQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnOrderQuantityKillfocus();
} */
static int _OnOrderQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnDrugDialog *)pWnd)->OnOrderQuantityCheckValue();
} 
/*static void _OnIssueQuantityChangeFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnIssueQuantityChange();
} */
/*static void _OnIssueQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnIssueQuantitySetfocus();} */ 
/*static void _OnIssueQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnIssueQuantityKillfocus();
} */
static int _OnIssueQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnDrugDialog *)pWnd)->OnIssueQuantityCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSReturnDrugDialog *pVw = (CHMSReturnDrugDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSReturnDrugDialog *pVw = (CHMSReturnDrugDialog *)pWnd;
	pVw->OnCancelSelect();
} 
/*static void _OnItemIDChangeFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnItemIDChange();
} */
/*static void _OnItemIDSetfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnItemIDSetfocus();} */ 
/*static void _OnItemIDKillfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnItemIDKillfocus();
} */
static int _OnItemIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnDrugDialog *)pWnd)->OnItemIDCheckValue();
} 
/*static void _OnDrugNameChangeFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnDrugNameChange();
} */
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnDrugNameSetfocus();} */ 
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnDrugNameKillfocus();
} */
static int _OnDrugNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnDrugDialog *)pWnd)->OnDrugNameCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialog *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnDrugDialog *)pWnd)->OnUnitCheckValue();
} 
static int _OnAddHMSReturnDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSReturnDrugDialog*)pWnd)->OnAddHMSReturnDrugDialog();
} 
static int _OnEditHMSReturnDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSReturnDrugDialog*)pWnd)->OnEditHMSReturnDrugDialog();
} 
static int _OnDeleteHMSReturnDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSReturnDrugDialog*)pWnd)->OnDeleteHMSReturnDrugDialog();
} 
static int _OnSaveHMSReturnDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSReturnDrugDialog*)pWnd)->OnSaveHMSReturnDrugDialog();
} 
static int _OnCancelHMSReturnDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSReturnDrugDialog*)pWnd)->OnCancelHMSReturnDrugDialog();
} 
CHMSReturnDrugDialog::CHMSReturnDrugDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CHMSReturnDrugDialog::~CHMSReturnDrugDialog(){
}
void CHMSReturnDrugDialog::OnCreateComponents(){
	m_wndDrugInformation.Create(this, _T("Drug Information"), 5, 5, 395, 178);
	m_wndOrderQuantityLabel.Create(this, _T("Order Quantity"), 10, 119, 150, 144);
	m_wndOrderQuantity.Create(this,155, 119, 235, 144); 
	m_wndIssueQuantityLabel.Create(this, _T("Issue Quantity"), 10, 149, 150, 174);
	m_wndIssueQuantity.Create(this,155, 149, 235, 174); 
	m_wndOK.Create(this, _T("&OK"), 239, 187, 314, 212);
	m_wndCancel.Create(this, _T("&Cancel"), 319, 187, 394, 212);
	m_wndItemIDLabel.Create(this, _T("ItemID"), 10, 29, 150, 54);
	m_wndItemID.Create(this,155, 29, 258, 54); 
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 10, 59, 150, 84);
	m_wndDrugName.Create(this,155, 59, 389, 84); 
	m_wndUnitLabel.Create(this, _T("Unit"), 10, 89, 150, 114);
	m_wndUnit.Create(this,155, 89, 235, 114); 

}
void CHMSReturnDrugDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOrderQuantity.SetLimitText(16);
	m_wndOrderQuantity.SetCheckValue(true);
	m_wndIssueQuantity.SetLimitText(16);
	m_wndIssueQuantity.SetCheckValue(true);
	m_wndItemID.SetLimitText(35);
	m_wndItemID.SetCheckValue(true);
	m_wndDrugName.SetLimitText(35);
	m_wndDrugName.SetCheckValue(true);
	m_wndUnit.SetLimitText(35);
	m_wndUnit.SetCheckValue(true);

}
void CHMSReturnDrugDialog::OnSetWindowEvents(){
	//m_wndOrderQuantity.SetEvent(WE_CHANGE, _OnOrderQuantityChangeFnc);
	//m_wndOrderQuantity.SetEvent(WE_SETFOCUS, _OnOrderQuantitySetfocusFnc);
	//m_wndOrderQuantity.SetEvent(WE_KILLFOCUS, _OnOrderQuantityKillfocusFnc);
	m_wndOrderQuantity.SetEvent(WE_CHECKVALUE, _OnOrderQuantityCheckValueFnc);
	//m_wndIssueQuantity.SetEvent(WE_CHANGE, _OnIssueQuantityChangeFnc);
	//m_wndIssueQuantity.SetEvent(WE_SETFOCUS, _OnIssueQuantitySetfocusFnc);
	//m_wndIssueQuantity.SetEvent(WE_KILLFOCUS, _OnIssueQuantityKillfocusFnc);
	m_wndIssueQuantity.SetEvent(WE_CHECKVALUE, _OnIssueQuantityCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//m_wndItemID.SetEvent(WE_CHANGE, _OnItemIDChangeFnc);
	//m_wndItemID.SetEvent(WE_SETFOCUS, _OnItemIDSetfocusFnc);
	//m_wndItemID.SetEvent(WE_KILLFOCUS, _OnItemIDKillfocusFnc);
	m_wndItemID.SetEvent(WE_CHECKVALUE, _OnItemIDCheckValueFnc);
	//m_wndDrugName.SetEvent(WE_CHANGE, _OnDrugNameChangeFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_CHECKVALUE, _OnDrugNameCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);

}
void CHMSReturnDrugDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderQuantity.GetDlgCtrlID(), m_nOrderQuantity);
	DDX_Text(pDX, m_wndIssueQuantity.GetDlgCtrlID(), m_nIssueQuantity);
	DDX_Text(pDX, m_wndItemID.GetDlgCtrlID(), m_nItemID);
	DDX_Text(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugName);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);

}
void CHMSReturnDrugDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSReturnDrugDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSReturnDrugDialog::SetDefaultValues(){

	m_nOrderQuantity=0;
	m_nIssueQuantity=0;
	m_nItemID=0;
	m_szDrugName.Empty();
	m_szUnit.Empty();

}
int CHMSReturnDrugDialog::SetMode(int nMode){
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
/*void CHMSReturnDrugDialog::OnOrderQuantityChange(){
	
} */
/*void CHMSReturnDrugDialog::OnOrderQuantitySetfocus(){
	
} */
/*void CHMSReturnDrugDialog::OnOrderQuantityKillfocus(){
	
} */
int CHMSReturnDrugDialog::OnOrderQuantityCheckValue(){
	return 0;
} 
/*void CHMSReturnDrugDialog::OnIssueQuantityChange(){
	
} */
/*void CHMSReturnDrugDialog::OnIssueQuantitySetfocus(){
	
} */
/*void CHMSReturnDrugDialog::OnIssueQuantityKillfocus(){
	
} */
int CHMSReturnDrugDialog::OnIssueQuantityCheckValue(){
	return 0;
} 
void CHMSReturnDrugDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSReturnDrugDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSReturnDrugDialog::OnItemIDChange(){
	
} */
/*void CHMSReturnDrugDialog::OnItemIDSetfocus(){
	
} */
/*void CHMSReturnDrugDialog::OnItemIDKillfocus(){
	
} */
int CHMSReturnDrugDialog::OnItemIDCheckValue(){
	return 0;
} 
/*void CHMSReturnDrugDialog::OnDrugNameChange(){
	
} */
/*void CHMSReturnDrugDialog::OnDrugNameSetfocus(){
	
} */
/*void CHMSReturnDrugDialog::OnDrugNameKillfocus(){
	
} */
int CHMSReturnDrugDialog::OnDrugNameCheckValue(){
	return 0;
} 
/*void CHMSReturnDrugDialog::OnUnitChange(){
	
} */
/*void CHMSReturnDrugDialog::OnUnitSetfocus(){
	
} */
/*void CHMSReturnDrugDialog::OnUnitKillfocus(){
	
} */
int CHMSReturnDrugDialog::OnUnitCheckValue(){
	return 0;
} 
int CHMSReturnDrugDialog::OnAddHMSReturnDrugDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSReturnDrugDialog::OnEditHMSReturnDrugDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSReturnDrugDialog::OnDeleteHMSReturnDrugDialog(){
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
 		OnCancelHMSReturnDrugDialog(); 
 	}
	return 0;
}
int CHMSReturnDrugDialog::OnSaveHMSReturnDrugDialog(){
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
 		//OnHMSReturnDrugDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSReturnDrugDialog::OnCancelHMSReturnDrugDialog(){
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
int CHMSReturnDrugDialog::OnHMSReturnDrugDialogListLoadData(){
	return 0;
}
