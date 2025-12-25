#include "ProductTenderEntryDialog.h"
#include "MainFrm.h"
static void _OnActiveIngredientIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductTenderEntryDialog* )pWnd)->OnActiveIngredientIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnActiveIngredientIDSelendokFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnActiveIngredientIDSelendok();
}
/*static void _OnActiveIngredientIDSetfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnActiveIngredientIDKillfocus();
}*/
/*static void _OnActiveIngredientIDKillfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnActiveIngredientIDKillfocus();
}*/
static long _OnActiveIngredientIDLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderEntryDialog *)pWnd)->OnActiveIngredientIDLoadData();
}
/*static void _OnActiveIngredientIDAddNewFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnActiveIngredientIDAddNew();
}*/
/*static void _OnActiveIngredientChangeFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnActiveIngredientChange();
} */
/*static void _OnActiveIngredientSetfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnActiveIngredientSetfocus();} */ 
/*static void _OnActiveIngredientKillfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnActiveIngredientKillfocus();
} */
static int _OnActiveIngredientCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderEntryDialog *)pWnd)->OnActiveIngredientCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderEntryDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnCategoryChangeFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnCategoryChange();
} */
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnCategorySetfocus();} */ 
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnCategoryKillfocus();
} */
static int _OnCategoryCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderEntryDialog *)pWnd)->OnCategoryCheckValue();
} 
/*static void _OnDosageConcentrationChangeFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnDosageConcentrationChange();
} */
/*static void _OnDosageConcentrationSetfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnDosageConcentrationSetfocus();} */ 
/*static void _OnDosageConcentrationKillfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnDosageConcentrationKillfocus();
} */
static int _OnDosageConcentrationCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderEntryDialog *)pWnd)->OnDosageConcentrationCheckValue();
} 
/*static void _OnRouteOfAdminChangeFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnRouteOfAdminChange();
} */
/*static void _OnRouteOfAdminSetfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnRouteOfAdminSetfocus();} */ 
/*static void _OnRouteOfAdminKillfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnRouteOfAdminKillfocus();
} */
static int _OnRouteOfAdminCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderEntryDialog *)pWnd)->OnRouteOfAdminCheckValue();
} 
/*static void _OnDosageFormChangeFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnDosageFormChange();
} */
/*static void _OnDosageFormSetfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnDosageFormSetfocus();} */ 
/*static void _OnDosageFormKillfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnDosageFormKillfocus();
} */
static int _OnDosageFormCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderEntryDialog *)pWnd)->OnDosageFormCheckValue();
} 
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderEntryDialog *)pWnd)->OnUomCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderEntryDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CProductTenderEntryDialog *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderEntryDialog *)pWnd)->OnUnitPriceCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductTenderEntryDialog *pVw = (CProductTenderEntryDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductTenderEntryDialog *pVw = (CProductTenderEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductTenderEntryDialogFnc(CWnd *pWnd){
	 return ((CProductTenderEntryDialog*)pWnd)->OnAddProductTenderEntryDialog();
} 
static int _OnEditProductTenderEntryDialogFnc(CWnd *pWnd){
	 return ((CProductTenderEntryDialog*)pWnd)->OnEditProductTenderEntryDialog();
} 
static int _OnDeleteProductTenderEntryDialogFnc(CWnd *pWnd){
	 return ((CProductTenderEntryDialog*)pWnd)->OnDeleteProductTenderEntryDialog();
} 
static int _OnSaveProductTenderEntryDialogFnc(CWnd *pWnd){
	 return ((CProductTenderEntryDialog*)pWnd)->OnSaveProductTenderEntryDialog();
} 
static int _OnCancelProductTenderEntryDialogFnc(CWnd *pWnd){
	 return ((CProductTenderEntryDialog*)pWnd)->OnCancelProductTenderEntryDialog();
} 
CProductTenderEntryDialog::CProductTenderEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 305;
	SetDefaultValues();
}
CProductTenderEntryDialog::~CProductTenderEntryDialog(){
}
void CProductTenderEntryDialog::OnCreateComponents(){
	m_wndProductInformation.Create(this, _T("Thông tin sản phẩm"), 5, 5, 510, 270);
	m_wndActiveIngredientIDLabel.Create(this, _T("Hoạt chất"), 10, 30, 130, 55);
	m_wndActiveIngredientID.Create(this,135, 30, 505, 55); 
	m_wndActiveIngredientLabel.Create(this, _T("Tên hoạt chất (thầu)"), 10, 60, 130, 85);
	m_wndActiveIngredient.Create(this,135, 60, 505, 85); 
	m_wndCode.Create(this,135, 90, 255, 114); 
	m_wndCodeLabel.Create(this, _T("Mã"), 10, 90, 130, 115);
	m_wndCategoryLabel.Create(this, _T("Nhóm TCKT"), 260, 90, 380, 115);
	m_wndCategory.Create(this,385, 90, 505, 115); 
	m_wndDosageConcentrationLabel.Create(this, _T("Nồng độ"), 10, 120, 130, 145);
	m_wndDosageConcentration.Create(this,135, 120, 504, 145); 
	m_wndRouteOfAdminLabel.Create(this, _T("Đường dùng"), 10, 150, 130, 175);
	m_wndRouteOfAdmin.Create(this,135, 150, 505, 175); 
	m_wndDosageFormLabel.Create(this, _T("Dạng bào chế"), 10, 180, 130, 205);
	m_wndDosageForm.Create(this,135, 180, 505, 205); 
	m_wndUomLabel.Create(this, _T("Đơn vị"), 10, 210, 130, 235);
	m_wndUom.Create(this,135, 210, 505, 235); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 10, 240, 130, 265);
	m_wndQuantity.Create(this,135, 240, 255, 265); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 260, 240, 380, 265);
	m_wndUnitPrice.Create(this,385, 240, 505, 265); 
	m_wndSave.Create(this, _T("&Lưu"), 320, 275, 410, 300);
	m_wndClose.Create(this, _T("&Đóng"), 415, 275, 510, 300);

}
void CProductTenderEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndActiveIngredientID.SetCheckValue(true);
	m_wndActiveIngredientID.LimitText(1024);
	m_wndActiveIngredient.SetLimitText(1024);
	m_wndActiveIngredient.SetCheckValue(true);
	m_wndCode.SetLimitText(1024);
	m_wndCode.SetCheckValue(true);
	m_wndCategory.SetLimitText(1024);
	m_wndCategory.SetCheckValue(true);
	m_wndDosageConcentration.SetLimitText(1024);
	m_wndDosageConcentration.SetCheckValue(true);
	m_wndRouteOfAdmin.SetLimitText(1024);
	m_wndRouteOfAdmin.SetCheckValue(true);
	m_wndDosageForm.SetLimitText(1024);
	m_wndDosageForm.SetCheckValue(true);
	m_wndUom.SetLimitText(1024);
	m_wndUom.SetCheckValue(true);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(16);
	m_wndUnitPrice.SetCheckValue(true);



}
void CProductTenderEntryDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndActiveIngredientID.SetEvent(WE_SELENDOK, _OnActiveIngredientIDSelendokFnc);
	//m_wndActiveIngredientID.SetEvent(WE_SETFOCUS, _OnActiveIngredientIDSetfocusFnc);
	//m_wndActiveIngredientID.SetEvent(WE_KILLFOCUS, _OnActiveIngredientIDKillfocusFnc);
	m_wndActiveIngredientID.SetEvent(WE_SELCHANGE, _OnActiveIngredientIDSelectChangeFnc);
	m_wndActiveIngredientID.SetEvent(WE_LOADDATA, _OnActiveIngredientIDLoadDataFnc);
	//m_wndActiveIngredientID.SetEvent(WE_ADDNEW, _OnActiveIngredientIDAddNewFnc);
	//m_wndActiveIngredient.SetEvent(WE_CHANGE, _OnActiveIngredientChangeFnc);
	//m_wndActiveIngredient.SetEvent(WE_SETFOCUS, _OnActiveIngredientSetfocusFnc);
	//m_wndActiveIngredient.SetEvent(WE_KILLFOCUS, _OnActiveIngredientKillfocusFnc);
	m_wndActiveIngredient.SetEvent(WE_CHECKVALUE, _OnActiveIngredientCheckValueFnc);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndCategory.SetEvent(WE_CHANGE, _OnCategoryChangeFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_CHECKVALUE, _OnCategoryCheckValueFnc);
	//m_wndDosageConcentration.SetEvent(WE_CHANGE, _OnDosageConcentrationChangeFnc);
	//m_wndDosageConcentration.SetEvent(WE_SETFOCUS, _OnDosageConcentrationSetfocusFnc);
	//m_wndDosageConcentration.SetEvent(WE_KILLFOCUS, _OnDosageConcentrationKillfocusFnc);
	m_wndDosageConcentration.SetEvent(WE_CHECKVALUE, _OnDosageConcentrationCheckValueFnc);
	//m_wndRouteOfAdmin.SetEvent(WE_CHANGE, _OnRouteOfAdminChangeFnc);
	//m_wndRouteOfAdmin.SetEvent(WE_SETFOCUS, _OnRouteOfAdminSetfocusFnc);
	//m_wndRouteOfAdmin.SetEvent(WE_KILLFOCUS, _OnRouteOfAdminKillfocusFnc);
	m_wndRouteOfAdmin.SetEvent(WE_CHECKVALUE, _OnRouteOfAdminCheckValueFnc);
	//m_wndDosageForm.SetEvent(WE_CHANGE, _OnDosageFormChangeFnc);
	//m_wndDosageForm.SetEvent(WE_SETFOCUS, _OnDosageFormSetfocusFnc);
	//m_wndDosageForm.SetEvent(WE_KILLFOCUS, _OnDosageFormKillfocusFnc);
	m_wndDosageForm.SetEvent(WE_CHECKVALUE, _OnDosageFormCheckValueFnc);
	//m_wndUom.SetEvent(WE_CHANGE, _OnUomChangeFnc);
	//m_wndUom.SetEvent(WE_SETFOCUS, _OnUomSetfocusFnc);
	//m_wndUom.SetEvent(WE_KILLFOCUS, _OnUomKillfocusFnc);
	m_wndUom.SetEvent(WE_CHECKVALUE, _OnUomCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CProductTenderEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndActiveIngredientID.GetDlgCtrlID(), m_szActiveIngredientIDKey);
	DDX_Text(pDX, m_wndActiveIngredient.GetDlgCtrlID(), m_szActiveIngredient);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategory);
	DDX_Text(pDX, m_wndDosageConcentration.GetDlgCtrlID(), m_szDosageConcentration);
	DDX_Text(pDX, m_wndRouteOfAdmin.GetDlgCtrlID(), m_szRouteOfAdmin);
	DDX_Text(pDX, m_wndDosageForm.GetDlgCtrlID(), m_szDosageForm);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);

}
void CProductTenderEntryDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ActiveIngredientID")] =  m_szActiveIngredientIDKey;
	m_jData[_T("ActiveIngredient")] =  m_szActiveIngredient;
	m_jData[_T("Code")] =  m_szCode;
	m_jData[_T("Category")] =  m_szCategory;
	m_jData[_T("DosageConcentration")] =  m_szDosageConcentration;
	m_jData[_T("RouteOfAdmin")] =  m_szRouteOfAdmin;
	m_jData[_T("DosageForm")] =  m_szDosageForm;
	m_jData[_T("Uom")] =  m_szUom;
	m_jData[_T("Quantity")] =  m_nQuantity;
	m_jData[_T("UnitPrice")] =  m_nUnitPrice;
	}
	else
	{
			
	m_jData[_T("ActiveIngredientID")].GetValue(m_szActiveIngredientIDKey);
	m_jData[_T("ActiveIngredient")].GetValue(m_szActiveIngredient);
	m_jData[_T("Code")].GetValue(m_szCode);
	m_jData[_T("Category")].GetValue(m_szCategory);
	m_jData[_T("DosageConcentration")].GetValue(m_szDosageConcentration);
	m_jData[_T("RouteOfAdmin")].GetValue(m_szRouteOfAdmin);
	m_jData[_T("DosageForm")].GetValue(m_szDosageForm);
	m_jData[_T("Uom")].GetValue(m_szUom);
	m_jData[_T("Quantity")].GetValue(m_nQuantity);
	m_jData[_T("UnitPrice")].GetValue(m_nUnitPrice);
	}

}
void CProductTenderEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductTenderEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CProductTenderEntryDialog::SetDefaultValues(){

	m_szActiveIngredientIDKey.Empty();
	m_szActiveIngredient.Empty();
	m_szCode.Empty();
	m_szCategory.Empty();
	m_szDosageConcentration.Empty();
	m_szRouteOfAdmin.Empty();
	m_szDosageForm.Empty();
	m_szUom.Empty();
	m_nQuantity=0;
	m_nUnitPrice=0;

}
int CProductTenderEntryDialog::SetMode(int nMode){
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
void CProductTenderEntryDialog::OnActiveIngredientIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductTenderEntryDialog::OnActiveIngredientIDSelendok(){
	 
}
/*void CProductTenderEntryDialog::OnActiveIngredientIDSetfocus(){
	
}*/
/*void CProductTenderEntryDialog::OnActiveIngredientIDKillfocus(){
	
}*/
long CProductTenderEntryDialog::OnActiveIngredientIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndActiveIngredientID.IsSearchKey() && !m_szActiveIngredientIDKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szActiveIngredientIDKey
};
	m_wndActiveIngredientID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndActiveIngredientID.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductTenderEntryDialog::OnActiveIngredientIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductTenderEntryDialog::OnActiveIngredientChange(){
	
} */
/*void CProductTenderEntryDialog::OnActiveIngredientSetfocus(){
	
} */
/*void CProductTenderEntryDialog::OnActiveIngredientKillfocus(){
	
} */
int CProductTenderEntryDialog::OnActiveIngredientCheckValue(){
	return 0;
} 
/*void CProductTenderEntryDialog::OnCodeChange(){
	
} */
/*void CProductTenderEntryDialog::OnCodeSetfocus(){
	
} */
/*void CProductTenderEntryDialog::OnCodeKillfocus(){
	
} */
int CProductTenderEntryDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CProductTenderEntryDialog::OnCategoryChange(){
	
} */
/*void CProductTenderEntryDialog::OnCategorySetfocus(){
	
} */
/*void CProductTenderEntryDialog::OnCategoryKillfocus(){
	
} */
int CProductTenderEntryDialog::OnCategoryCheckValue(){
	return 0;
} 
/*void CProductTenderEntryDialog::OnDosageConcentrationChange(){
	
} */
/*void CProductTenderEntryDialog::OnDosageConcentrationSetfocus(){
	
} */
/*void CProductTenderEntryDialog::OnDosageConcentrationKillfocus(){
	
} */
int CProductTenderEntryDialog::OnDosageConcentrationCheckValue(){
	return 0;
} 
/*void CProductTenderEntryDialog::OnRouteOfAdminChange(){
	
} */
/*void CProductTenderEntryDialog::OnRouteOfAdminSetfocus(){
	
} */
/*void CProductTenderEntryDialog::OnRouteOfAdminKillfocus(){
	
} */
int CProductTenderEntryDialog::OnRouteOfAdminCheckValue(){
	return 0;
} 
/*void CProductTenderEntryDialog::OnDosageFormChange(){
	
} */
/*void CProductTenderEntryDialog::OnDosageFormSetfocus(){
	
} */
/*void CProductTenderEntryDialog::OnDosageFormKillfocus(){
	
} */
int CProductTenderEntryDialog::OnDosageFormCheckValue(){
	return 0;
} 
/*void CProductTenderEntryDialog::OnUomChange(){
	
} */
/*void CProductTenderEntryDialog::OnUomSetfocus(){
	
} */
/*void CProductTenderEntryDialog::OnUomKillfocus(){
	
} */
int CProductTenderEntryDialog::OnUomCheckValue(){
	return 0;
} 
/*void CProductTenderEntryDialog::OnQuantityChange(){
	
} */
/*void CProductTenderEntryDialog::OnQuantitySetfocus(){
	
} */
/*void CProductTenderEntryDialog::OnQuantityKillfocus(){
	
} */
int CProductTenderEntryDialog::OnQuantityCheckValue(){
	return 0;
} 
/*void CProductTenderEntryDialog::OnUnitPriceChange(){
	
} */
/*void CProductTenderEntryDialog::OnUnitPriceSetfocus(){
	
} */
/*void CProductTenderEntryDialog::OnUnitPriceKillfocus(){
	
} */
int CProductTenderEntryDialog::OnUnitPriceCheckValue(){
	return 0;
} 
void CProductTenderEntryDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductTenderEntryDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductTenderEntryDialog::OnAddProductTenderEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductTenderEntryDialog::OnEditProductTenderEntryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductTenderEntryDialog::OnDeleteProductTenderEntryDialog(){
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
 		OnCancelProductTenderEntryDialog();
 	}
	return 0;
}
int CProductTenderEntryDialog::OnSaveProductTenderEntryDialog(){
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
 		//OnProductTenderEntryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductTenderEntryDialog::OnCancelProductTenderEntryDialog(){
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
int CProductTenderEntryDialog::OnProductTenderEntryDialogListLoadData(){
	return 0;
}
