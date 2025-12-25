#include "EduClassOrderList.h"
#include "MainFrm.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEduClassOrderList *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduClassOrderList *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduClassOrderList *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrderList *)pWnd)->OnNameCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEduClassOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEduClassOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEduClassOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnTo DateChangeFnc(CWnd *pWnd){
	((CEduClassOrderList *)pWnd)->OnTo DateChange();
} */
/*static void _OnTo DateSetfocusFnc(CWnd *pWnd){
	((CEduClassOrderList *)pWnd)->OnTo DateSetfocus();} */ 
/*static void _OnTo DateKillfocusFnc(CWnd *pWnd){
	((CEduClassOrderList *)pWnd)->OnTo DateKillfocus();
} */
static int _OnTo DateCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrderList *)pWnd)->OnTo DateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEduClassOrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEduClassOrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEduClassOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEduClassOrderList*)pWnd)->OnListDeleteItem();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CEduClassOrderList *pVw = (CEduClassOrderList *)pWnd;
	pVw->OnSearchSelect();
} 
static int _OnAddEduClassOrderListFnc(CWnd *pWnd){
	 return ((CEduClassOrderList*)pWnd)->OnAddEduClassOrderList();
} 
static int _OnEditEduClassOrderListFnc(CWnd *pWnd){
	 return ((CEduClassOrderList*)pWnd)->OnEditEduClassOrderList();
} 
static int _OnDeleteEduClassOrderListFnc(CWnd *pWnd){
	 return ((CEduClassOrderList*)pWnd)->OnDeleteEduClassOrderList();
} 
static int _OnSaveEduClassOrderListFnc(CWnd *pWnd){
	 return ((CEduClassOrderList*)pWnd)->OnSaveEduClassOrderList();
} 
static int _OnCancelEduClassOrderListFnc(CWnd *pWnd){
	 return ((CEduClassOrderList*)pWnd)->OnCancelEduClassOrderList();
} 
CEduClassOrderList::CEduClassOrderList(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 673;
	SetDefaultValues();
}
CEduClassOrderList::~CEduClassOrderList(){
}
void CEduClassOrderList::OnCreateComponents(){
	m_wndClassInforGroupBox.Create(this, _T("Information"), 5, 5, 800, 60);
	m_wndNameLabel.Create(this, _T("Name"), 450, 30, 560, 55);
	m_wndName.Create(this,565, 30, 705, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 120, 55);
	m_wndFromDate.Create(this,125, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 340, 55);
	m_wndTo Date.Create(this,345, 30, 445, 55); 
	m_wndList.Create(this,5, 65, 795, 575); 
	m_wndSearch.Create(this, _T("&Search"), 710, 30, 790, 55);

}
void CEduClassOrderList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(50);
	m_wndName.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndTo Date.SetMax(CDate(pMF->GetSysDate()));
	m_wndTo Date.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Year"), CFMT_DATE, 90);
	m_wndList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(4, _T("CDCM"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("CCHN"), CFMT_TEXT, 100);
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
void CEduClassOrderList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndTo Date.SetEvent(WE_CHANGE, _OnTo DateChangeFnc);
	//m_wndTo Date.SetEvent(WE_SETFOCUS, _OnTo DateSetfocusFnc);
	//m_wndTo Date.SetEvent(WE_KILLFOCUS, _OnTo DateKillfocusFnc);
	m_wndTo Date.SetEvent(WE_CHECKVALUE, _OnTo DateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddEduClassOrderListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditEduClassOrderListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteEduClassOrderListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveEduClassOrderListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelEduClassOrderListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CEduClassOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndTo Date.GetDlgCtrlID(), m_szTo Date);

}
void CEduClassOrderList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("To Date")] =  m_szTo Date;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("To Date")].GetValue(m_szTo Date);
	}

}
void CEduClassOrderList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ec_name"), m_szName);
	rs.GetValue(_T("ec_start_time"), m_szFromDate);
	rs.GetValue(_T("ec_end_time"), m_szTo Date);

}
void CEduClassOrderList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_classTbl.SetValue(_T("ec_createdby"), pMF->GetCurrentUser());
	m_edu_classTbl.SetValue(_T("ec_createddate"), pMF->GetSysDateTime());
	m_edu_classTbl.SetValue(_T("ec_updatedby"), pMF->GetCurrentUser());
	m_edu_classTbl.SetValue(_T("ec_updateddate"), pMF->GetSysDateTime());
	m_edu_classTbl.SetValue(_T("ec_name"), m_szName);
	m_edu_classTbl.SetValue(_T("ec_start_time"), m_szFromDate);
	m_edu_classTbl.SetValue(_T("ec_end_time"), m_szTo Date);

}
void CEduClassOrderList::SetDefaultValues(){

	m_szName.Empty();
	m_szFromDate.Empty();
	m_szTo Date.Empty();

}
int CEduClassOrderList::SetMode(int nMode){
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
/*void CEduClassOrderList::OnNameChange(){
	
} */
/*void CEduClassOrderList::OnNameSetfocus(){
	
} */
/*void CEduClassOrderList::OnNameKillfocus(){
	
} */
int CEduClassOrderList::OnNameCheckValue(){
	return 0;
} 
/*void CEduClassOrderList::OnFromDateChange(){
	
} */
/*void CEduClassOrderList::OnFromDateSetfocus(){
	
} */
/*void CEduClassOrderList::OnFromDateKillfocus(){
	
} */
int CEduClassOrderList::OnFromDateCheckValue(){
	return 0;
} 
/*void CEduClassOrderList::OnTo DateChange(){
	
} */
/*void CEduClassOrderList::OnTo DateSetfocus(){
	
} */
/*void CEduClassOrderList::OnTo DateKillfocus(){
	
} */
int CEduClassOrderList::OnTo DateCheckValue(){
	return 0;
} 
void CEduClassOrderList::OnListDblClick(){
	
} 
void CEduClassOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduClassOrderList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEduClassOrderList::OnListLoadData(){
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
void CEduClassOrderList::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduClassOrderList::OnAddEduClassOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduClassOrderList::OnEditEduClassOrderList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduClassOrderList::OnDeleteEduClassOrderList(){
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
 		OnCancelEduClassOrderList();
 	}
	return 0;
}
int CEduClassOrderList::OnSaveEduClassOrderList(){
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
 		//OnEduClassOrderListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduClassOrderList::OnCancelEduClassOrderList(){
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
int CEduClassOrderList::OnEduClassOrderListListLoadData(){
	return 0;
}
