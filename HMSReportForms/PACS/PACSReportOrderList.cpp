#include "PACSReportOrderList.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSReportOrderList* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnObjectAddNew();
}*/
static void _OnOrderDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSReportOrderList* )pWnd)->OnOrderDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderDepartmentSelendokFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderDepartmentSelendok();
}
/*static void _OnOrderDepartmentSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderDepartmentKillfocus();
}*/
/*static void _OnOrderDepartmentKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderDepartmentKillfocus();
}*/
static long _OnOrderDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnOrderDepartmentLoadData();
}
/*static void _OnOrderDepartmentAddNewFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderDepartmentAddNew();
}*/
static void _OnOrderRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSReportOrderList* )pWnd)->OnOrderRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderRoomSelendokFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderRoomSelendok();
}
/*static void _OnOrderRoomSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderRoomKillfocus();
}*/
/*static void _OnOrderRoomKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderRoomKillfocus();
}*/
static long _OnOrderRoomLoadDataFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnOrderRoomLoadData();
}
/*static void _OnOrderRoomAddNewFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderRoomAddNew();
}*/
static void _OnOrderDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSReportOrderList* )pWnd)->OnOrderDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderDoctorSelendokFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderDoctorSelendok();
}
/*static void _OnOrderDoctorSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderDoctorKillfocus();
}*/
/*static void _OnOrderDoctorKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderDoctorKillfocus();
}*/
static long _OnOrderDoctorLoadDataFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnOrderDoctorLoadData();
}
/*static void _OnOrderDoctorAddNewFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderDoctorAddNew();
}*/
static void _OnPACSTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSReportOrderList* )pWnd)->OnPACSTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPACSTypeSelendokFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnPACSTypeSelendok();
}
/*static void _OnPACSTypeSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnPACSTypeKillfocus();
}*/
/*static void _OnPACSTypeKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnPACSTypeKillfocus();
}*/
static long _OnPACSTypeLoadDataFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnPACSTypeLoadData();
}
/*static void _OnPACSTypeAddNewFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnPACSTypeAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnMachineSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSReportOrderList* )pWnd)->OnMachineSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMachineSelendokFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnMachineSelendok();
}
/*static void _OnMachineSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnMachineKillfocus();
}*/
/*static void _OnMachineKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnMachineKillfocus();
}*/
static long _OnMachineLoadDataFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnMachineLoadData();
}
/*static void _OnMachineAddNewFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnMachineAddNew();
}*/
/*static void _OnMachineDateChangeFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnMachineDateChange();
} */
/*static void _OnMachineDateSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnMachineDateSetfocus();} */ 
/*static void _OnMachineDateKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnMachineDateKillfocus();
} */
static int _OnMachineDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnMachineDateCheckValue();
} 
/*static void _OnResultDateChangeFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnResultDateChange();
} */
/*static void _OnResultDateSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnResultDateSetfocus();} */ 
/*static void _OnResultDateKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnResultDateKillfocus();
} */
static int _OnResultDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnResultDateCheckValue();
} 
static void _OnResultDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSReportOrderList* )pWnd)->OnResultDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResultDoctorSelendokFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnResultDoctorSelendok();
}
/*static void _OnResultDoctorSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnResultDoctorKillfocus();
}*/
/*static void _OnResultDoctorKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnResultDoctorKillfocus();
}*/
static long _OnResultDoctorLoadDataFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnResultDoctorLoadData();
}
/*static void _OnResultDoctorAddNewFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnResultDoctorAddNew();
}*/
static void _OnIsTodaySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSReportOrderList* )pWnd)->OnIsTodaySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIsTodaySelendokFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnIsTodaySelendok();
}
/*static void _OnIsTodaySetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnIsTodayKillfocus();
}*/
/*static void _OnIsTodayKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnIsTodayKillfocus();
}*/
static long _OnIsTodayLoadDataFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnIsTodayLoadData();
}
/*static void _OnIsTodayAddNewFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnIsTodayAddNew();
}*/
/*static void _OnAppointmentDateChangeFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnAppointmentDateChange();
} */
/*static void _OnAppointmentDateSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnAppointmentDateSetfocus();} */ 
/*static void _OnAppointmentDateKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnAppointmentDateKillfocus();
} */
static int _OnAppointmentDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnAppointmentDateCheckValue();
} 
static void _OnColumnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSReportOrderList* )pWnd)->OnColumnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnColumnNameSelendokFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnColumnNameSelendok();
}
/*static void _OnColumnNameSetfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnColumnNameKillfocus();
}*/
/*static void _OnColumnNameKillfocusFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnColumnNameKillfocus();
}*/
static long _OnColumnNameLoadDataFnc(CWnd *pWnd){
	return ((CPACSReportOrderList *)pWnd)->OnColumnNameLoadData();
}
/*static void _OnColumnNameAddNewFnc(CWnd *pWnd){
	((CPACSReportOrderList *)pWnd)->OnColumnNameAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSReportOrderList *pVw = (CPACSReportOrderList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPACSReportOrderListFnc(CWnd *pWnd){
	 return ((CPACSReportOrderList*)pWnd)->OnAddPACSReportOrderList();
} 
static int _OnEditPACSReportOrderListFnc(CWnd *pWnd){
	 return ((CPACSReportOrderList*)pWnd)->OnEditPACSReportOrderList();
} 
static int _OnDeletePACSReportOrderListFnc(CWnd *pWnd){
	 return ((CPACSReportOrderList*)pWnd)->OnDeletePACSReportOrderList();
} 
static int _OnSavePACSReportOrderListFnc(CWnd *pWnd){
	 return ((CPACSReportOrderList*)pWnd)->OnSavePACSReportOrderList();
} 
static int _OnCancelPACSReportOrderListFnc(CWnd *pWnd){
	 return ((CPACSReportOrderList*)pWnd)->OnCancelPACSReportOrderList();
} 
CPACSReportOrderList::CPACSReportOrderList(){

	m_nDlgWidth = 500;
	m_nDlgHeight = 340;
	SetDefaultValues();
}
CPACSReportOrderList::~CPACSReportOrderList(){
}
void CPACSReportOrderList::OnCreateComponents(){
	m_wndOrderBy.Create(this, _T("Order By"), 5, 245, 490, 300);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 105, 55);
	m_wndFromDate.Create(this,110, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 345, 55);
	m_wndToDate.Create(this,350, 30, 485, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 60, 105, 85);
	m_wndObject.Create(this,110, 60, 245, 85); 
	m_wndFilterCondition.Create(this, _T("Filter"), 5, 5, 490, 240);
	m_wndOrderDepartmentLabel.Create(this, _T("Order Department"), 250, 60, 345, 85);
	m_wndOrderDepartment.Create(this,350, 60, 485, 85); 
	m_wndOrderRoomLabel.Create(this, _T("Phòng chỉ định"), 10, 90, 105, 115);
	m_wndOrderRoom.Create(this,110, 90, 245, 115); 
	m_wndOrderDoctorLabel.Create(this, _T("Bác sĩ chỉ định"), 250, 90, 345, 115);
	m_wndOrderDoctor.Create(this,350, 90, 485, 115); 
	m_wndPACSTypeLabel.Create(this, _T("Loại CĐHA"), 10, 120, 105, 145);
	m_wndPACSType.Create(this,110, 120, 245, 145); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 250, 120, 345, 145);
	m_wndOrderDate.Create(this,350, 120, 485, 145); 
	m_wndMachineLabel.Create(this, _T("Machine"), 10, 150, 105, 175);
	m_wndMachine.Create(this,110, 150, 245, 175); 
	m_wndMachineDateLabel.Create(this, _T("Ngày trên máy"), 250, 150, 345, 175);
	m_wndMachineDate.Create(this,350, 150, 485, 175); 
	m_wndResultDateLabel.Create(this, _T("Ngày kết quả"), 10, 180, 105, 205);
	m_wndResultDate.Create(this,110, 180, 245, 205); 
	m_wndResultDoctorLabel.Create(this, _T("Bác sĩ đọc k/quả"), 250, 180, 345, 205);
	m_wndResultDoctor.Create(this,350, 180, 485, 205); 
	m_wndIsTodayLabel.Create(this, _T("Trong ngày"), 10, 210, 105, 235);
	m_wndIsToday.Create(this,110, 210, 245, 235); 
	m_wndAppointmentDateLabel.Create(this, _T("Ngày hẹn"), 250, 210, 345, 235);
	m_wndAppointmentDate.Create(this,350, 210, 485, 235); 
	m_wndColumnNameLabel.Create(this, _T("Theo Cột"), 10, 270, 105, 295);
	m_wndColumnName.Create(this,110, 270, 245, 295); 
	m_wndExport.Create(this, _T("Export"), 410, 305, 490, 330);

}
void CPACSReportOrderList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndOrderDepartment.SetCheckValue(true);
	m_wndOrderDepartment.LimitText(35);
	m_wndOrderRoom.SetCheckValue(true);
	m_wndOrderRoom.LimitText(35);
	m_wndOrderDoctor.SetCheckValue(true);
	m_wndOrderDoctor.LimitText(35);
	m_wndPACSType.SetCheckValue(true);
	m_wndPACSType.LimitText(35);
	//m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndMachine.SetCheckValue(true);
	m_wndMachine.LimitText(35);
	//m_wndMachineDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndMachineDate.SetCheckValue(true);
	//m_wndResultDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndResultDate.SetCheckValue(true);
	m_wndResultDoctor.SetCheckValue(true);
	m_wndResultDoctor.LimitText(35);
	m_wndIsToday.SetCheckValue(true);
	m_wndIsToday.LimitText(35);
	//m_wndAppointmentDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAppointmentDate.SetCheckValue(true);
	m_wndColumnName.SetCheckValue(true);
	m_wndColumnName.LimitText(35);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndOrderDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndOrderDepartment.InsertColumn(1, _T("ID"), CFMT_TEXT, 50);//alias
	m_wndOrderDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);

	m_wndOrderRoom.InsertColumn(0, _T("UID"), CFMT_TEXT, 0);
	m_wndOrderRoom.InsertColumn(1, _T("ID"), CFMT_TEXT, 50);
	m_wndOrderRoom.InsertColumn(2, _T("Name"), CFMT_TEXT, 150);
	m_wndOrderRoom.Format(3, 2);

	m_wndOrderDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOrderDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPACSType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPACSType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMachine.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMachine.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndResultDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndResultDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndIsToday.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndIsToday.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndColumnName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndColumnName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPACSReportOrderList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	m_wndOrderDepartment.SetEvent(WE_SELENDOK, _OnOrderDepartmentSelendokFnc);
	//m_wndOrderDepartment.SetEvent(WE_SETFOCUS, _OnOrderDepartmentSetfocusFnc);
	//m_wndOrderDepartment.SetEvent(WE_KILLFOCUS, _OnOrderDepartmentKillfocusFnc);
	m_wndOrderDepartment.SetEvent(WE_SELCHANGE, _OnOrderDepartmentSelectChangeFnc);
	m_wndOrderDepartment.SetEvent(WE_LOADDATA, _OnOrderDepartmentLoadDataFnc);
	//m_wndOrderDepartment.SetEvent(WE_ADDNEW, _OnOrderDepartmentAddNewFnc);
	m_wndOrderRoom.SetEvent(WE_SELENDOK, _OnOrderRoomSelendokFnc);
	//m_wndOrderRoom.SetEvent(WE_SETFOCUS, _OnOrderRoomSetfocusFnc);
	//m_wndOrderRoom.SetEvent(WE_KILLFOCUS, _OnOrderRoomKillfocusFnc);
	m_wndOrderRoom.SetEvent(WE_SELCHANGE, _OnOrderRoomSelectChangeFnc);
	m_wndOrderRoom.SetEvent(WE_LOADDATA, _OnOrderRoomLoadDataFnc);
	//m_wndOrderRoom.SetEvent(WE_ADDNEW, _OnOrderRoomAddNewFnc);
	m_wndOrderDoctor.SetEvent(WE_SELENDOK, _OnOrderDoctorSelendokFnc);
	//m_wndOrderDoctor.SetEvent(WE_SETFOCUS, _OnOrderDoctorSetfocusFnc);
	//m_wndOrderDoctor.SetEvent(WE_KILLFOCUS, _OnOrderDoctorKillfocusFnc);
	m_wndOrderDoctor.SetEvent(WE_SELCHANGE, _OnOrderDoctorSelectChangeFnc);
	m_wndOrderDoctor.SetEvent(WE_LOADDATA, _OnOrderDoctorLoadDataFnc);
	//m_wndOrderDoctor.SetEvent(WE_ADDNEW, _OnOrderDoctorAddNewFnc);
	m_wndPACSType.SetEvent(WE_SELENDOK, _OnPACSTypeSelendokFnc);
	//m_wndPACSType.SetEvent(WE_SETFOCUS, _OnPACSTypeSetfocusFnc);
	//m_wndPACSType.SetEvent(WE_KILLFOCUS, _OnPACSTypeKillfocusFnc);
	m_wndPACSType.SetEvent(WE_SELCHANGE, _OnPACSTypeSelectChangeFnc);
	m_wndPACSType.SetEvent(WE_LOADDATA, _OnPACSTypeLoadDataFnc);
	//m_wndPACSType.SetEvent(WE_ADDNEW, _OnPACSTypeAddNewFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndMachine.SetEvent(WE_SELENDOK, _OnMachineSelendokFnc);
	//m_wndMachine.SetEvent(WE_SETFOCUS, _OnMachineSetfocusFnc);
	//m_wndMachine.SetEvent(WE_KILLFOCUS, _OnMachineKillfocusFnc);
	m_wndMachine.SetEvent(WE_SELCHANGE, _OnMachineSelectChangeFnc);
	m_wndMachine.SetEvent(WE_LOADDATA, _OnMachineLoadDataFnc);
	//m_wndMachine.SetEvent(WE_ADDNEW, _OnMachineAddNewFnc);
	//m_wndMachineDate.SetEvent(WE_CHANGE, _OnMachineDateChangeFnc);
	//m_wndMachineDate.SetEvent(WE_SETFOCUS, _OnMachineDateSetfocusFnc);
	//m_wndMachineDate.SetEvent(WE_KILLFOCUS, _OnMachineDateKillfocusFnc);
	m_wndMachineDate.SetEvent(WE_CHECKVALUE, _OnMachineDateCheckValueFnc);
	//m_wndResultDate.SetEvent(WE_CHANGE, _OnResultDateChangeFnc);
	//m_wndResultDate.SetEvent(WE_SETFOCUS, _OnResultDateSetfocusFnc);
	//m_wndResultDate.SetEvent(WE_KILLFOCUS, _OnResultDateKillfocusFnc);
	m_wndResultDate.SetEvent(WE_CHECKVALUE, _OnResultDateCheckValueFnc);
	m_wndResultDoctor.SetEvent(WE_SELENDOK, _OnResultDoctorSelendokFnc);
	//m_wndResultDoctor.SetEvent(WE_SETFOCUS, _OnResultDoctorSetfocusFnc);
	//m_wndResultDoctor.SetEvent(WE_KILLFOCUS, _OnResultDoctorKillfocusFnc);
	m_wndResultDoctor.SetEvent(WE_SELCHANGE, _OnResultDoctorSelectChangeFnc);
	m_wndResultDoctor.SetEvent(WE_LOADDATA, _OnResultDoctorLoadDataFnc);
	//m_wndResultDoctor.SetEvent(WE_ADDNEW, _OnResultDoctorAddNewFnc);
	m_wndIsToday.SetEvent(WE_SELENDOK, _OnIsTodaySelendokFnc);
	//m_wndIsToday.SetEvent(WE_SETFOCUS, _OnIsTodaySetfocusFnc);
	//m_wndIsToday.SetEvent(WE_KILLFOCUS, _OnIsTodayKillfocusFnc);
	m_wndIsToday.SetEvent(WE_SELCHANGE, _OnIsTodaySelectChangeFnc);
	m_wndIsToday.SetEvent(WE_LOADDATA, _OnIsTodayLoadDataFnc);
	//m_wndIsToday.SetEvent(WE_ADDNEW, _OnIsTodayAddNewFnc);
	//m_wndAppointmentDate.SetEvent(WE_CHANGE, _OnAppointmentDateChangeFnc);
	//m_wndAppointmentDate.SetEvent(WE_SETFOCUS, _OnAppointmentDateSetfocusFnc);
	//m_wndAppointmentDate.SetEvent(WE_KILLFOCUS, _OnAppointmentDateKillfocusFnc);
	m_wndAppointmentDate.SetEvent(WE_CHECKVALUE, _OnAppointmentDateCheckValueFnc);
	m_wndColumnName.SetEvent(WE_SELENDOK, _OnColumnNameSelendokFnc);
	//m_wndColumnName.SetEvent(WE_SETFOCUS, _OnColumnNameSetfocusFnc);
	//m_wndColumnName.SetEvent(WE_KILLFOCUS, _OnColumnNameKillfocusFnc);
	m_wndColumnName.SetEvent(WE_SELCHANGE, _OnColumnNameSelectChangeFnc);
	m_wndColumnName.SetEvent(WE_LOADDATA, _OnColumnNameLoadDataFnc);
	//m_wndColumnName.SetEvent(WE_ADDNEW, _OnColumnNameAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T(" 23:59");
	UpdateData(FALSE);
}
void CPACSReportOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndOrderDepartment.GetDlgCtrlID(), m_szOrderDepartmentKey);
	DDX_TextEx(pDX, m_wndOrderRoom.GetDlgCtrlID(), m_szOrderRoomKey);
	DDX_TextEx(pDX, m_wndOrderDoctor.GetDlgCtrlID(), m_szOrderDoctorKey);
	DDX_TextEx(pDX, m_wndPACSType.GetDlgCtrlID(), m_szPACSTypeKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndMachine.GetDlgCtrlID(), m_szMachineKey);
	DDX_TextEx(pDX, m_wndMachineDate.GetDlgCtrlID(), m_szMachineDate);
	DDX_TextEx(pDX, m_wndResultDate.GetDlgCtrlID(), m_szResultDate);
	DDX_TextEx(pDX, m_wndResultDoctor.GetDlgCtrlID(), m_szResultDoctorKey);
	DDX_TextEx(pDX, m_wndIsToday.GetDlgCtrlID(), m_szIsTodayKey);
	DDX_TextEx(pDX, m_wndAppointmentDate.GetDlgCtrlID(), m_szAppointmentDate);
	DDX_TextEx(pDX, m_wndColumnName.GetDlgCtrlID(), m_szColumnNameKey);

}
void CPACSReportOrderList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Object")] =  m_szObjectKey;
	m_jData[_T("OrderDepartment")] =  m_szOrderDepartmentKey;
	m_jData[_T("OrderRoom")] =  m_szOrderRoomKey;
	m_jData[_T("OrderDoctor")] =  m_szOrderDoctorKey;
	m_jData[_T("PACSType")] =  m_szPACSTypeKey;
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("Machine")] =  m_szMachineKey;
	m_jData[_T("MachineDate")] =  m_szMachineDate;
	m_jData[_T("ResultDate")] =  m_szResultDate;
	m_jData[_T("ResultDoctor")] =  m_szResultDoctorKey;
	m_jData[_T("IsToday")] =  m_szIsTodayKey;
	m_jData[_T("AppointmentDate")] =  m_szAppointmentDate;
	m_jData[_T("ColumnName")] =  m_szColumnNameKey;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Object")].GetValue(m_szObjectKey);
	m_jData[_T("OrderDepartment")].GetValue(m_szOrderDepartmentKey);
	m_jData[_T("OrderRoom")].GetValue(m_szOrderRoomKey);
	m_jData[_T("OrderDoctor")].GetValue(m_szOrderDoctorKey);
	m_jData[_T("PACSType")].GetValue(m_szPACSTypeKey);
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("Machine")].GetValue(m_szMachineKey);
	m_jData[_T("MachineDate")].GetValue(m_szMachineDate);
	m_jData[_T("ResultDate")].GetValue(m_szResultDate);
	m_jData[_T("ResultDoctor")].GetValue(m_szResultDoctorKey);
	m_jData[_T("IsToday")].GetValue(m_szIsTodayKey);
	m_jData[_T("AppointmentDate")].GetValue(m_szAppointmentDate);
	m_jData[_T("ColumnName")].GetValue(m_szColumnNameKey);
	}

}
void CPACSReportOrderList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSReportOrderList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSReportOrderList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szOrderDepartmentKey.Empty();
	m_szOrderRoomKey.Empty();
	m_szOrderDoctorKey.Empty();
	m_szPACSTypeKey.Empty();
	m_szOrderDate.Empty();
	m_szMachineKey.Empty();
	m_szMachineDate.Empty();
	m_szResultDate.Empty();
	m_szResultDoctorKey.Empty();
	m_szIsTodayKey.Empty();
	m_szAppointmentDate.Empty();
	m_szColumnNameKey.Empty();

}
int CPACSReportOrderList::SetMode(int nMode){
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
/*void CPACSReportOrderList::OnFromDateChange(){
	
} */
/*void CPACSReportOrderList::OnFromDateSetfocus(){
	
} */
/*void CPACSReportOrderList::OnFromDateKillfocus(){
	
} */
int CPACSReportOrderList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSReportOrderList::OnToDateChange(){
	
} */
/*void CPACSReportOrderList::OnToDateSetfocus(){
	
} */
/*void CPACSReportOrderList::OnToDateKillfocus(){
	
} */
int CPACSReportOrderList::OnToDateCheckValue(){
	return 0;
} 
void CPACSReportOrderList::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSReportOrderList::OnObjectSelendok(){
	 
}
/*void CPACSReportOrderList::OnObjectSetfocus(){
	
}*/
/*void CPACSReportOrderList::OnObjectKillfocus(){
	
}*/
long CPACSReportOrderList::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return pMF->LoadObjectList(&m_wndObject, m_szObjectKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSReportOrderList::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSReportOrderList::OnOrderDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSReportOrderList::OnOrderDepartmentSelendok(){
	 
}
/*void CPACSReportOrderList::OnOrderDepartmentSetfocus(){
	
}*/
/*void CPACSReportOrderList::OnOrderDepartmentKillfocus(){
	
}*/
long CPACSReportOrderList::OnOrderDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_type IN ('DT', KB')"));
	return pMF->LoadDepartment(&m_wndOrderDepartment, m_szOrderDepartmentKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOrderDepartment.IsSearchKey() && !m_szOrderDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOrderDepartmentKey
};
	m_wndOrderDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSReportOrderList::OnOrderDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSReportOrderList::OnOrderRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSReportOrderList::OnOrderRoomSelendok(){
	 
}
/*void CPACSReportOrderList::OnOrderRoomSetfocus(){
	
}*/
/*void CPACSReportOrderList::OnOrderRoomKillfocus(){
	
}*/
long CPACSReportOrderList::OnOrderRoomLoadData(){
	UpdateData();
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOrderRoom.IsSearchKey() && !m_szOrderRoomKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szOrderRoomKey);
	};
	m_wndOrderRoom.DeleteAllItems(); 
	int nCount = 0;

	szWhere.AppendFormat(_T(" and hrl_active = 'Y'"));
	if (!m_szOrderDepartmentKey.IsEmpty())
	{ 
		szWhere.AppendFormat(_T(" and hrl_deptid = '%s'"), m_szOrderDepartmentKey);
	}	
	szSQL.Format(_T("SELECT hrl_uid as room_uid, hrl_id as id, hrl_name as name FROM hms_roomlist WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderRoom.AddItems(
			rs.GetValue(_T("room_uid")),
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSReportOrderList::OnOrderRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSReportOrderList::OnOrderDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSReportOrderList::OnOrderDoctorSelendok(){
	 
}
/*void CPACSReportOrderList::OnOrderDoctorSetfocus(){
	
}*/
/*void CPACSReportOrderList::OnOrderDoctorKillfocus(){
	
}*/
long CPACSReportOrderList::OnOrderDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_type IN ('KB', 'DT')"));
	return pMF->LoadUserList(&m_wndOrderDoctor, m_szOrderDoctorKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOrderDoctor.IsSearchKey() && !m_szOrderDoctorKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOrderDoctorKey
};
	m_wndOrderDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSReportOrderList::OnOrderDoctorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSReportOrderList::OnPACSTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSReportOrderList::OnPACSTypeSelendok(){
	 
}
/*void CPACSReportOrderList::OnPACSTypeSetfocus(){
	
}*/
/*void CPACSReportOrderList::OnPACSTypeKillfocus(){
	
}*/
long CPACSReportOrderList::OnPACSTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPACSType.IsSearchKey() && !m_szPACSTypeKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szPACSTypeKey);
	};
	m_wndPACSType.DeleteAllItems(); 
	int nCount = 0;
	szWhere.AppendFormat(_T(" and substr(hfg_id, 1, 2) IN ('B2', 'B3') and substr(hfg_id, 3, 1) <> '0'"));
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPACSType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSReportOrderList::OnPACSTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSReportOrderList::OnOrderDateChange(){
	
} */
/*void CPACSReportOrderList::OnOrderDateSetfocus(){
	
} */
/*void CPACSReportOrderList::OnOrderDateKillfocus(){
	
} */
int CPACSReportOrderList::OnOrderDateCheckValue(){
	return 0;
} 
void CPACSReportOrderList::OnMachineSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSReportOrderList::OnMachineSelendok(){
	 
}
/*void CPACSReportOrderList::OnMachineSetfocus(){
	
}*/
/*void CPACSReportOrderList::OnMachineKillfocus(){
	
}*/
long CPACSReportOrderList::OnMachineLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMachine.IsSearchKey() && !m_szMachineKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMachineKey
};
	m_wndMachine.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMachine.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSReportOrderList::OnMachineAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSReportOrderList::OnMachineDateChange(){
	
} */
/*void CPACSReportOrderList::OnMachineDateSetfocus(){
	
} */
/*void CPACSReportOrderList::OnMachineDateKillfocus(){
	
} */
int CPACSReportOrderList::OnMachineDateCheckValue(){
	return 0;
} 
/*void CPACSReportOrderList::OnResultDateChange(){
	
} */
/*void CPACSReportOrderList::OnResultDateSetfocus(){
	
} */
/*void CPACSReportOrderList::OnResultDateKillfocus(){
	
} */
int CPACSReportOrderList::OnResultDateCheckValue(){
	return 0;
} 
void CPACSReportOrderList::OnResultDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSReportOrderList::OnResultDoctorSelendok(){
	 
}
/*void CPACSReportOrderList::OnResultDoctorSetfocus(){
	
}*/
/*void CPACSReportOrderList::OnResultDoctorKillfocus(){
	
}*/
long CPACSReportOrderList::OnResultDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_type IN ('HA')"));
	return pMF->LoadUserList(&m_wndResultDoctor, m_szResultDoctorKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResultDoctor.IsSearchKey() && !m_szResultDoctorKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szResultDoctorKey
};
	m_wndResultDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResultDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSReportOrderList::OnResultDoctorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSReportOrderList::OnIsTodaySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSReportOrderList::OnIsTodaySelendok(){
	 
}
/*void CPACSReportOrderList::OnIsTodaySetfocus(){
	
}*/
/*void CPACSReportOrderList::OnIsTodayKillfocus(){
	
}*/
long CPACSReportOrderList::OnIsTodayLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndIsToday.DeleteAllItems();
	m_wndIsToday.AddItems(_T("Y"), _T("Có"), NULL);
	m_wndIsToday.AddItems(_T("N"), _T("Không"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIsToday.IsSearchKey() && !m_szIsTodayKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szIsTodayKey
};
	m_wndIsToday.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIsToday.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSReportOrderList::OnIsTodayAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSReportOrderList::OnAppointmentDateChange(){
	
} */
/*void CPACSReportOrderList::OnAppointmentDateSetfocus(){
	
} */
/*void CPACSReportOrderList::OnAppointmentDateKillfocus(){
	
} */
int CPACSReportOrderList::OnAppointmentDateCheckValue(){
	return 0;
} 
void CPACSReportOrderList::OnColumnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSReportOrderList::OnColumnNameSelendok(){
	 
}
/*void CPACSReportOrderList::OnColumnNameSetfocus(){
	
}*/
/*void CPACSReportOrderList::OnColumnNameKillfocus(){
	
}*/
long CPACSReportOrderList::OnColumnNameLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndColumnName.DeleteAllItems();
	m_wndColumnName.AddItems(_T("1"), _T("Loại CĐHA"), NULL);
	m_wndColumnName.AddItems(_T("2"), _T("Thời gian chỉ định"), NULL);
	m_wndColumnName.AddItems(_T("3"), _T("Thời gian kết quả"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndColumnName.IsSearchKey() && !m_szColumnNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szColumnNameKey
};
	m_wndColumnName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndColumnName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSReportOrderList::OnColumnNameAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSReportOrderList::OnExportSelect(){
	UpdateData();
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, szFilePath = _T("Exports\\Template\\MAU_DANHSACHBENHNHANDUOCXNCDHATHEONGAY.xls");
	int nRow = 0, nIdx = 1;

	if (!xls.Load(szFilePath))
	{
		CString szMsg;
		szMsg.Format(_T("Thiếu file %s"), szFilePath);
		ShowMessageBox(szMsg);
		return;
	}

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data."));
		return;
	}

	xls.SetWorksheet(0);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s")
		, CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm)
		, CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm)
	);
	nRow = 4;
	xls.SetCellText(0, nRow, tmpStr);

	nRow = 7;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT);
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			xls.SetCellText(i + 1, nRow, rs.GetValue(i), FMT_TEXT | FMT_WRAPING);
		}
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	szFilePath = _T("Exports\\DANHSACHBENHNHANDUOCXNCDHATHEONGAY.xls");
	xls.Save(szFilePath);
} 

CString CPACSReportOrderList::GetQueryString()
{
	CString szSQL, szWhere, szOrderBy;
	szWhere.Format(
		_T(" and hpc_orderdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T(" and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')")
	, m_szFromDate, m_szToDate);

	if (!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpc_object = %s"), m_szObjectKey);
	}

	if (!m_szOrderDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpc_deptid = '%s'"), m_szOrderDepartmentKey);
	}

	if (!m_szOrderRoomKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hrl_uid = '%s'"), m_szOrderRoomKey);
	}

	if (!m_szOrderDoctorKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpc_doctor = '%s'"), m_szOrderDoctorKey);
	}

	if (!m_szPACSTypeKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpc_groupid = '%s'"), m_szPACSTypeKey);
	}

	if (!m_szOrderDate.IsEmpty() && m_szOrderDate.Left(4) != _T("1752"))
	{
		szWhere.AppendFormat(_T(" "));
	}

	if (!m_szResultDate.IsEmpty() && m_szResultDate.Left(4) != _T("1752"))
	{
		szWhere.AppendFormat(_T(" and trunc(Nvl (hpcl_date, HPC_PERFORMDATE)) = trunc(to_date('%s', 'yyyy/mm/dd'))")
		, m_szResultDate);
	}

	if (!m_szResultDoctorKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and Nvl (hpcl_practitioner, hpc_practitioner) = '%s'"), m_szResultDoctorKey);
	}

	if (!m_szIsTodayKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and Trunc (hpc_orderdate) %s Trunc (Nvl (hpcl_date, HPC_PERFORMDATE))")
		, m_szIsTodayKey==_T("Y")?_T("="):_T("<>"));
	}

	szOrderBy.Format(_T(" ORDER BY hpc_orderdate"));
	if (!m_szColumnNameKey.IsEmpty())
	{
		szOrderBy.Format(_T(" ORDER BY "));
		if (m_szColumnNameKey == _T("1"))
		{
			szOrderBy.AppendFormat(_T(" hpc_groupid, hpcl_itemid, hpc_orderdate"));
		}
		if (m_szColumnNameKey == _T("2"))
		{
			szOrderBy.AppendFormat(_T(" hpc_orderdate, Nvl (hpcl_date, HPC_PERFORMDATE)"));
		}
		if (m_szColumnNameKey == _T("3"))
		{
			szOrderBy.AppendFormat(_T(" Nvl (hpcl_date, HPC_PERFORMDATE)"));
		}
	}

	szSQL.Format(
		_T("    SELECT hpc_docno AS so_ho_so,") \
		_T("           hpc_patientno AS ma_bn,") \
		_T("           Get_patientname (hpc_docno) AS ten_bn,") \
		_T("           To_char (p_birthdate, 'dd/mm/yyyy') AS ngay_sinh,") \
		_T("           p_sex_desc AS gioi_tinh,") \
		_T("           p_ethnic AS dan_toc,") \
		_T("           p_address AS dia_chi,") \
		_T("           p_contacttel AS so_dt,") \
		_T("           p_object_desc AS doi_tuong,") \
		_T("           Get_departmentname (hpc_deptid) AS khoa_chi_dinh,") \
		_T("           Hms_getroomname (hpc_deptid, hpc_roomid) AS phong_chi_dinh,") \
		_T("           Get_username (hpc_doctor) AS bs_chi_dinh,") \
		_T("           hfl_name AS muc_chi_dinh,") \
		_T("           To_char (hpc_orderdate, 'dd/mm/yyy hh24:mi') AS ngay_chi_dinh,") \
		_T("           NULL AS ma_may,") \
		_T("           NULL AS thoi_gian_thuc_hien_may,") \
		_T("           CASE WHEN hpcl_status = 'T' then To_char (Nvl (hpcl_date, HPC_PERFORMDATE), 'dd/mm/yyy hh24:mi') ELSE NULL END AS thoi_gian_kq,") \
		_T("           CASE WHEN hpcl_status = 'T' then get_username(Nvl (hpcl_practitioner, hpc_practitioner)) ELSE NULL END AS bs_doc_kq,") \
		_T("           CASE WHEN hpcl_status = 'T' and Trunc (hpc_orderdate) = Trunc (Nvl (hpcl_date, HPC_PERFORMDATE)) THEN N'X'") \
		_T("           ELSE NULL") \
		_T("           END AS trong_ngay,") \
		_T("           NULL AS ngay_gio_hen") \
		_T("      FROM HMS_PACSORDER") \
		_T(" LEFT JOIN HMS_PACSORDERLINE ON ( hpc_docno = hpcl_docno AND hpc_orderid = hpcl_orderid )") \
		_T(" LEFT JOIN hms_patient_view ON ( hpc_docno = p_docno )") \
		_T(" LEFT JOIN hms_fee_list ON ( hpcl_itemid = hfl_feeid )") \
		_T(" LEFT JOIN hms_roomlist ON (hrl_deptid = hpc_deptid and hrl_id = hpc_roomid)") \
		_T("     WHERE 1=1 %s AND") \
		_T("           hpc_status NOT IN ( 'O', 'C' ) AND") \
		_T("           hpcl_status NOT IN ( 'O', 'C' )")
		_T(" %s")
	, szWhere, szOrderBy);

	return szSQL;
}

int CPACSReportOrderList::OnAddPACSReportOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSReportOrderList::OnEditPACSReportOrderList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSReportOrderList::OnDeletePACSReportOrderList(){
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
 		OnCancelPACSReportOrderList();
 	}
	return 0;
}
int CPACSReportOrderList::OnSavePACSReportOrderList(){
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
 		//OnPACSReportOrderListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSReportOrderList::OnCancelPACSReportOrderList(){
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
int CPACSReportOrderList::OnPACSReportOrderListListLoadData(){
	return 0;
}
