#include "BCTINHHINHCCDT.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHCCDT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHCCDT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHCCDT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHCCDT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHCCDT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHCCDT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHCCDT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHCCDT *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTINHHINHCCDT *pVw = (CBCTINHHINHCCDT *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTINHHINHCCDT *pVw = (CBCTINHHINHCCDT *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTINHHINHCCDT*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTINHHINHCCDT*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTINHHINHCCDT*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTINHHINHCCDT*)pWnd)->OnListDeleteItem();
} 
static void _OnEmgTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTINHHINHCCDT* )pWnd)->OnEmgTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEmgTypeSelendokFnc(CWnd *pWnd){
	((CBCTINHHINHCCDT *)pWnd)->OnEmgTypeSelendok();
}
/*static void _OnEmgTypeSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHCCDT *)pWnd)->OnEmgTypeKillfocus();
}*/
/*static void _OnEmgTypeKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHCCDT *)pWnd)->OnEmgTypeKillfocus();
}*/
static long _OnEmgTypeLoadDataFnc(CWnd *pWnd){
	return ((CBCTINHHINHCCDT *)pWnd)->OnEmgTypeLoadData();
}
/*static void _OnEmgTypeAddNewFnc(CWnd *pWnd){
	((CBCTINHHINHCCDT *)pWnd)->OnEmgTypeAddNew();
}*/
static int _OnAddBCTINHHINHCCDTFnc(CWnd *pWnd){
	 return ((CBCTINHHINHCCDT*)pWnd)->OnAddBCTINHHINHCCDT();
} 
static int _OnEditBCTINHHINHCCDTFnc(CWnd *pWnd){
	 return ((CBCTINHHINHCCDT*)pWnd)->OnEditBCTINHHINHCCDT();
} 
static int _OnDeleteBCTINHHINHCCDTFnc(CWnd *pWnd){
	 return ((CBCTINHHINHCCDT*)pWnd)->OnDeleteBCTINHHINHCCDT();
} 
static int _OnSaveBCTINHHINHCCDTFnc(CWnd *pWnd){
	 return ((CBCTINHHINHCCDT*)pWnd)->OnSaveBCTINHHINHCCDT();
} 
static int _OnCancelBCTINHHINHCCDTFnc(CWnd *pWnd){
	 return ((CBCTINHHINHCCDT*)pWnd)->OnCancelBCTINHHINHCCDT();
} 
CBCTINHHINHCCDT::CBCTINHHINHCCDT(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTINHHINHCCDT::~CBCTINHHINHCCDT(){
}
void CBCTINHHINHCCDT::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1012, 59);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 82, 55);
	m_wndFromDate.Create(this,86, 30, 196, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 395, 55); 
	m_wndLoad.Create(this, _T("&Load"), 687, 30, 771, 55);
	m_wndPrint.Create(this, _T("&Print"), 776, 30, 860, 55);
	m_wndList.Create(this,5, 65, 1012, 616); 
	m_wndEmgTypeLabel.Create(this, _T("Emg Type"), 401, 30, 481, 55);
	m_wndEmgType.Create(this,486, 30, 682, 55); 

}
void CBCTINHHINHCCDT::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndEmgType.SetCheckValue(true);
	m_wndEmgType.LimitText(35);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Lo\x1EA1i \x62\x1EC7nh \x63\x1EA5p \x63\x1EE9u"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("M\xE3"), CFMT_TEXT, 50);

	m_wndList.InsertColumn(3, _T("Qu\xE2n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(4, _T("H\x1B0u"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(5, _T("\x43\x1ED9ng"), CFMT_NUMBER, 50);

	m_wndList.InsertColumn(6, _T("Qu\xE2n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(7, _T("H\x1B0u"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(8, _T("\x43\x1ED9ng"), CFMT_NUMBER, 50);

	m_wndList.InsertColumn(9, _T("Qu\xE2n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(10, _T("H\x1B0u"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(11, _T("\x43\x1ED9ng"), CFMT_NUMBER, 50);

	m_wndList.InsertColumn(12, _T("Qu\xE2n"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(13, _T("H\x1B0u"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(14, _T("\x43\x1ED9ng"), CFMT_NUMBER, 50);

	m_wndList.InsertColumn(15, _T("Ng\xE0y \x110T \x42N kh\x1ECFi"), CFMT_DATE, 150);
	
	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndList.GetHeaderControl()->SetItemHeight(3);

	TranslateString(_T("T\x1ED5ng s\x1ED1"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 3, 1, 5, false, false);

	TranslateString(_T("Kh\x1ECFi r\x61 vi\x1EC7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 6, 1, 8, false, false);

	TranslateString(_T("T\x1EED vong"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 9, 1, 11, false, false);

	TranslateString(_T("\x43\xF2n l\x1EA1i"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 12, 1, 14, false, false);

	m_wndList.SetDisplayColor(true);

	m_wndEmgType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEmgType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CBCTINHHINHCCDT::OnSetWindowEvents(){
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
	m_wndEmgType.SetEvent(WE_SELENDOK, _OnEmgTypeSelendokFnc);
	//m_wndEmgType.SetEvent(WE_SETFOCUS, _OnEmgTypeSetfocusFnc);
	//m_wndEmgType.SetEvent(WE_KILLFOCUS, _OnEmgTypeKillfocusFnc);
	m_wndEmgType.SetEvent(WE_SELCHANGE, _OnEmgTypeSelectChangeFnc);
	m_wndEmgType.SetEvent(WE_LOADDATA, _OnEmgTypeLoadDataFnc);
	//m_wndEmgType.SetEvent(WE_ADDNEW, _OnEmgTypeAddNewFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
}
void CBCTINHHINHCCDT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndEmgType.GetDlgCtrlID(), m_szEmgTypeKey);

}
void CBCTINHHINHCCDT::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTINHHINHCCDT::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTINHHINHCCDT::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szEmgTypeKey.Empty();

}
int CBCTINHHINHCCDT::SetMode(int nMode){
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
/*void CBCTINHHINHCCDT::OnFromDateChange(){
	
} */
/*void CBCTINHHINHCCDT::OnFromDateSetfocus(){
	
} */
/*void CBCTINHHINHCCDT::OnFromDateKillfocus(){
	
} */
int CBCTINHHINHCCDT::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTINHHINHCCDT::OnToDateChange(){
	
} */
/*void CBCTINHHINHCCDT::OnToDateSetfocus(){
	
} */
/*void CBCTINHHINHCCDT::OnToDateKillfocus(){
	
} */
int CBCTINHHINHCCDT::OnToDateCheckValue(){
	return 0;
} 
void CBCTINHHINHCCDT::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTINHHINHCCDT::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szEmgType, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\BCTKTHDIEUTRITHEOLOAIBENHCUACANBOCAOCAP.RPT")))
		return;
	szWhere.Format(_T(" HCR_ADMITDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	if(!m_szEmgTypeKey.IsEmpty())
		szEmgType.AppendFormat(_T(" WHERE HIC_ID='%s'"), m_szEmgTypeKey);
	szSQL.Format(_T(" SELECT HIC_ID AS TYPEID,") \
_T("        substr(HIC_NAME,8,100) AS TYPE,") \
_T("        HI_NAME AS NAME,") \
_T("        HI_ICD AS MA,") \
_T("        QUAN,HUU,") \
_T("        (QUAN+HUU) CONG,") \
_T("        QUANT,HUUT,") \
_T("        (QUANT+HUUT) CONGT,") \
_T("        QUANTV,HUUTV,") \
_T("        (QUANTV+HUUTV) CONGTV,") \
_T("        QUANCL,HUUCL,") \
_T("        (QUANCL+HUUCL) CONGCL") \
_T(" FROM(SELECT HD_ICD,") \
_T("        SUM(QUAN) QUAN,SUM(HUU) HUU,") \
_T("        SUM(QUANT) QUANT,SUM(HUUT) HUUT,") \
_T("        SUM(QUANTV) QUANTV,SUM(HUUTV) HUUTV,") \
_T("        SUM(QUANCL) QUANCL,SUM(HUUCL) HUUCL") \
_T(" FROM(SELECT DISTINCT HD_ICD,") \
_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID = 'C1.2' THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID = 'C1.2' THEN 1 ELSE 0 END AS HUU,") \
_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION='T' THEN 1 ELSE 0 END AS QUANT,") \
_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION='T' THEN 1 ELSE 0 END AS HUUT,") \
_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION in ('X','Y') THEN 1 ELSE 0 END AS QUANTV,") \
_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION in ('X','Y') THEN 1 ELSE 0 END AS HUUTV,") \
_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION not in ('T','X','Y') THEN 1 ELSE 0 END AS QUANCL,") \
_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION not in ('T','X','Y') THEN 1 ELSE 0 END AS HUUCL") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_CLINICAL_RECORD ON(HCR_DOCNO=HD_DOCNO)") \
_T(" WHERE %s)") \
_T(" GROUP BY HD_ICD)") \
_T(" LEFT JOIN HMS_ICD ON(HI_ICD=HD_ICD)") \
_T(" LEFT JOIN HMS_ICDCHAPTER ON(HIC_ID=HI_CHAPTERID)") \
_T(" %s") \
_T(" ORDER BY HIC_ID"), szWhere, szEmgType);
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
		rs.GetValue(_T("TYPEID"),szNewGroup);
		if(szNewGroup !=szOldGroup)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			tmpStr.Format(_T("%s"), rs.GetValue(_T("TYPE")));
			rptDetail->SetValue(_T("GroupName"), tmpStr);
			szOldGroup=szNewGroup;
		}

		rptDetail = rpt.AddDetail();
		//loai benh cap cuu
		rs.GetValue(_T("NAME"), tmpStr);
		rptDetail->SetValue(_T("type"), tmpStr);
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
		//QUAN
		rs.GetValue(_T("QUANT"), tmpStr);
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		//HUU
		rs.GetValue(_T("HUUT"), tmpStr);
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		//CONG
		rs.GetValue(_T("CONGT"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("QUANTV"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("HUUTV"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("CONGTV"), tmpStr);
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("QUANCL"), tmpStr);
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("HUUCL"), tmpStr);
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("CONGCL"), tmpStr);
		nCONG[12] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		//loai benh cap cuu
		/*tmpStr = CDateTime::Convert(rs.GetValue(_T("HCR_ADMITDATE")), yyyymmdd|hhmmss, ddmmyyyy|hhmmss);
		rptDetail->SetValue(_T("14"), tmpStr);*/
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
void CBCTINHHINHCCDT::OnListDblClick(){
	
} 
void CBCTINHHINHCCDT::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTINHHINHCCDT::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTINHHINHCCDT::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL, szWhere, szEmgType, tmpStr, szNewGroup, szOldGroup;
	szWhere.Format(_T(" HCR_ADMITDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	if(!m_szEmgTypeKey.IsEmpty())
		szEmgType.AppendFormat(_T(" WHERE HIC_ID='%s'"), m_szEmgTypeKey);
	szSQL.Format(_T(" SELECT HIC_ID AS TYPEID,") \
_T("        substr(HIC_NAME,8,100) AS TYPE,") \
_T("        HI_NAME AS NAME,") \
_T("        HI_ICD AS MA,") \
_T("        QUAN,HUU,") \
_T("        (QUAN+HUU) CONG,") \
_T("        QUANT,HUUT,") \
_T("        (QUANT+HUUT) CONGT,") \
_T("        QUANTV,HUUTV,") \
_T("        (QUANTV+HUUTV) CONGTV,") \
_T("        QUANCL,HUUCL,") \
_T("        (QUANCL+HUUCL) CONGCL") \
_T(" FROM(SELECT HD_ICD,") \
_T("        SUM(QUAN) QUAN,SUM(HUU) HUU,") \
_T("        SUM(QUANT) QUANT,SUM(HUUT) HUUT,") \
_T("        SUM(QUANTV) QUANTV,SUM(HUUTV) HUUTV,") \
_T("        SUM(QUANCL) QUANCL,SUM(HUUCL) HUUCL") \
_T(" FROM(SELECT DISTINCT HD_ICD,") \
_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID = 'C1.2' THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID = 'C1.2' THEN 1 ELSE 0 END AS HUU,") \
_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION='T' THEN 1 ELSE 0 END AS QUANT,") \
_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION='T' THEN 1 ELSE 0 END AS HUUT,") \
_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION in ('X','Y') THEN 1 ELSE 0 END AS QUANTV,") \
_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION in ('X','Y') THEN 1 ELSE 0 END AS HUUTV,") \
_T("        CASE WHEN HD_OBJECT=1 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION not in ('T','X','Y') THEN 1 ELSE 0 END AS QUANCL,") \
_T("        CASE WHEN HD_OBJECT=2 AND HE_DEPTID = 'C1.2' AND HD_SUGGESTION not in ('T','X','Y') THEN 1 ELSE 0 END AS HUUCL") \
_T(" FROM HMS_DOC") \
_T(" LEFT JOIN HMS_EXAM ON(HE_DOCNO=HD_DOCNO)") \
_T(" LEFT JOIN HMS_CLINICAL_RECORD ON(HCR_DOCNO=HD_DOCNO)") \
_T(" WHERE %s)") \
_T(" GROUP BY HD_ICD)") \
_T(" LEFT JOIN HMS_ICD ON(HI_ICD=HD_ICD)") \
_T(" LEFT JOIN HMS_ICDCHAPTER ON(HIC_ID=HI_CHAPTERID)") \
_T(" %s") \
_T(" ORDER BY HIC_ID"), szWhere, szEmgType);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1,nItem=1;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("TYPEID"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{	
			rs.GetValue(_T("TYPE"), tmpStr);
			nItem = m_wndList.AddItems(_T(""),tmpStr, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 13);
			m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szOldGroup = szNewGroup;
			nIndex=1;
		}
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("NAME")), 
			rs.GetValue(_T("MA")), 
			rs.GetValue(_T("QUAN")), 
			rs.GetValue(_T("HUU")), 
			rs.GetValue(_T("CONG")), 
			rs.GetValue(_T("QUANT")), 
			rs.GetValue(_T("HUUT")), 
			rs.GetValue(_T("CONGT")),
			rs.GetValue(_T("QUANTV")), 
			rs.GetValue(_T("HUUTV")),
			rs.GetValue(_T("CONGTV")), 
			rs.GetValue(_T("QUANCL")),
			rs.GetValue(_T("HUUCL")), 
			rs.GetValue(_T("CONGCL")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCTINHHINHCCDT::OnEmgTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTINHHINHCCDT::OnEmgTypeSelendok(){
	 
}
/*void CBCTINHHINHCCDT::OnEmgTypeSetfocus(){
	
}*/
/*void CBCTINHHINHCCDT::OnEmgTypeKillfocus(){
	
}*/
long CBCTINHHINHCCDT::OnEmgTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEmgType.IsSearchKey() && !m_szEmgTypeKey.IsEmpty())
	{
		//szWhere.Format();
	};
	szSQL.Format(_T("SELECT hic_id as id,SUBSTR(HIC_NAME,8,100) as description FROM HMS_ICDCHAPTER"));
	m_wndEmgType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEmgType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCTINHHINHCCDT::OnEmgTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCTINHHINHCCDT::OnAddBCTINHHINHCCDT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTINHHINHCCDT::OnEditBCTINHHINHCCDT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTINHHINHCCDT::OnDeleteBCTINHHINHCCDT(){
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
 		OnCancelBCTINHHINHCCDT();
 	}
	return 0;
}
int CBCTINHHINHCCDT::OnSaveBCTINHHINHCCDT(){
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
 		//OnBCTINHHINHCCDTListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTINHHINHCCDT::OnCancelBCTINHHINHCCDT(){
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
int CBCTINHHINHCCDT::OnBCTINHHINHCCDTListLoadData(){
	return 0;
}
