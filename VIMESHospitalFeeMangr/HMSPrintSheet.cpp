#include "HMSPrintSheet.h"
#include "MainFrm.h"
#include ".\hmsprintsheet.h"
static void _OnSummarizeExaSheetSelectFnc(CWnd *pWnd){
	 ((CHMSPrintSheet*)pWnd)->OnSummarizeExaSheetSelect();
}
static void _OnPrintPrescriptionSelectFnc(CWnd *pWnd){
	 ((CHMSPrintSheet*)pWnd)->OnPrintPrescriptionSelect();
}
static void _OnPrintGeneralExaminationCostSelectFnc(CWnd *pWnd){
	 ((CHMSPrintSheet*)pWnd)->OnPrintGeneralExaminationCostSelect();
}
static void _OnOkSelectFnc(CWnd *pWnd){
	CHMSPrintSheet *pVw = (CHMSPrintSheet *)pWnd;
	pVw->OnOkSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPrintSheet *pVw = (CHMSPrintSheet *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPrintInvoiceSelectFnc(CWnd *pWnd){
	 ((CHMSPrintSheet*)pWnd)->OnPrintInvoiceSelect();
}
static int _OnAddHMSPrintSheetFnc(CWnd *pWnd){
	 return ((CHMSPrintSheet*)pWnd)->OnAddHMSPrintSheet();
} 
static int _OnEditHMSPrintSheetFnc(CWnd *pWnd){
	 return ((CHMSPrintSheet*)pWnd)->OnEditHMSPrintSheet();
} 
static int _OnDeleteHMSPrintSheetFnc(CWnd *pWnd){
	 return ((CHMSPrintSheet*)pWnd)->OnDeleteHMSPrintSheet();
} 
static int _OnSaveHMSPrintSheetFnc(CWnd *pWnd){
	 return ((CHMSPrintSheet*)pWnd)->OnSaveHMSPrintSheet();
} 
static int _OnCancelHMSPrintSheetFnc(CWnd *pWnd){
	 return ((CHMSPrintSheet*)pWnd)->OnCancelHMSPrintSheet();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSPrintSheet *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSPrintSheet *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSPrintSheet *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrintSheet *)pWnd)->OnConclusionCheckValue();
} 
/*static void _OnSuggestionChangeFnc(CWnd *pWnd){
	((CHMSPrintSheet *)pWnd)->OnSuggestionChange();
} */
/*static void _OnSuggestionSetfocusFnc(CWnd *pWnd){
	((CHMSPrintSheet *)pWnd)->OnSuggestionSetfocus();} */ 
/*static void _OnSuggestionKillfocusFnc(CWnd *pWnd){
	((CHMSPrintSheet *)pWnd)->OnSuggestionKillfocus();
} */
static int _OnSuggestionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrintSheet *)pWnd)->OnSuggestionCheckValue();
}
CHMSPrintSheet::CHMSPrintSheet(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 325;
	m_nDlgHeight = 205;
	SetDefaultValues();
}
CHMSPrintSheet::~CHMSPrintSheet(){
}
void CHMSPrintSheet::OnCreateComponents(){
	m_wndOk.Create(this, _T("&Ok (F3)"), 355, 240, 435, 265);
	m_wndGroupBox.Create(this, _T("Print sheet"), 5, 5, 520, 235);
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 30, 110, 55);
	m_wndConclusion.Create(this,115, 30, 515, 130); 
	m_wndSuggestionLabel.Create(this, _T("Suggestion"), 10, 135, 110, 160);
	m_wndSuggestion.Create(this,115, 135, 515, 160);
	m_wndSummarizeExaSheet.Create(this, _T("Summarize Examination Sheet"), 115, 165, 295, 190);
	m_wndPrintPrescription.Create(this, _T("Print Prescription"), 320, 165, 500, 190);
	m_wndPrintGeneralExaminationCost.Create(this, _T("Print General Examination Cost"), 115, 202, 295, 227);	
	m_wndClose.Create(this, _T("&Close"), 440, 240, 520, 265);
	m_wndPrintInvoice.Create(this, _T("In biên lai thu ti?n"), 320, 202, 500, 227);	
}
void CHMSPrintSheet::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrintSheet::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSummarizeExaSheet.SetEvent(WE_CLICK, _OnSummarizeExaSheetSelectFnc);
	m_wndPrintPrescription.SetEvent(WE_CLICK, _OnPrintPrescriptionSelectFnc);
	m_wndPrintGeneralExaminationCost.SetEvent(WE_CLICK, _OnPrintGeneralExaminationCostSelectFnc);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPrintInvoice.SetEvent(WE_CLICK, _OnPrintInvoiceSelectFnc);
	SetMode(VM_NONE);
	GetDataToScreen();	
	if(pMF->GetObjectType() == _T("S"))
	{
		m_bPrintGeneralExaminationCost = FALSE;
		m_wndPrintGeneralExaminationCost.EnableWindow(FALSE);

		m_bPrintInvoice = FALSE;
		m_wndPrintInvoice.EnableWindow(FALSE);

		/*if ((pMF->GetCurrentDepartmentID() != _T("C11BCLC")) && (pMF->GetCurrentDepartmentID() != _T("KB_A16")))
		{
			m_bPrintInvoice = FALSE;
			m_wndPrintInvoice.EnableWindow(FALSE);

		}*/
		m_bPrintPrescription = false;
		m_wndPrintPrescription.EnableWindow(TRUE);
		
		UpdateData(FALSE);
	}
}
void CHMSPrintSheet::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndSummarizeExaSheet.GetDlgCtrlID(), m_bSummarizeExaSheet);
	DDX_Check(pDX, m_wndPrintPrescription.GetDlgCtrlID(), m_bPrintPrescription);
	DDX_Check(pDX, m_wndPrintGeneralExaminationCost.GetDlgCtrlID(), m_bPrintGeneralExaminationCost);
	DDX_Check(pDX, m_wndPrintInvoice.GetDlgCtrlID(), m_bPrintInvoice);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_Text(pDX, m_wndSuggestion.GetDlgCtrlID(), m_szSuggestion);
}
void CHMSPrintSheet::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	szSQL.Format(_T(" SELECT hd_conclusion as conclusion ,sys_sel_getname('hms_suggestion', hd_suggestion) as suggestion  from hms_doc WHERE hd_docno = %ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("conclusion"), m_szConclusion);
		rs.GetValue(_T("suggestion"), m_szSuggestion);
	}	
	
	UpdateData(false);
}
void CHMSPrintSheet::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrintSheet::SetDefaultValues(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	/*if(pMF->GetObjectType() == _T("D"))
	{
		m_bPrintPrescription=TRUE;
		m_wndPrintPrescription.EnableWindow(TRUE);
	}
	else
	{
		m_bPrintPrescription=FALSE;
		m_wndPrintPrescription.EnableWindow(FALSE);
	}*/
	
	m_bPrintPrescription=TRUE;
	m_bSummarizeExaSheet=false;
	m_bPrintGeneralExaminationCost=TRUE;
	m_bPrintInvoice=TRUE;
	m_szConclusion.Empty();
	m_szSuggestion.Empty();
}
int CHMSPrintSheet::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues();			
 			break; 
 		};
		
		if(pMF->GetObjectType() == _T("D"))
		{
			m_bPrintPrescription=TRUE;
			m_wndPrintPrescription.EnableWindow(TRUE);
		}
		else
		{
			m_bPrintPrescription=FALSE;
			m_wndPrintPrescription.EnableWindow(FALSE);
		}

		if(pMF->m_szInsuranceMethod2015 == _T("Y") && pMF->IsOutLine())
		{
			m_bPrintGeneralExaminationCost = FALSE;
			m_wndPrintGeneralExaminationCost.EnableWindow(FALSE);
			m_bPrintPrescription=TRUE;
			m_wndPrintPrescription.EnableWindow(TRUE);
		}
		
		/*if (pMF->GetCurrentDepartmentID() == _T("C11BCLC") && pMF->GetObjectType() == _T("S"))
		{
			m_bPrintInvoice=TRUE;
			m_wndPrintInvoice.EnableWindow(TRUE);
		}*/

 		UpdateData(FALSE); 
 		return nOldMode; 
}
	
void CHMSPrintSheet::OnSummarizeExaSheetSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSPrintSheet::OnPrintPrescriptionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSPrintSheet::OnPrintGeneralExaminationCostSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSPrintSheet::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	if(m_bPrintGeneralExaminationCost)
		pMF->PrintGeneralExaminationCost(pMF->m_nInvoiceNo, false);
	if(m_bPrintInvoice)	
		pMF->PrintInvoice(pMF->m_nInvoiceNo, false, true);
	if(m_bPrintPrescription)
	{
		pMF->PrintPrescription(pMF->m_nInvoiceNo,false,true);

		if(pMF->GetObjectType() == _T("S"))
		{
			pMF->PrintPrescription(pMF->m_nInvoiceNo,false,true);
		}
	}
	if(m_bSummarizeExaSheet)
		pMF->PrintSummarizeExaminationSheet(pMF->m_nDocumentNo, true, false, true);
	
	CGuiDialog::OnOK();
} 
void CHMSPrintSheet::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CHMSPrintSheet::OnPrintInvoiceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

	/*void CHMSPrintSheet::OnConclusionChange(){
	
} */
/*void CHMSPrintSheet::OnConclusionSetfocus(){
	
} */
/*void CHMSPrintSheet::OnConclusionKillfocus(){
	
} */
int CHMSPrintSheet::OnConclusionCheckValue(){
	return 0;
} 
/*void CHMSPrintSheet::OnSuggestionChange(){
	
} */
/*void CHMSPrintSheet::OnSuggestionSetfocus(){
	
} */
/*void CHMSPrintSheet::OnSuggestionKillfocus(){
	
} */
int CHMSPrintSheet::OnSuggestionCheckValue(){
	return 0;
}
int CHMSPrintSheet::OnAddHMSPrintSheet(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPrintSheet::OnEditHMSPrintSheet(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrintSheet::OnDeleteHMSPrintSheet(){
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
 		OnCancelHMSPrintSheet(); 
 	}
	return 0;
}
int CHMSPrintSheet::OnSaveHMSPrintSheet(){
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
 		//OnHMSPrintSheetListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPrintSheet::OnCancelHMSPrintSheet(){
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
int CHMSPrintSheet::OnHMSPrintSheetListLoadData(){
	return 0;
}

BOOL CHMSPrintSheet::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F3){
		if(m_wndOk.IsWindowEnabled())
			OnOkSelect();
		return TRUE;
	}

	return CGuiDialog::PreTranslateMessage(pMsg);
}
