#include "HMSParaclinicalPermDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnUserNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalPermDialog* )pWnd)->OnUserNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUserNameSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalPermDialog *)pWnd)->OnUserNameSelendok();
}
/*static void _OnUserNameSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalPermDialog *)pWnd)->OnUserNameKillfocus();
}*/
/*static void _OnUserNameKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalPermDialog *)pWnd)->OnUserNameKillfocus();
}*/
static long _OnUserNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalPermDialog *)pWnd)->OnUserNameLoadData();
}
/*static void _OnUserNameAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalPermDialog *)pWnd)->OnUserNameAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalPermDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSParaclinicalPermDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaclinicalPermDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalPermDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSParaclinicalPermDialog *pVw = (CHMSParaclinicalPermDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSParaclinicalPermDialog *pVw = (CHMSParaclinicalPermDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSParaclinicalPermDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalPermDialog*)pWnd)->OnAddHMSParaclinicalPermDialog();
} 
static int _OnEditHMSParaclinicalPermDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalPermDialog*)pWnd)->OnEditHMSParaclinicalPermDialog();
} 
static int _OnDeleteHMSParaclinicalPermDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalPermDialog*)pWnd)->OnDeleteHMSParaclinicalPermDialog();
} 
static int _OnSaveHMSParaclinicalPermDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalPermDialog*)pWnd)->OnSaveHMSParaclinicalPermDialog();
} 
static int _OnCancelHMSParaclinicalPermDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalPermDialog*)pWnd)->OnCancelHMSParaclinicalPermDialog();
} 
CHMSParaclinicalPermDialog::CHMSParaclinicalPermDialog(){

	m_nDlgWidth = 769;
	m_nDlgHeight = 543;
	SetDefaultValues();
}
CHMSParaclinicalPermDialog::~CHMSParaclinicalPermDialog(){
}
void CHMSParaclinicalPermDialog::OnCreateComponents(){
	m_wndParaclinicalGroup.Create(this, _T("Paraclinical Group"), 5, 5, 395, 401);
	m_wndUserNameLabel.Create(this, _T("User Name"), 10, 372, 90, 394);
	m_wndUserName.Create(this,95, 372, 390, 394); 
	m_wndList.Create(this,10, 28, 390, 367); 
	m_wndApply.Create(this, _T("&Apply"), 250, 406, 320, 428);
	m_wndClose.Create(this, _T("&Close"), 325, 406, 395, 428);

}
void CHMSParaclinicalPermDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndUserName.SetCheckValue(true);
	m_wndUserName.LimitText(15);


	m_wndUserName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndUserName.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_hms_paraclinicalpermTbl.SetTableName(_T("hms_paraclinicalperm"));
	m_hms_paraclinicalpermTbl.AddField(_T("hpp_userid"), dfText, 15); 
	m_hms_paraclinicalpermTbl.AddField(_T("hpp_type"), dfText, 7); 

}
void CHMSParaclinicalPermDialog::OnSetWindowEvents(){
	m_wndUserName.SetEvent(WE_SELENDOK, _OnUserNameSelendokFnc);
	//m_wndUserName.SetEvent(WE_SETFOCUS, _OnUserNameSetfocusFnc);
	//m_wndUserName.SetEvent(WE_KILLFOCUS, _OnUserNameKillfocusFnc);
	m_wndUserName.SetEvent(WE_SELCHANGE, _OnUserNameSelectChangeFnc);
	m_wndUserName.SetEvent(WE_LOADDATA, _OnUserNameLoadDataFnc);
	//m_wndUserName.SetEvent(WE_ADDNEW, _OnUserNameAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSParaclinicalPermDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndUserName.GetDlgCtrlID(), m_szUserNameKey);

}
void CHMSParaclinicalPermDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpp_userid"), m_szUserNameKey);

}
void CHMSParaclinicalPermDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_paraclinicalpermTbl.SetValue(_T("hpp_userid"), m_szUserNameKey);

}
void CHMSParaclinicalPermDialog::SetDefaultValues(){

	m_szUserNameKey.Empty();

}
int CHMSParaclinicalPermDialog::SetMode(int nMode){ 
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
void CHMSParaclinicalPermDialog::OnUserNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalPermDialog::OnUserNameSelendok(){
	 
}
/*void CHMSParaclinicalPermDialog::OnUserNameSetfocus(){
	
}*/
/*void CHMSParaclinicalPermDialog::OnUserNameKillfocus(){
	
}*/
long CHMSParaclinicalPermDialog::OnUserNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUserName.IsSearchKey() && !m_szUserNameKey.IsEmpty()){
	};
	m_wndUserName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUserName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalPermDialog::OnUserNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSParaclinicalPermDialog::OnListDblClick(){
	
} 
void CHMSParaclinicalPermDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalPermDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSParaclinicalPermDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSParaclinicalPermDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalPermDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalPermDialog::OnAddHMSParaclinicalPermDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSParaclinicalPermDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSParaclinicalPermDialog::OnEditHMSParaclinicalPermDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSParaclinicalPermDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSParaclinicalPermDialog::OnDeleteHMSParaclinicalPermDialog(){
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
 		OnCancelHMSParaclinicalPermDialog(); 
 	}
return 0;
 } 
int CHMSParaclinicalPermDialog::OnSaveHMSParaclinicalPermDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_paraclinicalpermTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_paraclinicalpermTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSParaclinicalPermDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSParaclinicalPermDialog::OnCancelHMSParaclinicalPermDialog(){
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
int CHMSParaclinicalPermDialog::OnHMSParaclinicalPermDialogListLoadData(){
	return 0;
}
