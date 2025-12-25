#include "HMSTakecareEvalUserDialog.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSTakecareEvalUserDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSTakecareEvalUserDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTakecareEvalUserDialog *)pWnd)->OnNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTakecareEvalUserDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTakecareEvalUserDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTakecareEvalUserDialogFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnAddHMSTakecareEvalUserDialog();
} 
static int _OnEditHMSTakecareEvalUserDialogFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnEditHMSTakecareEvalUserDialog();
} 
static int _OnDeleteHMSTakecareEvalUserDialogFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnDeleteHMSTakecareEvalUserDialog();
} 
static int _OnSaveHMSTakecareEvalUserDialogFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnSaveHMSTakecareEvalUserDialog();
} 
static int _OnCancelHMSTakecareEvalUserDialogFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnCancelHMSTakecareEvalUserDialog();
} 
CHMSTakecareEvalUserDialog::CHMSTakecareEvalUserDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_nID = 0;
}
CHMSTakecareEvalUserDialog::~CHMSTakecareEvalUserDialog(){
}
void CHMSTakecareEvalUserDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 510, 365); 
	m_wndCodeLabel.Create(this, _T("Code"), 5, 370, 85, 395);
	m_wndCode.Create(this,90, 370, 190, 395); 
	m_wndNameLabel.Create(this, _T("Name"), 195, 370, 295, 395);
	m_wndName.Create(this,300, 370, 510, 395); 
	m_wndTel1Label.Create(this, _T("Tel1/2/Email"), 5, 400, 85, 425);
	m_wndTel1.Create(this,90, 400, 190, 425); 
	m_wndTel2.Create(this,195, 400, 295, 425); 
	m_wndEmail.Create(this,300, 400, 510, 425); 
	m_wndAdd.Create(this, _T("&Add"), 5, 430, 85, 455);
	m_wndEdit.Create(this, _T("&Edit"), 90, 430, 170, 455);
	m_wndDelete.Create(this, _T("&Delete"), 175, 430, 255, 455);
	m_wndSave.Create(this, _T("&Save"), 260, 430, 340, 455);
	m_wndCancel.Create(this, _T("&Cancel"), 345, 430, 425, 455);
	m_wndClose.Create(this, _T("&Close"), 430, 430, 510, 455);
}
void CHMSTakecareEvalUserDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCode.SetLimitText(15);
	m_wndCode.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndID.SetReadOnly(TRUE);

	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(1, _T("Code"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Tel"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Email"), CFMT_TEXT, 150);

	m_hms_takecare_evaluserTbl.SetTableName(_T("hms_takecare_evaluser"));
	m_hms_takecare_evaluserTbl.AddField(_T("HTE_ID"), dfLong); 
	m_hms_takecare_evaluserTbl.AddField(_T("HTE_CODE"), dfText, 15); 
	m_hms_takecare_evaluserTbl.AddField(_T("HTE_NAME"), dfText, 81); 
	m_hms_takecare_evaluserTbl.AddField(_T("HTE_TEL1"), dfText, 15); 
	m_hms_takecare_evaluserTbl.AddField(_T("HTE_TEL2"), dfText, 15); 
	m_hms_takecare_evaluserTbl.AddField(_T("HTE_EMAIL"), dfText, 35); 

}
void CHMSTakecareEvalUserDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
	SetMode(VM_NONE);

}
void CHMSTakecareEvalUserDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndTel1.GetDlgCtrlID(), m_szTel1);
	DDX_Text(pDX, m_wndTel2.GetDlgCtrlID(), m_szTel2);
	DDX_Text(pDX, m_wndEmail.GetDlgCtrlID(), m_szEmail);

}
void CHMSTakecareEvalUserDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_nID;
	m_jData[_T("Code")] =  m_szCode;
	m_jData[_T("Name")] =  m_szName;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_nID);
	m_jData[_T("Code")].GetValue(m_szCode);
	m_jData[_T("Name")].GetValue(m_szName);
	}

}
void CHMSTakecareEvalUserDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM HMS_TAKECARE_EVALUSER where hte_id = %ld"), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HTE_ID"), m_nID);
		rs.GetValue(_T("HTE_CODE"), m_szCode);
		rs.GetValue(_T("HTE_NAME"), m_szName);
		rs.GetValue(_T("HTE_TEL1"), m_szTel1);
		rs.GetValue(_T("HTE_TEL2"), m_szTel2);
		rs.GetValue(_T("HTE_EMAIL"), m_szEmail);
	}

}
void CHMSTakecareEvalUserDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	if(GetMode() == VM_ADD)
	{
		szSQL.Format(_T("SELECT coalesce(max(hte_id),0)+1 FROM HMS_TAKECARE_EVALUSER"));
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
	}
	m_hms_takecare_evaluserTbl.SetValue(_T("HTE_ID"), m_nID);
	m_hms_takecare_evaluserTbl.SetValue(_T("HTE_CODE"), m_szCode);
	m_hms_takecare_evaluserTbl.SetValue(_T("HTE_NAME"), m_szName);
	m_hms_takecare_evaluserTbl.SetValue(_T("HTE_TEL1"), m_szTel1);
	m_hms_takecare_evaluserTbl.SetValue(_T("HTE_TEL2"), m_szTel2);
	m_hms_takecare_evaluserTbl.SetValue(_T("HTE_EMAIL"), m_szEmail);
}
void CHMSTakecareEvalUserDialog::SetDefaultValues(){

	m_nID=0;
	m_szCode.Empty();
	m_szName.Empty();
	m_szTel1.Empty();
	m_szTel2.Empty();
	m_szEmail.Empty();
}
int CHMSTakecareEvalUserDialog::SetMode(int nMode){
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
			m_wndCode.SetFocus();
 			break;
		case VM_EDIT: 
			EnableControls(TRUE);
			EnableButtons(TRUE, 3, 4, -1);
			m_wndCode.EnableWindow(FALSE);
			m_wndName.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0,1,2, 5, -1);
 			SetDefaultValues();
			m_wndAdd.SetFocus();
 			break;
 		};
 		UpdateData(FALSE);
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode;
}
/*void CHMSTakecareEvalUserDialog::OnIDChange(){
	
} */
/*void CHMSTakecareEvalUserDialog::OnIDSetfocus(){
	
} */
/*void CHMSTakecareEvalUserDialog::OnIDKillfocus(){
	
} */
int CHMSTakecareEvalUserDialog::OnIDCheckValue(){
	return 0;
} 
/*void CHMSTakecareEvalUserDialog::OnCodeChange(){
	
} */
/*void CHMSTakecareEvalUserDialog::OnCodeSetfocus(){
	
} */
/*void CHMSTakecareEvalUserDialog::OnCodeKillfocus(){
	
} */
int CHMSTakecareEvalUserDialog::OnCodeCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString tmpStr,szSQL;
	CRecord rs(&pMF->m_db);
	int nCount=0;
	if(GetMode() == VM_ADD)
	{
		szSQL.Format(_T("select count(*) as soluong from HMS_TAKECARE_EVALUSER where hte_code = '%s'"),m_szCode);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("soluong"), nCount);
		if(nCount > 0)
			return -1;
	}
	return 0;
   
} 
/*void CHMSTakecareEvalUserDialog::OnNameChange(){
	
} */
/*void CHMSTakecareEvalUserDialog::OnNameSetfocus(){
	
} */
/*void CHMSTakecareEvalUserDialog::OnNameKillfocus(){
	
} */
int CHMSTakecareEvalUserDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSTakecareEvalUserDialog::OnListDblClick(){
	
} 
void CHMSTakecareEvalUserDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nID = ToLong(m_wndList.GetItemText(nNewItem, 0));
	GetDataToScreen();
	SetMode(VM_VIEW);
	
} 
int CHMSTakecareEvalUserDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTakecareEvalUserDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hte_id as ID, hte_code as Code, hte_name as name, hte_tel1||'-'||hte_tel2 as tel, hte_email as email ") \
				_T(" from HMS_TAKECARE_EVALUSER order by hte_name "));
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("tel")),
			rs.GetValue(_T("email")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSTakecareEvalUserDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSTakecareEvalUserDialog();
} 
void CHMSTakecareEvalUserDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSTakecareEvalUserDialog();
} 
void CHMSTakecareEvalUserDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSTakecareEvalUserDialog();
	
} 
void CHMSTakecareEvalUserDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSTakecareEvalUserDialog();
} 
void CHMSTakecareEvalUserDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSTakecareEvalUserDialog();
} 
void CHMSTakecareEvalUserDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSTakecareEvalUserDialog::OnAddHMSTakecareEvalUserDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTakecareEvalUserDialog::OnEditHMSTakecareEvalUserDialog(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTakecareEvalUserDialog::OnDeleteHMSTakecareEvalUserDialog(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL; 
	int nSel  = m_wndList.GetCurSel();
	if(nSel < 0) 
		return 0;

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
		return -1; 
	

	m_nID = str2long(m_wndList.GetItemText(nSel, 0));
 	szSQL.Format(_T("DELETE FROM hms_takecare_evaluser WHERE hte_id = %ld"), m_nID);
	_fmsg(_T("%s"),szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	return 0;
}
int CHMSTakecareEvalUserDialog::OnSaveHMSTakecareEvalUserDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_takecare_evaluserTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE hte_id = %ld"),m_nID);
 		szSQL = m_hms_takecare_evaluserTbl.GetUpdateSQL(_T("hte_id,hte_code"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		OnListLoadData();
 		SetMode(VM_VIEW);
		m_wndAdd.SetFocus();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTakecareEvalUserDialog::OnCancelHMSTakecareEvalUserDialog(){
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
int CHMSTakecareEvalUserDialog::OnHMSTakecareEvalUserDialogListLoadData(){
	return 0;
}
