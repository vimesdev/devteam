#include "HMSTerminateCovidDocument.h"
#include "MainFrm.h"
static void _OnOkSelectFnc(CWnd *pWnd){
	CHMSTerminateCovidDocument *pVw = (CHMSTerminateCovidDocument *)pWnd;
	pVw->OnOkSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTerminateCovidDocument *pVw = (CHMSTerminateCovidDocument *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSTerminateCovidDocument *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSTerminateCovidDocument *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSTerminateCovidDocument *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSTerminateCovidDocument *)pWnd)->OnConclusionCheckValue();
} 
static void _OnSuggestionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTerminateCovidDocument* )pWnd)->OnSuggestionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSuggestionSelendokFnc(CWnd *pWnd){
	((CHMSTerminateCovidDocument *)pWnd)->OnSuggestionSelendok();
}
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CHMSTerminateCovidDocument *)pWnd)->OnSuggestionKillfocus();
}*/
/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
	((CHMSTerminateCovidDocument *)pWnd)->OnSuggestionKillfocus();
}*/
static long _OnSuggestionLoadDataFnc(CWnd *pWnd){
	return ((CHMSTerminateCovidDocument *)pWnd)->OnSuggestionLoadData();
}
/*static void _OnSuggestionAddNewFnc(CWnd *pWnd){
	((CHMSTerminateCovidDocument *)pWnd)->OnSuggestionAddNew();
}*/
/*static void _OnICDChangeFnc(CWnd *pWnd){
	((CHMSTerminateCovidDocument *)pWnd)->OnICDChange();
} */
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((CHMSTerminateCovidDocument *)pWnd)->OnICDSetfocus();} */ 
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((CHMSTerminateCovidDocument *)pWnd)->OnICDKillfocus();
} */
static int _OnICDCheckValueFnc(CWnd *pWnd){
	return ((CHMSTerminateCovidDocument *)pWnd)->OnICDCheckValue();
} 
static int _OnAddCHMSTerminateCovidDocumentFnc(CWnd *pWnd){
	 return ((CHMSTerminateCovidDocument*)pWnd)->OnAddCHMSTerminateCovidDocument();
} 
static int _OnEditCHMSTerminateCovidDocumentFnc(CWnd *pWnd){
	 return ((CHMSTerminateCovidDocument*)pWnd)->OnEditCHMSTerminateCovidDocument();
} 
static int _OnDeleteCHMSTerminateCovidDocumentFnc(CWnd *pWnd){
	 return ((CHMSTerminateCovidDocument*)pWnd)->OnDeleteCHMSTerminateCovidDocument();
} 
static int _OnSaveCHMSTerminateCovidDocumentFnc(CWnd *pWnd){
	 return ((CHMSTerminateCovidDocument*)pWnd)->OnSaveCHMSTerminateCovidDocument();
} 
static int _OnCancelCHMSTerminateCovidDocumentFnc(CWnd *pWnd){
	 return ((CHMSTerminateCovidDocument*)pWnd)->OnCancelCHMSTerminateCovidDocument();
} 
CHMSTerminateCovidDocument::CHMSTerminateCovidDocument(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 530;
	m_nDlgHeight = 265;
	SetDefaultValues();
}
CHMSTerminateCovidDocument::~CHMSTerminateCovidDocument()
{
}
void CHMSTerminateCovidDocument::OnCreateComponents(){
	m_wndGroupBox.Create(this, _T("Kết thúc đợt lưu trú đối tượng cách ly do covid 19"), 5, 5, 520, 220);
	m_wndICDLabel.Create(this, _T("ICD"), 10, 30, 110, 55);
	m_wndICD.Create(this,115, 30, 515, 80, TRUE, FALSE, TRUE);	
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 85, 110, 110);
	m_wndConclusion.Create(this,115, 85, 515, 185, TRUE, FALSE, TRUE); 
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 190, 110, 215);
	m_wndSuggestion.Create(this,115, 190, 515, 215);
	m_wndOk.Create(this, _T("&Ok"), 355, 225, 435, 250);
	m_wndClose.Create(this, _T("&Close"), 440, 225, 520, 250);
}
void CHMSTerminateCovidDocument::OnInitializeComponents(){
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
void CHMSTerminateCovidDocument::OnSetWindowEvents(){
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
void CHMSTerminateCovidDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_TextEx(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestionKey);
	DDX_Text(pDX, m_wndICD.GetDlgCtrlID(), m_szICD);

}
void CHMSTerminateCovidDocument::GetDataToScreen(){
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
			m_szSuggestionKey = _T("I");

		CString szDeptID = _T("C1.1");
		//CString szDeptID =  pMF->m_wndPatientFee.m_wndTreatmentList.GetItemText(0, 0);
		//if(szDeptID.Trim().GetLength() <= 0)
		//	SetMode(VM_NONE);			
	}

	UpdateData(false);

}
void CHMSTerminateCovidDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTerminateCovidDocument::SetDefaultValues(){

	m_szConclusion.Empty();
	m_szSuggestionKey.Empty();
	m_szICD.Empty();

}
int CHMSTerminateCovidDocument::SetMode(int nMode){
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
void CHMSTerminateCovidDocument::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	if(ShowMessageBox(_T("Kết thúc đợt lưu trú của đối tượng cách ly do covid 19? [Y/N]"), MB_YESNO|MB_ICONQUESTION)==IDNO)
		return;

	szSQL.Format(_T("UPDATE hms_doc SET hd_suggestion ='%s', hd_status ='T', hd_enddate=CURRENT_TIMESTAMP, hd_suspect_covid19='Y' WHERE hd_docno = %ld"), m_szSuggestionKey, pMF->m_nDocumentNo);
	_fmsg(_T("%s"), szSQL);
	int ret = rs.ExecSQL(szSQL);
	if(ret > 0)
	{
		SetMode(VM_VIEW);
	}

	CGuiDialog::OnOK();
} 
void CHMSTerminateCovidDocument::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
/*void CHMSTerminateCovidDocument::OnConclusionChange(){
	
} */
/*void CHMSTerminateCovidDocument::OnConclusionSetfocus(){
	
} */
/*void CHMSTerminateCovidDocument::OnConclusionKillfocus(){
	
} */
int CHMSTerminateCovidDocument::OnConclusionCheckValue(){
	return 0;
} 
void CHMSTerminateCovidDocument::OnSuggestionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTerminateCovidDocument::OnSuggestionSelendok(){
	 
}
/*void CHMSTerminateCovidDocument::OnSuggestionSetfocus(){
	
}*/
/*void CHMSTerminateCovidDocument::OnSuggestionKillfocus(){
	
}*/
long CHMSTerminateCovidDocument::OnSuggestionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" AND ss_code IN('A','E', 'I') "));
	return pMF->LoadSelectionList(&m_wndSuggestion, _T("hms_suggestion"), m_szSuggestionKey, szWhere);	
	return 0;
}
/*void CHMSTerminateCovidDocument::OnSuggestionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTerminateCovidDocument::OnICDChange(){
	
} */
/*void CHMSTerminateCovidDocument::OnICDSetfocus(){
	
} */
/*void CHMSTerminateCovidDocument::OnICDKillfocus(){
	
} */
int CHMSTerminateCovidDocument::OnICDCheckValue(){
	return 0;
} 
int CHMSTerminateCovidDocument::OnAddCHMSTerminateCovidDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTerminateCovidDocument::OnEditCHMSTerminateCovidDocument(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTerminateCovidDocument::OnDeleteCHMSTerminateCovidDocument(){
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
 		OnCancelCHMSTerminateCovidDocument();
 	}
	return 0;
}
int CHMSTerminateCovidDocument::OnSaveCHMSTerminateCovidDocument(){
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
 		//OnCHMSTerminateCovidDocumentListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTerminateCovidDocument::OnCancelCHMSTerminateCovidDocument(){
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
int CHMSTerminateCovidDocument::OnCHMSTerminateCovidDocumentListLoadData(){
	return 0;
}
