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
static int _OnNoteEXCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnNoteEXCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSRegisterPackageDialog *pVw = (CHMSRegisterPackageDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSRegisterPackageDialog *pVw = (CHMSRegisterPackageDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnCardNumberExCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterPackageDialog *)pWnd)->OnCardNumberExCheckValue();
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
CHMSRegisterPackageDialog::CHMSRegisterPackageDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szGender.Empty();
	m_szAddress.Empty();
}
CHMSRegisterPackageDialog::~CHMSRegisterPackageDialog()
{
}
void CHMSRegisterPackageDialog::OnCreateComponents()
{
	/*m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 475, 120);
	m_wndRelativeInformation.Create(this, _T("Relative Information"), 4, 125, 474, 455);
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
	m_wndCardNumberExLabel.Create(this, _T("CardNumberEx"), 10, 180, 110, 205);
	m_wndCardNumberEx.Create(this,115, 180, 470, 205); 
	m_wndBeginTimeLabel.Create(this, _T("Begin Time"), 10, 210, 110, 235);
	m_wndBeginTime.Create(this,115, 210, 265, 235); 
	m_wndOrderQtyLabel.Create(this, _T("Số ngày dự kiến"), 270, 210, 370, 235);
	m_wndOrderQty.Create(this,375, 210, 470, 235); 
	m_wndTimeOutLabel.Create(this, _T("Time out"), 10, 240, 110, 265);
	m_wndTimeOut.Create(this,115, 240, 265, 265); 
	m_wndQuantityLabel.Create(this, _T("Số ngày thực tế"), 270, 240, 370, 265);
	m_wndQuantity.Create(this,375, 240, 470, 265); 
	m_wndBedLabel.Create(this, _T("Room / Bed"), 10, 270, 110, 295);
	m_wndBed.Create(this,115, 270, 470, 295); 
	m_wndRelativeNameLabel.Create(this, _T("Relative Name"), 10, 300, 110, 325);
	m_wndRelativeName.Create(this,115, 300, 470, 325); 
	m_wndRelationLabel.Create(this, _T("Relation"), 10, 330, 110, 355);
	m_wndRelation.Create(this,115, 330, 266, 355); 
	m_wndRelativeYobLabel.Create(this, _T("RelativeYob"), 271, 330, 371, 355);
	m_wndRelativeYob.Create(this,376, 330, 470, 355); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 360, 110, 385);
	m_wndNote.Create(this,115, 360, 470, 450, TRUE, FALSE, TRUE); 
	m_wndApply.Create(this, _T("&Apply"), 300, 460, 385, 485);
	m_wndClose.Create(this, _T("&Close"), 390, 460, 475, 485);*/
	
	m_wndRelativeInformation.Create(this, _T("Relative Information"), 4, 125, 474, 549);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 475, 120);
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
	m_wndCardNumberExLabel.Create(this, _T("CardNumberEx"), 10, 180, 110, 205);
	m_wndCardNumberEx.Create(this,115, 180, 470, 205); 
	m_wndBeginTimeLabel.Create(this, _T("Begin Time"), 10, 210, 110, 235);
	m_wndBeginTime.Create(this,115, 210, 265, 235); 
	m_wndOrderQtyLabel.Create(this, _T("Số ngày dự kiến"), 270, 210, 370, 235);
	m_wndOrderQty.Create(this,375, 210, 470, 235); 
	m_wndTimeOutLabel.Create(this, _T("Time out"), 10, 240, 110, 265);
	m_wndTimeOut.Create(this,115, 240, 265, 265); 
	m_wndQuantityLabel.Create(this, _T("Số ngày thực tế"), 270, 240, 370, 265);
	m_wndQuantity.Create(this,375, 240, 470, 265); 
	m_wndBedLabel.Create(this, _T("Room / Bed"), 10, 270, 110, 295);
	m_wndBed.Create(this,115, 270, 470, 295); 
	m_wndRelativeNameLabel.Create(this, _T("Relative Name"), 10, 300, 110, 325);
	m_wndRelativeName.Create(this,115, 300, 470, 325); 
	m_wndRelationLabel.Create(this, _T("Relation"), 10, 330, 110, 355);
	m_wndRelation.Create(this,115, 330, 266, 355); 
	m_wndRelativeYobLabel.Create(this, _T("RelativeYob"), 271, 330, 371, 355);
	m_wndRelativeYob.Create(this,376, 330, 470, 355); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 360, 110, 385);
	m_wndNote.Create(this,115, 360, 470, 450, TRUE, FALSE, TRUE); 
	m_wndNoteEXLabel.Create(this, _T("Note nguoi than"), 10, 455, 110, 480);
	m_wndNoteEX.Create(this,115, 455, 470, 545, TRUE, FALSE, TRUE); 
	m_wndApply.Create(this, _T("&Apply"), 295, 555, 380, 580);
	m_wndClose.Create(this, _T("&Close"), 385, 555, 470, 580);

}
void CHMSRegisterPackageDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetReadOnly(TRUE);
	m_wndYob.SetLimitText(35);
	m_wndYob.SetReadOnly(true);
	m_wndGender.SetLimitText(35);
	m_wndGender.SetReadOnly(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetReadOnly(true);
	m_wndCardNumber.SetLimitText(15);
	m_wndCardNumber.SetCheckValue(false);
	m_wndCardNumberEx.SetLimitText(15);
	m_wndCardNumberEx.SetCheckValue(false);
	m_wndBeginTime.SetCheckValue(false);
	m_wndTimeOut.SetCheckValue(false);
	m_wndRelativeName.SetLimitText(128);
	m_wndRelativeName.SetCheckValue(true);
	m_wndRelativeName.SetInitCap(1);
	m_wndNote.SetLimitText(128);
	m_wndNote.SetCheckValue(false);
	m_wndNoteEX.SetLimitText(128);
	m_wndNoteEX.SetCheckValue(false);


	m_wndCardType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCardType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	
	m_hms_fee_extraTbl.SetTableName(_T("hms_fee_extra"));
	
	m_hms_fee_extraTbl.AddField(_T("hfe_updatedby"), dfText, 15); 
	m_hms_fee_extraTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_fee_extraTbl.AddField(_T("hfe_orderid"), dfLong); 
	m_hms_fee_extraTbl.AddField(_T("hfe_cardnumber"), dfText, 15);
	m_hms_fee_extraTbl.AddField(_T("hfe_cardtype"), dfText, 3); 
	m_hms_fee_extraTbl.AddField(_T("hfe_begindate"), dfDateTime); 
	m_hms_fee_extraTbl.AddField(_T("hfe_enddate"), dfDateTime); 
	m_hms_fee_extraTbl.AddField(_T("hfe_quantity"), dfFloat);
	m_hms_fee_extraTbl.AddField(_T("hfe_note"), dfText, 254);
	m_hms_fee_extraTbl.AddField(_T("hfe_noteEX"), dfText, 254);
	m_hms_fee_extraTbl.AddField(_T("hfe_cardnumberex"), dfText, 15);
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
	m_wndCardNumberEx.SetEvent(WE_CHECKVALUE, _OnCardNumberExCheckValueFnc);
	
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_TERM)
	{
		GetDataToScreen();
	}
	SetMode(nMode);
	

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
	DDX_Text(pDX, m_wndCardNumberEx.GetDlgCtrlID(), m_szCardNumberEx);
	DDX_Text(pDX, m_wndNoteEX.GetDlgCtrlID(), m_szNoteEX);

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
	m_jData[_T("NoteEX")] =  m_szNoteEX;
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
	m_jData[_T("NoteEX")].GetValue(m_szNoteEX);
	}

}
void CHMSRegisterPackageDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT hfe_cardnumber,hfe_cardnumberex, hfe_note, hfe_noteEX, hfe_cardtype, hfe_status, ") \
_T("   hfe_orderdate,") \
_T("   hfe_enddate,") \
_T("   hfel_quantity AS hfe_qty,") \
_T("   hfel_qtyorder AS hfe_orderqty,") \
_T("   hr_name       AS hfe_relative") \
_T(" FROM hms_fee_extra") \
_T(" LEFT JOIN hms_fee_extraline") \
_T(" ON(hfe_docno         = hfel_docno") \
_T(" AND hfe_fee_extra_id = hfel_fee_extra_id)") \
_T(" LEFT JOIN hms_relative") \
_T(" ON(hr_relative_id   = hfe_relative_id)") \
_T(" WHERE hfe_docno     =%ld") \
_T(" AND hfe_fee_extra_id=%ld"), m_nDocumentNo, m_nOrderId);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_cardnumber"), m_szCardNumber);
		rs.GetValue(_T("hfe_cardnumberex"), m_szCardNumberEx);	
		rs.GetValue(_T("hfe_cardtype"), m_szCardTypeKey);
		rs.GetValue(_T("hfe_orderdate"), m_szBeginTime);
		rs.GetValue(_T("hfe_enddate"), m_szTimeOut);
		rs.GetValue(_T("hfe_relative"), m_szRelativeName);
		rs.GetValue(_T("hfe_qty"), m_nQuantity);
		rs.GetValue(_T("hfe_orderqty"), m_nOrderQty);
		rs.GetValue(_T("hfe_note"), m_szNote);
		rs.GetValue(_T("hfe_status"), m_szStatus);
		rs.GetValue(_T("hfe_noteEX"), m_szNoteEX);
		if(GetMode() == VM_EDIT)
			m_szInforOld.Format(_T("TT cu: Ma the: %s, loai the: %s,thoi gian vao: %s , ghi chu: %s ")
			,m_szCardNumber,m_szCardTypeKey,m_szBeginTime, m_szNote, m_szNoteEX);
		else
			m_szInforOld.Format(_T("TT cu: Ma the: %s, loai the: %s,thoi gian vao: %s , thoi gian ra: %s, songay_thucte: %0.1f , ghi chu: %s ")
			,m_szCardNumber,m_szCardTypeKey,m_szBeginTime,m_szTimeOut,m_nQuantity, m_szNote, m_szNoteEX);
	
	}

}
void CHMSRegisterPackageDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_hms_fee_extraTbl.SetValue(_T("hfe_updatedby"), pMF->GetCurrentUser());
	m_hms_fee_extraTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);
	m_hms_fee_extraTbl.SetValue(_T("hfe_orderid"), m_nOrderId);
	m_hms_fee_extraTbl.SetValue(_T("hfe_cardnumber"), m_szCardNumber);
	m_hms_fee_extraTbl.SetValue(_T("hfe_cardnumberex"), m_szCardNumberEx);
	m_hms_fee_extraTbl.SetValue(_T("hfe_cardtype"), m_szCardTypeKey);
	m_hms_fee_extraTbl.SetValue(_T("hfe_begindate"), m_szBeginTime);
	m_hms_fee_extraTbl.SetValue(_T("hfe_enddate"), m_szTimeOut);
	m_hms_fee_extraTbl.SetValue(_T("hfe_quantity"), m_nQuantity);
	m_hms_fee_extraTbl.SetValue(_T("hfe_note"), m_szNote);
	m_hms_fee_extraTbl.SetValue(_T("hfe_noteEX"), m_szNoteEX);
	if(GetMode() == VM_EDIT)
		m_szInforNew.Format(_T("TT moi: Ma the: %s, loai the: %s,thoi gian vao: %s , ghi chu: %s ")
		,m_szCardNumber,m_szCardTypeKey,m_szBeginTime, m_szNote, m_szNoteEX);
		else
			m_szInforNew.Format(_T("TT moi: Ma the: %s, loai the: %s,thoi gian vao: %s , thoi gian ra: %s, songay_thucte: %0.1f , ghi chu: %s ")
			,m_szCardNumber,m_szCardTypeKey,m_szBeginTime,m_szTimeOut,m_nQuantity, m_szNote, m_szNoteEX);
	


}
void CHMSRegisterPackageDialog::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szGender.Empty();
	m_szAddress.Empty();

	
	m_szCardNumber.Empty();
	m_szCardNumberEx.Empty();
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
	m_szNoteEX.Empty();

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
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_szBeginTime = pMF->GetSysDateTime();
			m_szTimeOut = pMF->GetSysDateTime();
			
 			break;
 		case VM_EDIT: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
			if(m_szStatus == _T("S") || m_szStatus == _T("I"))
			{
				m_wndCardNumber.EnableWindow(TRUE);
				m_wndCardNumberEx.EnableWindow(TRUE);
				m_wndCardType.EnableWindow(TRUE);
				m_wndNote.EnableWindow(TRUE);
				m_wndNoteEX.EnableWindow(TRUE);
				m_wndBeginTime.EnableWindow(TRUE);
				m_wndCardNumber.SetFocus();
			}
 			break;

 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
		case VM_TERM: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_szTimeOut = pMF->GetSysDateTime();
			m_wndNote.EnableWindow(TRUE);
			m_wndNoteEX.EnableWindow(TRUE);
			m_wndTimeOut.EnableWindow(TRUE);
			m_wndQuantity.EnableWindow(TRUE);
			m_wndTimeOut.SetFocus();
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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT count(*) FROM hms_smartcard WHERE hsc_cardid='%s' and hsc_docno <> %ld and hsc_status='O' and hsc_locked <> 'Y' "),
		m_szCardNumber, m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Thẻ đang được sử dụng cho bệnh nhân khác. Không cho phép cấp trùng mã thẻ"));
		return -1;
	}
	return 0;
}
int CHMSRegisterPackageDialog::OnCardNumberExCheckValue()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT count(*) from HMS_CARD_SETTING ") \
				_T(" where HCS_SMARTCARD_ID_EX = '%s'") \
				_T(" and HCS_ACTIVE='N'"), m_szCardNumberEx);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Thẻ mở rộng chưa được kích hoạt, không cho phép sử dụng"));
		return -1;
	}
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
	CString szFilter;
	szFilter.Format(_T(" and ss_code not in('01','02') "));
	return pMF->LoadSelectionList(&m_wndCardType, _T("HMS_SMARTCARD_TYPE"), m_szCardTypeKey, szFilter);
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
	if(m_nQuantity <= 0)
	{
		m_nQuantity = m_nOrderQty;
	}
	return 0;
} 
/*void CHMSRegisterPackageDialog::OnTimeOutChange(){
	
} */
/*void CHMSRegisterPackageDialog::OnTimeOutSetfocus(){
	
} */
/*void CHMSRegisterPackageDialog::OnTimeOutKillfocus(){
	
} */
int CHMSRegisterPackageDialog::OnTimeOutCheckValue(){
	UpdateData();
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("HMS_CALC_VISIT_DAYS(to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'),  to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))"), m_szBeginTime, m_szTimeOut);
	m_nQuantity = str2double(pMF->ExecDML(szSQL));
	UpdateData(FALSE);
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
int CHMSRegisterPackageDialog::OnNoteEXCheckValue(){
	return 0;
} 

void CHMSRegisterPackageDialog::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT count(*) from HMS_CARD_SETTING ") \
				_T(" where HCS_SMARTCARD_ID_EX = '%s'") \
				_T(" and HCS_ACTIVE='N'"), m_szCardNumberEx);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Thẻ mở rộng chưa được kích hoạt, không cho phép sử dụng"));
		return;
	}	
	OnSaveHMSRegisterPackageDialog();
} 
void CHMSRegisterPackageDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
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
 	if(GetMode() != VM_EDIT && GetMode() != VM_TERM)
 		return -1;
	
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL,tmpStr;
	CRecord rs(&pMF->m_db);


 	
	if(GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("HMS_SERVICE_PACKAGE_ACCEPT(%s)"), m_hms_fee_extraTbl.FormatSQL());
	}
	else
	{ 
		// kiem tra co phai goi nguoi nha o lai PB 200k k thi moi chẹc
		szSQL.Format(_T("select count(*) from VIMES.hms_fee_extraline ") \
					_T("	left join hms_fee_list on (hfel_itemid= hfl_feeid) ") \
					_T("	where hfel_fee_extra_id = %ld and hfl_subitem='NN' and hfel_cost >0 "), m_nOrderId);
		rs.ExecSQL(szSQL);
		int nCountx = rs.GetIntValue();
		if(nCountx >0){
			// kiem tra co phieu an sang nguoi nha nao ma lon hon ngay ket thuc the
			szSQL.Format(_T("select to_char(hfo_orderdate,'DD/MM/YYYY') as pdate ") \
						_T("	from VIMES.hms_feefood ") \
						_T("	LEFT join VIMES.hms_foodordersheet ON (hfos_orderid = vimes.hms_feefood.hfo_reforder_id) ") \
						_T("	left join hms_feefoodline on (hms_feefoodline.hfol_orderid= hfo_orderid) ") \
						_T("	LEFT JOIN hms_fee_list on (hfl_feeid= hfol_itemid) ") \
						_T("	where hfol_docno =%ld and hfol_type='S' and hfos_depttype='HC' and hfo_orderstatus='A' and hfe_refstatus <> 'C' and hfol_status <> 'C' and hfl_typeid = 'F' and hfl_groupid = 'FF000'  and hfl_subgroup='NN'    ") \
						_T("	and trunc_date(hfo_orderdate) > to_date('%s','YYYY/MM/DD HH24:MI:SS') order by hfo_orderdate "),m_nDocumentNo, m_szTimeOut);
			rs.ExecSQL(szSQL);
			
			if(!rs.IsEOF())
			{
				tmpStr.Format(_T("Có các phiếu báo ăn lớn hơn ngày trả thẻ sau: \n"));
				while(!rs.IsEOF())
				{
					tmpStr.AppendFormat(_T("Ngày: %s \n"),rs.GetValue(_T("pdate")));
					rs.MoveNext();
				}
				ShowMessageBox(tmpStr);
				return -1;
			}

		}
			
		

		szSQL.Format(_T("HMS_SERVICE_PACKAGE_TERM(%s)"), m_hms_fee_extraTbl.FormatSQL());
	}
 	int ret =  str2long(pMF->ExecDML(szSQL));
	//_msg(_T("%s:%d"), szSQL, ret);	
 	if(ret > 0)
 	{
		// ghi log nguoi cap nhat hoac ket thuc
		CString szEvent, szDesc;
		if(GetMode() == VM_EDIT)
		{
			szEvent.Format(_T("ACEPT"));
			szDesc.Format(_T("SHS: %ld ID: %ld, Infor:%s - %s"),m_nDocumentNo, m_nOrderId, m_szInforOld,m_szInforNew);
			
		}
		else if (GetMode() == VM_TERM )
		{
			szEvent.Format(_T("TERM"));
			szDesc.Format(_T("SHS: %ld ID:%ld,Infor: %s - %s Ket nha luu tru "),m_nDocumentNo, m_nOrderId,m_szInforOld,m_szInforNew);
			
		}
		
		pMF->SystemLog(szEvent, szDesc);


 		SetMode(VM_VIEW);
		CGuiDialog::OnOK();
 	}
 	else
 	{
		ShowMessageBox(_T("Không cập nhật được phiếu"));
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
