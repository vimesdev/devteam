#include "FASourceView.h"
#include "MainFrm.h"
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFASourceView* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CFASourceView *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnSourceAddNew();
}*/
static void _OnChapterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFASourceView* )pWnd)->OnChapterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChapterSelendokFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnChapterSelendok();
}
/*static void _OnChapterSetfocusFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnChapterKillfocus();
}*/
/*static void _OnChapterKillfocusFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnChapterKillfocus();
}*/
static long _OnChapterLoadDataFnc(CWnd *pWnd){
	return ((CFASourceView *)pWnd)->OnChapterLoadData();
}
/*static void _OnChapterAddNewFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnChapterAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFASourceView* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CFASourceView *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnItemAddNew();
}*/
static void _OnSubItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFASourceView* )pWnd)->OnSubItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSubItemSelendokFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnSubItemSelendok();
}
/*static void _OnSubItemSetfocusFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnSubItemKillfocus();
}*/
/*static void _OnSubItemKillfocusFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnSubItemKillfocus();
}*/
static long _OnSubItemLoadDataFnc(CWnd *pWnd){
	return ((CFASourceView *)pWnd)->OnSubItemLoadData();
}
/*static void _OnSubItemAddNewFnc(CWnd *pWnd){
	((CFASourceView *)pWnd)->OnSubItemAddNew();
}*/
static int _OnAddFASourceViewFnc(CWnd *pWnd){
	 return ((CFASourceView*)pWnd)->OnAddFASourceView();
} 
static int _OnEditFASourceViewFnc(CWnd *pWnd){
	 return ((CFASourceView*)pWnd)->OnEditFASourceView();
} 
static int _OnDeleteFASourceViewFnc(CWnd *pWnd){
	 return ((CFASourceView*)pWnd)->OnDeleteFASourceView();
} 
static int _OnSaveFASourceViewFnc(CWnd *pWnd){
	 return ((CFASourceView*)pWnd)->OnSaveFASourceView();
} 
static int _OnCancelFASourceViewFnc(CWnd *pWnd){
	 return ((CFASourceView*)pWnd)->OnCancelFASourceView();
} 
CFASourceView::CFASourceView(){

	m_nDlgWidth = 305;
	m_nDlgHeight = 165;
	SetDefaultValues();
}
CFASourceView::~CFASourceView(){
}
void CFASourceView::OnCreateComponents(){
	m_wndFASOURCE.Create(this, _T("FA_SOURCE"), 5, 5, 260, 155);
	m_wndSourceLabel.Create(this, _T("Source"), 10, 30, 130, 55);
	m_wndSource.Create(this,135, 30, 255, 56); 
	m_wndChapterLabel.Create(this, _T("Chapter"), 10, 61, 130, 86);
	m_wndChapter.Create(this,135, 61, 255, 87); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 92, 130, 117);
	m_wndItem.Create(this,135, 92, 255, 118); 
	m_wndSubItemLabel.Create(this, _T("Sub Item"), 10, 123, 130, 148);
	m_wndSubItem.Create(this,135, 123, 255, 149); 

}
void CFASourceView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(35);
	m_wndChapter.SetCheckValue(true);
	m_wndChapter.LimitText(35);
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(35);
	m_wndSubItem.SetCheckValue(true);
	m_wndSubItem.LimitText(35);


	m_wndSource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndChapter.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndChapter.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSubItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSubItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFASourceView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndChapter.SetEvent(WE_SELENDOK, _OnChapterSelendokFnc);
	//m_wndChapter.SetEvent(WE_SETFOCUS, _OnChapterSetfocusFnc);
	//m_wndChapter.SetEvent(WE_KILLFOCUS, _OnChapterKillfocusFnc);
	m_wndChapter.SetEvent(WE_SELCHANGE, _OnChapterSelectChangeFnc);
	m_wndChapter.SetEvent(WE_LOADDATA, _OnChapterLoadDataFnc);
	//m_wndChapter.SetEvent(WE_ADDNEW, _OnChapterAddNewFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	m_wndSubItem.SetEvent(WE_SELENDOK, _OnSubItemSelendokFnc);
	//m_wndSubItem.SetEvent(WE_SETFOCUS, _OnSubItemSetfocusFnc);
	//m_wndSubItem.SetEvent(WE_KILLFOCUS, _OnSubItemKillfocusFnc);
	m_wndSubItem.SetEvent(WE_SELCHANGE, _OnSubItemSelectChangeFnc);
	m_wndSubItem.SetEvent(WE_LOADDATA, _OnSubItemLoadDataFnc);
	//m_wndSubItem.SetEvent(WE_ADDNEW, _OnSubItemAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFASourceViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFASourceViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFASourceViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFASourceViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFASourceViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFASourceView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_TextEx(pDX, m_wndChapter.GetDlgCtrlID(), m_szChapterKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_TextEx(pDX, m_wndSubItem.GetDlgCtrlID(), m_szSubItemKey);

}
void CFASourceView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFASourceView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFASourceView::SetDefaultValues(){

	m_szSourceKey.Empty();
	m_szChapterKey.Empty();
	m_szItemKey.Empty();
	m_szSubItemKey.Empty();

}
int CFASourceView::SetMode(int nMode){
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
void CFASourceView::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFASourceView::OnSourceSelendok(){
	 
}
/*void CFASourceView::OnSourceSetfocus(){
	
}*/
/*void CFASourceView::OnSourceKillfocus(){
	
}*/
long CFASourceView::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSourceKey
};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFASourceView::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFASourceView::OnChapterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFASourceView::OnChapterSelendok(){
	 
}
/*void CFASourceView::OnChapterSetfocus(){
	
}*/
/*void CFASourceView::OnChapterKillfocus(){
	
}*/
long CFASourceView::OnChapterLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChapter.IsSearchKey() && !m_szChapterKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szChapterKey
};
	m_wndChapter.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChapter.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFASourceView::OnChapterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFASourceView::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFASourceView::OnItemSelendok(){
	 
}
/*void CFASourceView::OnItemSetfocus(){
	
}*/
/*void CFASourceView::OnItemKillfocus(){
	
}*/
long CFASourceView::OnItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemKey
};
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFASourceView::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFASourceView::OnSubItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFASourceView::OnSubItemSelendok(){
	 
}
/*void CFASourceView::OnSubItemSetfocus(){
	
}*/
/*void CFASourceView::OnSubItemKillfocus(){
	
}*/
long CFASourceView::OnSubItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSubItem.IsSearchKey() && !m_szSubItemKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSubItemKey
};
	m_wndSubItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSubItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFASourceView::OnSubItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CFASourceView::OnAddFASourceView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFASourceView::OnEditFASourceView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFASourceView::OnDeleteFASourceView(){
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
 		OnCancelFASourceView();
 	}
	return 0;
}
int CFASourceView::OnSaveFASourceView(){
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
 		//OnFASourceViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFASourceView::OnCancelFASourceView(){
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
int CFASourceView::OnFASourceViewListLoadData(){
	return 0;
}
