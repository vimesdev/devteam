#include "POAutoEditQuantityDialog.h"
#include "MainFrame_E10.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPOAutoEditQuantityDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPOAutoEditQuantityDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPOAutoEditQuantityDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPOAutoEditQuantityDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPOAutoEditQuantityDialog *pVw = (CPOAutoEditQuantityDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPOAutoEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CPOAutoEditQuantityDialog*)pWnd)->OnAddPOAutoEditQuantityDialog();
} 
static int _OnEditPOAutoEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CPOAutoEditQuantityDialog*)pWnd)->OnEditPOAutoEditQuantityDialog();
} 
static int _OnDeletePOAutoEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CPOAutoEditQuantityDialog*)pWnd)->OnDeletePOAutoEditQuantityDialog();
} 
static int _OnSavePOAutoEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CPOAutoEditQuantityDialog*)pWnd)->OnSavePOAutoEditQuantityDialog();
} 
static int _OnCancelPOAutoEditQuantityDialogFnc(CWnd *pWnd){
	 return ((CPOAutoEditQuantityDialog*)pWnd)->OnCancelPOAutoEditQuantityDialog();
} 
CPOAutoEditQuantityDialog::CPOAutoEditQuantityDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CPOAutoEditQuantityDialog::~CPOAutoEditQuantityDialog(){
}
void CPOAutoEditQuantityDialog::OnCreateComponents(){
	m_wndPatientUsageInformation.Create(this, _T("Patient usage information"), 5, 5, 600, 450);
	m_wndList.Create(this,10, 30, 595, 445); 
	m_wndClose.Create(this, _T("&Close"), 520, 455, 600, 480);

}
void CPOAutoEditQuantityDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Doc No"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(2, _T("Order ID"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 130);
	m_wndList.InsertColumn(4, _T("Quantity"), CFMT_NUMBER, 55);
	m_wndList.InsertColumn(5, _T("Edited Quantity"), CFMT_NUMBER, 55);
	m_wndList.InsertColumn(6, _T("UnitPrice"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("Amount"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(8, _T(""), CFMT_TEXT, 0);
	m_wndList.SetSortHeader(false);

}
void CPOAutoEditQuantityDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
	SetMode(VM_VIEW);

}
void CPOAutoEditQuantityDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CPOAutoEditQuantityDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPOAutoEditQuantityDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPOAutoEditQuantityDialog::SetDefaultValues(){


}
int CPOAutoEditQuantityDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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

#include "NumberFieldDialog.h"

void CPOAutoEditQuantityDialog::OnListDblClick(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	int nQtyOrder = 0;
	int nQty = 0;
	long nOrderID;
	
	int rate = str2int(m_wndList.GetItemText(nSel, 8));
	//if(rate <= 1)
	//{
	//	ShowMessageBox(_T("\x43h\x1EE9\x63 n\x103ng \x63h\x1EC9 \xE1p \x64\x1EE5ng v\x1EDBi nh\x1EEFng v\x1EADt t\x1EF1 \x63\xF3 \x111\x1A1n v\x1ECB quy \x111\x1ED5i > \x31"));
	////	return;
	//}

	CNumberFieldDialog dlg(this);
	
	
	nOrderID = str2long(m_wndList.GetItemText(nSel, 2));
	nQtyOrder = str2int(m_wndList.GetItemText(nSel, 4));
	nQty = str2int(m_wndList.GetItemText(nSel, 5));
	
	dlg.SetMax(nQtyOrder);
	dlg.SetMin(0);
	dlg.m_nValue = nQty;

	if(dlg.DoModal() == IDOK)
	{
		CString szSQL;
		szSQL.Format(_T("UPDATE purchase_orderline2 SET pol_qty=%0.f ") \
			_T("WHERE pol_purchase_order_id=%ld and pol_product_id = %ld and pol_orderid=%ld"),
			dlg.m_nValue, m_nPurchaseOrder_ID, m_nProduct_ID, nOrderID);
		pMF->ExecSQL(szSQL);

		OnListLoadData();
	}
	

} 
void CPOAutoEditQuantityDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPOAutoEditQuantityDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPOAutoEditQuantityDialog::OnListLoadData(){
CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT pol_docno AS docno,") \
_T("   pol_orderid    AS orderid,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)                                                 AS pname,") \
_T("  product_uomrate, ") \
_T("   SUM(pol_qtyorder)                                               AS qtyorder,") \
_T("   SUM(pol_qty)                                                    AS qty,") \
_T("   ceil(product_unitprice/product_uomrate)                         AS product_unitprice,") \
_T("   SUM(pol_qty           *ceil(product_unitprice/product_uomrate)) AS product_amount") \
_T(" FROM purchase_orderline2") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(pol_docno = hd_docno)") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hp_patientno = hd_patientno)") \
_T(" LEFT JOIN m_product_view") \
_T(" ON(pol_product_id          =product_id)") \
_T(" WHERE pol_purchase_order_id=%ld") \
_T(" AND pol_product_id         =%ld") \
_T(" GROUP BY pol_docno,") \
_T("   pol_orderid,") \
_T("   hp_surname,") \
_T("   hp_midname,") \
_T("   hp_firstname,") \
_T("   product_unitprice,") \
_T("   product_uomrate"), m_nPurchaseOrder_ID, m_nProduct_ID);
//_msg(_T("%s"), szSQL);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	int nIndex=0;
	double nAmount = 0;
	CString tmpStr;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), ++nIndex);
		m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("qtyorder")), 
			rs.GetValue(_T("qty")), 
			rs.GetValue(_T("product_unitprice")), 
			rs.GetValue(_T("product_amount")), 
			rs.GetValue(_T("product_uomrate")),
			NULL);
		nAmount += str2double(rs.GetValue(_T("product_amount")));
		rs.MoveNext();
	}

	if(nAmount > 0)
	{
		nIndex = m_wndList.AddItems(_T(""), _T(""), _T(""), _T("T\x1ED5ng ti\x1EC1n"), _T(""), _T(""), _T(""), ToString(nAmount), NULL);
		m_wndList.SetItemTextColor(nIndex, RGB(0, 0, 255), FALSE);
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CPOAutoEditQuantityDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CPOAutoEditQuantityDialog::OnAddPOAutoEditQuantityDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPOAutoEditQuantityDialog::OnEditPOAutoEditQuantityDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPOAutoEditQuantityDialog::OnDeletePOAutoEditQuantityDialog(){
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
 		OnCancelPOAutoEditQuantityDialog();
 	}
	return 0;
}
int CPOAutoEditQuantityDialog::OnSavePOAutoEditQuantityDialog(){
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
 		//OnPOAutoEditQuantityDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPOAutoEditQuantityDialog::OnCancelPOAutoEditQuantityDialog(){
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
int CPOAutoEditQuantityDialog::OnPOAutoEditQuantityDialogListLoadData(){
	return 0;
}
