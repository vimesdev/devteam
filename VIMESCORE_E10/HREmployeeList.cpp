#include "HREmployeeList.h"
#include "MainFrame_E10.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHREmployeeList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHREmployeeList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHREmployeeList *)pWnd)->OnNameCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHREmployeeList *pVw = (CHREmployeeList *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHREmployeeList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHREmployeeList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHREmployeeList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHREmployeeList*)pWnd)->OnListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHREmployeeList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHREmployeeList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHREmployeeList *)pWnd)->OnToDateCheckValue();
} 
static long _OnVoucherListLoadDataFnc(CWnd *pWnd){
	return ((CHREmployeeList*)pWnd)->OnVoucherListLoadData();
} 
static void _OnVoucherListDblClickFnc(CWnd *pWnd){
	((CHREmployeeList*)pWnd)->OnVoucherListDblClick();
} 
static void _OnVoucherListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHREmployeeList*)pWnd)->OnVoucherListSelectChange(nOldItem, nNewItem);
} 
static int _OnVoucherListDeleteItemFnc(CWnd *pWnd){
	 return ((CHREmployeeList*)pWnd)->OnVoucherListDeleteItem();
} 
static int _OnAddAccHREmployeeListFnc(CWnd *pWnd){
	 return ((CHREmployeeList*)pWnd)->OnAddAccHREmployeeList();
} 
static int _OnEditAccHREmployeeListFnc(CWnd *pWnd){
	 return ((CHREmployeeList*)pWnd)->OnEditAccHREmployeeList();
} 
static int _OnDeleteAccHREmployeeListFnc(CWnd *pWnd){
	 return ((CHREmployeeList*)pWnd)->OnDeleteAccHREmployeeList();
} 
static int _OnSaveAccHREmployeeListFnc(CWnd *pWnd){
	 return ((CHREmployeeList*)pWnd)->OnSaveAccHREmployeeList();
} 
static int _OnCancelAccHREmployeeListFnc(CWnd *pWnd){
	 return ((CHREmployeeList*)pWnd)->OnCancelAccHREmployeeList();
} 
CHREmployeeList::CHREmployeeList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHREmployeeList::~CHREmployeeList(){
}
void CHREmployeeList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 800, 60);
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 5, 335, 800, 600);
	m_wndHREmployeeList.Create(this, _T("Employee List"), 5, 65, 800, 330);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 110, 55);
	m_wndDepartment.Create(this,115, 30, 400, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 405, 30, 505, 55);
	m_wndName.Create(this,510, 30, 765, 56); 
	m_wndFind.Create(this, _T("@"), 770, 30, 795, 55);
	m_wndList.Create(this,10, 95, 795, 325); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 360, 110, 385);
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 360, 320, 385);
	m_wndFromDate.Create(this,115, 360, 215, 385); 
	m_wndToDate.Create(this,325, 360, 425, 385); 
	m_wndVoucherList.Create(this,10, 390, 795, 594); 

}
void CHREmployeeList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Empl ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Employee Name"), CFMT_TEXT, 200);
	//m_wndList.InsertColumn(2, _T("Sex"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(2, _T("Position"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Department"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Deactive"), CFMT_TEXT, 70);


	m_wndVoucherList.InsertColumn(0, _T("Voucher Type"), CFMT_TEXT, 200);
	m_wndVoucherList.InsertColumn(1, _T("Voucher Date"), CFMT_DATE, 100);
	m_wndVoucherList.InsertColumn(2, _T("VoucherNo"), CFMT_TEXT, 100);
	m_wndVoucherList.InsertColumn(3, _T("Description"), CFMT_TEXT, 250);
	m_wndVoucherList.InsertColumn(4, _T("Amount"), CFMT_NUMBER, 100);

}

void CHREmployeeList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndVoucherList.SetEvent(WE_SELCHANGE, _OnVoucherListSelectChangeFnc);
	m_wndVoucherList.SetEvent(WE_LOADDATA, _OnVoucherListLoadDataFnc);
	m_wndVoucherList.SetEvent(WE_DBLCLICK, _OnVoucherListDblClickFnc);
	m_wndVoucherList.AddEvent(1, _T("Delete"), _OnVoucherListDeleteItemFnc, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAccHREmployeeListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAccHREmployeeListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAccHREmployeeListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAccHREmployeeListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAccHREmployeeListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_EDIT);
	Refresh();

}
void CHREmployeeList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHREmployeeList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CHREmployeeList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CHREmployeeList::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szName.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}

int CHREmployeeList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
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

void CHREmployeeList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CHREmployeeList::OnDepartmentSelendok(){
	 
}

/*void CHREmployeeList::OnDepartmentSetfocus(){
	
}
*/
/*void CHREmployeeList::OnDepartmentKillfocus(){
	
}
*/
long CHREmployeeList::OnDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
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

/*void CHREmployeeList::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 */
/*void CHREmployeeList::OnNameChange(){
	
}
 */
/*void CHREmployeeList::OnNameSetfocus(){
	
}
 */
/*void CHREmployeeList::OnNameKillfocus(){
	
}
 */
int CHREmployeeList::OnNameCheckValue(){
	return 0;
}
 
void CHREmployeeList::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	Refresh();
}
 
void CHREmployeeList::OnListDblClick(){
	
}
 
void CHREmployeeList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
int CHREmployeeList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
 
long CHREmployeeList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	
	int nCount = 0;
	
	szSQL.Format(_T(" select empl_id as emplid, ") \
	_T("   trim(empl_surname||' '||empl_midname||' '||empl_firstname) as emplname,") \
	_T("   (select distinct ss_desc from sys_sel where ss_id='hrm_position' and ss_code=cast(empl_position as varchar(3))) as position,") \
	_T("   (select distinct sd_name from sys_dept where sd_id=empl_dept) as department,") \
	_T("   empl_active as active") \
	_T(" from hrm_employee ORDER BY empl_firstname, empl_midname, empl_surname "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("EmplID")), 
			rs.GetValue(_T("emplName")), 
			rs.GetValue(_T("Position")), 
			rs.GetValue(_T("Department")), 
			rs.GetValue(_T("active")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

/*void CHREmployeeList::OnFromDateChange(){
	
}
 */
/*void CHREmployeeList::OnFromDateSetfocus(){
	
}
 */
/*void CHREmployeeList::OnFromDateKillfocus(){
	
}
 */
int CHREmployeeList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CHREmployeeList::OnToDateChange(){
	
}
 */
/*void CHREmployeeList::OnToDateSetfocus(){
	
}
 */
/*void CHREmployeeList::OnToDateKillfocus(){
	
}
 */
int CHREmployeeList::OnToDateCheckValue(){
	return 0;
}
 
void CHREmployeeList::OnVoucherListDblClick(){
	
}
 
void CHREmployeeList::OnVoucherListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
int CHREmployeeList::OnVoucherListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
 
long CHREmployeeList::OnVoucherListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndVoucherList.BeginLoad(); 
	m_wndVoucherList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVoucherList.AddItems(
			rs.GetValue(_T("VoucherType")), 
			rs.GetValue(_T("VoucherDate")), 
			rs.GetValue(_T("VoucherNo")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndVoucherList.EndLoad(); 
	return nCount;
*/
	return 0;
}

int CHREmployeeList::OnAddAccHREmployeeList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CHREmployeeList::OnEditAccHREmployeeList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CHREmployeeList::OnDeleteAccHREmployeeList(){
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
 		OnCancelAccHREmployeeList(); 
 	}
	return 0;
}

int CHREmployeeList::OnSaveAccHREmployeeList(){
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
 		//OnAccHREmployeeListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CHREmployeeList::OnCancelAccHREmployeeList(){
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
 
int CHREmployeeList::OnAccHREmployeeListListLoadData(){
	return 0;
}


void CHREmployeeList::Refresh(){
	OnListLoadData();
}