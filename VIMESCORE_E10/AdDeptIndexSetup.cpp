#include "AdDeptIndexSetup.h"
#include "MainFrame_E10.h"

static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdDeptIndexSetup *)pWnd)->OnNameChange();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdDeptIndexSetup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdDeptIndexSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdDeptIndexSetup *)pWnd)->OnNameCheckValue();
}
static void _OnLoadDataSelectFnc(CWnd *pWnd){
	CAdDeptIndexSetup *pVw = (CAdDeptIndexSetup *)pWnd;
	pVw->OnLoadDataSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CAdDeptIndexSetup *pVw = (CAdDeptIndexSetup *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdDeptIndexSetup *pVw = (CAdDeptIndexSetup *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdDeptIndexSetup*)pWnd)->OnListLoadData(0);
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdDeptIndexSetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdDeptIndexSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdDeptIndexSetup*)pWnd)->OnListDeleteItem();
} 
static int _OnAddAdDeptIndexSetupFnc(CWnd *pWnd){
	 return ((CAdDeptIndexSetup*)pWnd)->OnAddAdDeptIndexSetup();
} 
static int _OnEditAdDeptIndexSetupFnc(CWnd *pWnd){
	 return ((CAdDeptIndexSetup*)pWnd)->OnEditAdDeptIndexSetup();
} 
static int _OnDeleteAdDeptIndexSetupFnc(CWnd *pWnd){
	 return ((CAdDeptIndexSetup*)pWnd)->OnDeleteAdDeptIndexSetup();
} 
static int _OnSaveAdDeptIndexSetupFnc(CWnd *pWnd){
	 return ((CAdDeptIndexSetup*)pWnd)->OnSaveAdDeptIndexSetup();
} 
static int _OnCancelAdDeptIndexSetupFnc(CWnd *pWnd){
	 return ((CAdDeptIndexSetup*)pWnd)->OnCancelAdDeptIndexSetup();
} 
static int _OnIndexCheckValueFnc(CWnd *pWnd){
	return ((CAdDeptIndexSetup*)pWnd->GetParent())->OnIndexCheckValue();
}
static int _OnSortByIndexFnc(CWnd* pWnd){
	((CAdDeptIndexSetup*)pWnd)->OnSortByIndex();
	return 0;
}
CAdDeptIndexSetup::CAdDeptIndexSetup(){

	m_nDlgWidth = 820;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CAdDeptIndexSetup::~CAdDeptIndexSetup(){
}
void CAdDeptIndexSetup::OnCreateComponents(){
	m_wndDeptInformation.Create(this, _T("Dept Information"), 5, 5, 810, 590);
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 110, 55);
	m_wndName.Create(this,115, 30, 285, 55); 
	m_wndLoadData.Create(this, _T("Load Data"), 290, 30, 370, 55);
	m_wndApply.Create(this, _T("&Apply"), 730, 595, 810, 620);
	m_wndList.Create(this,9, 60, 804, 585); 

}
void CAdDeptIndexSetup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndName.SetLimitText(1024);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, _T("User-defined Idx"), CFMT_NUMBER, 100);
	m_wndList.SetEditLabel(3, GUI_NUMBERCTRL);

}
void CAdDeptIndexSetup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndLoadData.SetEvent(WE_CLICK, _OnLoadDataSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Sort by Index"), _OnSortByIndexFnc);
	CGuiNumberCtrl* pCtrl = (CGuiNumberCtrl*) m_wndList.GetEditControl(3);
	if (pCtrl)
	{
		pCtrl->SetEvent(WE_CHECKVALUE, _OnIndexCheckValueFnc);
	}
	OnListLoadData(0);

}
void CAdDeptIndexSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CAdDeptIndexSetup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdDeptIndexSetup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdDeptIndexSetup::SetDefaultValues(){

	m_szName.Empty();

}
int CAdDeptIndexSetup::SetMode(int nMode){
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
void CAdDeptIndexSetup::OnNameChange(){
	UpdateData(true);
	m_wndList.Search(2, m_szName, SEARCH_LIKE);
}
/*void CAdDeptIndexSetup::OnNameSetfocus(){
	
} */
/*void CAdDeptIndexSetup::OnNameKillfocus(){
	
} */
int CAdDeptIndexSetup::OnNameCheckValue(){
	return 0;
}
void CAdDeptIndexSetup::OnLoadDataSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData(0);
} 

void CAdDeptIndexSetup::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	int nIndex = 0, nRet = 0;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		nIndex = str2int(m_wndList.GetItemText(i, 3));
		tmpStr = m_wndList.GetItemText(i, 1);
		if (nIndex > 0)
		{
			szSQL.Format(_T("UPDATE sys_dept SET sd_index = %d WHERE sd_id = '%s'"), nIndex, tmpStr);
			nRet = pMF->ExecSQL(szSQL);
		}
	}
} 
void CAdDeptIndexSetup::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdDeptIndexSetup::OnListDblClick(){
	
} 
void CAdDeptIndexSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CAdDeptIndexSetup::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CAdDeptIndexSetup::OnListLoadData(int nChoice){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderBy, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szOrderBy = _T(" ORDER BY sd_type, sd_name");
	if (nChoice == 1)
		szOrderBy = _T(" ORDER BY sd_index");
	if (!m_szName.IsEmpty())
		szWhere.Format(_T(" AND lower(sd_name) LIKE chr(37)||lower('%s')||chr(37)"), m_szName);
	szSQL.Format(_T("SELECT sd_id id, sd_name name, sd_index idx FROM sys_dept WHERE 1=1 %s %s"), szWhere, szOrderBy);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			int2str(nIdx++),
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("idx")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

int CAdDeptIndexSetup::OnIndexCheckValue(){
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0) return 0;
	CString tmpStr;
	double nIndex  = 0;
	CGuiNumberCtrl *pCtrl = (CGuiNumberCtrl*) m_wndList.GetEditControl(3);
	if (pCtrl == NULL) return 0;
	pCtrl->GetWindowText(tmpStr);
	nIndex = str2double(tmpStr);
	if (nIndex < 0) return -1;
	return 0;
}

void CAdDeptIndexSetup::OnSortByIndex(){
	OnListLoadData(1);
}

int CAdDeptIndexSetup::OnAddAdDeptIndexSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdDeptIndexSetup::OnEditAdDeptIndexSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdDeptIndexSetup::OnDeleteAdDeptIndexSetup(){
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
 		OnCancelAdDeptIndexSetup();
 	}
	return 0;
}
int CAdDeptIndexSetup::OnSaveAdDeptIndexSetup(){
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
 		//OnAdDeptIndexSetupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdDeptIndexSetup::OnCancelAdDeptIndexSetup(){
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
int CAdDeptIndexSetup::OnAdDeptIndexSetupListLoadData(){
	return 0;
}
