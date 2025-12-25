#include "ProductClassDialog.h"
#include "MainFrame_E10.h"
#include "ProductClassList.h"
/*static void _OnATCCodeChangeFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnATCCodeChange();
} */
/*static void _OnATCCodeSetfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnATCCodeSetfocus();} */ 
/*static void _OnATCCodeKillfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnATCCodeKillfocus();
} */
static int _OnATCCodeCheckValueFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnATCCodeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnEffectGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductClassDialog* )pWnd)->OnEffectGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEffectGroupSelendokFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnEffectGroupSelendok();
}
/*static void _OnEffectGroupSetfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnEffectGroupKillfocus();
}*/
/*static void _OnEffectGroupKillfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnEffectGroupKillfocus();
}*/
static long _OnEffectGroupLoadDataFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnEffectGroupLoadData();
}
/*static void _OnEffectGroupAddNewFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnEffectGroupAddNew();
}*/

static long _OnClassGroupLoadDataFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnClassGroupLoadData();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductClassDialog *pVw = (CProductClassDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductClassDialog *pVw = (CProductClassDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CProductClassDialog*)pWnd)->OnActiveSelect();
}

static void _OnIsLimitedSelectFnc(CWnd *pWnd){
	 ((CProductClassDialog*)pWnd)->OnIsLimitedSelect();
}
static void _OnAdviseSelectFnc(CWnd *pWnd){
	 ((CProductClassDialog*)pWnd)->OnAdviseSelect();
}
static int _OnAddProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassDialog*)pWnd)->OnAddProductClassDialog();
} 
static int _OnEditProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassDialog*)pWnd)->OnEditProductClassDialog();
} 
static int _OnDeleteProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassDialog*)pWnd)->OnDeleteProductClassDialog();
} 
static int _OnSaveProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassDialog*)pWnd)->OnSaveProductClassDialog();
} 
static int _OnCancelProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassDialog*)pWnd)->OnCancelProductClassDialog();
} 
CProductClassDialog::CProductClassDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CProductClassDialog::~CProductClassDialog(){
}
void CProductClassDialog::OnCreateComponents(){
	m_wndGenericInformation.Create(this, _T("Generic Information"), 5, 5, 495, 305);
	m_wndIDLabel.Create(this, _T(""), 0, 0, 25, 25);
	m_wndID.Create(this,0, 0, 25, 25); 
	m_wndATCCodeLabel.Create(this, _T("ATC Code"), 10, 120, 110, 145);
	m_wndATCCode.Create(this,115, 120, 205, 145); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 90, 110, 115);
	m_wndName.Create(this,115, 90, 490, 115); 
	m_wndUnitLabel.Create(this, _T(""), 0, 0, 25, 25);
	m_wndUnit.Create(this,0, 0, 25, 25); 
	m_wndEffectGroupLabel.Create(this, _T("Effect Group"), 10, 30, 110, 55);
	m_wndEffectGroup.Create(this,115, 30, 490, 55); 
	m_wndClassGroupLabel.Create(this, _T("Class Group"), 10, 60, 110, 85);
	m_wndClassGroup.Create(this,115, 60, 395, 85); 
	m_wndIndexLabel.Create(this, _T("Index"), 400, 60, 445, 85);
	m_wndIndex.Create(this,450, 60, 490, 85); 
	m_wndIndicationLabel.Create(this, _T(""), 0, 0, 25, 25);
	m_wndIndication.Create(this,0, 0, 25, 25); 
	m_wndActive.Create(this, _T("&Active"), 210, 120, 300, 145);
	m_wndAdvise.Create(this, _T("Advise"), 305, 120, 385, 145);
	m_wndIsLimited.Create(this, _T("Is Limited"), 390, 120, 490, 145);
	m_wndWarning.Create(this,10, 150, 490, 300, 1, 0, 1); 
	m_wndSave.Create(this, _T("&Save"), 310, 310, 400, 335);
	m_wndClose.Create(this, _T("&Close"), 405, 310, 495, 335);
}
void CProductClassDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndID.SetLimitText(35);
//	m_wndID.SetCheckValue(true);
	m_wndATCCode.SetLimitText(15);
	//m_wndATCCode.SetCheckValue(true);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(2);
	//m_wndUnit.SetLimitText(35);
//	m_wndUnit.SetCheckValue(true);
//	m_wndUnit.SetInitCap(2);
	m_wndEffectGroup.SetCheckValue(true);
	m_wndEffectGroup.LimitText(81);
	m_wndIndication.SetLimitText(35);
//	m_wndIndication.SetCheckValue(true);

	m_wndEffectGroup.Format(3, 2);
	m_wndEffectGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndEffectGroup.InsertColumn(1, _T("Code"), CFMT_TEXT, 60);
	m_wndEffectGroup.InsertColumn(2, _T("Description"), CFMT_TEXT, 450);

	m_wndClassGroup.Format(3, 2);
	m_wndClassGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndClassGroup.InsertColumn(1, _T("Circular Index"), CFMT_NUMBER, 0);
	m_wndClassGroup.InsertColumn(2, _T("Name"), CFMT_TEXT, 150);

	m_product_classTbl.SetTableName(_T("m_product_class"));
	m_product_classTbl.AddField(_T("mpc_org_id"), dfText, 32); 
	m_product_classTbl.AddField(_T("mpc_createdby"), dfText, 15); 
	m_product_classTbl.AddField(_T("mpc_createddate"), dfDateTime); 
	m_product_classTbl.AddField(_T("mpc_updatedby"), dfText, 15); 
	m_product_classTbl.AddField(_T("mpc_updateddate"), dfDateTime); 
//	m_product_classTbl.AddField(_T("mpc_product_class_id"), dfText, 15); 
	m_product_classTbl.AddField(_T("mpc_name"), dfText, 254); 
	m_product_classTbl.AddField(_T("mpc_description"), dfText, 254); 
	//m_product_classTbl.AddField(_T("mpc_unit"), dfText, 15); 
	m_product_classTbl.AddField(_T("mpc_product_category_id"), dfLong); 
	//m_product_classTbl.AddField(_T("mpc_product_type_id"), dfText, 3); 
	m_product_classTbl.AddField(_T("mpc_atccode"), dfText, 15); 
	//m_product_classTbl.AddField(_T("mpc_prepare"), dfText, 81); 
	//m_product_classTbl.AddField(_T("mpc_doseage"), dfText, 128); 
	m_product_classTbl.AddField(_T("mpc_indication"), dfText, 81); 
	//m_product_classTbl.AddField(_T("mpc_level"), dfLong); 
	//m_product_classTbl.AddField(_T("mpc_line"), dfInteger); 
	m_product_classTbl.AddField(_T("mpc_isactive"), dfText, 1);
	m_product_classTbl.AddField(_T("mpc_group"), dfInteger);
	m_product_classTbl.AddField(_T("mpc_index"), dfInteger);
	m_product_classTbl.AddField(_T("mpc_advise"), dfText, 1);
	m_product_classTbl.AddField(_T("mpc_is_limited"), dfText, 1);
	m_product_classTbl.AddField(_T("mpc_warning"), dfText, 2000);

	m_wndID.ShowWindow(SW_HIDE);
	m_wndUnit.ShowWindow(SW_HIDE);
	m_wndIndication.ShowWindow(SW_HIDE);
}

void CProductClassDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndATCCode.SetEvent(WE_CHANGE, _OnATCCodeChangeFnc);
	//m_wndATCCode.SetEvent(WE_SETFOCUS, _OnATCCodeSetfocusFnc);
	//m_wndATCCode.SetEvent(WE_KILLFOCUS, _OnATCCodeKillfocusFnc);
	m_wndATCCode.SetEvent(WE_CHECKVALUE, _OnATCCodeCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndEffectGroup.SetEvent(WE_SELENDOK, _OnEffectGroupSelendokFnc);
	//m_wndEffectGroup.SetEvent(WE_SETFOCUS, _OnEffectGroupSetfocusFnc);
	//m_wndEffectGroup.SetEvent(WE_KILLFOCUS, _OnEffectGroupKillfocusFnc);
	m_wndEffectGroup.SetEvent(WE_SELCHANGE, _OnEffectGroupSelectChangeFnc);
	m_wndEffectGroup.SetEvent(WE_LOADDATA, _OnEffectGroupLoadDataFnc);
	//m_wndEffectGroup.SetEvent(WE_ADDNEW, _OnEffectGroupAddNewFnc);
	m_wndClassGroup.SetEvent(WE_LOADDATA, _OnClassGroupLoadDataFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndIsLimited.SetEvent(WE_CLICK, _OnIsLimitedSelectFnc);
	SetMode(GetMode());
	if (GetMode() == VM_EDIT)
		GetDataToScreen();
	m_wndWarning.EnableWindow(m_bIsLimited);
}
void CProductClassDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndATCCode.GetDlgCtrlID(), m_szATCCode);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndEffectGroup.GetDlgCtrlID(), m_szEffectGroupKey);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_TextEx(pDX, m_wndClassGroup.GetDlgCtrlID(), m_szClassGroupKey);
	DDX_Text(pDX, m_wndIndex.GetDlgCtrlID(), m_nIndex);
	DDX_Check(pDX, m_wndAdvise.GetDlgCtrlID(), m_bAdvise);
	DDX_Check(pDX, m_wndIsLimited.GetDlgCtrlID(), m_bIsLimited);
	DDX_Text(pDX, m_wndWarning.GetDlgCtrlID(), m_szWarning);
}
void CProductClassDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_nID > 0){
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT * ") \
					_T(" FROM m_product_class ") \
					_T(" WHERE mpc_product_class_id=%ld "), m_nID);
		rs.ExecSQL(szSQL);
		if(rs.GetRecordCount() > 0){
			rs.GetValue(_T("mpc_name"), m_szName);
//			rs.GetValue(_T("mpc_unit"), m_szUnit);
			rs.GetValue(_T("mpc_product_category_id"), m_szEffectGroupKey);
			rs.GetValue(_T("mpc_atccode"), m_szATCCode);
			rs.GetValue(_T("mpc_indication"), m_szIndication);
			CString szActive;
			rs.GetValue(_T("mpc_isactive"), szActive);
			if (szActive == _T("Y"))
				m_bActive = true;
			else
				m_bActive = false;

			CString tmpStr;
			rs.GetValue(_T("mpc_advise"), tmpStr);
			if (tmpStr == _T("Y"))
				m_bAdvise = TRUE;
			else
				m_bAdvise = FALSE;

			rs.GetValue(_T("mpc_group"), m_szClassGroupKey);
			rs.GetValue(_T("mpc_index"), m_nIndex);
			rs.GetValue(_T("mpc_is_limited"), tmpStr);
			if (tmpStr == _T("Y"))
				m_bIsLimited = TRUE;
			else
				m_bIsLimited = FALSE;
			rs.GetValue(_T("mpc_warning"), m_szWarning);
		}
	}


	UpdateData(false);

}

void CProductClassDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_product_classTbl.SetValue(_T("mpc_createdby"), pMF->GetCurrentUser());
	m_product_classTbl.SetValue(_T("mpc_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE mpc_product_class_id=%ld"), m_nID);
		m_product_classTbl.Open(&pMF->m_db, szWhere);
	}
	m_product_classTbl.SetValue(_T("mpc_org_id"), pMF->GetModuleID());
	m_product_classTbl.SetValue(_T("mpc_name"), m_szName);
	m_product_classTbl.SetValue(_T("mpc_atccode"), m_szATCCode);
	m_product_classTbl.SetValue(_T("mpc_product_category_id"), m_szEffectGroupKey);
	m_product_classTbl.SetValue(_T("mpc_indication"), m_szIndication);
	m_product_classTbl.SetValue(_T("mpc_isactive"), m_bActive?_T("Y"):_T("N"));
	m_product_classTbl.SetValue(_T("mpc_group"), m_szClassGroupKey);
	m_product_classTbl.SetValue(_T("mpc_index"), m_nIndex);
	m_product_classTbl.SetValue(_T("mpc_advise"), m_bAdvise?_T("Y"):_T("N"));
	m_product_classTbl.SetValue(_T("mpc_is_limited"), m_bIsLimited?_T("Y"):_T("N"));
	m_product_classTbl.SetValue(_T("mpc_warning"), m_szWarning);
}

void CProductClassDialog::SetDefaultValues(){
	m_szClassGroupKey.Empty();
	m_szATCCode.Empty();
	m_szName.Empty();
	m_szUnit.Empty();
	m_szIndication.Empty();
	m_bActive = true;
	m_nIndex = 0;
	m_bAdvise=FALSE;
	m_bIsLimited = FALSE;
	m_szWarning.Empty();
}

int CProductClassDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
//			m_wndID.EnableWindow(FALSE);
			if(m_szEffectGroupKey.IsEmpty())
				m_wndEffectGroup.SetFocus();
			else
				m_wndName.SetFocus();
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1); 
//			m_wndID.EnableWindow(FALSE);
			m_wndName.SetFocus();
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

/*void CProductClassDialog::OnATCCodeChange(){
	
} */
/*void CProductClassDialog::OnATCCodeSetfocus(){
	
} */
/*void CProductClassDialog::OnATCCodeKillfocus(){
	
} */
int CProductClassDialog::OnATCCodeCheckValue(){
	return 0;
}
 
/*void CProductClassDialog::OnNameChange(){
	
} */
/*void CProductClassDialog::OnNameSetfocus(){
	
} */
/*void CProductClassDialog::OnNameKillfocus(){
	
} */
int CProductClassDialog::OnNameCheckValue(){
	return 0;
}
 
void CProductClassDialog::OnEffectGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CProductClassDialog::OnEffectGroupSelendok(){
	 
}

/*void CProductClassDialog::OnEffectGroupSetfocus(){
	
}*/
/*void CProductClassDialog::OnEffectGroupKillfocus(){
	
}*/
long CProductClassDialog::OnEffectGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductCategoryList(&m_wndEffectGroup, m_szEffectGroupKey);
	/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szName;
	if(m_wndEffectGroup.IsSearchKey() && !m_szEffectGroupKey.IsEmpty()){
		szWhere.Format(_T(" WHERE mpc_product_category_id='%s' "), m_szEffectGroupKey);
	};
	m_wndEffectGroup.DeleteAllItems(); 
	int nLevel;
	szSQL.Format(_T("SELECT * FROM m_product_category  %s ORDER BY mpc_product_category_id, mpc_level, mpc_parent_id "), szWhere);
	int nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("mpc_level"), nLevel);
		szName.Empty();
		for (int i =0; i < nLevel; i++){
			szName += _T("  ");
		}
		szName += rs.GetValue(_T("mpc_name"));
		m_wndEffectGroup.AddItems(
			rs.GetValue(_T("mpc_product_category_id")), 
			szName,
			NULL);
		rs.MoveNext();
	}
	return nCount;
	*/
}

/*void CProductClassDialog::OnEffectGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CProductClassDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveProductClassDialog();
}
 
void CProductClassDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
void CProductClassDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CProductClassDialog::OnAdviseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
int CProductClassDialog::OnAddProductClassDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CProductClassDialog::OnEditProductClassDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CProductClassDialog::OnDeleteProductClassDialog(){
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
 		OnCancelProductClassDialog(); 
 	}
	return 0;
}

int CProductClassDialog::OnSaveProductClassDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_product_classTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE mpc_product_class_id=%ld  "), m_nID); 
 		szSQL = m_product_classTbl.GetUpdateSQL(_T("mpc_createdby, mpc_createddate, mpc_product_class_id")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		((CProductClassList*)m_pParentWnd)->Refresh(m_nID);
		if(GetMode() == VM_ADD)
		{
 			SetMode(VM_ADD);
		}
		else
			CGuiDialog::OnCancel();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}

int CProductClassDialog::OnCancelProductClassDialog(){
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
 
int CProductClassDialog::OnProductClassDialogListLoadData(){
	return 0;
}

long CProductClassDialog::OnClassGroupLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndClassGroup.DeleteAllItems();
	szSQL.Format(_T(" SELECT mpcg_id AS id,") \
	_T("        mpcg_index AS circularindex,") \
	_T("        mpcg_name AS name,") \
	_T("		mpcg_active as is_active") \
	_T(" FROM   m_product_class_group") \
	_T(" WHERE  1=1 AND mpcg_active = 'Y' ") \
	_T(" ORDER BY mpcg_index"));
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		m_wndClassGroup.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("circularindex")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return rs.GetRecordCount();
}

void CProductClassDialog::OnIsLimitedSelect()
{
	UpdateData();
	m_wndWarning.EnableWindow(m_bIsLimited);
	if (!m_bIsLimited)
	{
		m_wndWarning.SetWindowText(_T(""));
	}
}