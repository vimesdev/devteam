#include "IVFSetupList.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "IVFSetupListDlg.h"

static int _OnSearchChangeFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnSearchChange();
} 
static int _OnSearchSetfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnSearchKillfocus();
} 
static int _OnSearchKillfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnSearchKillfocus();
} 
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnSearchCheckValue();
} 
static int _OnFindChangeFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnFindChange();
} 
static int _OnFindCheckValueFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnFindCheckValue();
}
static int _OnItemListLoadDataFnc(CWnd *pWnd){
	 return ((CIVFSetupList*)pWnd)->OnItemListLoadData();
} 
static int _OnItemListDblClickFnc(CWnd *pWnd){
	return ((CIVFSetupList*)pWnd)->OnItemListDblClick();
} 
static int _OnItemListSelChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CIVFSetupList*)pWnd)->OnItemListSelChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFSetupList*)pWnd)->OnItemListDeleteItem();
} 
static int _OnItemListAddParaclinicFnc(CWnd *pWnd){
	return ((CIVFSetupList*)pWnd)->OnItemListAddParaclinic();
} 
static int _OnIDChangeFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnIDChange();
} 
static int _OnIDSetfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnIDKillfocus();
} 
static int _OnIDKillfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnIDKillfocus();
} 
static int _OnIDCheckValueFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnIDCheckValue();
} 
static int _OnNameChangeFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnNameChange();
} 
static int _OnNameSetfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnNameKillfocus();
} 
static int _OnNameKillfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnNameKillfocus();
} 
static int _OnNameCheckValueFnc(CWnd *pWnd){
	 return ((CIVFSetupList *)pWnd)->OnNameCheckValue();
} 
static int _OnAddSelFnc(CWnd *pWnd){
	CIVFSetupList *pVw = (CIVFSetupList *)pWnd;
	return pVw->OnAddSel();
} 
static int _OnEditSelFnc(CWnd *pWnd){
	CIVFSetupList *pVw = (CIVFSetupList *)pWnd;
	return pVw->OnEditSel();
} 
static int _OnDeleteSelFnc(CWnd *pWnd){
	CIVFSetupList *pVw = (CIVFSetupList *)pWnd;
	return pVw->OnDeleteSel();
} 
static int _OnSaveSelFnc(CWnd *pWnd){
	CIVFSetupList *pVw = (CIVFSetupList *)pWnd;
	return pVw->OnSaveSel();
} 
static int _OnCancelSelFnc(CWnd *pWnd){
	CIVFSetupList *pVw = (CIVFSetupList *)pWnd;
	return pVw->OnCancelSel();
} 
static int _OnCloseSelFnc(CWnd *pWnd){
	CIVFSetupList *pVw = (CIVFSetupList *)pWnd;
	return pVw->OnCloseSel();
} 
static int _OnListLoadDataFnc(CWnd *pWnd){
	 return ((CIVFSetupList*)pWnd)->OnListLoadData();
} 
static int _OnListDblClickFnc(CWnd *pWnd){
	return ((CIVFSetupList*)pWnd)->OnListDblClick();
} 
static int _OnListSelChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CIVFSetupList*)pWnd)->OnListSelChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFSetupList*)pWnd)->OnListDeleteItem();
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CIVFSetupList*)pWnd)->OnListAddItem();
}

static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CIVFSetupList*)pWnd)->OnListEditItem();
}
CIVFSetupList::CIVFSetupList(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 615;
	m_szSearch.Empty();
	m_szFind.Empty();
	m_szID.Empty();
	m_szName.Empty();
}
CIVFSetupList::~CIVFSetupList(){
}
void CIVFSetupList::OnCreateComponents(){
	m_wndSetupListInformation.Create(this, _T("Setup Lists"), 5, 5, 355, 620);
	m_wndFindLabel.Create(this, _T("Find"), 10, 30, 90, 55);
	m_wndFind.Create(this,95, 30, 350, 55); 
	m_wndList.Create(this,10, 60, 350, 615); 
	m_wndItemInformation.Create(this, _T("Item Information"), 360, 5, 805, 590);
	m_wndSearchLabel.Create(this, _T("Search"), 365, 30, 430, 55);
	m_wndSearch.Create(this,435, 30, 800, 55); 
	m_wndItemList.Create(this,365, 60, 800, 525); 
	m_wndIDLabel.Create(this, _T("ID"), 365, 530, 425, 555);
	m_wndID.Create(this,430, 530, 500, 555); 
	m_wndNameLabel.Create(this, _T("Name"), 505, 530, 565, 555);
	m_wndName.Create(this,570, 530, 800, 555); 
	m_wndDescLabel.Create(this, _T("Desc"), 365, 560, 425, 585);
	m_wndDesc.Create(this,430, 560, 800, 585); 
	m_wndAdd.Create(this, _T("&Add"), 410, 595, 485, 620);
	m_wndEdit.Create(this, _T("&Edit"), 490, 595, 565, 620);
	m_wndDelete.Create(this, _T("&Delete"), 570, 595, 645, 620);
	m_wndSave.Create(this, _T("&Save"), 650, 595, 725, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 595, 805, 620);

}
void CIVFSetupList::OnInitializeComponents(){
	m_wndSearch.SetLimitText(25);
	m_wndFind.SetLimitText(25);
	m_wndID.SetLimitText(15);
	m_wndName.SetLimitText(81);
	m_wndID.SetCheckValue(true);
	m_wndName.SetCheckValue(true);

	m_wndList.SetWindowText(_T("Setup List"));
	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 240);
	m_wndList.InsertColumn(2, _T("Code"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(3, _T("Type"), CFMT_NUMBER, 40);
	
	::SetWindowFont(&m_wndList, _T("Tahoma"), 10, true);
	m_wndItemList.SetWindowText(_T("Item List"));

	m_wndItemList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);
	m_wndItemList.InsertColumn(2, _T("Vndesc"), CFMT_TEXT, 0);

	m_vimesselTbl.SetTableName(_T("ivf_sel"));
	m_vimesselTbl.AddField(_T("ivs_id"), dfText, 15);
	m_vimesselTbl.AddField(_T("ivs_code"), dfText, 15); 
	m_vimesselTbl.AddField(_T("ivs_desc"), dfText, 81);
	m_vimesselTbl.AddField(_T("ivs_vndesc"), dfText, 81);

	m_vimesDeptTbl.SetTableName(_T("sys_dept"));
	m_vimesDeptTbl.AddField(_T("sd_id"), dfText, 7);
	m_vimesDeptTbl.AddField(_T("sd_code"), dfText, 15); 
	m_vimesDeptTbl.AddField(_T("sd_name"), dfText, 81); 
	 

	//OnListLoadData();
	OnCancelSel();
}
void CIVFSetupList::OnSetWindowEvents(){
	m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(2, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc, 0, VK_INSERT, 0);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc, 0, 0, 0);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);



}
void CIVFSetupList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDesc.GetDlgCtrlID(), m_szDesc);
}
void CIVFSetupList::GetDataToScreen(){

}
void CIVFSetupList::GetScreenToData(){
	UpdateData(TRUE);
	m_szID.Trim();
	if(m_szListID == _T("hrm_department"))
	{
		
		m_vimesDeptTbl.SetValue(_T("sd_id"), m_szID);
		m_vimesDeptTbl.SetValue(_T("sd_name"), m_szName);
	}
	else
	{
		m_vimesselTbl.SetValue(_T("ivs_id"), m_szListID);
		m_vimesselTbl.SetValue(_T("ivs_code"), m_szID);
		m_vimesselTbl.SetValue(_T("ivs_desc"), m_szName);
		m_vimesselTbl.SetValue(_T("ivs_vndesc"), m_szDesc);
	}
}
int CIVFSetupList::OnSearchChange(){
	OnItemListLoadData();
	 return 0;
} 
int CIVFSetupList::OnSearchSetfocus(){
	 return 0;
} 
int CIVFSetupList::OnSearchKillfocus(){
	 return 0;
} 
int CIVFSetupList::OnSearchCheckValue(){
	return 0;
}
int CIVFSetupList::OnFindChange(){
	OnListLoadData();	
	 return 0;
} 
int CIVFSetupList::OnFindCheckValue(){
	OnListLoadData();
	 return 0;
} 
int CIVFSetupList::OnItemListDblClick(){
	 return 0;
} 
int CIVFSetupList::OnItemListSelChange(int nOldItem, int nNewItem){
	int nCurSel = m_wndItemList.GetCurSel();
	if(nCurSel < 0)
		return -1;
	m_szID = m_wndItemList.GetItemText(nCurSel, 0);
	m_szOldID = m_szID;
	m_szName = m_wndItemList.GetItemText(nCurSel, 1);
	m_szDesc = m_wndItemList.GetItemText(nCurSel, 2);
	EnableControls(FALSE);
	EnableButtons(FALSE, 3, 4, -1);
	UpdateData(FALSE);
	SetMode(VM_VIEW);
	 return 0;
} 
int CIVFSetupList::OnItemListDeleteItem(){
	int nCurSel = m_wndItemList.GetCurSel();
	if(nCurSel < 0)
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();

	int retMsg = AfxMessageBox(_T("Do you want to delete selected item?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
	if(retMsg == IDNO)
		return 0;

	CString szID = m_wndItemList.GetItemText(nCurSel, 0);
	CString szSQL;
	if(m_szListID == _T("hrm_department"))
		szSQL.Format(_T("DELETE FROM sys_dept WHERE sd_id='%s'"), szID);
	else
		szSQL.Format(_T("DELETE FROM ivf_sel WHERE ivs_id='%s' AND ivs_code='%s'"), m_szListID, szID);
	
	if(pMF->m_db.ExecSQL(szSQL) > 0)
	{
		OnItemListLoadData();
		SetMode(VM_NONE);
	}
	 return 0;
} 
int CIVFSetupList::OnItemListLoadData(){

	if(m_szListID.IsEmpty())
		return -1;

	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	UpdateData(true);
	if (!m_szSearch.IsEmpty())
		szWhere.Format(_T("AND lower(ivs_desc) LIKE (chr(37)||lower('%s')||chr(37))"), m_szSearch);
	if(m_szListID == _T("hrm_department"))
		szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept ORDER BY sd_id"));
	else
		szSQL.Format(_T("SELECT ivs_code as id, ivs_desc as name, ivs_vndesc as vndesc FROM ivf_sel WHERE ivs_id='%s' %s ORDER BY ivs_code"), m_szListID, szWhere);
	m_wndItemList.BeginLoad();
	int nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("vndesc")), NULL);
		rs.MoveNext();

	}
	m_wndItemList.EndLoad();
	return nCount;

}
int CIVFSetupList::OnIDChange(){
	 return 0;
} 
int CIVFSetupList::OnIDSetfocus(){
	 return 0;
} 
int CIVFSetupList::OnIDKillfocus(){
	 return 0;
} 
int CIVFSetupList::OnIDCheckValue(){
	 return 0;
} 
int CIVFSetupList::OnNameChange(){
	 return 0;
} 
int CIVFSetupList::OnNameSetfocus(){
	 return 0;
} 
int CIVFSetupList::OnNameKillfocus(){
	 return 0;
} 
int CIVFSetupList::OnNameCheckValue(){
	 return 0;
} 
int CIVFSetupList::OnAddSel(){
	
	if(m_szListID.IsEmpty())
		return -1;
	
	SetMode(VM_ADD);
	m_szOldID.Empty();
	m_szID.Empty();
	m_szName.Empty();
	m_wndID.SetData(_T(""));
	UpdateData(FALSE);
	m_wndID.SetFocus();
	

	return 0;
} 
int CIVFSetupList::OnEditSel(){
	if(m_szListID.IsEmpty() || GetMode() != VM_VIEW)
		return -1;

	EnableControls(TRUE);
	m_wndID.EnableWindow(FALSE);
	m_wndName.SetFocus();
	EnableButtons(FALSE, 0, 1, 2, -1);
	SetMode(VM_EDIT);
	return 0;
} 
int CIVFSetupList::OnDeleteSel(){
	if(m_szListID.IsEmpty() || GetMode() != VM_VIEW)
		return -1;
	OnItemListDeleteItem();
	EnableButtons(TRUE, 0, -1);
	SetMode(VM_NONE);
	 return 0;
} 
int CIVFSetupList::OnSaveSel(){
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);

	CString szWhere;
	if(GetMode() == VM_EDIT)
	{
		if(m_szListID == _T("hrm_department"))
			szWhere.Format(_T("WHERE sd_id='%s'"), m_szID);
		else
			szWhere.Format(_T(" WHERE ivs_id='%s' AND ivs_code='%s' "), m_szListID, m_szID);
	}

	if(!IsValidateData())
		return -1;

	CString szSQL;
	if(m_szListID == _T("hrm_department"))
	{
		if(m_szOldID != m_szID)
		{
			szSQL.Format(_T("SELECT COUNT(*) FROM sys_dept where sd_id='%s'"), m_szID);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() > 0)
			{
				AfxMessageBox(_T("The item is existing in the database. Can not add or edit item"));
				return -1;
			}
		}
		if(GetMode() == VM_ADD){
			szSQL = m_vimesDeptTbl.GetInsertSQL();
		}
		else if(GetMode() == VM_EDIT){
			szSQL = m_vimesDeptTbl.GetUpdateSQL();
			szSQL += szWhere;
		}
	}
	else
	{
		if(m_szOldID != m_szID)
		{
			szSQL.Format(_T("SELECT COUNT(*) FROM ivf_sel where ivs_id='%s' AND ivs_code='%s' "), m_szListID, m_szID);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() > 0)
			{
				AfxMessageBox(_T("The item is existing in the database. Can not add or edit item"));
				return -1;
			}
		}
		if(GetMode() == VM_ADD){
			szSQL = m_vimesselTbl.GetInsertSQL();
		}
		else if(GetMode() == VM_EDIT){
			szSQL = m_vimesselTbl.GetUpdateSQL();
			szSQL += szWhere;
		}
	}
//_fmsg(_T("%s"), szSQL);
	int ret = pMF->m_db.ExecSQL(szSQL);
	if(ret > 0)
	{
		OnItemListLoadData();
		EnableControls(FALSE);
		EnableButtons(TRUE, 0, -1);
		m_wndAdd.SetFocus();
		SetMode(VM_VIEW);
	}
	return 1;
} 
int CIVFSetupList::OnCancelSel(){
	EnableControls(FALSE);
	EnableButtons(TRUE, 0, -1);
	SetMode(GetMode()==VM_EDIT?VM_VIEW:VM_NONE);
	return 0;
} 
int CIVFSetupList::OnCloseSel(){
	 return 0;
} 
int CIVFSetupList::OnListDblClick(){
	 return 0;
} 
int CIVFSetupList::OnListSelChange(int nOldItem, int nNewItem){
	m_szListID = m_wndList.GetItemText(nNewItem, 2);
	int nType = ToLong(m_wndList.GetItemText(nNewItem, 3));
	if(m_szListID == _T("hrm_department"))
		m_wndID.SetMask(_T("&&&&&"));
	else
	{
		if(nType == 0)
			m_wndID.SetMask(_T("###"));
		else if(nType == 1)
			m_wndID.SetMask(_T(">>>>>"));
		else
			m_wndID.SetMask(_T("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"));
	}
	OnItemListLoadData();
	m_szID.Empty();
	m_szName.Empty();
	//OnCancelSel();
	UpdateData(FALSE);
	 return 0;
} 
int CIVFSetupList::OnListDeleteItem(){
	int nCurSel = m_wndList.GetCurSel();
	if(nCurSel < 0)
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	if(ShowMessage(1) == IDNO)
		return -1;

	CString szSQL;
	CString szID = m_wndList.GetItemText(nCurSel, 2);

	szSQL.Format(_T("DELETE FROM ivf_sel WHERE ivs_id='%s'"), szID);
	int ret = pMF->ExecSQL(szSQL);
	szSQL.Format(_T("DELETE FROM ivf_setuplist WHERE ivsl_id='%s'"), szID);
	ret = pMF->ExecSQL(szSQL);
	if(ret >= 0){
		OnListLoadData();
	}
	 return 0;
}

int CIVFSetupList::OnListAddItem(){
	CIVFSetupListDlg dlg;
	if(dlg.DoModal() == IDOK)
	{
		CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
		CString szSQL;
		szSQL.Format(_T("SELECT COUNT(*) FROM ivf_setuplist WHERE ivsl_id='%s'"), dlg.m_szID);
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		int ret = ToLong(rs.GetValue(_T("count")));
		if(ret > 0){
			AfxMessageBox(_T("The item is exist in the database. Can not add item"));
			return 0;
		}
		szSQL.Format(_T("INSERT INTO ivf_setuplist VALUES('%s', '%s', %d)"), dlg.m_szID, dlg.m_szName, dlg.m_nType);
		if(pMF->m_db.ExecSQL(szSQL) > 0)
			OnListLoadData();
	}
	return 0;
}

int CIVFSetupList::OnListEditItem(){
	CString szOldID;
	CIVFSetupListDlg dlg;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;

	m_szListID = m_wndList.GetItemText(nSel, 2);
	szOldID = m_szListID;
	dlg.m_szID = m_szListID;
	dlg.m_szName = m_wndList.GetItemText(nSel, 1);
	dlg.m_bAdd = FALSE;
	if(dlg.DoModal() == IDOK)
	{
			CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
			CString szSQL;
			szSQL.Format(_T("SELECT COUNT(*) FROM ivf_setuplist WHERE ivsl_id='%s'"), dlg.m_szID);
			CRecord rs(&pMF->m_db);
			rs.ExecSQL(szSQL);
			int ret = ToLong(rs.GetValue(_T("count")));
			if(ret > 0 && szOldID != dlg.m_szID){
				AfxMessageBox(_T("The item is exist in the database. Can not add item"));
				return 0;
			}
			szSQL.Format(_T("UPDATE ivf_setuplist \
							set ivsl_id='%s', ivsl_name='%s', ivsl_type=%d \
							WHERE ivsl_id='%s' "), dlg.m_szID, dlg.m_szName, dlg.m_nType, szOldID);
			if(pMF->m_db.ExecSQL(szSQL) > 0)
				OnListLoadData();
	}
	return 0;
}

int CIVFSetupList::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szID, szWhere;
	UpdateData(true);
	szWhere.Empty();
	if (!m_szFind.IsEmpty())
		szWhere.Format(_T("WHERE lower(ivsl_name) LIKE (chr(37)||lower('%s')||chr(37)) "), m_szFind);
	szSQL.Format(_T("SELECT ivsl_id as id, ivsl_name as name, ivsl_type as type \
					FROM ivf_setuplist %s ORDER BY ivsl_id"), szWhere);
	m_wndList.BeginLoad();
	int nItem = 1;
	int nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szID.Format(_T("%d"), nItem++);
		m_wndList.AddItems(
			szID,
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("type")), 
			NULL);
		rs.MoveNext();

	}
	m_wndList.EndLoad();
	return nCount;

}

void CIVFSetupList::Refresh(){
	static bool bLoaded = false;
	if(!bLoaded){
		OnListLoadData();
		bLoaded = true;
	}
}
int CIVFSetupList::SetMode(int nMode){
	int nOldMode = GetMode(); 
 	CGuiDialog::SetMode(nMode); 
	bool bFlg =TRUE;
	switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			bFlg = FALSE;
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			bFlg = FALSE;
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			break; 
 		}; 
	m_wndFind.EnableWindow(bFlg);
	m_wndSearch.EnableWindow(bFlg);
 	UpdateData(FALSE); 
 	return nOldMode; 
}

int CIVFSetupList::OnItemListAddParaclinic()
{
	return 0;
}