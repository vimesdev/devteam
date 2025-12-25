#include "VIMESMessage.h"
#include "MainFrm.h"
static void _OnSearchModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESMessage* )pWnd)->OnSearchModuleSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSearchModuleSelendokFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnSearchModuleSelendok();
}
/*static void _OnSearchModuleSetfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnSearchModuleKillfocus();
}*/
/*static void _OnSearchModuleKillfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnSearchModuleKillfocus();
}*/
static long _OnSearchModuleLoadDataFnc(CWnd *pWnd){
	return ((CVIMESMessage *)pWnd)->OnSearchModuleLoadData();
}
/*static void _OnSearchModuleAddNewFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnSearchModuleAddNew();
}*/
/*static void _OnFindNameChangeFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnFindNameChange();
} */
/*static void _OnFindNameSetfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnFindNameSetfocus();} */ 
/*static void _OnFindNameKillfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnFindNameKillfocus();
} */
static int _OnFindNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESMessage *)pWnd)->OnFindNameCheckValue();
} 
static long _OnMsgListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESMessage*)pWnd)->OnMsgListLoadData();
} 
static void _OnMsgListDblClickFnc(CWnd *pWnd){
	((CVIMESMessage*)pWnd)->OnMsgListDblClick();
} 
static void _OnMsgListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESMessage*)pWnd)->OnMsgListSelectChange(nOldItem, nNewItem);
} 
static int _OnMsgListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESMessage*)pWnd)->OnMsgListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESMessage *)pWnd)->OnIDCheckValue();
} 
static void _OnModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESMessage* )pWnd)->OnModuleSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnModuleSelendokFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnModuleSelendok();
}
/*static void _OnModuleSetfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnModuleKillfocus();
}*/
/*static void _OnModuleKillfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnModuleKillfocus();
}*/
static long _OnModuleLoadDataFnc(CWnd *pWnd){
	return ((CVIMESMessage *)pWnd)->OnModuleLoadData();
}
/*static void _OnModuleAddNewFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnModuleAddNew();
}*/
/*static void _OnEnglishMessageChangeFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnEnglishMessageChange();
} */
/*static void _OnEnglishMessageSetfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnEnglishMessageSetfocus();} */ 
/*static void _OnEnglishMessageKillfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnEnglishMessageKillfocus();
} */
static int _OnEnglishMessageCheckValueFnc(CWnd *pWnd){
	return ((CVIMESMessage *)pWnd)->OnEnglishMessageCheckValue();
} 
/*static void _OnOtherMessageChangeFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnOtherMessageChange();
} */
/*static void _OnOtherMessageSetfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnOtherMessageSetfocus();} */ 
/*static void _OnOtherMessageKillfocusFnc(CWnd *pWnd){
	((CVIMESMessage *)pWnd)->OnOtherMessageKillfocus();
} */
static int _OnOtherMessageCheckValueFnc(CWnd *pWnd){
	return ((CVIMESMessage *)pWnd)->OnOtherMessageCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CVIMESMessage *pVw = (CVIMESMessage *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CVIMESMessage *pVw = (CVIMESMessage *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESMessage *pVw = (CVIMESMessage *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESMessage *pVw = (CVIMESMessage *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESMessage *pVw = (CVIMESMessage *)pWnd;
	pVw->OnCancelSelect();
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

	m_nDlgWidth = 815;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CVIMESMessage::~CVIMESMessage(){
}
void CVIMESMessage::OnCreateComponents(){
	m_wndMessageList.Create(this, _T("Message List"), 5, 5, 805, 580);
	m_wndSearchModuleLabel.Create(this, _T("Search For Module"), 10, 30, 105, 55);
	m_wndSearchModule.Create(this,110, 30, 405, 55); 
	m_wndFindNameLabel.Create(this, _T("Find Name"), 410, 30, 510, 55);
	m_wndFindName.Create(this,515, 30, 800, 55); 
	m_wndMsgList.Create(this,10, 60, 800, 485); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 490, 105, 515);
	m_wndID.Create(this,110, 490, 335, 515); 
	m_wndModuleLabel.Create(this, _T("Module"), 340, 490, 415, 515);
	m_wndModule.Create(this,420, 490, 800, 515); 
	m_wndEnglishMessageLabel.Create(this, _T("English Message"), 10, 520, 105, 545);
	m_wndEnglishMessage.Create(this,110, 520, 800, 545); 
	m_wndOtherMessageLabel.Create(this, _T("Other Message"), 10, 550, 105, 575);
	m_wndOtherMessage.Create(this,110, 550, 800, 575); 
	m_wndAdd.Create(this, _T("&Add"), 410, 585, 485, 610);
	m_wndEdit.Create(this, _T("&Edit"), 490, 585, 565, 610);
	m_wndDelete.Create(this, _T("&Delete"), 570, 585, 645, 610);
	m_wndSave.Create(this, _T("&Save"), 650, 585, 725, 610);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 585, 805, 610);

}
void CVIMESMessage::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearchModule.SetCheckValue(true);
	m_wndSearchModule.LimitText(1024);
	m_wndFindName.SetLimitText(1024);
	m_wndFindName.SetCheckValue(true);
	m_wndID.SetCheckValue(true);
	m_wndModule.SetCheckValue(true);
	m_wndEnglishMessage.SetLimitText(252);
	m_wndEnglishMessage.SetCheckValue(true);
	m_wndOtherMessage.SetLimitText(252);
	m_wndOtherMessage.SetCheckValue(true);


	m_wndSearchModule.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSearchModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndMsgList.InsertColumn(0, _T("Module"), CFMT_TEXT, 60);
	m_wndMsgList.InsertColumn(1, _T("ID"), CFMT_NUMBER, 30);
	m_wndMsgList.InsertColumn(2, _T("English Message"), CFMT_TEXT, 210);
	m_wndMsgList.InsertColumn(3, _T("Other Message"), CFMT_TEXT, 210);


	m_wndModule.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_vimes_msgTbl.SetTableName(_T("vimes_msg"));
	m_vimes_msgTbl.AddField(_T("vmm_id"), dfInteger); 
	m_vimes_msgTbl.AddField(_T("vmm_moduleid"), dfInteger); 
	m_vimes_msgTbl.AddField(_T("vmm_enmsg"), dfText, 252); 
	m_vimes_msgTbl.AddField(_T("vmm_othmsg"), dfText, 252); 

}
void CVIMESMessage::OnSetWindowEvents(){
	m_wndSearchModule.SetEvent(WE_SELENDOK, _OnSearchModuleSelendokFnc);
	//m_wndSearchModule.SetEvent(WE_SETFOCUS, _OnSearchModuleSetfocusFnc);
	//m_wndSearchModule.SetEvent(WE_KILLFOCUS, _OnSearchModuleKillfocusFnc);
	m_wndSearchModule.SetEvent(WE_SELCHANGE, _OnSearchModuleSelectChangeFnc);
	m_wndSearchModule.SetEvent(WE_LOADDATA, _OnSearchModuleLoadDataFnc);
	//m_wndSearchModule.SetEvent(WE_ADDNEW, _OnSearchModuleAddNewFnc);
	//m_wndFindName.SetEvent(WE_CHANGE, _OnFindNameChangeFnc);
	//m_wndFindName.SetEvent(WE_SETFOCUS, _OnFindNameSetfocusFnc);
	//m_wndFindName.SetEvent(WE_KILLFOCUS, _OnFindNameKillfocusFnc);
	m_wndFindName.SetEvent(WE_CHECKVALUE, _OnFindNameCheckValueFnc);
	m_wndMsgList.SetEvent(WE_SELCHANGE, _OnMsgListSelectChangeFnc);
	m_wndMsgList.SetEvent(WE_LOADDATA, _OnMsgListLoadDataFnc);
	m_wndMsgList.SetEvent(WE_DBLCLICK, _OnMsgListDblClickFnc);
	m_wndMsgList.AddEvent(1, _T("Delete"), _OnMsgListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndModule.SetEvent(WE_SELENDOK, _OnModuleSelendokFnc);
	//m_wndModule.SetEvent(WE_SETFOCUS, _OnModuleSetfocusFnc);
	//m_wndModule.SetEvent(WE_KILLFOCUS, _OnModuleKillfocusFnc);
	m_wndModule.SetEvent(WE_SELCHANGE, _OnModuleSelectChangeFnc);
	m_wndModule.SetEvent(WE_LOADDATA, _OnModuleLoadDataFnc);
	//m_wndModule.SetEvent(WE_ADDNEW, _OnModuleAddNewFnc);
	//m_wndEnglishMessage.SetEvent(WE_CHANGE, _OnEnglishMessageChangeFnc);
	//m_wndEnglishMessage.SetEvent(WE_SETFOCUS, _OnEnglishMessageSetfocusFnc);
	//m_wndEnglishMessage.SetEvent(WE_KILLFOCUS, _OnEnglishMessageKillfocusFnc);
	m_wndEnglishMessage.SetEvent(WE_CHECKVALUE, _OnEnglishMessageCheckValueFnc);
	//m_wndOtherMessage.SetEvent(WE_CHANGE, _OnOtherMessageChangeFnc);
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
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("vmm_id"), m_nID);
	rs.GetValue(_T("vmm_moduleid"), m_szModuleKey);
	rs.GetValue(_T("vmm_enmsg"), m_szEnglishMessage);
	rs.GetValue(_T("vmm_othmsg"), m_szOtherMessage);

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
int CVIMESMessage::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
void CVIMESMessage::OnSearchModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESMessage::OnSearchModuleSelendok(){
	 
}
/*void CVIMESMessage::OnSearchModuleSetfocus(){
	
}*/
/*void CVIMESMessage::OnSearchModuleKillfocus(){
	
}*/
long CVIMESMessage::OnSearchModuleLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSearchModule.IsSearchKey() && !m_szSearchModuleKey.IsEmpty()){
	};
	m_wndSearchModule.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSearchModule.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVIMESMessage::OnSearchModuleAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESMessage::OnFindNameChange(){
	
} */
/*void CVIMESMessage::OnFindNameSetfocus(){
	
} */
/*void CVIMESMessage::OnFindNameKillfocus(){
	
} */
int CVIMESMessage::OnFindNameCheckValue(){
	return 0;
} 
void CVIMESMessage::OnMsgListDblClick(){
	
} 
void CVIMESMessage::OnMsgListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESMessage::OnMsgListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESMessage::OnMsgListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMsgList.BeginLoad(); 
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
	m_wndMsgList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CVIMESMessage::OnIDChange(){
	
} */
/*void CVIMESMessage::OnIDSetfocus(){
	
} */
/*void CVIMESMessage::OnIDKillfocus(){
	
} */
int CVIMESMessage::OnIDCheckValue(){
	return 0;
} 
void CVIMESMessage::OnModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESMessage::OnModuleSelendok(){
	 
}
/*void CVIMESMessage::OnModuleSetfocus(){
	
}*/
/*void CVIMESMessage::OnModuleKillfocus(){
	
}*/
long CVIMESMessage::OnModuleLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModule.IsSearchKey() && !m_szModuleKey.IsEmpty()){
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
/*void CVIMESMessage::OnModuleAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVIMESMessage::OnEnglishMessageChange(){
	
} */
/*void CVIMESMessage::OnEnglishMessageSetfocus(){
	
} */
/*void CVIMESMessage::OnEnglishMessageKillfocus(){
	
} */
int CVIMESMessage::OnEnglishMessageCheckValue(){
	return 0;
} 
/*void CVIMESMessage::OnOtherMessageChange(){
	
} */
/*void CVIMESMessage::OnOtherMessageSetfocus(){
	
} */
/*void CVIMESMessage::OnOtherMessageKillfocus(){
	
} */
int CVIMESMessage::OnOtherMessageCheckValue(){
	return 0;
} 
void CVIMESMessage::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESMessage::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESMessage::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESMessage::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESMessage::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESMessage::OnAddVIMESMessage(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESMessage::OnEditVIMESMessage(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESMessage::OnDeleteVIMESMessage(){
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
 		OnCancelVIMESMessage(); 
 	}
	return 0;
}
int CVIMESMessage::OnSaveVIMESMessage(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_vimes_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_vimes_msgTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnVIMESMessageListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESMessage::OnCancelVIMESMessage(){
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
int CVIMESMessage::OnVIMESMessageListLoadData(){
	return 0;
}
