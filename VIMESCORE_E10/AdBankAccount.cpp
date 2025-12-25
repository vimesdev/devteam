#include "AdBankAccount.h"
#include "MainFrame_E10.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdBankAccount *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdBankAccount *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdBankAccount *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdBankAccount *)pWnd)->OnSearchCheckValue();
} 
static void _OnTypeOfFilterSelectFnc(CWnd *pWnd){
	CAdBankAccount *pVw = (CAdBankAccount *)pWnd;
	pVw->OnTypeOfFilterSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBankAccount*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBankAccount*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBankAccount*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBankAccount*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdBankAccount *pVw = (CAdBankAccount *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdBankAccount *pVw = (CAdBankAccount *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdBankAccount *pVw = (CAdBankAccount *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdBankAccountFnc(CWnd *pWnd){
	 return ((CAdBankAccount*)pWnd)->OnAddAdBankAccount();
} 
static int _OnEditAdBankAccountFnc(CWnd *pWnd){
	 return ((CAdBankAccount*)pWnd)->OnEditAdBankAccount();
} 
static int _OnDeleteAdBankAccountFnc(CWnd *pWnd){
	 return ((CAdBankAccount*)pWnd)->OnDeleteAdBankAccount();
} 
static int _OnSaveAdBankAccountFnc(CWnd *pWnd){
	 return ((CAdBankAccount*)pWnd)->OnSaveAdBankAccount();
} 
static int _OnCancelAdBankAccountFnc(CWnd *pWnd){
	 return ((CAdBankAccount*)pWnd)->OnCancelAdBankAccount();
} 
CAdBankAccount::CAdBankAccount(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdBankAccount::~CAdBankAccount(){
}
void CAdBankAccount::OnCreateComponents(){
	m_wndBankInformation.Create(this, _T("Bank Account Information"), 5, 5, 800, 570);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 110, 55);
	m_wndSearch.Create(this,115, 30, 545, 55); 
	m_wndTypeOfFilter.Create(this, _T("..."), 770, 30, 795, 55);
	m_wndList.Create(this,10, 60, 795, 565); 
	m_wndAdd.Create(this, _T("&Add"), 530, 575, 615, 600);
	m_wndEdit.Create(this, _T("&Edit"), 620, 575, 705, 600);
	m_wndDelete.Create(this, _T("&Delete"), 710, 575, 795, 600);
	m_wndTypeOfFilterDesc.Create(this, _T("Account No"), 550, 30, 765, 55);
	m_wndPopup.Create(this);
	//m_wndPopup.OnInitDialog();
	m_wndPopup.ShowWindow(SW_HIDE);
}
void CAdBankAccount::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowText(_T("BANK LIST"));
	m_wndSearch.SetCheckValue(TRUE);
	m_wndSearch.SetAllowEmpty(false);

	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T("Bank Account"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Bank Name"), CFMT_TEXT, 400);
	
	m_arFilters.RemoveAll();
	m_arFilters.Add(_T("Account No"));
	m_arFilters.Add(_T("Bank Name"));
	m_arFilters.Add(_T("Deactive"));
	m_nSearchID = 1;
	
}

void CAdBankAccount::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndTypeOfFilter.SetEvent(WE_CLICK, _OnTypeOfFilterSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	SetMode(VM_VIEW);
	OnListLoadData();

}
void CAdBankAccount::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdBankAccount::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CAdBankAccount::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CAdBankAccount::SetDefaultValues(){


}

int CAdBankAccount::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db);
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, -1); 
			m_wndPopup.ShowPopup(&m_wndList);
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, -1); 
			m_wndPopup.ShowPopup(&m_wndList);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndSearch.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}

/*void CAdBankAccount::OnSearchChange(){
	
} */
/*void CAdBankAccount::OnSearchSetfocus(){
	
} */
/*void CAdBankAccount::OnSearchKillfocus(){
	
} */
int CAdBankAccount::OnSearchCheckValue(){
	OnListLoadData();
	return 1;
}
 
void CAdBankAccount::OnTypeOfFilterSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString szName;
	menu.CreatePopupMenu();
	for (int i =0; i < m_arFilters.GetCount(); i++){
		
		if(i > 0) menu.AppendMenu(MF_SEPARATOR);

		TranslateString(m_arFilters[i], szName);
		menu.AppendMenu(MF_BYPOSITION, i+1, szName);
	}

	menu.MakeOwnerDraw(FALSE);
	CPoint pt;
	CRect rect;
	m_wndTypeOfFilter.GetWindowRect(&rect);
	pt.x = rect.right;
	pt.y = rect.bottom+1;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_TOPALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	//Mac dinh luon la tim kiem ten
	m_nSearchID = 1;
	if(ret > 0){
		ret --;
		TranslateString(m_arFilters[ret], szName);
		m_wndTypeOfFilterDesc.SetWindowText(szName);
		m_nSearchID = ret;
	}

}
 
void CAdBankAccount::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CString szID;
	szID = m_wndList.GetItemText(nSel, 0);
	if (m_szID == szID && m_wndPopup.IsWindowVisible())
		return;
	m_wndPopup.m_szID = m_szID;
	m_wndPopup.SetMode(VM_EDIT);
	m_wndPopup.m_nMode = GetMode();
	SetMode(VM_EDIT);
	//CAdBankPopup *newPopup = new CAdBankPopup(this);
	//newPopup->SetMode(VM_EDIT);
	//newPopup->m_szID = m_szID;
	//newPopup->ShowPopup(&m_wndList);
}
 
void CAdBankAccount::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	m_wndPopup.ClosePopup();
	SetMode(VM_VIEW);
	
}
 
int CAdBankAccount::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdBankAccount();
	 return 0;
}
 
long CAdBankAccount::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(m_nSearchID == 2){
		szWhere.Format(_T(" and adba_isactive <> 'Y' "));
	}
	else
	{
		szWhere.Format(_T(" and adba_isactive = 'Y' "));
	}

	if(!m_szSearch.IsEmpty()){
		if(m_nSearchID == 0){
			szWhere.AppendFormat(_T(" and adba_accountno like('%%%s%%') "), m_szSearch);
		}
		if(m_nSearchID == 1){
			szWhere.AppendFormat(_T(" and lower(adb_name) like(lower('%%%s%%'))  "), m_szSearch);
		}
	}
	szSQL.Format(_T("SELECT adba_bank_account_id as id, adba_accountno as accountno, ") \
		_T("adb_name as name ") \
		_T("FROM ad_bank_account  ") \
		_T("LEFT JOIN ad_bank ON (adb_bank_id=adba_bank_id) ") \
		_T("WHERE 1=1 %s ") \
		_T("ORDER BY adba_bank_account_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("accountno")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}

void CAdBankAccount::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPopup.SetMode(VM_ADD);
	m_wndPopup.m_nMode = GetMode();
	SetMode(VM_ADD);
	//CAdBankPopup *newPopup = new CAdBankPopup(this);
	//newPopup->SetMode(VM_ADD);
	//newPopup->ShowPopup(&m_wndList);
}
 
void CAdBankAccount::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	m_wndPopup.m_szID = m_szID;
	m_wndPopup.SetMode(VM_EDIT);
	m_wndPopup.m_nMode = GetMode();
	SetMode(VM_EDIT);
	//CAdBankPopup *newPopup = new CAdBankPopup(this);
	//newPopup->SetMode(VM_EDIT);
	//newPopup->m_szID = m_szID;
	//newPopup->ShowPopup(&m_wndList);
}
 
void CAdBankAccount::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdBankAccount();
}
 
int CAdBankAccount::OnAddAdBankAccount(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdBankAccount::OnEditAdBankAccount(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdBankAccount::OnDeleteAdBankAccount(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM ad_bank_account WHERE adba_accountno = '%s'"), m_szID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
		OnListLoadData();
 	}
	return 0;
}

int CAdBankAccount::OnSaveAdBankAccount(){
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
 		//OnAdBankAccountListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdBankAccount::OnCancelAdBankAccount(){
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
 
int CAdBankAccount::OnAdBankAccountListLoadData(){
	return 0;
}

