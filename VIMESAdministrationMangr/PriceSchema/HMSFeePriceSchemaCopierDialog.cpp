#include "HMSFeePriceSchemaCopierDialog.h"
#include "..\MainFrm.h"
static void _OnFeeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeePriceSchemaCopierDialog* )pWnd)->OnFeeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeSelendokFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaCopierDialog *)pWnd)->OnFeeSelendok();
}
/*static void _OnFeeSetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaCopierDialog *)pWnd)->OnFeeKillfocus();
}*/
/*static void _OnFeeKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaCopierDialog *)pWnd)->OnFeeKillfocus();
}*/
static long _OnFeeLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaCopierDialog *)pWnd)->OnFeeLoadData();
}
/*static void _OnFeeAddNewFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaCopierDialog *)pWnd)->OnFeeAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeePriceSchemaCopierDialog* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaCopierDialog *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaCopierDialog *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaCopierDialog *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaCopierDialog *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaCopierDialog *)pWnd)->OnSourceAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaCopierDialog *pVw = (CHMSFeePriceSchemaCopierDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaCopierDialog *pVw = (CHMSFeePriceSchemaCopierDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSFeePriceSchemaCopierDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaCopierDialog*)pWnd)->OnAddHMSFeePriceSchemaCopierDialog();
} 
static int _OnEditHMSFeePriceSchemaCopierDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaCopierDialog*)pWnd)->OnEditHMSFeePriceSchemaCopierDialog();
} 
static int _OnDeleteHMSFeePriceSchemaCopierDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaCopierDialog*)pWnd)->OnDeleteHMSFeePriceSchemaCopierDialog();
} 
static int _OnSaveHMSFeePriceSchemaCopierDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaCopierDialog*)pWnd)->OnSaveHMSFeePriceSchemaCopierDialog();
} 
static int _OnCancelHMSFeePriceSchemaCopierDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaCopierDialog*)pWnd)->OnCancelHMSFeePriceSchemaCopierDialog();
} 
CHMSFeePriceSchemaCopierDialog::CHMSFeePriceSchemaCopierDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szTitle = _T("Copy price schema");
	SetWindowText(m_szTitle);
}
CHMSFeePriceSchemaCopierDialog::~CHMSFeePriceSchemaCopierDialog(){
}
void CHMSFeePriceSchemaCopierDialog::OnCreateComponents(){
	m_wndFeeLabel.Create(this, _T("Fee"), 5, 35, 85, 60);
	m_wndFee.Create(this,90, 35, 340, 60); 
	m_wndSourceLabel.Create(this, _T("Source"), 5, 5, 85, 30);
	m_wndSource.Create(this,90, 5, 340, 30); 
	m_wndSave.Create(this, _T("Save"), 175, 65, 255, 90);
	m_wndClose.Create(this, _T("Close"), 260, 65, 340, 90);

}
void CHMSFeePriceSchemaCopierDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFee.SetCheckValue(true);
	m_wndFee.LimitText(35);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(35);
	m_wndSource.SetReadOnly();

	m_wndSource.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndSource.InsertColumn(2, _T("PriceSchemaID"), CFMT_TEXT, 0);

	m_wndFee.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndFee.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
}
void CHMSFeePriceSchemaCopierDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFee.SetEvent(WE_SELENDOK, _OnFeeSelendokFnc);
	//m_wndFee.SetEvent(WE_SETFOCUS, _OnFeeSetfocusFnc);
	//m_wndFee.SetEvent(WE_KILLFOCUS, _OnFeeKillfocusFnc);
	m_wndFee.SetEvent(WE_SELCHANGE, _OnFeeSelectChangeFnc);
	m_wndFee.SetEvent(WE_LOADDATA, _OnFeeLoadDataFnc);
	//m_wndFee.SetEvent(WE_ADDNEW, _OnFeeAddNewFnc);
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(GetMode());
}
void CHMSFeePriceSchemaCopierDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFee.GetDlgCtrlID(), m_szFeeKey);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);

}
void CHMSFeePriceSchemaCopierDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Fee")] =  m_szFeeKey;
	m_jData[_T("Source")] =  m_szSourceKey;
	}
	else
	{
			
	m_jData[_T("Fee")].GetValue(m_szFeeKey);
	m_jData[_T("Source")].GetValue(m_szSourceKey);
	}

}
void CHMSFeePriceSchemaCopierDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFeePriceSchemaCopierDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeePriceSchemaCopierDialog::SetDefaultValues(){

	m_szFeeKey.Empty();
	//m_szSourceKey.Empty();

}
int CHMSFeePriceSchemaCopierDialog::SetMode(int nMode){
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
		m_wndSource.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSFeePriceSchemaCopierDialog::OnFeeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaCopierDialog::OnFeeSelendok(){
	 
}
/*void CHMSFeePriceSchemaCopierDialog::OnFeeSetfocus(){
	
}*/
/*void CHMSFeePriceSchemaCopierDialog::OnFeeKillfocus(){
	
}*/
long CHMSFeePriceSchemaCopierDialog::OnFeeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and nvl(hfl_price_schema_id, 0) = 0"));
	return pMF->LoadFeeList(&m_wndFee, m_szFeeKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFee.IsSearchKey() && !m_szFeeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFeeKey
};
	m_wndFee.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFee.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFeePriceSchemaCopierDialog::OnFeeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFeePriceSchemaCopierDialog::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaCopierDialog::OnSourceSelendok(){
	 
}
/*void CHMSFeePriceSchemaCopierDialog::OnSourceSetfocus(){
	
}*/
/*void CHMSFeePriceSchemaCopierDialog::OnSourceKillfocus(){
	
}*/
long CHMSFeePriceSchemaCopierDialog::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and nvl(hfl_price_schema_id, 0) > 0"));
	return pMF->LoadFeeList(&m_wndSource, m_szSourceKey, szFilter);
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
/*void CHMSFeePriceSchemaCopierDialog::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFeePriceSchemaCopierDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSFeePriceSchemaCopierDialog();
} 
void CHMSFeePriceSchemaCopierDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSFeePriceSchemaCopierDialog::OnAddHMSFeePriceSchemaCopierDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeePriceSchemaCopierDialog::OnEditHMSFeePriceSchemaCopierDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeePriceSchemaCopierDialog::OnDeleteHMSFeePriceSchemaCopierDialog(){
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
 		OnCancelHMSFeePriceSchemaCopierDialog();
 	}
	return 0;
}
int CHMSFeePriceSchemaCopierDialog::OnSaveHMSFeePriceSchemaCopierDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
		szSQL.Format(_T("hms_fee_price_schema_copy('%s','%s','%s')")
			,pMF->GetCurrentUser(),m_szSourceKey,m_szFeeKey);
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		pMF->m_wndFeePriceSchemaView.OnPendingListLoadData();
		pMF->m_wndFeePriceSchemaView.OnFeeListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeePriceSchemaCopierDialog::OnCancelHMSFeePriceSchemaCopierDialog(){
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
