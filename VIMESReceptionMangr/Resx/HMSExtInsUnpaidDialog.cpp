#include "HMSExtInsUnpaidDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExtInsUnpaidDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExtInsUnpaidDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnFeeItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExtInsUnpaidDialog* )pWnd)->OnFeeItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeItemSelendokFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidDialog *)pWnd)->OnFeeItemSelendok();
}
/*static void _OnFeeItemSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidDialog *)pWnd)->OnFeeItemKillfocus();
}*/
/*static void _OnFeeItemKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidDialog *)pWnd)->OnFeeItemKillfocus();
}*/
static long _OnFeeItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSExtInsUnpaidDialog *)pWnd)->OnFeeItemLoadData();
}
/*static void _OnFeeItemAddNewFnc(CWnd *pWnd){
	((CHMSExtInsUnpaidDialog *)pWnd)->OnFeeItemAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSExtInsUnpaidDialog *pVw = (CHMSExtInsUnpaidDialog *)pWnd;
	pVw->OnAddSelect();
} 
static int _OnAddHMSExtInsUnpaidDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidDialog*)pWnd)->OnAddHMSExtInsUnpaidDialog();
} 
static int _OnEditHMSExtInsUnpaidDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidDialog*)pWnd)->OnEditHMSExtInsUnpaidDialog();
} 
static int _OnDeleteHMSExtInsUnpaidDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidDialog*)pWnd)->OnDeleteHMSExtInsUnpaidDialog();
} 
static int _OnSaveHMSExtInsUnpaidDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidDialog*)pWnd)->OnSaveHMSExtInsUnpaidDialog();
} 
static int _OnCancelHMSExtInsUnpaidDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsUnpaidDialog*)pWnd)->OnCancelHMSExtInsUnpaidDialog();
} 
CHMSExtInsUnpaidDialog::CHMSExtInsUnpaidDialog(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSExtInsUnpaidDialog::~CHMSExtInsUnpaidDialog(){
}
void CHMSExtInsUnpaidDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 600, 450); 
	m_wndFeeItemLabel.Create(this, _T("Fee Item"), 5, 455, 85, 480);
	m_wndFeeItem.Create(this,90, 455, 515, 480); 
	m_wndAdd.Create(this, _T("&Add"), 520, 455, 600, 480);

}
void CHMSExtInsUnpaidDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFeeItem.SetCheckValue(true);
	m_wndFeeItem.LimitText(35);


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Item Id"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 100);


	m_wndFeeItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFeeItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSExtInsUnpaidDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndFeeItem.SetEvent(WE_SELENDOK, _OnFeeItemSelendokFnc);
	//m_wndFeeItem.SetEvent(WE_SETFOCUS, _OnFeeItemSetfocusFnc);
	//m_wndFeeItem.SetEvent(WE_KILLFOCUS, _OnFeeItemKillfocusFnc);
	m_wndFeeItem.SetEvent(WE_SELCHANGE, _OnFeeItemSelectChangeFnc);
	m_wndFeeItem.SetEvent(WE_LOADDATA, _OnFeeItemLoadDataFnc);
	//m_wndFeeItem.SetEvent(WE_ADDNEW, _OnFeeItemAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExtInsUnpaidDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExtInsUnpaidDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExtInsUnpaidDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExtInsUnpaidDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExtInsUnpaidDialogFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSExtInsUnpaidDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFeeItem.GetDlgCtrlID(), m_szFeeItemKey);

}
void CHMSExtInsUnpaidDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FeeItem")] =  m_szFeeItemKey;
	}
	else
	{
			
	m_jData[_T("FeeItem")].GetValue(m_szFeeItemKey);
	}

}
void CHMSExtInsUnpaidDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExtInsUnpaidDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExtInsUnpaidDialog::SetDefaultValues(){

	m_szFeeItemKey.Empty();

}
int CHMSExtInsUnpaidDialog::SetMode(int nMode){
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
void CHMSExtInsUnpaidDialog::OnListDblClick(){
	
} 
void CHMSExtInsUnpaidDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExtInsUnpaidDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExtInsUnpaidDialog::OnListLoadData(){
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
void CHMSExtInsUnpaidDialog::OnFeeItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtInsUnpaidDialog::OnFeeItemSelendok(){
	 
}
/*void CHMSExtInsUnpaidDialog::OnFeeItemSetfocus(){
	
}*/
/*void CHMSExtInsUnpaidDialog::OnFeeItemKillfocus(){
	
}*/
long CHMSExtInsUnpaidDialog::OnFeeItemLoadData(){
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
/*void CHMSExtInsUnpaidDialog::OnFeeItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExtInsUnpaidDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExtInsUnpaidDialog::OnAddHMSExtInsUnpaidDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExtInsUnpaidDialog::OnEditHMSExtInsUnpaidDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExtInsUnpaidDialog::OnDeleteHMSExtInsUnpaidDialog(){
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
 		OnCancelHMSExtInsUnpaidDialog();
 	}
	return 0;
}
int CHMSExtInsUnpaidDialog::OnSaveHMSExtInsUnpaidDialog(){
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
 		//OnHMSExtInsUnpaidDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExtInsUnpaidDialog::OnCancelHMSExtInsUnpaidDialog(){
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
int CHMSExtInsUnpaidDialog::OnHMSExtInsUnpaidDialogListLoadData(){
	return 0;
}
