#include "HMSConfigSetupDlg.h"
#include "MainFrm.h"
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSConfigSetupDlg* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSConfigSetupDlg *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnNameAddNew();
}*/
/*static void _OnValueTextChangeFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnValueTextChange();
} */
/*static void _OnValueTextSetfocusFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnValueTextSetfocus();} */ 
/*static void _OnValueTextKillfocusFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnValueTextKillfocus();
} */
static int _OnValueTextCheckValueFnc(CWnd *pWnd){
	return ((CHMSConfigSetupDlg *)pWnd)->OnValueTextCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSConfigSetupDlg *pVw = (CHMSConfigSetupDlg *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSConfigSetupDlg *pVw = (CHMSConfigSetupDlg *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnValueNumberChangeFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnValueNumberChange();
} */
/*static void _OnValueNumberSetfocusFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnValueNumberSetfocus();} */ 
/*static void _OnValueNumberKillfocusFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnValueNumberKillfocus();
} */
static int _OnValueNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSConfigSetupDlg *)pWnd)->OnValueNumberCheckValue();
} 
/*static void _OnValueDateChangeFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnValueDateChange();
} */
/*static void _OnValueDateSetfocusFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnValueDateSetfocus();} */ 
/*static void _OnValueDateKillfocusFnc(CWnd *pWnd){
	((CHMSConfigSetupDlg *)pWnd)->OnValueDateKillfocus();
} */
static int _OnValueDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSConfigSetupDlg *)pWnd)->OnValueDateCheckValue();
} 
static int _OnAddHMSConfigSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSConfigSetupDlg*)pWnd)->OnAddHMSConfigSetupDlg();
} 
static int _OnEditHMSConfigSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSConfigSetupDlg*)pWnd)->OnEditHMSConfigSetupDlg();
} 
static int _OnDeleteHMSConfigSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSConfigSetupDlg*)pWnd)->OnDeleteHMSConfigSetupDlg();
} 
static int _OnSaveHMSConfigSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSConfigSetupDlg*)pWnd)->OnSaveHMSConfigSetupDlg();
} 
static int _OnCancelHMSConfigSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSConfigSetupDlg*)pWnd)->OnCancelHMSConfigSetupDlg();
} 
CHMSConfigSetupDlg::CHMSConfigSetupDlg(CWnd *pParent):
	CGuiDialog(pParent){
	m_nType = 0;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSConfigSetupDlg::~CHMSConfigSetupDlg(){
}
void CHMSConfigSetupDlg::OnCreateComponents(){
	m_wndConfigSetup.Create(this, _T("Config Setup"), 5, 5, 295, 90);
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 90, 55);
	m_wndName.Create(this,95, 30, 290, 55); 
	m_wndValueLabel.Create(this, _T("Value"), 10, 60, 90, 85);
	m_wndValueText.Create(this,95, 60, 290, 85); 
	m_wndValueNumber.Create(this,95, 60, 290, 85); 
	m_wndValueDate.Create(this,95, 60, 290, 85); 
	m_wndApply.Create(this, _T("&Apply"), 130, 95, 210, 120);
	m_wndClose.Create(this, _T("&Close"), 215, 95, 295, 120);
	m_wndValueNumber.ShowWindow(SW_HIDE);
	m_wndValueDate.ShowWindow(SW_HIDE);

}
void CHMSConfigSetupDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndValueText.SetLimitText(128);
	m_wndValueText.SetNotEmpty(false);
	m_wndValueText.SetCheckValue(true);
	m_wndValueNumber.SetLimitText(16);
	m_wndValueNumber.SetCheckValue(true);
	m_wndValueDate.SetCheckValue(true);

	m_wndName.Format(2, 0);
	m_wndName.InsertColumn(0, _T("ID"), CFMT_TEXT, 200);
	m_wndName.InsertColumn(1, _T(""), CFMT_TEXT, 100);

}
void CHMSConfigSetupDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndValueText.SetEvent(WE_CHANGE, _OnValueTextChangeFnc);
	//m_wndValueText.SetEvent(WE_SETFOCUS, _OnValueTextSetfocusFnc);
	//m_wndValueText.SetEvent(WE_KILLFOCUS, _OnValueTextKillfocusFnc);
	m_wndValueText.SetEvent(WE_CHECKVALUE, _OnValueTextCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndValueNumber.SetEvent(WE_CHANGE, _OnValueNumberChangeFnc);
	//m_wndValueNumber.SetEvent(WE_SETFOCUS, _OnValueNumberSetfocusFnc);
	//m_wndValueNumber.SetEvent(WE_KILLFOCUS, _OnValueNumberKillfocusFnc);
	m_wndValueNumber.SetEvent(WE_CHECKVALUE, _OnValueNumberCheckValueFnc);
	//m_wndValueDate.SetEvent(WE_CHANGE, _OnValueDateChangeFnc);
	//m_wndValueDate.SetEvent(WE_SETFOCUS, _OnValueDateSetfocusFnc);
	//m_wndValueDate.SetEvent(WE_KILLFOCUS, _OnValueDateKillfocusFnc);
	m_wndValueDate.SetEvent(WE_CHECKVALUE, _OnValueDateCheckValueFnc);
	SetMode(VM_ADD);

}
void CHMSConfigSetupDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndValueText.GetDlgCtrlID(), m_szValueText);
	DDX_Text(pDX, m_wndValueNumber.GetDlgCtrlID(), m_nValueNumber);
	DDX_TextEx(pDX, m_wndValueDate.GetDlgCtrlID(), m_szValueDate);

}
void CHMSConfigSetupDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSConfigSetupDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSConfigSetupDlg::SetDefaultValues(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szNameKey.Empty();
	m_szValueText.Empty();
	m_nValueNumber=0;
	m_szValueDate = pMF->GetSysDate();
	m_szValueDate += _T("00:00");

}
int CHMSConfigSetupDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
 			EnableButtons(TRUE, 0, 1, -1);
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
void CHMSConfigSetupDlg::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSConfigSetupDlg::OnNameSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szVal;
	szSQL.Format(_T(" SELECT %s, (select data_type from all_tab_columns where column_name = '%s' and table_name = 'HMS_CONFIG') data_type") \
				 _T(" FROM hms_config"), m_szNameKey, m_szNameKey);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("data_type"), tmpStr);
	if (tmpStr.Find(_T("VARCHAR")) >= 0)
	{
		m_nType = 0;
		m_wndValueText.ShowWindow(SW_SHOW); 
		m_wndValueNumber.ShowWindow(SW_HIDE);
		m_wndValueDate.ShowWindow(SW_HIDE);
	}
	else if (tmpStr.Find(_T("DATE")) >= 0 || tmpStr.Find(_T("TIMESTAMP")) >= 0)
	{
		m_nType = 1;
		m_wndValueText.ShowWindow(SW_HIDE);
		m_wndValueNumber.ShowWindow(SW_HIDE);
		m_wndValueDate.ShowWindow(SW_SHOW);
	}
	else 
	{
		m_nType = 2;
		m_wndValueText.ShowWindow(SW_HIDE);
		m_wndValueNumber.ShowWindow(SW_SHOW);
		m_wndValueDate.ShowWindow(SW_HIDE);
	}
	tmpStr.Format(_T("%s"), m_szNameKey);
	rs.GetValue(tmpStr, szVal);
	if (m_nType == 0)
		m_szValueText = szVal;
	else if (m_nType == 1)
		m_szValueDate = szVal;
	else
		m_nValueNumber = str2long(szVal);
	UpdateData(false);	 
}
/*void CHMSConfigSetupDlg::OnNameSetfocus(){
	
}*/
/*void CHMSConfigSetupDlg::OnNameKillfocus(){
	
}*/
long CHMSConfigSetupDlg::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
		szWhere.Format(_T(" and column_name='%s' "), m_szNameKey);
	}
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT column_name id, data_type FROM all_tab_columns ") \
				 _T(" WHERE table_name = 'HMS_CONFIG' ORDER BY column_id desc"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("data_type")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSConfigSetupDlg::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSConfigSetupDlg::OnValueTextChange(){
	
} */
/*void CHMSConfigSetupDlg::OnValueTextSetfocus(){
	
} */
/*void CHMSConfigSetupDlg::OnValueTextKillfocus(){
	
} */
int CHMSConfigSetupDlg::OnValueTextCheckValue(){
	return 0;
} 
void CHMSConfigSetupDlg::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!IsValidateData())
		return;
	CString szSQL, szValue;
	if (m_nType == 0)
		szValue.Format(_T("'%s'"), m_szValueText);
	else if (m_nType == 1)
		szValue.Format(_T("to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szValueDate);
	else
		szValue.Format(_T("%ld"), m_nValueNumber);
	szSQL.Format(_T("UPDATE hms_config SET %s = %s"), m_szNameKey, szValue);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
		SetMode(VM_ADD);
	
} 
void CHMSConfigSetupDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
/*void CHMSConfigSetupDlg::OnValueNumberChange(){
	
} */
/*void CHMSConfigSetupDlg::OnValueNumberSetfocus(){
	
} */
/*void CHMSConfigSetupDlg::OnValueNumberKillfocus(){
	
} */
int CHMSConfigSetupDlg::OnValueNumberCheckValue(){
	return 0;
} 
/*void CHMSConfigSetupDlg::OnValueDateChange(){
	
} */
/*void CHMSConfigSetupDlg::OnValueDateSetfocus(){
	
} */
/*void CHMSConfigSetupDlg::OnValueDateKillfocus(){
	
} */
int CHMSConfigSetupDlg::OnValueDateCheckValue(){
	return 0;
} 
int CHMSConfigSetupDlg::OnAddHMSConfigSetupDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSConfigSetupDlg::OnEditHMSConfigSetupDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSConfigSetupDlg::OnDeleteHMSConfigSetupDlg(){
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
 		OnCancelHMSConfigSetupDlg();
 	}
	return 0;
}
int CHMSConfigSetupDlg::OnSaveHMSConfigSetupDlg(){
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
 		//OnHMSConfigSetupDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSConfigSetupDlg::OnCancelHMSConfigSetupDlg(){
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
int CHMSConfigSetupDlg::OnHMSConfigSetupDlgListLoadData(){
	return 0;
}
