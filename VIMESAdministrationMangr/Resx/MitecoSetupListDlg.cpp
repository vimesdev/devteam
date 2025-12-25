#include "VIMESSetupListDlg.h"
//#include "stdafx.h"
//#include "MainFrm.h"
static int _OnIDChangeFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnIDChange();
} 
static int _OnIDSetfocusFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnIDKillfocus();
} 
static int _OnIDKillfocusFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnIDKillfocus();
} 
static int _OnIDCheckValueFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnIDCheckValue();
} 
static int _OnNameChangeFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnNameChange();
} 
static int _OnNameSetfocusFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnNameKillfocus();
} 
static int _OnNameKillfocusFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnNameKillfocus();
} 
static int _OnNameCheckValueFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnNameCheckValue();
} 
static int _OnTypeChangeFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnTypeChange();
} 
static int _OnTypeSetfocusFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnTypeKillfocus();
} 
static int _OnTypeKillfocusFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnTypeKillfocus();
} 
static int _OnTypeCheckValueFnc(CWnd *pWnd){
	 return ((CVIMESSetupListDlg *)pWnd)->OnTypeCheckValue();
} 
static int _OnOkSelFnc(CWnd *pWnd){
	CVIMESSetupListDlg *pVw = (CVIMESSetupListDlg *)pWnd;
	return pVw->OnOkSel();
} 
static int _OnCancelSelFnc(CWnd *pWnd){
	CVIMESSetupListDlg *pVw = (CVIMESSetupListDlg *)pWnd;
	return pVw->OnCancelSel();
} 
CVIMESSetupListDlg::CVIMESSetupListDlg(){

	m_nDlgWidth = 274;
	m_nDlgHeight = 137;
	m_szID.Empty();
	m_szName.Empty();
	m_nType=0;
}
CVIMESSetupListDlg::~CVIMESSetupListDlg(){
}
void CVIMESSetupListDlg::OnCreateComponents(){
	m_wndIDLabel.Create(this, _T("ID"), 10, 29, 60, 49);
	m_wndID.Create(this,62, 29, 162, 49); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 53, 60, 73);
	m_wndName.Create(this,62, 53, 262, 73); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 77, 60, 97);
	m_wndType.Create(this,62, 77, 112, 97); 
	m_wndOk.Create(this, _T("&Ok"), 121, 108, 191, 132);
	m_wndCancel.Create(this, _T("&Cancel"), 199, 108, 269, 132);
	m_wndSetupInformation.Create(this, _T("Setup Information"), 5, 5, 267, 101);

}
void CVIMESSetupListDlg::OnInitializeComponents(){
	m_wndID.SetLimitText(15);
	m_wndName.SetLimitText(81);
	m_vimes_setuplistTbl.SetTableName(_T("vimes_setuplist"));
	m_vimes_setuplistTbl.AddField(_T("vmsl_id"), dfText, 15); 
	m_vimes_setuplistTbl.AddField(_T("vmsl_name"), dfText, 81); 
	m_vimes_setuplistTbl.AddField(_T("vmsl_type"), dfInteger); 

}
void CVIMESSetupListDlg::OnSetWindowEvents(){
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
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelFnc);

}
void CVIMESSetupListDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndType.GetDlgCtrlID(), m_nType);

}
void CVIMESSetupListDlg::OnGetDataToScreen(){

}
void CVIMESSetupListDlg::OnGetScreenToData(){
	m_vimes_setuplistTbl.SetValue(_T("vmsl_id"), m_szID);
	m_vimes_setuplistTbl.SetValue(_T("vmsl_name"), m_szName);
	m_vimes_setuplistTbl.SetValue(_T("vmsl_type"), m_nType);

}
int CVIMESSetupListDlg::OnIDChange(){
	 return 0;
} 
int CVIMESSetupListDlg::OnIDSetfocus(){
	 return 0;
} 
int CVIMESSetupListDlg::OnIDKillfocus(){
	 return 0;
} 
int CVIMESSetupListDlg::OnIDCheckValue(){
	 return 0;
} 
int CVIMESSetupListDlg::OnNameChange(){
	 return 0;
} 
int CVIMESSetupListDlg::OnNameSetfocus(){
	 return 0;
} 
int CVIMESSetupListDlg::OnNameKillfocus(){
	 return 0;
} 
int CVIMESSetupListDlg::OnNameCheckValue(){
	 return 0;
} 
int CVIMESSetupListDlg::OnTypeChange(){
	 return 0;
} 
int CVIMESSetupListDlg::OnTypeSetfocus(){
	 return 0;
} 
int CVIMESSetupListDlg::OnTypeKillfocus(){
	 return 0;
} 
int CVIMESSetupListDlg::OnTypeCheckValue(){
	 return 0;
} 
int CVIMESSetupListDlg::OnOkSel(){
	 return 0;
} 
int CVIMESSetupListDlg::OnCancelSel(){
	 return 0;
} 
