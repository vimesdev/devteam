#include "HMSExaminationQueueList.h"
#include "MainFrm.h"
#include "ReportDocument.h"
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CHMSExaminationQueueList*)pWnd)->OnAllSelect();
}
static void _OnOpeningSelectFnc(CWnd *pWnd){
	  ((CHMSExaminationQueueList*)pWnd)->OnOpeningSelect();
}
static void _OnExaminedSelectFnc(CWnd *pWnd){
	  ((CHMSExaminationQueueList*)pWnd)->OnExaminedSelect();
}
static void _OnTerminatedSelectFnc(CWnd *pWnd){
	  ((CHMSExaminationQueueList*)pWnd)->OnTerminatedSelect();
}
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationQueueList* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationQueueList *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnRoomAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationQueueList* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationQueueList *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueueList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueueList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTimeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationQueueList* )pWnd)->OnTimeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTimeSelendokFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnTimeSelendok();
}
/*static void _OnTimeSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnTimeKillfocus();
}*/
/*static void _OnTimeKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnTimeKillfocus();
}*/
static long _OnTimeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationQueueList *)pWnd)->OnTimeLoadData();
}
/*static void _OnTimeAddNewFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnTimeAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueueList *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueueList *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnRefrehSelectFnc(CWnd *pWnd){
	CHMSExaminationQueueList *pVw = (CHMSExaminationQueueList *)pWnd;
	pVw->OnRefrehSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationQueueList*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSExaminationQueueList*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExaminationQueueList*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueueList*)pWnd)->OnPatientListDeleteItem();
} 
/*static void _OnNumberChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnNumberChange();
} */
/*static void _OnNumberSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnNumberSetfocus();} */ 
/*static void _OnNumberKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueueList *)pWnd)->OnNumberKillfocus();
} */
static int _OnNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueueList *)pWnd)->OnNumberCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSExaminationQueueList *pVw = (CHMSExaminationQueueList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddHMSExaminationQueueListFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueueList*)pWnd)->OnAddHMSExaminationQueueList();
} 
static int _OnEditHMSExaminationQueueListFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueueList*)pWnd)->OnEditHMSExaminationQueueList();
} 
static int _OnDeleteHMSExaminationQueueListFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueueList*)pWnd)->OnDeleteHMSExaminationQueueList();
} 
static int _OnSaveHMSExaminationQueueListFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueueList*)pWnd)->OnSaveHMSExaminationQueueList();
} 
static int _OnCancelHMSExaminationQueueListFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueueList*)pWnd)->OnCancelHMSExaminationQueueList();
} 
CHMSExaminationQueueList::CHMSExaminationQueueList(){

	m_nDlgWidth = 1111;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSExaminationQueueList::~CHMSExaminationQueueList(){
}
void CHMSExaminationQueueList::OnCreateComponents(){
	m_wndStatusGroupBox.Create(this, _T("Status"), 5, 5, 199, 90);
	m_wndSearchInformation.Create(this, _T("Search Information"), 202, 5, 1020, 90);
	m_wndPatientListGroupBox.Create(this, _T("Patients List"), 5, 95, 1019, 615);
	m_wndAll.Create(this, _T("All"), 10, 30, 100, 55);
	m_wndOpening.Create(this, _T("Waitting"), 105, 30, 195, 55);
	m_wndExamined.Create(this, _T("Examined"), 10, 60, 100, 85);
	m_wndTerminated.Create(this, _T("Terminated"), 105, 60, 195, 85);
	m_wndRoomLabel.Create(this, _T("Room"), 207, 30, 277, 55);
	m_wndRoom.Create(this,282, 30, 532, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 537, 30, 637, 55);
	m_wndObject.Create(this,642, 30, 757, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 207, 60, 277, 85);
	m_wndFromDate.Create(this,282, 60, 367, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 372, 60, 442, 85);
	m_wndToDate.Create(this,447, 60, 532, 85); 
	m_wndTimeLabel.Create(this, _T("Time"), 762, 30, 852, 55);
	m_wndTime.Create(this,857, 30, 947, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 762, 60, 852, 85);
	m_wndDocumentNo.Create(this,857, 60, 947, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 537, 60, 637, 85);
	m_wndPatientName.Create(this,642, 60, 757, 85); 
	m_wndRefreh.Create(this, _T("@"), 952, 60, 977, 85);
	m_wndPatientList.Create(this,10, 120, 1014, 610); 
	m_wndNumber.Create(this,952, 30, 992, 55); 
	m_wndExport.Create(this, _T("Export"), 980, 60, 1019, 85);

}
void CHMSExaminationQueueList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndTime.SetCheckValue(true);
	m_wndTime.LimitText(1024);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	//m_wndPatientName.SetCheckValue(true);
	m_wndNumber.SetLimitText(1024);
	m_wndNumber.SetCheckValue(true);

	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_TEXT, 60);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 190);
	m_wndPatientList.InsertColumn(3, _T("Age"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndPatientList.InsertColumn(4, _T("Sex"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndPatientList.InsertColumn(5, _T("Object"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(6, _T("Exam Date"), CFMT_DATE|CFMT_CENTER, 120);
	m_wndPatientList.InsertColumn(7, _T("End Date"), CFMT_DATE|CFMT_CENTER, 120);
	m_wndPatientList.InsertColumn(8, _T("Status"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(9, _T("Suggestion"), CFMT_TEXT, 160);
	m_wndPatientList.InsertColumn(10, _T("PatientNo"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(11, _T("RoomID"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(12, _T("ReceptIdx"), CFMT_TEXT, 0);


	m_wndTime.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTime.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndRoom.InsertColumn(0, _T ("ID"), CFMT_NUMBER, 40);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSExaminationQueueList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndOpening.SetEvent(WE_CLICK, _OnOpeningSelectFnc);
	m_wndExamined.SetEvent(WE_CLICK, _OnExaminedSelectFnc);
	m_wndTerminated.SetEvent(WE_CLICK, _OnTerminatedSelectFnc);
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
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndTime.SetEvent(WE_SELENDOK, _OnTimeSelendokFnc);
	//m_wndTime.SetEvent(WE_SETFOCUS, _OnTimeSetfocusFnc);
	//m_wndTime.SetEvent(WE_KILLFOCUS, _OnTimeKillfocusFnc);
	m_wndTime.SetEvent(WE_SELCHANGE, _OnTimeSelectChangeFnc);
	m_wndTime.SetEvent(WE_LOADDATA, _OnTimeLoadDataFnc);
	//m_wndTime.SetEvent(WE_ADDNEW, _OnTimeAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndRefreh.SetEvent(WE_CLICK, _OnRefrehSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndNumber.SetEvent(WE_CHANGE, _OnNumberChangeFnc);
	//m_wndNumber.SetEvent(WE_SETFOCUS, _OnNumberSetfocusFnc);
	//m_wndNumber.SetEvent(WE_KILLFOCUS, _OnNumberKillfocusFnc);
	m_wndNumber.SetEvent(WE_CHECKVALUE, _OnNumberCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szTimeKey = _T("1");
	m_szObjectKey.Empty();
	m_nStatus = 0;
	UpdateData(FALSE);

}
void CHMSExaminationQueueList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndOpening.GetDlgCtrlID(), m_nOpening);
	DDX_Radio(pDX, m_wndExamined.GetDlgCtrlID(), m_nExamined);
	DDX_Radio(pDX, m_wndTerminated.GetDlgCtrlID(), m_nTerminated);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndTime.GetDlgCtrlID(), m_szTimeKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndNumber.GetDlgCtrlID(), m_nNumber);

}
void CHMSExaminationQueueList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExaminationQueueList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExaminationQueueList::SetDefaultValues(){

	m_nStatus=0;
	m_szRoomKey.Empty();
	m_szObjectKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTimeKey.Empty();
	m_nDocumentNo=0;
	m_szPatientName.Empty();

}
int CHMSExaminationQueueList::SetMode(int nMode){
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
void CHMSExaminationQueueList::OnAllSelect(){
	UpdateData(TRUE);
	/*m_szStatusKey = _T("A");	
	m_szPrescriptionKey.Empty();*/
	OnPatientListLoadData();
	UpdateData(FALSE);
}
void CHMSExaminationQueueList::OnOpeningSelect(){
	UpdateData(TRUE);	
	OnPatientListLoadData();
	UpdateData(FALSE);
}
void CHMSExaminationQueueList::OnExaminedSelect(){
	UpdateData(TRUE);	
	OnPatientListLoadData();
	UpdateData(FALSE);
}
void CHMSExaminationQueueList::OnTerminatedSelect(){
	UpdateData(TRUE);	
	OnPatientListLoadData();
	UpdateData(FALSE);
}
void CHMSExaminationQueueList::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationQueueList::OnRoomSelendok(){
	 
}
/*void CHMSExaminationQueueList::OnRoomSetfocus(){
	
}*/
/*void CHMSExaminationQueueList::OnRoomKillfocus(){
	
}*/
long CHMSExaminationQueueList::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRoomKey);
	}
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT HRL_ID id,hrl_name name FROM hms_roomlist where HRL_DEPTID in('C1.1','C1.2','C1.3')"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExaminationQueueList::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExaminationQueueList::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationQueueList::OnObjectSelendok(){
	 
}
/*void CHMSExaminationQueueList::OnObjectSetfocus(){
	
}*/
/*void CHMSExaminationQueueList::OnObjectKillfocus(){
	
}*/
long CHMSExaminationQueueList::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey);
	}
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id id,ho_desc name FROM hms_object Order by ho_id  "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExaminationQueueList::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExaminationQueueList::OnFromDateChange(){
	
} */
/*void CHMSExaminationQueueList::OnFromDateSetfocus(){
	
} */
/*void CHMSExaminationQueueList::OnFromDateKillfocus(){
	
} */
int CHMSExaminationQueueList::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSExaminationQueueList::OnToDateChange(){
	
} */
/*void CHMSExaminationQueueList::OnToDateSetfocus(){
	
} */
/*void CHMSExaminationQueueList::OnToDateKillfocus(){
	
} */
int CHMSExaminationQueueList::OnToDateCheckValue(){
	return 0;
} 
void CHMSExaminationQueueList::OnTimeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationQueueList::OnTimeSelendok(){
	 
}
/*void CHMSExaminationQueueList::OnTimeSetfocus(){
	
}*/
/*void CHMSExaminationQueueList::OnTimeKillfocus(){
	
}*/
long CHMSExaminationQueueList::OnTimeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTime.IsSearchKey() && !m_szTimeKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szTimeKey);
	};
	m_wndTime.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_reception_time' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTime.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExaminationQueueList::OnTimeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExaminationQueueList::OnDocumentNoChange(){
	
} */
/*void CHMSExaminationQueueList::OnDocumentNoSetfocus(){
	
} */
/*void CHMSExaminationQueueList::OnDocumentNoKillfocus(){
	
} */
int CHMSExaminationQueueList::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSExaminationQueueList::OnPatientNameChange(){
	
} */
/*void CHMSExaminationQueueList::OnPatientNameSetfocus(){
	
} */
/*void CHMSExaminationQueueList::OnPatientNameKillfocus(){
	
} */
int CHMSExaminationQueueList::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSExaminationQueueList::OnRefrehSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPatientListLoadData();
} 
void CHMSExaminationQueueList::OnPatientListDblClick(){
	
} 
void CHMSExaminationQueueList::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExaminationQueueList::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExaminationQueueList::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	szSQL=GetQueryString();
	int nIndex=1;
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndPatientList.AddItems(
			tmpStr, 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("object")), 
			CDateTime::Convert(rs.GetValue(_T("examdate")), yyyymmdd|hhmmss,ddmmyyyy|hhmm),
			CDateTime::Convert(rs.GetValue(_T("enddate")), yyyymmdd|hhmmss,ddmmyyyy|hhmm), 
			rs.GetValue(_T("status")), 
			rs.GetValue(_T("suggestion")), 
			rs.GetValue(_T("patientno")), 
			rs.GetValue(_T("roomid")), 
			rs.GetValue(_T("receptidx")), 
			NULL);
		rs.MoveNext();
	}
	m_nNumber = nCount;	
	m_wndPatientList.EndLoad(); 
	return nCount;
}
/*void CHMSExaminationQueueList::OnNumberChange(){
	
} */
/*void CHMSExaminationQueueList::OnNumberSetfocus(){
	
} */
/*void CHMSExaminationQueueList::OnNumberKillfocus(){
	
} */
int CHMSExaminationQueueList::OnNumberCheckValue(){
	return 0;
} 
void CHMSExaminationQueueList::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 22);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 12);
	xls.SetColumnWidth(7, 13);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 19);
	xls.SetColumnWidth(10, 19);
	xls.SetColumnWidth(11, 19);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N PH\xD2NG KH\xC1M"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("T\xEAn \x42\x1EC7nh Nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 6, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 6, _T("Gi\x1EDBi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 6, _T("Ng\xE0y kh\xE1m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 6, _T("Ng\xE0y k\x1EBFt th\xFA\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 6, _T("Tr\x1EA1ng th\xE1i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 6, _T("H\x1B0\x1EDBng \x110i\x1EC1u Tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 6, _T("N\x1A1i \x63huy\x1EC3n tuy\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 6, _T("\x43h\x1EA9n \x111o\xE1n \x63huy\x1EC3n tuy\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(3, 3, 0, 9);
	xls.SetMerge(4, 4, 0, 9);

	szSQL=GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 8;
	nCol = 0;
	int nIndex =1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("object"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("examdate"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_DATE);

		rs.GetValue(_T("enddate"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_DATE);

		rs.GetValue(_T("status"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("suggestion"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hd_transplace"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hd_transdiagn"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Danh sach phong kham.xls"));
	
} 
int CHMSExaminationQueueList::OnAddHMSExaminationQueueList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExaminationQueueList::OnEditHMSExaminationQueueList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExaminationQueueList::OnDeleteHMSExaminationQueueList(){
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
 		OnCancelHMSExaminationQueueList();
 	}
	return 0;
}
int CHMSExaminationQueueList::OnSaveHMSExaminationQueueList(){
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
 		//OnHMSExaminationQueueListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExaminationQueueList::OnCancelHMSExaminationQueueList(){
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
int CHMSExaminationQueueList::OnHMSExaminationQueueListListLoadData(){
	return 0;
}
CString CHMSExaminationQueueList::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFromTime, szToTime, szSheetNo,tmpStr;
	UpdateData(true);

	if(m_szTimeKey == _T("2")){
			szFromTime = _T("00:00:00");
			szToTime = _T("11:59:00");
	}
	else if(m_szTimeKey == _T("3")){
		szFromTime = _T("12:00:00");
		szToTime = _T("23:59:59");
	}
	else
	{
		szFromTime = _T("00:00:00");
		szToTime = _T("23:59:59");
	}
	
	if(!m_szRoomKey.IsEmpty())
		szWhere.Format(_T(" AND he_roomid=%d"), ToInt(m_szRoomKey));
	
	if(!m_szPatientName.IsEmpty()){
		szWhere.AppendFormat(_T(" AND lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(lower(chr(37)||'%s'||chr(37))) "), m_szPatientName);
		m_nDocumentNo = 0;
	}
	
	if(m_nStatus == 0)
	{
		szWhere.AppendFormat(_T(" AND he_status IN('O','P','T') "));
	}
	if(m_nStatus == 1 ){		
		szWhere.AppendFormat(_T(" AND he_status='O' "));
	}
	if(m_nStatus == 2 ){
		szWhere.AppendFormat(_T(" AND he_status IN('P','T') "));
	}
	if(m_nStatus == 3){
		szWhere.AppendFormat(_T(" AND hd_status='T' "));
	}

	if(!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hd_object='%s' "), m_szObjectKey);
	}

	szWhere.AppendFormat(_T(" AND he_examdate BETWEEN cast_string2timestamp('%s %s') AND cast_string2timestamp('%s %s') "), m_szFromDate, szFromTime, m_szToDate, szToTime);

	if(m_nDocumentNo > 0){
		szWhere.Format(_T(" AND hd_docno=%ld  "), m_nDocumentNo);
		m_szPatientName.Empty();
	}
	szSQL.Format(_T(" SELECT hp_patientno as patientno,	") \
		_T(" 	hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,") \
		_T(" 	hms_getsex(hp_sex) as sex,") \
		_T("		hd_object as objectid, ") \
		_T("	hms_getobjectname(hd_object) as object, ") \
		_T("	he_examdate as examdate, ") \
		_T("	hd_enddate as enddate, ") \
		_T("	sys_sel_getname('hms_suggestion', hd_suggestion) as suggestion, ") \
		_T("	he_roomid as roomid, " ) \
		_T("	he_receptno as receptno, " ) \
		_T("	he_status as statusid, " ) \
		_T("	sys_sel_getname('hms_reception_status', he_status) as status, " ) \
		_T("	he_emergency as emergency, ") \
		_T("	he_priority as priority, ") \
		_T("	he_receptidx as receptidx, ") \
		_T("	hpc_iscomplete, hpo_iscomplete, hd_transplace, hd_transdiagn,") \
		_T(" case when hd_areceptidx=he_receptidx then hd_suggestion else cast(' ' as nvarchar2(1)) end as suggestion ") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_exam ON(hd_docno=he_docno)") \
		_T(" WHERE 1=1 %s ") \
		_T(" ORDER BY trunc(examdate), he_roomid, he_receptno, pname "), szWhere);
	return szSQL;
}