//#include "stdafx.h"
#include "MainFrm.h"
#include "VIMESLISPatientList.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISPatientList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISPatientList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnTypeAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISPatientList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISPatientList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISPatientList *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnReloadSelectFnc(CWnd *pWnd){
	CVIMESLISPatientList *pVw = (CVIMESLISPatientList *)pWnd;
	pVw->OnReloadSelect();
} 

static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISPatientList*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CVIMESLISPatientList*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESLISPatientList*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESLISPatientList*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISPatientList *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISPatientList *)pWnd)->OnToDateCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISPatientList* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISPatientList *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CVIMESLISPatientList *)pWnd)->OnRoomAddNew();
}*/
static int _OnAddLabPatientListFnc(CWnd *pWnd){
	 return ((CVIMESLISPatientList*)pWnd)->OnAddLabPatientList();
} 
static int _OnEditLabPatientListFnc(CWnd *pWnd){
	 return ((CVIMESLISPatientList*)pWnd)->OnEditLabPatientList();
} 
static int _OnDeleteLabPatientListFnc(CWnd *pWnd){
	 return ((CVIMESLISPatientList*)pWnd)->OnDeleteLabPatientList();
} 
static int _OnSaveLabPatientListFnc(CWnd *pWnd){
	 return ((CVIMESLISPatientList*)pWnd)->OnSaveLabPatientList();
} 
static int _OnCancelLabPatientListFnc(CWnd *pWnd){
	 return ((CVIMESLISPatientList*)pWnd)->OnCancelLabPatientList();
} 
CVIMESLISPatientList::CVIMESLISPatientList(){

	m_nDlgWidth = 419;
	m_nDlgHeight = 560;
	SetDefaultValues();
}
CVIMESLISPatientList::~CVIMESLISPatientList(){
}
void CVIMESLISPatientList::OnCreateComponents(){

	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 385, 630);
	m_wndRoomLabel.Create(this, _T("Room"), 10, 30, 100, 55);
	m_wndRoom.Create(this,105, 30, 379, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 60, 100, 85);
	m_wndType.Create(this,105, 60, 379, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 150, 100, 175);
	m_wndStatus.Create(this,105, 150, 295, 175); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 90, 100, 115);
	m_wndFromDate.Create(this,105, 90, 185, 115); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 90, 295, 115);
	m_wndToDate.Create(this,300, 90, 380, 115); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 120, 100, 145);
	m_wndPatientName.Create(this,105, 120, 215, 145); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 220, 120, 295, 145);
	m_wndDocumentNo.Create(this,300, 120, 380, 145); 
	m_wndReload.Create(this, _T("Reload"), 300, 150, 380, 175);
	m_wndOrderList.Create(this,10, 180, 380, 625); 

/*
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 385, 650);
	m_wndRoomLabel.Create(this, _T("Room"), 11, 28, 101, 50);
	m_wndRoom.Create(this,106, 28, 380, 50); 
	m_wndTypeLabel.Create(this, _T("Type"), 11, 55, 101, 77);
	m_wndType.Create(this,106, 55, 380, 77); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 82, 101, 104);
	m_wndFromDate.Create(this,106, 82, 186, 104); 
	m_wndToDateLabel.Create(this, _T("To Date"), 221, 82, 296, 104);
	m_wndToDate.Create(this,301, 82, 381, 104); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 11, 109, 101, 131);
	m_wndPatientName.Create(this,106, 109, 216, 131); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 221, 109, 296, 131);
	m_wndDocumentNo.Create(this,301, 109, 381, 131); 
	m_wndStatusLabel.Create(this, _T("Status"), 11, 136, 101, 158);
	m_wndStatus.Create(this,106, 136, 296, 158); 
	m_wndReload.Create(this, _T("Reload"), 301, 136, 381, 160);
	m_wndOrderList.Create(this,11, 163, 381, 643); 


*/	
}
void CVIMESLISPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetNotEmpty(false);
//	m_wndDocumentNo.SetLimitText(8);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);
	m_wndRoom.ModifyStyle(0, WS_TABSTOP);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndOrderList.InsertColumn(0, _T("Doc#"), CFMT_NUMBER, 70);
	m_wndOrderList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndOrderList.InsertColumn(2, _T("Age"), CFMT_TEXT, 40);
	m_wndOrderList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(4, _T("OrderID"), CFMT_NUMBER, 0);	
	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CVIMESLISPatientList::OnSetWindowEvents(){

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
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndReload.SetEvent(WE_CLICK, _OnReloadSelectFnc);

	
	//m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);

	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLabPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLabPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLabPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLabPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLabPatientListFnc, 0, 'T', VK_CONTROL);
*/

	SetMode(VM_NONE);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hpp_type FROM hms_paraclinicalperm WHERe lower(hpp_userid)=lower('%s') "), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hpp_type"), m_szTypeKey);
		m_wndType.SetCurrent(0, m_szTypeKey);
	}
	m_szFromDate = m_szToDate = pMF->GetSysDate();
//	m_szFromDate = _T("2009/04/10");
	m_szStatusKey = _T("S");
	m_wndStatus.SetCurrent(0, m_szStatusKey);
	m_szRoomKey.Format(_T("%d"), pMF->m_nRoomID);
//	m_wndType.EnableWindow(false);
	m_wndPatientName.SetFocus();	
//	OnOrderListLoadData();


	EnableControls(TRUE);
	UpdateData(FALSE);
	m_wndPatientName.SetFocus();
}
void CVIMESLISPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
}
void CVIMESLISPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVIMESLISPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESLISPatientList::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szStatusKey.Empty();
	m_szPatientName.Empty();
	m_nDocumentNo=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szRoomKey.Empty();

}
int CVIMESLISPatientList::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
		
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
 			EnableControls(TRUE); 
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
void CVIMESLISPatientList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISPatientList::OnTypeSelendok(){
	//OnOrderListLoadData();
}
/*void CVIMESLISPatientList::OnTypeSetfocus(){
	
}*/
/*void CVIMESLISPatientList::OnTypeKillfocus(){
	
}*/
long CVIMESLISPatientList::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" AND htg_id='%s' "), m_szTypeKey);
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT htg_id as id, htg_desc as name from hms_testgrouplist WHERE htg_active='Y' and htg_id in(select hpp_type FROM hms_paraclinicalperm WHERE lower(hpp_userid)=lower('%s') ) %s ORDER BY htg_id"), pMF->GetCurrentUser(), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CVIMESLISPatientList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESLISPatientList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISPatientList::OnStatusSelendok(){
	//OnOrderListLoadData();	 
}
/*void CVIMESLISPatientList::OnStatusSetfocus(){
	
}*/
/*void CVIMESLISPatientList::OnStatusKillfocus(){
	
}*/
long CVIMESLISPatientList::OnStatusLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString tmpStr;
	m_wndStatus.DeleteAllItems(); 
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		if(m_szStatusKey == _T("S"))
		{
			TranslateString(_T("Send"), tmpStr);
			m_wndStatus.AddItems(
				_T("S"), 
				tmpStr, 
				NULL);
		}
		else
		{
			TranslateString(_T("Terminated"), tmpStr);
			m_wndStatus.AddItems(
				_T("T"), 
				tmpStr, 
				NULL);
		}
		return 1;
	};
	
	int nCount = 0;
	
	TranslateString(_T("Send"), tmpStr);
	m_wndStatus.AddItems(
			_T("S"), 
			tmpStr, 
			NULL);
	TranslateString(_T("Terminated"), tmpStr);
	m_wndStatus.AddItems(
			_T("T"), 
			tmpStr, 
			NULL);
	return nCount;
}
/*void CVIMESLISPatientList::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESLISPatientList::OnPatientNameChange(){
	
} */
/*void CVIMESLISPatientList::OnPatientNameSetfocus(){
	
} */
/*void CVIMESLISPatientList::OnPatientNameKillfocus(){
	
} */
int CVIMESLISPatientList::OnPatientNameCheckValue(){
	OnOrderListLoadData();
	return 1;
} 
void CVIMESLISPatientList::OnOrderListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_wndTest.OnAddTestOrder();
} 
void CVIMESLISPatientList::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	long nOrderID = ToLong(m_wndOrderList.GetItemText(nNewItem, 4));
	pMF->m_wndTest.LoadData(nOrderID);
} 
int CVIMESLISPatientList::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESLISPatientList::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	int nCount = 0;

	UpdateData(true);
	if(m_szTypeKey.IsEmpty())
	{
		m_wndType.SetFocus();
		return -1;
	}

	if(m_szStatusKey == "T")
	{
		szWhere.Format(_T(" date(hto_resultdte) between date('%s') and date('%s') and hto_status='T' "), m_szFromDate, m_szToDate);	
	}
	else
	{
		if(m_szStatusKey.IsEmpty())
			szWhere.Format(_T(" date(hto_orderdte) between date('%s') and date('%s') "), m_szFromDate, m_szToDate);	
		else
			szWhere.Format(_T(" date(hto_orderdte) between date('%s') and date('%s') and hto_status <> 'T' "), m_szFromDate, m_szToDate);	
	}

	
	if(!m_szPatientName.IsEmpty()){
		CString szSurName, szMidName, szFirstName;
		SplitName(m_szPatientName, szSurName, szMidName, szFirstName);
		if(!szSurName.IsEmpty())
			szWhere.AppendFormat(_T(" AND lower(hp_surname)=lower('%s') "), szSurName);

		if(!szMidName.IsEmpty())
			szWhere.AppendFormat(_T(" AND lower(hp_midname)=lower('%s') "), szMidName);
		
		if(!szFirstName.IsEmpty())
			szWhere.AppendFormat(_T(" AND lower(hp_fstname)=lower('%s') "), szFirstName);

	}
	if(m_nDocumentNo > 0){
		szWhere.AppendFormat(_T(" AND hto_docno=%ld"), m_nDocumentNo);
	}


	szSQL.Format(_T(" SELECT ") \
				_T(" hto_orderno, ") \
				_T(" hto_docno,") \
				_T(" trim(hp_surname||' '||hp_midname||' '||hp_fstname) as hto_patientname, ") \
				_T(" hms_getage(hp_birthdte) as hto_age, ") \
				_T(" (select ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as hto_sex ") \
				_T(" FROM hms_patient ") \
				_T(" LEFT JOIN hms_doc ON(hd_patno=hp_patientno) ") \
				_T(" LEFT JOIN hms_testorder ON(hd_no=hto_docno)") \
				_T(" WHERE  hto_testtype='%s' AND %s ") \
				_T(" ORDER BY hto_patientname, hto_orderno "), m_szTypeKey, szWhere );

	
	pMF->BeginWaitCursor();

	nCount = rs.ExecSQL(szSQL);
	m_wndOrderList.DeleteAllItems();
	m_wndOrderList.SetItemCountEx(nCount);
	
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("hto_docno")), 
			rs.GetValue(_T("hto_patientname")), 
			rs.GetValue(_T("hto_age")), 
			rs.GetValue(_T("hto_sex")), 
			rs.GetValue(_T("hto_orderno")), 
			NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad();	
	pMF->EndWaitCursor();
	return nCount;

}
/*void CVIMESLISPatientList::OnDocumentNoChange(){
	
} */
/*void CVIMESLISPatientList::OnDocumentNoSetfocus(){
	
} */
/*void CVIMESLISPatientList::OnDocumentNoKillfocus(){
	
} */
int CVIMESLISPatientList::OnDocumentNoCheckValue(){
	return 0;
	CString szText;
	m_wndDocumentNo.GetWindowText(szText);
	if(szText.IsEmpty())
	{
		m_nDocumentNo = 0;
		UpdateData(false);
	}
	OnOrderListLoadData();
	return 1;
} 
/*void CVIMESLISPatientList::OnFromDateChange(){
	
} */
/*void CVIMESLISPatientList::OnFromDateSetfocus(){
	
} */
/*void CVIMESLISPatientList::OnFromDateKillfocus(){
	
} */
int CVIMESLISPatientList::OnFromDateCheckValue(){
//	OnOrderListLoadData();
	return 0;
} 
/*void CVIMESLISPatientList::OnToDateChange(){
	
} */
/*void CVIMESLISPatientList::OnToDateSetfocus(){
	
} */
/*void CVIMESLISPatientList::OnToDateKillfocus(){
	
} */
int CVIMESLISPatientList::OnToDateCheckValue(){
	//OnOrderListLoadData();
	return 0;
} 
void CVIMESLISPatientList::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISPatientList::OnRoomSelendok(){
	UpdateData(true);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_nRoomID = ToInt(m_szRoomKey);
}
/*void CVIMESLISPatientList::OnRoomSetfocus(){
	
}*/
/*void CVIMESLISPatientList::OnRoomKillfocus(){
	
}*/
long CVIMESLISPatientList::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.Format(_T(" AND sr_id=%d "), ToInt(m_szRoomKey));
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sr_id as id, sr_name as name FROM sys_room WHERE sr_deptid='%s' ORDER BY sr_id "), pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CVIMESLISPatientList::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CVIMESLISPatientList::OnAddLabPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add LabPatientList"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CVIMESLISPatientList::OnEditLabPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit LabPatientList"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CVIMESLISPatientList::OnDeleteLabPatientList(){
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
 		OnCancelLabPatientList(); 
 	}
return 0;
 } 
int CVIMESLISPatientList::OnSaveLabPatientList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnLabPatientListListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESLISPatientList::OnCancelLabPatientList(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CVIMESLISPatientList::OnLabPatientListListLoadData(){
	return 0;
}

void CVIMESLISPatientList::OnReloadSelect(){
	OnOrderListLoadData();
}
BOOL CVIMESLISPatientList::PreTranslateMessage(MSG* pMsg)
{
#ifdef LAB_MODULE
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN && GetFocus() == &m_wndOrderList)
	{
		CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
		pMF->m_wndTest.OnAddTestOrder();
		return FALSE;
	}
#endif

	return CGuiView::PreTranslateMessage(pMsg);
}
