#include "BCTHONGKECAPCUU.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTHONGKECAPCUU *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTHONGKECAPCUU *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTHONGKECAPCUU *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHONGKECAPCUU *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTHONGKECAPCUU *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTHONGKECAPCUU *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTHONGKECAPCUU *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHONGKECAPCUU *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTHONGKECAPCUU *pVw = (CBCTHONGKECAPCUU *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTHONGKECAPCUU *pVw = (CBCTHONGKECAPCUU *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTHONGKECAPCUU *pVw = (CBCTHONGKECAPCUU *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTHONGKECAPCUU*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTHONGKECAPCUU*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTHONGKECAPCUU*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTHONGKECAPCUU*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTHONGKECAPCUU* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCTHONGKECAPCUU *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCTHONGKECAPCUU *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCTHONGKECAPCUU *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCTHONGKECAPCUU *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCTHONGKECAPCUU *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddBCTHONGKECAPCUUFnc(CWnd *pWnd){
	 return ((CBCTHONGKECAPCUU*)pWnd)->OnAddBCTHONGKECAPCUU();
} 
static int _OnEditBCTHONGKECAPCUUFnc(CWnd *pWnd){
	 return ((CBCTHONGKECAPCUU*)pWnd)->OnEditBCTHONGKECAPCUU();
} 
static int _OnDeleteBCTHONGKECAPCUUFnc(CWnd *pWnd){
	 return ((CBCTHONGKECAPCUU*)pWnd)->OnDeleteBCTHONGKECAPCUU();
} 
static int _OnSaveBCTHONGKECAPCUUFnc(CWnd *pWnd){
	 return ((CBCTHONGKECAPCUU*)pWnd)->OnSaveBCTHONGKECAPCUU();
} 
static int _OnCancelBCTHONGKECAPCUUFnc(CWnd *pWnd){
	 return ((CBCTHONGKECAPCUU*)pWnd)->OnCancelBCTHONGKECAPCUU();
} 
CBCTHONGKECAPCUU::CBCTHONGKECAPCUU(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTHONGKECAPCUU::~CBCTHONGKECAPCUU(){
}
void CBCTHONGKECAPCUU::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 731, 30, 821, 55);
	m_wndPrint.Create(this, _T("&Print"), 826, 30, 916, 55);
	m_wndExport.Create(this, _T("&Export"), 921, 30, 1011, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 431, 30, 511, 55);
	m_wndDepartment.Create(this,516, 30, 726, 55); 
	
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Lo\x1EA1i \x63\x1EA5p \x63\x1EE9u"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(3, _T("\x42HQ T\x1EA1i ng\x169"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("\x42\x1EA1n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("TE<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("\x43h\xEDnh s\xE1\x63h"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(9, _T("\x44\x1ECB\x63h v\x1EE5"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("BHK"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(11, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(13, _T("KH\xC1\x43"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(14, _T("T\x1ED5ng"), CFMT_MONEY, 50);

}
void CBCTHONGKECAPCUU::OnInitializeComponents(){
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
void CBCTHONGKECAPCUU::OnSetWindowEvents(){
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
	UpdateData(false);

}
void CBCTHONGKECAPCUU::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CBCTHONGKECAPCUU::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTHONGKECAPCUU::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTHONGKECAPCUU::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CBCTHONGKECAPCUU::SetMode(int nMode){
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
/*void CBCTHONGKECAPCUU::OnFromDateChange(){
	
} */
/*void CBCTHONGKECAPCUU::OnFromDateSetfocus(){
	
} */
/*void CBCTHONGKECAPCUU::OnFromDateKillfocus(){
	
} */
int CBCTHONGKECAPCUU::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTHONGKECAPCUU::OnToDateChange(){
	
} */
/*void CBCTHONGKECAPCUU::OnToDateSetfocus(){
	
} */
/*void CBCTHONGKECAPCUU::OnToDateKillfocus(){
	
} */
int CBCTHONGKECAPCUU::OnToDateCheckValue(){
	return 0;
} 
void CBCTHONGKECAPCUU::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTHONGKECAPCUU::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szObject, szDept, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\THONGKECAPCUU.RPT")))
		return;
	szSQL =GetQueryString();
	int ret =0;
	ret = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail = NULL;
	CReportSection* grp=NULL;
	int nIdx=0;
	grp = rpt.GetGroupHeader(1);
	rptDetail = rpt.AddDetail(grp);
	int nCONG[13];
	for(int i = 1 ; i<13; i++)
	{
		nCONG[i] = 0;
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("IDTYPE"),szNewGroup);
		if(szNewGroup !=szOldGroup)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));
			tmpStr.Format(_T("%s"), rs.GetValue(_T("TYPE")));
			rptDetail->SetValue(_T("GroupName"), tmpStr);
			szOldGroup=szNewGroup;
		}
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(3));	
		rs.GetValue(_T("NAME"), tmpStr); 
		rptDetail->SetValue(_T("NAME"), tmpStr); 
	 
		rs.GetValue(_T("QUAN"), tmpStr); 
		nCONG[1] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr); 
	 
		rs.GetValue(_T("BHQTN"), tmpStr); 
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr); 
	 
		rs.GetValue(_T("BHQH"), tmpStr); 
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr); 
	 
		rs.GetValue(_T("BHQD"), tmpStr); 
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr); 
	 
		rs.GetValue(_T("BAN"), tmpStr); 
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr); 
	 
		rs.GetValue(_T("TE"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr); 
	 
		rs.GetValue(_T("CS"), tmpStr); 
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr); 
	 
		rs.GetValue(_T("DV"), tmpStr); 
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr); 
	 
		rs.GetValue(_T("BHK"), tmpStr);
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr); 
	 
		rs.GetValue(_T("BHTN"), tmpStr); 
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr); 
	 
		rs.GetValue(_T("KHAC"), tmpStr);
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr); 

		rs.GetValue(_T("CONG"), tmpStr);
		nCONG[12] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		
		rs.MoveNext();	
	}
	grp = rpt.GetGroupHeader(4);
	rptDetail = rpt.AddDetail(grp);
	CString  szField;
	for( int i = 1; i>=12; i++)
	{
		szField.Format(_T("5_%d"), i);
		tmpStr.Format(_T("%d"), nCONG[i]);
		rptDetail->SetValue(szField, tmpStr);
	}
	//-------------------------------
	grp = rpt.GetGroupHeader(5);
	rptDetail = rpt.AddDetail(grp);
	//-------------------------------
	//-------------------------------
	grp = rpt.GetGroupHeader(6);
	rptDetail = rpt.AddDetail(grp);
	//-------------------------------
	//-------------------------------
	szSQL =GetQueryString1();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nTotal[13];
	for(int i = 1 ; i<13; i++)
	{
		nTotal[i] = 0;
	}
	while(!rs.IsEOF()) 
	{	 
		grp = rpt.GetGroupHeader(7);
		rptDetail = rpt.AddDetail(grp);

		rs.GetValue(_T("NAME"), tmpStr); 
		rptDetail->SetValue(_T("NAME"), tmpStr); 
	 
		rs.GetValue(_T("QUAN"), tmpStr); 
		nTotal[1] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("1_0"), tmpStr); 
	 
		rs.GetValue(_T("BHQTN"), tmpStr); 
		nTotal[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2_1"), tmpStr); 
	 
		rs.GetValue(_T("BHQH"), tmpStr); 
		nTotal[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3_2"), tmpStr); 
	 
		rs.GetValue(_T("BHQD"), tmpStr); 
		nTotal[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4_3"), tmpStr); 
	 
		rs.GetValue(_T("BAN"), tmpStr); 
		nTotal[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5_4"), tmpStr); 
	 
		rs.GetValue(_T("TE"), tmpStr); 
		nTotal[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6_5"), tmpStr); 
	 
		rs.GetValue(_T("CS"), tmpStr); 
		nTotal[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7_6"), tmpStr); 
	 
		rs.GetValue(_T("DV"), tmpStr); 
		nTotal[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8_7"), tmpStr); 
	 
		rs.GetValue(_T("BHK"), tmpStr);
		nTotal[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9_8"), tmpStr); 
	 
		rs.GetValue(_T("BHTN"), tmpStr); 
		nTotal[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10_9"), tmpStr); 
	 
		rs.GetValue(_T("KHAC"), tmpStr);
		nTotal[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11_10"), tmpStr); 

		rs.GetValue(_T("CONG"), tmpStr);
		nTotal[12] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12_11"), tmpStr); 
	 
		rs.MoveNext();	
	}
	grp = rpt.GetGroupHeader(8);
	rptDetail = rpt.AddDetail(grp);
	CString  szField1;
	for( int i = 1; i>=12; i++)
	{
		szField1.Format(_T("%d"), i);
		tmpStr.Format(_T("%d"), nTotal[i]);
		rptDetail->SetValue(szField1, tmpStr);
	}
	
	grp = rpt.GetGroupHeader(9);
	rptDetail = rpt.AddDetail(grp);
	//-------------------------------
	//-------------------------------
	szSQL =GetQueryString2();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nTotal1[13];
	for(int i = 1 ; i<13; i++)
	{
		nTotal1[i] = 0;
	}
	while(!rs.IsEOF()) 
	{	 
		grp = rpt.GetGroupHeader(10);
		rptDetail = rpt.AddDetail(grp);

		rs.GetValue(_T("NAME"), tmpStr); 
		rptDetail->SetValue(_T("NAME"), tmpStr); 
	 
		rs.GetValue(_T("QUAN"), tmpStr); 
		nTotal1[1] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr); 
	 
		rs.GetValue(_T("BHQTN"), tmpStr); 
		nTotal1[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr); 
	 
		rs.GetValue(_T("BHQH"), tmpStr); 
		nTotal1[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr); 
	 
		rs.GetValue(_T("BHQD"), tmpStr); 
		nTotal1[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr); 
	 
		rs.GetValue(_T("BAN"), tmpStr); 
		nTotal1[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr); 
	 
		rs.GetValue(_T("TE"), tmpStr); 
		nTotal1[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr); 
	 
		rs.GetValue(_T("CS"), tmpStr); 
		nTotal1[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr); 
	 
		rs.GetValue(_T("DV"), tmpStr); 
		nTotal1[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr); 
	 
		rs.GetValue(_T("BHK"), tmpStr);
		nTotal1[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr); 
	 
		rs.GetValue(_T("BHTN"), tmpStr); 
		nTotal1[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr); 
	 
		rs.GetValue(_T("KHAC"), tmpStr);
		nTotal1[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr); 

		rs.GetValue(_T("CONG"), tmpStr);
		nTotal1[12] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr); 
	 
		rs.MoveNext();	
	}
	//-------------------------------
	//-------------------------------
	grp = rpt.GetGroupHeader(11);
	rptDetail = rpt.AddDetail(grp);
	CString  szField2;
	for( int i = 1; i>=12; i++)
	{
		szField2.Format(_T("%d"), i);
		tmpStr.Format(_T("%d"), nTotal1[i]);
		rptDetail->SetValue(szField2, tmpStr);
	}
	//-------------------------------
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();	
} 
void CBCTHONGKECAPCUU::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHONGKECAPCUU::OnListDblClick(){
	
} 
void CBCTHONGKECAPCUU::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTHONGKECAPCUU::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTHONGKECAPCUU::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szObject, szNewGroup, szOldGroup;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	int nIndex=1;
	int nItem=1;
	CString szChapter,szDesc;
	szChapter = _T("");
	szDesc.Format(_T("a. S\x1ED1 l\x1B0\x1EE3ng"));
			nItem = m_wndList.AddItems(szChapter, szDesc, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 8);
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 192), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
	while(!rs.IsEOF()){
		rs.GetValue(_T("IDTYPE"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{	
			rs.GetValue(_T("TYPE"), tmpStr);
			nItem = m_wndList.AddItems(szNewGroup, tmpStr, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 8);
			m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szOldGroup = szNewGroup;
			nIndex=1;
		}
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("NAME")), 
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
			rs.GetValue(_T("KHAC")), 
			rs.GetValue(_T("CONG")),NULL);
		rs.MoveNext();
	}
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	szChapter = _T("");
	szDesc.Format(_T("\x62. Th\x1EDDi gi\x61n t\x1EEB l\xFA\x63 \x62\x1ECB th\x1B0\x1A1ng (\x62\x1ECB \x62\x1EC7nh) \x111\x1EBFn khi v\xE0o vi\x1EC7n"));
			nItem = m_wndList.AddItems(szChapter, szDesc, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 8);
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 192), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
	nIndex=1;
	szDesc.Format(_T("N\x1ED9i kho\x61"));
			nItem = m_wndList.AddItems(szChapter, szDesc, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 8);
			m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("NAME")), 
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
			rs.GetValue(_T("KHAC")), 
			rs.GetValue(_T("CONG")),NULL);
		rs.MoveNext();
	}
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	nIndex=1;
	szDesc.Format(_T("Ngo\x1EA1i kho\x61 + \x43huy\xEAn kho\x61"));
			nItem = m_wndList.AddItems(szChapter, szDesc, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 8);
			m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("NAME")), 
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
			rs.GetValue(_T("KHAC")), 
			rs.GetValue(_T("CONG")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCTHONGKECAPCUU::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHONGKECAPCUU::OnDepartmentSelendok(){
	 
}
/*void CBCTHONGKECAPCUU::OnDepartmentSetfocus(){
	
}*/
/*void CBCTHONGKECAPCUU::OnDepartmentKillfocus(){
	
}*/
long CBCTHONGKECAPCUU::OnDepartmentLoadData(){
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
/*void CBCTHONGKECAPCUU::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCTHONGKECAPCUU::OnAddBCTHONGKECAPCUU(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTHONGKECAPCUU::OnEditBCTHONGKECAPCUU(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTHONGKECAPCUU::OnDeleteBCTHONGKECAPCUU(){
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
 		OnCancelBCTHONGKECAPCUU();
 	}
	return 0;
}
int CBCTHONGKECAPCUU::OnSaveBCTHONGKECAPCUU(){
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
 		//OnBCTHONGKECAPCUUListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTHONGKECAPCUU::OnCancelBCTHONGKECAPCUU(){
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
int CBCTHONGKECAPCUU::OnBCTHONGKECAPCUUListLoadData(){
	return 0;
}
CString CBCTHONGKECAPCUU::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept;
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND hcr_admitdept = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HCR_ADMITDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT IDTYPE,") \
_T("        (SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hrl_depttype' AND SS_CODE = CAST(IDTYPE AS NUMBER)) TYPE,") \
_T("        ID,NAME,QUAN,BHQTN,BHQH,BHQD,BAN,TE,CS,DV,BHK,BHTN,KHAC,CONG") \
_T(" FROM(SELECT 1 IDTYPE,ID,(SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hrl_type' AND SS_CODE = CAST(ID AS NUMBER)) NAME,") \
_T("        SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,SUM(KHAC) KHAC,") \
_T("        SUM(QUAN+BHQTN+BHQH+BHQD+BAN+TE+CS+DV+BHK+BHTN+KHAC) CONG") \
_T(" FROM(SELECT 1 ID,HRL_TYPE,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 2 ID,HRL_TYPE,hcr_admitdate,") \
_T("        0 QUAN,0 BHQTN,0 BHQH,0 BHQD,0 BAN,0 TE,0 CS,0 DV,0 BHK,0 BHTN,0 KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 3 ID,HRL_TYPE,hcr_admitdate,") \
_T("        0 QUAN,0 BHQTN,0 BHQH,0 BHQD,0 BAN,0 TE,0 CS,0 DV,0 BHK,0 BHTN,0 KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0))") \
_T(" WHERE hrl_type=2") \
_T(" GROUP BY id") \
_T(" UNION") \
_T(" SELECT 2 IDTYPE,ID,(SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hrl_type' AND SS_CODE = CAST(ID AS NUMBER)) NAME,") \
_T("        SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,SUM(KHAC) KHAC,") \
_T("        SUM(QUAN+BHQTN+BHQH+BHQD+BAN+TE+CS+DV+BHK+BHTN+KHAC) CONG") \
_T(" FROM(SELECT 1 ID,HRL_TYPE,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 2 ID,HRL_TYPE,hcr_admitdate,") \
_T("        0 QUAN,0 BHQTN,0 BHQH,0 BHQD,0 BAN,0 TE,0 CS,0 DV,0 BHK,0 BHTN,0 KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 3 ID,HRL_TYPE,hcr_admitdate,") \
_T("        0 QUAN,0 BHQTN,0 BHQH,0 BHQD,0 BAN,0 TE,0 CS,0 DV,0 BHK,0 BHTN,0 KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0))") \
_T(" WHERE hrl_type=3") \
_T(" GROUP BY id") \
_T(" UNION") \
_T(" SELECT 3 IDTYPE,ID,(SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hrl_type' AND SS_CODE = CAST(ID AS NUMBER)) NAME,") \
_T("        SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,SUM(KHAC) KHAC,") \
_T("        SUM(QUAN+BHQTN+BHQH+BHQD+BAN+TE+CS+DV+BHK+BHTN+KHAC) CONG") \
_T(" FROM(SELECT 1 ID,HRL_TYPE,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 2 ID,HRL_TYPE,hcr_admitdate,") \
_T("        0 QUAN,0 BHQTN,0 BHQH,0 BHQD,0 BAN,0 TE,0 CS,0 DV,0 BHK,0 BHTN,0 KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 3 ID,HRL_TYPE,hcr_admitdate,") \
_T("        0 QUAN,0 BHQTN,0 BHQH,0 BHQD,0 BAN,0 TE,0 CS,0 DV,0 BHK,0 BHTN,0 KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0))") \
_T(" WHERE hrl_type>3") \
_T(" GROUP BY id)"),szWhere,szDept,szWhere,szDept,szWhere,szDept,szWhere,szDept,szWhere,szDept,szWhere,szDept,szWhere,szDept,szWhere,szDept,szWhere,szDept);
	return szSQL;
}
CString CBCTHONGKECAPCUU::GetQueryString1(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept;
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND hcr_admitdept = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HCR_ADMITDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT ID,") \
_T("        (SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hms_date' AND SS_CODE = CAST(ID AS NUMBER)) NAME,") \
_T("        SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,SUM(KHAC) KHAC,") \
_T("        SUM(QUAN+BHQTN+BHQH+BHQD+BAN+TE+CS+DV+BHK+BHTN+KHAC) CONG") \
_T(" FROM(SELECT 1 ID,hrl_type,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 2 ID,hrl_type,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 AND (DATE_PART('HH',hcr_admitdate))>6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND (DATE_PART('HH',hcr_admitdate))>6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND (DATE_PART('HH',hcr_admitdate))>6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 3 ID,hrl_type,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 4 ID,hrl_type,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 5 ID,hrl_type,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0))") \
_T(" WHERE hrl_type=2") \
_T(" GROUP BY ID") \
_T(" ORDER BY ID"),szWhere,szDept,szWhere,szDept,szWhere,szDept,szWhere,szDept,szWhere,szDept);
	return szSQL;
}
CString CBCTHONGKECAPCUU::GetQueryString2(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept;
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND hcr_admitdept = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HCR_ADMITDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT ID,") \
_T("        (SELECT SS_DESC FROM SYS_SEL WHERE SS_ID = 'hms_date' AND SS_CODE = CAST(ID AS NUMBER)) NAME,") \
_T("        SUM(QUAN) QUAN,SUM(BHQTN) BHQTN,SUM(BHQH) BHQH,SUM(BHQD) BHQD,SUM(BAN) BAN,SUM(TE) TE,SUM(CS) CS,SUM(DV) DV,SUM(BHK) BHK,SUM(BHTN) BHTN,SUM(KHAC) KHAC,") \
_T("        SUM(QUAN+BHQTN+BHQH+BHQD+BAN+TE+CS+DV+BHK+BHTN+KHAC) CONG") \
_T(" FROM(SELECT 1 ID,hrl_type,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND (DATE_PART('HH',hcr_admitdate))<6 THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s ") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 2 ID,hrl_type,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 AND (DATE_PART('HH',hcr_admitdate))>6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND (DATE_PART('HH',hcr_admitdate))>6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND (DATE_PART('HH',hcr_admitdate))>6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND (DATE_PART('HH',hcr_admitdate))>=6 AND (DATE_PART('HH',hcr_admitdate))<12 THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s ") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 3 ID,hrl_type,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND (DATE_PART('HH',hcr_admitdate))>=12 AND (DATE_PART('HH',hcr_admitdate))<24 THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 4 ID,hrl_type,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND (DATE_PART('HH',hcr_admitdate))>=24 AND (DATE_PART('HH',hcr_admitdate))<48 THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P', 'I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0)") \
_T(" UNION") \
_T(" SELECT 5 ID,hrl_type,hcr_admitdate,") \
_T("        CASE WHEN hd_object=1 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END QUAN,") \
_T("        CASE WHEN hd_object=11 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BHQTN,") \
_T("        CASE WHEN hd_object=2 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BHQH,") \
_T("        CASE WHEN hd_object=10 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BHQD,") \
_T("        CASE WHEN hd_object=8 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BAN,") \
_T("        CASE WHEN hd_object IN (9,6) AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END TE,") \
_T("        CASE WHEN hd_object=3 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END CS,") \
_T("        CASE WHEN hd_object=7 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END DV,") \
_T("        CASE WHEN hd_object=4 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BHK,") \
_T("        CASE WHEN hd_object=5 AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END BHTN,") \
_T("        CASE WHEN hd_object NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND (DATE_PART('HH',hcr_admitdate))>=48 THEN 1 ELSE 0 END AS KHAC") \
_T(" FROM(SELECT hd_object, hcr_admitdept,hcr_numinward, hcr_admitdate,hd_admitdept,hrl_type") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_doctor=hd_doctor)") \
_T(" LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid)") \
_T(" WHERE hd_status IN('P','I','T') ") \
_T(" AND hd_admitdept='C1.3'") \
_T(" %s %s") \
_T(" AND hd_suggestion IN ('C', 'D') AND hcr_numinward>0))") \
_T(" WHERE hrl_type>=3") \
_T(" GROUP BY ID") \
_T(" ORDER BY ID"),szWhere,szDept,szWhere,szDept,szWhere,szDept,szWhere,szDept,szWhere,szDept);
	return szSQL;
}