#include "FAMTransactionOrderLinePopup.h"
#include "MainFrm.h"
#include "FAMTransactionOrderLine.h"

static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransactionOrderLinePopup* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderLinePopup *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderLinePopup *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderLinePopup *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderLinePopup *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderLinePopup *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnSeriChangeFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnSeriChange();
} */
/*static void _OnSeriSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnSeriSetfocus();} */ 
/*static void _OnSeriKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnSeriKillfocus();
} */
static int _OnSeriCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderLinePopup *)pWnd)->OnSeriCheckValue();
} 
static void _OnIntendedUseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransactionOrderLinePopup* )pWnd)->OnIntendedUseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIntendedUseSelendokFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnIntendedUseSelendok();
}
/*static void _OnIntendedUseSetfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnIntendedUseKillfocus();
}*/
/*static void _OnIntendedUseKillfocusFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnIntendedUseKillfocus();
}*/
static long _OnIntendedUseLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransactionOrderLinePopup *)pWnd)->OnIntendedUseLoadData();
}
/*static void _OnIntendedUseAddNewFnc(CWnd *pWnd){
	((CFAMTransactionOrderLinePopup *)pWnd)->OnIntendedUseAddNew();
}*/
static void _OnSaveItemSelectFnc(CWnd *pWnd){
	CFAMTransactionOrderLinePopup *pVw = (CFAMTransactionOrderLinePopup *)pWnd;
	pVw->OnSaveItemSelect();
} 
static int _OnAddFAMTransactionOrderLinePopupFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderLinePopup*)pWnd)->OnAddFAMTransactionOrderLinePopup();
} 
static int _OnEditFAMTransactionOrderLinePopupFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderLinePopup*)pWnd)->OnEditFAMTransactionOrderLinePopup();
} 
static int _OnDeleteFAMTransactionOrderLinePopupFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderLinePopup*)pWnd)->OnDeleteFAMTransactionOrderLinePopup();
} 
static int _OnSaveFAMTransactionOrderLinePopupFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderLinePopup*)pWnd)->OnSaveFAMTransactionOrderLinePopup();
} 
static int _OnCancelFAMTransactionOrderLinePopupFnc(CWnd *pWnd){
	 return ((CFAMTransactionOrderLinePopup*)pWnd)->OnCancelFAMTransactionOrderLinePopup();
} 
CFAMTransactionOrderLinePopup::CFAMTransactionOrderLinePopup(CWnd *pParent, int nMode):
	CGuiPopup(pParent)
{
	m_pParentWnd = pParent;
	m_nDlgWidth = 805;
	m_nDlgHeight = 105;
	SetDefaultValues();
	CGuiPopup::SetMode(nMode);
}
CFAMTransactionOrderLinePopup::~CFAMTransactionOrderLinePopup(){
}
void CFAMTransactionOrderLinePopup::OnCreateComponents(){
	m_wndItemNameLabel.Create(this, _T("Item Name"), 5, 5, 85, 30);
	m_wndItemName.Create(this,90, 5, 555, 30); 
	m_wndUnitLabel.Create(this, _T("Unit"), 560, 5, 650, 30);
	m_wndUnit.Create(this,655, 5, 755, 30); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 35, 85, 60);
	m_wndQuantity.Create(this,90, 35, 155, 60); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 160, 35, 240, 60);
	m_wndUnitPrice.Create(this,245, 35, 345, 60); 
	m_wndAmountLabel.Create(this, _T("Amount"), 350, 35, 440, 60);
	m_wndAmount.Create(this,445, 35, 555, 60); 
	m_wndSeriLabel.Create(this, _T("Seri"), 560, 35, 650, 60);
	m_wndSeri.Create(this,655, 35, 755, 60); 
	//m_wndSaveItem.Create(this, _T("+"), 760, 35, 790, 60);

	/*if doctype = I*/
	m_wndIntendedUseLabel.Create(this, _T("Intended Use"), 5, 65, 85, 90);
	m_wndIntendedUse.Create(this,90, 65, 155, 90); 
	m_wndSaveItem.Create(this, _T("+"), 760, 65, 790, 90);
	
}
void CFAMTransactionOrderLinePopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(254);
	m_wndUnit.SetLimitText(35);
	m_wndUnit.SetCheckValue(false);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(12);
	m_wndUnitPrice.SetCheckValue(false);
	m_wndUnitPrice.SetReadOnly(true);
	m_wndAmount.SetLimitText(12);
	m_wndAmount.SetCheckValue(false);
	m_wndSeri.SetLimitText(1024);
	m_wndSeri.SetCheckValue(false);
	m_wndUnit.SetReadOnly(true);
	m_wndAmount.SetReadOnly(true);
	m_wndSeri.SetReadOnly(true);
	m_wndIntendedUse.SetCheckValue(true);
	//m_wndIntendedUse.LimitText(35);

	m_wndItemName.InsertColumn(0, _T("Item ID"), CFMT_TEXT, 180);
	m_wndItemName.InsertColumn(1, _T("Item Name"), CFMT_TEXT, 350);
	m_wndItemName.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(3, _T("Seri"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(4, _T("Unit"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 100);
	m_wndItemName.InsertColumn(6, _T("OnHand"), CFMT_NUMBER, 70);
	
	/*if doctype = I*/
		m_wndIntendedUse.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndIntendedUse.InsertColumn(1, _T("Name"), CFMT_TEXT, 80);


	m_transactionLineTbl.AddField(_T("stl_transaction_id"), dfText, 15);
	m_transactionLineTbl.AddField(_T("stl_user_id"), dfText, 20);
	m_transactionLineTbl.AddField(_T("stl_item_id"), dfText, 20);
	m_transactionLineTbl.AddField(_T("stl_qty"), dfInteger);
	m_transactionLineTbl.AddField(_T("stl_intent"), dfText, 10);
	
}
void CFAMTransactionOrderLinePopup::OnSetWindowEvents(){
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
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndSeri.SetEvent(WE_CHANGE, _OnSeriChangeFnc);
	//m_wndSeri.SetEvent(WE_SETFOCUS, _OnSeriSetfocusFnc);
	//m_wndSeri.SetEvent(WE_KILLFOCUS, _OnSeriKillfocusFnc);
	m_wndSeri.SetEvent(WE_CHECKVALUE, _OnSeriCheckValueFnc);
	m_wndIntendedUse.SetEvent(WE_SELENDOK, _OnIntendedUseSelendokFnc);
	//m_wndIntendedUse.SetEvent(WE_SETFOCUS, _OnIntendedUseSetfocusFnc);
	//m_wndIntendedUse.SetEvent(WE_KILLFOCUS, _OnIntendedUseKillfocusFnc);
	m_wndIntendedUse.SetEvent(WE_SELCHANGE, _OnIntendedUseSelectChangeFnc);
	m_wndIntendedUse.SetEvent(WE_LOADDATA, _OnIntendedUseLoadDataFnc);
	//m_wndIntendedUse.SetEvent(WE_ADDNEW, _OnIntendedUseAddNewFnc);
	m_wndSaveItem.SetEvent(WE_CLICK, _OnSaveItemSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFAMTransactionOrderLinePopupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFAMTransactionOrderLinePopupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFAMTransactionOrderLinePopupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFAMTransactionOrderLinePopupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFAMTransactionOrderLinePopupFnc, 0, 'T', VK_CONTROL);
	int nMode = GetMode();
	GetDataToScreen();
	SetMode(nMode);

}
void CFAMTransactionOrderLinePopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndSeri.GetDlgCtrlID(), m_szSeri);
	DDX_TextEx(pDX, m_wndIntendedUse.GetDlgCtrlID(), m_szIntendedUseKey);

}
void CFAMTransactionOrderLinePopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT st_exp_storage_id FROM storage_transaction WHERE st_transaction_id='%s' "), m_szTransactionID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("st_exp_storage_id"), m_szFromStorageID);
	}

}
void CFAMTransactionOrderLinePopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szUomID;

	szSQL.Format(_T("SELECT fal_unit FROM fam_asset_list WHERE fal_assetno='%s' "), m_szItemNameKey);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("fal_unit"), szUomID);

	m_transactionLineTbl.SetValue(_T("stl_transaction_id"), m_szTransactionID);
	m_transactionLineTbl.SetValue(_T("stl_user_id"), pMF->GetCurrentUser());
	m_transactionLineTbl.SetValue(_T("stl_item_id"), m_szItemNameKey);
	m_transactionLineTbl.SetValue(_T("stl_qty"), m_nQuantity);
	m_transactionLineTbl.SetValue(_T("stl_intent"), m_szIntendedUseKey);

}
void CFAMTransactionOrderLinePopup::SetDefaultValues(){

	m_szItemNameKey.Empty();
	m_szUnit.Empty();
	m_nQuantity = 0;
	m_nUnitPrice = 0;
	m_nAmount = 0;
	m_szSeri.Empty();
	m_szIntendedUseKey.Empty();

}
int CFAMTransactionOrderLinePopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
			m_wndItemName.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
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
void CFAMTransactionOrderLinePopup::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrderLinePopup::OnItemNameSelendok(){
	 UpdateData(TRUE);
	 m_szUnit = m_wndItemName.GetCurrent(4);
	 m_nUnitPrice = str2double(m_wndItemName.GetCurrent(5));
	 m_nAmount = m_nQuantity*m_nUnitPrice;
	 m_szSeri = m_wndItemName.GetCurrent(3);
	 UpdateData(FALSE);
}
/*void CFAMTransactionOrderLinePopup::OnItemNameSetfocus(){
	
}*/
/*void CFAMTransactionOrderLinePopup::OnItemNameKillfocus(){
	
}*/
long CFAMTransactionOrderLinePopup::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sb_qtyonhand-sb_qtyorder > 0 "));

	return pMF->LoadItemList(m_szFromStorageID,  &m_wndItemName, m_szItemNameKey, szFilter);

}
/*void CFAMTransactionOrderLinePopup::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMTransactionOrderLinePopup::OnUnitChange(){
	
} */
/*void CFAMTransactionOrderLinePopup::OnUnitSetfocus(){
	
} */
/*void CFAMTransactionOrderLinePopup::OnUnitKillfocus(){
	
} */
int CFAMTransactionOrderLinePopup::OnUnitCheckValue(){
	return 0;
} 
/*void CFAMTransactionOrderLinePopup::OnQuantityChange(){
	
} */
/*void CFAMTransactionOrderLinePopup::OnQuantitySetfocus(){
	
} */
/*void CFAMTransactionOrderLinePopup::OnQuantityKillfocus(){
	
} */
int CFAMTransactionOrderLinePopup::OnQuantityCheckValue(){
	double nAvaiable = str2double(m_wndItemName.GetCurrent(5));
	if(m_nQuantity > nAvaiable)
	{
		return -1;
	}
	m_nAmount = m_nQuantity*m_nUnitPrice;
	UpdateData(FALSE);
	return 0;
} 
/*void CFAMTransactionOrderLinePopup::OnUnitPriceChange(){
	
} */
/*void CFAMTransactionOrderLinePopup::OnUnitPriceSetfocus(){
	
} */
/*void CFAMTransactionOrderLinePopup::OnUnitPriceKillfocus(){
	
} */
int CFAMTransactionOrderLinePopup::OnUnitPriceCheckValue(){
	if(m_nUnitPrice <= 0)
		return -1;

	m_nAmount = m_nQuantity*m_nUnitPrice;
	UpdateData(FALSE);
	return 0;
} 
/*void CFAMTransactionOrderLinePopup::OnAmountChange(){
	
} */
/*void CFAMTransactionOrderLinePopup::OnAmountSetfocus(){
	
} */
/*void CFAMTransactionOrderLinePopup::OnAmountKillfocus(){
	
} */
int CFAMTransactionOrderLinePopup::OnAmountCheckValue(){
	return 0;
} 
/*void CFAMTransactionOrderLinePopup::OnSeriChange(){
	
} */
/*void CFAMTransactionOrderLinePopup::OnSeriSetfocus(){
	
} */
/*void CFAMTransactionOrderLinePopup::OnSeriKillfocus(){
	
} */
int CFAMTransactionOrderLinePopup::OnSeriCheckValue(){
	return 0;
} 
void CFAMTransactionOrderLinePopup::OnIntendedUseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransactionOrderLinePopup::OnIntendedUseSelendok(){
	 
}
/*void CFAMTransactionOrderLinePopup::OnIntendedUseSetfocus(){
	
}*/
/*void CFAMTransactionOrderLinePopup::OnIntendedUseKillfocus(){
	
}*/
long CFAMTransactionOrderLinePopup::OnIntendedUseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIntendedUse.IsSearchKey() && !m_szIntendedUseKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szIntendedUseKey);
	}
	m_wndIntendedUse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'its_intent' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIntendedUse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMTransactionOrderLinePopup::OnIntendedUseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMTransactionOrderLinePopup::OnSaveItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMTransactionOrderLinePopup();
} 
int CFAMTransactionOrderLinePopup::OnAddFAMTransactionOrderLinePopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMTransactionOrderLinePopup::OnEditFAMTransactionOrderLinePopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMTransactionOrderLinePopup::OnDeleteFAMTransactionOrderLinePopup(){
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
 		OnCancelFAMTransactionOrderLinePopup();
 	}
	return 0;
}
int CFAMTransactionOrderLinePopup::OnSaveFAMTransactionOrderLinePopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szUpdate, szTemp;
	szSQL.Format(_T("STORAGE_TRANSACTION_ADDLINE(%s)"), m_transactionLineTbl.FormatSQL());


 	long ret = str2long(pMF->ExecDML(szSQL));
_tprintf(_T("\r\n%ld:%s"), ret, szSQL);
	if(ret > 0)
 	{
		((CFAMTransactionOrderLine*)m_pParentWnd)->OnItemListLoadData();
 		SetMode(VM_ADD);
		m_wndItemName.SetFocus();
		
 	}
 	else
 	{
		
 	}
 	return 0;

}
int CFAMTransactionOrderLinePopup::OnCancelFAMTransactionOrderLinePopup(){
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
int CFAMTransactionOrderLinePopup::OnFAMTransactionOrderLinePopupListLoadData(){
	return 0;
}
