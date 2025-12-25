#include "FAMListSetupDialog.h"
#include "FAMEntrySetupDialog.h"
#include "MainFrm.h"
static long _OnSetupListLoadDataFnc(CWnd *pWnd){
	return ((CFAMListSetupDialog*)pWnd)->OnSetupListLoadData();
} 
static void _OnSetupListDblClickFnc(CWnd *pWnd){
	((CFAMListSetupDialog*)pWnd)->OnSetupListDblClick();
} 
static void _OnSetupListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMListSetupDialog*)pWnd)->OnSetupListSelectChange(nOldItem, nNewItem);
} 
static int _OnSetupListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMListSetupDialog*)pWnd)->OnSetupListDeleteItem();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CFAMListSetupDialog *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CFAMListSetupDialog *)pWnd)->OnSearchNameSetfocus();} */ 
static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CFAMListSetupDialog *)pWnd)->OnSearchNameKillfocus();
}
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMListSetupDialog *)pWnd)->OnSearchNameCheckValue();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMListSetupDialog*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMListSetupDialog*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMListSetupDialog*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMListSetupDialog*)pWnd)->OnItemListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CFAMListSetupDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CFAMListSetupDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CFAMListSetupDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CFAMListSetupDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CFAMListSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CFAMListSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CFAMListSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMListSetupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMListSetupDialog *pVw = (CFAMListSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMListSetupDialog *pVw = (CFAMListSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMListSetupDialog *pVw = (CFAMListSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMListSetupDialog *pVw = (CFAMListSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMListSetupDialog *pVw = (CFAMListSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFAMListSetupDialogFnc(CWnd *pWnd){
	 return ((CFAMListSetupDialog*)pWnd)->OnAddFAMListSetupDialog();
} 
static int _OnEditFAMListSetupDialogFnc(CWnd *pWnd){
	 return ((CFAMListSetupDialog*)pWnd)->OnEditFAMListSetupDialog();
} 
static int _OnDeleteFAMListSetupDialogFnc(CWnd *pWnd){
	 return ((CFAMListSetupDialog*)pWnd)->OnDeleteFAMListSetupDialog();
} 
static int _OnSaveFAMListSetupDialogFnc(CWnd *pWnd){
	 return ((CFAMListSetupDialog*)pWnd)->OnSaveFAMListSetupDialog();
} 
static int _OnCancelFAMListSetupDialogFnc(CWnd *pWnd){
	 return ((CFAMListSetupDialog*)pWnd)->OnCancelFAMListSetupDialog();
}
static int _OnAddEntryFnc(CWnd *pWnd){
	return ((CFAMListSetupDialog*)pWnd)->OnAddEntry();
}
static int _OnEditEntryFnc(CWnd *pWnd){
	return ((CFAMListSetupDialog*)pWnd)->OnEditEntry();
}
static int _OnDeleteEntryFnc(CWnd *pWnd){
	return ((CFAMListSetupDialog*)pWnd)->OnDeleteEntry();
}
CFAMListSetupDialog::CFAMListSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 780;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CFAMListSetupDialog::~CFAMListSetupDialog()
{
}
void CFAMListSetupDialog::OnCreateComponents()
{
	m_wndSetupListInfo.Create(this, _T("Setup List"), 5, 5, 345, 475);
	m_wndItemInfo.Create(this, _T("Item Information"), 350, 5, 770, 355);
	m_wndDetailInfo.Create(this, _T("Details"), 350, 360, 770, 445);
	m_wndSetupList.Create(this,10, 30, 340, 470); 
	m_wndSearchNameLabel.Create(this, _T("Search By Name"), 355, 30, 435, 55);
	m_wndSearchName.Create(this,440, 30, 765, 55); 
	m_wndItemList.Create(this,355, 60, 765, 350); 
	m_wndIDLabel.Create(this, _T("ID"), 355, 385, 435, 410);
	m_wndID.Create(this,440, 385, 765, 410); 
	m_wndNameLabel.Create(this, _T("Name"), 355, 415, 435, 440);
	m_wndName.Create(this,440, 415, 765, 440); 
	m_wndAdd.Create(this, _T("&Add"), 350, 450, 430, 475);
	m_wndEdit.Create(this, _T("&Edit"), 435, 450, 515, 475);
	m_wndDelete.Create(this, _T("&Delete"), 520, 450, 600, 475);
	m_wndSave.Create(this, _T("&Save"), 605, 450, 685, 475);
	m_wndCancel.Create(this, _T("&Cancel"), 690, 450, 770, 475);

}
void CFAMListSetupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearchName.SetLimitText(81);
	//m_wndSearchName.SetCheckValue(true);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndName.SetLimitText(100);
	m_wndName.SetCheckValue(true);

	m_wndSetupList.InsertColumn(0, _T("Index"), CFMT_TEXT, 40);
	m_wndSetupList.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);
	m_wndSetupList.InsertColumn(2, _T("ID"), CFMT_TEXT, 0);
	m_wndSetupList.InsertColumn(3, _T("Prefix"), CFMT_TEXT, 0);


	m_wndItemList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

}
void CFAMListSetupDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_wndSetupList.SetEvent(WE_SELCHANGE, _OnSetupListSelectChangeFnc);
	m_wndSetupList.SetEvent(WE_LOADDATA, _OnSetupListLoadDataFnc);
	m_wndSetupList.SetEvent(WE_DBLCLICK, _OnSetupListDblClickFnc);
	m_wndSetupList.SetWindowText(_T("Setup List"));
	m_wndSetupList.AddEvent(1, _T("Add Entry"), _OnAddEntryFnc);
	m_wndSetupList.AddEvent(2, _T("Edit Entry"), _OnEditEntryFnc);
	m_wndSetupList.AddEvent(3, _T("Delete Entry"), _OnDeleteEntryFnc);
	if (pMF->GetCurrentUser().MakeLower().Trim() == _T("admin"))
	{
		m_wndSetupList.SetMenuState(1, TRUE);
		m_wndSetupList.SetMenuState(2, TRUE);
		m_wndSetupList.SetMenuState(3, TRUE);
	}
	else
	{
		m_wndSetupList.SetMenuState(1, FALSE);
		m_wndSetupList.SetMenuState(2, FALSE);
		m_wndSetupList.SetMenuState(3, FALSE);
	}
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.SetWindowText(_T("Item Information"));
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	OnSetupListLoadData();
	if (m_wndSetupList.GetItemCount() > 0)
	{
		m_wndSetupList.SetCurSel(0);
		if (m_wndItemList.GetItemCount() > 0)
		{
			m_wndItemList.SetCurSel(0);
			m_szID = m_wndItemList.GetItemText(0, 0);
			m_nIndex = 0;
		}
		else
		{
			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
			m_nIndex = -1;
		}
	}
}
void CFAMListSetupDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
}
void CFAMListSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ss_desc AS description FROM sys_sel WHERE ss_id='%s' and ss_code = '%s'"), m_szTableName, m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("description"), m_szName);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CFAMListSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
void CFAMListSetupDialog::SetDefaultValues()
{
	//m_szSearchName.Empty();
	m_szID.Empty();
	m_szName.Empty();
}
int CFAMListSetupDialog::SetMode(int nMode)
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
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndID.EnableWindow(FALSE);
			m_wndName.SetFocus();
			m_wndName.SetSel(m_wndName.GetWindowTextLength(), m_wndName.GetWindowTextLength());
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
		m_wndSearchName.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CFAMListSetupDialog::OnSetupListDblClick()
{
	OnEditEntry();
} 
void CFAMListSetupDialog::OnSetupListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_szTableName = m_wndSetupList.GetItemText(nNewItem, 2);
	m_szPrefix = m_wndSetupList.GetItemText(nNewItem, 3);
	OnItemListLoadData();
	if (m_wndItemList.GetItemCount() > 0)
	{
		m_wndItemList.SetCurSel(0);
		m_szID = m_wndItemList.GetItemText(0, 0);
		m_nIndex = 0;
	}
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.SetFocus();
		m_nIndex = -1;
	}
} 
int CFAMListSetupDialog::OnSetupListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMListSetupDialog::OnSetupListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSetupList.BeginLoad(); 
	m_wndSetupList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fasl_id, fasl_name AS Name, fasl_type, fasl_prefix FROM fam_setuplist WHERE fasl_org_id = '%s' ORDER BY fasl_id"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	int nIndex = 1;
	CString szTemp;
	while(!rs.IsEOF())
	{ 
		szTemp.Format(_T("%d"), nIndex);
		m_wndSetupList.AddItems(
			szTemp, 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("fasl_id")),
			rs.GetValue(_T("fasl_prefix")), NULL);
		nIndex++;
		rs.MoveNext();
	}
	m_wndSetupList.EndLoad(); 
	return nCount;
}
int CFAMListSetupDialog::OnAddEntry()
{
	int nSel;
	CFAMEntrySetupDialog dlg(this);
	dlg.SetMode(VM_ADD);
	if (dlg.DoModal() == IDOK)
	{
		OnSetupListLoadData();
		for (int i = 0; i < m_wndSetupList.GetItemCount(); i++)
		{
			if (m_wndSetupList.GetItemText(i, 2) == dlg.m_szID)
			{
				nSel = i;
				break;
			}
		}
		m_wndSetupList.SetCurSel(nSel);
	}
	return 0;
}
int CFAMListSetupDialog::OnEditEntry()
{
	int nSel = m_wndSetupList.GetCurSel();
	if (nSel < 0)
		return -1;
	CFAMEntrySetupDialog dlg(this);
	dlg.m_szID = m_wndSetupList.GetItemText(nSel, 2);
	dlg.m_szPrefix = m_wndSetupList.GetItemText(nSel, 3);
	dlg.m_szName = m_wndSetupList.GetItemText(nSel, 1);
	dlg.SetMode(VM_EDIT);
	if (dlg.DoModal() == IDOK)
	{
		OnSetupListLoadData();
		m_wndSetupList.SetCurSel(nSel); 
	}
	return 0;
}
int CFAMListSetupDialog::OnDeleteEntry()
{
	int nSel = m_wndSetupList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szID; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1;
	szID = m_wndSetupList.GetItemText(nSel, 2);
	szSQL.Format(_T("DELETE FROM fam_setuplist WHERE fasl_id='%s' and fasl_org_id = '%s'"), szID, pMF->GetModuleID()); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
		OnSetupListLoadData();
		if (nSel != 0)
			nSel -= 1;
		m_wndSetupList.SetCurSel(nSel);
 	}
	return 0;
}
/*void CFAMListSetupDialog::OnSearchNameChange(){
	
} */
/*void CFAMListSetupDialog::OnSearchNameSetfocus(){
	
} */
void CFAMListSetupDialog::OnSearchNameKillfocus(){
	UpdateData(TRUE);
	if(m_szSearchName.IsEmpty())
		return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	m_wndItemList.BeginLoad(); 
	m_wndItemList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as ID, ss_desc as Name FROM sys_sel WHERE ss_id = '%s' AND upper(ss_desc) LIKE upper('%s%s%s') ORDER BY ss_code"), m_szTableName, _T("%"), m_szSearchName, _T("%"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad();
}
int CFAMListSetupDialog::OnSearchNameCheckValue()
{
	OnItemListLoadData();
	if (m_wndItemList.GetItemCount() > 0)
	{
		m_wndItemList.SetCurSel(0);
		m_nIndex = 0;
	}
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.SetFocus();
		m_nIndex = -1;
	}
	return 0;
} 
void CFAMListSetupDialog::OnItemListDblClick()
{
	
} 
void CFAMListSetupDialog::OnItemListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szID = m_wndItemList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	m_wndItemList.EnsureVisible(nNewItem, FALSE);
	m_wndEdit.SetFocus();
} 
int CFAMListSetupDialog::OnItemListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteFAMListSetupDialog();
	return 0;
} 
long CFAMListSetupDialog::OnItemListLoadData()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndItemList.BeginLoad(); 
	m_wndItemList.DeleteAllItems(); 
	int nCount = 0;
	if (!m_szSearchName.IsEmpty())
	{
		if (GetMode() == VM_ADD)
			szWhere.Empty();
		else
			szWhere.Format(_T(" and ss_code = '%s'"), m_szID);
	}
	/*szSQL.Format(_T("SELECT %s_id AS ID, %s_desc AS Name FROM %s %s ORDER BY %s_id"), 
		         m_szPrefix, m_szPrefix, m_szTableName, szWhere, m_szPrefix);*/
	szSQL.Format(_T("SELECT ss_code as ID, ss_desc as Name FROM sys_sel WHERE ss_id = '%s' ORDER BY ss_code"), m_szTableName, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}
/*void CFAMListSetupDialog::OnIDChange(){
	
} */
/*void CFAMListSetupDialog::OnIDSetfocus(){
	
} */
/*void CFAMListSetupDialog::OnIDKillfocus(){
	
} */
int CFAMListSetupDialog::OnIDCheckValue()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT Count(*) FROM sys_sel WHERE ss_id='%s' and ss_code = '%s'"), 
		         m_szTableName, m_szID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CFAMListSetupDialog::OnNameChange(){
	
} */
/*void CFAMListSetupDialog::OnNameSetfocus(){
	
} */
/*void CFAMListSetupDialog::OnNameKillfocus(){
	
} */
int CFAMListSetupDialog::OnNameCheckValue()
{
	UpdateData(TRUE);
	CString szTemp;
	PreInitCap(m_szName, szTemp);
	m_szName = szTemp;
	UpdateData(FALSE);
	return 0;
} 
void CFAMListSetupDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMListSetupDialog();
} 
void CFAMListSetupDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFAMListSetupDialog();
} 
void CFAMListSetupDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteFAMListSetupDialog();
} 
void CFAMListSetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMListSetupDialog();
} 
void CFAMListSetupDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMListSetupDialog();
} 
int CFAMListSetupDialog::OnAddFAMListSetupDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMListSetupDialog::OnEditFAMListSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMListSetupDialog::OnDeleteFAMListSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1;
	m_nIndex = m_wndItemList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM sys_sel WHERE ss_code='%s' and ss_id = '%s'"), m_szID, m_szTableName); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
		OnItemListLoadData();
		if (m_wndItemList.GetItemCount() > 0)
		{
			SetItemSel(&m_wndItemList, m_szID, m_nIndex);
		}
		else
		{
 			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		}   	 
 	}
	return 0;
}
int CFAMListSetupDialog::OnSaveFAMListSetupDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1;
	CString szIDField, szDescField;


	/*CDbfMap m_Tbl;
	m_Tbl.SetTableName(m_szTableName);
	szIDField.Format(_T("%s_id"), m_szPrefix);
	m_Tbl.AddField(szIDField, dfText, 15);
	szDescField.Format(_T("%s_desc"), m_szPrefix);
	m_Tbl.AddField(szDescField, dfText, 100);

	m_Tbl.SetValue(szIDField, m_szID);
	m_Tbl.SetValue(szDescField, m_szName);*/
	
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	bool bAdd = false;
 	if(GetMode() == VM_ADD)
	{ 
		bAdd = true;
		szSQL.Format(_T("INSERT INTO sys_sel (ss_id, ss_code, ss_desc) values ('%s','%s','%s')"), m_szTableName, m_szID, m_szName);
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE ss_id='%s' "), m_szTableName); 
		szSQL.Format(_T("Update sys_sel set ss_desc = '%s', ss_code = '%s'"), m_szName, m_szID);
 		szSQL += szWhere;
 	}

 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		OnItemListLoadData();
		SetItemSel(&m_wndItemList, m_szID, m_nIndex);
		if (bAdd)
			m_wndAdd.SetFocus();  
 	} 
 	/*else 
 	{ 
 	}*/
 	return ret; 
 	//return 0; 
}
int CFAMListSetupDialog::OnCancelFAMListSetupDialog()
{
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
		if (m_wndItemList.GetCurSel() >= 0)
		{
			m_szID = m_wndItemList.GetItemText(m_wndItemList.GetCurSel(), 0);
			GetDataToScreen();
		}
		else
 			SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CFAMListSetupDialog::OnFAMListSetupDialogListLoadData(){
	return 0;
}
void CFAMListSetupDialog::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
{
	if (GetMode() == VM_ADD)
	{
		for (int i = pList->GetItemCount() - 1; i >= 0; i--)
		{
			if (pList->GetItemText(i, 0).Trim() == szID.Trim())
			{
				pList->SetCurSel(i);
				m_nIndex = i;
				break;
			}
		}
	}
	else if (GetMode() == VM_EDIT)
	{
		pList->SetCurSel(nIndex);
	}
	else
	{	
		if (pList->GetItemCount() > 0)
		{
			if (nIndex == 0)
			{
				pList->SetCurSel(0);
				m_nIndex = 0;
			}
			else
			{
				m_nIndex -= 1;
				pList->SetCurSel(m_nIndex);				
			}
		}
	}
}