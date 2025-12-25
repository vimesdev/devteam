#include "AdBusinessPartnerListDialog.h"
#include "MainFrm.h"
#include "AdBusinessPartnerDialog.h"
#include "AdBusinessPartnerEmplDialog.h"

int	LoadPartnerTypeList(CWnd* pWnd, CString szKey, CString szFilter){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and adpt_partner_type_id='%s' "), szKey);
	};

	//szWhere.AppendFormat(_T(" and adpt_org_id in('GL', '%s') %s "), GetModuleID(), szFilter);
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpt_partner_type_id as id, adpt_description as name ") \
		_T("FROM ad_partner_type ") \
		_T("WHERE adpt_isactive='Y' %s  ") \
		_T("ORDER BY adpt_line, adpt_partner_type_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}


int	LoadPaymentTermList(CWnd* pWnd, CString szKey, CString szFilter){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and adpt_payment_term_id='%s' "), szKey);
	};
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpt_payment_term_id as id, adpt_description as name FROM ad_payment_term WHERE adpt_isactive='Y' %s %s ORDER BY adpt_payment_term_id "), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}




static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerListDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerListDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnSearchNameChange();
} 
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerListDialog *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerListDialog *pVw = (CAdBusinessPartnerListDialog *)pWnd;
	pVw->OnFindSelect();
} 

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnListDeleteItem();
}

/*
static long _OnEmplListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerListDialog*)pWnd)->OnEmplListLoadData();
} 
static void _OnEmplListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerListDialog*)pWnd)->OnEmplListDblClick();
} 
static void _OnEmplListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerListDialog*)pWnd)->OnEmplListSelectChange(nOldItem, nNewItem);
} 
static int _OnEmplListAddItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnEmplListAddItem();
} 
static int _OnEmplListEditItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnEmplListEditItem();
} 
static int _OnEmplListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnEmplListDeleteItem();
}
*/

static void _OnLoadInactiveSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerListDialog *pVw = (CAdBusinessPartnerListDialog *)pWnd;
	pVw->OnLoadInactiveSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerListDialog *pVw = (CAdBusinessPartnerListDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerListDialog *pVw = (CAdBusinessPartnerListDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerListDialog *pVw = (CAdBusinessPartnerListDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdBusinessPartnerListDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnAddAdBusinessPartnerListDialog();
} 
static int _OnEditAdBusinessPartnerListDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnEditAdBusinessPartnerListDialog();
} 
static int _OnDeleteAdBusinessPartnerListDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnDeleteAdBusinessPartnerListDialog();
} 
static int _OnSaveAdBusinessPartnerListDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnSaveAdBusinessPartnerListDialog();
} 
static int _OnCancelAdBusinessPartnerListDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerListDialog*)pWnd)->OnCancelAdBusinessPartnerListDialog();
} 
CAdBusinessPartnerListDialog::CAdBusinessPartnerListDialog(CWnd *pParent){

	m_nDlgWidth = 820;
	m_nDlgHeight = 630;
	SetDefaultValues();
	m_szTypeKey = _T("KH");
}
CAdBusinessPartnerListDialog::~CAdBusinessPartnerListDialog(){
}
void CAdBusinessPartnerListDialog::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 910, 60);
	m_wndGroupList.Create(this, _T("Information"), 5, 65, 910, 605);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 110, 55);
	m_wndType.Create(this,115, 30, 405, 55); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 410, 30, 510, 55);
	m_wndSearchName.Create(this,515, 30, 775, 55); 
	m_wndFind.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndList.Create(this,10, 90, 905, 245); 
	m_wndAdd.Create(this, _T("&Add"), 655, 250, 735, 275);
	m_wndEdit.Create(this, _T("&Edit"), 740, 250, 820, 275);
	m_wndDelete.Create(this, _T("&Delete"), 825, 250, 905, 275);
	m_wndTab.Create(this,10, 280, 905, 620); 
	m_wndContractList.Create(&m_wndTab);
	m_wndEmplList.Create(&m_wndTab);

	m_wndLoadInactive.Create(this, _T(""), 0, 0, 0, 0);
	m_wndLoadInactive.ShowWindow(SW_HIDE);
	m_wndLoadInactive.EnableWindow(FALSE);
}
void CAdBusinessPartnerListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetWindowText(_T("OBJECT"));
	m_wndSearchName.SetLimitText(35);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Tax code"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(3, _T("Receivable"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(4, _T("Payable"), CFMT_MONEY, 100);


}


void CAdBusinessPartnerListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA,_OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Business Partner List"));
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);

/*
	m_wndEmplList.SetEvent(WE_SELCHANGE, _OnEmplListSelectChangeFnc);
	m_wndEmplList.SetEvent(WE_LOADDATA, _OnEmplListLoadDataFnc);
	m_wndEmplList.SetEvent(WE_DBLCLICK, _OnEmplListDblClickFnc);
	m_wndEmplList.SetWindowText(_T("Business Partner EmplList"));
	m_wndEmplList.AddEvent(1, _T("Add"), _OnEmplListAddItemFnc);
	m_wndEmplList.AddEvent(0, _T("-"), NULL);
	m_wndEmplList.AddEvent(2, _T("Edit"), _OnEmplListEditItemFnc);
	m_wndEmplList.AddEvent(0, _T("-"), NULL);
	m_wndEmplList.AddEvent(3, _T("Delete"), _OnEmplListDeleteItemFnc, 0);
*/

	m_wndLoadInactive.SetEvent(WE_CLICK, _OnLoadInactiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	

//	m_wndInput.Create(&m_wndList);
//	m_wndInput.ShowWindow(SW_HIDE);
//	m_wndList.SetEditView(&m_wndInput);
	
	m_wndTab.Add(_T("Employees"), &m_wndEmplList);
	m_wndTab.Add(_T("Contracts"), &m_wndContractList);

	m_wndEmplList.OnInitDialog();
	m_wndContractList.OnInitDialog();

//	m_wndContractList.m_szPartnerID = m_szPartnerId;
	m_wndTab.SetCurSel(0);
	SetMode(VM_NONE);
	Refresh();
	

}
void CAdBusinessPartnerListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Check(pDX, m_wndLoadInactive.GetDlgCtrlID(), m_bLoadInactive);
}
void CAdBusinessPartnerListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}


void CAdBusinessPartnerListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}


void CAdBusinessPartnerListDialog::SetDefaultValues(){

	m_szSearchName.Empty();
	m_bLoadInactive = FALSE;
}


int CAdBusinessPartnerListDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3,  -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
		m_wndSearchName.EnableWindow(TRUE);
		m_wndType.EnableWindow(FALSE);
 		return nOldMode; 
}


void CAdBusinessPartnerListDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerListDialog::OnTypeSelendok(){
	 
}
/*void CAdBusinessPartnerListDialog::OnTypeSetfocus(){
	
}*/
/*void CAdBusinessPartnerListDialog::OnTypeKillfocus(){
	
}*/
long CAdBusinessPartnerListDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" and adpt_partner_type_id ='NCC' "));

	return LoadPartnerTypeList(&m_wndType, m_szTypeKey, szWhere);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdBusinessPartnerListDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdBusinessPartnerListDialog::OnSearchNameChange(){
	UpdateData(TRUE);
	m_wndList.Search(1, m_szSearchName, SEARCH_LIKE);
}


/*void CAdBusinessPartnerListDialog::OnSearchNameSetfocus(){
	
}

 */
/*void CAdBusinessPartnerListDialog::OnSearchNameKillfocus(){
	
}

 */
int CAdBusinessPartnerListDialog::OnSearchNameCheckValue(){
	return 0;
}

 
void CAdBusinessPartnerListDialog::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 


void CAdBusinessPartnerListDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CAdBusinessPartnerDialog dlg(this, VM_VIEW);
	dlg.m_szPartnerID = m_szID;
	dlg.SetMode(VM_VIEW);
	if(dlg.DoModal() == IDOK){
	}
}

 
void CAdBusinessPartnerListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	m_szPartnerId = m_szID;
	m_wndEmplList.m_szPartnerId = m_szPartnerId;
	m_wndEmplList.OnListLoadData();
	m_wndContractList.m_szPartnerID = m_szPartnerId;
	m_wndContractList.OnListLoadData();
	m_wndContractList.OnPatientListLoadData();
	SetMode(VM_VIEW);
	
}

int CAdBusinessPartnerListDialog::OnListAddItem(){
	OnAddAdBusinessPartnerListDialog();
	return 0;
}
 
int CAdBusinessPartnerListDialog::OnListEditItem(){
	OnEditAdBusinessPartnerListDialog();
	return 0;
}
int CAdBusinessPartnerListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//OnDeleteAdBusinessPartnerListDialog();
//	m_wndList.InsertLine(m_wndList.GetCurSel());
	OnDeleteAdBusinessPartnerListDialog();
	 return 0;
}

 
long CAdBusinessPartnerListDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndList.BeginLoad(); 
	//int nCount = 0;
	//CString tmpStr;
	//for (int i =0; i < 10; i++)
	//{
	//	tmpStr.Format(_T("%d"), i);
	//	m_wndList.AddItems(tmpStr, _T("abc"), NULL);
	//}
	//m_wndList.MergeCell(2, 0, 2, 2);
	//m_wndList.EndLoad(); 
	//return 0;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (!m_szTypeKey.IsEmpty())
		szWhere.Format(_T(" AND adp_partner_type_id = '%s'"), m_szTypeKey);
	if (!m_szSearchName.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(adp_name) LIKE (chr(37)||lower('%s')||chr(37))"), m_szSearchName);
	if (m_bLoadInactive)
		szWhere.AppendFormat(_T(" AND adp_isactive <> 'Y'"));
	else
		szWhere.AppendFormat(_T(" AND adp_isactive = 'Y'"));

	szWhere.AppendFormat(_T(" and NVL(adp_org_id,'GL') IN('GL','%s') "), pMF->GetModuleID());

	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adp_partner_id as id, adp_name as name FROM ad_partner WHERE 1=1 %s ORDER BY adp_partner_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}



/*
void CAdBusinessPartnerListDialog::OnEmplListDblClick(){
	int nSel = m_wndEmplList.GetCurSel();
	if(nSel < 0)
		return;
	CAdBusinessPartnerDialog dlg(this, VM_VIEW);
	dlg.m_szPartnerID = m_szID;
	dlg.SetMode(VM_VIEW);
	if(dlg.DoModal() == IDOK){
	}
}

 
void CAdBusinessPartnerListDialog::OnEmplListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndEmplList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
	
}

int CAdBusinessPartnerListDialog::OnEmplListAddItem(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	CAdBusinessPartnerEmplDialog dlg(this, VM_ADD, m_szPartnerId);
	if(dlg.DoModal() == IDOK)
	{
		OnEmplListLoadData();
	}

	return 0;
}
 
int CAdBusinessPartnerListDialog::OnEmplListEditItem(){
	int nSel = m_wndEmplList.GetCurSel();
	if(nSel < 0)
		return 0;

	long nPartnerEmplId = str2long(m_wndEmplList.GetItemText(nSel, 0));
	CAdBusinessPartnerEmplDialog dlg(this, VM_ADD, m_szPartnerId);
	if(dlg.DoModal() == IDOK)
	{
		OnEmplListLoadData();
	}
	return 0;
}
int CAdBusinessPartnerListDialog::OnEmplListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	 return 0;
}

 
long CAdBusinessPartnerListDialog::OnEmplListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndEmplList.BeginLoad(); 
	//int nCount = 0;
	//CString tmpStr;
	//for (int i =0; i < 10; i++)
	//{
	//	tmpStr.Format(_T("%d"), i);
	//	m_wndEmplList.AddItems(tmpStr, _T("abc"), NULL);
	//}
	//m_wndEmplList.MergeCell(2, 0, 2, 2);
	//m_wndEmplList.EndLoad(); 
	//return 0;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (!m_szTypeKey.IsEmpty())
		szWhere.Format(_T(" AND adp_partner_type_id = '%s'"), m_szTypeKey);
	if (!m_szSearchName.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(adp_name) LIKE (chr(37)||lower('%s')||chr(37))"), m_szSearchName);
	if (m_bLoadInactive)
		szWhere.AppendFormat(_T(" AND adp_isactive <> 'Y'"));
	else
		szWhere.AppendFormat(_T(" AND adp_isactive = 'Y'"));

	szWhere.AppendFormat(_T(" and NVL(adp_org_id,'GL') IN('GL','%s') "), pMF->GetModuleID());

	m_wndEmplList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adp_partner_id as id, adp_name as name FROM ad_partner WHERE 1=1 %s ORDER BY adp_partner_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEmplList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndEmplList.EndLoad(); 
	return nCount;
}

*/

void CAdBusinessPartnerListDialog::OnLoadInactiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();

}


void CAdBusinessPartnerListDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddAdBusinessPartnerListDialog();

}

 
void CAdBusinessPartnerListDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditAdBusinessPartnerListDialog();
}

 
void CAdBusinessPartnerListDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteAdBusinessPartnerListDialog();
}
 
int CAdBusinessPartnerListDialog::OnAddAdBusinessPartnerListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CAdBusinessPartnerDialog dlg(this, VM_ADD);
	dlg.SetMode(VM_ADD);
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
		
	}
	m_wndAdd.SetFocus();
	return 0; 
}


int CAdBusinessPartnerListDialog::OnEditAdBusinessPartnerListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CAdBusinessPartnerDialog dlg(this, VM_EDIT);
	dlg.m_szPartnerID = m_szID;
	dlg.SetMode(VM_EDIT);
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
		
	}
	m_wndEdit.SetFocus();
	return 0;  
}


int CAdBusinessPartnerListDialog::OnDeleteAdBusinessPartnerListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
	szSQL.Format(_T(" SELECT COUNT(*) FROM m_product") \
				_T(" WHERE mp_bpartner_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("Cannot process with current status."));
		return -1;
	}

	szSQL.Format(_T(" SELECT COUNT(*) FROM purchase_order") \
				_T(" WHERE po_partner_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("Cannot process with current status."));
		return -1;
	}

	//check if contract exist, not allow to delete
	szSQL.Format(_T("SELECT count(*) FROM hms_contract WHERE hc_partner_id = '%s'"), m_szPartnerId);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Contract has been exist. Cannot delete this partner!"));
		return -1;
	}

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM ad_partner WHERE  adp_partner_id='%s' "),m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
		OnListLoadData();
 	}
	return 0;
}


int CAdBusinessPartnerListDialog::OnSaveAdBusinessPartnerListDialog(){
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
 		//OnAdBusinessPartnerListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

void CAdBusinessPartnerListDialog::Refresh(){
	OnListLoadData();
}
BEGIN_MESSAGE_MAP(CAdBusinessPartnerListDialog, CGuiDialog)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()



