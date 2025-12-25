#include "HMSFreeDiscountLineDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFreeDiscountLineDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFreeDiscountLineDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFreeDiscountLineDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFreeDiscountLineDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSFreeDiscountLineDialog *pVw = (CHMSFreeDiscountLineDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSFreeDiscountLineDialog *pVw = (CHMSFreeDiscountLineDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFreeDiscountLineDialog *pVw = (CHMSFreeDiscountLineDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSFreeDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSFreeDiscountLineDialog*)pWnd)->OnAddHMSFreeDiscountLineDialog();
} 
static int _OnEditHMSFreeDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSFreeDiscountLineDialog*)pWnd)->OnEditHMSFreeDiscountLineDialog();
} 
static int _OnDeleteHMSFreeDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSFreeDiscountLineDialog*)pWnd)->OnDeleteHMSFreeDiscountLineDialog();
} 
static int _OnSaveHMSFreeDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSFreeDiscountLineDialog*)pWnd)->OnSaveHMSFreeDiscountLineDialog();
} 
static int _OnCancelHMSFreeDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSFreeDiscountLineDialog*)pWnd)->OnCancelHMSFreeDiscountLineDialog();
} 
CHMSFreeDiscountLineDialog::CHMSFreeDiscountLineDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSFreeDiscountLineDialog::~CHMSFreeDiscountLineDialog(){
}
void CHMSFreeDiscountLineDialog::OnCreateComponents(){
	m_wndFeeInformation.Create(this, _T("Fee Information"), 5, 5, 800, 570);
	m_wndList.Create(this,10, 30, 795, 565); 
	m_wndApply.Create(this, _T("&Apply"), 430, 575, 550, 600);
	m_wndDelete.Create(this, _T("Delete"), 555, 575, 675, 600);
	m_wndClose.Create(this, _T("&Close"), 680, 575, 800, 600);

}
void CHMSFreeDiscountLineDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 330);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_TEXT, 100);

}
void CHMSFreeDiscountLineDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSFreeDiscountLineDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSFreeDiscountLineDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFreeDiscountLineDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFreeDiscountLineDialog::SetDefaultValues(){


}
int CHMSFreeDiscountLineDialog::SetMode(int nMode){
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
void CHMSFreeDiscountLineDialog::OnListDblClick(){
	
} 
void CHMSFreeDiscountLineDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFreeDiscountLineDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFreeDiscountLineDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSFreeDiscountLineDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFreeDiscountLineDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFreeDiscountLineDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFreeDiscountLineDialog::OnAddHMSFreeDiscountLineDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFreeDiscountLineDialog::OnEditHMSFreeDiscountLineDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFreeDiscountLineDialog::OnDeleteHMSFreeDiscountLineDialog(){
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
 		OnCancelHMSFreeDiscountLineDialog();
 	}
	return 0;
}
int CHMSFreeDiscountLineDialog::OnSaveHMSFreeDiscountLineDialog(){
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
 		//OnHMSFreeDiscountLineDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFreeDiscountLineDialog::OnCancelHMSFreeDiscountLineDialog(){
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
int CHMSFreeDiscountLineDialog::OnHMSFreeDiscountLineDialogListLoadData(){
	return 0;
}
