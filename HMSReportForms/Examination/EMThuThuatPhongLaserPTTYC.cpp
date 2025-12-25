#include "stdafx.h"
#include "EMThuThuatPhongLaserPTTYC.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMThuThuatPhongLaserPTTYC* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMThuThuatPhongLaserPTTYC *)pWnd)->OnToDateCheckValue();
}
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMThuThuatPhongLaserPTTYC*)pWnd)->OnRoomLoadData();
} 
static void _OnRoomDblClickFnc(CWnd *pWnd){
	((CEMThuThuatPhongLaserPTTYC*)pWnd)->OnRoomDblClick();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMThuThuatPhongLaserPTTYC*)pWnd)->OnRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomDeleteItemFnc(CWnd *pWnd){
	return ((CEMThuThuatPhongLaserPTTYC*)pWnd)->OnRoomDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CEMThuThuatPhongLaserPTTYC *pVw = (CEMThuThuatPhongLaserPTTYC *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMThuThuatPhongLaserPTTYC *pVw = (CEMThuThuatPhongLaserPTTYC *)pWnd;
	pVw->OnExportSelect();
} 
CEMThuThuatPhongLaserPTTYC::CEMThuThuatPhongLaserPTTYC(CWnd *pParent){

	m_nDlgWidth = 500;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CEMThuThuatPhongLaserPTTYC::~CEMThuThuatPhongLaserPTTYC(){
}
void CEMThuThuatPhongLaserPTTYC::OnCreateComponents(){
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
	m_wndExport.Create(this, _T("&Export"), 415, 400, 490, 425);

}
void CEMThuThuatPhongLaserPTTYC::OnInitializeComponents(){
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
void CEMThuThuatPhongLaserPTTYC::OnSetWindowEvents(){
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
void CEMThuThuatPhongLaserPTTYC::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CEMThuThuatPhongLaserPTTYC::SetDefaultValues(){

	m_nYear = 0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CEMThuThuatPhongLaserPTTYC::SetMode(int nMode){
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
/*void CEMThuThuatPhongLaserPTTYC::OnYearChange(){
	
} */
/*void CEMThuThuatPhongLaserPTTYC::OnYearSetfocus(){
	
} */
/*void CEMThuThuatPhongLaserPTTYC::OnYearKillfocus(){
	
} */
int CEMThuThuatPhongLaserPTTYC::OnYearCheckValue(){
	return 0;
} 
void CEMThuThuatPhongLaserPTTYC::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CEMThuThuatPhongLaserPTTYC::OnReportPeriodSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	pMF->OnReportPeriodSelendok(&m_szFromDate, &m_szToDate, m_szReportPeriodKey);
	UpdateData(false);	 
}
/*void CEMThuThuatPhongLaserPTTYC::OnReportPeriodSetfocus(){
	
}*/
/*void CEMThuThuatPhongLaserPTTYC::OnReportPeriodKillfocus(){
	
}*/
long CEMThuThuatPhongLaserPTTYC::OnReportPeriodLoadData(){
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
/*void CEMThuThuatPhongLaserPTTYC::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CEMThuThuatPhongLaserPTTYC::OnFromDateChange(){
	
} */
/*void CEMThuThuatPhongLaserPTTYC::OnFromDateSetfocus(){
	
} */
/*void CEMThuThuatPhongLaserPTTYC::OnFromDateKillfocus(){
	
} */
int CEMThuThuatPhongLaserPTTYC::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMThuThuatPhongLaserPTTYC::OnToDateChange(){
	
} */
/*void CEMThuThuatPhongLaserPTTYC::OnToDateSetfocus(){
	
} */
/*void CEMThuThuatPhongLaserPTTYC::OnToDateKillfocus(){
	
} */
int CEMThuThuatPhongLaserPTTYC::OnToDateCheckValue(){
	return 0;
} 
void CEMThuThuatPhongLaserPTTYC::OnRoomDblClick(){
	
} 
void CEMThuThuatPhongLaserPTTYC::OnRoomSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CEMThuThuatPhongLaserPTTYC::OnRoomDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CEMThuThuatPhongLaserPTTYC::OnRoomLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoom.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id AS id, hrl_name AS name FROM hms_roomlist WHERE hrl_deptid = 'TYC' ORDER BY hrl_id"));
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
void CEMThuThuatPhongLaserPTTYC::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CEMThuThuatPhongLaserPTTYC::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow = 0, nCol = 0, nIdx = 1;
	int nTemp = 0, nXD = 0, nCO2 = 0, nF1 =0, nQ1 = 0, nMT = 0;
	CExcel xls;
	if (!xls.Load(_T("Exports\\BaoCaoThuThuatCuaPhongLaser.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("roomname"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("XD"), nTemp);		if(nTemp > 0)		{			xls.SetCellText(nCol+4, nRow, _T("X"), FMT_TEXT);			nXD++;		}		rs.GetValue(_T("CO2"), nTemp);		if(nTemp > 0)		{			xls.SetCellText(nCol+5, nRow, _T("X"), FMT_TEXT);			nCO2++;		}		rs.GetValue(_T("F1"), nTemp);		if(nTemp > 0)		{			xls.SetCellText(nCol+6, nRow, _T("X"), FMT_TEXT);			nF1++;		}		rs.GetValue(_T("Q1"), nTemp);		if(nTemp > 0)		{			xls.SetCellText(nCol+7, nRow, _T("X"), FMT_TEXT);			nQ1++;		}		rs.GetValue(_T("MT"), nTemp);		if(nTemp > 0)		{			xls.SetCellText(nCol+8, nRow, _T("X"), FMT_TEXT);			nMT++;		}		nRow++;		rs.MoveNext();	}

	xls.SetCellText(nCol+1, nRow, _T("Tổng cộng:"), FMT_TEXT, true);
	xls.SetCellText(nCol+4, nRow, int2str(nXD), FMT_NUMBER1, true);
	xls.SetCellText(nCol+5, nRow, int2str(nCO2), FMT_NUMBER1, true);
	xls.SetCellText(nCol+6, nRow, int2str(nF1), FMT_NUMBER1, true);
	xls.SetCellText(nCol+7, nRow, int2str(nQ1), FMT_NUMBER1, true);
	xls.SetCellText(nCol+8, nRow, int2str(nMT), FMT_NUMBER1, true);

	EndWaitCursor();
	xls.Save(_T("Exports\\BaoCaoThuThuatCuaPhongLaser2.xls"));
} 

CString CEMThuThuatPhongLaserPTTYC::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szRooms;

	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
		{
			m_wndRoom.SetCurSel(i);
			if (!szRooms.IsEmpty())
				szRooms += _T(",");
			szRooms.AppendFormat(_T("%s"), m_wndRoom.GetItemText(i, 0));
		}
	}
	if(!szRooms.IsEmpty())
		szWhere.AppendFormat(_T("AND ho_roomid IN(%s)"), szRooms);
	else
		szWhere.AppendFormat(_T("AND ho_roomid IN(33,34,35)"));

	szSQL.Format(_T(" SELECT ") \
		_T(" docno,") \
		_T(" pname,") \
		_T(" roomname,") \
		_T(" SUM(XD) AS XD,") \
		_T(" SUM(CO2) AS CO2,") \
		_T(" SUM(F1) AS F1,") \
		_T(" SUM(Q1) AS Q1,") \
		_T(" SUM(MT) AS MT") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ho_docno AS docno,") \
		_T(" get_patientname(ho_docno) AS pname,") \
		_T(" (SELECT hrl_name FROM hms_roomlist WHERE hrl_id = ho_roomid AND hrl_deptid = ho_deptid) AS roomname,") \
		_T(" CASE WHEN ho_recordno IN('YAGXD', 'YAG1') THEN 1 ELSE 0 END AS XD,") \
		_T(" CASE WHEN ho_recordno IN('CO2') THEN 1 ELSE 0 END AS CO2,") \
		_T(" CASE WHEN ho_recordno IN('F1') THEN 1 ELSE 0 END AS F1,") \
		_T(" CASE WHEN ho_recordno IN('Q1') THEN 1 ELSE 0 END AS Q1,") \
		_T(" CASE WHEN ho_recordno IN('TE') OR hfl_categoryid = 300 THEN 1 ELSE 0 END AS MT") \
		_T(" FROM hms_operation") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(ho_itemid = hfl_feeid)") \
		_T(" WHERE ho_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND ho_status <> 'O'") \
		_T(" AND ho_pdeptid = 'PTTYC'") \
		_T(" AND ho_deptid = 'TYC'") \
		_T(" %s") \
		_T(" ) tbl") \
		_T(" GROUP BY") \
		_T(" docno,") \
		_T(" pname,") \
		_T(" roomname") \
		_T(" ORDER BY") \
		_T(" roomname,") \
		_T(" docno,") \
		_T(" pname"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}