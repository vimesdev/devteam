#include "stdafx.h"
#include "EMThongtindieutrilaser.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMThongtindieutrilaserTYC *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMThongtindieutrilaserTYC* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd)
{
	((CEMThongtindieutrilaserTYC *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMThongtindieutrilaserTYC *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMThongtindieutrilaserTYC *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMThongtindieutrilaserTYC *)pWnd)->OnToDateCheckValue();
}
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMThongtindieutrilaserTYC*)pWnd)->OnRoomLoadData();
} 
static void _OnRoomDblClickFnc(CWnd *pWnd){
	((CEMThongtindieutrilaserTYC*)pWnd)->OnRoomDblClick();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMThongtindieutrilaserTYC*)pWnd)->OnRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomDeleteItemFnc(CWnd *pWnd){
	return ((CEMThongtindieutrilaserTYC*)pWnd)->OnRoomDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CEMThongtindieutrilaserTYC *pVw = (CEMThongtindieutrilaserTYC *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMThongtindieutrilaserTYC *pVw = (CEMThongtindieutrilaserTYC *)pWnd;
	pVw->OnExportSelect();
} 
CEMThongtindieutrilaserTYC::CEMThongtindieutrilaserTYC(CWnd *pParent)
{

	m_nDlgWidth = 500;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CEMThongtindieutrilaserTYC::~CEMThongtindieutrilaserTYC(){
}
void CEMThongtindieutrilaserTYC::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 395);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85);
	m_wndRoom.Create(this,10, 90, 485, 390); 
	m_wndRoom.SetCheckBox(TRUE);
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 300, 400, 410, 425);
	m_wndExport.Create(this, _T("&ExportXLS"), 415, 400, 490, 425);

}
void CEMThongtindieutrilaserTYC::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), FMT_INTEGER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Name"), FMT_TEXT, 80);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndRoom.InsertColumn(1, _T("Room"), CFMT_TEXT, 250);

}
void CEMThongtindieutrilaserTYC::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	m_wndRoom.SetEvent(WE_DBLCLICK, _OnRoomDblClickFnc);
	m_wndRoom.AddEvent(1, _T("Delete"), _OnRoomDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CDate dte;
	dte.ParseDate(pMF->GetSysDate());
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	m_nYear = dte.GetYear();
	m_szReportPeriodKey.Format(_T("%d"), dte.GetMonth());
	UpdateData(false);
	OnRoomLoadData();

}
void CEMThongtindieutrilaserTYC::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CEMThongtindieutrilaserTYC::SetDefaultValues(){

	m_nYear = 0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CEMThongtindieutrilaserTYC::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CEMThongtindieutrilaserTYC::OnYearChange(){
	
} */
/*void CEMThongtindieutrilaserTYC::OnYearSetfocus(){
	
} */
/*void CEMThongtindieutrilaserTYC::OnYearKillfocus(){
	
} */
int CEMThongtindieutrilaserTYC::OnYearCheckValue(){
	return 0;
} 
void CEMThongtindieutrilaserTYC::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CEMThongtindieutrilaserTYC::OnReportPeriodSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	pMF->OnReportPeriodSelendok(&m_szFromDate, &m_szToDate, m_szReportPeriodKey);
	UpdateData(false);	 
}
/*void CEMThongtindieutrilaserTYC::OnReportPeriodSetfocus(){
	
}*/
/*void CEMThongtindieutrilaserTYC::OnReportPeriodKillfocus(){
	
}*/
long CEMThongtindieutrilaserTYC::OnReportPeriodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadReportPeriodList(&m_wndReportPeriod, m_szReportPeriodKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReportPeriodKey
};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMThongtindieutrilaserTYC::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CEMThongtindieutrilaserTYC::OnFromDateChange(){
	
} */
/*void CEMThongtindieutrilaserTYC::OnFromDateSetfocus(){
	
} */
/*void CEMThongtindieutrilaserTYC::OnFromDateKillfocus(){
	
} */
int CEMThongtindieutrilaserTYC::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMThongtindieutrilaserTYC::OnToDateChange(){
	
} */
/*void CEMThongtindieutrilaserTYC::OnToDateSetfocus(){
	
} */
/*void CEMThongtindieutrilaserTYC::OnToDateKillfocus(){
	
} */
int CEMThongtindieutrilaserTYC::OnToDateCheckValue(){
	return 0;
} 
void CEMThongtindieutrilaserTYC::OnRoomDblClick(){
	
} 
void CEMThongtindieutrilaserTYC::OnRoomSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CEMThongtindieutrilaserTYC::OnRoomDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CEMThongtindieutrilaserTYC::OnRoomLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoom.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='HMS_OPERATION_TYPE' ORDER BY ss_index, ss_code "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndRoom.EndLoad(); 
	return nCount;

}
void CEMThongtindieutrilaserTYC::OnPrintPreviewSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
} 
void CEMThongtindieutrilaserTYC::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
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
	if(!xls.Load(_T("Exports\\Template\\MAUTHONGTINDIEUTRI_LASER_CHITIET.xls"))) AfxMessageBox(_T("Chưa có File MAUTHONGTINDIEUTRI_LASER_CHITIET.xls trong thư mục Export\Template!"));
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);	

	tmpStr.Format(_T("Từ %s Đến %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 7;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngaydieutri"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("landieutri"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("buocsong"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dorongtia"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("nangluong"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tansuat"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("chedolamlanh"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("nguoituvan"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bsthuchien"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ddphu"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);			

		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tenpttt"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);	

		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[13] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng:"), FMT_TEXT, true);
		for(int i = 13; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}	

	EndWaitCursor();
		
		xls.Save(_T("Exports\\Template\\MAUTHONGTINDIEUTRI_LASER_CHITIETxxx.xls"));
} 

CString CEMThongtindieutrilaserTYC::GetQueryString()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szRooms;

	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
		{
			m_wndRoom.SetCurSel(i);
			if (!szRooms.IsEmpty())
				szRooms += _T(",");
			szRooms.AppendFormat(_T("'%s'"), m_wndRoom.GetItemText(i, 0));
		}
	}
	//if(!szRooms.IsEmpty())
	//	szWhere.AppendFormat(_T("AND ho_opt_type IN(%s)"), szRooms);

	szSQL.Format(_T(" SELECT ls_docno as docno, to_char(LS_DATE, 'DD/MM/YYYY') AS ngaydieutri,") \
					_T(" GET_PATIENTNAME(ls_docno) as patname,") \
					_T("   LS_CODE         AS landieutri,") \
					_T("   LS_BUOCSONG     AS buocsong,") \
					_T("   LS_DORONGTIA    AS dorongtia,") \
					_T("   LS_NANGLUONG    AS nangluong,") \
					_T("   LS_TANSUAT      AS tansuat,") \
					_T("   LS_CHEDOLAMLANH AS chedolamlanh,") \
					_T("   LS_KHOA         AS khoa,  ") \
					_T("   GET_USERNAME(LS_NGUOITUVAN)         AS nguoituvan,  ") \
					_T("   GET_USERNAME(LS_BSTHUCHIEN)         AS bsthuchien,  ") \
					_T("   GET_USERNAME(LS_DDPHU)         AS ddphu,  ") \
					_T("   LISTAGG(CAST(hpol_productname AS VARCHAR2(1024)), ', ') WITHIN GROUP (ORDER BY ls_code) AS thuoc,") \
					_T("   SUM(hfe_payment) as thanhtien,") \
					_T("   hfl_name as tenpttt") \
					_T(" FROM HMS_LASERTREATMENT_LIST") \
					_T(" LEFT JOIN HMS_LASER_DRUG_VIEW ON (ls_docno=hpol_docno AND trunc(LS_DATE)=trunc(HPOL_CREATEDDATE))") \
					_T(" LEFT JOIN hms_fee_invoice ON (ls_docno=hfe_docno AND trunc(LS_DATE)=trunc(hfe_date))") \
					_T(" LEFT JOIN hms_operation ON (ls_docno=ho_docno AND TRUNC(LS_DATE)=TRUNC(ho_orderdate) AND LS_ORDERID_OP=ho_idx)") \
					_T(" LEFT JOIN hms_fee_list ON (ho_itemid = hfl_feeid)") \
					_T(" WHERE 1=1 AND ls_docno > 0") \
					_T(" AND LS_DATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
					_T(" GROUP BY ls_docno,LS_DATE, LS_CODE, LS_BUOCSONG, LS_DORONGTIA, LS_NANGLUONG,LS_TANSUAT, LS_CHEDOLAMLANH, LS_KHOA,LS_NGUOITUVAN, LS_BSTHUCHIEN, LS_DDPHU, hfl_name ") \
					_T(" ORDER BY LS_CODE"), m_szFromDate, m_szToDate);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}