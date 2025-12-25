#include "stdafx.h"
#include "EMCTMRIStat.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMCTMRIStat *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMCTMRIStat *)pWnd)->OnToDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMCTMRIStat* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CEMCTMRIStat *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnDoctorAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMCTMRIStat* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CEMCTMRIStat *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CEMCTMRIStat *)pWnd)->OnObjectAddNew();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CEMCTMRIStat *)pWnd)->OnGroupLoadData();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMCTMRIStat *pVw = (CEMCTMRIStat *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMCTMRIStat *pVw = (CEMCTMRIStat *)pWnd;
	pVw->OnExportSelect();
} 
CEMCTMRIStat::CEMCTMRIStat(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMCTMRIStat::~CEMCTMRIStat(){
}
void CEMCTMRIStat::OnCreateComponents(){
	m_wndCTMRIStat.Create(this, _T("CTMRI Stat"), 5, 5, 430, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 29, 215, 54); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 60, 90, 85);
	m_wndDoctor.Create(this,95, 60, 425, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.Create(this,95, 90, 425, 115); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 120, 90, 145);
	m_wndGroup.Create(this,95, 120, 425, 145); 
	m_wndPrint.Create(this, _T("&Print"), 265, 155, 345, 180);
	m_wndExport.Create(this, _T("&Export"), 350, 155, 430, 180);

}
void CEMCTMRIStat::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CEMCTMRIStat::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CEMCTMRIStat::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);

}
void CEMCTMRIStat::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDoctorKey.Empty();
	m_szObjectKey.Empty();
	m_szGroupKey.Empty();

}
int CEMCTMRIStat::SetMode(int nMode){
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
/*void CEMCTMRIStat::OnFromDateChange(){
	
} */
/*void CEMCTMRIStat::OnFromDateSetfocus(){
	
} */
/*void CEMCTMRIStat::OnFromDateKillfocus(){
	
} */
int CEMCTMRIStat::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMCTMRIStat::OnToDateChange(){
	
} */
/*void CEMCTMRIStat::OnToDateSetfocus(){
	
} */
/*void CEMCTMRIStat::OnToDateKillfocus(){
	
} */
int CEMCTMRIStat::OnToDateCheckValue(){
	return 0;
} 
void CEMCTMRIStat::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMCTMRIStat::OnDoctorSelendok(){
	 
}
/*void CEMCTMRIStat::OnDoctorSetfocus(){
	
}*/
/*void CEMCTMRIStat::OnDoctorKillfocus(){
	
}*/
long CEMCTMRIStat::OnDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" and su_userid='%s' "), m_szDoctorKey);
	}
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT su_userid as id, su_name as name FROM sys_user WHERE 1=1 AND (su_deptid = 'C1.3' OR su_hms_xdept = 'C1.3') %s") \
				 _T(" ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMCTMRIStat::OnDoctorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMCTMRIStat::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMCTMRIStat::OnObjectSelendok(){
	 
}
/*void CEMCTMRIStat::OnObjectSetfocus(){
	
}*/
/*void CEMCTMRIStat::OnObjectKillfocus(){
	
}*/
long CEMCTMRIStat::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
	}
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ho_id as id, ho_desc as name FROM hms_object WHERE 1=1 %s ") \
				 _T(" ORDER BY cast(ho_id as integer) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMCTMRIStat::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CEMCTMRIStat::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE 1=1 AND hfg_id IN ('B2200', 'B2300') %s ") \
				 _T(" ORDER BY hfg_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CEMCTMRIStat::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	double nQty[13];
	int nIdx = 1;
	CString szSQL, tmpStr, szReportName, szDate, tmpStr2;
	long double nTotal = 0;
	for (int i = 0; i < 13; i++)
		nQty[i] = 0;
	szReportName = _T("Reports\\HMS\\HE_DANHSACHBENHNHANCHUPCTC13.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rs.GetValue(_T("order_date"), tmpStr);
			rptDetail->SetValue(_T("2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doctor")));
			rs.GetValue(_T("I_qty"), nTmp);
			nQty[0] += nTmp;
			rptDetail->SetValue(_T("4"), double2str(nTmp));
			rs.GetValue(_T("II_qty"), nTmp);
			nQty[1] += nTmp;
			rptDetail->SetValue(_T("5"), double2str(nTmp));
			rs.GetValue(_T("III_qty"), nTmp);
			nQty[2] += nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));
			rs.GetValue(_T("IV_qty"), nTmp);
			nQty[3] += nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
			rs.GetValue(_T("V_qty"), nTmp);
			nQty[4] += nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
			rs.GetValue(_T("VII_qty"), nTmp);
			nQty[5] += nTmp;
			rptDetail->SetValue(_T("9"), double2str(nTmp));
			rs.GetValue(_T("VIII_qty"), nTmp);
			nQty[6] += nTmp;
			rptDetail->SetValue(_T("10"), double2str(nTmp));
			rs.GetValue(_T("IX_qty"), nTmp);
			nQty[7] += nTmp;
			rptDetail->SetValue(_T("11"), double2str(nTmp));
			rs.GetValue(_T("X_qty"), nTmp);
			nQty[8] += nTmp;
			rptDetail->SetValue(_T("12"), double2str(nTmp));
			rs.GetValue(_T("XI_qty"), nTmp);
			nQty[9] += nTmp;
			rptDetail->SetValue(_T("13"), double2str(nTmp));
			rs.GetValue(_T("XII_qty"), nTmp);
			nQty[10] += nTmp;
			rptDetail->SetValue(_T("14"), double2str(nTmp));
			rs.GetValue(_T("admittance_qty"), nTmp);
			nQty[11] += nTmp;
			rptDetail->SetValue(_T("15"), double2str(nTmp));
			rs.GetValue(_T("home_qty"), nTmp);
			nQty[12] += nTmp;
			rptDetail->SetValue(_T("16"), double2str(nTmp));
		}
		rs.MoveNext();
	}

	for (int i = 0; i < 13; i++)
	{
		tmpStr.Format(_T("s%d"), i+ 4);
		tmpStr2.Format(_T("%f"), nQty[i]);
		rpt.GetReportFooter()->SetValue(tmpStr, tmpStr2);
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
	
} 
void CEMCTMRIStat::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(2, 25);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 15);
	xls.SetCellMergedColumns(0, 3, 15);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("Th\x1ED1ng k\xEA \x44S \x42N \x63h\x1EE5p \x43T-MRI");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("Ng\xE0y"), 4098, true);
	xls.SetCellText(2, 4, _T("\x42\xE1\x63 s\x1EF9"), 4098, true);
	xls.SetCellText(3, 4, _T("Qu\xE2n"), 4098, true);
	xls.SetCellText(4, 4, _T("\x42H Qu\xE2n"), 4098, true);
	xls.SetCellText(5, 4, _T("\x43h\xEDnh s\xE1\x63h"), 4098, true);
	xls.SetCellText(6, 4, _T("\x42HYT kh\xE1\x63"), 4098, true);
	xls.SetCellText(7, 4, _T("\x42H TNSQ"), 4098, true);
	xls.SetCellText(8, 4, _T("\x44\x1ECB\x63h v\x1EE5"), 4098, true);
	xls.SetCellText(9, 4, _T("\x42\x1EA1n"), 4098, true);
	xls.SetCellText(10, 4, _T("T\x45 < \x36 tu\x1ED5i"), 4098, true);
	xls.SetCellText(11, 4, _T("\x42H Q\x110"), 4098, true);
	xls.SetCellText(12, 4, _T("\x42H QN"), 4098, true);
	xls.SetCellText(13, 4, _T("\x42HYT (n\x1EE3 th\x1EBB)"), 4098, true);
	xls.SetCellText(14, 4, _T("V\xE0o vi\x1EC7n"), 4098, true);
	xls.SetCellText(15, 4, _T("V\x1EC1 nh\xE0"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		tmpStr = CDate::Convert(rs.GetValue(_T("order_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("doctor")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("I_qty")), FMT_NUMBER1);
		xls.SetCellText(4, nRow, rs.GetValue(_T("II_qty")), FMT_NUMBER1);
		xls.SetCellText(5, nRow, rs.GetValue(_T("III_qty")), FMT_NUMBER1);
		xls.SetCellText(6, nRow, rs.GetValue(_T("IV_qty")), FMT_NUMBER1);
		xls.SetCellText(7, nRow, rs.GetValue(_T("V_qty")), FMT_NUMBER1);
		xls.SetCellText(8, nRow, rs.GetValue(_T("VII_qty")), FMT_NUMBER1);
		xls.SetCellText(9, nRow, rs.GetValue(_T("VIII_qty")), FMT_NUMBER1);
		xls.SetCellText(10, nRow, rs.GetValue(_T("IX_qty")), FMT_NUMBER1);
		xls.SetCellText(11, nRow, rs.GetValue(_T("X_qty")), FMT_NUMBER1);
		xls.SetCellText(12, nRow, rs.GetValue(_T("XI_qty")), FMT_NUMBER1);
		xls.SetCellText(13, nRow, rs.GetValue(_T("XII_qty")), FMT_NUMBER1);
		xls.SetCellText(14, nRow, rs.GetValue(_T("admittance_qty")), FMT_NUMBER1);
		xls.SetCellText(15, nRow, rs.GetValue(_T("home_qty")), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Thong ke danh sach chup CT-MRI C13.xls"));
	
} 

CString CEMCTMRIStat::GetQueryString(){
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND hpc_orderdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_doctor = '%s'"), m_szDoctorKey);
	if (!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_object = '%s'"), m_szObjectKey);
	if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_groupid = '%s'"), m_szGroupKey);
	szSQL.Format(_T(" SELECT get_username(doctor) doctor, order_date,") \
				_T("        SUM(I_qty) I_qty, ") \
				_T("        SUM(II_qty) II_qty, ") \
				_T("        SUM(III_qty) III_qty, ") \
				_T("        SUM(IV_qty) IV_qty, ") \
				_T("        SUM(V_qty) V_qty, ") \
				_T("        SUM(VI_qty) VI_qty, ") \
				_T("        SUM(VII_qty) VII_qty, ") \
				_T("        SUM(VIII_qty) VIII_qty, ") \
				_T("        SUM(IX_qty) IX_qty, ") \
				_T("        SUM(X_qty) X_qty, ") \
				_T("        SUM(XI_qty) XI_qty, ") \
				_T("        SUM(XII_qty) XII_qty") \
				_T(" FROM   (SELECT    hpc_doctor doctor, trunc(hpc_orderdate) order_date,") \
				_T("                   CASE WHEN hpc_object = 1 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END I_qty, ") \
				_T("                   CASE WHEN hpc_object = 2 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END II_qty, ") \
				_T("                   CASE WHEN hpc_object = 3 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END III_qty, ") \
				_T("                   CASE WHEN hpc_object = 4 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END IV_qty, ") \
				_T("                   CASE WHEN hpc_object = 5 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END V_qty, ") \
				_T("                   CASE WHEN hpc_object = 6 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END VI_qty, ") \
				_T("                   CASE WHEN hpc_object = 7 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END VII_qty, ") \
				_T("                   CASE WHEN hpc_object = 8 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END VIII_qty, ") \
				_T("                   CASE WHEN hpc_object = 9 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END IX_qty, ") \
				_T("                   CASE WHEN hpc_object = 10 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END X_qty, ") \
				_T("                   CASE WHEN hpc_object = 11 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END XI_qty, ") \
				_T("                   CASE WHEN hpc_object = 12 THEN 1 ") \
				_T("                   ELSE 0 ") \
				_T("                   END XII_qty ") \
				_T("         FROM      hms_pacsorder ") \
				_T("         LEFT JOIN hms_pacsorderline ON ( hpc_orderid = hpcl_orderid ) ") \
				_T("         LEFT JOIN hms_doc ON ( hd_docno = hpc_docno ) ") \
				_T("         WHERE     hpc_groupid IN ( 'B2200', 'B2300' ) AND hpc_deptid = 'C1.3' AND hpc_status <> 'C' AND hpcl_hasfee = 'Y' %s)") \
				_T("		 GROUP BY doctor, order_date") \
				_T("		 ORDER BY order_date, doctor"), szWhere);

	return szSQL;
}