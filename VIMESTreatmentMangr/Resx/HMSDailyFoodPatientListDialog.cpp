#include "HMSDailyFoodPatientListDialog.h"
#include "MainFrm.h"
static void _OnLunchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyFoodPatientListDialog* )pWnd)->OnLunchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLunchSelendokFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnLunchSelendok();
}
/*static void _OnLunchSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnLunchKillfocus();
}*/
/*static void _OnLunchKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnLunchKillfocus();
}*/
static long _OnLunchLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog *)pWnd)->OnLunchLoadData();
}
/*static void _OnLunchAddNewFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnLunchAddNew();
}*/
static void _OnDinnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyFoodPatientListDialog* )pWnd)->OnDinnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDinnerSelendokFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnDinnerSelendok();
}
/*static void _OnDinnerSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnDinnerKillfocus();
}*/
/*static void _OnDinnerKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnDinnerKillfocus();
}*/
static long _OnDinnerLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog *)pWnd)->OnDinnerLoadData();
}
/*static void _OnDinnerAddNewFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnDinnerAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListDeleteItem();
} 
static void _OnMarkSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnMarkSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnAddHMSDailyFoodPatientListDialog();
} 
static int _OnEditHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnEditHMSDailyFoodPatientListDialog();
} 
static int _OnDeleteHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnDeleteHMSDailyFoodPatientListDialog();
} 
static int _OnSaveHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnSaveHMSDailyFoodPatientListDialog();
} 
static int _OnCancelHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnCancelHMSDailyFoodPatientListDialog();
} 
CHMSDailyFoodPatientListDialog::CHMSDailyFoodPatientListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSDailyFoodPatientListDialog::~CHMSDailyFoodPatientListDialog(){
}
void CHMSDailyFoodPatientListDialog::OnCreateComponents(){
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
void CHMSDailyFoodPatientListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLunch.SetCheckValue(true);
	m_wndLunch.LimitText(1024);
	m_wndDinner.SetCheckValue(true);
	m_wndDinner.LimitText(1024);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);









}
void CHMSDailyFoodPatientListDialog::OnSetWindowEvents(){
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
void CHMSDailyFoodPatientListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndLunch.GetDlgCtrlID(), m_szLunchKey);
	DDX_TextEx(pDX, m_wndDinner.GetDlgCtrlID(), m_szDinnerKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSDailyFoodPatientListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyFoodPatientListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyFoodPatientListDialog::SetDefaultValues(){

	m_szLunchKey.Empty();
	m_szDinnerKey.Empty();
	m_szPatientName.Empty();

}
int CHMSDailyFoodPatientListDialog::SetMode(int nMode){
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
void CHMSDailyFoodPatientListDialog::OnLunchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnLunchSelendok(){
	 
}
/*void CHMSDailyFoodPatientListDialog::OnLunchSetfocus(){
	
}*/
/*void CHMSDailyFoodPatientListDialog::OnLunchKillfocus(){
	
}*/
long CHMSDailyFoodPatientListDialog::OnLunchLoadData(){
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
/*void CHMSDailyFoodPatientListDialog::OnLunchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDailyFoodPatientListDialog::OnDinnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnDinnerSelendok(){
	 
}
/*void CHMSDailyFoodPatientListDialog::OnDinnerSetfocus(){
	
}*/
/*void CHMSDailyFoodPatientListDialog::OnDinnerKillfocus(){
	
}*/
long CHMSDailyFoodPatientListDialog::OnDinnerLoadData(){
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
/*void CHMSDailyFoodPatientListDialog::OnDinnerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDailyFoodPatientListDialog::OnPatientNameChange(){
	
} */
/*void CHMSDailyFoodPatientListDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSDailyFoodPatientListDialog::OnPatientNameKillfocus(){
	
} */
int CHMSDailyFoodPatientListDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSDailyFoodPatientListDialog::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnPatientListDblClick(){
	
} 
void CHMSDailyFoodPatientListDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyFoodPatientListDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyFoodPatientListDialog::OnPatientListLoadData(){
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
void CHMSDailyFoodPatientListDialog::OnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnSelectedListDblClick(){
	
} 
void CHMSDailyFoodPatientListDialog::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyFoodPatientListDialog::OnSelectedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyFoodPatientListDialog::OnSelectedListLoadData(){
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
void CHMSDailyFoodPatientListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyFoodPatientListDialog::OnAddHMSDailyFoodPatientListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDailyFoodPatientListDialog::OnEditHMSDailyFoodPatientListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDailyFoodPatientListDialog::OnDeleteHMSDailyFoodPatientListDialog(){
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
 		OnCancelHMSDailyFoodPatientListDialog();
 	}
	return 0;
}
int CHMSDailyFoodPatientListDialog::OnSaveHMSDailyFoodPatientListDialog(){
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
 		//OnHMSDailyFoodPatientListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDailyFoodPatientListDialog::OnCancelHMSDailyFoodPatientListDialog(){
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
int CHMSDailyFoodPatientListDialog::OnHMSDailyFoodPatientListDialogListLoadData(){
	return 0;
}
