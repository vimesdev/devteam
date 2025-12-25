#include "HMSAdviseChatMessage.h"
#include "MainFrm.h"
static long _OnChatMessageLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdviseChatMessage*)pWnd)->OnChatMessageLoadData();
} 
static void _OnChatMessageDblClickFnc(CWnd *pWnd){
	((CHMSAdviseChatMessage*)pWnd)->OnChatMessageDblClick();
} 
static void _OnChatMessageSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAdviseChatMessage*)pWnd)->OnChatMessageSelectChange(nOldItem, nNewItem);
} 
static int _OnChatMessageDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAdviseChatMessage*)pWnd)->OnChatMessageDeleteItem();
} 
/*static void _OnMessageChangeFnc(CWnd *pWnd){
	((CHMSAdviseChatMessage *)pWnd)->OnMessageChange();
} */
/*static void _OnMessageSetfocusFnc(CWnd *pWnd){
	((CHMSAdviseChatMessage *)pWnd)->OnMessageSetfocus();} */ 
/*static void _OnMessageKillfocusFnc(CWnd *pWnd){
	((CHMSAdviseChatMessage *)pWnd)->OnMessageKillfocus();
} */
static int _OnMessageCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdviseChatMessage *)pWnd)->OnMessageCheckValue();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSAdviseChatMessage *pVw = (CHMSAdviseChatMessage *)pWnd;
	pVw->OnSendSelect();
} 
static int _OnAddHMSAdviseChatMessageFnc(CWnd *pWnd){
	 return ((CHMSAdviseChatMessage*)pWnd)->OnAddHMSAdviseChatMessage();
} 
static int _OnEditHMSAdviseChatMessageFnc(CWnd *pWnd){
	 return ((CHMSAdviseChatMessage*)pWnd)->OnEditHMSAdviseChatMessage();
} 
static int _OnDeleteHMSAdviseChatMessageFnc(CWnd *pWnd){
	 return ((CHMSAdviseChatMessage*)pWnd)->OnDeleteHMSAdviseChatMessage();
} 
static int _OnSaveHMSAdviseChatMessageFnc(CWnd *pWnd){
	 return ((CHMSAdviseChatMessage*)pWnd)->OnSaveHMSAdviseChatMessage();
} 
static int _OnCancelHMSAdviseChatMessageFnc(CWnd *pWnd){
	 return ((CHMSAdviseChatMessage*)pWnd)->OnCancelHMSAdviseChatMessage();
} 
CHMSAdviseChatMessage::CHMSAdviseChatMessage(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 460;
	m_nDlgHeight = 545;
	SetDefaultValues();
}
CHMSAdviseChatMessage::~CHMSAdviseChatMessage(){
}
void CHMSAdviseChatMessage::OnCreateComponents(){
	m_wndChatMessage.Create(this,5, 5, 455, 485); 
	m_wndMessage.Create(this,6, 490, 381, 540); 
	m_wndSend.Create(this, _T("Send"), 386, 490, 454, 540);

}
void CHMSAdviseChatMessage::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMessage.SetLimitText(35);
	m_wndMessage.SetCheckValue(true);



}
void CHMSAdviseChatMessage::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndChatMessage.SetEvent(WE_SELCHANGE, _OnChatMessageSelectChangeFnc);
	m_wndChatMessage.SetEvent(WE_LOADDATA, _OnChatMessageLoadDataFnc);
	m_wndChatMessage.SetEvent(WE_DBLCLICK, _OnChatMessageDblClickFnc);
	m_wndChatMessage.AddEvent(1, _T("Delete"), _OnChatMessageDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndMessage.SetEvent(WE_CHANGE, _OnMessageChangeFnc);
	//m_wndMessage.SetEvent(WE_SETFOCUS, _OnMessageSetfocusFnc);
	//m_wndMessage.SetEvent(WE_KILLFOCUS, _OnMessageKillfocusFnc);
	m_wndMessage.SetEvent(WE_CHECKVALUE, _OnMessageCheckValueFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	SetMode(VM_NONE);

}
void CHMSAdviseChatMessage::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndMessage.GetDlgCtrlID(), m_szMessage);

}
void CHMSAdviseChatMessage::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Message")] =  m_szMessage;
	}
	else
	{
			
	m_jData[_T("Message")].GetValue(m_szMessage);
	}

}
void CHMSAdviseChatMessage::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAdviseChatMessage::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdviseChatMessage::SetDefaultValues(){

	m_szMessage.Empty();

}
int CHMSAdviseChatMessage::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
void CHMSAdviseChatMessage::OnChatMessageDblClick(){
	
} 
void CHMSAdviseChatMessage::OnChatMessageSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdviseChatMessage::OnChatMessageDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSAdviseChatMessage::OnChatMessageLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndChatMessage.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChatMessage.AddItems(
		rs.MoveNext();
	}
	m_wndChatMessage.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSAdviseChatMessage::OnMessageChange(){
	
} */
/*void CHMSAdviseChatMessage::OnMessageSetfocus(){
	
} */
/*void CHMSAdviseChatMessage::OnMessageKillfocus(){
	
} */
int CHMSAdviseChatMessage::OnMessageCheckValue(){
	return 0;
} 
void CHMSAdviseChatMessage::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdviseChatMessage::OnAddHMSAdviseChatMessage(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdviseChatMessage::OnEditHMSAdviseChatMessage(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdviseChatMessage::OnDeleteHMSAdviseChatMessage(){
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
 		OnCancelHMSAdviseChatMessage();
 	}
	return 0;
}
int CHMSAdviseChatMessage::OnSaveHMSAdviseChatMessage(){
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
 		//OnHMSAdviseChatMessageListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAdviseChatMessage::OnCancelHMSAdviseChatMessage(){
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
int CHMSAdviseChatMessage::OnHMSAdviseChatMessageListLoadData(){
	return 0;
}
