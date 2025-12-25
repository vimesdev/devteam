#include "WMExportList.h"
#include "MainFrame_E10.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CWMExportList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CWMExportList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CWMExportList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CWMExportList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CWMExportList *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CWMExportList *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnReloadSelectFnc(CWnd *pWnd){
	CWMExportList *pVw = (CWMExportList *)pWnd;
	pVw->OnReloadSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CWMExportList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CWMExportList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CWMExportList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CWMExportList*)pWnd)->OnListDeleteItem();
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CWMExportList *pVw = (CWMExportList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CWMExportList *pVw = (CWMExportList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CWMExportList *pVw = (CWMExportList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CWMExportList *pVw = (CWMExportList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAccWMExportListFnc(CWnd *pWnd){
	 return ((CWMExportList*)pWnd)->OnAddAccWMExportList();
} 
static int _OnEditAccWMExportListFnc(CWnd *pWnd){
	 return ((CWMExportList*)pWnd)->OnEditAccWMExportList();
} 
static int _OnDeleteAccWMExportListFnc(CWnd *pWnd){
	 return ((CWMExportList*)pWnd)->OnDeleteAccWMExportList();
} 
static int _OnSaveAccWMExportListFnc(CWnd *pWnd){
	 return ((CWMExportList*)pWnd)->OnSaveAccWMExportList();
} 
static int _OnCancelAccWMExportListFnc(CWnd *pWnd){
	 return ((CWMExportList*)pWnd)->OnCancelAccWMExportList();
} 
CWMExportList::CWMExportList(){

	m_nDlgWidth = 825;
	m_nDlgHeight = 525;
	SetDefaultValues();
}
CWMExportList::~CWMExportList(){
}
void CWMExportList::OnCreateComponents(){
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
void CWMExportList::OnInitializeComponents(){
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
void CWMExportList::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAccWMExportListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAccWMExportListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAccWMExportListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAccWMExportListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAccWMExportListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CWMExportList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CWMExportList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CWMExportList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CWMExportList::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearchName.Empty();

}
int CWMExportList::SetMode(int nMode){
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
void CWMExportList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CWMExportList::OnTypeSelendok(){
	 
}
/*void CWMExportList::OnTypeSetfocus(){
	
}*/
/*void CWMExportList::OnTypeKillfocus(){
	
}*/
long CWMExportList::OnTypeLoadData(){
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
/*void CWMExportList::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CWMExportList::OnFromDateChange(){
	
} */
/*void CWMExportList::OnFromDateSetfocus(){
	
} */
/*void CWMExportList::OnFromDateKillfocus(){
	
} */
int CWMExportList::OnFromDateCheckValue(){
	return 0;
} 
/*void CWMExportList::OnToDateChange(){
	
} */
/*void CWMExportList::OnToDateSetfocus(){
	
} */
/*void CWMExportList::OnToDateKillfocus(){
	
} */
int CWMExportList::OnToDateCheckValue(){
	return 0;
} 
/*void CWMExportList::OnSearchNameChange(){
	
} */
/*void CWMExportList::OnSearchNameSetfocus(){
	
} */
/*void CWMExportList::OnSearchNameKillfocus(){
	
} */
int CWMExportList::OnSearchNameCheckValue(){
	return 0;
} 
void CWMExportList::OnReloadSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CWMExportList::OnListDblClick(){
	
} 
void CWMExportList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CWMExportList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CWMExportList::OnListLoadData(){
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
void CWMExportList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CWMExportList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CWMExportList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CWMExportList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CWMExportList::OnAddAccWMExportList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CWMExportList::OnEditAccWMExportList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CWMExportList::OnDeleteAccWMExportList(){
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
 		OnCancelAccWMExportList(); 
 	}
	return 0;
}
int CWMExportList::OnSaveAccWMExportList(){
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
 		//OnAccWMExportListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CWMExportList::OnCancelAccWMExportList(){
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
int CWMExportList::OnAccWMExportListListLoadData(){
	return 0;
}
