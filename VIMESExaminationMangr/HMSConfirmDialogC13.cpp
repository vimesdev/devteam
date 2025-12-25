#include "HMSConfirmDialogC13.h"
//#include "stdafx.h"
#include "HMSMainFrame.h"
/*static int _OnDoctorChangeFnc(CWnd *pWnd){
	return ((CHMSConfirmDialogC13 *)pWnd)->OnDoctorChange();
} */
/*static int _OnDoctorSetfocusFnc(CWnd *pWnd){
	return ((CHMSConfirmDialogC13 *)pWnd)->OnDoctorKillfocus();} */ 
/*static int _OnDoctorKillfocusFnc(CWnd *pWnd){
	return ((CHMSConfirmDialogC13 *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CHMSConfirmDialogC13 *)pWnd)->OnDoctorCheckValue();
} 

static int _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSConfirmDialogC13 *)pWnd)->OnDoctorLoadData();
} 
/*static int _OnConfirmPasswordChangeFnc(CWnd *pWnd){
	return ((CHMSConfirmDialogC13 *)pWnd)->OnConfirmPasswordChange();
} */
/*static int _OnConfirmPasswordSetfocusFnc(CWnd *pWnd){
	return ((CHMSConfirmDialogC13 *)pWnd)->OnConfirmPasswordKillfocus();} */ 
/*static int _OnConfirmPasswordKillfocusFnc(CWnd *pWnd){
	return ((CHMSConfirmDialogC13 *)pWnd)->OnConfirmPasswordKillfocus();
} */
static int _OnConfirmPasswordCheckValueFnc(CWnd *pWnd){
	return ((CHMSConfirmDialogC13 *)pWnd)->OnConfirmPasswordCheckValue();
} 
static int _OnOKSelectFnc(CWnd *pWnd){
	CHMSConfirmDialogC13 *pVw = (CHMSConfirmDialogC13 *)pWnd;
	return pVw->OnOKSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSConfirmDialogC13 *pVw = (CHMSConfirmDialogC13 *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddHMSConfirmDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmDialogC13*)pWnd)->OnAddHMSConfirmDialog();
} 
static int _OnEditHMSConfirmDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmDialogC13*)pWnd)->OnEditHMSConfirmDialog();
} 
static int _OnDeleteHMSConfirmDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmDialogC13*)pWnd)->OnDeleteHMSConfirmDialog();
} 
static int _OnSaveHMSConfirmDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmDialogC13*)pWnd)->OnSaveHMSConfirmDialog();
} 
static int _OnCancelHMSConfirmDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmDialogC13*)pWnd)->OnCancelHMSConfirmDialog();
} 
CHMSConfirmDialogC13::CHMSConfirmDialogC13(){

	m_nDlgWidth = 255;
	m_nDlgHeight = 95;
	SetDefaultValues();	
}
CHMSConfirmDialogC13::~CHMSConfirmDialogC13(){
}
void CHMSConfirmDialogC13::OnCreateComponents(){
	m_wndDoctorLabel.Create(this, _T("Doctor"), 5, 5, 105, 30);
	m_wndDoctor.Create(this,110, 5, 310, 30); 
	m_wndConfirmPasswordLabel.Create(this, _T("Password"), 5, 35, 105, 60);
	m_wndConfirmPassword.SetPassword(true);
	m_wndConfirmPassword.Create(this,110, 35, 310, 60); 
	m_wndOK.Create(this, _T("&OK"), 125, 65, 215, 90);
	m_wndCancel.Create(this, _T("&Cancel"), 220, 65, 310, 90);
	CGuiDialog::SetMode(VM_ADD);
}
void CHMSConfirmDialogC13::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
//	m_wndDoctor.SetLimitText(35);
	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDoctor.InsertColumn(2, _T("Dept"), CFMT_TEXT, 50);
	m_wndDoctor.SetCheckValue(true);
	m_wndConfirmPassword.SetLimitText(35);
	m_wndConfirmPassword.SetCheckValue(true);
	m_wndConfirmPassword.SetNotEmpty(false);
	m_wndDoctor.EnableWindow(false);	

}
void CHMSConfirmDialogC13::OnSetWindowEvents(){
	//m_wndDoctor.SetEvent(WE_CHANGE, _OnDoctorChangeFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	//m_wndDoctor.SetEvent(WE_CHECKVALUE, _OnDoctorCheckValueFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);

	//m_wndConfirmPassword.SetEvent(WE_CHANGE, _OnConfirmPasswordChangeFnc);
	//m_wndConfirmPassword.SetEvent(WE_SETFOCUS, _OnConfirmPasswordSetfocusFnc);
	//m_wndConfirmPassword.SetEvent(WE_KILLFOCUS, _OnConfirmPasswordKillfocusFnc);
	m_wndConfirmPassword.SetEvent(WE_CHECKVALUE, _OnConfirmPasswordCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(m_szDoctor.IsEmpty())
	{
		if(pMF->m_szUserGroup == _T("D") || pMF->m_szUserGroup == _T("P"))
			m_szDoctor = pMF->GetCurrentUser();
		else if(!pMF->m_szDoctor.IsEmpty())
			m_szDoctor = pMF->m_szDoctor;
	}


	m_szConfirmPassword.Empty();
	UpdateData(false);
	SetMode(GetMode());
	if(GetMode() == VM_EDIT)
	{

		m_wndDoctor.EnableWindow(false);
		m_wndConfirmPassword.SetFocus();
	}
	
	if(GetMode() != VM_ADD)
	{
		szSQL.Format(_T("SELECT su_groupid FROM sys_user WHERE su_userid='%s'"), m_szDoctor);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			CString tmpStr;
			rs.GetValue(_T("su_groupid"), tmpStr);
			if(tmpStr != _T("D") && tmpStr != _T("P"))
				m_szDoctor.Empty();
		}
		else
			m_szDoctor.Empty();
	}
}
void CHMSConfirmDialogC13::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndConfirmPassword.GetDlgCtrlID(), m_szConfirmPassword);

}
void CHMSConfirmDialogC13::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSConfirmDialogC13::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSConfirmDialogC13::SetDefaultValues(){

	m_szDoctor.Empty();
	m_szConfirmPassword.Empty();

}
int CHMSConfirmDialogC13::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		//CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 		//	SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
/*int CHMSConfirmDialogC13::OnDoctorChange(){
	return 0;
} */
/*int CHMSConfirmDialogC13::OnDoctorSetfocus(){
	return 0;
} */
/*int CHMSConfirmDialogC13::OnDoctorKillfocus(){
	return 0;
} */
int CHMSConfirmDialogC13::OnDoctorCheckValue(){
	return 0;
} 
/*int CHMSConfirmDialogC13::OnConfirmPasswordChange(){
	return 0;
} */
/*int CHMSConfirmDialogC13::OnConfirmPasswordSetfocus(){
	return 0;
} */
/*int CHMSConfirmDialogC13::OnConfirmPasswordKillfocus(){
	return 0;
} */
int CHMSConfirmDialogC13::OnConfirmPasswordCheckValue(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	UpdateData(true);
	szSQL.Format(_T("SELECT su_password FROM sys_user WHERE lower(su_userid)=lower('%s')"), m_szDoctor);
	rs.ExecSQL(szSQL);
	tmpStr = rs.GetStringValue();
	if(tmpStr.CompareNoCase(m_szConfirmPassword) == 0)
		return 0;
	m_wndConfirmPassword.SetToolTipMessage(_T("Invalid Password"));
	return -1;
} 
int CHMSConfirmDialogC13::OnOKSelect(){
	if(!IsValidateData())
		return -1;
	OnOK();
	return 0;
} 
int CHMSConfirmDialogC13::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
	 return 0;
} 
int CHMSConfirmDialogC13::OnAddHMSConfirmDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSConfirmDialogC13::OnEditHMSConfirmDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSConfirmDialogC13::OnDeleteHMSConfirmDialog(){
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
 		OnCancelHMSConfirmDialog(); 
 	}
return 0;
 } 
int CHMSConfirmDialogC13::OnSaveHMSConfirmDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
// 		szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 //		szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSConfirmDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSConfirmDialogC13::OnCancelHMSConfirmDialog(){
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
int CHMSConfirmDialogC13::OnHMSConfirmDialogListLoadData(){
	return 0;
}

int CHMSConfirmDialogC13::OnDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctor.IsEmpty()){
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctor);
	};
//	if(GetMode() == VM_EDIT)

	if(pMF->GetModuleID() != _T("NM"))
		szWhere.AppendFormat(_T(" and trim(su_groupid) in('D','P') "));

	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	
	szSQL.Format(_T(" SELECT su_userid as id, su_name as name, su_deptid as dept ") \
		_T(" FROM sys_user ") \
		_T(" WHERE 1=1  %s ") \
		_T(" ORDER BY id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	if(nCount == 0)
	{
		m_szDoctor.Empty();
	}
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("dept")), NULL);
		rs.MoveNext();
	}
	
	return nCount;
}