#include "ProductPriceList.h"
#include "MainFrame_E10.h"
#include "ProductPriceListDialog.h"
#include "ProductDialog.h"
#include "ProductDefault.h"


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductPriceList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductPriceList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductPriceList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductPriceList*)pWnd)->OnListDeleteItem();
} 
static void _OnAddNewPriceSelectFnc(CWnd *pWnd){
	CProductPriceList *pVw = (CProductPriceList *)pWnd;
	pVw->OnAddNewPriceSelect();
} 
static int _OnAddProductPriceListFnc(CWnd *pWnd){
	 return ((CProductPriceList*)pWnd)->OnAddProductPriceList();
} 
static int _OnEditProductPriceListFnc(CWnd *pWnd){
	 return ((CProductPriceList*)pWnd)->OnEditProductPriceList();
} 
static int _OnDeleteProductPriceListFnc(CWnd *pWnd){
	 return ((CProductPriceList*)pWnd)->OnDeleteProductPriceList();
} 
static int _OnSaveProductPriceListFnc(CWnd *pWnd){
	 return ((CProductPriceList*)pWnd)->OnSaveProductPriceList();
} 
static int _OnCancelProductPriceListFnc(CWnd *pWnd){
	 return ((CProductPriceList*)pWnd)->OnCancelProductPriceList();
} 
CProductPriceList::CProductPriceList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CProductPriceList::~CProductPriceList(){
}
void CProductPriceList::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 790, 120); 
	m_wndAddNewPrice.Create(this, _T("&Update Price"), 5, 125, 125, 150);
}
void CProductPriceList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Updated By"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Updated Date"), CFMT_DATETIME, 130);
	m_wndList.InsertColumn(3, _T("Apply Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(4, _T("End Date"), CFMT_DATE, 0);
	m_wndList.InsertColumn(5, _T("Purchase Price"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(6, _T("Sale Price"), CFMT_NUMBER, 90);
	if(pMF->GetModuleID() == _T("GLS"))
	{
		m_wndList.InsertColumn(7, _T("Insurance Price"), CFMT_NUMBER, 0);
	}
	else
		m_wndList.InsertColumn(7, _T("Insurance Price"), CFMT_NUMBER, pMF->m_szOriginModuleID==_T("HC")?0:90);

	m_wndList.InsertColumn(8, _T("Policy Price"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(9, _T("Request Price"), CFMT_NUMBER, 0);

	//m_wndList.InsertColumn(10, _T("Is Paid1"), CFMT_TEXT, 30);
	//m_wndList.InsertColumn(11, _T("Is Paid2"), CFMT_TEXT, 30);
	//m_wndList.InsertColumn(12, _T("Is Paid3"), CFMT_TEXT, 30);

}
void CProductPriceList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndAddNewPrice.SetEvent(WE_CLICK, _OnAddNewPriceSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddProductPriceListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditProductPriceListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteProductPriceListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveProductPriceListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelProductPriceListFnc, 0, 'T', VK_CONTROL);
*/

	SetMode(VM_NONE);
	OnListLoadData();
}
void CProductPriceList::OnDoDataExchange(CDataExchange* pDX){

}
void CProductPriceList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductPriceList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CProductPriceList::SetDefaultValues(){
	m_nProductID = 0;

}
int CProductPriceList::SetMode(int nMode){
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

//		m_wndAddNewPrice.EnableWindow(FALSE);
 		return nOldMode;
}
void CProductPriceList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	
	CProductPriceListDialog dlg(this, VM_VIEW);
	dlg.m_nProductID = m_nProductID;
	dlg.m_nProductPriceID = str2long(m_wndList.GetItemText(nSel, 0));
	if(dlg.DoModal() == IDOK)
	{
	}
} 
void CProductPriceList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CProductPriceList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CProductPriceList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szIsActive;
	if (m_nProductID == 0)
	{
		m_wndList.DeleteAllItems();
		return 0;
	}
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT m_product_price.*, su_name as createdby ") \
		_T("FROM m_product_price LEFT JOIN sys_user ON(su_userid = mpp_CreatedBy) ") \
		_T("WHERE mpp_product_id = % ld ORDER BY mpp_product_price_id DESC"), m_nProductID);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("mpp_isactive"), szIsActive);

		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("mpp_product_price_id")), 
			rs.GetValue(_T("createdBy")), 
			rs.GetValue(_T("mpp_CreatedDate")), 
			rs.GetValue(_T("mpp_fromdate")), 
			rs.GetValue(_T("mpp_todate")), 
			rs.GetValue(_T("mpp_unitprice")), 
			rs.GetValue(_T("mpp_SalePrice1")), 
			rs.GetValue(_T("mpp_SalePrice2")), 
			rs.GetValue(_T("mpp_SalePrice3")), 
			rs.GetValue(_T("mpp_SalePrice4")), 
			rs.GetValue(_T("mpp_IsPaid1")), 
			rs.GetValue(_T("mpp_IsPaid2")), 
			rs.GetValue(_T("mpp_IsPaid3")), 
			NULL);

		if(szIsActive == _T("Y")){
			m_wndList.SetItemBkColor(nItem, RGB(0, 128, 192), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CProductPriceList::OnAddNewPriceSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("10.07.2")) ||
			pMF->CheckPermission(_T("10.07.3")))
	{
		CString szProductPriceStr;
		for (int i = 0; i < m_wndList.GetItemCount(); i++)
		{
			if (!szProductPriceStr.IsEmpty())
				szProductPriceStr += _T(", ");
			szProductPriceStr += m_wndList.GetItemText(i, 0);
		}
		CProductPriceListDialog dlg(this, VM_ADD);
		dlg.m_nProductID = m_nProductID;
		dlg.m_szManufactureKey = m_szManufactureID;
		dlg.m_szVendorKey = m_szVendorID;
		dlg.m_nProductPriceID = -1;
		dlg.m_szProductPriceStr = szProductPriceStr;
		dlg.m_pWnd = this;
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
			
		}
	}
} 
int CProductPriceList::OnAddProductPriceList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductPriceList::OnEditProductPriceList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductPriceList::OnDeleteProductPriceList(){
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
 		OnCancelProductPriceList();
 	}
	return 0;
}
int CProductPriceList::OnSaveProductPriceList(){
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
 		//OnProductPriceListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductPriceList::OnCancelProductPriceList(){
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
int CProductPriceList::OnProductPriceListListLoadData(){
	return 0;
}

void CProductPriceList::Refresh(){
	OnListLoadData();
}