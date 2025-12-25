#include "EduStudentList.h"
#include "MainFrm.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentList *)pWnd)->OnNameCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentList *)pWnd)->OnToDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEduStudentList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEduStudentList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEduStudentList*)pWnd)->OnListDeleteItem();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CEduStudentList *pVw = (CEduStudentList *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnClassSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentList* )pWnd)->OnClassSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClassSelendokFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnClassSelendok();
}
/*static void _OnClassSetfocusFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnClassKillfocus();
}*/
/*static void _OnClassKillfocusFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnClassKillfocus();
}*/
static long _OnClassLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentList *)pWnd)->OnClassLoadData();
}
/*static void _OnClassAddNewFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnClassAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CEduStudentList *)pWnd)->OnTypeAddNew();
}*/
static int _OnAddEduStudentListFnc(CWnd *pWnd){
	 return ((CEduStudentList*)pWnd)->OnAddEduStudentList();
} 
static int _OnEditEduStudentListFnc(CWnd *pWnd){
	 return ((CEduStudentList*)pWnd)->OnEditEduStudentList();
} 
static int _OnDeleteEduStudentListFnc(CWnd *pWnd){
	 return ((CEduStudentList*)pWnd)->OnDeleteEduStudentList();
} 
static int _OnSaveEduStudentListFnc(CWnd *pWnd){
	 return ((CEduStudentList*)pWnd)->OnSaveEduStudentList();
} 
static int _OnCancelEduStudentListFnc(CWnd *pWnd){
	 return ((CEduStudentList*)pWnd)->OnCancelEduStudentList();
} 
CEduStudentList::CEduStudentList(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 673;
	SetDefaultValues();
}
CEduStudentList::~CEduStudentList(){
}
void CEduStudentList::OnCreateComponents(){
	m_wndStuduentGroupBox.Create(this, _T("Information"), 5, 5, 795, 90);
	m_wndNameLabel.Create(this, _T("Name"), 450, 30, 560, 55);
	m_wndName.Create(this,565, 30, 705, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 120, 55);
	m_wndFromDate.Create(this,125, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 340, 55);
	m_wndToDate.Create(this,345, 30, 445, 55); 
	m_wndList.Create(this,5, 95, 795, 606); 
	m_wndSearch.Create(this, _T("&Search"), 710, 30, 790, 55);
	m_wndClassLabel.Create(this, _T("Class"), 10, 60, 120, 85);
	m_wndClass.Create(this,125, 60, 445, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 450, 60, 560, 85);
	m_wndType.Create(this,565, 60, 790, 85); 

}
void CEduStudentList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(50);
	m_wndName.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndClass.SetCheckValue(true);
	m_wndClass.LimitText(35);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Year"), CFMT_DATE, 90);
	m_wndList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(4, _T("CDCM"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("CCHN"), CFMT_TEXT, 100);


	m_wndClass.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndClass.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_edu_classTbl.SetTableName(_T("edu_class"));
	m_edu_classTbl.AddField(_T("ec_createdby"), dfText, 15); 
	m_edu_classTbl.AddField(_T("ec_createddate"), dfDateTime); 
	m_edu_classTbl.AddField(_T("ec_updatedby"), dfText, 15); 
	m_edu_classTbl.AddField(_T("ec_updateddate"), dfDateTime); 
	m_edu_classTbl.AddField(_T("ec_id"), dfLong); 
	m_edu_classTbl.AddField(_T("ec_order_id"), dfLong); 
	m_edu_classTbl.AddField(_T("ec_class_id"), dfText, 10); 
	m_edu_classTbl.AddField(_T("ec_name"), dfText, 50); 
	m_edu_classTbl.AddField(_T("ec_start_time"), dfDateTime); 
	m_edu_classTbl.AddField(_T("ec_end_time"), dfDateTime); 
	m_edu_classTbl.AddField(_T("ec_managerid"), dfText, 15); 
	m_edu_classTbl.AddField(_T("ec_teacher"), dfText, 15); 
	m_edu_classTbl.AddField(_T("ec_teacher1"), dfText, 15); 
	m_edu_classTbl.AddField(_T("ec_teacher2"), dfText, 15); 
	m_edu_classTbl.AddField(_T("ec_teacher3"), dfText, 15); 
	m_edu_classTbl.AddField(_T("ec_total_student"), dfLong); 
	m_edu_classTbl.AddField(_T("ec_content"), dfText, 200); 
	m_edu_classTbl.AddField(_T("ec_note"), dfText, 200); 
	m_edu_classTbl.AddField(_T("ec_sourceid"), dfText, 2); 
	m_edu_classTbl.AddField(_T("ec_lesson"), dfLong); 
	m_edu_classTbl.AddField(_T("ec_location"), dfText, 30); 
	m_edu_classTbl.AddField(_T("ec_type"), dfText, 3); 
	m_edu_classTbl.AddField(_T("ec_deptid_receive"), dfText, 7); 
	m_edu_classTbl.AddField(_T("ec_workunit"), dfText, 2); 
	m_edu_classTbl.AddField(_T("ec_decide"), dfText, 15); 
	m_edu_classTbl.AddField(_T("ec_president"), dfText, 15); 
	m_edu_classTbl.AddField(_T("ec_phone"), dfText, 12); 
	m_edu_classTbl.AddField(_T("ec_status"), dfText, 1); 

}
void CEduStudentList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndClass.SetEvent(WE_SELENDOK, _OnClassSelendokFnc);
	//m_wndClass.SetEvent(WE_SETFOCUS, _OnClassSetfocusFnc);
	//m_wndClass.SetEvent(WE_KILLFOCUS, _OnClassKillfocusFnc);
	m_wndClass.SetEvent(WE_SELCHANGE, _OnClassSelectChangeFnc);
	m_wndClass.SetEvent(WE_LOADDATA, _OnClassLoadDataFnc);
	//m_wndClass.SetEvent(WE_ADDNEW, _OnClassAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddEduStudentListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditEduStudentListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteEduStudentListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveEduStudentListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelEduStudentListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CEduStudentList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClass.GetDlgCtrlID(), m_szClassKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);

}
void CEduStudentList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Class")] =  m_szClassKey;
	m_jData[_T("Type")] =  m_szTypeKey;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Class")].GetValue(m_szClassKey);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	}

}
void CEduStudentList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ec_name"), m_szName);
	rs.GetValue(_T("ec_start_time"), m_szFromDate);
	rs.GetValue(_T("ec_end_time"), m_szToDate);

}
void CEduStudentList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_classTbl.SetValue(_T("ec_createdby"), pMF->GetCurrentUser());
	m_edu_classTbl.SetValue(_T("ec_createddate"), pMF->GetSysDateTime());
	m_edu_classTbl.SetValue(_T("ec_updatedby"), pMF->GetCurrentUser());
	m_edu_classTbl.SetValue(_T("ec_updateddate"), pMF->GetSysDateTime());
	m_edu_classTbl.SetValue(_T("ec_name"), m_szName);
	m_edu_classTbl.SetValue(_T("ec_start_time"), m_szFromDate);
	m_edu_classTbl.SetValue(_T("ec_end_time"), m_szToDate);

}
void CEduStudentList::SetDefaultValues(){

	m_szName.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClassKey.Empty();
	m_szTypeKey.Empty();

}
int CEduStudentList::SetMode(int nMode){
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
/*void CEduStudentList::OnNameChange(){
	
} */
/*void CEduStudentList::OnNameSetfocus(){
	
} */
/*void CEduStudentList::OnNameKillfocus(){
	
} */
int CEduStudentList::OnNameCheckValue(){
	return 0;
} 
/*void CEduStudentList::OnFromDateChange(){
	
} */
/*void CEduStudentList::OnFromDateSetfocus(){
	
} */
/*void CEduStudentList::OnFromDateKillfocus(){
	
} */
int CEduStudentList::OnFromDateCheckValue(){
	return 0;
} 
/*void CEduStudentList::OnToDateChange(){
	
} */
/*void CEduStudentList::OnToDateSetfocus(){
	
} */
/*void CEduStudentList::OnToDateKillfocus(){
	
} */
int CEduStudentList::OnToDateCheckValue(){
	return 0;
} 
void CEduStudentList::OnListDblClick(){
	
} 
void CEduStudentList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduStudentList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEduStudentList::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Year")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("CDCM")), 
			rs.GetValue(_T("CCHN")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CEduStudentList::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentList::OnClassSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentList::OnClassSelendok(){
	 
}
/*void CEduStudentList::OnClassSetfocus(){
	
}*/
/*void CEduStudentList::OnClassKillfocus(){
	
}*/
long CEduStudentList::OnClassLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClass.IsSearchKey() && !m_szClassKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szClassKey
};
	m_wndClass.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClass.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentList::OnClassAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudentList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentList::OnTypeSelendok(){
	 
}
/*void CEduStudentList::OnTypeSetfocus(){
	
}*/
/*void CEduStudentList::OnTypeKillfocus(){
	
}*/
long CEduStudentList::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CEduStudentList::OnAddEduStudentList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduStudentList::OnEditEduStudentList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduStudentList::OnDeleteEduStudentList(){
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
 		OnCancelEduStudentList();
 	}
	return 0;
}
int CEduStudentList::OnSaveEduStudentList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_edu_classTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_edu_classTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnEduStudentListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduStudentList::OnCancelEduStudentList(){
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
int CEduStudentList::OnEduStudentListListLoadData(){
	return 0;
}
