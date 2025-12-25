#include "HMSInsuranceCardDialogEx.h"
#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialogEx *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialogEx *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialogEx *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnCompanySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInsuranceCardDialogEx* )pWnd)->OnCompanySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCompanySelendokFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnCompanySelendok();
}
/*static void _OnCompanySetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnCompanyKillfocus();
}*/
/*static void _OnCompanyKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnCompanyKillfocus();
}*/
static long _OnCompanyLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialogEx *)pWnd)->OnCompanyLoadData();
}
/*static void _OnCompanyAddNewFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnCompanyAddNew();
}*/
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialogEx *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCheckSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardDialogEx *pVw = (CHMSInsuranceCardDialogEx *)pWnd;
	pVw->OnCheckSelect();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInsuranceCardDialogEx* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialogEx *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnRegDateChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnRegDateChange();
} */
/*static void _OnRegDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnRegDateSetfocus();} */ 
/*static void _OnRegDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnRegDateKillfocus();
} */
static int _OnRegDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialogEx *)pWnd)->OnRegDateCheckValue();
} 
/*static void _OnExpDateChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnExpDateChange();
} */
/*static void _OnExpDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnExpDateSetfocus();} */ 
/*static void _OnExpDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnExpDateKillfocus();
} */
static int _OnExpDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialogEx *)pWnd)->OnExpDateCheckValue();
} 
/*static void _OnOutpatientPaymentChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnOutpatientPaymentChange();
} */
/*static void _OnOutpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnOutpatientPaymentSetfocus();} */ 
/*static void _OnOutpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnOutpatientPaymentKillfocus();
} */
static int _OnOutpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialogEx *)pWnd)->OnOutpatientPaymentCheckValue();
} 
/*static void _OnInpatientPaymentChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnInpatientPaymentChange();
} */
/*static void _OnInpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnInpatientPaymentSetfocus();} */ 
/*static void _OnInpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardDialogEx *)pWnd)->OnInpatientPaymentKillfocus();
} */
static int _OnInpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardDialogEx *)pWnd)->OnInpatientPaymentCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardDialogEx *pVw = (CHMSInsuranceCardDialogEx *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardDialogEx *pVw = (CHMSInsuranceCardDialogEx *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardDialogEx *pVw = (CHMSInsuranceCardDialogEx *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardDialogEx *pVw = (CHMSInsuranceCardDialogEx *)pWnd;
	pVw->OnCloseSelect();
} 

static void _OnCompanySelectFnc(CWnd *pWnd){
	CHMSInsuranceCardDialogEx *pVw = (CHMSInsuranceCardDialogEx *)pWnd;
	pVw->OnCompanySelect();
}

static int _OnAddHMSInsuranceCardDialogExFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardDialogEx*)pWnd)->OnAddHMSInsuranceCardDialogEx();
} 
static int _OnUpdateHMSInsuranceCardDialogExFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardDialogEx*)pWnd)->OnUpdateHMSInsuranceCardDialogEx();
} 
static int _OnDeleteHMSInsuranceCardDialogExFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardDialogEx*)pWnd)->OnDeleteHMSInsuranceCardDialogEx();
} 
static int _OnSaveHMSInsuranceCardDialogExFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardDialogEx*)pWnd)->OnSaveHMSInsuranceCardDialogEx();
} 
static int _OnCancelHMSInsuranceCardDialogExFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardDialogEx*)pWnd)->OnCancelHMSInsuranceCardDialogEx();
} 
CHMSInsuranceCardDialogEx::CHMSInsuranceCardDialogEx(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 275;
	SetDefaultValues();
	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szPatientName.Empty();
}
CHMSInsuranceCardDialogEx::~CHMSInsuranceCardDialogEx(){
}
void CHMSInsuranceCardDialogEx::OnCreateComponents(){
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 130, 55);
	m_wndPatientNo.Create(this,135, 30, 255, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 260, 30, 380, 55);
	m_wndDocumentNo.Create(this,385, 30, 505, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 130, 85);
	m_wndCardInformation.Create(this, _T("Card Information"), 5, 5, 510, 240);
	m_wndPatientName.Create(this,135, 60, 505, 85); 
	m_wndCompanyLabel.Create(this, _T("Ins Company"), 10, 90, 130, 115);
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
void CHMSInsuranceCardDialogEx::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(22);
//	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(22);
//	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
//	m_wndPatientName.SetCheckValue(true);
	m_wndCompany.SetCheckValue(true);
	m_wndCompany.LimitText(22);
	m_wndCardNo.SetLimitText(15);
	m_wndCardNo.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(3);
	m_wndRegDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegDate.SetCheckValue(true);
	//m_wndExpDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpDate.SetCheckValue(true);
	m_wndOutpatientPayment.SetLimitText(22);
	m_wndOutpatientPayment.SetCheckValue(true);
	m_wndInpatientPayment.SetLimitText(22);
	m_wndInpatientPayment.SetCheckValue(true);
	m_wndCheck.ModifyStyle(WS_TABSTOP, 0);

	m_wndCompany.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndCompany.InsertColumn(1, _T("Code"), CFMT_TEXT, 100);
	m_wndCompany.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);
	m_wndCompany.Format(3, 2);
	
	m_wndPatientNo.SetReadOnly(true);
	m_wndDocumentNo.SetReadOnly(true);
	m_wndPatientName.SetReadOnly(true);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_hms_insurance_cardTbl.SetTableName(_T("hms_insurance_card"));
	m_hms_insurance_cardTbl.AddField(_T("HIC_INSURANCE_CARD_ID"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_USERID"), dfText, 15); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_PATIENTNO"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_DOCNO"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_INSURANCE_COMPANY_ID"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_CARDNO"), dfText, 15); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_TYPE"), dfText, 3); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_OUTPATIENT_PAYMENT"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_INPATIENT_PAYMENT"), dfLong); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_REGDATE"), dfDate); 
	m_hms_insurance_cardTbl.AddField(_T("HIC_EXPDATE"), dfDate); 


}
void CHMSInsuranceCardDialogEx::OnSetWindowEvents(){
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
	m_wndCompanyLabel.SetHyperlink(true);
	m_wndCompanyLabel.SetEvent(WE_CLICK, _OnCompanySelectFnc);
	GetDataToScreen();

}
void CHMSInsuranceCardDialogEx::OnDoDataExchange(CDataExchange* pDX){
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
void CHMSInsuranceCardDialogEx::UpdateJson(BOOL bSave){
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
void CHMSInsuranceCardDialogEx::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_nDocumentNo = pMF->m_nDocumentNo;
	m_nPatientNo = pMF->m_nPatientNo;
	m_szPatientName = pMF->m_wndRegistration.m_szPatientName;
	szSQL.Format(_T("SELECT * FROM hms_insurance_card where hic_docno = %ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	SetDefaultValues();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HIC_INSURANCE_CARD_ID"), m_nInsuranceCardId);
		rs.GetValue(_T("HIC_INSURANCE_COMPANY_ID"), m_szCompanyKey);
		rs.GetValue(_T("HIC_CARDNO"), m_szCardNo);
		rs.GetValue(_T("HIC_TYPE"), m_szTypeKey);
		rs.GetValue(_T("HIC_OUTPATIENT_PAYMENT"), m_nOutpatientPayment);
		rs.GetValue(_T("HIC_INPATIENT_PAYMENT"), m_nInpatientPayment);
		rs.GetValue(_T("HIC_REGDATE"), m_szRegDate);
		rs.GetValue(_T("HIC_EXPDATE"), m_szExpDate);
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}

}
void CHMSInsuranceCardDialogEx::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_insurance_cardTbl.SetValue(_T("HIC_INSURANCE_CARD_ID"), m_nInsuranceCardId);
	m_hms_insurance_cardTbl.SetValue(_T("HIC_USERID"), pMF->GetCurrentUser());
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
void CHMSInsuranceCardDialogEx::SetDefaultValues(){

	
	m_szCompanyKey.Empty();
	m_szCardNo.Empty();
	m_szTypeKey.Empty();
	m_szRegDate.Empty();
	m_szExpDate.Empty();
	m_nOutpatientPayment=0;
	m_nInpatientPayment=0;

}
int CHMSInsuranceCardDialogEx::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
 			SetDefaultValues();
			m_wndCompany.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
			m_wndCompany.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, 2, -1);
			
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0,  -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
		m_wndClose.EnableWindow(true);
 		return nOldMode;
}
/*void CHMSInsuranceCardDialogEx::OnPatientNoChange(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnPatientNoSetfocus(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnPatientNoKillfocus(){
	
} */
int CHMSInsuranceCardDialogEx::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCardDialogEx::OnDocumentNoChange(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnDocumentNoSetfocus(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnDocumentNoKillfocus(){
	
} */
int CHMSInsuranceCardDialogEx::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCardDialogEx::OnPatientNameChange(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnPatientNameSetfocus(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnPatientNameKillfocus(){
	
} */
int CHMSInsuranceCardDialogEx::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSInsuranceCardDialogEx::OnCompanySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardDialogEx::OnCompanySelendok(){
	 
}
/*void CHMSInsuranceCardDialogEx::OnCompanySetfocus(){
	
}*/
/*void CHMSInsuranceCardDialogEx::OnCompanyKillfocus(){
	
}*/
long CHMSInsuranceCardDialogEx::OnCompanyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCompany.IsSearchKey() && str2long(m_szCompanyKey) > 0 ){
		szWhere.Format(_T(" and hic_insurance_company_id=%ld "), str2long(m_szCompanyKey));
	};
	m_wndCompany.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hic_insurance_company_id as id, hic_code as code, hic_name as name ") \
		_T(" FROM hms_insurance_company WHERE hic_isactive='Y' %s ORDER BY hic_name "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCompany.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSInsuranceCardDialogEx::OnCompanyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInsuranceCardDialogEx::OnCardNoChange(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnCardNoSetfocus(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnCardNoKillfocus(){
	
} */
int CHMSInsuranceCardDialogEx::OnCardNoCheckValue(){
	return 0;
} 
void CHMSInsuranceCardDialogEx::OnCheckSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardDialogEx::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardDialogEx::OnTypeSelendok(){
	 
}
/*void CHMSInsuranceCardDialogEx::OnTypeSetfocus(){
	
}*/
/*void CHMSInsuranceCardDialogEx::OnTypeKillfocus(){
	
}*/
long CHMSInsuranceCardDialogEx::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndType, _T("HMS_COMPANY_INSURANCE_TYPE"), m_szTypeKey);

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
/*void CHMSInsuranceCardDialogEx::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInsuranceCardDialogEx::OnRegDateChange(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnRegDateSetfocus(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnRegDateKillfocus(){
	
} */
int CHMSInsuranceCardDialogEx::OnRegDateCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCardDialogEx::OnExpDateChange(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnExpDateSetfocus(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnExpDateKillfocus(){
	
} */
int CHMSInsuranceCardDialogEx::OnExpDateCheckValue(){
	int n = CompareDate(m_szRegDate, m_szExpDate);
_tprintf(_T("\r\n%d"), n);
	if(n > 0)
		return -1;
	return 0;
} 
/*void CHMSInsuranceCardDialogEx::OnOutpatientPaymentChange(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnOutpatientPaymentSetfocus(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnOutpatientPaymentKillfocus(){
	
} */
int CHMSInsuranceCardDialogEx::OnOutpatientPaymentCheckValue(){
	if(m_nOutpatientPayment <= 0)
		return -1;
	return 0;
} 
/*void CHMSInsuranceCardDialogEx::OnInpatientPaymentChange(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnInpatientPaymentSetfocus(){
	
} */
/*void CHMSInsuranceCardDialogEx::OnInpatientPaymentKillfocus(){
	
} */
int CHMSInsuranceCardDialogEx::OnInpatientPaymentCheckValue(){
	if(m_nInpatientPayment <=0)
		return -1;
	return 0;
} 
void CHMSInsuranceCardDialogEx::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnUpdateHMSInsuranceCardDialogEx();
} 
void CHMSInsuranceCardDialogEx::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSInsuranceCardDialogEx();
} 
void CHMSInsuranceCardDialogEx::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSInsuranceCardDialogEx();
} 
void CHMSInsuranceCardDialogEx::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSInsuranceCardDialogEx::OnAddHMSInsuranceCardDialogEx(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInsuranceCardDialogEx::OnUpdateHMSInsuranceCardDialogEx(){
 	if(GetMode() != VM_VIEW && GetMode() != VM_NONE)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInsuranceCardDialogEx::OnDeleteHMSInsuranceCardDialogEx(){
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
 		OnCancelHMSInsuranceCardDialogEx();
 	}
	return 0;
}
int CHMSInsuranceCardDialogEx::OnSaveHMSInsuranceCardDialogEx(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("HMS_INSURANCE_CARD_CREATE(%s)"), m_hms_insurance_cardTbl.FormatSQL());
 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		//OnHMSInsuranceCardDialogExListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInsuranceCardDialogEx::OnCancelHMSInsuranceCardDialogEx(){
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
int CHMSInsuranceCardDialogEx::OnHMSInsuranceCardDialogExListLoadData(){
	return 0;
}

#include "HMSInsuranceCompanyDialog.h"
void CHMSInsuranceCardDialogEx::OnCompanySelect()
{
	CHMSInsuranceCompanyDialog dlg(this);
	dlg.DoModal();
}