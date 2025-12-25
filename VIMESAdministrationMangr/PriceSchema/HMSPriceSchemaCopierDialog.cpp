#include "HMSPriceSchemaCopierDialog.h"
#include "..\MainFrm.h"

/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSPriceSchemaCopierDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaCopierDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaCopierDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaCopierDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPriceSchemaCopierDialog* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CHMSPriceSchemaCopierDialog *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaCopierDialog *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaCopierDialog *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaCopierDialog *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CHMSPriceSchemaCopierDialog *)pWnd)->OnSourceAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaCopierDialog *pVw = (CHMSPriceSchemaCopierDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaCopierDialog *pVw = (CHMSPriceSchemaCopierDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPriceSchemaCopierDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaCopierDialog*)pWnd)->OnAddHMSPriceSchemaCopierDialog();
} 
static int _OnEditHMSPriceSchemaCopierDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaCopierDialog*)pWnd)->OnEditHMSPriceSchemaCopierDialog();
} 
static int _OnDeleteHMSPriceSchemaCopierDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaCopierDialog*)pWnd)->OnDeleteHMSPriceSchemaCopierDialog();
} 
static int _OnSaveHMSPriceSchemaCopierDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaCopierDialog*)pWnd)->OnSaveHMSPriceSchemaCopierDialog();
} 
static int _OnCancelHMSPriceSchemaCopierDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaCopierDialog*)pWnd)->OnCancelHMSPriceSchemaCopierDialog();
} 
CHMSPriceSchemaCopierDialog::CHMSPriceSchemaCopierDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szTitle = _T("Copy price schema");
	SetWindowText(m_szTitle);
}
CHMSPriceSchemaCopierDialog::~CHMSPriceSchemaCopierDialog(){
}
void CHMSPriceSchemaCopierDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 5, 5, 85, 30);
	m_wndName.Create(this,90, 5, 340, 30); 
	m_wndSourceLabel.Create(this, _T("Source"), 5, 35, 85, 60);
	m_wndSource.Create(this,90, 35, 340, 60); 
	m_wndSave.Create(this, _T("Save"), 175, 65, 255, 90);
	m_wndClose.Create(this, _T("Close"), 260, 65, 340, 90);

}
void CHMSPriceSchemaCopierDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(35);


	m_wndSource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSPriceSchemaCopierDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);
}
void CHMSPriceSchemaCopierDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);

}
void CHMSPriceSchemaCopierDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Source")] =  m_szSourceKey;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Source")].GetValue(m_szSourceKey);
	}

}
void CHMSPriceSchemaCopierDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPriceSchemaCopierDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPriceSchemaCopierDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szSourceKey.Empty();

}
int CHMSPriceSchemaCopierDialog::SetMode(int nMode){
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
		EnableButtons(FALSE, -1);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSPriceSchemaCopierDialog::OnNameChange(){
	
} */
/*void CHMSPriceSchemaCopierDialog::OnNameSetfocus(){
	
} */
/*void CHMSPriceSchemaCopierDialog::OnNameKillfocus(){
	
} */
int CHMSPriceSchemaCopierDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSPriceSchemaCopierDialog::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriceSchemaCopierDialog::OnSourceSelendok(){
	 
}
/*void CHMSPriceSchemaCopierDialog::OnSourceSetfocus(){
	
}*/
/*void CHMSPriceSchemaCopierDialog::OnSourceKillfocus(){
	
}*/
long CHMSPriceSchemaCopierDialog::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadPriceSchema(&m_wndSource, m_szSourceKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSourceKey
};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPriceSchemaCopierDialog::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPriceSchemaCopierDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSPriceSchemaCopierDialog();
} 
void CHMSPriceSchemaCopierDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSPriceSchemaCopierDialog::OnAddHMSPriceSchemaCopierDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPriceSchemaCopierDialog::OnEditHMSPriceSchemaCopierDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPriceSchemaCopierDialog::OnDeleteHMSPriceSchemaCopierDialog(){
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
 		OnCancelHMSPriceSchemaCopierDialog();
 	}
	return 0;
}
int CHMSPriceSchemaCopierDialog::OnSaveHMSPriceSchemaCopierDialog(){
	_tprintf(_T("Mode: %d"), GetMode());	
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -2;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	szSQL.Format(_T("hms_price_schema_copy('%s', %ld, '%s')")
		, pMF->GetCurrentUser(), str2long(m_szSourceKey), m_szName);
 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		//OnHMSPriceSchemaCopierDialogListLoadData();
		pMF->m_wndPriceSchemaFullView.OnSchemaListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPriceSchemaCopierDialog::OnCancelHMSPriceSchemaCopierDialog(){
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
int CHMSPriceSchemaCopierDialog::OnHMSPriceSchemaCopierDialogListLoadData(){
	return 0;
}
