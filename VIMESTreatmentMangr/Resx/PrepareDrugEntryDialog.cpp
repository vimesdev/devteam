#include "PrepareDrugEntryDialog.h"
#include "MainFrm.h"
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPrepareDrugEntryDialog* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CPrepareDrugEntryDialog *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CPrepareDrugEntryDialog *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CPrepareDrugEntryDialog *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CPrepareDrugEntryDialog *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CPrepareDrugEntryDialog *)pWnd)->OnNameAddNew();
}*/
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CPrepareDrugEntryDialog *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CPrepareDrugEntryDialog *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CPrepareDrugEntryDialog *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CPrepareDrugEntryDialog *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CPrepareDrugEntryDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CPrepareDrugEntryDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CPrepareDrugEntryDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPrepareDrugEntryDialog *)pWnd)->OnQuantityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPrepareDrugEntryDialog *pVw = (CPrepareDrugEntryDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPrepareDrugEntryDialog *pVw = (CPrepareDrugEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPrepareDrugEntryDialogFnc(CWnd *pWnd){
	 return ((CPrepareDrugEntryDialog*)pWnd)->OnAddPrepareDrugEntryDialog();
} 
static int _OnEditPrepareDrugEntryDialogFnc(CWnd *pWnd){
	 return ((CPrepareDrugEntryDialog*)pWnd)->OnEditPrepareDrugEntryDialog();
} 
static int _OnDeletePrepareDrugEntryDialogFnc(CWnd *pWnd){
	 return ((CPrepareDrugEntryDialog*)pWnd)->OnDeletePrepareDrugEntryDialog();
} 
static int _OnSavePrepareDrugEntryDialogFnc(CWnd *pWnd){
	 return ((CPrepareDrugEntryDialog*)pWnd)->OnSavePrepareDrugEntryDialog();
} 
static int _OnCancelPrepareDrugEntryDialogFnc(CWnd *pWnd){
	 return ((CPrepareDrugEntryDialog*)pWnd)->OnCancelPrepareDrugEntryDialog();
} 
CPrepareDrugEntryDialog::CPrepareDrugEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPrepareDrugEntryDialog::~CPrepareDrugEntryDialog(){
}
void CPrepareDrugEntryDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 5, 5, 85, 30);
	m_wndName.Create(this,90, 5, 300, 30); 
	m_wndUnitLabel.Create(this, _T("Unit"), 5, 35, 85, 60);
	m_wndUnit.Create(this,90, 35, 170, 60); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 65, 85, 90);
	m_wndQuantity.Create(this,90, 65, 170, 90); 
	m_wndSave.Create(this, _T("&Save"), 135, 96, 215, 121);
	m_wndClose.Create(this, _T("&Close"), 220, 96, 300, 121);

}
void CPrepareDrugEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndUnit.SetLimitText(35);
	m_wndUnit.SetCheckValue(true);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPrepareDrugEntryDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CPrepareDrugEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);

}
void CPrepareDrugEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPrepareDrugEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPrepareDrugEntryDialog::SetDefaultValues(){

	m_szNameKey.Empty();
	m_szUnit.Empty();
	m_nQuantity=0;

}
int CPrepareDrugEntryDialog::SetMode(int nMode){
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
void CPrepareDrugEntryDialog::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareDrugEntryDialog::OnNameSelendok(){
	 
}
/*void CPrepareDrugEntryDialog::OnNameSetfocus(){
	
}*/
/*void CPrepareDrugEntryDialog::OnNameKillfocus(){
	
}*/
long CPrepareDrugEntryDialog::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNameKey
};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPrepareDrugEntryDialog::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPrepareDrugEntryDialog::OnUnitChange(){
	
} */
/*void CPrepareDrugEntryDialog::OnUnitSetfocus(){
	
} */
/*void CPrepareDrugEntryDialog::OnUnitKillfocus(){
	
} */
int CPrepareDrugEntryDialog::OnUnitCheckValue(){
	return 0;
} 
/*void CPrepareDrugEntryDialog::OnQuantityChange(){
	
} */
/*void CPrepareDrugEntryDialog::OnQuantitySetfocus(){
	
} */
/*void CPrepareDrugEntryDialog::OnQuantityKillfocus(){
	
} */
int CPrepareDrugEntryDialog::OnQuantityCheckValue(){
	return 0;
} 
void CPrepareDrugEntryDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareDrugEntryDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPrepareDrugEntryDialog::OnAddPrepareDrugEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPrepareDrugEntryDialog::OnEditPrepareDrugEntryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPrepareDrugEntryDialog::OnDeletePrepareDrugEntryDialog(){
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
 		OnCancelPrepareDrugEntryDialog();
 	}
	return 0;
}
int CPrepareDrugEntryDialog::OnSavePrepareDrugEntryDialog(){
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
 		//OnPrepareDrugEntryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPrepareDrugEntryDialog::OnCancelPrepareDrugEntryDialog(){
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
int CPrepareDrugEntryDialog::OnPrepareDrugEntryDialogListLoadData(){
	return 0;
}
