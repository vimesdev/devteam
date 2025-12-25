#include "stdafx.h"
#include "FMTongHopThuQuaNganHang.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTongHopThuQuaNganHang *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMTongHopThuQuaNganHang *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMTongHopThuQuaNganHang* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMTongHopThuQuaNganHang *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMTongHopThuQuaNganHang *pVw = (CFMTongHopThuQuaNganHang *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMTongHopThuQuaNganHang *pVw = (CFMTongHopThuQuaNganHang *)pWnd;
	pVw->OnExportSelect();
}
static void _OnTYCSelectFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang*)pWnd)->OnTYCSelect();
}
static void _OnPTTYCSelectFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang*)pWnd)->OnPTTYCSelect();
}
static void _OnALLSelectFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang*)pWnd)->OnALLSelect();
}
static void _OnCancelInvoiceSelectFnc(CWnd *pWnd){
	((CFMTongHopThuQuaNganHang*)pWnd)->OnCancelInvoiceSelect();
}
static int _OnAddFMTongHopThuQuaNganHangFnc(CWnd *pWnd){
	 return ((CFMTongHopThuQuaNganHang*)pWnd)->OnAddFMTongHopThuQuaNganHang();
} 
static int _OnEditFMTongHopThuQuaNganHangFnc(CWnd *pWnd){
	 return ((CFMTongHopThuQuaNganHang*)pWnd)->OnEditFMTongHopThuQuaNganHang();
} 
static int _OnDeleteFMTongHopThuQuaNganHangFnc(CWnd *pWnd){
	 return ((CFMTongHopThuQuaNganHang*)pWnd)->OnDeleteFMTongHopThuQuaNganHang();
} 
static int _OnSaveFMTongHopThuQuaNganHangFnc(CWnd *pWnd){
	 return ((CFMTongHopThuQuaNganHang*)pWnd)->OnSaveFMTongHopThuQuaNganHang();
} 
static int _OnCancelFMTongHopThuQuaNganHangFnc(CWnd *pWnd){
	 return ((CFMTongHopThuQuaNganHang*)pWnd)->OnCancelFMTongHopThuQuaNganHang();
} 
CFMTongHopThuQuaNganHang::CFMTongHopThuQuaNganHang(CWnd *pParent){

	m_nDlgWidth = 500;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFMTongHopThuQuaNganHang::~CFMTongHopThuQuaNganHang(){
}
void CFMTongHopThuQuaNganHang::OnCreateComponents()
{
	m_wndRefundbyDepartment.Create(this, _T("Refund by Department"), 5, 5, 430, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 60, 90, 85);
	m_wndClerk.Create(this,95, 60, 425, 85); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 265, 95, 345, 120);
	m_wndExport.Create(this, _T("&Export"), 350, 95, 430, 120);
	m_wndTYC.Create(this, _T("TYC"), 10, 95, 80, 120);
	m_wndPTTYC.Create(this, _T("PTTYC"), 85, 95, 155, 120);
	m_wndALL.Create(this, _T("Tất cả"), 160, 95, 230, 120);
	m_wndCancelInvoice.Create(this, _T("Lọc hủy thẻ"), 10, 125, 120, 150);

}

void CFMTongHopThuQuaNganHang::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(35);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndClerk.InsertColumn(1, _T("Description"), CFMT_TEXT, 270);

}
void CFMTongHopThuQuaNganHang::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndTYC.SetEvent(WE_CLICK, _OnTYCSelectFnc);
	m_wndPTTYC.SetEvent(WE_CLICK, _OnPTTYCSelectFnc);
	m_wndALL.SetEvent(WE_CLICK, _OnALLSelectFnc);
	m_wndCancelInvoice.SetEvent(WE_CLICK, _OnCancelInvoiceSelectFnc);
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
}
void CFMTongHopThuQuaNganHang::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndTYC.GetDlgCtrlID(), m_bTYC);
	DDX_Check(pDX, m_wndPTTYC.GetDlgCtrlID(), m_bPTTYC);
	DDX_Check(pDX, m_wndALL.GetDlgCtrlID(), m_bALL);
	DDX_Check(pDX, m_wndCancelInvoice.GetDlgCtrlID(), m_bCancelInvoice);

}
void CFMTongHopThuQuaNganHang::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMTongHopThuQuaNganHang::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMTongHopThuQuaNganHang::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bTYC=FALSE;
	m_bPTTYC=FALSE;
	m_bALL=FALSE;
	m_bCancelInvoice=FALSE;

}
int CFMTongHopThuQuaNganHang::SetMode(int nMode){
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
/*void CFMTongHopThuQuaNganHang::OnFromDateChange(){
	
} */
/*void CFMTongHopThuQuaNganHang::OnFromDateSetfocus(){
	
} */
/*void CFMTongHopThuQuaNganHang::OnFromDateKillfocus(){
	
} */
int CFMTongHopThuQuaNganHang::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMTongHopThuQuaNganHang::OnToDateChange(){
	
} */
/*void CFMTongHopThuQuaNganHang::OnToDateSetfocus(){
	
} */
/*void CFMTongHopThuQuaNganHang::OnToDateKillfocus(){
	
} */
int CFMTongHopThuQuaNganHang::OnToDateCheckValue(){
	return 0;
} 
void CFMTongHopThuQuaNganHang::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTongHopThuQuaNganHang::OnClerkSelendok(){
	 
}
/*void CFMTongHopThuQuaNganHang::OnClerkSetfocus(){
	
}*/
/*void CFMTongHopThuQuaNganHang::OnClerkKillfocus(){
	
}*/
long CFMTongHopThuQuaNganHang::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty())
	{
		szWhere.Format(_T(" and lower(su_userid)=lower('%s') "), m_szClerkKey);
	};
	m_wndClerk.DeleteAllItems(); 
	szSQL.Format(_T("SELECT su_userid as userid, su_name as name FROM sys_user WHERE su_groupid in('A', 'F') %s ORDER BY su_userid"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
			rs.GetValue(_T("userid")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMTongHopThuQuaNganHang::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMTongHopThuQuaNganHang::OnTYCSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bTYC)
			{
				m_bPTTYC = FALSE;
				m_bALL = FALSE;
			}
	
	UpdateData(FALSE);
}
void CFMTongHopThuQuaNganHang::OnPTTYCSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bPTTYC)
		{
			m_bTYC = FALSE;
			m_bALL = FALSE;
		}

	UpdateData(FALSE);
}
void CFMTongHopThuQuaNganHang::OnALLSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bALL)
		{
			m_bTYC = FALSE;
			m_bPTTYC = FALSE;
		}

	UpdateData(FALSE);
} 
void CFMTongHopThuQuaNganHang::OnCancelInvoiceSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMTongHopThuQuaNganHang::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szSysDate;
	int nIdx = 1;
	double nAmount = 0, nTotal = 0;
	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	if (!rpt.Init(_T("Reports/HMS/HF_BAOCAOTONGHOPTHUQUANGANHANG.rpt")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail;
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		rptDetail->SetValue(_T("1"), int2str(nIdx++));

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("hfib_docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("hfib_receiptno"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("hfe_date"), tmpStr);
		rptDetail->SetValue(_T("5"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		rs.GetValue(_T("hfib_posno"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("hfe_payment"), tmpStr);
		nTotal += str2double(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.MoveNext();
	}

	if(nTotal > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->SetValue(_T("s7"), double2str(nTotal));
		}

	szTemp.Format(_T("%2.f"), nTotal);
	MoneyToString(szTemp, tmpStr);
	tmpStr += _T(" đồng.");
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CFMTongHopThuQuaNganHang::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	double nTotal = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 26);	xls.SetColumnWidth(2, 13);	xls.SetColumnWidth(3, 17);	xls.SetColumnWidth(4, 17);	xls.SetColumnWidth(5, 17);	xls.SetColumnWidth(6, 17);	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);		xls.SetCellText(0, 2, _T("BÁO CÁO TỔNG HỢP THU QUA NGÂN HÀNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);	xls.SetCellText(0, 5, _T("TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 5, _T("Họ và tên"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 5, _T("Số HS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 5, _T("Chứng từ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("Số"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 6, _T("Ngày"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 5, _T("POS No"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("ÐVT: VNÐ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 5, _T("Số tiền"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 6);	xls.SetMerge(3, 3, 0, 6);	xls.SetMerge(5, 6, 0, 0);	xls.SetMerge(5, 6, 1, 1);	xls.SetMerge(5, 6, 2, 2);	xls.SetMerge(5, 5, 3, 4);	xls.SetMerge(5, 6, 5, 5);	xls.SetMerge(5, 6, 6, 6);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 7;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hfib_docno"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hfib_receiptno"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hfe_date"), tmpStr);		xls.SetCellText(nCol+4, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("hfib_posno"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hfe_payment"), tmpStr);		nTotal += str2double(tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);		nRow++;		rs.MoveNext();	}	if(nTotal > 0)		{			xls.SetCellText(nCol+1, nRow, _T("Tổng cộng"), FMT_TEXT, true);			xls.SetCellText(nCol+6, nRow, double2str(nTotal), FMT_NUMBER1, true);			nRow++;			xls.SetCellText(nCol+1, nRow, _T("Số tiền bằng chữ"), FMT_TEXT, true);			szTemp.Format(_T("%2.f"), nTotal);
			MoneyToString(szTemp, tmpStr);
			tmpStr += _T(" đồng.");			xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT, true);		}		nRow++;		nRow++;		nRow++;		xls.SetCellText(nCol+1, nRow, _T("Kế toán"), FMT_TEXT, true);		xls.SetCellText(nCol+6, nRow, _T("Người lập"), FMT_TEXT, true);	EndWaitCursor();	xls.Save(_T("Exports\\TongHopThuQuaNganHang.xls"));
} 
int CFMTongHopThuQuaNganHang::OnAddFMTongHopThuQuaNganHang(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMTongHopThuQuaNganHang::OnEditFMTongHopThuQuaNganHang(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMTongHopThuQuaNganHang::OnDeleteFMTongHopThuQuaNganHang(){
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
 		OnCancelFMTongHopThuQuaNganHang(); 
 	}
	return 0;
}
int CFMTongHopThuQuaNganHang::OnSaveFMTongHopThuQuaNganHang(){
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
 		//OnFMTongHopThuQuaNganHangListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMTongHopThuQuaNganHang::OnCancelFMTongHopThuQuaNganHang(){
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
int CFMTongHopThuQuaNganHang::OnFMTongHopThuQuaNganHangListLoadData(){
	return 0;
}

CString CFMTongHopThuQuaNganHang::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere;
	szWhere.Empty();

	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfe_staff='%s' "), m_szClerkKey);

	if(m_bTYC)
		szWhere.AppendFormat(_T(" AND hfe_deptid = 'TYC'"));
	else if(m_bPTTYC)
		szWhere.AppendFormat(_T(" AND hfe_deptid = 'PTTYC'"));
	else if(m_bALL)
		szWhere.AppendFormat(_T(" AND hfe_deptid IN('TYC', 'PTTYC')"));
	else
		szWhere.AppendFormat(_T(" AND hfe_deptid NOT IN('TYC', 'PTTYC')"));

	if(m_bCancelInvoice)
		szWhere.AppendFormat(_T(" AND hfe_status = 'C'"));
	else
		szWhere.AppendFormat(_T(" AND hfe_status <> 'C'"));

	szSQL.Format(_T(" SELECT hfib_docno,") \
		_T("   get_patientname(hfib_docno) AS pname,") \
		_T("   hfib_invoiceno,") \
		_T("   hfib_receiptno,") \
		_T("   hfe_date,") \
		_T("   hfib_posno,") \
		_T("   hfe_payment") \
		_T(" FROM hms_fee_invoice_bank,") \
		_T("   hms_fee_invoice") \
		_T(" WHERE hfib_invoiceno = hfe_invoiceno AND NVL(HFIB_PAYMENT_METHOD, 'N') in ('ATM','TTD','CK')") \
		_T(" AND hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') %s ") \
		_T(" UNION ALL") \
		_T(" SELECT hfib_docno,") \
		_T("   get_patientname(hfib_docno) AS pname,") \
		_T("   hfib_invoiceno,") \
		_T("   hfib_receiptno,") \
		_T("   hfe_date,") \
		_T("   hfib_posno,") \
		_T("   hfe_amount") \
		_T(" FROM hms_fee_invoice_bank,") \
		_T("   hms_fee_deposit") \
		_T(" WHERE hfib_invoiceno = hfe_invoiceno AND NVL(HFIB_PAYMENT_METHOD, 'N') in ('ATM','TTD', 'CK')") \
		_T(" AND hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') %s ") \
		_T(" ORDER BY hfe_date"), m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}