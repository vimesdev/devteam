#include "stdafx.h"
#include "FMRefundbyDepartmentEX.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMRefundbyDepartmentEX *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMRefundbyDepartmentEX *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMRefundbyDepartmentEX *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMRefundbyDepartmentEX *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMRefundbyDepartmentEX *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMRefundbyDepartmentEX *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMRefundbyDepartmentEX *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMRefundbyDepartmentEX *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMRefundbyDepartmentEX* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMRefundbyDepartmentEX *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMRefundbyDepartmentEX *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMRefundbyDepartmentEX *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMRefundbyDepartmentEX *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMRefundbyDepartmentEX *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMRefundbyDepartmentEX *pVw = (CFMRefundbyDepartmentEX *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMRefundbyDepartmentEX *pVw = (CFMRefundbyDepartmentEX *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMRefundbyDepartmentFnc(CWnd *pWnd){
	 return ((CFMRefundbyDepartmentEX*)pWnd)->OnAddFMRefundbyDepartment();
} 
static int _OnEditFMRefundbyDepartmentFnc(CWnd *pWnd){
	 return ((CFMRefundbyDepartmentEX*)pWnd)->OnEditFMRefundbyDepartment();
} 
static int _OnDeleteFMRefundbyDepartmentFnc(CWnd *pWnd){
	 return ((CFMRefundbyDepartmentEX*)pWnd)->OnDeleteFMRefundbyDepartment();
} 
static int _OnSaveFMRefundbyDepartmentFnc(CWnd *pWnd){
	 return ((CFMRefundbyDepartmentEX*)pWnd)->OnSaveFMRefundbyDepartment();
} 
static int _OnCancelFMRefundbyDepartmentFnc(CWnd *pWnd){
	 return ((CFMRefundbyDepartmentEX*)pWnd)->OnCancelFMRefundbyDepartment();
} 
CFMRefundbyDepartmentEX::CFMRefundbyDepartmentEX(CWnd *pParent){

	m_nDlgWidth = 500;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFMRefundbyDepartmentEX::~CFMRefundbyDepartmentEX()
{
}
void CFMRefundbyDepartmentEX::OnCreateComponents()
{
	m_wndRefundbyDepartment.Create(this, _T("Refund by Department"), 5, 5, 430, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 60, 90, 85);
	m_wndClerk.Create(this,95, 60, 425, 85); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 240, 95, 350, 120);
	m_wndExport.Create(this, _T("&ExportXLS"), 355, 95, 430, 120);
	m_wndPrintPreview.ShowWindow(SW_HIDE);

}

void CFMRefundbyDepartmentEX::OnInitializeComponents()
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
void CFMRefundbyDepartmentEX::OnSetWindowEvents(){
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
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
}
void CFMRefundbyDepartmentEX::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);

}
void CFMRefundbyDepartmentEX::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMRefundbyDepartmentEX::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMRefundbyDepartmentEX::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();

}
int CFMRefundbyDepartmentEX::SetMode(int nMode){
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
/*void CFMRefundbyDepartmentEX::OnFromDateChange(){
	
} */
/*void CFMRefundbyDepartmentEX::OnFromDateSetfocus(){
	
} */
/*void CFMRefundbyDepartmentEX::OnFromDateKillfocus(){
	
} */
int CFMRefundbyDepartmentEX::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMRefundbyDepartmentEX::OnToDateChange(){
	
} */
/*void CFMRefundbyDepartmentEX::OnToDateSetfocus(){
	
} */
/*void CFMRefundbyDepartmentEX::OnToDateKillfocus(){
	
} */
int CFMRefundbyDepartmentEX::OnToDateCheckValue(){
	return 0;
} 
void CFMRefundbyDepartmentEX::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMRefundbyDepartmentEX::OnClerkSelendok(){
	 
}
/*void CFMRefundbyDepartmentEX::OnClerkSetfocus(){
	
}*/
/*void CFMRefundbyDepartmentEX::OnClerkKillfocus(){
	
}*/
long CFMRefundbyDepartmentEX::OnClerkLoadData(){
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
/*void CFMRefundbyDepartmentEX::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMRefundbyDepartmentEX::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSysDate;
	int nIdx = 0;
	double nAmount = 0, nTotal = 0;
	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	if (!rpt.Init(_T("Reports/HMS/HF_BAOCAOHOANTRAKHOA.rpt")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail;
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("deptname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("totalpatient"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("amount"), nAmount);
		nTotal += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.MoveNext();
	}
	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
	FormatCurrency(nTotal, tmpStr);
	rptDetail->SetValue(_T("s1"), tmpStr);
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CFMRefundbyDepartmentEX::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
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
	if (!xls.Load(_T("Exports\\Template\\BAO_CAO_BENH_NHAN_TAM GUI TRONG VIEN_THANH TOAN TAI PTTYC.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 7;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER| FMT_CENTER);
		
		rs.GetValue(_T("patientname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("sotien"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("ngaythanhtoan"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenphieu"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("loaiphieu"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		
		nRow++;
		rs.MoveNext();
	}
	
	xls.Save(_T("Exports\\Template\\BAO_CAO_BENH_NHAN_TAM GUI TRONG VIEN_THANH TOAN TAI PTTYC2.xls"));
} 
int CFMRefundbyDepartmentEX::OnAddFMRefundbyDepartment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMRefundbyDepartmentEX::OnEditFMRefundbyDepartment(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMRefundbyDepartmentEX::OnDeleteFMRefundbyDepartment(){
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
 		OnCancelFMRefundbyDepartment(); 
 	}
	return 0;
}
int CFMRefundbyDepartmentEX::OnSaveFMRefundbyDepartment(){
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
 		//OnFMRefundbyDepartmentListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMRefundbyDepartmentEX::OnCancelFMRefundbyDepartment(){
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
int CFMRefundbyDepartmentEX::OnFMRefundbyDepartmentListLoadData(){
	return 0;
}

CString CFMRefundbyDepartmentEX::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere;
	szWhere.Empty();

	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfe_staff='%s' "), m_szClerkKey);	

	szSQL.Format(_T(" SELECT") \
	_T(" de.hfe_docno as docno,") \
	_T(" get_patientname(de.hfe_docno) as patientname,") \
	_T(" de.HFE_PATPAID as sotien,") \
	_T(" to_char(rf.hfe_date, 'DD/MM/YYYY') as ngaythanhtoan,") \
	_T(" FAC_INVOICENO as tenphieu,") \
	_T(" FAC_CASHBOOK_ID as loaiphieu") \
	_T(" from HMS_FEE_DEPOSIT de") \
	_T(" LEFT JOIN HMS_FEE_INVOICE iv ON (de.HFE_DOCNO=iv.hfe_docno AND de.HFE_REFINVOICE=iv.hfe_invoiceno)") \
	_T(" LEFT JOIN hms_fee_refund rf ON (iv.hfe_docno=rf.hfe_docno AND rf.HFE_REFIDX=iv.HFE_INVOICENO)") \
	_T(" LEFT JOIN fa_cash fc ON (rf.hfe_cash_id = fc.fac_cash_id)") \
	_T(" where ") \
	_T(" rf.HFE_DATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T(" and de.HFE_DEPTID in ('C1.1', 'C1.2', 'C1.3', 'AB')") \
	_T(" and rf.HFE_DEPTID in ('PTTYC','TYC')") \
	_T(" order by rf.hfe_date"), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}