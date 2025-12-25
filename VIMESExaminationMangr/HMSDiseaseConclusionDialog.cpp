#include "HMSDiseaseConclusionDialog.h"
#include "MainFrm.h"

/*static void _OnHealthRankChangeFnc(CWnd *pWnd){
	((CHMSDiseaseConclusionDialog *)pWnd)->OnHealthRankChange();
} */
/*static void _OnHealthRankSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseConclusionDialog *)pWnd)->OnHealthRankSetfocus();} */ 
/*static void _OnHealthRankKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseConclusionDialog *)pWnd)->OnHealthRankKillfocus();
} */
static int _OnHealthRankCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseaseConclusionDialog *)pWnd)->OnHealthRankCheckValue();
} 
/*static void _OnTrackingDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDiseaseConclusionDialog *)pWnd)->OnTrackingDiseaseChange();
} */
/*static void _OnTrackingDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseConclusionDialog *)pWnd)->OnTrackingDiseaseSetfocus();} */ 
/*static void _OnTrackingDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseConclusionDialog *)pWnd)->OnTrackingDiseaseKillfocus();
} */
static int _OnTrackingDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseaseConclusionDialog *)pWnd)->OnTrackingDiseaseCheckValue();
} 
/*static void _OnOtherIssueChangeFnc(CWnd *pWnd){
	((CHMSDiseaseConclusionDialog *)pWnd)->OnOtherIssueChange();
} */
/*static void _OnOtherIssueSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseConclusionDialog *)pWnd)->OnOtherIssueSetfocus();} */ 
/*static void _OnOtherIssueKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseConclusionDialog *)pWnd)->OnOtherIssueKillfocus();
} */
static int _OnOtherIssueCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseaseConclusionDialog *)pWnd)->OnOtherIssueCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDiseaseConclusionDialog *pVw = (CHMSDiseaseConclusionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDiseaseConclusionDialog *pVw = (CHMSDiseaseConclusionDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDiseaseConclusionDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseConclusionDialog*)pWnd)->OnAddHMSDiseaseConclusionDialog();
} 
static int _OnEditHMSDiseaseConclusionDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseConclusionDialog*)pWnd)->OnEditHMSDiseaseConclusionDialog();
} 
static int _OnDeleteHMSDiseaseConclusionDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseConclusionDialog*)pWnd)->OnDeleteHMSDiseaseConclusionDialog();
} 
static int _OnSaveHMSDiseaseConclusionDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseConclusionDialog*)pWnd)->OnSaveHMSDiseaseConclusionDialog();
} 
static int _OnCancelHMSDiseaseConclusionDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseConclusionDialog*)pWnd)->OnCancelHMSDiseaseConclusionDialog();
} 
CHMSDiseaseConclusionDialog::CHMSDiseaseConclusionDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 480;
	m_nDlgHeight = 235;
	SetDefaultValues();
}
CHMSDiseaseConclusionDialog::~CHMSDiseaseConclusionDialog(){
}
void CHMSDiseaseConclusionDialog::OnCreateComponents()
{
	m_wndConclusionInfo.Create(this, _T("Conclusion"), 5, 5, 470, 195);
	m_wndHealthRankLabel.Create(this, _T("Health Rank"), 10, 30, 160, 55);
	m_wndHealthRank.Create(this,165, 30, 465, 80, 1, 0, 1); 
	m_wndTrackingDiseaseLabel.Create(this, _T("Tracking Disease"), 10, 85, 160, 110);
	m_wndTrackingDisease.Create(this,165, 85, 465, 135, 1, 0, 1); 
	m_wndOtherIssueLabel.Create(this, _T("Other Issue"), 10, 140, 160, 165);
	m_wndOtherIssue.Create(this,165, 140, 465, 190, 1, 0, 1); 
	m_wndSave.Create(this, _T("&Save"), 285, 200, 375, 225);
	m_wndClose.Create(this, _T("&Close"), 380, 200, 470, 225);

}
void CHMSDiseaseConclusionDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndHealthRank.SetLimitText(1024);
	//m_wndHealthRank.SetCheckValue(true);
	m_wndTrackingDisease.SetLimitText(1024);
	//m_wndTrackingDisease.SetCheckValue(true);
	m_wndOtherIssue.SetLimitText(1024);
	//m_wndOtherIssue.SetCheckValue(true);

}
void CHMSDiseaseConclusionDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndHealthRank.SetEvent(WE_CHANGE, _OnHealthRankChangeFnc);
	//m_wndHealthRank.SetEvent(WE_SETFOCUS, _OnHealthRankSetfocusFnc);
	//m_wndHealthRank.SetEvent(WE_KILLFOCUS, _OnHealthRankKillfocusFnc);
	m_wndHealthRank.SetEvent(WE_CHECKVALUE, _OnHealthRankCheckValueFnc);
	//m_wndTrackingDisease.SetEvent(WE_CHANGE, _OnTrackingDiseaseChangeFnc);
	//m_wndTrackingDisease.SetEvent(WE_SETFOCUS, _OnTrackingDiseaseSetfocusFnc);
	//m_wndTrackingDisease.SetEvent(WE_KILLFOCUS, _OnTrackingDiseaseKillfocusFnc);
	m_wndTrackingDisease.SetEvent(WE_CHECKVALUE, _OnTrackingDiseaseCheckValueFnc);
	//m_wndOtherIssue.SetEvent(WE_CHANGE, _OnOtherIssueChangeFnc);
	//m_wndOtherIssue.SetEvent(WE_SETFOCUS, _OnOtherIssueSetfocusFnc);
	//m_wndOtherIssue.SetEvent(WE_KILLFOCUS, _OnOtherIssueKillfocusFnc);
	m_wndOtherIssue.SetEvent(WE_CHECKVALUE, _OnOtherIssueCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	SetMode(GetMode());
	GetDataToScreen();
}
void CHMSDiseaseConclusionDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndHealthRank.GetDlgCtrlID(), m_szHealthRank);
	DDX_Text(pDX, m_wndTrackingDisease.GetDlgCtrlID(), m_szTrackingDisease);
	DDX_Text(pDX, m_wndOtherIssue.GetDlgCtrlID(), m_szOtherIssue);

}
void CHMSDiseaseConclusionDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr;

	szSQL.Format(_T("SELECT * FROM hms_commander_exam WHERE hce_docno=%ld AND hce_idx=%ld"),
		         m_nDocNo, m_nIdx);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hce_health_rank"), m_szHealthRank);
		rs.GetValue(_T("hce_tracking_disease"), m_szTrackingDisease);
		rs.GetValue(_T("hce_other_issue"), m_szOtherIssue);
		rs.GetValue(_T("hce_status"), tmpStr);

		if (tmpStr == _T("T"))
			m_bIsTerminated = true;
		else
			m_bIsTerminated = false;

		UpdateData(FALSE);
	}
}
void CHMSDiseaseConclusionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDiseaseConclusionDialog::SetDefaultValues(){

	m_szHealthRank.Empty();
	m_szTrackingDisease.Empty();
	m_szOtherIssue.Empty();

}
int CHMSDiseaseConclusionDialog::SetMode(int nMode)
{
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
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndHealthRank.SetFocus();
			m_wndHealthRank.SetSel(m_wndHealthRank.GetWindowTextLength(),
				                   m_wndHealthRank.GetWindowTextLength());
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
/*void CHMSDiseaseConclusionDialog::OnHealthRankChange(){
	
} */
/*void CHMSDiseaseConclusionDialog::OnHealthRankSetfocus(){
	
} */
/*void CHMSDiseaseConclusionDialog::OnHealthRankKillfocus(){
	
} */
int CHMSDiseaseConclusionDialog::OnHealthRankCheckValue(){
	return 0;
} 
/*void CHMSDiseaseConclusionDialog::OnTrackingDiseaseChange(){
	
} */
/*void CHMSDiseaseConclusionDialog::OnTrackingDiseaseSetfocus(){
	
} */
/*void CHMSDiseaseConclusionDialog::OnTrackingDiseaseKillfocus(){
	
} */
int CHMSDiseaseConclusionDialog::OnTrackingDiseaseCheckValue(){
	return 0;
} 
/*void CHMSDiseaseConclusionDialog::OnOtherIssueChange(){
	
} */
/*void CHMSDiseaseConclusionDialog::OnOtherIssueSetfocus(){
	
} */
/*void CHMSDiseaseConclusionDialog::OnOtherIssueKillfocus(){
	
} */
int CHMSDiseaseConclusionDialog::OnOtherIssueCheckValue(){
	return 0;
} 
void CHMSDiseaseConclusionDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;

	UpdateData(TRUE);

	if ((m_szHealthRank.Trim().GetLength() +
		 m_szTrackingDisease.Trim().GetLength() +
		 m_szOtherIssue.Trim().GetLength()) <= 0)
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	pMF->BeginTransaction();

	szSQL.Format(_T("UPDATE hms_commander_exam ") \
		         _T("SET hce_health_rank='%s', hce_tracking_disease='%s', hce_other_issue='%s' ") \
				 _T("WHERE hce_docno=%ld AND hce_idx=%ld"),
				 m_szHealthRank, m_szTrackingDisease, m_szOtherIssue,
				 m_nDocNo, m_nIdx);
	int ret = pMF->ExecSQL(szSQL);

	if (ret > 0)
	{
		if (!m_bIsTerminated)
		{
			szSQL.Format(_T("UPDATE hms_commander_exam ") \
				         _T("SET hce_status='T' ") \
						 _T("WHERE hce_docno=%ld AND hce_idx=%ld"),
						 m_nDocNo, m_nIdx);
			pMF->ExecSQL(szSQL);

			m_bIsTerminated = true;
		}
	}
	else
	{
		pMF->Rollback();
		ShowMessageBox(_T("Error while updating data!"), MB_ICONERROR | MB_OK);
		return;
	}

	pMF->Commit();
	OnOK();
} 
void CHMSDiseaseConclusionDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSDiseaseConclusionDialog::OnAddHMSDiseaseConclusionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDiseaseConclusionDialog::OnEditHMSDiseaseConclusionDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDiseaseConclusionDialog::OnDeleteHMSDiseaseConclusionDialog(){
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
 		OnCancelHMSDiseaseConclusionDialog();
 	}
	return 0;
}
int CHMSDiseaseConclusionDialog::OnSaveHMSDiseaseConclusionDialog(){
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
 		//OnHMSDiseaseConclusionDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDiseaseConclusionDialog::OnCancelHMSDiseaseConclusionDialog()
{
 	if (GetMode() == VM_EDIT)
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
int CHMSDiseaseConclusionDialog::OnHMSDiseaseConclusionDialogListLoadData(){
	return 0;
}
