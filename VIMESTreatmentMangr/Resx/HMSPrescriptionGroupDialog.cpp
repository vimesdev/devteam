#include "HMSPrescriptionGroupDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionGroupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionGroupDialog* )pWnd)->OnDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupDialog *)pWnd)->OnDiseaseSelendok();
}
/*static void _OnDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupDialog *)pWnd)->OnDiseaseKillfocus();
}*/
/*static void _OnDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupDialog *)pWnd)->OnDiseaseKillfocus();
}*/
static long _OnDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionGroupDialog *)pWnd)->OnDiseaseLoadData();
}
/*static void _OnDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupDialog *)pWnd)->OnDiseaseAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionGroupDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPrescriptionGroupDialog *pVw = (CHMSPrescriptionGroupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPrescriptionGroupDialog *pVw = (CHMSPrescriptionGroupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSPrescriptionGroupDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupDialog*)pWnd)->OnAddHMSPrescriptionGroupDialog();
} 
static int _OnEditHMSPrescriptionGroupDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupDialog*)pWnd)->OnEditHMSPrescriptionGroupDialog();
} 
static int _OnDeleteHMSPrescriptionGroupDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupDialog*)pWnd)->OnDeleteHMSPrescriptionGroupDialog();
} 
static int _OnSaveHMSPrescriptionGroupDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupDialog*)pWnd)->OnSaveHMSPrescriptionGroupDialog();
} 
static int _OnCancelHMSPrescriptionGroupDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupDialog*)pWnd)->OnCancelHMSPrescriptionGroupDialog();
} 
CHMSPrescriptionGroupDialog::CHMSPrescriptionGroupDialog(){

	m_nDlgWidth = 505;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CHMSPrescriptionGroupDialog::~CHMSPrescriptionGroupDialog(){
}
void CHMSPrescriptionGroupDialog::OnCreateComponents(){
	m_wndPrescriptionGroup.Create(this, _T("Prescription Group"), 5, 5, 500, 120);
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 90, 55);
	m_wndName.Create(this,95, 30, 345, 55); 
	m_wndDiseaseLabel.Create(this, _T("Disease"), 10, 60, 90, 85);
	m_wndDisease.Create(this,95, 60, 495, 85); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 90, 90, 115);
	m_wndNote.Create(this,95, 90, 495, 115); 
	m_wndSave.Create(this, _T("&Save"), 345, 125, 420, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 425, 125, 500, 150);

}
void CHMSPrescriptionGroupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndDisease.SetCheckValue(true);
	m_wndDisease.LimitText(254);
	m_wndNote.SetLimitText(128);
	m_wndNote.SetCheckValue(true);


	m_wndDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDisease.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_hms_pharma_groupTbl.SetTableName(_T("hms_pharma_group"));
	m_hms_pharma_groupTbl.AddField(_T("hpg_id"), dfLong); 
	m_hms_pharma_groupTbl.AddField(_T("hpg_name"), dfText, 81); 
	m_hms_pharma_groupTbl.AddField(_T("hpg_deptid"), dfText, 7); 
	m_hms_pharma_groupTbl.AddField(_T("hpg_roomid"), dfLong); 
	m_hms_pharma_groupTbl.AddField(_T("hpg_icd10"), dfText, 15); 
	m_hms_pharma_groupTbl.AddField(_T("hpg_note"), dfText, 128); 

}
void CHMSPrescriptionGroupDialog::OnSetWindowEvents(){
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndDisease.SetEvent(WE_SELENDOK, _OnDiseaseSelendokFnc);
	//m_wndDisease.SetEvent(WE_SETFOCUS, _OnDiseaseSetfocusFnc);
	//m_wndDisease.SetEvent(WE_KILLFOCUS, _OnDiseaseKillfocusFnc);
	m_wndDisease.SetEvent(WE_SELCHANGE, _OnDiseaseSelectChangeFnc);
	m_wndDisease.SetEvent(WE_LOADDATA, _OnDiseaseLoadDataFnc);
	//m_wndDisease.SetEvent(WE_ADDNEW, _OnDiseaseAddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSPrescriptionGroupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndDisease.GetDlgCtrlID(), m_szDiseaseKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSPrescriptionGroupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpg_name"), m_szName);
	rs.GetValue(_T("hpg_icd10"), m_szDiseaseKey);
	rs.GetValue(_T("hpg_note"), m_szNote);

}
void CHMSPrescriptionGroupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pharma_groupTbl.SetValue(_T("hpg_name"), m_szName);
	m_hms_pharma_groupTbl.SetValue(_T("hpg_icd10"), m_szDiseaseKey);
	m_hms_pharma_groupTbl.SetValue(_T("hpg_note"), m_szNote);

}
void CHMSPrescriptionGroupDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szDiseaseKey.Empty();
	m_szNote.Empty();

}
int CHMSPrescriptionGroupDialog::SetMode(int nMode){ 
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
/*void CHMSPrescriptionGroupDialog::OnNameChange(){
	
} */
/*void CHMSPrescriptionGroupDialog::OnNameSetfocus(){
	
} */
/*void CHMSPrescriptionGroupDialog::OnNameKillfocus(){
	
} */
int CHMSPrescriptionGroupDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSPrescriptionGroupDialog::OnDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionGroupDialog::OnDiseaseSelendok(){
	 
}
/*void CHMSPrescriptionGroupDialog::OnDiseaseSetfocus(){
	
}*/
/*void CHMSPrescriptionGroupDialog::OnDiseaseKillfocus(){
	
}*/
long CHMSPrescriptionGroupDialog::OnDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDisease.IsSearchKey() && !m_szDiseaseKey.IsEmpty()){
	};
	m_wndDisease.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionGroupDialog::OnDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionGroupDialog::OnNoteChange(){
	
} */
/*void CHMSPrescriptionGroupDialog::OnNoteSetfocus(){
	
} */
/*void CHMSPrescriptionGroupDialog::OnNoteKillfocus(){
	
} */
int CHMSPrescriptionGroupDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSPrescriptionGroupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionGroupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionGroupDialog::OnAddHMSPrescriptionGroupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPrescriptionGroupDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPrescriptionGroupDialog::OnEditHMSPrescriptionGroupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPrescriptionGroupDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSPrescriptionGroupDialog::OnDeleteHMSPrescriptionGroupDialog(){
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
 		OnCancelHMSPrescriptionGroupDialog(); 
 	}
return 0;
 } 
int CHMSPrescriptionGroupDialog::OnSaveHMSPrescriptionGroupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_pharma_groupTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_pharma_groupTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSPrescriptionGroupDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPrescriptionGroupDialog::OnCancelHMSPrescriptionGroupDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSPrescriptionGroupDialog::OnHMSPrescriptionGroupDialogListLoadData(){
	return 0;
}
