#include "WardMaterialReplaceDialog.h"
#include "MainFrame_E10.h"
/*static void _OnDrugNameChangeFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnDrugNameChange();
} */
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnDrugNameSetfocus();} */ 
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnDrugNameKillfocus();
} */
static int _OnDrugNameCheckValueFnc(CWnd *pWnd){
	return ((CWardMaterialReplaceDialog *)pWnd)->OnDrugNameCheckValue();
} 
/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CWardMaterialReplaceDialog *)pWnd)->OnOnHandCheckValue();
} 
static void _OnSupplementNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CWardMaterialReplaceDialog* )pWnd)->OnSupplementNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplementNameSelendokFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnSupplementNameSelendok();
}
/*static void _OnSupplementNameSetfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnSupplementNameKillfocus();
}*/
/*static void _OnSupplementNameKillfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnSupplementNameKillfocus();
}*/
static long _OnSupplementNameLoadDataFnc(CWnd *pWnd){
	return ((CWardMaterialReplaceDialog *)pWnd)->OnSupplementNameLoadData();
}
/*static void _OnSupplementNameAddNewFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnSupplementNameAddNew();
}*/
/*static void _OnSupplementOnhandChangeFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnSupplementOnhandChange();
} */
/*static void _OnSupplementOnhandSetfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnSupplementOnhandSetfocus();} */ 
/*static void _OnSupplementOnhandKillfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnSupplementOnhandKillfocus();
} */
static int _OnSupplementOnhandCheckValueFnc(CWnd *pWnd){
	return ((CWardMaterialReplaceDialog *)pWnd)->OnSupplementOnhandCheckValue();
} 
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CWardMaterialReplaceDialog *)pWnd)->OnUomCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CWardMaterialReplaceDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CWardMaterialReplaceDialog *)pWnd)->OnQuantityCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CWardMaterialReplaceDialog *pVw = (CWardMaterialReplaceDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CWardMaterialReplaceDialog *pVw = (CWardMaterialReplaceDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddWardMaterialReplaceDialogFnc(CWnd *pWnd){
	 return ((CWardMaterialReplaceDialog*)pWnd)->OnAddWardMaterialReplaceDialog();
} 
static int _OnEditWardMaterialReplaceDialogFnc(CWnd *pWnd){
	 return ((CWardMaterialReplaceDialog*)pWnd)->OnEditWardMaterialReplaceDialog();
} 
static int _OnDeleteWardMaterialReplaceDialogFnc(CWnd *pWnd){
	 return ((CWardMaterialReplaceDialog*)pWnd)->OnDeleteWardMaterialReplaceDialog();
} 
static int _OnSaveWardMaterialReplaceDialogFnc(CWnd *pWnd){
	 return ((CWardMaterialReplaceDialog*)pWnd)->OnSaveWardMaterialReplaceDialog();
} 
static int _OnCancelWardMaterialReplaceDialogFnc(CWnd *pWnd){
	 return ((CWardMaterialReplaceDialog*)pWnd)->OnCancelWardMaterialReplaceDialog();
} 
CWardMaterialReplaceDialog::CWardMaterialReplaceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CWardMaterialReplaceDialog::~CWardMaterialReplaceDialog(){
}
void CWardMaterialReplaceDialog::OnCreateComponents(){
	m_wndReplaceInformation.Create(this, _T("Replace Information"), 5, 5, 600, 120);
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 10, 30, 160, 55);
	m_wndDrugName.Create(this,165, 30, 415, 55); 
	m_wndOnHandLabel.Create(this, _T("On Hand"), 420, 30, 510, 55);
	m_wndOnHand.Create(this,515, 30, 595, 55); 
	m_wndSupplementNameLabel.Create(this, _T("Replace Name"), 10, 60, 160, 85);
	m_wndSupplementName.Create(this,165, 60, 415, 85); 
	m_wndSupplementOnhandLabel.Create(this, _T("On Hand"), 420, 60, 510, 85);
	m_wndSupplementOnhand.Create(this,515, 60, 595, 85); 
	m_wndUomLabel.Create(this, _T("Uom"), 10, 90, 160, 115);
	m_wndUom.Create(this,165, 90, 415, 115); 
	m_wndQuantityLabel.Create(this, _T("Order Qty"), 420, 90, 510, 115);
	m_wndQuantity.Create(this,515, 90, 595, 115); 
	m_wndOK.Create(this, _T("&OK"), 425, 125, 510, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 515, 125, 600, 150);

}
void CWardMaterialReplaceDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDrugName.SetLimitText(35);
	m_wndDrugName.SetReadOnly(true);
	m_wndOnHand.SetLimitText(16);
	m_wndOnHand.SetReadOnly(true);
	m_wndSupplementName.SetCheckValue(true);
	m_wndSupplementName.LimitText(35);
	m_wndSupplementOnhand.SetLimitText(16);
	m_wndSupplementOnhand.SetReadOnly(true);
	m_wndUom.SetLimitText(35);
	m_wndUom.SetReadOnly(true);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetReadOnly(true);



	m_wndSupplementName.InsertColumn(0, _T(""), CFMT_NUMBER, 0); //ProductItemID
	m_wndSupplementName.InsertColumn(1, _T(""), CFMT_NUMBER, 0); //Product_ID
	m_wndSupplementName.InsertColumn(2, _T("ID"), CFMT_NUMBER, 0);
	m_wndSupplementName.InsertColumn(3, _T("Name"), CFMT_TEXT, 350);
	m_wndSupplementName.InsertColumn(4, _T("Uom"), CFMT_TEXT, 80);
	m_wndSupplementName.InsertColumn(5, _T("Classcification"), CFMT_TEXT, 0);
	m_wndSupplementName.InsertColumn(6, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndSupplementName.InsertColumn(7, _T("Sale Price"), CFMT_MONEY, 0);
	m_wndSupplementName.InsertColumn(8, _T("OnHand"), CFMT_MONEY, 80);
	m_wndSupplementName.InsertColumn(9, _T("Lot No"), CFMT_TEXT, 80);
	m_wndSupplementName.InsertColumn(10, _T("Exp Date"), CFMT_DATE, 80);
	m_wndSupplementName.InsertColumn(11, _T("Manufacture"), CFMT_TEXT, 150);
	m_wndSupplementName.Format(11, 3, 5);
	m_wndSupplementName.SetSearchStyle(SS_COMPARE);


}
void CWardMaterialReplaceDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndDrugName.SetEvent(WE_CHANGE, _OnDrugNameChangeFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_CHECKVALUE, _OnDrugNameCheckValueFnc);
	//m_wndOnHand.SetEvent(WE_CHANGE, _OnOnHandChangeFnc);
	//m_wndOnHand.SetEvent(WE_SETFOCUS, _OnOnHandSetfocusFnc);
	//m_wndOnHand.SetEvent(WE_KILLFOCUS, _OnOnHandKillfocusFnc);
	m_wndOnHand.SetEvent(WE_CHECKVALUE, _OnOnHandCheckValueFnc);
	m_wndSupplementName.SetEvent(WE_SELENDOK, _OnSupplementNameSelendokFnc);
	//m_wndSupplementName.SetEvent(WE_SETFOCUS, _OnSupplementNameSetfocusFnc);
	//m_wndSupplementName.SetEvent(WE_KILLFOCUS, _OnSupplementNameKillfocusFnc);
	m_wndSupplementName.SetEvent(WE_SELCHANGE, _OnSupplementNameSelectChangeFnc);
	m_wndSupplementName.SetEvent(WE_LOADDATA, _OnSupplementNameLoadDataFnc);
	//m_wndSupplementName.SetEvent(WE_ADDNEW, _OnSupplementNameAddNewFnc);
	//m_wndSupplementOnhand.SetEvent(WE_CHANGE, _OnSupplementOnhandChangeFnc);
	//m_wndSupplementOnhand.SetEvent(WE_SETFOCUS, _OnSupplementOnhandSetfocusFnc);
	//m_wndSupplementOnhand.SetEvent(WE_KILLFOCUS, _OnSupplementOnhandKillfocusFnc);
	m_wndSupplementOnhand.SetEvent(WE_CHECKVALUE, _OnSupplementOnhandCheckValueFnc);
	//m_wndUom.SetEvent(WE_CHANGE, _OnUomChangeFnc);
	//m_wndUom.SetEvent(WE_SETFOCUS, _OnUomSetfocusFnc);
	//m_wndUom.SetEvent(WE_KILLFOCUS, _OnUomKillfocusFnc);
	m_wndUom.SetEvent(WE_CHECKVALUE, _OnUomCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	
	GetDataToScreen();
	SetMode(VM_EDIT);
	
}
void CWardMaterialReplaceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugName);
	DDX_Text(pDX, m_wndOnHand.GetDlgCtrlID(), m_nOnHand);
	DDX_TextEx(pDX, m_wndSupplementName.GetDlgCtrlID(), m_szSupplementNameKey);
	DDX_Text(pDX, m_wndSupplementOnhand.GetDlgCtrlID(), m_nSupplementOnhand);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);

}
void CWardMaterialReplaceDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT ") \
_T("   product_id,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T(" product_categoryid, ") \
_T(" product_classid, ") \
_T("   m_getqtyavaiableonhand(%d, product_id) AS onhand") \
_T(" FROM m_product_view") \
_T(" where product_id=%ld"), m_nStorage_ID, m_nXProduct_ID);

	rs.ExecSQL(szSQL);
	
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("product_name"), m_szDrugName);
		rs.GetValue(_T("product_uomname"), m_szUom);
		rs.GetValue(_T("onhand"), m_nOnHand);
		rs.GetValue(_T("product_categoryid"), m_nProductCategoryID);
		rs.GetValue(_T("product_classid"), m_nProductClassID);
	}


	szSQL.Format(_T("SELECT mtl_product_item_id FROM m_transactionline ") \
			_T("WHERe mtl_transaction_id=%ld and mtl_transactionline_id=%ld"), 
			m_nTransactionID, m_nLine);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mtl_product_item_id"), m_szSupplementNameKey);
	}
	m_szSupplementNameKey.Empty();
}
void CWardMaterialReplaceDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CWardMaterialReplaceDialog::SetDefaultValues(){

	m_szDrugName.Empty();
	m_nOnHand=0;
	m_nQuantity = 0;
	m_szSupplementNameKey.Empty();
	m_nSupplementOnhand=0;
	m_szUom.Empty();
	m_nLine = 0;
	

}
int CWardMaterialReplaceDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CWardMaterialReplaceDialog::OnDrugNameChange(){
	
} */
/*void CWardMaterialReplaceDialog::OnDrugNameSetfocus(){
	
} */
/*void CWardMaterialReplaceDialog::OnDrugNameKillfocus(){
	
} */
int CWardMaterialReplaceDialog::OnDrugNameCheckValue(){
	return 0;
} 
/*void CWardMaterialReplaceDialog::OnOnHandChange(){
	
} */
/*void CWardMaterialReplaceDialog::OnOnHandSetfocus(){
	
} */
/*void CWardMaterialReplaceDialog::OnOnHandKillfocus(){
	
} */
int CWardMaterialReplaceDialog::OnOnHandCheckValue(){
	return 0;
} 
void CWardMaterialReplaceDialog::OnSupplementNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CWardMaterialReplaceDialog::OnSupplementNameSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	UpdateData(true);
	m_nSupplementOnhand = str2double(m_wndSupplementName.GetCurrent(8));
	m_szUom = m_wndSupplementName.GetCurrent(4);
	UpdateData(FALSE);
}
/*void CWardMaterialReplaceDialog::OnSupplementNameSetfocus(){
	
}*/
/*void CWardMaterialReplaceDialog::OnSupplementNameKillfocus(){
	
}*/
long CWardMaterialReplaceDialog::OnSupplementNameLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id=%d "), m_nStorage_ID);
	szFilter.AppendFormat(_T(" and product_categoryid=%ld "), m_nProductCategoryID);

	return pMF->LoadProductItemList(&m_wndSupplementName, m_szSupplementNameKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSupplementName.IsSearchKey() && !m_szSupplementNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSupplementNameKey
};
	m_wndSupplementName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSupplementName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CWardMaterialReplaceDialog::OnSupplementNameAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CWardMaterialReplaceDialog::OnSupplementOnhandChange(){
	
} */
/*void CWardMaterialReplaceDialog::OnSupplementOnhandSetfocus(){
	
} */
/*void CWardMaterialReplaceDialog::OnSupplementOnhandKillfocus(){
	
} */
int CWardMaterialReplaceDialog::OnSupplementOnhandCheckValue(){
	return 0;
} 
/*void CWardMaterialReplaceDialog::OnUomChange(){
	
} */
/*void CWardMaterialReplaceDialog::OnUomSetfocus(){
	
} */
/*void CWardMaterialReplaceDialog::OnUomKillfocus(){
	
} */
int CWardMaterialReplaceDialog::OnUomCheckValue(){
	return 0;
} 
/*void CWardMaterialReplaceDialog::OnQuantityChange(){
	
} */
/*void CWardMaterialReplaceDialog::OnQuantitySetfocus(){
	
} */
/*void CWardMaterialReplaceDialog::OnQuantityKillfocus(){
	
} */
int CWardMaterialReplaceDialog::OnQuantityCheckValue(){
	return 0;
} 
void CWardMaterialReplaceDialog::OnOKSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	if(!IsValidateData())
 		return;
	long nNewProductItem_ID;
	nNewProductItem_ID = str2long(m_szSupplementNameKey);
	szSQL.Format(_T("M_TRANSACTION_REPLACELINE(%ld, %ld, %d, %ld) "),
		m_nTransactionID, m_nLine, m_nStorage_ID, nNewProductItem_ID);
	int ret = str2long(pMF->ExecDML(szSQL));

	if(ret > 0) CGuiDialog::OnOK();

} 
void CWardMaterialReplaceDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CWardMaterialReplaceDialog::OnAddWardMaterialReplaceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CWardMaterialReplaceDialog::OnEditWardMaterialReplaceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CWardMaterialReplaceDialog::OnDeleteWardMaterialReplaceDialog(){
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
 		OnCancelWardMaterialReplaceDialog();
 	}
	return 0;
}
int CWardMaterialReplaceDialog::OnSaveWardMaterialReplaceDialog(){
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
 		//OnWardMaterialReplaceDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CWardMaterialReplaceDialog::OnCancelWardMaterialReplaceDialog(){
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
int CWardMaterialReplaceDialog::OnWardMaterialReplaceDialogListLoadData(){
	return 0;
}
