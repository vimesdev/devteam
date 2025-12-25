#include "FAMOtherTransactionLinePopup.h"
#include "MainFrm.h"
#include "FAMOtherTransactionLine.h"
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMOtherTransactionLinePopup* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionLinePopup *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionLinePopup *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionLinePopup *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionLinePopup *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionLinePopup *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnSeriChangeFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnSeriChange();
} */
/*static void _OnSeriSetfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnSeriSetfocus();} */ 
/*static void _OnSeriKillfocusFnc(CWnd *pWnd){
	((CFAMOtherTransactionLinePopup *)pWnd)->OnSeriKillfocus();
} */
static int _OnSeriCheckValueFnc(CWnd *pWnd){
	return ((CFAMOtherTransactionLinePopup *)pWnd)->OnSeriCheckValue();
} 
static void _OnSaveItemSelectFnc(CWnd *pWnd){
	CFAMOtherTransactionLinePopup *pVw = (CFAMOtherTransactionLinePopup *)pWnd;
	pVw->OnSaveItemSelect();
} 
static int _OnAddFAMOtherTransactionLinePopupFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLinePopup*)pWnd)->OnAddFAMOtherTransactionLinePopup();
} 
static int _OnEditFAMOtherTransactionLinePopupFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLinePopup*)pWnd)->OnEditFAMOtherTransactionLinePopup();
} 
static int _OnDeleteFAMOtherTransactionLinePopupFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLinePopup*)pWnd)->OnDeleteFAMOtherTransactionLinePopup();
} 
static int _OnSaveFAMOtherTransactionLinePopupFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLinePopup*)pWnd)->OnSaveFAMOtherTransactionLinePopup();
} 
static int _OnCancelFAMOtherTransactionLinePopupFnc(CWnd *pWnd){
	 return ((CFAMOtherTransactionLinePopup*)pWnd)->OnCancelFAMOtherTransactionLinePopup();
} 
CFAMOtherTransactionLinePopup::CFAMOtherTransactionLinePopup(CWnd *pParent, int nMode):
CGuiPopup(pParent){
	m_pParentWnd = pParent;
	m_nDlgWidth = 805;
	m_nDlgHeight = 75;
	SetDefaultValues();
	CGuiPopup::SetMode(nMode);
}
CFAMOtherTransactionLinePopup::~CFAMOtherTransactionLinePopup(){
}
void CFAMOtherTransactionLinePopup::OnCreateComponents(){
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
	m_wndSaveItem.Create(this, _T("+"), 760, 35, 790, 60);

}
void CFAMOtherTransactionLinePopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndUnit.SetLimitText(1024);
	m_wndUnit.SetCheckValue(true);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(1024);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndAmount.SetLimitText(1024);
	m_wndAmount.SetCheckValue(true);
	m_wndSeri.SetLimitText(1024);
	m_wndSeri.SetCheckValue(true);

	if(m_szDocType == _T("EOO"))
	{
		m_wndItemName.InsertColumn(0, _T("Item ID"), CFMT_TEXT, 180);
		m_wndItemName.InsertColumn(1, _T("Item Name"), CFMT_TEXT, 350);
		m_wndItemName.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
		m_wndItemName.InsertColumn(3, _T("Seri"), CFMT_TEXT, 100);
		m_wndItemName.InsertColumn(4, _T("Unit"), CFMT_TEXT, 80);
		m_wndItemName.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 100);
		m_wndItemName.InsertColumn(6, _T("OnHand"), CFMT_NUMBER, 70);
		m_wndItemName.InsertColumn(7, _T("Department"), CFMT_TEXT, 60);

		m_transactionLineTbl.AddField(_T("stl_transaction_id"), dfText, 15);
		m_transactionLineTbl.AddField(_T("stl_user_id"), dfText, 20);
		m_transactionLineTbl.AddField(_T("stl_item_id"), dfText, 20);
		m_transactionLineTbl.AddField(_T("stl_qty"), dfInteger);
	}

	if(m_szDocType == _T("IOO"))
	{
		m_wndItemName.InsertColumn(0, _T("Item No"), CFMT_TEXT, 150);
		m_wndItemName.InsertColumn(1, _T("Item Name"), CFMT_TEXT, 400);
		m_wndItemName.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
		m_wndItemName.InsertColumn(3, _T("Unit"), CFMT_TEXT, 80);
		m_wndItemName.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 100);
		m_wndItemName.InsertColumn(5, _T("Type"), CFMT_TEXT, 0);

		m_transactionLineTbl.AddField(_T("stl_transaction_id"), dfText, 15);
		m_transactionLineTbl.AddField(_T("stl_user_id"), dfText, 20);
		m_transactionLineTbl.AddField(_T("stl_item_id"), dfText, 20);
		m_transactionLineTbl.AddField(_T("stl_note"), dfText, 254);
		m_transactionLineTbl.AddField(_T("stl_qty"), dfInteger);
		m_transactionLineTbl.AddField(_T("stl_unitprice"), dfDouble);
		m_transactionLineTbl.AddField(_T("stl_uom_id"), dfText, 35);
		m_transactionLineTbl.AddField(_T("stl_serial"), dfText, 15);
		m_transactionLineTbl.AddField(_T("stl_have_serial"), dfText, 1);
	}

	

}
void CFAMOtherTransactionLinePopup::OnSetWindowEvents(){
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
	m_wndSaveItem.SetEvent(WE_CLICK, _OnSaveItemSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFAMOtherTransactionLinePopupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFAMOtherTransactionLinePopupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFAMOtherTransactionLinePopupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFAMOtherTransactionLinePopupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFAMOtherTransactionLinePopupFnc, 0, 'T', VK_CONTROL);
	
	int nMode = GetMode();
	GetDataToScreen();
	SetMode(nMode);
}
void CFAMOtherTransactionLinePopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndSeri.GetDlgCtrlID(), m_szSeri);

}
void CFAMOtherTransactionLinePopup::GetDataToScreen(){
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
void CFAMOtherTransactionLinePopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szUomID;

	szSQL.Format(_T("SELECT fal_unit FROM fam_asset_list WHERE fal_assetno='%s' "), m_szItemNameKey);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("fal_unit"), szUomID);
	if(m_szDocType == _T("EOO"))
	{
		m_transactionLineTbl.SetValue(_T("stl_transaction_id"), m_szTransactionID);
		m_transactionLineTbl.SetValue(_T("stl_user_id"), pMF->GetCurrentUser());
		m_transactionLineTbl.SetValue(_T("stl_item_id"), m_szItemNameKey);
		m_transactionLineTbl.SetValue(_T("stl_qty"), m_nQuantity);
	}else if(m_szDocType == _T("IOO"))
	{
		m_transactionLineTbl.SetValue(_T("stl_transaction_id"), m_szTransactionID);
		m_transactionLineTbl.SetValue(_T("stl_user_id"), pMF->GetCurrentUser());
		m_transactionLineTbl.SetValue(_T("stl_item_id"), m_szItemNameKey);
		m_transactionLineTbl.SetValue(_T("stl_note"), _T(""));
		m_transactionLineTbl.SetValue(_T("stl_qty"), m_nQuantity);
		m_transactionLineTbl.SetValue(_T("stl_unitprice"), m_nUnitPrice);
		m_transactionLineTbl.SetValue(_T("stl_uom_id"), szUomID);
		m_transactionLineTbl.SetValue(_T("stl_purchase_date"), pMF->GetSysDate());
		m_transactionLineTbl.SetValue(_T("stl_serial"), m_szSeri);
		m_transactionLineTbl.SetValue(_T("stl_useddate"), pMF->GetSysDate());
		m_transactionLineTbl.SetValue(_T("stl_have_serial"), m_szSeri.GetLength() > 0?_T("Y"):_T("N"));
	}
}
void CFAMOtherTransactionLinePopup::SetDefaultValues(){

	m_szItemNameKey.Empty();
	m_szUnit.Empty();
	m_nQuantity=0;
	m_nUnitPrice=0;
	m_nAmount=0;
	m_szSeri.Empty();

}
int CFAMOtherTransactionLinePopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CFAMOtherTransactionLinePopup::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMOtherTransactionLinePopup::OnItemNameSelendok(){
	UpdateData(TRUE);
	if(m_szDocType == _T("EOO"))
	{
		m_szUnit = m_wndItemName.GetCurrent(4);
		m_nUnitPrice = str2double(m_wndItemName.GetCurrent(5));
		m_nAmount = m_nQuantity*m_nUnitPrice;
		m_szSeri = m_wndItemName.GetCurrent(3);
	}
	if(m_szDocType == _T("IOO"))
	{
		m_szUnit = m_wndItemName.GetCurrent(3);
	}
	UpdateData(FALSE); 
}
/*void CFAMOtherTransactionLinePopup::OnItemNameSetfocus(){
	
}*/
/*void CFAMOtherTransactionLinePopup::OnItemNameKillfocus(){
	
}*/
long CFAMOtherTransactionLinePopup::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	if(m_szDocType == _T("IOO"))
	{
		szFilter.Format(_T(" and sb_storage_id = '%s'"), m_szToStorageID);
		return pMF->LoadStdItemListOther(&m_wndItemName, m_szItemNameKey, szFilter);
	}else if(m_szDocType == _T("EOO"))
	{
		return pMF->LoadItemList_Other(m_szFromStorageID, &m_wndItemName, m_szItemNameKey, szFilter, false);
	}
	return 0;
}
/*void CFAMOtherTransactionLinePopup::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMOtherTransactionLinePopup::OnUnitChange(){
	
} */
/*void CFAMOtherTransactionLinePopup::OnUnitSetfocus(){
	
} */
/*void CFAMOtherTransactionLinePopup::OnUnitKillfocus(){
	
} */
int CFAMOtherTransactionLinePopup::OnUnitCheckValue(){
	return 0;
} 
/*void CFAMOtherTransactionLinePopup::OnQuantityChange(){
	
} */
/*void CFAMOtherTransactionLinePopup::OnQuantitySetfocus(){
	
} */
/*void CFAMOtherTransactionLinePopup::OnQuantityKillfocus(){
	
} */
int CFAMOtherTransactionLinePopup::OnQuantityCheckValue(){
	if(m_szDocType == _T("EOO"))
	{
		double nAvaiable = str2double(m_wndItemName.GetCurrent(5));
		if(m_nQuantity > nAvaiable)
		{
			return -1;
		}
	}
	m_nAmount = m_nQuantity*m_nUnitPrice;
	UpdateData(FALSE);
	return 0;
} 
/*void CFAMOtherTransactionLinePopup::OnUnitPriceChange(){
	
} */
/*void CFAMOtherTransactionLinePopup::OnUnitPriceSetfocus(){
	
} */
/*void CFAMOtherTransactionLinePopup::OnUnitPriceKillfocus(){
	
} */
int CFAMOtherTransactionLinePopup::OnUnitPriceCheckValue(){
	if(m_nUnitPrice <= 0)
		return -1;

	m_nAmount = m_nQuantity*m_nUnitPrice;
	UpdateData(FALSE);
	return 0;
} 
/*void CFAMOtherTransactionLinePopup::OnAmountChange(){
	
} */
/*void CFAMOtherTransactionLinePopup::OnAmountSetfocus(){
	
} */
/*void CFAMOtherTransactionLinePopup::OnAmountKillfocus(){
	
} */
int CFAMOtherTransactionLinePopup::OnAmountCheckValue(){
	return 0;
} 
/*void CFAMOtherTransactionLinePopup::OnSeriChange(){
	
} */
/*void CFAMOtherTransactionLinePopup::OnSeriSetfocus(){
	
} */
/*void CFAMOtherTransactionLinePopup::OnSeriKillfocus(){
	
} */
int CFAMOtherTransactionLinePopup::OnSeriCheckValue(){
	return 0;
} 
void CFAMOtherTransactionLinePopup::OnSaveItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMOtherTransactionLinePopup();
} 
int CFAMOtherTransactionLinePopup::OnAddFAMOtherTransactionLinePopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMOtherTransactionLinePopup::OnEditFAMOtherTransactionLinePopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMOtherTransactionLinePopup::OnDeleteFAMOtherTransactionLinePopup(){
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
 		OnCancelFAMOtherTransactionLinePopup();
 	}
	return 0;
}
int CFAMOtherTransactionLinePopup::OnSaveFAMOtherTransactionLinePopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szUpdate, szTemp;
	if(m_szDocType == _T("EOO"))
	{
		szSQL.Format(_T("STORAGE_TRANSACTION_ADDLINE(%s)"), m_transactionLineTbl.FormatSQL());
	}else if(m_szDocType == _T("IOO"))
	{
		szSQL.Format(_T("STORAGE_TRANS_CREATELINE_V2(%s)"), m_transactionLineTbl.FormatSQL());
	}

 	long ret = str2long(pMF->ExecDML(szSQL));
_tprintf(_T("\r\n%ld:%s"), ret, szSQL);
	if(ret > 0)
 	{
		((CFAMOtherTransactionLine*)m_pParentWnd)->OnItemListLoadData();
 		SetMode(VM_ADD);
		m_wndItemName.SetFocus();
		
 	}
 	else
 	{
		
 	}
 	return 0;
}
int CFAMOtherTransactionLinePopup::OnCancelFAMOtherTransactionLinePopup(){
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
int CFAMOtherTransactionLinePopup::OnFAMOtherTransactionLinePopupListLoadData(){
	return 0;
}
