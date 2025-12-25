#include "AdProductPriceInput.h"
#include "MainFrame_E10.h"
#include "AdProductPrice.h"
static void _OnProductSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdProductPriceInput* )pWnd)->OnProductSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductSelendokFnc(CWnd *pWnd){
	((CAdProductPriceInput *)pWnd)->OnProductSelendok();
}
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CAdProductPriceInput *)pWnd)->OnProductKillfocus();
}*/
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CAdProductPriceInput *)pWnd)->OnProductKillfocus();
}*/
static long _OnProductLoadDataFnc(CWnd *pWnd){
	return ((CAdProductPriceInput *)pWnd)->OnProductLoadData();
}
/*static void _OnProductAddNewFnc(CWnd *pWnd){
	((CAdProductPriceInput *)pWnd)->OnProductAddNew();
}*/
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CAdProductPriceInput *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CAdProductPriceInput *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CAdProductPriceInput *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CAdProductPriceInput *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnRefPriceChangeFnc(CWnd *pWnd){
	((CAdProductPriceInput *)pWnd)->OnRefPriceChange();
} */
/*static void _OnRefPriceSetfocusFnc(CWnd *pWnd){
	((CAdProductPriceInput *)pWnd)->OnRefPriceSetfocus();} */ 
/*static void _OnRefPriceKillfocusFnc(CWnd *pWnd){
	((CAdProductPriceInput *)pWnd)->OnRefPriceKillfocus();
} */
static int _OnRefPriceCheckValueFnc(CWnd *pWnd){
	return ((CAdProductPriceInput *)pWnd)->OnRefPriceCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdProductPriceInput*)pWnd)->OnActiveSelect();
}
static int _OnAddAdProductPriceInputFnc(CWnd *pWnd){
	 return ((CAdProductPriceInput*)pWnd)->OnAddAdProductPriceInput();
} 
static int _OnEditAdProductPriceInputFnc(CWnd *pWnd){
	 return ((CAdProductPriceInput*)pWnd)->OnEditAdProductPriceInput();
} 
static int _OnDeleteAdProductPriceInputFnc(CWnd *pWnd){
	 return ((CAdProductPriceInput*)pWnd)->OnDeleteAdProductPriceInput();
} 
static int _OnSaveAdProductPriceInputFnc(CWnd *pWnd){
	 return ((CAdProductPriceInput*)pWnd)->OnSaveAdProductPriceInput();
} 
static int _OnCancelAdProductPriceInputFnc(CWnd *pWnd){
	 return ((CAdProductPriceInput*)pWnd)->OnCancelAdProductPriceInput();
} 
CAdProductPriceInput::CAdProductPriceInput(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdProductPriceInput::~CAdProductPriceInput(){
}
void CAdProductPriceInput::OnCreateComponents(){
	m_wndProductLabel.Create(this, _T("Product"), 5, 5, 85, 30);
	m_wndProduct.Create(this,85, 5, 165, 30); 
	m_wndRefPriceLabel.Create(this, _T("Ref Price"), 5, 57, 85, 82);
	m_wndRefPrice.Create(this,85, 57, 165, 82); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 5, 31, 85, 56);
	m_wndUnitPrice.Create(this,85, 31, 165, 56); 
	m_wndActive.Create(this, _T("Active"), 5, 83, 85, 108);

}
void CAdProductPriceInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProduct.SetCheckValue(true);
	m_wndProduct.LimitText(32);
	m_wndUnitPrice.SetLimitText(25);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndRefPrice.SetLimitText(25);
	m_wndRefPrice.SetCheckValue(true);


	m_wndProduct.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProduct.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_ad_price_lineTbl.SetTableName(_T("ad_price_line"));
	m_ad_price_lineTbl.AddField(_T("adpl_price_line_id"), dfText, 32); 
	m_ad_price_lineTbl.AddField(_T("adpl_client_id"), dfText, 32); 
	m_ad_price_lineTbl.AddField(_T("adpl_org_id"), dfText, 32); 
	m_ad_price_lineTbl.AddField(_T("adpl_user_id"), dfText, 32); 
	m_ad_price_lineTbl.AddField(_T("adpl_createdby"), dfText, 32); 
	m_ad_price_lineTbl.AddField(_T("adpl_createddate"), dfDateTime); 
	m_ad_price_lineTbl.AddField(_T("adpl_updatedby"), dfText, 32); 
	m_ad_price_lineTbl.AddField(_T("adpl_updateddate"), dfDateTime); 
	m_ad_price_lineTbl.AddField(_T("adpl_product_id"), dfText, 32); 
	m_ad_price_lineTbl.AddField(_T("adpl_unit_price"), dfDouble); 
	m_ad_price_lineTbl.AddField(_T("adpl_ref_price"), dfDouble); 
	m_ad_price_lineTbl.AddField(_T("adpl_price_list_id"), dfText, 32); 
	m_ad_price_lineTbl.AddField(_T("adpl_isactive"), dfText, 1); 

}
void CAdProductPriceInput::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProduct.SetEvent(WE_SELENDOK, _OnProductSelendokFnc);
	//m_wndProduct.SetEvent(WE_SETFOCUS, _OnProductSetfocusFnc);
	//m_wndProduct.SetEvent(WE_KILLFOCUS, _OnProductKillfocusFnc);
	m_wndProduct.SetEvent(WE_SELCHANGE, _OnProductSelectChangeFnc);
	m_wndProduct.SetEvent(WE_LOADDATA, _OnProductLoadDataFnc);
	//m_wndProduct.SetEvent(WE_ADDNEW, _OnProductAddNewFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndRefPrice.SetEvent(WE_CHANGE, _OnRefPriceChangeFnc);
	//m_wndRefPrice.SetEvent(WE_SETFOCUS, _OnRefPriceSetfocusFnc);
	//m_wndRefPrice.SetEvent(WE_KILLFOCUS, _OnRefPriceKillfocusFnc);
	m_wndRefPrice.SetEvent(WE_CHECKVALUE, _OnRefPriceCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	SetEditCtrl(0, &m_wndProduct);
	SetEditCtrl(1, &m_wndRefPrice);
	SetEditCtrl(2, &m_wndUnitPrice);
}
void CAdProductPriceInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProduct.GetDlgCtrlID(), m_szProductKey);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndRefPrice.GetDlgCtrlID(), m_nRefPrice);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdProductPriceInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiListCtrl *pList = (CGuiListCtrl*)GetParent();
	int nIndex = GetRowIndex();
	if (m_nEditMode == VM_EDIT)
	{
		m_szProductKey = pList->GetItemText(nIndex, 0);
		m_nRefPrice = ToInt(pList->GetItemText(nIndex, 1));
		m_nUnitPrice = ToInt(pList->GetItemText(nIndex, 2));
	}
	SetMode(m_nEditMode);
}
void CAdProductPriceInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_nEditMode == VM_ADD)
	{
		CString szID;
		szID = pMF->ExecDML(_T("get_uuid()"));
		m_ad_price_lineTbl.SetValue(_T("adpl_price_line_id"), szID);
		m_ad_price_lineTbl.SetValue(_T("adpl_createdby"), pMF->GetCurrentUser());
		m_ad_price_lineTbl.SetValue(_T("adpl_createddate"), pMF->GetSysDateTime());
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE adpl_price_line_id = '%s'"), m_szID);
		m_ad_price_lineTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_price_lineTbl.SetValue(_T("adpl_updatedby"), pMF->GetCurrentUser());
	m_ad_price_lineTbl.SetValue(_T("adpl_updateddate"), pMF->GetSysDateTime());
	m_ad_price_lineTbl.SetValue(_T("adpl_price_list_id"), m_szPriceListID);
	m_ad_price_lineTbl.SetValue(_T("adpl_product_id"), m_szProductKey);
	m_ad_price_lineTbl.SetValue(_T("adpl_unit_price"), m_nUnitPrice);
	m_ad_price_lineTbl.SetValue(_T("adpl_ref_price"), m_nRefPrice);
	m_ad_price_lineTbl.SetValue(_T("adpl_isactive"), m_bActive?_T("Y"):_T("N"));

}
void CAdProductPriceInput::SetDefaultValues(){

	m_szProductKey.Empty();
	m_nUnitPrice=0;
	m_nRefPrice=0;
	m_bActive=FALSE;

}
int CAdProductPriceInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
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
void CAdProductPriceInput::OnProductSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdProductPriceInput::OnProductSelendok(){
	 
}
/*void CAdProductPriceInput::OnProductSetfocus(){
	
}*/
/*void CAdProductPriceInput::OnProductKillfocus(){
	
}*/
long CAdProductPriceInput::OnProductLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductList(&m_wndProduct, m_szProductKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProduct.IsSearchKey() && !m_szProductKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProductKey
};
	m_wndProduct.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProduct.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdProductPriceInput::OnProductAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdProductPriceInput::OnUnitPriceChange(){
	
} */
/*void CAdProductPriceInput::OnUnitPriceSetfocus(){
	
} */
/*void CAdProductPriceInput::OnUnitPriceKillfocus(){
	
} */
int CAdProductPriceInput::OnUnitPriceCheckValue(){
	return 0;
} 
/*void CAdProductPriceInput::OnRefPriceChange(){
	
} */
/*void CAdProductPriceInput::OnRefPriceSetfocus(){
	
} */
/*void CAdProductPriceInput::OnRefPriceKillfocus(){
	
} */
int CAdProductPriceInput::OnRefPriceCheckValue(){
	return 0;
} 
	void CAdProductPriceInput::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
int CAdProductPriceInput::OnAddAdProductPriceInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdProductPriceInput::OnEditAdProductPriceInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdProductPriceInput::OnDeleteAdProductPriceInput(){
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
 		OnCancelAdProductPriceInput();
 	}
	return 0;
}
int CAdProductPriceInput::OnSaveAdProductPriceInput(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_ad_price_lineTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adpl_price_line_id = '%s'"), m_szID);
 		szSQL = m_ad_price_lineTbl.GetUpdateSQL();
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		((CAdProductPrice*)GetParent()->GetParent())->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdProductPriceInput::OnCancelAdProductPriceInput(){
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
int CAdProductPriceInput::OnAdProductPriceInputListLoadData(){
	return 0;
}
int CAdProductPriceInput::OnOK(){
	return OnSaveAdProductPriceInput();
}