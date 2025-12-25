#include "AdProductPrice.h"
#include "MainFrame_E10.h"
#include "AdPriceList.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdProductPrice*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdProductPrice*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdProductPrice*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdProductPrice*)pWnd)->OnListDeleteItem();
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdProductPrice*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdProductPrice*)pWnd)->OnListEditItem();
}
static int _OnAddAdProductPriceFnc(CWnd *pWnd){
	 return ((CAdProductPrice*)pWnd)->OnAddAdProductPrice();
} 
static int _OnEditAdProductPriceFnc(CWnd *pWnd){
	 return ((CAdProductPrice*)pWnd)->OnEditAdProductPrice();
} 
static int _OnDeleteAdProductPriceFnc(CWnd *pWnd){
	 return ((CAdProductPrice*)pWnd)->OnDeleteAdProductPrice();
} 
static int _OnSaveAdProductPriceFnc(CWnd *pWnd){
	 return ((CAdProductPrice*)pWnd)->OnSaveAdProductPrice();
} 
static int _OnCancelAdProductPriceFnc(CWnd *pWnd){
	 return ((CAdProductPrice*)pWnd)->OnCancelAdProductPrice();
} 
CAdProductPrice::CAdProductPrice(){

	m_nDlgWidth = 790;
	m_nDlgHeight = 265;
	m_bInit = false;
	SetDefaultValues();
}
CAdProductPrice::~CAdProductPrice(){
}
void CAdProductPrice::OnCreateComponents(){
	m_wndProductPrice.Create(this, _T("Product Price"), 0, 0, 785, 260);
	m_wndList.Create(this,5, 24, 785, 259); 

}
void CAdProductPrice::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndList.InsertColumn(0, _T("Product"), 256, 250);
	m_wndList.InsertColumn(1, _T("Ref Price"), 256, 100);
	m_wndList.InsertColumn(2, _T("Unit Price"), 256, 100);
	m_wndList.InsertColumn(3, _T("ID"), 256, 0);

}
void CAdProductPrice::OnSetWindowEvents(){
	if (!m_bInit)
	{
		CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
		m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
		m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
		m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
		m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
		m_wndList.AddEvent(2, _T("Add New Line"), _OnListAddItemFnc, 0, 0, 0);
		m_wndList.AddEvent(3, _T("Edit Line"), _OnListEditItemFnc, 0, 0, 0);
		m_wndInput.Create(&m_wndList);
		m_wndInput.OnInitDialog();
		m_wndList.SetEditView(&m_wndInput);
		SetMode(VM_VIEW);
		m_bInit = true;
	}
	m_wndInput.m_szPriceListID = m_szPriceListID;
	OnListLoadData();
}
void CAdProductPrice::OnDoDataExchange(CDataExchange* pDX){

}
void CAdProductPrice::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdProductPrice::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdProductPrice::SetDefaultValues(){


}
int CAdProductPrice::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
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
void CAdProductPrice::OnListDblClick(){
	OnListEditItem();
} 
void CAdProductPrice::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
} 
int CAdProductPrice::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return 0;
}
int CAdProductPrice::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndInput.SetMode(VM_ADD);
	m_wndList.AddNewLine();
	return 0;
} 
int CAdProductPrice::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	CString szID = m_wndList.GetItemText(nSel , 3);
	m_wndInput.SetMode(VM_EDIT);
	m_wndInput.m_szID = szID;
	m_wndList.EditLine(nSel);
	return 0;
} 
long CAdProductPrice::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpl_price_line_id as id,") \
				_T(" adpl_product_id as product,") \
				_T(" adpl_ref_price as refprice,") \
				_T(" adpl_unit_price as unitprice") \
				_T(" FROM ad_price_line") \
				_T(" WHERE adpl_price_list_id = '%s'"), m_szPriceListID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Product")), 
			rs.GetValue(_T("RefPrice")), 
			rs.GetValue(_T("UnitPrice")),
			rs.GetValue(_T("id")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CAdProductPrice::OnAddAdProductPrice(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdProductPrice::OnEditAdProductPrice(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdProductPrice::OnDeleteAdProductPrice(){
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
 		OnCancelAdProductPrice();
 	}
	return 0;
}
int CAdProductPrice::OnSaveAdProductPrice(){
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
 		//szWhere.Format(_T(" WHERE "),);
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby, createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdProductPrice::OnCancelAdProductPrice(){
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
int CAdProductPrice::OnAdProductPriceListLoadData(){
	return 0;
}

void CAdProductPrice::ClosePopup(){
	CGuiPopup::ClosePopup();
	((CAdPriceList*)GetParentWnd())->SetMode(m_nMode);
}