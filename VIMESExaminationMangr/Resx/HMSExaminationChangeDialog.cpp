#include "HMSExaminationChangeDialog.h"
#include "MainFrm.h"
static void _OnExaminationRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationChangeDialog* )pWnd)->OnExaminationRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExaminationRoomSelendokFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExaminationRoomSelendok();
}
/*static void _OnExaminationRoomSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExaminationRoomKillfocus();
}*/
/*static void _OnExaminationRoomKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExaminationRoomKillfocus();
}*/
static long _OnExaminationRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationChangeDialog *)pWnd)->OnExaminationRoomLoadData();
}
/*static void _OnExaminationRoomAddNewFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExaminationRoomAddNew();
}*/
static void _OnExamTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationChangeDialog* )pWnd)->OnExamTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamTypeSelendokFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExamTypeSelendok();
}
/*static void _OnExamTypeSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExamTypeKillfocus();
}*/
/*static void _OnExamTypeKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExamTypeKillfocus();
}*/
static long _OnExamTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationChangeDialog *)pWnd)->OnExamTypeLoadData();
}
/*static void _OnExamTypeAddNewFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExamTypeAddNew();
}*/
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSExaminationChangeDialog *pVw = (CHMSExaminationChangeDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSExaminationChangeDialog *pVw = (CHMSExaminationChangeDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSExaminationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationChangeDialog*)pWnd)->OnAddHMSExaminationChangeDialog();
} 
static int _OnEditHMSExaminationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationChangeDialog*)pWnd)->OnEditHMSExaminationChangeDialog();
} 
static int _OnDeleteHMSExaminationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationChangeDialog*)pWnd)->OnDeleteHMSExaminationChangeDialog();
} 
static int _OnSaveHMSExaminationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationChangeDialog*)pWnd)->OnSaveHMSExaminationChangeDialog();
} 
static int _OnCancelHMSExaminationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationChangeDialog*)pWnd)->OnCancelHMSExaminationChangeDialog();
} 
CHMSExaminationChangeDialog::CHMSExaminationChangeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 400;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSExaminationChangeDialog::~CHMSExaminationChangeDialog(){
}
void CHMSExaminationChangeDialog::OnCreateComponents(){
	m_wndChangeInformation.Create(this, _T("Change Information"), 5, 5, 390, 90);
	m_wndExaminationRoomLabel.Create(this, _T("Examination Room"), 10, 30, 130, 55);
	m_wndExaminationRoom.Create(this,135, 30, 385, 55); 
	m_wndExamTypeLabel.Create(this, _T("Exam Type"), 10, 60, 130, 85);
	m_wndExamType.Create(this,135, 60, 385, 85); 
	m_wndOK.Create(this, _T("&OK"), 235, 95, 310, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 315, 95, 390, 120);

}
void CHMSExaminationChangeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndExaminationRoom.SetCheckValue(true);
	m_wndExaminationRoom.LimitText(35);
	m_wndExamType.SetCheckValue(true);
	m_wndExamType.LimitText(35);


	m_wndExaminationRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExaminationRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndExamType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExamType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSExaminationChangeDialog::OnSetWindowEvents(){
	m_wndExaminationRoom.SetEvent(WE_SELENDOK, _OnExaminationRoomSelendokFnc);
	//m_wndExaminationRoom.SetEvent(WE_SETFOCUS, _OnExaminationRoomSetfocusFnc);
	//m_wndExaminationRoom.SetEvent(WE_KILLFOCUS, _OnExaminationRoomKillfocusFnc);
	m_wndExaminationRoom.SetEvent(WE_SELCHANGE, _OnExaminationRoomSelectChangeFnc);
	m_wndExaminationRoom.SetEvent(WE_LOADDATA, _OnExaminationRoomLoadDataFnc);
	//m_wndExaminationRoom.SetEvent(WE_ADDNEW, _OnExaminationRoomAddNewFnc);
	m_wndExamType.SetEvent(WE_SELENDOK, _OnExamTypeSelendokFnc);
	//m_wndExamType.SetEvent(WE_SETFOCUS, _OnExamTypeSetfocusFnc);
	//m_wndExamType.SetEvent(WE_KILLFOCUS, _OnExamTypeKillfocusFnc);
	m_wndExamType.SetEvent(WE_SELCHANGE, _OnExamTypeSelectChangeFnc);
	m_wndExamType.SetEvent(WE_LOADDATA, _OnExamTypeLoadDataFnc);
	//m_wndExamType.SetEvent(WE_ADDNEW, _OnExamTypeAddNewFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExaminationChangeDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExaminationChangeDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExaminationChangeDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExaminationChangeDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExaminationChangeDialogFnc, 0, 'T', VK_CONTROL);

}
void CHMSExaminationChangeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndExaminationRoom.GetDlgCtrlID(), m_szExaminationRoomKey);
	DDX_TextEx(pDX, m_wndExamType.GetDlgCtrlID(), m_szExamTypeKey);

}
void CHMSExaminationChangeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExaminationChangeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExaminationChangeDialog::SetDefaultValues(){

	m_szExaminationRoomKey.Empty();
	m_szExamTypeKey.Empty();

}
int CHMSExaminationChangeDialog::SetMode(int nMode){
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
void CHMSExaminationChangeDialog::OnExaminationRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationChangeDialog::OnExaminationRoomSelendok(){
	 
}
/*void CHMSExaminationChangeDialog::OnExaminationRoomSetfocus(){
	
}*/
/*void CHMSExaminationChangeDialog::OnExaminationRoomKillfocus(){
	
}*/
long CHMSExaminationChangeDialog::OnExaminationRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExaminationRoom.IsSearchKey() && !m_szExaminationRoomKey.IsEmpty()){
	};
	m_wndExaminationRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExaminationRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExaminationChangeDialog::OnExaminationRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExaminationChangeDialog::OnExamTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationChangeDialog::OnExamTypeSelendok(){
	 
}
/*void CHMSExaminationChangeDialog::OnExamTypeSetfocus(){
	
}*/
/*void CHMSExaminationChangeDialog::OnExamTypeKillfocus(){
	
}*/
long CHMSExaminationChangeDialog::OnExamTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamType.IsSearchKey() && !m_szExamTypeKey.IsEmpty()){
	};
	m_wndExamType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExaminationChangeDialog::OnExamTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExaminationChangeDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationChangeDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExaminationChangeDialog::OnAddHMSExaminationChangeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSExaminationChangeDialog::OnEditHMSExaminationChangeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExaminationChangeDialog::OnDeleteHMSExaminationChangeDialog(){
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
 		OnCancelHMSExaminationChangeDialog(); 
 	}
	return 0;
}
int CHMSExaminationChangeDialog::OnSaveHMSExaminationChangeDialog(){
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
 		//OnHMSExaminationChangeDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSExaminationChangeDialog::OnCancelHMSExaminationChangeDialog(){
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
int CHMSExaminationChangeDialog::OnHMSExaminationChangeDialogListLoadData(){
	return 0;
}
