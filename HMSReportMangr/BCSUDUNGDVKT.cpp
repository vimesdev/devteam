#include "stdafx.h"
#include "BCSUDUNGDVKT.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGDVKT* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGDVKT* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGDVKT* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnRoomAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGDVKT* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnObjectAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGDVKT* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnDoctorAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGDVKT* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnStatusAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CBCSUDUNGDVKT*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CBCSUDUNGDVKT*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CBCSUDUNGDVKT*)pWnd)->OnOutPatientSelect();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnNameCheckValue();
}
static void _OnOperationGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGDVKT* )pWnd)->OnOperationGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationGroupSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnOperationGroupSelendok();
}
/*static void _OnOperationGroupSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnOperationGroupKillfocus();
}*/
/*static void _OnOperationGroupKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnOperationGroupKillfocus();
}*/
static long _OnOperationGroupLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnOperationGroupLoadData();
}
/*static void _OnOperationGroupAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnOperationGroupAddNew();
}*/
static void _OnParaclinicalGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGDVKT* )pWnd)->OnParaclinicalGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParaclinicalGroupSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnParaclinicalGroupSelendok();
}
/*static void _OnParaclinicalGroupSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnParaclinicalGroupKillfocus();
}*/
/*static void _OnParaclinicalGroupKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnParaclinicalGroupKillfocus();
}*/
static long _OnParaclinicalGroupLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnParaclinicalGroupLoadData();
}
/*static void _OnParaclinicalGroupAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT *)pWnd)->OnParaclinicalGroupAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCSUDUNGDVKT *pVw = (CBCSUDUNGDVKT *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCSUDUNGDVKT*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCSUDUNGDVKT*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKT*)pWnd)->OnListDeleteItem();
}
static int _OnListSelectAllFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT*)pWnd)->OnListSelectAll();
} 
static int _OnListUnselectAllFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT*)pWnd)->OnListUnselectAll();
} 
static int _OnAddBCSUDUNGDVKTFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKT*)pWnd)->OnAddBCSUDUNGDVKT();
} 
static int _OnEditBCSUDUNGDVKTFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKT*)pWnd)->OnEditBCSUDUNGDVKT();
} 
static int _OnDeleteBCSUDUNGDVKTFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKT*)pWnd)->OnDeleteBCSUDUNGDVKT();
} 
static int _OnSaveBCSUDUNGDVKTFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKT*)pWnd)->OnSaveBCSUDUNGDVKT();
} 
static int _OnCancelBCSUDUNGDVKTFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKT*)pWnd)->OnCancelBCSUDUNGDVKT();
}
static int _OnICD10CheckValueFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKT *)pWnd)->OnICD10CheckValue();
} 
CBCSUDUNGDVKT::CBCSUDUNGDVKT(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCSUDUNGDVKT::~CBCSUDUNGDVKT(){
}
void CBCSUDUNGDVKT::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 7, 5, 867, 535);
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
	m_wndOutPatient.Create(this, _T("OutPatient"), 600, 120, 700, 145);
	m_wndHitech.Create(this, _T("Hitech"), 745, 120, 845, 145);
	m_wndOperationGroupLabel.Create(this, _T("Operation Group"), 10, 150, 90, 175);
	m_wndOperationGroup.Create(this,95, 150, 425, 175); 
	m_wndParaclinicalGroupLabel.Create(this, _T("Paraclinical Group"), 430, 150, 510, 175);
	m_wndParaclinicalGroup.Create(this,515, 150, 845, 175); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 180, 90, 205);
	m_wndName.Create(this,95, 180, 860, 205); 
	m_wndList.Create(this,10, 210, 860, 530); 
	m_wndExport.Create(this, _T("&Export"), 779, 540, 859, 565);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 7, 4, 867, 575);
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
	m_wndOutPatient.Create(this, _T("OutPatient"), 600, 120, 700, 145);
	m_wndHitech.Create(this, _T("Hitech"), 745, 120, 845, 145);
	m_wndNameLabel.Create(this, _T("Name"), 10, 179, 90, 204);
	m_wndName.Create(this,95, 179, 860, 204); 
	m_wndOperationGroupLabel.Create(this, _T("Operation Group"), 10, 150, 90, 175);
	m_wndOperationGroup.Create(this,95, 150, 425, 175); 
	m_wndParaclinicalGroupLabel.Create(this, _T("Paraclinical Group"), 430, 150, 510, 175);
	m_wndParaclinicalGroup.Create(this,515, 150, 845, 175); 
	m_wndExport.Create(this, _T("&Export"), 779, 581, 859, 606);
	m_wndList.Create(this,10, 240, 860, 570); 
	m_wndICDLabel.Create(this, _T("ICD10"), 11, 210, 91, 235);
	m_wndICD10.Create(this,95, 210, 860, 235);

}
void CBCSUDUNGDVKT::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	//m_wndYear.SetCheckValue(true);
	//m_wndPeriodReport.SetCheckValue(true);
	m_wndPeriodReport.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(1024);
	m_wndOperationGroup.SetCheckValue(true);
	m_wndOperationGroup.LimitText(35);
	m_wndParaclinicalGroup.SetCheckValue(true);
	m_wndParaclinicalGroup.LimitText(35);

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
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 500);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Group"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Type"), CFMT_TEXT, 10);
	m_wndList.InsertColumn(6, _T("Applydate"), CFMT_TEXT, 40);

	m_wndOperationGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOperationGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndParaclinicalGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndParaclinicalGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


}
void CBCSUDUNGDVKT::OnSetWindowEvents(){
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
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndOperationGroup.SetEvent(WE_SELENDOK, _OnOperationGroupSelendokFnc);
	//m_wndOperationGroup.SetEvent(WE_SETFOCUS, _OnOperationGroupSetfocusFnc);
	//m_wndOperationGroup.SetEvent(WE_KILLFOCUS, _OnOperationGroupKillfocusFnc);
	m_wndOperationGroup.SetEvent(WE_SELCHANGE, _OnOperationGroupSelectChangeFnc);
	m_wndOperationGroup.SetEvent(WE_LOADDATA, _OnOperationGroupLoadDataFnc);
	//m_wndOperationGroup.SetEvent(WE_ADDNEW, _OnOperationGroupAddNewFnc);
	m_wndParaclinicalGroup.SetEvent(WE_SELENDOK, _OnParaclinicalGroupSelendokFnc);
	//m_wndParaclinicalGroup.SetEvent(WE_SETFOCUS, _OnParaclinicalGroupSetfocusFnc);
	//m_wndParaclinicalGroup.SetEvent(WE_KILLFOCUS, _OnParaclinicalGroupKillfocusFnc);
	m_wndParaclinicalGroup.SetEvent(WE_SELCHANGE, _OnParaclinicalGroupSelectChangeFnc);
	m_wndParaclinicalGroup.SetEvent(WE_LOADDATA, _OnParaclinicalGroupLoadDataFnc);
	//m_wndParaclinicalGroup.SetEvent(WE_ADDNEW, _OnParaclinicalGroupAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Select All"), _OnListSelectAllFnc);
	m_wndList.AddEvent(2, _T("Unselect All"), _OnListUnselectAllFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnListLoadData();

}
void CBCSUDUNGDVKT::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Check(pDX, m_wndHitech.GetDlgCtrlID(), m_bHitech);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndOperationGroup.GetDlgCtrlID(), m_szOperationGroupKey);
	DDX_TextEx(pDX, m_wndParaclinicalGroup.GetDlgCtrlID(), m_szParaclinicalGroupKey);
	DDX_Text(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10);

}
void CBCSUDUNGDVKT::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCSUDUNGDVKT::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCSUDUNGDVKT::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();
	m_szObjectKey.Empty();
	m_szDoctorKey.Empty();
	m_szStatusKey.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;
	m_szName.Empty();
	m_bHitech = FALSE;
	m_szICD10.Empty();

}
int CBCSUDUNGDVKT::SetMode(int nMode){
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
/*void CBCSUDUNGDVKT::OnYearChange(){
	
} */
/*void CBCSUDUNGDVKT::OnYearSetfocus(){
	
} */
/*void CBCSUDUNGDVKT::OnYearKillfocus(){
	
} */
int CBCSUDUNGDVKT::OnYearCheckValue(){
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
int CBCSUDUNGDVKT::OnICD10CheckValue(){
	return 0;
} 
void CBCSUDUNGDVKT::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGDVKT::OnPeriodReportSelendok(){
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
/*void CBCSUDUNGDVKT::OnPeriodReportSetfocus(){
	
}*/
/*void CBCSUDUNGDVKT::OnPeriodReportKillfocus(){
	
}*/
long CBCSUDUNGDVKT::OnPeriodReportLoadData(){
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
/*void CBCSUDUNGDVKT::OnPeriodReportAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CBCSUDUNGDVKT::OnFromDateChange(){
	
} */
/*void CBCSUDUNGDVKT::OnFromDateSetfocus(){
	
} */
/*void CBCSUDUNGDVKT::OnFromDateKillfocus(){
	
} */
int CBCSUDUNGDVKT::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCSUDUNGDVKT::OnToDateChange(){
	
} */
/*void CBCSUDUNGDVKT::OnToDateSetfocus(){
	
} */
/*void CBCSUDUNGDVKT::OnToDateKillfocus(){
	
} */
int CBCSUDUNGDVKT::OnToDateCheckValue(){
	return 0;
} 
void CBCSUDUNGDVKT::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGDVKT::OnDepartmentSelendok(){
	 
}
/*void CBCSUDUNGDVKT::OnDepartmentSetfocus(){
	
}*/
/*void CBCSUDUNGDVKT::OnDepartmentKillfocus(){
	
}*/
long CBCSUDUNGDVKT::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
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
/*void CBCSUDUNGDVKT::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGDVKT::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGDVKT::OnRoomSelendok(){
	 
}
/*void CBCSUDUNGDVKT::OnRoomSetfocus(){
	
}*/
/*void CBCSUDUNGDVKT::OnRoomKillfocus(){
	
}*/
long CBCSUDUNGDVKT::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.AppendFormat(_T(" and hrl_id='%s' "), m_szRoomKey);
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name, hrl_deptid as deptid FROM hms_roomlist WHERE hrl_deptid IN('C1.1','C1.2','C1.3','TYC','AB','TTHTSS') %s ORDER BY deptid, id "), szWhere);
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
/*void CBCSUDUNGDVKT::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGDVKT::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGDVKT::OnObjectSelendok(){
	 
}
/*void CBCSUDUNGDVKT::OnObjectSetfocus(){
	
}*/
/*void CBCSUDUNGDVKT::OnObjectKillfocus(){
	
}*/
long CBCSUDUNGDVKT::OnObjectLoadData(){
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
/*void CBCSUDUNGDVKT::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGDVKT::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGDVKT::OnDoctorSelendok(){
	 
}
/*void CBCSUDUNGDVKT::OnDoctorSetfocus(){
	
}*/
/*void CBCSUDUNGDVKT::OnDoctorKillfocus(){
	
}*/
long CBCSUDUNGDVKT::OnDoctorLoadData(){
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
/*void CBCSUDUNGDVKT::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGDVKT::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGDVKT::OnStatusSelendok(){
	 
}
/*void CBCSUDUNGDVKT::OnStatusSetfocus(){
	
}*/
/*void CBCSUDUNGDVKT::OnStatusKillfocus(){
	
}*/
long CBCSUDUNGDVKT::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szStatusKey);
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_order_status' AND ss_code IN('T', 'S', 'O') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCSUDUNGDVKT::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGDVKT::OnAllSelect(){
	
}
void CBCSUDUNGDVKT::OnInPatientSelect(){
	
}
void CBCSUDUNGDVKT::OnOutPatientSelect(){
	
}
/*void CBCSUDUNGDVKT::OnNameChange(){
	
} */
/*void CBCSUDUNGDVKT::OnNameSetfocus(){
	
} */
/*void CBCSUDUNGDVKT::OnNameKillfocus(){
	
} */
int CBCSUDUNGDVKT::OnNameCheckValue(){
	OnListLoadData();
	return 1;
}
void CBCSUDUNGDVKT::OnOperationGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} 
void CBCSUDUNGDVKT::OnOperationGroupSelendok(){
	UpdateData(TRUE);
	m_wndParaclinicalGroup.DeleteAllItems(); 
	OnListLoadData();
}
/*void CBCSUDUNGDVKT::OnOperationGroupSetfocus(){
	
}*/
/*void CBCSUDUNGDVKT::OnOperationGroupKillfocus(){
	
}*/
long CBCSUDUNGDVKT::OnOperationGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperationGroup.IsSearchKey() && !m_szOperationGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and hfg_id='%s' "), m_szOperationGroupKey);
};
	m_wndOperationGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name FROM hms_fee_group WHERE substr(hfg_id,1,2) in('B4','B5') ") \
				 _T("AND hfg_active='Y' %s ORDER BY hfg_index, hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperationGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CBCSUDUNGDVKT::OnOperationGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGDVKT::OnParaclinicalGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} 
void CBCSUDUNGDVKT::OnParaclinicalGroupSelendok(){
	UpdateData(TRUE);
	m_wndOperationGroup.DeleteAllItems(); 
	OnListLoadData();
}
/*void CBCSUDUNGDVKT::OnParaclinicalGroupSetfocus(){
	
}*/
/*void CBCSUDUNGDVKT::OnParaclinicalGroupKillfocus(){
	
}*/
long CBCSUDUNGDVKT::OnParaclinicalGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParaclinicalGroup.IsSearchKey() && !m_szParaclinicalGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and hfg_id='%s' "), m_szParaclinicalGroupKey);
};
	m_wndParaclinicalGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name FROM hms_fee_group WHERE substr(hfg_id, 1, 2) IN('B1','B2','B3')") \
				 _T("AND hfg_active='Y' %s ORDER BY hfg_index, hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParaclinicalGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CBCSUDUNGDVKT::OnParaclinicalGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CBCSUDUNGDVKT::OnListSelectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	return 0;
} 
int CBCSUDUNGDVKT::OnListUnselectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
	return 0;
} 
void CBCSUDUNGDVKT::OnListDblClick(){
	UpdateData(TRUE);
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	for (int i=0; i< m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i,false);
	}
	m_wndList.SetCheck(nSel, !m_wndList.GetCheck(nSel));
} 
void CBCSUDUNGDVKT::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCSUDUNGDVKT::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCSUDUNGDVKT::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);

	m_wndList.BeginLoad(); 
	int nCount = 0;

	if(!m_szName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hfl_name) like(lower('%s%s%s')) "), _T("%"), m_szName, _T("%"));
	}
	
	if(!m_szOperationGroupKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfl_groupid = '%s'"), m_szOperationGroupKey);
	}

	if(!m_szParaclinicalGroupKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfl_groupid = '%s'"), m_szParaclinicalGroupKey);
	}
	

	szSQL.Format(_T(" SELECT hfl_feeid AS id, hfl_name AS name, hfl_unit AS unit, hfl_groupid AS groupid, hfl_typeid AS typeid,HFL_APPLYDATE as applydate FROM hms_fee_list ") \
				 _T(" WHERE hfl_typeid IN('O', 'P', 'T') %s ORDER BY hfl_feeid, hfl_name "), szWhere);
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("groupid")),
			rs.GetValue(_T("typeid")),
			rs.GetValue(_T("applydate")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCSUDUNGDVKT::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szTemp2, szWhere, szDisease;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1, nTreatTime = 0, nRefIdx = 0;
	long double nTotal = 0, nTotal2 = 0;
	long nOldDoc = 0, nNewDoc = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 6);
	xls.SetColumnWidth(5, 25);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 20);
	xls.SetColumnWidth(8, 25);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 25);
	xls.SetColumnWidth(11, 15);
	xls.SetColumnWidth(12, 15);
	xls.SetColumnWidth(13, 15);
	xls.SetColumnWidth(14, 15);
	xls.SetColumnWidth(15, 45);
	xls.SetColumnWidth(16, 45);
	xls.SetColumnWidth(17, 45);

	xls.SetColumnWidth(18, 20);
	xls.SetColumnWidth(19, 20);
	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT | FMT_CENTER, true, 11);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 2, _T("BÁO CÁO THỐNG KÊ VỀ SỬ DỤNG DỊCH VỤ KĨ THUẬT"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(1, 4, _T("Bệnh nhân"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(2, 4, _T("Năm sinh"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(3, 4, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(4, 4, _T("Khoa"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(5, 4, _T("Chẩn đoán"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(6, 4, _T("ICD"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(7, 4, _T("Bác sĩ chỉ định"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(8, 4, _T("Tên thuốc"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(9, 4, _T("SL"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(10, 4, _T("Ngày VV/RV"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(11, 4, _T("Thành tiền"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(12, 4, _T("Đối tượng"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(13, 4, _T("Mã thẻ"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(14, 4, _T("Mã ĐK"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(15, 4, _T("Kết quả"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(16, 4, _T("Mô tả"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(17, 4, _T("Bệnh sử"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(18, 4, _T("Ngày chỉ định"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(19, 4, _T("Ngày thực hiện"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 10);
	xls.SetMerge(3, 3, 0, 10);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){
		rs.GetValue(_T("docno"), nNewDoc);
		/*
		if (nNewDoc != nOldDoc)
		{
			if (nOldDoc > 0)
			{
				if (szDisease.IsEmpty())
				{
					szDisease = GetDiseaseHist(nOldDoc, nTreatTime, nRefIdx);
				}
				if (!szDisease.IsEmpty())
				{
					xls.SetRowHeight(nRow, 45);
					xls.SetCellMergedColumns(1, nRow, 13);
					xls.SetCellText(1, nRow, szDisease, FMT_TEXT | FMT_WRAPING);
					nRow++;
				}
			}
			_tprintf(_T("\nNew: %ld|Old: %ld|disease: %s\n"), nNewDoc, nOldDoc, szDisease);
			nOldDoc = nNewDoc;
		}
		rs.GetValue(_T("disease_hist"), szDisease);
		rs.GetValue(_T("treat_time"), nTreatTime);
		rs.GetValue(_T("ref_idx"), nRefIdx);
		*/
		if (nNewDoc != nOldDoc)
		{
			rs.GetValue(_T("disease_hist"), szDisease);
			rs.GetValue(_T("treat_time"), nTreatTime);
			rs.GetValue(_T("ref_idx"), nRefIdx);
			if (szDisease.IsEmpty())
			{
				szDisease = GetDiseaseHist(nOldDoc, nTreatTime, nRefIdx);
			}
			nOldDoc = nNewDoc;
		}
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_NUMBER1);
		rs.GetValue(_T("patientname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("maindisease"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("icd"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("doctorname"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("qty"), tmpStr);
		nTotal += str2double(tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER2);
		rs.GetValue(_T("admitdate"), szTemp);
		rs.GetValue(_T("dischargedate"), szTemp2);
		tmpStr.Format(_T("%s   %s"), CDate::Convert(szTemp, yyyymmdd, ddmmyyyy), CDate::Convert(szTemp2, yyyymmdd, ddmmyyyy));
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("amount"), tmpStr);
		nTotal2 += str2double(tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER2);
		rs.GetValue(_T("objectname"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		xls.SetCellText(13, nRow, rs.GetValue(_T("card_no")), FMT_TEXT);
		xls.SetCellText(14, nRow, rs.GetValue(_T("reg_code")), FMT_TEXT);
		xls.SetCellText(15, nRow, rs.GetValue(_T("presult")), FMT_TEXT);
		xls.SetCellText(16, nRow, rs.GetValue(_T("descr")), FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(17, nRow, szDisease, FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(18, nRow, rs.GetValue(_T("ngay_chi_dinh")), FMT_TEXT);
		xls.SetCellText(19, nRow, rs.GetValue(_T("ngay_thuc_hien")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	if(nTotal>0)
	{
		xls.SetCellText(nCol+1, nRow, _T("Tổng cộng:"), FMT_TEXT, true);
		xls.SetCellText(nCol+9, nRow, double2str(nTotal), FMT_NUMBER2, true);
		xls.SetCellText(nCol+11, nRow, double2str(nTotal2), FMT_NUMBER2, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BCSUDUNGDVKT.xls"));	
} 
int CBCSUDUNGDVKT::OnAddBCSUDUNGDVKT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCSUDUNGDVKT::OnEditBCSUDUNGDVKT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCSUDUNGDVKT::OnDeleteBCSUDUNGDVKT(){
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
 		OnCancelBCSUDUNGDVKT();
 	}
	return 0;
}
int CBCSUDUNGDVKT::OnSaveBCSUDUNGDVKT(){
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
 		//OnBCSUDUNGDVKTListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCSUDUNGDVKT::OnCancelBCSUDUNGDVKT(){
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
int CBCSUDUNGDVKT::OnBCSUDUNGDVKTListLoadData(){
	return 0;
}
CString CBCSUDUNGDVKT::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szWhere1, szList;

	for (int i = 0; i < m_wndList.GetItemCount();i++)
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szList.IsEmpty())
				szList += _T(", ");
			szList.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
		}
	if(!szList.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_itemid IN (%s)"), szList);
		szWhere1.AppendFormat(_T(" AND hpcl_itemid IN (%s)"), szList);
	}

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_deptid = '%s'"), m_szDepartmentKey);
		szWhere1.AppendFormat(_T(" AND hpc_deptid = '%s'"), m_szDepartmentKey);
	}

	if (!m_szRoomKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_roomid = '%s'"), m_szRoomKey);
		szWhere1.AppendFormat(_T(" AND hpc_roomid = '%s'"), m_szRoomKey);
	}

	if (!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_object = '%s'"), m_szObjectKey);
		szWhere1.AppendFormat(_T(" AND hpc_object = '%s'"), m_szObjectKey);
	}

	if (!m_szDoctorKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_doctor = '%s'"), m_szDoctorKey);
		szWhere1.AppendFormat(_T(" AND hpc_doctor = '%s'"), m_szDoctorKey);
	}

	if (!m_szStatusKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_status = '%s'"), m_szStatusKey);
		szWhere1.AppendFormat(_T(" AND hpc_status = '%s'"), m_szStatusKey);
	}


	if(m_nAll == 0)
		szWhere.AppendFormat(_T(" "));
	if(m_nInPatient == 0)
	{
		szWhere.AppendFormat(_T("AND ho_deptid NOT IN('C1.1','C1.2','C1.3','TYC','AB', 'TTHTSS')"));
		szWhere1.AppendFormat(_T("AND hpc_deptid NOT IN('C1.1','C1.2','C1.3','TYC','AB', 'TTHTSS')"));
	}
	if(m_nOutPatient == 0)
	{
		szWhere.AppendFormat(_T("AND ho_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')"));
		szWhere1.AppendFormat(_T("AND hpc_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')"));
	}
	if (m_bHitech)
	{
		szWhere.AppendFormat(_T(" AND hfl_hitech = 'Y'"));
		szWhere1.AppendFormat(_T(" AND hfl_hitech = 'Y'"));
	}
	if (!m_szICD10.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND HTR_MAINICD = '%s'"), m_szICD10);
		szWhere1.AppendFormat(_T(" AND HTR_MAINICD = '%s'"), m_szICD10);	
	}
	szSQL.Format(_T(" SELECT tbl.*, hd_cardno card_no, CAST(TO_CHAR(hp_birthdate, 'YYYY') as integer) as birthyear,") \
		_T("			substr(hd_cardno, -5, 5) reg_code,") \
		_T(" case when hd_isinpatient <> 'Y' then (SELECT    DISTINCT 'Tiền sử: '||hdh_owner||'\n'||") \
		_T("	'Bệnh lý: '||First_value(he_medical) over ( ORDER BY he_receptidx DESC) ||'\n'") \
		_T("    || 'Lâm sàng/ Tóm tắt: ' ||First_value(he_examine) over ( ORDER BY he_receptidx DESC)") \
		_T(" FROM      hms_exam") \
		_T(" left join hms_disease_hist ON ( he_docno = hdh_docno )") \
		_T(" WHERE     he_docno = hd_docno) else cast('' as nvarchar2(1)) end as disease_hist") \
		_T(" FROM (") \
		_T(" SELECT get_patientname(ho_docno) AS patientname,") \
		_T("   ho_docno                       AS docno,") \
		_T("   ho_deptid                      AS deptid,") \
		_T("   CASE") \
		_T("     WHEN ho_deptid IN('C1.1','C1.2','C1.3','TYC','AB','TTHTSS')") \
		_T("     THEN he_diagnostic") \
		_T("     ELSE htr_maindisease") \
		_T("   END                       AS diagnostic,") \
		_T("   get_username(ho_doctor)   AS doctorname,") \
		_T("   hfl_name                  AS pname,") \
		_T("   CAST(' ' AS VARCHAR2(2)) AS presult,") \
		_T("   SUM(ho_qty)               AS qty,") \
		_T("   CASE") \
		_T("     WHEN ho_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')") \
		_T("     THEN he_examdate") \
		_T("     ELSE htr_admitdate") \
		_T("   END AS admitdate,") \
		_T("   CASE") \
		_T("     WHEN ho_deptid NOT IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')") \
		_T("     THEN htr_dischargedate") \
		_T("   END AS dischargedate,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN ho_object = 7") \
		_T("     THEN ho_qty     * hfl_servprice") \
		_T("     WHEN ho_object IN(1, 3, 8, 13)") \
		_T("     THEN ho_qty     * hfl_polprice") \
		_T("     ELSE ho_qty     * hfl_insprice") \
		_T("   END)                      AS amount_,") \
		_T("	sum(hfe_cost) as amount,") \
		_T("   get_objectname(ho_object) AS objectname,") \
		_T("     CASE") \
		_T("       WHEN ho_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')") \
		_T("       THEN TRIM(he_icd10 || ' ' || hms_get_benhkem(ho_docno))") \
		_T("       ELSE TRIM(htr_mainicd || ' ' || hms_get_benhkem(ho_docno))") \
		_T("     END AS icd,   ") \
		_T("     CASE") \
		_T("       WHEN ho_deptid IN('C1.1','C1.2','C1.3','TYC','AB', 'TTHTSS')") \
		_T("       THEN (SELECT hd_conclusion FROM hms_doc WHERE hd_docno = ho_docno)") \
		_T("       ELSE (SELECT hcr_maindisease FROM hms_clinical_record WHERE hcr_docno = ho_docno)") \
		_T("     END AS maindisease, ho_treattime as treat_time, ho_refidx as ref_idx,") \
		_T("	 cast('' as varchar2(1)) as descr,") \
		_T("	to_char(ho_orderdate, 'dd/mm/yyyy') as ngay_chi_dinh, to_char(ho_performdate, 'dd/mm/yyyy') as ngay_thuc_hien") \
		_T(" FROM hms_operation") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid = ho_itemid)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(ho_docno   = he_docno") \
		_T(" AND ho_deptid = he_deptid") \
		_T(" AND ho_roomid = he_roomid)") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(ho_docno   = htr_docno") \
		_T(" AND ho_refidx = htr_idx)") \
		_T(" LEFT JOIN hms_fee on (ho_docno = hfe_docno and ho_idx = hfe_orderid and hfe_type = 'O') ") \
		_T(" WHERE ho_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND LENGTH(hfl_name) > 0 %s") \
		_T(" GROUP BY ho_docno,") \
		_T("   ho_deptid,") \
		_T("   he_diagnostic,") \
		_T("   htr_maindisease,") \
		_T("   ho_doctor,") \
		_T("   hfl_name,") \
		_T("   he_examdate,") \
		_T("   htr_admitdate,") \
		_T("   htr_dischargedate,") \
		_T("   ho_object,") \
		_T("   he_icd10,") \
		_T("   htr_mainicd, ho_treattime, ho_refidx, to_char(ho_orderdate, 'dd/mm/yyyy'), to_char(ho_performdate, 'dd/mm/yyyy')") \
		_T(" UNION ALL") \
		_T(" SELECT get_patientname(hpc_docno) AS patientname,") \
		_T("   hpc_docno                       AS docno,") \
		_T("   hpc_deptid                      AS deptid,") \
		_T("   CASE") \
		_T("     WHEN hpc_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')") \
		_T("     THEN he_diagnostic") \
		_T("     ELSE htr_maindisease") \
		_T("   END                      AS diagnostic,") \
		_T("   get_username(hpc_doctor) AS doctorname,") \
		_T("   hfl_name                 AS pname,") \
		_T("   (select listagg(cast(item_name||':'||para_result as varchar2(2000)), ',') within group (order by NULL) ") \
		_T("	 from hms_para_result_view where hpc_docno = doc_no and order_id = hpc_orderid) AS presult,") \
		_T("   SUM(hpcl_qty) AS qty,") \
		_T("   CASE") \
		_T("     WHEN hpc_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')") \
		_T("     THEN he_examdate") \
		_T("     ELSE htr_admitdate") \
		_T("   END AS admitdate,") \
		_T("   CASE") \
		_T("     WHEN hpc_deptid NOT IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')") \
		_T("     THEN htr_dischargedate") \
		_T("   END AS dischargedate,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hpc_object = 7") \
		_T("     THEN hpcl_qty    * hfl_servprice") \
		_T("     WHEN hpc_object IN(1, 3, 8, 13)") \
		_T("     THEN hpcl_qty    * hfl_polprice") \
		_T("     ELSE hpcl_qty    * hfl_insprice") \
		_T("   END)                       AS amount_,") \
		_T("	SUM(hfe_cost) as amount,") \
		_T("   get_objectname(hpc_object) AS objectname,") \
		_T("     CASE") \
		_T("       WHEN hpc_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')") \
		_T("       THEN TRIM(he_icd10 || ' ' || hms_get_benhkem(hpc_docno))") \
		_T("       ELSE TRIM(htr_mainicd || ' ' || hms_get_benhkem(hpc_docno))") \
		_T("     END AS icd,  ") \
		_T("     CASE") \
		_T("       WHEN hpc_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')") \
		_T("       THEN (SELECT hd_conclusion FROM hms_doc WHERE hd_docno = hpc_docno)") \
		_T("       ELSE (SELECT hcr_maindisease FROM hms_clinical_record WHERE hcr_docno = hpc_docno)") \
		_T("     END AS maindisease, hpc_treattime, hpc_refidx,") \
		_T("	 cast('' as varchar2(1)) as descr,") \
		_T("	to_char(hpc_orderdate, 'dd/mm/yyyy') as ngay_chi_dinh, to_char(hpc_performdate, 'dd/mm/yyyy') as ngay_thuc_hien") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid = hpcl_itemid)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(hpc_docno   = he_docno") \
		_T(" AND hpc_deptid = he_deptid") \
		_T(" AND hpc_roomid = he_roomid)") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(hpc_docno   = htr_docno") \
		_T(" AND hpc_refidx = htr_idx)") \
		_T(" LEFT JOIN hms_fee on (hfe_docno = hpc_docno and hpc_orderid = hfe_orderid and hpcl_orderlineid = hfe_orderline)") \
		_T(" WHERE hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND LENGTH(hfl_name) > 0 AND hpcl_hasfee = 'Y' %s") \
		_T(" GROUP BY hpc_docno,") \
		_T("   hpc_deptid,") \
		_T("   he_diagnostic,") \
		_T("   htr_maindisease,") \
		_T("   hpc_doctor,") \
		_T("   hfl_name,") \
		_T("   hpcl_result,") \
		_T("   he_examdate,") \
		_T("   htr_admitdate,") \
		_T("   htr_dischargedate,") \
		_T("   hpc_object,") \
		_T("   he_icd10,") \
		_T("   htr_mainicd,hpc_orderid, hpc_treattime, hpc_refidx, to_char(hpc_orderdate, 'dd/mm/yyyy'), to_char(hpc_performdate, 'dd/mm/yyyy') ") \
		_T(" UNION ALL") \
		_T(" SELECT get_patientname(hpc_docno) AS patientname,") \
		_T("   hpc_docno                       AS docno,") \
		_T("   hpc_deptid                      AS deptid,") \
		_T("   CASE") \
		_T("     WHEN hpc_deptid IN('C1.1','C1.2','C1.3','TYC','AB', 'TTHTSS')") \
		_T("     THEN he_diagnostic") \
		_T("     ELSE htr_maindisease") \
		_T("   END                      AS diagnostic,") \
		_T("   get_username(hpc_doctor) AS doctorname,") \
		_T("   hfl_name                 AS pname,") \
		_T("   (select cast(para_result as varchar2(2000)) from hms_para_result_view where doc_no = hpc_docno AND order_id = hpc_orderid and item_id = hpcl_itemid) AS presult,") \
		_T("   SUM(hpcl_qty) AS qty,") \
		_T("   CASE") \
		_T("     WHEN hpc_deptid IN('C1.1','C1.2','C1.3','TYC','AB', 'TTHTSS')") \
		_T("     THEN he_examdate") \
		_T("     ELSE htr_admitdate") \
		_T("   END AS admitdate,") \
		_T("   CASE") \
		_T("     WHEN hpc_deptid NOT IN('C1.1','C1.2','C1.3','TYC','AB', 'TTHTSS')") \
		_T("     THEN htr_dischargedate") \
		_T("   END AS dischargedate,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hpc_object = 7") \
		_T("     THEN hpcl_qty    * hfl_servprice") \
		_T("     WHEN hpc_object IN(1, 3, 8, 13)") \
		_T("     THEN hpcl_qty    * hfl_polprice") \
		_T("     ELSE hpcl_qty    * hfl_insprice") \
		_T("   END)                       AS amount_,") \
		_T("	SUM(hfe_cost) as amount,") \
		_T("   get_objectname(hpc_object) AS objectname,") \
		_T("     CASE") \
		_T("       WHEN hpc_deptid IN('C1.1','C1.2','C1.3','TYC','AB', 'TTHTSS')") \
		_T("       THEN TRIM(he_icd10 || ' ' || hms_get_benhkem(hpc_docno))") \
		_T("       ELSE TRIM(htr_mainicd || ' ' || hms_get_benhkem(hpc_docno))") \
		_T("     END AS icd, ") \
		_T("     CASE") \
		_T("       WHEN hpc_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB', 'TTHTSS')") \
		_T("       THEN (SELECT hd_conclusion FROM hms_doc WHERE hd_docno = hpc_docno)") \
		_T("       ELSE (SELECT hcr_maindisease FROM hms_clinical_record WHERE hcr_docno = hpc_docno)") \
		_T("     END AS maindisease, hpc_treattime, hpc_refidx,") \
		_T("	 (select listagg(cast((case hpl_category when cast('KYTHUAT' as nvarchar2(10)) ") \
		_T("		then 'Kỹ thuật: '||hpr_desc when cast('MOTA' as nvarchar2(10)) then 'Mô tả: '||hpr_desc end) as varchar2(2000)), '\n') ") \
		_T("		within group (order by null) ") \
		_T("	  from hms_pacs_result, hms_pacs_layout ") \
		_T("	  where hpr_docno = hpc_docno and hpr_orderid = hpc_orderid AND hpl_id = hpcl_result and hpl_name = hpr_name ") \
		_T("		and hpr_itemid = hpcl_itemid and hpl_category IN ('MOTA', 'KYTHUAT') ) as descr,") \
		_T("	to_char(hpc_orderdate, 'dd/mm/yyyy') as ngay_chi_dinh, to_char(hpc_performdate, 'dd/mm/yyyy') as ngay_thuc_hien") \
		_T(" FROM hms_pacsorder") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid = hpcl_itemid)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(hpc_docno   = he_docno") \
		_T(" AND hpc_deptid = he_deptid") \
		_T(" AND hpc_roomid = he_roomid)") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(hpc_docno   = htr_docno") \
		_T(" AND hpc_refidx = htr_idx)") \
		_T(" LEFT JOIN hms_fee on (hfe_docno = hpc_docno and hpc_orderid = hfe_orderid and hpcl_orderlineid = hfe_orderline)") \
		_T(" WHERE hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND LENGTH(hfl_name) > 0 AND hpcl_hasfee = 'Y' %s") \
		_T(" GROUP BY hpc_docno,") \
		_T("   hpc_deptid,") \
		_T("   he_diagnostic,") \
		_T("   htr_maindisease,") \
		_T("   hpc_doctor,") \
		_T("   hfl_name,") \
		_T("   hpcl_result,") \
		_T("   he_examdate,") \
		_T("   htr_admitdate,") \
		_T("   htr_dischargedate,") \
		_T("   hpc_object,") \
		_T("   he_icd10,") \
		_T("   htr_mainicd, hpc_orderid, hpcl_itemid, hpc_treattime, hpc_refidx, to_char(hpc_orderdate, 'dd/mm/yyyy'), to_char(hpc_performdate, 'dd/mm/yyyy')") \
		_T("   ) tbl") \
		_T(" LEFT JOIN hms_doc ON (tbl.docno = hd_docno)") \
		_T(" LEFT JOIN hms_patient ON (hd_patientno=hp_patientno)") \
		_T(" WHERE amount > 0 ORDER BY deptid,") \
		_T("   doctorname,") \
		_T("   objectname,docno"), m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere1, m_szFromDate, m_szToDate, szWhere1);
	//AfxMessageBox(szSQL);
	return szSQL;
}

bool CBCSUDUNGDVKT::GetEMRData(long nDocNo, int nTreatTime, int nRefIdx, CString szType, CString& szData)
{
	CMainFrame * pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(szType == _T("BENH_AN_HB") ||   szType == _T("'BENH_AN_KB'") ||  szType == _T("'BENH_AN_KL'") )
	{
		szWhere.Empty();
	}
	
	if(nTreatTime <= 1)
		szWhere.AppendFormat(_T(" and (hde_treattime=%d or hde_treattime=0) "), nTreatTime);
	else
		szWhere.AppendFormat(_T(" and hde_treattime=%d  "), nTreatTime);



	szSQL.Format(_T("SELECT hde_uid,to_char(hde_value) as hde_value ") \
		_T(" FROM hms_doc_emr ") \
		_T(" WHERE hde_docno = %ld and hde_type='%s' and hde_uid is not null %s ") \
		_T(" ORDER BY hde_refidx desc"),
		nDocNo, szType, szWhere);
	
	rs.ExecSQL(szSQL);

	_tprintf(_T("\r\n%s"), szSQL);
//AfxMessageBox(szSQL);
	szData.Empty();
	if(!rs.IsEOF())
	{
		CString szUID, tmpStr;
		rs.GetValue(_T("hde_uid"), szUID);
		rs.GetValue(_T("hde_value"), szData);
		szSQL.Format(_T("SELECT * FROM hms_doc_emr_line ") \
			_T(" WHERE hdel_docno=%ld and hdel_uid='%s' ORDER BY hdel_line "),
			nDocNo, szUID);
		rs.ExecSQL(szSQL);
//AfxMessageBox(szSQL);
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("hdel_value"), tmpStr);
			szData.AppendFormat(_T("%s"), tmpStr);
			rs.MoveNext();
		}

		return true;
	}
	return false;
}

CString CBCSUDUNGDVKT::GetDiseaseHist(long nDocNo, int nTreatTime, int nRefIdx)
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDiseaseHist, jData, tmpStr;
	JSONVALUE js;
	szDiseaseHist.Empty();
	if (GetEMRData(nDocNo, nTreatTime, nRefIdx, _T("BENH_AN_HB"), jData))
	{
		js.Parse(jData);
		js[_T("benhsu")].GetValue(tmpStr);
		szDiseaseHist.Format(_T("Bệnh sử: %s\n"), tmpStr);
		js[_T("tien_su_ban_than")].GetValue(tmpStr);
		szDiseaseHist.AppendFormat(_T("Tiền sử: %s\n"), tmpStr);
		if (GetEMRData(nDocNo, nTreatTime, nRefIdx, _T("BENH_AN_KL"), jData))
		{
			js.Parse(jData);
			js[_T("benhan")].GetValue(tmpStr);
			szDiseaseHist.AppendFormat(_T("Bệnh án: %s\n"), tmpStr);
		}
	}
	return szDiseaseHist;
}