#include "HMSTreatmentTDung.h"
#include "MainFrm.h"
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

	m_nDlgWidth = 580;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CHMSTreatmentTDung::~CHMSTreatmentTDung(){
}
void CHMSTreatmentTDung::OnCreateComponents(){
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
void CHMSTreatmentTDung::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndLabourGroup.SetCheckValue(true);
	m_wndLabourGroup.LimitText(35);
	m_wndInfectiousForm.SetCheckValue(true);
	m_wndInfectiousForm.LimitText(35);


	m_wndLabourGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndLabourGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndInfectiousForm.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndInfectiousForm.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_hms_treatment_dttdTbl.SetTableName(_T("hms_treatment_dttd"));
	m_hms_treatment_dttdTbl.AddField(_T("htd_docno"), dfLong); 
	m_hms_treatment_dttdTbl.AddField(_T("htd_date"), dfDate); 
	m_hms_treatment_dttdTbl.AddField(_T("htd_group"), dfText, 1); 
	m_hms_treatment_dttdTbl.AddField(_T("htd_type"), dfText, 1); 

}
void CHMSTreatmentTDung::OnSetWindowEvents(){
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndLabourGroup.SetEvent(WE_SELENDOK, _OnLabourGroupSelendokFnc);
	//m_wndLabourGroup.SetEvent(WE_SETFOCUS, _OnLabourGroupSetfocusFnc);
	//m_wndLabourGroup.SetEvent(WE_KILLFOCUS, _OnLabourGroupKillfocusFnc);
	m_wndLabourGroup.SetEvent(WE_SELCHANGE, _OnLabourGroupSelectChangeFnc);
	m_wndLabourGroup.SetEvent(WE_LOADDATA, _OnLabourGroupLoadDataFnc);
	//m_wndLabourGroup.SetEvent(WE_ADDNEW, _OnLabourGroupAddNewFnc);
	m_wndInfectiousForm.SetEvent(WE_SELENDOK, _OnInfectiousFormSelendokFnc);
	//m_wndInfectiousForm.SetEvent(WE_SETFOCUS, _OnInfectiousFormSetfocusFnc);
	//m_wndInfectiousForm.SetEvent(WE_KILLFOCUS, _OnInfectiousFormKillfocusFnc);
	m_wndInfectiousForm.SetEvent(WE_SELCHANGE, _OnInfectiousFormSelectChangeFnc);
	m_wndInfectiousForm.SetEvent(WE_LOADDATA, _OnInfectiousFormLoadDataFnc);
	//m_wndInfectiousForm.SetEvent(WE_ADDNEW, _OnInfectiousFormAddNewFnc);
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

}
void CHMSTreatmentTDung::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndLabourGroup.GetDlgCtrlID(), m_szLabourGroupKey);
	DDX_TextEx(pDX, m_wndInfectiousForm.GetDlgCtrlID(), m_szInfectiousFormKey);

}
void CHMSTreatmentTDung::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentTDung::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentTDung::SetDefaultValues(){

	m_szDate.Empty();
	m_szLabourGroupKey.Empty();
	m_szInfectiousFormKey.Empty();

}
int CHMSTreatmentTDung::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
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
/*void CHMSTreatmentTDung::OnDateChange(){
	
} */
/*void CHMSTreatmentTDung::OnDateSetfocus(){
	
} */
/*void CHMSTreatmentTDung::OnDateKillfocus(){
	
} */
int CHMSTreatmentTDung::OnDateCheckValue(){
	return 0;
} 
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
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLabourGroup.IsSearchKey() && !m_szLabourGroupKey.IsEmpty()){
	};
	m_wndLabourGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLabourGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentTDung::OnLabourGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
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
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInfectiousForm.IsSearchKey() && !m_szInfectiousFormKey.IsEmpty()){
	};
	m_wndInfectiousForm.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInfectiousForm.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentTDung::OnInfectiousFormAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentTDung::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTDung::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTDung::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTDung::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTDung::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
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
 		//szSQL = m_hms_treatment_dttdTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_treatment_dttdTbl.GetUpdateSQL(_T("createdby,createddate")); 
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
 	return 0; 
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
