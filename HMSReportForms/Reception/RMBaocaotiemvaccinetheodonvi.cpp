#include "stdafx.h"
#include "RMBaocaotiemvaccinetheodonvi.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMBaocaotiemvaccinetheodonvi* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd)
{
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnToDateCheckValue();
}
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CRMBaocaotiemvaccinetheodonvi*)pWnd)->OnRoomLoadData();
} 
static void _OnRoomDblClickFnc(CWnd *pWnd){
	((CRMBaocaotiemvaccinetheodonvi*)pWnd)->OnRoomDblClick();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CRMBaocaotiemvaccinetheodonvi*)pWnd)->OnRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomDeleteItemFnc(CWnd *pWnd){
	return ((CRMBaocaotiemvaccinetheodonvi*)pWnd)->OnRoomDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CRMBaocaotiemvaccinetheodonvi *pVw = (CRMBaocaotiemvaccinetheodonvi *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRMBaocaotiemvaccinetheodonvi *pVw = (CRMBaocaotiemvaccinetheodonvi *)pWnd;
	pVw->OnExportSelect();
}
static int _OnReportDateCheckValueFnc(CWnd *pWnd){
	return ((CRMBaocaotiemvaccinetheodonvi *)pWnd)->OnReportDateCheckValue();
}
static void _Onmui1SelectFnc(CWnd *pWnd){
	  ((CRMBaocaotiemvaccinetheodonvi*)pWnd)->Onmui1Select();
}
static void _Onmui2SelectFnc(CWnd *pWnd){
	  ((CRMBaocaotiemvaccinetheodonvi*)pWnd)->Onmui2Select();
}
CRMBaocaotiemvaccinetheodonvi::CRMBaocaotiemvaccinetheodonvi(CWnd *pParent)
{

	m_nDlgWidth = 500;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CRMBaocaotiemvaccinetheodonvi::~CRMBaocaotiemvaccinetheodonvi(){
}
void CRMBaocaotiemvaccinetheodonvi::OnCreateComponents()
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
	m_wndReportDateLabel.Create(this, _T("Report Date"), 10, 89, 90, 114);
	m_wndReportDate.Create(this,95, 89, 245, 114); 
	m_wndRoom.Create(this,10, 145, 485, 390);
	m_wndRoom.SetCheckBox(TRUE);
	m_wndExport.Create(this, _T("&ExportXLS"), 415, 400, 490, 425);
	m_wndmui1.Create(this, _T("Mũi 1"), 10, 119, 245, 144);
	m_wndmui2.Create(this, _T("Mũi 2"), 251, 119, 486, 144);
	m_wndFromDate.EnableWindow(false);
	m_wndToDate.EnableWindow(false);
}
void CRMBaocaotiemvaccinetheodonvi::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndReportDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), FMT_INTEGER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Name"), FMT_TEXT, 80);

	m_wndRoom.InsertColumn(0, _T("Mã"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndRoom.InsertColumn(1, _T("Tên"), CFMT_TEXT, 250);

}
void CRMBaocaotiemvaccinetheodonvi::OnSetWindowEvents(){
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
	m_wndReportDate.SetEvent(WE_CHECKVALUE, _OnReportDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	m_wndRoom.SetEvent(WE_DBLCLICK, _OnRoomDblClickFnc);
	m_wndmui1.SetEvent(WE_CLICK, _Onmui1SelectFnc);
	m_wndmui2.SetEvent(WE_CLICK, _Onmui2SelectFnc);
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
	m_szReportDate = pMF->GetSysDate();
	UpdateData(false);
	OnRoomLoadData();

}
void CRMBaocaotiemvaccinetheodonvi::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndReportDate.GetDlgCtrlID(), m_szReportDate);
	DDX_Radio(pDX, m_wndmui1.GetDlgCtrlID(), m_nmui1);
	DDX_Radio(pDX, m_wndmui2.GetDlgCtrlID(), m_nmui2);

}
void CRMBaocaotiemvaccinetheodonvi::SetDefaultValues(){

	m_nYear = 0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nmui1=0;
	m_nmui2=1;

}
int CRMBaocaotiemvaccinetheodonvi::SetMode(int nMode){
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
/*void CRMBaocaotiemvaccinetheodonvi::OnYearChange(){
	
} */
/*void CRMBaocaotiemvaccinetheodonvi::OnYearSetfocus(){
	
} */
/*void CRMBaocaotiemvaccinetheodonvi::OnYearKillfocus(){
	
} */
int CRMBaocaotiemvaccinetheodonvi::OnYearCheckValue(){
	return 0;
}
int CRMBaocaotiemvaccinetheodonvi::OnReportDateCheckValue(){
	return 0;
} 
void CRMBaocaotiemvaccinetheodonvi::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CRMBaocaotiemvaccinetheodonvi::OnReportPeriodSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	pMF->OnReportPeriodSelendok(&m_szFromDate, &m_szToDate, m_szReportPeriodKey);
	UpdateData(false);	 
}
/*void CRMBaocaotiemvaccinetheodonvi::OnReportPeriodSetfocus(){
	
}*/
/*void CRMBaocaotiemvaccinetheodonvi::OnReportPeriodKillfocus(){
	
}*/
long CRMBaocaotiemvaccinetheodonvi::OnReportPeriodLoadData(){
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
/*void CRMBaocaotiemvaccinetheodonvi::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CRMBaocaotiemvaccinetheodonvi::OnFromDateChange(){
	
} */
/*void CRMBaocaotiemvaccinetheodonvi::OnFromDateSetfocus(){
	
} */
/*void CRMBaocaotiemvaccinetheodonvi::OnFromDateKillfocus(){
	
} */
int CRMBaocaotiemvaccinetheodonvi::OnFromDateCheckValue(){
	return 0;
} 
/*void CRMBaocaotiemvaccinetheodonvi::OnToDateChange(){
	
} */
/*void CRMBaocaotiemvaccinetheodonvi::OnToDateSetfocus(){
	
} */
/*void CRMBaocaotiemvaccinetheodonvi::OnToDateKillfocus(){
	
} */
int CRMBaocaotiemvaccinetheodonvi::OnToDateCheckValue(){
	return 0;
}
void CRMBaocaotiemvaccinetheodonvi::Onmui1Select(){
	
}
void CRMBaocaotiemvaccinetheodonvi::Onmui2Select(){
	
}
void CRMBaocaotiemvaccinetheodonvi::OnRoomDblClick(){
	
} 
void CRMBaocaotiemvaccinetheodonvi::OnRoomSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CRMBaocaotiemvaccinetheodonvi::OnRoomDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CRMBaocaotiemvaccinetheodonvi::OnRoomLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoom.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT vc_code as id, vc_name as name from M_VACCINE_LIST where VC_ISACTIVE='Y' order by vc_code"));
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
void CRMBaocaotiemvaccinetheodonvi::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CRMBaocaotiemvaccinetheodonvi::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept, label1, label2, szRooms;
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
	
	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
		{
			m_wndRoom.SetCurSel(i);
			if (!szRooms.IsEmpty())
				szRooms += _T(",");
			szRooms.AppendFormat(_T("%s"), m_wndRoom.GetItemText(i, 1));
		}
	}

	CExcel xls;
	if(!xls.Load(_T("Exports\\Template\\THONGKEMUITIEMTHEODONVI.xls"))) AfxMessageBox(_T("Chưa có File THONGKEMUITIEMTHEODONVI.xls trong thư mục Export\Template!"));
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	tmpStr.Format(_T("Vắc xin: %s"), szRooms);
	xls.SetCellText(0, 6, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	
	if (m_nmui1 == 0)
	{
	label1 = _T("Số lượng tiêm mũi 1");
	xls.SetCellText(2, 8, label1, FMT_TEXT | FMT_CENTER, true, 11);	
	}
	if (m_nmui2 == 0)
	{
	label2 = _T("Số lượng tiêm mũi 2");
	xls.SetCellText(2, 8, label2, FMT_TEXT | FMT_CENTER, true, 11);	
	}
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 11;
	nCol = 0;
	while(!rs.IsEOF())
	{
		if (m_nmui1 == 0)
		{		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("donvi"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT | FMT_LEFT);

		rs.GetValue(_T("sl_mui1_ngaytruoc"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("sl_mui1"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tang"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tong"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);
		}
		if (m_nmui2 == 0)
		{		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("donvi"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT | FMT_LEFT);

		rs.GetValue(_T("sl_mui2_ngaytruoc"), nTemp);
		nGroupTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("sl_mui2"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tang"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tong"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);
		}	

		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[5] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng:"), FMT_TEXT, true);
		for(int i = 2; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}	

	EndWaitCursor();
		
		xls.Save(_T("Exports\\Template\\THONGKEMUITIEMTHEODONVI2.xls"));
} 

CString CRMBaocaotiemvaccinetheodonvi::GetQueryString(){
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
	if(!szRooms.IsEmpty() && m_nmui1 == 0)
	{
	szWhere.AppendFormat(_T("AND VC_VACCINE1 IN(%s)"), szRooms);
	szSQL.Format(_T(" SELECT") \
				_T(" donvi, sl_mui1_ngaytruoc, sl_mui1, tang, sl_mui1_ngaytruoc+tang as tong") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT") \
				_T(" donvi,") \
				_T(" SUM(mui1_ngaytruoc) as sl_mui1_ngaytruoc,") \
				_T(" SUM(mui1) as sl_mui1,") \
				_T(" case when (SUM(mui1) - SUM(mui1_ngaytruoc))>0 then SUM(mui1) - SUM(mui1_ngaytruoc) else 0 end as tang,") \
				_T(" vaccine1 as vaccine1") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT") \
				_T(" VC_ADDRESS_NAME as donvi,") \
				_T(" case when VC_THEFIRST=1 and trunc(VC_FIRSTDATE)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss')-1 then 1 else 0 end as mui1_ngaytruoc,") \
				_T(" case when VC_VACCINE1 is not null and trunc(VC_FIRSTDATE)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss')-1 then VC_VACCINE1 end as vaccine1_ngaytruoc,") \
				_T(" case when VC_THEFIRST=1 and trunc(VC_FIRSTDATE)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') then 1 else 0 end as mui1,") \
				_T(" case when VC_VACCINE1 is not null then VC_VACCINE1 end as vaccine1") \
				_T(" from hms_patient") \
				_T(" left join RM_VACCINE_INFOR ON (hp_patientno = vc_patientno)") \
				_T(" left join M_VACCINE_ADDRESS ON (HP_WORKPLACEID=VC_ADDRESS_CODE)") \
				_T(" where 1=1 %s ") \
				_T(" and trunc(VC_FIRSTDATE) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss')-1 and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T(" )") \
				_T(" GROUP BY donvi,vaccine1") \
				_T(" )") \
				_T(" WHERE (sl_mui1_ngaytruoc+sl_mui1+tang)>0 ORDER BY donvi"), m_szReportDate, m_szReportDate, m_szReportDate, szWhere, m_szReportDate, m_szReportDate);
	
	}
	if(!szRooms.IsEmpty() && m_nmui2 == 0)		
	{
	szWhere.AppendFormat(_T("AND VC_VACCINE2 IN(%s)"), szRooms);
	szSQL.Format(_T(" SELECT donvi,") \
				_T("   sl_mui2_ngaytruoc,") \
				_T("   sl_mui2,") \
				_T("   tang,") \
				_T("   sl_mui2_ngaytruoc+tang AS tong") \
				_T(" FROM") \
				_T("   (SELECT donvi,") \
				_T("     SUM(mui2_ngaytruoc) AS sl_mui2_ngaytruoc,") \
				_T("     SUM(mui2)           AS sl_mui2,") \
				_T("     CASE") \
				_T("       WHEN (SUM(mui2) - SUM(mui2_ngaytruoc))>0") \
				_T("       THEN SUM(mui2)  - SUM(mui2_ngaytruoc)") \
				_T("       ELSE 0") \
				_T("     END      AS tang,") \
				_T("     vaccine2 AS vaccine2") \
				_T("   FROM") \
				_T("     (SELECT VC_ADDRESS_NAME AS donvi,") \
				_T("       CASE") \
				_T("         WHEN VC_THESECOND       =1") \
				_T("         AND TRUNC(VC_SECONDDATE)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss')-1") \
				_T("         THEN 1") \
				_T("         ELSE 0") \
				_T("       END AS mui2_ngaytruoc,") \
				_T("       CASE") \
				_T("         WHEN VC_vaccine2      IS NOT NULL") \
				_T("         AND TRUNC(VC_SECONDDATE)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss')-1") \
				_T("         THEN VC_vaccine2") \
				_T("       END AS vaccine2_ngaytruoc,") \
				_T("       CASE") \
				_T("         WHEN VC_THESECOND       =1") \
				_T("         AND TRUNC(VC_SECONDDATE)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("         THEN 1") \
				_T("         ELSE 0") \
				_T("       END AS mui2,") \
				_T("       CASE") \
				_T("         WHEN VC_vaccine2 IS NOT NULL") \
				_T("         THEN VC_vaccine2") \
				_T("       END AS vaccine2") \
				_T("     FROM hms_patient") \
				_T("     LEFT JOIN RM_VACCINE_INFOR") \
				_T("     ON (hp_patientno = vc_patientno)") \
				_T("     LEFT JOIN M_VACCINE_ADDRESS") \
				_T("     ON (HP_WORKPLACEID=VC_ADDRESS_CODE)") \
				_T("     WHERE 1           =1 %s ") \
				_T("     AND TRUNC(VC_SECONDDATE) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss')-1 AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("     )") \
				_T("   GROUP BY donvi,") \
				_T("     vaccine2") \
				_T("   )") \
				_T(" WHERE (sl_mui2_ngaytruoc+sl_mui2+tang)>0 ORDER BY donvi"), m_szReportDate, m_szReportDate, m_szReportDate, szWhere, m_szReportDate, m_szReportDate);
	}
	//_msg(_T("%s"), szSQL);
	return szSQL;
}