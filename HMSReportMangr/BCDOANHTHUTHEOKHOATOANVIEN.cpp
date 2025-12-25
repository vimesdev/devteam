#include "BCDOANHTHUTHEOKHOATOANVIEN.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCDOANHTHUTHEOKHOATOANVIEN *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCDOANHTHUTHEOKHOATOANVIEN *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCDOANHTHUTHEOKHOATOANVIEN *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDOANHTHUTHEOKHOATOANVIEN *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCDOANHTHUTHEOKHOATOANVIEN *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCDOANHTHUTHEOKHOATOANVIEN *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCDOANHTHUTHEOKHOATOANVIEN *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDOANHTHUTHEOKHOATOANVIEN *)pWnd)->OnToDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnListDeleteItem();
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnInPatientSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCDOANHTHUTHEOKHOATOANVIEN *pVw = (CBCDOANHTHUTHEOKHOATOANVIEN *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddBCDOANHTHUTHEOKHOAFnc(CWnd *pWnd){
	 return ((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnAddBCDOANHTHUTHEOKHOA();
} 
static int _OnEditBCDOANHTHUTHEOKHOAFnc(CWnd *pWnd){
	 return ((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnEditBCDOANHTHUTHEOKHOA();
} 
static int _OnDeleteBCDOANHTHUTHEOKHOAFnc(CWnd *pWnd){
	 return ((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnDeleteBCDOANHTHUTHEOKHOA();
} 
static int _OnSaveBCDOANHTHUTHEOKHOAFnc(CWnd *pWnd){
	 return ((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnSaveBCDOANHTHUTHEOKHOA();
} 
static int _OnCancelBCDOANHTHUTHEOKHOAFnc(CWnd *pWnd){
	 return ((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnCancelBCDOANHTHUTHEOKHOA();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnListCheckAll();
}
static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CBCDOANHTHUTHEOKHOATOANVIEN*)pWnd)->OnListUnCheckAll();
}
CBCDOANHTHUTHEOKHOATOANVIEN::CBCDOANHTHUTHEOKHOATOANVIEN()
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCDOANHTHUTHEOKHOATOANVIEN::~CBCDOANHTHUTHEOKHOATOANVIEN()
{
}
void CBCDOANHTHUTHEOKHOATOANVIEN::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 455);
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 30, 91, 55);
	m_wndFromDate.Create(this,96, 30, 216, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 221, 30, 301, 55);
	m_wndToDate.Create(this,306, 30, 426, 55); 
	m_wndList.Create(this,10, 60, 425, 450); 
	m_wndOutPatient.Create(this, _T("Bảo hiểm"), 10, 460, 110, 485);
	m_wndInPatient.Create(this, _T("Dịch vụ"), 115, 460, 215, 485);
	m_wndExport.Create(this, _T("&ExporttoXLS"), 345, 460, 425, 485);

}
void CBCDOANHTHUTHEOKHOATOANVIEN::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
// 	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndFromDate.SetCheckValue(true);
// 	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndToDate.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);
	m_wndList.SetCheckBox(TRUE);

}
void CBCDOANHTHUTHEOKHOATOANVIEN::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddBCDOANHTHUTHEOKHOAFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditBCDOANHTHUTHEOKHOAFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteBCDOANHTHUTHEOKHOAFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveBCDOANHTHUTHEOKHOAFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelBCDOANHTHUTHEOKHOAFnc, 0, 'T', VK_CONTROL);
	m_wndList.SetWindowText(_T("Dept"));
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);
	m_szFromDate =  pMF->GetSysDate()+ _T("00:00");	
	m_szToDate = pMF->GetSysDate() + _T("23:59");
	UpdateData(false);

	OnListLoadData();

}
void CBCDOANHTHUTHEOKHOATOANVIEN::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);

}
void CBCDOANHTHUTHEOKHOATOANVIEN::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("OutPatient")] =  m_nOutPatient;
	m_jData[_T("InPatient")] =  m_nInPatient;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("OutPatient")].GetValue(m_nOutPatient);
	m_jData[_T("InPatient")].GetValue(m_nInPatient);
	}

}
void CBCDOANHTHUTHEOKHOATOANVIEN::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCDOANHTHUTHEOKHOATOANVIEN::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CBCDOANHTHUTHEOKHOATOANVIEN::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nOutPatient=0;
	m_nInPatient=1;

}
int CBCDOANHTHUTHEOKHOATOANVIEN::SetMode(int nMode){
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
/*void CBCDOANHTHUTHEOKHOATOANVIEN::OnFromDateChange(){
	
} */
/*void CBCDOANHTHUTHEOKHOATOANVIEN::OnFromDateSetfocus(){
	
} */
/*void CBCDOANHTHUTHEOKHOATOANVIEN::OnFromDateKillfocus(){
	
} */
int CBCDOANHTHUTHEOKHOATOANVIEN::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCDOANHTHUTHEOKHOATOANVIEN::OnToDateChange(){
	
} */
/*void CBCDOANHTHUTHEOKHOATOANVIEN::OnToDateSetfocus(){
	
} */
/*void CBCDOANHTHUTHEOKHOATOANVIEN::OnToDateKillfocus(){
	
} */
int CBCDOANHTHUTHEOKHOATOANVIEN::OnToDateCheckValue()
{
	return 0;
} 
void CBCDOANHTHUTHEOKHOATOANVIEN::OnListDblClick()
{
	
} 
void CBCDOANHTHUTHEOKHOATOANVIEN::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CBCDOANHTHUTHEOKHOATOANVIEN::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCDOANHTHUTHEOKHOATOANVIEN::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	
	szSQL.Format(_T("SELECT sd_id AS ID, sd_name AS Name ") \
		_T("FROM sys_dept ") \
		_T("WHERE 1=1 and sd_type IN('KB','DT') and SD_ISACTIVE='Y' ") \
		_T("ORDER BY sd_id"), szWhere);
	//MessageBox(szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCDOANHTHUTHEOKHOATOANVIEN::OnOutPatientSelect(){
	UpdateData(TRUE);
	OnListLoadData();
}
void CBCDOANHTHUTHEOKHOATOANVIEN::OnInPatientSelect(){
	UpdateData(TRUE);
	OnListLoadData();
}
int CBCDOANHTHUTHEOKHOATOANVIEN::OnListCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (!m_wndList.GetCheck(i))
		{
			m_wndList.SetCheck(i, TRUE);
		}
	}
	return 0;
}
int CBCDOANHTHUTHEOKHOATOANVIEN::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCheck(i, FALSE);
		}
	}
	return 0;
}
void CBCDOANHTHUTHEOKHOATOANVIEN::OnExportSelect()
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
	
	if (m_nOutPatient == 0)
		{
		if(!xls.Load(_T("Exports\\Template\\BANG_TONG_HOP_DOANH_THU_THEOKHOA_DOITUONGBH_KHTH.xls"))) AfxMessageBox(_T("Chưa có File BANG_TONG_HOP_DOANH_THU_THEOKHOA_DOITUONGBH_KHTH.xls trong thư mục Export\Template!"));	
		}
	else
		if(!xls.Load(_T("Exports\\Template\\BANG_TONG_HOP_DOANH_THU_THEOKHOA_DOITUONGDV_KHTH.xls"))) AfxMessageBox(_T("Chưa có File BANG_TONG_HOP_DOANH_THU_THEOKHOA_DOITUONGDV_KHTH.xls trong thư mục Export\Template!"));
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
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);		

		rs.GetValue(_T("tongchiphi"), nTemp);		
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phikham"), nTemp);		
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phixn"), nTemp);		
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("phi_cdha"), nTemp);		
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phi_thuoc"), nTemp);		
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phimau"), nTemp);		
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phipttt"), nTemp);		
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phi_vtyt"), nTemp);		
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phi_kythuatcao"), nTemp);		
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phi_thuoc_k"), nTemp);		
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phi_giuong"), nTemp);		
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("phi_khac"), nTemp);		
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("benhnhantra"), nTemp);		
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("baohiemtt"), nTemp);		
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);			

		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[3] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng:"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}	

	EndWaitCursor();
		if (m_nOutPatient == 0)
		{
		xls.Save(_T("Exports\\Template\\BANG_TONG_HOP_DOANH_THU_THEOKHOA_DOITUONGBH_KHTH2.xls"));
		}
		else
		xls.Save(_T("Exports\\Template\\BANG_TONG_HOP_DOANH_THU_THEOKHOA_DOITUONGDV_KHTH2.xls"));
} 
void CBCDOANHTHUTHEOKHOATOANVIEN::OnExport()
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
	if (!xls.Load(_T("Exports\\Template\\THONGKETIENTHUOC_VATTU_PHONGMO_DIKEM_PTTT.xls"))) AfxMessageBox(_T("Chưa có File THONGKETIENTHUOC_VATTU_PHONGMO_DIKEM_PTTT.xls trong thư mục Export\Template!"));	
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
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);
		
		rs.GetValue(_T("sophieu"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("tendichvu"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ppvocam"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngaychidinh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tienthuoc"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("tienvattu"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("tongtien"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);		

		nRow++;
		rs.MoveNext();
	}	

	EndWaitCursor();
	xls.Save(_T("Exports\\Template\\THONGKETIENTHUOC_VATTU_PHONGMO_DIKEM_PTTT2.xls"));
}
void CBCDOANHTHUTHEOKHOATOANVIEN::OnExport1(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nCost = 0;
	double nTotal[16];
	for (int i = 0; i < 16; i++)
	{
		nTotal[i] = 0;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 12);
	xls.SetColumnWidth(4, 12);
	xls.SetColumnWidth(5, 12);
	xls.SetColumnWidth(6, 12);
	xls.SetColumnWidth(7, 12);
	xls.SetColumnWidth(8, 12);
	xls.SetColumnWidth(9, 12);
	xls.SetColumnWidth(10, 12);
	xls.SetColumnWidth(11, 12);
	xls.SetColumnWidth(12, 12);
	xls.SetColumnWidth(13, 12);
	xls.SetColumnWidth(14, 12);
	xls.SetColumnWidth(15, 12);
	xls.SetColumnWidth(16, 12);
	xls.SetColumnWidth(17, 12);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));	
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellText(0, 2, _T("\x44O\x41NH THU TH\x45O KHO\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 4, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 4, _T("S\x1ED1 \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 4, _T("T\x1ED5ng thu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 4, _T("\x58\xE9t nghi\x1EC7m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 4, _T("\x43\x110H\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 4, _T("Thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 4, _T("M\xE1u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, 4, _T("PTTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 4, _T("VTYTTH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 4, _T("VTYT trong g\xF3i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 4, _T("\x44VKT\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, 4, _T("Thu\x1ED1\x63 KTG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 4, _T("Giường"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(14, 4, _T("V\x1EADn \x63huy\x1EC3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 4, _T("\x42N\x43T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(16, 4, _T("\x42HTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, 4, _T("Tiền ăn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 16);
	xls.SetMerge(3, 3, 0, 16);

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("docno"), nCost);
		nTotal[0] += nCost;
		xls.SetCellText(nCol+2, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("inscost"), nCost);
		nTotal[1] += nCost;
		xls.SetCellText(nCol+3, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("testfee"), nCost);
		nTotal[2] += nCost;
		xls.SetCellText(nCol+4, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("pacsfee"), nCost);
		nTotal[3] += nCost;
		xls.SetCellText(nCol+5, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("drugfee"), nCost);
		nTotal[4] += nCost;
		xls.SetCellText(nCol+6, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("bloodfee"), nCost);
		nTotal[5] += nCost;
		xls.SetCellText(nCol+7, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("normtechfee"), nCost);
		nTotal[6] += nCost;
		xls.SetCellText(nCol+8, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("materialfee"), nCost);
		nTotal[7] += nCost;
		xls.SetCellText(nCol+9, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("replace_materialfee"), nCost);
		nTotal[8] += nCost;
		xls.SetCellText(nCol+10, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("hitechfee"), nCost);
		nTotal[9] += nCost;
		xls.SetCellText(nCol+11, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("drugfeek"), nCost);
		nTotal[10] += nCost;
		xls.SetCellText(nCol+12, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("bedfee"), nCost);
		nTotal[11] += nCost;
		xls.SetCellText(nCol+13, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("transportfee"), nCost);
		nTotal[12] += nCost;
		xls.SetCellText(nCol+14, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("patpaid"), nCost);
		nTotal[13] += nCost;
		xls.SetCellText(nCol+15, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("inspaid"), nCost);
		nTotal[14] += nCost;
		xls.SetCellText(nCol+16, nRow, double2str(nCost), FMT_NUMBER1);

		rs.GetValue(_T("foodfee"), nCost);
		nTotal[15] += nCost;
		xls.SetCellText(nCol+17, nRow, double2str(nCost), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
	for (int i = 0; i < 16; i++)
	{
		xls.SetCellText(2+i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DoanhThuTheoKhoaNoiTru.xls"));

}
int CBCDOANHTHUTHEOKHOATOANVIEN::OnAddBCDOANHTHUTHEOKHOA(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCDOANHTHUTHEOKHOATOANVIEN::OnEditBCDOANHTHUTHEOKHOA(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCDOANHTHUTHEOKHOATOANVIEN::OnDeleteBCDOANHTHUTHEOKHOA(){
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
 		OnCancelBCDOANHTHUTHEOKHOA();
 	}
	return 0;
}
int CBCDOANHTHUTHEOKHOATOANVIEN::OnSaveBCDOANHTHUTHEOKHOA(){
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
 		//OnBCDOANHTHUTHEOKHOAListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCDOANHTHUTHEOKHOATOANVIEN::OnCancelBCDOANHTHUTHEOKHOA(){
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
int CBCDOANHTHUTHEOKHOATOANVIEN::OnBCDOANHTHUTHEOKHOAListLoadData(){
	return 0;
}

CString CBCDOANHTHUTHEOKHOATOANVIEN::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDepts;

	szWhere.Format(_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') "), m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND i.hfe_deptid IN(%s) "), szDepts);
	}

	if (m_nOutPatient == 0)
	{
		szWhere.AppendFormat(_T(" AND oj.ho_type in ('I', 'C')"));
	}
	else
		szWhere.AppendFormat(_T(" AND oj.ho_type in ('S')"));	
	
	szSQL.Format(_T(" SELECT") \
		_T(" khoa, sohoso, ngaythanhtoan, phikham, phixn, phi_cdha, phi_thuoc,phi_vtyt,") \
		_T(" SUM(phixn_mau+phi_chephammau) as phimau,phipttt,phi_kythuatcao,") \
		_T(" phi_thuoc_k, phi_giuong, phi_khac, tongchiphi,baohiemtt,benhnhantra") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" i.HFE_DEPTID as khoa,") \
		_T(" i.hfe_docno as sohoso,") \
		_T(" i.hfe_date as ngaythanhtoan,") \
		_T(" (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f       ") \
		_T("       WHERE f.hfe_docno                   = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                 = i.hfe_invoiceno") \
		_T("       AND f.hfe_type                     IN ( 'E' )") \
		_T("       AND f.hfe_status                    = 'P'       ") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y')") \
		_T("       AND NVL(f.HFE_HITECH, 'N') <> 'Y'") \
		_T("   ) AS phikham,") \
		_T("  (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f       ") \
		_T("       WHERE f.hfe_docno                   = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                 = i.hfe_invoiceno") \
		_T("       AND f.hfe_type                     IN ( 'P','T' )") \
		_T("       AND f.hfe_status                    = 'P'") \
		_T("       AND SUBSTR( f.hfe_group, 1, 2 )     = 'B1'") \
		_T("       AND f.hfe_group                    <> 'B1G00'     ") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y')") \
		_T("       AND NVL(f.HFE_HITECH, 'N') <> 'Y'") \
		_T("   ) AS phixn,") \
		_T("   (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f      ") \
		_T("       WHERE f.hfe_docno                    = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                  = i.hfe_invoiceno") \
		_T("       AND f.hfe_type                      IN ( 'P' )") \
		_T("       AND SUBSTR( f.hfe_group, 1, 2 )     IN ( 'B2','B3' )     ") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT  IN ( 'Y')") \
		_T("       AND NVL(f.HFE_HITECH, 'N') <> 'Y'") \
		_T("   ) AS phi_cdha,") \
		_T("    (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f,") \
		_T("       m_productitem_view p") \
		_T("       WHERE f.hfe_docno                                  = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                                = i.hfe_invoiceno") \
		_T("       AND f.hfe_type                                    IN ( 'D','M','R' )") \
		_T("       AND SUBSTR( f.hfe_group, 1, 1 )                    = 'A'    ") \
		_T("       AND to_number(f.hfe_itemid)                        = p.product_item_id     ") \
		_T("       AND p.product_org_id                               = 'PM'      ") \
		_T("       AND f.hfe_group <> 'A1400'") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y')") \
		_T("       AND NVL(f.HFE_HITECH, 'N') <> 'Y'") \
		_T("       ) AS phi_thuoc,") \
		_T("  (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f,") \
		_T("         m_productitem_view p") \
		_T("       WHERE f.hfe_docno                   = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                 = i.hfe_invoiceno") \
		_T("       AND f.hfe_type                     IN ( 'D','M','R' )     ") \
		_T("       AND to_number(f.hfe_itemid)         = p.product_item_id") \
		_T("       AND p.product_org_id                = 'BB'") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y')") \
		_T("       AND NVL(f.HFE_HITECH, 'N') <> 'Y'") \
		_T("       ) AS phi_chephammau,") \
		_T("       (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f       ") \
		_T("       WHERE f.hfe_docno                   = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                 = i.hfe_invoiceno") \
		_T("       AND f.hfe_type                     IN ( 'P','T' )") \
		_T("       AND f.hfe_status                    = 'P'") \
		_T("       AND SUBSTR( f.hfe_group, 1, 2 )     = 'B1'") \
		_T("       AND f.hfe_group                     = 'B1G00'     ") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y')") \
		_T("       AND NVL(f.HFE_HITECH, 'N') <> 'Y'") \
		_T("   ) AS phixn_mau,      ") \
		_T("       (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f       ") \
		_T("       WHERE f.hfe_docno                   = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                 = i.hfe_invoiceno") \
		_T("       AND f.hfe_type                     IN ( 'O' )") \
		_T("       AND f.hfe_status                    = 'P'") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y')      ") \
		_T("       AND NVL(f.HFE_HITECH, 'N') <> 'Y'") \
		_T("   ) AS phipttt,") \
		_T(" (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f,") \
		_T("       m_productitem_view p") \
		_T("       WHERE f.hfe_docno                                  = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                                = i.hfe_invoiceno") \
		_T("       AND f.hfe_type                                    IN ( 'D','M','R' )       ") \
		_T("       AND to_number(f.hfe_itemid)                        = p.product_item_id     ") \
		_T("       AND p.product_org_id                               = 'MA'      ") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y')") \
		_T("       AND NVL(f.HFE_HITECH, 'N') <> 'Y'") \
		_T("       ) AS phi_vtyt,") \
		_T("   (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f    ") \
		_T("       WHERE f.hfe_docno                                  = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                                = i.hfe_invoiceno") \
		_T("       AND f.HFE_HITECH='Y'          ") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y')    ") \
		_T("     ) AS phi_kythuatcao,") \
		_T("    (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f,") \
		_T("       m_productitem_view p") \
		_T("       WHERE f.hfe_docno                                  = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                                = i.hfe_invoiceno") \
		_T("       AND f.hfe_type                                    IN ( 'D','M','R' )") \
		_T("       AND f.hfe_group='A1400'") \
		_T("       AND to_number(f.hfe_itemid)                        = p.product_item_id     ") \
		_T("       AND p.product_org_id                               = 'PM'      ") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y' )") \
		_T("       AND NVL(f.HFE_HITECH, 'N') <> 'Y'") \
		_T("       ) AS phi_thuoc_k,") \
		_T("      (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f") \
		_T("       WHERE f.hfe_docno                   = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                 = i.hfe_invoiceno") \
		_T("       AND f.hfe_type                      = 'B'") \
		_T("       AND f.hfe_status                   IN ( 'P','R' )") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y')") \
		_T("       AND NVL(f.HFE_HITECH, 'N') <> 'Y'") \
		_T("       ) AS phi_giuong,") \
		_T("        (SELECT COALESCE( SUM(f.hfe_cost), 0 )") \
		_T("       FROM hms_fee f") \
		_T("       WHERE f.hfe_docno                   = i.hfe_docno") \
		_T("       AND f.hfe_invoiceno                 = i.hfe_invoiceno") \
		_T("       AND f.hfe_type                     IN ('F','X')") \
		_T("       AND f.hfe_status                   IN ( 'P','R' )") \
		_T("       AND NVL( f.hfe_category, 'N' ) NOT IN ( 'Y' )") \
		_T("       AND NVL(f.HFE_HITECH, 'N') <> 'Y'") \
		_T("       ) AS phi_khac,") \
		_T(" i.hfe_amount as tongchiphi,") \
		_T(" i.hfe_discount as baohiemtt,") \
		_T(" i.hfe_amount-i.hfe_discount as benhnhantra") \
		_T(" from HMS_FEE_INVOICE i") \
		_T(" left join HMS_OBJECT oj ON (i.HFE_OBJECTID=oj.HO_ID)") \
		_T(" where 1=1") \
		_T(" AND i.hfe_status='P'") \
		_T(" %s") \
		_T(" )") \
		_T(" GROUP BY khoa, sohoso, ngaythanhtoan, phikham, phixn, phi_cdha, phi_thuoc,phi_vtyt,") \
		_T(" phixn_mau, phi_chephammau,phipttt,phi_kythuatcao,") \
		_T(" phi_thuoc_k, phi_giuong, phi_khac, tongchiphi,baohiemtt,benhnhantra") \
		_T(" ORDER BY khoa, ngaythanhtoan"), szWhere);


	/*szSQL.Format(_T(" SELECT deptid,") \
		_T("   COUNT(DISTINCT docno)        AS docno,") \
		_T("   ROUND(SUM(drugfee))          AS drugfee,") \
		_T("   ROUND(SUM(drugfeek))         AS drugfeek,") \
		_T("   ROUND(SUM(bloodfee))         AS bloodfee,") \
		_T("   ROUND(SUM(testfee))          AS testfee,") \
		_T("   ROUND(SUM(pacsfee))          AS pacsfee,") \
		_T("   ROUND(SUM(normtechfee))      AS normtechfee,") \
		_T("   ROUND(SUM(hitechfee))        AS hitechfee,") \
		_T("   ROUND(SUM(materialfee))      AS materialfee,") \
		_T("   ROUND(SUM(examfee))          AS examfee,") \
		_T("   ROUND(SUM(inspaid))          AS cost,") \
		_T("   ROUND(SUM(otherfee))         AS otherfee,") \
		_T("   ROUND(SUM(discount))         AS inspaid,") \
		_T("   ROUND(SUM(inspaid-discount)) AS patpaid,") \
		_T("   ROUND(SUM(diffpaid))         AS diffpaid") \
		_T(" FROM") \
		_T("   (SELECT NVL(fi.hfe_deptid, fe.hfe_deptid) AS deptid,") \
		_T("     fi.hfe_class,") \
		_T("     fi.hfe_docno     AS docno,") \
		_T("     fi.hfe_invoiceno AS invoiceno,") \
		_T("     fi.hfe_date      AS invoicedate,") \
		_T("     fe.hfe_group     AS groupid,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6')") \
		_T("       AND fe.hfe_group NOT          IN('A1400', 'A1500', 'A1600')") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS drugfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group='A1400'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS drugfeek,") \
		_T("     CASE") \
		_T("       WHEN (NVL(hfl_bloodfee, 'X') = 'Y'") \
		_T("       OR fe.hfe_group              ='A2000')") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS bloodfee,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group, 1, 2)='B1'") \
		_T("       AND hfe_hitech                 = 'N'") \
		_T("       AND NVL(hfl_bloodfee, 'X')    <> 'Y'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS testfee,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3')") \
		_T("       AND fe.hfe_hitech                ='N'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS pacsfee,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5')") \
		_T("       AND fe.hfe_hitech                ='N'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS normtechfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_hitech='Y'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS hitechfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group       IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
		_T("       AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT')") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS materialfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group='D0000'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS examfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group='F0000'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END             AS otherfee,") \
		_T("     fe.hfe_cost     AS cost,") \
		_T("     fe.hfe_inspaid  AS inspaid,") \
		_T("     fe.hfe_discount AS discount,") \
		_T("     fe.hfe_patpaid  AS patpaid,") \
		_T("     fe.hfe_diffpaid AS diffpaid") \
		_T("   FROM hms_fee_invoice fi") \
		_T("   LEFT JOIN hms_fee_view fe") \
		_T("   ON(fe.hfe_invoiceno  =fi.hfe_invoiceno") \
		_T("   AND fe.hfe_docno     =fi.hfe_docno") \
		_T("   AND fe.hfe_category <> 'Y')") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON (hfl_feeid       = hfe_itemid)") \
		_T("   WHERE fi.hfe_class IN('E')") \
		_T("   AND fe.hfe_discount > 0") \
		_T("   AND fi.hfe_status   ='P'") \
		_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T("   %s") \
		_T("   UNION ALL") \
		_T("   SELECT NVL(fi.hfe_deptid, fe.hfe_deptid) AS deptid,") \
		_T("     fi.hfe_class,") \
		_T("     fi.hfe_docno     AS docno,") \
		_T("     fi.hfe_invoiceno AS invoiceno,") \
		_T("     fi.hfe_date      AS invoicedate,") \
		_T("     fe.hfe_group     AS groupid,") \
		_T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
		_T("     DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt) AS diffpaid") \
		_T("   FROM hms_fee_invoice fi") \
		_T("   LEFT JOIN hms_fee_view fe") \
		_T("   ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("   AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON (hfl_feeid       = hfe_itemid)") \
		_T("   WHERE fi.hfe_class IN('E')") \
		_T("   AND fe.hfe_discount = 0") \
		_T("   AND fi.hfe_status   ='P'") \
		_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T("   %s") \
		_T("   ) tbl") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(docno=hd_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card") \
		_T(" ON(hc_patientno=hp_patientno") \
		_T(" AND hc_idx     =hd_cardidx)") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id=hd_object)") \
		_T(" LEFT JOIN hms_icd") \
		_T(" ON(hd_icd             =hi_icd)") \
		_T(" WHERE hd_status       ='T'") \
		_T(" AND ho_type          IN ('I', 'C')") \
		_T(" AND LENGTH(hc_cardno) > 0") \
		_T(" GROUP BY deptid") \
		_T(" HAVING SUM(cost) > 0") \
		_T(" ORDER BY deptid"), m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere);*/


		

	return szSQL;
}
CString CBCDOANHTHUTHEOKHOATOANVIEN::GetQueryString1(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDepts;

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND fi.hfe_deptid IN(%s) "), szDepts);
	}

	szSQL.Format(_T(" SELECT deptid,") \
		_T("   COUNT(DISTINCT hd_docno)  AS docno,") \
		_T("   ROUND(SUM(drugfee+drugfeek+bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee+transportfee)) AS inscost,") \
		_T("   ROUND(SUM(drugfee))                                                                                                             AS drugfee,") \
		_T("   ROUND(SUM(drugfeek))                                                                                                            AS drugfeek,") \
		_T("   ROUND(SUM(bloodfee))                                                                                                            AS bloodfee,") \
		_T("   ROUND(SUM(testfee))                                                                                                             AS testfee,") \
		_T("   ROUND(SUM(pacsfee))                                                                                                             AS pacsfee,") \
		_T("   ROUND(SUM(normtechfee))                                                                                                         AS normtechfee,") \
		_T("   ROUND(SUM(hitechfee))                                                                                                           AS hitechfee,") \
		_T("   ROUND(SUM(materialfee))                                                                                                         AS materialfee,") \
		_T("   ROUND(SUM(replace_materialfee))                                                                                                 AS replace_materialfee,") \
		_T("   ROUND(SUM(ref_materialfee))                                                                                                     AS ref_materialfee,") \
		_T("   ROUND(SUM(bedfee))                                                                                                              AS bedfee,") \
		_T("   ROUND(SUM(transportfee))                                                                                                        AS transportfee,") \
		_T("   CASE") \
		_T("     WHEN SUM(is_scoliosis) > 0") \
		_T("     THEN ROUND(SUM(v_inspaid))") \
		_T("     ELSE ROUND(SUM(inspaid))") \
		_T("   END                  AS cost,") \
		_T("   ROUND(SUM(otherfee)) AS otherfee,") \
		_T("   ROUND(SUM(scoliosisfee)) scoliosisfee,") \
		_T("   ROUND(SUM(l_materialfee)) l_materialfee,") \
		_T("   ROUND(SUM(l_discount)) l_discount,") \
		_T("   ROUND(SUM(l_materialfee - l_discount)) l_diffpaid,") \
		_T("   CASE") \
		_T("     WHEN SUM(is_scoliosis) > 0") \
		_T("     THEN ROUND(SUM(v_discount))") \
		_T("     ELSE ROUND(SUM(discount))") \
		_T("   END AS inspaid,") \
		_T("   CASE") \
		_T("     WHEN SUM(is_scoliosis) > 0") \
		_T("     THEN ROUND(SUM(v_inspaid - v_discount))") \
		_T("     ELSE ROUND(SUM(inspaid   -discount))") \
		_T("   END                  AS patpaid,") \
		_T("   ROUND(SUM(diffpaid)) AS diffpaid,") \
		_T("   ROUND(SUM(food_fee)) AS food_fee") \
		_T(" FROM") \
		_T("   (SELECT NVL(fi.hfe_deptid, fe.hfe_deptid) AS deptid,") \
		_T("     fi.hfe_class,") \
		_T("     fe.hfe_docno     AS docno,") \
		_T("     fe.hfe_invoiceno AS invoiceno,") \
		_T("     fe.hfe_group     AS groupid,") \
		_T("     hcr_reldisease,") \
		_T("     hcr_admitdate,") \
		_T("     hcr_dischargedate,") \
		_T("     hcr_sumtreat,") \
		_T("     hcr_mainicd,") \
		_T("     hcr_maindisease,") \
		_T("     fi.hfe_date invoice_date,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6')") \
		_T("       AND fe.hfe_group NOT          IN ('A1400', 'A1500', 'A1600')") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS drugfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group='A1400'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS drugfeek,") \
		_T("     CASE") \
		_T("       WHEN (NVL(hfl_bloodfee, 'X') = 'Y'") \
		_T("       OR fe.hfe_group              ='A2000')") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS bloodfee,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group, 1, 2)='B1'") \
		_T("       AND NVL(hfl_bloodfee, 'X')    <> 'Y'") \
		_T("       AND fe.hfe_hitech              ='N'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS testfee,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3')") \
		_T("       AND fe.hfe_hitech                ='N'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS pacsfee,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5')") \
		_T("       AND fe.hfe_hitech                ='N'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS normtechfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_hitech='Y'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS hitechfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group       IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
		_T("       AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT')") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS materialfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group   IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
		_T("       AND fe.hfe_feegroup IN ('OPT_L', 'OPT')") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS replace_materialfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group   IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
		_T("       AND fe.hfe_feegroup IN ('OPT_L', 'OPT')") \
		_T("       THEN fe.hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS ref_materialfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group='C0000'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS bedfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group='E0000'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS transportfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group='F0000'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS otherfee,") \
		_T("     0 scoliosisfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_feegroup = 'OPT_L'") \
		_T("       AND fe.hfe_type      = 'D'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END l_materialfee,") \
		_T("     0 l_discount,") \
		_T("     fe.hfe_cost AS cost,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS inspaid,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
		_T("       THEN fe.hfe_discount") \
		_T("       ELSE 0") \
		_T("     END            AS discount,") \
		_T("     fe.hfe_patpaid AS patpaid,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
		_T("       THEN fe.hfe_diffcost") \
		_T("       ELSE 0") \
		_T("     END diffpaid,") \
		_T("     0 is_scoliosis,") \
		_T("     0 v_inspaid,") \
		_T("     0 v_discount,") \
		_T("     0 food_fee") \
		_T("   FROM hms_clinical_record") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON (hcr_docno  = htr_docno") \
		_T("   AND hcr_refidx = htr_idx)") \
		_T("   LEFT JOIN hms_fee_invoice fi") \
		_T("   ON (hcr_docno       = fi.hfe_docno") \
		_T("   AND hcrf_invoicefee = fi.hfe_invoiceno)") \
		_T("   LEFT JOIN hms_fee_view fe") \
		_T("   ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("   AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON (fe.hfe_itemid    = hfl_feeid)") \
		_T("   WHERE fi.hfe_class  IN('A', 'I')") \
		_T("   AND fe.hfe_discount  > 0") \
		_T("   AND fe.hfe_category <> 'Y'") \
		_T("   AND hcr_status       ='T'") \
		_T("   AND fe.hfe_type     <> 'V'") \
		_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("   AND fi.hfe_status             = 'P'") \
		_T("   AND NVL(htr_outpatient, 'X') <> 'Y'") \
		_T("   AND fe.hfe_group             <> 'D0000' %s") \
		_T("   UNION ALL") \
		_T("   SELECT NVL(fi.hfe_deptid, fe.hfe_deptid) AS deptid,") \
		_T("     fi.hfe_class,") \
		_T("     fe.hfe_docno     AS docno,") \
		_T("     fe.hfe_invoiceno AS invoiceno,") \
		_T("     fe.hfe_group     AS groupid,") \
		_T("     hcr_reldisease,") \
		_T("     hcr_admitdate,") \
		_T("     hcr_dischargedate,") \
		_T("     hcr_sumtreat,") \
		_T("     hcr_mainicd,") \
		_T("     hcr_maindisease,") \
		_T("     fi.hfe_date invoice_date,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     CASE") \
		_T("       WHEN NVL(ho_scoliosis, 'N') = 'Y'") \
		_T("       THEN fe.hfe_discount") \
		_T("       ELSE 0") \
		_T("     END,") \
		_T("     0,") \
		_T("     CASE") \
		_T("       WHEN NVL(ho_scoliosis, 'N') <> 'Y'") \
		_T("       THEN fe.hfe_discount") \
		_T("       ELSE 0") \
		_T("     END,") \
		_T("     fe.hfe_cost AS cost,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_feegroup       IN ('HITECH_L', 'OPT_L')") \
		_T("       AND NVL(ho_scoliosis, 'N') <> 'Y'") \
		_T("       THEN fe.hfe_discount / hd_disrate * 100") \
		_T("       ELSE 0") \
		_T("     END AS inspaid,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_feegroup       IN ('HITECH_L', 'OPT_L')") \
		_T("       AND NVL(ho_scoliosis, 'N') <> 'Y'") \
		_T("       THEN fe.hfe_discount") \
		_T("       ELSE 0") \
		_T("     END            AS discount,") \
		_T("     fe.hfe_patpaid AS patpaid,") \
		_T("     CASE") \
		_T("       WHEN NVL(ho_scoliosis, 'N') = 'Y'") \
		_T("       THEN 0") \
		_T("       ELSE fe.hfe_diffcost") \
		_T("     END diffpaid,") \
		_T("     CASE") \
		_T("       WHEN NVL(ho_scoliosis, 'N') = 'Y'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END is_scoliosis,") \
		_T("     fe.hfe_discount / hd_disrate * 100 AS hfe_inspaid,") \
		_T("     fe.hfe_discount,") \
		_T("     0 food_fee") \
		_T("   FROM hms_clinical_record") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON (hcr_docno  = htr_docno") \
		_T("   AND hcr_refidx = htr_idx)") \
		_T("   LEFT JOIN hms_fee_invoice fi") \
		_T("   ON (hcr_docno       = fi.hfe_docno") \
		_T("   AND hcrf_invoicefee = fi.hfe_invoiceno)") \
		_T("   LEFT JOIN hms_fee_view fe") \
		_T("   ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("   AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("   LEFT JOIN hms_operation") \
		_T("   ON (ho_docno  = hcr_docno") \
		_T("   AND ho_itemid = hfe_subgroup") \
		_T("   AND ho_idx    = hfe_orderid)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno          = hcr_docno)") \
		_T("   WHERE fi.hfe_class  IN('A', 'I')") \
		_T("   AND fe.hfe_discount  > 0") \
		_T("   AND fe.hfe_category <> 'Y'") \
		_T("   AND hcr_status       ='T'") \
		_T("   AND fe.hfe_type      = 'V'") \
		_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("   AND fi.hfe_status             = 'P'") \
		_T("   AND NVL(htr_outpatient, 'X') <> 'Y'") \
		_T("   AND fe.hfe_group             <> 'D0000' %s") \
		_T("  UNION ALL") \
		_T("   SELECT NVL(fi.hfe_deptid, fe.hfe_deptid) AS deptid,") \
		_T("     fi.hfe_class,") \
		_T("     fe.hfe_docno     AS docno,") \
		_T("     fe.hfe_invoiceno AS invoiceno,") \
		_T("     fe.hfe_group     AS groupid,") \
		_T("     hcr_reldisease,") \
		_T("     hcr_admitdate,") \
		_T("     hcr_dischargedate,") \
		_T("     hcr_sumtreat,") \
		_T("     hcr_mainicd,") \
		_T("     hcr_maindisease,") \
		_T("     fi.hfe_date invoice_date,") \
		_T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
		_T("     0,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
		_T("       THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
		_T("       ELSE 0") \
		_T("     END AS diffpaid,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     (") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_type = 'F'") \
		_T("       THEN fe.hfe_patpaid") \
		_T("       ELSE 0") \
		_T("     END) food_fee") \
		_T("   FROM hms_clinical_record") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON (hcr_docno  = htr_docno") \
		_T("   AND hcr_refidx = htr_idx)") \
		_T("   LEFT JOIN hms_fee_invoice fi") \
		_T("   ON (hcr_docno       = fi.hfe_docno") \
		_T("   AND hcrf_invoicefee = fi.hfe_invoiceno)") \
		_T("   LEFT JOIN hms_fee_view fe") \
		_T("   ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("   AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON (fe.hfe_itemid    = hfl_feeid)") \
		_T("   WHERE fi.hfe_class  IN('A', 'I')") \
		_T("   AND fe.hfe_discount  = 0") \
		_T("   AND fe.hfe_category <> 'Y'") \
		_T("   AND hcr_status       ='T'") \
		_T("   AND fe.hfe_type     <> 'V'") \
		_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("   AND fi.hfe_status             = 'P'") \
		_T("   AND NVL(htr_outpatient, 'X') <> 'Y'") \
		_T("   AND fe.hfe_group             <> 'D0000' %s") \
		_T("   ) tbl") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(docno=hd_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card") \
		_T(" ON(hc_patientno=hp_patientno") \
		_T(" AND hc_idx     =hd_cardidx)") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id=hd_object)") \
		_T(" LEFT JOIN hms_icd") \
		_T(" ON(hcr_mainicd=hi_icd)") \
		_T(" LEFT JOIN hms_insurance_group") \
		_T(" ON (hig_idx    = hc_groupid)") \
		_T(" WHERE ho_type   IN ('I', 'C')") \
		_T(" AND hd_cardno IS NOT NULL") \
		_T(" GROUP BY deptid") \
		_T(" HAVING SUM(cost)           > 0") \
		_T(" AND SUM(inspaid-discount) >= 0") \
		_T(" ORDER BY") \
		_T("   deptid"), m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}