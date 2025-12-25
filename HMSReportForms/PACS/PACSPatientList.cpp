#include "stdafx.h"
#include "PACSPatientList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnToDateCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientList* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnGroupAddNew();
}*/
static void _OnGroupPTTTSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientList* )pWnd)->OnGroupPTTTSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupPTTTSelendokFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnGroupPTTTSelendok();
}
/*static void _OnGroupPTTTSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnGroupPTTTKillfocus();
}*/
/*static void _OnGroupPTTTKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnGroupPTTTKillfocus();
}*/
static long _OnGroupPTTTLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnGroupPTTTLoadData();
}
/*static void _OnGroupPTTTAddNewFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnGroupPTTTAddNew();
}*/
static void _OnPerformDateSelectFnc(CWnd *pWnd){
	  ((CPACSPatientList*)pWnd)->OnPerformDateSelect();
}
static void _OnOrderDateSelectFnc(CWnd *pWnd){
	  ((CPACSPatientList*)pWnd)->OnOrderDateSelect();
}
static void _OnPerformedSelectFnc(CWnd *pWnd){
	 ((CPACSPatientList*)pWnd)->OnPerformedSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSPatientList *pVw = (CPACSPatientList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInsuranceExportSelectFnc(CWnd *pWnd){
	CPACSPatientList *pVw = (CPACSPatientList *)pWnd;
	pVw->OnInsuranceExportSelect();
} 
static int _OnAddPACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnAddPACSPatientList();
} 
static int _OnEditPACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnEditPACSPatientList();
} 
static int _OnDeletePACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnDeletePACSPatientList();
} 
static int _OnSavePACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnSavePACSPatientList();
} 
static int _OnCancelPACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnCancelPACSPatientList();
} 
CPACSPatientList::CPACSPatientList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();

	//Báo cáo sổ theo dõi
}
CPACSPatientList::~CPACSPatientList(){
}
void CPACSPatientList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 410, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 80, 55);
	m_wndYear.Create(this,85, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 210, 30, 280, 55);
	m_wndReportPeriod.Create(this,285, 30, 405, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 80, 85);
	m_wndFromDate.Create(this,85, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 210, 60, 280, 85);
	m_wndToDate.Create(this,285, 60, 405, 85); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 90, 80, 115);
	m_wndGroup.Create(this,85, 90, 405, 115); 
	m_wndGroupPTTTLabel.Create(this, _T("Nhóm PTTT"), 10, 120, 80, 145);
	m_wndGroupPTTT.Create(this,85, 120, 405, 145); 
	m_wndInsuranceExport.Create(this, _T("Insurance Export"), 185, 185, 295, 210);
	m_wndExport.Create(this, _T("&Export"), 300, 185, 410, 210);
	m_wndPerformDate.Create(this, _T("Perform Date"), 10, 155, 130, 180);
	m_wndOrderDate.Create(this, _T("Order Date"), 135, 155, 255, 180);
	m_wndPerformed.Create(this, _T("Performed"), 260, 155, 380, 180);

}
void CPACSPatientList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
// 	m_wndYear.SetLimitText(1024);
// 	m_wndYear.SetCheckValue(true);
// 	m_wndReportPeriod.SetCheckValue(true);
// 	m_wndReportPeriod.LimitText(1024);
// 	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndFromDate.SetCheckValue(true);
// 	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndToDate.SetCheckValue(true);
// 	m_wndGroup.SetCheckValue(true);
// 	m_wndGroup.LimitText(1024);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 220);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

	m_wndGroupPTTT.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndGroupPTTT.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

}
void CPACSPatientList::OnSetWindowEvents(){
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
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndGroupPTTT.SetEvent(WE_SELENDOK, _OnGroupPTTTSelendokFnc);
	//m_wndGroupPTTT.SetEvent(WE_SETFOCUS, _OnGroupPTTTSetfocusFnc);
	//m_wndGroupPTTT.SetEvent(WE_KILLFOCUS, _OnGroupPTTTKillfocusFnc);
	m_wndGroupPTTT.SetEvent(WE_SELCHANGE, _OnGroupPTTTSelectChangeFnc);
	m_wndGroupPTTT.SetEvent(WE_LOADDATA, _OnGroupPTTTLoadDataFnc);
	//m_wndGroupPTTT.SetEvent(WE_ADDNEW, _OnGroupPTTTAddNewFnc);
	m_wndPerformDate.SetEvent(WE_CLICK, _OnPerformDateSelectFnc);
	m_wndOrderDate.SetEvent(WE_CLICK, _OnOrderDateSelectFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInsuranceExport.SetEvent(WE_CLICK, _OnInsuranceExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = pMF->GetSysDate() + _T("00:00:00");
	m_szToDate = pMF->GetSysDate() + _T("23:59:00");
	m_nPerformDate=0;
	UpdateData(FALSE);

}
void CPACSPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndGroupPTTT.GetDlgCtrlID(), m_szGroupPTTTKey);
	DDX_Radio(pDX, m_wndPerformDate.GetDlgCtrlID(), m_nPerformDate);
	DDX_Radio(pDX, m_wndOrderDate.GetDlgCtrlID(), m_nOrderDate);
	DDX_Check(pDX, m_wndPerformed.GetDlgCtrlID(), m_bPerformed);

}
void CPACSPatientList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSPatientList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSPatientList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szGroupKey.Empty();
	m_szGroupPTTTKey.Empty();
	m_nPerformDate=1;
	m_nOrderDate=1;
	m_bPerformed=FALSE;

}
int CPACSPatientList::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CPACSPatientList::OnYearChange(){
	
} */
/*void CPACSPatientList::OnYearSetfocus(){
	
} */
/*void CPACSPatientList::OnYearKillfocus(){
	
} */
int CPACSPatientList::OnYearCheckValue(){
	return 0;
} 
void CPACSPatientList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientList::OnReportPeriodSelendok(){
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
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  dte.GetMonthLastDay());
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
/*void CPACSPatientList::OnReportPeriodSetfocus(){
	
}*/
/*void CPACSPatientList::OnReportPeriodKillfocus(){
	
}*/
long CPACSPatientList::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hpr_idx AS id, hpr_name AS name FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSPatientList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSPatientList::OnFromDateChange(){
	
} */
/*void CPACSPatientList::OnFromDateSetfocus(){
	
} */
/*void CPACSPatientList::OnFromDateKillfocus(){
	
} */
int CPACSPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSPatientList::OnToDateChange(){
	
} */
/*void CPACSPatientList::OnToDateSetfocus(){
	
} */
/*void CPACSPatientList::OnToDateKillfocus(){
	
} */
int CPACSPatientList::OnToDateCheckValue(){
	return 0;
} 
void CPACSPatientList::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientList::OnGroupSelendok(){
	 
}
/*void CPACSPatientList::OnGroupSetfocus(){
	
}*/
/*void CPACSPatientList::OnGroupKillfocus(){
	
}*/
long CPACSPatientList::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	 szWhere.Format(_T(" AND hfg_id = '%s' "), m_szGroupKey);
};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hfg_id AS idt,") \
		_T("   hfg_name    AS name") \
		_T(" FROM hms_fee_group") \
		_T(" WHERE substr(hfg_id,1,2) IN('B2','B3') and hfg_id not in ('A2000','A3000') order by hfg_id ") );
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("idt")), 
			rs.GetValue(_T("name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSPatientList::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSPatientList::OnGroupPTTTSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientList::OnGroupPTTTSelendok(){
	 
}
/*void CPACSPatientList::OnGroupPTTTSetfocus(){
	
}*/
/*void CPACSPatientList::OnGroupPTTTKillfocus(){
	
}*/
long CPACSPatientList::OnGroupPTTTLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroupPTTT.IsSearchKey() && !m_szGroupPTTTKey.IsEmpty()){
		szWhere.Format(_T(" AND hfg_id = '%s' "), m_szGroupPTTTKey);
	};
	m_wndGroupPTTT.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name FROM hms_fee_group WHERE SUBSTR(hfg_id, 1, 2) = 'B5' %s ORDER BY hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroupPTTT.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSPatientList::OnGroupPTTTAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSPatientList::OnPerformDateSelect(){
	
}
void CPACSPatientList::OnOrderDateSelect(){
	
}
	void CPACSPatientList::OnPerformedSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CPACSPatientList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
	CString szFileName;
	CString szNameBook;

	szFileName.Format(_T("SỔ THEO DÕI"));
	szNameBook.Format(_T("Exports\\SoTheoDoiC8.xls"));

	OnExport(szFileName,szNameBook);

}
void CPACSPatientList::OnExport(CString szFileName, CString szNameBook){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldPatient, szNewPatient, szOldOrder, szNewOrder;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTotalDV = 0, nTotalBH = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 16);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 25);
	xls.SetColumnWidth(5, 20);
	xls.SetColumnWidth(6, 16);
	xls.SetColumnWidth(7, 25);
	xls.SetColumnWidth(8, 25);
	xls.SetColumnWidth(9, 25);
	xls.SetColumnWidth(10, 10);
	xls.SetColumnWidth(11, 10);
	xls.SetColumnWidth(12, 10);
	xls.SetColumnWidth(13, 16);
	xls.SetColumnWidth(14, 10);
	xls.SetColumnWidth(15, 10);
	xls.SetColumnWidth(16, 10);

	xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(0, 2, szFileName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("Họ và tên"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("Nam"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("Nữ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(5, 4, _T("Địa chỉ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 4, _T("Nơi gửi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 4, _T("BS chỉ định"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 4, _T("Chẩn đoán lâm sàng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 4, _T("Yêu cầu chụp"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 4, _T("Kết luận"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 4, _T("Loại PTTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 4, _T("Đối tượng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 4, _T("Ngày thực hiện"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 4, _T("Người thực hiện"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(15, 4, _T("Ngày kê thuốc"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(16, 4, _T("Tên thuốc, vật tư"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(17, 4, _T("Trong gói"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(18, 4, _T("Ngoài gói"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);


	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 16);
	xls.SetMerge(3, 3, 0, 16);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 5;
	nCol = 0;
	CString szItemID;
	while(!rs.IsEOF()){
		rs.GetValue(_T("docno"), szNewPatient);
		rs.GetValue(_T("itemid"), szItemID);
			
		/*if(szNewPatient != szOldPatient && !szNewPatient.IsEmpty())
			{*/
				xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
				xls.SetCellText(nCol+1, nRow, szNewPatient, FMT_INTEGER);
				rs.GetValue(_T("pname"), tmpStr);
				xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
				rs.GetValue(_T("g_m_age"), tmpStr);
				xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

				rs.GetValue(_T("g_f_age"), tmpStr);
				xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

				rs.GetValue(_T("address"), tmpStr);
				xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
				rs.GetValue(_T("deptid"), tmpStr);
				xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
				rs.GetValue(_T("doctor"), tmpStr);
				xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
				rs.GetValue(_T("icd"), tmpStr);
				xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
				szOldPatient = szNewPatient;
		/*	}*/

		rs.GetValue(_T("optname"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("optresult"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("optgroup"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("object"), tmpStr);

		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("performdate"), tmpStr);
		if(!tmpStr.IsEmpty())
			xls.SetCellText(nCol+13, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);
		
		rs.GetValue(_T("practitioner"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);


		rs.GetValue(_T("orderid"), szNewOrder);
		
		/*if(szNewOrder != szOldOrder && !szNewOrder.IsEmpty())
		{*/
			szSQL.Format(_T(" SELECT  hpo_approvedate AS drugdate,") \
						_T(" 				   hpol_productname            AS drugname,") \
						_T("				nvl(hpo_feetype,'CP') as feetype, ") \
						_T(" 				   sum(hpol_qtyissue)              AS orderqty ") \
						_T(" 				FROM hms_pharmaorder_view") \
						_T(" 				 LEFT JOIN hms_pharmaorderline_view2") \
						_T(" 				 ON(hpo_orderid = hpol_orderid and hpo_docno = hpol_docno )") \
						_T(" 				 WHERE hpo_docno =%s and hpo_deptid='%s'  and hpo_refitem_id='%s'") \
						_T(" 				 AND hpo_reference_id = %s ") \
						_T(" 				 GROUP BY  hpo_approvedate,hpol_productname,hpo_feetype") \
						_T(" 				 ORDER BY drugdate,") \
						_T(" 				   drugname") ,szNewPatient, pMF->m_szDept,szItemID, szNewOrder);
			_fmsg(_T("%s"), szSQL);
			rs2.ExecSQL(szSQL);

			if(rs2.IsEOF())
				nRow++;

			while(!rs2.IsEOF()){
				rs2.GetValue(_T("drugdate"), tmpStr);
				if(!tmpStr.IsEmpty())
				xls.SetCellText(nCol+15, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);
				rs2.GetValue(_T("drugname"), tmpStr);
				xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);
				rs2.GetValue(_T("orderqty"), tmpStr);
				if(rs2.GetValue(_T("feetype")) == _T("CP"))
					xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1);
				else
					xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER1);
				

				rs2.MoveNext();
				nRow++;
			}
			szOldOrder = szNewOrder;
		/*}
		else
			nRow++;*/
		rs.MoveNext();
	}

	xls.SetCellText(nCol+11, nRow, _T("Tổng cộng: "), FMT_TEXT, true);
	xls.SetCellText(nCol+12, nRow, double2str(nTotalDV), FMT_NUMBER1, true);
	xls.SetCellText(nCol+13, nRow, double2str(nTotalBH), FMT_NUMBER1, true);

	EndWaitCursor();
	xls.Save(szNameBook);
}

int CPACSPatientList::OnAddPACSPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSPatientList::OnEditPACSPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSPatientList::OnDeletePACSPatientList(){
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
 		OnCancelPACSPatientList();
 	}
	return 0;
}
int CPACSPatientList::OnSavePACSPatientList(){
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
 		//OnPACSPatientListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSPatientList::OnCancelPACSPatientList(){
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
int CPACSPatientList::OnPACSPatientListListLoadData(){
	return 0;
}
CString CPACSPatientList::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, tmpStr;

	if(m_nPerformDate == 0)
		szWhere.AppendFormat(_T(" AND hpc_performdate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')   AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')  "), m_szFromDate, m_szToDate);
	else
		szWhere.AppendFormat(_T(" AND hpc_orderdate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')   AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') "), m_szFromDate, m_szToDate);

	if(m_bPerformed)
		szWhere.AppendFormat(_T(" AND hpc_status = 'T'"));
	else
		szWhere.AppendFormat(_T(" AND hpc_status <> 'O'"));

	if(!m_szGroupPTTTKey.IsEmpty())
		{
				szWhere.AppendFormat(_T(" AND hfl_opt_group = '%s'"), m_szGroupPTTTKey);
		}

	if(!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_groupid IN('%s')"), m_szGroupKey);

	szSQL.Format(_T(" SELECT hpc_docno AS docno,") \
		_T("   TRIM(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                                 AS pname,") \
		_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate)    AS age,") \
		_T("   case when hp_sex = 'M' then hms_getage(current_date, hp_birthdate) else null end as g_m_age,") \
		_T("   case when hp_sex = 'F' then hms_getage(current_date, hp_birthdate) else null end as g_f_age,") \
		_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T("   hpc_deptid AS deptid,") \
		_T("   get_username(hpc_doctor) AS doctor,") \
		_T("   (SELECT hi_name FROM hms_icd WHERE hi_icd = hd_icd") \
		_T("   )        AS icd,") \
		_T("   hfl_name AS optname,") \
		_T("   hpr_desc AS optresult,") \
		_T("   0        AS phim,") \
		_T("   0        AS thuoc,") \
		_T("	case when length(hd_cardno) >15 then 'BH' else 'DV' end as object, ") \
		_T("   (SELECT hfg_name FROM hms_fee_group WHERE hfl_opt_group = hfg_id") \
		_T("   )             AS optgroup,") \
		_T("   hpc_orderid AS orderid,") \
		_T("   hpc_performdate AS performdate, ") \
		_T("	get_username(hpcl_practitioner) AS practitioner, hpcl_itemid as itemid ") \
		_T(" FROM hms_pacsorder") \
		_T(" LEFT JOIN hms_pacsorderline ") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_pacs_result") \
		_T(" ON(hpr_itemid  =hpcl_itemid") \
		_T(" AND hpr_orderid=hpc_orderid") \
		_T(" AND LOWER(hpr_name) = 'conclusion')") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = hpc_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hpcl_itemid     = hfl_feeid)") \
		_T(" WHERE hpc_pdeptid = '%s' %s ") \
		_T(" ORDER BY hpc_performdate,") \
		_T("   hpc_docno"),pMF->m_szDept, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}

void CPACSPatientList::OnInsuranceExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldPatient, szNewPatient, szOldOrder, szNewOrder, szTitle, szFileName, szField, szValue;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTotalDV = 0, nTotalBH = 0;
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\M_SoTheoDoiXQuang.xls")))
	{
		AfxMessageBox(_T("Thiếu mẫu M_SoTheoDoiXQuang.xls trong thư mục Exports/Template"));
		return;
	}
	if(m_szGroupKey == _T("B2100"))
	{
		szTitle = _T("SỔ THEO DÕI X QUANG");
		szFileName = _T("SoTheoDoiXQuang.xls");
	}
	else if(m_szGroupKey == _T("B2400") || m_szGroupKey == _T("B2500"))
	{
		szTitle = _T("SỔ THEO DÕI SIÊU ÂM");
		szFileName = _T("SoTheoDoiSieuAm.xls");
	}
	else if(m_szGroupKey == _T("B2200-1") || m_szGroupKey == _T("B2200-2"))
	{
		szTitle = _T("SỔ THEO DÕI CT");
		szFileName = _T("SoTheoDoiCT.xls");
	}
	else if(m_szGroupKey == _T("B2600"))
	{
		szTitle = _T("SỔ THEO DÕI MRI");
		szFileName = _T("SoTheoDoiMRI.xls");
	}
	else if(m_szGroupKey == _T("B2800"))
	{
		szTitle = _T("SỔ THEO DÕI CLVT");
		szFileName = _T("SoTheoDoiCLVT.xls");
	}
	else if(m_szGroupKey == _T("B1E00"))
	{
		szTitle = _T("SỔ THEO DÕI MÔ BỆNH HỌC");
		szFileName = _T("SoTheoDoiMoBenhHoc.xls");
	}
	else if(m_szGroupKey == _T("B1F00"))
	{
		szTitle = _T("SỔ THEO DÕI TẾ BÀO HỌC");
		szFileName = _T("SoTheoDoiTeBaoHoc.xls");
	}

	//xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(0, 2, szTitle, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);
	szSQL = GetQueryString_ins();
	rs.ExecSQL(szSQL);
	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF()){
		rs.GetValue(_T("g_docno"), szNewPatient);

		if(szNewPatient != szOldPatient && !szNewPatient.IsEmpty())
		{
			xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
			for (int i = 0; i < rs.GetFieldCount(); i++)
			{
				szField = rs.GetFieldName(i);
				szValue = rs.GetValue(szField);
				if (szField.Find(_T("g_")) == 0)
				{
					xls.SetCellText(i+1, nRow, szValue, FMT_TEXT);
				}
			}
			szOldPatient = szNewPatient;
		}
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			szField = rs.GetFieldName(i);
			szValue = rs.GetValue(szField);
			if (szField.Find(_T("g2_")) == 0)
			{
				xls.SetCellText(i+1, nRow, szValue, FMT_TEXT);
			}
		}
		rs.GetValue(_T("_orderid"), szNewOrder);

		if(szNewOrder != szOldOrder && !szNewOrder.IsEmpty())
		{
			szSQL.Format(_T(" SELECT DISTINCT hpo_approvedate AS drugdate,") \
				_T("   hpol_productname            AS drugname,") \
				_T("   hpol_qtyissue               AS orderqty") \
				_T(" FROM hms_pacsorder") \
				_T(" LEFT JOIN hms_pacsorderline") \
				_T(" ON(hpc_orderid = hpcl_orderid)") \
				_T(" LEFT JOIN hms_pharmaorder_view") \
				_T(" ON(hpc_docno = hpo_docno") \
				_T(" AND hpc_orderid = hpo_reference_id)") \
				_T(" LEFT JOIN hms_pharmaorderline_view2") \
				_T(" ON(hpo_orderid = hpol_orderid)") \
				_T(" LEFT JOIN hms_fee_list") \
				_T(" ON(hfl_feeid = hpcl_itemid)") \
				_T(" LEFT JOIN hms_doc") \
				_T(" ON(hpc_docno = hd_docno)") \
				_T(" LEFT JOIN hms_patient") \
				_T(" ON(hd_patientno   = hp_patientno)") \
				_T(" WHERE hpo_orderid > 0") \
				_T(" AND hpc_orderid = %s") \
				_T(" ORDER BY drugdate,") \
				_T("   drugname"), szNewOrder);
			_fmsg(_T("%s"), szSQL);
			rs2.ExecSQL(szSQL);

			if(rs2.IsEOF())
			{
				nRow++;
			}

			while(!rs2.IsEOF()){
				rs2.GetValue(_T("drugname"), tmpStr);
				xls.SetCellText(12, nRow, tmpStr, FMT_TEXT);
				rs2.GetValue(_T("orderqty"), tmpStr);
				xls.SetCellText(13, nRow, tmpStr, FMT_NUMBER1);
				rs2.MoveNext();
				nRow++;
			}
			szOldOrder = szNewOrder;
		}
		else
		{
			nRow++;
		}
		rs.MoveNext();
	}
	EndWaitCursor();
	tmpStr.Format(_T("Exports\\%s"), szFileName);
	xls.Save(tmpStr);
}

CString CPACSPatientList::GetQueryString_ins()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, tmpStr;

	if(m_nPerformDate == 0)
	{
		szWhere.AppendFormat(_T(" AND hpc_performdate BETWEEN TIMESTAMP '%s' AND TIMESTAMP '%s'"), m_szFromDate, m_szToDate);
	}
	else
	{
		szWhere.AppendFormat(_T(" AND hpc_orderdate BETWEEN TIMESTAMP '%s' AND TIMESTAMP '%s'"), m_szFromDate, m_szToDate);
	}

	if(m_bPerformed)
	{
		szWhere.AppendFormat(_T(" AND hpc_status = 'T'"));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND hpc_status <> 'O'"));
	}

	if(!m_szGroupPTTTKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfl_opt_group = '%s'"), m_szGroupPTTTKey);
	}

	if(m_szGroupKey == _T("B2200-1"))
	{
		szWhere.AppendFormat(_T(" AND hpc_groupid = 'B2200' AND hfl_categoryid = 400"));
	}
	else if(m_szGroupKey == _T("B2200-2"))
	{
		szWhere.AppendFormat(_T(" AND hpc_groupid = 'B2200' AND hfl_categoryid = 401"));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND hpc_groupid IN('%s')"), m_szGroupKey);
	}

	szSQL.Format(_T(" SELECT hpc_docno AS g_docno,") \
		_T("   TRIM(hp_surname||' '||hp_midname||' '||hp_firstname) AS g_pname,") \
		_T("   case when hp_sex = 'M' then hms_getage(current_date, hp_birthdate) else null end as g_m_age,") \
		_T("   case when hp_sex = 'F' then hms_getage(current_date, hp_birthdate) else null end as g_f_age,") \
		_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS g_address,") \
		_T("   case when length(hd_cardno) > 0 then 'X' else '' end as g_have_card,") \
		_T("   (SELECT hi_name FROM hms_icd WHERE hi_icd = hd_icd) AS g_icd,") \
		_T("   (select sd_name from sys_dept where sd_id = hpc_deptid) AS g_dept,") \
		_T("   hfl_name AS g2_optname,") \
		_T("   hpr_desc AS g2_optresult,") \
		_T("   get_username(hpcl_practitioner) AS g2_practitioner, hpc_orderid as _orderid ") 
		_T(" FROM hms_pacsorder") \
		_T(" LEFT JOIN hms_pacsorderline ") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_pacs_result") \
		_T(" ON(hpr_itemid  =hpcl_itemid") \
		_T(" AND hpr_orderid=hpc_orderid") \
		_T(" AND LOWER(hpr_name) = 'conclusion')") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = hpc_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hpcl_itemid     = hfl_feeid)") \
		_T(" WHERE hpc_pdeptid = 'CDHA' %s ") \
		_T(" ORDER BY hpc_performdate,") \
		_T("   hpc_docno"), szWhere);
	return szSQL;
}