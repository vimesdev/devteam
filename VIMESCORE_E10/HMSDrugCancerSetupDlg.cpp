#include "HMSDrugCancerSetupDlg.h"
#include "MainFrame_E10.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDrugCancerSetupDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDrugCancerSetupDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDrugCancerSetupDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListManipulateItemFnc(CWnd *pWnd){
	 return ((CHMSDrugCancerSetupDlg*)pWnd)->OnListManipulateItem();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDrugCancerSetupDlg* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSDrugCancerSetupDlg *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSDrugCancerSetupDlg *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSDrugCancerSetupDlg *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSDrugCancerSetupDlg *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSDrugCancerSetupDlg *)pWnd)->OnNameAddNew();
}*/
/*static void _OnPercentChangeFnc(CWnd *pWnd){
	((CHMSDrugCancerSetupDlg *)pWnd)->OnPercentChange();
} */
/*static void _OnPercentSetfocusFnc(CWnd *pWnd){
	((CHMSDrugCancerSetupDlg *)pWnd)->OnPercentSetfocus();} */ 
/*static void _OnPercentKillfocusFnc(CWnd *pWnd){
	((CHMSDrugCancerSetupDlg *)pWnd)->OnPercentKillfocus();
} */
static int _OnPercentCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugCancerSetupDlg *)pWnd)->OnPercentCheckValue();
} 
static void _OnInactiveSelectFnc(CWnd *pWnd){
	 ((CHMSDrugCancerSetupDlg*)pWnd)->OnInactiveSelect();
}
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSDrugCancerSetupDlg *pVw = (CHMSDrugCancerSetupDlg *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDrugCancerSetupDlg *pVw = (CHMSDrugCancerSetupDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDrugCancerSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSDrugCancerSetupDlg*)pWnd)->OnAddHMSDrugCancerSetupDlg();
} 
static int _OnEditHMSDrugCancerSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSDrugCancerSetupDlg*)pWnd)->OnEditHMSDrugCancerSetupDlg();
} 
static int _OnDeleteHMSDrugCancerSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSDrugCancerSetupDlg*)pWnd)->OnDeleteHMSDrugCancerSetupDlg();
} 
static int _OnSaveHMSDrugCancerSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSDrugCancerSetupDlg*)pWnd)->OnSaveHMSDrugCancerSetupDlg();
} 
static int _OnCancelHMSDrugCancerSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSDrugCancerSetupDlg*)pWnd)->OnCancelHMSDrugCancerSetupDlg();
} 
CHMSDrugCancerSetupDlg::CHMSDrugCancerSetupDlg(CWnd *pParent):
	CGuiDialog(pParent){
	m_nOldPercent = 0;
	m_nDlgWidth = 485;
	m_nDlgHeight = 355;
	SetDefaultValues();
}
CHMSDrugCancerSetupDlg::~CHMSDrugCancerSetupDlg(){
}
void CHMSDrugCancerSetupDlg::OnCreateComponents(){
	m_wndDrugCancerSetup.Create(this, _T("Drug Cancer Setup"), 5, 5, 475, 315);
	m_wndList.Create(this,10, 30, 470, 280); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 285, 90, 310);
	m_wndName.Create(this,95, 285, 300, 310); 
	m_wndPercentLabel.Create(this, _T("Percent"), 305, 285, 385, 310);
	m_wndPercent.Create(this,390, 285, 470, 310); 
	m_wndInactive.Create(this, _T("Inactive"), 5, 320, 120, 345);
	m_wndApply.Create(this, _T("&Apply"), 310, 320, 390, 345);
	m_wndClose.Create(this, _T("&Close"), 395, 320, 475, 345);

}
void CHMSDrugCancerSetupDlg::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndPercent.SetLimitText(16);
	m_wndPercent.SetCheckValue(true);
	//m_wndPercent.SetNumberDecimal(3);

	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(2, _T("Code"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Name"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(4, _T("Percent"), CFMT_TEXT, 50);

	m_wndName.Format(3, 2);
	m_wndName.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndName.InsertColumn(1, _T("Code"), CFMT_TEXT, 100);
	m_wndName.InsertColumn(2, _T("Name"), CFMT_TEXT, 450);

}
void CHMSDrugCancerSetupDlg::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Activate/Deactivate item"), _OnListManipulateItemFnc, 0);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndPercent.SetEvent(WE_CHANGE, _OnPercentChangeFnc);
	//m_wndPercent.SetEvent(WE_SETFOCUS, _OnPercentSetfocusFnc);
	//m_wndPercent.SetEvent(WE_KILLFOCUS, _OnPercentKillfocusFnc);
	m_wndPercent.SetEvent(WE_CHECKVALUE, _OnPercentCheckValueFnc);
	m_wndInactive.SetEvent(WE_CLICK, _OnInactiveSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
	SetMode(VM_NONE);

}
void CHMSDrugCancerSetupDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndPercent.GetDlgCtrlID(), m_nPercent);
	DDX_Check(pDX, m_wndInactive.GetDlgCtrlID(), m_bInactive);

}
void CHMSDrugCancerSetupDlg::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT mdc_percent*100 percent FROM m_product_view LEFT JOIN m_drug_cancer ON (mdc_product_id = product_id) WHERE product_id = %s AND product_isactive = 'Y'"), m_szNameKey);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("percent"), m_nPercent);
		UpdateData(false);
	}
	else
		SetMode(VM_NONE);

}
void CHMSDrugCancerSetupDlg::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CHMSDrugCancerSetupDlg::SetDefaultValues(){

	m_szNameKey.Empty();
	m_nPercent=0;
	m_bInactive=FALSE;

}
int CHMSDrugCancerSetupDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSDrugCancerSetupDlg::OnListDblClick(){
	
} 
void CHMSDrugCancerSetupDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szNameKey = m_wndList.GetItemText(nNewItem, 0);
	m_nOldPercent = str2int(m_wndList.GetItemText(nNewItem, 4));
	m_nPercent = m_nOldPercent;
	UpdateData(false);
} 
int CHMSDrugCancerSetupDlg::OnListManipulateItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szEvent, szDesc, szStatus;
	UpdateData(true);
	if (m_bInactive)
	{
		szStatus = _T("Y");
		szEvent = _T("Activate Drug Cancer");
		if (m_nOldPercent != m_nPercent)
			szDesc.Format(_T("[ID: %s] %%: %f -> %%: %f"), m_szNameKey, m_nOldPercent, m_nPercent);
		else
			szDesc.Format(_T("Product ID: %s"), m_szNameKey);
	}
	else
	{
		szStatus = _T("N");
		szEvent = _T("Deactivate Drug Cancer");
		if (m_nOldPercent != m_nPercent)
			szDesc.Format(_T("[ID: %s] %%: %f -> %%: %f"), m_szNameKey, m_nOldPercent, m_nPercent);
		else
			szDesc.Format(_T("Product ID: %s"), m_szNameKey);
	}
	szSQL.Format(_T("HMS_SETDRUGCANCER(%s, %f, '%s')"), m_szNameKey, m_nPercent/100, szStatus);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		pMF->SystemLog(szEvent, szDesc);
		OnListLoadData();
	}
	return 0;
} 
long CHMSDrugCancerSetupDlg::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szWhere.Format(_T(" AND mdc_isactive = 'Y'"));
	if (m_bInactive)
		szWhere.Format(_T(" AND mdc_isactive = 'N'"));
	szSQL.Format(_T("SELECT mdc_product_id product_id, product_code, product_name name, mdc_percent*100 percent ") \
				 _T("FROM m_drug_cancer LEFT JOIN m_product_view ON (product_id = mdc_product_id) ") \
				 _T("WHERE 1=1 %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Product_ID")), 
			int2str(nIdx++),
			rs.GetValue(_T("product_code")),
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Percent")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSDrugCancerSetupDlg::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHMSDrugCancerSetupDlg::OnNameSelendok(){
	UpdateData(true);
	GetDataToScreen();
}
/*void CHMSDrugCancerSetupDlg::OnNameSetfocus(){
	
}*/
/*void CHMSDrugCancerSetupDlg::OnNameKillfocus(){
	
}*/
long CHMSDrugCancerSetupDlg::OnNameLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
		szWhere.Format(_T(" and product_id='%s' "), m_szNameKey);
	}
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT product_id as id, product_code code, product_name as name FROM m_product_view WHERE product_isactive = 'Y' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDrugCancerSetupDlg::OnNameAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CHMSDrugCancerSetupDlg::OnPercentChange(){
	
} */
/*void CHMSDrugCancerSetupDlg::OnPercentSetfocus(){
	
} */
/*void CHMSDrugCancerSetupDlg::OnPercentKillfocus(){
	
} */
int CHMSDrugCancerSetupDlg::OnPercentCheckValue(){
	UpdateData(true);
	if (m_nPercent < 1 || m_nPercent >= 100)
	{
		m_wndPercent.SetToolTipMessage(_T("Invalid Data."));
		return -1;
	}
	return 0;
} 
void CHMSDrugCancerSetupDlg::OnInactiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();	
}
void CHMSDrugCancerSetupDlg::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szEvent, szDesc;
	if (!pMF->CheckPermission(_T("16"))){
		AfxMessageBox(_T("Permmission Denied."));
		return;
	}
	szSQL.Format(_T("HMS_SETDRUGCANCER(%s, %f)"), m_szNameKey, m_nPercent/100);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		if (nRet == 1)
		{
			szEvent = _T("Add Drug Cancer");
			szDesc.Format(_T("User: %s|Product ID: %s|Percent: %f"), pMF->GetCurrentUser(), m_szNameKey, m_nPercent);
		}
		else if (nRet == 2)
		{
			szEvent = _T("Edit Drug Cancer");
			szDesc.Format(_T("User: %s|[ID: %s] %%: %f -> %%: %f"), pMF->GetCurrentUser(), m_szNameKey, m_nOldPercent, m_nPercent);
		}
		else if (nRet == 3)
		{
			szEvent = _T("Deactive Drug Cancer");
			szDesc.Format(_T("User: %s|Product ID: %s|Percent: %f"), pMF->GetCurrentUser(), m_szNameKey, m_nPercent);
		}
		pMF->SystemLog(szEvent, szDesc);
		ShowMessageBox(_T("Apply succesfully"));
		OnListLoadData();
	}
	else
	{
	}
} 
void CHMSDrugCancerSetupDlg::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSDrugCancerSetupDlg::OnAddHMSDrugCancerSetupDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDrugCancerSetupDlg::OnEditHMSDrugCancerSetupDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDrugCancerSetupDlg::OnDeleteHMSDrugCancerSetupDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSDrugCancerSetupDlg();
 	}
	return 0;
}
int CHMSDrugCancerSetupDlg::OnSaveHMSDrugCancerSetupDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnHMSDrugCancerSetupDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDrugCancerSetupDlg::OnCancelHMSDrugCancerSetupDlg(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CHMSDrugCancerSetupDlg::OnHMSDrugCancerSetupDlgListLoadData(){
	return 0;
}
