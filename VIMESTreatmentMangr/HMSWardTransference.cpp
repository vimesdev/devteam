#include "HMSWardTransference.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSWardTransference *pVw = (CHMSWardTransference *)pWnd;
	return pVw->OnUpdateSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSWardTransference *pVw = (CHMSWardTransference *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSWardTransference *pVw = (CHMSWardTransference *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSWardTransference* )pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnResultSelendokFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnResultSelendok();
}
/*static int _OnResultSetfocusFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnResultKillfocus();
}*/
/*static int _OnResultKillfocusFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnResultKillfocus();
}*/
static int _OnResultLoadDataFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnResultLoadData();
}
/*static int _OnResultAddNewFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnResultAddNew();
}*/
/*static int _OnOutDateChangeFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnOutDateChange();
} */
/*static int _OnOutDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnOutDateKillfocus();} */ 
/*static int _OnOutDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnOutDateKillfocus();
} */
static int _OnOutDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnOutDateCheckValue();
} 
static int _OnMainDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSWardTransference* )pWnd)->OnMainDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnMainDiseaseSelendokFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnMainDiseaseSelendok();
}
/*static int _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnMainDiseaseKillfocus();
}*/
/*static int _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnMainDiseaseKillfocus();
}*/
static int _OnMainDiseaseLoadDataFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnMainDiseaseLoadData();
}
/*static int _OnMainDiseaseAddNewFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnMainDiseaseAddNew();
}*/
/*static int _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnRelationDiseaseChange();
} */
/*static int _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnRelationDiseaseKillfocus();} */ 
/*static int _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnRelationDiseaseCheckValue();
} 
static int _OnDiseaseAccompaniedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSWardTransference* )pWnd)->OnDiseaseAccompaniedSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDiseaseAccompaniedSelendokFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnDiseaseAccompaniedSelendok();
}
/*static int _OnDiseaseAccompaniedSetfocusFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnDiseaseAccompaniedKillfocus();
}*/
/*static int _OnDiseaseAccompaniedKillfocusFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnDiseaseAccompaniedKillfocus();
}*/
static int _OnDiseaseAccompaniedLoadDataFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnDiseaseAccompaniedLoadData();
}
/*static int _OnDiseaseAccompaniedAddNewFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnDiseaseAccompaniedAddNew();
}*/
/*static int _OnPatientStatusChangeFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnPatientStatusChange();
} */
/*static int _OnPatientStatusSetfocusFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnPatientStatusKillfocus();} */ 
/*static int _OnPatientStatusKillfocusFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnPatientStatusKillfocus();
} */
static int _OnPatientStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnPatientStatusCheckValue();
} 
/*static int _OnTotalDateOfTreatmentChangeFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnTotalDateOfTreatmentChange();
} */
/*static int _OnTotalDateOfTreatmentSetfocusFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnTotalDateOfTreatmentKillfocus();} */ 
/*static int _OnTotalDateOfTreatmentKillfocusFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnTotalDateOfTreatmentKillfocus();
} */
static int _OnTotalDateOfTreatmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardTransference *)pWnd)->OnTotalDateOfTreatmentCheckValue();
} 
static int _OnWardNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSWardTransference* )pWnd)->OnWardNameSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnWardNameSelendokFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnWardNameSelendok();
}
/*static int _OnWardNameSetfocusFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnWardNameKillfocus();
}*/
/*static int _OnWardNameKillfocusFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnWardNameKillfocus();
}*/
static int _OnWardNameLoadDataFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnWardNameLoadData();
}
/*static int _OnWardNameAddNewFnc(CWnd *pWnd){
	 return ((CHMSWardTransference *)pWnd)->OnWardNameAddNew();
}*/
static int _OnAddHMSWardTransferenceFnc(CWnd *pWnd){
	 return ((CHMSWardTransference*)pWnd)->OnAddHMSWardTransference();
} 
static int _OnEditHMSWardTransferenceFnc(CWnd *pWnd){
	 return ((CHMSWardTransference*)pWnd)->OnEditHMSWardTransference();
} 
static int _OnDeleteHMSWardTransferenceFnc(CWnd *pWnd){
	 return ((CHMSWardTransference*)pWnd)->OnDeleteHMSWardTransference();
} 
static int _OnSaveHMSWardTransferenceFnc(CWnd *pWnd){
	 return ((CHMSWardTransference*)pWnd)->OnSaveHMSWardTransference();
} 
static int _OnCancelHMSWardTransferenceFnc(CWnd *pWnd){
	 return ((CHMSWardTransference*)pWnd)->OnCancelHMSWardTransference();
} 
CHMSWardTransference::CHMSWardTransference(){

	m_nDlgWidth = 612;
	m_nDlgHeight = 441;
	SetDefaultValues();
}
CHMSWardTransference::~CHMSWardTransference(){
}
void CHMSWardTransference::OnCreateComponents(){
	m_wndWardTransferenceInfo.Create(this, _T("Ward Transference Information"), 7, 5, 600, 28);
	m_wndUpdate.Create(this, _T("&Update"), 387, 195, 452, 217);
	m_wndSave.Create(this, _T("&Save"), 457, 195, 522, 217);
	m_wndCancel.Create(this, _T("&Cancel"), 527, 195, 592, 217);
	m_wndResultLabel.Create(this, _T("Result"), 7, 33, 114, 53);
	m_wndResult.Create(this,119, 33, 281, 53); 
	m_wndOutDateLabel.Create(this, _T("Out Date"), 286, 33, 330, 53);
	m_wndOutDate.Create(this,335, 33, 435, 53); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 7, 83, 114, 103);
	m_wndMainDisease.Create(this,119, 83, 591, 103); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 7, 133, 114, 153);
	m_wndRelationDisease.Create(this,119, 133, 591, 153); 
	m_wndDiseaseAccompaniedLabel.Create(this, _T("Disease Accompanied"), 7, 108, 114, 128);
	m_wndDiseaseAccompanied.Create(this,119, 108, 591, 128); 
	m_wndPatientStatusLabel.Create(this, _T("Patient Status"), 6, 158, 113, 178);
	m_wndPatientStatus.Create(this,118, 158, 280, 178); 
	m_wndTotalDateOfTreatmentLabel.Create(this, _T("Total Date Of Treatment"), 285, 158, 405, 178);
	m_wndTotalDateOfTreatment.Create(this,410, 158, 485, 178); 
	m_wndWardNameLabel.Create(this, _T("Ward Name"), 7, 58, 114, 78);
	m_wndWardName.Create(this,119, 58, 435, 78); 

}
void CHMSWardTransference::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(1024);
//	m_wndOutDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndOutDate.SetCheckValue(true);
	m_wndMainDisease.SetCheckValue(true);
	m_wndMainDisease.LimitText(1024);
	m_wndRelationDisease.SetLimitText(1024);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndDiseaseAccompanied.SetCheckValue(true);
	m_wndDiseaseAccompanied.LimitText(1024);
	m_wndPatientStatus.SetLimitText(1024);
	m_wndPatientStatus.SetCheckValue(true);
	m_wndTotalDateOfTreatment.SetLimitText(1024);
	m_wndTotalDateOfTreatment.SetCheckValue(true);
	m_wndWardName.SetCheckValue(true);
	m_wndWardName.LimitText(1024);


	m_wndResult.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndResult.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMainDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndMainDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDiseaseAccompanied.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDiseaseAccompanied.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndWardName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndWardName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSWardTransference::OnSetWindowEvents(){
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndResult.SetEvent(WE_SELENDOK, _OnResultSelendokFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_SELCHANGE, _OnResultSelectChangeFnc);
	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);
	//m_wndResult.SetEvent(WE_ADDNEW, _OnResultAddNewFnc);
	//m_wndOutDate.SetEvent(WE_CHANGE, _OnOutDateChangeFnc);
	//m_wndOutDate.SetEvent(WE_SETFOCUS, _OnOutDateSetfocusFnc);
	//m_wndOutDate.SetEvent(WE_KILLFOCUS, _OnOutDateKillfocusFnc);
	m_wndOutDate.SetEvent(WE_CHECKVALUE, _OnOutDateCheckValueFnc);
	m_wndMainDisease.SetEvent(WE_SELENDOK, _OnMainDiseaseSelendokFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_SELCHANGE, _OnMainDiseaseSelectChangeFnc);
	m_wndMainDisease.SetEvent(WE_LOADDATA, _OnMainDiseaseLoadDataFnc);
	//m_wndMainDisease.SetEvent(WE_ADDNEW, _OnMainDiseaseAddNewFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	m_wndDiseaseAccompanied.SetEvent(WE_SELENDOK, _OnDiseaseAccompaniedSelendokFnc);
	//m_wndDiseaseAccompanied.SetEvent(WE_SETFOCUS, _OnDiseaseAccompaniedSetfocusFnc);
	//m_wndDiseaseAccompanied.SetEvent(WE_KILLFOCUS, _OnDiseaseAccompaniedKillfocusFnc);
	m_wndDiseaseAccompanied.SetEvent(WE_SELCHANGE, _OnDiseaseAccompaniedSelectChangeFnc);
	m_wndDiseaseAccompanied.SetEvent(WE_LOADDATA, _OnDiseaseAccompaniedLoadDataFnc);
	//m_wndDiseaseAccompanied.SetEvent(WE_ADDNEW, _OnDiseaseAccompaniedAddNewFnc);
	//m_wndPatientStatus.SetEvent(WE_CHANGE, _OnPatientStatusChangeFnc);
	//m_wndPatientStatus.SetEvent(WE_SETFOCUS, _OnPatientStatusSetfocusFnc);
	//m_wndPatientStatus.SetEvent(WE_KILLFOCUS, _OnPatientStatusKillfocusFnc);
	m_wndPatientStatus.SetEvent(WE_CHECKVALUE, _OnPatientStatusCheckValueFnc);
	//m_wndTotalDateOfTreatment.SetEvent(WE_CHANGE, _OnTotalDateOfTreatmentChangeFnc);
	//m_wndTotalDateOfTreatment.SetEvent(WE_SETFOCUS, _OnTotalDateOfTreatmentSetfocusFnc);
	//m_wndTotalDateOfTreatment.SetEvent(WE_KILLFOCUS, _OnTotalDateOfTreatmentKillfocusFnc);
	m_wndTotalDateOfTreatment.SetEvent(WE_CHECKVALUE, _OnTotalDateOfTreatmentCheckValueFnc);
	m_wndWardName.SetEvent(WE_SELENDOK, _OnWardNameSelendokFnc);
	//m_wndWardName.SetEvent(WE_SETFOCUS, _OnWardNameSetfocusFnc);
	//m_wndWardName.SetEvent(WE_KILLFOCUS, _OnWardNameKillfocusFnc);
	m_wndWardName.SetEvent(WE_SELCHANGE, _OnWardNameSelectChangeFnc);
	m_wndWardName.SetEvent(WE_LOADDATA, _OnWardNameLoadDataFnc);
	//m_wndWardName.SetEvent(WE_ADDNEW, _OnWardNameAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSWardTransferenceFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSWardTransferenceFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSWardTransferenceFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSWardTransferenceFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSWardTransferenceFnc, 0, 'T', VK_CONTROL);

}
void CHMSWardTransference::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_TextEx(pDX, m_wndOutDate.GetDlgCtrlID(), m_szOutDate);
	DDX_TextEx(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDiseaseKey);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_TextEx(pDX, m_wndDiseaseAccompanied.GetDlgCtrlID(), m_szDiseaseAccompaniedKey);
	DDX_Text(pDX, m_wndPatientStatus.GetDlgCtrlID(), m_szPatientStatus);
	DDX_Text(pDX, m_wndTotalDateOfTreatment.GetDlgCtrlID(), m_nTotalDateOfTreatment);
	DDX_TextEx(pDX, m_wndWardName.GetDlgCtrlID(), m_szWardNameKey);

}
void CHMSWardTransference::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSWardTransference::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSWardTransference::SetDefaultValues(){

	m_szResultKey.Empty();
	m_szOutDate.Empty();
	m_szMainDiseaseKey.Empty();
	m_szRelationDisease.Empty();
	m_szDiseaseAccompaniedKey.Empty();
	m_szPatientStatus.Empty();
	m_nTotalDateOfTreatment=0;
	m_szWardNameKey.Empty();

}
int CHMSWardTransference::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardTransference::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardTransference::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardTransference::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardTransference::OnResultSelendok(){
	 return 0;
}
/*int CHMSWardTransference::OnResultSetfocus(){
	 return 0;
}*/
/*int CHMSWardTransference::OnResultKillfocus(){
	 return 0;
}*/
int CHMSWardTransference::OnResultLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResult.IsSearchKey()){
	};
	m_wndResult.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResult.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSWardTransference::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSWardTransference::OnOutDateChange(){
	return 0;
} */
/*int CHMSWardTransference::OnOutDateSetfocus(){
	return 0;
} */
/*int CHMSWardTransference::OnOutDateKillfocus(){
	return 0;
} */
int CHMSWardTransference::OnOutDateCheckValue(){
	return 0;
} 
int CHMSWardTransference::OnMainDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardTransference::OnMainDiseaseSelendok(){
	 return 0;
}
/*int CHMSWardTransference::OnMainDiseaseSetfocus(){
	 return 0;
}*/
/*int CHMSWardTransference::OnMainDiseaseKillfocus(){
	 return 0;
}*/
int CHMSWardTransference::OnMainDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMainDisease.IsSearchKey()){
	};
	m_wndMainDisease.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMainDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSWardTransference::OnMainDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSWardTransference::OnRelationDiseaseChange(){
	return 0;
} */
/*int CHMSWardTransference::OnRelationDiseaseSetfocus(){
	return 0;
} */
/*int CHMSWardTransference::OnRelationDiseaseKillfocus(){
	return 0;
} */
int CHMSWardTransference::OnRelationDiseaseCheckValue(){
	return 0;
} 
int CHMSWardTransference::OnDiseaseAccompaniedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardTransference::OnDiseaseAccompaniedSelendok(){
	 return 0;
}
/*int CHMSWardTransference::OnDiseaseAccompaniedSetfocus(){
	 return 0;
}*/
/*int CHMSWardTransference::OnDiseaseAccompaniedKillfocus(){
	 return 0;
}*/
int CHMSWardTransference::OnDiseaseAccompaniedLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiseaseAccompanied.IsSearchKey()){
	};
	m_wndDiseaseAccompanied.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiseaseAccompanied.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSWardTransference::OnDiseaseAccompaniedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSWardTransference::OnPatientStatusChange(){
	return 0;
} */
/*int CHMSWardTransference::OnPatientStatusSetfocus(){
	return 0;
} */
/*int CHMSWardTransference::OnPatientStatusKillfocus(){
	return 0;
} */
int CHMSWardTransference::OnPatientStatusCheckValue(){
	return 0;
} 
/*int CHMSWardTransference::OnTotalDateOfTreatmentChange(){
	return 0;
} */
/*int CHMSWardTransference::OnTotalDateOfTreatmentSetfocus(){
	return 0;
} */
/*int CHMSWardTransference::OnTotalDateOfTreatmentKillfocus(){
	return 0;
} */
int CHMSWardTransference::OnTotalDateOfTreatmentCheckValue(){
	return 0;
} 
int CHMSWardTransference::OnWardNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardTransference::OnWardNameSelendok(){
	 return 0;
}
/*int CHMSWardTransference::OnWardNameSetfocus(){
	 return 0;
}*/
/*int CHMSWardTransference::OnWardNameKillfocus(){
	 return 0;
}*/
int CHMSWardTransference::OnWardNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWardName.IsSearchKey()){
	};
	m_wndWardName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWardName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSWardTransference::OnWardNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSWardTransference::OnAddHMSWardTransference(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSWardTransference"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSWardTransference::OnEditHMSWardTransference(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSWardTransference"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSWardTransference::OnDeleteHMSWardTransference(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSWardTransference(); 
 		OnHMSWardTransferenceLoadData(); 
 	} */ return 0;
 } 
int CHMSWardTransference::OnSaveHMSWardTransference(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_VIMES_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_VIMES_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("HMSWardTransference"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?Ä?kListLoadData(); 
 		EnableButtons(FALSE, 3, 4, -1); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	*/ 	return 0; 
}
int CHMSWardTransference::OnCancelHMSWardTransference(){ /* 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 		EnableButtons(FALSE, 3, 4, -1); 
 	} 
 	else 
 	{ 
 		SetDefaultValues(); 
 		SetMode(VM_NONE); 
 		UpdateData(FALSE); 
 		EnableButtons(FALSE, 1, 2, 3, 4, -1); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	*/ 
 	return 0;
} 
