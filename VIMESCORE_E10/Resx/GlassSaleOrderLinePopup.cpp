#include "GlassSaleOrderLinePopup.h"
#include "MainFrm.h"
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CGlassSaleOrderLinePopup* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CGlassSaleOrderLinePopup *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderLinePopup *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderLinePopup *)pWnd)->OnOnHandCheckValue();
} 
/*static void _OnSellingPriceChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnSellingPriceChange();
} */
/*static void _OnSellingPriceSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnSellingPriceSetfocus();} */ 
/*static void _OnSellingPriceKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnSellingPriceKillfocus();
} */
static int _OnSellingPriceCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderLinePopup *)pWnd)->OnSellingPriceCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderLinePopup *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CGlassSaleOrderLinePopup *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CGlassSaleOrderLinePopup *)pWnd)->OnAmountCheckValue();
} 
static int _OnAddGlassSaleOrderLinePopupFnc(CWnd *pWnd){
	 return ((CGlassSaleOrderLinePopup*)pWnd)->OnAddGlassSaleOrderLinePopup();
} 
static int _OnEditGlassSaleOrderLinePopupFnc(CWnd *pWnd){
	 return ((CGlassSaleOrderLinePopup*)pWnd)->OnEditGlassSaleOrderLinePopup();
} 
static int _OnDeleteGlassSaleOrderLinePopupFnc(CWnd *pWnd){
	 return ((CGlassSaleOrderLinePopup*)pWnd)->OnDeleteGlassSaleOrderLinePopup();
} 
static int _OnSaveGlassSaleOrderLinePopupFnc(CWnd *pWnd){
	 return ((CGlassSaleOrderLinePopup*)pWnd)->OnSaveGlassSaleOrderLinePopup();
} 
static int _OnCancelGlassSaleOrderLinePopupFnc(CWnd *pWnd){
	 return ((CGlassSaleOrderLinePopup*)pWnd)->OnCancelGlassSaleOrderLinePopup();
} 
CGlassSaleOrderLinePopup::CGlassSaleOrderLinePopup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CGlassSaleOrderLinePopup::~CGlassSaleOrderLinePopup(){
}
void CGlassSaleOrderLinePopup::OnCreateComponents(){
	m_wndLines.Create(this, _T(""), 3, 5, 958, 95);
	m_wndItemNameLabel.Create(this, _T("Item Name"), 8, 35, 108, 60);
	m_wndItemName.Create(this,113, 35, 367, 60); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 372, 35, 452, 60);
	m_wndQuantity.Create(this,457, 35, 537, 60); 
	m_wndOnHandLabel.Create(this, _T("OnHand"), 542, 36, 622, 61);
	m_wndOnHand.Create(this,627, 36, 708, 61); 
	m_wndSellingPriceLabel.Create(this, _T("Selling Price"), 713, 35, 813, 60);
	m_wndSellingPrice.Create(this,815, 35, 955, 60); 
	m_wndNoteLabel.Create(this, _T("Note"), 8, 66, 108, 91);
	m_wndNote.Create(this,113, 66, 708, 91); 
	m_wndAmountLabel.Create(this, _T("Amount"), 713, 66, 813, 91);
	m_wndAmount.Create(this,816, 66, 956, 91); 

}
void CGlassSaleOrderLinePopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndOnHand.SetLimitText(35);
	m_wndOnHand.SetCheckValue(true);
	m_wndSellingPrice.SetLimitText(1024);
	m_wndSellingPrice.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);



}
void CGlassSaleOrderLinePopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetEvent(WE_SELENDOK, _OnItemNameSelendokFnc);
	//m_wndItemName.SetEvent(WE_SETFOCUS, _OnItemNameSetfocusFnc);
	//m_wndItemName.SetEvent(WE_KILLFOCUS, _OnItemNameKillfocusFnc);
	m_wndItemName.SetEvent(WE_SELCHANGE, _OnItemNameSelectChangeFnc);
	m_wndItemName.SetEvent(WE_LOADDATA, _OnItemNameLoadDataFnc);
	//m_wndItemName.SetEvent(WE_ADDNEW, _OnItemNameAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndOnHand.SetEvent(WE_CHANGE, _OnOnHandChangeFnc);
	//m_wndOnHand.SetEvent(WE_SETFOCUS, _OnOnHandSetfocusFnc);
	//m_wndOnHand.SetEvent(WE_KILLFOCUS, _OnOnHandKillfocusFnc);
	m_wndOnHand.SetEvent(WE_CHECKVALUE, _OnOnHandCheckValueFnc);
	//m_wndSellingPrice.SetEvent(WE_CHANGE, _OnSellingPriceChangeFnc);
	//m_wndSellingPrice.SetEvent(WE_SETFOCUS, _OnSellingPriceSetfocusFnc);
	//m_wndSellingPrice.SetEvent(WE_KILLFOCUS, _OnSellingPriceKillfocusFnc);
	m_wndSellingPrice.SetEvent(WE_CHECKVALUE, _OnSellingPriceCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	SetMode(VM_NONE);

}
void CGlassSaleOrderLinePopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndOnHand.GetDlgCtrlID(), m_nOnHand);
	DDX_Text(pDX, m_wndSellingPrice.GetDlgCtrlID(), m_nSellingPrice);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CGlassSaleOrderLinePopup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ItemName")] =  m_szItemNameKey;
	m_jData[_T("Quantity")] =  m_nQuantity;
	m_jData[_T("OnHand")] =  m_nOnHand;
	m_jData[_T("SellingPrice")] =  m_nSellingPrice;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("Amount")] =  m_nAmount;
	}
	else
	{
			
	m_jData[_T("ItemName")].GetValue(m_szItemNameKey);
	m_jData[_T("Quantity")].GetValue(m_nQuantity);
	m_jData[_T("OnHand")].GetValue(m_nOnHand);
	m_jData[_T("SellingPrice")].GetValue(m_nSellingPrice);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	}

}
void CGlassSaleOrderLinePopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CGlassSaleOrderLinePopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CGlassSaleOrderLinePopup::SetDefaultValues(){

	m_szItemNameKey.Empty();
	m_nQuantity=0;
	m_nOnHand=0;
	m_nSellingPrice=0;
	m_szNote.Empty();
	m_nAmount=0;

}
int CGlassSaleOrderLinePopup::SetMode(int nMode){
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
void CGlassSaleOrderLinePopup::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CGlassSaleOrderLinePopup::OnItemNameSelendok(){
	 
}
/*void CGlassSaleOrderLinePopup::OnItemNameSetfocus(){
	
}*/
/*void CGlassSaleOrderLinePopup::OnItemNameKillfocus(){
	
}*/
long CGlassSaleOrderLinePopup::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemName.IsSearchKey() && !m_szItemNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemNameKey
};
	m_wndItemName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CGlassSaleOrderLinePopup::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CGlassSaleOrderLinePopup::OnQuantityChange(){
	
} */
/*void CGlassSaleOrderLinePopup::OnQuantitySetfocus(){
	
} */
/*void CGlassSaleOrderLinePopup::OnQuantityKillfocus(){
	
} */
int CGlassSaleOrderLinePopup::OnQuantityCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderLinePopup::OnOnHandChange(){
	
} */
/*void CGlassSaleOrderLinePopup::OnOnHandSetfocus(){
	
} */
/*void CGlassSaleOrderLinePopup::OnOnHandKillfocus(){
	
} */
int CGlassSaleOrderLinePopup::OnOnHandCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderLinePopup::OnSellingPriceChange(){
	
} */
/*void CGlassSaleOrderLinePopup::OnSellingPriceSetfocus(){
	
} */
/*void CGlassSaleOrderLinePopup::OnSellingPriceKillfocus(){
	
} */
int CGlassSaleOrderLinePopup::OnSellingPriceCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderLinePopup::OnNoteChange(){
	
} */
/*void CGlassSaleOrderLinePopup::OnNoteSetfocus(){
	
} */
/*void CGlassSaleOrderLinePopup::OnNoteKillfocus(){
	
} */
int CGlassSaleOrderLinePopup::OnNoteCheckValue(){
	return 0;
} 
/*void CGlassSaleOrderLinePopup::OnAmountChange(){
	
} */
/*void CGlassSaleOrderLinePopup::OnAmountSetfocus(){
	
} */
/*void CGlassSaleOrderLinePopup::OnAmountKillfocus(){
	
} */
int CGlassSaleOrderLinePopup::OnAmountCheckValue(){
	return 0;
} 
int CGlassSaleOrderLinePopup::OnAddGlassSaleOrderLinePopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CGlassSaleOrderLinePopup::OnEditGlassSaleOrderLinePopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CGlassSaleOrderLinePopup::OnDeleteGlassSaleOrderLinePopup(){
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
 		OnCancelGlassSaleOrderLinePopup();
 	}
	return 0;
}
int CGlassSaleOrderLinePopup::OnSaveGlassSaleOrderLinePopup(){
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
 		//OnGlassSaleOrderLinePopupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CGlassSaleOrderLinePopup::OnCancelGlassSaleOrderLinePopup(){
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
int CGlassSaleOrderLinePopup::OnGlassSaleOrderLinePopupListLoadData(){
	return 0;
}
