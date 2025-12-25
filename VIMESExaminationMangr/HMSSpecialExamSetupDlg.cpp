#include "HMSSpecialExamSetupDlg.h"
#include "MainFrm.h"
/*static void _OnTextChangeFnc(CWnd *pWnd){
	((CHMSSpecialExamSetupDlg *)pWnd)->OnTextChange();
} */
/*static void _OnTextSetfocusFnc(CWnd *pWnd){
	((CHMSSpecialExamSetupDlg *)pWnd)->OnTextSetfocus();} */ 
/*static void _OnTextKillfocusFnc(CWnd *pWnd){
	((CHMSSpecialExamSetupDlg *)pWnd)->OnTextKillfocus();
} */
static int _OnTextCheckValueFnc(CWnd *pWnd){
	return ((CHMSSpecialExamSetupDlg *)pWnd)->OnTextCheckValue();
} 
static void _OnArgumentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSpecialExamSetupDlg* )pWnd)->OnArgumentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnArgumentSelendokFnc(CWnd *pWnd){
	((CHMSSpecialExamSetupDlg *)pWnd)->OnArgumentSelendok();
}
/*static void _OnArgumentSetfocusFnc(CWnd *pWnd){
	((CHMSSpecialExamSetupDlg *)pWnd)->OnArgumentKillfocus();
}*/
/*static void _OnArgumentKillfocusFnc(CWnd *pWnd){
	((CHMSSpecialExamSetupDlg *)pWnd)->OnArgumentKillfocus();
}*/
static long _OnArgumentLoadDataFnc(CWnd *pWnd){
	return ((CHMSSpecialExamSetupDlg *)pWnd)->OnArgumentLoadData();
}
/*static void _OnArgumentAddNewFnc(CWnd *pWnd){
	((CHMSSpecialExamSetupDlg *)pWnd)->OnArgumentAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSpecialExamSetupDlg *pVw = (CHMSSpecialExamSetupDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSpecialExamSetupDlg *pVw = (CHMSSpecialExamSetupDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSpecialExamSetupDlg *pVw = (CHMSSpecialExamSetupDlg *)pWnd;
	pVw->OnCancelSelect();
} 
CHMSSpecialExamSetupDlg::CHMSSpecialExamSetupDlg(CWnd *pParent, CString szType):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szType = szType;
}
CHMSSpecialExamSetupDlg::~CHMSSpecialExamSetupDlg(){
}
void CHMSSpecialExamSetupDlg::OnCreateComponents(){
	m_wndTextLabel.Create(this, _T("Text"), 5, 5, 85, 30);
	m_wndText.Create(this,5, 35, 405, 110, TRUE, FALSE, TRUE); 
	m_wndArgumentLabel.Create(this, _T("Argument"), 5, 115, 85, 140);
	m_wndArgument.Create(this,90, 115, 220, 140); 
	m_wndAdd.Create(this, _T("&Add"), 225, 115, 250, 140);
	m_wndSave.Create(this, _T("&Save"), 280, 115, 340, 140);
	m_wndCancel.Create(this, _T("&Cancel"), 345, 115, 405, 140);

}
void CHMSSpecialExamSetupDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndText.SetLimitText(256);
	m_wndText.SetCheckValue(true);
	m_wndArgument.SetCheckValue(true);
	m_wndArgument.LimitText(35);


	m_wndArgument.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndArgument.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSSpecialExamSetupDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndText.SetEvent(WE_CHANGE, _OnTextChangeFnc);
	//m_wndText.SetEvent(WE_SETFOCUS, _OnTextSetfocusFnc);
	//m_wndText.SetEvent(WE_KILLFOCUS, _OnTextKillfocusFnc);
	m_wndText.SetEvent(WE_CHECKVALUE, _OnTextCheckValueFnc);
	m_wndArgument.SetEvent(WE_SELENDOK, _OnArgumentSelendokFnc);
	//m_wndArgument.SetEvent(WE_SETFOCUS, _OnArgumentSetfocusFnc);
	//m_wndArgument.SetEvent(WE_KILLFOCUS, _OnArgumentKillfocusFnc);
	m_wndArgument.SetEvent(WE_SELCHANGE, _OnArgumentSelectChangeFnc);
	m_wndArgument.SetEvent(WE_LOADDATA, _OnArgumentLoadDataFnc);
	//m_wndArgument.SetEvent(WE_ADDNEW, _OnArgumentAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	EnableControls();
	GetDataToScreen();
}
void CHMSSpecialExamSetupDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndText.GetDlgCtrlID(), m_szText);
	DDX_TextEx(pDX, m_wndArgument.GetDlgCtrlID(), m_szArgumentKey);

}
void CHMSSpecialExamSetupDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Text")] =  m_szText;
	m_jData[_T("Argument")] =  m_szArgumentKey;
	}
	else
	{
			
	m_jData[_T("Text")].GetValue(m_szText);
	m_jData[_T("Argument")].GetValue(m_szArgumentKey);
	}

}
void CHMSSpecialExamSetupDlg::SetDefaultValues(){

	m_szText.Empty();
	m_szArgumentKey.Empty();

}
int CHMSSpecialExamSetupDlg::SetMode(int nMode){
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
/*void CHMSSpecialExamSetupDlg::OnTextChange(){
	
} */
/*void CHMSSpecialExamSetupDlg::OnTextSetfocus(){
	
} */
/*void CHMSSpecialExamSetupDlg::OnTextKillfocus(){
	
} */
int CHMSSpecialExamSetupDlg::OnTextCheckValue(){
	return 0;
} 
void CHMSSpecialExamSetupDlg::OnArgumentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSpecialExamSetupDlg::OnArgumentSelendok(){
	 
}
/*void CHMSSpecialExamSetupDlg::OnArgumentSetfocus(){
	
}*/
/*void CHMSSpecialExamSetupDlg::OnArgumentKillfocus(){
	
}*/
long CHMSSpecialExamSetupDlg::OnArgumentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szID;
	szID.Format(_T("KCK_%s_THONG_SO"), m_szType);
	return pMF->LoadSelectionList(&m_wndArgument, szID, m_szArgumentKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndArgument.IsSearchKey() && !m_szArgumentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szArgumentKey
};
	m_wndArgument.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndArgument.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSpecialExamSetupDlg::OnArgumentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSpecialExamSetupDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	m_szText.AppendFormat(_T("{%s}"), m_szArgumentKey);
	UpdateData(FALSE);
	m_wndText.SetFocus();
} 
void CHMSSpecialExamSetupDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CString szSQL, szWhere;

	/*Gen sql*/
	CDbfMap dbm;
	dbm.SetTableName(L"sys_sel");
	dbm.AddField(L"ss_id", dfText, 35);
	dbm.AddField(L"ss_code", dfText, 30);
	dbm.AddField(L"ss_desc", dfText, 256);

	dbm.SetValue(L"ss_id", L"KCK_MAU_KQ");
	dbm.SetValue(L"ss_code", m_szType);
	dbm.SetValue(L"ss_desc", m_szText);

	szSQL = dbm.GetUpdateSQL(L"ss_id,ss_code");
	szWhere.Format(
		_T(" WHERE ss_id = 'KCK_MAU_KQ' and ss_code = '%s'")
		, m_szType);
	szSQL += szWhere;
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		CGuiDialog::OnOK();
	}
	else
	{
		szSQL = dbm.GetInsertSQL();
		nRet = pMF->ExecSQL(szSQL);
		if (nRet > 0)
			CGuiDialog::OnOK();
	}

} 
void CHMSSpecialExamSetupDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 


void CHMSSpecialExamSetupDlg::GetDataToScreen()
{
	// TODO: Add your implementation code here.
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(
		_T("select ss_desc from sys_sel") \
		_T(" where ss_id = 'KCK_MAU_KQ'") \
		_T(" and ss_code = '%s'")
	, m_szType);
	rs.ExecSQL(szSQL);
	m_szText = rs.GetStringValue();
	UpdateData(FALSE);
}
