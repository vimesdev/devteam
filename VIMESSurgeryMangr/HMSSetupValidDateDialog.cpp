#include "HMSSetupValidDateDialog.h"
#include "MainFrm.h"
/*static void _OnValidDateChangeFnc(CWnd *pWnd){
	((CHMSSetupValidDateDialog *)pWnd)->OnValidDateChange();
} */
/*static void _OnValidDateSetfocusFnc(CWnd *pWnd){
	((CHMSSetupValidDateDialog *)pWnd)->OnValidDateSetfocus();} */ 
/*static void _OnValidDateKillfocusFnc(CWnd *pWnd){
	((CHMSSetupValidDateDialog *)pWnd)->OnValidDateKillfocus();
} */
static int _OnValidDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupValidDateDialog *)pWnd)->OnValidDateCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSSetupValidDateDialog *pVw = (CHMSSetupValidDateDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSetupValidDateDialog *pVw = (CHMSSetupValidDateDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSSetupValidDateDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupValidDateDialog*)pWnd)->OnAddHMSSetupValidDateDialog();
} 
static int _OnEditHMSSetupValidDateDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupValidDateDialog*)pWnd)->OnEditHMSSetupValidDateDialog();
} 
static int _OnDeleteHMSSetupValidDateDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupValidDateDialog*)pWnd)->OnDeleteHMSSetupValidDateDialog();
} 
static int _OnSaveHMSSetupValidDateDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupValidDateDialog*)pWnd)->OnSaveHMSSetupValidDateDialog();
} 
static int _OnCancelHMSSetupValidDateDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupValidDateDialog*)pWnd)->OnCancelHMSSetupValidDateDialog();
} 
CHMSSetupValidDateDialog::CHMSSetupValidDateDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 420;
	m_nDlgHeight = 70;
	SetDefaultValues();
}
CHMSSetupValidDateDialog::~CHMSSetupValidDateDialog(){
}
void CHMSSetupValidDateDialog::OnCreateComponents()
{
	m_wndValidDateInfo.Create(this, _T("Valid Date Information"), 5, 5, 410, 61);
	m_wndValidDateLabel.Create(this, _T("Valid Date"), 10, 30, 110, 55);
	m_wndValidDate.Create(this,115, 30, 235, 55); 
	m_wndApply.Create(this, _T("&Apply"), 240, 30, 320, 55);
	m_wndClose.Create(this, _T("&Close"), 325, 30, 405, 55);

}
void CHMSSetupValidDateDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndValidDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndValidDate.SetCheckValue(true);
}
void CHMSSetupValidDateDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndValidDate.SetEvent(WE_CHANGE, _OnValidDateChangeFnc);
	//m_wndValidDate.SetEvent(WE_SETFOCUS, _OnValidDateSetfocusFnc);
	//m_wndValidDate.SetEvent(WE_KILLFOCUS, _OnValidDateKillfocusFnc);
	m_wndValidDate.SetEvent(WE_CHECKVALUE, _OnValidDateCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT smm_validdate AS validdate FROM hms_config"));
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("validdate"), tmpStr);
		m_szValidDate = tmpStr;
	}
	else
	{
		m_szValidDate = pMF->GetSysDateTime();
	}
	SetMode(VM_EDIT);
}
void CHMSSetupValidDateDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndValidDate.GetDlgCtrlID(), m_szValidDate);

}
void CHMSSetupValidDateDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSetupValidDateDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSetupValidDateDialog::SetDefaultValues(){

	m_szValidDate.Empty();

}
int CHMSSetupValidDateDialog::SetMode(int nMode){
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
/*void CHMSSetupValidDateDialog::OnValidDateChange(){
	
} */
/*void CHMSSetupValidDateDialog::OnValidDateSetfocus(){
	
} */
/*void CHMSSetupValidDateDialog::OnValidDateKillfocus(){
	
} */
int CHMSSetupValidDateDialog::OnValidDateCheckValue(){
	return 0;
} 
void CHMSSetupValidDateDialog::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;

	UpdateData(TRUE);

	szSQL.Format(_T("UPDATE hms_config SET smm_validdate=to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szValidDate);
	int ret = pMF->ExecSQL(szSQL);

	if (ret <= 0)
	{
		ShowMessageBox(_T("Error while updating data!"), MB_OK | MB_ICONERROR);
		return;
	}
	
	OnOK();
} 
void CHMSSetupValidDateDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSSetupValidDateDialog::OnAddHMSSetupValidDateDialog()
{
 	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSetupValidDateDialog::OnEditHMSSetupValidDateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSetupValidDateDialog::OnDeleteHMSSetupValidDateDialog(){
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
 		OnCancelHMSSetupValidDateDialog();
 	}
	return 0;
}
int CHMSSetupValidDateDialog::OnSaveHMSSetupValidDateDialog(){
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
 		//OnHMSSetupValidDateDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSetupValidDateDialog::OnCancelHMSSetupValidDateDialog(){
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
int CHMSSetupValidDateDialog::OnHMSSetupValidDateDialogListLoadData(){
	return 0;
}
