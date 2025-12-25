#include "HMSWorkPlaceDlg.h"
#include "MainFrm.h"
/*static void _OnWorkingPlaceChangeFnc(CWnd *pWnd){
	((CHMSWorkPlaceDlg *)pWnd)->OnWorkingPlaceChange();
} */
/*static void _OnWorkingPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSWorkPlaceDlg *)pWnd)->OnWorkingPlaceSetfocus();} */ 
/*static void _OnWorkingPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSWorkPlaceDlg *)pWnd)->OnWorkingPlaceKillfocus();
} */
static int _OnWorkingPlaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkPlaceDlg *)pWnd)->OnWorkingPlaceCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSWorkPlaceDlg* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSWorkPlaceDlg *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSWorkPlaceDlg *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSWorkPlaceDlg *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSWorkPlaceDlg *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSWorkPlaceDlg *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSWorkPlaceDlg *pVw = (CHMSWorkPlaceDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSWorkPlaceDlg *pVw = (CHMSWorkPlaceDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSWorkPlaceDlgFnc(CWnd *pWnd){
	 return ((CHMSWorkPlaceDlg*)pWnd)->OnAddHMSWorkPlaceDlg();
} 
static int _OnEditHMSWorkPlaceDlgFnc(CWnd *pWnd){
	 return ((CHMSWorkPlaceDlg*)pWnd)->OnEditHMSWorkPlaceDlg();
} 
static int _OnDeleteHMSWorkPlaceDlgFnc(CWnd *pWnd){
	 return ((CHMSWorkPlaceDlg*)pWnd)->OnDeleteHMSWorkPlaceDlg();
} 
static int _OnSaveHMSWorkPlaceDlgFnc(CWnd *pWnd){
	 return ((CHMSWorkPlaceDlg*)pWnd)->OnSaveHMSWorkPlaceDlg();
} 
static int _OnCancelHMSWorkPlaceDlgFnc(CWnd *pWnd){
	 return ((CHMSWorkPlaceDlg*)pWnd)->OnCancelHMSWorkPlaceDlg();
} 
CHMSWorkPlaceDlg::CHMSWorkPlaceDlg(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSWorkPlaceDlg::~CHMSWorkPlaceDlg(){
}
void CHMSWorkPlaceDlg::OnCreateComponents(){
	m_wndEmployeeInformation.Create(this, _T("Employee Information"), 5, 5, 350, 90);
	m_wndWorkingPlaceLabel.Create(this, _T("Working Place"), 10, 30, 90, 55);
	m_wndWorkingPlace.Create(this,95, 30, 345, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 90, 85);
	m_wndDepartment.Create(this,95, 60, 345, 85); 
	m_wndSave.Create(this, _T("&OK"), 185, 95, 265, 120);
	m_wndClose.Create(this, _T("Close"), 270, 95, 350, 120);

}
void CHMSWorkPlaceDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWorkingPlace.SetLimitText(35);
	m_wndWorkingPlace.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CHMSWorkPlaceDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndWorkingPlace.SetEvent(WE_CHANGE, _OnWorkingPlaceChangeFnc);
	//m_wndWorkingPlace.SetEvent(WE_SETFOCUS, _OnWorkingPlaceSetfocusFnc);
	//m_wndWorkingPlace.SetEvent(WE_KILLFOCUS, _OnWorkingPlaceKillfocusFnc);
	m_wndWorkingPlace.SetEvent(WE_CHECKVALUE, _OnWorkingPlaceCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);

}
void CHMSWorkPlaceDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndWorkingPlace.GetDlgCtrlID(), m_szWorkingPlace);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CHMSWorkPlaceDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSWorkPlaceDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSWorkPlaceDlg::SetDefaultValues(){

	m_szWorkingPlace.Empty();
	m_szDepartmentKey.Empty();

}
int CHMSWorkPlaceDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_szWorkingPlace.Format(_T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
			m_szWorkingPlaceID.Format(_T("108"));
			m_wndWorkingPlace.EnableWindow(FALSE);
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
/*void CHMSWorkPlaceDlg::OnWorkingPlaceChange(){
	
} */
/*void CHMSWorkPlaceDlg::OnWorkingPlaceSetfocus(){
	
} */
/*void CHMSWorkPlaceDlg::OnWorkingPlaceKillfocus(){
	
} */
int CHMSWorkPlaceDlg::OnWorkingPlaceCheckValue(){
	return 0;
} 
void CHMSWorkPlaceDlg::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWorkPlaceDlg::OnDepartmentSelendok(){
	 
}
/*void CHMSWorkPlaceDlg::OnDepartmentSetfocus(){
	
}*/
/*void CHMSWorkPlaceDlg::OnDepartmentKillfocus(){
	
}*/
long CHMSWorkPlaceDlg::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "),szWhere);

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSWorkPlaceDlg::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSWorkPlaceDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSWorkPlaceDlg();
} 
void CHMSWorkPlaceDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSWorkPlaceDlg::OnAddHMSWorkPlaceDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSWorkPlaceDlg::OnEditHMSWorkPlaceDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSWorkPlaceDlg::OnDeleteHMSWorkPlaceDlg(){
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
 		OnCancelHMSWorkPlaceDlg();
 	}
	return 0;
}
int CHMSWorkPlaceDlg::OnSaveHMSWorkPlaceDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;

	CGuiDialog::OnOK();
	return 0;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("UPDATE hms_patient SET hp_workplace = '%s', hp_workplaceid = '%s', hp_department = '%s', hp_type = 'E' WHERE hp_patientno = %ld"), 
		m_szWorkingPlace, m_szWorkingPlaceID, m_szDepartmentKey, m_nPatientNo);
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSWorkPlaceDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
}
int CHMSWorkPlaceDlg::OnCancelHMSWorkPlaceDlg(){
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
int CHMSWorkPlaceDlg::OnHMSWorkPlaceDlgListLoadData(){
	return 0;
}
