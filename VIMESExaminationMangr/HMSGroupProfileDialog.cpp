#include "HMSGroupProfileDialog.h"
#include "HMSMainFrame.h"
/*static void _OnGroupNameChangeFnc(CWnd *pWnd){
	((CHMSGroupProfileDialog *)pWnd)->OnGroupNameChange();
} */
/*static void _OnGroupNameSetfocusFnc(CWnd *pWnd){
	((CHMSGroupProfileDialog *)pWnd)->OnGroupNameSetfocus();} */ 
/*static void _OnGroupNameKillfocusFnc(CWnd *pWnd){
	((CHMSGroupProfileDialog *)pWnd)->OnGroupNameKillfocus();
} */
static int _OnGroupNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSGroupProfileDialog *)pWnd)->OnGroupNameCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSGroupProfileDialog *pVw = (CHMSGroupProfileDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGroupProfileDialog *pVw = (CHMSGroupProfileDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGroupProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSGroupProfileDialog*)pWnd)->OnAddHMSGroupProfileDialog();
} 
static int _OnEditHMSGroupProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSGroupProfileDialog*)pWnd)->OnEditHMSGroupProfileDialog();
} 
static int _OnDeleteHMSGroupProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSGroupProfileDialog*)pWnd)->OnDeleteHMSGroupProfileDialog();
} 
static int _OnSaveHMSGroupProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSGroupProfileDialog*)pWnd)->OnSaveHMSGroupProfileDialog();
} 
static int _OnCancelHMSGroupProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSGroupProfileDialog*)pWnd)->OnCancelHMSGroupProfileDialog();
}
static void _OnIsFreeSelectFnc(CWnd *pWnd){
	 ((CHMSGroupProfileDialog*)pWnd)->OnIsFreeSelect();
}
CHMSGroupProfileDialog::CHMSGroupProfileDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 355;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CHMSGroupProfileDialog::~CHMSGroupProfileDialog(){
}
void CHMSGroupProfileDialog::OnCreateComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndGroupInformation.Create(this, _T("Group Information"), 5, 5, 440, 60);
	m_wndGroupNameLabel.Create(this, _T("Group Name"), 10, 30, 110, 55);
	m_wndGroupName.Create(this,115, 30, 440, 55); 
	m_wndSave.Create(this, _T("&Save"), 274, 65, 354, 90);
	m_wndClose.Create(this, _T("&Close"), 359, 65, 439, 90);
	m_wndIsFree.Create(this, _T("Gói miễn phí"), 10, 65, 110, 90);
	
}
void CHMSGroupProfileDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndGroupName.SetLimitText(35);
	m_wndGroupName.SetCheckValue(true);

}
void CHMSGroupProfileDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndGroupName.SetEvent(WE_CHANGE, _OnGroupNameChangeFnc);
	//m_wndGroupName.SetEvent(WE_SETFOCUS, _OnGroupNameSetfocusFnc);
	//m_wndGroupName.SetEvent(WE_KILLFOCUS, _OnGroupNameKillfocusFnc);
	m_wndGroupName.SetEvent(WE_CHECKVALUE, _OnGroupNameCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndIsFree.SetEvent(WE_CLICK, _OnIsFreeSelectFnc);
	SetMode(GetMode());
	if(GetMode() == VM_EDIT){
		GetDataToScreen();
	}
}
void CHMSGroupProfileDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndGroupName.GetDlgCtrlID(), m_szGroupName);
	DDX_Check(pDX, m_wndIsFree.GetDlgCtrlID(), m_bIsFree);

}
void CHMSGroupProfileDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGroupProfileDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSGroupProfileDialog::SetDefaultValues(){

	m_szGroupName.Empty();

}
void CHMSGroupProfileDialog::OnIsFreeSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CHMSGroupProfileDialog::SetMode(int nMode){
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
 		if (!pMF->CheckPermission(_T("EM.100.02")))
			{
				m_wndIsFree.EnableWindow(FALSE);
			}
		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSGroupProfileDialog::OnGroupNameChange(){
	
} */
/*void CHMSGroupProfileDialog::OnGroupNameSetfocus(){
	
} */
/*void CHMSGroupProfileDialog::OnGroupNameKillfocus(){
	
} */
int CHMSGroupProfileDialog::OnGroupNameCheckValue(){
	return 0;
} 
void CHMSGroupProfileDialog::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSGroupProfileDialog();
} 
void CHMSGroupProfileDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSGroupProfileDialog::OnAddHMSGroupProfileDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSGroupProfileDialog::OnEditHMSGroupProfileDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGroupProfileDialog::OnDeleteHMSGroupProfileDialog(){
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
 		OnCancelHMSGroupProfileDialog(); 
 	}
	return 0;
}
int CHMSGroupProfileDialog::OnSaveHMSGroupProfileDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, tmpStr, tmp;

		if (m_bIsFree)
		{
		tmp = _T("Y");
		}
		else
		tmp = _T("N");

 	if (GetMode() == VM_ADD)
	{
		CString szID;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT coalesce(max(cast(ss_code as integer)), 0)+1 FROM sys_sel WHERE ss_id='hms_testprofile' "));
		rs.ExecSQL(szSQL);
		szID.Format(_T("%d"), rs.GetIntValue());
		szSQL.Format(_T(" INSERT INTO sys_sel") \
			_T("             (ss_id,") \
			_T("              ss_code,") \
			_T("              ss_desc,") \
			_T("              ss_vndesc,") \
			_T("              ss_default,") \
			_T("              ss_index,") \
			_T("              ss_isactive,") \
			_T("              ss_isfree)") \
			_T("      VALUES ( 'hms_testprofile',") \
			_T("              '%s', '%s', '%s', '%s', 0, '%s', '%s')")
			, szID, m_szGroupName, m_szGroupName, pMF->GetCurrentUser(), _T("Y"), tmp);

 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		CGuiDialog::OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret;
}
int CHMSGroupProfileDialog::OnCancelHMSGroupProfileDialog(){
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
int CHMSGroupProfileDialog::OnHMSGroupProfileDialogListLoadData(){
	return 0;
}
