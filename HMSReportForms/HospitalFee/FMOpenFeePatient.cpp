#include "stdafx.h"
#include "FMOpenFeePatient.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMOpenFeePatient *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMOpenFeePatient *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMOpenFeePatient *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMOpenFeePatient *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMOpenFeePatient *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMOpenFeePatient *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMOpenFeePatient *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMOpenFeePatient *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMOpenFeePatient* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFMOpenFeePatient *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFMOpenFeePatient *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFMOpenFeePatient *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFMOpenFeePatient *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFMOpenFeePatient *)pWnd)->OnObjectAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMOpenFeePatient *pVw = (CFMOpenFeePatient *)pWnd;
	pVw->OnExportSelect();
} 
CFMOpenFeePatient::CFMOpenFeePatient(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMOpenFeePatient::~CFMOpenFeePatient(){
}
void CFMOpenFeePatient::OnCreateComponents(){
	m_wndOpenFeePatient.Create(this, _T("Open Fee Patient"), 5, 5, 440, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 220, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 435, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 60, 90, 85);
	m_wndObject.Create(this,95, 60, 435, 85); 
	m_wndExport.Create(this, _T("&Export"), 361, 95, 441, 120);

}
void CFMOpenFeePatient::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFMOpenFeePatient::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(0);
}
void CFMOpenFeePatient::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

}
void CFMOpenFeePatient::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();

}
int CFMOpenFeePatient::SetMode(int nMode){
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
/*void CFMOpenFeePatient::OnFromDateChange(){
	
} */
/*void CFMOpenFeePatient::OnFromDateSetfocus(){
	
} */
/*void CFMOpenFeePatient::OnFromDateKillfocus(){
	
} */
int CFMOpenFeePatient::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMOpenFeePatient::OnToDateChange(){
	
} */
/*void CFMOpenFeePatient::OnToDateSetfocus(){
	
} */
/*void CFMOpenFeePatient::OnToDateKillfocus(){
	
} */
int CFMOpenFeePatient::OnToDateCheckValue(){
	return 0;
} 
void CFMOpenFeePatient::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMOpenFeePatient::OnObjectSelendok(){
	 
}
/*void CFMOpenFeePatient::OnObjectSetfocus(){
	
}*/
/*void CFMOpenFeePatient::OnObjectKillfocus(){
	
}*/
long CFMOpenFeePatient::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return pMF->LoadObjectList(&m_wndObject, m_szObjectKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFMOpenFeePatient::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMOpenFeePatient::OnExportSelect(){
	UpdateData();
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString tmpStr;
	int nRow = 0, nIdx = 1;
	if (OnCheckBeforeExport(&xls, &rs) < 0) return;
	nRow = 5;
	xls.SetWorksheet(0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER);
	while (!rs.IsEOF()){
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT);
		for (int i = 0; i < rs.GetFieldCount(); i++)
			xls.SetCellText(i+1, nRow, rs.GetValue(rs.GetFieldName(i)));
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\FM_BNconphichuathu.xls"));
} 
int CFMOpenFeePatient::OnCheckBeforeExport(CExcel* xls, CRecord* rs){
	BeginWaitCursor();
	rs->ExecSQL(GetQueryString());
	EndWaitCursor();
	if (rs->IsEOF()){
		AfxMessageBox(_T("No Data."));
		return -1;
	}
	if (!xls->Load(_T("Exports\\FM_Mau_BNconphichuathu.xls"))){
		AfxMessageBox(_T("Exports\\FM_Mau_BNconphichuathu.xls"));
		return -1;
	}
	return 0;
}
CString CFMOpenFeePatient::GetQueryString(){
	CString szSQL, szWhere, szObjectFilter;
	szWhere.Format(_T("AND Decode(huong_dt, 'C', vao_ngt, 'D', vao_ngt, vao_nt) ") \
		_T(" BETWEEN To_timestamp ('%s', 'yyyy/mm/dd hh24:mi:ss') AND To_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	if (!m_szObjectKey.IsEmpty())
		szObjectFilter.AppendFormat(_T(" AND hfe_object = %s"), m_szObjectKey);
	szSQL.Format(_T("WITH tbl_patient") \
	_T("     AS (SELECT    DISTINCT hd_docno so_ho_so,") \
	_T("                            Min(he_examdate) over(PARTITION BY hd_docno) vao_ngt,") \
	_T("                            htr_admitdate vao_nt,") \
	_T("                            hd_suggestion huong_dt,") \
	_T("                            hd_isreq yeu_cau,") \
	_T("                            hd_object doi_tuong,") \
	_T("                            htr_recordno benh_an,") \
	_T("                            htr_dischargedate ra_nt,") \
	_T("                            hd_enddate ra_ngt") \
	_T("         FROM      hms_doc") \
	_T("         LEFT JOIN hms_exam ON ( hd_docno = he_docno )") \
	_T("         LEFT JOIN hms_treatment_record ON ( hd_docno = htr_docno AND htr_idx = 1 )),") \
	_T("     tbl_notpaid") \
	_T("     AS (SELECT tbl_patient.*,") \
	_T("                (SELECT SUM(hfe_amount) FROM   hms_fee_deposit d WHERE  d.hfe_docno = so_ho_so AND d.hfe_status = 'P') tam_gui,") \
	_T("                (SELECT SUM(CASE WHEN hfe_object = 7 THEN hfe_cost ELSE hfe_inspaid END) FROM   hms_fee ") \
	_T("				WHERE  hfe_status = 'O' AND hfe_category <> 'Y' AND hfe_docno = so_ho_so %s) tong_chi_phi") \
	_T("         FROM   tbl_patient") \
	_T("         WHERE  1=1 %s)") \
	_T(" SELECT Get_patientname(so_ho_so) ten,") \
	_T("       so_ho_so,") \
	_T("       benh_an,") \
	_T("       To_char(( CASE WHEN huong_dt NOT IN ( 'C', 'D' ) THEN vao_ngt ELSE vao_nt END ), 'dd/mm/yyyy hh24:mi:ss') ngay_vao,") \
	_T("       To_char(( CASE WHEN huong_dt NOT IN ( 'C', 'D' ) THEN ra_ngt ELSE ra_nt END ), 'dd/mm/yyyy hh24:mi:ss') ngay_ra,") \
	_T("       tam_gui,") \
	_T("       tong_chi_phi") \
	_T(" FROM   tbl_notpaid ") \
	_T(" WHERE  tong_chi_phi > 0"), szObjectFilter, szWhere);


	return szSQL;
}