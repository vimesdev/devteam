#include "HMSExaminationQueue.h"
#include "MainFrm.h"
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CHMSExaminationQueue*)pWnd)->OnAllSelect();
}
static void _OnOpeningSelectFnc(CWnd *pWnd){
	  ((CHMSExaminationQueue*)pWnd)->OnOpeningSelect();
}
static void _OnExaminedSelectFnc(CWnd *pWnd){
	  ((CHMSExaminationQueue*)pWnd)->OnExaminedSelect();
}
static void _OnTerminatedSelectFnc(CWnd *pWnd){
	  ((CHMSExaminationQueue*)pWnd)->OnTerminatedSelect();
}
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationQueue* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationQueue *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnRoomAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationQueue* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationQueue *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnObjectAddNew();
}*/
static void _OnTimeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationQueue* )pWnd)->OnTimeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTimeSelendokFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnTimeSelendok();
}
/*static void _OnTimeSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnTimeKillfocus();
}*/
/*static void _OnTimeKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnTimeKillfocus();
}*/
static long _OnTimeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationQueue *)pWnd)->OnTimeLoadData();
}
/*static void _OnTimeAddNewFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnTimeAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueue *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueue *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueue *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueue *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnRefrehSelectFnc(CWnd *pWnd){
	CHMSExaminationQueue *pVw = (CHMSExaminationQueue *)pWnd;
	pVw->OnRefrehSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationQueue*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSExaminationQueue*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExaminationQueue*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueue*)pWnd)->OnPatientListDeleteItem();
} 
static int _OnAddHMSExaminationQueueFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueue*)pWnd)->OnAddHMSExaminationQueue();
} 
static int _OnEditHMSExaminationQueueFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueue*)pWnd)->OnEditHMSExaminationQueue();
} 
static int _OnDeleteHMSExaminationQueueFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueue*)pWnd)->OnDeleteHMSExaminationQueue();
} 
static int _OnSaveHMSExaminationQueueFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueue*)pWnd)->OnSaveHMSExaminationQueue();
} 
static int _OnCancelHMSExaminationQueueFnc(CWnd *pWnd){
	 return ((CHMSExaminationQueue*)pWnd)->OnCancelHMSExaminationQueue();
} 
CHMSExaminationQueue::CHMSExaminationQueue(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 877;
	SetDefaultValues();
}
CHMSExaminationQueue::~CHMSExaminationQueue(){
}
void CHMSExaminationQueue::OnCreateComponents(){
	m_wndStatusGroupBox.Create(this, _T("Status"), 5, 5, 205, 90);
	m_wndSearchInformation.Create(this, _T("Search Information"), 210, 5, 990, 90);
	m_wndPatientListGroupBox.Create(this, _T("Patients List"), 5, 95, 990, 615);
	m_wndAll.Create(this, _T("All"), 10, 30, 100, 55);
	m_wndOpening.Create(this, _T("Opening"), 105, 30, 195, 55);
	m_wndExamined.Create(this, _T("Examined"), 10, 60, 100, 85);
	m_wndTerminated.Create(this, _T("Terminated"), 105, 60, 195, 85);
	m_wndRoomLabel.Create(this, _T("Room"), 215, 30, 285, 55);
	m_wndRoom.Create(this,290, 30, 540, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 545, 30, 645, 55);
	m_wndObject.Create(this,650, 30, 765, 55); 
	m_wndTimeLabel.Create(this, _T("Time"), 770, 30, 860, 55);
	m_wndTime.Create(this,865, 30, 955, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 215, 60, 285, 85);
	m_wndFromDate.Create(this,290, 60, 375, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 380, 60, 450, 85);
	m_wndToDate.Create(this,455, 60, 540, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 545, 60, 645, 85);
	m_wndPatientName.Create(this,650, 60, 765, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 770, 60, 860, 85);
	m_wndDocumentNo.Create(this,865, 60, 955, 85); 
	m_wndRefreh.Create(this, _T("@"), 960, 60, 985, 85);
	m_wndPatientList.Create(this,10, 120, 985, 610); 

}
void CHMSExaminationQueue::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndTime.SetCheckValue(true);
	m_wndTime.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndTime.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTime.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndPatientList.InsertColumn(0, _T("Sheet No"), CFMT_TEXT, 70);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 70);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndPatientList.InsertColumn(3, _T("Age"), CFMT_TEXT, 40);
	m_wndPatientList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 40);
	m_wndPatientList.InsertColumn(5, _T("Object"), CFMT_TEXT, 85);
	m_wndPatientList.InsertColumn(6, _T("Exam Date"), CFMT_DATE, 120);
	m_wndPatientList.InsertColumn(7, _T("End Date"), CFMT_DATE, 120);
	m_wndPatientList.InsertColumn(8, _T("Status"), CFMT_DATE, 80);
	m_wndPatientList.InsertColumn(9, _T("Suggestion"), CFMT_TEXT, 130);

}
void CHMSExaminationQueue::OnSetWindowEvents(){
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
	m_wndTime.SetEvent(WE_SELENDOK, _OnTimeSelendokFnc);
	//m_wndTime.SetEvent(WE_SETFOCUS, _OnTimeSetfocusFnc);
	//m_wndTime.SetEvent(WE_KILLFOCUS, _OnTimeKillfocusFnc);
	m_wndTime.SetEvent(WE_SELCHANGE, _OnTimeSelectChangeFnc);
	m_wndTime.SetEvent(WE_LOADDATA, _OnTimeLoadDataFnc);
	//m_wndTime.SetEvent(WE_ADDNEW, _OnTimeAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndRefreh.SetEvent(WE_CLICK, _OnRefrehSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExaminationQueueFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExaminationQueueFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExaminationQueueFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExaminationQueueFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExaminationQueueFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSExaminationQueue::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndOpening.GetDlgCtrlID(), m_nOpening);
	DDX_Radio(pDX, m_wndExamined.GetDlgCtrlID(), m_nExamined);
	DDX_Radio(pDX, m_wndTerminated.GetDlgCtrlID(), m_nTerminated);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndTime.GetDlgCtrlID(), m_szTimeKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);

}
void CHMSExaminationQueue::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExaminationQueue::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExaminationQueue::SetDefaultValues(){

	m_nAll=0;
	m_nOpening=0;
	m_nExamined=0;
	m_nTerminated=0;
	m_szRoomKey.Empty();
	m_szObjectKey.Empty();
	m_szTimeKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPatientName.Empty();
	m_nDocumentNo=0;

}
int CHMSExaminationQueue::SetMode(int nMode){
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
void CHMSExaminationQueue::OnAllSelect(){
	
}
void CHMSExaminationQueue::OnOpeningSelect(){
	
}
void CHMSExaminationQueue::OnExaminedSelect(){
	
}
void CHMSExaminationQueue::OnTerminatedSelect(){
	
}
void CHMSExaminationQueue::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationQueue::OnRoomSelendok(){
	 
}
/*void CHMSExaminationQueue::OnRoomSetfocus(){
	
}*/
/*void CHMSExaminationQueue::OnRoomKillfocus(){
	
}*/
long CHMSExaminationQueue::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExaminationQueue::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExaminationQueue::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationQueue::OnObjectSelendok(){
	 
}
/*void CHMSExaminationQueue::OnObjectSetfocus(){
	
}*/
/*void CHMSExaminationQueue::OnObjectKillfocus(){
	
}*/
long CHMSExaminationQueue::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExaminationQueue::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExaminationQueue::OnTimeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationQueue::OnTimeSelendok(){
	 
}
/*void CHMSExaminationQueue::OnTimeSetfocus(){
	
}*/
/*void CHMSExaminationQueue::OnTimeKillfocus(){
	
}*/
long CHMSExaminationQueue::OnTimeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTime.IsSearchKey() && !m_szTimeKey.IsEmpty()){
	};
	m_wndTime.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTime.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExaminationQueue::OnTimeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExaminationQueue::OnFromDateChange(){
	
} */
/*void CHMSExaminationQueue::OnFromDateSetfocus(){
	
} */
/*void CHMSExaminationQueue::OnFromDateKillfocus(){
	
} */
int CHMSExaminationQueue::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSExaminationQueue::OnToDateChange(){
	
} */
/*void CHMSExaminationQueue::OnToDateSetfocus(){
	
} */
/*void CHMSExaminationQueue::OnToDateKillfocus(){
	
} */
int CHMSExaminationQueue::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSExaminationQueue::OnPatientNameChange(){
	
} */
/*void CHMSExaminationQueue::OnPatientNameSetfocus(){
	
} */
/*void CHMSExaminationQueue::OnPatientNameKillfocus(){
	
} */
int CHMSExaminationQueue::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSExaminationQueue::OnDocumentNoChange(){
	
} */
/*void CHMSExaminationQueue::OnDocumentNoSetfocus(){
	
} */
/*void CHMSExaminationQueue::OnDocumentNoKillfocus(){
	
} */
int CHMSExaminationQueue::OnDocumentNoCheckValue(){
	return 0;
} 
void CHMSExaminationQueue::OnRefrehSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationQueue::OnPatientListDblClick(){
	
} 
void CHMSExaminationQueue::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExaminationQueue::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExaminationQueue::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	m_wndPatientList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("SheetNo")), 
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("Object")), 
			rs.GetValue(_T("ExamDate")), 
			rs.GetValue(_T("EndDate")), 
			rs.GetValue(_T("Status")), 
			rs.GetValue(_T("Suggestion")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSExaminationQueue::OnAddHMSExaminationQueue(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSExaminationQueue::OnEditHMSExaminationQueue(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExaminationQueue::OnDeleteHMSExaminationQueue(){
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
 		OnCancelHMSExaminationQueue(); 
 	}
	return 0;
}
int CHMSExaminationQueue::OnSaveHMSExaminationQueue(){
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
 		//OnHMSExaminationQueueListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSExaminationQueue::OnCancelHMSExaminationQueue(){
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
int CHMSExaminationQueue::OnHMSExaminationQueueListLoadData(){
	return 0;
}
