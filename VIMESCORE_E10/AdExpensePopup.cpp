#include "AdExpensePopup.h"
#include "MainFrame_E10.h"
#include "AdExpenseClass.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdExpensePopup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdExpensePopup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdExpensePopup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdExpensePopup *)pWnd)->OnIDCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdExpensePopup* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CAdExpensePopup *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CAdExpensePopup *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CAdExpensePopup *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdExpensePopup *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CAdExpensePopup *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdExpensePopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdExpensePopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdExpensePopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdExpensePopup *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdExpensePopup*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdExpensePopup *pVw = (CAdExpensePopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdExpensePopupFnc(CWnd *pWnd){
	 return ((CAdExpensePopup*)pWnd)->OnAddAdExpensePopup();
} 
static int _OnEditAdExpensePopupFnc(CWnd *pWnd){
	 return ((CAdExpensePopup*)pWnd)->OnEditAdExpensePopup();
} 
static int _OnDeleteAdExpensePopupFnc(CWnd *pWnd){
	 return ((CAdExpensePopup*)pWnd)->OnDeleteAdExpensePopup();
} 
static int _OnSaveAdExpensePopupFnc(CWnd *pWnd){
	 return ((CAdExpensePopup*)pWnd)->OnSaveAdExpensePopup();
} 
static int _OnCancelAdExpensePopupFnc(CWnd *pWnd){
	 return ((CAdExpensePopup*)pWnd)->OnCancelAdExpensePopup();
} 
CAdExpensePopup::CAdExpensePopup(){
	SetAutoClose(false);
	m_nDlgWidth = 805;
	m_nDlgHeight = 80;
	SetDefaultValues();
}
CAdExpensePopup::~CAdExpensePopup(){
}
void CAdExpensePopup::OnCreateComponents(){
	m_wndIDLabel.Create(this, _T("ID"), 5, 25, 85, 50);
	m_wndID.Create(this,90, 25, 170, 50); 
	m_wndTypeLabel.Create(this, _T("Type"), 175, 25, 255, 50);
	m_wndEntry.Create(this, _T("Entry"), 0, 0, 800, 80);
	m_wndType.Create(this,260, 25, 430, 50); 
	m_wndActive.Create(this, _T("Active"), 435, 25, 515, 50);
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 55, 85, 80);
	m_wndDescription.Create(this,90, 55, 710, 80); 
	m_wndSave.Create(this, _T("&Save"), 715, 55, 795, 80);

}
void CAdExpensePopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndEntry.ModifyStyle(WS_BORDER, 0);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	//m_wndName.SetInitCap(1);
	m_wndDescription.SetLimitText(254);
	//m_wndDescription.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_expense_classTbl.SetTableName(_T("ad_expense_class"));
	m_ad_expense_classTbl.AddField(_T("ADEC_CREATEDBY"), dfText, 15); 
	m_ad_expense_classTbl.AddField(_T("ADEC_CREATEDDATE"), dfDateTime); 
	m_ad_expense_classTbl.AddField(_T("ADEC_UPDATEDBY"), dfText, 15); 
	m_ad_expense_classTbl.AddField(_T("ADEC_UPDATEDDATE"), dfDateTime); 
	m_ad_expense_classTbl.AddField(_T("ADEC_EXPENSE_CLASS_ID"), dfText, 32); 
	m_ad_expense_classTbl.AddField(_T("ADEC_DESCRIPTION"), dfText, 254); 
	m_ad_expense_classTbl.AddField(_T("ADEC_ISACTIVE"), dfText, 1); 
}

void CAdExpensePopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if (nMode == VM_EDIT)
		GetDataToScreen();
}
void CAdExpensePopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdExpensePopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT adec_description as descr, adec_isactive as active FROM ad_expense_class WHERE adec_expense_class_id = '%s' ORDER BY adec_expense_class_id"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("descr"), m_szDescription);
		rs.GetValue(_T("active"), szActive);
		if (szActive == _T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(false);
	}
}

void CAdExpensePopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_expense_classTbl.SetValue(_T("adec_createdby"), pMF->GetCurrentUser());
	m_ad_expense_classTbl.SetValue(_T("adec_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adec_expense_class_id='%s' "), m_szID);
		m_ad_expense_classTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_expense_classTbl.SetValue(_T("adec_createddate"), pMF->GetSysDateTime());
	m_ad_expense_classTbl.SetValue(_T("adec_updateddate"), pMF->GetSysDateTime());
	m_ad_expense_classTbl.SetValue(_T("adec_expense_class_id"), m_szID);
	m_ad_expense_classTbl.SetValue(_T("adec_description"), m_szDescription);
	m_ad_expense_classTbl.SetValue(_T("adec_isactive"), m_bActive?_T("Y"):_T("N"));	
}

void CAdExpensePopup::SetDefaultValues(){

	m_szID.Empty();
	m_szDescription.Empty();
	m_bActive=TRUE;

}

int CAdExpensePopup::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
			m_wndID.SetFocus();
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
			m_wndID.EnableWindow(FALSE);
			m_wndType.SetFocus();
 			EnableButtons(TRUE, 0, -1); 
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

/*void CAdExpensePopup::OnIDChange(){
	
} */
/*void CAdExpensePopup::OnIDSetfocus(){
	
} */
/*void CAdExpensePopup::OnIDKillfocus(){
	
} */
int CAdExpensePopup::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_expense_class WHERE adec_expense_class_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
void CAdExpensePopup::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdExpensePopup::OnTypeSelendok(){
	 
}
/*void CAdExpensePopup::OnTypeSetfocus(){
	
}*/
/*void CAdExpensePopup::OnTypeKillfocus(){
	
}*/
long CAdExpensePopup::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
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
/*void CAdExpensePopup::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdExpensePopup::OnDescriptionChange(){
	
} */
/*void CAdExpensePopup::OnDescriptionSetfocus(){
	
} */
/*void CAdExpensePopup::OnDescriptionKillfocus(){
	
} */
int CAdExpensePopup::OnDescriptionCheckValue(){
	return 0;
}
 
	void CAdExpensePopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdExpensePopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdExpensePopup();
}
 
int CAdExpensePopup::OnAddAdExpensePopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdExpensePopup::OnEditAdExpensePopup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdExpensePopup::OnDeleteAdExpensePopup(){
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
 		OnCancelAdExpensePopup(); 
 	}
	return 0;
}

int CAdExpensePopup::OnSaveAdExpensePopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_expense_classTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE adec_expense_class_id = '%s'"), m_szID); 
 		szSQL = m_ad_expense_classTbl.GetUpdateSQL(_T("adec_createdby,adec_createddate")); 
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
		((CAdExpenseClass*)GetParentWnd())->OnListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CAdExpensePopup::OnCancelAdExpensePopup(){
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

int CAdExpensePopup::OnAdExpensePopupListLoadData(){
	return 0;
}

void CAdExpensePopup::ClosePopup(){
	CGuiPopup::ClosePopup();
	((CAdExpenseClass*)GetParentWnd())->SetMode(m_nMode);
}