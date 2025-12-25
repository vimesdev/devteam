#include "HMSVisitInfoDialog.h"
#include "MainFrm.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYobChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnYobChange();
} */
/*static void _OnYobSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnYobSetfocus();} */ 
/*static void _OnYobKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnYobKillfocus();
} */
static int _OnYobCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnYobCheckValue();
} 
/*static void _OnGenderChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnGenderChange();
} */
/*static void _OnGenderSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnGenderSetfocus();} */ 
/*static void _OnGenderKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnGenderKillfocus();
} */
static int _OnGenderCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnGenderCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnCardIDChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnCardIDChange();
} */
/*static void _OnCardIDSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnCardIDSetfocus();} */ 
/*static void _OnCardIDKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnCardIDKillfocus();
} */
static int _OnCardIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnCardIDCheckValue();
} 
/*static void _OnVisitToTimeChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnVisitToTimeChange();
} */
/*static void _OnVisitToTimeSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnVisitToTimeSetfocus();} */ 
/*static void _OnVisitToTimeKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnVisitToTimeKillfocus();
} */
static int _OnVisitToTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnVisitToTimeCheckValue();
} 
/*static void _OnTimeOutChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnTimeOutChange();
} */
/*static void _OnTimeOutSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnTimeOutSetfocus();} */ 
/*static void _OnTimeOutKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnTimeOutKillfocus();
} */
static int _OnTimeOutCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnTimeOutCheckValue();
} 
/*static void _OnVisitorChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnVisitorChange();
} */
/*static void _OnVisitorSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnVisitorSetfocus();} */ 
/*static void _OnVisitorKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnVisitorKillfocus();
} */
static int _OnVisitorCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnVisitorCheckValue();
} 
/*static void _OnDepositChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnDepositChange();
} */
/*static void _OnDepositSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnDepositSetfocus();} */ 
/*static void _OnDepositKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnDepositKillfocus();
} */
static int _OnDepositCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnDepositCheckValue();
} 
/*static void _OnRefundChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnRefundChange();
} */
/*static void _OnRefundSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnRefundSetfocus();} */ 
/*static void _OnRefundKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnRefundKillfocus();
} */
static int _OnRefundCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnRefundCheckValue();
} 
/*static void _OnConsignmentChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnConsignmentChange();
} */
/*static void _OnConsignmentSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnConsignmentSetfocus();} */ 
/*static void _OnConsignmentKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnConsignmentKillfocus();
} */
static int _OnConsignmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnConsignmentCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSVisitInfoDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisitInfoDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSVisitInfoDialog *pVw = (CHMSVisitInfoDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSVisitInfoDialog *pVw = (CHMSVisitInfoDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSVisitInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSVisitInfoDialog*)pWnd)->OnAddHMSVisitInfoDialog();
} 
static int _OnEditHMSVisitInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSVisitInfoDialog*)pWnd)->OnEditHMSVisitInfoDialog();
} 
static int _OnDeleteHMSVisitInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSVisitInfoDialog*)pWnd)->OnDeleteHMSVisitInfoDialog();
} 
static int _OnSaveHMSVisitInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSVisitInfoDialog*)pWnd)->OnSaveHMSVisitInfoDialog();
} 
static int _OnCancelHMSVisitInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSVisitInfoDialog*)pWnd)->OnCancelHMSVisitInfoDialog();
} 
CHMSVisitInfoDialog::CHMSVisitInfoDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 485;
	m_nDlgHeight = 555;
	SetDefaultValues();
}
CHMSVisitInfoDialog::~CHMSVisitInfoDialog(){
}
void CHMSVisitInfoDialog::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 475, 120);
	m_wndVisitInformation.Create(this, _T("Visit Information"), 5, 125, 475, 520);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 30, 110, 55);
	m_wndPatientName.Create(this,115, 30, 468, 55); 
	m_wndYobLabel.Create(this, _T("Yob"), 10, 60, 110, 85);
	m_wndYob.Create(this,115, 60, 195, 85); 
	m_wndGenderLabel.Create(this, _T("Gender"), 200, 60, 280, 85);
	m_wndGender.Create(this,285, 60, 365, 85); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 90, 110, 115);
	m_wndAddress.Create(this,115, 90, 470, 115); 
	m_wndCardIDLabel.Create(this, _T("Card ID"), 10, 150, 110, 175);
	m_wndCardID.Create(this,115, 150, 265, 175); 
	m_wndVisitToTimeLabel.Create(this, _T("Visit to time"), 10, 180, 110, 205);
	m_wndVisitToTime.Create(this,115, 180, 265, 205); 
	m_wndTimeOutLabel.Create(this, _T("Time out"), 10, 210, 110, 235);
	m_wndTimeOut.Create(this,115, 210, 265, 235); 
	m_wndVisitorLabel.Create(this, _T("Visitor"), 10, 240, 110, 265);
	m_wndVisitor.Create(this,115, 240, 470, 265); 
	m_wndDepositLabel.Create(this, _T("Deposit"), 10, 270, 110, 295);
	m_wndDeposit.Create(this,115, 270, 265, 295); 
	m_wndRefundLabel.Create(this, _T("Refund"), 10, 300, 110, 325);
	m_wndRefund.Create(this,115, 300, 265, 325); 
	m_wndConsignmentLabel.Create(this, _T("Consignment"), 10, 330, 110, 355);
	m_wndConsignment.Create(this,115, 330, 470, 420); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 425, 110, 450);
	m_wndNote.Create(this,115, 425, 470, 515); 
	m_wndApply.Create(this, _T("&Apply"), 300, 525, 385, 550);
	m_wndClose.Create(this, _T("&Close"), 390, 525, 475, 550);

}
void CHMSVisitInfoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndYob.SetLimitText(35);
	m_wndYob.SetCheckValue(true);
	m_wndGender.SetLimitText(35);
	m_wndGender.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndCardID.SetLimitText(15);
	m_wndCardID.SetCheckValue(true);
	m_wndVisitToTime.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndVisitToTime.SetCheckValue(true);
	m_wndTimeOut.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTimeOut.SetCheckValue(true);
	m_wndVisitor.SetLimitText(128);
	m_wndVisitor.SetCheckValue(true);
	m_wndDeposit.SetLimitText(22);
	m_wndDeposit.SetCheckValue(true);
	m_wndRefund.SetLimitText(22);
	m_wndRefund.SetCheckValue(true);
	m_wndConsignment.SetLimitText(254);
	m_wndConsignment.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);
	m_hms_visitinfoTbl.SetTableName(_T("hms_visitinfo"));
	m_hms_visitinfoTbl.AddField(_T("HVI_VISITINFO_ID"), dfLong); 
	m_hms_visitinfoTbl.AddField(_T("HVI_CARDID"), dfText, 15); 
	m_hms_visitinfoTbl.AddField(_T("HVI_VISITTIME"), dfDateTime); 
	m_hms_visitinfoTbl.AddField(_T("HVI_VISITOUT"), dfDateTime); 
	m_hms_visitinfoTbl.AddField(_T("HVI_VISITOR"), dfText, 128); 
	m_hms_visitinfoTbl.AddField(_T("HVI_DEPOSIT"), dfLong); 
	m_hms_visitinfoTbl.AddField(_T("HVI_REFUND"), dfLong); 
	m_hms_visitinfoTbl.AddField(_T("HVI_CONSIGNMENTNOTE"), dfText, 254); 
	m_hms_visitinfoTbl.AddField(_T("HVI_STATUS"), dfText, 1); 

}
void CHMSVisitInfoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndYob.SetEvent(WE_CHANGE, _OnYobChangeFnc);
	//m_wndYob.SetEvent(WE_SETFOCUS, _OnYobSetfocusFnc);
	//m_wndYob.SetEvent(WE_KILLFOCUS, _OnYobKillfocusFnc);
	m_wndYob.SetEvent(WE_CHECKVALUE, _OnYobCheckValueFnc);
	//m_wndGender.SetEvent(WE_CHANGE, _OnGenderChangeFnc);
	//m_wndGender.SetEvent(WE_SETFOCUS, _OnGenderSetfocusFnc);
	//m_wndGender.SetEvent(WE_KILLFOCUS, _OnGenderKillfocusFnc);
	m_wndGender.SetEvent(WE_CHECKVALUE, _OnGenderCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndCardID.SetEvent(WE_CHANGE, _OnCardIDChangeFnc);
	//m_wndCardID.SetEvent(WE_SETFOCUS, _OnCardIDSetfocusFnc);
	//m_wndCardID.SetEvent(WE_KILLFOCUS, _OnCardIDKillfocusFnc);
	m_wndCardID.SetEvent(WE_CHECKVALUE, _OnCardIDCheckValueFnc);
	//m_wndVisitToTime.SetEvent(WE_CHANGE, _OnVisitToTimeChangeFnc);
	//m_wndVisitToTime.SetEvent(WE_SETFOCUS, _OnVisitToTimeSetfocusFnc);
	//m_wndVisitToTime.SetEvent(WE_KILLFOCUS, _OnVisitToTimeKillfocusFnc);
	m_wndVisitToTime.SetEvent(WE_CHECKVALUE, _OnVisitToTimeCheckValueFnc);
	//m_wndTimeOut.SetEvent(WE_CHANGE, _OnTimeOutChangeFnc);
	//m_wndTimeOut.SetEvent(WE_SETFOCUS, _OnTimeOutSetfocusFnc);
	//m_wndTimeOut.SetEvent(WE_KILLFOCUS, _OnTimeOutKillfocusFnc);
	m_wndTimeOut.SetEvent(WE_CHECKVALUE, _OnTimeOutCheckValueFnc);
	//m_wndVisitor.SetEvent(WE_CHANGE, _OnVisitorChangeFnc);
	//m_wndVisitor.SetEvent(WE_SETFOCUS, _OnVisitorSetfocusFnc);
	//m_wndVisitor.SetEvent(WE_KILLFOCUS, _OnVisitorKillfocusFnc);
	m_wndVisitor.SetEvent(WE_CHECKVALUE, _OnVisitorCheckValueFnc);
	//m_wndDeposit.SetEvent(WE_CHANGE, _OnDepositChangeFnc);
	//m_wndDeposit.SetEvent(WE_SETFOCUS, _OnDepositSetfocusFnc);
	//m_wndDeposit.SetEvent(WE_KILLFOCUS, _OnDepositKillfocusFnc);
	m_wndDeposit.SetEvent(WE_CHECKVALUE, _OnDepositCheckValueFnc);
	//m_wndRefund.SetEvent(WE_CHANGE, _OnRefundChangeFnc);
	//m_wndRefund.SetEvent(WE_SETFOCUS, _OnRefundSetfocusFnc);
	//m_wndRefund.SetEvent(WE_KILLFOCUS, _OnRefundKillfocusFnc);
	m_wndRefund.SetEvent(WE_CHECKVALUE, _OnRefundCheckValueFnc);
	//m_wndConsignment.SetEvent(WE_CHANGE, _OnConsignmentChangeFnc);
	//m_wndConsignment.SetEvent(WE_SETFOCUS, _OnConsignmentSetfocusFnc);
	//m_wndConsignment.SetEvent(WE_KILLFOCUS, _OnConsignmentKillfocusFnc);
	m_wndConsignment.SetEvent(WE_CHECKVALUE, _OnConsignmentCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSVisitInfoDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYob.GetDlgCtrlID(), m_szYob);
	DDX_Text(pDX, m_wndGender.GetDlgCtrlID(), m_szGender);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndCardID.GetDlgCtrlID(), m_szCardID);
	DDX_TextEx(pDX, m_wndVisitToTime.GetDlgCtrlID(), m_szVisitToTime);
	DDX_TextEx(pDX, m_wndTimeOut.GetDlgCtrlID(), m_szTimeOut);
	DDX_Text(pDX, m_wndVisitor.GetDlgCtrlID(), m_szVisitor);
	DDX_Text(pDX, m_wndDeposit.GetDlgCtrlID(), m_nDeposit);
	DDX_Text(pDX, m_wndRefund.GetDlgCtrlID(), m_nRefund);
	DDX_Text(pDX, m_wndConsignment.GetDlgCtrlID(), m_szConsignment);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSVisitInfoDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Yob")] =  m_szYob;
	m_jData[_T("Gender")] =  m_szGender;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("CardID")] =  m_szCardID;
	m_jData[_T("VisitToTime")] =  m_szVisitToTime;
	m_jData[_T("TimeOut")] =  m_szTimeOut;
	m_jData[_T("Visitor")] =  m_szVisitor;
	m_jData[_T("Deposit")] =  m_nDeposit;
	m_jData[_T("Refund")] =  m_nRefund;
	m_jData[_T("Consignment")] =  m_szConsignment;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Yob")].GetValue(m_szYob);
	m_jData[_T("Gender")].GetValue(m_szGender);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("CardID")].GetValue(m_szCardID);
	m_jData[_T("VisitToTime")].GetValue(m_szVisitToTime);
	m_jData[_T("TimeOut")].GetValue(m_szTimeOut);
	m_jData[_T("Visitor")].GetValue(m_szVisitor);
	m_jData[_T("Deposit")].GetValue(m_nDeposit);
	m_jData[_T("Refund")].GetValue(m_nRefund);
	m_jData[_T("Consignment")].GetValue(m_szConsignment);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSVisitInfoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HVI_CARDID"), m_szCardID);
	rs.GetValue(_T("HVI_VISITTIME"), m_szVisitToTime);
	rs.GetValue(_T("HVI_VISITOUT"), m_szTimeOut);
	rs.GetValue(_T("HVI_VISITOR"), m_szVisitor);
	rs.GetValue(_T("HVI_DEPOSIT"), m_nDeposit);
	rs.GetValue(_T("HVI_REFUND"), m_nRefund);
	rs.GetValue(_T("HVI_CONSIGNMENTNOTE"), m_szConsignment);

}
void CHMSVisitInfoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_visitinfoTbl.SetValue(_T("HVI_CARDID"), m_szCardID);
	m_hms_visitinfoTbl.SetValue(_T("HVI_VISITTIME"), m_szVisitToTime);
	m_hms_visitinfoTbl.SetValue(_T("HVI_VISITOUT"), m_szTimeOut);
	m_hms_visitinfoTbl.SetValue(_T("HVI_VISITOR"), m_szVisitor);
	m_hms_visitinfoTbl.SetValue(_T("HVI_DEPOSIT"), m_nDeposit);
	m_hms_visitinfoTbl.SetValue(_T("HVI_REFUND"), m_nRefund);
	m_hms_visitinfoTbl.SetValue(_T("HVI_CONSIGNMENTNOTE"), m_szConsignment);

}
void CHMSVisitInfoDialog::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szGender.Empty();
	m_szAddress.Empty();
	m_szCardID.Empty();
	m_szVisitToTime.Empty();
	m_szTimeOut.Empty();
	m_szVisitor.Empty();
	m_nDeposit=0;
	m_nRefund=0;
	m_szConsignment.Empty();
	m_szNote.Empty();

}
int CHMSVisitInfoDialog::SetMode(int nMode){
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
/*void CHMSVisitInfoDialog::OnPatientNameChange(){
	
} */
/*void CHMSVisitInfoDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnPatientNameKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSVisitInfoDialog::OnYobChange(){
	
} */
/*void CHMSVisitInfoDialog::OnYobSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnYobKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnYobCheckValue(){
	return 0;
} 
/*void CHMSVisitInfoDialog::OnGenderChange(){
	
} */
/*void CHMSVisitInfoDialog::OnGenderSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnGenderKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnGenderCheckValue(){
	return 0;
} 
/*void CHMSVisitInfoDialog::OnAddressChange(){
	
} */
/*void CHMSVisitInfoDialog::OnAddressSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnAddressKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSVisitInfoDialog::OnCardIDChange(){
	
} */
/*void CHMSVisitInfoDialog::OnCardIDSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnCardIDKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnCardIDCheckValue(){
	return 0;
} 
/*void CHMSVisitInfoDialog::OnVisitToTimeChange(){
	
} */
/*void CHMSVisitInfoDialog::OnVisitToTimeSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnVisitToTimeKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnVisitToTimeCheckValue(){
	return 0;
} 
/*void CHMSVisitInfoDialog::OnTimeOutChange(){
	
} */
/*void CHMSVisitInfoDialog::OnTimeOutSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnTimeOutKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnTimeOutCheckValue(){
	return 0;
} 
/*void CHMSVisitInfoDialog::OnVisitorChange(){
	
} */
/*void CHMSVisitInfoDialog::OnVisitorSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnVisitorKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnVisitorCheckValue(){
	return 0;
} 
/*void CHMSVisitInfoDialog::OnDepositChange(){
	
} */
/*void CHMSVisitInfoDialog::OnDepositSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnDepositKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnDepositCheckValue(){
	return 0;
} 
/*void CHMSVisitInfoDialog::OnRefundChange(){
	
} */
/*void CHMSVisitInfoDialog::OnRefundSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnRefundKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnRefundCheckValue(){
	return 0;
} 
/*void CHMSVisitInfoDialog::OnConsignmentChange(){
	
} */
/*void CHMSVisitInfoDialog::OnConsignmentSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnConsignmentKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnConsignmentCheckValue(){
	return 0;
} 
/*void CHMSVisitInfoDialog::OnNoteChange(){
	
} */
/*void CHMSVisitInfoDialog::OnNoteSetfocus(){
	
} */
/*void CHMSVisitInfoDialog::OnNoteKillfocus(){
	
} */
int CHMSVisitInfoDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSVisitInfoDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSVisitInfoDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSVisitInfoDialog::OnAddHMSVisitInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSVisitInfoDialog::OnEditHMSVisitInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSVisitInfoDialog::OnDeleteHMSVisitInfoDialog(){
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
 		OnCancelHMSVisitInfoDialog();
 	}
	return 0;
}
int CHMSVisitInfoDialog::OnSaveHMSVisitInfoDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_visitinfoTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_visitinfoTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSVisitInfoDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSVisitInfoDialog::OnCancelHMSVisitInfoDialog(){
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
int CHMSVisitInfoDialog::OnHMSVisitInfoDialogListLoadData(){
	return 0;
}
