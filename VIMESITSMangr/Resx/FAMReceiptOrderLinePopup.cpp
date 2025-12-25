#include "FAMReceiptOrderLinePopup.h"
#include "MainFrm.h"
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMReceiptOrderLinePopup* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CFAMReceiptOrderLinePopup *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CFAMReceiptOrderLinePopup *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CFAMReceiptOrderLinePopup *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMReceiptOrderLinePopup *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnMoneyChangeFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnMoneyChange();
} */
/*static void _OnMoneySetfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnMoneySetfocus();} */ 
/*static void _OnMoneyKillfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnMoneyKillfocus();
} */
static int _OnMoneyCheckValueFnc(CWnd *pWnd){
	return ((CFAMReceiptOrderLinePopup *)pWnd)->OnMoneyCheckValue();
} 
/*static void _OnSeriChangeFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnSeriChange();
} */
/*static void _OnSeriSetfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnSeriSetfocus();} */ 
/*static void _OnSeriKillfocusFnc(CWnd *pWnd){
	((CFAMReceiptOrderLinePopup *)pWnd)->OnSeriKillfocus();
} */
static int _OnSeriCheckValueFnc(CWnd *pWnd){
	return ((CFAMReceiptOrderLinePopup *)pWnd)->OnSeriCheckValue();
} 
static void _OnSaveItemSelectFnc(CWnd *pWnd){
	CFAMReceiptOrderLinePopup *pVw = (CFAMReceiptOrderLinePopup *)pWnd;
	pVw->OnSaveItemSelect();
} 
static int _OnAddFAMReceiptOrderLinePopupFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLinePopup*)pWnd)->OnAddFAMReceiptOrderLinePopup();
} 
static int _OnEditFAMReceiptOrderLinePopupFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLinePopup*)pWnd)->OnEditFAMReceiptOrderLinePopup();
} 
static int _OnDeleteFAMReceiptOrderLinePopupFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLinePopup*)pWnd)->OnDeleteFAMReceiptOrderLinePopup();
} 
static int _OnSaveFAMReceiptOrderLinePopupFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLinePopup*)pWnd)->OnSaveFAMReceiptOrderLinePopup();
} 
static int _OnCancelFAMReceiptOrderLinePopupFnc(CWnd *pWnd){
	 return ((CFAMReceiptOrderLinePopup*)pWnd)->OnCancelFAMReceiptOrderLinePopup();
} 
CFAMReceiptOrderLinePopup::CFAMReceiptOrderLinePopup(){

	m_nDlgWidth = 795;
	m_nDlgHeight = 70;
	SetDefaultValues();
}
CFAMReceiptOrderLinePopup::~CFAMReceiptOrderLinePopup(){
}
void CFAMReceiptOrderLinePopup::OnCreateComponents(){
	m_wndItemNameLabel.Create(this, _T("Item Name"), 5, 5, 85, 30);
	m_wndItemName.Create(this,90, 5, 555, 30); 
	m_wndUnitLabel.Create(this, _T("Unit"), 560, 5, 650, 30);
	m_wndUnit.Create(this,655, 5, 755, 30); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 35, 85, 60);
	m_wndQuantity.Create(this,90, 35, 155, 60); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 160, 35, 240, 60);
	m_wndUnitPrice.Create(this,245, 35, 345, 60); 
	m_wndMoneyLabel.Create(this, _T("Money"), 350, 35, 440, 60);
	m_wndMoney.Create(this,445, 35, 555, 60); 
	m_wndSeriLabel.Create(this, _T("Seri"), 560, 35, 650, 60);
	m_wndSeri.Create(this,655, 35, 755, 60); 
	m_wndSaveItem.Create(this, _T("+"), 760, 35, 790, 60);

}
void CFAMReceiptOrderLinePopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndUnit.SetLimitText(1024);
	m_wndUnit.SetCheckValue(true);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(1024);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndMoney.SetLimitText(1024);
	m_wndMoney.SetCheckValue(true);
	m_wndSeri.SetLimitText(1024);
	m_wndSeri.SetCheckValue(true);



}
void CFAMReceiptOrderLinePopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetEvent(WE_SELENDOK, _OnItemNameSelendokFnc);
	//m_wndItemName.SetEvent(WE_SETFOCUS, _OnItemNameSetfocusFnc);
	//m_wndItemName.SetEvent(WE_KILLFOCUS, _OnItemNameKillfocusFnc);
	m_wndItemName.SetEvent(WE_SELCHANGE, _OnItemNameSelectChangeFnc);
	m_wndItemName.SetEvent(WE_LOADDATA, _OnItemNameLoadDataFnc);
	//m_wndItemName.SetEvent(WE_ADDNEW, _OnItemNameAddNewFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndMoney.SetEvent(WE_CHANGE, _OnMoneyChangeFnc);
	//m_wndMoney.SetEvent(WE_SETFOCUS, _OnMoneySetfocusFnc);
	//m_wndMoney.SetEvent(WE_KILLFOCUS, _OnMoneyKillfocusFnc);
	m_wndMoney.SetEvent(WE_CHECKVALUE, _OnMoneyCheckValueFnc);
	//m_wndSeri.SetEvent(WE_CHANGE, _OnSeriChangeFnc);
	//m_wndSeri.SetEvent(WE_SETFOCUS, _OnSeriSetfocusFnc);
	//m_wndSeri.SetEvent(WE_KILLFOCUS, _OnSeriKillfocusFnc);
	m_wndSeri.SetEvent(WE_CHECKVALUE, _OnSeriCheckValueFnc);
	m_wndSaveItem.SetEvent(WE_CLICK, _OnSaveItemSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFAMReceiptOrderLinePopupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFAMReceiptOrderLinePopupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFAMReceiptOrderLinePopupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFAMReceiptOrderLinePopupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFAMReceiptOrderLinePopupFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFAMReceiptOrderLinePopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_szQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_szUnitPrice);
	DDX_Text(pDX, m_wndMoney.GetDlgCtrlID(), m_szMoney);
	DDX_Text(pDX, m_wndSeri.GetDlgCtrlID(), m_szSeri);

}
void CFAMReceiptOrderLinePopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMReceiptOrderLinePopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMReceiptOrderLinePopup::SetDefaultValues(){

	m_szItemNameKey.Empty();
	m_szUnit.Empty();
	m_szQuantity.Empty();
	m_szUnitPrice.Empty();
	m_szMoney.Empty();
	m_szSeri.Empty();

}
int CFAMReceiptOrderLinePopup::SetMode(int nMode){
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
void CFAMReceiptOrderLinePopup::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMReceiptOrderLinePopup::OnItemNameSelendok(){
	 
}
/*void CFAMReceiptOrderLinePopup::OnItemNameSetfocus(){
	
}*/
/*void CFAMReceiptOrderLinePopup::OnItemNameKillfocus(){
	
}*/
long CFAMReceiptOrderLinePopup::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemName.IsSearchKey() && !m_szItemNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemNameKey
};
	m_wndItemName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFAMReceiptOrderLinePopup::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMReceiptOrderLinePopup::OnUnitChange(){
	
} */
/*void CFAMReceiptOrderLinePopup::OnUnitSetfocus(){
	
} */
/*void CFAMReceiptOrderLinePopup::OnUnitKillfocus(){
	
} */
int CFAMReceiptOrderLinePopup::OnUnitCheckValue(){
	return 0;
} 
/*void CFAMReceiptOrderLinePopup::OnQuantityChange(){
	
} */
/*void CFAMReceiptOrderLinePopup::OnQuantitySetfocus(){
	
} */
/*void CFAMReceiptOrderLinePopup::OnQuantityKillfocus(){
	
} */
int CFAMReceiptOrderLinePopup::OnQuantityCheckValue(){
	return 0;
} 
/*void CFAMReceiptOrderLinePopup::OnUnitPriceChange(){
	
} */
/*void CFAMReceiptOrderLinePopup::OnUnitPriceSetfocus(){
	
} */
/*void CFAMReceiptOrderLinePopup::OnUnitPriceKillfocus(){
	
} */
int CFAMReceiptOrderLinePopup::OnUnitPriceCheckValue(){
	return 0;
} 
/*void CFAMReceiptOrderLinePopup::OnMoneyChange(){
	
} */
/*void CFAMReceiptOrderLinePopup::OnMoneySetfocus(){
	
} */
/*void CFAMReceiptOrderLinePopup::OnMoneyKillfocus(){
	
} */
int CFAMReceiptOrderLinePopup::OnMoneyCheckValue(){
	return 0;
} 
/*void CFAMReceiptOrderLinePopup::OnSeriChange(){
	
} */
/*void CFAMReceiptOrderLinePopup::OnSeriSetfocus(){
	
} */
/*void CFAMReceiptOrderLinePopup::OnSeriKillfocus(){
	
} */
int CFAMReceiptOrderLinePopup::OnSeriCheckValue(){
	return 0;
} 
void CFAMReceiptOrderLinePopup::OnSaveItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFAMReceiptOrderLinePopup::OnAddFAMReceiptOrderLinePopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMReceiptOrderLinePopup::OnEditFAMReceiptOrderLinePopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMReceiptOrderLinePopup::OnDeleteFAMReceiptOrderLinePopup(){
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
 		OnCancelFAMReceiptOrderLinePopup();
 	}
	return 0;
}
int CFAMReceiptOrderLinePopup::OnSaveFAMReceiptOrderLinePopup(){
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
 		//OnFAMReceiptOrderLinePopupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMReceiptOrderLinePopup::OnCancelFAMReceiptOrderLinePopup(){
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
int CFAMReceiptOrderLinePopup::OnFAMReceiptOrderLinePopupListLoadData(){
	return 0;
}
