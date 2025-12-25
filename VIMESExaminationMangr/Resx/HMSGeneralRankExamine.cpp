#include "HMSGeneralRankExamine.h"
#include "MainFrm.h"
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSGeneralRankExamine *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankExamine *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankExamine *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralRankExamine *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnTemplateSelectFnc(CWnd *pWnd){
	CHMSGeneralRankExamine *pVw = (CHMSGeneralRankExamine *)pWnd;
	pVw->OnTemplateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSGeneralRankExamine *pVw = (CHMSGeneralRankExamine *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralRankExamine *pVw = (CHMSGeneralRankExamine *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralRankExamineFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankExamine*)pWnd)->OnAddHMSGeneralRankExamine();
} 
static int _OnEditHMSGeneralRankExamineFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankExamine*)pWnd)->OnEditHMSGeneralRankExamine();
} 
static int _OnDeleteHMSGeneralRankExamineFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankExamine*)pWnd)->OnDeleteHMSGeneralRankExamine();
} 
static int _OnSaveHMSGeneralRankExamineFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankExamine*)pWnd)->OnSaveHMSGeneralRankExamine();
} 
static int _OnCancelHMSGeneralRankExamineFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankExamine*)pWnd)->OnCancelHMSGeneralRankExamine();
} 
CHMSGeneralRankExamine::CHMSGeneralRankExamine(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 524;
	m_nDlgHeight = 325;
	SetDefaultValues();
}
CHMSGeneralRankExamine::~CHMSGeneralRankExamine(){
}
void CHMSGeneralRankExamine::OnCreateComponents(){
	m_wndExamineInformation.Create(this, _T("Examine Information"), 5, 5, 505, 280);
	m_wndDescription.Create(this,10, 30, 500, 275); 
	m_wndTemplate.Create(this, _T("Template"), 5, 285, 85, 310);
	m_wndSave.Create(this, _T("&Save"), 340, 285, 420, 310);
	m_wndClose.Create(this, _T("&Close"), 425, 285, 505, 310);

}
void CHMSGeneralRankExamine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDescription.SetMultiLine(TRUE);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);

}
void CHMSGeneralRankExamine::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndTemplate.SetEvent(WE_CLICK, _OnTemplateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSGeneralRankExamine::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSGeneralRankExamine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGeneralRankExamine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralRankExamine::SetDefaultValues(){

	m_szDescription.Empty();

}
int CHMSGeneralRankExamine::SetMode(int nMode){
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
/*void CHMSGeneralRankExamine::OnDescriptionChange(){
	
} */
/*void CHMSGeneralRankExamine::OnDescriptionSetfocus(){
	
} */
/*void CHMSGeneralRankExamine::OnDescriptionKillfocus(){
	
} */
int CHMSGeneralRankExamine::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSGeneralRankExamine::OnTemplateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralRankExamine::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralRankExamine::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSGeneralRankExamine::OnAddHMSGeneralRankExamine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSGeneralRankExamine::OnEditHMSGeneralRankExamine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralRankExamine::OnDeleteHMSGeneralRankExamine(){
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
 		OnCancelHMSGeneralRankExamine();
 	}
	return 0;
}
int CHMSGeneralRankExamine::OnSaveHMSGeneralRankExamine(){
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
 		//OnHMSGeneralRankExamineListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSGeneralRankExamine::OnCancelHMSGeneralRankExamine(){
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
int CHMSGeneralRankExamine::OnHMSGeneralRankExamineListLoadData(){
	return 0;
}
