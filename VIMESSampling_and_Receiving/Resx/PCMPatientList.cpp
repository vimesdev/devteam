#include "PCMPatientList.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPCMPatientList* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CPCMPatientList *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnRoomAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPCMPatientList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPCMPatientList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnTypeAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPCMPatientList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CPCMPatientList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPCMPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPCMPatientList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPCMPatientList *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CPCMPatientList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CPCMPatientList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnReloadSelectFnc(CWnd *pWnd){
	CPCMPatientList *pVw = (CPCMPatientList *)pWnd;
	pVw->OnReloadSelect();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CPCMPatientList*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CPCMPatientList*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPCMPatientList*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CPCMPatientList*)pWnd)->OnOrderListDeleteItem();
} 
static int _OnAddPCMPatientListFnc(CWnd *pWnd){
	 return ((CPCMPatientList*)pWnd)->OnAddPCMPatientList();
} 
static int _OnEditPCMPatientListFnc(CWnd *pWnd){
	 return ((CPCMPatientList*)pWnd)->OnEditPCMPatientList();
} 
static int _OnDeletePCMPatientListFnc(CWnd *pWnd){
	 return ((CPCMPatientList*)pWnd)->OnDeletePCMPatientList();
} 
static int _OnSavePCMPatientListFnc(CWnd *pWnd){
	 return ((CPCMPatientList*)pWnd)->OnSavePCMPatientList();
} 
static int _OnCancelPCMPatientListFnc(CWnd *pWnd){
	 return ((CPCMPatientList*)pWnd)->OnCancelPCMPatientList();
} 
CPCMPatientList::CPCMPatientList(){

	m_nDlgWidth = 395;
	m_nDlgHeight = 640;
	SetDefaultValues();
}
CPCMPatientList::~CPCMPatientList(){
}
void CPCMPatientList::OnCreateComponents(){
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

}
void CPCMPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(8);
	m_wndDocumentNo.SetCheckValue(true);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndOrderList.InsertColumn(0, _T("Doc#"), CFMT_NUMBER, 70);
	m_wndOrderList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndOrderList.InsertColumn(2, _T("Age"), CFMT_TEXT, 40);
	m_wndOrderList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 40);

}
void CPCMPatientList::OnSetWindowEvents(){
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
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
	m_wndReload.SetEvent(WE_CLICK, _OnReloadSelectFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPCMPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPCMPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePCMPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePCMPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPCMPatientListFnc, 0, 'T', VK_CONTROL);

}
void CPCMPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);

}
void CPCMPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPCMPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPCMPatientList::SetDefaultValues(){

	m_szRoomKey.Empty();
	m_szTypeKey.Empty();
	m_szStatusKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPatientName.Empty();
	m_nDocumentNo=0;

}
int CPCMPatientList::SetMode(int nMode){ 
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
void CPCMPatientList::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPCMPatientList::OnRoomSelendok(){
	 
}
/*void CPCMPatientList::OnRoomSetfocus(){
	
}*/
/*void CPCMPatientList::OnRoomKillfocus(){
	
}*/
long CPCMPatientList::OnRoomLoadData(){
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
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPCMPatientList::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPCMPatientList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPCMPatientList::OnTypeSelendok(){
	 
}
/*void CPCMPatientList::OnTypeSetfocus(){
	
}*/
/*void CPCMPatientList::OnTypeKillfocus(){
	
}*/
long CPCMPatientList::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPCMPatientList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPCMPatientList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPCMPatientList::OnStatusSelendok(){
	 
}
/*void CPCMPatientList::OnStatusSetfocus(){
	
}*/
/*void CPCMPatientList::OnStatusKillfocus(){
	
}*/
long CPCMPatientList::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPCMPatientList::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPCMPatientList::OnFromDateChange(){
	
} */
/*void CPCMPatientList::OnFromDateSetfocus(){
	
} */
/*void CPCMPatientList::OnFromDateKillfocus(){
	
} */
int CPCMPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPCMPatientList::OnToDateChange(){
	
} */
/*void CPCMPatientList::OnToDateSetfocus(){
	
} */
/*void CPCMPatientList::OnToDateKillfocus(){
	
} */
int CPCMPatientList::OnToDateCheckValue(){
	return 0;
} 
/*void CPCMPatientList::OnPatientNameChange(){
	
} */
/*void CPCMPatientList::OnPatientNameSetfocus(){
	
} */
/*void CPCMPatientList::OnPatientNameKillfocus(){
	
} */
int CPCMPatientList::OnPatientNameCheckValue(){
	return 0;
} 
/*void CPCMPatientList::OnDocumentNoChange(){
	
} */
/*void CPCMPatientList::OnDocumentNoSetfocus(){
	
} */
/*void CPCMPatientList::OnDocumentNoKillfocus(){
	
} */
int CPCMPatientList::OnDocumentNoCheckValue(){
	return 0;
} 
void CPCMPatientList::OnReloadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPCMPatientList::OnOrderListDblClick(){
	
} 
void CPCMPatientList::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPCMPatientList::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPCMPatientList::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	m_wndOrderList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("Doc#")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CPCMPatientList::OnAddPCMPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add PCMPatientList"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CPCMPatientList::OnEditPCMPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit PCMPatientList"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CPCMPatientList::OnDeletePCMPatientList(){
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
 		OnCancelPCMPatientList(); 
 	}
return 0;
 } 
int CPCMPatientList::OnSavePCMPatientList(){
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
 		//OnPCMPatientListListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPCMPatientList::OnCancelPCMPatientList(){
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
int CPCMPatientList::OnPCMPatientListListLoadData(){
	return 0;
}
