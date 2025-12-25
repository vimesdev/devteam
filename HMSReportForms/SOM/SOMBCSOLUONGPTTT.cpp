#include "stdafx.h"
#include "SOMBCSOLUONGPTTT.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYC *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYC *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYC *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMBCSOLUONGPTTYC *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYC *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYC *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYC *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMBCSOLUONGPTTYC *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSOMBCSOLUONGPTTYC* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYC *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYC *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYC *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CSOMBCSOLUONGPTTYC *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYC *)pWnd)->OnObjectAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CSOMBCSOLUONGPTTYC *pVw = (CSOMBCSOLUONGPTTYC *)pWnd;
	pVw->OnExportSelect();
} 
CSOMBCSOLUONGPTTYC::CSOMBCSOLUONGPTTYC()
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSOMBCSOLUONGPTTYC::~CSOMBCSOLUONGPTTYC()
{
}
void CSOMBCSOLUONGPTTYC::OnCreateComponents(){
	m_wndOpenFeePatient.Create(this, _T("Open Fee Patient"), 5, 5, 440, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 220, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 435, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 60, 90, 85);
	m_wndObject.Create(this,95, 60, 435, 85); 
	m_wndExport.Create(this, _T("&ExportXLS"), 361, 95, 441, 120);

}
void CSOMBCSOLUONGPTTYC::OnInitializeComponents(){
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
void CSOMBCSOLUONGPTTYC::OnSetWindowEvents(){
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
void CSOMBCSOLUONGPTTYC::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

}
void CSOMBCSOLUONGPTTYC::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();

}
int CSOMBCSOLUONGPTTYC::SetMode(int nMode){
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
/*void CSOMBCSOLUONGPTTYC::OnFromDateChange(){
	
} */
/*void CSOMBCSOLUONGPTTYC::OnFromDateSetfocus(){
	
} */
/*void CSOMBCSOLUONGPTTYC::OnFromDateKillfocus(){
	
} */
int CSOMBCSOLUONGPTTYC::OnFromDateCheckValue(){
	return 0;
} 
/*void CSOMBCSOLUONGPTTYC::OnToDateChange(){
	
} */
/*void CSOMBCSOLUONGPTTYC::OnToDateSetfocus(){
	
} */
/*void CSOMBCSOLUONGPTTYC::OnToDateKillfocus(){
	
} */
int CSOMBCSOLUONGPTTYC::OnToDateCheckValue(){
	return 0;
} 
void CSOMBCSOLUONGPTTYC::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMBCSOLUONGPTTYC::OnObjectSelendok(){
	 
}
/*void CSOMBCSOLUONGPTTYC::OnObjectSetfocus(){
	
}*/
/*void CSOMBCSOLUONGPTTYC::OnObjectKillfocus(){
	
}*/
long CSOMBCSOLUONGPTTYC::OnObjectLoadData(){
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
/*void CSOMBCSOLUONGPTTYC::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSOMBCSOLUONGPTTYC::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\THONGKE_SOCA_PTTT_PTTYC.xls"))) AfxMessageBox(_T("Chưa có File trong thư mục Export!"));	
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c3"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c4"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c5"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		nRow++;
		rs.MoveNext();
	}	

	EndWaitCursor();
	xls.Save(_T("Exports\\THONGKE_SOCA_PTTT_PTTYC2.xls"));
} 
int CSOMBCSOLUONGPTTYC::OnCheckBeforeExport(CExcel* xls, CRecord* rs){
	BeginWaitCursor();
	rs->ExecSQL(GetQueryString());
	EndWaitCursor();
	if (rs->IsEOF()){
		AfxMessageBox(_T("No Data."));
		return -1;
	}
	if (!xls->Load(_T("Exports\\FM_Mau_BNconphichuathu.xls"))){
		AfxMessageBox(_T("Exports\\FM_Mau_BNconphichuathu.xls"));
		return -1;
	}
	return 0;
}
CString CSOMBCSOLUONGPTTYC::GetQueryString()
{
	
	CString szSQL, szWhere, szObjectFilter;

	szSQL.Format(_T(" SELECT") \
					_T(" tendichvu    as c1, ") \
					_T(" SUM(soluong) as c2,") \
					_T(" giadv        as c3,") \
					_T(" giayc        as c4,") \
					_T(" giatt        as c5") \
					_T(" FROM") \
					_T(" (") \
					_T(" SELECT f.hfe_desc AS tendichvu,") \
					_T("     f.hfe_type       AS typeid,") \
					_T("     f.HFE_GROUP      AS groupid,") \
					_T("     f.hfe_itemid     AS itemid,") \
					_T("     f.HFE_QUANTITY   as soluong,") \
					_T("     fl.HFL_REQPRICE  as giayc,") \
					_T("     fl.HFL_SERVPRICE as giadv,") \
					_T("     f.HFE_UNITPRICE  as giatt") \
					_T("   FROM hms_fee f") \
					_T("   LEFT JOIN hms_fee_list fl ON (f.hfe_itemid=fl.HFL_FEEID)") \
					_T("   LEFT JOIN HMS_FEE_INVOICE i") \
					_T("   ON (f.hfe_docno    =i.hfe_docno") \
					_T("   AND f.HFE_INVOICENO=i.hfe_invoiceno)") \
					_T("   WHERE i.hfe_date BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
					_T("   AND f.hfe_type     IN ('O')") \
					_T("   AND f.hfe_category <> 'Y'") \
					_T("   AND i.hfe_status    ='P'") \
					_T("   AND i.HFE_DEPTID in ('TYC', 'PTTYC')") \
					_T("   )") \
					_T("   GROUP BY groupid,tendichvu, giayc, giadv, giatt") \
					_T("   order by groupid"), m_szFromDate, m_szToDate);
	return szSQL;
}