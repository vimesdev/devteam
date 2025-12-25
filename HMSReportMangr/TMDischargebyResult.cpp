#include "stdafx.h"
#include "TMDischargebyResult.h"
#include "MainFrm.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDischargebyResult *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDischargebyResult *)pWnd)->OnToDateCheckValue();
} 
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDischargebyResult* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CTMDischargebyResult *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnRankAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDischargebyResult* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CTMDischargebyResult *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDischargebyResult* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CTMDischargebyResult *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDischargebyResult* )pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResultSelendokFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd *pWnd){
	return ((CTMDischargebyResult *)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
	((CTMDischargebyResult *)pWnd)->OnResultAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMDischargebyResult *pVw = (CTMDischargebyResult *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMDischargebyResult *pVw = (CTMDischargebyResult *)pWnd;
	pVw->OnExportSelect();
} 
CTMDischargebyResult::CTMDischargebyResult(){
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMDischargebyResult::~CTMDischargebyResult(){
}
void CTMDischargebyResult::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 490, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndRanklab.Create(this, _T("Rank"), 10, 60, 90, 85);
	m_wndRank.Create(this,95, 60, 245, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 250, 60, 330, 85);
	m_wndObject.Create(this,335, 60, 485, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 90, 115);
	m_wndDepartment.Create(this,95, 90, 485, 115); 
	
	m_wndResultLabel.Create(this, _T("Result"), 10, 120, 90, 145);
	m_wndResult.Create(this,95, 120, 485, 145); 
	m_wndPrint.Create(this, _T("Print"), 325, 155, 405, 180);
	m_wndExport.Create(this, _T("Export"), 410, 155, 490, 180);
	m_wndHospitalTransfer.Create(this, _T("Hospital Transfer"), 5, 155, 105, 180);	
	/**/
}
void CTMDischargebyResult::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetCheckValue(true);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	//m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(1024);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndResult.SetCheckBox(true);
	m_wndResult.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndResult.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
}

void CTMDischargebyResult::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndResult.SetEvent(WE_SELENDOK, _OnResultSelendokFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_SELCHANGE, _OnResultSelectChangeFnc);
	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);
	//m_wndResult.SetEvent(WE_ADDNEW, _OnResultAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(FALSE);
}
void CTMDischargebyResult::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_Check(pDX, m_wndHospitalTransfer.GetDlgCtrlID(), m_bHospitalTransfer);
}
void CTMDischargebyResult::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szRankKey.Empty();
	m_szDepartmentKey.Empty();
	m_bHospitalTransfer = FALSE;
}

int CTMDischargebyResult::SetMode(int nMode){
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

/*void CTMDischargebyResult::OnFromDateChange(){
	
} */
/*void CTMDischargebyResult::OnFromDateSetfocus(){
	
} */
/*void CTMDischargebyResult::OnFromDateKillfocus(){
	
} */
int CTMDischargebyResult::OnFromDateCheckValue(){
	return 0;
}
 
/*void CTMDischargebyResult::OnToDateChange(){
	
} */
/*void CTMDischargebyResult::OnToDateSetfocus(){
	
} */
/*void CTMDischargebyResult::OnToDateKillfocus(){
	
} */
int CTMDischargebyResult::OnToDateCheckValue(){
	return 0;
}
 
void CTMDischargebyResult::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
 
void CTMDischargebyResult::OnRankSelendok(){
	 
}

/*void CTMDischargebyResult::OnRankSetfocus(){
	
}*/
/*void CTMDischargebyResult::OnRankKillfocus(){
	
}*/
long CTMDischargebyResult::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndRank.DeleteAllItems(); 
	szSQL.Format(_T("SELECT ss_code id,ss_desc name FROM sys_sel WHERE ss_id='hms_rank' and ss_code >12"), szWhere);
	_fmsg(_T("%s"),szSQL);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRank.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CTMDischargebyResult::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTMDischargebyResult::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
 
void CTMDischargebyResult::OnObjectSelendok(){
	 
}

/*void CTMDischargebyResult::OnObjectSetfocus(){
	
}*/
/*void CTMDischargebyResult::OnObjectKillfocus(){
	
}*/
long CTMDischargebyResult::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		//szWhere.Format();
	};
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as description FROM hms_object ORDER BY cast(id as integer)"));
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CTMDischargebyResult::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTMDischargebyResult::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
 
void CTMDischargebyResult::OnDepartmentSelendok(){
	 
}

/*void CTMDischargebyResult::OnDepartmentSetfocus(){
	
}*/
/*void CTMDischargebyResult::OnDepartmentKillfocus(){
	
}*/
long CTMDischargebyResult::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 AND sd_type IN('DT') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CTMDischargebyResult::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTMDischargebyResult::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMDischargebyResult::OnResultSelendok(){
	 
}
/*void CTMDischargebyResult::OnResultSetfocus(){
	
}*/
/*void CTMDischargebyResult::OnResultKillfocus(){
	
}*/
long CTMDischargebyResult::OnResultLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return (long) LoadSelectionList(&m_wndResult, _T("hms_result"), m_szResultKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResult.IsSearchKey() && !m_szResultKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szResultKey
};
	m_wndResult.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResult.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

int CTMDischargebyResult::LoadSelectionList(CGuiComboBox* pWnd,CString szSelectionID,  CString szKey, CString szFilter){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(pWnd->IsSearchKey() && !szKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), szKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='%s' %s %s ORDER BY ss_index, ss_code "), szSelectionID, szWhere, szFilter);

	long ret  = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	_tprintf(_T("\r\n%d: %s"), ret, szSQL);	
	pWnd->DeleteAllItems();
	while(!rs.IsEOF()){
		pWnd->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return pWnd->GetCount();
}

/*void CTMDischargebyResult::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTMDischargebyResult::OnPrintSelect(){

}
 
void CTMDischargebyResult::OnExportSelect(){
	UpdateData();
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CExcel xls;
	CString szXlsName;
	CRecord rs(&pMF->m_db);
	int nRow = 0, nIdx = 1;
	if (OnCheckBeforeExport(&xls, &rs) < 0) return;
	xls.SetWorksheet(0);
	nRow = 4;
	szXlsName = m_bHospitalTransfer?_T("Exports\\DANHSACHBENHNHANCHUYENVIEN.xls"):_T("Exports\\DANHSACHBENHNHANNANGXINVE.xls");
	while (!rs.IsEOF()){
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		for (int i = 0; i < rs.GetFieldCount(); i++)
			xls.SetCellText(i+1, nRow, rs.GetValue(rs.GetFieldName(i)), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(szXlsName);
}
 
int CTMDischargebyResult::OnCheckBeforeExport(CExcel* xls, CRecord* rs){
	CString szXlsName;
	szXlsName = m_bHospitalTransfer?_T("Exports\\MAU_DANHSACHBENHNHANCHUYENVIEN.xls"):_T("Exports\\MAU_DANHSACHBENHNHANNANGXINVE.xls");
	if (!xls->Load(szXlsName)){
		AfxMessageBox(szXlsName);
		return -1;
	}
	rs->ExecSQL(GetQueryString());
	if (rs->IsEOF()){
		AfxMessageBox(_T("No Data!"));
		return -1;
	}
	return 0;
}

CString CTMDischargebyResult::GetQueryString(){
	CString szSQL, szWhere, szResult, szItem;
	szResult.Empty();
	szWhere.Format(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	if (!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szRankKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hp_rank = '%s'"), m_szRankKey);
	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hcr_dischargedept = '%s'"), m_szDepartmentKey);
    for (int i = 0; i < m_wndResult.GetCount(); i++)
    {
		//m_wndResult.SetCurSel(i);
		if (m_wndResult.GetCheck(i)){
            szItem.Format(L"%s", m_wndResult.GetCurrent(0));
			if (!szResult.IsEmpty())
				szResult += _T(",");
            szResult += szItem;
		}
	}
    _tprintf(_T(""));

	if (!szResult.IsEmpty())
		szWhere.AppendFormat(_T(" AND hcr_result IN (%s)"), szResult);
	if (m_bHospitalTransfer)
		szWhere.AppendFormat(_T(" AND hcr_suggestion = 'F'"));
	szSQL.Format(_T(" SELECT  /*without outpatient*/  Get_patientname(hcr_docno) ten,") \
				_T("          Extract(year FROM hp_birthdate) nam_sinh,") \
				_T("          hcr_docno so_hs,") \
				_T("          Get_objectname(hd_object) doi_tuong,") \
				_T("          Get_syssel_desc('hms_rank', hp_rank) cap_bac,") \
				_T("          hcr_dischargedept khoa,") \
				_T("          to_char(hcr_admitdate, 'dd/mm/yyyy hh24:mi:ss') ngay_vao,") \
				_T("          to_char(hcr_dischargedate, 'dd/mm/yyyy hh24:mi:ss') ngay_ra,") \
				_T("		  (select hh_name from hms_hospital where hh_id = hcr_hospitalid) vien_chuyen_den,") \
				_T("		  hp_workplace don_vi") \
				_T(" FROM      hms_clinical_record") \
				_T(" LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
				_T(" LEFT JOIN hms_doc ON ( hcr_docno = hd_docno )") \
				_T(" LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno )") \
				_T(" WHERE     hcr_status = 'T' AND NVL(htr_outpatient, 'N') = 'N' %s") \
				_T(" ORDER BY hcr_dischargedept, hcr_docno"), szWhere);
	return szSQL;
}