#include "SysConfigEditDialog.h"
#include "MainFrm.h"
/*static void _OnSTTChangeFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnSTTChange();
} */
/*static void _OnSTTSetfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnSTTSetfocus();} */ 
/*static void _OnSTTKillfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnSTTKillfocus();
} */
static int _OnSTTCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigEditDialog *)pWnd)->OnSTTCheckValue();
} 
static void _OnDataTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysConfigEditDialog* )pWnd)->OnDataTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDataTypeSelendokFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnDataTypeSelendok();
}
/*static void _OnDataTypeSetfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnDataTypeKillfocus();
}*/
/*static void _OnDataTypeKillfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnDataTypeKillfocus();
}*/
static long _OnDataTypeLoadDataFnc(CWnd *pWnd){
	return ((CSysConfigEditDialog *)pWnd)->OnDataTypeLoadData();
}
/*static void _OnDataTypeAddNewFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnDataTypeAddNew();
}*/
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigEditDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigEditDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnValueChangeFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnValueChange();
} */
/*static void _OnValueSetfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnValueSetfocus();} */ 
/*static void _OnValueKillfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog *)pWnd)->OnValueKillfocus();
} */
static int _OnValueCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigEditDialog *)pWnd)->OnValueCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSysConfigEditDialog *pVw = (CSysConfigEditDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddSysConfigEditDialogFnc(CWnd *pWnd){
	 return ((CSysConfigEditDialog*)pWnd)->OnAddSysConfigEditDialog();
} 
static int _OnEditSysConfigEditDialogFnc(CWnd *pWnd){
	 return ((CSysConfigEditDialog*)pWnd)->OnEditSysConfigEditDialog();
} 
static int _OnDeleteSysConfigEditDialogFnc(CWnd *pWnd){
	 return ((CSysConfigEditDialog*)pWnd)->OnDeleteSysConfigEditDialog();
} 
static int _OnSaveSysConfigEditDialogFnc(CWnd *pWnd){
	 return ((CSysConfigEditDialog*)pWnd)->OnSaveSysConfigEditDialog();
} 
static int _OnCancelSysConfigEditDialogFnc(CWnd *pWnd){
	 return ((CSysConfigEditDialog*)pWnd)->OnCancelSysConfigEditDialog();
} 
CSysConfigEditDialog::CSysConfigEditDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 360;
	m_nDlgHeight = 215;
	SetDefaultValues();
}
CSysConfigEditDialog::~CSysConfigEditDialog(){
}
void CSysConfigEditDialog::OnCreateComponents(){
	m_wndUpdate.Create(this, _T("Update"), 5, 5, 350, 175);
	m_wndSTTLabel.Create(this, _T("STT"), 10, 30, 90, 55);
	m_wndSTT.Create(this,95, 30, 175, 55); 
	m_wndDataTypeLabel.Create(this, _T("Data type"), 180, 30, 260, 55);
	m_wndDataType.Create(this,265, 30, 345, 55); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 60, 90, 85);
	m_wndID.Create(this,95, 60, 345, 85); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 92, 90, 117);
	m_wndDescription.Create(this,95, 92, 345, 142, 1, 0, 1); 
	m_wndValueLabel.Create(this, _T("Value"), 10, 145, 90, 170);
	m_wndValue.Create(this,95, 145, 345, 170); 
	m_wndSave.Create(this, _T("&Save"), 275, 180, 350, 205);

}
void CSysConfigEditDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	EnableControls(TRUE);
	EnableButtons(TRUE, 0, -1);
	m_wndSTT.EnableWindow(FALSE);
	m_wndSTT.SetLimitText(16);
	//m_wndSTT.SetCheckValue(true);
	//m_wndDataType.SetCheckValue(true);
	m_wndDataType.LimitText(35);
	m_wndID.SetLimitText(35);
	//m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	//m_wndDescription.SetCheckValue(true);
	
	m_wndValue.SetLimitText(35);
	//m_wndValue.SetCheckValue(true);


	m_wndDataType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDataType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_sys_configTbl.SetTableName(_T("sys_config"));
	m_sys_configTbl.AddField(_T("sc_id"), dfLong); 
	m_sys_configTbl.AddField(_T("sc_modid"), dfText, 7); 
	m_sys_configTbl.AddField(_T("sc_name"), dfText, 35); 
	m_sys_configTbl.AddField(_T("sc_desc"), dfText, 81); 
	m_sys_configTbl.AddField(_T("sc_val"), dfText, 35); 
	m_sys_configTbl.AddField(_T("sc_type"), dfText, 2); 

}
void CSysConfigEditDialog::OnSetWindowEvents(){
	//m_wndSTT.SetEvent(WE_CHANGE, _OnSTTChangeFnc);
	//m_wndSTT.SetEvent(WE_SETFOCUS, _OnSTTSetfocusFnc);
	//m_wndSTT.SetEvent(WE_KILLFOCUS, _OnSTTKillfocusFnc);
	m_wndSTT.SetEvent(WE_CHECKVALUE, _OnSTTCheckValueFnc);
	m_wndDataType.SetEvent(WE_SELENDOK, _OnDataTypeSelendokFnc);
	//m_wndDataType.SetEvent(WE_SETFOCUS, _OnDataTypeSetfocusFnc);
	//m_wndDataType.SetEvent(WE_KILLFOCUS, _OnDataTypeKillfocusFnc);
	m_wndDataType.SetEvent(WE_SELCHANGE, _OnDataTypeSelectChangeFnc);
	m_wndDataType.SetEvent(WE_LOADDATA, _OnDataTypeLoadDataFnc);
	//m_wndDataType.SetEvent(WE_ADDNEW, _OnDataTypeAddNewFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndValue.SetEvent(WE_CHANGE, _OnValueChangeFnc);
	//m_wndValue.SetEvent(WE_SETFOCUS, _OnValueSetfocusFnc);
	//m_wndValue.SetEvent(WE_KILLFOCUS, _OnValueKillfocusFnc);
	m_wndValue.SetEvent(WE_CHECKVALUE, _OnValueCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);

}
void CSysConfigEditDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSTT.GetDlgCtrlID(), m_nSTT);
	DDX_TextEx(pDX, m_wndDataType.GetDlgCtrlID(), m_szDataTypeKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndValue.GetDlgCtrlID(), m_szValue);

}
void CSysConfigEditDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysConfigEditDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	UpdateData(true);
	m_sys_configTbl.SetValue(_T("sc_id"), m_nSTT);
	m_sys_configTbl.SetValue(_T("sc_name"), m_szID);
	m_sys_configTbl.SetValue(_T("sc_type"), m_szDataTypeKey);
	m_sys_configTbl.SetValue(_T("sc_desc"), m_szDescription);
	m_sys_configTbl.SetValue(_T("sc_val"), m_szValue);
}
void CSysConfigEditDialog::SetDefaultValues(){

	m_nSTT=0;
	m_szDataTypeKey.Empty();
	m_szID.Empty();
	m_szDescription.Empty();
	m_szValue.Empty();

}
int CSysConfigEditDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
/*void CSysConfigEditDialog::OnSTTChange(){
	
} */
/*void CSysConfigEditDialog::OnSTTSetfocus(){
	
} */
/*void CSysConfigEditDialog::OnSTTKillfocus(){
	
} */
int CSysConfigEditDialog::OnSTTCheckValue(){
	return 0;
} 
void CSysConfigEditDialog::OnDataTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} 
void CSysConfigEditDialog::OnDataTypeSelendok(){
	 
}
/*void CSysConfigEditDialog::OnDataTypeSetfocus(){
	
}*/
/*void CSysConfigEditDialog::OnDataTypeKillfocus(){
	
}*/
long CSysConfigEditDialog::OnDataTypeLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDataType.IsSearchKey() && !m_szDataTypeKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code = '%s'"), m_szDataTypeKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as description FROM sys_sel WHERE ss_id = 'vimes_data_type' %s"), szWhere);
	m_wndDataType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDataType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSysConfigEditDialog::OnDataTypeAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} */
/*void CSysConfigEditDialog::OnIDChange(){
	
} */
/*void CSysConfigEditDialog::OnIDSetfocus(){
	
} */
/*void CSysConfigEditDialog::OnIDKillfocus(){
	
} */
int CSysConfigEditDialog::OnIDCheckValue(){
	return 0;
} 
/*void CSysConfigEditDialog::OnDescriptionChange(){
	
} */
/*void CSysConfigEditDialog::OnDescriptionSetfocus(){
	
} */
/*void CSysConfigEditDialog::OnDescriptionKillfocus(){
	
} */
int CSysConfigEditDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CSysConfigEditDialog::OnValueChange(){
	
} */
/*void CSysConfigEditDialog::OnValueSetfocus(){
	
} */
/*void CSysConfigEditDialog::OnValueKillfocus(){
	
} */
int CSysConfigEditDialog::OnValueCheckValue(){
	return 0;
} 
void CSysConfigEditDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if (OnSaveSysConfigEditDialog()>0)
		CGuiDialog::OnOK();
} 
int CSysConfigEditDialog::OnAddSysConfigEditDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSysConfigEditDialog::OnEditSysConfigEditDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysConfigEditDialog::OnDeleteSysConfigEditDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelSysConfigEditDialog(); 
 	}
	return 0;
}
int CSysConfigEditDialog::OnSaveSysConfigEditDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_sys_configTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
		szSQL.Format(_T("UPDATE hms_config SET %s = '%s'"), m_szID, m_szValue);
		int nCount=0;
		nCount = pMF->ExecSQL(szSQL);
		if (nCount>=0)
			MessageBox(_T("Update successfully"));
		else
		{
			MessageBox(_T("Update failed"));
			return -1;
		}
 		CString szWhere; 
		szWhere.Format(_T(" WHERE sc_id = %d"), m_nSTT); 
 		szSQL = m_sys_configTbl.GetUpdateSQL(_T("sc_id")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnSysConfigEditDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
		MessageBox(_T("Save Failed!"));
 	} 
 	return ret; 
}
int CSysConfigEditDialog::OnCancelSysConfigEditDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CSysConfigEditDialog::OnSysConfigEditDialogListLoadData(){
	return 0;
}
