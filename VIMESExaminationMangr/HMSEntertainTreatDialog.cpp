#include "HMSEntertainTreatDialog.h"
#include "MainFrm.h"
static void _OnInfectiousFormSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEntertainTreatDialog* )pWnd)->OnInfectiousFormSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInfectiousFormSelendokFnc(CWnd *pWnd){
	((CHMSEntertainTreatDialog *)pWnd)->OnInfectiousFormSelendok();
}
/*static void _OnInfectiousFormSetfocusFnc(CWnd *pWnd){
	((CHMSEntertainTreatDialog *)pWnd)->OnInfectiousFormKillfocus();
}*/
/*static void _OnInfectiousFormKillfocusFnc(CWnd *pWnd){
	((CHMSEntertainTreatDialog *)pWnd)->OnInfectiousFormKillfocus();
}*/
static long _OnInfectiousFormLoadDataFnc(CWnd *pWnd){
	return ((CHMSEntertainTreatDialog *)pWnd)->OnInfectiousFormLoadData();
}
/*static void _OnInfectiousFormAddNewFnc(CWnd *pWnd){
	((CHMSEntertainTreatDialog *)pWnd)->OnInfectiousFormAddNew();
}*/
static void _OnLabourGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEntertainTreatDialog* )pWnd)->OnLabourGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLabourGroupSelendokFnc(CWnd *pWnd){
	((CHMSEntertainTreatDialog *)pWnd)->OnLabourGroupSelendok();
}
/*static void _OnLabourGroupSetfocusFnc(CWnd *pWnd){
	((CHMSEntertainTreatDialog *)pWnd)->OnLabourGroupKillfocus();
}*/
/*static void _OnLabourGroupKillfocusFnc(CWnd *pWnd){
	((CHMSEntertainTreatDialog *)pWnd)->OnLabourGroupKillfocus();
}*/
static long _OnLabourGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSEntertainTreatDialog *)pWnd)->OnLabourGroupLoadData();
}
/*static void _OnLabourGroupAddNewFnc(CWnd *pWnd){
	((CHMSEntertainTreatDialog *)pWnd)->OnLabourGroupAddNew();
}*/
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSEntertainTreatDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSEntertainTreatDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSEntertainTreatDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEntertainTreatDialog *)pWnd)->OnDateCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSEntertainTreatDialog *pVw = (CHMSEntertainTreatDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSEntertainTreatDialog *pVw = (CHMSEntertainTreatDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSEntertainTreatDialog *pVw = (CHMSEntertainTreatDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSEntertainTreatDialog *pVw = (CHMSEntertainTreatDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSEntertainTreatDialog *pVw = (CHMSEntertainTreatDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSEntertainTreatDialogFnc(CWnd *pWnd){
	 return ((CHMSEntertainTreatDialog*)pWnd)->OnAddHMSEntertainTreatDialog();
} 
static int _OnEditHMSEntertainTreatDialogFnc(CWnd *pWnd){
	 return ((CHMSEntertainTreatDialog*)pWnd)->OnEditHMSEntertainTreatDialog();
} 
static int _OnDeleteHMSEntertainTreatDialogFnc(CWnd *pWnd){
	 return ((CHMSEntertainTreatDialog*)pWnd)->OnDeleteHMSEntertainTreatDialog();
} 
static int _OnSaveHMSEntertainTreatDialogFnc(CWnd *pWnd){
	 return ((CHMSEntertainTreatDialog*)pWnd)->OnSaveHMSEntertainTreatDialog();
} 
static int _OnCancelHMSEntertainTreatDialogFnc(CWnd *pWnd){
	 return ((CHMSEntertainTreatDialog*)pWnd)->OnCancelHMSEntertainTreatDialog();
} 
CHMSEntertainTreatDialog::CHMSEntertainTreatDialog(CWnd *pParent){
	m_pParentWnd = pParent;
	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSEntertainTreatDialog::~CHMSEntertainTreatDialog(){
}
void CHMSEntertainTreatDialog::OnCreateComponents(){
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 5, 5, 570, 120);
	m_wndAdmitDateLabel.Create(this, _T("Treatment Date"), 10, 30, 160, 55);
	m_wndDate.Create(this,165, 30, 256, 55); 
	m_wndLabourGroupLabel.Create(this, _T("Labour Group"), 10, 60, 160, 85);
	m_wndLabourGroup.Create(this,165, 60, 565, 85); 
	m_wndInfectiousFormLabel.Create(this, _T("Infectious form"), 10, 90, 160, 115);
	m_wndInfectiousForm.Create(this,165, 90, 565, 115); 
	m_wndAdd.Create(this, _T("&Add"), 175, 125, 250, 150);
	m_wndEdit.Create(this, _T("&Edit"), 255, 125, 330, 150);
	m_wndDelete.Create(this, _T("&Delete"), 335, 125, 410, 150);
	m_wndSave.Create(this, _T("&Save"), 415, 125, 490, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 495, 125, 570, 150);

}
void CHMSEntertainTreatDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndInfectiousForm.SetCheckValue(true);
	m_wndInfectiousForm.LimitText(35);
	m_wndLabourGroup.SetCheckValue(true);
	m_wndLabourGroup.LimitText(35);
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_szDate =pMF->GetSysDate();

	m_wndInfectiousForm.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndInfectiousForm.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndLabourGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndLabourGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	
	m_hms_treatment_dttdTbl.SetTableName(_T("hms_treatment_dttd"));
	m_hms_treatment_dttdTbl.AddField(_T("htd_docno"), dfLong); 
	m_hms_treatment_dttdTbl.AddField(_T("htd_date"), dfDate); 
	m_hms_treatment_dttdTbl.AddField(_T("htd_group"), dfText, 1); 
	m_hms_treatment_dttdTbl.AddField(_T("htd_type"), dfText, 1); 

}
void CHMSEntertainTreatDialog::OnSetWindowEvents(){
	m_wndInfectiousForm.SetEvent(WE_SELENDOK, _OnInfectiousFormSelendokFnc);
	//m_wndInfectiousForm.SetEvent(WE_SETFOCUS, _OnInfectiousFormSetfocusFnc);
	//m_wndInfectiousForm.SetEvent(WE_KILLFOCUS, _OnInfectiousFormKillfocusFnc);
	m_wndInfectiousForm.SetEvent(WE_SELCHANGE, _OnInfectiousFormSelectChangeFnc);
	m_wndInfectiousForm.SetEvent(WE_LOADDATA, _OnInfectiousFormLoadDataFnc);
	//m_wndInfectiousForm.SetEvent(WE_ADDNEW, _OnInfectiousFormAddNewFnc);
	m_wndLabourGroup.SetEvent(WE_SELENDOK, _OnLabourGroupSelendokFnc);
	//m_wndLabourGroup.SetEvent(WE_SETFOCUS, _OnLabourGroupSetfocusFnc);
	//m_wndLabourGroup.SetEvent(WE_KILLFOCUS, _OnLabourGroupKillfocusFnc);
	m_wndLabourGroup.SetEvent(WE_SELCHANGE, _OnLabourGroupSelectChangeFnc);
	m_wndLabourGroup.SetEvent(WE_LOADDATA, _OnLabourGroupLoadDataFnc);
	//m_wndLabourGroup.SetEvent(WE_ADDNEW, _OnLabourGroupAddNewFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSEntertainTreatDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSEntertainTreatDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSEntertainTreatDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSEntertainTreatDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSEntertainTreatDialogFnc, 0, 'T', VK_CONTROL);
*/	
	GetDataToScreen();

}
void CHMSEntertainTreatDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndInfectiousForm.GetDlgCtrlID(), m_szInfectiousFormKey);
	DDX_TextEx(pDX, m_wndLabourGroup.GetDlgCtrlID(), m_szLabourGroupKey);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);

}
void CHMSEntertainTreatDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_treatment_dttd WHERE htd_docno =%ld "), pMF->m_wndPatientDocument.m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF()){
		rs.GetValue(_T("htd_date"), m_szDate);
		rs.GetValue(_T("htd_group"),m_szLabourGroupKey);
		rs.GetValue(_T("htd_type"),m_szInfectiousFormKey);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSEntertainTreatDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_treatment_dttdTbl.SetValue(_T("htd_docno"), pMF->m_wndPatientDocument.m_nDocumentNo); 
	m_hms_treatment_dttdTbl.SetValue(_T("htd_date"), m_szDate); 
	m_hms_treatment_dttdTbl.SetValue(_T("htd_group"), m_szLabourGroupKey); 
	m_hms_treatment_dttdTbl.SetValue(_T("htd_type"), m_szInfectiousFormKey); 
}
void CHMSEntertainTreatDialog::SetDefaultValues(){

	m_szInfectiousFormKey.Empty();
	m_szLabourGroupKey.Empty();
	

}
int CHMSEntertainTreatDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
			szSQL.Format(_T("SELECT count(*) FROM hms_treatment_dttd WHERE htd_docno =%ld "), pMF->m_wndPatientDocument.m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if (rs.GetIntValue() > 0) return-1;
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
 			EnableButtons(FALSE, 0,3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndLabourGroup.SetFocus();
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSEntertainTreatDialog::OnInfectiousFormSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEntertainTreatDialog::OnInfectiousFormSelendok(){
	 
}
/*void CHMSEntertainTreatDialog::OnInfectiousFormSetfocus(){
	
}*/
/*void CHMSEntertainTreatDialog::OnInfectiousFormKillfocus(){
	
}*/
long CHMSEntertainTreatDialog::OnInfectiousFormLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInfectiousForm.IsSearchKey() && !m_szInfectiousFormKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code ='%s' "), m_szInfectiousFormKey);
	};
	m_wndInfectiousForm.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_dttd_type' %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInfectiousForm.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSEntertainTreatDialog::OnInfectiousFormAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSEntertainTreatDialog::OnLabourGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEntertainTreatDialog::OnLabourGroupSelendok(){
	 
}
/*void CHMSEntertainTreatDialog::OnLabourGroupSetfocus(){
	
}*/
/*void CHMSEntertainTreatDialog::OnLabourGroupKillfocus(){
	
}*/
long CHMSEntertainTreatDialog::OnLabourGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLabourGroup.IsSearchKey() && !m_szLabourGroupKey.IsEmpty()){
		szWhere.Format(_T(" and cast(ss_code as integer) =%d "), ToInt(m_szLabourGroupKey));
	};
	m_wndLabourGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_dttd_grp' %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLabourGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSEntertainTreatDialog::OnLabourGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSEntertainTreatDialog::OnDateChange(){
	
} */
/*void CHMSEntertainTreatDialog::OnDateSetfocus(){
	
} */
/*void CHMSEntertainTreatDialog::OnDateKillfocus(){
	
} */
int CHMSEntertainTreatDialog::OnDateCheckValue(){
	return 0;
} 
void CHMSEntertainTreatDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSEntertainTreatDialog();
	
} 
void CHMSEntertainTreatDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSEntertainTreatDialog();
} 
void CHMSEntertainTreatDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSEntertainTreatDialog();	
} 
void CHMSEntertainTreatDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSEntertainTreatDialog();
} 
void CHMSEntertainTreatDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSEntertainTreatDialog();
} 
int CHMSEntertainTreatDialog::OnAddHMSEntertainTreatDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSEntertainTreatDialog::OnEditHMSEntertainTreatDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEntertainTreatDialog::OnDeleteHMSEntertainTreatDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessageBox(_T("Do you want to delete treatment on patient"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM hms_treatment_dttd WHERE htd_docno =%ld "), pMF->m_wndPatientDocument.m_nDocumentNo); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSEntertainTreatDialog(); 
 	}
	return 0;
}
int CHMSEntertainTreatDialog::OnSaveHMSEntertainTreatDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_treatment_dttdTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE htd_docno =%ld "), pMF->m_wndPatientDocument.m_nDocumentNo); 
 		szSQL = m_hms_treatment_dttdTbl.GetUpdateSQL(_T("htd_docno")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSEntertainTreatDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret;  	
}
int CHMSEntertainTreatDialog::OnCancelHMSEntertainTreatDialog(){
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
int CHMSEntertainTreatDialog::OnHMSEntertainTreatDialogListLoadData(){
	return 0;
}
