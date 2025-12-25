#include "HMSPriceSchemaView.h"
#include "..\MainFrm.h"
#include "HMSExpenseSetupDialog.h"
#include "HMSExpenseTypeSetupDialog.h"
#include "HMSPriceSchemaSetupDialog.h"
#include "HMSPriceSchemaCopierDialog.h"
/*static void _OnTextChangeFnc(CWnd *pWnd){
	((CHMSPriceSchemaView *)pWnd)->OnTextChange();
} */
/*static void _OnTextSetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaView *)pWnd)->OnTextSetfocus();} */ 
/*static void _OnTextKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaView *)pWnd)->OnTextKillfocus();
} */
static int _OnTextCheckValueFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaView *)pWnd)->OnTextCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPriceSchemaView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPriceSchemaView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaView*)pWnd)->OnListDeleteItem();
} 
static void _OnExtraSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaView *pVw = (CHMSPriceSchemaView *)pWnd;
	pVw->OnExtraSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaView *pVw = (CHMSPriceSchemaView *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaView *pVw = (CHMSPriceSchemaView *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaView *pVw = (CHMSPriceSchemaView *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddHMSPriceSchemaViewFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaView*)pWnd)->OnAddHMSPriceSchemaView();
} 
static int _OnEditHMSPriceSchemaViewFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaView*)pWnd)->OnEditHMSPriceSchemaView();
} 
static int _OnDeleteHMSPriceSchemaViewFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaView*)pWnd)->OnDeleteHMSPriceSchemaView();
} 
static int _OnSaveHMSPriceSchemaViewFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaView*)pWnd)->OnSaveHMSPriceSchemaView();
} 
static int _OnCancelHMSPriceSchemaViewFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaView*)pWnd)->OnCancelHMSPriceSchemaView();
} 
CHMSPriceSchemaView::CHMSPriceSchemaView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPriceSchemaView::~CHMSPriceSchemaView(){
}
void CHMSPriceSchemaView::OnCreateComponents(){
	m_wndFindLabel.Create(this, _T("Find"), 5, 5, 85, 30);
	m_wndText.Create(this,90, 5, 350, 30); 
	m_wndList.Create(this,5, 35, 350, 285); 
	m_wndExtra.Create(this, _T("..."), 5, 290, 45, 315);
	m_wndAdd.Create(this, _T("Add"), 100, 290, 180, 315);
	m_wndEdit.Create(this, _T("Edit"), 185, 290, 265, 315);
	m_wndDelete.Create(this, _T("Delete"), 270, 290, 350, 315);

}
void CHMSPriceSchemaView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndText.SetLimitText(35);
	m_wndText.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Name"), CFMT_TEXT, 310);

}
void CHMSPriceSchemaView::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPriceSchemaViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPriceSchemaViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPriceSchemaViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPriceSchemaViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPriceSchemaViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPriceSchemaView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndText.GetDlgCtrlID(), m_szText);

}
void CHMSPriceSchemaView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Text")] =  m_szText;
	}
	else
	{
			
	m_jData[_T("Text")].GetValue(m_szText);
	}

}
void CHMSPriceSchemaView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPriceSchemaView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPriceSchemaView::SetDefaultValues(){

	m_szText.Empty();

}
int CHMSPriceSchemaView::SetMode(int nMode){
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
/*void CHMSPriceSchemaView::OnTextChange(){
	
} */
/*void CHMSPriceSchemaView::OnTextSetfocus(){
	
} */
/*void CHMSPriceSchemaView::OnTextKillfocus(){
	
} */
int CHMSPriceSchemaView::OnTextCheckValue(){
	return 0;
} 
void CHMSPriceSchemaView::OnListDblClick(){
	
} 
void CHMSPriceSchemaView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPriceSchemaView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPriceSchemaView::OnListLoadData(){
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
void CHMSPriceSchemaView::OnExtraSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriceSchemaView::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriceSchemaView::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriceSchemaView::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPriceSchemaView::OnAddHMSPriceSchemaView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPriceSchemaView::OnEditHMSPriceSchemaView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPriceSchemaView::OnDeleteHMSPriceSchemaView(){
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
 		OnCancelHMSPriceSchemaView();
 	}
	return 0;
}
int CHMSPriceSchemaView::OnSaveHMSPriceSchemaView(){
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
 		//OnHMSPriceSchemaViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPriceSchemaView::OnCancelHMSPriceSchemaView(){
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
int CHMSPriceSchemaView::OnHMSPriceSchemaViewListLoadData(){
	return 0;
}
