#include "HMSPatientDepositList.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDepositList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSPatientDepositList *pVw = (CHMSPatientDepositList *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPatientDepositList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientDepositList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientDepositList*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPatientDepositList *pVw = (CHMSPatientDepositList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPatientDepositList *pVw = (CHMSPatientDepositList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPatientDepositList *pVw = (CHMSPatientDepositList *)pWnd;
	pVw->OnPrintSelect();
} 
/*static void _OnNumberInwardChangeFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnNumberInwardChange();
} */
/*static void _OnNumberInwardSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnNumberInwardSetfocus();} */ 
/*static void _OnNumberInwardKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnNumberInwardKillfocus();
} */
static int _OnNumberInwardCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnNumberInwardCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnPatientNameCheckValue();
} 
static int _OnAddHMSPatientDepositListFnc(CWnd *pWnd){
	 return ((CHMSPatientDepositList*)pWnd)->OnAddHMSPatientDepositList();
} 
static int _OnEditHMSPatientDepositListFnc(CWnd *pWnd){
	 return ((CHMSPatientDepositList*)pWnd)->OnEditHMSPatientDepositList();
} 
static int _OnDeleteHMSPatientDepositListFnc(CWnd *pWnd){
	 return ((CHMSPatientDepositList*)pWnd)->OnDeleteHMSPatientDepositList();
} 
static int _OnSaveHMSPatientDepositListFnc(CWnd *pWnd){
	 return ((CHMSPatientDepositList*)pWnd)->OnSaveHMSPatientDepositList();
} 
static int _OnCancelHMSPatientDepositListFnc(CWnd *pWnd){
	 return ((CHMSPatientDepositList*)pWnd)->OnCancelHMSPatientDepositList();
} 
CHMSPatientDepositList::CHMSPatientDepositList(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 644;
	SetDefaultValues();
}
CHMSPatientDepositList::~CHMSPatientDepositList(){
}
void CHMSPatientDepositList::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient List"), 5, 115, 1015, 597);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1015, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 425, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 430, 30, 530, 55);
	m_wndDepartment.Create(this,535, 30, 770, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 775, 30, 875, 55);
	m_wndDocumentNo.Create(this,880, 30, 980, 55); 
	m_wndSearch.Create(this, _T("@"), 985, 30, 1010, 55);
	m_wndList.Create(this,10, 140, 1010, 592); 
	m_wndAdd.Create(this, _T("&Add"), 734, 575, 824, 600);
	m_wndDelete.Create(this, _T("&Delete"), 829, 575, 919, 600);
	m_wndPrint.Create(this, _T("&Print"), 924, 575, 1014, 600);
	m_wndNumberInwardLabel.Create(this, _T("Number Inward"), 5, 64, 85, 89);
	m_wndNumberInward.Create(this,85, 64, 165, 89); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 94, 85, 119);
	m_wndPatientName.Create(this,85, 94, 165, 119); 

}
void CHMSPatientDepositList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndNumberInward.SetLimitText(16);
	m_wndNumberInward.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



}
void CHMSPatientDepositList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndNumberInward.SetEvent(WE_CHANGE, _OnNumberInwardChangeFnc);
	//m_wndNumberInward.SetEvent(WE_SETFOCUS, _OnNumberInwardSetfocusFnc);
	//m_wndNumberInward.SetEvent(WE_KILLFOCUS, _OnNumberInwardKillfocusFnc);
	m_wndNumberInward.SetEvent(WE_CHECKVALUE, _OnNumberInwardCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientDepositListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientDepositListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientDepositListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientDepositListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientDepositListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPatientDepositList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndNumberInward.GetDlgCtrlID(), m_nNumberInward);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSPatientDepositList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientDepositList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientDepositList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nDocumentNo=0;
	m_nNumberInward=0;
	m_szPatientName.Empty();

}
int CHMSPatientDepositList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
/*void CHMSPatientDepositList::OnFromDateChange(){
	
} */
/*void CHMSPatientDepositList::OnFromDateSetfocus(){
	
} */
/*void CHMSPatientDepositList::OnFromDateKillfocus(){
	
} */
int CHMSPatientDepositList::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPatientDepositList::OnToDateChange(){
	
} */
/*void CHMSPatientDepositList::OnToDateSetfocus(){
	
} */
/*void CHMSPatientDepositList::OnToDateKillfocus(){
	
} */
int CHMSPatientDepositList::OnToDateCheckValue(){
	return 0;
} 
void CHMSPatientDepositList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDepositList::OnDepartmentSelendok(){
	 
}
/*void CHMSPatientDepositList::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPatientDepositList::OnDepartmentKillfocus(){
	
}*/
long CHMSPatientDepositList::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientDepositList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientDepositList::OnDocumentNoChange(){
	
} */
/*void CHMSPatientDepositList::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientDepositList::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientDepositList::OnDocumentNoCheckValue(){
	return 0;
} 
void CHMSPatientDepositList::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDepositList::OnListDblClick(){
	
} 
void CHMSPatientDepositList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientDepositList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientDepositList::OnListLoadData(){
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
void CHMSPatientDepositList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDepositList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDepositList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSPatientDepositList::OnNumberInwardChange(){
	
} */
/*void CHMSPatientDepositList::OnNumberInwardSetfocus(){
	
} */
/*void CHMSPatientDepositList::OnNumberInwardKillfocus(){
	
} */
int CHMSPatientDepositList::OnNumberInwardCheckValue(){
	return 0;
} 
/*void CHMSPatientDepositList::OnPatientNameChange(){
	
} */
/*void CHMSPatientDepositList::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientDepositList::OnPatientNameKillfocus(){
	
} */
int CHMSPatientDepositList::OnPatientNameCheckValue(){
	return 0;
} 
int CHMSPatientDepositList::OnAddHMSPatientDepositList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientDepositList::OnEditHMSPatientDepositList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientDepositList::OnDeleteHMSPatientDepositList(){
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
 		OnCancelHMSPatientDepositList();
 	}
	return 0;
}
int CHMSPatientDepositList::OnSaveHMSPatientDepositList(){
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
 		//OnHMSPatientDepositListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientDepositList::OnCancelHMSPatientDepositList(){
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
int CHMSPatientDepositList::OnHMSPatientDepositListListLoadData(){
	return 0;
}
