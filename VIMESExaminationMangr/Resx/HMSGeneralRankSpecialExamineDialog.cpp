#include "HMSGeneralRankSpecialExamineDialog.h"
#include "MainFrm.h"
/*static void _OnDoctorNameChangeFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDoctorNameChange();
} */
/*static void _OnDoctorNameSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDoctorNameSetfocus();} */ 
/*static void _OnDoctorNameKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDoctorNameKillfocus();
} */
static int _OnDoctorNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDoctorNameCheckValue();
} 
/*static void _OnExamDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnExamDateChange();
} */
/*static void _OnExamDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnExamDateSetfocus();} */ 
/*static void _OnExamDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnExamDateCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnTemplateSelectFnc(CWnd *pWnd){
	CHMSGeneralRankSpecialExamineDialog *pVw = (CHMSGeneralRankSpecialExamineDialog *)pWnd;
	pVw->OnTemplateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSGeneralRankSpecialExamineDialog *pVw = (CHMSGeneralRankSpecialExamineDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralRankSpecialExamineDialog *pVw = (CHMSGeneralRankSpecialExamineDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralRankSpecialExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnAddHMSGeneralRankSpecialExamineDialog();
} 
static int _OnEditHMSGeneralRankSpecialExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnEditHMSGeneralRankSpecialExamineDialog();
} 
static int _OnDeleteHMSGeneralRankSpecialExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnDeleteHMSGeneralRankSpecialExamineDialog();
} 
static int _OnSaveHMSGeneralRankSpecialExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnSaveHMSGeneralRankSpecialExamineDialog();
} 
static int _OnCancelHMSGeneralRankSpecialExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnCancelHMSGeneralRankSpecialExamineDialog();
} 
CHMSGeneralRankSpecialExamineDialog::CHMSGeneralRankSpecialExamineDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 870;
	m_nDlgHeight = 526;
	SetDefaultValues();
}
CHMSGeneralRankSpecialExamineDialog::~CHMSGeneralRankSpecialExamineDialog(){
}
void CHMSGeneralRankSpecialExamineDialog::OnCreateComponents(){
	m_wndExamineInformation.Create(this, _T("Examine Information"), 5, 5, 600, 290);
	m_wndDoctorNameLabel.Create(this, _T("Doctor Name"), 10, 30, 90, 55);
	m_wndDoctorName.Create(this,95, 30, 323, 55); 
	m_wndExamDateLabel.Create(this, _T("Exam Date"), 328, 30, 408, 55);
	m_wndExamDate.Create(this,414, 30, 539, 55); 
	m_wndDescription.Create(this,10, 60, 595, 285); 
	m_wndTemplate.Create(this, _T("Template"), 5, 295, 85, 320);
	m_wndSave.Create(this, _T("&Save"), 434, 295, 514, 320);
	m_wndClose.Create(this, _T("&Close"), 519, 295, 599, 320);

}
void CHMSGeneralRankSpecialExamineDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDoctorName.SetLimitText(35);
	m_wndExamDate.SetReadOnly(TRUE);
	m_wndDescription.SetMultiLine(TRUE);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);

}
void CHMSGeneralRankSpecialExamineDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDoctorName.SetEvent(WE_CHANGE, _OnDoctorNameChangeFnc);
	//m_wndDoctorName.SetEvent(WE_SETFOCUS, _OnDoctorNameSetfocusFnc);
	//m_wndDoctorName.SetEvent(WE_KILLFOCUS, _OnDoctorNameKillfocusFnc);
	m_wndDoctorName.SetEvent(WE_CHECKVALUE, _OnDoctorNameCheckValueFnc);
	//m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
	//m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
	//m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
	m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndTemplate.SetEvent(WE_CLICK, _OnTemplateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSGeneralRankSpecialExamineDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDoctorName.GetDlgCtrlID(), m_szDoctorName);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSGeneralRankSpecialExamineDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGeneralRankSpecialExamineDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralRankSpecialExamineDialog::SetDefaultValues(){

	m_szDoctorName.Empty();
	m_szExamDate.Empty();
	m_szDescription.Empty();

}
int CHMSGeneralRankSpecialExamineDialog::SetMode(int nMode){
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
/*void CHMSGeneralRankSpecialExamineDialog::OnDoctorNameChange(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnDoctorNameSetfocus(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnDoctorNameKillfocus(){
	
} */
int CHMSGeneralRankSpecialExamineDialog::OnDoctorNameCheckValue(){
	return 0;
} 
/*void CHMSGeneralRankSpecialExamineDialog::OnExamDateChange(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnExamDateSetfocus(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnExamDateKillfocus(){
	
} */
int CHMSGeneralRankSpecialExamineDialog::OnExamDateCheckValue(){
	return 0;
} 
/*void CHMSGeneralRankSpecialExamineDialog::OnDescriptionChange(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnDescriptionKillfocus(){
	
} */
int CHMSGeneralRankSpecialExamineDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSGeneralRankSpecialExamineDialog::OnTemplateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralRankSpecialExamineDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralRankSpecialExamineDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSGeneralRankSpecialExamineDialog::OnAddHMSGeneralRankSpecialExamineDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSGeneralRankSpecialExamineDialog::OnEditHMSGeneralRankSpecialExamineDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralRankSpecialExamineDialog::OnDeleteHMSGeneralRankSpecialExamineDialog(){
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
 		OnCancelHMSGeneralRankSpecialExamineDialog();
 	}
	return 0;
}
int CHMSGeneralRankSpecialExamineDialog::OnSaveHMSGeneralRankSpecialExamineDialog(){
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
 		//OnHMSGeneralRankSpecialExamineDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSGeneralRankSpecialExamineDialog::OnCancelHMSGeneralRankSpecialExamineDialog(){
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
int CHMSGeneralRankSpecialExamineDialog::OnHMSGeneralRankSpecialExamineDialogListLoadData(){
	return 0;
}
