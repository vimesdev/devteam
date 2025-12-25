#include "HMSSignatureFormLnSetupDlg.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSignatureFormLnSetupDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSSignatureFormLnSetupDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSignatureFormLnSetupDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSignatureFormLnSetupDlg*)pWnd)->OnListDeleteItem();
} 

static void _OnListSwapItemFnc(CWnd* pWnd) {
	((CHMSSignatureFormLnSetupDlg*)pWnd)->OnListSwapItem();
}
/*static void _OnSignNameChangeFnc(CWnd *pWnd){
	((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignNameChange();
} */
/*static void _OnSignNameSetfocusFnc(CWnd *pWnd){
	((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignNameSetfocus();} */ 
/*static void _OnSignNameKillfocusFnc(CWnd *pWnd){
	((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignNameKillfocus();
} */
static int _OnSignNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignNameCheckValue();
} 
/*static void _OnSignDefaultChangeFnc(CWnd *pWnd){
	((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignDefaultChange();
} */
/*static void _OnSignDefaultSetfocusFnc(CWnd *pWnd){
	((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignDefaultSetfocus();} */ 
/*static void _OnSignDefaultKillfocusFnc(CWnd *pWnd){
	((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignDefaultKillfocus();
} */
static int _OnSignDefaultCheckValueFnc(CWnd *pWnd){
	return ((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignDefaultCheckValue();
} 
/*static void _OnSignDescChangeFnc(CWnd *pWnd){
	((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignDescChange();
} */
/*static void _OnSignDescSetfocusFnc(CWnd *pWnd){
	((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignDescSetfocus();} */ 
/*static void _OnSignDescKillfocusFnc(CWnd *pWnd){
	((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignDescKillfocus();
} */
static int _OnSignDescCheckValueFnc(CWnd *pWnd){
	return ((CHMSSignatureFormLnSetupDlg *)pWnd)->OnSignDescCheckValue();
} 
static void _OnSignHangingSelectFnc(CWnd *pWnd){
	 ((CHMSSignatureFormLnSetupDlg*)pWnd)->OnSignHangingSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSignatureFormLnSetupDlg *pVw = (CHMSSignatureFormLnSetupDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSSignatureFormLnSetupDlg *pVw = (CHMSSignatureFormLnSetupDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSSignatureFormLnSetupDlg *pVw = (CHMSSignatureFormLnSetupDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSignatureFormLnSetupDlg *pVw = (CHMSSignatureFormLnSetupDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSignatureFormLnSetupDlg *pVw = (CHMSSignatureFormLnSetupDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSignatureFormLnSetupDlg *pVw = (CHMSSignatureFormLnSetupDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSSignatureFormLnSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSSignatureFormLnSetupDlg*)pWnd)->OnAddHMSSignatureFormLnSetupDlg();
} 
static int _OnEditHMSSignatureFormLnSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSSignatureFormLnSetupDlg*)pWnd)->OnEditHMSSignatureFormLnSetupDlg();
} 
static int _OnDeleteHMSSignatureFormLnSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSSignatureFormLnSetupDlg*)pWnd)->OnDeleteHMSSignatureFormLnSetupDlg();
} 
static int _OnSaveHMSSignatureFormLnSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSSignatureFormLnSetupDlg*)pWnd)->OnSaveHMSSignatureFormLnSetupDlg();
} 
static int _OnCancelHMSSignatureFormLnSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSSignatureFormLnSetupDlg*)pWnd)->OnCancelHMSSignatureFormLnSetupDlg();
} 
CHMSSignatureFormLnSetupDlg::CHMSSignatureFormLnSetupDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSSignatureFormLnSetupDlg::~CHMSSignatureFormLnSetupDlg(){
}
void CHMSSignatureFormLnSetupDlg::OnCreateComponents(){
	m_wndSignListGroup.Create(this, _T("Sign List"), 5, 5, 805, 385);
	m_wndList.Create(this,10, 30, 800, 380); 
	m_wndSignNameLabel.Create(this, _T("Sign Name"), 5, 390, 105, 415);
	m_wndSignName.Create(this,110, 390, 410, 415); 
	m_wndSignDefaultLabel.Create(this, _T("Sign Default"), 415, 390, 515, 415);
	m_wndSignDefault.Create(this,520, 390, 800, 415); 
	m_wndSignDescLabel.Create(this, _T("Sign Description"), 5, 420, 105, 445);
	m_wndSignDesc.Create(this,110, 420, 410, 445); 
	m_wndSignHanging.Create(this, _T("Sign Hanging"), 415, 420, 515, 445);
	m_wndAdd.Create(this, _T("Add"), 295, 450, 375, 475);
	m_wndEdit.Create(this, _T("Edit"), 380, 450, 460, 475);
	m_wndDelete.Create(this, _T("Delete"), 465, 450, 545, 475);
	m_wndSave.Create(this, _T("Save"), 550, 450, 630, 475);
	m_wndCancel.Create(this, _T("Cancel"), 635, 450, 715, 475);
	m_wndClose.Create(this, _T("Close"), 720, 450, 800, 475);

}
void CHMSSignatureFormLnSetupDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSignName.SetLimitText(35);
	m_wndSignName.SetCheckValue(true);
	m_wndSignDefault.SetLimitText(35);
	m_wndSignDefault.SetCheckValue(true);
	//m_wndSignDesc.SetLimitText(35);
	//m_wndSignDesc.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("Sign ID"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(1, _T("Sign Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Sign Default"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Sign Desc"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(4, _T("Sign Hanging"), CFMT_TEXT, 70);
	m_wndList.SetAllowDrag(TRUE);

	m_hms_signature_formlnTbl.SetTableName(_T("hms_signature_formln"));
	m_hms_signature_formlnTbl.AddField(_T("SIGN_FORM_ID"), dfText, 32); 
	m_hms_signature_formlnTbl.AddField(_T("SIGN_ID"), dfLong); 
	m_hms_signature_formlnTbl.AddField(_T("SIGN_NAME"), dfText, 32); 
	m_hms_signature_formlnTbl.AddField(_T("SIGN_DEFAULT"), dfText, 32); 
	m_hms_signature_formlnTbl.AddField(_T("SIGN_DESC"), dfText, 128); 
	m_hms_signature_formlnTbl.AddField(_T("SIGN_HANGING"), dfText, 1); 

}
void CHMSSignatureFormLnSetupDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetEvent(WE_SWAPITEM, _OnListSwapItemFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	
	//m_wndSignName.SetEvent(WE_CHANGE, _OnSignNameChangeFnc);
	//m_wndSignName.SetEvent(WE_SETFOCUS, _OnSignNameSetfocusFnc);
	//m_wndSignName.SetEvent(WE_KILLFOCUS, _OnSignNameKillfocusFnc);
	m_wndSignName.SetEvent(WE_CHECKVALUE, _OnSignNameCheckValueFnc);
	//m_wndSignDefault.SetEvent(WE_CHANGE, _OnSignDefaultChangeFnc);
	//m_wndSignDefault.SetEvent(WE_SETFOCUS, _OnSignDefaultSetfocusFnc);
	//m_wndSignDefault.SetEvent(WE_KILLFOCUS, _OnSignDefaultKillfocusFnc);
	m_wndSignDefault.SetEvent(WE_CHECKVALUE, _OnSignDefaultCheckValueFnc);
	//m_wndSignDesc.SetEvent(WE_CHANGE, _OnSignDescChangeFnc);
	//m_wndSignDesc.SetEvent(WE_SETFOCUS, _OnSignDescSetfocusFnc);
	//m_wndSignDesc.SetEvent(WE_KILLFOCUS, _OnSignDescKillfocusFnc);
	m_wndSignDesc.SetEvent(WE_CHECKVALUE, _OnSignDescCheckValueFnc);
	m_wndSignHanging.SetEvent(WE_CLICK, _OnSignHangingSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
	SetMode(VM_NONE);

}
void CHMSSignatureFormLnSetupDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSignName.GetDlgCtrlID(), m_szSignName);
	DDX_Text(pDX, m_wndSignDefault.GetDlgCtrlID(), m_szSignDefault);
	DDX_Text(pDX, m_wndSignDesc.GetDlgCtrlID(), m_szSignDesc);
	DDX_Check(pDX, m_wndSignHanging.GetDlgCtrlID(), m_bSignHanging);

}
void CHMSSignatureFormLnSetupDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("SignName")] =  m_szSignName;
	m_jData[_T("SignDefault")] =  m_szSignDefault;
	m_jData[_T("SignDesc")] =  m_szSignDesc;
	m_jData[_T("SignHanging")] =  m_bSignHanging;
	}
	else
	{
			
	m_jData[_T("SignName")].GetValue(m_szSignName);
	m_jData[_T("SignDefault")].GetValue(m_szSignDefault);
	m_jData[_T("SignDesc")].GetValue(m_szSignDesc);
	m_jData[_T("SignHanging")].GetValue(m_bSignHanging);
	}

}
void CHMSSignatureFormLnSetupDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_signature_formln WHERE sign_form_id = '%s' and sign_id = %ld"), m_szFormID, m_nSignID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("sign_name"), m_szSignName);
		rs.GetValue(_T("sign_default"), m_szSignDefault);
		rs.GetValue(_T("sign_desc"), m_szSignDesc);
		rs.GetValue(_T("sign_hanging"), m_bSignHanging);

		SetMode(VM_VIEW);
	}
	
}
void CHMSSignatureFormLnSetupDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_signature_formlnTbl.SetValue(_T("SIGN_FORM_ID"), m_szFormID);
	//m_hms_signature_formlnTbl.SetValue(_T("SIGN_ID"), );
	m_hms_signature_formlnTbl.SetValue(_T("SIGN_NAME"), m_szSignName);
	m_hms_signature_formlnTbl.SetValue(_T("SIGN_DEFAULT"), m_szSignDefault);
	m_hms_signature_formlnTbl.SetValue(_T("SIGN_DESC"), m_szSignDesc);
	m_hms_signature_formlnTbl.SetValue(_T("SIGN_HANGING"), m_bSignHanging ? L"Y" : L"N");
}
void CHMSSignatureFormLnSetupDlg::SetDefaultValues(){

	m_szSignName.Empty();
	m_szSignDefault.Empty();
	m_szSignDesc.Empty();
	m_bSignHanging=FALSE;

}
int CHMSSignatureFormLnSetupDlg::SetMode(int nMode){
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
void CHMSSignatureFormLnSetupDlg::OnListDblClick(){
	
} 
void CHMSSignatureFormLnSetupDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nSignID = ToInt(m_wndList.GetItemText(nNewItem, 0));
	GetDataToScreen();

} 
int CHMSSignatureFormLnSetupDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSignatureFormLnSetupDlg::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_signature_formln WHERE sign_form_id = '%s' ORDER BY sign_id"), m_szFormID);
	_tprintf(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("sign_id")),
			rs.GetValue(_T("sign_name")),
			rs.GetValue(_T("sign_default")),
			rs.GetValue(_T("sign_desc")),
			rs.GetValue(_T("sign_hanging")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CHMSSignatureFormLnSetupDlg::OnSignNameChange(){
	
} */
/*void CHMSSignatureFormLnSetupDlg::OnSignNameSetfocus(){
	
} */
/*void CHMSSignatureFormLnSetupDlg::OnSignNameKillfocus(){
	
} */
int CHMSSignatureFormLnSetupDlg::OnSignNameCheckValue(){
	return 0;
} 
/*void CHMSSignatureFormLnSetupDlg::OnSignDefaultChange(){
	
} */
/*void CHMSSignatureFormLnSetupDlg::OnSignDefaultSetfocus(){
	
} */
/*void CHMSSignatureFormLnSetupDlg::OnSignDefaultKillfocus(){
	
} */
int CHMSSignatureFormLnSetupDlg::OnSignDefaultCheckValue(){
	return 0;
} 
/*void CHMSSignatureFormLnSetupDlg::OnSignDescChange(){
	
} */
/*void CHMSSignatureFormLnSetupDlg::OnSignDescSetfocus(){
	
} */
/*void CHMSSignatureFormLnSetupDlg::OnSignDescKillfocus(){
	
} */
int CHMSSignatureFormLnSetupDlg::OnSignDescCheckValue(){
	return 0;
} 
	void CHMSSignatureFormLnSetupDlg::OnSignHangingSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSSignatureFormLnSetupDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSSignatureFormLnSetupDlg();
} 
void CHMSSignatureFormLnSetupDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSSignatureFormLnSetupDlg();
} 
void CHMSSignatureFormLnSetupDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSSignatureFormLnSetupDlg();
} 
void CHMSSignatureFormLnSetupDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSSignatureFormLnSetupDlg();
} 
void CHMSSignatureFormLnSetupDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSSignatureFormLnSetupDlg();
} 
void CHMSSignatureFormLnSetupDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSSignatureFormLnSetupDlg::OnAddHMSSignatureFormLnSetupDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSignatureFormLnSetupDlg::OnEditHMSSignatureFormLnSetupDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSignatureFormLnSetupDlg::OnDeleteHMSSignatureFormLnSetupDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM hms_signature_formln WHERE  sign_form_id = '%s' and sign_id = %ld"), m_szFormID, m_nSignID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSSignatureFormLnSetupDlg();
		OnListLoadData();
 	}
	return 0;
}
int CHMSSignatureFormLnSetupDlg::OnSaveHMSSignatureFormLnSetupDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_signature_formlnTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE sign_form_id = '%s' and sign_id = %ld "), m_szFormID, m_nSignID);
 		szSQL = m_hms_signature_formlnTbl.GetUpdateSQL(_T("sign_form_id,sign_id"));
 		szSQL += szWhere;
 	}

 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSSignatureFormLnSetupDlgListLoadData();
		OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSignatureFormLnSetupDlg::OnCancelHMSSignatureFormLnSetupDlg(){
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
int CHMSSignatureFormLnSetupDlg::OnHMSSignatureFormLnSetupDlgListLoadData(){
	return 0;
}

void CHMSSignatureFormLnSetupDlg::OnListSwapItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//_msg(L"dzo");
	int nRet = 0;
	int nLineID;
	CString szSQL, szSignName;

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		nLineID = str2long(m_wndList.GetItemText(i, 1));
		szSignName = m_wndList.GetItemText(i, 1);
		szSQL.Format(_T("UPDATE hms_signature_formln SET sign_id = %d+1 WHERE sign_form_id = '%s' and sign_name = '%s'"), i, m_szFormID, szSignName);
		nRet = pMF->ExecSQL(szSQL);
		if (nRet < 0)
		{
			pMF->Rollback();
			break;
		}
	}
	
	pMF->Commit();

	OnListLoadData();
}