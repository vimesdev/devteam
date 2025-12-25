#include "stdafx.h"
#include "HMSMainFrame.h"
#include "SYS_TaskManagerReport.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CSYS_TaskManagerReport *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSYS_TaskManagerReport* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CSYS_TaskManagerReport *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSYS_TaskManagerReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSYS_TaskManagerReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSYS_TaskManagerReport* )pWnd)->OnModuleSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnModuleSelendokFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnModuleSelendok();
}
/*static void _OnModuleSetfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnModuleKillfocus();
}*/
/*static void _OnModuleKillfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnModuleKillfocus();
}*/
static long _OnModuleLoadDataFnc(CWnd *pWnd){
	return ((CSYS_TaskManagerReport *)pWnd)->OnModuleLoadData();
}
/*static void _OnModuleAddNewFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnModuleAddNew();
}*/
static void _OnClientSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSYS_TaskManagerReport* )pWnd)->OnClientSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClientSelendokFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnClientSelendok();
}
/*static void _OnClientSetfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnClientKillfocus();
}*/
/*static void _OnClientKillfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnClientKillfocus();
}*/
static long _OnClientLoadDataFnc(CWnd *pWnd){
	return ((CSYS_TaskManagerReport *)pWnd)->OnClientLoadData();
}
/*static void _OnClientAddNewFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnClientAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSYS_TaskManagerReport* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CSYS_TaskManagerReport *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnTypeAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSYS_TaskManagerReport* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CSYS_TaskManagerReport *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnStatusAddNew();
}*/
static void _OnPrioritySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSYS_TaskManagerReport* )pWnd)->OnPrioritySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPrioritySelendokFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnPrioritySelendok();
}
/*static void _OnPrioritySetfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnPriorityKillfocus();
}*/
/*static void _OnPriorityKillfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnPriorityKillfocus();
}*/
static long _OnPriorityLoadDataFnc(CWnd *pWnd){
	return ((CSYS_TaskManagerReport *)pWnd)->OnPriorityLoadData();
}
/*static void _OnPriorityAddNewFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnPriorityAddNew();
}*/
static void _OnRequestSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSYS_TaskManagerReport* )pWnd)->OnRequestSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRequestSelendokFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnRequestSelendok();
}
/*static void _OnRequestSetfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnRequestKillfocus();
}*/
/*static void _OnRequestKillfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnRequestKillfocus();
}*/
static long _OnRequestLoadDataFnc(CWnd *pWnd){
	return ((CSYS_TaskManagerReport *)pWnd)->OnRequestLoadData();
}
/*static void _OnRequestAddNewFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnRequestAddNew();
}*/
static void _OnAssignSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSYS_TaskManagerReport* )pWnd)->OnAssignSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssignSelendokFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnAssignSelendok();
}
/*static void _OnAssignSetfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnAssignKillfocus();
}*/
/*static void _OnAssignKillfocusFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnAssignKillfocus();
}*/
static long _OnAssignLoadDataFnc(CWnd *pWnd){
	return ((CSYS_TaskManagerReport *)pWnd)->OnAssignLoadData();
}
/*static void _OnAssignAddNewFnc(CWnd *pWnd){
	((CSYS_TaskManagerReport *)pWnd)->OnAssignAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CSYS_TaskManagerReport *pVw = (CSYS_TaskManagerReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddSYS_TaskManagerReportFnc(CWnd *pWnd){
	 return ((CSYS_TaskManagerReport*)pWnd)->OnAddSYS_TaskManagerReport();
} 
static int _OnEditSYS_TaskManagerReportFnc(CWnd *pWnd){
	 return ((CSYS_TaskManagerReport*)pWnd)->OnEditSYS_TaskManagerReport();
} 
static int _OnDeleteSYS_TaskManagerReportFnc(CWnd *pWnd){
	 return ((CSYS_TaskManagerReport*)pWnd)->OnDeleteSYS_TaskManagerReport();
} 
static int _OnSaveSYS_TaskManagerReportFnc(CWnd *pWnd){
	 return ((CSYS_TaskManagerReport*)pWnd)->OnSaveSYS_TaskManagerReport();
} 
static int _OnCancelSYS_TaskManagerReportFnc(CWnd *pWnd){
	 return ((CSYS_TaskManagerReport*)pWnd)->OnCancelSYS_TaskManagerReport();
} 
CSYS_TaskManagerReport::CSYS_TaskManagerReport(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSYS_TaskManagerReport::~CSYS_TaskManagerReport(){
}
void CSYS_TaskManagerReport::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 305);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 220, 30, 300, 55);
	m_wndPeriodReport.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndModuleLabel.Create(this, _T("Module"), 10, 90, 90, 115);
	m_wndModule.Create(this,95, 90, 425, 115); 
	m_wndClientLabel.Create(this, _T("Client"), 10, 120, 90, 145);
	m_wndClient.Create(this,95, 120, 425, 145); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 150, 90, 175);
	m_wndType.Create(this,95, 150, 425, 175); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 180, 90, 205);
	m_wndStatus.Create(this,95, 180, 425, 205); 
	m_wndPriorityLabel.Create(this, _T("Priority"), 10, 210, 90, 235);
	m_wndPriority.Create(this,95, 210, 425, 235); 
	m_wndRequestLabel.Create(this, _T("Request"), 10, 240, 90, 265);
	m_wndRequest.Create(this,95, 240, 425, 265); 
	m_wndAssignLabel.Create(this, _T("Assign"), 10, 270, 90, 295);
	m_wndAssign.Create(this,95, 270, 425, 295); 
	m_wndExport.Create(this, _T("&Export"), 345, 310, 425, 335);

}
void CSYS_TaskManagerReport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndPeriodReport.SetCheckValue(true);
	m_wndPeriodReport.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndModule.SetCheckValue(true);
	m_wndModule.LimitText(1024);
	m_wndClient.SetCheckValue(true);
	m_wndClient.LimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndPriority.SetCheckValue(true);
	m_wndPriority.LimitText(35);
	m_wndRequest.SetCheckValue(true);
	m_wndRequest.LimitText(35);
	m_wndAssign.SetCheckValue(true);
	m_wndAssign.LimitText(1024);

	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPeriodReport.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndModule.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndClient.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClient.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndPriority.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPriority.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndRequest.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndRequest.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndAssign.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndAssign.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CSYS_TaskManagerReport::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	m_wndModule.SetEvent(WE_SELENDOK, _OnModuleSelendokFnc);
	//m_wndModule.SetEvent(WE_SETFOCUS, _OnModuleSetfocusFnc);
	//m_wndModule.SetEvent(WE_KILLFOCUS, _OnModuleKillfocusFnc);
	m_wndModule.SetEvent(WE_SELCHANGE, _OnModuleSelectChangeFnc);
	m_wndModule.SetEvent(WE_LOADDATA, _OnModuleLoadDataFnc);
	//m_wndModule.SetEvent(WE_ADDNEW, _OnModuleAddNewFnc);
	m_wndClient.SetEvent(WE_SELENDOK, _OnClientSelendokFnc);
	//m_wndClient.SetEvent(WE_SETFOCUS, _OnClientSetfocusFnc);
	//m_wndClient.SetEvent(WE_KILLFOCUS, _OnClientKillfocusFnc);
	m_wndClient.SetEvent(WE_SELCHANGE, _OnClientSelectChangeFnc);
	m_wndClient.SetEvent(WE_LOADDATA, _OnClientLoadDataFnc);
	//m_wndClient.SetEvent(WE_ADDNEW, _OnClientAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPriority.SetEvent(WE_SELENDOK, _OnPrioritySelendokFnc);
	//m_wndPriority.SetEvent(WE_SETFOCUS, _OnPrioritySetfocusFnc);
	//m_wndPriority.SetEvent(WE_KILLFOCUS, _OnPriorityKillfocusFnc);
	m_wndPriority.SetEvent(WE_SELCHANGE, _OnPrioritySelectChangeFnc);
	m_wndPriority.SetEvent(WE_LOADDATA, _OnPriorityLoadDataFnc);
	//m_wndPriority.SetEvent(WE_ADDNEW, _OnPriorityAddNewFnc);
	m_wndRequest.SetEvent(WE_SELENDOK, _OnRequestSelendokFnc);
	//m_wndRequest.SetEvent(WE_SETFOCUS, _OnRequestSetfocusFnc);
	//m_wndRequest.SetEvent(WE_KILLFOCUS, _OnRequestKillfocusFnc);
	m_wndRequest.SetEvent(WE_SELCHANGE, _OnRequestSelectChangeFnc);
	m_wndRequest.SetEvent(WE_LOADDATA, _OnRequestLoadDataFnc);
	//m_wndRequest.SetEvent(WE_ADDNEW, _OnRequestAddNewFnc);
	m_wndAssign.SetEvent(WE_SELENDOK, _OnAssignSelendokFnc);
	//m_wndAssign.SetEvent(WE_SETFOCUS, _OnAssignSetfocusFnc);
	//m_wndAssign.SetEvent(WE_KILLFOCUS, _OnAssignKillfocusFnc);
	m_wndAssign.SetEvent(WE_SELCHANGE, _OnAssignSelectChangeFnc);
	m_wndAssign.SetEvent(WE_LOADDATA, _OnAssignLoadDataFnc);
	//m_wndAssign.SetEvent(WE_ADDNEW, _OnAssignAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddSYS_TaskManagerReportFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSYS_TaskManagerReportFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSYS_TaskManagerReportFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSYS_TaskManagerReportFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSYS_TaskManagerReportFnc, 0, 'T', VK_CONTROL);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CSYS_TaskManagerReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndModule.GetDlgCtrlID(), m_szModuleKey);
	DDX_TextEx(pDX, m_wndClient.GetDlgCtrlID(), m_szClientKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndPriority.GetDlgCtrlID(), m_szPriorityKey);
	DDX_TextEx(pDX, m_wndRequest.GetDlgCtrlID(), m_szRequestKey);
	DDX_TextEx(pDX, m_wndAssign.GetDlgCtrlID(), m_szAssignKey);

}
void CSYS_TaskManagerReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSYS_TaskManagerReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSYS_TaskManagerReport::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szModuleKey.Empty();
	m_szClientKey.Empty();
	m_szTypeKey.Empty();
	m_szStatusKey.Empty();
	m_szPriorityKey.Empty();
	m_szRequestKey.Empty();
	m_szAssignKey.Empty();

}
int CSYS_TaskManagerReport::SetMode(int nMode){
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
/*void CSYS_TaskManagerReport::OnYearChange(){
	
} */
/*void CSYS_TaskManagerReport::OnYearSetfocus(){
	
} */
/*void CSYS_TaskManagerReport::OnYearKillfocus(){
	
} */
int CSYS_TaskManagerReport::OnYearCheckValue(){
	return 0;
} 
void CSYS_TaskManagerReport::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSYS_TaskManagerReport::OnPeriodReportSelendok(){
	CString tmpStr;
	CDate date;
	UpdateData(true);
	int nMonth = ToInt(m_szPeriodReportKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		date.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, date.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  date.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());		
	}	
	UpdateData(false);	
}
/*void CSYS_TaskManagerReport::OnPeriodReportSetfocus(){
	
}*/
/*void CSYS_TaskManagerReport::OnPeriodReportKillfocus(){
	
}*/
long CSYS_TaskManagerReport::OnPeriodReportLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPeriodReport.IsSearchKey() && ToInt(m_szPeriodReportKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szPeriodReportKey));
	};
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
/*void CSYS_TaskManagerReport::OnPeriodReportAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CSYS_TaskManagerReport::OnFromDateChange(){
	
} */
/*void CSYS_TaskManagerReport::OnFromDateSetfocus(){
	
} */
/*void CSYS_TaskManagerReport::OnFromDateKillfocus(){
	
} */
int CSYS_TaskManagerReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CSYS_TaskManagerReport::OnToDateChange(){
	
} */
/*void CSYS_TaskManagerReport::OnToDateSetfocus(){
	
} */
/*void CSYS_TaskManagerReport::OnToDateKillfocus(){
	
} */
int CSYS_TaskManagerReport::OnToDateCheckValue(){
	return 0;
} 
void CSYS_TaskManagerReport::OnModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSYS_TaskManagerReport::OnModuleSelendok(){
	 
}
/*void CSYS_TaskManagerReport::OnModuleSetfocus(){
	
}*/
/*void CSYS_TaskManagerReport::OnModuleKillfocus(){
	
}*/
long CSYS_TaskManagerReport::OnModuleLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModule.IsSearchKey() && !m_szModuleKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szModuleKey);
};
	m_wndModule.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_module_type' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndModule.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSYS_TaskManagerReport::OnModuleAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSYS_TaskManagerReport::OnClientSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSYS_TaskManagerReport::OnClientSelendok(){
	 
}
/*void CSYS_TaskManagerReport::OnClientSetfocus(){
	
}*/
/*void CSYS_TaskManagerReport::OnClientKillfocus(){
	
}*/
long CSYS_TaskManagerReport::OnClientLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClient.IsSearchKey() && !m_szClientKey.IsEmpty()){
	 szWhere.Format(_T(" and cc_client_id='%s' "), m_szClientKey);
};
	m_wndClient.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT cc_client_id as id, cc_name as name FROM crm_client WHERE 1=1 %s ORDER BY cc_client_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClient.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSYS_TaskManagerReport::OnClientAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSYS_TaskManagerReport::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSYS_TaskManagerReport::OnTypeSelendok(){
	 
}
/*void CSYS_TaskManagerReport::OnTypeSetfocus(){
	
}*/
/*void CSYS_TaskManagerReport::OnTypeKillfocus(){
	
}*/
long CSYS_TaskManagerReport::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and t_type_id='%s' "), m_szTypeKey);
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT t_type_id as id, t_description as name FROM task_type WHERE 1=1 %s ORDER BY t_line "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSYS_TaskManagerReport::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSYS_TaskManagerReport::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSYS_TaskManagerReport::OnStatusSelendok(){
	 
}
/*void CSYS_TaskManagerReport::OnStatusSetfocus(){
	
}*/
/*void CSYS_TaskManagerReport::OnStatusKillfocus(){
	
}*/
long CSYS_TaskManagerReport::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and s_status_id='%s' "), m_szStatusKey);
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT s_status_id as id, s_description as name FROM task_status WHERE 1=1 %s ORDER BY s_line "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSYS_TaskManagerReport::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSYS_TaskManagerReport::OnPrioritySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSYS_TaskManagerReport::OnPrioritySelendok(){
	 
}
/*void CSYS_TaskManagerReport::OnPrioritySetfocus(){
	
}*/
/*void CSYS_TaskManagerReport::OnPriorityKillfocus(){
	
}*/
long CSYS_TaskManagerReport::OnPriorityLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPriority.IsSearchKey() && !m_szPriorityKey.IsEmpty()){
	 szWhere.Format(_T(" and p_priority_id='%s' "), m_szPriorityKey);
};
	m_wndPriority.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT p_priority_id as id, p_description as name FROM task_priority WHERE 1=1 %s ORDER BY p_line "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPriority.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSYS_TaskManagerReport::OnPriorityAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSYS_TaskManagerReport::OnRequestSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSYS_TaskManagerReport::OnRequestSelendok(){
	 
}
/*void CSYS_TaskManagerReport::OnRequestSetfocus(){
	
}*/
/*void CSYS_TaskManagerReport::OnRequestKillfocus(){
	
}*/
long CSYS_TaskManagerReport::OnRequestLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRequest.IsSearchKey() && !m_szRequestKey.IsEmpty()){
	 szWhere.Format(_T(" and su_userid='%s' "), m_szRequestKey);
};
	m_wndRequest.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE 1=1 and su_deptid='VIMES' %s ORDER BY su_userid "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRequest.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSYS_TaskManagerReport::OnRequestAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSYS_TaskManagerReport::OnAssignSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSYS_TaskManagerReport::OnAssignSelendok(){
	 
}
/*void CSYS_TaskManagerReport::OnAssignSetfocus(){
	
}*/
/*void CSYS_TaskManagerReport::OnAssignKillfocus(){
	
}*/
long CSYS_TaskManagerReport::OnAssignLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAssign.IsSearchKey() && !m_szAssignKey.IsEmpty()){
	 szWhere.Format(_T(" and su_userid='%s' "), m_szAssignKey);
};
	m_wndAssign.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE 1=1 and su_deptid='VIMES' %s ORDER BY su_userid "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssign.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSYS_TaskManagerReport::OnAssignAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSYS_TaskManagerReport::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CRecord rs1(&pMF->m_db);	CRecord rs2(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szTicket;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow = 0, nRow2 = 0, nRow3 = 0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 4);	xls.SetColumnWidth(1, 8);	xls.SetColumnWidth(2, 8);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 8);	xls.SetColumnWidth(6, 8);	xls.SetColumnWidth(7, 8);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 20);	xls.SetColumnWidth(10, 70);	xls.SetColumnWidth(11, 30);	xls.SetColumnWidth(12, 8);	xls.SetColumnWidth(13, 8);	xls.SetColumnWidth(14, 20);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 0, _T("VIMES"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O TI\x1EBEN \x110\x1ED8 \x43\xD4NG VI\x1EC6\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(1, 4, _T("Ti\x63k\x65tI\x44"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("Ng\x1B0\x1EDDi t\x1EA1o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("Ng\xE0y t\x1EA1o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Lo\x1EA1i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("T\xEAn mo\x64ul\x65"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("T\xEAn \x63li\x65nt"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("M\x1EE9\x63 y\xEAu ti\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("Tr\x1EA1ng th\xE1i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("T\xEAn ti\x63k\x65t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 4, _T("\x44i\x1EC5n gi\x1EA3i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 4, _T("Ghi \x63h\xFA \x62\x1EDFi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 4, _T("\x43h\x1EC9 \x111\x1ECBnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(14, 4, _T("Ghi \x63h\xFA \x63h\x1EC9 \x111\x1ECBnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 0);	xls.SetMerge(0, 0, 1, 3);	xls.SetMerge(1, 1, 1, 3);	xls.SetMerge(2, 2, 0, 14);	xls.SetMerge(3, 3, 0, 14);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER| FMT_WRAPING);		rs.GetValue(_T("ticket_id"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);		rs.GetValue(_T("create_by"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);		rs.GetValue(_T("create_date"), tmpStr);		xls.SetCellText(nCol+3, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT| FMT_WRAPING);		rs.GetValue(_T("type_name"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);		rs.GetValue(_T("module_name"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);		rs.GetValue(_T("client_name"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);		rs.GetValue(_T("priority_name"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);		rs.GetValue(_T("status"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);		rs.GetValue(_T("summary_name"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);		rs.GetValue(_T("description"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);		rs.GetValue(_T("ticket_id"), szTicket);		nRow2 = nRow;		szSQL.Format(_T(" SELECT") \
			_T(" c_description AS description,") \
			_T(" c_createdby AS createdby") \
			_T(" FROM task_comment WHERE c_ticket_id='%s' ORDER BY c_createddate"), szTicket);		rs1.ExecSQL(szSQL);		if (rs1.IsEOF())			nRow++;		while(!rs1.IsEOF())
		{				rs1.GetValue(_T("description"), tmpStr);			xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);			rs1.GetValue(_T("createdby"), tmpStr);			xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
			rs1.MoveNext();
			nRow++;
		}		szSQL.Format(_T(" SELECT ") \
			_T(" a_userid AS userid,") \
			_T(" a_note AS note") \
			_T(" FROM task_assign WHERE a_ticket_id='%s' ORDER BY a_userid"), szTicket);		rs2.ExecSQL(szSQL);		if (rs2.IsEOF())			nRow2++;		while(!rs2.IsEOF())
		{				rs2.GetValue(_T("userid"), tmpStr);			xls.SetCellText(nCol+13, nRow2, tmpStr, FMT_TEXT| FMT_WRAPING);			rs2.GetValue(_T("note"), tmpStr);			xls.SetCellText(nCol+14, nRow2, tmpStr, FMT_TEXT| FMT_WRAPING);
			rs2.MoveNext();
			nRow2++;
		}		if(nRow2 > nRow)			nRow = nRow2;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\vimestiendocongviec.xls"));
} 
int CSYS_TaskManagerReport::OnAddSYS_TaskManagerReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSYS_TaskManagerReport::OnEditSYS_TaskManagerReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSYS_TaskManagerReport::OnDeleteSYS_TaskManagerReport(){
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
 		OnCancelSYS_TaskManagerReport();
 	}
	return 0;
}
int CSYS_TaskManagerReport::OnSaveSYS_TaskManagerReport(){
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
 		//OnSYS_TaskManagerReportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSYS_TaskManagerReport::OnCancelSYS_TaskManagerReport(){
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
int CSYS_TaskManagerReport::OnSYS_TaskManagerReportListLoadData(){
	return 0;
}
CString CSYS_TaskManagerReport::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szList;

	if(!m_szModuleKey.IsEmpty())
		szWhere.AppendFormat(_T("AND j.t_module_id = '%s'"), m_szModuleKey);
	if(!m_szClientKey.IsEmpty())
		szWhere.AppendFormat(_T("AND j.t_client_id = '%s'"), m_szClientKey);
	if(!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T("AND j.t_type_id = '%s'"), m_szTypeKey);
	if(!m_szStatusKey.IsEmpty())
		szWhere.AppendFormat(_T("AND j.t_status = '%s'"), m_szStatusKey);
	if(!m_szPriorityKey.IsEmpty())
		szWhere.AppendFormat(_T("AND j.t_priority = '%s'"), m_szPriorityKey);
	if(!m_szRequestKey.IsEmpty())
		szWhere.AppendFormat(_T("AND t_createdby = '%s'"), m_szRequestKey);
	if(!m_szAssignKey.IsEmpty())
		szWhere.AppendFormat(_T("AND t_ticket_id IN(SELECT a_ticket_id FROM task_assign WHERE a_userid='%s')"), m_szAssignKey);

	szSQL.Format(_T(" SELECT") \
		_T(" t_ticket_id AS ticket_id,") \
		_T(" t_createdby AS create_by,") \
		_T(" t_createddate AS create_date,") \
		_T(" (SELECT t_description FROM task_type i WHERE j.t_type_id = i.t_type_id) AS type_name,") \
		_T(" (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_module_type' AND j.t_module_id = ss_code) AS module_name,") \
		_T(" (SELECT cc_name FROM crm_client WHERE j.t_client_id = cc_client_id) AS client_name,") \
		_T(" (SELECT p_description FROM task_priority WHERE j.t_priority = p_priority_id) AS priority_name,") \
		_T(" (SELECT s_description FROM task_status WHERE j.t_status = s_status_id) AS status,") \
		_T(" t_summary AS summary_name,") \
		_T(" t_description AS description") \
		_T(" FROM task_ticket j") \
		_T(" WHERE t_isactive='Y'") \
		_T(" AND t_request BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" ORDER BY t_module_id, t_request"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}