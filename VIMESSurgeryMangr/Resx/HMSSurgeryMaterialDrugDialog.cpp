#include "HMSSurgeryMaterialDrugDialog.h"
#include "MainFrm.h"
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryMaterialDrugDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnStockAddNew();
}*/
static void _OnDrugNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryMaterialDrugDialog* )pWnd)->OnDrugNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugNameSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnDrugNameSelendok();
}
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnDrugNameKillfocus();
}*/
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnDrugNameKillfocus();
}*/
static long _OnDrugNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnDrugNameLoadData();
}
/*static void _OnDrugNameAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnDrugNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnQuantityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSurgeryMaterialDrugDialog *pVw = (CHMSSurgeryMaterialDrugDialog *)pWnd;
	pVw->OnSaveSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnOrderDateCheckValue();
} 
static int _OnAddHMSSurgeryMaterialDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugDialog*)pWnd)->OnAddHMSSurgeryMaterialDrugDialog();
} 
static int _OnEditHMSSurgeryMaterialDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugDialog*)pWnd)->OnEditHMSSurgeryMaterialDrugDialog();
} 
static int _OnDeleteHMSSurgeryMaterialDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugDialog*)pWnd)->OnDeleteHMSSurgeryMaterialDrugDialog();
} 
static int _OnSaveHMSSurgeryMaterialDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugDialog*)pWnd)->OnSaveHMSSurgeryMaterialDrugDialog();
} 
static int _OnCancelHMSSurgeryMaterialDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugDialog*)pWnd)->OnCancelHMSSurgeryMaterialDrugDialog();
} 
CHMSSurgeryMaterialDrugDialog::CHMSSurgeryMaterialDrugDialog(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSSurgeryMaterialDrugDialog::~CHMSSurgeryMaterialDrugDialog(){
}
void CHMSSurgeryMaterialDrugDialog::OnCreateComponents(){
	m_wndStockLabel.Create(this, _T("Stock"), 10, 30, 110, 55);
	m_wndStock.Create(this,115, 30, 345, 55); 
	m_wndNameLabel.Create(this, _T("Name /Cnt"), 10, 60, 110, 85);
	m_wndDrugName.Create(this,115, 60, 345, 85); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 350, 60, 430, 85);
	m_wndQuantity.Create(this,435, 60, 520, 85); 
	m_wndSave.Create(this, _T("&Save"), 525, 60, 595, 85);
	m_wndOrderDateLabel.Create(this, _T("Date"), 350, 30, 430, 55);
	m_wndOrderDate.Create(this,435, 30, 520, 55); 
	m_wndMaterialDrugInformation.Create(this, _T("Material && Drug Information"), 5, 5, 600, 90);

}
void CHMSSurgeryMaterialDrugDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndDrugName.SetCheckValue(true);
	m_wndDrugName.LimitText(35);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDrugName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDrugName.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSSurgeryMaterialDrugDialog::OnSetWindowEvents(){
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndDrugName.SetEvent(WE_SELENDOK, _OnDrugNameSelendokFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_SELCHANGE, _OnDrugNameSelectChangeFnc);
	m_wndDrugName.SetEvent(WE_LOADDATA, _OnDrugNameLoadDataFnc);
	//m_wndDrugName.SetEvent(WE_ADDNEW, _OnDrugNameAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSSurgeryMaterialDrugDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSSurgeryMaterialDrugDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSSurgeryMaterialDrugDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSSurgeryMaterialDrugDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSSurgeryMaterialDrugDialogFnc, 0, 'T', VK_CONTROL);

}
void CHMSSurgeryMaterialDrugDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugNameKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);

}
void CHMSSurgeryMaterialDrugDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSurgeryMaterialDrugDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSurgeryMaterialDrugDialog::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szDrugNameKey.Empty();
	m_nQuantity=0;
	m_szOrderDate.Empty();

}
int CHMSSurgeryMaterialDrugDialog::SetMode(int nMode){
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
void CHMSSurgeryMaterialDrugDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugDialog::OnStockSelendok(){
	 
}
/*void CHMSSurgeryMaterialDrugDialog::OnStockSetfocus(){
	
}*/
/*void CHMSSurgeryMaterialDrugDialog::OnStockKillfocus(){
	
}*/
long CHMSSurgeryMaterialDrugDialog::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryMaterialDrugDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryMaterialDrugDialog::OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugDialog::OnDrugNameSelendok(){
	 
}
/*void CHMSSurgeryMaterialDrugDialog::OnDrugNameSetfocus(){
	
}*/
/*void CHMSSurgeryMaterialDrugDialog::OnDrugNameKillfocus(){
	
}*/
long CHMSSurgeryMaterialDrugDialog::OnDrugNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDrugName.IsSearchKey() && !m_szDrugNameKey.IsEmpty()){
	};
	m_wndDrugName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryMaterialDrugDialog::OnDrugNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryMaterialDrugDialog::OnQuantityChange(){
	
} */
/*void CHMSSurgeryMaterialDrugDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSSurgeryMaterialDrugDialog::OnQuantityKillfocus(){
	
} */
int CHMSSurgeryMaterialDrugDialog::OnQuantityCheckValue(){
	return 0;
} 
void CHMSSurgeryMaterialDrugDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSSurgeryMaterialDrugDialog::OnOrderDateChange(){
	
} */
/*void CHMSSurgeryMaterialDrugDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSSurgeryMaterialDrugDialog::OnOrderDateKillfocus(){
	
} */
int CHMSSurgeryMaterialDrugDialog::OnOrderDateCheckValue(){
	return 0;
} 
int CHMSSurgeryMaterialDrugDialog::OnAddHMSSurgeryMaterialDrugDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSurgeryMaterialDrugDialog::OnEditHMSSurgeryMaterialDrugDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSurgeryMaterialDrugDialog::OnDeleteHMSSurgeryMaterialDrugDialog(){
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
 		OnCancelHMSSurgeryMaterialDrugDialog(); 
 	}
	return 0;
}
int CHMSSurgeryMaterialDrugDialog::OnSaveHMSSurgeryMaterialDrugDialog(){
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
 		//OnHMSSurgeryMaterialDrugDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSurgeryMaterialDrugDialog::OnCancelHMSSurgeryMaterialDrugDialog(){
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
int CHMSSurgeryMaterialDrugDialog::OnHMSSurgeryMaterialDrugDialogListLoadData(){
	return 0;
}
