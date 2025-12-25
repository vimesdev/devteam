#include "SysSetUpAdmissionForm.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSysSetUpAdmissionForm*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysSetUpAdmissionForm*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionForm*)pWnd)->OnListDeleteItem();
} 
static long _OnListDetailLoadDataFnc(CWnd *pWnd){
	return ((CSysSetUpAdmissionForm*)pWnd)->OnListDetailLoadData();
} 
static void _OnListDetailDblClickFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm*)pWnd)->OnListDetailDblClick();
} 
static void _OnListDetailSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysSetUpAdmissionForm*)pWnd)->OnListDetailSelectChange(nOldItem, nNewItem);
} 
static int _OnListDetailDeleteItemFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionForm*)pWnd)->OnListDetailDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpAdmissionForm *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpAdmissionForm *)pWnd)->OnNameCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysSetUpAdmissionForm* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CSysSetUpAdmissionForm *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnTypeAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CSysSetUpAdmissionForm *pVw = (CSysSetUpAdmissionForm *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CSysSetUpAdmissionForm *pVw = (CSysSetUpAdmissionForm *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CSysSetUpAdmissionForm *pVw = (CSysSetUpAdmissionForm *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSysSetUpAdmissionForm *pVw = (CSysSetUpAdmissionForm *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CSysSetUpAdmissionForm *pVw = (CSysSetUpAdmissionForm *)pWnd;
	pVw->OnCancelSelect();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionForm *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpAdmissionForm *)pWnd)->OnSearchCheckValue();
} 
static void _OnSetUpDeptSelectFnc(CWnd *pWnd){
	CSysSetUpAdmissionForm *pVw = (CSysSetUpAdmissionForm *)pWnd;
	pVw->OnSetUpDeptSelect();
} 
static int _OnAddSysSetUpAdmissionFormFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionForm*)pWnd)->OnAddSysSetUpAdmissionForm();
} 
static int _OnEditSysSetUpAdmissionFormFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionForm*)pWnd)->OnEditSysSetUpAdmissionForm();
} 
static int _OnDeleteSysSetUpAdmissionFormFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionForm*)pWnd)->OnDeleteSysSetUpAdmissionForm();
} 
static int _OnSaveSysSetUpAdmissionFormFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionForm*)pWnd)->OnSaveSysSetUpAdmissionForm();
} 
static int _OnCancelSysSetUpAdmissionFormFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionForm*)pWnd)->OnCancelSysSetUpAdmissionForm();
} 
CSysSetUpAdmissionForm::CSysSetUpAdmissionForm(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 705;
	m_nDlgHeight = 420;
	SetDefaultValues();
}
CSysSetUpAdmissionForm::~CSysSetUpAdmissionForm(){
}
void CSysSetUpAdmissionForm::OnCreateComponents(){
	m_wndSetUpRecordForm.Create(this, _T("SetUp Record Form"), 5, 5, 795, 540);
	m_wndList.Create(this, 10, 30, 350, 535);
	m_wndListDetail.Create(this, 355, 180, 790, 490);
	m_wndIDLabel.Create(this, _T("ID"), 355, 60, 490, 85);
	m_wndID.Create(this, 495, 60, 790, 85);
	m_wndNameLabel.Create(this, _T("Name"), 355, 90, 490, 115);
	m_wndName.Create(this, 495, 89, 790, 114);
	m_wndTypeLabel.Create(this, _T("Type"), 355, 120, 490, 145);
	m_wndType.Create(this, 495, 120, 790, 145);
	m_wndAdd.Create(this, _T("&Add"), 355, 150, 435, 175);
	m_wndEdit.Create(this, _T("&Edit"), 440, 150, 520, 175);
	m_wndDelete.Create(this, _T("&Delete"), 525, 150, 605, 175);
	m_wndSave.Create(this, _T("&Save"), 610, 150, 690, 175);
	m_wndCancel.Create(this, _T("&Cancel"), 695, 149, 775, 174);
	m_wndSearchLabel.Create(this, _T("Search"), 355, 30, 490, 55);
	m_wndSearch.Create(this, 495, 30, 790, 55);
	m_wndSetUpDept.Create(this, _T("SetUp For Dept"), 410, 495, 730, 535);

}
void CSysSetUpAdmissionForm::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(16);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	//m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndSearch.SetLimitText(35);
	//m_wndSearch.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 20);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 240);
	m_wndList.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);


	m_wndListDetail.InsertColumn(0, _T("STT"), CFMT_TEXT, 20);
	m_wndListDetail.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);
	m_wndListDetail.InsertColumn(2, _T("Form"), CFMT_TEXT, 150);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_SetUpAdmission_tbl.SetTableName(_T("hms_admission_setup"));
	m_SetUpAdmission_tbl.AddField(_T("has_id"), dfInteger); 
	m_SetUpAdmission_tbl.AddField(_T("has_name"), dfText,128); 
	m_SetUpAdmission_tbl.AddField(_T("has_type"), dfText, 10);
}
void CSysSetUpAdmissionForm::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListDetail.SetEvent(WE_SELCHANGE, _OnListDetailSelectChangeFnc);
	m_wndListDetail.SetEvent(WE_LOADDATA, _OnListDetailLoadDataFnc);
	m_wndListDetail.SetEvent(WE_DBLCLICK, _OnListDetailDblClickFnc);
	m_wndListDetail.AddEvent(1, _T("Thiết lập các tờ bệnh án"), _OnListDetailDeleteItemFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndSetUpDept.SetEvent(WE_CLICK, _OnSetUpDeptSelectFnc);
	OnListLoadData();
	SetMode(VM_VIEW);

}
void CSysSetUpAdmissionForm::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CSysSetUpAdmissionForm::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_nID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_nID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CSysSetUpAdmissionForm::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_nID >0)
	{
		szSQL.Format(_T("select has_id, has_name, has_type from hms_admission_setup  where has_id =%ld "), m_nID);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("has_id"),m_nID);
			rs.GetValue(_T("has_name"),m_szName);
			rs.GetValue(_T("has_type"),m_szTypeKey);
			OnListDetailLoadData();
		}
		else
		{

		}
	}
	else
	{
		
	}
	SetMode(VM_VIEW);
}
void CSysSetUpAdmissionForm::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_SetUpAdmission_tbl.SetValue(_T("has_id"), m_nID); 
	m_SetUpAdmission_tbl.SetValue(_T("has_name"), m_szName); 
	m_SetUpAdmission_tbl.SetValue(_T("has_type"), m_szTypeKey); 

}
void CSysSetUpAdmissionForm::SetDefaultValues(){

	m_nID=0;
	m_szName.Empty();
	m_szTypeKey.Empty();
	m_szSearch.Empty();

}
int CSysSetUpAdmissionForm::SetMode(int nMode){
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
			// lay so IDX
			szSQL.Format(_T("select (coalesce(max(has_id),0) +1) as id from hms_admission_setup"));
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("id"), m_nID);
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
		m_wndSetUpDept.EnableWindow(TRUE);
		m_wndID.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CSysSetUpAdmissionForm::OnListDblClick(){
	
} 
void CSysSetUpAdmissionForm::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem >=0)
	{
		SetDefaultValues();
		m_nID= str2long(m_wndList.GetItemText(nNewItem,0));
		_tprintf(_T("\r\n %ld"),m_nID);
		GetDataToScreen();
	}

	
} 
int CSysSetUpAdmissionForm::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysSetUpAdmissionForm::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	if(!m_szSearch.IsEmpty())
		szWhere.Format(_T(" and upper(has_name) like(chr(37)||upper('%s')||chr(37))"), m_szSearch);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select has_id, has_name, has_type from hms_admission_setup where 1=1 %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("has_id")), 
			rs.GetValue(_T("has_name")),
			rs.GetValue(_T("has_type")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
#include "SysSetUpAdmissionLineForm.h"
void CSysSetUpAdmissionForm::OnListDetailDblClick(){
	if(m_nID >0)
	{
		CSysSetUpAdmissionLineForm dlg(this);
		dlg.m_nIDKEY= m_nID;
		dlg.DoModal();
	}
	
} 
void CSysSetUpAdmissionForm::OnListDetailSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysSetUpAdmissionForm::OnListDetailDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CSysSetUpAdmissionLineForm dlg(this);
		dlg.m_nIDKEY= m_nID;
		dlg.DoModal();
		return 1;
} 
long CSysSetUpAdmissionForm::OnListDetailLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select hasl_index, hasl_name, hasl_htmlform from hms_admission_setup_line    where hasl_id =%ld "), m_nID);
	m_wndListDetail.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListDetail.AddItems(
			rs.GetValue(_T("hasl_index")), 
			rs.GetValue(_T("hasl_name")),
			rs.GetValue(_T("hasl_htmlform")),
			NULL);
		rs.MoveNext();
	}
	m_wndListDetail.EndLoad(); 
	return nCount;

}
/*void CSysSetUpAdmissionForm::OnIDChange(){
	
} */
/*void CSysSetUpAdmissionForm::OnIDSetfocus(){
	
} */
/*void CSysSetUpAdmissionForm::OnIDKillfocus(){
	
} */
int CSysSetUpAdmissionForm::OnIDCheckValue(){
	return 0;
} 
/*void CSysSetUpAdmissionForm::OnNameChange(){
	
} */
/*void CSysSetUpAdmissionForm::OnNameSetfocus(){
	
} */
/*void CSysSetUpAdmissionForm::OnNameKillfocus(){
	
} */
int CSysSetUpAdmissionForm::OnNameCheckValue(){
	return 0;
} 
void CSysSetUpAdmissionForm::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysSetUpAdmissionForm::OnTypeSelendok(){
	 
}
/*void CSysSetUpAdmissionForm::OnTypeSetfocus(){
	
}*/
/*void CSysSetUpAdmissionForm::OnTypeKillfocus(){
	
}*/
long CSysSetUpAdmissionForm::OnTypeLoadData(){
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
/*void CSysSetUpAdmissionForm::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CSysSetUpAdmissionForm::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndListDetail.DeleteAllItems();
	SetMode(VM_ADD);
	
} 
void CSysSetUpAdmissionForm::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditSysSetUpAdmissionForm();	
} 
void CSysSetUpAdmissionForm::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysSetUpAdmissionForm::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveSysSetUpAdmissionForm();
	
} 
void CSysSetUpAdmissionForm::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_VIEW);
	
} 
/*void CSysSetUpAdmissionForm::OnSearchChange(){
	
} */
/*void CSysSetUpAdmissionForm::OnSearchSetfocus(){
	
} */
/*void CSysSetUpAdmissionForm::OnSearchKillfocus(){
	
} */
int CSysSetUpAdmissionForm::OnSearchCheckValue(){
	return 0;
} 
#include "SysSetupAdmisionForDept.h"
void CSysSetUpAdmissionForm::OnSetUpDeptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CSysSetupAdmisionForDept dlg(this);
	dlg.DoModal();
	
} 
int CSysSetUpAdmissionForm::OnAddSysSetUpAdmissionForm(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysSetUpAdmissionForm::OnEditSysSetUpAdmissionForm(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysSetUpAdmissionForm::OnDeleteSysSetUpAdmissionForm(){
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
 		OnCancelSysSetUpAdmissionForm();
 	}
	return 0;
}
int CSysSetUpAdmissionForm::OnSaveSysSetUpAdmissionForm(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_SetUpAdmission_tbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE has_id =%ld"),m_nID);
 		szSQL = m_SetUpAdmission_tbl.GetUpdateSQL(_T("m_nID"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysSetUpAdmissionForm::OnCancelSysSetUpAdmissionForm(){
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
int CSysSetUpAdmissionForm::OnSysSetUpAdmissionFormListLoadData(){
	return 0;
}
