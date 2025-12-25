#include "IVFStorageListSetupDialog.h"
#include "MainFrm.h"
static long _OnStorageListLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageListSetupDialog*)pWnd)->OnStorageListLoadData();
} 
static void _OnStorageListDblClickFnc(CWnd *pWnd){
	((CIVFStorageListSetupDialog*)pWnd)->OnStorageListDblClick();
} 
static void _OnStorageListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFStorageListSetupDialog*)pWnd)->OnStorageListSelectChange(nOldItem, nNewItem);
} 
static int _OnStorageListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog*)pWnd)->OnStorageListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CIVFStorageListSetupDialog *pVw = (CIVFStorageListSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CIVFStorageListSetupDialog *pVw = (CIVFStorageListSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CIVFStorageListSetupDialog *pVw = (CIVFStorageListSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static long _OnTopInfoLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageListSetupDialog*)pWnd)->OnTopInfoLoadData();
} 
static void _OnTopInfoDblClickFnc(CWnd *pWnd){
	((CIVFStorageListSetupDialog*)pWnd)->OnTopInfoDblClick();
} 
static void _OnTopInfoSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFStorageListSetupDialog*)pWnd)->OnTopInfoSelectChange(nOldItem, nNewItem);
} 
static int _OnTopInfoDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog*)pWnd)->OnTopInfoDeleteItem();
} 
static int _OnAddIVFStorageListSetupDialogFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog*)pWnd)->OnAddIVFStorageListSetupDialog();
} 
static int _OnEditIVFStorageListSetupDialogFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog*)pWnd)->OnEditIVFStorageListSetupDialog();
} 
static int _OnDeleteIVFStorageListSetupDialogFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog*)pWnd)->OnDeleteIVFStorageListSetupDialog();
} 
static int _OnSaveIVFStorageListSetupDialogFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog*)pWnd)->OnSaveIVFStorageListSetupDialog();
} 
static int _OnCancelIVFStorageListSetupDialogFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupDialog*)pWnd)->OnCancelIVFStorageListSetupDialog();
} 
CIVFStorageListSetupDialog::CIVFStorageListSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CIVFStorageListSetupDialog::~CIVFStorageListSetupDialog(){
}
void CIVFStorageListSetupDialog::OnCreateComponents(){
	m_wndStorageList.Create(this,5, 5, 395, 445); 
	m_wndAdd.Create(this, _T("&Add"), 5, 450, 85, 475);
	m_wndEdit.Create(this, _T("&Edit"), 90, 450, 170, 475);
	m_wndDelete.Create(this, _T("&Delete"), 175, 450, 255, 475);
	m_wndTopInfo.Create(this,400, 5, 800, 445); 
}
void CIVFStorageListSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndStorageList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndStorageList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndStorageList.InsertColumn(3, _T("Max"), CFMT_TEXT, 50);

	m_wndTopInfo.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTopInfo.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


}
void CIVFStorageListSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorageList.SetEvent(WE_SELCHANGE, _OnStorageListSelectChangeFnc);
	//m_wndStorageList.SetEvent(WE_LOADDATA, _OnStorageListLoadDataFnc);
	m_wndStorageList.SetEvent(WE_DBLCLICK, _OnStorageListDblClickFnc);
	m_wndStorageList.AddEvent(1, _T("Delete"), _OnStorageListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
/*
	m_wndTopInfo.SetEvent(WE_SELCHANGE, _OnTopInfoSelectChangeFnc);
	m_wndTopInfo.SetEvent(WE_LOADDATA, _OnTopInfoLoadDataFnc);
	m_wndTopInfo.SetEvent(WE_DBLCLICK, _OnTopInfoDblClickFnc);
	m_wndTopInfo.AddEvent(1, _T("Delete"), _OnTopInfoDeleteItemFnc, 0, VK_DELETE, 0);
*/


	SetMode(VM_NONE);
	OnStorageListLoadData();

}
void CIVFStorageListSetupDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CIVFStorageListSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CIVFStorageListSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFStorageListSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFStorageListSetupDialog::SetDefaultValues(){


}
int CIVFStorageListSetupDialog::SetMode(int nMode){
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
void CIVFStorageListSetupDialog::OnStorageListDblClick(){
	
} 
void CIVFStorageListSetupDialog::OnStorageListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	SetMode(VM_VIEW);
} 
int CIVFStorageListSetupDialog::OnStorageListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteIVFStorageListSetupDialog();
	 return 0;
} 
long CIVFStorageListSetupDialog::OnStorageListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT") \
_T("     isl_id,") \
_T("     isl_name, isl_max_capacity, isl_level ") \
_T(" FROM") \
_T("     ivf_storage_list") \
_T(" WHERE") \
_T("     isl_isactive = 'Y'") \
_T(" START WITH") \
_T("     isl_parent_id = 0") \
_T(" CONNECT BY") \
_T("     PRIOR isl_id = isl_parent_id"));

	m_wndStorageList.BeginLoad(); 
	int nCount = 0;
	int nLevel =0;
	CString tmpStr;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("isl_level"), nLevel);
		tmpStr.Empty();
		for(int i =0; i < nLevel; i++)
			tmpStr += _T(" ");
		m_wndStorageList.AddItems(
			tmpStr+rs.GetValue(_T("isl_id")),
			rs.GetValue(_T("isl_name")),
			rs.GetValue(_T("isl_max_capacity")),
			NULL);
		rs.MoveNext();
	}
	m_wndStorageList.EndLoad(); 
	return nCount;

	return 0;
}

#include "IVFStorageListSetupPopup.h"
void CIVFStorageListSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CIVFStorageListSetupPopup *newPopup = new CIVFStorageListSetupPopup(this, VM_ADD);
	
	newPopup->ShowPopup(&m_wndStorageList);

} 
void CIVFStorageListSetupDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndStorageList.GetCurSel();
	if(nSel < 0)
		return;
 	long nID = str2long(m_wndStorageList.GetItemText(nSel, 0));
	CIVFStorageListSetupPopup *newPopup = new CIVFStorageListSetupPopup(this, VM_EDIT);
	newPopup->m_szID.Format(_T("%ld"), nID);
	newPopup->ShowPopup(&m_wndStorageList);

} 
void CIVFStorageListSetupDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteIVFStorageListSetupDialog();	
} 
void CIVFStorageListSetupDialog::OnTopInfoDblClick(){
	
} 
void CIVFStorageListSetupDialog::OnTopInfoSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageListSetupDialog::OnTopInfoDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFStorageListSetupDialog::OnTopInfoLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTopInfo.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTopInfo.AddItems(
		rs.MoveNext();
	}
	m_wndTopInfo.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CIVFStorageListSetupDialog::OnAddIVFStorageListSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFStorageListSetupDialog::OnEditIVFStorageListSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFStorageListSetupDialog::OnDeleteIVFStorageListSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	int nSel = m_wndStorageList.GetCurSel();
	if(nSel < 0)
		return 0;

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	long nID = str2long(m_wndStorageList.GetItemText(nSel, 0));
 	szSQL.Format(_T("IVF_STORAGE_LIST_DELETE('%s', %ld) "), pMF->GetCurrentUser(), nID);
 	int ret = str2long(pMF->ExecDML(szSQL));
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelIVFStorageListSetupDialog();
 	}
	return 0;
}
int CIVFStorageListSetupDialog::OnSaveIVFStorageListSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
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
 		//OnIVFStorageListSetupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFStorageListSetupDialog::OnCancelIVFStorageListSetupDialog(){
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
int CIVFStorageListSetupDialog::OnIVFStorageListSetupDialogListLoadData(){
	return 0;
}
