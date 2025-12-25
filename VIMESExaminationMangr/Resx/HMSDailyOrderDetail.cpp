#include "HMSDailyOrderDetail.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnDetailListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnDetailListLoadData();
} 
static int _OnDetailListDblClickFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnDetailListDblClick();
} 
static int _OnDetailListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnDetailListSelectChange(nOldItem, nNewItem);
} 
static int _OnDetailListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnDetailListDeleteItem();
} 
static int _OnPatientOrderLoadDataFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnPatientOrderLoadData();
} 
static int _OnPatientOrderDblClickFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnPatientOrderDblClick();
} 
static int _OnPatientOrderSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnPatientOrderSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientOrderDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnPatientOrderDeleteItem();
} 
static int _OnAddHMSDailyOrderDetailFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnAddHMSDailyOrderDetail();
} 
static int _OnEditHMSDailyOrderDetailFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnEditHMSDailyOrderDetail();
} 
static int _OnDeleteHMSDailyOrderDetailFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnDeleteHMSDailyOrderDetail();
} 
static int _OnSaveHMSDailyOrderDetailFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnSaveHMSDailyOrderDetail();
} 
static int _OnCancelHMSDailyOrderDetailFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDetail*)pWnd)->OnCancelHMSDailyOrderDetail();
} 
CHMSDailyOrderDetail::CHMSDailyOrderDetail(){

	m_nDlgWidth = 661;
	m_nDlgHeight = 410;
	SetDefaultValues();
}
CHMSDailyOrderDetail::~CHMSDailyOrderDetail(){
}
void CHMSDailyOrderDetail::OnCreateComponents(){
	m_wndDetailInformation.Create(this, _T("Detail Information"), 5, 5, 624, 25);
	m_wndDetailList.Create(this,8, 22, 648, 283); 
	m_wndPatientOrder.Create(this,7, 289, 647, 399); 

}
void CHMSDailyOrderDetail::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndDetailList.InsertColumn(0, _T("Description"), CFMT_TEXT, 100);
	m_wndDetailList.InsertColumn(1, _T("Unit"), CFMT_TEXT, 40);
	m_wndDetailList.InsertColumn(2, _T("Quantity"), CFMT_NUMBER, 50);
	m_wndDetailList.InsertColumn(3, _T("Delivery Qty"), CFMT_NUMBER, 70);
	m_wndDetailList.InsertColumn(4, _T("Producing"), CFMT_TEXT, 70);


	m_wndPatientOrder.InsertColumn(0, _T("Order Date"), CFMT_DATETIME, 100);
	m_wndPatientOrder.InsertColumn(1, _T("Clinical ID"), CFMT_NUMBER, 60);
	m_wndPatientOrder.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 120);

}
void CHMSDailyOrderDetail::OnSetWindowEvents(){
	m_wndDetailList.SetEvent(WE_SELCHANGE, _OnDetailListSelectChangeFnc);
	m_wndDetailList.SetEvent(WE_LOADDATA, _OnDetailListLoadDataFnc);
	m_wndDetailList.SetEvent(WE_DBLCLICK, _OnDetailListDblClickFnc);
	m_wndDetailList.AddEvent(1, _T("Delete"), _OnDetailListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPatientOrder.SetEvent(WE_SELCHANGE, _OnPatientOrderSelectChangeFnc);
	m_wndPatientOrder.SetEvent(WE_LOADDATA, _OnPatientOrderLoadDataFnc);
	m_wndPatientOrder.SetEvent(WE_DBLCLICK, _OnPatientOrderDblClickFnc);
	m_wndPatientOrder.AddEvent(1, _T("Delete"), _OnPatientOrderDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDailyOrderDetailFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDailyOrderDetailFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDailyOrderDetailFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDailyOrderDetailFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDailyOrderDetailFnc, 0, 'T', VK_CONTROL);

}
void CHMSDailyOrderDetail::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSDailyOrderDetail::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyOrderDetail::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyOrderDetail::SetDefaultValues(){


}
int CHMSDailyOrderDetail::OnDetailListDblClick(){
	 return 0;
} 
int CHMSDailyOrderDetail::OnDetailListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrderDetail::OnDetailListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrderDetail::OnDetailListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDetailList.BeginLoad(); 
	m_wndDetailList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDetailList.AddItems(
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("DeliveryQty")), 
			rs.GetValue(_T("Producing")), NULL);
		rs.MoveNext();
	}
	m_wndDetailList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSDailyOrderDetail::OnPatientOrderDblClick(){
	 return 0;
} 
int CHMSDailyOrderDetail::OnPatientOrderSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrderDetail::OnPatientOrderDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSDailyOrderDetail::OnPatientOrderLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientOrder.BeginLoad(); 
	m_wndPatientOrder.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientOrder.AddItems(
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("ClinicalID")), 
			rs.GetValue(_T("PatientName")), NULL);
		rs.MoveNext();
	}
	m_wndPatientOrder.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSDailyOrderDetail::OnAddHMSDailyOrderDetail(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSDailyOrderDetail"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSDailyOrderDetail::OnEditHMSDailyOrderDetail(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSDailyOrderDetail"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSDailyOrderDetail::OnDeleteHMSDailyOrderDetail(){ /* 
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
 		OnCancelHMSDailyOrderDetail(); 
 		OnHMSDailyOrderDetailLoadData(); 
 	} */ return 0;
 } 
int CHMSDailyOrderDetail::OnSaveHMSDailyOrderDetail(){ /* 
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
 _fmsg(_T("HMSDailyOrderDetail"), szSQL); 
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
int CHMSDailyOrderDetail::OnCancelHMSDailyOrderDetail(){ /* 
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
