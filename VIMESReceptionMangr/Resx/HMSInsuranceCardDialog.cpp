#include "HMSInsuranceCardDialog.h"
#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialog *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnCompanySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInsuranceCardDialog* )pWnd)->OnCompanySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCompanySelendokFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnCompanySelendok();
}
/*static void _OnCompanySetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnCompanyKillfocus();
}*/
/*static void _OnCompanyKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnCompanyKillfocus();
}*/
static long _OnCompanyLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialog *)pWnd)->OnCompanyLoadData();
}
/*static void _OnCompanyAddNewFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnCompanyAddNew();
}*/
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialog *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCheckSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardDialog *pVw = (CHMSInsuranceCardDialog *)pWnd;
	pVw->OnCheckSelect();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInsuranceCardDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnRegDateChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnRegDateChange();
} */
/*static void _OnRegDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnRegDateSetfocus();} */ 
/*static void _OnRegDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnRegDateKillfocus();
} */
static int _OnRegDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialog *)pWnd)->OnRegDateCheckValue();
} 
/*static void _OnExpDateChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnExpDateChange();
} */
/*static void _OnExpDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnExpDateSetfocus();} */ 
/*static void _OnExpDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnExpDateKillfocus();
} */
static int _OnExpDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialog *)pWnd)->OnExpDateCheckValue();
} 
/*static void _OnOutpatientPaymentChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnOutpatientPaymentChange();
} */
/*static void _OnOutpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnOutpatientPaymentSetfocus();} */ 
/*static void _OnOutpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnOutpatientPaymentKillfocus();
} */
static int _OnOutpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialog *)pWnd)->OnOutpatientPaymentCheckValue();
} 
/*static void _OnInpatientPaymentChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnInpatientPaymentChange();
} */
/*static void _OnInpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnInpatientPaymentSetfocus();} */ 
/*static void _OnInpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialog *)pWnd)->OnInpatientPaymentKillfocus();
} */
static int _OnInpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialog *)pWnd)->OnInpatientPaymentCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardDialog *pVw = (CHMSInsuranceCardDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardDialog *pVw = (CHMSInsuranceCardDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardDialog *pVw = (CHMSInsuranceCardDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardDialog *pVw = (CHMSInsuranceCardDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInsuranceCardDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardDialog*)pWnd)->OnAddHMSInsuranceCardDialog();
} 
static int _OnEditHMSInsuranceCardDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardDialog*)pWnd)->OnEditHMSInsuranceCardDialog();
} 
static int _OnDeleteHMSInsuranceCardDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardDialog*)pWnd)->OnDeleteHMSInsuranceCardDialog();
} 
static int _OnSaveHMSInsuranceCardDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardDialog*)pWnd)->OnSaveHMSInsuranceCardDialog();
} 
static int _OnCancelHMSInsuranceCardDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardDialog*)pWnd)->OnCancelHMSInsuranceCardDialog();
} 
CHMSInsuranceCardDialog::CHMSInsuranceCardDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 275;
	SetDefaultValues();
}
CHMSInsuranceCardDialog::~CHMSInsuranceCardDialog(){
}
void CHMSInsuranceCardDialog::OnCreateComponents(){
	m_wndCardInformation.Create(this, _T("Card Information"), 5, 5, 510, 240);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 130, 55);
	m_wndPatientNo.Create(this,135, 30, 255, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 260, 30, 380, 55);
	m_wndDocumentNo.Create(this,385, 30, 505, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 130, 85);
	m_wndPatientName.Create(this,135, 60, 505, 85); 
	m_wndCompanyLabel.Create(this, _T("Company"), 10, 90, 130, 115);
	m_wndCompany.Create(this,135, 90, 505, 115); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 120, 130, 145);
	m_wndCardNo.Create(this,135, 120, 475, 145); 
	m_wndCheck.Create(this, _T("..."), 480, 120, 505, 145);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 150, 130, 175);
	m_wndType.Create(this,135, 150, 505, 175); 
	m_wndRegDateLabel.Create(this, _T("Reg Date"), 10, 180, 130, 205);
	m_wndRegDate.Create(this,135, 180, 255, 205); 
	m_wndExpDateLabel.Create(this, _T("Exp Date"), 260, 180, 380, 205);
	m_wndExpDate.Create(this,385, 180, 505, 205); 
	m_wndOutpatientPaymentLabel.Create(this, _T("Outpatient Payment"), 10, 210, 130, 235);
	m_wndOutpatientPayment.Create(this,135, 210, 255, 235); 
	m_wndInpatientPaymentLabel.Create(this, _T("Inpatient Payment"), 260, 210, 380, 235);
	m_wndInpatientPayment.Create(this,385, 210, 505, 235); 
	m_wndUpdate.Create(this, _T("&Update"), 175, 245, 255, 270);
	m_wndSave.Create(this, _T("&Save"), 260, 245, 340, 270);
	m_wndCancel.Create(this, _T("&Cancel"), 345, 245, 425, 270);
	m_wndClose.Create(this, _T("&Close"), 430, 245, 510, 270);

}
void CHMSInsuranceCardDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(22);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(22);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndCompany.SetCheckValue(true);
	m_wndCompany.LimitText(22);
	m_wndCardNo.SetLimitText(15);
	m_wndCardNo.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(3);
	m_wndRegDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegDate.SetCheckValue(true);
	m_wndExpDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpDate.SetCheckValue(true);
	m_wndOutpatientPayment.SetLimitText(22);
	m_wndOutpatientPayment.SetCheckValue(true);
	m_wndInpatientPayment.SetLimitText(22);
	m_wndInpatientPayment.SetCheckValue(true);


	m_wndCompany.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCompany.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_insurance_cardTbl.SetTableName(_T("hms_insurance_card"));
	m_hms_insurance_cardTbl.AddField(_T("HIC_INSURANCE_CARD_ID"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_CREATEDBY"), dfText, 15); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_CREATEDDATE"), dfDateTime); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_UPDATEDBY"), dfText, 15); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_UPDATEDDATE"), dfDateTime); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_ISACTIVE"), dfText, 1); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_PATIENTNO"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_DOCNO"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_INSURANCE_COMPANY_ID"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_CARDNO"), dfText, 15); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_TYPE"), dfText, 3); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_OUTPATIENT_PAYMENT"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_INPATIENT_PAYMENT"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_REGDATE"), dfDate); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_EXPDATE"), dfDate); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_LOCKED"), dfText, 1); 

}
void CHMSInsuranceCardDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndCompany.SetEvent(WE_SELENDOK, _OnCompanySelendokFnc);
	//m_wndCompany.SetEvent(WE_SETFOCUS, _OnCompanySetfocusFnc);
	//m_wndCompany.SetEvent(WE_KILLFOCUS, _OnCompanyKillfocusFnc);
	m_wndCompany.SetEvent(WE_SELCHANGE, _OnCompanySelectChangeFnc);
	m_wndCompany.SetEvent(WE_LOADDATA, _OnCompanyLoadDataFnc);
	//m_wndCompany.SetEvent(WE_ADDNEW, _OnCompanyAddNewFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndCheck.SetEvent(WE_CLICK, _OnCheckSelectFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndRegDate.SetEvent(WE_CHANGE, _OnRegDateChangeFnc);
	//m_wndRegDate.SetEvent(WE_SETFOCUS, _OnRegDateSetfocusFnc);
	//m_wndRegDate.SetEvent(WE_KILLFOCUS, _OnRegDateKillfocusFnc);
	m_wndRegDate.SetEvent(WE_CHECKVALUE, _OnRegDateCheckValueFnc);
	//m_wndExpDate.SetEvent(WE_CHANGE, _OnExpDateChangeFnc);
	//m_wndExpDate.SetEvent(WE_SETFOCUS, _OnExpDateSetfocusFnc);
	//m_wndExpDate.SetEvent(WE_KILLFOCUS, _OnExpDateKillfocusFnc);
	m_wndExpDate.SetEvent(WE_CHECKVALUE, _OnExpDateCheckValueFnc);
	//m_wndOutpatientPayment.SetEvent(WE_CHANGE, _OnOutpatientPaymentChangeFnc);
	//m_wndOutpatientPayment.SetEvent(WE_SETFOCUS, _OnOutpatientPaymentSetfocusFnc);
	//m_wndOutpatientPayment.SetEvent(WE_KILLFOCUS, _OnOutpatientPaymentKillfocusFnc);
	m_wndOutpatientPayment.SetEvent(WE_CHECKVALUE, _OnOutpatientPaymentCheckValueFnc);
	//m_wndInpatientPayment.SetEvent(WE_CHANGE, _OnInpatientPaymentChangeFnc);
	//m_wndInpatientPayment.SetEvent(WE_SETFOCUS, _OnInpatientPaymentSetfocusFnc);
	//m_wndInpatientPayment.SetEvent(WE_KILLFOCUS, _OnInpatientPaymentKillfocusFnc);
	m_wndInpatientPayment.SetEvent(WE_CHECKVALUE, _OnInpatientPaymentCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSInsuranceCardDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndCompany.GetDlgCtrlID(), m_szCompanyKey);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndRegDate.GetDlgCtrlID(), m_szRegDate);
	DDX_TextEx(pDX, m_wndExpDate.GetDlgCtrlID(), m_szExpDate);
	DDX_Text(pDX, m_wndOutpatientPayment.GetDlgCtrlID(), m_nOutpatientPayment);
	DDX_Text(pDX, m_wndInpatientPayment.GetDlgCtrlID(), m_nInpatientPayment);

}
void CHMSInsuranceCardDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientNo")] =  m_nPatientNo;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Company")] =  m_szCompanyKey;
	m_jData[_T("CardNo")] =  m_szCardNo;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("RegDate")] =  m_szRegDate;
	m_jData[_T("ExpDate")] =  m_szExpDate;
	m_jData[_T("OutpatientPayment")] =  m_nOutpatientPayment;
	m_jData[_T("InpatientPayment")] =  m_nInpatientPayment;
	}
	else
	{
			
	m_jData[_T("PatientNo")].GetValue(m_nPatientNo);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Company")].GetValue(m_szCompanyKey);
	m_jData[_T("CardNo")].GetValue(m_szCardNo);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("RegDate")].GetValue(m_szRegDate);
	m_jData[_T("ExpDate")].GetValue(m_szExpDate);
	m_jData[_T("OutpatientPayment")].GetValue(m_nOutpatientPayment);
	m_jData[_T("InpatientPayment")].GetValue(m_nInpatientPayment);
	}

}
void CHMSInsuranceCardDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HIC_PATIENTNO"), m_nPatientNo);
	rs.GetValue(_T("HIC_DOCNO"), m_nDocumentNo);
	rs.GetValue(_T("HIC_INSURANCE_COMPANY_ID"), m_szCompanyKey);
	rs.GetValue(_T("HIC_CARDNO"), m_szCardNo);
	rs.GetValue(_T("HIC_TYPE"), m_szTypeKey);
	rs.GetValue(_T("HIC_OUTPATIENT_PAYMENT"), m_nOutpatientPayment);
	rs.GetValue(_T("HIC_INPATIENT_PAYMENT"), m_nInpatientPayment);
	rs.GetValue(_T("HIC_REGDATE"), m_szRegDate);
	rs.GetValue(_T("HIC_EXPDATE"), m_szExpDate);

}
void CHMSInsuranceCardDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_insurance_cardTbl.SetValue(_T("HIC_PATIENTNO"), m_nPatientNo);
	m_hms_insurance_cardTbl.SetValue(_T("HIC_DOCNO"), m_nDocumentNo);
	m_hms_insurance_cardTbl.SetValue(_T("HIC_INSURANCE_COMPANY_ID"), m_szCompanyKey);
	m_hms_insurance_cardTbl.SetValue(_T("HIC_CARDNO"), m_szCardNo);
	m_hms_insurance_cardTbl.SetValue(_T("HIC_TYPE"), m_szTypeKey);
	m_hms_insurance_cardTbl.SetValue(_T("HIC_OUTPATIENT_PAYMENT"), m_nOutpatientPayment);
	m_hms_insurance_cardTbl.SetValue(_T("HIC_INPATIENT_PAYMENT"), m_nInpatientPayment);
	m_hms_insurance_cardTbl.SetValue(_T("HIC_REGDATE"), m_szRegDate);
	m_hms_insurance_cardTbl.SetValue(_T("HIC_EXPDATE"), m_szExpDate);

}
void CHMSInsuranceCardDialog::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szCompanyKey.Empty();
	m_szCardNo.Empty();
	m_szTypeKey.Empty();
	m_szRegDate.Empty();
	m_szExpDate.Empty();
	m_nOutpatientPayment=0;
	m_nInpatientPayment=0;

}
int CHMSInsuranceCardDialog::SetMode(int nMode){
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
/*void CHMSInsuranceCardDialog::OnPatientNoChange(){
	
} */
/*void CHMSInsuranceCardDialog::OnPatientNoSetfocus(){
	
} */
/*void CHMSInsuranceCardDialog::OnPatientNoKillfocus(){
	
} */
int CHMSInsuranceCardDialog::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCardDialog::OnDocumentNoChange(){
	
} */
/*void CHMSInsuranceCardDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSInsuranceCardDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSInsuranceCardDialog::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCardDialog::OnPatientNameChange(){
	
} */
/*void CHMSInsuranceCardDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSInsuranceCardDialog::OnPatientNameKillfocus(){
	
} */
int CHMSInsuranceCardDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSInsuranceCardDialog::OnCompanySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardDialog::OnCompanySelendok(){
	 
}
/*void CHMSInsuranceCardDialog::OnCompanySetfocus(){
	
}*/
/*void CHMSInsuranceCardDialog::OnCompanyKillfocus(){
	
}*/
long CHMSInsuranceCardDialog::OnCompanyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCompany.IsSearchKey() && !m_szCompanyKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCompanyKey
};
	m_wndCompany.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCompany.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInsuranceCardDialog::OnCompanyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInsuranceCardDialog::OnCardNoChange(){
	
} */
/*void CHMSInsuranceCardDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSInsuranceCardDialog::OnCardNoKillfocus(){
	
} */
int CHMSInsuranceCardDialog::OnCardNoCheckValue(){
	return 0;
} 
void CHMSInsuranceCardDialog::OnCheckSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardDialog::OnTypeSelendok(){
	 
}
/*void CHMSInsuranceCardDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSInsuranceCardDialog::OnTypeKillfocus(){
	
}*/
long CHMSInsuranceCardDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInsuranceCardDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInsuranceCardDialog::OnRegDateChange(){
	
} */
/*void CHMSInsuranceCardDialog::OnRegDateSetfocus(){
	
} */
/*void CHMSInsuranceCardDialog::OnRegDateKillfocus(){
	
} */
int CHMSInsuranceCardDialog::OnRegDateCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCardDialog::OnExpDateChange(){
	
} */
/*void CHMSInsuranceCardDialog::OnExpDateSetfocus(){
	
} */
/*void CHMSInsuranceCardDialog::OnExpDateKillfocus(){
	
} */
int CHMSInsuranceCardDialog::OnExpDateCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCardDialog::OnOutpatientPaymentChange(){
	
} */
/*void CHMSInsuranceCardDialog::OnOutpatientPaymentSetfocus(){
	
} */
/*void CHMSInsuranceCardDialog::OnOutpatientPaymentKillfocus(){
	
} */
int CHMSInsuranceCardDialog::OnOutpatientPaymentCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCardDialog::OnInpatientPaymentChange(){
	
} */
/*void CHMSInsuranceCardDialog::OnInpatientPaymentSetfocus(){
	
} */
/*void CHMSInsuranceCardDialog::OnInpatientPaymentKillfocus(){
	
} */
int CHMSInsuranceCardDialog::OnInpatientPaymentCheckValue(){
	return 0;
} 
void CHMSInsuranceCardDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInsuranceCardDialog::OnAddHMSInsuranceCardDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInsuranceCardDialog::OnEditHMSInsuranceCardDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInsuranceCardDialog::OnDeleteHMSInsuranceCardDialog(){
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
 		OnCancelHMSInsuranceCardDialog();
 	}
	return 0;
}
int CHMSInsuranceCardDialog::OnSaveHMSInsuranceCardDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_insurance_cardTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_insurance_cardTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSInsuranceCardDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInsuranceCardDialog::OnCancelHMSInsuranceCardDialog(){
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
int CHMSInsuranceCardDialog::OnHMSInsuranceCardDialogListLoadData(){
	return 0;
}
