#include "BCHOATDONGCACKHOACANLAMSANG.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCHOATDONGCACKHOACANLAMSANG *pVw = (CBCHOATDONGCACKHOACANLAMSANG *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCHOATDONGCACKHOACANLAMSANG *pVw = (CBCHOATDONGCACKHOACANLAMSANG *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCHOATDONGCACKHOACANLAMSANG *pVw = (CBCHOATDONGCACKHOACANLAMSANG *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCHOATDONGCACKHOACANLAMSANG*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCHOATDONGCACKHOACANLAMSANG*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCHOATDONGCACKHOACANLAMSANG*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCHOATDONGCACKHOACANLAMSANG*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCHOATDONGCACKHOACANLAMSANG* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCHOATDONGCACKHOACANLAMSANG *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddBCHOATDONGCACKHOACANLAMSANGFnc(CWnd *pWnd){
	 return ((CBCHOATDONGCACKHOACANLAMSANG*)pWnd)->OnAddBCHOATDONGCACKHOACANLAMSANG();
} 
static int _OnEditBCHOATDONGCACKHOACANLAMSANGFnc(CWnd *pWnd){
	 return ((CBCHOATDONGCACKHOACANLAMSANG*)pWnd)->OnEditBCHOATDONGCACKHOACANLAMSANG();
} 
static int _OnDeleteBCHOATDONGCACKHOACANLAMSANGFnc(CWnd *pWnd){
	 return ((CBCHOATDONGCACKHOACANLAMSANG*)pWnd)->OnDeleteBCHOATDONGCACKHOACANLAMSANG();
} 
static int _OnSaveBCHOATDONGCACKHOACANLAMSANGFnc(CWnd *pWnd){
	 return ((CBCHOATDONGCACKHOACANLAMSANG*)pWnd)->OnSaveBCHOATDONGCACKHOACANLAMSANG();
} 
static int _OnCancelBCHOATDONGCACKHOACANLAMSANGFnc(CWnd *pWnd){
	 return ((CBCHOATDONGCACKHOACANLAMSANG*)pWnd)->OnCancelBCHOATDONGCACKHOACANLAMSANG();
} 
CBCHOATDONGCACKHOACANLAMSANG::CBCHOATDONGCACKHOACANLAMSANG(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCHOATDONGCACKHOACANLAMSANG::~CBCHOATDONGCACKHOACANLAMSANG(){
}
void CBCHOATDONGCACKHOACANLAMSANG::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 731, 30, 821, 55);
	m_wndPrint.Create(this, _T("&Print"), 826, 30, 916, 55);
	m_wndPrint.EnableWindow(false);
	m_wndExport.Create(this, _T("&Export"), 921, 30, 1011, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 431, 30, 511, 55);
	m_wndDepartment.Create(this,516, 30, 726, 55); 
	
	m_wndList.InsertColumn(1, _T(""), CFMT_TEXT, 120);
	m_wndList.InsertColumn(2, _T(""), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("\x42HQ T\x1EA1i ng\x169"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("\x42\x1EA1n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(9, _T("\x43h\xEDnh s\xE1\x63h"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(10, _T("\x44\x1ECB\x63h v\x1EE5"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(11, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(13, _T("\x43\x1ED8NG"), CFMT_MONEY, 50);

}
void CBCHOATDONGCACKHOACANLAMSANG::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);




	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CBCHOATDONGCACKHOACANLAMSANG::OnSetWindowEvents(){
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
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	SetMode(VM_EDIT);
	UpdateData(false);

}
void CBCHOATDONGCACKHOACANLAMSANG::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CBCHOATDONGCACKHOACANLAMSANG::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCHOATDONGCACKHOACANLAMSANG::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCHOATDONGCACKHOACANLAMSANG::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CBCHOATDONGCACKHOACANLAMSANG::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
/*void CBCHOATDONGCACKHOACANLAMSANG::OnFromDateChange(){
	
} */
/*void CBCHOATDONGCACKHOACANLAMSANG::OnFromDateSetfocus(){
	
} */
/*void CBCHOATDONGCACKHOACANLAMSANG::OnFromDateKillfocus(){
	
} */
int CBCHOATDONGCACKHOACANLAMSANG::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCHOATDONGCACKHOACANLAMSANG::OnToDateChange(){
	
} */
/*void CBCHOATDONGCACKHOACANLAMSANG::OnToDateSetfocus(){
	
} */
/*void CBCHOATDONGCACKHOACANLAMSANG::OnToDateKillfocus(){
	
} */
int CBCHOATDONGCACKHOACANLAMSANG::OnToDateCheckValue(){
	return 0;
} 
void CBCHOATDONGCACKHOACANLAMSANG::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCHOATDONGCACKHOACANLAMSANG::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szNewGroup, szOldGroup,szNewGroup1, szOldGroup1,szNewGroup2, szOldGroup2;
	CReportSection *rptDetail = NULL;
	CReportSection *rptSector = NULL;
	CReportSection *rptFooter = NULL;
	CRecord rs(&pMF->m_db);
	CString szCol, szData;
	if(!rpt.Init(_T("Reports/HMS/HOATDONGCACKHOACANLAMSANG.RPT")) )
		return ;
	CReportSection *pTemp = rpt.GetGroupHeader(1);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	BeginWaitCursor();
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	rpt.AddDetail(rpt.GetGroupHeader(1))->SetValue(_T("Text"), _T("a, \x58\xE9t nghi\x1EC7m"));
	while(!rs.IsEOF()) 
	{	 
		rs.GetValue(_T("HPC_GROUPID"), szNewGroup);
		if(szNewGroup !=szOldGroup)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));
			tmpStr.Format(_T("%s"), rs.GetValue(_T("GROUPNAME")));
			rptDetail->SetValue(_T("GROUPNAME"), tmpStr);
			szOldGroup=szNewGroup;
		}
		rs.GetValue(_T("ID"),szNewGroup1);
		rs.GetValue(_T("TYPE"),szNewGroup2);
			if(szNewGroup1 !=szOldGroup1)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(3));
				tmpStr.Format(_T("%s"), rs.GetValue(_T("NAME")));
				if(szNewGroup2 !=szOldGroup2)
				{
										
					rptDetail->SetValue(_T("NAME"), tmpStr);

					rs.GetValue(_T("BNSOLAN"), tmpStr); 
					rptDetail->SetValue(_T("TYPE"), tmpStr);

					rs.GetValue(_T("QUAN"), tmpStr); 
					rptDetail->SetValue(_T("1"), tmpStr); 

					rs.GetValue(_T("BHQTN"), tmpStr); 
					rptDetail->SetValue(_T("2"), tmpStr); 

					rs.GetValue(_T("BHQH"), tmpStr); 
					rptDetail->SetValue(_T("3"), tmpStr); 

					rs.GetValue(_T("BHQD"), tmpStr); 
					rptDetail->SetValue(_T("4"), tmpStr); 

					rs.GetValue(_T("BAN"), tmpStr); 
					rptDetail->SetValue(_T("5"), tmpStr); 

					rs.GetValue(_T("TE"), tmpStr); 
					rptDetail->SetValue(_T("6"), tmpStr); 

					rs.GetValue(_T("CS"), tmpStr); 
					rptDetail->SetValue(_T("7"), tmpStr); 

					rs.GetValue(_T("DV"), tmpStr); 
					rptDetail->SetValue(_T("8"), tmpStr); 

					rs.GetValue(_T("BHK"), tmpStr); 
					rptDetail->SetValue(_T("9"), tmpStr); 

					rs.GetValue(_T("BHTN"), tmpStr); 
					rptDetail->SetValue(_T("10"), tmpStr); 

					rs.GetValue(_T("CONG"), tmpStr); 
					rptDetail->SetValue(_T("11"), tmpStr); 
				szNewGroup2=szOldGroup2;
				}
			szNewGroup1=szOldGroup1;
		}
	 
		rs.MoveNext();	
	}
	rpt.AddDetail(rpt.GetGroupHeader(1))->SetValue(_T("Text"), _T("b, Kho\x61 \x63h\x1EA5n \x111o\xE1n h\xECnh \x1EA3nh"));
	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF()) 
	{	 
		rs.GetValue(_T("HPC_GROUPID"), szNewGroup);
		if(szNewGroup !=szOldGroup)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));
			tmpStr.Format(_T("%s"), rs.GetValue(_T("GROUPNAME")));
			rptDetail->SetValue(_T("GROUPNAME"), tmpStr);
			szOldGroup=szNewGroup;
		}
		rs.GetValue(_T("ID"),szNewGroup1);
		rs.GetValue(_T("TYPE"),szNewGroup2);
			if(szNewGroup1 !=szOldGroup1)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(3));
				tmpStr.Format(_T("%s"), rs.GetValue(_T("NAME")));
				if(szNewGroup2 !=szOldGroup2)
				{
										
					rptDetail->SetValue(_T("NAME"), tmpStr);

					rs.GetValue(_T("BNSOLAN"), tmpStr); 
					rptDetail->SetValue(_T("TYPE"), tmpStr);

					rs.GetValue(_T("QUAN"), tmpStr); 
					rptDetail->SetValue(_T("1"), tmpStr); 

					rs.GetValue(_T("BHQTN"), tmpStr); 
					rptDetail->SetValue(_T("2"), tmpStr); 

					rs.GetValue(_T("BHQH"), tmpStr); 
					rptDetail->SetValue(_T("3"), tmpStr); 

					rs.GetValue(_T("BHQD"), tmpStr); 
					rptDetail->SetValue(_T("4"), tmpStr); 

					rs.GetValue(_T("BAN"), tmpStr); 
					rptDetail->SetValue(_T("5"), tmpStr); 

					rs.GetValue(_T("TE"), tmpStr); 
					rptDetail->SetValue(_T("6"), tmpStr); 

					rs.GetValue(_T("CS"), tmpStr); 
					rptDetail->SetValue(_T("7"), tmpStr); 

					rs.GetValue(_T("DV"), tmpStr); 
					rptDetail->SetValue(_T("8"), tmpStr); 

					rs.GetValue(_T("BHK"), tmpStr); 
					rptDetail->SetValue(_T("9"), tmpStr); 

					rs.GetValue(_T("BHTN"), tmpStr); 
					rptDetail->SetValue(_T("10"), tmpStr); 

					rs.GetValue(_T("CONG"), tmpStr); 
					rptDetail->SetValue(_T("11"), tmpStr); 
				szNewGroup2=szOldGroup2;
				}
			szNewGroup1=szOldGroup1;
		}
	 
		rs.MoveNext();	
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
} 
void CBCHOATDONGCACKHOACANLAMSANG::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 7; 
	CString szSQL, tmpStr,szOldGroup, szNewGroup,szOldGroup1, szNewGroup1,szDesc;
	xls.CreateSheet(1); 
	xls.SetWorksheet(0); 
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 9);
	xls.SetColumnWidth(3, 13);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);
	xls.SetCellText(0, 3, _T("HO\x1EA0T \x110\x1ED8NG \x43\xC1\x43 KHO\x41 \x43\x1EACN L\xC2M S\xC0NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 6, _T("BHQ t\x1EA1i ng\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 6, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 6, _T("CS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 6, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 6, _T("BHK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 6, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 6, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(3, 3, 0, 12);
	xls.SetMerge(4, 4, 0, 12);
	szDesc.Format(_T("A.\x58\xE9t nghi\x1EC7m "));
	xls.SetCellText(0, nRow, szDesc, FMT_TEXT, true);
	szSQL=GetQueryString();
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("HPC_GROUPID"), szNewGroup);
		if (szOldGroup != szNewGroup)
		{
			xls.SetCellText(0, nRow+1, rs.GetValue(_T("GROUPNAME")), FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nRow++;
		}
		rs.GetValue(_T("ID"), szNewGroup1);
		if (szOldGroup1 != szNewGroup1)
		{
			xls.SetCellText(nCol+0, nRow+1, rs.GetValue(_T("NAME")), FMT_TEXT, false);
			szOldGroup1 = szNewGroup1;
		}
		rs.GetValue(_T("BNSOLAN"), tmpStr);
		xls.SetCellText(nCol+1, nRow+1 ,tmpStr, FMT_TEXT);

		rs.GetValue(_T("QUAN"), tmpStr);
		xls.SetCellText(nCol+2, nRow+1 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BHQTN"), tmpStr);
		xls.SetCellText(nCol+3, nRow+1 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BHQD"), tmpStr);
		xls.SetCellText(nCol+4, nRow+1 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BHQH"), tmpStr);
		xls.SetCellText(nCol+5, nRow+1 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BAN"), tmpStr);
		xls.SetCellText(nCol+6, nRow+1 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("TE"), tmpStr);
		xls.SetCellText(nCol+7, nRow+1 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CS"), tmpStr);
		xls.SetCellText(nCol+8, nRow+1 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("DV"), tmpStr);
		xls.SetCellText(nCol+9, nRow+1 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BHK"), tmpStr);
		xls.SetCellText(nCol+10, nRow+1 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BHTN"), tmpStr);
		xls.SetCellText(nCol+11, nRow+1 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CONG"), tmpStr);
		xls.SetCellText(nCol+12, nRow+1 ,tmpStr, FMT_NUMBER1);

		nRow++; 
		rs.MoveNext();	
	}
	szDesc.Format(_T("B. Kho\x61 \x63h\x1EA5n \x111o\xE1n h\xECnh \x1EA3nh "));
	xls.SetCellText(0, nRow +1,szDesc , FMT_TEXT, true);
	szSQL=GetQueryString1();
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("HPC_GROUPID"), szNewGroup);
		if (szOldGroup != szNewGroup)
		{
			xls.SetCellText(0, nRow+2, rs.GetValue(_T("GROUPNAME")), FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nRow++;
		}
		rs.GetValue(_T("ID"), szNewGroup1);
		if (szOldGroup1 != szNewGroup1)
		{
			xls.SetCellText(nCol+0, nRow+2, rs.GetValue(_T("NAME")), FMT_TEXT, false);
			szOldGroup1 = szNewGroup1;
		}
		rs.GetValue(_T("BNSOLAN"), tmpStr);
		xls.SetCellText(nCol+1, nRow+2 ,tmpStr, FMT_TEXT);

		rs.GetValue(_T("QUAN"), tmpStr);
		xls.SetCellText(nCol+2, nRow+2 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BHQTN"), tmpStr);
		xls.SetCellText(nCol+3, nRow+2 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BHQD"), tmpStr);
		xls.SetCellText(nCol+4, nRow+2 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BHQH"), tmpStr);
		xls.SetCellText(nCol+5, nRow+2 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BAN"), tmpStr);
		xls.SetCellText(nCol+6, nRow+2 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("TE"), tmpStr);
		xls.SetCellText(nCol+7, nRow+2 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CS"), tmpStr);
		xls.SetCellText(nCol+8, nRow+2 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("DV"), tmpStr);
		xls.SetCellText(nCol+9, nRow+2 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BHK"), tmpStr);
		xls.SetCellText(nCol+10, nRow+2 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("BHTN"), tmpStr);
		xls.SetCellText(nCol+11, nRow+2 ,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("CONG"), tmpStr);
		xls.SetCellText(nCol+12, nRow+2 ,tmpStr, FMT_NUMBER1);

		nRow++; 
		rs.MoveNext();	
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\HOATDONGCANLAMSANG.xls"));
	
} 
void CBCHOATDONGCACKHOACANLAMSANG::OnListDblClick(){
	
} 
void CBCHOATDONGCACKHOACANLAMSANG::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCHOATDONGCACKHOACANLAMSANG::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCHOATDONGCACKHOACANLAMSANG::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr,tmpStr1, szSQL, szObject, szNewGroup, szOldGroup,szNewGroup1, szOldGroup1,szNewGroup2, szOldGroup2;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL = GetQueryString2();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	int nItem=1;
	CString szDesc;
	szDesc.Format(_T("a. \x58\xE9t nghi\x1EC7m"));
			nItem = m_wndList.AddItems(szDesc, NULL);
			m_wndList.MergeCell(nItem, 0, nItem, 8);
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 192), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
	while(!rs.IsEOF()){	
		rs.GetValue(_T("HPC_GROUPID"),szNewGroup);
		if(szNewGroup !=szOldGroup)
		{
			rs.GetValue(_T("GROUPNAME"), tmpStr);
			nItem = m_wndList.AddItems(tmpStr, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 14);
			m_wndList.SetItemBkColor(nItem, RGB(64, 171, 216), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szOldGroup = szNewGroup;
		}
		rs.GetValue(_T("ID"),szNewGroup1);
		rs.GetValue(_T("TYPE"),szNewGroup2);
		if(szNewGroup1 !=szOldGroup1)
		{
			rs.GetValue(_T("NAME"), tmpStr);
			nItem = m_wndList.AddItems(tmpStr, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 14);
			m_wndList.SetItemBkColor(nItem, RGB(191, 206, 212), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(16, 61, 78) , FALSE);
			szOldGroup1 = szNewGroup1;
		}
		rs.GetValue(_T("BNSOLAN"), tmpStr1);
		m_wndList.AddItems(NULL,
							tmpStr1,
							rs.GetValue(_T("QUAN")),
							rs.GetValue(_T("BHQTN")), 
							rs.GetValue(_T("BHQH")), 
							rs.GetValue(_T("BHQD")), 
							rs.GetValue(_T("BAN")), 
							rs.GetValue(_T("TE")),
							rs.GetValue(_T("CS")), 
							rs.GetValue(_T("DV")), 
							rs.GetValue(_T("BHK")), 
							rs.GetValue(_T("BHTN")),
							rs.GetValue(_T("CONG")),NULL);	
		rs.MoveNext();
	}
	szDesc.Format(_T("b.Kho\x61 \x63h\x1EA5n \x111o\xE1n h\xECnh \x1EA3nh "));
	nItem = m_wndList.AddItems(szDesc, NULL);
	m_wndList.MergeCell(nItem, 0, nItem, 8);
	m_wndList.SetItemBkColor(nItem, RGB(0, 64, 192), FALSE);
	m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
	szSQL = GetQueryString3();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF()){	
		rs.GetValue(_T("HPC_GROUPID"),szNewGroup);
		if(szNewGroup !=szOldGroup)
		{
			rs.GetValue(_T("GROUPNAME"), tmpStr);
			nItem = m_wndList.AddItems(tmpStr, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 14);
			m_wndList.SetItemBkColor(nItem, RGB(64, 171, 216), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szOldGroup = szNewGroup;
		}
		rs.GetValue(_T("ID"),szNewGroup1);
		if(szNewGroup1 !=szOldGroup1)
		{
			rs.GetValue(_T("NAME"), tmpStr);
			nItem = m_wndList.AddItems(tmpStr, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 14);
			m_wndList.SetItemBkColor(nItem, RGB(191, 206, 212), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(16, 61, 78) , FALSE);
			szOldGroup1 = szNewGroup1;
		}
		rs.GetValue(_T("BNSOLAN"), tmpStr1);
		m_wndList.AddItems(NULL,
							tmpStr1,
							rs.GetValue(_T("QUAN")),
							rs.GetValue(_T("BHQTN")), 
							rs.GetValue(_T("BHQH")), 
							rs.GetValue(_T("BHQD")), 
							rs.GetValue(_T("BAN")), 
							rs.GetValue(_T("TE")),
							rs.GetValue(_T("CS")), 
							rs.GetValue(_T("DV")), 
							rs.GetValue(_T("BHK")), 
							rs.GetValue(_T("BHTN")),
							rs.GetValue(_T("CONG")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCHOATDONGCACKHOACANLAMSANG::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCHOATDONGCACKHOACANLAMSANG::OnDepartmentSelendok(){
	 
}
/*void CBCHOATDONGCACKHOACANLAMSANG::OnDepartmentSetfocus(){
	
}*/
/*void CBCHOATDONGCACKHOACANLAMSANG::OnDepartmentKillfocus(){
	
}*/
long CBCHOATDONGCACKHOACANLAMSANG::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere,szCondition, szTmp;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type IN('KB','DT','HA') and sd_isactive = 'Y' order by id"));
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);

		szTmp.Format(_T("'%s'"), rs.GetValue(_T("id")));
		if (!m_szDepts.IsEmpty())
			m_szDepts += _T(", ");
		m_szDepts += szTmp;

		rs.MoveNext();
	}
	return nCount;
}
/*void CBCHOATDONGCACKHOACANLAMSANG::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCHOATDONGCACKHOACANLAMSANG::OnAddBCHOATDONGCACKHOACANLAMSANG(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCHOATDONGCACKHOACANLAMSANG::OnEditBCHOATDONGCACKHOACANLAMSANG(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCHOATDONGCACKHOACANLAMSANG::OnDeleteBCHOATDONGCACKHOACANLAMSANG(){
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
 		OnCancelBCHOATDONGCACKHOACANLAMSANG();
 	}
	return 0;
}
int CBCHOATDONGCACKHOACANLAMSANG::OnSaveBCHOATDONGCACKHOACANLAMSANG(){
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
 		//OnBCHOATDONGCACKHOACANLAMSANGListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCHOATDONGCACKHOACANLAMSANG::OnCancelBCHOATDONGCACKHOACANLAMSANG(){
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
int CBCHOATDONGCACKHOACANLAMSANG::OnBCHOATDONGCACKHOACANLAMSANGListLoadData(){
	return 0;
}
CString CBCHOATDONGCACKHOACANLAMSANG::GetQueryString(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szDept;

	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND hpc_pdeptid = '%s'"), m_szDepartmentKey);

	szWhere.Format(_T(" AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				   _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	szSQL.Format(_T(" SELECT ID,(SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hrl_ietype' AND SS_CODE = CAST(ID AS NUMBER)) NAME,") \
_T("        HPC_GROUPID,") \
_T("        (SELECT HFG_NAME FROM HMS_FEE_GROUP WHERE HPC_GROUPID=HFG_ID) GROUPNAME,") \
_T("        TYPE,(SELECT SS_DESC FROM SYS_SEL WHERE SS_ID ='hrl_bnqty' AND SS_CODE = CAST(TYPE AS NUMBER)) BNSOLAN,") \
_T("        QUAN,BHQTN,BHQD,BHQH,BAN,TE,CS,DV,BHK,BHTN,") \
_T("        (QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT 1 ID,1 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_PDEPTID,HPC_GROUPID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHTN") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID") \
_T(" UNION") \
_T(" SELECT 1 ID,2 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT HPC_DOCNO,HPC_GROUPID,HPC_PDEPTID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHTN") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID") \
_T(" UNION") \
_T(" SELECT 2 ID,1 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_PDEPTID,HPC_GROUPID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHTN") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID") \
_T(" UNION") \
_T(" SELECT 2 ID,2 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT HPC_DOCNO,HPC_GROUPID,HPC_PDEPTID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHTN") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID") \
_T(" UNION") \
_T(" SELECT 4 ID,1 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_GROUPID,HPC_PDEPTID,") \
_T("        CASE WHEN HPC_OBJECT=1 THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 THEN 1 ELSE 0 END AS BHTN") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID") \
_T(" UNION") \
_T(" SELECT 4 ID,2 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT HPC_DOCNO,HPC_GROUPID,HPC_PDEPTID,") \
_T("        CASE WHEN HPC_OBJECT=1 THEN HPCL_QTY ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 THEN HPCL_QTY ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 THEN HPCL_QTY ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 THEN HPCL_QTY ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 THEN HPCL_QTY ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) THEN HPCL_QTY ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 THEN HPCL_QTY ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 THEN HPCL_QTY ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 THEN HPCL_QTY ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 THEN HPCL_QTY ELSE 0 END AS BHTN") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID) ORDER BY HPC_GROUPID,ID,NAME DESC,TYPE"),szWhere,szDept
																	,szWhere,szDept
																	,szWhere,szDept
																	,szWhere,szDept
																	,szWhere,szDept
																	,szWhere,szDept);
_fmsg(_T("%s"), szSQL);
	return szSQL;
}
CString CBCHOATDONGCACKHOACANLAMSANG::GetQueryString1(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL,szWhere,szDept;
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HPC_PDEPTID = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HPC_PERFORMDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT ID,(SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hrl_ietype' AND SS_CODE = CAST(ID AS NUMBER)) NAME,") \
_T("        HPC_GROUPID,") \
_T("        (SELECT HFG_NAME FROM HMS_FEE_GROUP WHERE HPC_GROUPID=HFG_ID) GROUPNAME,") \
_T("        TYPE,(SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hrl_bnqty' AND SS_CODE = CAST(TYPE AS NUMBER)) BNSOLAN,") \
_T("        QUAN,BHQTN,BHQD,BHQH,BAN,TE,CS,DV,BHK,BHTN,") \
_T("        (QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT 1 ID,1 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_GROUPID,HPC_PDEPTID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHTN") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID") \
_T(" UNION") \
_T(" SELECT 1 ID,2 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT HPC_DOCNO,HPC_GROUPID,HPC_PDEPTID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHTN") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID") \
_T(" UNION") \
_T(" SELECT 2 ID,1 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_GROUPID,HPC_PDEPTID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHTN") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID") \
_T(" UNION") \
_T(" SELECT 2 ID,2 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT HPC_DOCNO,HPC_GROUPID,HPC_PDEPTID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHTN") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID") \
_T(" UNION") \
_T(" SELECT 4 ID,1 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_GROUPID,HPC_PDEPTID,") \
_T("        CASE WHEN HPC_OBJECT=1 THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 THEN 1 ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 THEN 1 ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 THEN 1 ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 THEN 1 ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) THEN 1 ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 THEN 1 ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 THEN 1 ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 THEN 1 ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 THEN 1 ELSE 0 END AS BHTN") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID") \
_T(" UNION") \
_T(" SELECT 4 ID,2 TYPE,HPC_GROUPID,SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQD) BHQD,SUM(BHQH) BHQH,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,") \
_T("        SUM(QUAN+BHQTN+BHQD+BHQH+BAN+TE+CS+DV+BHK+BHTN) CONG") \
_T(" FROM(SELECT HPC_DOCNO,HPC_GROUPID,HPC_PDEPTID,") \
_T("        CASE WHEN HPC_OBJECT=1 THEN HPCL_QTY ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HPC_OBJECT=11 THEN HPCL_QTY ELSE 0 END AS BHQTN,") \
_T("        CASE WHEN HPC_OBJECT=10 THEN HPCL_QTY ELSE 0 END AS BHQD,") \
_T("        CASE WHEN HPC_OBJECT=2 THEN HPCL_QTY ELSE 0 END AS BHQH,") \
_T("        CASE WHEN HPC_OBJECT=8 THEN HPCL_QTY ELSE 0 END AS BAN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) THEN HPCL_QTY ELSE 0 END AS TE,") \
_T("        CASE WHEN HPC_OBJECT=3 THEN HPCL_QTY ELSE 0 END AS CS,") \
_T("        CASE WHEN HPC_OBJECT=7 THEN HPCL_QTY ELSE 0 END AS DV,") \
_T("        CASE WHEN HPC_OBJECT=4 THEN HPCL_QTY ELSE 0 END AS BHK,") \
_T("        CASE WHEN HPC_OBJECT=5 THEN HPCL_QTY ELSE 0 END AS BHTN") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND hpc_orderid=hpcl_orderid)") \
_T(" WHERE 1 = 1 ") \
_T("   %s %s)") \
_T(" GROUP BY HPC_GROUPID) ORDER BY HPC_GROUPID,ID,NAME DESC,TYPE"),szWhere,szDept
																	,szWhere,szDept
																	,szWhere,szDept
																	,szWhere,szDept
																	,szWhere,szDept
																	,szWhere,szDept);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CBCHOATDONGCACKHOACANLAMSANG::GetQueryString2() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept;
	
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND hpc_pdeptid = '%s'"), m_szDepartmentKey);
	else
	{
		szWhere.AppendFormat(_T(" AND hpc_pdeptid in (%s) "), m_szDepts);
	}

	szWhere.Format(_T(" AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	szWhere.AppendFormat(_T(" AND hpc_status = 'T' "));

	szSQL.Format(_T(" SELECT  ") \
		_T(" ID, ") \
		_T(" (SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hrl_ietype' AND SS_CODE = CAST(ID AS NUMBER)) AS NAME,  ") \
		_T(" HPC_GROUPID, ") \
		_T(" (SELECT HFG_NAME FROM HMS_FEE_GROUP WHERE HPC_GROUPID = HFG_ID) AS GROUPNAME, ") \
		_T(" TYPE, ") \
		_T(" (SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hrl_bnqty' AND SS_CODE = CAST(TYPE AS NUMBER)) AS BNSOLAN, ") \
		_T(" QUAN, BHQTN, BHQD, BHQH, BAN, TE, CS, DV, BHK, BHTN, ") \
		_T(" (QUAN + BHQTN + BHQD + BHQH + BAN + TE + CS + DV + BHK + BHTN) AS CONG ") \
		_T(" FROM(") \
		_T(" 	SELECT  ") \
		_T(" 	ID, 1 AS TYPE, HPC_GROUPID,  ") \
		_T(" 	SUM(QUAN) AS QUAN,  ") \
		_T(" 	SUM(BHQTN) AS BHQTN, ") \
		_T(" 	SUM(BHQD) AS BHQD,  ") \
		_T(" 	SUM(BHQH) AS BHQH, ") \
		_T(" 	SUM(BAN) AS BAN, ") \
		_T(" 	SUM(TE) AS TE, ") \
		_T(" 	SUM(CS) AS CS, ") \
		_T(" 	SUM(DV) AS DV, ") \
		_T(" 	SUM(BHK) AS BHK, ") \
		_T(" 	SUM(BHTN) AS BHTN, ") \
		_T(" 	SUM(QUAN + BHQTN + BHQD + BHQH + BAN + TE + CS + DV + BHK + BHTN) AS CONG ") \
		_T(" 	FROM(") \
		_T(" 		SELECT DISTINCT  ") \
		_T(" 		HPC_DOCNO, HPC_PDEPTID, HPC_GROUPID,  ") \
		_T(" 		CASE WHEN sd_type = 'DT' THEN 1 WHEN sd_type = 'KB' THEN 2 ELSE NULL END AS ID,  ") \
		_T(" 		CASE WHEN HPC_OBJECT = 1  THEN 1 ELSE 0 END AS QUAN,  ") \
		_T(" 		CASE WHEN HPC_OBJECT = 11 THEN 1 ELSE 0 END AS BHQTN, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 10 THEN 1 ELSE 0 END AS BHQD, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 2 THEN 1 ELSE 0 END AS BHQH, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 8 THEN 1 ELSE 0 END AS BAN, ") \
		_T(" 		CASE WHEN HPC_OBJECT IN(9, 6) THEN 1 ELSE 0 END AS TE, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 3 THEN 1 ELSE 0 END AS CS, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 7 THEN 1 ELSE 0 END AS DV, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 4 THEN 1 ELSE 0 END AS BHK, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 5 THEN 1 ELSE 0 END AS BHTN ") \
		_T(" 		FROM HMS_TESTORDER ") \
		_T(" 		LEFT JOIN HMS_TESTORDERLINE ON (HPCL_DOCNO = HPC_DOCNO AND hpc_orderid = hpcl_orderid)  ") \
		_T(" 		LEFT JOIN SYS_DEPT ON(SD_ID = HPC_PDEPTID) ") \
		_T(" 		WHERE 1 = 1  ") \
		_T(" 		%s %s ") \
		_T(" 	)  ") \
		_T(" 	GROUP BY HPC_GROUPID, ID  ") \
		_T(" UNION ") \
		_T(" 	SELECT  ") \
		_T(" 	ID, 2 AS TYPE, HPC_GROUPID,  ") \
		_T(" 	SUM(QUAN) AS QUAN,  ") \
		_T(" 	SUM(BHQTN) AS BHQTN, ") \
		_T(" 	SUM(BHQD) AS BHQD,  ") \
		_T(" 	SUM(BHQH) AS BHQH, ") \
		_T(" 	SUM(BAN) AS BAN, ") \
		_T(" 	SUM(TE) AS TE, ") \
		_T(" 	SUM(CS) AS CS, ") \
		_T(" 	SUM(DV) AS DV, ") \
		_T(" 	SUM(BHK) AS BHK, ") \
		_T(" 	SUM(BHTN) AS BHTN, ") \
		_T(" 	SUM(QUAN + BHQTN + BHQD + BHQH + BAN + TE + CS + DV + BHK + BHTN) AS CONG ") \
		_T(" 	FROM(") \
		_T(" 		SELECT DISTINCT  ") \
		_T(" 		HPC_DOCNO, HPC_PDEPTID, HPC_GROUPID,  ") \
		_T(" 		CASE WHEN sd_type = 'DT' THEN 1 WHEN sd_type = 'KB' THEN 2 ELSE NULL END AS ID,  ") \
		_T(" 		CASE WHEN HPC_OBJECT = 1  THEN HPCL_QTY ELSE 0 END AS QUAN,  ") \
		_T(" 		CASE WHEN HPC_OBJECT = 11  THEN HPCL_QTY ELSE 0 END AS BHQTN, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 10  THEN HPCL_QTY ELSE 0 END AS BHQD, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 2  THEN HPCL_QTY ELSE 0 END AS BHQH, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 8  THEN HPCL_QTY ELSE 0 END AS BAN, ") \
		_T(" 		CASE WHEN HPC_OBJECT IN(9, 6) THEN HPCL_QTY ELSE 0 END AS TE, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 3 THEN HPCL_QTY ELSE 0 END AS CS, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 7  THEN HPCL_QTY ELSE 0 END AS DV, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 4 THEN HPCL_QTY ELSE 0 END AS BHK, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 5 THEN HPCL_QTY ELSE 0 END AS BHTN ") \
		_T(" 		FROM HMS_TESTORDER ") \
		_T(" 		LEFT JOIN HMS_TESTORDERLINE ON (HPCL_DOCNO = HPC_DOCNO AND hpc_orderid = hpcl_orderid)  ") \
		_T(" 		LEFT JOIN SYS_DEPT ON(SD_ID = HPC_PDEPTID) ") \
		_T(" 		WHERE 1 = 1  ") \
		_T(" 		%s %s ") \
		_T(" 	) GROUP BY HPC_GROUPID, ID ") \
		_T(" ) WHERE ID is not null ") \
		_T(" ORDER BY HPC_GROUPID, ID, NAME DESC, TYPE "), szWhere, szDept, szWhere, szDept);
	_tprintf(_T("sql 2: %s"), szSQL);
		return szSQL;
}

CString CBCHOATDONGCACKHOACANLAMSANG::GetQueryString3() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept;

	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND hpc_pdeptid = '%s'"), m_szDepartmentKey);
	else
	{
		szWhere.AppendFormat(_T(" AND hpc_pdeptid in (%s) "), m_szDepts);
	}

	szWhere.Format(_T(" AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	szWhere.AppendFormat(_T(" AND hpc_status = 'T' "));

	szSQL.Format(_T(" SELECT  ") \
		_T(" ID, ") \
		_T(" (SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hrl_ietype' AND SS_CODE = CAST(ID AS NUMBER)) AS NAME,  ") \
		_T(" HPC_GROUPID, ") \
		_T(" (SELECT HFG_NAME FROM HMS_FEE_GROUP WHERE HPC_GROUPID = HFG_ID) AS GROUPNAME, ") \
		_T(" TYPE, ") \
		_T(" (SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hrl_bnqty' AND SS_CODE = CAST(TYPE AS NUMBER)) AS BNSOLAN, ") \
		_T(" QUAN, BHQTN, BHQD, BHQH, BAN, TE, CS, DV, BHK, BHTN, ") \
		_T(" (QUAN + BHQTN + BHQD + BHQH + BAN + TE + CS + DV + BHK + BHTN) AS CONG ") \
		_T(" FROM(") \
		_T(" 	SELECT  ") \
		_T(" 	ID, 1 AS TYPE, HPC_GROUPID,  ") \
		_T(" 	SUM(QUAN) AS QUAN,  ") \
		_T(" 	SUM(BHQTN) AS BHQTN, ") \
		_T(" 	SUM(BHQD) AS BHQD,  ") \
		_T(" 	SUM(BHQH) AS BHQH, ") \
		_T(" 	SUM(BAN) AS BAN, ") \
		_T(" 	SUM(TE) AS TE, ") \
		_T(" 	SUM(CS) AS CS, ") \
		_T(" 	SUM(DV) AS DV, ") \
		_T(" 	SUM(BHK) AS BHK, ") \
		_T(" 	SUM(BHTN) AS BHTN, ") \
		_T(" 	SUM(QUAN + BHQTN + BHQD + BHQH + BAN + TE + CS + DV + BHK + BHTN) AS CONG ") \
		_T(" 	FROM(") \
		_T(" 		SELECT DISTINCT  ") \
		_T(" 		HPC_DOCNO, HPC_PDEPTID, HPC_GROUPID,  ") \
		_T(" 		CASE WHEN sd_type = 'DT' THEN 1 WHEN sd_type = 'KB' THEN 2 ELSE NULL END AS ID,  ") \
		_T(" 		CASE WHEN HPC_OBJECT = 1 THEN 1 ELSE 0 END AS QUAN,  ") \
		_T(" 		CASE WHEN HPC_OBJECT = 11  THEN 1 ELSE 0 END AS BHQTN, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 10  THEN 1 ELSE 0 END AS BHQD, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 2 THEN 1 ELSE 0 END AS BHQH, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 8  THEN 1 ELSE 0 END AS BAN, ") \
		_T(" 		CASE WHEN HPC_OBJECT IN(9, 6)  THEN 1 ELSE 0 END AS TE, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 3  THEN 1 ELSE 0 END AS CS, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 7  THEN 1 ELSE 0 END AS DV, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 4  THEN 1 ELSE 0 END AS BHK, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 5  THEN 1 ELSE 0 END AS BHTN ") \
		_T(" 		FROM HMS_PACSORDER ") \
		_T(" 		LEFT JOIN HMS_PACSORDERLINE ON (HPCL_DOCNO = HPC_DOCNO AND hpc_orderid = hpcl_orderid)  ") \
		_T(" 		LEFT JOIN SYS_DEPT ON(SD_ID = HPC_PDEPTID) ") \
		_T(" 		WHERE 1 = 1  ") \
		_T(" 		%s %s ") \
		_T(" 	)  ") \
		_T(" 	GROUP BY HPC_GROUPID, ID  ") \
		_T(" UNION ") \
		_T(" 	SELECT  ") \
		_T(" 	ID, 2 AS TYPE, HPC_GROUPID,  ") \
		_T(" 	SUM(QUAN) AS QUAN,  ") \
		_T(" 	SUM(BHQTN) AS BHQTN, ") \
		_T(" 	SUM(BHQD) AS BHQD,  ") \
		_T(" 	SUM(BHQH) AS BHQH, ") \
		_T(" 	SUM(BAN) AS BAN, ") \
		_T(" 	SUM(TE) AS TE, ") \
		_T(" 	SUM(CS) AS CS, ") \
		_T(" 	SUM(DV) AS DV, ") \
		_T(" 	SUM(BHK) AS BHK, ") \
		_T(" 	SUM(BHTN) AS BHTN, ") \
		_T(" 	SUM(QUAN + BHQTN + BHQD + BHQH + BAN + TE + CS + DV + BHK + BHTN) AS CONG ") \
		_T(" 	FROM(") \
		_T(" 		SELECT DISTINCT  ") \
		_T(" 		HPC_DOCNO, HPC_PDEPTID, HPC_GROUPID,  ") \
		_T(" 		CASE WHEN sd_type = 'DT' THEN 1 WHEN sd_type = 'KB' THEN 2 ELSE NULL END AS ID,  ") \
		_T(" 		CASE WHEN HPC_OBJECT = 1 THEN HPCL_QTY ELSE 0 END AS QUAN,  ") \
		_T(" 		CASE WHEN HPC_OBJECT = 11 THEN HPCL_QTY ELSE 0 END AS BHQTN, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 10 THEN HPCL_QTY ELSE 0 END AS BHQD, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 2  THEN HPCL_QTY ELSE 0 END AS BHQH, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 8  THEN HPCL_QTY ELSE 0 END AS BAN, ") \
		_T(" 		CASE WHEN HPC_OBJECT IN(9, 6) THEN HPCL_QTY ELSE 0 END AS TE, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 3 THEN HPCL_QTY ELSE 0 END AS CS, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 7  THEN HPCL_QTY ELSE 0 END AS DV, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 4  THEN HPCL_QTY ELSE 0 END AS BHK, ") \
		_T(" 		CASE WHEN HPC_OBJECT = 5  THEN HPCL_QTY ELSE 0 END AS BHTN ") \
		_T(" 		FROM HMS_PACSORDER ") \
		_T(" 		LEFT JOIN HMS_PACSORDERLINE ON (HPCL_DOCNO = HPC_DOCNO AND hpc_orderid = hpcl_orderid)  ") \
		_T(" 		LEFT JOIN SYS_DEPT ON(SD_ID = HPC_PDEPTID) ") \
		_T(" 		WHERE 1 = 1  ") \
		_T(" 		%s %s ") \
		_T(" 	) GROUP BY HPC_GROUPID, ID ") \
		_T(" ) WHERE ID is not null ") \
		_T(" ORDER BY HPC_GROUPID, ID, NAME DESC, TYPE "), szWhere, szDept, szWhere, szDept);
	_tprintf(_T("sql 3: %s"), szSQL);
	return szSQL;
}