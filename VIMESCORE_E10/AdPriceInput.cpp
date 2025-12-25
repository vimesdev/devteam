#include "AdPriceInput.h"
#include "MainFrame_E10.h"
#include "AdPrice.h"
static void _OnPriceListSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdPriceInput* )pWnd)->OnPriceListSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPriceListSelendokFnc(CWnd *pWnd){
	((CAdPriceInput *)pWnd)->OnPriceListSelendok();
}
/*static void _OnPriceListSetfocusFnc(CWnd *pWnd){
	((CAdPriceInput *)pWnd)->OnPriceListKillfocus();
}*/
/*static void _OnPriceListKillfocusFnc(CWnd *pWnd){
	((CAdPriceInput *)pWnd)->OnPriceListKillfocus();
}*/
static long _OnPriceListLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceInput *)pWnd)->OnPriceListLoadData();
}
/*static void _OnPriceListAddNewFnc(CWnd *pWnd){
	((CAdPriceInput *)pWnd)->OnPriceListAddNew();
}*/
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CAdPriceInput *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CAdPriceInput *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CAdPriceInput *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CAdPriceInput *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnRefPriceChangeFnc(CWnd *pWnd){
	((CAdPriceInput *)pWnd)->OnRefPriceChange();
} */
/*static void _OnRefPriceSetfocusFnc(CWnd *pWnd){
	((CAdPriceInput *)pWnd)->OnRefPriceSetfocus();} */ 
/*static void _OnRefPriceKillfocusFnc(CWnd *pWnd){
	((CAdPriceInput *)pWnd)->OnRefPriceKillfocus();
} */
static int _OnRefPriceCheckValueFnc(CWnd *pWnd){
	return ((CAdPriceInput *)pWnd)->OnRefPriceCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdPriceInput*)pWnd)->OnActiveSelect();
}
static int _OnAddAdPriceInputFnc(CWnd *pWnd){
	 return ((CAdPriceInput*)pWnd)->OnAddAdPriceInput();
} 
static int _OnEditAdPriceInputFnc(CWnd *pWnd){
	 return ((CAdPriceInput*)pWnd)->OnEditAdPriceInput();
} 
static int _OnDeleteAdPriceInputFnc(CWnd *pWnd){
	 return ((CAdPriceInput*)pWnd)->OnDeleteAdPriceInput();
} 
static int _OnSaveAdPriceInputFnc(CWnd *pWnd){
	 return ((CAdPriceInput*)pWnd)->OnSaveAdPriceInput();
} 
static int _OnCancelAdPriceInputFnc(CWnd *pWnd){
	 return ((CAdPriceInput*)pWnd)->OnCancelAdPriceInput();
} 
CAdPriceInput::CAdPriceInput(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdPriceInput::~CAdPriceInput(){
}
void CAdPriceInput::OnCreateComponents(){
	m_wndPriceListLabel.Create(this, _T("Price List"), 5, 4, 85, 29);
	m_wndPriceList.Create(this,90, 4, 170, 29); 
	m_wndRefPriceLabel.Create(this, _T("Ref Price"), 5, 64, 85, 89);
	m_wndRefPrice.Create(this,90, 64, 170, 89); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 5, 34, 85, 59);
	m_wndUnitPrice.Create(this,90, 34, 170, 59); 
	m_wndActive.Create(this, _T("Active"), 5, 94, 85, 119);

}
void CAdPriceInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPriceList.SetCheckValue(true);
	m_wndPriceList.LimitText(32);
	m_wndUnitPrice.SetLimitText(25);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndRefPrice.SetLimitText(25);
	m_wndRefPrice.SetCheckValue(true);


	m_wndPriceList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 0);
	m_wndPriceList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	//m_wndPriceList.SetColumnKey(1);
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

void CAdPriceInput::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPriceList.SetEvent(WE_SELENDOK, _OnPriceListSelendokFnc);
	//m_wndPriceList.SetEvent(WE_SETFOCUS, _OnPriceListSetfocusFnc);
	//m_wndPriceList.SetEvent(WE_KILLFOCUS, _OnPriceListKillfocusFnc);
	m_wndPriceList.SetEvent(WE_SELCHANGE, _OnPriceListSelectChangeFnc);
	m_wndPriceList.SetEvent(WE_LOADDATA, _OnPriceListLoadDataFnc);
	//m_wndPriceList.SetEvent(WE_ADDNEW, _OnPriceListAddNewFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndRefPrice.SetEvent(WE_CHANGE, _OnRefPriceChangeFnc);
	//m_wndRefPrice.SetEvent(WE_SETFOCUS, _OnRefPriceSetfocusFnc);
	//m_wndRefPrice.SetEvent(WE_KILLFOCUS, _OnRefPriceKillfocusFnc);
	m_wndRefPrice.SetEvent(WE_CHECKVALUE, _OnRefPriceCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	SetEditCtrl(0, &m_wndPriceList);
	SetEditCtrl(1, &m_wndRefPrice);
	SetEditCtrl(2, &m_wndUnitPrice);

}
void CAdPriceInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPriceList.GetDlgCtrlID(), m_szPriceListKey);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndRefPrice.GetDlgCtrlID(), m_nRefPrice);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdPriceInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiListCtrl *pList = (CGuiListCtrl*)GetParent();
	int nIndex = GetRowIndex();
	if (m_nEditMode == VM_EDIT)
	{
		m_szPriceListKey = pList->GetItemText(nIndex, 0);
		m_nRefPrice = ToInt(pList->GetItemText(nIndex, 1));
		m_nUnitPrice = ToInt(pList->GetItemText(nIndex, 2));
	}
	SetMode(m_nEditMode);
}

void CAdPriceInput::GetScreenToData(){
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
	m_ad_price_lineTbl.SetValue(_T("adpl_price_list_id"), m_wndPriceList.GetCurrent(0));
	m_ad_price_lineTbl.SetValue(_T("adpl_product_id"), m_szProductID);
	m_ad_price_lineTbl.SetValue(_T("adpl_unit_price"), m_nUnitPrice);
	m_ad_price_lineTbl.SetValue(_T("adpl_ref_price"), m_nRefPrice);
	m_ad_price_lineTbl.SetValue(_T("adpl_isactive"), m_bActive?_T("Y"):_T("N"));

}

void CAdPriceInput::SetDefaultValues(){

	m_szPriceListKey.Empty();
	m_nUnitPrice=0;
	m_nRefPrice=0;
	m_bActive=FALSE;

}

int CAdPriceInput::SetMode(int nMode){
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

void CAdPriceInput::OnPriceListSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdPriceInput::OnPriceListSelendok(){
	 
}
/*void CAdPriceInput::OnPriceListSetfocus(){
	
}*/
/*void CAdPriceInput::OnPriceListKillfocus(){
	
}*/
long CAdPriceInput::OnPriceListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPriceList.IsSearchKey() && !m_szPriceListKey.IsEmpty()){
		szWhere.Format(_T(" and adpl_price_list_id='%s' "), m_szPriceListKey);
	};
	m_wndPriceList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpl_price_list_id as id, adpl_name as name FROM ad_price_list WHERE 1=1 %s ORDER BY adpl_price_list_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPriceList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CAdPriceInput::OnPriceListAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdPriceInput::OnUnitPriceChange(){
	
} */
/*void CAdPriceInput::OnUnitPriceSetfocus(){
	
} */
/*void CAdPriceInput::OnUnitPriceKillfocus(){
	
} */
int CAdPriceInput::OnUnitPriceCheckValue(){
	return 0;
}
 
/*void CAdPriceInput::OnRefPriceChange(){
	
} */
/*void CAdPriceInput::OnRefPriceSetfocus(){
	
} */
/*void CAdPriceInput::OnRefPriceKillfocus(){
	
} */
int CAdPriceInput::OnRefPriceCheckValue(){
	return 0;
}
 
void CAdPriceInput::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

int CAdPriceInput::OnAddAdPriceInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdPriceInput::OnEditAdPriceInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdPriceInput::OnDeleteAdPriceInput(){
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
 		OnCancelAdPriceInput();
 	}
	return 0;
}

int CAdPriceInput::OnSaveAdPriceInput(){
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
		((CAdPrice*)GetParent()->GetParent())->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
}

int CAdPriceInput::OnCancelAdPriceInput(){
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
 
int CAdPriceInput::OnAdPriceInputListLoadData(){
	return 0;
}

int CAdPriceInput::OnOK(){
	return OnSaveAdPriceInput();
}