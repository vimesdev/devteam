#include "stdafx.h"
#include "TMPatientListUseBracelet.h"
#include "HMSMainFrame.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMPatientListUseBracelet *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMPatientListUseBracelet *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMPatientListUseBracelet *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientListUseBracelet *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMPatientListUseBracelet *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMPatientListUseBracelet *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMPatientListUseBracelet *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientListUseBracelet *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientListUseBracelet* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CTMPatientListUseBracelet *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CTMPatientListUseBracelet *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CTMPatientListUseBracelet *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientListUseBracelet *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CTMPatientListUseBracelet *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMPatientListUseBracelet *pVw = (CTMPatientListUseBracelet *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMPatientListUseBracelet *pVw = (CTMPatientListUseBracelet *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddTMPatientListUseBraceletFnc(CWnd *pWnd){
	 return ((CTMPatientListUseBracelet*)pWnd)->OnAddTMPatientListUseBracelet();
} 
static int _OnEditTMPatientListUseBraceletFnc(CWnd *pWnd){
	 return ((CTMPatientListUseBracelet*)pWnd)->OnEditTMPatientListUseBracelet();
} 
static int _OnDeleteTMPatientListUseBraceletFnc(CWnd *pWnd){
	 return ((CTMPatientListUseBracelet*)pWnd)->OnDeleteTMPatientListUseBracelet();
} 
static int _OnSaveTMPatientListUseBraceletFnc(CWnd *pWnd){
	 return ((CTMPatientListUseBracelet*)pWnd)->OnSaveTMPatientListUseBracelet();
} 
static int _OnCancelTMPatientListUseBraceletFnc(CWnd *pWnd){
	 return ((CTMPatientListUseBracelet*)pWnd)->OnCancelTMPatientListUseBracelet();
} 
CTMPatientListUseBracelet::CTMPatientListUseBracelet(CWnd* pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMPatientListUseBracelet::~CTMPatientListUseBracelet(){
}
void CTMPatientListUseBracelet::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 555, 91);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 31, 90, 56);
	m_wndFromDate.Create(this,95, 31, 275, 56); 
	m_wndToDateLabel.Create(this, _T("To Date"), 280, 31, 360, 56);
	m_wndToDate.Create(this,365, 31, 550, 56); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 90, 85);
	m_wndDepartment.Create(this,95, 60, 550, 85); 

	m_wndExport.Create(this, _T("&Export"), 480, 95, 555, 120);
	m_wndPrint.Create(this, _T("Print"), 395, 95, 475, 120);

}
void CTMPatientListUseBracelet::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

}
void CTMPatientListUseBracelet::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	
	SetMode(VM_EDIT);

}
void CTMPatientListUseBracelet::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CTMPatientListUseBracelet::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	}

}
void CTMPatientListUseBracelet::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMPatientListUseBracelet::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMPatientListUseBracelet::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CTMPatientListUseBracelet::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0,1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1,-1);
			m_szFromDate = pMF->GetSysDate();
			m_szFromDate += _T("00:00");
			m_szToDate = pMF->GetSysDate();
			m_szToDate += _T("23:59");
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
/*void CTMPatientListUseBracelet::OnFromDateChange(){
	
} */
/*void CTMPatientListUseBracelet::OnFromDateSetfocus(){
	
} */
/*void CTMPatientListUseBracelet::OnFromDateKillfocus(){
	
} */
int CTMPatientListUseBracelet::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMPatientListUseBracelet::OnToDateChange(){
	
} */
/*void CTMPatientListUseBracelet::OnToDateSetfocus(){
	
} */
/*void CTMPatientListUseBracelet::OnToDateKillfocus(){
	
} */
int CTMPatientListUseBracelet::OnToDateCheckValue(){
	return 0;
} 
void CTMPatientListUseBracelet::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientListUseBracelet::OnDepartmentSelendok(){
	 
}
/*void CTMPatientListUseBracelet::OnDepartmentSetfocus(){
	
}*/
/*void CTMPatientListUseBracelet::OnDepartmentKillfocus(){
	
}*/
long CTMPatientListUseBracelet::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMPatientListUseBracelet::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMPatientListUseBracelet::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 11);	xls.SetColumnWidth(2, 17);	xls.SetColumnWidth(3, 13);	xls.SetColumnWidth(4, 14);	xls.SetColumnWidth(5, 16);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TWQ\x110 \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	if(!m_szDepartmentKey.IsEmpty())		szTemp.Format(_T("KHOA %s"), m_szDepartmentKey);	xls.SetCellText(0, 2, szTemp, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);		xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N S\x1EEC \x44\x1EE4NG V\xD2NG \x110\x45O T\x41Y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);		szTemp.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));	xls.SetCellText(0, 4, szTemp, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 5, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 5, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 5, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 5, _T("S\x1ED1 v\xF2ng \x111\x65o t\x61y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 5, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 1);	xls.SetMerge(3, 3, 0, 5);	xls.SetMerge(4, 4, 0, 5);	if(!m_szDepartmentKey.IsEmpty())	{		szWhere.Format(_T(" AND htr_deptid = '%s'"), m_szDepartmentKey);	}	szSQL.Format(_T(" SELECT") \
		_T(" htr_docno,") \
		_T(" pname,") \
		_T(" obj,") \
		_T(" SUM(htr_brace_no) AS htr_brace_no,") \
		_T(" LISTAGG(CAST(htr_brace_note AS VARCHAR2(1024)), ', ') WITHIN GROUP (ORDER BY htr_docno) AS htr_brace_note") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT htr_docno,") \
		_T("   Get_patientname(htr_docno) AS pname,") \
		_T("   Get_objectname(hd_object)  AS obj,") \
		_T("   CASE WHEN htr_brace_no IS NULL OR htr_brace_no = 1 THEN 1 ELSE htr_brace_no END AS htr_brace_no,") \
		_T("   htr_brace_note") \
		_T(" FROM hms_treatment_record") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON( hd_docno = htr_docno )") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON( hp_patientno = hd_patientno )") \
		_T(" WHERE htr_status<> 'A'") \
		_T(" AND htr_admitdate BETWEEN to_timestamp('%s','yyyy/mm/dd hh24:mi:ss')") \
		_T(" AND to_timestamp('%s','yyyy/mm/dd hh24:mi:ss')") \
		_T(" %s") \
		_T(" ) tbl") \
		_T(" GROUP BY") \
		_T(" htr_docno,") \
		_T(" pname,") \
		_T(" obj") \
		_T(" ORDER BY htr_docno"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);	rs.ExecSQL(szSQL);	if(rs.IsEOF())	{		MessageBox(_T("No Data"), 0, MB_ICONERROR);		return;	}	nRow = 7;	nCol = 0;	int nCount = 1;	while(!rs.IsEOF()){		tmpStr.Format(_T("%d"), nCount++);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("htr_docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("obj"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("htr_brace_no"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("htr_brace_note"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\DS BN su dung vong deo tay.xls"));
} 
void CTMPatientListUseBracelet::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, szOldGroup, szNewGroup, szOldDept, szNewDept, szDepts, szField, szWhere;
	CReportSection *rptHeader = NULL, *rptDetail = NULL, * rptGroup = NULL, * rptGroupFooter = NULL, * rptFooter = NULL;

	if (!rpt.Init(_T("Reports\\HMS\\TM_DANHSACHBNDUNGVONGDEOTAY.RPT")))
		return;

	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	if(!m_szDepartmentKey.IsEmpty())
	{
		tmpStr.Format(_T("KHOA %s"),pMF->GetCurrentDepartmentID());
		rpt.GetReportHeader()->SetValue(_T("DEPT"), tmpStr);
	}
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("FromToDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("FromToDate"), tmpStr);

	if(!m_szDepartmentKey.IsEmpty())	{		szWhere.Format(_T(" AND htr_deptid = '%s'"), m_szDepartmentKey);	}
	szSQL.Format(_T(" SELECT") \
		_T(" htr_docno,") \
		_T(" pname,") \
		_T(" obj,") \
		_T(" SUM(htr_brace_no) AS htr_brace_no,") \
		_T(" LISTAGG(CAST(htr_brace_note AS VARCHAR2(1024)), ', ') WITHIN GROUP (ORDER BY htr_docno) AS htr_brace_note") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT htr_docno,") \
		_T("   Get_patientname(htr_docno) AS pname,") \
		_T("   Get_objectname(hd_object)  AS obj,") \
		_T("   CASE WHEN htr_brace_no IS NULL OR htr_brace_no = 1 THEN 1 ELSE htr_brace_no END AS htr_brace_no,") \
		_T("   htr_brace_note") \
		_T(" FROM hms_treatment_record") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON( hd_docno = htr_docno )") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON( hp_patientno = hd_patientno )") \
		_T(" WHERE htr_status<> 'A'") \
		_T(" AND htr_admitdate BETWEEN to_timestamp('%s','yyyy/mm/dd hh24:mi:ss')") \
		_T(" AND to_timestamp('%s','yyyy/mm/dd hh24:mi:ss')") \
		_T(" %s") \
		_T(" ) tbl") \
		_T(" GROUP BY") \
		_T(" htr_docno,") \
		_T(" pname,") \
		_T(" obj") \
		_T(" ORDER BY htr_docno"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);
	
	rs.ExecSQL(szSQL);
	
	int nIdx = 1;
	int nGroup = 0, nTotal = 0;

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("htr_deptid"), szNewDept);
		if (szNewDept != szOldDept && !szNewDept.IsEmpty())
		{
			if(nGroup > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("T\x1ED5ng \x63\x1ED9ng: (Kho\x61 %s)"), szNewDept);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				rptDetail->SetValue(_T("s5"), nGroup);
				nTotal += nGroup;
				nGroup = 0;
			}

			szOldDept = szNewDept;
		}


		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIdx++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("htr_docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("obj"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("htr_brace_no"), tmpStr);
		nGroup +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("htr_brace_note"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		rs.MoveNext();
	}
	if(nGroup > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng \x63\x1ED9ng: (Kho\x61 %s)"), szNewDept);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		rptDetail->SetValue(_T("s5"), nGroup);
		nTotal += nGroup;
		nGroup = 0;
	}
	if(nTotal > 0)
	{
		rptFooter = rpt.AddDetail(rpt.GetReportFooter());
		rptFooter->SetValue(_T("s7"), nTotal);
	}
	EndWaitCursor();
	rpt.PrintPreview();
} 
int CTMPatientListUseBracelet::OnAddTMPatientListUseBracelet(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMPatientListUseBracelet::OnEditTMPatientListUseBracelet(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMPatientListUseBracelet::OnDeleteTMPatientListUseBracelet(){
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
 		OnCancelTMPatientListUseBracelet();
 	}
	return 0;
}
int CTMPatientListUseBracelet::OnSaveTMPatientListUseBracelet(){
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
 		//OnTMPatientListUseBraceletListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMPatientListUseBracelet::OnCancelTMPatientListUseBracelet(){
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
int CTMPatientListUseBracelet::OnTMPatientListUseBraceletListLoadData(){
	return 0;
}
