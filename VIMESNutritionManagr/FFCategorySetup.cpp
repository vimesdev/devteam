#include "FFCategorySetup.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFFCategorySetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFFCategorySetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFFCategorySetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFFCategorySetup*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CFFCategorySetup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CFFCategorySetup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CFFCategorySetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CFFCategorySetup *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CFFCategorySetup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CFFCategorySetup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CFFCategorySetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CFFCategorySetup *)pWnd)->OnNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFFCategorySetup *pVw = (CFFCategorySetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFFCategorySetup *pVw = (CFFCategorySetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFFCategorySetup *pVw = (CFFCategorySetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFFCategorySetup *pVw = (CFFCategorySetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFFCategorySetup *pVw = (CFFCategorySetup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFFCategorySetupFnc(CWnd *pWnd){
	 return ((CFFCategorySetup*)pWnd)->OnAddFFCategorySetup();
} 
static int _OnEditFFCategorySetupFnc(CWnd *pWnd){
	 return ((CFFCategorySetup*)pWnd)->OnEditFFCategorySetup();
} 
static int _OnDeleteFFCategorySetupFnc(CWnd *pWnd){
	 return ((CFFCategorySetup*)pWnd)->OnDeleteFFCategorySetup();
} 
static int _OnSaveFFCategorySetupFnc(CWnd *pWnd){
	 return ((CFFCategorySetup*)pWnd)->OnSaveFFCategorySetup();
} 
static int _OnCancelFFCategorySetupFnc(CWnd *pWnd){
	 return ((CFFCategorySetup*)pWnd)->OnCancelFFCategorySetup();
} 
CFFCategorySetup::CFFCategorySetup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFFCategorySetup::~CFFCategorySetup(){
}
void CFFCategorySetup::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 325, 205); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 210, 85, 235);
	m_wndID.Create(this,90, 210, 325, 235); 
	m_wndNameLabel.Create(this, _T("Name"), 5, 240, 85, 265);
	m_wndName.Create(this,90, 240, 325, 265); 
	m_wndAdd.Create(this, _T("Add"), 5, 270, 65, 295);
	m_wndEdit.Create(this, _T("Edit"), 70, 270, 130, 295);
	m_wndDelete.Create(this, _T("Delete"), 135, 270, 195, 295);
	m_wndSave.Create(this, _T("Save"), 200, 270, 260, 295);
	m_wndClose.Create(this, _T("Close"), 265, 270, 325, 295);

}
void CFFCategorySetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CFFCategorySetup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
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
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);
	OnListLoadData();

}
void CFFCategorySetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CFFCategorySetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ss_code, ss_desc FROM sys_sel WHERE ss_id = 'hms_ff_category' AND ss_code = '%s'"), m_szcurID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("ss_code"), m_szID);
		rs.GetValue(_T("ss_desc"), m_szName);
	}
	UpdateData(FALSE);
	SetMode(VM_VIEW);

}
void CFFCategorySetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFFCategorySetup::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();

}
int CFFCategorySetup::SetMode(int nMode){
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
			m_wndID.EnableWindow(FALSE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 5, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CFFCategorySetup::OnListDblClick(){
	
} 
void CFFCategorySetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szcurID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CFFCategorySetup::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFFCategorySetup::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_ff_category' ORDER BY ss_code"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CFFCategorySetup::OnIDChange(){
	
} */
/*void CFFCategorySetup::OnIDSetfocus(){
	
} */
/*void CFFCategorySetup::OnIDKillfocus(){
	
} */
int CFFCategorySetup::OnIDCheckValue(){
	return 0;
} 
/*void CFFCategorySetup::OnNameChange(){
	
} */
/*void CFFCategorySetup::OnNameSetfocus(){
	
} */
/*void CFFCategorySetup::OnNameKillfocus(){
	
} */
int CFFCategorySetup::OnNameCheckValue(){
	return 0;
} 
void CFFCategorySetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFFCategorySetup();
} 
void CFFCategorySetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFFCategorySetup();
} 
void CFFCategorySetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteFFCategorySetup();
} 
void CFFCategorySetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFFCategorySetup();
} 
void CFFCategorySetup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CFFCategorySetup::OnAddFFCategorySetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFFCategorySetup::OnEditFFCategorySetup(){

 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFFCategorySetup::OnDeleteFFCategorySetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM sys_sel WHERE ss_id = 'hms_ff_category' AND ss_code = '%s'"), m_szcurID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
		OnListLoadData();
 		OnCancelFFCategorySetup();
 	}
	return 0;
}
int CFFCategorySetup::OnSaveFFCategorySetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
		szSQL.Format(_T("INSERT INTO sys_sel (ss_id, ss_code, ss_desc) VALUES ('hms_ff_category', '%s', '%s')"), m_szID, m_szName);
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE ss_id = 'hms_ff_category' AND ss_code = '%s'"), m_szcurID);
		szSQL.Format(_T("UPDATE sys_sel SET ss_desc = '%s'"), m_szName);
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFFCategorySetupListLoadData();
		OnListLoadData();
 		SetMode(VM_NONE);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFFCategorySetup::OnCancelFFCategorySetup(){
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
int CFFCategorySetup::OnFFCategorySetupListLoadData(){
	return 0;
}
