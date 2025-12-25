#include "HMSSelectPACSFormDialog.h"
#include "MainFrm.h"

static void _OnSearchByNameChangeFnc(CWnd *pWnd){
	((CHMSSelectPACSFormDialog *)pWnd)->OnSearchByNameChange();
}
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMSSelectPACSFormDialog *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMSSelectPACSFormDialog *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSelectPACSFormDialog *)pWnd)->OnSearchByNameCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSSelectPACSFormDialog *pVw = (CHMSSelectPACSFormDialog *)pWnd;
	pVw->OnApplySelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSelectPACSFormDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSSelectPACSFormDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSelectPACSFormDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSelectPACSFormDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSSelectPACSFormDialogFnc(CWnd *pWnd){
	 return ((CHMSSelectPACSFormDialog*)pWnd)->OnAddHMSSelectPACSFormDialog();
} 
static int _OnEditHMSSelectPACSFormDialogFnc(CWnd *pWnd){
	 return ((CHMSSelectPACSFormDialog*)pWnd)->OnEditHMSSelectPACSFormDialog();
} 
static int _OnDeleteHMSSelectPACSFormDialogFnc(CWnd *pWnd){
	 return ((CHMSSelectPACSFormDialog*)pWnd)->OnDeleteHMSSelectPACSFormDialog();
} 
static int _OnSaveHMSSelectPACSFormDialogFnc(CWnd *pWnd){
	 return ((CHMSSelectPACSFormDialog*)pWnd)->OnSaveHMSSelectPACSFormDialog();
} 
static int _OnCancelHMSSelectPACSFormDialogFnc(CWnd *pWnd){
	 return ((CHMSSelectPACSFormDialog*)pWnd)->OnCancelHMSSelectPACSFormDialog();
}

static int _OnSelectAllFnc(CWnd *pWnd){
	return ((CHMSSelectPACSFormDialog*)pWnd)->OnSelectAll();
}
static int _OnUnselectAllFnc(CWnd *pWnd){
	return ((CHMSSelectPACSFormDialog*)pWnd)->OnUnselectAll();
}
CHMSSelectPACSFormDialog::CHMSSelectPACSFormDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 395;
	m_nDlgHeight = 455;
	SetDefaultValues();
}
CHMSSelectPACSFormDialog::~CHMSSelectPACSFormDialog()
{
}
void CHMSSelectPACSFormDialog::OnCreateComponents()
{
	m_wndPACSFormInfo.Create(this, _T("PACS Form Information"), 5, 5, 385, 415);
	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 90, 55);
	m_wndSearchByName.Create(this,95, 30, 380, 55); 
	m_wndApply.Create(this, _T("&Apply"), 305, 420, 385, 445);
	m_wndList.Create(this,10, 60, 380, 410); 

}
void CHMSSelectPACSFormDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearchByName.SetLimitText(81);
	m_wndSearchByName.SetCheckValue(true);

	m_wndList.SetCheckBox(TRUE);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 130);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 225);

}
void CHMSSelectPACSFormDialog::OnSetWindowEvents()
{
	m_wndSearchByName.SetEvent(WE_CHANGE, _OnSearchByNameChangeFnc);
	//m_wndSearchByName.SetEvent(WE_SETFOCUS, _OnSearchByNameSetfocusFnc);
	//m_wndSearchByName.SetEvent(WE_KILLFOCUS, _OnSearchByNameKillfocusFnc);
	m_wndSearchByName.SetEvent(WE_CHECKVALUE, _OnSearchByNameCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("PACS Form Information"));
	m_wndList.AddEvent(1, _T("Select All"), _OnSelectAllFnc);
	m_wndList.AddEvent(2, _T("Unselect All"), _OnUnselectAllFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	OnListLoadData();
}
void CHMSSelectPACSFormDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);

}
void CHMSSelectPACSFormDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSelectPACSFormDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSelectPACSFormDialog::SetDefaultValues()
{
	m_szSearchByName.Empty();
}
int CHMSSelectPACSFormDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
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
void CHMSSelectPACSFormDialog::OnSearchByNameChange()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CHMSSelectPACSFormDialog::OnSearchByNameSetfocus(){
	
} */
/*void CHMSSelectPACSFormDialog::OnSearchByNameKillfocus(){
	
} */
int CHMSSelectPACSFormDialog::OnSearchByNameCheckValue()
{
	return 0;
} 
void CHMSSelectPACSFormDialog::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int ret = -1;
	pMF->BeginTransaction();
	szSQL.Format(_T("DELETE FROM hms_pacs_form_menu WHERE hpfm_itemid='%s'"), m_szID);

	ret = pMF->ExecSQL(szSQL);
	
	if (ret < 0)
	{
		ShowMessageBox(_T("Error while executing"), MB_ICONERROR | MB_OK);
		pMF->Rollback();
		return;
	}
	else
	{
		CString szFormID;
		int nIndex = 1;
		for (int i = 0; i < m_wndList.GetItemCount(); i++)
		{
			if (m_wndList.GetCheck(i))
			{
				szFormID = m_wndList.GetItemText(i, 0);
				szSQL.Format(_T("INSERT INTO hms_pacs_form_menu ")\
							 _T("VALUES('%s','%s',%d, '%s')"), m_szID, szFormID, nIndex, _T(""));
				ret = pMF->ExecSQL(szSQL);
				if (ret < 0)
				{
					ShowMessageBox(_T("Error while executing"), MB_ICONERROR | MB_OK);
					pMF->Rollback();
					return;
				}
				nIndex++;
			}
		}
	}
	pMF->Commit();
	OnOK();
} 
void CHMSSelectPACSFormDialog::OnListDblClick()
{
	
} 
void CHMSSelectPACSFormDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSelectPACSFormDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSelectPACSFormDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if (m_szSearchByName.IsEmpty())
		szWhere.Empty();
	else
		szWhere.Format(_T(" AND lower(hpf_name) LIKE chr(37)||lower('%s')||chr(37) "), m_szSearchByName);

	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hpf_id AS ID, hpf_name AS Name, ")\
		         _T("case when hpf_id in(SELECT hpfm_formid FROM hms_pacs_form_menu WHERE hpfm_itemid='%s') ")\
				 _T("then 'T' else 'F' end as Chk ")\
				 _T("FROM hms_pacs_form WHERE hpf_groupid='%s' %s")\
				 _T("ORDER BY hpf_id, hpf_index, hpf_name"), m_szID, m_szGroupID, szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nItem = 0;
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		if (rs.GetValue(_T("Chk")) == _T("T"))
			m_wndList.SetCheck(nItem, TRUE);
		nItem++;
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSSelectPACSFormDialog::OnAddHMSSelectPACSFormDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSelectPACSFormDialog::OnEditHMSSelectPACSFormDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSelectPACSFormDialog::OnDeleteHMSSelectPACSFormDialog(){
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
 		OnCancelHMSSelectPACSFormDialog(); 
 	}
	return 0;
}
int CHMSSelectPACSFormDialog::OnSaveHMSSelectPACSFormDialog(){
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
 		//OnHMSSelectPACSFormDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSelectPACSFormDialog::OnCancelHMSSelectPACSFormDialog(){
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
int CHMSSelectPACSFormDialog::OnHMSSelectPACSFormDialogListLoadData(){
	return 0;
}

int CHMSSelectPACSFormDialog::OnSelectAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (!m_wndList.GetCheck(i))
			m_wndList.SetCheck(i, TRUE);
	}
	return 0;
}
int CHMSSelectPACSFormDialog::OnUnselectAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
			m_wndList.SetCheck(i, FALSE);
	}
	return 0;
}