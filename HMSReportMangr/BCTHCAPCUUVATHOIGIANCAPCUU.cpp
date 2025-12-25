#include "BCTHCAPCUUVATHOIGIANCAPCUU.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTHCAPCUUVATHOIGIANCAPCUU *pVw = (CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTHCAPCUUVATHOIGIANCAPCUU *pVw = (CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTHCAPCUUVATHOIGIANCAPCUU*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTHCAPCUUVATHOIGIANCAPCUU*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTHCAPCUUVATHOIGIANCAPCUU*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTHCAPCUUVATHOIGIANCAPCUU*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTHCAPCUUVATHOIGIANCAPCUU* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTHCAPCUUVATHOIGIANCAPCUU *pVw = (CBCTHCAPCUUVATHOIGIANCAPCUU *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddBCTHCAPCUUVATHOIGIANCAPCUUFnc(CWnd *pWnd){
	 return ((CBCTHCAPCUUVATHOIGIANCAPCUU*)pWnd)->OnAddBCTHCAPCUUVATHOIGIANCAPCUU();
} 
static int _OnEditBCTHCAPCUUVATHOIGIANCAPCUUFnc(CWnd *pWnd){
	 return ((CBCTHCAPCUUVATHOIGIANCAPCUU*)pWnd)->OnEditBCTHCAPCUUVATHOIGIANCAPCUU();
} 
static int _OnDeleteBCTHCAPCUUVATHOIGIANCAPCUUFnc(CWnd *pWnd){
	 return ((CBCTHCAPCUUVATHOIGIANCAPCUU*)pWnd)->OnDeleteBCTHCAPCUUVATHOIGIANCAPCUU();
} 
static int _OnSaveBCTHCAPCUUVATHOIGIANCAPCUUFnc(CWnd *pWnd){
	 return ((CBCTHCAPCUUVATHOIGIANCAPCUU*)pWnd)->OnSaveBCTHCAPCUUVATHOIGIANCAPCUU();
} 
static int _OnCancelBCTHCAPCUUVATHOIGIANCAPCUUFnc(CWnd *pWnd){
	 return ((CBCTHCAPCUUVATHOIGIANCAPCUU*)pWnd)->OnCancelBCTHCAPCUUVATHOIGIANCAPCUU();
} 
CBCTHCAPCUUVATHOIGIANCAPCUU::CBCTHCAPCUUVATHOIGIANCAPCUU(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTHCAPCUUVATHOIGIANCAPCUU::~CBCTHCAPCUUVATHOIGIANCAPCUU(){
}
void CBCTHCAPCUUVATHOIGIANCAPCUU::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1012, 59);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 82, 55);
	m_wndFromDate.Create(this,86, 30, 196, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 395, 55); 
	m_wndLoad.Create(this, _T("&Load"), 687, 30, 771, 55);
	m_wndPrint.Create(this, _T("&Print"), 776, 30, 860, 55);
	m_wndList.Create(this,5, 65, 1012, 616); 
	m_wndDepartmentLab.Create(this, _T("Department"), 401, 30, 481, 55);
	m_wndDepartment.Create(this,486, 30, 682, 55); 
	m_wndExport.Create(this, _T("&Export"), 865, 30, 945, 55);
	
	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(true);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Lo\x1EA1i \x62\x1EC7nh \x63\x1EA5p \x63\x1EE9u"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("M\xE3"), CFMT_TEXT, 50);
	//-----------------------------------------------------------------------------------------------
	m_wndList.InsertColumn(3, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("H\x1B0u"), CFMT_MONEY, 50);
	TranslateString(_T("\x110\x1A1n v\x1ECB \x111\x1EBFn"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 3, 2, 4, false, false);

	m_wndList.InsertColumn(5, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("H\x1B0u"), CFMT_MONEY, 50);
	TranslateString(_T("\x43huy\x1EC3n vi\x1EC7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 5, 2, 6, false, false);

	m_wndList.InsertColumn(7, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("H\x1B0u"), CFMT_MONEY, 50);
	TranslateString(_T("\x43\x1ED9ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 7, 2, 8, false, false);

	TranslateString(_T("S\x1ED1 \x62\x1EC7nh"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 3, 1, 8, false, false);
	//----------------------------------------------------------------------------------------------

	m_wndList.InsertColumn(9, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("H\x1B0u"), CFMT_MONEY, 50);
	TranslateString(_T("Tr\x1B0\x1EDB\x63 \x36 gi\x1EDD"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 9, 2, 10, false, false);

	m_wndList.InsertColumn(11, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("H\x1B0u"), CFMT_MONEY, 50);
	TranslateString(_T("6 - 12 gi\x1EDD"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 11, 2, 12, false, false);

	TranslateString(_T("Th\x1EDDi gi\x61n \x111\x1EBFn vi\x1EC7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 9, 1, 12, false, false);

	m_wndList.InsertColumn(13, _T("V\xE0o vi\x1EC7n"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(14, _T("\x43ho v\x1EC1"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(15, _T("T\x1EED vong"), CFMT_MONEY, 70);
	TranslateString(_T("K\x1EBFt qu\x1EA3"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 13, 2, 15, false, false);

}
void CBCTHCAPCUUVATHOIGIANCAPCUU::OnInitializeComponents(){
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
void CBCTHCAPCUUVATHOIGIANCAPCUU::OnSetWindowEvents(){
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
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CBCTHCAPCUUVATHOIGIANCAPCUU::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CBCTHCAPCUUVATHOIGIANCAPCUU::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTHCAPCUUVATHOIGIANCAPCUU::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTHCAPCUUVATHOIGIANCAPCUU::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CBCTHCAPCUUVATHOIGIANCAPCUU::SetMode(int nMode){
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
/*void CBCTHCAPCUUVATHOIGIANCAPCUU::OnFromDateChange(){
	
} */
/*void CBCTHCAPCUUVATHOIGIANCAPCUU::OnFromDateSetfocus(){
	
} */
/*void CBCTHCAPCUUVATHOIGIANCAPCUU::OnFromDateKillfocus(){
	
} */
int CBCTHCAPCUUVATHOIGIANCAPCUU::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTHCAPCUUVATHOIGIANCAPCUU::OnToDateChange(){
	
} */
/*void CBCTHCAPCUUVATHOIGIANCAPCUU::OnToDateSetfocus(){
	
} */
/*void CBCTHCAPCUUVATHOIGIANCAPCUU::OnToDateKillfocus(){
	
} */
int CBCTHCAPCUUVATHOIGIANCAPCUU::OnToDateCheckValue(){
	return 0;
} 
void CBCTHCAPCUUVATHOIGIANCAPCUU::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTHCAPCUUVATHOIGIANCAPCUU::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szEmgType, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\BCTHCAPCUUVATHOIGIANCAPCUU.RPT")))
		return;
	szSQL = GetQueryString();
	int ret =0;
	ret = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if (ret <=0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail = NULL;
	int nCONG[14];
	for(int i = 0 ; i<14; i++)
	{
		nCONG[i] = 0;
	}
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		rs.GetValue(_T("HI_NAME"), tmpStr);
		rptDetail->SetValue(_T("type"), tmpStr);

		rs.GetValue(_T("HI_ICD"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("QUAND"), tmpStr);
		nCONG[1] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("HUUD"), tmpStr);
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("QUANC"), tmpStr);
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("HUUC"), tmpStr);
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("QUANCONG"), tmpStr);
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("HUUCONG"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("QUANT"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("HUUT"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("QUANTT"), tmpStr);
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("HUUTT"), tmpStr);
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("VAOVIEN"), tmpStr);
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("CHOVE"), tmpStr);
		nCONG[12] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.GetValue(_T("TUVONG"), tmpStr);
		nCONG[14] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		rs.MoveNext();
	}
	CString  szField;
	for( int i = 2; i<=13; i++)
	{
		szField.Format(_T("s%d"), i);
		tmpStr.Format(_T("%d"), nCONG[i-1]);
		rpt.GetReportFooter()->SetValue(szField, tmpStr);
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CBCTHCAPCUUVATHOIGIANCAPCUU::OnListDblClick(){
	
} 
void CBCTHCAPCUUVATHOIGIANCAPCUU::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTHCAPCUUVATHOIGIANCAPCUU::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTHCAPCUUVATHOIGIANCAPCUU::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL, tmpStr;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("HI_NAME")), 
			rs.GetValue(_T("HI_ICD")), 
			rs.GetValue(_T("QUAND")), 
			rs.GetValue(_T("HUUD")), 
			rs.GetValue(_T("QUANC")), 
			rs.GetValue(_T("HUUC")), 
			rs.GetValue(_T("QUANCONG")),
			rs.GetValue(_T("HUUCONG")), 
			rs.GetValue(_T("QUANT")), 
			rs.GetValue(_T("HUUT")),
			rs.GetValue(_T("QUANTT")), 
			rs.GetValue(_T("HUUTT")), 
			rs.GetValue(_T("VAOVIEN")),
			rs.GetValue(_T("CHOVE")), 
			rs.GetValue(_T("TUVONG")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCTHCAPCUUVATHOIGIANCAPCUU::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHCAPCUUVATHOIGIANCAPCUU::OnDepartmentSelendok(){
	 
}
/*void CBCTHCAPCUUVATHOIGIANCAPCUU::OnDepartmentSetfocus(){
	
}*/
/*void CBCTHCAPCUUVATHOIGIANCAPCUU::OnDepartmentKillfocus(){
	
}*/
long CBCTHCAPCUUVATHOIGIANCAPCUU::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type='DT' order by id"));
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
/*void CBCTHCAPCUUVATHOIGIANCAPCUU::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCTHCAPCUUVATHOIGIANCAPCUU::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 8; 
	CString szSQL, tmpStr;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL); 
	_fmsg(_T("%s"),szSQL);
	xls.CreateSheet(1); 
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 30); 
	xls.SetColumnWidth(1, 6); 
	xls.SetColumnWidth(2, 6); 
	xls.SetColumnWidth(3, 6); 
	xls.SetColumnWidth(4, 6); 
	xls.SetColumnWidth(5, 6); 
	xls.SetColumnWidth(6, 6); 
	xls.SetColumnWidth(7, 6); 
	xls.SetColumnWidth(8, 6); 
	xls.SetColumnWidth(9, 6); 
	xls.SetColumnWidth(10, 6); 
	xls.SetColumnWidth(11, 6); 
	xls.SetColumnWidth(12, 6); 
	xls.SetColumnWidth(13, 6); 
	xls.SetColumnWidth(14, 6);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O T\xCCNH H\xCCNH \x43\x1EA4P \x43\x1EE8U V\xC0 TH\x1EDCI GI\x41N \x43\x1EA4P \x43\x1EE8U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(0, 6, _T("Lo\x1EA1i \x62\x1EC7nh \x63\x1EA5p \x63\x1EE9u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(1, 6, _T("M\xE3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(2, 6, _T("S\x1ED1 \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(2, 7, _T("\x110\x1A1n v\x1ECB \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(2, 8, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(3, 8, _T("H\x1B0u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(4, 7, _T("\x43huy\x1EC3n vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(4, 8, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(5, 8, _T("H\x1B0u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(6, 7, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(6, 8, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(7, 8, _T("H\x1B0u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(8, 6, _T("Th\x1EDDi gi\x61n \x111\x1EBFn vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(8, 7, _T("Tr\x1B0\x1EDB\x63 \x36 gi\x1EDD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(8, 8, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(9, 8, _T("H\x1B0u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(10, 7, _T("6-12 gi\x1EDD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(10, 8, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(11, 8, _T("H\x1B0u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(12, 6, _T("K\x1EBFt qu\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(12, 7, _T("V\xE0o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(12, 8, _T("Vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(13, 7, _T("Cho"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(13, 8, _T("V\x1EC1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(14, 7, _T("T\x1EED"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(14, 8, _T("Vong"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetMerge(0, 0, 0, 1);
	xls.SetMerge(1, 1, 0, 1);
	xls.SetMerge(3, 3, 0, 14);
	xls.SetMerge(4, 4, 0, 14);
	xls.SetMerge(6, 8, 0, 0);
	xls.SetMerge(6, 8, 1, 1);
	xls.SetMerge(6, 6, 2, 7);
	xls.SetMerge(7, 7, 2, 3);
	xls.SetMerge(7, 7, 4, 5);
	xls.SetMerge(7, 7, 6, 7);
	xls.SetMerge(6, 6, 8, 11);
	xls.SetMerge(7, 7, 8, 9);
	xls.SetMerge(7, 7, 10, 11);
	xls.SetMerge(6, 6, 12, 14); 
	int nTotal[15];
	for (int i = 1; i<= 14; i++)
	{
		nTotal[i] = 0;
	}
	while(!rs.IsEOF()) 
	{	 
	rs.GetValue(_T("HI_NAME"), tmpStr); 
	xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT | FMT_WRAPING);
	 
	rs.GetValue(_T("HI_ICD"), tmpStr); 
	xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_TEXT);
	 
	rs.GetValue(_T("QUAND"), tmpStr); 
	nTotal[2] += ToInt(tmpStr);
	xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("HUUD"), tmpStr); 
	nTotal[3] += ToInt(tmpStr);
	xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("QUANC"), tmpStr); 
	nTotal[4] += ToInt(tmpStr);
	xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("HUUC"), tmpStr); 
	nTotal[5] += ToInt(tmpStr);
	xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("QUANCONG"), tmpStr); 
	nTotal[6] += ToInt(tmpStr);
	xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("HUUCONG"), tmpStr); 
	nTotal[7] += ToInt(tmpStr);
	xls.SetCellText(nCol + 7, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("QUANT"), tmpStr); 
	nTotal[8] += ToInt(tmpStr);
	xls.SetCellText(nCol + 8, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("HUUT"), tmpStr); 
	nTotal[9] += ToInt(tmpStr);
	xls.SetCellText(nCol + 9, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("QUANTT"), tmpStr); 
	nTotal[10] += ToInt(tmpStr);
	xls.SetCellText(nCol + 10, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("HUUTT"), tmpStr); 
	nTotal[11] += ToInt(tmpStr);
	xls.SetCellText(nCol + 11, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("VAOVIEN"), tmpStr); 
	nTotal[12] += ToInt(tmpStr);
	xls.SetCellText(nCol + 12, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("CHOVE"), tmpStr); 
	nTotal[13] += ToInt(tmpStr);
	xls.SetCellText(nCol + 13, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	rs.GetValue(_T("TUVONG"), tmpStr); 
	nTotal[14] += ToInt(tmpStr);
	xls.SetCellText(nCol + 14, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);
	 
	nRow++; 
	rs.MoveNext();	
	}
	xls.SetCellMergedColumns(nCol, nRow +1, 1);
	xls.SetCellText(nCol, nRow+1, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER, false, 11);
	
	 for( int i = 2; i<= 14; i++)
	 {
		 tmpStr.Format(_T("%d"), nTotal[i]);
		 xls.SetCellText(i , nRow+1 , tmpStr, FMT_NUMBER1 | FMT_CENTER, false, 11);
	 }
	EndWaitCursor();
	xls.Save(_T("Exports\\BAO CAO TINH HINH CAP CUU VA THOI GIAN CAP CUU.xls"));
	
} 
int CBCTHCAPCUUVATHOIGIANCAPCUU::OnAddBCTHCAPCUUVATHOIGIANCAPCUU(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTHCAPCUUVATHOIGIANCAPCUU::OnEditBCTHCAPCUUVATHOIGIANCAPCUU(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTHCAPCUUVATHOIGIANCAPCUU::OnDeleteBCTHCAPCUUVATHOIGIANCAPCUU(){
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
 		OnCancelBCTHCAPCUUVATHOIGIANCAPCUU();
 	}
	return 0;
}
int CBCTHCAPCUUVATHOIGIANCAPCUU::OnSaveBCTHCAPCUUVATHOIGIANCAPCUU(){
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
 		//OnBCTHCAPCUUVATHOIGIANCAPCUUListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTHCAPCUUVATHOIGIANCAPCUU::OnCancelBCTHCAPCUUVATHOIGIANCAPCUU(){
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
int CBCTHCAPCUUVATHOIGIANCAPCUU::OnBCTHCAPCUUVATHOIGIANCAPCUUListLoadData(){
	return 0;
}
CString CBCTHCAPCUUVATHOIGIANCAPCUU::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, tmpStr,szDept, szWhere;
	szWhere.Format(_T("AND HCR_ADMITDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate,m_szToDate);
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND hcr_admitdept = '%s'"), m_szDepartmentKey);
	szSQL.Format(_T(" SELECT HI_NAME,HI_ICD,") \
_T("        SUM(QUAND)QUAND,SUM(HUUD)HUUD,SUM(QUANC)QUANC,SUM(HUUC)HUUC,SUM(QUAND+QUANC) QUANCONG,SUM(HUUD+HUUC) HUUCONG,") \
_T("        SUM(QUANT)QUANT,SUM(HUUT)HUUT,SUM(QUANTT)QUANTT,SUM(HUUTT)HUUTT,SUM(VAOVIEN)VAOVIEN,SUM(CHOVE)CHOVE,SUM(TUVONG)TUVONG") \
_T(" FROM(SELECT hd_icd,") \
_T("        CASE WHEN hd_object=1 AND suggestion is null THEN 1 ELSE 0 END AS QUAND,") \
_T("        CASE WHEN hd_object=2 AND suggestion is null THEN 1 ELSE 0 END AS HUUD,") \
_T("        CASE WHEN suggestion ='F' AND hd_object=1 THEN 1 ELSE 0 END AS QUANC,") \
_T("        CASE WHEN suggestion ='F' AND hd_object=2 THEN 1 ELSE 0 END AS HUUC,") \
_T("        CASE WHEN (DATE_PART('HH',admitdate))<6 AND hd_object=1 THEN 1 ELSE 0 END AS QUANT,") \
_T("        CASE WHEN (DATE_PART('HH',admitdate))<6 AND hd_object=2 THEN 1 ELSE 0 END AS HUUT,") \
_T("        CASE WHEN (DATE_PART('HH',admitdate))>=6 AND (DATE_PART('HH',admitdate))<=12 AND hd_object=1 THEN 1 ELSE 0 END AS QUANTT,") \
_T("        CASE WHEN (DATE_PART('HH',admitdate))>=6 AND (DATE_PART('HH',admitdate))<=12 AND hd_object=2 THEN 1 ELSE 0 END AS HUUTT,") \
_T("        CASE WHEN hd_object in(1,2) AND suggestion not in ('T','F','X','Y') THEN 1 ELSE 0 END AS VAOVIEN,") \
_T("        CASE WHEN suggestion in ('T','F') THEN 1 ELSE 0 END AS CHOVE,") \
_T("        CASE WHEN suggestion IN('X','Y') THEN 1 ELSE 0 END AS TUVONG") \
_T(" FROM(SELECT hd_docno, hd_icd,hd_object,") \
_T("        hcr_numinward,") \
_T(" 			 hcr_admitdate admitdate,") \
_T("        hcr_suggestion suggestion") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" %s %s ") \
_T(" AND hd_suggestion IN ('C', 'D') and hcr_numinward>0))") \
_T(" LEFT JOIN hms_icd ON(hi_icd=hd_icd)") \
_T(" GROUP BY hi_name,hi_icd"),szWhere,szDept);
	return szSQL;
}