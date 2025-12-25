#include "HMSFastDiagnosticDialog.h"
#include "MainFrm.h"
static void _OnDiagnosticICDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFastDiagnosticDialog* )pWnd)->OnDiagnosticICDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDiagnosticICDSelendokFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICDSelendok();
}
/*static void _OnDiagnosticICDSetfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICDKillfocus();
}*/
/*static void _OnDiagnosticICDKillfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICDKillfocus();
}*/
static long _OnDiagnosticICDLoadDataFnc(CWnd *pWnd){
	return ((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICDLoadData();
}
/*static void _OnDiagnosticICDAddNewFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICDAddNew();
}*/
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSFastDiagnosticDialog *)pWnd)->OnConclusionCheckValue();
} 
static void _OnDiagnosticICD2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFastDiagnosticDialog* )pWnd)->OnDiagnosticICD2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDiagnosticICD2SelendokFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD2Selendok();
}
/*static void _OnDiagnosticICD2SetfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD2Killfocus();
}*/
/*static void _OnDiagnosticICD2KillfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD2Killfocus();
}*/
static long _OnDiagnosticICD2LoadDataFnc(CWnd *pWnd){
	return ((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD2LoadData();
}
/*static void _OnDiagnosticICD2AddNewFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD2AddNew();
}*/
static void _OnDiagnosticICD3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFastDiagnosticDialog* )pWnd)->OnDiagnosticICD3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDiagnosticICD3SelendokFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD3Selendok();
}
/*static void _OnDiagnosticICD3SetfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD3Killfocus();
}*/
/*static void _OnDiagnosticICD3KillfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD3Killfocus();
}*/
static long _OnDiagnosticICD3LoadDataFnc(CWnd *pWnd){
	return ((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD3LoadData();
}
/*static void _OnDiagnosticICD3AddNewFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD3AddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFastDiagnosticDialog *pVw = (CHMSFastDiagnosticDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFastDiagnosticDialog *pVw = (CHMSFastDiagnosticDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnDiagnosticICD4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFastDiagnosticDialog* )pWnd)->OnDiagnosticICD4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDiagnosticICD4SelendokFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD4Selendok();
}
/*static void _OnDiagnosticICD4SetfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD4Killfocus();
}*/
/*static void _OnDiagnosticICD4KillfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD4Killfocus();
}*/
static long _OnDiagnosticICD4LoadDataFnc(CWnd *pWnd){
	return ((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD4LoadData();
}
/*static void _OnDiagnosticICD4AddNewFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD4AddNew();
}*/
static void _OnDiagnosticICD5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFastDiagnosticDialog* )pWnd)->OnDiagnosticICD5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDiagnosticICD5SelendokFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD5Selendok();
}
/*static void _OnDiagnosticICD5SetfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD5Killfocus();
}*/
/*static void _OnDiagnosticICD5KillfocusFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD5Killfocus();
}*/
static long _OnDiagnosticICD5LoadDataFnc(CWnd *pWnd){
	return ((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD5LoadData();
}
/*static void _OnDiagnosticICD5AddNewFnc(CWnd *pWnd){
	((CHMSFastDiagnosticDialog *)pWnd)->OnDiagnosticICD5AddNew();
}*/
static int _OnAddHMSFastDiagnosticDialogFnc(CWnd *pWnd){
	 return ((CHMSFastDiagnosticDialog*)pWnd)->OnAddHMSFastDiagnosticDialog();
} 
static int _OnEditHMSFastDiagnosticDialogFnc(CWnd *pWnd){
	 return ((CHMSFastDiagnosticDialog*)pWnd)->OnEditHMSFastDiagnosticDialog();
} 
static int _OnDeleteHMSFastDiagnosticDialogFnc(CWnd *pWnd){
	 return ((CHMSFastDiagnosticDialog*)pWnd)->OnDeleteHMSFastDiagnosticDialog();
} 
static int _OnSaveHMSFastDiagnosticDialogFnc(CWnd *pWnd){
	 return ((CHMSFastDiagnosticDialog*)pWnd)->OnSaveHMSFastDiagnosticDialog();
} 
static int _OnCancelHMSFastDiagnosticDialogFnc(CWnd *pWnd){
	 return ((CHMSFastDiagnosticDialog*)pWnd)->OnCancelHMSFastDiagnosticDialog();
} 
CHMSFastDiagnosticDialog::CHMSFastDiagnosticDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 505;
	SetDefaultValues();
}
CHMSFastDiagnosticDialog::~CHMSFastDiagnosticDialog(){
}
void CHMSFastDiagnosticDialog::OnCreateComponents(){
	m_wndConclusionInformation.Create(this, _T("Conclusion Information"), 5, 5, 595, 455);
	m_wndDiagnosticICDLabel.Create(this, _T("Diagnostic ICD10"), 10, 30, 130, 55);
	m_wndDiagnosticICD.Create(this,135, 30, 590, 55); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 180, 130, 205);
	m_wndConclusion.Create(this,135, 180, 590, 450); 
	m_wndDiagnosticICDLabel.Create(this, _T("DiagnosticICD2"), 10, 60, 130, 85);
	m_wndDiagnosticICD2.Create(this,135, 60, 590, 85); 
	m_wndDiagnosticICDLabel.Create(this, _T("DiagnosticICD3"), 10, 90, 130, 115);
	m_wndDiagnosticICD3.Create(this,135, 90, 590, 115); 
	m_wndSave.Create(this, _T("&Save"), 385, 460, 485, 485);
	m_wndClose.Create(this, _T("&Close"), 490, 460, 590, 485);
	m_wndDiagnosticICD4Label.Create(this, _T("DiagnosticICD4"), 10, 120, 130, 145);
	m_wndDiagnosticICD4.Create(this,135, 120, 590, 145); 
	m_wndDiagnosticICD5Label.Create(this, _T("DiagnosticICD5"), 10, 150, 130, 175);
	m_wndDiagnosticICD5.Create(this,135, 150, 590, 175); 

}
void CHMSFastDiagnosticDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDiagnosticICD.SetCheckValue(true);
	m_wndDiagnosticICD.LimitText(35);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);
	m_wndDiagnosticICD2.SetCheckValue(true);
	m_wndDiagnosticICD2.LimitText(35);
	m_wndDiagnosticICD3.SetCheckValue(true);
	m_wndDiagnosticICD3.LimitText(35);
	m_wndDiagnosticICD4.SetCheckValue(true);
	m_wndDiagnosticICD4.LimitText(35);
	m_wndDiagnosticICD5.SetCheckValue(true);
	m_wndDiagnosticICD5.LimitText(35);


	m_wndDiagnosticICD.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDiagnosticICD.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDiagnosticICD2.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDiagnosticICD2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDiagnosticICD3.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDiagnosticICD3.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDiagnosticICD4.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDiagnosticICD4.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDiagnosticICD5.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDiagnosticICD5.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSFastDiagnosticDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDiagnosticICD.SetEvent(WE_SELENDOK, _OnDiagnosticICDSelendokFnc);
	//m_wndDiagnosticICD.SetEvent(WE_SETFOCUS, _OnDiagnosticICDSetfocusFnc);
	//m_wndDiagnosticICD.SetEvent(WE_KILLFOCUS, _OnDiagnosticICDKillfocusFnc);
	m_wndDiagnosticICD.SetEvent(WE_SELCHANGE, _OnDiagnosticICDSelectChangeFnc);
	m_wndDiagnosticICD.SetEvent(WE_LOADDATA, _OnDiagnosticICDLoadDataFnc);
	//m_wndDiagnosticICD.SetEvent(WE_ADDNEW, _OnDiagnosticICDAddNewFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndDiagnosticICD2.SetEvent(WE_SELENDOK, _OnDiagnosticICD2SelendokFnc);
	//m_wndDiagnosticICD2.SetEvent(WE_SETFOCUS, _OnDiagnosticICD2SetfocusFnc);
	//m_wndDiagnosticICD2.SetEvent(WE_KILLFOCUS, _OnDiagnosticICD2KillfocusFnc);
	m_wndDiagnosticICD2.SetEvent(WE_SELCHANGE, _OnDiagnosticICD2SelectChangeFnc);
	m_wndDiagnosticICD2.SetEvent(WE_LOADDATA, _OnDiagnosticICD2LoadDataFnc);
	//m_wndDiagnosticICD2.SetEvent(WE_ADDNEW, _OnDiagnosticICD2AddNewFnc);
	m_wndDiagnosticICD3.SetEvent(WE_SELENDOK, _OnDiagnosticICD3SelendokFnc);
	//m_wndDiagnosticICD3.SetEvent(WE_SETFOCUS, _OnDiagnosticICD3SetfocusFnc);
	//m_wndDiagnosticICD3.SetEvent(WE_KILLFOCUS, _OnDiagnosticICD3KillfocusFnc);
	m_wndDiagnosticICD3.SetEvent(WE_SELCHANGE, _OnDiagnosticICD3SelectChangeFnc);
	m_wndDiagnosticICD3.SetEvent(WE_LOADDATA, _OnDiagnosticICD3LoadDataFnc);
	//m_wndDiagnosticICD3.SetEvent(WE_ADDNEW, _OnDiagnosticICD3AddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndDiagnosticICD4.SetEvent(WE_SELENDOK, _OnDiagnosticICD4SelendokFnc);
	//m_wndDiagnosticICD4.SetEvent(WE_SETFOCUS, _OnDiagnosticICD4SetfocusFnc);
	//m_wndDiagnosticICD4.SetEvent(WE_KILLFOCUS, _OnDiagnosticICD4KillfocusFnc);
	m_wndDiagnosticICD4.SetEvent(WE_SELCHANGE, _OnDiagnosticICD4SelectChangeFnc);
	m_wndDiagnosticICD4.SetEvent(WE_LOADDATA, _OnDiagnosticICD4LoadDataFnc);
	//m_wndDiagnosticICD4.SetEvent(WE_ADDNEW, _OnDiagnosticICD4AddNewFnc);
	m_wndDiagnosticICD5.SetEvent(WE_SELENDOK, _OnDiagnosticICD5SelendokFnc);
	//m_wndDiagnosticICD5.SetEvent(WE_SETFOCUS, _OnDiagnosticICD5SetfocusFnc);
	//m_wndDiagnosticICD5.SetEvent(WE_KILLFOCUS, _OnDiagnosticICD5KillfocusFnc);
	m_wndDiagnosticICD5.SetEvent(WE_SELCHANGE, _OnDiagnosticICD5SelectChangeFnc);
	m_wndDiagnosticICD5.SetEvent(WE_LOADDATA, _OnDiagnosticICD5LoadDataFnc);
	//m_wndDiagnosticICD5.SetEvent(WE_ADDNEW, _OnDiagnosticICD5AddNewFnc);
	SetMode(VM_NONE);

}
void CHMSFastDiagnosticDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDiagnosticICD.GetDlgCtrlID(), m_szDiagnosticICDKey);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_TextEx(pDX, m_wndDiagnosticICD2.GetDlgCtrlID(), m_szDiagnosticICD2Key);
	DDX_TextEx(pDX, m_wndDiagnosticICD3.GetDlgCtrlID(), m_szDiagnosticICD3Key);
	DDX_TextEx(pDX, m_wndDiagnosticICD4.GetDlgCtrlID(), m_szDiagnosticICD4Key);
	DDX_TextEx(pDX, m_wndDiagnosticICD5.GetDlgCtrlID(), m_szDiagnosticICD5Key);

}
void CHMSFastDiagnosticDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFastDiagnosticDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFastDiagnosticDialog::SetDefaultValues(){

	m_szDiagnosticICDKey.Empty();
	m_szConclusion.Empty();
	m_szDiagnosticICD2Key.Empty();
	m_szDiagnosticICD3Key.Empty();
	m_szDiagnosticICD4Key.Empty();
	m_szDiagnosticICD5Key.Empty();

}
int CHMSFastDiagnosticDialog::SetMode(int nMode){
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
void CHMSFastDiagnosticDialog::OnDiagnosticICDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFastDiagnosticDialog::OnDiagnosticICDSelendok(){
	 
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICDSetfocus(){
	
}*/
/*void CHMSFastDiagnosticDialog::OnDiagnosticICDKillfocus(){
	
}*/
long CHMSFastDiagnosticDialog::OnDiagnosticICDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiagnosticICD.IsSearchKey() && !m_szDiagnosticICDKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDiagnosticICDKey
};
	m_wndDiagnosticICD.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosticICD.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFastDiagnosticDialog::OnConclusionChange(){
	
} */
/*void CHMSFastDiagnosticDialog::OnConclusionSetfocus(){
	
} */
/*void CHMSFastDiagnosticDialog::OnConclusionKillfocus(){
	
} */
int CHMSFastDiagnosticDialog::OnConclusionCheckValue(){
	return 0;
} 
void CHMSFastDiagnosticDialog::OnDiagnosticICD2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFastDiagnosticDialog::OnDiagnosticICD2Selendok(){
	 
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD2Setfocus(){
	
}*/
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD2Killfocus(){
	
}*/
long CHMSFastDiagnosticDialog::OnDiagnosticICD2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiagnosticICD2.IsSearchKey() && !m_szDiagnosticICD2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDiagnosticICD2Key
};
	m_wndDiagnosticICD2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosticICD2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFastDiagnosticDialog::OnDiagnosticICD3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFastDiagnosticDialog::OnDiagnosticICD3Selendok(){
	 
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD3Setfocus(){
	
}*/
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD3Killfocus(){
	
}*/
long CHMSFastDiagnosticDialog::OnDiagnosticICD3LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiagnosticICD3.IsSearchKey() && !m_szDiagnosticICD3Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDiagnosticICD3Key
};
	m_wndDiagnosticICD3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosticICD3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFastDiagnosticDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFastDiagnosticDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFastDiagnosticDialog::OnDiagnosticICD4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFastDiagnosticDialog::OnDiagnosticICD4Selendok(){
	 
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD4Setfocus(){
	
}*/
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD4Killfocus(){
	
}*/
long CHMSFastDiagnosticDialog::OnDiagnosticICD4LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiagnosticICD4.IsSearchKey() && !m_szDiagnosticICD4Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDiagnosticICD4Key
};
	m_wndDiagnosticICD4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosticICD4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFastDiagnosticDialog::OnDiagnosticICD5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFastDiagnosticDialog::OnDiagnosticICD5Selendok(){
	 
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD5Setfocus(){
	
}*/
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD5Killfocus(){
	
}*/
long CHMSFastDiagnosticDialog::OnDiagnosticICD5LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiagnosticICD5.IsSearchKey() && !m_szDiagnosticICD5Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDiagnosticICD5Key
};
	m_wndDiagnosticICD5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosticICD5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSFastDiagnosticDialog::OnAddHMSFastDiagnosticDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFastDiagnosticDialog::OnEditHMSFastDiagnosticDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFastDiagnosticDialog::OnDeleteHMSFastDiagnosticDialog(){
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
 		OnCancelHMSFastDiagnosticDialog();
 	}
	return 0;
}
int CHMSFastDiagnosticDialog::OnSaveHMSFastDiagnosticDialog(){
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
 		//OnHMSFastDiagnosticDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFastDiagnosticDialog::OnCancelHMSFastDiagnosticDialog(){
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
int CHMSFastDiagnosticDialog::OnHMSFastDiagnosticDialogListLoadData(){
	return 0;
}
