#include "HMSParaclinicalDialog.h"
#include "MainFrm.h"
static long _OnParaclinicalListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog*)pWnd)->OnParaclinicalListLoadData();
} 
static void _OnParaclinicalListDblClickFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog*)pWnd)->OnParaclinicalListDblClick();
} 
static void _OnParaclinicalListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaclinicalDialog*)pWnd)->OnParaclinicalListSelectChange(nOldItem, nNewItem);
} 
static int _OnParaclinicalListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnParaclinicalListDeleteItem();
} 
static void _OnPerformDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalDialog* )pWnd)->OnPerformDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnPerformDepartmentSelendok();
}
/*static void _OnPerformDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnPerformDepartmentKillfocus();
}*/
/*static void _OnPerformDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnPerformDepartmentKillfocus();
}*/
static long _OnPerformDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog *)pWnd)->OnPerformDepartmentLoadData();
}
/*static void _OnPerformDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnPerformDepartmentAddNew();
}*/
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaclinicalDialog*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnTestListDeleteItem();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSParaclinicalDialog *pVw = (CHMSParaclinicalDialog *)pWnd;
	pVw->OnAddSelect();
} 
static long _OnSelectListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog*)pWnd)->OnSelectListLoadData();
} 
static void _OnSelectListDblClickFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog*)pWnd)->OnSelectListDblClick();
} 
static void _OnSelectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaclinicalDialog*)pWnd)->OnSelectListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnSelectListDeleteItem();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSParaclinicalDialog *pVw = (CHMSParaclinicalDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSParaclinicalDialog *pVw = (CHMSParaclinicalDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSParaclinicalDialog *pVw = (CHMSParaclinicalDialog *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnGroupSelectFnc(CWnd *pWnd){
	CHMSParaclinicalDialog *pVw = (CHMSParaclinicalDialog *)pWnd;
	pVw->OnGroupSelect();
} 
static int _OnAddHMSParaclinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnAddHMSParaclinicalDialog();
} 
static int _OnEditHMSParaclinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnEditHMSParaclinicalDialog();
} 
static int _OnDeleteHMSParaclinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnDeleteHMSParaclinicalDialog();
} 
static int _OnSaveHMSParaclinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnSaveHMSParaclinicalDialog();
} 
static int _OnCancelHMSParaclinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnCancelHMSParaclinicalDialog();
} 
CHMSParaclinicalDialog::CHMSParaclinicalDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 955;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSParaclinicalDialog::~CHMSParaclinicalDialog(){
}
void CHMSParaclinicalDialog::OnCreateComponents(){
	m_wndParaclinicalList.Create(this,5, 5, 240, 540); 
	m_wndPerformDepartmentLabel.Create(this, _T("&Department"), 5, 545, 85, 571);
	m_wndPerformDepartment.Create(this,90, 545, 240, 570); 
	m_wndTestList.Create(this,245, 5, 595, 540); 
	m_wndSearchLabel.Create(this, _T("&Search"), 245, 545, 315, 571);
	m_wndSearch.Create(this,320, 545, 510, 570); 
	m_wndAdd.Create(this, _T("&Add >>"), 515, 575, 595, 600);
	m_wndSelectList.Create(this,600, 5, 950, 540); 
	m_wndRemove.Create(this, _T("<< &Remove"), 600, 575, 680, 600);
	m_wndApply.Create(this, _T("&Apply"), 785, 575, 865, 600);
	m_wndClose.Create(this, _T("&Close"), 870, 575, 950, 600);
	m_wndOrderDateLabel.Create(this, _T("Date"), 600, 545, 670, 570);
	m_wndOrderDate.Create(this,675, 545, 760, 570); 
	m_wndGroup.Create(this, _T("Group"), 515, 545, 595, 570);

}
void CHMSParaclinicalDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPerformDepartment.SetCheckValue(true);
	m_wndPerformDepartment.LimitText(35);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);


	m_wndPerformDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPerformDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndTestList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndTestList.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 30);


	m_wndSelectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndSelectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndSelectList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 30);

}
void CHMSParaclinicalDialog::OnSetWindowEvents(){
	m_wndParaclinicalList.SetEvent(WE_SELCHANGE, _OnParaclinicalListSelectChangeFnc);
	m_wndParaclinicalList.SetEvent(WE_LOADDATA, _OnParaclinicalListLoadDataFnc);
	m_wndParaclinicalList.SetEvent(WE_DBLCLICK, _OnParaclinicalListDblClickFnc);
	m_wndParaclinicalList.AddEvent(1, _T("Delete"), _OnParaclinicalListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPerformDepartment.SetEvent(WE_SELENDOK, _OnPerformDepartmentSelendokFnc);
	//m_wndPerformDepartment.SetEvent(WE_SETFOCUS, _OnPerformDepartmentSetfocusFnc);
	//m_wndPerformDepartment.SetEvent(WE_KILLFOCUS, _OnPerformDepartmentKillfocusFnc);
	m_wndPerformDepartment.SetEvent(WE_SELCHANGE, _OnPerformDepartmentSelectChangeFnc);
	m_wndPerformDepartment.SetEvent(WE_LOADDATA, _OnPerformDepartmentLoadDataFnc);
	//m_wndPerformDepartment.SetEvent(WE_ADDNEW, _OnPerformDepartmentAddNewFnc);
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSelectList.SetEvent(WE_SELCHANGE, _OnSelectListSelectChangeFnc);
	m_wndSelectList.SetEvent(WE_LOADDATA, _OnSelectListLoadDataFnc);
	m_wndSelectList.SetEvent(WE_DBLCLICK, _OnSelectListDblClickFnc);
	m_wndSelectList.AddEvent(1, _T("Delete"), _OnSelectListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndGroup.SetEvent(WE_CLICK, _OnGroupSelectFnc);

}
void CHMSParaclinicalDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPerformDepartment.GetDlgCtrlID(), m_szPerformDepartmentKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);

}
void CHMSParaclinicalDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSParaclinicalDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSParaclinicalDialog::SetDefaultValues(){

	m_szPerformDepartmentKey.Empty();
	m_szSearch.Empty();
	m_szOrderDate.Empty();

}
int CHMSParaclinicalDialog::SetMode(int nMode){
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
void CHMSParaclinicalDialog::OnParaclinicalListDblClick(){
	
} 
void CHMSParaclinicalDialog::OnParaclinicalListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalDialog::OnParaclinicalListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSParaclinicalDialog::OnParaclinicalListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndParaclinicalList.BeginLoad(); 
	m_wndParaclinicalList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParaclinicalList.AddItems(
		rs.MoveNext();
	}
	m_wndParaclinicalList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSParaclinicalDialog::OnPerformDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalDialog::OnPerformDepartmentSelendok(){
	 
}
/*void CHMSParaclinicalDialog::OnPerformDepartmentSetfocus(){
	
}*/
/*void CHMSParaclinicalDialog::OnPerformDepartmentKillfocus(){
	
}*/
long CHMSParaclinicalDialog::OnPerformDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformDepartment.IsSearchKey() && !m_szPerformDepartmentKey.IsEmpty()){
	};
	m_wndPerformDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalDialog::OnPerformDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSParaclinicalDialog::OnTestListDblClick(){
	
} 
void CHMSParaclinicalDialog::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalDialog::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSParaclinicalDialog::OnTestListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestList.BeginLoad(); 
	m_wndTestList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalDialog::OnSearchChange(){
	
} */
/*void CHMSParaclinicalDialog::OnSearchSetfocus(){
	
} */
/*void CHMSParaclinicalDialog::OnSearchKillfocus(){
	
} */
int CHMSParaclinicalDialog::OnSearchCheckValue(){
	return 0;
} 
void CHMSParaclinicalDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalDialog::OnSelectListDblClick(){
	
} 
void CHMSParaclinicalDialog::OnSelectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalDialog::OnSelectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSParaclinicalDialog::OnSelectListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSelectList.BeginLoad(); 
	m_wndSelectList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSelectList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), NULL);
		rs.MoveNext();
	}
	m_wndSelectList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSParaclinicalDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSParaclinicalDialog::OnOrderDateChange(){
	
} */
/*void CHMSParaclinicalDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSParaclinicalDialog::OnOrderDateKillfocus(){
	
} */
int CHMSParaclinicalDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSParaclinicalDialog::OnGroupSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalDialog::OnAddHMSParaclinicalDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSParaclinicalDialog::OnEditHMSParaclinicalDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSParaclinicalDialog::OnDeleteHMSParaclinicalDialog(){
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
 		OnCancelHMSParaclinicalDialog(); 
 	}
	return 0;
}
int CHMSParaclinicalDialog::OnSaveHMSParaclinicalDialog(){
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
 		//OnHMSParaclinicalDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSParaclinicalDialog::OnCancelHMSParaclinicalDialog(){
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
int CHMSParaclinicalDialog::OnHMSParaclinicalDialogListLoadData(){
	return 0;
}
