#include "stdafx.h"
#include "EMCuredToothDetailB10.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMCuredToothDetailB10 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMCuredToothDetailB10* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMCuredToothDetailB10 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMCuredToothDetailB10 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMCuredToothDetailB10 *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMCuredToothDetailB10* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CEMCuredToothDetailB10 *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10 *)pWnd)->OnObjectAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CEMCuredToothDetailB10*)pWnd)->OnAllSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CEMCuredToothDetailB10*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CEMCuredToothDetailB10*)pWnd)->OnInPatientSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMCuredToothDetailB10 *pVw = (CEMCuredToothDetailB10 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCheckSelectFnc(CWnd *pWnd){
	((CEMCuredToothDetailB10*)pWnd)->OnCheckSelect();
}
static int _OnAddEMCuredToothDetailB10Fnc(CWnd *pWnd){
	 return ((CEMCuredToothDetailB10*)pWnd)->OnAddEMCuredToothDetailB10();
} 
static int _OnEditEMCuredToothDetailB10Fnc(CWnd *pWnd){
	 return ((CEMCuredToothDetailB10*)pWnd)->OnEditEMCuredToothDetailB10();
} 
static int _OnDeleteEMCuredToothDetailB10Fnc(CWnd *pWnd){
	 return ((CEMCuredToothDetailB10*)pWnd)->OnDeleteEMCuredToothDetailB10();
} 
static int _OnSaveEMCuredToothDetailB10Fnc(CWnd *pWnd){
	 return ((CEMCuredToothDetailB10*)pWnd)->OnSaveEMCuredToothDetailB10();
} 
static int _OnCancelEMCuredToothDetailB10Fnc(CWnd *pWnd){
	 return ((CEMCuredToothDetailB10*)pWnd)->OnCancelEMCuredToothDetailB10();
} 
CEMCuredToothDetailB10::CEMCuredToothDetailB10(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMCuredToothDetailB10::~CEMCuredToothDetailB10(){
}
void CEMCuredToothDetailB10::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 225, 30, 305, 55);
	m_wndReportPeriod.Create(this,310, 30, 430, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 430, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.SetCheckBox(TRUE);
	m_wndObject.Create(this,97, 90, 432, 115); 
	m_wndAll.Create(this, _T("All"), 10, 125, 90, 150);
	m_wndOutPatient.Create(this, _T("OutPatient"), 95, 125, 175, 150);
	m_wndInPatient.Create(this, _T("InPatient"), 180, 125, 260, 150);
	m_wndExport.Create(this, _T("&Export"), 350, 125, 430, 150);
	m_wndCheck.Create(this, _T("Kiểm tra"), 10, 153, 90, 178);

}
void CEMCuredToothDetailB10::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 150);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | FMT_RIGHT, 80);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

}
void CEMCuredToothDetailB10::OnSetWindowEvents(){
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
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndCheck.SetEvent(WE_CLICK, _OnCheckSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddEMCuredToothDetailB10Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditEMCuredToothDetailB10Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteEMCuredToothDetailB10Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveEMCuredToothDetailB10Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelEMCuredToothDetailB10Fnc, 0, 'T', VK_CONTROL);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CEMCuredToothDetailB10::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Check(pDX, m_wndCheck.GetDlgCtrlID(), m_bCheck);

}
void CEMCuredToothDetailB10::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMCuredToothDetailB10::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMCuredToothDetailB10::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_nAll=0;
	m_nOutPatient=1;
	m_nInPatient=1;
	m_bCheck=FALSE;

}
int CEMCuredToothDetailB10::SetMode(int nMode){
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
/*void CEMCuredToothDetailB10::OnYearChange(){
	
} */
/*void CEMCuredToothDetailB10::OnYearSetfocus(){
	
} */
/*void CEMCuredToothDetailB10::OnYearKillfocus(){
	
} */
int CEMCuredToothDetailB10::OnYearCheckValue(){
	return 0;
} 
void CEMCuredToothDetailB10::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMCuredToothDetailB10::OnReportPeriodSelendok(){
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
/*void CEMCuredToothDetailB10::OnReportPeriodSetfocus(){
	
}*/
/*void CEMCuredToothDetailB10::OnReportPeriodKillfocus(){
	
}*/
long CEMCuredToothDetailB10::OnReportPeriodLoadData(){
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
/*void CEMCuredToothDetailB10::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMCuredToothDetailB10::OnFromDateChange(){
	
} */
/*void CEMCuredToothDetailB10::OnFromDateSetfocus(){
	
} */
/*void CEMCuredToothDetailB10::OnFromDateKillfocus(){
	
} */
int CEMCuredToothDetailB10::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMCuredToothDetailB10::OnToDateChange(){
	
} */
/*void CEMCuredToothDetailB10::OnToDateSetfocus(){
	
} */
/*void CEMCuredToothDetailB10::OnToDateKillfocus(){
	
} */
int CEMCuredToothDetailB10::OnToDateCheckValue(){
	return 0;
} 
void CEMCuredToothDetailB10::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMCuredToothDetailB10::OnObjectSelendok(){
	 
}
/*void CEMCuredToothDetailB10::OnObjectSetfocus(){
	
}*/
/*void CEMCuredToothDetailB10::OnObjectKillfocus(){
	
}*/
long CEMCuredToothDetailB10::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id AS id, ho_desc AS name FROM hms_object WHERE ho_active = 'Y' %s ORDER BY id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMCuredToothDetailB10::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMCuredToothDetailB10::OnAllSelect(){
	
}
void CEMCuredToothDetailB10::OnOutPatientSelect(){
	
}
void CEMCuredToothDetailB10::OnInPatientSelect(){
	
}
void CEMCuredToothDetailB10::OnCheckSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMCuredToothDetailB10::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_bCheck)
		OnExport2();
	else
		OnExport1();
	
} 
void CEMCuredToothDetailB10::OnExport1(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetLandscape(true);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 12);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(3, 30);
	xls.SetColumnWidth(4, 30);
	xls.SetColumnWidth(5, 4);
	xls.SetColumnWidth(6, 4);
	xls.SetColumnWidth(7, 4);
	xls.SetColumnWidth(8, 4);
	xls.SetColumnWidth(9, 4);
	xls.SetColumnWidth(10, 4);
	xls.SetColumnWidth(11, 4);
	xls.SetColumnWidth(12, 4);
	xls.SetColumnWidth(13, 4);
	xls.SetColumnWidth(14, 4);
	xls.SetColumnWidth(15, 4);
	xls.SetColumnWidth(16, 4);
	xls.SetColumnWidth(17, 4);
	xls.SetColumnWidth(18, 4);
	xls.SetColumnWidth(19, 4);
	xls.SetColumnWidth(20, 4);
	xls.SetColumnWidth(21, 4);
	xls.SetColumnWidth(22, 4);
	xls.SetColumnWidth(23, 4);
	xls.SetColumnWidth(24, 4);
	xls.SetColumnWidth(25, 4);
	xls.SetColumnWidth(26, 4);
	xls.SetColumnWidth(27, 4);
	xls.SetColumnWidth(28, 4);
	xls.SetColumnWidth(29, 4);
	xls.SetColumnWidth(30, 4);
	xls.SetColumnWidth(31, 4);
	xls.SetColumnWidth(32, 4);
	xls.SetColumnWidth(33, 4);
	xls.SetColumnWidth(34, 4);
	xls.SetColumnWidth(35, 4);
	xls.SetColumnWidth(36, 4);
	xls.SetColumnWidth(37, 4);
	xls.SetColumnWidth(38, 4);
	xls.SetColumnWidth(39, 4);
	xls.SetColumnWidth(40, 4);
	xls.SetColumnWidth(41, 4);
	xls.SetColumnWidth(42, 4);
	xls.SetColumnWidth(43, 4);
	xls.SetColumnWidth(44, 4);
	xls.SetColumnWidth(45, 4);
	xls.SetColumnWidth(46, 4);

	xls.SetCellText(0, 0, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("KHOA RĂNG (B10)"), FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, 4098, true);

	xls.SetCellText(0, 2, _T("BÁO CÁO SỐ LIỆU KHOA RĂNG B10 CHI TIẾT"), FMT_TEXT | FMT_CENTER, true, 16);
	xls.SetCellText(0, 4, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(1, 4, _T("Họ tên"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(2, 4, _T("Đối tượng"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(3, 4, _T("Ngoại trú"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(4, 4, _T("Nội trú"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(5, 4, _T("Nội dung điều trị"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(5, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(6, 5, _T("NR8"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(7, 5, _T("S3"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(8, 5, _T("T2"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(9, 5, _T("T3"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(10, 5, _T("CRVL"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(11, 5, _T("VQR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(12, 5, _T("TM"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(13, 5, _T("#"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(14, 5, _T("CC,MN"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(15, 5, _T("IM"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(16, 4, _T("Lắp hàm"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(16, 5, _T("HT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(17, 5, _T("HK"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(18, 5, _T("HKTT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(19, 5, _T("HND"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(20, 5, _T("HKND"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(21, 4, _T("Cầu"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(21, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(22, 5, _T("Đ"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(23, 5, _T("ĐTT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(24, 5, _T("S"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(25, 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(26, 5, _T("SCR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(27, 4, _T("PIVO"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(27, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(28, 5, _T("Đ"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(29, 5, _T("ĐTT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(30, 5, _T("S"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(31, 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(32, 5, _T("SCR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(33, 4, _T("Chụp"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(33, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(34, 5, _T("Đ"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(35, 5, _T("ĐTT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(36, 5, _T("S"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(37, 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(38, 5, _T("SCR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(39, 4, _T("Hàm nắn"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(39, 5, _T("ĐG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(40, 5, _T("Ốc"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(41, 5, _T("BR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(42, 4, _T("Khác"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(42, 5, _T("Xpos"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(43, 5, _T("Vá"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(44, 5, _T("Máng"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(45, 5, _T("Gắn"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(46, 4, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(0, 0, 0, 3);
	xls.SetMerge(1, 1, 0, 3);
	xls.SetMerge(2, 2, 0, 46);
	xls.SetMerge(3, 3, 0, 46);
	xls.SetMerge(4, 5, 0, 0);
	xls.SetMerge(4, 5, 1, 1);
	xls.SetMerge(4, 5, 2, 2);
	xls.SetMerge(4, 5, 3, 3);
	xls.SetMerge(4, 5, 4, 4);
	xls.SetMerge(4, 4, 5, 15);
	xls.SetMerge(4, 4, 16, 20);
	xls.SetMerge(4, 4, 21, 26);
	xls.SetMerge(4, 4, 27, 32);
	xls.SetMerge(4, 4, 33, 38);
	xls.SetMerge(4, 4, 39, 41);
	xls.SetMerge(4, 4, 42, 45);
	xls.SetMerge(4, 5, 46, 46);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 6;
	nCol = 0;

	int nTotal[44];
	for(int i = 1; i < 43; i++)
	{
		nTotal[i] = 0;
	}

	while(!rs.IsEOF()){
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("pobject"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ngoaitru"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		rs.GetValue(_T("noitru"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		for(int i = 1; i < 43; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i] += str2int(tmpStr);
			xls.SetCellText(nCol+i+4, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellText(nCol+3, nRow, _T("Tổng cộng"), FMT_TEXT, true);
	for(int i = 1; i < 43; i++)
	{
		xls.SetCellText(nCol+i+4, nRow, int2str(nTotal[i]), FMT_NUMBER1, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao dieu tri khoi khoa rang B10 chi tiet.xls"));

} 
void CEMCuredToothDetailB10::OnExport2(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetLandscape(true);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 20);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 30);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 4);
	xls.SetColumnWidth(7, 4);
	xls.SetColumnWidth(8, 4);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 4);
	xls.SetColumnWidth(11, 4);
	xls.SetColumnWidth(12, 4);
	xls.SetColumnWidth(13, 4);
	xls.SetColumnWidth(14, 4);
	xls.SetColumnWidth(15, 4);
	xls.SetColumnWidth(16, 4);
	xls.SetColumnWidth(17, 6);
	xls.SetColumnWidth(18, 4);
	xls.SetColumnWidth(19, 6);
	xls.SetColumnWidth(20, 4);
	xls.SetColumnWidth(21, 4);
	xls.SetColumnWidth(22, 4);
	xls.SetColumnWidth(23, 4);
	xls.SetColumnWidth(24, 4);
	xls.SetColumnWidth(25, 4);
	xls.SetColumnWidth(26, 4);
	xls.SetColumnWidth(27, 4);
	xls.SetColumnWidth(28, 4);
	xls.SetColumnWidth(29, 4);
	xls.SetColumnWidth(30, 4);
	xls.SetColumnWidth(31, 4);
	xls.SetColumnWidth(32, 4);
	xls.SetColumnWidth(33, 4);
	xls.SetColumnWidth(34, 4);
	xls.SetColumnWidth(35, 4);
	xls.SetColumnWidth(36, 4);
	xls.SetColumnWidth(37, 4);
	xls.SetColumnWidth(38, 4);
	xls.SetColumnWidth(39, 4);
	xls.SetColumnWidth(40, 4);
	xls.SetColumnWidth(41, 6);
	xls.SetColumnWidth(42, 4);
	xls.SetColumnWidth(43, 6);
	xls.SetColumnWidth(44, 4);
	xls.SetColumnWidth(45, 6);
	xls.SetColumnWidth(46, 4);
	xls.SetColumnWidth(47, 4);
	xls.SetColumnWidth(48, 4);
	xls.SetColumnWidth(49, 6);
	xls.SetColumnWidth(50, 4);
	xls.SetColumnWidth(51, 6);
	xls.SetColumnWidth(52, 4);
	xls.SetColumnWidth(53, 6);

	xls.SetCellText(0, 0, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("KHOA RĂNG (B10)"), FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, 4098, true);

	xls.SetCellText(0, 2, _T("BÁO CÁO SỐ LIỆU KHOA RĂNG B10 CHI TIẾT"), FMT_TEXT | FMT_CENTER, true, 16);
	xls.SetCellText(0, 4, _T("Họ tên"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(1, 4, _T("Đối tượng"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(2, 4, _T("Ngoại trú"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(3, 4, _T("Nội trú"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(4, 4, _T("Ngày nhập khỏi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 4, _T("Ngày nhập chi tiết"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 4, _T("Mới"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 4, _T("Lần ĐT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, 4, _T("Bảo tồn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 4, _T("Hàm giả"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 4, _T("Nhổ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 4, _T("DDT khỏi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetCellText(12, 4, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 4, _T("Nội dung điều trị"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(13, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(14, 5, _T("NR8"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(15, 5, _T("S3"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(16, 5, _T("T2"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(17, 5, _T("T3"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(18, 5, _T("CRVL"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(19, 5, _T("VQR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(20, 5, _T("TM"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(21, 5, _T("#"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(22, 5, _T("CC,MN"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(23, 5, _T("IM"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(24, 4, _T("Lắp hàm"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(24, 5, _T("HT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(25, 5, _T("HK"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(26, 5, _T("HKTT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(27, 5, _T("HND"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(28, 5, _T("HKND"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(29, 4, _T("Cầu"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(29, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(30, 5, _T("Đ"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(31, 5, _T("ĐTT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(32, 5, _T("S"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(33, 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(34, 5, _T("SCR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(35, 4, _T("PIVO"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(35, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(36, 5, _T("Đ"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(37, 5, _T("ĐTT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(38, 5, _T("S"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(39, 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(40, 5, _T("SCR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(41, 4, _T("Chụp"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(41, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(42, 5, _T("Đ"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(43, 5, _T("ĐTT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(44, 5, _T("S"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(45, 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(46, 5, _T("SCR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(47, 4, _T("Hàm nắn"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(47, 5, _T("ĐG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(48, 5, _T("Ốc"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(49, 5, _T("BR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(50, 4, _T("Khác"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(50, 5, _T("Xpos"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(51, 5, _T("Vá"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(52, 5, _T("Máng"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(53, 5, _T("Gắn"), FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetMerge(0, 0, 0, 3);
	xls.SetMerge(1, 1, 0, 3);
	xls.SetMerge(2, 2, 0, 45);
	xls.SetMerge(3, 3, 0, 45);
	xls.SetMerge(4, 5, 0, 0);
	xls.SetMerge(4, 5, 1, 1);
	xls.SetMerge(4, 5, 2, 2);
	xls.SetMerge(4, 5, 3, 3);
	xls.SetMerge(4, 5, 4, 4);
	xls.SetMerge(4, 5, 5, 5);
	xls.SetMerge(4, 5, 6, 6);
	xls.SetMerge(4, 5, 7, 7);
	xls.SetMerge(4, 5, 8, 8);
	xls.SetMerge(4, 5, 9, 9);
	xls.SetMerge(4, 5, 10, 10);
	xls.SetMerge(4, 5, 11, 11);
	xls.SetMerge(4, 5, 12, 12);
	xls.SetMerge(4, 4, 13, 23);
	xls.SetMerge(4, 4, 24, 28);
	xls.SetMerge(4, 4, 29, 35);
	xls.SetMerge(4, 4, 36, 41);
	xls.SetMerge(4, 4, 42, 47);
	xls.SetMerge(4, 4, 48, 50);
	xls.SetMerge(4, 4, 51, 54);

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	nRow = 6;
	nCol = 0;

	int nTotal[53];
	for(int i = 1; i < 53; i++)
	{
		nTotal[i] = 0;
	}

	while(!rs.IsEOF()){
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("pobject"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ngoaitru"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		rs.GetValue(_T("noitru"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("ngay1"), tmpStr);
		xls.SetCellText(nCol+4, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);
		rs.GetValue(_T("ngay2"), tmpStr);
		xls.SetCellText(nCol+5, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);
		rs.GetValue(_T("moi"), tmpStr);
		nTotal[1] += str2int(tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("lan"), tmpStr);
		nTotal[2] += str2int(tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("baoton"), tmpStr);
		nTotal[3] += str2int(tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("hamgia"), tmpStr);
		nTotal[4] += str2int(tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("nho"), tmpStr);
		nTotal[5] += str2int(tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("khoi"), tmpStr);
		nTotal[6] += str2int(tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("tong"), tmpStr);
		nTotal[7] += str2int(tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);

		int j = 1;
		for(int i = 8; i < 53; i++)
		{
			szTemp.Format(_T("c%d"), j++);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i] += str2int(tmpStr);
			xls.SetCellText(nCol+i+5, nRow, tmpStr, FMT_NUMBER1);
		}

		rs.GetValue(_T("pcheck"), tmpStr);
		if(tmpStr == _T("N"))
			xls.SetCellText(nCol+54, nRow, _T("X"), FMT_TEXT);
		else
			xls.SetCellText(nCol+54, nRow, _T(" "), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellText(nCol+3, nRow, _T("Tổng cộng"), FMT_TEXT, true);
	for(int i = 1; i < 53; i++)
	{
		xls.SetCellText(nCol+i+5, nRow, int2str(nTotal[i]), FMT_NUMBER1, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao dieu tri khoi khoa rang B10 chi tiet.xls"));

} 
int CEMCuredToothDetailB10::OnAddEMCuredToothDetailB10(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEMCuredToothDetailB10::OnEditEMCuredToothDetailB10(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMCuredToothDetailB10::OnDeleteEMCuredToothDetailB10(){
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
 		OnCancelEMCuredToothDetailB10();
 	}
	return 0;
}
int CEMCuredToothDetailB10::OnSaveEMCuredToothDetailB10(){
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
 		//OnEMCuredToothDetailB10ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEMCuredToothDetailB10::OnCancelEMCuredToothDetailB10(){
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
int CEMCuredToothDetailB10::OnEMCuredToothDetailB10ListLoadData(){
	return 0;
}
CString CEMCuredToothDetailB10::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szObjects, szWhere2, szWhere3;

	if (m_nAll == 0)
    {
        szWhere2.Format((_T(" AND ngoaitru IS NOT NULL OR noitru IS NOT NULL ")));
        szWhere.Format(_T(" "));
    }
	if (m_nOutPatient == 0)
	{
		szWhere.Format(_T(" AND NVL(hd_indept, 'X') IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'TTTM', 'X')"));
        szWhere2.Format(_T(" AND ngoaitru IS NOT NULL"));
	}
		
	if (m_nInPatient == 0)
	{
		szWhere.Format(_T(" AND NVL(hd_indept, 'X') NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'TTTM', 'X')"));
        szWhere2.Format(_T("  AND noitru IS NOT NULL"));
	}
		

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects.AppendFormat(_T(", "));
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}
	if (!szObjects.IsEmpty())
	{
        szWhere.AppendFormat(_T(" AND hd_object IN (%s)"), szObjects);
        szWhere3.Format(_T(" AND hd_object IN (%s)"), szObjects);
	}
		

	szSQL.Format(
        _T(" SELECT docno, pname, pobject, ngoaitru, noitru,")
        _T(" SUM(c1) AS c1, SUM(c2) AS c2, SUM(c3) AS c3, SUM(c4) AS c4, SUM(c5) AS c5, SUM(c6) AS c6, SUM(c7) AS c7, SUM(c8) AS c8,")
        _T(" SUM(c9) AS c9, SUM(c10) AS c10, SUM(c11) AS c11, SUM(c12) AS c12, SUM(c13) AS c13, SUM(c14) AS c14, SUM(c15) AS c15, SUM(c16) AS c16,")
        _T(" SUM(c17) AS c17, SUM(c18) AS c18, SUM(c19) AS c19, SUM(c20) AS c20, SUM(c21) AS c21, SUM(c22) AS c22, SUM(c23) AS c23, SUM(c24) AS c24,")
        _T(" SUM(c25) AS c25, SUM(c26) AS c26, SUM(c27) AS c27, SUM(c28) AS c28, SUM(c29) AS c29, SUM(c30) AS c30, SUM(c31) AS c31, SUM(c32) AS c32,")
        _T(" SUM(c33) AS c33, SUM(c34) AS c34, SUM(c35) AS c35, SUM(c36) AS c36, SUM(c37) AS c37, SUM(c38) AS c38, SUM(c39) AS c39, SUM(c40) AS c40,")
        _T(" SUM(c41) AS c41, SUM(c42) AS c42")
        _T(" FROM (")
        _T(" SELECT hct_docno AS docno,  get_patientname(hct_docno) AS pname,  get_objectname(hd_object) AS pobject,")
        _T(" CAST(CASE WHEN (NVL(he_deptid, 'X') IN ('C1.1', 'TYC') AND he_roomid IN (52)) OR (he_deptid = 'TTTM' and he_roomid = 7) THEN he_medical END AS VARCHAR2(4000)) AS ngoaitru,")
        _T(" CAST('' AS VARCHAR2(2048)) AS noitru,")
        _T(" SUM(hct_extraction) AS c1, SUM(hct_r8) AS c2, SUM(hct_s3) as c3, SUM(hct_t2) AS c4, SUM(hct_t3) AS c5, SUM(hct_cr) AS c6,SUM(hct_vqr) AS c7, ")
        _T("SUM(hct_tm) AS c8, SUM(hct_b) AS c9, ")
        _T("SUM(hct_cc) AS c10, SUM(hct_im) AS c11, SUM(hct_ht) AS c12, SUM(hct_hk) AS c13, SUM(hct_hkt) AS c14, SUM(hct_nd) AS c15, ")
        _T("SUM(hct_hkmnd) AS c16, SUM(hct_cau_n) AS c17, SUM(hct_cau_d) AS c18,")
        _T(" SUM(hct_cau_dtt) AS c19, SUM(hct_cau_s) AS c20, SUM(hct_cau_stt) AS c21, SUM(hct_cau_scc) AS c22, SUM(hct_pivo_n) AS c23, ")
        _T("SUM(hct_pivo_d) AS c24, SUM(hct_pivo_dtt) AS c25, SUM(hct_pivo_s) AS c26, SUM(hct_pivo_stt) AS c27, SUM(hct_pivo_scc) AS c28, ")
        _T("SUM(hct_chup_n) AS c29, SUM(hct_chup_d) AS c30, SUM(hct_chup_dtt) AS c31, SUM(hct_chup_s) AS c32, ")
        _T("SUM(hct_chup_stt) AS c33, SUM(hct_chup_scc) AS c34, SUM(hct_dg) AS c35, SUM(hct_oc) AS c36,")
        _T(" SUM(hct_br) AS c37, SUM(hct_xpos) AS c38, SUM(hct_va) AS c39, SUM(hct_mcl) AS c40, SUM(hct_gcc) AS c41,")
        _T(" SUM(hct_extraction + hct_r8 + hct_s3 + hct_t2 + hct_t3 + hct_tm + hct_cr + hct_vqr + hct_b + hct_cc + hct_im +")
        _T(" hct_ht + hct_hk + hct_hkt + hct_nd + hct_hkmnd + hct_cau_n + hct_cau_d + hct_cau_dtt + hct_cau_s + hct_cau_stt + hct_cau_scc +")
        _T(" hct_pivo_n + hct_pivo_d + hct_pivo_dtt + hct_pivo_s + hct_pivo_stt + hct_pivo_scc + hct_chup_n + hct_chup_d + ")
        _T(" hct_chup_dtt + hct_chup_s + hct_chup_stt + hct_chup_scc + hct_dg + hct_oc + hct_br + ")
        _T(" hct_xpos + hct_va + hct_mcl + hct_gcc) AS c42")
        _T(" FROM hms_curedtreatment")
        _T(" LEFT JOIN hms_doc ON(hct_docno = hd_docno)")
        _T(" LEFT JOIN hms_exam ON(hd_docno = he_docno)")
        _T(" WHERE hct_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T(" %s ")
        _T(" GROUP BY hct_docno, hd_object, he_deptid, he_roomid, he_medical")
        _T(" UNION ALL")
        _T(" SELECT sie.hsie_docno AS docno,")
        _T(" get_patientname(sie.hsie_docno) AS pname,")
        _T(" get_objectname(hd_object) AS pobject,")
        _T(" CAST('' AS VARCHAR2(4000)) AS ngoaitru,")
        _T(" CAST(sie.tmmedical AS VARCHAR2(2048)) AS noitru,")
        _T(" SUM(hct_extraction) AS c1, SUM(hct_r8) AS c2, SUM(hct_s3) as c3, SUM(hct_t2) AS c4, SUM(hct_t3) AS c5, SUM(hct_cr) AS c6,SUM(hct_vqr) AS c7, ")
        _T("SUM(hct_tm) AS c8, SUM(hct_b) AS c9, ")
        _T("SUM(hct_cc) AS c10, SUM(hct_im) AS c11, SUM(hct_ht) AS c12, SUM(hct_hk) AS c13, SUM(hct_hkt) AS c14, SUM(hct_nd) AS c15, ")
        _T("SUM(hct_hkmnd) AS c16, SUM(hct_cau_n) AS c17, SUM(hct_cau_d) AS c18,")
        _T(" SUM(hct_cau_dtt) AS c19, SUM(hct_cau_s) AS c20, SUM(hct_cau_stt) AS c21, SUM(hct_cau_scc) AS c22, SUM(hct_pivo_n) AS c23, ")
        _T("SUM(hct_pivo_d) AS c24, SUM(hct_pivo_dtt) AS c25, SUM(hct_pivo_s) AS c26, SUM(hct_pivo_stt) AS c27, SUM(hct_pivo_scc) AS c28, ")
        _T("SUM(hct_chup_n) AS c29, SUM(hct_chup_d) AS c30, SUM(hct_chup_dtt) AS c31, SUM(hct_chup_s) AS c32, ")
        _T("SUM(hct_chup_stt) AS c33, SUM(hct_chup_scc) AS c34, SUM(hct_dg) AS c35, SUM(hct_oc) AS c36,")
        _T(" SUM(hct_br) AS c37, SUM(hct_xpos) AS c38, SUM(hct_va) AS c39, SUM(hct_mcl) AS c40, SUM(hct_gcc) AS c41,")
        _T(" SUM(hct_extraction + hct_r8 + hct_s3 + hct_t2 + hct_t3 + hct_tm + hct_cr + hct_vqr + hct_b + hct_cc + hct_im +")
        _T(" hct_ht + hct_hk + hct_hkt + hct_nd + hct_hkmnd + hct_cau_n + hct_cau_d + hct_cau_dtt + hct_cau_s + hct_cau_stt + hct_cau_scc +")
        _T(" hct_pivo_n + hct_pivo_d + hct_pivo_dtt + hct_pivo_s + hct_pivo_stt + hct_pivo_scc + hct_chup_n + hct_chup_d + ")
        _T(" hct_chup_dtt + hct_chup_s + hct_chup_stt + hct_chup_scc + hct_dg + hct_oc + hct_br + ")
        _T(" hct_xpos + hct_va + hct_mcl + hct_gcc) AS c42")
        _T(" FROM (SELECT hsie_docno, LISTAGG(CAST(hsie_desc AS VARCHAR2(2048)), ', ') WITHIN GROUP(ORDER BY hsie_date) AS ")
        _T("tmmedical")
        _T(" FROM hms_siexam")
        _T(" WHERE hsie_deptid = 'B10'")
        _T(" AND hsie_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T(" GROUP BY hsie_docno) sie")
        _T(" LEFT JOIN hms_doc ON(sie.hsie_docno = hd_docno)")
        _T(" LEFT JOIN hms_curedtreatment ON(hct_docno = sie.hsie_docno) ")
        _T(" left join hms_dentaltreatment ON(hdt_dentaltreatment_id = hct_idx and hdt_docno = hct_docno) ")
		_T(" WHERE hdt_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s")
		_T(" GROUP BY ")
		_T("     sie.hsie_docno, ")
		_T("     get_patientname(sie.hsie_docno), ")
		_T("     get_objectname(hd_object), ")
        _T("     sie.tmmedical ")
        _T(" ) WHERE 1=1 %s")
        _T(" GROUP BY docno, pname, pobject, ngoaitru, noitru")
        _T(" ORDER BY docno, pname, pobject, ngoaitru, noitru"),
        m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate,
        m_szFromDate, m_szToDate, szWhere3, szWhere2);


		_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CEMCuredToothDetailB10::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szObjects;

	if(m_nAll == 0)
		szWhere.Format(_T(""));
	if(m_nOutPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));
	if(m_nInPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects.AppendFormat(_T(", "));
			szObjects.AppendFormat(_T("%s"), m_wndObject.GetCurrent(0));
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object IN (%s)"), szObjects);

	szSQL.Format(_T(" SELECT CASE WHEN hct_idx IS NOT NULL THEN 'Y' ELSE 'N' END AS pcheck,") \
		_T("   he_docno             AS docno,") \
		_T("   get_patientname(he_docno) AS pname,") \
		_T("   get_objectname(hd_object)  AS pobject,") \
		_T("   CASE") \
		_T("     WHEN NVL(he_deptid, 'X') IN('C1.1', 'TYC', 'TTTM')") \
		_T("     AND he_roomid            IN(52)") \
		_T("     THEN he_medical") \
		_T("   END AS ngoaitru,") \
		_T("   CASE") \
		_T("     WHEN NVL(hsie_deptid, 'X') = 'B10'") \
		_T("     THEN tmmedical") \
		_T("   END                        AS noitru,") \
		_T("   hct_date                   AS ngay1,") \
		_T("   hdt_date                   AS ngay2,") \
		_T("   SUM(hdt_new)               AS moi,") \
		_T("   SUM(hdt_time)              AS lan,") \
		_T("   SUM(hdt_preservetreatment) AS baoton,") \
		_T("   SUM(hdt_denture)           AS hamgia,") \
		_T("   SUM(hdt_extraction)        AS nho,") \
		_T("   SUM(hdt_curedtreatment)    AS khoi,") \
		_T("   SUM(hct_extraction + hct_r8 + hct_s3 + hct_t2 + hct_t3 + hct_tm + hct_cr + ") \
		_T("   hct_vqr + hct_b + hct_cc + hct_im + hct_ht + hct_hk + hct_hkt + hct_nd + ") \
		_T("   hct_hkmnd + hct_cau_n + hct_cau_d + hct_cau_dtt + hct_cau_s + hct_cau_stt + ") \
		_T("   hct_cau_scc + hct_pivo_n + hct_pivo_d + hct_pivo_dtt + hct_pivo_s + ") \
		_T("   hct_pivo_stt + hct_pivo_scc + hct_chup_n + hct_chup_d + hct_chup_dtt + ") \
		_T("   hct_chup_s + hct_chup_stt + hct_chup_scc + hct_dg + hct_oc + hct_br + hct_xpos + hct_va + hct_mcl + hct_gcc) AS tong,") \
		_T("   SUM(hct_extraction)        AS c1,") \
		_T("   SUM(hct_r8)                AS c2,") \
		_T("   SUM(hct_s3)                AS c3,") \
		_T("   SUM(hct_t2)                AS c4,") \
		_T("   SUM(hct_t3)                AS c5,") \
		_T("   SUM(hct_cr)                AS c6,") \
		_T("   SUM(hct_vqr)               AS c7,") \
		_T("   SUM(hct_tm)                AS c8,") \
		_T("   SUM(hct_b)                 AS c9,") \
		_T("   SUM(hct_cc)                AS c10,") \
		_T("   SUM(hct_im)                AS c11,") \
		_T("   SUM(hct_ht)                AS c12,") \
		_T("   SUM(hct_hk)                AS c13,") \
		_T("   SUM(hct_hkt)               AS c14,") \
		_T("   SUM(hct_nd)                AS c15,") \
		_T("   SUM(hct_hkmnd)             AS c16,") \
		_T("   SUM(hct_cau_n)             AS c17,") \
		_T("   SUM(hct_cau_d)             AS c18,") \
		_T("   SUM(hct_cau_dtt)           AS c19,") \
		_T("   SUM(hct_cau_s)             AS c20,") \
		_T("   SUM(hct_cau_stt)           AS c21,") \
		_T("   SUM(hct_cau_scc)           AS c22,") \
		_T("   SUM(hct_pivo_n)            AS c23,") \
		_T("   SUM(hct_pivo_d)            AS c24,") \
		_T("   SUM(hct_pivo_dtt)          AS c25,") \
		_T("   SUM(hct_pivo_s)            AS c26,") \
		_T("   SUM(hct_pivo_stt)          AS c27,") \
		_T("   SUM(hct_pivo_scc)          AS c28,") \
		_T("   SUM(hct_chup_n)            AS c29,") \
		_T("   SUM(hct_chup_d)            AS c30,") \
		_T("   SUM(hct_chup_dtt)          AS c31,") \
		_T("   SUM(hct_chup_s)            AS c32,") \
		_T("   SUM(hct_chup_stt)          AS c33,") \
		_T("   SUM(hct_chup_scc)          AS c34,") \
		_T("   SUM(hct_dg)                AS c35,") \
		_T("   SUM(hct_oc)                AS c36,") \
		_T("   SUM(hct_br)                AS c37,") \
		_T("   SUM(hct_xpos)              AS c38,") \
		_T("   SUM(hct_va)                AS c39,") \
		_T("   SUM(hct_mcl)               AS c40,") \
		_T("   SUM(hct_gcc)               AS c41") \
		_T(" FROM hms_exam") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(he_docno = hd_docno)") \
		_T(" LEFT JOIN hms_dentaltreatment") \
		_T(" ON(hd_docno = hdt_docno)") \
		_T(" LEFT JOIN hms_curedtreatment") \
		_T(" ON(hct_docno               = hdt_docno") \
		_T(" AND hdt_dentaltreatment_id = hct_idx)") \
		_T(" LEFT JOIN") \
		_T("   (SELECT hsie_docno,") \
		_T("     hsie_deptid,") \
		_T("     LISTAGG(CAST(hsie_desc AS VARCHAR2(2048)), ', ') WITHIN GROUP (") \
		_T("   ORDER BY hsie_date) AS tmmedical") \
		_T("   FROM hms_siexam") \
		_T("   WHERE hsie_deptid = 'B10'") \
		_T("   GROUP BY hsie_docno,") \
		_T("     hsie_deptid") \
		_T("   )") \
		_T(" ON(hd_docno = hsie_docno)") \
		_T(" WHERE ((he_deptid           IN('C1.1', 'TYC')") \
		_T(" AND he_roomid           IN(52)") \
		_T(" AND he_status           <> 'O'") \
		_T(" AND (hdt_curedtreatment IS NULL OR (hdt_curedtreatment > 0 AND hct_idx IS NULL)) AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
		_T(" OR (hdt_curedtreatment   <> hct_extraction + hct_r8 + hct_s3 + hct_t2 + hct_t3 + hct_tm + hct_cr + hct_vqr + hct_b + hct_cc + hct_im + hct_ht + hct_hk") \
		_T(" + hct_hkt + hct_nd + hct_hkmnd + hct_cau_n + hct_cau_d + hct_cau_dtt + hct_cau_s + hct_cau_stt + hct_cau_scc + hct_pivo_n + hct_pivo_d + hct_pivo_dtt") \
		_T(" + hct_pivo_s + hct_pivo_stt + hct_pivo_scc + hct_chup_n + hct_chup_d + hct_chup_dtt + hct_chup_s + hct_chup_stt + hct_chup_scc + hct_dg + hct_oc + hct_br") \
		_T(" + hct_xpos + hct_va + hct_mcl + hct_gcc AND hdt_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))) %s") \
		_T(" GROUP BY he_docno,") \
		_T("   hd_object,") \
		_T("   hsie_deptid,") \
		_T("   tmmedical,") \
		_T("   he_deptid,") \
		_T("   he_roomid,") \
		_T("   he_medical,") \
		_T("   hct_date,") \
		_T("   hdt_date,") \
		_T("   hct_idx") \
		_T(" ORDER BY hct_date,") \
		_T("   hdt_date,") \
		_T("   hd_object,") \
		_T("   he_docno"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}
