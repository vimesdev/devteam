#include "PCMSSearchByRecordNo.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPCMSSearchByRecordNo *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPCMSSearchByRecordNo *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPCMSSearchByRecordNo* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPCMSSearchByRecordNo *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CPCMSSearchByRecordNo *)pWnd)->OnRecordNoCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CPCMSSearchByRecordNo *pVw = (CPCMSSearchByRecordNo *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPCMSSearchByRecordNo*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPCMSSearchByRecordNo*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPCMSSearchByRecordNo*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPCMSSearchByRecordNo*)pWnd)->OnListDeleteItem();
} 
static int _OnAddPCMSSearchByRecordNoFnc(CWnd *pWnd){
	 return ((CPCMSSearchByRecordNo*)pWnd)->OnAddPCMSSearchByRecordNo();
} 
static int _OnEditPCMSSearchByRecordNoFnc(CWnd *pWnd){
	 return ((CPCMSSearchByRecordNo*)pWnd)->OnEditPCMSSearchByRecordNo();
} 
static int _OnDeletePCMSSearchByRecordNoFnc(CWnd *pWnd){
	 return ((CPCMSSearchByRecordNo*)pWnd)->OnDeletePCMSSearchByRecordNo();
} 
static int _OnSavePCMSSearchByRecordNoFnc(CWnd *pWnd){
	 return ((CPCMSSearchByRecordNo*)pWnd)->OnSavePCMSSearchByRecordNo();
} 
static int _OnCancelPCMSSearchByRecordNoFnc(CWnd *pWnd){
	 return ((CPCMSSearchByRecordNo*)pWnd)->OnCancelPCMSSearchByRecordNo();
} 
CPCMSSearchByRecordNo::CPCMSSearchByRecordNo(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPCMSSearchByRecordNo::~CPCMSSearchByRecordNo(){
}
void CPCMSSearchByRecordNo::OnCreateComponents(){
	m_wndGrpSearch.Create(this, _T("Search Information"), 5, 5, 555, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 15, 30, 125, 55);
	m_wndFromDate.Create(this,130, 30, 265, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 270, 30, 380, 55);
	m_wndToDate.Create(this,385, 30, 520, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 15, 60, 125, 85);
	m_wndDepartment.Create(this,130, 60, 265, 85); 
	m_wndRecordNoLabel.Create(this, _T("RecordNo"), 270, 60, 380, 85);
	m_wndRecordNo.Create(this,385, 60, 520, 85); 
	m_wndSearch.Create(this, _T("@"), 525, 30, 550, 55);
	m_wndList.Create(this,5, 95, 555, 345); 

}
void CPCMSSearchByRecordNo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("DocumentNo"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Order Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(3, _T("Dept"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Record"), CFMT_TEXT, 100);

}
void CPCMSSearchByRecordNo::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_EDIT);

}
void CPCMSSearchByRecordNo::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);

}
void CPCMSSearchByRecordNo::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("RecordNo")] =  m_szRecordNo;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("RecordNo")].GetValue(m_szRecordNo);
	}

}
void CPCMSSearchByRecordNo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPCMSSearchByRecordNo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPCMSSearchByRecordNo::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szRecordNo.Empty();

}
int CPCMSSearchByRecordNo::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
			m_szFromDate= pMF->GetSysDate() + _T(" 00:00");
			m_szToDate= pMF->GetSysDate() + _T(" 23:59");
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
/*void CPCMSSearchByRecordNo::OnFromDateChange(){
	
} */
/*void CPCMSSearchByRecordNo::OnFromDateSetfocus(){
	
} */
/*void CPCMSSearchByRecordNo::OnFromDateKillfocus(){
	
} */
int CPCMSSearchByRecordNo::OnFromDateCheckValue(){
	return 0;
} 
/*void CPCMSSearchByRecordNo::OnToDateChange(){
	
} */
/*void CPCMSSearchByRecordNo::OnToDateSetfocus(){
	
} */
/*void CPCMSSearchByRecordNo::OnToDateKillfocus(){
	
} */
int CPCMSSearchByRecordNo::OnToDateCheckValue(){
	return 0;
} 
void CPCMSSearchByRecordNo::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPCMSSearchByRecordNo::OnDepartmentSelendok(){
	 
}
/*void CPCMSSearchByRecordNo::OnDepartmentSetfocus(){
	
}*/
/*void CPCMSSearchByRecordNo::OnDepartmentKillfocus(){
	
}*/
long CPCMSSearchByRecordNo::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type in ('DT','KB') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPCMSSearchByRecordNo::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPCMSSearchByRecordNo::OnRecordNoChange(){
	
} */
/*void CPCMSSearchByRecordNo::OnRecordNoSetfocus(){
	
} */
/*void CPCMSSearchByRecordNo::OnRecordNoKillfocus(){
	
} */
int CPCMSSearchByRecordNo::OnRecordNoCheckValue(){
	OnListLoadData();
	return 0;
} 
void CPCMSSearchByRecordNo::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
} 
void CPCMSSearchByRecordNo::OnListDblClick(){
	int nSel= m_wndList.GetCurSel();
	m_nDocumentNo= str2long(m_wndList.GetItemText(nSel,0));
	OnOK();
	
} 
void CPCMSSearchByRecordNo::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPCMSSearchByRecordNo::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPCMSSearchByRecordNo::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	CString szSQL,szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(!m_szRecordNo.IsEmpty())
		szWhere.Format(_T(" and lower(hpr_desc) like(chr(37)||lower('%s')||chr(37)) "),m_szRecordNo);
	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpc_deptid='%s' "), m_szDepartmentKey);

	szSQL.Format(_T("select distinct hpc_docno as docno,get_patientname(hpc_docno) as pname, hpc_orderdate as orderdate,hpc_deptid as deptid,hpr_desc as record ") \
				_T("	from hms_pacsorder  ") \
				_T("	left join hms_pacs_result ON (hpr_orderid= hpc_orderid) ") \
				_T("	where  hpc_pdeptid='C5' and hpc_performdate ") \
				_T("	BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')  ") \
				_T("	AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')   and hpc_status='T'  and hpr_name='6' %s ") \
				_T("		  ") \
				_T("	 order by hpc_orderdate desc "),m_szFromDate,m_szToDate,szWhere );
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("deptid")),
			rs.GetValue(_T("record")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
int CPCMSSearchByRecordNo::OnAddPCMSSearchByRecordNo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPCMSSearchByRecordNo::OnEditPCMSSearchByRecordNo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPCMSSearchByRecordNo::OnDeletePCMSSearchByRecordNo(){
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
 		OnCancelPCMSSearchByRecordNo();
 	}
	return 0;
}
int CPCMSSearchByRecordNo::OnSavePCMSSearchByRecordNo(){
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
 		//OnPCMSSearchByRecordNoListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPCMSSearchByRecordNo::OnCancelPCMSSearchByRecordNo(){
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
int CPCMSSearchByRecordNo::OnPCMSSearchByRecordNoListLoadData(){
	return 0;
}
