#include "HMSSurgeryTypeSetupDialog.h"
#include "MainFrm.h"

static void _OnSearchByNameChangeFnc(CWnd *pWnd){
	((CHMSSurgeryTypeSetupDialog *)pWnd)->OnSearchByNameChange();
}
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryTypeSetupDialog *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryTypeSetupDialog *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryTypeSetupDialog *)pWnd)->OnSearchByNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryTypeSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSSurgeryTypeSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgeryTypeSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgeryTypeSetupDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSSurgeryTypeSetupDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryTypeSetupDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryTypeSetupDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryTypeSetupDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSSurgeryTypeSetupDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryTypeSetupDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryTypeSetupDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryTypeSetupDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSurgeryTypeSetupDialog *pVw = (CHMSSurgeryTypeSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSSurgeryTypeSetupDialog *pVw = (CHMSSurgeryTypeSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSSurgeryTypeSetupDialog *pVw = (CHMSSurgeryTypeSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSurgeryTypeSetupDialog *pVw = (CHMSSurgeryTypeSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSurgeryTypeSetupDialog *pVw = (CHMSSurgeryTypeSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSurgeryTypeSetupDialog *pVw = (CHMSSurgeryTypeSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSSurgeryTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryTypeSetupDialog*)pWnd)->OnAddHMSSurgeryTypeSetupDialog();
} 
static int _OnEditHMSSurgeryTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryTypeSetupDialog*)pWnd)->OnEditHMSSurgeryTypeSetupDialog();
} 
static int _OnDeleteHMSSurgeryTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryTypeSetupDialog*)pWnd)->OnDeleteHMSSurgeryTypeSetupDialog();
} 
static int _OnSaveHMSSurgeryTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryTypeSetupDialog*)pWnd)->OnSaveHMSSurgeryTypeSetupDialog();
} 
static int _OnCancelHMSSurgeryTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryTypeSetupDialog*)pWnd)->OnCancelHMSSurgeryTypeSetupDialog();
} 
CHMSSurgeryTypeSetupDialog::CHMSSurgeryTypeSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 495;
	m_nDlgHeight = 515;
	SetDefaultValues();
}
CHMSSurgeryTypeSetupDialog::~CHMSSurgeryTypeSetupDialog()
{
}
void CHMSSurgeryTypeSetupDialog::OnCreateComponents()
{
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 485, 475);
	 
	m_wndList.Create(this,10, 60, 480, 410); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 415, 90, 440);
	m_wndID.Create(this,95, 415, 195, 440); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 445, 90, 470);
	m_wndDescription.Create(this,95, 445, 475, 470); 
	m_wndAdd.Create(this, _T("&Add"), 10, 480, 85, 505);
	m_wndEdit.Create(this, _T("&Edit"), 90, 480, 165, 505);
	m_wndDelete.Create(this, _T("&Delete"), 170, 480, 245, 505);
	m_wndSave.Create(this, _T("&Save"), 250, 480, 325, 505);
	m_wndCancel.Create(this, _T("&Cancel"), 330, 480, 405, 505);
	m_wndClose.Create(this, _T("&Close"), 410, 480, 485, 505);

	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 120, 55);
	m_wndSearchByName.Create(this,125, 30, 365, 55);
}
void CHMSSurgeryTypeSetupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearchByName.SetLimitText(81);
	//m_wndSearchByName.SetCheckValue(true);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(81);
	m_wndDescription.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 340);

	m_sys_sel_Tbl.SetTableName(_T("sys_sel"));
	m_sys_sel_Tbl.AddField(_T("ss_id"), dfText, 35);
	m_sys_sel_Tbl.AddField(_T("ss_code"), dfText, 15); 
	m_sys_sel_Tbl.AddField(_T("ss_desc"), dfText, 81);
}
void CHMSSurgeryTypeSetupDialog::OnSetWindowEvents()
{
	m_wndSearchByName.SetEvent(WE_CHANGE, _OnSearchByNameChangeFnc);
	//m_wndSearchByName.SetEvent(WE_SETFOCUS, _OnSearchByNameSetfocusFnc);
	//m_wndSearchByName.SetEvent(WE_KILLFOCUS, _OnSearchByNameKillfocusFnc);
	m_wndSearchByName.SetEvent(WE_CHECKVALUE, _OnSearchByNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("General Information"));
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
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
		m_szID = m_wndList.GetItemText(0, 0);
		m_nIndex = 0;
	}
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.SetFocus();
		m_nIndex = -1;
	}
}
void CHMSSurgeryTypeSetupDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSSurgeryTypeSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_sel WHERE ss_code='%s' AND ss_id='hms_operation_type'"), m_szID);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("ss_desc"), m_szDescription);
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
}
void CHMSSurgeryTypeSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_sys_sel_Tbl.SetValue(_T("ss_id"), _T("hms_operation_type"));
	m_sys_sel_Tbl.SetValue(_T("ss_code"), m_szID);
	m_sys_sel_Tbl.SetValue(_T("ss_desc"), m_szDescription);
}
void CHMSSurgeryTypeSetupDialog::SetDefaultValues()
{

	m_szSearchByName.Empty();
	m_szID.Empty();
	m_szDescription.Empty();

}
int CHMSSurgeryTypeSetupDialog::SetMode(int nMode)
{
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
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndID.EnableWindow(FALSE);
			m_wndDescription.SetSel(m_wndDescription.GetWindowTextLength(), m_wndDescription.GetWindowTextLength());
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
		m_wndSearchByName.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSSurgeryTypeSetupDialog::OnSearchByNameChange()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CHMSSurgeryTypeSetupDialog::OnSearchByNameSetfocus(){
	
} */
/*void CHMSSurgeryTypeSetupDialog::OnSearchByNameKillfocus(){
	
} */
int CHMSSurgeryTypeSetupDialog::OnSearchByNameCheckValue(){
	return 0;
} 
void CHMSSurgeryTypeSetupDialog::OnListDblClick(){
	
} 
void CHMSSurgeryTypeSetupDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CHMSSurgeryTypeSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgeryTypeSetupDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	szWhere.Empty();
	if (!m_szSearchByName.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(ss_desc) LIKE lower('%s%s%s') "),
			           _T("%"), m_szSearchByName, _T("%"));
	}

	szSQL.Format(_T("SELECT ss_code AS ID, ss_desc AS Name ")\
			     _T("FROM sys_sel ")\
				 _T("WHERE ss_id='hms_operation_type' %s ORDER BY cast(ss_code as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;
}
/*void CHMSSurgeryTypeSetupDialog::OnIDChange(){
	
} */
/*void CHMSSurgeryTypeSetupDialog::OnIDSetfocus(){
	
} */
/*void CHMSSurgeryTypeSetupDialog::OnIDKillfocus(){
	
} */
int CHMSSurgeryTypeSetupDialog::OnIDCheckValue()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT Count(*) FROM sys_sel WHERE ss_code='%s' AND ss_id='hms_operation_type'"), m_szID);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0)
	{
		m_wndID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CHMSSurgeryTypeSetupDialog::OnDescriptionChange(){
	
} */
/*void CHMSSurgeryTypeSetupDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSSurgeryTypeSetupDialog::OnDescriptionKillfocus(){
	
} */
int CHMSSurgeryTypeSetupDialog::OnDescriptionCheckValue()
{
	UpdateData(TRUE);
	CString szTemp;
	PreInitCap(m_szDescription, szTemp);
	m_szDescription = szTemp;
	UpdateData(FALSE);
	return 0;
} 
void CHMSSurgeryTypeSetupDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSSurgeryTypeSetupDialog();
} 
void CHMSSurgeryTypeSetupDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSSurgeryTypeSetupDialog();
} 
void CHMSSurgeryTypeSetupDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSSurgeryTypeSetupDialog();
} 
void CHMSSurgeryTypeSetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSSurgeryTypeSetupDialog();
} 
void CHMSSurgeryTypeSetupDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSSurgeryTypeSetupDialog();
} 
void CHMSSurgeryTypeSetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSSurgeryTypeSetupDialog::OnAddHMSSurgeryTypeSetupDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSurgeryTypeSetupDialog::OnEditHMSSurgeryTypeSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSurgeryTypeSetupDialog::OnDeleteHMSSurgeryTypeSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1;
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM sys_sel WHERE ss_code='%s' AND ss_id='hms_operation_type'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL);
 	if (ret >= 0)
	{ 
 		//SetMode(VM_NONE); 
 		//OnCancelHMSSurgeryTypeSetupDialog();
		OnListLoadData();
		if (m_wndList.GetItemCount() > 0)
		{
			SetItemSel(&m_wndList, m_szID, m_nIndex);
		}
		else
		{
			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		} 
 	}
	return 0;
}
int CHMSSurgeryTypeSetupDialog::OnSaveHMSSurgeryTypeSetupDialog()
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
 		szSQL = m_sys_sel_Tbl.GetInsertSQL();
		bAdd = true; 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere;
		szWhere.Format(_T(" WHERE ss_code='%s' AND ss_id='hms_operation_type' "), m_szID); 
 		szSQL = m_sys_sel_Tbl.GetUpdateSQL(_T("ss_id, ss_code")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSSurgeryTypeSetupDialogListLoadData(); 
 		//SetMode(VM_VIEW);
		OnListLoadData();
		SetItemSel(&m_wndList, m_szID, m_nIndex);
		if (bAdd)
			m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	//return 0; 
}
int CHMSSurgeryTypeSetupDialog::OnCancelHMSSurgeryTypeSetupDialog(){
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
int CHMSSurgeryTypeSetupDialog::OnHMSSurgeryTypeSetupDialogListLoadData(){
	return 0;
}
void CHMSSurgeryTypeSetupDialog::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
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