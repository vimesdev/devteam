#include "AdPrice.h"
#include "MainFrame_E10.h"
#include "AdProductDialog.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdPrice*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdPrice*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdPrice*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdPrice*)pWnd)->OnListDeleteItem();
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdPrice*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdPrice*)pWnd)->OnListEditItem();
} 
static int _OnAddAdPriceFnc(CWnd *pWnd){
	 return ((CAdPrice*)pWnd)->OnAddAdPrice();
} 
static int _OnEditAdPriceFnc(CWnd *pWnd){
	 return ((CAdPrice*)pWnd)->OnEditAdPrice();
} 
static int _OnDeleteAdPriceFnc(CWnd *pWnd){
	 return ((CAdPrice*)pWnd)->OnDeleteAdPrice();
} 
static int _OnSaveAdPriceFnc(CWnd *pWnd){
	 return ((CAdPrice*)pWnd)->OnSaveAdPrice();
} 
static int _OnCancelAdPriceFnc(CWnd *pWnd){
	 return ((CAdPrice*)pWnd)->OnCancelAdPrice();
} 
CAdPrice::CAdPrice(){

	m_nDlgWidth = 790;
	m_nDlgHeight = 265;
	SetDefaultValues();
}
CAdPrice::~CAdPrice(){
}
void CAdPrice::OnCreateComponents(){
	m_wndProductPrice.Create(this, _T("Product Price"), 0, 0, 790, 380);
	m_wndList.Create(this,5, 25, 780, 350); 

}
void CAdPrice::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProductPrice.ModifyStyle(WS_BORDER, 0);
	m_wndList.InsertColumn(0, _T("Price List"), 256, 250);
	m_wndList.InsertColumn(1, _T("Ref Price"), 256, 100);
	m_wndList.InsertColumn(2, _T("Unit Price"), 256, 100);
	m_wndList.InsertColumn(3, _T("ID"), 256, 0);

}

void CAdPrice::OnSetWindowEvents(){
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

}
void CAdPrice::OnDoDataExchange(CDataExchange* pDX){

}
void CAdPrice::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CAdPrice::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CAdPrice::SetDefaultValues(){
	m_wndList.DeleteAllItems();
}

int CAdPrice::SetMode(int nMode){
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

void CAdPrice::OnListDblClick(){
	OnListEditItem();
}
 
void CAdPrice::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
}
 
int CAdPrice::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return 0;
}
int CAdPrice::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nMode = ((CAdProductDialog*)GetParent()->GetParent())->GetMode();
	if (nMode == VM_ADD)
		return -1;
	m_wndInput.SetMode(VM_ADD);
	m_wndInput.m_szProductID = m_szID;
	int ret = m_wndList.AddNewLine();
	return ret;
}
int CAdPrice::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	CString szID = m_wndList.GetItemText(nSel, 3);
	m_wndInput.m_szID = szID;
	m_wndInput.m_szProductID = m_szID;
	m_wndInput.SetMode(VM_EDIT);
	m_wndList.EditLine(nSel);
	return 0;
}
long CAdPrice::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpl_price_line_id as id,") \
				_T(" (select adpl_name from ad_price_list list where list.adpl_price_list_id = line.adpl_price_list_id) as pricelist,") \
				_T(" adpl_price_list_id as pricelistid,") \
				_T(" adpl_ref_price as refprice,") \
				_T(" adpl_unit_price as unitprice") \
				_T(" FROM ad_price_line line") \
				_T(" WHERE adpl_product_id  = '%s'"), m_szID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("PriceListID")), 
			rs.GetValue(_T("RefPrice")), 
			rs.GetValue(_T("UnitPrice")),
			rs.GetValue(_T("id")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

int CAdPrice::OnAddAdPrice(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdPrice::OnEditAdPrice(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdPrice::OnDeleteAdPrice(){
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
 		OnCancelAdPrice();
 	}
	return 0;
}

int CAdPrice::OnSaveAdPrice(){
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
 		//szSQL = m_tblTbl.GetUpdateSQL(_T(""));
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

int CAdPrice::OnCancelAdPrice(){
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
 
int CAdPrice::OnAdPriceListLoadData(){
	return 0;
}

