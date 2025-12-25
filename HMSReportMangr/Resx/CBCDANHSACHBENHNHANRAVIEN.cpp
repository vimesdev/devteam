#include "CBCDANHSACHBENHNHANRAVIEN.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CCBCDANHSACHBENHNHANRAVIEN *pVw = (CCBCDANHSACHBENHNHANRAVIEN *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCBCDANHSACHBENHNHANRAVIEN *pVw = (CCBCDANHSACHBENHNHANRAVIEN *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnListDeleteItem();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCBCDANHSACHBENHNHANRAVIEN* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCBCDANHSACHBENHNHANRAVIEN* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCBCDANHSACHBENHNHANRAVIEN* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnRankAddNew();
}*/
static int _OnAddCBCDANHSACHBENHNHANRAVIENFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnAddCBCDANHSACHBENHNHANRAVIEN();
} 
static int _OnEditCBCDANHSACHBENHNHANRAVIENFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnEditCBCDANHSACHBENHNHANRAVIEN();
} 
static int _OnDeleteCBCDANHSACHBENHNHANRAVIENFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnDeleteCBCDANHSACHBENHNHANRAVIEN();
} 
static int _OnSaveCBCDANHSACHBENHNHANRAVIENFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnSaveCBCDANHSACHBENHNHANRAVIEN();
} 
static int _OnCancelCBCDANHSACHBENHNHANRAVIENFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnCancelCBCDANHSACHBENHNHANRAVIEN();
} 
CCBCDANHSACHBENHNHANRAVIEN::CCBCDANHSACHBENHNHANRAVIEN(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCBCDANHSACHBENHNHANRAVIEN::~CCBCDANHSACHBENHNHANRAVIEN(){
}
void CCBCDANHSACHBENHNHANRAVIEN::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1012, 89);
	m_wndFromDateLabel.Create(this, _T("From Date"), 9, 29, 81, 54);
	m_wndFromDate.Create(this,85, 29, 195, 54); 
	m_wndToDateLabel.Create(this, _T("To Date"), 197, 29, 277, 54);
	m_wndToDate.Create(this,282, 29, 392, 54); 
	m_wndLoad.Create(this, _T("&Load"), 622, 29, 706, 83);
	m_wndPrint.Create(this, _T("&Print"), 709, 29, 787, 83);
	m_wndList.Create(this,5, 93, 1012, 615); 
	m_wndObjectLabel.Create(this, _T("Object"), 197, 58, 277, 83);
	m_wndObject.Create(this,282, 58, 618, 83); 
	m_wndDepartmentLab.Create(this, _T("Department"), 395, 29, 475, 54);
	m_wndDepartment.Create(this,480, 29, 618, 54); 
	m_wndRanklab.Create(this, _T("Rank"), 9, 58, 81, 83);
	m_wndRank.Create(this,84, 58, 194, 83); 

}
void CCBCDANHSACHBENHNHANRAVIEN::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(1024);









}
void CCBCDANHSACHBENHNHANRAVIEN::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCBCDANHSACHBENHNHANRAVIENFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCBCDANHSACHBENHNHANRAVIENFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCBCDANHSACHBENHNHANRAVIENFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCBCDANHSACHBENHNHANRAVIENFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCBCDANHSACHBENHNHANRAVIENFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCBCDANHSACHBENHNHANRAVIEN::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);

}
void CCBCDANHSACHBENHNHANRAVIEN::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCBCDANHSACHBENHNHANRAVIEN::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCBCDANHSACHBENHNHANRAVIEN::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_szRankKey.Empty();

}
int CCBCDANHSACHBENHNHANRAVIEN::SetMode(int nMode){
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
/*void CCBCDANHSACHBENHNHANRAVIEN::OnFromDateChange(){
	
} */
/*void CCBCDANHSACHBENHNHANRAVIEN::OnFromDateSetfocus(){
	
} */
/*void CCBCDANHSACHBENHNHANRAVIEN::OnFromDateKillfocus(){
	
} */
int CCBCDANHSACHBENHNHANRAVIEN::OnFromDateCheckValue(){
	return 0;
} 
/*void CCBCDANHSACHBENHNHANRAVIEN::OnToDateChange(){
	
} */
/*void CCBCDANHSACHBENHNHANRAVIEN::OnToDateSetfocus(){
	
} */
/*void CCBCDANHSACHBENHNHANRAVIEN::OnToDateKillfocus(){
	
} */
int CCBCDANHSACHBENHNHANRAVIEN::OnToDateCheckValue(){
	return 0;
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnListDblClick(){
	
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCBCDANHSACHBENHNHANRAVIEN::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCBCDANHSACHBENHNHANRAVIEN::OnListLoadData(){
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
void CCBCDANHSACHBENHNHANRAVIEN::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnObjectSelendok(){
	 
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnObjectSetfocus(){
	
}*/
/*void CCBCDANHSACHBENHNHANRAVIEN::OnObjectKillfocus(){
	
}*/
long CCBCDANHSACHBENHNHANRAVIEN::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentSelendok(){
	 
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentSetfocus(){
	
}*/
/*void CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentKillfocus(){
	
}*/
long CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCBCDANHSACHBENHNHANRAVIEN::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnRankSelendok(){
	 
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnRankSetfocus(){
	
}*/
/*void CCBCDANHSACHBENHNHANRAVIEN::OnRankKillfocus(){
	
}*/
long CCBCDANHSACHBENHNHANRAVIEN::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRankKey
};
	m_wndRank.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRank.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CCBCDANHSACHBENHNHANRAVIEN::OnAddCBCDANHSACHBENHNHANRAVIEN(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCBCDANHSACHBENHNHANRAVIEN::OnEditCBCDANHSACHBENHNHANRAVIEN(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCBCDANHSACHBENHNHANRAVIEN::OnDeleteCBCDANHSACHBENHNHANRAVIEN(){
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
 		OnCancelCBCDANHSACHBENHNHANRAVIEN();
 	}
	return 0;
}
int CCBCDANHSACHBENHNHANRAVIEN::OnSaveCBCDANHSACHBENHNHANRAVIEN(){
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
 		//OnCBCDANHSACHBENHNHANRAVIENListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCBCDANHSACHBENHNHANRAVIEN::OnCancelCBCDANHSACHBENHNHANRAVIEN(){
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
int CCBCDANHSACHBENHNHANRAVIEN::OnCBCDANHSACHBENHNHANRAVIENListLoadData(){
	return 0;
}
