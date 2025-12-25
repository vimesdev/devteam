#include "HMSEditBarcodeDialog.h"
#include "MainFrm.h"
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CHMSEditBarcodeDialog *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CHMSEditBarcodeDialog *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CHMSEditBarcodeDialog *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditBarcodeDialog *)pWnd)->OnOrderIDCheckValue();
} 
/*static void _OnCurrentBarcodeChangeFnc(CWnd *pWnd){
	((CHMSEditBarcodeDialog *)pWnd)->OnCurrentBarcodeChange();
} */
/*static void _OnCurrentBarcodeSetfocusFnc(CWnd *pWnd){
	((CHMSEditBarcodeDialog *)pWnd)->OnCurrentBarcodeSetfocus();} */ 
/*static void _OnCurrentBarcodeKillfocusFnc(CWnd *pWnd){
	((CHMSEditBarcodeDialog *)pWnd)->OnCurrentBarcodeKillfocus();
} */
static int _OnCurrentBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditBarcodeDialog *)pWnd)->OnCurrentBarcodeCheckValue();
} 
/*static void _OnNewBarcodeChangeFnc(CWnd *pWnd){
	((CHMSEditBarcodeDialog *)pWnd)->OnNewBarcodeChange();
} */
/*static void _OnNewBarcodeSetfocusFnc(CWnd *pWnd){
	((CHMSEditBarcodeDialog *)pWnd)->OnNewBarcodeSetfocus();} */ 
/*static void _OnNewBarcodeKillfocusFnc(CWnd *pWnd){
	((CHMSEditBarcodeDialog *)pWnd)->OnNewBarcodeKillfocus();
} */
static int _OnNewBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditBarcodeDialog *)pWnd)->OnNewBarcodeCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSEditBarcodeDialog *pVw = (CHMSEditBarcodeDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEditBarcodeDialog *pVw = (CHMSEditBarcodeDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSEditBarcodeDialogFnc(CWnd *pWnd){
	 return ((CHMSEditBarcodeDialog*)pWnd)->OnAddHMSEditBarcodeDialog();
} 
static int _OnEditHMSEditBarcodeDialogFnc(CWnd *pWnd){
	 return ((CHMSEditBarcodeDialog*)pWnd)->OnEditHMSEditBarcodeDialog();
} 
static int _OnDeleteHMSEditBarcodeDialogFnc(CWnd *pWnd){
	 return ((CHMSEditBarcodeDialog*)pWnd)->OnDeleteHMSEditBarcodeDialog();
} 
static int _OnSaveHMSEditBarcodeDialogFnc(CWnd *pWnd){
	 return ((CHMSEditBarcodeDialog*)pWnd)->OnSaveHMSEditBarcodeDialog();
} 
static int _OnCancelHMSEditBarcodeDialogFnc(CWnd *pWnd){
	 return ((CHMSEditBarcodeDialog*)pWnd)->OnCancelHMSEditBarcodeDialog();
} 
CHMSEditBarcodeDialog::CHMSEditBarcodeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 230;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CHMSEditBarcodeDialog::~CHMSEditBarcodeDialog(){
}
void CHMSEditBarcodeDialog::OnCreateComponents(){
	m_wndBarcodeMap.Create(this, _T("Barcode map"), 5, 5, 220, 120);
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 10, 30, 120, 55);
	m_wndOrderID.Create(this,125, 32, 215, 57); 
	m_wndCurrentBarcodeLabel.Create(this, _T("Current Barcode"), 10, 60, 120, 85);
	m_wndCurrentBarcode.Create(this,125, 60, 215, 85); 
	m_wndNewBarcodeLabel.Create(this, _T("New Barcode"), 10, 90, 120, 115);
	m_wndNewBarcode.Create(this,125, 90, 215, 115); 
	m_wndSave.Create(this, _T("&Save"), 45, 125, 130, 150);
	m_wndClose.Create(this, _T("&Close"), 135, 125, 220, 150);

}
void CHMSEditBarcodeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderID.SetLimitText(16);
	m_wndCurrentBarcode.SetLimitText(16);
	m_wndNewBarcode.SetLimitText(16);
	m_wndNewBarcode.SetCheckValue(true);

}
void CHMSEditBarcodeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderID.SetEvent(WE_CHANGE, _OnOrderIDChangeFnc);
	//m_wndOrderID.SetEvent(WE_SETFOCUS, _OnOrderIDSetfocusFnc);
	//m_wndOrderID.SetEvent(WE_KILLFOCUS, _OnOrderIDKillfocusFnc);
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
	//m_wndCurrentBarcode.SetEvent(WE_CHANGE, _OnCurrentBarcodeChangeFnc);
	//m_wndCurrentBarcode.SetEvent(WE_SETFOCUS, _OnCurrentBarcodeSetfocusFnc);
	//m_wndCurrentBarcode.SetEvent(WE_KILLFOCUS, _OnCurrentBarcodeKillfocusFnc);
	m_wndCurrentBarcode.SetEvent(WE_CHECKVALUE, _OnCurrentBarcodeCheckValueFnc);
	//m_wndNewBarcode.SetEvent(WE_CHANGE, _OnNewBarcodeChangeFnc);
	//m_wndNewBarcode.SetEvent(WE_SETFOCUS, _OnNewBarcodeSetfocusFnc);
	//m_wndNewBarcode.SetEvent(WE_KILLFOCUS, _OnNewBarcodeKillfocusFnc);
	m_wndNewBarcode.SetEvent(WE_CHECKVALUE, _OnNewBarcodeCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSEditBarcodeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
	DDX_Text(pDX, m_wndCurrentBarcode.GetDlgCtrlID(), m_nCurrentBarcode);
	DDX_Text(pDX, m_wndNewBarcode.GetDlgCtrlID(), m_nNewBarcode);

}
void CHMSEditBarcodeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSEditBarcodeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSEditBarcodeDialog::SetDefaultValues(){

	m_nOrderID=0;
	m_nCurrentBarcode=0;
	m_nNewBarcode=0;

}
int CHMSEditBarcodeDialog::SetMode(int nMode){
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
/*void CHMSEditBarcodeDialog::OnOrderIDChange(){
	
} */
/*void CHMSEditBarcodeDialog::OnOrderIDSetfocus(){
	
} */
/*void CHMSEditBarcodeDialog::OnOrderIDKillfocus(){
	
} */
int CHMSEditBarcodeDialog::OnOrderIDCheckValue(){
	return 0;
} 
/*void CHMSEditBarcodeDialog::OnCurrentBarcodeChange(){
	
} */
/*void CHMSEditBarcodeDialog::OnCurrentBarcodeSetfocus(){
	
} */
/*void CHMSEditBarcodeDialog::OnCurrentBarcodeKillfocus(){
	
} */
int CHMSEditBarcodeDialog::OnCurrentBarcodeCheckValue(){
	return 0;
} 
/*void CHMSEditBarcodeDialog::OnNewBarcodeChange(){
	
} */
/*void CHMSEditBarcodeDialog::OnNewBarcodeSetfocus(){
	
} */
/*void CHMSEditBarcodeDialog::OnNewBarcodeKillfocus(){
	
} */
int CHMSEditBarcodeDialog::OnNewBarcodeCheckValue(){
	return 0;
} 
void CHMSEditBarcodeDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEditBarcodeDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSEditBarcodeDialog::OnAddHMSEditBarcodeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSEditBarcodeDialog::OnEditHMSEditBarcodeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEditBarcodeDialog::OnDeleteHMSEditBarcodeDialog(){
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
 		OnCancelHMSEditBarcodeDialog(); 
 	}
	return 0;
}
int CHMSEditBarcodeDialog::OnSaveHMSEditBarcodeDialog(){
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
 		//OnHMSEditBarcodeDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSEditBarcodeDialog::OnCancelHMSEditBarcodeDialog(){
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
int CHMSEditBarcodeDialog::OnHMSEditBarcodeDialogListLoadData(){
	return 0;
}
