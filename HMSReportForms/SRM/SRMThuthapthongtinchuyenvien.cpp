#include "stdafx.h"
#include "SRMThuthapthongtinchuyenvien.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinchuyenvien *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinchuyenvien *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinchuyenvien *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinchuyenvien *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinchuyenvien *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinchuyenvien *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinchuyenvien *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinchuyenvien *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinchuyenvien* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinchuyenvien *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinchuyenvien *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinchuyenvien *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinchuyenvien *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinchuyenvien *)pWnd)->OnDeptAddNew();
}*/
static void _OnLoadSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinchuyenvien *pVw = (CSRMThuthapthongtinchuyenvien *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinchuyenvien *pVw = (CSRMThuthapthongtinchuyenvien *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinchuyenvien *pVw = (CSRMThuthapthongtinchuyenvien *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinchuyenvien*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSRMThuthapthongtinchuyenvien*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMThuthapthongtinchuyenvien*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinchuyenvien*)pWnd)->OnListDeleteItem();
} 
static void _OnSummerySelectFnc(CWnd *pWnd){
	 ((CSRMThuthapthongtinchuyenvien*)pWnd)->OnSummerySelect();
}
static int _OnAddSRMThuthapthongtinchuyenvienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinchuyenvien*)pWnd)->OnAddSRMThuthapthongtinchuyenvien();
} 
static int _OnEditSRMThuthapthongtinchuyenvienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinchuyenvien*)pWnd)->OnEditSRMThuthapthongtinchuyenvien();
} 
static int _OnDeleteSRMThuthapthongtinchuyenvienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinchuyenvien*)pWnd)->OnDeleteSRMThuthapthongtinchuyenvien();
} 
static int _OnSaveSRMThuthapthongtinchuyenvienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinchuyenvien*)pWnd)->OnSaveSRMThuthapthongtinchuyenvien();
} 
static int _OnCancelSRMThuthapthongtinchuyenvienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinchuyenvien*)pWnd)->OnCancelSRMThuthapthongtinchuyenvien();
} 
CSRMThuthapthongtinchuyenvien::CSRMThuthapthongtinchuyenvien(CWnd *pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CSRMThuthapthongtinchuyenvien::~CSRMThuthapthongtinchuyenvien()
{
}
void CSRMThuthapthongtinchuyenvien::OnCreateComponents()
{
	m_wndReportCriteria.Create(this, _T("Report criteria"), 5, 5, 385, 130);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 70, 55);
	m_wndFromDate.Create(this,75, 30, 190, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 195, 30, 255, 55);
	m_wndToDate.Create(this,260, 30, 375, 55); 
	m_wndDeptLabel.Create(this, _T("Hospital"), 10, 60, 70, 85);
	m_wndDept.Create(this,75, 60, 375, 85); 
	m_wndExport.Create(this, _T("&Export"), 295, 135, 375, 160);
	m_wndSummery.Create(this, _T("Summery"), 10, 90, 150, 115);
}
void CSRMThuthapthongtinchuyenvien::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndList.GetHeaderControl()->SetItemHeight(4);
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Age"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("CardNo"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(6, _T("Hospital Tranfer"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(7, _T("DiagnoticTranfer"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(8, _T("1a"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(9, _T("1b"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(10, _T("2"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(11, _T("3"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(12, _T("4"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(13, _T("5"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(14, _T("6"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(15, _T("7"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(16, _T("8"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(17, _T("9"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(18, _T("\x43h\x1EA9n \x111o\xE1n r\x61 vi\x1EC7n"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(19, _T("Ghi \x63h\xFA"), CFMT_TEXT, 30);
	m_wndList.GetHeaderControl()->MergeCell(_T("H\xECnh th\x1EE9\x63 \x63huy\x1EC3n"),0,8,3,11);
	m_wndList.GetHeaderControl()->MergeCell(_T("L\xFD \x64o \x63huy\x1EC3n"),0,12,3,13);
	m_wndList.GetHeaderControl()->MergeCell(_T("\x43huy\x1EC3n tuy\x1EBFn \x111\xFAng \x43MKT"),0,14,3,14);
	m_wndList.GetHeaderControl()->MergeCell(_T("\x43huy\x1EC3n v\x1B0\x1EE3t tuy\x1EBFn \x43MKT"),0,15,3,15);
	m_wndList.GetHeaderControl()->MergeCell(_T("K\x1EBFt qu\x1EA3 \x111i\x1EC1u tr\x1ECB v\xE0 \x78\x1EED l\xFD \x63\x1EE7\x61 \x63\x1A1 s\x1EDF K\x43\x42"),0,16,3,17);
}
void CSRMThuthapthongtinchuyenvien::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSummery.SetEvent(WE_CLICK, _OnSummerySelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddSRMThuthapthongtinchuyenvienFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSRMThuthapthongtinchuyenvienFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSRMThuthapthongtinchuyenvienFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSRMThuthapthongtinchuyenvienFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSRMThuthapthongtinchuyenvienFnc, 0, 'T', VK_CONTROL);
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
	m_szFromDate.Format(_T("%s 00:00"),pMF->GetSysDate());
	m_szToDate.Format(_T("%s 23:59"),pMF->GetSysDate());
	UpdateData(FALSE);
}
void CSRMThuthapthongtinchuyenvien::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndSummery.GetDlgCtrlID(), m_bSummery);

}
void CSRMThuthapthongtinchuyenvien::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSRMThuthapthongtinchuyenvien::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSRMThuthapthongtinchuyenvien::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_bSummery=FALSE;

}
int CSRMThuthapthongtinchuyenvien::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
/*void CSRMThuthapthongtinchuyenvien::OnFromDateChange(){
	
} */
/*void CSRMThuthapthongtinchuyenvien::OnFromDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinchuyenvien::OnFromDateKillfocus(){
	
} */
int CSRMThuthapthongtinchuyenvien::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMThuthapthongtinchuyenvien::OnToDateChange(){
	
} */
/*void CSRMThuthapthongtinchuyenvien::OnToDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinchuyenvien::OnToDateKillfocus(){
	
} */
int CSRMThuthapthongtinchuyenvien::OnToDateCheckValue(){
	return 0;
} 
void CSRMThuthapthongtinchuyenvien::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinchuyenvien::OnDeptSelendok(){
	 
}
/*void CSRMThuthapthongtinchuyenvien::OnDeptSetfocus(){
	
}*/
/*void CSRMThuthapthongtinchuyenvien::OnDeptKillfocus(){
	
}*/
long CSRMThuthapthongtinchuyenvien::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" WHERE hh_id ='%s' "), m_szDeptKey);
	};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hh_id as id, hh_name as name FROM hms_hospital  %s ") , szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CSRMThuthapthongtinchuyenvien::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinchuyenvien::OnLoadSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
} 
void CSRMThuthapthongtinchuyenvien::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 

void CSRMThuthapthongtinchuyenvien::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_bSummery)
		OnExportSumerty();
	else
		OnExportChiTietSelect();
} 
void CSRMThuthapthongtinchuyenvien::OnExportChiTietSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();	
	
	CString szSQL, tmpStr, tmpStr2, szFromDateLabel, szWhereDate, szWhere, szWhereObjects, szObjects;
	CString szDate, szSysDate;
	CString szFromDate, szToDate, szWhereHospital;
	CRecord rs(&pMF->m_db);
	UpdateData(true);

	BeginWaitCursor();

	if(!m_szDeptKey.IsEmpty())
	{
		szWhereHospital.Format(_T("AND  hd_transplaceid = '%s'"), m_szDeptKey);
	}

	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                             AS pname,") \
		_T("   hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T("   (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ss_code=hp_sex") \
		_T("   )             AS sex,") \
		_T("   hd_cardno     AS cardno,") \
		_T("   hd_transplace AS transplace,") \
		_T("   hd_transdiagn AS diagnotic,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (3,4)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS ht2,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (1)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht3,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (2)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht4,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS lydo1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS lydo2,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS chuyentuyen1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS chuyentuyen2,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS ketqua1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS ketqua1,") \
		_T("   CASE") \
		_T("     WHEN hd_status = 'T'") \
		_T("     AND hd_enddept = 'KB'") \
		_T("     THEN hd_icd") \
		_T("     ELSE CAST(' ' AS NVARCHAR2(1))") \
		_T("   END AS mainicd") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON (hp_patientno=hd_patientno)") \
		_T(" LEFT JOIN hms_hospital") \
		_T(" ON (hh_id=hd_transplaceid)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(he_docno=hd_docno)") \
		_T(" WHERE hd_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND hd_status             = 'T'") \
		_T(" AND hd_suggestion         = 'D'") \
		_T(" AND hd_enddept            = 'KB'") \
		_T(" AND LENGTH(hd_transplace) > 0 %s") \
		_T(" UNION ALL") \
		_T(" SELECT hd_docno AS docno,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                             AS pname,") \
		_T("   hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T("   (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ss_code=hp_sex") \
		_T("   )             AS sex,") \
		_T("   hd_cardno     AS cardno,") \
		_T("   hd_transplace AS transplace,") \
		_T("   hd_transdiagn AS diagnotic,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (3,4)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS ht2,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (1)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht3,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (2)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht4,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS lydo1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS lydo2,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS chuyentuyen1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS chuyentuyen2,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS ketqua1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS ketqua1,") \
		_T("   CASE") \
		_T("     WHEN hcr_status = 'T'") \
		_T("     AND hd_enddept != 'KB'") \
		_T("     THEN hd_icd") \
		_T("     ELSE CAST(' ' AS NVARCHAR2(1))") \
		_T("   END AS mainicd") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON (hp_patientno=hd_patientno)") \
		_T(" LEFT JOIN hms_hospital") \
		_T(" ON (hh_id=hd_transplaceid)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON (hcr_docno = hd_docno)") \
		_T(" WHERE 1       =1") \
		_T(" AND ((hcr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hcr_status = 'T')") \
		_T(" OR (hcr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hcr_status           <> 'T' ))") \
		_T(" AND LENGTH(hd_transplace) > 0 %s") \
		_T(" ORDER BY transplace"), m_szFromDate, m_szToDate, szWhereHospital, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhereHospital);

	rs.ExecSQL(szSQL);

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 9);
	xls.SetColumnWidth(2, 19);
	xls.SetColumnWidth(3, 7);
	xls.SetColumnWidth(4, 7);
	xls.SetColumnWidth(5, 22);
	xls.SetColumnWidth(6, 46);
	xls.SetColumnWidth(7, 28);
	xls.SetColumnWidth(8, 6);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 6);
	xls.SetColumnWidth(11, 6);

	xls.SetColumnWidth(12, 6);
	xls.SetColumnWidth(13, 6);

	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);

	xls.SetColumnWidth(17, 12);
	xls.SetColumnWidth(18, 12);

	xls.SetRowHeight(6, 40);
	xls.SetRowHeight(7, 26);
	
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 5);
	xls.SetCellMergedColumns(0, 4, 20);
	xls.SetCellMergedColumns(0, 5, 20);
	
	xls.SetCellText(0, 1, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"),FMT_TEXT|FMT_CENTER, true, 12, 0);
	xls.SetCellText(0, 2, _T("\x42\x1EC6NH VI\x1EC6N TWQ\x110 \x31\x30\x38"),FMT_TEXT|FMT_CENTER, true, 12, 0);
	xls.SetCellText(0,4,_T("Thu th\x1EADp th\xF4ng tin \x63huy\x1EC3n vi\x1EC7n"),FMT_TEXT|FMT_CENTER,true,12,0);
	tmpStr.Format(_T("T\x1EEB %s \x111\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
													  CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0,5,tmpStr,FMT_TEXT|FMT_CENTER,true,12,0);

	int nRow, nCol;
	nCol=0;
	nRow=6;
	xls.SetCellMergedRows(nCol,nRow,2);
	xls.SetCellText(nCol,nRow,_T("STT"),FMT_TEXT|FMT_CENTER,true);

	xls.SetCellMergedRows(nCol+1,nRow,2);
	xls.SetCellText(nCol+1,nRow,_T("S\x1ED1 h\x1ED3 s\x1A1"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellMergedRows(nCol+2,nRow,2);
	xls.SetCellText(nCol+2,nRow,_T("T\xEAn \x62\x1EC7nh nh\xE2n"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellMergedRows(nCol+3,nRow,2);
	xls.SetCellText(nCol+3,nRow,_T("Tu\x1ED5i"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellMergedRows(nCol+4,nRow,2);
	xls.SetCellText(nCol+4,nRow,_T("Gi\x1EDBi"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellMergedRows(nCol+5,nRow,2);
	xls.SetCellText(nCol+5,nRow,_T("S\x1ED1 th\x1EBB \x42HYT n\x1EBFu \x63\xF3"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellMergedRows(nCol+6,nRow,2);
	xls.SetCellText(nCol+6,nRow,_T("T\xEAn \x63\x1A1 s\x1EDF K\x43\x42 \x63huy\x1EC3n N\x42 \x111\x1EBFn"),FMT_TEXT|FMT_WRAPING,true);
	
	xls.SetCellMergedRows(nCol+7,nRow,2);
	xls.SetCellText(nCol+7,nRow,_T("\x43h\x1EA9n \x111o\xE1n \x63\x1EE7\x61 \x43SK\x43\x42 \x63huy\x1EC3n N\x42"),FMT_TEXT|FMT_WRAPING,true);
	
	xls.SetCellMergedColumns(nCol+8,nRow,4);
	xls.SetCellText(nCol+8,nRow,_T("H\xECnh th\x1EE9\x63 \x63huy\x1EC3n"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(nCol+8,nRow+1,_T("1a"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(nCol+9,nRow+1,_T("1b"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(nCol+10,nRow+1,_T("2"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(nCol+11,nRow+1,_T("3"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellMergedColumns(nCol+12,nRow,2);
	xls.SetCellText(nCol+12,nRow,_T("L\xFD \x64o \x63huy\x1EC3n"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(nCol+12,nRow+1,_T("4"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(nCol+13,nRow+1,_T("5"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellText(nCol+14,nRow,_T("\x43huy\x1EC3n tuy\x1EBFn \x111\xFAng \x43MKT"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(nCol+14,nRow+1,_T("6"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellText(nCol+15,nRow,_T("\x43huy\x1EC3n v\x1B0\x1EE3t tuy\x1EBFn \x43MKT"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(nCol+15,nRow+1,_T("7"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellMergedColumns(nCol+16,nRow,2);
	xls.SetCellText(nCol+16,nRow,_T("K\x1EBFt qu\x1EA3 \x111i\x1EC1u tr\x1ECB v\xE0 \x78\x1EED l\xFD \x63\x1EE7\x61 \x63\x1A1 s\x1EDF K\x43\x42"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(nCol+16,nRow+1,_T("8"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(nCol+17,nRow+1,_T("9"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellMergedRows(nCol+18,nRow,2);
	xls.SetCellText(nCol+18,nRow,_T("\x43h\x1EA9n \x111o\xE1n r\x61 vi\x1EC7n"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellMergedRows(nCol+19,nRow,2);
	xls.SetCellText(nCol+19,nRow,_T("Ghi \x63h\xFA (s\x61i s\xF3t \x63huy\xEAn m\xF4n \x63h\x1EA9n \x111o\xE1n kh\xE1\x63 \x62i\x1EC7t \x63\x1EE7\x61 tuy\x1EBFn \x64\x1B0\x1EDBi)"),FMT_TEXT|FMT_WRAPING,true);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	int nIndex=1;	
	nRow=8;

	while(!rs.IsEOF())
	{	

		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("docno")));
		xls.SetCellText(nCol+1,nRow,tmpStr,FMT_INTEGER, false, 9);
		
		tmpStr.Format(_T("%s"),rs.GetValue(_T("pname")));
		xls.SetCellText(nCol+2,nRow,tmpStr,FMT_TEXT, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("age")));
		xls.SetCellText(nCol+3,nRow,tmpStr,FMT_TEXT, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("sex")));
		xls.SetCellText(nCol+4,nRow,tmpStr,FMT_TEXT, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("cardno")));
		xls.SetCellText(nCol+5,nRow,tmpStr,FMT_TEXT, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("transplace")));
		xls.SetCellText(nCol+6,nRow,tmpStr,FMT_TEXT, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("diagnotic")));
		xls.SetCellText(nCol+7,nRow,tmpStr,FMT_TEXT, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("ht1")));
		xls.SetCellText(nCol+8,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("ht2")));
		xls.SetCellText(nCol+9,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("ht3")));
		xls.SetCellText(nCol+10,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("ht4")));
		xls.SetCellText(nCol+11,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("lydo1")));
		xls.SetCellText(nCol+12,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("lydo2")));
		xls.SetCellText(nCol+13,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("chuyentuyen1")));
		xls.SetCellText(nCol+14,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("chuyentuyen2")));
		xls.SetCellText(nCol+15,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("ketqua1")));
		xls.SetCellText(nCol+16,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("ketqua2")));
		xls.SetCellText(nCol+17,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		rs.GetValue(_T("mainicd"),tmpStr);
		xls.SetCellText(nCol+18,nRow,tmpStr,FMT_TEXT|FMT_CENTER, false, 9);

		//_msg(_T("%s"),tmpStr);
		nRow++;

		rs.MoveNext();

	}	

	EndWaitCursor();
	xls.Save(_T("Exports\\SRMThuthapthongtinchuyenvien.xls"));
	
} 
void CSRMThuthapthongtinchuyenvien::OnListDblClick(){
	
} 
void CSRMThuthapthongtinchuyenvien::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CSRMThuthapthongtinchuyenvien::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSRMThuthapthongtinchuyenvien::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr, szWhereHospital;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	if(!m_szDeptKey.IsEmpty())
	{
		szWhereHospital.Format(_T("AND  hd_transplaceid = '%s'"), m_szDeptKey);
	}

	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                             AS pname,") \
		_T("   hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T("   (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ss_code=hp_sex") \
		_T("   )             AS sex,") \
		_T("   hd_cardno     AS cardno,") \
		_T("   hd_transplace AS transplace,") \
		_T("   hd_transdiagn AS diagnotic,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (3,4)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS ht2,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (1)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht3,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (2)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht4,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS lydo1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS lydo2,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS chuyentuyen1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS chuyentuyen2,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS ketqua1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS ketqua1,") \
		_T("   CASE") \
		_T("     WHEN hd_status = 'T'") \
		_T("     AND hd_enddept = 'KB'") \
		_T("     THEN hd_icd") \
		_T("     ELSE CAST(' ' AS NVARCHAR2(1))") \
		_T("   END AS mainicd") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON (hp_patientno=hd_patientno)") \
		_T(" LEFT JOIN hms_hospital") \
		_T(" ON (hh_id=hd_transplaceid)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(he_docno=hd_docno)") \
		_T(" WHERE hd_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND hd_status             = 'T'") \
		_T(" AND hd_suggestion         = 'D'") \
		_T(" AND hd_enddept            = 'KB'") \
		_T(" AND LENGTH(hd_transplace) > 0 %s") \
		_T(" UNION ALL") \
		_T(" SELECT hd_docno AS docno,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                             AS pname,") \
		_T("   hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T("   (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ss_code=hp_sex") \
		_T("   )             AS sex,") \
		_T("   hd_cardno     AS cardno,") \
		_T("   hd_transplace AS transplace,") \
		_T("   hd_transdiagn AS diagnotic,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (3,4)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS ht2,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (1)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht3,") \
		_T("   CASE") \
		_T("     WHEN hh_type IN (2)") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END AS ht4,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS lydo1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS lydo2,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS chuyentuyen1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS chuyentuyen2,") \
		_T("   CAST('X' AS NVARCHAR2(1)) AS ketqua1,") \
		_T("   CAST(' ' AS NVARCHAR2(1))  AS ketqua1,") \
		_T("   CASE") \
		_T("     WHEN hcr_status = 'T'") \
		_T("     AND hd_enddept != 'KB'") \
		_T("     THEN hd_icd") \
		_T("     ELSE CAST(' ' AS NVARCHAR2(1))") \
		_T("   END AS mainicd") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON (hp_patientno=hd_patientno)") \
		_T(" LEFT JOIN hms_hospital") \
		_T(" ON (hh_id=hd_transplaceid)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON (hcr_docno = hd_docno)") \
		_T(" WHERE 1       =1") \
		_T(" AND ((hcr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hcr_status = 'T')") \
		_T(" OR (hcr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hcr_status           <> 'T' ))") \
		_T(" AND LENGTH(hd_transplace) > 0 %s ") \
		_T(" ORDER BY transplace"), m_szFromDate, m_szToDate, szWhereHospital, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhereHospital);

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("cardno")), 
			rs.GetValue(_T("transplace")), 
			rs.GetValue(_T("diagnotic")), 
			rs.GetValue(_T("ht1")), 
			rs.GetValue(_T("ht2")), 
			rs.GetValue(_T("ht3")), 
			rs.GetValue(_T("ht4")), 
			rs.GetValue(_T("lydo1")), 
			rs.GetValue(_T("lydo2")), 
			rs.GetValue(_T("chuyentuyen1")), 
			rs.GetValue(_T("chuyentuyen2")), 
			rs.GetValue(_T("ketqua1")), 
			rs.GetValue(_T("ketqua2")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	

}
	void CSRMThuthapthongtinchuyenvien::OnSummerySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CSRMThuthapthongtinchuyenvien::OnAddSRMThuthapthongtinchuyenvien(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSRMThuthapthongtinchuyenvien::OnEditSRMThuthapthongtinchuyenvien(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMThuthapthongtinchuyenvien::OnDeleteSRMThuthapthongtinchuyenvien(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelSRMThuthapthongtinchuyenvien(); 
 	}
	return 0;
}
int CSRMThuthapthongtinchuyenvien::OnSaveSRMThuthapthongtinchuyenvien(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
 		//OnSRMThuthapthongtinchuyenvienListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CSRMThuthapthongtinchuyenvien::OnCancelSRMThuthapthongtinchuyenvien(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CSRMThuthapthongtinchuyenvien::OnSRMThuthapthongtinchuyenvienListLoadData(){
	return 0;
}
void CSRMThuthapthongtinchuyenvien::OnExportSumerty()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();	
	CString szSQL, tmpStr, tmpStr2, szFromDateLabel, szWhereDate, szWhere, szWhereHospital, szObjects;
	CString szDate, szSysDate;
	CString szFromDate, szToDate;
	CRecord rs(&pMF->m_db);
	UpdateData(true);

	BeginWaitCursor();

	if(!m_szDeptKey.IsEmpty())
		{
			szWhereHospital.Format(_T("AND  hd_transplaceid = '%s'"), m_szDeptKey);
		}


	szSQL.Format(_T(" SELECT transplace,") \
		_T("   SUM(ht1)   AS ht1,") \
		_T("   SUM(ht2)   AS ht2,") \
		_T("   SUM(ht3)   AS ht3,") \
		_T("   SUM(ht4)   AS ht4,") \
		_T("   SUM(bhyt)  AS bhyt,") \
		_T("   SUM(dv)    AS dv,") \
		_T("   SUM(total) AS total") \
		_T(" FROM") \
		_T("   (SELECT hd_docno AS docno,") \
		_T("     trim(hp_surname") \
		_T("     ||' '") \
		_T("     ||hp_midname") \
		_T("     ||' '") \
		_T("     ||hp_firstname)                             AS pname,") \
		_T("     hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T("     (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ss_code=hp_sex") \
		_T("     )             AS sex,") \
		_T("     hd_cardno     AS cardno,") \
		_T("     hd_transplace AS transplace,") \
		_T("     hd_transdiagn AS diagnotic,") \
		_T("     CASE") \
		_T("       WHEN hh_type IN (3,4)") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS ht1,") \
		_T("     0   AS ht2,") \
		_T("     CASE") \
		_T("       WHEN hh_type IN (1)") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS ht3,") \
		_T("     CASE") \
		_T("       WHEN hh_type IN (2)") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS ht4,") \
		_T("     CAST('X' AS NVARCHAR2(1))  AS lydo1,") \
		_T("     CAST(' ' AS NVARCHAR2(1))   AS lydo2,") \
		_T("     CAST('X' AS NVARCHAR2(1))  AS chuyentuyen1,") \
		_T("     CAST(' ' AS NVARCHAR2(1))   AS chuyentuyen2,") \
		_T("     CAST('X' AS NVARCHAR2(1))  AS ketqua1,") \
		_T("     CAST(' ' AS NVARCHAR2(1))   AS ketqua1,") \
		_T("     CASE") \
		_T("       WHEN hd_status = 'T'") \
		_T("       AND hd_enddept = 'KB'") \
		_T("       THEN hd_icd") \
		_T("       ELSE CAST(' ' AS NVARCHAR2(1)) ") \
		_T("     END AS mainicd,") \
		_T("     CASE") \
		_T("       WHEN hd_object<>'9'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS bhyt,") \
		_T("     CASE") \
		_T("       WHEN hd_object= '9'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS dv,") \
		_T("     1   AS total") \
		_T("   FROM hms_doc") \
		_T("   LEFT JOIN hms_patient") \
		_T("   ON (hp_patientno=hd_patientno)") \
		_T("   LEFT JOIN hms_hospital") \
		_T("   ON (hh_id=hd_transplaceid)") \
		_T("   LEFT JOIN hms_exam") \
		_T("   ON(he_docno=hd_docno)") \
		_T(" WHERE hd_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T("   AND hd_status             = 'T'") \
		_T("   AND hd_suggestion         = 'D'") \
		_T("   AND hd_enddept            = 'KB'") \
		_T("   AND LENGTH(hd_transplace) > 0 %s") \
		_T("   UNION ALL") \
		_T("   SELECT hd_docno AS docno,") \
		_T("     trim(hp_surname") \
		_T("     ||' '") \
		_T("     ||hp_midname") \
		_T("     ||' '") \
		_T("     ||hp_firstname)                             AS pname,") \
		_T("     hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T("     (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ss_code=hp_sex") \
		_T("     )             AS sex,") \
		_T("     hd_cardno     AS cardno,") \
		_T("     hd_transplace AS transplace,") \
		_T("     hd_transdiagn AS diagnotic,") \
		_T("     CASE") \
		_T("       WHEN hh_type IN (3,4)") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS ht1,") \
		_T("     0   AS ht2,") \
		_T("     CASE") \
		_T("       WHEN hh_type IN (1)") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS ht3,") \
		_T("     CASE") \
		_T("       WHEN hh_type IN (2)") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS ht4,") \
		_T("     CAST('X' AS NVARCHAR2(1))  AS lydo1,") \
		_T("     CAST(' ' AS NVARCHAR2(1))   AS lydo2,") \
		_T("     CAST('X' AS NVARCHAR2(1))  AS chuyentuyen1,") \
		_T("     CAST(' ' AS NVARCHAR2(1))   AS chuyentuyen2,") \
		_T("     CAST('X' AS NVARCHAR2(1))  AS ketqua1,") \
		_T("     CAST(' ' AS NVARCHAR2(1))   AS ketqua1,") \
		_T("     CASE") \
		_T("       WHEN hcr_status = 'T'") \
		_T("       AND hd_enddept != 'KB'") \
		_T("       THEN hd_icd") \
		_T("       ELSE CAST(' ' AS NVARCHAR2(1)) ") \
		_T("     END AS mainicd,") \
		_T("     CASE") \
		_T("       WHEN hd_object<>'9'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS bhyt,") \
		_T("     CASE") \
		_T("       WHEN hd_object= '9'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS dv,") \
		_T("     1   AS total") \
		_T("   FROM hms_doc") \
		_T("   LEFT JOIN hms_patient") \
		_T("   ON (hp_patientno=hd_patientno)") \
		_T("   LEFT JOIN hms_hospital") \
		_T("   ON (hh_id=hd_transplaceid)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON (hcr_docno = hd_docno)") \
		_T("   WHERE 1       =1") \
		_T(" AND ((hcr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hcr_status = 'T')") \
		_T(" OR (hcr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hcr_status           <> 'T' ))") \
		_T("   AND LENGTH(hd_transplace) > 0 %s") \
		_T("   ORDER BY transplace") \
		_T("   ) tbl") \
		_T(" GROUP BY transplace") \
		_T(" ORDER BY transplace"), m_szFromDate, m_szToDate, szWhereHospital, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhereHospital);

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 45);
	xls.SetColumnWidth(2, 8);
	for(int i=3;i<20;i++)
	{
		xls.SetColumnWidth(i, 7);
	}
	


	xls.SetRowHeight(6, 40);
	xls.SetRowHeight(7, 26);
	
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 5);
	xls.SetCellMergedColumns(0, 4, 24);
	xls.SetCellMergedColumns(0, 5, 24);
	
	xls.SetCellText(0, 1, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"),FMT_TEXT|FMT_CENTER, true, 12, 0);
	xls.SetCellText(0, 2, _T("\x42\x1EC6NH VI\x1EC6N TWQ\x110 \x31\x30\x38"),FMT_TEXT|FMT_CENTER, true, 12, 0);
	xls.SetCellText(0,4,_T("Thu th\x1EADp th\xF4ng tin \x63huy\x1EC3n vi\x1EC7n"),FMT_TEXT|FMT_CENTER,true,12,0);
	tmpStr.Format(_T("T\x1EEB %s \x111\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
													  CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0,5,tmpStr,FMT_TEXT|FMT_CENTER,true,12,0);

	int nRow, nCol;
	nCol=0;
	nRow=6;
	xls.SetCellMergedRows(nCol,nRow,3);
	xls.SetCellText(nCol,nRow,_T("TT"),FMT_TEXT|FMT_CENTER,true);

	xls.SetCellMergedRows(nCol+1,nRow,3);
	xls.SetCellText(nCol+1,nRow,_T("T\xEAn \x63\x1A1 s\x1EDF K\x42, \x43\x42 n\x1A1i \x63huy\x1EC3n N\x42 \x111\x1EBFn"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellMergedRows(nCol+2,nRow,3);
	xls.SetCellText(nCol+2,nRow,_T("T\x1ED5ng s\x1ED1 \x42N \x111\xE3 \x63huy\x1EC3n \x111\x1EBFn"),FMT_TEXT|FMT_WRAPING,true);

	xls.SetCellMergedColumns(nCol+3,nRow,2);
	xls.SetCellText(nCol+3,nRow,_T("T\x1ED5ng s\x1ED1 \x42HYT"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true);
	
	xls.SetCellMergedRows(nCol+3,nRow+1,2);
	xls.SetCellText(nCol+3,nRow+1,_T("TS \x63\xF3"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedRows(nCol+4,nRow+1,2);
	xls.SetCellText(nCol+4,nRow+1,_T("TS kh\xF4ng"),FMT_TEXT|FMT_CENTER,true);

	xls.SetCellMergedColumns(nCol+5,nRow,4);
	xls.SetCellText(nCol+5,nRow,_T("H\xECnh th\x1EE9\x63 \x63huy\x1EC3n"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true);
	
	xls.SetCellMergedRows(nCol+5,nRow+1,2);
	xls.SetCellText(nCol+5,nRow+1,_T("1a"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedRows(nCol+6,nRow+1,2);
	xls.SetCellText(nCol+6,nRow+1,_T("1b"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedRows(nCol+7,nRow+1,2);
	xls.SetCellText(nCol+7,nRow+1,_T("2"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedRows(nCol+8,nRow+1,2);
	xls.SetCellText(nCol+8,nRow+1,_T("3"),FMT_TEXT|FMT_CENTER,true);


	xls.SetCellMergedColumns(nCol+9,nRow,4);
	xls.SetCellText(nCol+9,nRow,_T("L\xFD \x64o \x63huy\x1EC3n"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true);

	xls.SetCellText(nCol+9,nRow+1,_T("SL"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(nCol+10,nRow+1,_T("%"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(nCol+11,nRow+1,_T("SL"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(nCol+12,nRow+1,_T("%"),FMT_TEXT|FMT_CENTER,true);

	xls.SetCellMergedColumns(nCol+9,nRow+2,2);
	xls.SetCellText(nCol+9,nRow+2,_T("4"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true);

	xls.SetCellMergedColumns(nCol+11,nRow+2,2);
	xls.SetCellText(nCol+11,nRow+2,_T("5"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true);

	xls.SetCellMergedColumns(nCol+13,nRow,2);
	xls.SetCellText(nCol+13,nRow,_T("\x43huy\x1EC3n tuy\x1EBFn \x43MKT"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true);
	xls.SetCellText(nCol+13,nRow+1,_T("SL"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(nCol+14,nRow+1,_T("%"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedColumns(nCol+13,nRow+2,2);
	xls.SetCellText(nCol+13,nRow+2,_T("6"),FMT_TEXT|FMT_CENTER,true);


	xls.SetCellMergedColumns(nCol+15,nRow,2);
	xls.SetCellText(nCol+15,nRow,_T("\x43huy\x1EC3n v\x1B0\x1EE3t tuy\x1EBFn \x43MKT"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true);
	xls.SetCellText(nCol+15,nRow+1,_T("SL"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(nCol+16,nRow+1,_T("%"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedColumns(nCol+15,nRow+2,2);
	xls.SetCellText(nCol+15,nRow+2,_T("7"),FMT_TEXT|FMT_CENTER,true);

	xls.SetCellMergedColumns(nCol+17,nRow,2);
	xls.SetCellText(nCol+17,nRow,_T("\x43h\x1EA9n \x111o\xE1n ph\xF9 h\x1EE3p"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true);
	xls.SetCellText(nCol+17,nRow+1,_T("SL"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(nCol+18,nRow+1,_T("%"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedColumns(nCol+17,nRow+2,2);
	xls.SetCellText(nCol+17,nRow+2,_T("13"),FMT_TEXT|FMT_CENTER,true);

	xls.SetCellMergedColumns(nCol+19,nRow,2);
	xls.SetCellText(nCol+19,nRow,_T("\x43h\x1EA9n \x111o\xE1n kh\xE1\x63 \x62i\x1EC7t"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true);
	xls.SetCellText(nCol+19,nRow+1,_T("SL"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(nCol+20,nRow+1,_T("%"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedColumns(nCol+19,nRow+2,2);
	xls.SetCellText(nCol+19,nRow+2,_T("14"),FMT_TEXT|FMT_CENTER,true);


	xls.SetCellMergedColumns(nCol+21,nRow,2);
	xls.SetCellText(nCol+21,nRow,_T("S\x61i s\xF3t \x63huy\xEAn m\xF4n"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true);
	xls.SetCellText(nCol+21,nRow+1,_T("SL"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(nCol+22,nRow+1,_T("%"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedColumns(nCol+21,nRow+2,2);
	xls.SetCellText(nCol+21,nRow+2,_T("15"),FMT_TEXT|FMT_CENTER,true);

	xls.SetCellMergedRows(nCol+23,nRow,3);
	xls.SetCellText(nCol+23,nRow,_T("Ghi \x63h\xFA"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true);

	


	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	int nIndex=1;	
	nRow=9;

	while(!rs.IsEOF())
	{	

		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("transplace")));
		xls.SetCellText(nCol+1,nRow,tmpStr,FMT_TEXT);
		
		tmpStr.Format(_T("%s"),rs.GetValue(_T("total")));
		xls.SetCellText(nCol+2,nRow,tmpStr,FMT_INTEGER|FMT_CENTER);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("bhyt")));
		xls.SetCellText(nCol+3,nRow,tmpStr,FMT_INTEGER|FMT_CENTER);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("dv")));
		xls.SetCellText(nCol+4,nRow,tmpStr,FMT_INTEGER|FMT_CENTER);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("ht1")));
		xls.SetCellText(nCol+5,nRow,tmpStr,FMT_INTEGER|FMT_CENTER);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("ht2")));
		xls.SetCellText(nCol+6,nRow,tmpStr,FMT_INTEGER|FMT_CENTER);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("ht3")));
		xls.SetCellText(nCol+7,nRow,tmpStr,FMT_INTEGER|FMT_CENTER);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("ht4")));
		xls.SetCellText(nCol+8,nRow,tmpStr,FMT_INTEGER|FMT_CENTER);

		tmpStr.Format(_T("%s"),rs.GetValue(_T("total")));
		xls.SetCellText(nCol+9,nRow,tmpStr,FMT_INTEGER|FMT_CENTER);

		//_msg(_T("%s"),tmpStr);
		nRow++;

		rs.MoveNext();
	}	
	EndWaitCursor();
	xls.Save(_T("Exports\\SRMThuthapthongtinchuyenvien.xls"));
}