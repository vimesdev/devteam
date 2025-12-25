#include "FMCashBookDialog.h"
#include "MainFrm.h"
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CFMCashBookDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CFMCashBookDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CFMCashBookDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CFMCashBookDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnReceiptByChangeFnc(CWnd *pWnd){
	((CFMCashBookDialog *)pWnd)->OnReceiptByChange();
} */
/*static void _OnReceiptBySetfocusFnc(CWnd *pWnd){
	((CFMCashBookDialog *)pWnd)->OnReceiptBySetfocus();} */ 
/*static void _OnReceiptByKillfocusFnc(CWnd *pWnd){
	((CFMCashBookDialog *)pWnd)->OnReceiptByKillfocus();
} */
static int _OnReceiptByCheckValueFnc(CWnd *pWnd){
	return ((CFMCashBookDialog *)pWnd)->OnReceiptByCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CFMCashBookDialog *pVw = (CFMCashBookDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFMCashBookDialog *pVw = (CFMCashBookDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFMCashBookDialogFnc(CWnd *pWnd){
	 return ((CFMCashBookDialog*)pWnd)->OnAddFMCashBookDialog();
} 
static int _OnEditFMCashBookDialogFnc(CWnd *pWnd){
	 return ((CFMCashBookDialog*)pWnd)->OnEditFMCashBookDialog();
} 
static int _OnDeleteFMCashBookDialogFnc(CWnd *pWnd){
	 return ((CFMCashBookDialog*)pWnd)->OnDeleteFMCashBookDialog();
} 
static int _OnSaveFMCashBookDialogFnc(CWnd *pWnd){
	 return ((CFMCashBookDialog*)pWnd)->OnSaveFMCashBookDialog();
} 
static int _OnCancelFMCashBookDialogFnc(CWnd *pWnd){
	 return ((CFMCashBookDialog*)pWnd)->OnCancelFMCashBookDialog();
} 
CFMCashBookDialog::CFMCashBookDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 385;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CFMCashBookDialog::~CFMCashBookDialog(){
}
void CFMCashBookDialog::OnCreateComponents(){
	m_wndReceiptInformation.Create(this, _T("Receipt Information"), 5, 5, 369, 90);
	m_wndReceiptDateLabel.Create(this, _T("Date"), 10, 30, 110, 55);
	m_wndReceiptDate.Create(this,115, 30, 215, 55); 
	m_wndReceiptByLabel.Create(this, _T("Approved By"), 10, 60, 110, 85);
	m_wndReceiptBy.Create(this,115, 60, 365, 85); 
	m_wndOK.Create(this, _T("&OK"), 185, 95, 275, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 280, 95, 370, 120);

}
void CFMCashBookDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReceiptDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndReceiptDate.SetCheckValue(true);
	m_wndReceiptBy.SetLimitText(35);
	m_wndReceiptBy.SetCheckValue(true);

}
void CFMCashBookDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	//m_wndReceiptBy.SetEvent(WE_CHANGE, _OnReceiptByChangeFnc);
	//m_wndReceiptBy.SetEvent(WE_SETFOCUS, _OnReceiptBySetfocusFnc);
	//m_wndReceiptBy.SetEvent(WE_KILLFOCUS, _OnReceiptByKillfocusFnc);
	m_wndReceiptBy.SetEvent(WE_CHECKVALUE, _OnReceiptByCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CFMCashBookDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndReceiptBy.GetDlgCtrlID(), m_szReceiptBy);

}
void CFMCashBookDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMCashBookDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMCashBookDialog::SetDefaultValues(){

	m_szReceiptDate.Empty();
	m_szReceiptBy.Empty();

}
int CFMCashBookDialog::SetMode(int nMode){
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
/*void CFMCashBookDialog::OnReceiptDateChange(){
	
} */
/*void CFMCashBookDialog::OnReceiptDateSetfocus(){
	
} */
/*void CFMCashBookDialog::OnReceiptDateKillfocus(){
	
} */
int CFMCashBookDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CFMCashBookDialog::OnReceiptByChange(){
	
} */
/*void CFMCashBookDialog::OnReceiptBySetfocus(){
	
} */
/*void CFMCashBookDialog::OnReceiptByKillfocus(){
	
} */
int CFMCashBookDialog::OnReceiptByCheckValue(){
	return 0;
} 
void CFMCashBookDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMCashBookDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFMCashBookDialog::OnAddFMCashBookDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMCashBookDialog::OnEditFMCashBookDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMCashBookDialog::OnDeleteFMCashBookDialog(){
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
 		OnCancelFMCashBookDialog();
 	}
	return 0;
}
int CFMCashBookDialog::OnSaveFMCashBookDialog(){
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
 		//OnFMCashBookDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMCashBookDialog::OnCancelFMCashBookDialog(){
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
int CFMCashBookDialog::OnFMCashBookDialogListLoadData(){
	return 0;
}
