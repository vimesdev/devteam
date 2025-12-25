#include "stdafx.h"
#include "NTTTotalMilk.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "StringToken.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CNTTTotalMilk *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CNTTTotalMilk *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CNTTTotalMilk *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CNTTTotalMilk *)pWnd)->OnDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CNTTTotalMilk* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CNTTTotalMilk *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CNTTTotalMilk *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CNTTTotalMilk *)pWnd)->OnDepartmentKillfocus();
}*/
static double _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CNTTTotalMilk *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CNTTTotalMilk *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CNTTTotalMilk*)pWnd)->OnAllSelect();
}
static void _OnBreakfastSelectFnc(CWnd *pWnd){
	  ((CNTTTotalMilk*)pWnd)->OnBreakfastSelect();
}
static void _OnLunchSelectFnc(CWnd *pWnd){
	  ((CNTTTotalMilk*)pWnd)->OnLunchSelect();
}
static void _OnDinnerSelectFnc(CWnd *pWnd){
	  ((CNTTTotalMilk*)pWnd)->OnDinnerSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CNTTTotalMilk *pVw = (CNTTTotalMilk *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddNTTTotalMilkFnc(CWnd *pWnd){
	 return ((CNTTTotalMilk*)pWnd)->OnAddNTTTotalMilk();
} 
static int _OnEditNTTTotalMilkFnc(CWnd *pWnd){
	 return ((CNTTTotalMilk*)pWnd)->OnEditNTTTotalMilk();
} 
static int _OnDeleteNTTTotalMilkFnc(CWnd *pWnd){
	 return ((CNTTTotalMilk*)pWnd)->OnDeleteNTTTotalMilk();
} 
static int _OnSaveNTTTotalMilkFnc(CWnd *pWnd){
	 return ((CNTTTotalMilk*)pWnd)->OnSaveNTTTotalMilk();
} 
static int _OnCancelNTTTotalMilkFnc(CWnd *pWnd){
	 return ((CNTTTotalMilk*)pWnd)->OnCancelNTTTotalMilk();
} 
CNTTTotalMilk::CNTTTotalMilk(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CNTTTotalMilk::~CNTTTotalMilk(){
}
void CNTTTotalMilk::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 465, 90);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 115, 55);
	m_wndDate.Create(this,120, 30, 460, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 115, 85);
	m_wndDepartment.Create(this,120, 60, 460, 85); 
	m_wndAll.Create(this, _T("All"), 10, 95, 75, 120);
	m_wndBreakfast.Create(this, _T("Breakfast"), 80, 95, 175, 120);
	m_wndBreakfast.EnableWindow(FALSE);
	m_wndLunch.Create(this, _T("Lunch"), 180, 95, 270, 120);
	m_wndLunch.EnableWindow(FALSE);
	m_wndDinner.Create(this, _T("Dinner"), 275, 95, 355, 120);
	m_wndDinner.EnableWindow(FALSE);
	m_wndExport.Create(this, _T("&Export"), 360, 95, 460, 120);
	m_wndHauCan.Create(this, _T("Báo ăn hậu cần"), 10, 125, 200, 150);

}
void CNTTTotalMilk::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CNTTTotalMilk::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddNTTTotalMilkFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditNTTTotalMilkFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteNTTTotalMilkFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveNTTTotalMilkFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelNTTTotalMilkFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

	m_szDate = pMF->GetSysDate();
	UpdateData(false);

}
void CNTTTotalMilk::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndBreakfast.GetDlgCtrlID(), m_nBreakfast);
	DDX_Radio(pDX, m_wndLunch.GetDlgCtrlID(), m_nLunch);
	DDX_Radio(pDX, m_wndDinner.GetDlgCtrlID(), m_nDinner);
	DDX_Check(pDX, m_wndHauCan.GetDlgCtrlID(), m_bHauCan);

}
void CNTTTotalMilk::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CNTTTotalMilk::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CNTTTotalMilk::SetDefaultValues(){

	m_szDate.Empty();
	m_szDepartmentKey.Empty();
	m_nAll=0;
	m_nBreakfast=1;
	m_nLunch=1;
	m_nDinner=1;

}
int CNTTTotalMilk::SetMode(int nMode){
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
/*void CNTTTotalMilk::OnDateChange(){
	
} */
/*void CNTTTotalMilk::OnDateSetfocus(){
	
} */
/*void CNTTTotalMilk::OnDateKillfocus(){
	
} */
int CNTTTotalMilk::OnDateCheckValue(){
	return 0;
} 
void CNTTTotalMilk::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CNTTTotalMilk::OnDepartmentSelendok(){
	 
}
/*void CNTTTotalMilk::OnDepartmentSetfocus(){
	
}*/
/*void CNTTTotalMilk::OnDepartmentKillfocus(){
	
}*/
long CNTTTotalMilk::OnDepartmentLoadData(){
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
/*void CNTTTotalMilk::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CNTTTotalMilk::OnAllSelect(){
	
}
void CNTTTotalMilk::OnBreakfastSelect(){
	
}
void CNTTTotalMilk::OnLunchSelect(){
	
}
void CNTTTotalMilk::OnDinnerSelect(){
	
}
void CNTTTotalMilk::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	OnInitDataStringSua();
	CRecord rs(&pMF->m_db), crs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, tmpStr2, szOldVendor, szNewVendor, szTemp;
	CStringToken token5(m_szProductIDStr5);
	double nTmp = 0;
	int nIdx = 1, nCol = 0, nRow = 0, i = 0, nOldCol = 0;

	double nTotal[200];
	for(int y = 0; y < 200; y++)
	{
		nTotal[y] = 0;
	}
	szSQL = GetQueryString();
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
	tmpStr = _T("TỔNG HỢP QUÂN SỐ ĂN SỮA");
	xls.SetCellText(0, 2, tmpStr, 4098, true);

	tmpStr.Format(_T("Ngày %s tháng %s năm %s"), m_szDate.Right(2) ,m_szDate.Mid(5,2), m_szDate.Left(4));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	nRow = 4;
	//Fixed col

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(1, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	//Dynamic Col Material
	nCol = 2;

	szSQL = GetQueryStringSua();
	crs.ExecSQL(szSQL);
	i = 0;
	while (!crs.IsEOF())
	{
		xls.SetCellText(nCol++, nRow, crs.GetValue(_T("foodname2")), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		i++;
		crs.MoveNext();
	}

	xls.SetCellText(nCol, nRow, _T("Tổng trưa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellText(nCol, nRow, _T("Tổng chiều"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellText(nCol, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellText(nCol, nRow, _T("Ký nhận"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	nCol = 0;
	nRow = 5;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(1, nRow, rs.GetValue(_T("sd_id_alias")), FMT_TEXT);
		nCol = 2;
		for (i = 0; i < token5.GetSize(); i++)
		{
			token5.GetAt(i, szTemp);
			tmpStr.Format(_T("FFID5_%s"), szTemp);
			rs.GetValue(tmpStr, nTmp);
			nTotal[i] += nTmp;
			xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		}
		i++;
		rs.GetValue(_T("foodqtyT"), nTmp);
		nTotal[i] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		i++;
		rs.GetValue(_T("foodqtyC"), nTmp);
		nTotal[i] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		i++;
		rs.GetValue(_T("foodqty"), nTmp);
		nTotal[i] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellText(1, nRow, _T("Tổng:"), FMT_TEXT, true);
	nCol=2;
	for (i = 0; i < token5.GetSize(); i++)
	{
		xls.SetCellText(nCol++, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	}
	i++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	i++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	i++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);

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
	xls.Save(_T("Exports\\Tong hop quan so an sua.xls"));
} 

CString CNTTTotalMilk::GetQueryString(){
	CString szSQL, szWhere, szSubWhere, szField, szField1, szField2, szSumField1, szSumField2, szSumField3, szSumField4, szSumField5,
		tmpStr, tmpStr2, szTemp, szRoomID, szObjects;

	CStringToken token5(m_szProductIDStr5);
	for (int i = 0; i < token5.GetSize(); i++)
	{
		token5.GetAt(i, szTemp);
		tmpStr.Format(_T("FFID5_%s"), szTemp);
		tmpStr2.Format(_T("FFID5_%sC"), szTemp);
		szSumField2.AppendFormat(_T("SUM(%s - %s) AS %s,"),tmpStr, tmpStr2, tmpStr);
		szSumField3.AppendFormat(_T("0,0,"));
		szSumField5.AppendFormat(_T("NVL(SUM(%s), 0) AS %s,"),tmpStr, tmpStr);
		szField2.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND hfl_index1 IN('203') THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr);
		szField2.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND hfe_refstatus = 'C' AND hfl_index1 IN('203') THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr2);
	}

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS') AND hfo_depttype <> 'KB' AND hfol_type <> 'S'"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));


	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid = '%s'"), m_szDepartmentKey);
	}

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
		//GIANGDH updated sd_id_alias 07/12/2023
		_T("   sd_id, sd_id_alias,") \
		_T("   deptid,") \
		_T("   %s ") \
		_T("   NVL(SUM(foodqtyT), 0) AS foodqtyT,") \
		_T("   NVL(SUM(foodqtyC), 0) AS foodqtyC,") \
		_T("   NVL(SUM(foodqty), 0) AS foodqty") \
		_T(" FROM sys_dept") \
		_T(" LEFT JOIN") \
		_T("   (SELECT deptid,") \
		_T("     %s ") \
		_T("     SUM(foodqtyT - foodqtyTC) AS foodqtyT,") \
		_T("     SUM(foodqtyC - foodqtyCC) AS foodqtyC,") \
		_T("     SUM(foodqtyTT - foodqtyTTC) AS foodqty") \
		_T("   FROM") \
		_T("     (SELECT deptid,") \
		_T("       %s") \
		_T("       CASE WHEN hfl_index1 IN('203') AND hfol_type = 'T' THEN foodqty ELSE 0 END AS foodqtyT,") \
		_T("       CASE WHEN hfe_refstatus = 'C' AND hfl_index1 IN('203') AND hfol_type = 'T' THEN foodqtyC ELSE 0 END AS foodqtyTC,") \
		_T("       CASE WHEN hfl_index1 IN('203') AND hfol_type = 'C' THEN foodqty ELSE 0 END AS foodqtyC,") \
		_T("       CASE WHEN hfe_refstatus = 'C' AND hfl_index1 IN('203') AND hfol_type = 'C' THEN foodqtyC ELSE 0 END AS foodqtyCC,") \
		_T("       CASE WHEN hfl_index1 IN('203') THEN foodqty ELSE 0 END AS foodqtyTT,") \
		_T("       CASE WHEN hfe_refstatus = 'C' AND hfl_index1 IN('203') THEN foodqtyC ELSE 0 END AS foodqtyTTC") \
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
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("       WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("       AND hfo_orderstatus = 'A' %s ") \
		_T("       ) tbl") \
		_T("     ) tbl3") \
		_T("   GROUP BY deptid") \
		_T("   ) ON(deptid = sd_id)") \
		_T(" WHERE sd_type IN ('DT') AND sd_id NOT IN ('A14', 'A22', 'B5', 'B10', 'B15', 'CYBERL', 'C6', 'C18', 'C15', 'KD1', 'B3')") \
		_T(" AND sd_index IS NOT NULL %s ") \
		//Add this//
		_T(" %s") \
		//Add this//
		_T(" GROUP BY %s,") \
		_T("   sd_id, sd_id_alias,") \
		_T("   deptid") \
		_T(" ORDER BY %s"), szheaderstr, szSumField5, szSumField2, szField2, szWhere, szSubWhere, szphanloai, szgroupbystr, szorderbystr);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}

CString CNTTTotalMilk::GetQueryStringSua(){
	CString szSQL, szWhere, szSubWhere, szRoomID;

	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid = '%s'"), m_szDepartmentKey);
	}

	if(m_nBreakfast == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'S'"));
	if(m_nLunch == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'T'"));
	if(m_nDinner == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'C'"));

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS')"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));

	if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" foodid,") \
		_T(" foodname2,") \
		_T(" foodname") \
		_T(" FROM") \
		_T(" (SELECT") \
		_T(" CASE") \
		_T(" WHEN hfo_depttype = 'DT'") \
		_T(" THEN hfo_deptid") \
		_T(" ELSE hcr_admitdept") \
		_T(" END AS deptid,") \
		_T(" hfl_feeid AS foodid,") \
		_T(" hfl_name2 AS foodname2,") \
		_T(" hfl_name AS foodname") \
		_T(" FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid = hfol_orderid)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid = hfol_itemid)") \
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("   WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("   AND hfo_orderstatus = 'A' AND hfl_index1 IN('203') AND hfo_depttype <> 'KB' AND hfol_type <> 'S' %s") \
		_T("   ) tbl") \
		_T("   WHERE 1 = 1 %s"), szWhere, szSubWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
void CNTTTotalMilk::OnInitDataStringSua(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryStringSua();
	rs.ExecSQL(szSQL);
	m_szProductIDStr5.Empty();
	m_szProductNameStr5.Empty();
	while (!rs.IsEOF())
	{
		if (!m_szProductIDStr5.IsEmpty())
			m_szProductIDStr5 += _T(",");
		m_szProductIDStr5 += rs.GetValue(_T("foodid"));
		if (!m_szProductNameStr5.IsEmpty())
			m_szProductNameStr5 += _T(",");
		m_szProductNameStr5 += rs.GetValue(_T("foodname2"));
		rs.MoveNext();
	}
}
int CNTTTotalMilk::OnAddNTTTotalMilk(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CNTTTotalMilk::OnEditNTTTotalMilk(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CNTTTotalMilk::OnDeleteNTTTotalMilk(){
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
 		OnCancelNTTTotalMilk();
 	}
	return 0;
}
int CNTTTotalMilk::OnSaveNTTTotalMilk(){
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
 		//OnNTTTotalMilkListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CNTTTotalMilk::OnCancelNTTTotalMilk(){
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
int CNTTTotalMilk::OnNTTTotalMilkListLoadData(){
	return 0;
}
