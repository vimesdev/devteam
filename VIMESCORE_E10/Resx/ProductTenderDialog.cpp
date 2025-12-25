#include "ProductTenderDialog.h"
#include "MainFrm.h"
static void _OnActiveIngredientIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductTenderDialog* )pWnd)->OnActiveIngredientIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnActiveIngredientIDSelendokFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientIDSelendok();
}
/*static void _OnActiveIngredientIDSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientIDKillfocus();
}*/
/*static void _OnActiveIngredientIDKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientIDKillfocus();
}*/
static long _OnActiveIngredientIDLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderDialog *)pWnd)->OnActiveIngredientIDLoadData();
}
/*static void _OnActiveIngredientIDAddNewFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientIDAddNew();
}*/
/*static void _OnActiveIngredientChangeFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientChange();
} */
/*static void _OnActiveIngredientSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientSetfocus();} */ 
/*static void _OnActiveIngredientKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientKillfocus();
} */
static int _OnActiveIngredientCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderDialog *)pWnd)->OnActiveIngredientCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderDialog *)pWnd)->OnCodeCheckValue();
} 
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductTenderDialog* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderDialog *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnCategoryAddNew();
}*/
/*static void _OnDosageConcentrationChangeFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnDosageConcentrationChange();
} */
/*static void _OnDosageConcentrationSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnDosageConcentrationSetfocus();} */ 
/*static void _OnDosageConcentrationKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnDosageConcentrationKillfocus();
} */
static int _OnDosageConcentrationCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderDialog *)pWnd)->OnDosageConcentrationCheckValue();
} 
static void _OnRouteOfAdminSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductTenderDialog* )pWnd)->OnRouteOfAdminSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRouteOfAdminSelendokFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnRouteOfAdminSelendok();
}
/*static void _OnRouteOfAdminSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnRouteOfAdminKillfocus();
}*/
/*static void _OnRouteOfAdminKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnRouteOfAdminKillfocus();
}*/
static long _OnRouteOfAdminLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderDialog *)pWnd)->OnRouteOfAdminLoadData();
}
/*static void _OnRouteOfAdminAddNewFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnRouteOfAdminAddNew();
}*/
/*static void _OnDosageFormChangeFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnDosageFormChange();
} */
/*static void _OnDosageFormSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnDosageFormSetfocus();} */ 
/*static void _OnDosageFormKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnDosageFormKillfocus();
} */
static int _OnDosageFormCheckValueFnc(CWnd *pWnd){
	return ((CProductTenderDialog *)pWnd)->OnDosageFormCheckValue();
} 
static void _OnUomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductTenderDialog* )pWnd)->OnUomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUomSelendokFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnUomSelendok();
}
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnUomKillfocus();
}*/
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnUomKillfocus();
}*/
static long _OnUomLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderDialog *)pWnd)->OnUomLoadData();
}
/*static void _OnUomAddNewFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnUomAddNew();
}*/
static void _OnProductIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductTenderDialog* )pWnd)->OnProductIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductIDSelendokFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnProductIDSelendok();
}
/*static void _OnProductIDSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnProductIDKillfocus();
}*/
/*static void _OnProductIDKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnProductIDKillfocus();
}*/
static long _OnProductIDLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderDialog *)pWnd)->OnProductIDLoadData();
}
/*static void _OnProductIDAddNewFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnProductIDAddNew();
}*/
static void _OnIsActiveSelectFnc(CWnd *pWnd){
	 ((CProductTenderDialog*)pWnd)->OnIsActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductTenderDialog *pVw = (CProductTenderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductTenderDialog *pVw = (CProductTenderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductTenderDialogFnc(CWnd *pWnd){
	 return ((CProductTenderDialog*)pWnd)->OnAddProductTenderDialog();
} 
static int _OnEditProductTenderDialogFnc(CWnd *pWnd){
	 return ((CProductTenderDialog*)pWnd)->OnEditProductTenderDialog();
} 
static int _OnDeleteProductTenderDialogFnc(CWnd *pWnd){
	 return ((CProductTenderDialog*)pWnd)->OnDeleteProductTenderDialog();
} 
static int _OnSaveProductTenderDialogFnc(CWnd *pWnd){
	 return ((CProductTenderDialog*)pWnd)->OnSaveProductTenderDialog();
} 
static int _OnCancelProductTenderDialogFnc(CWnd *pWnd){
	 return ((CProductTenderDialog*)pWnd)->OnCancelProductTenderDialog();
} 
CProductTenderDialog::CProductTenderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 515;
	m_nDlgHeight = 305;
	SetDefaultValues();
}
CProductTenderDialog::~CProductTenderDialog(){
}
void CProductTenderDialog::OnCreateComponents(){
	m_wndActiveIngredientIDLabel.Create(this, _T("Active Ingredient ID"), 10, 30, 130, 55);
	m_wndActiveIngredientID.Create(this,135, 30, 505, 55); 
	m_wndActiveIngredientLabel.Create(this, _T("Active Ingredient"), 10, 60, 130, 85);
	m_wndActiveIngredient.Create(this,135, 60, 505, 85); 
	m_wndCode.Create(this,135, 90, 255, 114); 
	m_wndCodeLabel.Create(this, _T("Code"), 10, 90, 130, 115);
	m_wndProductInformation.Create(this, _T("Item Information"), 5, 5, 510, 270);
	m_wndCategoryLabel.Create(this, _T("Category"), 260, 90, 380, 115);
	m_wndCategory.Create(this,385, 90, 505, 115); 
	m_wndDosageConcentrationLabel.Create(this, _T("Dosage Concentration"), 10, 120, 130, 145);
	m_wndDosageConcentration.Create(this,135, 120, 504, 145); 
	m_wndRouteOfAdminLabel.Create(this, _T("Route Of Admin"), 10, 150, 130, 175);
	m_wndRouteOfAdmin.Create(this,135, 150, 505, 175); 
	m_wndDosageFormLabel.Create(this, _T("Dosage Form"), 10, 180, 130, 205);
	m_wndDosageForm.Create(this,135, 180, 505, 205); 
	m_wndUomLabel.Create(this, _T("Uom"), 10, 210, 130, 235);
	m_wndUom.Create(this,135, 210, 505, 235); 
	m_wndProductIDLabel.Create(this, _T("Product ID"), 10, 240, 130, 265);
	m_wndProductID.Create(this,135, 240, 505, 265); 
	m_wndIsActive.Create(this, _T("Is Active"), 10, 275, 130, 300);
	m_wndSave.Create(this, _T("&Save"), 320, 275, 410, 300);
	m_wndClose.Create(this, _T("&Close"), 415, 275, 510, 300);

}
void CProductTenderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndActiveIngredientID.SetCheckValue(true);
	m_wndActiveIngredientID.LimitText(1024);
	m_wndActiveIngredient.SetLimitText(1024);
	m_wndActiveIngredient.SetCheckValue(true);
	m_wndCode.SetLimitText(1024);
	m_wndCode.SetCheckValue(true);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(1024);
	m_wndDosageConcentration.SetLimitText(1024);
	m_wndDosageConcentration.SetCheckValue(true);
	m_wndRouteOfAdmin.SetCheckValue(true);
	m_wndRouteOfAdmin.LimitText(1024);
	m_wndDosageForm.SetLimitText(1024);
	m_wndDosageForm.SetCheckValue(true);
	m_wndUom.SetCheckValue(true);
	m_wndUom.LimitText(1024);
	m_wndProductID.SetCheckValue(true);
	m_wndProductID.LimitText(1024);











}
void CProductTenderDialog::OnSetWindowEvents(){
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
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	//m_wndDosageConcentration.SetEvent(WE_CHANGE, _OnDosageConcentrationChangeFnc);
	//m_wndDosageConcentration.SetEvent(WE_SETFOCUS, _OnDosageConcentrationSetfocusFnc);
	//m_wndDosageConcentration.SetEvent(WE_KILLFOCUS, _OnDosageConcentrationKillfocusFnc);
	m_wndDosageConcentration.SetEvent(WE_CHECKVALUE, _OnDosageConcentrationCheckValueFnc);
	m_wndRouteOfAdmin.SetEvent(WE_SELENDOK, _OnRouteOfAdminSelendokFnc);
	//m_wndRouteOfAdmin.SetEvent(WE_SETFOCUS, _OnRouteOfAdminSetfocusFnc);
	//m_wndRouteOfAdmin.SetEvent(WE_KILLFOCUS, _OnRouteOfAdminKillfocusFnc);
	m_wndRouteOfAdmin.SetEvent(WE_SELCHANGE, _OnRouteOfAdminSelectChangeFnc);
	m_wndRouteOfAdmin.SetEvent(WE_LOADDATA, _OnRouteOfAdminLoadDataFnc);
	//m_wndRouteOfAdmin.SetEvent(WE_ADDNEW, _OnRouteOfAdminAddNewFnc);
	//m_wndDosageForm.SetEvent(WE_CHANGE, _OnDosageFormChangeFnc);
	//m_wndDosageForm.SetEvent(WE_SETFOCUS, _OnDosageFormSetfocusFnc);
	//m_wndDosageForm.SetEvent(WE_KILLFOCUS, _OnDosageFormKillfocusFnc);
	m_wndDosageForm.SetEvent(WE_CHECKVALUE, _OnDosageFormCheckValueFnc);
	m_wndUom.SetEvent(WE_SELENDOK, _OnUomSelendokFnc);
	//m_wndUom.SetEvent(WE_SETFOCUS, _OnUomSetfocusFnc);
	//m_wndUom.SetEvent(WE_KILLFOCUS, _OnUomKillfocusFnc);
	m_wndUom.SetEvent(WE_SELCHANGE, _OnUomSelectChangeFnc);
	m_wndUom.SetEvent(WE_LOADDATA, _OnUomLoadDataFnc);
	//m_wndUom.SetEvent(WE_ADDNEW, _OnUomAddNewFnc);
	m_wndProductID.SetEvent(WE_SELENDOK, _OnProductIDSelendokFnc);
	//m_wndProductID.SetEvent(WE_SETFOCUS, _OnProductIDSetfocusFnc);
	//m_wndProductID.SetEvent(WE_KILLFOCUS, _OnProductIDKillfocusFnc);
	m_wndProductID.SetEvent(WE_SELCHANGE, _OnProductIDSelectChangeFnc);
	m_wndProductID.SetEvent(WE_LOADDATA, _OnProductIDLoadDataFnc);
	//m_wndProductID.SetEvent(WE_ADDNEW, _OnProductIDAddNewFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CProductTenderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndActiveIngredientID.GetDlgCtrlID(), m_szActiveIngredientIDKey);
	DDX_Text(pDX, m_wndActiveIngredient.GetDlgCtrlID(), m_szActiveIngredient);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_Text(pDX, m_wndDosageConcentration.GetDlgCtrlID(), m_szDosageConcentration);
	DDX_TextEx(pDX, m_wndRouteOfAdmin.GetDlgCtrlID(), m_szRouteOfAdminKey);
	DDX_Text(pDX, m_wndDosageForm.GetDlgCtrlID(), m_szDosageForm);
	DDX_TextEx(pDX, m_wndUom.GetDlgCtrlID(), m_szUomKey);
	DDX_TextEx(pDX, m_wndProductID.GetDlgCtrlID(), m_szProductIDKey);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);

}
void CProductTenderDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ActiveIngredientID")] =  m_szActiveIngredientIDKey;
	m_jData[_T("ActiveIngredient")] =  m_szActiveIngredient;
	m_jData[_T("Code")] =  m_szCode;
	m_jData[_T("Category")] =  m_szCategoryKey;
	m_jData[_T("DosageConcentration")] =  m_szDosageConcentration;
	m_jData[_T("RouteOfAdmin")] =  m_szRouteOfAdminKey;
	m_jData[_T("DosageForm")] =  m_szDosageForm;
	m_jData[_T("Uom")] =  m_szUomKey;
	m_jData[_T("ProductID")] =  m_szProductIDKey;
	m_jData[_T("IsActive")] =  m_bIsActive;
	}
	else
	{
			
	m_jData[_T("ActiveIngredientID")].GetValue(m_szActiveIngredientIDKey);
	m_jData[_T("ActiveIngredient")].GetValue(m_szActiveIngredient);
	m_jData[_T("Code")].GetValue(m_szCode);
	m_jData[_T("Category")].GetValue(m_szCategoryKey);
	m_jData[_T("DosageConcentration")].GetValue(m_szDosageConcentration);
	m_jData[_T("RouteOfAdmin")].GetValue(m_szRouteOfAdminKey);
	m_jData[_T("DosageForm")].GetValue(m_szDosageForm);
	m_jData[_T("Uom")].GetValue(m_szUomKey);
	m_jData[_T("ProductID")].GetValue(m_szProductIDKey);
	m_jData[_T("IsActive")].GetValue(m_bIsActive);
	}

}
void CProductTenderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductTenderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CProductTenderDialog::SetDefaultValues(){

	m_szActiveIngredientIDKey.Empty();
	m_szActiveIngredient.Empty();
	m_szCode.Empty();
	m_szCategoryKey.Empty();
	m_szDosageConcentration.Empty();
	m_szRouteOfAdminKey.Empty();
	m_szDosageForm.Empty();
	m_szUomKey.Empty();
	m_szProductIDKey.Empty();
	m_bIsActive=FALSE;

}
int CProductTenderDialog::SetMode(int nMode){
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
void CProductTenderDialog::OnActiveIngredientIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductTenderDialog::OnActiveIngredientIDSelendok(){
	 
}
/*void CProductTenderDialog::OnActiveIngredientIDSetfocus(){
	
}*/
/*void CProductTenderDialog::OnActiveIngredientIDKillfocus(){
	
}*/
long CProductTenderDialog::OnActiveIngredientIDLoadData(){
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
/*void CProductTenderDialog::OnActiveIngredientIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductTenderDialog::OnActiveIngredientChange(){
	
} */
/*void CProductTenderDialog::OnActiveIngredientSetfocus(){
	
} */
/*void CProductTenderDialog::OnActiveIngredientKillfocus(){
	
} */
int CProductTenderDialog::OnActiveIngredientCheckValue(){
	return 0;
} 
/*void CProductTenderDialog::OnCodeChange(){
	
} */
/*void CProductTenderDialog::OnCodeSetfocus(){
	
} */
/*void CProductTenderDialog::OnCodeKillfocus(){
	
} */
int CProductTenderDialog::OnCodeCheckValue(){
	return 0;
} 
void CProductTenderDialog::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductTenderDialog::OnCategorySelendok(){
	 
}
/*void CProductTenderDialog::OnCategorySetfocus(){
	
}*/
/*void CProductTenderDialog::OnCategoryKillfocus(){
	
}*/
long CProductTenderDialog::OnCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCategoryKey
};
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductTenderDialog::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductTenderDialog::OnDosageConcentrationChange(){
	
} */
/*void CProductTenderDialog::OnDosageConcentrationSetfocus(){
	
} */
/*void CProductTenderDialog::OnDosageConcentrationKillfocus(){
	
} */
int CProductTenderDialog::OnDosageConcentrationCheckValue(){
	return 0;
} 
void CProductTenderDialog::OnRouteOfAdminSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductTenderDialog::OnRouteOfAdminSelendok(){
	 
}
/*void CProductTenderDialog::OnRouteOfAdminSetfocus(){
	
}*/
/*void CProductTenderDialog::OnRouteOfAdminKillfocus(){
	
}*/
long CProductTenderDialog::OnRouteOfAdminLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRouteOfAdmin.IsSearchKey() && !m_szRouteOfAdminKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRouteOfAdminKey
};
	m_wndRouteOfAdmin.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRouteOfAdmin.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductTenderDialog::OnRouteOfAdminAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductTenderDialog::OnDosageFormChange(){
	
} */
/*void CProductTenderDialog::OnDosageFormSetfocus(){
	
} */
/*void CProductTenderDialog::OnDosageFormKillfocus(){
	
} */
int CProductTenderDialog::OnDosageFormCheckValue(){
	return 0;
} 
void CProductTenderDialog::OnUomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductTenderDialog::OnUomSelendok(){
	 
}
/*void CProductTenderDialog::OnUomSetfocus(){
	
}*/
/*void CProductTenderDialog::OnUomKillfocus(){
	
}*/
long CProductTenderDialog::OnUomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUom.IsSearchKey() && !m_szUomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUomKey
};
	m_wndUom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUom.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductTenderDialog::OnUomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CProductTenderDialog::OnProductIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductTenderDialog::OnProductIDSelendok(){
	 
}
/*void CProductTenderDialog::OnProductIDSetfocus(){
	
}*/
/*void CProductTenderDialog::OnProductIDKillfocus(){
	
}*/
long CProductTenderDialog::OnProductIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProductID.IsSearchKey() && !m_szProductIDKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProductIDKey
};
	m_wndProductID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProductID.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductTenderDialog::OnProductIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CProductTenderDialog::OnIsActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CProductTenderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductTenderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductTenderDialog::OnAddProductTenderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductTenderDialog::OnEditProductTenderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductTenderDialog::OnDeleteProductTenderDialog(){
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
 		OnCancelProductTenderDialog();
 	}
	return 0;
}
int CProductTenderDialog::OnSaveProductTenderDialog(){
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
 		//OnProductTenderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductTenderDialog::OnCancelProductTenderDialog(){
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
int CProductTenderDialog::OnProductTenderDialogListLoadData(){
	return 0;
}
