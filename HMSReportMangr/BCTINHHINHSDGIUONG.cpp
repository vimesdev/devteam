#include "BCTINHHINHSDGIUONG.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHSDGIUONG *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHSDGIUONG *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHSDGIUONG *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHSDGIUONG *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHSDGIUONG *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHSDGIUONG *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHSDGIUONG *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHSDGIUONG *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTINHHINHSDGIUONG *pVw = (CBCTINHHINHSDGIUONG *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTINHHINHSDGIUONG *pVw = (CBCTINHHINHSDGIUONG *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTINHHINHSDGIUONG *pVw = (CBCTINHHINHSDGIUONG *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTINHHINHSDGIUONG*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTINHHINHSDGIUONG*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTINHHINHSDGIUONG*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTINHHINHSDGIUONG*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCTINHHINHSDGIUONGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHSDGIUONG*)pWnd)->OnAddBCTINHHINHSDGIUONG();
} 
static int _OnEditBCTINHHINHSDGIUONGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHSDGIUONG*)pWnd)->OnEditBCTINHHINHSDGIUONG();
} 
static int _OnDeleteBCTINHHINHSDGIUONGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHSDGIUONG*)pWnd)->OnDeleteBCTINHHINHSDGIUONG();
} 
static int _OnSaveBCTINHHINHSDGIUONGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHSDGIUONG*)pWnd)->OnSaveBCTINHHINHSDGIUONG();
} 
static int _OnCancelBCTINHHINHSDGIUONGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHSDGIUONG*)pWnd)->OnCancelBCTINHHINHSDGIUONG();
} 
CBCTINHHINHSDGIUONG::CBCTINHHINHSDGIUONG(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTINHHINHSDGIUONG::~CBCTINHHINHSDGIUONG(){
}
void CBCTINHHINHSDGIUONG::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 3, 6, 1012, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 430, 30, 520, 55);
	//m_wndPrint.Create(this, _T("&Print"), 620, 30, 710, 55);
	m_wndExport.Create(this, _T("&Export"), 525, 30, 615, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("KHOA"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("S\x1ED1 gi\x1B0\x1EDDng tri\x1EC3n kh\x61i"), CFMT_NUMBER, 150);
	m_wndList.InsertColumn(3, _T("S\x1ED1 gi\x1B0\x1EDDng \x62i\xEAn \x63h\x1EBF"), CFMT_NUMBER, 150);
	m_wndList.InsertColumn(4, _T("S\x1ED1 \x42N n\x1EB1m T/\x42 ng\xE0y"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("T\x1EF7 l\x1EC7 s\x1EED \x64\x1EE5ng gi\x1B0\x1EDDng"), CFMT_TEXT, 150);

}
void CBCTINHHINHSDGIUONG::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CBCTINHHINHSDGIUONG::OnSetWindowEvents(){
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
void CBCTINHHINHSDGIUONG::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBCTINHHINHSDGIUONG::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTINHHINHSDGIUONG::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTINHHINHSDGIUONG::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBCTINHHINHSDGIUONG::SetMode(int nMode){
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
/*void CBCTINHHINHSDGIUONG::OnFromDateChange(){
	
} */
/*void CBCTINHHINHSDGIUONG::OnFromDateSetfocus(){
	
} */
/*void CBCTINHHINHSDGIUONG::OnFromDateKillfocus(){
	
} */
int CBCTINHHINHSDGIUONG::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTINHHINHSDGIUONG::OnToDateChange(){
	
} */
/*void CBCTINHHINHSDGIUONG::OnToDateSetfocus(){
	
} */
/*void CBCTINHHINHSDGIUONG::OnToDateKillfocus(){
	
} */
int CBCTINHHINHSDGIUONG::OnToDateCheckValue(){
	return 0;
} 
void CBCTINHHINHSDGIUONG::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTINHHINHSDGIUONG::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTINHHINHSDGIUONG::OnExportSelect(){
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
	xls.CreateSheet(1); 
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 13); 	xls.SetColumnWidth(1, 13); 	xls.SetColumnWidth(2, 13); 	xls.SetColumnWidth(3, 12); 	xls.SetColumnWidth(4, 12); 	xls.SetColumnWidth(5, 8); 	xls.SetColumnWidth(6, 8); 	xls.SetColumnWidth(7, 8); 	xls.SetColumnWidth(8, 8); 	xls.SetColumnWidth(9, 8); 	xls.SetColumnWidth(10, 8); 	xls.SetColumnWidth(11, 8);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 3, _T("T\xCCNH H\xCCNH S\x1EEC \x44\x1EE4NG GI\x1AF\x1EDCNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 10);	xls.SetCellText(0, 6, _T("KHO\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 6, _T("S\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 7, _T("gi\x1B0\x1EDDng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 8, _T("\x62i\xEAn \x63h\x1EBF"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 6, _T("S\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 7, _T("gi\x1B0\x1EDDng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 8, _T("tri\x1EC3n kh\x61i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 6, _T("S\x1ED1 \x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 7, _T("n\x1EB1m T/\x42"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 8, _T("ng\xE0y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 6, _T("T\x1EF7 l\x1EC7"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 7, _T("s\x1EED \x64\x1EE5ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 8, _T("gi\x1B0\x1EDDng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(3, 3, 0, 4);	xls.SetMerge(4, 4, 0, 4);	xls.SetMerge(6, 8, 0, 0);	while(!rs.IsEOF()) 	{
		rs.GetValue(_T("khoa"), tmpStr); 		xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT );		rs.GetValue(_T("planned"), tmpStr); 		xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1| FMT_CENTER);

		rs.GetValue(_T("avaiable"), tmpStr); 		xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1| FMT_CENTER);

		rs.GetValue(_T("sobn"), tmpStr); 		xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_TEXT| FMT_CENTER);

		rs.GetValue(_T("tyle"), tmpStr); 		xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_TEXT| FMT_CENTER);

		nRow++; 		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\TINH HINH SU DUNG GIUONG.xls"));
} 
void CBCTINHHINHSDGIUONG::OnListDblClick(){
	
} 
void CBCTINHHINHSDGIUONG::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTINHHINHSDGIUONG::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTINHHINHSDGIUONG::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL, tmpStr,szLabel;	
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("khoa")), 
			rs.GetValue(_T("planned")), 
			rs.GetValue(_T("avaiable")), 
			rs.GetValue(_T("sobn")), 
			rs.GetValue(_T("tyle")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CBCTINHHINHSDGIUONG::OnAddBCTINHHINHSDGIUONG(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTINHHINHSDGIUONG::OnEditBCTINHHINHSDGIUONG(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTINHHINHSDGIUONG::OnDeleteBCTINHHINHSDGIUONG(){
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
 		OnCancelBCTINHHINHSDGIUONG();
 	}
	return 0;
}
int CBCTINHHINHSDGIUONG::OnSaveBCTINHHINHSDGIUONG(){
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
 		//OnBCTINHHINHSDGIUONGListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTINHHINHSDGIUONG::OnCancelBCTINHHINHSDGIUONG(){
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
int CBCTINHHINHSDGIUONG::OnBCTINHHINHSDGIUONGListLoadData(){
	return 0;
}
CString CBCTINHHINHSDGIUONG::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString tmpStr, szSQL, szWhere, szSoNgay; 	szWhere.Format(_T(" AND HB_ADMITDATE BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);	szSoNgay.Format(_T("(TRUNC_DATE(CAST_STRING2DATE ('%s'))-TRUNC_DATE(CAST_STRING2DATE ('%s'))+1)"), m_szToDate , m_szFromDate);	szSQL.Format(_T(" SELECT khoa,sum(planned) planned,sum(avaiable) avaiable,ROUND(sum(sobn)/%s,2) sobn,") \
		_T("        ROUND(ROUND(sum(sobn)/Nullif(sum(planned),0),2)/ROUND(sum(sobn)/Nullif(sum(avaiable),0),2),2) tyle") \
		_T(" FROM(SELECT deptid khoa,") \
		_T("        0 planned,") \
		_T("        0 avaiable,") \
		_T("        sum(oldpatient) as sobn") \
		_T(" FROM(SELECT deptid, status,") \
		_T("         1 oldpatient") \
		_T(" FROM(SELECT  htr_deptid as deptid,") \
		_T("         htr_status as status,") \
		_T("         trunc(hcr_admitdate) as admitdate,") \
		_T("         trunc(hcr_dischargedate) as dischargedate") \
		_T(" FROM hms_clinical_record ") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno and hcr_refidx=htr_idx)") \
		_T(" LEFT JOIN hms_doc ON(hd_docno=htr_docno) ") \
		_T(" WHERE htr_outpatient ='N' or htr_outpatient is null ") \
		_T(" 	and (trunc(htr_admitdate) between cast_string2timestamp('%s') and cast_string2timestamp('%s')") \
		_T(" 	or trunc(htr_dischargedate) between cast_string2timestamp('%s') and cast_string2timestamp('%s')") \
		_T(" 	or (trunc(htr_admitdate) <  cast_string2timestamp('%s') and htr_status in('A','I') )") \
		_T(" 	or (trunc(htr_admitdate) <  cast_string2timestamp('%s') and trunc(htr_dischargedate) > cast_string2timestamp('%s') and htr_status ='T') )") \
		_T(" UNION ALL") \
		_T(" SELECT  htr_ctdeptid as deptid,") \
		_T("         htr_status as status,") \
		_T("         trunc(hcr_admitdate) as admitdate,") \
		_T("         trunc(hcr_dischargedate) as dischargedate") \
		_T(" FROM hms_clinical_record ") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno and hcr_refidx=htr_idx)") \
		_T(" LEFT JOIN hms_doc ON(hd_docno=htr_docno) ") \
		_T(" WHERE htr_outpatient ='N' or htr_outpatient is null ") \
		_T(" 	and (trunc(htr_admitdate) between cast_string2timestamp('%s') and cast_string2timestamp('%s')") \
		_T(" 	or trunc(htr_dischargedate) between cast_string2timestamp('%s') and cast_string2timestamp('%s')") \
		_T(" 	or (trunc(htr_admitdate) <  cast_string2timestamp('%s') and htr_status in('A','I') )") \
		_T(" 	or (trunc(htr_admitdate) <  cast_string2timestamp('%s') and trunc(htr_dischargedate) > cast_string2timestamp('%s') and htr_status ='T') )") \
		_T(" )") \
		_T(" WHERE admitdate < cast_string2timestamp('%s') and (dischargedate >= cast_string2timestamp('%s') or status in('I'))) ") \
		_T(" WHERE deptid is not null") \
		_T(" GROUP BY deptid") \
		_T(" UNION ALL") \
		_T(" select sd_id khoa,sd_planned_bed planned,sd_avaiable_bed avaiable,0 sobn from sys_dept where sd_type='DT')") \
		_T(" group by khoa") \
		_T(" order by khoa"),szSoNgay,
							m_szFromDate,m_szToDate,
							m_szFromDate,m_szToDate,
							m_szFromDate,
							m_szFromDate,m_szFromDate,
							m_szFromDate,m_szToDate,
							m_szFromDate,m_szToDate,
							m_szFromDate,
							m_szFromDate,m_szFromDate,
							m_szFromDate,m_szFromDate);
	return szSQL;
}