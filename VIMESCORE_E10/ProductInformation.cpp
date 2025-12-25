#include "ProductInformation.h"
#include "MainFrame_E10.h"
/*static void _OnProductNameChangeFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnProductNameChange();
} */
/*static void _OnProductNameSetfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnProductNameSetfocus();} */ 
/*static void _OnProductNameKillfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnProductNameKillfocus();
} */
static int _OnProductNameCheckValueFnc(CWnd *pWnd){
	return ((CProductInformation *)pWnd)->OnProductNameCheckValue();
} 
/*static void _OnProductTypeChangeFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnProductTypeChange();
} */
/*static void _OnProductTypeSetfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnProductTypeSetfocus();} */ 
/*static void _OnProductTypeKillfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnProductTypeKillfocus();
} */
static int _OnProductTypeCheckValueFnc(CWnd *pWnd){
	return ((CProductInformation *)pWnd)->OnProductTypeCheckValue();
} 
/*static void _OnProductCategoryChangeFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnProductCategoryChange();
} */
/*static void _OnProductCategorySetfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnProductCategorySetfocus();} */ 
/*static void _OnProductCategoryKillfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnProductCategoryKillfocus();
} */
static int _OnProductCategoryCheckValueFnc(CWnd *pWnd){
	return ((CProductInformation *)pWnd)->OnProductCategoryCheckValue();
} 
/*static void _OnGenericChangeFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnGenericChange();
} */
/*static void _OnGenericSetfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnGenericSetfocus();} */ 
/*static void _OnGenericKillfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnGenericKillfocus();
} */
static int _OnGenericCheckValueFnc(CWnd *pWnd){
	return ((CProductInformation *)pWnd)->OnGenericCheckValue();
} 
/*static void _OnMfgChangeFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnMfgChange();
} */
/*static void _OnMfgSetfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnMfgSetfocus();} */ 
/*static void _OnMfgKillfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnMfgKillfocus();
} */
static int _OnMfgCheckValueFnc(CWnd *pWnd){
	return ((CProductInformation *)pWnd)->OnMfgCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CProductInformation *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnSpecificationChangeFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnSpecificationChange();
} */
/*static void _OnSpecificationSetfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnSpecificationSetfocus();} */ 
/*static void _OnSpecificationKillfocusFnc(CWnd *pWnd){
	((CProductInformation *)pWnd)->OnSpecificationKillfocus();
} */
static int _OnSpecificationCheckValueFnc(CWnd *pWnd){
	return ((CProductInformation *)pWnd)->OnSpecificationCheckValue();
} 
static int _OnAddProductInformationFnc(CWnd *pWnd){
	 return ((CProductInformation*)pWnd)->OnAddProductInformation();
} 
static int _OnEditProductInformationFnc(CWnd *pWnd){
	 return ((CProductInformation*)pWnd)->OnEditProductInformation();
} 
static int _OnDeleteProductInformationFnc(CWnd *pWnd){
	 return ((CProductInformation*)pWnd)->OnDeleteProductInformation();
} 
static int _OnSaveProductInformationFnc(CWnd *pWnd){
	 return ((CProductInformation*)pWnd)->OnSaveProductInformation();
} 
static int _OnCancelProductInformationFnc(CWnd *pWnd){
	 return ((CProductInformation*)pWnd)->OnCancelProductInformation();
} 
CProductInformation::CProductInformation(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 150;
	SetDefaultValues();
}
CProductInformation::~CProductInformation(){
}
void CProductInformation::OnCreateComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProductInformation.Create(this, _T("Product Information"), 0, 0, 805, 145);
	m_wndProductNameLabel.Create(this, _T("Item Name"), 5, 25, 125, 50);
	m_wndProductName.Create(this,130, 25, 800, 50); 
	m_wndProductTypeLabel.Create(this, _T("Item Type"), 5, 55, 125, 80);
	m_wndProductType.Create(this,130, 55, 410, 80); 
	m_wndProductCategoryLabel.Create(this, _T("Item Category"), 415, 55, 535, 80);
	m_wndProductCategory.Create(this,540, 55, 800, 80); 
	if(pMF->GetModuleID() == _T("PM"))
		m_wndGenericLabel.Create(this, _T("Generic"), 5, 85, 125, 110);
	else
		m_wndGenericLabel.Create(this, _T("Producing Country"), 5, 85, 125, 110);
	m_wndGeneric.Create(this,130, 85, 410, 110); 
	m_wndMfgLabel.Create(this, _T("Mfg"), 415, 85, 535, 110);
	m_wndMfg.Create(this,540, 85, 800, 110); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 5, 115, 125, 140);
	m_wndSerialNo.Create(this,130, 115, 410, 140); 
	m_wndSpecificationLabel.Create(this, _T("Specification"), 415, 115, 535, 140);
	m_wndSpecification.Create(this,540, 115, 800, 140); 
}
void CProductInformation::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProductName.SetLimitText(35);
	m_wndProductName.SetCheckValue(true);
	m_wndProductType.SetLimitText(35);
	m_wndProductType.SetCheckValue(true);
	m_wndProductCategory.SetLimitText(35);
	m_wndProductCategory.SetCheckValue(true);
	m_wndGeneric.SetLimitText(35);
	m_wndGeneric.SetCheckValue(true);
	m_wndMfg.SetLimitText(35);
	m_wndMfg.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(35);
	m_wndSerialNo.SetCheckValue(true);
	m_wndSpecification.SetLimitText(35);
	m_wndSpecification.SetCheckValue(true);

}
void CProductInformation::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndProductName.SetEvent(WE_CHANGE, _OnProductNameChangeFnc);
	//m_wndProductName.SetEvent(WE_SETFOCUS, _OnProductNameSetfocusFnc);
	//m_wndProductName.SetEvent(WE_KILLFOCUS, _OnProductNameKillfocusFnc);
	m_wndProductName.SetEvent(WE_CHECKVALUE, _OnProductNameCheckValueFnc);
	//m_wndProductType.SetEvent(WE_CHANGE, _OnProductTypeChangeFnc);
	//m_wndProductType.SetEvent(WE_SETFOCUS, _OnProductTypeSetfocusFnc);
	//m_wndProductType.SetEvent(WE_KILLFOCUS, _OnProductTypeKillfocusFnc);
	m_wndProductType.SetEvent(WE_CHECKVALUE, _OnProductTypeCheckValueFnc);
	//m_wndProductCategory.SetEvent(WE_CHANGE, _OnProductCategoryChangeFnc);
	//m_wndProductCategory.SetEvent(WE_SETFOCUS, _OnProductCategorySetfocusFnc);
	//m_wndProductCategory.SetEvent(WE_KILLFOCUS, _OnProductCategoryKillfocusFnc);
	m_wndProductCategory.SetEvent(WE_CHECKVALUE, _OnProductCategoryCheckValueFnc);
	//m_wndGeneric.SetEvent(WE_CHANGE, _OnGenericChangeFnc);
	//m_wndGeneric.SetEvent(WE_SETFOCUS, _OnGenericSetfocusFnc);
	//m_wndGeneric.SetEvent(WE_KILLFOCUS, _OnGenericKillfocusFnc);
	m_wndGeneric.SetEvent(WE_CHECKVALUE, _OnGenericCheckValueFnc);
	//m_wndMfg.SetEvent(WE_CHANGE, _OnMfgChangeFnc);
	//m_wndMfg.SetEvent(WE_SETFOCUS, _OnMfgSetfocusFnc);
	//m_wndMfg.SetEvent(WE_KILLFOCUS, _OnMfgKillfocusFnc);
	m_wndMfg.SetEvent(WE_CHECKVALUE, _OnMfgCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndSpecification.SetEvent(WE_CHANGE, _OnSpecificationChangeFnc);
	//m_wndSpecification.SetEvent(WE_SETFOCUS, _OnSpecificationSetfocusFnc);
	//m_wndSpecification.SetEvent(WE_KILLFOCUS, _OnSpecificationKillfocusFnc);
	m_wndSpecification.SetEvent(WE_CHECKVALUE, _OnSpecificationCheckValueFnc);
	SetMode(VM_NONE);

}
void CProductInformation::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndProductName.GetDlgCtrlID(), m_szProductName);
	DDX_Text(pDX, m_wndProductType.GetDlgCtrlID(), m_szProductType);
	DDX_Text(pDX, m_wndProductCategory.GetDlgCtrlID(), m_szProductCategory);
	DDX_Text(pDX, m_wndGeneric.GetDlgCtrlID(), m_szGeneric);
	DDX_Text(pDX, m_wndMfg.GetDlgCtrlID(), m_szMfg);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndSpecification.GetDlgCtrlID(), m_szSpecification);

}
void CProductInformation::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	szSQL.Format(_T(" SELECT") \
				_T("   product_name, ") \
				_T("   Get_producttypename(product_producttype) AS product_producttype,") \
				_T("   product_category,") \
				_T("   product_classname, ") \
				_T("   product_countryname,") \
				_T("   product_manufacturename, ") \
				_T("   product_serial,") \
				_T("   product_specification ") \
				_T(" FROM   m_product_view") \
				_T(" WHERE  product_org_id='%s'") \
				_T("        AND product_id= %ld "), pMF->GetModuleID(), m_nProductID);

	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("product_name"), m_szProductName);
		m_szProductName = rs.GetValue(_T("product_name"));
		rs.GetValue(_T("product_producttype"), m_szProductType);
		rs.GetValue(_T("product_category"), m_szProductCategory);
		if(pMF->GetModuleID() == _T("PM"))
			rs.GetValue(_T("product_classname"), m_szGeneric);
		else
			rs.GetValue(_T("product_countryname"), m_szGeneric);
		rs.GetValue(_T("product_manufacturename"), m_szMfg);
		rs.GetValue(_T("product_serial"), m_szSerialNo);
		rs.GetValue(_T("product_specification"), m_szSpecification);
		SetMode(VM_VIEW);
	}

}
void CProductInformation::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CProductInformation::SetDefaultValues(){

	m_szProductName.Empty();
	m_szProductType.Empty();
	m_szProductCategory.Empty();
	m_szGeneric.Empty();
	m_szMfg.Empty();
	m_szSerialNo.Empty();
	m_szSpecification.Empty();

}
int CProductInformation::SetMode(int nMode){
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
/*void CProductInformation::OnProductNameChange(){
	
} */
/*void CProductInformation::OnProductNameSetfocus(){
	
} */
/*void CProductInformation::OnProductNameKillfocus(){
	
} */
int CProductInformation::OnProductNameCheckValue(){
	return 0;
} 
/*void CProductInformation::OnProductTypeChange(){
	
} */
/*void CProductInformation::OnProductTypeSetfocus(){
	
} */
/*void CProductInformation::OnProductTypeKillfocus(){
	
} */
int CProductInformation::OnProductTypeCheckValue(){
	return 0;
} 
/*void CProductInformation::OnProductCategoryChange(){
	
} */
/*void CProductInformation::OnProductCategorySetfocus(){
	
} */
/*void CProductInformation::OnProductCategoryKillfocus(){
	
} */
int CProductInformation::OnProductCategoryCheckValue(){
	return 0;
} 
/*void CProductInformation::OnGenericChange(){
	
} */
/*void CProductInformation::OnGenericSetfocus(){
	
} */
/*void CProductInformation::OnGenericKillfocus(){
	
} */
int CProductInformation::OnGenericCheckValue(){
	return 0;
} 
/*void CProductInformation::OnMfgChange(){
	
} */
/*void CProductInformation::OnMfgSetfocus(){
	
} */
/*void CProductInformation::OnMfgKillfocus(){
	
} */
int CProductInformation::OnMfgCheckValue(){
	return 0;
} 
/*void CProductInformation::OnSerialNoChange(){
	
} */
/*void CProductInformation::OnSerialNoSetfocus(){
	
} */
/*void CProductInformation::OnSerialNoKillfocus(){
	
} */
int CProductInformation::OnSerialNoCheckValue(){
	return 0;
} 
/*void CProductInformation::OnSpecificationChange(){
	
} */
/*void CProductInformation::OnSpecificationSetfocus(){
	
} */
/*void CProductInformation::OnSpecificationKillfocus(){
	
} */
int CProductInformation::OnSpecificationCheckValue(){
	return 0;
} 
int CProductInformation::OnAddProductInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductInformation::OnEditProductInformation(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductInformation::OnDeleteProductInformation(){
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
 		OnCancelProductInformation();
 	}
	return 0;
}
int CProductInformation::OnSaveProductInformation(){
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
 		//OnProductInformationListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductInformation::OnCancelProductInformation(){
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
int CProductInformation::OnProductInformationListLoadData(){
	return 0;
}
void CProductInformation::Refresh(long nProductID){
	m_nProductID = nProductID;
	GetDataToScreen();
}