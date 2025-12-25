#include "HMSFeeDocument.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnFeeListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnFeeListLoadData();
} 
static int _OnFeeListDblClickFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnFeeListDblClick();
} 
static int _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSFeeDocument*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnFeeListDeleteItem();
} 
/*static int _OnCostChangeFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnCostChange();
} */
/*static int _OnCostSetfocusFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnCostKillfocus();} */ 
/*static int _OnCostKillfocusFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnCostKillfocus();
} */
static int _OnCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnCostCheckValue();
} 
/*static int _OnDiscountChangeFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnDiscountChange();
} */
/*static int _OnDiscountSetfocusFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnDiscountKillfocus();} */ 
/*static int _OnDiscountKillfocusFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnDiscountCheckValue();
} 
/*static int _OnPaymentChangeFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnPaymentChange();
} */
/*static int _OnPaymentSetfocusFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnPaymentKillfocus();} */ 
/*static int _OnPaymentKillfocusFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnPaymentKillfocus();
} */
static int _OnPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnPaymentCheckValue();
} 
/*static int _OnSumInWordChangeFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnSumInWordChange();
} */
/*static int _OnSumInWordSetfocusFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnSumInWordKillfocus();} */ 
/*static int _OnSumInWordKillfocusFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnSumInWordKillfocus();
} */
static int _OnSumInWordCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnSumInWordCheckValue();
} 
/*static int _OnRemainChangeFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnRemainChange();
} */
/*static int _OnRemainSetfocusFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnRemainKillfocus();} */ 
/*static int _OnRemainKillfocusFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnRemainKillfocus();
} */
static int _OnRemainCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDocument *)pWnd)->OnRemainCheckValue();
} 
static int _OnAddHMSFeeDocumentFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnAddHMSFeeDocument();
} 
static int _OnEditHMSFeeDocumentFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnEditHMSFeeDocument();
} 
static int _OnDeleteHMSFeeDocumentFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnDeleteHMSFeeDocument();
} 
static int _OnSaveHMSFeeDocumentFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnSaveHMSFeeDocument();
} 
static int _OnCancelHMSFeeDocumentFnc(CWnd *pWnd){
	 return ((CHMSFeeDocument*)pWnd)->OnCancelHMSFeeDocument();
} 
CHMSFeeDocument::CHMSFeeDocument(){

	m_nDlgWidth = 600;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CHMSFeeDocument::~CHMSFeeDocument(){
}
void CHMSFeeDocument::OnCreateComponents(){
	m_wndFeeInformation.Create(this, _T("Fee Information"), 8, 3, 594, 23);
	m_wndFeeList.Create(this,11, 28, 593, 339); 
	m_wndCostLabel.Create(this, _T("Cost"), 11, 344, 74, 364);
	m_wndCost.Create(this,79, 344, 154, 364); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 159, 344, 202, 364);
	m_wndDiscount.Create(this,207, 344, 282, 364); 
	m_wndPaymentLabel.Create(this, _T("Payment"), 287, 344, 330, 364);
	m_wndPayment.Create(this,335, 344, 410, 364); 
	m_wndSumInWordLabel.Create(this, _T("Sum In Word"), 11, 369, 74, 389);
	m_wndSumInWord.Create(this,79, 369, 597, 389); 
	m_wndRemainLabel.Create(this, _T("Remain"), 415, 344, 465, 364);
	m_wndRemain.Create(this,470, 344, 545, 364); 

}
void CHMSFeeDocument::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndCost.SetLimitText(1024);
	m_wndCost.SetDataRequirement(TRUE);
	m_wndDiscount.SetLimitText(1024);
	m_wndDiscount.SetDataRequirement(TRUE);
	m_wndPayment.SetLimitText(1024);
	m_wndPayment.SetDataRequirement(TRUE);
	m_wndSumInWord.SetLimitText(1024);
	m_wndSumInWord.SetDataRequirement(TRUE);
	m_wndRemain.SetLimitText(1024);
	m_wndRemain.SetDataRequirement(TRUE);


	m_wndFeeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFeeList.InsertColumn(1, _T("Description"), CFMT_TEXT, 160);
	m_wndFeeList.InsertColumn(2, _T("Quantity"), CFMT_NUMBER, 50);
	m_wndFeeList.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 50);
	m_wndFeeList.InsertColumn(4, _T("Cost"), CFMT_NUMBER, 60);
	m_wndFeeList.InsertColumn(5, _T("Discount"), CFMT_NUMBER, 60);
	m_wndFeeList.InsertColumn(6, _T("Payment"), CFMT_NUMBER, 60);
	m_wndFeeList.InsertColumn(7, _T("Remain"), CFMT_NUMBER, 60);

}
void CHMSFeeDocument::OnSetWindowEvents(){
	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);
	m_wndFeeList.AddEvent(1, _T("Delete"), _OnFeeListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndCost.SetEvent(WE_CHANGE, _OnCostChangeFnc);
	//m_wndCost.SetEvent(WE_SETFOCUS, _OnCostSetfocusFnc);
	//m_wndCost.SetEvent(WE_KILLFOCUS, _OnCostKillfocusFnc);
	m_wndCost.SetEvent(WE_CHECKVALUE, _OnCostCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	//m_wndPayment.SetEvent(WE_CHANGE, _OnPaymentChangeFnc);
	//m_wndPayment.SetEvent(WE_SETFOCUS, _OnPaymentSetfocusFnc);
	//m_wndPayment.SetEvent(WE_KILLFOCUS, _OnPaymentKillfocusFnc);
	m_wndPayment.SetEvent(WE_CHECKVALUE, _OnPaymentCheckValueFnc);
	//m_wndSumInWord.SetEvent(WE_CHANGE, _OnSumInWordChangeFnc);
	//m_wndSumInWord.SetEvent(WE_SETFOCUS, _OnSumInWordSetfocusFnc);
	//m_wndSumInWord.SetEvent(WE_KILLFOCUS, _OnSumInWordKillfocusFnc);
	m_wndSumInWord.SetEvent(WE_CHECKVALUE, _OnSumInWordCheckValueFnc);
	//m_wndRemain.SetEvent(WE_CHANGE, _OnRemainChangeFnc);
	//m_wndRemain.SetEvent(WE_SETFOCUS, _OnRemainSetfocusFnc);
	//m_wndRemain.SetEvent(WE_KILLFOCUS, _OnRemainKillfocusFnc);
	m_wndRemain.SetEvent(WE_CHECKVALUE, _OnRemainCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSFeeDocumentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSFeeDocumentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSFeeDocumentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSFeeDocumentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSFeeDocumentFnc, 0, 'T', VK_CONTROL);

}
void CHMSFeeDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCost.GetDlgCtrlID(), m_nCost);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_Text(pDX, m_wndPayment.GetDlgCtrlID(), m_nPayment);
	DDX_Text(pDX, m_wndSumInWord.GetDlgCtrlID(), m_szSumInWord);
	DDX_Text(pDX, m_wndRemain.GetDlgCtrlID(), m_nRemain);

}
void CHMSFeeDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeeDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeeDocument::SetDefaultValues(){

	m_nCost=0;
	m_nDiscount=0;
	m_nPayment=0;
	m_szSumInWord.Empty();
	m_nRemain=0;

}
int CHMSFeeDocument::OnFeeListDblClick(){
	 return 0;
} 
int CHMSFeeDocument::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSFeeDocument::OnFeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSFeeDocument::OnFeeListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndFeeList.BeginLoad(); 
	m_wndFeeList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Cost")), 
			rs.GetValue(_T("Discount")), 
			rs.GetValue(_T("Payment")), 
			rs.GetValue(_T("Remain")), NULL);
		rs.MoveNext();
	}
	m_wndFeeList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*int CHMSFeeDocument::OnCostChange(){
	return 0;
} */
/*int CHMSFeeDocument::OnCostSetfocus(){
	return 0;
} */
/*int CHMSFeeDocument::OnCostKillfocus(){
	return 0;
} */
int CHMSFeeDocument::OnCostCheckValue(){
	return 0;
} 
/*int CHMSFeeDocument::OnDiscountChange(){
	return 0;
} */
/*int CHMSFeeDocument::OnDiscountSetfocus(){
	return 0;
} */
/*int CHMSFeeDocument::OnDiscountKillfocus(){
	return 0;
} */
int CHMSFeeDocument::OnDiscountCheckValue(){
	return 0;
} 
/*int CHMSFeeDocument::OnPaymentChange(){
	return 0;
} */
/*int CHMSFeeDocument::OnPaymentSetfocus(){
	return 0;
} */
/*int CHMSFeeDocument::OnPaymentKillfocus(){
	return 0;
} */
int CHMSFeeDocument::OnPaymentCheckValue(){
	return 0;
} 
/*int CHMSFeeDocument::OnSumInWordChange(){
	return 0;
} */
/*int CHMSFeeDocument::OnSumInWordSetfocus(){
	return 0;
} */
/*int CHMSFeeDocument::OnSumInWordKillfocus(){
	return 0;
} */
int CHMSFeeDocument::OnSumInWordCheckValue(){
	return 0;
} 
/*int CHMSFeeDocument::OnRemainChange(){
	return 0;
} */
/*int CHMSFeeDocument::OnRemainSetfocus(){
	return 0;
} */
/*int CHMSFeeDocument::OnRemainKillfocus(){
	return 0;
} */
int CHMSFeeDocument::OnRemainCheckValue(){
	return 0;
} 
int CHMSFeeDocument::OnAddHMSFeeDocument(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSFeeDocument"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSFeeDocument::OnEditHMSFeeDocument(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSFeeDocument"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSFeeDocument::OnDeleteHMSFeeDocument(){ /* 
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
 		OnCancelHMSFeeDocument(); 
 		OnHMSFeeDocumentLoadData(); 
 	} */ return 0;
 } 
int CHMSFeeDocument::OnSaveHMSFeeDocument(){ /* 
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
 _fmsg(_T("HMSFeeDocument"), szSQL); 
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
int CHMSFeeDocument::OnCancelHMSFeeDocument(){ /* 
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
