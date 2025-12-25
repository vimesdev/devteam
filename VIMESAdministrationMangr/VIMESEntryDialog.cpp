#include "VIMESEntryDialog.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESEntryDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESEntryDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnShortcutChangeFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnShortcutChange();
} */
/*static void _OnShortcutSetfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnShortcutSetfocus();} */ 
/*static void _OnShortcutKillfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnShortcutKillfocus();
} */
static int _OnShortcutCheckValueFnc(CWnd *pWnd){
	return ((CVIMESEntryDialog *)pWnd)->OnShortcutCheckValue();
} 
static void _OnOkSelectFnc(CWnd *pWnd){
	CVIMESEntryDialog *pVw = (CVIMESEntryDialog *)pWnd;
	pVw->OnOkSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CVIMESEntryDialog *pVw = (CVIMESEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnIDBHChangeFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnIDBHChange();
} */
/*static void _OnIDBHSetfocusFnc(CWnd *pWnd){
	((CVIMESEntryDialog *)pWnd)->OnIDBHSetfocus();} */
	/*static void _OnIDBHKillfocusFnc(CWnd *pWnd){
		((CVIMESEntryDialog *)pWnd)->OnIDBHKillfocus();
	} */
static int _OnIDBHCheckValueFnc(CWnd* pWnd) {
	return ((CVIMESEntryDialog*)pWnd)->OnIDBHCheckValue();
}
static void _OnIsActiveSelectFnc(CWnd* pWnd) {
	((CVIMESEntryDialog*)pWnd)->OnIsActiveSelect();
}
static int _OnAddVIMESEntryDialogFnc(CWnd *pWnd){
	 return ((CVIMESEntryDialog*)pWnd)->OnAddVIMESEntryDialog();
} 
static int _OnEditVIMESEntryDialogFnc(CWnd *pWnd){
	 return ((CVIMESEntryDialog*)pWnd)->OnEditVIMESEntryDialog();
} 
static int _OnDeleteVIMESEntryDialogFnc(CWnd *pWnd){
	 return ((CVIMESEntryDialog*)pWnd)->OnDeleteVIMESEntryDialog();
} 
static int _OnSaveVIMESEntryDialogFnc(CWnd *pWnd){
	 return ((CVIMESEntryDialog*)pWnd)->OnSaveVIMESEntryDialog();
} 
static int _OnCancelVIMESEntryDialogFnc(CWnd *pWnd){
	 return ((CVIMESEntryDialog*)pWnd)->OnCancelVIMESEntryDialog();
} 
CVIMESEntryDialog::CVIMESEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 395;
	m_nDlgHeight = 165;
	SetDefaultValues();
}
CVIMESEntryDialog::~CVIMESEntryDialog(){
}
void CVIMESEntryDialog::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 4, 390, 154);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this, 95, 30, 232, 55);
    m_wndID.SetReadOnly(true);
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 90, 85);
	m_wndName.Create(this, 95, 60, 383, 85);
	m_wndShortcutLabel.Create(this, _T("Shortcut"), 10, 90, 90, 115);
	m_wndShortcut.Create(this, 95, 90, 232, 115);
	m_wndOk.Create(this, _T("&Ok"), 227, 159, 306, 184);
	m_wndClose.Create(this, _T("&Close"), 311, 159, 390, 184);
	m_wndIDBHLabel.Create(this, _T("IDBH"), 10, 120, 90, 145);
	m_wndIDBH.Create(this, 95, 120, 232, 145);
	m_wndIsActive.Create(this, _T("Is Active"), 240, 120, 320, 145);
}
void CVIMESEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndShortcut.SetLimitText(7);
	m_wndShortcut.SetCheckValue(true);
	m_wndIDBH.SetLimitText(5);
	//m_wndIDBH.SetCheckValue(true);
	m_sys_provTbl.SetTableName(_T("sys_prov"));
	m_sys_provTbl.AddField(_T("sp_id"), dfLong); 
	m_sys_provTbl.AddField(_T("sp_name"), dfText, 81); 
	m_sys_provTbl.AddField(_T("sp_zone"), dfLong); 
	m_sys_provTbl.AddField(_T("sp_wrd"), dfText, 7); 
	m_sys_provTbl.AddField(_T("sp_idbh"), dfText, 5);
	m_sys_provTbl.AddField(_T("sp_isActive"), dfText, 1);
	m_sys_distTbl.SetTableName(_T("sys_dist"));
	m_sys_distTbl.AddField(_T("sd_id"), dfLong); 
	m_sys_distTbl.AddField(_T("sd_provid"), dfLong); 
	m_sys_distTbl.AddField(_T("sd_name"), dfText, 81); 
	m_sys_distTbl.AddField(_T("sd_wrd"), dfText, 7); 
	m_sys_distTbl.AddField(_T("sd_idbh"), dfText, 5);
	m_sys_distTbl.AddField(_T("sd_isActive"), dfText, 1);
	m_sys_villTbl.SetTableName(_T("sys_vill"));
	m_sys_villTbl.AddField(_T("sv_id"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_distid"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_provid"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_name"), dfText, 81); 
	m_sys_villTbl.AddField(_T("sv_wrd"), dfText, 7); 	
	m_sys_villTbl.AddField(_T("sv_idbh"), dfText, 5);
	m_sys_villTbl.AddField(_T("sv_isActive"), dfText, 1);
	
	SetMode(GetMode());	
}
void CVIMESEntryDialog::OnSetWindowEvents(){
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndShortcut.SetEvent(WE_CHANGE, _OnShortcutChangeFnc);
	//m_wndShortcut.SetEvent(WE_SETFOCUS, _OnShortcutSetfocusFnc);
	//m_wndShortcut.SetEvent(WE_KILLFOCUS, _OnShortcutKillfocusFnc);
	m_wndShortcut.SetEvent(WE_CHECKVALUE, _OnShortcutCheckValueFnc);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndIDBH.SetEvent(WE_CHANGE, _OnIDBHChangeFnc);
	//m_wndIDBH.SetEvent(WE_SETFOCUS, _OnIDBHSetfocusFnc);
	//m_wndIDBH.SetEvent(WE_KILLFOCUS, _OnIDBHKillfocusFnc);
	m_wndIDBH.SetEvent(WE_CHECKVALUE, _OnIDBHCheckValueFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);
	GetDataToScreen();

}
void CVIMESEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndShortcut.GetDlgCtrlID(), m_szShortcut);
	DDX_Text(pDX, m_wndIDBH.GetDlgCtrlID(), m_szIDBH);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);
}
void CVIMESEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;		
	switch (m_nModule)
	{
			case 0:
				{
					szSQL.Format(_T("SELECT sp_id as id, sp_name as name, sp_wrd as wrd, sp_idbh as idbh, sp_isactive as isactive FROM sys_prov WHERE sp_id=%ld"), m_nProvID);
					break;
				}
			case 1:
				{
					szSQL.Format(_T("SELECT sd_id as id, sd_name as name, sd_wrd as wrd, sd_idbh as idbh, sd_isactive as isactive FROM sys_dist WHERE sd_id=%ld"), m_nDistID);
					break;
				}
			case 2:
				{
					szSQL.Format(_T("SELECT sv_id as id, sv_name as name, sv_wrd as wrd, sv_idbh as idbh, sv_isactive as isactive FROM sys_vill WHERE sv_id=%ld"), m_nVillID);
					break;
				}
	}
				
			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
					rs.GetValue(_T("id"), m_nID);
					rs.GetValue(_T("name"), m_szName);
					rs.GetValue(_T("wrd"), m_szShortcut);
					rs.GetValue(_T("idbh"), m_szIDBH);
					rs.GetValue(_T("isactive"), m_szIsActive);

					if (m_szIsActive == _T("Y"))
						m_bIsActive = true;
					else
						m_bIsActive = false;
			}
	
}
void CVIMESEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	switch (m_nModule)
	{
	case 0:
		{			
			m_sys_provTbl.SetValue(_T("sp_id"), m_nID);
			m_sys_provTbl.SetValue(_T("sp_name"), m_szName);
			m_sys_provTbl.SetValue(_T("sp_wrd"), m_szShortcut);
			m_sys_provTbl.SetValue(_T("sp_idbh"), m_szIDBH);
			m_sys_provTbl.SetValue(_T("sp_isactive"), m_bIsActive ? _T("Y") : _T("N"));
			break;
		}
		case 1:
		{
			m_sys_distTbl.SetValue(_T("sd_id"), m_nID);
			m_sys_distTbl.SetValue(_T("sd_provid"), m_nProvID);
			m_sys_distTbl.SetValue(_T("sd_name"), m_szName);
			m_sys_distTbl.SetValue(_T("sd_wrd"), m_szShortcut);
			m_sys_distTbl.SetValue(_T("sd_idbh"), m_szIDBH);
			m_sys_distTbl.SetValue(_T("sd_isactive"), m_bIsActive ? _T("Y") : _T("N"));
			break;
		}
		case 2:
		{
			m_sys_villTbl.SetValue(_T("sv_id"), m_nID);
			m_sys_villTbl.SetValue(_T("sv_distid"), m_nDistID);
			m_sys_villTbl.SetValue(_T("sv_provid"), m_nProvID);
			m_sys_villTbl.SetValue(_T("sv_name"), m_szName);
			m_sys_villTbl.SetValue(_T("sv_wrd"), m_szShortcut);
			m_sys_villTbl.SetValue(_T("sv_idbh"), m_szIDBH);
			m_sys_villTbl.SetValue(_T("sv_isactive"), m_bIsActive ? _T("Y") : _T("N"));
			break;
		}
	}//end switch
}
void CVIMESEntryDialog::SetDefaultValues(){
	m_nID=0;
	m_szName.Empty();
	m_szShortcut.Empty();
	m_szIDBH.Empty();
	m_bIsActive = true;
}
int CVIMESEntryDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues();
			m_nID= OnCreateIDAdress (m_nModule);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndID.EnableWindow(false);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1);  			
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CVIMESEntryDialog::OnIDChange(){
	
} */
/*void CVIMESEntryDialog::OnIDSetfocus(){
	
} */
/*void CVIMESEntryDialog::OnIDKillfocus(){
	
} */
int CVIMESEntryDialog::OnIDCheckValue(){
	return 0;
} 
/*void CVIMESEntryDialog::OnNameChange(){
	
} */
/*void CVIMESEntryDialog::OnNameSetfocus(){
	
} */
/*void CVIMESEntryDialog::OnNameKillfocus(){
	
} */
int CVIMESEntryDialog::OnNameCheckValue(){
	return 0;
} 
/*void CVIMESEntryDialog::OnShortcutChange(){
	
} */
/*void CVIMESEntryDialog::OnShortcutSetfocus(){
	
} */
/*void CVIMESEntryDialog::OnShortcutKillfocus(){
	
} */
int CVIMESEntryDialog::OnShortcutCheckValue(){
	return 0;
} 
void CVIMESEntryDialog::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
	{
		OnSaveVIMESEntryDialog();	
	}
	else
	{
		SetMode(VM_VIEW);
		OnDeleteVIMESEntryDialog();
	}

	OnCancel();
} 
void CVIMESEntryDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
/*void CVIMESEntryDialog::OnIDBHChange(){

} */
/*void CVIMESEntryDialog::OnIDBHSetfocus(){

} */
/*void CVIMESEntryDialog::OnIDBHKillfocus(){

} */
int CVIMESEntryDialog::OnIDBHCheckValue() {
	return 0;
}
void CVIMESEntryDialog::OnIsActiveSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
int CVIMESEntryDialog::OnAddVIMESEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESEntryDialog::OnEditVIMESEntryDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESEntryDialog::OnDeleteVIMESEntryDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	
	if (OnDeleteAddress(m_nModule) >0)  
	{
		ShowMessage(10,MB_OK);
		return -1;
	}

	switch (m_nModule)
	{
	case 0:
		{
			szSQL.Format(_T(" DELETE FROM sys_prov	WHERE sp_id=%d"), m_nID);
			break;
		}
		case 1:
		{
			szSQL.Format(_T(" DELETE FROM sys_dist		WHERE sd_id=%d"), m_nID);
			break;
		}
		case 2:
		{
			szSQL.Format(_T(" DELETE FROM sys_vill WHERE sv_id=%d"), m_nID);
			break;
		}
	}
 	
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE);  		
 	}
	return 0;
}
int CVIMESEntryDialog::OnSaveVIMESEntryDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
		switch (m_nModule)
		{
		case 0:
			{
				szSQL = m_sys_provTbl.GetInsertSQL(); 
				break;
			}
		case 1:
			{
				szSQL = m_sys_distTbl.GetInsertSQL(); 
				break;
			}
		case 2:
			{
				szSQL = m_sys_villTbl.GetInsertSQL(); 
				break;
			}
		} 
		OnCheckIDAdress(m_nModule,m_nID);
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		switch (m_nModule)
		{
		case 0:
			{
				szWhere.Format(_T(" WHERE sp_id =%ld"), m_nID); 
 				szSQL = m_sys_provTbl.GetUpdateSQL(_T("sp_id")); 
 				szSQL += szWhere; 
				break;
			}
		case 1:
			{
				szWhere.Format(_T(" WHERE sd_id =%ld"), m_nID); 
 				szSQL = m_sys_distTbl.GetUpdateSQL(_T("sd_id,sd_provid")); 
 				szSQL += szWhere; 
				break;
			}
		case 2:
			{
				szWhere.Format(_T(" WHERE sv_id =%ld"), m_nID); 
 				szSQL = m_sys_villTbl.GetUpdateSQL(_T("sv_id,sv_distid,sv_provid")); 
 				szSQL += szWhere; 
				break;
			}

		}		
 	}  	
	_tprintf(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnVIMESEntryDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESEntryDialog::OnCancelVIMESEntryDialog(){
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
int CVIMESEntryDialog::OnVIMESEntryDialogListLoadData(){
	return 0;
}
int CVIMESEntryDialog::OnCheckIDAdress(int nModule, int ID){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	switch (nModule)
	{
	case 0:
		{
			szSQL.Format(_T(" SELECT * FROM sys_prov WHERE sp_id=%d"), ID);
			break;
		}
		case 1:
		{
			szSQL.Format(_T(" SELECT * FROM sys_dist WHERE sd_id=%d"), ID);
			break;
		}
		case 2:
		{
			szSQL.Format(_T(" SELECT * FROM sys_vill WHERE sv_id=%d"), ID);
			break;
		}
	}
	rs.ExecSQL(szSQL);
	
	if (rs.GetIntValue() > 0) {
		ShowMessage(10, MB_OK);
 		return -1; 
	}	
	return 0;
}
int CVIMESEntryDialog::OnCreateIDAdress(int nModule){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, tmpStr;

	CRecord rs(&pMF->m_db);
	switch (nModule)
	{
	case 0:
		{
			szSQL.Format(_T(" SELECT COALESCE(MAX(sp_id),0) + 2 FROM sys_prov  "));
			break;
		}
		case 1:
		{
			szSQL.Format(_T(" SELECT COALESCE(MAX(sd_id),0)+2 FROM sys_dist  WHERE sd_provid =%d"), m_nProvID);
			tmpStr.Format(_T("%d"),m_nProvID);
			break;
		}
		case 2:
		{
			if (m_nProvID <= 100)
			{
                szSQL.Format(_T(" SELECT COALESCE(MAX(sv_id),0)+2 FROM ")
                             _T("sys_vill WHERE SV_PROVID <= 100"),
                             m_nProvID);
                tmpStr.Format(_T("%d"), m_nProvID);
			}
            else
            {
                szSQL.Format(_T(" SELECT COALESCE(MAX(sv_id),0)+2 FROM ")
                             _T("sys_vill WHERE sv_distID=%d"),
                             m_nDistID);
                tmpStr.Format(_T("%d"), m_nDistID);
            }
			break;
		}
	}	
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue()>2) 
			return rs.GetIntValue();		
	else
		tmpStr  = 	tmpStr + "2";

	return ToInt(tmpStr);
}
int CVIMESEntryDialog::OnDeleteAddress(int nModule){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	switch (nModule)
	{
	case 0:
		{
			szSQL.Format(_T(" SELECT Count(sd_id)	 FROM sys_dist  WHERE sd_provid =%d"), m_nID);
			break;
		}
		case 1:
		{
			szSQL.Format(_T(" SELECT count(sv_id)	FROM sys_vill WHERE sv_distID=%d"), m_nID);
			break;
		}
	}	
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue()>0)  return rs.GetIntValue();
	switch (nModule)
	{
		case 0:
		{
			szSQL.Format(_T(" SELECT Count(*)	 FROM hms_patient  WHERE HP_PROVID =%d"), m_nID);
			break;
		}
		case 1:
		{
			szSQL.Format(_T(" SELECT count(*)	FROM hms_patient WHERE HP_DISTID=%d"), m_nID);
			break;
		}
		case 2:
		{
			szSQL.Format(_T(" SELECT count(*)	FROM hms_patient WHERE HP_VILLID=%d"), m_nID);
			break;
		}
	}	
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue()>0)  return rs.GetIntValue();
	return 0;
}