#include "ManufactureSetupDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CManufactureSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CManufactureSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CManufactureSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CManufactureSetupDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnManufacturerIDChangeFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnManufacturerIDChange();
} */
/*static void _OnManufacturerIDSetfocusFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnManufacturerIDSetfocus();} */ 
/*static void _OnManufacturerIDKillfocusFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnManufacturerIDKillfocus();
} */
static int _OnManufacturerIDCheckValueFnc(CWnd *pWnd){
	return ((CManufactureSetupDialog *)pWnd)->OnManufacturerIDCheckValue();
} 
/*static void _OnManufacturerNameChangeFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnManufacturerNameChange();
} */
/*static void _OnManufacturerNameSetfocusFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnManufacturerNameSetfocus();} */ 
/*static void _OnManufacturerNameKillfocusFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnManufacturerNameKillfocus();
} */
static int _OnManufacturerNameCheckValueFnc(CWnd *pWnd){
	return ((CManufactureSetupDialog *)pWnd)->OnManufacturerNameCheckValue();
} 
static void _OnMfgCountrySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CManufactureSetupDialog* )pWnd)->OnMfgCountrySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMfgCountrySelendokFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnMfgCountrySelendok();
}
/*static void _OnMfgCountrySetfocusFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnMfgCountryKillfocus();
}*/
/*static void _OnMfgCountryKillfocusFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnMfgCountryKillfocus();
}*/
static long _OnMfgCountryLoadDataFnc(CWnd *pWnd){
	return ((CManufactureSetupDialog *)pWnd)->OnMfgCountryLoadData();
}
/*static void _OnMfgCountryAddNewFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnMfgCountryAddNew();
}*/
static void _OnActiveSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CManufactureSetupDialog* )pWnd)->OnActiveSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnActiveSelendokFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnActiveSelendok();
}
/*static void _OnActiveSetfocusFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnActiveKillfocus();
}*/
/*static void _OnActiveKillfocusFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnActiveKillfocus();
}*/
static long _OnActiveLoadDataFnc(CWnd *pWnd){
	return ((CManufactureSetupDialog *)pWnd)->OnActiveLoadData();
}
/*static void _OnActiveAddNewFnc(CWnd *pWnd){
	((CManufactureSetupDialog *)pWnd)->OnActiveAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CManufactureSetupDialog *pVw = (CManufactureSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CManufactureSetupDialog *pVw = (CManufactureSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CManufactureSetupDialog *pVw = (CManufactureSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CManufactureSetupDialog *pVw = (CManufactureSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CManufactureSetupDialog *pVw = (CManufactureSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CManufactureSetupDialog *pVw = (CManufactureSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddManufactureSetupDialogFnc(CWnd *pWnd){
	 return ((CManufactureSetupDialog*)pWnd)->OnAddManufactureSetupDialog();
} 
static int _OnEditManufactureSetupDialogFnc(CWnd *pWnd){
	 return ((CManufactureSetupDialog*)pWnd)->OnEditManufactureSetupDialog();
} 
static int _OnDeleteManufactureSetupDialogFnc(CWnd *pWnd){
	 return ((CManufactureSetupDialog*)pWnd)->OnDeleteManufactureSetupDialog();
} 
static int _OnSaveManufactureSetupDialogFnc(CWnd *pWnd){
	 return ((CManufactureSetupDialog*)pWnd)->OnSaveManufactureSetupDialog();
} 
static int _OnCancelManufactureSetupDialogFnc(CWnd *pWnd){
	 return ((CManufactureSetupDialog*)pWnd)->OnCancelManufactureSetupDialog();
} 
CManufactureSetupDialog::CManufactureSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 786;
	m_nDlgHeight = 586;
	SetDefaultValues();
}
CManufactureSetupDialog::~CManufactureSetupDialog()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
//	pMF->m_wndAsset.m_wndManufacture.SetFocus();
}
void CManufactureSetupDialog::OnCreateComponents()
{
	m_wndList.Create(this,5, 5, 595, 265); 
	m_wndManufacturerIDLabel.Create(this, _T("Manufacturer ID"), 5, 270, 120, 295);
	m_wndManufacturerID.Create(this,125, 270, 225, 295); 
	m_wndManufacturerNameLabel.Create(this, _T("Manufacturer Name"), 5, 300, 120, 325);
	m_wndManufacturerName.Create(this,125, 300, 330, 325); 
	m_wndCountryLabel.Create(this, _T("Mfg Country"), 335, 270, 430, 295);
	m_wndMfgCountry.Create(this,435, 270, 595, 295); 
	m_wndActiveLabel.Create(this, _T("Active"), 335, 300, 430, 325);
	m_wndActive.Create(this,435, 300, 515, 325); 
	m_wndAdd.Create(this, _T("&Add"), 120, 330, 195, 355);
	m_wndEdit.Create(this, _T("&Edit"), 200, 330, 275, 355);
	m_wndDelete.Create(this, _T("&Delete"), 280, 330, 355, 355);
	m_wndSave.Create(this, _T("&Save"), 360, 330, 435, 355);
	m_wndCancel.Create(this, _T("&Cancel"), 440, 330, 515, 355);
	m_wndClose.Create(this, _T("&Close"), 520, 330, 595, 355);

}
void CManufactureSetupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndManufacturerID.ModifyStyle(0, ES_UPPERCASE);
	m_wndManufacturerID.SetLimitText(15);
	m_wndManufacturerID.SetCheckValue(true);
	m_wndManufacturerName.SetLimitText(65);
	m_wndManufacturerName.SetCheckValue(true);
	m_wndMfgCountry.SetCheckValue(true);
	m_wndMfgCountry.LimitText(3);
	m_wndActive.SetCheckValue(true);
	m_wndActive.LimitText(1);


	m_wndList.InsertColumn(0, _T("Manufacturer ID"), CFMT_TEXT, 105);
	m_wndList.InsertColumn(1, _T("Manufacturer Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Mfg Country"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(3, _T("Active"), CFMT_TEXT, 80);


	m_wndMfgCountry.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMfgCountry.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndActive.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndActive.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_fam_manufactureTbl.SetTableName(_T("fam_manufacture"));
	m_fam_manufactureTbl.AddField(_T("famm_createdby"), dfText, 15); 
	m_fam_manufactureTbl.AddField(_T("famm_createddate"), dfDateTime); 
	m_fam_manufactureTbl.AddField(_T("famm_updatedby"), dfText, 15); 
	m_fam_manufactureTbl.AddField(_T("famm_updateddate"), dfDateTime); 
	m_fam_manufactureTbl.AddField(_T("famm_id"), dfText, 15); 
	m_fam_manufactureTbl.AddField(_T("famm_name"), dfText, 65); 
	m_fam_manufactureTbl.AddField(_T("famm_countryid"), dfText, 3); 
	m_fam_manufactureTbl.AddField(_T("famm_active"), dfText, 1); 
	m_fam_manufactureTbl.AddField(_T("famm_org_id"), dfText, 3);
	SetWindowTitle(_T("Manufacturer Information"));
}
void CManufactureSetupDialog::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Manufacturer"));
	m_wndList.AddEvent(1, _T("&Add"), _OnAddManufactureSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("&Edit"), _OnEditManufactureSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("&Delete"), _OnDeleteManufactureSetupDialogFnc, 0, 0, 0);
	//m_wndManufacturerID.SetEvent(WE_CHANGE, _OnManufacturerIDChangeFnc);
	//m_wndManufacturerID.SetEvent(WE_SETFOCUS, _OnManufacturerIDSetfocusFnc);
	//m_wndManufacturerID.SetEvent(WE_KILLFOCUS, _OnManufacturerIDKillfocusFnc);
	m_wndManufacturerID.SetEvent(WE_CHECKVALUE, _OnManufacturerIDCheckValueFnc);
	//m_wndManufacturerName.SetEvent(WE_CHANGE, _OnManufacturerNameChangeFnc);
	//m_wndManufacturerName.SetEvent(WE_SETFOCUS, _OnManufacturerNameSetfocusFnc);
	//m_wndManufacturerName.SetEvent(WE_KILLFOCUS, _OnManufacturerNameKillfocusFnc);
	m_wndManufacturerName.SetEvent(WE_CHECKVALUE, _OnManufacturerNameCheckValueFnc);
	m_wndMfgCountry.SetEvent(WE_SELENDOK, _OnMfgCountrySelendokFnc);
	//m_wndMfgCountry.SetEvent(WE_SETFOCUS, _OnMfgCountrySetfocusFnc);
	//m_wndMfgCountry.SetEvent(WE_KILLFOCUS, _OnMfgCountryKillfocusFnc);
	m_wndMfgCountry.SetEvent(WE_SELCHANGE, _OnMfgCountrySelectChangeFnc);
	m_wndMfgCountry.SetEvent(WE_LOADDATA, _OnMfgCountryLoadDataFnc);
	//m_wndMfgCountry.SetEvent(WE_ADDNEW, _OnMfgCountryAddNewFnc);
	m_wndActive.SetEvent(WE_SELENDOK, _OnActiveSelendokFnc);
	//m_wndActive.SetEvent(WE_SETFOCUS, _OnActiveSetfocusFnc);
	//m_wndActive.SetEvent(WE_KILLFOCUS, _OnActiveKillfocusFnc);
	m_wndActive.SetEvent(WE_SELCHANGE, _OnActiveSelectChangeFnc);
	m_wndActive.SetEvent(WE_LOADDATA, _OnActiveLoadDataFnc);
	//m_wndActive.SetEvent(WE_ADDNEW, _OnActiveAddNewFnc);
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
		m_szManufacturerID = m_wndList.GetItemText(0, 0);
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
void CManufactureSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndManufacturerID.GetDlgCtrlID(), m_szManufacturerID);
	DDX_Text(pDX, m_wndManufacturerName.GetDlgCtrlID(), m_szManufacturerName);
	DDX_TextEx(pDX, m_wndMfgCountry.GetDlgCtrlID(), m_szMfgCountryKey);
	DDX_TextEx(pDX, m_wndActive.GetDlgCtrlID(), m_szActiveKey);

}
void CManufactureSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_manufacture WHERE famm_org_id = '%s' AND famm_id='%s'"),pMF->GetModuleID(), m_szManufacturerID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		//rs.GetValue(_T("famm_id"), m_szManufacturerID);
		rs.GetValue(_T("famm_name"), m_szManufacturerName);
		rs.GetValue(_T("famm_countryid"), m_szMfgCountryKey);
		rs.GetValue(_T("famm_active"), m_szActiveKey);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CManufactureSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_fam_manufactureTbl.SetValue(_T("famm_createdby"), pMF->GetCurrentUser());
	m_fam_manufactureTbl.SetValue(_T("famm_createddate"), pMF->GetSysDateTime());
	m_fam_manufactureTbl.SetValue(_T("famm_updatedby"), pMF->GetCurrentUser());
	m_fam_manufactureTbl.SetValue(_T("famm_updateddate"), pMF->GetSysDateTime());
	m_fam_manufactureTbl.SetValue(_T("famm_id"), m_szManufacturerID);
	m_fam_manufactureTbl.SetValue(_T("famm_name"), m_szManufacturerName);
	m_fam_manufactureTbl.SetValue(_T("famm_countryid"), m_szMfgCountryKey);
	m_fam_manufactureTbl.SetValue(_T("famm_active"), m_szActiveKey);
	m_fam_manufactureTbl.SetValue(_T("famm_org_id"), pMF->GetModuleID());

}
void CManufactureSetupDialog::SetDefaultValues(){

	m_szManufacturerID.Empty();
	m_szManufacturerName.Empty();
	m_szMfgCountryKey.Empty();
	m_szActiveKey.Empty();

}
int CManufactureSetupDialog::SetMode(int nMode)
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
			m_wndManufacturerID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1);
			m_wndManufacturerID.EnableWindow(FALSE);
			m_wndManufacturerName.SetFocus();
			m_wndManufacturerName.SetSel(m_wndManufacturerName.GetWindowTextLength(), m_wndManufacturerName.GetWindowTextLength());
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
void CManufactureSetupDialog::OnListDblClick(){
	
} 
void CManufactureSetupDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szManufacturerID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CManufactureSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CManufactureSetupDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT famm_id AS ID, famm_name AS Name, (SELECT sc_name FROM sys_country WHERE sc_id=famm_countryid) AS Country, ")\
		_T("famm_active AS Active FROM fam_manufacture WHERE famm_org_id ='%s' ORDER BY famm_id"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Country")), 
			rs.GetValue(_T("Active")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CManufactureSetupDialog::OnManufacturerIDChange(){
	
} */
/*void CManufactureSetupDialog::OnManufacturerIDSetfocus(){
	
} */
/*void CManufactureSetupDialog::OnManufacturerIDKillfocus(){
	
} */
int CManufactureSetupDialog::OnManufacturerIDCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT Count(*) FROM fam_manufacture WHERE famm_org_id = '%s' AND famm_id='%s' "), pMF->GetModuleID(),m_szManufacturerID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndManufacturerID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CManufactureSetupDialog::OnManufacturerNameChange(){
	
} */
/*void CManufactureSetupDialog::OnManufacturerNameSetfocus(){
	
} */
/*void CManufactureSetupDialog::OnManufacturerNameKillfocus(){
	
} */
int CManufactureSetupDialog::OnManufacturerNameCheckValue()
{
	CString szTemp;
	PreInitCap(m_szManufacturerName, szTemp);
	m_szManufacturerName = szTemp;
	UpdateData(FALSE);
	return 0;
} 
void CManufactureSetupDialog::OnMfgCountrySelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CManufactureSetupDialog::OnMfgCountrySelendok(){
	 
}
/*void CManufactureSetupDialog::OnMfgCountrySetfocus(){
	
}*/
/*void CManufactureSetupDialog::OnMfgCountryKillfocus(){
	
}*/
long CManufactureSetupDialog::OnMfgCountryLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndMfgCountry.IsSearchKey() && !m_szMfgCountryKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE sc_id='%s' "), m_szMfgCountryKey);
	};
	m_wndMfgCountry.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sc_id AS id, sc_name AS name FROM sys_country %s ORDER BY sc_id"), szWhere); 
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMfgCountry.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CManufactureSetupDialog::OnMfgCountryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CManufactureSetupDialog::OnActiveSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CManufactureSetupDialog::OnActiveSelendok(){
	 
}
/*void CManufactureSetupDialog::OnActiveSetfocus(){
	
}*/
/*void CManufactureSetupDialog::OnActiveKillfocus(){
	
}*/
long CManufactureSetupDialog::OnActiveLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndActive.IsSearchKey() && !m_szActiveKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE faa_id='%s' "), m_szActiveKey);
	};
	m_wndActive.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_active %s ORDER BY faa_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndActive.AddItems(
			rs.GetValue(_T("faa_id")), 
			rs.GetValue(_T("faa_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CManufactureSetupDialog::OnActiveAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CManufactureSetupDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddManufactureSetupDialog();
} 
void CManufactureSetupDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditManufactureSetupDialog();
} 
void CManufactureSetupDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT Count(*) FROM fam_asset WHERE fa_mfgid='%s' AND fa_org_id = '%s'"), m_szManufacturerID, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		ShowMessageBox(_T("There is at least one fixed asset belongs to this manufacturer. You can not delete it"), MB_OK | MB_ICONERROR);
		return;
	}
	OnDeleteManufactureSetupDialog();
} 
void CManufactureSetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveManufactureSetupDialog();
} 
void CManufactureSetupDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelManufactureSetupDialog();
} 
void CManufactureSetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CManufactureSetupDialog::OnAddManufactureSetupDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CManufactureSetupDialog::OnEditManufactureSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CManufactureSetupDialog::OnDeleteManufactureSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szId;
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
	//szId = m_wndList.GetItemText(m_nIndex, 0);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM fam_manufacture WHERE famm_id='%s' and famm_org_id = '%s'"), m_szManufacturerID, pMF->GetModuleID()); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
		OnListLoadData();
		if (m_wndList.GetItemCount() > 0)
		{
			SetItemSel(&m_wndList, m_szManufacturerID, m_nIndex);
			//m_szManufacturerID = m_wndList.GetItemText(m_nIndex, 0);
		//_msg(_T("%d"), m_nIndex);
			//GetDataToScreen();
		/*if (m_wndList.GetItemCount() > 0)
 			SetMode(VM_VIEW);
		else
			SetMode(VM_NONE);*/
		}
		else
		{
			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		}
 		//OnCancelManufactureSetupDialog(); 
 	}
	return 0;
}
int CManufactureSetupDialog::OnSaveManufactureSetupDialog()
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
 		szSQL = m_fam_manufactureTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE famm_id='%s' "), m_szManufacturerID); 
 		szSQL = m_fam_manufactureTbl.GetUpdateSQL(_T("famm_createdby, famm_createddate, famm_id")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnManufactureSetupDialogListLoadData(); 
 		OnListLoadData();
		SetItemSel(&m_wndList, m_szManufacturerID, m_nIndex);
		/*if (GetMode() == VM_EDIT)
		{
			m_szManufacturerID = m_wndList.GetItemText(m_nIndex, 0);
			GetDataToScreen();
		}*/
 		SetMode(VM_VIEW); 
		if (bAdd)
			m_wndAdd.SetFocus();
 	} 
 	/*else 
 	{ 
 	} */
 	return ret; 
 	//return 0; 
}
int CManufactureSetupDialog::OnCancelManufactureSetupDialog()
{
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
		if (m_wndList.GetCurSel() >= 0)
		{
			m_szManufacturerID = m_wndList.GetItemText(m_wndList.GetCurSel(), 0);
			GetDataToScreen();
		}
		else
 			SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CManufactureSetupDialog::OnManufactureSetupDialogListLoadData(){
	return 0;
}
void CManufactureSetupDialog::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
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
