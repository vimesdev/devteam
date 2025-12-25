#include "HMSPrescription.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescription*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSPrescription*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescription*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescription*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescription*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSPrescription*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescription*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescription*)pWnd)->OnDrugListDeleteItem();
} 
/*static void _OnAdviceChangeFnc(CWnd *pWnd){
	((CHMSPrescription *)pWnd)->OnAdviceChange();
} */
/*static void _OnAdviceSetfocusFnc(CWnd *pWnd){
	((CHMSPrescription *)pWnd)->OnAdviceSetfocus();} */ 
/*static void _OnAdviceKillfocusFnc(CWnd *pWnd){
	((CHMSPrescription *)pWnd)->OnAdviceKillfocus();
} */
static int _OnAdviceCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescription *)pWnd)->OnAdviceCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPrescription *pVw = (CHMSPrescription *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPrescription *pVw = (CHMSPrescription *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSPrescription *pVw = (CHMSPrescription *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPrescription *pVw = (CHMSPrescription *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSPrescription*)pWnd)->OnAddHMSPrescription();
} 
static int _OnEditHMSPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSPrescription*)pWnd)->OnEditHMSPrescription();
} 
static int _OnDeleteHMSPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSPrescription*)pWnd)->OnDeleteHMSPrescription();
} 
static int _OnSaveHMSPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSPrescription*)pWnd)->OnSaveHMSPrescription();
} 
static int _OnCancelHMSPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSPrescription*)pWnd)->OnCancelHMSPrescription();
} 
CHMSPrescription::CHMSPrescription(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CHMSPrescription::~CHMSPrescription(){
}
void CHMSPrescription::OnCreateComponents(){
	m_wndPrescriptionInformation.Create(this, _T("Prescription Information"), 5, 5, 600, 550);
	m_wndOrderList.Create(this,10, 30, 595, 130); 
	m_wndDrugList.Create(this,10, 135, 595, 490); 
	m_wndAdviceLabel.Create(this, _T("Advice"), 10, 495, 80, 520);
	m_wndAdvice.Create(this,85, 495, 595, 545); 
	m_wndAdd.Create(this, _T("&Add"), 270, 555, 350, 580);
	m_wndDelete.Create(this, _T("&Delete"), 355, 555, 435, 580);
	m_wndSend.Create(this, _T("&Send"), 440, 555, 515, 580);
	m_wndPrint.Create(this, _T("&Print"), 520, 555, 600, 580);

}
void CHMSPrescription::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndAdvice.SetLimitText(35);
	m_wndAdvice.SetCheckValue(true);


	m_wndOrderList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndOrderList.InsertColumn(1, _T("Order Date"), CFMT_DATE, 85);
	m_wndOrderList.InsertColumn(2, _T("Doctor"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(3, _T("Status"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(4, _T("Distributed Stock"), CFMT_TEXT, 150);


	m_wndDrugList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndDrugList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 200);
	m_wndDrugList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndDrugList.InsertColumn(3, _T("Quantity"), CFMT_TEXT, 70);
	m_wndDrugList.InsertColumn(4, _T("Price"), CFMT_NUMBER, 85);
	m_wndDrugList.InsertColumn(5, _T("Money"), CFMT_NUMBER, 85);

}
void CHMSPrescription::OnSetWindowEvents(){
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndAdvice.SetEvent(WE_CHANGE, _OnAdviceChangeFnc);
	//m_wndAdvice.SetEvent(WE_SETFOCUS, _OnAdviceSetfocusFnc);
	//m_wndAdvice.SetEvent(WE_KILLFOCUS, _OnAdviceKillfocusFnc);
	m_wndAdvice.SetEvent(WE_CHECKVALUE, _OnAdviceCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPrescriptionFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPrescriptionFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPrescriptionFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPrescriptionFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPrescriptionFnc, 0, 'T', VK_CONTROL);

}
void CHMSPrescription::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndAdvice.GetDlgCtrlID(), m_szAdvice);

}
void CHMSPrescription::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescription::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrescription::SetDefaultValues(){

	m_szAdvice.Empty();

}
int CHMSPrescription::SetMode(int nMode){ 
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
void CHMSPrescription::OnOrderListDblClick(){
	
} 
void CHMSPrescription::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescription::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescription::OnOrderListLoadData(){
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
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("Doctor")), 
			rs.GetValue(_T("Status")), 
			rs.GetValue(_T("DistributedStock")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPrescription::OnDrugListDblClick(){
	
} 
void CHMSPrescription::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescription::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescription::OnDrugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	m_wndDrugList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name/Cnt")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("Money")), NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSPrescription::OnAdviceChange(){
	
} */
/*void CHMSPrescription::OnAdviceSetfocus(){
	
} */
/*void CHMSPrescription::OnAdviceKillfocus(){
	
} */
int CHMSPrescription::OnAdviceCheckValue(){
	return 0;
} 
void CHMSPrescription::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescription::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescription::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescription::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescription::OnAddHMSPrescription(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPrescription"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPrescription::OnEditHMSPrescription(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPrescription"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSPrescription::OnDeleteHMSPrescription(){
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
 		OnCancelHMSPrescription(); 
 	}
return 0;
 } 
int CHMSPrescription::OnSaveHMSPrescription(){
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
 		//OnHMSPrescriptionListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPrescription::OnCancelHMSPrescription(){
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
int CHMSPrescription::OnHMSPrescriptionListLoadData(){
	return 0;
}
