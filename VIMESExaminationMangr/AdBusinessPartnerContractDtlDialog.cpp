#include "AdBusinessPartnerContractDtlDialog.h"
#include "MainFrm.h"
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlView *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlView *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlView *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractDtlView *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnContractNoChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlView *)pWnd)->OnContractNoChange();
} */
/*static void _OnContractNoSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlView *)pWnd)->OnContractNoSetfocus();} */ 
/*static void _OnContractNoKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlView *)pWnd)->OnContractNoKillfocus();
} */
static int _OnContractNoCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractDtlView *)pWnd)->OnContractNoCheckValue();
} 
/*static void _OnContractDateChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlView *)pWnd)->OnContractDateChange();
} */
/*static void _OnContractDateSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlView *)pWnd)->OnContractDateSetfocus();} */ 
/*static void _OnContractDateKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlView *)pWnd)->OnContractDateKillfocus();
} */
static int _OnContractDateCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractDtlView *)pWnd)->OnContractDateCheckValue();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractDtlView*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlView*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerContractDtlView*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlView*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractDtlView*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlView*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerContractDtlView*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlView*)pWnd)->OnItemListDeleteItem();
} 
static void _OnAddPatientSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractDtlView *pVw = (CAdBusinessPartnerContractDtlView *)pWnd;
	pVw->OnAddPatientSelect();
} 
static void _OnPrintContractSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractDtlView *pVw = (CAdBusinessPartnerContractDtlView *)pWnd;
	pVw->OnPrintContractSelect();
} 
static void _OnAddItemSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractDtlView *pVw = (CAdBusinessPartnerContractDtlView *)pWnd;
	pVw->OnAddItemSelect();
} 
static void _OnEditItemSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractDtlView *pVw = (CAdBusinessPartnerContractDtlView *)pWnd;
	pVw->OnEditItemSelect();
} 
static void _OnDeleteItemSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractDtlView *pVw = (CAdBusinessPartnerContractDtlView *)pWnd;
	pVw->OnDeleteItemSelect();
} 
static int _OnAddAdBusinessPartnerContractDtlViewFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlView*)pWnd)->OnAddAdBusinessPartnerContractDtlView();
} 
static int _OnEditAdBusinessPartnerContractDtlViewFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlView*)pWnd)->OnEditAdBusinessPartnerContractDtlView();
} 
static int _OnDeleteAdBusinessPartnerContractDtlViewFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlView*)pWnd)->OnDeleteAdBusinessPartnerContractDtlView();
} 
static int _OnSaveAdBusinessPartnerContractDtlViewFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlView*)pWnd)->OnSaveAdBusinessPartnerContractDtlView();
} 
static int _OnCancelAdBusinessPartnerContractDtlViewFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlView*)pWnd)->OnCancelAdBusinessPartnerContractDtlView();
} 
CAdBusinessPartnerContractDtlView::CAdBusinessPartnerContractDtlView()
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdBusinessPartnerContractDtlView::~CAdBusinessPartnerContractDtlView(){
}
void CAdBusinessPartnerContractDtlView::OnCreateComponents(){
	m_wndUnitLabel.Create(this, _T("Unit"), 5, 5, 105, 30);
	m_wndUnit.Create(this,110, 5, 530, 30); 
	m_wndContractNoLabel.Create(this, _T("Contract No"), 535, 5, 635, 30);
	m_wndContractNo.Create(this,640, 5, 740, 30); 
	m_wndContractDateLabel.Create(this, _T("Contract Date"), 745, 5, 845, 30);
	m_wndContractDate.Create(this,850, 5, 950, 30); 
	m_wndPatientList.Create(this,7, 35, 352, 535); 
	m_wndItemList.Create(this,356, 35, 956, 535); 
	m_wndAddPatient.Create(this, _T("Add Patient"), 7, 540, 124, 565);
	m_wndPrintContract.Create(this, _T("&Print Contract"), 129, 540, 246, 565);
	m_wndAddItem.Create(this, _T("Add Item"), 706, 540, 786, 565);
	m_wndEditItem.Create(this, _T("&Edit Item"), 791, 540, 871, 565);
	m_wndDeleteItem.Create(this, _T("&Delete Item"), 876, 540, 956, 565);

}
void CAdBusinessPartnerContractDtlView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndUnit.SetLimitText(35);
	m_wndUnit.SetCheckValue(true);
	m_wndContractNo.SetLimitText(35);
	m_wndContractNo.SetCheckValue(true);
	m_wndContractDate.SetLimitText(35);
	m_wndContractDate.SetCheckValue(true);


	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndPatientList.InsertColumn(1, _T("Patient No"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 180);


	m_wndItemList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);
	m_wndItemList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndItemList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 50);

}
void CAdBusinessPartnerContractDtlView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndContractNo.SetEvent(WE_CHANGE, _OnContractNoChangeFnc);
	//m_wndContractNo.SetEvent(WE_SETFOCUS, _OnContractNoSetfocusFnc);
	//m_wndContractNo.SetEvent(WE_KILLFOCUS, _OnContractNoKillfocusFnc);
	m_wndContractNo.SetEvent(WE_CHECKVALUE, _OnContractNoCheckValueFnc);
	//m_wndContractDate.SetEvent(WE_CHANGE, _OnContractDateChangeFnc);
	//m_wndContractDate.SetEvent(WE_SETFOCUS, _OnContractDateSetfocusFnc);
	//m_wndContractDate.SetEvent(WE_KILLFOCUS, _OnContractDateKillfocusFnc);
	m_wndContractDate.SetEvent(WE_CHECKVALUE, _OnContractDateCheckValueFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddPatient.SetEvent(WE_CLICK, _OnAddPatientSelectFnc);
	m_wndPrintContract.SetEvent(WE_CLICK, _OnPrintContractSelectFnc);
	m_wndAddItem.SetEvent(WE_CLICK, _OnAddItemSelectFnc);
	m_wndEditItem.SetEvent(WE_CLICK, _OnEditItemSelectFnc);
	m_wndDeleteItem.SetEvent(WE_CLICK, _OnDeleteItemSelectFnc);
	SetMode(VM_NONE);

}
void CAdBusinessPartnerContractDtlView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndContractNo.GetDlgCtrlID(), m_szContractNo);
	DDX_Text(pDX, m_wndContractDate.GetDlgCtrlID(), m_szContractDate);

}
void CAdBusinessPartnerContractDtlView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Unit")] =  m_szUnit;
	m_jData[_T("ContractNo")] =  m_szContractNo;
	m_jData[_T("ContractDate")] =  m_szContractDate;
	}
	else
	{
			
	m_jData[_T("Unit")].GetValue(m_szUnit);
	m_jData[_T("ContractNo")].GetValue(m_szContractNo);
	m_jData[_T("ContractDate")].GetValue(m_szContractDate);
	}

}
void CAdBusinessPartnerContractDtlView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerContractDtlView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdBusinessPartnerContractDtlView::SetDefaultValues(){

	m_szUnit.Empty();
	m_szContractNo.Empty();
	m_szContractDate.Empty();

}
int CAdBusinessPartnerContractDtlView::SetMode(int nMode){
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
/*void CAdBusinessPartnerContractDtlView::OnUnitChange(){
	
} */
/*void CAdBusinessPartnerContractDtlView::OnUnitSetfocus(){
	
} */
/*void CAdBusinessPartnerContractDtlView::OnUnitKillfocus(){
	
} */
int CAdBusinessPartnerContractDtlView::OnUnitCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerContractDtlView::OnContractNoChange(){
	
} */
/*void CAdBusinessPartnerContractDtlView::OnContractNoSetfocus(){
	
} */
/*void CAdBusinessPartnerContractDtlView::OnContractNoKillfocus(){
	
} */
int CAdBusinessPartnerContractDtlView::OnContractNoCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerContractDtlView::OnContractDateChange(){
	
} */
/*void CAdBusinessPartnerContractDtlView::OnContractDateSetfocus(){
	
} */
/*void CAdBusinessPartnerContractDtlView::OnContractDateKillfocus(){
	
} */
int CAdBusinessPartnerContractDtlView::OnContractDateCheckValue(){
	return 0;
} 
void CAdBusinessPartnerContractDtlView::OnPatientListDblClick(){
	
} 
void CAdBusinessPartnerContractDtlView::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerContractDtlView::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdBusinessPartnerContractDtlView::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("PatientNo")), 
			rs.GetValue(_T("PatientName")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CAdBusinessPartnerContractDtlView::OnItemListDblClick(){
	
} 
void CAdBusinessPartnerContractDtlView::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerContractDtlView::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdBusinessPartnerContractDtlView::OnItemListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Qty")), NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CAdBusinessPartnerContractDtlView::OnAddPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractDtlView::OnPrintContractSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractDtlView::OnAddItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractDtlView::OnEditItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractDtlView::OnDeleteItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerContractDtlView::OnAddAdBusinessPartnerContractDtlView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerContractDtlView::OnEditAdBusinessPartnerContractDtlView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerContractDtlView::OnDeleteAdBusinessPartnerContractDtlView(){
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
 		OnCancelAdBusinessPartnerContractDtlView();
 	}
	return 0;
}
int CAdBusinessPartnerContractDtlView::OnSaveAdBusinessPartnerContractDtlView(){
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
 		//OnAdBusinessPartnerContractDtlViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerContractDtlView::OnCancelAdBusinessPartnerContractDtlView(){
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
int CAdBusinessPartnerContractDtlView::OnAdBusinessPartnerContractDtlViewListLoadData(){
	return 0;
}
