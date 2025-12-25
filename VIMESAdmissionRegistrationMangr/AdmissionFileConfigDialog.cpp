#include "AdmissionFileConfigDialog.h"
#include "MainFrm.h"
#include "HMSDeptChoiceDialog.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionFileConfigDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdmissionFileConfigDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdmissionFileConfigDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CAdmissionFileConfigDialog *pVw = (CAdmissionFileConfigDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdmissionFileConfigDialog *pVw = (CAdmissionFileConfigDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionFileConfigDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CAdmissionFileConfigDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CAdmissionFileConfigDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CAdmissionFileConfigDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionFileConfigDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CAdmissionFileConfigDialog *)pWnd)->OnDeptAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdmissionFileConfigDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdmissionFileConfigDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdmissionFileConfigDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionFileConfigDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnDuplicateToSelectFnc(CWnd *pWnd){
	return ((CAdmissionFileConfigDialog *)pWnd)->OnDuplicateToSelect();
} 
static int _OnAddAdmissionFileConfigDialogFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnAddAdmissionFileConfigDialog();
} 
static int _OnEditAdmissionFileConfigDialogFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnEditAdmissionFileConfigDialog();
} 
static int _OnDeleteAdmissionFileConfigDialogFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnDeleteAdmissionFileConfigDialog();
} 
static int _OnSaveAdmissionFileConfigDialogFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnSaveAdmissionFileConfigDialog();
} 
static int _OnCancelAdmissionFileConfigDialogFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnCancelAdmissionFileConfigDialog();
} 
static int _OnListCopyItemFnc(CWnd *pWnd){
	 return ((CAdmissionFileConfigDialog*)pWnd)->OnListCopyItem();
}
CAdmissionFileConfigDialog::CAdmissionFileConfigDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdmissionFileConfigDialog::~CAdmissionFileConfigDialog(){
}
void CAdmissionFileConfigDialog::OnCreateComponents()
{
	m_wndList.Create(this,6, 5, 996, 450); 
	m_wndApply.Create(this, _T("&Apply"), 820, 455, 905, 480);
	m_wndClose.Create(this, _T("&Close"), 910, 455, 995, 480);
	m_wndDeptLabel.Create(this, _T("Dept"), 6, 456, 86, 481);
	m_wndDept.Create(this,92, 456, 399, 481); 
	m_wndSearchLabel.Create(this, _T("Search"), 505, 455, 580, 480);
	m_wndSearch.Create(this,585, 455, 815, 480); 
	m_wndDuplicateTo.Create(this, _T("Duplicate To.."), 405, 455, 500, 480);
}
void CAdmissionFileConfigDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDuplicateTo.ModifyStyle(WS_TABSTOP, 0);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Department"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Report Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(3, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(4, _T("Form ID"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T(""), CFMT_TEXT, 0);//Report NameID
	m_wndList.SetEditLabel(2, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(3, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(4, GUI_TEXTCTRL);
	//m_wndList.SetCheckBox(TRUE);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
}

void CAdmissionFileConfigDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Copy Item"), _OnListCopyItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Delete"), _OnListDeleteItemFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndDuplicateTo.SetEvent(WE_CLICK, _OnDuplicateToSelectFnc);
	OnListLoadData();
	m_wndDuplicateTo.EnableWindow(FALSE);

}
void CAdmissionFileConfigDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
}
void CAdmissionFileConfigDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CAdmissionFileConfigDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CAdmissionFileConfigDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}

void CAdmissionFileConfigDialog::SetDefaultValues(){
	m_szDeptKey.Empty();

}

int CAdmissionFileConfigDialog::SetMode(int nMode){
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

void CAdmissionFileConfigDialog::OnListDblClick(){
	
}
 
void CAdmissionFileConfigDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
 
int CAdmissionFileConfigDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;

	szSQL.Format(_T("SELECT count(*) FROM hms_admissionfile_config WHERE hafc_deptid='%s' "), m_wndList.GetItemText(nSel, 0));
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 1)
		return -1;
	szSQL.Format(_T("DELETE FROM hms_admissionfile_config WHERE hafc_deptid='%s' and hafc_reportname='%s' "),
		m_wndList.GetItemText(nSel, 0), m_wndList.GetItemText(nSel, 5));
	pMF->ExecSQL(szSQL);
	m_wndList.DeleteItem(nSel);
	 return 0;
}
 
long CAdmissionFileConfigDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if (!m_szDeptKey.IsEmpty()) szWhere.AppendFormat(_T(" and sd_id = '%s'"), m_szDeptKey);
	if (!m_szSearch.IsEmpty()) szWhere.AppendFormat(_T(" and lower(hafc_desc) like chr(37)||lower('%s')||chr(37)"), m_szSearch);
	szSQL.Format(_T(" SELECT  sd_id as id, sd_name as name, hafc_reportname as reportname, ") \
				_T("         hafc_inactive as inactive, hafc_desc as description, hafc_form as form") \
				_T(" FROM sys_dept ") \
				_T(" LEFT JOIN hms_admissionfile_config ON(cast(sd_id as NVARCHAR2(14)) = hafc_deptid) ") \
				_T(" WHERE sd_type = 'DT' %s ORDER BY sd_id"), szWhere);
	_fmsg(_T("\r\nszSQL: %s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	CString szInactive;
	while(!rs.IsEOF()){
		rs.GetValue(_T("inactive"), szInactive);
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("ReportName")), 
			rs.GetValue(_T("description")),
			rs.GetValue(_T("form")),
			rs.GetValue(_T("ReportName")), 
			NULL);
		if(szInactive == _T("Y"))
			m_wndList.SetCheck(nItem, FALSE);
		else
			m_wndList.SetCheck(nItem, TRUE);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CAdmissionFileConfigDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szInactive, szDeptID, szOldReportName;
	pMF->BeginTransaction();
	//szSQL.Format(_T("DELETE FROM hms_admissionfile_config"));
	//pMF->ExecSQL(szSQL);
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		if(!m_wndList.GetCheck(i))
			szInactive = _T("Y");
		else
			szInactive = _T("");
		szDeptID = m_wndList.GetItemText(i, 0);
		szOldReportName = m_wndList.GetItemText(i, 5);

	//	szSQL.Format(_T("INSERT INTO hms_admissionfile_config VALUES('%s', '%s', '', '%s') "),
	//		m_wndList.GetItemText(i, 0), m_wndList.GetItemText(i, 2), szInactive);
		szSQL.Format(_T("UPDATE hms_admissionfile_config SET hafc_reportname='%s', hafc_desc='%s', hafc_inactive='%s', hafc_form = '%s' ") \
					 _T("WHERE hafc_deptid='%s' and hafc_reportname='%s' ")
					 , m_wndList.GetItemText(i, 2), m_wndList.GetItemText(i, 3), szInactive, m_wndList.GetItemText(i, 4), szDeptID, szOldReportName);
		pMF->ExecSQL(szSQL);
	}
	pMF->Commit();
	CGuiDialog::OnOK();
}
 
void CAdmissionFileConfigDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
void CAdmissionFileConfigDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionFileConfigDialog::OnDeptSelendok(){
	 UpdateData();
	 OnListLoadData();
}
/*void CAdmissionFileConfigDialog::OnDeptSetfocus(){
	
}*/
/*void CAdmissionFileConfigDialog::OnDeptKillfocus(){
	
}*/
long CAdmissionFileConfigDialog::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter = _T(" and sd_type = 'DT'");
	return pMF->LoadDepartment(&m_wndDept, m_szDeptKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey
};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionFileConfigDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdmissionFileConfigDialog::OnSearchChange(){
	
} */
/*void CAdmissionFileConfigDialog::OnSearchSetfocus(){
	
} */
/*void CAdmissionFileConfigDialog::OnSearchKillfocus(){
	
} */
int CAdmissionFileConfigDialog::OnSearchCheckValue(){
	UpdateData();
	//m_wndList.Search(3, m_szSearch, SEARCH_LIKE);
	OnListLoadData();
	return 0;
} 
int CAdmissionFileConfigDialog::OnAddAdmissionFileConfigDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdmissionFileConfigDialog::OnEditAdmissionFileConfigDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdmissionFileConfigDialog::OnDeleteAdmissionFileConfigDialog(){
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
 		OnCancelAdmissionFileConfigDialog(); 
 	}
	return 0;
}

int CAdmissionFileConfigDialog::OnSaveAdmissionFileConfigDialog(){
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
 		//OnAdmissionFileConfigDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CAdmissionFileConfigDialog::OnCancelAdmissionFileConfigDialog(){
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
 
int CAdmissionFileConfigDialog::OnAdmissionFileConfigDialogListLoadData(){
	return 0;
}

int CAdmissionFileConfigDialog::OnListCopyItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString szSQL, szReportName;
	szReportName.Format(_T("%s_copy"), m_wndList.GetItemText(nSel, 2));
	szSQL.Format(_T("INSERT INTO hms_admissionfile_config(hafc_deptid, hafc_reportname, hafc_desc, hafc_inactive, hafc_form)") \
				_T(" VALUES('%s', '%s', '%s', '%s', '%s') "),
				m_wndList.GetItemText(nSel, 0), szReportName, m_wndList.GetItemText(nSel, 3), _T("N"), m_wndList.GetItemText(nSel, 4));
	pMF->ExecSQL(szSQL);
	OnListLoadData();
	return 0;
}

void CAdmissionFileConfigDialog::OnDuplicateToSelect()
{
	CHMSDeptChoiceDialog dlg(this);
	dlg.DoModal();
}