#include "RegimenOrderList.h"
#include "MainFrm.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CRegimenOrderList *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CRegimenOrderList *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CRegimenOrderList *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrderList *)pWnd)->OnNameCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRegimenOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRegimenOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRegimenOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRegimenOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRegimenOrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRegimenOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrderList *)pWnd)->OnToDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CRegimenOrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CRegimenOrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CRegimenOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CRegimenOrderList*)pWnd)->OnListDeleteItem();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CRegimenOrderList *pVw = (CRegimenOrderList *)pWnd;
	pVw->OnSearchSelect();
} 
static int _OnAddRegimenOrderListFnc(CWnd *pWnd){
	 return ((CRegimenOrderList*)pWnd)->OnAddRegimenOrderList();
} 
static int _OnEditRegimenOrderListFnc(CWnd *pWnd){
	 return ((CRegimenOrderList*)pWnd)->OnEditRegimenOrderList();
} 
static int _OnDeleteRegimenOrderListFnc(CWnd *pWnd){
	 return ((CRegimenOrderList*)pWnd)->OnDeleteRegimenOrderList();
} 
static int _OnSaveRegimenOrderListFnc(CWnd *pWnd){
	 return ((CRegimenOrderList*)pWnd)->OnSaveRegimenOrderList();
} 
static int _OnCancelRegimenOrderListFnc(CWnd *pWnd){
	 return ((CRegimenOrderList*)pWnd)->OnCancelRegimenOrderList();
} 
CRegimenOrderList::CRegimenOrderList(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 673;
	SetDefaultValues();
}
CRegimenOrderList::~CRegimenOrderList(){
}
void CRegimenOrderList::OnCreateComponents(){
	m_wndClassInforGroupBox.Create(this, _T("Information"), 5, 5, 800, 60);
	m_wndNameLabel.Create(this, _T("Name"), 450, 30, 560, 55);
	m_wndName.Create(this,565, 30, 705, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 120, 55);
	m_wndFromDate.Create(this,125, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 340, 55);
	m_wndToDate.Create(this,345, 30, 445, 55); 
	m_wndList.Create(this,5, 65, 795, 575); 
	m_wndSearch.Create(this, _T("&Search"), 710, 30, 790, 55);
}
void CRegimenOrderList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(50);
	m_wndName.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(1, _T("Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Content"), CFMT_TEXT, 200);	
	m_wndList.InsertColumn(4, _T("Category"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Version"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Dept"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Status"), CFMT_TEXT, 100);	

}
void CRegimenOrderList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);

	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddRegimenOrderListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditRegimenOrderListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteRegimenOrderListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveRegimenOrderListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelRegimenOrderListFnc, 0, 'T', VK_CONTROL);*/

	m_szFromDate = m_szToDate = pMF->GetSysDate();

	SetMode(VM_EDIT);

}
void CRegimenOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CRegimenOrderList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CRegimenOrderList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ec_name"), m_szName);
	rs.GetValue(_T("ec_start_time"), m_szFromDate);
	rs.GetValue(_T("ec_end_time"), m_szToDate);

}
void CRegimenOrderList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_classTbl.SetValue(_T("ec_createdby"), pMF->GetCurrentUser());
	m_edu_classTbl.SetValue(_T("ec_createddate"), pMF->GetSysDateTime());
	m_edu_classTbl.SetValue(_T("ec_updatedby"), pMF->GetCurrentUser());
	m_edu_classTbl.SetValue(_T("ec_updateddate"), pMF->GetSysDateTime());
	m_edu_classTbl.SetValue(_T("ec_name"), m_szName);
	m_edu_classTbl.SetValue(_T("ec_start_time"), m_szFromDate);
	m_edu_classTbl.SetValue(_T("ec_end_time"), m_szToDate);
}
void CRegimenOrderList::SetDefaultValues(){

	m_szName.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CRegimenOrderList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, 4, -1);
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
/*void CRegimenOrderList::OnNameChange(){
	
} */
/*void CRegimenOrderList::OnNameSetfocus(){
	
} */
/*void CRegimenOrderList::OnNameKillfocus(){
	
} */
int CRegimenOrderList::OnNameCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CRegimenOrderList::OnFromDateChange(){
	
} */
/*void CRegimenOrderList::OnFromDateSetfocus(){
	
} */
/*void CRegimenOrderList::OnFromDateKillfocus(){
	
} */
int CRegimenOrderList::OnFromDateCheckValue(){
	return 0;
} 
/*void CRegimenOrderList::OnToDateChange(){
	
} */
/*void CRegimenOrderList::OnToDateSetfocus(){
	
} */
/*void CRegimenOrderList::OnToDateKillfocus(){
	
} */
int CRegimenOrderList::OnToDateCheckValue(){
	return 0;
} 
void CRegimenOrderList::OnListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();

	long nID = ToLong(m_wndList.GetItemText(nSel, 0));

	pMF->m_wndRegimen.m_nID = nID;
	pMF->m_wndRegimen.GetDataToScreen();
	pMF->m_wndRegimenTab.SetActiveTab(1);
} 
void CRegimenOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CRegimenOrderList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CRegimenOrderList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	
	UpdateData(true);

	if(!m_szName.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(trim(ten_phacdo)) like (lower('%s%s%s'))"),_T("%"), m_szName, _T("%"));
	}

	szSQL.Format(_T("    SELECT DISTINCT hms_phacdo.*") \
		_T("      FROM hms_phacdo") \
		_T(" LEFT JOIN hms_phacdo_apply ON ( hms_phacdo_id = phacdo_id )") \
		_T("     WHERE docno > 0 AND ( Trunc (from_date) BETWEEN To_date ('%s', 'yyyy/mm/dd') AND") \
		_T("                                                                     To_date ('%s',") \
		_T("                                                                     'yyyy/mm/dd') AND") \
		_T("                                     Trunc") \
		_T("                                         (to_date) BETWEEN To_date ('%s', 'yyyy/mm/dd') AND") \
		_T("                                                           To_date ('%s', 'yyyy/mm/dd') ) ")
		, m_szFromDate, m_szToDate,  m_szFromDate, m_szToDate, szWhere);
	//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("phacdo_id")), 
			rs.GetValue(_T("apply_date")),
			rs.GetValue(_T("ten_phacdo")),
			rs.GetValue(_T("note")),
			pMF->GetSelectionString(_T("phacdo_category"), rs.GetValue(_T("category_id"))),			
			rs.GetValue(_T("version")),			
			pMF->GetDepartmentName(rs.GetValue(_T("ec_deptid_receive"))),
			pMF->GetSelectionString(_T("phacdo_tranthai"),rs.GetValue(_T("isactive"))), NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return nCount;
}
void CRegimenOrderList::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	OnListLoadData();
} 
int CRegimenOrderList::OnAddRegimenOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRegimenOrderList::OnEditRegimenOrderList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRegimenOrderList::OnDeleteRegimenOrderList(){
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
 		OnCancelRegimenOrderList();
 	}
	return 0;
}
int CRegimenOrderList::OnSaveRegimenOrderList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_edu_classTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_edu_classTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnRegimenOrderListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRegimenOrderList::OnCancelRegimenOrderList(){
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
int CRegimenOrderList::OnRegimenOrderListListLoadData(){
	return 0;
}
