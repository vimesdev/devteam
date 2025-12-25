#include "AdBusinessPartnerContractDtlDialog.h"
#include "MainFrm.h"
/*static void _OnContractNoChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnContractNoChange();
} */
/*static void _OnContractNoSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnContractNoSetfocus();} */ 
/*static void _OnContractNoKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnContractNoKillfocus();
} */
static int _OnContractNoCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnContractNoCheckValue();
} 
/*static void _OnContractDateChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnContractDateChange();
} */
/*static void _OnContractDateSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnContractDateSetfocus();} */ 
/*static void _OnContractDateKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnContractDateKillfocus();
} */
static int _OnContractDateCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnContractDateCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractDtlDialog *)pWnd)->OnDescriptionCheckValue();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnItemListDeleteItem();
} 
static void _OnAddContractSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractDtlDialog *pVw = (CAdBusinessPartnerContractDtlDialog *)pWnd;
	pVw->OnAddContractSelect();
} 
static void _OnPrintContractSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractDtlDialog *pVw = (CAdBusinessPartnerContractDtlDialog *)pWnd;
	pVw->OnPrintContractSelect();
} 
static void _OnAddPatientSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractDtlDialog *pVw = (CAdBusinessPartnerContractDtlDialog *)pWnd;
	pVw->OnAddPatientSelect();
} 
static void _OnAddItemSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractDtlDialog *pVw = (CAdBusinessPartnerContractDtlDialog *)pWnd;
	pVw->OnAddItemSelect();
} 
static void _OnEditItemSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractDtlDialog *pVw = (CAdBusinessPartnerContractDtlDialog *)pWnd;
	pVw->OnEditItemSelect();
} 
static void _OnDeleteItemSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractDtlDialog *pVw = (CAdBusinessPartnerContractDtlDialog *)pWnd;
	pVw->OnDeleteItemSelect();
} 
static int _OnAddAdBusinessPartnerContractDtlDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnAddAdBusinessPartnerContractDtlDialog();
} 
static int _OnEditAdBusinessPartnerContractDtlDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnEditAdBusinessPartnerContractDtlDialog();
} 
static int _OnDeleteAdBusinessPartnerContractDtlDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnDeleteAdBusinessPartnerContractDtlDialog();
} 
static int _OnSaveAdBusinessPartnerContractDtlDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnSaveAdBusinessPartnerContractDtlDialog();
} 
static int _OnCancelAdBusinessPartnerContractDtlDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractDtlDialog*)pWnd)->OnCancelAdBusinessPartnerContractDtlDialog();
} 
CAdBusinessPartnerContractDtlDialog::CAdBusinessPartnerContractDtlDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 905;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CAdBusinessPartnerContractDtlDialog::~CAdBusinessPartnerContractDtlDialog(){
}
void CAdBusinessPartnerContractDtlDialog::OnCreateComponents(){
	m_wndContractNoLabel.Create(this, _T("Contract No"), 5, 5, 105, 30);
	m_wndContractNo.Create(this,110, 5, 210, 30); 
	m_wndContractDateLabel.Create(this, _T("Contract Date"), 215, 5, 315, 30);
	m_wndContractDate.Create(this,320, 5, 420, 30); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 425, 5, 525, 30);
	m_wndDescription.Create(this,530, 5, 894, 30); 
	m_wndPatientList.Create(this,5, 35, 345, 535); 
	m_wndItemList.Create(this,350, 35, 889, 535); 
	m_wndAddContract.Create(this, _T("&Add Contract"), 6, 540, 116, 565);
	m_wndPrintContract.Create(this, _T("&Print Contract"), 121, 540, 231, 565);
	m_wndAddPatient.Create(this, _T("Add Patient"), 236, 540, 346, 565);
	m_wndAddItem.Create(this, _T("Add Item"), 640, 540, 720, 565);
	m_wndEditItem.Create(this, _T("&Edit Item"), 725, 540, 805, 565);
	m_wndDeleteItem.Create(this, _T("&Delete Item"), 810, 540, 890, 565);

}
void CAdBusinessPartnerContractDtlDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndContractNo.SetLimitText(35);
	m_wndContractNo.SetCheckValue(true);
	m_wndContractDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndContractDate.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);


	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndPatientList.InsertColumn(1, _T("Patient No"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 180);


	m_wndItemList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	m_wndItemList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndItemList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 50);

}
void CAdBusinessPartnerContractDtlDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndContractNo.SetEvent(WE_CHANGE, _OnContractNoChangeFnc);
	//m_wndContractNo.SetEvent(WE_SETFOCUS, _OnContractNoSetfocusFnc);
	//m_wndContractNo.SetEvent(WE_KILLFOCUS, _OnContractNoKillfocusFnc);
	m_wndContractNo.SetEvent(WE_CHECKVALUE, _OnContractNoCheckValueFnc);
	//m_wndContractDate.SetEvent(WE_CHANGE, _OnContractDateChangeFnc);
	//m_wndContractDate.SetEvent(WE_SETFOCUS, _OnContractDateSetfocusFnc);
	//m_wndContractDate.SetEvent(WE_KILLFOCUS, _OnContractDateKillfocusFnc);
	m_wndContractDate.SetEvent(WE_CHECKVALUE, _OnContractDateCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddContract.SetEvent(WE_CLICK, _OnAddContractSelectFnc);
	m_wndPrintContract.SetEvent(WE_CLICK, _OnPrintContractSelectFnc);
	m_wndAddPatient.SetEvent(WE_CLICK, _OnAddPatientSelectFnc);
	m_wndAddItem.SetEvent(WE_CLICK, _OnAddItemSelectFnc);
	m_wndEditItem.SetEvent(WE_CLICK, _OnEditItemSelectFnc);
	m_wndDeleteItem.SetEvent(WE_CLICK, _OnDeleteItemSelectFnc);
	SetMode(VM_NONE);

}
void CAdBusinessPartnerContractDtlDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndContractNo.GetDlgCtrlID(), m_szContractNo);
	DDX_TextEx(pDX, m_wndContractDate.GetDlgCtrlID(), m_szContractDate);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CAdBusinessPartnerContractDtlDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ContractNo")] =  m_szContractNo;
	m_jData[_T("ContractDate")] =  m_szContractDate;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("ContractNo")].GetValue(m_szContractNo);
	m_jData[_T("ContractDate")].GetValue(m_szContractDate);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CAdBusinessPartnerContractDtlDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerContractDtlDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdBusinessPartnerContractDtlDialog::SetDefaultValues(){

	m_szContractNo.Empty();
	m_szContractDate.Empty();
	m_szDescription.Empty();

}
int CAdBusinessPartnerContractDtlDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
/*void CAdBusinessPartnerContractDtlDialog::OnContractNoChange(){
	
} */
/*void CAdBusinessPartnerContractDtlDialog::OnContractNoSetfocus(){
	
} */
/*void CAdBusinessPartnerContractDtlDialog::OnContractNoKillfocus(){
	
} */
int CAdBusinessPartnerContractDtlDialog::OnContractNoCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerContractDtlDialog::OnContractDateChange(){
	
} */
/*void CAdBusinessPartnerContractDtlDialog::OnContractDateSetfocus(){
	
} */
/*void CAdBusinessPartnerContractDtlDialog::OnContractDateKillfocus(){
	
} */
int CAdBusinessPartnerContractDtlDialog::OnContractDateCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerContractDtlDialog::OnDescriptionChange(){
	
} */
/*void CAdBusinessPartnerContractDtlDialog::OnDescriptionSetfocus(){
	
} */
/*void CAdBusinessPartnerContractDtlDialog::OnDescriptionKillfocus(){
	
} */
int CAdBusinessPartnerContractDtlDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CAdBusinessPartnerContractDtlDialog::OnPatientListDblClick(){
	
} 
void CAdBusinessPartnerContractDtlDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerContractDtlDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdBusinessPartnerContractDtlDialog::OnPatientListLoadData(){
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
void CAdBusinessPartnerContractDtlDialog::OnItemListDblClick(){
	
} 
void CAdBusinessPartnerContractDtlDialog::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerContractDtlDialog::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdBusinessPartnerContractDtlDialog::OnItemListLoadData(){
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
void CAdBusinessPartnerContractDtlDialog::OnAddContractSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractDtlDialog::OnPrintContractSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractDtlDialog::OnAddPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractDtlDialog::OnAddItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractDtlDialog::OnEditItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractDtlDialog::OnDeleteItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerContractDtlDialog::OnAddAdBusinessPartnerContractDtlDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerContractDtlDialog::OnEditAdBusinessPartnerContractDtlDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerContractDtlDialog::OnDeleteAdBusinessPartnerContractDtlDialog(){
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
 		OnCancelAdBusinessPartnerContractDtlDialog();
 	}
	return 0;
}
int CAdBusinessPartnerContractDtlDialog::OnSaveAdBusinessPartnerContractDtlDialog(){
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
 		//OnAdBusinessPartnerContractDtlDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerContractDtlDialog::OnCancelAdBusinessPartnerContractDtlDialog(){
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
int CAdBusinessPartnerContractDtlDialog::OnAdBusinessPartnerContractDtlDialogListLoadData(){
	return 0;
}
