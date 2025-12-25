#include "rptBaodanhsachbenhnhanchuathuphitheokhoa.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CrptBaodanhsachbenhnhanchuathuphitheokhoa *pVw = (CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptBaodanhsachbenhnhanchuathuphitheokhoa *pVw = (CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptBaodanhsachbenhnhanchuathuphitheokhoa *pVw = (CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptBaodanhsachbenhnhanchuathuphitheokhoa *pVw = (CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnInPatientSelect();
}
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnDeptLoadData();
} 
static void _OnDeptDblClickFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnDeptDblClick();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnDeptSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptDeleteItemFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnDeptDeleteItem();
} 
static int _OnRoomCheckAllFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnRoomCheckAll();
} 
static int _OnRoomUnCheckAllFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnRoomUnCheckAll();
} 
static int _OnAddrptBaodanhsachbenhnhanchuathuphitheokhoaFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnAddrptBaodanhsachbenhnhanchuathuphitheokhoa();
} 
static int _OnEditrptBaodanhsachbenhnhanchuathuphitheokhoaFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnEditrptBaodanhsachbenhnhanchuathuphitheokhoa();
} 
static int _OnDeleterptBaodanhsachbenhnhanchuathuphitheokhoaFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnDeleterptBaodanhsachbenhnhanchuathuphitheokhoa();
} 
static int _OnSaverptBaodanhsachbenhnhanchuathuphitheokhoaFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnSaverptBaodanhsachbenhnhanchuathuphitheokhoa();
} 
static int _OnCancelrptBaodanhsachbenhnhanchuathuphitheokhoaFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnCancelrptBaodanhsachbenhnhanchuathuphitheokhoa();
} 
CrptBaodanhsachbenhnhanchuathuphitheokhoa::CrptBaodanhsachbenhnhanchuathuphitheokhoa(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 430;
	m_nDlgHeight = 505;
	m_szTitle = _T("Danh sach benh nhan chua thanh toan vien phi");
	SetDefaultValues();
}
CrptBaodanhsachbenhnhanchuathuphitheokhoa::~CrptBaodanhsachbenhnhanchuathuphitheokhoa(){
}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 420, 455);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 210, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 215, 30, 315, 55);
	m_wndReportPeriod.Create(this,320, 30, 415, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 210, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 315, 85);
	m_wndToDate.Create(this,320, 60, 415, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 84, 466, 164, 491);
	m_wndPrint.Create(this, _T("&Print"), 169, 466, 249, 491);
	m_wndExport.Create(this, _T("&Export"), 254, 466, 334, 491);
	m_wndClose.Create(this, _T("&Close"), 339, 466, 419, 491);
	m_wndOutPatient.Create(this, _T("Out Patient"), 10, 90, 210, 115);
	m_wndInPatient.Create(this, _T("In Patient"), 215, 90, 415, 115);
	m_wndDept.Create(this,10, 120, 415, 450); 

}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDept.SetCheckBox(true);
	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDept.InsertColumn(1, _T("Dept"), CFMT_TEXT, 300);

}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnSetWindowEvents(){
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
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndDept.SetEvent(WE_DBLCLICK, _OnDeptDblClickFnc);
	m_wndDept.AddEvent(1, _T("Check All"), _OnRoomCheckAllFnc, 0, VK_DELETE, 0);
	m_wndDept.AddEvent(2, _T("UnCheck All"), _OnRoomUnCheckAllFnc, 0, VK_DELETE, 0);


	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_nOutPatient=1;
	OnDeptLoadData();
	OnRoomCheckAll();
	SetMode(VM_EDIT);

}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);


}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nOutPatient=1;
	m_nInPatient=0;

}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
 			EnableButtons(TRUE,0,1,2, 3, 4, -1); 
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
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnYearChange(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnYearSetfocus(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnYearKillfocus(){
	
} */
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnYearCheckValue(){
	return 0;
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodSelendok(){
	 CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), m_nYear, dte.GetMonthLastDay());
	}

	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);
}
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodSetfocus(){
	
}*/
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodKillfocus(){
	
}*/
long CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
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
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnFromDateChange(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnFromDateSetfocus(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnFromDateKillfocus(){
	
} */
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnToDateChange(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnToDateSetfocus(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnToDateKillfocus(){
	
} */
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnToDateCheckValue(){
	return 0;
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	PrintListReport(m_szFromDate, m_szToDate);
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	PrintListReport(m_szFromDate, m_szToDate);
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	ExportListReport(m_szFromDate, m_szToDate);
	
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
	void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnOutPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnDeptLoadData();
	UpdateData(false);
	
}
	void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnInPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnDeptLoadData();
	UpdateData(false);
}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDeptDblClick(){
	
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDeptSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDeptDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDept.BeginLoad(); 
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;		
	if (m_nOutPatient==0){
		szSQL.Format(_T(" select hrl_id as id, hrl_name as name from hms_roomlist ")\
		_T(" left join sys_dept on(hrl_deptid=sd_id) ") \
		_T(" where sd_type='KB' and hrl_name is not null  order by id "));
	}
	else
	{
		szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept  where sd_type in('DT') "));
	}
	
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);		
		rs.MoveNext();
	}
	m_wndDept.EndLoad();	
	OnRoomCheckAll();
	return nCount;
}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnAddrptBaodanhsachbenhnhanchuathuphitheokhoa(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnEditrptBaodanhsachbenhnhanchuathuphitheokhoa(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDeleterptBaodanhsachbenhnhanchuathuphitheokhoa(){
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
 		OnCancelrptBaodanhsachbenhnhanchuathuphitheokhoa(); 
 	}
	return 0;
}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnSaverptBaodanhsachbenhnhanchuathuphitheokhoa(){
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
 		//OnrptBaodanhsachbenhnhanchuathuphitheokhoaListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnCancelrptBaodanhsachbenhnhanchuathuphitheokhoa(){
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
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnrptBaodanhsachbenhnhanchuathuphitheokhoaListLoadData(){
	return 0;
}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnRoomCheckAll(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndDept.GetItemCount(); i++){
		m_wndDept.SetCheck(i, true);
	}
	 return 0;
} 
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnRoomUnCheckAll(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndDept.GetItemCount(); i++){
		m_wndDept.SetCheck(i, false);
	}
	 return 0;
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::PrintListReport(CString szFromDate, CString szToDate){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szWhere1, ExamDept;
	CString szCaseDrugID,m_szFacList,m_szGroups,szSumDept, m_szRoomList;
	CRecord rs(&pMF->m_db);	
	UpdateData(true);

	szWhere.Empty();
	szWhere1.Empty();
	
	// Lay ra ma khoa kham benh
	szSQL.Format(_T(" select sd_id as id from sys_dept  where sd_type in('KB') "));
	rs.ExecSQL(szSQL);
	ExamDept= rs.GetStringValue();

	for (int i=0; i< m_wndDept.GetItemCount(); i++){
		if(m_wndDept.GetCheck(i)){
				if(!m_szGroups.IsEmpty())
					m_szGroups += _T(",");						
					m_szGroups.AppendFormat(_T("'%s'"), m_wndDept.GetItemText(i, 0));
				if(!m_szRoomList.IsEmpty())
					m_szRoomList += _T(",");						
					m_szRoomList.AppendFormat(_T("%s"), m_wndDept.GetItemText(i, 0));

				if (!m_szFacList.IsEmpty())
					m_szFacList+= _T(", ");
					m_szFacList.AppendFormat(_T("'%s'"), m_wndDept.GetItemText(i,0));				
		}			
	}


	if (m_nOutPatient==0)
	{	
		szSQL.Format(_T("  SELECT  (select hrl_name as name from hms_roomlist left ") \
		_T("	join sys_dept on(hrl_deptid=sd_id ) where sd_type='KB' and hrl_id=hfe_roomid) as deptid, 	") \
		_T(" 	hd_docno as docno,date(hd_admitdate) as admitdate,(hd_enddate) as dischargedate,	 	") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,  	 	") \
		_T(" 	date_part('year', hp_birthdate) as birthyear, 	 	") \
		_T("	(select ho_desc from hms_object where ho_id=hd_object) as object, ") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex,   	 	") \
		_T(" 	sum(examfee) as examfee, sum(testfee) as testfee,sum(pacs) as pacs,sum(TDCN) as TDCN,	 	") \
		_T(" 	sum(normtechfee) as normtechfee,sum(bedfee) as bedfee, sum(otherfee) as otherfee,sum(drugfee) as drugfee,  	") \
		_T("	(select sum(hfi_patpaid) from hms_fee_invoice where hfi_docno = hd_docno and hfi_type ='A' and hfi_patpaid > 0 and hfe_deptid=hfi_deptid) as ttucost,") \
		_T(" 	sum(cost) as cost 	    ") \
		_T(" FROM hms_patient   ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
		_T(" LEFT JOIN  (	SELECT hfe_roomid,hfe_deptid, hfe_docno,   hfe_quantity as qty,  	 		") \
		_T(" 			case when substr(hfe_group, 1, 1) in('A')then hfe_cost else 0 end as drugfee,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B1'then hfe_cost else 0 end as testfee,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B2' and hfe_hitech='N' then hfe_cost else 0 end as PACS,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B3' and hfe_hitech='N' then hfe_cost else 0 end as TDCN,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost else 0 end as normtechfee,  	   	 		") \
		_T(" 			case when hfe_group='C0000' then hfe_cost else 0 end as bedfee, ") \
		_T(" 			case when hfe_group='D0000' then hfe_cost else 0 end as examfee,") \
		_T(" 			case when hfe_group='F0000' then hfe_cost else 0 end as otherfee,") \
		_T("			hfe_patdebt as patdebt, ") \
		_T(" 			hfe_cost as cost 	") \
		_T(" 		FROM hmsv_fee") \
		_T(" ) as tbl ON(hfe_docno=hd_docno)") \
		_T(" WHERE hd_status ='T' and date(hd_enddate) between date('%s') and date('%s') and hfe_deptid='%s' and hfe_roomid in(%s)") \
		_T(" GROUP BY hfe_deptid,hfe_roomid, docno, pname, birthyear, sex,object,admitdate,dischargedate  ") \
		_T(" HAVING sum(patdebt) > 0  ORDER BY deptid,docno") \
		,szFromDate, szToDate,ExamDept,m_szRoomList);
		if(!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANCHUATHANHTOANPHINGOAITRU.RPT")) )
		return ;
	}
	else
	{
		szSQL.Format(_T(" SELECT  distinct (select sd_name from sys_dept where sd_id=hfe_deptid) as deptid, 	") \
		_T(" 	docno as docno, ") \
		_T("	(select min(date(htr_admitdate)) from hms_treatment_record where htr_docno = docno and htr_deptid=hfe_deptid) as admitdate,") \
		_T("	(select max(date(htr_dischargedate)) from hms_treatment_record where htr_docno = docno and htr_deptid=hfe_deptid) as dischargedate, ") \
		_T(" 	pname, birthyear, sex,") \
		_T("	(select ho_desc from hms_object where ho_id=hd_object) as object, ") \
		_T(" 	sum(bedfee) as examfee, sum(testfee) as testfee,sum(pacs) as pacs,sum(TDCN) as TDCN,	 	") \
		_T(" 	sum(normtechfee) as normtechfee, sum(otherfee) as otherfee,sum(drugfee) as drugfee,  	") \
		_T("	(select sum(hfi_patpaid) from hms_fee_invoice where hfi_docno = docno and hfi_type ='A' and hfi_patpaid > 0 and hfe_deptid=hfi_deptid) as ttucost,") \
		_T(" 	sum(cost) as cost 	    ") \
		_T(" FROM (	SELECT hfe_deptid, hfe_docno as docno, trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,  	 	") \
		_T(" 			date_part('year', hp_birthdate) as birthyear, htr_idx as idx,hd_object,	 	") \
		_T(" 			(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex,  ") \
		_T(" 			case when substr(hfe_group, 1, 1) in('A')then hfe_cost else 0 end as drugfee,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B1'then hfe_cost else 0 end as testfee,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B2' then hfe_cost else 0 end as PACS,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B3' then hfe_cost else 0 end as TDCN,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2) in('B4','B5') then hfe_cost else 0 end as normtechfee,  	   	 		") \
		_T(" 			case when hfe_group='C0000' then hfe_cost else 0 end as bedfee,   	 		") \
		_T(" 			case when hfe_group='F0000' then hfe_cost else 0 end as otherfee, ") \
		_T("			hfe_cost as cost 	") \
		_T(" 		FROM hmsv_fee 			") \
		_T(" 		LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
		_T(" 		LEFT JOIN hms_patient   ON(hd_patientno=hp_patientno) ") \
		_T(" 		LEFT JOIN hms_treatment_record ON(htr_docno=hd_docno and htr_deptid=hfe_deptid )") \
		_T("		LEFT JOIN hms_clinical_record ON(hcr_docno=htr_docno) ") \
		_T(" 		WHERE hcr_status ='T' and hfe_status ='O' ") \
		_T("				and date(hcr_dischargedate) between date('%s') and date('%s') ") \
		_T("				and hfe_deptid in(%s) ") \
		_T(" ) as tbl ") \
		_T(" GROUP BY hfe_deptid,docno, pname, birthyear, sex,object ,admitdate,dischargedate,idx  ") \
		_T(" HAVING sum(cost) > 0  ") \
		_T(" ORDER BY deptid,docno"), szFromDate, szToDate, m_szFacList);

		if(!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANCHUATHANHTOANPHINOITRU.RPT")) )
		return ;
	}

	UpdateData(false);
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(szToDate, yyyymmdd,ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	BeginWaitCursor();
	//Page Header
	//Report Detail
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
	long double grpCost[18];
	long double ttlCost[18];
	double cost = 0;
	for (int i =0; i < 18; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

	long double nSumAmount = 0;
	double nAmount = 0;
	long nIdx=1;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField;
			if(grpCost[17] > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i =7; i < 18; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					ttlCost[i] += grpCost[i];					
					grpCost[i] = 0;				
				}
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"),  szNewLine);
			szOldLine = szNewLine;
			nIdx=1;
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%ld"),nIdx++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("birthyear"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);		

		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("object"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("admitdate"), tmpStr);		
		rptDetail->SetValue(_T("7"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));

		rs.GetValue(_T("dischargedate"), tmpStr);
		rptDetail->SetValue(_T("8"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));

		rs.GetValue(_T("examfee"), nAmount);
		grpCost[9]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("testfee"), nAmount);
		grpCost[10]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		
		rs.GetValue(_T("pacs"), nAmount);
		grpCost[11]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("tdcn"), nAmount);
		grpCost[12]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("normtechfee"), nAmount);
		grpCost[13]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);		
		
		rs.GetValue(_T("drugfee"), nAmount);
		grpCost[14]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);	

		rs.GetValue(_T("otherfee"), nAmount);
		grpCost[15]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);
		
		rs.GetValue(_T("ttuCost"), nAmount);
		grpCost[16]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);

		rs.GetValue(_T("Cost"), nAmount);
		grpCost[17]+=nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		
		rs.MoveNext();
	}
	for (int i =0; i < 18; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	if(grpCost[17] > 0){
		CString szField;
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i =7; i < 18; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}
	if(ttlCost[17] > 0){
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("Tongkhoa"), szAmount);
		for (int i =7; i < 18; i++)
		{
			
			szField.Format(_T("S%d"), i);
			FormatCurrency(ttlCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);		
		}

	}
	//Page Footer
	//Report Footer
	

	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();

}

void CrptBaodanhsachbenhnhanchuathuphitheokhoa::ExportListReport(CString szFromDate, CString szToDate){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szWhere1, ExamDept;
	CString szCaseDrugID,m_szFacList,m_szGroups,szSumDept, m_szRoomList,szFromDateToDate;
	CRecord rs(&pMF->m_db);	
	UpdateData(true);

	szWhere.Empty();
	szWhere1.Empty();
	
	// Lay ra ma khoa kham benh
	szSQL.Format(_T(" select sd_id as id from sys_dept  where sd_type in('KB') "));
	rs.ExecSQL(szSQL);
	ExamDept= rs.GetStringValue();

	for (int i=0; i< m_wndDept.GetItemCount(); i++){
		if(m_wndDept.GetCheck(i)){
				if(!m_szGroups.IsEmpty())
					m_szGroups += _T(",");						
					m_szGroups.AppendFormat(_T("'%s'"), m_wndDept.GetItemText(i, 0));
				if(!m_szRoomList.IsEmpty())
					m_szRoomList += _T(",");						
					m_szRoomList.AppendFormat(_T("%s"), m_wndDept.GetItemText(i, 0));

				if (!m_szFacList.IsEmpty())
					m_szFacList+= _T(", ");
					m_szFacList.AppendFormat(_T("'%s'"), m_wndDept.GetItemText(i,0));				
		}			
	}


	if (m_nOutPatient==0)
	{	
		szSQL.Format(_T("  SELECT  (select hrl_name as name from hms_roomlist left ") \
		_T("	join sys_dept on(hrl_deptid=sd_id ) where sd_type='KB' and hrl_id=hfe_roomid) as deptid, 	") \
		_T(" 	hd_docno as docno,date(hd_admitdate) as admitdate,(hd_enddate) as dischargedate,	 	") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,  	 	") \
		_T(" 	date_part('year', hp_birthdate) as birthyear, 	 	") \
		_T("	(select ho_desc from hms_object where ho_id=hd_object) as object, ") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex,   	 	") \
		_T(" 	sum(examfee) as examfee, sum(testfee) as testfee,sum(pacs) as pacs,sum(TDCN) as TDCN,	 	") \
		_T(" 	sum(normtechfee) as normtechfee,sum(bedfee) as bedfee, sum(otherfee) as otherfee,sum(drugfee) as drugfee,  	") \
		_T("	(select sum(hfi_patpaid) from hms_fee_invoice where hfi_docno = hd_docno and hfi_type ='A' and hfi_patpaid > 0 and hfe_deptid=hfi_deptid) as ttucost,") \
		_T(" 	sum(cost) as cost 	    ") \
		_T(" FROM hms_patient   ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
		_T(" LEFT JOIN  (	SELECT hfe_roomid,hfe_deptid, hfe_docno,   hfe_quantity as qty,  	 		") \
		_T(" 			case when substr(hfe_group, 1, 1) in('A')then hfe_cost else 0 end as drugfee,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B1'then hfe_cost else 0 end as testfee,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B2' and hfe_hitech='N' then hfe_cost else 0 end as PACS,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B3' and hfe_hitech='N' then hfe_cost else 0 end as TDCN,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost else 0 end as normtechfee,  	   	 		") \
		_T(" 			case when hfe_group='C0000' then hfe_cost else 0 end as bedfee, ") \
		_T(" 			case when hfe_group='D0000' then hfe_cost else 0 end as examfee,") \
		_T(" 			case when hfe_group='F0000' then hfe_cost else 0 end as otherfee,") \
		_T("			hfe_patdebt as patdebt, ") \
		_T(" 			hfe_cost as cost 	") \
		_T(" 		FROM hmsv_fee") \
		_T(" ) as tbl ON(hfe_docno=hd_docno)") \
		_T(" WHERE hd_status ='T' and date(hd_enddate) between date('%s') and date('%s') and hfe_deptid='%s' and hfe_roomid in(%s)") \
		_T(" GROUP BY hfe_deptid,hfe_roomid, docno, pname, birthyear, sex,object,admitdate,dischargedate  ") \
		_T(" HAVING sum(patdebt) > 0  ORDER BY deptid,docno") \
		,szFromDate, szToDate,ExamDept,m_szRoomList);
		if(!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANCHUATHANHTOANPHINGOAITRU.RPT")) )
		return ;
	}
	else
	{
		szSQL.Format(_T(" SELECT  distinct (select sd_name from sys_dept where sd_id=hfe_deptid) as deptid, 	") \
		_T(" 	docno as docno, ") \
		_T("	(select min(date(htr_admitdate)) from hms_treatment_record where htr_docno = docno and htr_deptid=hfe_deptid) as admitdate,") \
		_T("	(select max(date(htr_dischargedate)) from hms_treatment_record where htr_docno = docno and htr_deptid=hfe_deptid) as dischargedate, ") \
		_T(" 	pname, birthyear, sex,") \
		_T("	(select ho_desc from hms_object where ho_id=hd_object) as object, ") \
		_T(" 	sum(bedfee) as examfee, sum(testfee) as testfee,sum(pacs) as pacs,sum(TDCN) as TDCN,	 	") \
		_T(" 	sum(normtechfee) as normtechfee, sum(otherfee) as otherfee,sum(drugfee) as drugfee,  	") \
		_T("	(select sum(hfi_patpaid) from hms_fee_invoice where hfi_docno = docno and hfi_type ='A' and hfi_patpaid > 0 and hfe_deptid=hfi_deptid) as ttucost,") \
		_T(" 	sum(cost) as cost 	    ") \
		_T(" FROM (	SELECT hfe_deptid, hfe_docno as docno, trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,  	 	") \
		_T(" 			date_part('year', hp_birthdate) as birthyear, htr_idx as idx,hd_object,	 	") \
		_T(" 			(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex,  ") \
		_T(" 			case when substr(hfe_group, 1, 1) in('A')then hfe_cost else 0 end as drugfee,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B1'then hfe_cost else 0 end as testfee,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B2' then hfe_cost else 0 end as PACS,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2)='B3' then hfe_cost else 0 end as TDCN,   	 		") \
		_T(" 			case when substr(hfe_group, 1, 2) in('B4','B5') then hfe_cost else 0 end as normtechfee,  	   	 		") \
		_T(" 			case when hfe_group='C0000' then hfe_cost else 0 end as bedfee,   	 		") \
		_T(" 			case when hfe_group='F0000' then hfe_cost else 0 end as otherfee, ") \
		_T("			hfe_cost as cost 	") \
		_T(" 		FROM hmsv_fee 			") \
		_T(" 		LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
		_T(" 		LEFT JOIN hms_patient   ON(hd_patientno=hp_patientno) ") \
		_T(" 		LEFT JOIN hms_treatment_record ON(htr_docno=hd_docno and htr_deptid=hfe_deptid )") \
		_T("		LEFT JOIN hms_clinical_record ON(hcr_docno=htr_docno) ") \
		_T(" 		WHERE hcr_status ='T' and hfe_status ='O' ") \
		_T("				and date(hcr_dischargedate) between date('%s') and date('%s') ") \
		_T("				and hfe_deptid in(%s) ") \
		_T(" ) as tbl ") \
		_T(" GROUP BY hfe_deptid,docno, pname, birthyear, sex,object ,admitdate,dischargedate,idx  ") \
		_T(" HAVING sum(cost) > 0  ") \
		_T(" ORDER BY deptid,docno"), szFromDate, szToDate, m_szFacList);

		if(!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANCHUATHANHTOANPHINOITRU.RPT")) )
		return ;
	}

	UpdateData(false);

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	xls.SetColumnWidth(0,5);
	xls.SetColumnWidth(1,23);
	xls.SetColumnWidth(2,5);
	xls.SetColumnWidth(3,5);
	xls.SetColumnWidth(4,10);
	xls.SetColumnWidth(5,10);
	xls.SetColumnWidth(6,10);
	xls.SetColumnWidth(7,10);
	xls.SetColumnWidth(8,12);
	xls.SetColumnWidth(9,12);
	xls.SetColumnWidth(10,12);
	xls.SetColumnWidth(11,12);
	xls.SetColumnWidth(12,12);
	xls.SetColumnWidth(13,12);
	xls.SetColumnWidth(14,12);
	xls.SetColumnWidth(15,12);
	xls.SetColumnWidth(16,12);
	xls.SetColumnWidth(17,12);

	xls.SetCellMergedColumns(0,3,17);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true);
	TranslateString(_T("Danh sach benh nhan chua thanh toan vien phi"), tmpStr);
	xls.SetCellText(0, 3, tmpStr,FMT_TEXT,true,18);
	xls.SetCellMergedColumns(0,4,17);
	TranslateString(_T("From Date"),tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("To Date"),tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));	
	xls.SetCellText(0, 4, szFromDateToDate,FMT_TEXT,true,12);

	int nRow = 6;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Birth Date"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Object"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);		
	TranslateString(_T("In Date"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Out Date"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1,true);
	if(m_nInPatient != 0)
		xls.SetCellText(8, nRow, _T("Ti\x1EC1n kh\xE1m"), FMT_TEXT,true);	
	else
		xls.SetCellText(8, nRow, _T("Ti\x1EC1n gi\x1B0\x1EDDng"), FMT_TEXT,true);

	xls.SetCellText(9, nRow, _T("\x58\xE9t nghi\x1EC7m"), FMT_TEXT,true);	
	xls.SetCellText(10, nRow, _T("CDHA"), FMT_TEXT,true);
	xls.SetCellText(11, nRow, _T("TDCN"), FMT_TEXT,true);
	TranslateString(_T("TT, PT"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Drug"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellText(14, nRow, _T("PhiVC"), FMT_TEXT,true);	
	
	TranslateString(_T("T\x1EA1m \x1EE9ng"), tmpStr);
	xls.SetCellText(15, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Total Cost"), tmpStr);
	xls.SetCellText(16, nRow, tmpStr, FMT_TEXT,true);
	
	
	BeginWaitCursor();
	//Page Header
	//Report Detail
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
	long double grpCost[18];
	long double ttlCost[18];
	double cost = 0;
	for (int i =0; i < 18; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

	long double nSumAmount = 0;
	double nAmount = 0;
	long nIdx=1;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){	
			nRow++;
			if(grpCost[16] > 0)
			{				
				for (int i =8; i < 17; i++)
				{					
					tmpStr.Format(_T("%.2f"),grpCost[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true);
					ttlCost[i] += grpCost[i];
					grpCost[i] = 0;	
				}
			}

			
			xls.MergeCell(nRow,1,nRow,6);
			xls.SetCellText(1,nRow,szNewLine,FMT_TEXT, true);
			szOldLine = szNewLine;
			nIdx=1;
		}

		nRow++;
		tmpStr.Format(_T("%ld"),nIdx++);
		xls.SetCellText(0,nRow,tmpStr,FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr,FMT_TEXT);
		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(2,nRow,tmpStr, FMT_INTEGER);
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(3,nRow,tmpStr,FMT_TEXT);
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(4,nRow,tmpStr,FMT_INTEGER);

		rs.GetValue(_T("object"), tmpStr);
		xls.SetCellText(5,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("admitdate"), tmpStr);		
		xls.SetCellText(6,nRow, CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy),FMT_DATE);

		rs.GetValue(_T("dischargedate"), tmpStr);
		xls.SetCellText(7,nRow, CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy), FMT_DATE);	
		
		rs.GetValue(_T("examfee"), nAmount);
		grpCost[8]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(8,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("testfee"), nAmount);
		grpCost[9]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(9,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("pacs"), nAmount);
		grpCost[10]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(10,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("tdcn"), nAmount);
		grpCost[11]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(11,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("normtechfee"), nAmount);
		grpCost[12]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(12,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("drugfee"), nAmount);
		grpCost[13]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(13,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("otherfee"), nAmount);
		grpCost[14]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(14,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("ttuCost"), nAmount);
		grpCost[15]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(15,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Cost"), nAmount);
		grpCost[16]+=nAmount;
		tmpStr.Format(_T("%.2f"),nAmount);
		xls.SetCellText(16,nRow,tmpStr,FMT_NUMBER1);
		rs.MoveNext();

	}
	for (int i =8; i < 17; i++)
	{
			ttlCost[i] += grpCost[i];
	}

	if(grpCost[16] > 0){
		CString szField;
		nRow++;
		for (int i =8; i < 17; i++)
		{
			tmpStr.Format(_T("%.2f"),grpCost[i]);
			xls.SetCellText(i,nRow,tmpStr,FMT_NUMBER1);
		}
	
	}
	if(ttlCost[16] > 0){
		nRow++;
		for (int i =8; i < 18; i++)
		{			
			tmpStr.Format(_T("%.2f"),ttlCost[i]);
			xls.SetCellText(i,nRow,tmpStr,FMT_NUMBER1);
		}

	}
	//Page Footer
	//Report Footer
	
	
	xls.Save(_T("Exports\\Danh sach benh nhan chua thanh toan vien phi.xls"));
	EndWaitCursor();	
}

