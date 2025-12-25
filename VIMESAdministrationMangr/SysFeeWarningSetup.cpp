#include "SysFeeWarningSetup.h"
#include "MainFrm.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CSysFeeWarningSetup *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CSysFeeWarningSetup *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CSysFeeWarningSetup *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CSysFeeWarningSetup *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CSysFeeWarningSetup *pVw = (CSysFeeWarningSetup *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSysFeeWarningSetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSysFeeWarningSetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysFeeWarningSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysFeeWarningSetup*)pWnd)->OnListDeleteItem();
} 

static int _OnListModifyItemFnc(CWnd *pWnd){
	 return ((CSysFeeWarningSetup*)pWnd)->OnListModifyItem();
} 
/*static void _OnFeeNameChangeFnc(CWnd *pWnd){
	((CSysFeeWarningSetup *)pWnd)->OnFeeNameChange();
} */
/*static void _OnFeeNameSetfocusFnc(CWnd *pWnd){
	((CSysFeeWarningSetup *)pWnd)->OnFeeNameSetfocus();} */ 
/*static void _OnFeeNameKillfocusFnc(CWnd *pWnd){
	((CSysFeeWarningSetup *)pWnd)->OnFeeNameKillfocus();
} */
static int _OnFeeNameCheckValueFnc(CWnd *pWnd){
	return ((CSysFeeWarningSetup *)pWnd)->OnFeeNameCheckValue();
} 
/*static void _OnWarningChangeFnc(CWnd *pWnd){
	((CSysFeeWarningSetup *)pWnd)->OnWarningChange();
} */
/*static void _OnWarningSetfocusFnc(CWnd *pWnd){
	((CSysFeeWarningSetup *)pWnd)->OnWarningSetfocus();} */ 
/*static void _OnWarningKillfocusFnc(CWnd *pWnd){
	((CSysFeeWarningSetup *)pWnd)->OnWarningKillfocus();
} */
static int _OnWarningCheckValueFnc(CWnd *pWnd){
	return ((CSysFeeWarningSetup *)pWnd)->OnWarningCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CSysFeeWarningSetup*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSysFeeWarningSetup *pVw = (CSysFeeWarningSetup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddSysFeeWarningSetupFnc(CWnd *pWnd){
	 return ((CSysFeeWarningSetup*)pWnd)->OnAddSysFeeWarningSetup();
} 
static int _OnEditSysFeeWarningSetupFnc(CWnd *pWnd){
	 return ((CSysFeeWarningSetup*)pWnd)->OnEditSysFeeWarningSetup();
} 
static int _OnDeleteSysFeeWarningSetupFnc(CWnd *pWnd){
	 return ((CSysFeeWarningSetup*)pWnd)->OnDeleteSysFeeWarningSetup();
} 
static int _OnSaveSysFeeWarningSetupFnc(CWnd *pWnd){
	 return ((CSysFeeWarningSetup*)pWnd)->OnSaveSysFeeWarningSetup();
} 
static int _OnCancelSysFeeWarningSetupFnc(CWnd *pWnd){
	 return ((CSysFeeWarningSetup*)pWnd)->OnCancelSysFeeWarningSetup();
} 
CSysFeeWarningSetup::CSysFeeWarningSetup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSysFeeWarningSetup::~CSysFeeWarningSetup(){
}
void CSysFeeWarningSetup::OnCreateComponents(){
	m_wndSearchLabel.Create(this, _T("Search"), 5, 5, 85, 30);
	m_wndSearch.Create(this,90, 5, 430, 30); 
	m_wndFind.Create(this, _T("@"), 435, 5, 475, 30);
	m_wndWarningGrp.Create(this, _T("Warning"), 5, 340, 475, 445);
	m_wndFeeNameGrp.Create(this, _T("Fee Name"), 5, 230, 475, 335);
	m_wndList.Create(this,5, 35, 475, 225); 
	m_wndFeeName.Create(this,5, 250, 475, 336, 1, 0, 1); 
	m_wndWarning.Create(this,5, 360, 475, 446, 1, 0, 1); 
	m_wndActive.Create(this, _T("Active"), 5, 450, 95, 475);
	m_wndSave.Create(this, _T("&Save"), 385, 450, 475, 475);

}
void CSysFeeWarningSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(1024);
	//m_wndSearch.SetCheckValue(true);
	m_wndFeeName.SetLimitText(1024);
	//m_wndFeeName.SetCheckValue(true);
	m_wndWarning.SetLimitText(1024);
	m_wndWarning.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(1, _T("Fee Name"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Active"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(3, _T(""), CFMT_TEXT, 0);//Warning
}
void CSysFeeWarningSetup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Active/Deactive"), _OnListModifyItemFnc);
	//m_wndFeeName.SetEvent(WE_CHANGE, _OnFeeNameChangeFnc);
	//m_wndFeeName.SetEvent(WE_SETFOCUS, _OnFeeNameSetfocusFnc);
	//m_wndFeeName.SetEvent(WE_KILLFOCUS, _OnFeeNameKillfocusFnc);
	m_wndFeeName.SetEvent(WE_CHECKVALUE, _OnFeeNameCheckValueFnc);
	//m_wndWarning.SetEvent(WE_CHANGE, _OnWarningChangeFnc);
	//m_wndWarning.SetEvent(WE_SETFOCUS, _OnWarningSetfocusFnc);
	//m_wndWarning.SetEvent(WE_KILLFOCUS, _OnWarningKillfocusFnc);
	m_wndWarning.SetEvent(WE_CHECKVALUE, _OnWarningCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	EnableButtons(FALSE, -1);
	EnableWindow();
	m_wndFeeName.EnableWindow(FALSE);

}
void CSysFeeWarningSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndFeeName.GetDlgCtrlID(), m_szFeeName);
	DDX_Text(pDX, m_wndWarning.GetDlgCtrlID(), m_szWarning);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CSysFeeWarningSetup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("FeeName")] =  m_szFeeName;
	m_jData[_T("Warning")] =  m_szWarning;
	m_jData[_T("Active")] =  m_bActive;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("FeeName")].GetValue(m_szFeeName);
	m_jData[_T("Warning")].GetValue(m_szWarning);
	m_jData[_T("Active")].GetValue(m_bActive);
	}

}
void CSysFeeWarningSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysFeeWarningSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysFeeWarningSetup::SetDefaultValues(){

	m_szSearch.Empty();
	m_szFeeName.Empty();
	m_szWarning.Empty();
	m_bActive=FALSE;

}
int CSysFeeWarningSetup::SetMode(int nMode){
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
/*void CSysFeeWarningSetup::OnSearchChange(){
	
} */
/*void CSysFeeWarningSetup::OnSearchSetfocus(){
	
} */
/*void CSysFeeWarningSetup::OnSearchKillfocus(){
	
} */
int CSysFeeWarningSetup::OnSearchCheckValue(){
	return 0;
} 
void CSysFeeWarningSetup::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
void CSysFeeWarningSetup::OnListDblClick(){
	
} 
void CSysFeeWarningSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFeeName = m_wndList.GetItemText(nNewItem, 1);
	m_szWarning = m_wndList.GetItemText(nNewItem, 3);
	UpdateData(FALSE);
} 
int CSysFeeWarningSetup::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysFeeWarningSetup::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if (!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hfl_feeid||hfl_name) like chr(37)||lower('%s')||chr(37)")
			, m_szSearch);
	}
	szWhere.AppendFormat(_T(" AND nvl(hflw_active, 'N') = '%s'"), m_bActive?_T("Y"):_T("N"));

	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as feename, ") \
				_T(" hflw_active as active, hflw_text as warning ") \
				_T(" FROM hms_fee_list ") \
				_T(" LEFT JOIN hms_fee_list_warning ON (hfl_feeid = hflw_fee_id)")
				_T(" WHERE hfl_active = 'Y' %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("FeeName")), 
			rs.GetValue(_T("Active")),
			rs.GetValue(_T("warning")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

/*void CSysFeeWarningSetup::OnFeeNameChange(){
	
} */
/*void CSysFeeWarningSetup::OnFeeNameSetfocus(){
	
} */
/*void CSysFeeWarningSetup::OnFeeNameKillfocus(){
	
} */
int CSysFeeWarningSetup::OnFeeNameCheckValue(){
	return 0;
} 
/*void CSysFeeWarningSetup::OnWarningChange(){
	
} */
/*void CSysFeeWarningSetup::OnWarningSetfocus(){
	
} */
/*void CSysFeeWarningSetup::OnWarningKillfocus(){
	
} */
int CSysFeeWarningSetup::OnWarningCheckValue(){
	return 0;
} 
void CSysFeeWarningSetup::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
}
void CSysFeeWarningSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return;
	}
	UpdateData();
	CString szSQL;
	szSQL.Format(_T("hms_fee_list_warning_create('%s', q'$%s$')")
				, m_wndList.GetItemText(nSel, 0), m_szWarning);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		OnListLoadData();
	}

} 
int CSysFeeWarningSetup::OnAddSysFeeWarningSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysFeeWarningSetup::OnEditSysFeeWarningSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysFeeWarningSetup::OnDeleteSysFeeWarningSetup(){
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
 		OnCancelSysFeeWarningSetup();
 	}
	return 0;
}
int CSysFeeWarningSetup::OnSaveSysFeeWarningSetup(){
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
 		//OnSysFeeWarningSetupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysFeeWarningSetup::OnCancelSysFeeWarningSetup(){
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
int CSysFeeWarningSetup::OnSysFeeWarningSetupListLoadData(){
	return 0;
}

int CSysFeeWarningSetup::OnListModifyItem()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	CString szSQL;
	szSQL.Format(_T("hms_fee_list_warning_modify('%s')"), m_wndList.GetItemText(nSel, 0));
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		OnListLoadData();
	}
	return 0;
}