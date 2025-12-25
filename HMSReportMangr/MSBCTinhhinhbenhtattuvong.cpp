#include "MSBCTinhhinhbenhtattuvong.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCTinhhinhbenhtattuvong *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCTinhhinhbenhtattuvong *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCTinhhinhbenhtattuvong *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCTinhhinhbenhtattuvong *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCTinhhinhbenhtattuvong *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCTinhhinhbenhtattuvong *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCTinhhinhbenhtattuvong *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCTinhhinhbenhtattuvong *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CMSBCTinhhinhbenhtattuvong *pVw = (CMSBCTinhhinhbenhtattuvong *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CMSBCTinhhinhbenhtattuvong *pVw = (CMSBCTinhhinhbenhtattuvong *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMSBCTinhhinhbenhtattuvong *pVw = (CMSBCTinhhinhbenhtattuvong *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMSBCTinhhinhbenhtattuvong*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMSBCTinhhinhbenhtattuvong*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMSBCTinhhinhbenhtattuvong*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMSBCTinhhinhbenhtattuvong*)pWnd)->OnListDeleteItem();
} 
static int _OnAddMSBCTinhhinhbenhtattuvongFnc(CWnd *pWnd){
	 return ((CMSBCTinhhinhbenhtattuvong*)pWnd)->OnAddMSBCTinhhinhbenhtattuvong();
} 
static int _OnEditMSBCTinhhinhbenhtattuvongFnc(CWnd *pWnd){
	 return ((CMSBCTinhhinhbenhtattuvong*)pWnd)->OnEditMSBCTinhhinhbenhtattuvong();
} 
static int _OnDeleteMSBCTinhhinhbenhtattuvongFnc(CWnd *pWnd){
	 return ((CMSBCTinhhinhbenhtattuvong*)pWnd)->OnDeleteMSBCTinhhinhbenhtattuvong();
} 
static int _OnSaveMSBCTinhhinhbenhtattuvongFnc(CWnd *pWnd){
	 return ((CMSBCTinhhinhbenhtattuvong*)pWnd)->OnSaveMSBCTinhhinhbenhtattuvong();
} 
static int _OnCancelMSBCTinhhinhbenhtattuvongFnc(CWnd *pWnd){
	 return ((CMSBCTinhhinhbenhtattuvong*)pWnd)->OnCancelMSBCTinhhinhbenhtattuvong();
} 
CMSBCTinhhinhbenhtattuvong::CMSBCTinhhinhbenhtattuvong(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMSBCTinhhinhbenhtattuvong::~CMSBCTinhhinhbenhtattuvong(){
}
void CMSBCTinhhinhbenhtattuvong::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 430, 30, 520, 55);
	m_wndPrint.Create(this, _T("&Print"), 525, 30, 615, 55);
	//m_wndExport.Create(this, _T("&Export"), 620, 30, 710, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Nguy\xEAn nh\xE2n t\x1EED vong"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(2, _T("M\xE3"), CFMT_TEXT, 50);

	m_wndList.InsertColumn(3, _T("Qu\xE2n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(4, _T("H\x1B0u"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(5, _T("\x43\x1ED9ng"), CFMT_NUMBER, 50);

	m_wndList.InsertColumn(6, _T("\x42\x1EC7nh vi\x1EC7n"), CFMT_NUMBER, 50);

	m_wndList.InsertColumn(7, _T("Thg \x110\x1EA1i t\x1B0\x1EDBng"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(8, _T("Thi\x1EBFu trung t\x1B0\x1EDBng"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(9, _T("Th\x1B0\x1EE3ng \x111\x1EA1i t\x1B0\x1EDBng"), CFMT_NUMBER, 70);

	m_wndList.InsertColumn(10, _T("\x43\x1EA5p \x42QP"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(11, _T("T\x43\x1EE5\x63 QKHUQ\x44"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(12, _T("HVi\x1EC7n NTr\x1B0\x1EDDng"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(13, _T("\x43\x1EA5p \x63\x1A1 s\x1EDF"), CFMT_NUMBER, 70);

	m_wndList.InsertColumn(14, _T("Nh\x1EADn \x78\xE9t t\xECnh h\xECnh \x63\x1EA5p \x63\x1EE9u,\x111i\x1EC1u tr\x1ECB"), CFMT_TEXT, 150);
	
	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndList.GetHeaderControl()->SetItemHeight(3);

	TranslateString(_T("S\x1ED1 l\x1B0\x1EE3ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 3, 1, 5, false, false);

	TranslateString(_T("T/V"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 6, 1, 6, false, false);

	TranslateString(_T("Qu\xE2n h\xE0m"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 7, 1, 9, false, false);

	TranslateString(_T("\x110\x1A1n v\x1ECB"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 10, 1, 13, false, false);

}
void CMSBCTinhhinhbenhtattuvong::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CMSBCTinhhinhbenhtattuvong::OnSetWindowEvents(){
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
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
}
void CMSBCTinhhinhbenhtattuvong::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CMSBCTinhhinhbenhtattuvong::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCTinhhinhbenhtattuvong::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCTinhhinhbenhtattuvong::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CMSBCTinhhinhbenhtattuvong::SetMode(int nMode){
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
/*void CMSBCTinhhinhbenhtattuvong::OnFromDateChange(){
	
} */
/*void CMSBCTinhhinhbenhtattuvong::OnFromDateSetfocus(){
	
} */
/*void CMSBCTinhhinhbenhtattuvong::OnFromDateKillfocus(){
	
} */
int CMSBCTinhhinhbenhtattuvong::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCTinhhinhbenhtattuvong::OnToDateChange(){
	
} */
/*void CMSBCTinhhinhbenhtattuvong::OnToDateSetfocus(){
	
} */
/*void CMSBCTinhhinhbenhtattuvong::OnToDateKillfocus(){
	
} */
int CMSBCTinhhinhbenhtattuvong::OnToDateCheckValue(){
	return 0;
} 
void CMSBCTinhhinhbenhtattuvong::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CMSBCTinhhinhbenhtattuvong::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\BCTINHHINHBENHTATTUVONG.RPT")))
		return;
	szWhere.Format(_T(" HD_ADMITDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT HI_NAME AS NGUYENNHAN,") \
_T("        HI_ICD AS MA,") \
_T("        QUAN,") \
_T("        HUU,") \
_T("        (QUAN+HUU) AS CONG,") \
_T("        BENHVIEN,") \
_T("        THUONGDAITUONG,") \
_T("        THIEUTRUNGTUONG,") \
_T("        THUONGDAITA,") \
_T("        CAPBQP,") \
_T("        TCUCQKQD,") \
_T("        HVNHATRUONG,") \
_T("        CAPCOSO") \
_T(" FROM(SELECT HD_ICD,") \
_T("        SUM(QUAN) AS QUAN,") \
_T("        SUM(HUU) AS HUU,") \
_T("        SUM(BENHVIEN) AS BENHVIEN,") \
_T("        (SUM(THUONGTUONG)+SUM(DAITUONG)) AS THUONGDAITUONG,") \
_T("        (SUM(THIEUTUONG)+SUM(TRUNGTUONG)) AS THIEUTRUNGTUONG,") \
_T("        (SUM(THUONGTA)+SUM(DAITA)) AS THUONGDAITA,") \
_T("        0 AS CAPBQP,") \
_T("        0 AS TCUCQKQD,") \
_T("        0 AS HVNHATRUONG,") \
_T("        0 AS CAPCOSO") \
_T(" FROM(SELECT HD_ICD,") \
_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END AS HUU,") \
_T("        CASE WHEN HCR_HOSPITALID IS NOT NULL THEN 1 ELSE 0 END AS BENHVIEN,") \
_T("        CASE WHEN HD_RANK=17 THEN 1 ELSE 0 END AS THUONGTUONG,") \
_T("        CASE WHEN HD_RANK=18 THEN 1 ELSE 0 END AS DAITUONG,") \
_T("        CASE WHEN HD_RANK=15 THEN 1 ELSE 0 END AS THIEUTUONG,") \
_T("        CASE WHEN HD_RANK=16 THEN 1 ELSE 0 END AS TRUNGTUONG,") \
_T("        CASE WHEN HD_RANK=13 THEN 1 ELSE 0 END AS THUONGTA,") \
_T("        CASE WHEN HD_RANK=14 THEN 1 ELSE 0 END AS DAITA") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_CLINICAL_RECORD ON(HCR_DOCNO=HD_DOCNO)") \
_T(" WHERE HD_SUGGESTION IN('X','Y') ") \
_T("     AND %s)") \
_T(" GROUP BY HD_ICD)") \
_T(" LEFT JOIN HMS_ICD ON(HI_ICD=HD_ICD)") \
_T(" WHERE HD_ICD IS NOT NULL"), szWhere);
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
	int nCONG[12];
	for(int i = 0 ; i<12; i++)
	{
		nCONG[i] = 0;
	}
	while (!rs.IsEOF())
	{

		rptDetail = rpt.AddDetail();
		//Nguyen nhan
		rs.GetValue(_T("NGUYENNHAN"), tmpStr);
		rptDetail->SetValue(_T("nguyennhan"), tmpStr);
		//MA
		rs.GetValue(_T("MA"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		//QUAN
		rs.GetValue(_T("QUAN"), tmpStr);
		nCONG[1] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		//HUU
		rs.GetValue(_T("HUU"), tmpStr);
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		//CONG
		rs.GetValue(_T("CONG"), tmpStr);
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		//BENH VIEN
		rs.GetValue(_T("BENHVIEN"), tmpStr);
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		//THUONG DAI TUONG
		rs.GetValue(_T("THUONGDAITUONG"), tmpStr);
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		//THIEU TRUNG TUONG
		rs.GetValue(_T("THIEUTRUNGTUONG"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		//THUONGDAITA
		rs.GetValue(_T("THUONGDAITA"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		//CAPBQP
		rs.GetValue(_T("CAPBQP"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		//TCUCQKQD
		rs.GetValue(_T("TCUCQKQD"), tmpStr);
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		//HVNHATRUONG
		rs.GetValue(_T("HVNHATRUONG"), tmpStr);
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		//CAPCOSO
		rs.GetValue(_T("CAPCOSO"), tmpStr);
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		rs.MoveNext();
	}
	CString  szField;
	for( int i = 2; i<=12; i++)
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
void CMSBCTinhhinhbenhtattuvong::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCTinhhinhbenhtattuvong::OnListDblClick(){
	
} 
void CMSBCTinhhinhbenhtattuvong::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBCTinhhinhbenhtattuvong::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CMSBCTinhhinhbenhtattuvong::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL, szWhere, tmpStr, szNewGroup, szOldGroup;
	szWhere.Format(_T(" HD_ADMITDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT HI_NAME AS NGUYENNHAN,") \
_T("        HI_ICD AS MA,") \
_T("        QUAN,") \
_T("        HUU,") \
_T("        (QUAN+HUU) AS CONG,") \
_T("        BENHVIEN,") \
_T("        THUONGDAITUONG,") \
_T("        THIEUTRUNGTUONG,") \
_T("        THUONGDAITA,") \
_T("        CAPBQP,") \
_T("        TCUCQKQD,") \
_T("        HVNHATRUONG,") \
_T("        CAPCOSO") \
_T(" FROM(SELECT HD_ICD,") \
_T("        SUM(QUAN) AS QUAN,") \
_T("        SUM(HUU) AS HUU,") \
_T("        SUM(BENHVIEN) AS BENHVIEN,") \
_T("        (SUM(THUONGTUONG)+SUM(DAITUONG)) AS THUONGDAITUONG,") \
_T("        (SUM(THIEUTUONG)+SUM(TRUNGTUONG)) AS THIEUTRUNGTUONG,") \
_T("        (SUM(THUONGTA)+SUM(DAITA)) AS THUONGDAITA,") \
_T("        0 AS CAPBQP,") \
_T("        0 AS TCUCQKQD,") \
_T("        0 AS HVNHATRUONG,") \
_T("        0 AS CAPCOSO") \
_T(" FROM(SELECT HD_ICD,") \
_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID='C1.2' THEN 1 ELSE 0 END AS HUU,") \
_T("        CASE WHEN HCR_HOSPITALID IS NOT NULL THEN 1 ELSE 0 END AS BENHVIEN,") \
_T("        CASE WHEN HD_RANK=17 THEN 1 ELSE 0 END AS THUONGTUONG,") \
_T("        CASE WHEN HD_RANK=18 THEN 1 ELSE 0 END AS DAITUONG,") \
_T("        CASE WHEN HD_RANK=15 THEN 1 ELSE 0 END AS THIEUTUONG,") \
_T("        CASE WHEN HD_RANK=16 THEN 1 ELSE 0 END AS TRUNGTUONG,") \
_T("        CASE WHEN HD_RANK=13 THEN 1 ELSE 0 END AS THUONGTA,") \
_T("        CASE WHEN HD_RANK=14 THEN 1 ELSE 0 END AS DAITA") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_CLINICAL_RECORD ON(HCR_DOCNO=HD_DOCNO)") \
_T(" WHERE HD_SUGGESTION IN('X','Y') ") \
_T("     AND %s)") \
_T(" GROUP BY HD_ICD)") \
_T(" LEFT JOIN HMS_ICD ON(HI_ICD=HD_ICD)") \
_T(" WHERE HD_ICD IS NOT NULL"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("NGUYENNHAN")), 
			rs.GetValue(_T("MA")), 
			rs.GetValue(_T("QUAN")), 
			rs.GetValue(_T("HUU")), 
			rs.GetValue(_T("CONG")), 
			rs.GetValue(_T("BENHVIEN")), 
			rs.GetValue(_T("THUONGDAITUONG")), 
			rs.GetValue(_T("THIEUTRUNGTUONG")),
			rs.GetValue(_T("THUONGDAITA")), 
			rs.GetValue(_T("CAPBQP")),
			rs.GetValue(_T("TCUCQKQD")), 
			rs.GetValue(_T("HVNHATRUONG")),
			rs.GetValue(_T("CAPCOSO")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CMSBCTinhhinhbenhtattuvong::OnAddMSBCTinhhinhbenhtattuvong(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMSBCTinhhinhbenhtattuvong::OnEditMSBCTinhhinhbenhtattuvong(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCTinhhinhbenhtattuvong::OnDeleteMSBCTinhhinhbenhtattuvong(){
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
 		OnCancelMSBCTinhhinhbenhtattuvong();
 	}
	return 0;
}
int CMSBCTinhhinhbenhtattuvong::OnSaveMSBCTinhhinhbenhtattuvong(){
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
 		//OnMSBCTinhhinhbenhtattuvongListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMSBCTinhhinhbenhtattuvong::OnCancelMSBCTinhhinhbenhtattuvong(){
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
int CMSBCTinhhinhbenhtattuvong::OnMSBCTinhhinhbenhtattuvongListLoadData(){
	return 0;
}
