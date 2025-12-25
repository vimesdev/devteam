#include "HMSDailyOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static int _OnOrderIDChangeFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnOrderIDChange();
} */
/*static int _OnOrderIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnOrderIDKillfocus();} */ 
/*static int _OnOrderIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnOrderIDCheckValue();
} 
/*static int _OnOrderDateChangeFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnOrderDateChange();
} */
/*static int _OnOrderDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnOrderDateKillfocus();} */ 
/*static int _OnOrderDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static int _OnIssueDateChangeFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnIssueDateChange();
} */
/*static int _OnIssueDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnIssueDateKillfocus();} */ 
/*static int _OnIssueDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnIssueDateKillfocus();
} */
static int _OnIssueDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnIssueDateCheckValue();
} 
/*static int _OnNoteChangeFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnNoteChange();
} */
/*static int _OnNoteSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnNoteKillfocus();} */ 
/*static int _OnNoteKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnNoteCheckValue();
} 
static int _OnDetailTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	 return ((CHMSDailyOrder*)pWnd)->OnDetailTabSelectChange(nOld, nNew);
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyOrder *pVw = (CHMSDailyOrder *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSDailyOrder *pVw = (CHMSDailyOrder *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDailyOrder *pVw = (CHMSDailyOrder *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSDailyOrder *pVw = (CHMSDailyOrder *)pWnd;
	return pVw->OnConfirmSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyOrder *pVw = (CHMSDailyOrder *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDailyOrder *pVw = (CHMSDailyOrder *)pWnd;
	return pVw->OnPrintSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDailyOrder *pVw = (CHMSDailyOrder *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSDailyOrder* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnStockSelendokFnc(CWnd *pWnd){
	 return ((CHMSDailyOrder *)pWnd)->OnStockSelendok();
}
/*static int _OnStockSetfocusFnc(CWnd *pWnd){
	 return ((CHMSDailyOrder *)pWnd)->OnStockKillfocus();
}*/
/*static int _OnStockKillfocusFnc(CWnd *pWnd){
	 return ((CHMSDailyOrder *)pWnd)->OnStockKillfocus();
}*/
static int _OnStockLoadDataFnc(CWnd *pWnd){
	 return ((CHMSDailyOrder *)pWnd)->OnStockLoadData();
}
/*static int _OnStockAddNewFnc(CWnd *pWnd){
	 return ((CHMSDailyOrder *)pWnd)->OnStockAddNew();
}*/
static int _OnPrintDeliverySelectFnc(CWnd *pWnd){
	CHMSDailyOrder *pVw = (CHMSDailyOrder *)pWnd;
	return pVw->OnPrintDeliverySelect();
} 
static int _OnFindSelectFnc(CWnd *pWnd){
	CHMSDailyOrder *pVw = (CHMSDailyOrder *)pWnd;
	return pVw->OnFindSelect();
} 
/*static int _OnStatusChangeFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnStatusChange();
} */
/*static int _OnStatusSetfocusFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnStatusKillfocus();} */ 
/*static int _OnStatusKillfocusFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrder *)pWnd)->OnStatusCheckValue();
} 
static int _OnAddHMSDailyOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyOrder*)pWnd)->OnAddHMSDailyOrder();
} 
static int _OnEditHMSDailyOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyOrder*)pWnd)->OnEditHMSDailyOrder();
} 
static int _OnDeleteHMSDailyOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyOrder*)pWnd)->OnDeleteHMSDailyOrder();
} 
static int _OnSaveHMSDailyOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyOrder*)pWnd)->OnSaveHMSDailyOrder();
} 
static int _OnCancelHMSDailyOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyOrder*)pWnd)->OnCancelHMSDailyOrder();
} 
CHMSDailyOrder::CHMSDailyOrder(){

	m_nDlgWidth = 790;
	m_nDlgHeight = 491;
	SetDefaultValues();
}
CHMSDailyOrder::~CHMSDailyOrder(){
}
void CHMSDailyOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 601, 25);
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 7, 30, 51, 50);
	m_wndOrderID.Create(this,56, 30, 131, 50); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 165, 30, 220, 50);
	m_wndOrderDate.Create(this,225, 30, 325, 50); 
	m_wndIssueDateLabel.Create(this, _T("Issue Date"), 330, 30, 382, 50);
	m_wndIssueDate.Create(this,387, 30, 487, 50); 
	m_wndNoteLabel.Create(this, _T("Note"), 330, 55, 382, 75);
	m_wndNote.Create(this,387, 55, 657, 75); 
	m_wndDetailTab.Create(this,7, 80, 657, 458); 
	m_wndAdd.Create(this, _T("&Add"), 55, 463, 125, 485);
	m_wndEdit.Create(this, _T("&Edit"), 130, 463, 200, 485);
	m_wndDelete.Create(this, _T("&Delete"), 205, 463, 275, 485);
	m_wndConfirm.Create(this, _T("&Confirm"), 355, 463, 425, 485);
	m_wndCancel.Create(this, _T("&Cancel"), 580, 463, 650, 485);
	m_wndPrint.Create(this, _T("&Print"), 430, 463, 500, 485);
	m_wndSave.Create(this, _T("&Save"), 280, 463, 350, 485);
	m_wndStockLabel.Create(this, _T("Stock"), 7, 55, 51, 75);
	m_wndStock.Create(this,56, 55, 325, 75); 
	m_wndPrintDelivery.Create(this, _T("&Print Delivery"), 505, 463, 575, 485);
	m_wndFind.Create(this, _T("..."), 136, 30, 160, 52);
	m_wndStatusLabel.Create(this, _T("Status"), 492, 30, 544, 50);
	m_wndStatus.Create(this,549, 30, 657, 50); 

}
void CHMSDailyOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOrderID.SetLimitText(1024);
	m_wndOrderID.SetDataRequirement(TRUE);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndOrderDate.SetDataRequirement(TRUE);
	m_wndIssueDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndIssueDate.SetDataRequirement(TRUE);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetDataRequirement(TRUE);
	m_wndStock.SetDataRequirement(TRUE);
	m_wndStock.LimitText(1024);
	m_wndStatus.SetLimitText(1024);
	m_wndStatus.SetDataRequirement(TRUE);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSDailyOrder::OnSetWindowEvents(){
	//m_wndOrderID.SetEvent(WE_CHANGE, _OnOrderIDChangeFnc);
	//m_wndOrderID.SetEvent(WE_SETFOCUS, _OnOrderIDSetfocusFnc);
	//m_wndOrderID.SetEvent(WE_KILLFOCUS, _OnOrderIDKillfocusFnc);
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndIssueDate.SetEvent(WE_CHANGE, _OnIssueDateChangeFnc);
	//m_wndIssueDate.SetEvent(WE_SETFOCUS, _OnIssueDateSetfocusFnc);
	//m_wndIssueDate.SetEvent(WE_KILLFOCUS, _OnIssueDateKillfocusFnc);
	m_wndIssueDate.SetEvent(WE_CHECKVALUE, _OnIssueDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndDetailTab.SetEvent(WE_SELCHANGE, _OnDetailTabSelectChangeFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndPrintDelivery.SetEvent(WE_CLICK, _OnPrintDeliverySelectFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDailyOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDailyOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDailyOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDailyOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDailyOrderFnc, 0, 'T', VK_CONTROL);

}
void CHMSDailyOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndIssueDate.GetDlgCtrlID(), m_szIssueDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);

}
void CHMSDailyOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyOrder::SetDefaultValues(){

	m_nOrderID=0;
	m_szOrderDate.Empty();
	m_szIssueDate.Empty();
	m_szNote.Empty();
	m_szStockKey.Empty();
	m_szStatus.Empty();

}
/*int CHMSDailyOrder::OnOrderIDChange(){
	return 0;
} */
/*int CHMSDailyOrder::OnOrderIDSetfocus(){
	return 0;
} */
/*int CHMSDailyOrder::OnOrderIDKillfocus(){
	return 0;
} */
int CHMSDailyOrder::OnOrderIDCheckValue(){
	return 0;
} 
/*int CHMSDailyOrder::OnOrderDateChange(){
	return 0;
} */
/*int CHMSDailyOrder::OnOrderDateSetfocus(){
	return 0;
} */
/*int CHMSDailyOrder::OnOrderDateKillfocus(){
	return 0;
} */
int CHMSDailyOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*int CHMSDailyOrder::OnIssueDateChange(){
	return 0;
} */
/*int CHMSDailyOrder::OnIssueDateSetfocus(){
	return 0;
} */
/*int CHMSDailyOrder::OnIssueDateKillfocus(){
	return 0;
} */
int CHMSDailyOrder::OnIssueDateCheckValue(){
	return 0;
} 
/*int CHMSDailyOrder::OnNoteChange(){
	return 0;
} */
/*int CHMSDailyOrder::OnNoteSetfocus(){
	return 0;
} */
/*int CHMSDailyOrder::OnNoteKillfocus(){
	return 0;
} */
int CHMSDailyOrder::OnNoteCheckValue(){
	return 0;
} 
int CHMSDailyOrder::OnDetailTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrder::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrder::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrder::OnStockSelendok(){
	 return 0;
}
/*int CHMSDailyOrder::OnStockSetfocus(){
	 return 0;
}*/
/*int CHMSDailyOrder::OnStockKillfocus(){
	 return 0;
}*/
int CHMSDailyOrder::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey()){
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSDailyOrder::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSDailyOrder::OnPrintDeliverySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrder::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
/*int CHMSDailyOrder::OnStatusChange(){
	return 0;
} */
/*int CHMSDailyOrder::OnStatusSetfocus(){
	return 0;
} */
/*int CHMSDailyOrder::OnStatusKillfocus(){
	return 0;
} */
int CHMSDailyOrder::OnStatusCheckValue(){
	return 0;
} 
int CHMSDailyOrder::OnAddHMSDailyOrder(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSDailyOrder"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSDailyOrder::OnEditHMSDailyOrder(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSDailyOrder"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSDailyOrder::OnDeleteHMSDailyOrder(){ /* 
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
 		OnCancelHMSDailyOrder(); 
 		OnHMSDailyOrderLoadData(); 
 	} */ return 0;
 } 
int CHMSDailyOrder::OnSaveHMSDailyOrder(){ /* 
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
 _fmsg(_T("HMSDailyOrder"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?O?oListLoadData(); 
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
int CHMSDailyOrder::OnCancelHMSDailyOrder(){ /* 
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
