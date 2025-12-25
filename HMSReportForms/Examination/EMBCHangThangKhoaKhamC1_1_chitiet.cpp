#include "stdafx.h"
#include "EMBCHangThangKhoaKhamC1_1_chitiet.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnReportPeriodLoadData();//
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnToDateCheckValue();
} 
static void _OnExamRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet* )pWnd)->OnExamRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamRoomSelendokFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnExamRoomSelendok();
}
/*static void _OnExamRoomSetfocusFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnExamRoomKillfocus();
}*/
/*static void _OnExamRoomKillfocusFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnExamRoomKillfocus();
}*/
static long _OnExamRoomLoadDataFnc(CWnd *pWnd){
	return ((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnExamRoomLoadData();
}
/*static void _OnExamRoomAddNewFnc(CWnd *pWnd){
	((CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd)->OnExamRoomAddNew();
}*/
static void _OnPatientSelectFnc(CWnd *pWnd){
	 ((CRptBCHangThangKhoaKhamC1_1_Chitiet*)pWnd)->OnPatientSelect();
}
static void _OnTurnSelectFnc(CWnd *pWnd){
	 ((CRptBCHangThangKhoaKhamC1_1_Chitiet*)pWnd)->OnTurnSelect();
}
static void _OnDrugOrderSelectFnc(CWnd *pWnd){
	 ((CRptBCHangThangKhoaKhamC1_1_Chitiet*)pWnd)->OnDrugOrderSelect();
}
static void _OnGoDeptSelectFnc(CWnd *pWnd){
	 ((CRptBCHangThangKhoaKhamC1_1_Chitiet*)pWnd)->OnGoDeptSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CRptBCHangThangKhoaKhamC1_1_Chitiet *pVw = (CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRptBCHangThangKhoaKhamC1_1_Chitiet *pVw = (CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRptBCHangThangKhoaKhamC1_1_Chitiet *pVw = (CRptBCHangThangKhoaKhamC1_1_Chitiet *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddRptBCHangThangKhoaKhamC1_1Fnc(CWnd *pWnd){
	 return ((CRptBCHangThangKhoaKhamC1_1_Chitiet*)pWnd)->OnAddRptBCHangThangKhoaKhamC1_1();
} 
static int _OnEditRptBCHangThangKhoaKhamC1_1Fnc(CWnd *pWnd){
	 return ((CRptBCHangThangKhoaKhamC1_1_Chitiet*)pWnd)->OnEditRptBCHangThangKhoaKhamC1_1();
} 
static int _OnDeleteRptBCHangThangKhoaKhamC1_1Fnc(CWnd *pWnd){
	 return ((CRptBCHangThangKhoaKhamC1_1_Chitiet*)pWnd)->OnDeleteRptBCHangThangKhoaKhamC1_1();
} 
static int _OnSaveRptBCHangThangKhoaKhamC1_1Fnc(CWnd *pWnd){
	 return ((CRptBCHangThangKhoaKhamC1_1_Chitiet*)pWnd)->OnSaveRptBCHangThangKhoaKhamC1_1();
} 
static int _OnCancelRptBCHangThangKhoaKhamC1_1Fnc(CWnd *pWnd){
	 return ((CRptBCHangThangKhoaKhamC1_1_Chitiet*)pWnd)->OnCancelRptBCHangThangKhoaKhamC1_1();
} 
CRptBCHangThangKhoaKhamC1_1_Chitiet::CRptBCHangThangKhoaKhamC1_1_Chitiet(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CRptBCHangThangKhoaKhamC1_1_Chitiet::~CRptBCHangThangKhoaKhamC1_1_Chitiet(){
}
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndExamRoomLabel.Create(this, _T("Exam Room"), 10, 90, 90, 115);
	m_wndExamRoom.Create(this,95, 90, 485, 115); 
	m_wndSaturday.Create(this, _T("Saturday"), 10, 120, 90, 145);
	m_wndPatient.Create(this, _T("Patient"), 95, 120, 185, 145);
	m_wndTurn.Create(this, _T("Turn"), 190, 120, 280, 145);
	m_wndDrugOrder.Create(this, _T("Drug Order"), 285, 120, 375, 145);
	m_wndGoDept.Create(this, _T("Go Dept"), 395, 120, 485, 145);
	

	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&Export"), 415, 155, 490, 180);

}
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndExamRoom.SetCheckValue(true);
	m_wndExamRoom.LimitText(35);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	m_wndExamRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExamRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	

}
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnSetWindowEvents(){
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
	m_wndExamRoom.SetEvent(WE_SELENDOK, _OnExamRoomSelendokFnc);
	//m_wndExamRoom.SetEvent(WE_SETFOCUS, _OnExamRoomSetfocusFnc);
	//m_wndExamRoom.SetEvent(WE_KILLFOCUS, _OnExamRoomKillfocusFnc);
	m_wndExamRoom.SetEvent(WE_SELCHANGE, _OnExamRoomSelectChangeFnc);
	m_wndExamRoom.SetEvent(WE_LOADDATA, _OnExamRoomLoadDataFnc);
	//m_wndExamRoom.SetEvent(WE_ADDNEW, _OnExamRoomAddNewFnc);
	m_wndPatient.SetEvent(WE_CLICK, _OnPatientSelectFnc);
	m_wndTurn.SetEvent(WE_CLICK, _OnTurnSelectFnc);
	m_wndDrugOrder.SetEvent(WE_CLICK, _OnDrugOrderSelectFnc);
	m_wndGoDept.SetEvent(WE_CLICK, _OnGoDeptSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	SetMode(VM_EDIT);
}
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndExamRoom.GetDlgCtrlID(), m_szExamRoomKey);
	DDX_Check(pDX, m_wndSaturday.GetDlgCtrlID(), m_bSaturday);
	DDX_Radio(pDX, m_wndPatient.GetDlgCtrlID(), m_nPatient);
	DDX_Radio(pDX, m_wndTurn.GetDlgCtrlID(), m_nTurn);
	DDX_Radio(pDX, m_wndDrugOrder.GetDlgCtrlID(), m_nDrugOrder);
	DDX_Radio(pDX, m_wndGoDept.GetDlgCtrlID(), m_nGoDept);

}
void CRptBCHangThangKhoaKhamC1_1_Chitiet::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRptBCHangThangKhoaKhamC1_1_Chitiet::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRptBCHangThangKhoaKhamC1_1_Chitiet::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szExamRoomKey.Empty();
	m_bSaturday = FALSE;
	m_nPatient=1;
	m_nTurn=0;
	m_nDrugOrder=1;
	m_nGoDept=1;

}
int CRptBCHangThangKhoaKhamC1_1_Chitiet::SetMode(int nMode){
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
 			EnableButtons(TRUE,0,1,2,3,-1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
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
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnYearChange(){
	
} */
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnYearSetfocus(){
	
} */
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnYearKillfocus(){
	
} */
int CRptBCHangThangKhoaKhamC1_1_Chitiet::OnYearCheckValue(){
	return 0;
} 
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnReportPeriodSelendok(){
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
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnReportPeriodSetfocus(){
	
}*/
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnReportPeriodKillfocus(){
	
}*/
long CRptBCHangThangKhoaKhamC1_1_Chitiet::OnReportPeriodLoadData(){
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
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnFromDateChange(){
	
} */
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnFromDateSetfocus(){
	
} */
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnFromDateKillfocus(){
	
} */
int CRptBCHangThangKhoaKhamC1_1_Chitiet::OnFromDateCheckValue(){
	return 0;
} 
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnToDateChange(){
	
} */
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnToDateSetfocus(){
	
} */
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnToDateKillfocus(){
	
} */
int CRptBCHangThangKhoaKhamC1_1_Chitiet::OnToDateCheckValue(){
	return 0;
} 
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnExamRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnExamRoomSelendok(){
	 
}
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnExamRoomSetfocus(){
	
}*/
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnExamRoomKillfocus(){
	
}*/
long CRptBCHangThangKhoaKhamC1_1_Chitiet::OnExamRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamRoom.IsSearchKey() && !m_szExamRoomKey.IsEmpty()){
		szWhere.Format(_T("and hrl_id = %d"), ToInt(m_szExamRoomKey));
	};
	m_wndExamRoom.DeleteAllItems(); 
	szSQL.Format(_T("select hrl_name as name, hrl_id as id from hms_roomlist where hrl_deptid = '%s' %s Order by id"), pMF->m_szDept, szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnExamRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnPatientSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnTurnSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnDrugOrderSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnGoDeptSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szSQL;
	CReportSection *rptDetail = NULL;
	CReportSection *rptSector = NULL;
	CRecord rs(&pMF->m_db);
	CString szDept = pMF->m_szDept;
	//if (szDept != _T("C1.1"))
	//{
	//	AfxMessageBox(_T("This report can only run by C1.1 user!"), MB_ICONASTERISK);
	//	return;
	//}
	int nOldGroup=-1, nNewGroup = -1, nIndex = 0;
	int nNewTit = 0, nOldTit = 0;
	long tc[13], sc[13], c[13];	
	CString szCol, szData;
	if(!rpt.Init(_T("Reports/HMS/HE_BAOCAOTONGHOPTHANGPHONGKHAM_C1_1.RPT")) )
		return ;
	CReportSection *pTemp = rpt.GetGroupHeader(1);
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	BeginWaitCursor();
	szSQL = GetQueryString();
	//QueryOpener(szSQL);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	for (int i =0; i <= 12; i++)
	{
		tc[i] = sc[i] = c[i] = 0;
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("title"), nNewTit);
		if (nNewTit != nOldTit)
		{
			if (nOldTit != 0)
			{
				rptSector = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i =1; i <= 12; i++){
					szCol.Format(_T("s%d"), i+2);
					szData.Format(_T("%ld"), tc[i-1]);
					rptSector->SetValue(szCol, szData);
					tc[i-1] = sc[i-1] = c[i-1] = 0;
				}	
			}
			//1:So kham,2:So luot,3:So ke don,4:Vao vien
			switch (nNewTit){
			case 1:
				tmpStr.Format(_T("S\x1ED1 Ng\x1B0\x1EDDi Kh\xE1m"));
				break;
			case 2:
				tmpStr.Format(_T("S\x1ED1 L\x1B0\x1EE3t Kh\xE1m"));
				break;
			case 3:
				tmpStr.Format(_T("S\x1ED1 K\xEA \x110\x1A1n"));
				break;
			case 4:
				tmpStr.Format(_T("S\x1ED1 V\xE0o Vi\x1EC7n"));
				break;
			}
			rptSector = rpt.AddDetail(pTemp);
			rptSector->SetValue(_T("Group"), tmpStr);
			nOldTit = nNewTit;
		}
		nNewGroup = ToInt(rs.GetValue(_T("extype")));
		//extype = 2->Noi,3->Ngoai,>3->Chuyen Khoa
		if(nNewGroup == 2 && nOldGroup != nNewGroup)
		{
			//if(sc[10] > 0){
			//	rptSector = rpt.AddDetail(pTemp);
			//	rptSector->SetValue(_T("Group"), _T("\x43\x1ED9ng"));
			//	for (int i =1; i <= 10; i++){
			//		szCol.Format(_T("%d"), i+2);
			//		szData.Format(_T("%ld"), sc[i-1]);
			//		rptDetail->SetValue(szCol, szData);
			//		sc[i-1] = 0;
			//	}
			//}
			rptSector = rpt.AddDetail(pTemp);
			rptSector->SetValue(_T("Group"), _T("- N\x1ED9i"));
			nOldGroup = nNewGroup;
			nIndex = 0;	
		}
		if(nNewGroup == 3 && nOldGroup != nNewGroup)
		{
			rptSector = rpt.AddDetail(pTemp);
			rptSector->SetValue(_T("Group"), _T("- Ngo\x1EA1i"));
			nOldGroup = nNewGroup;
			nIndex = 0;	
		}
		if(nNewGroup > 3 && nOldGroup == 3)
		{	
			rptSector = rpt.AddDetail(rpt.GetGroupFooter(1));
			for (int i =1; i <= 12; i++)
			{
				szCol.Format(_T("s%d"), i+2);
				szData.Format(_T("%ld"), tc[i-1]);
				rptSector->SetValue(szCol, szData);
				tc[i-1] = sc[i-1] = c[i-1] = 0;
			}	
			rptSector = rpt.AddDetail(pTemp);
			rptSector->SetValue(_T("Group"), _T("- \x43huy\xEAn kho\x61"));
			nOldGroup = nNewGroup;				
		}
		rptDetail = rpt.AddDetail();
		nIndex++;
		tmpStr.Format(_T("%d"), nIndex);
		rptDetail->SetValue(_T("0"), tmpStr);
		rs.GetValue(_T("roomid"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		for (int i =1; i <= 12; i++)
		{
			tmpStr.Format(_T("%d"), i+2);
			szCol.Format(_T("c%d"), i);
			szData = rs.GetValue(szCol);
			c[i-1] = ToInt(szData);
			tc[i-1] += c[i-1];
			sc[i-1] += c[i-1];
			rptDetail->SetValue(tmpStr, szData);
		}
		rs.MoveNext();
	}
	rptSector = rpt.AddDetail(rpt.GetGroupFooter(1));
	for (int i =1; i <= 12; i++)
	{
		szCol.Format(_T("s%d"), i+2);
		szData.Format(_T("%ld"), tc[i-1]);
		rptSector->SetValue(szCol, szData);
		tc[i-1] = sc[i-1] = c[i-1] = 0;
	}	
	tmpStr = pMF->GetSysDate();
	CString szDate;
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szTemp2;
	int nIdx = 1, nRow = 0, nCol = 0, nNewTit;
	double nAmount = 0;

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(2, 40);
	
	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellMergedColumns(7, 0, 6);
	xls.SetCellMergedColumns(7, 1, 6);
	xls.SetCellMergedColumns(0, 3, 8);
	xls.SetCellMergedColumns(0, 4, 8);
	xls.SetCellMergedColumns(0, 5, 8);
	xls.SetCellText(0, 0, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(7, 0, _T("CỘNG HÒA XÃ HỘI CHỦ NGHĨA VIỆT NAM"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, false);
	xls.SetCellText(7, 1, _T("Độc lập - Tự do - Hạnh phúc"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(0, 1, pMF->GetCurrentDepartmentName(), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);

	xls.SetCellText(0, 3, _T("BÁO CÁO CHI TIẾT PHÒNG KHÁM THEO NGÀY KHÁM"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true, 12);

	

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);

	

	nRow=8;
	
	xls.SetCellText(nCol++,nRow,_T("Số TT"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Mã phòng"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Phòng khám"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	

	CDate iDate, eDate;
	CString szNewMonth, szOldMonth;
	iDate.ParseDate(m_szFromDate);
	eDate.ParseDate(m_szToDate);

	int nMerge = 0;
	while (iDate <= eDate)
	{
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
			szTemp.Format(_T("Ngày %d"), iDate.GetDay());
			xls.SetCellText(nCol++,nRow,szTemp,FMT_TEXT|FMT_CENTER|FMT_WRAPING,false, 10);
			nMerge++;
		}
		xls.SetCellMergedColumns(nCol-nMerge, nRow-1, nMerge);
	}

	xls.SetCellText(nCol++,nRow,_T("Tổng cộng"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Khu"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	

	//Detail
	nRow = 9;
	while (!rs.IsEOF())
	{
		nCol = 0;
		xls.SetCellText(nCol++, nRow, int2str(nIdx++), FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("roomid")), FMT_INTEGER|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("roomname")), FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("title"), nNewTit);

		switch (nNewTit)
			{
			case 1:
				tmpStr.Format(_T("Số bệnh nhân khám"));
				break;
			case 2:
				tmpStr.Format(_T("Số lượt khám"));
				break;
			case 3:
				tmpStr.Format(_T("Số kê đơn"));
				break;
			case 4:
				tmpStr.Format(_T("Số vào viện"));
				break;
			}

		xls.SetCellMergedColumns(0, 6, 8);
		xls.SetCellText(0, 6, tmpStr, FMT_TEXT|FMT_LEFT|FMT_WRAPING, true);
		
	
		int i = 0;

		iDate.ParseDate(m_szFromDate);
		eDate.ParseDate(m_szToDate);
		while (iDate <= eDate){
			for (iDate; iDate <= eDate; iDate++)
			{
				szTemp.Format(_T("ngay%d"), i);
				rs.GetValue(szTemp, tmpStr);
				xls.SetCellText(nCol++,nRow,tmpStr,FMT_NUMBER1|FMT_WRAPING,false, 10);
				i++;
			}
		}

		rs.GetValue(_T("total"), nAmount);
		xls.SetCellText(nCol++, nRow, double2str(nAmount), FMT_NUMBER1|FMT_WRAPING, true,10);

		rs.GetValue(_T("hrl_zone"),tmpStr);		
		xls.SetCellText(nCol++, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	
		xls.Save(_T("Exports\\BAOCAOTHANGCHITIET_THEONGAY.xls"));
} 
void CRptBCHangThangKhoaKhamC1_1_Chitiet::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CRptBCHangThangKhoaKhamC1_1_Chitiet::OnAddRptBCHangThangKhoaKhamC1_1(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CRptBCHangThangKhoaKhamC1_1_Chitiet::OnEditRptBCHangThangKhoaKhamC1_1(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CRptBCHangThangKhoaKhamC1_1_Chitiet::OnDeleteRptBCHangThangKhoaKhamC1_1(){
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
 		OnCancelRptBCHangThangKhoaKhamC1_1(); 
 	}
	return 0;
}
int CRptBCHangThangKhoaKhamC1_1_Chitiet::OnSaveRptBCHangThangKhoaKhamC1_1(){
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
 		//OnRptBCHangThangKhoaKhamC1_1ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CRptBCHangThangKhoaKhamC1_1_Chitiet::OnCancelRptBCHangThangKhoaKhamC1_1(){
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
int CRptBCHangThangKhoaKhamC1_1_Chitiet::OnRptBCHangThangKhoaKhamC1_1ListLoadData(){
	return 0;
}
CString CRptBCHangThangKhoaKhamC1_1_Chitiet::GetQueryString()
{
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szWhere, szWhere1, szWhere2, szTemp;
	
	CDate iDate, eDate;
	iDate.ParseDate(m_szFromDate);
	eDate.ParseDate(m_szToDate);

	CString szField, szField2, szField3, szSum;
	szTemp.IsEmpty();

		if (m_bSaturday)
		{
			szWhere.AppendFormat(_T(" AND trunc(dte) = trunc(dte, 'DAY') + 6"));
		}

		if (m_nPatient == 0)
		{
			szWhere.AppendFormat(_T(" AND title = 1"));
		}
		else if (m_nTurn == 0)
		{
			szWhere.AppendFormat(_T(" AND title = 2"));
		}
		else if (m_nDrugOrder == 0)
		{
			szWhere.AppendFormat(_T(" AND title = 3"));
		}
		else if(m_nGoDept == 0)
		{
			szWhere.AppendFormat(_T(" AND title = 4"));
		}
		else
		{
			szWhere.AppendFormat(_T(" AND 0>1"));
		}

	while (iDate <= eDate)
	{
		int i = 0;
		for (iDate; iDate <= eDate; iDate++)
		{
			szTemp.Format(_T("%.4d/%.2d/%.2d"), iDate.GetYear(), iDate.GetMonth(), iDate.GetDay());
			szField.AppendFormat(_T("CASE WHEN TRUNC(he_examdate) = TO_DATE('%s', 'YYYY-MM-DD') THEN 1 ELSE 0 END AS ngay%d, "), szTemp, i);
			szField2.AppendFormat(_T("CASE WHEN TRUNC(hpo_orderdate) = TO_DATE('%s', 'YYYY-MM-DD') THEN 1 ELSE 0 END AS ngay%d, "), szTemp, i);
			szField3.AppendFormat(_T("CASE WHEN TRUNC(hcr_admitdate) = TO_DATE('%s', 'YYYY-MM-DD') THEN 1 ELSE 0 END AS ngay%d, "), szTemp, i);
			szSum.AppendFormat(_T("SUM(ngay%d) AS ngay%d, "), i, i, i);
			i++;
		}
	}
	szSQL.Format(_T(" SELECT title,") \
				_T("   hrl_type AS extype,") \
				_T("   hrl_id   AS roomid,") \
				_T("   hrl_name AS roomname,") \
				_T("   hrl_zone,") \
				_T("   %s ") \
				_T("   SUM(total) AS total") \
				_T(" FROM") \
				_T("   (SELECT 1 AS title,") \
				_T("     hd_docno,") \
				_T("     he_roomid,") \
				_T("     he_examdate dte,") \
				_T("     %s") \
				_T("     1   AS total") \
				_T("   FROM") \
				_T("     (SELECT he_docno docno,") \
				_T("       MIN(he_receptidx) receptidx") \
				_T("     FROM hms_exam") \
				_T("     WHERE he_status IN ( 'T', 'P' )") \
				_T("     AND he_deptid    = '%s'") \
				_T("     GROUP BY he_docno") \
				_T("     )") \
				_T("   LEFT JOIN hms_exam") \
				_T("   ON( he_docno     = docno") \
				_T("   AND he_receptidx = receptidx )") \
				_T("   LEFT JOIN hms_doc") \
				_T("   ON ( he_docno = hd_docno )") \
				_T("   WHERE he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("   AND he_deptid = '%s'") \
				_T("   UNION ALL") \
				_T("   SELECT 2 AS title,") \
				_T("     hd_docno,") \
				_T("     he_roomid,") \
				_T("     he_examdate dte,") \
				_T("     %s") \
				_T("     1   AS total   ") \
				_T("   FROM hms_doc") \
				_T("   LEFT JOIN hms_exam") \
				_T("   ON (he_docno     = hd_docno)") \
				_T("   WHERE he_status IN ('P', 'T')") \
				_T("   AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("   AND he_deptid = '%s'") \
				_T("   UNION ALL") \
				_T("   SELECT 3 AS title,") \
				_T("     hd_docno,") \
				_T("     hpo_roomid AS he_roomid,") \
				_T("     hpo_orderdate dte,") \
				_T("     %s") \
				_T("     1   AS total ") \
				_T("   FROM hms_doc") \
				_T("   LEFT JOIN hms_pharmaorder") \
				_T("   ON(hpo_docno=hd_docno)") \
				_T("   WHERE hpo_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("   AND hpo_orderstatus IN ('A', 'S')") \
				_T("   AND hpo_ordertype   <> 'C'") \
				_T("   AND hpo_deptid       = '%s'") \
				_T("   UNION ALL") \
				_T("   SELECT 4 AS title,") \
				_T("     hd_docno,") \
				_T("     he_roomid,") \
				_T("     hcr_admitdate dte,") \
				_T("     %s") \
				_T("     1   AS total ") \
				_T("   FROM hms_doc") \
				_T("   LEFT JOIN hms_exam") \
				_T("   ON (he_docno  = hd_docno") \
				_T("   AND he_doctor = hd_doctor)") \
				_T("   LEFT JOIN hms_clinical_record") \
				_T("   ON (hd_docno = hcr_docno)") \
				_T("   WHERE hcr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("   AND hd_enddept = '%s'") \
				_T("   ) tbl") \
				_T(" LEFT JOIN hms_roomlist") \
				_T(" ON(hrl_deptid='%s'") \
				_T(" AND hrl_id   =he_roomid)") \
				_T(" WHERE 1      =1") \
				_T(" %s") \
				_T(" GROUP BY hrl_type,") \
				_T("   hrl_id,") \
				_T("   hrl_name,") \
				_T("   hrl_zone,") \
				_T("   title") \
				_T(" ORDER BY title,") \
				_T("   CAST(extype AS INTEGER),") \
				_T("   hrl_id"), szSum, szField, pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID(),
				szField, m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID(),
				szField2, m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID(),
				szField3, m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID(),pMF->GetCurrentDepartmentID(), szWhere);
	return szSQL;
}