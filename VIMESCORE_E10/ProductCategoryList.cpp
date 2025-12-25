#include "ProductCategoryList.h"
//#include "stdafx.h"
#include "MainFrame_E10.h"
#include "ProductCategoryDialog.h"
#include ".\productcategorylist.h"

HTREEITEM FindItem(const CString& name, CTreeCtrl& tree, HTREEITEM hRoot)  
{  
    // check whether the current item is the searched one  
	CString szSearchName = name;
	CString text;
	StringLower(tree.GetItemText(hRoot), text);
	StringLower(name, szSearchName);
		
	if (text.Find(szSearchName) == 0)  
        return hRoot;   
  
    // get a handle to the first child item  
    HTREEITEM hSub = tree.GetChildItem(hRoot);  
    // iterate as long a new item is found  
    while (hSub)  
    {  
        // check the children of the current item  
        HTREEITEM hFound = FindItem(szSearchName, tree, hSub);  
        if (hFound)  
            return hFound;   
  
        // get the next sibling of the current item  
        hSub = tree.GetNextSiblingItem(hSub);  
    }   
  
    // return NULL if nothing was found  
    return NULL;  
}  


CString TrimID(CString szID){
	CString szRet;
	szRet = szID;
	for (int i = szID.GetLength()-1; i>=0; i--){
		if(szID[i] != _T('0')){
			szRet = szID.Left(i+1);
			return szRet;
		}
	}
	return szRet;
}

static int _OnSearchSelectFnc(CWnd *pWnd){
	CProductCategoryList *pVw = (CProductCategoryList *)pWnd;
	return pVw->OnSearchSelect();
}

static int _OnAddSelectFnc(CWnd *pWnd){
	CProductCategoryList *pVw = (CProductCategoryList *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CProductCategoryList *pVw = (CProductCategoryList *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CProductCategoryList *pVw = (CProductCategoryList *)pWnd;
	return pVw->OnDeleteSelect();
} 

/*static int _OnSearchNameChangeFnc(CWnd *pWnd){
	return ((CProductCategoryList *)pWnd)->OnSearchNameChange();
} */
/*static int _OnSearchNameSetfocusFnc(CWnd *pWnd){
	return ((CProductCategoryList *)pWnd)->OnSearchNameKillfocus();} */ 
/*static int _OnSearchNameKillfocusFnc(CWnd *pWnd){
	return ((CProductCategoryList *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CProductCategoryList *)pWnd)->OnSearchNameCheckValue();
}
static int _OnAddProductCategoryListFnc(CWnd *pWnd){
	 return ((CProductCategoryList*)pWnd)->OnAddProductCategoryList();
} 
static int _OnEditProductCategoryListFnc(CWnd *pWnd){
	 return ((CProductCategoryList*)pWnd)->OnEditProductCategoryList();
} 
static int _OnDeleteProductCategoryListFnc(CWnd *pWnd){
	 return ((CProductCategoryList*)pWnd)->OnDeleteProductCategoryList();
} 



static void _OnGroupTreeSelChangeFnc(CWnd *pWnd, HTREEITEM oldhItem, HTREEITEM newhItem){
	((CProductCategoryList*)pWnd->GetParent())->OnGroupTreeSelChange(oldhItem, newhItem);
} 


static int _OnReloadProductCategoryListFnc(CWnd *pWnd){
	return ((CProductCategoryList*)pWnd)->OnListLoadData();
} 
static int _OnReloadExpandFnc(CWnd *pWnd){
	return ((CProductCategoryList*)pWnd)->OnListLoadData(TVE_EXPAND);
} 
static int _OnReloadCollapseFnc(CWnd *pWnd){
	return ((CProductCategoryList*)pWnd)->OnListLoadData(TVE_COLLAPSE);
} 
static int _OnReloadCollapseResetFnc(CWnd *pWnd){
	return ((CProductCategoryList*)pWnd)->OnListLoadData(TVE_COLLAPSERESET);
} 
static int _OnReloadToggleFnc(CWnd *pWnd){
	return ((CProductCategoryList*)pWnd)->OnListLoadData(TVE_TOGGLE);
} 


CProductCategoryList::CProductCategoryList(){

	m_nDlgWidth = 820;
	m_nDlgHeight = 630;
	SetDefaultValues();

}
CProductCategoryList::~CProductCategoryList(){
	
}
void CProductCategoryList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndGroupInformation.Create(this, _T("Category Information"), 5, 65, 810, 590);
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 10, 30, 110, 55);
	m_wndSearchName.Create(this,115, 30, 415, 55); 
	m_wndSearch.Create(this, _T("@"), 420, 30, 445, 55);
//	m_wndList.Create(this,10, 90, 805, 580); 
	m_wndGroupTree.Create(WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER | TVS_HASBUTTONS | TVS_LINESATROOT | TVS_HASLINES  | TVS_DISABLEDRAGDROP,
		CRect(10, 90, 805, 580), this, NULL);
	SetWindowFont(&m_wndGroupTree, GetFaceName(), GetFaceSize());

	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
}
void CProductCategoryList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	//m_wndID.SetLimitText(11);
	//m_wndID.SetReadOnly(true);
	////m_wndID.ModifyStyle(0, ES_UPPERCASE);
	//m_wndName.SetLimitText(81);
	//m_wndName.SetCheckValue(true);
	m_wndSearchName.SetLimitText(35);
	/*m_wndName.SetInitCap(2);*/
	m_wndSearchName.SetCheckValue(true);
	m_wndSearchName.SetNotEmpty(false);
//	m_wndList.SetWindowText(_T("Group Items List"));
//	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
//	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);
	
	m_product_categoryTbl.SetTableName(_T("m_product_category"));
	m_product_categoryTbl.AddField(_T("mpc_createdby"), dfText, 15); 
	m_product_categoryTbl.AddField(_T("mpc_updatedby"), dfText, 15); 
	m_product_categoryTbl.AddField(_T("mpc_product_category_id"), dfText, 15); 
	m_product_categoryTbl.AddField(_T("mpc_name"), dfText, 81); 
	m_product_categoryTbl.AddField(_T("mpc_type_id"), dfInteger); 
	m_product_categoryTbl.AddField(_T("mpc_parent_id"), dfText, 15); 
	m_product_categoryTbl.AddField(_T("mpc_level"), dfInteger); 
	m_product_categoryTbl.AddField(_T("mpc_org_id"), dfText, 3); 

}
void CProductCategoryList::OnSetWindowEvents(){
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndGroupTree.SetSelChangeCallback(_OnGroupTreeSelChangeFnc);
	SetWindowText(_T("Category List"));
	AddEvent(1, _T("Expand"), _OnReloadExpandFnc, 0, VK_F5);
	AddEvent(0, _T("-"));
	AddEvent(2, _T("Collapse"), _OnReloadCollapseFnc);
	/*AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndGroupInformation, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndGroupTree, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndAdd, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndEdit, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndDelete, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);*/
	
}
void CProductCategoryList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CProductCategoryList::GetDataToScreen(){
}
void CProductCategoryList::GetScreenToData(){
}
void CProductCategoryList::SetDefaultValues(){

	m_nID = 0;
	m_szName.Empty();
	m_szSearchName.Empty();

}

int CProductCategoryList::OnSearchSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	Refresh();
	BOOL bReturn = false;
	HTREEITEM hFound = m_wndGroupTree.FindNextItem(&m_wndGroupTree, m_wndGroupTree.GetRootItem(), m_wndGroupTree.GetSelectedItem(), m_szSearchName, bReturn);
	if (hFound)
	{
		m_wndGroupTree.Select(hFound, TVGN_CARET);
		m_wndGroupTree.SetItemColor(hFound, RGB(192, 192, 192));
	}
	//HTREEITEM root = m_wndGroupTree.GetRootItem();  
 //  while(root != NULL)  
 //  {  
	//   HTREEITEM hFound = m_wndGroupTree.FindItem2(&m_wndGroupTree, root, m_szSearchName);  
 //     if (hFound)  
	//  {
	//	  //m_wndGroupTree.SelectItem(hFound);
	//	  m_wndGroupTree.Select(hFound,TVGN_CARET);
	//	 //break;
	//  }
 // 
 //     root = m_wndGroupTree.GetNextSiblingItem(root);  
 //  }  
	m_wndGroupTree.SetFocus();
	return 0;
}

int CProductCategoryList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddProductCategoryList();
	 return 0;
} 
int CProductCategoryList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditProductCategoryList();
	 return 0;
} 
int CProductCategoryList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteProductCategoryList();
	 return 0;
} 
 
int CProductCategoryList::OnListLoadData(UINT nFlag){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	int nCount = 0;
	szWhere.Empty();
	if(!m_szSearchName.IsEmpty()){
		szWhere.Format(_T(" and lower(mpc_name) like lower(chr(37)||'%s'||chr(37)) "),m_szSearchName);
	}

	CString szID, szName, szParentID;
	HTREEITEM tvi[6], hItem, oldhItem = NULL;

	if(GetMode() == VM_EDIT){
		oldhItem = m_wndGroupTree.GetSelectedItem();
	}
	m_wndGroupTree.DeleteAllItems();

	szSQL.Format(_T(" select mpc_product_category_id, mpc_parent_id, mpc_level, mpc_code, mpc_name") \
_T(" from m_product_category") \
_T(" start with mpc_parent_id=0 ") \
_T(" connect by prior mpc_product_category_id=mpc_parent_id  and mpc_org_id in('GL','%s') %s "), pMF->GetModuleID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	/*
	CString szId, szRefId =_T("0"), szParentId;
	hItem = NULL;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("mpc_product_category_id"), szId);
		rs.GetValue(_T("mpc_parent_id"), szParentId);
		_tprintf(_T("\nszId: %s|szParentId: %s|szRefId: %s\n"), szId, szParentId, szRefId);
		while (szParentId != szRefId)
		{
			hItem = m_wndGroupTree.GetParentItem(hItem);
			szRefId = m_wndGroupTree.GetItemID(hItem);
		}
		hItem = m_wndGroupTree.InsertItem(rs.GetValue(_T("mpc_name")), hItem);
		m_wndGroupTree.SetItemID(hItem, szId);
		szRefId = szId;
		rs.MoveNext();
	}
	return rs.GetRecordCount();
	*/
//Notice(szSQL);
_tprintf(_T("\r\n%s"), szSQL);

	m_wndGroupTree.SetItemHeight(22);
	int i=0;
	tvi[0] = 	TVI_ROOT;

	while(!rs.IsEOF()){
		rs.GetValue(_T("mpc_code"), szID);
		CString tmpStr;
		rs.GetValue(_T("mpc_name"), szName);
		rs.GetValue(_T("mpc_level"), i);
		tvi[0] = TVI_ROOT;
		rs.GetValue(_T("mpc_parent_id"), szParentID);
		szParentID.Trim();
		//_tprintf(_T("\nszId: %s|szParentId: %s|szName: %s\n"), szID, szParentID, szName);
		hItem = m_wndGroupTree.InsertItem(szID+_T(". ")+szName, tvi[i]);
		tvi[i+1] = hItem;
		if(i == 1)
		m_wndGroupTree.SetItemBold(hItem, true);
		rs.GetValue(_T("mpc_product_category_id"), szID);
		m_wndGroupTree.SetItemID(hItem, szID);

		rs.MoveNext();
	}
	
	m_wndGroupTree.ExpandItem(TVI_ROOT, nFlag);
	return nCount;
}


/*int CProductCategoryList::OnSearchNameChange(){
	return 0;
} */
/*int CProductCategoryList::OnSearchNameSetfocus(){
	return 0;
} */
/*int CProductCategoryList::OnSearchNameKillfocus(){
	return 0;
} */



int CProductCategoryList::OnSearchNameCheckValue(){
	//OnListLoadData();
	UpdateData(true);
	HTREEITEM root = m_wndGroupTree.GetRootItem();  
   while(root != NULL)  
   {  
      HTREEITEM hFound = m_wndGroupTree.FindItem(m_szSearchName);  
      if (hFound)  
	  {
		  //m_wndGroupTree.SelectItem(hFound);
		  m_wndGroupTree.Select(hFound,TVGN_CARET);
		  return 0;
	  }
  
      root = m_wndGroupTree.GetNextSiblingItem(root);  
   }  
   m_wndGroupTree.SetFocus();
	return 1;
}

int CProductCategoryList::OnAddProductCategoryList(){ 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if(m_nLevel >=4)
		return 0;
 	CProductCategoryDialog dlg(this, VM_ADD);
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	return 0; 
 
} 
int CProductCategoryList::OnEditProductCategoryList(){ 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	CProductCategoryDialog dlg(this, VM_EDIT);
	dlg.m_nID = m_nID;

	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	return 0;   
} 
int CProductCategoryList::OnDeleteProductCategoryList(){ 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL; 

	szSQL.Format(_T("SELECT COUNT(*) FROM m_product_category WHERE mpc_parent_id=%ld "), m_nID);
//Notice(szSQL);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("This item has been subitems. Cannot delete it"));
		return 0;
	}

	szSQL.Format(_T("SELECT COUNT(*) FROM m_product WHERE mp_product_category_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("This item existing on items. Cannot delete it."));
		return 0;
	}

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM m_product_category WHERE mpc_product_category_id=%ld  "), m_nID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		OnListLoadData();
 		SetMode(VM_NONE); 
 		OnCancelProductCategoryList(); 
		
 	}  
	return 0;
 } 
int CProductCategoryList::OnSaveProductCategoryList(){ 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	return 0;
}
int CProductCategoryList::OnCancelProductCategoryList(){ 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 //	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 //	 
	return 0;
} 



void CProductCategoryList::OnGroupTreeSelChange(HTREEITEM oldhItem, HTREEITEM newhItem){

	if(!newhItem || m_wndGroupTree.GetCount()<=0)
		return;
	m_hItem = newhItem;
	m_nID = str2long(m_wndGroupTree.GetItemID(newhItem));
//_tprintf(_T("\r\n%ld"), m_nID);	
//	GetDataToScreen();
	SetMode(VM_VIEW);
}
void CProductCategoryList::Refresh(){
	OnListLoadData();
	m_wndGroupTree.SelectItem(m_hItem);
	m_wndGroupTree.ExpandItem(m_hItem, TVE_EXPAND);
	m_wndGroupTree.EnsureVisible(m_hItem);
}

int CProductCategoryList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
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
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
			m_wndSearchName.SetFocus();
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
		m_wndSearchName.EnableWindow(TRUE);
 		return nOldMode; 
}BEGIN_MESSAGE_MAP(CProductCategoryList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CProductCategoryList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearchName.SetFocus();
}

BOOL CProductCategoryList::PreTranslateMessage(MSG *pMsg){
	TVITEM itv;
	TCHAR szText[1024];
	if (pMsg->message == WM_KEYDOWN)
		/*if (pMsg->wParam = VK_F4)
		{
			HTREEITEM hItem = m_wndGroupTree.GetSelectedItem();
			HTREEITEM hParent = m_wndGroupTree.GetParentItem(hItem);
			if (hParent)
			{
				itv.hItem = hParent;
				itv.mask = TVIF_TEXT | TVIF_HANDLE;
				itv.pszText = szText;
				itv.cchTextMax = 1024;
				m_wndGroupTree.GetItem(&itv);
				_debug(_T("Parent:%s"), szText);
			}
		}*/
		if (pMsg->wParam == VK_F3)
		{
			HTREEITEM hItemSelected = m_wndGroupTree.GetSelectedItem();
			HTREEITEM hItem;
			BOOL bReturn = false;
			if (hItemSelected)
			{
				hItem = m_wndGroupTree.FindNextItem(&m_wndGroupTree, m_wndGroupTree.GetRootItem(), hItemSelected, m_szSearchName, bReturn);
				if (hItem)
					m_wndGroupTree.Select(hItem, TVGN_CARET);
			}
			m_wndGroupTree.SetFocus();
		}
		//if (pMsg->wParam == VK_F3)
		//{
		//	int nCount = 0;
		//	//Count root, current child item
		//	HTREEITEM hRoot = m_wndGroupTree.GetRootItem();
		//	HTREEITEM hItem = m_wndGroupTree.GetSelectedItem();
		//	HTREEITEM hChild = m_wndGroupTree.GetChildItem(hRoot);
		//	while (hChild)
		//	{
		//		hChild = m_wndGroupTree.GetNextSiblingItem(hChild);
		//		nCount++;
		//	}
		//	_debug(_T("Root's child: %d"), nCount);
		//	nCount = 0;
		//	hChild = m_wndGroupTree.GetChildItem(hItem);
		//	while (hChild)
		//	{
		//		hChild = m_wndGroupTree.GetNextSiblingItem(hChild);
		//		nCount++;
		//	}
		//	_debug(_T("Current Item 's child: %d"), nCount);
		//	nCount = m_wndGroupTree.GetCount();
		//	_debug(_T("All Item: %d"), nCount);
		//	//Count all items in group tree
		//	nCount = 1;
		//	bool bHasChild = FALSE;
		//	HTREEITEM hParent = NULL;
		//	HTREEITEM hFirstChild = NULL;
		//	//Get First Child of Current Item:GetChildItem
		//	hItem = m_wndGroupTree.GetChildItem(hRoot);//m_wndGroupTree.GetNextItem(hRoot, TVGN_CHILD);
		//	//hFirstChild = hItem;
		//	//Check if it has child:ItemHasChildren
		//	//Duyet qua cac item trong cung 1 parent:GetNextSiblingItem
		//	while (hItem)
		//	{
		//		while (m_wndGroupTree.ItemHasChildren(hItem))
		//		{
		//			bHasChild = TRUE;
		//			hItem = m_wndGroupTree.GetChildItem(hItem);
		//			itv.hItem = hItem;
		//			itv.mask = TVIF_TEXT | TVIF_HANDLE;
		//			itv.pszText = szText;
		//			itv.cchTextMax = 1024;
		//			m_wndGroupTree.GetItem(&itv);
		//			_debug(_T("Child down:%s"), szText);
		//		}
		//		if (bHasChild)
		//		{
		//			//Top item of tree view
		//			itv.hItem = hFirstChild;
		//			itv.mask = TVIF_TEXT | TVIF_HANDLE;
		//			itv.pszText = szText;
		//			itv.cchTextMax = 1024;
		//			m_wndGroupTree.GetItem(&itv);
		//			_debug(_T("First Child: %s"), szText);
		//			hChild = hItem;
		//			while (m_wndGroupTree.GetParentItem(hItem) != hRoot)
		//			{
		//				_debug(_T("X"));
		//				while (hChild)
		//				{
		//					hChild = m_wndGroupTree.GetNextSiblingItem(hChild);
		//					
		//					itv.hItem = hChild;
		//					itv.mask = TVIF_TEXT | TVIF_HANDLE;
		//					itv.pszText = szText;
		//					itv.cchTextMax = 1024;
		//					m_wndGroupTree.GetItem(&itv);
		//					_debug(_T("Child up:%s"), szText);
		//					//Count child
		//					nCount++;
		//				}
		//				hItem = m_wndGroupTree.GetParentItem(hItem);
		//			}
		//		}
		//		bHasChild = FALSE;
		//		//Count parent
		//		nCount++;
		//		hItem = m_wndGroupTree.GetNextSiblingItem(hItem);
		//	}
		//	nCount = CountTreeItems(&m_wndGroupTree, NULL, true);
		//	//_debug(_T("All Item :%d"), nCount);

		//}
	return CGuiView::PreTranslateMessage(pMsg);
}

//int CProductCategoryList::CountTreeItems(CTreeCtrl *pTree, HTREEITEM hItem, BOOL bRecursive)
//{
//  //bRecursive: more than 2 child level
//  //take root or selected item if hItem NULL
//  int nCount = 0;
//  if (hItem == NULL)
//  {
//    hItem = pTree->GetSelectedItem();
//    if (hItem == NULL)
// 	hItem = pTree->GetRootItem();
//  }
//  if (pTree->ItemHasChildren(hItem))
//  {
//    hItem = pTree->GetNextItem(hItem, TVGN_CHILD);
//    while (hItem)
//    {
//	nCount++;
//	if (bRecursive)
//	{
//	  nCount += CountTreeItems(pTree, hItem, bRecursive);
//	}
//	hItem = pTree->GetNextItem(hItem, TVGN_NEXT);
//    }
//  }
//  return nCount;
//}
//
//CString CProductCategoryList::GetItemText(CTreeCtrl *pTree, HTREEITEM hItem){
//	TVITEM itv;
//	TCHAR szText[1024];
//	itv.hItem = hItem;
//	itv.mask = LVIF_TEXT;
//	itv.pszText = szText;
//	itv.cchTextMax = 1024;
//	pTree->GetItemText(hItem);
//	_debug(_T("%s"), szText);
//	return CString(szText);
//}
//
////double CProductCategoryList::Factorial(unsigned int n){	
////	if (n==1 || n==0)
////		return 1;
////	double nFact = n*Factorial(n-1);
////	return nFact;
////}
//
//double CProductCategoryList::Factorial(unsigned int n){	
//	if (n==0) return 1;
//	return n*Factorial(n-1);
//}
//
//double CProductCategoryList::Factorial2(unsigned int n){
//	if (n==1 || n==0)
//		return 1;
//	double nFact = 1;
//	while (n>1)
//	{
//		nFact*=n;
//		n--;
//	}
//	return nFact;
//
//}
void CProductCategoryList::OnResizeLayout() {
	//AddResize(&m_wndList, 100, 100);

	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);

}