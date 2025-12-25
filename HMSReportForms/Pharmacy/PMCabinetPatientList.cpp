#include "stdafx.h"
#include "PMCabinetPatientList.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPMCabinetPatientList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMCabinetPatientList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CPMCabinetPatientList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMCabinetPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMCabinetPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMCabinetPatientList *)pWnd)->OnToDateCheckValue();
} 
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMCabinetPatientList*)pWnd)->OnStorageLoadData();
} 
static void _OnStorageDblClickFnc(CWnd *pWnd){
	((CPMCabinetPatientList*)pWnd)->OnStorageDblClick();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMCabinetPatientList*)pWnd)->OnStorageSelectChange(nOldItem, nNewItem);
} 
static int _OnStorageDeleteItemFnc(CWnd *pWnd){
	 return ((CPMCabinetPatientList*)pWnd)->OnStorageDeleteItem();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMCabinetPatientList *pVw = (CPMCabinetPatientList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CPMCabinetPatientList*)pWnd)->OnAllSelect();
}
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CPMCabinetPatientList*)pWnd)->OnInsuranceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CPMCabinetPatientList*)pWnd)->OnPolicySelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CPMCabinetPatientList*)pWnd)->OnServiceSelect();
}
static int _OnAddPMCabinetPatientListFnc(CWnd *pWnd){
	 return ((CPMCabinetPatientList*)pWnd)->OnAddPMCabinetPatientList();
} 
static int _OnEditPMCabinetPatientListFnc(CWnd *pWnd){
	 return ((CPMCabinetPatientList*)pWnd)->OnEditPMCabinetPatientList();
} 
static int _OnDeletePMCabinetPatientListFnc(CWnd *pWnd){
	 return ((CPMCabinetPatientList*)pWnd)->OnDeletePMCabinetPatientList();
} 
static int _OnSavePMCabinetPatientListFnc(CWnd *pWnd){
	 return ((CPMCabinetPatientList*)pWnd)->OnSavePMCabinetPatientList();
} 
static int _OnCancelPMCabinetPatientListFnc(CWnd *pWnd){
	 return ((CPMCabinetPatientList*)pWnd)->OnCancelPMCabinetPatientList();
} 
CPMCabinetPatientList::CPMCabinetPatientList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMCabinetPatientList::~CPMCabinetPatientList(){
}
void CPMCabinetPatientList::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 3, 5, 508, 445);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
	m_wndYear.Create(this,105, 30, 255, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 260, 30, 350, 55);
	m_wndReportPeriod.Create(this,355, 30, 505, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 255, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 260, 60, 350, 85);
	m_wndToDate.Create(this,355, 60, 505, 85); 
	m_wndStorage.Create(this,10, 90, 505, 440); 
	m_wndStorage.SetCheckBox(TRUE);
	m_wndAll.Create(this, _T("All"), 10, 450, 70, 475);
	m_wndInsurance.Create(this, _T("Insurance"), 75, 450, 155, 475);
	m_wndPolicy.Create(this, _T("Policy"), 160, 450, 260, 475);
	m_wndService.Create(this, _T("Service"), 265, 450, 345, 475);
	m_wndExport.Create(this, _T("&Export"), 405, 450, 505, 475);

}
void CPMCabinetPatientList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
// 	m_wndYear.SetLimitText(1024);
// 	m_wndYear.SetCheckValue(true);
// 	m_wndReportPeriod.SetCheckValue(true);
// 	m_wndReportPeriod.LimitText(1024);
// 	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndFromDate.SetCheckValue(true);
// 	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndToDate.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndStorage.InsertColumn(1, _T("From Storage"), CFMT_TEXT, 350);


}
void CPMCabinetPatientList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	m_wndStorage.SetEvent(WE_DBLCLICK, _OnStorageDblClickFnc);
	m_wndStorage.AddEvent(1, _T("Delete"), _OnStorageDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPMCabinetPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMCabinetPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMCabinetPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMCabinetPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPMCabinetPatientListFnc, 0, 'T', VK_CONTROL);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	CDate dte;
	dte.ParseDate(pMF->GetSysDate());
	m_nYear = dte.GetYear();
	m_szReportPeriodKey = int2str(dte.GetMonth());
	UpdateData(false);
	OnStorageLoadData();

}
void CPMCabinetPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);

}
void CPMCabinetPatientList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("ReportPeriod")] =  m_szReportPeriodKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("All")] =  m_nAll;
	m_jData[_T("Insurance")] =  m_nInsurance;
	m_jData[_T("Policy")] =  m_nPolicy;
	m_jData[_T("Service")] =  m_nService;
	}
	else
	{
			
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("All")].GetValue(m_nAll);
	m_jData[_T("Insurance")].GetValue(m_nInsurance);
	m_jData[_T("Policy")].GetValue(m_nPolicy);
	m_jData[_T("Service")].GetValue(m_nService);
	}

}
void CPMCabinetPatientList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMCabinetPatientList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMCabinetPatientList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll=0;
	m_nInsurance=1;
	m_nPolicy=1;
	m_nService=1;

}
int CPMCabinetPatientList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CPMCabinetPatientList::OnYearChange(){
	
} */
/*void CPMCabinetPatientList::OnYearSetfocus(){
	
} */
/*void CPMCabinetPatientList::OnYearKillfocus(){
	
} */
int CPMCabinetPatientList::OnYearCheckValue(){
	return 0;
} 
void CPMCabinetPatientList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMCabinetPatientList::OnReportPeriodSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CPMCabinetPatientList::OnReportPeriodSetfocus(){
	
}*/
/*void CPMCabinetPatientList::OnReportPeriodKillfocus(){
	
}*/
long CPMCabinetPatientList::OnReportPeriodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadReportPeriodList(&m_wndReportPeriod, m_szReportPeriodKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReportPeriodKey
};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMCabinetPatientList::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPMCabinetPatientList::OnFromDateChange(){
	
} */
/*void CPMCabinetPatientList::OnFromDateSetfocus(){
	
} */
/*void CPMCabinetPatientList::OnFromDateKillfocus(){
	
} */
int CPMCabinetPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMCabinetPatientList::OnToDateChange(){
	
} */
/*void CPMCabinetPatientList::OnToDateSetfocus(){
	
} */
/*void CPMCabinetPatientList::OnToDateKillfocus(){
	
} */
int CPMCabinetPatientList::OnToDateCheckValue(){
	return 0;
} 
void CPMCabinetPatientList::OnStorageDblClick(){
	
} 
void CPMCabinetPatientList::OnStorageSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMCabinetPatientList::OnStorageDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMCabinetPatientList::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndStorage.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id AS id, msl_name AS name FROM m_storagelist WHERE msl_type  = 'C' AND msl_isactive = 'Y' ORDER BY msl_storage_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndStorage.EndLoad(); 
	return nCount;
}
void CPMCabinetPatientList::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CRecord rs2(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szOrderID;	long double	nQty = 0, nTotal = 0;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 12);	xls.SetColumnWidth(2, 20);	xls.SetColumnWidth(3, 25);	xls.SetColumnWidth(4, 35);	xls.SetColumnWidth(5, 12);	xls.SetColumnWidth(6, 10);	xls.SetColumnWidth(7, 14);	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O S\x1EEC \x44\x1EE4NG THU\x1ED0\x43 T\x1EE6 TR\x1EF0\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("T\xEAn \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("Th\x1EBB \x62\x1EA3o hi\x1EC3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("T\xEAn thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 7);	xls.SetMerge(3, 3, 0, 7);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("cardno"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("orderid"), szOrderID);		szSQL.Format(_T(" SELECT") \
			_T(" mp_name AS productname,") \
			_T(" unitprice,") \
			_T(" SUM(qtyissue) AS qtyissue,") \
			_T(" SUM(total) AS total") \
			_T(" FROM") \
			_T(" (") \
			_T(" SELECT") \
			_T(" hpol_product_item_id,") \
			_T(" hpol_unitprice AS unitprice,") \
			_T(" hpol_qtyissue AS qtyissue,") \
			_T(" hpol_unitprice * hpol_qtyissue AS total") \
			_T(" FROM") \
			_T(" hms_pharmaorderline") \
			_T(" WHERE hpol_orderid = %s") \
			_T(" UNION ALL") \
			_T(" SELECT") \
			_T(" hpol_product_item_id,") \
			_T(" hpol_unitprice AS unitprice,") \
			_T(" hpol_qtyissue AS qtyissue,") \
			_T(" hpol_unitprice * hpol_qtyissue AS total") \
			_T(" FROM") \
			_T(" hms_ipharmaorderline") \
			_T(" WHERE hpol_orderid = %s") \
			_T(" )") \
			_T(" LEFT JOIN m_product_item") \
			_T(" ON(mpi_product_item_id = hpol_product_item_id)") \
			_T(" LEFT JOIN m_product") \
			_T(" ON(mpi_product_id = mp_product_id)") \
			_T(" WHERE mpi_org_id = 'PM'") \
			_T(" GROUP BY") \
			_T(" mp_name,") \
			_T(" unitprice") \
			_T(" ORDER BY") \
			_T(" mp_name,") \
			_T(" unitprice"), szOrderID, szOrderID);		rs2.ExecSQL(szSQL);		if (rs2.IsEOF())			nRow++;		while(!rs2.IsEOF()){		rs2.GetValue(_T("productname"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs2.GetValue(_T("unitprice"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);		rs2.GetValue(_T("qtyissue"), tmpStr);		nQty += str2double(tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);		rs2.GetValue(_T("total"), tmpStr);		nTotal += str2double(tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);		nRow++;		rs2.MoveNext();		}		rs.MoveNext();	}	xls.SetCellText(nCol+5, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT, true);	xls.SetCellText(nCol+6, nRow, double2str(nQty), FMT_NUMBER1, true);	xls.SetCellText(nCol+7, nRow, double2str(nTotal), FMT_NUMBER1, true);	EndWaitCursor();	xls.Save(_T("Exports\\BCSDThuocTuTruc.xls"));
} 
void CPMCabinetPatientList::OnAllSelect(){
	
}
void CPMCabinetPatientList::OnInsuranceSelect(){
	
}
void CPMCabinetPatientList::OnPolicySelect(){
	
}
void CPMCabinetPatientList::OnServiceSelect(){
	
}
int CPMCabinetPatientList::OnAddPMCabinetPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMCabinetPatientList::OnEditPMCabinetPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMCabinetPatientList::OnDeletePMCabinetPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPMCabinetPatientList();
 	}
	return 0;
}
int CPMCabinetPatientList::OnSavePMCabinetPatientList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPMCabinetPatientListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMCabinetPatientList::OnCancelPMCabinetPatientList(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPMCabinetPatientList::OnPMCabinetPatientListListLoadData(){
	return 0;
}
CString CPMCabinetPatientList::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL, szWhere, tmpStr, szTemp, szStorages;

	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			szTemp = m_wndStorage.GetItemText(i, 0);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("%s"), szTemp);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorages);
	}

	if(m_nAll == 1)
		szWhere.AppendFormat(_T("AND ho_type = 'I'"));
	else if(m_nAll == 2)
		szWhere.AppendFormat(_T("AND ho_type IN('P', 'D')"));
	else if(m_nAll == 3)
		szWhere.AppendFormat(_T("AND ho_type = 'S'"));

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" hd_docno AS docno,") \
		_T(" get_patientname(hd_docno) AS pname,") \
		_T(" CASE WHEN ho_type = 'I' THEN hd_cardno WHEN ho_type IN('P', 'D') THEN get_syssel_desc('hms_rank', hd_rank) END AS cardno,") \
		_T(" hpo_orderid AS orderid,") \
		_T(" hpo_storage_id,") \
		_T(" hpo_deptid,") \
		_T(" hpo_approvedate") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" hpo_docno,") \
		_T(" hpo_orderid,") \
		_T(" hpo_storage_id,") \
		_T(" hpo_deptid,") \
		_T(" hpo_approvedate,") \
		_T(" hpol_product_item_id,") \
		_T(" hpo_orderstatus") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline") \
		_T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" hpo_docno,") \
		_T(" hpo_orderid,") \
		_T(" hpo_storage_id,") \
		_T(" hpo_deptid,") \
		_T(" hpo_approvedate,") \
		_T(" hpol_product_item_id,") \
		_T(" hpo_orderstatus") \
		_T(" FROM hms_ipharmaorder") \
		_T(" LEFT JOIN hms_ipharmaorderline") \
		_T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
		_T(" )") \
		_T(" LEFT JOIN m_product_item") \
		_T(" ON(mpi_product_item_id = hpol_product_item_id)") \
		_T(" LEFT JOIN m_storagelist") \
		_T(" ON(hpo_storage_id = msl_storage_id)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = hpo_docno)") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(hd_object = ho_id)") \
		_T(" WHERE msl_type = 'C'") \
		_T(" AND hpo_orderstatus = 'A'") \
		_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND mpi_org_id = 'PM' %s") \
		_T(" ORDER BY") \
		_T(" hpo_approvedate,") \
		_T(" hd_docno"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}
