#include "stdafx.h"
#include "FMTonghopuserthutienchuakhoaso.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTonghopuserthutienchuakhoaso* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFMTonghopuserthutienchuakhoaso *)pWnd)->OnObjectAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMTonghopuserthutienchuakhoaso *pVw = (CFMTonghopuserthutienchuakhoaso *)pWnd;
	pVw->OnExportSelect();
} 
CFMTonghopuserthutienchuakhoaso::CFMTonghopuserthutienchuakhoaso()
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMTonghopuserthutienchuakhoaso::~CFMTonghopuserthutienchuakhoaso()
{
}
void CFMTonghopuserthutienchuakhoaso::OnCreateComponents()
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
void CFMTonghopuserthutienchuakhoaso::OnInitializeComponents(){
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
void CFMTonghopuserthutienchuakhoaso::OnSetWindowEvents(){
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
void CFMTonghopuserthutienchuakhoaso::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
}
void CFMTonghopuserthutienchuakhoaso::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();

}
int CFMTonghopuserthutienchuakhoaso::SetMode(int nMode){
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
/*void CFMTonghopuserthutienchuakhoaso::OnFromDateChange(){
	
} */
/*void CFMTonghopuserthutienchuakhoaso::OnFromDateSetfocus(){
	
} */
/*void CFMTonghopuserthutienchuakhoaso::OnFromDateKillfocus(){
	
} */
int CFMTonghopuserthutienchuakhoaso::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMTonghopuserthutienchuakhoaso::OnToDateChange(){
	
} */
/*void CFMTonghopuserthutienchuakhoaso::OnToDateSetfocus(){
	
} */
/*void CFMTonghopuserthutienchuakhoaso::OnToDateKillfocus(){
	
} */
int CFMTonghopuserthutienchuakhoaso::OnToDateCheckValue(){
	return 0;
} 
void CFMTonghopuserthutienchuakhoaso::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTonghopuserthutienchuakhoaso::OnObjectSelendok(){
	 
}
/*void CFMTonghopuserthutienchuakhoaso::OnObjectSetfocus(){
	
}*/
/*void CFMTonghopuserthutienchuakhoaso::OnObjectKillfocus(){
	
}*/
long CFMTonghopuserthutienchuakhoaso::OnObjectLoadData(){
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
/*void CFMTonghopuserthutienchuakhoaso::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMTonghopuserthutienchuakhoaso::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\Template\\DANHSACH_USER_THUTIEN_CHUAKHOASO.xls"))) AfxMessageBox(_T("Chưa có File Exports\\Template\\DANHSACH_USER_THUTIEN_CHUAKHOASO.xls"));	
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
		
		rs.GetValue(_T("nhanvien"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);				

		nRow++;
		rs.MoveNext();
	}	

	EndWaitCursor();
	xls.Save(_T("Exports\\Template\\DANHSACH_USER_THUTIEN_CHUAKHOASO2.xls"));
} 
int CFMTonghopuserthutienchuakhoaso::OnCheckBeforeExport(CExcel* xls, CRecord* rs){
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
CString CFMTonghopuserthutienchuakhoaso::GetQueryString()
{
	
	CString szSQL, szWhere, szObjectFilter;

		szSQL.Format(_T(" SELECT DISTINCT ( hfe_staff ) as nhanvien") \
		_T(" FROM hms_fee_invoice") \
		_T(" WHERE HFE_DATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND NVL(HFE_LOCKED,'X')='N'") \
		_T(" AND hfe_status='P'") \
		_T(" order by hfe_staff"), m_szFromDate, m_szToDate);

	return szSQL;
}