#include "HMSPaymentMethodSettingDialog.h"
#include "MainFrm.h"
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPaymentMethodSettingDialog* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CHMSPaymentMethodSettingDialog *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentMethodSettingDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentMethodSettingDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentMethodSettingDialog *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CHMSPaymentMethodSettingDialog *)pWnd)->OnPaymentMethodAddNew();
}*/
static void _OnRequestSelectFnc(CWnd *pWnd){
	 ((CHMSPaymentMethodSettingDialog*)pWnd)->OnRequestSelect();
}
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPaymentMethodSettingDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CHMSPaymentMethodSettingDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSPaymentMethodSettingDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSPaymentMethodSettingDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentMethodSettingDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSPaymentMethodSettingDialog *)pWnd)->OnDeptAddNew();
}*/
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSPaymentMethodSettingDialog *pVw = (CHMSPaymentMethodSettingDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPaymentMethodSettingDialog *pVw = (CHMSPaymentMethodSettingDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPaymentMethodSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentMethodSettingDialog*)pWnd)->OnAddHMSPaymentMethodSettingDialog();
} 
static int _OnEditHMSPaymentMethodSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentMethodSettingDialog*)pWnd)->OnEditHMSPaymentMethodSettingDialog();
} 
static int _OnDeleteHMSPaymentMethodSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentMethodSettingDialog*)pWnd)->OnDeleteHMSPaymentMethodSettingDialog();
} 
static int _OnSaveHMSPaymentMethodSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentMethodSettingDialog*)pWnd)->OnSaveHMSPaymentMethodSettingDialog();
} 
static int _OnCancelHMSPaymentMethodSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentMethodSettingDialog*)pWnd)->OnCancelHMSPaymentMethodSettingDialog();
} 
CHMSPaymentMethodSettingDialog::CHMSPaymentMethodSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 355;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CHMSPaymentMethodSettingDialog::~CHMSPaymentMethodSettingDialog(){
}
void CHMSPaymentMethodSettingDialog::OnCreateComponents(){
	m_wndPaymentMethodSetting.Create(this, _T("Payment Method Setting"), 5, 5, 325, 180);
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 10, 30, 160, 55);
	m_wndPaymentMethod.Create(this,165, 30, 320, 55); 
	m_wndDescription.Create(this, _T(""), 10, 60, 320, 145);
	m_wndRequest.Create(this, _T("Request"), 10, 150, 160, 175);
	m_wndDeptLabel.Create(this, _T("Dept"), 165, 150, 245, 175);
	m_wndDept.Create(this,250, 150, 320, 175); 
	m_wndOK.Create(this, _T("&OK"), 150, 185, 235, 210);
	m_wndClose.Create(this, _T("&Close"), 240, 185, 325, 210);

}
void CHMSPaymentMethodSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(1024);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);




	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSPaymentMethodSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	m_wndRequest.SetEvent(WE_CLICK, _OnRequestSelectFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSPaymentMethodSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_Check(pDX, m_wndRequest.GetDlgCtrlID(), m_bRequest);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);

}
void CHMSPaymentMethodSettingDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PaymentMethod")] =  m_szPaymentMethodKey;
	m_jData[_T("Request")] =  m_bRequest;
	m_jData[_T("Dept")] =  m_szDeptKey;
	}
	else
	{
			
	m_jData[_T("PaymentMethod")].GetValue(m_szPaymentMethodKey);
	m_jData[_T("Request")].GetValue(m_bRequest);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	}

}
void CHMSPaymentMethodSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPaymentMethodSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPaymentMethodSettingDialog::SetDefaultValues(){

	m_szPaymentMethodKey.Empty();
	m_bRequest=FALSE;
	m_szDeptKey.Empty();

}
int CHMSPaymentMethodSettingDialog::SetMode(int nMode){
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
void CHMSPaymentMethodSettingDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentMethodSettingDialog::OnPaymentMethodSelendok(){
	 
}
/*void CHMSPaymentMethodSettingDialog::OnPaymentMethodSetfocus(){
	
}*/
/*void CHMSPaymentMethodSettingDialog::OnPaymentMethodKillfocus(){
	
}*/
long CHMSPaymentMethodSettingDialog::OnPaymentMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentMethodKey
};
	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPaymentMethodSettingDialog::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSPaymentMethodSettingDialog::OnRequestSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSPaymentMethodSettingDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentMethodSettingDialog::OnDeptSelendok(){
	 
}
/*void CHMSPaymentMethodSettingDialog::OnDeptSetfocus(){
	
}*/
/*void CHMSPaymentMethodSettingDialog::OnDeptKillfocus(){
	
}*/
long CHMSPaymentMethodSettingDialog::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey
};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPaymentMethodSettingDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPaymentMethodSettingDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentMethodSettingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPaymentMethodSettingDialog::OnAddHMSPaymentMethodSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPaymentMethodSettingDialog::OnEditHMSPaymentMethodSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPaymentMethodSettingDialog::OnDeleteHMSPaymentMethodSettingDialog(){
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
 		OnCancelHMSPaymentMethodSettingDialog();
 	}
	return 0;
}
int CHMSPaymentMethodSettingDialog::OnSaveHMSPaymentMethodSettingDialog(){
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
 		//OnHMSPaymentMethodSettingDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPaymentMethodSettingDialog::OnCancelHMSPaymentMethodSettingDialog(){
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
int CHMSPaymentMethodSettingDialog::OnHMSPaymentMethodSettingDialogListLoadData(){
	return 0;
}
