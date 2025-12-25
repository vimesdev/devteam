#include "stdafx.h"
#include "FMCashLockedOutsideFund.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMCashLockedOutsideFund *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMCashLockedOutsideFund *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMCashLockedOutsideFund *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMCashLockedOutsideFund *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMCashLockedOutsideFund *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMCashLockedOutsideFund *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMCashLockedOutsideFund *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMCashLockedOutsideFund *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMCashLockedOutsideFund* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMCashLockedOutsideFund *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMCashLockedOutsideFund *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMCashLockedOutsideFund *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMCashLockedOutsideFund *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMCashLockedOutsideFund *)pWnd)->OnClerkAddNew();
}*/
static void _OnLockedSelectFnc(CWnd *pWnd){
	 ((CFMCashLockedOutsideFund*)pWnd)->OnLockedSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMCashLockedOutsideFund *pVw = (CFMCashLockedOutsideFund *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMCashLockedOutsideFund *pVw = (CFMCashLockedOutsideFund *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMGeneralReportbyClerkFnc(CWnd *pWnd){
	 return ((CFMCashLockedOutsideFund*)pWnd)->OnAddFMGeneralReportbyClerk();
} 
static int _OnEditFMGeneralReportbyClerkFnc(CWnd *pWnd){
	 return ((CFMCashLockedOutsideFund*)pWnd)->OnEditFMGeneralReportbyClerk();
} 
static int _OnDeleteFMGeneralReportbyClerkFnc(CWnd *pWnd){
	 return ((CFMCashLockedOutsideFund*)pWnd)->OnDeleteFMGeneralReportbyClerk();
} 
static int _OnSaveFMGeneralReportbyClerkFnc(CWnd *pWnd){
	 return ((CFMCashLockedOutsideFund*)pWnd)->OnSaveFMGeneralReportbyClerk();
} 
static int _OnCancelFMGeneralReportbyClerkFnc(CWnd *pWnd){
	 return ((CFMCashLockedOutsideFund*)pWnd)->OnCancelFMGeneralReportbyClerk();
} 
CFMCashLockedOutsideFund::CFMCashLockedOutsideFund(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 165;
	SetDefaultValues();
}
CFMCashLockedOutsideFund::~CFMCashLockedOutsideFund(){
}
void CFMCashLockedOutsideFund::OnCreateComponents(){
	m_wndGeneralReportbyClerk.Create(this, _T("Report Condition"), 5, 5, 430, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 60, 90, 85);
	m_wndClerk.Create(this,95, 60, 425, 85); 
	m_wndLocked.Create(this, _T("Locked"), 5, 95, 105, 120);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 240, 95, 350, 120);
	m_wndExport.Create(this, _T("&ExportXLS"), 355, 95, 430, 120);

}

void CFMCashLockedOutsideFund::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	//m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(65);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 270);

}
void CFMCashLockedOutsideFund::OnSetWindowEvents(){
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
	m_wndLocked.SetEvent(WE_CLICK, _OnLockedSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CFMCashLockedOutsideFund::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndLocked.GetDlgCtrlID(), m_bLocked);

}
void CFMCashLockedOutsideFund::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMCashLockedOutsideFund::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMCashLockedOutsideFund::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bLocked=FALSE;

}
int CFMCashLockedOutsideFund::SetMode(int nMode){
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
/*void CFMCashLockedOutsideFund::OnFromDateChange(){
	
} */
/*void CFMCashLockedOutsideFund::OnFromDateSetfocus(){
	
} */
/*void CFMCashLockedOutsideFund::OnFromDateKillfocus(){
	
} */
int CFMCashLockedOutsideFund::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMCashLockedOutsideFund::OnToDateChange(){
	
} */
/*void CFMCashLockedOutsideFund::OnToDateSetfocus(){
	
} */
/*void CFMCashLockedOutsideFund::OnToDateKillfocus(){
	
} */
int CFMCashLockedOutsideFund::OnToDateCheckValue(){
	return 0;
} 
void CFMCashLockedOutsideFund::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMCashLockedOutsideFund::OnClerkSelendok(){
	 
}
/*void CFMCashLockedOutsideFund::OnClerkSetfocus(){
	
}*/
/*void CFMCashLockedOutsideFund::OnClerkKillfocus(){
	
}*/
long CFMCashLockedOutsideFund::OnClerkLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty())
	{
		szWhere.Format(_T(" and lower(su_userid)=lower('%s') "), m_szClerkKey);
	}
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
/*void CFMCashLockedOutsideFund::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CFMCashLockedOutsideFund::OnLockedSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMCashLockedOutsideFund::OnPrintPreviewSelect()
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
	if (!rpt.Init(_T("Reports/HMS/HF_DANHSACHNHANVIENCHUAQUAQUY.RPT")))
		return;

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);

	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail;
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), tmpStr);
				
		rs.GetValue(_T("nguoi_thu"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("so_phieu"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("khoa_so"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		
		rs.GetValue(_T("xac_nhan"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("so_tien"), nAmount);
		nTotal += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.MoveNext();
	}
	FormatCurrency(nTotal, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("s6"), tmpStr);
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CFMCashLockedOutsideFund::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\DANHSACHKHOASO_CHUANOP_QUY.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("nguoi_thu"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("so_phieu"), nTemp);		
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoa_so"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("xac_nhan"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("so_tien"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER2);
			
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[5] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 5; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[5] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 5; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHKHOASO_CHUANOP_QUY2.xls"));
	
} 
int CFMCashLockedOutsideFund::OnAddFMGeneralReportbyClerk(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMCashLockedOutsideFund::OnEditFMGeneralReportbyClerk(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMCashLockedOutsideFund::OnDeleteFMGeneralReportbyClerk(){
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
 		OnCancelFMGeneralReportbyClerk(); 
 	}
	return 0;
}
int CFMCashLockedOutsideFund::OnSaveFMGeneralReportbyClerk(){
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
 		//OnFMGeneralReportbyClerkListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMCashLockedOutsideFund::OnCancelFMGeneralReportbyClerk()
{
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
int CFMCashLockedOutsideFund::OnFMGeneralReportbyClerkListLoadData(){
	return 0;
}

CString CFMCashLockedOutsideFund::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere;
	szWhere.Empty();

	szWhere.AppendFormat(_T(" AND fac_locked='Y' AND fac_approved = 'Y' AND NVL(fac_posted, 'N') <> 'Y'"));
	szWhere.AppendFormat(_T(" AND fac_invoicedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') "),
			                m_szFromDate, m_szToDate);

	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND fac_user_id = '%s' "), m_szClerkKey);

	szSQL.Format(_T(" SELECT fac_user_id, get_username(fac_user_id) nguoi_thu, ") \
				 _T("		 fac_invoiceno so_phieu, fac_invoicedate khoa_so, fac_approveddate xac_nhan, fac_amount so_tien ") \
			 	 _T(" FROM fa_cash ") \
				 _T(" WHERE  1=1 %s ") \
				 _T(" ORDER BY fac_cash_id"), szWhere);
	return szSQL;
}