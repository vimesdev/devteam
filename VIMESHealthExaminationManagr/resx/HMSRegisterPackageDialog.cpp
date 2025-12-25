#include "HMSRegisterPackageDialog.h"
#include "MainFrm.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYobChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnYobChange();
} */
/*static void _OnYobSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnYobSetfocus();} */ 
/*static void _OnYobKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnYobKillfocus();
} */
static int _OnYobCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnYobCheckValue();
} 
/*static void _OnGenderChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnGenderChange();
} */
/*static void _OnGenderSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnGenderSetfocus();} */ 
/*static void _OnGenderKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnGenderKillfocus();
} */
static int _OnGenderCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnGenderCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnCardNumberChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnCardNumberChange();
} */
/*static void _OnCardNumberSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnCardNumberSetfocus();} */ 
/*static void _OnCardNumberKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnCardNumberKillfocus();
} */
static int _OnCardNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnCardNumberCheckValue();
} 
static void _OnCardTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterPackageDialog* )pWnd)->OnCardTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCardTypeSelendokFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnCardTypeSelendok();
}
/*static void _OnCardTypeSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnCardTypeKillfocus();
}*/
/*static void _OnCardTypeKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnCardTypeKillfocus();
}*/
static long _OnCardTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnCardTypeLoadData();
}
/*static void _OnCardTypeAddNewFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnCardTypeAddNew();
}*/
/*static void _OnBeginTimeChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnBeginTimeChange();
} */
/*static void _OnBeginTimeSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnBeginTimeSetfocus();} */ 
/*static void _OnBeginTimeKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnBeginTimeKillfocus();
} */
static int _OnBeginTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnBeginTimeCheckValue();
} 
/*static void _OnOrderQtyChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnOrderQtyChange();
} */
/*static void _OnOrderQtySetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnOrderQtySetfocus();} */ 
/*static void _OnOrderQtyKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnOrderQtyKillfocus();
} */
static int _OnOrderQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnOrderQtyCheckValue();
} 
/*static void _OnTimeOutChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnTimeOutChange();
} */
/*static void _OnTimeOutSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnTimeOutSetfocus();} */ 
/*static void _OnTimeOutKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnTimeOutKillfocus();
} */
static int _OnTimeOutCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnTimeOutCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnBedChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnBedChange();
} */
/*static void _OnBedSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnBedSetfocus();} */ 
/*static void _OnBedKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnBedKillfocus();
} */
static int _OnBedCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnBedCheckValue();
} 
/*static void _OnRelativeNameChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnRelativeNameChange();
} */
/*static void _OnRelativeNameSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnRelativeNameSetfocus();} */ 
/*static void _OnRelativeNameKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnRelativeNameKillfocus();
} */
static int _OnRelativeNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnRelativeNameCheckValue();
} 
/*static void _OnRelationChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnRelationChange();
} */
/*static void _OnRelationSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnRelationSetfocus();} */ 
/*static void _OnRelationKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnRelationKillfocus();
} */
static int _OnRelationCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnRelationCheckValue();
} 
/*static void _OnRelativeYobChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnRelativeYobChange();
} */
/*static void _OnRelativeYobSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnRelativeYobSetfocus();} */ 
/*static void _OnRelativeYobKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnRelativeYobKillfocus();
} */
static int _OnRelativeYobCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnRelativeYobCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterPackageDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSRegisterPackageDialog *pVw = (CHMSRegisterPackageDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSRegisterPackageDialog *pVw = (CHMSRegisterPackageDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSRegisterPackageDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterPackageDialog*)pWnd)->OnAddHMSRegisterPackageDialog();
} 
static int _OnEditHMSRegisterPackageDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterPackageDialog*)pWnd)->OnEditHMSRegisterPackageDialog();
} 
static int _OnDeleteHMSRegisterPackageDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterPackageDialog*)pWnd)->OnDeleteHMSRegisterPackageDialog();
} 
static int _OnSaveHMSRegisterPackageDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterPackageDialog*)pWnd)->OnSaveHMSRegisterPackageDialog();
} 
static int _OnCancelHMSRegisterPackageDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterPackageDialog*)pWnd)->OnCancelHMSRegisterPackageDialog();
} 
CHMSRegisterPackageDialog::CHMSRegisterPackageDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 485;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSRegisterPackageDialog::~CHMSRegisterPackageDialog(){
}
void CHMSRegisterPackageDialog::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 475, 120);
	m_wndRelativeInformation.Create(this, _T("Relative Information"), 4, 125, 474, 425);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 30, 110, 55);
	m_wndPatientName.Create(this,115, 30, 468, 55); 
	m_wndYobLabel.Create(this, _T("Yob"), 10, 60, 110, 85);
	m_wndYob.Create(this,115, 60, 265, 85); 
	m_wndGenderLabel.Create(this, _T("Gender"), 270, 60, 370, 85);
	m_wndGender.Create(this,375, 60, 470, 85); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 90, 110, 115);
	m_wndAddress.Create(this,115, 90, 470, 115); 
	m_wndCardNumberLabel.Create(this, _T("CardNumber"), 10, 150, 110, 175);
	m_wndCardNumber.Create(this,115, 150, 265, 175); 
	m_wndCardTypeLabel.Create(this, _T("Card Type"), 270, 150, 370, 175);
	m_wndCardType.Create(this,375, 150, 470, 175); 
	m_wndBeginTimeLabel.Create(this, _T("Begin Time"), 10, 180, 110, 205);
	m_wndBeginTime.Create(this,115, 180, 265, 205); 
	m_wndOrderQtyLabel.Create(this, _T("S? ngày d? ki?n"), 270, 180, 370, 205);
	m_wndOrderQty.Create(this,375, 180, 470, 205); 
	m_wndTimeOutLabel.Create(this, _T("Time out"), 10, 210, 110, 235);
	m_wndTimeOut.Create(this,115, 210, 265, 235); 
	m_wndQuantityLabel.Create(this, _T("S? ngày th?c t?"), 270, 210, 370, 235);
	m_wndQuantity.Create(this,375, 210, 470, 235); 
	m_wndBedLabel.Create(this, _T("Room / Bed"), 10, 240, 110, 265);
	m_wndBed.Create(this,115, 240, 470, 265); 
	m_wndRelativeNameLabel.Create(this, _T("Relative Name"), 10, 270, 110, 295);
	m_wndRelativeName.Create(this,115, 270, 470, 295); 
	m_wndRelationLabel.Create(this, _T("Relation"), 10, 300, 110, 325);
	m_wndRelation.Create(this,115, 300, 266, 325); 
	m_wndRelativeYobLabel.Create(this, _T("RelativeYob"), 271, 300, 371, 325);
	m_wndRelativeYob.Create(this,376, 300, 470, 325); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 330, 110, 355);
	m_wndNote.Create(this,115, 330, 470, 420); 
	m_wndApply.Create(this, _T("&Apply"), 300, 430, 385, 455);
	m_wndClose.Create(this, _T("&Close"), 390, 430, 475, 455);

}
void CHMSRegisterPackageDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndYob.SetLimitText(1024);
	m_wndYob.SetCheckValue(true);
	m_wndGender.SetLimitText(1024);
	m_wndGender.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndCardNumber.SetLimitText(1024);
	m_wndCardNumber.SetCheckValue(true);
	m_wndCardType.SetCheckValue(true);
	m_wndCardType.LimitText(35);
	m_wndBeginTime.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndBeginTime.SetCheckValue(true);
	m_wndOrderQty.SetLimitText(1024);
	m_wndOrderQty.SetCheckValue(true);
	m_wndTimeOut.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTimeOut.SetCheckValue(true);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndBed.SetLimitText(1024);
	m_wndBed.SetCheckValue(true);
	m_wndRelativeName.SetLimitText(1024);
	m_wndRelativeName.SetCheckValue(true);
	m_wndRelation.SetLimitText(1024);
	m_wndRelation.SetCheckValue(true);
	m_wndRelativeYob.SetLimitText(1024);
	m_wndRelativeYob.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);


	m_wndCardType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCardType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSRegisterPackageDialog::OnSetWindowEvents(){
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
	//m_wndCardNumber.SetEvent(WE_CHANGE, _OnCardNumberChangeFnc);
	//m_wndCardNumber.SetEvent(WE_SETFOCUS, _OnCardNumberSetfocusFnc);
	//m_wndCardNumber.SetEvent(WE_KILLFOCUS, _OnCardNumberKillfocusFnc);
	m_wndCardNumber.SetEvent(WE_CHECKVALUE, _OnCardNumberCheckValueFnc);
	m_wndCardType.SetEvent(WE_SELENDOK, _OnCardTypeSelendokFnc);
	//m_wndCardType.SetEvent(WE_SETFOCUS, _OnCardTypeSetfocusFnc);
	//m_wndCardType.SetEvent(WE_KILLFOCUS, _OnCardTypeKillfocusFnc);
	m_wndCardType.SetEvent(WE_SELCHANGE, _OnCardTypeSelectChangeFnc);
	m_wndCardType.SetEvent(WE_LOADDATA, _OnCardTypeLoadDataFnc);
	//m_wndCardType.SetEvent(WE_ADDNEW, _OnCardTypeAddNewFnc);
	//m_wndBeginTime.SetEvent(WE_CHANGE, _OnBeginTimeChangeFnc);
	//m_wndBeginTime.SetEvent(WE_SETFOCUS, _OnBeginTimeSetfocusFnc);
	//m_wndBeginTime.SetEvent(WE_KILLFOCUS, _OnBeginTimeKillfocusFnc);
	m_wndBeginTime.SetEvent(WE_CHECKVALUE, _OnBeginTimeCheckValueFnc);
	//m_wndOrderQty.SetEvent(WE_CHANGE, _OnOrderQtyChangeFnc);
	//m_wndOrderQty.SetEvent(WE_SETFOCUS, _OnOrderQtySetfocusFnc);
	//m_wndOrderQty.SetEvent(WE_KILLFOCUS, _OnOrderQtyKillfocusFnc);
	m_wndOrderQty.SetEvent(WE_CHECKVALUE, _OnOrderQtyCheckValueFnc);
	//m_wndTimeOut.SetEvent(WE_CHANGE, _OnTimeOutChangeFnc);
	//m_wndTimeOut.SetEvent(WE_SETFOCUS, _OnTimeOutSetfocusFnc);
	//m_wndTimeOut.SetEvent(WE_KILLFOCUS, _OnTimeOutKillfocusFnc);
	m_wndTimeOut.SetEvent(WE_CHECKVALUE, _OnTimeOutCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndBed.SetEvent(WE_CHANGE, _OnBedChangeFnc);
	//m_wndBed.SetEvent(WE_SETFOCUS, _OnBedSetfocusFnc);
	//m_wndBed.SetEvent(WE_KILLFOCUS, _OnBedKillfocusFnc);
	m_wndBed.SetEvent(WE_CHECKVALUE, _OnBedCheckValueFnc);
	//m_wndRelativeName.SetEvent(WE_CHANGE, _OnRelativeNameChangeFnc);
	//m_wndRelativeName.SetEvent(WE_SETFOCUS, _OnRelativeNameSetfocusFnc);
	//m_wndRelativeName.SetEvent(WE_KILLFOCUS, _OnRelativeNameKillfocusFnc);
	m_wndRelativeName.SetEvent(WE_CHECKVALUE, _OnRelativeNameCheckValueFnc);
	//m_wndRelation.SetEvent(WE_CHANGE, _OnRelationChangeFnc);
	//m_wndRelation.SetEvent(WE_SETFOCUS, _OnRelationSetfocusFnc);
	//m_wndRelation.SetEvent(WE_KILLFOCUS, _OnRelationKillfocusFnc);
	m_wndRelation.SetEvent(WE_CHECKVALUE, _OnRelationCheckValueFnc);
	//m_wndRelativeYob.SetEvent(WE_CHANGE, _OnRelativeYobChangeFnc);
	//m_wndRelativeYob.SetEvent(WE_SETFOCUS, _OnRelativeYobSetfocusFnc);
	//m_wndRelativeYob.SetEvent(WE_KILLFOCUS, _OnRelativeYobKillfocusFnc);
	m_wndRelativeYob.SetEvent(WE_CHECKVALUE, _OnRelativeYobCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSRegisterPackageDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYob.GetDlgCtrlID(), m_szYob);
	DDX_Text(pDX, m_wndGender.GetDlgCtrlID(), m_szGender);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndCardNumber.GetDlgCtrlID(), m_szCardNumber);
	DDX_TextEx(pDX, m_wndCardType.GetDlgCtrlID(), m_szCardTypeKey);
	DDX_TextEx(pDX, m_wndBeginTime.GetDlgCtrlID(), m_szBeginTime);
	DDX_Text(pDX, m_wndOrderQty.GetDlgCtrlID(), m_nOrderQty);
	DDX_TextEx(pDX, m_wndTimeOut.GetDlgCtrlID(), m_szTimeOut);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndBed.GetDlgCtrlID(), m_szBed);
	DDX_Text(pDX, m_wndRelativeName.GetDlgCtrlID(), m_szRelativeName);
	DDX_Text(pDX, m_wndRelation.GetDlgCtrlID(), m_szRelation);
	DDX_Text(pDX, m_wndRelativeYob.GetDlgCtrlID(), m_szRelativeYob);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSRegisterPackageDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Yob")] =  m_szYob;
	m_jData[_T("Gender")] =  m_szGender;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("CardNumber")] =  m_szCardNumber;
	m_jData[_T("CardType")] =  m_szCardTypeKey;
	m_jData[_T("BeginTime")] =  m_szBeginTime;
	m_jData[_T("OrderQty")] =  m_nOrderQty;
	m_jData[_T("TimeOut")] =  m_szTimeOut;
	m_jData[_T("Quantity")] =  m_nQuantity;
	m_jData[_T("Bed")] =  m_szBed;
	m_jData[_T("RelativeName")] =  m_szRelativeName;
	m_jData[_T("Relation")] =  m_szRelation;
	m_jData[_T("RelativeYob")] =  m_szRelativeYob;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Yob")].GetValue(m_szYob);
	m_jData[_T("Gender")].GetValue(m_szGender);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("CardNumber")].GetValue(m_szCardNumber);
	m_jData[_T("CardType")].GetValue(m_szCardTypeKey);
	m_jData[_T("BeginTime")].GetValue(m_szBeginTime);
	m_jData[_T("OrderQty")].GetValue(m_nOrderQty);
	m_jData[_T("TimeOut")].GetValue(m_szTimeOut);
	m_jData[_T("Quantity")].GetValue(m_nQuantity);
	m_jData[_T("Bed")].GetValue(m_szBed);
	m_jData[_T("RelativeName")].GetValue(m_szRelativeName);
	m_jData[_T("Relation")].GetValue(m_szRelation);
	m_jData[_T("RelativeYob")].GetValue(m_szRelativeYob);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSRegisterPackageDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSRegisterPackageDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSRegisterPackageDialog::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szGender.Empty();
	m_szAddress.Empty();
	m_szCardNumber.Empty();
	m_szCardTypeKey.Empty();
	m_szBeginTime.Empty();
	m_nOrderQty=0;
	m_szTimeOut.Empty();
	m_nQuantity=0;
	m_szBed.Empty();
	m_szRelativeName.Empty();
	m_szRelation.Empty();
	m_szRelativeYob.Empty();
	m_szNote.Empty();

}
int CHMSRegisterPackageDialog::SetMode(int nMode){
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
/*void CHMSRegisterPackageDialog::OnPatientNameChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnPatientNameKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnYobChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnYobSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnYobKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnYobCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnGenderChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnGenderSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnGenderKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnGenderCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnAddressChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnAddressSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnAddressKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnCardNumberChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnCardNumberSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnCardNumberKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnCardNumberCheckValue(){
	return 0;
} 
void CHMSRegisterPackageDialog::OnCardTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterPackageDialog::OnCardTypeSelendok(){
	 
}
/*void CHMSRegisterPackageDialog::OnCardTypeSetfocus(){
	
}*/
/*void CHMSRegisterPackageDialog::OnCardTypeKillfocus(){
	
}*/
long CHMSRegisterPackageDialog::OnCardTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCardType.IsSearchKey() && !m_szCardTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCardTypeKey
};
	m_wndCardType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCardType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterPackageDialog::OnCardTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegisterPackageDialog::OnBeginTimeChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnBeginTimeSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnBeginTimeKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnBeginTimeCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnOrderQtyChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnOrderQtySetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnOrderQtyKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnOrderQtyCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnTimeOutChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnTimeOutSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnTimeOutKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnTimeOutCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnQuantityChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnQuantityKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnQuantityCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnBedChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnBedSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnBedKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnBedCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnRelativeNameChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnRelativeNameSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnRelativeNameKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnRelativeNameCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnRelationChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnRelationSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnRelationKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnRelationCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnRelativeYobChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnRelativeYobSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnRelativeYobKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnRelativeYobCheckValue(){
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnNoteChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnNoteSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnNoteKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSRegisterPackageDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterPackageDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSRegisterPackageDialog::OnAddHMSRegisterPackageDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSRegisterPackageDialog::OnEditHMSRegisterPackageDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSRegisterPackageDialog::OnDeleteHMSRegisterPackageDialog(){
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
 		OnCancelHMSRegisterPackageDialog();
 	}
	return 0;
}
int CHMSRegisterPackageDialog::OnSaveHMSRegisterPackageDialog(){
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
 		//OnHMSRegisterPackageDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSRegisterPackageDialog::OnCancelHMSRegisterPackageDialog(){
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
int CHMSRegisterPackageDialog::OnHMSRegisterPackageDialogListLoadData(){
	return 0;
}
