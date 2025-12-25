#include "stdafx.h"
#include "FMInsUnpaidPatientFoodList.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsUnpaidPatientFoodList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsUnpaidPatientFoodList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsUnpaidPatientFoodList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsUnpaidPatientFoodList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsUnpaidPatientFoodList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsUnpaidPatientFoodList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsUnpaidPatientFoodList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsUnpaidPatientFoodList *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsUnpaidPatientFoodList* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CFMInsUnpaidPatientFoodList *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CFMInsUnpaidPatientFoodList *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CFMInsUnpaidPatientFoodList *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMInsUnpaidPatientFoodList *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CFMInsUnpaidPatientFoodList *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMInsUnpaidPatientFoodList *pVw = (CFMInsUnpaidPatientFoodList *)pWnd;
	pVw->OnPrintPreviewSelect();
}
static void _OnDischargedSelectFnc(CWnd *pWnd)
{
	 ((CFMInsUnpaidPatientFoodList*)pWnd)->OnDischargedSelect();
}
static void _OnOnly2016SelectFnc(CWnd *pWnd)
{
	 ((CFMInsUnpaidPatientFoodList*)pWnd)->OnOnly2016Select();
}

static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsUnpaidPatientFoodList *pVw = (CFMInsUnpaidPatientFoodList *)pWnd;
	pVw->OnExportSelect();
} 
CFMInsUnpaidPatientFoodList::CFMInsUnpaidPatientFoodList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMInsUnpaidPatientFoodList::~CFMInsUnpaidPatientFoodList(){
}
//void CFMInsUnpaidPatientFoodList::OnCreateComponents(){
//	m_wndUnpaidPatientFoodList.Create(this, _T("Unpaid Patient Food List"), 5, 5, 490, 90);
//	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
//	m_wndFromDate.Create(this,95, 30, 245, 55);
//	m_wndFromDate.EnableWindow(FALSE);
//	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
//	m_wndToDate.Create(this,335, 30, 485, 55); 
//	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 90, 85);
//	m_wndDept.Create(this,95, 60, 485, 85); 
//	m_wndPrintPreview.Create(this, _T("&Print Preview"), 300, 95, 410, 120);
//	m_wndExport.Create(this, _T("&Export"), 415, 95, 490, 120);
//	m_wndOutPatient.Create(this, _T("OutPatient"), 5, 95, 90, 120);
//	m_wndInPatient.Create(this, _T("InPatient"), 95, 95, 175, 120);
//	m_wndAll.Create(this, _T("All"), 180, 95, 260, 120);
void CFMInsUnpaidPatientFoodList::OnCreateComponents()
{
	m_wndUnpaidPatientFoodList.Create(this, _T("Unpaid Patient Food List"), 5, 5, 490, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 90, 85);
	m_wndDept.Create(this,95, 60, 485, 85); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 300, 95, 410, 120);
	m_wndExport.Create(this, _T("&Export"), 415, 95, 490, 120);
	m_wndOutPatient.Create(this, _T("OutPatient"), 5, 95, 90, 120);
	m_wndInPatient.Create(this, _T("InPatient"), 95, 95, 175, 120);
	m_wndAll.Create(this, _T("All"), 180, 95, 260, 120);
	m_wndDischarged.Create(this, _T("Discharged"), 5, 126, 90, 151);
	m_wndOnly2016.Create(this, _T("Only2016"), 95, 126, 175, 151);
}

void CFMInsUnpaidPatientFoodList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(1024);
	m_wndFromDate.EnableWindow(FALSE);
	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CFMInsUnpaidPatientFoodList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	m_wndDischarged.SetEvent(WE_CLICK, _OnDischargedSelectFnc);
	m_wndOnly2016.SetEvent(WE_CLICK, _OnOnly2016SelectFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szToDate = pMF->GetSysDate();
	m_szFromDate = _T("2015/02/4 00:00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CFMInsUnpaidPatientFoodList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAllPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Check(pDX, m_wndDischarged.GetDlgCtrlID(), m_bDischarged);
	DDX_Check(pDX, m_wndOnly2016.GetDlgCtrlID(), m_bOnly2016);
}
void CFMInsUnpaidPatientFoodList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_nAllPatient = 0;
	m_nOutPatient = 1;
	m_nInPatient  = 1;
	m_bDischarged=FALSE;
	m_bOnly2016=FALSE;
}
int CFMInsUnpaidPatientFoodList::SetMode(int nMode){
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
/*void CFMInsUnpaidPatientFoodList::OnFromDateChange(){
	
} */
/*void CFMInsUnpaidPatientFoodList::OnFromDateSetfocus(){
	
} */
/*void CFMInsUnpaidPatientFoodList::OnFromDateKillfocus(){
	
} */
int CFMInsUnpaidPatientFoodList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMInsUnpaidPatientFoodList::OnToDateChange(){
	
} */
/*void CFMInsUnpaidPatientFoodList::OnToDateSetfocus(){
	
} */
/*void CFMInsUnpaidPatientFoodList::OnToDateKillfocus(){
	
} */
int CFMInsUnpaidPatientFoodList::OnToDateCheckValue(){
	return 0;
} 
void CFMInsUnpaidPatientFoodList::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsUnpaidPatientFoodList::OnDeptSelendok(){
	 
}
/*void CFMInsUnpaidPatientFoodList::OnDeptSetfocus(){
	
}*/
/*void CFMInsUnpaidPatientFoodList::OnDeptKillfocus(){
	
}*/
long CFMInsUnpaidPatientFoodList::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id = '%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type IN ('DT', 'KB') %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMInsUnpaidPatientFoodList::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsUnpaidPatientFoodList::OnDischargedSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
	void CFMInsUnpaidPatientFoodList::OnOnly2016Select()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

void CFMInsUnpaidPatientFoodList::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	long double nTotal[2], nGroupTotal1[2];
	for (int i = 0; i < 2; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_DANHSACHANBENHNHANBAOHIEM-CHUATHANHTOAN.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);

	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);		
		tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("khoa"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1[1] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng Nh\xF3m:"));
				tmpStr.Format(_T("%f"), nGroupTotal1[0]);
				rptGroup->SetValue(_T("s9"), tmpStr);
				tmpStr.Format(_T("%f"), nGroupTotal1[1]);
				rptGroup->SetValue(_T("s10"), tmpStr);
				for (int i = 0; i < 2; i++)
				{
					nTotal[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewLev1);
			szOldLev1 = szNewLev1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("ho_ten")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("so_hs")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("so_ba")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("khoa")));
			rs.GetValue(_T("ngay_vao"), tmpStr);
			rptDetail->SetValue(_T("6"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("ngay_baoan"), tmpStr);
			rptDetail->SetValue(_T("7"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("ngay_ra"), tmpStr);
			rptDetail->SetValue(_T("8"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("so_bua"), nTmp);
			nGroupTotal1[0]+= nTmp;
			rptDetail->SetValue(_T("9"), double2str(nTmp));
			rs.GetValue(_T("tong_tien"), nTmp);
			nGroupTotal1[1]+= nTmp;
			rptDetail->SetValue(_T("10"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	if (nGroupTotal1[1] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng Nh\xF3m:"));
		tmpStr.Format(_T("%f"), nGroupTotal1[0]);
		rptGroup->SetValue(_T("s9"), tmpStr);
		tmpStr.Format(_T("%f"), nGroupTotal1[1]);
		rptGroup->SetValue(_T("s10"), tmpStr);
		for (int i = 0; i < 2; i++)
		{
			nTotal[i]+= nGroupTotal1[i];
		}
	}
	if (nTotal[1] > 0)
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng \x43\x1ED9ng:"));
			tmpStr.Format(_T("%f"), nTotal[0]);
			rptGroup->SetValue(_T("s9"), tmpStr);
			tmpStr.Format(_T("%f"), nTotal[1]);
			rptGroup->SetValue(_T("s10"), tmpStr);
		}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void CFMInsUnpaidPatientFoodList::OnExportSelect(){	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CString szOldLev1, szNewLev1;
	double nTotal[2], nGroupTotal1[2], nTmp = 0;
	for (int i = 0; i < 2; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 20);	xls.SetColumnWidth(2, 10);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 14);	xls.SetColumnWidth(6, 14);	xls.SetColumnWidth(7, 14);	xls.SetColumnWidth(8, 12);	xls.SetColumnWidth(9, 14);	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 2, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT | FMT_CENTER, true, 10);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 5, _T("\x42\x1EC6NH NH\xC2N: \x42\x1EA2O HI\x1EC2M Y T\x1EBE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 0, _T("M\x1EABu \x62i\x1EC3u \x31\x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x102N \x43\x1EE6\x41 \x42\x1EC6NH NH\xC2N \x43H\x1AF\x41 TH\x41NH TO\xC1N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 6, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 6, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("S\x1ED1 \x42\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 0, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 1, _T("\x110\x1ED9\x63 l\x1EADp - T\x1EF1 \x64o - H\x1EA1nh ph\xFA\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 6, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 6, _T("Ng\xE0y v\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 6, _T("\x44uy\x1EC7t \x62\xE1o \x103n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 6, _T("Ng\xE0y r\x61 vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 6, _T("T\x1ED5ng s\x1ED1 \x62\x1EEF\x61 \x103n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 6, _T("T\x1ED5ng s\x1ED1 ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 1);	xls.SetMerge(3, 3, 0, 9);	xls.SetMerge(4, 4, 0, 9);	xls.SetMerge(5, 5, 0, 9);	xls.SetMerge(0, 0, 6, 9);	xls.SetMerge(1, 1, 6, 9);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 7;	nCol = 0;	while(!rs.IsEOF()){
		rs.GetValue(_T("khoa"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1[1] > 0)
			{
				xls.SetCellMergedColumns(nCol, nRow, 8);
				xls.SetCellText(nCol, nRow, _T("T\x1ED5ng nh\xF3m: "), FMT_TEXT | FMT_RIGHT, true);
				xls.SetCellText(nCol+8, nRow, double2str(nGroupTotal1[0]), FMT_NUMBER1, true);
				xls.SetCellText(nCol+9, nRow, double2str(nGroupTotal1[1]), FMT_NUMBER1, true);
				for (int i = 0; i < 2; i++)
				{
					nTotal[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 10);
			xls.SetCellText(nCol, nRow, szNewLev1, FMT_TEXT, true);
			szOldLev1 = szNewLev1;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("ho_ten"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("so_hs"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("so_ba"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ngay_vao"), tmpStr);
		xls.SetCellText(nCol+5, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("ngay_baoan"), tmpStr);
		xls.SetCellText(nCol+6, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("ngay_ra"), tmpStr);
		xls.SetCellText(nCol+7, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("so_bua"), nTmp);
		nGroupTotal1[0]+= nTmp;
		xls.SetCellText(nCol+8, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("tong_tien"), nTmp);
		nGroupTotal1[1]+= nTmp;
		xls.SetCellText(nCol+9, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal1[1] > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 8);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng nh\xF3m: "), FMT_TEXT | FMT_RIGHT, true);
		xls.SetCellText(nCol+8, nRow, double2str(nGroupTotal1[0]), FMT_NUMBER1, true);
		xls.SetCellText(nCol+9, nRow, double2str(nGroupTotal1[1]), FMT_NUMBER1, true);
		for (int i = 0; i < 2; i++)
		{
			nTotal[i]+= nGroupTotal1[i];
		}
		nRow++;
	}

	if (nTotal[1] > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 8);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng: "), FMT_TEXT | FMT_RIGHT, true);
		xls.SetCellText(nCol+8, nRow, double2str(nTotal[0]), FMT_NUMBER1, true);
		xls.SetCellText(nCol+9, nRow, double2str(nTotal[1]), FMT_NUMBER1, true);
	}	nRow++;	nRow++;	nRow++;	tmpStr = pMF->GetSysDate();
	tmpStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT, true);	nRow++;	xls.SetCellText(nCol+1, nRow, _T("NG\x1AF\x1EDCI L\x1EACP \x42\x1EA2NG"), FMT_TEXT, true);	xls.SetCellText(nCol+6, nRow, _T("TR\x1AF\x1EDENG PH\xD2NG T\xC0I \x43H\xCDNH"), FMT_TEXT, true);	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHANBENHNHANCHUATHANHTOAN_BH.xls"));
} 

CString CFMInsUnpaidPatientFoodList::GetQueryString(){
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND hd_object         NOT IN ('7','1','3','8')") \
		_T(" AND hfo_approvedate BETWEEN TO_TIMESTAMP('2015/02/4 00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND (NVL(hfo_payment, 'N') <> 'P'") \
		_T(" OR (htrf_accepteddate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND NVL(hfo_payment, 'N') = 'P'))"), m_szToDate, m_szToDate);
	if (m_nOutPatient == 0)
		szWhere.AppendFormat(_T(" AND hfo_depttype = 'KB'"));
	else if (m_nOutPatient == 1)
		szWhere.AppendFormat(_T(" AND hfo_depttype = 'DT'"));
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfo_deptid = '%s'"), m_szDeptKey);
	if (m_bDischarged)
		szWhere.AppendFormat(_T(" AND hcr_status = 'T'"));
	if (m_bOnly2016)
		szWhere.AppendFormat(_T(" AND hd_docno>=16000000"));
	szSQL.Format(_T(" SELECT") \
		_T(" so_hs,") \
		_T(" ho_ten,") \
		_T(" so_ba,") \
		_T(" khoa,") \
		_T(" ngay_vao,") \
		_T(" ngay_ra,") \
		_T(" ngay_baoan,") \
		_T(" SUM(so_bua - so_buaC) AS so_bua,") \
		_T(" SUM((so_bua - so_buaC)*tong_tien) AS tong_tien") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT hfo_docno AS so_hs,") \
		_T("   Get_patientname(hfo_docno) AS ho_ten,") \
		_T("   htr_recordno AS so_ba,") \
		_T("   hfo_deptid AS khoa,") \
		_T("   htr_admitdate AS ngay_vao,") \
		_T("   htr_dischargedate AS ngay_ra,") \
		_T("   hfo_approvedate AS ngay_baoan,") \
		_T("   CASE WHEN hfe_refstatus = 'C' THEN hfol_qtyissue ELSE 0 END AS so_buaC,") \
		_T("   hfol_qtyissue AS so_bua,") \
		_T("   hfol_unitprice AS tong_tien") \
		_T(" FROM hms_feefood") \
		_T(" LEFT JOIN hms_feefoodline") \
		_T(" ON (hfo_orderid = hfol_orderid )") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hd_docno = hfo_docno)") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON ( hfo_docno = htr_docno") \
		_T(" AND hfo_refidx = htr_idx )") \
		_T(" LEFT JOIN hms_clinical_record ON (hd_docno=hcr_docno)") \
		_T(" WHERE hfo_orderstatus = 'A' AND hfe_refstatus <> 'C' AND hfol_status <> 'C' %s") \
		_T(" ) tbl") \
		_T(" WHERE so_bua - so_buaC > 0") \
		_T(" GROUP BY so_hs,") \
		_T(" ho_ten,") \
		_T(" so_ba,") \
		_T(" khoa,") \
		_T(" ngay_vao,") \
		_T(" ngay_ra,") \
		_T(" ngay_baoan") \
		_T(" ORDER BY khoa,") \
		_T(" so_hs"), szWhere);
	return szSQL;
}