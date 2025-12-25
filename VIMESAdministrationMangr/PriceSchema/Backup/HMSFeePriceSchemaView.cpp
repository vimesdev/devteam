#include "HMSFeePriceSchemaView.h"
#include "..\MainFrm.h"
/*static void _OnFindChangeFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaView *)pWnd)->OnFindChange();
} */
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaView *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaView *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaView *)pWnd)->OnFindCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeePriceSchemaView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaView*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaView *pVw = (CHMSFeePriceSchemaView *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaView *pVw = (CHMSFeePriceSchemaView *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaView *pVw = (CHMSFeePriceSchemaView *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnPriceSchemaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeePriceSchemaView* )pWnd)->OnPriceSchemaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPriceSchemaSelendokFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaView *)pWnd)->OnPriceSchemaSelendok();
}
/*static void _OnPriceSchemaSetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaView *)pWnd)->OnPriceSchemaKillfocus();
}*/
/*static void _OnPriceSchemaKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaView *)pWnd)->OnPriceSchemaKillfocus();
}*/
static long _OnPriceSchemaLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaView *)pWnd)->OnPriceSchemaLoadData();
}
/*static void _OnPriceSchemaAddNewFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaView *)pWnd)->OnPriceSchemaAddNew();
}*/
static int _OnAddHMSFeePriceSchemaViewFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaView*)pWnd)->OnAddHMSFeePriceSchemaView();
} 
static int _OnEditHMSFeePriceSchemaViewFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaView*)pWnd)->OnEditHMSFeePriceSchemaView();
} 
static int _OnDeleteHMSFeePriceSchemaViewFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaView*)pWnd)->OnDeleteHMSFeePriceSchemaView();
} 
static int _OnSaveHMSFeePriceSchemaViewFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaView*)pWnd)->OnSaveHMSFeePriceSchemaView();
} 
static int _OnCancelHMSFeePriceSchemaViewFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaView*)pWnd)->OnCancelHMSFeePriceSchemaView();
} 
CHMSFeePriceSchemaView::CHMSFeePriceSchemaView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSFeePriceSchemaView::~CHMSFeePriceSchemaView(){
}
void CHMSFeePriceSchemaView::OnCreateComponents(){
	m_wndFindLabel.Create(this, _T("Find"), 5, 5, 85, 30);
	m_wndFind.Create(this,90, 5, 405, 30); 
	m_wndList.Create(this,5, 65, 405, 315); 
	m_wndAdd.Create(this, _T("Add"), 155, 319, 235, 344);
	m_wndEdit.Create(this, _T("Edit"), 240, 319, 320, 344);
	m_wndDelete.Create(this, _T("Delete"), 325, 319, 405, 344);
	m_wndPriceSchemaLabel.Create(this, _T("Price Schema"), 5, 35, 85, 60);
	m_wndPriceSchema.Create(this,90, 35, 405, 60);

}
void CHMSFeePriceSchemaView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFind.SetLimitText(35);
	m_wndFind.SetCheckValue(true);
	m_wndPriceSchema.SetCheckValue(true);
	m_wndPriceSchema.LimitText(35);


	m_wndList.InsertColumn(0, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(1, _T("Price Schema"), CFMT_TEXT, 200);


	m_wndPriceSchema.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPriceSchema.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSFeePriceSchemaView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndPriceSchema.SetEvent(WE_SELENDOK, _OnPriceSchemaSelendokFnc);
	//m_wndPriceSchema.SetEvent(WE_SETFOCUS, _OnPriceSchemaSetfocusFnc);
	//m_wndPriceSchema.SetEvent(WE_KILLFOCUS, _OnPriceSchemaKillfocusFnc);
	m_wndPriceSchema.SetEvent(WE_SELCHANGE, _OnPriceSchemaSelectChangeFnc);
	m_wndPriceSchema.SetEvent(WE_LOADDATA, _OnPriceSchemaLoadDataFnc);
	//m_wndPriceSchema.SetEvent(WE_ADDNEW, _OnPriceSchemaAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSFeePriceSchemaViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSFeePriceSchemaViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSFeePriceSchemaViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSFeePriceSchemaViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSFeePriceSchemaViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSFeePriceSchemaView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_TextEx(pDX, m_wndPriceSchema.GetDlgCtrlID(), m_szPriceSchemaKey);

}
void CHMSFeePriceSchemaView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Find")] =  m_szFind;
	m_jData[_T("PriceSchema")] =  m_szPriceSchemaKey;
	}
	else
	{
			
	m_jData[_T("Find")].GetValue(m_szFind);
	m_jData[_T("PriceSchema")].GetValue(m_szPriceSchemaKey);
	}

}
void CHMSFeePriceSchemaView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFeePriceSchemaView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeePriceSchemaView::SetDefaultValues(){

	m_szFind.Empty();
	m_szPriceSchemaKey.Empty();

}
int CHMSFeePriceSchemaView::SetMode(int nMode){
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
/*void CHMSFeePriceSchemaView::OnFindChange(){
	
} */
/*void CHMSFeePriceSchemaView::OnFindSetfocus(){
	
} */
/*void CHMSFeePriceSchemaView::OnFindKillfocus(){
	
} */
int CHMSFeePriceSchemaView::OnFindCheckValue(){
	return 0;
} 
void CHMSFeePriceSchemaView::OnListDblClick(){
	
} 
void CHMSFeePriceSchemaView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeePriceSchemaView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeePriceSchemaView::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("PriceSchema")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSFeePriceSchemaView::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaView::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaView::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaView::OnPriceSchemaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaView::OnPriceSchemaSelendok(){
	 
}
/*void CHMSFeePriceSchemaView::OnPriceSchemaSetfocus(){
	
}*/
/*void CHMSFeePriceSchemaView::OnPriceSchemaKillfocus(){
	
}*/
long CHMSFeePriceSchemaView::OnPriceSchemaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPriceSchema.IsSearchKey() && !m_szPriceSchemaKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPriceSchemaKey
};
	m_wndPriceSchema.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPriceSchema.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFeePriceSchemaView::OnPriceSchemaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSFeePriceSchemaView::OnAddHMSFeePriceSchemaView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeePriceSchemaView::OnEditHMSFeePriceSchemaView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeePriceSchemaView::OnDeleteHMSFeePriceSchemaView(){
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
 		OnCancelHMSFeePriceSchemaView();
 	}
	return 0;
}
int CHMSFeePriceSchemaView::OnSaveHMSFeePriceSchemaView(){
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
 		//OnHMSFeePriceSchemaViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeePriceSchemaView::OnCancelHMSFeePriceSchemaView(){
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
int CHMSFeePriceSchemaView::OnHMSFeePriceSchemaViewListLoadData(){
	return 0;
}
