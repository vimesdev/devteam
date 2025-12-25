#include "NationlityDialog.h"
#include "MainFrm.h"
static void _OnNationalitySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CNationlityDialog* )pWnd)->OnNationalitySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNationalitySelendokFnc(CWnd *pWnd){
	((CNationlityDialog *)pWnd)->OnNationalitySelendok();
}
/*static void _OnNationalitySetfocusFnc(CWnd *pWnd){
	((CNationlityDialog *)pWnd)->OnNationalityKillfocus();
}*/
/*static void _OnNationalityKillfocusFnc(CWnd *pWnd){
	((CNationlityDialog *)pWnd)->OnNationalityKillfocus();
}*/
static long _OnNationalityLoadDataFnc(CWnd *pWnd){
	return ((CNationlityDialog *)pWnd)->OnNationalityLoadData();
}
/*static void _OnNationalityAddNewFnc(CWnd *pWnd){
	((CNationlityDialog *)pWnd)->OnNationalityAddNew();
}*/
static void _OnOKSelectFnc(CWnd *pWnd){
	CNationlityDialog *pVw = (CNationlityDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CNationlityDialog *pVw = (CNationlityDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddNationlityDialogFnc(CWnd *pWnd){
	 return ((CNationlityDialog*)pWnd)->OnAddNationlityDialog();
} 
static int _OnEditNationlityDialogFnc(CWnd *pWnd){
	 return ((CNationlityDialog*)pWnd)->OnEditNationlityDialog();
} 
static int _OnDeleteNationlityDialogFnc(CWnd *pWnd){
	 return ((CNationlityDialog*)pWnd)->OnDeleteNationlityDialog();
} 
static int _OnSaveNationlityDialogFnc(CWnd *pWnd){
	 return ((CNationlityDialog*)pWnd)->OnSaveNationlityDialog();
} 
static int _OnCancelNationlityDialogFnc(CWnd *pWnd){
	 return ((CNationlityDialog*)pWnd)->OnCancelNationlityDialog();
} 
CNationlityDialog::CNationlityDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 305;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CNationlityDialog::~CNationlityDialog(){
}
void CNationlityDialog::OnCreateComponents(){
	m_wndNationalityLabel.Create(this, _T("Nationality"), 5, 7, 85, 32);
	m_wndNationality.Create(this,90, 7, 252, 32); 
	m_wndOK.Create(this, _T("&OK"), 87, 37, 167, 62);
	m_wndCancel.Create(this, _T("&Cancel"), 172, 37, 252, 62);

}
void CNationlityDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNationality.SetCheckValue(true);
	m_wndNationality.LimitText(35);


	m_wndNationality.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNationality.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

}
void CNationlityDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNationality.SetEvent(WE_SELENDOK, _OnNationalitySelendokFnc);
	//m_wndNationality.SetEvent(WE_SETFOCUS, _OnNationalitySetfocusFnc);
	//m_wndNationality.SetEvent(WE_KILLFOCUS, _OnNationalityKillfocusFnc);
	m_wndNationality.SetEvent(WE_SELCHANGE, _OnNationalitySelectChangeFnc);
	m_wndNationality.SetEvent(WE_LOADDATA, _OnNationalityLoadDataFnc);
	//m_wndNationality.SetEvent(WE_ADDNEW, _OnNationalityAddNewFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_EDIT);

}
void CNationlityDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndNationality.GetDlgCtrlID(), m_szNationalityKey);

}
void CNationlityDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CNationlityDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CNationlityDialog::SetDefaultValues(){

	m_szNationalityKey.Empty();

}
int CNationlityDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
void CNationlityDialog::OnNationalitySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CNationlityDialog::OnNationalitySelendok(){
	 
}
/*void CNationlityDialog::OnNationalitySetfocus(){
	
}*/
/*void CNationlityDialog::OnNationalityKillfocus(){
	
}*/
long CNationlityDialog::OnNationalityLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNationality.IsSearchKey() && !m_szNationalityKey.IsEmpty())
	{
	 szWhere.Format(_T(" and hq_id='%s' "), m_szNationalityKey);
	};
	m_wndNationality.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hq_id as maqt, hq_name as tenqt from hms_quoctich %s ORDER BY hq_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndNationality.AddItems(
			rs.GetValue(_T("maqt")), 
			rs.GetValue(_T("tenqt")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CNationlityDialog::OnNationalityAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CNationlityDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
//	m_szNationalityKey = m_wndNationality.GetCurrent(0);
	m_szNationalityDesc = m_wndNationality.GetCurrent(1);
	CGuiDialog::OnOK();
} 
void CNationlityDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CNationlityDialog::OnAddNationlityDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CNationlityDialog::OnEditNationlityDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CNationlityDialog::OnDeleteNationlityDialog(){
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
 		OnCancelNationlityDialog();
 	}
	return 0;
}
int CNationlityDialog::OnSaveNationlityDialog(){
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
 		//OnNationlityDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CNationlityDialog::OnCancelNationlityDialog(){
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
int CNationlityDialog::OnNationlityDialogListLoadData(){
	return 0;
}
