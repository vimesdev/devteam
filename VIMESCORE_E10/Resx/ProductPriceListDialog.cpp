#include "ProductPriceListDialog.h"
#include "MainFrm.h"
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
static void _OnIsPaid3SelectFnc(CWnd *pWnd){
	 ((CProductPriceListDialog*)pWnd)->OnIsPaid3Select();
}
static void _OnIsPaid1SelectFnc(CWnd *pWnd){
	 ((CProductPriceListDialog*)pWnd)->OnIsPaid1Select();
}
static void _OnIsPaid2SelectFnc(CWnd *pWnd){
	 ((CProductPriceListDialog*)pWnd)->OnIsPaid2Select();
}
static void _OnIsPaid4SelectFnc(CWnd *pWnd){
	 ((CProductPriceListDialog*)pWnd)->OnIsPaid4Select();
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
CProductPriceListDialog::CProductPriceListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 455;
	m_nDlgHeight = 215;
	SetDefaultValues();
}
CProductPriceListDialog::~CProductPriceListDialog(){
}
void CProductPriceListDialog::OnCreateComponents(){
	m_wndNewPrice.Create(this, _T("New Price"), 6, 5, 446, 180);
	m_wndPurchasePriceLabel.Create(this, _T("Purchase Price"), 10, 30, 130, 55);
	m_wndPurchasePrice.Create(this,135, 30, 255, 55); 
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 260, 30, 340, 55);
	m_wndApplyDate.Create(this,345, 30, 435, 55); 
	m_wndSalePriceLabel.Create(this, _T("Sale Price"), 10, 60, 130, 85);
	m_wndSalePrice.Create(this,135, 60, 255, 85); 
	m_wndSalePrice2Label.Create(this, _T("Sale Price2"), 10, 90, 130, 115);
	m_wndSalePrice2.Create(this,135, 90, 255, 115); 
	m_wndSalePrice3Label.Create(this, _T("Sale Price3"), 10, 120, 130, 145);
	m_wndSalePrice3.Create(this,135, 120, 255, 145); 
	m_wndSalePrice4Label.Create(this, _T("Sale Price4"), 10, 150, 130, 175);
	m_wndSalePrice4.Create(this,135, 150, 255, 175); 
	m_wndIsPaid3.Create(this, _T("IsPaid3"), 260, 60, 435, 85);
	m_wndIsPaid1.Create(this, _T("IsPaid1"), 260, 90, 435, 115);
	m_wndIsPaid2.Create(this, _T("IsPaid2"), 260, 120, 435, 145);
	m_wndIsPaid4.Create(this, _T("IsPaid4"), 260, 150, 435, 175);
	m_wndSave.Create(this, _T("&Save"), 260, 185, 350, 210);
	m_wndClose.Create(this, _T("&Close"), 355, 185, 445, 210);

}
void CProductPriceListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPurchasePrice.SetLimitText(22);
	m_wndPurchasePrice.SetCheckValue(true);
	m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);
	m_wndSalePrice.SetLimitText(22);
	m_wndSalePrice.SetCheckValue(true);
	m_wndSalePrice2.SetLimitText(22);
	m_wndSalePrice2.SetCheckValue(true);
	m_wndSalePrice3.SetLimitText(22);
	m_wndSalePrice3.SetCheckValue(true);
	m_wndSalePrice4.SetLimitText(22);
	m_wndSalePrice4.SetCheckValue(true);
	m_m_product_priceTbl.SetTableName(_T("m_product_price"));
	m_m_product_priceTbl.AddField(_T("MPP_PRODUCT_PRICE_ID"), dfLong); 
	m_m_product_priceTbl.AddField(_T("MPP_CLIENT_ID"), dfText, 32); 
	m_m_product_priceTbl.AddField(_T("MPP_ORG_ID"), dfText, 32); 
	m_m_product_priceTbl.AddField(_T("MPP_ISACTIVE"), dfText, 1); 
	m_m_product_priceTbl.AddField(_T("MPP_CREATEDDATE"), dfDateTime); 
	m_m_product_priceTbl.AddField(_T("MPP_CREATEDBY"), dfText, 32); 
	m_m_product_priceTbl.AddField(_T("MPP_UPDATEDDATE"), dfDateTime); 
	m_m_product_priceTbl.AddField(_T("MPP_UPDATEDBY"), dfText, 32); 
	m_m_product_priceTbl.AddField(_T("MPP_PRODUCT_ID"), dfLong); 
	m_m_product_priceTbl.AddField(_T("MPP_MANUFACTURE_ID"), dfLong); 
	m_m_product_priceTbl.AddField(_T("MPP_PARTNER_ID"), dfText, 32); 
	m_m_product_priceTbl.AddField(_T("MPP_UNITPRICE"), dfLong); 
	m_m_product_priceTbl.AddField(_T("MPP_SALEPRICE1"), dfLong); 
	m_m_product_priceTbl.AddField(_T("MPP_SALEPRICE2"), dfLong); 
	m_m_product_priceTbl.AddField(_T("MPP_SALEPRICE3"), dfLong); 
	m_m_product_priceTbl.AddField(_T("MPP_SALEPRICE4"), dfLong); 
	m_m_product_priceTbl.AddField(_T("MPP_ISPAID1"), dfText, 1); 
	m_m_product_priceTbl.AddField(_T("MPP_ISPAID2"), dfText, 1); 
	m_m_product_priceTbl.AddField(_T("MPP_ISPAID3"), dfText, 1); 
	m_m_product_priceTbl.AddField(_T("MPP_ISPAID4"), dfText, 1); 

}
void CProductPriceListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndIsPaid3.SetEvent(WE_CLICK, _OnIsPaid3SelectFnc);
	m_wndIsPaid1.SetEvent(WE_CLICK, _OnIsPaid1SelectFnc);
	m_wndIsPaid2.SetEvent(WE_CLICK, _OnIsPaid2SelectFnc);
	m_wndIsPaid4.SetEvent(WE_CLICK, _OnIsPaid4SelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CProductPriceListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPurchasePrice.GetDlgCtrlID(), m_nPurchasePrice);
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Text(pDX, m_wndSalePrice.GetDlgCtrlID(), m_nSalePrice);
	DDX_Text(pDX, m_wndSalePrice2.GetDlgCtrlID(), m_nSalePrice2);
	DDX_Text(pDX, m_wndSalePrice3.GetDlgCtrlID(), m_nSalePrice3);
	DDX_Text(pDX, m_wndSalePrice4.GetDlgCtrlID(), m_nSalePrice4);
	DDX_Check(pDX, m_wndIsPaid3.GetDlgCtrlID(), m_bIsPaid3);
	DDX_Check(pDX, m_wndIsPaid1.GetDlgCtrlID(), m_bIsPaid1);
	DDX_Check(pDX, m_wndIsPaid2.GetDlgCtrlID(), m_bIsPaid2);
	DDX_Check(pDX, m_wndIsPaid4.GetDlgCtrlID(), m_bIsPaid4);

}
void CProductPriceListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("MPP_UNITPRICE"), m_nPurchasePrice);
	rs.GetValue(_T("MPP_SALEPRICE1"), m_nSalePrice);
	rs.GetValue(_T("MPP_SALEPRICE2"), m_nSalePrice2);
	rs.GetValue(_T("MPP_SALEPRICE3"), m_nSalePrice3);
	rs.GetValue(_T("MPP_SALEPRICE4"), m_nSalePrice4);
	rs.GetValue(_T("MPP_ISPAID1"), m_bIsPaid1);
	rs.GetValue(_T("MPP_ISPAID2"), m_bIsPaid2);
	rs.GetValue(_T("MPP_ISPAID3"), m_bIsPaid3);
	rs.GetValue(_T("MPP_ISPAID4"), m_bIsPaid4);

}
void CProductPriceListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_m_product_priceTbl.SetValue(_T("MPP_UNITPRICE"), m_nPurchasePrice);
	m_m_product_priceTbl.SetValue(_T("MPP_SALEPRICE1"), m_nSalePrice);
	m_m_product_priceTbl.SetValue(_T("MPP_SALEPRICE2"), m_nSalePrice2);
	m_m_product_priceTbl.SetValue(_T("MPP_SALEPRICE3"), m_nSalePrice3);
	m_m_product_priceTbl.SetValue(_T("MPP_SALEPRICE4"), m_nSalePrice4);
	m_m_product_priceTbl.SetValue(_T("MPP_ISPAID1"), m_bIsPaid1);
	m_m_product_priceTbl.SetValue(_T("MPP_ISPAID2"), m_bIsPaid2);
	m_m_product_priceTbl.SetValue(_T("MPP_ISPAID3"), m_bIsPaid3);
	m_m_product_priceTbl.SetValue(_T("MPP_ISPAID4"), m_bIsPaid4);

}
void CProductPriceListDialog::SetDefaultValues(){

	m_nPurchasePrice=0;
	m_szApplyDate.Empty();
	m_nSalePrice=0;
	m_nSalePrice2=0;
	m_nSalePrice3=0;
	m_nSalePrice4=0;
	m_bIsPaid3=FALSE;
	m_bIsPaid1=FALSE;
	m_bIsPaid2=FALSE;
	m_bIsPaid4=FALSE;

}
int CProductPriceListDialog::SetMode(int nMode){
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
/*void CProductPriceListDialog::OnPurchasePriceChange(){
	
} */
/*void CProductPriceListDialog::OnPurchasePriceSetfocus(){
	
} */
/*void CProductPriceListDialog::OnPurchasePriceKillfocus(){
	
} */
int CProductPriceListDialog::OnPurchasePriceCheckValue(){
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
	return 0;
} 
/*void CProductPriceListDialog::OnSalePrice2Change(){
	
} */
/*void CProductPriceListDialog::OnSalePrice2Setfocus(){
	
} */
/*void CProductPriceListDialog::OnSalePrice2Killfocus(){
	
} */
int CProductPriceListDialog::OnSalePrice2CheckValue(){
	return 0;
} 
/*void CProductPriceListDialog::OnSalePrice3Change(){
	
} */
/*void CProductPriceListDialog::OnSalePrice3Setfocus(){
	
} */
/*void CProductPriceListDialog::OnSalePrice3Killfocus(){
	
} */
int CProductPriceListDialog::OnSalePrice3CheckValue(){
	return 0;
} 
/*void CProductPriceListDialog::OnSalePrice4Change(){
	
} */
/*void CProductPriceListDialog::OnSalePrice4Setfocus(){
	
} */
/*void CProductPriceListDialog::OnSalePrice4Killfocus(){
	
} */
int CProductPriceListDialog::OnSalePrice4CheckValue(){
	return 0;
} 
	void CProductPriceListDialog::OnIsPaid3Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CProductPriceListDialog::OnIsPaid1Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CProductPriceListDialog::OnIsPaid2Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CProductPriceListDialog::OnIsPaid4Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CProductPriceListDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductPriceListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductPriceListDialog::OnAddProductPriceListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductPriceListDialog::OnEditProductPriceListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductPriceListDialog::OnDeleteProductPriceListDialog(){
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
 		OnCancelProductPriceListDialog();
 	}
	return 0;
}
int CProductPriceListDialog::OnSaveProductPriceListDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_m_product_priceTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_m_product_priceTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnProductPriceListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
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
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CProductPriceListDialog::OnProductPriceListDialogListLoadData(){
	return 0;
}
