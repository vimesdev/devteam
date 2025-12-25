#include "HMSPatientSurgeryFeeReport.h"
#include "MainFrm.h"
#include "ReportDocument.h"

static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryFeeReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryFeeReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryFeeReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryFeeReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryFeeReport* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryFeeReport *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnObjectAddNew();
}*/
static void _OnSurgeryCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryFeeReport* )pWnd)->OnSurgeryCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryCategorySelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeryCategorySelendok();
}
/*static void _OnSurgeryCategorySetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeryCategoryKillfocus();
}*/
/*static void _OnSurgeryCategoryKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeryCategoryKillfocus();
}*/
static long _OnSurgeryCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeryCategoryLoadData();
}
/*static void _OnSurgeryCategoryAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeryCategoryAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryFeeReport* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryFeeReport *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnSurgeryTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryFeeReport* )pWnd)->OnSurgeryTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryTypeSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeryTypeSelendok();
}
/*static void _OnSurgeryTypeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeryTypeKillfocus();
}*/
/*static void _OnSurgeryTypeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeryTypeKillfocus();
}*/
static long _OnSurgeryTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeryTypeLoadData();
}
/*static void _OnSurgeryTypeAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeryTypeAddNew();
}*/
static void _OnSurgeonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryFeeReport* )pWnd)->OnSurgeonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeonSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeonSelendok();
}
/*static void _OnSurgeonSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeonKillfocus();
}*/
/*static void _OnSurgeonKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeonKillfocus();
}*/
static long _OnSurgeonLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeonLoadData();
}
/*static void _OnSurgeonAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport *)pWnd)->OnSurgeonAddNew();
}*/
static void _OnLoadReportSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryFeeReport *pVw = (CHMSPatientSurgeryFeeReport *)pWnd;
	pVw->OnLoadReportSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryFeeReport *pVw = (CHMSPatientSurgeryFeeReport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryFeeReport *pVw = (CHMSPatientSurgeryFeeReport *)pWnd;
	pVw->OnCloseSelect();
}
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryFeeReport*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientSurgeryFeeReport*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryFeeReport*)pWnd)->OnObjectListDeleteItem();
}
static int _OnAddHMSPatientSurgeryFeeReportFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryFeeReport*)pWnd)->OnAddHMSPatientSurgeryFeeReport();
} 
static int _OnEditHMSPatientSurgeryFeeReportFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryFeeReport*)pWnd)->OnEditHMSPatientSurgeryFeeReport();
} 
static int _OnDeleteHMSPatientSurgeryFeeReportFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryFeeReport*)pWnd)->OnDeleteHMSPatientSurgeryFeeReport();
} 
static int _OnSaveHMSPatientSurgeryFeeReportFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryFeeReport*)pWnd)->OnSaveHMSPatientSurgeryFeeReport();
} 
static int _OnCancelHMSPatientSurgeryFeeReportFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryFeeReport*)pWnd)->OnCancelHMSPatientSurgeryFeeReport();
}

static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryFeeReport*)pWnd)->OnObjectListCheckAll();
} 

static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryFeeReport*)pWnd)->OnObjectListUnCheckAll();
}
static void _OnOrderDateSelectFnc(CWnd *pWnd){
	((CHMSPatientSurgeryFeeReport*)pWnd)->OnOrderDateSelect();
}
CHMSPatientSurgeryFeeReport::CHMSPatientSurgeryFeeReport(){
	m_nDlgWidth = 395;
	m_nDlgHeight = 465;
	SetDefaultValues();
}
CHMSPatientSurgeryFeeReport::~CHMSPatientSurgeryFeeReport(){
}
void CHMSPatientSurgeryFeeReport::OnCreateComponents()
{
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 455, 425);
	m_wndObjectInfo.Create(this, _T("Object"), 10, 180, 455, 425);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 10, 30, 115, 55);
	m_wndReportPeriod.Create(this,120, 30, 450, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 115, 85);
	m_wndFromDate.Create(this,120, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 320, 85);
	m_wndToDate.Create(this,325, 60, 450, 85); 
	m_wndSurgeryCategoryLabel.Create(this, _T("Surgery Category"), 10, 89, 115, 114);
	m_wndSurgeryCategory.Create(this,120, 90, 450, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 115, 145);
	m_wndDepartment.Create(this,120, 120, 450, 145); 
	m_wndSurgeonLabel.Create(this, _T("Surgeon"), 10, 150, 115, 175);
	m_wndSurgeon.Create(this,120, 150, 450, 175); 
	m_wndObjectList.Create(this,15, 205, 450, 415); 
	m_wndOrderDate.Create(this, _T("Order Date"), 10, 430, 115, 455);
	m_wndExport.Create(this, _T("&Export"), 365, 430, 455, 455);
}
void CHMSPatientSurgeryFeeReport::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	//m_wndSurgeryCategory.SetCheckValue(true);
	m_wndSurgeryCategory.LimitText(128);

	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(254);

	//m_wndSurgeryType.SetCheckValue(true);
	m_wndSurgeryType.LimitText(128);

	//m_wndSurgeon.SetCheckValue(true);
	m_wndSurgeon.LimitText(65);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndReportPeriod.Format(2, 1, 18);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	

	m_wndSurgeryCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSurgeryCategory.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndSurgeryType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSurgeryType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndSurgeon.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndSurgeon.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndObjectList.SetCheckBox(TRUE);
	m_wndObjectList.ModifyStyle(0, LVS_NOSORTHEADER);
}
void CHMSPatientSurgeryFeeReport::OnSetWindowEvents()
{
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
	m_wndSurgeryCategory.SetEvent(WE_SELENDOK, _OnSurgeryCategorySelendokFnc);
	//m_wndSurgeryCategory.SetEvent(WE_SETFOCUS, _OnSurgeryCategorySetfocusFnc);
	//m_wndSurgeryCategory.SetEvent(WE_KILLFOCUS, _OnSurgeryCategoryKillfocusFnc);
	m_wndSurgeryCategory.SetEvent(WE_SELCHANGE, _OnSurgeryCategorySelectChangeFnc);
	m_wndSurgeryCategory.SetEvent(WE_LOADDATA, _OnSurgeryCategoryLoadDataFnc);
	//m_wndSurgeryCategory.SetEvent(WE_ADDNEW, _OnSurgeryCategoryAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndSurgeryType.SetEvent(WE_SELENDOK, _OnSurgeryTypeSelendokFnc);
	//m_wndSurgeryType.SetEvent(WE_SETFOCUS, _OnSurgeryTypeSetfocusFnc);
	//m_wndSurgeryType.SetEvent(WE_KILLFOCUS, _OnSurgeryTypeKillfocusFnc);
	m_wndSurgeryType.SetEvent(WE_SELCHANGE, _OnSurgeryTypeSelectChangeFnc);
	m_wndSurgeryType.SetEvent(WE_LOADDATA, _OnSurgeryTypeLoadDataFnc);
	//m_wndSurgeryType.SetEvent(WE_ADDNEW, _OnSurgeryTypeAddNewFnc);
	m_wndSurgeon.SetEvent(WE_SELENDOK, _OnSurgeonSelendokFnc);
	//m_wndSurgeon.SetEvent(WE_SETFOCUS, _OnSurgeonSetfocusFnc);
	//m_wndSurgeon.SetEvent(WE_KILLFOCUS, _OnSurgeonKillfocusFnc);
	m_wndSurgeon.SetEvent(WE_SELCHANGE, _OnSurgeonSelectChangeFnc);
	m_wndSurgeon.SetEvent(WE_LOADDATA, _OnSurgeonLoadDataFnc);
	//m_wndSurgeon.SetEvent(WE_ADDNEW, _OnSurgeonAddNewFnc);
	m_wndLoadReport.SetEvent(WE_CLICK, _OnLoadReportSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndOrderDate.SetEvent(WE_CLICK, _OnOrderDateSelectFnc);

	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);

	m_wndObjectList.AddEvent(1, _T("Check All"), _OnObjectListCheckAllFnc);
	m_wndObjectList.AddEvent(2, _T("UnCheck All"), _OnObjectListUnCheckAllFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	m_nYear = str2int(m_szFromDate.Left(4));

	SetMode(VM_EDIT);
	OnObjectListLoadData();
	OnObjectListCheckAll();
}
void CHMSPatientSurgeryFeeReport::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	//DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndSurgeryCategory.GetDlgCtrlID(), m_szSurgeryCategoryKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	//DDX_TextEx(pDX, m_wndSurgeryType.GetDlgCtrlID(), m_szSurgeryTypeKey);
	DDX_TextEx(pDX, m_wndSurgeon.GetDlgCtrlID(), m_szSurgeonKey);
	DDX_Check(pDX, m_wndOrderDate.GetDlgCtrlID(), m_bOrderDate);

}
void CHMSPatientSurgeryFeeReport::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientSurgeryFeeReport::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientSurgeryFeeReport::SetDefaultValues(){

	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szSurgeryCategoryKey.Empty();
	m_szDepartmentKey.Empty();
	m_szSurgeryTypeKey.Empty();
	m_szSurgeonKey.Empty();
	m_bOrderDate=FALSE;

}
int CHMSPatientSurgeryFeeReport::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_wndFromDate.SetFocus();
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
void CHMSPatientSurgeryFeeReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryFeeReport::OnReportPeriodSelendok()
{
	CString tmpStr;
	CDate dte;
	UpdateData(true);

	int nMonth = ToInt(m_szReportPeriodKey);
	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), m_nYear,  dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}

	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);
}
/*void CHMSPatientSurgeryFeeReport::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSPatientSurgeryFeeReport::OnReportPeriodKillfocus(){
	
}*/
long CHMSPatientSurgeryFeeReport::OnReportPeriodLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CHMSPatientSurgeryFeeReport::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientSurgeryFeeReport::OnFromDateChange(){
	
} */
/*void CHMSPatientSurgeryFeeReport::OnFromDateSetfocus(){
	
} */
/*void CHMSPatientSurgeryFeeReport::OnFromDateKillfocus(){
	
} */
int CHMSPatientSurgeryFeeReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPatientSurgeryFeeReport::OnToDateChange(){
	
} */
/*void CHMSPatientSurgeryFeeReport::OnToDateSetfocus(){
	
} */
/*void CHMSPatientSurgeryFeeReport::OnToDateKillfocus(){
	
} */
int CHMSPatientSurgeryFeeReport::OnToDateCheckValue(){
	return 0;
} 
void CHMSPatientSurgeryFeeReport::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryFeeReport::OnObjectSelendok(){
	
}
/*void CHMSPatientSurgeryFeeReport::OnObjectSetfocus(){
	
}*/
/*void CHMSPatientSurgeryFeeReport::OnObjectKillfocus(){
	
}*/
long CHMSPatientSurgeryFeeReport::OnObjectLoadData()\
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE ho_id='%s' "), m_szObjectKey);
	}

	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object %s ORDER BY cast(ho_id as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	int nItem;
	while(!rs.IsEOF()){ 
		nItem = m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		m_wndObject.SetCheck(nItem, true);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPatientSurgeryFeeReport::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryFeeReport::OnSurgeryCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryFeeReport::OnSurgeryCategorySelendok(){
	 
}
/*void CHMSPatientSurgeryFeeReport::OnSurgeryCategorySetfocus(){
	
}*/
/*void CHMSPatientSurgeryFeeReport::OnSurgeryCategoryKillfocus(){
	
}*/
long CHMSPatientSurgeryFeeReport::OnSurgeryCategoryLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndSurgeryCategory.IsSearchKey() && !m_szSurgeryCategoryKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szSurgeryCategoryKey);
	}

	m_wndSurgeryCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ") \
				 _T("FROM sys_sel WHERE ss_id='hms_operation_type' %s ORDER BY cast(ss_code as integer)"),
		         szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeryCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPatientSurgeryFeeReport::OnSurgeryCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryFeeReport::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryFeeReport::OnDepartmentSelendok(){
	 
}
/*void CHMSPatientSurgeryFeeReport::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPatientSurgeryFeeReport::OnDepartmentKillfocus(){
	
}*/
long CHMSPatientSurgeryFeeReport::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE sd_type IN('KB','DT') %s ORDER BY sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	
}
/*void CHMSPatientSurgeryFeeReport::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryFeeReport::OnSurgeryTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryFeeReport::OnSurgeryTypeSelendok(){
	 
}
/*void CHMSPatientSurgeryFeeReport::OnSurgeryTypeSetfocus(){
	
}*/
/*void CHMSPatientSurgeryFeeReport::OnSurgeryTypeKillfocus(){
	
}*/
long CHMSPatientSurgeryFeeReport::OnSurgeryTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSurgeryType.IsSearchKey() && m_szSurgeryTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE ss_code='%s' "), m_szSurgeryTypeKey);
	}
	m_wndSurgeryType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ")\
		         _T("FROM sys_sel WHERE ss_id='hms_operation_type' ")\
				 _T("%s ORDER BY cast(ss_code as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeryType.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSPatientSurgeryFeeReport::OnSurgeryTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryFeeReport::OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryFeeReport::OnSurgeonSelendok(){
	 
}
/*void CHMSPatientSurgeryFeeReport::OnSurgeonSetfocus(){
	
}*/
/*void CHMSPatientSurgeryFeeReport::OnSurgeonKillfocus(){
	
}*/
long CHMSPatientSurgeryFeeReport::OnSurgeonLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndSurgeon.IsSearchKey() && !m_szSurgeonKey.IsEmpty())
	{
		szWhere.Format(_T(" and lower(su_userid) = lower('%s') "), m_szSurgeonKey);
	}
	m_wndSurgeon.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name ") \
		         _T("FROM sys_user ") \
				 _T("LEFT JOIN sys_dept ON(sd_id=su_deptid) ") \
				 _T("WHERE sd_type NOT IN('KB','HC') %s ORDER BY su_userid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeon.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPatientSurgeryFeeReport::OnSurgeonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryFeeReport::OnOrderDateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientSurgeryFeeReport::OnLoadReportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	static CReport rpt;
	CString tmpStr, m_szGroups, szWhere, szObject;
	CString szTemp;
	
	szObject.Empty();

	if(!rpt.Init(_T("Reports/HMS/PTTT/LISTOFPATIENTSURGERYREPORT.RPT")) )
	{		//ShowMessageBox(_T("Can not open file report"), MB_OK);		return;
	}

	CString szSQL;
	CRecord rs(&pMF->m_db);
	
	UpdateData(TRUE);

	BeginWaitCursor();

	//int nSel = m_wndObject.GetCurSel();
	szSQL = GetQueryString();

	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK);
		return;
	}

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	//rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartment());
	rpt.GetReportHeader()->Format(_T("ReportDate"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	//Page Header
	//Report Detail
	double nTotalAmount = 0;

	while (!rs.IsEOF())
	{
		CReportSection* rptDetail = rpt.AddDetail();
		//rs.GetValue(_T("recordno"), tmpStr);
		rs.GetValue(_T("doc_no"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("patient_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("surgery_name"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rptDetail->SetValue(_T("4"), rs.GetValue(_T("rank")));

		rptDetail->SetValue(_T("5"), rs.GetValue(_T("card_no")));

		rs.GetValue(_T("anaesthetist"), tmpStr);
		rptDetail->SetValue(_T("6"), GetDoctorName(tmpStr));

		rs.GetValue(_T("anaesthetist1"), tmpStr);
		rptDetail->SetValue(_T("7"), GetDoctorName(tmpStr));

		rs.GetValue(_T("user5"), tmpStr);
		rptDetail->SetValue(_T("8"), GetDoctorName(tmpStr));

		rs.GetValue(_T("stype"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("amount"), tmpStr);
		nTotalAmount += str2double(tmpStr);
		FormatCurrency(nTotalAmount, szTemp);
		rptDetail->SetValue(_T("10"), szTemp);
		
		rs.MoveNext();
	}
	if (nTotalAmount > 0)
	{
		tmpStr.Format(_T("%.0f"), nTotalAmount);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	}
	//Page Footer
	//Report Footer
	CDate sysDate;
	sysDate.ParseDate(pMF->GetSysDate());
	rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(), sysDate.GetMonth(), sysDate.GetYear());

	EndWaitCursor();
	rpt.PrintPreview();
	
} 
void CHMSPatientSurgeryFeeReport::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, szDocNo, szIdx;
	double nTmp = 0;
	double nTotal = 0, nTotal2 = 0, nTotal3 = 0, nTotal4 = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 14);
	xls.SetColumnWidth(6, 30);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 10);
	xls.SetColumnWidth(13, 10);
	xls.SetColumnWidth(14, 10);
	xls.SetColumnWidth(15, 10);
	xls.SetColumnWidth(16, 20);
	xls.SetCellMergedColumns(0, 0, 4);
	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 17);
	xls.SetCellMergedColumns(0, 3, 17);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	//TODO: Write Excel Name

	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O \x43HI PH\xCD PT-TT TR\xCAN PH\xD2NG M\x1ED4"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);
	//TODO: Write Column Header
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(1, 4, _T("S\x1ED1 HS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(2, 4, _T("T\xEAn \x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(3, 4, _T("S\x1ED1 \x42\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(4, 4, _T("\x43\x1EA5p \x62\x1EAD\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(5, 4, _T("S\x1ED1 th\x1EBB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(6, 4, _T("T\xEAn PT-TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(7, 4, _T("PT vi\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(8, 4, _T("G\xE2y m\xEA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(9, 4, _T("Ph\x1EE5 m\xEA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(10, 4, _T("V\xF4 tr\xF9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(11, 4, _T("Lo\x1EA1i PT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(12, 4, _T("S\x1ED1 ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(13, 4, _T("Ti\x1EC1n thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(14, 4, _T("Ti\x1EC1n v\x1EADt t\x1B0 trong g\xF3i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(15, 4, _T("Ti\x1EC1n v\x1EADt t\x1B0 ngo\xE0i g\xF3i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(16, 4, _T("Kho\x61 \x110T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nRow = 5;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_INTEGER);
		rs.GetValue(_T("doc_no"), szDocNo);
		xls.SetCellText(1, nRow, szDocNo, FMT_INTEGER);
		xls.SetCellText(2, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("record_no")), FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("rank")), FMT_TEXT);
		xls.SetCellText(5, nRow, rs.GetValue(_T("card_no")), FMT_TEXT);
		xls.SetCellText(6, nRow, rs.GetValue(_T("surgery_name")), FMT_TEXT);
		rs.GetValue(_T("surgeon"), tmpStr);
		xls.SetCellText(7, nRow, GetDoctorName(tmpStr), FMT_TEXT);
		rs.GetValue(_T("anaesthetist1"), tmpStr);
		xls.SetCellText(8, nRow, GetDoctorName(tmpStr), FMT_TEXT);
		rs.GetValue(_T("anaesthetist"), tmpStr);
		xls.SetCellText(9, nRow, GetDoctorName(tmpStr), FMT_TEXT);
		rs.GetValue(_T("user5"), tmpStr);
		xls.SetCellText(10, nRow, GetDoctorName(tmpStr), FMT_TEXT);
		xls.SetCellText(11, nRow, rs.GetValue(_T("stype")), FMT_TEXT);
		rs.GetValue(_T("amount"), nTmp);
		nTotal += nTmp;
		xls.SetCellText(12, nRow, double2str(nTmp), FMT_NUMBER1);
		xls.SetCellText(16, nRow, rs.GetValue(_T("dept_name")), FMT_TEXT);
		rs.GetValue(_T("ho_idx"), szIdx);

	   szSQL.Format(_T(" SELECT") \
					_T(" hpol_docno,") \
					_T(" hpo_reference_id,") \
					_T(" SUM(thuoc) AS thuoc,") \
					_T(" SUM(vattutronggoi) AS vattutronggoi,") \
					_T(" SUM(vattungoaigoi) AS vattungoaigoi") \
					_T(" FROM") \
					_T(" (") \
					_T(" SELECT hpol_docno,") \
					_T("   hpo_reference_id,") \
					_T("   product_id,") \
					_T("   product_name,") \
					_T("   product_uomname,") \
					_T("   product_countryname,") \
					_T("   hpol_unitprice                    AS unitprice,") \
					_T("   SUM(hpol_qtyorder)                AS qtyorder,") \
					_T("   SUM(hpol_qtyissue)                AS qtyissue,") \
					_T("   SUM(hpol_qtyissue*hpol_unitprice) AS amount,") \
					_T("   SUM(CASE WHEN product_org_id = 'PM' THEN hpol_qtyissue*hpol_unitprice ELSE 0 END) AS thuoc,") \
					_T("   SUM(CASE WHEN product_org_id = 'MA' AND hpol_inoperation = 'Y' THEN hpol_qtyissue*hpol_unitprice ELSE 0 END) AS vattutronggoi,") \
					_T("   SUM(CASE WHEN product_org_id = 'MA' AND hpol_inoperation = 'N' THEN hpol_qtyissue*hpol_unitprice ELSE 0 END) AS vattungoaigoi") \
					_T(" FROM") \
					_T("   (SELECT hpol_docno,") \
					_T("     hpol_orderid,") \
					_T("     hpol_product_id,") \
					_T("     hpol_product_item_id,") \
					_T("     hpol_unitprice,") \
					_T("     hpol_qtyorder,") \
					_T("     hpol_qtyissue,") \
					_T("     hpol_inoperation,") \
					_T("     hpo_reference_id") \
					_T("     FROM hms_ipharmaorder") \
					_T("     LEFT JOIN hms_ipharmaorderline") \
					_T("     ON(hpo_orderid = hpol_orderid)") \
					_T("   UNION ALL") \
					_T("   SELECT hpol_docno,") \
					_T("     hpol_orderid,") \
					_T("     hpol_product_id,") \
					_T("     hpol_product_item_id,") \
					_T("     hpol_unitprice,") \
					_T("     hpol_qtyorder,") \
					_T("     hpol_qtyissue,") \
					_T("     hpol_inoperation,") \
					_T("     hpo_reference_id") \
					_T("     FROM hms_pharmaorder") \
					_T("     LEFT JOIN hms_pharmaorderline") \
					_T("     ON(hpo_orderid = hpol_orderid)") \
					_T("   ) tbl") \
					_T(" LEFT JOIN m_product_view") \
					_T(" ON(product_id   =hpol_product_id)") \
					_T(" WHERE hpol_docno=%s") \
					_T(" AND hpo_reference_id=%s") \
					_T(" GROUP BY product_id,") \
					_T("   product_name,") \
					_T("   product_uomname,") \
					_T("   product_countryname,") \
					_T("   hpol_unitprice,") \
					_T("   hpol_docno,") \
					_T("   hpo_reference_id") \
					_T(" ) tbl") \
					_T(" GROUP BY") \
					_T(" hpol_docno,") \
					_T(" hpo_reference_id"), szDocNo, szIdx);

	   rs2.ExecSQL(szSQL);

	   while (!rs2.IsEOF())
	   {
		   rs2.GetValue(_T("thuoc"), nTmp);
		   nTotal2 += nTmp;
		   xls.SetCellText(13, nRow, double2str(nTmp), FMT_NUMBER1);
		   rs2.GetValue(_T("vattutronggoi"), nTmp);
		   nTotal3 += nTmp;
		   xls.SetCellText(14, nRow, double2str(nTmp), FMT_NUMBER1);
		   rs2.GetValue(_T("vattungoaigoi"), nTmp);
		   nTotal4 += nTmp;
		   xls.SetCellText(15, nRow, double2str(nTmp), FMT_NUMBER1);
		   rs2.MoveNext();
	   }

		nRow++;
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		xls.SetCellText(11, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		tmpStr.Format(_T("%f"), nTotal);
		xls.SetCellText(12, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nTotal2);
		xls.SetCellText(13, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nTotal3);
		xls.SetCellText(14, nRow, tmpStr, FMT_NUMBER1, true);
		tmpStr.Format(_T("%f"), nTotal4);
		xls.SetCellText(15, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\BC chi phi lam PTTT tren phong mo.xls"));
	
} 
void CHMSPatientSurgeryFeeReport::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
}
void CHMSPatientSurgeryFeeReport::OnObjectListDblClick(){
	
} 
void CHMSPatientSurgeryFeeReport::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientSurgeryFeeReport::OnObjectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientSurgeryFeeReport::OnObjectListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndObjectList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT ho_id as ID, ") \
		         _T("ho_desc as Name ") \
				 _T("FROM hms_object ") \
				 _T("ORDER BY cast(ho_id as integer)"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndObjectList.EndLoad(); 
	return nCount;
}
int CHMSPatientSurgeryFeeReport::OnAddHMSPatientSurgeryFeeReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPatientSurgeryFeeReport::OnEditHMSPatientSurgeryFeeReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientSurgeryFeeReport::OnDeleteHMSPatientSurgeryFeeReport(){
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
 		OnCancelHMSPatientSurgeryFeeReport(); 
 	}
	return 0;
}
int CHMSPatientSurgeryFeeReport::OnSaveHMSPatientSurgeryFeeReport(){
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
 		//OnHMSPatientSurgeryFeeReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPatientSurgeryFeeReport::OnCancelHMSPatientSurgeryFeeReport(){
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
int CHMSPatientSurgeryFeeReport::OnHMSPatientSurgeryFeeReportListLoadData(){
	return 0;
}

int CHMSPatientSurgeryFeeReport::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (!m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, true);
	}
	return 0;
}

int CHMSPatientSurgeryFeeReport::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, false);
	}
	return 0;
}

CString CHMSPatientSurgeryFeeReport::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szObject;
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		 {
			//m_wndObject.SetCurSel(i);
		 	if (!szObject.IsEmpty())
				szObject += _T(",");						
			szObject.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	 }
	 
	 if (!szObject.IsEmpty())
		 szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObject);

	 if (!m_szDepartmentKey.IsEmpty())
	 {
		 szWhere.AppendFormat(_T(" AND ho_deptid='%s' "), m_szDepartmentKey);
	 }

	 if (!m_szSurgeonKey.IsEmpty())
	 {
		 szWhere.AppendFormat(_T(" AND ho_practitioner='%s' "), m_szSurgeonKey);
	 }

	 if (m_bOrderDate == TRUE)
		 szWhere.AppendFormat(_T(" AND ho_orderdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	 else
		 szWhere.AppendFormat(_T(" AND ho_performdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	 szSQL.Format(_T(" SELECT ho_docno AS doc_no,") \
		 _T("   trim(hp_surname") \
		 _T("   ||' '") \
		 _T("   ||hp_midname") \
		 _T("   ||' '") \
		 _T("   ||hp_firstname) AS patient_name,") \
		 _T("   ho_itemid,") \
		 _T("   get_syssel_desc('hms_surgery_category', ho_normal) stype,") \
		 _T("   CASE") \
		 _T("     WHEN LENGTH(ho_comment) > 0") \
		 _T("     THEN ho_comment") \
		 _T("     ELSE hfl_name") \
		 _T("   END             AS surgery_name,") \
		 _T("   get_username(ho_practitioner) AS surgeon,") \
		 _T("   get_username(ho_user5)        AS user5,") \
		 _T("   get_username(ho_anesthetist)  AS anaesthetist,") \
		 _T("   get_username(ho_anaes_method)    AS anaesthetist1,") \
		 _T("   hcr_recordno record_no,") \
		 _T("   get_syssel_desc('hms_rank', NVL(hd_rank, hp_rank)) rank,") \
		 _T("   hd_cardno card_no,") \
		 _T("   CASE WHEN o.ho_type = 'I' THEN DECODE(hfl_insprice, 0, hfl_servprice, hfl_insprice) WHEN o.ho_type = 'S' THEN hfl_servprice ELSE DECODE(hfl_polprice, 0, hfl_servprice, hfl_polprice) END AS amount,") \
		 _T("   get_departmentname(ho_deptid) dept_name,") \
		 _T("   ho_idx") \
		 _T(" FROM hms_operation") \
		 _T(" LEFT JOIN hms_doc") \
		 _T(" ON(hd_docno=ho_docno)") \
		 _T(" LEFT JOIN hms_patient") \
		 _T(" ON (hd_patientno = hp_patientno)") \
		 _T(" LEFT JOIN hms_clinical_record") \
		 _T(" ON(hcr_docno=hd_docno)") \
		 _T(" LEFT JOIN hms_fee_list") \
		 _T(" ON(hfl_feeid=ho_itemid)") \
		 _T(" LEFT JOIN hms_fee_group") \
		 _T(" ON(hfg_id=hfl_groupid)") \
		 _T(" LEFT JOIN hms_object o") \
		 _T(" ON(ho_object=ho_id)") \
		 _T(" WHERE ho_status = 'T'") \
		 _T(" AND ho_pdeptid='B5' %s"), szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CHMSPatientSurgeryFeeReport::GetDoctorName(CString UserName, CString LastName)
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
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