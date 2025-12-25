#include "SysConfig.h"
#include "MainFrm.h"
static int _OnConfigListLoadDataFnc(CWnd *pWnd){
	 return ((CSysConfigSetup*)pWnd)->OnConfigListLoadData();
} 
static int _OnConfigListDblClickFnc(CWnd *pWnd){
	 return ((CSysConfigSetup*)pWnd)->OnConfigListDblClick();
} 
static int _OnConfigListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CSysConfigSetup*)pWnd)->OnConfigListSelectChange(nOldItem, nNewItem);
} 
static int _OnConfigListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysConfigSetup*)pWnd)->OnConfigListDeleteItem();
} 
static int _OnModuleIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysConfigSetup* )pWnd)->OnModuleIDSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnModuleIDSelendokFnc(CWnd *pWnd){
	 return ((CSysConfigSetup *)pWnd)->OnModuleIDSelendok();
}
/*static int _OnModuleIDSetfocusFnc(CWnd *pWnd){
	 return ((CSysConfigSetup *)pWnd)->OnModuleIDKillfocus();
}*/
/*static int _OnModuleIDKillfocusFnc(CWnd *pWnd){
	 return ((CSysConfigSetup *)pWnd)->OnModuleIDKillfocus();
}*/
static int _OnModuleIDLoadDataFnc(CWnd *pWnd){
	 return ((CSysConfigSetup *)pWnd)->OnModuleIDLoadData();
}
/*static int _OnModuleIDAddNewFnc(CWnd *pWnd){
	 return ((CSysConfigSetup *)pWnd)->OnModuleIDAddNew();
}*/
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnIDCheckValue();
} 
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnNameCheckValue();
} 
static int _OnValueTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysConfigSetup* )pWnd)->OnValueTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnValueTypeSelendokFnc(CWnd *pWnd){
	 return ((CSysConfigSetup *)pWnd)->OnValueTypeSelendok();
}
/*static int _OnValueTypeSetfocusFnc(CWnd *pWnd){
	 return ((CSysConfigSetup *)pWnd)->OnValueTypeKillfocus();
}*/
/*static int _OnValueTypeKillfocusFnc(CWnd *pWnd){
	 return ((CSysConfigSetup *)pWnd)->OnValueTypeKillfocus();
}*/
static int _OnValueTypeLoadDataFnc(CWnd *pWnd){
	 return ((CSysConfigSetup *)pWnd)->OnValueTypeLoadData();
}
/*static int _OnValueTypeAddNewFnc(CWnd *pWnd){
	 return ((CSysConfigSetup *)pWnd)->OnValueTypeAddNew();
}*/
/*static int _OnDescChangeFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnDescChange();
} */
/*static int _OnDescSetfocusFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnDescKillfocus();} */ 
/*static int _OnDescKillfocusFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnDescKillfocus();
} */
static int _OnDescCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnDescCheckValue();
} 
/*static int _OnValueChangeFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnValueChange();
} */
/*static int _OnValueSetfocusFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnValueKillfocus();} */ 
/*static int _OnValueKillfocusFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnValueKillfocus();
} */
static int _OnValueCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigSetup *)pWnd)->OnValueCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CSysConfigSetup *pVw = (CSysConfigSetup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CSysConfigSetup *pVw = (CSysConfigSetup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CSysConfigSetup *pVw = (CSysConfigSetup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CSysConfigSetup *pVw = (CSysConfigSetup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CSysConfigSetup *pVw = (CSysConfigSetup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddVIMESConfigFnc(CWnd *pWnd){
	 return ((CSysConfigSetup*)pWnd)->OnAddVIMESConfig();
} 
static int _OnEditVIMESConfigFnc(CWnd *pWnd){
	 return ((CSysConfigSetup*)pWnd)->OnEditVIMESConfig();
} 
static int _OnDeleteVIMESConfigFnc(CWnd *pWnd){
	 return ((CSysConfigSetup*)pWnd)->OnDeleteVIMESConfig();
} 
static int _OnSaveVIMESConfigFnc(CWnd *pWnd){
	 return ((CSysConfigSetup*)pWnd)->OnSaveVIMESConfig();
} 
static int _OnCancelVIMESConfigFnc(CWnd *pWnd){
	 return ((CSysConfigSetup*)pWnd)->OnCancelVIMESConfig();
} 
CSysConfigSetup::CSysConfigSetup(){

	m_nDlgWidth = 606;
	m_nDlgHeight = 406;
	SetDefaultValues();
}
CSysConfigSetup::~CSysConfigSetup(){
}
void CSysConfigSetup::OnCreateComponents(){
	m_wndConfigurationInformation.Create(this, _T("Configuration Infomation"), 5, 5, 599, 373);
	m_wndConfigList.Create(this,10, 25, 595, 287); 
	m_wndModuleIDLabel.Create(this, _T("Module ID"), 10, 292, 74, 314);
	m_wndModuleID.Create(this,79, 292, 250, 314); 
	m_wndIDLabel.Create(this, _T("ID"), 255, 292, 323, 314);
	m_wndID.Create(this,328, 292, 412, 314); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 319, 74, 341);
	m_wndName.Create(this,79, 319, 250, 341); 
	m_wndValueTypeLabel.Create(this, _T("Value Type"), 255, 319, 323, 341);
	m_wndValueType.Create(this,328, 319, 414, 341); 
	m_wndValueLabel.Create(this, _T("Value"), 419, 319, 466, 341);
	m_wndValue.Create(this,471, 319, 595, 341); 
	m_wndDescLabel.Create(this, _T("Desc"), 10, 346, 74, 368);
	m_wndDesc.Create(this,79, 346, 595, 368); 
	m_wndAdd.Create(this, _T("&Add"), 260, 378, 324, 400);
	m_wndEdit.Create(this, _T("&Edit"), 329, 378, 393, 400);
	m_wndDelete.Create(this, _T("&Delete"), 398, 378, 462, 400);
	m_wndSave.Create(this, _T("&Save"), 467, 378, 531, 400);
	m_wndCancel.Create(this, _T("&Cancel"), 536, 378, 600, 400);
}
void CSysConfigSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndModuleID.SetCheckValue(TRUE);
	//m_wndID.SetCheckValue(TRUE);
	m_wndID.SetReadOnly(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndValueType.SetCheckValue(true);
	m_wndValueType.LimitText(2);
	m_wndDesc.SetLimitText(81);
	m_wndDesc.SetCheckValue(true);
	m_wndValue.SetLimitText(35);
	m_wndValue.SetCheckValue(true);


	m_wndConfigList.InsertColumn(0, _T("Module"), CFMT_TEXT, 70);
	m_wndConfigList.InsertColumn(1, _T("ID"), CFMT_NUMBER, 30);
	m_wndConfigList.InsertColumn(2, _T("Name"), CFMT_TEXT, 150);
	m_wndConfigList.InsertColumn(3, _T("Value"), CFMT_TEXT, 100);
	m_wndConfigList.InsertColumn(4, _T("Desc"), CFMT_TEXT, 200);


	m_wndModuleID.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndModuleID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndValueType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndValueType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_sys_configTbl.SetTableName(_T("sys_config"));
	m_sys_configTbl.AddField(_T("sc_id"), dfLong); 
	m_sys_configTbl.AddField(_T("sc_modid"), dfText, 7); 
	m_sys_configTbl.AddField(_T("sc_name"), dfText, 35); 
	m_sys_configTbl.AddField(_T("sc_desc"), dfText, 81); 
	m_sys_configTbl.AddField(_T("sc_val"), dfText, 35); 
	m_sys_configTbl.AddField(_T("sc_type"), dfText, 2); 

}
void CSysConfigSetup::OnSetWindowEvents(){
	m_wndConfigList.SetEvent(WE_SELCHANGE, _OnConfigListSelectChangeFnc);
	m_wndConfigList.SetEvent(WE_LOADDATA, _OnConfigListLoadDataFnc);
	m_wndConfigList.SetEvent(WE_DBLCLICK, _OnConfigListDblClickFnc);
	m_wndConfigList.AddEvent(1, _T("Delete"), _OnConfigListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndModuleID.SetEvent(WE_SELENDOK, _OnModuleIDSelendokFnc);
	//m_wndModuleID.SetEvent(WE_SETFOCUS, _OnModuleIDSetfocusFnc);
	//m_wndModuleID.SetEvent(WE_KILLFOCUS, _OnModuleIDKillfocusFnc);
	m_wndModuleID.SetEvent(WE_SELCHANGE, _OnModuleIDSelectChangeFnc);
	m_wndModuleID.SetEvent(WE_LOADDATA, _OnModuleIDLoadDataFnc);
	//m_wndModuleID.SetEvent(WE_ADDNEW, _OnModuleIDAddNewFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndValueType.SetEvent(WE_SELENDOK, _OnValueTypeSelendokFnc);
	//m_wndValueType.SetEvent(WE_SETFOCUS, _OnValueTypeSetfocusFnc);
	//m_wndValueType.SetEvent(WE_KILLFOCUS, _OnValueTypeKillfocusFnc);
	m_wndValueType.SetEvent(WE_SELCHANGE, _OnValueTypeSelectChangeFnc);
	m_wndValueType.SetEvent(WE_LOADDATA, _OnValueTypeLoadDataFnc);
	//m_wndValueType.SetEvent(WE_ADDNEW, _OnValueTypeAddNewFnc);
	//m_wndDesc.SetEvent(WE_CHANGE, _OnDescChangeFnc);
	//m_wndDesc.SetEvent(WE_SETFOCUS, _OnDescSetfocusFnc);
	//m_wndDesc.SetEvent(WE_KILLFOCUS, _OnDescKillfocusFnc);
	m_wndDesc.SetEvent(WE_CHECKVALUE, _OnDescCheckValueFnc);
	//m_wndValue.SetEvent(WE_CHANGE, _OnValueChangeFnc);
	//m_wndValue.SetEvent(WE_SETFOCUS, _OnValueSetfocusFnc);
	//m_wndValue.SetEvent(WE_KILLFOCUS, _OnValueKillfocusFnc);
	m_wndValue.SetEvent(WE_CHECKVALUE, _OnValueCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESConfigFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESConfigFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESConfigFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESConfigFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESConfigFnc, 0, 'T', VK_CONTROL);

	OnConfigListLoadData();
}
void CSysConfigSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndModuleID.GetDlgCtrlID(), m_szModuleIDKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndValueType.GetDlgCtrlID(), m_szValueTypeKey);
	DDX_Text(pDX, m_wndDesc.GetDlgCtrlID(), m_szDesc);
	DDX_TextEx(pDX, m_wndValue.GetDlgCtrlID(), m_szValue);

}
void CSysConfigSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	int nID = m_nID;
	SetDefaultValues();
	if(nID > 0){
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT * FROM sys_config WHERE sc_id=%ld "), nID);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("sc_id"), m_nID);
			rs.GetValue(_T("sc_modid"), m_szModuleIDKey);
			rs.GetValue(_T("sc_name"), m_szName);
			rs.GetValue(_T("sc_desc"), m_szDesc);
			rs.GetValue(_T("sc_val"), m_szValue);
			rs.GetValue(_T("sc_type"), m_szValueTypeKey);
			SetMode(VM_VIEW);
		}
	}
	else
		SetMode(VM_NONE);
	UpdateData(false);

}
void CSysConfigSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(GetMode() == VM_ADD){
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("select coalesce(max(sc_id), 0)+1 FROM sys_config "));
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
	}
	m_sys_configTbl.SetValue(_T("sc_id"), m_nID);
	m_sys_configTbl.SetValue(_T("sc_modid"), m_szModuleIDKey);
	m_sys_configTbl.SetValue(_T("sc_name"), m_szName);
	m_sys_configTbl.SetValue(_T("sc_desc"), m_szDesc);
	m_sys_configTbl.SetValue(_T("sc_val"), m_szValue);
	m_sys_configTbl.SetValue(_T("sc_type"), m_szValueTypeKey);

}
void CSysConfigSetup::SetDefaultValues(){

	m_szModuleIDKey.Empty();
	m_nID=0;
	m_szName.Empty();
	m_szValueTypeKey.Empty();
	m_szDesc.Empty();
	m_szValue.Empty();

}
int CSysConfigSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_wndModuleID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndModuleID.SetFocus();
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
int CSysConfigSetup::OnConfigListDblClick(){
	 return 0;
} 
int CSysConfigSetup::OnConfigListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel = m_wndConfigList.GetCurSel();
	if(nSel < 0)
		return -1;
	m_nID = ToLong(m_wndConfigList.GetItemText(nSel, 1));
	GetDataToScreen();
	 return 0;
} 
int CSysConfigSetup::OnConfigListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysConfigSetup::OnConfigListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndConfigList.BeginLoad(); 
	m_wndConfigList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_config ORDER BY sc_modid, sc_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndConfigList.AddItems(
			rs.GetValue(_T("sc_modid")), 
			rs.GetValue(_T("sc_id")), 
			rs.GetValue(_T("sc_name")), 
			rs.GetValue(_T("sc_val")), 
			rs.GetValue(_T("sc_desc")), NULL);
		rs.MoveNext();
	}
	m_wndConfigList.EndLoad(); 
	return nCount;

}
int CSysConfigSetup::OnModuleIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysConfigSetup::OnModuleIDSelendok(){
	 return 0;
}
/*int CSysConfigSetup::OnModuleIDSetfocus(){
	 return 0;
}*/
/*int CSysConfigSetup::OnModuleIDKillfocus(){
	 return 0;
}*/
int CSysConfigSetup::OnModuleIDLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModuleID.IsSearchKey()){
		szWhere.Format(_T("AND ss_code='%s' "), m_szModuleIDKey);
	};

	m_wndModuleID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_module_type' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndModuleID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*int CSysConfigSetup::OnModuleIDAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
/*int CSysConfigSetup::OnIDChange(){
	return 0;
} */
/*int CSysConfigSetup::OnIDSetfocus(){
	return 0;
} */
/*int CSysConfigSetup::OnIDKillfocus(){
	return 0;
} */
int CSysConfigSetup::OnIDCheckValue(){
	return 0;
} 
/*int CSysConfigSetup::OnNameChange(){
	return 0;
} */
/*int CSysConfigSetup::OnNameSetfocus(){
	return 0;
} */
/*int CSysConfigSetup::OnNameKillfocus(){
	return 0;
} */
int CSysConfigSetup::OnNameCheckValue(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_szModuleIDKey = m_wndModuleID.GetCurrent(0);
	szSQL.Format(_T("SELECT count(*) FROM sys_config WHERE sc_modid='%s' and lower(sc_name)=lower('%s') "), m_szModuleIDKey, m_szName);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		m_wndName.SetToolTipMessage(_T("Duplicate Name"));
		return -1;
	}
	return 0;
} 
int CSysConfigSetup::OnValueTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysConfigSetup::OnValueTypeSelendok(){
	m_szValueTypeKey = m_wndValueType.GetCurrent(0);
	int nType = ToLong(m_szValueTypeKey);
	switch(nType){
	case 0:
		m_wndValue.SetMask(_T("##########"));
		break;
	case 1:
		m_wndValue.SetMask(_T(""));
		break;
	case 2:
		m_wndValue.SetMask(_T("##/##/####"));
		break;
	case 3:
		m_wndValue.SetMask(_T("##:##"));
		break;
	case 4:
		m_wndValue.SetMask(_T("A"));
		break;
	};
	return 0;
}
/*int CSysConfigSetup::OnValueTypeSetfocus(){
	 return 0;
}*/
/*int CSysConfigSetup::OnValueTypeKillfocus(){
	 return 0;
}*/
int CSysConfigSetup::OnValueTypeLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndValueType.IsSearchKey()){
		szWhere.Format(_T("AND ss_code='%s' "), m_szValueTypeKey);
	};
	m_wndValueType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_data_type' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndValueType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*int CSysConfigSetup::OnValueTypeAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
/*int CSysConfigSetup::OnDescChange(){
	return 0;
} */
/*int CSysConfigSetup::OnDescSetfocus(){
	return 0;
} */
/*int CSysConfigSetup::OnDescKillfocus(){
	return 0;
} */
int CSysConfigSetup::OnDescCheckValue(){
	return 0;
} 
/*int CSysConfigSetup::OnValueChange(){
	return 0;
} */
/*int CSysConfigSetup::OnValueSetfocus(){
	return 0;
} */
/*int CSysConfigSetup::OnValueKillfocus(){
	return 0;
} */
int CSysConfigSetup::OnValueCheckValue(){
	return 0;
} 
int CSysConfigSetup::OnAddSelect(){
	OnAddVIMESConfig();
	 return 0;
} 
int CSysConfigSetup::OnEditSelect(){
	OnEditVIMESConfig();
	 return 0;
} 
int CSysConfigSetup::OnDeleteSelect(){
	OnDeleteVIMESConfig();
	return 0;
} 
int CSysConfigSetup::OnSaveSelect(){
	OnSaveVIMESConfig();
	return 0;
} 
int CSysConfigSetup::OnCancelSelect(){
	OnCancelVIMESConfig();
	return 0;
} 
int CSysConfigSetup::OnAddVIMESConfig(){ 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD); 
	return 0;  
} 
int CSysConfigSetup::OnEditVIMESConfig(){ 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT); 
	return 0; 
} 
int CSysConfigSetup::OnDeleteVIMESConfig(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM  sys_config WHERE sc_id=%ld "), m_nID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelVIMESConfig(); 
		m_wndConfigList.DeleteItem(m_wndConfigList.GetCurSel());
 	}
	return 0;
 } 
int CSysConfigSetup::OnSaveVIMESConfig(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_sys_configTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE sc_id=%ld "), m_nID ); 
 		szSQL = m_sys_configTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnVIMESConfigLoadData(); 
 		SetMode(VM_VIEW); 
		m_wndAdd.SetFocus();

 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CSysConfigSetup::OnCancelVIMESConfig(){
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
int CSysConfigSetup::OnVIMESConfigLoadData(){
	OnConfigListLoadData();
	return 0;
}
