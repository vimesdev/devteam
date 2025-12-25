#include "BCDSBACSITHAMGIAPHAUTHUAT.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCDSBACSITHAMGIAPHAUTHUAT *pVw = (CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCDSBACSITHAMGIAPHAUTHUAT *pVw = (CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCDSBACSITHAMGIAPHAUTHUAT*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCDSBACSITHAMGIAPHAUTHUAT*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCDSBACSITHAMGIAPHAUTHUAT*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCDSBACSITHAMGIAPHAUTHUAT*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCDSBACSITHAMGIAPHAUTHUAT* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCDSBACSITHAMGIAPHAUTHUAT *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddBCDSBACSITHAMGIAPHAUTHUATFnc(CWnd *pWnd){
	 return ((CBCDSBACSITHAMGIAPHAUTHUAT*)pWnd)->OnAddBCDSBACSITHAMGIAPHAUTHUAT();
} 
static int _OnEditBCDSBACSITHAMGIAPHAUTHUATFnc(CWnd *pWnd){
	 return ((CBCDSBACSITHAMGIAPHAUTHUAT*)pWnd)->OnEditBCDSBACSITHAMGIAPHAUTHUAT();
} 
static int _OnDeleteBCDSBACSITHAMGIAPHAUTHUATFnc(CWnd *pWnd){
	 return ((CBCDSBACSITHAMGIAPHAUTHUAT*)pWnd)->OnDeleteBCDSBACSITHAMGIAPHAUTHUAT();
} 
static int _OnSaveBCDSBACSITHAMGIAPHAUTHUATFnc(CWnd *pWnd){
	 return ((CBCDSBACSITHAMGIAPHAUTHUAT*)pWnd)->OnSaveBCDSBACSITHAMGIAPHAUTHUAT();
} 
static int _OnCancelBCDSBACSITHAMGIAPHAUTHUATFnc(CWnd *pWnd){
	 return ((CBCDSBACSITHAMGIAPHAUTHUAT*)pWnd)->OnCancelBCDSBACSITHAMGIAPHAUTHUAT();
} 
CBCDSBACSITHAMGIAPHAUTHUAT::CBCDSBACSITHAMGIAPHAUTHUAT(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCDSBACSITHAMGIAPHAUTHUAT::~CBCDSBACSITHAMGIAPHAUTHUAT(){
}
void CBCDSBACSITHAMGIAPHAUTHUAT::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1012, 59);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 82, 55);
	m_wndFromDate.Create(this,86, 30, 196, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 395, 55); 
	m_wndLoad.Create(this, _T("&Load"), 687, 30, 771, 55);
	m_wndPrint.Create(this, _T("&Export"), 776, 30, 860, 55);
	m_wndList.Create(this,5, 65, 1012, 616); 
	m_wndDepartmentLab.Create(this, _T("Department"), 401, 30, 481, 55);
	m_wndDepartment.Create(this,486, 30, 682, 55); 

}
void CBCDSBACSITHAMGIAPHAUTHUAT::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("KHOA"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(2, _T("CNK"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("SL"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(4, _T("TB"), CFMT_TEXT, 100);
	/*m_wndList.InsertColumn(5, _T("T\xCAN \x42S"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(6, _T("SL"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(7, _T("TB"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(8, _T("T\xCAN \x42S"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(9, _T("SL"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(10, _T("TB"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(11, _T("T\xCAN \x42S"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(12, _T("SL"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(13, _T("TB"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(14, _T("T\xCAN \x42S"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(15, _T("SL"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(16, _T("TB"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(17, _T("T\xCAN \x42S"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(18, _T("SL"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(19, _T("TB"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(20, _T("T\xCAN \x42S"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(21, _T("SL"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(22, _T("TB"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(23, _T("T\xCAN \x42S"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(24, _T("SL"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(25, _T("TB"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(26, _T("\x43\x1ED8NG"), CFMT_NUMBER, 60);
	*/

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CBCDSBACSITHAMGIAPHAUTHUAT::OnSetWindowEvents(){
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
	UpdateData(false);
}
void CBCDSBACSITHAMGIAPHAUTHUAT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CBCDSBACSITHAMGIAPHAUTHUAT::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCDSBACSITHAMGIAPHAUTHUAT::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCDSBACSITHAMGIAPHAUTHUAT::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CBCDSBACSITHAMGIAPHAUTHUAT::SetMode(int nMode){
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
/*void CBCDSBACSITHAMGIAPHAUTHUAT::OnFromDateChange(){
	
} */
/*void CBCDSBACSITHAMGIAPHAUTHUAT::OnFromDateSetfocus(){
	
} */
/*void CBCDSBACSITHAMGIAPHAUTHUAT::OnFromDateKillfocus(){
	
} */
int CBCDSBACSITHAMGIAPHAUTHUAT::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCDSBACSITHAMGIAPHAUTHUAT::OnToDateChange(){
	
} */
/*void CBCDSBACSITHAMGIAPHAUTHUAT::OnToDateSetfocus(){
	
} */
/*void CBCDSBACSITHAMGIAPHAUTHUAT::OnToDateKillfocus(){
	
} */
int CBCDSBACSITHAMGIAPHAUTHUAT::OnToDateCheckValue(){
	return 0;
} 
void CBCDSBACSITHAMGIAPHAUTHUAT::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCDSBACSITHAMGIAPHAUTHUAT::OnPrintSelect(){
	//CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//UpdateData(true);
	//CReport rpt;
	//CRecord rs(&pMF->m_db);
	//CString szSQL, szWhere, tmpStr;
	//if (!rpt.Init(_T("Reports\\HMS\\DANHSACHBACSITHAMGIAPHAUTHUAT.RPT")))
	//	return;
	//int ret = 1;
	//szSQL = GetQueryString();
	//ret = rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"),szSQL);
	//if (ret <=0)
	//{
	//	ShowMessage(150, MB_ICONSTOP);
	//	return;
	//}
	//rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	//rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	//tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	//rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//CReportSection *rptDetail = NULL;
	//while (!rs.IsEOF())
	//{
	//	rptDetail = rpt.AddDetail();
	//	rs.GetValue(_T("KHOA"), tmpStr);
	//	rptDetail->SetValue(_T("khoa"), tmpStr);
	//	//CNK
	//	rs.GetValue(_T("CNK"), tmpStr);
	//	rptDetail->SetValue(_T("1"), tmpStr);

	//	rs.GetValue(_T("SL"), tmpStr);
	//	rptDetail->SetValue(_T("2"), tmpStr);

	//	rs.GetValue(_T("TB"), tmpStr);
	//	rptDetail->SetValue(_T("3"), tmpStr);

	//	//TENBS
	//	rs.GetValue(_T("TENBS"), tmpStr);
	//	rptDetail->SetValue(_T("4"), tmpStr);

	//	rs.GetValue(_T("SL1"), tmpStr);
	//	rptDetail->SetValue(_T("5"), tmpStr);

	//	rs.GetValue(_T("TB1"), tmpStr);
	//	rptDetail->SetValue(_T("6"), tmpStr);

	//	//TENBS
	//	rs.GetValue(_T("TENBS1"), tmpStr);
	//	rptDetail->SetValue(_T("7"), tmpStr);

	//	rs.GetValue(_T("SL2"), tmpStr);
	//	rptDetail->SetValue(_T("8"), tmpStr);

	//	rs.GetValue(_T("TB2"), tmpStr);
	//	rptDetail->SetValue(_T("9"), tmpStr);

	//	//TENBS
	//	rs.GetValue(_T("TENBS2"), tmpStr);
	//	rptDetail->SetValue(_T("10"), tmpStr);

	//	rs.GetValue(_T("SL3"), tmpStr);
	//	rptDetail->SetValue(_T("11"), tmpStr);

	//	rs.GetValue(_T("TB3"), tmpStr);
	//	rptDetail->SetValue(_T("12"), tmpStr);

	//	//TENBS
	//	rs.GetValue(_T("TENBS3"), tmpStr);
	//	rptDetail->SetValue(_T("13"), tmpStr);

	//	rs.GetValue(_T("SL4"), tmpStr);
	//	rptDetail->SetValue(_T("14"), tmpStr);

	//	rs.GetValue(_T("TB4"), tmpStr);
	//	rptDetail->SetValue(_T("15"), tmpStr);

	//	//TENBS
	//	rs.GetValue(_T("TENBS4"), tmpStr);
	//	rptDetail->SetValue(_T("16"), tmpStr);

	//	rs.GetValue(_T("SL5"), tmpStr);
	//	rptDetail->SetValue(_T("17"), tmpStr);

	//	rs.GetValue(_T("TB5"), tmpStr);
	//	rptDetail->SetValue(_T("18"), tmpStr);

	//	//TENBS
	//	rs.GetValue(_T("TENBS5"), tmpStr);
	//	rptDetail->SetValue(_T("19"), tmpStr);

	//	rs.GetValue(_T("SL6"), tmpStr);
	//	rptDetail->SetValue(_T("20"), tmpStr);

	//	rs.GetValue(_T("TB6"), tmpStr);
	//	rptDetail->SetValue(_T("21"), tmpStr);

	//	//TENBS
	//	rs.GetValue(_T("TENBS6"), tmpStr);
	//	rptDetail->SetValue(_T("22"), tmpStr);

	//	rs.GetValue(_T("SL7"), tmpStr);
	//	rptDetail->SetValue(_T("23"), tmpStr);

	//	rs.GetValue(_T("TB7"), tmpStr);
	//	rptDetail->SetValue(_T("24"), tmpStr);
	//	rs.MoveNext();
	//}
	//CString szSysDate;
	//szSysDate = pMF->GetSysDate(); 
	//tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	//rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	//rpt.PrintPreview();
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		CRecord rs(&pMF->m_db);		CString szSQL, tmpStr, szTemp, szWhere;		UpdateData(TRUE);		BeginWaitCursor();		szWhere.Empty();		int nRow =0, nCol = 0;		CExcel xls;		xls.CreateSheet(1);		xls.SetWorksheet(0);		xls.SetColumnWidth(0, 8);		xls.SetColumnWidth(1, 31);		xls.SetColumnWidth(2, 15);		xls.SetColumnWidth(3, 17);		xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);		xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);		xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x42\xC1\x43 S\x128 TH\x41M GI\x41 PH\x1EAAU THU\x1EACT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);		tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));		xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);		xls.SetCellText(0, 6, _T("KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);		xls.SetCellText(1, 6, _T("\x42\xC1\x43 S\x128 PH\x1EAAU THU\x1EACT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);		xls.SetCellText(2, 6, _T("SL M\x1ED5"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);		xls.SetCellText(3, 6, _T("T\x42 \x31 ng\xE0y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);		xls.SetMerge(0, 0, 0, 1);		xls.SetMerge(1, 1, 0, 1);		xls.SetMerge(3, 3, 0, 3);		xls.SetMerge(4, 4, 0, 3);		szSQL=GetQueryString();		rs.ExecSQL(szSQL);		nRow = 7;		nCol = 0;		int nIndex=1;		CString szNewGroup,szOldGroup;		while(!rs.IsEOF()){			rs.GetValue(_T("ho_deptid"), szNewGroup);
			if (szOldGroup != szNewGroup)
			{
				xls.SetCellText(0, nRow, rs.GetValue(_T("ho_deptid")), FMT_TEXT, true);
				szOldGroup = szNewGroup;
				nRow++;
			}			rs.GetValue(_T("su_name"), tmpStr);			xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);			rs.GetValue(_T("slmo"), tmpStr);			xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);			rs.GetValue(_T("tb"), tmpStr);			xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER2);			nRow++;			rs.MoveNext();		}		EndWaitCursor();		xls.Save(_T("Exports\\DANH SACH BAC SI THAM GIA PHAU THUAT.xls"));
} 
void CBCDSBACSITHAMGIAPHAUTHUAT::OnListDblClick(){
	
} 
void CBCDSBACSITHAMGIAPHAUTHUAT::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCDSBACSITHAMGIAPHAUTHUAT::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCDSBACSITHAMGIAPHAUTHUAT::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL, szWhere,tmpStr,szNewGroup,szOldGroup;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	int nItem;
	while(!rs.IsEOF()){
		rs.GetValue(_T("ho_deptid"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{	nItem = m_wndList.AddItems(NULL,szNewGroup, NULL);
			m_wndList.MergeCell(nItem, 0, nItem, 27);
			m_wndList.SetItemBkColor(nItem, RGB(64, 171, 216), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szOldGroup = szNewGroup;
			nIndex=1;
		}
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(NULL,
			tmpStr,
			rs.GetValue(_T("su_name")), 
			rs.GetValue(_T("slmo")),
		rs.GetValue(_T("tb")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCDSBACSITHAMGIAPHAUTHUAT::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCDSBACSITHAMGIAPHAUTHUAT::OnDepartmentSelendok(){
	 
}
/*void CBCDSBACSITHAMGIAPHAUTHUAT::OnDepartmentSetfocus(){
	
}*/
/*void CBCDSBACSITHAMGIAPHAUTHUAT::OnDepartmentKillfocus(){
	
}*/
long CBCDSBACSITHAMGIAPHAUTHUAT::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_isactive = 'Y' order by id"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCDSBACSITHAMGIAPHAUTHUAT::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCDSBACSITHAMGIAPHAUTHUAT::OnAddBCDSBACSITHAMGIAPHAUTHUAT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCDSBACSITHAMGIAPHAUTHUAT::OnEditBCDSBACSITHAMGIAPHAUTHUAT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCDSBACSITHAMGIAPHAUTHUAT::OnDeleteBCDSBACSITHAMGIAPHAUTHUAT(){
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
 		OnCancelBCDSBACSITHAMGIAPHAUTHUAT();
 	}
	return 0;
}
int CBCDSBACSITHAMGIAPHAUTHUAT::OnSaveBCDSBACSITHAMGIAPHAUTHUAT(){
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
 		//OnBCDSBACSITHAMGIAPHAUTHUATListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCDSBACSITHAMGIAPHAUTHUAT::OnCancelBCDSBACSITHAMGIAPHAUTHUAT(){
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
int CBCDSBACSITHAMGIAPHAUTHUAT::OnBCDSBACSITHAMGIAPHAUTHUATListLoadData(){
	return 0;
}
//CString CBCDSBACSITHAMGIAPHAUTHUAT::GetQueryString(){
//	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
//	CString szSQL, szWhere, szDept, tmpStr, szSoNgay;
//	szWhere.Format(_T(" AND HO_PERFORMDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
//	if (!m_szDepartmentKey.IsEmpty())
//		szDept.AppendFormat(_T(" AND HO_DEPTID = '%s'"), m_szDepartmentKey);
//	szSoNgay.Format(_T("(TRUNC_DATE(CAST_STRING2DATE ('%s'))-TRUNC_DATE(CAST_STRING2DATE ('%s')))"), m_szToDate , m_szFromDate);
//	szSQL.Format(_T(" SELECT KHOA,CNK,SL,TB,") \
//_T("        TENBS,") \
//_T("        CASE WHEN TENBS IS NOT NULL THEN SL ELSE NULL END AS SL1,") \
//_T("        CASE WHEN TENBS IS NOT NULL THEN TB ELSE NULL END AS TB1,") \
//_T("        TENBS1,") \
//_T("        CASE WHEN TENBS1 IS NOT NULL THEN SL ELSE NULL END AS SL2,") \
//_T("        CASE WHEN TENBS1 IS NOT NULL THEN TB ELSE NULL END AS TB2,") \
//_T("        TENBS2,") \
//_T("        CASE WHEN TENBS2 IS NOT NULL THEN SL ELSE NULL END AS SL3,") \
//_T("        CASE WHEN TENBS2 IS NOT NULL THEN TB ELSE NULL END AS TB3,") \
//_T("        TENBS3,") \
//_T("        CASE WHEN TENBS3 IS NOT NULL THEN SL ELSE NULL END AS SL4,") \
//_T("        CASE WHEN TENBS3 IS NOT NULL THEN TB ELSE NULL END AS TB4,") \
//_T("        TENBS4,") \
//_T("        CASE WHEN TENBS4 IS NOT NULL THEN SL ELSE NULL END AS SL5,") \
//_T("        CASE WHEN TENBS4 IS NOT NULL THEN TB ELSE NULL END AS TB5,") \
//_T("        TENBS5,") \
//_T("        CASE WHEN TENBS5 IS NOT NULL THEN SL ELSE NULL END AS SL6,") \
//_T("        CASE WHEN TENBS5 IS NOT NULL THEN TB ELSE NULL END AS TB6,") \
//_T("        TENBS6,") \
//_T("        CASE WHEN TENBS6 IS NOT NULL THEN SL ELSE NULL END AS SL7,") \
//_T("        CASE WHEN TENBS6 IS NOT NULL THEN TB ELSE NULL END AS TB7") \
//_T(" FROM(SELECT KHOA,") \
//_T("        substr(CNK,instr(CNK,' ',-1,1)+1) CNK , SL, ROUND(SL/NULLIF(%s,0),2) TB,") \
//_T("        substr(TENBS,instr(TENBS,' ',-1,1)+1) TENBS ,") \
//_T("        substr(TENBS1,instr(TENBS1,' ',-1,1)+1) TENBS1 ,") \
//_T("        substr(TENBS2,instr(TENBS2,' ',-1,1)+1) TENBS2 ,") \
//_T("        substr(TENBS3,instr(TENBS3,' ',-1,1)+1) TENBS3 ,") \
//_T("        substr(TENBS4,instr(TENBS4,' ',-1,1)+1) TENBS4 ,") \
//_T("        substr(TENBS5,instr(TENBS5,' ',-1,1)+1) TENBS5 ,") \
//_T("        substr(TENBS6,instr(TENBS6,' ',-1,1)+1) TENBS6") \
//_T(" FROM(SELECT HO_DEPTID KHOA,") \
//_T("        (SELECT SU_NAME FROM SYS_USER WHERE SU_USERID=HO_DOCTOR) CNK,SUM(HO_QTY) SL, ") \
//_T("        (SELECT SU_NAME FROM SYS_USER WHERE SU_USERID=HO_PRACTITIONER) TENBS,") \
//_T("        (SELECT SU_NAME FROM SYS_USER WHERE SU_USERID=HO_ANESTHETIST) TENBS1, ") \
//_T("        (SELECT SU_NAME FROM SYS_USER WHERE SU_USERID=HO_ASSISTANT) TENBS2,") \
//_T("        (SELECT SU_NAME FROM SYS_USER WHERE SU_USERID=HO_USER4) TENBS3,") \
//_T("        (SELECT SU_NAME FROM SYS_USER WHERE SU_USERID=HO_USER5) TENBS4,") \
//_T("        (SELECT SU_NAME FROM SYS_USER WHERE SU_USERID=HO_USER6) TENBS5,") \
//_T("        (SELECT SU_NAME FROM SYS_USER WHERE SU_USERID=HO_USER7) TENBS6") \
//_T(" FROM(SELECT HO_DEPTID,HO_DOCTOR,HO_QTY,") \
//_T("        HO_PRACTITIONER , HO_ANESTHETIST, HO_ASSISTANT,") \
//_T("        HO_USER4, HO_USER5, HO_USER6, HO_USER7") \
//_T(" FROM HMS_OPERATION") \
//_T(" WHERE HO_DEPTID in('B1-A','B1-B','B1-C','B1-D','B2','B3','B4','A2-B','B6','B7','B8','B9','B11','B15') %s %s)") \
//_T(" GROUP BY HO_DEPTID,HO_DOCTOR,HO_PRACTITIONER ,HO_ANESTHETIST,") \
//_T("        HO_ASSISTANT,HO_USER4,HO_USER5,HO_USER6,HO_USER7") \
//_T(" ORDER BY HO_DEPTID))") \
//_T(" WHERE CNK IS NOT NULL "),szSoNgay, szWhere, szDept);
//	return szSQL;
//}

CString CBCDSBACSITHAMGIAPHAUTHUAT::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept, tmpStr, szSoNgay;
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HO_DEPTID = '%s'"), m_szDepartmentKey);
	szSoNgay.Format(_T("(TRUNC_DATE(CAST_STRING2DATE ('%s'))-TRUNC_DATE(CAST_STRING2DATE ('%s'))-1)"), m_szToDate , m_szFromDate);
	szSQL.Format(_T(" SELECT ho_deptid,su_name,") \
		_T("        substr(su_name,instr(su_name,' ',-1,2)+1) bs ,") \
		_T("        count(docno) slmo,") \
		_T("        ROUND(count(docno)/NULLIF(%s,0),2) tb") \
		_T(" FROM(SELECT distinct docno,ho_practitioner,performdate,su_name,ho_deptid") \
		_T(" FROM(SELECT ho_docno as docno,") \
		_T(" 				    ho_performdate as performdate,") \
		_T("             ho_practitioner,ho_deptid,") \
		_T(" 				    row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
		_T(" WHERE ho_performdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s') ") \
		_T(" 			AND ho_performdate <= cast_string2timestamp('%s') AND ho_pdeptid='B5' ") \
		_T(" ) Tbl") \
		_T(" left join sys_user on(su_userid=ho_practitioner)") \
		_T(" WHERE dn=1)") \
		_T(" WHERE 1=1 %s") \
		_T(" GROUP By ho_deptid,su_name") \
		_T(" order by ho_deptid"),szSoNgay,m_szFromDate,m_szToDate,m_szToDate, szDept);
	return szSQL;
}