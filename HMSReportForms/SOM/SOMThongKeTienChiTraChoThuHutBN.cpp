#include "stdafx.h"
#include "SOMThongKeTienChiTraChoThuHutBN.h"
#include "HMSMainFrame.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSOMThongKeTienChiTraChoThuHutBN* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSOMThongKeTienChiTraChoThuHutBN* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnDeptAddNew();
}*/
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSOMThongKeTienChiTraChoThuHutBN* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CSOMThongKeTienChiTraChoThuHutBN *)pWnd)->OnPractitionerAddNew();
}*/
static void _OnChuaTTSelectFnc(CWnd *pWnd){
	CSOMThongKeTienChiTraChoThuHutBN *pVw = (CSOMThongKeTienChiTraChoThuHutBN *)pWnd;
	pVw->OnChuaTTSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CSOMThongKeTienChiTraChoThuHutBN *pVw = (CSOMThongKeTienChiTraChoThuHutBN *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddSOMThongKeTienChiTraChoThuHutBNFnc(CWnd *pWnd){
	 return ((CSOMThongKeTienChiTraChoThuHutBN*)pWnd)->OnAddSOMThongKeTienChiTraChoThuHutBN();
} 
static int _OnEditSOMThongKeTienChiTraChoThuHutBNFnc(CWnd *pWnd){
	 return ((CSOMThongKeTienChiTraChoThuHutBN*)pWnd)->OnEditSOMThongKeTienChiTraChoThuHutBN();
} 
static int _OnDeleteSOMThongKeTienChiTraChoThuHutBNFnc(CWnd *pWnd){
	 return ((CSOMThongKeTienChiTraChoThuHutBN*)pWnd)->OnDeleteSOMThongKeTienChiTraChoThuHutBN();
} 
static int _OnSaveSOMThongKeTienChiTraChoThuHutBNFnc(CWnd *pWnd){
	 return ((CSOMThongKeTienChiTraChoThuHutBN*)pWnd)->OnSaveSOMThongKeTienChiTraChoThuHutBN();
} 
static int _OnCancelSOMThongKeTienChiTraChoThuHutBNFnc(CWnd *pWnd){
	 return ((CSOMThongKeTienChiTraChoThuHutBN*)pWnd)->OnCancelSOMThongKeTienChiTraChoThuHutBN();
} 
CSOMThongKeTienChiTraChoThuHutBN::CSOMThongKeTienChiTraChoThuHutBN(CWnd *pWnd){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSOMThongKeTienChiTraChoThuHutBN::~CSOMThongKeTienChiTraChoThuHutBN(){
}
void CSOMThongKeTienChiTraChoThuHutBN::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 2, 490, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 85, 55);
	m_wndYear.Create(this,90, 30, 240, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 245, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 85, 85);
	m_wndFromDate.Create(this,90, 60, 240, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 245, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 85, 115);
	m_wndDept.Create(this,90, 91, 485, 116); 
	m_wndPractitionerLabel.Create(this, _T("Người GT"), 10, 120, 85, 145);
	m_wndPractitioner.Create(this,90, 120, 485, 145); 
	m_wndChuaTT.Create(this, _T("Chưa tính tiền"), 10,  155, 120, 180);
	m_wndExport.Create(this, _T("&Export"), 405, 155, 485, 180);

}
void CSOMThongKeTienChiTraChoThuHutBN::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
// 	m_wndYear.SetLimitText(1024);
// 	m_wndYear.SetCheckValue(true);
// 	m_wndReportPeriod.SetCheckValue(true);
// 	m_wndReportPeriod.LimitText(1024);
// 	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndFromDate.SetCheckValue(true);
// 	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndToDate.SetCheckValue(true);
// 	m_wndDept.SetCheckValue(true);
// 	m_wndDept.LimitText(1024);
// 	m_wndPractitioner.SetCheckValue(true);
// 	m_wndPractitioner.LimitText(1024);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPractitioner.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);





}
void CSOMThongKeTienChiTraChoThuHutBN::OnSetWindowEvents(){
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
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);
	m_wndChuaTT.SetEvent(WE_CLICK, _OnChuaTTSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddSOMThongKeTienChiTraChoThuHutBNFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSOMThongKeTienChiTraChoThuHutBNFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSOMThongKeTienChiTraChoThuHutBNFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSOMThongKeTienChiTraChoThuHutBNFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSOMThongKeTienChiTraChoThuHutBNFnc, 0, 'T', VK_CONTROL);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), str2int(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CSOMThongKeTienChiTraChoThuHutBN::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_Check(pDX, m_wndChuaTT.GetDlgCtrlID(), m_bChuaTT);

}
void CSOMThongKeTienChiTraChoThuHutBN::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("ReportPeriod")] =  m_szReportPeriodKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("Practitioner")] =  m_szPractitionerKey;
	}
	else
	{
			
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("Practitioner")].GetValue(m_szPractitionerKey);
	}

}
void CSOMThongKeTienChiTraChoThuHutBN::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSOMThongKeTienChiTraChoThuHutBN::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSOMThongKeTienChiTraChoThuHutBN::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_szPractitionerKey.Empty();
	m_bChuaTT = FALSE;

}
int CSOMThongKeTienChiTraChoThuHutBN::SetMode(int nMode){
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
/*void CSOMThongKeTienChiTraChoThuHutBN::OnYearChange(){
	
} */
/*void CSOMThongKeTienChiTraChoThuHutBN::OnYearSetfocus(){
	
} */
/*void CSOMThongKeTienChiTraChoThuHutBN::OnYearKillfocus(){
	
} */
int CSOMThongKeTienChiTraChoThuHutBN::OnYearCheckValue(){
	return 0;
} 
void CSOMThongKeTienChiTraChoThuHutBN::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMThongKeTienChiTraChoThuHutBN::OnReportPeriodSelendok(){
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
/*void CSOMThongKeTienChiTraChoThuHutBN::OnReportPeriodSetfocus(){
	
}*/
/*void CSOMThongKeTienChiTraChoThuHutBN::OnReportPeriodKillfocus(){
	
}*/
long CSOMThongKeTienChiTraChoThuHutBN::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
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
/*void CSOMThongKeTienChiTraChoThuHutBN::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CSOMThongKeTienChiTraChoThuHutBN::OnFromDateChange(){
	
} */
/*void CSOMThongKeTienChiTraChoThuHutBN::OnFromDateSetfocus(){
	
} */
/*void CSOMThongKeTienChiTraChoThuHutBN::OnFromDateKillfocus(){
	
} */
int CSOMThongKeTienChiTraChoThuHutBN::OnFromDateCheckValue(){
	return 0;
} 
/*void CSOMThongKeTienChiTraChoThuHutBN::OnToDateChange(){
	
} */
/*void CSOMThongKeTienChiTraChoThuHutBN::OnToDateSetfocus(){
	
} */
/*void CSOMThongKeTienChiTraChoThuHutBN::OnToDateKillfocus(){
	
} */
int CSOMThongKeTienChiTraChoThuHutBN::OnToDateCheckValue(){
	return 0;
} 
void CSOMThongKeTienChiTraChoThuHutBN::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMThongKeTienChiTraChoThuHutBN::OnDeptSelendok(){
	 
}
/*void CSOMThongKeTienChiTraChoThuHutBN::OnDeptSetfocus(){
	
}*/
/*void CSOMThongKeTienChiTraChoThuHutBN::OnDeptKillfocus(){
	
}*/
long CSOMThongKeTienChiTraChoThuHutBN::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSOMThongKeTienChiTraChoThuHutBN::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSOMThongKeTienChiTraChoThuHutBN::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMThongKeTienChiTraChoThuHutBN::OnPractitionerSelendok(){
	 
}
/*void CSOMThongKeTienChiTraChoThuHutBN::OnPractitionerSetfocus(){
	
}*/
/*void CSOMThongKeTienChiTraChoThuHutBN::OnPractitionerKillfocus(){
	
}*/
long CSOMThongKeTienChiTraChoThuHutBN::OnPractitionerLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPractitioner.IsSearchKey() && !m_szPractitionerKey.IsEmpty()){
		szWhere.Format(_T(" WHERE user_id = '%s' "), m_szPractitionerKey);
	}
	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ") \
		_T(" user_id AS id,") \
		_T(" user_name AS name") \
		_T(" FROM") \
		_T("   (SELECT su_userid AS user_id,") \
		_T("     su_name         AS user_name,") \
		_T("     su_deptid       AS user_dept,") \
		_T("     su_groupid") \
		_T("   FROM sys_user") \
		_T("   WHERE su_isactive='Y'") \
		_T("   AND su_groupid  IN('D')") \
		_T("   UNION ALL") \
		_T("   SELECT hou_userid,") \
		_T("     hou_name,") \
		_T("     hou_dept,") \
		_T("     hou_group") \
		_T("   FROM hms_opt_user") \
		_T("   WHERE hou_isactive='Y'") \
		_T("   ) tbl %s") \
		_T(" ORDER BY") \
		_T(" user_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSOMThongKeTienChiTraChoThuHutBN::OnPractitionerAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSOMThongKeTienChiTraChoThuHutBN::OnChuaTTSelect(){

}
void CSOMThongKeTienChiTraChoThuHutBN::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nGroupTotal = 0, nTotal = 0, nGroupTotal2 = 0, nTotal2 = 0;
	CExcel xls;
	if (!xls.Load(_T("Exports\\ThongKeTienChiTraChoThuHutBN.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("nguoigt"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal > 0)
			{
				xls.SetCellText(2, nRow, _T("Cộng"), FMT_TEXT, true);
				xls.SetCellText(3, nRow, double2str(nGroupTotal), FMT_NUMBER1, true);
				xls.SetCellText(5, nRow, double2str(nGroupTotal2), FMT_NUMBER1, true);
				nTotal += nGroupTotal;
				nTotal2 += nGroupTotal2;
				nGroupTotal = 0;
				nGroupTotal2 = 0;
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("tenbn"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("giagoc"), nTemp);		nGroupTotal += nTemp;		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("phantramngt"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("tiencongngt"), nTemp);		nGroupTotal2 += nTemp;		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);		if(m_bChuaTT)		{			rs.GetValue(_T("optname"), tmpStr);			xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		}		nRow++;		rs.MoveNext();	}

	if (nGroupTotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Cộng"), FMT_TEXT, true);
		xls.SetCellText(3, nRow, double2str(nGroupTotal), FMT_NUMBER1, true);
		xls.SetCellText(5, nRow, double2str(nGroupTotal2), FMT_NUMBER1, true);
		nTotal += nGroupTotal;
		nTotal2 += nGroupTotal2;
		nRow++;
	}

	if (nTotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		xls.SetCellText(3, nRow, double2str(nTotal), FMT_NUMBER1, true);
		xls.SetCellText(5, nRow, double2str(nTotal2), FMT_NUMBER1, true);
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\ThongKeTienChiTraChoThuHutBN2.xls"));
} 
int CSOMThongKeTienChiTraChoThuHutBN::OnAddSOMThongKeTienChiTraChoThuHutBN(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSOMThongKeTienChiTraChoThuHutBN::OnEditSOMThongKeTienChiTraChoThuHutBN(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSOMThongKeTienChiTraChoThuHutBN::OnDeleteSOMThongKeTienChiTraChoThuHutBN(){
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
 		OnCancelSOMThongKeTienChiTraChoThuHutBN();
 	}
	return 0;
}
int CSOMThongKeTienChiTraChoThuHutBN::OnSaveSOMThongKeTienChiTraChoThuHutBN(){
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
 		//OnSOMThongKeTienChiTraChoThuHutBNListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSOMThongKeTienChiTraChoThuHutBN::OnCancelSOMThongKeTienChiTraChoThuHutBN(){
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
int CSOMThongKeTienChiTraChoThuHutBN::OnSOMThongKeTienChiTraChoThuHutBNListLoadData(){
	return 0;
}
CString CSOMThongKeTienChiTraChoThuHutBN::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, szUser;
	
	if (!m_szPractitionerKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_demonstrator = '%s'"), m_szPractitionerKey);
	if (!m_szDeptKey.IsEmpty())
		szWhere2.AppendFormat(_T(" AND user_dept = '%s'"), m_szDeptKey);
	if (m_bChuaTT)
		szWhere.AppendFormat(_T("AND hoc_docno IS NULL AND ((ho_deptid = 'TYC' AND ho_roomid  IN(33, 34, 35)) OR ho_deptid = 'PTTYC' OR (htr_deptid  = 'PTTYC' AND ho_deptid   = 'B5'))"));
	else
		szWhere.AppendFormat(_T("AND hoc_docno IS NOT NULL"));

	szSQL.Format(_T(" SELECT") \
		_T(" nguoigt,") \
		_T(" docno,") \
		_T(" tenbn,") \
		_T(" giagoc,") \
		_T(" SUM(phantramngt) AS phantramngt,") \
		_T(" SUM(tiencongngt) AS tiencongngt,") \
		_T(" optname") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" (SELECT TRIM(user_name || ' - ' || user_dept) AS user_name") \
		_T(" FROM") \
		_T("   (SELECT su_userid AS user_id,") \
		_T("     su_name         AS user_name,") \
		_T("     get_departmentname(su_deptid)       AS user_dept,") \
		_T("     su_groupid") \
		_T("   FROM sys_user") \
		_T("   WHERE su_isactive='Y'") \
		_T("   UNION ALL") \
		_T("   SELECT hou_userid,") \
		_T("     hou_name,") \
		_T("     CASE WHEN hou_dept IS NULL THEN hou_note ELSE get_departmentname(hou_dept) END AS hou_dept,") \
		_T("     hou_group") \
		_T("   FROM hms_opt_user") \
		_T("   WHERE hou_isactive='Y'") \
		_T("   ) tbl WHERE user_id = ho_demonstrator %s) AS nguoigt,") \
		_T(" ho_docno AS docno,") \
		_T(" get_patientname(ho_docno) AS tenbn,") \
		_T(" CASE WHEN NVL(ho_amount, 0) = 0 THEN hfl_servprice ELSE ho_amount END AS giagoc,") \
		_T(" CASE WHEN hoc_type = 'GT' THEN hoc_percent ELSE 0 END AS phantramngt,") \
		_T(" CASE WHEN hoc_type = 'GT' THEN hoc_amount ELSE 0 END AS tiencongngt,") \
		_T(" hfl_name AS optname") \
		_T(" FROM hms_operation") \
		_T(" LEFT JOIN hms_operation_charge") \
		_T(" ON(hoc_docno = ho_docno AND hoc_optidx = ho_idx) ") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno = ho_docno AND htr_idx = ho_refidx) ") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(ho_itemid = hfl_feeid) ") \
		_T(" WHERE ho_status NOT IN('O')") \
		_T(" AND ho_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" %s") \
		_T(" )") \
		_T(" GROUP BY") \
		_T(" nguoigt,") \
		_T(" docno,") \
		_T(" tenbn,") \
		_T(" giagoc,") \
		_T(" optname") \
		_T(" ORDER BY") \
		_T(" nguoigt,") \
		_T(" docno,") \
		_T(" tenbn,") \
		_T(" giagoc"), szWhere2, m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}