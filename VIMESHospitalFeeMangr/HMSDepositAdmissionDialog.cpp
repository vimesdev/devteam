#include "HMSDepositAdmissionDialog.h"
#include "MainFrm.h"
#include "HMSSelectionListDialog.h"
#include "HMSPatientInforDialog.h"


static long _OnPaymentMethodLoadDataFnc(CWnd* pWnd)
{
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnPaymentMethodLoadData();
}
static void _OnPaymentMethodLabelSelectFnc(CWnd* pWnd)
{
	((CHMSDepositAdmissionDialog *)pWnd)->OnPaymentMethodLabelSelect();
}
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnAdmitDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepositAdmissionDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYOBChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnYOBChange();
} */
/*static void _OnYOBSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnYOBSetfocus();} */ 
/*static void _OnYOBKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnYOBKillfocus();
} */
static int _OnYOBCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnYOBCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepositAdmissionDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnSexAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepositAdmissionDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnDescriptionKillfocus();
} */
/*static void _OnReturnDateChangeFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnReturnDateChange();
} */
/*static void _OnReturnDateSetfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnReturnDateSetfocus();} */ 
/*static void _OnReturnDateKillfocusFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog *)pWnd)->OnReturnDateKillfocus();
} */
static int _OnReturnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnReturnDateCheckValue();
}
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnDescriptionCheckValue();
} 


static int _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnListLoadData();
}

static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDepositAdmissionDialog *pVw = (CHMSDepositAdmissionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDepositAdmissionDialog *pVw = (CHMSDepositAdmissionDialog *)pWnd;
	pVw->OnCloseSelect();
}

static void _OnRefundSelectFnc(CWnd *pWnd){
	CHMSDepositAdmissionDialog *pVw = (CHMSDepositAdmissionDialog *)pWnd;
	pVw->OnCreateRefund();
}

static int _OnAddHMSDepositAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepositAdmissionDialog*)pWnd)->OnAddHMSDepositAdmissionDialog();
} 
static int _OnEditHMSDepositAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepositAdmissionDialog*)pWnd)->OnEditHMSDepositAdmissionDialog();
} 
static int _OnDeleteHMSDepositAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepositAdmissionDialog*)pWnd)->OnDeleteHMSDepositAdmissionDialog();
} 
static int _OnSaveHMSDepositAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepositAdmissionDialog*)pWnd)->OnSaveHMSDepositAdmissionDialog();
} 
static int _OnCancelHMSDepositAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepositAdmissionDialog*)pWnd)->OnCancelHMSDepositAdmissionDialog();
} 
CHMSDepositAdmissionDialog::CHMSDepositAdmissionDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent)
{
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 575;
	m_nDlgHeight = 485;
	SetDefaultValues();
	m_bEnterPatient = false;
	m_bEnableRefund = false;
	m_bRefund = false;
	m_nFlag = 0;
}
CHMSDepositAdmissionDialog::~CHMSDepositAdmissionDialog()
{
}
void CHMSDepositAdmissionDialog::OnCreateComponents(){
/*
	m_wndDepositInformation.Create(this, _T("Deposit information"), 5, 5, 565, 300);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 130, 55);
	m_wndDocumentNo.Create(this,135, 30, 220, 55); 
	m_wndRecordNo.Create(this,225, 30, 310, 55); 
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 315, 30, 435, 55);
	m_wndAdmitDate.Create(this,440, 30, 560, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 130, 85);
	m_wndDepartment.Create(this,135, 60, 560, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 90, 130, 115);
	m_wndPatientName.Create(this,135, 90, 560, 115); 
	m_wndYOBLabel.Create(this, _T("Year of birth"), 10, 120, 130, 145);
	m_wndYOB.Create(this,135, 120, 310, 145);  
	m_wndSexLabel.Create(this, _T("Sex"), 315, 120, 435, 145);
	m_wndSex.Create(this,440, 120, 560, 145); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 150, 130, 175);
	m_wndObject.Create(this,135, 150, 560, 175); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 180, 130, 205);
	m_wndCardNo.Create(this,135, 180, 560, 205); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 210, 130, 235);
	m_wndSerialNo.Create(this,135, 210, 310, 235); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 315, 210, 435, 235);
	m_wndReceiptNo.Create(this,440, 210, 560, 235); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 240, 130, 265);
	m_wndReceiptDate.Create(this,135, 240, 310, 265); 
	m_wndAmountLabel.Create(this, _T("Amount"), 315, 240, 435, 265);
	m_wndAmount.Create(this,440, 240, 560, 265); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 270, 130, 295);
	m_wndDescription.Create(this,135, 270, 560, 295); 
	m_wndReturnDateLabel.Create(this, _T("Return Date"), 10, 305, 130, 330);
	m_wndReturnDate.Create(this,135, 305, 235, 330); 
	m_wndSave.Create(this, _T("&Save"), 380, 305, 470, 330);
	m_wndClose.Create(this, _T("&Close"), 475, 305, 565, 330);
	m_wndRefund.Create(this, _T("&Refund"), 375-90, 305, 375, 330);
	m_wndList.Create(this, 10, 335, 565, 480);
*/
	m_wndDepositInformation.Create(this, _T("Deposit information"), 5, 5, 600, 300);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 130, 55);
	m_wndDocumentNo.Create(this,135, 30, 220, 55); 
	m_wndRecordNo.Create(this,225, 30, 345, 55); 
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 350, 30, 470, 55);
	m_wndAdmitDate.Create(this,475, 30, 595, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 130, 85);
	m_wndDepartment.Create(this,135, 60, 595, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 90, 130, 115);
	m_wndPatientName.Create(this,135, 90, 595, 115); 
	m_wndYOBLabel.Create(this, _T("Year of birth"), 10, 120, 130, 145);
	m_wndYOB.Create(this,135, 120, 345, 145); 
	m_wndSexLabel.Create(this, _T("Sex"), 350, 120, 470, 145);
	m_wndSex.Create(this,475, 120, 595, 145); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 150, 130, 175);
	m_wndObject.Create(this,135, 150, 595, 175); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 180, 130, 205);
	m_wndCardNo.Create(this,135, 180, 595, 205); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 210, 130, 235);
	m_wndSerialNo.Create(this,135, 210, 345, 235); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 350, 210, 470, 235);
	m_wndReceiptNo.Create(this,475, 210, 595, 235); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 240, 130, 265);
	m_wndReceiptDate.Create(this,135, 240, 345, 265); 
	m_wndAmountLabel.Create(this, _T("Amount"), 350, 240, 470, 265);
	m_wndAmount.Create(this,475, 240, 595, 265); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 270, 130, 295);
	m_wndDescription.Create(this,135, 270, 345, 295); 
	m_wndPaymentMethodLabel.Create(this, _T("Method"), 350, 270, 470, 295);
	m_wndPaymentMethod.Create(this,475, 270, 595, 295); 
	m_wndReturnDateLabel.Create(this, _T("Return Date"), 10, 305, 130, 330);
	m_wndReturnDate.Create(this,135, 305, 235, 330); 
	
	m_wndSave.Create(this, _T("&Save"), 415, 305, 505, 330);
	m_wndClose.Create(this, _T("&Close"), 510, 305, 600, 330);
	m_wndRefund.Create(this, _T("&Refund"), 5, 305, 95, 330);
	m_wndList.Create(this,10, 335, 600, 480); 

	m_wndRefund.ModifyStyle(WS_TABSTOP, 0);
}
void CHMSDepositAdmissionDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);

	m_wndRecordNo.SetLimitText(15);
	//m_wndRecordNo.SetReadOnly(TRUE);
	m_wndRecordNo.SetCheckValue(true);
	m_wndRecordNo.ModifyStyle(0, ES_UPPERCASE);

	m_wndAdmitDate.SetReadOnly(TRUE);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndYOB.SetLimitText(4);
	m_wndYOB.SetCheckValue(true);
	m_wndSex.SetReadOnly(TRUE);
	m_wndSex.LimitText(16);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndCardNo.SetLimitText(35);
	m_wndCardNo.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(16);
	m_wndReceiptNo.SetLimitText(16);
	m_wndReceiptDate.SetReadOnly(TRUE);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	//m_wndReturnDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndReturnDate.SetCheckValue(true);
	m_wndReturnDate.SetReadOnly(TRUE);

	m_wndCardNo.SetReadOnly(true);


	m_wndPatientName.SetInitCap(1);
	m_wndPaymentMethodLabel.SetHyperlink(true);
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndSex.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 100);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObject.InsertColumn(2, _T(""), CFMT_TEXT, 0);

	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndAdmitDate.SetReadOnly(TRUE);
	m_wndSerialNo.SetReadOnly(TRUE);
	m_wndReceiptNo.SetReadOnly(TRUE);
//	m_wndDescription.SetReadOnly(TRUE);

	m_wndAmount.SetCurrencyFormat(TRUE);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_CENTER, 40);
	m_wndList.InsertColumn(1, _T("Receipt No"), CFMT_LEFT, 70);
	m_wndList.InsertColumn(2, _T("Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(3, _T("Dept"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Description"), CFMT_LEFT, 120);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Paid"), CFMT_MONEY, 90);

	m_wndList.ModifyStyle(LVS_NOSORTHEADER, 0);

	//hms_patient: thong tin chinh cua benh nhan
	m_hms_patientTbl.SetTableName(_T("hms_patient"));
	m_hms_patientTbl.AddField(_T("hp_createdby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_createddate"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("hp_updatedby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_patientno"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_patientid"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_surname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_midname"), dfText, 45); 
	m_hms_patientTbl.AddField(_T("hp_firstname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_birthdate"), dfDate); 
	m_hms_patientTbl.AddField(_T("hp_sex"), dfText, 1); 

	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_createdby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hd_createddate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_updatedby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hd_updateddate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_patientno"), dfLong); 
	m_hms_docTbl.AddField(_T("hd_docno"), dfLong); 	
	m_hms_docTbl.AddField(_T("hd_admitdate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_admitdept"), dfText, 7); 
	m_hms_docTbl.AddField(_T("hd_object"), dfText, 2); 
	

	m_hms_fee_depositTbl.AddField(_T("hfe_deptid"), dfText, 7); 
	m_hms_fee_depositTbl.AddField(_T("hfe_refidx"), dfLong); 
	m_hms_fee_depositTbl.AddField(_T("hfe_patientno"), dfLong); 
	m_hms_fee_depositTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_fee_depositTbl.AddField(_T("hfe_type"), dfText, 1); 
	m_hms_fee_depositTbl.AddField(_T("hfe_objectid"), dfInteger); 
	m_hms_fee_depositTbl.AddField(_T("hfe_serialno"), dfText, 15); 
	m_hms_fee_depositTbl.AddField(_T("hfe_receiptno"), dfLong); 
	m_hms_fee_depositTbl.AddField(_T("hfe_date"), dfDateTime); 
	m_hms_fee_depositTbl.AddField(_T("hfe_staff"), dfText, 15); 
	m_hms_fee_depositTbl.AddField(_T("hfe_amount"), dfDouble); 
	m_hms_fee_depositTbl.AddField(_T("hfe_desc"), dfText, 128); 
	m_hms_fee_depositTbl.AddField(_T("hfe_moduleid"), dfText, 3); 

	m_hms_fee_refundTbl.AddField(_T("hfe_deptid"), dfText, 7); 
	m_hms_fee_refundTbl.AddField(_T("hfe_refidx"), dfLong);
	m_hms_fee_refundTbl.AddField(_T("hfe_patientno"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("hfe_type"), dfText, 1); 
	m_hms_fee_refundTbl.AddField(_T("hfe_objectid"), dfInteger); 
	m_hms_fee_refundTbl.AddField(_T("hfe_serialno"), dfText, 15); 
	m_hms_fee_refundTbl.AddField(_T("hfe_receiptno"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("hfe_date"), dfDateTime); 
	m_hms_fee_refundTbl.AddField(_T("hfe_staff"), dfText, 15); 
	m_hms_fee_refundTbl.AddField(_T("hfe_amount"), dfDouble); 
	m_hms_fee_refundTbl.AddField(_T("hfe_desc"), dfText, 128);
	m_hms_fee_refundTbl.AddField(_T("hfe_org_id"), dfText, 3);

}
void CHMSDepositAdmissionDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	m_wndPaymentMethodLabel.SetEvent(WE_CLICK, _OnPaymentMethodLabelSelectFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	//m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
	//m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
	//m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
	m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndYOB.SetEvent(WE_CHANGE, _OnYOBChangeFnc);
	//m_wndYOB.SetEvent(WE_SETFOCUS, _OnYOBSetfocusFnc);
	//m_wndYOB.SetEvent(WE_KILLFOCUS, _OnYOBKillfocusFnc);
	m_wndYOB.SetEvent(WE_CHECKVALUE, _OnYOBCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
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
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndReturnDate.SetEvent(WE_CHANGE, _OnReturnDateChangeFnc);
	//m_wndReturnDate.SetEvent(WE_SETFOCUS, _OnReturnDateSetfocusFnc);
	//m_wndReturnDate.SetEvent(WE_KILLFOCUS, _OnReturnDateKillfocusFnc);
	m_wndReturnDate.SetEvent(WE_CHECKVALUE, _OnReturnDateCheckValueFnc);

	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndRefund.SetEvent(WE_CLICK, _OnRefundSelectFnc);

	int nMode = GetMode();
	CString tmpStr;

	if (nMode == VM_EDIT || nMode == VM_VIEW)
	{
		GetDataToScreen();
	}
	else if (nMode == VM_ADD)
	{
		pMF->GetSerialInformation();

		if (!m_bEnableRefund)
		{
			m_szSerialNo = pMF->m_szSerialNo;
			m_nReceiptNo = pMF->m_nReceiptNo;
			m_szReceiptDate = pMF->m_szRecvDate;
		}
		else
		{
			m_szRefSerialNo = pMF->m_szSerialNo;
			m_nRefReceiptNo = pMF->m_nReceiptNo;
			m_szReturnDate = pMF->m_szRecvDate;

		}


		m_wndSerialNo.EnableWindow(FALSE);
		m_wndReceiptNo.EnableWindow(FALSE);
		
		if(m_nDocumentNo > 0){
			OnDocumentNoCheckValue();
			m_wndDocumentNo.EnableWindow(FALSE);
			m_wndRecordNo.EnableWindow(FALSE);

			CString szSQL;
			CRecord rs(&pMF->m_db);
			szSQL.Format(_T(" SELECT htr_deptid as deptid ") \
						_T(" FROM hms_clinical_record LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno ) ") \
						_T(" WHERE htr_docno=%ld and htr_status in('A','I') ORDER BY htr_idx DESC "), m_nDocumentNo);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("deptid"), m_szDepartmentKey);
				if(!m_szDepartmentKey.IsEmpty())
					m_wndDepartment.EnableWindow(FALSE);
				UpdateData(FALSE);
			}
			

		}
	}
	
	SetMode(nMode);

	if(m_nDocumentNo > 0)
		OnListLoadData();
	


}
void CHMSDepositAdmissionDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYOB.GetDlgCtrlID(), m_nYOB);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndReturnDate.GetDlgCtrlID(), m_szReturnDate);

}
void CHMSDepositAdmissionDialog::GetDataToScreen()
{
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	
	if(m_nInvoiceNo <= 0)
		return;
	m_szPaymentMethodKey = pMF->GetPaymentMethod();
	szSQL.Format(_T(" select d.hfe_docno as docno,") \
				_T("        hcr_recordno as recordno,") \
				_T("        hd_patientno as patientno, ") \
				_T("        hp_surname||' '||hp_midname||' '||hp_firstname as pname,") \
				_T("        TO_CHAR(hp_birthdate, 'YYYY') as yearofbirth,") \
				_T("        hp_sex as sex,") \
				_T("        d.hfe_objectid as objectid,") \
				_T("        hd_cardno as cardno,") \
				_T("        hcr_admitdate AS admitdate,") \
				_T("        d.hfe_deptid as deptid,") \
				_T("        d.hfe_date as receiptdate,") \
				_T("        d.hfe_serialno as serialno,") \
				_T("        d.hfe_receiptno as receiptno,") \
				_T("        get_selection_desc('hms_invoice_desc','5') as description,") \
				_T("        d.hfe_amount as amount,") \
				_T("        r.hfe_date as returndate, ") \
				_T("		d.hfe_payment_method as payment_method,") \
				_T(" hd_isinpatient ") \
				_T(" FROM hms_doc") \
				_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_fee_deposit d ON(hfe_docno=hd_docno)") \
				_T(" LEFT JOIN hms_fee_refund r ON(r.hfe_refidx=d.hfe_invoiceno)") \
				_T(" WHERE d.hfe_invoiceno=%d "), m_nInvoiceNo);

	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("docno"), m_nDocumentNo);
		rs.GetValue(_T("recordno"), m_szRecordNo);
		rs.GetValue(_T("admitdate"), m_szAdmitDate);
		rs.GetValue(_T("deptid"), m_szDepartmentKey);
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("yearofbirth"), m_nYOB);
		rs.GetValue(_T("sex"), m_szSexKey);
		rs.GetValue(_T("objectid"), m_szObjectKey);
		rs.GetValue(_T("cardno"), m_szCardNo);
		rs.GetValue(_T("serialno"), m_szSerialNo);
		rs.GetValue(_T("receiptno"), m_nReceiptNo);
		rs.GetValue(_T("receiptdate"), m_szReceiptDate);
		rs.GetValue(_T("description"), m_szDescription);
		rs.GetValue(_T("amount"), m_nAmount);

		rs.GetValue(_T("returndate"), tmpStr);

		if (!tmpStr.IsEmpty())
			m_szReturnDate = tmpStr;


		rs.GetValue(_T("hd_isinpatient"), tmpStr);
		if(tmpStr == _T("Y"))
		{
			m_bInpatient = true;
			m_wndRecordNo.SetCheckValue(true);
		}
		else
		{
			m_bInpatient = false;
			m_wndRecordNo.SetCheckValue(false);
		}
		rs.GetValue(_T("payment_method"), m_szPaymentMethodKey);
	}
	
}
void CHMSDepositAdmissionDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	CString szSurName, szMidName, szFirstName, szSQL;
	
	SplitName(m_szPatientName, szSurName, szMidName, szFirstName);	
	m_hms_patientTbl.SetValue(_T("hp_createdby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_createddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
//Lay ma benh nhan moi	
	m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNo);
	m_hms_patientTbl.SetValue(_T("hp_surname"), szSurName);
	m_hms_patientTbl.SetValue(_T("hp_midname"), szMidName); 
	m_hms_patientTbl.SetValue(_T("hp_firstname"), szFirstName); 
	m_hms_patientTbl.SetValue(_T("hp_birthdate"), m_szBirthDate); 
	m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSexKey); 

	
	
// Bang hms_doc
	m_hms_docTbl.SetValue(_T("hd_createdby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hd_createddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_updatedby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo); 
	m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocumentNo); 
	m_hms_docTbl.SetValue(_T("hd_status"), _T("P")); 	
	m_hms_docTbl.SetValue(_T("hd_admitdept"), m_szDepartmentKey);
	m_hms_docTbl.SetValue(_T("hd_admitdate"), pMF->GetSysDateTime()); 
	m_hms_docTbl.SetValue(_T("hd_object"), m_szObjectKey);



	if (!m_bEnableRefund)
	{
		m_hms_fee_depositTbl.SetValue(_T("hfe_type"), _T("A"));
		if (m_bInpatient == FALSE)
		{
			if(pMF->m_bIsRequest && !pMF->m_szRequestDept.IsEmpty())
			{
				m_szDepartmentKey = pMF->m_szRequestDept;
			}
		}
		m_hms_fee_depositTbl.SetValue(_T("hfe_deptid"), m_szDepartmentKey);
		m_hms_fee_depositTbl.SetValue(_T("hfe_patientno"), m_nPatientNo);
		m_hms_fee_depositTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);	
		m_hms_fee_depositTbl.SetValue(_T("hfe_serialno"), m_szSerialNo);
		m_hms_fee_depositTbl.SetValue(_T("hfe_receiptno"), m_nReceiptNo);
		m_hms_fee_depositTbl.SetValue(_T("hfe_staff"), pMF->GetCurrentUser());
		m_hms_fee_depositTbl.SetValue(_T("hfe_objectid"), m_szObjectKey);

		tmpStr.Format(_T("%s %s"), m_szReceiptDate, pMF->GetSysTime());
		m_hms_fee_depositTbl.SetValue(_T("hfe_date"), tmpStr);
		m_hms_fee_depositTbl.SetValue(_T("hfe_desc"), m_szDescription);
		m_hms_fee_depositTbl.SetValue(_T("hfe_amount"), m_nAmount);

		//_msg(_T("%ld:%ld"), m_nPatientNo, m_nDocumentNo);

		/*if (pMF->IsOutPatient)
			tmpStr.Format(_T("TM"));
		else
			tmpStr.Format(_T("EM"));*/

		m_hms_fee_depositTbl.SetValue(_T("hfe_org_id"), _T("FM"));
	}
	else
	{
		m_hms_fee_refundTbl.SetValue(_T("hfe_type"), _T("F"));
		m_hms_fee_refundTbl.SetValue(_T("hfe_deptid"), m_szDepartmentKey);
		m_hms_fee_refundTbl.SetValue(_T("hfe_refidx"), m_nInvoiceNo);
		m_hms_fee_refundTbl.SetValue(_T("hfe_patientno"), m_nPatientNo);
		m_hms_fee_refundTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);
		m_hms_fee_refundTbl.SetValue(_T("hfe_serialno"), m_szRefSerialNo);
		m_hms_fee_refundTbl.SetValue(_T("hfe_receiptno"), m_nRefReceiptNo);
		m_hms_fee_refundTbl.SetValue(_T("hfe_staff"), pMF->GetCurrentUser());
		m_hms_fee_refundTbl.SetValue(_T("hfe_objectid"), m_szObjectKey);

		tmpStr.Format(_T("%s %s"), m_szReturnDate, pMF->GetSysTime());
		m_hms_fee_refundTbl.SetValue(_T("hfe_date"), tmpStr);
		m_hms_fee_refundTbl.SetValue(_T("hfe_desc"), _T("6"));
		m_hms_fee_refundTbl.SetValue(_T("hfe_amount"), m_nAmount);

		/*if (pMF->IsOutPatient)
			tmpStr.Format(_T("TM"));
		else
			tmpStr.Format(_T("EM"));*/
		
		m_hms_fee_refundTbl.SetValue(_T("hfe_org_id"), _T("FM"));
	}

}
void CHMSDepositAdmissionDialog::SetDefaultValues(){
	m_szPaymentMethodKey.Empty();
	m_nDocumentNo=0;

	m_szRecordNo.Empty();

	m_nPatientNo = 0;
	m_nInvoiceNo = 0;
	m_szAdmitDate.Empty();
	m_szDepartmentKey.Empty();
	m_szPatientName.Empty();
	m_nYOB=0;
	m_szSexKey.Empty();
	m_szObjectKey.Empty();
	m_szCardNo.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szReceiptDate.Empty();
	m_nAmount=0;
	m_szDescription.Empty();
	m_szReturnDate.Empty();
	m_bInpatient = false;
	//m_bankPaymentInfo.nAmount = 0;
}
int CHMSDepositAdmissionDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1, -1);
 			SetDefaultValues(); 
 			break; 
 		};

		if (m_bRefund)
		{
			m_wndReturnDateLabel.ShowWindow(SW_SHOW);
			m_wndReturnDate.ShowWindow(SW_SHOW);
			m_wndAmount.SetReadOnly(TRUE);
		}
		else
		{
			m_wndReturnDateLabel.ShowWindow(SW_HIDE);
			m_wndReturnDate.ShowWindow(SW_HIDE);
			m_wndAmount.SetReadOnly(FALSE);
		}

		m_szDescription.Trim();
		if (m_szDescription.IsEmpty())
		{
			m_szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), _T("5"));
		}

		
 		UpdateData(FALSE); 
		m_wndPatientName.EnableWindow(FALSE);
		m_wndYOB.EnableWindow(FALSE);
		m_wndSex.EnableWindow(FALSE);
		m_wndObject.EnableWindow(FALSE);
		
		//Neu cho phep tao phieu hoan tra lai
		if(m_bEnableRefund)
		{
			m_wndRefund.ShowWindow(SW_SHOW);
			m_wndRefund.EnableWindow(TRUE);
		}
		else
		{
			m_wndRefund.EnableWindow(FALSE);
			m_wndRefund.ShowWindow(SW_HIDE);
		}
 		return nOldMode; 
}
/*void CHMSDepositAdmissionDialog::OnDocumentNoChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnDocumentNoCheckValue()
{
	m_bEnterPatient = false;

	if (m_nDocumentNo <= 0)
	{
		/*if (m_szRecordNo.IsEmpty())
		{
			m_wndPatientName.EnableWindow(true);
			m_wndYOB.EnableWindow(true);
			m_wndSex.EnableWindow(true);
			m_wndPatientName.SetCheckValue(true);
			m_bEnterPatient = true;
		}*/
		return 0;
	}

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	
	szSQL.Format(_T(" SELECT hcr_docno AS docno,") \
				_T("   hd_patientno as patientno, ") \
				_T("   hp_surname") \
				_T("   ||' '") \
				_T("   ||hp_midname") \
				_T("   ||' '") \
				_T("   ||hp_firstname                AS pname,") \
				_T("   TO_CHAR(hp_birthdate, 'YYYY') AS yearofbirth,") \
				_T("   hp_sex as sex,") \
				_T("   hd_object as objectid,") \
				_T("   hd_cardno as cardno,") \
				_T("   hcr_recordno as recordno, ") \
				_T("   htr_admitdate AS admitdate,") \
				_T(" htr_deptid as deptid, ") \
				_T(" hcrf_acceptedfee ") \
				_T(" FROM hms_doc ") \
				_T(" LEFT JOIN hms_clinical_record") \
				_T(" LEFT JOIN hms_treatment_record on(htr_docno=hcr_docno )") \
				_T(" ON(hd_docno=hcr_docno)") \
				_T(" LEFT JOIN hms_patient") \
				_T(" ON(hp_patientno=hd_patientno) ") \
				_T(" WHERE htr_docno =%ld and htr_status in('A','I','T') ORDER BY htr_idx DESC "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	m_bInpatient = true;
	if(rs.IsEOF())
	{
			szSQL.Format(_T(" SELECT hd_docno AS docno,") \
				_T("   hd_patientno as patientno, ") \
				_T("   hp_surname") \
				_T("   ||' '") \
				_T("   ||hp_midname") \
				_T("   ||' '") \
				_T("   ||hp_firstname                AS pname,") \
				_T("   TO_CHAR(hp_birthdate, 'YYYY') AS yearofbirth,") \
				_T("   hp_sex as sex,") \
				_T("   hd_object as objectid,") \
				_T("   hd_cardno as cardno,") \
				_T("   '' as recordno, ") \
				_T("	hd_admitdate AS admitdate,") \
				_T("	hd_admitdept as deptid ") \
				_T(" FROM hms_doc ") \
				_T(" LEFT JOIN hms_patient") \
				_T(" ON(hp_patientno=hd_patientno) ") \
				_T(" WHERE hd_docno =%ld and hd_status in('O', 'P', 'T')"), m_nDocumentNo);
		m_bInpatient = false;
		rs.ExecSQL(szSQL);
	}

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("patientno"), m_nPatientNo);

		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("yearofbirth"), m_nYOB);
		rs.GetValue(_T("sex"), m_szSexKey);
		
		rs.GetValue(_T("objectid"), m_szObjectKey);
		rs.GetValue(_T("cardno"), m_szCardNo);
		rs.GetValue(_T("admitdate"), m_szAdmitDate);
		rs.GetValue(_T("deptid"), tmpStr);
		m_szDepartmentKey = tmpStr;
		if(pMF->m_bIsRequest && !pMF->m_szRequestDept.IsEmpty())
		{
			m_szDepartmentKey = pMF->m_szRequestDept;
		}
		rs.GetValue(_T("recordno"), m_szRecordNo);

		m_wndPatientName.EnableWindow(FALSE);
		m_wndYOB.EnableWindow(FALSE);
		m_wndSex.EnableWindow(FALSE);
		m_wndObject.EnableWindow(FALSE);
//		m_wndRecordNo.SetReadOnly(TRUE);
		if(m_bInpatient)
		{
			m_wndRecordNo.SetCheckValue(true);
			m_wndRecordNo.SetReadOnly(false);
		}
		else
		{
			m_wndRecordNo.SetCheckValue(false);
			m_wndRecordNo.SetReadOnly(true);
		}
		m_nFlag = 1;

		//Kiem tra neu benh nhan da xac nhan phi trong khoa roi thi khong cho phep tao phieu tam gui nua.
		rs.GetValue(_T("hcrf_acceptedfee"), tmpStr);

		if(tmpStr  == _T("Y") || tmpStr ==_T("P"))
		{
			if(m_szDepartmentKey != _T("A20") && m_szDepartmentKey != _T("B4"))
			{
				ShowMessageBox(_T("Bệnh nhân đã được xác nhận chi phí trong khoa. Không cho phép tạo phiếu tạm gửi"));
				return -1;
			}
		}

		OnListLoadData();
		
	}
	else
	{
		m_szPatientName.Empty();
		m_nYOB = 0;
		m_wndPatientName.EnableWindow(TRUE);
		m_wndYOB.EnableWindow(TRUE);
		m_wndSex.EnableWindow(TRUE);
//		m_wndRecordNo.SetReadOnly(FALSE);
		m_nFlag = 0;
	}
	SetDepositDefault();
	UpdateData(FALSE);
	if(m_nDocumentNo > 0 && m_szPatientName.IsEmpty())
	{
		m_wndDocumentNo.SetToolTipMessage(_T("Patient not found."));
		return -1;
	}
	return 0;
} 
/*void CHMSDepositAdmissionDialog::OnRecordNoChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnRecordNoSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnRecordNoKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnRecordNoCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_bEnterPatient = false;
	if(!m_bInpatient)
		return 0;
	
	if (m_szRecordNo.IsEmpty())
	{

		/*if (m_nDocumentNo <= 0)
		{
			m_wndPatientName.EnableWindow(true);
			m_wndYOB.EnableWindow(true);
			m_wndSex.EnableWindow(true);
			m_wndPatientName.SetCheckValue(true);
			m_bEnterPatient = true;
		}*/
		return 0;
	}
	
	if (m_nFlag == 1)
	{
		return 0;
	}

	szSQL.Format(_T(" SELECT hcr_docno AS docno, hd_patientno as patientno, ") \
				_T("   hp_surname") \
				_T("   ||' '") \
				_T("   ||hp_midname") \
				_T("   ||' '") \
				_T("   ||hp_firstname                AS pname,") \
				_T("   TO_CHAR(hp_birthdate, 'YYYY') AS yearofbirth,") \
				_T("   hp_sex as sex,") \
				_T("   hd_object as objectid,") \
				_T("   hd_cardno as cardno,") \
				_T("   hcr_recordno as recordno, ") \
				_T("   hcr_admitdate AS admitdate,") \
				_T("   case when hcr_status='A' then hcr_admitdept") \
				_T("        when hcr_status<>'A' and hcr_dischargedept is null then") \
				_T("             (select distinct htr_deptid from hms_treatment_record where htr_docno=hcr_docno and htr_status='I')") \
				_T("   else hcr_dischargedept end as deptid") \
				_T(" FROM hms_doc ") \
				_T(" LEFT JOIN hms_clinical_record") \
				_T(" ON(hd_docno=hcr_docno)") \
				_T(" LEFT JOIN hms_patient") \
				_T(" ON(hp_patientno=hd_patientno)") \
				_T(" WHERE hcr_recordno='%s' AND hcr_status<>'T' "), m_szRecordNo);

	rs.ExecSQL(szSQL);
	if(rs.GetRecordCount() > 1)
	{
		szSQL.Format(_T(" SELECT hcr_docno AS id, hd_patientno as patientno, ") \
				_T("   hp_surname") \
				_T("   ||' '") \
				_T("   ||hp_midname") \
				_T("   ||' '") \
				_T("   ||hp_firstname  AS name,") \
				_T("   TO_CHAR(hp_birthdate, 'YYYY') AS yearofbirth,") \
				_T("   hp_sex as sex,") \
				_T("   hd_object as objectid,") \
				_T("   hms_getobjectname(hd_object) as objectname,") \
				_T("   hd_cardno as cardno,") \
				_T("   hcr_recordno as recordno,") \
				_T("   hcr_admitdate AS admitdate,") \
				_T("   case when hcr_status='A' then hcr_admitdept") \
				_T("        when hcr_status<>'A' and hcr_dischargedept is null then") \
				_T("             (select distinct htr_deptid from hms_treatment_record where htr_docno=hcr_docno and htr_status='I')") \
				_T("   else hcr_dischargedept end as deptid") \
				_T(" FROM hms_doc ") \
				_T(" LEFT JOIN hms_clinical_record") \
				_T(" ON(hd_docno=hcr_docno)") \
				_T(" LEFT JOIN hms_patient") \
				_T(" ON(hp_patientno=hd_patientno)") \
				_T(" WHERE hcr_recordno='%s' AND hcr_status<>'T' ") \
				_T(" ORDER BY hcr_recordno DESC"), m_szRecordNo);

		CHMSPatientInforDialog dlg(this);
		dlg.m_szSQL = szSQL;
		if (dlg.DoModal() == IDOK)
		{
			m_nDocumentNo = dlg.m_nDocNo;
			OnDocumentNoCheckValue();
		}
	}
	else if(!rs.IsEOF()){
		rs.GetValue(_T("patientno"), m_nPatientNo);
		rs.GetValue(_T("docno"), m_nDocumentNo);
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("yearofbirth"), m_nYOB);
		rs.GetValue(_T("sex"), m_szSexKey);
		
		rs.GetValue(_T("objectid"), m_szObjectKey);
		rs.GetValue(_T("cardno"), m_szCardNo);
		rs.GetValue(_T("admitdate"), m_szAdmitDate);
		rs.GetValue(_T("deptid"), tmpStr);
		if(m_szDepartmentKey.IsEmpty())
			m_szDepartmentKey = tmpStr;
		rs.GetValue(_T("recordno"), m_szRecordNo);
		m_wndPatientName.EnableWindow(FALSE);
		m_wndYOB.EnableWindow(FALSE);
		m_wndSex.EnableWindow(FALSE);
		m_wndObject.EnableWindow(FALSE);
	}
	else
	{
		m_szPatientName.Empty();
		m_nYOB = 0;
		m_wndPatientName.EnableWindow(TRUE);
		m_wndYOB.EnableWindow(TRUE);
		m_wndSex.EnableWindow(TRUE);
	}
	UpdateData(FALSE);
	if (!m_szRecordNo.IsEmpty() && m_szPatientName.IsEmpty())
	{
		m_wndDocumentNo.SetToolTipMessage(_T("Patient not found."));
		return -1;
	}
	return 0;
} 
/*void CHMSDepositAdmissionDialog::OnAdmitDateChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnAdmitDateSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnAdmitDateKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnAdmitDateCheckValue(){
	return 0;
} 
void CHMSDepositAdmissionDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepositAdmissionDialog::OnDepartmentSelendok(){
	 UpdateData();
	 SetDepositDefault(TRUE);
	 UpdateData(FALSE);
}
/*void CHMSDepositAdmissionDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSDepositAdmissionDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSDepositAdmissionDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szType;

	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id = '%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;

	if (pMF->m_bIsRequest)
	{
		szType.Empty();
	}
	else
	{
		if(m_szRecordNo.IsEmpty())
			szType = _T("KB");
		else
		{
			szType = _T("DT");
			szWhere.AppendFormat(_T(" and sd_id in(select distinct htr_deptid from hms_treatment_record where htr_docno=%ld) "), m_nDocumentNo);
		}
	}
	if (!szType.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and (sd_type IN ('%s') OR sd_id = 'CTXH')"), szType);
	}
	szSQL.Format(_T("SELECT * FROM sys_dept WHERE sd_isactive = 'Y' %s ORDER BY sd_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSDepositAdmissionDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDepositAdmissionDialog::OnPatientNameChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnPatientNameKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSDepositAdmissionDialog::OnYOBChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnYOBSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnYOBKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnYOBCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szYear, tmpStr;
	tmpStr = pMF->GetSysDate();
	szYear = tmpStr.Left(4);
	if(!m_wndYOB.IsWindowEnabled())
		return 0;
	
	if(m_nYOB  < 1900 || m_nYOB > str2int(szYear))
		return -1;
	m_szBirthDate.Format(_T("%.4d/01/01"), m_nYOB);
	return 0;
} 
void CHMSDepositAdmissionDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepositAdmissionDialog::OnSexSelendok(){
	 
}
/*void CHMSDepositAdmissionDialog::OnSexSetfocus(){
	
}*/
/*void CHMSDepositAdmissionDialog::OnSexKillfocus(){
	
}*/
long CHMSDepositAdmissionDialog::OnSexLoadData(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szSexKey);
	};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_sex' %s ORDER BY ss_code"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDepositAdmissionDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDepositAdmissionDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepositAdmissionDialog::OnObjectSelendok(){
	 
}
/*void CHMSDepositAdmissionDialog::OnObjectSetfocus(){
	
}*/
/*void CHMSDepositAdmissionDialog::OnObjectKillfocus(){
	
}*/
long CHMSDepositAdmissionDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ") \
				_T(" ho_desc as name, ") \
				_T(" ho_type as object_type ") \
				_T(" FROM hms_object ") \
				_T(" WHERE ho_active='Y' %s ") \
				_T(" ORDER BY cast(ho_id as integer) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("object_type")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDepositAdmissionDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDepositAdmissionDialog::OnCardNoChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnCardNoKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnCardNoCheckValue(){
	return 0;
} 
/*void CHMSDepositAdmissionDialog::OnSerialNoChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnSerialNoKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSDepositAdmissionDialog::OnReceiptNoChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CHMSDepositAdmissionDialog::OnReceiptDateChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSDepositAdmissionDialog::OnAmountChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnAmountSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnAmountKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnAmountCheckValue(){
	if(m_nAmount <= 0)
		return -1;
	return 0;
} 
/*void CHMSDepositAdmissionDialog::OnDescriptionChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnDescriptionKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnDescriptionCheckValue(){
	return 0;
}
/*void CHMSDepositAdmissionDialog::OnReturnDateChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnReturnDateSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnReturnDateKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnReturnDateCheckValue(){
	return 0;
}
void CHMSDepositAdmissionDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDepositAdmissionDialog();
} 
void CHMSDepositAdmissionDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSDepositAdmissionDialog::OnAddHMSDepositAdmissionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDepositAdmissionDialog::OnEditHMSDepositAdmissionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDepositAdmissionDialog::OnDeleteHMSDepositAdmissionDialog(){
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
 		OnCancelHMSDepositAdmissionDialog(); 
 	}
	return 0;
}
int CHMSDepositAdmissionDialog::OnSaveHMSDepositAdmissionDialog()
{
	if (GetMode() != VM_ADD) 
 		return -1; 

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL, szSQL2; 
		
	if(m_bInpatient)
	{
		m_wndRecordNo.SetCheckValue(true);
		m_wndRecordNo.SetReadOnly(false);
	}
	else
	{
		m_wndRecordNo.SetCheckValue(false);
		m_wndRecordNo.SetReadOnly(true);
	}

 	if (!IsValidateData()) 
	{
 		return -1; 
	}
	if(m_szPaymentMethodKey == _T("ATM") || m_szPaymentMethodKey == _T("TTD") || m_szPaymentMethodKey == _T("CK"))
	{
		if (m_bankPaymentInfo.nAmount <= 0)
		{
			ShowMessageBox(_T("Yêu cầu nhập đủ thông tin thanh toán!"));
			return -1;
		}
	}
/*
	if (m_bEnterPatient)
	{
		pMF->BeginTransaction();
	
		szSQL.Format(_T("hms_getnextpatientno()"));
		m_nPatientNo = str2long(pMF->ExecDML(szSQL));

		szSQL.Format(_T("hms_getnextdocno()"));
		m_nDocumentNo = str2long(pMF->ExecDML(szSQL));
		
		m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNo);
		m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo); 
		m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocumentNo); 

		szSQL = m_hms_patientTbl.GetInsertSQL();
		_debug(_T("%s"), szSQL);	
		int ret = pMF->ExecSQL(szSQL);
		if (ret <= 0)
		{
			pMF->Rollback();
			ShowMessageBox(_T("Can not add new patient information"), MB_OK);
			return -1;
		}
	
		szSQL = m_hms_docTbl.GetInsertSQL(); 

		ret = pMF->ExecSQL(szSQL); 
		if (ret <= 0)
		{
			pMF->Rollback();
			ShowMessageBox(_T("Can not add new document information"), MB_OK);
			return -1;
		}
		pMF->Commit();

		if (!m_bRefund)
		{
			m_hms_fee_depositTbl.SetValue(_T("hfe_patientno"), m_nPatientNo);
			m_hms_fee_depositTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);
		}
		else
		{
			m_hms_fee_refundTbl.SetValue(_T("hfe_patientno"), m_nPatientNo);
			m_hms_fee_refundTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);
		}
	}

	//_msg(_T("%ld"), m_nInvoiceNo);
*/
	szSQL.Format(_T("HMS_FEE_DEPOSIT_CREATE(%s) "), m_hms_fee_depositTbl.FormatSQL());

	long nInvoiceNo = str2long(pMF->ExecDML(szSQL));

	m_nDepositInvoice = 0;
	m_nRefundInvoice = 0;

 	if (nInvoiceNo > 0)
 	{ 
		if(pMF->IsSmartCard())
		{
			m_szPaymentMethodKey = _T("THE");
		}
		szSQL.Format(_T("UPDATE hms_fee_deposit SET hfe_payment_method='%s' WHERE hfe_docno=%ld and hfe_invoiceno=%ld"), m_szPaymentMethodKey, m_nDocumentNo, nInvoiceNo);
		pMF->ExecSQL(szSQL);
		//pMF->BeginTransaction();

		CDbfMap tbl;
		
		tbl.AddField(_T("user_id"), dfText, 15);
		tbl.AddField(_T("docno"), dfLong);
		tbl.AddField(_T("invoiceno"), dfLong);
		tbl.AddField(_T("payment_method"), dfText, 3);
		tbl.AddField(_T("pos_no"), dfText, 20);
		tbl.AddField(_T("receipt_no"), dfText, 15);
		tbl.AddField(_T("receipt_date"), dfDateTime);
		tbl.AddField(_T("account_no"), dfText, 20);
		tbl.AddField(_T("account_name"), dfText, 65);
		tbl.AddField(_T("account_address"), dfText, 254);
		tbl.AddField(_T("card_no"), dfText, 20);
		tbl.AddField(_T("bank_id"), dfText, 35);
		tbl.AddField(_T("bank_name"), dfText, 254);
		tbl.AddField(_T("bank_brand"), dfText, 254);
		tbl.AddField(_T("amount"), dfDouble);
		tbl.AddField(_T("note"), dfText, 254);

		tbl.SetValue(_T("user_id"), pMF->GetCurrentUser());
		tbl.SetValue(_T("docno"), m_nDocumentNo);
		tbl.SetValue(_T("invoiceno"), nInvoiceNo);
		tbl.SetValue(_T("pos_no"), m_bankPaymentInfo.szPosNo);
		tbl.SetValue(_T("payment_method"), m_szPaymentMethodKey);
		tbl.SetValue(_T("receipt_no"), m_bankPaymentInfo.szReceiptNo);
		tbl.SetValue(_T("receipt_date"), m_bankPaymentInfo.szReceiptDate);
		tbl.SetValue(_T("account_no"), m_bankPaymentInfo.szAccountNo);
		tbl.SetValue(_T("account_name"), m_bankPaymentInfo.szAccountName);
		tbl.SetValue(_T("account_address"), m_bankPaymentInfo.szAddress);
		tbl.SetValue(_T("card_no"), m_bankPaymentInfo.szCardNo);
		tbl.SetValue(_T("bank_id"), m_bankPaymentInfo.szBankId);
		tbl.SetValue(_T("bank_name"), m_bankPaymentInfo.szBankName);
		tbl.SetValue(_T("bank_brand"), m_bankPaymentInfo.szBrand);
		tbl.SetValue(_T("amount"), m_nAmount);
		tbl.SetValue(_T("note"), m_bankPaymentInfo.szNote);

		szSQL.Format(_T("HMS_FEE_INVOICE_BANK_CREATE(%s)"), tbl.FormatSQL());

		int res = str2int(pMF->ExecDML(szSQL));
		//_msg(_T("%s"), szSQL);
		if(res <= 0)
		{
			ShowMessageBox(_T("Không lưu được thông tin thẻ tín dụng. Vui lòng kiểm tra lại"));
		}
		//pMF->Commit();
		// Lệnh preview đã được gọi trong hàm in Deposit rồi -> không cần gọi lần 2 nữa
		//pMF->PrintDeposit(nInvoiceNo);
		m_nDepositInvoice = nInvoiceNo;
		CGuiDialog::OnOK();
		return 1;
	}
	
	return 0;

}
int CHMSDepositAdmissionDialog::OnCancelHMSDepositAdmissionDialog(){
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
int CHMSDepositAdmissionDialog::OnHMSDepositAdmissionDialogListLoadData(){
	return 0;
}


int CHMSDepositAdmissionDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT hfe_invoiceno, hfe_date, hfe_deptid, hfe_desc, hfe_amount, hfe_patpaid FROM hms_fee_deposit WHERE hfe_docno=%ld and hfe_status not in('R','C') ORDER BY hfe_invoiceno "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	int nIndex=0;
	m_wndList.BeginLoad();
	double nTotalAmount = 0;
	double nAmount=0;
	double nTotalPaidAmount = 0;
	double nPaidAmount=0;
	while(!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), ++nIndex);
		rs.GetValue(_T("hfe_amount"), nAmount);
		rs.GetValue(_T("hfe_patpaid"), nPaidAmount);
		nTotalAmount += nAmount;
		nTotalPaidAmount += nPaidAmount;
		m_wndList.AddItems(tmpStr,
			rs.GetValue(_T("hfe_invoiceno")),
			rs.GetValue(_T("hfe_date")),
			rs.GetValue(_T("hfe_deptid")),
			rs.GetValue(_T("hfe_desc")),
			rs.GetValue(_T("hfe_amount")),
			rs.GetValue(_T("hfe_patpaid")),
			NULL);
		rs.MoveNext();
	}
	if(nTotalAmount > 0){
		TranslateString(_T("Total Amount"), tmpStr);		
		int nItem = m_wndList.AddItems(
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			tmpStr,
			ToString(nTotalAmount),
			ToString(nTotalPaidAmount),
			NULL);
		m_wndList.SetItemBkColor(nItem, RGB(0, 128, 192), FALSE);
		m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
	}
	m_wndList.EndLoad();
	return 0;
}
void CHMSDepositAdmissionDialog::OnCreateRefund(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szMsg;
	
	if(!m_bEnableRefund)
		return;

	szSQL.Format(_T("HMS_FEE_CHECKBF_REFUND(%ld, %ld)"), m_nDocumentNo, m_nInvoiceNo);
	int res = str2int(pMF->ExecDML(szSQL));

	if(res <= 0)
	{
		if(res == -1)
			ShowMessageBox(_T("Bệnh nhân đã được xác nhận chi phí trong khoa. Không cho phép tạo phiếu hoàn trả"));
		else if(res == -2)
		{
			ShowMessageBox(_T("Mục tạm ứng đã được thanh toán. Không cho phép tạo phiếu trả lại"));
		}
		else
			ShowMessageBox(_T("Không cho phép tạo phiếu trả lại"));

		return;
	}

	szMsg.Format(_T("Bạn có chắc chắn muốn tạo phiếu trả lại bệnh nhân số tiền[%ld] không?(Y/N)"), m_nAmount);

	int ret = ShowMessageBox(szMsg, MB_YESNO|MB_ICONQUESTION);
	if(ret == IDNO)
		return;

//	szSQL.Format(_T("HMS_FEE_INPREFUND_INSERT(%s) "), m_hms_fee_refundTbl.FormatSQL());
	CString szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), _T("6"));
	
	szSQL.Format(_T("HMS_FEE_DEPOSIT_CREATEREFUND(%ld,%ld,'%s','%s') "),
		m_nDocumentNo, m_nInvoiceNo, szDescription, pMF->GetCurrentUser());

	long nInvoiceNo = str2long(pMF->ExecDML(szSQL));

	m_nRefundInvoice = 0;

 	if (nInvoiceNo > 0)
 	{ 
			CString szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), _T("6"));
			if (m_nInvoiceNo > 0)
			{
				//szSQL.Format(_T("HMS_FEE_INPREFUNDLINE_INSERT(0, %ld, %ld, %ld, %ld, %ld, '%s', '%s', '%s', false)"),
				//	         nInvoiceNo, m_nInvoiceNo, m_nPatientNo, m_nDocumentNo, m_nAmount, m_szDepartmentKey,
				//			 szDescription, m_szReturnDate);
				//long nRet = str2long(pMF->ExecDML(szSQL));
				////pMF->PrintRefund(m_nInvoiceNo, true);

				//szSQL.Format(_T("UPDATE hms_doc SET hfe_deposit_amount=hfe_deposit_amount-%ld ") \
				//	         _T("WHERE hd_docno=%ld"), m_nAmount, m_nDocumentNo);
				//pMF->ExecSQL(szSQL);
				m_nRefundInvoice = nInvoiceNo;
			}
	}
	CGuiDialog::OnOK();

}

long CHMSDepositAdmissionDialog::OnPaymentMethodLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
		szWhere.Format(_T(" and adpm_payment_method_id='%s' "), m_szPaymentMethodKey);
	};

	if(pMF->CheckPermission(_T("40.09")))
	{
		szWhere.AppendFormat(_T(" or adpm_org_id IN ('ALL') "));
	}

	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpm_payment_method_id as id, adpm_description as name FROM ad_payment_method WHERE (adpm_org_id='FM' %s) and adpm_isactive='Y' %s ORDER BY adpm_line "), szWhere, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}

void CHMSDepositAdmissionDialog::OnPaymentMethodLabelSelect()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	if(m_szPaymentMethodKey != _T("ATM") && m_szPaymentMethodKey != _T("TTD") && m_szPaymentMethodKey != _T("CK"))
	{
		return;
	}
	CString szSQL;
	CHMSBankPaymentInfoDialog dlg(this, VM_ADD);
	dlg.m_szPaymentMethod = m_szPaymentMethodKey;
	dlg.m_bDeposit = true;
	dlg.m_nAmount = m_nAmount;
	//if (dlg.DoModal() == IDOK)
	dlg.DoModal();
	{
		m_bankPaymentInfo.szPosNo = dlg.m_szPOSNo;
		m_bankPaymentInfo.szAccountNo = dlg.m_szAccountNo;
		m_bankPaymentInfo.szAccountName = dlg.m_szAccountName;
		m_bankPaymentInfo.szCardNo = dlg.m_szCardNo;
		m_bankPaymentInfo.szAddress = dlg.m_szAddress;
		m_bankPaymentInfo.szBankId = dlg.m_szBankNameKey;
		m_bankPaymentInfo.szBankName = dlg.m_szBankName;
		m_bankPaymentInfo.szBrand = dlg.m_szBrand;
		m_bankPaymentInfo.szReceiptNo = dlg.m_szReceiptNo;
		m_bankPaymentInfo.szReceiptDate = dlg.m_szReceiptDate;
		m_bankPaymentInfo.szNote = dlg.m_szNote;
		m_bankPaymentInfo.nAmount = dlg.m_nAmount;
	}
}
int CHMSDepositAdmissionDialog::SetDepositDefault(BOOL bReset)
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select ho_type from hms_object where ho_id = %s"), m_szObjectKey);
	rs.ExecSQL(szSQL);
	if (rs.GetStringValue() != _T("I"))
	{
		return 0;
	}
	if (m_szDepartmentKey == _T("C1.1") || m_szDepartmentKey == _T("AB"))
	{
		if (m_nAmount == 0)
		{
			m_nAmount = pow(10, 6);
		}
		if (m_szPaymentMethodKey.IsEmpty())
		{
			m_szPaymentMethodKey = _T("TM1");
		}
		m_wndPaymentMethod.SetFocus();
		return 1;
	}
	else
	{
		if (bReset)
		{
			m_nAmount = 0;
			m_szPaymentMethodKey.Empty();
		}
		return 0;
	}
	return 0;
}