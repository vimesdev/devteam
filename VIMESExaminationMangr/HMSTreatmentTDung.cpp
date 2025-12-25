#include "HMSTreatmentTDung.h"
#include "MainFrm.h"
static void _OnInfectiousFormSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentTDung* )pWnd)->OnInfectiousFormSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInfectiousFormSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentTDung *)pWnd)->OnInfectiousFormSelendok();
}
/*static void _OnInfectiousFormSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTDung *)pWnd)->OnInfectiousFormKillfocus();
}*/
/*static void _OnInfectiousFormKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTDung *)pWnd)->OnInfectiousFormKillfocus();
}*/
static long _OnInfectiousFormLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentTDung *)pWnd)->OnInfectiousFormLoadData();
}
/*static void _OnInfectiousFormAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentTDung *)pWnd)->OnInfectiousFormAddNew();
}*/
static void _OnLabourGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentTDung* )pWnd)->OnLabourGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLabourGroupSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentTDung *)pWnd)->OnLabourGroupSelendok();
}
/*static void _OnLabourGroupSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTDung *)pWnd)->OnLabourGroupKillfocus();
}*/
/*static void _OnLabourGroupKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTDung *)pWnd)->OnLabourGroupKillfocus();
}*/
static long _OnLabourGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentTDung *)pWnd)->OnLabourGroupLoadData();
}
/*static void _OnLabourGroupAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentTDung *)pWnd)->OnLabourGroupAddNew();
}*/
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentTDung *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTDung *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTDung *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentTDung *)pWnd)->OnDateCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSTreatmentTDung *pVw = (CHMSTreatmentTDung *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSTreatmentTDung *pVw = (CHMSTreatmentTDung *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSTreatmentTDung *pVw = (CHMSTreatmentTDung *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentTDung *pVw = (CHMSTreatmentTDung *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTreatmentTDung *pVw = (CHMSTreatmentTDung *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSTreatmentTDungFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTDung*)pWnd)->OnAddHMSTreatmentTDung();
} 
static int _OnEditHMSTreatmentTDungFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTDung*)pWnd)->OnEditHMSTreatmentTDung();
} 
static int _OnDeleteHMSTreatmentTDungFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTDung*)pWnd)->OnDeleteHMSTreatmentTDung();
} 
static int _OnSaveHMSTreatmentTDungFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTDung*)pWnd)->OnSaveHMSTreatmentTDung();
} 
static int _OnCancelHMSTreatmentTDungFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTDung*)pWnd)->OnCancelHMSTreatmentTDung();
} 
CHMSTreatmentTDung::CHMSTreatmentTDung(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSTreatmentTDung::~CHMSTreatmentTDung(){
}
void CHMSTreatmentTDung::OnCreateComponents(){
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 5, 5, 596, 476);
	m_wndAdmitDateLabel.Create(this, _T("Treatment Date"), 9, 29, 174, 54);
	m_wndDate.Create(this,179, 29, 282, 54); 	
	m_wndLabourGroupLabel.Create(this, _T("Labour Group"), 9, 59, 173, 84);
	m_wndLabourGroup.Create(this,178, 59, 589, 84); 
	m_wndInfectiousFormLabel.Create(this, _T("Infectious form"), 9, 89, 174, 114);
	m_wndInfectiousForm.Create(this,179, 89, 590, 114); 
	m_wndAdd.Create(this, _T("&Add"), 193, 119, 268, 144);
	m_wndEdit.Create(this, _T("&Edit"), 273, 119, 348, 144);
	m_wndDelete.Create(this, _T("&Delete"), 353, 119, 428, 144);
	m_wndSave.Create(this, _T("&Save"), 433, 119, 508, 144);
	m_wndCancel.Create(this, _T("&Cancel"), 513, 119, 588, 144);
}
void CHMSTreatmentTDung::OnInitializeComponents(){
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
void CHMSTreatmentTDung::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTreatmentTDungFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTreatmentTDungFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTreatmentTDungFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTreatmentTDungFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTreatmentTDungFnc, 0, 'T', VK_CONTROL);
	
	GetDataToScreen();

}
void CHMSTreatmentTDung::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndInfectiousForm.GetDlgCtrlID(), m_szInfectiousFormKey);
	DDX_TextEx(pDX, m_wndLabourGroup.GetDlgCtrlID(), m_szLabourGroupKey);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);

}
void CHMSTreatmentTDung::GetDataToScreen(){
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
void CHMSTreatmentTDung::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_treatment_dttdTbl.SetValue(_T("htd_docno"), pMF->m_wndPatientDocument.m_nDocumentNo); 
	m_hms_treatment_dttdTbl.SetValue(_T("htd_date"), m_szDate); 
	m_hms_treatment_dttdTbl.SetValue(_T("htd_group"), m_szLabourGroupKey); 
	m_hms_treatment_dttdTbl.SetValue(_T("htd_type"), m_szInfectiousFormKey); 
}
void CHMSTreatmentTDung::SetDefaultValues(){

	m_szInfectiousFormKey.Empty();
	m_szLabourGroupKey.Empty();
	

}
int CHMSTreatmentTDung::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
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
void CHMSTreatmentTDung::OnInfectiousFormSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTDung::OnInfectiousFormSelendok(){
	 
}
/*void CHMSTreatmentTDung::OnInfectiousFormSetfocus(){
	
}*/
/*void CHMSTreatmentTDung::OnInfectiousFormKillfocus(){
	
}*/
long CHMSTreatmentTDung::OnInfectiousFormLoadData(){
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
/*void CHMSTreatmentTDung::OnInfectiousFormAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentTDung::OnLabourGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTDung::OnLabourGroupSelendok(){
	 
}
/*void CHMSTreatmentTDung::OnLabourGroupSetfocus(){
	
}*/
/*void CHMSTreatmentTDung::OnLabourGroupKillfocus(){
	
}*/
long CHMSTreatmentTDung::OnLabourGroupLoadData(){
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
/*void CHMSTreatmentTDung::OnLabourGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentTDung::OnDateChange(){
	
} */
/*void CHMSTreatmentTDung::OnDateSetfocus(){
	
} */
/*void CHMSTreatmentTDung::OnDateKillfocus(){
	
} */
int CHMSTreatmentTDung::OnDateCheckValue(){
	return 0;
} 
void CHMSTreatmentTDung::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSTreatmentTDung();
	
} 
void CHMSTreatmentTDung::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSTreatmentTDung();
} 
void CHMSTreatmentTDung::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSTreatmentTDung();	
} 
void CHMSTreatmentTDung::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSTreatmentTDung();
} 
void CHMSTreatmentTDung::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSTreatmentTDung();
} 
int CHMSTreatmentTDung::OnAddHMSTreatmentTDung(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSTreatmentTDung::OnEditHMSTreatmentTDung(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentTDung::OnDeleteHMSTreatmentTDung(){
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
 		OnCancelHMSTreatmentTDung(); 
 	}
	return 0;
}
int CHMSTreatmentTDung::OnSaveHMSTreatmentTDung(){
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
 		//OnHMSTreatmentTDungListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret;  	
}
int CHMSTreatmentTDung::OnCancelHMSTreatmentTDung(){
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
int CHMSTreatmentTDung::OnHMSTreatmentTDungListLoadData(){
	return 0;
}
