#include "DuLieuBaoCaoKhoaHoc.h"
#include "HMSMainFrame.h"
#include "StringToken.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CDuLieuBaoCaoKhoaHoc *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CDuLieuBaoCaoKhoaHoc *pVw = (CDuLieuBaoCaoKhoaHoc *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnFormatSelectFnc(CWnd* pWnd) {
	CDuLieuBaoCaoKhoaHoc* pVw = (CDuLieuBaoCaoKhoaHoc*)pWnd;
	pVw->OnFormatSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CDuLieuBaoCaoKhoaHoc*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CDuLieuBaoCaoKhoaHoc*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CDuLieuBaoCaoKhoaHoc*)pWnd)->OnOutPatientSelect();
}
static void _OnDrugSelectFnc(CWnd *pWnd){
	 ((CDuLieuBaoCaoKhoaHoc*)pWnd)->OnDrugSelect();
}
static int _OnAddDuLieuBaoCaoKhoaHocFnc(CWnd *pWnd){
	 return ((CDuLieuBaoCaoKhoaHoc*)pWnd)->OnAddDuLieuBaoCaoKhoaHoc();
} 
static int _OnEditDuLieuBaoCaoKhoaHocFnc(CWnd *pWnd){
	 return ((CDuLieuBaoCaoKhoaHoc*)pWnd)->OnEditDuLieuBaoCaoKhoaHoc();
} 
static int _OnDeleteDuLieuBaoCaoKhoaHocFnc(CWnd *pWnd){
	 return ((CDuLieuBaoCaoKhoaHoc*)pWnd)->OnDeleteDuLieuBaoCaoKhoaHoc();
} 
static int _OnSaveDuLieuBaoCaoKhoaHocFnc(CWnd *pWnd){
	 return ((CDuLieuBaoCaoKhoaHoc*)pWnd)->OnSaveDuLieuBaoCaoKhoaHoc();
} 
static int _OnCancelDuLieuBaoCaoKhoaHocFnc(CWnd *pWnd){
	 return ((CDuLieuBaoCaoKhoaHoc*)pWnd)->OnCancelDuLieuBaoCaoKhoaHoc();
} 
CDuLieuBaoCaoKhoaHoc::CDuLieuBaoCaoKhoaHoc(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CDuLieuBaoCaoKhoaHoc::~CDuLieuBaoCaoKhoaHoc(){
}
void CDuLieuBaoCaoKhoaHoc::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 4, 475, 295);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this, 95, 29, 215, 54);
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this, 305, 30, 470, 55);
	m_wndDocumentNoLabel.Create(this, _T("DocumentNo"), 10, 90, 90, 115);
	m_wndDocumentNo.Create(this, 95, 90, 470, 290);
	m_wndExport.Create(this, _T("&Export"), 395, 300, 475, 325);
	m_wndAll.Create(this, _T("All"), 95, 60, 175, 85);
	m_wndInPatient.Create(this, _T("InPatient"), 180, 60, 260, 85);
	m_wndOutPatient.Create(this, _T("OutPatient"), 265, 60, 345, 85);
	m_wndDrug.Create(this, _T("Drug"), 10, 60, 90, 85);
	m_wndFormat.Create(this, _T("Format"), 10, 120, 90, 145);

}
void CDuLieuBaoCaoKhoaHoc::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);

}
void CDuLieuBaoCaoKhoaHoc::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);	
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndDrug.SetEvent(WE_CLICK, _OnDrugSelectFnc);
	m_wndFormat.SetEvent(WE_CLICK, _OnFormatSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(FALSE);

}
void CDuLieuBaoCaoKhoaHoc::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Check(pDX, m_wndDrug.GetDlgCtrlID(), m_bDrug);

}
void CDuLieuBaoCaoKhoaHoc::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("All")] =  m_nAll;
	m_jData[_T("InPatient")] =  m_nInPatient;
	m_jData[_T("OutPatient")] =  m_nOutPatient;
	m_jData[_T("Drug")] =  m_bDrug;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("All")].GetValue(m_nAll);
	m_jData[_T("InPatient")].GetValue(m_nInPatient);
	m_jData[_T("OutPatient")].GetValue(m_nOutPatient);
	m_jData[_T("Drug")].GetValue(m_bDrug);
	}

}
void CDuLieuBaoCaoKhoaHoc::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CDuLieuBaoCaoKhoaHoc::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CDuLieuBaoCaoKhoaHoc::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDocumentNo=0;
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;
	m_bDrug=FALSE;

}
int CDuLieuBaoCaoKhoaHoc::SetMode(int nMode){
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
/*void CDuLieuBaoCaoKhoaHoc::OnFromDateChange(){
	
} */
/*void CDuLieuBaoCaoKhoaHoc::OnFromDateSetfocus(){
	
} */
/*void CDuLieuBaoCaoKhoaHoc::OnFromDateKillfocus(){
	
} */
int CDuLieuBaoCaoKhoaHoc::OnFromDateCheckValue(){
	return 0;
} 
/*void CDuLieuBaoCaoKhoaHoc::OnToDateChange(){
	
} */
/*void CDuLieuBaoCaoKhoaHoc::OnToDateSetfocus(){
	
} */
/*void CDuLieuBaoCaoKhoaHoc::OnToDateKillfocus(){
	
} */
int CDuLieuBaoCaoKhoaHoc::OnToDateCheckValue(){
	return 0;
} 
/*void CDuLieuBaoCaoKhoaHoc::OnDocumentNoChange(){
	
} */
/*void CDuLieuBaoCaoKhoaHoc::OnDocumentNoSetfocus(){
	
} */
/*void CDuLieuBaoCaoKhoaHoc::OnDocumentNoKillfocus(){
	
} */
int CDuLieuBaoCaoKhoaHoc::OnDocumentNoCheckValue(){
	return 0;
} 
void CDuLieuBaoCaoKhoaHoc::OnExportSelect(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL1, szSQL2, tmpStr, szSQL, szIndexQuery, szResultQuery, szOldItem, szNewItem, szRoomQuery;
	CRecord rs(&pMF->m_db);
	
	BeginWaitCursor();
	if (m_wndDrug.GetCheck() == 1) {
		GetDrugQueryString(szSQL1);

		// Thực thi query đầu tiên để lấy thông tin thuốc
		int nCount = rs.ExecSQL(szSQL1);
		if (nCount <= 0)
		{
			ShowMessage(150, MB_ICONSTOP);
			return;
		}

		// Tạo sheet Excel và thêm headers
		CExcel xls;
		xls.CreateSheet(0);
		// Thiết lập header
		xls.SetCellMergedColumns(0, 0, 20);
		xls.SetCellMergedColumns(0, 1, 20);
		xls.SetCellMergedColumns(0, 2, 20);
		xls.SetColumnWidth(2, 20);
		xls.SetColumnWidth(3, 10);
		xls.SetColumnWidth(4, 10);
		xls.SetColumnWidth(7, 30);
		xls.SetColumnWidth(15, 20);
		xls.SetColumnWidth(17, 30);

		xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);

		xls.SetCellText(0, 3, L"DANH SÁCH BỆNH NHÂN SỬ DỤNG THUỐC", FMT_TEXT | FMT_CENTER, true, 16);

		CString szTemp;
		szTemp.Format(_T("Từ ngày: %s đến ngày: %s"),
			CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
			CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
		xls.SetCellText(0, 4, szTemp, FMT_TEXT | FMT_CENTER, true);

		// Headers cho các cột
		int nRow = 5, nCol = 0;
		xls.SetCellText(nCol++, nRow, L"STT", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Mã BN", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Họ và tên", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Ngày sinh", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Ngày y lệnh", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Mã ICD", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Mã thuốc", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Tên thuốc", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Hàm lượng", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Dạng bào chế", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Đường dùng", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Đóng gói", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"SL", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Đơn giá", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Thành tiền", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Bác sĩ", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Khoa", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		xls.SetCellText(nCol++, nRow, L"Chẩn đoán", FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

		// Đổ dữ liệu
		int nIndex = 1;
		nRow = 6;
		while (!rs.IsEOF())
		{
			nCol = 0;
			xls.SetCellText(nCol++, nRow, int2str(nIndex++), FMT_INTEGER);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("patient_no")), FMT_TEXT);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("pname")), FMT_TEXT);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("birth_date")), FMT_DATE);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("order_date")), FMT_DATE);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("icd")), FMT_TEXT);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("product_id")), FMT_TEXT);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("product_name")), FMT_TEXT);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("hamluong")), FMT_TEXT);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("uom")), FMT_TEXT);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("duongdung")), FMT_TEXT);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("donggoi")), FMT_TEXT);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("qty")), FMT_NUMBER1);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("unit_price")), FMT_NUMBER1);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("amount")), FMT_NUMBER1);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("doctor_name")), FMT_TEXT);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("dept_name")), FMT_TEXT);
			xls.SetCellText(nCol++, nRow, rs.GetValue(_T("diagnosis")), FMT_TEXT);

			nRow++;
			rs.MoveNext();
		}

		xls.Save(_T("Exports\\DSBenhNhanSuDungThuoc.xls"));
		EndWaitCursor();
	}
	else
	{
		GetQueryString_v2(szIndexQuery, szResultQuery);

		int nCount = rs.ExecSQL(szIndexQuery), nRow = 0, nCol = 12, nIndex = 1;
		_tprintf(_T("1: %s"), szIndexQuery);
		if (nCount <= 0)
		{
			ShowMessage(150, MB_ICONSTOP);
			return;
		}
		CExcel xls;
		if (!xls.Load(_T("Exports\\Template\\Mau_ChiTietKetQuaKhamBenh.xls")))
		{
			return;
		}
		xls.SetWorksheet(0);
		tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
		xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
		nRow = 4;
		while (!rs.IsEOF())
		{
			if (rs.GetValue(_T("has_fee")) == _T("N"))
			{
				rs.GetValue(_T("fee_parent"), szNewItem);
				if (szNewItem != szOldItem)
				{
					xls.SetCellText(nCol, nRow, szNewItem, FMT_TEXT, true);
					xls.SetCellMergedColumns(nCol, nRow, str2int(rs.GetValue(_T("index_count"))));
					szOldItem = szNewItem;
				}
				xls.SetCellText(nCol, nRow + 1, rs.GetValue(_T("fee_name")), FMT_TEXT);
			}
			else
			{
				xls.SetCellText(nCol, nRow, rs.GetValue(_T("fee_name")), FMT_TEXT, true);
			}
			nCol++;
			rs.MoveNext();
		}

		nRow = 6;
		rs.ExecSQL(szResultQuery);
		_tprintf(_T("2: %s"), szResultQuery);
		while (!rs.IsEOF())
		{
			nCol = 2;
			xls.SetCellText(0, nRow, int2str(nIndex++), FMT_TEXT);
			for (int i = 0; i < rs.GetFieldCount(); i++)
			{
				xls.SetCellText(nCol, nRow, rs.GetValue(i), FMT_TEXT);
				nCol++;
			}
			nRow++;
			rs.MoveNext();
		}
		EndWaitCursor();
		xls.Save(_T("Exports\\ChiTietKetQuaKhamBenh.xls"));
	}
	EndWaitCursor();
}
void CDuLieuBaoCaoKhoaHoc::OnAllSelect(){
	m_nAll = 0;
    m_nInPatient = 1;
    m_nOutPatient = 1;
    UpdateData(FALSE);
}
void CDuLieuBaoCaoKhoaHoc::OnInPatientSelect(){
	m_nAll = 1;
    m_nInPatient = 0;
    m_nOutPatient = 1;
    UpdateData(FALSE);
}
void CDuLieuBaoCaoKhoaHoc::OnOutPatientSelect(){
	m_nAll = 1;
    m_nInPatient = 1;
    m_nOutPatient = 0;
    UpdateData(FALSE);
}
	void CDuLieuBaoCaoKhoaHoc::OnDrugSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CDuLieuBaoCaoKhoaHoc::OnAddDuLieuBaoCaoKhoaHoc(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CDuLieuBaoCaoKhoaHoc::OnEditDuLieuBaoCaoKhoaHoc(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CDuLieuBaoCaoKhoaHoc::OnDeleteDuLieuBaoCaoKhoaHoc(){
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
 		OnCancelDuLieuBaoCaoKhoaHoc();
 	}
	return 0;
}
int CDuLieuBaoCaoKhoaHoc::OnSaveDuLieuBaoCaoKhoaHoc(){
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
 		//OnDuLieuBaoCaoKhoaHocListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CDuLieuBaoCaoKhoaHoc::OnCancelDuLieuBaoCaoKhoaHoc(){
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
int CDuLieuBaoCaoKhoaHoc::OnDuLieuBaoCaoKhoaHocListLoadData(){
	return 0;
}

void CDuLieuBaoCaoKhoaHoc::GetQueryString_v2(CString& index_query, CString& result_query)
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szWhere, szCompanys, szIndexes, szRooms;
	szIndexes.Empty();

	szWhere.AppendFormat(_T(" AND order_date between To_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);

	if (m_nInPatient == 0)
		szWhere.AppendFormat(_T(" AND dept_id IN (SELECT sd_id FROM sys_dept WHERE sd_type = 'DT' and sd_isactive = 'Y')"));
	if (m_nOutPatient == 0)
		szWhere.AppendFormat(_T(" AND dept_id IN (SELECT sd_id FROM sys_dept WHERE sd_type = 'KB' and sd_isactive = 'Y')"));
	if (!m_szDocumentNo.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_docno IN (%s)"), m_szDocumentNo);

	index_query.Format(_T("SELECT DISTINCT hfl_line,") \
		_T("          hfl_feeid as fee_id, has_fee, hfl_subitem, hfl_name AS fee_name,") \
		_T("          CASE WHEN has_fee = 'Y' THEN hfl_name ELSE (SELECT hfl_name FROM hms_fee_list WHERE hfl_feeid = ol.hfl_subitem) END AS fee_parent,") \
		_T("          Count(DISTINCT hfl_feeid) OVER (PARTITION BY Decode(Substr(hfl_subitem, 1, 1), 'B', hfl_subitem, hfl_feeid)) AS index_count") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
		_T(" LEFT JOIN HMS_PARA_RESULT_VIEW_NEWEST ON (hd_docno = doc_no)") \
		_T(" LEFT JOIN hms_fee_list ol ON (hfl_feeid = item_id)") \
		_T(" WHERE para_result IS NOT NULL %s") \
		_T(" ORDER BY Decode(Substr(hfl_subitem, 1, 1), 'B', hfl_subitem, hfl_feeid), hfl_line"), szWhere);

	rs.ExecSQL(index_query);
	while (!rs.IsEOF())
	{
		if (!szIndexes.IsEmpty())
			szIndexes += _T(",");
		szIndexes.AppendFormat(_T("'%s'"), rs.GetValue(_T("fee_id")));
		rs.MoveNext();
	}

	result_query.Format(_T("SELECT *") \
		_T(" FROM   (SELECT doc_no,") \
		_T("               get_patientname(doc_no) as patient_name,") \
		_T("               to_char(hp_birthdate, 'dd/mm/yyyy') as birth_date,") \
		_T("               hms_getage(hd_admitdate, hp_birthdate) as tuoi,") \
		_T("               to_char(order_date, 'dd/mm/yyyy') as order_date,") \
		_T("               CASE") \
		_T("                 WHEN he_height > 0 AND he_weight > 0 THEN") \
		_T("                   ROUND(he_weight/POWER(he_height/100, 2), 1)") \
		_T("                 ELSE NULL") \
		_T("               END as bmi,") \
		_T("               he_height,") \
		_T("               he_weight,") \
		_T("               hd_icd,") \
		_T("               hms_geticdname(hd_icd) as icdname,") \
		_T("               hd_conclusion,") \
		_T("               item_id,") \
		_T("               para_result") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
		_T(" LEFT JOIN hms_exam ON (hd_docno = he_docno)") \
		_T(" LEFT JOIN HMS_PARA_RESULT_VIEW_NEWEST ON (hd_docno = doc_no)") \
		_T(" WHERE para_result IS NOT NULL %s)") \
		_T(" PIVOT (") \
		_T("   MAX(para_result) FOR item_id IN (%s)") \
		_T(" )") \
		_T(" ORDER BY order_date, doc_no"), szWhere, szIndexes);
}

void CDuLieuBaoCaoKhoaHoc::GetDrugQueryString(CString& index_query, CString& result_query)
{
    CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szWhere, szProducts;
    szProducts.Empty();

    // Điều kiện cơ bản
    szWhere.Format(_T(" AND hpo_orderdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), 
        m_szFromDate, m_szToDate);

    // Thêm điều kiện lọc theo loại bệnh nhân
    if (m_nInPatient == 1)
    {
        szWhere.AppendFormat(_T(" AND hpo_deptid IN (SELECT DISTINCT sd_id FROM sys_dept WHERE sd_type IN ('I'))"));
    }
    else if (m_nOutPatient == 1)
    {
        szWhere.AppendFormat(_T(" AND hpo_deptid IN (SELECT DISTINCT sd_id FROM sys_dept WHERE sd_type IN ('E'))"));
    }

    // Query 1: Lấy danh sách các thuốc đã kê
    index_query.Format(_T(" SELECT DISTINCT") \
        _T("   hpol_product_id as product_id,") \
        _T("   hpol_productname as product_name,") \
        _T("   mp_name2 as hamluong,") \
        _T("   mp_producttype as product_type,") \
        _T("   mp_value as duongdung,") \
        _T("   mp_specification as donggoi") \
        _T(" FROM hms_pharmaorder") \
        _T(" LEFT JOIN hms_pharmaorderline_view ON (hpo_orderid = hpol_orderid)") \
        _T(" LEFT JOIN m_product ON (hpol_product_id = mp_product_id)") \
        _T(" WHERE 1=1 %s") \
        _T(" ORDER BY hpol_product_id"), szWhere);

    // Thực thi query 1 để lấy danh sách thuốc
    rs.ExecSQL(index_query);
    while (!rs.IsEOF())
    {
        if (!szProducts.IsEmpty())
        {
            szProducts += _T(",");
        }
        szProducts.AppendFormat(_T("'%s'"), rs.GetValue(_T("product_id")));
        rs.MoveNext();
    }

    // Query 2: Lấy thông tin bệnh nhân và pivot dữ liệu thuốc
    result_query.Format(_T(" SELECT *") \
        _T(" FROM (") \
        _T("   SELECT") \
        _T("     hd_docno AS hd_docno,") \
        _T("     get_patientname(hd_docno) AS patient_name,") \
        _T("     to_char(hp_birthdate, 'dd/mm/yyyy') AS birth_date,") \
        _T("     to_char(hpo_orderdate, 'dd/mm/yyyy hh24:mi:ss') AS order_date,") \
        _T("     hd_icd AS icd,") \
        _T("     hd_xicd AS other_icd,") \
        _T("     hd_diagnostic AS diagnosis,") \
        _T("     su_name AS doctor_name,") \
        _T("     sd_name AS dept_name,") \
        _T("     hpol_product_id AS product_id,") \
        _T("     CAST(hpol_qtyorder AS VARCHAR2(20))||'/'||") \
        _T("     CAST(hpol_unitprice AS VARCHAR2(20))||'/'||") \
        _T("     CAST(hpol_qtyorder * hpol_unitprice AS VARCHAR2(20))||'/'||") \
        _T("     hpol_dosage AS drug_info") \
        _T("   FROM hms_pharmaorder") \
        _T("   LEFT JOIN hms_pharmaorderline_view ON (hpo_orderid = hpol_orderid)") \
        _T("   LEFT JOIN hms_doc ON (hpo_docno = hd_docno)") \
        _T("   LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
        _T("   LEFT JOIN sys_user ON (hpo_doctorindex = su_userid)") \
        _T("   LEFT JOIN sys_dept ON (hpo_deptid = sd_id)") \
        _T("   WHERE 1=1 %s") \
        _T(" ) PIVOT (") \
        _T("   MAX(drug_info)") \
        _T("   FOR product_id IN (%s)") \
        _T(" )") \
        _T(" ORDER BY order_date, patient_no"), 
        szWhere, szProducts);
	
}

void CDuLieuBaoCaoKhoaHoc::GetDrugQueryString(CString& szSQL)
{
	szSQL.Format(_T(" SELECT ") \
		_T("   hd_docno AS patient_no,") \
		_T("   get_patientname(hd_docno) AS pname,") \
		_T("   to_char(hp_birthdate, 'dd/mm/yyyy') AS birth_date,") \
		_T("   to_char(hpo_orderdate, 'dd/mm/yyyy') AS order_date,") \
		_T("   hd_icd AS icd,") \
		_T("   hpol_product_id AS product_id,") \
		_T("   hpol_productname AS product_name,") \
		_T("   mp_name2 AS hamluong,") \
		_T("   hpol_productuom AS uom,") \
		_T("   mp_value AS duongdung,") \
		_T("   mp_specification AS donggoi,") \
		_T("   SUM(hpol_qtyorder)                   AS qty, ") \
		_T("   AVG(hpol_unitprice)                  AS unit_price, ") \
		_T("   SUM(hpol_qtyorder * hpol_unitprice)  AS amount,") \
		_T("   get_username(hpo_doctor) AS doctor_name,") \
		_T("	hpo_deptid AS dept_name,") \
		_T("   hd_diagnostic AS diagnosis") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline_view ON (hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN hms_doc ON (hpo_docno = hd_docno)") \
		_T(" LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
		_T(" LEFT JOIN m_product ON (hpol_product_id = mp_product_id)") \
		_T(" WHERE mp_org_id = 'PM' AND hpo_orderdate BETWEEN to_timestamp('%s','yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s','yyyy/mm/dd hh24:mi:ss')"),
		m_szFromDate, m_szToDate);

	// Thêm điều kiện lọc theo loại bệnh nhân nếu có chọn
	
	if (m_nInPatient == 0)
		szSQL.AppendFormat(_T(" AND hpo_deptid IN (SELECT sd_id FROM sys_dept WHERE sd_type = 'DT' and sd_isactive = 'Y')"));
	if (m_nOutPatient == 0)
		szSQL.AppendFormat(_T(" AND hpo_deptid IN (SELECT sd_id FROM sys_dept WHERE sd_type = 'KB' and sd_isactive = 'Y')"));
	if(!m_szDocumentNo.IsEmpty())
		szSQL.AppendFormat(_T(" AND hd_docno IN (%s)"), m_szDocumentNo);

	szSQL.AppendFormat(_T(" GROUP BY ") \
		_T(" hd_docno, hp_birthdate, hpo_orderdate, hd_icd, hpol_product_id, ") \
		_T(" hpol_productname, mp_name2, hpol_productuom, mp_value, mp_specification, ") \
		_T(" get_username(hpo_doctor), hpo_deptid, hd_diagnostic ") \
		_T(" ORDER BY ") \
		_T(" hpo_orderdate, hd_docno"));
}

void CDuLieuBaoCaoKhoaHoc::OnFormatSelect() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szInput, szStr, tmpStr, szFormat;
	UpdateData(true);
	szInput = m_szDocumentNo;
	CStringToken st(szInput, _T("\r\n"));
	for (int i = 0; i < st.GetSize(); i++) {
		st.GetAt(i, tmpStr);
		if (!szStr.IsEmpty())
			szFormat = _T(",");
		//if (m_bImportMaLk)
			//szStr.AppendFormat(_T("%s'%s'"), szFormat, tmpStr);
		//else
			szStr.AppendFormat(_T("%s%s"), szFormat, tmpStr);
	}

	m_szDocumentNo = szStr;
	UpdateData(false);


}