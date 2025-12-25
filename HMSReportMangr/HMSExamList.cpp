#include "stdafx.h"
#include "ReportDocument.h"
#include "HMSExamList.h"
#include "MainFrm.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExamList *)pWnd)->OnToDateCheckValue();
} 
static void _OnZoneSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamList* )pWnd)->OnZoneSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnZoneSelendokFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnZoneSelendok();
}
/*static void _OnZoneSetfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnZoneKillfocus();
}*/
/*static void _OnZoneKillfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnZoneKillfocus();
}*/
static long _OnZoneLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamList *)pWnd)->OnZoneLoadData();
}
/*static void _OnZoneAddNewFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnZoneAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamList* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamList *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnRoomAddNew();
}*/
static void _OnDiagnosisSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamList* )pWnd)->OnDiagnosisSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDiagnosisSelendokFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnDiagnosisSelendok();
}
/*static void _OnDiagnosisSetfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnDiagnosisKillfocus();
}*/
/*static void _OnDiagnosisKillfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnDiagnosisKillfocus();
}*/
static long _OnDiagnosisLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamList *)pWnd)->OnDiagnosisLoadData();
}
/*static void _OnDiagnosisAddNewFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnDiagnosisAddNew();
}*/
static void _OnTestSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamList* )pWnd)->OnTestSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestSelendokFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnTestSelendok();
}
/*static void _OnTestSetfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnTestKillfocus();
}*/
/*static void _OnTestKillfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnTestKillfocus();
}*/
static long _OnTestLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamList *)pWnd)->OnTestLoadData();
}
/*static void _OnTestAddNewFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnTestAddNew();
}*/
static void _OnFromPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamList* )pWnd)->OnFromPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromPlaceSelendokFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnFromPlaceSelendok();
}
/*static void _OnFromPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnFromPlaceKillfocus();
}*/
/*static void _OnFromPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnFromPlaceKillfocus();
}*/
static long _OnFromPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamList *)pWnd)->OnFromPlaceLoadData();
}
/*static void _OnFromPlaceAddNewFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnFromPlaceAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamList* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamList *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnObjectAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamList* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamList *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnDoctorAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnStatusAddNew();
}*/
static void _OnSuggestionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExamList* )pWnd)->OnSuggestionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSuggestionSelendokFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnSuggestionSelendok();
}
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnSuggestionKillfocus();
}*/
/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnSuggestionKillfocus();
}*/
static long _OnSuggestionLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamList *)pWnd)->OnSuggestionLoadData();
}
/*static void _OnSuggestionAddNewFnc(CWnd *pWnd){
	((CHMSExamList *)pWnd)->OnSuggestionAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSExamList *pVw = (CHMSExamList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSExamList *pVw = (CHMSExamList *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExamList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExamList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExamList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExamList*)pWnd)->OnListDeleteItem();
} 
CHMSExamList::CHMSExamList(){

	m_nDlgWidth = 1015;
	m_nDlgHeight = 645;
	SetDefaultValues();
}
CHMSExamList::~CHMSExamList(){
}
void CHMSExamList::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndZoneLabel.Create(this, _T("Zone"), 430, 30, 510, 55);
	m_wndFilterGroup.Create(this, _T("Filter Group"), 5, 5, 1010, 150);
	m_wndZone.Create(this,515, 30, 715, 55); 
	m_wndRoomLabel.Create(this, _T("Room"), 720, 30, 800, 55);
	m_wndRoom.Create(this,805, 30, 1005, 55); 
	m_wndDiagnosisLabel.Create(this, _T("Diagnosis"), 10, 60, 90, 85);
	m_wndDiagnosis.Create(this,95, 60, 425, 85); 
	m_wndTestLabel.Create(this, _T("Test"), 430, 60, 510, 85);
	m_wndTest.Create(this,515, 60, 1005, 85); 
	m_wndFromPlaceLabel.Create(this, _T("From place"), 10, 90, 90, 115);
	m_wndFromPlace.Create(this,95, 90, 425, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 430, 90, 510, 115);
	m_wndObject.Create(this,515, 90, 715, 115); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 720, 90, 800, 115);
	m_wndDoctor.Create(this,805, 90, 1005, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 120, 90, 145);
	m_wndStatus.Create(this,95, 120, 220, 145); 
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 225, 120, 305, 145);
	m_wndSuggestion.Create(this,310, 120, 715, 145); 
	m_wndPrint.Create(this, _T("&Print"), 840, 120, 920, 145);
	m_wndExport.Create(this, _T("&Export"), 925, 120, 1005, 145);
	//m_wndList.Create(this,5, 155, 1010, 635); 

}
void CHMSExamList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndZone.SetCheckValue(true);
	m_wndZone.LimitText(35);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);
	m_wndDiagnosis.SetCheckValue(true);
	m_wndDiagnosis.LimitText(35);
	m_wndTest.SetCheckValue(true);
	m_wndTest.LimitText(35);
	m_wndFromPlace.SetCheckValue(true);
	m_wndFromPlace.LimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndSuggestion.SetCheckValue(true);
	m_wndSuggestion.LimitText(35);


	m_wndZone.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndZone.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDiagnosis.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDiagnosis.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndTest.Format(3, 2);
	m_wndTest.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndTest.InsertColumn(1, _T("ID"), CFMT_TEXT, 80);
	m_wndTest.InsertColumn(2, _T("Name"), CFMT_TEXT, 150);


	m_wndFromPlace.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFromPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSuggestion.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSuggestion.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



}
void CHMSExamList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndZone.SetEvent(WE_SELENDOK, _OnZoneSelendokFnc);
	//m_wndZone.SetEvent(WE_SETFOCUS, _OnZoneSetfocusFnc);
	//m_wndZone.SetEvent(WE_KILLFOCUS, _OnZoneKillfocusFnc);
	m_wndZone.SetEvent(WE_SELCHANGE, _OnZoneSelectChangeFnc);
	m_wndZone.SetEvent(WE_LOADDATA, _OnZoneLoadDataFnc);
	//m_wndZone.SetEvent(WE_ADDNEW, _OnZoneAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndDiagnosis.SetEvent(WE_SELENDOK, _OnDiagnosisSelendokFnc);
	//m_wndDiagnosis.SetEvent(WE_SETFOCUS, _OnDiagnosisSetfocusFnc);
	//m_wndDiagnosis.SetEvent(WE_KILLFOCUS, _OnDiagnosisKillfocusFnc);
	m_wndDiagnosis.SetEvent(WE_SELCHANGE, _OnDiagnosisSelectChangeFnc);
	m_wndDiagnosis.SetEvent(WE_LOADDATA, _OnDiagnosisLoadDataFnc);
	//m_wndDiagnosis.SetEvent(WE_ADDNEW, _OnDiagnosisAddNewFnc);
	m_wndTest.SetEvent(WE_SELENDOK, _OnTestSelendokFnc);
	//m_wndTest.SetEvent(WE_SETFOCUS, _OnTestSetfocusFnc);
	//m_wndTest.SetEvent(WE_KILLFOCUS, _OnTestKillfocusFnc);
	m_wndTest.SetEvent(WE_SELCHANGE, _OnTestSelectChangeFnc);
	m_wndTest.SetEvent(WE_LOADDATA, _OnTestLoadDataFnc);
	//m_wndTest.SetEvent(WE_ADDNEW, _OnTestAddNewFnc);
	m_wndFromPlace.SetEvent(WE_SELENDOK, _OnFromPlaceSelendokFnc);
	//m_wndFromPlace.SetEvent(WE_SETFOCUS, _OnFromPlaceSetfocusFnc);
	//m_wndFromPlace.SetEvent(WE_KILLFOCUS, _OnFromPlaceKillfocusFnc);
	m_wndFromPlace.SetEvent(WE_SELCHANGE, _OnFromPlaceSelectChangeFnc);
	m_wndFromPlace.SetEvent(WE_LOADDATA, _OnFromPlaceLoadDataFnc);
	//m_wndFromPlace.SetEvent(WE_ADDNEW, _OnFromPlaceAddNewFnc);
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
	m_wndSuggestion.SetEvent(WE_SELENDOK, _OnSuggestionSelendokFnc);
	//m_wndSuggestion.SetEvent(WE_SETFOCUS, _OnSuggestionSetfocusFnc);
	//m_wndSuggestion.SetEvent(WE_KILLFOCUS, _OnSuggestionKillfocusFnc);
	m_wndSuggestion.SetEvent(WE_SELCHANGE, _OnSuggestionSelectChangeFnc);
	m_wndSuggestion.SetEvent(WE_LOADDATA, _OnSuggestionLoadDataFnc);
	//m_wndSuggestion.SetEvent(WE_ADDNEW, _OnSuggestionAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CHMSExamList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndZone.GetDlgCtrlID(), m_szZoneKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndDiagnosis.GetDlgCtrlID(), m_szDiagnosisKey);
	DDX_TextEx(pDX, m_wndTest.GetDlgCtrlID(), m_szTestKey);
	DDX_TextEx(pDX, m_wndFromPlace.GetDlgCtrlID(), m_szFromPlaceKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestionKey);

}
void CHMSExamList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szZoneKey.Empty();
	m_szRoomKey.Empty();
	m_szDiagnosisKey.Empty();
	m_szTestKey.Empty();
	m_szFromPlaceKey.Empty();
	m_szObjectKey.Empty();
	m_szDoctorKey.Empty();
	m_szStatusKey.Empty();
	m_szSuggestionKey.Empty();

}
int CHMSExamList::SetMode(int nMode){
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
/*void CHMSExamList::OnFromDateChange(){
	
} */
/*void CHMSExamList::OnFromDateSetfocus(){
	
} */
/*void CHMSExamList::OnFromDateKillfocus(){
	
} */
int CHMSExamList::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSExamList::OnToDateChange(){
	
} */
/*void CHMSExamList::OnToDateSetfocus(){
	
} */
/*void CHMSExamList::OnToDateKillfocus(){
	
} */
int CHMSExamList::OnToDateCheckValue(){
	return 0;
} 
void CHMSExamList::OnZoneSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamList::OnZoneSelendok(){
	 
}
/*void CHMSExamList::OnZoneSetfocus(){
	
}*/
/*void CHMSExamList::OnZoneKillfocus(){
	
}*/
long CHMSExamList::OnZoneLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndZone.IsSearchKey() && !m_szZoneKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szZoneKey);
	}
	m_wndZone.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type = 'KB' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndZone.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExamList::OnZoneAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExamList::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamList::OnRoomSelendok(){
	 
}
/*void CHMSExamList::OnRoomSetfocus(){
	
}*/
/*void CHMSExamList::OnRoomKillfocus(){
	
}*/
long CHMSExamList::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.Format(_T(" and hrl_id='%s' "), m_szRoomKey);
	}
	if (!m_szZoneKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hrl_deptid = '%s'"), m_szZoneKey);		
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExamList::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExamList::OnDiagnosisSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamList::OnDiagnosisSelendok(){
	 
}
/*void CHMSExamList::OnDiagnosisSetfocus(){
	
}*/
/*void CHMSExamList::OnDiagnosisKillfocus(){
	
}*/
long CHMSExamList::OnDiagnosisLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nIdx = 1;
	szWhere.Format(_T(" AND he_examdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"),
		m_szFromDate, m_szToDate);
	m_wndDiagnosis.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT distinct hd_diagnostic as name ") \
				 _T("FROM hms_doc ") \
				 _T("LEFT JOIN hms_exam ON (he_docno = hd_docno)") \
				 _T("WHERE hd_status = 'T' %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosis.AddItems(
			int2str(nIdx++), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExamList::OnDiagnosisAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExamList::OnTestSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamList::OnTestSelendok(){
	 
}
/*void CHMSExamList::OnTestSetfocus(){
	
}*/
/*void CHMSExamList::OnTestKillfocus(){
	
}*/
long CHMSExamList::OnTestLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nIdx = 1;
	if(m_wndTest.IsSearchKey() && !m_szTestKey.IsEmpty()){
		szWhere.Format(_T(" and item_id='%s' "), m_szTestKey);
	}
	szWhere.AppendFormat(_T(" AND order_date BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"),
				m_szFromDate, m_szToDate);
	m_wndTest.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT distinct item_id, hfl_name name ") \
				 _T("FROM(") \
				 _T(" SELECT hpcl_itemid item_id, hpc_orderdate order_date ") \
				 _T(" FROM hms_testorder ") \
				 _T(" LEFT JOIN hms_testorderline ON (hpc_orderid = hpcl_orderid) ") \
				 _T(" WHERE hpcl_hasfee = 'Y'") \
				 _T(" UNION ALL ") \
				 _T(" SELECT hpcl_itemid, hpc_orderdate ") \
				 _T(" FROM hms_pacsorder") \
				 _T(" LEFT JOIN hms_pacsorderline ON (hpc_orderid = hpcl_orderid) ") \
				 _T(" WHERE hpcl_hasfee = 'Y')") \
				 _T("LEFT JOIN hms_fee_list ON (hfl_feeid = item_id) ") \
				 _T("WHERE 1=1 %s ORDER BY item_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTest.AddItems(
			int2str(nIdx++),
			rs.GetValue(_T("item_id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExamList::OnTestAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExamList::OnFromPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamList::OnFromPlaceSelendok(){
	 
}
/*void CHMSExamList::OnFromPlaceSetfocus(){
	
}*/
/*void CHMSExamList::OnFromPlaceKillfocus(){
	
}*/
long CHMSExamList::OnFromPlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromPlace.IsSearchKey() && !m_szFromPlaceKey.IsEmpty()){
		szWhere.Format(_T(" and hh_id='%s' "), m_szFromPlaceKey);
	}
	m_wndFromPlace.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hh_id as id, hh_name as name FROM hms_hospital WHERE hh_isactive2 = 'Y' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromPlace.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExamList::OnFromPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExamList::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamList::OnObjectSelendok(){
	 
}
/*void CHMSExamList::OnObjectSetfocus(){
	
}*/
/*void CHMSExamList::OnObjectKillfocus(){
	
}*/
long CHMSExamList::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
	}
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object WHERE 1=1 %s ORDER BY cast(ho_id as integer) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExamList::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExamList::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamList::OnDoctorSelendok(){
	 
}
/*void CHMSExamList::OnDoctorSetfocus(){
	
}*/
/*void CHMSExamList::OnDoctorKillfocus(){
	
}*/
long CHMSExamList::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" and su_userid='%s' "), m_szDoctorKey);
	}
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name ") \
				 _T("FROM sys_user ") \
				 _T("WHERE su_groupid = 'D' AND (su_deptid IN ('C1.1', 'C1.2', 'C1.3') OR su_hms_xdept IN ('C1.1', 'C1.2', 'C1.3')) %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExamList::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExamList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamList::OnStatusSelendok(){
	 
}
/*void CHMSExamList::OnStatusSetfocus(){
	
}*/
/*void CHMSExamList::OnStatusKillfocus(){
	
}*/
long CHMSExamList::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" and ss_id='%s' "), m_szStatusKey);
	}
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE 1=1 AND ss_id = 'hms_doc_status' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExamList::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExamList::OnSuggestionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExamList::OnSuggestionSelendok(){
	 
}
/*void CHMSExamList::OnSuggestionSetfocus(){
	
}*/
/*void CHMSExamList::OnSuggestionKillfocus(){
	
}*/
long CHMSExamList::OnSuggestionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSuggestion.IsSearchKey() && !m_szSuggestionKey.IsEmpty()){
		szWhere.Format(_T(" and ss_id='%s' "), m_szSuggestionKey);
	}
	m_wndSuggestion.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE 1=1 AND ss_id = 'hms_suggestion' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSuggestion.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExamList::OnSuggestionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExamList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	CString szSQL, tmpStr, szDate, szOldDoc, szNewDoc, szNewGroup, szOldGroup;
	int nIdx = 1;
	CStringArray arrTestGrp;
	if (!rpt.Init(_T("Reports/HMS/HE_DANHSACHBENHNHANKHAMBENHTH.RPT")))
		return;
	szSQL = GetQueryString_print();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PHONG"));
	rptHeader->SetValue(_T("HospitalName"), _T("\x42V TW Q\x110 \x31\x30\x38"));
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
			CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("patient_group"), szNewGroup);
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				tmpStr = szNewGroup;
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}
			szOldGroup = szNewGroup;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			tmpStr.Format(rs.GetValue(_T("yob")));
			rptDetail->SetValue(_T("4"),  CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("object_name")));		
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("diagnosis")));
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("xn")));
			rptDetail->SetValue(_T("8"), rs.GetValue(_T("cd")));
			rptDetail->SetValue(_T("9"), rs.GetValue(_T("tdcn")));
			rptDetail->SetValue(_T("10"), rs.GetValue(_T("operation_name")));
			rptDetail->SetValue(_T("11"), rs.GetValue(_T("product_list")));
			rptDetail->SetValue(_T("12"), rs.GetValue(_T("go_home")));
			rptDetail->SetValue(_T("13"), rs.GetValue(_T("transfer")));
			rptDetail->SetValue(_T("14"), rs.GetValue(_T("admit")));
		}
		rs.MoveNext();
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void CHMSExamList::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	int nCol = 0, nRow = 0, nCount = 0, nIdx = 1, nTestCol = 0;
	CString tmpStr, szSQL, szOldDoc, szNewDoc, szNewGroup, szOldGroup;
	CStringArray arrTestGrp;
	CRecord rs(&pMF->m_db);
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), 4098, true);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW Q\x110 \x31\x30\x38"), 4098, true);
	xls.SetCellText(0, 2, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N KH\xC1M \x42\x1EC6NH"), 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), m_szFromDate, m_szToDate);
	xls.SetCellText(0, 3, tmpStr, 4098); 
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 15);
	xls.SetCellMergedRows(0, 4, 2);
	xls.SetCellMergedRows(1, 4, 2);
	xls.SetCellMergedRows(2, 4, 2);
	xls.SetCellMergedRows(3, 4, 2);
	xls.SetCellMergedRows(4, 4, 2);
	xls.SetCellMergedRows(5, 4, 2);
	xls.SetCellMergedRows(6, 4, 2);
	xls.SetCellMergedRows(7, 4, 2);
	xls.SetCellMergedRows(8, 4, 2);
	xls.SetCellMergedRows(9, 4, 2);
	xls.SetCellMergedRows(10, 4, 2);
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("T\xEAn \x42N"), 4098, true);
	xls.SetCellText(2, 4, _T("S\x1ED1 HS"), 4098, true);
	xls.SetCellText(3, 4, _T("Ng\xE0y sinh"), 4098, true);
	xls.SetCellText(4, 4, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), 4098, true);
	xls.SetCellText(5, 4, _T("\x43h\x1EA9n \x111o\xE1n"), 4098, true);
	xls.SetCellText(6, 4, _T("N\x1A1i \x63huy\x1EC3n \x111\x1EBFn"), 4098, true);
	xls.SetCellText(7, 4, _T("Qu\xEA qu\xE1n"), 4098, true);
	xls.SetCellText(8, 4, _T("\x110\x1A1n v\x1ECB \x63\xF4ng t\xE1\x63"), 4098, true);
	xls.SetCellText(9, 4, _T("N\x1A1i \x63huy\x1EC3n tuy\x1EBFn"), 4098, true);
	xls.SetCellText(10, 4, _T("\x43h\x1EA9n \x111o\xE1n \x63huy\x1EC3n tuy\x1EBFn"), 4098, true);
	//Nhom XN
	szSQL.Format(_T("SELECT distinct hfg_id, hfg_name ") \
				 _T("FROM hmsv_paraclinic ") \
				 _T("LEFT JOIN hms_fee_group ON (hpc_groupid = hfg_id) ") \
				 _T("WHERE hpc_orderdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
				 _T("ORDER BY hfg_id"), m_szFromDate, m_szToDate);
	rs.ExecSQL(szSQL);
	
	while (!rs.IsEOF())
	{
		xls.SetCellText(11+nTestCol, 5, rs.GetValue(_T("hfg_name")), 4098, true);
		arrTestGrp.Add(rs.GetValue(_T("hfg_id")));
		nTestCol++;
		rs.MoveNext();
	}
	if (nTestCol > 0)
	{
		xls.SetCellMergedColumns(11, 4, nTestCol);
		xls.SetCellText(11, 4, _T("\x58\xE9t nghi\x1EC7m"), 4098, true);
		for (int i = 0; i < nTestCol; i++)
			xls.SetColumnWidth(11+i, 15);
	}
	nCol = nTestCol + 11;
	xls.SetCellText(nCol, 4, _T("Th\x1EE7 thu\x1EADt"), 4098, true);
	xls.SetCellText(nCol+1, 4, _T("\x110\x1A1n thu\x1ED1\x63"), 4098, true);
	xls.SetCellMergedColumns(nCol+2, 4, 4);
	xls.SetCellText(nCol+2, 4, _T("H\x1B0\x1EDBng \x111i\x1EC1u tr\x1ECB"), 4098, true);
	xls.SetCellText(nCol+2, 5, _T("R\x61 vi\x1EC7n"), 4098, true);
	xls.SetCellText(nCol+3, 5, _T("CV"), 4098, true);
	xls.SetCellText(nCol+4, 5, _T("VV"), 4098, true);
	xls.SetCellText(nCol+5, 5, _T("\x42\x1ECF"), 4098, true);
	szSQL = GetQueryString();
	BeginWaitCursor();
	nCount = rs.ExecSQL(szSQL);
	EndWaitCursor();
	if (rs.IsEOF())
	{
		if (nCount < 0)
			_msg(_T("%s"), szSQL);
		else 
			_fmsg(_T("%s"), szSQL);
		AfxMessageBox(_T("No Data."));
		return;
	}
	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("doc_no"), szNewDoc);
		rs.GetValue(_T("patient_group"), szNewGroup);
		_debug(_T("New:%s-Old:%s"), szNewGroup, szOldGroup);
		if (szNewGroup != szOldGroup)
		{
			if (!szOldDoc.IsEmpty())
				nRow++;
			xls.SetCellText(0, nRow, szNewGroup, FMT_TEXT, true);
			szOldGroup = szNewGroup;
			szOldDoc.Empty();
			nRow++;
		}
		_debug(_T("New:%s-Old:%s"), szNewDoc, szOldDoc);
		if (szNewDoc != szOldDoc)
		{
			//Write patient info
			if (!szOldDoc.IsEmpty())
				nRow++;
			xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
			xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
			xls.SetCellText(2, nRow, rs.GetValue(_T("doc_no")), FMT_TEXT);
			xls.SetCellText(3, nRow, rs.GetValue(_T("yob")), FMT_DATE);
			xls.SetCellText(4, nRow, rs.GetValue(_T("object_name")), FMT_TEXT);
			xls.SetCellText(5, nRow, rs.GetValue(_T("diagnosis")), FMT_TEXT);
			xls.SetCellText(6, nRow, rs.GetValue(_T("transplace")), FMT_TEXT);
			xls.SetCellText(7, nRow, rs.GetValue(_T("address")), FMT_TEXT);
			xls.SetCellText(8, nRow, rs.GetValue(_T("work_place")), FMT_TEXT);
			xls.SetCellText(9, nRow, rs.GetValue(_T("hd_transplace")), FMT_TEXT);
			xls.SetCellText(10, nRow, rs.GetValue(_T("hd_transdiagn")), FMT_TEXT);
			//Write drug order, operation, suggestion
			rs.GetValue(_T("operation_name"), tmpStr);
			tmpStr.Replace(_T(","), _T("\n-"));
			xls.SetCellText(11+nTestCol, nRow, tmpStr, FMT_GENERAL | FMT_WRAPING);
			xls.SetCellText(11+nTestCol+1, nRow, rs.GetValue(_T("product_list")), FMT_GENERAL | FMT_WRAPING);
			xls.SetCellText(11+nTestCol+2, nRow, rs.GetValue(_T("go_home")), FMT_TEXT);
			xls.SetCellText(11+nTestCol+3, nRow, rs.GetValue(_T("transfer")), FMT_TEXT);
			xls.SetCellText(11+nTestCol+4, nRow, rs.GetValue(_T("admit")), FMT_TEXT);
			szOldDoc = szNewDoc;
		}
		//Write test info
		rs.GetValue(_T("group_id"), tmpStr);
		if (!tmpStr.IsEmpty())
			for (int i = 0; i < arrTestGrp.GetCount(); i++)
				if (tmpStr == arrTestGrp.GetAt(i))
				{
					rs.GetValue(_T("test_name"), tmpStr);
					tmpStr.Replace(_T(","), _T("\n-"));
					xls.SetCellText(i+11, nRow, tmpStr, FMT_GENERAL | FMT_WRAPING);
					break;
				}	
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\DS BN KB.xls"));
} 
void CHMSExamList::OnListDblClick(){
	
} 
void CHMSExamList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExamList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExamList::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}

CString CHMSExamList::GetQueryString(){
	CString szSQL, szWhere, szTestFilter, szGroupSort;
	/*szWhere.Format(_T(" AND (he_examdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
				   _T(" OR (he_examdate < TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
				   _T(" AND hd_enddate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
				   _T(" ))") \
				   _T(" AND he_status IN ('P', 'T')"), m_szFromDate, m_szToDate, m_szFromDate, m_szFromDate, m_szToDate);
	if (!m_szZoneKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_deptid = '%s'"), m_szZoneKey);
	if (!m_szRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_roomid = '%s'"), m_szRoomKey);
	if (!m_szDiagnosisKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_diagnostic = '%s'"), m_szDiagnosisKey);
	if (!m_szTestKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND test_name IS NOT NULL"));
		szTestFilter.Format(_T(" AND hfe_itemid = '%s'"), m_szTestKey);
	}
	if (!m_szFromPlaceKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_transplaceid = '%s'"), m_szFromPlaceKey);
	if (!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_doctor = '%s'"), m_szDoctorKey);
	if (!m_szStatusKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_status = '%s'"), m_szStatusKey);
	if (!m_szSuggestionKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_suggestion = '%s'"), m_szSuggestionKey);
	szGroupSort.Format(_T(" CASE WHEN he_examdate < TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
					   _T(" THEN CAST('III' AS NVARCHAR2(3)) ELSE ") \
					   _T(" CASE WHEN NVL(hd_enddate, TO_TIMESTAMP ('2000/01/01 00:00:00', 'YYYY/MM/DD HH24:MI:SS')) NOT BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
					   _T(" THEN CAST('II' AS NVARCHAR2(2)) ELSE CAST('I' AS NVARCHAR2(1)) END END patient_group")
					   , m_szFromDate, m_szFromDate, m_szToDate);
	
	szSQL.Format(_T(" SELECT   he_docno doc_no, ") \
				_T("           Get_patientname(he_docno) patient_name, ") \
				_T("           hp_birthdate yob, ") \
				_T("           Get_objectname(hd_object) object_name, ") \
				_T("           hd_diagnostic diagnosis, ") \
				_T("           hd_transplace transfer_place, ") \
				_T("           hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) address, ") \
				_T("           hp_workplace work_place, ") \
				_T("           product_list, ") \
				_T("           operation_name, ") \
				_T("		   group_id, ") \
				_T("           test_name, ") \
				_T("           CASE WHEN hd_suggestion NOT IN ( 'I', 'C', 'D', 'F', ") \
				_T("                                       'X', 'Y' ) THEN cast('X' as nvarchar2(1)) ") \
				_T("           ELSE null ") \
				_T("           END go_home, ") \
				_T("           CASE WHEN hd_suggestion IN ( 'C', 'D' ) THEN cast('X' as nvarchar2(1)) ") \
				_T("           ELSE null ") \
				_T("           END admit, ") \
				_T("           CASE WHEN hd_suggestion = 'F' THEN cast('X' as nvarchar2(1)) ") \
				_T("           ELSE null ") \
				_T("           END transfer , hd_transplace, hd_transdiagn,") \
				_T("		   %s") \
				_T(" FROM      (SELECT he_docno doc_no, ") \
				_T("                   Min(he_receptidx) recept_idx ") \
				_T("            FROM   hms_exam ") \
				_T("            GROUP  BY he_docno) mini_exam ") \
				_T(" LEFT JOIN hms_exam ON ( he_docno = doc_no AND he_receptidx = recept_idx ) ") \
				_T(" LEFT JOIN (SELECT    doc_no, ") \
				_T("                      Listagg(To_char(product_name), ', ') ") \
				_T("                        WITHIN GROUP (ORDER BY product_name) product_list ") \
				_T("            FROM      (SELECT    DISTINCT hpo_docno doc_no, ") \
				_T("                                          hpol_product_id ") \
				_T("                       FROM      hms_pharmaorder ") \
				_T("                       LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
				_T("					   WHERE hpo_orderstatus NOT IN ('O', 'C')) ") \
				_T("            LEFT JOIN m_product_view ON ( hpol_product_id = product_id ) ") \
				_T("            GROUP     BY doc_no) USING (doc_no) ") \
				_T(" LEFT JOIN (SELECT    doc_no, ") \
				_T("                      '- '||Listagg(To_char(Nvl(ho_comment, hfl_name)), ', ') ") \
				_T("                        WITHIN GROUP (ORDER BY doc_no) operation_name ") \
				_T("            FROM      (SELECT DISTINCT ho_docno doc_no, ") \
				_T("                                       ho_itemid, ") \
				_T("                                       ho_comment ") \
				_T("                       FROM   hms_operation ") \
				_T("                       WHERE  ho_depttype = 'E' AND ho_status NOT IN ('O', 'C')) ") \
				_T("            LEFT JOIN hms_fee_list ON ( hfl_feeid = ho_itemid ) ") \
				_T("            GROUP     BY doc_no) USING (doc_no) ") \
				_T(" LEFT JOIN (SELECT hpc_docno doc_no, ") \
				_T("                   hpc_groupid group_id, ") \
				_T("                   '- '||Listagg(To_char(hfe_desc), ', ') ") \
				_T("                     WITHIN GROUP (ORDER BY hpc_docno, hpc_groupid) test_name ") \
				_T("            FROM   (SELECT    DISTINCT hpc_docno, ") \
				_T("                                       hpc_groupid, ") \
				_T("                                       hfe_desc ") \
				_T("                    FROM      hmsv_paraclinic ") \
				_T("                    LEFT JOIN hms_fee ON ( hpc_docno = hfe_docno AND hpc_orderid = hfe_orderid AND hfe_type IN ( 'P', 'T' ) ) ") \
				_T("                    WHERE     hfe_class = 'E' AND hpc_status NOT IN ( 'O', 'C' ) AND hfe_status <> 'C' %s) ") \
				_T("            GROUP  BY hpc_docno,hpc_groupid) USING (doc_no) ") \
				_T(" LEFT JOIN hms_doc ON ( hd_docno = doc_no ) ") \
				_T(" LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
				_T(" WHERE 1=1 %s") \
				_T(" ORDER BY patient_group"), szGroupSort, szTestFilter, szWhere);*/
	// Vuong thay the cau lenh cu da dong
	szWhere.Format(_T(" AND he_examdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" AND he_status IN ('P', 'T')"), m_szFromDate, m_szToDate);
	if (!m_szZoneKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_deptid = '%s'"), m_szZoneKey);
	if (!m_szRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_roomid = '%s'"), m_szRoomKey);
	if (!m_szDiagnosisKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_diagnostic = '%s'"), m_szDiagnosisKey);
	if (!m_szTestKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND test_name IS NOT NULL"));
		szTestFilter.Format(_T(" AND hfe_itemid = '%s'"), m_szTestKey);
	}
	if (!m_szFromPlaceKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_transplaceid = '%s'"), m_szFromPlaceKey);
	if (!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_doctor = '%s'"), m_szDoctorKey);
	if (!m_szStatusKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_status = '%s'"), m_szStatusKey);
	if (!m_szSuggestionKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_suggestion = '%s'"), m_szSuggestionKey);
	szGroupSort.Format(_T(" CASE WHEN he_examdate < TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" THEN CAST('III' AS NVARCHAR2(3)) ELSE ") \
		_T(" CASE WHEN NVL(hd_enddate, TO_TIMESTAMP ('2000/01/01 00:00:00', 'YYYY/MM/DD HH24:MI:SS')) NOT BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" THEN CAST('II' AS NVARCHAR2(2)) ELSE CAST('I' AS NVARCHAR2(1)) END END patient_group")
		, m_szFromDate, m_szFromDate, m_szToDate);
	szSQL.Format(_T(" WITH first_exam AS( ") \
		_T(" SELECT ") \
		_T(" he_docno                  doc_no, ") \
		_T(" get_patientname(he_docno) patient_name, ") \
		_T(" hp_birthdate              yob, ") \
		_T(" get_objectname(hd_object) object_name, ") \
		_T(" hd_diagnostic             diagnosis, ") \
		_T(" hd_transplace             transfer_place, ") \
		_T(" hms_getaddress(hp_provid, hp_distid, hp_villid) address, ") \
		_T(" hp_workplace              work_place, ") \
		_T(" CASE WHEN hd_suggestion NOT IN('I', 'C', 'D', 'F', 'X', 'Y') THEN CAST('X' AS NVARCHAR2(1)) ELSE NULL END go_home, ") \
		_T(" CASE WHEN hd_suggestion IN('C', 'D') THEN CAST('X' AS NVARCHAR2(1)) ELSE NULL END admit, ") \
		_T(" CASE WHEN hd_suggestion = 'F' THEN CAST('X' AS NVARCHAR2(1)) ELSE NULL END   transfer, %s ") \
		_T(" FROM ") \
		_T(" ( ") \
		_T(" 	SELECT he_docno doc_no, MIN(he_receptidx) recept_idx ") \
		_T(" 	FROM hms_exam ") \
		_T(" 	where 1 = 1 ") \
		_T(" 	AND he_status IN('P', 'T') ") \
		_T(" 	GROUP BY he_docno ") \
		_T(" ) mini_exam ") \
		_T(" LEFT JOIN hms_exam ON(he_docno = doc_no AND he_receptidx = recept_idx) ") \
		_T(" LEFT JOIN hms_doc ON(hd_docno = doc_no) ") \
		_T(" LEFT JOIN hms_patient ON(hd_patientno = hp_patientno) ") \
		_T(" WHERE ") \
		_T(" 1 = 1  %s ") \
		_T(" ) ") \
		_T(" SELECT ") \
		_T(" doc_no, ") \
		_T(" patient_name, ") \
		_T(" yob, ") \
		_T(" object_name, ") \
		_T(" diagnosis, ") \
		_T(" SUM(xn)   xn, ") \
		_T(" SUM(cd)   cd, ") \
		_T(" SUM(tdcn) tdcn, ") \
		_T(" operation_name, ") \
		_T(" product_list, ") \
		_T(" go_home, ") \
		_T(" transfer, ") \
		_T(" admit, ") \
		_T(" patient_group ") \
		_T(" FROM ") \
		_T(" ( ") \
		_T(" 	select ") \
		_T(" 	a.doc_no, patient_name, yob, object_name, diagnosis, transfer_place, address, work_place, ") \
		_T(" 	go_home, admit, transfer, patient_group, product_list, operation_name, ") \
		_T(" 	CASE WHEN substr(group_id, 1, 2) = 'B1' THEN 1 ELSE 0 END xn, ") \
		_T(" 	CASE WHEN substr(group_id, 1, 2) = 'B2' THEN 1 ELSE 0 END cd, ") \
		_T(" 	CASE WHEN substr(group_id, 1, 2) = 'B3' THEN 1 ELSE 0 END  tdcn, test_name ") \
		_T(" 	from first_exam a ") \
		_T(" 	LEFT JOIN( ") \
		_T(" 		SELECT doc_no, LISTAGG(to_char(product_name), ', ') WITHIN GROUP(ORDER BY product_name) product_list ") \
		_T(" 		FROM ") \
		_T(" 		( ") \
		_T(" 			SELECT DISTINCT hpo_docno doc_no, hpol_product_id ") \
		_T(" 			FROM hms_pharmaorder  ") \
		_T(" 			LEFT JOIN hms_pharmaorderline ON(hpo_orderid = hpol_orderid) ") \
		_T(" 			WHERE hpo_orderstatus NOT IN('O', 'C') ") \
		_T(" 			and exists(select 1 from first_exam where doc_no = hpo_docno) ") \
		_T(" 		) ") \
		_T(" 		LEFT JOIN m_product_view ON(hpol_product_id = product_id) ") \
		_T(" 		GROUP BY doc_no ") \
		_T(" 	) b on(a.doc_no = b.doc_no) ") \
		_T(" 	LEFT JOIN( ") \
		_T(" 		SELECT doc_no, '- ' || LISTAGG(to_char(nvl(ho_comment, hfl_name)), ', ') WITHIN GROUP(ORDER BY doc_no) operation_name ") \
		_T(" 		FROM ") \
		_T(" 		(  ") \
		_T(" 			SELECT DISTINCT ho_docno doc_no, ho_itemid, ho_comment ") \
		_T(" 			FROM hms_operation ") \
		_T(" 			WHERE ho_depttype = 'E' AND ho_status NOT IN('O', 'C') ") \
		_T(" 			and exists(select 1 from first_exam where doc_no = ho_docno) ") \
		_T(" 		) ") \
		_T(" 		LEFT JOIN hms_fee_list ON(hfl_feeid = ho_itemid) ") \
		_T(" 		GROUP BY doc_no ") \
		_T(" 	) c on(c.doc_no = a.doc_no) ") \
		_T(" 	LEFT JOIN( ") \
		_T(" 		SELECT hpc_docno   doc_no, hpc_groupid group_id, ") \
		_T(" 		'- ' || LISTAGG(to_char(hfe_desc), ', ') WITHIN GROUP(ORDER BY hpc_docno, hpc_groupid) test_name ") \
		_T(" 		FROM ") \
		_T(" 		( ") \
		_T(" 			SELECT DISTINCT hpc_docno, hpc_groupid, hfe_desc ") \
		_T(" 			FROM hmsv_paraclinic ") \
		_T(" 			LEFT JOIN hms_fee ON(hpc_docno = hfe_docno AND hpc_orderid = hfe_orderid AND hfe_type IN('P', 'T')) ") \
		_T(" 			WHERE hfe_class = 'E' ") \
		_T(" 			AND hpc_status NOT IN('O', 'C') ") \
		_T(" 			AND hfe_status < > 'C' ") \
		_T(" 			and exists(select 1 from first_exam where doc_no = hfe_docno) ") \
		_T(" 		) ") \
		_T(" 		GROUP BY hpc_docno, hpc_groupid ") \
		_T(" 	)d on(d.doc_no = a.doc_no) ") \
		_T(" ) tbl ") \
		_T(" GROUP BY doc_no, patient_name, yob, object_name, diagnosis, operation_name, product_list, go_home, transfer, admit, patient_group ") \
		_T(" ORDER BY patient_group "), szGroupSort, szWhere, szTestFilter);

	return szSQL;
}

CString CHMSExamList::GetQueryString_print(){
	CString szSQL, szWhere, szTestFilter, szGroupSort;
	// Sua dieu kien bo check hd_enddate
	szWhere.Format(_T(" AND he_examdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" AND he_status IN ('P', 'T')"), m_szFromDate, m_szToDate);
	if (!m_szZoneKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_deptid = '%s'"), m_szZoneKey);
	if (!m_szRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_roomid = '%s'"), m_szRoomKey);
	if (!m_szDiagnosisKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_diagnostic = '%s'"), m_szDiagnosisKey);
	if (!m_szTestKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND test_name IS NOT NULL"));
		szTestFilter.Format(_T(" AND hfe_itemid = '%s'"), m_szTestKey);
	}
	if (!m_szFromPlaceKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_transplaceid = '%s'"), m_szFromPlaceKey);
	if (!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_doctor = '%s'"), m_szDoctorKey);
	if (!m_szStatusKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_status = '%s'"), m_szStatusKey);
	if (!m_szSuggestionKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_suggestion = '%s'"), m_szSuggestionKey);
	szGroupSort.Format(_T(" CASE WHEN he_examdate < TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" THEN CAST('III' AS NVARCHAR2(3)) ELSE ") \
		_T(" CASE WHEN NVL(hd_enddate, TO_TIMESTAMP ('2000/01/01 00:00:00', 'YYYY/MM/DD HH24:MI:SS')) NOT BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" THEN CAST('II' AS NVARCHAR2(2)) ELSE CAST('I' AS NVARCHAR2(1)) END END patient_group")
		, m_szFromDate, m_szFromDate, m_szToDate);

// 	szSQL.Format(_T(" SELECT    he_docno doc_no, ") \
// 		_T("           Get_patientname(he_docno) patient_name, ") \
// 		_T("           Extract(YEAR FROM hp_birthdate) yob, ") \
// 		_T("           Get_objectname(hd_object) object_name, ") \
// 		_T("           hd_diagnostic diagnosis, ") \
// 		_T("           hd_transplace transfer_place, ") \
// 		_T("           hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) address, ") \
// 		_T("           hp_workplace work_place, ") \
// 		_T("           product_list, ") \
// 		_T("           operation_name, ") \
// 		_T("		   group_id, ") \
// 		_T("           test_name, ") \
// 		_T("           CASE WHEN hd_suggestion NOT IN ( 'I', 'C', 'D', 'F', ") \
// 		_T("                                       'X', 'Y' ) THEN cast('X' as nvarchar2(1)) ") \
// 		_T("           ELSE null ") \
// 		_T("           END go_home, ") \
// 		_T("           CASE WHEN hd_suggestion IN ( 'C', 'D' ) THEN cast('X' as nvarchar2(1)) ") \
// 		_T("           ELSE null ") \
// 		_T("           END admit, ") \
// 		_T("           CASE WHEN hd_suggestion = 'F' THEN cast('X' as nvarchar2(1)) ") \
// 		_T("           ELSE null ") \
// 		_T("           END transfer ,") \
// 		_T("		   %s") \
// 		_T(" FROM      (SELECT he_docno doc_no, ") \
// 		_T("                   Min(he_receptidx) recept_idx ") \
// 		_T("            FROM   hms_exam ") \
// 		_T("            GROUP  BY he_docno) mini_exam ") \
// 		_T(" LEFT JOIN hms_exam ON ( he_docno = doc_no AND he_receptidx = recept_idx ) ") \
// 		_T(" LEFT JOIN (SELECT    doc_no, ") \
// 		_T("                      Listagg(To_char(product_name), ', ') ") \
// 		_T("                        WITHIN GROUP (ORDER BY product_name) product_list ") \
// 		_T("            FROM      (SELECT    DISTINCT hpo_docno doc_no, ") \
// 		_T("                                          hpol_product_id ") \
// 		_T("                       FROM      hms_pharmaorder ") \
// 		_T("                       LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
// 		_T("					   WHERE hpo_orderstatus NOT IN ('O', 'C')) ") \
// 		_T("            LEFT JOIN m_product_view ON ( hpol_product_id = product_id ) ") \
// 		_T("            GROUP     BY doc_no) USING (doc_no) ") \
// 		_T(" LEFT JOIN (SELECT    doc_no, ") \
// 		_T("                      '- '||Listagg(To_char(Nvl(ho_comment, hfl_name)), ', ') ") \
// 		_T("                        WITHIN GROUP (ORDER BY doc_no) operation_name ") \
// 		_T("            FROM      (SELECT DISTINCT ho_docno doc_no, ") \
// 		_T("                                       ho_itemid, ") \
// 		_T("                                       ho_comment ") \
// 		_T("                       FROM   hms_operation ") \
// 		_T("                       WHERE  ho_depttype = 'E' AND ho_status NOT IN ('O', 'C')) ") \
// 		_T("            LEFT JOIN hms_fee_list ON ( hfl_feeid = ho_itemid ) ") \
// 		_T("            GROUP     BY doc_no) USING (doc_no) ") \
// 		_T(" LEFT JOIN (SELECT hpc_docno doc_no, ") \
// 		_T("                   hpc_groupid group_id, ") \
// 		_T("                   '- '||Listagg(To_char(hfe_desc), ', ') ") \
// 		_T("                     WITHIN GROUP (ORDER BY hpc_docno, hpc_groupid) test_name ") \
// 		_T("            FROM   (SELECT    DISTINCT hpc_docno, ") \
// 		_T("                                       hpc_groupid, ") \
// 		_T("                                       hfe_desc ") \
// 		_T("                    FROM      hmsv_paraclinic ") \
// 		_T("                    LEFT JOIN hms_fee ON ( hpc_docno = hfe_docno AND hpc_orderid = hfe_orderid AND hfe_type IN ( 'P', 'T' ) ) ") \
// 		_T("                    WHERE     hfe_class = 'E' AND hpc_status NOT IN ( 'O', 'C' ) AND hfe_status <> 'C' %s) ") \
// 		_T("            GROUP  BY hpc_docno,hpc_groupid) USING (doc_no) ") \
// 		_T(" LEFT JOIN hms_doc ON ( hd_docno = doc_no ) ") \
// 		_T(" LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
// 		_T(" WHERE 1=1 %s") \
// 		_T(" ORDER BY patient_group"), szGroupSort, szTestFilter, szWhere);
	 // Vuongld dong 09.07.2025
	/*szSQL.Format(_T(" SELECT") \
		_T(" doc_no,") \
		_T(" patient_name,") \
		_T(" yob,") \
		_T(" object_name,") \
		_T(" diagnosis,") \
		_T(" SUM(xn) xn,") \
		_T(" SUM(cd) cd,") \
		_T(" SUM(tdcn) tdcn,") \
		_T(" operation_name,") \
		_T(" product_list,") \
		_T(" go_home,") \
		_T(" transfer,") \
		_T(" admit,") \
		_T(" patient_group") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT he_docno doc_no,") \
		_T("   Get_patientname(he_docno) patient_name,") \
		_T("   hp_birthdate yob,") \
		_T("   Get_objectname(hd_object) object_name,") \
		_T("   hd_diagnostic diagnosis,") \
		_T("   hd_transplace transfer_place,") \
		_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) address,") \
		_T("   hp_workplace work_place,") \
		_T("   product_list,") \
		_T("   operation_name,") \
		_T("   CASE") \
		_T("     WHEN SUBSTR(group_id, 1, 2) = 'B1'") \
		_T("     THEN 1 ELSE 0") \
		_T("   END xn,") \
		_T("   CASE") \
		_T("     WHEN SUBSTR(group_id, 1, 2) = 'B2'") \
		_T("     THEN 1 ELSE 0") \
		_T("   END cd,") \
		_T("   CASE") \
		_T("     WHEN SUBSTR(group_id, 1, 2) = 'B3'") \
		_T("     THEN 1 ELSE 0") \
		_T("   END tdcn,") \
		_T("   test_name,") \
		_T("   CASE") \
		_T("     WHEN hd_suggestion NOT IN ( 'I', 'C', 'D', 'F', 'X', 'Y' )") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END go_home,") \
		_T("   CASE") \
		_T("     WHEN hd_suggestion IN ( 'C', 'D' )") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END admit,") \
		_T("   CASE") \
		_T("     WHEN hd_suggestion = 'F'") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE NULL") \
		_T("   END transfer , %s ") \
		_T(" FROM") \
		_T("   (SELECT he_docno doc_no,") \
		_T("     MIN(he_receptidx) recept_idx") \
		_T("   FROM hms_exam") \
		_T("   GROUP BY he_docno") \
		_T("   ) mini_exam") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON ( he_docno    = doc_no") \
		_T(" AND he_receptidx = recept_idx )") \
		_T(" LEFT JOIN") \
		_T("   (SELECT doc_no,") \
		_T("     Listagg(TO_CHAR(product_name), ', ') WITHIN GROUP (") \
		_T("   ORDER BY product_name) product_list") \
		_T("   FROM") \
		_T("     (SELECT DISTINCT hpo_docno doc_no,") \
		_T("       hpol_product_id") \
		_T("     FROM hms_pharmaorder") \
		_T("     LEFT JOIN hms_pharmaorderline") \
		_T("     ON ( hpo_orderid           = hpol_orderid )") \
		_T("     WHERE hpo_orderstatus NOT IN ('O', 'C')") \
		_T("     )") \
		_T("   LEFT JOIN m_product_view") \
		_T("   ON ( hpol_product_id = product_id )") \
		_T("   GROUP BY doc_no") \
		_T("   ) USING (doc_no)") \
		_T(" LEFT JOIN") \
		_T("   (SELECT doc_no,") \
		_T("     '- '") \
		_T("     ||Listagg(TO_CHAR(NVL(ho_comment, hfl_name)), ', ') WITHIN GROUP (") \
		_T("   ORDER BY doc_no) operation_name") \
		_T("   FROM") \
		_T("     (SELECT DISTINCT ho_docno doc_no,") \
		_T("       ho_itemid,") \
		_T("       ho_comment") \
		_T("     FROM hms_operation") \
		_T("     WHERE ho_depttype  = 'E'") \
		_T("     AND ho_status NOT IN ('O', 'C')") \
		_T("     )") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON ( hfl_feeid = ho_itemid )") \
		_T("   GROUP BY doc_no") \
		_T("   ) USING (doc_no)") \
		_T(" LEFT JOIN") \
		_T("   (SELECT hpc_docno doc_no,") \
		_T("     hpc_groupid group_id,") \
		_T("     '- '") \
		_T("     ||Listagg(TO_CHAR(hfe_desc), ', ') WITHIN GROUP (") \
		_T("   ORDER BY hpc_docno, hpc_groupid) test_name") \
		_T("   FROM") \
		_T("     (SELECT DISTINCT hpc_docno,") \
		_T("       hpc_groupid,") \
		_T("       hfe_desc") \
		_T("     FROM hmsv_paraclinic") \
		_T("     LEFT JOIN hms_fee") \
		_T("     ON ( hpc_docno      = hfe_docno") \
		_T("     AND hpc_orderid     = hfe_orderid") \
		_T("     AND hfe_type       IN ( 'P', 'T' ) )") \
		_T("     WHERE hfe_class     = 'E'") \
		_T("     AND hpc_status NOT IN ( 'O', 'C' )") \
		_T("     AND hfe_status     <> 'C' %s ") \
		_T("     )") \
		_T("   GROUP BY hpc_docno,") \
		_T("     hpc_groupid") \
		_T("   ) USING (doc_no)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON ( hd_docno = doc_no )") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON ( hd_patientno = hp_patientno )") \
		_T(" WHERE 1           =1 %s ") \
		_T(" ) Tbl") \
		_T(" GROUP BY") \
		_T(" doc_no,") \
		_T(" patient_name,") \
		_T(" yob,") \
		_T(" object_name,") \
		_T(" diagnosis,") \
		_T(" operation_name,") \
		_T(" product_list,") \
		_T(" go_home,") \
		_T(" transfer,") \
		_T(" admit,") \
		_T(" patient_group") \
		_T(" ORDER BY patient_group"), szGroupSort, szTestFilter, szWhere);*/

	szSQL.Format(_T(" WITH first_exam AS( ") \
			_T(" SELECT ") \
			_T(" he_docno                  doc_no, ") \
			_T(" get_patientname(he_docno) patient_name, ") \
			_T(" hp_birthdate              yob, ") \
			_T(" get_objectname(hd_object) object_name, ") \
			_T(" hd_diagnostic             diagnosis, ") \
			_T(" hd_transplace             transfer_place, ") \
			_T(" hms_getaddress(hp_provid, hp_distid, hp_villid) address, ") \
			_T(" hp_workplace              work_place, ") \
			_T(" CASE WHEN hd_suggestion NOT IN('I', 'C', 'D', 'F', 'X', 'Y') THEN CAST('X' AS NVARCHAR2(1)) ELSE NULL END go_home, ") \
			_T(" CASE WHEN hd_suggestion IN('C', 'D') THEN CAST('X' AS NVARCHAR2(1)) ELSE NULL END admit, ") \
			_T(" CASE WHEN hd_suggestion = 'F' THEN CAST('X' AS NVARCHAR2(1)) ELSE NULL END   transfer, %s ") \
			_T(" FROM ") \
			_T(" ( ") \
			_T(" 	SELECT he_docno doc_no, MIN(he_receptidx) recept_idx ") \
			_T(" 	FROM hms_exam ") \
			_T(" 	where 1 = 1 ") \
			_T(" 	AND he_status IN('P', 'T') ") \
			_T(" 	GROUP BY he_docno ") \
			_T(" ) mini_exam ") \
			_T(" LEFT JOIN hms_exam ON(he_docno = doc_no AND he_receptidx = recept_idx) ") \
			_T(" LEFT JOIN hms_doc ON(hd_docno = doc_no) ") \
			_T(" LEFT JOIN hms_patient ON(hd_patientno = hp_patientno) ") \
			_T(" WHERE ") \
			_T(" 1 = 1  %s ") \
		_T(" ) ") \
		_T(" SELECT ") \
		_T(" doc_no, ") \
		_T(" patient_name, ") \
		_T(" yob, ") \
		_T(" object_name, ") \
		_T(" diagnosis, ") \
		_T(" SUM(xn)   xn, ") \
		_T(" SUM(cd)   cd, ") \
		_T(" SUM(tdcn) tdcn, ") \
		_T(" operation_name, ") \
		_T(" product_list, ") \
		_T(" go_home, ") \
		_T(" transfer, ") \
		_T(" admit, ") \
		_T(" patient_group ") \
		_T(" FROM ") \
		_T(" ( ") \
		_T(" 	select ") \
		_T(" 	a.doc_no, patient_name, yob, object_name, diagnosis, transfer_place, address, work_place, ") \
		_T(" 	go_home, admit, transfer, patient_group, product_list, operation_name, ") \
		_T(" 	CASE WHEN substr(group_id, 1, 2) = 'B1' THEN 1 ELSE 0 END xn, ") \
		_T(" 	CASE WHEN substr(group_id, 1, 2) = 'B2' THEN 1 ELSE 0 END cd, ") \
		_T(" 	CASE WHEN substr(group_id, 1, 2) = 'B3' THEN 1 ELSE 0 END  tdcn, test_name ") \
		_T(" 	from first_exam a ") \
		_T(" 	LEFT JOIN( ") \
		_T(" 		SELECT doc_no, LISTAGG(to_char(product_name), ', ') WITHIN GROUP(ORDER BY product_name) product_list ") \
		_T(" 		FROM ") \
		_T(" 		( ") \
		_T(" 			SELECT DISTINCT hpo_docno doc_no, hpol_product_id ") \
		_T(" 			FROM hms_pharmaorder  ") \
		_T(" 			LEFT JOIN hms_pharmaorderline ON(hpo_orderid = hpol_orderid) ") \
		_T(" 			WHERE hpo_orderstatus NOT IN('O', 'C') ") \
		_T(" 			and exists(select 1 from first_exam where doc_no = hpo_docno) ") \
		_T(" 		) ") \
		_T(" 		LEFT JOIN m_product_view ON(hpol_product_id = product_id) ") \
		_T(" 		GROUP BY doc_no ") \
		_T(" 	) b on(a.doc_no = b.doc_no) ") \
		_T(" 	LEFT JOIN( ") \
		_T(" 		SELECT doc_no, '- ' || LISTAGG(to_char(nvl(ho_comment, hfl_name)), ', ') WITHIN GROUP(ORDER BY doc_no) operation_name ") \
		_T(" 		FROM ") \
		_T(" 		(  ") \
		_T(" 			SELECT DISTINCT ho_docno doc_no, ho_itemid, ho_comment ") \
		_T(" 			FROM hms_operation ") \
		_T(" 			WHERE ho_depttype = 'E' AND ho_status NOT IN('O', 'C') ") \
		_T(" 			and exists(select 1 from first_exam where doc_no = ho_docno) ") \
		_T(" 		) ") \
		_T(" 		LEFT JOIN hms_fee_list ON(hfl_feeid = ho_itemid) ") \
		_T(" 		GROUP BY doc_no ") \
		_T(" 	) c on(c.doc_no = a.doc_no) ") \
		_T(" 	LEFT JOIN( ") \
		_T(" 		SELECT hpc_docno   doc_no, hpc_groupid group_id, ") \
		_T(" 		'- ' || LISTAGG(to_char(hfe_desc), ', ') WITHIN GROUP(ORDER BY hpc_docno, hpc_groupid) test_name ") \
		_T(" 		FROM ") \
		_T(" 		( ") \
		_T(" 			SELECT DISTINCT hpc_docno, hpc_groupid, hfe_desc ") \
		_T(" 			FROM hmsv_paraclinic ") \
		_T(" 			LEFT JOIN hms_fee ON(hpc_docno = hfe_docno AND hpc_orderid = hfe_orderid AND hfe_type IN('P', 'T')) ") \
		_T(" 			WHERE hfe_class = 'E' ") \
		_T(" 			AND hpc_status NOT IN('O', 'C') ") \
		_T(" 			AND hfe_status < > 'C' ") \
		_T(" 			and exists(select 1 from first_exam where doc_no = hfe_docno) ") \
		_T(" 		) ") \
		_T(" 		GROUP BY hpc_docno, hpc_groupid ") \
		_T(" 	)d on(d.doc_no = a.doc_no) ") \
		_T(" ) tbl ") \
		_T(" GROUP BY doc_no, patient_name, yob, object_name, diagnosis, operation_name, product_list, go_home, transfer, admit, patient_group ") \
		_T(" ORDER BY patient_group "), szGroupSort, szWhere, szTestFilter);
	return szSQL;
}


CString CHMSExamList::GetQueryString_paraclinic(long nDocNo){
	CString szSQL, szWhere;
	if (!m_szTestKey.IsEmpty())
		szWhere.Format(_T(" AND hfe_itemid = '%s'"), m_szTestKey);
	szSQL.Format(_T(" SELECT hpc_groupid, ") \
				_T("        Listagg(To_char(hfe_desc), ', ') ") \
				_T("          WITHIN GROUP (ORDER BY hpc_groupid) test_name") \
				_T(" FROM   (SELECT    DISTINCT hpc_docno, ") \
				_T("                            hpc_groupid, ") \
				_T("                            hfe_desc ") \
				_T("         FROM      hmsv_paraclinic ") \
				_T("         LEFT JOIN hms_fee ON ( hpc_docno = hfe_docno AND hpc_orderid = hfe_orderid AND hfe_type IN ( 'P', 'T' ) ) ") \
				_T("         WHERE     hpc_status NOT IN ( 'O', 'C' ) AND hfe_status <> 'C' AND hfe_docno = %ld %s) ") \
				_T(" GROUP  BY hpc_groupid "), nDocNo, szWhere);

	return szSQL;
}