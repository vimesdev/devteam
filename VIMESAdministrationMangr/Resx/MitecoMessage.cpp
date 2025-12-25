#include "VIMESMessage.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnSearchModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CVIMESMessage* )pWnd)->OnSearchModuleSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnSearchModuleSetfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnSearchModuleKillfocus();
}
static int _OnSearchModuleKillfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnSearchModuleKillfocus();
}
static int _OnSearchModuleLoadDataFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnSearchModuleLoadData();
}
static int _OnSearchModuleAddNewFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnSearchModuleAddNew();
}
static int _OnFindNameChangeFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnFindNameChange();
} 
static int _OnFindNameSetfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnFindNameKillfocus();
} 
static int _OnFindNameKillfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnFindNameKillfocus();
} 
static int _OnFindNameCheckValueFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnFindNameCheckValue();
} 
static int _OnMsgListLoadDataFnc(CWnd *pWnd){
	 return ((CVIMESMessage*)pWnd)->OnMsgListLoadData();
} 
static int _OnMsgListDblClickFnc(CWnd *pWnd){
	 return ((CVIMESMessage*)pWnd)->OnMsgListDblClick();
} 
static int _OnMsgListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CVIMESMessage*)pWnd)->OnMsgListSelectChange(nOldItem, nNewItem);
} 
static int _OnMsgListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESMessage*)pWnd)->OnMsgListDeleteItem();
} 
static int _OnIDChangeFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnIDChange();
} 
static int _OnIDSetfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnIDKillfocus();
} 
static int _OnIDKillfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnIDKillfocus();
} 
static int _OnIDCheckValueFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnIDCheckValue();
} 
static int _OnModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CVIMESMessage* )pWnd)->OnModuleSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnModuleSetfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnModuleKillfocus();
}
static int _OnModuleKillfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnModuleKillfocus();
}
static int _OnModuleLoadDataFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnModuleLoadData();
}
static int _OnModuleAddNewFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnModuleAddNew();
}
static int _OnEnglishMessageChangeFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnEnglishMessageChange();
} 
static int _OnEnglishMessageSetfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnEnglishMessageKillfocus();
} 
static int _OnEnglishMessageKillfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnEnglishMessageKillfocus();
} 
static int _OnEnglishMessageCheckValueFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnEnglishMessageCheckValue();
} 
static int _OnOtherMessageChangeFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnOtherMessageChange();
} 
static int _OnOtherMessageSetfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnOtherMessageKillfocus();
} 
static int _OnOtherMessageKillfocusFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnOtherMessageKillfocus();
} 
static int _OnOtherMessageCheckValueFnc(CWnd *pWnd){
	 return ((CVIMESMessage *)pWnd)->OnOtherMessageCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CVIMESMessage *pVw = (CVIMESMessage *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CVIMESMessage *pVw = (CVIMESMessage *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESMessage *pVw = (CVIMESMessage *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESMessage *pVw = (CVIMESMessage *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESMessage *pVw = (CVIMESMessage *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddVIMESMessageFnc(CWnd *pWnd){
	 return ((CVIMESMessage*)pWnd)->OnAddVIMESMessage();
} 
static int _OnEditVIMESMessageFnc(CWnd *pWnd){
	 return ((CVIMESMessage*)pWnd)->OnEditVIMESMessage();
} 
static int _OnDeleteVIMESMessageFnc(CWnd *pWnd){
	 return ((CVIMESMessage*)pWnd)->OnDeleteVIMESMessage();
} 
static int _OnSaveVIMESMessageFnc(CWnd *pWnd){
	 return ((CVIMESMessage*)pWnd)->OnSaveVIMESMessage();
} 
static int _OnCancelVIMESMessageFnc(CWnd *pWnd){
	 return ((CVIMESMessage*)pWnd)->OnCancelVIMESMessage();
} 
CVIMESMessage::CVIMESMessage(){

	m_nDlgWidth = 607;
	m_nDlgHeight = 407;
	SetDefaultValues();
}
CVIMESMessage::~CVIMESMessage(){
}
void CVIMESMessage::OnCreateComponents(){
	m_wndMessageList.Create(this, _T("Message List"), 5, 5, 601, 370);
	m_wndSearchModuleLabel.Create(this, _T("Search For Module"), 10, 29, 106, 51);
	m_wndSearchModule.Create(this,111, 29, 302, 51); 
	m_wndFindNameLabel.Create(this, _T("Find Name"), 307, 29, 381, 51);
	m_wndFindName.Create(this,386, 29, 596, 51); 
	m_wndMsgList.Create(this,10, 56, 597, 311); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 316, 91, 338);
	m_wndID.Create(this,96, 316, 171, 338); 
	m_wndModuleLabel.Create(this, _T("Module"), 307, 316, 381, 338);
	m_wndModule.Create(this,386, 316, 500, 338); 
	m_wndEnglishMessageLabel.Create(this, _T("English Message"), 10, 343, 91, 365);
	m_wndEnglishMessage.Create(this,96, 343, 302, 365); 
	m_wndOtherMessageLabel.Create(this, _T("Other Message"), 307, 343, 381, 365);
	m_wndOtherMessage.Create(this,386, 343, 597, 365); 
	m_wndAdd.Create(this, _T("&Add"), 256, 375, 320, 397);
	m_wndEdit.Create(this, _T("&Edit"), 325, 375, 389, 397);
	m_wndDelete.Create(this, _T("&Delete"), 394, 375, 458, 397);
	m_wndSave.Create(this, _T("&Save"), 463, 375, 527, 397);
	m_wndCancel.Create(this, _T("&Cancel"), 532, 375, 596, 397);

}
void CVIMESMessage::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearchModule.SetDataRequirement(TRUE);
	m_wndSearchModule.LimitText(1024);
	m_wndFindName.SetLimitText(1024);
	m_wndFindName.SetDataRequirement(TRUE);
	m_wndID.SetDataRequirement(TRUE);
	m_wndModule.SetDataRequirement(TRUE);
	m_wndEnglishMessage.SetLimitText(252);
	m_wndEnglishMessage.SetDataRequirement(TRUE);
	m_wndOtherMessage.SetLimitText(252);
	m_wndOtherMessage.SetDataRequirement(TRUE);




	m_wndMsgList.InsertColumn(0, _T("Module"), CFMT_TEXT, 100);
	m_wndMsgList.InsertColumn(1, _T("ID"), CFMT_NUMBER, 30);
	m_wndMsgList.InsertColumn(2, _T("English Message"), CFMT_TEXT, 210);
	m_wndMsgList.InsertColumn(3, _T("Other Message"), CFMT_TEXT, 210);


	m_wndModule.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_vimes_msgTbl.SetTableName(_T("vimes_msg"));
	m_vimes_msgTbl.AddField(_T("vmm_id"), dfInteger); 
	m_vimes_msgTbl.AddField(_T("vmm_moduleid"), dfInteger); 
	m_vimes_msgTbl.AddField(_T("vmm_enmsg"), dfText, 252); 
	m_vimes_msgTbl.AddField(_T("vmm_othmsg"), dfText, 252); 

}
void CVIMESMessage::OnSetWindowEvents(){
	m_wndSearchModule.SetEvent(WE_CHANGE, _OnSearchModuleSelectChangeFnc);
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
	m_wndModule.SetEvent(WE_CHANGE, _OnModuleSelectChangeFnc);
	//m_wndModule.SetEvent(WE_SETFOCUS, _OnModuleSetfocusFnc);
	//m_wndModule.SetEvent(WE_KILLFOCUS, _OnModuleKillfocusFnc);
	m_wndModule.SetEvent(WE_SELCHANGE, _OnModuleSelectChangeFnc);
	m_wndModule.SetEvent(WE_LOADDATA, _OnModuleLoadDataFnc);
	m_wndModule.SetEvent(WE_ADDNEW, _OnModuleAddNewFnc);
	m_wndEnglishMessage.SetEvent(WE_CHANGE, _OnEnglishMessageChangeFnc);
	//m_wndEnglishMessage.SetEvent(WE_SETFOCUS, _OnEnglishMessageSetfocusFnc);
	//m_wndEnglishMessage.SetEvent(WE_KILLFOCUS, _OnEnglishMessageKillfocusFnc);
	m_wndEnglishMessage.SetEvent(WE_CHECKVALUE, _OnEnglishMessageCheckValueFnc);
	m_wndOtherMessage.SetEvent(WE_CHANGE, _OnOtherMessageChangeFnc);
	//m_wndOtherMessage.SetEvent(WE_SETFOCUS, _OnOtherMessageSetfocusFnc);
	//m_wndOtherMessage.SetEvent(WE_KILLFOCUS, _OnOtherMessageKillfocusFnc);
	m_wndOtherMessage.SetEvent(WE_CHECKVALUE, _OnOtherMessageCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESMessageFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESMessageFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESMessageFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESMessageFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESMessageFnc, 0, 'T', VK_CONTROL);

}
void CVIMESMessage::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSearchModule.GetDlgCtrlID(), m_szSearchModuleKey);
	DDX_Text(pDX, m_wndFindName.GetDlgCtrlID(), m_szFindName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_TextEx(pDX, m_wndModule.GetDlgCtrlID(), m_szModuleKey);
	DDX_Text(pDX, m_wndEnglishMessage.GetDlgCtrlID(), m_szEnglishMessage);
	DDX_Text(pDX, m_wndOtherMessage.GetDlgCtrlID(), m_szOtherMessage);

}
void CVIMESMessage::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESMessage::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_vimes_msgTbl.SetValue(_T("vmm_id"), m_nID);
	m_vimes_msgTbl.SetValue(_T("vmm_moduleid"), m_szModuleKey);
	m_vimes_msgTbl.SetValue(_T("vmm_enmsg"), m_szEnglishMessage);
	m_vimes_msgTbl.SetValue(_T("vmm_othmsg"), m_szOtherMessage);

}
void CVIMESMessage::SetDefaultValues(){

	m_szSearchModuleKey.Empty();
	m_szFindName.Empty();
	m_nID=0;
	m_szModuleKey.Empty();
	m_szEnglishMessage.Empty();
	m_szOtherMessage.Empty();

}
int CVIMESMessage::OnSearchModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESMessage::OnSearchModuleSetfocus(){
	 return 0;
}
int CVIMESMessage::OnSearchModuleKillfocus(){
	 return 0;
}
int CVIMESMessage::OnSearchModuleLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSearchModule.IsSearchKey()){
	};
	m_wndSearchModule.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSearchModule.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
int CVIMESMessage::OnSearchModuleAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESMessage::OnFindNameChange(){
	return 0;
} 
int CVIMESMessage::OnFindNameSetfocus(){
	return 0;
} 
int CVIMESMessage::OnFindNameKillfocus(){
	return 0;
} 
int CVIMESMessage::OnFindNameCheckValue(){
	return 0;
} 
int CVIMESMessage::OnMsgListDblClick(){
	 return 0;
} 
int CVIMESMessage::OnMsgListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESMessage::OnMsgListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESMessage::OnMsgListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMsgList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMsgList.AddItems(
			rs.GetValue(_T("Module")), 
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("EnglishMessage")), 
			rs.GetValue(_T("OtherMessage")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
int CVIMESMessage::OnIDChange(){
	return 0;
} 
int CVIMESMessage::OnIDSetfocus(){
	return 0;
} 
int CVIMESMessage::OnIDKillfocus(){
	return 0;
} 
int CVIMESMessage::OnIDCheckValue(){
	return 0;
} 
int CVIMESMessage::OnModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESMessage::OnModuleSetfocus(){
	 return 0;
}
int CVIMESMessage::OnModuleKillfocus(){
	 return 0;
}
int CVIMESMessage::OnModuleLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModule.IsSearchKey()){
	};
	m_wndModule.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndModule.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
int CVIMESMessage::OnModuleAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESMessage::OnEnglishMessageChange(){
	return 0;
} 
int CVIMESMessage::OnEnglishMessageSetfocus(){
	return 0;
} 
int CVIMESMessage::OnEnglishMessageKillfocus(){
	return 0;
} 
int CVIMESMessage::OnEnglishMessageCheckValue(){
	return 0;
} 
int CVIMESMessage::OnOtherMessageChange(){
	return 0;
} 
int CVIMESMessage::OnOtherMessageSetfocus(){
	return 0;
} 
int CVIMESMessage::OnOtherMessageKillfocus(){
	return 0;
} 
int CVIMESMessage::OnOtherMessageCheckValue(){
	return 0;
} 
int CVIMESMessage::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESMessage::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESMessage::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESMessage::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESMessage::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESMessage::OnAddVIMESMessage(){
	EnableControls(TRUE);
	SetMode(VM_ADD);
	return 0;
} 
int CVIMESMessage::OnEditVIMESMessage(){
	EnableControls(TRUE);
	SetMode(VM_EDIT);
	return 0;
} 
int CVIMESMessage::OnDeleteVIMESMessage(){
	SetMode(VM_NONE);
	return 0;
} 
int CVIMESMessage::OnSaveVIMESMessage(){
	EnableControls(FALSE);
	SetMode(VM_VIEW);
	return 0;
} 
int CVIMESMessage::OnCancelVIMESMessage(){
	EnableControls(FALSE);
	SetMode(VM_NONE);
	return 0;
} 
