#include "StatisticOutPatientListCTMRI.h"
#include "MainFrm.h"
#include "ReportDocument.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStatisticOutPatientListCTMRI* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CStatisticOutPatientListCTMRI *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CStatisticOutPatientListCTMRI *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CStatisticOutPatientListCTMRI *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStatisticOutPatientListCTMRI* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CStatisticOutPatientListCTMRI *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI *)pWnd)->OnObjectAddNew();
}*/
static void _OnSearchSelectFnc(CWnd *pWnd){
	CStatisticOutPatientListCTMRI *pVw = (CStatisticOutPatientListCTMRI *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStatisticOutPatientListCTMRI*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStatisticOutPatientListCTMRI*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStatisticOutPatientListCTMRI*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStatisticOutPatientListCTMRI*)pWnd)->OnListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CStatisticOutPatientListCTMRI *pVw = (CStatisticOutPatientListCTMRI *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CStatisticOutPatientListCTMRI *pVw = (CStatisticOutPatientListCTMRI *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddStatisticOutPatientListCTMRIFnc(CWnd *pWnd){
	 return ((CStatisticOutPatientListCTMRI*)pWnd)->OnAddStatisticOutPatientListCTMRI();
} 
static int _OnEditStatisticOutPatientListCTMRIFnc(CWnd *pWnd){
	 return ((CStatisticOutPatientListCTMRI*)pWnd)->OnEditStatisticOutPatientListCTMRI();
} 
static int _OnDeleteStatisticOutPatientListCTMRIFnc(CWnd *pWnd){
	 return ((CStatisticOutPatientListCTMRI*)pWnd)->OnDeleteStatisticOutPatientListCTMRI();
} 
static int _OnSaveStatisticOutPatientListCTMRIFnc(CWnd *pWnd){
	 return ((CStatisticOutPatientListCTMRI*)pWnd)->OnSaveStatisticOutPatientListCTMRI();
} 
static int _OnCancelStatisticOutPatientListCTMRIFnc(CWnd *pWnd){
	 return ((CStatisticOutPatientListCTMRI*)pWnd)->OnCancelStatisticOutPatientListCTMRI();
} 
CStatisticOutPatientListCTMRI::CStatisticOutPatientListCTMRI(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CStatisticOutPatientListCTMRI::~CStatisticOutPatientListCTMRI(){
}
void CStatisticOutPatientListCTMRI::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 685, 90);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 105, 685, 555);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 315, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 320, 30, 400, 55);
	m_wndToDate.Create(this,405, 30, 625, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 61, 90, 86);
	m_wndDepartment.Create(this,94, 60, 314, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 320, 60, 400, 85);
	m_wndObject.Create(this,405, 60, 625, 85); 
	m_wndSearch.Create(this, _T("@"), 630, 60, 680, 85);
	m_wndList.Create(this,10, 130, 680, 550); 
	m_wndPrint.Create(this, _T("Print"), 515, 560, 595, 585);
	m_wndExport.Create(this, _T("Export"), 600, 560, 680, 585);

}
void CStatisticOutPatientListCTMRI::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Full Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Age"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("Object"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Department"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(7, _T("Order Date"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(8, _T("Perform Date"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(9, _T("Pre-Diagnostic"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(10, _T("Diagnostic"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(11, _T("Conclusion"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(12, _T("\x43h\x1EC9 \x111\x1ECBnh \x63h\x1EE5p \x63hi ti\x1EBFt"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(13, _T("\x42\xE1\x63 s\x1EF9 \x63h\x1EC9 \x111\x1ECBnh"), CFMT_TEXT, 80);

}
void CStatisticOutPatientListCTMRI::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
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
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	
	SetMode(VM_EDIT);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CStatisticOutPatientListCTMRI::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

}
void CStatisticOutPatientListCTMRI::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStatisticOutPatientListCTMRI::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CStatisticOutPatientListCTMRI::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();

}
int CStatisticOutPatientListCTMRI::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
void CStatisticOutPatientListCTMRI::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStatisticOutPatientListCTMRI::OnDepartmentSelendok(){
	 
}
/*void CStatisticOutPatientListCTMRI::OnDepartmentSetfocus(){
	
}*/
/*void CStatisticOutPatientListCTMRI::OnDepartmentKillfocus(){
	
}*/
long CStatisticOutPatientListCTMRI::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_id IN ('C1.1', 'C1.2', 'C1.3') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CStatisticOutPatientListCTMRI::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CStatisticOutPatientListCTMRI::OnFromDateChange(){
	
} */
/*void CStatisticOutPatientListCTMRI::OnFromDateSetfocus(){
	
} */
/*void CStatisticOutPatientListCTMRI::OnFromDateKillfocus(){
	
} */
int CStatisticOutPatientListCTMRI::OnFromDateCheckValue(){
	return 0;
} 
/*void CStatisticOutPatientListCTMRI::OnToDateChange(){
	
} */
/*void CStatisticOutPatientListCTMRI::OnToDateSetfocus(){
	
} */
/*void CStatisticOutPatientListCTMRI::OnToDateKillfocus(){
	
} */
int CStatisticOutPatientListCTMRI::OnToDateCheckValue(){
	return 0;
} 
void CStatisticOutPatientListCTMRI::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStatisticOutPatientListCTMRI::OnObjectSelendok(){
	 
}
/*void CStatisticOutPatientListCTMRI::OnObjectSetfocus(){
	
}*/
/*void CStatisticOutPatientListCTMRI::OnObjectKillfocus(){
	
}*/
long CStatisticOutPatientListCTMRI::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
	}
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CStatisticOutPatientListCTMRI::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CStatisticOutPatientListCTMRI::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CStatisticOutPatientListCTMRI::OnListDblClick(){
	
} 
void CStatisticOutPatientListCTMRI::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CStatisticOutPatientListCTMRI::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CStatisticOutPatientListCTMRI::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIndex;
	m_wndList.BeginLoad(); 
	BeginWaitCursor();

	int nCount = 0;
	int nIndex = 1;
	szSQL = GetQueryString();
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex);
		m_wndList.AddItems(
			szIndex,
			rs.GetValue(_T("hd_docno")),
			rs.GetValue(_T("fullname")),
			rs.GetValue(_T("age")),
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("obj")),
			rs.GetValue(_T("dept")),
			CDate::Convert(rs.GetValue(_T("hpc_orderdate")), yyyymmdd, ddmmyyyy),
			CDate::Convert(rs.GetValue(_T("hpc_performdate")), yyyymmdd, ddmmyyyy),
			rs.GetValue(_T("prediagnostic")),
			rs.GetValue(_T("diagnostic")),
			rs.GetValue(_T("conclusion")),
			rs.GetValue(_T("chidinhct")),
			rs.GetValue(_T("bschidinh")), NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndList.EndLoad(); 
	EndWaitCursor();
	return nCount;

}
void CStatisticOutPatientListCTMRI::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szSysDate;
	int nIndex = 1;
	int nCount = 0;
	
	szSQL = GetQueryString();

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if (!rpt.Init(_T("Reports/HMS/DANHSACHBENHNHANNGOAITRUCHUPCTMRI.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42V TW Q\x110 \x31\x30\x38"));
	//rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetCurrentDepartmentName());
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
	CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("hd_docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("fullname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		rs.GetValue(_T("obj"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("dept"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("hpc_orderdate"), tmpStr);
		szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("8"), szTemp);

		rs.GetValue(_T("hpc_performdate"), tmpStr);
		szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("9"), szTemp);

		rs.GetValue(_T("prediagnostic"), tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("conclusion"), tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		rs.GetValue(_T("chidinhct"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("bschidinh"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.MoveNext();
	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
} 
void CStatisticOutPatientListCTMRI::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szFromDate, szToDate, szDate;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	int nIndex = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 5);	xls.SetColumnWidth(1, 10);	xls.SetColumnWidth(2, 23);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 10);	xls.SetColumnWidth(6, 10);	xls.SetColumnWidth(7, 6);	xls.SetColumnWidth(8, 10);	xls.SetColumnWidth(9, 35);	xls.SetColumnWidth(10, 35);	xls.SetColumnWidth(11, 35);	xls.SetColumnWidth(12, 35);	xls.SetColumnWidth(13, 20);	xls.SetCellText(0, 1, _T("\x42\x1EA2NG K\xCA \x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N NGO\x1EA0I TR\xDA \x43H\x1EE4P \x43T MRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);	xls.SetCellText(0, 3, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 3, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 3, _T("H\x1ECD t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 3, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 3, _T("Gi\x1EDBi t\xEDnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 3, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 3, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 3, _T("Ng\xE0y y\xEAu \x63\x1EA7u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 3, _T("Ng\xE0y th\x1EF1\x63 hi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 3, _T("\x43h\x1EA9n \x111o\xE1n \x62\x61n \x111\x1EA7u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 3, _T("\x43h\x1EA9n \x111o\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 3, _T("K\x1EBFt lu\x1EADn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 3, _T("\x43h\x1EC9 \x111\x1ECBnh \x63h\x1EE5p \x63hi ti\x1EBFt"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 3, _T("\x42\xE1\x63 s\x129 \x63h\x1EC9 \x111\x1ECBnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	szFromDate = CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy);	szToDate = CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy);	szDate.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), szFromDate, szToDate);	xls.SetCellText(0, 2, szDate, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 0);	xls.SetMerge(1, 1, 0, 7);	xls.SetMerge(2, 2, 0, 7);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		tmpStr.Format(_T("%d"), nIndex);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hd_docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fullname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("age"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("sex"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("obj"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("dept"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hpc_orderdate"), tmpStr);		szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);		xls.SetCellText(nCol+7, nRow, szTemp, FMT_TEXT);		rs.GetValue(_T("hpc_performdate"), tmpStr);		szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);		xls.SetCellText(nCol+8, nRow, szTemp, FMT_TEXT);		rs.GetValue(_T("prediagnostic"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("diagnostic"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("conclusion"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("chidinhct"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("bschidinh"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);		nRow++;		nIndex++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\Bang ke DS BN ngoai tru chup CT MRI.xls"));
	
} 
int CStatisticOutPatientListCTMRI::OnAddStatisticOutPatientListCTMRI(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStatisticOutPatientListCTMRI::OnEditStatisticOutPatientListCTMRI(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStatisticOutPatientListCTMRI::OnDeleteStatisticOutPatientListCTMRI(){
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
 		OnCancelStatisticOutPatientListCTMRI();
 	}
	return 0;
}
int CStatisticOutPatientListCTMRI::OnSaveStatisticOutPatientListCTMRI(){
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
 		//OnStatisticOutPatientListCTMRIListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CStatisticOutPatientListCTMRI::OnCancelStatisticOutPatientListCTMRI(){
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
int CStatisticOutPatientListCTMRI::OnStatisticOutPatientListCTMRIListLoadData(){
	return 0;
}
CString CStatisticOutPatientListCTMRI::GetQueryString()
{
	CString szWhere, szSQL;
	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpc_deptid = '%s' "), m_szDepartmentKey);
	}
	if(!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpc_object = '%s' "), m_szObjectKey);
	}
	/*szSQL.Format(_T("SELECT    DISTINCT Get_patientname(hd_docno) AS fullname, ") \
				_T("           hd_docno, hd_admitdept,") \
				_T("           Hms_getage(hd_admitdate, hp_birthdate) AS age, ") \
				_T("           Hms_getsex(hp_sex) AS sex, ") \
				_T("           Hms_getobjectname(hpc_object) AS obj, hpc_orderdate, hpc_performdate,") \
				_T("           hd_diagnostic AS diagnostic, ") \
				_T("           (SELECT hfl_name ") \
				_T("            FROM   hms_fee_list ") \
				_T("            WHERE  hfl_groupid IN ( 'B2300', 'B2200' ) ") \
				_T("            AND hfl_feeid = hpcl_itemid) AS chidinhct, ") \
				_T("            Get_username(hpc_doctor) AS bschidinh ") \
				_T("FROM      hms_doc ") \
				_T("LEFT JOIN hms_patient ON ( hp_patientno = hd_patientno ) ") \
				_T("LEFT JOIN hms_pacsorder ON ( hpc_docno = hd_docno ) ") \
				_T("LEFT JOIN hms_pacsorderline ON ( hpcl_docno = hd_docno and hpc_orderid = hpcl_orderid) ") \
				_T(" LEFT JOIN hms_fee_list ON ( hfl_feeid = hpcl_itemid ) ") \
				_T("WHERE     hpc_orderdate BETWEEN Cast_string2timestamp('%s') AND Cast_string2timestamp('%s') ") \
				_T("          AND Substr(hpcl_itemid, 0, 5) IN ( 'B2300', 'B2200' ) ") \
				_T("          and hpcl_hasfee = 'Y' and hpc_status <> 'C' and hpc_class = 'E' %s") \
				_T("ORDER     BY hd_docno "), m_szFromDate, m_szToDate, szWhere);*/

	szSQL.Format(_T("SELECT    DISTINCT Get_patientname(hd_docno) AS fullname, ") \
				_T("           hd_docno, hpc_deptid as dept,") \
				_T("           Hms_getage(hd_admitdate, hp_birthdate) AS age, ") \
				_T("           Hms_getsex(hp_sex) AS sex, ") \
				_T("           Hms_getobjectname(hpc_object) AS obj, hpc_orderdate, hpc_performdate,") \
				_T("		   he_prediagnostic AS prediagnostic,") \
				_T("		   trim(he_icd10 || ' ' || he_diagnostic) AS diagnostic,") \
				_T("		   hd_conclusion AS conclusion,") \
				_T("           (SELECT hfl_name ") \
				_T("            FROM   hms_fee_list ") \
				_T("            WHERE  hfl_groupid IN ( 'B2300', 'B2200' ) ") \
				_T("            AND hfl_feeid = hpcl_itemid) AS chidinhct, ") \
				_T("            Get_username(hpc_doctor) AS bschidinh ") \
				_T("FROM      hms_doc ") \
				_T("LEFT JOIN hms_patient ON ( hp_patientno = hd_patientno ) ") \
				_T("LEFT JOIN hms_pacsorder ON ( hpc_docno = hd_docno ) ") \
				_T("LEFT JOIN hms_pacsorderline ON ( hpcl_docno = hd_docno and hpc_orderid = hpcl_orderid) ") \
				_T(" left join hms_exam ON(hd_docno = he_docno and he_deptid = hpc_deptid and he_roomid = hpc_roomid) ")
				_T("WHERE     hpc_orderdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T("          AND Substr(hpcl_itemid, 0, 5) IN ( 'B2300', 'B2200' ) ") \
				_T("          and hpcl_hasfee = 'Y' and hpc_status <> 'C' and hpc_class = 'E' %s") \
				_T("ORDER     BY hd_docno "), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}
