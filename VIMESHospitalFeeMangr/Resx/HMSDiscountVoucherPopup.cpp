#include "HMSDiscountVoucherPopup.h"
#include "MainFrm.h"
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDiscountVoucherPopup* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CHMSDiscountVoucherPopup *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherPopup *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherPopup *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherPopup *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CHMSDiscountVoucherPopup *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSDiscountVoucherPopup *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherPopup *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherPopup *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherPopup *)pWnd)->OnAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherPopup *pVw = (CHMSDiscountVoucherPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddHMSDiscountVoucherPopupFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherPopup*)pWnd)->OnAddHMSDiscountVoucherPopup();
} 
static int _OnEditHMSDiscountVoucherPopupFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherPopup*)pWnd)->OnEditHMSDiscountVoucherPopup();
} 
static int _OnDeleteHMSDiscountVoucherPopupFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherPopup*)pWnd)->OnDeleteHMSDiscountVoucherPopup();
} 
static int _OnSaveHMSDiscountVoucherPopupFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherPopup*)pWnd)->OnSaveHMSDiscountVoucherPopup();
} 
static int _OnCancelHMSDiscountVoucherPopupFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherPopup*)pWnd)->OnCancelHMSDiscountVoucherPopup();
} 
CHMSDiscountVoucherPopup::CHMSDiscountVoucherPopup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 795;
	m_nDlgHeight = 70;
	SetDefaultValues();
}
CHMSDiscountVoucherPopup::~CHMSDiscountVoucherPopup(){
}
void CHMSDiscountVoucherPopup::OnCreateComponents(){
	m_wndInput.Create(this, _T("Input"), 5, 5, 790, 60);
	m_wndItemNameLabel.Create(this, _T("Item Name"), 10, 30, 90, 55);
	m_wndItemName.Create(this,95, 30, 555, 55); 
	m_wndAmountLabel.Create(this, _T("Amount"), 560, 30, 640, 55);
	m_wndAmount.Create(this,645, 30, 725, 55); 
	m_wndSave.Create(this, _T("&Save"), 730, 30, 780, 55);

}
void CHMSDiscountVoucherPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(35);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);


	m_wndItemName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndItemName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSDiscountVoucherPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetEvent(WE_SELENDOK, _OnItemNameSelendokFnc);
	//m_wndItemName.SetEvent(WE_SETFOCUS, _OnItemNameSetfocusFnc);
	//m_wndItemName.SetEvent(WE_KILLFOCUS, _OnItemNameKillfocusFnc);
	m_wndItemName.SetEvent(WE_SELCHANGE, _OnItemNameSelectChangeFnc);
	m_wndItemName.SetEvent(WE_LOADDATA, _OnItemNameLoadDataFnc);
	//m_wndItemName.SetEvent(WE_ADDNEW, _OnItemNameAddNewFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDiscountVoucherPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CHMSDiscountVoucherPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDiscountVoucherPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDiscountVoucherPopup::SetDefaultValues(){

	m_szItemNameKey.Empty();
	m_nAmount=0;

}
int CHMSDiscountVoucherPopup::SetMode(int nMode){
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
void CHMSDiscountVoucherPopup::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountVoucherPopup::OnItemNameSelendok(){
	 
}
/*void CHMSDiscountVoucherPopup::OnItemNameSetfocus(){
	
}*/
/*void CHMSDiscountVoucherPopup::OnItemNameKillfocus(){
	
}*/
long CHMSDiscountVoucherPopup::OnItemNameLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDiscountVoucherPopup::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDiscountVoucherPopup::OnAmountChange(){
	
} */
/*void CHMSDiscountVoucherPopup::OnAmountSetfocus(){
	
} */
/*void CHMSDiscountVoucherPopup::OnAmountKillfocus(){
	
} */
int CHMSDiscountVoucherPopup::OnAmountCheckValue(){
	return 0;
} 
void CHMSDiscountVoucherPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDiscountVoucherPopup::OnAddHMSDiscountVoucherPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDiscountVoucherPopup::OnEditHMSDiscountVoucherPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDiscountVoucherPopup::OnDeleteHMSDiscountVoucherPopup(){
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
 		OnCancelHMSDiscountVoucherPopup();
 	}
	return 0;
}
int CHMSDiscountVoucherPopup::OnSaveHMSDiscountVoucherPopup(){
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
 		//OnHMSDiscountVoucherPopupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDiscountVoucherPopup::OnCancelHMSDiscountVoucherPopup(){
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
int CHMSDiscountVoucherPopup::OnHMSDiscountVoucherPopupListLoadData(){
	return 0;
}
