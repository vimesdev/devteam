#include "HMSFeePriceSchemaSetupDialog.h"
#include "..\MainFrm.h"
/*static void _OnFindChangeFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaSetupDialog *)pWnd)->OnFindChange();
} */
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaSetupDialog *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaSetupDialog *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaSetupDialog *)pWnd)->OnFindCheckValue();
} 
static void _OnFeeTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeePriceSchemaSetupDialog* )pWnd)->OnFeeTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeTypeSelendokFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaSetupDialog *)pWnd)->OnFeeTypeSelendok();
}
/*static void _OnFeeTypeSetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaSetupDialog *)pWnd)->OnFeeTypeKillfocus();
}*/
/*static void _OnFeeTypeKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaSetupDialog *)pWnd)->OnFeeTypeKillfocus();
}*/
static long _OnFeeTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaSetupDialog *)pWnd)->OnFeeTypeLoadData();
}
/*static void _OnFeeTypeAddNewFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaSetupDialog *)pWnd)->OnFeeTypeAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeePriceSchemaSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaSetupDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaSetupDialog *pVw = (CHMSFeePriceSchemaSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaSetupDialog *pVw = (CHMSFeePriceSchemaSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSFeePriceSchemaSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaSetupDialog*)pWnd)->OnAddHMSFeePriceSchemaSetupDialog();
} 
static int _OnEditHMSFeePriceSchemaSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaSetupDialog*)pWnd)->OnEditHMSFeePriceSchemaSetupDialog();
} 
static int _OnDeleteHMSFeePriceSchemaSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaSetupDialog*)pWnd)->OnDeleteHMSFeePriceSchemaSetupDialog();
} 
static int _OnSaveHMSFeePriceSchemaSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaSetupDialog*)pWnd)->OnSaveHMSFeePriceSchemaSetupDialog();
} 
static int _OnCancelHMSFeePriceSchemaSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaSetupDialog*)pWnd)->OnCancelHMSFeePriceSchemaSetupDialog();
} 
CHMSFeePriceSchemaSetupDialog::CHMSFeePriceSchemaSetupDialog(CWnd *pParent, int nMode, long nPriceSchemaID):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	SetMode(nMode);
	m_nPriceSchemeID = nPriceSchemaID;
	m_szTitle = _T("Apply Fee");
	SetWindowText(m_szTitle);
}
CHMSFeePriceSchemaSetupDialog::~CHMSFeePriceSchemaSetupDialog(){
}
void CHMSFeePriceSchemaSetupDialog::OnCreateComponents(){
	m_wndFeeTypeLabel.Create(this, _T("Fee Type"), 5, 5, 85, 30);
	m_wndFeeType.Create(this,90, 5, 255, 30); 
	m_wndFindLabel.Create(this, _T("Find"), 260, 5, 340, 30);
	m_wndFind.Create(this,345, 5, 510, 30); 
	m_wndList.Create(this,5, 35, 510, 285); 
	m_wndSave.Create(this, _T("Save"), 345, 290, 425, 315);
	m_wndClose.Create(this, _T("Close"), 430, 290, 510, 315);

}
void CHMSFeePriceSchemaSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFind.SetLimitText(35);
	/*
	m_wndFind.SetCheckValue(true);
	m_wndFeeType.SetCheckValue(true);
	*/
	m_wndFeeType.LimitText(35);


	m_wndFeeType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFeeType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.SetCheckBox();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
}
void CHMSFeePriceSchemaSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	m_wndFeeType.SetEvent(WE_SELENDOK, _OnFeeTypeSelendokFnc);
	//m_wndFeeType.SetEvent(WE_SETFOCUS, _OnFeeTypeSetfocusFnc);
	//m_wndFeeType.SetEvent(WE_KILLFOCUS, _OnFeeTypeKillfocusFnc);
	m_wndFeeType.SetEvent(WE_SELCHANGE, _OnFeeTypeSelectChangeFnc);
	m_wndFeeType.SetEvent(WE_LOADDATA, _OnFeeTypeLoadDataFnc);
	//m_wndFeeType.SetEvent(WE_ADDNEW, _OnFeeTypeAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
}
void CHMSFeePriceSchemaSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_TextEx(pDX, m_wndFeeType.GetDlgCtrlID(), m_szFeeTypeKey);

}
void CHMSFeePriceSchemaSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Find")] =  m_szFind;
	m_jData[_T("FeeType")] =  m_szFeeTypeKey;
	}
	else
	{
			
	m_jData[_T("Find")].GetValue(m_szFind);
	m_jData[_T("FeeType")].GetValue(m_szFeeTypeKey);
	}

}
void CHMSFeePriceSchemaSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFeePriceSchemaSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeePriceSchemaSetupDialog::SetDefaultValues(){

	m_szFind.Empty();
	m_szFeeTypeKey.Empty();

}
int CHMSFeePriceSchemaSetupDialog::SetMode(int nMode){
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
/*void CHMSFeePriceSchemaSetupDialog::OnFindChange(){
	
} */
/*void CHMSFeePriceSchemaSetupDialog::OnFindSetfocus(){
	
} */
/*void CHMSFeePriceSchemaSetupDialog::OnFindKillfocus(){
	
} */
int CHMSFeePriceSchemaSetupDialog::OnFindCheckValue(){
	UpdateData();
	OnListLoadData();
	return 0;
} 
void CHMSFeePriceSchemaSetupDialog::OnFeeTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
void CHMSFeePriceSchemaSetupDialog::OnFeeTypeSelendok(){
	 
}
/*void CHMSFeePriceSchemaSetupDialog::OnFeeTypeSetfocus(){
	
}*/
/*void CHMSFeePriceSchemaSetupDialog::OnFeeTypeKillfocus(){
	
}*/
long CHMSFeePriceSchemaSetupDialog::OnFeeTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and substr(hfg_id, 1, 1) = 'B'"));
	return pMF->LoadFeeGroup(&m_wndFeeType, m_szFeeTypeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFeeType.IsSearchKey() && !m_szFeeTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFeeTypeKey
};
	m_wndFeeType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFeePriceSchemaSetupDialog::OnFeeTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFeePriceSchemaSetupDialog::OnListDblClick(){
	
} 
void CHMSFeePriceSchemaSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeePriceSchemaSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeePriceSchemaSetupDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();
	if (!m_szFeeTypeKey.IsEmpty())
	{
		szFilter.Format(_T(" and hfl_groupid = '%s'"), m_szFeeTypeKey);
	}
	if (!m_szFind.IsEmpty())
	{
		szFilter.AppendFormat(_T(" and lower(hfl_name) like ") \
			_T(" chr(37)||lower('%s')||chr(37)"), m_szFind);
	}
	if (GetMode() == VM_ADD)
	{
		szFilter.AppendFormat(_T(" and nvl(hfl_price_schema_id, 0) = 0 "));
	}

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name ") \
				_T(" FROM hms_fee_list ") \
				_T(" WHERE hfl_active = 'Y' %s %s"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return pMF->LoadFeeList(&m_wndList, szFilter);

}
void CHMSFeePriceSchemaSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSFeePriceSchemaSetupDialog();
} 
void CHMSFeePriceSchemaSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSFeePriceSchemaSetupDialog::OnAddHMSFeePriceSchemaSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeePriceSchemaSetupDialog::OnEditHMSFeePriceSchemaSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeePriceSchemaSetupDialog::OnDeleteHMSFeePriceSchemaSetupDialog(){
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
 		OnCancelHMSFeePriceSchemaSetupDialog();
 	}
	return 0;
}
int CHMSFeePriceSchemaSetupDialog::OnSaveHMSFeePriceSchemaSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL.Format(_T("hms_price_schema_applyfee('%s', %ld, '%s')")
			, pMF->GetCurrentUser(), m_nPriceSchemeID, pMF->GetCheckData(&m_wndList));
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = str2long(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		pMF->m_wndPriceSchemaFullView.OnFeeListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeePriceSchemaSetupDialog::OnCancelHMSFeePriceSchemaSetupDialog(){
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
int CHMSFeePriceSchemaSetupDialog::OnHMSFeePriceSchemaSetupDialogListLoadData(){
	return 0;
}
