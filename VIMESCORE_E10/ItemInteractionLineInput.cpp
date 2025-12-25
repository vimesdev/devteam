#include "ItemInteractionLineInput.h"
#include "MainFrame_E10.h"
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CItemInteractionLineInput* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CItemInteractionLineInput *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CItemInteractionLineInput *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CItemInteractionLineInput *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CItemInteractionLineInput *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CItemInteractionLineInput *)pWnd)->OnItemAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CItemInteractionLineInput *pVw = (CItemInteractionLineInput *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnXSelectFnc(CWnd *pWnd){
	CItemInteractionLineInput *pVw = (CItemInteractionLineInput *)pWnd;
	pVw->OnXSelect();
} 
static int _OnAddItemInteractionLineInputFnc(CWnd *pWnd){
	 return ((CItemInteractionLineInput*)pWnd)->OnAddItemInteractionLineInput();
} 
static int _OnEditItemInteractionLineInputFnc(CWnd *pWnd){
	 return ((CItemInteractionLineInput*)pWnd)->OnEditItemInteractionLineInput();
} 
static int _OnDeleteItemInteractionLineInputFnc(CWnd *pWnd){
	 return ((CItemInteractionLineInput*)pWnd)->OnDeleteItemInteractionLineInput();
} 
static int _OnSaveItemInteractionLineInputFnc(CWnd *pWnd){
	 return ((CItemInteractionLineInput*)pWnd)->OnSaveItemInteractionLineInput();
} 
static int _OnCancelItemInteractionLineInputFnc(CWnd *pWnd){
	 return ((CItemInteractionLineInput*)pWnd)->OnCancelItemInteractionLineInput();
} 
CItemInteractionLineInput::CItemInteractionLineInput(CWnd *pParent):
	CGuiPopup(pParent){
	m_nCaseID = 0;
	m_nDlgWidth = 400;
	m_nDlgHeight = 50;
	SetDefaultValues();
}
CItemInteractionLineInput::CItemInteractionLineInput(){
	m_nDlgWidth = 400;
	m_nDlgHeight = 50;
	SetDefaultValues();
}
CItemInteractionLineInput::~CItemInteractionLineInput(){
}
void CItemInteractionLineInput::OnCreateComponents(){
	m_wndItemLabel.Create(this, _T("Item"), 5, 5, 85, 30);
	m_wndItem.Create(this,90, 5, 265, 30); 
	m_wndSave.Create(this, _T("&Save"), 270, 5, 350, 30);
	m_wndX.Create(this, _T("X"), 355, 5, 395, 30);

}
void CItemInteractionLineInput::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(35);


	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CItemInteractionLineInput::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndX.SetEvent(WE_CLICK, _OnXSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddItemInteractionLineInputFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditItemInteractionLineInputFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteItemInteractionLineInputFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveItemInteractionLineInputFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelItemInteractionLineInputFnc, 0, 'T', VK_CONTROL);
	SetMode(GetMode());
	_debug(_T("CaseID:%d"), m_nCaseID);

}
void CItemInteractionLineInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);

}
void CItemInteractionLineInput::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CItemInteractionLineInput::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CItemInteractionLineInput::SetDefaultValues(){

	m_szItemKey.Empty();

}
int CItemInteractionLineInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
void CItemInteractionLineInput::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CItemInteractionLineInput::OnItemSelendok(){
	 
}
/*void CItemInteractionLineInput::OnItemSetfocus(){
	
}*/
/*void CItemInteractionLineInput::OnItemKillfocus(){
	
}*/
long CItemInteractionLineInput::OnItemLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
		szWhere.Format(_T(" and mpc_product_class_id='%s' "), m_szItemKey);
	}
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mpc_product_class_id as id, mpc_name as name FROM m_product_class WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CItemInteractionLineInput::OnItemAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CItemInteractionLineInput::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveItemInteractionLineInput();
} 
void CItemInteractionLineInput::OnXSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiPopup::OnCancel();
} 
int CItemInteractionLineInput::OnAddItemInteractionLineInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CItemInteractionLineInput::OnEditItemInteractionLineInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CItemInteractionLineInput::OnDeleteItemInteractionLineInput(){
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
 		OnCancelItemInteractionLineInput();
 	}
	return 0;
}
int CItemInteractionLineInput::OnSaveItemInteractionLineInput(){
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
 		//OnItemInteractionLineInputListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CItemInteractionLineInput::OnCancelItemInteractionLineInput(){
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
int CItemInteractionLineInput::OnItemInteractionLineInputListLoadData(){
	return 0;
}
