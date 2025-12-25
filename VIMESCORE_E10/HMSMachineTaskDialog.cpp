#include "HMSMachineTaskDialog.h"
#include "MainFrame_E10.h"
#include "HMSMainFrame.h"
static void _OnFeeGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMachineTaskDialog* )pWnd)->OnFeeGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeGroupSelendokFnc(CWnd *pWnd){
	((CHMSMachineTaskDialog *)pWnd)->OnFeeGroupSelendok();
}
/*static void _OnFeeGroupSetfocusFnc(CWnd *pWnd){
	((CHMSMachineTaskDialog *)pWnd)->OnFeeGroupKillfocus();
}*/
/*static void _OnFeeGroupKillfocusFnc(CWnd *pWnd){
	((CHMSMachineTaskDialog *)pWnd)->OnFeeGroupKillfocus();
}*/
static long _OnFeeGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSMachineTaskDialog *)pWnd)->OnFeeGroupLoadData();
}
/*static void _OnFeeGroupAddNewFnc(CWnd *pWnd){
	((CHMSMachineTaskDialog *)pWnd)->OnFeeGroupAddNew();
}*/
/*static void _OnFindChangeFnc(CWnd *pWnd){
	((CHMSMachineTaskDialog *)pWnd)->OnFindChange();
} */
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CHMSMachineTaskDialog *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CHMSMachineTaskDialog *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineTaskDialog *)pWnd)->OnFindCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSMachineTaskDialog *pVw = (CHMSMachineTaskDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSMachineTaskDialog *pVw = (CHMSMachineTaskDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnFeeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMachineTaskDialog*)pWnd)->OnFeeListLoadData();
} 
static void _OnFeeListDblClickFnc(CWnd *pWnd){
	((CHMSMachineTaskDialog*)pWnd)->OnFeeListDblClick();
} 
static void _OnFeeListClickFnc(CWnd *pWnd){
	((CHMSMachineTaskDialog*)pWnd)->OnFeeListClick();
} 
static void _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMachineTaskDialog*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMachineTaskDialog*)pWnd)->OnFeeListDeleteItem();
} 
static long _OnTaskListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMachineTaskDialog*)pWnd)->OnTaskListLoadData();
} 
static void _OnTaskListDblClickFnc(CWnd *pWnd){
	((CHMSMachineTaskDialog*)pWnd)->OnTaskListDblClick();
} 
static void _OnTaskListClickFnc(CWnd *pWnd){
	((CHMSMachineTaskDialog*)pWnd)->OnTaskListClick();
} 
static void _OnTaskListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMachineTaskDialog*)pWnd)->OnTaskListSelectChange(nOldItem, nNewItem);
} 
static int _OnTaskListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMachineTaskDialog*)pWnd)->OnTaskListDeleteItem();
} 
static int _OnAddHMSMachineTaskDialogFnc(CWnd *pWnd){
	 return ((CHMSMachineTaskDialog*)pWnd)->OnAddHMSMachineTaskDialog();
} 
static int _OnEditHMSMachineTaskDialogFnc(CWnd *pWnd){
	 return ((CHMSMachineTaskDialog*)pWnd)->OnEditHMSMachineTaskDialog();
} 
static int _OnDeleteHMSMachineTaskDialogFnc(CWnd *pWnd){
	 return ((CHMSMachineTaskDialog*)pWnd)->OnDeleteHMSMachineTaskDialog();
} 
static int _OnSaveHMSMachineTaskDialogFnc(CWnd *pWnd){
	 return ((CHMSMachineTaskDialog*)pWnd)->OnSaveHMSMachineTaskDialog();
} 
static int _OnCancelHMSMachineTaskDialogFnc(CWnd *pWnd){
	 return ((CHMSMachineTaskDialog*)pWnd)->OnCancelHMSMachineTaskDialog();
} 
static void _OnFeeListCheckSelectFnc(CWnd *pWnd){
	 ((CHMSMachineTaskDialog*)pWnd)->OnFeeListCheckSelect();
} 
static void _OnTaskListCheckSelectFnc(CWnd *pWnd){
	 ((CHMSMachineTaskDialog*)pWnd)->OnTaskListCheckSelect();
} 
CHMSMachineTaskDialog::CHMSMachineTaskDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSMachineTaskDialog::~CHMSMachineTaskDialog(){
}
void CHMSMachineTaskDialog::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 585, 60);
	m_wndFeeListGroup.Create(this, _T("FeeListGroup"), 5, 60, 295, 105);
	m_wndTaskListGroup.Create(this, _T("TaskListGroup"), 300, 60, 585, 105);
	m_wndFeeGroupLabel.Create(this, _T("Fee Group"), 10, 30, 90, 55);
	m_wndFeeGroup.Create(this,95, 30, 295, 55); 
	m_wndFindLabel.Create(this, _T("Find"), 300, 30, 380, 55);
	m_wndFind.Create(this,385, 30, 580, 55); 
	m_wndAdd.Create(this, _T(">>"), 215, 385, 295, 410);
	m_wndClose.Create(this, _T("Close"), 505, 385, 585, 410);
	m_wndFeeList.Create(this,5, 80, 295, 380); 
	m_wndTaskList.Create(this,300, 80, 585, 380); 
	m_wndFeeListCheck.Create(this, _T("Mark All"), 215, 60, 295, 85);
	m_wndTaskListCheck.Create(this, _T("Mark All"), 505, 60, 585, 85);
}
void CHMSMachineTaskDialog::OnInitializeComponents(){
	CMainFrame_E10*pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFeeGroup.SetCheckValue(true);
	//m_wndFeeGroup.LimitText(35);
	m_wndFind.SetLimitText(35);
	//m_wndFind.SetCheckValue(true);


	m_wndFeeGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFeeGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndFeeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndFeeList.InsertColumn(1, _T("Name"), CFMT_TEXT, 240);
	m_wndFeeList.InsertColumn(2, _T("Mark"), CFMT_TEXT, 40);

	m_wndTaskList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndTaskList.InsertColumn(1, _T("Name"), CFMT_TEXT, 240);
	m_wndTaskList.InsertColumn(2, _T("Mark"), CFMT_TEXT, 40);

}
void CHMSMachineTaskDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFeeGroup.SetEvent(WE_SELENDOK, _OnFeeGroupSelendokFnc);
	//m_wndFeeGroup.SetEvent(WE_SETFOCUS, _OnFeeGroupSetfocusFnc);
	//m_wndFeeGroup.SetEvent(WE_KILLFOCUS, _OnFeeGroupKillfocusFnc);
	m_wndFeeGroup.SetEvent(WE_SELCHANGE, _OnFeeGroupSelectChangeFnc);
	m_wndFeeGroup.SetEvent(WE_LOADDATA, _OnFeeGroupLoadDataFnc);
	//m_wndFeeGroup.SetEvent(WE_ADDNEW, _OnFeeGroupAddNewFnc);
	//m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);
	m_wndFeeList.SetEvent(WE_CLICK, _OnFeeListClickFnc);
	//m_wndFeeList.AddEvent(1, _T("Delete"), _OnFeeListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndTaskList.SetEvent(WE_SELCHANGE, _OnTaskListSelectChangeFnc);
	m_wndTaskList.SetEvent(WE_LOADDATA, _OnTaskListLoadDataFnc);
	m_wndTaskList.SetEvent(WE_DBLCLICK, _OnTaskListDblClickFnc);
	m_wndTaskList.AddEvent(1, _T("Delete"), _OnTaskListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndTaskList.SetEvent(WE_CLICK, _OnTaskListClickFnc);
	m_wndFeeListCheck.SetEvent(WE_CLICK, _OnFeeListCheckSelectFnc);
	m_wndTaskListCheck.SetEvent(WE_CLICK, _OnTaskListCheckSelectFnc);
	OnTaskListLoadData();

}
void CHMSMachineTaskDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFeeGroup.GetDlgCtrlID(), m_szFeeGroupKey);
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_Check(pDX, m_wndFeeListCheck.GetDlgCtrlID(), m_bFeeListCheck);
	DDX_Check(pDX, m_wndTaskListCheck.GetDlgCtrlID(), m_bTaskListCheck);
}
void CHMSMachineTaskDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FeeGroup")] =  m_szFeeGroupKey;
	m_jData[_T("Find")] =  m_szFind;
	}
	else
	{
			
	m_jData[_T("FeeGroup")].GetValue(m_szFeeGroupKey);
	m_jData[_T("Find")].GetValue(m_szFind);
	}

}
void CHMSMachineTaskDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMachineTaskDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CHMSMachineTaskDialog::SetDefaultValues(){

	m_szFeeGroupKey.Empty();
	m_szFind.Empty();
	m_bFeeListCheck = FALSE;
	m_bTaskListCheck = FALSE;
}
int CHMSMachineTaskDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
void CHMSMachineTaskDialog::OnFeeGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData();
	OnFeeListLoadData();
} 
void CHMSMachineTaskDialog::OnFeeGroupSelendok(){
	 
}
/*void CHMSMachineTaskDialog::OnFeeGroupSetfocus(){
	
}*/
/*void CHMSMachineTaskDialog::OnFeeGroupKillfocus(){
	
}*/
long CHMSMachineTaskDialog::OnFeeGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadFeeGroup(&m_wndFeeGroup, m_szFeeGroupKey, _T(""));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFeeGroup.IsSearchKey() && !m_szFeeGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFeeGroupKey
};
	m_wndFeeGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSMachineTaskDialog::OnFeeGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CHMSMachineTaskDialog::OnFindChange(){
	
} */
/*void CHMSMachineTaskDialog::OnFindSetfocus(){
	
} */
/*void CHMSMachineTaskDialog::OnFindKillfocus(){
	
} */
int CHMSMachineTaskDialog::OnFindCheckValue(){
	UpdateData();
	OnTaskListLoadData();
	OnFeeListLoadData();
	return 0;
} 
void CHMSMachineTaskDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szFeeID;
	int nRet = 0;
	//Get Check
	szFeeID = pMF->GetCheckListView(&m_wndFeeList, 2);
	if (szFeeID.IsEmpty())
	{
		return;
	}
	szSQL.Format(_T("hms_machine_task_create('%s','%s','%s')")
		,pMF->GetCurrentUser(), m_szMachineID, szFeeID);
	nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		OnFeeListLoadData();
		OnTaskListLoadData();
	}
} 
void CHMSMachineTaskDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSMachineTaskDialog::OnFeeListDblClick(){
	
} 
void CHMSMachineTaskDialog::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CHMSMachineTaskDialog::OnFeeListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CHMSMachineTaskDialog::OnFeeListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();
	if (!m_szFeeGroupKey.IsEmpty())
	{
		szFilter.AppendFormat(_T(" and hfl_groupid = '%s'"), m_szFeeGroupKey);
	}
	if (!m_szFind.IsEmpty())
	{
		szFilter.AppendFormat(
			_T(" and lower(hfl_name) like ") \
			_T(" chr(37)||lower('%s')||chr(37)")
			, m_szFind);
	}
	szFilter.AppendFormat(
		_T(" and hfl_feeid not in (") \
		_T(" select hmt_fee_id from hms_machine_task ") \
		_T(" where hmt_machine_id = '%s')")
		, m_szMachineID);
	return pMF->LoadFeeListView(&m_wndFeeList, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndFeeList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndFeeList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSMachineTaskDialog::OnTaskListDblClick(){
	
} 
void CHMSMachineTaskDialog::OnTaskListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nTaskID = str2long(m_wndTaskList.GetItemText(nNewItem, 0));
} 
int CHMSMachineTaskDialog::OnTaskListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szFeeID;
	int nRet = 0;
	//Get Check
	szFeeID = pMF->GetCheckListView(&m_wndTaskList, 2);
	szSQL.Format(_T("hms_machine_task_delete('%s','%s')")
		,pMF->GetCurrentUser(), szFeeID);
	nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		OnFeeListLoadData();
		OnTaskListLoadData();
	}
	return nRet;
} 
long CHMSMachineTaskDialog::OnTaskListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and mt_machine_id = '%s'"), m_szMachineID);
	return pMF->LoadMachineTaskList(&m_wndTaskList, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTaskList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaskList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndTaskList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSMachineTaskDialog::OnAddHMSMachineTaskDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSMachineTaskDialog::OnEditHMSMachineTaskDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMachineTaskDialog::OnDeleteHMSMachineTaskDialog(){
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
 		OnCancelHMSMachineTaskDialog();
 	}
	return 0;
}
int CHMSMachineTaskDialog::OnSaveHMSMachineTaskDialog(){
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
 		//OnHMSMachineTaskDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSMachineTaskDialog::OnCancelHMSMachineTaskDialog(){
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

void CHMSMachineTaskDialog::OnFeeListClick()
{
	int nSel = m_wndFeeList.GetCurSel();
	CString szCheck = m_wndFeeList.GetItemText(nSel, 2);
	m_wndFeeList.SetItemText(nSel, 2, 
		szCheck.IsEmpty()?L"[X]":_T(""));
}

void CHMSMachineTaskDialog::OnTaskListClick()
{
	int nSel = m_wndTaskList.GetCurSel();
	CString szCheck = m_wndTaskList.GetItemText(nSel, 2);
	m_wndTaskList.SetItemText(nSel, 2, 
		szCheck.IsEmpty()?L"[X]":_T(""));
}

void CHMSMachineTaskDialog::OnFeeListCheckSelect()
{
	UpdateData();
	for (int i = 0; i < m_wndFeeList.GetItemCount(); i++)
	{
		m_wndFeeList.SetItemText(i, 2, 
			m_bFeeListCheck?L"[X]":_T(""));
	}
	m_wndFeeList.EndLoad();
}

void CHMSMachineTaskDialog::OnTaskListCheckSelect()
{
	UpdateData();
	for (int i = 0; i < m_wndTaskList.GetItemCount(); i++)
	{
		m_wndTaskList.SetItemText(i, 2, 
			m_bTaskListCheck?L"[X]":_T(""));
	}
	m_wndTaskList.EndLoad();
}