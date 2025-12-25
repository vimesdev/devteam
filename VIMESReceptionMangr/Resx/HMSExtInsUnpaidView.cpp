#include "HMSExtInsUnpaidView.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExtInsUnpaidView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExtInsUnpaidView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidView*)pWnd)->OnListDeleteItem();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExtInsUnpaidView* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidView *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidView *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidView *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSExtInsUnpaidView *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidView *)pWnd)->OnGroupAddNew();
}*/
static void _OnFeeItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExtInsUnpaidView* )pWnd)->OnFeeItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeItemSelendokFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidView *)pWnd)->OnFeeItemSelendok();
}
/*static void _OnFeeItemSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidView *)pWnd)->OnFeeItemKillfocus();
}*/
/*static void _OnFeeItemKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidView *)pWnd)->OnFeeItemKillfocus();
}*/
static long _OnFeeItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSExtInsUnpaidView *)pWnd)->OnFeeItemLoadData();
}
/*static void _OnFeeItemAddNewFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidView *)pWnd)->OnFeeItemAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSExtInsUnpaidView *pVw = (CHMSExtInsUnpaidView *)pWnd;
	pVw->OnAddSelect();
} 
static int _OnAddHMSExtInsUnpaidViewFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidView*)pWnd)->OnAddHMSExtInsUnpaidView();
} 
static int _OnEditHMSExtInsUnpaidViewFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidView*)pWnd)->OnEditHMSExtInsUnpaidView();
} 
static int _OnDeleteHMSExtInsUnpaidViewFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidView*)pWnd)->OnDeleteHMSExtInsUnpaidView();
} 
static int _OnSaveHMSExtInsUnpaidViewFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidView*)pWnd)->OnSaveHMSExtInsUnpaidView();
} 
static int _OnCancelHMSExtInsUnpaidViewFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidView*)pWnd)->OnCancelHMSExtInsUnpaidView();
} 
CHMSExtInsUnpaidView::CHMSExtInsUnpaidView(){

	m_nDlgWidth = 505;
	m_nDlgHeight = 525;
	SetDefaultValues();
}
CHMSExtInsUnpaidView::~CHMSExtInsUnpaidView(){
}
void CHMSExtInsUnpaidView::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 495, 490); 
	m_wndGroupLabel.Create(this, _T("Group"), 5, 495, 55, 520);
	m_wndGroup.Create(this,60, 495, 145, 520); 
	m_wndFeeItemLabel.Create(this, _T("Fee Item"), 150, 495, 230, 520);
	m_wndFeeItem.Create(this,235, 495, 425, 520); 
	m_wndAdd.Create(this, _T("&Add"), 430, 495, 495, 520);

}
void CHMSExtInsUnpaidView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);
	m_wndFeeItem.SetCheckValue(true);
	m_wndFeeItem.LimitText(35);


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Item Id"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 100);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndFeeItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFeeItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSExtInsUnpaidView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndFeeItem.SetEvent(WE_SELENDOK, _OnFeeItemSelendokFnc);
	//m_wndFeeItem.SetEvent(WE_SETFOCUS, _OnFeeItemSetfocusFnc);
	//m_wndFeeItem.SetEvent(WE_KILLFOCUS, _OnFeeItemKillfocusFnc);
	m_wndFeeItem.SetEvent(WE_SELCHANGE, _OnFeeItemSelectChangeFnc);
	m_wndFeeItem.SetEvent(WE_LOADDATA, _OnFeeItemLoadDataFnc);
	//m_wndFeeItem.SetEvent(WE_ADDNEW, _OnFeeItemAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExtInsUnpaidViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExtInsUnpaidViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExtInsUnpaidViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExtInsUnpaidViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExtInsUnpaidViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSExtInsUnpaidView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndFeeItem.GetDlgCtrlID(), m_szFeeItemKey);

}
void CHMSExtInsUnpaidView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("FeeItem")] =  m_szFeeItemKey;
	}
	else
	{
			
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("FeeItem")].GetValue(m_szFeeItemKey);
	}

}
void CHMSExtInsUnpaidView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExtInsUnpaidView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExtInsUnpaidView::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szFeeItemKey.Empty();

}
int CHMSExtInsUnpaidView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CHMSExtInsUnpaidView::OnListDblClick(){
	
} 
void CHMSExtInsUnpaidView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExtInsUnpaidView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExtInsUnpaidView::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Idx")), 
			rs.GetValue(_T("ItemId")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("UnitPrice")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSExtInsUnpaidView::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtInsUnpaidView::OnGroupSelendok(){
	 
}
/*void CHMSExtInsUnpaidView::OnGroupSetfocus(){
	
}*/
/*void CHMSExtInsUnpaidView::OnGroupKillfocus(){
	
}*/
long CHMSExtInsUnpaidView::OnGroupLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExtInsUnpaidView::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExtInsUnpaidView::OnFeeItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtInsUnpaidView::OnFeeItemSelendok(){
	 
}
/*void CHMSExtInsUnpaidView::OnFeeItemSetfocus(){
	
}*/
/*void CHMSExtInsUnpaidView::OnFeeItemKillfocus(){
	
}*/
long CHMSExtInsUnpaidView::OnFeeItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFeeItem.IsSearchKey() && !m_szFeeItemKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFeeItemKey
};
	m_wndFeeItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExtInsUnpaidView::OnFeeItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExtInsUnpaidView::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExtInsUnpaidView::OnAddHMSExtInsUnpaidView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExtInsUnpaidView::OnEditHMSExtInsUnpaidView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExtInsUnpaidView::OnDeleteHMSExtInsUnpaidView(){
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
 		OnCancelHMSExtInsUnpaidView();
 	}
	return 0;
}
int CHMSExtInsUnpaidView::OnSaveHMSExtInsUnpaidView(){
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
 		//OnHMSExtInsUnpaidViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExtInsUnpaidView::OnCancelHMSExtInsUnpaidView(){
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
int CHMSExtInsUnpaidView::OnHMSExtInsUnpaidViewListLoadData(){
	return 0;
}
