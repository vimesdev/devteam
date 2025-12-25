#include "HEICDListReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "stdafx.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHEICDListReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHEICDListReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHEICDListReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHEICDListReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHEICDListReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHEICDListReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHEICDListReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHEICDListReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHEICDListReport *pVw = (CHEICDListReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddHEICDListReportFnc(CWnd *pWnd){
	 return ((CHEICDListReport*)pWnd)->OnAddHEICDListReport();
} 
static int _OnEditHEICDListReportFnc(CWnd *pWnd){
	 return ((CHEICDListReport*)pWnd)->OnEditHEICDListReport();
} 
static int _OnDeleteHEICDListReportFnc(CWnd *pWnd){
	 return ((CHEICDListReport*)pWnd)->OnDeleteHEICDListReport();
} 
static int _OnSaveHEICDListReportFnc(CWnd *pWnd){
	 return ((CHEICDListReport*)pWnd)->OnSaveHEICDListReport();
} 
static int _OnCancelHEICDListReportFnc(CWnd *pWnd){
	 return ((CHEICDListReport*)pWnd)->OnCancelHEICDListReport();
} 
CHEICDListReport::CHEICDListReport(CWnd* pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHEICDListReport::~CHEICDListReport(){
}
void CHEICDListReport::OnCreateComponents(){
	m_wndICDListReport.Create(this, _T("ICD List"), 5, 5, 575, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndExport.Create(this, _T("&Export"), 495, 65, 575, 90);

}
void CHEICDListReport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

}
void CHEICDListReport::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = m_szToDate = szSysDate;
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	SetMode(VM_EDIT);

}
void CHEICDListReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHEICDListReport::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CHEICDListReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHEICDListReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHEICDListReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHEICDListReport::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
/*void CHEICDListReport::OnFromDateChange(){
	
} */
/*void CHEICDListReport::OnFromDateSetfocus(){
	
} */
/*void CHEICDListReport::OnFromDateKillfocus(){
	
} */
int CHEICDListReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CHEICDListReport::OnToDateChange(){
	
} */
/*void CHEICDListReport::OnToDateSetfocus(){
	
} */
/*void CHEICDListReport::OnToDateKillfocus(){
	
} */
int CHEICDListReport::OnToDateCheckValue(){
	return 0;
} 
void CHEICDListReport::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Tổng hợp mặt bệnh theo ICD"));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Tổng hợp mặt bệnh theo lượt"));

	CPoint pt;
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	pt.x = rect.left;
	pt.y = rect.top - 2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY | TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTBUTTON, pt.x, pt.y, this);
	switch (ret) {
	case 1:
		OnTonghopmatbenhtheoICD();
		break;
	case 2:
		OnTonghopmatbenhtheoluot();
		break;
	}
} 
int CHEICDListReport::OnAddHEICDListReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHEICDListReport::OnEditHEICDListReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHEICDListReport::OnDeleteHEICDListReport(){
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
 		OnCancelHEICDListReport();
 	}
	return 0;
}
int CHEICDListReport::OnSaveHEICDListReport(){
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
 		//OnHEICDListReportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHEICDListReport::OnCancelHEICDListReport(){
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
int CHEICDListReport::OnHEICDListReportListLoadData(){
	return 0;
}

void CHEICDListReport::OnTonghopmatbenhtheoICD() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nIdx = 0, nCol = 0, nRow = 0;
	
	szSQL = GetQueryString1();
	int nCount = rs.ExecSQL(szSQL);
	_msg(_T("%s"), szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(2, 25);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 25);
	xls.SetColumnWidth(5, 30);

	xls.SetColumnWidth(6, 20);
	xls.SetColumnWidth(7, 20);
	xls.SetColumnWidth(8, 20);
	xls.SetColumnWidth(9, 20);
	xls.SetColumnWidth(10, 20);
	xls.SetColumnWidth(11, 20);
	xls.SetColumnWidth(12, 20);
	//Header
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 12);
	xls.SetCellMergedColumns(nCol, nRow + 3, 12);
	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, _T("BÁO CÁO TỔNG HỢP ICD PHÒNG KHÁM (C1.2)"), FMT_TEXT | FMT_CENTER, true, 11);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);



	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Số hồ sơ"));
	arrCol.Add(_T("Tên bệnh nhân"));
	arrCol.Add(_T("ICD"));
	arrCol.Add(_T("Tên ICD"));
	arrCol.Add(_T("Ngày khám"));
	arrCol.Add(_T("Mã thẻ"));
	arrCol.Add(_T("SL ICD"));

	nRow = 7;
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol + i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10);
	}
	nRow = 8;
	while (!rs.IsEOF())
	{
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("icdcode"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("icdname"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("examdate"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_DATE);

		rs.GetValue(_T("card"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("icd_count"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_INTEGER);

		nRow++;
		rs.MoveNext();
	}

	xls.Save(_T("Exports\\Tong hop mat benh theo ICD.xls"));
}

void CHEICDListReport::OnTonghopmatbenhtheoluot() {

}

CString CHEICDListReport::GetQueryString1() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szStatus;

	szSQL.Format(_T(" WITH split_data AS ( ") \
		_T(" SELECT docno, ") \
		_T(" REGEXP_SUBSTR(icd, '[^;]+', 1, LEVEL) AS icd_code, ") \
		_T(" card, examdate ") \
		_T(" FROM ") \
		_T(" ( ") \
		_T(" 	SELECT ") \
		_T(" 	CASE ") \
		_T("	WHEN hcd_ids IS NOT NULL THEN hd_icd || ';' || hcd_ids ") \
		_T("	ELSE hd_icd ") \
		_T("	END AS icd, ") \
		_T("	hd_docno AS docno, ") \
		_T("	hd_cardno AS card, ") \
		_T("	TRUNC(he_examdate) AS examdate ") \
		_T("	FROM hms_doc ") \
		_T("	LEFT JOIN hms_codisease ON(hd_docno = hcd_docno) ") \
		_T("	LEFT JOIN hms_exam ON(hd_docno = he_docno) ") \
		_T("	WHERE ") \
		_T("	hd_status = 'T' ") \
		_T("	AND hd_enddept = 'C1.2' ") \
		_T("	AND hd_createddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T("	AND substr(hd_cardno, 1,2) ='QN' ") \
		_T(" ) ") \
		_T(" CONNECT BY ") \
		_T(" LEVEL <= REGEXP_COUNT(icd, ';') + 1 ") \
		_T(" AND PRIOR docno = docno ") \
		_T(" AND PRIOR SYS_GUID() IS NOT NULL ") \
		_T(" ) ") \
		_T(" SELECT ") \
		_T(" docno, ") \
		_T(" get_patientname(docno) AS pname, ") \
		_T(" icd_code, ") \
		_T(" hms_geticdname(icd_code) AS icdname, ") \
		_T(" card, ") \
		_T(" examdate, ") \
		_T(" COUNT(*) AS icd_count ") \
		_T(" FROM split_data ") \
		_T(" GROUP BY docno,icd_code,card,examdate "), m_szFromDate, m_szToDate);

		return szSQL;
}
CString CHEICDListReport::GetQueryString2() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szStatus;
	return szSQL;
}