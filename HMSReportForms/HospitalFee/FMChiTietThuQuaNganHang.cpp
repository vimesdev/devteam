#include "stdafx.h"
#include "FMChiTietThuQuaNganHang.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMChiTietThuQuaNganHang *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMChiTietThuQuaNganHang *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMChiTietThuQuaNganHang* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMChiTietThuQuaNganHang *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnClerkAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMChiTietThuQuaNganHang* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFMChiTietThuQuaNganHang *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang *)pWnd)->OnObjectAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMChiTietThuQuaNganHang *pVw = (CFMChiTietThuQuaNganHang *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMChiTietThuQuaNganHang *pVw = (CFMChiTietThuQuaNganHang *)pWnd;
	pVw->OnExportSelect();
}
static void _OnTYCSelectFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang*)pWnd)->OnTYCSelect();
}
static void _OnPTTYCSelectFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang*)pWnd)->OnPTTYCSelect();
}
static void _OnALLSelectFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang*)pWnd)->OnALLSelect();
}
static void _OnCancelInvoiceSelectFnc(CWnd *pWnd){
	((CFMChiTietThuQuaNganHang*)pWnd)->OnCancelInvoiceSelect();
}
static int _OnAddFMChiTietThuQuaNganHangFnc(CWnd *pWnd){
	 return ((CFMChiTietThuQuaNganHang*)pWnd)->OnAddFMChiTietThuQuaNganHang();
} 
static int _OnEditFMChiTietThuQuaNganHangFnc(CWnd *pWnd){
	 return ((CFMChiTietThuQuaNganHang*)pWnd)->OnEditFMChiTietThuQuaNganHang();
} 
static int _OnDeleteFMChiTietThuQuaNganHangFnc(CWnd *pWnd){
	 return ((CFMChiTietThuQuaNganHang*)pWnd)->OnDeleteFMChiTietThuQuaNganHang();
} 
static int _OnSaveFMChiTietThuQuaNganHangFnc(CWnd *pWnd){
	 return ((CFMChiTietThuQuaNganHang*)pWnd)->OnSaveFMChiTietThuQuaNganHang();
} 
static int _OnCancelFMChiTietThuQuaNganHangFnc(CWnd *pWnd){
	 return ((CFMChiTietThuQuaNganHang*)pWnd)->OnCancelFMChiTietThuQuaNganHang();
}
static void _OnByCardSelectFnc(CWnd *pWnd)
{
	 ((CFMChiTietThuQuaNganHang*)pWnd)->OnByCardSelect();
}
static void _OnByMoneyTransferSelectFnc(CWnd *pWnd)
{
	 ((CFMChiTietThuQuaNganHang*)pWnd)->OnByMoneyTransferSelect();
}

CFMChiTietThuQuaNganHang::CFMChiTietThuQuaNganHang(CWnd *pParent){

	m_nDlgWidth = 500;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFMChiTietThuQuaNganHang::~CFMChiTietThuQuaNganHang(){
}
void CFMChiTietThuQuaNganHang::OnCreateComponents()
{
	m_wndRefundbyDepartment.Create(this, _T("Refund by Department"), 5, 5, 430, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 60, 90, 85);
	m_wndClerk.Create(this,95, 60, 425, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.Create(this,95, 90, 425, 115); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 265, 125, 345, 150);
	m_wndExport.Create(this, _T("&Export"), 350, 125, 430, 150);
	m_wndTYC.Create(this, _T("TYC"), 10, 125, 80, 150);
	m_wndPTTYC.Create(this, _T("PTTYC"), 85, 125, 155, 150);
	m_wndALL.Create(this, _T("Tất cả"), 160, 125, 230, 150);
	m_wndCancelInvoice.Create(this, _T("Lọc hủy thẻ"), 10, 155, 230, 180);
	m_wndByCard.Create(this, _T("ByCard"), 10, 186, 230, 211);
	m_wndByMoneyTransfer.Create(this, _T("ByMoneyTransfer"), 10, 217, 230, 242);
}

void CFMChiTietThuQuaNganHang::OnInitializeComponents()
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

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 270);

}
void CFMChiTietThuQuaNganHang::OnSetWindowEvents(){
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
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndTYC.SetEvent(WE_CLICK, _OnTYCSelectFnc);
	m_wndPTTYC.SetEvent(WE_CLICK, _OnPTTYCSelectFnc);
	m_wndALL.SetEvent(WE_CLICK, _OnALLSelectFnc);
	m_wndCancelInvoice.SetEvent(WE_CLICK, _OnCancelInvoiceSelectFnc);
	m_wndByCard.SetEvent(WE_CLICK, _OnByCardSelectFnc);
	m_wndByMoneyTransfer.SetEvent(WE_CLICK, _OnByMoneyTransferSelectFnc);
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
}
void CFMChiTietThuQuaNganHang::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Check(pDX, m_wndTYC.GetDlgCtrlID(), m_bTYC);
	DDX_Check(pDX, m_wndPTTYC.GetDlgCtrlID(), m_bPTTYC);
	DDX_Check(pDX, m_wndALL.GetDlgCtrlID(), m_bALL);
	DDX_Check(pDX, m_wndCancelInvoice.GetDlgCtrlID(), m_bCancelInvoice);
	DDX_Check(pDX, m_wndByCard.GetDlgCtrlID(), m_bByCard);
	DDX_Check(pDX, m_wndByMoneyTransfer.GetDlgCtrlID(), m_bByMoneyTransfer);

}
void CFMChiTietThuQuaNganHang::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMChiTietThuQuaNganHang::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMChiTietThuQuaNganHang::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_szObjectKey.Empty();
	m_bTYC=FALSE;
	m_bPTTYC=FALSE;
	m_bALL=FALSE;
	m_bCancelInvoice=FALSE;
	m_bByCard=FALSE;
	m_bByMoneyTransfer=FALSE;

}
int CFMChiTietThuQuaNganHang::SetMode(int nMode){
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
/*void CFMChiTietThuQuaNganHang::OnFromDateChange(){
	
} */
/*void CFMChiTietThuQuaNganHang::OnFromDateSetfocus(){
	
} */
/*void CFMChiTietThuQuaNganHang::OnFromDateKillfocus(){
	
} */
int CFMChiTietThuQuaNganHang::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMChiTietThuQuaNganHang::OnToDateChange(){
	
} */
/*void CFMChiTietThuQuaNganHang::OnToDateSetfocus(){
	
} */
/*void CFMChiTietThuQuaNganHang::OnToDateKillfocus(){
	
} */
int CFMChiTietThuQuaNganHang::OnToDateCheckValue(){
	return 0;
} 
void CFMChiTietThuQuaNganHang::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMChiTietThuQuaNganHang::OnClerkSelendok(){
	 
}
/*void CFMChiTietThuQuaNganHang::OnClerkSetfocus(){
	
}*/
/*void CFMChiTietThuQuaNganHang::OnClerkKillfocus(){
	
}*/
long CFMChiTietThuQuaNganHang::OnClerkLoadData(){
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
/*void CFMChiTietThuQuaNganHang::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMChiTietThuQuaNganHang::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMChiTietThuQuaNganHang::OnObjectSelendok(){
	 
}
/*void CFMChiTietThuQuaNganHang::OnObjectSetfocus(){
	
}*/
/*void CFMChiTietThuQuaNganHang::OnObjectKillfocus(){
	
}*/
long CFMChiTietThuQuaNganHang::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code = '%s' "), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems(); 
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel WHERE ss_id = 'hms_fee_object' AND ss_code <> 'A' %s ORDER BY ss_code"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMChiTietThuQuaNganHang::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMChiTietThuQuaNganHang::OnTYCSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bTYC)
		{
			m_bPTTYC = FALSE;
			m_bALL = FALSE;
		}

	UpdateData(FALSE);
}
void CFMChiTietThuQuaNganHang::OnPTTYCSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bPTTYC)
		{
			m_bTYC = FALSE;
			m_bALL = FALSE;
		}

	UpdateData(FALSE);
}
void CFMChiTietThuQuaNganHang::OnALLSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bALL)
		{
			m_bTYC = FALSE;
			m_bPTTYC = FALSE;
		}

	UpdateData(FALSE);
} 
void CFMChiTietThuQuaNganHang::OnCancelInvoiceSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
void CFMChiTietThuQuaNganHang::OnByCardSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}
	void CFMChiTietThuQuaNganHang::OnByMoneyTransferSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMChiTietThuQuaNganHang::OnPrintPreviewSelect()
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
	if (!rpt.Init(_T("Reports/HMS/HF_BAOCAOCHITIETTHUQUANGANHANG.rpt")))
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

		rs.GetValue(_T("objectname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("hfib_docno"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("pdept"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("information"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("hfe_payment"), tmpStr);
		nTotal += str2double(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("hfe_staff"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

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
void CFMChiTietThuQuaNganHang::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	double nTotal = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 20);	xls.SetColumnWidth(2, 20);	xls.SetColumnWidth(3, 12);	xls.SetColumnWidth(4, 20);	xls.SetColumnWidth(5, 70);	xls.SetColumnWidth(6, 16);	xls.SetColumnWidth(7, 10);	xls.SetColumnWidth(8, 10);	xls.SetColumnWidth(9, 10);	xls.SetColumnWidth(10, 10);	xls.SetColumnWidth(11, 10);	xls.SetColumnWidth(12, 10);	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);		xls.SetCellText(0, 2, _T("BÁO CÁO CHI TIẾT THU QUA NGÂN HÀNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);	xls.SetCellText(0, 5, _T("TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 5, _T("Họ và tên"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 5, _T("Đối tượng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 5, _T("Số HS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 5, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 5, _T("Thông tin đối chiếu ngân hàng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);		xls.SetCellText(6, 5, _T("Mã tham chiếu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 5, _T("Tên ngân hàng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 5, _T("Tên chủ thẻ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 5, _T("Ngày thu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 5, _T("Máy POS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("ÐVT: VNÐ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 5, _T("Số tiền"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 5, _T("Người thu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 7);	xls.SetMerge(3, 3, 0, 7);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 6;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("objectname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hfib_docno"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("pdept"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("information"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hfib_accountno"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("hfib_account_name"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("hfib_bank_name"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("HFIB_CREATEDDATE"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_DATETIME);		rs.GetValue(_T("HFIB_POSNO"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hfe_payment"), tmpStr);		nTotal += str2double(tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("hfe_staff"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	if(nTotal > 0)		{			xls.SetCellText(nCol+1, nRow, _T("Tổng cộng"), FMT_TEXT, true);			xls.SetCellText(nCol+11, nRow, double2str(nTotal), FMT_NUMBER1, true);			nRow++;			xls.SetCellText(nCol+1, nRow, _T("Số tiền bằng chữ"), FMT_TEXT, true);			szTemp.Format(_T("%2.f"), nTotal);
			MoneyToString(szTemp, tmpStr);
			tmpStr += _T(" đồng.");			xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT, true);		}		nRow++;		nRow++;		nRow++;		xls.SetCellText(nCol+1, nRow, _T("Kế toán"), FMT_TEXT, true);		xls.SetCellText(nCol+10, nRow, _T("Người lập"), FMT_TEXT, true);	EndWaitCursor();	xls.Save(_T("Exports\\ChiTietThuQuaNganHang.xls"));
} 
int CFMChiTietThuQuaNganHang::OnAddFMChiTietThuQuaNganHang(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMChiTietThuQuaNganHang::OnEditFMChiTietThuQuaNganHang(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMChiTietThuQuaNganHang::OnDeleteFMChiTietThuQuaNganHang(){
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
 		OnCancelFMChiTietThuQuaNganHang(); 
 	}
	return 0;
}
int CFMChiTietThuQuaNganHang::OnSaveFMChiTietThuQuaNganHang(){
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
 		//OnFMChiTietThuQuaNganHangListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMChiTietThuQuaNganHang::OnCancelFMChiTietThuQuaNganHang(){
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
int CFMChiTietThuQuaNganHang::OnFMChiTietThuQuaNganHangListLoadData(){
	return 0;
}

CString CFMChiTietThuQuaNganHang::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szObjects;
	szWhere.Empty();

	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfe_staff='%s' "), m_szClerkKey);

// 	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
// 	{
// 		if (m_wndObject.GetCheck(i))
// 		{
// 			m_wndObject.SetCurSel(i);
// 			if (!szObjects.IsEmpty())
// 				szObjects.AppendFormat(_T(", "));
// 			szObjects.AppendFormat(_T("'%s'"), m_wndObject.GetCurrent(0));
// 		}
// 	}
// 	if (!szObjects.IsEmpty())
// 		szWhere.AppendFormat(_T(" AND ho_type IN (%s)"), szObjects);

	if (!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_type IN ('%s') "), m_szObjectKey);

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

	if(m_bByCard)
		//szWhere.AppendFormat(_T(" AND NVL(HFIB_PAYMENT_METHOD, 'N') in ('ATM','TTD') AND HFIB_BANK_ID is not null AND HFIB_ACCOUNTNO is not null"));
	   szWhere.AppendFormat(_T(" AND NVL(HFIB_PAYMENT_METHOD, 'N') in ('ATM','TTD')"));

	if(m_bByMoneyTransfer)
		//szWhere.AppendFormat(_T(" AND NVL(HFIB_PAYMENT_METHOD, 'N') in ('CK') AND HFIB_BANK_ID is not null AND HFIB_ACCOUNTNO is not null"));
	    szWhere.AppendFormat(_T(" AND NVL(HFIB_PAYMENT_METHOD, 'N') in ('CK')"));

	szSQL.Format(_T(" SELECT hfib_docno,") \
		_T("   get_patientname(hfib_docno) AS pname,") \
		_T("   hfib_invoiceno,") \
		_T("   get_departmentname(hfe_deptid) AS pdept,") \
		_T("   TRIM(hfib_accountno") \
		_T("   || ' '") \
		_T("   || hfib_account_name") \
		_T("   || ' '") \
		_T("   || hfib_cardno") \
		_T("   || ' '") \
		_T("   || hfib_address") \
		_T("   || ' '") \
		_T("   || hfib_bank_name") \
		_T("   || ' '") \
		_T("   || hfib_bank_brand) AS information,") \
		_T("   hfib_accountno,") \
		_T("   hfib_account_name,") \
		_T("   hfib_bank_name,") \
		_T("   HFIB_CREATEDDATE,") \
		_T("   HFIB_POSNO,") \
		_T("   hfe_payment,") \
		_T("   hfe_date,") \
		_T("   hfe_staff,") \
		_T("   hfe_objectid,") \
		_T("   get_objectname(hfe_objectid) AS objectname") \
		_T(" FROM hms_fee_invoice_bank LEFT JOIN hms_fee_invoice ON (hfib_docno=hfe_docno AND hfib_invoiceno=hfe_invoiceno)") \
		_T(" WHERE NVL(HFIB_PAYMENT_METHOD, 'N') in ('ATM','TTD', 'CK') AND HFE_POSTEDDATE BETWEEN to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') %s ") \
		_T(" UNION ALL") \
		_T(" SELECT hfib_docno,") \
		_T("   get_patientname(hfib_docno) AS pname,") \
		_T("   hfib_invoiceno,") \
		_T("   get_departmentname(hfe_deptid) AS pdept,") \
		_T("   TRIM(hfib_accountno") \
		_T("   || ' '") \
		_T("   || hfib_account_name") \
		_T("   || ' '") \
		_T("   || hfib_cardno") \
		_T("   || ' '") \
		_T("   || hfib_address") \
		_T("   || ' '") \
		_T("   || hfib_bank_name") \
		_T("   || ' '") \
		_T("   || hfib_bank_brand) AS information,") \
		_T("   hfib_accountno,") \
		_T("   hfib_account_name,") \
		_T("   hfib_bank_name,") \
		_T("   HFIB_CREATEDDATE,") \
		_T("   HFIB_POSNO,") \
		_T("   hfe_amount,") \
		_T("   hfe_date,") \
		_T("   hfe_staff,") \
		_T("   hfe_objectid,") \
		_T("   get_objectname(hfe_objectid) AS objectname") \
		_T(" FROM hms_fee_invoice_bank LEFT JOIN hms_fee_deposit ON (hfib_docno=hfe_docno AND hfib_invoiceno=hfe_invoiceno)") \
		_T(" WHERE NVL(HFIB_PAYMENT_METHOD, 'N') in ('ATM','TTD', 'CK') AND HFE_POSTEDDATE BETWEEN to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss') %s ") \
		_T(" ORDER BY hfe_date"), m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}