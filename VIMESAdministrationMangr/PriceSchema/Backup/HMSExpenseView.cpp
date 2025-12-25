#include "HMSExpenseView.h"
#include "..\MainFrm.h"
#include "HMSExpenseSetupDialog.h"
/*static void _OnTextChangeFnc(CWnd *pWnd){
	((CHMSExpenseView *)pWnd)->OnTextChange();
} */
/*static void _OnTextSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseView *)pWnd)->OnTextSetfocus();} */ 
/*static void _OnTextKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseView *)pWnd)->OnTextKillfocus();
} */
static int _OnTextCheckValueFnc(CWnd *pWnd){
	return ((CHMSExpenseView *)pWnd)->OnTextCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExpenseView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExpenseView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExpenseView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExpenseView*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSExpenseView *pVw = (CHMSExpenseView *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSExpenseView *pVw = (CHMSExpenseView *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSExpenseView *pVw = (CHMSExpenseView *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExpenseView* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSExpenseView *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseView *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseView *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExpenseView *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSExpenseView *)pWnd)->OnTypeAddNew();
}*/
static int _OnAddHMSExpenseViewFnc(CWnd *pWnd){
	 return ((CHMSExpenseView*)pWnd)->OnAddHMSExpenseView();
} 
static int _OnEditHMSExpenseViewFnc(CWnd *pWnd){
	 return ((CHMSExpenseView*)pWnd)->OnEditHMSExpenseView();
} 
static int _OnDeleteHMSExpenseViewFnc(CWnd *pWnd){
	 return ((CHMSExpenseView*)pWnd)->OnDeleteHMSExpenseView();
} 
static int _OnSaveHMSExpenseViewFnc(CWnd *pWnd){
	 return ((CHMSExpenseView*)pWnd)->OnSaveHMSExpenseView();
} 
static int _OnCancelHMSExpenseViewFnc(CWnd *pWnd){
	 return ((CHMSExpenseView*)pWnd)->OnCancelHMSExpenseView();
} 
CHMSExpenseView::CHMSExpenseView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSExpenseView::~CHMSExpenseView(){
}
void CHMSExpenseView::OnCreateComponents(){
	m_wndFindLabel.Create(this, _T("Find"), 5, 5, 85, 30);
	m_wndText.Create(this,90, 5, 405, 30); 
	m_wndList.Create(this,5, 65, 405, 315); 
	m_wndAdd.Create(this, _T("Add"), 155, 319, 235, 344);
	m_wndEdit.Create(this, _T("Edit"), 240, 319, 320, 344);
	m_wndDelete.Create(this, _T("Delete"), 325, 319, 405, 344);
	m_wndTypeLabel.Create(this, _T("Type"), 5, 35, 85, 60);
	m_wndType.Create(this,90, 35, 405, 60); 

}
void CHMSExpenseView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndText.SetLimitText(35);
	m_wndText.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);


	m_wndList.InsertColumn(0, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(1, _T("Type"), CFMT_TEXT, 200);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSExpenseView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndText.SetEvent(WE_CHANGE, _OnTextChangeFnc);
	//m_wndText.SetEvent(WE_SETFOCUS, _OnTextSetfocusFnc);
	//m_wndText.SetEvent(WE_KILLFOCUS, _OnTextKillfocusFnc);
	m_wndText.SetEvent(WE_CHECKVALUE, _OnTextCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExpenseViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExpenseViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExpenseViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExpenseViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExpenseViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSExpenseView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndText.GetDlgCtrlID(), m_szText);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);

}
void CHMSExpenseView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Text")] =  m_szText;
	m_jData[_T("Type")] =  m_szTypeKey;
	}
	else
	{
			
	m_jData[_T("Text")].GetValue(m_szText);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	}

}
void CHMSExpenseView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExpenseView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExpenseView::SetDefaultValues(){

	m_szText.Empty();
	m_szTypeKey.Empty();

}
int CHMSExpenseView::SetMode(int nMode){
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
/*void CHMSExpenseView::OnTextChange(){
	
} */
/*void CHMSExpenseView::OnTextSetfocus(){
	
} */
/*void CHMSExpenseView::OnTextKillfocus(){
	
} */
int CHMSExpenseView::OnTextCheckValue(){
	return 0;
} 
void CHMSExpenseView::OnListDblClick(){
	
} 
void CHMSExpenseView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExpenseView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExpenseView::OnListLoadData(){
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
			rs.GetValue(_T("Type")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSExpenseView::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExpenseView::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExpenseView::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExpenseView::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExpenseView::OnTypeSelendok(){
	 
}
/*void CHMSExpenseView::OnTypeSetfocus(){
	
}*/
/*void CHMSExpenseView::OnTypeKillfocus(){
	
}*/
long CHMSExpenseView::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExpenseView::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSExpenseView::OnAddHMSExpenseView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExpenseView::OnEditHMSExpenseView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExpenseView::OnDeleteHMSExpenseView(){
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
 		OnCancelHMSExpenseView();
 	}
	return 0;
}
int CHMSExpenseView::OnSaveHMSExpenseView(){
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
 		//OnHMSExpenseViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExpenseView::OnCancelHMSExpenseView(){
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
int CHMSExpenseView::OnHMSExpenseViewListLoadData(){
	return 0;
}
