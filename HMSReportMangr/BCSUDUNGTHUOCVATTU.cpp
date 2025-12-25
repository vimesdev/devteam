#include "stdafx.h"
#include "BCSUDUNGTHUOCVATTU.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGTHUOCVATTU* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGTHUOCVATTU* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGTHUOCVATTU* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnRoomAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGTHUOCVATTU* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnObjectAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGTHUOCVATTU* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnDoctorAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGTHUOCVATTU* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnStatusAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnOutPatientSelect();
}
static void _OnDrugSelectFnc(CWnd *pWnd){
	 ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnDrugSelect();
}
static void _OnMaterialSelectFnc(CWnd *pWnd){
	 ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnMaterialSelect();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU *)pWnd)->OnNameCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCSUDUNGTHUOCVATTU *pVw = (CBCSUDUNGTHUOCVATTU *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCSUDUNGTHUOCVATTU*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCSUDUNGTHUOCVATTU*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnListDeleteItem();
}
static int _OnListSelectAllFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnListSelectAll();
} 
static int _OnListUnselectAllFnc(CWnd *pWnd){
	return ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnListUnselectAll();
} 
static int _OnAddBCSUDUNGTHUOCVATTUFnc(CWnd *pWnd){
	 return ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnAddBCSUDUNGTHUOCVATTU();
} 
static int _OnEditBCSUDUNGTHUOCVATTUFnc(CWnd *pWnd){
	 return ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnEditBCSUDUNGTHUOCVATTU();
} 
static int _OnDeleteBCSUDUNGTHUOCVATTUFnc(CWnd *pWnd){
	 return ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnDeleteBCSUDUNGTHUOCVATTU();
} 
static int _OnSaveBCSUDUNGTHUOCVATTUFnc(CWnd *pWnd){
	 return ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnSaveBCSUDUNGTHUOCVATTU();
} 
static int _OnCancelBCSUDUNGTHUOCVATTUFnc(CWnd *pWnd){
	 return ((CBCSUDUNGTHUOCVATTU*)pWnd)->OnCancelBCSUDUNGTHUOCVATTU();
} 
CBCSUDUNGTHUOCVATTU::CBCSUDUNGTHUOCVATTU()
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCSUDUNGTHUOCVATTU::~CBCSUDUNGTHUOCVATTU(){
}
void CBCSUDUNGTHUOCVATTU::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 865, 505);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 220, 30, 300, 55);
	m_wndPeriodReport.Create(this,305, 30, 425, 55); 
	m_wndFromDate.Create(this,513, 30, 633, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 638, 30, 718, 55);
	m_wndToDate.Create(this,723, 30, 843, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 430, 31, 510, 56);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 90, 85);
	m_wndDepartment.Create(this,95, 60, 425, 85); 
	m_wndRoomLabel.Create(this, _T("Room"), 430, 60, 510, 85);
	m_wndRoom.Create(this,515, 60, 845, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.Create(this,95, 90, 425, 115); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 430, 90, 510, 115);
	m_wndDoctor.Create(this,515, 90, 845, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 120, 90, 145);
	m_wndStatus.Create(this,95, 120, 425, 145); 
	m_wndAll.Create(this, _T("All"), 430, 120, 510, 145);
	m_wndInPatient.Create(this, _T("InPatient"), 515, 120, 595, 145);
	m_wndOutPatient.Create(this, _T("OutPatient"), 600, 120, 680, 145);
	m_wndDrug.Create(this, _T("Drug"), 685, 120, 765, 145);
	m_wndMaterial.Create(this, _T("Material"), 770, 120, 860, 145);
	m_wndNameLabel.Create(this, _T("Name"), 10, 150, 90, 175);
	m_wndName.Create(this,95, 150, 860, 175); 
	m_wndList.Create(this,9, 180, 859, 500); 
	m_wndExport.Create(this, _T("&Export"), 779, 510, 859, 535);

}
void CBCSUDUNGTHUOCVATTU::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	//m_wndYear.SetCheckValue(true);
	//m_wndPeriodReport.SetCheckValue(true);
	m_wndPeriodReport.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1024);
	m_wndName.SetLimitText(1024);
	//m_wndName.SetCheckValue(true);

	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndRoom.InsertColumn(2, _T("Department"), CFMT_TEXT, 50);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.SetCheckBox(TRUE);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 500);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Org Name"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Product ID"), CFMT_TEXT, 0);

}
void CBCSUDUNGTHUOCVATTU::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndPeriodReport.SetEvent(WE_SELENDOK, _OnPeriodReportSelendokFnc);
	//m_wndPeriodReport.SetEvent(WE_SETFOCUS, _OnPeriodReportSetfocusFnc);
	//m_wndPeriodReport.SetEvent(WE_KILLFOCUS, _OnPeriodReportKillfocusFnc);
	m_wndPeriodReport.SetEvent(WE_SELCHANGE, _OnPeriodReportSelectChangeFnc);
	m_wndPeriodReport.SetEvent(WE_LOADDATA, _OnPeriodReportLoadDataFnc);
	//m_wndPeriodReport.SetEvent(WE_ADDNEW, _OnPeriodReportAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndDrug.SetEvent(WE_CLICK, _OnDrugSelectFnc);
	m_wndMaterial.SetEvent(WE_CLICK, _OnMaterialSelectFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Drug List"));
	m_wndList.AddEvent(1, _T("Select All"), _OnListSelectAllFnc);
	m_wndList.AddEvent(2, _T("Unselect All"), _OnListUnselectAllFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CBCSUDUNGTHUOCVATTU::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Check(pDX, m_wndDrug.GetDlgCtrlID(), m_bDrug);
	DDX_Check(pDX, m_wndMaterial.GetDlgCtrlID(), m_bMaterial);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CBCSUDUNGTHUOCVATTU::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCSUDUNGTHUOCVATTU::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCSUDUNGTHUOCVATTU::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();
	m_szObjectKey.Empty();
	m_szDoctorKey.Empty();
	m_szStatusKey='A';
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;
	m_bDrug=FALSE;
	m_bMaterial=FALSE;
	m_szName.Empty();

}
int CBCSUDUNGTHUOCVATTU::SetMode(int nMode){
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
/*void CBCSUDUNGTHUOCVATTU::OnYearChange(){
	
} */
/*void CBCSUDUNGTHUOCVATTU::OnYearSetfocus(){
	
} */
/*void CBCSUDUNGTHUOCVATTU::OnYearKillfocus(){
	
} */
int CBCSUDUNGTHUOCVATTU::OnYearCheckValue(){
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
void CBCSUDUNGTHUOCVATTU::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGTHUOCVATTU::OnPeriodReportSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szPeriodReportKey);

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
/*void CBCSUDUNGTHUOCVATTU::OnPeriodReportSetfocus(){
	
}*/
/*void CBCSUDUNGTHUOCVATTU::OnPeriodReportKillfocus(){
	
}*/
long CBCSUDUNGTHUOCVATTU::OnPeriodReportLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndPeriodReport.IsSearchKey() && ToInt(m_szPeriodReportKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szPeriodReportKey));
	}
	m_wndPeriodReport.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriodReport.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCSUDUNGTHUOCVATTU::OnPeriodReportAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CBCSUDUNGTHUOCVATTU::OnFromDateChange(){
	
} */
/*void CBCSUDUNGTHUOCVATTU::OnFromDateSetfocus(){
	
} */
/*void CBCSUDUNGTHUOCVATTU::OnFromDateKillfocus(){
	
} */
int CBCSUDUNGTHUOCVATTU::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCSUDUNGTHUOCVATTU::OnToDateChange(){
	
} */
/*void CBCSUDUNGTHUOCVATTU::OnToDateSetfocus(){
	
} */
/*void CBCSUDUNGTHUOCVATTU::OnToDateKillfocus(){
	
} */
int CBCSUDUNGTHUOCVATTU::OnToDateCheckValue(){
	return 0;
} 
void CBCSUDUNGTHUOCVATTU::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGTHUOCVATTU::OnDepartmentSelendok(){
	 
}
/*void CBCSUDUNGTHUOCVATTU::OnDepartmentSetfocus(){
	
}*/
/*void CBCSUDUNGTHUOCVATTU::OnDepartmentKillfocus(){
	
}*/
long CBCSUDUNGTHUOCVATTU::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type IN('KB', 'DT') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCSUDUNGTHUOCVATTU::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGTHUOCVATTU::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGTHUOCVATTU::OnRoomSelendok(){
	 
}
/*void CBCSUDUNGTHUOCVATTU::OnRoomSetfocus(){
	
}*/
/*void CBCSUDUNGTHUOCVATTU::OnRoomKillfocus(){
	
}*/
long CBCSUDUNGTHUOCVATTU::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
	 szWhere.AppendFormat(_T(" and sd_id='%s' "), m_szDepartmentKey);
	};

	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty())
	{
	 szWhere.AppendFormat(_T(" and hrl_id='%s' "), m_szRoomKey);
    };
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name, hrl_deptid as deptid FROM hms_roomlist left join sys_dept ON (hrl_deptid = sd_id) WHERE sd_type ='KB' and hrl_active = 'Y' %s ORDER BY hrl_deptid, hrl_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCSUDUNGTHUOCVATTU::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGTHUOCVATTU::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGTHUOCVATTU::OnObjectSelendok(){
	 
}
/*void CBCSUDUNGTHUOCVATTU::OnObjectSetfocus(){
	
}*/
/*void CBCSUDUNGTHUOCVATTU::OnObjectKillfocus(){
	
}*/
long CBCSUDUNGTHUOCVATTU::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		//szWhere.Format();
	};
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object ORDER BY cast(id as integer)"));
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCSUDUNGTHUOCVATTU::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGTHUOCVATTU::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGTHUOCVATTU::OnDoctorSelendok(){
	 
}
/*void CBCSUDUNGTHUOCVATTU::OnDoctorSetfocus(){
	
}*/
/*void CBCSUDUNGTHUOCVATTU::OnDoctorKillfocus(){
	
}*/
long CBCSUDUNGTHUOCVATTU::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	 szWhere.Format(_T(" and su_id='%s' "), m_szDoctorKey);
};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCSUDUNGTHUOCVATTU::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CBCSUDUNGTHUOCVATTU::OnNameChange(){
	
} */
/*void CBCSUDUNGTHUOCVATTU::OnNameSetfocus(){
	
} */
/*void CBCSUDUNGTHUOCVATTU::OnNameKillfocus(){
	
} */
int CBCSUDUNGTHUOCVATTU::OnNameCheckValue(){
	OnListLoadData();
	return 1;
}
int CBCSUDUNGTHUOCVATTU::OnListSelectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	return 0;
} 
int CBCSUDUNGTHUOCVATTU::OnListUnselectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
	return 0;
} 
void CBCSUDUNGTHUOCVATTU::OnListDblClick(){
	UpdateData(TRUE);
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	for (int i=0; i< m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i,false);
	}
	m_wndList.SetCheck(nSel, !m_wndList.GetCheck(nSel));
} 
void CBCSUDUNGTHUOCVATTU::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCSUDUNGTHUOCVATTU::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCSUDUNGTHUOCVATTU::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);

	m_wndList.BeginLoad(); 
	int nCount = 0;

	if(!m_szName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(product_name) like(lower('%s%s%s')) "), _T("%"), m_szName, _T("%"));
	}

	if(m_bDrug)
		{
			szWhere.AppendFormat(_T(" AND product_org_id = 'PM'"));
		}
	else if(m_bMaterial)
		{
			szWhere.AppendFormat(_T(" AND product_org_id = 'MA'"));
		}

		szSQL.Format(_T(" SELECT DISTINCT product_code AS code, ") \
			_T("                  product_name AS name, ") \
			_T("                  product_uomname AS unit, ") \
			_T("                  product_classname AS genericname, ") \
			_T("                  product_countryname AS orgname, ") \
			_T("                  product_id AS id ") \
			_T(" FROM m_productitem_view ") \
			_T(" WHERE 1=1 ") \
			_T(" %s ") \
			_T(" ORDER BY name,unit "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("orgname")),
			rs.GetValue(_T("id")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCSUDUNGTHUOCVATTU::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGTHUOCVATTU::OnStatusSelendok(){
	 
}
/*void CBCSUDUNGTHUOCVATTU::OnStatusSetfocus(){
	
}*/
/*void CBCSUDUNGTHUOCVATTU::OnStatusKillfocus(){
	
}*/
long CBCSUDUNGTHUOCVATTU::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szStatusKey);
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'pms_order_status' AND ss_code IN('A', 'S', 'O') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCSUDUNGTHUOCVATTU::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGTHUOCVATTU::OnAllSelect(){
	
}
void CBCSUDUNGTHUOCVATTU::OnInPatientSelect(){
	
}
void CBCSUDUNGTHUOCVATTU::OnOutPatientSelect(){
	
}
void CBCSUDUNGTHUOCVATTU::OnDrugSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bDrug)
		m_bMaterial = FALSE;
	UpdateData(false);
	OnListLoadData();
}
void CBCSUDUNGTHUOCVATTU::OnMaterialSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bMaterial)
		m_bDrug = FALSE;
	UpdateData(false);
	OnListLoadData();
} 
void CBCSUDUNGTHUOCVATTU::OnExportSelect(){	/*CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szTemp2, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	long double nTotal = 0, nTotal2 = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 4);	xls.SetColumnWidth(1, 20);	xls.SetColumnWidth(2, 10);	xls.SetColumnWidth(3, 6);	xls.SetColumnWidth(4, 25);	xls.SetColumnWidth(5, 20);	xls.SetColumnWidth(6, 25);	xls.SetColumnWidth(7, 6);	xls.SetColumnWidth(8, 25);	xls.SetColumnWidth(9, 15);	xls.SetColumnWidth(10, 15);	xls.SetColumnWidth(11, 15);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER, true, 11);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	if(m_bDrug)		{			szTemp.Format(_T("THU\x1ED0\x43"));		}	else if(m_bMaterial)		{			szTemp.Format(_T("V\x1EACT T\x1AF"));		}	else		{			szTemp.Format(_T("THU\x1ED0\x43 / V\x1EACT T\x1AF"));		}	tmpStr.Format(_T("\x42\xC1O \x43\xC1O TH\x1ED0NG K\xCA V\x1EC0 S\x1EEC \x44\x1EE4NG %s"), szTemp);	xls.SetCellText(0, 2, tmpStr, FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(1, 4, _T("\x42\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(2, 4, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(3, 4, _T("Kho\x61"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(4, 4, _T("\x43h\x1EA9n \x111o\xE1n"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(5, 4, _T("\x42\xE1\x63 s\x129 \x63h\x1EC9 \x111\x1ECBnh"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(6, 4, _T("T\xEAn thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(7, 4, _T("SL"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(8, 4, _T("Ng\xE0y VV/RV"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(9, 4, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(10, 4, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(11, 4, _T("M\xE3 th\x1EBB"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(12, 4, _T("M\xE3 \x110K"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(13, 4, _T("Chẩn đoán"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(14, 4, _T("ICD"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(15, 4, _T("Bệnh sử"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(16, 4, _T("Bệnh sử trong 1 năm"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 10);	xls.SetMerge(3, 3, 0, 10);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	_msg(_T("%s"), szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_NUMBER1);		rs.GetValue(_T("patientname"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("deptid"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("diagnostic"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("doctorname"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("productname"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("qty"), tmpStr);		nTotal += str2double(tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER2);		rs.GetValue(_T("admitdate"), szTemp);		rs.GetValue(_T("dischargedate"), szTemp2);		tmpStr.Format(_T("%s   %s"), CDate::Convert(szTemp, yyyymmdd, ddmmyyyy), CDate::Convert(szTemp2, yyyymmdd, ddmmyyyy));		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("amount"), tmpStr);		nTotal2 += str2double(tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER2);		rs.GetValue(_T("objectname"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		xls.SetCellText(11, nRow, rs.GetValue(_T("card_no")), FMT_TEXT);		xls.SetCellText(12, nRow, rs.GetValue(_T("reg_code")), FMT_TEXT);		xls.SetCellText(13, nRow, rs.GetValue(_T("maindisease")), FMT_TEXT);		xls.SetCellText(14, nRow, rs.GetValue(_T("icd")), FMT_TEXT);		xls.SetCellText(15, nRow, rs.GetValue(_T("disease_hist")), FMT_TEXT);		xls.SetCellText(16, nRow, rs.GetValue(_T("disease_hist_1y")), FMT_TEXT);		nRow++;		rs.MoveNext();	}	if(nTotal>0)		{			xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT, true);			xls.SetCellText(nCol+7, nRow, double2str(nTotal), FMT_NUMBER2, true);			xls.SetCellText(nCol+9, nRow, double2str(nTotal2), FMT_NUMBER2, true);		}	EndWaitCursor();	xls.Save(_T("Exports\\BCSUDUNGTHUOCVATTU.xls"));*/
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	if (!xls.Load(_T("Exports\\THONGKESUDUNGTHUOC_VATTU_KHTH.xls"))) AfxMessageBox(_T("Chưa có File THONGKESUDUNGTHUOC_VATTU_KHTH.xls trong thư mục Export!"));	
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("patientname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("diagnostic"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("doctorname"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		

		rs.GetValue(_T("productname"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("qty"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("admitdate"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("dischargedate"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		

		rs.GetValue(_T("amount"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("objectname"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("card_no"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("reg_code"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("maindisease"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("icd"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("disease_hist"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("disease_hist_1y"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("benh_kem"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);

		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[10] > 0)
	{
		xls.SetCellText(6, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 6; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[10] > 0)
	{
		xls.SetCellText(6, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 6; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\THONGKESUDUNGTHUOC_VATTU_KHTH2.xls"));


} 
int CBCSUDUNGTHUOCVATTU::OnAddBCSUDUNGTHUOCVATTU(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCSUDUNGTHUOCVATTU::OnEditBCSUDUNGTHUOCVATTU(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCSUDUNGTHUOCVATTU::OnDeleteBCSUDUNGTHUOCVATTU(){
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
 		OnCancelBCSUDUNGTHUOCVATTU();
 	}
	return 0;
}
int CBCSUDUNGTHUOCVATTU::OnSaveBCSUDUNGTHUOCVATTU(){
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
 		//OnBCSUDUNGTHUOCVATTUListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCSUDUNGTHUOCVATTU::OnCancelBCSUDUNGTHUOCVATTU(){
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
int CBCSUDUNGTHUOCVATTU::OnBCSUDUNGTHUOCVATTUListLoadData(){
	return 0;
}
CString CBCSUDUNGTHUOCVATTU::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szList;

	for (int i = 0; i < m_wndList.GetItemCount();i++)
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szList.IsEmpty())
				szList += _T(", ");
			szList.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 4));
		}
	if(!szList.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_id IN (%s)"), szList);

	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_deptid = '%s'"), m_szDepartmentKey);

	if (!m_szRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_roomid = '%s'"), m_szRoomKey);

	if (!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_object_id = '%s'"), m_szObjectKey);

	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND NVL(hpo_doctor, htr_doctor) = '%s'"), m_szDoctorKey);

	if (!m_szStatusKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_orderstatus = '%s'"), m_szStatusKey);

	if(m_nAll == 0)
		szWhere.AppendFormat(_T("AND 1=1"));
	if(m_nInPatient == 0)
		szWhere.AppendFormat(_T("AND hpo_deptid not in ('C1.1', 'C1.2','C1.3','AB', 'TYC','TTHTSS')"));
	if(m_nOutPatient == 0)
		szWhere.AppendFormat(_T("AND hpo_deptid in ('C1.1', 'C1.2','C1.3','AB', 'TYC','TTHTSS')"));

	if(m_bDrug)
		szWhere.AppendFormat(_T("AND product_org_id IN('PM')"));
	if(m_bMaterial)
		szWhere.AppendFormat(_T("AND product_org_id IN('MA')"));

	szSQL.Format(
		_T(" SELECT hd_cardno card_no, substr(hd_cardno, -5, 5) reg_code,") \
		_T(" get_patientname(hpo_docno) AS patientname,") \
		_T(" hpo_docno AS docno,") \
		_T(" hpo_deptid AS deptid,") \
		_T(" CASE WHEN hpo_depttype = 'KB' THEN he_diagnostic ELSE htr_maindisease END AS diagnostic,") \
		_T(" get_username(NVL(hpo_doctor, htr_doctor)) AS doctorname,") \
		_T(" product_name AS productname,") \
		_T(" SUM(hpol_qtyissue)  AS qty,") \
		_T(" CASE WHEN hpo_depttype = 'KB' THEN to_char(he_examdate, 'DD/MM/YYYY') ELSE to_char(htr_admitdate, 'DD/MM/YYYY') END AS admitdate,") \
		_T(" CASE WHEN hpo_depttype <> 'KB' THEN to_char(htr_dischargedate, 'DD/MM/YYYY') END AS dischargedate,") \
		_T(" SUM(hpol_unitprice * hpol_qtyissue) AS amount,") \
		_T(" get_objectname(hpo_object_id) AS objectname, ") \
		_T("     CASE") \
		_T("       WHEN hpo_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')") \
		_T("       THEN TRIM(he_icd10 || ' ' || (SELECT TRIM(hod_diagnostic1 || ' ' ") \
		_T("       || hod_diagnostic2 || ' ' || hod_diagnostic3 || ' ' || hod_diagnostic4 || ' ' || hod_diagnostic5)") \
		_T("       FROM hms_other_diagnostic WHERE hod_docno = hpo_docno AND rownum=1))") \
		_T("       ELSE TRIM(htr_mainicd || ' ' || (SELECT TRIM(hod_diagnostic1 || ' ' ") \
		_T("       || hod_diagnostic2 || ' ' || hod_diagnostic3 || ' ' || hod_diagnostic4 || ' ' || hod_diagnostic5)") \
		_T("       FROM hms_other_diagnostic WHERE hod_docno = hpo_docno AND rownum=1))") \
		_T("     END AS icd,   ") \
		_T("     CASE") \
		_T("       WHEN hpo_deptid IN('C1.1','C1.2','C1.3','TYC','AB', 'TTHTSS')") \
		_T("       THEN  hd_conclusion ") \
		_T("       ELSE hcr_maindisease ") \
		_T("     END AS maindisease, ") \
		_T(" (	SELECT    DISTINCT 'Tiền sử: '||hdh_owner||'\n'||") \
		_T("	'Bệnh lý: '||First_value(he_medical) over ( ORDER BY he_receptidx DESC) ||'\n'") \
		_T("    || 'Lâm sàng/ Tóm tắt: ' ||First_value(he_examine) over ( ORDER BY he_receptidx DESC)") \
		_T("	FROM      hms_exam") \
		_T("	LEFT JOIN hms_disease_hist ON ( he_docno = hdh_docno )") \
		_T("	WHERE     he_docno = hpo_docno)  as disease_hist,") \
		_T("	GET_PREHISTORY(hpo_docno) as disease_hist_1y,") \
		_T("	hms_get_benhkem(hpo_docno) as benh_kem") \
		_T(" FROM hms_pharmaorder_view") \
		_T(" LEFT JOIN hms_pharmaorderline_view2") \
		_T(" ON(hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN hms_doc ON (hd_docno = hpo_docno)") \
		_T(" LEFT JOIN hms_clinical_record on (hcr_docno = hd_docno) ") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(product_item_id = hpol_product_item_id)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(hpo_docno = he_docno AND hpo_deptid = he_deptid AND hpo_roomid = he_roomid)") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(hpo_docno = htr_docno AND hpo_refidx = htr_idx)") \
		_T(" WHERE hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND hpol_qtyissue > 0 %s") \
		_T(" GROUP BY hd_cardno,") \
		_T(" hpo_docno,") \
		_T(" hpo_deptid,") \
		_T(" hpo_depttype,") \
		_T(" he_diagnostic,") \
		_T(" htr_maindisease,") \
		_T(" NVL(hpo_doctor, htr_doctor),") \
		_T(" product_name,") \
		_T(" he_examdate,") \
		_T(" htr_admitdate,") \
		_T(" htr_dischargedate,") \
		_T(" hpo_object_id,  hd_isinpatient, ") \
		_T("	hd_conclusion, ") \
		_T("	hcr_maindisease,he_icd10,htr_mainicd") \
		_T(" ORDER BY hpo_deptid, NVL(hpo_doctor, htr_doctor), product_name, hpo_object_id"), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}