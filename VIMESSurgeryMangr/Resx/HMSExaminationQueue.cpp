#include "HMSExaminationQueue.h"
#include "MainFrm.h"
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
/*static void _OnFromTimeChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnFromTimeChange();
} */
/*static void _OnFromTimeSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnFromTimeSetfocus();} */ 
/*static void _OnFromTimeKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnFromTimeKillfocus();
} */
static int _OnFromTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueue *)pWnd)->OnFromTimeCheckValue();
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
/*static void _OnToTimeChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnToTimeChange();
} */
/*static void _OnToTimeSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnToTimeSetfocus();} */ 
/*static void _OnToTimeKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnToTimeKillfocus();
} */
static int _OnToTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueue *)pWnd)->OnToTimeCheckValue();
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
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMSExaminationQueue *pVw = (CHMSExaminationQueue *)pWnd;
	pVw->OnLoadSelect();
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
/*static void _OnTotalChangeFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnTotalChange();
} */
/*static void _OnTotalSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnTotalSetfocus();} */ 
/*static void _OnTotalKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationQueue *)pWnd)->OnTotalKillfocus();
} */
static int _OnTotalCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationQueue *)pWnd)->OnTotalCheckValue();
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
	m_nDlgHeight = 668;
	SetDefaultValues();
}
CHMSExaminationQueue::~CHMSExaminationQueue(){
}
void CHMSExaminationQueue::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1010, 60);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 65, 1010, 655);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 70, 55);
	m_wndFromDate.Create(this,75, 30, 155, 55); 
	m_wndFromTime.Create(this,160, 30, 210, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 30, 275, 55);
	m_wndToDate.Create(this,280, 30, 360, 55); 
	m_wndToTime.Create(this,365, 30, 415, 55); 
	m_wndRoomLabel.Create(this, _T("Status"), 420, 30, 485, 55);
	m_wndRoom.Create(this,488, 30, 568, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 573, 30, 658, 55);
	m_wndPatientName.Create(this,663, 30, 783, 55); 
	m_wndLoad.Create(this, _T("Load"), 933, 30, 1003, 55);
	m_wndPatientList.Create(this,10, 90, 1005, 650); 
	m_wndTotalLabel.Create(this, _T("Total"), 788, 30, 843, 55);
	m_wndTotal.Create(this,848, 30, 928, 55); 

}
void CHMSExaminationQueue::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndFromTime.SetMax(CTime(pMF->GetSysTime()));
	m_wndFromTime.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndToTime.SetMax(CTime(pMF->GetSysTime()));
	m_wndToTime.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndTotal.SetLimitText(16);
	m_wndTotal.SetCheckValue(true);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndPatientList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 70);
	m_wndPatientList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(2, _T("Age"), CFMT_TEXT, 40);
	m_wndPatientList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(4, _T("Address"), CFMT_TEXT, 250);
	m_wndPatientList.InsertColumn(5, _T("Exam Date"), CFMT_DATE, 120);
	m_wndPatientList.InsertColumn(6, _T("Room"), CFMT_NUMBER, 70);
	m_wndPatientList.InsertColumn(7, _T("Recept ID"), CFMT_NUMBER, 60);
	m_wndPatientList.InsertColumn(8, _T("Status"), CFMT_DATE, 70);
	m_wndPatientList.InsertColumn(9, _T("Object"), CFMT_TEXT, 80);

}
void CHMSExaminationQueue::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndFromTime.SetEvent(WE_CHANGE, _OnFromTimeChangeFnc);
	//m_wndFromTime.SetEvent(WE_SETFOCUS, _OnFromTimeSetfocusFnc);
	//m_wndFromTime.SetEvent(WE_KILLFOCUS, _OnFromTimeKillfocusFnc);
	m_wndFromTime.SetEvent(WE_CHECKVALUE, _OnFromTimeCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndToTime.SetEvent(WE_CHANGE, _OnToTimeChangeFnc);
	//m_wndToTime.SetEvent(WE_SETFOCUS, _OnToTimeSetfocusFnc);
	//m_wndToTime.SetEvent(WE_KILLFOCUS, _OnToTimeKillfocusFnc);
	m_wndToTime.SetEvent(WE_CHECKVALUE, _OnToTimeCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndTotal.SetEvent(WE_CHANGE, _OnTotalChangeFnc);
	//m_wndTotal.SetEvent(WE_SETFOCUS, _OnTotalSetfocusFnc);
	//m_wndTotal.SetEvent(WE_KILLFOCUS, _OnTotalKillfocusFnc);
	m_wndTotal.SetEvent(WE_CHECKVALUE, _OnTotalCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExaminationQueueFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExaminationQueueFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExaminationQueueFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExaminationQueueFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExaminationQueueFnc, 0, 'T', VK_CONTROL);

}
void CHMSExaminationQueue::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndFromTime.GetDlgCtrlID(), m_szFromTime);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndToTime.GetDlgCtrlID(), m_szToTime);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndTotal.GetDlgCtrlID(), m_nTotal);

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

	m_szFromDate.Empty();
	m_szFromTime.Empty();
	m_szToDate.Empty();
	m_szToTime.Empty();
	m_szRoomKey.Empty();
	m_szPatientName.Empty();
	m_nTotal=0;

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
/*void CHMSExaminationQueue::OnFromDateChange(){
	
} */
/*void CHMSExaminationQueue::OnFromDateSetfocus(){
	
} */
/*void CHMSExaminationQueue::OnFromDateKillfocus(){
	
} */
int CHMSExaminationQueue::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSExaminationQueue::OnFromTimeChange(){
	
} */
/*void CHMSExaminationQueue::OnFromTimeSetfocus(){
	
} */
/*void CHMSExaminationQueue::OnFromTimeKillfocus(){
	
} */
int CHMSExaminationQueue::OnFromTimeCheckValue(){
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
/*void CHMSExaminationQueue::OnToTimeChange(){
	
} */
/*void CHMSExaminationQueue::OnToTimeSetfocus(){
	
} */
/*void CHMSExaminationQueue::OnToTimeKillfocus(){
	
} */
int CHMSExaminationQueue::OnToTimeCheckValue(){
	return 0;
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
/*void CHMSExaminationQueue::OnPatientNameChange(){
	
} */
/*void CHMSExaminationQueue::OnPatientNameSetfocus(){
	
} */
/*void CHMSExaminationQueue::OnPatientNameKillfocus(){
	
} */
int CHMSExaminationQueue::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSExaminationQueue::OnLoadSelect(){
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
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("Address")), 
			rs.GetValue(_T("ExamDate")), 
			rs.GetValue(_T("Room")), 
			rs.GetValue(_T("ReceptID")), 
			rs.GetValue(_T("Status")), 
			rs.GetValue(_T("Object")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSExaminationQueue::OnTotalChange(){
	
} */
/*void CHMSExaminationQueue::OnTotalSetfocus(){
	
} */
/*void CHMSExaminationQueue::OnTotalKillfocus(){
	
} */
int CHMSExaminationQueue::OnTotalCheckValue(){
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
