#include "WeelChairRegisterDialog.h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CWeelChairRegisterDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnCustomerNameChangeFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnCustomerNameChange();
} */
/*static void _OnCustomerNameSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnCustomerNameSetfocus();} */ 
/*static void _OnCustomerNameKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnCustomerNameKillfocus();
} */
static int _OnCustomerNameCheckValueFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnCustomerNameCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnReasonCheckValue();
} 
/*static void _OnGuardianChangeFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnGuardianChange();
} */
/*static void _OnGuardianSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnGuardianSetfocus();} */ 
/*static void _OnGuardianKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnGuardianKillfocus();
} */
static int _OnGuardianCheckValueFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnGuardianCheckValue();
} 
static void _OnCardTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CWeelChairRegisterDialog* )pWnd)->OnCardTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCardTypeSelendokFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnCardTypeSelendok();
}
/*static void _OnCardTypeSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnCardTypeKillfocus();
}*/
/*static void _OnCardTypeKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnCardTypeKillfocus();
}*/
static long _OnCardTypeLoadDataFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnCardTypeLoadData();
}
/*static void _OnCardTypeAddNewFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnCardTypeAddNew();
}*/
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd)
{
	return ((CWeelChairRegisterDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnTimeInChangeFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTimeInChange();
} */
/*static void _OnTimeInSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTimeInSetfocus();} */ 
/*static void _OnTimeInKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTimeInKillfocus();
} */
static int _OnTimeInCheckValueFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnTimeInCheckValue();
} 
/*static void _OnTimeOutChangeFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTimeOutChange();
} */
/*static void _OnTimeOutSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTimeOutSetfocus();} */ 
/*static void _OnTimeOutKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTimeOutKillfocus();
} */
static int _OnTimeOutCheckValueFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnTimeOutCheckValue();
} 
static void _OnTermBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CWeelChairRegisterDialog* )pWnd)->OnTermBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTermBySelendokFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTermBySelendok();
}
/*static void _OnTermBySetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTermByKillfocus();
}*/
/*static void _OnTermByKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTermByKillfocus();
}*/
static long _OnTermByLoadDataFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnTermByLoadData();
}
/*static void _OnTermByAddNewFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTermByAddNew();
}*/
/*static void _OnTermDateChangeFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTermDateChange();
} */
/*static void _OnTermDateSetfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTermDateSetfocus();} */ 
/*static void _OnTermDateKillfocusFnc(CWnd *pWnd){
	((CWeelChairRegisterDialog *)pWnd)->OnTermDateKillfocus();
} */
static int _OnTermDateCheckValueFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnTermDateCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CWeelChairRegisterDialog *pVw = (CWeelChairRegisterDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CWeelChairRegisterDialog *pVw = (CWeelChairRegisterDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnCardNoExCheckValueFnc(CWnd *pWnd)
{
	return ((CWeelChairRegisterDialog *)pWnd)->OnCardNoExCheckValue();
} 

static int _OnAddCustomerVisitRegisterDialogFnc(CWnd *pWnd){
	 return ((CWeelChairRegisterDialog*)pWnd)->OnAddCustomerVisitRegisterDialog();
} 
static int _OnEditCustomerVisitRegisterDialogFnc(CWnd *pWnd){
	 return ((CWeelChairRegisterDialog*)pWnd)->OnEditCustomerVisitRegisterDialog();
} 
static int _OnDeleteCustomerVisitRegisterDialogFnc(CWnd *pWnd){
	 return ((CWeelChairRegisterDialog*)pWnd)->OnDeleteCustomerVisitRegisterDialog();
} 
static long _OnSaveCustomerVisitRegisterDialogFnc(CWnd *pWnd){
	 return ((CWeelChairRegisterDialog*)pWnd)->OnSaveCustomerVisitRegisterDialog();
} 
static int _OnCancelCustomerVisitRegisterDialogFnc(CWnd *pWnd){
	 return ((CWeelChairRegisterDialog*)pWnd)->OnCancelCustomerVisitRegisterDialog();
}


static long _OnWeelChairTypeLoadDataFnc(CWnd *pWnd)
{
	return ((CWeelChairRegisterDialog *)pWnd)->OnWeelChairTypeLoadData();
}

static int _OnWeelChairCheckValueFnc(CWnd *pWnd)
{
	return ((CWeelChairRegisterDialog *)pWnd)->OnWeelChairCheckValue();
}

static int _OnRoomnameCheckValueFnc(CWnd *pWnd){
	return ((CWeelChairRegisterDialog *)pWnd)->OnRoomnameCheckValue();
}


CWeelChairRegisterDialog::CWeelChairRegisterDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent)
{
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 365;
	m_nDlgHeight = 425;
	SetDefaultValues();
	m_nUID = 0;
}
CWeelChairRegisterDialog::~CWeelChairRegisterDialog()
{
}
void CWeelChairRegisterDialog::OnCreateComponents()
{
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 5, 105, 30);
	m_wndDepartment.Create(this,110, 5, 355, 30); 
	m_wndRoomnameLabel.Create(this, _T("Phòng khám"), 5, 35, 105, 60);
	m_wndRoomname.Create(this,110, 35, 355, 60); 
	m_wndCustomerNameLabel.Create(this, _T("Tên khách"), 5, 65, 105, 90);
	m_wndCustomerName.Create(this,110, 65, 355, 90); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 5, 95, 105, 120);
	m_wndPhone.Create(this,110, 95, 355, 120); 
	m_wndReasonLabel.Create(this, _T("Reason"), 5, 125, 105, 150);
	m_wndReason.Create(this,110, 125, 355, 150); 
	m_wndGuardianLabel.Create(this, _T("Guardian"), 5, 155, 105, 180);
	m_wndGuardian.Create(this,110, 155, 355, 180);	
	m_wndWeelChairTypeLabel.Create(this, _T("Loại xe"), 5, 185, 105, 210);
	m_wndWeelChairType.Create(this,110, 185, 355, 210); 
	m_wndWeelChairLabel.Create(this, _T("Số xe"), 6, 215, 106, 240);
	m_wndWeelChair.Create(this,110, 215, 355, 240);	
	m_wndAmountLabel.Create(this, _T("Amount"), 5, 245, 105, 270);
	m_wndAmount.Create(this,110, 245, 355, 270); 
	m_wndNoteLabel.Create(this, _T("Note"), 5, 275, 105, 300);
	m_wndNote.Create(this,110, 275, 355, 300); 
	m_wndTimeInLabel.Create(this, _T("TG cấp thẻ"), 5, 305, 105, 330);
	m_wndTimeIn.Create(this,110, 305, 355, 330); 
	m_wndTimeOutLabel.Create(this, _T("TG trả thẻ"), 5, 335, 105, 360);
	m_wndTimeOut.Create(this,110, 335, 355, 360); 
	m_wndTermByLabel.Create(this, _T("Người trả"), 5, 365, 105, 390);
	m_wndTermBy.Create(this,110, 365, 355, 390); 
	m_wndTermDateLabel.Create(this, _T("TG trả thẻ"), 5, 395, 105, 420);
	m_wndTermDate.Create(this,110, 395, 355, 420); 
	m_wndSave.Create(this, _T("&Save"), 190, 425, 270, 450);
	m_wndClose.Create(this, _T("&Close"), 275, 425, 355, 450);
}
void CWeelChairRegisterDialog::OnInitializeComponents(){
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

	m_wndAmount.SetLimitText(22);
	m_wndAmount.SetCheckValue(true);
	
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
	m_wndWeelChair.SetCheckValue(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Alias"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);


//	m_wndTermBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
//	m_wndTermBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);	

}
void CWeelChairRegisterDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	
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
	
	//m_wndCardType.SetEvent(WE_SETFOCUS, _OnCardTypeSetfocusFnc);
	//m_wndCardType.SetEvent(WE_KILLFOCUS, _OnCardTypeKillfocusFnc);
	
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
	
	m_wndWeelChairType.SetEvent(WE_LOADDATA, _OnWeelChairTypeLoadDataFnc);
	m_wndWeelChair.SetEvent(WE_CHECKVALUE, _OnWeelChairCheckValueFnc);
	m_wndRoomname.SetEvent(WE_CHECKVALUE, _OnRoomnameCheckValueFnc);

	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT || nMode == VM_TERM)
	{
		GetDataToScreen();
	}

	if(nMode == VM_ADD)
	{
		m_hms_weelchair_manageTbl.SetTableName(_T("hms_weelchair_manage"));

		m_hms_weelchair_manageTbl.AddField(_T("HWC_CREATEDBY"), dfText, 15); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_NAME"), dfText, 65); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_PHONE"), dfText, 254); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_REASON"), dfText, 254); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_GUARDIAN"), dfText, 65);
		m_hms_weelchair_manageTbl.AddField(_T("HWC_WEELCHAIR_NO"), dfText, 25);
		m_hms_weelchair_manageTbl.AddField(_T("HWC_AMOUNT"), dfLong); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_TIME_IN"), dfDateTime); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_DEPTID"), dfText, 7); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_ROOMNAME"), dfText, 254);
		m_hms_weelchair_manageTbl.AddField(_T("HWC_NOTE"), dfText, 254);	
		
	}

	if(nMode == VM_EDIT)
	{
		m_hms_weelchair_manageTbl.SetTableName(_T("hms_weelchair_manage"));
		m_hms_weelchair_manageTbl.AddField(_T("HWC_UID"), dfLong); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_UPDATEDBY"), dfText, 15); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_NAME"), dfText, 65); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_PHONE"), dfText, 254); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_REASON"), dfText, 254); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_GUARDIAN"), dfText, 65);
		m_hms_weelchair_manageTbl.AddField(_T("HWC_WEELCHAIR_NO"), dfText, 25);
		m_hms_weelchair_manageTbl.AddField(_T("HWC_AMOUNT"), dfLong); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_TIME_IN"), dfDateTime); 
		m_hms_weelchair_manageTbl.AddField(_T("HWC_DEPTID"), dfText, 7);
		m_hms_weelchair_manageTbl.AddField(_T("HWC_ROOMNAME"), dfText, 254);
		m_hms_weelchair_manageTbl.AddField(_T("HWC_NOTE"), dfText, 254);
		
	}

	SetMode(nMode);

}
void CWeelChairRegisterDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	
	DDX_Text(pDX, m_wndCustomerName.GetDlgCtrlID(), m_szCustomerName);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_Text(pDX, m_wndGuardian.GetDlgCtrlID(), m_szGuardian);	
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndTimeIn.GetDlgCtrlID(), m_szTimeIn);
	DDX_TextEx(pDX, m_wndTimeOut.GetDlgCtrlID(), m_szTimeOut);
	DDX_Text(pDX, m_wndTermBy.GetDlgCtrlID(), m_szTermByKey);
	DDX_TextEx(pDX, m_wndTermDate.GetDlgCtrlID(), m_szTermDate);
	DDX_Text(pDX, m_wndRoomname.GetDlgCtrlID(), m_szRoomname);
	DDX_TextEx(pDX, m_wndWeelChairType.GetDlgCtrlID(), m_szWeelChairTypeKey);
	DDX_Text(pDX, m_wndWeelChair.GetDlgCtrlID(), m_szWeelChairNo);

}
void CWeelChairRegisterDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("CustomerName")] =  m_szCustomerName;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("Reason")] =  m_szReason;
	m_jData[_T("Guardian")] =  m_szGuardian;
	
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
	
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("TimeIn")].GetValue(m_szTimeIn);
	m_jData[_T("TimeOut")].GetValue(m_szTimeOut);
	m_jData[_T("TermBy")].GetValue(m_szTermByKey);
	m_jData[_T("TermDate")].GetValue(m_szTermDate);
	}

}
void CWeelChairRegisterDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_nUID <= 0)
		return;

	szSQL.Format(_T("SELECT * FROM hms_weelchair_manage WHERE HWC_uid = %ld "), m_nUID);
	rs.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HWC_NAME"), m_szCustomerName);
		rs.GetValue(_T("HWC_PHONE"), m_szPhone);
		rs.GetValue(_T("HWC_REASON"), m_szReason);
		rs.GetValue(_T("HWC_GUARDIAN"), m_szGuardian);
		rs.GetValue(_T("HWC_WEELCHAIR_NO"), m_szWeelChairNo);
		rs.GetValue(_T("HWC_AMOUNT"), m_nAmount);
		rs.GetValue(_T("HWC_TIME_IN"), m_szTimeIn);
		rs.GetValue(_T("HWC_TIME_OUT"), m_szTimeOut);
		rs.GetValue(_T("HWC_TERMBY"), m_szTermByKey);
		rs.GetValue(_T("HWC_TERMDATE"), m_szTermDate);
		rs.GetValue(_T("HWC_NOTE"), m_szNote);
		rs.GetValue(_T("HWC_DEPTID"), m_szDepartmentKey);
		rs.GetValue(_T("HWC_ROOMNAME"), m_szRoomname);
	}

}
void CWeelChairRegisterDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_NAME"), m_szCustomerName);
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_PHONE"), m_szPhone);
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_REASON"), m_szReason);
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_GUARDIAN"), m_szGuardian);
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_WEELCHAIR_NO"), m_szWeelChairNo);
	
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_AMOUNT"), m_nAmount);
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_TIME_IN"), m_szTimeIn);
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_TIME_OUT"), m_szTimeOut);
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_TERMBY"), m_szTermByKey);
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_TERMDATE"), m_szTermDate);
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_NOTE"), m_szNote);
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_DEPTID"), m_szDepartmentKey);
	m_hms_weelchair_manageTbl.SetValue(_T("HWC_ROOMNAME"), m_szRoomname);	
}
void CWeelChairRegisterDialog::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szRoomname.Empty();
	m_nDocno=0;
	m_szCustomerName.Empty();
	m_szPhone.Empty();
	m_szReason.Empty();
	m_szGuardian.Empty();
	
	m_szWeelChairTypeKey.Empty();
	m_szWeelChairNo.Empty();

	m_nAmount=0;
	m_szNote.Empty();
	m_szTimeIn.Empty();
	m_szTimeOut.Empty();
	m_szTermByKey.Empty();
	m_szTermDate.Empty();
}
int CWeelChairRegisterDialog::SetMode(int nMode){
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
		m_wndWeelChairType.EnableWindow(false);	

 		UpdateData(FALSE);
 		return nOldMode;
}
void CWeelChairRegisterDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CWeelChairRegisterDialog::OnDepartmentSelendok(){
	 
}
/*void CWeelChairRegisterDialog::OnDepartmentSetfocus(){
	
}*/
/*void CWeelChairRegisterDialog::OnDepartmentKillfocus(){
	
}*/

long CWeelChairRegisterDialog::OnDepartmentLoadData()
{
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_isactive='Y'"));
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey, szFilter);
	return 0;
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

int CWeelChairRegisterDialog::OnRoomnameCheckValue(){
	return 0;
}
/*void CWeelChairRegisterDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CWeelChairRegisterDialog::OnCustomerNameChange(){
	
} */
/*void CWeelChairRegisterDialog::OnCustomerNameSetfocus(){
	
} */
/*void CWeelChairRegisterDialog::OnCustomerNameKillfocus(){
	
} */
int CWeelChairRegisterDialog::OnCustomerNameCheckValue(){
	return 0;
}

long CWeelChairRegisterDialog::OnWeelChairTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
}

int CWeelChairRegisterDialog::OnPhoneCheckValue()
{
	return 0;
}

int CWeelChairRegisterDialog::OnWeelChairCheckValue()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szWeelChairNo.Trim();

	if(m_szWeelChairNo.IsEmpty())
		return -1;
	
	return 0;
}
/*void CWeelChairRegisterDialog::OnReasonChange(){
	
} */
/*void CWeelChairRegisterDialog::OnReasonSetfocus(){
	
} */
/*void CWeelChairRegisterDialog::OnReasonKillfocus(){
	
} */
int CWeelChairRegisterDialog::OnReasonCheckValue(){
	return 0;
} 
/*void CWeelChairRegisterDialog::OnGuardianChange(){
	
} */
/*void CWeelChairRegisterDialog::OnGuardianSetfocus(){
	
} */
/*void CWeelChairRegisterDialog::OnGuardianKillfocus(){
	
} */
int CWeelChairRegisterDialog::OnGuardianCheckValue(){
	return 0;
} 


/*void CWeelChairRegisterDialog::OnCardTypeSetfocus(){
	
}*/
/*void CWeelChairRegisterDialog::OnCardTypeKillfocus(){
	
}*/

/*void CWeelChairRegisterDialog::OnCardTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CWeelChairRegisterDialog::OnCardNoChange(){
	
} */
/*void CWeelChairRegisterDialog::OnCardNoSetfocus(){
	
} */
/*void CWeelChairRegisterDialog::OnCardNoKillfocus(){
	
} */

/*void CWeelChairRegisterDialog::OnAmountChange(){
	
} */
/*void CWeelChairRegisterDialog::OnAmountSetfocus(){
	
} */
/*void CWeelChairRegisterDialog::OnAmountKillfocus(){
	
} */
int CWeelChairRegisterDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CWeelChairRegisterDialog::OnNoteChange(){
	
} */
/*void CWeelChairRegisterDialog::OnNoteSetfocus(){
	
} */
/*void CWeelChairRegisterDialog::OnNoteKillfocus(){
	
} */
int CWeelChairRegisterDialog::OnNoteCheckValue(){
	return 0;
} 
/*void CWeelChairRegisterDialog::OnTimeInChange(){
	
} */
/*void CWeelChairRegisterDialog::OnTimeInSetfocus(){
	
} */
/*void CWeelChairRegisterDialog::OnTimeInKillfocus(){
	
} */
int CWeelChairRegisterDialog::OnTimeInCheckValue(){
	return 0;
} 
/*void CWeelChairRegisterDialog::OnTimeOutChange(){
	
} */
/*void CWeelChairRegisterDialog::OnTimeOutSetfocus(){
	
} */
/*void CWeelChairRegisterDialog::OnTimeOutKillfocus(){
	
} */
int CWeelChairRegisterDialog::OnTimeOutCheckValue(){
	return 0;
} 
void CWeelChairRegisterDialog::OnTermBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CWeelChairRegisterDialog::OnTermBySelendok(){
	 
}
/*void CWeelChairRegisterDialog::OnTermBySetfocus(){
	
}*/
/*void CWeelChairRegisterDialog::OnTermByKillfocus(){
	
}*/
long CWeelChairRegisterDialog::OnTermByLoadData()
{
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
/*void CWeelChairRegisterDialog::OnTermByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CWeelChairRegisterDialog::OnTermDateChange(){
	
} */
/*void CWeelChairRegisterDialog::OnTermDateSetfocus(){
	
} */
/*void CWeelChairRegisterDialog::OnTermDateKillfocus(){
	
} */
int CWeelChairRegisterDialog::OnTermDateCheckValue()
{
	return 0;
} 
void CWeelChairRegisterDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long ret = OnSaveCustomerVisitRegisterDialog();
	if(ret > 0)
	{
		m_nUID = ret;
		CGuiDialog::OnOK();
	}
} 
void CWeelChairRegisterDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CWeelChairRegisterDialog::OnAddCustomerVisitRegisterDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CWeelChairRegisterDialog::OnEditCustomerVisitRegisterDialog()
{
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CWeelChairRegisterDialog::OnDeleteCustomerVisitRegisterDialog(){
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
long CWeelChairRegisterDialog::OnSaveCustomerVisitRegisterDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT && GetMode() != VM_TERM)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szExceptions;
	
 	if(GetMode() == VM_ADD){
		//szExceptions.Format(_T("HWC_updatedby,HWC_updateddate,HWC_termby,HWC_termdate,HWC_timeout,HWC_status"));
		szSQL.Format(_T("HMS_WEELCHAIR_ORDER_CREATE(%s) "), m_hms_weelchair_manageTbl.FormatSQL(szExceptions));
 	}
 	else if(GetMode() == VM_EDIT){
		m_hms_weelchair_manageTbl.SetValue(_T("HWC_UID"), m_nUID);
		szSQL.Format(_T("HMS_WEELCHAIR_ORDER_UPDATE(%s) "), m_hms_weelchair_manageTbl.FormatSQL(szExceptions));
 	}
	else if(GetMode() == VM_TERM){
		szSQL.Format(_T("HMS_WEELCHAIR_ORDER_TERM(%ld,'%s', '%s') "), 
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
int CWeelChairRegisterDialog::OnCancelCustomerVisitRegisterDialog()
{
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
int CWeelChairRegisterDialog::OnCustomerVisitRegisterDialogListLoadData()
{
	return 0;
}
