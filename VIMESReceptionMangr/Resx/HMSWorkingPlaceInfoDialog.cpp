#include "HMSWorkingPlaceInfoDialog.h"
#include "MainFrm.h"
/*static void _OnSearchByNameChangeFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnSearchByNameChange();
} */
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkingPlaceInfoDialog *)pWnd)->OnSearchByNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSWorkingPlaceInfoDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSWorkingPlaceInfoDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSWorkingPlaceInfoDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnUnitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSWorkingPlaceInfoDialog* )pWnd)->OnUnitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUnitSelendokFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnUnitSelendok();
}
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnUnitKillfocus();
}*/
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnUnitKillfocus();
}*/
static long _OnUnitLoadDataFnc(CWnd *pWnd){
	return ((CHMSWorkingPlaceInfoDialog *)pWnd)->OnUnitLoadData();
}
/*static void _OnUnitAddNewFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnUnitAddNew();
}*/
static void _OnIsInsuranceUnitSelectFnc(CWnd *pWnd){
	 ((CHMSWorkingPlaceInfoDialog*)pWnd)->OnIsInsuranceUnitSelect();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkingPlaceInfoDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSWorkingPlaceInfoDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkingPlaceInfoDialog *)pWnd)->OnIDCheckValue();
} 
static void _OnIsActiveSelectFnc(CWnd *pWnd){
	 ((CHMSWorkingPlaceInfoDialog*)pWnd)->OnIsActiveSelect();
}
static void _OnSelectSelectFnc(CWnd *pWnd){
	CHMSWorkingPlaceInfoDialog *pVw = (CHMSWorkingPlaceInfoDialog *)pWnd;
	pVw->OnSelectSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSWorkingPlaceInfoDialog *pVw = (CHMSWorkingPlaceInfoDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSWorkingPlaceInfoDialog *pVw = (CHMSWorkingPlaceInfoDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSWorkingPlaceInfoDialog *pVw = (CHMSWorkingPlaceInfoDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSWorkingPlaceInfoDialog *pVw = (CHMSWorkingPlaceInfoDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSWorkingPlaceInfoDialog *pVw = (CHMSWorkingPlaceInfoDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSWorkingPlaceInfoDialog *pVw = (CHMSWorkingPlaceInfoDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSWorkingPlaceInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSWorkingPlaceInfoDialog*)pWnd)->OnAddHMSWorkingPlaceInfoDialog();
} 
static int _OnEditHMSWorkingPlaceInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSWorkingPlaceInfoDialog*)pWnd)->OnEditHMSWorkingPlaceInfoDialog();
} 
static int _OnDeleteHMSWorkingPlaceInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSWorkingPlaceInfoDialog*)pWnd)->OnDeleteHMSWorkingPlaceInfoDialog();
} 
static int _OnSaveHMSWorkingPlaceInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSWorkingPlaceInfoDialog*)pWnd)->OnSaveHMSWorkingPlaceInfoDialog();
} 
static int _OnCancelHMSWorkingPlaceInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSWorkingPlaceInfoDialog*)pWnd)->OnCancelHMSWorkingPlaceInfoDialog();
} 
CHMSWorkingPlaceInfoDialog::CHMSWorkingPlaceInfoDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 750;
	m_nDlgHeight = 681;
	SetDefaultValues();
}
CHMSWorkingPlaceInfoDialog::~CHMSWorkingPlaceInfoDialog(){
}
void CHMSWorkingPlaceInfoDialog::OnCreateComponents(){
	m_wndWorkPlaceInfo.Create(this, _T("Working Place Information"), 5, 5, 685, 540);
	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 130, 55);
	m_wndSearchByName.Create(this,135, 30, 680, 55); 
	m_wndList.Create(this,10, 60, 680, 475); 
	m_wndUnitLabel.Create(this, _T("Unit"), 10, 480, 90, 505);
	m_wndUnit.Create(this,95, 480, 510, 505); 
	m_wndIsInsuranceUnit.Create(this, _T("Is Insurance Unit"), 515, 480, 681, 505);
	m_wndNameLabel.Create(this, _T("Name"), 10, 510, 90, 535);
	m_wndName.Create(this,95, 510, 510, 535); 
	m_wndIDLabel.Create(this, _T("ID"), 515, 510, 595, 535);
	m_wndID.Create(this,600, 510, 680, 535); 
	m_wndIsActive.Create(this, _T("Is Active"), 5, 545, 90, 570);
	m_wndSelect.Create(this, _T("&Select"), 95, 545, 175, 570);
	m_wndAdd.Create(this, _T("&Add"), 180, 545, 260, 570);
	m_wndEdit.Create(this, _T("&Edit"), 265, 545, 345, 570);
	m_wndDelete.Create(this, _T("&Delete"), 350, 545, 430, 570);
	m_wndSave.Create(this, _T("&Save"), 435, 545, 515, 570);
	m_wndCancel.Create(this, _T("&Cancel"), 520, 545, 600, 570);
	m_wndClose.Create(this, _T("&Close"), 605, 545, 685, 570);

}
void CHMSWorkingPlaceInfoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearchByName.SetLimitText(1024);
	m_wndSearchByName.SetCheckValue(true);
	m_wndUnit.SetCheckValue(true);
	m_wndUnit.LimitText(35);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndID.SetLimitText(1024);
	m_wndID.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Unit Name"), CFMT_TEXT, 400);


	m_wndUnit.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUnit.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

}
void CHMSWorkingPlaceInfoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearchByName.SetEvent(WE_CHANGE, _OnSearchByNameChangeFnc);
	//m_wndSearchByName.SetEvent(WE_SETFOCUS, _OnSearchByNameSetfocusFnc);
	//m_wndSearchByName.SetEvent(WE_KILLFOCUS, _OnSearchByNameKillfocusFnc);
	m_wndSearchByName.SetEvent(WE_CHECKVALUE, _OnSearchByNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndUnit.SetEvent(WE_SELENDOK, _OnUnitSelendokFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_SELCHANGE, _OnUnitSelectChangeFnc);
	m_wndUnit.SetEvent(WE_LOADDATA, _OnUnitLoadDataFnc);
	//m_wndUnit.SetEvent(WE_ADDNEW, _OnUnitAddNewFnc);
	m_wndIsInsuranceUnit.SetEvent(WE_CLICK, _OnIsInsuranceUnitSelectFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);
	m_wndSelect.SetEvent(WE_CLICK, _OnSelectSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSWorkingPlaceInfoDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_TextEx(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnitKey);
	DDX_Check(pDX, m_wndIsInsuranceUnit.GetDlgCtrlID(), m_bIsInsuranceUnit);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);

}
void CHMSWorkingPlaceInfoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSWorkingPlaceInfoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSWorkingPlaceInfoDialog::SetDefaultValues(){

	m_szSearchByName.Empty();
	m_szUnitKey.Empty();
	m_bIsInsuranceUnit=FALSE;
	m_szName.Empty();
	m_nID=0;
	m_bIsActive=FALSE;

}
int CHMSWorkingPlaceInfoDialog::SetMode(int nMode){
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
/*void CHMSWorkingPlaceInfoDialog::OnSearchByNameChange(){
	
} */
/*void CHMSWorkingPlaceInfoDialog::OnSearchByNameSetfocus(){
	
} */
/*void CHMSWorkingPlaceInfoDialog::OnSearchByNameKillfocus(){
	
} */
int CHMSWorkingPlaceInfoDialog::OnSearchByNameCheckValue(){
	return 0;
} 
void CHMSWorkingPlaceInfoDialog::OnListDblClick(){
	
} 
void CHMSWorkingPlaceInfoDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSWorkingPlaceInfoDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSWorkingPlaceInfoDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("UnitName")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSWorkingPlaceInfoDialog::OnUnitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWorkingPlaceInfoDialog::OnUnitSelendok(){
	 
}
/*void CHMSWorkingPlaceInfoDialog::OnUnitSetfocus(){
	
}*/
/*void CHMSWorkingPlaceInfoDialog::OnUnitKillfocus(){
	
}*/
long CHMSWorkingPlaceInfoDialog::OnUnitLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUnit.IsSearchKey() && !m_szUnitKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUnitKey
};
	m_wndUnit.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUnit.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSWorkingPlaceInfoDialog::OnUnitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSWorkingPlaceInfoDialog::OnIsInsuranceUnitSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSWorkingPlaceInfoDialog::OnNameChange(){
	
} */
/*void CHMSWorkingPlaceInfoDialog::OnNameSetfocus(){
	
} */
/*void CHMSWorkingPlaceInfoDialog::OnNameKillfocus(){
	
} */
int CHMSWorkingPlaceInfoDialog::OnNameCheckValue(){
	return 0;
} 
/*void CHMSWorkingPlaceInfoDialog::OnIDChange(){
	
} */
/*void CHMSWorkingPlaceInfoDialog::OnIDSetfocus(){
	
} */
/*void CHMSWorkingPlaceInfoDialog::OnIDKillfocus(){
	
} */
int CHMSWorkingPlaceInfoDialog::OnIDCheckValue(){
	return 0;
} 
	void CHMSWorkingPlaceInfoDialog::OnIsActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSWorkingPlaceInfoDialog::OnSelectSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWorkingPlaceInfoDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWorkingPlaceInfoDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWorkingPlaceInfoDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWorkingPlaceInfoDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWorkingPlaceInfoDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWorkingPlaceInfoDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSWorkingPlaceInfoDialog::OnAddHMSWorkingPlaceInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSWorkingPlaceInfoDialog::OnEditHMSWorkingPlaceInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSWorkingPlaceInfoDialog::OnDeleteHMSWorkingPlaceInfoDialog(){
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
 		OnCancelHMSWorkingPlaceInfoDialog();
 	}
	return 0;
}
int CHMSWorkingPlaceInfoDialog::OnSaveHMSWorkingPlaceInfoDialog(){
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
 		//OnHMSWorkingPlaceInfoDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSWorkingPlaceInfoDialog::OnCancelHMSWorkingPlaceInfoDialog(){
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
int CHMSWorkingPlaceInfoDialog::OnHMSWorkingPlaceInfoDialogListLoadData(){
	return 0;
}
