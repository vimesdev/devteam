#include "stdafx.h"
#include "EMThongtinkhambenhTTTM.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMThongtinkhambenhTTTM *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMThongtinkhambenhTTTM* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd)
{
	((CEMThongtinkhambenhTTTM *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMThongtinkhambenhTTTM *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMThongtinkhambenhTTTM *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMThongtinkhambenhTTTM *)pWnd)->OnToDateCheckValue();
}
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMThongtinkhambenhTTTM*)pWnd)->OnRoomLoadData();
} 
static void _OnRoomDblClickFnc(CWnd *pWnd){
	((CEMThongtinkhambenhTTTM*)pWnd)->OnRoomDblClick();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMThongtinkhambenhTTTM*)pWnd)->OnRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomDeleteItemFnc(CWnd *pWnd){
	return ((CEMThongtinkhambenhTTTM*)pWnd)->OnRoomDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CEMThongtinkhambenhTTTM *pVw = (CEMThongtinkhambenhTTTM *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMThongtinkhambenhTTTM *pVw = (CEMThongtinkhambenhTTTM *)pWnd;
	pVw->OnExportSelect();
} 
CEMThongtinkhambenhTTTM::CEMThongtinkhambenhTTTM(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CEMThongtinkhambenhTTTM::~CEMThongtinkhambenhTTTM(){
}
void CEMThongtinkhambenhTTTM::OnCreateComponents()
{
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
void CEMThongtinkhambenhTTTM::OnInitializeComponents(){
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
	m_wndRoom.InsertColumn(1, _T("Room"), CFMT_TEXT, 450);

}
void CEMThongtinkhambenhTTTM::OnSetWindowEvents(){
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
void CEMThongtinkhambenhTTTM::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CEMThongtinkhambenhTTTM::SetDefaultValues(){

	m_nYear = 0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CEMThongtinkhambenhTTTM::SetMode(int nMode){
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
/*void CEMThongtinkhambenhTTTM::OnYearChange(){
	
} */
/*void CEMThongtinkhambenhTTTM::OnYearSetfocus(){
	
} */
/*void CEMThongtinkhambenhTTTM::OnYearKillfocus(){
	
} */
int CEMThongtinkhambenhTTTM::OnYearCheckValue(){
	return 0;
} 
void CEMThongtinkhambenhTTTM::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CEMThongtinkhambenhTTTM::OnReportPeriodSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	pMF->OnReportPeriodSelendok(&m_szFromDate, &m_szToDate, m_szReportPeriodKey);
	UpdateData(false);	 
}
/*void CEMThongtinkhambenhTTTM::OnReportPeriodSetfocus(){
	
}*/
/*void CEMThongtinkhambenhTTTM::OnReportPeriodKillfocus(){
	
}*/
long CEMThongtinkhambenhTTTM::OnReportPeriodLoadData()
{
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
/*void CEMThongtinkhambenhTTTM::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CEMThongtinkhambenhTTTM::OnFromDateChange(){
	
} */
/*void CEMThongtinkhambenhTTTM::OnFromDateSetfocus(){
	
} */
/*void CEMThongtinkhambenhTTTM::OnFromDateKillfocus(){
	
} */
int CEMThongtinkhambenhTTTM::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMThongtinkhambenhTTTM::OnToDateChange(){
	
} */
/*void CEMThongtinkhambenhTTTM::OnToDateSetfocus(){
	
} */
/*void CEMThongtinkhambenhTTTM::OnToDateKillfocus(){
	
} */
int CEMThongtinkhambenhTTTM::OnToDateCheckValue(){
	return 0;
} 
void CEMThongtinkhambenhTTTM::OnRoomDblClick(){
	
} 
void CEMThongtinkhambenhTTTM::OnRoomSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CEMThongtinkhambenhTTTM::OnRoomDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CEMThongtinkhambenhTTTM::OnRoomLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoom.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id AS id, hrl_name AS name FROM hms_roomlist WHERE hrl_deptid = 'TTTM' ORDER BY hrl_id"));
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
void CEMThongtinkhambenhTTTM::OnPrintPreviewSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
} 
void CEMThongtinkhambenhTTTM::OnExportSelect(){
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
	if(!xls.Load(_T("Exports\\Template\\DanhsachkhambenhTTTM.xls"))) AfxMessageBox(_T("Chưa có File DanhsachkhambenhTTTM.xls trong thư mục Export\Template!"));
	xls.SetWorksheet(0);	

	tmpStr.Format(_T("Từ %s Đến %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 7, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("examdate"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("birthdate"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("occupation"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("telephone"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("examconclusion"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("conclusion"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("practioner"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("totalmoney"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("totalexamfee"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}	

	EndWaitCursor();
		
		xls.Save(_T("Exports\\Template\\DanhsachkhambenhTTTM2.xls"));
} 

CString CEMThongtinkhambenhTTTM::GetQueryString()
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
			szRooms.AppendFormat(_T("%s"), m_wndRoom.GetItemText(i, 0));
		}
	}
	if(!szRooms.IsEmpty())
		szWhere.AppendFormat(_T("AND he_deptid IN ('TTTM') and he_roomid IN(%s)"), szRooms);
					szSQL.Format(_T(" SELECT he_docno as docno,") \
					_T("   TO_CHAR(he_examdate, 'DD/MM/YYYY HH24:MI')                                           AS examdate,") \
					_T("   get_roomname(he_deptid, he_roomid)                                                   AS roomname,") \
					_T("   GET_PATIENTNAME(he_docno)                                                            AS patname,") \
					_T("   TO_CHAR(hp_birthdate, 'DD/MM/YYYY')                                                  AS birthdate,") \
					_T("   hms_getsex(hp_sex)                                                                   AS sex,") \
					_T("   sys_sel_getname('sys_occupation', hp_occupation)                                     AS occupation,") \
					_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid))                                      AS address,") \
					_T("   TRIM(hd_telephone)                                                                   AS telephone,") \
					_T("   he_diagnostic                                                                        AS examconclusion,") \
					_T("   hd_conclusion                                                                        AS conclusion,") \
					_T("   HMS_GET_PRACTIONER_FROM_DATE(he_docno, '%s', '%s', 'TTTM') AS practioner,") \
					_T("   GET_OPERATION_PAID(he_docno, '%s', '%s')           AS totalmoney, ") \
					_T("   GET_EXAMFEE_PAID(he_docno, '%s', '%s')           AS totalexamfee ") \
					_T(" FROM hms_exam") \
					_T(" LEFT JOIN hms_patient") \
					_T(" ON (he_patientno = hp_patientno)") \
					_T(" LEFT JOIN hms_doc") \
					_T(" ON (he_docno = hd_docno)") \
					_T(" WHERE he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
					_T(" order by hd_docno, he_examdate"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhere);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}