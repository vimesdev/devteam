#include "EduTechCatalogList.h"
#include "MainFrm.h"
/*static void _OnTeacheridChangeFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnTeacheridChange();
} */
/*static void _OnTeacheridSetfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnTeacheridSetfocus();} */ 
/*static void _OnTeacheridKillfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnTeacheridKillfocus();
} */
static int _OnTeacheridCheckValueFnc(CWnd *pWnd){
	return ((CEduTechCatalogList *)pWnd)->OnTeacheridCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEduTechCatalogList *)pWnd)->OnNameCheckValue();
} 
/*static void _OnContentChangeFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnContentChange();
} */
/*static void _OnContentSetfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnContentSetfocus();} */ 
/*static void _OnContentKillfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnContentKillfocus();
} */
static int _OnContentCheckValueFnc(CWnd *pWnd){
	return ((CEduTechCatalogList *)pWnd)->OnContentCheckValue();
} 
/*static void _OnWorkUnitChangeFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnWorkUnitChange();
} */
/*static void _OnWorkUnitSetfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnWorkUnitSetfocus();} */ 
/*static void _OnWorkUnitKillfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnWorkUnitKillfocus();
} */
static int _OnWorkUnitCheckValueFnc(CWnd *pWnd){
	return ((CEduTechCatalogList *)pWnd)->OnWorkUnitCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CEduTechCatalogList *)pWnd)->OnNoteCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEduTechCatalogList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEduTechCatalogList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEduTechCatalogList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEduTechCatalogList*)pWnd)->OnListDeleteItem();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CEduTechCatalogList *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CEduTechCatalogList *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CEduTechCatalogList *pVw = (CEduTechCatalogList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEduTechCatalogList *pVw = (CEduTechCatalogList *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEduTechCatalogList *pVw = (CEduTechCatalogList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEduTechCatalogList *pVw = (CEduTechCatalogList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEduTechCatalogList *pVw = (CEduTechCatalogList *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddEduTechCatalogListFnc(CWnd *pWnd){
	 return ((CEduTechCatalogList*)pWnd)->OnAddEduTechCatalogList();
} 
static int _OnEditEduTechCatalogListFnc(CWnd *pWnd){
	 return ((CEduTechCatalogList*)pWnd)->OnEditEduTechCatalogList();
} 
static int _OnDeleteEduTechCatalogListFnc(CWnd *pWnd){
	 return ((CEduTechCatalogList*)pWnd)->OnDeleteEduTechCatalogList();
} 
static int _OnSaveEduTechCatalogListFnc(CWnd *pWnd){
	 return ((CEduTechCatalogList*)pWnd)->OnSaveEduTechCatalogList();
} 
static int _OnCancelEduTechCatalogListFnc(CWnd *pWnd){
	 return ((CEduTechCatalogList*)pWnd)->OnCancelEduTechCatalogList();
} 
CEduTechCatalogList::CEduTechCatalogList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 673;
	SetDefaultValues();
}
CEduTechCatalogList::~CEduTechCatalogList(){
}
void CEduTechCatalogList::OnCreateComponents(){
	m_wndInformationGroup.Create(this, _T("Information"), 5, 455, 795, 630);
	m_wndIdLabel.Create(this, _T("ID"), 10, 480, 120, 505);
	m_wndTeacherid.Create(this,125, 480, 255, 505); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 510, 120, 535);
	m_wndName.Create(this,125, 510, 790, 535); 
	m_wndContentLabel.Create(this, _T("Content"), 10, 540, 120, 565);
	m_wndContent.Create(this,125, 540, 790, 565); 
	m_wndWorkUnitLabel.Create(this, _T("Work Unit"), 10, 570, 120, 595);
	m_wndWorkUnit.Create(this,125, 570, 790, 595); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 600, 120, 625);
	m_wndNote.Create(this,125, 600, 790, 625); 
	m_wndList.Create(this,5, 35, 795, 450); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 5, 5, 115, 30);
	m_wndSearchName.Create(this,120, 5, 795, 30); 
	m_wndAdd.Create(this, _T("&Add"), 325, 635, 415, 660);
	m_wndSave.Create(this, _T("&Save"), 420, 635, 510, 660);
	m_wndEdit.Create(this, _T("&Edit"), 515, 635, 605, 660);
	m_wndDelete.Create(this, _T("&Delete"), 610, 635, 700, 660);
	m_wndCancel.Create(this, _T("&Cancel"), 705, 635, 795, 660);

}
void CEduTechCatalogList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTeacherid.SetLimitText(15);
	m_wndTeacherid.SetCheckValue(true);
	m_wndName.SetLimitText(65);
	m_wndName.SetCheckValue(true);
	m_wndContent.SetLimitText(254);
	m_wndContent.SetCheckValue(true);
	m_wndWorkUnit.SetLimitText(2);
	m_wndWorkUnit.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);


	m_edu_teacherTbl.SetTableName(_T("edu_teacher"));
	m_edu_teacherTbl.AddField(_T("et_id"), dfLong); 
	m_edu_teacherTbl.AddField(_T("et_createdby"), dfText, 15); 
	m_edu_teacherTbl.AddField(_T("et_createddate"), dfDateTime); 
	m_edu_teacherTbl.AddField(_T("et_updatedby"), dfText, 15); 
	m_edu_teacherTbl.AddField(_T("et_updateddate"), dfDateTime); 
	m_edu_teacherTbl.AddField(_T("et_teacher_id"), dfText, 15); 
	m_edu_teacherTbl.AddField(_T("et_name"), dfText, 65); 
	m_edu_teacherTbl.AddField(_T("et_birthdate"), dfDate); 
	m_edu_teacherTbl.AddField(_T("et_sex"), dfText, 3); 
	m_edu_teacherTbl.AddField(_T("et_ethnic"), dfLong); 
	m_edu_teacherTbl.AddField(_T("et_address"), dfText, 254); 
	m_edu_teacherTbl.AddField(_T("et_occupation"), dfLong); 
	m_edu_teacherTbl.AddField(_T("et_position"), dfLong); 
	m_edu_teacherTbl.AddField(_T("et_phone"), dfText, 12); 
	m_edu_teacherTbl.AddField(_T("et_cardid"), dfText, 25); 
	m_edu_teacherTbl.AddField(_T("et_date"), dfDate); 
	m_edu_teacherTbl.AddField(_T("et_deptid"), dfText, 7); 
	m_edu_teacherTbl.AddField(_T("et_technique"), dfText, 1); 
	m_edu_teacherTbl.AddField(_T("et_certificate"), dfText, 15); 
	m_edu_teacherTbl.AddField(_T("et_content"), dfText, 115); 
	m_edu_teacherTbl.AddField(_T("et_workunit"), dfText, 2); 
	m_edu_teacherTbl.AddField(_T("et_note"), dfText, 254); 
	m_edu_teacherTbl.AddField(_T("et_status"), dfText, 1); 

}
void CEduTechCatalogList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndTeacherid.SetEvent(WE_CHANGE, _OnTeacheridChangeFnc);
	//m_wndTeacherid.SetEvent(WE_SETFOCUS, _OnTeacheridSetfocusFnc);
	//m_wndTeacherid.SetEvent(WE_KILLFOCUS, _OnTeacheridKillfocusFnc);
	m_wndTeacherid.SetEvent(WE_CHECKVALUE, _OnTeacheridCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndContent.SetEvent(WE_CHANGE, _OnContentChangeFnc);
	//m_wndContent.SetEvent(WE_SETFOCUS, _OnContentSetfocusFnc);
	//m_wndContent.SetEvent(WE_KILLFOCUS, _OnContentKillfocusFnc);
	m_wndContent.SetEvent(WE_CHECKVALUE, _OnContentCheckValueFnc);
	//m_wndWorkUnit.SetEvent(WE_CHANGE, _OnWorkUnitChangeFnc);
	//m_wndWorkUnit.SetEvent(WE_SETFOCUS, _OnWorkUnitSetfocusFnc);
	//m_wndWorkUnit.SetEvent(WE_KILLFOCUS, _OnWorkUnitKillfocusFnc);
	m_wndWorkUnit.SetEvent(WE_CHECKVALUE, _OnWorkUnitCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddEduTechCatalogListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditEduTechCatalogListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteEduTechCatalogListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveEduTechCatalogListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelEduTechCatalogListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CEduTechCatalogList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTeacherid.GetDlgCtrlID(), m_szTeacherid);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
	DDX_Text(pDX, m_wndWorkUnit.GetDlgCtrlID(), m_szWorkUnit);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CEduTechCatalogList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Teacherid")] =  m_szTeacherid;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Content")] =  m_szContent;
	m_jData[_T("WorkUnit")] =  m_szWorkUnit;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("SearchName")] =  m_szSearchName;
	}
	else
	{
			
	m_jData[_T("Teacherid")].GetValue(m_szTeacherid);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Content")].GetValue(m_szContent);
	m_jData[_T("WorkUnit")].GetValue(m_szWorkUnit);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	}

}
void CEduTechCatalogList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("et_teacher_id"), m_szTeacherid);
	rs.GetValue(_T("et_name"), m_szName);
	rs.GetValue(_T("et_address"), m_szContent);
	rs.GetValue(_T("et_workunit"), m_szWorkUnit);
	rs.GetValue(_T("et_note"), m_szNote);

}
void CEduTechCatalogList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_teacherTbl.SetValue(_T("et_createdby"), pMF->GetCurrentUser());
	m_edu_teacherTbl.SetValue(_T("et_createddate"), pMF->GetSysDateTime());
	m_edu_teacherTbl.SetValue(_T("et_updatedby"), pMF->GetCurrentUser());
	m_edu_teacherTbl.SetValue(_T("et_updateddate"), pMF->GetSysDateTime());
	m_edu_teacherTbl.SetValue(_T("et_teacher_id"), m_szTeacherid);
	m_edu_teacherTbl.SetValue(_T("et_name"), m_szName);
	m_edu_teacherTbl.SetValue(_T("et_address"), m_szContent);
	m_edu_teacherTbl.SetValue(_T("et_workunit"), m_szWorkUnit);
	m_edu_teacherTbl.SetValue(_T("et_note"), m_szNote);

}
void CEduTechCatalogList::SetDefaultValues(){

	m_szTeacherid.Empty();
	m_szName.Empty();
	m_szContent.Empty();
	m_szWorkUnit.Empty();
	m_szNote.Empty();
	m_szSearchName.Empty();

}
int CEduTechCatalogList::SetMode(int nMode){
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
/*void CEduTechCatalogList::OnTeacheridChange(){
	
} */
/*void CEduTechCatalogList::OnTeacheridSetfocus(){
	
} */
/*void CEduTechCatalogList::OnTeacheridKillfocus(){
	
} */
int CEduTechCatalogList::OnTeacheridCheckValue(){
	return 0;
} 
/*void CEduTechCatalogList::OnNameChange(){
	
} */
/*void CEduTechCatalogList::OnNameSetfocus(){
	
} */
/*void CEduTechCatalogList::OnNameKillfocus(){
	
} */
int CEduTechCatalogList::OnNameCheckValue(){
	return 0;
} 
/*void CEduTechCatalogList::OnContentChange(){
	
} */
/*void CEduTechCatalogList::OnContentSetfocus(){
	
} */
/*void CEduTechCatalogList::OnContentKillfocus(){
	
} */
int CEduTechCatalogList::OnContentCheckValue(){
	return 0;
} 
/*void CEduTechCatalogList::OnWorkUnitChange(){
	
} */
/*void CEduTechCatalogList::OnWorkUnitSetfocus(){
	
} */
/*void CEduTechCatalogList::OnWorkUnitKillfocus(){
	
} */
int CEduTechCatalogList::OnWorkUnitCheckValue(){
	return 0;
} 
/*void CEduTechCatalogList::OnNoteChange(){
	
} */
/*void CEduTechCatalogList::OnNoteSetfocus(){
	
} */
/*void CEduTechCatalogList::OnNoteKillfocus(){
	
} */
int CEduTechCatalogList::OnNoteCheckValue(){
	return 0;
} 
void CEduTechCatalogList::OnListDblClick(){
	
} 
void CEduTechCatalogList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduTechCatalogList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEduTechCatalogList::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CEduTechCatalogList::OnSearchNameChange(){
	
} */
/*void CEduTechCatalogList::OnSearchNameSetfocus(){
	
} */
/*void CEduTechCatalogList::OnSearchNameKillfocus(){
	
} */
int CEduTechCatalogList::OnSearchNameCheckValue(){
	return 0;
} 
void CEduTechCatalogList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTechCatalogList::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTechCatalogList::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTechCatalogList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTechCatalogList::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduTechCatalogList::OnAddEduTechCatalogList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduTechCatalogList::OnEditEduTechCatalogList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduTechCatalogList::OnDeleteEduTechCatalogList(){
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
 		OnCancelEduTechCatalogList();
 	}
	return 0;
}
int CEduTechCatalogList::OnSaveEduTechCatalogList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_edu_teacherTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_edu_teacherTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnEduTechCatalogListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduTechCatalogList::OnCancelEduTechCatalogList(){
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
int CEduTechCatalogList::OnEduTechCatalogListListLoadData(){
	return 0;
}
