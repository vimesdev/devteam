#include "PACSResultFormDialog.h"
#include "MainFrm.h"
static long _OnFormListLoadDataFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog*)pWnd)->OnFormListLoadData();
} 
static void _OnFormListDblClickFnc(CWnd *pWnd){
	((CPACSResultFormDialog*)pWnd)->OnFormListDblClick();
} 
static void _OnFormListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSResultFormDialog*)pWnd)->OnFormListSelectChange(nOldItem, nNewItem);
} 
static int _OnFormListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnFormListDeleteItem();
} 
static long _OnLayoutListLoadDataFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog*)pWnd)->OnLayoutListLoadData();
} 
static void _OnLayoutListDblClickFnc(CWnd *pWnd){
	((CPACSResultFormDialog*)pWnd)->OnLayoutListDblClick();
} 
static void _OnLayoutListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSResultFormDialog*)pWnd)->OnLayoutListSelectChange(nOldItem, nNewItem);
} 
static int _OnLayoutListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnLayoutListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog *)pWnd)->OnIDCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CPACSResultFormDialog*)pWnd)->OnActiveSelect();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnReportNameChangeFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnReportNameChange();
} */
/*static void _OnReportNameSetfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnReportNameSetfocus();} */ 
/*static void _OnReportNameKillfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnReportNameKillfocus();
} */
static int _OnReportNameCheckValueFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog *)pWnd)->OnReportNameCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSResultFormDialog* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnGroupAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPACSResultFormDialogFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnAddPACSResultFormDialog();
} 
static int _OnEditPACSResultFormDialogFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnEditPACSResultFormDialog();
} 
static int _OnDeletePACSResultFormDialogFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnDeletePACSResultFormDialog();
} 
static int _OnSavePACSResultFormDialogFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnSavePACSResultFormDialog();
} 
static int _OnCancelPACSResultFormDialogFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnCancelPACSResultFormDialog();
} 
CPACSResultFormDialog::CPACSResultFormDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 985;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CPACSResultFormDialog::~CPACSResultFormDialog(){
}
void CPACSResultFormDialog::OnCreateComponents(){
	m_wndFormList.Create(this,5, 5, 375, 450); 
	m_wndLayoutList.Create(this,380, 5, 980, 570); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 455, 95, 480);
	m_wndID.Create(this,100, 455, 250, 480); 
	m_wndActive.Create(this, _T("Active"), 255, 455, 375, 480);
	m_wndNameLabel.Create(this, _T("Name"), 5, 485, 95, 510);
	m_wndName.Create(this,100, 485, 375, 510); 
	m_wndReportNameLabel.Create(this, _T("Report Name"), 5, 515, 95, 540);
	m_wndReportName.Create(this,100, 515, 375, 540); 
	m_wndGroupLabel.Create(this, _T("Group"), 5, 545, 95, 570);
	m_wndGroup.Create(this,100, 545, 375, 570); 
	m_wndAdd.Create(this, _T("&Add"), 505, 575, 580, 600);
	m_wndEdit.Create(this, _T("&Edit"), 585, 575, 660, 600);
	m_wndDelete.Create(this, _T("&Delete"), 665, 575, 740, 600);
	m_wndSave.Create(this, _T("&Save"), 745, 575, 820, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 825, 575, 900, 600);
	m_wndClose.Create(this, _T("&Close"), 905, 575, 980, 600);

}
void CPACSResultFormDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndReportName.SetLimitText(35);
	m_wndReportName.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(11);


	m_wndFormList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndFormList.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);


	m_wndLayoutList.InsertColumn(0, _T("Name"), CFMT_TEXT, 120);
	m_wndLayoutList.InsertColumn(1, _T("Caption"), CFMT_TEXT, 120);
	m_wndLayoutList.InsertColumn(2, _T("Def Value"), CFMT_TEXT, 150);
	m_wndLayoutList.InsertColumn(3, _T("Value"), CFMT_TEXT, 150);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_hms_pacs_formTbl.SetTableName(_T("hms_pacs_form"));
	m_hms_pacs_formTbl.AddField(_T("hpf_id"), dfText, 15); 
	m_hms_pacs_formTbl.AddField(_T("hpf_name"), dfText, 81); 
	m_hms_pacs_formTbl.AddField(_T("hpf_reportname"), dfText, 35); 
	m_hms_pacs_formTbl.AddField(_T("hpf_groupid"), dfText, 11); 
	m_hms_pacs_formTbl.AddField(_T("hpf_index"), dfLong); 
	m_hms_pacs_formTbl.AddField(_T("hpf_active"), dfText, 1); 

}
void CPACSResultFormDialog::OnSetWindowEvents(){
	m_wndFormList.SetEvent(WE_SELCHANGE, _OnFormListSelectChangeFnc);
	m_wndFormList.SetEvent(WE_LOADDATA, _OnFormListLoadDataFnc);
	m_wndFormList.SetEvent(WE_DBLCLICK, _OnFormListDblClickFnc);
	m_wndFormList.AddEvent(1, _T("Delete"), _OnFormListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndLayoutList.SetEvent(WE_SELCHANGE, _OnLayoutListSelectChangeFnc);
	m_wndLayoutList.SetEvent(WE_LOADDATA, _OnLayoutListLoadDataFnc);
	m_wndLayoutList.SetEvent(WE_DBLCLICK, _OnLayoutListDblClickFnc);
	m_wndLayoutList.AddEvent(1, _T("Delete"), _OnLayoutListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndReportName.SetEvent(WE_CHANGE, _OnReportNameChangeFnc);
	//m_wndReportName.SetEvent(WE_SETFOCUS, _OnReportNameSetfocusFnc);
	//m_wndReportName.SetEvent(WE_KILLFOCUS, _OnReportNameKillfocusFnc);
	m_wndReportName.SetEvent(WE_CHECKVALUE, _OnReportNameCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CPACSResultFormDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndReportName.GetDlgCtrlID(), m_szReportName);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);

}
void CPACSResultFormDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpf_id"), m_szID);
	rs.GetValue(_T("hpf_name"), m_szName);
	rs.GetValue(_T("hpf_reportname"), m_szReportName);
	rs.GetValue(_T("hpf_groupid"), m_szGroupKey);
	rs.GetValue(_T("hpf_active"), m_bActive);

}
void CPACSResultFormDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pacs_formTbl.SetValue(_T("hpf_id"), m_szID);
	m_hms_pacs_formTbl.SetValue(_T("hpf_name"), m_szName);
	m_hms_pacs_formTbl.SetValue(_T("hpf_reportname"), m_szReportName);
	m_hms_pacs_formTbl.SetValue(_T("hpf_groupid"), m_szGroupKey);
	m_hms_pacs_formTbl.SetValue(_T("hpf_active"), m_bActive);

}
void CPACSResultFormDialog::SetDefaultValues(){

	m_szID.Empty();
	m_bActive=FALSE;
	m_szName.Empty();
	m_szReportName.Empty();
	m_szGroupKey.Empty();

}
int CPACSResultFormDialog::SetMode(int nMode){
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
void CPACSResultFormDialog::OnFormListDblClick(){
	
} 
void CPACSResultFormDialog::OnFormListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSResultFormDialog::OnFormListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSResultFormDialog::OnFormListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndFormList.BeginLoad(); 
	m_wndFormList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFormList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndFormList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPACSResultFormDialog::OnLayoutListDblClick(){
	
} 
void CPACSResultFormDialog::OnLayoutListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSResultFormDialog::OnLayoutListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSResultFormDialog::OnLayoutListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndLayoutList.BeginLoad(); 
	m_wndLayoutList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLayoutList.AddItems(
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Caption")), 
			rs.GetValue(_T("DefValue")), 
			rs.GetValue(_T("Value")), NULL);
		rs.MoveNext();
	}
	m_wndLayoutList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CPACSResultFormDialog::OnIDChange(){
	
} */
/*void CPACSResultFormDialog::OnIDSetfocus(){
	
} */
/*void CPACSResultFormDialog::OnIDKillfocus(){
	
} */
int CPACSResultFormDialog::OnIDCheckValue(){
	return 0;
} 
	void CPACSResultFormDialog::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPACSResultFormDialog::OnNameChange(){
	
} */
/*void CPACSResultFormDialog::OnNameSetfocus(){
	
} */
/*void CPACSResultFormDialog::OnNameKillfocus(){
	
} */
int CPACSResultFormDialog::OnNameCheckValue(){
	return 0;
} 
/*void CPACSResultFormDialog::OnReportNameChange(){
	
} */
/*void CPACSResultFormDialog::OnReportNameSetfocus(){
	
} */
/*void CPACSResultFormDialog::OnReportNameKillfocus(){
	
} */
int CPACSResultFormDialog::OnReportNameCheckValue(){
	return 0;
} 
void CPACSResultFormDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSResultFormDialog::OnGroupSelendok(){
	 
}
/*void CPACSResultFormDialog::OnGroupSetfocus(){
	
}*/
/*void CPACSResultFormDialog::OnGroupKillfocus(){
	
}*/
long CPACSResultFormDialog::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSResultFormDialog::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPACSResultFormDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSResultFormDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSResultFormDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSResultFormDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSResultFormDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSResultFormDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSResultFormDialog::OnAddPACSResultFormDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSResultFormDialog::OnEditPACSResultFormDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSResultFormDialog::OnDeletePACSResultFormDialog(){
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
 		OnCancelPACSResultFormDialog(); 
 	}
	return 0;
}
int CPACSResultFormDialog::OnSavePACSResultFormDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_pacs_formTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_pacs_formTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnPACSResultFormDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSResultFormDialog::OnCancelPACSResultFormDialog(){
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
int CPACSResultFormDialog::OnPACSResultFormDialogListLoadData(){
	return 0;
}
