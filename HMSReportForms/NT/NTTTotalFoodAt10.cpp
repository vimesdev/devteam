#include "stdafx.h"
#include "NTTTotalFoodAt10.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "StringToken.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CNTTTotalFoodAt10 *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CNTTTotalFoodAt10 *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CNTTTotalFoodAt10 *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CNTTTotalFoodAt10 *)pWnd)->OnDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CNTTTotalFoodAt10* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CNTTTotalFoodAt10 *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CNTTTotalFoodAt10 *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CNTTTotalFoodAt10 *)pWnd)->OnDepartmentKillfocus();
}*/
static double _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CNTTTotalFoodAt10 *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CNTTTotalFoodAt10 *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CNTTTotalFoodAt10*)pWnd)->OnAllSelect();
}
static void _OnBreakfastSelectFnc(CWnd *pWnd){
	  ((CNTTTotalFoodAt10*)pWnd)->OnBreakfastSelect();
}
static void _OnLunchSelectFnc(CWnd *pWnd){
	  ((CNTTTotalFoodAt10*)pWnd)->OnLunchSelect();
}
static void _OnDinnerSelectFnc(CWnd *pWnd){
	  ((CNTTTotalFoodAt10*)pWnd)->OnDinnerSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CNTTTotalFoodAt10 *pVw = (CNTTTotalFoodAt10 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddNTTTotalFoodAt10Fnc(CWnd *pWnd){
	 return ((CNTTTotalFoodAt10*)pWnd)->OnAddNTTTotalFoodAt10();
} 
static int _OnEditNTTTotalFoodAt10Fnc(CWnd *pWnd){
	 return ((CNTTTotalFoodAt10*)pWnd)->OnEditNTTTotalFoodAt10();
} 
static int _OnDeleteNTTTotalFoodAt10Fnc(CWnd *pWnd){
	 return ((CNTTTotalFoodAt10*)pWnd)->OnDeleteNTTTotalFoodAt10();
} 
static int _OnSaveNTTTotalFoodAt10Fnc(CWnd *pWnd){
	 return ((CNTTTotalFoodAt10*)pWnd)->OnSaveNTTTotalFoodAt10();
} 
static int _OnCancelNTTTotalFoodAt10Fnc(CWnd *pWnd){
	 return ((CNTTTotalFoodAt10*)pWnd)->OnCancelNTTTotalFoodAt10();
} 
CNTTTotalFoodAt10::CNTTTotalFoodAt10(CWnd *pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CNTTTotalFoodAt10::~CNTTTotalFoodAt10()
{
}
void CNTTTotalFoodAt10::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 465, 90);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 115, 55);
	m_wndDate.Create(this,120, 30, 460, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 115, 85);
	m_wndDepartment.Create(this,120, 60, 460, 85); 
	m_wndAll.Create(this, _T("All"), 10, 95, 75, 120);
	m_wndBreakfast.Create(this, _T("Breakfast"), 80, 95, 175, 120);
	m_wndBreakfast.EnableWindow(FALSE);
	m_wndLunch.Create(this, _T("Lunch"), 180, 95, 270, 120);
	m_wndDinner.Create(this, _T("Dinner"), 275, 95, 355, 120);
	m_wndExport.Create(this, _T("&Export"), 360, 95, 460, 120);
	m_wndHauCan.Create(this, _T("Báo ăn hậu cần"), 10, 125, 200, 150);

}
void CNTTTotalFoodAt10::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CNTTTotalFoodAt10::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndBreakfast.SetEvent(WE_CLICK, _OnBreakfastSelectFnc);
	m_wndLunch.SetEvent(WE_CLICK, _OnLunchSelectFnc);
	m_wndDinner.SetEvent(WE_CLICK, _OnDinnerSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddNTTTotalFoodAt10Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditNTTTotalFoodAt10Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteNTTTotalFoodAt10Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveNTTTotalFoodAt10Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelNTTTotalFoodAt10Fnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

	m_szDate = pMF->GetSysDate();
	UpdateData(false);

}
void CNTTTotalFoodAt10::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndBreakfast.GetDlgCtrlID(), m_nBreakfast);
	DDX_Radio(pDX, m_wndLunch.GetDlgCtrlID(), m_nLunch);
	DDX_Radio(pDX, m_wndDinner.GetDlgCtrlID(), m_nDinner);
	DDX_Check(pDX, m_wndHauCan.GetDlgCtrlID(), m_bHauCan);

}
void CNTTTotalFoodAt10::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CNTTTotalFoodAt10::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CNTTTotalFoodAt10::SetDefaultValues(){

	m_szDate.Empty();
	m_szDepartmentKey.Empty();
	m_nAll=0;
	m_nBreakfast=1;
	m_nLunch=1;
	m_nDinner=1;

}
int CNTTTotalFoodAt10::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CNTTTotalFoodAt10::OnDateChange(){
	
} */
/*void CNTTTotalFoodAt10::OnDateSetfocus(){
	
} */
/*void CNTTTotalFoodAt10::OnDateKillfocus(){
	
} */
int CNTTTotalFoodAt10::OnDateCheckValue(){
	return 0;
} 
void CNTTTotalFoodAt10::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CNTTTotalFoodAt10::OnDepartmentSelendok(){
	 
}
/*void CNTTTotalFoodAt10::OnDepartmentSetfocus(){
	
}*/
/*void CNTTTotalFoodAt10::OnDepartmentKillfocus(){
	
}*/
long CNTTTotalFoodAt10::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	}

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept ") \
		_T("WHERE sd_type IN ('DT') AND sd_id NOT IN ('A22', 'B5', 'B10', 'B15', 'CYBERL', 'C6', 'C18', 'C15', 'KD1', 'B3') ORDER BY sd_id"));
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CNTTTotalFoodAt10::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CNTTTotalFoodAt10::OnAllSelect(){
	
}
void CNTTTotalFoodAt10::OnBreakfastSelect(){
	
}
void CNTTTotalFoodAt10::OnLunchSelect(){
	
}
void CNTTTotalFoodAt10::OnDinnerSelect(){
	
}
void CNTTTotalFoodAt10::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, tmpStr2, szOldVendor, szNewVendor, szTemp;
	double nTmp = 0;
	int nIdx = 1, nCol = 0, nRow = 0, i = 0, j = 0, x = 0, z = 0, k = 0, nOldCol = 0;

	double nTotal[200];
	for(int y = 0; y < 200; y++)
	{
		nTotal[y] = 0;
	}
	szSQL = GetQueryStringTotal();
	int nRet = rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 5);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 10);
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("TỔNG HỢP QUÂN SỐ ĂN LÚC 10H00");
	xls.SetCellText(0, 2, tmpStr, 4098, true);

	tmpStr.Format(_T("Ngày %s tháng %s năm %s"), m_szDate.Right(2) ,m_szDate.Mid(5,2), m_szDate.Left(4));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	nRow = 4;
	//Fixed col
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(1, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(2, nRow, _T("Ăn TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(3, nRow, _T("Ăn A1+A16"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(4, nRow, _T("Bệnh lý"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(5, nRow, _T("Cháo"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(6, nRow, _T("OT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(7, nRow, _T("Sữa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(8, nRow, _T("Cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(9, nRow, _T("Ký nhận"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	nCol = 0;
	nRow = 5;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(1, nRow, rs.GetValue(_T("sd_id_alias")), FMT_TEXT);
		rs.GetValue(_T("comTT"), nTmp);
		nTotal[2] += nTmp;
		xls.SetCellText(2, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("comA1A16"), nTmp);
		nTotal[3] += nTmp;
		xls.SetCellText(3, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("com"), nTmp);
		nTotal[4] += nTmp;
		xls.SetCellText(4, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("chao"), nTmp);
		nTotal[5] += nTmp;
		xls.SetCellText(5, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("OT"), nTmp);
		nTotal[6] += nTmp;
		xls.SetCellText(6, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("sua"), nTmp);
		nTotal[7] += nTmp;
		xls.SetCellText(7, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("foodqty"), nTmp);
		nTotal[8] += nTmp;
		xls.SetCellText(8, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellText(1, nRow, _T("Tổng:"), FMT_TEXT, true);
	for (i = 2; i < 9; i++)
	{
		xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	}

	nRow++;
	nRow++;

	xls.SetCellText(0, nRow, _T("TB QUÂN NHU"), FMT_TEXT, true, 10);
	xls.SetCellText(2, nRow, _T("THỦ KHO BẾP"), FMT_TEXT, true, 10);
	xls.SetCellText(4, nRow, _T("THỐNG KÊ"), FMT_TEXT, true, 10);
	xls.SetCellText(6, nRow, _T("CHỦ NHIỆM KHOA C11"), FMT_TEXT, true, 10);
	xls.SetCellText(9, nRow, _T("NGƯỜI TỔNG HỢP"), FMT_TEXT, true, 10);

	nRow++;
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	nRow++;

	xls.SetCellText(4, nRow, _T("1// TRẦN THỊ HIỆP"), FMT_TEXT, true, 10);
	xls.SetCellText(6, nRow, _T("4// NGUYỄN ĐÌNH KHẢI"), FMT_TEXT, true, 10);
	xls.SetCellText(9, nRow, _T("1// PHẠM THỊ HẰNG"), FMT_TEXT, true, 10);

	EndWaitCursor();
	xls.Save(_T("Exports\\Tong hop quan so an luc 10h.xls"));
} 

CString CNTTTotalFoodAt10::GetQueryStringTotal(){
	CString szSQL, szWhere, szSubWhere, tmpStr, szTemp, szRoomID, szObjects;

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS') AND hfo_depttype <> 'KB'"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));

	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid2 = '%s'"), m_szDepartmentKey);
	}

	if(m_nAll == 0)
		szWhere.AppendFormat(_T("AND hfol_type <> 'S'"));
	else if(m_nAll == 2)
		szWhere.AppendFormat(_T("AND hfol_type = 'T'"));
	else if(m_nAll == 3)
		szWhere.AppendFormat(_T("AND hfol_type = 'C'"));

	if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));

	CString szheaderstr, szphanloai, szgroupbystr, szorderbystr;
	if (m_bHauCan)
	{
		szheaderstr = _T("sd_index");
		szgroupbystr = _T("sd_index");
		szorderbystr = _T("sd_index");
		szphanloai = _T("AND 1=1");
	}
	else
	{
		szheaderstr = _T("sd_index2");
		szgroupbystr = _T("sd_index2");
		szorderbystr = _T("sd_index2");
		szphanloai = _T("AND SD_USE_NORMAL='Y'");
	}

	szSQL.Format(_T(" SELECT %s,") \
		_T("   sd_id, sd_id_alias,") \
		_T("   deptid2,") \
		_T("   NVL(SUM(comTT), 0)    AS comTT,") \
		_T("   NVL(SUM(comA1A16), 0) AS comA1A16,") \
		_T("   NVL(SUM(com), 0)      AS com,") \
		_T("   NVL(SUM(chao), 0)     AS chao,") \
		_T("   NVL(SUM(OT), 0)       AS OT,") \
		_T("   NVL(SUM(sua), 0)      AS sua,") \
		_T("   NVL(SUM(foodqty), 0)  AS foodqty") \
		_T(" FROM sys_dept") \
		_T(" LEFT JOIN") \
		_T("   (SELECT deptid               AS deptid2,") \
		_T("     SUM(comTT    - comTTCT)    AS comTT,") \
		_T("     SUM(comA1A16 - comA1A16CT) AS comA1A16,") \
		_T("     SUM(com      - comCT)      AS com,") \
		_T("     SUM(chao     - chaoCT)     AS chao,") \
		_T("     SUM(OT       - OTCT)       AS OT,") \
		_T("     SUM(sua      - suaCT)      AS sua,") \
		_T("     SUM(foodqty  - foodqtyC)   AS foodqty") \
		_T("   FROM") \
		_T("     (SELECT deptid,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND deptid NOT IN('A1','A1-A','A1-C', 'A12', 'A16')") \
		_T("         AND UPPER(hfl_name2) IN('BT01', 'PK4')") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comTT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND deptid NOT   IN('A1','A1-A','A1-C', 'A12', 'A16')") \
		_T("         AND UPPER(hfl_name2) IN('BT01', 'PK4')") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comTTCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND deptid     IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comA1A16,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND deptid       IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comA1A16CT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND deptid NOT IN('A1','A1-A','A1-C', 'A12', 'A16') AND UPPER(hfl_name2) NOT IN('BT01', 'PK4')") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS com,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND deptid NOT IN('A1','A1-A','A1-C', 'A12', 'A16') AND UPPER(hfl_name2) NOT IN('BT01', 'PK4')") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 201") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS chao,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 201") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS chaoCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 202") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS OT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 202") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS OTCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 203") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS sua,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 203") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS suaCT,") \
		_T("       foodqty,") \
		_T("       foodqtyC") \
		_T("     FROM") \
		_T("       (SELECT") \
		_T("         CASE") \
		_T("           WHEN hfo_depttype = 'DT'") \
		_T("           THEN hfo_deptid") \
		_T("           ELSE hcr_admitdept") \
		_T("         END           AS deptid,") \
		_T("         hfol_qtyorder AS foodqty,") \
		_T("         CASE") \
		_T("           WHEN hfe_refstatus = 'C'") \
		_T("           THEN hfol_qtyorder") \
		_T("           ELSE 0") \
		_T("         END AS foodqtyC,") \
		_T("         hfl_name2,") \
		_T("         hfl_name,") \
		_T("         hfl_feeid,") \
		_T("         hfol_qtyorder,") \
		_T("         hfe_refstatus,") \
		_T("         hfl_index1,") \
		_T("         hfol_type") \
		_T("       FROM hms_feefood") \
		_T("       LEFT JOIN hms_feefoodline") \
		_T("       ON(hfo_orderid=hfol_orderid)") \
		_T("       LEFT JOIN hms_clinical_record") \
		_T("       ON(hcr_docno=hfo_docno)") \
		_T("       LEFT JOIN hms_doc") \
		_T("       ON(hd_docno=hfo_docno)") \
		_T("       LEFT JOIN hms_fee_list") \
		_T("       ON(hfl_feeid        =hfol_itemid)") \
		_T("       WHERE hfo_ordertype = 'D'") \
		_T("       AND hfo_orderstatus = 'A'") \
		_T("       %s") \
		_T("       ) tbl") \
		_T("     ) tb2") \
		_T("   GROUP BY deptid") \
		_T("   ) ON (deptid2 = sd_id)") \
		_T(" WHERE sd_type  IN ('DT')") \
		_T(" AND sd_id NOT  IN ('A14', 'A22', 'B5', 'B10', 'B15', 'CYBERL', 'C6', 'C18', 'C15', 'KD1', 'B3')") \
		_T(" AND sd_index   IS NOT NULL %s") \
		_T(" %s") \
		_T(" GROUP BY %s,") \
		_T("   sd_id, sd_id_alias,") \
		_T("   deptid2") \
		_T(" ORDER BY %s"), szheaderstr, szWhere, szSubWhere, szphanloai, szgroupbystr, szorderbystr);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}

int CNTTTotalFoodAt10::OnAddNTTTotalFoodAt10(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CNTTTotalFoodAt10::OnEditNTTTotalFoodAt10(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CNTTTotalFoodAt10::OnDeleteNTTTotalFoodAt10(){
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
 		OnCancelNTTTotalFoodAt10();
 	}
	return 0;
}
int CNTTTotalFoodAt10::OnSaveNTTTotalFoodAt10(){
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
 		//OnNTTTotalFoodAt10ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CNTTTotalFoodAt10::OnCancelNTTTotalFoodAt10(){
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
int CNTTTotalFoodAt10::OnNTTTotalFoodAt10ListLoadData(){
	return 0;
}
