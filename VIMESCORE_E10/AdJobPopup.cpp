#include "AdJobPopup.h"
#include "MainFrame_E10.h"
#include "AdJob.h"

/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdJobPopup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdJobPopup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdJobPopup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdJobPopup *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdJobPopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdJobPopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdJobPopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdJobPopup *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdJobPopup*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdJobPopup *pVw = (CAdJobPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdJobPopupFnc(CWnd *pWnd){
	 return ((CAdJobPopup*)pWnd)->OnAddAdJobPopup();
} 
static int _OnEditAdJobPopupFnc(CWnd *pWnd){
	 return ((CAdJobPopup*)pWnd)->OnEditAdJobPopup();
} 
static int _OnDeleteAdJobPopupFnc(CWnd *pWnd){
	 return ((CAdJobPopup*)pWnd)->OnDeleteAdJobPopup();
} 
static int _OnSaveAdJobPopupFnc(CWnd *pWnd){
	 return ((CAdJobPopup*)pWnd)->OnSaveAdJobPopup();
} 
static int _OnCancelAdJobPopupFnc(CWnd *pWnd){
	 return ((CAdJobPopup*)pWnd)->OnCancelAdJobPopup();
} 
CAdJobPopup::CAdJobPopup(){
	SetAutoClose(false);
	m_nDlgWidth = 805;
	m_nDlgHeight = 50;
	SetDefaultValues();
}
CAdJobPopup::~CAdJobPopup(){
}
void CAdJobPopup::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 0, 0, 800, 50);
	m_wndIDLabel.Create(this, _T("ID"), 5, 25, 85, 50);
	m_wndID.Create(this,90, 25, 170, 50); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 175, 25, 255, 50);
	m_wndDescription.Create(this,260, 25, 625, 50); 
	m_wndActive.Create(this, _T("Active"), 630, 25, 710, 50);
	m_wndSave.Create(this, _T("&Save"), 715, 25, 795, 50);

}
void CAdJobPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndEntry.ModifyStyle(WS_BORDER, 0);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	//m_wndDescription.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_job_classTbl.SetTableName(_T("ad_job_class"));
	m_ad_job_classTbl.AddField(_T("adjc_CREATEDBY"), dfText, 15); 
	m_ad_job_classTbl.AddField(_T("adjc_CREATEDDATE"), dfDateTime); 
	m_ad_job_classTbl.AddField(_T("adjc_UPDATEDBY"), dfText, 15); 
	m_ad_job_classTbl.AddField(_T("adjc_UPDATEDDATE"), dfDateTime); 
	m_ad_job_classTbl.AddField(_T("adjc_job_class_ID"), dfText, 32);
	m_ad_job_classTbl.AddField(_T("adjc_DESCRIPTION"), dfText, 254); 
	m_ad_job_classTbl.AddField(_T("adjc_ISACTIVE"), dfText, 1); 
}

void CAdJobPopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if (nMode == VM_EDIT)
		GetDataToScreen();

}
void CAdJobPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdJobPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT adjc_description as descr, adjc_isactive as active FROM ad_job_class WHERE adjc_job_class_id = '%s' ORDER BY adjc_job_class_id"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("descr"), m_szDescription);
		rs.GetValue(_T("active"), szActive);
		if (szActive == _T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(false);
	}
}

void CAdJobPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_job_classTbl.SetValue(_T("adjc_createdby"), pMF->GetCurrentUser());
	m_ad_job_classTbl.SetValue(_T("adjc_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adjc_job_class_id='%s' "), m_szID);
		m_ad_job_classTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_job_classTbl.SetValue(_T("adjc_createddate"), pMF->GetSysDateTime());
	m_ad_job_classTbl.SetValue(_T("adjc_updateddate"), pMF->GetSysDateTime());
	m_ad_job_classTbl.SetValue(_T("adjc_job_class_id"), m_szID);
	m_ad_job_classTbl.SetValue(_T("adjc_description"), m_szDescription);
	m_ad_job_classTbl.SetValue(_T("adjc_isactive"), m_bActive?_T("Y"):_T("N"));	
}

void CAdJobPopup::SetDefaultValues(){

	m_szID.Empty();
	m_szDescription.Empty();
	m_bActive=TRUE;

}

int CAdJobPopup::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
			m_wndID.SetFocus();
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
			m_wndID.EnableWindow(FALSE);
			m_wndDescription.SetFocus();
 			EnableButtons(TRUE, 0, -1); 
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

/*void CAdJobPopup::OnIDChange(){
	
} */
/*void CAdJobPopup::OnIDSetfocus(){
	
} */
/*void CAdJobPopup::OnIDKillfocus(){
	
} */
int CAdJobPopup::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_job_class WHERE adjc_job_class_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdJobPopup::OnDescriptionChange(){
	
} */
/*void CAdJobPopup::OnDescriptionSetfocus(){
	
} */
/*void CAdJobPopup::OnDescriptionKillfocus(){
	
} */
int CAdJobPopup::OnDescriptionCheckValue(){
	return 0;
}
 
	void CAdJobPopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdJobPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdJobPopup();
}
 
int CAdJobPopup::OnAddAdJobPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdJobPopup::OnEditAdJobPopup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdJobPopup::OnDeleteAdJobPopup(){
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
 		OnCancelAdJobPopup(); 
 	}
	return 0;
}

int CAdJobPopup::OnSaveAdJobPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_job_classTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE adjc_job_class_id = '%s'"), m_szID); 
 		szSQL = m_ad_job_classTbl.GetUpdateSQL(_T("adjc_createdby,adjc_createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{
		if(GetMode() == VM_EDIT)
 			ClosePopup();
		else
			SetMode(VM_ADD);
		((CAdJob*)GetParentWnd())->OnListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CAdJobPopup::OnCancelAdJobPopup(){
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
 
int CAdJobPopup::OnAdJobPopupListLoadData(){
	return 0;
}

void CAdJobPopup::ClosePopup(){
	CGuiPopup::ClosePopup();
	((CAdJob*)GetParentWnd())->SetMode(m_nMode);
}