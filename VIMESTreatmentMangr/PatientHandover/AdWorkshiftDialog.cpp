#include "AdWorkshiftDialog.h"
#include "../MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdWorkshiftDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdWorkshiftDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdWorkshiftDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdWorkshiftDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddShiftSelectFnc(CWnd *pWnd){
	CAdWorkshiftDialog *pVw = (CAdWorkshiftDialog *)pWnd;
	pVw->OnAddShiftSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdWorkshiftDialog *pVw = (CAdWorkshiftDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdWorkshiftDialogFnc(CWnd *pWnd){
	 return ((CAdWorkshiftDialog*)pWnd)->OnAddAdWorkshiftDialog();
} 
static int _OnEditAdWorkshiftDialogFnc(CWnd *pWnd){
	 return ((CAdWorkshiftDialog*)pWnd)->OnEditAdWorkshiftDialog();
} 
static int _OnDeleteAdWorkshiftDialogFnc(CWnd *pWnd){
	 return ((CAdWorkshiftDialog*)pWnd)->OnDeleteAdWorkshiftDialog();
} 
static int _OnSaveAdWorkshiftDialogFnc(CWnd *pWnd){
	 return ((CAdWorkshiftDialog*)pWnd)->OnSaveAdWorkshiftDialog();
} 
static int _OnCancelAdWorkshiftDialogFnc(CWnd *pWnd){
	 return ((CAdWorkshiftDialog*)pWnd)->OnCancelAdWorkshiftDialog();
} 
CAdWorkshiftDialog::CAdWorkshiftDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdWorkshiftDialog::~CAdWorkshiftDialog(){
}
void CAdWorkshiftDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 335, 205); 
	m_wndAddShift.Create(this, _T("Add Shift"), 170, 210, 250, 235);
	m_wndClose.Create(this, _T("Close"), 255, 210, 335, 235);

}
void CAdWorkshiftDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Shift"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("From Time"), CFMT_DATETIME, 100);
	m_wndList.InsertColumn(2, _T("To Time"), CFMT_DATETIME, 100);

}
void CAdWorkshiftDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddShift.SetEvent(WE_CLICK, _OnAddShiftSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
}
void CAdWorkshiftDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CAdWorkshiftDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CAdWorkshiftDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdWorkshiftDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdWorkshiftDialog::SetDefaultValues(){


}
int CAdWorkshiftDialog::SetMode(int nMode){
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
void CAdWorkshiftDialog::OnListDblClick(){
	
} 
void CAdWorkshiftDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdWorkshiftDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdWorkshiftDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(
		_T("select ws_name as shift, ") \
		_T("	ws_from_time as fromtime,") \
		_T("	ws_to_time as totime") \
		_T(" from ad_workshift_view"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Shift")), 
			rs.GetValue(_T("FromTime")), 
			rs.GetValue(_T("ToTime")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CAdWorkshiftDialog::OnAddShiftSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdWorkshiftDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdWorkshiftDialog::OnAddAdWorkshiftDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdWorkshiftDialog::OnEditAdWorkshiftDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdWorkshiftDialog::OnDeleteAdWorkshiftDialog(){
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
 		OnCancelAdWorkshiftDialog();
 	}
	return 0;
}
int CAdWorkshiftDialog::OnSaveAdWorkshiftDialog(){
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
 		//OnAdWorkshiftDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdWorkshiftDialog::OnCancelAdWorkshiftDialog(){
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
int CAdWorkshiftDialog::OnAdWorkshiftDialogListLoadData(){
	return 0;
}
