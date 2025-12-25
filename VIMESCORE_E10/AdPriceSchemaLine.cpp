#include "AdPriceSchemaLine.h"
#include "MainFrame_E10.h"
#include "AdPriceSchema.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceSchemaLine*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdPriceSchemaLine*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdPriceSchemaLine*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaLine*)pWnd)->OnListDeleteItem();
}
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaLine*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaLine*)pWnd)->OnListEditItem();
} 
static int _OnAddAdPriceSchemaLineFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaLine*)pWnd)->OnAddAdPriceSchemaLine();
} 
static int _OnEditAdPriceSchemaLineFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaLine*)pWnd)->OnEditAdPriceSchemaLine();
} 
static int _OnDeleteAdPriceSchemaLineFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaLine*)pWnd)->OnDeleteAdPriceSchemaLine();
} 
static int _OnSaveAdPriceSchemaLineFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaLine*)pWnd)->OnSaveAdPriceSchemaLine();
} 
static int _OnCancelAdPriceSchemaLineFnc(CWnd *pWnd){
	 return ((CAdPriceSchemaLine*)pWnd)->OnCancelAdPriceSchemaLine();
} 
CAdPriceSchemaLine::CAdPriceSchemaLine(){
	//SetAutoClose(false);
	m_nDlgWidth = 790;
	m_nDlgHeight = 265;
	SetDefaultValues();
	m_bInit = false;
}
CAdPriceSchemaLine::~CAdPriceSchemaLine(){
}
void CAdPriceSchemaLine::OnCreateComponents(){
	m_wndPriceSchemaLine.Create(this, _T("Price Schema Line"), 0, 0, 785, 260);
	m_wndList.Create(this,5, 25, 785, 260); 

}
void CAdPriceSchemaLine::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Partner"), 256, 100);
	m_wndList.InsertColumn(1, _T("Product Cat"), 256, 130);
	m_wndList.InsertColumn(2, _T("Product"), 256, 150);
	m_wndList.InsertColumn(3, _T("Ref Price Type"), 256, 100);
	m_wndList.InsertColumn(4, _T("Ref Price Adjust"), 256, 100);
	m_wndList.InsertColumn(5, _T("Unit Price Type"), 256, 100);
	m_wndList.InsertColumn(6, _T("Unit Price Adjust"), 256, 100);
	m_wndList.InsertColumn(7, _T("ID"), 256, 0);
}
void CAdPriceSchemaLine::OnSetWindowEvents(){
	if (!m_bInit)
	{
		CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
		m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
		m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
		m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
		m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
		m_wndList.AddEvent(2, _T("Add New Line"), _OnListAddItemFnc, 0, -1, 0); 
		m_wndList.AddEvent(3, _T("Edit Line"), _OnListEditItemFnc, 0, -1, 0);
		m_wndInput.Create(&m_wndList);
		m_wndInput.OnInitDialog();
		m_wndList.SetEditView(&m_wndInput);
		m_bInit = true;
	}
	OnListLoadData();
}
void CAdPriceSchemaLine::OnDoDataExchange(CDataExchange* pDX){

}
void CAdPriceSchemaLine::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdPriceSchemaLine::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdPriceSchemaLine::SetDefaultValues(){


}
int CAdPriceSchemaLine::SetMode(int nMode){
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
void CAdPriceSchemaLine::OnListDblClick(){
	OnListEditItem();
} 
void CAdPriceSchemaLine::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CAdPriceSchemaLine::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
int CAdPriceSchemaLine::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndInput.SetMode(VM_ADD);
	m_wndInput.m_szPriceSchemaID = m_szPriceSchemaID;
	int ret = m_wndList.AddNewLine();
	return 0;
} 
int CAdPriceSchemaLine::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
	m_wndInput.SetMode(VM_EDIT);
	m_wndInput.m_szID = m_wndList.GetItemText(nSel, 7);
	m_wndInput.m_szPriceSchemaID = m_szPriceSchemaID;
	m_wndList.EditLine(nSel);
	return 0;
} 
long CAdPriceSchemaLine::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpsl_business_partner_id as partner,") \
				_T(" adpsl_product_category_id as productcat,") \
				_T(" adpsl_product_id as product,") \
				_T(" adpsl_ref_price_type as refpricetype,") \
				_T(" adpsl_ref_price_adjust as refpriceadjust,") \
				_T(" adpsl_unit_price_type as unitpricetype,") \
				_T(" adpsl_unit_price_adjust as unitpriceadjust,") \
				_T(" adpsl_price_schema_line_id as id") \
				_T(" FROM ad_price_schema_line") \
				_T(" WHERE adpsl_price_schema_id = '%s'"), m_szPriceSchemaID);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Partner")), 
			rs.GetValue(_T("ProductCat")), 
			rs.GetValue(_T("Product")), 
			rs.GetValue(_T("RefPriceType")), 
			rs.GetValue(_T("RefPriceAdjust")), 
			rs.GetValue(_T("UnitPriceType")), 
			rs.GetValue(_T("UnitPriceAdjust")),
			rs.GetValue(_T("id")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CAdPriceSchemaLine::OnAddAdPriceSchemaLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdPriceSchemaLine::OnEditAdPriceSchemaLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdPriceSchemaLine::OnDeleteAdPriceSchemaLine(){
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
 		OnCancelAdPriceSchemaLine();
 	}
	return 0;
}
int CAdPriceSchemaLine::OnSaveAdPriceSchemaLine(){
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
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdPriceSchemaLine::OnCancelAdPriceSchemaLine(){
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
int CAdPriceSchemaLine::OnAdPriceSchemaLineListLoadData(){
	return 0;
}

void CAdPriceSchemaLine::ClosePopup(){
	m_wndInput.Hide();
	CGuiPopup::ClosePopup();
	((CAdPriceSchema*)GetParentWnd())->SetMode(m_nMode);
}
void CAdPriceSchemaLine::Refresh(){
	OnListLoadData();
}