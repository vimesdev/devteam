#include "HMSFoodModifyRationDialog.h"
#include "MainFrm.h"
static void _OnLunchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodModifyRationDialog* )pWnd)->OnLunchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLunchSelendokFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnLunchSelendok();
}
/*static void _OnLunchSetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnLunchKillfocus();
}*/
/*static void _OnLunchKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnLunchKillfocus();
}*/
static long _OnLunchLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodModifyRationDialog *)pWnd)->OnLunchLoadData();
}
/*static void _OnLunchAddNewFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnLunchAddNew();
}*/
/*static void _OnLunchQtyChangeFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnLunchQtyChange();
} */
/*static void _OnLunchQtySetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnLunchQtySetfocus();} */ 
/*static void _OnLunchQtyKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnLunchQtyKillfocus();
} */
static int _OnLunchQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodModifyRationDialog *)pWnd)->OnLunchQtyCheckValue();
} 
static void _OnDinnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodModifyRationDialog* )pWnd)->OnDinnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDinnerSelendokFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnDinnerSelendok();
}
/*static void _OnDinnerSetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnDinnerKillfocus();
}*/
/*static void _OnDinnerKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnDinnerKillfocus();
}*/
static long _OnDinnerLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodModifyRationDialog *)pWnd)->OnDinnerLoadData();
}
/*static void _OnDinnerAddNewFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnDinnerAddNew();
}*/
/*static void _OnDinnerQtyChangeFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnDinnerQtyChange();
} */
/*static void _OnDinnerQtySetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnDinnerQtySetfocus();} */ 
/*static void _OnDinnerQtyKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnDinnerQtyKillfocus();
} */
static int _OnDinnerQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodModifyRationDialog *)pWnd)->OnDinnerQtyCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSFoodModifyRationDialog *pVw = (CHMSFoodModifyRationDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFoodModifyRationDialog *pVw = (CHMSFoodModifyRationDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSFoodModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyRationDialog*)pWnd)->OnAddHMSFoodModifyRationDialog();
} 
static int _OnEditHMSFoodModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyRationDialog*)pWnd)->OnEditHMSFoodModifyRationDialog();
} 
static int _OnDeleteHMSFoodModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyRationDialog*)pWnd)->OnDeleteHMSFoodModifyRationDialog();
} 
static int _OnSaveHMSFoodModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyRationDialog*)pWnd)->OnSaveHMSFoodModifyRationDialog();
} 
static int _OnCancelHMSFoodModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyRationDialog*)pWnd)->OnCancelHMSFoodModifyRationDialog();
} 
CHMSFoodModifyRationDialog::CHMSFoodModifyRationDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 610;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSFoodModifyRationDialog::~CHMSFoodModifyRationDialog(){
}
void CHMSFoodModifyRationDialog::OnCreateComponents(){
	m_wndModifyRationInformation.Create(this, _T("Modify Ration  Information"), 5, 5, 605, 90);
	m_wndLunchLabel.Create(this, _T("Lunch"), 10, 30, 90, 55);
	m_wndLunch.Create(this,95, 30, 450, 55); 
	m_wndLunchQtyLabel.Create(this, _T("Qty"), 455, 30, 525, 55);
	m_wndLunchQty.Create(this,530, 30, 600, 55); 
	m_wndDinnerLabel.Create(this, _T("Dinner"), 10, 60, 90, 85);
	m_wndDinner.Create(this,95, 60, 450, 85); 
	m_wndDinnerQtyLabel.Create(this, _T("Qty"), 455, 60, 525, 85);
	m_wndDinnerQty.Create(this,530, 60, 600, 85); 
	m_wndApply.Create(this, _T("&Apply"), 441, 95, 521, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 526, 95, 606, 120);

}
void CHMSFoodModifyRationDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLunch.SetCheckValue(true);
	m_wndLunch.LimitText(35);
	m_wndLunchQty.SetLimitText(16);
	m_wndLunchQty.SetCheckValue(true);
	m_wndDinner.SetCheckValue(true);
	m_wndDinner.LimitText(35);
	m_wndDinnerQty.SetLimitText(16);
	m_wndDinnerQty.SetCheckValue(true);


	m_wndLunch.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndLunch.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDinner.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDinner.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSFoodModifyRationDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLunch.SetEvent(WE_SELENDOK, _OnLunchSelendokFnc);
	//m_wndLunch.SetEvent(WE_SETFOCUS, _OnLunchSetfocusFnc);
	//m_wndLunch.SetEvent(WE_KILLFOCUS, _OnLunchKillfocusFnc);
	m_wndLunch.SetEvent(WE_SELCHANGE, _OnLunchSelectChangeFnc);
	m_wndLunch.SetEvent(WE_LOADDATA, _OnLunchLoadDataFnc);
	//m_wndLunch.SetEvent(WE_ADDNEW, _OnLunchAddNewFnc);
	//m_wndLunchQty.SetEvent(WE_CHANGE, _OnLunchQtyChangeFnc);
	//m_wndLunchQty.SetEvent(WE_SETFOCUS, _OnLunchQtySetfocusFnc);
	//m_wndLunchQty.SetEvent(WE_KILLFOCUS, _OnLunchQtyKillfocusFnc);
	m_wndLunchQty.SetEvent(WE_CHECKVALUE, _OnLunchQtyCheckValueFnc);
	m_wndDinner.SetEvent(WE_SELENDOK, _OnDinnerSelendokFnc);
	//m_wndDinner.SetEvent(WE_SETFOCUS, _OnDinnerSetfocusFnc);
	//m_wndDinner.SetEvent(WE_KILLFOCUS, _OnDinnerKillfocusFnc);
	m_wndDinner.SetEvent(WE_SELCHANGE, _OnDinnerSelectChangeFnc);
	m_wndDinner.SetEvent(WE_LOADDATA, _OnDinnerLoadDataFnc);
	//m_wndDinner.SetEvent(WE_ADDNEW, _OnDinnerAddNewFnc);
	//m_wndDinnerQty.SetEvent(WE_CHANGE, _OnDinnerQtyChangeFnc);
	//m_wndDinnerQty.SetEvent(WE_SETFOCUS, _OnDinnerQtySetfocusFnc);
	//m_wndDinnerQty.SetEvent(WE_KILLFOCUS, _OnDinnerQtyKillfocusFnc);
	m_wndDinnerQty.SetEvent(WE_CHECKVALUE, _OnDinnerQtyCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSFoodModifyRationDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndLunch.GetDlgCtrlID(), m_szLunchKey);
	DDX_Text(pDX, m_wndLunchQty.GetDlgCtrlID(), m_nLunchQty);
	DDX_TextEx(pDX, m_wndDinner.GetDlgCtrlID(), m_szDinnerKey);
	DDX_Text(pDX, m_wndDinnerQty.GetDlgCtrlID(), m_nDinnerQty);

}
void CHMSFoodModifyRationDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFoodModifyRationDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFoodModifyRationDialog::SetDefaultValues(){

	m_szLunchKey.Empty();
	m_nLunchQty=0;
	m_szDinnerKey.Empty();
	m_nDinnerQty=0;

}
int CHMSFoodModifyRationDialog::SetMode(int nMode){
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
void CHMSFoodModifyRationDialog::OnLunchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyRationDialog::OnLunchSelendok(){
	 
}
/*void CHMSFoodModifyRationDialog::OnLunchSetfocus(){
	
}*/
/*void CHMSFoodModifyRationDialog::OnLunchKillfocus(){
	
}*/
long CHMSFoodModifyRationDialog::OnLunchLoadData(){
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
/*void CHMSFoodModifyRationDialog::OnLunchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFoodModifyRationDialog::OnLunchQtyChange(){
	
} */
/*void CHMSFoodModifyRationDialog::OnLunchQtySetfocus(){
	
} */
/*void CHMSFoodModifyRationDialog::OnLunchQtyKillfocus(){
	
} */
int CHMSFoodModifyRationDialog::OnLunchQtyCheckValue(){
	return 0;
} 
void CHMSFoodModifyRationDialog::OnDinnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyRationDialog::OnDinnerSelendok(){
	 
}
/*void CHMSFoodModifyRationDialog::OnDinnerSetfocus(){
	
}*/
/*void CHMSFoodModifyRationDialog::OnDinnerKillfocus(){
	
}*/
long CHMSFoodModifyRationDialog::OnDinnerLoadData(){
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
/*void CHMSFoodModifyRationDialog::OnDinnerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFoodModifyRationDialog::OnDinnerQtyChange(){
	
} */
/*void CHMSFoodModifyRationDialog::OnDinnerQtySetfocus(){
	
} */
/*void CHMSFoodModifyRationDialog::OnDinnerQtyKillfocus(){
	
} */
int CHMSFoodModifyRationDialog::OnDinnerQtyCheckValue(){
	return 0;
} 
void CHMSFoodModifyRationDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyRationDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFoodModifyRationDialog::OnAddHMSFoodModifyRationDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFoodModifyRationDialog::OnEditHMSFoodModifyRationDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFoodModifyRationDialog::OnDeleteHMSFoodModifyRationDialog(){
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
 		OnCancelHMSFoodModifyRationDialog();
 	}
	return 0;
}
int CHMSFoodModifyRationDialog::OnSaveHMSFoodModifyRationDialog(){
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
 		//OnHMSFoodModifyRationDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFoodModifyRationDialog::OnCancelHMSFoodModifyRationDialog(){
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
int CHMSFoodModifyRationDialog::OnHMSFoodModifyRationDialogListLoadData(){
	return 0;
}
