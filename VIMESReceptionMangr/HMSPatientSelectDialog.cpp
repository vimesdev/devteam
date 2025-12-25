#include "HMSPatientSelectDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSelectDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPatientSelectDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientSelectDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientSelectDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSPatientSelectDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSelectDialog*)pWnd)->OnAddHMSPatientSelectDialog();
} 
static int _OnEditHMSPatientSelectDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSelectDialog*)pWnd)->OnEditHMSPatientSelectDialog();
} 
static int _OnDeleteHMSPatientSelectDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSelectDialog*)pWnd)->OnDeleteHMSPatientSelectDialog();
} 
static int _OnSaveHMSPatientSelectDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSelectDialog*)pWnd)->OnSaveHMSPatientSelectDialog();
} 
static int _OnCancelHMSPatientSelectDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSelectDialog*)pWnd)->OnCancelHMSPatientSelectDialog();
} 
CHMSPatientSelectDialog::CHMSPatientSelectDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPatientSelectDialog::~CHMSPatientSelectDialog(){
}
void CHMSPatientSelectDialog::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 705, 305);
	m_wndList.Create(this,10, 30, 700, 300); 

}
void CHMSPatientSelectDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

    m_wndList.InsertColumn(0, _T("Mã BN"), CFMT_NUMBER, 80);
    m_wndList.InsertColumn(1, _T("Họ tên"), CFMT_TEXT, 200);
    m_wndList.InsertColumn(2, _T("Ngày sinh"), CFMT_DATE, 100);
    m_wndList.InsertColumn(3, _T("Giới tính"), CFMT_TEXT, 80);
    m_wndList.InsertColumn(4, _T("Địa chỉ"), CFMT_TEXT, 250);


}
void CHMSPatientSelectDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CHMSPatientSelectDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSPatientSelectDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSPatientSelectDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientSelectDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientSelectDialog::SetDefaultValues(){


}
int CHMSPatientSelectDialog::SetMode(int nMode){
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
void CHMSPatientSelectDialog::OnListDblClick(){
    OnOK();
} 
void CHMSPatientSelectDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nPatientNo = ToLong(m_wndList.GetItemText(nNewItem, 0));
} 
int CHMSPatientSelectDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientSelectDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
    szSQL.Format(_T("SELECT hp_patientno, hp_surname||' '||hp_midname||' '||hp_firstname as fullname, ") \
        _T("hp_birthdate, sys_sel_getname('sys_sex', hp_sex) as gender, ") \
        _T("hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address ") \
        _T("FROM hms_patient WHERE hp_sin='%s'"), m_szIDNo);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
        m_wndList.AddItems(
            rs.GetValue(_T("hp_patientno")),
            rs.GetValue(_T("fullname")),
            rs.GetValue(_T("hp_birthdate")),
            rs.GetValue(_T("gender")),
            rs.GetValue(_T("address")));
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSPatientSelectDialog::OnAddHMSPatientSelectDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientSelectDialog::OnEditHMSPatientSelectDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientSelectDialog::OnDeleteHMSPatientSelectDialog(){
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
 		OnCancelHMSPatientSelectDialog();
 	}
	return 0;
}
int CHMSPatientSelectDialog::OnSaveHMSPatientSelectDialog(){
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
 		//OnHMSPatientSelectDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientSelectDialog::OnCancelHMSPatientSelectDialog(){
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
int CHMSPatientSelectDialog::OnHMSPatientSelectDialogListLoadData(){
	return 0;
}
