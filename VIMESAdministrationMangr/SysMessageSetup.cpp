#include "SysMessageSetup.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnSearchModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysMessageSetup* )pWnd)->OnSearchModuleSelectChange(nOldItemSel, nNewItemSel);
}

static int _OnSearchModuleSelendokFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnSearchModuleSelendok();
}

static int _OnSearchModuleSetfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnSearchModuleKillfocus();
}
static int _OnSearchModuleKillfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnSearchModuleKillfocus();
}
static int _OnSearchModuleLoadDataFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnSearchModuleLoadData();
}
static int _OnSearchModuleAddNewFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnSearchModuleAddNew();
}
static int _OnFindNameChangeFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnFindNameChange();
} 
static int _OnFindNameSetfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnFindNameKillfocus();
} 
static int _OnFindNameKillfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnFindNameKillfocus();
} 
static int _OnFindNameCheckValueFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnFindNameCheckValue();
} 
static int _OnMsgListLoadDataFnc(CWnd *pWnd){
	 return ((CSysMessageSetup*)pWnd)->OnMsgListLoadData();
} 
static int _OnMsgListDblClickFnc(CWnd *pWnd){
	 return ((CSysMessageSetup*)pWnd)->OnMsgListDblClick();
} 
static int _OnMsgListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CSysMessageSetup*)pWnd)->OnMsgListSelectChange(nOldItem, nNewItem);
} 
static int _OnMsgListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysMessageSetup*)pWnd)->OnMsgListDeleteItem();
} 
static int _OnIDChangeFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnIDChange();
} 
static int _OnIDSetfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnIDKillfocus();
} 
static int _OnIDKillfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnIDKillfocus();
} 
static int _OnIDCheckValueFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnIDCheckValue();
} 
static int _OnModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CSysMessageSetup* )pWnd)->OnModuleSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnModuleSetfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnModuleKillfocus();
}
static int _OnModuleKillfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnModuleKillfocus();
}
static int _OnModuleLoadDataFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnModuleLoadData();
}
static int _OnModuleAddNewFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnModuleAddNew();
}
static int _OnEnglishMessageChangeFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnEnglishMessageChange();
} 
static int _OnEnglishMessageSetfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnEnglishMessageKillfocus();
} 
static int _OnEnglishMessageKillfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnEnglishMessageKillfocus();
} 
static int _OnEnglishMessageCheckValueFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnEnglishMessageCheckValue();
} 
static int _OnVnMessageChangeFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnVnMessageChange();
} 
static int _OnVnMessageSetfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnVnMessageKillfocus();
} 
static int _OnVnMessageKillfocusFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnVnMessageKillfocus();
} 
static int _OnVnMessageCheckValueFnc(CWnd *pWnd){
	 return ((CSysMessageSetup *)pWnd)->OnVnMessageCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CSysMessageSetup *pVw = (CSysMessageSetup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CSysMessageSetup *pVw = (CSysMessageSetup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CSysMessageSetup *pVw = (CSysMessageSetup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CSysMessageSetup *pVw = (CSysMessageSetup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CSysMessageSetup *pVw = (CSysMessageSetup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddVIMESMessageSetupFnc(CWnd *pWnd){
	 return ((CSysMessageSetup*)pWnd)->OnAddVIMESMessageSetup();
} 
static int _OnEditVIMESMessageSetupFnc(CWnd *pWnd){
	 return ((CSysMessageSetup*)pWnd)->OnEditVIMESMessageSetup();
} 
static int _OnDeleteVIMESMessageSetupFnc(CWnd *pWnd){
	 return ((CSysMessageSetup*)pWnd)->OnDeleteVIMESMessageSetup();
} 
static int _OnSaveVIMESMessageSetupFnc(CWnd *pWnd){
	 return ((CSysMessageSetup*)pWnd)->OnSaveVIMESMessageSetup();
} 
static int _OnCancelVIMESMessageSetupFnc(CWnd *pWnd){
	 return ((CSysMessageSetup*)pWnd)->OnCancelVIMESMessageSetup();
} 
CSysMessageSetup::CSysMessageSetup(){

	m_nDlgWidth = 815;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CSysMessageSetup::~CSysMessageSetup(){
}
void CSysMessageSetup::OnCreateComponents(){
	m_wndSearchModuleLabel.Create(this, _T("Search For Module"), 10, 30, 105, 55);
	m_wndSearchModule.Create(this,110, 30, 405, 55); 
	m_wndFindNameLabel.Create(this, _T("Find Name"), 410, 30, 510, 55);
	m_wndMessageList.Create(this, _T("Message List"), 5, 5, 805, 590);
	m_wndFindName.Create(this,515, 30, 800, 55); 
	m_wndMsgList.Create(this,10, 60, 800, 495); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 500, 105, 525);
	m_wndID.Create(this,110, 500, 335, 525); 
	m_wndModuleLabel.Create(this, _T("Module"), 340, 500, 415, 525);
	m_wndModule.Create(this,420, 500, 800, 525); 
	m_wndEnglishMessageLabel.Create(this, _T("English Message"), 10, 530, 105, 555);
	m_wndEnglishMessage.Create(this,110, 530, 800, 555); 
	m_wndVnMessageLabel.Create(this, _T("Other Message"), 10, 560, 105, 585);
	m_wndVnMessage.Create(this,110, 560, 800, 585); 
	m_wndAdd.Create(this, _T("&Add"), 410, 595, 485, 620);
	m_wndEdit.Create(this, _T("&Edit"), 490, 595, 565, 620);
	m_wndDelete.Create(this, _T("&Delete"), 570, 595, 645, 620);
	m_wndSave.Create(this, _T("&Save"), 650, 595, 725, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 595, 805, 620);

}
void CSysMessageSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	EnableControls(FALSE);
	EnableButtons(TRUE, 0, -1);
//	m_wndSearchModule.SetCheckValue(TRUE);
//	m_wndSearchModule.LimitText(1024);
//	m_wndFindName.SetLimitText(1024);
//	m_wndFindName.SetCheckValue(TRUE);
	m_wndID.SetReadOnly(TRUE);
//	m_wndID.SetCheckValue(TRUE);
	//m_wndModule.SetCheckValue(TRUE);
	m_wndEnglishMessage.SetLimitText(252);
	m_wndEnglishMessage.SetCheckValue(TRUE);
	m_wndVnMessage.SetLimitText(252);
	m_wndVnMessage.SetCheckValue(TRUE);


	m_wndMsgList.InsertColumn(0, _T("Module"), CFMT_TEXT, 60);
	m_wndMsgList.InsertColumn(1, _T("ID"), CFMT_NUMBER, 40);
	m_wndMsgList.InsertColumn(2, _T("English"), CFMT_TEXT, 320);
	m_wndMsgList.InsertColumn(3, _T("Vietnamese"), CFMT_TEXT, 320);


	m_wndModule.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndSearchModule.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSearchModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_sys_msgTbl.SetTableName(_T("sys_msg"));
	m_sys_msgTbl.AddField(_T("sm_id"), dfInteger); 
	m_sys_msgTbl.AddField(_T("sm_moduleid"), dfText, 7); 
	m_sys_msgTbl.AddField(_T("sm_enmsg"), dfText, 252); 
	m_sys_msgTbl.AddField(_T("sm_vnmsg"), dfText, 252); 

	//OnMsgListLoadData();

}
void CSysMessageSetup::OnSetWindowEvents(){
	m_wndSearchModule.SetEvent(WE_SELENDOK, _OnSearchModuleSelendokFnc);
	//m_wndSearchModule.SetEvent(WE_SETFOCUS, _OnSearchModuleSetfocusFnc);
	//m_wndSearchModule.SetEvent(WE_KILLFOCUS, _OnSearchModuleKillfocusFnc);
	m_wndSearchModule.SetEvent(WE_SELCHANGE, _OnSearchModuleSelectChangeFnc);
	m_wndSearchModule.SetEvent(WE_LOADDATA, _OnSearchModuleLoadDataFnc);
	m_wndSearchModule.SetEvent(WE_ADDNEW, _OnSearchModuleAddNewFnc);
	m_wndFindName.SetEvent(WE_CHANGE, _OnFindNameChangeFnc);
	//m_wndFindName.SetEvent(WE_SETFOCUS, _OnFindNameSetfocusFnc);
	//m_wndFindName.SetEvent(WE_KILLFOCUS, _OnFindNameKillfocusFnc);
	m_wndFindName.SetEvent(WE_CHECKVALUE, _OnFindNameCheckValueFnc);
	m_wndMsgList.SetEvent(WE_SELCHANGE, _OnMsgListSelectChangeFnc);
	m_wndMsgList.SetEvent(WE_LOADDATA, _OnMsgListLoadDataFnc);
	m_wndMsgList.SetEvent(WE_DBLCLICK, _OnMsgListDblClickFnc);
	m_wndMsgList.AddEvent(1, _T("Delete"), _OnMsgListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndModule.SetEvent(WE_CHANGE, _OnModuleSelectChangeFnc);
	//m_wndModule.SetEvent(WE_SETFOCUS, _OnModuleSetfocusFnc);
	//m_wndModule.SetEvent(WE_KILLFOCUS, _OnModuleKillfocusFnc);
	m_wndModule.SetEvent(WE_SELCHANGE, _OnModuleSelectChangeFnc);
	m_wndModule.SetEvent(WE_LOADDATA, _OnModuleLoadDataFnc);
	m_wndModule.SetEvent(WE_ADDNEW, _OnModuleAddNewFnc);
	m_wndEnglishMessage.SetEvent(WE_CHANGE, _OnEnglishMessageChangeFnc);
	//m_wndEnglishMessage.SetEvent(WE_SETFOCUS, _OnEnglishMessageSetfocusFnc);
	//m_wndEnglishMessage.SetEvent(WE_KILLFOCUS, _OnEnglishMessageKillfocusFnc);
	m_wndEnglishMessage.SetEvent(WE_CHECKVALUE, _OnEnglishMessageCheckValueFnc);
	m_wndVnMessage.SetEvent(WE_CHANGE, _OnVnMessageChangeFnc);
	//m_wndVnMessage.SetEvent(WE_SETFOCUS, _OnVnMessageSetfocusFnc);
	//m_wndVnMessage.SetEvent(WE_KILLFOCUS, _OnVnMessageKillfocusFnc);
	m_wndVnMessage.SetEvent(WE_CHECKVALUE, _OnVnMessageCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESMessageSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESMessageSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESMessageSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESMessageSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESMessageSetupFnc, 0, 'T', VK_CONTROL);

}
void CSysMessageSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSearchModule.GetDlgCtrlID(), m_szSearchModuleKey);
	DDX_Text(pDX, m_wndFindName.GetDlgCtrlID(), m_szFindName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_TextEx(pDX, m_wndModule.GetDlgCtrlID(), m_szModuleKey);
	DDX_Text(pDX, m_wndEnglishMessage.GetDlgCtrlID(), m_szEnglishMessage);
	DDX_Text(pDX, m_wndVnMessage.GetDlgCtrlID(), m_szVnMessage);

}
void CSysMessageSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_msg WHERE sm_moduleid='%s' AND sm_id=%ld"), m_szModuleKey, m_nID);
	int ret = rs.ExecSQL(szSQL);
	if(ret > 0){
		m_szEnglishMessage = rs.GetValue(_T("sm_enmsg"));
		m_szVnMessage = rs.GetValue(_T("sm_vnmsg"));
		EnableButtons(TRUE, 0, 1, 2, -1);
		SetMode(VM_VIEW);
	}
	else
	{
		SetDefaultValues();
		EnableButtons(TRUE, 0, -1);
		SetMode(VM_NONE);
	}
	EnableControls(FALSE);
	UpdateData(FALSE);
	

}
void CSysMessageSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(GetMode() == VM_ADD)
	{
		szSQL.Format(_T("select coalesce(max(sm_id), 0)+1 FROM sys_msg "));
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
	}
	m_sys_msgTbl.SetValue(_T("sm_id"), m_nID);
	m_sys_msgTbl.SetValue(_T("sm_moduleid"), m_szModuleKey);
	m_sys_msgTbl.SetValue(_T("sm_enmsg"), m_szEnglishMessage);
	m_sys_msgTbl.SetValue(_T("sm_vnmsg"), m_szVnMessage);

}
void CSysMessageSetup::SetDefaultValues(){

	m_szSearchModuleKey.Empty();
	m_szFindName.Empty();
	m_nID=0;
	m_szModuleKey.Empty();
	m_szEnglishMessage.Empty();
	m_szVnMessage.Empty();

}
int CSysMessageSetup::OnSearchModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
}

int CSysMessageSetup::OnSearchModuleSelendok(){
	m_szSearchModuleKey = m_wndSearchModule.GetCurrent(0);
	OnMsgListLoadData();
	 return 0;
}

int CSysMessageSetup::OnSearchModuleSetfocus(){
	 return 0;
}

int CSysMessageSetup::OnSearchModuleKillfocus(){
	 return 0;
}
int CSysMessageSetup::OnSearchModuleLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModule.IsSearchKey()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szModuleKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_module_type' %s ORDER BY ss_code "), szWhere);

	m_wndSearchModule.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSearchModule.AddItems(
			rs.GetValue(_T("id")), rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
int CSysMessageSetup::OnSearchModuleAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysMessageSetup::OnFindNameChange(){
	OnMsgListLoadData();
	return 0;
} 
int CSysMessageSetup::OnFindNameSetfocus(){
	return 0;
} 
int CSysMessageSetup::OnFindNameKillfocus(){
	return 0;
} 
int CSysMessageSetup::OnFindNameCheckValue(){
	OnMsgListLoadData();
	return 1;
} 
int CSysMessageSetup::OnMsgListDblClick(){
	 return 0;
} 
int CSysMessageSetup::OnMsgListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_nID = ToLong(m_wndMsgList.GetItemText(nNewItem, 1));
	m_szModuleKey = m_wndMsgList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	 return 0;
} 
int CSysMessageSetup::OnMsgListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysMessageSetup::OnMsgListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	if(!m_szSearchModuleKey.IsEmpty())
		szWhere.Format(_T(" AND sm_moduleid='%s'"), m_szSearchModuleKey);

	if(!m_szFindName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(sm_vnmsg) like(chr(37)||lower('%s')||chr(37)) "), m_szFindName);
		
	}

	szSQL.Format(_T("SELECT sm_moduleid, sm_id, sm_enmsg, sm_vnmsg FROM sys_msg WHERE 1=1 %s ORDER BY sm_moduleid, sm_id"), szWhere);
//_fmsg(_T("%s"), szSQL);
	m_wndMsgList.BeginLoad();

	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMsgList.AddItems(
			rs.GetValue(_T("sm_moduleid")),
			rs.GetValue(_T("sm_id")),
			rs.GetValue(_T("sm_enmsg")),
			rs.GetValue(_T("sm_vnmsg")),
			NULL);
		rs.MoveNext();
	}

	m_wndMsgList.EndLoad();
	return nCount;

}
int CSysMessageSetup::OnIDChange(){
	return 0;
} 
int CSysMessageSetup::OnIDSetfocus(){
	return 0;
} 
int CSysMessageSetup::OnIDKillfocus(){
	return 0;
} 
int CSysMessageSetup::OnIDCheckValue(){
	return 0;
} 
int CSysMessageSetup::OnModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	 return 0;
} 
int CSysMessageSetup::OnModuleSetfocus(){
	 return 0;
}
int CSysMessageSetup::OnModuleKillfocus(){
	 return 0;
}
int CSysMessageSetup::OnModuleLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModule.IsSearchKey() && !m_szModuleKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szModuleKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_module_type' %s ORDER BY ss_code "), szWhere);

	m_wndModule.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndModule.AddItems(
			rs.GetValue(_T("id")), rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
int CSysMessageSetup::OnModuleAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CSysMessageSetup::OnEnglishMessageChange(){
	return 0;
} 
int CSysMessageSetup::OnEnglishMessageSetfocus(){
	return 0;
} 
int CSysMessageSetup::OnEnglishMessageKillfocus(){
	return 0;
} 
int CSysMessageSetup::OnEnglishMessageCheckValue(){
	return 0;
} 
int CSysMessageSetup::OnVnMessageChange(){
	return 0;
} 
int CSysMessageSetup::OnVnMessageSetfocus(){
	return 0;
} 
int CSysMessageSetup::OnVnMessageKillfocus(){
	return 0;
} 
int CSysMessageSetup::OnVnMessageCheckValue(){
	return 0;
} 
int CSysMessageSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddVIMESMessageSetup();
	 return 0;
} 
int CSysMessageSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditVIMESMessageSetup();
	 return 0;
} 
int CSysMessageSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteVIMESMessageSetup();
	 return 0;
} 
int CSysMessageSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveVIMESMessageSetup();
	 return 0;
} 
int CSysMessageSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelVIMESMessageSetup();
	 return 0;
} 
int CSysMessageSetup::OnAddVIMESMessageSetup(){
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;

	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	SetDefaultValues();
	EnableControls(TRUE);
	EnableButtons(FALSE, 0, 1, 2, -1);
	m_wndID.EnableWindow(FALSE);
	m_wndModule.SetFocus();
	UpdateData(FALSE);
	SetMode(VM_ADD);
	return 0;
} 
int CSysMessageSetup::OnEditVIMESMessageSetup(){
	
	if(GetMode() != VM_VIEW)
		return -1;

	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();

//	if(GetCurrentStatus() != _T("O"))
//		return -1;

	EnableControls(TRUE);
	
	EnableButtons(FALSE, 0, 1, 2, -1);
	m_wndModule.SetFocus();
	SetMode(VM_EDIT);
	return 0;
} 
int CSysMessageSetup::OnDeleteVIMESMessageSetup(){
	if(GetMode() != VM_VIEW)
		return -1;
//	if(GetCurrentStatus() != _T("O"))
//		return -1;

	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL;
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
		return -1;

	szSQL.Format(_T("DELETE FROM sys_msg WHERE sm_moduleid='%s' AND sm_id=%ld"), m_szModuleKey, m_nID);
	int ret = pMF->ExecSQL(szSQL);
	if(ret >= 0){
		SetMode(VM_NONE);
		OnCancelVIMESMessageSetup();
		OnMsgListLoadData();
	}
	return 0;
} 
int CSysMessageSetup::OnSaveVIMESMessageSetup(){
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if(!IsValidateData())
		return -1;

	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	

	CString szSQL;
	if(GetMode() == VM_ADD){
		szSQL = m_sys_msgTbl.GetInsertSQL();
	}
	else if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE sm_moduleid='%s' AND sm_id=%ld "), m_szModuleKey, m_nID);
		szSQL = m_sys_msgTbl.GetUpdateSQL();
		szSQL += szWhere;
	}
//_fmsg(_T("%s"), szSQL);

	int ret = pMF->ExecSQL(szSQL);

	if(ret > 0)
	{
		EnableControls(FALSE);
		OnMsgListLoadData();
		EnableButtons(FALSE, 3, 4, -1);
		SetMode(VM_VIEW);
		m_wndAdd.SetFocus();
		
	}
	else
	{
		
	}
	return ret;
} 
int CSysMessageSetup::OnCancelVIMESMessageSetup(){
	EnableControls(FALSE);
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



void CSysMessageSetup::EnableControls(BOOL bFlag)
{
	CGuiView::EnableControls(bFlag);
	m_wndSearchModule.EnableWindow(true);
	m_wndFindName.EnableWindow(true);
}


void CSysMessageSetup::Refresh(){
	static bool bLoaded = false;
	if(!bLoaded){
		OnMsgListLoadData();
		bLoaded = true;
	}
}
int CSysMessageSetup::SetMode(int nMode){
	int nOldMode = GetMode(); 
 	CGuiView::SetMode(nMode); 
	switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
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
 			EnableButtons(TRUE, 0, -1); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}