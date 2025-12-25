#include "HMSEditCardDateDialog.h"
#include "MainFrm.h"


/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditCardDateDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditCardDateDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnRegistrationDateChangeFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnRegistrationDateChange();
} */
/*static void _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnRegistrationDateSetfocus();} */ 
/*static void _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditCardDateDialog *)pWnd)->OnRegistrationDateCheckValue();
} 
/*static void _OnExpiryDateChangeFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnExpiryDateChange();
} */
/*static void _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnExpiryDateSetfocus();} */ 
/*static void _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	((CHMSEditCardDateDialog *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditCardDateDialog *)pWnd)->OnExpiryDateCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSEditCardDateDialog *pVw = (CHMSEditCardDateDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEditCardDateDialog *pVw = (CHMSEditCardDateDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnOutLineSelectFnc(CWnd *pWnd){
	 ((CHMSEditCardDateDialog*)pWnd)->OnOutLineSelect();
}
static int _OnAddHMSEditCardDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditCardDateDialog*)pWnd)->OnAddHMSEditCardDateDialog();
} 
static int _OnEditHMSEditCardDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditCardDateDialog*)pWnd)->OnEditHMSEditCardDateDialog();
} 
static int _OnDeleteHMSEditCardDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditCardDateDialog*)pWnd)->OnDeleteHMSEditCardDateDialog();
} 
static int _OnSaveHMSEditCardDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditCardDateDialog*)pWnd)->OnSaveHMSEditCardDateDialog();
} 
static int _OnCancelHMSEditCardDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditCardDateDialog*)pWnd)->OnCancelHMSEditCardDateDialog();
} 
CHMSEditCardDateDialog::CHMSEditCardDateDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 470;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CHMSEditCardDateDialog::~CHMSEditCardDateDialog(){
}
void CHMSEditCardDateDialog::OnCreateComponents()
{
	m_wndCardNumberInformation.Create(this, _T("Card Number Information"), 5, 5, 460, 120);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 30, 130, 55);
	m_wndPatientName.Create(this,135, 30, 455, 55); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 60, 130, 85);
	m_wndCardNo.Create(this,135, 60, 455, 85); 
	m_wndRegistrationDateLabel.Create(this, _T("Registration Date"), 10, 90, 130, 115);
	m_wndRegistrationDate.Create(this,135, 90, 245, 115); 
	m_wndExpiryDateLabel.Create(this, _T("Expiry Date"), 250, 90, 340, 115);
	m_wndExpiryDate.Create(this,345, 90, 455, 115); 
	m_wndApply.Create(this, _T("&Apply"), 290, 125, 370, 150);
	m_wndClose.Create(this, _T("&Close"), 375, 125, 455, 150);
	m_wndOutLine.Create(this, _T("Out Line"), 5, 125, 125, 150);

}
void CHMSEditCardDateDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(75);
	//m_wndPatientName.SetCheckValue(true);
	m_wndCardNo.SetLimitText(25);
	//m_wndCardNo.SetCheckValue(true);
	//m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetCheckValue(true);
	//m_wndExpiryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);

}
void CHMSEditCardDateDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndRegistrationDate.SetEvent(WE_CHANGE, _OnRegistrationDateChangeFnc);
	//m_wndRegistrationDate.SetEvent(WE_SETFOCUS, _OnRegistrationDateSetfocusFnc);
	//m_wndRegistrationDate.SetEvent(WE_KILLFOCUS, _OnRegistrationDateKillfocusFnc);
	m_wndRegistrationDate.SetEvent(WE_CHECKVALUE, _OnRegistrationDateCheckValueFnc);
	//m_wndExpiryDate.SetEvent(WE_CHANGE, _OnExpiryDateChangeFnc);
	//m_wndExpiryDate.SetEvent(WE_SETFOCUS, _OnExpiryDateSetfocusFnc);
	//m_wndExpiryDate.SetEvent(WE_KILLFOCUS, _OnExpiryDateKillfocusFnc);
	m_wndExpiryDate.SetEvent(WE_CHECKVALUE, _OnExpiryDateCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndOutLine.SetEvent(WE_CLICK, _OnOutLineSelectFnc);

	SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize() + 2, true);
	SetWindowFont(&m_wndCardNo, GetFaceName(), GetFaceSize() + 1, true);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));

	CString szSQL;
	CRecord rs(&pMF->m_db);

	szSQL.Format(_T("SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname FROM hms_patient ") \
		         _T("WHERE hp_patientno=%ld"), m_nPatientNo);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), m_szPatientName);
	}

	SetMode(VM_EDIT);

	if (m_bOutLine)
	{
		m_wndCardNo.SetTextColor(RGB(255, 0, 0));
	}
	else
	{
		m_wndCardNo.SetTextColor(RGB(0, 0, 255));
	}

}
void CHMSEditCardDateDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_Check(pDX, m_wndOutLine.GetDlgCtrlID(), m_bOutLine);
}
void CHMSEditCardDateDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSEditCardDateDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSEditCardDateDialog::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szCardNo.Empty();
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_bOutLine=FALSE;

}
int CHMSEditCardDateDialog::SetMode(int nMode){
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
			m_wndRegistrationDate.SetFocus();
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
		m_wndOutLine.EnableWindow(FALSE);
		m_wndPatientName.EnableWindow(FALSE);
		m_wndCardNo.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSEditCardDateDialog::OnPatientNameChange(){
	
} */
/*void CHMSEditCardDateDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSEditCardDateDialog::OnPatientNameKillfocus(){
	
} */
int CHMSEditCardDateDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSEditCardDateDialog::OnCardNoChange(){
	
} */
/*void CHMSEditCardDateDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSEditCardDateDialog::OnCardNoKillfocus(){
	
} */
int CHMSEditCardDateDialog::OnCardNoCheckValue(){
	return 0;
} 
/*void CHMSEditCardDateDialog::OnRegistrationDateChange(){
	
} */
/*void CHMSEditCardDateDialog::OnRegistrationDateSetfocus(){
	
} */
/*void CHMSEditCardDateDialog::OnRegistrationDateKillfocus(){
	
} */
int CHMSEditCardDateDialog::OnRegistrationDateCheckValue(){
	return 0;
} 
/*void CHMSEditCardDateDialog::OnExpiryDateChange(){
	
} */
/*void CHMSEditCardDateDialog::OnExpiryDateSetfocus(){
	
} */
/*void CHMSEditCardDateDialog::OnExpiryDateKillfocus(){
	
} */
int CHMSEditCardDateDialog::OnExpiryDateCheckValue(){
	return 0;
} 
void CHMSEditCardDateDialog::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int ret;

	UpdateData(TRUE);

	pMF->BeginTransaction();
	szSQL.Format(_T("UPDATE hms_card SET hc_regdate=to_date('%s', 'yyyy/mm/dd hh24:mi:ss'), hc_expdate=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		         _T("WHERE hc_idx=%ld AND hc_patientno=%ld"),
				 m_szRegistrationDate, m_szExpiryDate, m_nCardIdx, m_nPatientNo);
	ret = pMF->ExecSQL(szSQL);

	if (ret <= 0)
	{
		ShowMessageBox(_T("Error while updating data!"), MB_OK | MB_ICONERROR);
		pMF->Rollback();
		return;
	}

	szSQL.Format(_T("SELECT Count(*) FROM hms_doc WHERE hd_docno=%ld AND hd_cardidx=%ld"),
		         m_nDocNo, m_nCardIdx);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0)
	{
		szSQL.Format(_T("UPDATE hms_doc SET hd_insregdate=to_date('%s', 'yyyy/mm/dd hh24:mi:ss'), ") \
					_T("hd_insexpdate=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') WHERE hd_docno=%ld"),
					m_szRegistrationDate, m_szExpiryDate, m_nDocNo);

		ret = pMF->ExecSQL(szSQL);
	}

	pMF->Commit();
	OnOK();
} 
void CHMSEditCardDateDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSEditCardDateDialog::OnOutLineSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSEditCardDateDialog::OnAddHMSEditCardDateDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEditCardDateDialog::OnEditHMSEditCardDateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEditCardDateDialog::OnDeleteHMSEditCardDateDialog(){
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
 		OnCancelHMSEditCardDateDialog();
 	}
	return 0;
}
int CHMSEditCardDateDialog::OnSaveHMSEditCardDateDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_cardTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_cardTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSEditCardDateDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSEditCardDateDialog::OnCancelHMSEditCardDateDialog(){
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
int CHMSEditCardDateDialog::OnHMSEditCardDateDialogListLoadData(){
	return 0;
}
