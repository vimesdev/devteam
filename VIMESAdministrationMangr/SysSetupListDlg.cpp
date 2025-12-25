#include "SysSetupListDlg.h"
//#include "stdafx.h"
//#include "MainFrm.h"
static int _OnIDChangeFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnIDChange();
} 
static int _OnIDSetfocusFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnIDKillfocus();
} 
static int _OnIDKillfocusFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnIDKillfocus();
} 
static int _OnIDCheckValueFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnIDCheckValue();
} 
static int _OnNameChangeFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnNameChange();
} 
static int _OnNameSetfocusFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnNameKillfocus();
} 
static int _OnNameKillfocusFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnNameKillfocus();
} 
static int _OnNameCheckValueFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnNameCheckValue();
} 
static int _OnTypeChangeFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnTypeChange();
} 
static int _OnTypeSetfocusFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnTypeKillfocus();
} 
static int _OnTypeKillfocusFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnTypeKillfocus();
} 
static int _OnTypeCheckValueFnc(CWnd *pWnd){
	 return ((CSysSetupListDlg *)pWnd)->OnTypeCheckValue();
} 
static int _OnOKSelFnc(CWnd *pWnd){
	CSysSetupListDlg *pVw = (CSysSetupListDlg *)pWnd;
	return pVw->OnOKSel();
} 
static int _OnCancelSelFnc(CWnd *pWnd){
	CSysSetupListDlg *pVw = (CSysSetupListDlg *)pWnd;
	return pVw->OnCancelSel();
} 
CSysSetupListDlg::CSysSetupListDlg(){

	m_nX = 100;
	m_nY = 100;
	m_nDlgWidth = 274;
	m_nDlgHeight = 137;
	m_szID.Empty();
	m_szName.Empty();
	m_nType=0;
	m_bAdd = FALSE;
}
CSysSetupListDlg::~CSysSetupListDlg(){
}
void CSysSetupListDlg::OnCreateComponents(){
	m_wndIDLabel.Create(this, _T("ID"), 10, 29, 60, 49);
	m_wndID.Create(this,62, 29, 182, 49); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 53, 60, 73);
	m_wndName.Create(this,62, 53, 262, 73); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 77, 60, 97);
	m_wndType.Create(this,62, 77, 112, 97); 
	m_wndOk.Create(this, _T("&Ok"), 121, 108, 191, 132);
	m_wndCancel.Create(this, _T("&Cancel"), 199, 108, 269, 132);
	m_wndSetupInformation.Create(this, _T("Setup Information"), 5, 5, 267, 101);

}
void CSysSetupListDlg::OnInitializeComponents(){
	UpdateData(FALSE);
	m_wndID.SetLimitText(35);
	m_wndName.SetLimitText(81);
	m_sys_setuplistTbl.SetTableName(_T("sys_setuplist"));
	m_sys_setuplistTbl.AddField(_T("ssl_id"), dfText, 15); 
	m_sys_setuplistTbl.AddField(_T("ssl_name"), dfText, 81); 
	m_sys_setuplistTbl.AddField(_T("ssl_type"), dfInteger); 


}
void CSysSetupListDlg::OnSetWindowEvents(){
	m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndType.SetEvent(WE_CHANGE, _OnTypeChangeFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_CHECKVALUE, _OnTypeCheckValueFnc);
	m_wndOk.SetEvent(WE_CLICK, _OnOKSelFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelFnc);

}
void CSysSetupListDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndType.GetDlgCtrlID(), m_nType);

}
void CSysSetupListDlg::GetDataToScreen(){

}
void CSysSetupListDlg::GetScreenToData(){
	m_sys_setuplistTbl.SetValue(_T("ssl_id"), m_szID);
	m_sys_setuplistTbl.SetValue(_T("ssl_name"), m_szName);
	m_sys_setuplistTbl.SetValue(_T("ssl_type"), m_nType);

}
int CSysSetupListDlg::OnIDChange(){
	 return 0;
} 
int CSysSetupListDlg::OnIDSetfocus(){
	 return 0;
} 
int CSysSetupListDlg::OnIDKillfocus(){
	 return 0;
} 
int CSysSetupListDlg::OnIDCheckValue(){
	 return 0;
} 
int CSysSetupListDlg::OnNameChange(){
	 return 0;
} 
int CSysSetupListDlg::OnNameSetfocus(){
	 return 0;
} 
int CSysSetupListDlg::OnNameKillfocus(){
	 return 0;
} 
int CSysSetupListDlg::OnNameCheckValue(){
	 return 0;
} 
int CSysSetupListDlg::OnTypeChange(){
	 return 0;
} 
int CSysSetupListDlg::OnTypeSetfocus(){
	 return 0;
} 
int CSysSetupListDlg::OnTypeKillfocus(){
	 return 0;
} 
int CSysSetupListDlg::OnTypeCheckValue(){
	 return 0;
} 
int CSysSetupListDlg::OnOKSel(){
	UpdateData(TRUE);
	CGuiDialog::OnOK();
	 return 0;
} 
int CSysSetupListDlg::OnCancelSel(){
	CGuiDialog::OnCancel();
	 return 0;
} 
