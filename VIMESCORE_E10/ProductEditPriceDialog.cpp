#include "ProductEditPriceDialog.h"
#include "MainFrame_E10.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductEditPriceDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CProductEditPriceDialog *)pWnd)->OnUomCheckValue();
} 
/*static void _OnMfgChangeFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnMfgChange();
} */
/*static void _OnMfgSetfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnMfgSetfocus();} */ 
/*static void _OnMfgKillfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnMfgKillfocus();
} */
static int _OnMfgCheckValueFnc(CWnd *pWnd){
	return ((CProductEditPriceDialog *)pWnd)->OnMfgCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CProductEditPriceDialog *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CProductEditPriceDialog *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnTaxPriceChangeFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnTaxPriceChange();
} */
/*static void _OnTaxPriceSetfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnTaxPriceSetfocus();} */ 
/*static void _OnTaxPriceKillfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnTaxPriceKillfocus();
} */
static int _OnTaxPriceCheckValueFnc(CWnd *pWnd){
	return ((CProductEditPriceDialog *)pWnd)->OnTaxPriceCheckValue();
} 
/*static void _OnExpiryChangeFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnExpiryChange();
} */
/*static void _OnExpirySetfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnExpirySetfocus();} */ 
/*static void _OnExpiryKillfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnExpiryKillfocus();
} */
static int _OnExpiryCheckValueFnc(CWnd *pWnd){
	return ((CProductEditPriceDialog *)pWnd)->OnExpiryCheckValue();
} 
/*static void _OnSalePriceChangeFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnSalePriceChange();
} */
/*static void _OnSalePriceSetfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnSalePriceSetfocus();} */ 
/*static void _OnSalePriceKillfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnSalePriceKillfocus();
} */
static int _OnSalePriceCheckValueFnc(CWnd *pWnd){
	return ((CProductEditPriceDialog *)pWnd)->OnSalePriceCheckValue();
} 
/*static void _OnInsPriceChangeFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnInsPriceChange();
} */
/*static void _OnInsPriceSetfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnInsPriceSetfocus();} */ 
/*static void _OnInsPriceKillfocusFnc(CWnd *pWnd){
	((CProductEditPriceDialog *)pWnd)->OnInsPriceKillfocus();
} */
static int _OnInsPriceCheckValueFnc(CWnd *pWnd){
	return ((CProductEditPriceDialog *)pWnd)->OnInsPriceCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CProductEditPriceDialog *pVw = (CProductEditPriceDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductEditPriceDialog *pVw = (CProductEditPriceDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductEditPriceDialogFnc(CWnd *pWnd){
	 return ((CProductEditPriceDialog*)pWnd)->OnAddProductEditPriceDialog();
} 
static int _OnEditProductEditPriceDialogFnc(CWnd *pWnd){
	 return ((CProductEditPriceDialog*)pWnd)->OnEditProductEditPriceDialog();
} 
static int _OnDeleteProductEditPriceDialogFnc(CWnd *pWnd){
	 return ((CProductEditPriceDialog*)pWnd)->OnDeleteProductEditPriceDialog();
} 
static int _OnSaveProductEditPriceDialogFnc(CWnd *pWnd){
	 return ((CProductEditPriceDialog*)pWnd)->OnSaveProductEditPriceDialog();
} 
static int _OnCancelProductEditPriceDialogFnc(CWnd *pWnd){
	 return ((CProductEditPriceDialog*)pWnd)->OnCancelProductEditPriceDialog();
} 
CProductEditPriceDialog::CProductEditPriceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 435;
	m_nDlgHeight = 220;
	SetDefaultValues();
}
CProductEditPriceDialog::~CProductEditPriceDialog(){
}
void CProductEditPriceDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 110, 55);
	m_wndName.Create(this,115, 30, 425, 55); 
	m_wndUomLabel.Create(this, _T("Uom"), 10, 60, 110, 85);
	m_wndUom.Create(this,115, 60, 215, 85); 
	m_wndEditPriceInformation.Create(this, _T("Edit Price Information"), 5, 5, 430, 180);
	m_wndMfgLabel.Create(this, _T("Mfg"), 220, 60, 320, 85);
	m_wndMfg.Create(this,325, 60, 425, 85); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 10, 90, 110, 115);
	m_wndUnitPrice.Create(this,115, 90, 215, 115); 
	m_wndLotNoLabel.Create(this, _T("Lot No"), 220, 90, 320, 115);
	m_wndLotNo.Create(this,325, 90, 425, 115); 
	m_wndTaxPriceLabel.Create(this, _T("Vat Price"), 10, 120, 110, 145);
	m_wndTaxPrice.Create(this,115, 120, 215, 145); 
	m_wndExpiryLabel.Create(this, _T("Expiry"), 220, 120, 320, 145);
	m_wndExpiry.Create(this,325, 120, 425, 145); 
	m_wndSalePriceLabel.Create(this, _T("Sale Price"), 10, 150, 110, 175);
	m_wndSalePrice.Create(this,115, 150, 215, 175); 
	m_wndInsPriceLabel.Create(this, _T("Ins Price"), 220, 150, 320, 175);
	m_wndInsPrice.Create(this,325, 150, 425, 175); 
	m_wndApply.Create(this, _T("&Apply"), 265, 185, 345, 210);
	m_wndClose.Create(this, _T("&Close"), 350, 185, 430, 210);

}
void CProductEditPriceDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndUom.SetLimitText(35);
	m_wndUom.SetCheckValue(true);
	m_wndMfg.SetLimitText(35);
	m_wndMfg.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(16);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndLotNo.SetLimitText(35);
	m_wndLotNo.SetCheckValue(true);
	m_wndTaxPrice.SetLimitText(16);
	m_wndTaxPrice.SetCheckValue(true);
	//m_wndExpiry.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpiry.SetCheckValue(true);
	m_wndSalePrice.SetLimitText(16);
	m_wndSalePrice.SetCheckValue(true);
	m_wndInsPrice.SetLimitText(35);
	m_wndInsPrice.SetCheckValue(true);

}
void CProductEditPriceDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndUom.SetEvent(WE_CHANGE, _OnUomChangeFnc);
	//m_wndUom.SetEvent(WE_SETFOCUS, _OnUomSetfocusFnc);
	//m_wndUom.SetEvent(WE_KILLFOCUS, _OnUomKillfocusFnc);
	m_wndUom.SetEvent(WE_CHECKVALUE, _OnUomCheckValueFnc);
	//m_wndMfg.SetEvent(WE_CHANGE, _OnMfgChangeFnc);
	//m_wndMfg.SetEvent(WE_SETFOCUS, _OnMfgSetfocusFnc);
	//m_wndMfg.SetEvent(WE_KILLFOCUS, _OnMfgKillfocusFnc);
	m_wndMfg.SetEvent(WE_CHECKVALUE, _OnMfgCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndLotNo.SetEvent(WE_CHANGE, _OnLotNoChangeFnc);
	//m_wndLotNo.SetEvent(WE_SETFOCUS, _OnLotNoSetfocusFnc);
	//m_wndLotNo.SetEvent(WE_KILLFOCUS, _OnLotNoKillfocusFnc);
	m_wndLotNo.SetEvent(WE_CHECKVALUE, _OnLotNoCheckValueFnc);
	//m_wndTaxPrice.SetEvent(WE_CHANGE, _OnTaxPriceChangeFnc);
	//m_wndTaxPrice.SetEvent(WE_SETFOCUS, _OnTaxPriceSetfocusFnc);
	//m_wndTaxPrice.SetEvent(WE_KILLFOCUS, _OnTaxPriceKillfocusFnc);
	m_wndTaxPrice.SetEvent(WE_CHECKVALUE, _OnTaxPriceCheckValueFnc);
	//m_wndExpiry.SetEvent(WE_CHANGE, _OnExpiryChangeFnc);
	//m_wndExpiry.SetEvent(WE_SETFOCUS, _OnExpirySetfocusFnc);
	//m_wndExpiry.SetEvent(WE_KILLFOCUS, _OnExpiryKillfocusFnc);
	m_wndExpiry.SetEvent(WE_CHECKVALUE, _OnExpiryCheckValueFnc);
	//m_wndSalePrice.SetEvent(WE_CHANGE, _OnSalePriceChangeFnc);
	//m_wndSalePrice.SetEvent(WE_SETFOCUS, _OnSalePriceSetfocusFnc);
	//m_wndSalePrice.SetEvent(WE_KILLFOCUS, _OnSalePriceKillfocusFnc);
	m_wndSalePrice.SetEvent(WE_CHECKVALUE, _OnSalePriceCheckValueFnc);
	//m_wndInsPrice.SetEvent(WE_CHANGE, _OnInsPriceChangeFnc);
	//m_wndInsPrice.SetEvent(WE_SETFOCUS, _OnInsPriceSetfocusFnc);
	//m_wndInsPrice.SetEvent(WE_KILLFOCUS, _OnInsPriceKillfocusFnc);
	m_wndInsPrice.SetEvent(WE_CHECKVALUE, _OnInsPriceCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);

}
void CProductEditPriceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_Text(pDX, m_wndMfg.GetDlgCtrlID(), m_szMfg);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_Text(pDX, m_wndTaxPrice.GetDlgCtrlID(), m_nTaxPrice);
	DDX_TextEx(pDX, m_wndExpiry.GetDlgCtrlID(), m_szExpiry);
	DDX_Text(pDX, m_wndSalePrice.GetDlgCtrlID(), m_nSalePrice);
	DDX_Text(pDX, m_wndInsPrice.GetDlgCtrlID(), m_nInsPrice);

}
void CProductEditPriceDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT product_name,") \
_T("   product_uomname,") \
_T("   product_manufacturename, product_lotno,") \
_T("   product_expdate,") \
_T("   product_unitprice,") \
_T("   product_taxprice,") \
_T("   product_saleprice1,") \
_T("   product_saleprice2,") \
_T("   product_saleprice3") \
_T(" FROM m_productitem_view") \
_T(" WHERE product_item_id=%ld"), m_nProductItem_ID);
	rs.ExecSQL(szSQL);
	SetDefaultValues();
	if(!rs.IsEOF()){
		rs.GetValue(_T("product_name"), m_szName);
		rs.GetValue(_T("product_uomname"), m_szUom);
		rs.GetValue(_T("product_manufacturename"), m_szMfg);
		rs.GetValue(_T("product_lotno"), m_szLotNo);
		rs.GetValue(_T("product_expdate"), m_szExpiry);
		rs.GetValue(_T("product_unitprice"), m_nUnitPrice);
		rs.GetValue(_T("product_taxprice"), m_nTaxPrice);
		rs.GetValue(_T("product_saleprice1"), m_nSalePrice);
		rs.GetValue(_T("product_saleprice2"), m_nInsPrice);

		rs.GetValue(_T("product_name"), m_szName_Old);
		rs.GetValue(_T("product_uomname"), m_szUom_old);
		rs.GetValue(_T("product_manufacturename"), m_szMfg_old);
		rs.GetValue(_T("product_lotno"), m_szLotNo_old);
		rs.GetValue(_T("product_expdate"), m_szExpiry_old);
		rs.GetValue(_T("product_unitprice"), m_nUnitPrice_old);
		rs.GetValue(_T("product_taxprice"), m_nTaxPrice_old);
		rs.GetValue(_T("product_saleprice1"), m_nSalePrice_old);
		rs.GetValue(_T("product_saleprice2"), m_nInsPrice_old);
	}
	

}
void CProductEditPriceDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CProductEditPriceDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szUom.Empty();
	m_szMfg.Empty();
	m_nUnitPrice=0;
	m_szLotNo.Empty();
	m_nTaxPrice=0;
	m_szExpiry.Empty();
	m_nSalePrice=0;
	m_nInsPrice =0;

}
int CProductEditPriceDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
			if(m_szStorageCategory == _T("A"))
			{
				m_wndSalePrice.EnableWindow(TRUE);
				m_wndInsPrice.EnableWindow(TRUE);
			}
			else if(m_szStorageCategory == _T("S"))
				m_wndSalePrice.EnableWindow(TRUE);
			else
				m_wndInsPrice.EnableWindow(TRUE);
			if (pMF->CheckPermission(_T("10.19")))
				m_wndExpiry.EnableWindow(TRUE);
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
/*void CProductEditPriceDialog::OnNameChange(){
	
} */
/*void CProductEditPriceDialog::OnNameSetfocus(){
	
} */
/*void CProductEditPriceDialog::OnNameKillfocus(){
	
} */
int CProductEditPriceDialog::OnNameCheckValue(){
	return 0;
} 
/*void CProductEditPriceDialog::OnUomChange(){
	
} */
/*void CProductEditPriceDialog::OnUomSetfocus(){
	
} */
/*void CProductEditPriceDialog::OnUomKillfocus(){
	
} */
int CProductEditPriceDialog::OnUomCheckValue(){
	return 0;
} 
/*void CProductEditPriceDialog::OnMfgChange(){
	
} */
/*void CProductEditPriceDialog::OnMfgSetfocus(){
	
} */
/*void CProductEditPriceDialog::OnMfgKillfocus(){
	
} */
int CProductEditPriceDialog::OnMfgCheckValue(){
	return 0;
} 
/*void CProductEditPriceDialog::OnUnitPriceChange(){
	
} */
/*void CProductEditPriceDialog::OnUnitPriceSetfocus(){
	
} */
/*void CProductEditPriceDialog::OnUnitPriceKillfocus(){
	
} */
int CProductEditPriceDialog::OnUnitPriceCheckValue(){
	return 0;
} 
/*void CProductEditPriceDialog::OnLotNoChange(){
	
} */
/*void CProductEditPriceDialog::OnLotNoSetfocus(){
	
} */
/*void CProductEditPriceDialog::OnLotNoKillfocus(){
	
} */
int CProductEditPriceDialog::OnLotNoCheckValue(){
	return 0;
} 
/*void CProductEditPriceDialog::OnTaxPriceChange(){
	
} */
/*void CProductEditPriceDialog::OnTaxPriceSetfocus(){
	
} */
/*void CProductEditPriceDialog::OnTaxPriceKillfocus(){
	
} */
int CProductEditPriceDialog::OnTaxPriceCheckValue(){
	return 0;
} 
/*void CProductEditPriceDialog::OnExpiryChange(){
	
} */
/*void CProductEditPriceDialog::OnExpirySetfocus(){
	
} */
/*void CProductEditPriceDialog::OnExpiryKillfocus(){
	
} */
int CProductEditPriceDialog::OnExpiryCheckValue(){
	return 0;
} 
/*void CProductEditPriceDialog::OnSalePriceChange(){
	
} */
/*void CProductEditPriceDialog::OnSalePriceSetfocus(){
	
} */
/*void CProductEditPriceDialog::OnSalePriceKillfocus(){
	
} */
int CProductEditPriceDialog::OnSalePriceCheckValue(){
	return 0;
} 
/*void CProductEditPriceDialog::OnInsPriceChange(){
	
} */
/*void CProductEditPriceDialog::OnInsPriceSetfocus(){
	
} */
/*void CProductEditPriceDialog::OnInsPriceKillfocus(){
	
} */
int CProductEditPriceDialog::OnInsPriceCheckValue(){
	return 0;
} 
void CProductEditPriceDialog::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(OnSaveProductEditPriceDialog() > 0)
		CGuiDialog::OnOK();
} 
void CProductEditPriceDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CProductEditPriceDialog::OnAddProductEditPriceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductEditPriceDialog::OnEditProductEditPriceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductEditPriceDialog::OnDeleteProductEditPriceDialog(){
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
 		OnCancelProductEditPriceDialog();
 	}
	return 0;
}
int CProductEditPriceDialog::OnSaveProductEditPriceDialog(){
 	if(GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("M_PRODUCT_ITEM_EDITPRICE(%ld, %.2f, %.2f, '%s') "),
		m_nProductItem_ID, m_nSalePrice, m_nInsPrice, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if (pMF->CheckPermission(_T("10.19")))
		ret += OnSaveExpiry();


	// ghi log ai la nguoi sua gia
	
	CString szEvent, szDesc;
	szEvent.Format(_T("Edit Patient Information"));
	szDesc.Format(_T("[Product_item_id : %ld,Insprice: %.2f,SalePrice %.2f, UnitPrice: %.2f, Expricedate: %s]->[ %.2f,%.2f,%.2f,%s]"),m_nProductItem_ID,m_nInsPrice_old, m_nSalePrice_old, m_nUnitPrice_old,m_szExpiry_old,m_nInsPrice, m_nSalePrice, m_nUnitPrice,m_szExpiry  );
	
	pMF->SystemLog(szEvent, szDesc);
	
 	return ret;
}
int CProductEditPriceDialog::OnCancelProductEditPriceDialog(){
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
int CProductEditPriceDialog::OnProductEditPriceDialogListLoadData(){
	return 0;
}

int CProductEditPriceDialog::OnSaveExpiry(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("UPDATE m_product_item SET mpi_expdate = to_date('%s', 'yyyy/mm/dd hh24:mi:ss') WHERE mpi_product_item_id = %ld"), m_szExpiry, m_nProductItem_ID);
_debug(_T("Update expiry: %s"), szSQL);
	int nRet = pMF->ExecSQL(szSQL);
	return nRet;
}