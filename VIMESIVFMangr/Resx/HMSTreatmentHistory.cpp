#include "HMSTreatmentHistory.h"
#include "MainFrm.h"
/*static void _OnLastNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnLastNameChange();
} */
/*static void _OnLastNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnLastNameSetfocus();} */ 
/*static void _OnLastNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnLastNameKillfocus();
} */
static int _OnLastNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnLastNameCheckValue();
} 
/*static void _OnMidNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnMidNameChange();
} */
/*static void _OnMidNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnMidNameSetfocus();} */ 
/*static void _OnMidNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnMidNameKillfocus();
} */
static int _OnMidNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnMidNameCheckValue();
} 
/*static void _OnFirstNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnFirstNameChange();
} */
/*static void _OnFirstNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnFirstNameSetfocus();} */ 
/*static void _OnFirstNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnFirstNameKillfocus();
} */
static int _OnFirstNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnFirstNameCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnAddressSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentHistory* )pWnd)->OnAddressSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAddressSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnAddressSelendok();
}
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnAddressKillfocus();
}*/
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnAddressKillfocus();
}*/
static long _OnAddressLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory *)pWnd)->OnAddressLoadData();
}
/*static void _OnAddressAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentHistory *)pWnd)->OnAddressAddNew();
}*/
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSTreatmentHistory *pVw = (CHMSTreatmentHistory *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListPatientLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory*)pWnd)->OnListPatientLoadData();
} 
static void _OnListPatientDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentHistory*)pWnd)->OnListPatientDblClick();
} 
static void _OnListPatientSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentHistory*)pWnd)->OnListPatientSelectChange(nOldItem, nNewItem);
} 
static int _OnListPatientDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnListPatientDeleteItem();
} 
static long _OnListDocumentLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistory*)pWnd)->OnListDocumentLoadData();
} 
static void _OnListDocumentDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentHistory*)pWnd)->OnListDocumentDblClick();
} 
static void _OnListDocumentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentHistory*)pWnd)->OnListDocumentSelectChange(nOldItem, nNewItem);
} 
static int _OnListDocumentDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnListDocumentDeleteItem();
} 
static int _OnAddHMSTreatmentHistoryFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnAddHMSTreatmentHistory();
} 
static int _OnEditHMSTreatmentHistoryFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnEditHMSTreatmentHistory();
} 
static int _OnDeleteHMSTreatmentHistoryFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnDeleteHMSTreatmentHistory();
} 
static int _OnSaveHMSTreatmentHistoryFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnSaveHMSTreatmentHistory();
} 
static int _OnCancelHMSTreatmentHistoryFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistory*)pWnd)->OnCancelHMSTreatmentHistory();
} 
CHMSTreatmentHistory::CHMSTreatmentHistory(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 750;
	m_nDlgHeight = 575;
	SetDefaultValues();
}
CHMSTreatmentHistory::~CHMSTreatmentHistory(){
}
void CHMSTreatmentHistory::OnCreateComponents(){
	m_wndInformationSearch.Create(this, _T("Information Search"), 5, 5, 740, 120);
	m_wndGroupPatient.Create(this, _T("Patient List"), 6, 125, 740, 375);
	m_wndGroupDocument.Create(this, _T("Treatment Document List"), 5, 380, 740, 560);
	m_wndLastNameLabel.Create(this, _T("Last Name"), 10, 60, 95, 85);
	m_wndLastName.Create(this,100, 60, 180, 85); 
	m_wndMidNameLabel.Create(this, _T("Mid Name"), 185, 60, 270, 85);
	m_wndMidName.Create(this,275, 60, 355, 85); 
	m_wndFirstNameLabel.Create(this, _T("First Name"), 360, 60, 445, 85);
	m_wndFirstName.Create(this,450, 60, 530, 85); 
	m_wndDocumentNoLabel.Create(this, _T("DocumentNo"), 10, 30, 95, 55);
	m_wndDocumentNo.Create(this,100, 30, 180, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 90, 95, 115);
	m_wndAddress.Create(this,100, 90, 530, 115); 
	m_wndSearch.Create(this, _T("Search"), 535, 60, 615, 85);
	m_wndListPatient.Create(this,10, 150, 735, 370); 
	m_wndListDocument.Create(this,10, 405, 735, 555); 

}
void CHMSTreatmentHistory::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLastName.SetLimitText(35);
	m_wndLastName.SetCheckValue(true);
	m_wndMidName.SetLimitText(35);
	m_wndMidName.SetCheckValue(true);
	m_wndFirstName.SetLimitText(35);
	m_wndFirstName.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndAddress.SetCheckValue(true);
	m_wndAddress.LimitText(35);


	m_wndAddress.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndAddress.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndListPatient.InsertColumn(0, _T("PatientNo"), CFMT_TEXT, 80);
	m_wndListPatient.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 120);
	m_wndListPatient.InsertColumn(2, _T("Age"), CFMT_TEXT, 50);
	m_wndListPatient.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndListPatient.InsertColumn(4, _T("Ethnic"), CFMT_TEXT, 70);
	m_wndListPatient.InsertColumn(5, _T("Address"), CFMT_TEXT, 250);


	m_wndListDocument.InsertColumn(0, _T("Stt"), CFMT_TEXT, 30);
	m_wndListDocument.InsertColumn(1, _T("Document No"), CFMT_TEXT, 80);
	m_wndListDocument.InsertColumn(2, _T("Dept"), CFMT_TEXT, 150);
	m_wndListDocument.InsertColumn(3, _T("Admit Date"), CFMT_TEXT, 80);
	m_wndListDocument.InsertColumn(4, _T("End Date"), CFMT_TEXT, 80);
	m_wndListDocument.InsertColumn(5, _T("Diagnostic"), CFMT_TEXT, 200);

}
void CHMSTreatmentHistory::OnSetWindowEvents(){
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
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndAddress.SetEvent(WE_SELENDOK, _OnAddressSelendokFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_SELCHANGE, _OnAddressSelectChangeFnc);
	m_wndAddress.SetEvent(WE_LOADDATA, _OnAddressLoadDataFnc);
	//m_wndAddress.SetEvent(WE_ADDNEW, _OnAddressAddNewFnc);
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
void CHMSTreatmentHistory::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndLastName.GetDlgCtrlID(), m_szLastName);
	DDX_Text(pDX, m_wndMidName.GetDlgCtrlID(), m_szMidName);
	DDX_Text(pDX, m_wndFirstName.GetDlgCtrlID(), m_szFirstName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_TextEx(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddressKey);

}
void CHMSTreatmentHistory::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentHistory::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentHistory::SetDefaultValues(){

	m_szLastName.Empty();
	m_szMidName.Empty();
	m_szFirstName.Empty();
	m_nDocumentNo=0;
	m_szAddressKey.Empty();

}
int CHMSTreatmentHistory::SetMode(int nMode){
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
/*void CHMSTreatmentHistory::OnLastNameChange(){
	
} */
/*void CHMSTreatmentHistory::OnLastNameSetfocus(){
	
} */
/*void CHMSTreatmentHistory::OnLastNameKillfocus(){
	
} */
int CHMSTreatmentHistory::OnLastNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistory::OnMidNameChange(){
	
} */
/*void CHMSTreatmentHistory::OnMidNameSetfocus(){
	
} */
/*void CHMSTreatmentHistory::OnMidNameKillfocus(){
	
} */
int CHMSTreatmentHistory::OnMidNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistory::OnFirstNameChange(){
	
} */
/*void CHMSTreatmentHistory::OnFirstNameSetfocus(){
	
} */
/*void CHMSTreatmentHistory::OnFirstNameKillfocus(){
	
} */
int CHMSTreatmentHistory::OnFirstNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistory::OnDocumentNoChange(){
	
} */
/*void CHMSTreatmentHistory::OnDocumentNoSetfocus(){
	
} */
/*void CHMSTreatmentHistory::OnDocumentNoKillfocus(){
	
} */
int CHMSTreatmentHistory::OnDocumentNoCheckValue(){
	return 0;
} 
void CHMSTreatmentHistory::OnAddressSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentHistory::OnAddressSelendok(){
	 
}
/*void CHMSTreatmentHistory::OnAddressSetfocus(){
	
}*/
/*void CHMSTreatmentHistory::OnAddressKillfocus(){
	
}*/
long CHMSTreatmentHistory::OnAddressLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentHistory::OnAddressAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentHistory::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentHistory::OnListPatientDblClick(){
	
} 
void CHMSTreatmentHistory::OnListPatientSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentHistory::OnListPatientDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentHistory::OnListPatientLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListPatient.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListPatient.AddItems(
			rs.GetValue(_T("PatientNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("Ethnic")), 
			rs.GetValue(_T("Address")), NULL);
		rs.MoveNext();
	}
	m_wndListPatient.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTreatmentHistory::OnListDocumentDblClick(){
	
} 
void CHMSTreatmentHistory::OnListDocumentSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentHistory::OnListDocumentDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentHistory::OnListDocumentLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListDocument.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListDocument.AddItems(
			rs.GetValue(_T("Stt")), 
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("Dept")), 
			rs.GetValue(_T("AdmitDate")), 
			rs.GetValue(_T("EndDate")), 
			rs.GetValue(_T("Diagnostic")), NULL);
		rs.MoveNext();
	}
	m_wndListDocument.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSTreatmentHistory::OnAddHMSTreatmentHistory(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentHistory::OnEditHMSTreatmentHistory(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentHistory::OnDeleteHMSTreatmentHistory(){
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
 		OnCancelHMSTreatmentHistory();
 	}
	return 0;
}
int CHMSTreatmentHistory::OnSaveHMSTreatmentHistory(){
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
 		//OnHMSTreatmentHistoryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentHistory::OnCancelHMSTreatmentHistory(){
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
int CHMSTreatmentHistory::OnHMSTreatmentHistoryListLoadData(){
	return 0;
}
