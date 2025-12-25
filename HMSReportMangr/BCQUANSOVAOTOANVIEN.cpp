#include "BCQUANSOVAOTOANVIEN.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCQUANSOVAOTOANVIEN *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCQUANSOVAOTOANVIEN *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCQUANSOVAOTOANVIEN *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCQUANSOVAOTOANVIEN *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCQUANSOVAOTOANVIEN *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCQUANSOVAOTOANVIEN *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCQUANSOVAOTOANVIEN *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCQUANSOVAOTOANVIEN *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCQUANSOVAOTOANVIEN *pVw = (CBCQUANSOVAOTOANVIEN *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCQUANSOVAOTOANVIEN *pVw = (CBCQUANSOVAOTOANVIEN *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCQUANSOVAOTOANVIEN *pVw = (CBCQUANSOVAOTOANVIEN *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCQUANSOVAOTOANVIEN*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCQUANSOVAOTOANVIEN*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCQUANSOVAOTOANVIEN*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCQUANSOVAOTOANVIEN*)pWnd)->OnListDeleteItem();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	((CBCQUANSOVAOTOANVIEN*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CBCQUANSOVAOTOANVIEN*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CBCQUANSOVAOTOANVIEN*)pWnd)->OnOutPatientSelect();
}
static int _OnAddBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSOVAOTOANVIEN*)pWnd)->OnAddBCQUANSOTHEONGAY();
} 
static int _OnEditBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSOVAOTOANVIEN*)pWnd)->OnEditBCQUANSOTHEONGAY();
} 
static int _OnDeleteBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSOVAOTOANVIEN*)pWnd)->OnDeleteBCQUANSOTHEONGAY();
} 
static int _OnSaveBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSOVAOTOANVIEN*)pWnd)->OnSaveBCQUANSOTHEONGAY();
} 
static int _OnCancelBCQUANSOTHEONGAYFnc(CWnd *pWnd){
	 return ((CBCQUANSOVAOTOANVIEN*)pWnd)->OnCancelBCQUANSOTHEONGAY();
} 
CBCQUANSOVAOTOANVIEN::CBCQUANSOVAOTOANVIEN(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCQUANSOVAOTOANVIEN::~CBCQUANSOVAOTOANVIEN(){
}
void CBCQUANSOVAOTOANVIEN::OnCreateComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
// 	m_wndFromDateLabel.Create(this, _T("Nhập ngày"), 10, 30, 90, 55);
// 	m_wndFromDate.Create(this,95, 30, 215, 55); 
// 	/*m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
// 	m_wndToDate.Create(this,305, 30, 425, 55); */
// 	m_wndLoad.Create(this, _T("&Load"), 220, 30, 300, 55);
// 	//m_wndPrint.Create(this, _T("&Print"), 620, 30, 710, 55);
// 	m_wndExport.Create(this, _T("&Export"), 305, 30, 425, 55);
// 	m_wndList.Create(this,3, 64, 1012, 614); 

	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 6, 1013, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55);
	m_wndAll.Create(this, _T("All"), 430, 30, 510, 55);
	m_wndInPatient.Create(this, _T("InPatient"), 515, 30, 595, 55);
	m_wndOutPatient.Create(this, _T("OutPatient"), 600, 30, 680, 55);
	m_wndLoad.Create(this, _T("&Load"), 685, 30, 775, 55);
	//m_wndPrint.Create(this, _T("&Print"), 525, 30, 615, 55);
	//m_wndExport.Create(this, _T("&Export"), 620, 30, 710, 55);
	m_wndExport.Create(this, _T("&Export"), 780, 30, 870, 55);
	m_wndList.Create(this,3, 64, 1012, 614);

	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndList.GetHeaderControl()->SetItemHeight(5);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_MONEY, 40);
	m_wndList.InsertColumn(1, _T("Đơn vị"), CFMT_RIGHT, 100);
	m_wndList.InsertColumn(2, _T("Quân số cũ"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(3, _T("Quân số vào"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(4, _T("Chuyển khoa đến"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(5, _T("Chuyển khoa đi"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(6, _T("Ra viện"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("Quân số còn lại"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(8, _T("Vào từ C1.1"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(9, _T("Vào từ AB"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(10, _T("Vào từ C1.2"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(11, _T("Vào từ C1.3 (trong giờ)"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(12, _T("Vào từ C1.3 (ngoài giờ)"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(13, _T("Vào từ TYC"), CFMT_MONEY, 60);
	m_wndList.InsertColumn(14, _T("Vào từ TTTM"), CFMT_MONEY, 60);
}
void CBCQUANSOVAOTOANVIEN::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
}
void CBCQUANSOVAOTOANVIEN::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
}
void CBCQUANSOVAOTOANVIEN::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CBCQUANSOVAOTOANVIEN::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCQUANSOVAOTOANVIEN::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCQUANSOVAOTOANVIEN::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;

}
int CBCQUANSOVAOTOANVIEN::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
/*void CBCQUANSOVAOTOANVIEN::OnFromDateChange(){
	
} */
/*void CBCQUANSOVAOTOANVIEN::OnFromDateSetfocus(){
	
} */
/*void CBCQUANSOVAOTOANVIEN::OnFromDateKillfocus(){
	
} */
int CBCQUANSOVAOTOANVIEN::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCQUANSOVAOTOANVIEN::OnToDateChange(){
	
} */
/*void CBCQUANSOVAOTOANVIEN::OnToDateSetfocus(){
	
} */
/*void CBCQUANSOVAOTOANVIEN::OnToDateKillfocus(){
	
} */
int CBCQUANSOVAOTOANVIEN::OnToDateCheckValue(){
	return 0;
} 
void CBCQUANSOVAOTOANVIEN::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
void CBCQUANSOVAOTOANVIEN::OnAllSelect(){

}
void CBCQUANSOVAOTOANVIEN::OnInPatientSelect(){

}
void CBCQUANSOVAOTOANVIEN::OnOutPatientSelect(){

}
void CBCQUANSOVAOTOANVIEN::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCQUANSOVAOTOANVIEN::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szNewDeptType, szOldDeptType;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("BÁO CÁO TỔNG HỢP QUÂN SỐ VÀO TOÀN VIỆN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 5, _T("Đơn vị"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 5, _T("Quân số cũ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 5, _T("Quân số vào"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 5, _T("Chuyển khoa đến"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 5, _T("Chuyển khoa đi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 5, _T("Ra viện"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 5, _T("Quân số còn lại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 5, _T("Vào từ C1.1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 5, _T("Vào từ AB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 5, _T("Vào từ C1.2"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 5, _T("Vào từ C1.3 (trong giờ)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 5, _T("Vào từ C1.3 (ngoài giờ)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 5, _T("Vào từ TYC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 5, _T("Vào từ TTTM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 3);
	xls.SetMerge(1, 1, 0, 3);
	xls.SetMerge(3, 3, 0, 14);
	xls.SetMerge(4, 4, 0, 14);

	szSQL =GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 6;
	nCol = 0;
	int nGroupTotal[14], nTotal[14];
	for (int i = 1; i< 14; i++)
		{
			nGroupTotal[i] = 0;
			nTotal[i] = 0;
		}
	int nIdx = 1;
	while(!rs.IsEOF()){

		rs.GetValue(_T("sd_category"), szNewDeptType);
		if(szNewDeptType != szOldDeptType && !szNewDeptType.IsEmpty())
		{	
			if(nGroupTotal[1] > 0)
			{
				xls.SetCellMergedColumns(nCol, nRow , 2);
				xls.SetCellText(nCol, nRow, _T("Tổng nhóm"), FMT_TEXT, true);
				for(int i = 1; i < 14; i++)
				{
					xls.SetCellText(nCol+1+i, nRow, int2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}

			if(szNewDeptType == _T("0"))
				xls.SetCellText(nCol+1, nRow, _T("Nội khoa"), FMT_TEXT, true);
			else
				xls.SetCellText(nCol+1, nRow, _T("Ngoại khoa"), FMT_TEXT, true);
			szOldDeptType = szNewDeptType;
			nIdx = 1;
			nRow++;
		}

		tmpStr.Format(_T("%d"),nIdx++);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("dept"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);

		rs.GetValue(_T("socu"), tmpStr);
		nGroupTotal[1] += ToInt(tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("vaovien"), tmpStr);
		nGroupTotal[2] += ToInt(tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("ckden"), tmpStr);
		nGroupTotal[3] += ToInt(tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("ckdi"), tmpStr);
		nGroupTotal[4] += ToInt(tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("ravien"), tmpStr);
		nGroupTotal[5] += ToInt(tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("hientai"), tmpStr);
		nGroupTotal[6] += ToInt(tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("vao_vien_C11"), tmpStr);
		nGroupTotal[7] += ToInt(tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("vao_vien_AB"), tmpStr);
		nGroupTotal[8] += ToInt(tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("vao_vien_C12"), tmpStr);
		nGroupTotal[9] += ToInt(tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("vao_vien_C13tronggio"), tmpStr);
		nGroupTotal[10] += ToInt(tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("vao_vien_C13ngoaigio"), tmpStr);
		nGroupTotal[11] += ToInt(tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("vao_vien_TYC"), tmpStr);
		nGroupTotal[12] += ToInt(tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("vao_vien_TTTM"), tmpStr);
		nGroupTotal[13] += ToInt(tmpStr);
		xls.SetCellText(nCol + 14, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		nRow++;
		rs.MoveNext();
	}

	if(nGroupTotal[1] > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow , 2);
		xls.SetCellText(nCol, nRow, _T("Tổng nhóm"), FMT_TEXT, true);
		for(int i = 1; i < 15; i++)
		{
			xls.SetCellText(nCol+1+i, nRow, int2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
			nGroupTotal[i] = 0;
		}
		nRow++;
	}

	if(nTotal[1] > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow , 2);
		xls.SetCellText(nCol, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 1; i < 15; i++)
		{
			xls.SetCellText(nCol+1+i, nRow, int2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOTONGHOPQUANSOTOANVIEN.xls"));
}
 
void CBCQUANSOVAOTOANVIEN::OnListDblClick(){
	
} 
void CBCQUANSOVAOTOANVIEN::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCQUANSOVAOTOANVIEN::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCQUANSOVAOTOANVIEN::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad();
	CString szNewDeptType, szOldDeptType;
	int nCount = 0;
	CString szSQL, tmpStr;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	int nItem=1;
	int nGroupTotal[13], nTotal[13], nTemp = 0;
	for(int i = 0; i < 13; i++)
		{
			nGroupTotal[i] = 0;
			nTotal[i] = 0;
		}
	while(!rs.IsEOF()){
		rs.GetValue(_T("sd_category"), szNewDeptType);
		if(szNewDeptType != szOldDeptType && !szNewDeptType.IsEmpty())
		{	
			if(nGroupTotal[0] > 0)
				{
					m_wndList.AddItems(
						_T(""),
						_T("Tổng nhóm"), 
						int2str(nGroupTotal[0]),
						int2str(nGroupTotal[1]),
						int2str(nGroupTotal[2]),
						int2str(nGroupTotal[3]),
						int2str(nGroupTotal[4]),
						int2str(nGroupTotal[5]),
						int2str(nGroupTotal[6]),
						int2str(nGroupTotal[7]),
						int2str(nGroupTotal[8]),
						int2str(nGroupTotal[9]),
						int2str(nGroupTotal[10]),
						int2str(nGroupTotal[11]),
						int2str(nGroupTotal[12]), NULL, true);

					for(int i = 0; i < 13; i++)
						{
							nTotal[i] += nGroupTotal[i];
							nGroupTotal[i] = 0;
						}
				}

			if(szNewDeptType == _T("0"))
				nItem = m_wndList.AddItems(_T("Nội Khoa"), NULL, true);
			else
				nItem = m_wndList.AddItems(_T("Ngoại Khoa"), NULL, true);
			m_wndList.MergeCell(nItem, 0, nItem, 14);
			szOldDeptType = szNewDeptType;
			nIndex=1;
		}

		rs.GetValue(_T("socu"), nTemp); 
		nGroupTotal[0] += nTemp;
		rs.GetValue(_T("vaovien"), nTemp); 
		nGroupTotal[1] += nTemp;
		rs.GetValue(_T("ckden"), nTemp); 
		nGroupTotal[2] += nTemp;
		rs.GetValue(_T("ckdi"), nTemp); 
		nGroupTotal[3] += nTemp;
		rs.GetValue(_T("ravien"), nTemp);
		nGroupTotal[4] += nTemp;
		rs.GetValue(_T("hientai"), nTemp); 
		nGroupTotal[5] += nTemp;
		rs.GetValue(_T("vao_vien_C11"), nTemp); 
		nGroupTotal[6] += nTemp;
		rs.GetValue(_T("vao_vien_AB"), nTemp); 
		nGroupTotal[7] += nTemp;
		rs.GetValue(_T("vao_vien_C12"), nTemp); 
		nGroupTotal[8] += nTemp;
		rs.GetValue(_T("vao_vien_C13tronggio"), nTemp); 
		nGroupTotal[9] += nTemp;
		rs.GetValue(_T("vao_vien_C13ngoaigio"), nTemp); 
		nGroupTotal[10] += nTemp;
		rs.GetValue(_T("vao_vien_TYC"), nTemp); 
		nGroupTotal[11] += nTemp;
		rs.GetValue(_T("vao_vien_TTTM"), nTemp);
		nGroupTotal[12] += nTemp;

		tmpStr.Format(_T("%d"),nIndex++);

		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("dept")), 
			rs.GetValue(_T("socu")), 
			rs.GetValue(_T("vaovien")), 
			rs.GetValue(_T("ckden")), 
			rs.GetValue(_T("ckdi")),
			rs.GetValue(_T("ravien")), 
			rs.GetValue(_T("hientai")), 
			rs.GetValue(_T("vao_vien_C11")),
			rs.GetValue(_T("vao_vien_AB")), 
			rs.GetValue(_T("vao_vien_C12")), 
			rs.GetValue(_T("vao_vien_C13tronggio")),
			rs.GetValue(_T("vao_vien_C13ngoaigio")),
			rs.GetValue(_T("vao_vien_TYC")),
			rs.GetValue(_T("vao_vien_TTTM")), NULL, true);
		rs.MoveNext();
	}

	if(nGroupTotal[0] > 0)
	{
		m_wndList.AddItems(
			_T(""),
			_T("Tổng nhóm"), 
			int2str(nGroupTotal[0]),
			int2str(nGroupTotal[1]),
			int2str(nGroupTotal[2]),
			int2str(nGroupTotal[3]),
			int2str(nGroupTotal[4]),
			int2str(nGroupTotal[5]),
			int2str(nGroupTotal[6]),
			int2str(nGroupTotal[7]),
			int2str(nGroupTotal[8]),
			int2str(nGroupTotal[9]),
			int2str(nGroupTotal[10]),
			int2str(nGroupTotal[11]),
			int2str(nGroupTotal[12]), NULL, true);

		for(int i = 0; i < 13; i++)
		{
			nTotal[i] += nGroupTotal[i];
			nGroupTotal[i] = 0;
		}
	}

	if(nTotal[0] > 0)
	{
		m_wndList.AddItems(
			_T(""),
			_T("Tổng cộng"), 
			int2str(nTotal[0]),
			int2str(nTotal[1]),
			int2str(nTotal[2]),
			int2str(nTotal[3]),
			int2str(nTotal[4]),
			int2str(nTotal[5]),
			int2str(nTotal[6]),
			int2str(nTotal[7]),
			int2str(nTotal[8]),
			int2str(nTotal[9]),
			int2str(nTotal[10]),
			int2str(nTotal[11]),
			int2str(nTotal[12]), NULL, true);
	}

	m_wndList.EndLoad(); 
	return nCount;
}
int CBCQUANSOVAOTOANVIEN::OnAddBCQUANSOTHEONGAY(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCQUANSOVAOTOANVIEN::OnEditBCQUANSOTHEONGAY(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCQUANSOVAOTOANVIEN::OnDeleteBCQUANSOTHEONGAY(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelBCQUANSOTHEONGAY();
 	}
	return 0;
}
int CBCQUANSOVAOTOANVIEN::OnSaveBCQUANSOTHEONGAY(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnBCQUANSOTHEONGAYListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCQUANSOVAOTOANVIEN::OnCancelBCQUANSOTHEONGAY(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CBCQUANSOVAOTOANVIEN::OnBCQUANSOTHEONGAYListLoadData(){
	return 0;
}
CString CBCQUANSOVAOTOANVIEN::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString  szSQL, szWhere;

	//Trang thai dieu tri toan vien
	if (m_nAll == 0)
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_nInPatient == 0)
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_nOutPatient == 0)
		szWhere.AppendFormat(_T(" AND htr_outpatient='Y'"));
	szWhere.AppendFormat(_T(" AND hd_docno NOT IN (SELECT hnr_docno FROM hms_newborn_record)"));
	szSQL.Format(_T(" SELECT sd_category, deptid, HMS_GETALIAS_NAME(deptid) dept, ") \
		_T("   SUM(socu)                                                     AS socu,") \
		_T("   SUM(vaovien)                                                  AS vaovien,") \
		_T("   SUM(vao_vien_ngoai_gio)                                       AS vao_vien_ngoai_gio,") \
		_T("   SUM(vao_vien_C11)                                             AS vao_vien_C11,") \
		_T("   SUM(vao_vien_AB)                                              AS vao_vien_AB,") \
		_T("   SUM(vao_vien_C12)                                             AS vao_vien_C12,") \
		_T("   SUM(vao_vien_C13tronggio)                                     AS vao_vien_C13tronggio,") \
		_T("   SUM(vao_vien_C13ngoaigio)                                     AS vao_vien_C13ngoaigio,") \
		_T("   SUM(vao_vien_TYC)                                             AS vao_vien_TYC,") \
		_T("   SUM(vao_vien_TTTM)                                             AS vao_vien_TTTM,") \
		_T("   SUM(ckden)                                                    AS ckden,") \
		_T("   SUM(ravien+chuyenvien+tuvong+nxv)                             AS ravien,") \
		_T("   SUM(ckdi)                                                     AS ckdi,") \
		_T("   SUM(chuyenvien)                                               AS chuyenvien,") \
		_T("   SUM(tuvong)                                                   AS tuvong,") \
		_T("   SUM(nxv)                                                      AS nxv,") \
		_T("   SUM((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) AS hientai") \
		_T(" FROM") \
		_T("   (SELECT deptid,") \
		_T("     COUNT(DISTINCT hd_docno) AS socu,") \
		_T("     0                        AS vaovien,") \
		_T("     0                        AS vao_vien_ngoai_gio,") \
		_T("     0                        AS vao_vien_C11,") \
		_T("     0                        AS vao_vien_AB,") \
		_T("     0                        AS vao_vien_C12,") \
		_T("     0                        AS vao_vien_C13tronggio,") \
		_T("     0                        AS vao_vien_C13ngoaigio,") \
		_T("     0                        AS vao_vien_TYC,") \
		_T("     0                        AS vao_vien_TTTM,") \
		_T("     0                        AS ckden,") \
		_T("     0                        AS ravien,") \
		_T("     0                        AS ckdi,") \
		_T("     0                        AS chuyenvien,") \
		_T("     0                        AS tuvong,") \
		_T("     0                        AS nxv") \
		_T("   FROM") \
		_T("     (SELECT hd_docno,") \
		_T("       deptid") \
		_T("     FROM") \
		_T("       (SELECT DISTINCT hd_docno,") \
		_T("         hd_object,") \
		_T("         hp_rank,") \
		_T("         trunc_date(htr_admitdate)     AS admitdate,") \
		_T("         trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("         htr_deptid                    AS deptid") \
		_T("       FROM hms_patient") \
		_T("       LEFT JOIN hms_doc") \
		_T("       ON(hd_patientno=hp_patientno)") \
		_T("       LEFT JOIN hms_clinical_record") \
		_T("       ON(hcr_docno=hd_docno)") \
		_T("       LEFT JOIN hms_treatment_record") \
		_T("       ON(htr_docno        =hd_docno)") \
		_T("       WHERE 1 = 1") \
		_T("       AND htr_deptid NOT  IN('A4') %s") \
		_T("       AND htr_status       ='I'") \
		_T("       AND htr_admitdate    < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("       UNION ALL") \
		_T("       SELECT DISTINCT hd_docno,") \
		_T("         hd_object,") \
		_T("         hp_rank,") \
		_T("         trunc_date(htr_admitdate)     AS admitdate,") \
		_T("         trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("         htr_deptid AS deptid") \
		_T("       FROM hms_patient") \
		_T("       LEFT JOIN hms_doc") \
		_T("       ON(hd_patientno=hp_patientno)") \
		_T("       LEFT JOIN hms_clinical_record") \
		_T("       ON(hcr_docno=hd_docno)") \
		_T("       LEFT JOIN hms_treatment_record") \
		_T("       ON(htr_docno           =hd_docno)") \
		_T("       WHERE 1 = 1") \
		_T("       AND htr_deptid NOT    IN('A4') %s") \
		_T("       AND htr_status         ='T'") \
		_T("       AND htr_admitdate      < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("       AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("       )") \
		_T("     )") \
		_T("   GROUP BY deptid") \
		_T("   UNION ALL") \
		_T("   SELECT deptid,") \
		_T("     0                       AS socu,") \
		_T("     SUM(in_qty)             AS vaovien,") \
		_T("     SUM(in_qty_in_shift)    AS vao_vien_ngoai_gio,") \
		_T("     SUM(in_qty_C11)         AS vao_vien_C11,") \
		_T("     SUM(in_qty_AB)          AS vao_vien_AB,") \
		_T("     SUM(in_qty_C12)         AS vao_vien_C12,") \
		_T("     SUM(in_qty_C13tronggio) AS vao_vien_C13tronggio,") \
		_T("     SUM(in_qty_C13ngoaigio) AS vao_vien_C13ngoaigio,") \
		_T("     SUM(in_qty_TYC)         AS vao_vien_TYC,") \
		_T("     SUM(in_qty_TTTM)         AS vao_vien_TTTM,") \
		_T("     SUM(movein_qty)         AS ckden,") \
		_T("     SUM(return_unit)        AS ravien,") \
		_T("     SUM(moveout_qty)        AS ckdi,") \
		_T("     SUM(transfer_qty)       AS chuyenvien,") \
		_T("     SUM(dead)               AS tuvong,") \
		_T("     SUM(nxv)                AS nxv") \
		_T("   FROM") \
		_T("    (SELECT htr_deptid     AS deptid,") \
		_T("       TRUNC(htr_admitdate) AS admit_date,") \
		_T("       1                    AS in_qty,") \
		_T("       CASE") \
		_T("         WHEN hms_shift_check(htr_admitdate, '16:30', '06:30') > 0") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS in_qty_in_shift,") \
		_T("       CASE") \
		_T("         WHEN hd_enddept = 'C1.1'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS in_qty_C11,") \
		_T("       CASE") \
		_T("         WHEN hd_enddept = 'AB'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS in_qty_AB,") \
		_T("       CASE") \
		_T("         WHEN hd_enddept = 'C1.2'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS in_qty_C12,") \
		_T("       CASE") \
		_T("         WHEN hd_enddept                                      = 'C1.3'") \
		_T("         AND hms_shift_check(htr_admitdate, '16:30', '06:30') = 0") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS in_qty_C13tronggio,") \
		_T("       CASE") \
		_T("         WHEN hd_enddept                                      = 'C1.3'") \
		_T("         AND hms_shift_check(htr_admitdate, '16:30', '06:30') > 0") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS in_qty_C13ngoaigio,") \
		_T("       CASE") \
		_T("         WHEN hd_enddept = 'TYC'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS in_qty_TYC,") \
		_T("       CASE") \
		_T("         WHEN hd_enddept = 'TTTM'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS in_qty_TTTM,") \
		_T("       0   AS movein_qty,") \
		_T("       0   AS return_unit,") \
		_T("       0   AS moveout_qty,") \
		_T("       0   AS transfer_qty,") \
		_T("       0   AS dead,") \
		_T("       0   AS nxv") \
		_T("     FROM hms_doc") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno=hd_docno)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON ( hcr_docno    = hd_docno)") \
		_T("     WHERE 1 = 1 %s") \
		//_T("	 AND htr_status      <> 'A' %s") \//		
		_T("     AND hcr_admitdept    =htr_deptid") \
		_T("     AND hcr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     UNION ALL") \
		_T("     SELECT htr_deptid,") \
		_T("       TRUNC(htr_admitdate) AS admit_date,") \
		_T("       0                    AS in_qty,") \
		_T("       0                    AS in_qty_in_shift,") \
		_T("       0                    AS in_qty_C11,") \
		_T("       0                    AS in_qty_AB,") \
		_T("       0                    AS in_qty_C12,") \
		_T("       0                    AS in_qty_C13tronggio,") \
		_T("       0                    AS in_qty_C13ngoaigio,") \
		_T("       0                    AS in_qty_TYC,") \
		_T("       0                    AS in_qty_TTTM,") \
		_T("       1                    AS movein_qty,") \
		_T("       0                    AS return_unit,") \
		_T("       0                    AS moveout_qty,") \
		_T("       0                    AS transfer_qty,") \
		_T("       0                    AS dead,") \
		_T("       0                    AS nxv") \
		_T("     FROM hms_doc") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno=hd_docno)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON ( hcr_docno       = hd_docno )") \
		_T("     WHERE 1 = 1") \
		_T("     AND htr_status      <> 'A' %s") \
		_T("     AND htr_idx          > 1") \
		_T("     AND hcr_admitdept   <>htr_deptid") \
		_T("     AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     UNION ALL") \
		_T("     SELECT htr_deptid,") \
		_T("       TRUNC(htr_admitdate) AS admit_date,") \
		_T("       0                    AS in_qty,") \
		_T("       0                    AS in_qty_in_shift,") \
		_T("       0                    AS in_qty_C11,") \
		_T("       0                    AS in_qty_AB,") \
		_T("       0                    AS in_qty_C12,") \
		_T("       0                    AS in_qty_C13tronggio,") \
		_T("       0                    AS in_qty_C13ngoaigio,") \
		_T("       0                    AS in_qty_TYC,") \
		_T("       0                    AS in_qty_TTTM,") \
		_T("       0                    AS movein_qty,") \
		_T("       CASE") \
		_T("         WHEN htr_suggestion NOT IN('M','F')") \
		_T("         AND hcr_result NOT      IN ( 4, 5, 6,7 )") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS return_unit,") \
		_T("       0   AS moveout_qty,") \
		_T("       CASE") \
		_T("         WHEN htr_suggestion = 'F'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS transfer_qty,") \
		_T("       CASE") \
		_T("         WHEN htr_suggestion = 'T'") \
		_T("         AND hcr_result     IN ( 5, 6 )") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS dead,") \
		_T("       CASE") \
		_T("         WHEN htr_suggestion = 'T'") \
		_T("         AND hcr_result     IN ( 4, 7 )") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS nxv") \
		_T("     FROM hms_doc") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno=hd_docno)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON ( hcr_docno       = hd_docno )") \
		_T("     WHERE 1 = 1") \
		_T("     AND htr_status       = 'T' %s") \
		_T("     AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     UNION ALL") \
		_T("     SELECT htr_deptid,") \
		_T("       TRUNC(htr_dischargedate) AS admit_date,") \
		_T("       0                        AS in_qty,") \
		_T("       0                        AS in_qty_in_shift,") \
		_T("       0                        AS in_qty_C11,") \
		_T("       0                        AS in_qty_AB,") \
		_T("       0                        AS in_qty_C12,") \
		_T("       0                        AS in_qty_C13tronggio,") \
		_T("       0                        AS in_qty_C13ngoaigio,") \
		_T("       0                        AS in_qty_TYC,") \
		_T("       0                        AS in_qty_TTTM,") \
		_T("       0                        AS movein_qty,") \
		_T("       0                        AS return_unit,") \
		_T("       1                        AS moveout_qty,") \
		_T("       0                        AS transfer_qty,") \
		_T("       0                        AS dead,") \
		_T("       0                        AS nxv") \
		_T("     FROM hms_doc") \
		_T("     LEFT JOIN hms_treatment_record") \
		_T("     ON(htr_docno=hd_docno)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON ( hcr_docno       = hd_docno )") \
		_T("     WHERE 1 = 1") \
		_T("     AND ( htr_suggestion ='M') %s") \
		_T("     AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     )") \
		_T("   GROUP BY deptid") \
		_T("   ) Tbl") \
		_T("   LEFT JOIN sys_dept") \
		_T("   ON(deptid = sd_id) WHERE sd_isactive = 'Y' ") \
		_T("   GROUP BY sd_category, deptid, hms_getalias_name(deptid)") \
		_T("   ORDER BY sd_category, deptid, hms_getalias_name(deptid)"),  szWhere,m_szFromDate,
		szWhere,m_szFromDate,m_szFromDate,
		szWhere,m_szFromDate,m_szToDate,
		szWhere,m_szFromDate,m_szToDate,
		szWhere,m_szFromDate,m_szToDate,
		szWhere,m_szFromDate,m_szToDate);
	_fmsg(_T("szSQL: %s"), szSQL);
	return szSQL;
}