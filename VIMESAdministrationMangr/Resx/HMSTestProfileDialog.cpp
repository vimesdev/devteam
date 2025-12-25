#include "HMSTestProfileDialog.h"
#include "MainFrm.h"
static long _OnProfileListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTestProfileDialog*)pWnd)->OnProfileListLoadData();
} 
static void _OnProfileListDblClickFnc(CWnd *pWnd){
	((CHMSTestProfileDialog*)pWnd)->OnProfileListDblClick();
} 
static void _OnProfileListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTestProfileDialog*)pWnd)->OnProfileListSelectChange(nOldItem, nNewItem);
} 
static int _OnProfileListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnProfileListDeleteItem();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTestProfileDialog*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CHMSTestProfileDialog*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTestProfileDialog*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnItemListDeleteItem();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTestProfileDialog* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSTestProfileDialog *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnGroupAddNew();
}*/
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTestProfileDialog* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSTestProfileDialog *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestProfileDialog *)pWnd)->OnQtyCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSTestProfileDialog *pVw = (CHMSTestProfileDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSTestProfileDialog *pVw = (CHMSTestProfileDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTestProfileDialog *pVw = (CHMSTestProfileDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTestProfileDialog *pVw = (CHMSTestProfileDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTestProfileDialog *pVw = (CHMSTestProfileDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTestProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnAddHMSTestProfileDialog();
} 
static int _OnEditHMSTestProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnEditHMSTestProfileDialog();
} 
static int _OnDeleteHMSTestProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnDeleteHMSTestProfileDialog();
} 
static int _OnSaveHMSTestProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnSaveHMSTestProfileDialog();
} 
static int _OnCancelHMSTestProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnCancelHMSTestProfileDialog();
} 
CHMSTestProfileDialog::CHMSTestProfileDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSTestProfileDialog::~CHMSTestProfileDialog(){
}
void CHMSTestProfileDialog::OnCreateComponents(){
	m_wndTestProfiles.Create(this, _T("Test Profiles"), 5, 5, 800, 570);
	m_wndProfileList.Create(this,5, 30, 305, 565); 
	m_wndItemList.Create(this,310, 30, 795, 505); 
	m_wndGroupLabel.Create(this, _T("Group"), 310, 510, 410, 535);
	m_wndGroup.Create(this,415, 510, 795, 535); 
	m_wndNameLabel.Create(this, _T("Name"), 310, 540, 410, 565);
	m_wndName.Create(this,415, 540, 695, 565); 
	m_wndQtyLabel.Create(this, _T("Qty"), 700, 540, 750, 565);
	m_wndQty.Create(this,755, 540, 795, 565); 
	m_wndAdd.Create(this, _T("&Add"), 380, 575, 460, 600);
	m_wndDelete.Create(this, _T("&Delete"), 465, 575, 545, 600);
	m_wndSave.Create(this, _T("&Save"), 550, 575, 630, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 635, 575, 715, 600);
	m_wndClose.Create(this, _T("&Close"), 720, 575, 800, 600);

}
void CHMSTestProfileDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(1024);
	m_wndQty.SetLimitText(16);
	m_wndQty.SetCheckValue(true);









}
void CHMSTestProfileDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProfileList.SetEvent(WE_SELCHANGE, _OnProfileListSelectChangeFnc);
	m_wndProfileList.SetEvent(WE_LOADDATA, _OnProfileListLoadDataFnc);
	m_wndProfileList.SetEvent(WE_DBLCLICK, _OnProfileListDblClickFnc);
	m_wndProfileList.AddEvent(1, _T("Delete"), _OnProfileListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSTestProfileDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);

}
void CHMSTestProfileDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTestProfileDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTestProfileDialog::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szNameKey.Empty();
	m_nQty=0;

}
int CHMSTestProfileDialog::SetMode(int nMode){
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
void CHMSTestProfileDialog::OnProfileListDblClick(){
	
} 
void CHMSTestProfileDialog::OnProfileListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTestProfileDialog::OnProfileListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTestProfileDialog::OnProfileListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndProfileList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProfileList.AddItems(
		rs.MoveNext();
	}
	m_wndProfileList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTestProfileDialog::OnItemListDblClick(){
	
} 
void CHMSTestProfileDialog::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTestProfileDialog::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTestProfileDialog::OnItemListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTestProfileDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTestProfileDialog::OnGroupSelendok(){
	 
}
/*void CHMSTestProfileDialog::OnGroupSetfocus(){
	
}*/
/*void CHMSTestProfileDialog::OnGroupKillfocus(){
	
}*/
long CHMSTestProfileDialog::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupKey
};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTestProfileDialog::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTestProfileDialog::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTestProfileDialog::OnNameSelendok(){
	 
}
/*void CHMSTestProfileDialog::OnNameSetfocus(){
	
}*/
/*void CHMSTestProfileDialog::OnNameKillfocus(){
	
}*/
long CHMSTestProfileDialog::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNameKey
};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTestProfileDialog::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTestProfileDialog::OnQtyChange(){
	
} */
/*void CHMSTestProfileDialog::OnQtySetfocus(){
	
} */
/*void CHMSTestProfileDialog::OnQtyKillfocus(){
	
} */
int CHMSTestProfileDialog::OnQtyCheckValue(){
	return 0;
} 
void CHMSTestProfileDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTestProfileDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTestProfileDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTestProfileDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTestProfileDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTestProfileDialog::OnAddHMSTestProfileDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTestProfileDialog::OnEditHMSTestProfileDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTestProfileDialog::OnDeleteHMSTestProfileDialog(){
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
 		OnCancelHMSTestProfileDialog();
 	}
	return 0;
}
int CHMSTestProfileDialog::OnSaveHMSTestProfileDialog(){
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
 		//OnHMSTestProfileDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTestProfileDialog::OnCancelHMSTestProfileDialog(){
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
int CHMSTestProfileDialog::OnHMSTestProfileDialogListLoadData(){
	return 0;
}
