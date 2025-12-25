#include "HMSAdmissionDepositDialog.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnAdmitDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmissionDepositDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnAgeCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmissionDepositDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnSexAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmissionDepositDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionDepositDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionDepositDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdmissionDepositDialog *pVw = (CHMSAdmissionDepositDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAdmissionDepositDialog *pVw = (CHMSAdmissionDepositDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAdmissionDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionDepositDialog*)pWnd)->OnAddHMSAdmissionDepositDialog();
} 
static int _OnEditHMSAdmissionDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionDepositDialog*)pWnd)->OnEditHMSAdmissionDepositDialog();
} 
static int _OnDeleteHMSAdmissionDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionDepositDialog*)pWnd)->OnDeleteHMSAdmissionDepositDialog();
} 
static int _OnSaveHMSAdmissionDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionDepositDialog*)pWnd)->OnSaveHMSAdmissionDepositDialog();
} 
static int _OnCancelHMSAdmissionDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmissionDepositDialog*)pWnd)->OnCancelHMSAdmissionDepositDialog();
} 
CHMSAdmissionDepositDialog::CHMSAdmissionDepositDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 575;
	m_nDlgHeight = 340;
	SetDefaultValues();
}
CHMSAdmissionDepositDialog::~CHMSAdmissionDepositDialog(){
}
void CHMSAdmissionDepositDialog::OnCreateComponents(){
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 130, 55);
	m_wndDocumentNo.Create(this,135, 30, 235, 55); 
	m_wndRecordNo.Create(this,240, 30, 310, 55); 
	m_wndDepositInformation.Create(this, _T("Deposit information"), 5, 5, 565, 305);
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 315, 30, 435, 55);
	m_wndAdmitDate.Create(this,440, 30, 560, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 130, 85);
	m_wndDepartment.Create(this,135, 60, 560, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 90, 130, 115);
	m_wndPatientName.Create(this,135, 90, 560, 115); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 120, 130, 145);
	m_wndAge.Create(this,135, 120, 310, 145); 
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
	m_wndSave.Create(this, _T("&Save"), 380, 310, 470, 335);
	m_wndClose.Create(this, _T("&Close"), 475, 310, 565, 335);

}
void CHMSAdmissionDepositDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(16);
	m_wndRecordNo.SetCheckValue(true);
	m_wndAdmitDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(16);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(16);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndCardNo.SetLimitText(35);
	m_wndCardNo.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(16);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(16);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndReceiptDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndReceiptDate.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndDescription.SetLimitText(16);
	m_wndDescription.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSAdmissionDepositDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSAdmissionDepositDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_nRecordNo);
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_nAge);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSAdmissionDepositDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAdmissionDepositDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdmissionDepositDialog::SetDefaultValues(){

	m_nDocumentNo=0;
	m_nRecordNo=0;
	m_szAdmitDate.Empty();
	m_szDepartmentKey.Empty();
	m_szPatientName.Empty();
	m_nAge=0;
	m_szSexKey.Empty();
	m_szObjectKey.Empty();
	m_szCardNo.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szReceiptDate.Empty();
	m_nAmount=0;
	m_szDescription.Empty();

}
int CHMSAdmissionDepositDialog::SetMode(int nMode){
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
/*void CHMSAdmissionDepositDialog::OnDocumentNoChange(){
	
} */
/*void CHMSAdmissionDepositDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSAdmissionDepositDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSAdmissionDepositDialog::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSAdmissionDepositDialog::OnRecordNoChange(){
	
} */
/*void CHMSAdmissionDepositDialog::OnRecordNoSetfocus(){
	
} */
/*void CHMSAdmissionDepositDialog::OnRecordNoKillfocus(){
	
} */
int CHMSAdmissionDepositDialog::OnRecordNoCheckValue(){
	return 0;
} 
/*void CHMSAdmissionDepositDialog::OnAdmitDateChange(){
	
} */
/*void CHMSAdmissionDepositDialog::OnAdmitDateSetfocus(){
	
} */
/*void CHMSAdmissionDepositDialog::OnAdmitDateKillfocus(){
	
} */
int CHMSAdmissionDepositDialog::OnAdmitDateCheckValue(){
	return 0;
} 
void CHMSAdmissionDepositDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionDepositDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSAdmissionDepositDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSAdmissionDepositDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSAdmissionDepositDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmissionDepositDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAdmissionDepositDialog::OnPatientNameChange(){
	
} */
/*void CHMSAdmissionDepositDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSAdmissionDepositDialog::OnPatientNameKillfocus(){
	
} */
int CHMSAdmissionDepositDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSAdmissionDepositDialog::OnAgeChange(){
	
} */
/*void CHMSAdmissionDepositDialog::OnAgeSetfocus(){
	
} */
/*void CHMSAdmissionDepositDialog::OnAgeKillfocus(){
	
} */
int CHMSAdmissionDepositDialog::OnAgeCheckValue(){
	return 0;
} 
void CHMSAdmissionDepositDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionDepositDialog::OnSexSelendok(){
	 
}
/*void CHMSAdmissionDepositDialog::OnSexSetfocus(){
	
}*/
/*void CHMSAdmissionDepositDialog::OnSexKillfocus(){
	
}*/
long CHMSAdmissionDepositDialog::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSexKey
};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmissionDepositDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAdmissionDepositDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionDepositDialog::OnObjectSelendok(){
	 
}
/*void CHMSAdmissionDepositDialog::OnObjectSetfocus(){
	
}*/
/*void CHMSAdmissionDepositDialog::OnObjectKillfocus(){
	
}*/
long CHMSAdmissionDepositDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmissionDepositDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAdmissionDepositDialog::OnCardNoChange(){
	
} */
/*void CHMSAdmissionDepositDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSAdmissionDepositDialog::OnCardNoKillfocus(){
	
} */
int CHMSAdmissionDepositDialog::OnCardNoCheckValue(){
	return 0;
} 
/*void CHMSAdmissionDepositDialog::OnSerialNoChange(){
	
} */
/*void CHMSAdmissionDepositDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSAdmissionDepositDialog::OnSerialNoKillfocus(){
	
} */
int CHMSAdmissionDepositDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSAdmissionDepositDialog::OnReceiptNoChange(){
	
} */
/*void CHMSAdmissionDepositDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSAdmissionDepositDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSAdmissionDepositDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CHMSAdmissionDepositDialog::OnReceiptDateChange(){
	
} */
/*void CHMSAdmissionDepositDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSAdmissionDepositDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSAdmissionDepositDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSAdmissionDepositDialog::OnAmountChange(){
	
} */
/*void CHMSAdmissionDepositDialog::OnAmountSetfocus(){
	
} */
/*void CHMSAdmissionDepositDialog::OnAmountKillfocus(){
	
} */
int CHMSAdmissionDepositDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CHMSAdmissionDepositDialog::OnDescriptionChange(){
	
} */
/*void CHMSAdmissionDepositDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSAdmissionDepositDialog::OnDescriptionKillfocus(){
	
} */
int CHMSAdmissionDepositDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSAdmissionDepositDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionDepositDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdmissionDepositDialog::OnAddHMSAdmissionDepositDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdmissionDepositDialog::OnEditHMSAdmissionDepositDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdmissionDepositDialog::OnDeleteHMSAdmissionDepositDialog(){
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
 		OnCancelHMSAdmissionDepositDialog();
 	}
	return 0;
}
int CHMSAdmissionDepositDialog::OnSaveHMSAdmissionDepositDialog(){
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
 		//OnHMSAdmissionDepositDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAdmissionDepositDialog::OnCancelHMSAdmissionDepositDialog(){
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
int CHMSAdmissionDepositDialog::OnHMSAdmissionDepositDialogListLoadData(){
	return 0;
}
