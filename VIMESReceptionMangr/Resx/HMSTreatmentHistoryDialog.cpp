#include "HMSTreatmentHistoryDialog.h"
#include "MainFrm.h"
/*static void _OnLastNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnLastNameChange();
} */
/*static void _OnLastNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnLastNameSetfocus();} */ 
/*static void _OnLastNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnLastNameKillfocus();
} */
static int _OnLastNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnLastNameCheckValue();
} 
/*static void _OnMidNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnMidNameChange();
} */
/*static void _OnMidNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnMidNameSetfocus();} */ 
/*static void _OnMidNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnMidNameKillfocus();
} */
static int _OnMidNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnMidNameCheckValue();
} 
/*static void _OnFirstNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnFirstNameChange();
} */
/*static void _OnFirstNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnFirstNameSetfocus();} */ 
/*static void _OnFirstNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnFirstNameKillfocus();
} */
static int _OnFirstNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnFirstNameCheckValue();
} 
/*static void _OnYOBChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnYOBChange();
} */
/*static void _OnYOBSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnYOBSetfocus();} */ 
/*static void _OnYOBKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnYOBKillfocus();
} */
static int _OnYOBCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnYOBCheckValue();
} 
static void _OnAddressSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentHistoryDialog* )pWnd)->OnAddressSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAddressSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnAddressSelendok();
}
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnAddressKillfocus();
}*/
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnAddressKillfocus();
}*/
static long _OnAddressLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnAddressLoadData();
}
/*static void _OnAddressAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnAddressAddNew();
}*/
/*static void _OnExamineChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnExamineChange();
} */
/*static void _OnExamineSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnExamineSetfocus();} */ 
/*static void _OnExamineKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnExamineKillfocus();
} */
static int _OnExamineCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnExamineCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnDiagnosticCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSTreatmentHistoryDialog *pVw = (CHMSTreatmentHistoryDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListPatientLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog*)pWnd)->OnListPatientLoadData();
} 
static void _OnListPatientDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog*)pWnd)->OnListPatientDblClick();
} 
static void _OnListPatientSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentHistoryDialog*)pWnd)->OnListPatientSelectChange(nOldItem, nNewItem);
} 
static int _OnListPatientDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnListPatientDeleteItem();
} 
static long _OnListDocumentLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog*)pWnd)->OnListDocumentLoadData();
} 
static void _OnListDocumentDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog*)pWnd)->OnListDocumentDblClick();
} 
static void _OnListDocumentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentHistoryDialog*)pWnd)->OnListDocumentSelectChange(nOldItem, nNewItem);
} 
static int _OnListDocumentDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnListDocumentDeleteItem();
} 
static int _OnAddHMSTreatmentHistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnAddHMSTreatmentHistoryDialog();
} 
static int _OnEditHMSTreatmentHistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnEditHMSTreatmentHistoryDialog();
} 
static int _OnDeleteHMSTreatmentHistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnDeleteHMSTreatmentHistoryDialog();
} 
static int _OnSaveHMSTreatmentHistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnSaveHMSTreatmentHistoryDialog();
} 
static int _OnCancelHMSTreatmentHistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnCancelHMSTreatmentHistoryDialog();
} 
CHMSTreatmentHistoryDialog::CHMSTreatmentHistoryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSTreatmentHistoryDialog::~CHMSTreatmentHistoryDialog(){
}
void CHMSTreatmentHistoryDialog::OnCreateComponents(){
	m_wndInformationSearch.Create(this, _T("Information Search"), 5, 5, 800, 120);
	m_wndGroupPatient.Create(this, _T("Patient List"), 5, 125, 800, 375);
	m_wndGroupDocument.Create(this, _T("Treatment Document List"), 5, 380, 800, 560);
	m_wndLastNameLabel.Create(this, _T("First Name"), 10, 30, 95, 55);
	m_wndLastName.Create(this,100, 30, 180, 55); 
	m_wndMidNameLabel.Create(this, _T("Mid Name"), 185, 30, 270, 55);
	m_wndMidName.Create(this,275, 30, 355, 55); 
	m_wndFirstNameLabel.Create(this, _T("Last Name"), 360, 30, 445, 55);
	m_wndFirstName.Create(this,450, 30, 530, 55); 
	m_wndYOBLabel.Create(this, _T("YOB"), 535, 30, 615, 55);
	m_wndYOB.Create(this,620, 30, 710, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 60, 95, 85);
	m_wndAddress.Create(this,100, 60, 710, 85); 
	m_wndExamineLabel.Create(this, _T("Examine"), 10, 90, 95, 115);
	m_wndExamine.Create(this,100, 90, 355, 115); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 360, 90, 445, 115);
	m_wndDiagnostic.Create(this,450, 90, 710, 115); 
	m_wndSearch.Create(this, _T("Search"), 715, 90, 795, 115);
	m_wndListPatient.Create(this,10, 149, 795, 369); 
	m_wndListDocument.Create(this,10, 404, 795, 554); 

}
void CHMSTreatmentHistoryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLastName.SetLimitText(1024);
	m_wndLastName.SetCheckValue(true);
	m_wndMidName.SetLimitText(1024);
	m_wndMidName.SetCheckValue(true);
	m_wndFirstName.SetLimitText(1024);
	m_wndFirstName.SetCheckValue(true);
	m_wndYOB.SetLimitText(16);
	m_wndYOB.SetCheckValue(true);
	m_wndAddress.SetCheckValue(true);
	m_wndAddress.LimitText(1024);
	m_wndExamine.SetLimitText(35);
	m_wndExamine.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(35);
	m_wndDiagnostic.SetCheckValue(true);







}
void CHMSTreatmentHistoryDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndLastName.SetEvent(WE_CHANGE, _OnLastNameChangeFnc);
	//m_wndLastName.SetEvent(WE_SETFOCUS, _OnLastNameSetfocusFnc);
	//m_wndLastName.SetEvent(WE_KILLFOCUS, _OnLastNameKillfocusFnc);
	m_wndLastName.SetEvent(WE_CHECKVALUE, _OnLastNameCheckValueFnc);
	//m_wndMidName.SetEvent(WE_CHANGE, _OnMidNameChangeFnc);
	//m_wndMidName.SetEvent(WE_SETFOCUS, _OnMidNameSetfocusFnc);
	//m_wndMidName.SetEvent(WE_KILLFOCUS, _OnMidNameKillfocusFnc);
	m_wndMidName.SetEvent(WE_CHECKVALUE, _OnMidNameCheckValueFnc);
	//m_wndFirstName.SetEvent(WE_CHANGE, _OnFirstNameChangeFnc);
	//m_wndFirstName.SetEvent(WE_SETFOCUS, _OnFirstNameSetfocusFnc);
	//m_wndFirstName.SetEvent(WE_KILLFOCUS, _OnFirstNameKillfocusFnc);
	m_wndFirstName.SetEvent(WE_CHECKVALUE, _OnFirstNameCheckValueFnc);
	//m_wndYOB.SetEvent(WE_CHANGE, _OnYOBChangeFnc);
	//m_wndYOB.SetEvent(WE_SETFOCUS, _OnYOBSetfocusFnc);
	//m_wndYOB.SetEvent(WE_KILLFOCUS, _OnYOBKillfocusFnc);
	m_wndYOB.SetEvent(WE_CHECKVALUE, _OnYOBCheckValueFnc);
	m_wndAddress.SetEvent(WE_SELENDOK, _OnAddressSelendokFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_SELCHANGE, _OnAddressSelectChangeFnc);
	m_wndAddress.SetEvent(WE_LOADDATA, _OnAddressLoadDataFnc);
	//m_wndAddress.SetEvent(WE_ADDNEW, _OnAddressAddNewFnc);
	//m_wndExamine.SetEvent(WE_CHANGE, _OnExamineChangeFnc);
	//m_wndExamine.SetEvent(WE_SETFOCUS, _OnExamineSetfocusFnc);
	//m_wndExamine.SetEvent(WE_KILLFOCUS, _OnExamineKillfocusFnc);
	m_wndExamine.SetEvent(WE_CHECKVALUE, _OnExamineCheckValueFnc);
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndListPatient.SetEvent(WE_SELCHANGE, _OnListPatientSelectChangeFnc);
	m_wndListPatient.SetEvent(WE_LOADDATA, _OnListPatientLoadDataFnc);
	m_wndListPatient.SetEvent(WE_DBLCLICK, _OnListPatientDblClickFnc);
	m_wndListPatient.AddEvent(1, _T("Delete"), _OnListPatientDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListDocument.SetEvent(WE_SELCHANGE, _OnListDocumentSelectChangeFnc);
	m_wndListDocument.SetEvent(WE_LOADDATA, _OnListDocumentLoadDataFnc);
	m_wndListDocument.SetEvent(WE_DBLCLICK, _OnListDocumentDblClickFnc);
	m_wndListDocument.AddEvent(1, _T("Delete"), _OnListDocumentDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CHMSTreatmentHistoryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndLastName.GetDlgCtrlID(), m_szLastName);
	DDX_Text(pDX, m_wndMidName.GetDlgCtrlID(), m_szMidName);
	DDX_Text(pDX, m_wndFirstName.GetDlgCtrlID(), m_szFirstName);
	DDX_Text(pDX, m_wndYOB.GetDlgCtrlID(), m_nYOB);
	DDX_TextEx(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddressKey);
	DDX_Text(pDX, m_wndExamine.GetDlgCtrlID(), m_szExamine);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);

}
void CHMSTreatmentHistoryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentHistoryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentHistoryDialog::SetDefaultValues(){

	m_szLastName.Empty();
	m_szMidName.Empty();
	m_szFirstName.Empty();
	m_nYOB=0;
	m_szAddressKey.Empty();
	m_szExamine.Empty();
	m_szDiagnostic.Empty();

}
int CHMSTreatmentHistoryDialog::SetMode(int nMode){
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
/*void CHMSTreatmentHistoryDialog::OnLastNameChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnLastNameSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnLastNameKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnLastNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistoryDialog::OnMidNameChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnMidNameSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnMidNameKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnMidNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistoryDialog::OnFirstNameChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnFirstNameSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnFirstNameKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnFirstNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistoryDialog::OnYOBChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnYOBSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnYOBKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnYOBCheckValue(){
	return 0;
} 
void CHMSTreatmentHistoryDialog::OnAddressSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentHistoryDialog::OnAddressSelendok(){
	 
}
/*void CHMSTreatmentHistoryDialog::OnAddressSetfocus(){
	
}*/
/*void CHMSTreatmentHistoryDialog::OnAddressKillfocus(){
	
}*/
long CHMSTreatmentHistoryDialog::OnAddressLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAddress.IsSearchKey() && !m_szAddressKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAddressKey
};
	m_wndAddress.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAddress.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentHistoryDialog::OnAddressAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentHistoryDialog::OnExamineChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnExamineSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnExamineKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnExamineCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistoryDialog::OnDiagnosticChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnDiagnosticSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnDiagnosticKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnDiagnosticCheckValue(){
	return 0;
} 
void CHMSTreatmentHistoryDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentHistoryDialog::OnListPatientDblClick(){
	
} 
void CHMSTreatmentHistoryDialog::OnListPatientSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentHistoryDialog::OnListPatientDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentHistoryDialog::OnListPatientLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListPatient.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListPatient.AddItems(
		rs.MoveNext();
	}
	m_wndListPatient.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTreatmentHistoryDialog::OnListDocumentDblClick(){
	
} 
void CHMSTreatmentHistoryDialog::OnListDocumentSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentHistoryDialog::OnListDocumentDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentHistoryDialog::OnListDocumentLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListDocument.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListDocument.AddItems(
		rs.MoveNext();
	}
	m_wndListDocument.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSTreatmentHistoryDialog::OnAddHMSTreatmentHistoryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentHistoryDialog::OnEditHMSTreatmentHistoryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentHistoryDialog::OnDeleteHMSTreatmentHistoryDialog(){
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
 		OnCancelHMSTreatmentHistoryDialog();
 	}
	return 0;
}
int CHMSTreatmentHistoryDialog::OnSaveHMSTreatmentHistoryDialog(){
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
 		//OnHMSTreatmentHistoryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentHistoryDialog::OnCancelHMSTreatmentHistoryDialog(){
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
int CHMSTreatmentHistoryDialog::OnHMSTreatmentHistoryDialogListLoadData(){
	return 0;
}
