#include "HMSExpenseTypeView.h"
#include "..\MainFrm.h"
#include "HMSExpenseTypeSetupDialog.h"
/*static void _OnTextChangeFnc(CWnd *pWnd){
	((CHMSExpenseTypeView *)pWnd)->OnTextChange();
} */
/*static void _OnTextSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseTypeView *)pWnd)->OnTextSetfocus();} */ 
/*static void _OnTextKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseTypeView *)pWnd)->OnTextKillfocus();
} */
static int _OnTextCheckValueFnc(CWnd *pWnd){
	return ((CHMSExpenseTypeView *)pWnd)->OnTextCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExpenseTypeView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExpenseTypeView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExpenseTypeView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeView*)pWnd)->OnListDeleteItem();
} 
static void _OnExtraSelectFnc(CWnd *pWnd){
	CHMSExpenseTypeView *pVw = (CHMSExpenseTypeView *)pWnd;
	pVw->OnExtraSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSExpenseTypeView *pVw = (CHMSExpenseTypeView *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSExpenseTypeView *pVw = (CHMSExpenseTypeView *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSExpenseTypeView *pVw = (CHMSExpenseTypeView *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddHMSExpenseTypeViewFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeView*)pWnd)->OnAddHMSExpenseTypeView();
} 
static int _OnEditHMSExpenseTypeViewFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeView*)pWnd)->OnEditHMSExpenseTypeView();
} 
static int _OnDeleteHMSExpenseTypeViewFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeView*)pWnd)->OnDeleteHMSExpenseTypeView();
} 
static int _OnSaveHMSExpenseTypeViewFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeView*)pWnd)->OnSaveHMSExpenseTypeView();
} 
static int _OnCancelHMSExpenseTypeViewFnc(CWnd *pWnd){
	 return ((CHMSExpenseTypeView*)pWnd)->OnCancelHMSExpenseTypeView();
} 
CHMSExpenseTypeView::CHMSExpenseTypeView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSExpenseTypeView::~CHMSExpenseTypeView(){
}
void CHMSExpenseTypeView::OnCreateComponents(){
	m_wndFindLabel.Create(this, _T("Find"), 5, 5, 85, 30);
	m_wndText.Create(this,90, 5, 350, 30); 
	m_wndList.Create(this,5, 35, 350, 285); 
	m_wndExtra.Create(this, _T("..."), 5, 290, 45, 315);
	m_wndAdd.Create(this, _T("Add"), 100, 290, 180, 315);
	m_wndEdit.Create(this, _T("Edit"), 185, 290, 265, 315);
	m_wndDelete.Create(this, _T("Delete"), 270, 290, 350, 315);

}
void CHMSExpenseTypeView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndText.SetLimitText(35);
	m_wndText.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Name"), CFMT_TEXT, 310);

}
void CHMSExpenseTypeView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndText.SetEvent(WE_CHANGE, _OnTextChangeFnc);
	//m_wndText.SetEvent(WE_SETFOCUS, _OnTextSetfocusFnc);
	//m_wndText.SetEvent(WE_KILLFOCUS, _OnTextKillfocusFnc);
	m_wndText.SetEvent(WE_CHECKVALUE, _OnTextCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExtra.SetEvent(WE_CLICK, _OnExtraSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExpenseTypeViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExpenseTypeViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExpenseTypeViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExpenseTypeViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExpenseTypeViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSExpenseTypeView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndText.GetDlgCtrlID(), m_szText);

}
void CHMSExpenseTypeView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Text")] =  m_szText;
	}
	else
	{
			
	m_jData[_T("Text")].GetValue(m_szText);
	}

}
void CHMSExpenseTypeView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExpenseTypeView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExpenseTypeView::SetDefaultValues(){

	m_szText.Empty();

}
int CHMSExpenseTypeView::SetMode(int nMode){
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
/*void CHMSExpenseTypeView::OnTextChange(){
	
} */
/*void CHMSExpenseTypeView::OnTextSetfocus(){
	
} */
/*void CHMSExpenseTypeView::OnTextKillfocus(){
	
} */
int CHMSExpenseTypeView::OnTextCheckValue(){
	return 0;
} 
void CHMSExpenseTypeView::OnListDblClick(){
	
} 
void CHMSExpenseTypeView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExpenseTypeView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExpenseTypeView::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSExpenseTypeView::OnExtraSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExpenseTypeView::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExpenseTypeView::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExpenseTypeView::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExpenseTypeView::OnAddHMSExpenseTypeView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExpenseTypeView::OnEditHMSExpenseTypeView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExpenseTypeView::OnDeleteHMSExpenseTypeView(){
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
 		OnCancelHMSExpenseTypeView();
 	}
	return 0;
}
int CHMSExpenseTypeView::OnSaveHMSExpenseTypeView(){
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
 		//OnHMSExpenseTypeViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExpenseTypeView::OnCancelHMSExpenseTypeView(){
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
int CHMSExpenseTypeView::OnHMSExpenseTypeViewListLoadData(){
	return 0;
}
