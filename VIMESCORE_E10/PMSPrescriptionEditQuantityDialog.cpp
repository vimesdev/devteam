#include "PMSPrescriptionEditQuantityDialog.h"
#include "MainFrame_E10.h"
/*static void _OnOrderQuantityChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnOrderQuantityChange();
} */
/*static void _OnOrderQuantitySetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnOrderQuantitySetfocus();} */ 
/*static void _OnOrderQuantityKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnOrderQuantityKillfocus();
} */
static int _OnOrderQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnOrderQuantityCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnNewQuantityChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnNewQuantityChange();
} */
/*static void _OnNewQuantitySetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnNewQuantitySetfocus();} */ 
/*static void _OnNewQuantityKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnNewQuantityKillfocus();
} */
static int _OnNewQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionEditQuantityDialog *)pWnd)->OnNewQuantityCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CPMSPrescriptionEditQuantityDialog *pVw = (CPMSPrescriptionEditQuantityDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPMSPrescriptionEditQuantityDialog *pVw = (CPMSPrescriptionEditQuantityDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddPMSPrescriptionEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionEditQuantityDialog*)pWnd)->OnAddPMSPrescriptionEditQuantityDialog();
} 
static int _OnEditPMSPrescriptionEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionEditQuantityDialog*)pWnd)->OnEditPMSPrescriptionEditQuantityDialog();
} 
static int _OnDeletePMSPrescriptionEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionEditQuantityDialog*)pWnd)->OnDeletePMSPrescriptionEditQuantityDialog();
} 
static int _OnSavePMSPrescriptionEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionEditQuantityDialog*)pWnd)->OnSavePMSPrescriptionEditQuantityDialog();
} 
static int _OnCancelPMSPrescriptionEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionEditQuantityDialog*)pWnd)->OnCancelPMSPrescriptionEditQuantityDialog();
} 
CPMSPrescriptionEditQuantityDialog::CPMSPrescriptionEditQuantityDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 240;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CPMSPrescriptionEditQuantityDialog::~CPMSPrescriptionEditQuantityDialog(){
}
void CPMSPrescriptionEditQuantityDialog::OnCreateComponents(){
	m_wndOrderQuantityLabel.Create(this, _T("Order Quantity"), 10, 30, 130, 55);
	m_wndDrugInformation.Create(this, _T("Drug Information"), 5, 5, 230, 120);
	m_wndOrderQuantity.Create(this,135, 30, 225, 55); 
	m_wndIssueQuantityLabel.Create(this, _T("Quantity"), 10, 60, 130, 85);
	m_wndQuantity.Create(this,135, 60, 225, 85); 
	m_wndNewQuantityLabel.Create(this, _T("Issue Quantity"), 10, 90, 130, 115);
	m_wndNewQuantity.Create(this,135, 90, 225, 115); 
	m_wndOK.Create(this, _T("&OK"), 75, 125, 150, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 155, 125, 230, 150);

}
void CPMSPrescriptionEditQuantityDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndOrderQuantity.SetLimitText(66);
	m_wndOrderQuantity.SetReadOnly(true);
	m_wndQuantity.SetLimitText(6);
	m_wndQuantity.SetReadOnly(true);
	m_wndNewQuantity.SetLimitText(6);
	m_wndNewQuantity.SetCheckValue(true);

}
void CPMSPrescriptionEditQuantityDialog::OnSetWindowEvents(){
	//m_wndOrderQuantity.SetEvent(WE_CHANGE, _OnOrderQuantityChangeFnc);
	//m_wndOrderQuantity.SetEvent(WE_SETFOCUS, _OnOrderQuantitySetfocusFnc);
	//m_wndOrderQuantity.SetEvent(WE_KILLFOCUS, _OnOrderQuantityKillfocusFnc);
	m_wndOrderQuantity.SetEvent(WE_CHECKVALUE, _OnOrderQuantityCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndNewQuantity.SetEvent(WE_CHANGE, _OnNewQuantityChangeFnc);
	//m_wndNewQuantity.SetEvent(WE_SETFOCUS, _OnNewQuantitySetfocusFnc);
	//m_wndNewQuantity.SetEvent(WE_KILLFOCUS, _OnNewQuantityKillfocusFnc);
	m_wndNewQuantity.SetEvent(WE_CHECKVALUE, _OnNewQuantityCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

	SetMode(VM_EDIT);
}
void CPMSPrescriptionEditQuantityDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderQuantity.GetDlgCtrlID(), m_nOrderQuantity);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndNewQuantity.GetDlgCtrlID(), m_nNewQuantity);

}
void CPMSPrescriptionEditQuantityDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSPrescriptionEditQuantityDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSPrescriptionEditQuantityDialog::SetDefaultValues(){

	m_nOrderQuantity=0;
	m_nQuantity=0;
	m_nNewQuantity=0;

}
int CPMSPrescriptionEditQuantityDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
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
/*void CPMSPrescriptionEditQuantityDialog::OnOrderQuantityChange(){
	
} */
/*void CPMSPrescriptionEditQuantityDialog::OnOrderQuantitySetfocus(){
	
} */
/*void CPMSPrescriptionEditQuantityDialog::OnOrderQuantityKillfocus(){
	
} */
int CPMSPrescriptionEditQuantityDialog::OnOrderQuantityCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionEditQuantityDialog::OnQuantityChange(){
	
} */
/*void CPMSPrescriptionEditQuantityDialog::OnQuantitySetfocus(){
	
} */
/*void CPMSPrescriptionEditQuantityDialog::OnQuantityKillfocus(){
	
} */
int CPMSPrescriptionEditQuantityDialog::OnQuantityCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionEditQuantityDialog::OnNewQuantityChange(){
	
} */
/*void CPMSPrescriptionEditQuantityDialog::OnNewQuantitySetfocus(){
	
} */
/*void CPMSPrescriptionEditQuantityDialog::OnNewQuantityKillfocus(){
	
} */
int CPMSPrescriptionEditQuantityDialog::OnNewQuantityCheckValue(){
	if(m_nNewQuantity > m_nOrderQuantity || m_nNewQuantity < 0)
		return -1;
	return 0;
} 
void CPMSPrescriptionEditQuantityDialog::OnOKSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSavePMSPrescriptionEditQuantityDialog();
} 
void CPMSPrescriptionEditQuantityDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CPMSPrescriptionEditQuantityDialog::OnAddPMSPrescriptionEditQuantityDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMSPrescriptionEditQuantityDialog::OnEditPMSPrescriptionEditQuantityDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSPrescriptionEditQuantityDialog::OnDeletePMSPrescriptionEditQuantityDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelPMSPrescriptionEditQuantityDialog(); 
 	}
	return 0;
}
int CPMSPrescriptionEditQuantityDialog::OnSavePMSPrescriptionEditQuantityDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();  	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("hms_pharmaorder_EDITQTY(0, %ld, '%s', %d, %d) "),
		m_nOrderID, m_szItemID, m_nOrderLine, m_nNewQuantity);
	int res = str2int(pMF->ExecDML(szSQL));
	if(res > 0)
		OnOK();
 	return 0; 
}
int CPMSPrescriptionEditQuantityDialog::OnCancelPMSPrescriptionEditQuantityDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	return 0;
} 
int CPMSPrescriptionEditQuantityDialog::OnPMSPrescriptionEditQuantityDialogListLoadData(){
	return 0;
}
