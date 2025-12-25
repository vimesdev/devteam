#include "HMSPatientProfileInfoDialog.h"
#include "MainFrm.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSPatientProfileInfoDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSPatientProfileInfoDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSPatientProfileInfoDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientProfileInfoDialog *)pWnd)->OnSearchCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientProfileInfoDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPatientProfileInfoDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientProfileInfoDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientProfileInfoDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	CHMSPatientProfileInfoDialog *pVw = (CHMSPatientProfileInfoDialog *)pWnd;
	pVw->OnAllSelect();
} 
static void _OnTestSelectFnc(CWnd *pWnd){
	CHMSPatientProfileInfoDialog *pVw = (CHMSPatientProfileInfoDialog *)pWnd;
	pVw->OnTestSelect();
} 
static void _OnPACSSelectFnc(CWnd *pWnd){
	CHMSPatientProfileInfoDialog *pVw = (CHMSPatientProfileInfoDialog *)pWnd;
	pVw->OnPACSSelect();
} 
static void _OnOperationSelectFnc(CWnd *pWnd){
	CHMSPatientProfileInfoDialog *pVw = (CHMSPatientProfileInfoDialog *)pWnd;
	pVw->OnOperationSelect();
} 
static void _OnDrugMaterialSelectFnc(CWnd *pWnd){
	CHMSPatientProfileInfoDialog *pVw = (CHMSPatientProfileInfoDialog *)pWnd;
	pVw->OnDrugMaterialSelect();
} 
static void _OnCostCollectionSelectFnc(CWnd *pWnd){
	CHMSPatientProfileInfoDialog *pVw = (CHMSPatientProfileInfoDialog *)pWnd;
	pVw->OnCostCollectionSelect();
} 
static void _OnProfileSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSPatientProfileInfoDialog*)pWnd)->OnProfileSelectChange(nOld, nNew);
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientProfileInfoDialog *pVw = (CHMSPatientProfileInfoDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPatientProfileInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientProfileInfoDialog*)pWnd)->OnAddHMSPatientProfileInfoDialog();
} 
static int _OnEditHMSPatientProfileInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientProfileInfoDialog*)pWnd)->OnEditHMSPatientProfileInfoDialog();
} 
static int _OnDeleteHMSPatientProfileInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientProfileInfoDialog*)pWnd)->OnDeleteHMSPatientProfileInfoDialog();
} 
static int _OnSaveHMSPatientProfileInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientProfileInfoDialog*)pWnd)->OnSaveHMSPatientProfileInfoDialog();
} 
static int _OnCancelHMSPatientProfileInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientProfileInfoDialog*)pWnd)->OnCancelHMSPatientProfileInfoDialog();
} 
CHMSPatientProfileInfoDialog::CHMSPatientProfileInfoDialog(CWnd *pParent, long nPatientNo):
	CGuiDialog(pParent), m_nPatientNo(nPatientNo){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 685;
	SetDefaultValues();
}
CHMSPatientProfileInfoDialog::~CHMSPatientProfileInfoDialog(){
}
void CHMSPatientProfileInfoDialog::OnCreateComponents(){
	m_wndSearchLabel.Create(this, _T("Search"), 5, 5, 85, 30);
	m_wndSearch.Create(this,90, 5, 205, 30); 
	m_wndList.Create(this,5, 35, 205, 465); 
	m_wndAll.Create(this, _T("All"), 5, 470, 205, 495);
	m_wndTest.Create(this, _T("Test"), 5, 500, 205, 525);
	m_wndPACS.Create(this, _T("PACS"), 5, 530, 205, 555);
	m_wndOperation.Create(this, _T("Operation"), 5, 560, 205, 585);
	m_wndDrugMaterial.Create(this, _T("Drug && material"), 5, 590, 205, 615);
	m_wndCostCollection.Create(this, _T("Cost collection"), 6, 620, 206, 645);
	m_wndPatientProfile.Create(this, _T("Patient Profile"), 210, 4, 1000, 645);
	m_wndProfile.Create(this,215, 35, 995, 640); 
	m_wndClose.Create(this, _T("&Close"), 920, 650, 1000, 675);

}
void CHMSPatientProfileInfoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Doc#"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(1, _T("Dept Id"), CFMT_TEXT, 70);

}
void CHMSPatientProfileInfoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndTest.SetEvent(WE_CLICK, _OnTestSelectFnc);
	m_wndPACS.SetEvent(WE_CLICK, _OnPACSSelectFnc);
	m_wndOperation.SetEvent(WE_CLICK, _OnOperationSelectFnc);
	m_wndDrugMaterial.SetEvent(WE_CLICK, _OnDrugMaterialSelectFnc);
	m_wndCostCollection.SetEvent(WE_CLICK, _OnCostCollectionSelectFnc);
	m_wndProfile.SetEvent(WE_SELCHANGE, _OnProfileSelectChangeFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSPatientProfileInfoDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CHMSPatientProfileInfoDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CHMSPatientProfileInfoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientProfileInfoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientProfileInfoDialog::SetDefaultValues(){

	m_szSearch.Empty();

}
int CHMSPatientProfileInfoDialog::SetMode(int nMode){
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
/*void CHMSPatientProfileInfoDialog::OnSearchChange(){
	
} */
/*void CHMSPatientProfileInfoDialog::OnSearchSetfocus(){
	
} */
/*void CHMSPatientProfileInfoDialog::OnSearchKillfocus(){
	
} */
int CHMSPatientProfileInfoDialog::OnSearchCheckValue(){
	return 0;
} 
void CHMSPatientProfileInfoDialog::OnListDblClick(){
	
} 
void CHMSPatientProfileInfoDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientProfileInfoDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientProfileInfoDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Doc#")), 
			rs.GetValue(_T("DeptId")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPatientProfileInfoDialog::OnAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientProfileInfoDialog::OnTestSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientProfileInfoDialog::OnPACSSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientProfileInfoDialog::OnOperationSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientProfileInfoDialog::OnDrugMaterialSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientProfileInfoDialog::OnCostCollectionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientProfileInfoDialog::OnProfileSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientProfileInfoDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientProfileInfoDialog::OnAddHMSPatientProfileInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientProfileInfoDialog::OnEditHMSPatientProfileInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientProfileInfoDialog::OnDeleteHMSPatientProfileInfoDialog(){
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
 		OnCancelHMSPatientProfileInfoDialog();
 	}
	return 0;
}
int CHMSPatientProfileInfoDialog::OnSaveHMSPatientProfileInfoDialog(){
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
 		//OnHMSPatientProfileInfoDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientProfileInfoDialog::OnCancelHMSPatientProfileInfoDialog(){
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
int CHMSPatientProfileInfoDialog::OnHMSPatientProfileInfoDialogListLoadData(){
	return 0;
}
