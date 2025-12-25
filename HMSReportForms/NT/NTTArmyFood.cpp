#include "stdafx.h"
#include "NTTArmyFood.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "StringToken.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CNTTArmyFood *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CNTTArmyFood *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CNTTArmyFood *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CNTTArmyFood *)pWnd)->OnDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CNTTArmyFood* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CNTTArmyFood *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CNTTArmyFood *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CNTTArmyFood *)pWnd)->OnDepartmentKillfocus();
}*/
static double _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CNTTArmyFood *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CNTTArmyFood *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CNTTArmyFood*)pWnd)->OnAllSelect();
}
static void _OnBreakfastSelectFnc(CWnd *pWnd){
	  ((CNTTArmyFood*)pWnd)->OnBreakfastSelect();
}
static void _OnLunchSelectFnc(CWnd *pWnd){
	  ((CNTTArmyFood*)pWnd)->OnLunchSelect();
}
static void _OnDinnerSelectFnc(CWnd *pWnd){
	  ((CNTTArmyFood*)pWnd)->OnDinnerSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CNTTArmyFood *pVw = (CNTTArmyFood *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddNTTArmyFoodFnc(CWnd *pWnd){
	 return ((CNTTArmyFood*)pWnd)->OnAddNTTArmyFood();
} 
static int _OnEditNTTArmyFoodFnc(CWnd *pWnd){
	 return ((CNTTArmyFood*)pWnd)->OnEditNTTArmyFood();
} 
static int _OnDeleteNTTArmyFoodFnc(CWnd *pWnd){
	 return ((CNTTArmyFood*)pWnd)->OnDeleteNTTArmyFood();
} 
static int _OnSaveNTTArmyFoodFnc(CWnd *pWnd){
	 return ((CNTTArmyFood*)pWnd)->OnSaveNTTArmyFood();
} 
static int _OnCancelNTTArmyFoodFnc(CWnd *pWnd){
	 return ((CNTTArmyFood*)pWnd)->OnCancelNTTArmyFood();
} 
CNTTArmyFood::CNTTArmyFood(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CNTTArmyFood::~CNTTArmyFood(){
}
void CNTTArmyFood::OnCreateComponents(){
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
	m_wndExport.Create(this, _T("&ExportXLS"), 360, 95, 460, 120);
	m_wndHauCan.Create(this, _T("Báo ăn hậu cần"), 10, 125, 200, 150);

}
void CNTTArmyFood::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CNTTArmyFood::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddNTTArmyFoodFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditNTTArmyFoodFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteNTTArmyFoodFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveNTTArmyFoodFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelNTTArmyFoodFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

	m_szDate = pMF->GetSysDate();
	UpdateData(false);

}
void CNTTArmyFood::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndBreakfast.GetDlgCtrlID(), m_nBreakfast);
	DDX_Radio(pDX, m_wndLunch.GetDlgCtrlID(), m_nLunch);
	DDX_Radio(pDX, m_wndDinner.GetDlgCtrlID(), m_nDinner);
	DDX_Check(pDX, m_wndHauCan.GetDlgCtrlID(), m_bHauCan);

}
void CNTTArmyFood::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CNTTArmyFood::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CNTTArmyFood::SetDefaultValues(){

	m_szDate.Empty();
	m_szDepartmentKey.Empty();
	m_nAll=0;
	m_nBreakfast=1;
	m_nLunch=1;
	m_nDinner=1;

}
int CNTTArmyFood::SetMode(int nMode){
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
/*void CNTTArmyFood::OnDateChange(){
	
} */
/*void CNTTArmyFood::OnDateSetfocus(){
	
} */
/*void CNTTArmyFood::OnDateKillfocus(){
	
} */
int CNTTArmyFood::OnDateCheckValue(){
	return 0;
} 
void CNTTArmyFood::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CNTTArmyFood::OnDepartmentSelendok(){
	 
}
/*void CNTTArmyFood::OnDepartmentSetfocus(){
	
}*/
/*void CNTTArmyFood::OnDepartmentKillfocus(){
	
}*/
long CNTTArmyFood::OnDepartmentLoadData(){
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
/*void CNTTArmyFood::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CNTTArmyFood::OnAllSelect(){
	
}
void CNTTArmyFood::OnBreakfastSelect(){
	
}
void CNTTArmyFood::OnLunchSelect(){
	
}
void CNTTArmyFood::OnDinnerSelect(){
	
}
void CNTTArmyFood::OnExportSelect(){
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

	xls.SetCellText(0, 2, _T("QUÂN SỐ ĂN TRONG NGÀY"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);

	tmpStr.Format(_T("Ngày %s tháng %s năm %s"), m_szDate.Right(2) ,m_szDate.Mid(5,2), m_szDate.Left(4));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

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
	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){

		rs.GetValue(_T("foodgroup"), szNewObject);
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
						tmpStr = _T("Phụ Lào");
					else if(szNewObject == _T("2"))
						tmpStr = _T("CBAS");
					else if(szNewObject == _T("3"))
						tmpStr = _T("Ăn sữa");
					else if(szNewObject == _T("4"))
						tmpStr = _T("Ăn trưa");
					else if(szNewObject == _T("5"))
						tmpStr = _T("Ăn chiều");
					else if(szNewObject == _T("6"))
						tmpStr = _T("Ăn cháo");
					else if(szNewObject == _T("7"))
						tmpStr = _T("OT");
					else
						tmpStr = _T("Khác");

					xls.SetCellMergedColumns(nCol, nRow, 7);
					xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true, 11);
					szOldObject = szNewObject;
					nIdx = 1;
					nRow++;
			}

		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("foodtype"), tmpStr);
		if(tmpStr == _T("4") || tmpStr == _T("7"))
			szTemp.Format(_T("BT. Thường"));
		else if(tmpStr == _T("5") || tmpStr == _T("8"))
			szTemp.Format(_T("Bếp bệnh lý"));
		else if(tmpStr == _T("6") || tmpStr == _T("9"))
			szTemp.Format(_T("Bếp A1 + A16"));
		else
			szTemp.Format(_T(" "));
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
	xls.Save(_T("Exports\\QuanSoAnTrongNgay.xls"));
} 

CString CNTTArmyFood::GetQueryString(){
	CString szSQL, szWhere, szWhere1;

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND deptid = '%s'"), m_szDepartmentKey);
	}

	if(m_bHauCan)
		//szWhere1.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
		szWhere.AppendFormat(_T(" AND NVL(tbl1.hfl_deptid, 'X') = 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(tbl1.hfos_milk,'N')<>'MILK'"));
	else
		//szWhere1.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));
		szWhere.AppendFormat(_T(" AND NVL(tbl1.hfl_deptid, 'X') <> 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(tbl1.hfos_milk,'N')<>'MILK'"));

	szSQL.Format(_T(" SELECT") \
		_T("   CASE") \
		_T("     WHEN foodtype = 1") \
		_T("     THEN 1") \
		_T("     WHEN foodtype = 2") \
		_T("     THEN 2") \
		_T("     WHEN foodtype = 3") \
		_T("     THEN 3") \
		_T("     WHEN foodtype IN(4, 5, 6)") \
		_T("     THEN 4") \
		_T("     WHEN foodtype IN(7, 8, 9)") \
		_T("     THEN 5") \
		_T("     WHEN foodtype = 10") \
		_T("     THEN 6") \
		_T("     WHEN foodtype = 11") \
		_T("     THEN 7") \
		_T("     ELSE 8") \
		_T("   END AS foodgroup,") \
		_T("   foodtype,") \
		_T("   'Xuất'                  AS pxuat,") \
		_T("   SUM(foodqty - foodqtyC) AS foodqty,") \
		_T("   unitprice,") \
		_T("   SUM((foodqty - foodqtyC)*unitprice) AS amount") \
		_T(" FROM") \
		_T("   (SELECT") \
		_T("     CASE") \
		_T("       WHEN deptid                         IN ('A16')") \
		_T("       AND (SUBSTR(UPPER(hfl_name2), 1, 2) IN('AP')") \
		_T("       OR SUBSTR(UPPER(hfl_name2), 1, 3)   IN('PHU'))") \
		_T("       THEN 1") \
		_T("       WHEN hfol_type = 'S'") \
		_T("       THEN 2") \
		_T("       WHEN hfl_index1 = 203") \
		_T("       THEN 3") \
		_T("       WHEN hfl_index1       = 200") \
		_T("       AND hfol_type         = 'T'") \
		_T("       AND deptid NOT       IN('A1','A1-A','A1-C', 'A12', 'A16')") \
		_T("       AND UPPER(hfl_name2) IN('BT01', 'PK4')") \
		_T("       THEN 4") \
		_T("       WHEN hfl_index1       = 200") \
		_T("       AND hfol_type         = 'C'") \
		_T("       AND deptid NOT       IN('A1','A1-A','A1-C', 'A12', 'A16')") \
		_T("       AND UPPER(hfl_name2) IN('BT01', 'PK4')") \
		_T("       THEN 7") \
		_T("       WHEN hfl_index1           = 200") \
		_T("       AND hfol_type             = 'T'") \
		_T("       AND deptid NOT            IN('A1','A1-A','A1-C', 'A12', 'A16')") \
		_T("       AND UPPER(hfl_name2) NOT IN('BT01', 'PK4')") \
		_T("       THEN 5") \
		_T("       WHEN hfl_index1           = 200") \
		_T("       AND hfol_type             = 'C'") \
		_T("       AND deptid NOT            IN('A1','A1-A','A1-C', 'A12', 'A16')") \
		_T("       AND UPPER(hfl_name2) NOT IN('BT01', 'PK4')") \
		_T("       THEN 8") \
		_T("       WHEN hfl_index1                          = 200") \
		_T("       AND deptid                              IN ('A1','A1-A','A1-C', 'A12', 'A16')") \
		_T("       AND (SUBSTR(UPPER(hfl_name2), 1, 2) NOT IN('AP')") \
		_T("       OR SUBSTR(UPPER(hfl_name2), 1, 3) NOT   IN('PHU'))") \
		_T("       AND hfol_type                            = 'T'") \
		_T("       THEN 6") \
		_T("       WHEN hfl_index1                          = 200") \
		_T("       AND deptid                              IN ('A1','A1-A','A1-C', 'A12', 'A16')") \
		_T("       AND (SUBSTR(UPPER(hfl_name2), 1, 2) NOT IN('AP')") \
		_T("       OR SUBSTR(UPPER(hfl_name2), 1, 3) NOT   IN('PHU'))") \
		_T("       AND hfol_type                            = 'C'") \
		_T("       THEN 9") \
		_T("       WHEN hfl_index1 = 201") \
		_T("       THEN 10") \
		_T("       WHEN hfl_index1 = 202") \
		_T("       THEN 11") \
		_T("       ELSE 12") \
		_T("     END           AS foodtype,") \
		_T("     hfol_qtyorder AS foodqty,") \
		_T("     CASE") \
		_T("       WHEN hfe_refstatus = 'C'") \
		_T("       THEN hfol_qtyorder") \
		_T("       ELSE 0") \
		_T("     END            AS foodqtyC,") \
		_T("     hfol_unitprice AS unitprice") \
		_T("   FROM") \
		_T("     (SELECT") \
		_T("       CASE") \
		_T("         WHEN hfo_depttype = 'DT'") \
		_T("         THEN hfo_deptid") \
		_T("         ELSE hcr_admitdept") \
		_T("       END AS deptid,") \
		_T("       hfl_name2,") \
		_T("       hfol_type,") \
		_T("       hfl_index1,") \
		_T("       hfol_qtyorder,") \
		_T("       hfe_refstatus,") \
		_T("       hfol_unitprice, hfos_milk, hfl_deptid") \
		_T("     FROM hms_feefood") \
		_T("     LEFT JOIN hms_feefoodline") \
		_T("     ON( hfo_orderid = hfol_orderid)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON(hcr_docno=hfo_docno)") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON( hfl_feeid = hfol_itemid)") \
		_T("     LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("     LEFT JOIN hms_doc") \
		_T("     ON( hd_docno        = hfo_docno)") \
		_T("     WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("     AND hfo_orderstatus = 'A'") \
		_T("     AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     %s) tbl1 WHERE deptid NOT IN ('PTTYC') %s") \
		_T("   ) tbl2") \
		_T(" GROUP BY foodtype,") \
		_T("   unitprice") \
		_T(" ORDER BY foodtype,") \
		_T("   unitprice"), m_szDate.Left(10), m_szDate.Left(10), szWhere1, szWhere);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}

int CNTTArmyFood::OnAddNTTArmyFood(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CNTTArmyFood::OnEditNTTArmyFood(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CNTTArmyFood::OnDeleteNTTArmyFood(){
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
 		OnCancelNTTArmyFood();
 	}
	return 0;
}
int CNTTArmyFood::OnSaveNTTArmyFood(){
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
 		//OnNTTArmyFoodListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CNTTArmyFood::OnCancelNTTArmyFood(){
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
int CNTTArmyFood::OnNTTArmyFoodListLoadData(){
	return 0;
}
