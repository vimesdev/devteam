#include "SysSetUpAdmissionLineForm.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSysSetUpAdmissionLineForm*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSysSetUpAdmissionLineForm*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysSetUpAdmissionLineForm*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionLineForm*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CSysSetUpAdmissionLineForm *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionLineForm *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionLineForm *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpAdmissionLineForm *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CSysSetUpAdmissionLineForm *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionLineForm *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionLineForm *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpAdmissionLineForm *)pWnd)->OnNameCheckValue();
} 
/*static void _OnFormHtmlChangeFnc(CWnd *pWnd){
	((CSysSetUpAdmissionLineForm *)pWnd)->OnFormHtmlChange();
} */
/*static void _OnFormHtmlSetfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionLineForm *)pWnd)->OnFormHtmlSetfocus();} */ 
/*static void _OnFormHtmlKillfocusFnc(CWnd *pWnd){
	((CSysSetUpAdmissionLineForm *)pWnd)->OnFormHtmlKillfocus();
} */
static int _OnFormHtmlCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpAdmissionLineForm *)pWnd)->OnFormHtmlCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CSysSetUpAdmissionLineForm *pVw = (CSysSetUpAdmissionLineForm *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CSysSetUpAdmissionLineForm *pVw = (CSysSetUpAdmissionLineForm *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CSysSetUpAdmissionLineForm *pVw = (CSysSetUpAdmissionLineForm *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSysSetUpAdmissionLineForm *pVw = (CSysSetUpAdmissionLineForm *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CSysSetUpAdmissionLineForm *pVw = (CSysSetUpAdmissionLineForm *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddSysSetUpAdmissionLineFormFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionLineForm*)pWnd)->OnAddSysSetUpAdmissionLineForm();
} 
static int _OnEditSysSetUpAdmissionLineFormFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionLineForm*)pWnd)->OnEditSysSetUpAdmissionLineForm();
} 
static int _OnDeleteSysSetUpAdmissionLineFormFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionLineForm*)pWnd)->OnDeleteSysSetUpAdmissionLineForm();
} 
static int _OnSaveSysSetUpAdmissionLineFormFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionLineForm*)pWnd)->OnSaveSysSetUpAdmissionLineForm();
} 
static int _OnCancelSysSetUpAdmissionLineFormFnc(CWnd *pWnd){
	 return ((CSysSetUpAdmissionLineForm*)pWnd)->OnCancelSysSetUpAdmissionLineForm();
} 
CSysSetUpAdmissionLineForm::CSysSetUpAdmissionLineForm(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 705;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CSysSetUpAdmissionLineForm::~CSysSetUpAdmissionLineForm(){
}
void CSysSetUpAdmissionLineForm::OnCreateComponents(){
	m_wndSetUpRecordForm.Create(this, _T("SetUp Record Form"), 5, 5, 695, 180);
	m_wndList.Create(this,10, 30, 265, 175); 
	m_wndIDLabel.Create(this, _T("ID"), 270, 30, 405, 55);
	m_wndID.Create(this,410, 30, 690, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 270, 59, 405, 84);
	m_wndName.Create(this,410, 59, 690, 84); 
	m_wndFormLabel.Create(this, _T("HTML Form"), 270, 89, 405, 114);
	m_wndFormHtml.Create(this,410, 89, 690, 114); 
	m_wndAdd.Create(this, _T("&Add"), 270, 150, 350, 175);
	m_wndEdit.Create(this, _T("&Edit"), 355, 150, 435, 175);
	m_wndDelete.Create(this, _T("&Delete"), 440, 150, 520, 175);
	m_wndSave.Create(this, _T("&Save"), 525, 150, 605, 175);
	m_wndCancel.Create(this, _T("&Cancel"), 610, 149, 690, 174);

}
void CSysSetUpAdmissionLineForm::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(16);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndFormHtml.SetLimitText(35);
	m_wndFormHtml.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 20);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("FormHTML"), CFMT_TEXT, 100);
	m_SetUpAdmissionLine_tbl.SetTableName(_T("hms_admission_setup_line"));
	m_SetUpAdmissionLine_tbl.AddField(_T("hasl_id"), dfInteger); 
	m_SetUpAdmissionLine_tbl.AddField(_T("hasl_index"), dfInteger); 
	m_SetUpAdmissionLine_tbl.AddField(_T("hasl_name"), dfText,128); 
	m_SetUpAdmissionLine_tbl.AddField(_T("hasl_htmlform"), dfText, 128);

}
void CSysSetUpAdmissionLineForm::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndFormHtml.SetEvent(WE_CHANGE, _OnFormHtmlChangeFnc);
	//m_wndFormHtml.SetEvent(WE_SETFOCUS, _OnFormHtmlSetfocusFnc);
	//m_wndFormHtml.SetEvent(WE_KILLFOCUS, _OnFormHtmlKillfocusFnc);
	m_wndFormHtml.SetEvent(WE_CHECKVALUE, _OnFormHtmlCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	OnListLoadData();
	SetMode(VM_VIEW);

}
void CSysSetUpAdmissionLineForm::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndFormHtml.GetDlgCtrlID(), m_szFormHtml);

}
void CSysSetUpAdmissionLineForm::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_nID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("FormHtml")] =  m_szFormHtml;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_nID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("FormHtml")].GetValue(m_szFormHtml);
	}

}
void CSysSetUpAdmissionLineForm::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_nID >0)
	{
		szSQL.Format(_T("select hasl_index, hasl_name, hasl_htmlform from hms_admission_setup_line  where hasl_id =%ld and hasl_index =%ld "),m_nIDKEY, m_nID);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("hasl_index"),m_nID);
			rs.GetValue(_T("hasl_name"),m_szName);
			rs.GetValue(_T("hasl_htmlform"),m_szFormHtml);
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
void CSysSetUpAdmissionLineForm::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_ADD)
	{
		m_SetUpAdmissionLine_tbl.SetValue(_T("hasl_id"), m_nIDKEY); 
		m_SetUpAdmissionLine_tbl.SetValue(_T("hasl_index"), m_nID); 
	}
	m_SetUpAdmissionLine_tbl.SetValue(_T("hasl_name"), m_szName); 
	m_SetUpAdmissionLine_tbl.SetValue(_T("hasl_htmlform"), m_szFormHtml);

}
void CSysSetUpAdmissionLineForm::SetDefaultValues(){

	m_nID=0;
	m_szName.Empty();
	m_szFormHtml.Empty();

}
int CSysSetUpAdmissionLineForm::SetMode(int nMode){
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
void CSysSetUpAdmissionLineForm::OnListDblClick(){
	
} 
void CSysSetUpAdmissionLineForm::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem >=0)
	{
		SetDefaultValues();
		m_nID= str2long(m_wndList.GetItemText(nNewItem,0));
		_tprintf(_T("\r\n %ld"),m_nID);
		GetDataToScreen();
	}
	
} 
int CSysSetUpAdmissionLineForm::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteSysSetUpAdmissionLineForm();
	 return 0;
} 
long CSysSetUpAdmissionLineForm::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select hasl_index, hasl_name, hasl_htmlform from hms_admission_setup_line    where hasl_id =%ld "), m_nIDKEY);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hasl_index")), 
			rs.GetValue(_T("hasl_name")),
			rs.GetValue(_T("hasl_htmlform")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CSysSetUpAdmissionLineForm::OnIDChange(){
	
} */
/*void CSysSetUpAdmissionLineForm::OnIDSetfocus(){
	
} */
/*void CSysSetUpAdmissionLineForm::OnIDKillfocus(){
	
} */
int CSysSetUpAdmissionLineForm::OnIDCheckValue(){
	return 0;
} 
/*void CSysSetUpAdmissionLineForm::OnNameChange(){
	
} */
/*void CSysSetUpAdmissionLineForm::OnNameSetfocus(){
	
} */
/*void CSysSetUpAdmissionLineForm::OnNameKillfocus(){
	
} */
int CSysSetUpAdmissionLineForm::OnNameCheckValue(){
	return 0;
} 
/*void CSysSetUpAdmissionLineForm::OnFormHtmlChange(){
	
} */
/*void CSysSetUpAdmissionLineForm::OnFormHtmlSetfocus(){
	
} */
/*void CSysSetUpAdmissionLineForm::OnFormHtmlKillfocus(){
	
} */
int CSysSetUpAdmissionLineForm::OnFormHtmlCheckValue(){
	return 0;
} 
void CSysSetUpAdmissionLineForm::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_ADD);
	
} 
void CSysSetUpAdmissionLineForm::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
	
} 
void CSysSetUpAdmissionLineForm::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteSysSetUpAdmissionLineForm();
} 
void CSysSetUpAdmissionLineForm::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveSysSetUpAdmissionLineForm();
	
} 
void CSysSetUpAdmissionLineForm::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_VIEW);
	
} 
int CSysSetUpAdmissionLineForm::OnAddSysSetUpAdmissionLineForm(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysSetUpAdmissionLineForm::OnEditSysSetUpAdmissionLineForm(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysSetUpAdmissionLineForm::OnDeleteSysSetUpAdmissionLineForm(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM hms_admission_setup_line WHERE hasl_id =%ld and hasl_index =%ld "), m_nIDKEY, m_nID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelSysSetUpAdmissionLineForm();
 	}
	OnListLoadData();
	return 0;
}
int CSysSetUpAdmissionLineForm::OnSaveSysSetUpAdmissionLineForm(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_SetUpAdmissionLine_tbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE  hasl_index = %ld and hasl_id =%ld "), m_nID, m_nIDKEY);
 		szSQL = m_SetUpAdmissionLine_tbl.GetUpdateSQL(_T("hasl_index, hasl_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnSysSetUpAdmissionLineFormListLoadData();
		OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysSetUpAdmissionLineForm::OnCancelSysSetUpAdmissionLineForm(){
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
int CSysSetUpAdmissionLineForm::OnSysSetUpAdmissionLineFormListLoadData(){
	return 0;
}
