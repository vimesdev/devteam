#include "HMSTerminateDocument.h"
#include "MainFrm.h"
static void _OnOkSelectFnc(CWnd *pWnd){
	CHMSTerminateDocument *pVw = (CHMSTerminateDocument *)pWnd;
	pVw->OnOkSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTerminateDocument *pVw = (CHMSTerminateDocument *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSTerminateDocument *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSTerminateDocument *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSTerminateDocument *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSTerminateDocument *)pWnd)->OnConclusionCheckValue();
} 
static void _OnSuggestionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTerminateDocument* )pWnd)->OnSuggestionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSuggestionSelendokFnc(CWnd *pWnd){
	((CHMSTerminateDocument *)pWnd)->OnSuggestionSelendok();
}
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CHMSTerminateDocument *)pWnd)->OnSuggestionKillfocus();
}*/
/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
	((CHMSTerminateDocument *)pWnd)->OnSuggestionKillfocus();
}*/
static long _OnSuggestionLoadDataFnc(CWnd *pWnd){
	return ((CHMSTerminateDocument *)pWnd)->OnSuggestionLoadData();
}
/*static void _OnSuggestionAddNewFnc(CWnd *pWnd){
	((CHMSTerminateDocument *)pWnd)->OnSuggestionAddNew();
}*/
/*static void _OnICDChangeFnc(CWnd *pWnd){
	((CHMSTerminateDocument *)pWnd)->OnICDChange();
} */
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((CHMSTerminateDocument *)pWnd)->OnICDSetfocus();} */ 
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((CHMSTerminateDocument *)pWnd)->OnICDKillfocus();
} */
static int _OnICDCheckValueFnc(CWnd *pWnd){
	return ((CHMSTerminateDocument *)pWnd)->OnICDCheckValue();
} 
static int _OnAddCHMSTerminateDocumentFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocument*)pWnd)->OnAddCHMSTerminateDocument();
} 
static int _OnEditCHMSTerminateDocumentFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocument*)pWnd)->OnEditCHMSTerminateDocument();
} 
static int _OnDeleteCHMSTerminateDocumentFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocument*)pWnd)->OnDeleteCHMSTerminateDocument();
} 
static int _OnSaveCHMSTerminateDocumentFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocument*)pWnd)->OnSaveCHMSTerminateDocument();
} 
static int _OnCancelCHMSTerminateDocumentFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocument*)pWnd)->OnCancelCHMSTerminateDocument();
} 
CHMSTerminateDocument::CHMSTerminateDocument(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 530;
	m_nDlgHeight = 265;
	SetDefaultValues();
}
CHMSTerminateDocument::~CHMSTerminateDocument()
{
}
void CHMSTerminateDocument::OnCreateComponents(){
	m_wndGroupBox.Create(this, _T("Terminate Document Information"), 5, 5, 520, 220);
	m_wndICDLabel.Create(this, _T("ICD"), 10, 30, 110, 55);
	m_wndICD.Create(this,115, 30, 515, 80, TRUE, FALSE, TRUE);	
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 85, 110, 110);
	m_wndConclusion.Create(this,115, 85, 515, 185, TRUE, FALSE, TRUE); 
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 190, 110, 215);
	m_wndSuggestion.Create(this,115, 190, 515, 215);
	m_wndOk.Create(this, _T("&Ok"), 355, 225, 435, 250);
	m_wndClose.Create(this, _T("&Close"), 440, 225, 520, 250);
}
void CHMSTerminateDocument::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);
	m_wndSuggestion.SetCheckValue(true);
	m_wndSuggestion.LimitText(35);
	m_wndICD.SetMultiLine(TRUE);
	m_wndICD.SetLimitText(35);
	m_wndICD.SetCheckValue(true);
	m_wndSuggestion.SetReadOnly(true);
	m_wndICD.SetReadOnly(true);
	m_wndConclusion.SetReadOnly(true);

	m_wndSuggestion.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSuggestion.InsertColumn(1, _T("Desc"), CFMT_TEXT, 300);
}
void CHMSTerminateDocument::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndSuggestion.SetEvent(WE_SELENDOK, _OnSuggestionSelendokFnc);
	//m_wndSuggestion.SetEvent(WE_SETFOCUS, _OnSuggestionSetfocusFnc);
	//m_wndSuggestion.SetEvent(WE_KILLFOCUS, _OnSuggestionKillfocusFnc);
	m_wndSuggestion.SetEvent(WE_SELCHANGE, _OnSuggestionSelectChangeFnc);
	m_wndSuggestion.SetEvent(WE_LOADDATA, _OnSuggestionLoadDataFnc);
	//m_wndSuggestion.SetEvent(WE_ADDNEW, _OnSuggestionAddNewFnc);
	//m_wndICD.SetEvent(WE_CHANGE, _OnICDChangeFnc);
	//m_wndICD.SetEvent(WE_SETFOCUS, _OnICDSetfocusFnc);
	//m_wndICD.SetEvent(WE_KILLFOCUS, _OnICDKillfocusFnc);
	m_wndICD.SetEvent(WE_CHECKVALUE, _OnICDCheckValueFnc);
	SetMode(VM_EDIT);
	GetDataToScreen();

}
void CHMSTerminateDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_TextEx(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestionKey);
	DDX_Text(pDX, m_wndICD.GetDlgCtrlID(), m_szICD);

}
void CHMSTerminateDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTmp;
	
	szSQL.Format(_T("SELECT hd_object FROM hms_doc WHERE hd_docno = %ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetStringValue() = _T("7"))
	{	
		szSQL.Format(_T(" SELECT hd_conclusion as conclusion , ") \
			_T("	hd_suggestion as suggestion, (select hi_name from hms_icd where hi_icd = hd_icd)||'['|| hd_icd ||']' as descicd ") \
			_T(" FROM hms_doc WHERE hd_docno = %ld AND hd_status ='T' "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("descicd"), m_szICD);
			rs.GetValue(_T("conclusion"), m_szConclusion);
			rs.GetValue(_T("suggestion"), m_szSuggestionKey);
			SetMode(VM_VIEW);
		}
		else
		{
			szSQL.Format(_T("SELECT he_diagnostic as conclusion, ") \
				_T(" (select hi_name from hms_icd where hi_icd = he_icd10) ||'['||he_icd10||']' as icd, he_icd10 ") \
				_T(" FROM hms_exam WHERE he_docno =%ld AND he_status ='T' AND length(he_icd10) > 0 ORDER BY he_receptidx "), pMF->m_nDocumentNo);
			rs.ExecSQL(szSQL);	

			if(rs.IsEOF()){
				/*ShowMessageBox(_T("\x42\xE1\x63 s\x129 \x63h\x1B0\x61 kh\xE1m, k\x1EBFt lu\x1EADn \x62\x1EC7nh \x63ho phi\x1EBFu kh\xE1m. Kh\xF4ng th\x1EC3 k\x1EBFt lu\x1EADn \x62\x1EC7nh !"), MB_OK|MB_ICONINFORMATION);*/
				//ShowMessageBox(_T("Benhsfdf jfls"), MB_OK);
				m_szSuggestionKey = _T("");
				SetMode(VM_VIEW);
			}		
			
			while (!rs.IsEOF()){
				tmpStr.AppendFormat(_T("- %s\r\n"),	rs.GetValue(_T("Conclusion")));
				szTmp.AppendFormat(_T("- %s\r\n"),	rs.GetValue(_T("icd")));
				rs.GetValue(_T("icd10"), m_szICDKey);
				rs.MoveNext();
			}	
			
			
			m_szConclusion = tmpStr;
			m_szICD = szTmp;
	
		}

		szSQL.Format(_T("SELECT count(*) FROM hms_pharmaorder WHERE hpo_docno =%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() >0)
			m_szSuggestionKey = _T("E");
		else
			m_szSuggestionKey = _T("A");

		
		CString szDeptID =  pMF->m_wndPatientFee.m_wndTreatmentList.GetItemText(0, 0);
		if(szDeptID.Trim().GetLength() <= 0)
			SetMode(VM_NONE);			
	}

	UpdateData(false);

}
void CHMSTerminateDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTerminateDocument::SetDefaultValues(){

	m_szConclusion.Empty();
	m_szSuggestionKey.Empty();
	m_szICD.Empty();

}
int CHMSTerminateDocument::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW:
 			EnableControls(FALSE);
 			EnableButtons(FALSE, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSTerminateDocument::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	if(ShowMessageBox(_T("K\x1EBFt th\xFA\x63 h\x1ED3 s\x1A1 \x62\xEAnh nh\xE2n[Y/N]."), MB_YESNO|MB_ICONQUESTION)==IDNO)
		return;

	szSQL.Format(_T("UPDATE hms_doc SET hd_suggestion ='%s', hd_status ='T', hd_enddate=CURRENT_TIMESTAMP WHERE hd_docno = %ld"), m_szSuggestionKey, pMF->m_nDocumentNo);
	_fmsg(_T("%s"), szSQL);
	int ret = rs.ExecSQL(szSQL);
	if(ret > 0){
		SetMode(VM_VIEW);
	}

	CGuiDialog::OnOK();
} 
void CHMSTerminateDocument::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
/*void CHMSTerminateDocument::OnConclusionChange(){
	
} */
/*void CHMSTerminateDocument::OnConclusionSetfocus(){
	
} */
/*void CHMSTerminateDocument::OnConclusionKillfocus(){
	
} */
int CHMSTerminateDocument::OnConclusionCheckValue(){
	return 0;
} 
void CHMSTerminateDocument::OnSuggestionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTerminateDocument::OnSuggestionSelendok(){
	 
}
/*void CHMSTerminateDocument::OnSuggestionSetfocus(){
	
}*/
/*void CHMSTerminateDocument::OnSuggestionKillfocus(){
	
}*/
long CHMSTerminateDocument::OnSuggestionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" AND ss_code IN('A','E', 'I') "));
	return pMF->LoadSelectionList(&m_wndSuggestion, _T("hms_suggestion"), m_szSuggestionKey, szWhere);	
	return 0;
}
/*void CHMSTerminateDocument::OnSuggestionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTerminateDocument::OnICDChange(){
	
} */
/*void CHMSTerminateDocument::OnICDSetfocus(){
	
} */
/*void CHMSTerminateDocument::OnICDKillfocus(){
	
} */
int CHMSTerminateDocument::OnICDCheckValue(){
	return 0;
} 
int CHMSTerminateDocument::OnAddCHMSTerminateDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTerminateDocument::OnEditCHMSTerminateDocument(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTerminateDocument::OnDeleteCHMSTerminateDocument(){
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
 		OnCancelCHMSTerminateDocument();
 	}
	return 0;
}
int CHMSTerminateDocument::OnSaveCHMSTerminateDocument(){
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
 		//OnCHMSTerminateDocumentListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTerminateDocument::OnCancelCHMSTerminateDocument(){
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
int CHMSTerminateDocument::OnCHMSTerminateDocumentListLoadData(){
	return 0;
}
