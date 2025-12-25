#include "Test.h"
#include "MainFrm.h"
/*static void _OnSurNameChangeFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnSurNameChange();
} */
/*static void _OnSurNameSetfocusFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnSurNameSetfocus();} */ 
/*static void _OnSurNameKillfocusFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnSurNameKillfocus();
} */
static int _OnSurNameCheckValueFnc(CWnd *pWnd){
	return ((CTest *)pWnd)->OnSurNameCheckValue();
} 
/*static void _OnMidNameChangeFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnMidNameChange();
} */
/*static void _OnMidNameSetfocusFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnMidNameSetfocus();} */ 
/*static void _OnMidNameKillfocusFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnMidNameKillfocus();
} */
static int _OnMidNameCheckValueFnc(CWnd *pWnd){
	return ((CTest *)pWnd)->OnMidNameCheckValue();
} 
/*static void _OnFirstNameChangeFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnFirstNameChange();
} */
/*static void _OnFirstNameSetfocusFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnFirstNameSetfocus();} */ 
/*static void _OnFirstNameKillfocusFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnFirstNameKillfocus();
} */
static int _OnFirstNameCheckValueFnc(CWnd *pWnd){
	return ((CTest *)pWnd)->OnFirstNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CTest *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTest* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CTest *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CTest *)pWnd)->OnSexAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTest *pVw = (CTest *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTest *pVw = (CTest *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddTestFnc(CWnd *pWnd){
	 return ((CTest*)pWnd)->OnAddTest();
} 
static int _OnEditTestFnc(CWnd *pWnd){
	 return ((CTest*)pWnd)->OnEditTest();
} 
static int _OnDeleteTestFnc(CWnd *pWnd){
	 return ((CTest*)pWnd)->OnDeleteTest();
} 
static int _OnSaveTestFnc(CWnd *pWnd){
	 return ((CTest*)pWnd)->OnSaveTest();
} 
static int _OnCancelTestFnc(CWnd *pWnd){
	 return ((CTest*)pWnd)->OnCancelTest();
} 
CTest::CTest(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 600;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CTest::~CTest(){
}
void CTest::OnCreateComponents(){
	m_wndSurNameLabel.Create(this, _T("Sur Name"), 5, 5, 85, 30);
	m_wndSurName.Create(this,85, 5, 212, 30); 
	m_wndMidNameLabel.Create(this, _T("Mid Name"), 5, 31, 85, 56);
	m_wndMidName.Create(this,85, 31, 212, 56); 
	m_wndFirstNameLabel.Create(this, _T("First Name"), 5, 57, 85, 82);
	m_wndFirstName.Create(this,85, 57, 212, 82); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 5, 83, 85, 108);
	m_wndBirthDate.Create(this,85, 83, 212, 108); 
	m_wndSexLabel.Create(this, _T("Sex"), 5, 109, 85, 134);
	m_wndSex.Create(this,85, 109, 212, 134); 
	m_wndSave.Create(this, _T("Save"), 63, 143, 138, 168);
	m_wndClose.Create(this, _T("&Close"), 145, 144, 220, 169);

}
void CTest::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSurName.SetLimitText(15);
	m_wndSurName.SetCheckValue(true);
	m_wndMidName.SetLimitText(45);
	m_wndMidName.SetCheckValue(true);
	m_wndFirstName.SetLimitText(15);
	m_wndFirstName.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSex.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_hms_patientTbl.SetTableName(_T("hms_patient"));
	m_hms_patientTbl.AddField(_T("hp_createdby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_createddate"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("hp_updatedby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_updateddate"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("hp_patientno"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_patientid"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_surname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_midname"), dfText, 45); 
	m_hms_patientTbl.AddField(_T("hp_firstname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_birthdate"), dfDate); 
	m_hms_patientTbl.AddField(_T("hp_sex"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("hp_ethnic"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_religion"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_sin"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("hp_provid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_distid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_villid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_dtladdr"), dfText, 254); 
	m_hms_patientTbl.AddField(_T("hp_occupation"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_workplaceid"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("hp_workplace"), dfText, 254); 
	m_hms_patientTbl.AddField(_T("hp_rank"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_position"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_status"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("hp_type"), dfText, 1); 

}
void CTest::OnSetWindowEvents(){
	//m_wndSurName.SetEvent(WE_CHANGE, _OnSurNameChangeFnc);
	//m_wndSurName.SetEvent(WE_SETFOCUS, _OnSurNameSetfocusFnc);
	//m_wndSurName.SetEvent(WE_KILLFOCUS, _OnSurNameKillfocusFnc);
	m_wndSurName.SetEvent(WE_CHECKVALUE, _OnSurNameCheckValueFnc);
	//m_wndMidName.SetEvent(WE_CHANGE, _OnMidNameChangeFnc);
	//m_wndMidName.SetEvent(WE_SETFOCUS, _OnMidNameSetfocusFnc);
	//m_wndMidName.SetEvent(WE_KILLFOCUS, _OnMidNameKillfocusFnc);
	m_wndMidName.SetEvent(WE_CHECKVALUE, _OnMidNameCheckValueFnc);
	//m_wndFirstName.SetEvent(WE_CHANGE, _OnFirstNameChangeFnc);
	//m_wndFirstName.SetEvent(WE_SETFOCUS, _OnFirstNameSetfocusFnc);
	//m_wndFirstName.SetEvent(WE_KILLFOCUS, _OnFirstNameKillfocusFnc);
	m_wndFirstName.SetEvent(WE_CHECKVALUE, _OnFirstNameCheckValueFnc);
	//m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
	//m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
	//m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
	m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CTest::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSurName.GetDlgCtrlID(), m_szSurName);
	DDX_Text(pDX, m_wndMidName.GetDlgCtrlID(), m_szMidName);
	DDX_Text(pDX, m_wndFirstName.GetDlgCtrlID(), m_szFirstName);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);

}
void CTest::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hp_surname"), m_szSurName);
	rs.GetValue(_T("hp_midname"), m_szMidName);
	rs.GetValue(_T("hp_firstname"), m_szFirstName);
	rs.GetValue(_T("hp_birthdate"), m_szBirthDate);
	rs.GetValue(_T("hp_sex"), m_szSexKey);

}
void CTest::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_patientTbl.SetValue(_T("hp_createdby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_createddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_surname"), m_szSurName);
	m_hms_patientTbl.SetValue(_T("hp_midname"), m_szMidName);
	m_hms_patientTbl.SetValue(_T("hp_firstname"), m_szFirstName);
	m_hms_patientTbl.SetValue(_T("hp_birthdate"), m_szBirthDate);
	m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSexKey);

}
void CTest::SetDefaultValues(){

	m_szSurName.Empty();
	m_szMidName.Empty();
	m_szFirstName.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();

}
int CTest::SetMode(int nMode){
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
/*void CTest::OnSurNameChange(){
	
} */
/*void CTest::OnSurNameSetfocus(){
	
} */
/*void CTest::OnSurNameKillfocus(){
	
} */
int CTest::OnSurNameCheckValue(){
	return 0;
} 
/*void CTest::OnMidNameChange(){
	
} */
/*void CTest::OnMidNameSetfocus(){
	
} */
/*void CTest::OnMidNameKillfocus(){
	
} */
int CTest::OnMidNameCheckValue(){
	return 0;
} 
/*void CTest::OnFirstNameChange(){
	
} */
/*void CTest::OnFirstNameSetfocus(){
	
} */
/*void CTest::OnFirstNameKillfocus(){
	
} */
int CTest::OnFirstNameCheckValue(){
	return 0;
} 
/*void CTest::OnBirthDateChange(){
	
} */
/*void CTest::OnBirthDateSetfocus(){
	
} */
/*void CTest::OnBirthDateKillfocus(){
	
} */
int CTest::OnBirthDateCheckValue(){
	return 0;
} 
void CTest::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTest::OnSexSelendok(){
	 
}
/*void CTest::OnSexSetfocus(){
	
}*/
/*void CTest::OnSexKillfocus(){
	
}*/
long CTest::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
	};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CTest::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTest::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTest::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTest::OnAddTest(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTest::OnEditTest(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTest::OnDeleteTest(){
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
 		OnCancelTest(); 
 	}
	return 0;
}
int CTest::OnSaveTest(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_patientTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_patientTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnTestListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CTest::OnCancelTest(){
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
int CTest::OnTestListLoadData(){
	return 0;
}
