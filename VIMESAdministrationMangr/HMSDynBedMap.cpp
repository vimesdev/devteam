#include "HMSDynBedMap.h"
#include "MainFrm.h"
#include "HMSMapcircular.h"
static long _OnBedListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedMap*)pWnd)->OnBedListLoadData();
} 
static void _OnBedListDblClickFnc(CWnd *pWnd){
	((CHMSDynBedMap*)pWnd)->OnBedListDblClick();
} 
static void _OnBedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDynBedMap*)pWnd)->OnBedListSelectChange(nOldItem, nNewItem);
} 
static int _OnBedListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDynBedMap*)pWnd)->OnBedListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDynBedMap* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSDynBedMap *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedMap *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedMap *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedMap *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSDynBedMap *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnFindChangeFnc(CWnd *pWnd){
	return ((CHMSDynBedMap*)pWnd)->OnFindChange();
}
CHMSDynBedMap::CHMSDynBedMap(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSDynBedMap::~CHMSDynBedMap(){
}
void CHMSDynBedMap::OnCreateComponents(){
	m_wndDynamicBedInformation.Create(this, _T("Dynamic Bed Information"), 5, 65, 800, 470);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 800, 60);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 90, 55);
	m_wndDepartment.Create(this,95, 30, 345, 55); 
	m_wndFindLabel.Create(this, _T("&Find"), 350, 30, 430, 55);
	m_wndFind.Create(this,435, 30, 795, 55); 
	m_wndBedList.Create(this,10, 90, 795, 465); 
	//m_wndNameLabel.Create(this, _T("Name"), 10, 475, 130, 500);
	m_wndMapCircular.m_nStyle = 3;
	m_wndMapCircular.Create(this, CRect(5, 475, 805, 570));

}
void CHMSDynBedMap::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(1, _T("Alias"), CFMT_TEXT, 150);
	m_wndDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 450);

	m_wndBedList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndBedList.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	m_wndBedList.InsertColumn(2, _T("Service Price"), CFMT_NUMBER, 90);
	m_wndBedList.InsertColumn(3, _T("Insurance Price"), CFMT_NUMBER, 90);
	m_wndBedList.InsertColumn(4, _T("Policy Price"), CFMT_NUMBER, 90);
	m_wndBedList.InsertColumn(5, _T("Require Price"), CFMT_NUMBER, 90);
	m_wndBedList.InsertColumn(6, _T(""), CFMT_TEXT, 0);
}

void CHMSDynBedMap::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndBedList.SetEvent(WE_SELCHANGE, _OnBedListSelectChangeFnc);
	m_wndBedList.SetEvent(WE_LOADDATA, _OnBedListLoadDataFnc);
	m_wndBedList.SetEvent(WE_DBLCLICK, _OnBedListDblClickFnc);
	m_wndBedList.AddEvent(1, _T("Delete"), _OnBedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	SetMode(VM_NONE);

}
void CHMSDynBedMap::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);

}
void CHMSDynBedMap::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}

void CHMSDynBedMap::SetDefaultValues(){


}

int CHMSDynBedMap::SetMode(int nMode){
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
			m_wndFind.EnableWindow(FALSE);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndFind.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndFind.EnableWindow(TRUE);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
			m_wndFind.EnableWindow(TRUE);
 			break;
 		};
		m_wndDepartment.EnableWindow();
 		UpdateData(FALSE);
 		return nOldMode;
}

void CHMSDynBedMap::OnBedListDblClick(){
	
}
 
void CHMSDynBedMap::OnBedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMapCircular.m_szFeeID = m_wndBedList.GetItemText(nNewItem, 6);
	m_wndMapCircular.m_szName = m_wndBedList.GetItemText(nNewItem, 1);
	m_wndMapCircular.GetDataToScreen();	
}
 
int CHMSDynBedMap::OnBedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CHMSDynBedMap::OnBedListLoadData(){
	UpdateData();
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndBedList.BeginLoad(); 
	if(!m_szFind.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(hdbl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szFind);
	}
	int nCount = 0;
	if (!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hdbl_deptid='%s'"), m_szDepartmentKey);
	szSQL.Format(_T("SELECT hdbl_deptid||'.'||hdbl_idx bed_id, hdbl_idx, hdbl_name, hdbl_servprice, hdbl_insprice, hdbl_polprice, hdbl_reqprice ") \
				_T(" FROM hms_dynbedlist WHERE 1=1 %s ORDER BY hdbl_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBedList.AddItems(
			rs.GetValue(_T("hdbl_idx")), 
			rs.GetValue(_T("hdbl_name")), 
			rs.GetValue(_T("hdbl_servprice")), 
			rs.GetValue(_T("hdbl_insprice")), 
			rs.GetValue(_T("hdbl_polprice")), 
			rs.GetValue(_T("hdbl_reqprice")), 
			rs.GetValue(_T("bed_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndBedList.EndLoad(); 
	return nCount;
}

void CHMSDynBedMap::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedMap::OnDepartmentSelendok(){
	OnBedListLoadData();
}
/*void CHMSDynBedMap::OnDepartmentSetfocus(){
	
}*/
/*void CHMSDynBedMap::OnDepartmentKillfocus(){
	
}*/
long CHMSDynBedMap::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey);
}
/*void CHMSDynBedMap::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSDynBedMap::OnFindChange(){

	UpdateData(true);
	OnBedListLoadData();
	return 0;
}