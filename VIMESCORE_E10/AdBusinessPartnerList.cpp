#include "AdBusinessPartnerList.h"
#include "MainFrame_E10.h"
#include "AdBusinessPartnerDialog.h"
#include ".\adbusinesspartnerlist.h"

static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerList *)pWnd)->OnTypeAddNew();
}*/
static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerList *)pWnd)->OnSearchNameChange();
} 
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerList *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerList *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerList *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerList *pVw = (CAdBusinessPartnerList *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerList*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerList*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerList*)pWnd)->OnListDeleteItem();
} 
static void _OnLoadInactiveSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerList *pVw = (CAdBusinessPartnerList *)pWnd;
	pVw->OnLoadInactiveSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerList *pVw = (CAdBusinessPartnerList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerList *pVw = (CAdBusinessPartnerList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerList *pVw = (CAdBusinessPartnerList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdBusinessPartnerListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerList*)pWnd)->OnAddAdBusinessPartnerList();
} 
static int _OnEditAdBusinessPartnerListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerList*)pWnd)->OnEditAdBusinessPartnerList();
} 
static int _OnDeleteAdBusinessPartnerListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerList*)pWnd)->OnDeleteAdBusinessPartnerList();
} 
static int _OnSaveAdBusinessPartnerListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerList*)pWnd)->OnSaveAdBusinessPartnerList();
} 
static int _OnCancelAdBusinessPartnerListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerList*)pWnd)->OnCancelAdBusinessPartnerList();
} 
CAdBusinessPartnerList::CAdBusinessPartnerList(){

	m_nDlgWidth = 820;
	m_nDlgHeight = 630;
	SetDefaultValues();
	m_szTypeKey = _T("NCC");
}
CAdBusinessPartnerList::~CAdBusinessPartnerList(){
}
void CAdBusinessPartnerList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndGroupList.Create(this, _T("Information"), 5, 65, 810, 590);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 110, 55);
	m_wndType.Create(this,115, 30, 405, 55); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 410, 30, 510, 55);
	m_wndSearchName.Create(this,515, 30, 775, 55); 
	m_wndFind.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndLoadInactive.Create(this, _T("Load Inactive Item"), 5, 595, 205, 620);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndList.Create(this,10, 90, 805, 585); 

}
void CAdBusinessPartnerList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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


void CAdBusinessPartnerList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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

	m_wndLoadInactive.SetEvent(WE_CLICK, _OnLoadInactiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	

//	m_wndInput.Create(&m_wndList);
//	m_wndInput.ShowWindow(SW_HIDE);
//	m_wndList.SetEditView(&m_wndInput);

	SetMode(VM_NONE);
	Refresh();
	

}
void CAdBusinessPartnerList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Check(pDX, m_wndLoadInactive.GetDlgCtrlID(), m_bLoadInactive);
}
void CAdBusinessPartnerList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}


void CAdBusinessPartnerList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}


void CAdBusinessPartnerList::SetDefaultValues(){

	m_szSearchName.Empty();
	m_bLoadInactive = FALSE;
}


int CAdBusinessPartnerList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
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
		m_wndType.EnableWindow(TRUE);
 		return nOldMode; 
}


void CAdBusinessPartnerList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerList::OnTypeSelendok(){
	 
}
/*void CAdBusinessPartnerList::OnTypeSetfocus(){
	
}*/
/*void CAdBusinessPartnerList::OnTypeKillfocus(){
	
}*/
long CAdBusinessPartnerList::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" and adpt_partner_type_id ='NCC' "));

	return pMF->LoadPartnerTypeList(&m_wndType, m_szTypeKey, szWhere);

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
/*void CAdBusinessPartnerList::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdBusinessPartnerList::OnSearchNameChange(){
	UpdateData(TRUE);
	m_wndList.Search(1, m_szSearchName, SEARCH_LIKE);
}


/*void CAdBusinessPartnerList::OnSearchNameSetfocus(){
	
}

 */
/*void CAdBusinessPartnerList::OnSearchNameKillfocus(){
	
}

 */
int CAdBusinessPartnerList::OnSearchNameCheckValue(){
	return 0;
}

 
void CAdBusinessPartnerList::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
} 
void CAdBusinessPartnerList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CAdBusinessPartnerDialog dlg(this, VM_VIEW);
	dlg.m_szPartnerID = m_szID;
	dlg.SetMode(VM_VIEW);
	if(dlg.DoModal() == IDOK){
	}
}

 
void CAdBusinessPartnerList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	SetMode(VM_VIEW);
	
}

int CAdBusinessPartnerList::OnListAddItem(){
	OnAddAdBusinessPartnerList();
	return 0;
}
 
int CAdBusinessPartnerList::OnListEditItem(){
	OnEditAdBusinessPartnerList();
	return 0;
}
int CAdBusinessPartnerList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//OnDeleteAdBusinessPartnerList();
//	m_wndList.InsertLine(m_wndList.GetCurSel());
	OnDeleteAdBusinessPartnerList();
	 return 0;
}

 
long CAdBusinessPartnerList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	szSQL.Format(_T("SELECT adp_partner_id as id, adp_name as name, adp_taxcode as taxcode FROM ad_partner WHERE 1=1 %s ORDER BY adp_partner_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("taxcode")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CAdBusinessPartnerList::OnLoadInactiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();

}


void CAdBusinessPartnerList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdBusinessPartnerList();

}

 
void CAdBusinessPartnerList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdBusinessPartnerList();
}

 
void CAdBusinessPartnerList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdBusinessPartnerList();
}
 
int CAdBusinessPartnerList::OnAddAdBusinessPartnerList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	CAdBusinessPartnerDialog dlg(this, VM_ADD);
	dlg.SetMode(VM_ADD);
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
		
	}
	m_wndAdd.SetFocus();
	return 0; 
}


int CAdBusinessPartnerList::OnEditAdBusinessPartnerList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	CAdBusinessPartnerDialog dlg(this, VM_EDIT);
	dlg.m_szPartnerID = m_szID;
	dlg.SetMode(VM_EDIT);
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
		
	}
	m_wndEdit.SetFocus();
	return 0;  
}


int CAdBusinessPartnerList::OnDeleteAdBusinessPartnerList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
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


int CAdBusinessPartnerList::OnSaveAdBusinessPartnerList(){
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
 		//OnAdBusinessPartnerListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

void CAdBusinessPartnerList::Refresh(){
	OnListLoadData();
}BEGIN_MESSAGE_MAP(CAdBusinessPartnerList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CAdBusinessPartnerList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearchName.SetFocus();
}
void CAdBusinessPartnerList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndGroupList, 100, 100);
	

	AddBottom(&m_wndLoadInactive);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
}