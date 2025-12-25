#include "CustomerVisitRegisterDialogEX.h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCustomerVisitRegisterDialogEX* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnCustomerNameChangeFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnCustomerNameChange();
} */
/*static void _OnCustomerNameSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnCustomerNameSetfocus();} */ 
/*static void _OnCustomerNameKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnCustomerNameKillfocus();
} */
static int _OnCustomerNameCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnCustomerNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnReasonCheckValue();
} 
/*static void _OnGuardianChangeFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnGuardianChange();
} */
/*static void _OnGuardianSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnGuardianSetfocus();} */ 
/*static void _OnGuardianKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnGuardianKillfocus();
} */
static int _OnGuardianCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnGuardianCheckValue();
} 
static void _OnCardTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCustomerVisitRegisterDialogEX* )pWnd)->OnCardTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCardTypeSelendokFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnCardTypeSelendok();
}
/*static void _OnCardTypeSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnCardTypeKillfocus();
}*/
/*static void _OnCardTypeKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnCardTypeKillfocus();
}*/
static long _OnCardTypeLoadDataFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnCardTypeLoadData();
}
/*static void _OnCardTypeAddNewFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnCardTypeAddNew();
}*/
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd)
{
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnTimeInChangeFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTimeInChange();
} */
/*static void _OnTimeInSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTimeInSetfocus();} */ 
/*static void _OnTimeInKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTimeInKillfocus();
} */
static int _OnTimeInCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnTimeInCheckValue();
} 
/*static void _OnTimeOutChangeFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTimeOutChange();
} */
/*static void _OnTimeOutSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTimeOutSetfocus();} */ 
/*static void _OnTimeOutKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTimeOutKillfocus();
} */
static int _OnTimeOutCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnTimeOutCheckValue();
} 
static void _OnTermBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCustomerVisitRegisterDialogEX* )pWnd)->OnTermBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTermBySelendokFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTermBySelendok();
}
/*static void _OnTermBySetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTermByKillfocus();
}*/
/*static void _OnTermByKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTermByKillfocus();
}*/
static long _OnTermByLoadDataFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnTermByLoadData();
}
/*static void _OnTermByAddNewFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTermByAddNew();
}*/
/*static void _OnTermDateChangeFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTermDateChange();
} */
/*static void _OnTermDateSetfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTermDateSetfocus();} */ 
/*static void _OnTermDateKillfocusFnc(CWnd *pWnd){
	((CCustomerVisitRegisterDialogEX *)pWnd)->OnTermDateKillfocus();
} */
static int _OnTermDateCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnTermDateCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCustomerVisitRegisterDialogEX *pVw = (CCustomerVisitRegisterDialogEX *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCustomerVisitRegisterDialogEX *pVw = (CCustomerVisitRegisterDialogEX *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnCardNoExCheckValueFnc(CWnd *pWnd)
{
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnCardNoExCheckValue();
} 

static int _OnAddCustomerVisitRegisterDialogFnc(CWnd *pWnd){
	 return ((CCustomerVisitRegisterDialogEX*)pWnd)->OnAddCustomerVisitRegisterDialog();
} 
static int _OnEditCustomerVisitRegisterDialogFnc(CWnd *pWnd){
	 return ((CCustomerVisitRegisterDialogEX*)pWnd)->OnEditCustomerVisitRegisterDialog();
} 
static int _OnDeleteCustomerVisitRegisterDialogFnc(CWnd *pWnd){
	 return ((CCustomerVisitRegisterDialogEX*)pWnd)->OnDeleteCustomerVisitRegisterDialog();
} 
static long _OnSaveCustomerVisitRegisterDialogFnc(CWnd *pWnd){
	 return ((CCustomerVisitRegisterDialogEX*)pWnd)->OnSaveCustomerVisitRegisterDialog();
} 
static int _OnCancelCustomerVisitRegisterDialogFnc(CWnd *pWnd){
	 return ((CCustomerVisitRegisterDialogEX*)pWnd)->OnCancelCustomerVisitRegisterDialog();
}
static int _OnDocnoCheckValueFnc(CWnd *pWnd){
	return ((CCustomerVisitRegisterDialogEX *)pWnd)->OnDocnoCheckValue();
} 
CCustomerVisitRegisterDialogEX::CCustomerVisitRegisterDialogEX(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 365;
	m_nDlgHeight = 425;
	SetDefaultValues();
	m_nUID = 0;
}
CCustomerVisitRegisterDialogEX::~CCustomerVisitRegisterDialogEX()
{
}
void CCustomerVisitRegisterDialogEX::OnCreateComponents()
{
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 5, 105, 30);
	m_wndDepartment.Create(this,110, 5, 355, 30); 
	m_wndDocnoLabel.Create(this, _T("Số hồ sơ"), 5, 35, 105, 60);
	m_wndDocno.Create(this,110, 35, 355, 60); 
	m_wndCustomerNameLabel.Create(this, _T("Tên khách"), 5, 65, 105, 90);
	m_wndCustomerName.Create(this,110, 65, 355, 90); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 5, 95, 105, 120);
	m_wndPhone.Create(this,110, 95, 355, 120); 
	m_wndReasonLabel.Create(this, _T("Reason"), 5, 125, 105, 150);
	m_wndReason.Create(this,110, 125, 355, 150); 
	m_wndGuardianLabel.Create(this, _T("Guardian"), 5, 155, 105, 180);
	m_wndGuardian.Create(this,110, 155, 355, 180); 
	m_wndCardTypeLabel.Create(this, _T("Card Type"), 5, 185, 105, 210);
	m_wndCardType.Create(this,110, 185, 355, 210); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 6, 215, 106, 240);
	m_wndCardNo.Create(this,110, 215, 355, 240); 
	m_wndCardNoExLabel.Create(this, _T("Card No Ex"), 5, 245, 105, 270);
	m_wndCardNoEx.Create(this,110, 245, 355, 270); 
	m_wndAmountLabel.Create(this, _T("Amount"), 5, 275, 105, 300);
	m_wndAmount.Create(this,110, 275, 355, 300); 
	m_wndNoteLabel.Create(this, _T("Note"), 5, 305, 105, 330);
	m_wndNote.Create(this,110, 305, 355, 330); 
	m_wndTimeInLabel.Create(this, _T("TG đăng ký"), 5, 335, 105, 360);
	m_wndTimeIn.Create(this,110, 335, 355, 360); 
	m_wndTimeOutLabel.Create(this, _T("TG kết thúc"), 5, 365, 105, 390);
	m_wndTimeOut.Create(this,110, 365, 355, 390); 
	m_wndTermByLabel.Create(this, _T("Người trả"), 5, 395, 105, 420);
	m_wndTermBy.Create(this,110, 395, 355, 420); 
	m_wndTermDateLabel.Create(this, _T("TG trả thẻ"), 5, 425, 105, 450);
	m_wndTermDate.Create(this,110, 425, 355, 450); 
	m_wndSave.Create(this, _T("&Save"), 190, 455, 270, 480);
	m_wndClose.Create(this, _T("&Close"), 275, 455, 355, 480);
	m_wndSave.EnableWindow(FALSE);
}
void CCustomerVisitRegisterDialogEX::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(7);
	m_wndCustomerName.SetLimitText(65);
	m_wndCustomerName.SetCheckValue(true);
	m_wndPhone.SetLimitText(254);
	m_wndPhone.SetCheckValue(true);
	m_wndReason.SetLimitText(254);
	m_wndReason.SetCheckValue(true);
	m_wndGuardian.SetLimitText(65);
	m_wndGuardian.SetCheckValue(true);
	m_wndCardType.SetCheckValue(true);
	m_wndCardType.LimitText(3);
	m_wndCardNo.SetLimitText(25);
	m_wndCardNo.SetCheckValue(true);
	m_wndCardNoEx.SetLimitText(35);
	m_wndCardNoEx.SetCheckValue(true);
	m_wndAmount.SetLimitText(22);
	m_wndAmount.SetCheckValue(true);
	m_wndDocno.SetLimitText(10);
	m_wndDocno.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(false);
	m_wndTimeIn.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndTimeIn.SetCheckValue(true);
	m_wndTimeOut.SetCheckValue(false);
	m_wndTermBy.SetCheckValue(false);
	m_wndTermBy.LimitText(15);
	m_wndTermBy.SetReadOnly(true);
	//m_wndTermDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTermDate.SetCheckValue(false);
	m_wndTermDate.SetReadOnly(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndCardType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCardType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


//	m_wndTermBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
//	m_wndTermBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	

}
void CCustomerVisitRegisterDialogEX::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_wndDocno.SetEvent(WE_CHECKVALUE, _OnDocnoCheckValueFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndCustomerName.SetEvent(WE_CHANGE, _OnCustomerNameChangeFnc);
	//m_wndCustomerName.SetEvent(WE_SETFOCUS, _OnCustomerNameSetfocusFnc);
	//m_wndCustomerName.SetEvent(WE_KILLFOCUS, _OnCustomerNameKillfocusFnc);
	m_wndCustomerName.SetEvent(WE_CHECKVALUE, _OnCustomerNameCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	//m_wndGuardian.SetEvent(WE_CHANGE, _OnGuardianChangeFnc);
	//m_wndGuardian.SetEvent(WE_SETFOCUS, _OnGuardianSetfocusFnc);
	//m_wndGuardian.SetEvent(WE_KILLFOCUS, _OnGuardianKillfocusFnc);
	m_wndGuardian.SetEvent(WE_CHECKVALUE, _OnGuardianCheckValueFnc);
	m_wndCardType.SetEvent(WE_SELENDOK, _OnCardTypeSelendokFnc);
	//m_wndCardType.SetEvent(WE_SETFOCUS, _OnCardTypeSetfocusFnc);
	//m_wndCardType.SetEvent(WE_KILLFOCUS, _OnCardTypeKillfocusFnc);
	m_wndCardType.SetEvent(WE_SELCHANGE, _OnCardTypeSelectChangeFnc);
	m_wndCardType.SetEvent(WE_LOADDATA, _OnCardTypeLoadDataFnc);
	m_wndCardNoEx.SetEvent(WE_CHECKVALUE, _OnCardNoExCheckValueFnc);
	//m_wndCardType.SetEvent(WE_ADDNEW, _OnCardTypeAddNewFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndTimeIn.SetEvent(WE_CHANGE, _OnTimeInChangeFnc);
	//m_wndTimeIn.SetEvent(WE_SETFOCUS, _OnTimeInSetfocusFnc);
	//m_wndTimeIn.SetEvent(WE_KILLFOCUS, _OnTimeInKillfocusFnc);
	m_wndTimeIn.SetEvent(WE_CHECKVALUE, _OnTimeInCheckValueFnc);
	//m_wndTimeOut.SetEvent(WE_CHANGE, _OnTimeOutChangeFnc);
	//m_wndTimeOut.SetEvent(WE_SETFOCUS, _OnTimeOutSetfocusFnc);
	//m_wndTimeOut.SetEvent(WE_KILLFOCUS, _OnTimeOutKillfocusFnc);
	m_wndTimeOut.SetEvent(WE_CHECKVALUE, _OnTimeOutCheckValueFnc);
	m_wndTermBy.SetEvent(WE_SELENDOK, _OnTermBySelendokFnc);
	//m_wndTermBy.SetEvent(WE_SETFOCUS, _OnTermBySetfocusFnc);
	//m_wndTermBy.SetEvent(WE_KILLFOCUS, _OnTermByKillfocusFnc);
	m_wndTermBy.SetEvent(WE_SELCHANGE, _OnTermBySelectChangeFnc);
	m_wndTermBy.SetEvent(WE_LOADDATA, _OnTermByLoadDataFnc);
	//m_wndTermBy.SetEvent(WE_ADDNEW, _OnTermByAddNewFnc);
	//m_wndTermDate.SetEvent(WE_CHANGE, _OnTermDateChangeFnc);
	//m_wndTermDate.SetEvent(WE_SETFOCUS, _OnTermDateSetfocusFnc);
	//m_wndTermDate.SetEvent(WE_KILLFOCUS, _OnTermDateKillfocusFnc);
	m_wndTermDate.SetEvent(WE_CHECKVALUE, _OnTermDateCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT || nMode == VM_TERM)
	{
		GetDataToScreen();
	}
	if(nMode == VM_ADD)
	{
		m_hms_customer_visitTbl.SetTableName(_T("hms_customer_visit"));
		m_hms_customer_visitTbl.AddField(_T("HCV_CREATEDBY"), dfText, 15); 
		m_hms_customer_visitTbl.AddField(_T("HCV_NAME"), dfText, 65); 
		m_hms_customer_visitTbl.AddField(_T("HCV_PHONE"), dfText, 254); 
		m_hms_customer_visitTbl.AddField(_T("HCV_REASON"), dfText, 254); 
		m_hms_customer_visitTbl.AddField(_T("HCV_GUARDIAN"), dfText, 65); 
		m_hms_customer_visitTbl.AddField(_T("HCV_CARD_TYPE"), dfText, 3); 
		m_hms_customer_visitTbl.AddField(_T("HCV_CARD_NO"), dfText, 25);
		m_hms_customer_visitTbl.AddField(_T("HCV_CARD_NO_EX"), dfText, 25); 
		m_hms_customer_visitTbl.AddField(_T("HCV_AMOUNT"), dfLong); 
		m_hms_customer_visitTbl.AddField(_T("HCV_TIME_IN"), dfDateTime); 
		m_hms_customer_visitTbl.AddField(_T("HCV_DEPTID"), dfText, 7); 
		m_hms_customer_visitTbl.AddField(_T("HCV_NOTE"), dfText, 254); 
		m_hms_customer_visitTbl.AddField(_T("HCV_DOCNO"), dfLong); 

		
		
	}

	if(nMode == VM_EDIT)
	{
		m_hms_customer_visitTbl.SetTableName(_T("hms_customer_visit"));
		m_hms_customer_visitTbl.AddField(_T("HCV_UID"), dfLong); 
		m_hms_customer_visitTbl.AddField(_T("HCV_UPDATEDBY"), dfText, 15); 
		m_hms_customer_visitTbl.AddField(_T("HCV_NAME"), dfText, 65); 
		m_hms_customer_visitTbl.AddField(_T("HCV_PHONE"), dfText, 254); 
		m_hms_customer_visitTbl.AddField(_T("HCV_REASON"), dfText, 254); 
		m_hms_customer_visitTbl.AddField(_T("HCV_GUARDIAN"), dfText, 65); 
		m_hms_customer_visitTbl.AddField(_T("HCV_CARD_TYPE"), dfText, 3); 
		m_hms_customer_visitTbl.AddField(_T("HCV_CARD_NO"), dfText, 25);
		m_hms_customer_visitTbl.AddField(_T("HCV_CARD_NO_EX"), dfText, 25);
		m_hms_customer_visitTbl.AddField(_T("HCV_AMOUNT"), dfLong); 
		m_hms_customer_visitTbl.AddField(_T("HCV_TIME_IN"), dfDateTime); 
		m_hms_customer_visitTbl.AddField(_T("HCV_DEPTID"), dfText, 7); 
		m_hms_customer_visitTbl.AddField(_T("HCV_NOTE"), dfText, 254);
		m_hms_customer_visitTbl.AddField(_T("HCV_DOCNO"), dfLong);
		
	}

	SetMode(nMode);

}
void CCustomerVisitRegisterDialogEX::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndDocno.GetDlgCtrlID(), m_nDocno);
	DDX_Text(pDX, m_wndCustomerName.GetDlgCtrlID(), m_szCustomerName);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_Text(pDX, m_wndGuardian.GetDlgCtrlID(), m_szGuardian);
	DDX_TextEx(pDX, m_wndCardType.GetDlgCtrlID(), m_szCardTypeKey);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndCardNoEx.GetDlgCtrlID(), m_szCardNoEx);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndTimeIn.GetDlgCtrlID(), m_szTimeIn);
	DDX_TextEx(pDX, m_wndTimeOut.GetDlgCtrlID(), m_szTimeOut);
	DDX_Text(pDX, m_wndTermBy.GetDlgCtrlID(), m_szTermByKey);
	DDX_TextEx(pDX, m_wndTermDate.GetDlgCtrlID(), m_szTermDate);

}
void CCustomerVisitRegisterDialogEX::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("CustomerName")] =  m_szCustomerName;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("Reason")] =  m_szReason;
	m_jData[_T("Guardian")] =  m_szGuardian;
	m_jData[_T("CardType")] =  m_szCardTypeKey;
	m_jData[_T("CardNo")] =  m_szCardNo;
	m_jData[_T("CardNoEx")] =  m_szCardNoEx;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("TimeIn")] =  m_szTimeIn;
	m_jData[_T("TimeOut")] =  m_szTimeOut;
	m_jData[_T("TermBy")] =  m_szTermByKey;
	m_jData[_T("TermDate")] =  m_szTermDate;
	}
	else
	{			
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("CustomerName")].GetValue(m_szCustomerName);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("Reason")].GetValue(m_szReason);
	m_jData[_T("Guardian")].GetValue(m_szGuardian);
	m_jData[_T("CardType")].GetValue(m_szCardTypeKey);
	m_jData[_T("CardNo")].GetValue(m_szCardNo);
	m_jData[_T("CardNoEx")] =  m_szCardNoEx;
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("TimeIn")].GetValue(m_szTimeIn);
	m_jData[_T("TimeOut")].GetValue(m_szTimeOut);
	m_jData[_T("TermBy")].GetValue(m_szTermByKey);
	m_jData[_T("TermDate")].GetValue(m_szTermDate);
	}

}
void CCustomerVisitRegisterDialogEX::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	szSQL.Format(_T(" SELECT ") \
	_T("   hfe_deptid as deptid,") \
	_T("   hfe_docno as docno,  ") \
	_T("   GET_PATIENTNAME(hfe_docno) AS CustomerName,") \
	_T("   hd_telephone") \
	_T("   ||','") \
	_T("   ||hd_contacttel AS phone,") \
	_T("   hfe_cardtype as loaithe,") \
	_T("   HFE_CARDNUMBER as sothe,") \
	_T("   HFE_CARDNUMBEREX as themorong,") \
	_T("   HFE_ORDERDATE as timedangky,") \
	_T("   HFE_ENDDATE as timeketthuc,") \
	_T("   who_trathe as nguoitrathe  ") \
	_T(" FROM HMS_FEE_EXTRA") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON (hfe_docno        =hd_docno)") \
	_T(" left join sys_sel ON (hfe_cardtype=ss_code and ss_id = 'hms_cardtype_setting')") \
	_T(" WHERE HFE_FEE_EXTRA_ID=%ld"), m_nOrderid);

	rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("CustomerName"), m_szCustomerName);
		rs.GetValue(_T("phone"), m_szPhone);
		rs.GetValue(_T("HCV_REASON"), m_szReason);
		rs.GetValue(_T("HCV_GUARDIAN"), m_szGuardian);
		rs.GetValue(_T("loaithe"), m_szCardTypeKey);
		rs.GetValue(_T("sothe"), m_szCardNo);
		rs.GetValue(_T("themorong"), m_szCardNoEx);
		rs.GetValue(_T("HCV_AMOUNT"), m_nAmount);
		rs.GetValue(_T("timedangky"), m_szTimeIn);
		rs.GetValue(_T("timeketthuc"), m_szTimeOut);
		rs.GetValue(_T("HCV_TERMBY"), m_szTermByKey);
		rs.GetValue(_T("HCV_TERMDATE"), m_szTermDate);
		rs.GetValue(_T("HCV_NOTE"), m_szNote);
		rs.GetValue(_T("deptid"), m_szDepartmentKey);
		rs.GetValue(_T("docno"), m_nDocno);
	}

}
void CCustomerVisitRegisterDialogEX::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_customer_visitTbl.SetValue(_T("HCV_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_customer_visitTbl.SetValue(_T("HCV_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_customer_visitTbl.SetValue(_T("HCV_NAME"), m_szCustomerName);
	m_hms_customer_visitTbl.SetValue(_T("HCV_PHONE"), m_szPhone);
	m_hms_customer_visitTbl.SetValue(_T("HCV_REASON"), m_szReason);
	m_hms_customer_visitTbl.SetValue(_T("HCV_GUARDIAN"), m_szGuardian);
	m_hms_customer_visitTbl.SetValue(_T("HCV_CARD_TYPE"), m_szCardTypeKey);
	m_hms_customer_visitTbl.SetValue(_T("HCV_CARD_NO"), m_szCardNo);
	m_hms_customer_visitTbl.SetValue(_T("HCV_CARD_NO_EX"), m_szCardNoEx);
	m_hms_customer_visitTbl.SetValue(_T("HCV_AMOUNT"), m_nAmount);
	m_hms_customer_visitTbl.SetValue(_T("HCV_TIME_IN"), m_szTimeIn);
	m_hms_customer_visitTbl.SetValue(_T("HCV_TIME_OUT"), m_szTimeOut);
	m_hms_customer_visitTbl.SetValue(_T("HCV_TERMBY"), m_szTermByKey);
	m_hms_customer_visitTbl.SetValue(_T("HCV_TERMDATE"), m_szTermDate);
	m_hms_customer_visitTbl.SetValue(_T("HCV_NOTE"), m_szNote);
	m_hms_customer_visitTbl.SetValue(_T("HCV_DEPTID"), m_szDepartmentKey);
	m_hms_customer_visitTbl.SetValue(_T("HCV_DOCNO"), m_nDocno);

}
void CCustomerVisitRegisterDialogEX::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_nDocno=0;
	m_szCustomerName.Empty();
	m_szPhone.Empty();
	m_szReason.Empty();
	m_szGuardian.Empty();
	m_szCardTypeKey.Empty();
	m_szCardNo.Empty();
	m_szCardNoEx.Empty();
	m_nAmount=0;
	m_szNote.Empty();
	m_szTimeIn.Empty();
	m_szTimeOut.Empty();
	m_szTermByKey.Empty();
	m_szTermDate.Empty();
}
int CCustomerVisitRegisterDialogEX::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
		m_wndTimeOut.SetReadOnly(TRUE);
		m_wndTermBy.SetReadOnly(TRUE);
		m_wndTermDate.SetReadOnly(TRUE);
  		switch(nMode){
 		case VM_ADD: 
 			
			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
			m_szTimeIn = pMF->GetSysDateTime();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
 			break;
		case VM_TERM:
			m_wndTimeOut.SetReadOnly(FALSE);
			m_wndTermBy.SetReadOnly(FALSE);
			m_wndTermDate.SetReadOnly(FALSE);
			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, -1);
			m_wndTimeOut.EnableWindow(TRUE);
			m_wndTimeOut.SetCheckValue(TRUE);
			m_szTimeOut = pMF->GetSysDateTime();
			m_szTimeOut = pMF->GetSysDateTime();
			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1 -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CCustomerVisitRegisterDialogEX::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCustomerVisitRegisterDialogEX::OnDepartmentSelendok(){
	 
}
/*void CCustomerVisitRegisterDialogEX::OnDepartmentSetfocus(){
	
}*/
/*void CCustomerVisitRegisterDialogEX::OnDepartmentKillfocus(){
	
}*/
int CCustomerVisitRegisterDialogEX::OnDocnoCheckValue()
{
	return 0;
} 
long CCustomerVisitRegisterDialogEX::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_isactive='Y'"));
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey, szFilter);
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
/*void CCustomerVisitRegisterDialogEX::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCustomerVisitRegisterDialogEX::OnCustomerNameChange(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnCustomerNameSetfocus(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnCustomerNameKillfocus(){
	
} */
int CCustomerVisitRegisterDialogEX::OnCustomerNameCheckValue(){
	return 0;
}
int CCustomerVisitRegisterDialogEX::OnCardNoExCheckValue(){
	return 0;
} 

/*void CCustomerVisitRegisterDialogEX::OnPhoneChange(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnPhoneSetfocus(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnPhoneKillfocus(){
	
} */
int CCustomerVisitRegisterDialogEX::OnPhoneCheckValue(){
	return 0;
} 
/*void CCustomerVisitRegisterDialogEX::OnReasonChange(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnReasonSetfocus(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnReasonKillfocus(){
	
} */
int CCustomerVisitRegisterDialogEX::OnReasonCheckValue(){
	return 0;
} 
/*void CCustomerVisitRegisterDialogEX::OnGuardianChange(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnGuardianSetfocus(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnGuardianKillfocus(){
	
} */
int CCustomerVisitRegisterDialogEX::OnGuardianCheckValue(){
	return 0;
} 
void CCustomerVisitRegisterDialogEX::OnCardTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCustomerVisitRegisterDialogEX::OnCardTypeSelendok(){
	 
}
/*void CCustomerVisitRegisterDialogEX::OnCardTypeSetfocus(){
	
}*/
/*void CCustomerVisitRegisterDialogEX::OnCardTypeKillfocus(){
	
}*/
long CCustomerVisitRegisterDialogEX::OnCardTypeLoadData()
{
	//CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//return pMF->LoadSelectionList(&m_wndCardType, _T("HCV_CARDTYPE"), m_szCardTypeKey);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndCardType.DeleteAllItems(); 
	int nCount = 0;
	if(m_wndCardType.IsSearchKey() && !m_szCardTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szCardTypeKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as description from sys_sel where ss_id='hms_cardtype_setting' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCardType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;


	return 0;

}
/*void CCustomerVisitRegisterDialogEX::OnCardTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCustomerVisitRegisterDialogEX::OnCardNoChange(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnCardNoSetfocus(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnCardNoKillfocus(){
	
} */
int CCustomerVisitRegisterDialogEX::OnCardNoCheckValue(){
	//Can check neu the da ton tai
	return 0;
} 
/*void CCustomerVisitRegisterDialogEX::OnAmountChange(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnAmountSetfocus(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnAmountKillfocus(){
	
} */
int CCustomerVisitRegisterDialogEX::OnAmountCheckValue(){
	return 0;
} 
/*void CCustomerVisitRegisterDialogEX::OnNoteChange(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnNoteSetfocus(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnNoteKillfocus(){
	
} */
int CCustomerVisitRegisterDialogEX::OnNoteCheckValue(){
	return 0;
} 
/*void CCustomerVisitRegisterDialogEX::OnTimeInChange(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnTimeInSetfocus(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnTimeInKillfocus(){
	
} */
int CCustomerVisitRegisterDialogEX::OnTimeInCheckValue(){
	return 0;
} 
/*void CCustomerVisitRegisterDialogEX::OnTimeOutChange(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnTimeOutSetfocus(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnTimeOutKillfocus(){
	
} */
int CCustomerVisitRegisterDialogEX::OnTimeOutCheckValue(){
	return 0;
} 
void CCustomerVisitRegisterDialogEX::OnTermBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCustomerVisitRegisterDialogEX::OnTermBySelendok(){
	 
}
/*void CCustomerVisitRegisterDialogEX::OnTermBySetfocus(){
	
}*/
/*void CCustomerVisitRegisterDialogEX::OnTermByKillfocus(){
	
}*/
long CCustomerVisitRegisterDialogEX::OnTermByLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szTermByKey = pMF->GetCurrentUser();
	return pMF->LoadUserList(&m_wndTermBy, m_szTermByKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTermBy.IsSearchKey() && !m_szTermByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTermByKey
};
	m_wndTermBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTermBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCustomerVisitRegisterDialogEX::OnTermByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCustomerVisitRegisterDialogEX::OnTermDateChange(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnTermDateSetfocus(){
	
} */
/*void CCustomerVisitRegisterDialogEX::OnTermDateKillfocus(){
	
} */
int CCustomerVisitRegisterDialogEX::OnTermDateCheckValue(){
	return 0;
} 
void CCustomerVisitRegisterDialogEX::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long ret = OnSaveCustomerVisitRegisterDialog();
	if(ret > 0)
	{
		m_nUID = ret;
		CGuiDialog::OnOK();
	}
} 
void CCustomerVisitRegisterDialogEX::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CCustomerVisitRegisterDialogEX::OnAddCustomerVisitRegisterDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCustomerVisitRegisterDialogEX::OnEditCustomerVisitRegisterDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCustomerVisitRegisterDialogEX::OnDeleteCustomerVisitRegisterDialog(){
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
 		OnCancelCustomerVisitRegisterDialog();
 	}
	return 0;
}
long CCustomerVisitRegisterDialogEX::OnSaveCustomerVisitRegisterDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT && GetMode() != VM_TERM)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szExceptions;
	
 	if(GetMode() == VM_ADD){
		//szExceptions.Format(_T("hcv_updatedby,hcv_updateddate,hcv_termby,hcv_termdate,hcv_timeout,hcv_status"));
		szSQL.Format(_T("HMS_CUSTOMER_VISIT_CREATE(%s) "), m_hms_customer_visitTbl.FormatSQL(szExceptions));
 	}
 	else if(GetMode() == VM_EDIT){
		m_hms_customer_visitTbl.SetValue(_T("HCV_UID"), m_nUID);
		szSQL.Format(_T("HMS_CUSTOMER_VISIT_UPDATE(%s) "), m_hms_customer_visitTbl.FormatSQL(szExceptions));
 	}
	else if(GetMode() == VM_TERM){
		szSQL.Format(_T("HMS_CUSTOMER_VISIT_TERM(%ld,'%s', '%s') "), 
			m_nUID, m_szTimeOut, pMF->GetCurrentUser());
 	}
	
 _tprintf(_T("%s"), szSQL);
 	long ret = str2long(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCustomerVisitRegisterDialogEX::OnCancelCustomerVisitRegisterDialog(){
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
int CCustomerVisitRegisterDialogEX::OnCustomerVisitRegisterDialogListLoadData(){
	return 0;
}
