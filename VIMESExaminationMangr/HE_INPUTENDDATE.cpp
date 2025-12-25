#include "HE_INPUTENDDATE.h"
#include "MainFrm.h"
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHE_INPUTENDDATE *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHE_INPUTENDDATE *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHE_INPUTENDDATE *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHE_INPUTENDDATE *)pWnd)->OnEndDateCheckValue();
} 
static void _OnOkSelectFnc(CWnd *pWnd){
	CHE_INPUTENDDATE *pVw = (CHE_INPUTENDDATE *)pWnd;
	pVw->OnOkSelect();
} 
static int _OnAddHE_INPUTENDDATEFnc(CWnd *pWnd){
	 return ((CHE_INPUTENDDATE*)pWnd)->OnAddHE_INPUTENDDATE();
} 
static int _OnEditHE_INPUTENDDATEFnc(CWnd *pWnd){
	 return ((CHE_INPUTENDDATE*)pWnd)->OnEditHE_INPUTENDDATE();
} 
static int _OnDeleteHE_INPUTENDDATEFnc(CWnd *pWnd){
	 return ((CHE_INPUTENDDATE*)pWnd)->OnDeleteHE_INPUTENDDATE();
} 
static int _OnSaveHE_INPUTENDDATEFnc(CWnd *pWnd){
	 return ((CHE_INPUTENDDATE*)pWnd)->OnSaveHE_INPUTENDDATE();
} 
static int _OnCancelHE_INPUTENDDATEFnc(CWnd *pWnd){
	 return ((CHE_INPUTENDDATE*)pWnd)->OnCancelHE_INPUTENDDATE();
} 
CHE_INPUTENDDATE::CHE_INPUTENDDATE(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHE_INPUTENDDATE::~CHE_INPUTENDDATE(){
}
void CHE_INPUTENDDATE::OnCreateComponents(){
	m_wndInputEndDate.Create(this, _T("Input End Date"), 5, 5, 255, 90);
	m_wndEndDateLabel.Create(this, _T("End Date"), 10, 30, 125, 55);
	m_wndEndDate.Create(this,130, 30, 250, 55); 
	m_wndOk.Create(this, _T("&Ok"), 170, 60, 250, 85);

}
void CHE_INPUTENDDATE::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	

}
void CHE_INPUTENDDATE::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	SetMode(VM_EDIT);

}
void CHE_INPUTENDDATE::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);

}
void CHE_INPUTENDDATE::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("EndDate")] =  m_szEndDate;
	}
	else
	{
			
	m_jData[_T("EndDate")].GetValue(m_szEndDate);
	}

}
void CHE_INPUTENDDATE::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHE_INPUTENDDATE::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHE_INPUTENDDATE::SetDefaultValues(){

	m_szEndDate.Empty();

}
int CHE_INPUTENDDATE::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 4, -1);
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
/*void CHE_INPUTENDDATE::OnEndDateChange(){
	
} */
/*void CHE_INPUTENDDATE::OnEndDateSetfocus(){
	
} */
/*void CHE_INPUTENDDATE::OnEndDateKillfocus(){
	
} */
int CHE_INPUTENDDATE::OnEndDateCheckValue(){
	return 0;
} 
void CHE_INPUTENDDATE::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOK();
	
} 
int CHE_INPUTENDDATE::OnAddHE_INPUTENDDATE(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHE_INPUTENDDATE::OnEditHE_INPUTENDDATE(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHE_INPUTENDDATE::OnDeleteHE_INPUTENDDATE(){
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
 		OnCancelHE_INPUTENDDATE();
 	}
	return 0;
}
int CHE_INPUTENDDATE::OnSaveHE_INPUTENDDATE(){
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
 		//OnHE_INPUTENDDATEListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHE_INPUTENDDATE::OnCancelHE_INPUTENDDATE(){
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
int CHE_INPUTENDDATE::OnHE_INPUTENDDATEListLoadData(){
	return 0;
}
