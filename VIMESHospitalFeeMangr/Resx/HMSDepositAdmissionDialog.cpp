#include "HMSDepositAdmissionDialog.h"
#include "MainFrm.h"
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
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog *)pWnd)->OnDescriptionCheckValue();
} 
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
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepositAdmissionDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDepositAdmissionDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDepositAdmissionDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDepositAdmissionDialog*)pWnd)->OnListDeleteItem();
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
	pVw->OnRefundSelect();
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
CHMSDepositAdmissionDialog::CHMSDepositAdmissionDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSDepositAdmissionDialog::~CHMSDepositAdmissionDialog(){
}
void CHMSDepositAdmissionDialog::OnCreateComponents(){
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
	m_wndDescription.Create(this,135, 270, 595, 295); 
	m_wndReturnDateLabel.Create(this, _T("Return Date"), 10, 305, 130, 330);
	m_wndReturnDate.Create(this,135, 305, 235, 330); 
	m_wndList.Create(this,10, 335, 600, 480); 
	m_wndSave.Create(this, _T("&Save"), 415, 305, 505, 330);
	m_wndClose.Create(this, _T("&Close"), 510, 305, 600, 330);
	m_wndRefund.Create(this, _T("&Refund"), 375, 305, 375, 330);

}
void CHMSDepositAdmissionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(1024);
	m_wndRecordNo.SetCheckValue(true);
	m_wndAdmitDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAdmitDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndYOB.SetLimitText(1024);
	m_wndYOB.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndCardNo.SetLimitText(1024);
	m_wndCardNo.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(1024);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(1024);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndReceiptDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndReceiptDate.SetCheckValue(true);
	m_wndAmount.SetLimitText(1024);
	m_wndAmount.SetCheckValue(true);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndReturnDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndReturnDate.SetCheckValue(true);









}
void CHMSDepositAdmissionDialog::OnSetWindowEvents(){
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
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndRefund.SetEvent(WE_CLICK, _OnRefundSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDepositAdmissionDialog::OnDoDataExchange(CDataExchange* pDX){
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
void CHMSDepositAdmissionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDepositAdmissionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDepositAdmissionDialog::SetDefaultValues(){

	m_nDocumentNo=0;
	m_szRecordNo.Empty();
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

}
int CHMSDepositAdmissionDialog::SetMode(int nMode){
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
/*void CHMSDepositAdmissionDialog::OnDocumentNoChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSDepositAdmissionDialog::OnRecordNoChange(){
	
} */
/*void CHMSDepositAdmissionDialog::OnRecordNoSetfocus(){
	
} */
/*void CHMSDepositAdmissionDialog::OnRecordNoKillfocus(){
	
} */
int CHMSDepositAdmissionDialog::OnRecordNoCheckValue(){
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
	 
}
/*void CHMSDepositAdmissionDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSDepositAdmissionDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSDepositAdmissionDialog::OnDepartmentLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDepositAdmissionDialog::OnObjectAddNew(){
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
void CHMSDepositAdmissionDialog::OnListDblClick(){
	
} 
void CHMSDepositAdmissionDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDepositAdmissionDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDepositAdmissionDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSDepositAdmissionDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepositAdmissionDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepositAdmissionDialog::OnRefundSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
int CHMSDepositAdmissionDialog::OnSaveHMSDepositAdmissionDialog(){
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
 		//OnHMSDepositAdmissionDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
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
