#include "AdBusinessPartnerContractTestList.h"
#include "MainFrm.h"
#include "HMSParaclinicalDialog.h"
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractTestList *pVw = (CAdBusinessPartnerContractTestList *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractTestList *pVw = (CAdBusinessPartnerContractTestList *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractTestList *pVw = (CAdBusinessPartnerContractTestList *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnExamListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractTestList*)pWnd)->OnExamListLoadData();
} 
static void _OnExamListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractTestList*)pWnd)->OnExamListDblClick();
} 
static void _OnExamListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerContractTestList*)pWnd)->OnExamListSelectChange(nOldItem, nNewItem);
} 
static int _OnExamListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractTestList*)pWnd)->OnExamListDeleteItem();
} 
static int _OnSelectTestFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractTestList*)pWnd)->OnSelectTest();
	return 0;
} 
static int _OnAddAdBusinessPartnerContractTestListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractTestList*)pWnd)->OnAddAdBusinessPartnerContractTestList();
} 
static int _OnEditAdBusinessPartnerContractTestListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractTestList*)pWnd)->OnEditAdBusinessPartnerContractTestList();
} 
static int _OnDeleteAdBusinessPartnerContractTestListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractTestList*)pWnd)->OnDeleteAdBusinessPartnerContractTestList();
} 
static int _OnSaveAdBusinessPartnerContractTestListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractTestList*)pWnd)->OnSaveAdBusinessPartnerContractTestList();
} 
static int _OnCancelAdBusinessPartnerContractTestListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractTestList*)pWnd)->OnCancelAdBusinessPartnerContractTestList();
} 
CAdBusinessPartnerContractTestList::CAdBusinessPartnerContractTestList(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdBusinessPartnerContractTestList::~CAdBusinessPartnerContractTestList(){
}
void CAdBusinessPartnerContractTestList::OnCreateComponents(){
	m_wndTest.Create(this, _T("Test"), 5, 5, 805, 505);
	m_wndSave.Create(this, _T("Save"), 555, 510, 635, 535);
	m_wndCancel.Create(this, _T("Cancel"), 640, 510, 720, 535);
	m_wndClose.Create(this, _T("Close"), 725, 510, 805, 535);
	m_wndExamList.Create(this,10, 30, 800, 500); 

}
void CAdBusinessPartnerContractTestList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndExamList.InsertColumn(0, _T("STT"), CFMT_TEXT, 80);
	m_wndExamList.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);
	m_wndExamList.InsertColumn(2, _T("Price"), CFMT_TEXT, 150);
	m_wndExamList.InsertColumn(3, _T("Qty"), CFMT_TEXT, 80);


}
void CAdBusinessPartnerContractTestList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndExamList.SetEvent(WE_SELCHANGE, _OnExamListSelectChangeFnc);
	m_wndExamList.SetEvent(WE_LOADDATA, _OnExamListLoadDataFnc);
	m_wndExamList.SetEvent(WE_DBLCLICK, _OnExamListDblClickFnc);
	m_wndExamList.AddEvent(1, _T("Open Test List"), _OnSelectTestFnc, 0, 0, 0);
	SetMode(VM_NONE);

}
void CAdBusinessPartnerContractTestList::OnDoDataExchange(CDataExchange* pDX){

}
void CAdBusinessPartnerContractTestList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CAdBusinessPartnerContractTestList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerContractTestList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdBusinessPartnerContractTestList::SetDefaultValues(){


}
int CAdBusinessPartnerContractTestList::SetMode(int nMode){
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
void CAdBusinessPartnerContractTestList::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractTestList::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractTestList::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractTestList::OnExamListDblClick(){
	
} 
void CAdBusinessPartnerContractTestList::OnExamListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerContractTestList::OnExamListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdBusinessPartnerContractTestList::OnExamListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndExamList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamList.AddItems(
		rs.MoveNext();
	}
	m_wndExamList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CAdBusinessPartnerContractTestList::OnAddAdBusinessPartnerContractTestList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerContractTestList::OnEditAdBusinessPartnerContractTestList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerContractTestList::OnDeleteAdBusinessPartnerContractTestList(){
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
 		OnCancelAdBusinessPartnerContractTestList();
 	}
	return 0;
}
int CAdBusinessPartnerContractTestList::OnSaveAdBusinessPartnerContractTestList(){
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
 		//OnAdBusinessPartnerContractTestListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerContractTestList::OnCancelAdBusinessPartnerContractTestList(){
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
int CAdBusinessPartnerContractTestList::OnAdBusinessPartnerContractTestListListLoadData(){
	return 0;
}

void CAdBusinessPartnerContractTestList::OnSelectTest()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CHMSParaclinicalDialog dlg(pMF);
	if(dlg.DoModal() == IDOK)
	{
		//OnOrderListLoadData();
		//pMF->CreateFees(_T("OTP"));
	}
}
