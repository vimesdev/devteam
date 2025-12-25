#include "HMSTreatmentPrescriptionListDialog.h"
#include "MainFrm.h"
static void _OnDateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionListDialog* )pWnd)->OnDateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDateSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDateSelendok();
}
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDateKillfocus();
}*/
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDateKillfocus();
}*/
static long _OnDateLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDateLoadData();
}
/*static void _OnDateAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDateAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionListDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDoctorAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionListDialog *pVw = (CHMSTreatmentPrescriptionListDialog *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionListDialog *pVw = (CHMSTreatmentPrescriptionListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionListDialog *pVw = (CHMSTreatmentPrescriptionListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatmentPrescriptionListDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnAddHMSTreatmentPrescriptionListDialog();
} 
static int _OnEditHMSTreatmentPrescriptionListDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnEditHMSTreatmentPrescriptionListDialog();
} 
static int _OnDeleteHMSTreatmentPrescriptionListDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnDeleteHMSTreatmentPrescriptionListDialog();
} 
static int _OnSaveHMSTreatmentPrescriptionListDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnSaveHMSTreatmentPrescriptionListDialog();
} 
static int _OnCancelHMSTreatmentPrescriptionListDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnCancelHMSTreatmentPrescriptionListDialog();
} 
CHMSTreatmentPrescriptionListDialog::CHMSTreatmentPrescriptionListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSTreatmentPrescriptionListDialog::~CHMSTreatmentPrescriptionListDialog(){
}
void CHMSTreatmentPrescriptionListDialog::OnCreateComponents(){
	m_wndPatientList.Create(this, _T("Patient List"), 5, 35, 800, 555);
	m_wndDateLabel.Create(this, _T("Date"), 10, 5, 110, 30);
	m_wndDate.Create(this,115, 5, 365, 30); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 370, 5, 470, 30);
	m_wndDoctor.Create(this,475, 5, 725, 30); 
	m_wndRefresh.Create(this, _T("Refresh"), 730, 5, 796, 30);
	m_wndList.Create(this,10, 60, 795, 550); 
	m_wndApply.Create(this, _T("&Apply"), 635, 560, 715, 585);
	m_wndClose.Create(this, _T("&Close"), 720, 560, 800, 585);

}
void CHMSTreatmentPrescriptionListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetCheckValue(true);
	m_wndDate.LimitText(35);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);


	m_wndDate.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



}
void CHMSTreatmentPrescriptionListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetEvent(WE_SELENDOK, _OnDateSelendokFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_SELCHANGE, _OnDateSelectChangeFnc);
	m_wndDate.SetEvent(WE_LOADDATA, _OnDateLoadDataFnc);
	//m_wndDate.SetEvent(WE_ADDNEW, _OnDateAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSTreatmentPrescriptionListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDateKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);

}
void CHMSTreatmentPrescriptionListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentPrescriptionListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentPrescriptionListDialog::SetDefaultValues(){

	m_szDateKey.Empty();
	m_szDoctorKey.Empty();

}
int CHMSTreatmentPrescriptionListDialog::SetMode(int nMode){
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
void CHMSTreatmentPrescriptionListDialog::OnDateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionListDialog::OnDateSelendok(){
	 
}
/*void CHMSTreatmentPrescriptionListDialog::OnDateSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionListDialog::OnDateKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionListDialog::OnDateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDate.IsSearchKey() && !m_szDateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDateKey
};
	m_wndDate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentPrescriptionListDialog::OnDateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentPrescriptionListDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionListDialog::OnDoctorSelendok(){
	 
}
/*void CHMSTreatmentPrescriptionListDialog::OnDoctorSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionListDialog::OnDoctorKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionListDialog::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDoctorKey
};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentPrescriptionListDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentPrescriptionListDialog::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionListDialog::OnListDblClick(){
	
} 
void CHMSTreatmentPrescriptionListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentPrescriptionListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentPrescriptionListDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTreatmentPrescriptionListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentPrescriptionListDialog::OnAddHMSTreatmentPrescriptionListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentPrescriptionListDialog::OnEditHMSTreatmentPrescriptionListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentPrescriptionListDialog::OnDeleteHMSTreatmentPrescriptionListDialog(){
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
 		OnCancelHMSTreatmentPrescriptionListDialog();
 	}
	return 0;
}
int CHMSTreatmentPrescriptionListDialog::OnSaveHMSTreatmentPrescriptionListDialog(){
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
 		//OnHMSTreatmentPrescriptionListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentPrescriptionListDialog::OnCancelHMSTreatmentPrescriptionListDialog(){
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
int CHMSTreatmentPrescriptionListDialog::OnHMSTreatmentPrescriptionListDialogListLoadData(){
	return 0;
}
