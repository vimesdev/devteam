#include "HMSICD10.h"
#include "MainFrm.h"
static void _OnChapterFillterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSICD10* )pWnd)->OnChapterFillterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChapterFillterSelendokFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnChapterFillterSelendok();
}
/*static void _OnChapterFillterSetfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnChapterFillterKillfocus();
}*/
/*static void _OnChapterFillterKillfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnChapterFillterKillfocus();
}*/
static long _OnChapterFillterLoadDataFnc(CWnd *pWnd){
	return ((CHMSICD10 *)pWnd)->OnChapterFillterLoadData();
}
/*static void _OnChapterFillterAddNewFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnChapterFillterAddNew();
}*/
/*static void _OnNameFillterChangeFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnNameFillterChange();
} */
/*static void _OnNameFillterSetfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnNameFillterSetfocus();} */ 
/*static void _OnNameFillterKillfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnNameFillterKillfocus();
} */
static int _OnNameFillterCheckValueFnc(CWnd *pWnd){
	return ((CHMSICD10 *)pWnd)->OnNameFillterCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSICD10*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSICD10*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSICD10*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSICD10*)pWnd)->OnListDeleteItem();
} 
static void _OnChapterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSICD10* )pWnd)->OnChapterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChapterSelendokFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnChapterSelendok();
}
/*static void _OnChapterSetfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnChapterKillfocus();
}*/
/*static void _OnChapterKillfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnChapterKillfocus();
}*/
static long _OnChapterLoadDataFnc(CWnd *pWnd){
	return ((CHMSICD10 *)pWnd)->OnChapterLoadData();
}
/*static void _OnChapterAddNewFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnChapterAddNew();
}*/
static void _OnChapterButtonSelectFnc(CWnd *pWnd){
	CHMSICD10 *pVw = (CHMSICD10 *)pWnd;
	pVw->OnChapterButtonSelect();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSICD10* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSICD10 *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnGroupAddNew();
}*/
static void _OnGroupButtonSelectFnc(CWnd *pWnd){
	CHMSICD10 *pVw = (CHMSICD10 *)pWnd;
	pVw->OnGroupButtonSelect();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSICD10 *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSICD10 *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSICD10 *)pWnd)->OnNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSICD10 *pVw = (CHMSICD10 *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSICD10 *pVw = (CHMSICD10 *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSICD10 *pVw = (CHMSICD10 *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSICD10 *pVw = (CHMSICD10 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSICD10 *pVw = (CHMSICD10 *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSICD10Fnc(CWnd *pWnd){
	 return ((CHMSICD10*)pWnd)->OnAddHMSICD10();
} 
static int _OnEditHMSICD10Fnc(CWnd *pWnd){
	 return ((CHMSICD10*)pWnd)->OnEditHMSICD10();
} 
static int _OnDeleteHMSICD10Fnc(CWnd *pWnd){
	 return ((CHMSICD10*)pWnd)->OnDeleteHMSICD10();
} 
static int _OnSaveHMSICD10Fnc(CWnd *pWnd){
	 return ((CHMSICD10*)pWnd)->OnSaveHMSICD10();
} 
static int _OnCancelHMSICD10Fnc(CWnd *pWnd){
	 return ((CHMSICD10*)pWnd)->OnCancelHMSICD10();
} 
CHMSICD10::CHMSICD10(){

	m_nDlgWidth = 820;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CHMSICD10::~CHMSICD10(){
}
void CHMSICD10::OnCreateComponents(){
	m_wndICDInformations.Create(this, _T("ICD10 Informations"), 5, 5, 810, 585);
	m_wndChapterFillterLabel.Create(this, _T("&Chapter Fillter"), 10, 30, 90, 55);
	m_wndChapterFillter.Create(this,95, 30, 325, 55); 
	m_wndNameFillterLabel.Create(this, _T("Name Fillter"), 330, 30, 410, 55);
	m_wndNameFillter.Create(this,415, 28, 805, 53); 
	m_wndList.Create(this,10, 60, 805, 520); 
	m_wndChapterLabel.Create(this, _T("Chapter"), 10, 525, 90, 550);
	m_wndChapter.Create(this,95, 525, 380, 550); 
	m_wndChapterButton.Create(this, _T("..."), 385, 525, 407, 550);
	m_wndGroupLabel.Create(this, _T("Group"), 410, 525, 490, 550);
	m_wndGroup.Create(this,495, 525, 775, 550); 
	m_wndGroupButton.Create(this, _T("..."), 782, 525, 805, 550);
	m_wndIDLabel.Create(this, _T("ID"), 10, 555, 90, 580);
	m_wndID.Create(this,95, 555, 205, 580); 
	m_wndNameLabel.Create(this, _T("Name"), 210, 555, 290, 580);
	m_wndName.Create(this,295, 555, 805, 580); 
	m_wndAdd.Create(this, _T("&Add"), 440, 590, 510, 612);
	m_wndEdit.Create(this, _T("&Edit"), 515, 590, 585, 612);
	m_wndDelete.Create(this, _T("&Delete"), 590, 590, 660, 612);
	m_wndSave.Create(this, _T("&Save"), 665, 590, 735, 612);
	m_wndCancel.Create(this, _T("&Cancel"), 740, 590, 810, 612);

}
void CHMSICD10::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndChapterFillter.SetCheckValue(true);
	m_wndChapterFillter.LimitText(35);
	m_wndNameFillter.SetLimitText(35);
	m_wndNameFillter.SetCheckValue(true);
	m_wndChapter.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndID.SetLimitText(13);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);


	m_wndChapterFillter.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndChapterFillter.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Chapter ID"), CFMT_NUMBER, 200);
	m_wndList.InsertColumn(3, _T("Group ID"), CFMT_NUMBER, 200);


	m_wndChapter.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndChapter.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_hms_icd10Tbl.SetTableName(_T("hms_icd10"));
	m_hms_icd10Tbl.AddField(_T("hmsi_createdby"), dfText, 15); 
	m_hms_icd10Tbl.AddField(_T("hmsi_createddate"), dfText, 4); 
	m_hms_icd10Tbl.AddField(_T("hmsi_updatedby"), dfText, 15); 
	m_hms_icd10Tbl.AddField(_T("hmsi_updateddate"), dfText, 4); 
	m_hms_icd10Tbl.AddField(_T("hmsi_icd10"), dfText, 13); 
	m_hms_icd10Tbl.AddField(_T("hmsi_groupid"), dfInteger); 
	m_hms_icd10Tbl.AddField(_T("hmsi_chapterid"), dfInteger); 
	m_hms_icd10Tbl.AddField(_T("hmsi_name"), dfText, 254); 

}
void CHMSICD10::OnSetWindowEvents(){
	m_wndChapterFillter.SetEvent(WE_SELENDOK, _OnChapterFillterSelendokFnc);
	//m_wndChapterFillter.SetEvent(WE_SETFOCUS, _OnChapterFillterSetfocusFnc);
	//m_wndChapterFillter.SetEvent(WE_KILLFOCUS, _OnChapterFillterKillfocusFnc);
	m_wndChapterFillter.SetEvent(WE_SELCHANGE, _OnChapterFillterSelectChangeFnc);
	m_wndChapterFillter.SetEvent(WE_LOADDATA, _OnChapterFillterLoadDataFnc);
	//m_wndChapterFillter.SetEvent(WE_ADDNEW, _OnChapterFillterAddNewFnc);
	//m_wndNameFillter.SetEvent(WE_CHANGE, _OnNameFillterChangeFnc);
	//m_wndNameFillter.SetEvent(WE_SETFOCUS, _OnNameFillterSetfocusFnc);
	//m_wndNameFillter.SetEvent(WE_KILLFOCUS, _OnNameFillterKillfocusFnc);
	m_wndNameFillter.SetEvent(WE_CHECKVALUE, _OnNameFillterCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndChapter.SetEvent(WE_SELENDOK, _OnChapterSelendokFnc);
	//m_wndChapter.SetEvent(WE_SETFOCUS, _OnChapterSetfocusFnc);
	//m_wndChapter.SetEvent(WE_KILLFOCUS, _OnChapterKillfocusFnc);
	m_wndChapter.SetEvent(WE_SELCHANGE, _OnChapterSelectChangeFnc);
	m_wndChapter.SetEvent(WE_LOADDATA, _OnChapterLoadDataFnc);
	//m_wndChapter.SetEvent(WE_ADDNEW, _OnChapterAddNewFnc);
	m_wndChapterButton.SetEvent(WE_CLICK, _OnChapterButtonSelectFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndGroupButton.SetEvent(WE_CLICK, _OnGroupButtonSelectFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSICD10Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSICD10Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSICD10Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSICD10Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSICD10Fnc, 0, 'T', VK_CONTROL);

}
void CHMSICD10::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndChapterFillter.GetDlgCtrlID(), m_szChapterFillterKey);
	DDX_Text(pDX, m_wndNameFillter.GetDlgCtrlID(), m_szNameFillter);
	DDX_TextEx(pDX, m_wndChapter.GetDlgCtrlID(), m_szChapterKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSICD10::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hmsi_icd10"), m_szID);
	rs.GetValue(_T("hmsi_groupid"), m_szGroupKey);
	rs.GetValue(_T("hmsi_chapterid"), m_szChapterKey);
	rs.GetValue(_T("hmsi_name"), m_szName);

}
void CHMSICD10::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_icd10Tbl.SetValue(_T("hmsi_createdby"), pMF->GetCurrentUser());
	m_hms_icd10Tbl.SetValue(_T("hmsi_createddate"), pMF->GetSysDateTime());
	m_hms_icd10Tbl.SetValue(_T("hmsi_updatedby"), pMF->GetCurrentUser());
	m_hms_icd10Tbl.SetValue(_T("hmsi_updateddate"), pMF->GetSysDateTime());
	m_hms_icd10Tbl.SetValue(_T("hmsi_icd10"), m_szID);
	m_hms_icd10Tbl.SetValue(_T("hmsi_groupid"), m_szGroupKey);
	m_hms_icd10Tbl.SetValue(_T("hmsi_chapterid"), m_szChapterKey);
	m_hms_icd10Tbl.SetValue(_T("hmsi_name"), m_szName);

}
void CHMSICD10::SetDefaultValues(){

	m_szChapterFillterKey.Empty();
	m_szNameFillter.Empty();
	m_szChapterKey.Empty();
	m_szGroupKey.Empty();
	m_szID.Empty();
	m_szName.Empty();

}
int CHMSICD10::SetMode(int nMode){
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
void CHMSICD10::OnChapterFillterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSICD10::OnChapterFillterSelendok(){
	 
}
/*void CHMSICD10::OnChapterFillterSetfocus(){
	
}*/
/*void CHMSICD10::OnChapterFillterKillfocus(){
	
}*/
long CHMSICD10::OnChapterFillterLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChapterFillter.IsSearchKey() && !m_szChapterFillterKey.IsEmpty()){
	};
	m_wndChapterFillter.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChapterFillter.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSICD10::OnChapterFillterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSICD10::OnNameFillterChange(){
	
} */
/*void CHMSICD10::OnNameFillterSetfocus(){
	
} */
/*void CHMSICD10::OnNameFillterKillfocus(){
	
} */
int CHMSICD10::OnNameFillterCheckValue(){
	return 0;
} 
void CHMSICD10::OnListDblClick(){
	
} 
void CHMSICD10::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSICD10::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSICD10::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("ChapterID")), 
			rs.GetValue(_T("GroupID")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSICD10::OnChapterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSICD10::OnChapterSelendok(){
	 
}
/*void CHMSICD10::OnChapterSetfocus(){
	
}*/
/*void CHMSICD10::OnChapterKillfocus(){
	
}*/
long CHMSICD10::OnChapterLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChapter.IsSearchKey() && !m_szChapterKey.IsEmpty()){
	};
	m_wndChapter.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChapter.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSICD10::OnChapterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSICD10::OnChapterButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSICD10::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSICD10::OnGroupSelendok(){
	 
}
/*void CHMSICD10::OnGroupSetfocus(){
	
}*/
/*void CHMSICD10::OnGroupKillfocus(){
	
}*/
long CHMSICD10::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSICD10::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSICD10::OnGroupButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSICD10::OnIDChange(){
	
} */
/*void CHMSICD10::OnIDSetfocus(){
	
} */
/*void CHMSICD10::OnIDKillfocus(){
	
} */
int CHMSICD10::OnIDCheckValue(){
	return 0;
} 
/*void CHMSICD10::OnNameChange(){
	
} */
/*void CHMSICD10::OnNameSetfocus(){
	
} */
/*void CHMSICD10::OnNameKillfocus(){
	
} */
int CHMSICD10::OnNameCheckValue(){
	return 0;
} 
void CHMSICD10::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSICD10::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSICD10::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSICD10::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSICD10::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSICD10::OnAddHMSICD10(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSICD10::OnEditHMSICD10(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSICD10::OnDeleteHMSICD10(){
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
 		OnCancelHMSICD10(); 
 	}
	return 0;
}
int CHMSICD10::OnSaveHMSICD10(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_icd10Tbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_icd10Tbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSICD10ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSICD10::OnCancelHMSICD10(){
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
int CHMSICD10::OnHMSICD10ListLoadData(){
	return 0;
}
