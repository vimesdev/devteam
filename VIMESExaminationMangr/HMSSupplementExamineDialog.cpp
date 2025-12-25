#include "HMSSupplementExamineDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSupplementExamineDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSSupplementExamineDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSSupplementExamineDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSSupplementExamineDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSSupplementExamineDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSSupplementExamineDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSupplementExamineDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSSupplementExamineDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSSupplementExamineDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSSupplementExamineDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSSupplementExamineDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSSupplementExamineDialog *)pWnd)->OnRoomAddNew();
}*/
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSSupplementExamineDialog *pVw = (CHMSSupplementExamineDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSupplementExamineDialog *pVw = (CHMSSupplementExamineDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSSupplementExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSSupplementExamineDialog*)pWnd)->OnAddHMSSupplementExamineDialog();
} 
static int _OnEditHMSSupplementExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSSupplementExamineDialog*)pWnd)->OnEditHMSSupplementExamineDialog();
} 
static int _OnDeleteHMSSupplementExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSSupplementExamineDialog*)pWnd)->OnDeleteHMSSupplementExamineDialog();
} 
static int _OnSaveHMSSupplementExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSSupplementExamineDialog*)pWnd)->OnSaveHMSSupplementExamineDialog();
} 
static int _OnCancelHMSSupplementExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSSupplementExamineDialog*)pWnd)->OnCancelHMSSupplementExamineDialog();
} 
CHMSSupplementExamineDialog::CHMSSupplementExamineDialog(CWnd *pParent, int nRoomID):
	CGuiDialog(pParent)
{
	m_nRoomID = nRoomID;
	m_nDlgWidth = 330;
	m_nDlgHeight = 120;
	SetDefaultValues();
}
CHMSSupplementExamineDialog::~CHMSSupplementExamineDialog(){
}
void CHMSSupplementExamineDialog::OnCreateComponents(){
	m_wndExaminationInformation.Create(this, _T("Examination Information"), 5, 5, 320, 82);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 28, 110, 50);
	m_wndDepartment.Create(this,115, 28, 315, 50); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 55, 110, 77);
	m_wndRoom.Create(this,115, 55, 315, 77); 
	m_wndOK.Create(this, _T("&OK"), 175, 87, 245, 109);
	m_wndCancel.Create(this, _T("&Cancel"), 250, 87, 320, 109);

}
void CHMSSupplementExamineDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_szDepartmentKey = pMF->GetCurrentDepartmentID();
	UpdateData(false);

}
void CHMSSupplementExamineDialog::OnSetWindowEvents(){
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_ADD);

}
void CHMSSupplementExamineDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);

}
void CHMSSupplementExamineDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSupplementExamineDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSupplementExamineDialog::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();

}
int CHMSSupplementExamineDialog::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
		if(!m_szDepartmentKey.IsEmpty())
			m_wndRoom.SetFocus();
		else
			m_wndDepartment.SetFocus();

 		return nOldMode; 
 	} 
void CHMSSupplementExamineDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSupplementExamineDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSSupplementExamineDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSSupplementExamineDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSSupplementExamineDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	};

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_dept WHERE sd_type in('DT') and sd_isactive='Y' %s ORDER BY sd_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSupplementExamineDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSupplementExamineDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSupplementExamineDialog::OnRoomSelendok(){
	 
}
/*void CHMSSupplementExamineDialog::OnRoomSetfocus(){
	
}*/
/*void CHMSSupplementExamineDialog::OnRoomKillfocus(){
	
}*/
long CHMSSupplementExamineDialog::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.Format(_T(" AND her_id=%d "), ToInt(m_szRoomKey));
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_examroom WHERE her_deptid='%s' AND her_id <> %ld %s ORDER BY her_id "), m_szDepartmentKey, m_nRoomID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("her_id")), 
			rs.GetValue(_T("her_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSSupplementExamineDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSupplementExamineDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSupplementExamineDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSSupplementExamineDialog::OnAddHMSSupplementExamineDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSSupplementExamineDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSSupplementExamineDialog::OnEditHMSSupplementExamineDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSSupplementExamineDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSSupplementExamineDialog::OnDeleteHMSSupplementExamineDialog(){
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
 		OnCancelHMSSupplementExamineDialog(); 
 	}
return 0;
 } 
int CHMSSupplementExamineDialog::OnSaveHMSSupplementExamineDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnHMSSupplementExamineDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSupplementExamineDialog::OnCancelHMSSupplementExamineDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSSupplementExamineDialog::OnHMSSupplementExamineDialogListLoadData(){
	return 0;
}
