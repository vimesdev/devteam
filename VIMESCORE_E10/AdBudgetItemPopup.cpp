#include "AdBudgetItemPopup.h"
#include "MainFrame_E10.h"
#include "AdBudgetItem.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBudgetItemPopup* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CAdBudgetItemPopup *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CAdBudgetItemPopup *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CAdBudgetItemPopup *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdBudgetItemPopup *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CAdBudgetItemPopup *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdBudgetItemPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdBudgetItemPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdBudgetItemPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdBudgetItemPopup *)pWnd)->OnNameCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdBudgetItemPopup*)pWnd)->OnActiveSelect();
}
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdBudgetItemPopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdBudgetItemPopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdBudgetItemPopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdBudgetItemPopup *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdBudgetItemPopup *pVw = (CAdBudgetItemPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdBudgetItemPopupFnc(CWnd *pWnd){
	 return ((CAdBudgetItemPopup*)pWnd)->OnAddAdBudgetItemPopup();
} 
static int _OnEditAdBudgetItemPopupFnc(CWnd *pWnd){
	 return ((CAdBudgetItemPopup*)pWnd)->OnEditAdBudgetItemPopup();
} 
static int _OnDeleteAdBudgetItemPopupFnc(CWnd *pWnd){
	 return ((CAdBudgetItemPopup*)pWnd)->OnDeleteAdBudgetItemPopup();
} 
static int _OnSaveAdBudgetItemPopupFnc(CWnd *pWnd){
	 return ((CAdBudgetItemPopup*)pWnd)->OnSaveAdBudgetItemPopup();
} 
static int _OnCancelAdBudgetItemPopupFnc(CWnd *pWnd){
	 return ((CAdBudgetItemPopup*)pWnd)->OnCancelAdBudgetItemPopup();
} 
CAdBudgetItemPopup::CAdBudgetItemPopup(){

	m_nDlgWidth = 800;
	m_nDlgHeight = 80;
	SetDefaultValues();
}
CAdBudgetItemPopup::~CAdBudgetItemPopup(){
}
void CAdBudgetItemPopup::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 0, 0, 795, 80);
	m_wndTypeLabel.Create(this, _T("Type"), 5, 25, 85, 50);
	m_wndType.Create(this,90, 25, 220, 50); 
	m_wndNameLabel.Create(this, _T("Name"), 225, 25, 305, 50);
	m_wndName.Create(this,310, 25, 705, 50); 
	m_wndActive.Create(this, _T("Active"), 710, 25, 790, 50);
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 55, 85, 80);
	m_wndDescription.Create(this,90, 55, 705, 80); 
	m_wndSave.Create(this, _T("&Save"), 710, 55, 790, 80);

}
void CAdBudgetItemPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(3);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(22);
	//m_wndParent.SetCheckValue(true);
	//m_wndParent.LimitText(3);
	m_wndDescription.SetLimitText(254);
	//m_wndDescription.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_wndEntry.ModifyStyle(WS_BORDER, 0);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 0);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	//m_wndParent.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	//m_wndParent.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_ad_budget_itemTbl.SetTableName(_T("ad_budget_item"));
	m_ad_budget_itemTbl.AddField(_T("ADBI_BUDGET_ITEM_ID"), dfText, 3); 
	m_ad_budget_itemTbl.AddField(_T("ADBI_NAME"), dfText, 81); 
	m_ad_budget_itemTbl.AddField(_T("ADBI_BUDGET_TYPE"), dfText, 1); 
	m_ad_budget_itemTbl.AddField(_T("ADBI_DESCRIPTION"), dfText, 254); 
	m_ad_budget_itemTbl.AddField(_T("ADBI_ISACTIVE"), dfText, 1); 

}

void CAdBudgetItemPopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if (nMode == VM_EDIT)
		GetDataToScreen();
}
void CAdBudgetItemPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CAdBudgetItemPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT * FROM ad_budget_item WHERE adbi_budget_item_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("adbi_name"), m_szName);
		rs.GetValue(_T("adbi_isactive"), szActive);
		if(szActive==_T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		rs.GetValue(_T("adbi_budget_type"), m_szTypeKey);
		rs.GetValue(_T("adbi_description"), m_szDescription);
		//rs.GetValue(_T("adbi_parentid"), m_szParentKey);
		UpdateData(FALSE);
	}

}

void CAdBudgetItemPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	m_ad_budget_itemTbl.SetValue(_T("adbi_createdby"), pMF->GetCurrentUser());
	m_ad_budget_itemTbl.SetValue(_T("adbi_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adbi_budget_item_id='%s' "), m_szID);
		m_ad_budget_itemTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_budget_itemTbl.SetValue(_T("adbi_createddate"), pMF->GetSysDateTime());
	m_ad_budget_itemTbl.SetValue(_T("adbi_updateddate"), pMF->GetSysDateTime());
	m_ad_budget_itemTbl.SetValue(_T("adbi_budget_type"), m_wndType.GetCurrent(0));
	m_ad_budget_itemTbl.SetValue(_T("adbi_name"), m_szName);
	m_ad_budget_itemTbl.SetValue(_T("adbi_description"), m_szDescription);
	m_ad_budget_itemTbl.SetValue(_T("adbi_isactive"), m_bActive?_T("Y"):_T("N"));
}

void CAdBudgetItemPopup::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_szDescription.Empty();
	m_bActive=TRUE;

}

int CAdBudgetItemPopup::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			SetDefaultValues(); 
			m_wndType.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
			m_wndID.EnableWindow(FALSE);
			m_wndType.SetFocus();
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
		m_wndSave.EnableWindow(TRUE);
 		return nOldMode; 
}

void CAdBudgetItemPopup::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CAdBudgetItemPopup::OnTypeSelendok(){
	 
}

/*void CAdBudgetItemPopup::OnTypeSetfocus(){
	
}*/
/*void CAdBudgetItemPopup::OnTypeKillfocus(){
	
}*/
long CAdBudgetItemPopup::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndType.AddItems(_T("0"), _T("Thu"));
	m_wndType.AddItems(_T("1"), _T("Chi"));

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

/*void CAdBudgetItemPopup::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdBudgetItemPopup::OnNameChange(){
	
} */
/*void CAdBudgetItemPopup::OnNameSetfocus(){
	
} */
/*void CAdBudgetItemPopup::OnNameKillfocus(){
	
} */
int CAdBudgetItemPopup::OnNameCheckValue(){
	return 0;
}
 
	void CAdBudgetItemPopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

/*void CAdBudgetItemPopup::OnDescriptionChange(){
	
} */
/*void CAdBudgetItemPopup::OnDescriptionSetfocus(){
	
} */
/*void CAdBudgetItemPopup::OnDescriptionKillfocus(){
	
} */
int CAdBudgetItemPopup::OnDescriptionCheckValue(){
	return 0;
}
 
void CAdBudgetItemPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdBudgetItemPopup();
}
 
int CAdBudgetItemPopup::OnAddAdBudgetItemPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdBudgetItemPopup::OnEditAdBudgetItemPopup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdBudgetItemPopup::OnDeleteAdBudgetItemPopup(){
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
 		OnCancelAdBudgetItemPopup(); 
 	}
	return 0;
}

int CAdBudgetItemPopup::OnSaveAdBudgetItemPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_budget_itemTbl.GetInsertSQL(_T("ADBI_BUDGET_ITEM_ID")); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE adbi_budget_item_id='%s' "), m_szID); 
 		szSQL = m_ad_budget_itemTbl.GetUpdateSQL(_T("adbi_createdby, adbi_createddate, adbi_budget_item_id")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		if(GetMode() == VM_EDIT) 
 			ClosePopup();
		else
			SetMode(VM_ADD);
		((CAdBudgetItem*)GetParentWnd())->OnListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}

int CAdBudgetItemPopup::OnCancelAdBudgetItemPopup(){
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
 
int CAdBudgetItemPopup::OnAdBudgetItemPopupListLoadData(){
	return 0;
}

void CAdBudgetItemPopup::ClosePopup(){
	CGuiPopup::ClosePopup();
	((CAdBudgetItem*)GetParentWnd())->SetMode(m_nMode);
}
