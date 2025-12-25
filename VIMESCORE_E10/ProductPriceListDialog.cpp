#include "ProductPriceListDialog.h"
#include "MainFrame_E10.h"
#include "ProductPriceList.h"
#include "ProductDialog.h"

static void _OnManufactureSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductPriceListDialog* )pWnd)->OnManufactureSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManufactureSelendokFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnManufactureSelendok();
}
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnManufactureKillfocus();
}*/
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnManufactureKillfocus();
}*/
static long _OnManufactureLoadDataFnc(CWnd *pWnd){
	return ((CProductPriceListDialog *)pWnd)->OnManufactureLoadData();
}
/*static void _OnManufactureAddNewFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnManufactureAddNew();
}*/
static void _OnVendorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductPriceListDialog* )pWnd)->OnVendorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVendorSelendokFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnVendorSelendok();
}
/*static void _OnVendorSetfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnVendorKillfocus();
}*/
/*static void _OnVendorKillfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnVendorKillfocus();
}*/
static long _OnVendorLoadDataFnc(CWnd *pWnd){
	return ((CProductPriceListDialog *)pWnd)->OnVendorLoadData();
}
/*static void _OnVendorAddNewFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnVendorAddNew();
}*/
/*static void _OnPurchasePriceChangeFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnPurchasePriceChange();
} */
/*static void _OnPurchasePriceSetfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnPurchasePriceSetfocus();} */ 
/*static void _OnPurchasePriceKillfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnPurchasePriceKillfocus();
} */
static int _OnPurchasePriceCheckValueFnc(CWnd *pWnd){
	return ((CProductPriceListDialog *)pWnd)->OnPurchasePriceCheckValue();
} 
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CProductPriceListDialog *)pWnd)->OnApplyDateCheckValue();
} 
/*static void _OnSalePriceChangeFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePriceChange();
} */
/*static void _OnSalePriceSetfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePriceSetfocus();} */ 
/*static void _OnSalePriceKillfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePriceKillfocus();
} */
static int _OnSalePriceCheckValueFnc(CWnd *pWnd){
	return ((CProductPriceListDialog *)pWnd)->OnSalePriceCheckValue();
} 
/*static void _OnSalePrice2ChangeFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePrice2Change();
} */
/*static void _OnSalePrice2SetfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePrice2Setfocus();} */ 
/*static void _OnSalePrice2KillfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePrice2Killfocus();
} */
static int _OnSalePrice2CheckValueFnc(CWnd *pWnd){
	return ((CProductPriceListDialog *)pWnd)->OnSalePrice2CheckValue();
} 
/*static void _OnSalePrice3ChangeFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePrice3Change();
} */
/*static void _OnSalePrice3SetfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePrice3Setfocus();} */ 
/*static void _OnSalePrice3KillfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePrice3Killfocus();
} */
static int _OnSalePrice3CheckValueFnc(CWnd *pWnd){
	return ((CProductPriceListDialog *)pWnd)->OnSalePrice3CheckValue();
} 
/*static void _OnSalePrice4ChangeFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePrice4Change();
} */
/*static void _OnSalePrice4SetfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePrice4Setfocus();} */ 
/*static void _OnSalePrice4KillfocusFnc(CWnd *pWnd){
	((CProductPriceListDialog *)pWnd)->OnSalePrice4Killfocus();
} */
static int _OnSalePrice4CheckValueFnc(CWnd *pWnd){
	return ((CProductPriceListDialog *)pWnd)->OnSalePrice4CheckValue();
} 
static void _OnIsPaid1SelectFnc(CWnd *pWnd){
	 ((CProductPriceListDialog*)pWnd)->OnIsPaid1Select();
}
static void _OnIsPaid2SelectFnc(CWnd *pWnd){
	 ((CProductPriceListDialog*)pWnd)->OnIsPaid2Select();
}
static void _OnIsPaid3SelectFnc(CWnd *pWnd){
	 ((CProductPriceListDialog*)pWnd)->OnIsPaid3Select();
}
static void _OnIsPaid4SelectFnc(CWnd *pWnd){
	 ((CProductPriceListDialog*)pWnd)->OnIsPaid4Select();
}

static void _OnApplyPaymentLevelSelectFnc(CWnd *pWnd){
	 ((CProductPriceListDialog*)pWnd)->OnApplyPaymentLevelSelect();
}

static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductPriceListDialog *pVw = (CProductPriceListDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductPriceListDialog *pVw = (CProductPriceListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductPriceListDialogFnc(CWnd *pWnd){
	 return ((CProductPriceListDialog*)pWnd)->OnAddProductPriceListDialog();
} 
static int _OnEditProductPriceListDialogFnc(CWnd *pWnd){
	 return ((CProductPriceListDialog*)pWnd)->OnEditProductPriceListDialog();
} 
static int _OnDeleteProductPriceListDialogFnc(CWnd *pWnd){
	 return ((CProductPriceListDialog*)pWnd)->OnDeleteProductPriceListDialog();
} 
static int _OnSaveProductPriceListDialogFnc(CWnd *pWnd){
	 return ((CProductPriceListDialog*)pWnd)->OnSaveProductPriceListDialog();
} 
static int _OnCancelProductPriceListDialogFnc(CWnd *pWnd){
	 return ((CProductPriceListDialog*)pWnd)->OnCancelProductPriceListDialog();
} 
CProductPriceListDialog::CProductPriceListDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 519;
	m_nDlgHeight = 317;
	SetDefaultValues();
	
	m_szManufactureKey.Empty();
	m_szVendorKey.Empty();
	m_bIsServicePriceManager = true;
	m_nProductPriceID = 0;
}
CProductPriceListDialog::~CProductPriceListDialog(){
}
void CProductPriceListDialog::OnCreateComponents(){

	m_wndNewPrice.Create(this, _T("Update Price"), 6, 5, 446, 180);
	m_wndPurchasePriceLabel.Create(this, _T("Purchase Price"), 10, 30, 130, 55);
	m_wndPurchasePrice.Create(this,135, 30, 255, 55); 
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 260, 30, 340, 55);
	m_wndApplyDate.Create(this,345, 30, 435, 55); 
	m_wndSalePriceLabel.Create(this, _T("Sale Price1"), 10, 60, 130, 85);
	m_wndSalePrice.Create(this,135, 60, 255, 85); 
	m_wndSalePrice2Label.Create(this, _T("Sale Price2"), 10, 90, 130, 115);
	m_wndSalePrice2.Create(this,135, 90, 255, 115); 
	m_wndSalePrice3Label.Create(this, _T("Sale Price3"), 10, 120, 130, 145);
	m_wndSalePrice3.Create(this,135, 120, 255, 145); 
	m_wndSalePrice4Label.Create(this, _T("Sale Price4"), 10, 150, 130, 175);
	m_wndSalePrice4.Create(this,135, 150, 255, 175); 
	m_wndIsPaid1.Create(this, _T("IsPaid1"), 260, 60, 435, 85);
	m_wndIsPaid2.Create(this, _T("IsPaid2"), 260, 90, 435, 115);
	m_wndIsPaid3.Create(this, _T("IsPaid3"), 260, 120, 435, 145);
	m_wndIsPaid4.Create(this, _T("IsPaid4"), 260, 150, 435, 175);
	m_wndSave.Create(this, _T("&Save"), 260, 185, 350, 210);
	m_wndClose.Create(this, _T("&Close"), 355, 185, 445, 210);
	m_wndApplyPaymentLevel.Create(this, _T("\xC1p \x64\x1EE5ng m\x1EE9\x63 tr\x1EA7n \x42HYT th\x61nh to\xE1n"), 5, 185, 250, 210);

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(pMF->GetModuleID() == _T("PM") || pMF->GetModuleID() == _T("WM"))
	{
		m_wndSalePriceLabel.SetWindowText(_T("Sale Price"));
		m_wndSalePrice2Label.SetWindowText(_T("Insurance Price"));
		m_wndSalePrice3Label.SetWindowText(_T("Policy Price"));
		m_wndSalePrice4Label.SetWindowText(_T("Request Price"));
		m_wndIsPaid1.SetWindowText(_T("Insruance Payment"));
		m_wndIsPaid2.SetWindowText(_T("Policy Payment"));
		m_wndIsPaid3.SetWindowText(_T("Balance Payment"));
		m_wndIsPaid4.SetWindowText(_T("Surgery Payment"));
	}
}
void CProductPriceListDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndManufacture.SetCheckValue(true);
	//m_wndManufacture.LimitText(22);
	//m_wndVendor.SetCheckValue(true);
	//m_wndVendor.LimitText(32);
	m_wndPurchasePrice.SetLimitText(15);
	m_wndPurchasePrice.SetCheckValue(true);
	m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);
	m_wndSalePrice.SetLimitText(15);
	m_wndSalePrice.SetCheckValue(true);
	m_wndSalePrice2.SetLimitText(15);
	m_wndSalePrice2.SetCheckValue(true);
	m_wndSalePrice3.SetLimitText(15);
	m_wndSalePrice3.SetCheckValue(true);
	m_wndSalePrice4.SetLimitText(15);
	m_wndSalePrice4.SetCheckValue(true);


//	m_wndSalePrice2.SetReadOnly(TRUE);
//	m_wndSalePrice3.SetReadOnly(TRUE);
//	m_wndSalePrice4.SetReadOnly(TRUE);
	m_wndSalePrice4.ShowWindow(SW_HIDE);
	m_wndSalePrice4Label.ShowWindow(SW_HIDE);
	m_wndSalePrice3.ShowWindow(SW_HIDE);
	m_wndSalePrice3Label.ShowWindow(SW_HIDE);

	m_wndIsPaid1.ModifyStyle(WS_TABSTOP, 0);
	m_wndIsPaid2.ModifyStyle(WS_TABSTOP, 0);
	m_wndIsPaid3.ModifyStyle(WS_TABSTOP, 0);
	m_wndIsPaid4.ModifyStyle(WS_TABSTOP, 0);

//	m_wndManufacture.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
//	m_wndManufacture.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	//m_wndVendor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	//m_wndVendor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_m_product_priceTbl.SetTableName(_T("m_product_price"));
	m_m_product_priceTbl.AddField(_T("MPP_ORG_ID"), dfText, 32); 
	m_m_product_priceTbl.AddField(_T("MPP_CREATEDBY"), dfText, 32); 
	m_m_product_priceTbl.AddField(_T("MPP_UPDATEDDATE"), dfDateTime); 
	m_m_product_priceTbl.AddField(_T("MPP_UPDATEDBY"), dfText, 32); 
	m_m_product_priceTbl.AddField(_T("MPP_PRODUCT_ID"), dfLong); 
	m_m_product_priceTbl.AddField(_T("MPP_MANUFACTURE_ID"), dfLong); 
	m_m_product_priceTbl.AddField(_T("MPP_PARTNER_ID"), dfText, 32); 
	m_m_product_priceTbl.AddField(_T("MPP_UNITPRICE"), dfDouble); 
	m_m_product_priceTbl.AddField(_T("MPP_SALEPRICE1"), dfDouble); 
	m_m_product_priceTbl.AddField(_T("MPP_SALEPRICE2"), dfDouble); 
	m_m_product_priceTbl.AddField(_T("MPP_SALEPRICE3"), dfDouble); 
	m_m_product_priceTbl.AddField(_T("MPP_SALEPRICE4"), dfDouble); 
	m_m_product_priceTbl.AddField(_T("MPP_ISPAID1"), dfText, 1); 
	m_m_product_priceTbl.AddField(_T("MPP_ISPAID2"), dfText, 1); 
	m_m_product_priceTbl.AddField(_T("MPP_ISPAID3"), dfText, 1); 
	m_m_product_priceTbl.AddField(_T("MPP_ISPAID4"), dfText, 1); 
	m_m_product_priceTbl.AddField(_T("MPP_FROMDATE"), dfDate); 
	m_m_product_priceTbl.AddField(_T("MPP_INSMAX"), dfText, 1); 

}
void CProductPriceListDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndManufacture.SetEvent(WE_SELENDOK, _OnManufactureSelendokFnc);
	//m_wndManufacture.SetEvent(WE_SETFOCUS, _OnManufactureSetfocusFnc);
	//m_wndManufacture.SetEvent(WE_KILLFOCUS, _OnManufactureKillfocusFnc);
//	m_wndManufacture.SetEvent(WE_SELCHANGE, _OnManufactureSelectChangeFnc);
//	m_wndManufacture.SetEvent(WE_LOADDATA, _OnManufactureLoadDataFnc);
	//m_wndManufacture.SetEvent(WE_ADDNEW, _OnManufactureAddNewFnc);
	//m_wndVendor.SetEvent(WE_SELENDOK, _OnVendorSelendokFnc);
	////m_wndVendor.SetEvent(WE_SETFOCUS, _OnVendorSetfocusFnc);
	////m_wndVendor.SetEvent(WE_KILLFOCUS, _OnVendorKillfocusFnc);
	//m_wndVendor.SetEvent(WE_SELCHANGE, _OnVendorSelectChangeFnc);
	//m_wndVendor.SetEvent(WE_LOADDATA, _OnVendorLoadDataFnc);
	//m_wndVendor.SetEvent(WE_ADDNEW, _OnVendorAddNewFnc);
	//m_wndPurchasePrice.SetEvent(WE_CHANGE, _OnPurchasePriceChangeFnc);
	//m_wndPurchasePrice.SetEvent(WE_SETFOCUS, _OnPurchasePriceSetfocusFnc);
	//m_wndPurchasePrice.SetEvent(WE_KILLFOCUS, _OnPurchasePriceKillfocusFnc);
	m_wndPurchasePrice.SetEvent(WE_CHECKVALUE, _OnPurchasePriceCheckValueFnc);
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	//m_wndSalePrice.SetEvent(WE_CHANGE, _OnSalePriceChangeFnc);
	//m_wndSalePrice.SetEvent(WE_SETFOCUS, _OnSalePriceSetfocusFnc);
	//m_wndSalePrice.SetEvent(WE_KILLFOCUS, _OnSalePriceKillfocusFnc);
	m_wndSalePrice.SetEvent(WE_CHECKVALUE, _OnSalePriceCheckValueFnc);
	//m_wndSalePrice2.SetEvent(WE_CHANGE, _OnSalePrice2ChangeFnc);
	//m_wndSalePrice2.SetEvent(WE_SETFOCUS, _OnSalePrice2SetfocusFnc);
	//m_wndSalePrice2.SetEvent(WE_KILLFOCUS, _OnSalePrice2KillfocusFnc);
	m_wndSalePrice2.SetEvent(WE_CHECKVALUE, _OnSalePrice2CheckValueFnc);
	//m_wndSalePrice3.SetEvent(WE_CHANGE, _OnSalePrice3ChangeFnc);
	//m_wndSalePrice3.SetEvent(WE_SETFOCUS, _OnSalePrice3SetfocusFnc);
	//m_wndSalePrice3.SetEvent(WE_KILLFOCUS, _OnSalePrice3KillfocusFnc);
	m_wndSalePrice3.SetEvent(WE_CHECKVALUE, _OnSalePrice3CheckValueFnc);
	//m_wndSalePrice4.SetEvent(WE_CHANGE, _OnSalePrice4ChangeFnc);
	//m_wndSalePrice4.SetEvent(WE_SETFOCUS, _OnSalePrice4SetfocusFnc);
	//m_wndSalePrice4.SetEvent(WE_KILLFOCUS, _OnSalePrice4KillfocusFnc);
	m_wndSalePrice4.SetEvent(WE_CHECKVALUE, _OnSalePrice4CheckValueFnc);
	m_wndIsPaid1.SetEvent(WE_CLICK, _OnIsPaid1SelectFnc);
	m_wndIsPaid2.SetEvent(WE_CLICK, _OnIsPaid2SelectFnc);
	m_wndIsPaid3.SetEvent(WE_CLICK, _OnIsPaid3SelectFnc);
	m_wndIsPaid4.SetEvent(WE_CLICK, _OnIsPaid4SelectFnc);
	m_wndApplyPaymentLevel.SetEvent(WE_CLICK, _OnApplyPaymentLevelSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	
	int nMode = GetMode();
	//if(nMode == VM_EDIT || nMode == VM_VIEW)
	{
		GetDataToScreen();
	}
	if(nMode == VM_ADD)
	m_szApplyDate = pMF->GetSysDate();

	SetMode(nMode);
	

}
void CProductPriceListDialog::OnDoDataExchange(CDataExchange* pDX){
//	DDX_TextEx(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufactureKey);
	//DDX_TextEx(pDX, m_wndVendor.GetDlgCtrlID(), m_szVendorKey);
	DDX_Text(pDX, m_wndPurchasePrice.GetDlgCtrlID(), m_nPurchasePrice);
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Text(pDX, m_wndSalePrice.GetDlgCtrlID(), m_nSalePrice);
	DDX_Text(pDX, m_wndSalePrice2.GetDlgCtrlID(), m_nSalePrice2);
	DDX_Text(pDX, m_wndSalePrice3.GetDlgCtrlID(), m_nSalePrice3);
	DDX_Text(pDX, m_wndSalePrice4.GetDlgCtrlID(), m_nSalePrice4);
	DDX_Check(pDX, m_wndIsPaid1.GetDlgCtrlID(), m_bIsPaid1);
	DDX_Check(pDX, m_wndIsPaid2.GetDlgCtrlID(), m_bIsPaid2);
	DDX_Check(pDX, m_wndIsPaid3.GetDlgCtrlID(), m_bIsPaid3);
	DDX_Check(pDX, m_wndIsPaid4.GetDlgCtrlID(), m_bIsPaid4);
	DDX_Check(pDX, m_wndApplyPaymentLevel.GetDlgCtrlID(), m_bApplyPaymentLevel);
}
void CProductPriceListDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db), srs(&pMF->m_db);
	CString szSQL;
	if(m_nProductPriceID <= 0){
		szSQL.Format(_T("SELECT MP_UNITPRICE AS MPP_UNITPRICE, ") \
					_T("	MP_SALEPRICE1 AS MPP_SALEPRICE1,") \
					_T("	MP_SALEPRICE2 AS MPP_SALEPRICE2,") \
					_T("	MP_SALEPRICE3 AS MPP_SALEPRICE3,") \
					_T("	MP_SALEPRICE4 AS MPP_SALEPRICE4,") \
					_T("	MP_ISPAID1 AS MPP_ISPAID1,") \
					_T("	MP_ISPAID2 AS MPP_ISPAID2,") \
					_T("	MP_ISPAID3 AS MPP_ISPAID3,") \
					_T("	MP_ISPAID4 AS MPP_ISPAID4,") \
					_T("	MPP_FROMDATE,") \
					_T("	MP_INSMAX AS MPP_INSMAX") \
					_T(" FROM m_product ") \
					_T(" LEFT JOIN m_product_price ON (mp_product_id = mpp_product_id and mpp_isactive = 'Y')") \
					_T(" WHERE mp_product_id = %ld"), m_nProductID);
	}
	else
		szSQL.Format(_T("SELECT * FROM m_product_price WHERE mpp_product_price_id=%ld"), m_nProductPriceID);
//Notice(szSQL);
	rs.ExecSQL(szSQL);
	SetDefaultValues();
//	rs.GetValue(_T("MPP_MANUFACTURE_ID"), m_szManufactureKey);
	//rs.GetValue(_T("MPP_PARTNER_ID"), m_szVendorKey);
	rs.GetValue(_T("MPP_UNITPRICE"), m_nPurchasePrice);
	rs.GetValue(_T("MPP_SALEPRICE1"), m_nSalePrice);
	rs.GetValue(_T("MPP_SALEPRICE2"), m_nSalePrice2);
	rs.GetValue(_T("MPP_SALEPRICE3"), m_nSalePrice3);
	rs.GetValue(_T("MPP_SALEPRICE4"), m_nSalePrice4);

	m_nInsPrice = m_nSalePrice2;

	CString tmpStr;

	rs.GetValue(_T("MPP_ISPAID1"), tmpStr);
	STR2BOOL(tmpStr, m_bIsPaid1);
	rs.GetValue(_T("MPP_ISPAID2"), tmpStr);
	STR2BOOL(tmpStr, m_bIsPaid2);
	rs.GetValue(_T("MPP_ISPAID3"), tmpStr);
	STR2BOOL(tmpStr, m_bIsPaid3);
	rs.GetValue(_T("MPP_ISPAID4"), tmpStr);
	STR2BOOL(tmpStr, m_bIsPaid4);
	rs.GetValue(_T("MPP_FROMDATE"), m_szApplyDate);

	rs.GetValue(_T("MPP_INSMAX"), tmpStr);
	STR2BOOL(tmpStr, m_bApplyPaymentLevel);

}
void CProductPriceListDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	if(pMF->GetModuleID() == _T("PM"))
	{
		m_nSalePrice2 = m_nSalePrice3 = m_nSalePrice4 = m_nSalePrice;
	}
	m_m_product_priceTbl.SetValue(_T("MPP_CREATEDBY"), pMF->GetCurrentUser());
	m_m_product_priceTbl.SetValue(_T("MPP_UPDATEDBY"), pMF->GetCurrentUser());
	m_m_product_priceTbl.SetValue(_T("MPP_UPDATEDDATE"), pMF->GetSysDateTime());
	m_m_product_priceTbl.SetValue(_T("MPP_ORG_ID"), pMF->GetModuleID());

	m_m_product_priceTbl.SetValue(_T("MPP_PRODUCT_ID"), m_nProductID);
	m_m_product_priceTbl.SetValue(_T("MPP_MANUFACTURE_ID"), m_szManufactureKey);
	m_m_product_priceTbl.SetValue(_T("MPP_PARTNER_ID"), m_szVendorKey);
	m_m_product_priceTbl.SetValue(_T("MPP_UNITPRICE"), m_nPurchasePrice);
	m_m_product_priceTbl.SetValue(_T("MPP_SALEPRICE1"), m_nSalePrice);
	m_m_product_priceTbl.SetValue(_T("MPP_SALEPRICE2"), m_nSalePrice2);
	m_m_product_priceTbl.SetValue(_T("MPP_SALEPRICE3"), m_nSalePrice3);
	m_m_product_priceTbl.SetValue(_T("MPP_SALEPRICE4"), m_nSalePrice4);
	CString tmpStr;
	BOOL2STR(m_bIsPaid1, tmpStr);
	m_m_product_priceTbl.SetValue(_T("MPP_ISPAID1"), tmpStr);
	BOOL2STR(m_bIsPaid2, tmpStr);
	m_m_product_priceTbl.SetValue(_T("MPP_ISPAID2"), tmpStr);
	BOOL2STR(m_bIsPaid3, tmpStr);
	m_m_product_priceTbl.SetValue(_T("MPP_ISPAID3"), tmpStr);
	BOOL2STR(m_bIsPaid4, tmpStr);
	m_m_product_priceTbl.SetValue(_T("MPP_ISPAID4"), tmpStr);
	m_m_product_priceTbl.SetValue(_T("MPP_fromdate"), m_szApplyDate);

	BOOL2STR(m_bApplyPaymentLevel, tmpStr);
	m_m_product_priceTbl.SetValue(_T("MPP_INSMAX"), tmpStr);

}
void CProductPriceListDialog::SetDefaultValues(){

	m_nPurchasePrice=0;
	m_nSalePrice=0;
	m_nSalePrice2=0;
	m_nSalePrice3=0;
	m_nSalePrice4=0;
	m_nInsPrice = 0;
	m_bIsPaid1=TRUE;
	m_bIsPaid2=TRUE;
	m_bIsPaid3=FALSE;
	m_bIsPaid4=FALSE;
	m_bApplyPaymentLevel = FALSE;

}
int CProductPriceListDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			//SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE,  1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};

		EnableControls(FALSE);
		m_wndPurchasePrice.EnableWindow(TRUE);
		
		m_wndSalePrice2.EnableWindow(FALSE);

		if (pMF->CheckPermission(_T("10.07.2")))
		{
			m_wndSalePrice.EnableWindow(TRUE);
		}
		if(pMF->GetModuleID() == _T("MA"))
		{
			if (pMF->CheckPermission(_T("10.07.3")))
			{
				m_wndSalePrice2.EnableWindow(TRUE);
			}
			if (pMF->CheckPermission(_T("10.07.4")))
			{
				m_wndSalePrice3.EnableWindow(TRUE);
			}
			if (pMF->CheckPermission(_T("10.07.5")))
			{
				//m_wndSalePrice4.EnableWindow(TRUE);
			}
		}
		else if(pMF->GetModuleID() == _T("BB"))
		{
		//	if (pMF->CheckPermission(_T("10.07.3")))
			{
				m_wndSalePrice2.EnableWindow(TRUE);
			}
		//	if (pMF->CheckPermission(_T("10.07.4")))
			{
				m_wndSalePrice3.EnableWindow(TRUE);
			}
			if (pMF->CheckPermission(_T("10.07.5")))
			{
				//m_wndSalePrice4.EnableWindow(TRUE);
			}
			m_wndIsPaid4.ShowWindow(SW_HIDE);
			m_wndApplyPaymentLevel.ShowWindow(SW_HIDE);
			m_wndIsPaid3.ShowWindow(SW_HIDE);

		}
		else
		{
			m_wndSalePrice2.ShowWindow(SW_HIDE);
			m_wndSalePrice3.ShowWindow(SW_HIDE);
			m_wndSalePrice2Label.ShowWindow(SW_HIDE);
			m_wndSalePrice3Label.ShowWindow(SW_HIDE);
		}
		
 		UpdateData(FALSE);
 		return nOldMode;
}
void CProductPriceListDialog::OnManufactureSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductPriceListDialog::OnManufactureSelendok(){
	 
}
/*void CProductPriceListDialog::OnManufactureSetfocus(){
	
}*/
/*void CProductPriceListDialog::OnManufactureKillfocus(){
	
}*/
long CProductPriceListDialog::OnManufactureLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadManufactureList(&m_wndManufacture, m_szManufactureKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndManufacture.IsSearchKey() && !m_szManufactureKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szManufactureKey
};
	m_wndManufacture.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndManufacture.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductPriceListDialog::OnManufactureAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductPriceListDialog::OnVendorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductPriceListDialog::OnVendorSelendok(){
	 
}
/*void CProductPriceListDialog::OnVendorSetfocus(){
	
}*/
/*void CProductPriceListDialog::OnVendorKillfocus(){
	
}*/
long CProductPriceListDialog::OnVendorLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndVendor, m_szVendorKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVendor.IsSearchKey() && !m_szVendorKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szVendorKey
};
	m_wndVendor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVendor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductPriceListDialog::OnVendorAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CProductPriceListDialog::OnPurchasePriceChange(){
	
} */
/*void CProductPriceListDialog::OnPurchasePriceSetfocus(){
	
} */
/*void CProductPriceListDialog::OnPurchasePriceKillfocus(){
	
} */
int CProductPriceListDialog::OnPurchasePriceCheckValue(){
	
	if(m_nPurchasePrice <= 0)
		return -1;
	if(m_nSalePrice <= 0)
		m_nSalePrice = m_nPurchasePrice;
	if(m_nSalePrice4 <= 0)
		m_nSalePrice4 = m_nPurchasePrice;
	UpdateData(FALSE);
	return 0;
} 
/*void CProductPriceListDialog::OnApplyDateChange(){
	
} */
/*void CProductPriceListDialog::OnApplyDateSetfocus(){
	
} */
/*void CProductPriceListDialog::OnApplyDateKillfocus(){
	
} */
int CProductPriceListDialog::OnApplyDateCheckValue(){
	return 0;
} 
/*void CProductPriceListDialog::OnSalePriceChange(){
	
} */
/*void CProductPriceListDialog::OnSalePriceSetfocus(){
	
} */
/*void CProductPriceListDialog::OnSalePriceKillfocus(){
	
} */
int CProductPriceListDialog::OnSalePriceCheckValue(){
	if(m_nSalePrice < 0)
		return -1;

	return 0;
} 
/*void CProductPriceListDialog::OnSalePrice2Change(){
	
} */
/*void CProductPriceListDialog::OnSalePrice2Setfocus(){
	
} */
/*void CProductPriceListDialog::OnSalePrice2Killfocus(){
	
} */
int CProductPriceListDialog::OnSalePrice2CheckValue(){
	if(m_nSalePrice2 < 0)
		return -1;

	return 0;
} 
/*void CProductPriceListDialog::OnSalePrice3Change(){
	
} */
/*void CProductPriceListDialog::OnSalePrice3Setfocus(){
	
} */
/*void CProductPriceListDialog::OnSalePrice3Killfocus(){
	
} */
int CProductPriceListDialog::OnSalePrice3CheckValue(){
	if(m_nSalePrice3 < 0)
		return -1;

	return 0;
} 
/*void CProductPriceListDialog::OnSalePrice4Change(){
	
} */
/*void CProductPriceListDialog::OnSalePrice4Setfocus(){
	
} */
/*void CProductPriceListDialog::OnSalePrice4Killfocus(){
	
} */
int CProductPriceListDialog::OnSalePrice4CheckValue(){
	if(m_nSalePrice4 < 0)
		return -1;

	return 0;
} 

void CProductPriceListDialog::OnIsPaid1Select(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
	void CProductPriceListDialog::OnIsPaid2Select(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CProductPriceListDialog::OnIsPaid3Select(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_bIsPaid3){
		m_wndSalePrice2.EnableWindow(TRUE);
	}
	else
	{
		m_wndSalePrice2.EnableWindow(FALSE);
	}
}

void CProductPriceListDialog::OnIsPaid4Select(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}


void CProductPriceListDialog::OnApplyPaymentLevelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_wndSalePrice2.EnableWindow(m_bApplyPaymentLevel);
	m_wndSalePrice2.SetCheckValue((bool)m_bApplyPaymentLevel);
	if(!m_bApplyPaymentLevel){
		m_nSalePrice2 = 0;
	}
	else
	{
		m_wndSalePrice2.SetFocus();
		m_nSalePrice2 = m_nInsPrice;
		
	}
	UpdateData(FALSE);
	if(m_wndSalePrice2.IsWindowEnabled())
		m_wndSalePrice2.SetSel(0, m_wndSalePrice2.GetWindowTextLength());
}

void CProductPriceListDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveProductPriceListDialog();
} 
void CProductPriceListDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();

} 
int CProductPriceListDialog::OnAddProductPriceListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductPriceListDialog::OnEditProductPriceListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductPriceListDialog::OnDeleteProductPriceListDialog(){
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
 		OnCancelProductPriceListDialog();
 	}
	return 0;
}
int CProductPriceListDialog::OnSaveProductPriceListDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szSQL2;
 	if(GetMode() == VM_ADD){
 		szSQL = m_m_product_priceTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		szSQL = m_m_product_priceTbl.GetUpdateSQL(_T("mpp_createdby,mpp_createddate, mpp_product_price_id"));
 		szSQL += szWhere;
 	}
 _msg(_T("%s"), szSQL);
	
 
	 pMF->BeginTransaction();
	szSQL2.Format(_T("UPDATE m_product_price SET mpp_isactive = 'N' WHERE mpp_product_id=%ld "), m_nProductID);
	pMF->ExecSQL(szSQL2);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		if(pMF->GetModuleID() == _T("MA"))
		{
			/*szSQL.Format(_T("UPDATE m_product_item ") \
				_T("SET mpi_saleprice1=%f, mpi_saleprice2=%f, mpi_saleprice3=%f, mpi_saleprice4=%f ") \
				_T("WHERE mpi_product_id=%ld"), m_nSalePrice, m_nSalePrice2, m_nSalePrice3, m_nSalePrice4,  m_nProductID);
_msg(_T("%s"), szSQL);
			pMF->ExecSQL(szSQL);*/
		}
		pMF->Commit();	
		
		CGuiDialog::OnOK();
		((CProductPriceList*) m_pWnd)->OnListLoadData();
 	}
 	else
 	{
		pMF->Rollback();
 	}
 	return ret;
}
int CProductPriceListDialog::OnCancelProductPriceListDialog(){
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
int CProductPriceListDialog::OnProductPriceListDialogListLoadData(){
	return 0;
}
