#include "PurchaseOrderDelivery.h"
#include "MainFrame_E10.h"
static void _OnDeliveryMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDelivery* )pWnd)->OnDeliveryMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryMethodSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryMethodSelendok();
}
/*static void _OnDeliveryMethodSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryMethodKillfocus();
}*/
/*static void _OnDeliveryMethodKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryMethodKillfocus();
}*/
static long _OnDeliveryMethodLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDelivery *)pWnd)->OnDeliveryMethodLoadData();
}
/*static void _OnDeliveryMethodAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryMethodAddNew();
}*/
static void _OnDeliveryTermsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseOrderDelivery* )pWnd)->OnDeliveryTermsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryTermsSelendokFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryTermsSelendok();
}
/*static void _OnDeliveryTermsSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryTermsKillfocus();
}*/
/*static void _OnDeliveryTermsKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryTermsKillfocus();
}*/
static long _OnDeliveryTermsLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseOrderDelivery *)pWnd)->OnDeliveryTermsLoadData();
}
/*static void _OnDeliveryTermsAddNewFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryTermsAddNew();
}*/
/*static void _OnDeliveryDateChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryDateChange();
} */
/*static void _OnDeliveryDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryDateSetfocus();} */ 
/*static void _OnDeliveryDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryDateKillfocus();
} */
static int _OnDeliveryDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDelivery *)pWnd)->OnDeliveryDateCheckValue();
} 
/*static void _OnDeliveryNoteChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryNoteChange();
} */
/*static void _OnDeliveryNoteSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryNoteSetfocus();} */ 
/*static void _OnDeliveryNoteKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryNoteKillfocus();
} */
static int _OnDeliveryNoteCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDelivery *)pWnd)->OnDeliveryNoteCheckValue();
} 
/*static void _OnDeliveryAddressChangeFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryAddressChange();
} */
/*static void _OnDeliveryAddressSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryAddressSetfocus();} */ 
/*static void _OnDeliveryAddressKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderDelivery *)pWnd)->OnDeliveryAddressKillfocus();
} */
static int _OnDeliveryAddressCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderDelivery *)pWnd)->OnDeliveryAddressCheckValue();
} 
static int _OnAddPurchaseOrderDeliveryFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDelivery*)pWnd)->OnAddPurchaseOrderDelivery();
} 
static int _OnEditPurchaseOrderDeliveryFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDelivery*)pWnd)->OnEditPurchaseOrderDelivery();
} 
static int _OnDeletePurchaseOrderDeliveryFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDelivery*)pWnd)->OnDeletePurchaseOrderDelivery();
} 
static int _OnSavePurchaseOrderDeliveryFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDelivery*)pWnd)->OnSavePurchaseOrderDelivery();
} 
static int _OnCancelPurchaseOrderDeliveryFnc(CWnd *pWnd){
	 return ((CPurchaseOrderDelivery*)pWnd)->OnCancelPurchaseOrderDelivery();
} 
CPurchaseOrderDelivery::CPurchaseOrderDelivery(){

	m_nDlgWidth = 770;
	m_nDlgHeight = 181;
	SetDefaultValues();
}
CPurchaseOrderDelivery::~CPurchaseOrderDelivery(){
}
void CPurchaseOrderDelivery::OnCreateComponents(){
	m_wndDeliveryMethodLabel.Create(this, _T("Delivery Method"), 5, 5, 155, 30);
	m_wndDeliveryMethod.Create(this,160, 5, 350, 30); 
	m_wndDeliveryTermsLabel.Create(this, _T("Delivery Terms"), 355, 5, 505, 30);
	m_wndDeliveryTerms.Create(this,510, 5, 706, 30); 
	m_wndDeliveryDateLabel.Create(this, _T("Delivery Date"), 5, 35, 155, 60);
	m_wndDeliveryDate.Create(this,160, 35, 350, 60); 
	m_wndDeliveryNoteLabel.Create(this, _T("Delivery Note"), 355, 35, 505, 60);
	m_wndDeliveryNote.Create(this,510, 35, 705, 60); 
	m_wndDeliveryAddressLabel.Create(this, _T("Delivery Address"), 5, 65, 155, 90);
	m_wndDeliveryAddress.Create(this,160, 65, 705, 115); 

}
void CPurchaseOrderDelivery::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDeliveryMethod.SetCheckValue(true);
	m_wndDeliveryMethod.LimitText(35);
	m_wndDeliveryTerms.SetCheckValue(true);
	m_wndDeliveryTerms.LimitText(35);
	m_wndDeliveryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDeliveryDate.SetCheckValue(true);
	m_wndDeliveryNote.SetLimitText(35);
	m_wndDeliveryNote.SetCheckValue(true);
	m_wndDeliveryAddress.SetMultiLine(TRUE);
	m_wndDeliveryAddress.SetLimitText(35);
	m_wndDeliveryAddress.SetCheckValue(true);


	m_wndDeliveryMethod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDeliveryMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDeliveryTerms.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDeliveryTerms.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPurchaseOrderDelivery::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDeliveryMethod.SetEvent(WE_SELENDOK, _OnDeliveryMethodSelendokFnc);
	//m_wndDeliveryMethod.SetEvent(WE_SETFOCUS, _OnDeliveryMethodSetfocusFnc);
	//m_wndDeliveryMethod.SetEvent(WE_KILLFOCUS, _OnDeliveryMethodKillfocusFnc);
	m_wndDeliveryMethod.SetEvent(WE_SELCHANGE, _OnDeliveryMethodSelectChangeFnc);
	m_wndDeliveryMethod.SetEvent(WE_LOADDATA, _OnDeliveryMethodLoadDataFnc);
	//m_wndDeliveryMethod.SetEvent(WE_ADDNEW, _OnDeliveryMethodAddNewFnc);
	m_wndDeliveryTerms.SetEvent(WE_SELENDOK, _OnDeliveryTermsSelendokFnc);
	//m_wndDeliveryTerms.SetEvent(WE_SETFOCUS, _OnDeliveryTermsSetfocusFnc);
	//m_wndDeliveryTerms.SetEvent(WE_KILLFOCUS, _OnDeliveryTermsKillfocusFnc);
	m_wndDeliveryTerms.SetEvent(WE_SELCHANGE, _OnDeliveryTermsSelectChangeFnc);
	m_wndDeliveryTerms.SetEvent(WE_LOADDATA, _OnDeliveryTermsLoadDataFnc);
	//m_wndDeliveryTerms.SetEvent(WE_ADDNEW, _OnDeliveryTermsAddNewFnc);
	//m_wndDeliveryDate.SetEvent(WE_CHANGE, _OnDeliveryDateChangeFnc);
	//m_wndDeliveryDate.SetEvent(WE_SETFOCUS, _OnDeliveryDateSetfocusFnc);
	//m_wndDeliveryDate.SetEvent(WE_KILLFOCUS, _OnDeliveryDateKillfocusFnc);
	m_wndDeliveryDate.SetEvent(WE_CHECKVALUE, _OnDeliveryDateCheckValueFnc);
	//m_wndDeliveryNote.SetEvent(WE_CHANGE, _OnDeliveryNoteChangeFnc);
	//m_wndDeliveryNote.SetEvent(WE_SETFOCUS, _OnDeliveryNoteSetfocusFnc);
	//m_wndDeliveryNote.SetEvent(WE_KILLFOCUS, _OnDeliveryNoteKillfocusFnc);
	m_wndDeliveryNote.SetEvent(WE_CHECKVALUE, _OnDeliveryNoteCheckValueFnc);
	//m_wndDeliveryAddress.SetEvent(WE_CHANGE, _OnDeliveryAddressChangeFnc);
	//m_wndDeliveryAddress.SetEvent(WE_SETFOCUS, _OnDeliveryAddressSetfocusFnc);
	//m_wndDeliveryAddress.SetEvent(WE_KILLFOCUS, _OnDeliveryAddressKillfocusFnc);
	m_wndDeliveryAddress.SetEvent(WE_CHECKVALUE, _OnDeliveryAddressCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseOrderDeliveryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseOrderDeliveryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseOrderDeliveryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseOrderDeliveryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseOrderDeliveryFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPurchaseOrderDelivery::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDeliveryMethod.GetDlgCtrlID(), m_szDeliveryMethodKey);
	DDX_TextEx(pDX, m_wndDeliveryTerms.GetDlgCtrlID(), m_szDeliveryTermsKey);
	DDX_TextEx(pDX, m_wndDeliveryDate.GetDlgCtrlID(), m_szDeliveryDate);
	DDX_Text(pDX, m_wndDeliveryNote.GetDlgCtrlID(), m_szDeliveryNote);
	DDX_Text(pDX, m_wndDeliveryAddress.GetDlgCtrlID(), m_szDeliveryAddress);

}
void CPurchaseOrderDelivery::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderDelivery::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseOrderDelivery::SetDefaultValues(){

	m_szDeliveryMethodKey.Empty();
	m_szDeliveryTermsKey.Empty();
	m_szDeliveryDate.Empty();
	m_szDeliveryNote.Empty();
	m_szDeliveryAddress.Empty();

}
int CPurchaseOrderDelivery::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
void CPurchaseOrderDelivery::OnDeliveryMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDelivery::OnDeliveryMethodSelendok(){
	 
}
/*void CPurchaseOrderDelivery::OnDeliveryMethodSetfocus(){
	
}*/
/*void CPurchaseOrderDelivery::OnDeliveryMethodKillfocus(){
	
}*/
long CPurchaseOrderDelivery::OnDeliveryMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeliveryMethod.IsSearchKey() && !m_szDeliveryMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeliveryMethodKey
};
	m_wndDeliveryMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeliveryMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDelivery::OnDeliveryMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseOrderDelivery::OnDeliveryTermsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseOrderDelivery::OnDeliveryTermsSelendok(){
	 
}
/*void CPurchaseOrderDelivery::OnDeliveryTermsSetfocus(){
	
}*/
/*void CPurchaseOrderDelivery::OnDeliveryTermsKillfocus(){
	
}*/
long CPurchaseOrderDelivery::OnDeliveryTermsLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeliveryTerms.IsSearchKey() && !m_szDeliveryTermsKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeliveryTermsKey
};
	m_wndDeliveryTerms.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeliveryTerms.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseOrderDelivery::OnDeliveryTermsAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseOrderDelivery::OnDeliveryDateChange(){
	
} */
/*void CPurchaseOrderDelivery::OnDeliveryDateSetfocus(){
	
} */
/*void CPurchaseOrderDelivery::OnDeliveryDateKillfocus(){
	
} */
int CPurchaseOrderDelivery::OnDeliveryDateCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDelivery::OnDeliveryNoteChange(){
	
} */
/*void CPurchaseOrderDelivery::OnDeliveryNoteSetfocus(){
	
} */
/*void CPurchaseOrderDelivery::OnDeliveryNoteKillfocus(){
	
} */
int CPurchaseOrderDelivery::OnDeliveryNoteCheckValue(){
	return 0;
} 
/*void CPurchaseOrderDelivery::OnDeliveryAddressChange(){
	
} */
/*void CPurchaseOrderDelivery::OnDeliveryAddressSetfocus(){
	
} */
/*void CPurchaseOrderDelivery::OnDeliveryAddressKillfocus(){
	
} */
int CPurchaseOrderDelivery::OnDeliveryAddressCheckValue(){
	return 0;
} 
int CPurchaseOrderDelivery::OnAddPurchaseOrderDelivery(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderDelivery::OnEditPurchaseOrderDelivery(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderDelivery::OnDeletePurchaseOrderDelivery(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPurchaseOrderDelivery();
 	}
	return 0;
}
int CPurchaseOrderDelivery::OnSavePurchaseOrderDelivery(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPurchaseOrderDeliveryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderDelivery::OnCancelPurchaseOrderDelivery(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPurchaseOrderDelivery::OnPurchaseOrderDeliveryListLoadData(){
	return 0;
}
