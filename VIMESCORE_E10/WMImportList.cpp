#include "WMImportList.h"
#include "MainFrame_E10.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CWMImportList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CWMImportList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CWMImportList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CWMImportList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CWMImportList *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CWMImportList *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnReloadSelectFnc(CWnd *pWnd){
	CWMImportList *pVw = (CWMImportList *)pWnd;
	pVw->OnReloadSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CWMImportList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CWMImportList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CWMImportList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CWMImportList*)pWnd)->OnListDeleteItem();
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CWMImportList *pVw = (CWMImportList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CWMImportList *pVw = (CWMImportList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CWMImportList *pVw = (CWMImportList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CWMImportList *pVw = (CWMImportList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAccWMImportListFnc(CWnd *pWnd){
	 return ((CWMImportList*)pWnd)->OnAddAccWMImportList();
} 
static int _OnEditAccWMImportListFnc(CWnd *pWnd){
	 return ((CWMImportList*)pWnd)->OnEditAccWMImportList();
} 
static int _OnDeleteAccWMImportListFnc(CWnd *pWnd){
	 return ((CWMImportList*)pWnd)->OnDeleteAccWMImportList();
} 
static int _OnSaveAccWMImportListFnc(CWnd *pWnd){
	 return ((CWMImportList*)pWnd)->OnSaveAccWMImportList();
} 
static int _OnCancelAccWMImportListFnc(CWnd *pWnd){
	 return ((CWMImportList*)pWnd)->OnCancelAccWMImportList();
} 
CWMImportList::CWMImportList(){

	m_nDlgWidth = 825;
	m_nDlgHeight = 525;
	SetDefaultValues();
}
CWMImportList::~CWMImportList(){
}
void CWMImportList::OnCreateComponents(){
	m_wndReceiptList.Create(this, _T("List of receipt"), 5, 65, 820, 485);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 820, 60);
	m_wndType.Create(this,95, 30, 195, 54); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 90, 55);
	m_wndFromDateLabel.Create(this, _T("From Date"), 200, 30, 280, 55);
	m_wndFromDate.Create(this,285, 30, 395, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 400, 30, 480, 55);
	m_wndToDate.Create(this,485, 30, 595, 55); 
	m_wndSearchNameLabel.Create(this, _T("Search"), 600, 30, 680, 55);
	m_wndSearchName.Create(this,685, 30, 785, 55); 
	m_wndReload.Create(this, _T("@"), 790, 30, 815, 55);
	m_wndList.Create(this,10, 90, 815, 480); 
	m_wndView.Create(this, _T("&View"), 485, 490, 565, 515);
	m_wndAdd.Create(this, _T("&Add"), 570, 490, 650, 515);
	m_wndEdit.Create(this, _T("&Edit"), 655, 490, 735, 515);
	m_wndDelete.Create(this, _T("&Delete"), 740, 490, 820, 515);

}
void CWMImportList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Receipt Date"), CFMT_DATE, 120);
	m_wndList.InsertColumn(1, _T("Receipt No"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(2, _T("Invoice Date"), CFMT_DATE, 120);
	m_wndList.InsertColumn(3, _T("Object"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(4, _T("Journal Memo"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Reason"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Amount"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(7, _T("Receipt Type"), CFMT_TEXT, 120);

}
void CWMImportList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndReload.SetEvent(WE_CLICK, _OnReloadSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAccWMImportListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAccWMImportListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAccWMImportListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAccWMImportListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAccWMImportListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CWMImportList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CWMImportList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CWMImportList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CWMImportList::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearchName.Empty();

}
int CWMImportList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
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
void CWMImportList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CWMImportList::OnTypeSelendok(){
	 
}
/*void CWMImportList::OnTypeSetfocus(){
	
}*/
/*void CWMImportList::OnTypeKillfocus(){
	
}*/
long CWMImportList::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CWMImportList::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CWMImportList::OnFromDateChange(){
	
} */
/*void CWMImportList::OnFromDateSetfocus(){
	
} */
/*void CWMImportList::OnFromDateKillfocus(){
	
} */
int CWMImportList::OnFromDateCheckValue(){
	return 0;
} 
/*void CWMImportList::OnToDateChange(){
	
} */
/*void CWMImportList::OnToDateSetfocus(){
	
} */
/*void CWMImportList::OnToDateKillfocus(){
	
} */
int CWMImportList::OnToDateCheckValue(){
	return 0;
} 
/*void CWMImportList::OnSearchNameChange(){
	
} */
/*void CWMImportList::OnSearchNameSetfocus(){
	
} */
/*void CWMImportList::OnSearchNameKillfocus(){
	
} */
int CWMImportList::OnSearchNameCheckValue(){
	return 0;
} 
void CWMImportList::OnReloadSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CWMImportList::OnListDblClick(){
	
} 
void CWMImportList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CWMImportList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CWMImportList::OnListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ReceiptDate")), 
			rs.GetValue(_T("ReceiptNo")), 
			rs.GetValue(_T("InvoiceDate")), 
			rs.GetValue(_T("Object")), 
			rs.GetValue(_T("JournalMemo")), 
			rs.GetValue(_T("Reason")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("ReceiptType")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CWMImportList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CWMImportList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CWMImportList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CWMImportList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CWMImportList::OnAddAccWMImportList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CWMImportList::OnEditAccWMImportList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CWMImportList::OnDeleteAccWMImportList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelAccWMImportList(); 
 	}
	return 0;
}
int CWMImportList::OnSaveAccWMImportList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
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
 		//OnAccWMImportListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CWMImportList::OnCancelAccWMImportList(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	return 0;
} 
int CWMImportList::OnAccWMImportListListLoadData(){
	return 0;
}
