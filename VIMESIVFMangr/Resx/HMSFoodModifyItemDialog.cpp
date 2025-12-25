#include "HMSFoodModifyItemDialog.h"
#include "MainFrm.h"
static void _OnLunchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodModifyItemDialog* )pWnd)->OnLunchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLunchSelendokFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog *)pWnd)->OnLunchSelendok();
}
/*static void _OnLunchSetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog *)pWnd)->OnLunchKillfocus();
}*/
/*static void _OnLunchKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog *)pWnd)->OnLunchKillfocus();
}*/
static long _OnLunchLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodModifyItemDialog *)pWnd)->OnLunchLoadData();
}
/*static void _OnLunchAddNewFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog *)pWnd)->OnLunchAddNew();
}*/
static void _OnDinnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodModifyItemDialog* )pWnd)->OnDinnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDinnerSelendokFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog *)pWnd)->OnDinnerSelendok();
}
/*static void _OnDinnerSetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog *)pWnd)->OnDinnerKillfocus();
}*/
/*static void _OnDinnerKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog *)pWnd)->OnDinnerKillfocus();
}*/
static long _OnDinnerLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodModifyItemDialog *)pWnd)->OnDinnerLoadData();
}
/*static void _OnDinnerAddNewFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog *)pWnd)->OnDinnerAddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSFoodModifyItemDialog *pVw = (CHMSFoodModifyItemDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFoodModifyItemDialog *pVw = (CHMSFoodModifyItemDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSFoodModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyItemDialog*)pWnd)->OnAddHMSFoodModifyItemDialog();
} 
static int _OnEditHMSFoodModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyItemDialog*)pWnd)->OnEditHMSFoodModifyItemDialog();
} 
static int _OnDeleteHMSFoodModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyItemDialog*)pWnd)->OnDeleteHMSFoodModifyItemDialog();
} 
static int _OnSaveHMSFoodModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyItemDialog*)pWnd)->OnSaveHMSFoodModifyItemDialog();
} 
static int _OnCancelHMSFoodModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyItemDialog*)pWnd)->OnCancelHMSFoodModifyItemDialog();
} 
CHMSFoodModifyItemDialog::CHMSFoodModifyItemDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 465;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSFoodModifyItemDialog::~CHMSFoodModifyItemDialog(){
}
void CHMSFoodModifyItemDialog::OnCreateComponents(){
	m_wndModify Information.Create(this, _T("Modify  Information"), 5, 5, 455, 90);
	m_wndLunchLabel.Create(this, _T("Lunch"), 10, 30, 90, 55);
	m_wndLunch.Create(this,95, 30, 450, 55); 
	m_wndDinnerLabel.Create(this, _T("Dinner"), 10, 60, 90, 85);
	m_wndDinner.Create(this,95, 60, 450, 85); 
	m_wndApply.Create(this, _T("&Apply"), 290, 95, 370, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 375, 95, 455, 120);

}
void CHMSFoodModifyItemDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLunch.SetCheckValue(true);
	m_wndLunch.LimitText(35);
	m_wndDinner.SetCheckValue(true);
	m_wndDinner.LimitText(35);


	m_wndLunch.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndLunch.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDinner.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDinner.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSFoodModifyItemDialog::OnSetWindowEvents(){
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
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSFoodModifyItemDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndLunch.GetDlgCtrlID(), m_szLunchKey);
	DDX_TextEx(pDX, m_wndDinner.GetDlgCtrlID(), m_szDinnerKey);

}
void CHMSFoodModifyItemDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFoodModifyItemDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFoodModifyItemDialog::SetDefaultValues(){

	m_szLunchKey.Empty();
	m_szDinnerKey.Empty();

}
int CHMSFoodModifyItemDialog::SetMode(int nMode){
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
void CHMSFoodModifyItemDialog::OnLunchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyItemDialog::OnLunchSelendok(){
	 
}
/*void CHMSFoodModifyItemDialog::OnLunchSetfocus(){
	
}*/
/*void CHMSFoodModifyItemDialog::OnLunchKillfocus(){
	
}*/
long CHMSFoodModifyItemDialog::OnLunchLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFoodModifyItemDialog::OnLunchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFoodModifyItemDialog::OnDinnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyItemDialog::OnDinnerSelendok(){
	 
}
/*void CHMSFoodModifyItemDialog::OnDinnerSetfocus(){
	
}*/
/*void CHMSFoodModifyItemDialog::OnDinnerKillfocus(){
	
}*/
long CHMSFoodModifyItemDialog::OnDinnerLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFoodModifyItemDialog::OnDinnerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFoodModifyItemDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyItemDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFoodModifyItemDialog::OnAddHMSFoodModifyItemDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFoodModifyItemDialog::OnEditHMSFoodModifyItemDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFoodModifyItemDialog::OnDeleteHMSFoodModifyItemDialog(){
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
 		OnCancelHMSFoodModifyItemDialog();
 	}
	return 0;
}
int CHMSFoodModifyItemDialog::OnSaveHMSFoodModifyItemDialog(){
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
 		//OnHMSFoodModifyItemDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFoodModifyItemDialog::OnCancelHMSFoodModifyItemDialog(){
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
int CHMSFoodModifyItemDialog::OnHMSFoodModifyItemDialogListLoadData(){
	return 0;
}
