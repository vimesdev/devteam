#include "stdafx.h"
#include "SOMDANHSACHBNCHUATINHCONG.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSOMDANHSACHBNCHUATINHCONG* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CSOMDANHSACHBNCHUATINHCONG *)pWnd)->OnObjectAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CSOMDANHSACHBNCHUATINHCONG *pVw = (CSOMDANHSACHBNCHUATINHCONG *)pWnd;
	pVw->OnExportSelect();
} 
CSOMDANHSACHBNCHUATINHCONG::CSOMDANHSACHBNCHUATINHCONG()
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();

}
CSOMDANHSACHBNCHUATINHCONG::~CSOMDANHSACHBNCHUATINHCONG()
{
}
void CSOMDANHSACHBNCHUATINHCONG::OnCreateComponents()
{
	m_wndOpenFeePatient.Create(this, _T("Open Fee Patient"), 5, 5, 440, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 220, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 435, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 60, 90, 85);
	m_wndObject.Create(this,95, 60, 435, 85); 
	m_wndExport.Create(this, _T("&ExportXLS"), 361, 95, 441, 120);

}
void CSOMDANHSACHBNCHUATINHCONG::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CSOMDANHSACHBNCHUATINHCONG::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(0);
}
void CSOMDANHSACHBNCHUATINHCONG::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

}
void CSOMDANHSACHBNCHUATINHCONG::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();

}
int CSOMDANHSACHBNCHUATINHCONG::SetMode(int nMode){
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
/*void CSOMDANHSACHBNCHUATINHCONG::OnFromDateChange(){
	
} */
/*void CSOMDANHSACHBNCHUATINHCONG::OnFromDateSetfocus(){
	
} */
/*void CSOMDANHSACHBNCHUATINHCONG::OnFromDateKillfocus(){
	
} */
int CSOMDANHSACHBNCHUATINHCONG::OnFromDateCheckValue(){
	return 0;
} 
/*void CSOMDANHSACHBNCHUATINHCONG::OnToDateChange(){
	
} */
/*void CSOMDANHSACHBNCHUATINHCONG::OnToDateSetfocus(){
	
} */
/*void CSOMDANHSACHBNCHUATINHCONG::OnToDateKillfocus(){
	
} */
int CSOMDANHSACHBNCHUATINHCONG::OnToDateCheckValue(){
	return 0;
} 
void CSOMDANHSACHBNCHUATINHCONG::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMDANHSACHBNCHUATINHCONG::OnObjectSelendok(){
	 
}
/*void CSOMDANHSACHBNCHUATINHCONG::OnObjectSetfocus(){
	
}*/
/*void CSOMDANHSACHBNCHUATINHCONG::OnObjectKillfocus(){
	
}*/
long CSOMDANHSACHBNCHUATINHCONG::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return pMF->LoadObjectList(&m_wndObject, m_szObjectKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSOMDANHSACHBNCHUATINHCONG::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSOMDANHSACHBNCHUATINHCONG::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	//AfxMessageBox(_T("Nếu dữ liệu quá 65000 dòng, chương trình sẽ tự tách ra 1 sheet mới trong excel."));
	int nRow = 0, nCol = 0, nIdx = 1, nSheet = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\DANHSACHBENHNHANCHUATINHCONGPHAUTHUAT_PTTYC.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	//xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//AfxMessageBox(szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		
		
		if(nRow == 65000)
		{
			nSheet++;
			tmpStr.Format(_T("Sheet %d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nRow = 0;
		}
		
		rs.GetValue(_T("chindexname"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[5] > 0)
			{
				xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 3; i < 30; i++)
				{
					xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tenbn"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tiengoipt"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("giabaohiem"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("tronggoi"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("bntra"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("congpt"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("tenpt"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bsmo"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("trangthai"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("feeitem"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[5] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[5] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\Template\\DANHSACHBENHNHANCHUATINHCONGPHAUTHUAT_PTTYCV2.xls"));
} 
int CSOMDANHSACHBNCHUATINHCONG::OnCheckBeforeExport(CExcel* xls, CRecord* rs)
{
	return 0;
}
CString CSOMDANHSACHBNCHUATINHCONG::GetQueryString()
{
	
	CString szSQL, szWhere, szObjectFilter;

			szSQL.Format(_T(" SELECT ho_docno                   AS docno,") \
			_T("   get_patientname(ho_docno)                    AS tenbn,") \
			_T("   f.hfe_cost                                   AS tiengoipt,") \
			_T("   f.hfe_inspaid                                AS giabaohiem,") \
			_T("   HMS_OPERATION_INPKG_AMOUNT(ho_docno, ho_idx) AS tronggoi,") \
			_T("   f.hfe_patpaid                                AS bntra,") \
			_T("   ho_amount                                    AS congpt,") \
			_T("   f.hfe_desc                                   AS tenpt,") \
			_T("   (SELECT") \
			_T("   userid FROM") \
			_T("   (SELECT") \
			_T("    su_userid as userid") \
			_T("    FROM sys_user") \
			_T("    WHERE su_isactive='Y'") \
			_T("    UNION ALL") \
			_T("    SELECT hou_userid as userid        ") \
			_T("    FROM hms_opt_user") \
			_T("    WHERE hou_isactive='Y'") \
			_T("    )tbl") \
			_T("    WHERE userid = ho_practitioner") \
			_T("    AND rownum    =1") \
			_T("    ) as bsmo,  ") \
			_T("   f.hfe_status                                 AS trangthai,") \
			_T("   f.hfe_itemid                                 AS feeitem") \
			_T(" FROM hms_operation") \
			_T(" LEFT JOIN hms_fee f") \
			_T(" ON (ho_docno = hfe_docno") \
			_T(" AND ho_idx   =hfe_orderid)") \
			_T(" LEFT JOIN hms_fee_list ON (f.hfe_itemid = hfl_feeid)") \

			_T(" LEFT JOIN hms_fee_invoice iv") \
			_T(" ON (f.hfe_docno     = iv.hfe_docno") \
			_T(" AND f.hfe_invoiceno = iv.hfe_invoiceno)") \
			_T(" WHERE iv.HFE_DATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND iv.hfe_status='P'") \
			_T(" AND f.Hfe_type      ='O'") \
			_T(" AND substr(hfl_groupid,1,2)='B4'") \
			_T(" AND NVL(HFL_OBSTETRIC, 'X') <> 'Y'") \
			_T(" AND f.hfe_category NOT IN ('Y')") \
			_T(" AND (HO_DEPTID      ='PTTYC')") \
			_T(" AND (HO_PDEPTID    IN ('PTTYC','B5'))") \
			_T(" AND ho_idx NOT IN ") \
			_T(" (SELECT hoc_optidx FROM hms_operation_charge WHERE hoc_docno = ho_docno AND hoc_optidx = ho_idx)"), m_szFromDate, m_szToDate);


	return szSQL;
}