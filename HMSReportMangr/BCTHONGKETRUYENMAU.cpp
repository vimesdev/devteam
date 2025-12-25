#include "BCTHONGKETRUYENMAU.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTHONGKETRUYENMAU *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTHONGKETRUYENMAU *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTHONGKETRUYENMAU *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHONGKETRUYENMAU *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTHONGKETRUYENMAU *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTHONGKETRUYENMAU *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTHONGKETRUYENMAU *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHONGKETRUYENMAU *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTHONGKETRUYENMAU *pVw = (CBCTHONGKETRUYENMAU *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTHONGKETRUYENMAU *pVw = (CBCTHONGKETRUYENMAU *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTHONGKETRUYENMAU *pVw = (CBCTHONGKETRUYENMAU *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTHONGKETRUYENMAU*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTHONGKETRUYENMAU*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTHONGKETRUYENMAU*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTHONGKETRUYENMAU*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCTHONGKETRUYENMAUFnc(CWnd *pWnd){
	 return ((CBCTHONGKETRUYENMAU*)pWnd)->OnAddBCTHONGKETRUYENMAU();
} 
static int _OnEditBCTHONGKETRUYENMAUFnc(CWnd *pWnd){
	 return ((CBCTHONGKETRUYENMAU*)pWnd)->OnEditBCTHONGKETRUYENMAU();
} 
static int _OnDeleteBCTHONGKETRUYENMAUFnc(CWnd *pWnd){
	 return ((CBCTHONGKETRUYENMAU*)pWnd)->OnDeleteBCTHONGKETRUYENMAU();
} 
static int _OnSaveBCTHONGKETRUYENMAUFnc(CWnd *pWnd){
	 return ((CBCTHONGKETRUYENMAU*)pWnd)->OnSaveBCTHONGKETRUYENMAU();
} 
static int _OnCancelBCTHONGKETRUYENMAUFnc(CWnd *pWnd){
	 return ((CBCTHONGKETRUYENMAU*)pWnd)->OnCancelBCTHONGKETRUYENMAU();
} 
CBCTHONGKETRUYENMAU::CBCTHONGKETRUYENMAU(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTHONGKETRUYENMAU::~CBCTHONGKETRUYENMAU(){
}
void CBCTHONGKETRUYENMAU::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 3, 6, 1012, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 430, 30, 520, 55);
	m_wndLoad.EnableWindow(false);
	m_wndPrint.Create(this, _T("&Print"), 525, 30, 615, 55);
	m_wndExport.Create(this, _T("&Export"), 620, 30, 710, 55);
	m_wndExport.EnableWindow(false);
	m_wndList.Create(this,3, 64, 1012, 614); 

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Th\xF4ng tin truy\x1EC1n m\xE1u"), CFMT_NUMBER, 150);
	m_wndList.InsertColumn(2, _T("Qu\xE2n"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(3, _T("BHQ T\x1EA1i ng\x169"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(4, _T("BHQH"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(5, _T("\x42HQ\x110"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(6, _T("\x42\x1EA1n"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(7, _T("TE <6T"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(8, _T("CS"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(9, _T("DV"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(10, _T("BHK"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(11, _T("BHTN"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(12, _T("Kh\xE1\x63"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(13, _T("\x43\x1ED9ng"), CFMT_NUMBER, 70);

}
void CBCTHONGKETRUYENMAU::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CBCTHONGKETRUYENMAU::OnSetWindowEvents(){
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
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CBCTHONGKETRUYENMAU::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBCTHONGKETRUYENMAU::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTHONGKETRUYENMAU::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTHONGKETRUYENMAU::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBCTHONGKETRUYENMAU::SetMode(int nMode){
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
/*void CBCTHONGKETRUYENMAU::OnFromDateChange(){
	
} */
/*void CBCTHONGKETRUYENMAU::OnFromDateSetfocus(){
	
} */
/*void CBCTHONGKETRUYENMAU::OnFromDateKillfocus(){
	
} */
int CBCTHONGKETRUYENMAU::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTHONGKETRUYENMAU::OnToDateChange(){
	
} */
/*void CBCTHONGKETRUYENMAU::OnToDateSetfocus(){
	
} */
/*void CBCTHONGKETRUYENMAU::OnToDateKillfocus(){
	
} */
int CBCTHONGKETRUYENMAU::OnToDateCheckValue(){
	return 0;
} 
void CBCTHONGKETRUYENMAU::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHONGKETRUYENMAU::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szNewGroup, szOldGroup,szNewGroup1, szOldGroup1;
	CReportSection *rptDetail = NULL;
	CReportSection *rptSector = NULL;
	CReportSection *rptFooter = NULL;
	CRecord rs(&pMF->m_db);
	CString szCol, szData;
	if(!rpt.Init(_T("Reports/HMS/THONGKETRUYENMAU.RPT")) )
		return ;
	CReportSection *pTemp = rpt.GetGroupHeader(1);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	BeginWaitCursor();
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	int nCONG[46];
	for(int i = 0 ; i<46; i++)
	{
		nCONG[i] = 0;
	}
	while(!rs.IsEOF()) 
	{	 
		rs.GetValue(_T("ID"), szNewGroup);
		if(szNewGroup !=szOldGroup)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			tmpStr.Format(_T("%s"), rs.GetValue(_T("GROUPNAME")));
			rptDetail->SetValue(_T("GROUPNAME"), tmpStr);
			szOldGroup=szNewGroup;
		}
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));
			rs.GetValue(_T("QUANN"), tmpStr); 
			rptDetail->SetValue(_T("1"), tmpStr); 

			rs.GetValue(_T("BHQTNN"), tmpStr); 
			rptDetail->SetValue(_T("2"), tmpStr); 

			rs.GetValue(_T("BHQHN"), tmpStr); 
			rptDetail->SetValue(_T("3"), tmpStr); 

			rs.GetValue(_T("BHQDN"), tmpStr); 
			rptDetail->SetValue(_T("4"), tmpStr); 

			rs.GetValue(_T("BANN"), tmpStr); 
			rptDetail->SetValue(_T("5"), tmpStr); 

			rs.GetValue(_T("TEN"), tmpStr); 
			rptDetail->SetValue(_T("6"), tmpStr); 

			rs.GetValue(_T("CSN"), tmpStr); 
			rptDetail->SetValue(_T("7"), tmpStr); 

			rs.GetValue(_T("DVN"), tmpStr); 
			rptDetail->SetValue(_T("8"), tmpStr); 

			rs.GetValue(_T("BHKN"), tmpStr); 
			rptDetail->SetValue(_T("9"), tmpStr); 

			rs.GetValue(_T("BHTNN"), tmpStr); 
			rptDetail->SetValue(_T("10"), tmpStr); 

			rs.GetValue(_T("KHACN"), tmpStr); 
			rptDetail->SetValue(_T("11"), tmpStr); 

			rs.GetValue(_T("CONGN"), tmpStr); 
			rptDetail->SetValue(_T("12"), tmpStr); 

			rs.GetValue(_T("QUANN1"), tmpStr); 
			rptDetail->SetValue(_T("2_1"), tmpStr); 

			rs.GetValue(_T("BHQTNN1"), tmpStr); 
			rptDetail->SetValue(_T("2_2"), tmpStr); 

			rs.GetValue(_T("BHQHN1"), tmpStr); 
			rptDetail->SetValue(_T("2_3"), tmpStr); 

			rs.GetValue(_T("BHQDN1"), tmpStr); 
			rptDetail->SetValue(_T("2_4"), tmpStr); 

			rs.GetValue(_T("BANN1"), tmpStr); 
			rptDetail->SetValue(_T("2_5"), tmpStr); 

			rs.GetValue(_T("TEN1"), tmpStr); 
			rptDetail->SetValue(_T("2_6"), tmpStr); 

			rs.GetValue(_T("CSN1"), tmpStr); 
			rptDetail->SetValue(_T("2_7"), tmpStr); 

			rs.GetValue(_T("DVN1"), tmpStr); 
			rptDetail->SetValue(_T("2_8"), tmpStr); 

			rs.GetValue(_T("BHKN1"), tmpStr); 
			rptDetail->SetValue(_T("2_9"), tmpStr); 

			rs.GetValue(_T("BHTNN1"), tmpStr); 
			rptDetail->SetValue(_T("2_10"), tmpStr); 

			rs.GetValue(_T("KHACN1"), tmpStr); 
			rptDetail->SetValue(_T("2_11"), tmpStr); 

			rs.GetValue(_T("CONGN1"), tmpStr); 
			rptDetail->SetValue(_T("2_12"), tmpStr); 

			rs.GetValue(_T("QUANG"), tmpStr); 
			rptDetail->SetValue(_T("3_1"), tmpStr); 

			rs.GetValue(_T("BHQTNG"), tmpStr); 
			rptDetail->SetValue(_T("3_2"), tmpStr); 

			rs.GetValue(_T("BHQHG"), tmpStr); 
			rptDetail->SetValue(_T("3_3"), tmpStr); 

			rs.GetValue(_T("BHQDG"), tmpStr); 
			rptDetail->SetValue(_T("3_4"), tmpStr); 

			rs.GetValue(_T("BANG"), tmpStr); 
			rptDetail->SetValue(_T("3_5"), tmpStr); 

			rs.GetValue(_T("TEG"), tmpStr); 
			rptDetail->SetValue(_T("3_6"), tmpStr); 

			rs.GetValue(_T("CSG"), tmpStr); 
			rptDetail->SetValue(_T("3_7"), tmpStr); 

			rs.GetValue(_T("DVG"), tmpStr); 
			rptDetail->SetValue(_T("3_8"), tmpStr); 

			rs.GetValue(_T("BHKG"), tmpStr); 
			rptDetail->SetValue(_T("3_9"), tmpStr); 

			rs.GetValue(_T("BHTNG"), tmpStr); 
			rptDetail->SetValue(_T("3_10"), tmpStr); 

			rs.GetValue(_T("KHACG"), tmpStr); 
			rptDetail->SetValue(_T("3_11"), tmpStr); 

			rs.GetValue(_T("CONGG"), tmpStr); 
			rptDetail->SetValue(_T("3_12"), tmpStr);

			rs.GetValue(_T("QUANG1"), tmpStr); 
			rptDetail->SetValue(_T("4_1"), tmpStr); 

			rs.GetValue(_T("BHQTNG1"), tmpStr); 
			rptDetail->SetValue(_T("4_2"), tmpStr); 

			rs.GetValue(_T("BHQHG1"), tmpStr); 
			rptDetail->SetValue(_T("4_3"), tmpStr); 

			rs.GetValue(_T("BHQDG1"), tmpStr); 
			rptDetail->SetValue(_T("4_4"), tmpStr); 

			rs.GetValue(_T("BANG1"), tmpStr); 
			rptDetail->SetValue(_T("4_5"), tmpStr); 

			rs.GetValue(_T("TEG1"), tmpStr); 
			rptDetail->SetValue(_T("4_6"), tmpStr); 

			rs.GetValue(_T("CSG1"), tmpStr); 
			rptDetail->SetValue(_T("4_7"), tmpStr); 

			rs.GetValue(_T("DVG1"), tmpStr); 
			rptDetail->SetValue(_T("4_8"), tmpStr); 

			rs.GetValue(_T("BHKG1"), tmpStr); 
			rptDetail->SetValue(_T("4_9"), tmpStr); 

			rs.GetValue(_T("BHTNG1"), tmpStr); 
			rptDetail->SetValue(_T("4_10"), tmpStr); 

			rs.GetValue(_T("KHACG1"), tmpStr); 
			rptDetail->SetValue(_T("4_11"), tmpStr); 

			rs.GetValue(_T("CONGG1"), tmpStr); 
			rptDetail->SetValue(_T("4_12"), tmpStr);
	 
		rs.MoveNext();	
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
} 
void CBCTHONGKETRUYENMAU::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHONGKETRUYENMAU::OnListDblClick(){
	
} 
void CBCTHONGKETRUYENMAU::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTHONGKETRUYENMAU::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTHONGKETRUYENMAU::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CBCTHONGKETRUYENMAU::OnAddBCTHONGKETRUYENMAU(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTHONGKETRUYENMAU::OnEditBCTHONGKETRUYENMAU(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTHONGKETRUYENMAU::OnDeleteBCTHONGKETRUYENMAU(){
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
 		OnCancelBCTHONGKETRUYENMAU();
 	}
	return 0;
}
int CBCTHONGKETRUYENMAU::OnSaveBCTHONGKETRUYENMAU(){
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
 		//OnBCTHONGKETRUYENMAUListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTHONGKETRUYENMAU::OnCancelBCTHONGKETRUYENMAU(){
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
int CBCTHONGKETRUYENMAU::OnBCTHONGKETRUYENMAUListLoadData(){
	return 0;
}
CString CBCTHONGKETRUYENMAU::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND HPC_ORDERDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT 1 ID,' 1. M\xE1u to\xE0n ph\x1EA7n' GROUPNAME,") \
_T("        SUM(QUANN) QUANN,SUM(QUANN1) QUANN1,SUM(BHQTNN) BHQTNN,SUM(BHQTNN1) BHQTNN1,SUM(BHQHN) BHQHN,SUM(BHQHN1) BHQHN1,SUM(BHQDN) BHQDN,SUM(BHQDN1) BHQDN1,SUM(BANN) BANN,SUM(BANN1) BANN1,SUM(TEN) TEN,SUM(TEN1) TEN1,SUM(CSN) CSN,SUM(CSN1) CSN1,SUM(DVN) DVN,SUM(DVN1) DVN1,SUM(BHKN) BHKN,SUM(BHKN1) BHKN1,SUM(BHTNN) BHTNN,SUM(BHTNN1) BHTNN1,SUM(KHACN) KHACN,SUM(KHACN1) KHACN1,") \
_T("        (SUM(QUANN)+SUM(BHQTNN)+SUM(BHQHN)+SUM(BHQDN)+SUM(BANN)+SUM(TEN)+SUM(CSN)+SUM(DVN)+SUM(BHKN)+SUM(BHTNN)+SUM(KHACN)) CONGN,") \
_T("        (SUM(QUANN1)+SUM(BHQTNN1)+SUM(BHQHN1)+SUM(BHQDN1)+SUM(BANN1)+SUM(TEN1)+SUM(CSN1)+SUM(DVN1)+SUM(BHKN1)+SUM(BHTNN1)+SUM(KHACN1)) CONGN1,") \
_T("        SUM(QUANG) QUANG,SUM(QUANG1) QUANG1,SUM(BHQTNG) BHQTNG,SUM(BHQTNG1) BHQTNG1,SUM(BHQHG) BHQHG,SUM(BHQHG1) BHQHG1,SUM(BHQDG) BHQDG,SUM(BHQDG1) BHQDG1,SUM(BANG) BANG,SUM(BANG1) BANG1,SUM(TEG) TEG,SUM(TEG1) TEG1,SUM(CSG) CSG,SUM(CSG1) CSG1,SUM(DVG) DVG,SUM(DVG1) DVG1,SUM(BHKG) BHKG,SUM(BHKG1) BHKG1,SUM(BHTNG) BHTNG,SUM(BHTNG1) BHTNG1,SUM(KHACG) KHACG,SUM(KHACG1) KHACG1,") \
_T("        (SUM(QUANG)+SUM(BHQTNG)+SUM(BHQHG)+SUM(BHQDG)+SUM(BANG)+SUM(TEG)+SUM(CSG)+SUM(DVG)+SUM(BHKG)+SUM(BHTNG)+SUM(KHACG)) CONGG,") \
_T("        (SUM(QUANG1)+SUM(BHQTNG1)+SUM(BHQHG1)+SUM(BHQDG1)+SUM(BANG1)+SUM(TEG1)+SUM(CSG1)+SUM(DVG1)+SUM(BHKG1)+SUM(BHTNG1)+SUM(KHACG1)) CONGG1") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_GROUPID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS QUANN,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS QUANN1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQTNN,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQTNN1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQHN,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQHN1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQDN,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQDN1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BANN,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BANN1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS TEN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS TEN1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS CSN,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS CSN1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS DVN,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS DVN1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHKN,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHKN1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHTNN,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHTNN1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS KHACN,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS KHACN1,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS QUANG,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS QUANG1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQTNG,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQTNG1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQHG,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQHG1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQDG,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQDG1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BANG,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BANG1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS TEG,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS TEG1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS CSG,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS CSG1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS DVG,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS DVG1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHKG,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHKG1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHTNG,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHTNG1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS KHACG,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS KHACG1") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPCL_DOCNO=HPC_DOCNO)") \
_T(" WHERE HPC_GROUPID IN('B1800') AND hpcl_itemid IN('B180002548','B180002549','B180002564','B180002550','B180002551','B180002565') %s )") \
_T(" GROUP BY HPC_GROUPID") \
_T(" UNION") \
_T(" SELECT 2 ID,'2. \x43h\x1EBF ph\x1EA9m' GROUPNAME,") \
_T("        SUM(QUANN) QUANN,SUM(QUANN1) QUANN1,SUM(BHQTNN) BHQTNN,SUM(BHQTNN1) BHQTNN1,SUM(BHQHN) BHQHN,SUM(BHQHN1) BHQHN1,SUM(BHQDN) BHQDN,SUM(BHQDN1) BHQDN1,SUM(BANN) BANN,SUM(BANN1) BANN1,SUM(TEN) TEN,SUM(TEN1) TEN1,SUM(CSN) CSN,SUM(CSN1) CSN1,SUM(DVN) DVN,SUM(DVN1) DVN1,SUM(BHKN) BHKN,SUM(BHKN1) BHKN1,SUM(BHTNN) BHTNN,SUM(BHTNN1) BHTNN1,SUM(KHACN) KHACN,SUM(KHACN1) KHACN1,") \
_T("        (SUM(QUANN)+SUM(BHQTNN)+SUM(BHQHN)+SUM(BHQDN)+SUM(BANN)+SUM(TEN)+SUM(CSN)+SUM(DVN)+SUM(BHKN)+SUM(BHTNN)+SUM(KHACN)) CONGN,") \
_T("        (SUM(QUANN1)+SUM(BHQTNN1)+SUM(BHQHN1)+SUM(BHQDN1)+SUM(BANN1)+SUM(TEN1)+SUM(CSN1)+SUM(DVN1)+SUM(BHKN1)+SUM(BHTNN1)+SUM(KHACN1)) CONGN1,") \
_T("        SUM(QUANG) QUANG,SUM(QUANG1) QUANG1,SUM(BHQTNG) BHQTNG,SUM(BHQTNG1) BHQTNG1,SUM(BHQHG) BHQHG,SUM(BHQHG1) BHQHG1,SUM(BHQDG) BHQDG,SUM(BHQDG1) BHQDG1,SUM(BANG) BANG,SUM(BANG1) BANG1,SUM(TEG) TEG,SUM(TEG1) TEG1,SUM(CSG) CSG,SUM(CSG1) CSG1,SUM(DVG) DVG,SUM(DVG1) DVG1,SUM(BHKG) BHKG,SUM(BHKG1) BHKG1,SUM(BHTNG) BHTNG,SUM(BHTNG1) BHTNG1,SUM(KHACG) KHACG,SUM(KHACG1) KHACG1,") \
_T("        (SUM(QUANG)+SUM(BHQTNG)+SUM(BHQHG)+SUM(BHQDG)+SUM(BANG)+SUM(TEG)+SUM(CSG)+SUM(DVG)+SUM(BHKG)+SUM(BHTNG)+SUM(KHACG)) CONGG,") \
_T("        (SUM(QUANG1)+SUM(BHQTNG1)+SUM(BHQHG1)+SUM(BHQDG1)+SUM(BANG1)+SUM(TEG1)+SUM(CSG1)+SUM(DVG1)+SUM(BHKG1)+SUM(BHTNG1)+SUM(KHACG1)) CONGG1") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_GROUPID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS QUANN,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS QUANN1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQTNN,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQTNN1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQHN,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQHN1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQDN,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQDN1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BANN,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BANN1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS TEN,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS TEN1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS CSN,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS CSN1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS DVN,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS DVN1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHKN,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHKN1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHTNN,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHTNN1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS KHACN,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS KHACN1,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS QUANG,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS QUANG1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQTNG,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQTNG1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQHG,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQHG1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQDG,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQDG1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BANG,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BANG1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS TEG,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS TEG1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS CSG,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS CSG1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS DVG,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS DVG1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHKG,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHKG1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHTNG,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHTNG1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS KHACG,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS KHACG1") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPCL_DOCNO=HPC_DOCNO)") \
_T(" WHERE HPC_GROUPID IN('B1800') AND hpcl_itemid IN('B180002552','B180002553','B180002554','B180002555','B180002556','B180002566') %s )") \
_T(" GROUP BY HPC_GROUPID"),szWhere,szWhere);
	return szSQL;
}