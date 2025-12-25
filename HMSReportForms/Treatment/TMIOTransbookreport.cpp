#include "stdafx.h"
#include "TMIOTransbookReport.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnYearKillfocus();
} */
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	 ((CTMIOTransbookreport*)pWnd)->OnInsuranceSelect();
}
static void _OnDiscountSelectFnc(CWnd *pWnd){
	 ((CTMIOTransbookreport*)pWnd)->OnDiscountSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	 ((CTMIOTransbookreport*)pWnd)->OnServiceSelect();
}

static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMIOTransbookreport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMIOTransbookreport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMIOTransbookreport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMIOTransbookreport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMIOTransbookreport *)pWnd)->OnToDateCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMIOTransbookreport* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CTMIOTransbookreport *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnDoctorAddNew();
}*/


static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMIOTransbookreport* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CTMIOTransbookreport *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CTMIOTransbookreport *)pWnd)->OnDoctorAddNew();
}*/



static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMIOTransbookreport *pVw = (CTMIOTransbookreport *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMIOTransbookreport *pVw = (CTMIOTransbookreport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMIOTransbookreport *pVw = (CTMIOTransbookreport *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCTMIOTransbookreportFnc(CWnd *pWnd){
	 return ((CTMIOTransbookreport*)pWnd)->OnAddCTMIOTransbookreport();
} 
static int _OnEditCTMIOTransbookreportFnc(CWnd *pWnd){
	 return ((CTMIOTransbookreport*)pWnd)->OnEditCTMIOTransbookreport();
} 
static int _OnDeleteCTMIOTransbookreportFnc(CWnd *pWnd){
	 return ((CTMIOTransbookreport*)pWnd)->OnDeleteCTMIOTransbookreport();
} 
static int _OnSaveCTMIOTransbookreportFnc(CWnd *pWnd){
	 return ((CTMIOTransbookreport*)pWnd)->OnSaveCTMIOTransbookreport();
} 
static int _OnCancelCTMIOTransbookreportFnc(CWnd *pWnd){
	 return ((CTMIOTransbookreport*)pWnd)->OnCancelCTMIOTransbookreport();
} 
CTMIOTransbookreport::CTMIOTransbookreport(CWnd *pParent)
	{

	m_nDlgWidth = 430;
	m_nDlgHeight = 190;
	SetDefaultValues();
	m_bPreview = true;
}
CTMIOTransbookreport::~CTMIOTransbookreport(){
}
void CTMIOTransbookreport::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 465, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 80, 55);
	m_wndYear.Create(this,85, 30, 225, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 235, 30, 315, 55);
	m_wndReportPeriod.Create(this,320, 30, 460, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 80, 85);
	m_wndFromDate.Create(this,85, 60, 225, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 60, 315, 85);
	m_wndToDate.Create(this,320, 60, 460, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 90, 80, 115);
	m_wndStatus.Create(this,85, 90, 225, 115);

	m_wndDoctorLabel.Create(this, _T("Doctor"), 235, 90, 315, 115);
	m_wndDoctor.Create(this,320, 90, 460, 115); 


	m_wndInsurance.Create(this, _T("Insurance"), 5, 125, 90, 150);
	m_wndDiscount.Create(this, _T("Discount"), 95, 125, 180, 150);
	m_wndService.Create(this, _T("Service"), 185, 125, 270, 150);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 280, 125, 380, 150);
	m_wndExport.Create(this, _T("&Export"), 385, 125, 465, 150);

}
void CTMIOTransbookreport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
//	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
//	m_wndDoctor.SetCheckValue(true);
	m_wndStatus.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 60);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


}
void CTMIOTransbookreport::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);



		m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);


	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndDiscount.SetEvent(WE_CLICK, _OnDiscountSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);


	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = pMF->GetSysDate();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
	m_szToDate += _T("23:59");
	m_szReportPeriodKey.Format(_T("%d"), ToInt(tmpStr.Mid(5, 2)));
	UpdateData(false);
}
void CTMIOTransbookreport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Check(pDX, m_wndInsurance.GetDlgCtrlID(), m_bInsurance);
	DDX_Check(pDX, m_wndDiscount.GetDlgCtrlID(), m_bDiscount);
	DDX_Check(pDX, m_wndService.GetDlgCtrlID(), m_bService);


}
void CTMIOTransbookreport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMIOTransbookreport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMIOTransbookreport::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();
	m_bInsurance=TRUE;
	m_bDiscount=TRUE;
	m_bService=TRUE;

}
int CTMIOTransbookreport::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db);
		CDate dt;
		CDateTime dt1, dt2;
		dt.ParseDate(pMF->GetSysDate());
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1);
			dt1.SetDate(dt.GetYear(), dt.GetMonth(), dt.GetDay());
			dt1.SetTime(0, 0, 0);
			dt2.SetDate(dt.GetYear(), dt.GetMonth(), dt.GetDay());
			dt2.SetTime(23, 59, 0);
			m_szFromDate = dt1.GetDateTime();
			m_szToDate = dt2.GetDateTime();
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
/*void CTMIOTransbookreport::OnYearChange(){
	
} */
/*void CTMIOTransbookreport::OnYearSetfocus(){
	
} */
/*void CTMIOTransbookreport::OnYearKillfocus(){
	
} */
int CTMIOTransbookreport::OnYearCheckValue(){
	return 0;
} 
void CTMIOTransbookreport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMIOTransbookreport::OnReportPeriodSelendok(){
	 CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}

	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	UpdateData(false);
}
/*void CTMIOTransbookreport::OnReportPeriodSetfocus(){
	
}*/
/*void CTMIOTransbookreport::OnReportPeriodKillfocus(){
	
}*/
long CTMIOTransbookreport::OnReportPeriodLoadData(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	};
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
/*void CTMIOTransbookreport::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMIOTransbookreport::OnFromDateChange(){
	
} */
/*void CTMIOTransbookreport::OnFromDateSetfocus(){
	
} */
/*void CTMIOTransbookreport::OnFromDateKillfocus(){
	
} */
int CTMIOTransbookreport::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMIOTransbookreport::OnToDateChange(){
	
} */
/*void CTMIOTransbookreport::OnToDateSetfocus(){
	
} */
/*void CTMIOTransbookreport::OnToDateKillfocus(){
	
} */
int CTMIOTransbookreport::OnToDateCheckValue(){
	return 0;
} 
void CTMIOTransbookreport::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMIOTransbookreport::OnStatusSelendok(){
	 
}
/*void CTMIOTransbookreport::OnStatusSetfocus(){
	
}*/
/*void CTMIOTransbookreport::OnStatusKillfocus(){
	
}*/
long CTMIOTransbookreport::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code ='%s' ") , m_szStatusKey);
	};
	szSQL.Format(_T(" SELECT ss_code as id,ss_desc as name FROM sys_sel WHERE ss_id ='hms_suggestion' and ss_code in('A','T','D','F','M')  %s"), szWhere);
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMIOTransbookreport::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */



void CTMIOTransbookreport::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMIOTransbookreport::OnDoctorSelendok(){
	 
}
/*void CTMIOTransbookreport::OnDoctorSetfocus(){
	
}*/
/*void CTMIOTransbookreport::OnDoctorKillfocus(){
	
}*/
long CTMIOTransbookreport::OnDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" AND su_userid ='%s' ") , m_szDoctorKey);
	};
	szSQL.Format(_T("select su_userid as id , su_name as name from sys_user where 1=1 and su_deptid='%s' %s"),pMF->GetCurrentDepartmentID(), szWhere);
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CTMIOTransbookreport::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview = true;
	OnReportInpatientpatientlistreport();
	
} 
void CTMIOTransbookreport::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnExport();
} 
void CTMIOTransbookreport::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
int CTMIOTransbookreport::OnAddCTMIOTransbookreport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;
}
int CTMIOTransbookreport::OnEditCTMIOTransbookreport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMIOTransbookreport::OnDeleteCTMIOTransbookreport(){
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
 		OnCancelCTMIOTransbookreport(); 
 	}
	return 0;
}
int CTMIOTransbookreport::OnSaveCTMIOTransbookreport(){
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
 		//OnCTMIOTransbookreportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CTMIOTransbookreport::OnCancelCTMIOTransbookreport(){
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
int CTMIOTransbookreport::OnCTMIOTransbookreportListLoadData(){
	return 0;
}
void CTMIOTransbookreport::OnInsuranceSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CTMIOTransbookreport::OnDiscountSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CTMIOTransbookreport::OnServiceSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CTMIOTransbookreport::OnReportInpatientpatientlistreport()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr,tmpStr2 ,szFromDateLabel, szWhereDate, szWhere,szWhereObjects, szObjects;
	CString szDate, szSysDate, szAge;
	CString szFromDate, szToDate;
	CReport rpt; 
	UpdateData(true);
	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;
	
	BeginWaitCursor();
	if(!rpt.Init(_T("Reports/HMS/TM_SOVAOVIENRAVIENCHUYENVIEN.RPT")))
	{
		return ;
	}
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDateTime::Convert(szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),CDateTime::Convert(szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	szSQL = GetQueryString_v0();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
		CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);

	int i,nIndex = 1 ;
	long docno=0, age=0, nTotalPatient=0;
	long c[30];
	for (i=0;i<30;i++)
	{
		c[i]=0;
	}

	
	CReportSection* rptDetail = rpt.GetDetail(); 
	while(!rs.IsEOF())
	{ 			
		nTotalPatient++;
		rptDetail = rpt.AddDetail();		
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		if(tmpStr == _T("M"))
		{
			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			c[4]++;
		}
		else 
		{
			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			c[5]++;

		}
		
		rs.GetValue(_T("cardno"), tmpStr);
		if(!tmpStr.IsEmpty()) c[6]++;
		rptDetail->SetValue(_T("6"), tmpStr);
		tmpStr.Empty();
		rs.GetValue(_T("age"),age);
		rs.GetValue(_T("age"),szAge);
		if (age <=6 || szAge.Right(1) ==_T("T") || szAge.Right(1) ==_T("N")) tmpStr.Format(_T("X"));
		if(!tmpStr.IsEmpty()) c[7]++;
		rptDetail->SetValue(_T("7"), tmpStr);
		
		rs.GetValue(_T("occupation"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("transferplace"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		
		rs.GetValue(_T("admitdate"), tmpStr);
		rptDetail->SetValue(_T("11"), CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm));
		if(!tmpStr.IsEmpty()) c[11]++;
		rs.GetValue(_T("dischargedate"), tmpStr);
		rptDetail->SetValue(_T("12"), CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm));
		if(!tmpStr.IsEmpty()) c[12]++;
		rs.GetValue(_T("Transhospitall"), tmpStr);
		rptDetail->SetValue(_T("13"), CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm));
		if(!tmpStr.IsEmpty()) c[13]++;
		
		rs.GetValue(_T("tuvong"), tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);
		if(!tmpStr.IsEmpty()) c[14]++;
		rs.GetValue(_T("tuvongtruoc24"), tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);
		if(!tmpStr.IsEmpty()) c[15]++;
	
		rs.GetValue(_T("diagnostic"), tmpStr);
		tmpStr.AppendFormat(_T("(%s)"), rs.GetValue(_T("icd")));
		rptDetail->SetValue(_T("16"), tmpStr);

		rs.GetValue(_T("maindisease"), tmpStr);
//		tmpStr += rs.GetValue(_T("mainicd"));
		rptDetail->SetValue(_T("17"), tmpStr);

		rs.GetValue(_T("khongthaydoi"), tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);
		if(!tmpStr.IsEmpty()) c[18]++;

		rs.GetValue(_T("khoi"), tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);
		if(!tmpStr.IsEmpty()) c[19]++;

		rs.GetValue(_T("Dogiam"), tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr);
		if(!tmpStr.IsEmpty()) c[20]++;

		rs.GetValue(_T("Nang"), tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);
		if(!tmpStr.IsEmpty()) c[21]++;

		rs.GetValue(_T("treatqty"), tmpStr);
		if (tmpStr.IsEmpty()) rs.GetValue(_T("ngaydt"), tmpStr);

		rptDetail->SetValue(_T("22"), tmpStr);
		if(!tmpStr.IsEmpty()) c[22]+= ToInt(tmpStr);

		rs.GetValue(_T("dienthoai"), tmpStr);
		rptDetail->SetValue(_T("23"), tmpStr);

		rs.MoveNext();
	}
	
	for(i=3;i<=22;i++)
	{	CString szFied;
		szFied.Format(_T("s%d"),i);
		tmpStr.Format(_T("%ld"),c[i]);				
		rpt.GetReportFooter()->SetValue(szFied, tmpStr);
	}

	tmpStr.Format(_T("%d"), docno);
	rpt.GetReportHeader()->SetValue(_T("ToNum"), tmpStr);
	tmpStr.Format(_T("%d"), nTotalPatient);
	rpt.GetReportHeader()->SetValue(_T("TotalPatient"), tmpStr);	
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();

}
void CTMIOTransbookreport::OnExport()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, szFileTitle, szFilePath, szDirectory, tmpStr;
	int nCol = 0, nRow = 0, nIdx = 1, nFirstRow = 10;
	szDirectory = _T("Exports\\Template");
	szFileTitle = _T("Mau_So_ra_vao_vien");
	if (pMF->GetModuleID() == _T("SOM"))
	{
		szFileTitle = _T("Mau_PTTYC_So_ra_vao_vien");	
	}
	szFilePath.Format(_T("%s\\%s.xls"), szDirectory, szFileTitle);
	if (!xls.Load(szFilePath))
	{
		CString szMsg;
		szMsg.Format(_T("Thiếu file %s"), szFilePath);
		ShowMessageBox(szMsg);
		return;
	}
	xls.SetWorksheet(0);
	xls.SetCellText(nCol, nRow++, pMF->m_CompanyInfo.sc_pname, FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_name, FMT_TEXT|FMT_CENTER, true);
	nRow = 3;
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate), CDate::Convert(m_szToDate));
	xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT|FMT_CENTER);
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = nFirstRow;
	while (!rs.IsEOF())
	{
		nCol = 0;
		xls.SetCellText(nCol++, nRow, int2str(nIdx++), FMT_TEXT);
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			tmpStr = rs.GetFieldName(i);
			if (tmpStr.Find(_T("P_")) == 0)
			{
				continue;
			}
			xls.SetCellText(nCol++, nRow, rs.GetValue(i), FMT_TEXT | FMT_WRAPING);
		}
		nRow++;
		rs.MoveNext();
	}
	szDirectory = _T("Exports");
	szFileTitle = _T("So_ra_vao_vien");
	if (pMF->GetModuleID() == _T("SOM"))
	{
		szFileTitle = _T("PTTYC_So_ra_vao_vien");	
	}
	szFilePath.Format(_T("%s\\%s.xls"), szDirectory, szFileTitle);
	xls.Save(szFilePath);
}

void CTMIOTransbookreport::OnExport_v0()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr,tmpStr2 ,szFromDateLabel, szWhereDate, szWhere,szWhereObjects, szObjects;
	CString szDate, szSysDate;
	CString szFromDate, szToDate, szAge;
	CReport rpt; 

	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;
	UpdateData(true);


	BeginWaitCursor();
	szSQL = GetQueryString_v0();
	
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}	
	CExcel xls;	
	CString xlsfile;
	int nRow = 0, nCol = 0, age = 0;
	//xlsfile.Format(_T("Exports\\SOVAOVIENRAVIENCHUYENVIEN.XLS"));
	//if(!pMF->DownloadFile(_T("ReportDemo.xls"), xlsfile))
	//	ShowMessageBox(_T("Can not download file from server."));
	//if(!xls.Load(xlsfile))
	//	return;

	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 15);
	xls.SetColumnWidth(3, 3);
	xls.SetColumnWidth(4, 4);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 13);
	xls.SetColumnWidth(8, 50);
	xls.SetColumnWidth(9, 31);
	xls.SetColumnWidth(10, 14);
	xls.SetColumnWidth(11, 14);
	xls.SetColumnWidth(12, 14);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 32);
	xls.SetColumnWidth(16, 31);
	xls.SetColumnWidth(17, 8);
	xls.SetColumnWidth(18, 8);
	xls.SetColumnWidth(19, 8);
	xls.SetColumnWidth(20, 8);
	xls.SetColumnWidth(21, 8);
	xls.SetColumnWidth(22, 16);
	xls.SetColumnWidth(23, 20);
	xls.SetColumnWidth(24, 20);
	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 2, _T("BÁO CÁO BỆNH NHÂN VÀO VIỆN - RA VIỆN - CHUYỂN VIỆN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 4, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 4, _T("Tên bệnh nhân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 4, _T("Nữ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 4, _T("Nam"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 4, _T("Số thẻ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 4, _T("Trẻ < 6 tuổi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 4, _T("Nghề nghiệp"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, 4, _T("Địa chỉ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 4, _T("Nơi giới thiệu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 4, _T("Ngày vào"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 4, _T("Ngày ra"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, 4, _T("Chuyển viện"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 4, _T("Tử vong"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(14, 4, _T("Chết sau 24h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 4, _T("Chẩn đoán khám bệnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(16, 4, _T("Chẩn đoán"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, 4, _T("Không thay đổi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(18, 4, _T("Khỏi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, 4, _T("Đỡ giảm"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(20, 4, _T("Nặng hơn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 4, _T("Tổng số ngày ĐT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(22, 4, _T("Điện thoại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(23, 4, _T("Bác sỹ điều trị"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(24, 4, _T("Khu điều trị"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 11);

	int i = 0, nIndex = 1 ;
	int c[22];
	long docno=0, nTotalPatient=0;
	
	for (i=0;i<22;i++)
	{
		c[i]=0;
	}
	nRow = 5;
	while(!rs.IsEOF())
	{ 			
		nRow++;		
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr,FMT_NUMBER1);
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(1,nRow, tmpStr,FMT_INTEGER);
		rs.GetValue(_T("patientname"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("sex"), tmpStr);
		if(tmpStr == _T("M"))
		{
			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(3, nRow, tmpStr,FMT_NUMBER1);
		}
		else 
		{
			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(4, nRow, tmpStr,FMT_NUMBER1);

		}

		rs.GetValue(_T("cardno"), tmpStr);
		if(!tmpStr.IsEmpty()) c[5]++;
		xls.SetCellText(5, nRow, tmpStr,FMT_TEXT);
		tmpStr.Empty();
		rs.GetValue(_T("age"),szAge);
		rs.GetValue(_T("age"),age);
		if (age <=6 || szAge.Right(1) ==_T("T") || szAge.Right(1) ==_T("N")) tmpStr.Format(_T("X"));
		if(!tmpStr.IsEmpty()) c[6]++;
		xls.SetCellText(6, nRow, tmpStr,FMT_TEXT);
		
		rs.GetValue(_T("Occupation"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr,FMT_TEXT);
		
		rs.GetValue(_T("transferplace"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr,FMT_TEXT);
		
		rs.GetValue(_T("admitdate"), tmpStr);
		xls.SetCellText(10, nRow, CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm),FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[10]++;

		rs.GetValue(_T("dischargedate"), tmpStr);
		xls.SetCellText(11, nRow, CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm),FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[11]++;

		rs.GetValue(_T("Transhospitall"), tmpStr);
		xls.SetCellText(12, nRow, CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm),FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[12]++;
		
		rs.GetValue(_T("tuvong"), tmpStr);
		xls.SetCellText(13, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[13]++;
		rs.GetValue(_T("tuvongtruoc24"), tmpStr);
		xls.SetCellText(14, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[14]++;
	
		rs.GetValue(_T("diagnostic"), tmpStr);
		tmpStr.AppendFormat(_T("(%s)"), rs.GetValue(_T("icd")));
		xls.SetCellText(15, nRow, tmpStr,FMT_TEXT);
		
		rs.GetValue(_T("maindisease"), tmpStr);
		tmpStr.AppendFormat(_T("(%s)"), rs.GetValue(_T("mainicd")));
		xls.SetCellText(16, nRow, tmpStr,FMT_TEXT);

		rs.GetValue(_T("khongthaydoi"), tmpStr);
		xls.SetCellText(17, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[17]++;

		rs.GetValue(_T("khoi"), tmpStr);
		xls.SetCellText(18, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[18]++;

		rs.GetValue(_T("Dogiam"), tmpStr);
		xls.SetCellText(19, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[19]++;

		rs.GetValue(_T("Nang"), tmpStr);
		xls.SetCellText(20, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[20]++;

		rs.GetValue(_T("treatqty"), tmpStr);
		if (tmpStr.IsEmpty()) rs.GetValue(_T("ngaydt"), tmpStr);

		xls.SetCellText(21, nRow, tmpStr,FMT_INTEGER);
		if(!tmpStr.IsEmpty()) c[21]+= ToInt(tmpStr);

		rs.GetValue(_T("dienthoai"), tmpStr);
		xls.SetCellText(22, nRow, tmpStr,FMT_TEXT);

		rs.GetValue(_T("doctor"), tmpStr);
		xls.SetCellText(23, nRow, tmpStr,FMT_TEXT);

		xls.SetCellText(24, nRow, rs.GetValue(_T("treat_zone")) ,FMT_TEXT);

		rs.MoveNext();
	}
	nRow++;
	xls.SetCellText(2, nRow, _T("Tong cong"),FMT_TEXT);
	for (int i =3; i< 22;i++)
	{
		tmpStr.Format(_T("%d"), c[i]);
		xls.SetCellText(i, nRow, tmpStr,FMT_INTEGER);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\SOVAOVIENRAVIENCHUYENVIEN.XLS"));	
}

CString CTMIOTransbookreport::GetQueryString()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szObject_type, szReport_view = _T("hms_patient_iobook_view");
	szWhere.Format(_T(" and (p_dischargedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T("		and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
					_T("	or p_admitdate_i between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T("		and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')) and p_status_i in ('I', 'T') ")
					_T("	and p_dischargedept = '%s'") \
					, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID());
	if (!m_szStatusKey.IsEmpty())
	{
		if (m_szStatusKey == _T("A"))
		{
			szWhere.Format(_T(" and p_admitdate_i between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T("		and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and p_status_i = 'I'")
						, m_szFromDate, m_szToDate);
		}
		else
		{
			szWhere.Format(_T(" and p_dischargedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T("		and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and p_suggestion = '%s'")
						, m_szFromDate, m_szToDate, m_szStatusKey);
			if (m_szStatusKey != _T("M"))
			{
				szWhere.AppendFormat(_T(" and p_status_i = 'T'"));
			}
		}
	}
	if (m_bInsurance)
	{
		if (!szObject_type.IsEmpty())
			szObject_type += _T(",");
		szObject_type += _T("'I', 'C'");
	}
	if (m_bDiscount)
	{
		if (!szObject_type.IsEmpty())
			szObject_type += _T(",");
		szObject_type += _T("'P', 'D'");
	}
	if (m_bService)
	{
		if (!szObject_type.IsEmpty())
			szObject_type += _T(",");
		szObject_type += _T("'S'");
	}
	if (!szObject_type.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hms_getobjecttype(p_object) in (%s)"), szObject_type);
	}
	if (pMF->GetModuleID() == _T("SOM"))
	{
		szReport_view = _T("som_patient_iobook_view");
	}
	szSQL.Format(_T("select * ") \
				_T("from %s ") \
				_T(" where 1=1 %s"), szReport_view, szWhere);
	return szSQL;
}

CString CTMIOTransbookreport::GetQueryString_v0(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szObjects, szWhereDate;
	if (m_bInsurance)
	{
		if (!szObjects.IsEmpty())
			szObjects += _T(",");
		szObjects += _T("'I', 'C'");
	}
	if (m_bDiscount)
	{
		if (!szObjects.IsEmpty())
			szObjects += _T(",");
		szObjects += _T("'P', 'D'");
	}
	if (m_bService)
	{
		if (!szObjects.IsEmpty())
			szObjects += _T(",");
		szObjects += _T("'S'");
	}
	if (!m_szStatusKey.IsEmpty())
	{
		if(m_szStatusKey==_T("A"))
		{
			szWhereDate.Format(_T(" AND hcr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
			szWhere.Format(_T(" AND hcr_status='I' AND hcr_suggestion is null "));
		}
		else		
		if(m_szStatusKey==_T("D"))
		{
			szWhereDate.Format(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
			szWhere.Format(_T(" and hcr_suggestion='D' and hcr_status='T' "));
		}
		else		
		if(m_szStatusKey==_T("T"))
		{
			szWhereDate.Format(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
			szWhere.Format(_T(" and hcr_suggestion='T' and hcr_status='T' "));
		}
		else if (m_szStatusKey==_T("M"))
		{
			szWhereDate.Format(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
			szWhere.Format(_T(" and hcr_suggestion='M' "));
		}
		else if (m_szStatusKey==_T("F"))
		{
			szWhereDate.Format(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
			szWhere.Format(_T(" and hcr_suggestion='F' and hcr_status='T' "));
		}
	}
	else
	{
		szWhereDate.Format(_T(" AND (hcr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" OR hcr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') )"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);
		szWhere.Format(_T(" AND hcr_status IN ('I', 'T')"));
	}
	szWhere.AppendFormat(_T("%s"), szWhereDate);
	szWhere.AppendFormat(_T(" AND hcr_dischargedept IN ('%s')"), pMF->m_szDept);

	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_type IN (%s)"), szObjects);

	CString szDoctor;
	if(!m_szDoctorKey.IsEmpty())
		szDoctor.Format(_T(" and (select count(*) from hms_bed where hb_docno = hd_docno and hb_doctor = '%s' ) >0 "), m_szDoctorKey);
	szSQL.Format(_T(" SELECT    hd_docno                                        AS docno, ") \
				_T("           Trim(hp_surname ") \
				_T("                ||' ' ") \
				_T("                ||hp_midname ") \
				_T("                ||' ' ") \
				_T("                ||hp_firstname)                            AS patientname, ") \
				_T("           hp_sex                                          AS sex, ") \
				_T("           Hms_getage(hd_admitdate, hp_birthdate)          AS age, ") \
				_T("           hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address, ") \
				_T("           (SELECT ss_desc ") \
				_T("            FROM   sys_sel ") \
				_T("            WHERE  ss_id = 'sys_occupation' ") \
				_T("               AND Cast(ss_code AS INT) = hp_occupation)   AS occupation, ") \
				_T("           hd_cardno                                       AS cardno, ") \
				_T("           hd_transplace                                   AS transferplace, ") \
				_T("           hd_transdiagn                                   AS transferdiagnostic, ") \
				_T("           hd_icd                                          AS icd, ") \
				_T("           hd_diagnostic                                   AS diagnostic, ") \
				_T("           Trim(hcr_maindisease)                           AS maindisease, ") \
				_T("           Trim(hcr_mainicd)                               AS mainicd, ") \
				_T("           ( hcr_admitdate )                               AS admitdate, ") \
				_T("           CASE WHEN hcr_suggestion IN( 'D', 'T' ) THEN ( hcr_dischargedate ) ") \
				_T("           ELSE NULL ") \
				_T("           END                                             AS dischargedate, ") \
				_T("           CASE WHEN hcr_suggestion = 'T' THEN ( hcr_dischargedate ) ") \
				_T("           ELSE NULL ") \
				_T("           END                                             AS Transhospitall, ") \
				_T("           CASE WHEN hcr_suggestion IN( 'D', 'T' ) ") \
				_T("                AND hcr_result = '5' THEN 'X' ") \
				_T("           ELSE '' ") \
				_T("           END                                             AS tuvong, ") \
				_T("           CASE WHEN hcr_suggestion IN( 'D', 'T' ) ") \
				_T("                AND hcr_result = '6' THEN 'X' ") \
				_T("           ELSE '' ") \
				_T("           END                                             AS tuvongtruoc24, ") \
				_T("           CASE WHEN hcr_suggestion IN( 'D', 'T' ) ") \
				_T("                AND hcr_result = '1' THEN 'X' ") \
				_T("           ELSE '' ") \
				_T("           END                                             AS Khoi, ") \
				_T("           CASE WHEN hcr_suggestion IN( 'D', 'T' ) ") \
				_T("                AND hcr_result = '2' THEN 'X' ") \
				_T("           ELSE '' ") \
				_T("           END                                             AS dogiam, ") \
				_T("           CASE WHEN hcr_suggestion IN( 'D', 'T' ) ") \
				_T("                AND hcr_result = '3' THEN 'X' ") \
				_T("           ELSE '' ") \
				_T("           END                                             AS khongthaydoi, ") \
				_T("           CASE WHEN hcr_suggestion IN( 'D', 'T' ) ") \
				_T("                AND hcr_result = '4' THEN 'X' ") \
				_T("           ELSE '' ") \
				_T("           END                                             AS Nang, ") \
				_T("           CASE WHEN hcr_status = 'T' THEN (SELECT SUM(hb_treatqty) ") \
				_T("                                       FROM   hms_bed ") \
				_T("                                       WHERE  hb_docno = hcr_docno) ") \
				_T("           ELSE 0 ") \
				_T("           END                                             AS treatqty, ") \
				_T("           CASE WHEN hcr_status = 'I' THEN ( Trunc(systimestamp) - Trunc(hcr_admitdate) ) + 1 ") \
				_T("           ELSE 0 ") \
				_T("           END                                             AS ngaydt, ") \
				_T("           TRIM(hd_telephone || ' ' || hd_contacttel) AS dienthoai, ") \
				_T("	( select distinct LISTAGG( cast(su_name as varchar(2000)),',')  WITHIN GROUP (ORDER BY su_userid)  as nt  ") \
				_T("	from hms_bed  ") \
				_T("	left join sys_user on (su_userid= hb_doctor) ") \
				_T("	where hb_docno =hd_docno and hb_deptid = hcr_dischargedept ") \
				_T("	 ) as doctor, ") \
				_T("   get_syssel_desc('HMS_TREAT_ZONE', htr_zone) as treat_zone") \
				_T(" FROM      hms_patient ") \
				_T(" LEFT JOIN hms_doc ON( hd_patientno = hp_patientno ) ") \
				_T(" LEFT JOIN hms_clinical_record ON( hcr_docno = hd_docno ) ") \
				_T(" LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
				_T(" LEFT JOIN hms_object ON( hd_object = ho_id ) ") \
				_T(" WHERE     1=1 %s %s ") \
				_T(" ORDER     BY docno "), szWhere,szDoctor);

	return szSQL;
}