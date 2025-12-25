#include "AdContractPackageList.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageList *)pWnd)->OnSearchCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CAdContractPackageList *pVw = (CAdContractPackageList *)pWnd;
	pVw->OnRefreshSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdContractPackageList *pVw = (CAdContractPackageList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdContractPackageList *pVw = (CAdContractPackageList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdContractPackageList *pVw = (CAdContractPackageList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdContractPackageListFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnAddAdContractPackageList();
} 
static int _OnEditAdContractPackageListFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnEditAdContractPackageList();
} 
static int _OnDeleteAdContractPackageListFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnDeleteAdContractPackageList();
} 
static int _OnSaveAdContractPackageListFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnSaveAdContractPackageList();
} 
static int _OnCancelAdContractPackageListFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnCancelAdContractPackageList();
} 
CAdContractPackageList::CAdContractPackageList(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdContractPackageList::~CAdContractPackageList(){
}
void CAdContractPackageList::OnCreateComponents(){
	m_wndContractInformation.Create(this, _T("Contract Information"), 5, 5, 810, 590);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 425, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 430, 30, 530, 55);
	m_wndSearch.Create(this,535, 30, 770, 55); 
	m_wndRefresh.Create(this, _T("@"), 775, 30, 805, 55);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);

}
void CAdContractPackageList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndSearch.SetLimitText(1024);
	m_wndSearch.SetCheckValue(true);

}
void CAdContractPackageList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdContractPackageListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdContractPackageListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdContractPackageListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdContractPackageListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdContractPackageListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CAdContractPackageList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdContractPackageList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CAdContractPackageList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdContractPackageList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdContractPackageList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();

}
int CAdContractPackageList::SetMode(int nMode){
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
/*void CAdContractPackageList::OnFromDateChange(){
	
} */
/*void CAdContractPackageList::OnFromDateSetfocus(){
	
} */
/*void CAdContractPackageList::OnFromDateKillfocus(){
	
} */
int CAdContractPackageList::OnFromDateCheckValue(){
	return 0;
} 
/*void CAdContractPackageList::OnToDateChange(){
	
} */
/*void CAdContractPackageList::OnToDateSetfocus(){
	
} */
/*void CAdContractPackageList::OnToDateKillfocus(){
	
} */
int CAdContractPackageList::OnToDateCheckValue(){
	return 0;
} 
/*void CAdContractPackageList::OnSearchChange(){
	
} */
/*void CAdContractPackageList::OnSearchSetfocus(){
	
} */
/*void CAdContractPackageList::OnSearchKillfocus(){
	
} */
int CAdContractPackageList::OnSearchCheckValue(){
	return 0;
} 
void CAdContractPackageList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdContractPackageList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdContractPackageList::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdContractPackageList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdContractPackageList::OnAddAdContractPackageList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdContractPackageList::OnEditAdContractPackageList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdContractPackageList::OnDeleteAdContractPackageList(){
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
 		OnCancelAdContractPackageList();
 	}
	return 0;
}
int CAdContractPackageList::OnSaveAdContractPackageList(){
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
 		//OnAdContractPackageListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdContractPackageList::OnCancelAdContractPackageList(){
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
int CAdContractPackageList::OnAdContractPackageListListLoadData(){
	return 0;
}
