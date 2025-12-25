#include "stdafx.h"
#include "TMOperationListB10.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMOperationListB10 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMOperationListB10* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMOperationListB10 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMOperationListB10 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMOperationListB10 *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMOperationListB10* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CTMOperationListB10 *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CTMOperationListB10 *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMOperationListB10 *pVw = (CTMOperationListB10 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMOperationListB10 *pVw = (CTMOperationListB10 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnPolicySelect();
}
static void _OnPaymentSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnPaymentSelect();
}
static void _OnPayment2SelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnPayment2Select();
}
static void _OnSurgerySelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnSurgerySelect();
}
static void _OnOperationSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnOperationSelect();
}
static void _OnParaclinicalSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnParaclinicalSelect();
}
static void _OnKPLSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnKPLSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnAllSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnOutpatientSelect();
}
static void _OnFromExamSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnFromExamSelect();
}
static void _OnBNTYCSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnBNTYCSelect();
}
static void _OnKBNTYCSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnKBNTYCSelect();
}
static void _OnGiamDauSelectFnc(CWnd *pWnd){
	((CTMOperationListB10*)pWnd)->OnGiamDauSelect();
}
static int _OnAddTMOperationListFnc(CWnd *pWnd){
	 return ((CTMOperationListB10*)pWnd)->OnAddTMOperationList();
} 
static int _OnEditTMOperationListFnc(CWnd *pWnd){
	 return ((CTMOperationListB10*)pWnd)->OnEditTMOperationList();
} 
static int _OnDeleteTMOperationListFnc(CWnd *pWnd){
	 return ((CTMOperationListB10*)pWnd)->OnDeleteTMOperationList();
} 
static int _OnSaveTMOperationListFnc(CWnd *pWnd){
	 return ((CTMOperationListB10*)pWnd)->OnSaveTMOperationList();
} 
static int _OnCancelTMOperationListFnc(CWnd *pWnd){
	 return ((CTMOperationListB10*)pWnd)->OnCancelTMOperationList();
}
static void _OnDeptDblClickFnc(CWnd *pWnd)
{
	((CTMOperationListB10*)pWnd)->OnDeptDblClick();
} 

CTMOperationListB10::CTMOperationListB10(CWnd* pParent)
{

	m_nDlgWidth = 470;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CTMOperationListB10::~CTMOperationListB10(){
}
void CTMOperationListB10::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 6, 4, 511, 525);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
	m_wndYear.Create(this,105, 30, 255, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 260, 30, 350, 55);
	m_wndReportPeriod.Create(this,355, 30, 505, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 255, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 260, 60, 350, 85);
	m_wndToDate.Create(this,355, 60, 505, 85); 
	m_wndDept.Create(this,11, 89, 506, 399);
	m_wndDept.SetCheckBox(true);
	m_wndInsurance.Create(this, _T("Insurance"), 10, 405, 100, 430);
	m_wndService.Create(this, _T("Service"), 105, 405, 195, 430);
	m_wndPolicy.Create(this, _T("Policies"), 200, 405, 280, 430);
	m_wndPayment.Create(this, _T("Chưa nộp quỹ"), 285, 405, 395, 430);
	m_wndPayment2.Create(this, _T("Đã nộp quỹ"), 400, 405, 505, 430);
	m_wndSurgery.Create(this, _T("Surgery"), 10, 435, 100, 460);
	m_wndOperation.Create(this, _T("Operation"), 105, 435, 195, 460);
	m_wndParaclinical.Create(this, _T("Paraclinical"), 200, 435, 320, 460);
	m_wndKPL.Create(this, _T("Không phân loại"), 325, 435, 445, 460);	
	m_wndAll.Create(this, _T("All"), 10, 464, 100, 489);
	m_wndInpatient.Create(this, _T("InPatient"), 105, 465, 195, 490);
	m_wndOutpatient.Create(this, _T("OutPatient"), 200, 465, 320, 490);
	m_wndFromExam.Create(this, _T("Từ phòng khám"), 325, 466, 445, 491);
	m_wndBNTYC.Create(this, _T("BN TYC"), 10, 495, 100, 520);
	m_wndKBNTYC.Create(this, _T("Bỏ BN TYC"), 105, 495, 195, 520);
	m_wndGiamDau.Create(this, _T("Gói giảm đau"), 200, 495, 320, 520);
	m_wndExport.Create(this, _T("&Export"), 405, 495, 505, 520);

}
void CTMOperationListB10::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

}
void CTMOperationListB10::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);	
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndDept.SetEvent(WE_DBLCLICK, _OnDeptDblClickFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndPayment2.SetEvent(WE_CLICK, _OnPayment2SelectFnc);
	m_wndSurgery.SetEvent(WE_CLICK, _OnSurgerySelectFnc);
	m_wndOperation.SetEvent(WE_CLICK, _OnOperationSelectFnc);
	m_wndParaclinical.SetEvent(WE_CLICK, _OnParaclinicalSelectFnc);
	m_wndKPL.SetEvent(WE_CLICK, _OnKPLSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndFromExam.SetEvent(WE_CLICK, _OnFromExamSelectFnc);
	m_wndBNTYC.SetEvent(WE_CLICK, _OnBNTYCSelectFnc);
	m_wndKBNTYC.SetEvent(WE_CLICK, _OnKBNTYCSelectFnc);
	m_wndGiamDau.SetEvent(WE_CLICK, _OnGiamDauSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddTMOperationListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditTMOperationListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteTMOperationListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveTMOperationListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelTMOperationListFnc, 0, 'T', VK_CONTROL);
	OnDeptLoadData();
	CString szSQL;
	SetMode(VM_ADD);
}
void CTMOperationListB10::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Check(pDX, m_wndPayment.GetDlgCtrlID(), m_bPayment);
	DDX_Check(pDX, m_wndPayment2.GetDlgCtrlID(), m_bPayment2);
	DDX_Check(pDX, m_wndSurgery.GetDlgCtrlID(), m_bSurgery);
	DDX_Check(pDX, m_wndOperation.GetDlgCtrlID(), m_bOperation);
	DDX_Check(pDX, m_wndParaclinical.GetDlgCtrlID(), m_bParaclinical);
	DDX_Check(pDX, m_wndKPL.GetDlgCtrlID(), m_bKPL);
	DDX_Check(pDX, m_wndAll.GetDlgCtrlID(), m_bAll);
	DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndFromExam.GetDlgCtrlID(), m_bFromExam);
	DDX_Check(pDX, m_wndBNTYC.GetDlgCtrlID(), m_bBNTYC);
	DDX_Check(pDX, m_wndKBNTYC.GetDlgCtrlID(), m_bKBNTYC);
	DDX_Check(pDX, m_wndGiamDau.GetDlgCtrlID(), m_bGiamDau);

}
void CTMOperationListB10::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMOperationListB10::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMOperationListB10::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_nInsurance=0;
	m_nService=1;
	m_nPolicy=1;
	m_bPayment=FALSE;
	m_bPayment2=FALSE;
	m_bSurgery=FALSE;
	m_bOperation=FALSE;
	m_bParaclinical=FALSE;
	m_bKPL=FALSE;
	m_bAll=FALSE;
	m_bInpatient=FALSE;
	m_bOutpatient=FALSE;
	m_bFromExam=FALSE;
	m_bBNTYC=FALSE;
	m_bKBNTYC=FALSE;
	m_bGiamDau=FALSE;

}
int CTMOperationListB10::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL, szSysDate;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			szSysDate = pMF->GetSysDate();
			m_nYear = ToInt(szSysDate.Left(4));
			m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
			m_szFromDate = m_szToDate = pMF->GetSysDate();
			m_szFromDate += _T(" 00:00");
			m_szToDate += _T(" 23:59");
			
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
		if (pMF->GetCurrentDepartmentID() != _T("TYC") || pMF->GetCurrentDepartmentID() != _T("PTTYC"))
		{
			m_wndBNTYC.EnableWindow(false);
			m_wndKBNTYC.EnableWindow(false);
			//m_wndDichvu_TYC.EnableWindow(false);		
		}

 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CTMOperationListB10::OnYearChange(){
	
} */
/*void CTMOperationListB10::OnYearSetfocus(){
	
} */
/*void CTMOperationListB10::OnYearKillfocus(){
	
} */
int CTMOperationListB10::OnYearCheckValue(){
	UpdateData(TRUE);
	if (m_nYear > 0)
	{
		CDateTime dt;
		CDate date;
		CString szTemp;

		dt.ParseDateTime(m_szFromDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szFromDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}

	UpdateData(FALSE);
	return 0;
} 
void CTMOperationListB10::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CTMOperationListB10::OnDeptDblClick()
{
	
} 

void CTMOperationListB10::OnReportPeriodSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/03/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/04/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/06/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/07/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/09/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/10/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/12/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 
	 
}
/*void CTMOperationListB10::OnReportPeriodSetfocus(){
	
}*/
/*void CTMOperationListB10::OnReportPeriodKillfocus(){
	
}*/
long CTMOperationListB10::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szReportPeriodKey));
	}
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMOperationListB10::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMOperationListB10::OnFromDateChange(){
	
} */
/*void CTMOperationListB10::OnFromDateSetfocus(){
	
} */
/*void CTMOperationListB10::OnFromDateKillfocus(){
	
} */
int CTMOperationListB10::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMOperationListB10::OnToDateChange(){
	
} */
/*void CTMOperationListB10::OnToDateSetfocus(){
	
} */
/*void CTMOperationListB10::OnToDateKillfocus(){
	
} */
int CTMOperationListB10::OnToDateCheckValue(){
	return 0;
} 
void CTMOperationListB10::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMOperationListB10::OnDeptSelendok(){
	 
}
/*void CTMOperationListB10::OnDeptSetfocus(){
	
}*/
/*void CTMOperationListB10::OnDeptKillfocus(){
	
}*/
long CTMOperationListB10::OnDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;			
	m_wndDept.BeginLoad(); 
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	//szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_type IN ('DT') and sd_isactive='Y' order by sd_id"));

	szSQL.Format(_T(" select sd_id as id, SD_ID_ALIAS as aliasid, sd_name as name from sys_dept where 1=1 ") \
				 _T(" and sd_isactive='Y' and sd_id = '%s' order by sd_id"), pMF->GetCurrentDepartmentID());

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDept.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDept.EndLoad(); 
	return nCount;

}
/*void CTMOperationListB10::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMOperationListB10::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMOperationListB10::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("Xuất tổng hợp"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("Xuất chi tiết"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport1();
		break;
	case 2:
		OnExport2();
		break;
	}
} 
void CTMOperationListB10::OnExport1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szTemp2, szDept;
	int nIdx = 1, nRow = 0,nCol=0;
	double nAmount = 0, nTotalAmount = 0;
	double nTotalGroup[5];
	for(int i=0;i <5;i++)
	{
		nTotalGroup[i]=0;
	}

	for (int i = 0; i < m_wndDept.GetItemCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			m_wndDept.SetCurSel(i);
			szTemp = m_wndDept.GetItemText(i, 0);
			if (!szDept.IsEmpty())
				szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), szTemp);			
		}
	}

	if (szDept.IsEmpty())

	{
		ShowMessageBox(_T("Bạn chưa chọn khoa thực hiện!"),MB_ICONERROR);
		return;
	}

	szSQL = GetQuerySring();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header
	xls.SetColumnWidth(0, 3);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 4);
	xls.SetColumnWidth(5, 4);
	xls.SetColumnWidth(6, 4);
	xls.SetColumnWidth(7, 4);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 20);
	xls.SetColumnWidth(13, 14);
	xls.SetColumnWidth(14, 20);
	xls.SetCellMergedColumns(0, 0, 5);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(7, 0, 5);
	xls.SetCellMergedColumns(7, 1, 5);
	xls.SetCellMergedColumns(0, 3, 14);
	xls.SetCellMergedColumns(0, 4, 14);
	xls.SetCellMergedColumns(0, 5, 14);
	xls.SetCellText(0, 0, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(7, 0, _T("CỘNG HÒA XÃ HỘI CHỦ NGHĨA VIỆT NAM"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, false);
	xls.SetCellText(7, 1, _T("Độc lập - Tự do - Hạnh phúc"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(0, 1, pMF->GetCurrentDepartmentName(), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);

	xls.SetCellText(0, 3, _T("DANH SÁCH ĐỀ NGHỊ BỒI DƯỠNG PHẪU THUẬT, THỦ THUẬT"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true, 12);

	if (m_nInsurance == 0)
		tmpStr.Format(_T("Bệnh nhân BHYT"));
	else if (m_nService == 0)
		tmpStr.Format(_T("Bệnh nhân DỊCH VỤ"));
	else if (m_nPolicy == 0)
		tmpStr.Format(_T("Bệnh nhân Quân"));
	xls.SetCellText(0, 4,tmpStr , FMT_TEXT|FMT_CENTER|FMT_WRAPING, true, 12);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);

	xls.SetCellText(10, 2, _T("Mẫu số 05/BV"), FMT_TEXT, true);
	xls.SetCellText(10, 6, _T("Đơn vị tính: Đồng"), FMT_TEXT);

	nRow=8;
	xls.SetCellMergedRows(nCol,nRow,2);
	xls.SetCellText(nCol,nRow,_T("Số TT"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+1,nRow,2);
	xls.SetCellText(nCol+1,nRow,_T("Họ và tên"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+2,nRow,2);
	xls.SetCellText(nCol+2,nRow,_T("Số Hồ Sơ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+3,nRow,2);
	xls.SetCellText(nCol+3,nRow,_T("Tên phẫu thuật, thủ thuật"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedColumns(nCol+4,nRow,4);
	xls.SetCellText(nCol+4,nRow,_T("Phân loại"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	if(m_bKPL == TRUE)
		xls.SetCellText(nCol+4,nRow+1,_T("KPL"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	else
		xls.SetCellText(nCol+4,nRow+1,_T("Đặc biệt"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+5,nRow+1,_T("Loại 1"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+6,nRow+1,_T("Loại 2"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+7,nRow+1,_T("Loại 3"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedColumns(nCol+8,nRow,3);
	xls.SetCellText(nCol+8,nRow,_T("Kíp thực hiện"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+8,nRow+1,_T("Chính"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+9,nRow+1,_T("Phụ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+10,nRow+1,_T("Giúp việc"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+11,nRow,2);
	xls.SetCellText(nCol+11,nRow,_T("Số tiền"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellMergedRows(nCol+12,nRow,2);
	xls.SetCellText(nCol+12,nRow,_T("Tên phẫu thuật theo phần mềm"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellMergedRows(nCol+13,nRow,2);
	xls.SetCellText(nCol+13,nRow,_T("Ngày thực hiện"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellMergedRows(nCol+14,nRow,2);
	xls.SetCellText(nCol+14,nRow,_T("Đối tượng"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	//Detail
	nRow = 10;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING);
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(2, nRow, rs.GetValue(_T("docno")), FMT_TEXT|FMT_RIGHT|FMT_WRAPING);
		xls.SetCellText(3, nRow, rs.GetValue(_T("operation_name1")), FMT_TEXT|FMT_WRAPING);
		if(m_bKPL == TRUE)
		{
			rs.GetValue(_T("KPL"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		}
		else
		{
			rs.GetValue(_T("LDB"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		}		
		nTotalGroup[0] += nAmount;

		rs.GetValue(_T("L1"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[1] += nAmount;

		rs.GetValue(_T("L2"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[2] += nAmount;

		rs.GetValue(_T("L3"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[3] += nAmount;

		rs.GetValue(_T("practitioner"),tmpStr);
		tmpStr=GetNameUser(tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("assistant"),tmpStr);
		tmpStr=GetNameUser(tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("anethetist"),tmpStr);
		szTemp=GetNameUser(tmpStr);
		rs.GetValue(_T("anethetist1"),tmpStr);
		szTemp2=GetNameUser(tmpStr);
		tmpStr.Format(_T("%s %s"), szTemp, szTemp2);
		xls.SetCellText(10, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("amount"), nAmount);
		nTotalAmount += nAmount;
		xls.SetCellText(11, nRow, double2str(nAmount), FMT_NUMBER1|FMT_WRAPING);
		xls.SetCellText(12, nRow, rs.GetValue(_T("operation_name")), FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("performdate"), tmpStr);
		xls.SetCellText(13, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(14, nRow, rs.GetValue(_T("objectname")), FMT_TEXT|FMT_WRAPING);
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(4,nRow,double2str(nTotalGroup[0]),FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING, true);
	xls.SetCellText(5,nRow,double2str(nTotalGroup[1]),FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING, true);
	xls.SetCellText(6,nRow,double2str(nTotalGroup[2]),FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING, true);
	xls.SetCellText(7,nRow,double2str(nTotalGroup[3]),FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING, true);
	xls.SetCellText(11, nRow, double2str(nTotalAmount),FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING, true);
	nRow++;
	nCol = 0;

	xls.SetCellText(nCol, nRow+2, _T("Loại đặc biệt"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+3, _T("Loại 1"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+4, _T("Loại 2"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+5, _T("Loại 3"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+6, _T("Cộng"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+ 8, _T("Số tiền bằng chữ:"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+10, _T("TRƯỞNG PHÒNG KHTH"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+11, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+19, _T("Đã ghi sổ cho thanh toán"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+20, _T("Ngày     tháng     năm"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+21, _T("CƠ QUAN TÀI CHÍNH"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+2, nRow, _T("Đơn giá"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+2, nRow+1, _T("Phẫu thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+3, nRow+1, _T("Thủ thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow, _T("Số lượng"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+1, _T("Phẫu thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+10, _T("HÀNH CHÍNH TRƯỞNG"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+11, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+21, _T("CHỨNG NHẬN CỦA CẤP CÓ THẨM QUYỀN"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+8, nRow+1, _T("Thủ thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+9, nRow+9, _T("Ngày     tháng      năm"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+9, nRow+10, _T("CHỦ NHIỆM KHOA"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+9, nRow+11, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+11, nRow, _T("Thành tiền"), FMT_TEXT, true, 10);

	EndWaitCursor();

	if(m_nInsurance==0)
		xls.Save(_T("Exports\\BOIDUONGPTTT BH.xls"));
	if(m_nService== 0)
		xls.Save(_T("Exports\\BOIDUONGPTTT DV.xls"));
	if(m_nPolicy == 0)
		xls.Save(_T("Exports\\BOIDUONGPTTT QUAN.xls"));

} 
void CTMOperationListB10::OnExport2(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szTemp2, szDept;
	int nIdx = 1, nRow = 0, nCol = 0;
	double nAmount = 0;

	for (int i = 0; i < m_wndDept.GetItemCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			m_wndDept.SetCurSel(i);
			szTemp = m_wndDept.GetItemText(i, 0);
			if (!szDept.IsEmpty())
				szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), szTemp);			
		}
	}

	if (szDept.IsEmpty())

	{
		ShowMessageBox(_T("Bạn chưa chọn khoa thực hiện!"),MB_ICONERROR);
		return;
	}
	szSQL = GetQuerySring1();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header
	xls.SetColumnWidth(0, 3);
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 30);
	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellMergedColumns(7, 0, 6);
	xls.SetCellMergedColumns(7, 1, 6);
	xls.SetCellMergedColumns(0, 3, 13);
	xls.SetCellMergedColumns(0, 4, 13);
	xls.SetCellMergedColumns(0, 5, 13);
	xls.SetCellText(0, 0, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(7, 0, _T("CỘNG HÒA XÃ HỘI CHỦ NGHĨA VIỆT NAM"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, false);
	xls.SetCellText(7, 1, _T("Độc lập - Tự do - Hạnh phúc"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(0, 1, pMF->GetCurrentDepartmentName(), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);

	xls.SetCellText(0, 3, _T("DANH SÁCH PHẪU THUẬT, THỦ THUẬT"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true, 12);

	if (m_nInsurance == 0)
		tmpStr.Format(_T("Bệnh nhân BHYT"));
	else if (m_nService == 0)
		tmpStr.Format(_T("Bệnh nhân DỊCH VỤ"));
	else if (m_nPolicy == 0)
		tmpStr.Format(_T("Bệnh nhân Quân"));
	xls.SetCellText(0, 4,tmpStr , FMT_TEXT|FMT_CENTER|FMT_WRAPING, true, 12);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);

	nRow=8;
	
	xls.SetCellText(nCol++,nRow,_T("Số TT"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Số hồ sơ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Họ và tên"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Đối tượng"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Mã thẻ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Tên phẫu thuật, thủ thuật"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	CDate iDate, eDate;
	CString szNewMonth, szOldMonth;
	iDate.ParseDate(m_szFromDate);
	eDate.ParseDate(m_szToDate);

	int nMerge = 0;
	while (iDate <= eDate){
		for (iDate; iDate <= eDate; iDate++)
		{
			szNewMonth.Format(_T("%d"), iDate.GetMonth());
			if (szNewMonth != szOldMonth && !szNewMonth.IsEmpty())
			{
				xls.SetCellMergedColumns(nCol-nMerge, nRow-1, nMerge);
				szTemp.Format(_T("Tháng %s"), szNewMonth);
				xls.SetCellText(nCol,nRow-1,szTemp,FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
				szOldMonth = szNewMonth;
				nMerge = 0;
			}
			szTemp.Format(_T("%d"), iDate.GetDay());
			xls.SetCellText(nCol++,nRow,szTemp,FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
			nMerge++;
		}
		xls.SetCellMergedColumns(nCol-nMerge, nRow-1, nMerge);
	}

	xls.SetCellText(nCol++,nRow,_T("Tổng cộng"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Chính"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Phụ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Giúp việc"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	//Detail
	nRow = 9;
	while (!rs.IsEOF())
	{
		nCol = 0;
		xls.SetCellText(nCol++, nRow, int2str(nIdx++), FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("docno")), FMT_INTEGER|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("pobject")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("extra_info")), FMT_TEXT|FMT_RIGHT|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("operation_name")), FMT_TEXT|FMT_WRAPING);

		int i = 0;

		iDate.ParseDate(m_szFromDate);
		eDate.ParseDate(m_szToDate);
		while (iDate <= eDate){
			for (iDate; iDate <= eDate; iDate++)
			{
				szTemp.Format(_T("ngay%d"), i);
				rs.GetValue(szTemp, tmpStr);
				xls.SetCellText(nCol++,nRow,tmpStr,FMT_NUMBER1|FMT_WRAPING,true,10);
				i++;
			}
		}

		rs.GetValue(_T("total"), nAmount);
		xls.SetCellText(nCol++, nRow, double2str(nAmount), FMT_NUMBER1|FMT_WRAPING);
		rs.GetValue(_T("practitioner"),tmpStr);
		tmpStr=GetNameUser(tmpStr);
		xls.SetCellText(nCol++, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("assistant"),tmpStr);
		tmpStr=GetNameUser(tmpStr);
		xls.SetCellText(nCol++, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("anethetist"),tmpStr);
		szTemp=GetNameUser(tmpStr);
		rs.GetValue(_T("anethetist1"),tmpStr);
		szTemp2=GetNameUser(tmpStr);
		tmpStr.Format(_T("%s %s"), szTemp, szTemp2);
		xls.SetCellText(nCol++, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		nRow++;
		rs.MoveNext();
	}


	EndWaitCursor();

	if(m_nInsurance==0)
		xls.Save(_T("Exports\\BOIDUONGPTTTchitiet BH.xls"));
	if(m_nService== 0)
		xls.Save(_T("Exports\\BOIDUONGPTTTchitiet DV.xls"));
	if(m_nPolicy == 0)
		xls.Save(_T("Exports\\BOIDUONGPTTTchitiet QUAN.xls"));

} 
void CTMOperationListB10::OnInsuranceSelect(){
	
}
void CTMOperationListB10::OnServiceSelect(){
	
}
void CTMOperationListB10::OnPolicySelect(){
	
}
	void CTMOperationListB10::OnOperationSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bOperation)
	{
		m_bSurgery = FALSE;
		m_bParaclinical = FALSE;
	}
	UpdateData(false);
}
	void CTMOperationListB10::OnSurgerySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bSurgery)
	{
		m_bOperation = FALSE;
		m_bParaclinical = FALSE;
	}
	UpdateData(false);
}
	void CTMOperationListB10::OnParaclinicalSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bParaclinical)
	{
		m_bOperation = FALSE;
		m_bSurgery = FALSE;
	}
	UpdateData(false);
}
	void CTMOperationListB10::OnPaymentSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bPayment)
		{
			m_bPayment2 = FALSE;
		}
		UpdateData(false);
	}
	void CTMOperationListB10::OnPayment2Select(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bPayment2)
		{
			m_bPayment = FALSE;
		}
		UpdateData(false);
	}
	void CTMOperationListB10::OnAllSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bAll)
		{
			m_bInpatient = FALSE;
			m_bOutpatient = FALSE;
			m_bFromExam = FALSE;
		}
		UpdateData(false);
	}
	void CTMOperationListB10::OnInpatientSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bInpatient)
		{
			m_bAll = FALSE;
			m_bOutpatient = FALSE;
			m_bFromExam = FALSE;
		}
		UpdateData(false);
	}
	void CTMOperationListB10::OnOutpatientSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bOutpatient)
		{
			m_bAll = FALSE;
			m_bInpatient = FALSE;
			m_bFromExam = FALSE;
		}
		UpdateData(false);
	}
	void CTMOperationListB10::OnFromExamSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bFromExam)
		{
			m_bAll = FALSE;
			m_bInpatient = FALSE;
			m_bOutpatient = FALSE;
		}
		UpdateData(false);
	}
	void CTMOperationListB10::OnBNTYCSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bBNTYC)
		{
			m_bKBNTYC = FALSE;
		}
		UpdateData(false);
	}
	void CTMOperationListB10::OnKBNTYCSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bKBNTYC)
		{
			m_bBNTYC = FALSE;
		}
		UpdateData(false);
	}
	void CTMOperationListB10::OnKPLSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	}
	void CTMOperationListB10::OnGiamDauSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	}
int CTMOperationListB10::OnAddTMOperationList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMOperationListB10::OnEditTMOperationList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMOperationListB10::OnDeleteTMOperationList(){
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
 		OnCancelTMOperationList();
 	}
	return 0;
}
int CTMOperationListB10::OnSaveTMOperationList(){
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
 		//OnTMOperationListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMOperationListB10::OnCancelTMOperationList(){
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
int CTMOperationListB10::OnTMOperationListListLoadData()
{
	return 0;
}
CString CTMOperationListB10::GetQuerySring(){
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szWhere, szWhere1, szWhere2, szPTTYC, szTemp, szDept;
	for (int i = 0; i < m_wndDept.GetItemCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			m_wndDept.SetCurSel(i);
			szTemp = m_wndDept.GetItemText(i, 0);
			if (!szDept.IsEmpty())
				szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), szTemp);			
		}
	}
	

	if(m_bPayment)
	{
		szWhere.AppendFormat(_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND (i.hfe_posted <> 'Y' AND NVL(re.hfe_posted, 'N') <> 'Y')"));
	}
	else if(m_bPayment2)
	{
		szWhere.AppendFormat(_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND (i.hfe_posted = 'Y' OR re.hfe_posted = 'Y')"));
	}
	else
	{
		szWhere1.AppendFormat(_T(" AND ho_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
							  _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		szWhere2.AppendFormat(_T(" AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}

	if (m_bSurgery == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='B4' "));
			szWhere2.AppendFormat(_T(" AND substr(hfl_opt_group,1,2)IN('00') "));
		}
	else if (m_bOperation == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='B5' "));
			szWhere2.AppendFormat(_T(" AND substr(hfl_opt_group,1,2)IN('00') "));
		}
	else if (m_bParaclinical == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='00' "));
			szWhere2.AppendFormat(_T(" AND substr(hfl_opt_group,1,2)IN('B4', 'B5') "));
		}

	if (m_bAll == TRUE)
		{

		}
	else if (m_bInpatient == TRUE)
		{
			szWhere1.AppendFormat(_T("AND deptid NOT IN('C1.1', 'C1.2', 'C.3', 'TYC','AB')"));
			//szWhere2.AppendFormat(_T("AND hpc_deptid NOT IN('C1.1', 'C1.2', 'C.3', 'TYC')"));
		}
	else if (m_bOutpatient == TRUE)
		{
			szWhere1.AppendFormat(_T("AND deptid IN('C1.1', 'C1.2', 'C.3', 'TYC', 'AB')"));
			//szWhere2.AppendFormat(_T("AND hpc_deptid IN('C1.1', 'C1.2', 'C.3', 'TYC')"));
		}
	else if(m_bFromExam == TRUE)
		{
			szWhere1.AppendFormat(_T("AND (deptid IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'AB') AND pdeptid NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'AB'))"));
		}
	
	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" AND ho_type in('I','C') "));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" AND ho_type in('S') "));
	else if (m_nPolicy == 0)
		szWhere.AppendFormat(_T(" AND ho_type not in('I','C','S') "));

	
	if(!szDept.IsEmpty())
		{
			if(szDept == _T("C6"))
				{
					szWhere1.AppendFormat(_T("AND (pdeptid in (%s) OR (deptid = 'C1.1' AND roomid = '54' AND pdeptid = 'C1.1'))"), szDept);
					szWhere2.AppendFormat(_T("AND hpc_pdeptid in (%s)"), szDept);
				}
			else if(szDept == _T("B10"))
			{
				szWhere1.AppendFormat(_T("AND (pdeptid in (%s) OR (deptid = 'C1.1' AND roomid = '52' AND pdeptid = 'C1.1'))"), szDept);
				szWhere2.AppendFormat(_T("AND hpc_pdeptid in (%s)"), szDept);
			}
			else
				{
					szWhere1.AppendFormat(_T("AND pdeptid in (%s)"), szDept);
					szWhere2.AppendFormat(_T("AND hpc_pdeptid in (%s)"), szDept);
					
				}
		}

	if(m_bKPL == TRUE)
		szWhere.AppendFormat(_T("AND groupid NOT IN ('B41', 'B45', 'B51', 'B42', 'B46', 'B52', 'B43', 'B47', 'B53', 'B44', 'B54')"));
	else
		szWhere.AppendFormat(_T("AND groupid IN ('B41', 'B45', 'B51', 'B42', 'B46', 'B52', 'B43', 'B47', 'B53', 'B44', 'B54')"));
	
	if(pMF->GetModuleID() == _T("SOM"))
		szPTTYC.Format(_T("   ho_qty * hfl_servprice        AS amount,"));
	else
		szPTTYC.Format(_T("   ho_qty * hfl_retprice        AS amount,"));

	if(m_bBNTYC)
		szWhere.AppendFormat(_T(" AND NVL(hd_isreq, 'N') = 'Y'"));
	if(m_bKBNTYC)
		szWhere.AppendFormat(_T(" AND NVL(hd_isreq, 'N') <> 'Y'"));

	if(m_bGiamDau)
		{
			szWhere1.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) = '500' "));
			szWhere2.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) = '500' "));
		}
	else
		{
			szWhere1.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) <> '500' "));
			szWhere2.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) <> '500' "));
		}

	szSQL.Format(_T(" SELECT") \
		_T(" docno,") \
		_T(" hcr_recordno AS record_no,") \
		_T(" get_patientname(docno) AS patient_name,") \
		_T(" extract(YEAR FROM hp_birthdate) AS yob,") \
		_T(" CASE WHEN ho_type NOT IN('I','C') AND hd_rank > 0 THEN") \
		_T(" (SELECT ss_vndesc FROM sys_sel WHERE ss_id = 'hms_rank' AND ss_code = hd_rank)||hp_workplace ELSE hd_cardno END extra_info,") \
		_T(" operation_name,") \
		_T(" operation_name1,") \
		_T(" CASE") \
		_T(" WHEN groupid IN ('B41', 'B45', 'B51')") \
		_T(" THEN quantity") \
		_T(" ELSE 0") \
		_T(" END AS L1,") \
		_T(" CASE") \
		_T(" WHEN groupid IN ('B42', 'B46', 'B52')") \
		_T(" THEN quantity") \
		_T(" ELSE 0") \
		_T(" END AS L2,") \
		_T(" CASE") \
		_T(" WHEN groupid IN ('B43', 'B47', 'B53')") \
		_T(" THEN quantity") \
		_T(" ELSE 0") \
		_T(" END AS L3,") \
		_T(" CASE") \
		_T(" WHEN groupid IN ('B44', 'B54')") \
		_T(" THEN quantity") \
		_T(" ELSE 0") \
		_T(" END AS LDB,") \
		_T(" CASE") \
		_T(" WHEN groupid NOT IN ('B41', 'B45', 'B51', 'B42', 'B46', 'B52', 'B43', 'B47', 'B53', 'B44', 'B54')") \
		_T(" THEN quantity") \
		_T(" ELSE 0") \
		_T(" END AS KPL,") \
		_T(" amount,") \
		_T(" practitioner,") \
		_T(" assistant,") \
		_T(" anethetist,") \
		_T(" anethetist1,") \
		_T(" ho_desc AS objectname,") \
		_T(" performdate") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ho_docno                 AS docno,") \
		_T("   hfl_name                      AS operation_name,") \
		_T("   ho_comment                    AS operation_name1,") \
		_T("   SUBSTR(hfl_groupid,1,3)       AS groupid,") \
		_T("   get_username(ho_practitioner) AS practitioner,") \
		_T("   get_username(ho_assistant)    AS assistant,") \
		_T("   get_username(ho_user4)        AS anethetist,") \
		_T("   get_username(ho_anesthetist)  AS anethetist1,") \
		_T("   ho_qty                        AS quantity, %s") \
		_T("   ho_invoiceno                  AS invoiceno,") \
		_T("   ho_performdate                AS performdate") \
		_T(" FROM") \
		_T("   (SELECT ho_docno,") \
		_T("     ho_comment,") \
		_T("     ho_practitioner,") \
		_T("     ho_assistant,") \
		_T("     ho_user4,") \
		_T("     ho_anesthetist,") \
		_T("     ho_qty,") \
		_T("     ho_invoiceno,") \
		_T("     ho_performdate,") \
		_T("     ho_itemid,") \
		_T("     CASE") \
		_T("       WHEN ho_pdeptid = 'B5'") \
		_T("       THEN ho_deptid") \
		_T("       ELSE ho_pdeptid") \
		_T("     END AS pdeptid,") \
		_T("     ho_deptid AS deptid,") \
		_T("     ho_roomid AS roomid") \
		_T("   FROM hms_operation") \
		_T("   WHERE ho_status <> 'O' ") \
		_T("   ) tbl1") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid  = ho_itemid)") \
		_T(" WHERE 1 = 1 %s") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" hpc_docno AS docno,") \
		_T(" hfl_name AS operation_name,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS operation_name1,") \
		_T(" SUBSTR(hfl_opt_group,1,3) AS groupid,") \
		_T(" get_username(hpc_practitioner) AS practitioner,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS assistant,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS anethetist,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS anethetist1,") \
		_T(" hpcl_qty AS quantity,") \
		_T(" hpcl_qty * hfl_retprice AS amount,") \
		_T(" hpc_invoiceno AS invoiceno,") \
		_T(" hpc_performdate AS performdate") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid = hpcl_itemid)") \
		_T(" WHERE hpcl_status <> 'O'") \
		_T(" AND (hfl_opt_group IS NOT NULL OR substr(hfl_opt_group, 1, 1) = 'B') %s") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" hpc_docno AS docno,") \
		_T(" hfl_name AS operation_name,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS operation_name1,") \
		_T(" SUBSTR(hfl_opt_group,1,3) AS groupid,") \
		_T(" get_username(hpc_practitioner) AS practitioner,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS assistant,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS anethetist,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS anethetist1,") \
		_T(" hpcl_qty AS quantity,") \
		_T(" hpcl_qty * hfl_retprice AS amount,") \
		_T(" hpc_invoiceno AS invoiceno,") \
		_T(" hpc_performdate AS performdate") \
		_T(" FROM hms_pacsorder") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid = hpcl_itemid)") \
		_T(" WHERE hpcl_status <> 'O'") \
		_T(" AND (hfl_opt_group IS NOT NULL OR substr(hfl_opt_group, 1, 1) = 'B')  %s") \
		_T(" ) tbl") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(docno = hd_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hd_patientno = hp_patientno)") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id = hd_object)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON(hcr_docno = hd_docno)") \
		_T(" LEFT JOIN hms_fee_invoice i") \
		_T(" ON(i.hfe_docno   = docno") \
		_T(" AND i.hfe_invoiceno = invoiceno)") \
		_T(" LEFT JOIN hms_fee_refund re") \
		_T(" ON(re.hfe_docno   = i.hfe_docno") \
		_T(" AND re.hfe_refidx = i.hfe_invoiceno)") \
		_T(" WHERE 1 = 1 %s ORDER BY performdate, docno"), szPTTYC, szWhere1, szWhere2, szWhere2, szWhere);
		_fmsg(_T("%s"), szSQL);
	return szSQL;

}
CString CTMOperationListB10::GetQuerySring1()
{
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szWhere, szWhere1, szWhere2, szPTTYC, szTemp, szDept;
	for (int i = 0; i < m_wndDept.GetItemCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			m_wndDept.SetCurSel(i);
			szTemp = m_wndDept.GetItemText(i, 0);
			if (!szDept.IsEmpty())
				szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), szTemp);			
		}
	}	

	if(m_bPayment)
	{
		szWhere.AppendFormat(_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND (i.hfe_posted <> 'Y' AND NVL(re.hfe_posted, 'N') <> 'Y')"));
	}
	else if(m_bPayment2)
	{
		szWhere.AppendFormat(_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND (i.hfe_posted = 'Y' OR re.hfe_posted = 'Y')"));
	}
	else
	{
		szWhere1.AppendFormat(_T(" AND ho_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
							  _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		szWhere2.AppendFormat(_T(" AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}

	if (m_bSurgery == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='B4' "));
			szWhere2.AppendFormat(_T(" AND substr(hfl_opt_group,1,2)IN('00') "));
		}
	else if (m_bOperation == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='B5' "));
			szWhere2.AppendFormat(_T(" AND substr(hfl_opt_group,1,2)IN('00') "));
		}
	else if (m_bParaclinical == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='00' "));
			szWhere2.AppendFormat(_T(" AND substr(hfl_opt_group,1,2)IN('B4', 'B5') "));
		}

	if (m_bAll == TRUE)
		{

		}
	else if (m_bInpatient == TRUE)
		{
			szWhere1.AppendFormat(_T("AND deptid NOT IN('C1.1', 'C1.2', 'C.3', 'TYC','AB')"));
			//szWhere2.AppendFormat(_T("AND hpc_deptid NOT IN('C1.1', 'C1.2', 'C.3', 'TYC')"));
		}
	else if (m_bOutpatient == TRUE)
		{
			szWhere1.AppendFormat(_T("AND deptid IN('C1.1', 'C1.2', 'C.3', 'TYC', 'AB')"));
			//szWhere2.AppendFormat(_T("AND hpc_deptid IN('C1.1', 'C1.2', 'C.3', 'TYC')"));
		}
	else if(m_bFromExam == TRUE)
		{
			szWhere1.AppendFormat(_T("AND (deptid IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'AB') AND pdeptid NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'AB'))"));
		}
	
	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" AND ho_type in('I','C') "));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" AND ho_type in('S') "));
	else if (m_nPolicy == 0)
		szWhere.AppendFormat(_T(" AND ho_type not in('I','C','S') "));

	
	if(!szDept.IsEmpty())
		{
			if(szDept == _T("C6"))
				{
					szWhere1.AppendFormat(_T("AND (pdeptid in (%s) OR (deptid = 'C1.1' AND roomid = '54' AND pdeptid = 'C1.1'))"), szDept);
					szWhere2.AppendFormat(_T("AND hpc_pdeptid in (%s)"), szDept);
				}
			else if(szDept == _T("B10"))
			{
				szWhere1.AppendFormat(_T("AND (pdeptid in (%s) OR (deptid = 'C1.1' AND roomid = '52' AND pdeptid = 'C1.1'))"), szDept);
				szWhere2.AppendFormat(_T("AND hpc_pdeptid in (%s)"), szDept);
			}
			else
				{
					szWhere1.AppendFormat(_T("AND pdeptid in (%s)"), szDept);
					szWhere2.AppendFormat(_T("AND hpc_pdeptid in (%s)"), szDept);
					
				}
		}

	if(m_bKPL == TRUE)
		szWhere.AppendFormat(_T("AND groupid NOT IN ('B41', 'B45', 'B51', 'B42', 'B46', 'B52', 'B43', 'B47', 'B53', 'B44', 'B54')"));
	else
		szWhere.AppendFormat(_T("AND groupid IN ('B41', 'B45', 'B51', 'B42', 'B46', 'B52', 'B43', 'B47', 'B53', 'B44', 'B54')"));

	if(pMF->GetModuleID() == _T("SOM"))
		szPTTYC.Format(_T("   ho_qty * hfl_servprice        AS amount,"));
	else
		szPTTYC.Format(_T("   ho_qty * hfl_retprice        AS amount,"));

	if(m_bBNTYC)
		szWhere.AppendFormat(_T(" AND NVL(hd_isreq, 'N') = 'Y'"));
	if(m_bKBNTYC)
		szWhere.AppendFormat(_T(" AND NVL(hd_isreq, 'N') <> 'Y'"));

	if(m_bGiamDau)
		{
			szWhere1.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) = '500' "));
			szWhere2.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) = '500' "));
		}
	else
		{
			szWhere1.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) <> '500' "));
			szWhere2.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) <> '500' "));
		}
	CDate iDate, eDate;
	iDate.ParseDate(m_szFromDate);
	eDate.ParseDate(m_szToDate);

	CString szField, szField2, szSum;
	szTemp.IsEmpty();
	
	while (iDate <= eDate)
	{
		int i = 0;
		for (iDate; iDate <= eDate; iDate++)
		{
			szTemp.Format(_T("%.4d/%.2d/%.2d"), iDate.GetYear(), iDate.GetMonth(), iDate.GetDay());
			szField.AppendFormat(_T("CASE WHEN TRUNC(ho_performdate) = TO_DATE('%s', 'YYYY-MM-DD') THEN ho_qty ELSE 0 END AS ngay%d, "), szTemp, i);
			szField2.AppendFormat(_T("CASE WHEN TRUNC(hpc_performdate) = TO_DATE('%s', 'YYYY-MM-DD') THEN hpcl_qty ELSE 0 END AS ngay%d, "), szTemp, i);
			szSum.AppendFormat(_T("SUM(ngay%d) AS ngay%d, "), i, i);
			i++;
		}
	}

	szSQL.Format(_T(" SELECT") \
		_T(" docno,") \
		_T(" hcr_recordno AS record_no,") \
		_T(" get_patientname(docno) AS patient_name,") \
		_T(" extract(YEAR FROM hp_birthdate) AS yob,") \
		_T(" CASE WHEN ho_type NOT IN('I','C') AND hd_rank > 0 THEN") \
		_T(" (SELECT ss_vndesc FROM sys_sel WHERE ss_id = 'hms_rank' AND ss_code = hd_rank)||hp_workplace ELSE hd_cardno END extra_info,") \
		_T(" ho_desc AS pobject,") \
		_T(" operation_name,") \
		_T(" operation_name1, %s") \
		_T(" SUM(quantity) AS total,") \
		_T(" MIN(practitioner) AS practitioner,") \
		_T(" MIN(assistant) AS assistant,") \
		_T(" MIN(anethetist) AS anethetist,") \
		_T(" MIN(anethetist1) AS anethetist1") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ho_docno                 AS docno,") \
		_T("   hfl_name                      AS operation_name,") \
		_T("   ho_comment                    AS operation_name1,") \
		_T("   SUBSTR(hfl_groupid,1,3)       AS groupid, %s") \
		_T("   get_username(ho_practitioner) AS practitioner,") \
		_T("   get_username(ho_assistant)    AS assistant,") \
		_T("   get_username(ho_user4)        AS anethetist,") \
		_T("   get_username(ho_anesthetist)  AS anethetist1,") \
		_T("   ho_qty                        AS quantity,") \
		_T("   ho_qty * hfl_servprice        AS amount,") \
		_T("   ho_invoiceno                  AS invoiceno,") \
		_T("   ho_performdate                AS orderdate") \
		_T(" FROM") \
		_T("   (SELECT ho_docno,") \
		_T("     ho_comment,") \
		_T("     ho_practitioner,") \
		_T("     ho_assistant,") \
		_T("     ho_user4,") \
		_T("     ho_anesthetist,") \
		_T("     ho_qty,") \
		_T("     ho_invoiceno,") \
		_T("     ho_performdate,") \
		_T("     ho_itemid,") \
		_T("     CASE") \
		_T("       WHEN ho_pdeptid = 'B5'") \
		_T("       THEN ho_deptid") \
		_T("       ELSE ho_pdeptid") \
		_T("     END AS pdeptid,") \
		_T("     ho_deptid AS deptid,") \
		_T("     ho_roomid AS roomid") \
		_T("   FROM hms_operation") \
		_T("   WHERE ho_status <> 'O' ") \
		_T("   ) tbl1") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid  = ho_itemid)") \
		_T(" WHERE 1 = 1 %s") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" hpc_docno AS docno,") \
		_T(" hfl_name AS operation_name,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS operation_name1,") \
		_T(" SUBSTR(hfl_opt_group,1,3) AS groupid, %s") \
		_T(" get_username(hpc_practitioner) AS practitioner,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS assistant,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS anethetist,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS anethetist1,") \
		_T(" hpcl_qty AS quantity,") \
		_T(" hpcl_qty * hfl_retprice AS amount,") \
		_T(" hpc_invoiceno AS invoiceno,") \
		_T(" hpc_performdate AS orderdate") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid = hpcl_itemid)") \
		_T(" WHERE hpcl_status <> 'O'") \
		_T(" AND (hfl_opt_group IS NOT NULL OR substr(hfl_opt_group, 1, 1) = 'B') %s") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" hpc_docno AS docno,") \
		_T(" hfl_name AS operation_name,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS operation_name1,") \
		_T(" SUBSTR(hfl_opt_group,1,3) AS groupid, %s") \
		_T(" get_username(hpc_practitioner) AS practitioner,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS assistant,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS anethetist,") \
		_T(" CAST(' ' AS NVARCHAR2(1)) AS anethetist1,") \
		_T(" hpcl_qty AS quantity,") \
		_T(" hpcl_qty * hfl_retprice AS amount,") \
		_T(" hpc_invoiceno AS invoiceno,") \
		_T(" hpc_performdate AS orderdate") \
		_T(" FROM hms_pacsorder") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid = hpcl_itemid)") \
		_T(" WHERE hpcl_status <> 'O'") \
		_T(" AND (hfl_opt_group IS NOT NULL OR substr(hfl_opt_group, 1, 1) = 'B')  %s") \
		_T(" ) tbl") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(docno = hd_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hd_patientno = hp_patientno)") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id = hd_object)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON(hcr_docno = hd_docno)") \
		_T(" LEFT JOIN hms_fee_invoice i") \
		_T(" ON(i.hfe_docno   = docno") \
		_T(" AND i.hfe_invoiceno = invoiceno)") \
		_T(" LEFT JOIN hms_fee_refund re") \
		_T(" ON(re.hfe_docno   = i.hfe_docno") \
		_T(" AND re.hfe_refidx = i.hfe_invoiceno)") \
		_T(" WHERE 1 = 1 %s ")
		_T(" GROUP BY") \
		_T(" docno,") \
		_T(" hcr_recordno,") \
		_T(" hp_birthdate,") \
		_T(" ho_type,") \
		_T(" hd_rank,") \
		_T(" hp_workplace,") \
		_T(" hd_cardno,") \
		_T(" operation_name,") \
		_T(" operation_name1,") \
		_T(" ho_desc") \
		_T(" ORDER BY docno"), szSum, szField, szWhere1, szField2, szWhere2, szField2, szWhere2, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
CString CTMOperationListB10::GetNameUser(CString UserName, CString LastName ){
	CString szValue,tmpStr;
	int nIndex=0;
	bool flag= true;
	CString szFind;
	szFind=_T(" ");
	if(UserName.GetLength() >0)
	{
		for(int i=1;i < UserName.GetLength();i++)
		{	
			tmpStr=UserName.Right(i);
			if(tmpStr.Find(szFind) == 1 && flag== true && i>2)
			{
				nIndex=i;
				flag=false;	
			}
		}
	}
	if(nIndex >0)
	{
		szValue=UserName.Right(nIndex-1);
	}
	else
	{
		szValue=UserName;
	}
	return szValue;
	

}
CString CTMOperationListB10::GetItemAbbreviation(CString szItemName, CString szExtraWord)
{
	CStringArray arr;
	CString szTemp;
	CString szValue;
	int nIndex = 0;
	szValue.Empty();

	for (int i = 0; i < szItemName.GetLength(); i++)
	{
		if (szItemName[i] == _T(' '))
		{
			szTemp = szItemName.Mid(nIndex, i - nIndex);
			arr.Add(szTemp);
			nIndex = i + 1;
		}
	}

	if (szItemName.GetLength() > 0)
	{
		szTemp = szItemName.Mid(nIndex, szItemName.GetLength() - nIndex);
		arr.Add(szTemp);
	}

	szTemp.Empty();
	LPTSTR str = new TCHAR[1];

	for (int i = 0; i < arr.GetSize(); i++)
	{
		szTemp = arr[i];

		if (szTemp.Left(1) != _T("Đ") && szTemp.Left(1) != _T("đ"))
		{
			UnMarkString(szTemp.Left(1), str);
			CString tmpStr = CString(str);
			szValue.AppendFormat(_T("%s"), tmpStr.Left(1));
		}
		else
			szValue.AppendFormat(_T("%s"), szTemp.Left(1));
	}

	delete[] str;

	if (szExtraWord.IsEmpty())
		return szValue;
	else
		return szValue + _T(" ") + szExtraWord;
}
