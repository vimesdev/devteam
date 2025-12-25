#include "RPM_DailyShift.h"
#include "MainFrm.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "RPM_DailyShiftEdition.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRPM_DailyShift *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShift *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShift *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShift *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPM_DailyShift *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShift *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShift *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShift *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CRPM_DailyShift *pVw = (CRPM_DailyShift *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPM_DailyShift *pVw = (CRPM_DailyShift *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPM_DailyShift *pVw = (CRPM_DailyShift *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnUpdateDataSelectFnc(CWnd *pWnd){
	CRPM_DailyShift *pVw = (CRPM_DailyShift *)pWnd;
	pVw->OnUpdateDataSelect();
} 
static void _OnLockSelectFnc(CWnd *pWnd){
	CRPM_DailyShift *pVw = (CRPM_DailyShift *)pWnd;
	pVw->OnLockSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CRPM_DailyShift*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CRPM_DailyShift*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CRPM_DailyShift*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CRPM_DailyShift*)pWnd)->OnListDeleteItem();
} 

static int _OnAddRPM_DailyShiftFnc(CWnd *pWnd){
	 return ((CRPM_DailyShift*)pWnd)->OnAddRPM_DailyShift();
} 
static int _OnEditRPM_DailyShiftFnc(CWnd *pWnd){
	 return ((CRPM_DailyShift*)pWnd)->OnEditRPM_DailyShift();
} 
static int _OnDeleteRPM_DailyShiftFnc(CWnd *pWnd){
	 return ((CRPM_DailyShift*)pWnd)->OnDeleteRPM_DailyShift();
} 
static int _OnSaveRPM_DailyShiftFnc(CWnd *pWnd){
	 return ((CRPM_DailyShift*)pWnd)->OnSaveRPM_DailyShift();
} 
static int _OnCancelRPM_DailyShiftFnc(CWnd *pWnd){
	 return ((CRPM_DailyShift*)pWnd)->OnCancelRPM_DailyShift();
}
static void _OnDutyDoctorSelendokFnc(CWnd *pWnd){
	return ((CRPM_DailyShift*)pWnd)->OnDutyDoctorSelendok();
}
static long _OnDutyDoctorLoadDataFnc(CWnd *pWnd){
	return ((CRPM_DailyShift*)pWnd)->OnDutyDoctorLoadDta();
}
static int _OnIntimeOptCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShift*)pWnd)->OnIntimeOptCheckValue();
}
static int _OnOvertimeOptCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShift*)pWnd)->OnOvertimeOptCheckValue();
}
static int _OnTotalOptCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShift*)pWnd)->OnTotalOptCheckValue();
}
CRPM_DailyShift::CRPM_DailyShift(){
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPM_DailyShift::~CRPM_DailyShift(){
}
void CRPM_DailyShift::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 3, 6, 1012, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 430, 30, 520, 55);
	m_wndPrint.Create(this, _T("&Print"), 525, 30, 615, 55);
	m_wndExport.Create(this, _T("&Export"), 620, 30, 710, 55);
	m_wndUpdateData.Create(this, _T("Update Data"), 715, 30, 795, 55);
	m_wndLock.Create(this, _T("Lock"), 800, 30, 880, 55);
	m_wndList.Create(this,2, 64, 1011, 614); 

}
void CRPM_DailyShift::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Dept"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Duty Doctor"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Previous Qty"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(4, _T("Overtime Increase"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Overtime Decrease"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(6, _T("Current Qty"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("Intime OptQty"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(8, _T("Overtime OptQty"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(9, _T("Total OptQty"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(10, _T("Note"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(11, _T(""), CFMT_TEXT, 0);
	//m_wndList.SetEditLabel(2, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(2, GUI_COMBOBOX);
	m_wndList.SetEditLabel(3, GUI_NUMBERCTRL);
	m_wndList.SetEditLabel(4, GUI_NUMBERCTRL);
	m_wndList.SetEditLabel(5, GUI_NUMBERCTRL);
	m_wndList.SetEditLabel(6, GUI_NUMBERCTRL);
	m_wndList.SetEditLabel(7, GUI_NUMBERCTRL);
	m_wndList.SetEditLabel(8, GUI_NUMBERCTRL);
	m_wndList.SetEditLabel(9, GUI_NUMBERCTRL);
	m_wndList.SetEditLabel(10, GUI_TEXTCTRL);

}
void CRPM_DailyShift::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndUpdateData.SetEvent(WE_CLICK, _OnUpdateDataSelectFnc);
	m_wndLock.SetEvent(WE_CLICK, _OnLockSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddRPM_DailyShiftFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditRPM_DailyShiftFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteRPM_DailyShiftFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveRPM_DailyShiftFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelRPM_DailyShiftFnc, 0, 'T', VK_CONTROL);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);
	CGuiNumberCtrl *pCtrl = NULL;
	CGuiComboBox *pCtrlBox = NULL;
	CString tmpStr;
	//Combo Duty Doctor
	pCtrlBox = (CGuiComboBox*) m_wndList.GetEditControl(2);
	if (pCtrlBox)
	{
		pCtrlBox->InsertColumn(0, _T("ID"), FMT_TEXT, 50);
		pCtrlBox->InsertColumn(1, _T("Name"), FMT_TEXT, 150);
		//Set event
		pCtrlBox->SetEvent(WE_LOADDATA, _OnDutyDoctorLoadDataFnc);
		pCtrlBox->SetEvent(WE_SELENDOK, _OnDutyDoctorSelendokFnc);
	}
	pCtrl = (CGuiNumberCtrl*) m_wndList.GetEditControl(7);
	if (pCtrl)
	{
		pCtrl->SetCheckValue(true);
		pCtrl->SetEvent(WE_CHECKVALUE, _OnIntimeOptCheckValueFnc);
	}
	pCtrl = (CGuiNumberCtrl*) m_wndList.GetEditControl(8);
	if (pCtrl)
	{
		pCtrl->SetCheckValue(true);
		pCtrl->SetEvent(WE_CHECKVALUE, _OnOvertimeOptCheckValueFnc);
	}
	pCtrl = (CGuiNumberCtrl*) m_wndList.GetEditControl(9);
	if (pCtrl)
	{
		pCtrl->SetCheckValue(true);
		pCtrl->SetEvent(WE_CHECKVALUE, _OnTotalOptCheckValueFnc);
	}
}
void CRPM_DailyShift::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
}
void CRPM_DailyShift::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPM_DailyShift::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CRPM_DailyShift::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CRPM_DailyShift::SetMode(int nMode){
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
/*void CRPM_DailyShift::OnFromDateChange(){
	
} */
/*void CRPM_DailyShift::OnFromDateSetfocus(){
	
} */
/*void CRPM_DailyShift::OnFromDateKillfocus(){
	
} */
int CRPM_DailyShift::OnFromDateCheckValue(){
	return 0;
} 
/*void CRPM_DailyShift::OnToDateChange(){
	
} */
/*void CRPM_DailyShift::OnToDateSetfocus(){
	
} */
/*void CRPM_DailyShift::OnToDateKillfocus(){
	
} */
int CRPM_DailyShift::OnToDateCheckValue(){
	return 0;
} 
void CRPM_DailyShift::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CRPM_DailyShift::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos;
	long double nTotal[7];
	for (int i = 0; i < 7; i++)
	{
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HMS_BAOCAOTRUCNGOAI1.RPT");
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
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		//Group Seperation
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("dept_id")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("duty_doctor")));
			rs.GetValue(_T("previous_qty"), nTmp);
			nTotal[0]+= nTmp;
			rptDetail->SetValue(_T("4"), double2str(nTmp));
			rs.GetValue(_T("overtime_increase"), nTmp);
			nTotal[1]+= nTmp;
			rptDetail->SetValue(_T("5"), double2str(nTmp));
			rs.GetValue(_T("overtime_decrease"), nTmp);
			nTotal[2]+= nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));
			rs.GetValue(_T("current_qty"), nTmp);
			nTotal[3]+= nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
			rs.GetValue(_T("intime_optqty"), nTmp);
			nTotal[4]+= nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
			rs.GetValue(_T("overtime_optqty"), nTmp);
			nTotal[5]+= nTmp;
			rptDetail->SetValue(_T("9"), double2str(nTmp));
			rs.GetValue(_T("total_optqty"), nTmp);
			nTotal[6]+= nTmp;
			rptDetail->SetValue(_T("10"), double2str(nTmp));
			rptDetail->SetValue(_T("11"), rs.GetValue(_T("note")));
		}
		rs.MoveNext();
	}
	tmpStr = pMF->GetSysDate();
	/*szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);*/
	rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
	for (int i = 0; i < 7; i++)
	{
		tmpStr.Format(_T("s%d"), i+4);
		rptGroup->SetValue(tmpStr, ToString(nTotal[i]));
	}
	rpt.PrintPreview();
	szReportName = _T("Reports\\HMS\\HMS_BAOCAOTRUCNGOAI2.RPT");
	if (!rpt.Init(szReportName))
		return;
	rpt.PrintPreview();
	
} 
void CRPM_DailyShift::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CStringArray arrCol;
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
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 7);
	xls.SetCellMergedColumns(0, 3, 7);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x42\xC1O \x43\xC1O TR\x1EF0\x43 H\xC0NG NG\xC0Y");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Kho\x61"));
	arrCol.Add(_T("\x42\xE1\x63 s\x1EF9 tr\x1EF1\x63"));
	arrCol.Add(_T("S\x1ED1 \x42N \x63\x169"));
	arrCol.Add(_T("T\x103ng ngo\xE0i gi\x1EDD"));
	arrCol.Add(_T("Gi\x1EA3m ngo\xE0i gi\x1EDD"));
	arrCol.Add(_T("S\x1ED1 \x42N hi\x1EC7n t\x1EA1i"));
	arrCol.Add(_T("PT trong gi\x1EDD"));
	arrCol.Add(_T("PT ngo\xE0i gi\x1EDD"));
	arrCol.Add(_T("T\x1ED5ng PT"));
	arrCol.Add(_T("Ghi \x63h\xFA"));
	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(i, 4, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("dept_id")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("")), FMT_TEXT);
		rs.GetValue(_T("previous_qty"), nTmp);
		xls.SetCellText(3, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("overtime_increase"), nTmp);
		xls.SetCellText(4, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("overtime_decrease"), nTmp);
		xls.SetCellText(5, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("current_qty"), nTmp);
		xls.SetCellText(6, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("intime_optqty"), nTmp);
		xls.SetCellText(7, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("overtime_optqty"), nTmp);
		xls.SetCellText(8, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("total_optqty"), nTmp);
		xls.SetCellText(9, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Bao cao truc hang ngay.xls"));
	
} 

void CRPM_DailyShift::OnUpdateDataSelect(){
	OnUpdateDataRPM_DailyShift();
}

void CRPM_DailyShift::OnLockSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//Check permission
	CString szUser = pMF->GetCurrentUser();
	if (szUser != _T("admin") && szUser != _T("lhsong"))
	{
		AfxMessageBox(_T("Permission Denied."));
		return;
	}
	UpdateData(true);
	OnUpdateDataSelect();
	CString szSQL;
	szSQL.Format(_T(" UPDATE r_dailyshift SET rds_locked = 'Y', rds_lockedby = '%s', rds_lockeddate = cast_string2timestamp('%s') ") \
				 _T(" WHERE rds_date = cast_string2date('%s')")
				 , pMF->GetCurrentUser(), pMF->GetSysDateTime(), m_szFromDate.Left(10));
	int nRes = pMF->ExecSQL(szSQL);
	if (nRes < 0)
		_msg(_T("%s"), szSQL);
}

void CRPM_DailyShift::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	CRPM_DailyShiftEdition dlg(this);
	dlg.m_szDept = m_dailydata.szDept;
	dlg.m_szDutyDoctor = m_dailydata.szDoctor;
	dlg.m_nPreviousQty = m_dailydata.nPrevious_qty;
	dlg.m_nOvertimeInc = m_dailydata.nOvertime_inc;
	dlg.m_nOvertimeDec = m_dailydata.nOvertime_dec;
	dlg.m_nCurrentQty = m_dailydata.nCurrent_qty;
	dlg.m_nIntimeOpt = m_dailydata.Intime_opt;
	dlg.m_nOvertimeOpt = m_dailydata.Overtime_opt;
	dlg.m_nTotalOpt = m_dailydata.Total_opt;
	dlg.m_szNote = m_dailydata.szNote;
	if (dlg.DoModal() == IDOK)
	{
		//m_dailydata.szDoctor = dlg.m_szDutyDoctor;
		//m_dailydata.nPrevious_qty = dlg.m_nPreviousQty;
		//m_dailydata.nOvertime_inc = dlg.m_nOvertimeInc;
		//m_dailydata.nOvertime_dec = dlg.m_nOvertimeDec;
		//m_dailydata.nCurrent_qty = dlg.m_nCurrentQty;
		//m_dailydata.Intime_opt = dlg.m_nIntimeOpt;
		//m_dailydata.Overtime_opt = dlg.m_nOvertimeOpt;
		//m_dailydata.Total_opt = dlg.m_nTotalOpt;
		//m_dailydata.szNote = dlg.m_szNote;
		m_wndList.SetItemText(nSel, 2, dlg.m_szDutyDoctor);
		m_wndList.SetItemText(nSel, 3, ToString(dlg.m_nPreviousQty));
		m_wndList.SetItemText(nSel, 4, ToString(dlg.m_nOvertimeInc));
		m_wndList.SetItemText(nSel, 5, ToString(dlg.m_nOvertimeDec));
		m_wndList.SetItemText(nSel, 6, ToString(dlg.m_nCurrentQty));
		m_wndList.SetItemText(nSel, 7, ToString(dlg.m_nIntimeOpt));
		m_wndList.SetItemText(nSel, 8, ToString(dlg.m_nOvertimeOpt));
		m_wndList.SetItemText(nSel, 9, ToString(dlg.m_nTotalOpt));
		m_wndList.SetItemText(nSel, 10, dlg.m_szNote);
	}
} 
void CRPM_DailyShift::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_dailydata.szDept = m_wndList.GetItemText(nNewItem, 1);
	m_dailydata.szDoctor = m_wndList.GetItemText(nNewItem, 2);
	m_dailydata.nPrevious_qty = ToInt(m_wndList.GetItemText(nNewItem, 3));
	m_dailydata.nOvertime_inc = ToInt(m_wndList.GetItemText(nNewItem, 4));
	m_dailydata.nOvertime_dec = ToInt(m_wndList.GetItemText(nNewItem, 5));
	m_dailydata.nCurrent_qty = ToInt(m_wndList.GetItemText(nNewItem, 6));
	m_dailydata.Intime_opt = ToInt(m_wndList.GetItemText(nNewItem, 7));
	m_dailydata.Overtime_opt = ToInt(m_wndList.GetItemText(nNewItem, 8));
	m_dailydata.Total_opt = ToInt(m_wndList.GetItemText(nNewItem, 9));
	m_dailydata.szNote = m_wndList.GetItemText(nNewItem, 10);
} 
int CRPM_DailyShift::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CRPM_DailyShift::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIdx = 1;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			int2str(nIdx++), 
			rs.GetValue(_T("dept_id")), 
			rs.GetValue(_T("duty_doctor")), 
			rs.GetValue(_T("Previous_Qty")), 
			rs.GetValue(_T("Overtime_Increase")), 
			rs.GetValue(_T("Overtime_Decrease")), 
			rs.GetValue(_T("Current_Qty")), 
			rs.GetValue(_T("Intime_OptQty")), 
			rs.GetValue(_T("Overtime_OptQty")), 
			rs.GetValue(_T("Total_OptQty")), 
			rs.GetValue(_T("")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CRPM_DailyShift::OnAddRPM_DailyShift(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPM_DailyShift::OnEditRPM_DailyShift(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPM_DailyShift::OnDeleteRPM_DailyShift(){
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
 		OnCancelRPM_DailyShift();
 	}
	return 0;
}
int CRPM_DailyShift::OnSaveRPM_DailyShift(){
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
 		//OnRPM_DailyShiftListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPM_DailyShift::OnCancelRPM_DailyShift(){
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

int CRPM_DailyShift::OnUpdateDataRPM_DailyShift(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL;
	int nRes = 0, nCount = 0;
	nCount = m_wndList.GetItemCount();
	if (nCount <= 0)
	{
		return -1;
	}
	if (IsDataLocked())
	{
		AfxMessageBox(_T("Data Locked!"));
		return -1;
	}
	szSQL.Format(_T("DELETE FROM r_dailyshift WHERE rds_date = cast_string2date('%s') "), m_szFromDate.Left(10));
	pMF->ExecSQL(szSQL);
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		FillStructData(i);
		szSQL.Format(_T("INSERT INTO r_dailyshift(rds_date, rds_dept_id, rds_duty_doctor, rds_previous_qty, rds_overtime_increase") \
					 _T(", rds_overtime_decrease, rds_current_qty, rds_intime_optqty, rds_overtime_optqty, rds_total_optqty") \
					 _T(", rds_note) VALUES (cast_string2date('%s'), '%s', '%s', %d, %d, %d, %d, %d, %d, %d, '%s')")
					 , m_szFromDate.Left(10), m_dailydata.szDept, m_dailydata.szDoctor, m_dailydata.nPrevious_qty, m_dailydata.nOvertime_inc
					 , m_dailydata.nOvertime_dec, m_dailydata.nCurrent_qty, m_dailydata.Intime_opt, m_dailydata.Overtime_opt, m_dailydata.Total_opt
					 , m_dailydata.szNote);
		nRes = pMF->ExecSQL(szSQL);
		if (nRes < 0)
		{
			_msg(_T("%s"), szSQL);
			return -1;
		}
	}
	return nCount;
}

int CRPM_DailyShift::OnRPM_DailyShiftListLoadData(){
	return 0;
}

CString CRPM_DailyShift::GetQueryString(){
	CString szSQL, szSubSQL, szWhere;
	CString szDate = m_szFromDate.Left(10);
	bool bIsLocked = false;
	bIsLocked = IsDataLocked();
	if (bIsLocked)
	{
		szSQL.Format(_T(" SELECT rds_dept_id dept_id, ") \
					_T("		rds_duty_doctor duty_doctor, ") \
					_T("        rds_previous_qty previous_qty, ") \
					_T("        rds_overtime_increase overtime_increase, ") \
					_T("        rds_overtime_decrease overtime_decrease, ") \
					_T("        rds_current_qty current_qty, ") \
					_T("        rds_intime_optqty intime_optqty, ") \
					_T("        rds_overtime_optqty overtime_optqty, ") \
					_T("		rds_total_optqty total_optqty,") \
					_T("		rds_note note") \
					_T(" FROM r_dailyshift ") \
					_T(" WHERE rds_date = cast_string2date('%s') AND rds_locked = 'Y'") \
					_T(" ORDER  BY dept_id "), szDate);
		return szSQL;
	}
	//So Bn cu
	szWhere.Format(_T(" ( htr_status = 'I' AND htr_admitdate < Cast_string2timestamp('%s') ) ") \
				   _T(" OR ( htr_status = 'T' AND htr_admitdate < cast_string2timestamp('%s') AND htr_dischargedate > cast_string2timestamp('%s'))")
				   , m_szFromDate, m_szFromDate, m_szFromDate);
	szSubSQL.Format(_T("SELECT htr_deptid dept_id, ") \
	_T("                Count(DISTINCT htr_docno) previous_qty, ") \
	_T("                0 overtime_increase, ") \
	_T("                0 overtime_decrease, ") \
	_T("                0 current_qty, ") \
	_T("                0 intime_optqty, ") \
	_T("                0 overtime_optqty ") \
	_T("         FROM   hms_treatment_record ") \
	_T("         WHERE  %s ") \
	_T("         GROUP  BY htr_deptid "), szWhere);
	//Tang ngoai gio
	szWhere.Format(_T(" AND ( htr_admitdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s 07:30') ") \
				   _T(" OR htr_admitdate BETWEEN Cast_string2timestamp('%s 16:00') AND Cast_string2timestamp('%s') )")
				   , m_szFromDate, szDate, szDate, m_szToDate);
	szSubSQL.AppendFormat(_T("UNION ALL ") \
	_T("         SELECT htr_deptid dept_id, ") \
	_T("                0, ") \
	_T("                Count(htr_docno) overtime_increase, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                0 ") \
	_T("         FROM   hms_treatment_record ") \
	_T("         WHERE  htr_status <> 'A' %s ") \
	_T("         GROUP  BY htr_deptid "), szWhere);
	//Giam ngoai gio
	szWhere.Format(_T(" AND ( htr_dischargedate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s 07:30') ") \
				   _T(" OR htr_dischargedate BETWEEN Cast_string2timestamp('%s 16:00') AND Cast_string2timestamp('%s') )")
				   , m_szFromDate, szDate, szDate, m_szToDate);
	szSubSQL.AppendFormat(_T("UNION ALL ") \
	_T("         SELECT htr_tdeptid dept_id, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                Count(htr_docno) overtime_decrease, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                0 ") \
	_T("         FROM   hms_treatment_record ") \
	_T("         WHERE  htr_status = 'T' %s ") \
	_T("         GROUP  BY htr_tdeptid "), szWhere);
	//So Bn hien tai
	szWhere.Format(_T(" AND htr_admitdate < Cast_string2timestamp('%s') ) ") \
				   _T(" OR ( htr_status = 'T' AND htr_admitdate < Cast_string2timestamp('%s') AND htr_dischargedate >= Cast_string2timestamp('%s') )")
				   , m_szToDate, m_szToDate, m_szToDate);
	szSubSQL.AppendFormat(_T("UNION ALL ") \
	_T("         SELECT htr_deptid dept_id, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                Count(DISTINCT htr_docno) current_qty, ") \
	_T("                0, ") \
	_T("                0 ") \
	_T("         FROM   hms_treatment_record ") \
	_T("         WHERE  ( htr_status = 'I' %s ") \
	_T("         GROUP  BY htr_deptid "), szWhere);
	//Pt trong gio
	szWhere.Format(_T(" AND ho_performdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s')")
					, m_szFromDate, m_szToDate);
	szSubSQL.AppendFormat(_T("UNION ALL ") \
	_T("         SELECT ho_deptid dept_id, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                Count(ho_docno) intime_optqty, ") \
	_T("                0 ") \
	_T("         FROM   hms_operation ") \
	_T("         WHERE  ho_status = 'T' AND Substr(ho_itemid, 1, 2) = 'B4' %s ") \
	_T("         GROUP  BY ho_deptid "), szWhere);
	//PT ngoai gio
	szWhere.Format(_T(" AND ( ho_performdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s 07:30') ") \
				   _T(" OR ho_performdate BETWEEN Cast_string2timestamp('%s 16:00') AND Cast_string2timestamp('%s') )")
				   , m_szFromDate, szDate, szDate, m_szToDate);
	szSubSQL.AppendFormat(_T("UNION ALL ") \
	_T("         SELECT ho_deptid dept_id, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                0, ") \
	_T("                Count(ho_docno) overtime_optqty ") \
	_T("         FROM   hms_operation ") \
	_T("         WHERE  ho_status = 'T' AND Substr(ho_itemid, 1, 2) = 'B4' %s ") \
	_T("         GROUP  BY ho_deptid"), szWhere);

	szSQL.Format(_T(" SELECT dept_id, ") \
	_T("        SUM(previous_qty) previous_qty, ") \
	_T("        SUM(overtime_increase) overtime_increase, ") \
	_T("        SUM(overtime_decrease) overtime_decrease, ") \
	_T("        SUM(current_qty) current_qty, ") \
	_T("        SUM(intime_optqty) intime_optqty, ") \
	_T("        SUM(overtime_optqty) overtime_optqty, ") \
	_T("		SUM(intime_optqty+overtime_optqty) total_optqty") \
	_T(" FROM   (%s) ") \
	_T(" WHERE dept_id IS NOT NULL") \
	_T(" GROUP  BY dept_id ") \
	_T(" ORDER  BY dept_id "), szSubSQL);
_fmsg(_T("%s"), szSQL);
	return szSQL;

}

void CRPM_DailyShift::FillStructData(int nIndex){
	m_dailydata.szDept = m_wndList.GetItemText(nIndex, 1);
	m_dailydata.szDoctor = m_wndList.GetItemText(nIndex, 2);
	m_dailydata.nPrevious_qty = ToInt(m_wndList.GetItemText(nIndex, 3));
	m_dailydata.nOvertime_inc = ToInt(m_wndList.GetItemText(nIndex, 4));
	m_dailydata.nOvertime_dec = ToInt(m_wndList.GetItemText(nIndex, 5));
	m_dailydata.nCurrent_qty = ToInt(m_wndList.GetItemText(nIndex, 6));
	m_dailydata.Intime_opt = ToInt(m_wndList.GetItemText(nIndex, 7));
	m_dailydata.Overtime_opt = ToInt(m_wndList.GetItemText(nIndex, 8));
	m_dailydata.Total_opt = ToInt(m_wndList.GetItemText(nIndex, 9));
	m_dailydata.szNote = m_wndList.GetItemText(nIndex, 10);
}

BOOL CRPM_DailyShift::IsDataLocked(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT count(*) cnt FROM r_dailyshift WHERE rds_date = cast_string2date('%s') AND rds_locked = 'Y'"), m_szFromDate.Left(10));
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
		return true;
	else
		return false;
}

void CRPM_DailyShift::OnDutyDoctorSelendok(){
	int nSel = 0;
	CGuiListCtrl *pListCtrl = (CGuiListCtrl*) (GetFocus()->GetParent()->GetParent());
	nSel = pListCtrl->GetCurSel();
	_debug(_T("%d"), nSel);
	CGuiComboBox *pCtrlBox = (CGuiComboBox*) (GetFocus()->GetParent());
	CString tmpStr;
	tmpStr = pCtrlBox->GetCurrent(0);
	pListCtrl->SetItemText(nSel, 11, tmpStr);
}

long CRPM_DailyShift::OnDutyDoctorLoadDta(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szKey;
	int nSel = 0;
	
	szWhere.Empty();
	CGuiListCtrl *pListCtrl = (CGuiListCtrl*) (GetFocus()->GetParent()->GetParent());
	nSel = pListCtrl->GetCurSel();
	szKey = pListCtrl->GetItemText(nSel, 2);
	CGuiComboBox *pCtrlBox = (CGuiComboBox*) (GetFocus()->GetParent());
	if(pCtrlBox->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and su_userid='%s' "), szKey);
	};
	pCtrlBox->DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid ") \
		_T("FROM sys_user ") \
		_T("WHERE su_isactive='Y' %s ORDER BY su_userid "), szWhere);
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		pCtrlBox->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		
		rs.MoveNext();
	}
	return nCount;
}

int CRPM_DailyShift::OnIntimeOptCheckValue(){
	int nIntimeOpt = 0, nOvertimeOpt = 0, nTotalOpt = 0, nSel = 0;
	CString tmpStr;
	//m_wndList.SetFocus();
	CGuiListCtrl *pListCtrl = (CGuiListCtrl*) (GetFocus()->GetParent());
	nSel = pListCtrl->GetCurSel();
	CGuiNumberCtrl *pCtrl = (CGuiNumberCtrl *) GetFocus();
	if (pCtrl)
	{
		pCtrl->GetWindowText(tmpStr);
	}
	nIntimeOpt = ToInt(tmpStr);
	nOvertimeOpt = ToInt(pListCtrl->GetItemText(nSel, 8)); 
	nTotalOpt = ToInt(pListCtrl->GetItemText(nSel, 9));
	if (nTotalOpt > 0 && nTotalOpt != (nIntimeOpt + nOvertimeOpt))
	{
		return -1;
	}
	//_debug(_T("%d|%d"), nTotalOpt, nIntimeOpt+nOvertimeOpt);
	return 0;
}

int CRPM_DailyShift::OnOvertimeOptCheckValue(){
	int nIntimeOpt = 0, nOvertimeOpt = 0, nTotalOpt = 0, nSel = 0;
	CString tmpStr;
	CGuiListCtrl *pListCtrl = (CGuiListCtrl*) (GetFocus()->GetParent());
	nSel = pListCtrl->GetCurSel();
	CGuiNumberCtrl *pCtrl = (CGuiNumberCtrl*) GetFocus();
	if (pCtrl)
		pCtrl->GetWindowText(tmpStr);	
	nIntimeOpt = ToInt(pListCtrl->GetItemText(nSel, 7));
	nOvertimeOpt = ToInt(tmpStr);
	nTotalOpt = ToInt(pListCtrl->GetItemText(nSel, 9));
	if (nTotalOpt > 0 && nTotalOpt != (nIntimeOpt + nOvertimeOpt))
	{
		return -1;
	}
	//_debug(_T("%d|%d"), nTotalOpt, nIntimeOpt+nOvertimeOpt);
	return 0;
}

int CRPM_DailyShift::OnTotalOptCheckValue(){
	int nIntimeOpt = 0, nOvertimeOpt = 0, nTotalOpt = 0, nSel = 0;
	CString tmpStr;
	CGuiListCtrl *pListCtrl = (CGuiListCtrl*) (GetFocus()->GetParent());
	nSel = pListCtrl->GetCurSel();
	//_debug(_T("sel:%d"), nSel);
	CGuiNumberCtrl *pCtrl = (CGuiNumberCtrl*) GetFocus();
	if (pCtrl)
		pCtrl->GetWindowText(tmpStr);
	nIntimeOpt = ToInt(pListCtrl->GetItemText(nSel, 7));
	nOvertimeOpt = ToInt(pListCtrl->GetItemText(nSel, 8));
	nTotalOpt = ToInt(tmpStr);
	//_debug(_T("%d|%d"), nTotalOpt, nIntimeOpt+nOvertimeOpt);
	if (nTotalOpt > 0 && nTotalOpt != (nIntimeOpt + nOvertimeOpt))
	{
		return -1;
	}
	//_debug(_T("%d|%d"), nTotalOpt, nIntimeOpt+nOvertimeOpt);
	return 0;
}