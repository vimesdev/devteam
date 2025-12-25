#include "HMSOtherTreat.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnOrderListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat*)pWnd)->OnOrderListLoadData();
} 
static int _OnOrderListDblClickFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat*)pWnd)->OnOrderListDblClick();
} 
static int _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSOtherTreat*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat*)pWnd)->OnOrderListDeleteItem();
} 
/*static int _OnOrderIDChangeFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnOrderIDChange();
} */
/*static int _OnOrderIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnOrderIDKillfocus();} */ 
/*static int _OnOrderIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnOrderIDCheckValue();
} 
/*static int _OnOrderDateChangeFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnOrderDateChange();
} */
/*static int _OnOrderDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnOrderDateKillfocus();} */ 
/*static int _OnOrderDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnOrderDateCheckValue();
} 
static int _OnTreatDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSOtherTreat* )pWnd)->OnTreatDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnTreatDoctorSelendokFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat *)pWnd)->OnTreatDoctorSelendok();
}
/*static int _OnTreatDoctorSetfocusFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat *)pWnd)->OnTreatDoctorKillfocus();
}*/
/*static int _OnTreatDoctorKillfocusFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat *)pWnd)->OnTreatDoctorKillfocus();
}*/
static int _OnTreatDoctorLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat *)pWnd)->OnTreatDoctorLoadData();
}
/*static int _OnTreatDoctorAddNewFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat *)pWnd)->OnTreatDoctorAddNew();
}*/
/*static int _OnNoteChangeFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnNoteChange();
} */
/*static int _OnNoteSetfocusFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnNoteKillfocus();} */ 
/*static int _OnNoteKillfocusFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherTreat *)pWnd)->OnNoteCheckValue();
} 
static int _OnTestListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat*)pWnd)->OnTestListLoadData();
} 
static int _OnTestListDblClickFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat*)pWnd)->OnTestListDblClick();
} 
static int _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSOtherTreat*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat*)pWnd)->OnTestListDeleteItem();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSOtherTreat *pVw = (CHMSOtherTreat *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSOtherTreat *pVw = (CHMSOtherTreat *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSOtherTreat *pVw = (CHMSOtherTreat *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSOtherTreat *pVw = (CHMSOtherTreat *)pWnd;
	return pVw->OnConfirmSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOtherTreat *pVw = (CHMSOtherTreat *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnPrintSelectFnc(CWnd *pWnd){
	CHMSOtherTreat *pVw = (CHMSOtherTreat *)pWnd;
	return pVw->OnPrintSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOtherTreat *pVw = (CHMSOtherTreat *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnAddHMSOtherTreatFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat*)pWnd)->OnAddHMSOtherTreat();
} 
static int _OnEditHMSOtherTreatFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat*)pWnd)->OnEditHMSOtherTreat();
} 
static int _OnDeleteHMSOtherTreatFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat*)pWnd)->OnDeleteHMSOtherTreat();
} 
static int _OnSaveHMSOtherTreatFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat*)pWnd)->OnSaveHMSOtherTreat();
} 
static int _OnCancelHMSOtherTreatFnc(CWnd *pWnd){
	 return ((CHMSOtherTreat*)pWnd)->OnCancelHMSOtherTreat();
} 
CHMSOtherTreat::CHMSOtherTreat(){

	m_nDlgWidth = 614;
	m_nDlgHeight = 491;
	SetDefaultValues();
}
CHMSOtherTreat::~CHMSOtherTreat(){
}
void CHMSOtherTreat::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 601, 25);
	m_wndOrderList.Create(this,6, 30, 598, 118); 
	m_wndIDLabel.Create(this, _T("ID"), 7, 123, 69, 143);
	m_wndOrderID.Create(this,74, 123, 149, 143); 
	m_wndDateLabel.Create(this, _T("Date"), 154, 123, 216, 143);
	m_wndOrderDate.Create(this,221, 123, 291, 143); 
	m_wndTreatDoctorLabel.Create(this, _T("Treat Doctor"), 296, 123, 358, 143);
	m_wndTreatDoctor.Create(this,363, 123, 598, 143); 
	m_wndNoteLabel.Create(this, _T("Note"), 7, 148, 69, 168);
	m_wndNote.Create(this,74, 148, 598, 187); 
	m_wndTestList.Create(this,7, 191, 596, 459); 
	m_wndAdd.Create(this, _T("&Add"), 106, 461, 171, 483);
	m_wndEdit.Create(this, _T("&Edit"), 176, 461, 241, 483);
	m_wndDelete.Create(this, _T("&Delete"), 246, 461, 311, 483);
	m_wndConfirm.Create(this, _T("&Confirm"), 391, 461, 456, 483);
	m_wndCancel.Create(this, _T("&Cancel"), 531, 461, 596, 483);
	m_wndPrint.Create(this, _T("&Print"), 461, 461, 526, 483);
	m_wndSave.Create(this, _T("&Save"), 316, 461, 386, 485);

}
void CHMSOtherTreat::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOrderID.SetLimitText(1024);
	m_wndOrderID.SetDataRequirement(TRUE);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetDataRequirement(TRUE);
	m_wndTreatDoctor.SetDataRequirement(TRUE);
	m_wndTreatDoctor.LimitText(1024);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetDataRequirement(TRUE);


	m_wndOrderList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndOrderList.InsertColumn(1, _T("Date"), CFMT_DATE, 70);
	m_wndOrderList.InsertColumn(2, _T("Status"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(3, _T("Note"), CFMT_TEXT, 250);
	m_wndOrderList.InsertColumn(4, _T("User ID"), CFMT_TEXT, 50);


	m_wndTreatDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTreatDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTestList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTestList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndTestList.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 70);
	m_wndTestList.InsertColumn(4, _T("Money"), CFMT_NUMBER, 70);

}
void CHMSOtherTreat::OnSetWindowEvents(){
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndOrderID.SetEvent(WE_CHANGE, _OnOrderIDChangeFnc);
	//m_wndOrderID.SetEvent(WE_SETFOCUS, _OnOrderIDSetfocusFnc);
	//m_wndOrderID.SetEvent(WE_KILLFOCUS, _OnOrderIDKillfocusFnc);
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndTreatDoctor.SetEvent(WE_SELENDOK, _OnTreatDoctorSelendokFnc);
	//m_wndTreatDoctor.SetEvent(WE_SETFOCUS, _OnTreatDoctorSetfocusFnc);
	//m_wndTreatDoctor.SetEvent(WE_KILLFOCUS, _OnTreatDoctorKillfocusFnc);
	m_wndTreatDoctor.SetEvent(WE_SELCHANGE, _OnTreatDoctorSelectChangeFnc);
	m_wndTreatDoctor.SetEvent(WE_LOADDATA, _OnTreatDoctorLoadDataFnc);
	//m_wndTreatDoctor.SetEvent(WE_ADDNEW, _OnTreatDoctorAddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOtherTreatFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOtherTreatFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOtherTreatFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOtherTreatFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOtherTreatFnc, 0, 'T', VK_CONTROL);

}
void CHMSOtherTreat::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndTreatDoctor.GetDlgCtrlID(), m_szTreatDoctorKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSOtherTreat::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOtherTreat::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOtherTreat::SetDefaultValues(){

	m_nOrderID=0;
	m_szOrderDate.Empty();
	m_szTreatDoctorKey.Empty();
	m_szNote.Empty();

}
int CHMSOtherTreat::OnOrderListDblClick(){
	 return 0;
} 
int CHMSOtherTreat::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnOrderListLoadData(){
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
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Date")), 
			rs.GetValue(_T("Status")), 
			rs.GetValue(_T("Note")), 
			rs.GetValue(_T("UserID")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*int CHMSOtherTreat::OnOrderIDChange(){
	return 0;
} */
/*int CHMSOtherTreat::OnOrderIDSetfocus(){
	return 0;
} */
/*int CHMSOtherTreat::OnOrderIDKillfocus(){
	return 0;
} */
int CHMSOtherTreat::OnOrderIDCheckValue(){
	return 0;
} 
/*int CHMSOtherTreat::OnOrderDateChange(){
	return 0;
} */
/*int CHMSOtherTreat::OnOrderDateSetfocus(){
	return 0;
} */
/*int CHMSOtherTreat::OnOrderDateKillfocus(){
	return 0;
} */
int CHMSOtherTreat::OnOrderDateCheckValue(){
	return 0;
} 
int CHMSOtherTreat::OnTreatDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnTreatDoctorSelendok(){
	 return 0;
}
/*int CHMSOtherTreat::OnTreatDoctorSetfocus(){
	 return 0;
}*/
/*int CHMSOtherTreat::OnTreatDoctorKillfocus(){
	 return 0;
}*/
int CHMSOtherTreat::OnTreatDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTreatDoctor.IsSearchKey()){
	};
	m_wndTreatDoctor.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTreatDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSOtherTreat::OnTreatDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSOtherTreat::OnNoteChange(){
	return 0;
} */
/*int CHMSOtherTreat::OnNoteSetfocus(){
	return 0;
} */
/*int CHMSOtherTreat::OnNoteKillfocus(){
	return 0;
} */
int CHMSOtherTreat::OnNoteCheckValue(){
	return 0;
} 
int CHMSOtherTreat::OnTestListDblClick(){
	 return 0;
} 
int CHMSOtherTreat::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnTestListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestList.BeginLoad(); 
	m_wndTestList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Money")), NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSOtherTreat::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSOtherTreat::OnAddHMSOtherTreat(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSOtherTreat"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSOtherTreat::OnEditHMSOtherTreat(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSOtherTreat"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSOtherTreat::OnDeleteHMSOtherTreat(){ /* 
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
 		OnCancelHMSOtherTreat(); 
 		OnHMSOtherTreatLoadData(); 
 	} */ return 0;
 } 
int CHMSOtherTreat::OnSaveHMSOtherTreat(){ /* 
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
 _fmsg(_T("HMSOtherTreat"), szSQL); 
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
int CHMSOtherTreat::OnCancelHMSOtherTreat(){ /* 
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
