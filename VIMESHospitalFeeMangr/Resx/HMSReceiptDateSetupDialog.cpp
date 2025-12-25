#include "HMSReceiptDateSetupDialog.h"
#include "MainFrm.h"
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSReceiptDateSetupDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSReceiptDateSetupDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSReceiptDateSetupDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSReceiptDateSetupDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSReceiptDateSetupDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSReceiptDateSetupDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSReceiptDateSetupDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSReceiptDateSetupDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnNextInvoiceDateChangeFnc(CWnd *pWnd){
	((CHMSReceiptDateSetupDialog *)pWnd)->OnNextInvoiceDateChange();
} */
/*static void _OnNextInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CHMSReceiptDateSetupDialog *)pWnd)->OnNextInvoiceDateSetfocus();} */ 
/*static void _OnNextInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CHMSReceiptDateSetupDialog *)pWnd)->OnNextInvoiceDateKillfocus();
} */
static int _OnNextInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSReceiptDateSetupDialog *)pWnd)->OnNextInvoiceDateCheckValue();
} 
static void _OnCloseoutSelectFnc(CWnd *pWnd){
	CHMSReceiptDateSetupDialog *pVw = (CHMSReceiptDateSetupDialog *)pWnd;
	pVw->OnCloseoutSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSReceiptDateSetupDialog *pVw = (CHMSReceiptDateSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSReceiptDateSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSReceiptDateSetupDialog*)pWnd)->OnAddHMSReceiptDateSetupDialog();
} 
static int _OnEditHMSReceiptDateSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSReceiptDateSetupDialog*)pWnd)->OnEditHMSReceiptDateSetupDialog();
} 
static int _OnDeleteHMSReceiptDateSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSReceiptDateSetupDialog*)pWnd)->OnDeleteHMSReceiptDateSetupDialog();
} 
static int _OnSaveHMSReceiptDateSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSReceiptDateSetupDialog*)pWnd)->OnSaveHMSReceiptDateSetupDialog();
} 
static int _OnCancelHMSReceiptDateSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSReceiptDateSetupDialog*)pWnd)->OnCancelHMSReceiptDateSetupDialog();
} 
CHMSReceiptDateSetupDialog::CHMSReceiptDateSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 285;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CHMSReceiptDateSetupDialog::~CHMSReceiptDateSetupDialog(){
}
void CHMSReceiptDateSetupDialog::OnCreateComponents(){
	m_wndInvoiceCreationDateSettings.Create(this, _T("Invoice Creation Date Settings"), 5, 5, 280, 120);
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 30, 160, 55);
	m_wndSerialNo.Create(this,165, 30, 275, 55); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 10, 60, 160, 85);
	m_wndReceiptNo.Create(this,165, 60, 275, 85); 
	m_wndNextInvoiceDateLabel.Create(this, _T("Working Date"), 10, 90, 160, 115);
	m_wndNextInvoiceDate.Create(this,165, 90, 275, 115); 
	m_wndCloseout.Create(this, _T("&Closeout"), 95, 125, 185, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 190, 125, 280, 150);

}
void CHMSReceiptDateSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSerialNo.SetLimitText(35);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(16);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndNextInvoiceDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndNextInvoiceDate.SetCheckValue(true);

}
void CHMSReceiptDateSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	//m_wndNextInvoiceDate.SetEvent(WE_CHANGE, _OnNextInvoiceDateChangeFnc);
	//m_wndNextInvoiceDate.SetEvent(WE_SETFOCUS, _OnNextInvoiceDateSetfocusFnc);
	//m_wndNextInvoiceDate.SetEvent(WE_KILLFOCUS, _OnNextInvoiceDateKillfocusFnc);
	m_wndNextInvoiceDate.SetEvent(WE_CHECKVALUE, _OnNextInvoiceDateCheckValueFnc);
	m_wndCloseout.SetEvent(WE_CLICK, _OnCloseoutSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSReceiptDateSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndNextInvoiceDate.GetDlgCtrlID(), m_szNextInvoiceDate);

}
void CHMSReceiptDateSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSReceiptDateSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSReceiptDateSetupDialog::SetDefaultValues(){

	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szNextInvoiceDate.Empty();

}
int CHMSReceiptDateSetupDialog::SetMode(int nMode){
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
/*void CHMSReceiptDateSetupDialog::OnSerialNoChange(){
	
} */
/*void CHMSReceiptDateSetupDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSReceiptDateSetupDialog::OnSerialNoKillfocus(){
	
} */
int CHMSReceiptDateSetupDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSReceiptDateSetupDialog::OnReceiptNoChange(){
	
} */
/*void CHMSReceiptDateSetupDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSReceiptDateSetupDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSReceiptDateSetupDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CHMSReceiptDateSetupDialog::OnNextInvoiceDateChange(){
	
} */
/*void CHMSReceiptDateSetupDialog::OnNextInvoiceDateSetfocus(){
	
} */
/*void CHMSReceiptDateSetupDialog::OnNextInvoiceDateKillfocus(){
	
} */
int CHMSReceiptDateSetupDialog::OnNextInvoiceDateCheckValue(){
	return 0;
} 
void CHMSReceiptDateSetupDialog::OnCloseoutSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSReceiptDateSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSReceiptDateSetupDialog::OnAddHMSReceiptDateSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSReceiptDateSetupDialog::OnEditHMSReceiptDateSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSReceiptDateSetupDialog::OnDeleteHMSReceiptDateSetupDialog(){
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
 		OnCancelHMSReceiptDateSetupDialog();
 	}
	return 0;
}
int CHMSReceiptDateSetupDialog::OnSaveHMSReceiptDateSetupDialog(){
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
 		//OnHMSReceiptDateSetupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSReceiptDateSetupDialog::OnCancelHMSReceiptDateSetupDialog(){
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
int CHMSReceiptDateSetupDialog::OnHMSReceiptDateSetupDialogListLoadData(){
	return 0;
}
