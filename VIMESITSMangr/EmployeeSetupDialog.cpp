#include "EmployeeSetupDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEmployeeSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEmployeeSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEmployeeSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEmployeeSetupDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CEmployeeSetupDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CEmployeeSetupDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CEmployeeSetupDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CEmployeeSetupDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnFullNameChangeFnc(CWnd *pWnd){
	((CEmployeeSetupDialog *)pWnd)->OnFullNameChange();
} */
/*static void _OnFullNameSetfocusFnc(CWnd *pWnd){
	((CEmployeeSetupDialog *)pWnd)->OnFullNameSetfocus();} */ 
/*static void _OnFullNameKillfocusFnc(CWnd *pWnd){
	((CEmployeeSetupDialog *)pWnd)->OnFullNameKillfocus();
} */
static int _OnFullNameCheckValueFnc(CWnd *pWnd){
	return ((CEmployeeSetupDialog *)pWnd)->OnFullNameCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEmployeeSetupDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CEmployeeSetupDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CEmployeeSetupDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CEmployeeSetupDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CEmployeeSetupDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CEmployeeSetupDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CEmployeeSetupDialog *pVw = (CEmployeeSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEmployeeSetupDialog *pVw = (CEmployeeSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEmployeeSetupDialog *pVw = (CEmployeeSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEmployeeSetupDialog *pVw = (CEmployeeSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEmployeeSetupDialog *pVw = (CEmployeeSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CEmployeeSetupDialog *pVw = (CEmployeeSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddEmployeeSetupDialogFnc(CWnd *pWnd){
	 return ((CEmployeeSetupDialog*)pWnd)->OnAddEmployeeSetupDialog();
} 
static int _OnEditEmployeeSetupDialogFnc(CWnd *pWnd){
	 return ((CEmployeeSetupDialog*)pWnd)->OnEditEmployeeSetupDialog();
} 
static int _OnDeleteEmployeeSetupDialogFnc(CWnd *pWnd){
	 return ((CEmployeeSetupDialog*)pWnd)->OnDeleteEmployeeSetupDialog();
} 
static int _OnSaveEmployeeSetupDialogFnc(CWnd *pWnd){
	 return ((CEmployeeSetupDialog*)pWnd)->OnSaveEmployeeSetupDialog();
} 
static int _OnCancelEmployeeSetupDialogFnc(CWnd *pWnd){
	 return ((CEmployeeSetupDialog*)pWnd)->OnCancelEmployeeSetupDialog();
} 
CEmployeeSetupDialog::CEmployeeSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CEmployeeSetupDialog::~CEmployeeSetupDialog(){
}
void CEmployeeSetupDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 540, 305); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 310, 85, 335);
	m_wndID.Create(this,90, 310, 225, 335); 
	m_wndFullNameLabel.Create(this, _T("Full Name"), 5, 340, 85, 365);
	m_wndFullName.Create(this,90, 340, 360, 365); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 370, 85, 395);
	m_wndDepartment.Create(this,90, 370, 360, 395); 
	m_wndAdd.Create(this, _T("&Add"), 65, 400, 140, 425);
	m_wndEdit.Create(this, _T("&Edit"), 145, 400, 220, 425);
	m_wndDelete.Create(this, _T("&Delete"), 225, 400, 300, 425);
	m_wndSave.Create(this, _T("&Save"), 305, 400, 380, 425);
	m_wndCancel.Create(this, _T("&Cancel"), 385, 400, 460, 425);
	m_wndClose.Create(this, _T("&Close"), 465, 400, 540, 425);

}
void CEmployeeSetupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndFullName.SetInitCap(true);
	m_wndFullName.SetLimitText(100);
	m_wndFullName.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Full Name"), CFMT_TEXT, 210);
	m_wndList.InsertColumn(2, _T("Department"), CFMT_TEXT, 210);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_fam_employeeTbl.SetTableName(_T("fam_employee"));
	m_fam_employeeTbl.AddField(_T("fae_id"), dfText, 15); 
	m_fam_employeeTbl.AddField(_T("fae_fullname"), dfText, 100); 
	m_fam_employeeTbl.AddField(_T("fae_department"), dfText, 35); 
	SetWindowTitle(_T("Employee Information"));
}
void CEmployeeSetupDialog::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("&Add"), _OnAddEmployeeSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("&Edit"), _OnEditEmployeeSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("&Delete"), _OnDeleteEmployeeSetupDialogFnc, 0, 0, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndFullName.SetEvent(WE_CHANGE, _OnFullNameChangeFnc);
	//m_wndFullName.SetEvent(WE_SETFOCUS, _OnFullNameSetfocusFnc);
	//m_wndFullName.SetEvent(WE_KILLFOCUS, _OnFullNameKillfocusFnc);
	m_wndFullName.SetEvent(WE_CHECKVALUE, _OnFullNameCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
	if (m_wndList.GetItemCount() > 0)
	{
		m_wndList.SetCurSel(0);
		//m_wndList.SetItemState(0, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
		//m_wndList.SetFocus();
		m_szID = m_wndList.GetItemText(0, 0);
		m_nIndex = 0;
		//GetDataToScreen();
	}
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.SetFocus();
		m_nIndex = -1;
	}
}
void CEmployeeSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndFullName.GetDlgCtrlID(), m_szFullName);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CEmployeeSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_employee WHERE fae_id='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("fae_id"), m_szID);
		rs.GetValue(_T("fae_fullname"), m_szFullName);
		rs.GetValue(_T("fae_department"), m_szDepartmentKey);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CEmployeeSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_fam_employeeTbl.SetValue(_T("fae_id"), m_szID);
	m_fam_employeeTbl.SetValue(_T("fae_fullname"), m_szFullName);
	m_fam_employeeTbl.SetValue(_T("fae_department"), m_szDepartmentKey);

}
void CEmployeeSetupDialog::SetDefaultValues()
{
	m_szID.Empty();
	m_szFullName.Empty();
	m_szDepartmentKey.Empty();

}
int CEmployeeSetupDialog::SetMode(int nMode)
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
 			EnableButtons(TRUE, 3, 4, 5, -1); 
 			SetDefaultValues();
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1);
			m_wndID.EnableWindow(FALSE);
			m_wndFullName.SetFocus();
			m_wndFullName.SetSel(m_wndFullName.GetWindowTextLength(), m_wndFullName.GetWindowTextLength());
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 5, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CEmployeeSetupDialog::OnListDblClick()
{
	
} 
void CEmployeeSetupDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CEmployeeSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEmployeeSetupDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fae_id AS ID, fae_fullname AS FullName,")\
				 _T(" (SELECT sd_name FROM sys_dept WHERE sd_id=fae_department) AS Department FROM fam_employee")\
				 _T(" GROUP BY Department, ID, FullName ORDER BY 3, 1, 2"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("FullName")), 
			rs.GetValue(_T("Department")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CEmployeeSetupDialog::OnIDChange(){
	
} */
/*void CEmployeeSetupDialog::OnIDSetfocus(){
	
} */
/*void CEmployeeSetupDialog::OnIDKillfocus(){
	
} */
int CEmployeeSetupDialog::OnIDCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT Count(*) FROM fam_employee WHERE fae_id='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CEmployeeSetupDialog::OnFullNameChange(){
	
} */
/*void CEmployeeSetupDialog::OnFullNameSetfocus(){
	
} */
/*void CEmployeeSetupDialog::OnFullNameKillfocus(){
	
} */
int CEmployeeSetupDialog::OnFullNameCheckValue()
{
	return 0;
} 
void CEmployeeSetupDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEmployeeSetupDialog::OnDepartmentSelendok(){
	 
}
/*void CEmployeeSetupDialog::OnDepartmentSetfocus(){
	
}*/
/*void CEmployeeSetupDialog::OnDepartmentKillfocus(){
	
}*/
long CEmployeeSetupDialog::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEmployeeSetupDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEmployeeSetupDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddEmployeeSetupDialog();
} 
void CEmployeeSetupDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditEmployeeSetupDialog();
} 
void CEmployeeSetupDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT Count(*) FROM fam_asset WHERE fa_employee='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		ShowMessageBox(_T("There is at least one fixed asset belongs to this employee. You can not delete"), MB_OK | MB_ICONERROR);
		return;
	}
	OnDeleteEmployeeSetupDialog();
} 
void CEmployeeSetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveEmployeeSetupDialog();
} 
void CEmployeeSetupDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelEmployeeSetupDialog();
} 
void CEmployeeSetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CEmployeeSetupDialog::OnAddEmployeeSetupDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CEmployeeSetupDialog::OnEditEmployeeSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CEmployeeSetupDialog::OnDeleteEmployeeSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM fam_employee WHERE fae_id='%s'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
 		OnListLoadData();
		if (m_wndList.GetItemCount() > 0)
			SetItemSel(&m_wndList, m_szID, m_nIndex);
		else
		{
			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		}
 	}
	return 0;
}
int CEmployeeSetupDialog::OnSaveEmployeeSetupDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	bool bAdd = false;
 	if(GetMode() == VM_ADD)
	{ 
		bAdd = true;
 		szSQL = m_fam_employeeTbl.GetInsertSQL();
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE fae_id='%s' "), m_szID); 
 		szSQL = m_fam_employeeTbl.GetUpdateSQL(_T("fae_id")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnListLoadData();
		SetItemSel(&m_wndList, m_szID, m_nIndex);
 		SetMode(VM_VIEW); 
		if (bAdd)
			m_wndAdd.SetFocus();
 	} 
 	/*else 
 	{ 
 	} */
 	return ret;
}
int CEmployeeSetupDialog::OnCancelEmployeeSetupDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
		if (m_wndList.GetCurSel() >= 0)
		{
			m_szID = m_wndList.GetItemText(m_wndList.GetCurSel(), 0);
			GetDataToScreen();
		}
		else
 			SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CEmployeeSetupDialog::OnEmployeeSetupDialogListLoadData(){
	return 0;
}
void CEmployeeSetupDialog::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
{
	if (GetMode() == VM_ADD)
	{
		for (int i = pList->GetItemCount() - 1; i >= 0; i--)
		{
			if (pList->GetItemText(i, 0).Trim() == szID.Trim())
			{
				pList->SetCurSel(i);
				//pList->SetItemState(i, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(i, 1);
				m_nIndex = i;
				//pList->SetFocus();
				break;
			}
		}
	}
	else if (GetMode() == VM_EDIT)
	{
		pList->SetCurSel(nIndex);
		//pList->SetItemState(nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
		//pList->EnsureVisible(nIndex, 1);
		//pList->SetFocus();
	}
	else
	{	
		if (pList->GetItemCount() > 0)
		{
			if (nIndex == 0)
			{
				pList->SetCurSel(0);
				//pList->SetItemState(0, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(0, 1);
				//pList->SetFocus();
				m_nIndex = 0;
			}
			else
			{
				m_nIndex -= 1;
				//pList->SetItemState(m_nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(m_nIndex, 1);
				//pList->SetFocus();
				pList->SetCurSel(m_nIndex);
			}
		}
	}
}

