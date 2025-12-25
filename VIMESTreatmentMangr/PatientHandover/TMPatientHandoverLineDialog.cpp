#include "TMPatientHandoverLineDialog.h"
#include "../MainFrm.h"
#include "AdWorkshiftDialog.h"
static void _OnDocNoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientHandoverLineDialog* )pWnd)->OnDocNoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDocNoSelendokFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnDocNoSelendok();
}
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnDocNoKillfocus();
}*/
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnDocNoKillfocus();
}*/
static long _OnDocNoLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientHandoverLineDialog *)pWnd)->OnDocNoLoadData();
}
/*static void _OnDocNoAddNewFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnDocNoAddNew();
}*/
static void _OnPreviousHandoverSelectFnc(CWnd *pWnd){
	 ((CTMPatientHandoverLineDialog*)pWnd)->OnPreviousHandoverSelect();
}
static void _OnShiftLabelSelectFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog*)pWnd)->OnShiftLabelSelect();
}
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientHandoverLineDialog *)pWnd)->OnDiagnosticCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientHandoverLineDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMPatientHandoverLineDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverLineDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddItemSelectFnc(CWnd *pWnd){
	CTMPatientHandoverLineDialog *pVw = (CTMPatientHandoverLineDialog *)pWnd;
	pVw->OnAddItemSelect();
} 
/*static void _OnParaclinicalResultChangeFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnParaclinicalResultChange();
} */
/*static void _OnParaclinicalResultSetfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnParaclinicalResultSetfocus();} */ 
/*static void _OnParaclinicalResultKillfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnParaclinicalResultKillfocus();
} */
static int _OnParaclinicalResultCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientHandoverLineDialog *)pWnd)->OnParaclinicalResultCheckValue();
} 
/*static void _OnSuggestionChangeFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnSuggestionChange();
} */
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnSuggestionSetfocus();} */ 
/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverLineDialog *)pWnd)->OnSuggestionKillfocus();
} */
static int _OnSuggestionCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientHandoverLineDialog *)pWnd)->OnSuggestionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTMPatientHandoverLineDialog *pVw = (CTMPatientHandoverLineDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMPatientHandoverLineDialog *pVw = (CTMPatientHandoverLineDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddTMPatientHandoverLineDialogFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverLineDialog*)pWnd)->OnAddTMPatientHandoverLineDialog();
} 
static int _OnEditTMPatientHandoverLineDialogFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverLineDialog*)pWnd)->OnEditTMPatientHandoverLineDialog();
} 
static int _OnDeleteTMPatientHandoverLineDialogFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverLineDialog*)pWnd)->OnDeleteTMPatientHandoverLineDialog();
} 
static int _OnSaveTMPatientHandoverLineDialogFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverLineDialog*)pWnd)->OnSaveTMPatientHandoverLineDialog();
} 
static int _OnCancelTMPatientHandoverLineDialogFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverLineDialog*)pWnd)->OnCancelTMPatientHandoverLineDialog();
} 
CTMPatientHandoverLineDialog::CTMPatientHandoverLineDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMPatientHandoverLineDialog::~CTMPatientHandoverLineDialog(){
}
void CTMPatientHandoverLineDialog::OnCreateComponents(){
	m_wndDiagnosticGroup.Create(this, _T("Diagnostic"), 5, 35, 530, 130);
	m_wndSuggestionGroup.Create(this, _T("Suggestion"), 5, 375, 530, 470);
	m_wndDocNoLabel.Create(this, _T("DocNo"), 5, 5, 85, 30);
	m_wndDocNo.Create(this,90, 5, 270, 30); 
	m_wndPreviousHandover.Create(this, _T("Previous Handover"), 275, 5, 400, 30);
	m_wndParaclinicalResultGroup.Create(this, _T("Paraclinical Result"), 5, 275, 530, 370);
	m_wndShift.Create(this, _T("Shift"), 405, 5, 530, 30);
	m_wndDiagnostic.Create(this,5, 55, 530, 130); 
	m_wndList.Create(this,5, 135, 530, 270); 
	m_wndAddItem.Create(this, _T("Add Item"), 450, 275, 530, 295);
	m_wndParaclinicalResult.Create(this,5, 295, 530, 370); 
	m_wndSuggestion.Create(this,5, 395, 530, 470); 
	m_wndSave.Create(this, _T("Save"), 365, 475, 445, 500);
	m_wndClose.Create(this, _T("Close"), 450, 475, 530, 500);

}
void CTMPatientHandoverLineDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocNo.SetCheckValue(true);
	m_wndDocNo.LimitText(35);
	m_wndDiagnostic.SetLimitText(35);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndParaclinicalResult.SetLimitText(35);
	m_wndParaclinicalResult.SetCheckValue(true);
	m_wndSuggestion.SetLimitText(35);
	m_wndSuggestion.SetCheckValue(true);
	m_wndShift.SetHyperlink(true);

	m_wndDocNo.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDocNo.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Progress"), CFMT_TEXT, 475);
	m_wndList.InsertColumn(2, _T("Mark"), CFMT_TEXT, 40);

}
void CTMPatientHandoverLineDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocNo.SetEvent(WE_SELENDOK, _OnDocNoSelendokFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_SELCHANGE, _OnDocNoSelectChangeFnc);
	m_wndDocNo.SetEvent(WE_LOADDATA, _OnDocNoLoadDataFnc);
	//m_wndDocNo.SetEvent(WE_ADDNEW, _OnDocNoAddNewFnc);
	m_wndPreviousHandover.SetEvent(WE_CLICK, _OnPreviousHandoverSelectFnc);
	m_wndShift.SetEvent(WE_CLICK, _OnShiftLabelSelectFnc);
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddItem.SetEvent(WE_CLICK, _OnAddItemSelectFnc);
	//m_wndParaclinicalResult.SetEvent(WE_CHANGE, _OnParaclinicalResultChangeFnc);
	//m_wndParaclinicalResult.SetEvent(WE_SETFOCUS, _OnParaclinicalResultSetfocusFnc);
	//m_wndParaclinicalResult.SetEvent(WE_KILLFOCUS, _OnParaclinicalResultKillfocusFnc);
	m_wndParaclinicalResult.SetEvent(WE_CHECKVALUE, _OnParaclinicalResultCheckValueFnc);
	//m_wndSuggestion.SetEvent(WE_CHANGE, _OnSuggestionChangeFnc);
	//m_wndSuggestion.SetEvent(WE_SETFOCUS, _OnSuggestionSetfocusFnc);
	//m_wndSuggestion.SetEvent(WE_KILLFOCUS, _OnSuggestionKillfocusFnc);
	m_wndSuggestion.SetEvent(WE_CHECKVALUE, _OnSuggestionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CTMPatientHandoverLineDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDocNo.GetDlgCtrlID(), m_szDocNoKey);
	DDX_Check(pDX, m_wndPreviousHandover.GetDlgCtrlID(), m_bPreviousHandover);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_Text(pDX, m_wndParaclinicalResult.GetDlgCtrlID(), m_szParaclinicalResult);
	DDX_Text(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestion);

}
void CTMPatientHandoverLineDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DocNo")] =  m_szDocNoKey;
	m_jData[_T("PreviousHandover")] =  m_bPreviousHandover;
	m_jData[_T("Diagnostic")] =  m_szDiagnostic;
	m_jData[_T("ParaclinicalResult")] =  m_szParaclinicalResult;
	m_jData[_T("Suggestion")] =  m_szSuggestion;
	}
	else
	{
			
	m_jData[_T("DocNo")].GetValue(m_szDocNoKey);
	m_jData[_T("PreviousHandover")].GetValue(m_bPreviousHandover);
	m_jData[_T("Diagnostic")].GetValue(m_szDiagnostic);
	m_jData[_T("ParaclinicalResult")].GetValue(m_szParaclinicalResult);
	m_jData[_T("Suggestion")].GetValue(m_szSuggestion);
	}

}
void CTMPatientHandoverLineDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMPatientHandoverLineDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTMPatientHandoverLineDialog::SetDefaultValues(){

	m_szDocNoKey.Empty();
	m_bPreviousHandover=FALSE;
	m_szDiagnostic.Empty();
	m_szParaclinicalResult.Empty();
	m_szSuggestion.Empty();

}
int CTMPatientHandoverLineDialog::SetMode(int nMode){
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
void CTMPatientHandoverLineDialog::OnDocNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientHandoverLineDialog::OnDocNoSelendok(){
	 
}
/*void CTMPatientHandoverLineDialog::OnDocNoSetfocus(){
	
}*/
/*void CTMPatientHandoverLineDialog::OnDocNoKillfocus(){
	
}*/
long CTMPatientHandoverLineDialog::OnDocNoLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDocNo.IsSearchKey() && !m_szDocNoKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDocNoKey
};
	m_wndDocNo.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDocNo.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CTMPatientHandoverLineDialog::OnDocNoAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTMPatientHandoverLineDialog::OnPreviousHandoverSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CTMPatientHandoverLineDialog::OnShiftLabelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CAdWorkshiftDialog dlg(this);
	dlg.DoModal();
}
/*void CTMPatientHandoverLineDialog::OnDiagnosticChange(){
	
} */
/*void CTMPatientHandoverLineDialog::OnDiagnosticSetfocus(){
	
} */
/*void CTMPatientHandoverLineDialog::OnDiagnosticKillfocus(){
	
} */
int CTMPatientHandoverLineDialog::OnDiagnosticCheckValue(){
	return 0;
} 
void CTMPatientHandoverLineDialog::OnListDblClick(){
	
} 
void CTMPatientHandoverLineDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMPatientHandoverLineDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMPatientHandoverLineDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Progress")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CTMPatientHandoverLineDialog::OnAddItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CTMPatientHandoverLineDialog::OnParaclinicalResultChange(){
	
} */
/*void CTMPatientHandoverLineDialog::OnParaclinicalResultSetfocus(){
	
} */
/*void CTMPatientHandoverLineDialog::OnParaclinicalResultKillfocus(){
	
} */
int CTMPatientHandoverLineDialog::OnParaclinicalResultCheckValue(){
	return 0;
} 
/*void CTMPatientHandoverLineDialog::OnSuggestionChange(){
	
} */
/*void CTMPatientHandoverLineDialog::OnSuggestionSetfocus(){
	
} */
/*void CTMPatientHandoverLineDialog::OnSuggestionKillfocus(){
	
} */
int CTMPatientHandoverLineDialog::OnSuggestionCheckValue(){
	return 0;
} 
void CTMPatientHandoverLineDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveTMPatientHandoverLineDialog();	
} 
void CTMPatientHandoverLineDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMPatientHandoverLineDialog::OnAddTMPatientHandoverLineDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMPatientHandoverLineDialog::OnEditTMPatientHandoverLineDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMPatientHandoverLineDialog::OnDeleteTMPatientHandoverLineDialog(){
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
 		OnCancelTMPatientHandoverLineDialog();
 	}
	return 0;
}
int CTMPatientHandoverLineDialog::OnSaveTMPatientHandoverLineDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szParams, szValues;
	/*
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
	*/
	m_jData.ToString(szValues);
	szParams.Format(_T("'%s',%ld,%ld,'%s'")
		, pMF->GetCurrentUser(), m_nOrderId, str2long(m_szDocNoKey)
		, szValues);
	szSQL.Format(_T("tm_patient_handover_line_add(%s)"), szParams);
 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		//OnTMPatientHandoverLineDialogListLoadData();
 		SetMode(GetMode());
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMPatientHandoverLineDialog::OnCancelTMPatientHandoverLineDialog(){
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
int CTMPatientHandoverLineDialog::OnTMPatientHandoverLineDialogListLoadData(){
	return 0;
}
