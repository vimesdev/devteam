#include "AdProductTypeDialog.h"
#include "MainFrame_E10.h"
#include "AdProductType.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdProductTypeDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdProductTypeDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdProductTypeDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdProductTypeDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdProductTypeDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdProductTypeDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdProductTypeDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdProductTypeDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdProductTypeDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdProductTypeDialog *pVw = (CAdProductTypeDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CAdProductTypeDialog *pVw = (CAdProductTypeDialog *)pWnd;
	pVw->OnDiscardSelect();
} 

static long _OnParentLoadDataFnc(CWnd *pWnd){
	return ((CAdProductTypeDialog *)pWnd)->OnParentLoadData();
} 
static int _OnAddAdProductTypeDialogFnc(CWnd *pWnd){
	 return ((CAdProductTypeDialog*)pWnd)->OnAddAdProductTypeDialog();
} 
static int _OnEditAdProductTypeDialogFnc(CWnd *pWnd){
	 return ((CAdProductTypeDialog*)pWnd)->OnEditAdProductTypeDialog();
} 
static int _OnDeleteAdProductTypeDialogFnc(CWnd *pWnd){
	 return ((CAdProductTypeDialog*)pWnd)->OnDeleteAdProductTypeDialog();
} 
static int _OnSaveAdProductTypeDialogFnc(CWnd *pWnd){
	 return ((CAdProductTypeDialog*)pWnd)->OnSaveAdProductTypeDialog();
} 
static int _OnCancelAdProductTypeDialogFnc(CWnd *pWnd){
	 return ((CAdProductTypeDialog*)pWnd)->OnCancelAdProductTypeDialog();
} 
CAdProductTypeDialog::CAdProductTypeDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	m_nMode = nMode;
	m_pParentWnd = pParent;
	SetDefaultValues();
}
CAdProductTypeDialog::~CAdProductTypeDialog(){
}
void CAdProductTypeDialog::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 5, 5, 465, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this,95, 30, 195, 55); 
	m_wndParentLabel.Create(this, _T("Parent"), 200, 30, 280, 55);
	m_wndParent.Create(this,285, 30, 460, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 90, 85);
	m_wndName.Create(this,95, 60, 460, 85); 
	m_wndActive.Create(this, _T("Active"), 10, 95, 90, 120);
	m_wndSave.Create(this, _T("&Save"), 300, 95, 380, 120);
	m_wndDiscard.Create(this, _T("&Discard"), 385, 95, 465, 120);

}
void CAdProductTypeDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	//m_wndName.SetInitCap(1);
	m_wndName.SetLimitText(254);
	//m_wndName.SetCheckValue(true);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_product_typeTbl.SetTableName(_T("m_product_type"));
	m_ad_product_typeTbl.AddField(_T("MPT_ORG_ID"), dfText, 32); 
	m_ad_product_typeTbl.AddField(_T("MPT_CREATEDBY"), dfText, 15); 
	m_ad_product_typeTbl.AddField(_T("MPT_CREATEDDATE"), dfDateTime); 
	m_ad_product_typeTbl.AddField(_T("MPT_UPDATEDBY"), dfText, 15); 
	m_ad_product_typeTbl.AddField(_T("MPT_UPDATEDDATE"), dfDateTime); 
	m_ad_product_typeTbl.AddField(_T("MPT_PRODUCT_TYPE_ID"), dfText, 32); 
	m_ad_product_typeTbl.AddField(_T("MPT_NAME"), dfText, 254); 
	m_ad_product_typeTbl.AddField(_T("MPT_ISACTIVE"), dfText, 1); 
	m_ad_product_typeTbl.AddField(_T("MPT_PARENT_ID"), dfText, 35);

	m_wndParent.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndParent.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}

void CAdProductTypeDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndParent.SetEvent(WE_LOADDATA, _OnParentLoadDataFnc);
	SetMode(m_nMode);
	if (m_nMode == VM_EDIT)
		GetDataToScreen();

}
void CAdProductTypeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_TextEx(pDX, m_wndParent.GetDlgCtrlID(), m_szParentKey);

}
void CAdProductTypeDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT mpt_name as name, ") \
				_T("	mpt_isactive as active, ") \
				_T("	mpt_parent_id as parent_id ") \
				_T(" FROM m_product_type ") \
				_T(" WHERE mpt_product_type_id = '%s' ") \
				_T(" ORDER BY mpt_product_type_id"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("name"), m_szName);
		rs.GetValue(_T("active"), szActive);
		rs.GetValue(_T("parent_id"), m_szParentKey);
		if (szActive == _T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(false);
	}
}

void CAdProductTypeDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_product_typeTbl.SetValue(_T("mpt_createdby"), pMF->GetCurrentUser());
	m_ad_product_typeTbl.SetValue(_T("mpt_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE mpt_product_type_id='%s' "), m_szID);
		m_ad_product_typeTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_product_typeTbl.SetValue(_T("mpt_createddate"), pMF->GetSysDateTime());
	m_ad_product_typeTbl.SetValue(_T("mpt_updateddate"), pMF->GetSysDateTime());
	m_ad_product_typeTbl.SetValue(_T("mpt_org_id"), pMF->GetModuleID());
	m_ad_product_typeTbl.SetValue(_T("mpt_product_type_id"), m_szID);
	m_ad_product_typeTbl.SetValue(_T("mpt_name"), m_szName);
	m_ad_product_typeTbl.SetValue(_T("mpt_isactive"), m_bActive?_T("Y"):_T("N"));	
	m_ad_product_typeTbl.SetValue(_T("mpt_parent_id"), m_szParentKey);
}

void CAdProductTypeDialog::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_bActive=TRUE;
	m_szParentKey.Empty();
}

int CAdProductTypeDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
			m_wndID.SetFocus();
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
			m_wndID.EnableWindow(FALSE);
			m_wndName.SetFocus();
 			EnableButtons(TRUE, 0, 1, -1); 
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

/*void CAdProductTypeDialog::OnIDChange(){
	
} */
/*void CAdProductTypeDialog::OnIDSetfocus(){
	
} */
/*void CAdProductTypeDialog::OnIDKillfocus(){
	
} */
int CAdProductTypeDialog::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM m_product_type WHERE mpt_product_type_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
}
 
/*void CAdProductTypeDialog::OnNameChange(){
	
} */
/*void CAdProductTypeDialog::OnNameSetfocus(){
	
} */
/*void CAdProductTypeDialog::OnNameKillfocus(){
	
} */
int CAdProductTypeDialog::OnNameCheckValue(){
	return 0;
}
 
	void CAdProductTypeDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdProductTypeDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdProductTypeDialog();
}
 
void CAdProductTypeDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdProductTypeDialog::OnAddAdProductTypeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdProductTypeDialog::OnEditAdProductTypeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdProductTypeDialog::OnDeleteAdProductTypeDialog(){
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
 		OnCancelAdProductTypeDialog(); 
 	}
	return 0;
}

int CAdProductTypeDialog::OnSaveAdProductTypeDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_product_typeTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE mpt_product_type_id = '%s'"), m_szID); 
 		szSQL = m_ad_product_typeTbl.GetUpdateSQL(_T("mpt_createdby,mpt_createddate, mpt_product_type_id")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{
		if(GetMode() == VM_EDIT)
			CGuiDialog::OnOK();
		else
			SetMode(VM_ADD);
		((CAdProductType*)m_pParentWnd)->OnListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CAdProductTypeDialog::OnCancelAdProductTypeDialog(){
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
 
int CAdProductTypeDialog::OnAdProductTypeDialogListLoadData(){
	return 0;
}

long CAdProductTypeDialog::OnParentLoadData()
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndParent, m_szParentKey, _T("product_parent_type"));
}