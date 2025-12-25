#include "VIMESSettingParametersDialog.h"
#include "MainFrm.h"
/*static void _OnTableNameChangeFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnTableNameChange();
} */
/*static void _OnTableNameSetfocusFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnTableNameSetfocus();} */ 
/*static void _OnTableNameKillfocusFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnTableNameKillfocus();
} */
static int _OnTableNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESSettingParametersDialog *)pWnd)->OnTableNameCheckValue();
} 
/*static void _OnIDFieldNameChangeFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnIDFieldNameChange();
} */
/*static void _OnIDFieldNameSetfocusFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnIDFieldNameSetfocus();} */ 
/*static void _OnIDFieldNameKillfocusFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnIDFieldNameKillfocus();
} */
static int _OnIDFieldNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESSettingParametersDialog *)pWnd)->OnIDFieldNameCheckValue();
} 
static void _OnIDFieldTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESSettingParametersDialog* )pWnd)->OnIDFieldTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIDFieldTypeSelendokFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnIDFieldTypeSelendok();
}
/*static void _OnIDFieldTypeSetfocusFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnIDFieldTypeKillfocus();
}*/
/*static void _OnIDFieldTypeKillfocusFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnIDFieldTypeKillfocus();
}*/
static long _OnIDFieldTypeLoadDataFnc(CWnd *pWnd){
	return ((CVIMESSettingParametersDialog *)pWnd)->OnIDFieldTypeLoadData();
}
/*static void _OnIDFieldTypeAddNewFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnIDFieldTypeAddNew();
}*/
/*static void _OnDescFieldNameChangeFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnDescFieldNameChange();
} */
/*static void _OnDescFieldNameSetfocusFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnDescFieldNameSetfocus();} */ 
/*static void _OnDescFieldNameKillfocusFnc(CWnd *pWnd){
	((CVIMESSettingParametersDialog *)pWnd)->OnDescFieldNameKillfocus();
} */
static int _OnDescFieldNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESSettingParametersDialog *)pWnd)->OnDescFieldNameCheckValue();
} 
static void _OnSetupSelectFnc(CWnd *pWnd){
	CVIMESSettingParametersDialog *pVw = (CVIMESSettingParametersDialog *)pWnd;
	pVw->OnSetupSelect();
} 
static void _OnResetSelectFnc(CWnd *pWnd){
	CVIMESSettingParametersDialog *pVw = (CVIMESSettingParametersDialog *)pWnd;
	pVw->OnResetSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CVIMESSettingParametersDialog *pVw = (CVIMESSettingParametersDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddVIMESSettingParametersDialogFnc(CWnd *pWnd){
	 return ((CVIMESSettingParametersDialog*)pWnd)->OnAddVIMESSettingParametersDialog();
} 
static int _OnEditVIMESSettingParametersDialogFnc(CWnd *pWnd){
	 return ((CVIMESSettingParametersDialog*)pWnd)->OnEditVIMESSettingParametersDialog();
} 
static int _OnDeleteVIMESSettingParametersDialogFnc(CWnd *pWnd){
	 return ((CVIMESSettingParametersDialog*)pWnd)->OnDeleteVIMESSettingParametersDialog();
} 
static int _OnSaveVIMESSettingParametersDialogFnc(CWnd *pWnd){
	 return ((CVIMESSettingParametersDialog*)pWnd)->OnSaveVIMESSettingParametersDialog();
} 
static int _OnCancelVIMESSettingParametersDialogFnc(CWnd *pWnd){
	 return ((CVIMESSettingParametersDialog*)pWnd)->OnCancelVIMESSettingParametersDialog();
} 
CVIMESSettingParametersDialog::CVIMESSettingParametersDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CVIMESSettingParametersDialog::~CVIMESSettingParametersDialog(){
}
void CVIMESSettingParametersDialog::OnCreateComponents(){
	m_wndSettingParameters.Create(this, _T("Parameter Information"), 5, 5, 300, 180);
	m_wndTableNameLabel.Create(this, _T("Table Name"), 10, 30, 130, 55);
	m_wndTableName.Create(this,135, 30, 295, 55); 
	m_wndIDFieldNameLabel.Create(this, _T("ID Field Name"), 10, 60, 130, 85);
	m_wndIDFieldName.Create(this,135, 60, 295, 85); 
	m_wndIDFieldTypeLabel.Create(this, _T("ID Field Type"), 10, 90, 130, 115);
	m_wndIDFieldType.Create(this,135, 90, 215, 115); 
	m_wndDescFieldNameLabel.Create(this, _T("Desc Field Name"), 10, 120, 130, 145);
	m_wndDescFieldName.Create(this,135, 120, 295, 145); 
	m_wndSetup.Create(this, _T("&Setup"), 45, 150, 125, 175);
	m_wndReset.Create(this, _T("&Reset"), 130, 150, 210, 175);
	m_wndClose.Create(this, _T("&Close"), 215, 150, 295, 175);

}
void CVIMESSettingParametersDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndTableName.SetLimitText(35);
	m_wndTableName.SetCheckValue(true);
	m_wndIDFieldName.SetLimitText(35);
	m_wndIDFieldName.SetCheckValue(true);
	m_wndIDFieldType.SetCheckValue(true);
	m_wndIDFieldType.LimitText(15);
	m_wndDescFieldName.SetLimitText(35);
	m_wndDescFieldName.SetCheckValue(true);


	m_wndIDFieldType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndIDFieldType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	SetWindowTitle(_T("Setting Parameters"));
}
void CVIMESSettingParametersDialog::OnSetWindowEvents(){
	//m_wndTableName.SetEvent(WE_CHANGE, _OnTableNameChangeFnc);
	//m_wndTableName.SetEvent(WE_SETFOCUS, _OnTableNameSetfocusFnc);
	//m_wndTableName.SetEvent(WE_KILLFOCUS, _OnTableNameKillfocusFnc);
	m_wndTableName.SetEvent(WE_CHECKVALUE, _OnTableNameCheckValueFnc);
	//m_wndIDFieldName.SetEvent(WE_CHANGE, _OnIDFieldNameChangeFnc);
	//m_wndIDFieldName.SetEvent(WE_SETFOCUS, _OnIDFieldNameSetfocusFnc);
	//m_wndIDFieldName.SetEvent(WE_KILLFOCUS, _OnIDFieldNameKillfocusFnc);
	m_wndIDFieldName.SetEvent(WE_CHECKVALUE, _OnIDFieldNameCheckValueFnc);
	m_wndIDFieldType.SetEvent(WE_SELENDOK, _OnIDFieldTypeSelendokFnc);
	//m_wndIDFieldType.SetEvent(WE_SETFOCUS, _OnIDFieldTypeSetfocusFnc);
	//m_wndIDFieldType.SetEvent(WE_KILLFOCUS, _OnIDFieldTypeKillfocusFnc);
	m_wndIDFieldType.SetEvent(WE_SELCHANGE, _OnIDFieldTypeSelectChangeFnc);
	m_wndIDFieldType.SetEvent(WE_LOADDATA, _OnIDFieldTypeLoadDataFnc);
	//m_wndIDFieldType.SetEvent(WE_ADDNEW, _OnIDFieldTypeAddNewFnc);
	//m_wndDescFieldName.SetEvent(WE_CHANGE, _OnDescFieldNameChangeFnc);
	//m_wndDescFieldName.SetEvent(WE_SETFOCUS, _OnDescFieldNameSetfocusFnc);
	//m_wndDescFieldName.SetEvent(WE_KILLFOCUS, _OnDescFieldNameKillfocusFnc);
	m_wndDescFieldName.SetEvent(WE_CHECKVALUE, _OnDescFieldNameCheckValueFnc);
	m_wndSetup.SetEvent(WE_CLICK, _OnSetupSelectFnc);
	m_wndReset.SetEvent(WE_CLICK, _OnResetSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(GetMode());
}
void CVIMESSettingParametersDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTableName.GetDlgCtrlID(), m_szTableName);
	DDX_Text(pDX, m_wndIDFieldName.GetDlgCtrlID(), m_szIDFieldName);
	DDX_TextEx(pDX, m_wndIDFieldType.GetDlgCtrlID(), m_szIDFieldTypeKey);
	DDX_Text(pDX, m_wndDescFieldName.GetDlgCtrlID(), m_szDescFieldName);
}
void CVIMESSettingParametersDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVIMESSettingParametersDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESSettingParametersDialog::SetDefaultValues(){

	m_szTableName.Empty();
	m_szIDFieldName.Empty();
	m_szIDFieldTypeKey.Empty();
	m_szDescFieldName.Empty();

}
int CVIMESSettingParametersDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			SetDefaultValues(); 
			m_wndTableName.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, -1); 
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
/*void CVIMESSettingParametersDialog::OnTableNameChange(){
	
} */
/*void CVIMESSettingParametersDialog::OnTableNameSetfocus(){
	
} */
/*void CVIMESSettingParametersDialog::OnTableNameKillfocus(){
	
} */
int CVIMESSettingParametersDialog::OnTableNameCheckValue(){
	return 0;
} 
/*void CVIMESSettingParametersDialog::OnIDFieldNameChange(){
	
} */
/*void CVIMESSettingParametersDialog::OnIDFieldNameSetfocus(){
	
} */
/*void CVIMESSettingParametersDialog::OnIDFieldNameKillfocus(){
	
} */
int CVIMESSettingParametersDialog::OnIDFieldNameCheckValue(){
	return 0;
} 
void CVIMESSettingParametersDialog::OnIDFieldTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESSettingParametersDialog::OnIDFieldTypeSelendok(){
	 
}
/*void CVIMESSettingParametersDialog::OnIDFieldTypeSetfocus(){
	
}*/
/*void CVIMESSettingParametersDialog::OnIDFieldTypeKillfocus(){
	
}*/
long CVIMESSettingParametersDialog::OnIDFieldTypeLoadData()
{
	/*CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIDFieldType.IsSearchKey() && !m_szIDFieldTypeKey.IsEmpty()){
	};
	m_wndIDFieldType.DeleteAllItems(); */
	int nCount = 0;
	/*nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIDFieldType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}*/
	CString szID[] = {_T("1"), _T("2")};
	CString szDesc[] = {_T("Integer"), _T("Text")};
	m_wndIDFieldType.DeleteAllItems();
	for (int i = 0; i < 2; i++)
		m_wndIDFieldType.AddItems(szID[i], szDesc[i], NULL);
	return nCount;
}
/*void CVIMESSettingParametersDialog::OnIDFieldTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESSettingParametersDialog::OnDescFieldNameChange(){
	
} */
/*void CVIMESSettingParametersDialog::OnDescFieldNameSetfocus(){
	
} */
/*void CVIMESSettingParametersDialog::OnDescFieldNameKillfocus(){
	
} */
int CVIMESSettingParametersDialog::OnDescFieldNameCheckValue(){
	return 0;
} 
void CVIMESSettingParametersDialog::OnSetupSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsValidateData()) 
 		return; 
	if (m_szIDFieldTypeKey == _T("1"))
	{
		CVIMESGeneralSetupDialog dlg(this, m_szTableName, m_szIDFieldName, m_szDescFieldName, true);
		int ret = dlg.DoModal();
		if (ret == 2)
		{
			m_wndTableName.SetFocus();
			m_wndTableName.SetSel(0, -1);
		}
	}
	else
	{
		CVIMESGeneralSetupDialog dlg(this, m_szTableName, m_szIDFieldName, m_szDescFieldName, false);
		int ret = dlg.DoModal();
		if (ret == 2)
		{
			m_wndTableName.SetFocus();
			m_wndTableName.SetSel(0, -1);
		}
	}
} 
void CVIMESSettingParametersDialog::OnResetSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetDefaultValues();
	UpdateData(FALSE);
	m_wndTableName.SetFocus();
} 
void CVIMESSettingParametersDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CVIMESSettingParametersDialog::OnAddVIMESSettingParametersDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESSettingParametersDialog::OnEditVIMESSettingParametersDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESSettingParametersDialog::OnDeleteVIMESSettingParametersDialog(){
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
 		OnCancelVIMESSettingParametersDialog(); 
 	}
	return 0;
}
int CVIMESSettingParametersDialog::OnSaveVIMESSettingParametersDialog(){
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
 		//OnVIMESSettingParametersDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESSettingParametersDialog::OnCancelVIMESSettingParametersDialog(){
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
int CVIMESSettingParametersDialog::OnVIMESSettingParametersDialogListLoadData(){
	return 0;
}
