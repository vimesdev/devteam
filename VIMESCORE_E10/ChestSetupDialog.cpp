#include "ChestSetupDialog.h"
#include "MainFrame_E10.h"
#include "ChestPaneDialog.h"
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CChestSetupDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CChestSetupDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CChestSetupDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CChestSetupDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CChestSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CChestSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CChestSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CChestSetupDialog *)pWnd)->OnNameCheckValue();
} 
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CChestSetupDialog *)pWnd)->OnGroupLoadData();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CChestSetupDialog *pVw = (CChestSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CChestSetupDialog *pVw = (CChestSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddChestSetupDialogFnc(CWnd *pWnd){
	 return ((CChestSetupDialog*)pWnd)->OnAddChestSetupDialog();
} 
static int _OnEditChestSetupDialogFnc(CWnd *pWnd){
	 return ((CChestSetupDialog*)pWnd)->OnEditChestSetupDialog();
} 
static int _OnDeleteChestSetupDialogFnc(CWnd *pWnd){
	 return ((CChestSetupDialog*)pWnd)->OnDeleteChestSetupDialog();
} 
static int _OnSaveChestSetupDialogFnc(CWnd *pWnd){
	 return ((CChestSetupDialog*)pWnd)->OnSaveChestSetupDialog();
} 
static int _OnCancelChestSetupDialogFnc(CWnd *pWnd){
	 return ((CChestSetupDialog*)pWnd)->OnCancelChestSetupDialog();
} 
CChestSetupDialog::CChestSetupDialog(CWnd *pParent, int nMode, int nStorageID):
	CGuiDialog(pParent){
	m_nMode = nMode;
	m_nStorageID = nStorageID;
	m_nDlgWidth = 305;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CChestSetupDialog::~CChestSetupDialog(){
}
void CChestSetupDialog::OnCreateComponents(){
	m_wndChestInput.Create(this, _T("Chest Input"), 5, 5, 300, 90);
	m_wndCodeLabel.Create(this, _T("Code"), 10, 30, 45, 55);
	m_wndCode.Create(this,50, 30, 135, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 140, 30, 176, 55);
	m_wndGroup.Create(this,181, 30, 295, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 45, 85);
	m_wndName.Create(this,50, 60, 295, 85); 
	m_wndSave.Create(this, _T("&Save"), 135, 95, 215, 120);
	m_wndClose.Create(this, _T("&Close"), 220, 95, 300, 120);

}
void CChestSetupDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndCode.SetLimitText(35);
	m_wndCode.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);

	m_wndGroup.InsertColumn(1, _T("ID"), FMT_TEXT, 30);
	m_wndGroup.InsertColumn(2, _T("Name"), FMT_TEXT, 80);

	m_location_listTbl.SetTableName(_T("m_location_list"));
	m_location_listTbl.AddField(_T("mll_storage_id"), dfInteger);
	m_location_listTbl.AddField(_T("mll_location_id"), dfInteger);
	m_location_listTbl.AddField(_T("mll_code"), dfText, 20);
	m_location_listTbl.AddField(_T("mll_name"), dfText, 128);
	m_location_listTbl.AddField(_T("mll_group_id"), dfInteger);
}
void CChestSetupDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(m_nMode);

}
void CChestSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);

}
void CChestSetupDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CChestSetupDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_nMode == VM_EDIT)
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE mll_storage_id = %d AND mll_location_id = %d"), m_nStorageID, m_nLocationID);
	}
	m_location_listTbl.SetValue(_T("mll_storage_id"), m_nStorageID);
	m_location_listTbl.SetValue(_T("mll_code"), m_szCode);
	m_location_listTbl.SetValue(_T("mll_name"), m_szName);
	m_location_listTbl.SetValue(_T("mll_group_id"), m_szGroupKey);
}
void CChestSetupDialog::SetDefaultValues(){

	m_szCode.Empty();
	m_szName.Empty();
	m_szGroupKey.Empty();

}
int CChestSetupDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			szSQL.Format(_T("AD_GETNEXTVAL('CHEST_NO', 'N')"));
			m_szCode = pMF->ExecDML(szSQL);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
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
		m_wndCode.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CChestSetupDialog::OnCodeChange(){
	
} */
/*void CChestSetupDialog::OnCodeSetfocus(){
	
} */
/*void CChestSetupDialog::OnCodeKillfocus(){
	
} */
int CChestSetupDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CChestSetupDialog::OnNameChange(){
	
} */
/*void CChestSetupDialog::OnNameSetfocus(){
	
} */
/*void CChestSetupDialog::OnNameKillfocus(){
	
} */
int CChestSetupDialog::OnNameCheckValue(){
	return 0;
} 

long CChestSetupDialog::OnGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nCount = 0;
	if (m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND mlg_id = %s"), m_szGroupKey);
	szSQL.Format(_T("SELECT mlg_id id, mlg_name descr FROM m_location_group WHERE 1=1 %s ORDER BY mlg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	m_wndGroup.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("descr")));
		rs.MoveNext();
	}
	return nCount;
}

void CChestSetupDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveChestSetupDialog();
} 
void CChestSetupDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CChestSetupDialog::OnAddChestSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CChestSetupDialog::OnEditChestSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CChestSetupDialog::OnDeleteChestSetupDialog(){
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
 		OnCancelChestSetupDialog();
 	}
	return 0;
}

int CChestSetupDialog::OnSaveChestSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	int nLocationID;
 	if(GetMode() == VM_ADD){
		szSQL.Format(_T("SELECT COALESCE(MAX(mll_location_id), 0) + 1 AS id FROM m_location_list WHERE mll_storage_id = %d"), m_nStorageID);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("id"), nLocationID);
		if (nLocationID > 0)
			m_location_listTbl.SetValue(_T("mll_location_id"), nLocationID);
 		szSQL = m_location_listTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE mll_storage_id = %d AND mll_location_id = %d"), m_nStorageID, m_nLocationID);
 		szSQL = m_location_listTbl.GetUpdateSQL(_T("mll_storage_id, mll_location_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		((CChestPaneDialog*) GetParent())->	OnChestPaneLoadData();
		if (GetMode() == VM_ADD)
		{
			szSQL.Format(_T("AD_GETNEXTVAL('CHEST_NO', 'Y')"));
			pMF->ExecDML(szSQL);
 			SetMode(VM_ADD);
		}
		else
			CGuiDialog::OnOK();
 	}
 	else
 	{
 	}
 	return ret;

}
int CChestSetupDialog::OnCancelChestSetupDialog(){
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
int CChestSetupDialog::OnChestSetupDialogListLoadData(){
	return 0;
}
