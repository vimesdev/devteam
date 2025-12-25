#include "stdafx.h"
#include "SOMBCSOLUONGPTTTEX.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSOMBCSOLUONGPTTYCEX* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CSOMBCSOLUONGPTTYCEX *)pWnd)->OnObjectAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CSOMBCSOLUONGPTTYCEX *pVw = (CSOMBCSOLUONGPTTYCEX *)pWnd;
	pVw->OnExportSelect();
} 
CSOMBCSOLUONGPTTYCEX::CSOMBCSOLUONGPTTYCEX()
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();

}
CSOMBCSOLUONGPTTYCEX::~CSOMBCSOLUONGPTTYCEX()
{
}
void CSOMBCSOLUONGPTTYCEX::OnCreateComponents()
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
void CSOMBCSOLUONGPTTYCEX::OnInitializeComponents()
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
void CSOMBCSOLUONGPTTYCEX::OnSetWindowEvents(){
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
void CSOMBCSOLUONGPTTYCEX::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

}
void CSOMBCSOLUONGPTTYCEX::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();

}
int CSOMBCSOLUONGPTTYCEX::SetMode(int nMode){
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
/*void CSOMBCSOLUONGPTTYCEX::OnFromDateChange(){
	
} */
/*void CSOMBCSOLUONGPTTYCEX::OnFromDateSetfocus(){
	
} */
/*void CSOMBCSOLUONGPTTYCEX::OnFromDateKillfocus(){
	
} */
int CSOMBCSOLUONGPTTYCEX::OnFromDateCheckValue(){
	return 0;
} 
/*void CSOMBCSOLUONGPTTYCEX::OnToDateChange(){
	
} */
/*void CSOMBCSOLUONGPTTYCEX::OnToDateSetfocus(){
	
} */
/*void CSOMBCSOLUONGPTTYCEX::OnToDateKillfocus(){
	
} */
int CSOMBCSOLUONGPTTYCEX::OnToDateCheckValue(){
	return 0;
} 
void CSOMBCSOLUONGPTTYCEX::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMBCSOLUONGPTTYCEX::OnObjectSelendok(){
	 
}
/*void CSOMBCSOLUONGPTTYCEX::OnObjectSetfocus(){
	
}*/
/*void CSOMBCSOLUONGPTTYCEX::OnObjectKillfocus(){
	
}*/
long CSOMBCSOLUONGPTTYCEX::OnObjectLoadData(){
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
/*void CSOMBCSOLUONGPTTYCEX::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSOMBCSOLUONGPTTYCEX::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\B.NG.DMKT.GIA.TYC_VIMES.xls"))) AfxMessageBox(_T("Chưa có File trong thư mục Export!"));	
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
		//xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("c0"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c3"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c4"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c5"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c6"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c7"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c8"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c9"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c10"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c11"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c12"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("c13"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);		

		nRow++;
		rs.MoveNext();
	}	

	EndWaitCursor();
	xls.Save(_T("Exports\\B.NG.DMKT.GIA.TYC_VIMES2.xls"));
} 
int CSOMBCSOLUONGPTTYCEX::OnCheckBeforeExport(CExcel* xls, CRecord* rs){
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
CString CSOMBCSOLUONGPTTYCEX::GetQueryString()
{
	
	CString szSQL, szWhere, szObjectFilter;

	

				szSQL.Format(_T(" select ") \
					_T("    pl.STT as c0 , ") \
					_T(" 	pl.MAPHI as c1,") \
					_T(" 	pl.TEN as c2, ") \
					_T(" 	pl.DONVI as c3, ") \
					_T(" 	pl.KHOA as c4, 	") \
					_T(" 	pl.GIA_DICHVU as c5 , ") \
					_T(" 	pl.GIA_BAOHIEM as c6, ") \
					_T(" 	pl.GIA_YEUCAU as c7, ") \
					_T(" 	pl.SOVOIGIA_BHYT as c8, ") \
					_T(" 	pl.SOVOIGIA_DV as c9,") \
					_T("    fl.HFL_SERVPRICE as c10,") \
					_T("    fl.HFL_INSPRICE as c11,") \
					_T("    fl.HFL_REQPRICE as c12,") \
					_T("    SUM(op.HO_QTY) as c13") \
					_T(" from hms_operation op ") \
					_T(" left join HMS_FEE_PTTYC_LIST pl ON (op.ho_itemid=pl.MAPHI)") \
					_T(" left join hms_fee_list fl ON (pl.MAPHI=fl.hfl_feeid)") \
					_T(" where 1=1") \
					_T(" and pl.MAPHI is not null") \
					_T(" and op.HO_PAYMENT='P' AND HO_DEPTID in ('TYC', 'PTTYC')") \
					_T(" and op.HO_ORDERDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') ") \
					_T(" GROUP BY pl.STT, pl.MAPHI, pl.TEN, pl.DONVI,pl.KHOA, ") \
					_T(" pl.GIA_DICHVU, pl.GIA_BAOHIEM, pl.GIA_YEUCAU, pl.SOVOIGIA_BHYT, pl.SOVOIGIA_DV, fl.HFL_SERVPRICE, fl.HFL_INSPRICE, fl.HFL_REQPRICE") \
					_T(" order by pl.STT"), m_szFromDate, m_szToDate);

	return szSQL;
}