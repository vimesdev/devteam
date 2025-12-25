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
	m_nPatientNo = 0;
}
CHMSFastDiagnosticDialog::~CHMSFastDiagnosticDialog(){
}
void CHMSFastDiagnosticDialog::OnCreateComponents(){
	m_wndConclusionInformation.Create(this, _T("Bệnh kèm theo"), 5, 5, 595, 455);
	m_wndDiagnosticICDLabel.Create(this, _T("Diagnostic ICD1"), 10, 30, 130, 55);
	m_wndDiagnosticICD.Create(this,135, 30, 590, 55); 	
	m_wndDiagnosticICD2Label.Create(this, _T("DiagnosticICD2"), 10, 60, 130, 85);
	m_wndDiagnosticICD2.Create(this,135, 60, 590, 85); 
	m_wndDiagnosticICD3Label.Create(this, _T("DiagnosticICD3"), 10, 90, 130, 115);
	m_wndDiagnosticICD3.Create(this,135, 90, 590, 115);	
	m_wndDiagnosticICD4Label.Create(this, _T("DiagnosticICD4"), 10, 120, 130, 145);
	m_wndDiagnosticICD4.Create(this,135, 120, 590, 145); 
	m_wndDiagnosticICD5Label.Create(this, _T("DiagnosticICD5"), 10, 150, 130, 175);
	m_wndDiagnosticICD5.Create(this,135, 150, 590, 175); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 180, 130, 205);
	m_wndConclusion.Create(this,135, 180, 590, 450, TRUE, FALSE, TRUE); 
	m_wndSave.Create(this, _T("&Save"), 385, 460, 485, 485);
	m_wndClose.Create(this, _T("&Close"), 490, 460, 590, 485);

}
void CHMSFastDiagnosticDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDiagnosticICD.SetCheckValue(true);
	m_wndDiagnosticICD.LimitText(35);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);
	//m_wndDiagnosticICD2.SetCheckValue(true);
	m_wndDiagnosticICD2.LimitText(35);
	//m_wndDiagnosticICD3.SetCheckValue(true);
	m_wndDiagnosticICD3.LimitText(35);
	//m_wndDiagnosticICD4.SetCheckValue(true);
	m_wndDiagnosticICD4.LimitText(35);
	//m_wndDiagnosticICD5.SetCheckValue(true);
	m_wndDiagnosticICD5.LimitText(35);

	
	m_wndDiagnosticICD.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDiagnosticICD.InsertColumn(1, _T("Name"), CFMT_TEXT, 550);


	m_wndDiagnosticICD2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDiagnosticICD2.InsertColumn(1, _T("Name"), CFMT_TEXT, 550);


	m_wndDiagnosticICD3.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDiagnosticICD3.InsertColumn(1, _T("Name"), CFMT_TEXT, 550);


	m_wndDiagnosticICD4.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDiagnosticICD4.InsertColumn(1, _T("Name"), CFMT_TEXT, 550);


	m_wndDiagnosticICD5.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDiagnosticICD5.InsertColumn(1, _T("Name"), CFMT_TEXT, 550);

	m_hms_otherdiagnosisTbl.SetTableName(_T("HMS_OTHER_DIAGNOSTIC"));	
	m_hms_otherdiagnosisTbl.AddField(_T("hod_patientno"), dfLong);
	m_hms_otherdiagnosisTbl.AddField(_T("hod_docno"), dfLong);
	m_hms_otherdiagnosisTbl.AddField(_T("hod_diagnostic1"), dfText, 13);
	m_hms_otherdiagnosisTbl.AddField(_T("hod_diagnostic2"), dfText, 13);
	m_hms_otherdiagnosisTbl.AddField(_T("hod_diagnostic3"), dfText, 13);
	m_hms_otherdiagnosisTbl.AddField(_T("hod_diagnostic4"), dfText, 13);
	m_hms_otherdiagnosisTbl.AddField(_T("hod_diagnostic5"), dfText, 13);	
	m_hms_otherdiagnosisTbl.AddField(_T("hod_mainicd"), dfText, 13);	
	m_hms_otherdiagnosisTbl.AddField(_T("hod_conclusion"), dfText, 254);	//Ket luan
	m_hms_otherdiagnosisTbl.AddField(_T("hod_doctor"), dfText, 15);	
	m_hms_otherdiagnosisTbl.AddField(_T("hod_date"), dfDateTime);
	m_hms_otherdiagnosisTbl.AddField(_T("hod_roomid"), dfInteger);	
	m_hms_otherdiagnosisTbl.AddField(_T("hod_deptid"), dfText, 7);	

	

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
	
	GetDataToScreen();

}
void CHMSFastDiagnosticDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDiagnosticICD.GetDlgCtrlID(), m_szDiagnosticICDKey);	
	DDX_TextEx(pDX, m_wndDiagnosticICD2.GetDlgCtrlID(), m_szDiagnosticICD2Key);
	DDX_TextEx(pDX, m_wndDiagnosticICD3.GetDlgCtrlID(), m_szDiagnosticICD3Key);
	DDX_TextEx(pDX, m_wndDiagnosticICD4.GetDlgCtrlID(), m_szDiagnosticICD4Key);
	DDX_TextEx(pDX, m_wndDiagnosticICD5.GetDlgCtrlID(), m_szDiagnosticICD5Key);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
}
void CHMSFastDiagnosticDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(m_nPatientNo <= 0)
	{
		szSQL.Format(_T("SELECT hd_patientno FROM hms_doc WHERE hd_docno = %ld"), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("hd_patientno"), m_nPatientNo);
	}

	szSQL.Format(_T("SELECT * FROM  HMS_OTHER_DIAGNOSTIC WHERE  hod_docno = %ld"), m_nDocumentNo);	

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){		

		rs.GetValue(_T("hod_diagnostic1"), m_szDiagnosticICDKey);
		rs.GetValue(_T("hod_diagnostic2"), m_szDiagnosticICD2Key);
		rs.GetValue(_T("hod_diagnostic3"), m_szDiagnosticICD3Key);
		rs.GetValue(_T("hod_diagnostic4"), m_szDiagnosticICD4Key);
		rs.GetValue(_T("hod_diagnostic5"), m_szDiagnosticICD5Key);
		rs.GetValue(_T("hod_conclusion"), m_szConclusion);		
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_ADD);
	
	OnRecalConclusion();

}
void CHMSFastDiagnosticDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_patientno"), m_nPatientNo);
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_docno"), m_nDocumentNo);
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_diagnostic1"), m_szDiagnosticICDKey);
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_diagnostic2"), m_szDiagnosticICD2Key);
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_diagnostic3"), m_szDiagnosticICD3Key);
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_diagnostic4"), m_szDiagnosticICD4Key);
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_diagnostic5"), m_szDiagnosticICD5Key);
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_mainicd"), m_szICD10Key);
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_conclusion"), m_szConclusion);
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_doctor"), pMF->m_szDoctor);
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_date"), pMF->GetSysDateTime());	
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_roomid"), m_nRoomID);
	m_hms_otherdiagnosisTbl.SetValue(_T("hod_deptid"), pMF->m_szDept);
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
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
	 OnRecalConclusion();
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICDSetfocus(){
	
}*/
/*void CHMSFastDiagnosticDialog::OnDiagnosticICDKillfocus(){
	
}*/
long CHMSFastDiagnosticDialog::OnDiagnosticICDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiagnosticICD.IsSearchKey() && !m_szDiagnosticICDKey.IsEmpty()){
		szWhere.Format(_T(" and hi_icd='%s' "), m_szDiagnosticICDKey);
	}
	m_wndDiagnosticICD.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd WHERE 1=1 %s ORDER BY id "), szWhere);
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosticICD.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
	 OnRecalConclusion();
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD2Setfocus(){
	
}*/
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD2Killfocus(){
	
}*/
long CHMSFastDiagnosticDialog::OnDiagnosticICD2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_szDiagnosticICDKey.IsEmpty()){
		//pMF->SetStatusText(_T("No diagnosis"));
		return -1;
	}

	if(m_wndDiagnosticICD2.IsSearchKey() && !m_szDiagnosticICD2Key.IsEmpty()){
	 szWhere.Format(_T(" and hi_icd='%s' "), m_szDiagnosticICD2Key);
	}
	m_wndDiagnosticICD2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd WHERE hi_icd NOT IN('%s') %s ORDER BY id "), m_szDiagnosticICDKey, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosticICD2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFastDiagnosticDialog::OnDiagnosticICD3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFastDiagnosticDialog::OnDiagnosticICD3Selendok(){
	 OnRecalConclusion();
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD3Setfocus(){
	
}*/
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD3Killfocus(){
	
}*/
long CHMSFastDiagnosticDialog::OnDiagnosticICD3LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_szDiagnosticICD2Key.IsEmpty()){
		//pMF->SetStatusText(_T("No diagnosis"));
		return -1;
	}

	if(m_wndDiagnosticICD3.IsSearchKey() && !m_szDiagnosticICD3Key.IsEmpty()){
		szWhere.Format(_T(" and hi_icd='%s' "), m_szDiagnosticICD3Key);
	}
	m_wndDiagnosticICD3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd WHERE hi_icd NOT IN('%s','%s') %s ORDER BY id "), m_szDiagnosticICDKey,m_szDiagnosticICD2Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosticICD3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFastDiagnosticDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveHMSFastDiagnosticDialog() > 0)
		OnOK();
} 
void CHMSFastDiagnosticDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSFastDiagnosticDialog::OnDiagnosticICD4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFastDiagnosticDialog::OnDiagnosticICD4Selendok(){
	 OnRecalConclusion();
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD4Setfocus(){
	
}*/
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD4Killfocus(){
	
}*/
long CHMSFastDiagnosticDialog::OnDiagnosticICD4LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_szDiagnosticICD3Key.IsEmpty()){
		//pMF->SetStatusText(_T("No diagnosis"));
		return -1;
	}

	if(m_wndDiagnosticICD4.IsSearchKey() && !m_szDiagnosticICD4Key.IsEmpty()){
		szWhere.Format(_T(" and hi_icd='%s' "), m_szDiagnosticICD4Key);
	}
	m_wndDiagnosticICD4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd WHERE hi_icd NOT IN('%s','%s','%s') %s ORDER BY id "), m_szDiagnosticICDKey,m_szDiagnosticICD2Key, m_szDiagnosticICD3Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosticICD4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFastDiagnosticDialog::OnDiagnosticICD5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFastDiagnosticDialog::OnDiagnosticICD5Selendok(){
	 OnRecalConclusion();
}
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD5Setfocus(){
	
}*/
/*void CHMSFastDiagnosticDialog::OnDiagnosticICD5Killfocus(){
	
}*/
long CHMSFastDiagnosticDialog::OnDiagnosticICD5LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_szDiagnosticICD4Key.IsEmpty()){ 
		//pMF->SetStatusText(_T("No diagnosis"));
		return -1;
	}

	if(m_wndDiagnosticICD5.IsSearchKey() && !m_szDiagnosticICD5Key.IsEmpty()){
		szWhere.Format(_T(" and hi_icd='%s' "), m_szDiagnosticICD5Key);
	}
	m_wndDiagnosticICD5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd WHERE hi_icd NOT IN('%s','%s','%s','%s') %s ORDER BY id "), m_szDiagnosticICDKey,m_szDiagnosticICD2Key, m_szDiagnosticICD3Key, m_szDiagnosticICD4Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagnosticICD5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
 		szSQL = m_hms_otherdiagnosisTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE  hod_docno = %ld"),m_nDocumentNo);
 		szSQL = m_hms_otherdiagnosisTbl.GetUpdateSQL(_T("hod_docno"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{ 		
		szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_reldisease='%s' WHERE hcr_docno=%ld"), m_szConclusion,  m_nDocumentNo);
		pMF->ExecSQL(szSQL);
 		SetMode(VM_VIEW);
 	}
 	
 	return ret; 	
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
void CHMSFastDiagnosticDialog::OnRecalConclusion(){
	CString tmpStr;
	UpdateData(true);
	if(!m_szConclusionx.IsEmpty())
	{
		if(m_szConclusionx.Left(1) == _T("-"))
			tmpStr.Format(_T("%s\r\n"), m_szConclusionx);
		else
			tmpStr.Format(_T("- %s\r\n"), m_szConclusionx);
	}

	if(!m_szDiagnosticICDKey.IsEmpty())
		tmpStr.AppendFormat(_T("- %s [%s] \r\n"), m_wndDiagnosticICD.GetCurrent(1),m_wndDiagnosticICD.GetCurrent(0));
	
	if(!m_szDiagnosticICD2Key.IsEmpty())
		tmpStr.AppendFormat(_T("- %s [%s] \r\n"), m_wndDiagnosticICD2.GetCurrent(1),m_wndDiagnosticICD2.GetCurrent(0));

	if(!m_szDiagnosticICD3Key.IsEmpty())
		tmpStr.AppendFormat(_T("- %s [%s] \r\n"), m_wndDiagnosticICD3.GetCurrent(1),m_wndDiagnosticICD3.GetCurrent(0));

	if(!m_szDiagnosticICD4Key.IsEmpty())
		tmpStr.AppendFormat(_T("- %s [%s] \r\n"), m_wndDiagnosticICD4.GetCurrent(1),m_wndDiagnosticICD4.GetCurrent(0));

	if(!m_szDiagnosticICD5Key.IsEmpty())
		tmpStr.AppendFormat(_T("- %s [%s] \r\n"), m_wndDiagnosticICD5.GetCurrent(1),m_wndDiagnosticICD5.GetCurrent(0));
	
	m_szConclusion = tmpStr;
	UpdateData(false);
}
