#include "CHMSDailyFoodPatientListDialog.h"
#include "MainFrm.h"
static void _OnLunchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSDailyFoodPatientListDialog* )pWnd)->OnLunchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLunchSelendokFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog *)pWnd)->OnLunchSelendok();
}
/*static void _OnLunchSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog *)pWnd)->OnLunchKillfocus();
}*/
/*static void _OnLunchKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog *)pWnd)->OnLunchKillfocus();
}*/
static long _OnLunchLoadDataFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodPatientListDialog *)pWnd)->OnLunchLoadData();
}
/*static void _OnLunchAddNewFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog *)pWnd)->OnLunchAddNew();
}*/
static void _OnDinnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSDailyFoodPatientListDialog* )pWnd)->OnDinnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDinnerSelendokFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog *)pWnd)->OnDinnerSelendok();
}
/*static void _OnDinnerSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog *)pWnd)->OnDinnerKillfocus();
}*/
/*static void _OnDinnerKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog *)pWnd)->OnDinnerKillfocus();
}*/
static long _OnDinnerLoadDataFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodPatientListDialog *)pWnd)->OnDinnerLoadData();
}
/*static void _OnDinnerAddNewFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog *)pWnd)->OnDinnerAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CCHMSDailyFoodPatientListDialog *pVw = (CCHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListDeleteItem();
} 
static void _OnMarkSelectFnc(CWnd *pWnd){
	CCHMSDailyFoodPatientListDialog *pVw = (CCHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnMarkSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CCHMSDailyFoodPatientListDialog *pVw = (CCHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CCHMSDailyFoodPatientListDialog *pVw = (CCHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CCHMSDailyFoodPatientListDialog *pVw = (CCHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CCHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CCHMSDailyFoodPatientListDialog *pVw = (CCHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCHMSDailyFoodPatientListDialog *pVw = (CCHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodPatientListDialog*)pWnd)->OnAddCHMSDailyFoodPatientListDialog();
} 
static int _OnEditCHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodPatientListDialog*)pWnd)->OnEditCHMSDailyFoodPatientListDialog();
} 
static int _OnDeleteCHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodPatientListDialog*)pWnd)->OnDeleteCHMSDailyFoodPatientListDialog();
} 
static int _OnSaveCHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodPatientListDialog*)pWnd)->OnSaveCHMSDailyFoodPatientListDialog();
} 
static int _OnCancelCHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodPatientListDialog*)pWnd)->OnCancelCHMSDailyFoodPatientListDialog();
} 
CCHMSDailyFoodPatientListDialog::CCHMSDailyFoodPatientListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CCHMSDailyFoodPatientListDialog::~CCHMSDailyFoodPatientListDialog(){
}
void CCHMSDailyFoodPatientListDialog::OnCreateComponents(){
	m_wndGroupPatientList.Create(this, _T("Patient List"), 5, 35, 960, 570);
	m_wndLunchLabel.Create(this, _T("Lunch"), 5, 5, 85, 30);
	m_wndLunch.Create(this,90, 5, 320, 30); 
	m_wndDinnerLabel.Create(this, _T("Dinner"), 325, 5, 405, 30);
	m_wndDinner.Create(this,410, 5, 640, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 645, 5, 765, 30);
	m_wndPatientName.Create(this,770, 5, 929, 30); 
	m_wndRefresh.Create(this, _T("@"), 934, 5, 959, 30);
	m_wndPatientList.Create(this,10, 60, 955, 290); 
	m_wndMark.Create(this, _T("><"), 11, 295, 46, 320);
	m_wndUnMark.Create(this, _T("<>"), 51, 295, 86, 320);
	m_wndAdd.Create(this, _T("&Add"), 91, 295, 171, 320);
	m_wndRemove.Create(this, _T("Remove"), 176, 295, 256, 320);
	m_wndSelectedList.Create(this,10, 325, 955, 565); 
	m_wndApply.Create(this, _T("&Apply"), 785, 575, 870, 600);
	m_wndClose.Create(this, _T("&Close"), 875, 575, 960, 600);

}
void CCHMSDailyFoodPatientListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLunch.SetCheckValue(true);
	m_wndLunch.LimitText(1024);
	m_wndDinner.SetCheckValue(true);
	m_wndDinner.LimitText(1024);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);









}
void CCHMSDailyFoodPatientListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLunch.SetEvent(WE_SELENDOK, _OnLunchSelendokFnc);
	//m_wndLunch.SetEvent(WE_SETFOCUS, _OnLunchSetfocusFnc);
	//m_wndLunch.SetEvent(WE_KILLFOCUS, _OnLunchKillfocusFnc);
	m_wndLunch.SetEvent(WE_SELCHANGE, _OnLunchSelectChangeFnc);
	m_wndLunch.SetEvent(WE_LOADDATA, _OnLunchLoadDataFnc);
	//m_wndLunch.SetEvent(WE_ADDNEW, _OnLunchAddNewFnc);
	m_wndDinner.SetEvent(WE_SELENDOK, _OnDinnerSelendokFnc);
	//m_wndDinner.SetEvent(WE_SETFOCUS, _OnDinnerSetfocusFnc);
	//m_wndDinner.SetEvent(WE_KILLFOCUS, _OnDinnerKillfocusFnc);
	m_wndDinner.SetEvent(WE_SELCHANGE, _OnDinnerSelectChangeFnc);
	m_wndDinner.SetEvent(WE_LOADDATA, _OnDinnerLoadDataFnc);
	//m_wndDinner.SetEvent(WE_ADDNEW, _OnDinnerAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMark.SetEvent(WE_CLICK, _OnMarkSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndSelectedList.SetEvent(WE_SELCHANGE, _OnSelectedListSelectChangeFnc);
	m_wndSelectedList.SetEvent(WE_LOADDATA, _OnSelectedListLoadDataFnc);
	m_wndSelectedList.SetEvent(WE_DBLCLICK, _OnSelectedListDblClickFnc);
	m_wndSelectedList.AddEvent(1, _T("Delete"), _OnSelectedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CCHMSDailyFoodPatientListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndLunch.GetDlgCtrlID(), m_szLunchKey);
	DDX_TextEx(pDX, m_wndDinner.GetDlgCtrlID(), m_szDinnerKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CCHMSDailyFoodPatientListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSDailyFoodPatientListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSDailyFoodPatientListDialog::SetDefaultValues(){

	m_szLunchKey.Empty();
	m_szDinnerKey.Empty();
	m_szPatientName.Empty();

}
int CCHMSDailyFoodPatientListDialog::SetMode(int nMode){
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
void CCHMSDailyFoodPatientListDialog::OnLunchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSDailyFoodPatientListDialog::OnLunchSelendok(){
	 
}
/*void CCHMSDailyFoodPatientListDialog::OnLunchSetfocus(){
	
}*/
/*void CCHMSDailyFoodPatientListDialog::OnLunchKillfocus(){
	
}*/
long CCHMSDailyFoodPatientListDialog::OnLunchLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLunch.IsSearchKey() && !m_szLunchKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szLunchKey
};
	m_wndLunch.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLunch.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSDailyFoodPatientListDialog::OnLunchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSDailyFoodPatientListDialog::OnDinnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSDailyFoodPatientListDialog::OnDinnerSelendok(){
	 
}
/*void CCHMSDailyFoodPatientListDialog::OnDinnerSetfocus(){
	
}*/
/*void CCHMSDailyFoodPatientListDialog::OnDinnerKillfocus(){
	
}*/
long CCHMSDailyFoodPatientListDialog::OnDinnerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDinner.IsSearchKey() && !m_szDinnerKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDinnerKey
};
	m_wndDinner.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDinner.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSDailyFoodPatientListDialog::OnDinnerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSDailyFoodPatientListDialog::OnPatientNameChange(){
	
} */
/*void CCHMSDailyFoodPatientListDialog::OnPatientNameSetfocus(){
	
} */
/*void CCHMSDailyFoodPatientListDialog::OnPatientNameKillfocus(){
	
} */
int CCHMSDailyFoodPatientListDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CCHMSDailyFoodPatientListDialog::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSDailyFoodPatientListDialog::OnPatientListDblClick(){
	
} 
void CCHMSDailyFoodPatientListDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSDailyFoodPatientListDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSDailyFoodPatientListDialog::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCHMSDailyFoodPatientListDialog::OnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSDailyFoodPatientListDialog::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSDailyFoodPatientListDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSDailyFoodPatientListDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSDailyFoodPatientListDialog::OnSelectedListDblClick(){
	
} 
void CCHMSDailyFoodPatientListDialog::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSDailyFoodPatientListDialog::OnSelectedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSDailyFoodPatientListDialog::OnSelectedListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSelectedList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSelectedList.AddItems(
		rs.MoveNext();
	}
	m_wndSelectedList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCHMSDailyFoodPatientListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSDailyFoodPatientListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSDailyFoodPatientListDialog::OnAddCHMSDailyFoodPatientListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSDailyFoodPatientListDialog::OnEditCHMSDailyFoodPatientListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSDailyFoodPatientListDialog::OnDeleteCHMSDailyFoodPatientListDialog(){
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
 		OnCancelCHMSDailyFoodPatientListDialog();
 	}
	return 0;
}
int CCHMSDailyFoodPatientListDialog::OnSaveCHMSDailyFoodPatientListDialog(){
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
 		//OnCHMSDailyFoodPatientListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSDailyFoodPatientListDialog::OnCancelCHMSDailyFoodPatientListDialog(){
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
int CCHMSDailyFoodPatientListDialog::OnCHMSDailyFoodPatientListDialogListLoadData(){
	return 0;
}
