#include "IVFSetupListDlg.h"
//#include "stdafx.h"
//#include "MainFrm.h"
static int _OnIDChangeFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnIDChange();
} 
static int _OnIDSetfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnIDKillfocus();
} 
static int _OnIDKillfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnIDKillfocus();
} 
static int _OnIDCheckValueFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnIDCheckValue();
} 
static int _OnNameChangeFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnNameChange();
} 
static int _OnNameSetfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnNameKillfocus();
} 
static int _OnNameKillfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnNameKillfocus();
} 
static int _OnNameCheckValueFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnNameCheckValue();
} 
static int _OnTypeChangeFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnTypeChange();
} 
static int _OnTypeSetfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnTypeKillfocus();
} 
static int _OnTypeKillfocusFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnTypeKillfocus();
} 
static int _OnTypeCheckValueFnc(CWnd *pWnd){
	 return ((CIVFSetupListDlg *)pWnd)->OnTypeCheckValue();
} 
static int _OnOKSelFnc(CWnd *pWnd){
	CIVFSetupListDlg *pVw = (CIVFSetupListDlg *)pWnd;
	return pVw->OnOKSel();
} 
static int _OnCancelSelFnc(CWnd *pWnd){
	CIVFSetupListDlg *pVw = (CIVFSetupListDlg *)pWnd;
	return pVw->OnCancelSel();
} 
CIVFSetupListDlg::CIVFSetupListDlg(){

	m_nX = 100;
	m_nY = 100;
	m_nDlgWidth = 274;
	m_nDlgHeight = 137;
	m_szID.Empty();
	m_szName.Empty();
	m_nType=0;
	m_bAdd = FALSE;
}
CIVFSetupListDlg::~CIVFSetupListDlg(){
}
void CIVFSetupListDlg::OnCreateComponents(){
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
void CIVFSetupListDlg::OnInitializeComponents(){
	UpdateData(FALSE);
	m_wndID.SetLimitText(35);
	m_wndName.SetLimitText(81);
	m_sys_setuplistTbl.SetTableName(_T("sys_setuplist"));
	m_sys_setuplistTbl.AddField(_T("ssl_id"), dfText, 15); 
	m_sys_setuplistTbl.AddField(_T("ssl_name"), dfText, 81); 
	m_sys_setuplistTbl.AddField(_T("ssl_type"), dfInteger); 


}
void CIVFSetupListDlg::OnSetWindowEvents(){
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
void CIVFSetupListDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndType.GetDlgCtrlID(), m_nType);

}
void CIVFSetupListDlg::GetDataToScreen(){

}
void CIVFSetupListDlg::GetScreenToData(){
	m_sys_setuplistTbl.SetValue(_T("ssl_id"), m_szID);
	m_sys_setuplistTbl.SetValue(_T("ssl_name"), m_szName);
	m_sys_setuplistTbl.SetValue(_T("ssl_type"), m_nType);

}
int CIVFSetupListDlg::OnIDChange(){
	 return 0;
} 
int CIVFSetupListDlg::OnIDSetfocus(){
	 return 0;
} 
int CIVFSetupListDlg::OnIDKillfocus(){
	 return 0;
} 
int CIVFSetupListDlg::OnIDCheckValue(){
	 return 0;
} 
int CIVFSetupListDlg::OnNameChange(){
	 return 0;
} 
int CIVFSetupListDlg::OnNameSetfocus(){
	 return 0;
} 
int CIVFSetupListDlg::OnNameKillfocus(){
	 return 0;
} 
int CIVFSetupListDlg::OnNameCheckValue(){
	 return 0;
} 
int CIVFSetupListDlg::OnTypeChange(){
	 return 0;
} 
int CIVFSetupListDlg::OnTypeSetfocus(){
	 return 0;
} 
int CIVFSetupListDlg::OnTypeKillfocus(){
	 return 0;
} 
int CIVFSetupListDlg::OnTypeCheckValue(){
	 return 0;
} 
int CIVFSetupListDlg::OnOKSel(){
	UpdateData(TRUE);
	CGuiDialog::OnOK();
	 return 0;
} 
int CIVFSetupListDlg::OnCancelSel(){
	CGuiDialog::OnCancel();
	 return 0;
} 
