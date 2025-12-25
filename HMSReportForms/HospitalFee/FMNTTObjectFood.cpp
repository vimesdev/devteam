#include "stdafx.h"
#include "FMNTTObjectFood.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "StringToken.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CFMNTTObjectFood *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CFMNTTObjectFood *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CFMNTTObjectFood *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CFMNTTObjectFood *)pWnd)->OnDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMNTTObjectFood* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd)
{
	((CFMNTTObjectFood *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFMNTTObjectFood *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFMNTTObjectFood *)pWnd)->OnDepartmentKillfocus();
}*/
static double _OnDepartmentLoadDataFnc(CWnd *pWnd)
{
	return ((CFMNTTObjectFood *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFMNTTObjectFood *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd)
{
	  ((CFMNTTObjectFood*)pWnd)->OnAllSelect();
}
static void _OnBreakfastSelectFnc(CWnd *pWnd){
	  ((CFMNTTObjectFood*)pWnd)->OnBreakfastSelect();
}
static void _OnLunchSelectFnc(CWnd *pWnd){
	  ((CFMNTTObjectFood*)pWnd)->OnLunchSelect();
}
static void _OnDinnerSelectFnc(CWnd *pWnd){
	  ((CFMNTTObjectFood*)pWnd)->OnDinnerSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMNTTObjectFood *pVw = (CFMNTTObjectFood *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddNTTObjectFoodFnc(CWnd *pWnd){
	 return ((CFMNTTObjectFood*)pWnd)->OnAddNTTObjectFood();
} 
static int _OnEditNTTObjectFoodFnc(CWnd *pWnd){
	 return ((CFMNTTObjectFood*)pWnd)->OnEditNTTObjectFood();
} 
static int _OnDeleteNTTObjectFoodFnc(CWnd *pWnd){
	 return ((CFMNTTObjectFood*)pWnd)->OnDeleteNTTObjectFood();
} 
static int _OnSaveNTTObjectFoodFnc(CWnd *pWnd){
	 return ((CFMNTTObjectFood*)pWnd)->OnSaveNTTObjectFood();
} 
static int _OnCancelNTTObjectFoodFnc(CWnd *pWnd){
	 return ((CFMNTTObjectFood*)pWnd)->OnCancelNTTObjectFood();
}
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
	return ((CFMNTTObjectFood *)pWnd)->OnFromDateCheckValue();
}
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMNTTObjectFood *)pWnd)->OnToDateCheckValue();
} 

CFMNTTObjectFood::CFMNTTObjectFood(CWnd *pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMNTTObjectFood::~CFMNTTObjectFood()
{
}
void CFMNTTObjectFood::OnCreateComponents()
{
	/*m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 465, 90);
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
	m_wndExport.Create(this, _T("&ExportXLS"), 360, 95, 460, 120);
	m_wndHauCan.Create(this, _T("Báo ăn hậu cần"), 10, 125, 200, 150);*/

	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 485, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 115, 55);
	m_wndFromDate.Create(this,121, 30, 244, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 248, 30, 353, 55);
	m_wndToDate.Create(this,358, 30, 481, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 115, 85);
	m_wndDepartment.Create(this,120, 60, 481, 85); 
	m_wndAll.Create(this, _T("All"), 10, 95, 75, 120);
	m_wndBreakfast.Create(this, _T("Breakfast"), 80, 95, 175, 120);
	m_wndLunch.Create(this, _T("Lunch"), 180, 95, 270, 120);
	m_wndDinner.Create(this, _T("Dinner"), 276, 95, 373, 120);
	m_wndExport.Create(this, _T("&ExportXLS"), 379, 95, 479, 120);
	m_wndHauCan.Create(this, _T("Báo ăn hậu cần"), 10, 125, 200, 150);
}
void CFMNTTObjectFood::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
}
void CFMNTTObjectFood::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddNTTObjectFoodFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditNTTObjectFoodFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteNTTObjectFoodFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveNTTObjectFoodFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelNTTObjectFoodFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

	
	m_szFromDate = pMF->GetSysDate();
	m_szToDate = pMF->GetSysDate();
	UpdateData(false);

}
void CFMNTTObjectFood::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndBreakfast.GetDlgCtrlID(), m_nBreakfast);
	DDX_Radio(pDX, m_wndLunch.GetDlgCtrlID(), m_nLunch);
	DDX_Radio(pDX, m_wndDinner.GetDlgCtrlID(), m_nDinner);
	DDX_Check(pDX, m_wndHauCan.GetDlgCtrlID(), m_bHauCan);

}
void CFMNTTObjectFood::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMNTTObjectFood::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMNTTObjectFood::SetDefaultValues(){

	
	m_szDepartmentKey.Empty();
	m_nAll=0;
	m_nBreakfast=1;
	m_nLunch=1;
	m_nDinner=1;

}
int CFMNTTObjectFood::SetMode(int nMode){
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
/*void CFMNTTObjectFood::OnDateChange(){
	
} */
/*void CFMNTTObjectFood::OnDateSetfocus(){
	
} */
/*void CFMNTTObjectFood::OnDateKillfocus(){
	
} */
int CFMNTTObjectFood::OnDateCheckValue(){
	return 0;
} 
void CFMNTTObjectFood::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CFMNTTObjectFood::OnFromDateCheckValue()
{
	return 0;
}
int CFMNTTObjectFood::OnToDateCheckValue()
{
	return 0;
} 

void CFMNTTObjectFood::OnDepartmentSelendok(){
	 
}
/*void CFMNTTObjectFood::OnDepartmentSetfocus(){
	
}*/
/*void CFMNTTObjectFood::OnDepartmentKillfocus(){
	
}*/
long CFMNTTObjectFood::OnDepartmentLoadData(){
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
/*void CFMNTTObjectFood::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMNTTObjectFood::OnAllSelect(){
	
}
void CFMNTTObjectFood::OnBreakfastSelect(){
	
}
void CFMNTTObjectFood::OnLunchSelect(){
	
}
void CFMNTTObjectFood::OnDinnerSelect(){
	
}
void CFMNTTObjectFood::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szNewObject, szOldObject;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	int nIdx = 1;
	double nTotalQty = 0, nTotalAmount = 0, nObjectQty = 0, nObjectAmount = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 16);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 20);
	xls.SetColumnWidth(6, 12);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(0, 2, _T("PHÂN TÍCH ĐỐI TƯỢNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	

	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("ĐƠN VỊ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("ĐVT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("SỐ LƯỢNG "), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("MỨC ĂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("THÀNH TIỀN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 4, _T("GHI CHÚ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 6);
	xls.SetMerge(3, 3, 0, 6);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){

		rs.GetValue(_T("pobject"), szNewObject);
		if(szNewObject != szOldObject && !szNewObject.IsEmpty())
			{
				if(nObjectQty > 0)
					{
						xls.SetCellText(nCol+1, nRow, _T("Tổng nhóm:"), FMT_TEXT, true, 11);
						xls.SetCellText(nCol+3, nRow, double2str(nObjectQty), FMT_NUMBER1, true, 11);
						xls.SetCellText(nCol+5, nRow, double2str(nObjectAmount), FMT_NUMBER1, true, 11);
						nTotalQty += nObjectQty;
						nTotalAmount += nObjectAmount;
						nObjectQty = 0;
						nObjectAmount = 0;
						nRow++;
					}

					if(szNewObject == _T("1"))
						tmpStr = _T("Quân");
					else if(szNewObject == _T("2"))
						tmpStr = _T("Bảo hiểm");
					else if(szNewObject == _T("3"))
						tmpStr = _T("Dịch vụ");
					else if(szNewObject == _T("4"))
						tmpStr = _T("Chính sách");
					else if(szNewObject == _T("5"))
						tmpStr = _T("Bạn");

					xls.SetCellMergedColumns(nCol, nRow, 7);
					xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true, 11);
					szOldObject = szNewObject;
					nIdx = 1;
					nRow++;
			}

		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("ptype"), tmpStr);
		if(tmpStr == _T("1"))
			szTemp.Format(_T("Ăn sáng"));
		if(tmpStr == _T("2"))
			szTemp.Format(_T("Ăn trưa"));
		if(tmpStr == _T("3"))
			szTemp.Format(_T("Ăn chiều"));
		xls.SetCellText(nCol+1, nRow, szTemp, FMT_TEXT);
		rs.GetValue(_T("pxuat"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("foodqty"), tmpStr);
		nObjectQty += str2double(tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("unitprice"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("amount"), tmpStr);
		nObjectAmount += str2double(tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	if(nObjectQty > 0)
	{
		xls.SetCellText(nCol+1, nRow, _T("Tổng nhóm:"), FMT_TEXT, true, 11);
		xls.SetCellText(nCol+3, nRow, double2str(nObjectQty), FMT_NUMBER1, true, 11);
		xls.SetCellText(nCol+5, nRow, double2str(nObjectAmount), FMT_NUMBER1, true, 11);
		nTotalQty += nObjectQty;
		nTotalAmount += nObjectAmount;
		nRow++;
	}

	xls.SetCellMergedColumns(nCol, nRow, 7);
	xls.SetCellText(nCol, nRow, _T("Cán bộ cao cấp"), FMT_TEXT, true, 11);
	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("BH trả"), FMT_TEXT);
	xls.SetCellText(nCol+2, nRow, _T("Xuất"), FMT_TEXT);
	xls.SetCellText(nCol+4, nRow, _T("150000"), FMT_NUMBER1);
	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("BH trả"), FMT_TEXT);
	xls.SetCellText(nCol+2, nRow, _T("Xuất"), FMT_TEXT);
	xls.SetCellText(nCol+4, nRow, _T("50000"), FMT_NUMBER1);
	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("CBCC"), FMT_TEXT);
	xls.SetCellText(nCol+2, nRow, _T("Xuất"), FMT_TEXT);
	xls.SetCellText(nCol+4, nRow, _T("200000"), FMT_NUMBER1);
	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("CBCC"), FMT_TEXT);
	xls.SetCellText(nCol+2, nRow, _T("Xuất"), FMT_TEXT);
	xls.SetCellText(nCol+4, nRow, _T("150000"), FMT_NUMBER1);
	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("CBCC"), FMT_TEXT);
	xls.SetCellText(nCol+2, nRow, _T("Xuất"), FMT_TEXT);
	xls.SetCellText(nCol+4, nRow, _T("250000"), FMT_NUMBER1);
	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("Tổng nhóm:"), FMT_TEXT, true, 11);
	nRow++;

	if(nTotalQty > 0)
	{
		xls.SetCellText(nCol+1, nRow, _T("Tổng cộng:"), FMT_TEXT, true, 11);
		xls.SetCellText(nCol+3, nRow, double2str(nTotalQty), FMT_NUMBER1, true, 11);
		xls.SetCellText(nCol+5, nRow, double2str(nTotalAmount), FMT_NUMBER1, true, 11);
	}

	nRow++;
	nRow++;
	nRow++;

	xls.SetCellText(nCol, nRow, _T("QUẢN LÝ BẾP"), FMT_TEXT, true, 11);
	xls.SetCellText(nCol+2, nRow, _T("NGƯỜI TỔNG HỢP"), FMT_TEXT, true, 11);
	xls.SetCellText(nCol+5, nRow, _T("CHỦ NHIỆM KHOA"), FMT_TEXT, true, 11);

	EndWaitCursor();
	xls.Save(_T("Exports\\PhanTichDoiTuong.xls"));
} 

CString CFMNTTObjectFood::GetQueryString()
{
	CString szSQL, szWhere;

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfo_deptid = '%s'"), m_szDepartmentKey);
	}

	if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));
		//szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));
		//szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));

	szSQL.Format(_T(" SELECT") \
		_T(" pobject,") \
		_T(" ptype,") \
		_T(" 'Suất' AS pxuat,") \
		_T(" SUM(foodqty - foodqtyC) AS foodqty,") \
		_T(" unitprice,") \
		_T(" SUM((foodqty - foodqtyC)*unitprice) AS amount") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" CASE when hfol_itemid in ('FF00030372','FF00030373','FF00030374', 'FF00031545', 'FF00031546', 'FF00031547') then 100 ") \
		_T(" WHEN hd_object IN(1, 11, 13) THEN 1 ") \
		_T(" WHEN hd_object IN(2, 4, 5, 9, 10, 12) THEN 2 ") \
		_T(" WHEN hd_object = 7 THEN 3") \
		_T(" WHEN hd_object = 3 THEN 4") \
		_T(" WHEN hd_object = 8 THEN 5") \
		_T(" END AS pobject,") \
		_T(" CASE WHEN hfol_type = 'S' THEN 1") \
		_T(" WHEN hfol_type = 'T' THEN 2") \
		_T(" WHEN hfol_type = 'C' THEN 3 ") \
		_T(" END AS ptype,") \
		_T(" hfol_qtyorder AS foodqty,") \
		_T(" CASE WHEN hfe_refstatus = 'C' THEN hfol_qtyorder ELSE 0 END AS foodqtyC,") \
		_T(" hfol_unitprice AS unitprice") \
		_T(" FROM hms_feefood") \
		_T(" LEFT JOIN hms_feefoodline") \
		_T(" ON( hfo_orderid = hfol_orderid)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON( hd_docno = hfo_docno)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid = hfol_itemid)") \
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T(" WHERE hfo_ordertype = 'D'") \
		_T(" AND hfo_orderstatus = 'A'") \
		_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND hfo_deptid NOT IN ('PTTYC') %s") \
		_T(" )") \
		_T(" GROUP BY") \
		_T(" pobject,") \
		_T(" ptype,") \
		_T(" unitprice") \
		_T(" ORDER BY") \
		_T(" pobject,") \
		_T(" ptype,") \
		_T(" unitprice"), m_szFromDate, m_szToDate, szWhere);
	_msg(_T("%s"), szSQL);
	return szSQL;
}

int CFMNTTObjectFood::OnAddNTTObjectFood(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMNTTObjectFood::OnEditNTTObjectFood(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMNTTObjectFood::OnDeleteNTTObjectFood(){
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
 		OnCancelNTTObjectFood();
 	}
	return 0;
}
int CFMNTTObjectFood::OnSaveNTTObjectFood(){
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
 		//OnNTTObjectFoodListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMNTTObjectFood::OnCancelNTTObjectFood(){
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
int CFMNTTObjectFood::OnNTTObjectFoodListLoadData(){
	return 0;
}
