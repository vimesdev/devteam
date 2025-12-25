#include "HMSOperationSchedulePatientListDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSOperationSchedulePatientListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationSchedulePatientListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSOperationSchedulePatientListDialog *pVw = (CHMSOperationSchedulePatientListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSOperationSchedulePatientListDialog *pVw = (CHMSOperationSchedulePatientListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSOperationSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnAddHMSOperationSchedulePatientListDialog();
} 
static int _OnEditHMSOperationSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnEditHMSOperationSchedulePatientListDialog();
} 
static int _OnDeleteHMSOperationSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnDeleteHMSOperationSchedulePatientListDialog();
} 
static int _OnSaveHMSOperationSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnSaveHMSOperationSchedulePatientListDialog();
} 
static int _OnCancelHMSOperationSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnCancelHMSOperationSchedulePatientListDialog();
} 
CHMSOperationSchedulePatientListDialog::CHMSOperationSchedulePatientListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSOperationSchedulePatientListDialog::~CHMSOperationSchedulePatientListDialog(){
}
void CHMSOperationSchedulePatientListDialog::OnCreateComponents(){
	m_wndPatientList.Create(this, _T("Patient List"), 5, 5, 800, 570);
	m_wndList.Create(this,10, 30, 796, 565); 
	m_wndApply.Create(this, _T("&Apply"), 635, 575, 715, 600);
	m_wndClose.Create(this, _T("&Close"), 720, 575, 800, 600);

}
void CHMSOperationSchedulePatientListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Surgery Name"), CFMT_TEXT, 400);
	m_wndList.InsertColumn(4, _T("Doctor"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Mark"), CFMT_TEXT, 40);

}
void CHMSOperationSchedulePatientListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSOperationSchedulePatientListDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSOperationSchedulePatientListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOperationSchedulePatientListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOperationSchedulePatientListDialog::SetDefaultValues(){


}
int CHMSOperationSchedulePatientListDialog::SetMode(int nMode){
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
void CHMSOperationSchedulePatientListDialog::OnListDblClick(){
	
} 
void CHMSOperationSchedulePatientListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationSchedulePatientListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOperationSchedulePatientListDialog::OnListLoadData(){
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
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("SurgeryName")), 
			rs.GetValue(_T("Doctor")), 
			rs.GetValue(_T("Mark")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSOperationSchedulePatientListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationSchedulePatientListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationSchedulePatientListDialog::OnAddHMSOperationSchedulePatientListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationSchedulePatientListDialog::OnEditHMSOperationSchedulePatientListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationSchedulePatientListDialog::OnDeleteHMSOperationSchedulePatientListDialog(){
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
 		OnCancelHMSOperationSchedulePatientListDialog();
 	}
	return 0;
}
int CHMSOperationSchedulePatientListDialog::OnSaveHMSOperationSchedulePatientListDialog(){
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
 		//OnHMSOperationSchedulePatientListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationSchedulePatientListDialog::OnCancelHMSOperationSchedulePatientListDialog(){
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
int CHMSOperationSchedulePatientListDialog::OnHMSOperationSchedulePatientListDialogListLoadData(){
	return 0;
}
