#include "HMSCardEntryDialog.h"
#include "MainFrm.h"
#include "HMSCardInfoCheckIns.h"
#include "StringToken.h"
#include "DbfMapParser.h"
#include "SQLDebugger.h"
#include "HMSHelper.h"
#include <iostream>     // std::cout
#include <sstream>      // std::istringstream
#include <string>       // std::string

#include "HMSCardViewDialog.h"
#include "DbfMapParser.h"


bool ParseInsuranceCardInfo(CString szCardInfo, CStringArray& arInfo)
{
	CString szCard;
	szCard.Empty();
	for (int i = 0; i < szCardInfo.GetLength(); i++) {
		if (_istalnum(szCardInfo[i]) || szCardInfo[i] == _T('|') || szCardInfo[i] == _T('/'))
		{
			szCard += szCardInfo[i];
		}
	}
	//_tprintf(_T("\r\n%s"), szCard);
	CStringToken tk(szCard, _T("|"), false);
	CString tmpStr;
	CString szText;

	int code_page = CP_UTF8;
	for (int i = 0; i < tk.GetSize(); i++)
	{
		tk.GetAt(i, tmpStr);
		tmpStr.Trim();
		_tprintf(_T("\r\n%d:%s"), i, tmpStr);
		//if(i == 1 || i == 4 || i == 14)
		if (i == 1 || i == 4 || (i == 14 && tk.GetSize() == 15))
		{
			szText.Empty();
			std::string str;
			std::wstring wstr;
			for (int j = 0; j < tmpStr.GetLength(); j += 2)
			{
				CString hex = tmpStr.Mid(j, 2);
				if (hex == _T("00"))
				{
					hex = tmpStr.Mid(j, 4);
					j += 2;
					code_page = CP_ACP;
					std::wstringstream iss((LPCTSTR)hex);
					int temp;
					iss >> std::hex >> temp;
					wstr += static_cast<wchar_t>(temp);
				}
				else
				{
					std::wstringstream iss((LPCTSTR)hex);
					int temp;
					iss >> std::hex >> temp;
					str += static_cast<char>(temp);
					_tprintf(_T("\r\n%X"), temp);
				}


			}
			if (code_page == CP_UTF8)
			{
				WCHAR szBuffer[254];
				memset(szBuffer, _T('\0'), 254);
				::MultiByteToWideChar(code_page, 0, str.c_str(), str.length(), szBuffer, str.length());
				arInfo.Add(szBuffer);
			}
			else
			{
				arInfo.Add(wstr.c_str());
			}

		}
		else
			arInfo.Add(tmpStr);


	}
	return true;
}


/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameSetfocus();} */
	/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnPatientNameKillfocus();
	} */
static int _OnPatientNameCheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnPatientNameCheckValue();
}

static int _OnObjectSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	return ((CHMSCardEntryDialog*)pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnObjectSelendokFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnObjectSelendok();
}
/*static int _OnObjectSetfocusFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static int _OnObjectKillfocusFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectKillfocus();
}*/
static int _OnObjectLoadDataFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnObjectLoadData();
}
/*static int _OnObjectAddNewFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectAddNew();
}*/

static void _OnCardNoChangeFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnCardNoChange();
}
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoSetfocus();} */
	/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnCardNoKillfocus();
	} */
static int _OnCardNoCheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnCardNoCheckValue();
}
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCodeSetfocus();} */
	/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnCodeKillfocus();
	} */
static int _OnCodeCheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnCodeCheckValue();
}
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscountSetfocus();} */
	/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnDiscountKillfocus();
	} */
static int _OnDiscountCheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnDiscountCheckValue();
}
/*static void _OnDisrateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDisrateChange();
} */
/*static void _OnDisrateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDisrateSetfocus();} */
	/*static void _OnDisrateKillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnDisrateKillfocus();
	} */
static int _OnDisrateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnDisrateCheckValue();
}
static void _OnRegistrationDateChangeFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnRegistrationDateChange();
}
/*static void _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateSetfocus();} */
	/*static void _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateKillfocus();
	} */
static int _OnRegistrationDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnRegistrationDateCheckValue();
}
static void _OnExpiryDateChangeFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnExpiryDateChange();
}
/*static void _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpiryDateSetfocus();} */
	/*static void _OnExpiryDateKillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnExpiryDateKillfocus();
	} */
static int _OnExpiryDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnExpiryDateCheckValue();
}
static void _OnRegistrationPlaceSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSCardEntryDialog*)pWnd)->OnRegistrationPlaceSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnRegistrationPlaceSelendokFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnRegistrationPlaceSelendok();
}
/*static void _OnRegistrationPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
/*static void _OnRegistrationPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
static long _OnRegistrationPlaceLoadDataFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnRegistrationPlaceLoadData();
}
/*static void _OnRegistrationPlaceAddNewFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceAddNew();
}*/

static void  _OnRegistrationPlaceLabelClickFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnRegistrationPlaceLabelClick();

}

/*static void _OnCompanyChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompanyChange();
} */
/*static void _OnCompanySetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompanySetfocus();} */
	/*static void _OnCompanyKillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnCompanyKillfocus();
	} */
static int _OnCompanyCheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnCompanyCheckValue();
}


static void _OnCardNo2LabelSelectFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnCardNo2LabelSelect();
}
static void _OnCardNo2ChangeFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnCardNo2Change();
}
/*static void _OnCardNo2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNo2Setfocus();} */
	/*static void _OnCardNo2KillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnCardNo2Killfocus();
	} */
static int _OnCardNo2CheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnCardNo2CheckValue();
}
/*static void _OnCode2ChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCode2Change();
} */
/*static void _OnCode2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCode2Setfocus();} */
	/*static void _OnCode2KillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnCode2Killfocus();
	} */
static int _OnCode2CheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnCode2CheckValue();
}
/*static void _OnDiscount2ChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscount2Change();
} */
/*static void _OnDiscount2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscount2Setfocus();} */
	/*static void _OnDiscount2KillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnDiscount2Killfocus();
	} */
static int _OnDiscount2CheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnDiscount2CheckValue();
}
static void _OnRegDate2ChangeFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnRegDate2Change();
}
/*static void _OnRegDate2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegDate2Setfocus();} */
	/*static void _OnRegDate2KillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnRegDate2Killfocus();
	} */
static int _OnRegDate2CheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnRegDate2CheckValue();
}
static void _OnExpDate2ChangeFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnExpDate2Change();
}
/*static void _OnExpDate2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpDate2Setfocus();} */
	/*static void _OnExpDate2KillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnExpDate2Killfocus();
	} */
static int _OnExpDate2CheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnExpDate2CheckValue();
}
static void _OnRegistrationPlace2SelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSCardEntryDialog*)pWnd)->OnRegistrationPlace2SelectChange(nOldItemSel, nNewItemSel);
}
static void _OnRegistrationPlace2SelendokFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnRegistrationPlace2Selendok();
}
/*static void _OnRegistrationPlace2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlace2Killfocus();
}*/
/*static void _OnRegistrationPlace2KillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlace2Killfocus();
}*/
static long _OnRegistrationPlace2LoadDataFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnRegistrationPlace2LoadData();
}
/*static void _OnRegistrationPlace2AddNewFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlace2AddNew();
}*/
/*static void _OnCompany2ChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompany2Change();
} */
/*static void _OnCompany2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompany2Setfocus();} */
	/*static void _OnCompany2KillfocusFnc(CWnd *pWnd){
		((CHMSCardEntryDialog *)pWnd)->OnCompany2Killfocus();
	} */
static int _OnCompany2CheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnCompany2CheckValue();
}
static void _OnUpdateSelectFnc(CWnd* pWnd) {
	CHMSCardEntryDialog* pVw = (CHMSCardEntryDialog*)pWnd;
	pVw->OnUpdateSelect();
}

/*static int _OnHospitalChangeFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnHospitalChange();
} */
/*static int _OnHospitalSetfocusFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnHospitalKillfocus();} */
	/*static int _OnHospitalKillfocusFnc(CWnd *pWnd){
		return ((CHMSCardEntryDialog *)pWnd)->OnHospitalKillfocus();
	} */
	//static int _OnHospitalCheckValueFnc(CWnd *pWnd){
	//	return ((CHMSCardEntryDialog *)pWnd)->OnHospitalCheckValue();
	//} 


static int _OnHospitalSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	return ((CHMSCardEntryDialog*)pWnd)->OnHospitalSelectChange(nOldItemSel, nNewItemSel);
}
//static int _OnHospitalSelendokFnc(CWnd *pWnd){
	// return ((CHMSCardEntryDialog *)pWnd)->OnHospitalSelendok();
//}
/*static int _OnHospitalSetfocusFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnHospitalKillfocus();
}*/
/*static int _OnHospitalKillfocusFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnHospitalKillfocus();
}*/
static int _OnHospitalLoadDataFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnHospitalLoadData();
}
/*static int _OnHospitalAddNewFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnHospitalAddNew();
}*/

/*static int _OnDiseaseChangeFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDiseaseChange();
} */
/*static int _OnDiseaseSetfocusFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDiseaseKillfocus();} */
	/*static int _OnDiseaseKillfocusFnc(CWnd *pWnd){
		return ((CHMSCardEntryDialog *)pWnd)->OnDiseaseKillfocus();
	} */
static int _OnDiseaseCheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnDiseaseCheckValue();
}

static void _OnEditSelectFnc(CWnd* pWnd) {
	CHMSCardEntryDialog* pVw = (CHMSCardEntryDialog*)pWnd;
	pVw->OnEditSelect();
}

static void _OnHemaSelectFnc(CWnd* pWnd) {
	CHMSCardEntryDialog* pVw = (CHMSCardEntryDialog*)pWnd;
	pVw->OnHemaSelect();
}
static void _OnOffLineSelectFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnOffLineSelect();
}
static void _OnEmergencySelectFnc(CWnd* pWnd) {
	CHMSCardEntryDialog* pVw = (CHMSCardEntryDialog*)pWnd;
	pVw->OnEmergencySelect();
}

static void _OnOver5YearSelectFnc(CWnd* pWnd) {
	CHMSCardEntryDialog* pVw = (CHMSCardEntryDialog*)pWnd;
	pVw->OnOver5YearSelect();
}

static void _OnSaveSelectFnc(CWnd* pWnd) {
	CHMSCardEntryDialog* pVw = (CHMSCardEntryDialog*)pWnd;
	pVw->OnSaveSelect();
}
static void _OnCloseSelectFnc(CWnd* pWnd) {
	CHMSCardEntryDialog* pVw = (CHMSCardEntryDialog*)pWnd;
	pVw->OnCloseSelect();
}
static int _OnAddHMSCardEntryDialogFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnAddHMSCardEntryDialog();
}
static int _OnEditHMSCardEntryDialogFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnEditHMSCardEntryDialog();
}
static int _OnDeleteHMSCardEntryDialogFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnDeleteHMSCardEntryDialog();
}
static int _OnSaveHMSCardEntryDialogFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnSaveHMSCardEntryDialog();
}
static int _OnCancelHMSCardEntryDialogFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnCancelHMSCardEntryDialog();
}
static void _OnCheckInsSelectFnc(CWnd* pWnd) {
	CHMSCardEntryDialog* pVw = (CHMSCardEntryDialog*)pWnd;
	pVw->OnCheckInsSelect();
}
static void _OnCheckInsSelect2Fnc(CWnd* pWnd) {
	CHMSCardEntryDialog* pVw = (CHMSCardEntryDialog*)pWnd;
	pVw->OnCheckInsSelect2();
}
static int _OnDisrate2CheckValueFnc(CWnd* pWnd) {
	return ((CHMSCardEntryDialog*)pWnd)->OnDisrate2CheckValue();
}

static void _OnOffLine2SelectFnc(CWnd* pWnd) {
	((CHMSCardEntryDialog*)pWnd)->OnOffLine2Select();
}

static int _OnDateOrver5YearCheckValueFnc(CWnd* pWnd)
{
	return ((CHMSCardEntryDialog*)pWnd)->OnDateOrver5YearCheckValue();
}
static void _OnHasFreePaperSelectFnc(CWnd* pWnd)
{
	((CHMSCardEntryDialog*)pWnd)->OnHasFreePaperSelect();
}
static int _OnDateDisCountCheckValueFnc(CWnd* pWnd)
{
	return ((CHMSCardEntryDialog*)pWnd)->OnDateDisCountCheckValue();
}

static long _OnDoituong_kcbLoadDataFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDoituong_kcbLoadData();
}

static long _OnAreaLoadDataFnc(CWnd *pWnd)
{
	return ((CHMSCardEntryDialog *)pWnd)->OnAreaLoadData();
}

CHMSCardEntryDialog::CHMSCardEntryDialog(CWnd* pParent, int nMode, bool bEnableObj) :
	CGuiDialog(pParent)
{
	CGuiDialog::SetMode(nMode);
	SetDefaultValues();
	m_nDlgWidth = 400;
	m_nDlgHeight = 250;

	m_szxCardNo.Empty();
	m_szxObject.Empty();
	m_szxIssueDate.Empty();
	m_szxIssuePlace.Empty();
	m_bEnableObjectType = bEnableObj;

	m_bPassExpDate = false;
	m_bOffLine = FALSE;
	m_bEmergency = FALSE;
	m_nDisrate = 0;
	m_bOver5Year = FALSE;
	m_bOver5YearOpt = FALSE;
	m_bInsCheck1stCard = false;
	m_bInsCheck2ndCard = false;
}
CHMSCardEntryDialog::~CHMSCardEntryDialog()
{
}
void CHMSCardEntryDialog::OnCreateComponents()
{
	m_wndTransferInformation.Create(this, _T("TransferInformation"), 5, 549, 510, 634);
	m_wndSecondaryCardInformation.Create(this, _T("Additional card information"), 5, 336, 510, 511);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 5, 130, 30);
	m_wndPatientName.Create(this, 135, 5, 510, 30);
	m_wndUpdate.Create(this, _T("Update"), 31, 31, 31, 31);
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 60, 130, 85);
	m_wndCardNo.Create(this, 135, 60, 390, 85);
	m_wndCardNumberInformation.Create(this, _T("Primary card information"), 5, 35, 510, 330);
	m_wndCheckIns.Create(this, _T("Check Ins"), 395, 60, 505, 85);
	m_wndPercentLabel.Create(this, _T("%"), 475, 89, 505, 114);
	m_wndCodeLabel.Create(this, _T("Code"), 10, 90, 130, 115);
	m_wndCode.Create(this, 135, 90, 185, 115);
	m_wndDiscount.Create(this, 190, 90, 245, 115);
	m_wndDiscountLabel.Create(this, _T("Discount"), 250, 90, 390, 115);
	m_wndDisrate.Create(this, 395, 90, 469, 115);
	m_wndRegistrationDateLabel.Create(this, _T("Registration Date"), 10, 120, 130, 145);
	m_wndRegistrationDate.Create(this, 135, 120, 245, 145);
	m_wndExpiryDateLabel.Create(this, _T("Expiry Date"), 250, 120, 390, 145);
	m_wndExpiryDate.Create(this, 395, 120, 505, 145);
	m_wndRegistrationPlaceLabel.Create(this, _T("Registration Place"), 10, 150, 130, 175);
	m_wndRegistrationPlace.Create(this, 135, 150, 505, 175);
	m_wndCompanyLabel.Create(this, _T("Company"), 10, 180, 130, 205);
	m_wndCompany.Create(this, 135, 180, 505, 205);
	m_wndAreaLabel.Create(this, _T("Khu vực"), 11, 210, 131, 235);
	m_wndArea.Create(this,136, 210, 506, 235); 
	m_wndDoituong_kcbLabel.Create(this, _T("Mã ĐT KCB"), 11, 240, 131, 265);
	m_wndDoituong_kcb.Create(this,136, 240, 506, 265); 
	m_wndOffLine.Create(this, _T("Out Line"), 10, 270, 130, 295);
	m_wndEmergency.Create(this, _T("Emergency"), 135, 270, 245, 295);
	m_wndOver5Year.Create(this, _T("Trên 5 năm"), 250, 270, 390, 295);
	m_wndOver5Year.ModifyStyle(WS_TABSTOP, 0);
	m_wndDateOrver5Year.Create(this,395, 270, 505, 295); 
	m_wndOver5YearOpt.Create(this, _T("Trên 5 năm(PTTT)"), 10, 300, 130, 325);
	m_wndHasFreePaper.Create(this, _T("Có giấy không cùng chi trả từ:"), 135, 300, 390, 325);
	m_wndHasFreePaper.ModifyStyle(WS_TABSTOP, 0);
	m_wndDateDisCount.Create(this,395, 300, 505, 325); 
	m_wndCardNo2Label.Create(this, _T("Card No"), 10, 361, 130, 386);
	m_wndCardNo2.Create(this,135, 361, 390, 386); 
	m_wndCheckIns2.Create(this, _T("Check Ins"), 395, 362, 505, 387);
	m_wndCode2Label.Create(this, _T("Code"), 10, 391, 130, 416);
	m_wndCode2.Create(this,135, 391, 185, 416); 
	m_wndDiscount2.Create(this,190, 391, 245, 416); 
	m_wndDiscount2Label.Create(this, _T("Discount"), 250, 391, 390, 416);
	m_wndDisrate2.Create(this,395, 391, 469, 416); 
	m_wndPercent2Label.Create(this, _T("%"), 474, 391, 504, 416);
	m_wndRegDate2Label.Create(this, _T("Registration Date"), 10, 421, 130, 446);
	m_wndRegDate2.Create(this,135, 421, 245, 446); 
	m_wndExpDate2Label.Create(this, _T("Expiry Date"), 250, 421, 390, 446);
	m_wndExpDate2.Create(this,395, 421, 505, 446); 
	m_wndRegistrationPlace2Label.Create(this, _T("Registration Place"), 10, 451, 130, 476);
	m_wndRegistrationPlace2.Create(this,135, 451, 505, 476); 
	m_wndCompany2Label.Create(this, _T("Company"), 10, 481, 130, 506);
	m_wndCompany2.Create(this,135, 481, 505, 506); 
	m_wndOffLine2.Create(this, _T("Out Line"), 5, 517, 130, 542);
	m_wndHospitalLabel.Create(this, _T("Hospital"), 10, 574, 130, 599);
	m_wndHospital.Create(this,135, 574, 505, 599); 
	m_wndDiseaseLabel.Create(this, _T("Disease"), 10, 604, 130, 629);
	m_wndDisease.Create(this,135, 604, 505, 629); 
	m_wndSave.Create(this, _T("&Apply"), 339, 639, 419, 664);
	m_wndClose.Create(this, _T("&Close"), 424, 639, 504, 664);

	
}
void CHMSCardEntryDialog::OnInitializeComponents() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szCardFormat;
	

	m_wndCardNo.SetLimitText(20);
	m_wndCardNo.SetTextColor(RGB(0, 0, 255));
	m_wndCardNo.SetCheckValue(true);
	m_wndCardNo.ModifyStyle(0, ES_UPPERCASE);
	//	szCardFormat = pMF->m_wndRegistration.m_wndObject.GetCurrent(3);
	//	m_wndCardNo.SetMask(szCardFormat);
	m_wndDiscount.SetLimitText(3);
	m_wndDiscount.SetReadOnly(true);
	m_wndDiscount2.SetReadOnly(true);
	//	m_wndDiscount.SetCheckValue(true);
		//m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetCheckValue(true);
	//m_wndExpiryDate.SetMin(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetCheckValue(true);
	m_wndRegistrationPlaceLabel.SetHyperlink(true);

	m_wndRegistrationPlace.LimitText(128);
	m_wndPatientName.SetReadOnly(true);
	m_wndCode.SetLimitText(3);
	m_wndCode.SetReadOnly(true);
	m_wndCode2.SetReadOnly(true);
	m_wndDisrate.SetReadOnly(true);
	m_wndDisrate2.SetReadOnly(true);
	m_wndOffLine.ModifyStyle(WS_TABSTOP, 0);
	m_wndOffLine2.ModifyStyle(WS_TABSTOP, 0);

	m_wndHospital.SetCheckValue(true);
	m_wndDisease.SetCheckValue(true);

	//m_wndDateOrver5Year.SetCheckValue(true);
	m_wndDateDisCount.SetCheckValue(true);

	m_wndRegistrationPlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndRegistrationPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndHospital.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndHospital.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);


	m_wndRegistrationPlace2.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndRegistrationPlace2.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndArea.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndArea.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDoituong_kcb.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoituong_kcb.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_hms_cardTbl.SetTableName(_T("hms_card"));
	m_hms_cardTbl.AddField(_T("hc_updatedby"), dfText, 15);
	m_hms_cardTbl.AddField(_T("hc_updateddate"), dfDateTime);
	m_hms_cardTbl.AddField(_T("hc_patientno"), dfLong);
	m_hms_cardTbl.AddField(_T("hc_docno"), dfLong);
	m_hms_cardTbl.AddField(_T("hc_cardno"), dfText, 25);
	m_hms_cardTbl.AddField(_T("hc_idx"), dfInteger);
	m_hms_cardTbl.AddField(_T("hc_regdate"), dfDate);
	m_hms_cardTbl.AddField(_T("hc_expdate"), dfDate);
	m_hms_cardTbl.AddField(_T("hc_regcode"), dfText, 11);
	m_hms_cardTbl.AddField(_T("hc_company"), dfText, 254);
	m_hms_cardTbl.AddField(_T("hc_code"), dfText, 3);
	m_hms_cardTbl.AddField(_T("hc_discount"), dfInteger);
	m_hms_cardTbl.AddField(_T("hc_line"), dfInteger);
	m_hms_cardTbl.AddField(_T("hc_groupid"), dfInteger);
	m_hms_cardTbl.AddField(_T("hc_area"), dfText, 3); 

	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_cardno"), dfText, 25);
	m_hms_docTbl.AddField(_T("hd_insregdate"), dfDate);
	m_hms_docTbl.AddField(_T("hd_disrate"), dfInteger);
	m_hms_docTbl.AddField(_T("hd_insline"), dfText, 1);
	m_hms_docTbl.AddField(_T("hd_emergency"), dfText, 1);
	m_hms_docTbl.AddField(_T("hd_transplace"), dfText, 245);
	m_hms_docTbl.AddField(_T("hd_transdiagn"), dfText, 245);
	m_hms_docTbl.AddField(_T("hd_transplaceid"), dfText, 7);
	//Định nghĩa 4 trường liên quan đến việc hưởng 5 năm liên tục

	m_hms_docTbl.AddField(_T("hd_over5year"), dfText, 1);//Được hưởng hay không?
	m_hms_docTbl.AddField(_T("HD_OVER5YEARAPPLYDATE"), dfDate); //Thời gian được hưởng 5 năm liên tục
	m_hms_docTbl.AddField(_T("hd_hasfeepaper"), dfText, 1); //Có giấy miễn cùng chi trả hay không?
	m_hms_docTbl.AddField(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"), dfDate); //Thời gian được miễn cùng chi trả
	m_hms_docTbl.AddField(_T("HD_MA_DOITUONG_KCB"), dfText, 3);


	m_wndCardNo2.ModifyStyle(0, ES_UPPERCASE);
	m_wndCardNo2.SetLimitText(20);

	if(pMF->GetProp(_T("hms_use_130"))== _T("Y"))
	{
		m_wndDoituong_kcb.EnableWindow(true);
	}
	m_wndDoituong_kcb.SetCheckValue(true);
	

}
void CHMSCardEntryDialog::OnSetWindowEvents() {
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//	m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
		//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
		//m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
		//m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
		//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	m_wndCardNo2Label.SetEvent(WE_CLICK, _OnCardNo2LabelSelectFnc);
	m_wndCardNo2.SetEvent(WE_CHANGE, _OnCardNo2ChangeFnc);
	//m_wndCardNo2.SetEvent(WE_SETFOCUS, _OnCardNo2SetfocusFnc);
	//m_wndCardNo2.SetEvent(WE_KILLFOCUS, _OnCardNo2KillfocusFnc);
	m_wndCardNo2.SetEvent(WE_CHECKVALUE, _OnCardNo2CheckValueFnc);
	//m_wndCode2.SetEvent(WE_CHANGE, _OnCode2ChangeFnc);
	//m_wndCode2.SetEvent(WE_SETFOCUS, _OnCode2SetfocusFnc);
	//m_wndCode2.SetEvent(WE_KILLFOCUS, _OnCode2KillfocusFnc);
	m_wndCode2.SetEvent(WE_CHECKVALUE, _OnCode2CheckValueFnc);
	//m_wndDiscount2.SetEvent(WE_CHANGE, _OnDiscount2ChangeFnc);
	//m_wndDiscount2.SetEvent(WE_SETFOCUS, _OnDiscount2SetfocusFnc);
	//m_wndDiscount2.SetEvent(WE_KILLFOCUS, _OnDiscount2KillfocusFnc);
	m_wndDiscount2.SetEvent(WE_CHECKVALUE, _OnDiscount2CheckValueFnc);
	m_wndRegDate2.SetEvent(WE_CHANGE, _OnRegDate2ChangeFnc);
	//m_wndRegDate2.SetEvent(WE_SETFOCUS, _OnRegDate2SetfocusFnc);
	//m_wndRegDate2.SetEvent(WE_KILLFOCUS, _OnRegDate2KillfocusFnc);
	m_wndRegDate2.SetEvent(WE_CHECKVALUE, _OnRegDate2CheckValueFnc);
	m_wndExpDate2.SetEvent(WE_CHANGE, _OnExpDate2ChangeFnc);
	//m_wndExpDate2.SetEvent(WE_SETFOCUS, _OnExpDate2SetfocusFnc);
	//m_wndExpDate2.SetEvent(WE_KILLFOCUS, _OnExpDate2KillfocusFnc);
	m_wndExpDate2.SetEvent(WE_CHECKVALUE, _OnExpDate2CheckValueFnc);
	m_wndRegistrationPlace2.SetEvent(WE_SELENDOK, _OnRegistrationPlace2SelendokFnc);
	//m_wndRegistrationPlace2.SetEvent(WE_SETFOCUS, _OnRegistrationPlace2SetfocusFnc);
	//m_wndRegistrationPlace2.SetEvent(WE_KILLFOCUS, _OnRegistrationPlace2KillfocusFnc);
	m_wndRegistrationPlace2.SetEvent(WE_SELCHANGE, _OnRegistrationPlace2SelectChangeFnc);
	m_wndRegistrationPlace2.SetEvent(WE_LOADDATA, _OnRegistrationPlace2LoadDataFnc);
	//m_wndRegistrationPlace2.SetEvent(WE_ADDNEW, _OnRegistrationPlace2AddNewFnc);
	//m_wndCompany2.SetEvent(WE_CHANGE, _OnCompany2ChangeFnc);
	//m_wndCompany2.SetEvent(WE_SETFOCUS, _OnCompany2SetfocusFnc);
	//m_wndCompany2.SetEvent(WE_KILLFOCUS, _OnCompany2KillfocusFnc);
	m_wndCompany2.SetEvent(WE_CHECKVALUE, _OnCompany2CheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
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
	m_wndOffLine.SetEvent(WE_CLICK, _OnOffLineSelectFnc);
	m_wndOffLine2.SetEvent(WE_CLICK, _OnOffLine2SelectFnc);
	m_wndEmergency.SetEvent(WE_CLICK, _OnEmergencySelectFnc);
	m_wndOver5Year.SetEvent(WE_CLICK, _OnOver5YearSelectFnc);
	m_wndHasFreePaper.SetEvent(WE_CLICK, _OnHasFreePaperSelectFnc);
	m_wndDateOrver5Year.SetEvent(WE_CHECKVALUE, _OnDateOrver5YearCheckValueFnc);
	m_wndDateDisCount.SetEvent(WE_CHECKVALUE, _OnDateDisCountCheckValueFnc);

	//m_wndHospital.SetEvent(WE_CHANGE, _OnHospitalChangeFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	//m_wndHospital.SetEvent(WE_CHECKVALUE, _OnHospitalCheckValueFnc);

	//m_wndHospital.SetEvent(WE_SELENDOK, _OnHospitalSelendokFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	m_wndHospital.SetEvent(WE_SELCHANGE, _OnHospitalSelectChangeFnc);
	m_wndHospital.SetEvent(WE_LOADDATA, _OnHospitalLoadDataFnc);
	//m_wndHospital.SetEvent(WE_ADDNEW, _OnHospitalAddNewFnc);

	//m_wndDisease.SetEvent(WE_CHANGE, _OnDiseaseChangeFnc);
	//m_wndDisease.SetEvent(WE_SETFOCUS, _OnDiseaseSetfocusFnc);
	//m_wndDisease.SetEvent(WE_KILLFOCUS, _OnDiseaseKillfocusFnc);
	m_wndDisease.SetEvent(WE_CHECKVALUE, _OnDiseaseCheckValueFnc);

	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//if(pMF->m_CompanyInfo.sc_provid == 603 && m_szCardNo.Find(_T("HN"))!= -1)
	//{
	//	m_wndHemaFlag.SetEvent(WE_CLICK, _OnHemaSelectFnc);
	//}
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndCheckIns.SetEvent(WE_CLICK, _OnCheckInsSelectFnc);
	m_wndCheckIns2.SetEvent(WE_CLICK, _OnCheckInsSelect2Fnc);

	m_wndDoituong_kcb.SetEvent(WE_LOADDATA, _OnDoituong_kcbLoadDataFnc);
	m_wndArea.SetEvent(WE_LOADDATA, _OnAreaLoadDataFnc);

	CString szCaption;
	if (m_bEnableObjectType)
	{
		m_wndPatientName.ShowWindow(SW_HIDE);
		//m_wndObject.ShowWindow(SW_SHOW);
		//m_wndObject.SetReadOnly(true);
		TranslateString(_T("Add new card"), szCaption);
	}
	else
	{
		m_wndPatientName.ShowWindow(SW_SHOW);
		/*m_wndObject.ShowWindow(SW_HIDE);
		m_wndObject.SetReadOnly(false);*/
		TranslateString(_T("Edit card information"), szCaption);
	}
	SetWindowText(szCaption);

	m_szCompany = m_szWorkPlace;
	if (m_nPatientNo > 0)
	{
		GetDataToScreen();
	}


	m_bEditEmergency = false;
	//	if(pMF->CheckPermission(_T("01.19")))
	{
		m_bEditEmergency = true;
	}

	//Quyen cho phep sua ngay het han the BHYT
	if (pMF->CheckPermission(_T("01.18")))
	{
		m_bPassExpDate = true;
	}
	RecalcPercent();

	SetMode(GetMode());
	m_insCheckin.Laythongtinketnoi();

	EnableSecondaryCard(m_bCardNo2Label);
}
void CHMSCardEntryDialog::OnDoDataExchange(CDataExchange* pDX) {
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_Text(pDX, m_wndDisrate.GetDlgCtrlID(), m_nDisrate);
	DDX_Text(pDX, m_wndDisrate2.GetDlgCtrlID(), m_nDisrate2);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_TextEx(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlaceKey);
	DDX_Text(pDX, m_wndCompany.GetDlgCtrlID(), m_szCompany);
	DDX_Check(pDX, m_wndOffLine.GetDlgCtrlID(), m_bOffLine);
	DDX_Check(pDX, m_wndOffLine2.GetDlgCtrlID(), m_bOffLine2);
	DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);

	DDX_Check(pDX, m_wndOver5YearOpt.GetDlgCtrlID(), m_bOver5YearOpt);
	DDX_Check(pDX, m_wndOver5Year.GetDlgCtrlID(), m_bOver5Year);
	DDX_TextEx(pDX, m_wndDateOrver5Year.GetDlgCtrlID(), m_szDateOrver5Year);
	DDX_Check(pDX, m_wndHasFreePaper.GetDlgCtrlID(), m_bHasFreePaper);
	DDX_TextEx(pDX, m_wndDateDisCount.GetDlgCtrlID(), m_szDateDisCount);

	DDX_Check(pDX, m_wndCardNo2Label.GetDlgCtrlID(), m_bCardNo2Label);
	DDX_Text(pDX, m_wndCardNo2.GetDlgCtrlID(), m_szCardNo2);
	DDX_Text(pDX, m_wndCode2.GetDlgCtrlID(), m_szCode2);
	DDX_Text(pDX, m_wndDiscount2.GetDlgCtrlID(), m_nDiscount2);
	DDX_TextEx(pDX, m_wndRegDate2.GetDlgCtrlID(), m_szRegDate2);
	DDX_TextEx(pDX, m_wndExpDate2.GetDlgCtrlID(), m_szExpDate2);
	DDX_TextEx(pDX, m_wndRegistrationPlace2.GetDlgCtrlID(), m_szRegistrationPlace2Key);
	DDX_Text(pDX, m_wndCompany2.GetDlgCtrlID(), m_szCompany2);

	DDX_TextEx(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospital);
	DDX_Text(pDX, m_wndDisease.GetDlgCtrlID(), m_szDisease);
	DDX_TextEx(pDX, m_wndArea.GetDlgCtrlID(), m_szAreaKey);
	DDX_TextEx(pDX, m_wndDoituong_kcb.GetDlgCtrlID(), m_szDoituong_kcbKey);
}
void CHMSCardEntryDialog::GetDataToScreen() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (m_bEnableObjectType)
		return;

	szSQL.Format(_T(" SELECT hc_cardno, hc_idx, TO_DATE(hc_regdate) as hc_regdate, ") \
		_T(" TO_DATE(hc_expdate) as hc_expdate, hc_regcode, hc_company, hc_code, hc_discount, hc_groupid,") \
				 _T(" hd_object obj_id, get_patientname(hd_docno) patient_name, hp_birthdate, hc_area, HD_MA_DOITUONG_KCB as ma_doituong_kcb") \
		_T(" FROM hms_card  ") \
		_T(" LEFT JOIN hms_doc ON (hd_patientno = hc_patientno AND hc_idx = hd_cardidx) ") \
		_T(" LEFT JOIN hms_patient ON (hp_patientno = hd_patientno) ") \
		_T(" WHERE hd_patientno=%ld AND hd_docno =  %ld"), m_nPatientNo, pMF->m_nDocumentNo);

	rs.ExecSQL(szSQL);
	/*if(rs.IsEOF())
	{
		szSQL.Format(_T(" SELECT hc_cardno, hd_cardidx, TO_DATE(hc_regdate) as hc_regdate, TO_DATE(hc_expdate) as hc_expdate, hc_regcode, hc_company, hc_code, hc_discount, hc_groupid,") \
					 _T(" hd_object obj_id, get_patientname(hd_docno) patient_name") \
					 _T(" FROM hms_card LEFT JOIN hms_doc ON (hd_patientno = hc_patientno AND hc_idx = hd_cardidx) WHERE hc_patientno=%ld and hc_isprimary='Y' "), m_nPatientNo);
		rs.ExecSQL(szSQL);
	}*/
	//_msg(_T("%s"), szSQL);
	if (!rs.IsEOF()) {
		rs.GetValue(_T("hc_cardno"), m_szCardNo);
		rs.GetValue(_T("hc_idx"), m_nCardIdx);
		rs.GetValue(_T("hc_regdate"), m_szRegistrationDate);
		rs.GetValue(_T("hc_expdate"), m_szExpiryDate);
		rs.GetValue(_T("hc_regcode"), m_szRegistrationPlaceKey);
		rs.GetValue(_T("hc_company"), m_szCompany);
		rs.GetValue(_T("hc_code"), m_szCode);
		rs.GetValue(_T("hc_discount"), m_nCardDiscount);
		rs.GetValue(_T("hc_groupid"), m_nGroupID);
		rs.GetValue(_T("patient_name"), m_szPatientName);
		rs.GetValue(_T("obj_id"), m_szObjectKey);
		rs.GetValue(_T("hp_birthdate"), m_szBirthDate);
		rs.GetValue(_T("hc_area"), m_szAreaKey);
		rs.GetValue(_T("ma_doituong_kcb"), m_szDoituong_kcbKey);

		m_szCompany.Trim();
		if (m_szCompany.IsEmpty())
			m_szCompany = m_szWorkPlace;

		m_nDiscount = m_nCardDiscount;

		szSQL.Format(_T("SELECT hd_emergency, hd_disrate,hd_xrate, hd_transdiagn, hd_transplaceid, hd_insline,HD_INSLINEEX, ho_type as objecttype,") \
			_T("hd_over5year, HD_OVER5YEARAPPLYDATE, hd_hasfeepaper, HD_OVER5YEARDISCOUNTAPPLYDATE, hd_xcardidx  ") \
			_T("FROM hms_doc ") \
			_T("LEFT JOIN hms_object ON(ho_id=hd_object)") \
			_T("WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
		CString tmpStr, szOfline, szOfline2, szEmergency;
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("hd_emergency"), szEmergency);
			rs.GetValue(_T("hd_disrate"), m_nDisrate);
			rs.GetValue(_T("hd_xrate"), m_nDisrate2);
			rs.GetValue(_T("hd_insline"), szOfline);
			rs.GetValue(_T("HD_INSLINEEX"), szOfline2);
			rs.GetValue(_T("objecttype"), m_szObjectType);
			rs.GetValue(_T("hd_transdiagn"), m_szDisease);
			rs.GetValue(_T("hd_transplaceid"), m_szHospital);
			rs.GetValue(_T("hd_over5year"), tmpStr);

			m_bOver5Year = FALSE;
			m_bOver5YearOpt = FALSE;
			m_bHasFreePaper = FALSE;

			if (tmpStr == _T("Y"))
				m_bOver5Year = TRUE;
			if (tmpStr == _T("O"))
				m_bOver5YearOpt = TRUE;

			rs.GetValue(_T("hd_hasfeepaper"), tmpStr);
			if (tmpStr == _T("Y"))
				m_bHasFreePaper = TRUE;

			rs.GetValue(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"), tmpStr);
			m_szDateDisCount = tmpStr;

			rs.GetValue(_T("HD_OVER5YEARAPPLYDATE"), tmpStr);
			m_szDateOrver5Year = tmpStr;



			rs.GetValue(_T("hd_xcardidx"), m_nxCardIdx);


			if (m_szPatientName.IsEmpty())
				m_szPatientName = pMF->m_wndPatientDocument.m_szPatientName;

			if (szOfline == _T("Y"))
				m_bOffLine = TRUE;
			else
				m_bOffLine = FALSE;

			if (szOfline2 == _T("Y"))
				m_bOffLine2 = TRUE;
			else
				m_bOffLine2 = FALSE;

			if (szEmergency == _T("Y"))
				m_bEmergency = TRUE;
			else
				m_bEmergency = FALSE;
		}

		int nPercent = m_nCardDiscount;

		/*if(m_bOver5Year)
		{
			nPercent = 100;
		}*/

		if (m_bEmergency)
		{
			m_nDisrate = nPercent;
		}
		else
		{
			if (m_bOffLine)
				m_nDisrate = nPercent * pMF->m_nInsOffLinePayment / 100;
		}


		if (m_bHasFreePaper)
		{
			nPercent = 100;
			m_wndDateDisCount.EnableWindow(TRUE);
		}

		if (m_bOver5Year)
		{
			//m_wndDateOrver5Year.EnableWindow(TRUE);
		}

		m_szxCardNo = m_szCardNo;
		m_bOffLineOld = m_bOffLine;
		m_szRegistrationDateOld = m_szRegistrationDate;
		m_szExpiryDateOld = m_szExpiryDate;



		szSQL.Format(_T(" SELECT * FROM hms_card  WHERE hc_patientno=%ld and hc_idx=%ld"), m_nPatientNo, m_nxCardIdx);

		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			m_bCardNo2Label = TRUE;
			rs.GetValue(_T("hc_cardno"), m_szCardNo2);
			rs.GetValue(_T("hc_discount"), m_nDiscount2);
			rs.GetValue(_T("hc_code"), m_szCode2);
			rs.GetValue(_T("hc_regcode"), m_szRegistrationPlace2Key);
			rs.GetValue(_T("hc_regdate"), m_szRegDate2);
			rs.GetValue(_T("hc_expdate"), m_szExpDate2);
			rs.GetValue(_T("hc_company"), m_szCompany2);
		}

		else
		{
			m_bCardNo2Label = FALSE;
		}
		UpdateData(false);
	}


}
void CHMSCardEntryDialog::GetScreenToData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_hms_cardTbl.SetValue(_T("hc_updatedby"), pMF->GetCurrentUser());
	m_hms_cardTbl.SetValue(_T("hc_updateddate"), pMF->GetSysDateTime());
	m_hms_cardTbl.SetValue(_T("hc_patientno"), pMF->m_nPatientNo);
	m_hms_cardTbl.SetValue(_T("hc_cardno"), m_szCardNo);
	m_hms_cardTbl.SetValue(_T("hc_idx"), m_nIndex);
	m_hms_cardTbl.SetValue(_T("hc_regdate"), m_szRegistrationDate);
	m_hms_cardTbl.SetValue(_T("hc_expdate"), m_szExpiryDate);
	m_hms_cardTbl.SetValue(_T("hc_regcode"), m_szRegistrationPlaceKey);
	m_hms_cardTbl.SetValue(_T("hc_company"), m_szCompany);
	m_hms_cardTbl.SetValue(_T("hc_code"), m_szCode);
	m_hms_cardTbl.SetValue(_T("hc_discount"), m_nDiscount);
	m_hms_cardTbl.SetValue(_T("hc_groupid"), m_nGroupID);
	m_hms_cardTbl.SetValue(_T("HC_AREA"), m_szAreaKey);

	CString tmpStr;
	tmpStr = _T("N");
	if (m_bOver5Year)
		tmpStr = _T("Y");
	else if (m_bOver5YearOpt)
		tmpStr = _T("O");
	m_hms_cardTbl.SetValue(_T("hc_over5year"), tmpStr);


	m_hms_docTbl.SetValue(_T("hd_cardno"), m_szCardNo);
	m_hms_docTbl.SetValue(_T("hd_insregdate"), m_szRegistrationDate);
	m_hms_docTbl.SetValue(_T("hd_disrate"), m_nDisrate);
	m_hms_docTbl.SetValue(_T("hd_insline"), m_bOffLine ? _T("Y") : _T("N"));
	m_hms_docTbl.SetValue(_T("hd_emergency"), m_bEmergency ? _T("Y") : _T("N"));
	m_hms_docTbl.SetValue(_T("hd_transplace"), m_wndHospital.GetCurrent(1));
	m_hms_docTbl.SetValue(_T("hd_transplaceid"), m_szHospital);
	m_hms_docTbl.SetValue(_T("hd_transdiagn"), m_szDisease);
	m_hms_docTbl.SetValue(_T("HD_INSLINEEX"), m_bOffLine2 ? _T("Y") : _T("N"));

	//	CString tmpStr;
	tmpStr = _T("N");
	if (m_bOver5Year)
		tmpStr = _T("Y");
	else if (m_bOver5YearOpt)
		tmpStr = _T("O");

	m_hms_docTbl.SetValue(_T("hd_over5year"), tmpStr);
	m_hms_docTbl.SetValue(_T("HD_OVER5YEARAPPLYDATE"), m_szDateOrver5Year);
	m_hms_docTbl.SetValue(_T("HD_MA_DOITUONG_KCB"), m_szDoituong_kcbKey);

	if (m_bHasFreePaper)
	{
		tmpStr = _T("Y");
		m_hms_docTbl.SetValue(_T("hd_hasfeepaper"), tmpStr);
		m_hms_docTbl.SetValue(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"), m_szDateDisCount);
	}
	else
	{
		m_hms_docTbl.SetValue(_T("hd_hasfeepaper"), _T("N"));
	}

}
void CHMSCardEntryDialog::SetDefaultValues()
{

	m_szPatientName.Empty();
	m_szCardNo.Empty();
	m_szCode.Empty();
	m_nDiscount = 0;
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlaceKey.Empty();
	m_szCompany.Empty();
	m_bOffLine = FALSE;
	m_bOffLine2 = FALSE;
	m_bEmergency = FALSE;
	m_nIndex = 0;
	//m_szObjectKey = _T("2");
	m_bCardNo2Label = FALSE;
	m_szCardNo2.Empty();
	m_szCode2.Empty();
	m_nDiscount2 = 0;
	m_szRegDate2.Empty();
	m_szExpDate2.Empty();
	m_szRegistrationPlace2Key.Empty();
	m_szCompany2.Empty();
	m_szDateOrver5Year.Empty();
	m_szDateDisCount.Empty();
	m_szAreaKey.Empty();
	m_szDoituong_kcbKey.Empty();

}
int CHMSCardEntryDialog::SetMode(int nMode) {
	int nOldMode = GetMode();
	CGuiDialog::SetMode(nMode);


	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	switch (nMode) {
	case VM_ADD:
		EnableControls(TRUE);
		EnableButtons(TRUE, 0, 1, -1);
		/*m_szRegistrationDate = pMF->m_szInsRegDate;
		m_szExpiryDate = pMF->m_szInsExpDate;*/
		break;
	case VM_EDIT:
		EnableControls(TRUE);
		EnableButtons(TRUE, 0, 1, -1);
		break;
	case VM_VIEW:
		EnableControls(FALSE);
		EnableButtons(FALSE, 0, -1);
		m_wndOffLine.EnableWindow(FALSE);
		m_wndEmergency.EnableWindow(FALSE);
		m_wndCardNo2Label.EnableWindow(FALSE);
		m_wndSave.ShowWindow(SW_HIDE);
		m_wndUpdate.ShowWindow(SW_HIDE);
		break;
	};


	if (!m_bEditEmergency)
	{
		m_wndEmergency.EnableWindow(FALSE);
	}
	else
	{
		//Bỏ comment theo ticket 570
		//m_wndOffLine.EnableWindow(FALSE);
	}
	if (m_bOffLine)
	{
		m_wndHospital.EnableWindow(FALSE);
		m_wndDisease.EnableWindow(FALSE);
	}


	m_wndUpdate.ShowWindow(SW_HIDE);
	m_wndCheckIns2.EnableWindow(TRUE);
	m_wndSave.EnableWindow(TRUE);
	m_wndClose.EnableWindow(TRUE);

	m_wndOver5YearOpt.EnableWindow(FALSE);
	m_wndDateOrver5Year.EnableWindow(FALSE);
	m_wndDateDisCount.EnableWindow(FALSE);
	m_wndOver5Year.EnableWindow(FALSE);
	m_wndDateOrver5Year.EnableWindow(FALSE);


	/*if(!pMF->CheckPermission(_T("TM.900.5")))
	{
		m_wndHasFreePaper.SetReadOnly(true);
		m_wndDateDisCount.SetReadOnly(true);
	}*/

	UpdateData(FALSE);
	return nOldMode;
}
/*void CHMSCardEntryDialog::OnPatientNameChange(){

} */
/*void CHMSCardEntryDialog::OnPatientNameSetfocus(){

} */
/*void CHMSCardEntryDialog::OnPatientNameKillfocus(){

} */
int CHMSCardEntryDialog::OnPatientNameCheckValue() {
	return 0;
}

/*void CHMSCardEntryDialog::OnDisrateChange(){

} */
/*void CHMSCardEntryDialog::OnDisrateSetfocus(){

} */
/*void CHMSCardEntryDialog::OnDisrateKillfocus(){

} */
int CHMSCardEntryDialog::OnDisrateCheckValue() {
	return 0;
}
int CHMSCardEntryDialog::OnDisrate2CheckValue() {
	return 0;
}

int CHMSCardEntryDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//UpdateData(TRUE);
	return 0;
}
int CHMSCardEntryDialog::OnObjectSelendok()
{
	return 0;
}
/*int CHMSCardEntryDialog::OnObjectSetfocus(){
	 return 0;
}*/
/*int CHMSCardEntryDialog::OnObjectKillfocus(){
	 return 0;
}*/
int CHMSCardEntryDialog::OnObjectLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//CRecord rs(&pMF->m_db);
	//CString szSQL, szWhere, tmpStr;
	//szWhere.Empty();
	//if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	//	szWhere.Format(_T(" AND ho_id='%s' "), m_szObjectKey);
	//};
	//if(!pMF->m_UserInfo.su_hms_xobject.IsEmpty())
	//	szWhere.AppendFormat(_T(" AND ho_id in(%s) "), pMF->m_UserInfo.su_hms_xobject);
	//if(GetMode() != VM_ADD)
	//	szWhere.AppendFormat(_T(" and ho_type='%s' "), m_szObjectType);

	//szSQL.Format(_T("SELECT * FROM hms_object WHERE ho_active='Y' and ho_hascard='Y' %s ORDER BY ho_id "), szWhere);


	//m_wndObject.DeleteAllItems(); 
	//int nCount = 0;
	//int nSel = 0;
	//nCount = rs.ExecSQL(szSQL);
	//while(!rs.IsEOF()){ 
	//	
	//	if(m_szObjectKey.IsEmpty())
	//		rs.GetValue(_T("ho_id"), m_szObjectKey);
	//	rs.GetValue(_T("ho_type"), tmpStr);
	//	if(tmpStr == m_szObjectType)
	//	   nSel = nCount;
	//	
	//	m_wndObject.AddItems(
	//		rs.GetValue(_T("ho_id")), 
	//		rs.GetValue(_T("ho_desc")), 
	//		rs.GetValue(_T("ho_hascard")), 
	//		rs.GetValue(_T("ho_type")), 
	//		rs.GetValue(_T("ho_discount")), 
	//		NULL);
	//	rs.MoveNext();
	//	nCount++;
	//}
	//m_wndObject.SetCurSel(nSel);
	return 0;
}
/*int CHMSCardEntryDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */

void CHMSCardEntryDialog::OnCardNoChange() {
	m_bInsCheck1stCard = true;
}
/*void CHMSCardEntryDialog::OnCardNoSetfocus(){

} */
/*
void CHMSCardEntryDialog::OnCardNoKillfocus(){
	m_szRegistrationPlaceKey = m_szCardNo.Right(5);
}
*/
int CHMSCardEntryDialog::OnCardNoCheckValue() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	if (m_szCardNo.IsEmpty()) {
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

	int nRet = ParseCard(m_szObjectType, m_szCardNo, m_szCode, m_nDiscount, m_nGroupID);
	if (nRet < 0) {
		m_wndCardNo.SetToolTipMessage(_T("Invalid Card Number"));
		return -1;
	}

	if (m_bEmergency)
	{
		m_nDisrate = m_nDiscount = m_nCardDiscount;
	}
	else
	{
		if (m_bOffLine)
			m_nDisrate = m_nCardDiscount * pMF->m_nInsOffLinePayment / 100;
	}

	UpdateData(false);
	CRecord rs(&pMF->m_db);

	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_card WHERE hc_cardno='%s' AND hc_active='Y'"), m_szCardNo);

	rs.ExecSQL(szSQL);
	if (!rs.IsEOF()) {
		long nPatientNo;
		rs.GetValue(_T("hc_patientno"), nPatientNo);
		if (nPatientNo != m_nPatientNo)
		{
			CString szMsg;
			TranslateString(_T("This card is using by other patient.[%ld]"), tmpStr);
			szMsg.Format(tmpStr, nPatientNo);
			m_wndCardNo.SetToolTipMessage(szMsg);
			return -1;
		}
	}
	szSQL.Format(_T("SELECT count(*) FROM hms_hospital WHERE hh_id='%s' "), m_szCardNo.Right(5));
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		m_szRegistrationPlaceKey = m_szCardNo.Right(5);
		UpdateData(false);
	}
	else
		m_szRegistrationPlaceKey.Empty();

	RecalcPercent();
	return 0;
}
/*void CHMSCardEntryDialog::OnCodeChange(){

} */
/*void CHMSCardEntryDialog::OnCodeSetfocus(){

} */
/*void CHMSCardEntryDialog::OnCodeKillfocus(){

} */
int CHMSCardEntryDialog::OnCodeCheckValue() {
	return 0;
}
/*void CHMSCardEntryDialog::OnDiscountChange(){

} */
/*void CHMSCardEntryDialog::OnDiscountSetfocus(){

} */
/*void CHMSCardEntryDialog::OnDiscountKillfocus(){

} */
int CHMSCardEntryDialog::OnDiscountCheckValue() {
	return 0;
}
void CHMSCardEntryDialog::OnRegistrationDateChange() {
	m_bInsCheck1stCard = true;
}
/*void CHMSCardEntryDialog::OnRegistrationDateSetfocus(){

} */
/*void CHMSCardEntryDialog::OnRegistrationDateKillfocus(){

} */
int CHMSCardEntryDialog::OnRegistrationDateCheckValue() {
	return 0;
}
void CHMSCardEntryDialog::OnExpiryDateChange() {
	m_bInsCheck1stCard = true;
}
/*void CHMSCardEntryDialog::OnExpiryDateSetfocus(){

} */
/*void CHMSCardEntryDialog::OnExpiryDateKillfocus(){

} */
int CHMSCardEntryDialog::OnExpiryDateCheckValue() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	if (m_bPassExpDate)
		return 0;

	if (!m_bCardNo2Label && CompareDate(m_szExpiryDate, pMF->GetSysDate()) < 0)
		return -1;

	return 0;
}
void CHMSCardEntryDialog::OnRegistrationPlaceSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_bInsCheck1stCard = true;
}
void CHMSCardEntryDialog::OnRegistrationPlaceSelendok() {

}
/*void CHMSCardEntryDialog::OnRegistrationPlaceSetfocus(){

}*/
/*void CHMSCardEntryDialog::OnRegistrationPlaceKillfocus(){

}*/
long CHMSCardEntryDialog::OnRegistrationPlaceLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	return pMF->LoadHospitalList(&m_wndRegistrationPlace, m_szRegistrationPlaceKey);

	if (m_wndRegistrationPlace.IsSearchKey() && !m_szRegistrationPlaceKey.IsEmpty())
	{
		szWhere.Format(_T("WHERE trim(hh_id)=trim('%s') "), m_szRegistrationPlaceKey);
	}
	szSQL.Format(_T("SELECT hh_id as id, hh_name||'-'||(select sp_name from sys_prov where sp_id=hh_provid) as name FROM hms_hospital %s ORDER BY hh_id"), szWhere);

	m_wndRegistrationPlace.DeleteAllItems();
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
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
int CHMSCardEntryDialog::OnCompanyCheckValue() {
	return 0;
}

int CHMSCardEntryDialog::OnDateOrver5YearCheckValue()
{
	return 0;
}
void CHMSCardEntryDialog::OnOver5YearOptSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
void CHMSCardEntryDialog::OnHasFreePaperSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	m_bHasFreePaper = !m_bHasFreePaper;
	m_wndDateDisCount.EnableWindow(m_bHasFreePaper);
	RecalcPercent();

}
int CHMSCardEntryDialog::OnDateDisCountCheckValue()
{
	return 0;
}

void CHMSCardEntryDialog::OnCardNo2LabelSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	EnableSecondaryCard(m_bCardNo2Label);
	if (m_bCardNo2Label)
	{
		m_szCardNo2 = m_szCardNo;
		if (m_szCompany2.IsEmpty())
		{
			m_szCompany2 = m_szCompany;
		}
		if (m_szRegistrationPlace2Key.IsEmpty())
		{
			m_szRegistrationPlace2Key = m_szRegistrationPlaceKey;
		}
	}
	else
	{
		m_szCardNo2.Empty();
	}
	UpdateData(FALSE);
	m_wndCardNo2.SetSel(0, m_wndCardNo2.GetWindowTextLength());
}
void CHMSCardEntryDialog::OnCardNo2Change() {
	m_bInsCheck2ndCard = true;
}
/*void CHMSCardEntryDialog::OnCardNo2Setfocus(){

} */
/*void CHMSCardEntryDialog::OnCardNo2Killfocus(){

} */
int CHMSCardEntryDialog::OnCardNo2CheckValue() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	UpdateData(true);
	if (m_szCardNo2.IsEmpty()) {
		m_wndCardNo2.EnableWindow(false);
		m_wndDiscount2.EnableWindow(false);
		m_wndRegDate2.EnableWindow(false);
		m_wndExpDate2.EnableWindow(false);
		m_wndRegistrationPlace2.EnableWindow(false);
		m_wndCode2.EnableWindow(false);
		m_wndCardNo2.SetToolTipMessage(_T(""));
		m_nGroupID2 = 0;
		m_szCardNo2.Empty();
		m_szCode2.Empty();
		m_nDiscount2 = 0;
		return 0;
	}

	int nRet = ParseCard(m_szObjectType, m_szCardNo2, m_szCode2, m_nDiscount2, m_nGroupID2);

	if (nRet < 0) {
		m_wndCardNo2.SetToolTipMessage(_T("Invalid Card Number"));
		return -1;
	}
	UpdateData(false);
	CRecord rs(&pMF->m_db);

	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_card WHERE hc_cardno='%s' "), m_szCardNo2);

	rs.ExecSQL(szSQL);
	if (!rs.IsEOF()) {
		long nPatientNo;
		rs.GetValue(_T("hc_patientno"), nPatientNo);
		if (nPatientNo != m_nPatientNo)
		{
			CString szMsg;
			TranslateString(_T("This card is using by other patient.[%ld]"), tmpStr);
			szMsg.Format(tmpStr, nPatientNo);
			m_wndCardNo2.SetToolTipMessage(szMsg);
			return -1;
		}
	}
	szSQL.Format(_T("SELECT count(*) FROM hms_hospital WHERE hh_id='%s' "), m_szCardNo2.Right(5));
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		m_szRegistrationPlace2Key = m_szCardNo2.Right(5);
		UpdateData(false);
	}
	else
		m_szRegistrationPlace2Key.Empty();
	return 0;

	return 0;
}
/*void CHMSCardEntryDialog::OnCode2Change(){

} */
/*void CHMSCardEntryDialog::OnCode2Setfocus(){

} */
/*void CHMSCardEntryDialog::OnCode2Killfocus(){

} */
int CHMSCardEntryDialog::OnCode2CheckValue() {
	return 0;
}
/*void CHMSCardEntryDialog::OnDiscount2Change(){

} */
/*void CHMSCardEntryDialog::OnDiscount2Setfocus(){

} */
/*void CHMSCardEntryDialog::OnDiscount2Killfocus(){

} */
int CHMSCardEntryDialog::OnDiscount2CheckValue() {
	return 0;
}
void CHMSCardEntryDialog::OnRegDate2Change() {
	m_bInsCheck2ndCard = true;
}
/*void CHMSCardEntryDialog::OnRegDate2Setfocus(){

} */
/*void CHMSCardEntryDialog::OnRegDate2Killfocus(){

} */
int CHMSCardEntryDialog::OnRegDate2CheckValue() {
	return 0;
}
void CHMSCardEntryDialog::OnExpDate2Change() {
	m_bInsCheck2ndCard = true;
}
/*void CHMSCardEntryDialog::OnExpDate2Setfocus(){

} */
/*void CHMSCardEntryDialog::OnExpDate2Killfocus(){

} */
int CHMSCardEntryDialog::OnExpDate2CheckValue() {
	return 0;
}
void CHMSCardEntryDialog::OnRegistrationPlace2SelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	m_bInsCheck2ndCard = true;
}
void CHMSCardEntryDialog::OnRegistrationPlace2Selendok() {

}
/*void CHMSCardEntryDialog::OnRegistrationPlace2Setfocus(){

}*/
/*void CHMSCardEntryDialog::OnRegistrationPlace2Killfocus(){

}*/
long CHMSCardEntryDialog::OnRegistrationPlace2LoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	return pMF->LoadHospitalList(&m_wndRegistrationPlace2, m_szRegistrationPlace2Key);

	/*
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere;
		if(m_wndRegistrationPlace2.IsSearchKey() && !m_szRegistrationPlace2Key.IsEmpty()){
		 szWhere.Format(_T(" and id='%s' "), m_szRegistrationPlace2Key
	};
		m_wndRegistrationPlace2.DeleteAllItems();
		int nCount = 0;
		szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndRegistrationPlace2.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), NULL);
			rs.MoveNext();
		}
		return nCount;
	*/
	return 0;
}
/*void CHMSCardEntryDialog::OnRegistrationPlace2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSCardEntryDialog::OnCompany2Change(){

} */
/*void CHMSCardEntryDialog::OnCompany2Setfocus(){

} */
/*void CHMSCardEntryDialog::OnCompany2Killfocus(){

} */
int CHMSCardEntryDialog::OnCompany2CheckValue() {
	return 0;
}
void CHMSCardEntryDialog::OnUpdateSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CDbfMap cardTbl;
	return;
	if (!IsValidateData())
		return;

	cardTbl.SetTableName(_T("hms_card"));
	cardTbl.AddField(_T("hc_updatedby"), dfText, 15);
	cardTbl.AddField(_T("hc_patientno"), dfLong);
	cardTbl.AddField(_T("hc_docno"), dfLong);
	cardTbl.AddField(_T("hc_cardno"), dfText, 25);
	cardTbl.AddField(_T("hc_regdate"), dfDate);
	cardTbl.AddField(_T("hc_expdate"), dfDate);
	cardTbl.AddField(_T("hc_regcode"), dfText, 11);
	cardTbl.AddField(_T("hc_company"), dfText, 254);
	cardTbl.AddField(_T("hc_code"), dfText, 3);
	cardTbl.AddField(_T("hc_discount"), dfInteger);
	cardTbl.AddField(_T("hc_groupid"), dfInteger);

	cardTbl.SetValue(_T("hc_updatedby"), pMF->GetCurrentUser());
	cardTbl.SetValue(_T("hc_patientno"), pMF->m_nPatientNo);
	cardTbl.SetValue(_T("hc_docno"), pMF->m_nDocumentNo);
	cardTbl.SetValue(_T("hc_cardno"), m_szCardNo2);
	cardTbl.SetValue(_T("hc_regdate"), m_szRegDate2);
	cardTbl.SetValue(_T("hc_expdate"), m_szExpDate2);
	cardTbl.SetValue(_T("hc_regcode"), m_szRegistrationPlace2Key);
	cardTbl.SetValue(_T("hc_company"), m_szCompany2);
	cardTbl.SetValue(_T("hc_code"), m_szCode2);
	cardTbl.SetValue(_T("hc_discount"), m_nDiscount2);
	cardTbl.SetValue(_T("hc_groupid"), m_nGroupID2);
	szSQL.Format(_T("HMS_CARD_ADDSECONDARY(%s) "), cardTbl.FormatSQL());
	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret <= 0)
	{
		ShowMessageBox(_T("Cannot add secondary card"));
		return;
	}
	CGuiDialog::OnOK();


}

/*int CHMSCardEntryDialog::OnHospitalChange(){
	return 0;
} */
/*int CHMSCardEntryDialog::OnHospitalSetfocus(){
	return 0;
} */
/*int CHMSCardEntryDialog::OnHospitalKillfocus(){
	return 0;
} */
//int CHMSCardEntryDialog::OnHospitalCheckValue(){
//	return 0;
//} 


int CHMSCardEntryDialog::OnHospitalSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
int CHMSCardEntryDialog::OnHospitalSelendok() {
	return 0;
}
/*int CHMSCardEntryDialog::OnHospitalSetfocus(){
	 return 0;
}*/
/*int CHMSCardEntryDialog::OnHospitalKillfocus(){
	 return 0;
}*/
int CHMSCardEntryDialog::OnHospitalLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndHospital.IsSearchKey() && ToInt(m_szHospital) > 0)
	{
		szWhere.Format(_T(" AND hh_id='%s' "), m_szHospital);
	}

	szSQL.Format(_T("SELECT hh_id as id, hh_name||' - '||sys_getprovillname(hh_provid) as name ") \
		_T("FROM hms_hospital ") \
		_T("WHERE hh_isactive = 'Y' AND hh_isactive2 = 'Y' %s ORDER BY hh_id "),
		szWhere);

	m_wndHospital.DeleteAllItems();
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndHospital.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
	//return pMF->LoadHospitalList(&m_wndHospital, m_szHospital);
}
/*int CHMSCardEntryDialog::OnHospitalAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */

/*int CHMSCardEntryDialog::OnDiseaseChange(){
	return 0;
} */
/*int CHMSCardEntryDialog::OnDiseaseSetfocus(){
	return 0;
} */
/*int CHMSCardEntryDialog::OnDiseaseKillfocus(){
	return 0;
} */
int CHMSCardEntryDialog::OnDiseaseCheckValue() {
	return 0;
}

void CHMSCardEntryDialog::OnEditSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

}
#include "HMSAdditionCardDialog.h"

void CHMSCardEntryDialog::OnHemaSelect()
{
	CHMSAdditionCardDialog dlg(this);
	dlg.SetMode(VM_ADD);
	if (dlg.DoModal() == IDOK)
	{
		m_szxCardNo = dlg.m_szCardNo;
		m_szxIssueDate = dlg.m_szIssueDate;
		m_szxIssuePlace = dlg.m_szIssuePlace;
		m_szxObject = dlg.m_szxObject;
	}
}
void CHMSCardEntryDialog::OnSaveSelect()
{
	return OnSave();
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;


	if (!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép sửa thông tin thẻ"), MB_ICONERROR);
		return;
	}


	RecalcPercent();

	if (!IsValidateData())
		return;
	CDbfMap	cardTbl;

	cardTbl.AddField(_T("hd_updatedby"), dfText, 15);
	cardTbl.AddField(_T("hd_patientno"), dfLong);
	cardTbl.AddField(_T("hd_docno"), dfLong);
	cardTbl.AddField(_T("hd_insline"), dfText, 1);
	cardTbl.AddField(_T("hd_emergency"), dfText, 1);
	cardTbl.AddField(_T("hd_over5year"), dfText, 1);
	//Thong tin the 1
	cardTbl.AddField(_T("hc_cardno"), dfText, 25);
	cardTbl.AddField(_T("hc_cardidx"), dfLong);
	cardTbl.AddField(_T("hc_regdate"), dfDate);
	cardTbl.AddField(_T("hc_expdate"), dfDate);
	cardTbl.AddField(_T("hc_regcode"), dfText, 11);
	cardTbl.AddField(_T("hc_company"), dfText, 254);
	cardTbl.AddField(_T("hc_code"), dfText, 3);
	cardTbl.AddField(_T("hc_discount"), dfInteger);
	cardTbl.AddField(_T("hc_groupid"), dfLong);
	//THong tin the 2
	cardTbl.AddField(_T("hc_xcardno"), dfText, 25);
	cardTbl.AddField(_T("hc_xcardidx"), dfLong);
	cardTbl.AddField(_T("hc_xregdate"), dfDate);
	cardTbl.AddField(_T("hc_xexpdate"), dfDate);
	cardTbl.AddField(_T("hc_xregcode"), dfText, 11);
	cardTbl.AddField(_T("hc_xcompany"), dfText, 254);
	cardTbl.AddField(_T("hc_xcode"), dfText, 3);
	cardTbl.AddField(_T("hc_xdiscount"), dfInteger);
	cardTbl.AddField(_T("hc_xgroupid"), dfLong);
	cardTbl.AddField(_T("HD_INSLINEEX"), dfText, 1);


	cardTbl.SetValue(_T("hd_updatedby"), pMF->GetCurrentUser());
	cardTbl.SetValue(_T("hd_patientno"), pMF->m_nPatientNo);
	cardTbl.SetValue(_T("hd_docno"), pMF->m_nDocumentNo);
	//hms_doc
	cardTbl.SetValue(_T("hd_insline"), m_bOffLine ? _T("Y") : _T("N"));

	cardTbl.SetValue(_T("hd_emergency"), m_bEmergency ? _T("Y") : _T("N"));

	CString tmpStr;
	tmpStr = _T("N");
	if (m_bOver5Year)
		tmpStr = _T("Y");
	else if (m_bOver5YearOpt)
		tmpStr = _T("O");
	cardTbl.SetValue(_T("hd_over5year"), tmpStr);


	cardTbl.SetValue(_T("hc_cardno"), m_szCardNo);
	cardTbl.SetValue(_T("hc_cardidx"), m_nCardIdx);
	cardTbl.SetValue(_T("hc_regdate"), m_szRegistrationDate);
	cardTbl.SetValue(_T("hc_expdate"), m_szExpiryDate);
	cardTbl.SetValue(_T("hc_regcode"), m_szRegistrationPlaceKey);
	cardTbl.SetValue(_T("hc_company"), m_szCompany);
	cardTbl.SetValue(_T("hc_code"), m_szCode);
	cardTbl.SetValue(_T("hc_discount"), m_nDiscount);
	if (m_nGroupID < 0)
		m_nGroupID = 0;
	cardTbl.SetValue(_T("hc_groupid"), m_nGroupID);

	//
	cardTbl.SetValue(_T("hc_xcardno"), m_szCardNo2);
	cardTbl.SetValue(_T("hc_xcardidx"), m_nxCardIdx);
	cardTbl.SetValue(_T("hc_xregdate"), m_szRegDate2);
	cardTbl.SetValue(_T("hc_xexpdate"), m_szExpDate2);
	cardTbl.SetValue(_T("hc_xregcode"), m_szRegistrationPlace2Key);
	cardTbl.SetValue(_T("hc_xcompany"), m_szCompany2);
	cardTbl.SetValue(_T("hc_xcode"), m_szCode2);
	cardTbl.SetValue(_T("hc_xdiscount"), m_nDiscount2);
	if (m_nGroupID2 < 0)
		m_nGroupID2 = 0;
	cardTbl.SetValue(_T("hc_xgroupid"), m_nGroupID2);
	cardTbl.SetValue(_T("HD_INSLINEEX"), m_bOffLine2 ? _T("Y") : _T("N"));

	if (m_bHasFreePaper)
		tmpStr = _T("Y");
	else
		tmpStr = _T("N");
	cardTbl.SetValue(_T("hd_hasfeepaper"), tmpStr);

	szSQL.Format(_T("HMS_CARD_UPDATE_V2(%s) "), cardTbl.FormatSQL());

	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret <= 0) {
		pMF->Rollback();
		ShowMessageBox(_T("Không cập nhật được thông tin thẻ"), MB_OK);
		return;
	}

	/*
		m_szRegistrationPlace = m_wndRegistrationPlace.GetCurrent(1);
		m_hms_docTbl.SetValue(_T("hd_cardno"), m_szCardNo);
		m_hms_docTbl.SetValue(_T("hd_cardidx"), m_nIndex);
		m_hms_docTbl.SetValue(_T("hd_insregdate"), m_szRegistrationDate);
		m_hms_docTbl.SetValue(_T("hd_disrate"), m_nDisrate);
		m_hms_docTbl.SetValue(_T("hd_insline"), m_bOffLine?_T("Y"):_T("N"));
		m_hms_docTbl.SetValue(_T("hd_emergency"), m_bEmergency?_T("Y"):_T("N"));
		m_hms_docTbl.SetValue(_T("hd_over5year"), m_bOver5Year?_T("Y"):_T("N"));


		//Cap nhat thong tin ho so kham va dieu tri
		szWhere.Format(_T(" WHERE hd_docno=%ld "), pMF->m_nDocumentNo);

		szSQL = m_hms_docTbl.GetUpdateSQL(_T("hd_docno,hd_patientno"));
		szSQL += szWhere;
	_tprintf(_T("%s"), szSQL);

		int ret = pMF->ExecSQL(szSQL);
		if(ret <= 0) {
			pMF->Rollback();
			ShowMessageBox(_T("Can not update document information"), MB_OK);
			return;
		}
	*/

	/*
	CString szEvent, szDesc;
	if(m_szxCardNo != m_szCardNo)
	{
		szEvent.Format(_T("Edit Card Information"));
		szDesc.Format(_T("[%ld, %s,%s]->[%s, %s], UserID[%s]"), pMF->m_nDocumentNo, m_szPatientName, m_szxCardNo, m_szCardNo, pMF->GetCurrentUser());
		pMF->SystemLog(szEvent, szDesc);
	}

	if(m_bOffLine != m_bOffLineOld)
	{
		CString tmpStr, szOffLine;
		szOffLine = m_bOffLine?_T("Y"):_T("N");
		tmpStr = m_bOffLineOld?_T("Y"):_T("N");

		szEvent.Format(_T("Edit Offline"));
		szDesc.Format(_T("[%ld, %s]->[%s => %s], UserID[%s]"), pMF->m_nDocumentNo, m_szPatientName, tmpStr, szOffLine, pMF->GetCurrentUser());
		pMF->SystemLog(szEvent, szDesc);
	}

	if(m_szRegistrationDate.Left(10) != m_szRegistrationDateOld.Left(10))
	{
		szEvent.Format(_T("Edit Registration Date"));
		szDesc.Format(_T("[%ld, %s, %s]->[%s => %s], UserID[%s]"), pMF->m_nDocumentNo, m_szPatientName, m_szCardNo, m_szRegistrationDateOld.Left(10), m_szRegistrationDate.Left(10), pMF->GetCurrentUser());
		pMF->SystemLog(szEvent, szDesc);
	}

	if(m_szExpiryDate.Left(10) != m_szExpiryDateOld.Left(10))
	{
		szEvent.Format(_T("Edit Expiry Date"));
		szDesc.Format(_T("[%ld, %s, %s]->[%s => %s], UserID[%s]"), pMF->m_nDocumentNo, m_szPatientName, m_szCardNo, m_szExpiryDateOld.Left(10), m_szExpiryDate.Left(10), pMF->GetCurrentUser());
		pMF->SystemLog(szEvent, szDesc);
	}
	*/
	CGuiDialog::OnOK();
}

void CHMSCardEntryDialog::OnSave()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDocChange, szCardChange, szCardExChange, szEvent, szDesc, tmpStr;
	UpdateData(true);
	if (!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép sửa thông tin thẻ"), MB_ICONERROR);
		return;
	}
	//Không cho nhập thẻ 10 số -> lại phải sửa lại XML
	//Không cho nhập 1 thẻ đúng tuyến, 1 thẻ trái tuyến
	//Bệnh nhân trái tuyến không cho phép tích 5 năm liên tục
	//Bệnh nhân trái tuyến không cho phép tích có giấy miễn

	int retval = 10;
	szSQL.Format(_T("HMS_CARD_CHECK_INFOR('%s', %ld, %ld, %d, %d, '%s', '%s', %d, %d, %d) "),
		pMF->GetCurrentUser(), pMF->m_nPatientNo, pMF->m_nDocumentNo, m_bOffLine, m_bOffLine2,
		m_szCardNo, m_szCardNo2, m_bOver5Year, m_bHasFreePaper, m_bEmergency);
	retval = str2long(pMF->ExecDML(szSQL));

	switch (retval)
	{
	case -1:
		ShowMessageBox(_T("Độ dài thẻ phải từ 15 ký tự trở lên!"), MB_ICONERROR);
		return;
		break;

	case -2:
		ShowMessageBox(_T("Thẻ 1 và thẻ 2 phải cùng đúng tuyến hoặc trái tuyến!"), MB_ICONERROR);
		return;
		break;

	case -3:
		ShowMessageBox(_T("Bệnh nhân trái tuyến không được tích hưởng 5 năm liên tục!"), MB_ICONERROR);
		return;
		break;

	case -4:
		ShowMessageBox(_T("Bệnh nhân trái tuyến không được tích có giấy miễn!"), MB_ICONERROR);
		return;
		break;
	case -5:
		ShowMessageBox(_T("Bệnh nhân trái tuyến không cần tích cấp cứu"), MB_ICONERROR);
		return;
		break;

	}
	RecalcPercent();
	if (CheckHospitalTransfer() == false)
	{
		m_wndHospital.EnableWindow(FALSE);
		m_wndDisease.EnableWindow(FALSE);
	}
	if (!IsValidateData())
		return;

	if (m_szDoituong_kcbKey.IsEmpty())
	{
		ShowMessageBox(L"Mã đối tượng KCB không được để trống");
		return;
	}

	if (IsByPassCheckIns(m_szCardNo) == false)
	{
		if (m_bInsCheck1stCard)
		{
			OnCheckInsSelect();
			_tprintf(_T("\nInscheck1stcard: %d"), m_bInsCheck1stCard);
			if (m_bInsCheck1stCard)
			{
				return;
			}
		}
	}
	//if (IsByPassCheckIns(m_szCardNo2) == false && (!pMF->CheckPermission(_T("TM.200.2"))))
	if (IsByPassCheckIns(m_szCardNo2) == false)
	{
		if (m_bInsCheck2ndCard)
		{
			OnCheckInsSelect2();
			_tprintf(_T("\nInscheck2ndcard: %d"), m_bInsCheck2ndCard);
			if (m_bInsCheck2ndCard)
			{
				return;
			}
		}
	}

	/*Check ma doi tuong*/

	CHMSHelper helper;
	if (helper.CheckMaDoiTuongKCB(GetInsState(), true) <= 0)
	{
		return;
	}

	CDbfMap	cardTbl, card_exTbl, docTbl;
	CDbfMapParser parser;
	docTbl.AddField(_T("hd_updatedby"), dfText, 15);
	docTbl.AddField(_T("hd_patientno"), dfLong);
	docTbl.AddField(_T("hd_docno"), dfLong);
	docTbl.AddField(_T("hd_insline"), dfText, 1);
	docTbl.AddField(_T("hd_emergency"), dfText, 1);
	docTbl.AddField(_T("hd_over5year"), dfText, 1);
	docTbl.AddField(_T("HD_INSLINEEX"), dfText, 1);
	docTbl.AddField(_T("hd_hasfeepaper"), dfText, 1);
	docTbl.AddField(_T("HD_OVER5YEARAPPLYDATE"), dfDate);
	docTbl.AddField(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"), dfDate);
	docTbl.AddField(_T("HD_MA_DOITUONG_KCB"), dfText, 3);	

	//Thong tin the 1
	cardTbl.AddField(_T("hc_cardno"), dfText, 25);
	cardTbl.AddField(_T("hc_idx"), dfLong);
	cardTbl.AddField(_T("hc_regdate"), dfDate);
	cardTbl.AddField(_T("hc_expdate"), dfDate);
	cardTbl.AddField(_T("hc_regcode"), dfText, 11);
	cardTbl.AddField(_T("hc_company"), dfText, 254);
	cardTbl.AddField(_T("hc_code"), dfText, 3);
	cardTbl.AddField(_T("hc_discount"), dfInteger);
	cardTbl.AddField(_T("hc_groupid"), dfLong);
	cardTbl.AddField(_T("hc_area"), dfText, 3); 
	//THong tin the 2
	card_exTbl.AddField(_T("hc_cardno"), dfText, 25);
	card_exTbl.AddField(_T("hc_idx"), dfLong);
	card_exTbl.AddField(_T("hc_regdate"), dfDate);
	card_exTbl.AddField(_T("hc_expdate"), dfDate);
	card_exTbl.AddField(_T("hc_regcode"), dfText, 11);
	card_exTbl.AddField(_T("hc_company"), dfText, 254);
	card_exTbl.AddField(_T("hc_code"), dfText, 3);
	card_exTbl.AddField(_T("hc_discount"), dfInteger);
	card_exTbl.AddField(_T("hc_groupid"), dfLong);

	docTbl.SetTableName(_T("hms_doc"));
	szWhere.Format(_T(" where hd_docno = %ld"), pMF->m_nDocumentNo);
	docTbl.Open(&pMF->m_db, szWhere);
	parser.PushRowData(&docTbl);

	docTbl.SetValue(_T("hd_updatedby"), pMF->GetCurrentUser());
	docTbl.SetValue(_T("hd_patientno"), pMF->m_nPatientNo);
	docTbl.SetValue(_T("hd_docno"), pMF->m_nDocumentNo);
	//hms_doc
	docTbl.SetValue(_T("hd_insline"), m_bOffLine ? _T("Y") : _T("N"));

	docTbl.SetValue(_T("hd_emergency"), m_bEmergency ? _T("Y") : _T("N"));

	tmpStr = _T("N");
	if (m_bOver5Year)
		tmpStr = _T("Y");
	else if (m_bOver5YearOpt)
		tmpStr = _T("O");
	docTbl.SetValue(_T("hd_over5year"), tmpStr);
	docTbl.SetValue(_T("HD_INSLINEEX"), m_bOffLine2 ? _T("Y") : _T("N"));

	if (m_bHasFreePaper)
		tmpStr = _T("Y");
	else
		tmpStr = _T("N");
	docTbl.SetValue(_T("hd_hasfeepaper"), tmpStr);
	docTbl.SetValue(_T("HD_OVER5YEARAPPLYDATE"), m_szDateOrver5Year);
	docTbl.SetValue(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"), m_szDateDisCount);
	docTbl.SetValue(_T("HD_MA_DOITUONG_KCB"), m_szDoituong_kcbKey);



	parser.PushRowData(&docTbl, true);
	szDocChange = parser.GetRowChange();

	//if (m_nCardIdx > 0)
	{
		parser.Clear();
		cardTbl.SetTableName(_T("hms_card"));
		szWhere.Format(_T(" WHERE hc_idx = %ld"), m_nCardIdx);
		cardTbl.Open(&pMF->m_db, szWhere);
		parser.PushRowData(&cardTbl);
		cardTbl.SetValue(_T("hc_cardno"), m_szCardNo);
		cardTbl.SetValue(_T("hc_cardidx"), m_nCardIdx);
		cardTbl.SetValue(_T("hc_regdate"), m_szRegistrationDate);
		cardTbl.SetValue(_T("hc_expdate"), m_szExpiryDate);
		cardTbl.SetValue(_T("hc_regcode"), m_szRegistrationPlaceKey);
		cardTbl.SetValue(_T("hc_company"), m_szCompany);
		cardTbl.SetValue(_T("hc_code"), m_szCode);
		cardTbl.SetValue(_T("hc_discount"), m_nDiscount);
		cardTbl.SetValue(_T("hc_area"), m_szAreaKey);
		if (m_nGroupID < 0)
			m_nGroupID = 0;
		cardTbl.SetValue(_T("hc_groupid"), m_nGroupID);
		parser.PushRowData(&cardTbl, true);
		szCardChange = parser.GetRowChange();
	}

	//if (m_nxCardIdx > 0)
	{
		card_exTbl.SetTableName(_T("hms_card"));
		szWhere.Format(_T(" WHERE hc_idx = %ld"), m_nxCardIdx);
		card_exTbl.Open(&pMF->m_db, szWhere);
		parser.Clear();
		parser.PushRowData(&card_exTbl);
		card_exTbl.SetValue(_T("hc_cardno"), m_szCardNo2);
		card_exTbl.SetValue(_T("hc_cardidx"), m_nxCardIdx);
		card_exTbl.SetValue(_T("hc_regdate"), m_szRegDate2);
		card_exTbl.SetValue(_T("hc_expdate"), m_szExpDate2);
		card_exTbl.SetValue(_T("hc_regcode"), m_szRegistrationPlace2Key);
		card_exTbl.SetValue(_T("hc_company"), m_szCompany2);
		card_exTbl.SetValue(_T("hc_code"), m_szCode2);
		card_exTbl.SetValue(_T("hc_discount"), m_nDiscount2);
		//card_exTbl.SetValue(_T("hc_area"), m_szAreaKey);
		if (m_nGroupID2 < 0)
			m_nGroupID2 = 0;
		card_exTbl.SetValue(_T("hc_groupid"), m_nGroupID2);
		parser.PushRowData(&card_exTbl, true);
		szCardExChange = parser.GetRowChange();
	}
	tmpStr.Format(_T("%s,%s,%s"), docTbl.FormatSQL(), cardTbl.FormatSQL(), card_exTbl.FormatSQL());
	szSQL.Format(_T("HMS_CARD_UPDATE_V3(%s) "), tmpStr);

	int ret = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);
	if (ret <= 0) {
		pMF->Rollback();
		ShowMessageBox(_T("Không cập nhật được thông tin thẻ"), MB_OK);
		return;
	}
	if (!szDocChange.IsEmpty())
	{
		szEvent = _T("hms_doc_edit_card");
		szDesc.Format(_T("[hd_docno=%ld] %s"), pMF->m_nDocumentNo, szDocChange);
		pMF->SystemLog(szEvent, szDesc);
	}
	if (!szCardChange.IsEmpty())
	{
		szEvent = _T("hms_card_edit");
		szDesc.Format(_T("[doc_no=%ld|patient_no=%ld|card_no=%s] %s")
			, pMF->m_nDocumentNo, pMF->m_nPatientNo, m_szCardNo, szCardChange);
		pMF->SystemLog(szEvent, szDesc);
	}
	if (!szCardExChange.IsEmpty())
	{
		szEvent = _T("hms_card_edit_ex");
		szDesc.Format(_T("[doc_no=%ld|patient_no=%ld|card_no=%s] %s")
			, pMF->m_nDocumentNo, pMF->m_nPatientNo, m_szCardNo2, szCardExChange);
		pMF->SystemLog(szEvent, szDesc);
	}
	CGuiDialog::OnOK();
}

bool CHMSCardEntryDialog::IsByPassCheckIns(CString szCardNo)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szTE, szKT;

	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	//bool bPassCheckIns = true;

	bool bPassCheckIns = false;
	//_msg(_T("1: %d"), bPassCheckIns);
	szSQL.Format(_T("select count(*) as qty from hms_card_passcheck where hcp_cardno = '%s' and hcp_active = 'Y'"), szCardNo);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		bPassCheckIns = true;
	}
	//_msg(_T("2: %d"), bPassCheckIns);
	//Check thẻ em bé được sinh ra từ bệnh án sơ sinh

	szSQL.Format(_T(" SELECT count(*) as qty from hms_newborn_record") \
		_T(" WHERE hnr_docno = %ld"), pMF->m_nDocumentNo);
	rsl.ExecSQL(szSQL);
	if (rsl.GetIntValue() > 0 && m_szCardNo.Left(3) == _T("TE1"))
	{
		bPassCheckIns = true;
	}
	//_msg(_T("3: %d"), bPassCheckIns);
	szSQL.Format(_T("hms_card_bypassprefix('%s')"), szCardNo);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		return true;
	}

	if (pMF->GetProp(_T("hms_passcheck_ins_api")) == _T("Y"))
	{
		return true;
	}
	return bPassCheckIns;
}

bool CHMSCardEntryDialog::CheckHospitalTransfer()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData();
	bool bCheck = false;
	CString szHospital_id = pMF->m_CompanyInfo.sc_id;
	if (m_bOffLine == FALSE || m_bOffLine2 == FALSE)
	{
		if (!m_szRegistrationPlaceKey.IsEmpty() && m_szRegistrationPlaceKey != szHospital_id)
		{
			bCheck = true;
		}
		if (!m_szRegistrationPlace2Key.IsEmpty() && m_szRegistrationPlace2Key != szHospital_id)
		{
			bCheck = true;
		}
	}
	return bCheck;
}

void CHMSCardEntryDialog::OnCloseSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
int CHMSCardEntryDialog::OnAddHMSCardEntryDialog()
{
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSCardEntryDialog::OnEditHMSCardEntryDialog()
{
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CHMSCardEntryDialog::OnDeleteHMSCardEntryDialog() {
	if (GetMode() != VM_VIEW)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
		return -1;
	szSQL.Format(_T("DELETE FROM  WHERE  AND"));
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		SetMode(VM_NONE);
		OnCancelHMSCardEntryDialog();
	}
	return 0;
}
int CHMSCardEntryDialog::OnSaveHMSCardEntryDialog() {
	return 0;
	if (GetMode() != VM_EDIT)
		return -1;
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	if (!IsValidateData())
		return -1;

	if (m_szCardNo.IsEmpty())
		return -1;




	CString szSQL;
	CString szWhere;
	if (m_nIndex == 0) {
		szSQL.Format(_T("SELECT hd_cardidx FROM hms_doc WHERE hd_docno=%ld and hd_cardno='%s'"), pMF->m_nDocumentNo, m_szCardNo);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("hd_cardidx"), m_nIndex);
	}

	if (m_nIndex > 0)
	{
		szWhere.Format(_T(" WHERE hc_patientno=%ld and hc_idx=%d "), m_nPatientNo, m_nIndex);
		szSQL = m_hms_cardTbl.GetUpdateSQL(_T("hc_createdby,hc_createddate,hc_patientno,hc_idx,hc_docno"));
		szSQL += szWhere;
		int ret = pMF->ExecSQL(szSQL);
		_fmsg(_T("%s"), szSQL);
		if (ret > 0)
		{
			CString szOver5Year = _T("N");
			if (m_bOver5Year)
				szOver5Year = _T("Y");

			szSQL.Format(_T("UPDATE hms_doc SET hd_emergency='%s', hd_insline='%s', hd_disrate=%d, hd_over5year='%s' ") \
				_T("WHERE hd_docno=%ld "),
				m_bEmergency ? _T("Y") : _T("N"), m_bOffLine ? _T("Y") : _T("N"), m_nDisrate, szOver5Year, pMF->m_nDocumentNo);

			pMF->ExecSQL(szSQL);
			SetMode(VM_VIEW);
		}
		return ret;
	}

	return 1;


}
int CHMSCardEntryDialog::OnCancelHMSCardEntryDialog() {
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	return 0;
}
int CHMSCardEntryDialog::OnHMSCardEntryDialogListLoadData() {
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
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (!pMF->CheckPermission(_T("01.15")))
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

void CHMSCardEntryDialog::OnOffLineSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	m_bOffLine = !m_bOffLine;

	m_nDisrate = m_nDiscount = m_nCardDiscount;

	if (!m_bOffLine)
	{
		m_wndHospital.EnableWindow(TRUE);
		m_wndDisease.EnableWindow(TRUE);

	}
	else
	{
		m_wndHospital.EnableWindow(FALSE);
		m_wndDisease.EnableWindow(FALSE);

	}

	if (m_bEmergency)
	{
		m_nDisrate = m_nCardDiscount;
	}
	else
	{
		if (m_bOffLine)
			m_nDisrate = m_nCardDiscount * pMF->m_nInsOffLinePayment / 100;
	}

	if (m_bOffLine && !m_bOver5Year && !m_bHasFreePaper)
	{

		m_wndOver5Year.EnableWindow(FALSE);
		m_wndHasFreePaper.EnableWindow(FALSE);
	}
	else
	{

		m_wndOver5Year.EnableWindow(TRUE);
		m_wndHasFreePaper.EnableWindow(TRUE);
	}


	UpdateData(FALSE);

	RecalcPercent();
}

void CHMSCardEntryDialog::OnOffLine2Select()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
}

void CHMSCardEntryDialog::OnEmergencySelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	if (!m_bEditEmergency)
	{
		return;
	}
	m_bEmergency = !m_bEmergency;
	m_nDisrate = m_nDiscount = m_nCardDiscount;

	if (m_bEmergency)
	{
		m_nDisrate = m_nCardDiscount;
	}
	else
	{
		m_nDisrate = m_nCardDiscount * pMF->m_nInsOffLinePayment / 100;
	}

	UpdateData(FALSE);

	RecalcPercent();
}


void CHMSCardEntryDialog::OnOver5YearSelect()
{
	m_bOver5Year = !m_bOver5Year;
	m_wndDateOrver5Year.EnableWindow(m_bOver5Year);
	RecalcPercent();
}
int CHMSCardEntryDialog::ParseCard(CString szObject, CString szCardNo, CString& szRetCode, int& nInsDiscount, int& nGroupID)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szCardFormat, szCondition, szCode, szInsCode, szType;
	bool bIsFound = false;
	int nDiscount = 0;
	nGroupID = 0;
	UpdateData(true);

	if (szObject.IsEmpty())
		szSQL.Format(_T("SELECT * FROM hms_object_line WHERE length(hol_cardfmt)=%d ORDER BY hol_type,hol_cardfmt, length(hol_code) DESC "), szCardNo.GetLength());
	else
		szSQL.Format(_T("SELECT * FROM hms_object_line WHERE hol_type='%s' AND length(hol_cardfmt)=%d ORDER BY hol_type,hol_cardfmt, length(hol_code) DESC "), szObject, szCardNo.GetLength());

	int ret = rs.ExecSQL(szSQL);

	while (!rs.IsEOF()) {
		rs.GetValue(_T("hol_cardfmt"), szCardFormat);
		rs.GetValue(_T("hol_condition"), szCondition);
		rs.GetValue(_T("hol_code"), szInsCode);
		rs.GetValue(_T("hol_type"), szType);
		rs.GetValue(_T("hol_discount"), nDiscount);
		rs.GetValue(_T("hol_group"), nGroupID);
		bool bValid = true;
		szCode.Empty();
		for (int i = 0; i < szCardFormat.GetLength(); i++)
		{
			if (szCardFormat[i] == _T('$') && _istalnum(szCardNo[i]) == 0) {
				bValid = false;
				break;
			}
			else if (szCardFormat[i] == _T('A') && _istalpha(szCardNo[i]) == 0) {
				bValid = false;
				break;
			}
			else if (szCardFormat[i] == _T('#') && _istdigit(szCardNo[i]) == 0) {
				bValid = false;
				break;
			}
			if (szCondition[i] == _T('C')) {
				szCode += szCardNo[i];
			}
		}

		if (szCode != szInsCode) {
			bValid = false;
		}
		if (bValid)
		{
			bIsFound = true;
			break;
		}

		rs.MoveNext();

	}

	if (bIsFound)
	{
		if (szObject.IsEmpty())
		{
			szRetCode = szType;
		}
		else
			szRetCode = szInsCode;

		nInsDiscount = nDiscount;
		return 1;
	}
	return -1;
}



void CHMSCardEntryDialog::EnableSecondaryCard(BOOL bEnable)
{

	m_wndCardNo2.EnableWindow(bEnable);
	m_wndRegDate2.EnableWindow(bEnable);
	m_wndExpDate2.EnableWindow(bEnable);
	m_wndRegistrationPlace2.EnableWindow(bEnable);
	m_wndCompany2.EnableWindow(bEnable);
	m_wndUpdate.EnableWindow(bEnable);
	m_wndCardNo2.SetCheckValue(bEnable);
	m_wndRegDate2.SetCheckValue(bEnable);
	m_wndExpDate2.SetCheckValue(bEnable);
	m_wndRegistrationPlace2.SetCheckValue(bEnable);
	m_wndCompany2.SetCheckValue(FALSE);
	//m_wndSave.EnableWindow(!bEnable);

}


void CHMSCardEntryDialog::RecalcPercent()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(TRUE);
	int nPercent = m_nCardDiscount;
	int nPercent2 = m_nDiscount2;

	/*if(m_bOver5Year)
	{
		nPercent = 100;
	}*/

	if (m_bEmergency || m_szAreaKey.Find(_T("K")) >= 0)
	{
		m_nDisrate = nPercent;
	}
	else
	{
		if (m_bOffLine)
			m_nDisrate = nPercent * pMF->m_nInsOffLinePayment / 100;
		else
			m_nDisrate = nPercent;
	}

	if (m_bHasFreePaper)
	{
		m_nDisrate = m_nDisrate2 = nPercent = nPercent2 = 100;
	}

	if (m_bHasFreePaper)
	{
		m_bOver5Year = true;
		//m_wndDateOrver5Year.EnableWindow(m_bOver5Year);
	}
	else
	{
		m_bOver5Year = false;
	}
	if(m_bEmergency)
	{
		m_wndHospital.EnableWindow(false);
		m_wndDisease.EnableWindow(false);
	}

	UpdateData(FALSE);
}
void CHMSCardEntryDialog::OnCheckInsSelect()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	UpdateData(true);

	if (m_szCardNo.IsEmpty())
		return;
	/*
	if (IsByPassCheckIns(m_szCardNo))
	{
		m_bInsCheck1stCard = false;
		return;
	}
	*/

	int nCount = OnCardNoCheckValue();


	CString szJsonData, szData;
	JSONVALUE jRequest, jResponse, jRCard_info;
	JSONVALUE j, jj;
	std::wstring json_string;

	jRCard_info["maThe"] = m_szCardNo.Left(15);
	jRCard_info["hoTen"] = m_szPatientName;
	_tprintf(_T("%s"), m_szBirthDate);
	if (!m_szBirthDate.IsEmpty())
	{
		jRCard_info["ngaySinh"] = m_szBirthDate.Left(4);
	}
	else
	{
		jRCard_info["ngaySinh"] = _T("1752");
	}
	std::wstring jStr;
	jRCard_info.ToString(jStr);
	szJsonData.Format(_T("%s"), jStr.c_str());

	if (m_szCardNo.IsEmpty())
	{
		ShowMessageBox(L"Mã thẻ không hợp lệ");
		return;
	}
	std::string response;
	bool res = pMF->CheckInsCardInfo(m_szCardNo, m_szPatientName, m_szBirthDate, response);


	if (!res)
	{
		AfxMessageBox(_T("NhanLichSuKCB2018 error!"));
		return;
	}

	CHMSCardInfoCheckIns dlg(this);

	if (!jResponse.Parse(response))
	{
		cout << "Error parse json" << endl;
		cout << response << endl;
		return;
	}
	CString tmpStr, tmpStr1;

	j = jResponse.At(_T("maKetQua"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	jResponse[_T("maKetQua")].GetValue(tmpStr);
	int nMaloi = ToInt(tmpStr);

	j = jResponse.At(_T("ghiChu"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szNOI_DUNG = tmpStr;
	szData.Format(_T("N\x1ED9i \x64ung: %s"), tmpStr);
	CStringToken tk(tmpStr, _T("!"));
	if (tk.GetSize() > 0)
	{
		tk.GetAt(0, tmpStr);
		dlg.m_szCanhbao = tmpStr;

	}

	j = jResponse.At(_T("hoTen"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szHO_TEN = tmpStr;
	szData.AppendFormat(_T("\r\nH\x1ECD t\xEAn: %s"), tmpStr);

	//j= jResponse.At(_T("ngayDu5Nam"));
	//j.ToString(json_string);
	//tmpStr.Format(_T("%s"), json_string.c_str());
	//tmpStr1.Format(_T("%c"), 34);
	//tmpStr.Replace(tmpStr1, _T(""));
	//CString szdateover5year;
	//szdateover5year=tmpStr;
	////szdateover5year.Replace(_T("/"),_T("-"));
	////m_szFromDate=CDate::Convert(szdateover5year, ddmmyyyy, yyyymmdd);
	//dlg.m_szNgayDu5nam=m_szFromDate;

	j = jResponse.At(_T("ngayDu5Nam"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	CString szdateover5year;
	szdateover5year = tmpStr;
	szdateover5year.Replace(_T("/"), _T("-"));
	m_szDateOrver5Year = CDate::Convert(szdateover5year, ddmmyyyy, yyyymmdd);
	dlg.m_szNgayDu5nam = m_szDateOrver5Year;
	if (CompareDate(m_szDateOrver5Year, pMF->GetSysDate()) <= 0 && !m_szDateOrver5Year.IsEmpty())
	{

		m_bOver5Year = true;

	}

	j = jResponse.At(_T("ngaySinh"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szNGAY_SINH = tmpStr;

	szData.AppendFormat(_T("\r\nNg\xE0y sinh: %s"), tmpStr);


	j = jResponse.At(_T("gioiTinh"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	tmpStr.Trim();
	//		m_szSexKey = tmpStr== _T("Nam")?_T("M"):_T("F");
	dlg.m_szGIOI_TINH = tmpStr;
	szData.AppendFormat(_T("\r\nGi\x1EDBi t\xEDnh: %s"), tmpStr);


	j = jResponse.At(_T("diaChi"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	tmpStr.Trim();
	//m_szCompany=tmpStr;
	dlg.m_szDIA_CHI = tmpStr;
	szData.AppendFormat(_T("\r\n\x110\x1ECB\x61 \x63h\x1EC9: %s"), tmpStr);

	j = jResponse.At(_T("maDKBD"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	tmpStr.Trim();
	//m_szRegistrationPlaceKey=tmpStr;
	dlg.m_szMADKBD = tmpStr;
	szData.AppendFormat(_T("\r\nM\xE3 \x110K\x42\x110: %s"), tmpStr);


	j = jResponse.At(_T("gtTheTu"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	CString szregdate;
	szregdate = tmpStr;
	szregdate.Replace(_T("/"), _T("-"));
	//m_szRegistrationDate=CDate::Convert(szregdate, ddmmyyyy, yyyymmdd);
	szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"), tmpStr);
	dlg.m_szTU_NGAY1 = tmpStr;


	j = jResponse.At(_T("gtTheDen"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	CString szexpdate;
	szexpdate = tmpStr;
	dlg.m_szDEN_NGAY1 = tmpStr;
	//m_szExpiryDate=CDate::Convert(szexpdate, ddmmyyyy, yyyymmdd);
	szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"), tmpStr);


	j = jResponse.At(_T("maKV"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szMA_KV = tmpStr;
	szData.AppendFormat(_T("\r\nM\xE3 KV: %s"), tmpStr);


	j = jResponse.At(_T("maTheCu"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szTHE_CU = tmpStr;
	szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB \x63\x169: %s"), tmpStr);

	j = jResponse.At(_T("maTheMoi"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szTHE_MOI = tmpStr;
	szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB m\x1EDBi: %s"), tmpStr);



	j = jResponse.At(_T("gtTheTuMoi"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szTU_NGAY2 = tmpStr;
	szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"), tmpStr);


	j = jResponse.At(_T("gtTheDenMoi"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szDEN_NGAY2 = tmpStr;
	szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"), tmpStr);

	j = jResponse.At(_T("dsLichSuKCB2018"));
	dlg.m_json = j;

	j = jResponse.At(_T("dsLichSuKT2018"));
	dlg.m_jsonHisCheck = j;
	if (nMaloi == 0 && GetMode() == VM_ADD)
	{
		//ShowMessageBox(szData);
		dlg.DoModal();
		//	UpdateData(false);

	}
	else
	{
		//ShowMessageBox(szData);
		dlg.DoModal();
	}
	UpdateJson(&jResponse);
	if (nMaloi >= 0 && nMaloi <= 4)
	{
		m_bInsCheck1stCard = false;
	}
	if (IsByPassCheckIns(m_szCardNo))
	{
		m_bInsCheck1stCard = false;
	}
	/*
	jResponse.ToString(tmpStr);
	CT2A str(tmpStr, CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	printf("\nszSQL: %s", str.m_psz);
	*/
}

void CHMSCardEntryDialog::OnCheckInsSelect2()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	UpdateData(true);

	if (m_szCardNo.IsEmpty())
		return;
	/*
	if (IsByPassCheckIns(m_szCardNo))
	{
		m_bInsCheck1stCard = false;
		return;
	}
	*/

	int nCount = OnCardNo2CheckValue();


	CString szJsonData, szData;
	JSONVALUE jRequest, jResponse, jRCard_info;
	JSONVALUE j, jj;
	std::wstring json_string;

	jRCard_info["maThe"] = m_szCardNo2.Left(15);
	jRCard_info["hoTen"] = m_szPatientName;
	_tprintf(_T("%s"), m_szBirthDate);
	if (!m_szBirthDate.IsEmpty())
	{
		jRCard_info["ngaySinh"] = m_szBirthDate.Left(4);
	}
	else
	{
		jRCard_info["ngaySinh"] = _T("1752");
	}
	std::wstring jStr;
	jRCard_info.ToString(jStr);
	szJsonData.Format(_T("%s"), jStr.c_str());


	if (m_szCardNo.IsEmpty())
	{
		ShowMessageBox(L"Mã thẻ không hợp lệ");
		return;
	}


	std::string response;


	bool res = pMF->CheckInsCardInfo(m_szCardNo2, m_szPatientName, m_szBirthDate, response);

	if (!res)
	{
		AfxMessageBox(_T("NhanLichSuKCB2018 error!"));
		return;
	}

	cout << response << endl;



	if (!jResponse.Parse(response))
	{
		cout << "Error parse json" << endl;
		cout << response << endl;
		return;
	}

	CHMSCardInfoCheckIns dlg(this);
	CString tmpStr, tmpStr1, maKetQua;

	j = jResponse.At(_T("maKetQua"));
	j.GetValue(maKetQua);
	if (maKetQua != L"000")
	{
		m_bInsCheck2ndCard = false;
		return;
	}

	j = jResponse.At(_T("ghiChu"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szNOI_DUNG = tmpStr;
	szData.Format(_T("N\x1ED9i \x64ung: %s"), tmpStr);
	CStringToken tk(tmpStr, _T("!"));
	if (tk.GetSize() > 0)
	{
		tk.GetAt(0, tmpStr);
		dlg.m_szCanhbao = tmpStr;

	}

	j = jResponse.At(_T("hoTen"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szHO_TEN = tmpStr;
	szData.AppendFormat(_T("\r\nH\x1ECD t\xEAn: %s"), tmpStr);


	j = jResponse.At(_T("ngayDu5Nam"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	CString szdateover5year;
	szdateover5year = tmpStr;
	szdateover5year.Replace(_T("/"), _T("-"));
	m_szDateOrver5Year = CDate::Convert(szdateover5year, ddmmyyyy, yyyymmdd);
	dlg.m_szNgayDu5nam = m_szDateOrver5Year;
	if (CompareDate(m_szDateOrver5Year, pMF->GetSysDate()) <= 0 && !m_szDateOrver5Year.IsEmpty())
	{

		m_bOver5Year = true;

	}


	j = jResponse.At(_T("ngaySinh"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szNGAY_SINH = tmpStr;
	szData.AppendFormat(_T("\r\nNg\xE0y sinh: %s"), tmpStr);


	j = jResponse.At(_T("gioiTinh"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	tmpStr.Trim();
	//		m_szSexKey = tmpStr== _T("Nam")?_T("M"):_T("F");
	dlg.m_szGIOI_TINH = tmpStr;
	szData.AppendFormat(_T("\r\nGi\x1EDBi t\xEDnh: %s"), tmpStr);


	j = jResponse.At(_T("diaChi"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	tmpStr.Trim();
	//m_szCompany2=tmpStr;
	dlg.m_szDIA_CHI = tmpStr;
	szData.AppendFormat(_T("\r\n\x110\x1ECB\x61 \x63h\x1EC9: %s"), tmpStr);

	j = jResponse.At(_T("maDKBD"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	tmpStr.Trim();
	//m_szRegistrationPlaceKey=tmpStr;
	m_szRegistrationPlace2Key = tmpStr;
	dlg.m_szMADKBD = tmpStr;
	szData.AppendFormat(_T("\r\nM\xE3 \x110K\x42\x110: %s"), tmpStr);


	j = jResponse.At(_T("gtTheTu"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	CString szregdate;
	szregdate = tmpStr;
	dlg.m_szTU_NGAY1 = tmpStr;
	//szregdate.Replace(_T("/"),_T("-"));
	m_szRegDate2 = CDate::Convert(szregdate, ddmmyyyy, yyyymmdd);
	szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"), tmpStr);


	j = jResponse.At(_T("gtTheDen"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	CString szexpdate;
	szexpdate = tmpStr;
	dlg.m_szDEN_NGAY1 = tmpStr;
	m_szExpDate2 = CDate::Convert(szexpdate, ddmmyyyy, yyyymmdd);
	szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"), tmpStr);


	j = jResponse.At(_T("maKV"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szMA_KV = tmpStr;
	szData.AppendFormat(_T("\r\nM\xE3 KV: %s"), tmpStr);


	j = jResponse.At(_T("maTheCu"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szTHE_CU = tmpStr;
	szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB \x63\x169: %s"), tmpStr);

	j = jResponse.At(_T("maTheMoi"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szTHE_MOI = tmpStr;
	szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB m\x1EDBi: %s"), tmpStr);



	j = jResponse.At(_T("gtTheTuMoi"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szTU_NGAY2 = tmpStr;
	szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"), tmpStr);


	j = jResponse.At(_T("gtTheDenMoi"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	tmpStr1.Format(_T("%c"), 34);
	tmpStr.Replace(tmpStr1, _T(""));
	dlg.m_szDEN_NGAY2 = tmpStr;
	szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"), tmpStr);
	j = jResponse.At(_T("dsLichSuKCB2018"));
	dlg.m_json = j;

	j = jResponse.At(_T("dsLichSuKT2018"));
	dlg.m_jsonHisCheck = j;
	dlg.DoModal();

	UpdateJson(&jResponse, false);


}

void CHMSCardEntryDialog::UpdateJson(JSONVALUE* jResponse, bool bPrimaryCard)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString tmpStr, szMsg;
	CDate dte, sysdate(pMF->GetSysDate());
	m_jData = *jResponse;
	bool bCheckSecondCard = false;
	_tprintf(_T("\nbPrimaryCard: %d"), bPrimaryCard);
	if (bPrimaryCard)
	{
		/*
		m_jData[_T("hoTen")].GetValue(m_szPatientName);
		*/
		m_jData[_T("maThe")].GetValue(m_szCardNo);

		m_jData[_T("gtTheTu")].GetValue(tmpStr);
		m_szRegistrationDate = CDate::Convert(tmpStr, ddmmyyyy, yyyymmdd);
		m_jData[_T("gtTheDen")].GetValue(tmpStr);
		m_szExpiryDate = CDate::Convert(tmpStr, ddmmyyyy, yyyymmdd);
		m_jData[_T("maDKBD")].GetValue(m_szRegistrationPlaceKey);

		m_szCardNo += m_szRegistrationPlaceKey;
		/*
		m_jData[_T("maTheCu")].GetValue(m_szCardNo2);
		*/
		m_jData[_T("Over5Year")].GetValue(tmpStr);
		dte.ParseDate(tmpStr, ddmmyyyy);
		m_bOver5Year = FALSE;
		if (dte <= sysdate)
		{
			m_bOver5Year = TRUE;
		}
		/*
		m_jData[_T("maTheMoi")].GetValue(tmpStr);
		if (!tmpStr.IsEmpty() && m_szCardNo2.Find(tmpStr) == -1)
		{
			m_szCardNo2 = tmpStr;
			bCheckSecondCard = true;
			m_bCardNo2Label = true;
		}
		*/
	}

	//else 
	//{
	//	//m_jData[_T("maThe")].GetValue(m_szCardNo2);
	//	m_jData[_T("gtTheTu")].GetValue(tmpStr);
	//	m_szRegDate2 = CDate::Convert(tmpStr, ddmmyyyy, yyyymmdd);
	//	m_jData[_T("gtTheDen")].GetValue(tmpStr);
	//	m_szExpDate2 = CDate::Convert(tmpStr, ddmmyyyy, yyyymmdd);
	//	m_jData[_T("maDKBD")].GetValue(m_szRegistrationPlace2Key);
	//}

	if (!pMF->CheckPermission(_T("TM.200.2")))
	{
		//m_jData[_T("maThe")].GetValue(m_szCardNo2);
		m_jData[_T("gtTheTu")].GetValue(tmpStr);
		m_szRegDate2 = CDate::Convert(tmpStr, ddmmyyyy, yyyymmdd);
		m_jData[_T("gtTheDen")].GetValue(tmpStr);
		m_szExpDate2 = CDate::Convert(tmpStr, ddmmyyyy, yyyymmdd);
		m_jData[_T("maDKBD")].GetValue(m_szRegistrationPlace2Key);
	}

	/*
	m_jData[_T("gtTheTuMoi")].GetValue(m_szRegDate2);
	tmpStr = CDate::Convert(m_szRegDate2, ddmmyyyy, yyyymmdd);
	m_szRegDate2 = tmpStr;
	m_jData[_T("gtTheDenMoi")].GetValue(m_szExpDate2);
	tmpStr = CDate::Convert(m_szExpDate2, ddmmyyyy, yyyymmdd);
	m_szExpDate2 = tmpStr;
	m_jData[_T("RegistrationPlace2")].GetValue(m_szRegistrationPlace2Key);
	m_jData[_T("Company2")].GetValue(m_szCompany2);
	m_jData[_T("Disease")].GetValue(m_szDisease);
	m_jData[_T("Code2")].GetValue(m_szCode2);
	m_jData[_T("Discount2")].GetValue(m_nDiscount2);
	m_jData[_T("Company")].GetValue(m_szCompany);
	m_jData[_T("OffLine")].GetValue(m_bOffLine);
	m_jData[_T("Emergency")].GetValue(m_bEmergency);
	m_jData[_T("CardNo2Label")].GetValue(m_bCardNo2Label);
	m_jData[_T("Code")].GetValue(m_szCode);
	m_jData[_T("Discount")].GetValue(m_nDiscount);
	m_jData[_T("Disrate")].GetValue(m_nDisrate);
	m_jData[_T("Object")].GetValue(m_szObjectKey);
	m_jData[_T("Over5YearOpt")].GetValue(m_bOver5YearOpt);
	m_jData[_T("Disrate2")].GetValue(m_nDisrate2);
	m_jData[_T("OffLine2")].GetValue(m_bOffLine2);
	*/
	UpdateData(FALSE);
	if (bCheckSecondCard)
	{
		szMsg = _T("Bệnh nhân có thẻ nối tiếp. Chương trình sẽ cập nhật thông tin thẻ từ cổng!");
		ShowMessageBox(szMsg);
		OnCheckInsSelect2();
		OnCardNo2CheckValue();
	}
}

long CHMSCardEntryDialog::OnAreaLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndArea, _T("HMS_CARD_AREA"), m_szAreaKey);
	return 0;
}

long CHMSCardEntryDialog::OnDoituong_kcbLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szInsData;
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

	/*
	if(!m_bOffLine && !m_bEmergency)
		szWhere.Format(_T(" and ss_default in ('1','7') "));	
	*/
	GetInsState().ToString(szInsData);
	if (!szInsData.IsEmpty())
	{
		szWhere.AppendFormat(
			_T(" and ss_code IN (select column_value from table(split_str(get_ma_doituong_kcb_v2('%s'))))")
			, szInsData);
	}
	szSQL.Format(
		_T("SELECT  ss_code as id, case when length(trim(ss_vndesc)) >2 ") \
		_T("					then  ss_desc || '(' || ss_vndesc || ')'  ") \
		_T("					else ss_desc end as name ") \
		_T(" FROM sys_sel ") \
		_T(" WHERE 1 = 1 and ss_id = 'sys_ma_doituong_kcb' % s ") \
		_T(" and ss_isactive = 'Y' ") \
		_T(" ORDER BY ss_default ")
		, szWhere);
	m_wndDoituong_kcb.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);	

	if (rs.GetRecordCount() <= 0)
	{
		if (!szInsData.IsEmpty())
		{
			szWhere.Format(
				_T(" and ss_code IN (select column_value from table(split_str(get_ma_doituong_kcb_v2('%s'))))")
				, szInsData);
		}
		szSQL.Format(
			_T("SELECT  ss_code as id, case when length(trim(ss_vndesc)) >2 ") \
			_T("					then  ss_desc || '(' || ss_vndesc || ')'  ") \
			_T("					else ss_desc end as name ") \
			_T(" FROM sys_sel ") \
			_T(" WHERE 1 = 1 and ss_id = 'sys_ma_doituong_kcb' % s ") \
			_T(" and ss_isactive = 'Y' ") \
			_T(" ORDER BY ss_default ")
			, szWhere);
	}
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

JSONVALUE CHMSCardEntryDialog::GetInsState() {
	JSONVALUE jData;
	jData[_T("card_no")] = m_szCardNo;
	jData[_T("ins_line")] = m_bOffLine ? _T("Y") : _T("N");
	jData[_T("emergency")] = m_bEmergency ? _T("Y") : _T("N");
	jData[_T("area")] = m_wndArea.GetCurrent(0);
	jData[_T("ma_doi_tuong")] = m_szDoituong_kcbKey;
	jData[_T("transplace_id")] = m_szHospital.Trim();
	return jData;
}
