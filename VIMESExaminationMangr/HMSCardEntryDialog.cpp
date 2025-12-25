#include "HMSCardEntryDialog.h"
#include "MainFrm.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnPatientNameCheckValue();
} 

static int _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSCardEntryDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnObjectSelendokFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectSelendok();
}
/*static int _OnObjectSetfocusFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static int _OnObjectKillfocusFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectKillfocus();
}*/
static int _OnObjectLoadDataFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectLoadData();
}
/*static int _OnObjectAddNewFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectAddNew();
}*/

/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDiscountCheckValue();
} 
/*static void _OnRegistrationDateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateChange();
} */
/*static void _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateSetfocus();} */ 
/*static void _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateCheckValue();
} 
/*static void _OnExpiryDateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpiryDateChange();
} */
/*static void _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpiryDateSetfocus();} */ 
/*static void _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnExpiryDateCheckValue();
} 
static void _OnRegistrationPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCardEntryDialog* )pWnd)->OnRegistrationPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRegistrationPlaceSelendokFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceSelendok();
}
/*static void _OnRegistrationPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
/*static void _OnRegistrationPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
static long _OnRegistrationPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceLoadData();
}
/*static void _OnRegistrationPlaceAddNewFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceAddNew();
}*/
/*static void _OnCompanyChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompanyChange();
} */
/*static void _OnCompanySetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompanySetfocus();} */ 
/*static void _OnCompanyKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompanyKillfocus();
} */
static int _OnCompanyCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCompanyCheckValue();
}
/*static void _OnHospitalChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnHospitalChange();
} */
/*static void _OnHospitalSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnHospitalSetfocus();} */ 
/*static void _OnHospitalKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnHospitalKillfocus();
} */
static int _OnHospitalCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnHospitalCheckValue();
}
/*static void _OnTransferDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnTransferDiagnosticChange();
} */
/*static void _OnTransferDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnTransferDiagnosticSetfocus();} */ 
/*static void _OnTransferDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnTransferDiagnosticKillfocus();
} */
static int _OnTransferDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnTransferDiagnosticCheckValue();
}
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnAddHMSCardEntryDialog();
} 
static int _OnEditHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnEditHMSCardEntryDialog();
} 
static int _OnDeleteHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnDeleteHMSCardEntryDialog();
} 
static int _OnSaveHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnSaveHMSCardEntryDialog();
} 
static int _OnCancelHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnCancelHMSCardEntryDialog();
} 
CHMSCardEntryDialog::CHMSCardEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 425;
	m_nDlgHeight = 370;
	SetDefaultValues();
}
CHMSCardEntryDialog::~CHMSCardEntryDialog()
{
}
void CHMSCardEntryDialog::OnCreateComponents()
{
	m_wndCardNumberInformation.Create(this, _T("Card Number Information"), 5, 5, 415, 210);
	m_wndTransferInformation.Create(this, _T("Transfer Information"), 5, 215, 415, 360);
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 29, 135, 54);
	m_wndCardNo.Create(this,140, 30, 410, 55); 
	m_wndCodeLabel.Create(this, _T("Code"), 10, 60, 135, 85);
	m_wndCode.Create(this,140, 60, 225, 85); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 230, 60, 320, 85);
	m_wndDiscount.Create(this,325, 60, 375, 85);
	m_wndPercentLabel.Create(this, _T("%"), 380, 60, 410, 85);
	m_wndRegistrationDateLabel.Create(this, _T("Registration Date"), 10, 90, 135, 115);
	m_wndRegistrationDate.Create(this,140, 90, 225, 115); 
	m_wndExpiryDateLabel.Create(this, _T("Expiry Date"), 230, 90, 320, 115);
	m_wndExpiryDate.Create(this,325, 90, 410, 115); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Registration Place"), 10, 120, 135, 145);
	m_wndRegistrationPlace.Create(this,140, 120, 410, 145); 
	m_wndCompanyLabel.Create(this, _T("Company"), 10, 150, 135, 175);
	m_wndCompany.Create(this,140, 150, 410, 175); 
	m_wndPaymentFromDateLabel.Create(this, _T("Payment Date"), 10, 180, 135, 205);
	m_wndPaymentFromDate.Create(this,140, 180, 225, 205); 
	m_wndOffLine.Create(this, _T("Out Line"), 320, 180, 410, 205);
	m_wndHospitalLabel.Create(this, _T("Hospital"), 10, 240, 135, 265);
	m_wndHospital.Create(this,140, 240, 410, 265); 
	m_wndTransferDiagnosticLabel.Create(this, _T("Transfer Diagnostic"), 10, 270, 135, 295);
	m_wndTransferDiagnostic.Create(this, 140, 270, 410, 355, 1, 0, 1);

	m_wndPatientNameLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndPatientNameLabel.ShowWindow(SW_HIDE);
	m_wndPatientNameLabel.EnableWindow(FALSE);
	m_wndPatientName.Create(this, 0, 0, 0, 0);
	m_wndPatientName.ShowWindow(SW_HIDE);
	m_wndPatientName.EnableWindow(FALSE);
	m_wndObjectLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndObjectLabel.ShowWindow(SW_HIDE);
	m_wndObjectLabel.EnableWindow(FALSE);
	m_wndObject.Create(this, 0, 0, 0, 0);
	m_wndObject.ShowWindow(SW_HIDE);
	m_wndObject.EnableWindow(FALSE);
}
void CHMSCardEntryDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szCardFormat;	

	m_wndCardNo.SetLimitText(20);
	m_wndCardNo.SetTextColor(RGB(0, 0, 255));
	m_wndCardNo.SetCheckValue(true);
	m_wndCardNo.ModifyStyle(0, ES_UPPERCASE);
//	szCardFormat = pMF->m_wndRegistration.m_wndObject.GetCurrent(3);
//	m_wndCardNo.SetMask(szCardFormat);
	m_wndDiscount.SetLimitText(3);
	m_wndDiscount.SetReadOnly(true);
//	m_wndDiscount.SetCheckValue(true);
	m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetCheckValue(true);
	m_wndExpiryDate.SetMin(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetCheckValue(true);
	m_wndRegistrationPlace.LimitText(128);
	m_wndPatientName.SetReadOnly(true);
	m_wndCode.SetLimitText(3);
	m_wndCode.SetReadOnly(true);
	m_wndPaymentFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPaymentFromDate.SetCheckValue(true);
	m_wndHospital.SetLimitText(254);
	//m_wndHospital.SetCheckValue(true);
	m_wndTransferDiagnostic.SetLimitText(254);
	m_wndTransferDiagnostic.SetMultiLine(TRUE);
	//m_wndTransferDiagnostic.SetCheckValue(true);

	m_wndRegistrationPlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndRegistrationPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	m_hms_cardTbl.SetTableName(_T("hms_card"));
	m_hms_cardTbl.AddField(_T("hc_updatedby"), dfText, 15); 
	m_hms_cardTbl.AddField(_T("hc_updateddate"), dfDateTime, 4); 
	m_hms_cardTbl.AddField(_T("hc_patientno"), dfLong); 
	m_hms_cardTbl.AddField(_T("hc_cardno"), dfText, 25); 
	m_hms_cardTbl.AddField(_T("hc_idx"), dfInteger); 
	m_hms_cardTbl.AddField(_T("hc_regdate"), dfDate); 
	m_hms_cardTbl.AddField(_T("hc_expdate"), dfDate); 
	m_hms_cardTbl.AddField(_T("hc_regcode"), dfText, 7); 
	m_hms_cardTbl.AddField(_T("hc_company"), dfText, 254); 
	m_hms_cardTbl.AddField(_T("hc_code"), dfText, 3); 
	m_hms_cardTbl.AddField(_T("hc_discount"), dfInteger); 
	m_hms_cardTbl.AddField(_T("hc_groupid"), dfInteger); 

}
void CHMSCardEntryDialog::OnSetWindowEvents(){
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);	
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	//m_wndRegistrationDate.SetEvent(WE_CHANGE, _OnRegistrationDateChangeFnc);
	//m_wndRegistrationDate.SetEvent(WE_SETFOCUS, _OnRegistrationDateSetfocusFnc);
	//m_wndRegistrationDate.SetEvent(WE_KILLFOCUS, _OnRegistrationDateKillfocusFnc);
	m_wndRegistrationDate.SetEvent(WE_CHECKVALUE, _OnRegistrationDateCheckValueFnc);
	//m_wndExpiryDate.SetEvent(WE_CHANGE, _OnExpiryDateChangeFnc);
	//m_wndExpiryDate.SetEvent(WE_SETFOCUS, _OnExpiryDateSetfocusFnc);
	//m_wndExpiryDate.SetEvent(WE_KILLFOCUS, _OnExpiryDateKillfocusFnc);
	m_wndExpiryDate.SetEvent(WE_CHECKVALUE, _OnExpiryDateCheckValueFnc);
	m_wndRegistrationPlace.SetEvent(WE_SELENDOK, _OnRegistrationPlaceSelendokFnc);
	//m_wndRegistrationPlace.SetEvent(WE_SETFOCUS, _OnRegistrationPlaceSetfocusFnc);
	//m_wndRegistrationPlace.SetEvent(WE_KILLFOCUS, _OnRegistrationPlaceKillfocusFnc);
	m_wndRegistrationPlace.SetEvent(WE_SELCHANGE, _OnRegistrationPlaceSelectChangeFnc);
	m_wndRegistrationPlace.SetEvent(WE_LOADDATA, _OnRegistrationPlaceLoadDataFnc);
	//m_wndRegistrationPlace.SetEvent(WE_ADDNEW, _OnRegistrationPlaceAddNewFnc);
	//m_wndCompany.SetEvent(WE_CHANGE, _OnCompanyChangeFnc);
	//m_wndCompany.SetEvent(WE_SETFOCUS, _OnCompanySetfocusFnc);
	//m_wndCompany.SetEvent(WE_KILLFOCUS, _OnCompanyKillfocusFnc);
	m_wndCompany.SetEvent(WE_CHECKVALUE, _OnCompanyCheckValueFnc);
	//m_wndHospital.SetEvent(WE_CHANGE, _OnHospitalChangeFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	m_wndHospital.SetEvent(WE_CHECKVALUE, _OnHospitalCheckValueFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_CHANGE, _OnTransferDiagnosticChangeFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_SETFOCUS, _OnTransferDiagnosticSetfocusFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_KILLFOCUS, _OnTransferDiagnosticKillfocusFnc);
	m_wndTransferDiagnostic.SetEvent(WE_CHECKVALUE, _OnTransferDiagnosticCheckValueFnc);
	//m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	//m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();
	SetMode(VM_VIEW);
}
void CHMSCardEntryDialog::OnDoDataExchange(CDataExchange* pDX)
{	
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_TextEx(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlaceKey);
	DDX_Text(pDX, m_wndCompany.GetDlgCtrlID(), m_szCompany);
	DDX_Check(pDX, m_wndOffLine.GetDlgCtrlID(), m_bOffLine);	
	DDX_TextEx(pDX, m_wndPaymentFromDate.GetDlgCtrlID(), m_szPaymentFromDate);
	DDX_Text(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospital);
	DDX_Text(pDX, m_wndTransferDiagnostic.GetDlgCtrlID(), m_szTransferDiagnostic);
}
void CHMSCardEntryDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsd(&pMF->m_db);
	CRecord rst(&pMF->m_db);

	CString szSQL, m_szOffLine;
	szSQL.Format(_T("SELECT hd_insregdate, ")\
		         _T("hc_cardno, ") \
				 _T("hc_regdate, ") \
 				 _T("hc_expdate, ") \
				 _T("hc_regcode, ") \
				 _T("hc_company, ") \
				 _T("hc_code, ") \
				 _T("hc_discount, ") \
				 _T("hc_groupid ") \
				 _T("FROM hms_doc ") \
				 _T("LEFT JOIN hms_card ON(hd_patientno=hc_patientno AND hd_cardidx=hc_idx) ") \
				 _T("WHERE hc_cardno ='%s' AND hd_docno =%ld "),
				 pMF->m_wndPatientDocument.m_szCardNo,
				 pMF->m_wndPatientDocument.m_nDocumentNo);	
	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hc_cardno"),  m_szCardNo);
		rs.GetValue(_T("hc_regdate"), m_szRegistrationDate); 
		rs.GetValue(_T("hc_expdate"), m_szExpiryDate); 
		rs.GetValue(_T("hc_regcode"), m_szRegistrationPlaceKey); 
		rs.GetValue(_T("hc_company"), m_szCompany); 
		rs.GetValue(_T("hc_code"), m_szCode); 
		rs.GetValue(_T("hc_discount"), m_nDiscount); 
		rs.GetValue(_T("hc_groupid"), m_nGroupID);
		rs.GetValue(_T("hd_insregdate"), m_szPaymentFromDate);

		szSQL.Format(_T("SELECT hd_insline, hd_disrate FROM hms_doc WHERE hd_docno=%ld and hd_cardno='%s'"),
					 pMF->m_wndPatientDocument.m_nDocumentNo, m_szCardNo);		
		rsd.ExecSQL(szSQL);
		if (!rsd.IsEOF())
		{
			rsd.GetValue(_T("hd_insline"), m_szOffLine);			
			if(m_szOffLine == _T("Y"))
			{
				m_bOffLine = TRUE;
				rsd.GetValue(_T("hd_disrate"), m_nDiscount);				
			}
			else
				m_bOffLine = FALSE;
		}

		szSQL.Format(_T("SELECT hd_transplace, hd_transdiagn FROM hms_doc WHERE hd_docno=%ld"),
					 pMF->m_wndPatientDocument.m_nDocumentNo);
		rst.ExecSQL(szSQL);

		if (!rst.IsEOF())
		{
			rst.GetValue(_T("hd_transplace"), m_szHospital);
			rst.GetValue(_T("hd_transdiagn"), m_szTransferDiagnostic);
		}

		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);	
}
void CHMSCardEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_hms_cardTbl.SetValue(_T("hc_updatedby"), pMF->GetCurrentUser()); 
	m_hms_cardTbl.SetValue(_T("hc_updateddate"), pMF->GetSysDateTime()); 
	m_hms_cardTbl.SetValue(_T("hc_patientno"),  m_nPatientNo);
	m_hms_cardTbl.SetValue(_T("hc_cardno"),  m_szCardNo);
	m_hms_cardTbl.SetValue(_T("hc_idx"),  m_nIndex); 
	m_hms_cardTbl.SetValue(_T("hc_regdate"), m_szRegistrationDate); 
	m_hms_cardTbl.SetValue(_T("hc_expdate"), m_szExpiryDate); 
	m_hms_cardTbl.SetValue(_T("hc_regcode"), m_szRegistrationPlaceKey); 
	m_hms_cardTbl.SetValue(_T("hc_regplace"), m_szRegistrationPlace); 
	m_hms_cardTbl.SetValue(_T("hc_company"), m_szCompany); 
	m_hms_cardTbl.SetValue(_T("hc_code"), m_szCode); 
	m_hms_cardTbl.SetValue(_T("hc_discount"), m_nDiscount); 
	m_hms_cardTbl.SetValue(_T("hc_groupid"), m_nGroupID); 


}
void CHMSCardEntryDialog::SetDefaultValues(){
	
	m_szCardNo.Empty();
	m_szCode.Empty();
	m_nDiscount=0;
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlaceKey.Empty();
	m_szCompany.Empty();
	m_szHospital.Empty();
	m_szTransferDiagnostic.Empty();
	m_bOffLine = false;

}
int CHMSCardEntryDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
		if(!GetSafeHwnd())	
			return nMode;
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
		EnableControls(TRUE);
  		switch(nMode)
		{ 
 		case VM_ADD: 		
			EnableButtons(TRUE, 0, 1,  -1); 
			break; 
 		case VM_EDIT: 
 			EnableButtons(TRUE, 0, 1,  -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, -1);
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSCardEntryDialog::OnPatientNameChange(){
	
} */
/*void CHMSCardEntryDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnPatientNameKillfocus(){
	
} */
int CHMSCardEntryDialog::OnPatientNameCheckValue(){
	return 0;
} 

int CHMSCardEntryDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSCardEntryDialog::OnObjectSelendok(){
	UpdateData(true);
	m_szObject = m_wndObject.GetCurrent(3);
	UpdateData(false);
	return 0;
}
/*int CHMSCardEntryDialog::OnObjectSetfocus(){
	 return 0;
}*/
/*int CHMSCardEntryDialog::OnObjectKillfocus(){
	 return 0;
}*/
int CHMSCardEntryDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" AND ho_id='%s' "), m_szObjectKey);
	};
	if(!pMF->m_UserInfo.su_hms_xobject.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), pMF->m_UserInfo.su_hms_xobject);
	szSQL.Format(_T("SELECT * FROM hms_object WHERE ho_type='%s' AND ho_active='Y' %s ORDER BY ho_id "), m_szObjectType, szWhere);

	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		if(m_szObjectKey.IsEmpty())
			rs.GetValue(_T("ho_id"), m_szObjectKey);
			m_wndObject.AddItems(
			rs.GetValue(_T("ho_id")), 
			rs.GetValue(_T("ho_desc")), 
			rs.GetValue(_T("ho_hascard")), 
			rs.GetValue(_T("ho_type")), 
			rs.GetValue(_T("ho_discount")), 
			NULL);
		rs.MoveNext();
	}
	m_wndObject.SetCurSel(0);
	return nCount;
}
/*int CHMSCardEntryDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */

/*void CHMSCardEntryDialog::OnCardNoChange(){
	
} */
/*void CHMSCardEntryDialog::OnCardNoSetfocus(){
	
} */
/*
void CHMSCardEntryDialog::OnCardNoKillfocus(){
	m_szRegistrationPlaceKey = m_szCardNo.Right(5);	
} 
*/
int CHMSCardEntryDialog::OnCardNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();	
	
	return 0;
} 
/*void CHMSCardEntryDialog::OnCodeChange(){
	
} */
/*void CHMSCardEntryDialog::OnCodeSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCodeKillfocus(){
	
} */
int CHMSCardEntryDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnDiscountChange(){
	
} */
/*void CHMSCardEntryDialog::OnDiscountSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnDiscountKillfocus(){
	
} */
int CHMSCardEntryDialog::OnDiscountCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnRegistrationDateChange(){
	
} */
/*void CHMSCardEntryDialog::OnRegistrationDateSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnRegistrationDateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnRegistrationDateCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnExpiryDateChange(){
	
} */
/*void CHMSCardEntryDialog::OnExpiryDateSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnExpiryDateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnExpiryDateCheckValue(){
	return 0;
} 
void CHMSCardEntryDialog::OnRegistrationPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnRegistrationPlaceSelendok(){
	 
}
/*void CHMSCardEntryDialog::OnRegistrationPlaceSetfocus(){
	
}*/
/*void CHMSCardEntryDialog::OnRegistrationPlaceKillfocus(){
	
}*/
long CHMSCardEntryDialog::OnRegistrationPlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRegistrationPlace.IsSearchKey() && !m_szRegistrationPlaceKey.IsEmpty() ){
		szWhere.Format(_T("WHERE trim(hh_id)=trim('%s') "), m_szRegistrationPlaceKey);

	};

	szSQL.Format(_T("SELECT hh_id as id, hh_name||'-'||(select sp_name from sys_prov where sp_id=hh_provid) as name FROM hms_hospital %s ORDER BY hh_id"), szWhere);

	m_wndRegistrationPlace.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRegistrationPlace.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCardEntryDialog::OnRegistrationPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCardEntryDialog::OnCompanyChange(){
	
} */
/*void CHMSCardEntryDialog::OnCompanySetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCompanyKillfocus(){
	
} */
int CHMSCardEntryDialog::OnCompanyCheckValue(){
	return 0;
}
/*void CHMSCardEntryDialog::OnHospitalChange(){
	
} */
/*void CHMSCardEntryDialog::OnHospitalSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnHospitalKillfocus(){
	
} */
int CHMSCardEntryDialog::OnHospitalCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnTransferDiagnosticChange(){
	
} */
/*void CHMSCardEntryDialog::OnTransferDiagnosticSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnTransferDiagnosticKillfocus(){
	
} */
int CHMSCardEntryDialog::OnTransferDiagnosticCheckValue(){
	return 0;
}
void CHMSCardEntryDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CHMSCardEntryDialog::OnAddHMSCardEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSCardEntryDialog::OnEditHMSCardEntryDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCardEntryDialog::OnDeleteHMSCardEntryDialog(){
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
 		OnCancelHMSCardEntryDialog(); 
 	}
	return 0;
}
int CHMSCardEntryDialog::OnSaveHMSCardEntryDialog(){
 	if(GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(!IsValidateData()) 
 		return -1; 
 	
 	CString szSQL; 
	CString szWhere; 
	
	szWhere.Format(_T(" WHERE hc_patientno=%ld and hc_idx=%d "), m_nPatientNo, m_nIndex); 
 	szSQL = m_hms_cardTbl.GetUpdateSQL(_T("hc_createdby,hc_createddate,hc_patientno,hc_idx")); 
 	szSQL += szWhere; 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 	} 
 	return ret; 

}
int CHMSCardEntryDialog::OnCancelHMSCardEntryDialog(){
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
int CHMSCardEntryDialog::OnHMSCardEntryDialogListLoadData(){
	return 0;
}
