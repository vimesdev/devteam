#include "HMSReturnHomeInput.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnOutDateChangeFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnOutDateChange();
} */
/*static void _OnOutDateSetfocusFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnOutDateSetfocus();} */ 
/*static void _OnOutDateKillfocusFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnOutDateKillfocus();
} */
static int _OnOutDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnHomeInput *)pWnd)->OnOutDateCheckValue();
} 
static void _OnICD10SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSReturnHomeInput* )pWnd)->OnICD10SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICD10SelendokFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnICD10Selendok();
}
/*static void _OnICD10SetfocusFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnICD10Killfocus();
}*/
/*static void _OnICD10KillfocusFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnICD10Killfocus();
}*/
static long _OnICD10LoadDataFnc(CWnd *pWnd){
	return ((CHMSReturnHomeInput *)pWnd)->OnICD10LoadData();
}
/*static void _OnICD10AddNewFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnICD10AddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnHomeInput *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnHomeInput *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSReturnHomeInput *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnHomeInput *)pWnd)->OnConclusionCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSReturnHomeInput *pVw = (CHMSReturnHomeInput *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSReturnHomeInput *pVw = (CHMSReturnHomeInput *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSReturnHomeInput *pVw = (CHMSReturnHomeInput *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSReturnHomeInput *pVw = (CHMSReturnHomeInput *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSReturnHomeInputFnc(CWnd *pWnd){
	 return ((CHMSReturnHomeInput*)pWnd)->OnAddHMSReturnHomeInput();
} 
static int _OnEditHMSReturnHomeInputFnc(CWnd *pWnd){
	 return ((CHMSReturnHomeInput*)pWnd)->OnEditHMSReturnHomeInput();
} 
static int _OnDeleteHMSReturnHomeInputFnc(CWnd *pWnd){
	 return ((CHMSReturnHomeInput*)pWnd)->OnDeleteHMSReturnHomeInput();
} 
static int _OnSaveHMSReturnHomeInputFnc(CWnd *pWnd){
	 return ((CHMSReturnHomeInput*)pWnd)->OnSaveHMSReturnHomeInput();
} 
static int _OnCancelHMSReturnHomeInputFnc(CWnd *pWnd){
	 return ((CHMSReturnHomeInput*)pWnd)->OnCancelHMSReturnHomeInput();
} 
CHMSReturnHomeInput::CHMSReturnHomeInput(){

	m_nDlgWidth = 912;
	m_nDlgHeight = 611;
	SetDefaultValues();
}
CHMSReturnHomeInput::~CHMSReturnHomeInput(){
}
void CHMSReturnHomeInput::OnCreateComponents(){
	m_wndDischargeInformation.Create(this, _T("Discharge Information"), 5, 5, 640, 230);
	m_wndOutDateLabel.Create(this, _T("Out Date"), 10, 30, 130, 55);
	m_wndOutDate.Create(this,135, 30, 260, 55); 
	m_wndICD10Label.Create(this, _T("ICD10"), 10, 60, 130, 85);
	m_wndICD10.Create(this,135, 60, 635, 85); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 90, 130, 115);
	m_wndMainDisease.Create(this,135, 90, 635, 115); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 120, 130, 145);
	m_wndRelationDisease.Create(this,135, 120, 635, 145); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 150, 130, 175);
	m_wndConclusion.Create(this,135, 150, 635, 225); 
	m_wndUpdate.Create(this, _T("&Update"), 325, 235, 400, 260);
	m_wndSave.Create(this, _T("&Save"), 405, 235, 480, 260);
	m_wndCancel.Create(this, _T("&Cancel"), 485, 235, 560, 260);
	m_wndPrint.Create(this, _T("&Print"), 565, 235, 640, 260);

}
void CHMSReturnHomeInput::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOutDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOutDate.SetCheckValue(true);
	m_wndICD10.SetCheckValue(true);
	m_wndICD10.LimitText(35);
	m_wndMainDisease.SetLimitText(35);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(35);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);


	m_wndICD10.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICD10.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSReturnHomeInput::OnSetWindowEvents(){
	//m_wndOutDate.SetEvent(WE_CHANGE, _OnOutDateChangeFnc);
	//m_wndOutDate.SetEvent(WE_SETFOCUS, _OnOutDateSetfocusFnc);
	//m_wndOutDate.SetEvent(WE_KILLFOCUS, _OnOutDateKillfocusFnc);
	m_wndOutDate.SetEvent(WE_CHECKVALUE, _OnOutDateCheckValueFnc);
	m_wndICD10.SetEvent(WE_SELENDOK, _OnICD10SelendokFnc);
	//m_wndICD10.SetEvent(WE_SETFOCUS, _OnICD10SetfocusFnc);
	//m_wndICD10.SetEvent(WE_KILLFOCUS, _OnICD10KillfocusFnc);
	m_wndICD10.SetEvent(WE_SELCHANGE, _OnICD10SelectChangeFnc);
	m_wndICD10.SetEvent(WE_LOADDATA, _OnICD10LoadDataFnc);
	//m_wndICD10.SetEvent(WE_ADDNEW, _OnICD10AddNewFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSReturnHomeInputFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSReturnHomeInputFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSReturnHomeInputFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSReturnHomeInputFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSReturnHomeInputFnc, 0, 'T', VK_CONTROL);

}
void CHMSReturnHomeInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOutDate.GetDlgCtrlID(), m_szOutDate);
	DDX_TextEx(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10Key);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);

}
void CHMSReturnHomeInput::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSReturnHomeInput::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSReturnHomeInput::SetDefaultValues(){

	m_szOutDate.Empty();
	m_szICD10Key.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_szConclusion.Empty();

}
int CHMSReturnHomeInput::SetMode(int nMode){ 
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
/*void CHMSReturnHomeInput::OnOutDateChange(){
	
} */
/*void CHMSReturnHomeInput::OnOutDateSetfocus(){
	
} */
/*void CHMSReturnHomeInput::OnOutDateKillfocus(){
	
} */
int CHMSReturnHomeInput::OnOutDateCheckValue(){
	return 0;
} 
void CHMSReturnHomeInput::OnICD10SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSReturnHomeInput::OnICD10Selendok(){
	 
}
/*void CHMSReturnHomeInput::OnICD10Setfocus(){
	
}*/
/*void CHMSReturnHomeInput::OnICD10Killfocus(){
	
}*/
long CHMSReturnHomeInput::OnICD10LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD10.IsSearchKey() && !m_szICD10Key.IsEmpty()){
	};
	m_wndICD10.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD10.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSReturnHomeInput::OnICD10AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSReturnHomeInput::OnMainDiseaseChange(){
	
} */
/*void CHMSReturnHomeInput::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSReturnHomeInput::OnMainDiseaseKillfocus(){
	
} */
int CHMSReturnHomeInput::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSReturnHomeInput::OnRelationDiseaseChange(){
	
} */
/*void CHMSReturnHomeInput::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSReturnHomeInput::OnRelationDiseaseKillfocus(){
	
} */
int CHMSReturnHomeInput::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSReturnHomeInput::OnConclusionChange(){
	
} */
/*void CHMSReturnHomeInput::OnConclusionSetfocus(){
	
} */
/*void CHMSReturnHomeInput::OnConclusionKillfocus(){
	
} */
int CHMSReturnHomeInput::OnConclusionCheckValue(){
	return 0;
} 
void CHMSReturnHomeInput::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSReturnHomeInput::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSReturnHomeInput::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSReturnHomeInput::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSReturnHomeInput::OnAddHMSReturnHomeInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSReturnHomeInput"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSReturnHomeInput::OnEditHMSReturnHomeInput(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSReturnHomeInput"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSReturnHomeInput::OnDeleteHMSReturnHomeInput(){
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
 		OnCancelHMSReturnHomeInput(); 
 	}
return 0;
 } 
int CHMSReturnHomeInput::OnSaveHMSReturnHomeInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnHMSReturnHomeInputListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSReturnHomeInput::OnCancelHMSReturnHomeInput(){
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
int CHMSReturnHomeInput::OnHMSReturnHomeInputListLoadData(){
	return 0;
}
