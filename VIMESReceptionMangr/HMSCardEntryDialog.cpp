#include "HMSCardEntryDialog.h"
#include "MainFrm.h"
#include <winspool.h>
#include <afxinet.h>
#include <shlwapi.h>
#include <Windows.h>
#include <iostream>
#include <string>
#include "json.h"
#include "HMSCardInfoCheckIns.h"
#include "StringToken.h"
#include "HRAddProvilDialog.h"
#include "DbfMapParser.h"
static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameChange();
}
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

static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoChange();
}
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCardNoCheckValue();
} 
static void _OnGenCardSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnGenCardSelect();
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
static void _OnRegistrationDateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateChange();
}
/*static void _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateSetfocus();} */ 
/*static void _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateCheckValue();
} 
static void _OnExpiryDateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpiryDateChange();
}
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

static void  _OnRegistrationPlaceLabelClickFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceLabelClick();

} 

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
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnEditSelect();
} 

static void _OnHemaSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnHemaSelect();
} 


static void _OnAreaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCardEntryDialog* )pWnd)->OnAreaSelectChange(nOldItemSel, nNewItemSel);
} 


static void _OnAreaSelendokFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnAreaSelendok();
}
/*static void _OnAreaSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnAreaKillfocus();
}*/
/*static void _OnAreaKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnAreaKillfocus();
}*/
static long _OnAreaLoadDataFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnAreaLoadData();
}
/*static void _OnAreaAddNewFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnAreaAddNew();
}*/
static void _OnOffLineSelectFnc(CWnd *pWnd){
	 ((CHMSCardEntryDialog*)pWnd)->OnOffLineSelect();
}
static void _OnEmergencySelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnEmergencySelect();
}

static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnBirthDateChange();
}
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCardEntryDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnSexAddNew();
}*/
static void _OnCheckInsSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnCheckInsSelect();
} 
static void _OnOver5yearSelectFnc(CWnd *pWnd){
	 ((CHMSCardEntryDialog*)pWnd)->OnOver5yearSelect();
}
/*static void _OnApplyDate5yearChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnApplyDate5yearChange();
} */
/*static void _OnApplyDate5yearSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnApplyDate5yearSetfocus();} */ 
/*static void _OnApplyDate5yearKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnApplyDate5yearKillfocus();
} */

/*static void _OnExceptionPaymentChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExceptionPaymentChange();
} */
/*static void _OnExceptionPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExceptionPaymentSetfocus();} */ 
/*static void _OnExceptionPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExceptionPaymentKillfocus();
} */

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

static void _On5YearsSelectFnc(CWnd *pWnd)
{
	 ((CHMSCardEntryDialog*)pWnd)->On5YearsSelect();
}


static void _OnHasDisCountSelectFnc(CWnd *pWnd)
{
	 ((CHMSCardEntryDialog*)pWnd)->OnHasDisCountSelect();
}

static int _OnDateDisCountCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSCardEntryDialog *)pWnd)->OnDateDisCountCheckValue();
}

static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnFromDateCheckValue();
} 
static void _OnDoituong_kcbSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CHMSCardEntryDialog* )pWnd)->OnDoituong_kcbSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoituong_kcbSelendokFnc(CWnd *pWnd)
{
	((CHMSCardEntryDialog *)pWnd)->OnDoituong_kcbSelendok();
}
static long _OnDoituong_kcbLoadDataFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDoituong_kcbLoadData();
}


CHMSCardEntryDialog::CHMSCardEntryDialog(CWnd *pParent, int nMode, bool bEnableObj,bool bUseBarCode):
	CGuiDialog(pParent){

	m_nDlgWidth = 470;
	m_nDlgHeight = 430;
	SetDefaultValues();
	m_szxCardNo.Empty();
	m_szxObject.Empty();
	m_szxIssueDate.Empty();
	m_szxIssuePlace.Empty();
	m_bxHema = FALSE;
	m_bEnableObjectType = bEnableObj;
	CGuiDialog::SetMode(nMode);
	m_bPassExpDate = false;
	m_bUseBarcode= bEnableObj;
	m_bCheckIns = false;
}
CHMSCardEntryDialog::~CHMSCardEntryDialog(){
}
void CHMSCardEntryDialog::OnCreateComponents(){
	m_wndCardNumberInformation.Create(this, _T("Card Number Information"), 5, 5, 460, 390);
/*	if(m_bEnableObjectType)
		m_wndPatientNameLabel.Create(this, _T("Object Type"), 10, 30, 130, 55);
	else
		m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 30, 130, 55);
*/
	m_wndObjectLabel.Create(this, _T("Object"), 10, 30, 130, 55);
	m_wndObject.Create(this,135, 30, 455, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 130, 85);
	m_wndPatientName.Create(this,135, 60, 455, 85);
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 10, 90, 130, 115);
	m_wndBirthDate.Create(this,135, 90, 245, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 250, 90, 305, 115);
	m_wndSex.Create(this,310, 90, 455, 115);
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 120, 130, 145);
	m_wndCardNo.Create(this,135, 120, 340, 145);
	//m_wndGenCard.Create(this, _T("GenCard"), 345, 120, 455, 145);
	m_wndGenCard.Create(this, _T("GenCard"), 0, 0, 0, 0);
	m_wndCodeLabel.Create(this, _T("Code"), 10, 150, 130, 175);
	m_wndCode.Create(this,135, 150, 245, 175); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 250, 150, 340, 175);
	m_wndDiscount.Create(this,345, 150, 420, 175); 
	m_wndPercentLabel.Create(this, _T("%"), 425, 150, 455, 175);
	m_wndRegistrationDateLabel.Create(this, _T("Registration Date"), 10, 180, 130, 205);

	m_wndRegistrationDate.EnableCalendar(true);
	m_wndRegistrationDate.Create(this,135, 180, 245, 205); 
	m_wndExpiryDateLabel.Create(this, _T("Expiry Date"), 250, 180, 340, 205);
	m_wndExpiryDate.EnableCalendar(true);
	m_wndExpiryDate.Create(this,345, 180, 455, 205); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Registration Place"), 10, 210, 130, 235);
	m_wndRegistrationPlace.Create(this,135, 210, 455, 235); 
	m_wndCompanyLabel.Create(this, _T("Company"), 10, 240, 130, 265);
	m_wndCompany.Create(this,135, 240, 455, 265); 
	m_wndAreaLabel.Create(this, _T("Area"), 10, 270, 130, 295);
	m_wndArea.Create(this,135, 270, 455, 295);

	m_wndDoituong_kcbLabel.Create(this, _T("Mã ĐT KCB"), 10, 300, 130, 325);
	m_wndDoituong_kcb.Create(this,135, 300, 455, 325); 
	
	m_wndOffLine.Create(this, _T("Out Line"), 10, 330, 130, 355);
	m_wndEmergency.Create(this, _T("Emergency"), 135, 330, 230, 355);
	m_wndFromDate.Create(this,360, 329, 455, 355); 
	m_wnd5Years.Create(this, _T("Trên 5 năm"), 245, 330, 355, 356);
	m_wndHasDisCount.Create(this, _T("Có giấy không cùng chi trả"), 135, 361, 355, 386);
	m_wndDateDisCount.Create(this,360, 361, 455, 386); 

	m_wndCheckIns.Create(this, _T("Check In"), 210, 395, 290, 420);
	m_wndSave.Create(this, _T("&Ok"), 295, 395, 375, 420);
	m_wndClose.Create(this, _T("&Close"), 380, 395, 460, 420);

	m_wndDoituong_kcb.EnableWindow(false);

}
void CHMSCardEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szCardFormat;

	m_wndObject.SetCheckValue(true);
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndObject.InsertColumn(2, _T("Has Card"), CFMT_TEXT, 0);
	m_wndObject.InsertColumn(3, _T("type"), CFMT_TEXT, 0);
	m_wndObject.InsertColumn(4, _T("discount"), CFMT_NUMBER, 0);

	m_wndDoituong_kcb.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoituong_kcb.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

	m_wndCardNo.SetLimitText(20);
	m_wndCardNo.SetTextColor(RGB(0, 0, 255));
	m_wndCardNo.SetCheckValue(true);
	m_wndCardNo.ModifyStyle(0, ES_UPPERCASE);
//	szCardFormat = pMF->m_wndRegistration.m_wndObject.GetCurrent(3);
//	m_wndCardNo.SetMask(szCardFormat);
	m_wndDiscount.SetLimitText(3);
	m_wndDiscount.SetReadOnly(true);
//	m_wndDiscount.SetCheckValue(true);
	//m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetCheckValue(true);
//	m_wndExpiryDate.SetMin(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetCheckValue(true);
	m_wndRegistrationPlaceLabel.SetHyperlink(true);
	//m_wndRegistrationPlaceLabel.SetHyperlink(true);
	
	m_wndRegistrationPlace.LimitText(128);
	//m_wndPatientName.SetReadOnly(true);
	m_wndCode.SetLimitText(3);
	m_wndCode.SetReadOnly(true);

	m_wndArea.SetCheckValue(FALSE);

	m_wndOffLine.ModifyStyle(WS_TABSTOP, 0);

	m_wndRegistrationPlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndRegistrationPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(false);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(35);
	
	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndArea.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndArea.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

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
	m_hms_cardTbl.AddField(_T("hc_area"), dfText, 3); 

	m_wndEmergency.ModifyStyle(WS_TABSTOP, 0);
	m_wndOffLine.ModifyStyle(WS_TABSTOP, 0);
	m_wndArea.ModifyStyle(WS_TABSTOP, 0);
	m_wndDoituong_kcb.ModifyStyle(WS_TABSTOP, 0);
	m_wndCheckIns.ModifyStyle(WS_TABSTOP, 0);
	//m_wndFromDate.SetCheckValue(true);

	if(pMF->GetProp(_T("hms_use_130"))== _T("Y"))
	{
		m_wndDoituong_kcb.EnableWindow(true);
	}
	m_wndDoituong_kcb.SetCheckValue(true);

}
void CHMSCardEntryDialog::OnSetWindowEvents(){
	
	m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
//	m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndGenCard.SetEvent(WE_CLICK, _OnGenCardSelectFnc);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	m_wndRegistrationDate.SetEvent(WE_CHANGE, _OnRegistrationDateChangeFnc);
	//m_wndRegistrationDate.SetEvent(WE_SETFOCUS, _OnRegistrationDateSetfocusFnc);
	//m_wndRegistrationDate.SetEvent(WE_KILLFOCUS, _OnRegistrationDateKillfocusFnc);
	m_wndRegistrationDate.SetEvent(WE_CHECKVALUE, _OnRegistrationDateCheckValueFnc);
	m_wndExpiryDate.SetEvent(WE_CHANGE, _OnExpiryDateChangeFnc);
	//m_wndExpiryDate.SetEvent(WE_SETFOCUS, _OnExpiryDateSetfocusFnc);
	//m_wndExpiryDate.SetEvent(WE_KILLFOCUS, _OnExpiryDateKillfocusFnc);
	m_wndExpiryDate.SetEvent(WE_CHECKVALUE, _OnExpiryDateCheckValueFnc);
	m_wndRegistrationPlace.SetEvent(WE_SELENDOK, _OnRegistrationPlaceSelendokFnc);
	//m_wndRegistrationPlace.SetEvent(WE_SETFOCUS, _OnRegistrationPlaceSetfocusFnc);
	//m_wndRegistrationPlace.SetEvent(WE_KILLFOCUS, _OnRegistrationPlaceKillfocusFnc);
	m_wndRegistrationPlace.SetEvent(WE_SELCHANGE, _OnRegistrationPlaceSelectChangeFnc);
	m_wndRegistrationPlace.SetEvent(WE_LOADDATA, _OnRegistrationPlaceLoadDataFnc);
	//m_wndRegistrationPlace.SetEvent(WE_ADDNEW, _OnRegistrationPlaceAddNewFnc);
	m_wndRegistrationPlaceLabel.SetEvent(WE_CLICK, _OnRegistrationPlaceLabelClickFnc);
	//m_wndCompany.SetEvent(WE_CHANGE, _OnCompanyChangeFnc);
	//m_wndCompany.SetEvent(WE_SETFOCUS, _OnCompanySetfocusFnc);
	//m_wndCompany.SetEvent(WE_KILLFOCUS, _OnCompanyKillfocusFnc);
	m_wndCompany.SetEvent(WE_CHECKVALUE, _OnCompanyCheckValueFnc);
	m_wndArea.SetEvent(WE_SELENDOK, _OnAreaSelendokFnc);
	//m_wndArea.SetEvent(WE_SETFOCUS, _OnAreaSetfocusFnc);
	//m_wndArea.SetEvent(WE_KILLFOCUS, _OnAreaKillfocusFnc);
	m_wndArea.SetEvent(WE_SELCHANGE, _OnAreaSelectChangeFnc);
	m_wndArea.SetEvent(WE_LOADDATA, _OnAreaLoadDataFnc);
	//m_wndArea.SetEvent(WE_ADDNEW, _OnAreaAddNewFnc);
	m_wndOffLine.SetEvent(WE_CLICK, _OnOffLineSelectFnc);
	m_wndEmergency.SetEvent(WE_CLICK, _OnEmergencySelectFnc);
	m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
	//m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
	//m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
	m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
	m_wndCheckIns.SetEvent(WE_CLICK, _OnCheckInsSelectFnc);
	
	m_wnd5Years.SetEvent(WE_CLICK, _On5YearsSelectFnc);
	
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndHasDisCount.SetEvent(WE_CLICK, _OnHasDisCountSelectFnc);
	m_wndDateDisCount.SetEvent(WE_CHECKVALUE, _OnDateDisCountCheckValueFnc);

	m_wndDoituong_kcb.SetEvent(WE_SELENDOK, _OnDoituong_kcbSelendokFnc);
	//m_wndDoituong_kcb.SetEvent(WE_SETFOCUS, _OnDoituong_kcbSetfocusFnc);
	//m_wndDoituong_kcb.SetEvent(WE_KILLFOCUS, _OnDoituong_kcbKillfocusFnc);
	m_wndDoituong_kcb.SetEvent(WE_SELCHANGE, _OnDoituong_kcbSelectChangeFnc);
	m_wndDoituong_kcb.SetEvent(WE_LOADDATA, _OnDoituong_kcbLoadDataFnc);
	//m_wndDoituong_kcb.SetEvent(WE_ADDNEW, _OnDoituong_kcbAddNewFnc);

	//m_wndApplyDate5year.SetEvent(WE_CHANGE, _OnApplyDate5yearChangeFnc);
	//m_wndApplyDate5year.SetEvent(WE_SETFOCUS, _OnApplyDate5yearSetfocusFnc);
	//m_wndApplyDate5year.SetEvent(WE_KILLFOCUS, _OnApplyDate5yearKillfocusFnc);
	
	
	//m_wndExceptionPayment.SetEvent(WE_CHANGE, _OnExceptionPaymentChangeFnc);
	//m_wndExceptionPayment.SetEvent(WE_SETFOCUS, _OnExceptionPaymentSetfocusFnc);
	//m_wndExceptionPayment.SetEvent(WE_KILLFOCUS, _OnExceptionPaymentKillfocusFnc);


	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//if(pMF->m_CompanyInfo.sc_provid == 603 && m_szCardNo.Find(_T("HN"))!= -1)
	//{
	//	m_wndHemaFlag.SetEvent(WE_CLICK, _OnHemaSelectFnc);
	//}
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CString szCaption;
	/*if(m_bEnableObjectType)
	{
		m_wndPatientName.ShowWindow(SW_HIDE);
		m_wndObject.ShowWindow(SW_SHOW);
		m_wndObject.SetReadOnly(true);
		TranslateString(_T("Add new card"), szCaption);
	}
	else
	{
		m_wndPatientName.ShowWindow(SW_SHOW);
		m_wndObject.ShowWindow(SW_HIDE);
		m_wndObject.SetReadOnly(false);
		TranslateString(_T("Edit card information"), szCaption);
	}*/

	/*if(!m_bEnableObjectType)
	{
		m_wndPatientName.ShowWindow(SW_HIDE);
		m_wndObject.ShowWindow(SW_SHOW);
		m_wndObject.SetReadOnly(true);
		TranslateString(_T("Add new card"), szCaption);
	}
	else
	{
		m_wndPatientName.ShowWindow(SW_SHOW);
		m_wndObject.ShowWindow(SW_HIDE);
		m_wndObject.SetReadOnly(false);
		TranslateString(_T("Edit card information"), szCaption);
	}*/
	SetWindowText(szCaption);
	UpdateData(FALSE);
	if(m_szCompany.IsEmpty())
		m_szCompany = m_szWorkPlace;
	if(m_nPatientNo > 0)
	{
		GetDataToScreen();
	}
	else
	{
		OnCardNoCheckValue();
	}


	m_bEditEmergency = false;
//	if(pMF->CheckPermission(_T("01.19")))
	{
		m_bEditEmergency = true;
	}

	//Quyen cho phep sua ngay het han the BHYT
	if(pMF->CheckPermission(_T("01.18")))
	{
		m_bPassExpDate = false;
	}
	
	SetMode(GetMode());
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hhgd_url,hhgd_userid,md5(hhgd_password) as password,hhgd_provid,hhgd_hospitalid FROM hms_hospital_gdbhyt WHERe hhgd_active = 'Y' "));
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hhgd_url"), m_szURL);
		rs.GetValue(_T("hhgd_userid"), m_szUserName);
		rs.GetValue(_T("password"), m_szPassword);
		rs.GetValue(_T("hhgd_provid"), m_nProvinceID);
		rs.GetValue(_T("hhgd_hospitalid"), m_szHospitalID);
	}
	//Chi goi 1 lan tai day
	m_insCheckin.Laythongtinketnoi();
	pMF->GetAutoCheckCardIns();
	if(pMF->m_bIsAutoCheckCard)
	{
		if(m_szCardNo.GetLength() == 20)
		{
			if((m_szCardNo.Left(2) !=_T("QN") && m_szCardNo.Left(2) !=_T("CA") &&  m_szCardNo.Left(2) !=_T("LS")) &&  m_szCardNo.Mid(5,2) !=_T("KT")  )
			{
				pMF->m_bIsAutoCheckCard= true;
			}
			else
			{
				pMF->m_bIsAutoCheckCard= false;
			}
		}
	}
	
	if(pMF->m_bIsAutoCheckCard && m_bUseBarcode)
	{
		m_wndRegistrationDate.EnableWindow(false);
		m_wndExpiryDate.EnableWindow(false);
		OnCheckInsSelect();
	}
	else
	{
		m_wndRegistrationDate.EnableWindow(true);
		m_wndExpiryDate.EnableWindow(true);
		m_wndCardNo.EnableWindow(true);
		m_wndPatientName.EnableWindow(true);
		m_wndBirthDate.EnableWindow(true);
		m_wndSex.EnableWindow(true);
	}

	if(m_szPatientName.IsEmpty() && !m_szInputPatientName.IsEmpty())
	{
		m_szPatientName = m_szInputPatientName;
		m_wndPatientName.SetReadOnly(TRUE);
	}
	if(m_szObjectKey.IsEmpty() && !m_szInputObject.IsEmpty())
	{
		m_szObjectKey = m_szInputObject;		
	}
	if(m_szBirthDate.IsEmpty() && !m_szInputBirthDate.IsEmpty())
	{
		m_szBirthDate = m_szInputBirthDate;
	}
	if (pMF->m_nDocumentNo > 0)
	{
		m_wndPatientName.EnableWindow(false);
		m_wndBirthDate.EnableWindow(false);
		m_wndSex.EnableWindow(false);
		
	}
	UpdateData(FALSE);
}
void CHMSCardEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_TextEx(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlaceKey);
	DDX_Text(pDX, m_wndCompany.GetDlgCtrlID(), m_szCompany);
	DDX_TextEx(pDX, m_wndArea.GetDlgCtrlID(), m_szAreaKey);
	DDX_Check(pDX, m_wndOffLine.GetDlgCtrlID(), m_bOffLine);	
	DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);	
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Check(pDX, m_wnd5Years.GetDlgCtrlID(), m_b5Years);	
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_Check(pDX, m_wndHasDisCount.GetDlgCtrlID(), m_bHasDisCount);
	DDX_TextEx(pDX, m_wndDateDisCount.GetDlgCtrlID(), m_szDateDisCount);
	DDX_TextEx(pDX, m_wndDoituong_kcb.GetDlgCtrlID(), m_szDoituong_kcbKey);

}
void CHMSCardEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_bEnableObjectType)
		return;

	szSQL.Format(_T(" SELECT hc_cardno, hc_regdate, hc_expdate, hc_regcode, hc_company, hc_code, hc_discount, hc_groupid,") \
				 _T(" hd_object obj_id, get_patientname(hd_docno) patient_name, hc_area,") \
				 _T(" hd_over5year as five_year, HD_OVER5YEARDISCOUNTAPPLYDATE as discount_from,") \
				 _T(" hd_hasfeepaper as has_freepaper, HD_OVER5YEARAPPLYDATE as over5yeardate, HD_MA_DOITUONG_KCB as ma_doituong_kcb") \
				 _T(" FROM hms_card LEFT JOIN hms_doc ON (hd_patientno = hc_patientno AND hc_idx = hd_cardidx) WHERE hc_patientno=%ld AND hc_idx=%d"), m_nPatientNo, m_nIndex);
//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		szSQL.Format(_T(" SELECT hc_cardno, hc_regdate, hc_expdate, hc_regcode, hc_company, hc_code, hc_discount, hc_groupid,") \
					 _T(" hd_object obj_id, get_patientname(hd_docno) patient_name, ") \
					 _T(" hd_over5year as five_year, HD_OVER5YEARDISCOUNTAPPLYDATE as discount_from,") \
					 _T(" hd_hasfeepaper as has_freepaper, HD_OVER5YEARAPPLYDATE as over5yeardate, HD_MA_DOITUONG_KCB as ma_doituong_kcb") \
					 _T(" FROM hms_card LEFT JOIN hms_doc ON (hd_patientno = hc_patientno AND hc_idx = hd_cardidx) WHERE hc_patientno=%ld "), m_nPatientNo);
		rs.ExecSQL(szSQL);
	}
	//_msg(_T("%s"), szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hc_cardno"),  m_szCardNo);
		rs.GetValue(_T("hc_regdate"), m_szRegistrationDate); 
		rs.GetValue(_T("hc_expdate"), m_szExpiryDate); 
		rs.GetValue(_T("hc_regcode"), m_szRegistrationPlaceKey); 
		rs.GetValue(_T("hc_company"), m_szCompany); 
		rs.GetValue(_T("hc_code"), m_szCode); 
		rs.GetValue(_T("hc_discount"), m_nCardDiscount); 
		rs.GetValue(_T("hc_groupid"), m_nGroupID); 
		rs.GetValue(_T("patient_name"), m_szPatientName);
		rs.GetValue(_T("obj_id"), m_szObjectKey);
		rs.GetValue(_T("hc_area"), m_szAreaKey);


//Kiem tra neu co hoa don thu phi thi khong cho phep sua the nua
		/*szSQL.Format(_T("SELECT count(*) FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_cardidx=%ld and hfi_type ='P' "), pMF->m_nDocumentNo, m_nIndex);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			m_wndCardNo.EnableWindow(false);
			m_wndOffLine.EnableWindow(false);
		}*/

		m_szCompany.Trim();
		if(m_szCompany.IsEmpty())
			m_szCompany = m_szWorkPlace;


		rs.GetValue(_T("over5yeardate"), m_szFromDate);
		rs.GetValue(_T("discount_from"), m_szDateDisCount);
		m_b5Years = rs.GetValue(_T("five_year"))==_T("Y")?TRUE:FALSE;
		m_bHasDisCount = rs.GetValue(_T("has_freepaper"))==_T("Y")?TRUE:FALSE;

		rs.GetValue(_T("ma_doituong_kcb"), m_szDoituong_kcbKey);

		
		if(m_bOffLine) 
			m_nDiscount = (m_nCardDiscount*pMF->m_nInsOffLinePayment)/100;
		szSQL.Format(_T("SELECT hd_emergency FROM hms_doc WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		CString tmpStr;
		rs.GetValue(_T("hd_emergency"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bEmergency = TRUE;
		else
			m_bEmergency = FALSE;

		if(m_bEmergency)
		{
			m_nDiscount = m_nCardDiscount;
		}

		UpdateData(false);
	}


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
	m_hms_cardTbl.SetValue(_T("hc_company"), m_szCompany); 
	m_hms_cardTbl.SetValue(_T("hc_code"), m_szCode); 
	m_hms_cardTbl.SetValue(_T("hc_discount"), m_nDiscount); 
	m_hms_cardTbl.SetValue(_T("hc_groupid"), m_nGroupID); 


}
void CHMSCardEntryDialog::SetDefaultValues()
{

	m_szPatientName.Empty();
	m_szCardNo.Empty();
	m_szCode.Empty();
	m_nDiscount=0;
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlaceKey.Empty();
	m_szCompany.Empty();
	m_bOffLine = FALSE;
	m_bEmergency = FALSE;
	//m_szObjectKey = _T("2");
	m_szAreaKey.Empty();
	m_bOver5Years=FALSE;
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	
	m_b5Years=FALSE;
	m_szFromDate.Empty();
	m_bHasDisCount=FALSE;
	m_szDateDisCount.Empty();
	m_szDoituong_kcbKey.Empty();

}
int CHMSCardEntryDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
		

 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
		
  		switch(nMode){ 
 		case VM_ADD: 		
			EnableControls(TRUE);
			EnableButtons(TRUE, 0, 1,  -1); 
			if(m_szRegistrationDate.IsEmpty())
			{
				m_szRegistrationDate = pMF->m_szInsRegDate;
				m_szExpiryDate = pMF->m_szInsExpDate;
			}
			//m_szRegistrationPlaceKey = pMF->m_szCardRegCode;
			break; 
 		case VM_EDIT: 
			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1,  -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, -1); 			
 			break; 
 		}; 


		if(!m_bEditEmergency)
		{
			m_wndEmergency.EnableWindow(FALSE);
		}
		
		m_wndFromDate.EnableWindow(m_b5Years);
		m_wndDateDisCount.EnableWindow(m_bHasDisCount);

		if(m_szRegistrationPlaceKey == pMF->m_CompanyInfo.sc_id)
		//_msg(_T("%s"),m_szRegistrationPlaceKey);
		//_msg(_T("%s"),pMF->m_CompanyInfo.sc_id);
		{
			m_bOffLine = FALSE;
			m_wndOffLine.EnableWindow(FALSE);
		}
		m_wndRegistrationPlace.EnableWindow(false);
		m_wndCode.EnableWindow(false);
		
		if(m_bUseBarcode && pMF->m_bIsAutoCheckCard)
		{
			m_wndCardNo.EnableWindow(false);
			m_wndPatientName.EnableWindow(false);
			m_wndBirthDate.EnableWindow(false);
			m_wndSex.EnableWindow(false);
			m_wndRegistrationDate.EnableWindow(false);
			m_wndExpiryDate.EnableWindow(false);
		}
		else
		{
			m_wndCardNo.EnableWindow(true);
			m_wndPatientName.EnableWindow(true);
			m_wndBirthDate.EnableWindow(true);
			m_wndSex.EnableWindow(true);
			m_wndRegistrationDate.EnableWindow(true);
			m_wndExpiryDate.EnableWindow(true);
		}
		m_wndPatientName.EnableWindow(false);
		if(m_nDiscount <= 0 && (nOldMode == VM_ADD || nOldMode == VM_EDIT))
		m_wndCode.EnableWindow(true);
		m_wndCheckIns.SetFocus();
 		UpdateData(FALSE); 
		//m_wndClose.EnableWindow(TRUE);

		/*if(!pMF->CheckPermission(_T("RM.900.5")))
		{
			m_wndHasDisCount.EnableWindow(false);
			m_wndDateDisCount.EnableWindow(false);
		}*/		
		m_wndClose.EnableWindow(TRUE);
		
 		return nOldMode; 
}
void CHMSCardEntryDialog::OnPatientNameChange(){
	m_bCheckIns = true;
}
/*void CHMSCardEntryDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnPatientNameKillfocus(){
	
} */
int CHMSCardEntryDialog::OnPatientNameCheckValue(){
	return 0;
} 

int CHMSCardEntryDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//UpdateData(TRUE);
	return 0;
} 
int CHMSCardEntryDialog::OnObjectSelendok()
{
	//Khi chọn đối tượng của thẻ 10 số sẽ tính lại m_szObjectType,  m_szCardNo, m_szCode, m_nDiscount, m_nGroupID
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 UpdateData(true);
	int nDiscount = 0;
	int m_nGroupID = 0;	
	m_szObjectType = m_wndObject.GetCurrent(3);	
	m_szCode = m_szCardNo.Left(3);
	if (m_szThe10so.GetLength() == 10)
	{
		nDiscount = str2int(m_szCardNo.Mid(2,1));
		if(nDiscount > 0)
			{
				switch (nDiscount)
				{
					case 3:
						m_nDiscount = 95;
						break;
					case 4:
						m_nDiscount = 80;
						break;
					default:
						m_nDiscount = 100;
						break;
				}
			}
		m_nDisrate = m_nDiscount;
	    UpdateData(false);
	}	
	return 0;
}
/*int CHMSCardEntryDialog::OnObjectSetfocus(){
	 return 0;
}*/
/*int CHMSCardEntryDialog::OnObjectKillfocus(){
	 return 0;
}*/

void CHMSCardEntryDialog::On5YearsSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	m_wndFromDate.EnableWindow(m_b5Years);
	m_wndFromDate.SetCheckValue(m_b5Years);
	if(!m_b5Years)
	{
		m_szFromDate.Empty();
		m_wndFromDate.SetWindowText(m_szFromDate);
	}
	
}

	void CHMSCardEntryDialog::OnHasDisCountSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	m_wndDateDisCount.EnableWindow(m_bHasDisCount);
	m_wndDateDisCount.SetCheckValue(m_bHasDisCount);

	if(!m_bHasDisCount)
	{
		m_szDateDisCount.Empty();
		m_wndDateDisCount.SetWindowText(m_szDateDisCount);
	}

	RecalcPercent();
	
}
int CHMSCardEntryDialog::OnDateDisCountCheckValue(){
	return 0;
}

int CHMSCardEntryDialog::OnFromDateCheckValue(){
	return 0;
} 



int CHMSCardEntryDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	szWhere.Empty();
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" AND ho_id='%s' "), m_szObjectKey);
	};
	if(!pMF->m_UserInfo.su_hms_xobject.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), pMF->m_UserInfo.su_hms_xobject);
	if(GetMode() != VM_ADD)
		szWhere.AppendFormat(_T(" and ho_type='%s' "), m_szObjectType);

	szSQL.Format(_T("SELECT * FROM hms_object WHERE ho_active='Y' and ho_hascard='Y' %s ORDER BY ho_id "), szWhere);


	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	int nSel = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		
		if(m_szObjectKey.IsEmpty())
			rs.GetValue(_T("ho_id"), m_szObjectKey);
		rs.GetValue(_T("ho_type"), tmpStr);
		if(tmpStr == m_szObjectType)
		   nSel = nCount;
		
		m_wndObject.AddItems(
			rs.GetValue(_T("ho_id")), 
			rs.GetValue(_T("ho_desc")), 
			rs.GetValue(_T("ho_hascard")), 
			rs.GetValue(_T("ho_type")), 
			rs.GetValue(_T("ho_discount")), 
			NULL);
		rs.MoveNext();
		nCount++;
	}
	m_wndObject.SetCurSel(nSel);
	return nCount;
}
/*int CHMSCardEntryDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */

void CHMSCardEntryDialog::OnCardNoChange(){
	m_bCheckIns = true;
}
/*void CHMSCardEntryDialog::OnCardNoSetfocus(){
	
} */
/*
void CHMSCardEntryDialog::OnCardNoKillfocus(){
	m_szRegistrationPlaceKey = m_szCardNo.Right(5);	
} 
*/
int CHMSCardEntryDialog::OnCardNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	UpdateData(true);	
	if(m_szCardNo.IsEmpty()){
		m_wndCardNo.EnableWindow(false);
		m_wndDiscount.EnableWindow(false);
		m_wndRegistrationDate.EnableWindow(false);
		m_wndExpiryDate.EnableWindow(false);
		m_wndRegistrationPlace.EnableWindow(false);
		m_wndPatientName.EnableWindow(false);
		m_wndCode.EnableWindow(false);
		m_wndCardNo.SetToolTipMessage(_T(""));
		return 0;
	}
    //Lấy ra dữ liệu thẻ cũ	
	int nRet = pMF->ParseCard(m_szObjectType,  m_szCardNo, m_szCode, m_nDiscount, m_nGroupID);	
	//_msg(_T("%ld"), nRet);

	if(nRet < 0)
	{
		m_wndCardNo.SetToolTipMessage(_T("Invalid Card Number"));
		return -1;
	}
	if (m_szCardNo.GetLength() == 10)
	{
		if (m_szPatientName.GetLength()*m_szBirthDate.GetLength() > 0)
		{
			CheckInCardInfor();
		}
	}
	UpdateData(false);
	CRecord rs(&pMF->m_db);		
	
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_card WHERE hc_cardno='%s' AND hc_active='Y'"), m_szCardNo);
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		long nPatientNo;
		rs.GetValue(_T("hc_patientno"), nPatientNo);
		if(nPatientNo != m_nPatientNo)
		{
			CString szMsg;
			TranslateString(_T("This card is using by other patient.[%ld]"),tmpStr);
			szMsg.Format(tmpStr, nPatientNo);
			/*
			m_wndCardNo.SetToolTipMessage(szMsg);
			return -1;
			*/
			ShowMessageBox(szMsg);
			pMF->m_wndRegistration.m_szCardNoFind = m_szCardNo;
			pMF->m_wndRegistration.OnCardNoFindCheckValue();
			CGuiDialog::OnCancel();
			return -1;
		}
	}
	szSQL.Format(_T("SELECT count(*) FROM hms_hospital WHERE hh_id='%s' "), m_szCardNo.Right(5));
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		if(m_szCardNo.GetLength() > 10)
		m_szRegistrationPlaceKey = m_szCardNo.Right(5);
		UpdateData(false);
	}
	else
		m_szRegistrationPlaceKey.Empty();
	return 0;
} 
void CHMSCardEntryDialog::OnGenCardSelect()
{
	ShowMessageBox(_T("Tác vụ này tạm thời khóa lại theo yêu cầu của Ban CNTT! "), MB_OK);
		return;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szgroupid, szProvil;
	szSQL.Format(_T("SELECT su_groupid as groupid FROM sys_user WHERE su_userid = '%s'"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("groupid"), szgroupid);
	//if(pMF->GetCurrentUser()  != _T("admin"))
	if(szgroupid != _T("A"))
	{
		ShowMessageBox(_T("Tác vụ này chỉ sử dụng cho người quản trị. Liên hệ phòng KHQS.Xin cảm ơn! "), MB_OK);
		return;
	}
	if(!m_szCardNo.IsEmpty())
		return ;	
	UpdateData(true);
	CHRAddProvilDialog dlg(this);
	
	if(dlg.DoModal() == IDOK)
	{
		szProvil= dlg.m_szProvilKey;
		szSQL.Format(_T("hms_auto_gen_card_child('%s')"), szProvil);
		CString tmpStr = pMF->ExecDML(szSQL);

		m_szCardNo= tmpStr;
		m_szRegistrationDate=m_szBirthDate;
		//CDate::Convert(m_szBirthDate, ddmmyyyy, yyyymmdd);
		szSQL.Format(_T("select to_date( EXTRACT(YEAR FROM to_date('%s','YYYY-MM-DD'))+6 ||'/'||'%s' ,'YYYY/MM/DD')  - 1 AS plus_1_day     from dual"),m_szRegistrationDate,m_szRegistrationDate.Mid(5,5));
		rs.ExecSQL(szSQL);
		tmpStr = rs.GetStringValue();
		//tmpStr.Replace(_T("/"),_T("-"));
		m_szExpiryDate=tmpStr;

		UpdateData(false);
		OnCardNoCheckValue();

	}
	
} 
/*void CHMSCardEntryDialog::OnCodeChange(){
	
} */
/*void CHMSCardEntryDialog::OnCodeSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCodeKillfocus(){
	
} */
int CHMSCardEntryDialog::OnCodeCheckValue()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	UpdateData(true);
	int nMuchuong = 0;
	nMuchuong = str2int(m_szCode);

	m_szObjectType =m_wndObject.GetCurrent(3);

	CString szSQL;
	szSQL.Format(_T(" select count(*) from hms_object_line where hol_code='%s' and hol_type='%s'  "),m_szCode, m_szObjectType);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <=0)
	{
		_msg(_T("Định dạng không hợp lệ"));
		return -1;
	}
	if(m_szCardNo.GetLength() ==10 && m_szCode.GetLength() !=1   )
	{
		_msg(_T("Định dạng thẻ 10 số không hợp lệ"));
		return -1;
	}
		
		
	if(nMuchuong > 0 && nMuchuong < 6){
		switch (nMuchuong)
		{
			case 3:
				m_nDiscount = 95;
				break;
			case 4:
				m_nDiscount = 80;
				break;
			default:
				m_nDiscount = 100;
				break;
		}
	}
	//else
	//{
	//}
	//	return -1;

	m_nDisrate = m_nDiscount;
	UpdateData(false);
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
void CHMSCardEntryDialog::OnRegistrationDateChange(){
	m_bCheckIns = true;
} 
/*void CHMSCardEntryDialog::OnRegistrationDateSetfocus(){
	
} *
/void CHMSCardEntryDialog::OnRegistrationDateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnRegistrationDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(CompareDate(m_szRegistrationDate, pMF->GetSysDate()) > 0)
		return -1;
	return 0;
} 
void CHMSCardEntryDialog::OnExpiryDateChange(){
	m_bCheckIns = true;
}
/*void CHMSCardEntryDialog::OnExpiryDateSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnExpiryDateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnExpiryDateCheckValue(){
	if(CompareDate(m_szExpiryDate, m_szRegistrationDate) < 0)
		return -1;

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*if(CompareDate(m_szExpiryDate, pMF->GetSysDate()) < 0)
	{
		if(m_bPassExpDate)
		{
			ShowMessageBox(_T("Th\x1EBB \x42HYT \x63\x1EE7\x61 \x62\x1EC7nh nh\xE2n \x111\xE3 h\x1EBFt h\x1EA1n."));
			m_wndExpiryDate.SetCheckValue(false);
			return 0;	
		}
		return -1;
	}*/
	
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
long CHMSCardEntryDialog::OnRegistrationPlaceLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	return pMF->LoadHospitalList(&m_wndRegistrationPlace, m_szRegistrationPlaceKey);

	if(m_wndRegistrationPlace.IsSearchKey() && !m_szRegistrationPlaceKey.IsEmpty() )
	{
		szWhere.Format(_T("WHERE trim(hh_id)=trim('%s') "), m_szRegistrationPlaceKey);
	}
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

void CHMSCardEntryDialog::OnAreaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnAreaSelendok(){
	 
}
/*void CHMSCardEntryDialog::OnAreaSetfocus(){
	
}*/
/*void CHMSCardEntryDialog::OnAreaKillfocus(){
	
}*/
long CHMSCardEntryDialog::OnAreaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndArea, _T("HMS_CARD_AREA"), m_szAreaKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndArea.IsSearchKey() && !m_szAreaKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAreaKey
};
	m_wndArea.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndArea.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCardEntryDialog::OnAreaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSCardEntryDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
#include "HMSAdditionCardDialog.h"

void CHMSCardEntryDialog::OnHemaSelect()
{
	CHMSAdditionCardDialog dlg(this);
	dlg.SetMode(VM_ADD);
	if(dlg.DoModal() == IDOK)
	{
		m_szxCardNo = dlg.m_szCardNo;
		m_szxIssueDate = dlg.m_szIssueDate;
		m_szxIssuePlace = dlg.m_szIssuePlace;
		m_szxObject = dlg.m_szxObject;
		m_bxHema = dlg.m_bHema;
	}
}
void CHMSCardEntryDialog::OnBirthDateChange(){
	m_bCheckIns = true;
}
/*void CHMSCardEntryDialog::OnBirthDateSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnBirthDateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnBirthDateCheckValue(){
	return 0;
} 
void CHMSCardEntryDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bCheckIns = true;
} 
void CHMSCardEntryDialog::OnSexSelendok(){
	 
}
/*void CHMSCardEntryDialog::OnSexSetfocus(){
	
}*/
/*void CHMSCardEntryDialog::OnSexKillfocus(){
	
}*/
long CHMSCardEntryDialog::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szSexKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_sex' %s ORDER BY ss_code "), szWhere);
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCardEntryDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCardEntryDialog::OnCheckInsSelect(){
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	UpdateData(true);
	if(m_szCardNo.IsEmpty() )
		return ;

	int nCount= OnCardNoCheckValue();
	std::string response;
	if (pMF->CheckInsCardInfo(m_szCardNo, m_szPatientName, m_szBirthDate, response))
	{
		
		m_bCheckIns = false;
	}
	cout << response << endl;

	if (!response.empty())
	{
		CString szSQL;
		if (pMF->m_nDocumentNo > 0)
		{
			szSQL.Format(_T("SELECT * FROM hms_cardinfo WHERE hci_cardno='%s' and hci_docno=%ld"),m_szCardNo.Left(15), pMF->m_nDocumentNo);
		}
		else
		{
			szSQL.Format(_T("SELECT * FROM hms_cardinfo WHERE hci_cardno='%s' and hci_patientname = '%s' and hci_birthdate = TO_DATE('%s', 'YYYY-MM-DD')"),
				m_szCardNo.Left(15), m_szPatientName, m_szBirthDate);
		}
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		_msg(_T("%s"), szSQL);
		if (!rs.IsEOF())
		{
			CString tmpStr;
			rs.GetValue(L"hci_patientname", m_szPatientName);
			rs.GetValue(L"hci_birthdate", m_szBirthDate);
			rs.GetValue(L"hci_gender", m_szSexKey);
			rs.GetValue(L"hci_regcode", m_szCardRegCode);
			rs.GetValue(L"hci_regdate", m_szRegistrationDate);
			rs.GetValue(L"hci_expdate", m_szExpiryDate);
			rs.GetValue(L"hci_workplace", m_szWorkPlace);
			rs.GetValue(L"hci_over5year", tmpStr);
			if (tmpStr == L"Y")
			{
				m_bOver5Years = true;
			}
			
			UpdateData(false);
		}
		m_wndSave.SetFocus();
	}
} 
void CHMSCardEntryDialog::OnOver5yearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSCardEntryDialog::OnApplyDate5yearChange(){
	
} */
/*void CHMSCardEntryDialog::OnApplyDate5yearSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnApplyDate5yearKillfocus(){
	
} */
/*void CHMSCardEntryDialog::OnExceptionPaymentChange(){
	
} */
/*void CHMSCardEntryDialog::OnExceptionPaymentSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnExceptionPaymentKillfocus(){
	
} */
int CHMSCardEntryDialog::OnExceptionPaymentCheckValue(){
	return 0;
} 
void CHMSCardEntryDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	if(!IsValidateData())
		return;

	//Không cho nhập thẻ 10 số -> lại phải sửa lại XML
	//Không cho nhập 1 thẻ đúng tuyến, 1 thẻ trái tuyến
	//Bệnh nhân trái tuyến không cho phép tích 5 năm liên tục
	//Bệnh nhân trái tuyến không cho phép tích có giấy miễn

	int retval = 10;
	szSQL.Format(_T("HMS_CARD_CHECK_INFOR_RM('%s', %ld, %ld, %d, '%s', %d, %d, %d, '%s', '%s') "), 
		pMF->GetCurrentUser(),pMF->m_nPatientNo, pMF->m_nDocumentNo, m_bOffLine, 
		m_szCardNo, m_b5Years, m_bHasDisCount, m_bEmergency, m_szFromDate, m_szDateDisCount);
	retval = str2long(pMF->ExecDML(szSQL));
	
	switch(retval)
	{
	case -1:
		ShowMessageBox(_T("Độ dài thẻ phải từ 15 ký tự trở lên!"),MB_ICONERROR);		
		return;
		break;

	case -2:
		ShowMessageBox(_T("Thẻ 1 và thẻ 2 phải cùng đúng tuyến hoặc trái tuyến!"),MB_ICONERROR);		
		return;
		break;

	case -3:
		ShowMessageBox(_T("Bệnh nhân trái tuyến không được tích hưởng 5 năm liên tục!"),MB_ICONERROR);		
		return;
		break;

	case -4:
		ShowMessageBox(_T("Bệnh nhân trái tuyến không được tích có giấy miễn!"),MB_ICONERROR);		
		return;
		break;
	case -5:
		ShowMessageBox(_T("Bệnh nhân trái tuyến không cần tích cấp cứu"),MB_ICONERROR);		
		return;
		break;

	case -6:
		ShowMessageBox(_T("Thời gian bắt đầu hưởng 5 năm không được để trống!"),MB_ICONERROR);		
		return;
		break;

	case -7:
		ShowMessageBox(_T("Thời gian được miễn trên giấy không cùng chi trả không được để trống!"),MB_ICONERROR);		
		return;
		break;

	}

	RecalcPercent();
	//Comment đoạn này lại để trường hợp nhập thẻ 10 số
	/*if(m_szRegistrationPlaceKey != m_szCardNo.Right(5))
	{
		ShowMessageBox(_T("Nơi đăng ký ban đầu khác nhau"));
		
		return ;
	}*/

	m_szRegistrationPlace = m_wndRegistrationPlace.GetCurrent(1);
	m_szCardNoData.MakeUpper();

	if(GetMode() == VM_ADD && m_szObject.IsEmpty())
	{
		m_szObjectKey = m_wndObject.GetCurrent(0);
	}

	if(GetMode() != VM_EDIT && m_szObjectKey.IsEmpty())
	{
		//MessageBox(_T("OK"));
		return;
	}

	if(m_szObject.IsEmpty())
	{
		m_szObject = m_wndObject.GetCurrent(3);
		pMF->ParseCard(m_szObject,  m_szCardNo, m_szCode, m_nDiscount, m_nGroupID);
	}
	

	if(GetMode() == VM_EDIT)
	{
		if(OnSaveHMSCardEntryDialog() > 0)
		{
			CGuiDialog::OnOK();
		}

	}
	else
	{
		if (m_szCardNo.GetLength() == 10)
		{
			if (OnCardNoCheckValue() < 0)
			{
				CGuiDialog::OnCancel();
				return;
			}
		}
		CGuiDialog::OnOK();
	}
} 
void CHMSCardEntryDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CHMSCardEntryDialog::OnAddHMSCardEntryDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSCardEntryDialog::OnEditHMSCardEntryDialog()
{
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
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(!IsValidateData()) 
 		return -1; 
 	
	//Kiểm tra điều kiện bắt buộc
	if (m_szCardNo.IsEmpty())
	{
		ShowMessageBox(L"Số thẻ BH  không được để trống");
		return -1;
	}
	if (m_szDoituong_kcbKey.IsEmpty())
	{
		ShowMessageBox(L"Mã đối tượng KCB không được để trống");
		return -2;
	}
	

	m_nDisrate = m_nDiscount;	
	m_szOffLine = m_bOffLine?_T("Y"):_T("N");
	m_szEmergency = m_bEmergency?_T("Y"):_T("N");

	//kiem tra xem the co nam trong danh sach ko can check auto hay ko

	szSQL.Format(_T("select count(*) as qty from hms_card_passcheck where hcp_cardno = '%s' and HCP_ACTIVE='Y' "), m_szCardNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() >0)
		m_bPassCheckIns= true;
	else
		m_bPassCheckIns= false;

	//_msg(_T("Vào đây!"));
		
	if(!m_szRegistrationPlaceKey.IsEmpty())
	{
		int nCount=0;
		
		szSQL.Format(_T("select count(*) as qty from hms_hospital where hh_id ='%s' and nvl(hh_isactive,'Y') ='Y' "),m_szRegistrationPlaceKey );
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("qty"),nCount);
		if(nCount <=0) 
		{
			ShowMessageBox(_T("Nơi đăng ký ban đầu không hợp lệ, xin hãy kiểm tra lại"), 0);
				return -1;
		}
	}
	if(!m_bPassCheckIns && pMF->m_bIsAutoCheckCard)
	{
	//	_msg(_T("%s,%s"),m_szCardRegCode,m_szRegistrationPlaceKey);
		if((m_szCardNo.Left(2) !=_T("QN") && m_szCardNo.Left(2) !=_T("CA") &&  m_szCardNo.Left(2) !=_T("LS")) &&  m_szCardNo.Mid(5,2) !=_T("KT") && m_szCardNo.Left(2) !=_T("HC") )
		{
			if(m_szCardRegCode != m_szRegistrationPlaceKey   || m_szCardRegCode != m_szCardNo.Right(5) )
			{
				ShowMessageBox(_T("Đăng ký ban đầu không giống thông tin trên cổng"));
				
				return -1;
			}
		}
	}
	if (m_bPassCheckIns == false)
	{
		if (m_bCheckIns)
		{
			if (CheckInCardInfor() == false)
			{
				return -2;
			}
		}
	}
	// Neu tich trai tuyen va khong tich Cap cuu
	if(m_bOffLine && !m_bEmergency)
		m_nDisrate = pMF->m_nInsOffLinePayment*m_nDiscount/100;

	CString szWhere; 
	if(m_nIndex == 0){
		szSQL.Format(_T("SELECT hd_cardidx FROM hms_doc WHERE hd_docno=%ld and hd_cardno='%s'"),  pMF->m_nDocumentNo, m_szCardNo  );
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("hd_cardidx"), m_nIndex);
	}
_tprintf(_T("\nm_nIndex:%ld"), m_nIndex);
	if(m_nIndex > 0)
	{
		CDbfMap tbl;
		CDbfMapParser parser;
		CString szWhere, tmpStr5year, tmpStrHasDisCount;
		tbl.SetTableName(_T("hms_doc"));
		tbl.AddField(_T("hd_emergency"), dfText, 1);
		tbl.AddField(_T("hd_insline"), dfText, 1);
		tbl.AddField(_T("hd_disrate"), dfInteger);

		tbl.AddField(_T("hd_over5year"), dfText, 1);		
		tbl.AddField(_T("hd_hasfeepaper"), dfText, 1);
		tbl.AddField(_T("HD_OVER5YEARAPPLYDATE"), dfDate);
		tbl.AddField(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"), dfDate);
		tbl.AddField(_T("HD_MA_DOITUONG_KCB"), dfText, 3);	


		szWhere.Format(_T(" where hd_docno = %ld"), pMF->m_nDocumentNo);
		tbl.Open(&pMF->m_db, szWhere);
		parser.PushRowData(&tbl);
		tbl.SetValue(_T("hd_emergency"), m_szEmergency);
		tbl.SetValue(_T("hd_insline"), m_szOffLine);
		tbl.SetValue(_T("hd_disrate"), m_nDisrate);

		if(m_b5Years)
		tmpStr5year = _T("Y");
		else 
		tmpStr5year= _T("N");
		tbl.SetValue(_T("hd_over5year"), tmpStr5year);

		if(m_bHasDisCount)
		tmpStrHasDisCount = _T("Y");
		else 
		tmpStrHasDisCount= _T("N");

		tbl.SetValue(_T("hd_hasfeepaper"), tmpStrHasDisCount);
		tbl.SetValue(_T("HD_OVER5YEARAPPLYDATE"), m_szFromDate);
		tbl.SetValue(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"), m_szDateDisCount);
		tbl.SetValue(_T("HD_MA_DOITUONG_KCB"), m_szDoituong_kcbKey);	

		parser.PushRowData(&tbl, true);
		/*
		szSQL.Format(_T("UPDATE hms_doc SET hd_emergency='%s', hd_insline='%s', hd_disrate=%d WHERE hd_docno=%ld "), m_szEmergency,m_szOffLine,m_nDisrate, pMF->m_nDocumentNo);
		*/
		szSQL = tbl.GetUpdateSQL();
		szSQL += szWhere;
		int nRet = pMF->ExecSQL(szSQL);
		if (nRet > 0)
		{
			//Cập nhật lại 5 năm trong thẻ BH && % hưởng khi sửa lại thông tin thẻ//
			/*szSQL.Format(_T("HMS_CARD_UPDATE_5YEAR(%ld, '%s', '%s') "),  pMF->m_nDocumentNo, m_szCardNo, tmpStr5year);
			int ret = str2int(pMF->ExecDML(szSQL));		

			if (ret > 0)
			{
			
			}
			else
			{
			
			}*/
			
			CString szRowChange = parser.GetRowChange();
			if (!szRowChange.IsEmpty())
			{
				CString szEvent, szDescr;
				szEvent = _T("hms_doc_edit_card");
				szDescr.Format(_T("[hd_docno=%ld] %s"), pMF->m_nDocumentNo, szRowChange);
				pMF->SystemLog(szEvent, szDescr);
			}


		}
		return 1; 
	}

	return 1;
 	

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

/*
int	CHMSCardEntryDialog::ParseCard(CString szObject, CString szCardNo, CString &szCode, int &nDiscount){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szCardFormat, szCondition, szCode, szInsCode;
	bool bIsFound = false;
	int nDiscount=0;
	UpdateData(true);
//	if(GetMode() == VM_ADD)
//		szSQL.Format(_T("SELECT * FROM hms_object_line WHERE length(hol_cardfmt)=%d "), szCardNo.GetLength());
//	else
	szSQL.Format(_T("SELECT * FROM hms_object_line WHERE hol_type='%s' AND length(hol_cardfmt)=%d "), m_szObject, szCardNo.GetLength());
//_fmsg(_T("%s"), szSQL);
	int ret = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("hol_cardfmt"), szCardFormat);
		rs.GetValue(_T("hol_condition"), szCondition);
		rs.GetValue(_T("hol_code"), szInsCode);
		rs.GetValue(_T("hol_discount"), nDiscount);
		bool bValid = true;
		szCode.Empty();
		for (int i =0; i < szCardFormat.GetLength(); i++){
			if(szCardFormat[i] == _T('$') && _istalnum(szCardNo[i])==0 ){
				bValid = false;
				break;
			}
			else if(szCardFormat[i] == _T('A') && _istalpha(szCardNo[i])==0 ){
				bValid = false;
				break;
			}
			else if(szCardFormat[i] == _T('#') && _istdigit(szCardNo[i])==0 ){

				bValid = false;
				break;
			}
			if(szCondition[i] == _T('C')){
				szCode += szCardNo[i];
			}
		}

		if(szCode != szInsCode){
			bValid = false;
		}
		if(bValid)
		{
			bIsFound = true;
			break;
		}

		rs.MoveNext();
		
	}

	if(bIsFound)
	{
		m_szCode = szInsCode;
		m_nDiscount = nDiscount;
		UpdateData(false);
		return 1;
	}
	return -1;
}

*/
#include "HMSHospitalDialog.h"
#include "HMSHospitals.h"
void CHMSCardEntryDialog::OnRegistrationPlaceLabelClick()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(!pMF->CheckPermission(_T("01.15")))
	{
			ShowMessageBox(_T("Permission Denined."), 0);
			return;
	}

	CHMSHospitalListSetupDialog dlg(this);
	dlg.m_szID = m_szCardNo.Right(5);
	if (dlg.DoModal() == IDOK)
	{
		m_szRegistrationPlaceKey = dlg.m_szID;
		OnRegistrationPlaceLoadData();
		m_wndCompany.SetFocus();		
		UpdateData(false);
	}
}

void CHMSCardEntryDialog::OnOffLineSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	m_bOffLine = !m_bOffLine;

	m_nDisrate = m_nDiscount = m_nCardDiscount;	

	if(m_bEmergency)
	{
		m_nDisrate = m_nCardDiscount;		
	}
	else
	{
		if(m_bOffLine)
			m_nDisrate = m_nCardDiscount*pMF->m_nInsOffLinePayment/100;
	}
	
	if(m_bOffLine && !m_b5Years && !m_bHasDisCount)
	{
		
		m_wnd5Years.EnableWindow(FALSE);
		m_wndHasDisCount.EnableWindow(FALSE);
		m_wndFromDate.SetReadOnly(true);
		m_wndDateDisCount.SetReadOnly(true);
	}
	else
	{
		
		m_wnd5Years.EnableWindow(TRUE);
		m_wndHasDisCount.EnableWindow(TRUE);
	}


	UpdateData(false);
	

}


void CHMSCardEntryDialog::OnEmergencySelect()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	if(!m_bEditEmergency)
	{
		return;
	}
	m_bEmergency = !m_bEmergency;
	if(m_bEmergency)
	{
		m_nDisrate = m_nDiscount  = m_nCardDiscount;
	}
	else
	{
		m_nDisrate = m_nDiscount = (m_nCardDiscount*pMF->m_nInsOffLinePayment)/100;
	}

	UpdateData(FALSE);
}
/*Mô tả hàm
-Hàm: CheckInCardInfor
-Tình huống sử dụng: lấy thông tin thẻ bh từ cổng quốc gia
-Hoạt động:
	+Thành phần:
	 .ct
	 .csdl
	 .cổng bh
	+Các bước:
	 .ct kết nối cổng với tt từ dialog
	 .cổng trả tt về ct dưới dạng json
	 .ct so sánh tt với csdl và hiển thị nếu có sai khác
	những thông tin đúng đc cập nhật vào ô dữ liệu tương ứng
*/
bool CHMSCardEntryDialog::CheckInCardInfor()
{

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szJsonData, szError;
	CString szParams, szSQL;
	CRecord rs(&pMF->m_db);
	int nRet = 0;
	szSQL.Format(_T("hms_card_bypassprefix('%s')"), m_szCardNo);
	nRet = str2int(pMF->ExecDML(szSQL));	
	if (nRet > 0)
	{
		return true;
	}
	bool bIsEditMode = GetMode() == VM_ADD || GetMode() == VM_EDIT;
	
	// For checking
	CString tmpSName, tmpSSex, tmpSBirthday, tmpSDkbd, tmpSgtTheTu, tmpSgtTheDen;
	CString tmpError;
	StringUpper(m_szPatientName, tmpSName);
	tmpSBirthday = CDate::Convert(m_szBirthDate,yyyymmdd,ddmmyyyy );

	/*if (m_bYearofBirth) 
		tmpSBirthday = tmpSBirthday.Right(4);*/

	tmpSSex = m_szSexKey.Compare(_T("M")) == 0 ? _T("NAM") : _T("NỮ");
	tmpSDkbd = m_szRegistrationPlaceKey;
	tmpSgtTheTu = CDate::Convert(m_szRegistrationDate, yyyymmdd, ddmmyyyy);		
	tmpSgtTheDen = CDate::Convert(m_szExpiryDate, yyyymmdd, ddmmyyyy);
	tmpError.Empty();
	
	if( m_szCardNo.Trim().IsEmpty() ||  tmpSName.Trim().IsEmpty() || tmpSBirthday.Trim().IsEmpty() ) 
	{
		MessageBox(_T("Thiếu/lỗi thông tin tra cứu thẻ\n(Kiểm tra: Họ tên, ngày sinh, mã thẻ)"), _T("Cổng tiếp nhận BHXH"), MB_ICONERROR);
		return false;
	}

	//AfxMessageBox( tmpSName + _T("\n") + tmpSBirthday + _T("\n") + tmpSSex + _T("\n") + tmpSDkbd );

	JSONVALUE jsonRequest;	
	jsonRequest["username"] = m_szUserName;
	jsonRequest["password"] = m_szPassword;

	std::wstring json_string;
	jsonRequest.ToString(json_string);
	szJsonData.Format(_T("%s"), json_string.c_str());
	
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse, tmpStr;
	LPCSTR szURLLPCSTR;
	bool bCheck2The = false;

	CString szURL, szURL1;	
	DWORD dwLength;
	LPWSTR  szUrl2;
   szURL.Format(_T("http://103.57.113.22/api/token/take"));
    //_msg(_T("Locdv = %s"), szURL);
	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);
		session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 30000);
		pServer = session.GetHttpConnection(svr, port);
		 _tprintf(_T("\r\n%s -- %d"),svr,port);

		if(szURL.Left(5) == _T("https"))		
			pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT|INTERNET_FLAG_SECURE); 
		else
			pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT);

		pFile->AddRequestHeaders(strHeaders);
		_tprintf(_T("\nstrobj: %s"), strobj);
		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szJsonData, szJsonData.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szJsonData, szJsonData.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;
		_tprintf(_T("\nbuff: %s"), buff);
		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
	        char szBuff[1025];
			UINT dwLen = 0;
			std::string str;
			str.clear();

			for(;;)
			{
				memset(szBuff, '\0', 1025);
				dwLen = pFile->Read(szBuff, 1024);
				if(dwLen <= 0)
					break;
			    
				str += szBuff;			    
			}

			/*if(szResponse.IsEmpty)
			{
				ShowMessageBox(_T("Erro Topken"));
				return -1;
			}*/

			WCHAR* wcString = new WCHAR[str.length()+1];
			//memset(wcString, L'\0', str.length());			
			UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
			::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);			
			wcString[nbyte] = L'\0';
			tmpStr.Format(_T("%s"), wcString);
			szResponse += tmpStr;
			delete wcString;

			_tprintf(_T("\r\n%s"), szResponse);
			CString szData, tmpStr1;
			JSONVALUE j, js, jsonResponseToken, jResponse;	
			if(!szResponse.IsEmpty())
			{	
				jsonResponseToken.Parse(szResponse);
				
				JSONVALUE j = jsonResponseToken.At(_T("maKetQua"));
				JSONVALUE jj = jsonResponseToken.At(_T("APIKey"));
				JSONVALUE jValue;
				std::wstring strData;
				std::wstring json_string;		
				// Ma loi tra ve
				j.ToString(json_string);		
				szData.Format(_T("%s"), json_string.c_str());
				// APIKey tra ve
				jj.ToString(json_string);		
				szData.Format(_T("%s"), json_string.c_str());

				//_msg(_T("%s"),szData);

				jValue = jj["access_token"];
				jValue.ToString(strData);
				tmpStr = strData.c_str();
				tmpStr1.Format(_T("%c"), 34);
				tmpStr.Replace(tmpStr1, _T(""));
				m_szAccess_token = tmpStr;
				_tprintf(_T("\r\nm_szAccess_token:%s"), m_szAccess_token);

				jValue = jj["id_token"];
				jValue.ToString(strData);
				tmpStr = strData.c_str();
				tmpStr1.Format(_T("%c"), 34);
				tmpStr.Replace(tmpStr1, _T(""));
				m_szToken_ID = tmpStr;
				_tprintf(_T("\r\nm_szToken_ID:%s"), m_szToken_ID);				

				
				JSONVALUE jRCard_info;				
				szJsonData.Empty();
					jRCard_info["maThe"] = m_szCardNo.Left(15);
				jRCard_info["hoTen"] = m_szPatientName;

				CString szBirthDate;
				szBirthDate =CDate::Convert( m_szBirthDate,yyyymmdd,ddmmyyyy);

				if(m_szBirthDate == _T("1752/09/14")){
					szBirthDate = _T("01/01/1980");
				}
				
				if(szBirthDate.GetLength() <= 0 || szBirthDate.IsEmpty())
				{
					szBirthDate = _T("01/01/1980");
				}
												
				jRCard_info["ngaySinh"] = szBirthDate.Right(4);

				std::wstring jStr;
				jRCard_info[_T("hoTenCb")] = _T("Nguyễn Duy Minh");
				jRCard_info[_T("cccdCb")] = _T("027098009870");
				jRCard_info.ToString(jStr);
				szJsonData.Format(_T("%s"), jStr.c_str());
				//_msg(_T("\r\n%s"), szJsonData);
				szURL.Format(_T("http://103.57.113.22/api/egw/KQNhanLichSuKCB2024?token=%s&id_token=%s&username=%s&password=%s"), m_szAccess_token, m_szToken_ID,
					m_szUserName, m_szPassword);

	//_msg(_T("locdv = %s, %s"), szURL, szJsonData);
	
				::AfxParseURL(szURL, svrtype, svr, strobj, port);
				session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 30000);
				pServer = session.GetHttpConnection(svr, port);
				_tprintf(_T("\r\n%s -- %d"),svr,port);
			//	pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_SECURE); 


				if(szURL.Left(5) == _T("https"))		
					pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT|INTERNET_FLAG_SECURE); 
				else
					pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT);
				pFile->AddRequestHeaders(strHeaders);

				char* buff;
				int len = ::WideCharToMultiByte(CP_UTF8, 0, szJsonData, szJsonData.GetLength(), NULL, 0, 0, 0);
				buff = new char[len+sizeof(char)];
				memset(buff, '\0', len+sizeof(char));
				::WideCharToMultiByte(CP_UTF8, 0, szJsonData, szJsonData.GetLength(), buff, len, 0, 0);
				printf("%s", buff);
				result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
				delete buff;

				pFile->QueryInfoStatusCode(dwRet);

				_tprintf(_T("\r\n%d"), dwRet);
				if (dwRet == HTTP_STATUS_OK)
				{
					_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
					char szBuff[1025];
					UINT dwLen = 0;
					std::string str;
					str.clear();

					for(;;)
					{
						memset(szBuff, '\0', 1025);
						dwLen = pFile->Read(szBuff, 1024);
						if(dwLen <= 0)
							break;
					    
						str += szBuff;			    
					}
					
					szResponse.Empty();
					WCHAR* wcString = new WCHAR[str.length()+1];
					//memset(wcString, L'\0', str.length());
					UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
					::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);
					wcString[nbyte] = L'\0';
					tmpStr.Format(_T("%s"), wcString);
					szResponse += tmpStr;
					delete wcString;

					
					//_msg(_T("\r\n%s"), szResponse);
					CHMSCardInfoCheckIns dlg(this);
_tprintf(_T("\nszResponse: %s\n"), szResponse);				
					if(!szResponse.IsEmpty())
					{
						jResponse.Parse(szResponse);
						j= jResponse.At(_T("maKetQua"));
						j.ToString(json_string);
						CString szMaloi; 
						szMaloi.Format( _T("%s"), json_string.c_str() );
_tprintf(_T("\nszMaloi: %s\n"), szMaloi);		
						szMaloi.Replace(_T("\""), _T(""));

						j= jResponse.At(_T("ghiChu"));
						j.ToString(json_string);
						tmpStr.Format(_T("%s"), json_string.c_str());						
						tmpStr.Replace(_T("\""), _T(""));
						dlg.m_szNOI_DUNG=tmpStr;
						szData.Format(_T("N\x1ED9i \x64ung: %s"),tmpStr);
						CStringToken tk(tmpStr, _T("!"));
						if(tk.GetSize() > 0)
						{
							tk.GetAt(0,tmpStr);
							dlg.m_szCanhbao=tmpStr;
						}						

						if (szMaloi.Compare(_T("000")) == 0 || szMaloi.Compare(_T("003")) == 0 || szMaloi.Compare(_T("004")) == 0) 
							// -- Thẻ còn giá trị sử dụng mới check
						{

							j= jResponse.At(_T("hoTen"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szHO_TEN=tmpStr;
							szData.AppendFormat(_T("\r\nH\x1ECD t\xEAn: %s"),tmpStr);						
							// Check 
							StringUpper(tmpStr, tmpStr);							
							if (tmpSName.Compare(tmpStr) !=0 ) {							
								tmpError.AppendFormat( _T("Họ tên sai: %s -> %s\n"), tmpSName, tmpStr );	

								// Correct
								if (bIsEditMode) 
								{	
									StringLower(tmpStr, m_szPatientName);
									InitCap(m_szPatientName, m_szPatientName);
								}
							}

							j= jResponse.At(_T("ngayDu5Nam"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							CString szdateover5year;
							szdateover5year=tmpStr;
							//szdateover5year.Replace(_T("/"),_T("-"));
							m_szFromDate = CDate::Convert(szdateover5year, ddmmyyyy, yyyymmdd);
							dlg.m_szNgayDu5nam=m_szFromDate;
							if(CompareDate(m_szFromDate, pMF->GetSysDate()) <= 0 && !m_szFromDate.IsEmpty())
							{	
								//m_b5Years= true;
							}
												
							j= jResponse.At(_T("ngaySinh"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szNGAY_SINH=tmpStr;

							CString szBirthday;
							szBirthday=tmpStr;
							if(tmpStr.GetLength()==4)
							{								
								if (bIsEditMode)
								{
									m_szBirthDate =tmpStr + _T("/01/01");
								//	m_bYearofBirth=true;
								}
							}
							else
							{
								szBirthday.Replace(_T("/"),_T("-"));
								
								CDate dte;
								if(dte.ParseDate(szBirthday, ddmmyyyy))
								{		
									szBirthDate.Format(_T("%.2d/%.2d/%.4d"), dte.GetDay(), dte.GetMonth(), dte.GetYear());								
								}
								else
								{
									dte.ParseDate(szBirthday, yyyymmdd);
									szBirthDate.Format(_T("%.2d/%.2d/%.4d"), dte.GetDay(), dte.GetMonth(), dte.GetYear());
									
								}
								
								if (bIsEditMode)
									m_szBirthDate = CDate::Convert( szBirthDate,ddmmyyyy,yyyymmdd);
							}	

							szData.AppendFormat(_T("\r\nNg\xE0y sinh: %s"),tmpStr);
							
							// Check 						
							if (tmpSBirthday.Compare(tmpStr) !=0 ) {
								tmpError.AppendFormat( _T("Ngày sinh sai: %s -> %s\n"), tmpSBirthday, tmpStr );							
							}

							j= jResponse.At(_T("gioiTinh"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							tmpStr.Trim();
							// Correct
							if (bIsEditMode)
							  m_szSexKey = tmpStr == _T("Nam")?_T("M"):_T("F");
							dlg.m_szGIOI_TINH = tmpStr;
							szData.AppendFormat(_T("\r\nGi\x1EDBi t\xEDnh: %s"),tmpStr);
							// Check 		
							StringUpper(tmpStr, tmpStr);
							if (GetMode() != VM_ADD && tmpSSex.Compare(tmpStr) !=0 ) {
								tmpError.AppendFormat( _T("Giới tính sai: %s -> %s\n"), tmpSSex, tmpStr );														
							}

							j= jResponse.At(_T("diaChi"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							tmpStr.Trim();
							//m_szCompany=tmpStr;
							m_szAddress = tmpStr;
							dlg.m_szDIA_CHI=tmpStr;
							szData.AppendFormat(_T("\r\n\x110\x1ECB\x61 \x63h\x1EC9: %s"),tmpStr);

							j= jResponse.At(_T("maDKBD"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							tmpStr.Trim();
							m_szRegistrationPlaceKey=tmpStr;
							m_szCardRegCode= tmpStr;
							dlg.m_szMADKBD=tmpStr;
							szData.AppendFormat(_T("\r\nM\xE3 \x110K\x42\x110: %s"),tmpStr);

							// Correct
							//if (bIsEditMode)							
							//	m_szCardNo = m_szCardNo.Left(15) + tmpStr;
							if (bIsEditMode)
								{								
								if(m_szCardNo.GetLength() > 10)									
									m_szCardNo = m_szCardNo.Left(15) + tmpStr;
								}
							// Check
							if (tmpSDkbd.Compare(tmpStr) != 0 && m_szCardNo.GetLength() >10) {							
								tmpError.AppendFormat( _T("Mã ĐKBĐ sai: %s -> %s\n"), tmpSDkbd, tmpStr);								
							}
							
							j= jResponse.At(_T("gtTheTu"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							CString szregdate;
							szregdate=tmpStr;
							szregdate.Replace(_T("/"),_T("-"));
							// Correct
							if (bIsEditMode)
								m_szRegistrationDate=CDate::Convert(szregdate, ddmmyyyy, yyyymmdd);
							dlg.m_szTU_NGAY1=tmpStr;
							szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"),tmpStr);
							// Check
							if (GetMode() != VM_ADD && tmpSgtTheTu.Compare(tmpStr) != 0) {
								tmpError.AppendFormat(_T("Hạn thẻ (từ) sai: %s -> %s\n"), tmpSgtTheTu, tmpStr);							
							}

							j= jResponse.At(_T("gtTheDen"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							CString szexpdate;
							szexpdate=tmpStr;
							dlg.m_szDEN_NGAY1=tmpStr;

							// Correct
							if (bIsEditMode)
								m_szExpiryDate = CDate::Convert(szexpdate, ddmmyyyy, yyyymmdd);

							szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"), tmpStr);
							// Check
							if (GetMode() != VM_ADD && tmpSgtTheDen.Compare(tmpStr) != 0) {
								tmpError.AppendFormat(_T("Hạn thẻ (đến) sai: %s -> %s\n"), tmpSgtTheDen, tmpStr);							
							}

							j= jResponse.At(_T("maKV"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szMA_KV=tmpStr;

							CString szarea;
						//	_msg(_T("%s"),tmpStr);
							if(tmpStr==_T("K1") || tmpStr==_T("K2") ||tmpStr==_T("K3"))
							{
								/*if(tmpStr==_T("K1"))
									szarea=_T("5");
								if(tmpStr==_T("K2"))
									szarea=_T("6");
								if(tmpStr==_T("K3"))
									szarea=_T("7");*/

								m_szAreaKey=tmpStr;
							}else
							{
								m_szAreaKey=_T("KXD");
							}

							szData.AppendFormat(_T("\r\nM\xE3 KV: %s"),tmpStr);

							j= jResponse.At(_T("maTheCu"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szTHE_CU=tmpStr;
							szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB \x63\x169: %s"),tmpStr);

							if(CompareDate(m_szExpiryDate, pMF->GetSysDate()) < 0)
							{
								bCheck2The = true;
							}
											
							j= jResponse.At(_T("maDKBDMoi"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));		
							if (tmpStr != _T("null") && bCheck2The){
								m_szRegistrationPlaceKey = tmpStr;
							}

							j= jResponse.At(_T("maTheMoi"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szTHE_MOI=tmpStr;
							szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB m\x1EDBi: %s"),tmpStr);
							
							if (tmpStr != _T("null") && (bCheck2The || m_szCardNo.GetLength()==10  )&& tmpStr.GetLength() > 10){								
								m_szCardNo = tmpStr + m_szRegistrationPlaceKey;
							}		
							
							
							j= jResponse.At(_T("gtTheTuMoi"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szTU_NGAY2=tmpStr;
							szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"),tmpStr);
							if (tmpStr != _T("null") && bCheck2The)
							{
								szregdate=tmpStr;
								szregdate.Replace(_T("/"),_T("-"));
								m_szRegistrationDate=CDate::Convert(szregdate, ddmmyyyy, yyyymmdd);		
							}

							j= jResponse.At(_T("gtTheDenMoi"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szDEN_NGAY2=tmpStr;
							szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"),tmpStr);
							if (tmpStr != _T("null") && bCheck2The)
							{
								szexpdate=tmpStr;
								m_szExpiryDate=CDate::Convert(szexpdate, ddmmyyyy, yyyymmdd);
							}
							_tprintf(_T("\r\nMaloi: %s| Mode: %d| The moi: %d"), szMaloi, GetMode(), bCheck2The);

							
						//_tprintf(_T("\r\nMaloi: %d| Mode: %d"), nMaloi, GetMode());
							j= jResponse.At(_T("dsLichSuKCB2018"));
							dlg.m_json= j;
							jj= jResponse.At(_T("dsLichSuKT2018"));
							dlg.m_jsonHisCheck =jj;
							
							if (!tmpError.IsEmpty()) 
							{
								if (bIsEditMode) 
									tmpError.Append(_T("(Áp dụng chế độ tự động sửa)"));
								MessageBox(tmpError, _T("Cổng tiếp nhận BHXH"), MB_ICONERROR);
							}

							dlg.DoModal();
							UpdateData(false);
						} 
						else // Mã lỗi != 000, thẻ không có giá trị sử dụng
						{						
							//dlg.m_szCanhbao= szData;																					
							MessageBox( szData, _T("Cổng tiếp nhận BHXH"), MB_ICONERROR );
							//dlg.DoModal();
							if (szMaloi.Compare(_T("001")) == 0 || szMaloi.Compare(_T("002")) == 0)
							{
								return true;
							}
							return false;
						}

						m_wndSave.SetFocus();
					}
				}
			}

		}
		else
		{
			_tprintf(_T("Erro Get Topken"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		MessageBox(_T("Không thể kết nối đến cổng tiếp nhận BHXH"), _T("Cổng tiếp nhận BHXH"), MB_ICONERROR);		
	}
	
	
	return true;
}
void CHMSCardEntryDialog::RecalcPercent()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	UpdateData(TRUE);
	int nInsOffLinePayment = pMF->m_nInsOffLinePayment;
	int nPercent = 0;
	if (m_nCardDiscount > 0)
	{
		nPercent = m_nCardDiscount;
	}
	else
	{
		nPercent = m_nDiscount;
	}

	if(m_bEmergency)
	{
		m_nDisrate = nPercent;
	}
	else
	{
		if(m_bOffLine)
		{
			if(pMF->m_CompanyInfo.sc_hospital_route == 2){
				if(CompareDate(m_szAdmitDate, _T("2021-01-01")) > 0){
					nInsOffLinePayment = 100;
				}
			}			
			m_nDisrate = nPercent*nInsOffLinePayment/100;
		
		}
		else
		{
			m_nDisrate = nPercent;		
		}
	}
	if(m_bHasDisCount)
	{
		//m_nDisrate = 100;
	}

	if(m_bHasDisCount)
	{
		m_b5Years = true;
		m_wndFromDate.EnableWindow(m_b5Years);
		
	}
	else
	{
		m_b5Years = false;
		
	}

	UpdateData(FALSE);
}


void CHMSCardEntryDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
		m_jData[_T("PatientName")] =  m_szPatientName;
		m_jData[_T("Object")] =  m_szObjectKey;
		m_jData[_T("CardNo")] =  m_szCardNo;
		m_jData[_T("Code")] =  m_szCode;
		m_jData[_T("Discount")] =  m_nDiscount;
		m_jData[_T("RegistrationDate")] =  m_szRegistrationDate;
		m_jData[_T("ExpiryDate")] =  m_szExpiryDate;
		m_jData[_T("RegistrationPlace")] =  m_szRegistrationPlaceKey;
		m_jData[_T("Company")] =  m_szCompany;
		m_jData[_T("Area")] =  m_szAreaKey;
		m_jData[_T("OffLine")] =  m_bOffLine;
		m_jData[_T("Emergency")] =  m_bEmergency;
		m_jData[_T("Over5Years")] =  m_bOver5Years;
		m_jData[_T("BirthDate")] =  m_szBirthDate;
		m_jData[_T("Sex")] =  m_szSexKey;
		
		m_jData[_T("5Years")] =  m_b5Years;
		m_jData[_T("FromDate")] =  m_szFromDate;
		m_jData[_T("HasDisCount")] =  m_bHasDisCount;
		m_jData[_T("DateDisCount")] =  m_szDateDisCount;

	}
	else
	{
		bool bValue;
		m_jData[_T("PatientName")].GetValue(m_szPatientName);
		m_jData[_T("Object")].GetValue(m_szObjectKey);
		m_jData[_T("CardNo")].GetValue(m_szCardNo);
		m_jData[_T("Code")].GetValue(m_szCode);
		m_jData[_T("Discount")].GetValue(m_nDiscount);
		m_jData[_T("RegistrationDate")].GetValue(m_szRegistrationDate);
		m_jData[_T("ExpiryDate")].GetValue(m_szExpiryDate);
		m_jData[_T("RegistrationPlace")].GetValue(m_szRegistrationPlaceKey);
		m_jData[_T("Company")].GetValue(m_szCompany);
		m_jData[_T("Area")].GetValue(m_szAreaKey);
		m_jData[_T("OffLine")].GetValue(m_bOffLine);
		m_jData[_T("Emergency")].GetValue(m_bEmergency);
		m_jData[_T("Over5Years")].GetValue(bValue);
		m_bOver5Years= bValue?1:0;
		m_jData[_T("BirthDate")].GetValue(m_szBirthDate);
		m_jData[_T("Sex")].GetValue(m_szSexKey);		
		m_jData[_T("5Years")].GetValue(m_b5Years);
		m_jData[_T("FromDate")].GetValue(m_szFromDate);
		m_jData[_T("HasDisCount")].GetValue(m_bHasDisCount);
		m_jData[_T("DateDisCount")].GetValue(m_szDateDisCount);
		UpdateData(FALSE);
	}

}

void CHMSCardEntryDialog::OnDoituong_kcbSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnDoituong_kcbSelendok(){
	 
}
/*void CHMSCardEntryDialog::OnDoituong_kcbSetfocus(){
	
}*/
/*void CHMSCardEntryDialog::OnDoituong_kcbKillfocus(){
	
}*/
long CHMSCardEntryDialog::OnDoituong_kcbLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndDoituong_kcb.IsSearchKey() && !m_szDoituong_kcbKey.IsEmpty())
	{
	 szWhere.Format(_T(" and ss_code='%s' "), m_szDoituong_kcbKey);
	};
	//Cho load lên hết -> chỉnh lại tối ưu sau

	/*if(m_bOffLine)
	{
		szWhere.Format(_T(" and ss_default ='3' "));
	}
	if(m_bEmergency)
	{
		szWhere.Format(_T(" and ss_default ='2' "));
	}*/

	if(!m_bOffLine && !m_bEmergency)
		szWhere.Format(_T(" and ss_default in ('1','7') "));	
	
	szSQL.Format(_T("SELECT  ss_code as id, case when length(trim(ss_vndesc)) >2 then  ss_desc||'('||ss_vndesc||')'  ") \
				_T(" else ss_desc end as name FROM sys_sel WHERE 1=1 and ss_id='sys_ma_doituong_kcb' %s and ss_isactive='Y' ORDER BY ss_default "), szWhere);
	m_wndDoituong_kcb.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);	
	
	while(!rs.IsEOF())
	{ 
		m_wndDoituong_kcb.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	
//	return pMF->LoadSelectionList(&m_wndDoituong_kcb, _T("sys_ma_doituong_kcb"), m_szDoituong_kcbKey);
//	return 0;
}
/*void CHMSCardEntryDialog::OnDoituong_kcbAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */