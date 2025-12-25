#include "HMSBed.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSBed* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnRoomSelendokFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnRoomSelendok();
}
/*static int _OnRoomSetfocusFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnRoomKillfocus();
}*/
/*static int _OnRoomKillfocusFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnRoomKillfocus();
}*/
static int _OnRoomLoadDataFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnRoomLoadData();
}
/*static int _OnRoomAddNewFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnRoomAddNew();
}*/
static int _OnBedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSBed* )pWnd)->OnBedSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnBedSelendokFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnBedSelendok();
}
/*static int _OnBedSetfocusFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnBedKillfocus();
}*/
/*static int _OnBedKillfocusFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnBedKillfocus();
}*/
static int _OnBedLoadDataFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnBedLoadData();
}
/*static int _OnBedAddNewFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnBedAddNew();
}*/
static int _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSBed* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDoctorSelendokFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnDoctorSelendok();
}
/*static int _OnDoctorSetfocusFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnDoctorKillfocus();
}*/
/*static int _OnDoctorKillfocusFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnDoctorKillfocus();
}*/
static int _OnDoctorLoadDataFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnDoctorLoadData();
}
/*static int _OnDoctorAddNewFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnDoctorAddNew();
}*/
static int _OnNurseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSBed* )pWnd)->OnNurseSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnNurseSelendokFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnNurseSelendok();
}
/*static int _OnNurseSetfocusFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnNurseKillfocus();
}*/
/*static int _OnNurseKillfocusFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnNurseKillfocus();
}*/
static int _OnNurseLoadDataFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnNurseLoadData();
}
/*static int _OnNurseAddNewFnc(CWnd *pWnd){
	 return ((CHMSBed *)pWnd)->OnNurseAddNew();
}*/
/*static int _OnInDateChangeFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnInDateChange();
} */
/*static int _OnInDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnInDateKillfocus();} */ 
/*static int _OnInDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnInDateKillfocus();
} */
static int _OnInDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnInDateCheckValue();
} 
/*static int _OnOutDateChangeFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnOutDateChange();
} */
/*static int _OnOutDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnOutDateKillfocus();} */ 
/*static int _OnOutDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnOutDateKillfocus();
} */
static int _OnOutDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnOutDateCheckValue();
} 
static int _OnBedListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSBed*)pWnd)->OnBedListLoadData();
} 
static int _OnBedListDblClickFnc(CWnd *pWnd){
	 return ((CHMSBed*)pWnd)->OnBedListDblClick();
} 
static int _OnBedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSBed*)pWnd)->OnBedListSelectChange(nOldItem, nNewItem);
} 
static int _OnBedListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSBed*)pWnd)->OnBedListDeleteItem();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSBed *pVw = (CHMSBed *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnTerminateSelectFnc(CWnd *pWnd){
	CHMSBed *pVw = (CHMSBed *)pWnd;
	return pVw->OnTerminateSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSBed *pVw = (CHMSBed *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSBed *pVw = (CHMSBed *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSBed *pVw = (CHMSBed *)pWnd;
	return pVw->OnCancelSelect();
} 
/*static int _OnUpdatedByChangeFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnUpdatedByChange();
} */
/*static int _OnUpdatedBySetfocusFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnUpdatedByKillfocus();} */ 
/*static int _OnUpdatedByKillfocusFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnUpdatedByKillfocus();
} */
static int _OnUpdatedByCheckValueFnc(CWnd *pWnd){
	return ((CHMSBed *)pWnd)->OnUpdatedByCheckValue();
} 
static int _OnAddHMSBedFnc(CWnd *pWnd){
	 return ((CHMSBed*)pWnd)->OnAddHMSBed();
} 
static int _OnEditHMSBedFnc(CWnd *pWnd){
	 return ((CHMSBed*)pWnd)->OnEditHMSBed();
} 
static int _OnDeleteHMSBedFnc(CWnd *pWnd){
	 return ((CHMSBed*)pWnd)->OnDeleteHMSBed();
} 
static int _OnSaveHMSBedFnc(CWnd *pWnd){
	 return ((CHMSBed*)pWnd)->OnSaveHMSBed();
} 
static int _OnCancelHMSBedFnc(CWnd *pWnd){
	 return ((CHMSBed*)pWnd)->OnCancelHMSBed();
} 
CHMSBed::CHMSBed(){

	m_nDlgWidth = 600;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CHMSBed::~CHMSBed(){
}
void CHMSBed::OnCreateComponents(){
	m_wndRoomLabel.Create(this, _T("Room"), 5, 5, 55, 25);
	m_wndRoom.Create(this,60, 5, 260, 25); 
	m_wndBedLabel.Create(this, _T("Bed"), 265, 5, 315, 25);
	m_wndBed.Create(this,320, 5, 520, 25); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 5, 30, 55, 50);
	m_wndDoctor.Create(this,60, 30, 260, 50); 
	m_wndNurseLabel.Create(this, _T("Nurse"), 265, 30, 315, 50);
	m_wndNurse.Create(this,320, 30, 520, 50); 
	m_wndInDateLabel.Create(this, _T("In Date"), 5, 55, 55, 75);
	m_wndInDate.Create(this,60, 55, 160, 75); 
	m_wndOutDateLabel.Create(this, _T("Out Date"), 266, 55, 316, 75);
	m_wndOutDate.Create(this,321, 55, 421, 75); 
	m_wndBedList.Create(this,5, 80, 576, 271); 
	m_wndAdd.Create(this, _T("&Add"), 231, 276, 296, 298);
	m_wndTerminate.Create(this, _T("&Terminate"), 301, 276, 366, 298);
	m_wndDelete.Create(this, _T("&Delete"), 371, 276, 436, 298);
	m_wndSave.Create(this, _T("&Save"), 441, 276, 506, 298);
	m_wndCancel.Create(this, _T("&Cancel"), 511, 276, 576, 298);
	m_wndUpdatedByLabel.Create(this, _T("Updated By"), 426, 55, 482, 75);
	m_wndUpdatedBy.Create(this,487, 55, 575, 75); 

}
void CHMSBed::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndRoom.SetDataRequirement(TRUE);
	m_wndRoom.LimitText(1024);
	m_wndBed.SetDataRequirement(TRUE);
	m_wndBed.LimitText(1024);
	m_wndDoctor.SetDataRequirement(TRUE);
	m_wndDoctor.LimitText(1024);
	m_wndNurse.SetDataRequirement(TRUE);
	m_wndNurse.LimitText(1024);
	m_wndInDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndInDate.SetDataRequirement(TRUE);
	m_wndOutDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndOutDate.SetDataRequirement(TRUE);
	m_wndUpdatedBy.SetLimitText(1024);
	m_wndUpdatedBy.SetDataRequirement(TRUE);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndBed.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndBed.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNurse.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndNurse.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndBedList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndBedList.InsertColumn(1, _T("In Date"), CFMT_DATETIME, 100);
	m_wndBedList.InsertColumn(2, _T("Out Date"), CFMT_DATETIME, 100);
	m_wndBedList.InsertColumn(3, _T("Room"), CFMT_TEXT, 120);
	m_wndBedList.InsertColumn(4, _T("Bed"), CFMT_TEXT, 120);
	m_wndBedList.InsertColumn(5, _T("Status"), CFMT_TEXT, 70);

}
void CHMSBed::OnSetWindowEvents(){
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndBed.SetEvent(WE_SELENDOK, _OnBedSelendokFnc);
	//m_wndBed.SetEvent(WE_SETFOCUS, _OnBedSetfocusFnc);
	//m_wndBed.SetEvent(WE_KILLFOCUS, _OnBedKillfocusFnc);
	m_wndBed.SetEvent(WE_SELCHANGE, _OnBedSelectChangeFnc);
	m_wndBed.SetEvent(WE_LOADDATA, _OnBedLoadDataFnc);
	//m_wndBed.SetEvent(WE_ADDNEW, _OnBedAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndNurse.SetEvent(WE_SELENDOK, _OnNurseSelendokFnc);
	//m_wndNurse.SetEvent(WE_SETFOCUS, _OnNurseSetfocusFnc);
	//m_wndNurse.SetEvent(WE_KILLFOCUS, _OnNurseKillfocusFnc);
	m_wndNurse.SetEvent(WE_SELCHANGE, _OnNurseSelectChangeFnc);
	m_wndNurse.SetEvent(WE_LOADDATA, _OnNurseLoadDataFnc);
	//m_wndNurse.SetEvent(WE_ADDNEW, _OnNurseAddNewFnc);
	//m_wndInDate.SetEvent(WE_CHANGE, _OnInDateChangeFnc);
	//m_wndInDate.SetEvent(WE_SETFOCUS, _OnInDateSetfocusFnc);
	//m_wndInDate.SetEvent(WE_KILLFOCUS, _OnInDateKillfocusFnc);
	m_wndInDate.SetEvent(WE_CHECKVALUE, _OnInDateCheckValueFnc);
	//m_wndOutDate.SetEvent(WE_CHANGE, _OnOutDateChangeFnc);
	//m_wndOutDate.SetEvent(WE_SETFOCUS, _OnOutDateSetfocusFnc);
	//m_wndOutDate.SetEvent(WE_KILLFOCUS, _OnOutDateKillfocusFnc);
	m_wndOutDate.SetEvent(WE_CHECKVALUE, _OnOutDateCheckValueFnc);
	m_wndBedList.SetEvent(WE_SELCHANGE, _OnBedListSelectChangeFnc);
	m_wndBedList.SetEvent(WE_LOADDATA, _OnBedListLoadDataFnc);
	m_wndBedList.SetEvent(WE_DBLCLICK, _OnBedListDblClickFnc);
	m_wndBedList.AddEvent(1, _T("Delete"), _OnBedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//m_wndUpdatedBy.SetEvent(WE_CHANGE, _OnUpdatedByChangeFnc);
	//m_wndUpdatedBy.SetEvent(WE_SETFOCUS, _OnUpdatedBySetfocusFnc);
	//m_wndUpdatedBy.SetEvent(WE_KILLFOCUS, _OnUpdatedByKillfocusFnc);
	m_wndUpdatedBy.SetEvent(WE_CHECKVALUE, _OnUpdatedByCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSBedFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSBedFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSBedFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSBedFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSBedFnc, 0, 'T', VK_CONTROL);

}
void CHMSBed::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndBed.GetDlgCtrlID(), m_szBedKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndNurse.GetDlgCtrlID(), m_szNurseKey);
	DDX_TextEx(pDX, m_wndInDate.GetDlgCtrlID(), m_szInDate);
	DDX_TextEx(pDX, m_wndOutDate.GetDlgCtrlID(), m_szOutDate);
	DDX_Text(pDX, m_wndUpdatedBy.GetDlgCtrlID(), m_szUpdatedBy);

}
void CHMSBed::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBed::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBed::SetDefaultValues(){

	m_szRoomKey.Empty();
	m_szBedKey.Empty();
	m_szDoctorKey.Empty();
	m_szNurseKey.Empty();
	m_szInDate.Empty();
	m_szOutDate.Empty();
	m_szUpdatedBy.Empty();

}
int CHMSBed::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSBed::OnRoomSelendok(){
	 return 0;
}
/*int CHMSBed::OnRoomSetfocus(){
	 return 0;
}*/
/*int CHMSBed::OnRoomKillfocus(){
	 return 0;
}*/
int CHMSBed::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey()){
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
/*int CHMSBed::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSBed::OnBedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSBed::OnBedSelendok(){
	 return 0;
}
/*int CHMSBed::OnBedSetfocus(){
	 return 0;
}*/
/*int CHMSBed::OnBedKillfocus(){
	 return 0;
}*/
int CHMSBed::OnBedLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBed.IsSearchKey()){
	};
	m_wndBed.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBed.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSBed::OnBedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSBed::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSBed::OnDoctorSelendok(){
	 return 0;
}
/*int CHMSBed::OnDoctorSetfocus(){
	 return 0;
}*/
/*int CHMSBed::OnDoctorKillfocus(){
	 return 0;
}*/
int CHMSBed::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey()){
	};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSBed::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSBed::OnNurseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSBed::OnNurseSelendok(){
	 return 0;
}
/*int CHMSBed::OnNurseSetfocus(){
	 return 0;
}*/
/*int CHMSBed::OnNurseKillfocus(){
	 return 0;
}*/
int CHMSBed::OnNurseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNurse.IsSearchKey()){
	};
	m_wndNurse.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSBed::OnNurseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSBed::OnInDateChange(){
	return 0;
} */
/*int CHMSBed::OnInDateSetfocus(){
	return 0;
} */
/*int CHMSBed::OnInDateKillfocus(){
	return 0;
} */
int CHMSBed::OnInDateCheckValue(){
	return 0;
} 
/*int CHMSBed::OnOutDateChange(){
	return 0;
} */
/*int CHMSBed::OnOutDateSetfocus(){
	return 0;
} */
/*int CHMSBed::OnOutDateKillfocus(){
	return 0;
} */
int CHMSBed::OnOutDateCheckValue(){
	return 0;
} 
int CHMSBed::OnBedListDblClick(){
	 return 0;
} 
int CHMSBed::OnBedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSBed::OnBedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSBed::OnBedListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndBedList.BeginLoad(); 
	m_wndBedList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBedList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("InDate")), 
			rs.GetValue(_T("OutDate")), 
			rs.GetValue(_T("Room")), 
			rs.GetValue(_T("Bed")), 
			rs.GetValue(_T("Status")), NULL);
		rs.MoveNext();
	}
	m_wndBedList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSBed::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSBed::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSBed::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSBed::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSBed::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
/*int CHMSBed::OnUpdatedByChange(){
	return 0;
} */
/*int CHMSBed::OnUpdatedBySetfocus(){
	return 0;
} */
/*int CHMSBed::OnUpdatedByKillfocus(){
	return 0;
} */
int CHMSBed::OnUpdatedByCheckValue(){
	return 0;
} 
int CHMSBed::OnAddHMSBed(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSBed"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSBed::OnEditHMSBed(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSBed"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSBed::OnDeleteHMSBed(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSBed(); 
 		OnHMSBedLoadData(); 
 	} */ return 0;
 } 
int CHMSBed::OnSaveHMSBed(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_vimes_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_vimes_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("HMSBed"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?Ä?kListLoadData(); 
 		EnableButtons(FALSE, 3, 4, -1); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	*/ 	return 0; 
}
int CHMSBed::OnCancelHMSBed(){ /* 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 		EnableButtons(FALSE, 3, 4, -1); 
 	} 
 	else 
 	{ 
 		SetDefaultValues(); 
 		SetMode(VM_NONE); 
 		UpdateData(FALSE); 
 		EnableButtons(FALSE, 1, 2, 3, 4, -1); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	*/ 
 	return 0;
} 
