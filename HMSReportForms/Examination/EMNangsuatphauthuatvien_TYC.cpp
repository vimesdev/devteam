#include "stdafx.h"
#include "EMNangsuatphauthuatvien_TYC.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "SearchPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMNangsuatphauthuatvienTYC *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMNangsuatphauthuatvienTYC* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd)
{
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMNangsuatphauthuatvienTYC *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMNangsuatphauthuatvienTYC *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMNangsuatphauthuatvienTYC *)pWnd)->OnToDateCheckValue();
}
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMNangsuatphauthuatvienTYC*)pWnd)->OnRoomLoadData();
} 
static void _OnRoomDblClickFnc(CWnd *pWnd){
	((CEMNangsuatphauthuatvienTYC*)pWnd)->OnRoomDblClick();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMNangsuatphauthuatvienTYC*)pWnd)->OnRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomDeleteItemFnc(CWnd *pWnd){
	return ((CEMNangsuatphauthuatvienTYC*)pWnd)->OnRoomDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CEMNangsuatphauthuatvienTYC *pVw = (CEMNangsuatphauthuatvienTYC *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMNangsuatphauthuatvienTYC *pVw = (CEMNangsuatphauthuatvienTYC *)pWnd;
	pVw->OnExportSelect();
}

static int _OnListSearchItemFnc(CWnd *pWnd)
{
	 ((CEMNangsuatphauthuatvienTYC*)pWnd)->OnListSearchItem();
	 return 0;
} 
CEMNangsuatphauthuatvienTYC::CEMNangsuatphauthuatvienTYC(CWnd *pParent){

	m_nDlgWidth = 500;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CEMNangsuatphauthuatvienTYC::~CEMNangsuatphauthuatvienTYC(){
}
void CEMNangsuatphauthuatvienTYC::OnCreateComponents(){
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
void CEMNangsuatphauthuatvienTYC::OnInitializeComponents(){
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

	m_wndRoom.InsertColumn(0, _T("Mã"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndRoom.InsertColumn(1, _T("Tên"), CFMT_TEXT, 250);
	m_wndRoom.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 100);

}
void CEMNangsuatphauthuatvienTYC::OnSetWindowEvents(){
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
	m_wndRoom.AddEvent(1, _T("Search"), _OnListSearchItemFnc);
	//m_wndRoom.AddEvent(1, _T("Delete"), _OnRoomDeleteItemFnc, 0, VK_DELETE, 0);
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
void CEMNangsuatphauthuatvienTYC::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CEMNangsuatphauthuatvienTYC::SetDefaultValues(){

	m_nYear = 0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CEMNangsuatphauthuatvienTYC::SetMode(int nMode){
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
/*void CEMNangsuatphauthuatvienTYC::OnYearChange(){
	
} */
/*void CEMNangsuatphauthuatvienTYC::OnYearSetfocus(){
	
} */
/*void CEMNangsuatphauthuatvienTYC::OnYearKillfocus(){
	
} */
int CEMNangsuatphauthuatvienTYC::OnYearCheckValue(){
	return 0;
} 
void CEMNangsuatphauthuatvienTYC::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CEMNangsuatphauthuatvienTYC::OnReportPeriodSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	pMF->OnReportPeriodSelendok(&m_szFromDate, &m_szToDate, m_szReportPeriodKey);
	UpdateData(false);	 
}
/*void CEMNangsuatphauthuatvienTYC::OnReportPeriodSetfocus(){
	
}*/
/*void CEMNangsuatphauthuatvienTYC::OnReportPeriodKillfocus(){
	
}*/
long CEMNangsuatphauthuatvienTYC::OnReportPeriodLoadData(){
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
/*void CEMNangsuatphauthuatvienTYC::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CEMNangsuatphauthuatvienTYC::OnFromDateChange(){
	
} */
/*void CEMNangsuatphauthuatvienTYC::OnFromDateSetfocus(){
	
} */
/*void CEMNangsuatphauthuatvienTYC::OnFromDateKillfocus(){
	
} */
int CEMNangsuatphauthuatvienTYC::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMNangsuatphauthuatvienTYC::OnToDateChange(){
	
} */
/*void CEMNangsuatphauthuatvienTYC::OnToDateSetfocus(){
	
} */
/*void CEMNangsuatphauthuatvienTYC::OnToDateKillfocus(){
	
} */
int CEMNangsuatphauthuatvienTYC::OnToDateCheckValue(){
	return 0;
} 
void CEMNangsuatphauthuatvienTYC::OnRoomDblClick(){
	
} 
void CEMNangsuatphauthuatvienTYC::OnRoomSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CEMNangsuatphauthuatvienTYC::OnRoomDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CEMNangsuatphauthuatvienTYC::OnRoomLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoom.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT su_userid as id,") \
	_T(" su_name as name,") \
	_T(" SU_DEPTID as deptid") \
	_T(" from sys_user") \
	_T(" where SU_DEPTID in ('TYC', 'PTTYC')") \
	_T(" and SU_ISACTIVE='Y'") \
	_T(" order by SU_DEPTID"));


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	m_wndRoom.EndLoad(); 
	return nCount;

}
void CEMNangsuatphauthuatvienTYC::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CEMNangsuatphauthuatvienTYC::OnExportSelect(){
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
	if(!xls.Load(_T("Exports\\Template\\BAOCAONANGSUATCUAPTV.xls"))) AfxMessageBox(_T("Chưa có File BAOCAONANGSUATCUAPTV.xls trong thư mục Export\Template!"));
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("bsmo"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[5] > 0)
			{
				xls.SetCellText(4, nRow, _T("Cộng"), FMT_TEXT, true);

				for(int i = 5; i < 30; i++)
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
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("obj"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenpttt"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sotien"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("trangthaitt"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bsmo"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		

		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[5] > 0)
	{
		xls.SetCellText(4, nRow, _T("Cộng nhóm:"), FMT_TEXT, true);
		for(int i = 5; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	
	if (nTotal[5] > 0)
	{
		xls.SetCellText(4, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 5; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
		
		xls.Save(_T("Exports\\Template\\BAOCAONANGSUATCUAPTV2.xls"));
} 

CString CEMNangsuatphauthuatvienTYC::GetQueryString()
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
	if(!szRooms.IsEmpty())
		szWhere.AppendFormat(_T("AND bsmo IN(%s)"), szRooms);
	
	szSQL.Format(_T(" SELECT * FROM") \
				_T(" (") \
				_T(" SELECT ho_docno             AS docno,") \
				_T("   GET_PATIENTNAME(ho_docno) AS patname,") \
				_T("   HMS_GETOBJECTNAME(iv.HFE_OBJECTID) as obj,") \
				_T("   ho_itemid                 AS itemid,") \
				_T("   hfl_name                  AS tenpttt,") \
				_T("   (SELECT") \
				_T("         CASE") \
				_T("           WHEN user_dept IS NOT NULL") \
				_T("           THEN TRIM(user_dept") \
				_T("             || ' - '") \
				_T("             || user_name)") \
				_T("           ELSE user_name") \
				_T("         END AS user_name") \
				_T("       FROM") \
				_T("         (SELECT su_userid AS user_id,") \
				_T("           su_name         AS user_name,") \
				_T("           su_deptid       AS user_dept,") \
				_T("           su_groupid") \
				_T("         FROM sys_user") \
				_T("         WHERE su_isactive='Y'") \
				_T("         UNION ALL") \
				_T("         SELECT hou_userid,") \
				_T("           hou_name,") \
				_T("           hou_dept,") \
				_T("           hou_group") \
				_T("         FROM hms_opt_user") \
				_T("         WHERE hou_isactive='Y'") \
				_T("         ) tbl") \
				_T("       WHERE user_id = ho_practitioner") \
				_T("       AND rownum    =1") \
				_T("       ) AS bsmo,  ") \
				_T("   ho_amount                 AS sotien,  ") \
				_T("   fe.hfe_status                AS trangthaitt  ") \
				_T(" FROM hms_operation") \
				_T(" LEFT JOIN hms_fee fe") \
				_T(" ON (ho_docno=hfe_docno") \
				_T(" AND ho_idx  =hfe_orderid)") \
				_T(" LEFT JOIN hms_fee_list") \
				_T(" ON (ho_itemid=hfl_feeid)") \
				_T(" LEFT JOIN hms_object oj ON (ho_object=oj.ho_id)") \
				_T(" LEFT JOIN hms_fee_invoice_view_v2 iv ON (fe.hfe_docno=iv.hfe_docno AND fe.hfe_invoiceno=iv.hfe_invoiceno)") \
				_T(" WHERE iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND fe.hfe_status='P'") \
				_T(" AND iv.HFE_POSTED='Y'") \
				_T(" AND ho_deptid in ('TYC', 'PTTYC')") \
				_T(" AND  SUBSTR(hfl_groupid, 1, 2) IN ('B4')") \
				_T(" and NVL(HFL_OBSTETRIC, 'N')='N'") \
				_T(" ORDER BY HO_ORDERDATE") \
				_T(" )") \
				_T(" WHERE 1=1 %s"), m_szFromDate, m_szToDate, szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}
void CEMNangsuatphauthuatvienTYC::OnListSearchItem()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndRoom);
	newPopup->ShowPopup(&m_wndRoom);
} 