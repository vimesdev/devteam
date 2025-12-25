#include "HMSRegistration.h"
// #include "stdafx.h"
#include "MainFrm.h"
#include "resource.h"
/// #include "HMSCardViewDialog.h"
#include "GuiInputDataDialog.h"
#include "HMSAddExtraInforUserDialog.h"
#include "HMSAdditionCardDialog.h"
#include "HMSCardViewDialog.h"
#include "HMSCovid19VaccinInforDialog.h"
#include "HMSDocumentPreviewDialog.h"
#include "HMSExamHtmlDialog.h"
#include "HMSFeeDepositDialog.h"
#include "HMSFindPatientinformationDialog.h"
#include "HMSFunctionalTestDialog.h"
#include "HMSIVFDiscountInforDialog.h"
#include "HMSInsregDateDialog.h"
#include "HMSInsuranceCardSettingDialog.h"
#include "HMSOperationMaterialDialog.h"
#include "HMSPossitionSetupDialog.h"
#include "HMSPriorityDialog.h"
#include "HMSReportForms/PrintForms.h"
#include "HMSThietLap_Diachi_Vaccine.h"
#include "HMSTreatmentHistory.h"
#include "HMSWorkPlace108StaffDlg.h"
#include "HMSWorkingPlaceInfoDialog.h"
#include "NationlityDialog.h"
#include "ReportDocument.h"
#include "StringToken.h"
#include "TransplantDialog.h"
#include "ViewPatientAndRelative.h"

#include <afxinet.h>
static CString _szIsTransplant;

#include "DbfMapParser.h"
#include "HMSPatientEMR.h"
#include "RMCanCuocCDDlg.h"
#include <iostream> // std::cout
#include <sstream>  // std::istringstream
#include <string>   // std::string

bool ParseInsuranceCardInfo(CString szCardInfo, CStringArray &arInfo)
{
    CString szCard;
    szCard.Empty();
    for (int i = 0; i < szCardInfo.GetLength(); i++)
    {
        if (_istalnum(szCardInfo[i]) || szCardInfo[i] == _T('|') ||
            szCardInfo[i] == _T('/'))
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
        // if(i == 1 || i == 4 || i == 14)
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
                ::MultiByteToWideChar(code_page, 0, str.c_str(), str.length(),
                                      szBuffer, str.length());
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

static int _OnViewSecurePatientProfileFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->OnViewSecurePatientProfile();
    return 0;
}

static void _OnTransfeSelectFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->OnTransfeSelect();
}

static void _OnForeignerCheckFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->OnForeignerCheckValue();
}

static int _OnRoomListLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnRoomListLoadData();
}
static int _OnRoomListDblClickFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnRoomListDblClick();
}
static int _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
    return ((CHMSRegistration *)pWnd)
        ->OnRoomListSelectChange(nOldItem, nNewItem);
}
static int _OnRoomListDeleteItemFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnRoomListDeleteItem();
}
static long _OnExamListLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnExamListLoadData();
}
static void _OnExamListDblClickFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->OnExamListDblClick();
}
static void _OnExamListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
    ((CHMSRegistration *)pWnd)->OnExamListSelectChange(nOldItem, nNewItem);
}
static int _OnExamListDeleteItemFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnExamListDeleteItem();
}

static int _OnExamListCancelItemFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnExamListCancelItem();
}

static int _OnExamListSetPriorityFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnExamListSetPriority();
}
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
    ((CHMSRegistration *)pWnd)->OnPatientNoChange();
} */
/*static int _OnPatientNoSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnPatientNoKillfocus();} */
/*static int _OnPatientNoKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPatientNoCheckValue();
}
/*static int _OnDocumentNoChangeFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnDocumentNoChange();
} */
/*static int _OnDocumentNoSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnDocumentNoKillfocus();} */
/*static int _OnDocumentNoKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnDocumentNoCheckValue();
}
static int _OnCardNoFindChangeFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnCardNoFindChange();
}
/*static int _OnCardNoFindSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnCardNoFindKillfocus();} */
/*static int _OnCardNoFindKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnCardNoFindKillfocus();
} */
static int _OnCardNoFindCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnCardNoFindCheckValue();
}
static int _OnPatientNameChangeFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPatientNameChange();
}
/*static int _OnPatientNameSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnPatientNameKillfocus();} */
/*static int _OnPatientNameKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPatientNameCheckValue();
}
static int _OnAgeChangeFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnAgeChange();
}
/*static int _OnAgeSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnAgeKillfocus();} */
/*static int _OnAgeKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnAgeCheckValue();
}
/*static int _OnBirthDateChangeFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnBirthDateChange();
} */
/*static int _OnBirthDateSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnBirthDateKillfocus();} */
/*static int _OnBirthDateKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnBirthDateCheckValue();
}
static int _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnSexSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnSexSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnSexSelendok();
}
/*static int _OnSexSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnSexKillfocus();
}*/
/*static int _OnSexKillfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnSexKillfocus();
}*/
static int _OnSexLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnSexLoadData();
}
/*static int _OnSexAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnSexAddNew();
}*/
static int _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                    int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnEthnicSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnEthnicSelendok();
}
/*static int _OnEthnicSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnEthnicKillfocus();
}*/
/*static int _OnEthnicKillfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnEthnicKillfocus();
}*/
static int _OnEthnicLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnEthnicLoadData();
}
/*static int _OnEthnicAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnEthnicAddNew();
}*/
static int _OnOccupationSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                        int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnOccupationSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnOccupationSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnOccupationSelendok();
}
/*static int _OnOccupationSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnOccupationKillfocus();
}*/
/*static int _OnOccupationKillfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnOccupationKillfocus();
}*/
static int _OnOccupationLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnOccupationLoadData();
}
/*static int _OnOccupationAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnOccupationAddNew();
}*/

static int _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                     int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnProvillSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnProvillSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnProvillSelendok();
}
/*static int _OnProvillSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnProvillSetfocus();
}*/

static int _OnProvillKillfocusFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnProvillKillfocus();
}
static int _OnProvillLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnProvillLoadData();
}
/*static int _OnProvillAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnProvillAddNew();
}*/

static int _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                      int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnDistrictSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnDistrictSelendok();
}

static int _OnDistrictSetfocusFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnDistrictKillfocus();
}

/*static int _OnDistrictKillfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnDistrictSetfocus();
}*/
static int _OnDistrictLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnDistrictLoadData();
}
/*static int _OnDistrictAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnDistrictAddNew();
}*/

static int _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                     int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnVillageSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnVillageSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnVillageSelendok();
}
/*static int _OnVillageSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnVillageKillfocus();
}*/
/*static int _OnVillageKillfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnVillageKillfocus();
}*/
static int _OnVillageLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnVillageLoadData();
}
/*static int _OnVillageAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnVillageAddNew();
}*/

static int _OnAddressSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                     int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnAddressSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnAddressSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnAddressSelendok();
}
/*static int _OnAddressSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnAddressKillfocus();
}*/
/*static int _OnAddressKillfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnAddressKillfocus();
}*/
static int _OnAddressLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnAddressLoadData();
}
/*static int _OnAddressAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnAddressAddNew();
}*/
/*static int _OnDetailAddressChangeFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnDetailAddressChange();
} */
/*static int _OnDetailAddressSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnDetailAddressKillfocus();} */
/*static int _OnDetailAddressKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnDetailAddressCheckValue();
}
/*static void _OnIDNoChangeFnc(CWnd *pWnd){
    ((CHMSRegistration *)pWnd)->OnIDNoChange();
} */
/*static void _OnIDNoSetfocusFnc(CWnd *pWnd){
    ((CHMSRegistration *)pWnd)->OnIDNoSetfocus();} */
/*static void _OnIDNoKillfocusFnc(CWnd *pWnd){
    ((CHMSRegistration *)pWnd)->OnIDNoKillfocus();
} */
static int _OnIDNoCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnIDNoCheckValue();
}

static void _OnWorkingPlaceLabelClickFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->OnWorkingPlaceLabelClick();
}

static void _OnWorkingPlaceEXLabelClickFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->OnWorkingPlaceEXLabelClick();
}

static int _OnWorkingPlaceChangeFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnWorkingPlaceChange();
}

static int _OnWorkingPlaceSetfocusFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnWorkingPlaceSetfocus();
}
static int _OnWorkingPlaceKillfocusFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnWorkingPlaceKillfocus();
}
static int _OnWorkingPlaceCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnWorkingPlaceCheckValue();
}
static void _OnWorkPlaceButtonSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    pVw->OnWorkPlaceButtonSelect();
}

// static int _OnWorkPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int
// nNewItemSel){ 	return ((CHMSRegistration*
//)pWnd)->OnWorkingPlaceSelectChange(nOldItemSel, nNewItemSel);
// }
static int _OnWorkPlaceSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnWorkingPlaceSelendok();
}
// static int _OnWorkPlaceLoadDataFnc(CWnd *pWnd){
//	return ((CHMSRegistration *)pWnd)->OnWorkingPlaceLoadData();
// }
/*static int _OnWorkPlaceAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnWorkingPlaceAddNew();
}*/

static int _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnRankSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnRankSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnRankSelendok();
}

static int _OnWorkingPlaceEXSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnWorkingPlaceEXSelendok();
}
/*static int _OnRankSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnRankKillfocus();
}*/
static int _OnRankKillfocusFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnRankKillfocus();
}
static int _OnRankLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnRankLoadData();
}
/*static int _OnRankAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnRankAddNew();
}*/

static int _OnWorkingPlaceEXLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnWorkingPlaceEXLoadData();
}

static int _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                      int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnPositionSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnPositionSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPositionSelendok();
}
/*static int _OnPositionSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnPositionKillfocus();
}*/
/*static int _OnPositionKillfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnPositionKillfocus();
}*/
static int _OnPositionLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPositionLoadData();
}
/*static int _OnPositionAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnPositionAddNew();
}*/
static int _OnPhoneChangeFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPhoneChange();
}
/*static int _OnPhoneSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnPhoneKillfocus();} */
/*static int _OnPhoneKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPhoneCheckValue();
}
static int _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                    int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnObjectSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnObjectSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnObjectSelendok();
}
static int _OnObjectSetfocusFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnObjectKillfocus();
}
static int _OnObjectKillfocusFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnObjectKillfocus();
}
static int _OnObjectLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnObjectLoadData();
}
/*static int _OnObjectAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnObjectAddNew();
}*/
/*static int _OnCardNoChangeFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnCardNoChange();
} */
/*static int _OnCardNoSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnCardNoKillfocus();} */
/*static int _OnCardNoKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnCardNoCheckValue();
}
static int _OnCardNoButtonSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    return pVw->OnCardNoButtonSelect();
}
static int _OnPatientStateSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                          int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnPatientStateSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnPatientStateSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPatientStateSelendok();
}
/*static int _OnPatientStateSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnPatientStateKillfocus();
}*/
/*static int _OnPatientStateKillfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnPatientStateKillfocus();
}*/
static int _OnPatientStateLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPatientStateLoadData();
}
/*static int _OnPatientStateAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnPatientStateAddNew();
}*/
/*static int _OnExamDateChangeFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnExamDateChange();
} */
/*static int _OnExamDateSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnExamDateKillfocus();} */
/*static int _OnExamDateKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnExamDateCheckValue();
}
static int _OnExamTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                      int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnExamTypeSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnExamTypeSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnExamTypeSelendok();
}
/*static int _OnExamTypeSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnExamTypeKillfocus();
}*/
/*static int _OnExamTypeKillfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnExamTypeKillfocus();
}*/
static int _OnExamTypeLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnExamTypeLoadData();
}
/*static int _OnExamTypeAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnExamTypeAddNew();
}*/
static int _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnRoomSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnRoomSelendokFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnRoomSelendok();
}
/*static int _OnRoomSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnRoomKillfocus();
}*/
/*static int _OnRoomKillfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnRoomKillfocus();
}*/
static int _OnRoomLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnRoomLoadData();
}
/*static int _OnRoomAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnRoomAddNew();
}*/
/*static int _OnHospitalChangeFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnHospitalChange();
} */
/*static int _OnHospitalSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnHospitalKillfocus();} */
/*static int _OnHospitalKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnHospitalKillfocus();
} */
// static int _OnHospitalCheckValueFnc(CWnd *pWnd){
//	return ((CHMSRegistration *)pWnd)->OnHospitalCheckValue();
// }

static int _OnHospitalSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                      int nNewItemSel)
{
    return ((CHMSRegistration *)pWnd)
        ->OnHospitalSelectChange(nOldItemSel, nNewItemSel);
}
// static int _OnHospitalSelendokFnc(CWnd *pWnd){
//  return ((CHMSRegistration *)pWnd)->OnHospitalSelendok();
//}
/*static int _OnHospitalSetfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnHospitalKillfocus();
}*/
/*static int _OnHospitalKillfocusFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnHospitalKillfocus();
}*/
static int _OnHospitalLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnHospitalLoadData();
}
/*static int _OnHospitalAddNewFnc(CWnd *pWnd){
     return ((CHMSRegistration *)pWnd)->OnHospitalAddNew();
}*/

/*static int _OnDiseaseChangeFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnDiseaseChange();
} */
/*static int _OnDiseaseSetfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnDiseaseKillfocus();} */
/*static int _OnDiseaseKillfocusFnc(CWnd *pWnd){
    return ((CHMSRegistration *)pWnd)->OnDiseaseKillfocus();
} */
static int _OnDiseaseCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnDiseaseCheckValue();
}
static int _OnAddNewSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    return pVw->OnAddNewSelect();
}
static int _OnEditSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    return pVw->OnEditSelect();
}

static int _OnDeleteSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    return pVw->OnDeleteSelect();
}

static int _OnSaveSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    return pVw->OnSaveSelect();
}
static int _OnCancelSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    return pVw->OnCancelSelect();
}
static int _OnPrintSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    return pVw->OnPrintSelect();
}
static int _OnCheckInsSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    return pVw->OnCheckInsSelect();
}

static long _OnIssuePlaceLoadDataFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    return pVw->OnIssuePlaceLoadData();
}

static int _OnIssueCardSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    return pVw->OnIssueCardSelect();
}
static int _OnCaptureSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    pVw->OnCaptureSelect();
    return 0;
}

static int _OnDeptButtonSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    pVw->OnDeptButtonSelect();
    return 0;
}

static int _OnAddHMSRegistrationFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnAddHMSRegistration();
}
static int _OnEditHMSRegistrationFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnEditHMSRegistration();
}
static int _OnEditCardInformationFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnEditCardInformation();
}

static int _OnCreateExaminationReceiptFeeFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->OnCreateExaminationReceiptFee();
    return 0;
}

static int _OnAddAdditionalCardFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnAddAdditionalCard();
}

static int _OnIgnoreTransferredInfoFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnIgnoreTransferredInfo();
}

static int _OnDeleteHMSRegistrationFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnDeleteHMSRegistration();
}
static int _OnSaveHMSRegistrationFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnSaveHMSRegistration();
}
static int _OnCancelHMSRegistrationFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnCancelHMSRegistration();
}

static int _OnFunctionalTestFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->OnFunctionalTest();
    return 0;
}
static int _OnAddNewDocumentFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnAddNewDocument();
}

static int _OnAddNewReceptionFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnAddNewReception();
}

static int _OnAddNewReceptionC11Fnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnAddNewReceptionC11();
}
static int _OnCreatedepositFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnCreatedeposit();
}

static int _OnPrintReceptionFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPrintSelect();
}

static int _OnPrintTreatmentFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPrintTreatmentSelect();
}

static int _OnPrintSmartcardFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPrintSmartcard();
}

static void _OnPossitionLabelSelectFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    pVw->OnPossitionLabelSelect();
}

static void _OnRecordNoClickFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    pVw->OnEnterRecordNo();
}
static int _OnRoomCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnRoomCheckValue();
}
static int _OnExamTypeCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnExamTypeCheckValue();
}
static int _OnShowPreHistoryFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnShowPreHistory();
}

static void _OnPatientNoteClickFnc(CWnd *pWnd)
{
    CHMSRegistration *pVw = (CHMSRegistration *)pWnd;
    pVw->OnEnterPatientNote();
}

static int _OnUpdateExtInsCardFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnUpdateExtInsCard();
}

static int _OnUpdateExTraInForFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnUpdateExTraInFor();
}

static int _OnUpdatePaymentInForFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnUpdatePaymentInFor();
}

static int _OnSynInForFromHIStoLISFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnSynInForFromHIStoLIS();
}

static void _On108StaffSelectFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->On108StaffSelect();
}

static int _OnUpdateVaccineCovid19InForFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnUpdateVaccineCovid19InFor();
}

static int _OnUpdateIVFDiscountInForFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnUpdateIVFDiscountInFor();
}

static int _OnAddMaterialFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->OnAddMaterial();
    return 0;
}

static int _OnCreateAdministrationFormFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->OnCreateAdministrationForm();
    return 0;
}

static int _OnFindPatientinformationFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnFindPatientinformation();
}
static long _OnArmObjectLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnArmObjectLoadData();
}
static int _OnPatientNoteCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPatientNoteCheckValue();
}

static int _OnUpdateExTraUserInForFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnUpdateExTraUserInFor();
}
static int _OnPhone2CheckValueFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPhone2CheckValue();
}
static int _OnPrintFreeBfFnc(CWnd *pWnd)
{
    return ((CHMSRegistration *)pWnd)->OnPrintFreeBf();
}

static void _OnUpdatePatientInfor_LabelSelectFnc(CWnd *pWnd)
{
    ((CHMSRegistration *)pWnd)->OnUpdatePatientInforSelect();
}

CHMSRegistration::CHMSRegistration()
{
    m_nDlgWidth = 1010;
    m_nDlgHeight = 665;
    m_rsAddress = NULL;
    m_szOffLine = _T("N");
    m_nPatientNo = 0;
    m_nDocumentNo = 0;
    m_nExaminePerMonth = 0;
    m_nExaminePerWeek = 0;
    m_bHaveAdditionalCard = false;
    m_szOldCardNo.Empty();
    m_nCustomerId = 0;
    m_bShowDupWarning = true;
    m_bNewAddress = false;
    m_bisQMS = false;
    m_nQMSidx = 0;
}
CHMSRegistration::~CHMSRegistration()
{
    if (m_rsAddress)
        delete m_rsAddress;

    m_pos.Uninitialze();
}
void CHMSRegistration::OnCreateComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 690, 300);
    m_wndPatientObject.Create(this, _T("Patient Object"), 5, 300, 690, 350);
    m_wndExaminationInformation.Create(this, _T("Examination Information"), 5,
                                       350, 690, 445);
    m_wndTransferInformation.Create(this, _T("Transfer Information"), 5, 432,
                                    690, 485);
    m_wndRoomsInformation.Create(this, _T("Rooms Information"), 695, 5, 1010,
                                 485);
    m_wndExaminationList.Create(this, _T("Examination History"), 5, 485, 1010,
                                580);
    m_wndCardNoFindLabel.Create(this, _T("Card"), 365, 30, 455, 55);
    m_wndDocumentNo.Create(this, 270, 30, 360, 55);
    m_wndPatientNoLabel.Create(this, _T("Mã số BN (PID)"), 10, 30, 110, 55);
    m_wndPatientNo.Create(this, 115, 30, 195, 55);

    m_wndDocumentNoLabel.Create(this, _T("Doc No"), 200, 30, 265, 55);

    m_wndCardNoFind.Create(this, 460, 30, 610, 55);
    m_wndCheckIns.Create(this, _T("Check In"), 615, 30, 690, 55);
    m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
    m_wndPatientName.Create(this, 115, 60, 360, 85);
    m_wndAgeLabel.Create(this, _T("Age"), 365, 60, 455, 85);
    m_wndAge.Create(this, 460, 60, 555, 85);
    m_wndBirthDate.Create(this, 560, 60, 685, 85);
    m_wndSexLabel.Create(this, _T("Giới tính"), 10, 90, 110, 115);
    m_wndSex.Create(this, 115, 90, 195, 115);
    m_wndEthnicLabel.Create(this, _T("Ethnic"), 200, 90, 265, 115);
    m_wndEthnic.Create(this, 270, 90, 360, 115);
    m_wndOccupationLabel.Create(this, _T("Occupation"), 365, 90, 455, 115);
    m_wndOccupation.Create(this, 460, 90, 685, 115);
    m_wndProvillLabel.Create(this, _T("Provill"), 10, 120, 110, 145);
    m_wndProvill.Create(this, 115, 120, 360, 145);
    m_wndDistrictLabel.Create(this, _T("District"), 363, 120, 455, 145);
    m_wndDistrict.Create(this, 460, 120, 685, 145);
    m_wndVillageLabel.Create(this, _T("Village"), 10, 150, 110, 175);
    m_wndVillage.Create(this, 115, 150, 360, 175);

    m_wndDetailAddressLabel.Create(this, _T("Địa chỉ chi tiết"), 365, 150, 455,
                                   175);
    m_wndDetailAddress.Create(this, 460, 150, 685, 175);

    // m_wndDetailAddressLabel.Create(this, _T("Địa chỉ chi tiết"), 365, 180,
    // 455,205); m_wndDetailAddress.Create(this, 460, 180, 685, 205);

    m_wndIDNoLabel.Create(this, _T("Số CCCD"), 10, 180, 110, 205);
    m_wndIDNo.Create(this, 115, 180, 360, 205);
    m_wndIDNoLabel.SetTextColor(RGB(255, 0, 0));

    m_wndIssueDateLabel.Create(this, _T("Issue Date"), 363, 180, 455, 205);
    m_wndIssueDate.Create(this, 460, 180, 460 + 85, 205);
    m_wndIssuePlaceLabel.Create(this, _T("Issue Place"), 460 + 90, 180,
                                460 + 150, 205);
    m_wndIssuePlace.Create(this, 460 + 155, 180, 685, 205);

    /*m_wndIssueDateLabel.Create(this, _T("Issue Date"), 10, 180, 110, 205);
    m_wndIssueDate.Create(this,115, 180, 360, 205);
    m_wndIssuePlaceLabel.Create(this, _T("Issue Place"), 365, 180, 455, 205);
    m_wndIssuePlace.Create(this,460, 180, 685, 205);*/

    if (pMF->CheckPermission(_T("RM.100.1")))
    {
        m_wndWorkingPlaceEXLabel.Create(this, _T("Đơn vị"), 10, 210, 110, 235);
        m_wndWorkingPlaceEX.Create(this, 115, 210, 360, 235);
    }
    else
    {
        m_wndWorkingPlaceLabel.Create(this, _T("Working Place"), 10, 210, 110,
                                      235);
        m_wndWorkingPlace.Create(this, 115, 210, 330, 235);
        m_wndWorkPlaceButton.Create(this, _T("@"), 335, 210, 360, 235);
    }
    m_wndPhoneLabel.Create(this, _T("Telephone"), 365, 210, 455, 235);
    m_wndPhoneLabel.SetTextColor(RGB(255, 0, 0));

    // m_wndPhone.Create(this,460, 210, 685, 235);
    m_wndPhone.Create(this, 460, 210, 570, 235);
    m_wndPhone2.Create(this, 574, 210, 685, 235);

    m_wndArmObjectLabel.Create(this, _T("Đối tượng quân đội"), 10, 240, 110,
                               265);
    m_wndArmObject.Create(this, 115, 240, 200, 265);

    m_wndRankLabel.Create(this, _T("Rank"), 205, 240, 265, 265);
    m_wndRank.Create(this, 270, 240, 360, 265);

    m_wndPositionLabel.Create(this, _T("Position"), 365, 240, 455, 265);
    m_wndPosition.Create(this, 460, 240, 685, 265);
    m_wndContactAddressLabel.Create(this, _T("Contact Addr"), 10, 270, 110,
                                    295);
    m_wndContactAddress.Create(this, 115, 270, 360, 295);
    m_wndSmartcardIDLabel.Create(this, _T("Smartcard ID"), 0, 0, 0, 0);
    m_wndSmartcardID.Create(this, 0, 0, 0, 0);

    m_wndPatientNoteLabel.Create(this, _T("Note"), 365, 270, 455, 295);
    m_wndPatientNote.Create(this, 460, 270, 655, 295);
    m_wndPatientNoteLabel.SetTextColor(RGB(255, 0, 0));
    m_wndPatientNote.SetTextColor(RGB(255, 0, 0));

    m_wndCapture.Create(this, _T("@"), 660, 270, 685, 295);
    m_wndForeigner.Create(this, _T("Foreigner"), 365, 302, 500, 322);
    m_wndForeignerDesc.Create(this, _T(""), 505, 302, 600, 322);
    m_wndViettel.Create(this, _T("Viettel"), 605, 302, 700, 322);
    m_wnd108Staff.Create(this, _T("108Staff"), 155, 302, 280, 322);
    m_wndObjectLabel.Create(this, _T("Object"), 10, 325, 110, 347);
    m_wndObject.Create(this, 115, 325, 360, 347);
    m_wndCardNoLabel.Create(this, _T("Card No"), 365, 325, 445, 347);
    m_wndCardNo.Create(this, 450, 325, 655, 347);
    m_wndCardNoButton.Create(this, _T("@"), 660, 325, 685, 347);
    m_wndPatientStateLabel.Create(this, _T("Patient State"), 10, 373, 110, 395);
    m_wndPatientState.Create(this, 115, 373, 360, 395);
    m_wndPatientState.EnableWindow(false);
    m_wndExamDateLabel.Create(this, _T("Date"), 365, 373, 445, 395);
    m_wndExamDate.Create(this, 450, 373, 575, 395);
    m_wndSheetNoLabel.Create(this, _T("Sheet No"), 580, 373, 635, 395);
    m_wndSheetNo.Create(this, 640, 373, 685, 395);
    m_wndExamTypeLabel.Create(this, _T("Exam Type"), 10, 403, 110, 425);
    m_wndExamType.Create(this, 115, 403, 360, 425);

    m_wndRoomLabel.Create(this, _T("Phòng khám (PK)"), 365, 403, 445, 425);
    m_wndRoom.Create(this, 450, 403, 685, 425);
    m_wndHospitalLabel.Create(this, _T("Hospital"), 10, 461, 90, 483);
    m_wndTransfer.Create(this, _T(""), 95, 461, 110, 483);
    m_wndHospital.Create(this, 115, 461, 360, 483);
    m_wndDiseaseLabel.Create(this, _T("Disease"), 365, 458, 445, 483);
    m_wndDisease.Create(this, 450, 461, 685, 483);
    m_wndExaminePerWeekLabel.Create(this, _T("Examine Per Week"), 700, 510, 910,
                                    532);
    m_wndExaminePerWeek.Create(this, 916, 510, 1006, 532);
    m_wndExaminePerMonthLabel.Create(this, _T("Examine Per Month"), 700, 536,
                                     910, 558);
    m_wndExaminePerMonth.Create(this, 916, 536, 1006, 558);
    m_wndAppointReexamine.Create(this, _T("Appoint Re-examine"), 700, 558, 910,
                                 580);
    m_wndAppointReexamineDate.Create(this, 916, 558, 1006, 580);
    m_wndAddNew.Create(this, _T("&Add Patient"), 5, 585, 115, 607);
    m_wndEdit.Create(this, _T("&Edit"), 120, 585, 230, 607);
    m_wndDelete.Create(this, _T("Delete"), 235, 585, 345, 607);
    m_wndSave.Create(this, _T("&Save"), 350, 585, 460, 607);
    m_wndCancel.Create(this, _T("&Cancel"), 465, 585, 575, 607);
    m_wndPrint.Create(this, _T("&Print"), 580, 585, 690, 607);
    // m_wndIssueCard.Create(this, _T("&Issue Card"), 605, 635, 700, 660);
    m_wndIssueCard.Create(this, _T("&Issue Card"), 0, 0, 0, 0);

    m_wndOutPatientRecord.Create(this, 755, 585, 825, 605);
    m_wndAmountDepositLabel.Create(this, _T("Deposit"), 830, 585, 910, 605);
    m_wndAmountDeposit.Create(this, 915, 585, 1005, 605);
    m_wndOutPatientRecordNoLabel.Create(this, _T("Rec"), 705, 585, 745, 605);
    m_wndRoomList.Create(this, 700, 30, 1005, 475);
    m_wndExamList.Create(this, 10, 510, 690, 575);

    m_wndHuongdieutri.Create(this, _T(""), 115, 486, 685, 505);
    m_wndHuongdieutri.SetTextColor(RGB(255, 0, 0));

    m_wndAddress.Create(this, 0, 0, 0, 0);
    m_wndAddress.ShowWindow(SW_HIDE);
    m_wndAddress.EnableWindow(FALSE);
    m_wndRelative.Create(this, 0, 0, 0, 0);
    m_wndRelative.ShowWindow(SW_HIDE);
    m_wndRelative.EnableWindow(FALSE);
    m_wndIssueCard.ShowWindow(SW_HIDE);
}
void CHMSRegistration::OnInitializeComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetDefaultValues();

    m_wndForeigner.ModifyStyle(WS_TABSTOP, 0);
    m_wndViettel.ModifyStyle(WS_TABSTOP, 0);
    m_wndSmartcardID.SetReadOnly();
    // m_wndIssueCard.ModifyStyle(WS_TABSTOP, NULL);
    // m_wndIssueCard.EnableWindow(FALSE);
    m_szDept = pMF->m_szDept;
    m_wndWorkPlaceButton.ModifyStyle(WS_TABSTOP, 0);
    //	SetMode(VM_NONE);
    m_wndPatientNo.SetLimitText(9);
    m_wndPatientNo.SetCheckValue(true);
    m_wndPatientNo.SetNotEmpty(false);
    m_wndDocumentNo.SetLimitText(9);
    m_wndDocumentNo.SetCheckValue(true);
    m_wndDocumentNo.SetNotEmpty(false);
    m_wndCardNoFind.SetLimitText(512);
    // m_wndCardNoFind.SetCheckValue(true);
    m_wndCardNoFind.SetNotEmpty(false);
    m_wndCardNoFind.ModifyStyle(0, ES_UPPERCASE);
    m_wndPatientName.SetLimitText(65);

    m_wndCheckIns.ModifyStyle(WS_TABSTOP, 0);
    m_wndCapture.ModifyStyle(WS_TABSTOP, 0);

    m_wndPatientName.SetCheckValue(true);
    m_wndPatientName.SetInitCap(true);
    m_wndAge.SetLimitText(8);
    m_wndAge.SetCheckValue(true);
    m_wndBirthDate.SetReadOnly(true);
    m_wndSex.SetCheckValue(true);
    m_wndSex.LimitText(5);
    m_wndEthnic.SetCheckValue(true);
    m_wndEthnic.LimitText(15);
    m_wndOccupation.SetCheckValue(true);
    m_wndOccupation.LimitText(30);
    m_wndPatientNameLabel.SetHyperlink(true);

    m_wndDetailAddress.SetLimitText(254);
    //	m_wndDetailAddress.SetCheckValue(true);
    m_wndIDNo.SetLimitText(12);

    if (pMF->GetObjectType() != _T("S"))
    {
        m_wndIDNo.SetCheckValue(true);
    }
    else
    {
        m_wndIDNo.SetCheckValue(false);
    }

    // Bat buoc chon tinh và xã
    m_wndProvill.SetCheckValue(true);
    if (m_bNewAddress)
    {
        m_wndVillage.SetCheckValue(true);
        // Xử lý phần địa chỉ mới. Huyện không cần phải nhập nữa nên bỏ check đi
        m_wndDistrict.SetCheckValue(false);
        m_wndDistrict.SetReadOnly(TRUE);
    }

    /*
    if (pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
    {
<<<<<<<<< Temporary merge branch 1
        m_wndProvill.SetCheckValue(true);
=========
>>>>>>>>> Temporary merge branch 2
        //m_wndDistrict.SetCheckValue(true);
        m_wndVillage.SetCheckValue(true);
    }
    */

    // m_wndWorkingPlace.SetLimitText(254);
    m_wndWorkingPlace.LimitText(254);
    // m_wndList.ShowWindow(SW_HIDE);
    m_wndWorkingPlace.SetCheckValue(false);
    // m_wndWorkingPlace.SetRequirementLength(3);
#ifndef HOSPITAL_108
    m_wndAddress.SetCheckValue(true);
    m_wndAddress.SetSearchStyle(SS_LIKE);
    m_wndAddress.SetSearchEx(true);
    m_wndAddress.SetRequirementLength(2);
    m_wndAddress.LimitText(254);
    m_wndAddress.SetColumnKey(2);

    m_wndRelative.SetInitCap(true);
    m_wndRelative.SetLimitText(65);
#else
    m_wndProvill.SetSearchStyle(SS_LIKE);
    m_wndProvill.LimitText(254);

    m_wndDistrict.SetSearchStyle(SS_LIKE);
    m_wndDistrict.LimitText(254);

    m_wndVillage.SetSearchStyle(SS_LIKE);
    m_wndVillage.LimitText(254);

    //	m_wndRank.SetCheckValue(true);
    m_wndRank.LimitText(65);
#endif

    if (pMF->m_IsC12)
    {
        m_wndProvill.SetCheckValue(true);
        // m_wndDistrict.SetCheckValue(true);
        m_wndVillage.SetCheckValue(true);
        // m_wndPhone.SetCheckValue(true);
        m_wndRank.SetCheckValue(true);
        // m_wndPosition.SetCheckValue(true);
    }
    else
    {
        m_wndRank.SetCheckValue(false);
        m_wndPosition.SetCheckValue(false);
    }

    m_wndPositionLabel.SetHyperlink(true);
    m_wndPosition.SetCheckValue(false);
    m_wndPosition.LimitText(35);

    m_wndPhone.SetLimitText(10);
    m_wndPhone.SetCheckValue(true);

    m_wndPhone2.SetLimitText(10);
    m_wndPhone2.SetCheckValue(false);

    m_wndObject.SetCheckValue(true);
    m_wndObject.LimitText(15);
    m_wndCardNo.SetLimitText(25);
    m_wndCardNo.ModifyStyle(0, ES_UPPERCASE);
    m_wndCardNo.SetReadOnly(true);
    m_wndCardNo.SetTextColor(RGB(64, 128, 255));
    m_wndPatientNote.ModifyStyle(0, ES_UPPERCASE);

    m_wndPatientState.SetCheckValue(true);
    m_wndPatientState.LimitText(15);
    //	m_wndExamDate.SetMax(Cdate(pMF->GetSysDateTime()));
    m_wndExamDate.SetCheckValue(true);
    m_wndExamDate.SetReadOnly(true);
    m_wndExamDate.ModifyStyle(WS_TABSTOP, 0);
    m_wndExamType.SetCheckValue(true);
    m_wndExamType.LimitText(15);
    m_wndRoom.SetCheckValue(true);
    m_wndRoom.LimitText(15);
    m_wndSheetNo.SetReadOnly(true);
    m_wndSheetNo.ModifyStyle(0, ES_RIGHT);

    m_wndAmountDeposit.SetCurrencyFormat(TRUE);
    m_wndOutPatientRecord.SetReadOnly(TRUE);

    //	m_wndHospital.SetLimitText(254);
    //	m_wndHospital.SetCheckValue(true);
    //	m_wndHospital.SetInitCap(true);
    m_wndDisease.SetLimitText(254);
    m_wndDisease.SetInitCap(true);
    //	m_wndDisease.SetCheckValue(true);

    m_wndExaminePerWeek.SetReadOnly(true);
    m_wndExaminePerMonth.SetReadOnly(true);
    m_wndAppointReexamine.ModifyStyle(WS_TABSTOP, 0);
    m_wndAppointReexamineDate.SetReadOnly(true);
    m_wndAmountDeposit.SetReadOnly(true);

    m_wndOutPatientRecord.SetReadOnly(true);

    if (pMF->CheckPermission(_T("RM.100.1")))
    {
        m_wndWorkingPlaceEX.SetCheckValue(true);
    }

    m_wndIssuePlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
    m_wndIssuePlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
    m_wndIssuePlace.InsertColumn(2, _T("Shortcut"), CFMT_TEXT, 70);

    m_wndRoomList.InsertColumn(0, _T("Room"), CFMT_TEXT, 200);
    m_wndRoomList.InsertColumn(1, _T("Hạn mức"), CFMT_NUMBER, 50);
    m_wndRoomList.InsertColumn(2, _T("Tiếp đón(A)"), CFMT_NUMBER, 70);
    m_wndRoomList.InsertColumn(3, _T("Đã khám(B)"), CFMT_NUMBER, 70);
    m_wndRoomList.InsertColumn(4, _T("DV(A)"), CFMT_NUMBER, 50);
    m_wndRoomList.InsertColumn(5, _T("BH(A)"), CFMT_NUMBER, 50);
    m_wndRoomList.InsertColumn(6, _T("DV(B)"), CFMT_NUMBER, 50);
    m_wndRoomList.InsertColumn(7, _T("BH(B)"), CFMT_NUMBER, 50);

    /*m_wndRoomList.GetHeaderControl()->SetItemHeight(2);
    m_wndRoomList.GetHeaderControl()->MergeCell(_T("Registed"), 0, 4, 1, 5);
    m_wndRoomList.GetHeaderControl()->MergeCell(_T("Examed"), 0, 6, 1, 7,
    true);*/

    m_wndRoomList.ModifyStyle(0, LVS_NOSORTHEADER);

    m_wndExamList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 70);
    m_wndExamList.InsertColumn(1, _T("Examination Date"), CFMT_TEXT, 85);
    m_wndExamList.InsertColumn(2, _T("Examination Room"), CFMT_TEXT, 250);
    m_wndExamList.InsertColumn(3, _T("Sheet No"), CFMT_NUMBER, 70);
    m_wndExamList.InsertColumn(4, _T("Doctor"), CFMT_TEXT, 120);
    m_wndExamList.InsertColumn(5, _T("Status"), CFMT_TEXT, 85);
    m_wndExamList.InsertColumn(6, _T("Recept Idx"), CFMT_TEXT, 0);
    m_wndExamList.InsertColumn(7, _T("Diagnostic"), CFMT_TEXT, 0);
    m_wndExamList.InsertColumn(8, _T("Payment"), CFMT_TEXT | CFMT_CENTER, 150);
    m_wndExamList.InsertColumn(9, _T("HE_FEEIDX"), CFMT_TEXT | CFMT_CENTER, 0);
    m_wndExamList.SetItemHeight(30);

    m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
    m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);

    m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
    m_wndEthnic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

    m_wndOccupation.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
    m_wndOccupation.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

    // m_wndWorkingPlace.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    // m_wndWorkingPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 225);

    // m_wndWorkingPlace.SetColumnKey(2);

#ifndef HOSPITAL_108
    m_wndAddress.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
    m_wndAddress.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);
    m_wndAddress.InsertColumn(2, _T("Code"), CFMT_TEXT, 100);

    m_wndRelative.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
    m_wndRelative.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
    m_wndPosition.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
    m_wndPosition.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

#else
    m_wndProvill.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
    m_wndProvill.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
    m_wndProvill.InsertColumn(2, _T("Shortcut"), CFMT_TEXT, 70);

    m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
    m_wndDistrict.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
    m_wndDistrict.InsertColumn(2, _T("Code"), CFMT_TEXT, 50);

    m_wndVillage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
    m_wndVillage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
    m_wndVillage.InsertColumn(2, _T("Code"), CFMT_TEXT, 70);

    m_wndArmObject.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_CENTER, 40);
    m_wndArmObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

    m_wndRank.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_CENTER, 40);
    m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

    m_wndPosition.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
    m_wndPosition.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

    m_wndWorkingPlaceEX.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndWorkingPlaceEX.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

#endif

    m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndObject.InsertColumn(1, _T("Đối tượng"), CFMT_TEXT, 390);
    m_wndObject.InsertColumn(2, _T("Has Card"), CFMT_TEXT, 0);
    m_wndObject.InsertColumn(3, _T("type"), CFMT_TEXT, 0);
    m_wndObject.InsertColumn(4, _T("discount"), CFMT_NUMBER, 0);

    m_wndPatientState.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
    m_wndPatientState.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);

    m_wndExamType.InsertColumn(0, _T("ID"), CFMT_TEXT, 35);
    m_wndExamType.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
    m_wndExamType.InsertColumn(2, _T("Service Price"), CFMT_NUMBER, 100);
    m_wndExamType.InsertColumn(3, _T("Insurance Price"), CFMT_NUMBER, 100);
    m_wndExamType.InsertColumn(4, _T("Policy Price"), CFMT_NUMBER, 150);
    m_wndExamType.InsertColumn(5, _T(""), CFMT_TEXT, 0); // Multi
    m_wndExamType.InsertColumn(6, _T(""), CFMT_TEXT, 0); // itemid
    m_wndExamType.InsertColumn(7, _T(""), CFMT_TEXT, 0); // itype
    m_wndExamType.InsertColumn(8, _T(""), CFMT_TEXT,
                               0); // printsubitem (dung de in phieu bao an)
    m_wndExamType.InsertColumn(9, _T(""), CFMT_TEXT,
                               0); // Lưu trú do nghi nhiễm covid 19)

    /*m_wndRoom.InsertColumn(1, _T("STT"), CFMT_NUMBER, 80);
    m_wndRoom.InsertColumn(2, _T("Name"), CFMT_TEXT, 550);
    m_wndRoom.InsertColumn(3, _T("ID"), CFMT_NUMBER, 0);
    m_wndRoom.InsertColumn(4, _T("Phân loại"), CFMT_TEXT, 0);
    m_wndRoom.InsertColumn(5, _T("Khoa"), CFMT_TEXT, 90);*/

    m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
    m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 550);
    m_wndRoom.InsertColumn(2, _T("Phân loại"), CFMT_TEXT, 0);
    m_wndRoom.InsertColumn(3, _T("Khoa"), CFMT_TEXT, 80);
    m_wndRoom.InsertColumn(4, _T("Key"), CFMT_TEXT, 0);

    m_wndHospital.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
    m_wndHospital.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

    m_wnd108Staff.ModifyStyle(WS_TABSTOP, 0);

    // hms_patient: thong tin chinh cua benh nhan
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
    m_hms_patientTbl.AddField(_T("hp_ethnic"), dfInteger);
    m_hms_patientTbl.AddField(_T("hp_sin"), dfText, 13);
    m_hms_patientTbl.AddField(_T("hp_provid"), dfInteger);
    m_hms_patientTbl.AddField(_T("hp_distid"), dfLong);
    m_hms_patientTbl.AddField(_T("hp_villid"), dfLong);
    m_hms_patientTbl.AddField(_T("hp_dtladdr"), dfText, 128);
    m_hms_patientTbl.AddField(_T("hp_occupation"), dfInteger);
    m_hms_patientTbl.AddField(_T("hp_workplace"), dfText, 128);
    m_hms_patientTbl.AddField(_T("hp_workplaceid"), dfText, 13);
    m_hms_patientTbl.AddField(_T("hp_status"), dfText, 1);
    m_hms_patientTbl.AddField(_T("hp_rank"), dfInteger);
    m_hms_patientTbl.AddField(_T("hp_position"), dfInteger);
    m_hms_patientTbl.AddField(_T("hp_nationality"), dfText, 3);

    // hms_doc: Thong tin tung dot kham cua benh nhan
    m_hms_docTbl.SetTableName(_T("hms_doc"));
    m_hms_docTbl.AddField(_T("hd_createdby"), dfText, 15);
    m_hms_docTbl.AddField(_T("hd_createddate"), dfDateTime);
    m_hms_docTbl.AddField(_T("hd_updatedby"), dfText, 15);
    m_hms_docTbl.AddField(_T("hd_updateddate"), dfDateTime);
    m_hms_docTbl.AddField(_T("hd_docno"), dfLong);
    m_hms_docTbl.AddField(_T("hd_patientno"), dfLong);
    m_hms_docTbl.AddField(_T("hd_status"), dfText, 1);
    m_hms_docTbl.AddField(_T("hd_telephone"), dfText, 30);
    m_hms_docTbl.AddField(_T("hd_relative"), dfText, 65);
    m_hms_docTbl.AddField(_T("hd_relation"), dfInteger);
    m_hms_docTbl.AddField(_T("hd_contactaddr"), dfText, 254);
    m_hms_docTbl.AddField(_T("hd_contacttel"), dfText, 30);
    m_hms_docTbl.AddField(_T("hd_object"), dfText, 3);
    m_hms_docTbl.AddField(_T("hd_cardno"), dfText, 25);
    m_hms_docTbl.AddField(_T("hd_cardidx"), dfLong);
    m_hms_docTbl.AddField(_T("hd_insregdate"), dfDate);
    m_hms_docTbl.AddField(_T("hd_disrate"), dfInteger);
    m_hms_docTbl.AddField(_T("hd_insline"), dfText, 1);
    m_hms_docTbl.AddField(_T("hd_admitstate"), dfText, 1);
    m_hms_docTbl.AddField(_T("hd_admitdate"), dfDateTime);
    m_hms_docTbl.AddField(_T("hd_admitdept"), dfText, 7);
    m_hms_docTbl.AddField(_T("hd_transplace"), dfText, 254);
    m_hms_docTbl.AddField(_T("hd_transdiagn"), dfText, 245);
    m_hms_docTbl.AddField(_T("hd_transplaceid"), dfText, 7);
    m_hms_docTbl.AddField(_T("hd_xobject"), dfText, 1);
    m_hms_docTbl.AddField(_T("hd_xcardno"), dfText, 25);
    m_hms_docTbl.AddField(_T("hd_xissueplace"), dfText, 128);
    m_hms_docTbl.AddField(_T("hd_xissuedate"), dfDate);
    m_hms_docTbl.AddField(_T("hd_healthexam"), dfText, 1);
    // m_hms_docTbl.AddField(_T("hd_transicd"), dfText, 11);
    m_hms_docTbl.AddField(_T("hd_viettel_object"), dfText, 1);
    m_hms_docTbl.AddField(_T("HD_108staff"), dfText, 1);
    m_hms_docTbl.AddField(_T("hd_icard_issuedate"), dfDate);
    m_hms_docTbl.AddField(_T("hd_icard_issueplace"), dfText, 5);
    m_hms_docTbl.AddField(_T("hd_army_objectid"), dfText, 2);

    m_hms_docTbl.AddField(_T("hd_over5year"), dfText,
                          1); // Được hưởng hay không?
    m_hms_docTbl.AddField(_T("HD_OVER5YEARAPPLYDATE"),
                          dfDate); // Thời gian được hưởng 5 năm liên tục
    m_hms_docTbl.AddField(_T("hd_hasfeepaper"), dfText,
                          1); // Có giấy miễn cùng chi trả hay không?
    m_hms_docTbl.AddField(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"),
                          dfDate); // Thời gian được miễn cùng chi trả
    m_hms_docTbl.AddField(_T("HD_MA_DOITUONG_KCB"), dfText,
                          3); // Mã đối tượng KCB theo thông tư 130 của Bảo hiểm
    m_hms_docTbl.AddField(_T("hd_telephone2"), dfText,
                          30); // Số điện thoại 2, phục vụ chủ yêu cho C12

    m_hms_docTbl.AddField(_T("hd_provid"), dfInteger);
    m_hms_docTbl.AddField(_T("hd_distid"), dfLong);
    m_hms_docTbl.AddField(_T("hd_villid"), dfLong);
    m_hms_docTbl.AddField(_T("hd_dtladdr"), dfText, 254);
    // hms_card: Thong tin the cua benh nhan
    m_hms_cardTbl.SetTableName(_T("hms_card"));
    m_hms_cardTbl.AddField(_T("hc_updatedby"), dfText, 15);
    m_hms_cardTbl.AddField(_T("hc_updateddate"), dfDateTime);
    m_hms_cardTbl.AddField(_T("hc_patientno"), dfLong);
    m_hms_cardTbl.AddField(_T("hc_docno"), dfLong);
    m_hms_cardTbl.AddField(_T("hc_cardno"), dfText, 25);
    m_hms_cardTbl.AddField(_T("hc_idx"), dfLong);
    m_hms_cardTbl.AddField(_T("hc_regdate"), dfDate);
    m_hms_cardTbl.AddField(_T("hc_expdate"), dfDate);
    m_hms_cardTbl.AddField(_T("hc_regcode"), dfText, 11);
    m_hms_cardTbl.AddField(_T("hc_company"), dfText, 254);
    m_hms_cardTbl.AddField(_T("hc_code"), dfText, 3);
    m_hms_cardTbl.AddField(_T("hc_discount"), dfInteger);
    m_hms_cardTbl.AddField(_T("hc_line"), dfInteger);
    m_hms_cardTbl.AddField(_T("hc_groupid"), dfInteger);
    m_hms_cardTbl.AddField(_T("hc_area"), dfText, 3);
    m_hms_cardTbl.AddField(_T("hc_over5year"), dfText, 1);

    // Thong tin cac lan kham cua benh nhan
    m_hms_examTbl.SetTableName(_T("hms_exam"));
    m_hms_examTbl.AddField(_T("he_createdby"), dfText, 15);
    m_hms_examTbl.AddField(_T("he_createddate"), dfDateTime);
    m_hms_examTbl.AddField(_T("he_updatedby"), dfText, 15);
    m_hms_examTbl.AddField(_T("he_updateddate"), dfDateTime);
    m_hms_examTbl.AddField(_T("he_patientno"), dfLong);
    m_hms_examTbl.AddField(_T("he_docno"), dfLong);
    m_hms_examTbl.AddField(_T("he_deptid"), dfText, 7);
    m_hms_examTbl.AddField(_T("he_roomid"), dfInteger);
    m_hms_examTbl.AddField(_T("he_receptno"), dfInteger);
    m_hms_examTbl.AddField(_T("he_feeidx"), dfInteger);
    m_hms_examTbl.AddField(_T("he_examtype"), dfText, 13);
    m_hms_examTbl.AddField(_T("he_status"), dfText, 1);
    m_hms_examTbl.AddField(_T("he_examdate"), dfDateTime);
    m_hms_examTbl.AddField(_T("he_doctor"), dfText, 15);
    m_hms_examTbl.AddField(_T("he_examine"), dfText, 512);
    // m_hms_examTbl.AddField(_T("he_prediagnostic"), dfText, 128);
    // m_hms_examTbl.AddField(_T("he_diagnostic"), dfText, 254);
    m_hms_examTbl.AddField(_T("he_hasfee"), dfText, 1);
    // m_hms_examTbl.AddField(_T("he_typeid"), dfInteger);
    m_hms_examTbl.AddField(_T("he_exammove"), dfText, 1);
    m_hms_examTbl.AddField(_T("he_zone"), dfText, 3);

    m_bh_xmlTbl.SetTableName(_T("bh_xml"));
    m_bh_xmlTbl.AddField(_T("docno"), dfLong);
    m_bh_xmlTbl.AddField(_T("ma_lk"), dfText, 20);
    m_bh_xmlTbl.AddField(_T("ma_cskcb"), dfText, 20);
    ;
    m_bh_xmlTbl.AddField(_T("tu_ngay"), dfText, 8);
    m_bh_xmlTbl.AddField(_T("den_ngay"), dfText, 8);
    m_bh_xmlTbl.AddField(_T("ten_benh"), dfText, 255);
    m_bh_xmlTbl.AddField(_T("tinhtrang"), dfText, 8);
    m_bh_xmlTbl.AddField(_T("kq_dieutri"), dfText, 1);

    m_bh_cardinfoTbl.SetTableName(_T("bh_cardinfo"));
    m_bh_cardinfoTbl.AddField(_T("docno"), dfLong);
    m_bh_cardinfoTbl.AddField(_T("mathe"), dfText, 20);
    m_bh_cardinfoTbl.AddField(_T("hoten"), dfText, 85);
    m_bh_cardinfoTbl.AddField(_T("ngaydk"), dfText, 12);
    m_bh_cardinfoTbl.AddField(_T("ngayhh"), dfText, 12);
    m_bh_cardinfoTbl.AddField(_T("ngaysinh"), dfText, 14);
    m_bh_cardinfoTbl.AddField(_T("gioitinh"), dfText, 5);
    m_bh_cardinfoTbl.AddField(_T("diachi"), dfText, 250);
    m_bh_cardinfoTbl.AddField(_T("kcbbd"), dfText, 10);
    m_bh_cardinfoTbl.AddField(_T("du5nam"), dfText, 12);

    m_hms_fee_depositTbl.SetTableName(_T("hms_fee_deposit"));
    m_hms_fee_depositTbl.AddField(_T("hfe_deptid"), dfText, 7);
    m_hms_fee_depositTbl.AddField(_T("hfe_refidx"), dfInteger);
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
    m_hms_fee_depositTbl.AddField(_T("hfe_org_id"), dfText, 3);

    /*
    CString szSQL;
    m_rsAddress = new CRecord(&pMF->m_db);
    szSQL.Format(_T("select distinct sv_id as id, sv_name||' - '||sd_name||' -
    '||sp_name as name, \
                    sv_wrd||sd_wrd||sp_wrd as srch \
                    from sys_prov left join sys_dist on(sd_provid=sp_id) \
                    left join sys_vill on(sv_provid=sd_provid and
    sv_distid=sd_id) \ order by sv_id ")); m_rsAddress->ExecSQL(szSQL);
    */

    m_szFromDate = m_szToDate = pMF->GetSysDate();
    m_szFromDate += _T("00:00");
    m_szToDate += _T("23:59");

    m_insCheckin.Laythongtinketnoi();
    // SetTimer(1, 50000, NULL);
}
#include "Resource.h"
void CHMSRegistration::OnSetWindowEvents()
{
    m_wndIssuePlace.SetEvent(WE_LOADDATA, _OnIssuePlaceLoadDataFnc);
    // m_wndIssueCard.SetEvent(WE_CLICK, _OnIssueCardSelectFnc);
    m_wndCapture.SetEvent(WE_CLICK, _OnCaptureSelectFnc);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
    m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
    m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
    m_wndRoomList.SetWindowText(_T("Rooms Information"));
    m_wndRoomList.AddEvent(1, _T("Refresh"), _OnRoomListLoadDataFnc);
    m_wndExamList.SetEvent(WE_SELCHANGE, _OnExamListSelectChangeFnc);
    m_wndExamList.SetEvent(WE_LOADDATA, _OnExamListLoadDataFnc);
    m_wndExamList.SetEvent(WE_DBLCLICK, _OnExamListDblClickFnc);
    m_wndExamList.SetWindowText(_T("Examination Receipts"));
    m_wndExamList.AddEvent(1, _T("Set Priority"), _OnExamListSetPriorityFnc);
    m_wndExamList.AddEvent(2, _T("Delete Examination Receipt"),
                           _OnExamListDeleteItemFnc, 0, VK_DELETE, 0);

    if (pMF->CheckPermission(_T("10.01")))
    {
        m_wndExamList.AddEvent(3, _T("Hủy phiếu khám bệnh nhân xin về"),
                               _OnExamListCancelItemFnc);
    }

    // m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
    // m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
    // m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
    m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
    // m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
    // m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
    // m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
    m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
    m_wndCardNoFind.SetEvent(WE_CHANGE, _OnCardNoFindChangeFnc);
    // m_wndCardNoFind.SetEvent(WE_SETFOCUS, _OnCardNoFindSetfocusFnc);
    // m_wndCardNoFind.SetEvent(WE_KILLFOCUS, _OnCardNoFindKillfocusFnc);
    m_wndCardNoFind.SetEvent(WE_CHECKVALUE, _OnCardNoFindCheckValueFnc);
    m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
    // m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
    // m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
    m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
    m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
    // m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
    // m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
    m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
    // m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
    // m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
    // m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
    // m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
    m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
    // m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
    // m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
    m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
    m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
    // m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
    m_wndEthnic.SetEvent(WE_SELENDOK, _OnEthnicSelendokFnc);
    // m_wndEthnic.SetEvent(WE_SETFOCUS, _OnEthnicSetfocusFnc);
    // m_wndEthnic.SetEvent(WE_KILLFOCUS, _OnEthnicKillfocusFnc);
    m_wndEthnic.SetEvent(WE_SELCHANGE, _OnEthnicSelectChangeFnc);
    m_wndEthnic.SetEvent(WE_LOADDATA, _OnEthnicLoadDataFnc);
    // m_wndEthnic.SetEvent(WE_ADDNEW, _OnEthnicAddNewFnc);
    m_wndOccupation.SetEvent(WE_SELENDOK, _OnOccupationSelendokFnc);
    // m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
    // m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
    m_wndOccupation.SetEvent(WE_SELCHANGE, _OnOccupationSelectChangeFnc);
    m_wndOccupation.SetEvent(WE_LOADDATA, _OnOccupationLoadDataFnc);
    // m_wndOccupation.SetEvent(WE_ADDNEW, _OnOccupationAddNewFnc);
#ifndef HOSPITAL_108
    m_wndAddress.SetEvent(WE_SELENDOK, _OnAddressSelendokFnc);
    // m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
    // m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
    m_wndAddress.SetEvent(WE_SELCHANGE, _OnAddressSelectChangeFnc);
    m_wndAddress.SetEvent(WE_LOADDATA, _OnAddressLoadDataFnc);
    // m_wndAddress.SetEvent(WE_ADDNEW, _OnAddressAddNewFnc);
#else
    m_wndProvill.SetEvent(WE_SELENDOK, _OnProvillSelendokFnc);
    // m_wndProvill.SetEvent(WE_SETFOCUS, _OnProvillSetfocusFnc);
    // m_wndProvill.SetEvent(WE_KILLFOCUS, _OnProvillKillfocusFnc);
    m_wndProvill.SetEvent(WE_SELCHANGE, _OnProvillSelectChangeFnc);
    m_wndProvill.SetEvent(WE_LOADDATA, _OnProvillLoadDataFnc);
    // m_wndProvill.SetEvent(WE_ADDNEW, _OnProvillAddNewFnc);
    m_wndDistrict.SetEvent(WE_SELENDOK, _OnDistrictSelendokFnc);
    // m_wndDistrict.SetEvent(WE_SETFOCUS, _OnDistrictSetfocusFnc);
    // m_wndDistrict.SetEvent(WE_KILLFOCUS, _OnDistrictKillfocusFnc);
    m_wndDistrict.SetEvent(WE_SELCHANGE, _OnDistrictSelectChangeFnc);
    m_wndDistrict.SetEvent(WE_LOADDATA, _OnDistrictLoadDataFnc);
    // m_wndDistrict.SetEvent(WE_ADDNEW, _OnDistrictAddNewFnc);
    m_wndVillage.SetEvent(WE_SELENDOK, _OnVillageSelendokFnc);
    // m_wndVillage.SetEvent(WE_SETFOCUS, _OnVillageSetfocusFnc);
    // m_wndVillage.SetEvent(WE_KILLFOCUS, _OnVillageKillfocusFnc);
    m_wndVillage.SetEvent(WE_SELCHANGE, _OnVillageSelectChangeFnc);
    m_wndVillage.SetEvent(WE_LOADDATA, _OnVillageLoadDataFnc);
    // m_wndVillage.SetEvent(WE_ADDNEW, _OnVillageAddNewFnc);

#endif

    // m_wndDetailAddress.SetEvent(WE_CHANGE, _OnDetailAddressChangeFnc);
    // m_wndDetailAddress.SetEvent(WE_SETFOCUS, _OnDetailAddressSetfocusFnc);
    // m_wndDetailAddress.SetEvent(WE_KILLFOCUS, _OnDetailAddressKillfocusFnc);
    m_wndDetailAddress.SetEvent(WE_CHECKVALUE, _OnDetailAddressCheckValueFnc);
    // m_wndIDNo.SetEvent(WE_CHANGE, _OnIDNoChangeFnc);
    // m_wndIDNo.SetEvent(WE_SETFOCUS, _OnIDNoSetfocusFnc);
    // m_wndIDNo.SetEvent(WE_KILLFOCUS, _OnIDNoKillfocusFnc);
    m_wndIDNo.SetEvent(WE_CHECKVALUE, _OnIDNoCheckValueFnc);
    m_wndWorkingPlaceLabel.SetEvent(WE_CLICK, _OnWorkingPlaceLabelClickFnc);
    m_wndWorkingPlaceEXLabel.SetEvent(WE_CLICK, _OnWorkingPlaceEXLabelClickFnc);
    m_wndWorkingPlace.SetEvent(WE_CHANGE, _OnWorkingPlaceChangeFnc);
    m_wndWorkingPlace.SetEvent(WE_SETFOCUS, _OnWorkingPlaceSetfocusFnc);
    m_wndWorkingPlace.SetEvent(WE_KILLFOCUS, _OnWorkingPlaceKillfocusFnc);
    m_wndWorkingPlace.SetEvent(WE_CHECKVALUE, _OnWorkingPlaceCheckValueFnc);
    m_wndWorkingPlace.SetEvent(WE_SELENDOK, _OnWorkPlaceSelendokFnc);
    // m_wndWorkingPlace.SetEvent(WE_SELCHANGE, _OnWorkPlaceSelectChangeFnc);
    // m_wndWorkingPlace.SetEvent(WE_LOADDATA, _OnWorkPlaceLoadDataFnc);

    m_wndWorkPlaceButton.SetEvent(WE_CLICK, _OnWorkPlaceButtonSelectFnc);

#ifdef HOSPITAL_108
    m_wndArmObject.SetEvent(WE_LOADDATA, _OnArmObjectLoadDataFnc);
    m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
    // m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
    m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
    m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
    m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
    m_wndWorkingPlaceEX.SetEvent(WE_LOADDATA, _OnWorkingPlaceEXLoadDataFnc);
    m_wndWorkingPlaceEX.SetEvent(WE_SELENDOK, _OnWorkingPlaceEXSelendokFnc);
    // m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);

    m_wndPosition.SetEvent(WE_SELENDOK, _OnPositionSelendokFnc);
    // m_wndPosition.SetEvent(WE_SETFOCUS, _OnPositionSetfocusFnc);
    // m_wndPosition.SetEvent(WE_KILLFOCUS, _OnPositionKillfocusFnc);
    m_wndPosition.SetEvent(WE_SELCHANGE, _OnPositionSelectChangeFnc);
    m_wndPosition.SetEvent(WE_LOADDATA, _OnPositionLoadDataFnc);
    // m_wndPosition.SetEvent(WE_ADDNEW, _OnPositionAddNewFnc);
    m_wndPositionLabel.SetEvent(WE_CLICK, _OnPossitionLabelSelectFnc);
#else
    m_wndRelative.SetEvent(WE_SELENDOK, _OnRelativeSelendokFnc);
    // m_wndRelative.SetEvent(WE_SETFOCUS, _OnRelativeSetfocusFnc);
    // m_wndRelative.SetEvent(WE_KILLFOCUS, _OnRelativeKillfocusFnc);
    m_wndRelative.SetEvent(WE_SELCHANGE, _OnRelativeSelectChangeFnc);
    m_wndRelative.SetEvent(WE_LOADDATA, _OnRelativeLoadDataFnc);
    // m_wndRelative.SetEvent(WE_ADDNEW, _OnRelativeAddNewFnc);
    m_wndPosition.SetEvent(WE_SELENDOK, _OnPositionSelendokFnc);
    // m_wndPosition.SetEvent(WE_SETFOCUS, _OnPositionSetfocusFnc);
    // m_wndPosition.SetEvent(WE_KILLFOCUS, _OnPositionKillfocusFnc);
    m_wndPosition.SetEvent(WE_SELCHANGE, _OnPositionSelectChangeFnc);
    m_wndPosition.SetEvent(WE_LOADDATA, _OnPositionLoadDataFnc);
    // m_wndPosition.SetEvent(WE_ADDNEW, _OnPositionAddNewFnc);

#endif
    m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
    m_wndPhone2.SetEvent(WE_CHECKVALUE, _OnPhone2CheckValueFnc);
    // m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
    // m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
    m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
    m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
    m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
    m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
    m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
    m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
    // m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
    // m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
    // m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
    // m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
    m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
    m_wndCardNoButton.SetEvent(WE_CLICK, _OnCardNoButtonSelectFnc);
    m_wndPatientState.SetEvent(WE_SELENDOK, _OnPatientStateSelendokFnc);
    // m_wndPatientState.SetEvent(WE_SETFOCUS, _OnPatientStateSetfocusFnc);
    // m_wndPatientState.SetEvent(WE_KILLFOCUS, _OnPatientStateKillfocusFnc);
    m_wndPatientState.SetEvent(WE_SELCHANGE, _OnPatientStateSelectChangeFnc);
    m_wndPatientState.SetEvent(WE_LOADDATA, _OnPatientStateLoadDataFnc);
    // m_wndPatientState.SetEvent(WE_ADDNEW, _OnPatientStateAddNewFnc);
    // m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
    // m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
    // m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
    m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
    m_wndExamType.SetEvent(WE_SELENDOK, _OnExamTypeSelendokFnc);
    // m_wndExamType.SetEvent(WE_SETFOCUS, _OnExamTypeSetfocusFnc);
    // m_wndExamType.SetEvent(WE_KILLFOCUS, _OnExamTypeKillfocusFnc);
    m_wndExamType.SetEvent(WE_SELCHANGE, _OnExamTypeSelectChangeFnc);
    m_wndExamType.SetEvent(WE_LOADDATA, _OnExamTypeLoadDataFnc);
    // m_wndExamType.SetEvent(WE_ADDNEW, _OnExamTypeAddNewFnc);
    m_wndExamType.SetEvent(WE_CHECKVALUE, _OnExamTypeCheckValueFnc);
    m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
    // m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
    // m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
    m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
    m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
    m_wndRoom.SetEvent(WE_CHECKVALUE, _OnRoomCheckValueFnc);
    // m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);

    // m_wndHospital.SetEvent(WE_CHANGE, _OnHospitalChangeFnc);
    // m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
    // m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
    // m_wndHospital.SetEvent(WE_CHECKVALUE, _OnHospitalCheckValueFnc);

    //	m_wndHospital.SetEvent(WE_SELENDOK, _OnHospitalSelendokFnc);
    // m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
    // m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
    m_wndHospital.SetEvent(WE_SELCHANGE, _OnHospitalSelectChangeFnc);
    m_wndHospital.SetEvent(WE_LOADDATA, _OnHospitalLoadDataFnc);
    // m_wndHospital.SetEvent(WE_ADDNEW, _OnHospitalAddNewFnc);

    // m_wndDisease.SetEvent(WE_CHANGE, _OnDiseaseChangeFnc);
    // m_wndDisease.SetEvent(WE_SETFOCUS, _OnDiseaseSetfocusFnc);
    // m_wndDisease.SetEvent(WE_KILLFOCUS, _OnDiseaseKillfocusFnc);
    m_wndDisease.SetEvent(WE_CHECKVALUE, _OnDiseaseCheckValueFnc);

    m_wndTransfer.SetEvent(WE_CLICK, _OnTransfeSelectFnc);

    m_wndForeigner.SetEvent(WE_CLICK, _OnForeignerCheckFnc);
    m_wnd108Staff.SetEvent(WE_CLICK, _On108StaffSelectFnc);

    m_wndAddNew.SetEvent(WE_CLICK, _OnAddNewSelectFnc);
    m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
    m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
    m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
    m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
    m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
    m_wndCheckIns.SetEvent(WE_CLICK, _OnCheckInsSelectFnc);
    m_wndPatientNote.SetEvent(WE_CHECKVALUE, _OnPatientNoteCheckValueFnc);

    //	m_wndDeptButton.SetEvent(WE_CLICK, _OnDeptButtonSelectFnc);

    AddEvent(1, _T("Add New Patient\tCtrl+N"), _OnAddHMSRegistrationFnc, 0, 'N',
             VK_CONTROL);
    AddEvent(0, _T("-"));
    AddEvent(2, _T("Create Document\tCtrl+A"), _OnAddNewDocumentFnc, 0, 'A',
             VK_CONTROL);
    AddEvent(0, _T("-"));
    AddEvent(3, _T("Create Reception\tCtrl+R"), _OnAddNewReceptionFnc, 0, 'R',
             VK_CONTROL);
    if (pMF->m_IsC12)
    {
        AddEvent(0, _T("-"));
        AddEvent(11, _T("Tạo phiếu khám sang khu C11/AB/C13..."),
                 _OnAddNewReceptionC11Fnc);
        m_wndRank.SetCheckValue(TRUE);

        // thong tin lich su kham benh
        AddEvent(0, _T("-"));
        AddEvent(16, _T("Show Pre history"), _OnShowPreHistoryFnc);
    }
    else if (pMF->m_IsC13)
    {
        m_wndOutPatientRecordNoLabel.ShowWindow(SW_HIDE);
        m_wndOutPatientRecord.ShowWindow(SW_HIDE);
    }

    m_wndOutPatientRecordNoLabel.SetHyperlink(true);
    m_wndOutPatientRecordNoLabel.SetEvent(WE_CLICK, _OnRecordNoClickFnc);

    m_wndPatientNoteLabel.SetHyperlink(true);
    m_wndPatientNoteLabel.SetEvent(WE_CLICK, _OnPatientNoteClickFnc);

    AddEvent(0, _T("-"));
    AddEvent(4, _T("Edit Patient Information\tCtrl+E"),
             _OnEditHMSRegistrationFnc, 0, 'E', VK_CONTROL);
    AddEvent(0, _T("-"));
    AddEvent(5, _T("Delete Patient\tCtrl+D"), _OnDeleteHMSRegistrationFnc, 0,
             'D', VK_CONTROL);
    //	AddEvent(0, _T("-"));
    //	AddEvent(6, _T("Create Deposit"), _OnCreatedepositFnc);
    // AddEvent(6, _T("Save Patient Information\tCtrl+S"),
    // _OnSaveHMSRegistrationFnc, 0, 'S', VK_CONTROL);
    /*AddEvent(0, _T("-"));
    AddEvent(8, _T("Cancel Command\tCtrl+T"), _OnCancelHMSRegistrationFnc, 0,
    'T', VK_CONTROL);*/
    AddEvent(0, _T("-"));
    AddEvent(7, _T("Print Reception\tF2"), _OnPrintReceptionFnc, 0, VK_F2);

    if (pMF->m_IsC12 || pMF->m_IsC11 ||
        pMF->GetCurrentDepartmentID() == _T("AB"))
    {
        AddEvent(0, _T("-"));
        AddEvent(8, _T("Print Treatment"), _OnPrintTreatmentFnc);
    }

    AddEvent(0, _T("-"));
    AddEvent(10, _T("Edit insurance information\tF3"),
             _OnEditCardInformationFnc, 0, VK_F3);

    if (pMF->m_szDept == _T("TYC") || pMF->m_szDept == _T("AB"))
    {
        AddEvent(0, _T("-"));
        AddEvent(12, _T("Create examination receipt fee"),
                 _OnCreateExaminationReceiptFeeFnc);
        if (pMF->m_szDept == _T("TYC"))
        {
            AddEvent(0, _T("-"));
            AddEvent(13, _T("Create Reception For C11"),
                     _OnAddNewReceptionC11Fnc);
        }
    }

    //	if(pMF->CheckPermission(_T("01.35")))
    {
        AddEvent(0, _T("-"));
        AddEvent(16, _T("Cập nhật thông tin thẻ bảo hiểm công ty"),
                 _OnUpdateExtInsCardFnc);
    }

    //	if(pMF->m_atm)
    /*{
        AddEvent(0, _T("-"));
        AddEvent(15, _T("Print smart card"), _OnPrintSmartcardFnc);
    }*/
    {
        AddEvent(0, _T("-"));
        AddEvent(17, _T("Cập nhật thông tin hộ chiếu "),
                 _OnUpdateExTraInForFnc);
    }

    if (pMF->m_UserInfo.su_groupid == _T("A"))

    {
        AddEvent(0, _T("-"));
        AddEvent(18,
                 _T("Cập nhật thông tin thanh toán (trường hợp có phí khám ")
                 _T("nhưng chưa thanh toán) "),
                 _OnUpdatePaymentInForFnc);
    }
    {
        AddEvent(0, _T("-"));
        AddEvent(19, _T("Đồng bộ thông tin từ HIS -> LIS "),
                 _OnSynInForFromHIStoLISFnc);
    }

    // Hết covid, commnet lại
    {
        AddEvent(0, _T("-"));
        AddEvent(100, _T("Khai báo thông tin tiêm Vaccine Covid 19\tF4 "),
                 _OnUpdateVaccineCovid19InForFnc);
    }

    if (pMF->GetCurrentDepartmentID() == _T("TTHTSS"))
    {
        AddEvent(0, _T("-"));
        AddEvent(22, _T("Khai báo thông tin miễn giảm IVF\tF5 "),
                 _OnUpdateIVFDiscountInForFnc, 0, VK_F5);
    }
    if (pMF->GetCurrentDepartmentID() == _T("C1.3") ||
        pMF->GetCurrentDepartmentID() == _T("C19.CC"))
    {
        AddEvent(0, _T("-"));
        AddEvent(23, _T("Thêm vật tư"), _OnAddMaterialFnc);
    }
    AddEvent(0, _T("-"));
    AddEvent(24, _T("Mẫu biểu hành chính"), _OnCreateAdministrationFormFnc);

    // Hết covid, commnet lại
    /*{
        AddEvent(0, _T("-"));
        AddEvent(25, _T("Tìm kiếm bệnh nhân phục vụ người nhà XN covid 19\tF7
    "), _OnFindPatientinformationFnc,0, VK_F7);
    }*/

    // Thêm menu nhập thông tin người giới thiệu ở tiếp đón

    {
        AddEvent(0, _T("-"));
        AddEvent(30, _T("Thông tin người giới thiệu khám"),
                 _OnUpdateExTraUserInForFnc);
    }

    // Thêm menu in phiếu ăn sáng

    {
        AddEvent(0, _T("-"));
        AddEvent(31, _T("In phiếu ăn sáng miễn phí"), _OnPrintFreeBfFnc);
    }

    /*CRecord rs(&pMF->m_db);
    CString szSQL;

    szSQL.Format(_T("SELECT trim(hwp_name) as name FROM hms_workplace ORDER BY
    hwp_idx")); rs.ExecSQL(szSQL);

    m_wndWorkingPlace.Learn(true);
    while(!rs.IsEOF())
    {
        m_wndWorkingPlace.AddKeyword(rs.GetValue(_T("name")));
        rs.MoveNext();
    }*/

    // Nhấn vào để cập nhập thông tin hành chính trong khoa, cho phép sửa 1 số
    // thứ
    m_wndPatientNameLabel.SetEvent(WE_CLICK,
                                   _OnUpdatePatientInfor_LabelSelectFnc);

    OnRoomListLoadData();

#undef SetWindowFont

    m_wndCardNoFind.SetTextColor(RGB(0, 0, 255));
    SetWindowFont(&m_wndCardNoFind, GetFaceName(), GetFaceSize() + 2, true);

    // SetWindowFont(&m_wndPatientName, _T("Tahoma"), 15);
    m_wndPatientName.SetTextColor(RGB(0, 0, 255));
    SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize() + 2, true);

    SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize() + 2, true);
    SetWindowFont(&m_wndCardNo, GetFaceName(), GetFaceSize() + 1, true);
    m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));

    SetWindowFont(&m_wndAmountDepositLabel, GetFaceName(), GetFaceSize() + 2,
                  true);
    m_wndAmountDepositLabel.SetTextColor(RGB(255, 0, 0));
    SetWindowFont(&m_wndAmountDeposit, GetFaceName(), GetFaceSize() + 2, true);
    m_wndAmountDeposit.SetTextColor(RGB(255, 0, 0));

    SetWindowFont(&m_wndPatientNote, GetFaceName(), GetFaceSize() + 1, true);

    ////Layout

    SetMode(VM_NONE);

#ifdef HAVE_POS
    if (pMF->HasPOS())
    {
        m_pos.Initialize(pMF->GetCommPOS(), this);
    }
#endif

    m_szExamPartTime = _T("N");
    if (pMF->CheckPermission(_T("01.22")))
    {
        m_szExamPartTime = _T("Y");
    }

    m_wndWorkingPlaceLabel.SetHyperlink(true);
    m_wndWorkingPlaceEXLabel.SetHyperlink(true);

    /*
    if(pMF->m_szDept != _T("TYC"))
    {
        m_wndDeptButton.ShowWindow(SW_HIDE);
    }
    */
}
void CHMSRegistration::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_TextEx(pDX, m_wndIssuePlace.GetDlgCtrlID(), m_szIssuePlaceKey);
    DDX_TextEx(pDX, m_wndIssueDate.GetDlgCtrlID(), m_szIssueDate);
    DDX_Text(pDX, m_wndSmartcardID.GetDlgCtrlID(), m_szSmartcardID);
    DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
    DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
    DDX_Text(pDX, m_wndCardNoFind.GetDlgCtrlID(), m_szCardNoFind);
    DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName.Trim());
    DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
    DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
    DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
    DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
    DDX_TextEx(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupationKey);

    DDX_Text(pDX, m_wndDetailAddress.GetDlgCtrlID(), m_szDetailAddress);
    DDX_Text(pDX, m_wndIDNo.GetDlgCtrlID(), m_szIDNo);
    if (m_wndWorkingPlaceEX.GetSafeHwnd())
        DDX_TextEx(pDX, m_wndWorkingPlaceEX.GetDlgCtrlID(),
                   m_szWorkingPlaceEXKey);
    if (m_wndWorkingPlace.GetSafeHwnd())
        DDX_Text(pDX, m_wndWorkingPlace.GetDlgCtrlID(), m_szWorkingPlace);
    DDX_Text(pDX, m_wndPatientNote.GetDlgCtrlID(), m_szPatientNote);

    // DDX_TextEx(pDX, m_wndWorkingPlace.GetDlgCtrlID(), m_szWorkingPlaceKey);
#ifndef HOSPITAL_108
    if (m_wndAddress.GetSafeHwnd())
        DDX_TextEx(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddressKey);
    if (m_wndRelative.GetSafeHwnd())
        DDX_Text(pDX, m_wndRelative.GetDlgCtrlID(), m_szRelative);
    if (m_wndPosition.GetSafeHwnd())
        DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szRelationKey);
#else
    DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
    DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
    DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
    DDX_TextEx(pDX, m_wndArmObject.GetDlgCtrlID(), m_szArmObjectKey);
    DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
    DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szPositionKey);

#endif

    DDX_Text(pDX, m_wndContactAddress.GetDlgCtrlID(), m_szContactAddress);
    DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
    DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

    DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
    DDX_TextEx(pDX, m_wndPatientState.GetDlgCtrlID(), m_szPatientStateKey);
    DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
    DDX_TextEx(pDX, m_wndExamType.GetDlgCtrlID(), m_szExamTypeKey);
    DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
    DDX_Text(pDX, m_wndSheetNo.GetDlgCtrlID(), m_szSheetNo);
    DDX_Check(pDX, m_wndTransfer.GetDlgCtrlID(), m_bTransfer);
    DDX_TextEx(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospitalKey);
    DDX_Text(pDX, m_wndDisease.GetDlgCtrlID(), m_szDisease);
    DDX_Text(pDX, m_wndExaminePerWeek.GetDlgCtrlID(), m_nExaminePerWeek);
    DDX_Text(pDX, m_wndExaminePerMonth.GetDlgCtrlID(), m_nExaminePerMonth);
    DDX_Check(pDX, m_wndAppointReexamine.GetDlgCtrlID(), m_bAppointReexamine);
    DDX_TextEx(pDX, m_wndAppointReexamineDate.GetDlgCtrlID(),
               m_szAppointReexamineDate);
    DDX_Text(pDX, m_wndAmountDeposit.GetDlgCtrlID(), m_nAmountDeposit);
    DDX_Text(pDX, m_wndOutPatientRecord.GetDlgCtrlID(), m_szOutPatientRecord);
    DDX_Check(pDX, m_wndForeigner.GetDlgCtrlID(), m_bForeigner);
    DDX_Check(pDX, m_wndViettel.GetDlgCtrlID(), m_bViettel);
    DDX_Check(pDX, m_wnd108Staff.GetDlgCtrlID(), m_b108Staff);
    DDX_Text(pDX, m_wndPhone2.GetDlgCtrlID(), m_szPhone2);
}
void CHMSRegistration::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, tmpStr, m_szTreatStatus, m_szTreatDept, szTheFirst,
        szTheSecond;
    CString szWhere;

    CRecord rs(&pMF->m_db);
    CRecord rsl(&pMF->m_db);
    CRecord rsl1(&pMF->m_db);
    SetDefaultValues();

    szSQL.Format(_T("SELECT htr_status as status, htr_deptid as dept FROM ")
                 _T("HMS_TREATMENT_RECORD WHERE htr_docno=%ld and ")
                 _T("HTR_DEPTID='TTDTHM' order by htr_idx"),
                 pMF->m_nDocumentNo);
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("status"), m_szTreatStatus);
    rs.GetValue(_T("dept"), m_szTreatDept);

    if (m_szTreatStatus == _T("I") || m_szTreatStatus == _T("A"))
    {
        ShowMessageBox(_T("Bệnh nhân đang điều trị trong khoa điều trị hiếm ")
                       _T("muộn, hãy tạo phiếu khám mới"),
                       0);
    }

    if (m_szTreatStatus == _T("T"))
    {
        ShowMessageBox(
            _T("Bệnh nhân đã kết thúc đợt điều trị lần trước tại trung tâm ")
            _T("điều trị hiếm muộn, hãy vào khoa và tạo lượt điều trị kế tiếp"),
            0);
    }

    // Thông báo số lần tiêm vaccine Covid 19
    szSQL.Format(_T("SELECT * FROM rm_vaccine_infor left join hms_doc ON ")
                 _T("(vc_patientno = hd_patientno) WHERE hd_docno=%ld"),
                 m_nDocumentNo);
    rsl.ExecSQL(szSQL);
    if (!rsl.IsEOF())
    {
        rsl.GetValue(_T("VC_THEFIRST"), szTheFirst);
        rsl.GetValue(_T("VC_THESECOND"), szTheSecond);

        if (szTheFirst == _T("1") && szTheSecond == _T("0"))
        {
            ShowMessageBox(_T("Đồng chí đã được tiêm Vaccine lần 1"), 0);
        }

        if (szTheSecond == _T("1"))
        {
            ShowMessageBox(_T("Đồng chí đã được tiêm Vaccine lần 2"), 0);
        }
    }

    if (pMF->m_db.GetBackend() == DBTYPE_ORACLE)
    {
        if (m_nDocumentNo <= 0)
            szSQL.Format(
                _T("SELECT hd_patientno, ")
                _T("hd_docno, ")
                _T("hd_admitstate, ")
                _T("hd_object, ")
                _T("hd_cardidx, ")
                _T("hd_disrate, ")
                _T("hd_insline, ")
                _T("TO_CHAR(hd_admitdate, 'YYYY-MM-DD HH24:MI:SS') as ")
                _T("admitdate, ")
                _T("hd_admitdept, ")
                _T("hd_status, ")
                _T("hd_xissuedate, ")
                _T("hd_telephone, ")
                _T("hd_telephone2, ")
                _T("hd_contactaddr, ")
                _T("hd_transplaceid, ")
                _T("hd_transplace, ")
                _T("hd_transdiagn, hd_recordno, hd_emergency, hd_healthexam, ")
                _T("hd_istransplant, hd_viettel_object, HD_108staff, ")
                _T("(select hsc_cardid from hms_smartcard where hsc_patientno ")
                _T("= %ld and rownum < 2 and hsc_type = '02') as smc_id,")
                _T(" hd_icard_issuedate as ic_issuedate, hd_icard_issueplace ")
                _T("as ic_issueplace, hd_army_objectid as armobject, ")
                _T(" hd_provid, hd_villid, hd_dtladdr ")
                _T(" FROM hms_doc WHERE hd_patientno=%ld  AND NVL(hd_status, ")
                _T("'N') <> 'C' ORDER BY hd_docno DESC"),
                m_nPatientNo, m_nPatientNo);
        else
            szSQL.Format(
                _T("SELECT hd_patientno, ")
                _T("hd_docno, ")
                _T("hd_admitstate, ")
                _T("hd_object, ")
                _T("hd_cardidx, ")
                _T("hd_disrate, ")
                _T("hd_insline, ")
                _T("TO_CHAR(hd_admitdate, 'YYYY-MM-DD HH24:MI:SS') as ")
                _T("admitdate, ")
                _T("hd_admitdept, ")
                _T("hd_status, ")
                _T("hd_xissuedate, ")
                _T("hd_telephone, ")
                _T("hd_telephone2, ")
                _T("hd_contactaddr, ")
                _T("hd_transplaceid, ")
                _T("hd_transplace, ")
                _T("hd_transdiagn, hd_recordno,hd_emergency, hd_healthexam, ")
                _T("hd_istransplant, hd_viettel_object, HD_108staff, ")
                _T("(select hsc_cardid from hms_smartcard where hsc_docno = ")
                _T("%ld and rownum < 2) as smc_id,")
                _T(" hd_icard_issuedate as ic_issuedate, hd_icard_issueplace ")
                _T("as ic_issueplace,hd_army_objectid as armobject, ")
                _T(" GET_RECENT_DOC_NOTE(hd_docno) as docnote, ")
                _T(" hd_provid, hd_villid, hd_dtladdr ")
                _T(" FROM hms_doc WHERE hd_docno=%ld AND NVL(hd_status, 'N') ")
                _T("<> 'C'"),
                m_nDocumentNo, m_nDocumentNo);
    }
    else
    {
        if (m_nDocumentNo <= 0)
            szSQL.Format(
                _T("SELECT hp_patientno, ")
                _T("hd_docno, ")
                _T("hd_admitstate, ")
                _T("hd_object, ")
                _T("hd_cardidx, ")
                _T("hd_disrate, ")
                _T("hd_insline, ")
                _T("trunc(hd_admitdate) as admitdate, ")
                _T("hd_admitdept, ")
                _T("hd_status, ")
                _T("hd_xissuedate, ")
                _T("hd_patientno, ")
                _T("hd_telephone, ")
                _T("hd_telephone2, ")
                _T("hd_contactaddr, ")
                _T("hd_transplaceid, ")
                _T("hd_transplace, ")
                _T("hd_transdiagn, hd_emergency, hd_healthexam, ")
                _T("(select hsc_cardid from hms_smartcard where hsc_patientno ")
                _T("= %ld and hsc_type = '02' and rownum < 2) as smc_id,")
                _T(" hd_icard_issuedate as ic_issuedate, hd_icard_issueplace ")
                _T("as ic_issueplace,hd_army_objectid as armobject, ")
                _T(" hd_provid, hd_villid, hd_dtladdr ")
                _T(" FROM hms_doc ")
                _T("WHERE hd_patientno=%ld AND NVL(hd_status, 'N') <> 'C' and ")
                _T("rownum < 2 ")
                _T("ORDER BY hd_docno DESC"),
                m_nPatientNo, m_nPatientNo);
        else
            szSQL.Format(
                _T("SELECT hp_patientno, ")
                _T("hd_docno, ")
                _T("hd_admitstate, ")
                _T("hd_object, ")
                _T("hd_cardidx, ")
                _T("hd_disrate, ")
                _T("hd_insline, ")
                _T("trunc(hd_admitdate) as admitdate, ")
                _T("hd_admitdept, ")
                _T("hd_status, ")
                _T("hd_xissuedate, ")
                _T("hd_patientno, ")
                _T("hd_telephone, ")
                _T("hd_telephone2, ")
                _T("hd_contactaddr, ")
                _T("hd_transplaceid, ")
                _T("hd_transplace, ")
                _T("hd_transdiagn, hd_emergency, hd_healthexam, ")
                _T("(select hsc_cardid from hms_smartcard where hsc_docno = ")
                _T("%ld and rownum < 2) as smc_id,")
                _T(" hd_icard_issuedate as ic_issuedate, hd_icard_issueplace ")
                _T("as ic_issueplace,hd_army_objectid as armobject, ")
                _T(" GET_RECENT_DOC_NOTE(hd_docno) as docnote, ")
                _T(" hd_provid, hd_villid, hd_dtladdr ")
                _T(" FROM hms_doc WHERE hd_docno=%ld AND NVL(hd_status, 'N') ")
                _T("<> 'C'"),
                m_nDocumentNo, m_nDocumentNo);
    }
    // Dung bien rs lan 1

    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        /*	int res = pMF->SyncPatientInformation(m_nDocumentNo);
            if(res <= 0)
            {
                SetMode(VM_NONE);
                return;
            }
            rs.ExecSQL(szSQL);*/
    }

    if (!rs.IsEOF())
    {

        rs.GetValue(_T("smc_id"), m_szSmartcardID);
        rs.GetValue(_T("hd_patientno"), m_nPatientNo);

        rs.GetValue(_T("hd_docno"), m_nDocumentNo);
        // rs.GetValue(_T("hd_status"), m_szStatus);
        pMF->m_nPatientNo = m_nPatientNo;
        rs.GetValue(_T("hd_healthexam"), m_szHealthExam);

        rs.GetValue(_T("hd_telephone"), m_szPhone);
        rs.GetValue(_T("hd_telephone2"), m_szPhone2);
        rs.GetValue(_T("hd_relative"), m_szRelative);
        rs.GetValue(_T("hd_relation"), m_szRelationKey);
        rs.GetValue(_T("hd_contactaddr"), m_szContactAddress);
        rs.GetValue(_T("hd_transplaceid"), m_szHospitalKey);

        rs.GetValue(_T("hd_viettel_object"), tmpStr);
        if (tmpStr == _T("Y"))
        {
            m_bViettel = TRUE;
        }

        rs.GetValue(_T("HD_108staff"), tmpStr);
        if (tmpStr == _T("Y"))
        {
            m_b108Staff = TRUE;
        }

        rs.GetValue(_T("hd_transdiagn"), m_szDisease);
        rs.GetValue(_T("hd_admitstate"), m_szPatientStateKey);
        rs.GetValue(_T("hd_object"), m_szObjectKey);
        pMF->m_szObject = m_szObjectKey;

        rs.GetValue(_T("hd_cardno"), m_szCardNo);
        rs.GetValue(_T("hd_cardidx"), m_nCardIdx);
        m_szOldCardNo = m_szCardNo;
        m_nOldCardIdx = m_nCardIdx;

        m_szOldObject = m_szObjectKey;

        rs.GetValue(_T("hd_disrate"), m_nDisrate);
        rs.GetValue(_T("hd_insline"), m_szOffLine);
        rs.GetValue(_T("hd_emergency"), m_szEmergency);
        m_szCurCardNo = m_szCardNo;

        rs.GetValue(_T("admitdate"), m_szExamDate);

        rs.GetValue(_T("hd_admitdept"), m_szDept);
        rs.GetValue(_T("hd_status"), m_szDocStatus);
        rs.GetValue(_T("hd_suggestion"), m_szSuggesstion);

        rs.GetValue(_T("hd_xobject"), m_sCardInfo.xobject);
        rs.GetValue(_T("hd_xcardno"), m_sCardInfo.xCardno);
        rs.GetValue(_T("hd_xissuedate"), m_sCardInfo.xIssueDate);
        rs.GetValue(_T("hd_xissueplace"), m_sCardInfo.xIssuePlace);
        m_szOutPatientRecord.Empty();
        rs.GetValue(_T("hd_recordno"), m_szOutPatientRecord);
        // Lay doi tuong ghep tang
        rs.GetValue(_T("hd_istransplant"), _szIsTransplant);
        rs.GetValue(_T("ic_issuedate"), m_szIssueDate);
        rs.GetValue(_T("ic_issueplace"), m_szIssuePlaceKey);
        rs.GetValue(_T("armobject"), m_szArmObjectKey);
        rs.GetValue(_T("docnote"), m_szPatientNote);

        rs.GetValue(_T("hd_provid"), m_szProvID);
        rs.GetValue(_T("hd_villid"), m_szVillID);
        rs.GetValue(_T("hd_dtladdr"), m_szDtlAddr);

        if (str2long(m_szProvID) > 0)
        {
            m_bNewAddress = true;
        }
        else
            m_bNewAddress = false;

        // Kiem tra neu khong phai bn khu kham do thi ko cho xem ho so
        /*	szSQL.Format(_T("SELECT COUNT(*) FROM hms_exam WHERE he_docno = %ld
           AND he_deptid='%s' "), m_nDocumentNo, pMF->m_szDept);
            rs.ExecSQL(szSQL);
            if(rs.GetIntValue() <= 0)
            {
                SetMode(VM_NONE);
                return;
            }*/

        szSQL.Format(
            _T("SELECT ")
            _T("hp_surname, ")
            _T("hp_midname, ")
            _T("hp_firstname, ")
            _T("hp_birthdate, ")
            _T("hp_sex, ")
            _T("hp_ethnic, ")
            _T("hp_provid, ")
            _T("hp_distid, ")
            _T("hp_villid, ")
            _T("hp_occupation, ")
            _T("hp_rank, ")
            _T("hp_position, ")
            _T("hp_dtladdr, ")
            _T("hp_workplace, ")
            _T("hp_workplaceid, ")
            _T("hp_sin, hp_nationality, hp_department, hp_recordno record_no ")
            _T("FROM hms_patient ")
            _T("WHERE hp_patientno=%ld"),
            m_nPatientNo);
        // Dung lan 2

        rs.ExecSQL(szSQL);
        //_msg(_T("%s"), szSQL);
        if (rs.IsEOF())
        {
            SetMode(VM_NONE);
            return;
        }
        rs.GetValue(_T("hp_surname"), tmpStr);
        m_szPatientName = tmpStr;
        rs.GetValue(_T("hp_midname"), tmpStr);
        m_szPatientName += tmpStr.IsEmpty() ? _T("") : _T(" ") + tmpStr;
        rs.GetValue(_T("hp_firstname"), tmpStr);
        m_szPatientName += tmpStr.IsEmpty() ? _T("") : _T(" ") + tmpStr;
        m_szPatientName.Trim();

        rs.GetValue(_T("hp_birthdate"), m_szBirthDate);

        rs.GetValue(_T("hp_sex"), m_szSexKey);
        rs.GetValue(_T("hp_ethnic"), m_szEthnicKey);
#ifdef HOSPITAL_108
        rs.GetValue(_T("hp_provid"), m_szProvillKey);
        rs.GetValue(_T("hp_distid"), m_szDistrictKey);
        rs.GetValue(_T("hp_villid"), m_szVillageKey);
#else
        rs.GetValue(_T("hp_villid"), m_szAddressKey);
#endif
        rs.GetValue(_T("hp_dtladdr"), m_szDetailAddress);
        rs.GetValue(_T("hp_sin"), m_szIDNo);

        rs.GetValue(_T("hp_occupation"), m_szOccupationKey);
        if (m_szOccupationKey == _T("0"))
            m_szOccupationKey.Empty();
        rs.GetValue(_T("hp_workplace"), m_szWorkingPlace);

        if (m_bNewAddress)
        {
            m_szProvillKey = m_szProvID;
            m_szVillageKey = m_szVillID;
            m_szDistrictKey.Empty();
            m_szDetailAddress = m_szDtlAddr;
        }

        if (pMF->CheckPermission(_T("RM.100.1")))
        {
            rs.GetValue(_T("hp_workplaceid"), m_szWorkingPlaceEXKey);
        }
        else
        {
            rs.GetValue(_T("hp_workplaceid"), m_szWorkingPlaceKey);
        }
        rs.GetValue(_T("hp_rank"), m_szRankKey);
        rs.GetValue(_T("hp_position"), m_szPositionKey);
        rs.GetValue(_T("hp_department"), tmpStr);
        if (!tmpStr.IsEmpty())
        {
            CString szName = pMF->GetDepartmentName(tmpStr);
            if (!szName.IsEmpty())
            {
                m_szWorkingPlace.AppendFormat(_T(" - %s"), szName);
            }
        }

        rs.GetValue(_T("hp_nationality"), m_szNationality);

        /*if(m_szNationality != _T("VIE") && m_szNationality.IsEmpty() == false)
        {
            m_bForeigner = TRUE;
            CRecord rsn(&pMF->m_db);
            CString szSQL2;
            szSQL2.Format(_T("SELECT adc_name FROM ad_country WHERE
        adc_country_id='%s' "), m_szNationality); rsn.ExecSQL(szSQL2);
            rsn.GetValue(_T("adc_name"), tmpStr);
            m_szNationalityDesc.Format(_T("[%s]"), tmpStr);
            m_wndForeignerDesc.SetWindowText(m_szNationalityDesc);
        }*/
        if ((m_szNationality != _T("000") && m_szNationality != _T("VIE")) &&
            m_szNationality.IsEmpty() == false)
        {
            m_bForeigner = TRUE;
            CRecord rsn(&pMF->m_db);
            CString szSQL2;
            szSQL2.Format(
                _T("SELECT hq_name FROM hms_quoctich WHERE hq_id='%s' "),
                m_szNationality);
            rsn.ExecSQL(szSQL2);
            rsn.GetValue(_T("hq_name"), tmpStr);
            m_szNationalityDesc.Format(_T("[%s]"), tmpStr);
            m_wndForeignerDesc.SetWindowText(m_szNationalityDesc);
        }

        CString szDay, szMonth, szYear, short_day, short_month;
        if (GetLocalLang() == 0)
        {
            szDay = _T("Day");
            szMonth = _T("Month");
            szYear = _T("Age");
            short_day = _T("d");
            short_month = _T("m");
        }
        else
        {
            TranslateString(_T("Day"), szDay);
            TranslateString(_T("Month"), szMonth);
            TranslateString(_T("Age"), szYear);
            short_day = _T("n");
            short_month = _T("t");
        }

        // m_szWorkingPlaceKey = m_szWorkingPlace;

        szSQL.Format(_T("HMS_GETAGE(TO_DATE('%s','YYYY-MM-DD'), ")
                     _T("TO_DATE('%s','YYYY-MM-DD') )"),
                     m_szExamDate.Left(10), m_szBirthDate.Left(10));

        // int ret = str2long(pMF->ExecDML(szSQL));
        tmpStr = pMF->ExecDML(szSQL);
        m_szAge.Format(_T("%s"), tmpStr);
        if (m_szAge.Right(1) == _T("T"))
        {
            m_szAge.Replace(_T("T"), szMonth);
        }
        else if (m_szAge.Right(1) == _T("N"))
            m_szAge.Replace(_T("N"), szDay);
        if (IsDigit(m_szAge))
        {
            m_szAge.AppendFormat(_T(" %s"), szYear);
        }
        if (m_szOutPatientRecord.IsEmpty())
            rs.GetValue(_T("record_no"), m_szOutPatientRecord);
        /*

        //Lay du lieu tu hms_examdoc load len
                szSQL.Format(_T("SELECT Date(hd_admitdate) as admitdate,
        hd_transplace, hd_transdiagn ") \ _T("FROM hms_examdoc WHERE
        hd_docno=%ld "), m_nDocumentNo); rs.ExecSQL(szSQL); if(!rs.IsEOF()){
                    rs.GetValue(_T("hd_admitdate"), m_szExamDate);
                    rs.GetValue(_T("hd_transplace"), m_szHospitalKey);
                    rs.GetValue(_T("hd_transdiagn"), m_szDisease);
                }

        */
        bool bInsExpiryFlag = false;

        // if has card the load informations of card
        // Neu co the thi load cac thong tin the ra
        if (m_nCardIdx > 0)
        {
            szSQL.Format(
                _T("SELECT hc_cardno, ")
                _T("	hc_idx, ")
                _T("	TO_CHAR(hc_regdate, 'YYYY-MM-DD') as hc_regdate, ")
                _T("	TO_CHAR(hc_expdate, 'YYYY-MM-DD') as hc_expdate, ")
                _T("	hc_regcode, ")
                _T("	hc_company, ")
                _T("	hc_code, ")
                _T("	hc_discount, ")
                _T("	hc_line, ")
                _T("	hc_groupid ")
                _T("FROM hms_card WHERE hc_patientno=%ld AND hc_idx=%ld"),
                m_nPatientNo, m_nCardIdx);

            // MessageBox(szSQL);

            // 3rd
            rs.ExecSQL(szSQL);
            if (!rs.IsEOF())
            {
                rs.GetValue(_T("hc_cardno"), m_szCardNo);
                m_szCurCardNo = m_szCardNo;
                m_szOldCardNo = m_szCardNo;
                rs.GetValue(_T("hc_regdate"), m_sCardInfo.regdate);
                rs.GetValue(_T("hc_expdate"), m_sCardInfo.expdate);

                rs.GetValue(_T("hc_regcode"), m_sCardInfo.regplacecde);
                rs.GetValue(_T("hc_company"), m_sCardInfo.company);
                // if(!m_sCardInfo.company.IsEmpty())
                //	m_szWorkingPlace = m_sCardInfo.company;
                rs.GetValue(_T("hc_code"), m_sCardInfo.code);
                rs.GetValue(_T("hc_discount"), m_sCardInfo.discount);
                rs.GetValue(_T("hc_groupid"), m_sCardInfo.groupid);
                if (m_szOffLine != _T("Y"))
                    m_nDisrate = m_sCardInfo.discount;

                if (m_szOffLine == _T("Y"))
                    m_wndCardNo.SetTextColor(RGB(255, 0, 0));
                else
                    m_wndCardNo.SetTextColor(RGB(0, 0, 255));

                if (CompareDate(pMF->GetSysDate(), m_sCardInfo.expdate) > 0)
                    bInsExpiryFlag = true;

                m_IsInsExpired = bInsExpiryFlag;

                if (m_bHaveAdditionalCard)
                {
                    if (m_szCardNo.Find(_T("HN")) != -1)
                        SetMenuState(11, true);
                    else
                        SetMenuState(11, false);
                }
            }
        }
        // Lay du lieu cac phieu kham benh
        CString szDept, szRoom;
        szWhere.Empty();
        if (m_nReceptIdx > 0)
            szWhere.Format(_T(" AND he_receptidx=%ld "), m_nReceptIdx);
        szSQL.Format(
            _T("SELECT HE_DEPTID,")
            _T("he_roomid, ")
            _T("he_receptno, ")
            _T("he_receptidx, ")
            _T("TO_CHAR(he_examdate,'YYYY-MM-DD HH24:MI:SS') as examdate, ")
            _T("he_status, ")
            _T("he_feeidx, ")
            _T("he_examtype, ")
            _T("he_hasfee, ")
            _T("he_payment ")
            _T(" FROM hms_exam WHERE he_docno=%ld %s ORDER BY he_receptidx ")
            _T("DESC "),
            m_nDocumentNo, szWhere);
        //		_tprintf(_T("\r\n%s"), szSQL);
        rs.ExecSQL(szSQL);
        //_msg(_T("%s"), szSQL);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("HE_DEPTID"), szDept);
            rs.GetValue(_T("he_roomid"), szRoom);
            if (pMF->m_szDept == szDept)
            {
                m_szRoomKey = szRoom;
            }
            else
            {
            }
            // m_szRoomKey.IsEmpty();
            m_szCurRoom = m_szRoomKey;
            rs.GetValue(_T("he_receptno"), m_nReceptNo);
            rs.GetValue(_T("he_receptidx"), m_nReceptIdx);
            rs.GetValue(_T("examdate"), m_szExamDate);
            rs.GetValue(_T("he_status"), m_szExamStatus);
            rs.GetValue(_T("he_feeidx"), m_szExamTypeKey);
            rs.GetValue(_T("he_hasfee"), m_szHasFee);
            rs.GetValue(_T("he_payment"), m_szPayment);
            m_szSheetNo.Format(_T("%s.%d"), m_szRoomKey, m_nReceptNo);
        }
        pMF->m_nDocumentNo = m_nDocumentNo;
        pMF->m_nRefIndex = m_nReceptIdx;

        m_nExaminePerMonth = m_nExaminePerWeek = 0;
        m_bAppointReexamine = FALSE;

        szSQL.Format(
            _T("SELECT sum(perweek) as perweek, sum(permonth) as permonth ")
            _T("FROM (SELECT 	case when TO_CHAR(hd_admitdate, 'W') = ")
            _T("TO_CHAR(sysdate, 'W') then 1 else 0 end as perweek, ")
            _T(" case when TO_CHAR(hd_admitdate, 'MM') = TO_CHAR(sysdate, ")
            _T("'MM') then 1 else 0 end as permonth ")
            _T(" FROM hms_doc ")
            _T(" WHERE hd_patientno=%ld ) tbl"),
            m_nPatientNo);
        // 5th
        //_tprintf(_T("\r\n%s"), szSQL);
        rs.ExecSQL(szSQL);

        if (!rs.IsEOF())
        {
            rs.GetValue(_T("perweek"), m_nExaminePerWeek);
            rs.GetValue(_T("permonth"), m_nExaminePerMonth);
        }
        if (m_szSuggesstion == _T("R"))
        {
            szSQL.Format(
                _T("SELECT hre_date FROM hms_reexam WHERE hre_docno=%ld "),
                m_nDocumentNo);
            int ret = rs.ExecSQL(szSQL);

            m_bAppointReexamine = TRUE;
            if (!rs.IsEOF())
            {
                rs.GetValue(_T("hre_date"), m_szAppointReexamineDate);
            }
        }

        if (!m_szCardNo.IsEmpty())
            m_wndCardNoButton.EnableWindow(true);

        if (m_nCardIdx > 0 && bInsExpiryFlag)
        {
            CString szMsg, szLabel;
            TranslateString(_T("This card has expired"), szLabel);
            szMsg.Format(_T("%s. [%s]"), szLabel,
                         CDate::Convert(m_sCardInfo.expdate));
            ShowMessageBox(szMsg);
        }

        szSQL.Format(
            _T("SELECT sum(hfe_amount) FROM hms_fee_deposit WHERE ")
            _T("hfe_docno=%ld AND hfe_deptid='%s' and hfe_org_id='%s' "),
            m_nDocumentNo, pMF->m_szDept, pMF->GetModuleID());
        //_tprintf(_T("\r\n%s"), szSQL);
        rs.ExecSQL(szSQL);
        m_nAmountDeposit = rs.GetIntValue();

        SetMode(VM_VIEW);
        if (!m_szCardNo.IsEmpty())
            m_wndCardNoButton.EnableWindow(TRUE);

        OnExamListLoadData();

        if (pMF->m_bParaclinical)
        {
            pMF->m_szDoctor = pMF->GetCurrentUser();
            //			pMF->m_wndParaclinicalOrder.m_szDoctor =
            //pMF->m_szDoctor;
            pMF->m_wndParaclinicalOrder.RefreshData();
        }

        for (int i = 0; i < m_arEvent.GetCount(); i++)
        {
            WEVENT event = m_arEvent[i];
            if (event.nID == 20)
            {
                m_arEvent.RemoveAt(i);
                break;
            }
        }

        if (m_nPatientNo > 0)
        {
            CString szSQL;
            szSQL.Format(_T("SELECT count(*) FROM hms_patient_secure WHERE ")
                         _T("hps_patientno=%ld and hps_userid='%s' "),
                         m_nPatientNo, pMF->GetCurrentUser());
            rs.ExecSQL(szSQL);
            if (rs.GetIntValue() > 0)
            {
                AddEvent(20, _T("View patient profile encrypted"),
                         _OnViewSecurePatientProfileFnc);
            }
        }
    }
    else
    {
        m_wndExamList.DeleteAllItems();
        SetMode(VM_NONE);
    }
    // nap lai doi tuong ghep tang
    if (_szIsTransplant == _T("Y"))
    {
        tmpStr = m_wndObject.GetCurrent(1);
        tmpStr.AppendFormat(_T(" (Ghép tạng)"));
        m_wndObject.SetWindowText(tmpStr);
    }
    m_wndPatientState.SetCheckValue(!IsNewBorn(m_nDocumentNo));
    m_wndRoom.SetCheckValue(!IsNewBorn(m_nDocumentNo));
    m_wndExamType.SetCheckValue(!IsNewBorn(m_nDocumentNo));
    // Lấy ra hướng điều trị -> view lên để khoa khám bệnh đổi thẻ
    // (https://github.com/vimesdev/BV108/issues/2701)
    szSQL.Format(
        _T(" SELECT 	hp_patientno as patientno,")
        _T(" 	GET_PATIENTNAME(hd_docno) as pname,")
        _T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,")
        _T(" 	sd_id_alias as todeptid,")
        _T(" 	NVL(GET_SYSSEL_DESC('hms_suggestion', hd_suggestion), 'Chưa ")
        _T("kết thúc') as suggestiondesc ")
        _T(" FROM hms_patient")
        _T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
        _T(" LEFT JOIN sys_dept ON(hd_indept=sd_id)")
        _T(" WHERE hd_docno=%ld "),
        m_nDocumentNo);

    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("suggestiondesc"), m_szHuongdieutri);
        rs.GetValue(_T("todeptid"), m_szVaokhoa);
    }

    CString tmpStrx;
    if (!m_szHuongdieutri.IsEmpty())
    {
        tmpStrx.Format(_T("Hướng điều trị: %s / %s "), m_szHuongdieutri,
                       m_szVaokhoa);
        m_wndHuongdieutri.SetWindowText(tmpStrx);
    }
}
void CHMSRegistration::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);

    int nMode = GetMode();

    bool bAddPat = false, bAddDoc = false, bAddExam = false;
    CString szSurName, szMidName, szFirstName, szSQL;
    CString tmpStr;
    CString szWhere;

    SplitName(m_szPatientName, szSurName, szMidName, szFirstName);
    m_szDept = pMF->m_szDept;

    if (nMode == VM_ADDPAT)
    {
        bAddPat = true;
        bAddDoc = true;
        bAddExam = true;
    }
    else if (nMode == VM_ADDDOC)
    {
        bAddDoc = true;
        bAddExam = true;
    }
    else if (nMode == VM_ADDEXAM)
    {
        bAddExam = true;
    }

    m_szObjectType = m_wndObject.GetCurrent(3);

    if (m_szNationality.IsEmpty())
    {
        m_szNationality = _T("000");
    }
    // Them benh nhan moi
    if (bAddPat)
    {
        m_hms_patientTbl.SetValue(_T("hp_createdby"), pMF->GetCurrentUser());
        m_hms_patientTbl.SetValue(_T("hp_createddate"), pMF->GetSysDateTime());
        m_hms_patientTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
        m_hms_patientTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
        // Lay ma benh nhan moi
        tmpStr.Format(_T("%ld"), m_nPatientNo);
        m_hms_patientTbl.SetValue(_T("hp_patientid"), tmpStr);
        m_hms_patientTbl.SetValue(_T("hp_surname"), szSurName);
        m_hms_patientTbl.SetValue(_T("hp_midname"), szMidName);
        m_hms_patientTbl.SetValue(_T("hp_firstname"), szFirstName);
        m_hms_patientTbl.SetValue(_T("hp_birthdate"), m_szBirthDate);

        //		m_hms_patientTbl.SetValue(_T("hp_age"), m_szAge);
        m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSexKey);
        m_hms_patientTbl.SetValue(_T("hp_ethnic"), m_szEthnicKey);
        m_hms_patientTbl.SetValue(_T("hp_sin"), m_szIDNo);
        m_hms_patientTbl.SetValue(_T("hp_nationality"), m_szNationality);
#ifdef HOSPITAL_108
        /*
                CString szProvID, szDistID, szVillID;
                szProvID = m_wndProvill.GetCurrent(2);
                szDistID = m_wndDistrict.GetCurrent(2);
                if(szDistID.IsEmpty())
                    szDistID.Format(_T("%s00"), szProvID);
                szVillID = m_wndVillage.GetCurrent(2);
                if(szVillID.IsEmpty())
                    szVillID.Format(_T("%s00"), szDistID);
        */
        m_hms_patientTbl.SetValue(_T("hp_provid"), m_szProvillKey);
        m_hms_patientTbl.SetValue(_T("hp_distid"), m_szDistrictKey);
        m_hms_patientTbl.SetValue(_T("hp_villid"), m_szVillageKey);
        //	_msg(_T("%s: %s: %s"), m_szProvillKey, m_szDistrictKey,
        //m_szVillageKey);
        /*
        m_szAddressKey = m_wndVillage.GetCurrent(0);
        m_hms_patientTbl.SetValue(_T("hp_provid"), m_szAddressKey.Left(3));
        m_hms_patientTbl.SetValue(_T("hp_distid"), m_szAddressKey.Left(5));
        m_hms_patientTbl.SetValue(_T("hp_villid"), m_szAddressKey);
        */
#else
        m_hms_patientTbl.SetValue(_T("hp_provid"), m_szAddressKey.Left(3));
        m_hms_patientTbl.SetValue(_T("hp_distid"), m_szAddressKey.Left(5));
        m_hms_patientTbl.SetValue(_T("hp_villid"), m_szAddressKey);
#endif
        m_hms_patientTbl.SetValue(_T("hp_dtladdr"), m_szDetailAddress);
        m_hms_patientTbl.SetValue(_T("hp_status"), _T("A"));
        m_hms_patientTbl.SetValue(_T("hp_occupation"), m_szOccupationKey);

        m_hms_patientTbl.SetValue(_T("hp_workplace"), m_szWorkingPlace);
        m_hms_patientTbl.SetValue(_T("hp_workplaceid"), m_szWorkingPlaceKey);
        m_hms_patientTbl.SetValue(_T("hp_rank"), m_szRankKey);
        m_hms_patientTbl.SetValue(_T("hp_position"), m_szPositionKey);
    }
    // Sua thong tin cua benh nhan
    else if (nMode == VM_EDIT)
    {

        szWhere.Format(_T(" WHERE hp_patientno=%ld"), m_nPatientNo);
        m_hms_patientTbl.Open(&pMF->m_db, szWhere);
        m_hms_patientTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
        m_hms_patientTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
        //	m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNo);
        m_hms_patientTbl.SetValue(_T("hp_patientid"), _T(""));
        m_hms_patientTbl.SetValue(_T("hp_surname"), szSurName);
        m_hms_patientTbl.SetValue(_T("hp_midname"), szMidName);
        m_hms_patientTbl.SetValue(_T("hp_firstname"), szFirstName);
        m_hms_patientTbl.SetValue(_T("hp_birthdate"), m_szBirthDate);
        //	m_hms_patientTbl.SetValue(_T("hp_age"), m_szAge);
        m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSexKey);
        m_hms_patientTbl.SetValue(_T("hp_ethnic"), m_szEthnicKey);
        m_hms_patientTbl.SetValue(_T("hp_sin"), m_szIDNo);
#ifndef HOSPITAL_108
        m_hms_patientTbl.SetValue(_T("hp_provid"), m_szAddressKey.Left(3));
        m_hms_patientTbl.SetValue(_T("hp_distid"), m_szAddressKey.Left(5));
        m_hms_patientTbl.SetValue(_T("hp_villid"), m_szAddressKey);
#else
        m_hms_patientTbl.SetValue(_T("hp_provid"), m_szProvillKey);
        m_hms_patientTbl.SetValue(_T("hp_distid"), m_szDistrictKey);
        m_hms_patientTbl.SetValue(_T("hp_villid"), m_szVillageKey);
#endif

        // MessageBox(m_szWorkingPlaceKey);
        m_hms_patientTbl.SetValue(_T("hp_dtladdr"), m_szDetailAddress);
        m_hms_patientTbl.SetValue(_T("hp_occupation"), m_szOccupationKey);
        m_hms_patientTbl.SetValue(_T("hp_workplace"), m_szWorkingPlace);
        m_hms_patientTbl.SetValue(_T("hp_workplaceid"), m_szWorkingPlaceKey);
        m_hms_patientTbl.SetValue(_T("hp_rank"), m_szRankKey);
        m_hms_patientTbl.SetValue(_T("hp_position"), m_szPositionKey);
        m_hms_patientTbl.SetValue(_T("hp_nationality"), m_szNationality);
    }

    m_szCardNo.MakeUpper();
    if (m_szCardNo.IsEmpty())
    {
        CString szObjectType = m_wndObject.GetCurrent(3);
        if (szObjectType == _T("D") || szObjectType == _T("C"))
            m_nDisrate = ToInt(m_wndObject.GetCurrent(4));
        if (m_szOffLine == _T("Y") && pMF->m_nInsOffLinePayment > 0 &&
            m_szEmergency != _T("Y"))
            m_nDisrate = pMF->m_nInsOffLinePayment;
    }

    // Tao ho so kham moi
    if (bAddDoc)
    {
        // Lay so ho so moi

        m_hms_docTbl.SetValue(_T("hd_createdby"), pMF->GetCurrentUser());
        m_hms_docTbl.SetValue(_T("hd_createddate"), pMF->GetSysDateTime());
        m_hms_docTbl.SetValue(_T("hd_updatedby"), pMF->GetCurrentUser());
        m_hms_docTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
        m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo);
        m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocumentNo);
        m_hms_docTbl.SetValue(_T("hd_status"), _T("O"));
        m_hms_docTbl.SetValue(_T("hd_telephone"), m_szPhone);
        m_hms_docTbl.SetValue(_T("hd_relative"), m_szRelative);
        m_hms_docTbl.SetValue(_T("hd_relation"), m_szRelationKey);
        m_hms_docTbl.SetValue(_T("hd_contactaddr"), m_szContactAddress);
        m_hms_docTbl.SetValue(_T("hd_contacttel"), m_szPhone);
        m_hms_docTbl.SetValue(_T("hd_object"), m_szObjectKey);
        m_hms_docTbl.SetValue(_T("hd_cardno"), m_szCardNo);
        m_hms_docTbl.SetValue(_T("hd_cardidx"), m_nCardIdx);
        m_hms_docTbl.SetValue(_T("hd_insregdate	"), m_szExamDate.Left(10));

        m_hms_docTbl.SetValue(_T("hd_disrate"), m_nDisrate);
        m_hms_docTbl.SetValue(_T("hd_insline"), m_szOffLine);
        m_hms_docTbl.SetValue(_T("hd_admitdept"), m_szDept);
        m_hms_docTbl.SetValue(_T("hd_admitstate"), m_szPatientStateKey);
        m_hms_docTbl.SetValue(_T("hd_admitdate"), m_szExamDate);
        m_hms_docTbl.SetValue(_T("hd_transplace"), m_wndHospital.GetCurrent(1));
        m_hms_docTbl.SetValue(_T("hd_transdiagn"), m_szDisease);
        m_hms_docTbl.SetValue(_T("hd_transplaceid"), m_szHospitalKey);

        m_hms_docTbl.SetValue(_T("hd_xobject"), m_sCardInfo.xobject);
        m_hms_docTbl.SetValue(_T("hd_xcardno"), m_sCardInfo.xCardno);
        m_hms_docTbl.SetValue(_T("hd_xissuedate"), m_sCardInfo.xIssueDate);
        m_hms_docTbl.SetValue(_T("hd_xissueplace"), m_sCardInfo.xIssuePlace);

        m_hms_docTbl.SetValue(_T("hd_viettel_object"),
                              m_bViettel ? _T("Y") : _T("N"));
        m_hms_docTbl.SetValue(_T("HD_108staff"),
                              m_b108Staff ? _T("Y") : _T("N"));
        m_hms_docTbl.SetValue(_T("hd_icard_issuedate"), m_szIssueDate);
        m_hms_docTbl.SetValue(_T("hd_icard_issueplace"), m_szIssuePlaceKey);
        m_hms_docTbl.SetValue(_T("hd_army_objectid"), m_szArmObjectKey);

        m_hms_docTbl.SetValue(_T("hd_over5year"),
                              m_bOver5years ? _T("Y") : _T("N"));
        m_hms_docTbl.SetValue(_T("HD_OVER5YEARAPPLYDATE"), m_szDateOver5year);
        m_hms_docTbl.SetValue(_T("hd_hasfeepaper"),
                              m_bHasFeePaper ? _T("Y") : _T("N"));
        m_hms_docTbl.SetValue(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"),
                              m_szDateDiscountAll);
        m_hms_docTbl.SetValue(_T("HD_MA_DOITUONG_KCB"), m_szDoituong_KCB);
        m_hms_docTbl.SetValue(_T("hd_telephone2"), m_szPhone2);

        //	m_hms_docTbl.SetValue(_T("hd_transicd"), m_szDisease);
    }
    // Sua thong tin ho so kham
    else if (nMode == VM_EDIT)
    {

        szWhere.Format(_T(" WHERE hd_docno=%ld "), m_nDocumentNo);
        m_hms_docTbl.Open(&pMF->m_db, szWhere);

        m_hms_docTbl.SetValue(_T("hd_updatedby"), pMF->GetCurrentUser());
        m_hms_docTbl.SetValue(_T("hd_updateddate"), pMF->GetSysDateTime());
        m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo);
        m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocumentNo);
        m_hms_docTbl.SetValue(_T("hd_status"), _T("O"));
        m_hms_docTbl.SetValue(_T("hd_telephone"), m_szPhone);
        m_hms_docTbl.SetValue(_T("hd_relative"), m_szRelative);
        m_hms_docTbl.SetValue(_T("hd_relation"), m_szRelationKey);
        m_hms_docTbl.SetValue(_T("hd_contactaddr"), m_szContactAddress);
        m_hms_docTbl.SetValue(_T("hd_contacttel"), m_szPhone);
        m_hms_docTbl.SetValue(_T("hd_admitstate"), m_szPatientStateKey);
        m_hms_docTbl.SetValue(_T("hd_object"), m_szObjectKey);

        m_hms_docTbl.SetValue(_T("hd_cardno"), m_szCardNo);
        m_hms_docTbl.SetValue(_T("hd_cardidx"), m_nCardIdx);
        m_hms_docTbl.SetValue(_T("hd_disrate"), m_nDisrate);
        m_hms_docTbl.SetValue(_T("hd_insline"), m_szOffLine);
        m_hms_docTbl.SetValue(_T("hd_admitdept"), m_szDept);
        m_hms_docTbl.SetValue(_T("hd_admitdate"), m_szExamDate);

        m_hms_docTbl.SetValue(_T("hd_transplace"), m_wndHospital.GetCurrent(1));
        m_hms_docTbl.SetValue(_T("hd_transdiagn"), m_szDisease);
        m_hms_docTbl.SetValue(_T("hd_transplaceid"), m_szHospitalKey);
        //	m_hms_docTbl.SetValue(_T("hd_transicd"), m_szDisease);

        m_hms_docTbl.SetValue(_T("hd_viettel_object"),
                              m_bViettel ? _T("Y") : _T("N"));
        m_hms_docTbl.SetValue(_T("HD_108staff"),
                              m_b108Staff ? _T("Y") : _T("N"));
        m_hms_docTbl.SetValue(_T("hd_icard_issuedate"), m_szIssueDate);
        m_hms_docTbl.SetValue(_T("hd_icard_issueplace"), m_szIssuePlaceKey);
        m_hms_docTbl.SetValue(_T("hd_army_objectid"), m_szArmObjectKey);

        m_hms_docTbl.SetValue(_T("hd_over5year"),
                              m_bOver5years ? _T("Y") : _T("N"));
        m_hms_docTbl.SetValue(_T("HD_OVER5YEARAPPLYDATE"), m_szDateOver5year);
        m_hms_docTbl.SetValue(_T("hd_hasfeepaper"),
                              m_bHasFeePaper ? _T("Y") : _T("N"));
        m_hms_docTbl.SetValue(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"),
                              m_szDateDiscountAll);
        m_hms_docTbl.SetValue(_T("HD_MA_DOITUONG_KCB"), m_szDoituong_KCB);
        m_hms_docTbl.SetValue(_T("hd_telephone2"), m_szPhone2);
    }

    if (m_bNewAddress)
    {
        m_hms_docTbl.SetValue(_T("hd_provid"), m_szProvillKey);
        m_hms_docTbl.SetValue(_T("hd_distid"), 0);
        m_hms_docTbl.SetValue(_T("hd_villid"), m_szVillageKey);
        m_hms_docTbl.SetValue(_T("hd_dtladdr"), m_szDetailAddress);
        _tprintf(L"%s", m_szDetailAddress);
    }

    if (!m_szCardNo.IsEmpty())
    {
        //_msg(_T("%d"), m_nCardIdx);
        CDbfMapParser parser;
        szWhere.Format(_T(" WHERE hc_idx = %ld"), m_nCardIdx);
        m_hms_cardTbl.Open(&pMF->m_db, szWhere);
        parser.PushRowData(&m_hms_cardTbl);
        m_hms_cardTbl.SetValue(_T("hc_updatedby"), pMF->GetCurrentUser());
        m_hms_cardTbl.SetValue(_T("hc_updateddate"), pMF->GetSysDateTime());
        m_hms_cardTbl.SetValue(_T("hc_patientno"), m_nPatientNo);
        m_hms_cardTbl.SetValue(_T("hc_cardno"), m_szCardNo);
        m_hms_cardTbl.SetValue(_T("hc_idx"), m_nCardIdx);
        m_hms_cardTbl.SetValue(_T("hc_regdate"), m_sCardInfo.regdate);
        m_hms_cardTbl.SetValue(_T("hc_expdate"), m_sCardInfo.expdate);
        m_hms_cardTbl.SetValue(_T("hc_regcode"), m_sCardInfo.regplacecde);
        m_hms_cardTbl.SetValue(_T("hc_company"), m_sCardInfo.company);
        m_hms_cardTbl.SetValue(_T("hc_code"), m_sCardInfo.code);
        m_hms_cardTbl.SetValue(_T("hc_discount"), m_sCardInfo.discount);
        m_hms_cardTbl.SetValue(_T("hc_groupid"), m_sCardInfo.groupid);
        m_hms_cardTbl.SetValue(_T("hc_area"), m_sCardInfo.szArea);
        m_hms_cardTbl.SetValue(_T("hc_over5year"), m_sCardInfo.szOver5year);
        parser.PushRowData(&m_hms_cardTbl, true);
        m_szCardChange = parser.GetRowChange();
    }
    else
    {
        m_nCardIdx = 0;
        m_hms_docTbl.SetValue(_T("hd_cardno"), _T(""));
        m_hms_docTbl.SetValue(_T("hd_cardidx"), 0);
        // m_hms_docTbl.SetValue(_T("hd_disrate"), 0);
        m_hms_docTbl.SetValue(_T("hd_insline"), _T("N"));
    }

    if ((bAddExam) || nMode == VM_EDIT)
    {
        szWhere.Format(_T(" WHERE he_docno=%ld and he_receptidx=%ld"),
                       m_nDocumentNo, m_nReceptIdx);
        m_hms_examTbl.Open(&pMF->m_db, szWhere);
        m_hms_examTbl.SetValue(_T("he_createdby"), pMF->GetCurrentUser());
        m_hms_examTbl.SetValue(_T("he_createddate"), pMF->GetSysDateTime());
        m_hms_examTbl.SetValue(_T("he_updatedby"), pMF->GetCurrentUser());
        m_hms_examTbl.SetValue(_T("he_updateddate"), pMF->GetSysDateTime());
        m_hms_examTbl.SetValue(_T("he_patientno"), m_nPatientNo);
        m_hms_examTbl.SetValue(_T("he_docno"), m_nDocumentNo);
        m_hms_examTbl.SetValue(_T("he_roomid"), m_szRoomKey);
        m_hms_examTbl.SetValue(_T("he_deptid"), m_szCurrentDept);
        m_hms_examTbl.SetValue(_T("he_receptno"), m_nReceptNo);
        m_hms_examTbl.SetValue(_T("he_receptidx"), m_nReceptIdx);
        m_hms_examTbl.SetValue(_T("he_examdate"), m_szExamDate);
        m_hms_examTbl.SetValue(_T("he_status"), m_szExamStatus);
        m_hms_examTbl.SetValue(_T("he_feeidx"), m_szExamTypeKey);
        tmpStr = m_wndExamType.GetCurrent(6);
        m_hms_examTbl.SetValue(_T("he_examtype"), tmpStr);
        m_hms_examTbl.SetValue(_T("he_payment"), _T("N"));
        m_hms_examTbl.SetValue(_T("he_hasfee"), _T("Y"));
        m_hms_examTbl.SetValue(_T("he_exammove"), _T("N"));
    }
}
void CHMSRegistration::SetDefaultValues()
{
    m_nFindDocument = 0;
    m_ntreattime = 0;
    m_szIssueDate.Empty();
    m_szIssuePlaceKey.Empty();
    m_bLogPaidPatient = false;
    m_szCardNoFind.Empty();
    m_szCurCardNo.Empty();
    m_szPatientName.Empty();
    m_szAge.Empty();
    m_szBirthDate.Empty();
    m_szSexKey = _T("M");
    m_szEthnicKey = _T("1");
    m_szOccupationKey.Empty();
    m_szAddressKey.Empty();
    m_szProvillKey.Empty();
    m_szDistrictKey.Empty();
    m_szVillageKey.Empty();
    m_szDetailAddress.Empty();
    m_szIDNo.Empty();
    m_szWorkingPlace.Empty();
    m_szWorkingPlaceID.Empty();
    m_szArmObjectKey.Empty();
    m_szRankKey.Empty();
    m_szPositionKey.Empty();
    m_szRelationKey.Empty();
    m_szRelative.Empty();
    m_szPhone.Empty();
    m_szPhone2.Empty();
    m_szContactAddress.Empty();
    m_szWorkingPlaceKey.Empty();
    m_bAllowAddCard = true;
    m_nAmountDeposit = 0;
    m_szNationality = _T("000");
    m_bForeigner = FALSE;
    m_bViettel = FALSE;
    m_IsInsExpired = false;
    m_b108Staff = FALSE;

    m_bOver5years = FALSE;
    m_bHasFeePaper = FALSE;
    m_szDateDiscountAll.Empty();
    m_szDateOver5year.Empty();
    m_szDoituong_KCB.Empty();

    m_wndForeignerDesc.SetWindowText(_T(""));

    m_szNationalityDesc.Empty();

    m_bNewAddress = false;

    int nMode = GetMode();
    switch (nMode)
    {
    case VM_ADDPAT:
    case VM_ADDDOC:
    case VM_NONE:
        m_szObjectKey = _T("7");
        m_szCardNo.Empty();
        m_szPatientStateKey = _T("A");
        m_szHospitalKey.Empty();
        m_szDisease.Empty();
        break;
    };

    if (GetMode() == VM_ADDPAT || GetMode() == VM_NONE)
    {
        m_nDisrate = 0;
        m_szOffLine = _T("N");
    }
    m_szExamDate.Empty();

    m_sCardInfo.code.Empty();
    m_sCardInfo.company.Empty();
    m_sCardInfo.discount = 0;
    m_sCardInfo.expdate.Empty();
    m_sCardInfo.groupid = 0;
    m_sCardInfo.hospitalid.Empty();
    m_sCardInfo.regdate.Empty();
    m_sCardInfo.regplacecde.Empty();
    m_sCardInfo.xCardno.Empty();
    m_sCardInfo.xobject.Empty();
    m_sCardInfo.xIssueDate.Empty();
    m_sCardInfo.xIssuePlace.Empty();
    m_sCardInfo.szArea.Empty();
    m_sCardInfo.bxHema = false;
    m_sCardInfo.szOver5year.Empty();
    m_arWorkPlaces.RemoveAll();
    m_szSmartcardID.Empty();
}
int CHMSRegistration::SetMode(int nMode)
{
    int nOldMode = GetMode();
    CGuiView::SetMode(nMode);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    CString tmpStr;

    m_wndHospital.SetCheckValue(false);
    m_wndDisease.SetCheckValue(false);
    m_bValidHospitalTransfer = false;

    switch (nMode)
    {
    case VM_ADDPAT:

        if (!pMF->CheckPermission(_T("01.01")))
        {
            ShowMessageBox(_T("Permission Denined."), 0);
            return 0;
        }

        EnableControls(TRUE);
        EnableButtons(TRUE, 0, 4, 5, -1);
        // EnableButtons(TRUE, 0, 1, 5, 6, -1);
        SetDefaultValues();
        m_nPatientNo = m_nDocumentNo = 0;
        m_szExamDate = pMF->GetSysDateTime();
        // pMF->SetStatusText(_T("Add new patient"));
        m_wndExamList.DeleteAllItems();
        if (pMF->m_szAllowInputDate == _T("Y"))
        {
            m_wndExamDate.ModifyStyle(0, WS_TABSTOP);
            m_wndExamDate.EnableWindow(true);
            m_wndExamDate.SetReadOnly(false);
        }

        if (m_bTransfer)
        {
            m_wndHospital.EnableWindow(TRUE);
            m_wndDisease.EnableWindow(TRUE);
        }
        else
        {
            m_wndHospital.EnableWindow(FALSE);
            m_wndDisease.EnableWindow(FALSE);
        }

        m_wndTransfer.EnableWindow(true);
        szSQL.Format(_T("SELECT hfl_index1, hfl_index2 FROM hms_fee_list ")
                     _T("WHERE hfl_typeid='E' and hfl_deptid='%s' "),
                     pMF->m_szDept);
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("hfl_index1"), m_szRoomKey);
            rs.GetValue(_T("hfl_index2"), m_szExamTypeKey);
        }
        //_msg(_T("%s"), szSQL);
        m_szCurrentDept = pMF->m_szDept;
        // Nếu đối tượng số 7 & khoa C1.3 thì gán lại
        if (pMF->m_szDept == _T("C1.3") && m_szObjectKey == _T("7"))
        {
            m_szExamTypeKey = _T("82");
        }
        // Default đối tượng BH cho khu AB
        if (pMF->m_szDept == _T("AB") && m_szObjectKey != _T("7"))
        {
            m_szExamTypeKey = _T("37");
        }

        m_szPatientNote.Empty();
        m_wndPatientNote.EnableWindow(true);

        break;
    case VM_ADDDOC:

        if (!pMF->CheckPermission(_T("01.01")))
        {
            ShowMessageBox(_T("Permission Denined."), 0);
            return 0;
        }
        m_wndObject.EnableWindow(TRUE);
        m_wndPatientState.EnableWindow(TRUE);
        m_wndRoom.EnableWindow(TRUE);
        m_wndExamType.EnableWindow(TRUE);
        //	m_wndHospital.EnableWindow(TRUE);
        //	m_wndDisease.EnableWindow(TRUE);
        EnableButtons(TRUE, 0, 4, 5, -1);
        // EnableButtons(TRUE, 0, 1, 5, 6, -1);
        m_szExamDate = pMF->GetSysDateTime();
        m_wndExamType.SetFocus();
        // pMF->SetStatusText(_T("Add new document"));
        m_nDocumentNo = 0;
        m_wndExamList.DeleteAllItems();
        if (pMF->m_szAllowInputDate == _T("Y"))
        {
            m_wndExamDate.ModifyStyle(0, WS_TABSTOP);
            m_wndExamDate.EnableWindow(true);
        }

        m_szOffLine = _T("N");
        if (m_szCardNo.Right(5) != _T("01014"))
        {
            m_szOffLine = _T("Y");
        }

        // tmpStr = AfxGetApp()->GetProfileString(_T(""),
        // _T("IgnoreHospitalTransfer"));
        if (m_bTransfer)
        {
            m_wndHospital.EnableWindow(TRUE);
            m_wndDisease.EnableWindow(TRUE);
        }
        else
        {
            m_wndHospital.EnableWindow(FALSE);
            m_wndDisease.EnableWindow(FALSE);
        }

        m_wndTransfer.EnableWindow(true);
        szSQL.Format(_T("SELECT hfl_index1, hfl_index2 FROM hms_fee_list ")
                     _T("WHERE hfl_typeid='E' and hfl_deptid='%s' "),
                     pMF->m_szDept);
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("hfl_index1"), m_szRoomKey);
            rs.GetValue(_T("hfl_index2"), m_szExamTypeKey);
        }

        m_szCurrentDept = pMF->m_szDept;

        // Nếu đối tượng số 7 & khoa C1.3 thì gán lại
        if (pMF->m_szDept == _T("C1.3") && m_szObjectKey == _T("7"))
        {
            m_szExamTypeKey = _T("82");
        }

        // Default đối tượng BH cho khu AB
        if (pMF->m_szDept == _T("AB") && m_szObjectKey != _T("7"))
        {
            m_szExamTypeKey = _T("37");
        }

        if (m_nCountExamDate > 0 && m_nCountExamDate < 60 &&
            pMF->m_szDept == _T("TYC"))
        {
            ShowMessageBox(_T("Bệnh nhân khám lại trong vòng 2 tháng"));
        }
        m_wndPatientNote.EnableWindow(true);

        //m_bNewAddress = true;
        break;
    case VM_ADDEXAM:
        if (!pMF->CheckPermission(_T("01.01")))
        {
            ShowMessageBox(_T("Permission Denined."), 0);
            return 0;
        }
        m_wndRoom.EnableWindow(TRUE);
        m_wndExamType.EnableWindow(TRUE);
        EnableButtons(TRUE, 0, 4, 5, -1);
        // EnableButtons(TRUE, 0, 1, 5, 6, -1);
        m_szExamDate = pMF->GetSysDateTime();
        m_wndExamType.SetFocus();

        if (pMF->m_szAllowInputDate == _T("Y"))
        {
            m_wndExamDate.ModifyStyle(0, WS_TABSTOP);
            m_wndExamDate.EnableWindow(true);
        }
        szSQL.Format(_T("SELECT hfl_index1, hfl_index2 FROM hms_fee_list ")
                     _T("WHERE hfl_typeid='E' and hfl_deptid='%s' "),
                     pMF->m_szDept);
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("hfl_index1"), m_szRoomKey);
            rs.GetValue(_T("hfl_index2"), m_szExamTypeKey);
        }
        // pMF->SetStatusText(_T("Add new examination receipt"));

        m_szCurrentDept = pMF->m_szDept;

        if (m_nCountExamDate > 0 && m_nCountExamDate < 60 &&
            pMF->m_szDept == _T("TYC"))
        {
            ShowMessageBox(_T("Bệnh nhân khám lại trong vòng 2 tháng"));
        }

        break;
    case VM_EDIT:
        if (!pMF->CheckPermission(_T("01.02")))
        {
            ShowMessageBox(_T("Permission Denined."), 0);
            return 0;
        }

        if (!pMF->CheckPermission(_T("01.12")))
        {
            szSQL.Format(
                _T("SELECT hdf_acceptedfee FROM hms_doc WHERE hd_docno=%ld"),
                m_nDocumentNo);
            rs.ExecSQL(szSQL);
            if (rs.GetStringValue() == _T("Y"))
            {
                ShowMessageBox(_T("Bệnh nhân đã thanh toán đợt khám. Không ")
                               _T("thể sửa thông tin bệnh nhân!"),
                               0);
                return 0;
            }
        }

        EnableControls(TRUE);
        EnableButtons(TRUE, 0, 4, 5, -1);
        // EnableButtons(TRUE, 0, 1, 5, 6, -1);
        if (pMF->m_szAllowInputDate == _T("Y"))
        {
            m_wndExamDate.ModifyStyle(0, WS_TABSTOP);
            m_wndExamDate.EnableWindow(true);
        }
        // pMF->SetStatusText(_T("Edit patient information"));
        if (m_szExamStatus != _T("O"))
        {
            m_wndExamDate.SetCheckValue(false);
            m_wndExamDate.EnableWindow(false);
        }

        // tmpStr = AfxGetApp()->GetProfileString(_T(""),
        // _T("IgnoreHospitalTransfer"));
        m_wndTransfer.EnableWindow(true);

        if (m_bTransfer)
        {
            m_wndHospital.EnableWindow(TRUE);
            m_wndDisease.EnableWindow(TRUE);
        }
        else
        {
            m_wndHospital.EnableWindow(FALSE);
            m_wndDisease.EnableWindow(FALSE);
        }
        m_wndPatientNote.EnableWindow(true);
        if (m_bNewAddress)
        {
            m_wndDistrict.EnableWindow(false);
        }
        break;
    case VM_VIEW:
        EnableControls(FALSE);
        EnableButtons(FALSE, 0, 4, 5, -1);
        // EnableButtons(FALSE, 0, 1, 4, 5, -1);
        // pMF->SetStatusText(_T("View information of patient"));
        m_wndTransfer.EnableWindow(false);
        m_szCurrentDept = pMF->m_szDept;
        m_wndArmObject.EnableWindow(FALSE);
        m_wndRank.EnableWindow(FALSE);
        break;
    case VM_NONE:
        EnableControls(FALSE);
        EnableButtons(TRUE, 1, -1);
        // EnableButtons(TRUE, 1, -1);
        SetDefaultValues();
        // pMF->SetStatusText(_T("Ready"));
        m_wndExamList.DeleteAllItems();
        m_wndTransfer.EnableWindow(false);
        m_wndArmObject.EnableWindow(FALSE);
        m_wndRank.EnableWindow(FALSE);
        break;
    };

    if (nMode != VM_VIEW && nMode != VM_NONE)
    {
        m_wndPatientNo.EnableWindow(FALSE);
        m_wndDocumentNo.EnableWindow(FALSE);
        m_wndCardNoFind.EnableWindow(FALSE);
        m_wndArmObject.EnableWindow(TRUE);
        m_wndRank.EnableWindow(TRUE);
        m_wndPatientName.SetFocus();
    }
    else
    {
        m_wndPatientNo.EnableWindow(TRUE);
        m_wndDocumentNo.EnableWindow(TRUE);
        m_wndCardNoFind.EnableWindow(TRUE);
        m_wndDocumentNo.SetFocus();
    }

    m_wndPatientState.EnableWindow(false);

    // Disable o nhap huyen
    if (nMode == VM_ADDPAT || nMode == VM_ADDDOC)
    {
        // m_wndDistrict.EnableWindow(FALSE);
    }

    UpdateData(false);
    if (!m_szCardNo.IsEmpty())
    {
        OnObjectSelendok();
    }

    return nOldMode;
}
int CHMSRegistration::OnRoomListDblClick() { return 0; }
int CHMSRegistration::OnRoomListSelectChange(int nOldItem, int nNewItem)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSRegistration::OnRoomListDeleteItem()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSRegistration::OnRoomListLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Format(_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', ")
                   _T("'YYYY/MM/DD HH24:MI:SS') ")
                   _T(" AND systimestamp"),
                   m_szFromDate);

    szSQL.Format(_T(" SELECT he_deptid,")
                 _T("   hrl_name AS name,")
                 _T("   NVL(hrl_limited, null) as roomlimited, ")
                 _T("   SUM(he_receptreg_ser + he_receptreg_ins) AS reg,")
                 _T("   SUM(he_receptreg_ser) as he_receptreg_ser,")
                 _T("   SUM(he_receptreg_ins) as he_receptreg_ins,")
                 _T("   ")
                 _T("   SUM(he_examed_ser + he_examed_ins) AS examed,")
                 _T("   SUM(he_examed_ser) as he_examed_ser,")
                 _T("   SUM(he_examed_ins) as he_examed_ins  ")
                 _T(" FROM")
                 _T("   (SELECT he_deptid,")
                 _T("     he_roomid,")
                 _T("     he_docno as docno,")
                 _T("     ho_type,")
                 _T("     case when ho_type = 'S' then 1 else 0 end as ")
                 _T("he_receptreg_ser,")
                 _T("     case when ho_type <> 'S' then 1 else 0 end as ")
                 _T("he_receptreg_ins,")
                 _T("     case when ho_type = 'S' and he_status in ('P','T') ")
                 _T("then 1 else 0 end as he_examed_ser,")
                 _T("     case when ho_type <> 'S' and he_status in ('P','T') ")
                 _T("then 1 else 0 end as he_examed_ins    ")
                 _T("   FROM hms_exam")
                 _T("   LEFT JOIN hms_doc ON (he_docno = hd_docno)")
                 _T("   LEFT JOIN hms_object ON (hd_object = ho_id)")
                 _T("   WHERE 1=1 %s ")
                 _T("   ) Tbl")
                 _T(" LEFT JOIN hms_roomlist")
                 _T(" ON(he_deptid = hrl_deptid")
                 _T(" AND he_roomid = hrl_id)")
                 _T(" WHERE 1=1")
                 _T(" AND he_deptid='%s'")
                 _T(" GROUP BY he_deptid,")
                 _T("   HRL_INDEX,")
                 _T("   hrl_limited,")
                 _T("   hrl_name ")
                 _T(" ORDER BY he_deptid,")
                 _T("   HRL_INDEX"),
                 szWhere, pMF->m_szDept);

    m_wndRoomList.BeginLoad();
    int nCount = 0;
    int nItem = 0;
    int nReg = 0, nExamed = 0, nreceptreg_ser = 0, nreceptreg_ins = 0,
        nexamed_ser = 0, nexamed_ins = 0;
    CString szLabel, szTotalReg, szTotalExamed;
    TranslateString(_T("Total"), szLabel);
    nCount = rs.ExecSQL(szSQL);

    int amountreg = 0;
    int amountexam = 0;
    int amountreceptreg_ser = 0;
    int amountreceptreg_ins = 0;
    int amountexamed_ser = 0;
    int amountexamed_ins = 0;
    int amountreg2 = 0;
    int amountlimit = 0;

    CString szDeptid = _T(""), szOldDeptid = _T("");
    while (!rs.IsEOF())
    {
        szDeptid = rs.GetValue(_T("he_deptid"));
        if (szDeptid != szOldDeptid)
        {
            if (amountreg > 0)
            {
                m_wndRoomList.SetItemText(nItem, 2, int2str(amountreg));
                m_wndRoomList.SetItemText(nItem, 3, int2str(amountexam));
                m_wndRoomList.SetItemText(nItem, 4,
                                          int2str(amountreceptreg_ser));
                m_wndRoomList.SetItemText(nItem, 5,
                                          int2str(amountreceptreg_ins));
                m_wndRoomList.SetItemText(nItem, 6, int2str(amountexamed_ser));
                m_wndRoomList.SetItemText(nItem, 7, int2str(amountexamed_ins));
            }
            szOldDeptid = szDeptid;
            nItem = m_wndRoomList.AddItems(szLabel, NULL, NULL, NULL, NULL,
                                           NULL, NULL, NULL);

            m_wndRoomList.SetItemBkColor(nItem, RGB(64, 128, 128), false);
            m_wndRoomList.SetItemTextColor(nItem, RGB(255, 255, 255), false);

            amountreg = 0;
            amountexam = 0;
            amountreceptreg_ser = 0;
            amountreceptreg_ins = 0;
            amountexamed_ser = 0;
            amountexamed_ins = 0;
        }
        CString szAmountreg, szAmountexam, szamountreceptreg_ser,
            szamountreceptreg_ins, szamountexamed_ser, szamountexamed_ins,
            limited;

        rs.GetValue(_T("reg"), szAmountreg);
        rs.GetValue(_T("examed"), szAmountexam);
        rs.GetValue(_T("he_receptreg_ser"), szamountreceptreg_ser);
        rs.GetValue(_T("he_receptreg_ins"), szamountreceptreg_ins);
        rs.GetValue(_T("he_examed_ser"), szamountexamed_ser);
        rs.GetValue(_T("he_examed_ins"), szamountexamed_ins);
        rs.GetValue(_T("roomlimited"), amountlimit);
        rs.GetValue(_T("reg"), amountreg2);

        int nItem2 = m_wndRoomList.AddItems(
            rs.GetValue(_T("name")), rs.GetValue(_T("roomlimited")),
            rs.GetValue(_T("reg")), rs.GetValue(_T("examed")),
            rs.GetValue(_T("he_receptreg_ser")),
            rs.GetValue(_T("he_receptreg_ins")),
            rs.GetValue(_T("he_examed_ser")), rs.GetValue(_T("he_examed_ins")),
            NULL);

        amountreg += ToInt(szAmountreg);
        amountexam += ToInt(szAmountexam);
        amountreceptreg_ser += ToInt(szamountreceptreg_ser);
        amountreceptreg_ins += ToInt(szamountreceptreg_ins);
        amountexamed_ser += ToInt(szamountexamed_ser);
        amountexamed_ins += ToInt(szamountexamed_ins);

        if (amountreg2 >= amountlimit && amountlimit > 0)
        {
            for (int i = 1; i < 2; i++)
            {
                m_wndRoomList.SetSubItemBkColor(nItem2, i, RGB(255, 102, 0),
                                                FALSE);
                m_wndRoomList.SetSubItemTextColor(nItem2, i, RGB(0, 38, 66),
                                                  FALSE);
            }
        }

        rs.MoveNext();
    }

    if (amountreg > 0)
    {
        m_wndRoomList.SetItemText(nItem, 2, int2str(amountreg));
        m_wndRoomList.SetItemText(nItem, 3, int2str(amountexam));
        m_wndRoomList.SetItemText(nItem, 4, int2str(amountreceptreg_ser));
        m_wndRoomList.SetItemText(nItem, 5, int2str(amountreceptreg_ins));
        m_wndRoomList.SetItemText(nItem, 6, int2str(amountexamed_ser));
        m_wndRoomList.SetItemText(nItem, 7, int2str(amountexamed_ins));

        m_wndRoomList.SetItemBkColor(nItem, RGB(64, 128, 128), false);
        m_wndRoomList.SetItemTextColor(nItem, RGB(255, 255, 255), false);
        // SetWindowFont(&m_wndRoomList, GetFaceName(), GetFaceSize()+1, true);
    }

    // m_wndRoomList.SetRedraw(true);
    m_wndRoomList.EndLoad();

    return nCount;
}
void CHMSRegistration::OnExamListDblClick() {}
void CHMSRegistration::OnExamListSelectChange(int nOldItem, int nNewItem)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);

    if (nNewItem < 0)
        return;

    if (GetMode() != VM_VIEW)
    {
        //	SetMode(VM_NONE);
        return;
    }

    m_nDocumentNo = ToLong(m_wndExamList.GetItemText(nNewItem, 0));
    m_nReceptIdx = ToInt(m_wndExamList.GetItemText(nNewItem, 6));
    // m_szExamTypeKey = m_wndExamList.GetItemText(nNewItem, 9);
    //_msg(_T("%s"),m_szExamTypeKey);
    szSQL.Format(
        _T("SELECT  ")
        _T("hd_docno, ")
        _T("hd_relation, ")
        _T("hd_admitstate, ")
        _T("hd_object, ")
        _T("TO_CHAR(hd_admitdate, 'YYYY-MM-DD HH24:MI:SS') as hd_admitdate, ")
        _T("hd_admitdept, ")
        _T("hd_status, ")
        _T("hd_cardno, ")
        _T("hd_insline, ")
        _T("hd_telephone, ")
        _T("hd_contactaddr, ")
        _T("hd_transplaceid, ")
        _T("hd_transplace, ")
        _T("hd_transdiagn, ")
        _T("hd_cardidx, hd_emergency, hd_recordno ")
        _T("FROM hms_doc WHERE hd_docno=%ld"),
        m_nDocumentNo);
    rs.ExecSQL(szSQL);

    // MessageBox(szSQL);

    if (!rs.IsEOF())
    {
        rs.GetValue(_T("hd_docno"), m_nDocumentNo);
        //	rs.GetValue(_T("hd_status"), m_szStatus);
        rs.GetValue(_T("hd_telephone"), m_szPhone);
        rs.GetValue(_T("hd_relative"), m_szRelative);
        rs.GetValue(_T("hd_relation"), m_szRelationKey);
        rs.GetValue(_T("hd_contactaddr"), m_szContactAddress);
        rs.GetValue(_T("hd_transplaceid"), m_szHospitalKey);
        rs.GetValue(_T("hd_transdiagn"), m_szDisease);
        rs.GetValue(_T("hd_admitstate"), m_szPatientStateKey);
        rs.GetValue(_T("hd_object"), m_szObjectKey);

        rs.GetValue(_T("hd_cardno"), m_szCardNo);
        m_szCurCardNo = m_szCardNo;

        rs.GetValue(_T("hd_admitdate"), m_szExamDate);
        rs.GetValue(_T("hd_admitdept"), m_szDept);
        rs.GetValue(_T("hd_status"), m_szDocStatus);
        rs.GetValue(_T("hd_insline"), m_szOffLine);
        rs.GetValue(_T("hd_emergency"), m_szEmergency);
        rs.GetValue(_T("hd_cardidx"), m_nCardIdx);
        // rs.GetValue(_T("hd_recordno"), m_szOutPatientRecord);
        //_msg(_T("%d"), m_nCardIdx);

        szSQL.Format(
            _T("SELECT sum(hfe_amount) FROM hms_fee_deposit ")
            _T("WHERE hfe_docno=%ld AND hfe_deptid='%s' and hfe_org_id='%s'  "),
            m_nDocumentNo, pMF->m_szDept, pMF->GetModuleID());
        rs.ExecSQL(szSQL);
        m_nAmountDeposit = rs.GetIntValue();

        // if has card the load informations of card
        // Neu co the thi load cac thong tin the ra
        if (!m_szCardNo.IsEmpty())
        {
            szSQL.Format(_T("SELECT * FROM hms_card ")
                         _T("WHERE hc_patientno=%ld AND hc_idx=%ld"),
                         m_nPatientNo, m_nCardIdx);
            rs.ExecSQL(szSQL);
            if (!rs.IsEOF())
            {
                rs.GetValue(_T("hc_regdate"), m_sCardInfo.regdate);
                rs.GetValue(_T("hc_expdate"), m_sCardInfo.expdate);
                rs.GetValue(_T("hc_regcode"), m_sCardInfo.regplacecde);
                rs.GetValue(_T("hc_company"), m_sCardInfo.company);
                rs.GetValue(_T("hc_code"), m_sCardInfo.code);
                rs.GetValue(_T("hc_discount"), m_sCardInfo.discount);
            }
        }
        szSQL.Format(
            _T("SELECT he_deptid, ")
            _T("he_roomid, ")
            _T("he_receptno, ")
            _T("he_receptidx, ")
            _T("TO_CHAR(he_examdate, 'YYYY-MM-DD HH24:MI:SS') as he_examdate, ")
            _T("he_status, ")
            _T("he_feeidx, ")
            _T("he_examtype, ")
            _T("he_hasfee, ")
            _T("he_payment ")
            _T("FROM hms_exam WHERE he_docno=%ld AND he_receptidx=%d "),
            m_nDocumentNo, m_nReceptIdx);
        rs.ExecSQL(szSQL);
        //_msg(_T("%s"),szSQL);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("he_roomid"), m_szRoomKey);
            m_szCurRoom = m_szRoomKey;
            rs.GetValue(_T("he_receptno"), m_nReceptNo);
            rs.GetValue(_T("he_receptidx"), m_nReceptIdx);
            rs.GetValue(_T("he_examdate"), m_szExamDate);
            rs.GetValue(_T("he_status"), m_szExamStatus);
            rs.GetValue(_T("he_feeidx"), m_szExamTypeKey);
            rs.GetValue(_T("he_hasfee"), m_szHasFee);
            rs.GetValue(_T("he_payment"), m_szPayment);
            rs.GetValue(_T("he_deptid"), m_szCurrentDept);
            m_szSheetNo.Format(_T("%s.%d"), m_szRoomKey, m_nReceptNo);
        }

        // Lấy ra hướng điều trị -> view lên để khoa khám bệnh đổi thẻ
        // (https://github.com/vimesdev/BV108/issues/2701)

        szSQL.Format(
            _T(" SELECT 	hp_patientno as patientno,")
            _T(" 	GET_PATIENTNAME(hd_docno) as pname,")
            _T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,")
            _T(" 	sd_id_alias as todeptid,")
            _T(" 	NVL(GET_SYSSEL_DESC('hms_suggestion', hd_suggestion), ")
            _T("'Chưa kết thúc') as suggestiondesc ")
            _T(" FROM hms_patient")
            _T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
            _T(" LEFT JOIN sys_dept ON(hd_indept=sd_id)")
            _T(" WHERE hd_docno=%ld "),
            m_nDocumentNo);

        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("suggestiondesc"), m_szHuongdieutri);
            rs.GetValue(_T("todeptid"), m_szVaokhoa);
        }

        CString tmpStrx;
        tmpStrx.Empty();

        // if (!m_szHuongdieutri.IsEmpty())
        //{
        tmpStrx.Format(_T("Hướng điều trị: %s / %s "), m_szHuongdieutri,
                       m_szVaokhoa);
        m_wndHuongdieutri.SetWindowText(tmpStrx);
        //}

        CGuiView::SetMode(VM_VIEW);
        UpdateData(false);

        if (!m_szCardNo.IsEmpty())
            m_wndCardNoButton.EnableWindow(true);
    }
}
int CHMSRegistration::OnExamListDeleteItem()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    int nSel;
    nSel = m_wndExamList.GetCurSel();
    if (nSel < 0)
        return 0;
    OnDeleteHMSRegistration();
    return 0;
}
#include "HMSCancelReasonDialog.h"
int CHMSRegistration::OnExamListCancelItem()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szStatus, szFeeStatus;
    int nSel;
    nSel = m_wndExamList.GetCurSel();
    if (nSel < 0)
        return 0;

    szSQL.Format(_T("SELECT he_status, HFE_REFSTATUS FROM hms_exam ")
                 _T("WHERE he_docno=%ld and he_receptidx = %ld "),
                 m_nDocumentNo, m_nReceptIdx);
    rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("he_status"), szStatus);
        rs.GetValue(_T("HFE_REFSTATUS"), szFeeStatus);
    }
    //_msg(_T("%s"), szStatus);
    if (szFeeStatus == _T("P"))
    {
        ShowMessageBox(_T("Không thể hủy phiếu ở trạng thái hiện thời!"));
        return -1;
    }

    int ret = ShowMessageBox(_T("Chức năng này sẽ hủy phiếu khám và ghi log ")
                             _T("lại sự kiện, bạn chắc chắn không? "),
                             MB_YESNO);
    if (ret == IDNO)
        return -2;

    CHMSCancelReasonDialog dlg(this);
    if (dlg.DoModal() == IDOK)
    {
        szSQL.Format(_T("HMS_EXAM_CANCEL_ITEM('%s', %ld, %ld, '%s') "),
                     pMF->m_szDept, m_nDocumentNo, m_nReceptIdx,
                     pMF->GetCurrentUser());

        int ret = str2int(pMF->ExecDML(szSQL));

        if (ret > 0)
        {
            CString szEvent, szDesc;
            szEvent.Format(_T("Hủy phiếu khám"));
            szDesc.Format(_T("SHS: %ld So phieu :%ld Ly do: %s "),
                          m_nDocumentNo, m_nReceptIdx, dlg.m_szReason);
            pMF->SystemLog(szEvent, szDesc);

            SetMode(VM_VIEW);
            OnExamListLoadData();
        }
        else
        {
            CString szMsg;
            szMsg.Format(_T("[%d] Không hủy được phiếu tiếp đón"), ret);
            ShowMessageBox(szMsg, MB_OK);
        }
    }
    // CGuiDialog::OnOK();
    return ret;
    return 0;
}
// void CHMSRegistration::On108StaffSelect()
//{
//	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//
// }

int CHMSRegistration::OnExamListSetPriority()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (!pMF->CheckPermission(_T("01.04")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return 0;
    }

    if (m_szDocStatus == _T("T"))
    {
        ShowMessageBox(_T("Cannot process with current status."));
        return 0;
    }
    CHMSPriorityDialog dlg(this);
    if (dlg.DoModal() == IDOK)
    {

        CString szSQL;
        if (dlg.m_nLevel == 0)
        {
            szSQL.Format(
                _T("UPDATE hms_exam SET he_emergency='Y', he_priority=%d ")
                _T("WHERE he_docno=%ld AND he_receptidx=%d"),
                dlg.m_nLevel, m_nDocumentNo, m_nReceptIdx);
            pMF->ExecSQL(szSQL);
            szSQL.Format(
                _T("UPDATE hms_doc SET hd_emergency='Y' WHERE hd_docno=%ld"),
                m_nDocumentNo);
            pMF->ExecSQL(szSQL);
        }
        else
        {
            szSQL.Format(
                _T("UPDATE hms_exam SET he_emergency='N', he_priority=%d ")
                _T("WHERE he_docno=%ld AND he_receptidx=%d"),
                dlg.m_nLevel, m_nDocumentNo, m_nReceptIdx);
            pMF->ExecSQL(szSQL);
            szSQL.Format(_T("SELECT count(*) FROM hms_exam WHERE he_docno=%ld ")
                         _T("and he_emergency='Y' "),
                         m_nDocumentNo);
            CRecord rs(&pMF->m_db);
            rs.ExecSQL(szSQL);
            if (rs.GetIntValue() <= 0)
            {
                szSQL.Format(_T("UPDATE hms_doc SET hd_emergency='N' WHERE ")
                             _T("hd_docno=%ld"),
                             m_nDocumentNo);
                pMF->ExecSQL(szSQL);
            }
        }
    }
    return 0;
}
long CHMSRegistration::OnExamListLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szStatus;

    m_wndExamList.BeginLoad();
    int nCount = 0;

    szSQL.Format(
        _T("select he_docno as docno, to_char((he_examdate), 'DD/MM/YYYY') as ")
        _T("examdate, trunc(sysdate)-trunc(he_examdate) as count_examdate, ")
        _T(" (select distinct '['||hrl_deptid||'] '||hrl_name from ")
        _T("hms_roomlist where hrl_deptid=he_deptid and hrl_id=he_roomid) as ")
        _T("name, ")
        _T("he_receptno as receptno, he_receptidx as receptidx, HE_FEEIDX,")
        _T("(select distinct su_name from sys_user where su_userid=he_doctor) ")
        _T("as doctor, he_status as status, he_diagnostic as disease, ")
        _T("case when NVL(hdf_acceptedfee, 'N') = 'Y' then Cast('Đã thanh ")
        _T("toán' as nvarchar2(21)) else Cast('Chưa thanh toán' as ")
        _T("nvarchar2(21)) end as payment ")
        _T("from hms_doc left join hms_exam on(he_docno=hd_docno) ")
        _T("where hd_patientno=%ld and he_docno>0")
        _T("order by he_examdate DESC, hd_docno, receptidx, he_roomid "),
        m_nPatientNo);

    //_tprintf(_T("\r\n%s"), szSQL);

    nCount = rs.ExecSQL(szSQL);
    //_msg(_T("%s"),szSQL);
    CString tmpStr;

    int n;
    m_nCountExamDate = 100;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("status"), tmpStr);
        rs.GetValue(_T("count_examdate"), n);
        m_nCountExamDate = min(m_nCountExamDate, n);
        if (tmpStr == _T("T"))
            tmpStr = pMF->GetStatusString(tmpStr, _T("Terminated"));
        else if (tmpStr == _T("P"))
            tmpStr = pMF->GetStatusString(tmpStr, _T("Examed"));
        else if (tmpStr == _T("O"))
            tmpStr = pMF->GetStatusString(tmpStr, _T("Opening"));
        else
            tmpStr = pMF->GetStatusString(tmpStr, _T("Đã hủy"));
        //_msg(_T("%s"),tmpStr);
        int nItem = m_wndExamList.AddItems(
            rs.GetValue(_T("docno")), rs.GetValue(_T("examdate")),
            rs.GetValue(_T("name")), rs.GetValue(_T("receptno")),
            rs.GetValue(_T("doctor")), tmpStr, rs.GetValue(_T("receptidx")),
            rs.GetValue(_T("disease")), rs.GetValue(_T("payment")),
            rs.GetValue(_T("HE_FEEIDX")), NULL);
        rs.GetValue(_T("status"), szStatus);
        if (szStatus == _T("C"))
        {
            m_wndExamList.SetSubItemBkColor(nItem, 5, RGB(255, 127, 36), FALSE);
            m_wndExamList.SetSubItemTextColor(nItem, 5, RGB(255, 255, 255),
                                              FALSE);
        }
        rs.MoveNext();
    }
    //_tprintf(_T("\r\n%ld"), m_nReceptIdx);
    m_wndExamList.EndLoad();
    if (m_wndExamList.GetItemCount() > 0)
        m_wndExamList.SetCurSel(0);

    return nCount;
}
/*int CHMSRegistration::OnPatientNoSetfocus(){
    return 0;
} */
/*int CHMSRegistration::OnPatientNoKillfocus(){
    return 0;
} */
int CHMSRegistration::OnPatientNoCheckValue()
{
    if (GetMode() != VM_VIEW && GetMode() != VM_NONE)
        return -1;
    UpdateData(true);

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString tmpStr, szDate;
    tmpStr.Format(_T("%ld"), m_nPatientNo);
    if (tmpStr.GetLength() < 7)
    {
        szDate = pMF->GetSysDate();
        tmpStr.Format(_T("%d%.7ld"), ToInt(szDate.Mid(2, 2)), m_nPatientNo);
        m_nPatientNo = ToLong(tmpStr);
    }
    m_nDocumentNo = 0;
    UpdateData(false);
    m_wndPatientNo.SetSel(0, 8);
    GetDataToScreen();
    //	m_wndRoomList.SetFocus();
    if (m_nPatientNo == 0)
    {
        m_wndPatientNo.SetToolTipMessage(_T("Patient Not Found"));
        return -1;
    }
    return 1;
}
/*int CHMSRegistration::OnDocumentNoChange(){
    return 0;
} */
/*int CHMSRegistration::OnDocumentNoSetfocus(){
    return 0;
} */
/*int CHMSRegistration::OnDocumentNoKillfocus(){
    return 0;
} */
int CHMSRegistration::OnDocumentNoCheckValue()
{
    if (GetMode() != VM_VIEW && GetMode() != VM_NONE)
        return -1;
    if (m_wndDocumentNo.GetWindowTextLength() < 7)
        return 0;
    UpdateData(true);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);

    CString tmpStr, szDate, szSQL, m_szTreatStatus, m_szTreatDept;

    szSQL.Format(_T("SELECT htr_status as status, htr_deptid as dept FROM ")
                 _T("HMS_TREATMENT_RECORD WHERE htr_docno=%ld and ")
                 _T("HTR_DEPTID='TTDTHM' order by htr_idx"),
                 m_nDocumentNo);
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("status"), m_szTreatStatus);
    rs.GetValue(_T("dept"), m_szTreatDept);

    if (m_szTreatStatus == _T("I") || m_szTreatStatus == _T("A"))
    {
        ShowMessageBox(_T("Bệnh nhân đang điều trị trong khoa điều trị hiếm ")
                       _T("muộn, hãy tạo phiếu khám mới"),
                       0);
    }

    if (m_szTreatStatus == _T("T"))
    {
        ShowMessageBox(
            _T("Bệnh nhân đã kết thúc đợt điều trị lần trước tại trung tâm ")
            _T("điều trị hiếm muộn, hãy vào khoa và tạo lượt điều trị kế tiếp"),
            0);
    }

    tmpStr.Format(_T("%ld"), m_nDocumentNo);

    if (tmpStr.GetLength() < 7)
    {
        szDate = pMF->GetSysDate();
        tmpStr.Format(_T("%d%.7ld"), ToInt(szDate.Mid(2, 2)), m_nDocumentNo);
        m_nDocumentNo = ToLong(tmpStr);
    }
    m_nPatientNo = 0;
    UpdateData(false);
    m_wndDocumentNo.SetSel(0, 8);
    GetDataToScreen();
    if (m_nDocumentNo == 0)
    {
        m_wndDocumentNo.SetToolTipMessage(_T("Patient Not Found"));
        return -1;
    }
    return 1;
}
int CHMSRegistration::OnCardNoFindChange()
{
    // CListCtrl *wndList = new CListCtrl();
    // 450, 30, 685, 55

    /*if (!m_wndList->IsWindowVisible())
    {
        m_wndList->Create(WS_CHILD|WS_VISIBLE|WS_BORDER|LVS_REPORT, CRect(450,
    55, 685, 215), this, 0x285);

        CString szTemp;
        TranslateString(_T("ID"), szTemp);
        m_wndList->InsertColumn(0, szTemp, LVCFMT_LEFT, 50);
        TranslateString(_T("Name"), szTemp);
        m_wndList->InsertColumn(1, szTemp, LVCFMT_LEFT, 250);
    }

    UpdateData(TRUE);
    if (m_szCardNoFind.IsEmpty())
    {
        if (m_wndList->IsWindowVisible())
        {
            m_wndList->DestroyWindow();
        }
    }*/
    return 0;
}
/*int CHMSRegistration::OnCardNoFindSetfocus(){
    return 0;
} */
/*int CHMSRegistration::OnCardNoFindKillfocus(){
    return 0;
} */
/*
-Hàm:OnCardNoFindCheckValue
-Tình huống sử dụng: Nhập thông tin số thẻ /
    quét qrcode thẻ bảo hiểm, cccd
-Hoạt động:
 +Thành phần:
  .nsd
  .ct
  .csdl
 +Các bước:
  .nsd nhập thông tin vào ô check thẻ trên ct
  .reset ô dữ liệu
    ct reset các thông tin (nếu số ký tự thẻ >= 10
        ,nếu ko, tiếp tục)
  .phân tích chuỗi
    ct phân tích chuỗi, đẩy thông tin vào biên,
    (nếu chuỗi có số phần tử dữ liệu >= 10,
        nếu không, reset biến cấu trúc thẻ)
  .ct đọc csdl
    _lấy ra các tt thanh toán thẻ
    _lấy ra tt bn (nếu có)
        nếu ko có bn trong csdl, gán các tt mới phân tích
        và gọi dialog nhập thẻ
  .cập nhật mới tt
    ct cập nhật lại các tt từ dialog thẻ, (nếu có thao tác
    xác nhận từ nsd)
*/
int CHMSRegistration::OnCardNoFindCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CRecord rss(&pMF->m_db);
    CString szSQL;
    CString szData, szCardInfo, szCardFormat, szCondition, szCode, szObjectID;
    CString szPatientName;
    CString szBirthDate;
    CString szSex;
    szPatientName.Empty();
    szBirthDate.Empty();
    szSex.Empty();

    if (m_szCardNoFind.GetLength() >= 10)
    {
        m_bTransfer = FALSE;
        m_nError = 0;

        m_bOver5years = FALSE;
        m_bHasFeePaper = FALSE;
        m_szDateDiscountAll.Empty();
        m_szDateOver5year.Empty();

        m_szCurCardNo.Empty();
        m_szPatientName.Empty();
        m_szAge.Empty();
        m_szBirthDate.Empty();
        m_szSexKey = _T("M");
        m_szEthnicKey = _T("1");
        m_szIDNo.Empty();

        m_szWorkingPlace.Empty();
        m_szWorkingPlaceID.Empty();
        m_szOccupationKey.Empty();
        m_szAddressKey.Empty();
        m_szProvillKey.Empty();
        m_szDistrictKey.Empty();
        m_szVillageKey.Empty();
        m_szDetailAddress.Empty();

        m_szRelationKey.Empty();
        m_szRelative.Empty();
        m_szPhone.Empty();
        m_szContactAddress.Empty();
        m_szWorkingPlaceKey.Empty();
        m_bAllowAddCard = true;
        m_nAmountDeposit = 0;
        m_szNationality = _T("000");
        m_bForeigner = FALSE;
        m_IsInsExpired = false;
        m_szWorkingPlace.Empty();
        m_szOffLine.Empty();
        m_szBirthDate.Empty();

        m_wndForeignerDesc.SetWindowText(_T(""));

        m_szNationalityDesc.Empty();

        m_szCardNo.Empty();
        m_szPatientStateKey = _T("A");
        m_szHospitalKey.Empty();

        m_szExamDate.Empty();

        m_sCardInfo.code.Empty();
        m_sCardInfo.company.Empty();
        m_sCardInfo.discount = 0;
        m_sCardInfo.expdate.Empty();
        m_sCardInfo.groupid = 0;
        m_sCardInfo.hospitalid.Empty();
        m_sCardInfo.regdate.Empty();
        m_sCardInfo.regplacecde.Empty();
        m_sCardInfo.xCardno.Empty();
        m_sCardInfo.xobject.Empty();
        m_sCardInfo.xIssueDate.Empty();
        m_sCardInfo.xIssuePlace.Empty();
        m_sCardInfo.szArea.Empty();
        m_sCardInfo.bxHema = false;

        m_arWorkPlaces.RemoveAll();
        UpdateData(false);
    }

    int nDiscount = 0;
    int nGroupID;
    int nRet;
    UpdateData(true);
    nRet = ProcessIdCardQrInput(m_szCardNoFind);
    if (nRet > 0 || nRet < 0)
    {
        return nRet;
    }
    // Kiem tra tinh hop le cua the.

    szCode = m_szCardNoFind.Left(3);

    if (szCode == _T("HT5") || szCode == _T("HT9") || szCode == _T("QN9") ||
        szCode == _T("GD7"))
    {
        ShowMessageBox(_T("Cảnh báo BHXH đã ngừng sử dụng thẻ này. Yêu cầu ")
                       _T("bệnh nhân cấp thẻ này"));
    }

    CStringArray arInfo;
    bool bParse = ParseInsuranceCardInfo(m_szCardNoFind, arInfo);

    szCardInfo = m_szCardNoFind;
    if (m_szCardNoFind.GetLength() > 20)
        m_bUseBarcode = TRUE;
    else
        m_bUseBarcode = FALSE;
    if (arInfo.GetCount() >= 10)
    {
        m_sCardInfo.xCardno = arInfo[0];
        szPatientName = arInfo[1];
        szBirthDate = arInfo[2];
        CDate dte;
        if (szBirthDate.GetLength() > 4)
        {
            if (dte.ParseDate(szBirthDate, 2))
                m_sCardInfo.szDateOfBirth.Format(_T("%.2d/%.2d/%.4d"),
                                                 dte.GetDay(), dte.GetMonth(),
                                                 dte.GetYear());
            else if (dte.ParseDate(szBirthDate, 1))
                m_sCardInfo.szDateOfBirth.Format(_T("%.2d/%.2d/%.4d"),
                                                 dte.GetDay(), dte.GetMonth(),
                                                 dte.GetYear());
        }
        else
        {
            m_sCardInfo.szDateOfBirth.Format(_T("01/01/%s"), szBirthDate);
        }
        szBirthDate = m_sCardInfo.szDateOfBirth;
        m_sCardInfo.szDateOfBirth =
            CDate::Convert(szBirthDate, ddmmyyyy, yyyymmdd);
        // szBirthDate.Replace(_T("/"), _T(""));
        szSex = arInfo[3] == _T("1") ? _T("M") : _T("F");

        m_sCardInfo.company = arInfo[4];

        m_sCardInfo.regplacecde = arInfo[5];
        m_sCardInfo.regdate = CDate::Convert(arInfo[6], ddmmyyyy, yyyymmdd);
        m_sCardInfo.expdate = CDate::Convert(arInfo[7], ddmmyyyy, yyyymmdd);
        // m_sCardInfo.sz5YearDate = CDate::Convert(arInfo[12], ddmmyyyy,
        // yyyymmdd);

        if (m_sCardInfo.xCardno.GetLength() >= 15)
        {
            m_sCardInfo.xCardno = m_sCardInfo.xCardno.Left(15);
            m_szCardNoFind.Format(_T("%s%s"), m_sCardInfo.xCardno,
                                  m_sCardInfo.regplacecde);
        }
        else
            m_szCardNoFind.Format(_T("%s"), m_sCardInfo.xCardno);
        m_szThe10so = m_szCardNoFind;
    }
    else
    {
        m_sCardInfo.szDateOfBirth.Empty();
        m_sCardInfo.regplacecde.Empty();
        m_sCardInfo.company.Empty();
        m_sCardInfo.regdate.Empty();
        m_sCardInfo.expdate.Empty();
    }

    _tprintf(_T("\r\n%s"), m_szCardNoFind);

    if (pMF->ParseCard(_T(""), m_szCardNoFind, szCode, nDiscount, nGroupID) < 0)
    {
        m_wndCardNoFind.SetToolTipMessage(_T("Invalid Card Number"));

        return -1;
    }
    m_szCardNoFind.MakeUpper();
    szSQL.Format(_T("SELECT hc_idx FROM hms_card WHERE hc_cardno='%s' and ")
                 _T("hc_active='Y' "),
                 m_szCardNoFind);
    rs.ExecSQL(szSQL);
    if (rs.GetRecordCount() >= 1)
    {
        int nIndex;
        rs.GetValue(_T("hc_idx"), nIndex);

        szSQL.Format(_T("SELECT max(hd_docno) as docno FROM hms_doc WHERE ")
                     _T("hd_cardno='%s'"),
                     m_szCardNoFind);
        rss.ExecSQL(szSQL);
        if (!rss.IsEOF())
        {
            rss.GetValue(_T("docno"), m_nDocumentNo);
            if (m_nDocumentNo <= 0)
            {
                szSQL.Format(_T("DELETE FROM hms_card WHERE hc_cardno='%s' "),
                             m_szCardNoFind);
                pMF->ExecSQL(szSQL);
            }

            GetDataToScreen();

            return 0;
        }
    }
    else
    {

        m_nPatientNo = m_nDocumentNo = 0;
        pMF->m_nDocumentNo = 0;
        pMF->m_nPatientNo = 0;
        UpdateData(false);

        CHMSCardViewDialog dlg(this, VM_ADD, true);
        dlg.m_szCardNo = m_szCardNoFind;
        dlg.m_nIndex = m_nCardIdx;
        dlg.m_szObjectType = szCode;
        dlg.m_szCompany = m_sCardInfo.company;
        m_szPatientName = szPatientName;
        dlg.m_szPatientName = m_szPatientName;
        dlg.m_szRegistrationDate = m_sCardInfo.regdate;
        dlg.m_szExpiryDate = m_sCardInfo.expdate;
        dlg.m_szRegistrationPlaceKey = m_sCardInfo.regplacecde;
        dlg.m_szBirthDate = m_sCardInfo.szDateOfBirth;
        dlg.m_szSexKey = szSex;
        dlg.m_bUseBarcode = m_bUseBarcode;
        dlg.m_szThe10so = m_szThe10so;

        if (dlg.DoModal() == IDOK)
        {
            OnAddNewSelect();
            UpdateData(true);
            if (!szPatientName.IsEmpty())
            {
                m_szPatientName = szPatientName;
                m_szBirthDate = CDate::Convert(szBirthDate, ddmmyyyy, yyyymmdd);
                CString tmpStr;
                tmpStr = szBirthDate;
                tmpStr.Replace(_T("/"), _T(""));
                m_szAge = tmpStr;
                m_szSexKey = szSex;
            }
            /*Ko có th thực tế*/
            /*
            else
            {
                m_szPatientName = dlg.m_szPatientName;
                m_szBirthDate = dlg.m_szBirthDate;
                m_szSexKey = dlg.m_szSexKey;
                m_szAge = CDate::Convert(m_szBirthDate, yyyymmdd, ddmmyyyy);
                m_szAge.Replace(_T("/"), _T(""));
            }
            */
            m_sCardInfo.regdate = dlg.m_szRegistrationDate;
            m_sCardInfo.expdate = dlg.m_szExpiryDate;

            m_sCardInfo.regplacecde = dlg.m_szRegistrationPlaceKey;
            m_sCardInfo.discount = dlg.m_nDiscount;
            m_sCardInfo.groupid = dlg.m_nGroupID;
            m_sCardInfo.code = dlg.m_szCode;
            m_szCardNo = dlg.m_szCardNo;
            m_szCurCardNo = m_szCardNo;
            m_sCardInfo.company = dlg.m_szCompany;
            if (!dlg.m_szCompany.IsEmpty())
                m_szWorkingPlace = dlg.m_szCompany;
            m_nDisrate = dlg.m_nDiscount;
            m_szOffLine = dlg.m_bOffLine ? _T("Y") : _T("N");
            if (m_szOffLine == _T("Y") && pMF->m_nInsOffLinePayment > 0 &&
                m_szEmergency != _T("Y"))
                m_nDisrate = pMF->m_nInsOffLinePayment;
            m_szObjectKey = dlg.m_szObjectKey;
            if (m_szOffLine == _T("Y"))
                m_wndCardNo.SetTextColor(RGB(255, 0, 0));
            else
                m_wndCardNo.SetTextColor(RGB(0, 0, 255));

            m_sCardInfo.xobject = dlg.m_szxObject;
            m_sCardInfo.xCardno = dlg.m_szxCardNo;
            m_sCardInfo.xIssueDate = dlg.m_szxIssueDate;
            m_sCardInfo.xIssuePlace = dlg.m_szxIssuePlace;
            m_sCardInfo.szArea = dlg.m_szAreaKey;

            m_bOver5years = dlg.m_b5Years;
            m_bHasFeePaper = dlg.m_bHasDisCount;
            m_szDateDiscountAll = dlg.m_szDateDisCount;
            m_szDateOver5year = dlg.m_szFromDate;
            m_szDoituong_KCB = dlg.m_szDoituong_kcbKey;
            m_szHospitalKey = dlg.m_szTransHospitalKey;

            UpdateData(false);
            //			SetFocus();
            m_wndExamList.SetFocus();
            m_wndCardNoButton.EnableWindow(false);
            m_bAllowAddCard = false;
            m_wndObject.EnableWindow(FALSE);

            return 0;
        }
        else
        {
            m_szCardNoFind.Empty();
            UpdateData(false);
            // OnCardNoFindCheckValue();
        }
        return -1;
    }

    return -1;
}

int CHMSRegistration::ProcessIdCardQrInput(CString szInfo)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    int nRet = 0, nSize = 0, nCode = 0;
    szInfo.Replace(_T("||"), _T("| |"));
    CStringToken info(szInfo, L"|");
    nSize = info.GetSize();
    _tprintf(_T("\nnSize:%d"), nSize);
    if (nSize < 5 || nSize > 11)
    {
        return nRet;
    }
    CString szCheckQROnline = AfxGetApp()->GetProfileString(
        _T("Settings"), _T("CheckQROnline"), _T(""));
    JSONVALUE jRCard_info, jRes;
    CString szValue, szIdNo, szCardNo;
    info.GetAt(0, szValue);
    jRCard_info["maThe"] = szValue;
    szIdNo = szValue;

    info.GetAt(2, szValue);
    jRCard_info["hoTen"] = szValue;

    info.GetAt(3, szValue);
    jRCard_info["ngaySinh"] = szValue.Right(4);
    jRCard_info.ToString(szValue);
    if (szCheckQROnline != _T("Y"))
    {
        CRMCanCuocCDDlg dlg(this);
        dlg.m_szCCCD = szIdNo;
        dlg.m_szQrInput = szInfo;
        dlg.m_pWndOrder = this;
        if (dlg.DoModal() == IDOK)
        {
            OnAgeCheckValue();
        }
        return 0;
    }
    bool res = m_insCheckin.NhanLichSuKCB2018(szValue, &jRes);
    if (!res)
    {
        ShowMessageBox(_T("Có lỗi xảy ra khi nhận lịch sử khám chữa bệnh"));
        return -1;
    }
    /*Hiện dialog thẻ nếu có tt thẻ*/
    jRes["maKetQua"].GetValue(szValue);
    nCode = str2int(szValue);
    _tprintf(L"\ncode:%d", nCode);
    if (nCode == 0 || nCode == 3 || nCode == 4)
    {
        CRecord rs(&pMF->m_db);
        jRes["maThe"].GetValue(szValue);
        szCardNo = szValue;
        jRes["maDKBD"].GetValue(szValue);
        szCardNo += szValue;
        jRes["dsLichSuKT2018"] = L"";
        jRes.ToString(szValue);
        szSQL.Format(_T("ss_examhist_create('%s')"), szValue);
        pMF->ExecDML(szSQL);
        szSQL.Format(_T("SELECT hd_docno as docno FROM hms_doc ")
                     _T(" WHERE hd_cardno='%s' order by hd_docno desc"),
                     szCardNo);
        rs.ExecSQL(szSQL);
        rs.GetValue(_T("docno"), m_nDocumentNo);
        if (m_nDocumentNo > 0)
        {
            GetDataToScreen();
            return 1;
        }
        else
        {
            CHMSCardViewDialog dlg(this, VM_ADD, false);
            pMF->ApplyInsuranceData(szCardNo, dlg.m_jData);
            dlg.UpdateJson(FALSE);
            if (dlg.DoModal() == IDOK)
            {
                dlg.UpdateJson(TRUE);
                OnAddNewSelect();
                pMF->ApplyInsuranceData(szCardNo, m_jData);
                SetCardInfo(dlg.m_jData, m_sCardInfo);
                m_szIDNo = szIdNo;
                info.GetAt(6, szValue);
                m_szIssueDate.Format(_T("%s/%s/%s"), szValue.Right(4),
                                     szValue.Mid(2, 2), szValue.Left(2));
                UpdateJson(FALSE);
                // m_szAge.Replace(_T("/"), _T(""));
                // UpdateData(FALSE);
                OnAgeCheckValue();
            }
        }
        nRet = 1;
    }
    else
    {
        jRes["ghiChu"].GetValue(szValue);
        MessageBox(szValue, _T("Cổng thông tin BHXH"), MB_ICONEXCLAMATION);
        CRMCanCuocCDDlg dlg(this);
        dlg.m_szCCCD = szIdNo;
        dlg.m_szQrInput = szInfo;
        dlg.m_pWndOrder = this;
        if (dlg.DoModal() == IDOK)
        {
            OnAgeCheckValue();
        }
        nRet = -1;
    }
    return nRet;
}

void CHMSRegistration::SetCardInfo(JSONVALUE &jData, CardInfo &stcCard)
{
    bool bValue;
    jData[_T("Object")].GetValue(m_szObjectKey);
    jData[_T("CardNo")].GetValue(m_szCardNo);
    jData[_T("Sex")].GetValue(m_sCardInfo.szSex);
    jData[_T("Code")].GetValue(m_sCardInfo.code);
    jData[_T("Discount")].GetValue(m_sCardInfo.discount);
    jData[_T("RegistrationDate")].GetValue(m_sCardInfo.regdate);
    jData[_T("ExpiryDate")].GetValue(m_sCardInfo.expdate);
    jData[_T("RegistrationPlace")].GetValue(m_sCardInfo.regplacecde);
    jData[_T("Company")].GetValue(m_sCardInfo.company);
    jData[_T("Area")].GetValue(m_sCardInfo.szArea);
    jData[_T("OffLine")].GetValue(bValue);
    m_szOffLine = bValue ? _T("Y") : _T("N");
    jData[_T("Emergency")].GetValue(bValue);
    m_szEmergency = bValue ? _T("Y") : _T("N");
    jData[_T("Over5Years")].GetValue(bValue);
    m_sCardInfo.szOver5year = bValue ? _T("Y") : _T("N");
}

int CHMSRegistration::OnPatientNameChange()
{
    SetDupWarning(&m_wndPatientName, m_szPatientName);
    return 0;
}
/*int CHMSRegistration::OnPatientNameSetfocus(){
    return 0;
} */
/*int CHMSRegistration::OnPatientNameKillfocus(){
    return 0;
} */
int CHMSRegistration::OnPatientNameCheckValue()
{
    UpdateData(true);
    if (CheckDupPatient() > 0)
    {
    }
    //_msg(_T("%s"), m_szPatientName);
    CString tmpStr;
    StringLower(m_szPatientName, tmpStr);
    InitCap(tmpStr, m_szPatientName);
    UpdateData(FALSE);
    return 0;
}
int CHMSRegistration::OnAgeChange()
{
    SetDupWarning(&m_wndAge, m_szAge);
    return 0;
}
/*int CHMSRegistration::OnAgeSetfocus(){
    return 0;
} */
/*int CHMSRegistration::OnAgeKillfocus(){
    return 0;
} */
int CHMSRegistration::OnAgeCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString tmpStr, szSQL, tmpStr2, szCurrDate;
    int age;
    UpdateData(true);
    CRecord rs(&pMF->m_db);
    CDate dte;
    szCurrDate = pMF->GetSysDate();
    // m_szOccupationKey.Empty();
    if (m_szAge.GetLength() == 8 && IsDigit(m_szAge))
    {
        m_szBirthDate.Format(_T("%s/%s/%s"), m_szAge.Right(4),
                             m_szAge.Mid(2, 2), m_szAge.Left(2));
    }
    else if (m_szAge.GetLength() == 4 && IsDigit(m_szAge))
    {
        dte.ParseDate(szCurrDate);
        m_szBirthDate.Format(_T("%s/01/01"), m_szAge.Right(4));
    }
    else if (m_szAge.GetLength() <= 2 && IsDigit(m_szAge))
    {
        dte.ParseDate(szCurrDate);
        // dte -= (ToInt(m_szAge)*365);
        if (str2int(m_szAge) <= 3)
            m_szBirthDate.Format(_T("%.4d/%.2d/01"),
                                 dte.GetYear() - ToInt(m_szAge),
                                 dte.GetMonth());
        else
            m_szBirthDate.Format(_T("%.4d/01/01"),
                                 dte.GetYear() - ToInt(m_szAge));
    }
    else if (m_szAge.GetLength() <= 3 &&
             IsDigit(m_szAge.Left(m_szAge.GetLength() - 1)))
    {
        dte.ParseDate(szCurrDate);
        if (m_szAge.Right(1) == _T("t"))
        {
            dte -= dte.GetDay();

            int nMonth = ToInt(m_szAge.Left(m_szAge.GetLength() - 1));
            for (int i = 1; i < nMonth; i++)
            {
                dte -= dte.GetMonthLastDay();
            }
            m_szBirthDate.Format(_T("%.4d/%.2d/01"), dte.GetYear(),
                                 dte.GetMonth());
        }
        else if (m_szAge.Right(1) == _T("n"))
        {
            dte -= ToInt(m_szAge.Left(m_szAge.GetLength() - 1));
            m_szBirthDate.Format(_T("%.4d/%.2d/%.2d"), dte.GetYear(),
                                 dte.GetMonth(), dte.GetDay());
        }
        else if (IsDigit(m_szAge))
        {
            m_szBirthDate.Format(_T("%.4d/%.2d/01"),
                                 dte.GetYear() - ToInt(m_szAge),
                                 dte.GetMonth());
        }
        else
            return -1;
    }

    if (!CDate::IsValid(m_szBirthDate))
    {
        _tprintf(_T("\nInvalid Birthdate"));
        return -1;
    }

    if (CompareDate(m_szBirthDate, m_szExamDate.Left(10)) > 0)
    {
        _tprintf(_T("\nCompareDate"));
        return -1;
    }

    CString szDay, szMonth, szYear, short_day, short_month;
    if (GetLocalLang() == 0)
    {
        szDay = _T("Day");
        szMonth = _T("Month");
        szYear = _T("Age");
        short_day = _T("d");
        short_month = _T("m");
    }
    else
    {
        TranslateString(_T("Day"), szDay);
        TranslateString(_T("Month"), szMonth);
        TranslateString(_T("Age"), szYear);
        short_day = _T("n");
        short_month = _T("t");
    }

    szSQL.Format(_T("hms_getage(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'), ")
                 _T("to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))"),
                 m_szExamDate.Left(10), m_szBirthDate);

    CString res = pMF->ExecDML(szSQL), szNoOccupation = _T("999");
    if (str2int(res) > 150)
    {
        _tprintf(_T("\nhms_getage"));
        return -1;
    }
    m_szAge.Format(_T("%s"), res);
    if (m_szAge.Right(1) == _T("T"))
    {
        m_szOccupationKey = szNoOccupation;
        m_szAge.Replace(_T("T"), szMonth);
    }
    if (m_szAge.Right(1) == _T("N"))
    {
        m_szOccupationKey = szNoOccupation;
        m_szAge.Replace(_T("N"), szDay);
    }
    if (IsDigit(m_szAge))
    {
        m_szAge.AppendFormat(_T(" %s"), szYear);
        if (ToInt(m_szAge.Left(2)) < 6)
            m_szOccupationKey = szNoOccupation;
        else if (ToInt(m_szAge.Left(2)) < 15)
            ;
        // m_szOccupationKey = _T("5");
    }

    UpdateData(false);
    if (CheckDupPatient() > 0)
    {
    }
    return 0;
    CString szShortCut;
    szShortCut.Empty();
    int i = 0;
    for (i = 0; i < m_szAge.GetLength(); i++)
    {
        if (!_istdigit(m_szAge[i]))
            break;
    }
    if (i > 0)
    {
        szShortCut = m_szAge[i];
        age = ToInt(m_szAge.Left(i));
    }
    else
        age = ToInt(m_szAge);

    if (szShortCut == short_day || m_szAge.Find(szDay) != -1)
    {
        szSQL.Format(
            _T("SELECT to_date('%s', 'yyyy/mm/dd hh24:mi:ss')-%ld FROM DUAL"),
            m_szExamDate.Left(10), age);
        rs.ExecSQL(szSQL);
        m_szBirthDate = rs.GetStringValue();
    }
    else if (szShortCut == short_month || m_szAge.Find(szMonth) != -1)
    {

        szSQL.Format(_T("SELECT to_date('%s', 'yyyy/mm/dd hh24:mi:ss')-%ld*29 ")
                     _T("FROM DIAL"),
                     m_szExamDate.Left(10), age);
        rs.ExecSQL(szSQL);
        tmpStr = rs.GetStringValue();
        tmpStr2.Format(_T("%s01"), tmpStr.Left(8));
        m_szBirthDate = tmpStr2;
    }
    else if ((IsDigit(m_szAge) && age < 100) || m_szAge.Find(szYear) != -1)
    {
        szSQL.Format(_T("SELECT to_date('%s', 'yyyy/mm/dd ")
                     _T("hh24:mi:ss')-%ld*365 FROM DUAL"),
                     m_szExamDate.Left(10), age);
        rs.ExecSQL(szSQL);
        tmpStr = rs.GetStringValue();
        tmpStr2.Format(_T("%s/01/01"), tmpStr.Left(4));
        m_szBirthDate = tmpStr2;
        if (age == 0)
        {
            return -1;
        }
    }
    else if ((m_szAge.GetLength() == 4 && IsDigit(m_szAge) && age > 1900 &&
              age < ToInt(szCurrDate.Left(4))) ||
             m_szAge.Find(szYear) != -1)
    {
        m_szBirthDate.Format(_T("%s/01/01"), m_szAge);
    }
    else if (m_szAge.GetLength() == 8 && IsDigit(m_szAge))
    {
        m_szBirthDate.Format(_T("%.4d/%.2d/%.2d"), ToInt(m_szAge.Right(4)),
                             ToInt(m_szAge.Mid(2, 2)), ToInt(m_szAge.Left(2)));
    }
    else
        return -1;

    if (CompareDate(m_szBirthDate, m_szExamDate.Left(10)) > 0)
        return -1;
    szSQL.Format(_T("hms_getage(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'), ")
                 _T("to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))"),
                 m_szExamDate.Left(10), m_szBirthDate);

    tmpStr = pMF->ExecDML(szSQL);
    _tprintf(_T("\ntmpStr: %s"), tmpStr);
    m_szAge.Format(_T("%s"), tmpStr);
    if (m_szAge.Right(1) == _T("T"))
        m_szAge.Replace(_T("T"), szMonth);
    else if (m_szAge.Right(1) == _T("N"))
        m_szAge.Replace(_T("N"), szDay);
    if (IsDigit(m_szAge))
    {
        m_szAge.AppendFormat(_T(" %s"), szYear);
    }

    return 0;
}
/*int CHMSRegistration::OnBirthDateChange(){
    return 0;
} */
/*int CHMSRegistration::OnBirthDateSetfocus(){
    return 0;
} */
/*int CHMSRegistration::OnBirthDateKillfocus(){
    return 0;
} */
int CHMSRegistration::OnBirthDateCheckValue() { return 0; }
int CHMSRegistration::OnSexSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSRegistration::OnSexSelendok() { return 0; }
/*int CHMSRegistration::OnSexSetfocus(){
     return 0;
}*/
/*int CHMSRegistration::OnSexKillfocus(){
     return 0;
}*/
int CHMSRegistration::OnSexLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s' "), m_szSexKey);
    };
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ")
                 _T("ss_id='sys_sex' %s ORDER BY ss_code "),
                 szWhere);
    m_wndSex.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndSex.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*int CHMSRegistration::OnSexAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */
int CHMSRegistration::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSRegistration::OnEthnicSelendok() { return 0; }
/*int CHMSRegistration::OnEthnicSetfocus(){
     return 0;
}*/
/*int CHMSRegistration::OnEthnicKillfocus(){
     return 0;
}*/
int CHMSRegistration::OnEthnicLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndEthnic.IsSearchKey() && !m_szEthnicKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s' "), m_szEthnicKey);
    };
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ")
                 _T("ss_id='sys_ethnic' %s ORDER BY cast(ss_code as integer) "),
                 szWhere);
    m_wndEthnic.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndEthnic.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                             NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*int CHMSRegistration::OnEthnicAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */
int CHMSRegistration::OnOccupationSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSRegistration::OnOccupationSelendok() { return 0; }
/*int CHMSRegistration::OnOccupationSetfocus(){
     return 0;
}*/
/*int CHMSRegistration::OnOccupationKillfocus(){
     return 0;
}*/
int CHMSRegistration::OnOccupationLoadData()
{
    /*CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if(m_wndOccupation.IsSearchKey() && !m_szOccupationKey.IsEmpty()){
        szWhere.Format(_T(" AND ss_code='%s' "), m_szOccupationKey);
    };
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE
    ss_id='sys_occupation' %s ORDER BY cast(ss_code as integer) "),szWhere);

    m_wndOccupation.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    while(!rs.IsEOF()){
        m_wndOccupation.AddItems(
            rs.GetValue(_T("id")),
            rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;*/
    // Thay đổi áp dụng cho TT130
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndOccupation.IsSearchKey() && !m_szOccupationKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s' "), m_szOccupationKey);
    };
    if (GetMode() != VM_VIEW)
    {
        szWhere.AppendFormat(_T(" and ss_isactive ='Y' "));
    }
    szSQL.Format(_T(" SELECT ss_code as id, ss_desc as name ")
                 _T(" FROM sys_sel ")
                 _T(" WHERE ss_id='sys_occupation' %s ")
                 _T(" ORDER BY cast(ss_code as integer) "),
                 szWhere);

    m_wndOccupation.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndOccupation.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                                 NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*int CHMSRegistration::OnOccupationAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */

int CHMSRegistration::OnProvillSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSRegistration::OnProvillSelendok()
{
    CString szOldProvId = m_szProvillKey;
    UpdateData(true);

    // Truong hop dia chi moi bo qua
    if (m_bNewAddress)
    {
        if (m_szProvillKey != szOldProvId)
        {
            m_szDistrictKey.Empty();
            m_szVillageKey.Empty();
            m_wndDistrict.ResetContent();
            m_wndVillage.ResetContent();
        }
        return 0;
    }

    if (m_szProvillKey != m_szDistrictKey.Left(3))
    {
        m_szDistrictKey.Empty();
        m_szVillageKey.Empty();
        m_wndDistrict.ResetContent();
        m_wndVillage.ResetContent();
    }

    return 0;
}
/*int CHMSRegistration::OnProvillSetfocus(){
     return 0;
}*/
int CHMSRegistration::OnProvillKillfocus() { return 0; }

int CHMSRegistration::OnProvillLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // load provill from hmscore
    m_wndProvill.SetSearchEx(true, 2);

    CString szFilter = L"";
    if (m_bNewAddress)
    {
        szFilter = L" and sp_isactive='Y' ";
    }
    else
    {
        szFilter = L" and sp_isactive='N' ";
    }
    szFilter = L" and sp_isactive='Y' ";
    return pMF->LoadProvillList(&m_wndProvill, m_szProvillKey, szFilter);
}
/*int CHMSRegistration::OnProvillAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */

int CHMSRegistration::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    return 0;
}
int CHMSRegistration::OnDistrictSelendok()
{

    // Truong hop dia chi moi bo qua
    if (m_bNewAddress)
    {
        return 0;
    }
    if (m_szDistrictKey != m_szVillageKey.Left(5))
    {
        m_szVillageKey.Empty();
        m_wndVillage.ResetContent();
    }
    return 0;
}
/*int CHMSRegistration::OnDistrictSetfocus(){
     return 0;
}*/

int CHMSRegistration::OnDistrictKillfocus() { return 0; }
int CHMSRegistration::OnDistrictLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // load district from hmscore
    m_wndDistrict.SetSearchEx(true, 2);
    return pMF->LoadDistrictList(&m_wndDistrict, m_szProvillKey,
                                 m_szDistrictKey);
}
/*int CHMSRegistration::OnDistrictAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */

int CHMSRegistration::OnVillageSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    return 0;
}
int CHMSRegistration::OnVillageSelendok() { return 0; }
/*int CHMSRegistration::OnVillageSetfocus(){
     return 0;
}*/
/*int CHMSRegistration::OnVillageKillfocus(){
     return 0;
}*/
int CHMSRegistration::OnVillageLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // load village from hmscore
    m_wndVillage.SetSearchEx(true, 2);
    CString szFilter = L"", szDistKey = m_szDistrictKey;

    if (m_bNewAddress)
    {
        szDistKey.Empty();
        szFilter = L" and sv_isactive='Y' ";
    }
    else
    {
        szFilter = L" and sv_isactive='N' ";
    }

    return pMF->LoadVillageList(&m_wndVillage, m_szProvillKey, szDistKey,
                                m_szVillageKey, szFilter);
}
/*int CHMSRegistration::OnVillageAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */

int CHMSRegistration::OnAddressSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    return 0;
}
int CHMSRegistration::OnAddressSelendok() { return 0; }
/*int CHMSRegistration::OnAddressSetfocus(){
     return 0;
}*/
/*int CHMSRegistration::OnAddressKillfocus(){
     return 0;
}*/
int CHMSRegistration::OnAddressLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return pMF->LoadAddressList(&m_wndAddress, m_szAddressKey);
    m_wndAddress.DeleteAllItems();
    //	m_wndAddress.SetSearcToHext(TRUE);
    int nCount = 0;
    if (m_wndAddress.IsSearchKey() && !m_szAddressKey.IsEmpty())
    {
        CString szSQL;
        szSQL.Format(
            _T("select sv_id as id, sv_name||' - '||sd_name||' - '||sp_name as name, \
					sv_wrd||sd_wrd||sp_wrd as srch \
					from sys_prov left join sys_dist on(sd_provid=sp_id) \
					left join sys_vill on(sv_provid=sd_provid and sv_distid=sd_id) \
					where sv_id=%ld \
					order by sp_name, sd_name, sv_name "),
            ToLong(m_szAddressKey));
        CRecord rs(&pMF->m_db);
        nCount = rs.ExecSQL(szSQL);
        if (nCount > 0)
        {
            m_wndAddress.AddItems(rs.GetValue(_T("srch")),
                                  rs.GetValue(_T("name")),
                                  rs.GetValue(_T("id")), NULL);
        }
        return nCount;
    }
    if (m_wndAddress.GetCount() > 0)
    {
        return 0;
    }
    m_rsAddress->MoveFirst();
    while (!m_rsAddress->IsEOF())
    {
        m_wndAddress.AddItems(m_rsAddress->GetValue(_T("srch")),
                              m_rsAddress->GetValue(_T("name")),
                              m_rsAddress->GetValue(_T("id")), NULL);
        m_rsAddress->MoveNext();
    }
    return nCount;
}
/*int CHMSRegistration::OnAddressAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    return 0;
} */
/*int CHMSRegistration::OnDetailAddressKillfocus(){
    return 0;
} */
int CHMSRegistration::OnDetailAddressCheckValue() { return 0; }
/*void CHMSRegistration::OnIDNoChange(){

} */
/*void CHMSRegistration::OnIDNoSetfocus(){

} */
/*void CHMSRegistration::OnIDNoKillfocus(){

} */

// int CHMSRegistration::OnWorkingPlaceSelectChange(int nOldItemSel, int
// nNewItemSel)
//{
//	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	return 0;
// }
int CHMSRegistration::OnWorkingPlaceSelendok() { return 0; }
// int CHMSRegistration::OnWorkingPlaceLoadData()
//{
//	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	CRecord rs(&pMF->m_db);
//	CString szSQL, szWhere;
//	szWhere.Empty();
//
//	if(m_wndWorkingPlace.IsSearchKey() && ToLong(m_szWorkingPlaceKey) > 0)
//	{
//		szWhere.Format(_T(" AND hwp_idx=%ld "), ToLong(m_szWorkingPlaceKey));
//	}
//
//	m_wndWorkingPlace.DeleteAllItems();
//	int nCount = 0;
//
//	szSQL.Format(_T("SELECT hwp_idx as ID, hwp_name as Name ")\
//				_T("FROM hms_workplace WHERE length(trim(hwp_name)) > 0 %s ORDER
//BY ID"), szWhere);
//
//	//_msg(_T("%s"), szSQL);
//
//	nCount = rs.ExecSQL(szSQL);
//	while (!rs.IsEOF())
//	{
//		m_wndWorkingPlace.AddItems(
//			rs.GetValue(_T("ID")),
//			rs.GetValue(_T("Name")),
//			NULL);
//		rs.MoveNext();
//	}
//
//	return nCount;
//	//return 0;
// }
/*int CHMSRegistration::OnWorkingPlaceAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */
int CHMSRegistration::OnWorkingPlaceChange() { return 0; }
int CHMSRegistration::OnWorkingPlaceSetfocus() { return 0; }
int CHMSRegistration::OnWorkingPlaceKillfocus() { return 0; }
int CHMSRegistration::OnWorkingPlaceCheckValue()
{
    if (!m_szWorkingPlaceKey.IsEmpty())
    {
        UpdateData(TRUE);
        CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
        CRecord rs(&pMF->m_db);
        CString szSQL;
        szSQL.Format(_T("SELECT Count(*) FROM hms_workplace WHERE ")
                     _T("trim(hwp_name)=trim('%s')"),
                     m_szWorkingPlace);
        rs.ExecSQL(szSQL);

        if (rs.GetIntValue() < 1)
        {
            m_szWorkingPlaceKey.Empty();
        }
    }
    return 0;
}
void CHMSRegistration::OnWorkPlaceButtonSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (GetMode() == VM_VIEW || GetMode() == VM_NONE)
        return;
    UpdateData(TRUE);
    CHMSWorkingPlaceInfoDialog dlg(this);
    CRecord rs(&pMF->m_db);
    CString szSQL;
    CString tmpStr;
    if (ToLong(m_szWorkingPlaceKey) > 0)
        dlg.m_nID = ToLong(m_szWorkingPlaceKey);
    // dlg.m_szName = m_szWorkingPlace;
    if (dlg.DoModal() == IDOK)
    {
        m_szWorkingPlace = dlg.m_szName;
        tmpStr.Format(_T("%ld"), dlg.m_nID);
        m_szWorkingPlaceKey = tmpStr;
        m_wndWorkingPlace.SetWindowText(m_szWorkingPlace);
    }

    /*szSQL.Format(_T("SELECT trim(hwp_name) as name FROM hms_workplace ORDER BY
    hwp_idx")); rs.ExecSQL(szSQL);

    m_wndWorkingPlace.Learn(true);
    m_wndWorkingPlace.ResetDictionary();

    while(!rs.IsEOF())
    {
        m_wndWorkingPlace.AddKeyword(rs.GetValue(_T("name")));
        rs.MoveNext();
    }*/
}

int CHMSRegistration::OnRankSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSRegistration::OnRankSelendok() { return 0; }
/*int CHMSRegistration::OnRankSetfocus(){
     return 0;
}*/
int CHMSRegistration::OnRankKillfocus() { return 0; }

long CHMSRegistration::OnArmObjectLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndArmObject.IsSearchKey() && !m_szArmObjectKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s' "), m_szArmObjectKey);
    }
    m_wndArmObject.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ")
                 _T("ss_id='hms_armobject' %s ORDER BY cast(ss_code as int) "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndArmObject.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                                NULL);
        rs.MoveNext();
    }
    return nCount;
    return 0;
}

int CHMSRegistration::OnRankLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s' "), m_szRankKey);
    }
    m_wndRank.DeleteAllItems();
    int nCount = 0;

    //	szWhere.AppendFormat(_T(" and cast(ss_code as integer) < 100 "));

    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ")
                 _T("ss_id='hms_rank' %s ORDER BY cast(ss_code as int) "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndRank.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                           NULL);
        rs.MoveNext();
    }
    return nCount;
    return 0;
}

int CHMSRegistration::OnWorkingPlaceEXLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndWorkingPlaceEX.IsSearchKey() && !m_szWorkingPlaceEXKey.IsEmpty())
    {
        szWhere.Format(_T(" AND VC_ADDRESS_CODE='%s' "), m_szWorkingPlaceEXKey);
    }
    m_wndWorkingPlaceEX.DeleteAllItems();
    int nCount = 0;

    //	szWhere.AppendFormat(_T(" and cast(ss_code as integer) < 100 "));

    szSQL.Format(_T("SELECT VC_ADDRESS_CODE AS ID, VC_ADDRESS_NAME AS Name ")
                 _T("FROM M_VACCINE_ADDRESS WHERE VC_ADDRESS_ISACTIVE = 'Y' ")
                 _T("%s ORDER BY VC_ADDRESS_CODE "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndWorkingPlaceEX.AddItems(rs.GetValue(_T("id")),
                                     rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
    return 0;
}

/*int CHMSRegistration::OnRankAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */
int CHMSRegistration::OnWorkingPlaceEXSelendok()
{
    // ShowMessageBox(_T("Sẽ cho chọn khoa nếu đơn vị thuộc 108 ở đây!"));
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szIs108Hospital = m_wndWorkingPlaceEX.GetCurrent(0);

    // if(pMF->m_szDept == _T("AB") && szIs108Hospital == _T("BV108"))
    if (szIs108Hospital == _T("BV108"))
    {
        CHMSWorkPlace108StaffDlg dlg(this);

        if (GetMode() == VM_ADDPAT)
        {
            dlg.m_nDocumentNo = 0;
            dlg.m_szDepartmentKey.Empty();
            dlg.m_szNote.Empty();
        }
        else
        {
            dlg.m_nDocumentNo = m_nDocumentNo;
        }
        if (dlg.DoModal() == IDOK)
        {

            m_szKhoa = dlg.m_szDepartmentKey;
            m_szNote108Staff = dlg.m_szNote;
            // m_szWorkingPlaceEXKey.Format(_T("%s [%s]"),
            // m_szWorkingPlaceEXKey, dlg.m_szDepartmentKey);
        }
        m_wndRoom.SetFocus();
    }

    m_wndPhone.SetFocus();

    return 0;
}

int CHMSRegistration::OnPositionSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSRegistration::OnPositionSelendok() { return 0; }
/*int CHMSRegistration::OnPositionSetfocus(){
     return 0;
}*/
/*int CHMSRegistration::OnPositionKillfocus(){
     return 0;
}*/
int CHMSRegistration::OnPositionLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();

#ifndef HOSPITAL_108
    if (m_wndPosition.IsSearchKey() && !m_szRelationKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s'"), m_szRelationKey);
    }
    m_wndPosition.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(
        _T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ")
        _T("ss_id='hrm_relation' %s ORDER BY cast(ss_code as integer) "),
        szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndPosition.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                               NULL);
        rs.MoveNext();
    }
#else
    if (m_wndPosition.IsSearchKey() && !m_szPositionKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s'"), m_szPositionKey);
    }
    m_wndPosition.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(
        _T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ")
        _T("ss_id='hms_position' %s ORDER BY cast(ss_code as integer) "),
        szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndPosition.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                               NULL);
        rs.MoveNext();
    }
#endif
    return nCount;
}
/*int CHMSRegistration::OnPositionAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */

int CHMSRegistration::OnPhoneChange()
{
    SetDupWarning(&m_wndPhone, m_szPhone);
    return 0;
}
/*int CHMSRegistration::OnPhoneSetfocus(){
    return 0;
} */
/*int CHMSRegistration::OnPhoneKillfocus(){
    return 0;
} */
int CHMSRegistration::OnPhoneCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    UpdateData();

    if (!isValidPhoneNumber(m_szPhone))
    {
        m_wndPhone.SetToolTipMessage(_T("Số điện thoại không đúng, phải là ")
                                     _T("chữ số[0->9). Và độ dài 10 ký tự"));
        return -1;
    }

    if (CheckDupPatient() > 0)
    {
    }
    m_szPhone.Trim();

    if (m_szPhone.IsEmpty())
        return -1;

    return 0;
}

int CHMSRegistration::OnPhone2CheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    UpdateData();

    if (!isValidPhoneNumber(m_szPhone2))
    {
        m_wndPhone2.SetToolTipMessage(_T("Số điện thoại không đúng, phải là ")
                                      _T("chữ số[0->9). Và độ dài 10 ký tự"));
        return -1;
    }

    if (CheckDupPatient() > 0)
    {
    }
    m_szPhone2.Trim();

    if (m_szPhone2.IsEmpty())
        return -1;

    return 0;
}

int CHMSRegistration::OnIDNoCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    UpdateData();

    if (!isValidIdCardNumber(m_szIDNo) && !m_szCardNo.IsEmpty())
    {
        m_wndIDNo.SetToolTipMessage(
            _T("Số CCCD không đúng, phải là chữ số[0->9). Và độ dài 12 ký tự"));
        return -1;
    }

    if (CheckDupPatient() > 0)
    {
    }
    return 0;
}

int CHMSRegistration::OnObjectSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szCardFormat, szHasCard;
    szHasCard = m_wndObject.GetCurrent(2);
    UpdateData(true);
    if (szHasCard == _T("Y"))
    {
        m_bAllowAddCard = true;
        //	m_wndCardNoButton.EnableWindow(true);
    }
    else
        m_szCardNo.Empty();
    if (m_szObjectKey == _T("7") || m_szObjectKey == _T("8"))
    {
        m_wndProvill.SetCheckValue(false);
    }
    else
    {
        m_wndProvill.SetCheckValue(true);
    }

    return 0;
}
int CHMSRegistration::OnObjectSelendok()
{
    int nMode = GetMode();
    if (nMode != VM_ADDPAT && nMode != VM_ADDDOC && nMode != VM_EDIT)
        return 0;

    UpdateData(true);

    CString tmpStr, szHasCard;
    tmpStr = m_wndObject.GetCurrent(2);
    szHasCard = m_wndObject.GetCurrent(2);

    if (tmpStr != _T("Y"))
    {
        m_szCardNo.Empty();
        m_nCardIdx = 0;
        m_nDisrate = ToInt(m_wndObject.GetCurrent(4));
        m_szOffLine = _T("N");
        m_wndCardNoButton.EnableWindow(FALSE);
    }
    else
    {
        if (GetMode() == VM_EDIT)
        {
            if (m_szCardNo.IsEmpty())
            {
                CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
                CString szSQL;
                CRecord rs(&pMF->m_db);
                szSQL.Format(_T("SELECT hc_cardno, MAX(hc_idx) as hc_idx FROM ")
                             _T("hms_card WHERE hc_patientno=%ld and ")
                             _T("hc_active='Y' GROUP BY hc_cardno "),
                             m_nPatientNo);
                rs.ExecSQL(szSQL);
                if (!rs.IsEOF())
                {
                    rs.GetValue(_T("hc_cardno"), m_szCardNo);
                    rs.GetValue(_T("hc_idx"), m_nCardIdx);
                }
            }
        }
        m_wndCardNoButton.EnableWindow(TRUE);
    }

    // Kiem tran neu la doi tuong QUAN = 1 thi bat buoc phai nhap noi lam viec
    if (m_wndObject.GetCurrent(0) == _T("1"))
    {
        if (m_szWorkingPlace.IsEmpty())
        {
            m_wndWorkingPlace.SetCheckValue(true);
            m_wndWorkingPlace.SetFocus();
            UpdateData(FALSE);
            return -1;
        }
    }
    else
        m_wndWorkingPlace.SetCheckValue(false);
    if (m_szObjectKey == _T("7") || m_szObjectKey == _T("8"))
    {
        m_wndProvill.SetCheckValue(false);
    }
    else
    {
        m_wndProvill.SetCheckValue(true);
    }

    if (szHasCard == _T("Y"))
    {
        m_wndProvill.SetCheckValue(true);
        // m_wndDistrict.SetCheckValue(true);
        //m_wndVillage.SetCheckValue(true);
    }

    UpdateData(FALSE);

    return 0;
}
int CHMSRegistration::OnObjectSetfocus() { return 0; }
int CHMSRegistration::OnObjectKillfocus() { return 0; }
int CHMSRegistration::OnObjectLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();

    if (m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ho_id='%s' "), m_szObjectKey);
    };
    if (!pMF->m_UserInfo.su_hms_xobject.IsEmpty())
        szWhere.AppendFormat(_T(" AND ho_id in(%s) "),
                             pMF->m_UserInfo.su_hms_xobject);

    szSQL.Format(_T("SELECT * FROM hms_object WHERE ho_active='Y' %s ORDER BY ")
                 _T("cast(ho_id as integer)"),
                 szWhere);
    m_wndObject.DeleteAllItems();
    int nCount = 0;
    CString szDesc;
    nCount = rs.ExecSQL(szSQL);

    while (!rs.IsEOF())
    {
        rs.GetValue(_T("ho_desc"), szDesc);
        m_wndObject.AddItems(
            rs.GetValue(_T("ho_id")), szDesc, rs.GetValue(_T("ho_hascard")),
            rs.GetValue(_T("ho_type")), rs.GetValue(_T("ho_discount")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*int CHMSRegistration::OnObjectAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */
/*int CHMSRegistration::OnCardNoChange(){
    return 0;
} */
/*int CHMSRegistration::OnCardNoSetfocus(){
    return 0;
} */
/*int CHMSRegistration::OnCardNoKillfocus(){
    return 0;
} */

int CHMSRegistration::OnCardNoCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    int nGroupID;
    int nRet = pMF->ParseCard(m_szObjectKey, m_szCardNo, m_sCardInfo.code,
                              m_sCardInfo.discount, nGroupID);
    if (nRet < 0)
    {
        m_wndCardNo.SetToolTipMessage(_T("Invalid Card Number"));
        return -1;
    }

    CRecord rs(&pMF->m_db);

    CString szSQL;
    szSQL.Format(
        _T("SELECT * FROM hms_card WHERE upper(hc_cardno)=upper('%s') "),
        m_szCardNo);

    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        long nPatientNo;
        rs.GetValue(_T("hc_patientno"), nPatientNo);

        if (nPatientNo != m_nPatientNo)
        {
            CString szMsg, tmpStr;
            TranslateString(_T("This card is using by other patient.[%ld]"),
                            tmpStr);
            szMsg.Format(tmpStr, nPatientNo);
            m_wndCardNo.SetToolTipMessage(szMsg);
            return -1;
        }
    }

    UpdateData(false);
    return 0;
}

int CHMSRegistration::OnPatientNoteCheckValue() { return 0; }

int CHMSRegistration::OnCardNoButtonSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr;
    UpdateData(true);
    CString szCardFormat, szHasCard;
    m_szObjectKey = m_wndObject.GetCurrent(0);
    szHasCard = m_wndObject.GetCurrent(2);

    if (szHasCard == _T("Y"))
    {
        int nMode = VM_VIEW;
        if (GetMode() == VM_EDIT || GetMode() == VM_ADDDOC)
        {
            if (m_nPatientNo > 0)
                nMode = VM_EDIT;
            else
                nMode = VM_ADD;

            if (GetMode() == VM_ADDDOC)
                nMode = VM_ADD;
        }

        CHMSCardViewDialog dlg(this, nMode, false);
        dlg.m_szPatientName = m_szPatientName;
        dlg.m_szObject = m_wndObject.GetCurrent(3);
        dlg.m_szCardNo = m_szCardNo;
        dlg.m_nIndex = m_nCardIdx;
        dlg.m_szExpiryDate = m_sCardInfo.expdate;
        dlg.m_szRegistrationDate = m_sCardInfo.regdate;
        dlg.m_szRegistrationPlaceKey = m_sCardInfo.regplacecde;
        dlg.m_szCode = m_sCardInfo.code;
        dlg.m_nDiscount = m_sCardInfo.discount;
        dlg.m_szCompany = m_sCardInfo.company;
        dlg.m_nGroupID = m_sCardInfo.groupid;
        dlg.m_szObjectKey = m_wndObject.GetCurrent(0);
        dlg.m_szWorkPlace = m_szWorkingPlace;
        dlg.m_szObjectType = m_wndObject.GetCurrent(3);
        dlg.m_szSexKey = m_szSexKey;
        dlg.m_szBirthDate = m_szBirthDate;
        dlg.m_szInputObject = m_szObjectKey;
        dlg.m_szInputPatientName = m_szPatientName;
        dlg.m_szInputBirthDate = m_szBirthDate;
        //	OnCardNoCheckValue();

        if (m_nPatientNo > 0)
        {
            dlg.m_nPatientNo = m_nPatientNo;
            dlg.m_nIndex = m_nCardIdx;
        }
        else
        {
            dlg.m_nPatientNo = 0;
            dlg.m_nIndex = 0;
        }

        if (!m_szCardNo.IsEmpty())
        {
            szSQL.Format(_T("SELECT hd_insline,hd_disrate, hd_emergency FROM ")
                         _T("hms_doc WHERE hd_docno=%ld and hd_cardno='%s'"),
                         m_nDocumentNo, m_szCardNo);

            rs.ExecSQL(szSQL);
            if (!rs.IsEOF())
            {
                rs.GetValue(_T("hd_insline"), m_szOffLine);
                rs.GetValue(_T("hd_disrate"), m_nDisrate);
                rs.GetValue(_T("hd_emergency"), tmpStr);
                dlg.m_nDiscount = m_nDisrate;
                dlg.m_nDisrate = m_nDisrate;
                if (tmpStr == _T("Y"))
                    dlg.m_bEmergency = TRUE;
                else
                    dlg.m_bEmergency = FALSE;
            }
        }

        if (m_szOffLine == _T("Y"))
        {
            dlg.m_bOffLine = TRUE;
            dlg.m_nDisrate = m_nDisrate;
        }
        else
            dlg.m_bOffLine = FALSE;

        if (dlg.DoModal() == IDOK)
        {
            m_sCardInfo.regdate = dlg.m_szRegistrationDate;
            m_sCardInfo.expdate = dlg.m_szExpiryDate;

            //_msg(_T("%s"), m_sCardInfo.expdate);

            m_sCardInfo.regplacecde = dlg.m_szRegistrationPlaceKey;
            m_sCardInfo.discount = dlg.m_nDiscount;
            m_sCardInfo.code = dlg.m_szCode;
            m_sCardInfo.groupid = dlg.m_nGroupID;
            m_szCardNo = dlg.m_szCardNo;
            m_szCurCardNo = m_szCardNo;
            m_sCardInfo.company = dlg.m_szCompany;
            if (!dlg.m_szCompany.IsEmpty())
                m_szWorkingPlace = dlg.m_szCompany;
            m_nDisrate = dlg.m_nDiscount;
            m_szOffLine = dlg.m_bOffLine ? _T("Y") : _T("N");
            if (m_szOffLine == _T("Y") && pMF->m_nInsOffLinePayment > 0)
                m_nDisrate = pMF->m_nInsOffLinePayment;
            m_szEmergency = _T("N");

            /*if (dlg.m_bEmergency)
            {
                m_nDisrate = dlg.m_nDiscount;
                m_szEmergency = _T("Y");
            }*/

            m_bOver5years = dlg.m_b5Years;
            m_bHasFeePaper = dlg.m_bHasDisCount;
            m_szDateOver5year = dlg.m_szFromDate;
            m_szDoituong_KCB = dlg.m_szDoituong_kcbKey;

            if (m_bHasFeePaper)
            {

                m_szDateDiscountAll = dlg.m_szDateDisCount;
            }
            else
            {
                m_szDateDiscountAll.Empty();
            }
            m_szEmergency = dlg.m_bEmergency ? _T("Y") : _T("N");

            m_sCardInfo.xobject = dlg.m_szxObject;
            m_sCardInfo.xCardno = dlg.m_szxCardNo;
            m_sCardInfo.xIssueDate = dlg.m_szxIssueDate;
            m_sCardInfo.xIssuePlace = dlg.m_szxIssuePlace;
            m_sCardInfo.szArea = dlg.m_szAreaKey;
            m_sCardInfo.szOver5year = dlg.m_bOver5Years ? _T("Y") : _T("N");
            m_szHospitalKey = dlg.m_szTransHospitalKey;
            m_wndPatientState.SetFocus();

            /*
                        if(m_nDocumentNo > 0 && GetMode() == VM_EDIT)
                        {
                            CString szSQL;
                            szSQL.Format(_T("UPDATE hms_doc SET hd_cardno='%s'
               WHERE hd_patientno=%ld and hd_cardno='%s' ;"), m_szCardNo,
               m_nPatientNo, m_szCardNoOld  ); pMF->ExecSQL(szSQL);
                            szSQL.Format(_T("UPDATE hms_doc SET hd_disrate=%d ,
               hd_insline='%s',hd_cardno='%s' WHERE hd_docno=%ld ;"),
               m_nDisrate, m_szOffLine, m_szCardNo, m_nDocumentNo);
                            pMF->ExecSQL(szSQL);
                        }
            */

            //	if(GetMode() != VM_VIEW)
            //		m_wndPatientState.SetFocus();
            if (m_szOffLine == _T("Y"))
                m_wndCardNo.SetTextColor(RGB(255, 0, 0));
            else
                m_wndCardNo.SetTextColor(RGB(0, 0, 255));
            m_szPatientName = dlg.m_szPatientName;
            m_szSexKey = dlg.m_szSexKey;
            tmpStr = CDate::Convert(dlg.m_szBirthDate, yyyymmdd, ddmmyyyy);
            tmpStr.Replace(_T("/"), _T(""));
            m_szAge = tmpStr;
            UpdateData(false);
            OnAgeCheckValue();
            return 0;
        }
    }

    return 0;
}
int CHMSRegistration::OnPatientStateSelectChange(int nOldItemSel,
                                                 int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSRegistration::OnPatientStateSelendok() { return 0; }
/*int CHMSRegistration::OnPatientStateSetfocus(){
     return 0;
}*/
/*int CHMSRegistration::OnPatientStateKillfocus(){
     return 0;
}*/
int CHMSRegistration::OnPatientStateLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndPatientState.IsSearchKey() && !m_szPatientStateKey.IsEmpty())
    {
        szWhere.Format(_T(" AND trim(ss_code)='%s' "), m_szPatientStateKey);
    };
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ")
                 _T("ss_id='hms_patient_state' %s ORDER BY ss_code"),
                 szWhere);
    m_wndPatientState.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndPatientState.AddItems(rs.GetValue(_T("id")),
                                   rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*int CHMSRegistration::OnPatientStateAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */
/*int CHMSRegistration::OnExamDateChange(){
    return 0;
} */
/*int CHMSRegistration::OnExamDateSetfocus(){
    return 0;
} */
/*int CHMSRegistration::OnExamDateKillfocus(){
    return 0;
} */

static const UINT ID_EDIT = 1;
static const UINT ID_BUTTON = 2;
static const UINT ID_CALENDAR = 3;
static const UINT ID_DROPWND = 4;

#define CALENDAR_AS_POPUP 1

int CHMSRegistration::OnExamDateCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    UpdateData(true);
    CString szSQL;
    szSQL.Format(_T(" select sysdate - to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ")
                 _T(" as ndate FROM DUAL"),
                 m_szExamDate.Left(10));
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() > 5 || rs.GetIntValue() < 0)
        return -1;
    return 0;
}
int CHMSRegistration::OnExamTypeSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}

#include ".\hmsregistration.h"
#include "HMSSelectionListDialog.h"

int CHMSRegistration::OnExamTypeSelendok()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    CString tmpStr;
    int nMultiroom = ToInt(m_wndExamType.GetCurrent(5));

    if (nMultiroom == 1)
    {
        CHMSSelectionListDialog dlg(this);
        dlg.m_szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM ")
                           _T("hms_roomlist WHERE hrl_deptid='%s' "),
                           pMF->m_szDept);
        m_arrayRoom.RemoveAll();
        if (dlg.DoModal() == IDOK)
        {
            for (int i = 0; i < dlg.m_arraySelection.GetCount(); i++)
            {
                CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[i];
                int nRoomID = ToInt(si.szID);
                m_arrayRoom.Add(nRoomID);
            }
        }
        if (m_arrayRoom.GetCount() > 0)
        {
            m_szRoomKey.Format(_T("%d"), m_arrayRoom[0]);
            m_wndRoom.SetCurrent(0, m_szRoomKey);
        }
        m_wndRoom.SetFocus();
    }
    // OnRoomListLoadData();
    return 0;
}
/*int CHMSRegistration::OnExamTypeSetfocus(){
     return 0;
}*/
/*int CHMSRegistration::OnExamTypeKillfocus(){
     return 0;
}*/
int CHMSRegistration::OnExamTypeLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere, szName, szID;
    if (m_wndExamType.IsSearchKey() && str2int(m_szExamTypeKey) > 0)
    {
        szWhere.Format(_T(" AND hfl_idx=%d "), str2int(m_szExamTypeKey));
    };
    if (m_szExamPartTime != _T("Y"))
    {
        szWhere.AppendFormat(_T(" and hfl_feeid <> 'D0000012' "));
    }

    szWhere.AppendFormat(_T(" and hfl_active='Y' "));

    if (pMF->m_szDept == _T("AB") || pMF->m_szDept == _T("C11BCLC") ||
        pMF->m_szDept == _T("KB_A16") || pMF->m_szDept == _T("TTTM"))
    {
        szWhere.AppendFormat(_T(" and hfl_deptid='%s' "), pMF->m_szDept);
    }

    if (pMF->m_szDept == _T("TYC") || pMF->m_szDept == _T("KSK"))
    {
        szWhere.AppendFormat(_T(" and hfl_deptid='%s' "), pMF->m_szDept);
        if (GetMode() != VM_VIEW)
        {
            szWhere.AppendFormat(
                _T(" AND CAST(hfl_idx AS NVARCHAR2(5)) IN(select * ")
                _T(" from table(SElect split_str(EX_EXAMTYPE) ")
                _T(" from E_USEREXAMTYPEPERM WHERE EX_USERID = '%s' )) " ),
                pMF->GetCurrentUser());
        }
    }

    szSQL.Format(
        _T("SELECT hfl_feeid as itemid, ")
        _T(" hfl_idx as id,  ")
        _T(" hfl_name as name, hfl_subitem as multiroom, hfl_itype as itype, ")
        _T(" hfl_servprice as servprice, hfl_insprice as insprice, ")
        _T("hfl_polprice as polprice, hfl_printsubitem as printsubitem, ")
        _T("hfl_groupidalias as groupidalias ")
        _T(" FROM hms_fee_list WHERE hfl_groupid='D0000' AND hfl_typeid='E' ")
        _T("%s ORDER BY hfl_feeid "),
        szWhere);

    _tprintf(_T("\r\n%s"), szSQL);
    //_msg(_T("%s"), szSQL);
    m_wndExamType.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {

        m_wndExamType.AddItems(
            rs.GetValue(_T("id")), rs.GetValue(_T("name")),
            rs.GetValue(_T("servprice")), rs.GetValue(_T("insprice")),
            rs.GetValue(_T("polprice")), rs.GetValue(_T("multiroom")),
            rs.GetValue(_T("itemid")), rs.GetValue(_T("itype")),
            rs.GetValue(_T("printsubitem")), rs.GetValue(_T("groupidalias")),
            NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*int CHMSRegistration::OnExamTypeAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */
int CHMSRegistration::OnRoomSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
#include "HMSCreateDepositDialog.h"
int CHMSRegistration::OnRoomSelendok()
{
    // ShowMessageBox(_T("Sẽ cho chọn mức tạm gửi ở đây!"));
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(true);

    double amount = str2double(m_wndExamType.GetCurrent(2));
    CString szIsHealthExam = m_wndExamType.GetCurrent(7);

    // if ((pMF->m_szDept == _T("TYC") && amount > 0 && szIsHealthExam !=
    // _T("Y")) || pMF->m_szDept == _T("C11BCLC") || pMF->m_szDept ==
    // _T("KB_A16"))
    if (pMF->m_szDept == _T("C11BCLC") || pMF->m_szDept == _T("KB_A16"))
    {
        CHMSCreateDepositDialog dlg(this);

        if (dlg.DoModal() == IDOK)
        {
            m_nDepositLimit = dlg.nDepositAmount;
            m_wndSave.SetFocus();
        }
        else
            m_nDepositLimit = 0;
    }

    // Nhập thông tin bệnh nhân nếu đối tượng nhập là người nhà cần XN covid
    // 19//
    CString szRoomType = m_wndRoom.GetCurrent(2);
    if (szRoomType == _T("XNNN") && (m_wndExamType.GetCurrent(7) == _T("Y")) &&
        (m_wndExamType.GetCurrent(2) == _T("0")) &&
        (pMF->CheckPermission(_T("RM.100.5"))))

    {
        CHMSFindPatientinformationDialog dlg(this);
        dlg.m_nDocumentNo = m_nDocumentNo;

        // dlg.SetMode(GetMode()==VM_ADDPAT?VM_ADD:VM_EDIT);
        if (dlg.DoModal() == IDOK)
        {
            m_nFindDocument = dlg.m_nFindDocument;
            m_szDescription = dlg.m_szDescription;
            m_ntreattime = dlg.m_ntreattime;
            m_wndSave.SetFocus();
        }
    }
    // Lộc
    CString tmpStr;
    StringLower(m_szPatientName, tmpStr);
    InitCap(tmpStr, m_szPatientName);
    UpdateData(FALSE);
    //_msg(_T("%ld"),m_nDepositLimit);
    return 0;
}
/*int CHMSRegistration::OnRoomSetfocus(){
     return 0;
}*/
/*int CHMSRegistration::OnRoomKillfocus(){
     return 0;
}*/
int CHMSRegistration::OnRoomLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndRoom.IsSearchKey() && ToInt(m_szRoomKey) > 0)
    {
        szWhere.Format(_T(" AND hrl_id=%d "), ToInt(m_szRoomKey));
    }

    if (pMF->m_szDept == m_szCurrentDept)
    {
        if (!pMF->m_UserInfo.su_hms_xroom2.IsEmpty())
        {
            // szWhere.AppendFormat(_T(" AND hrl_id in(%s) "),
            // pMF->m_UserInfo.su_hms_xroom);
            szWhere.AppendFormat(_T(" AND  hrl_key in (%s) "),
                                 pMF->m_UserInfo.su_hms_xroom2);
        }
        else
        {
            szWhere.AppendFormat(_T(" AND hrl_id in(%s) "),
                                 pMF->m_UserInfo.su_hms_xroom);
        }
    }

    // if (!pMF->m_UserInfo.su_hms_xdepts.IsEmpty() &&
    // pMF->m_UserInfo.su_hms_xdepts.GetLength() > 2 && pMF->m_szUseCurrentDept
    // == _T("Y")) 	szWhere.AppendFormat(_T(" AND hrl_deptid in (%s) "),
    //pMF->m_UserInfo.su_hms_xdepts); else
    szWhere.AppendFormat(_T(" AND hrl_deptid = '%s'  "), pMF->m_szDept);

    CString szgroupidalias = m_wndExamType.GetCurrent(9);

    if (!szgroupidalias.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND NVL(HRL_GROUP, 'N') ='LT'"));
    }
    szWhere.AppendFormat(_T(" and sd_type ='KB' "));

    szSQL.Format(
        _T("SELECT hrl_id as id, hrl_index as roomidx, hrl_name as name, ")
        _T("hrl_group as phanloai, hrl_deptid as khoa, hrl_key as roomid ")
        _T("FROM hms_roomlist left join sys_dept ON (hrl_deptid=sd_id) ")
        _T("WHERE sd_isactive='Y' AND hrl_active='Y' %s ORDER BY hrl_index "),
        szWhere);
    _tprintf(_T("\r\n%s"), szSQL);
    //_msg(_T("%s"), szSQL);

    m_wndRoom.DeleteAllItems();

    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    while (!rs.IsEOF())
    {
        m_wndRoom.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                           rs.GetValue(_T("phanloai")), rs.GetValue(_T("khoa")),
                           rs.GetValue(_T("roomid")), NULL);

        rs.MoveNext();
    }
    return nCount;

    /*CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if(m_wndRoom.IsSearchKey() && ToInt(m_szRoomKey) > 0)
    {
        szWhere.Format(_T(" AND hrl_id=%d "), ToInt(m_szRoomKey));
    }

    if(pMF->m_szDept  == m_szCurrentDept)
    {
        if(!pMF->m_UserInfo.su_hms_xroom.IsEmpty())
            szWhere.AppendFormat(_T(" AND hrl_id in(%s) "),
pMF->m_UserInfo.su_hms_xroom);
    }

    CString szgroupidalias = m_wndExamType.GetCurrent(9);

    if (!szgroupidalias.IsEmpty())
    {
        szWhere.AppendFormat(_T(" AND NVL(HRL_GROUP, 'N') ='LT'"));
    }
    szWhere.AppendFormat(_T(" and sd_type ='KB' "));

    szSQL.Format(_T("SELECT hrl_id as id, hrl_index as roomidx, hrl_name as
name, hrl_group as phanloai, hrl_deptid as khoa ") \
        _T("FROM hms_roomlist left join sys_dept ON (hrl_deptid=sd_id) ") \
        _T("WHERE hrl_deptid='%s' and sd_isactive='Y' AND hrl_active='Y' %s
ORDER BY hrl_index "), m_szCurrentDept, szWhere); _tprintf(_T("\r\n%s"), szSQL);
//_msg(_T("%s"), szSQL);

    m_wndRoom.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    while(!rs.IsEOF()){
        m_wndRoom.AddItems(
            rs.GetValue(_T("id")),
            rs.GetValue(_T("name")),
            rs.GetValue(_T("phanloai")),
            rs.GetValue(_T("khoa")),
            NULL);
        rs.MoveNext();
    }
    return nCount;*/
}
/*int CHMSRegistration::OnRoomAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */
/*int CHMSRegistration::OnHospitalChange(){
    return 0;
} */
/*int CHMSRegistration::OnHospitalSetfocus(){
    return 0;
} */
/*int CHMSRegistration::OnHospitalKillfocus(){
    return 0;
} */
// int CHMSRegistration::OnHospitalCheckValue(){
//	return 0;
// }

int CHMSRegistration::OnHospitalSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSRegistration::OnHospitalSelendok() { return 0; }
/*int CHMSRegistration::OnHospitalSetfocus(){
     return 0;
}*/
/*int CHMSRegistration::OnHospitalKillfocus(){
     return 0;
}*/
int CHMSRegistration::OnHospitalLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndHospital.IsSearchKey() && ToInt(m_szHospitalKey) > 0)
    {
        szWhere.Format(_T(" AND hh_id='%s' "), m_szHospitalKey);
    }

    szSQL.Format(
        _T("SELECT hh_id as id, hh_name||' - '||sys_getprovillname(hh_provid) ")
        _T("as name ")
        _T("FROM hms_hospital ")
        _T("WHERE hh_isactive = 'Y' AND hh_isactive2 = 'Y' %s ORDER BY hh_id "),
        szWhere);

    m_wndHospital.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndHospital.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                               NULL);
        rs.MoveNext();
    }
    return nCount;
    // return pMF->LoadHospitalList(&m_wndHospital, m_szHospitalKey);
}
/*int CHMSRegistration::OnHospitalAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */

/*int CHMSRegistration::OnDiseaseChange(){
    return 0;
} */
/*int CHMSRegistration::OnDiseaseSetfocus(){
    return 0;
} */
/*int CHMSRegistration::OnDiseaseKillfocus(){
    return 0;
} */
int CHMSRegistration::OnDiseaseCheckValue() { return 0; }
int CHMSRegistration::OnAddNewSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetDupWarning(true);
    OnAddHMSRegistration();
    return 0;
}
int CHMSRegistration::OnEditSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, szAdress;
    CRecord rs(&pMF->m_db);

    m_szOldPatientName = m_szPatientName;
    m_szOldObject = m_szObjectKey;
    m_szOldExamType = m_szExamTypeKey;
    m_szOldRoom = m_szRoomKey;
    m_bSendTPH = false;

    // kiem tra xem co send xet nghiem qua TPH ko thi moi bat option
    // szSQL.Format(_T("select count(*) as qty from hms_testorder where
    // nvl(hpc_lab_posted,'N') ='Y' and hpc_docno =%ld  "),m_nDocumentNo );
    szSQL.Format(_T("select count(*) as qty ")
                 _T(" from HMS_TESTORDERLINE ")
                 _T(" where nvl(HPCL_POSTED,'N') ='Y' and hpcl_docno =%ld  "),
                 m_nDocumentNo);
    rs.ExecSQL(szSQL);
    int nCount = 0;
    nCount = rs.GetIntValue();
    if (nCount > 0)
    // if (1==1)
    {
        m_bSendTPH = true;
        m_sPatientInfoOld.nDocumentNo = m_nDocumentNo;
        m_sPatientInfoOld.nPatientNo = m_nPatientNo;
        m_sPatientInfoOld.szPatientName = m_szPatientName;
        m_sPatientInfoOld.nYearOfBirth = str2int(m_szBirthDate.Left(4));
        m_sPatientInfoOld.szBirthDate = m_szBirthDate;
        m_sPatientInfoOld.szSex = m_szSexKey;
        szAdress.Empty();
        szSQL.Format(
            _T("select case when length(trim(hp_dtladdr)) >1 then  ")
            _T(" hp_dtladdr ||','||hms_getaddress(hp_provid,hp_distid, ")
            _T("hp_villid)  ")
            _T(" else hms_getaddress(hp_provid,hp_distid, hp_villid)  end  as ")
            _T("address ")
            _T(" from hms_patient where hp_patientno = %ld "),
            m_nPatientNo);
        rs.ExecSQL(szSQL);
        m_sPatientInfoOld.szAddress = rs.GetStringValue();
        m_sPatientInfoOld.szPhone = m_szPhone;
        m_sPatientInfoOld.szMaKhoa = pMF->m_szDept;
        szSQL.Format(_T("Select HMS_GETDEPTNOW(%ld) as deptid from dual "),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);
        m_sPatientInfoOld.szMaKhoaHienThoi = rs.GetStringValue();

        // Lấy thêm thông tin hộ chiếu
        szSQL.Format(_T(" SELECT HD_SOHOCHIEU as Sohochieu,")
                     _T(" HD_NGAYCAP_HOCHIEU as Ngaycap,")
                     _T(" HD_HOCHIEU_GHICHU as Note")
                     _T(" from hms_doc where hd_docno=%ld"),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("Sohochieu"), m_szSohochieuOld);
            rs.GetValue(_T("Ngaycap"), m_szApplyDateOld);
            rs.GetValue(_T("Note"), m_szNoteOld);
        }
        m_sPatientInfoOld.szSoHoChieu = m_szSohochieuOld;
        m_sPatientInfoOld.szNgayCapHoChieu = m_szApplyDateOld;
        m_sPatientInfoOld.szGhiChuHoChieu = m_szNoteOld;
    }

    OnEditHMSRegistration();

    // Them ham kiem tra khi sua thong tin tiep don
    szSQL.Format(_T("HMS_RECEPTION_CHECKBF_EDIT('%s', %ld) "),
                 pMF->GetCurrentUser(), m_nDocumentNo);
    int nEditState = str2int(pMF->ExecDML(szSQL));
    // 0x08: Khong cho phep sua doi tuong va noi chuyen tuyen
    // 0x02: Khong cho phep sua ho va ten
    // 0x04: Khong cho phep sua thong tin kham
    //_tprintf(_T("\r\n%d: %d: %d: %d: %d"), 0x01, 0x02, 0x04, 0x01|0x02,
    //0x01|0x02|0x04);

    if (nEditState & 0x08)
    {
        m_wndObject.SetReadOnly(TRUE);
        m_wndObject.SetCheckValue(FALSE);
        m_wndCardNoButton.EnableWindow(FALSE);
        m_wndHospital.EnableWindow(FALSE);
        m_wndHospital.SetCheckValue(FALSE);
        m_wndDisease.EnableWindow(FALSE);
        m_wndDisease.SetCheckValue(FALSE);
    }
    if (nEditState & 0x02)
    {
        m_wndPatientName.EnableWindow(FALSE);
        m_wndPatientName.SetCheckValue(FALSE);
    }

    if (nEditState & 0x04)
    {
        m_wndExamType.EnableWindow(FALSE);
        m_wndRoom.EnableWindow(FALSE);
        m_wndExamDate.EnableWindow(FALSE);
        m_wndExamDate.SetCheckValue(FALSE);
    }

    return 0;
}

int CHMSRegistration::OnCheckSendToTPH()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, szAdress;
    CRecord rs(&pMF->m_db);

    m_szOldPatientName = m_szPatientName;
    m_szOldObject = m_szObjectKey;
    m_szOldExamType = m_szExamTypeKey;
    m_szOldRoom = m_szRoomKey;
    m_bSendTPH = false;

    // kiem tra xem co send xet nghiem qua TPH ko thi moi bat option
    // szSQL.Format(_T("select count(*) as qty from hms_testorder where
    // nvl(hpc_lab_posted,'N') ='Y' and hpc_docno =%ld  "),m_nDocumentNo );
    szSQL.Format(_T("select count(*) as qty from HMS_TESTORDERLINE where ")
                 _T("nvl(HPCL_POSTED,'N') ='Y' and hpcl_docno =%ld  "),
                 m_nDocumentNo);
    rs.ExecSQL(szSQL);
    int nCount = 0;
    nCount = rs.GetIntValue();
    if (nCount > 0)
    {
        m_bSendTPH = true;
        m_sPatientInfoOld.nDocumentNo = m_nDocumentNo;
        m_sPatientInfoOld.nPatientNo = m_nPatientNo;
        m_sPatientInfoOld.szPatientName = m_szPatientName;
        m_sPatientInfoOld.nYearOfBirth = str2int(m_szBirthDate.Left(4));
        m_sPatientInfoOld.szBirthDate = m_szBirthDate;
        m_sPatientInfoOld.szSex = m_szSexKey;
        szAdress.Empty();
        szSQL.Format(
            _T("select case when length(trim(hp_dtladdr)) >1 then  ")
            _T(" hp_dtladdr ||','||hms_getaddress(hp_provid,hp_distid, ")
            _T("hp_villid)  ")
            _T(" else hms_getaddress(hp_provid,hp_distid, hp_villid)  end  as ")
            _T("address ")
            _T(" from hms_patient where hp_patientno = %ld "),
            m_nPatientNo);
        rs.ExecSQL(szSQL);
        m_sPatientInfoOld.szAddress = rs.GetStringValue();
        m_sPatientInfoOld.szPhone = m_szPhone;
        m_sPatientInfoOld.szMaKhoa = pMF->m_szDept;
        szSQL.Format(_T("Select HMS_GETDEPTNOW(%ld) as deptid from dual "),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);
        m_sPatientInfoOld.szMaKhoaHienThoi = rs.GetStringValue();
    }
    return nCount;
}
int CHMSRegistration::OnDeleteSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_nOldDocumentNo = m_nDocumentNo;
    m_nOldReceptNo = m_nReceptNo;
    //_msg(_T("%ld:%d"), nDocumentNo, nReceptNo);
    OnDeleteHMSRegistration();
    return 0;
}
int CHMSRegistration::OnSaveSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    int nMode = GetMode();
    int res = OnSaveHMSRegistration();
    CString szSQL;
    CRecord rs(&pMF->m_db);

    if (res > 0)
    {
        // Kiem tra neu benh nhan dich vu thi tao phieu thu phi ngay
        m_szCurrentDept = pMF->m_szDept;

        if (m_szObjectType == _T("S") && pMF->m_IsC11)
        {
            CString szSQL;
            szSQL.Format(_T("hms_fee_create(%ld, 'E', 'EM') "), m_nDocumentNo);
            pMF->ExecDML(szSQL);

            CString szDepts;
            long nReceiptNo = 1;
            CRecord rs(&pMF->m_db);
            szSQL.Format(
                _T("SELECT coalesce(MAX(hfc_receiptno), 0)+1 as recvno FROM ")
                _T("hms_fee_control WHERE hfc_userid='%s' "),
                pMF->GetCurrentUser());
            rs.ExecSQL(szSQL);
            if (!rs.IsEOF())
            {
                rs.GetValue(_T("recvno"), nReceiptNo);
            }

            CString szSerialNo = pMF->GetCurrentUser();
            szDepts.Format(_T("[%s]"), pMF->m_szDept);
            szSQL.Format(_T("HMS_FEE_INVOICE_CREATERECEIPT(%ld, '%s', %ld, ")
                         _T("'%s', '%s', '%S', '%s', '%s', '%s', '%s', 'N')"),
                         m_nDocumentNo, szSerialNo, nReceiptNo,
                         pMF->GetSysDateTime(), pMF->m_szDept, szDepts,
                         pMF->GetCurrentUser(), _T("1"), _T("E"), _T("E"));

            // int res  = str2int(pMF->ExecDML(szSQL));
        }
        szSQL.Format(_T("select count(*) as qty from HMS_TESTORDERLINE where ")
                     _T("nvl(HPCL_POSTED,'N') ='Y' and hpcl_docno =%ld  "),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);
        int nCount = 0;
        nCount = rs.GetIntValue();
        if (nCount > 0)
        {
            CString szAdress;
            m_sPatientInfoNew.nDocumentNo = m_nDocumentNo;
            m_sPatientInfoNew.nPatientNo = m_nPatientNo;
            m_sPatientInfoNew.szPatientName = m_szPatientName;
            m_sPatientInfoNew.nYearOfBirth = str2int(m_szBirthDate.Left(4));
            m_sPatientInfoNew.szBirthDate = m_szBirthDate;
            m_sPatientInfoNew.szSex = m_szSexKey;
            szAdress.Empty();
            szSQL.Format(
                _T("select case when length(trim(hp_dtladdr)) >1 then  ")
                _T(" hp_dtladdr ||','||hms_getaddress(hp_provid,hp_distid, ")
                _T("hp_villid)  ")
                _T(" else hms_getaddress(hp_provid,hp_distid, hp_villid)  end ")
                _T(" as address ")
                _T(" from hms_patient where hp_patientno = %ld "),
                m_nPatientNo);
            rs.ExecSQL(szSQL);
            m_sPatientInfoNew.szAddress = rs.GetStringValue();
            m_sPatientInfoNew.szPhone = m_szPhone;
            m_sPatientInfoNew.szMaKhoa = pMF->m_szDept;
            szSQL.Format(_T("Select HMS_GETDEPTNOW(%ld) as deptid from dual "),
                         m_nDocumentNo);
            rs.ExecSQL(szSQL);
            m_sPatientInfoNew.szMaKhoaHienThoi = rs.GetStringValue();

            // Lấy thêm thông tin hộ chiếu
            szSQL.Format(_T(" SELECT HD_SOHOCHIEU as Sohochieu,")
                         _T(" HD_NGAYCAP_HOCHIEU as Ngaycap,")
                         _T(" HD_HOCHIEU_GHICHU as Note")
                         _T(" from hms_doc where hd_docno=%ld"),
                         m_nDocumentNo);
            rs.ExecSQL(szSQL);
            if (!rs.IsEOF())
            {
                rs.GetValue(_T("Sohochieu"), m_szSohochieuNew);
                rs.GetValue(_T("Ngaycap"), m_szApplyDateNew);
                rs.GetValue(_T("Note"), m_szNoteNew);
            }
            m_sPatientInfoNew.szSoHoChieu = m_szSohochieuNew;
            m_sPatientInfoNew.szNgayCapHoChieu = m_szApplyDateNew;
            m_sPatientInfoNew.szGhiChuHoChieu = m_szNoteNew;

            //_msg(_T("%s"),m_szSohochieuOld);
            //_msg(_T("%s"),m_szSohochieuNew);
            //_msg(_T("%s"),m_sPatientInfoNew.szSex);
            //_msg(_T("%s"),m_sPatientInfoNew.szAddress);

            OnSendTPH();
        }
    }

    return 0;
}
int CHMSRegistration::OnCancelSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnCancelHMSRegistration();
    return 0;
}

int CHMSRegistration::OnPrintSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    if (pMF->m_IsC13)
    {
        // tu ngay 25/05 ko in phieu tiep don o C13 nua chi in phieu duoi
        // PrintReceipt(false, false);
        OnPrintTriageC13(false, false);
    }
    else
        PrintReceipt(false, false);
    return 0;
}

int CHMSRegistration::OnPrintSmartcard()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CPrintForms printer;
    printer.RM_PrintCardInfo(pMF->m_nPatientNo);
    return 0;
}

int CHMSRegistration::OnPrintTreatmentSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    PrintTreatment(false);
    return 0;
}

// Them benh nhan moi.
int CHMSRegistration::OnAddHMSRegistration()
{
    // Kiem tra neu dang co tac vu them hoac sua thong tin benh nhan thi ko cho
    // phep them moi
    int nMode = GetMode();

    if (nMode == VM_ADDPAT || nMode == VM_ADDDOC || nMode == VM_ADDEXAM ||
        nMode == VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szTitle;
    // pMF->SetStatusText(_T("Add new patient"));

    nMode = VM_ADDPAT;
    szTitle = _T("Add New Patient");
    m_sCardInfo.code.Empty();
    m_sCardInfo.company.Empty();
    m_sCardInfo.discount = 0;
    m_sCardInfo.expdate.Empty();
    m_sCardInfo.expdate.Empty();
    m_sCardInfo.regplacecde.Empty();

    SetMode(nMode);
    return 0;
}
int CHMSRegistration::OnEditCardInformation()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szCurrentUser;
    szCurrentUser = pMF->GetCurrentUser();
    if (m_szCardNo.IsEmpty())
        return -1;

    if (!pMF->CheckPermission(_T("01.10")))
    {
        ShowMessageBox(_T("Permission Denined."), MB_ICONWARNING);
        return -1;
    }
    if (szCurrentUser.CompareNoCase(_T("admin")) != 0)
    {
        //		ShowMessageBox(_T("Only a system administrator perform new tasks
        //on"),MB_ICONWARNING); 		return -1;
    }

    // CHMSInsregDateDialog dlg(this);
    CHMSInsuranceCardSettingDialog dlg(this);
    dlg.m_szApplyDate = m_szExamDate.Left(10);
    dlg.m_nPatientNo = m_nPatientNo;
    dlg.m_nDocumentNo = m_nDocumentNo;
    dlg.m_nCardIdx = m_nCardIdx;
    if (m_szOffLine == _T("Y"))
        dlg.m_bOffLine = TRUE;
    else
        dlg.m_bOffLine = FALSE;
    szSQL.Format(_T("SELECT hd_insregdate FROM hms_doc WHERE hd_docno =%ld "),
                 m_nDocumentNo);
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("hd_insregdate"), dlg.m_szApplyDate);
    }
    if (dlg.DoModal() == IDOK)
    {
        CString szEvent, szDesc;
        // szEvent.Format(_T(""));
        // szDesc.Format(_T(""));
        pMF->SystemLog(szEvent, szDesc);
        GetDataToScreen();
    }

    return 0;
}

int CHMSRegistration::OnEditHMSRegistration()
{
    if (GetMode() != VM_VIEW)
        return -1;

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szgroupid;
    m_bLogPaidPatient = true;
    szSQL.Format(
        _T("SELECT su_groupid as groupid FROM sys_user WHERE su_userid = '%s'"),
        pMF->GetCurrentUser());
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("groupid"), szgroupid);

    // OnCheckSendToTPH();

    // if(pMF->GetCurrentUser() != _T("admin"))
    // Hot fix -> User thuộc nhóm admin được phép sửa lại thông tin bệnh nhân
    /*if(szgroupid != _T("A"))
    {
        szSQL.Format(_T("SELECT hcrf_acceptedfee FROM hms_clinical_record WHERE
    hcr_docno=%ld "), m_nDocumentNo); rs.ExecSQL(szSQL); if(!rs.IsEOF())
        {
            CString tmpStr;
            rs.GetValue(_T("hcrf_acceptedfee"), tmpStr);
            if(tmpStr == _T("Y") || tmpStr == _T("P"))
                if (!pMF->CheckPermission(_T("RM.100.9")))
            {
                ShowMessageBox(_T("Bệnh nhân đã được xác nhận chi phí. Không cho
    phép sửa thông tin")); return -1;
            }
            else m_bLogPaidPatient = true;
        }

    }*/
    szSQL.Format(_T("SELECT hcrf_acceptedfee FROM hms_clinical_record WHERE ")
                 _T("hcr_docno=%ld "),
                 m_nDocumentNo);
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        CString tmpStr;
        rs.GetValue(_T("hcrf_acceptedfee"), tmpStr);
        if (tmpStr == _T("Y") || tmpStr == _T("P"))
        {
            ShowMessageBox(_T("Bệnh nhân đã được xác nhận chi phí. Không cho ")
                           _T("phép sửa thông tin"),
                           MB_ICONERROR);
            return -1;
        }
        m_bLogPaidPatient = true;
    }

    // m_bLogPaidPatient = true;
    szSQL.Format(
        _T("SELECT count(*) FROM hms_patient_encrypt WHERE hpe_patientno=%ld "),
        m_nPatientNo);
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() > 0)
    {
        ShowMessageBox(
            _T("Hồ sơ đã được mã hóa. Không cho phép sửa đổi thông tin"));
        return 0;
    }

    SetMode(VM_EDIT);

    if (m_szExamStatus != _T("O"))
    {

        szSQL.Format(_T("SELECT count(*) FROM hms_fee_invoice WHERE ")
                     _T("hfe_docno=%ld and hfe_status='P'"),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);
        if (rs.GetIntValue() > 0 || !pMF->CheckPermission(_T("01.30")))
        {
            m_wndExamType.EnableWindow(false);
            m_wndRoom.EnableWindow(false);
        }
        else
        {
            m_wndExamType.EnableWindow(true);
            m_wndRoom.EnableWindow(true);
        }
    }

    /*
    szSQL.Format(_T("SELECT count(*) FROM hms_doc WHERE hd_patientno=%ld AND
    hd_cardno='%s' and hd_docno<>%ld"), m_nPatientNo, m_szCardNo,
    m_nDocumentNo); rs.ExecSQL(szSQL); if(rs.GetIntValue() > 0){
        m_wndObject.EnableWindow(false);
        m_wndCardNoButton.EnableWindow(false);
    }
    */

    if (pMF->CheckPermission(_T("01.11")))
    {
        int nNumberInvoice, nNumberRecordNo;
        szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE ")
                     _T("hcr_docno=%ld AND hcr_alterobj <> 'Y'"),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);
        nNumberRecordNo = rs.GetIntValue();

        szSQL.Format(
            _T("SELECT count(*) FROM hms_fee_invoice WHERE hfe_docno=%ld"),
            m_nDocumentNo);
        rs.ExecSQL(szSQL);
        nNumberInvoice = rs.GetIntValue();

        if (nNumberRecordNo > 0 || nNumberInvoice > 0)
        {
            m_wndObject.EnableWindow(false);
            m_wndCardNoButton.EnableWindow(false);
        }
        else
        {
            m_wndObject.EnableWindow(true);
            m_wndCardNoButton.EnableWindow(true);
        }
    }

    if (pMF->CheckPermission(_T("01.12")))
    {
        m_wndObject.EnableWindow(true);
        m_wndCardNoButton.EnableWindow(true);
    }
    UpdateData(false);
    return 0;
}
int CHMSRegistration::OnDeleteHMSRegistration()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CString szWhere;
    CRecord rs(&pMF->m_db);

    if (!pMF->CheckPermission(_T("01.03")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return 0;
    }

    //_msg(_T("%s - %d"), m_wndObject.GetCurrent(3), pMF->m_IsC11);

    if (m_wndObject.GetCurrent(3) == _T("S") && pMF->m_IsC11)
    {
        szSQL.Format(_T("SELECT Count(*) FROM hms_exam WHERE he_docno=%ld AND ")
                     _T("he_payment='P'"),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);

        if (rs.GetIntValue() > 0)
        {
            ShowMessageBox(_T("Bệnh nhân đã thu phí khám. Không thể xóa!"),
                           MB_OK | MB_ICONERROR);
            return -1;
        }
    }

    szSQL.Format(
        _T("SELECT count(*) FROM hms_patient_encrypt WHERE hpe_patientno=%ld "),
        m_nPatientNo);
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() > 0)
    {
        ShowMessageBox(_T("Hồ sơ đã được mã hóa. Không cho phép xóa"));
        return 0;
    }

    if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
        return -1;

    szSQL.Format(_T("HMS_EXAM_DELETE('%s', %ld, %ld, '%s') "), pMF->m_szDept,
                 m_nDocumentNo, m_nReceptIdx, pMF->GetCurrentUser());
    int ret = str2int(pMF->ExecDML(szSQL));

    if (ret > 0)
    {
        CString szEvent, szDesc;
        szEvent.Format(_T("Delete Reception Information"));
        szDesc.Format(_T("[%ld]%d"), m_nOldDocumentNo, m_nOldReceptNo);
        pMF->SystemLog(szEvent, szDesc);

        SetMode(VM_VIEW);
        OnExamListLoadData();
        /*OnCancelHMSRegistration();
        pMF->m_wndExaminationQueue.RefreshData();*/
    }
    else
    {
        CString szMsg;
        szMsg.Format(_T("[%d] Không xóa được phiếu tiếp đón"), ret);
        ShowMessageBox(szMsg, MB_OK);
    }
    return 0;
}
int CHMSRegistration::OnSaveHMSRegistration()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    int nMode = GetMode();

    if (nMode != VM_ADDPAT && nMode != VM_ADDDOC && nMode != VM_ADDEXAM &&
        nMode != VM_EDIT)
        return -1;

    bool bAddPat = false, bAddDoc = false, bAddExam = false;
    int nCardIdx = 0;
    CString szWhere, szEvent, szDesc;
    CString szSQL, insCardSQL, szFunctionCall;
    CRecord rs(&pMF->m_db);
    CRecord rsl(&pMF->m_db);

    if (pMF->m_IsC12)
    {
        m_wndRank.SetCheckValue(true);
        // m_wndPosition.SetCheckValue(true);
    }
    else
    {
        m_wndRank.SetCheckValue(false);
        m_wndPosition.SetCheckValue(false);
    }
    bool bIsChil = false;
    if (m_szCardNo.Left(3) == _T("TE1") && m_szCardNo.Mid(5, 2) == _T("KT"))
        bIsChil = true;

    // Kiem tra neu benh nhan co the ko phai dang ky tai benh vien ma cho dung
    // tuyen thi bat buoc phai nhap thong tin chuyen vien
    if (!bIsChil)
    {
        if (!m_szCardNo.IsEmpty() && m_szCardNo.GetLength() > 15)
        //_msg(_T("%s"), m_szEmergency);
        {
            if (m_szCardNo.Right(5) != _T("01014") && m_szOffLine != _T("Y") &&
                m_szHospitalKey.IsEmpty() && (m_szEmergency != _T("Y")))
            {
                ShowMessageBox(_T("Bệnh nhân BHYT chuyển tuyến. Phải nhập ")
                               _T("thông tin bệnh viện chuyển đi."),
                               MB_OK);
                m_bTransfer = true;
                m_wndHospital.SetCheckValue(true);
                m_wndDisease.SetCheckValue(true);
                m_wndHospital.EnableWindow(true);
                m_wndDisease.EnableWindow(true);
                m_wndHospital.SetFocus();
                return -1;
            }
            else
            {
                m_wndHospital.SetCheckValue(false);
                m_wndDisease.SetCheckValue(false);
                m_wndHospital.EnableWindow(false);
                m_wndDisease.EnableWindow(false);
            }
        }
        // UpdateData(false);
    }

    if (CheckDupPatient() > 0)
    {
        return -1;
    }
    if (!IsValidateData())
    {
        return -1;
    }

    if (m_szObjectType == L"I" && m_szDoituong_KCB.IsEmpty())
    {
        ShowMessageBox(L"Mã đối tượng KCB không được để trống");
        return -2;
    }

    CString szRoomType = m_wndRoom.GetCurrent(2);

    // Bỏ đi do hết dịch covid rồi

    /*if (szRoomType == _T("XNNN") && m_nFindDocument == 0)
    {
        ShowMessageBox(_T("Bạn chưa nhập thông tin bệnh nhân tại viện, đây là
    căn cứ để sau này bệnh viện làm thanh toán với ngân sách nhà nước, bạn cần
    nhập đủ thông tin!")); m_wndRoom.SetFocus(); return -1;
    }*/

    // Nếu đối tượng quân đội thì bắt nhập đối tượng & cấp bậc
    //_msg(_T("Chào lộc"));
    if ((m_szObjectKey == _T("11")) && (m_szCardNo.Mid(3, 2) == _T("97")) &&
        (m_szArmObjectKey.IsEmpty()))
    {
        ShowMessageBox(_T("Bệnh nhân thuộc đối tượng trong quân đội. Yêu cầu ")
                       _T("nhập đối tượng trong quân đội và cấp bậc"),
                       MB_ICONERROR);
        m_wndArmObject.SetFocus();
        return -1;
    }

    if (m_szObjectKey == _T("1") && m_szRankKey.IsEmpty())
    {
        ShowMessageBox(_T("Bệnh nhân đối tượng quân.Yêu cầu nhập cấp bậc!"));
        m_wndRank.SetFocus();
        return -1;
    }
    if (GetMode() == VM_EDIT &&
        (m_szDept == _T("C1.1") || m_szDept == _T("C1.2") ||
         m_szDept == _T("C1.3") || m_szDept == _T("AB") ||
         m_szDept == _T("TYC") || m_szDept == _T("TTHTSS")))
    {
        szSQL.Format(_T("SELECT he_receptidx FROM hms_exam WHERE he_docno=%ld ")
                     _T("and he_deptid='%s' and he_roomid=%d "),
                     m_nDocumentNo, m_szDept, str2int(m_szRoomKey));
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            long receptidx;
            rs.GetValue(_T("he_receptidx"), receptidx);
            if (receptidx != m_nReceptIdx)
            {
                ShowMessageBox(_T("This exam room has been created."));
                return -1;
            }
        }
    }

    m_szObjectKey.Trim();
    if (m_szObjectKey.IsEmpty())
    {
        m_wndObject.SetFocus();
        return -1;
    }

    CString szObjType = m_wndObject.GetCurrent(3);
    CString szHasCard = m_wndObject.GetCurrent(2);
    if ((szHasCard == _T("Y") &&
         (szObjType == _T("I") || szObjType == _T("C"))) &&
        m_szCardNo.IsEmpty())
    {
        int nMsg = ShowMessageBox(_T("Bệnh nhân chưa nhập thẻ BHYT."), MB_OK);
        // if(nMsg == IDNO)
        return 0;
    }

    //// Kiem tra the BHYT da duoc su dung boi benh nhan nao chua
    // if (!m_szCardNo.IsEmpty())
    //{
    //
    //	szSQL.Format(_T("SELECT * FROM hms_card WHERE
    //upper(hc_cardno)=upper('%s') "), m_szCardNo); 	rs.ExecSQL(szSQL);
    //	if(!rs.IsEOF()){
    //		long nPatientNo;
    //		rs.GetValue(_T("hc_patientno"), nPatientNo);
    //		if(nPatientNo != m_nPatientNo)
    //		{
    //			CString szMsg;
    //			szMsg.Format(_T("This card is using by other patient.[%ld]"),
    //nPatientNo); 			ShowMessageBox(szMsg, MB_ICONWARNING|MB_OK); 			return -1;
    //		}
    //		rs.GetValue(_T("hc_idx"), nCardIdx);
    //	}
    // }

    pMF->BeginTransaction();

    if (nMode == VM_ADDPAT)
    {
        bAddPat = true;
        bAddDoc = true;
        bAddExam = true;
    }
    else if (nMode == VM_ADDDOC)
    {
        bAddDoc = true;
        bAddExam = true;
    }
    else if (nMode == VM_ADDEXAM)
    {
        bAddExam = true;
    }

    if (bAddPat)
    {
        szSQL.Format(_T("hms_getnextpatientno()"));
        m_nPatientNo = str2long(pMF->ExecDML(szSQL));
    }

    if (bAddDoc)
    {
        szSQL.Format(_T("hms_getnextdocno()"));
        m_nDocumentNo = str2long(pMF->ExecDML(szSQL));
    }

    m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNo);

    m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo);
    m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocumentNo);
    m_hms_examTbl.SetValue(_T("he_patientno"), m_nPatientNo);
    m_hms_examTbl.SetValue(_T("he_docno"), m_nDocumentNo);
    m_hms_cardTbl.SetValue(_T("hc_patientno"), m_nPatientNo);

    CString szHealthExam = m_wndExamType.GetCurrent(7);
    m_hms_docTbl.SetValue(_T("hd_healthexam"), szHealthExam);
    if (m_szHealthExam == _T("Y") || szHealthExam == _T("Y"))
    {
        CString szDesc;
        szDesc.Format(_T("Bệnh nhân [%s] số hồ sơ [%ld]"), m_szPatientName,
                      m_nDocumentNo);
        pMF->SystemLog(_T("Nhập thông tin tiếp đón"), szDesc);
    }
    if ((bAddExam) || nMode == VM_EDIT)
    {
        if (bAddExam)
            m_szCurRoom.Empty();
        if (m_szCurRoom != m_szRoomKey)
        {

            m_nReceptNo = GetMaxReceptNoBySequance();
        }

        if (bAddExam)
        {
            m_szExamStatus = _T("O");
        }
        m_hms_examTbl.SetValue(_T("he_receptno"), m_nReceptNo);
        // m_hms_examTbl.SetValue(_T("he_receptidx"), m_nReceptIdx);
        m_hms_examTbl.SetValue(_T("he_status"), m_szExamStatus);
    }

    //_msg(_T("%d"), m_nCardIdx);

    m_hms_docTbl.SetValue(_T("hd_cardidx"), m_nCardIdx);
    m_hms_docTbl.SetValue(_T("hd_cardno"), m_szCardNo);
    m_hms_docTbl.SetValue(_T("hd_insregdate"), m_szExamDate);

    // Kiem tra neu tao phieu kham moi
    // Neu da ton tai phieu kham tai phong duoc chi dinh trong ngay thi ko cho
    // tao nua

    if (bAddExam)
    {
        szSQL.Format(
            _T("SELECT Count(*) ")
            _T("FROM ")
            _T("	hms_exam ")
            _T("WHERE ")
            _T("	he_docno=%ld AND HE_DEPTID <> 'A11'")
            _T("	AND trunc(he_examdate)= TO_DATE('%s', 'YYYY-MM-DD') ")
            _T("	AND he_roomid=%ld "),
            m_nDocumentNo, m_szExamDate.Left(10), str2long(m_szRoomKey));
        rs.ExecSQL(szSQL);
        if (rs.GetIntValue() > 0)
        {
            ShowMessageBox(
                _T("The Examination sheet is existing in the room selected"),
                MB_OK | MB_ICONWARNING);
            pMF->Rollback();
            return -1;
        }
    }

    int ret = -1;

    if (bAddExam)
    {
        // Them benh nhan moi
        if (bAddPat)
        {
            szSQL = m_hms_patientTbl.GetInsertSQL();

            ret = pMF->ExecSQL(szSQL);
            if (ret <= 0)
            {
                pMF->Rollback();
                ShowMessageBox(_T("Can not add new patient information"),
                               MB_OK);
                return -1;
            }
        }
        // Tao ho so kham moi
        if (bAddDoc)
        {
            szSQL = m_hms_docTbl.GetInsertSQL();
            ret = pMF->ExecSQL(szSQL);
            if (ret <= 0)
            {
                pMF->Rollback();
                ShowMessageBox(_T("Can not add new document information"),
                               MB_OK);
                return -1;
            }
            // Kiem tra doi tuong co the BHYT thi them vao.
            if (szHasCard == _T("Y") && !m_szCardNo.IsEmpty())
            {
                m_hms_cardTbl.SetValue(_T("hc_cardno"), m_szCardNo);
                m_hms_cardTbl.SetValue(_T("hc_docno"), m_nDocumentNo);
                szSQL.Format(_T("HMS_CARD_UPDATE(%s) "),
                             m_hms_cardTbl.FormatSQL());

                m_nCardIdx = str2long(pMF->ExecDML(szSQL));
                //_msg(_T("%s"), szSQL);

                if (m_nCardIdx <= 0)
                {
                    pMF->Rollback();
                    ShowMessageBox(_T("Không thể thêm thẻ bảo hiểm"), MB_OK);
                    return -1;
                }
            }
        }

        szSQL = m_hms_examTbl.GetInsertSQL();

        ret = pMF->ExecSQL(szSQL);
        if (ret <= 0)
        {
            pMF->Rollback();
            ShowMessageBox(_T("Can not add new examination receipt"), MB_OK);
            return -1;
        }
        else
        {
            // Tao phieu thu phi kham
        }
        szSQL.Format(_T("SELECT max(he_receptidx) as receptidx FROM hms_exam ")
                     _T("WHERE he_docno=%ld "),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);
        rs.GetValue(_T("receptidx"), m_nReceptIdx);

        int nMultiroom = ToInt(m_wndExamType.GetCurrent(5));
        if (nMultiroom == 1)
        {
            for (int i = 0; i < m_arrayRoom.GetCount(); i++)
            {
                int nRoom = m_arrayRoom[i];
                if (nRoom != ToInt(m_szRoomKey))
                {
                    szSQL.Format(
                        _T("SELECT count(*) ")
                        _T("FROM hms_exam  ")
                        _T("WHERE he_docno=%ld and trim(he_deptid)='%s' and ")
                        _T("he_roomid=%d AND trunc(he_examdate) = ")
                        _T("TO_DATE('%s','YYYY-MM-DD') "),
                        m_nDocumentNo, m_szDept, nRoom, m_szExamDate.Left(10));
                    rs.ExecSQL(szSQL);
                    if (rs.GetIntValue() <= 0)
                    {
                        m_nReceptNo = GetMaxReceptNoBySequance();

                        m_hms_examTbl.SetValue(_T("he_receptno"), m_nReceptNo);
                        m_hms_examTbl.SetValue(_T("he_hasfee"), _T("Y"));
                        m_hms_examTbl.SetValue(_T("he_roomid"), nRoom);
                        m_hms_examTbl.SetValue(_T("he_hasfee"), _T("N"));
                        szSQL = m_hms_examTbl.GetInsertSQL();
                        ret = pMF->ExecSQL(szSQL);
                        if (ret <= 0)
                        {
                        }
                    }
                }
            }
            m_arrayRoom.RemoveAll();
        }
    }
    else if (nMode == VM_EDIT)
    {
        // Cap nhat thong  tin benh nhan
        szWhere.Format(_T(" WHERE hp_patientno=%ld "), m_nPatientNo);
        szSQL = m_hms_patientTbl.GetUpdateSQL(
            _T("hp_createdby,hp_createddate,hp_patientno"));
        szSQL += szWhere;
        if (m_bLogPaidPatient)
            ret = pMF->LogRowChange(_T("hms_patient"), _T("Log Paid Patient"),
                                    m_nPatientNo, szSQL, pMF->GetCurrentUser(),
                                    _T("hp_updateddate"));
        else
            ret = pMF->ExecSQL(szSQL);
        if (ret <= 0)
        {
            pMF->Rollback();
            ShowMessageBox(_T("Can not update patient information"), MB_OK);
            return -1;
        }

        // Cap nhat thong tin ho so kham va dieu tri

        if (szHasCard != _T("Y"))
        {
            m_hms_docTbl.SetValue(_T("hd_cardno"), _T(""));
            m_hms_docTbl.SetValue(_T("hd_cardidx"), 0);

            m_nDisrate = ToInt(m_wndObject.GetCurrent(4));

            m_hms_docTbl.SetValue(_T("hd_disrate"), m_nDisrate);
            m_hms_docTbl.SetValue(_T("hd_insline"), _T("N"));
            m_szCardNo.Empty();
        }

        szWhere.Format(_T(" WHERE hd_docno=%ld "), m_nDocumentNo);

        if (szHealthExam == _T("Y"))
        {
            szSQL = m_hms_docTbl.GetUpdateSQL(
                _T("hd_createdby,hd_createddate,hd_docno,hd_patientno,hd_")
                _T("status,hd_cardno, ")
                _T("hd_cardidx,hd_xobject,hd_xcardno,hd_xissuedate,hd_")
                _T("xissueplace, hd_admitdate,hd_enddate, HD_HEALTHEXAM"));
        }
        else

            szSQL = m_hms_docTbl.GetUpdateSQL(
                _T("hd_createdby,hd_createddate,hd_docno,hd_patientno,hd_")
                _T("status,hd_cardno, ")
                _T("hd_cardidx,hd_xobject,hd_xcardno,hd_xissuedate,hd_")
                _T("xissueplace, hd_admitdate,hd_enddate"));
        szSQL += szWhere;

        if (m_bLogPaidPatient)
            ret = pMF->LogRowChange(_T("hms_doc"), _T("Log Paid Patient"),
                                    m_nDocumentNo, szSQL, pMF->GetCurrentUser(),
                                    _T("hd_updateddate"));
        else
            ret = pMF->ExecSQL(szSQL);
        if (ret <= 0)
        {
            pMF->Rollback();
            ShowMessageBox(_T("Can not update document information"), MB_OK);
            return -1;
        }
        pMF->Commit();
        pMF->BeginTransaction();
        // Kiem tra doi tuong co the BHYT thi them vao.

        if (m_szObjectKey == _T("7"))
        {
            szHasCard = _T("N");
        }

        if ((szHasCard == _T("Y") && !m_szCardNo.IsEmpty()) ||
            m_nOldCardIdx > 0)
        {
            m_hms_cardTbl.SetValue(_T("hc_cardno"), m_szCardNo);
            m_hms_cardTbl.SetValue(_T("hc_docno"), m_nDocumentNo);
            m_hms_cardTbl.SetValue(_T("hc_idx"), m_nCardIdx);
            szSQL.Format(_T("HMS_CARD_UPDATE(%s) "), m_hms_cardTbl.FormatSQL());

            m_nCardIdx = str2long(pMF->ExecDML(szSQL));
            if (m_nCardIdx <= 0)
            {
                pMF->Rollback();
                ShowMessageBox(
                    _T("Không cập nhật được thông tin thẻ bảo hiểm."), MB_OK);
                return -1;
            }
            else
            {
                if (!m_szCardChange.IsEmpty())
                {
                    szEvent = _T("hms_card_edit");
                    szDesc.Format(
                        _T("[doc_no=%ld|patient_no=%ld|card_no=%s] %s"),
                        m_nDocumentNo, m_nPatientNo, m_szCardNo,
                        m_szCardChange);
                    pMF->SystemLog(szEvent, szDesc);
                    m_szCardChange.Empty();
                }
            }
        }

        if (m_szOldCardNo != m_szCardNo)
        {
            szSQL.Format(_T("SELECT count(*) FROM hms_doc WHERE ")
                         _T("hd_patientno=%ld and hd_cardno='%s' "),
                         m_nPatientNo, m_szOldCardNo);
            rs.ExecSQL(szSQL);
            if (rs.GetIntValue() <= 0)
            {
                szSQL.Format(_T("DELETE FROM hms_card WHERE hc_patientno=%ld ")
                             _T("and hc_cardno='%s' "),
                             m_nPatientNo, m_szOldCardNo);
                pMF->ExecSQL(szSQL);
            }
        }

        // Cap nhat thong tin phieu kham
        if (m_szExamStatus != _T("T"))
        {
            szSQL.Format(_T("SELECT count(*) FROM hms_fee_invoice WHERE ")
                         _T("hfe_docno=%ld and  hfe_type ='P' "),
                         m_nDocumentNo);
            rs.ExecSQL(szSQL);
            if (rs.GetIntValue() > 0)
            {
                pMF->Rollback();
                ShowMessageBox(_T("Can not update examination receipt"), MB_OK);
                return -1;
            }
            else
            {
                /*
                Trường hợp mới cấp thẻ , chưa đăng ký lượt khám
                */
                CString szStatus;
                szStatus = _T("O");
                if (pMF->CheckPermission(_T("01.30")))
                {
                    szWhere.Format(
                        _T(" WHERE he_docno=%ld AND he_receptidx=%d AND ")
                        _T("he_status in('O','P') "),
                        m_nDocumentNo, m_nReceptIdx);
                }
                else
                {
                    szWhere.Format(_T(" WHERE he_docno=%ld AND ")
                                   _T("he_receptidx=%d AND he_status in('O') "),
                                   m_nDocumentNo, m_nReceptIdx);
                }

                // szWhere.Format(_T(" WHERE he_docno=%ld AND he_receptidx=%d
                // AND he_status='%s' "), m_nDocumentNo, m_nReceptIdx,
                // szStatus);
                szSQL = m_hms_examTbl.GetUpdateSQL(
                    _T("he_createdby,he_createddate,he_docno,he_receptidx, ")
                    _T("he_hasfee"));
                szSQL += szWhere;
                ret = pMF->ExecSQL(szSQL);

                if (ret > 0)
                {
                    szSQL.Format(
                        _T("DELETE FROM hms_exam_pending WHERE hep_docno = ")
                        _T("%ld and hep_receptidx = %d and hep_pending = 'O'"),
                        pMF->m_nDocumentNo, pMF->m_nRefIndex);
                    pMF->ExecSQL(szSQL);
                    //_msg(_T("%s"),szSQL);
                }

                //_msg(_T("%s"),szWhere);
                // if (ret == 0)
                //{
                //	m_hms_examTbl.SetValue(_T("he_status"), _T("O"));
                //	szSQL = m_hms_examTbl.GetInsertSQL();
                //	ret = pMF->ExecSQL(szSQL);
                //}
            }
        }

        szEvent.Format(_T("Edit Patient Information"));
        if (m_szObjectKey != m_szOldObject)
            // doi tuong ko co the chuyen thanh bao hiem
            szDesc.Format(_T("[%s, %s, %s, %s, %s]->[%s, %s, %s, %s, %s]"),
                          m_szOldPatientName, m_szOldObject, m_szOldExamType,
                          m_szOldRoom, m_szOldCardNo, m_szPatientName,
                          m_szObjectKey, m_szExamTypeKey, m_szRoomKey,
                          m_szCardNo);
        // doi tuong co the chuyen thanh dich vu
        else
            szDesc.Format(_T("[%s, %s, %s, %s]->[%s, %s, %s, %s]"),
                          m_szOldPatientName, m_szOldObject, m_szOldExamType,
                          m_szOldRoom, m_szPatientName, m_szObjectKey,
                          m_szExamTypeKey, m_szRoomKey);
        pMF->SystemLog(szEvent, szDesc);
        m_szOldCardNo.Empty();
    }

    pMF->Commit();

    if (m_arWorkPlaces.GetCount() > 0)
    {
        WorkPlaceInfo wpi = m_arWorkPlaces[0];
        CString szSQL;
        szSQL.Format(_T("UPDATE hms_patient ")
                     _T(" SET hp_workplace = '%s', hp_workplaceid = '%s', ")
                     _T("hp_department = '%s', hp_type = 'E' ")
                     _T(" WHERE hp_patientno = %ld and hp_type <> 'V' "),
                     wpi.szWorkPlaceName, wpi.szWorkPlaceID, wpi.szDepartmentID,
                     m_nPatientNo);
        pMF->ExecSQL(szSQL);
        m_arWorkPlaces.RemoveAll();
    }
    if (m_b108Staff)
    {
        CString szSQL;
        szSQL.Format(_T("UPDATE hms_doc SET hd_bv108 ='BV108', hd_khoa='%s', ")
                     _T("hd_note_108_staff='%s' WHERE hd_docno = %ld"),
                     m_szKhoa, m_szNote108Staff, m_nDocumentNo);
        rs.ExecSQL(szSQL);
        pMF->ExecSQL(szSQL);
    }

    if (pMF->CheckPermission(_T("RM.100.1")))
    {
        CString szSQL;
        szSQL.Format(
            _T("UPDATE hms_patient SET hp_workplaceid ='%s', hp_type='V', ")
            _T("HP_DEPARTMENT='%s' WHERE hp_patientno = %ld"),
            m_szWorkingPlaceEXKey, m_szKhoa, m_nPatientNo);
        rs.ExecSQL(szSQL);
        pMF->ExecSQL(szSQL);
        //_msg(_T("%s"), szSQL);

        CString szSQL1;
        szSQL1.Format(_T("UPDATE hms_doc SET hd_khoa='%s', ")
                      _T("hd_note_108_staff='%s' WHERE hd_docno = %ld"),
                      m_szKhoa, m_szNote108Staff, m_nDocumentNo);
        rsl.ExecSQL(szSQL1);
        pMF->ExecSQL(szSQL1);
    }

    szSQL.Format(L"UPDATE person_information SET prov_id = %ld, vill_id=%ld "
                 L"WHERE idcardno='%s' ",
                 str2long(m_szProvillKey), str2long(m_szVillageKey), m_szIDNo);
    pMF->ExecSQL(szSQL);

    pMF->m_nDocumentNo = m_nDocumentNo;
    pMF->m_nRefIndex = m_nReceptIdx;
    pMF->m_nReceptNo = m_nReceptNo;
    pMF->m_nPatientNo = m_nPatientNo;
    pMF->m_szObject = m_szObjectKey;

    m_szOldCardNo = m_szCardNo;

    /*if (bAddDoc)
    {
        if (!m_szCardNo.IsEmpty() && m_szOffLine == _T("Y"))
        {

            CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
            CString tmpStr;
            m_hms_fee_depositTbl.SetValue(_T("hfe_type"), _T("A"));
            m_hms_fee_depositTbl.SetValue(_T("hfe_deptid"), pMF->m_szDept);
            m_hms_fee_depositTbl.SetValue(_T("hfe_patientno"), m_nPatientNo);
            m_hms_fee_depositTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);

            CString szSQL, szSerialNo;
            long nReceiptNo=1;
            CRecord rsx(&pMF->m_db);
            szSerialNo = pMF->GetCurrentUser();
            szSQL.Format(_T("SELECT hfc_receiptno FROM hms_fee_control WHERE
    hfc_userid='%s' "), szSerialNo); rsx.ExecSQL(szSQL); nReceiptNo =
    rsx.GetIntValue();

            m_hms_fee_depositTbl.SetValue(_T("hfe_serialno"), szSerialNo);
            m_hms_fee_depositTbl.SetValue(_T("hfe_receiptno"), nReceptNo);
            m_hms_fee_depositTbl.SetValue(_T("hfe_staff"),
    pMF->GetCurrentUser()); m_hms_fee_depositTbl.SetValue(_T("hfe_date"),
    pMF->GetSysDateTime()); m_hms_fee_depositTbl.SetValue(_T("hfe_desc"),
    _T("5")); m_hms_fee_depositTbl.SetValue(_T("hfe_amount"),
    pMF->m_nDepositAmount); m_hms_fee_depositTbl.SetValue(_T("hfe_org_id"),
    _T("EM"));

            szSQL.Format(_T("HMS_FEE_DEPOSIT_INSERT(%s) "),
    m_hms_fee_depositTbl.FormatSQL()); long nInvoiceNo =
    str2long(pMF->ExecDML(szSQL)); if(nInvoiceNo <= 0)
            {
                ShowMessageBox(_T("Cannot create deposit"));
            }
        }
    }*/
    if (m_nCustomerId > 0 && GetMode() == VM_ADDPAT)
    {
        szSQL.Format(_T("UPDATE hms_birth_package SET hbp_isreg = 'Y', ")
                     _T("hbp_refno = %ld WHERE hbp_id = %ld"),
                     m_nDocumentNo, m_nCustomerId);
        pMF->ExecSQL(szSQL);
    }

    m_szSheetNo.Format(_T("%s.%d"), m_szRoomKey, m_nReceptNo);
    SetMode(VM_VIEW);

    OnExamListLoadData();

    if (pMF->CheckPermission(_T("RM.100.1")))
    {
        CHMSCovid19VaccinInforDialog dlg(this);

        if (dlg.DoModal() == IDOK)
        {
            m_wndSave.SetFocus();
        }

        SetMode(VM_VIEW);
        return 0;
    }

    if (pMF->m_szAutoPrint == _T("Y"))
    {
        if (pMF->m_IsC11)
            PrintReceipt(false, true);
        else if (pMF->m_IsC13)
        {
            PrintReceipt(false, false);
            OnPrintTriageC13(false, false);
        }
        else
        {
            PrintReceipt(false, false);
        }
    }

    // Kiem tra  tu dong tao phieu tam gui TYC
    long nInvoiceNo = 0;
    double amount = str2double(m_wndExamType.GetCurrent(2));
    CString szIsHealthExam = m_wndExamType.GetCurrent(7);

    if (bAddDoc && pMF->m_szDept == _T("TYC") && amount > 0 &&
        szIsHealthExam != _T("Y"))
    {
        szSQL.Format(_T("HMS_FEE_CREATE_DEPOSIT_C14(%ld, %ld, '%s', %ld) "),
                     m_nDocumentNo, m_nReceptIdx, pMF->GetCurrentUser(),
                     m_nDepositLimit);

        nInvoiceNo = str2long(pMF->ExecDML(szSQL));
        //_msg(_T("%s"), szSQL);
        if (nInvoiceNo <= 0)
        {
            ShowMessageBox(_T("Không tạo lập được phiếu tạm gửi."));
        }
        else
        {
            PrintDeposit(nInvoiceNo);
        }
    }
    // Add thêm khu chất lượng cao

    if (bAddDoc && pMF->m_szDept == _T("C11BCLC") && amount > 0 &&
        szIsHealthExam != _T("Y"))
    {
        szSQL.Format(_T("HMS_FEE_CREATE_DEPOSIT_C11BCLC(%ld, %ld, '%s', %ld) "),
                     m_nDocumentNo, m_nReceptIdx, pMF->GetCurrentUser(),
                     m_nDepositLimit);

        nInvoiceNo = str2long(pMF->ExecDML(szSQL));
        //_msg(_T("%s"), szSQL);
        if (nInvoiceNo <= 0)
        {
            ShowMessageBox(_T("Không tạo lập được phiếu tạm gửi."));
        }
        else
        {
            PrintDeposit(nInvoiceNo);
        }
    }
    // Add thêm khu chất lượng cao A16

    if (bAddDoc && pMF->m_szDept == _T("KB_A16") && amount > 0 &&
        szIsHealthExam != _T("Y"))
    {
        szSQL.Format(_T("HMS_FEE_CREATE_DEPOSIT_C11BCLC(%ld, %ld, '%s', %ld) "),
                     m_nDocumentNo, m_nReceptIdx, pMF->GetCurrentUser(),
                     m_nDepositLimit);

        nInvoiceNo = str2long(pMF->ExecDML(szSQL));
        //_msg(_T("%s"), szSQL);
        if (nInvoiceNo <= 0)
        {
            ShowMessageBox(_T("Không tạo lập được phiếu tạm gửi."));
        }
        else
        {
            PrintDeposit(nInvoiceNo);
        }
    }

    if (bAddDoc && pMF->m_szDept == _T("AB") && amount > 0 &&
        szIsHealthExam != _T("Y"))
    {
        szSQL.Format(
            _T("SELECT max(hrd_deposit_amount) FROM hms_registration_deposit ")
            _T("WHERE hrd_deptid='%s' AND hrd_itemid='%s' "),
            pMF->m_szDept, m_szExamTypeKey);
        CRecord rs(&pMF->m_db);
        rs.ExecSQL(szSQL);
        amount = rs.GetDoubleValue();
        if (amount > 0)
        {
            szSQL.Format(_T("HMS_FEE_CREATE_DEPOSIT_AB(%ld, %ld, '%s') "),
                         m_nDocumentNo, m_nReceptIdx, pMF->GetCurrentUser());

            nInvoiceNo = str2long(pMF->ExecDML(szSQL));
            if (nInvoiceNo <= 0)
            {
                ShowMessageBox(_T("Không tạo lập được phiếu tạm gửi."));
            }
            else
            {
                PrintDeposit(nInvoiceNo);
            }
        }
    }

    // Bật lên màn hình tìm bệnh nhân để map thông tin người nhà

    szRoomType = m_wndRoom.GetCurrent(2);

    // if(bAddDoc && szRoomType == _T("XNNN"))
    if (szRoomType == _T("XNNN") && (pMF->CheckPermission(_T("RM.100.5"))))
    {

        szSQL.Format(_T("UPDATE_RELATIVE_INFOR(%ld, %ld, '%s', '%s', ")
                     _T("TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), %ld) "),
                     m_nFindDocument, m_nDocumentNo, pMF->GetCurrentUser(),
                     m_szDescription, pMF->GetSysDateTime(), m_ntreattime);
        int ret = str2int(pMF->ExecDML(szSQL));
        // AfxMessageBox(szSQL);

        if (ret <= 0)
        {
            ShowMessageBox(
                _T("Không cập nhật được thông tin người nhà bệnh nhân"));
        }
        else
        {
        }
    }
    // Thông tin bệnh nhân khám tại bệnh viện Hữu Nghị
    if (szRoomType == _T("BVHN"))
    {
        szSQL.Format(_T("UPDATE_ISBVHN_PATIENT(%ld) "), m_nDocumentNo);
        int ret = str2int(pMF->ExecDML(szSQL));
        // AfxMessageBox(szSQL);
        //_msg(_T("%s"), szSQL);

        if (ret <= 0)
        {
            ShowMessageBox(_T("Không cập nhật được thông tin bệnh nhân Bệnh ")
                           _T("Viện Hữu Nghị"));
        }
        else
        {
        }
    }
    // Khi tiếp đón mới thì lưu luôn thông tin ghi chú
    if (bAddDoc && !m_szPatientNote.IsEmpty())
    {
        szSQL.Format(_T("HMS_DOC_NOTE_CREATE(%ld, '%s', '%s') "), m_nDocumentNo,
                     m_szPatientNote, pMF->GetCurrentUser());
        int ret = str2int(pMF->ExecDML(szSQL));

        if (ret <= 0)
        {
            ShowMessageBox(_T("Không cập nhật được thông tin ghi chú"));
        }
        else
        {
        }
    }
    // Bệnh nhân C1.3 khi chuyển từ dịch vụ sang các đối tượng khác -> lưu thêm
    // thông tin để tính giờ của cấp cứu ()
    // https://github.com/vimesdev/BV108/issues/1915
    if (nMode == VM_EDIT)
    {

        if (m_szOldObject == _T("7") && m_szObjectKey != _T("7"))
        {
            szSQL.Format(_T("HMS_IS_CHANGE_SER_OBJ(%ld, '%s') "), m_nDocumentNo,
                         pMF->GetCurrentUser());
            int ret = str2int(pMF->ExecDML(szSQL));
            if (ret <= 0)
            {
                ShowMessageBox(_T("Không cập nhật được thông tin đổi đối ")
                               _T("tượng từ dịch vụ -> đối tượng khác"));
            }
            else
            {
            }
        }
    }
    // if(nMode == VM_ADDPAT || nMode == VM_ADDDOC)
    //{
    //	//Cập nhật lại 5 năm trong thẻ BH && % hưởng khi sửa lại thông tin thẻ//
    //		szSQL.Format(_T("HMS_CARD_UPDATE_5YEAR(%ld, '%s') "), m_nDocumentNo,
    //m_szCardNo); 		int ret = str2int(pMF->ExecDML(szSQL)); 		_msg(_T("%s"),
    //szSQL);

    //		if (ret > 0)
    //		{
    //
    //		}
    //		else
    //		{
    //
    //		}
    //}

    OnRoomListLoadData();
    m_wndCardNoFind.SetFocus();

    if (pMF->m_bParaclinical)
    {
        pMF->m_wndParaclinicalOrder.RefreshData();
    }
    if (bAddDoc)
    {
        //	szSQL.Format(_T("Update hms_smartcard set hsc_docno = %ld where
        //hsc_patientno = %ld"), m_nDocumentNo, m_nPatientNo);
        //	pMF->ExecSQL(szSQL);
    }

    // hayhv: Kiểm tra nếu nếu thay đổi đối tượng từ BH sang dịch vụ thì xóa thẻ
    // https://github.com/vimesdev/BV108/issues/11
    if (nMode == VM_EDIT)
    {
        pMF->UpdateObject(m_nPatientNo, m_nDocumentNo, str2int(m_szOldObject),
                          m_szOldCardNo, str2int(m_szObjectKey), m_szCardNo);
    }

    return ret;
}
int CHMSRegistration::OnSaveHMSRegistration2()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    int nMode = GetMode();

    if (nMode != VM_ADDPAT && nMode != VM_ADDDOC && nMode != VM_ADDEXAM &&
        nMode != VM_EDIT)
        return -1;

    // m_wndWorkingPlace.GetWindowText(m_szWorkingPlace);

    bool bAddPat = false, bAddDoc = false, bAddExam = false;
    int nCardIdx = 0;
    CString szWhere;
    CString szSQL, insCardSQL;
    CRecord rs(&pMF->m_db);

    m_szObjectKey.Trim();

    if (!IsValidateData())
    {
        return -1;
    }

    if (m_szObjectKey.IsEmpty())
    {
        m_wndObject.SetFocus();
        return -1;
    }

    CString szObjType = m_wndObject.GetCurrent(3);
    if ((szObjType == _T("I") || szObjType == _T("C")) && m_szCardNo.IsEmpty())
    {
        int nMsg =
            ShowMessageBox(_T("Bệnh nhân chưa được cấp thẻ BHYT."), MB_OK);
        // if(nMsg == IDNO)
        return 0;
    }

    // Kiem tra the BHYT da duoc su dung boi benh nhan nao chua
    if (!m_szCardNo.IsEmpty())
    {

        szSQL.Format(
            _T("SELECT * FROM hms_card WHERE upper(hc_cardno)=upper('%s') "),
            m_szCardNo);
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            long nPatientNo;
            rs.GetValue(_T("hc_patientno"), nPatientNo);
            if (nPatientNo != m_nPatientNo)
            {
                CString szMsg;
                szMsg.Format(_T("This card is using by other patient.[%ld]"),
                             nPatientNo);
                ShowMessageBox(szMsg, MB_ICONWARNING | MB_OK);
                return -1;
            }
            rs.GetValue(_T("hc_idx"), nCardIdx);
        }
    }

    pMF->m_db.SetDebug(true);

    pMF->BeginTransaction();

    if (nMode == VM_ADDPAT)
    {
        bAddPat = true;
        bAddDoc = true;
        bAddExam = true;
    }
    else if (nMode == VM_ADDDOC)
    {
        bAddDoc = true;
        bAddExam = true;
    }
    else if (nMode == VM_ADDEXAM)
    {
        bAddExam = true;
    }

    if (bAddPat)
    {
        m_hms_patientTbl.SetValue(_T("hp_patientno"), _T(":patientno"));
        szSQL = m_hms_patientTbl.GetInsertSQL();
        return 0;
    }

    if (bAddDoc)
    {
        szSQL.Format(
            _T("SELECT nextseq('hms_doc_hd_docno_seq') as docno FROM DUAL"));
        rs.ExecSQL(szSQL);
        m_nDocumentNo = rs.GetIntValue();
    }

    m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNo);

    m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo);
    m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocumentNo);
    m_hms_examTbl.SetValue(_T("he_patientno"), m_nPatientNo);
    m_hms_examTbl.SetValue(_T("he_docno"), m_nDocumentNo);
    m_hms_cardTbl.SetValue(_T("hc_patientno"), m_nPatientNo);

    if ((bAddExam) || nMode == VM_EDIT)
    {
        if (bAddExam)
            m_szCurRoom.Empty();
        if (m_szCurRoom != m_szRoomKey)
        {
            m_nReceptNo = GetMaxReceptNoBySequance();
        }

        if (bAddExam)
        {
            m_szExamStatus = _T("O");
        }
        m_hms_examTbl.SetValue(_T("he_receptno"), m_nReceptNo);
        m_hms_examTbl.SetValue(_T("he_receptidx"), m_nReceptIdx);
        m_hms_examTbl.SetValue(_T("he_status"), m_szExamStatus);
    }

    // Neu khong co the thi them the vao
    // Truong hop co the BHYT
    if (!m_szCardNo.IsEmpty())
    {
        // Neu them moi benh nhan thi them moi the BHYT
        m_hms_cardTbl.SetValue(_T("hc_patientno"), m_nPatientNo);
        if (bAddPat)
        {
            m_nCardIdx = 1;
            m_hms_cardTbl.SetValue(_T("hc_idx"), m_nCardIdx);
            insCardSQL = m_hms_cardTbl.GetInsertSQL();
        }
        else
        {
            szSQL.Format(
                _T("SELECT hc_idx FROM hms_card WHERE hc_patientno=%ld and ")
                _T("upper(hc_cardno)=upper('%s')"),
                m_nPatientNo, m_szCardNo);
            rs.ExecSQL(szSQL);
            if (rs.GetIntValue() > 0)
            {
                rs.GetValue(_T("hc_idx"), m_nCardIdx);
                m_hms_cardTbl.SetValue(_T("hc_idx"), m_nCardIdx);
                insCardSQL = m_hms_cardTbl.GetUpdateSQL(
                    _T("hc_patientno,hc_cardno,hc_idx"));
                insCardSQL.AppendFormat(
                    _T(" WHERE hc_patientno=%ld and hc_cardno='%s' "),
                    m_nPatientNo, m_szCardNo);
            }
            else
            {
                szSQL.Format(_T("SELECT coalesce(max(hc_idx), 0)+1 FROM ")
                             _T("hms_card WHERE hc_patientno=%ld"),
                             m_nPatientNo);
                rs.ExecSQL(szSQL);
                m_nCardIdx = rs.GetIntValue();
                m_hms_cardTbl.SetValue(_T("hc_idx"), m_nCardIdx);
                insCardSQL = m_hms_cardTbl.GetInsertSQL();
            }
        }
    }
    else
    {
        m_nCardIdx = 0;
        m_nDisrate = 0;
        m_szOffLine = _T("N");

        CString szObjectType = m_wndObject.GetCurrent(3);
        if (szObjectType == _T("D") || szObjectType == _T("C"))
            m_nDisrate = ToInt(m_wndObject.GetCurrent(4));
        /*	if(m_szOffLine == _T("Y") && pMF->m_nInsOffLinePayment > 0)
                    m_nDisrate = pMF->m_nInsOffLinePayment;*/
        //_msg(_T("%s, %d"), m_szOffLine, m_nDisrate);
        m_hms_docTbl.SetValue(_T("hd_disrate"), m_nDisrate);
        m_hms_docTbl.SetValue(_T("hd_insline"), m_szOffLine);
    }
    m_hms_docTbl.SetValue(_T("hd_cardidx"), m_nCardIdx);
    m_hms_docTbl.SetValue(_T("hd_cardno"), m_szCardNo);
    m_hms_docTbl.SetValue(_T("hd_insregdate"), m_szExamDate);

    if (!bAddPat && m_szCardNo != m_szOldCardNo)
    {
        // Kiem tra neu the cu thi xoa di
        szSQL.Format(_T("SELECT count(*) FROM hms_doc WHERE hd_patientno=%ld ")
                     _T("and upper(hd_cardno)=upper('%s') and hd_docno<>%ld "),
                     m_nPatientNo, m_szOldCardNo, m_nDocumentNo);
        rs.ExecSQL(szSQL);
        if (rs.GetIntValue() <= 0)
        {
            szSQL.Format(_T("DELETE FROM hms_card WHERE hc_patientno=%ld and ")
                         _T("upper(hc_cardno)=upper('%s') "),
                         m_nPatientNo, m_szOldCardNo);
            pMF->ExecSQL(szSQL);
        }
    }
    // Kiem tra neu tao phieu kham moi
    // Neu da ton tai phieu kham tai phong duoc chi ding trong ngay thi ko cho
    // tao nua

    if (bAddExam)
    {
        szSQL.Format(_T("SELECT Count(*) ")
                     _T("FROM ")
                     _T("	hms_exam ")
                     _T("WHERE ")
                     _T("	he_docno=%ld ")
                     _T("	AND CAST(he_examdate AS DATE)= TO_DATE('%s', ")
                     _T("'YYYY-MM-DD') ")
                     _T("	AND he_roomid=%ld "),
                     m_nDocumentNo, m_szExamDate.Left(10), ToLong(m_szRoomKey));
        rs.ExecSQL(szSQL);
        if (rs.GetIntValue() > 0)
        {
            ShowMessageBox(
                _T("The Examination sheet is existing in the room selected"),
                MB_OK | MB_ICONWARNING);
            pMF->Rollback();
            return -1;
        }
    }

    int ret = -1;

    if (bAddExam)
    {
        // Them benh nhan moi
        if (bAddPat)
        {
            szSQL = m_hms_patientTbl.GetInsertSQL();
            _flog(_T("%s"), szSQL);
            ret = pMF->ExecSQL(szSQL);
            if (ret <= 0)
            {
                pMF->Rollback();
                ShowMessageBox(_T("Can not add new patient information"),
                               MB_OK);
                return -1;
            }
        }
        // Tao ho so kham moi
        if (bAddDoc)
        {
            szSQL = m_hms_docTbl.GetInsertSQL();
            _flog(_T("%s"), szSQL);

            ret = pMF->ExecSQL(szSQL);
            if (ret <= 0)
            {
                pMF->Rollback();
                ShowMessageBox(_T("Can not add new document information"),
                               MB_OK);
                return -1;
            }
            pMF->ExecSQL(insCardSQL);
            _flog(_T("%s"), insCardSQL);

            // Kiem tra neu co the thi them vao
            /*
                        if(!m_szCardNo.IsEmpty())
                        {
                            szSQL.Format(_T("SELECT count(*) FROM hms_card WHERE
               hc_patientno=%ld AND hc_cardno='%s' "), m_nPatientNo,
               m_szCardNo); CRecord rs(&pMF->m_db); rs.ExecSQL(szSQL);
                            if(rs.GetIntValue() <= 0)
                            {
                                m_hms_cardTbl.SetValue(_T("hc_active"),
               _T("Y"));

                                if(nCardIdx > 0)
                                    m_nCardIdx = nCardIdx;
                                else
                                    m_nCardIdx++;

                                m_hms_cardTbl.SetValue(_T("hc_idx"),
               m_nCardIdx); szSQL = m_hms_cardTbl.GetInsertSQL(); ret =
               pMF->ExecSQL(szSQL); if(ret <= 0) { pMF->Rollback();
                                    ShowMessageBox(_T("Can not add new card
               information"), MB_OK); return -1;
                                }
                                szSQL.Format(_T("UPDATE hms_doc SET
               hd_insregdate='%s',hd_cardidx=%d,hd_cardno='%s' where
               hd_docno=%ld"),m_szExamDate, m_nCardIdx, m_szCardNo,
               m_nDocumentNo); pMF->ExecSQL(szSQL);
                            }
                        }
            */
        }

        szSQL = m_hms_examTbl.GetInsertSQL();

        ret = pMF->ExecSQL(szSQL);
        if (ret <= 0)
        {
            pMF->Rollback();
            ShowMessageBox(_T("Can not add new examination receipt"), MB_OK);
            return -1;
        }

        szSQL.Format(
            _T("SELECT max(he_receptidx) FROM hms_exam WHERE he_docno = %ld"),
            m_nDocumentNo);
        rs.ExecSQL(szSQL);
        m_nReceptIdx = rs.GetIntValue();

        int nMultiroom = ToInt(m_wndExamType.GetCurrent(5));
        if (nMultiroom == 1)
        {
            for (int i = 0; i < m_arrayRoom.GetCount(); i++)
            {
                int nRoom = m_arrayRoom[i];
                if (nRoom != ToInt(m_szRoomKey))
                {
                    szSQL.Format(
                        _T("SELECT count(*) ")
                        _T("FROM hms_exam  ")
                        _T("WHERE he_docno=%ld and trim(he_deptid)='%s' and ")
                        _T("he_roomid=%d AND CAST(he_examdate AS DATE) = ")
                        _T("TO_DATE('%s','YYYY-MM-DD') "),
                        m_nDocumentNo, m_szDept, nRoom, m_szExamDate.Left(10));
                    rs.ExecSQL(szSQL);
                    if (rs.GetIntValue() <= 0)
                    {
                        m_nReceptNo = GetMaxReceptNoBySequance();

                        m_hms_examTbl.SetValue(_T("he_receptno"), m_nReceptNo);
                        m_hms_examTbl.SetValue(_T("he_hasfee"), _T("Y"));
                        m_hms_examTbl.SetValue(_T("he_roomid"), nRoom);
                        m_hms_examTbl.SetValue(_T("he_hasfee"), _T("N"));
                        szSQL = m_hms_examTbl.GetInsertSQL();
                        ret = pMF->ExecSQL(szSQL);
                        if (ret <= 0)
                        {
                        }
                    }
                }
            }
            m_arrayRoom.RemoveAll();
        }
        // Kiem tra neu la doi tuong dich vu va tu dong tao hoa don thu phi kham
        CString tmpStr;
        tmpStr = m_wndObject.GetCurrent(3);
    }
    else if (nMode == VM_EDIT)
    {
        // Cap nhat thong  tin benh nhan
        szWhere.Format(_T(" WHERE hp_patientno=%ld "), m_nPatientNo);
        szSQL = m_hms_patientTbl.GetUpdateSQL(
            _T("hp_createdby,hp_createddate,hp_patientno"));
        szSQL += szWhere;
        ret = pMF->ExecSQL(szSQL);
        if (ret <= 0)
        {
            pMF->Rollback();
            ShowMessageBox(_T("Can not update patient information"), MB_OK);
            return -1;
        }
        // Cap nhat thong tin ho so kham va dieu tri
        szWhere.Format(_T(" WHERE hd_docno=%ld "), m_nDocumentNo);

        szSQL = m_hms_docTbl.GetUpdateSQL(
            _T("hd_createdby,hd_createddate,hd_docno,hd_patientno,hd_status,")
            _T("hd_xobject,hd_xcardno,hd_xissuedate,hd_xissueplace"));
        szSQL += szWhere;

        ret = pMF->ExecSQL(szSQL);
        if (ret <= 0)
        {
            pMF->Rollback();
            ShowMessageBox(_T("Can not update document information"), MB_OK);
            return -1;
        }

        // Cap nhat thong tin phieu kham

        szWhere.Format(
            _T(" WHERE he_docno=%ld AND he_receptidx=%d AND he_status='O' "),
            m_nDocumentNo, m_nReceptIdx);
        szSQL = m_hms_examTbl.GetUpdateSQL(
            _T("he_createdby,he_createddate,he_docno,he_receptidx,he_hasfee"));
        szSQL += szWhere;
        ret = pMF->ExecSQL(szSQL);
        //_msg(_T("%s"), szSQL);
        if (ret <= 0)
        {
            pMF->Rollback();
            ShowMessageBox(_T("Can not update examination receipt"), MB_OK);
            return -1;
        }
        /*else
        {
        szSQL.Format(_T("DELETE FROM hms_exam_pending WHERE hep_docno = %ld and
        hep_receptidx = %d and hep_pending = 'O'"), pMF->m_nDocumentNo,
        pMF->m_nRefIndex); pMF->ExecSQL(szSQL);
        }*/
        pMF->ExecSQL(insCardSQL);

        /*
        //Thong tin ve the BHYT
                if(!m_szCardNo.IsEmpty()){
                    szSQL.Format(_T(" SELECT ") \
                                _T(" 	Count(*)") \
                                _T(" FROM") \
                                _T(" 	hms_card") \
                                _T(" WHERE") \
                                _T(" 	hc_cardno='%s' ") \
                                _T(" 	AND hc_patientno=%ld"), m_szCardNo,
        m_nPatientNo); rs.ExecSQL(szSQL); if(rs.GetIntValue() > 0){ szSQL =
        m_hms_cardTbl.GetUpdateSQL(_T("hc_createdby,hc_createddate,hc_cardno,hc_patientno"));
                        szWhere.Format(_T(" WHERE hc_cardno='%s' AND
        hc_patientno=%ld"), m_szCardNo, m_nPatientNo); szSQL += szWhere;
                    }
                    else
                    {
                        if(nCardIdx > 0)
                                m_nCardIdx = nCardIdx;
                        else
                        {
                            szSQL.Format(_T("SELECT count(*) FROM hms_card WHERE
        hc_patientno=%ld "), m_nPatientNo); m_nCardIdx=rs.GetIntValue() +1;
                        }

                        m_hms_cardTbl.SetValue(_T("hc_idx"), m_nCardIdx);
                        szSQL = m_hms_cardTbl.GetInsertSQL();

                    }
        //_fmsg(_T("%s"), szSQL);
                    ret = pMF->ExecSQL(szSQL);
                    if(ret <= 0)
                    {
                        pMF->Rollback();
                        ShowMessageBox(_T("Can not update card information"),
        MB_OK); return -1;
                    }
                    szSQL.Format(_T("UPDATE hms_doc SET hd_insregdate='%s',
        hd_cardidx=%d where hd_docno=%ld"), m_szExamDate, m_nCardIdx,
        m_nDocumentNo); pMF->ExecSQL(szSQL);
                }
                else{
                    szSQL.Format(_T("SELECT Count(*) FROM hms_doc WHERE
        hd_patientno=%ld AND length(hd_cardno) > 0 "), m_nPatientNo);
                    rs.ExecSQL(szSQL);
                    if(rs.GetIntValue() <= 0){
                        szSQL.Format(_T("DELETE FROM hms_card WHERE
        hc_patientno=%ld"), m_nPatientNo); pMF->ExecSQL(szSQL);
                    }
                }
        */
    }
    pMF->Commit();
    //	szSQL.Format(_T("select hms_fee_create('%s', %ld)"),
    //pMF->GetCurrentUser(), m_nDocumentNo); 	pMF->ExecSQL(szSQL);

    SetMode(VM_VIEW);

    pMF->m_nDocumentNo = m_nDocumentNo;
    pMF->m_nRefIndex = m_nReceptIdx;
    pMF->m_nReceptNo = m_nReceptNo;
    pMF->m_nPatientNo = m_nPatientNo;
    m_szOldCardNo = m_szCardNo;

    OnExamListLoadData();

    if (pMF->m_szAutoPrint == _T("Y"))
    {
        if (pMF->m_IsC11)
            PrintReceipt(false, true);
        else
            PrintReceipt(false, false);
    }

    // pMF->m_wndExaminationQueue.OnPatientListLoadData();
    m_szSheetNo.Format(_T("%s.%d"), m_szRoomKey, m_nReceptNo);

    if (GetMode() == VM_EDIT)
    {
        CString szDesc;
        szDesc.Format(_T("[%ld] %s"), m_nDocumentNo, m_szPatientName);
        pMF->SystemLog(_T("Sua thong tin benh nhan"), szDesc);
    }

    // m_szWorkingPlaceKey = m_szWorkingPlace;

    OnRoomListLoadData();

    m_wndCardNoFind.SetFocus();
    return ret;
}

int CHMSRegistration::OnCancelHMSRegistration()
{
    if (GetMode() == VM_ADDPAT)
    {
        SetMode(VM_NONE);
    }

    else
    {
        GetDataToScreen();
    }
    return 0;
}

int CHMSRegistration::OnAddNewDocument()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString tmpStr, szMsg, szSQL, szOutpatient;

    UpdateData(TRUE);

    if (m_nPatientNo <= 0)
        return -1;
    // Reset lại biến ghi chú
    m_szPatientNote.Empty();

    if (pMF->GetObjectType() == _T("I") && m_IsInsExpired)
    {
        ShowMessageBox(
            _T("Thẻ BHYT đã hết hạn. Không thể tạo hồ sơ khám mới."));
        //		return -1;
    }

    // Kiem tra benh nhan co the BHYT trong ngay khong duoc phep tao moi ho so.
    CString szDocno;
    if (!m_szCardNo.IsEmpty())
    {
        int ret = pMF->IsPatientInsuranceDaily(m_szCardNo);
        // if (ret > 0)
        if (ret > 0 && (pMF->GetProp(_T("hms_a11_dept")) != _T("Y")))
        {
            if (ret == 1)
            {
                szSQL.Format(_T("  SELECT hd_docno as docno ")
                             _T("	FROM hms_doc ")
                             _T("	WHERE hd_patientno      = %ld ")
                             _T("	AND hd_cardno           = '%s' ")
                             _T("	AND TRUNC(hd_admitdate) = TRUNC(sysdate) "),
                             m_nPatientNo, m_szCardNo);
                rs.ExecSQL(szSQL);
                //_msg(_T("%s"), szSQL);
                tmpStr.Format(_T("Bệnh nhân đã được khám trong ngày [ "));
                while (!rs.IsEOF())
                {
                    rs.GetValue(_T("docno"), szDocno);
                    tmpStr.AppendFormat(_T(" SHS: %s "), szDocno);
                    rs.MoveNext();
                }
                tmpStr.AppendFormat(_T(" ].Không cho phép tạo hồ sơ khám mới, ")
                                    _T("vui lòng liên hệ KHTH"));
                ShowMessageBox(tmpStr, MB_OK | MB_ICONWARNING);
            }
            if (ret == 2)
            {
                szSQL.Format(_T(" SELECT hd_docno as docno ")
                             _T("	FROM hms_doc ")
                             _T(" LEFT JOIN hms_fee_invoice ")
                             _T(" ON(hfe_docno        =hd_docno) ")
                             _T(" WHERE hd_patientno  = %ld ")
                             _T(" AND TRUNC(hfe_date) = TRUNC(sysdate) ")
                             _T(" AND hfe_status     IN('P','R') ")
                             _T(" AND hd_cardno ='%s' "),
                             m_nPatientNo, m_szCardNo);
                rs.ExecSQL(szSQL);
                //_msg(_T("%s"), szSQL);
                tmpStr.Format(_T("Bệnh nhân đã được thanh toán hoặc xác nhận ")
                              _T("phí trong ngày [ "));
                while (!rs.IsEOF())
                {
                    rs.GetValue(_T("docno"), szDocno);
                    tmpStr.AppendFormat(_T(" SHS: %s "), szDocno);
                    rs.MoveNext();
                }
                tmpStr.AppendFormat(_T(" ].Không cho phép tạo hồ sơ khám mới, ")
                                    _T("vui lòng liên hệ KHTH"));

                ShowMessageBox(tmpStr, MB_OK | MB_ICONWARNING);
            }
            if (ret == 3)
            {
                szSQL.Format(_T(" SELECT hd_docno as docno ")
                             _T("	FROM hms_doc ")
                             _T(" WHERE hd_patientno  = %ld ")
                             _T(" AND NVL(HDF_ACCEPTEDFEE, 'N')  IN('N') ")
                             _T(" AND hd_cardno ='%s' and hd_docno > 20000000 ")
                             _T("AND hd_docno in (select he_docno from ")
                             _T("hms_exam where he_patientno=%ld)"),
                             m_nPatientNo, m_szCardNo, m_nPatientNo);
                rs.ExecSQL(szSQL);
                //_msg(_T("%s"), szSQL);
                tmpStr.Format(_T("Bệnh nhân chưa được thanh toán [ "));
                while (!rs.IsEOF())
                {
                    rs.GetValue(_T("docno"), szDocno);
                    tmpStr.AppendFormat(_T(" SHS: %s "), szDocno);
                    rs.MoveNext();
                }
                tmpStr.AppendFormat(_T(" ].Không cho phép tạo hồ sơ khám mới, ")
                                    _T("vui lòng liên hệ KHTH"));

                ShowMessageBox(tmpStr, MB_OK | MB_ICONWARNING);
            }
            if (ret == 4)
            {
                szSQL.Format(
                    _T(" SELECT hd_docno as docno ")
                    _T("	FROM hms_doc ")
                    _T(" LEFT JOIN hms_fee_invoice ")
                    _T(" ON(hfe_docno        =hd_docno) ")
                    _T(" WHERE hd_patientno  = %ld ")
                    _T(" AND NVL(hfe_status,'N') not in ('P','Y','C') AND ")
                    _T("hd_docno in (select he_docno from hms_exam where ")
                    _T("he_patientno=%ld )")
                    _T(" and (select count(*) from hms_fee where hfe_docno = ")
                    _T("hd_docno and hfe_status ='C') = 0")
                    _T(" AND hd_cardno ='%s' "),
                    m_nPatientNo, m_nPatientNo, m_szCardNo);
                rs.ExecSQL(szSQL);
                //_msg(_T("%s"), szSQL);
                tmpStr.Format(_T("Bệnh nhân chưa được thanh toán [ "));
                while (!rs.IsEOF())
                {
                    rs.GetValue(_T("docno"), szDocno);
                    tmpStr.AppendFormat(_T(" SHS: %s "), szDocno);
                    rs.MoveNext();
                }
                tmpStr.AppendFormat(_T(" ].Không cho phép tạo hồ sơ khám mới, ")
                                    _T("vui lòng liên hệ KHTH"));

                ShowMessageBox(tmpStr, MB_OK | MB_ICONWARNING);
            }

            return -1;
        }
    }

    if (m_nDocumentNo > 0)
    {
        if (m_szDocStatus != _T("T"))
        {
            int ret =
                ShowMessageBox(_T("This document is opening. Do you want to ")
                               _T("create new document"),
                               MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2);
            if (ret == IDNO)
                return -1;
            szSQL.Format(_T("hms_doc_close(%ld) "), m_nDocumentNo);
            ret = str2int(pMF->ExecDML(szSQL));
        }

        // Kiem tra ho so co dang dieu tri ngoai tru khong. Neu dang dieu tri
        // ngoai tru, khong cho tao ho so moi.
        szSQL.Format(_T("SELECT count(*) FROM hms_outpatient WHERE ")
                     _T("hop_docno=%ld AND hop_status ='O' "),
                     pMF->m_nDocumentNo);
        rs.ExecSQL(szSQL);
        if (rs.GetIntValue() > 0)
        {
            //		ShowMessageBox(_T("This patient is out treatment. Unable to
            //create new document"), MB_OK|MB_ICONWARNING); 		return -1;
        }

        // Kiem tra benh nhan co dang dieu tri noi tru khong. (True, False) benh
        // nhan dang dieu tri

        // ngay 02/08 sua lai phai truyen vao la patientno, neu truyen vao la
        // docno thi sai bet
        if (pMF->IsTreatmentTerminate(m_nPatientNo, szOutpatient) == true)
        {
            /*if (szOutpatient != _T("Y"))
            {*/
            TranslateString(_T("This document is treatment [%s]. Unable to ")
                            _T("create new document"),
                            tmpStr);
            szMsg.Format(tmpStr, pMF->m_szDeptName);
            if (pMF->GetCurrentDepartmentID() == _T("C1.3"))
            {
                int retx = ShowMessageBox(szMsg, MB_YESNO | MB_ICONQUESTION |
                                                     MB_DEFBUTTON2);
                if (retx == IDNO)
                    return -1;
            }
            else
            {
                ShowMessageBox(szMsg, MB_OK | MB_ICONWARNING);
                return -1;
            }

            //	}
        }
    }
    SetMode(VM_ADDDOC);
    if (!m_szCardNo.IsEmpty())
    {
        m_nDisrate = m_sCardInfo.discount;
    }
    // Thêm đoạn check
    if (pMF->GetObjectType() == _T("I") &&
        m_szCardNo.Right(5) != pMF->m_CompanyInfo.sc_id)
    {
        m_szOffLine = _T("N");
        m_szHospitalKey.Empty();
        // m_szICDKey.Empty();
        m_szDisease.Empty();
    }
    OnCardNoButtonSelect();
    UpdateData(false);
    return 0;
}

int CHMSRegistration::OnAddNewReception()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szTitle, szMsg, tmpStr, szOutpatient, m_szTreatStatus,
        m_szTreatDept;
    CRecord rs(&pMF->m_db);
    CString szSQL;
    int nMode;

    if ((GetMode() == VM_ADD) || (GetMode() == VM_EDIT))
        return -1;
    if (m_nPatientNo == 0)
    {
        return -1;
    }
    //??
    // Kiem tra BN BH ko cho tao moi phieu tiep don
    //??
    szSQL.Format(
        _T("SELECT ho_type FROM hms_doc LEFT JOIN hms_object ON (ho_id = ")
        _T("hd_object) WHERE hd_docno = %ld and hd_status='T' "),
        pMF->m_nDocumentNo);
    rs.ExecSQL(szSQL);
    if (rs.GetStringValue() == _T("I"))
    {
        ShowMessageBox(_T("Insurance Patient. Unable to create new document"),
                       MB_OK | MB_ICONWARNING);
        return -1;
    }
    // Kiem tra ho so co dang dieu tri ngoai tru khong. Neu dang dieu tri ngoai
    // tru, khong cho tao ho so moi.
    szSQL.Format(_T("SELECT count(*) FROM hms_outpatient WHERE hop_docno=%ld ")
                 _T("AND hop_status ='O' "),
                 pMF->m_nDocumentNo);
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() > 0)
    {
        ShowMessageBox(
            _T("This patient is out treatment. Unable to create new document"),
            MB_OK | MB_ICONWARNING);
        //	return -1;
    }

    // Kiem tra benh nhan co dang dieu tri noi tru khong. (True, False)  benh
    // nhan dang dieu tri Bệnh nhân điều trị IVF tại khoa có mã "TTDTHM", nếu
    // trạng thái ='I' thì sẽ cho tạo phiếu tiếp đón mới Mục đích cho tạo phiếu
    // tiếp đón mới IVF để thống kê số lượng bệnh nhân khám lại ở tiếp đón

    szSQL.Format(
        _T("SELECT htr_status as status, htr_deptid as dept FROM ")
        _T("HMS_TREATMENT_RECORD WHERE htr_docno=%ld order by htr_idx"),
        pMF->m_nDocumentNo);
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("status"), m_szTreatStatus);
    rs.GetValue(_T("dept"), m_szTreatDept);

    if (pMF->IsTreatmentTerminate(m_nDocumentNo, szOutpatient) == true &&
        m_szTreatDept != _T("TTDTHM"))
    {
        TranslateString(_T("This document is treatment [%s]. Unable to create ")
                        _T("new document"),
                        tmpStr);
        szMsg.Format(tmpStr, pMF->m_szDeptName);
        ShowMessageBox(szMsg, MB_OK | MB_ICONWARNING);
        return -1;
    }
    // Kiem tra neu trang thai ho so chua ket thuc thi tao ho so moi

    szSQL.Format(_T("SELECT hd_status FROM hms_doc WHERE hd_docno =%ld "),
                 m_nDocumentNo);
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("hd_status"), m_szDocStatus);
    if (m_szDocStatus == _T("T") && m_szTreatDept != _T("TTDTHM"))
    {
        OnAddNewDocument();
        /*nMode = VM_ADDDOC;
        szTitle = _T("Add New Document");
        if(m_szCardNo.IsEmpty()){
            m_sCardInfo.code.Empty();
            m_sCardInfo.company.Empty();
            m_sCardInfo.discount = 0;
            m_sCardInfo.expdate.Empty();
            m_sCardInfo.expdate.Empty();
            m_sCardInfo.regplacecde.Empty();
        }*/
    }
    else
    {
        nMode = VM_ADDEXAM;
        szTitle = _T("Add New Examination Sheet");
        SetMode(nMode);
    }

    return 0;
}

// Tao phieu kham yeu cau sang khao C11 kham
#include "HMSSpecialExamDialog.h"
int CHMSRegistration::OnAddNewReceptionC11()
{
    UpdateData(TRUE);
    CHMSSpecialExamDialog dlg(this);
    // dlg.m_szExamTypeKey = m_szExamTypeKey;
    dlg.m_nReceptIdx = m_nReceptIdx;

    if (dlg.DoModal() == IDOK)
    {
        OnExamListLoadData();
    }
    return 0;
}

int CHMSRegistration::OnHMSRegistrationListLoadData() { return 0; }

int CHMSRegistration::ParseCard(CString szObjectID, CString szCardNo,
                                CString szCondition, int &nDiscount,
                                CString &szCode)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    nDiscount = 0;
    szCode.Empty();
    if (szCardNo.GetLength() != szCondition.GetLength() ||
        szCondition.GetLength() == 0)
        return -1;
    for (int i = 0; i < szCardNo.GetLength(); i++)
    {
        if (szCondition[i] == _T('C'))
            szCode += szCardNo[i];
    }
    szCode.MakeUpper();
    if (szCode.IsEmpty())
        return -1;
    szSQL.Format(
        _T("SELECT * FROM hms_objectline WHERE hol_id='%s' AND hol_code='%s' "),
        szObjectID, szCode);
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        szCode.Empty();
        return -1;
    }
    rs.GetValue(_T("hol_discount"), nDiscount);
    return 1;
}

void CHMSRegistration::LoadFromExamSheet(long nPatientNo, int nReceptIdx)
{
    m_nPatientNo = nPatientNo;
    m_nReceptIdx = nReceptIdx;
    UpdateData(false);
    GetDataToScreen();
}

bool CHMSRegistration::AddExaminationReceipt() { return true; }
void CHMSRegistration::PrintReceipt(bool m_bPreview, bool m_bDirect)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    static CReport rpt;
    CReport rpt2;
    CString szSQL, tmpStr, szWhere, szDynLabel1, szDynLabel2, szDynText1,
        szDynText2;
    CRecord rs(&pMF->m_db);
    CRecord rs2(&pMF->m_db);
    CRecord rsl(&pMF->m_db);
    m_bDirect = false;

    // if(pMF->m_IsC13)
    //{
    //	if (!rpt.Init(_T("Reports/HMS/HR_EXAMINATIONSHEET.RPT")))
    //		return;
    // }
    // else

    if (pMF->m_szDept == _T("AB"))
    {
        if (!rpt.Init(_T("Reports/HMS/HR_EXAMINATIONSHEETAB.RPT")))
        {
            _msg(_T("Reports/HMS/HR_EXAMINATIONSHEETAB.RPT"));
            return;
        }

        _tprintf(_T("\r\nAB"));
    }
    if (pMF->m_szDept == _T("TYC"))
    {
        if (!rpt.Init(_T("Reports/HMS/HR_EXAMINATIONSHEETC14.RPT")))
        {
            _msg(_T("Reports/HMS/HR_EXAMINATIONSHEETC14.RPT"));
            return;
        }

        _tprintf(_T("\r\nTYC"));
    }
    if (pMF->m_szDept == _T("TTHTSS"))
    {
        if (!rpt.Init(_T("Reports/HMS/HR_EXAMINATIONSHEET_IVF.RPT")))
        {
            _msg(_T("Reports/HMS/HR_EXAMINATIONSHEET_IVF.RPT"));
            return;
        }

        _tprintf(_T("\r\nC13"));
    }

    if (pMF->m_szDept == _T("C1.3"))
    {
        if (!rpt.Init(_T("Reports/HMS/HR_EXAMINATIONSHEETC1-3.RPT")))
        {
            _msg(_T("Reports/HMS/HR_EXAMINATIONSHEETC1-3.RPT"));
            return;
        }

        _tprintf(_T("\r\nIVF"));
    }

    else
    {
        if (!rpt.Init(_T("Reports/HMS/HR_EXAMINATIONSHEETC11.RPT")))
        {
            _msg(_T("Reports/HMS/HR_EXAMINATIONSHEETC11.RPT"));
            return;
        }
    }

    szSQL.Format(
        _T(" SELECT 	hd_patientno as patientno,  ")
        _T(" 	hd_docno as docno,")
        _T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,")
        _T(" 	hp_birthdate as birthdate,")
        _T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,")
        _T("	HMS_GETDEPARTMENTNAME(he_deptid) as admitdept, ")
        _T(" 	extract(year from hp_birthdate) as yob,")
        _T(" 	hp_sex as sexid,")
        _T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,")
        _T(" 	hp_occupation as occupationid,")
        _T(" 	HMS_GETOCCUPATIENT(hp_occupation) as occupation,")
        _T(" 	sys_sel_getname('hms_rank', cast(hp_rank as nvarchar2(15))) ")
        _T("as rank,")
        _T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,")
        _T(" 	hp_provid as provid,")
        _T(" 	SYS_GetProvillName(hp_provid) as provill,")
        _T(" 	hp_distid as distid,")
        _T(" 	SYS_GetDistrictName(hp_distid) as district,")
        _T(" 	hp_villid as villid,")
        _T(" 	Sys_GetVillageName(hp_villid) as village,")
        _T(" 	hp_workplaceid as workplaceid,")
        _T(" 	hp_workplace as workplace,")
        _T("	hp_department, ")
        _T(" 	hd_object as objectid,")
        _T(" 	HMS_GetObjectName(hd_object) as objectname,")
        _T(" 	case when hd_insline = 'Y' then hd_cardno||' (Trái tuyến)' ")
        _T("else hd_cardno end as cardno,")
        _T(" 	hd_cardidx as cardidx,")
        _T(" 	hc_regdate as regdate,")
        _T(" 	hc_expdate as expdate,")
        _T(" 	hfl_name as examtype,")
        _T(" 	HMS_GetRoomName(he_deptid,he_roomid) as roomname, ")
        _T("	he_receptno as receptno, ")
        _T("	hfl_servprice as amount, ")
        _T("	hd_transplace as transplace, ")
        _T("	hd_transdiagn as transdiagn, ")
        _T("	hd_xobject as xobject, ")
        _T("	(hd_admitdate) as admitdate, ")
        _T("	hd_xcardno as xcardno, ")
        _T("	hd_xissuedate as xissuedate, ")
        _T("	ho_type, hd_healthexam as healthexam, IVF_ISDISCOUNT, ")
        _T("IVF_GIAYGIOITHIEU, hd_passwd ")
        _T(" FROM hms_patient")
        _T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
        _T(" LEFT JOIN RM_IVF_DISCOUNT_INFOR ON(hd_docno=IVF_DOCNO)")
        _T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno and ")
        _T("hc_cardno=hd_cardno and hc_idx=hd_cardidx) ")
        _T(" LEFT JOIN hms_exam ON(he_docno=hd_docno)")
        _T(" LEFT JOIN hms_fee_list ON(hfl_typeid='E' and ")
        _T("hfl_feeid=he_examtype) ")
        _T(" LEFT JOIN hms_object ON (hd_object = ho_id)")
        _T(" WHERE he_docno=%ld AND he_receptidx=%d"),
        m_nDocumentNo, m_nReceptIdx);

    //	_msg(_T("%s"), szSQL);
    _tprintf(_T("\nm_nReceptidx: %d"), m_nReceptIdx);
    int ret = rs.ExecSQL(szSQL);

    if (rs.IsEOF())
        return;

    // Report Header
    rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"),
                                    pMF->m_CompanyInfo.sc_pname);
    rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"),
                                    pMF->m_CompanyInfo.sc_name);
    tmpStr = pMF->GetSysDateTime();

    CString printDate, szExamDate;
    rs.GetValue(_T("admitdate"), szExamDate);

    // MessageBox(tmpStr);

    tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ExamDate")),
                  szExamDate.Mid(11, 5), szExamDate.Mid(8, 2),
                  szExamDate.Mid(5, 2), szExamDate.Left(4));
    rpt.GetReportHeader()->SetValue(_T("Examdate"), tmpStr);

    printDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                     tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2),
                     tmpStr.Left(4));

    rpt.GetReportHeader()->SetValue(_T("PrintDate"), printDate);
    rpt.GetReportHeader()->SetValue(_T("PatientNo"),
                                    rs.GetValue(_T("patientno")));
    rs.GetValue(_T("docno"), tmpStr);

    rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
    rpt.GetReportFooter()->SetValue(_T("DocumentNo2"), tmpStr);
    rpt.GetReportFooter()->SetValue(_T("OnlineCode"), rs.GetValue(L"hd_passwd"));
    rpt.GetReportHeader()->SetValue(_T("Barcode[128A]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[128C]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[39]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[93]"), tmpStr);

    StringUpper(rs.GetValue(_T("pname")), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("yearofbirth"), rs.GetValue(_T("yob")));

    if (rs.GetValue(_T("objectid")).Trim() == _T("1") &&
        !rs.GetValue(_T("rank")).Trim().IsEmpty())
    {
        tmpStr.Format(_T("%s (%s)"), rs.GetValue(_T("objectname")),
                      rs.GetValue(_T("rank")));
        rpt.GetReportHeader()->SetValue(_T("object"), tmpStr);
    }
    else
        rpt.GetReportHeader()->SetValue(_T("object"),
                                        rs.GetValue(_T("objectname")));
    /*In dong du lieu theo doi tuong*/
    rs.GetValue(_T("ho_type"), tmpStr);
    if (tmpStr == _T("I"))
    {
        szDynLabel2 = _T("Số thẻ BH");
        rs.GetValue(_T("cardno"), szDynText2);
    }
    else if (tmpStr == _T("D") || tmpStr == _T("P"))
    {
        if (rs.GetValue(_T("objectid")).Trim() == _T("1"))
        {
            // szDynLabel1 = _T("Quân hàm");
            szDynLabel2 = _T("Đơn vị");
            // rs.GetValue(_T("rank"), szDynText1);
            rs.GetValue(_T("workplace"), szDynText2);
        }
    }
    // rpt.GetReportHeader()->SetValue(_T("DynamicLabel1"), szDynLabel1);
    rpt.GetReportHeader()->SetValue(_T("DynamicLabel2"), szDynLabel2);
    // rpt.GetReportHeader()->SetValue(_T("DynamicText1"), szDynText1);
    rpt.GetReportHeader()->SetValue(_T("DynamicText2"), szDynText2);
    /**/
    rpt.GetReportHeader()->SetValue(_T("Department"),
                                    rs.GetValue(_T("admitdept")));
    tmpStr.Empty();
    rpt.GetReportHeader()->SetValue(_T("Age"), rs.GetValue(_T("age")));
    rpt.GetReportHeader()->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
    rpt.GetReportHeader()->SetValue(_T("Occupation"),
                                    rs.GetValue(_T("occupation")));
    tmpStr.Format(_T("%s - %s - %s"), rs.GetValue(_T("village")),
                  rs.GetValue(_T("district")), rs.GetValue(_T("provill")));
    rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
    rs.GetValue(_T("detailaddress"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("DetailAddress"), tmpStr);
    tmpStr.Empty();
    CString szWorkPlace, szIsDiscount, szGiayGioiThieu;
    rs.GetValue(_T("workplace"), szWorkPlace);
    rs.GetValue(_T("hp_department"), tmpStr);
    if (!tmpStr.IsEmpty())
    {
        // CString szName = pMF->GetDepartmentName(tmpStr);
        CString szName = tmpStr;
        if (!szName.IsEmpty())
        {
            szWorkPlace.AppendFormat(_T(" - %s"), szName);
        }
    }
    if (szWorkPlace.Find(_T("&")) != -1)
    {
        szWorkPlace.Replace(_T("&"), _T("&&"));
    }
    rpt.GetReportHeader()->SetValue(_T("WorkPlace"), szWorkPlace);
    rs.GetValue(_T("IVF_ISDISCOUNT"), szIsDiscount);
    rs.GetValue(_T("IVF_GIAYGIOITHIEU"), szGiayGioiThieu);

    if (szIsDiscount == _T("1"))
    {
        rpt.GetReportHeader()->SetValue(_T("DiscountIVF"),
                                        _T("Đối tượng được miễn giảm"));
        rpt.GetReportHeader()->SetValue(_T("SoQuyetDinh"), szGiayGioiThieu);
    }
    szSQL.Format(
        _T("SELECT he_receptno as receptno, ")
        _T("	(SELECT hrl_name FROM hms_roomlist WHERE hrl_deptid=he_deptid ")
        _T("AND hrl_id=he_roomid) as roomname, ")
        _T("	(SELECT get_username(hrl_doctorid) FROM hms_roomlist WHERE ")
        _T("hrl_deptid=he_deptid AND hrl_id=he_roomid) as doctorname ")
        _T(" FROM hms_exam WHERE he_docno =%ld ORDER BY he_receptidx "),
        pMF->m_nDocumentNo);
    rsl.ExecSQL(szSQL);
    CReportSection *rptDetail;
    while (!rsl.IsEOF())
    {
        rptDetail = rpt.AddDetail();
        rptDetail->SetValue(_T("ExamRoom"), rsl.GetValue(_T("roomname")));
        rptDetail->SetValue(_T("SheetNo"), rsl.GetValue(_T("receptno")));
        rptDetail->SetValue(_T("DoctorName"), rsl.GetValue(_T("doctorname")));
        rsl.MoveNext();
    }
    rs.GetValue(_T("healthexam"), tmpStr);
    if (tmpStr == _T("Y"))
    {
        rpt.GetReportFooter()->SetValue(_T("HealthExamType"),
                                        _T("(Khám sức khỏe theo hợp đồng)"));
    }

    if (pMF->m_szDept == _T("TYC"))
    {
        rpt.GetReportFooter()->SetValue(
            _T("WIFI_NAME"),
            pMF->GetSelectionString(_T("WIFI"), _T("WIFI_NAME")));
        rpt.GetReportFooter()->SetValue(
            _T("WIFI_PASSWORD"),
            pMF->GetSelectionString(_T("WIFI"), _T("WIFI_PASSWORD")));
    }

    // In QRCode CString szBarcode;
    // Chỗ này tự động tạo qrcode đối với bệnh nhân bảo hiểm không phải thuộc
    // đối tượng 100%
    if (pMF->GetObjectType() == _T("I") && 0 > 1)
    {
        CString szQRCode;
        CString szPatientName;
        CString szMID, szTID, szBillNumber, szDescription, szDeptID, szUserID,
            szType;
        long nAmount = 1000000, nOrderID = 0, nKey = 0;
        szType = _T("A");
        szDeptID = pMF->m_szDept;
        szUserID = pMF->GetCurrentUser();

        nKey = pMF->OnBankGenQRpay(nOrderID, pMF->m_nDocumentNo, szMID, szTID,
                                   szBillNumber, szDescription, szDeptID,
                                   szUserID, szType, nAmount);

        szSQL.Format(_T("SELECT hfb_qrcode FROM hms_fee_invoice_mb WHERE ")
                     _T("hfb_docno=%ld AND hfb_key=%ld"),
                     m_nDocumentNo, nKey);
        rs2.ExecSQL(szSQL);
        rs2.GetValue(_T("hfb_qrcode"), szQRCode);

        if (szQRCode.GetLength() > 10)
        {
            rpt.GetReportHeader()->SetValue(_T("Barcode"), szQRCode);
            rpt.GetReportFooter()->SetValue(_T("Barcode"), szQRCode);
        }
    }

    rpt.Print(m_bDirect);
    // rpt.PrintPreview();

    if (pMF->m_szDept == _T("TYC"))
    {
        // In phieu an sang.
        CString printFastFood = m_wndExamType.GetCurrent(8);
        if (printFastFood == _T("Y"))
            PrintFastFoodReceipt(m_bDirect);
    }

    if (pMF->m_szDept == _T("KB_A16"))
    {
        // In phieu an sang KB_A16
        // CString printFastFood = m_wndExamType.GetCurrent(8);
        // if(printFastFood == _T("Y"))
        PrintFastFoodReceiptA16(m_bPreview);
    }

    ////in them mau quang cao neu khoa la TYC hoac C11 va doi tuong la Dich vu
    // if((pMF->m_szDept == _T("TYC") || pMF->m_szDept == _T("C1.1")) &&
    // m_szObjectKey == _T("7"))
    //{
    //	if(!rpt2.Init(_T("Reports\\HMS\\Advestisment_Surgery.RPT")) )
    //		return;
    //	rpt2.Print(true);
    // }
}

void CHMSRegistration::PrintFastFoodReceipt(bool bDirect)
{
    // return;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    static CReport rpt;
    CString tmpStr;

    if (!rpt.Init(_T("Reports/HMS/HR_FASTFOODSHEET.RPT")))
    {
        _msg(_T("Reports/HMS/HR_FASTFOODSHEET.RPT"));
        return;
    }

    tmpStr.Format(_T("%ld"), m_nDocumentNo);
    rpt.GetReportHeader()->SetValue(_T("docno"), tmpStr);
    tmpStr = m_szPatientName;
    rpt.GetReportHeader()->SetValue(_T("patientname"), tmpStr);

    tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("ExamDate")),
                  m_szExamDate.Mid(8, 2), m_szExamDate.Mid(5, 2),
                  m_szExamDate.Left(4));
    rpt.GetReportFooter()->SetValue(_T("ExamDate"), tmpStr);

    rpt.Print(bDirect);
}

void CHMSRegistration::PrintFastFoodReceiptA16(bool bDirect)
{
    // return;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    static CReport rpt;
    CString tmpStr, tmpStr2, tmpStr1;

    if (!rpt.Init(_T("Reports/HMS/HR_FASTFOODSHEETA16.RPT")))
    {
        _msg(_T("Reports/HMS/HR_FASTFOODSHEETA16.RPT"));
        return;
    }

    tmpStr.Format(_T("%ld"), m_nDocumentNo);
    rpt.GetReportHeader()->SetValue(_T("docno"), tmpStr);
    tmpStr = m_szPatientName;
    rpt.GetReportHeader()->SetValue(_T("patientname"), tmpStr);

    tmpStr.Format(_T("%ld"), m_nPatientNo);
    rpt.GetReportHeader()->SetValue(_T("patientno"), tmpStr);

    // Ngày tiếp đón
    tmpStr1 = m_szExamDate;
    CString NgayKham;

    NgayKham.Format(rpt.GetReportHeader()->GetValue(_T("NgayKham")),
                    tmpStr1.Mid(11, 5), tmpStr1.Mid(8, 2), tmpStr1.Mid(5, 2),
                    tmpStr1.Left(4));
    rpt.GetReportHeader()->SetValue(_T("NgayKham"), NgayKham);

    NgayKham.Format(rpt.GetReportFooter()->GetValue(_T("NgayKham")),
                    tmpStr1.Mid(11, 5), tmpStr1.Mid(8, 2), tmpStr1.Mid(5, 2),
                    tmpStr1.Left(4));
    rpt.GetReportFooter()->SetValue(_T("NgayKham"), NgayKham);

    // Ngày in
    tmpStr2 = pMF->GetSysDateTime();

    CString printDate;
    printDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")),
                     tmpStr2.Mid(11, 5), tmpStr2.Mid(8, 2), tmpStr2.Mid(5, 2),
                     tmpStr2.Left(4));
    rpt.GetReportHeader()->SetValue(_T("PrintDate"), printDate);

    printDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                     tmpStr2.Mid(11, 5), tmpStr2.Mid(8, 2), tmpStr2.Mid(5, 2),
                     tmpStr2.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), printDate);

    rpt.Print(bDirect);
}

void CHMSRegistration::PrintTreatment(bool m_bPreview)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    static CReport rpt;
    CString szSQL, tmpStr, szWhere;
    CRecord rs(&pMF->m_db);

    if (!rpt.Init(_T("Reports/HMS/HR_TREATMENTSHEET.RPT")))
        return;

    szSQL.Format(
        _T(" SELECT 	hd_patientno as patientno,  ")
        _T(" 	hd_docno as docno,")
        _T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,")
        _T(" 	hp_birthdate as birthdate,")
        _T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,")
        _T("	(select sd_name from sys_dept where sd_id = hd_admitdept) as ")
        _T("admitdept, ")
        _T(" 	extract(year from hp_birthdate) as yearofbirth,")
        _T(" 	hp_sex as sexid,")
        _T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,")
        _T(" 	hp_occupation as occupationid,")
        _T("	hp_position as position, ")
        _T(" 	sys_sel_getname('sys_occupation', cast(hp_occupation as ")
        _T("varchar(15))) as occupation,")
        _T(" 	sys_sel_getname('hms_rank', cast(hp_rank as nvarchar2(15))) ")
        _T("as rank,")
        _T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,")
        _T(" 	hp_provid as provid,")
        _T("	(select ss_desc from sys_sel where ss_id = 'hms_relation' and ")
        _T("ss_code = hd_relation) as relation, ")
        _T("	hd_contactaddr as reladdress, hd_contacttel as relphone, ")
        _T("hd_telephone as phone,")
        _T("	hd_relative as relative, ")
        _T(" 	SYS_GETPROVILLNAME(hp_provid) as provill,")
        _T(" 	hp_distid as distid,")
        _T(" 	SYS_GETDISTRICTNAME(hp_distid) as district,")
        _T(" 	hp_villid as villid,")
        _T(" 	SYS_GETVILLAGENAME(hp_villid) as village,")
        _T(" 	HMS_GETOBJECTNAME(hd_object) as objectname,")
        _T(" 	hp_workplaceid as workplaceid,")
        _T(" 	hp_workplace as workplace,")
        _T(" 	hd_object as objectid,")
        _T(" 	hd_cardno as cardno,")
        _T("    hd_admitdate as examdate,")
        _T("    hd_enddate as enddate,")
        _T(" 	hc_regdate as regdate,")
        _T(" 	hc_expdate as expdate,")
        _T("	hd_transplace as transplace, ")
        _T("	HD_TRANSDIAGN as transdiagn, ")
        _T("	hd_diagnostic AS Diagnostic, ")
        _T("	NVL(hd_recordno, hp_recordno) AS recordno ")
        _T(" FROM hms_patient")
        _T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
        _T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno and ")
        _T("hc_cardno=hd_cardno and hc_idx=hd_cardidx) ")
        _T(" WHERE hd_docno=%ld AND ROWNUM < 2"),
        m_nDocumentNo);

    int ret = rs.ExecSQL(szSQL);
    if (rs.IsEOF())
        return;
    CString szRecordNo;
    rs.GetValue(_T("recordno"), szRecordNo);
    if (szRecordNo.IsEmpty())
    {
        CGuiInputDataDialog dlg(this, false, true);
        dlg.SetTextLimit(10);
        dlg.m_szGroupName = _T("Outpatient Record");
        dlg.m_szValueName = _T("Record No");
        if (dlg.DoModal() == IDOK)
        {
            szRecordNo = dlg.GetTextValue();
            szSQL.Format(
                _T("UPDATE hms_doc SET hd_recordno='%s' WHERE hd_docno=%ld "),
                szRecordNo, m_nDocumentNo);
            pMF->ExecSQL(szSQL);
            szSQL.Format(_T("UPDATE hms_patient SET hp_recordno='%s' WHERE ")
                         _T("hp_patientno=%ld "),
                         szRecordNo, m_nPatientNo);
            pMF->ExecSQL(szSQL);
        }
    }

    // Report Header
    rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"),
                                    pMF->m_CompanyInfo.sc_pname);
    rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"),
                                    pMF->m_CompanyInfo.sc_name);
    rpt.GetReportHeader()->SetValue(_T("PatientNo"),
                                    rs.GetValue(_T("patientno")));
    rpt.GetReportHeader()->SetValue(_T("DocumentNo"), rs.GetValue(_T("docno")));
    rpt.GetReportHeader()->SetValue(_T("Barcode[128A]"),
                                    rs.GetValue(_T("docno")));
    rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"),
                                    rs.GetValue(_T("docno")));
    rpt.GetReportHeader()->SetValue(_T("Barcode[128C]"),
                                    rs.GetValue(_T("docno")));
    rpt.GetReportHeader()->SetValue(_T("Barcode[39]"),
                                    rs.GetValue(_T("docno")));
    rpt.GetReportHeader()->SetValue(_T("Barcode[93]"),
                                    rs.GetValue(_T("docno")));

    rpt.GetReportHeader()->SetValue(_T("RecordNo"), szRecordNo);

    StringUpper(rs.GetValue(_T("pname")), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);

    rpt.GetReportHeader()->SetValue(_T("object"),
                                    rs.GetValue(_T("objectname")));
    tmpStr.Format(_T("%s"), rs.GetValue(_T("rank")));
    rpt.GetReportHeader()->SetValue(_T("rank"), tmpStr);
    rpt.GetReportHeader()->SetValue(
        _T("position"), pMF->GetSelectionString(_T("hms_position"),
                                                rs.GetValue(_T("position"))));

    rpt.GetReportHeader()->SetValue(_T("Department"),
                                    rs.GetValue(_T("admitdept")));
    tmpStr.Empty();
    rpt.GetReportHeader()->SetValue(_T("yearofbirth"),
                                    rs.GetValue(_T("yearofbirth")));
    rpt.GetReportHeader()->SetValue(_T("Age"), rs.GetValue(_T("age")));
    rpt.GetReportHeader()->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
    rpt.GetReportHeader()->SetValue(_T("Occupation"),
                                    rs.GetValue(_T("occupation")));
    tmpStr.Format(_T("%s - %s - %s"), rs.GetValue(_T("village")),
                  rs.GetValue(_T("district")), rs.GetValue(_T("provill")));
    rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
    rs.GetValue(_T("detailaddress"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("DetailAddress"), tmpStr);
    tmpStr.Empty();
    rpt.GetReportHeader()->SetValue(_T("WorkPlace"),
                                    rs.GetValue(_T("workplace")));
    rpt.GetReportHeader()->SetValue(_T("ExamRoom"),
                                    rs.GetValue(_T("roomname")));
    rpt.GetReportHeader()->SetValue(_T("SheetNo"), rs.GetValue(_T("receptno")));
    rpt.GetReportHeader()->SetValue(_T("ExamType"),
                                    rs.GetValue(_T("examtype")));

    rs.GetValue(_T("cardno"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
    rpt.GetReportHeader()->SetValue(
        _T("ExamDate"), CDate::Convert(rs.GetValue(_T("ExamDate"))));
    rpt.GetReportHeader()->SetValue(_T("TransferHospital"),
                                    rs.GetValue(_T("transplace")));
    rpt.GetReportHeader()->SetValue(_T("TransDiagn"),
                                    rs.GetValue(_T("transdiagn")));

    rpt.GetReportHeader()->SetValue(_T("Diagnostic"),
                                    rs.GetValue(_T("Diagnostic")));
    rpt.GetReportHeader()->SetValue(_T("relative"),
                                    rs.GetValue(_T("relative")));
    rpt.GetReportHeader()->SetValue(_T("reladdress"),
                                    rs.GetValue(_T("reladdress")));
    rpt.GetReportHeader()->SetValue(_T("relphone"),
                                    rs.GetValue(_T("relphone")));
    rpt.GetReportHeader()->SetValue(_T("phone"), rs.GetValue(_T("phone")));
    rpt.GetReportHeader()->SetValue(_T("relation"),
                                    rs.GetValue(_T("relation")));

    tmpStr = pMF->GetSysDateTime();
    CString printDate;
    printDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")),
                     tmpStr.Mid(5, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2),
                     tmpStr.Left(4));
    rpt.GetReportHeader()->SetValue(_T("PrintDate"), printDate);

    printDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                     tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2),
                     tmpStr.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), printDate);

    rpt.PrintPreview(true);

    PrintAppointmentExamine(false);
}

void CHMSRegistration::PrintAppointmentExamine(bool m_bPreview)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CReport rpt;
    CString szSQL, tmpStr, szWhere, szFileName;
    CRecord rs(&pMF->m_db);
    CRecord rsl(&pMF->m_db);
    szFileName = _T("HR_PHIEUHENKHAM.RPT");
    if (pMF->GetCurrentDepartmentID() == _T("C1.2"))
    {
        szFileName = _T("HR_PHIEUHENKHAM_C12.RPT");
    }
    tmpStr.Format(_T("Reports\\HMS\\%s"), szFileName);
    if (!rpt.Init(tmpStr))
        return;

    szSQL.Format(
        _T(" SELECT 	hd_patientno as patientno,  ")
        _T(" 	hd_docno as docno,")
        _T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,")
        _T(" 	hp_birthdate as birthdate,")
        _T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,")
        _T("	(select sd_name from sys_dept where sd_id = he_deptid) as ")
        _T("admitdept, ")
        _T(" 	extract(year from hp_birthdate) as yearofbirth,")
        _T(" 	hp_sex as sexid,")
        _T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,")
        _T(" 	hp_occupation as occupationid,")
        _T("	hp_position as position, ")
        _T(" 	sys_sel_getname('sys_occupation', cast(hp_occupation as ")
        _T("varchar(15))) as occupation,")
        _T(" 	sys_sel_getname('hms_rank', cast(hp_rank as nvarchar2(15))) ")
        _T("as rank,")
        _T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,")
        _T(" 	hp_provid as provid,")
        _T("	(select ss_desc from sys_sel where ss_id = 'hms_relation' and ")
        _T("ss_code = hd_relation) as relation, ")
        _T("	hd_contactaddr as reladdress, hd_contacttel as relphone, ")
        _T("hd_telephone as phone,")
        _T("	hd_relative as relative, ")
        _T(" 	SYS_GETPROVILLNAME(hp_provid) as provill,")
        _T(" 	hp_distid as distid,")
        _T(" 	SYS_GETDISTRICTNAME(hp_distid) as district,")
        _T(" 	hp_villid as villid,")
        _T(" 	SYS_GETVILLAGENAME(hp_villid) as village,")
        _T(" 	HMS_GETOBJECTNAME(hd_object) as objectname,")
        _T(" 	hp_workplaceid as workplaceid,")
        _T(" 	hp_workplace as workplace,")
        _T(" 	hd_object as objectid,")
        _T(" 	hd_cardno as cardno,")
        _T("    trunc(hd_admitdate) as examdate,") //_T("    trunc(hd_admitdate)
                                                   //+ 30 as NgayHenkham,") \//
        _T("    trunc(hd_admitdate) +  (select sl_ngay_hen_kham from ")
        _T("hms_config) as NgayHenkham,")
        _T("    hd_enddate as enddate,")
        _T(" 	hc_regdate as regdate,")
        _T(" 	hc_expdate as expdate,")
        _T("	hd_transplace as transplace, ")
        _T("	HD_TRANSDIAGN as transdiagn, ")
        _T("	hd_diagnostic AS Diagnostic,")
        _T("	hd_xobject as xobject, ")
        _T("	hd_xcardno as xcardno, ")
        _T("	hd_xissuedate as xissuedate, ")
        _T("	NVL(hd_recordno, hp_recordno) AS recordno ")
        _T(" FROM hms_patient")
        _T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
        _T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno and ")
        _T("hc_cardno=hd_cardno and hc_idx=hd_cardidx) ")
        _T(" LEFT JOIN hms_exam ON(he_docno=hd_docno)")
        _T(" WHERE he_docno=%ld "),
        m_nDocumentNo);
    rs.ExecSQL(szSQL);

    if (rs.IsEOF())
        return;

    // Report Header
    rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"),
                                    pMF->m_CompanyInfo.sc_pname);
    rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"),
                                    pMF->m_CompanyInfo.sc_name);
    rpt.GetReportHeader()->SetValue(_T("PatientNo"),
                                    rs.GetValue(_T("patientno")));
    rpt.GetReportHeader()->SetValue(_T("DocumentNo"), rs.GetValue(_T("docno")));
    rpt.GetReportHeader()->SetValue(_T("Barcode[128A]"),
                                    rs.GetValue(_T("docno")));
    rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"),
                                    rs.GetValue(_T("docno")));
    rpt.GetReportHeader()->SetValue(_T("Barcode[128C]"),
                                    rs.GetValue(_T("docno")));
    rpt.GetReportHeader()->SetValue(_T("Barcode[39]"),
                                    rs.GetValue(_T("docno")));
    rpt.GetReportHeader()->SetValue(_T("Barcode[93]"),
                                    rs.GetValue(_T("docno")));

    StringUpper(rs.GetValue(_T("pname")), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);

    rpt.GetReportHeader()->SetValue(_T("object"),
                                    rs.GetValue(_T("objectname")));
    tmpStr.Format(_T("%s"), rs.GetValue(_T("rank")));
    rpt.GetReportHeader()->SetValue(_T("rank"), tmpStr);
    rpt.GetReportHeader()->SetValue(
        _T("position"), pMF->GetSelectionString(_T("hms_position"),
                                                rs.GetValue(_T("position"))));

    rpt.GetReportHeader()->SetValue(_T("RecordNo"),
                                    rs.GetValue(_T("RecordNo")));
    rpt.GetReportHeader()->SetValue(_T("Department"),
                                    rs.GetValue(_T("admitdept")));
    tmpStr.Empty();
    rpt.GetReportHeader()->SetValue(_T("yearofbirth"),
                                    rs.GetValue(_T("yearofbirth")));
    rpt.GetReportHeader()->SetValue(_T("Age"), rs.GetValue(_T("age")));
    rpt.GetReportHeader()->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
    rpt.GetReportHeader()->SetValue(_T("Occupation"),
                                    rs.GetValue(_T("occupation")));
    tmpStr.Format(_T("%s - %s - %s"), rs.GetValue(_T("village")),
                  rs.GetValue(_T("district")), rs.GetValue(_T("provill")));
    rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
    rs.GetValue(_T("detailaddress"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("DetailAddress"), tmpStr);
    tmpStr.Empty();
    rpt.GetReportHeader()->SetValue(_T("WorkPlace"),
                                    rs.GetValue(_T("workplace")));
    rpt.GetReportHeader()->SetValue(_T("ExamRoom"),
                                    rs.GetValue(_T("roomname")));
    rpt.GetReportHeader()->SetValue(_T("SheetNo"), rs.GetValue(_T("receptno")));
    rpt.GetReportHeader()->SetValue(_T("ExamType"),
                                    rs.GetValue(_T("examtype")));

    rs.GetValue(_T("cardno"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
    rpt.GetReportHeader()->SetValue(
        _T("ExamDate"),
        CDate::Convert(rs.GetValue(_T("ExamDate")), yyyymmdd, ddmmyyyy));
    rpt.GetReportHeader()->SetValue(_T("TransferHospital"),
                                    rs.GetValue(_T("transplace")));
    rpt.GetReportHeader()->SetValue(_T("TransDiagn"),
                                    rs.GetValue(_T("transdiagn")));

    rpt.GetReportHeader()->SetValue(_T("Diagnostic"),
                                    rs.GetValue(_T("Diagnostic")));
    rpt.GetReportHeader()->SetValue(_T("relative"),
                                    rs.GetValue(_T("relative")));
    rpt.GetReportHeader()->SetValue(_T("reladdress"),
                                    rs.GetValue(_T("reladdress")));
    rpt.GetReportHeader()->SetValue(_T("relphone"),
                                    rs.GetValue(_T("relphone")));
    rpt.GetReportHeader()->SetValue(_T("phone"), rs.GetValue(_T("phone")));
    rpt.GetReportHeader()->SetValue(_T("relation"),
                                    rs.GetValue(_T("relation")));

    rpt.GetReportHeader()->SetValue(
        _T("Ngayhenkham"),
        CDate::Convert(rs.GetValue(_T("Ngayhenkham")), yyyymmdd, ddmmyyyy));

    tmpStr = pMF->GetSysDateTime();
    CString printDate;
    printDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")),
                     tmpStr.Mid(5, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2),
                     tmpStr.Left(4));
    rpt.GetReportHeader()->SetValue(_T("PrintDate"), printDate);

    printDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                     tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2),
                     tmpStr.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), printDate);
    rpt.PrintPreview(true);
}

BEGIN_MESSAGE_MAP(CHMSRegistration, CGuiView)

ON_WM_TIMER()
END_MESSAGE_MAP()

void CHMSRegistration::OnFunctionalTest()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    //	if(pMF->m_nDocumentNo < 0 || pMF->m_nRefIndex <= 0)
    //		return;
    if (GetMode() != VM_VIEW)
        return;

    if (!pMF->CheckPermission(_T("01.06")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return;
    }

    CHMSFunctionalTestDialog dlg(this);
    dlg.DoModal();
}

int CHMSRegistration::OnAddAdditionalCard()
{
    if (m_szCardNo.Find(_T("HN")) != -1)
    {
        CHMSAdditionCardDialog dlg(this);
        dlg.SetMode(VM_EDIT);
        dlg.DoModal();
    }
    return 0;
}

int CHMSRegistration::OnIgnoreTransferredInfo()
{

    CString tmpStr;
    tmpStr =
        AfxGetApp()->GetProfileString(_T(""), _T("IgnoreHospitalTransfer"));

    if (tmpStr == _T("Y"))
        tmpStr = _T("N");
    else
        tmpStr = _T("Y");

    AfxGetApp()->WriteProfileString(_T(""), _T("IgnoreHospitalTransfer"),
                                    tmpStr);

    if (GetMode() == VM_ADDPAT || GetMode() == VM_ADDDOC ||
        GetMode() == VM_EDIT)
    {
        if (tmpStr == _T("Y"))
        {
            m_wndHospital.SetCheckValue(true);
            m_wndDisease.SetCheckValue(true);
            m_bValidHospitalTransfer = true;
        }
        else
        {
            m_wndHospital.SetCheckValue(false);
            m_wndDisease.SetCheckValue(false);
            m_bValidHospitalTransfer = false;
        }
    }
    return 0;
}
void CHMSRegistration::LoadData(long nDocNo)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    m_nDocumentNo = nDocNo;
    szSQL.Format(
        _T("SELECT max(he_receptidx) FROM hms_exam WHERE he_docno = %ld"),
        nDocNo);
    rs.ExecSQL(szSQL);
    m_nReceptIdx = rs.GetIntValue();
    _tprintf(_T("\r\n%ld"), m_nReceptIdx);

    GetDataToScreen();
    pMF->SetActivePane(0);
}

void CHMSRegistration::LoadByPatientNo(long nPatientNo)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    m_nPatientNo = nPatientNo;
    m_szSmartcardID = pMF->GetCardId();
    szSQL.Format(
        _T("SELECT ")
        _T("hp_surname, ")
        _T("hp_midname, ")
        _T("hp_firstname, ")
        _T("hp_birthdate, ")
        _T("hp_sex, ")
        _T("hp_ethnic, ")
        _T("hp_provid, ")
        _T("hp_distid, ")
        _T("hp_villid, ")
        _T("hp_occupation, ")
        _T("hp_rank, ")
        _T("hp_position, ")
        _T("hp_dtladdr, ")
        _T("hp_workplace, ")
        _T("hp_workplaceid, ")
        _T("hp_sin, hp_nationality, hp_department, hp_recordno record_no ")
        _T("FROM hms_patient ")
        _T("WHERE hp_patientno=%ld"),
        m_nPatientNo);
    // Dung lan 2

    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        SetMode(VM_NONE);
        return;
    }
    CString tmpStr;
    rs.GetValue(_T("hp_surname"), tmpStr);
    m_szPatientName = tmpStr;
    rs.GetValue(_T("hp_midname"), tmpStr);
    m_szPatientName += _T(" ") + tmpStr;
    rs.GetValue(_T("hp_firstname"), tmpStr);
    m_szPatientName += _T(" ") + tmpStr;
    m_szPatientName.Trim();

    rs.GetValue(_T("hp_birthdate"), m_szBirthDate);

    rs.GetValue(_T("hp_sex"), m_szSexKey);
    rs.GetValue(_T("hp_ethnic"), m_szEthnicKey);
    rs.GetValue(_T("hp_provid"), m_szProvillKey);
    rs.GetValue(_T("hp_distid"), m_szDistrictKey);
    rs.GetValue(_T("hp_villid"), m_szVillageKey);
    rs.GetValue(_T("hp_dtladdr"), m_szDetailAddress);
    rs.GetValue(_T("hp_sin"), m_szIDNo);

    rs.GetValue(_T("hp_occupation"), m_szOccupationKey);
    if (m_szOccupationKey == _T("0"))
        m_szOccupationKey.Empty();

    CString szDay, szMonth, szYear, short_day, short_month;
    if (GetLocalLang() == 0)
    {
        szDay = _T("Day");
        szMonth = _T("Month");
        szYear = _T("Age");
        short_day = _T("d");
        short_month = _T("m");
    }
    else
    {
        TranslateString(_T("Day"), szDay);
        TranslateString(_T("Month"), szMonth);
        TranslateString(_T("Age"), szYear);
        short_day = _T("n");
        short_month = _T("t");
    }

    // m_szWorkingPlaceKey = m_szWorkingPlace;

    szSQL.Format(_T("HMS_GETAGE(TO_DATE('%s','YYYY-MM-DD'), ")
                 _T("TO_DATE('%s','YYYY-MM-DD') )"),
                 m_szExamDate.Left(10), m_szBirthDate.Left(10));

    // int ret = str2long(pMF->ExecDML(szSQL));
    tmpStr = pMF->ExecDML(szSQL);
    m_szAge.Format(_T("%s"), tmpStr);
    if (m_szAge.Right(1) == _T("T"))
    {
        m_szAge.Replace(_T("T"), szMonth);
    }
    else if (m_szAge.Right(1) == _T("N"))
        m_szAge.Replace(_T("N"), szDay);
    if (IsDigit(m_szAge))
    {
        m_szAge.AppendFormat(_T(" %s"), szYear);
    }
    SetMode(VM_VIEW);

    pMF->SetActivePane(0);
}
long CHMSRegistration::GetMaxReceptNo()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    szSQL.Format(_T(" SELECT coalesce(MAX(he_receptno), 0)+1 as receptno")
                 _T(" FROM hms_exam")
                 _T(" WHERE trim(he_deptid)='%s'")
                 _T(" AND he_roomid= %d ")
                 _T(" and trunc(he_createddate)=TO_DATE('%s','YYYY-MM-DD') "),
                 m_szCurrentDept, str2int(m_szRoomKey), m_szExamDate.Left(10));

    rs.ExecSQL(szSQL);
    return rs.GetIntValue();
}
long CHMSRegistration::GetMaxReceptNoBySequance()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    szSQL.Format(_T("HMS_CREATE_RECEPTNO('%s',%d,to_date('%s','YYYY-MM-DD'))"),
                 m_szCurrentDept, str2int(m_szRoomKey), m_szExamDate.Left(10));
    return str2int(pMF->ExecDML(szSQL));
}
void CHMSRegistration::OnTransfeSelect()
{
    UpdateData(true);

    if (m_bTransfer)
    {
        m_wndHospital.EnableWindow(true);
        m_wndDisease.EnableWindow(true);
    }
    else
    {
        m_wndHospital.EnableWindow(false);
        m_wndDisease.EnableWindow(false);
    }
    UpdateData(false);
}
int CHMSRegistration::OnCreatedeposit()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, tmpStr;
    CRecord rs(&pMF->m_db);

    szSQL.Format(_T("SELECT hd_insline FROM hms_doc WHERE hd_docno=%ld"),
                 m_nDocumentNo);
    rs.ExecSQL(szSQL);
    if (rs.GetStringValue() == _T("N"))
        return -1;

    CHMSFeeDepositDialog dlg(this);
    if (dlg.DoModal() == IDOK)
    {
        m_nAmountDeposit = (long)dlg.m_nAmount;
        UpdateData(FALSE);
    }
    return 0;
}

void CHMSRegistration::OnPossitionLabelSelect()
{
    // MessageBox(_T("OK"));
    CHMSPossitionSetupDialog dlg(this);
    dlg.DoModal();
}

#include "HMSEmpListDlg.h"

BOOL CHMSRegistration::PreTranslateMessage(MSG *pMsg)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (pMsg->message == WM_KEYDOWN)
    {
        if (pMsg->wParam == VK_F2)
        {
            CHMSEmpListDlg dlg(this);
            if (dlg.DoModal() == IDOK)
            {
            }
        }
        if (pMsg->wParam == VK_F3)
        {
            OnWorkingPlaceLabelClick();
            return TRUE;
        }

        if (pMsg->wParam == VK_F7 && 0 > 1)
        {
            OnFindPatientinformation();
            return TRUE;
        }

        if (pMsg->wParam == VK_F5)
        {
            OnUpdateIVFDiscountInFor();
            return TRUE;
        }

        if (GetKeyState(VK_CONTROL) < 0 && pMsg->wParam == _T('S'))
        {
            OnSaveSelect();
        }
        else if (GetKeyState(VK_CONTROL) < 0 && pMsg->wParam == _T('T'))
        {
            OnCancelHMSRegistration();
        }
        else if (GetKeyState(VK_CONTROL) < 0 && pMsg->wParam == _T('F'))
        {
            // MessageBox(_T("OK"));
            m_wndDocumentNo.SetFocus();
            m_wndDocumentNo.SetSel(0, -1);
        }
        else if (GetKeyState(VK_CONTROL) < 0 && pMsg->wParam == _T('B'))
        {
            // MessageBox(_T("OK"));
            CHMSTreatmentHistoryDialog dlg(this);
            dlg.DoModal();
        }

        UINT ctrlId = ::GetDlgCtrlID(pMsg->hwnd);

        if (ctrlId == m_wndWorkingPlace.GetDlgCtrlID())
        {
        }

        if (pMsg->wParam == VK_F7 && m_szObjectKey == _T("7"))
        {
            if (pMF->CheckPermission(_T("01.25")))
            {
                CTransplantDialog dlg(this, m_nDocumentNo);
                if (dlg.DoModal() == IDOK)
                {
                    GetDataToScreen();
                    return TRUE;
                }
            }
        }
        if (pMsg->wParam == VK_TAB)
        {
            if (pMsg->hwnd == m_wndAge.GetSafeHwnd())
            {
                OnAgeCheckValue();
            }
            if (pMsg->hwnd == m_wndIDNo.GetSafeHwnd())
            {
                OnIDNoCheckValue();
            }
            if (pMsg->hwnd == m_wndPhone.GetSafeHwnd())
            {
                OnPhoneCheckValue();
            }
        }
    }
    return CGuiView::PreTranslateMessage(pMsg);
}
void CHMSRegistration::OnTimer(UINT nIDEvent)
{
    // TODO: Add your message handler code here and/or call default
    return;
    if (nIDEvent == 1)
    {
        // OnRoomListLoadData();
    }
    CGuiView::OnTimer(nIDEvent);
}

void CHMSRegistration::OnEnterRecordNo()
{
    if (m_nDocumentNo <= 0)
        return;

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, tmpStr, szgroupid;
    CRecord rs(&pMF->m_db);
    szSQL.Format(
        _T("SELECT su_groupid as groupid FROM sys_user WHERE su_userid = '%s'"),
        pMF->GetCurrentUser());
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("groupid"), szgroupid);

    szSQL.Format(_T("SELECT NVL(hd_recordno, hp_recordno) record_no FROM ")
                 _T("hms_doc LEFT JOIN hms_patient ON (hd_patientno = ")
                 _T("hp_patientno) WHERE hd_docno=%ld "),
                 m_nDocumentNo);
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("record_no"), tmpStr);
    // if (tmpStr.IsEmpty() || pMF->GetCurrentUser() == _T("admin"))
    if (tmpStr.IsEmpty() || szgroupid == _T("A"))
    {
        CGuiInputDataDialog dlg(this, false, true);
        dlg.SetTextLimit(10);
        dlg.m_szGroupName = _T("Outpatient Record");
        dlg.m_szValueName = _T("Record No");
        dlg.m_szTextValue = tmpStr;
        if (dlg.DoModal() == IDOK)
        {
            szSQL.Format(
                _T("UPDATE hms_doc SET hd_recordno='%s' WHERE hd_docno=%ld "),
                dlg.m_szTextValue, m_nDocumentNo);
            pMF->ExecSQL(szSQL);
            szSQL.Format(_T("UPDATE hms_patient SET hp_recordno='%s' WHERE ")
                         _T("hp_patientno=%ld "),
                         dlg.m_szTextValue, m_nPatientNo);
            pMF->ExecSQL(szSQL);
            m_szOutPatientRecord = dlg.m_szTextValue;
            UpdateData(FALSE);
        }
    }
}
#include "HMS_DOC_NOTE.h"
void CHMSRegistration::OnEnterPatientNote()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szdocnote;

    if (m_nDocumentNo <= 0)
        return;

    CHMS_Doc_Note dlg(this, false);
    dlg.DoModal();
    // dlg.m_bViewHistory == false;

    if (1 == 1)
    {
        UpdateData(TRUE);

        szSQL.Format(
            _T(" SELECT GET_RECENT_DOC_NOTE(%ld) as docnote from dual"),
            pMF->m_nDocumentNo);
        rs.ExecSQL(szSQL);
        rs.GetValue(_T("docnote"), szdocnote);
        m_szPatientNote = szdocnote;
        m_wndPatientNote.SetTextColor(RGB(255, 0, 0));
        UpdateData(FALSE);
    }
}

LRESULT CHMSRegistration::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
    // TODO: Add your specialized code here and/or call the base class
#ifdef HAVE_POS
    if (message == WM_POS_RECV_TEXT)
    {
        OnReceiveMessage(wParam, lParam);
        return 0;
    }
#endif
    return CGuiView::WindowProc(message, wParam, lParam);
}

LRESULT CHMSRegistration::OnReceiveMessage(WPARAM wParam, LPARAM lParam)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (!pMF->HasPOS())
        return 0;

    int nLength = (int)wParam;

    LPWSTR strText = reinterpret_cast<LPWSTR>(lParam);
    _tprintf(_T("\r\nText: %s: %d"), strText, nLength);
    if (_tcsncmp(strText, m_szReceiveData, nLength) != 0)
    {
        m_szBillCode.Empty();
        m_szResultCode.Empty();
        m_szAmount.Empty();

        m_szReceiveData = strText;
        _tprintf(_T("\r\nText: %s: %d"), strText, nLength);

        CString szHeader;
        CString szData;
        CString szStatus;
        CStringToken tk(strText, _T(","));

        if (tk.GetSize() > 1)
        {
            tk.GetAt(0, szHeader);
            tk.GetAt(1, szData);
            if (szHeader == _T("#DEV_Dummy"))
            {
                tk.GetAt(2, szStatus);
            }

            if (szHeader == _T("#DEV_Data"))
            {
                tk.GetAt(1, m_szServiceCode);
                CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
                CString szSQL;
                CRecord rs(&pMF->m_db);
                szSQL.Format(_T("SELECT hc_patientno FROM hms_customer WHERE ")
                             _T("hc_servicecode='%s' "),
                             m_szServiceCode);
                rs.ExecSQL(szSQL);
                if (!rs.IsEOF())
                {
                    OnCancelHMSRegistration();
                    long nPatientNo;
                    rs.GetValue(_T("hc_patientno"), nPatientNo);

                    m_nPatientNo = nPatientNo;
                    UpdateData(FALSE);

                    m_wndPatientNo.SetFocus();
                    OnPatientNoCheckValue();
                }
            }
            if (szHeader == _T("#DEV_Sale"))
            {
                tk.GetAt(1, m_szBillCode);
                tk.GetAt(2, m_szAmount);
                tk.GetAt(3, m_szResultCode);
            }
            if (szHeader == _T("#DEV_Void"))
            {
                tk.GetAt(1, m_szBillCode);
                tk.GetAt(2, m_szAmount);
                tk.GetAt(3, m_szResultCode);
            }
        }
    }

    return 0;
}

#include "HMSPatientEncryptDialog.h"

void CHMSRegistration::OnViewSecurePatientProfile()
{
    CHMSPatientEncryptDialog dlg(this, m_nPatientNo, VM_VIEW);
    if (dlg.DoModal() == IDOK)
    {
    }
}

int CHMSRegistration::OnForeignerCheckValue()
{
    UpdateData(TRUE);
    m_szNationality.Empty();
    m_szNationalityDesc.Empty();
    if (m_bForeigner)
    {
        CNationlityDialog dlg(this);
        if (dlg.DoModal() == IDOK)
        {
            m_szNationality = dlg.m_szNationalityKey;
            m_szNationalityDesc.Format(_T("[%s]"), dlg.m_szNationalityDesc);
        }
    }
    m_wndForeignerDesc.SetWindowText(m_szNationalityDesc);
    return 0;
}

void CHMSRegistration::PrintDeposit(long nInvoiceNo)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CReport rpt;
    CString tmpStr, szSQL;
    CRecord rs(&pMF->m_db);
    long nDocumentNo;

    CString szType;

    szSQL.Format(
        _T(" SELECT  hd_patientno as patientno,")
        _T("         hd_docno as docno,")
        _T("         hcr_recordno as recordno,")
        _T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as ")
        _T("pname,")
        _T("         hp_birthdate as birthdate,")
        _T("         hms_getage(trunc(hd_admitdate), hp_birthdate) as age,")
        _T("         sys_sel_getname('sys_sex', hp_sex) as sex,")
        _T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,")
        _T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as ")
        _T("address,")
        _T("         hp_workplace as workplace,")
        _T("         sys_sel_getname('hms_rank', hp_rank) as rank,")
        _T("         sys_sel_getname('hms_position', hp_position) as position,")
        _T("         hfe_type as typeid,")
        _T("         Get_DepartmentName(hfe_deptid) as deptname,")
        _T("         ho_desc as objname,")
        _T("         hfe_deptid as depts,")
        _T("         hfe_serialno as serialno,")
        _T("         hfe_receiptno as recvno,")
        _T("         hfe_date as recvdate,")
        _T("         hfe_staff as receiveby,")
        _T("         hfe_desc as reason,")
        _T("         hfe_amount as cost,")
        _T("         hfe_patpaid as patpaid, hfe_receipttime ")
        _T(" FROM hms_patient")
        _T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
        _T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)")
        _T(" LEFT JOIN hms_fee_deposit ON(hfe_docno=hd_docno)")
        _T(" LEFT JOIN hms_object ON(ho_id=hfe_objectid)")
        _T(" WHERE hfe_invoiceno=%ld")
        _T("       and (hfe_patpaid+hfe_amount) > 0"),
        nInvoiceNo);

    //	_fmsg(_T("%s"), szSQL);

    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
        return;

    double nAdvReceipt = 0, nRefundAmt = 0;
    int nPage = 0;
    CString szReportName;
    CString szReceiptTime;

    rs.GetValue(_T("typeid"), szType);

    szReportName = _T("Reports/HMS/HF_DEPOSITFEE.RPT");

    if (!rpt.Init(szReportName, false, false, 2))
        return;

    // Page Header
    // Report Detail

    CReportSection *rptDetail = NULL;

    rptDetail = rpt.GetReportHeader();

    tmpStr.Empty();
    StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
    rptDetail->SetValue(_T("HealthService"), tmpStr);
    rptDetail->SetValue(_T("HealthService2"), tmpStr);
    rptDetail->SetValue(_T("HealthService3"), tmpStr);
    StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
    rptDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
    rptDetail->SetValue(_T("HOSPITALNAME2"), tmpStr);
    rptDetail->SetValue(_T("HOSPITALNAME3"), tmpStr);

    rs.GetValue(_T("docno"), nDocumentNo);
    tmpStr.Format(_T("%ld"), nDocumentNo);
    rptDetail->SetValue(_T("DocumentNo"), tmpStr);
    rptDetail->SetValue(_T("DocumentNo2"), tmpStr);
    rptDetail->SetValue(_T("DocumentNo3"), tmpStr);

    rs.GetValue(_T("recordno"), tmpStr);
    rptDetail->SetValue(_T("RecordNo"), tmpStr);
    rptDetail->SetValue(_T("RecordNo2"), tmpStr);
    rptDetail->SetValue(_T("RecordNo3"), tmpStr);

    rs.GetValue(_T("bookno"), tmpStr);
    rptDetail->SetValue(_T("BookNo"), tmpStr);
    rptDetail->SetValue(_T("BookNo2"), tmpStr);
    rptDetail->SetValue(_T("BookNo3"), tmpStr);

    CString szSerialNo;
    rs.GetValue(_T("serialno"), szSerialNo);
    rs.GetValue(_T("recvno"), tmpStr);
    szSerialNo.AppendFormat(_T("- %s"), tmpStr);
    rptDetail->SetValue(_T("ReceiptNo"), szSerialNo);
    rptDetail->SetValue(_T("ReceiptNo2"), szSerialNo);
    rptDetail->SetValue(_T("ReceiptNo3"), szSerialNo);

    tmpStr.Format(_T("%ld"), nInvoiceNo);
    rptDetail->SetValue(_T("InvoiceNo"), tmpStr);
    rptDetail->SetValue(_T("InvoiceNo2"), tmpStr);
    rptDetail->SetValue(_T("InvoiceNo3"), tmpStr);
    rptDetail->SetValue(_T("Barcode[128A]"), tmpStr);
    rptDetail->SetValue(_T("Barcode[128B]"), tmpStr);
    rptDetail->SetValue(_T("Barcode[128C]"), tmpStr);
    rptDetail->SetValue(_T("Barcode[39]"), tmpStr);
    rptDetail->SetValue(_T("Barcode[93]"), tmpStr);

    rs.GetValue(_T("pname"), tmpStr);
    rptDetail->SetValue(_T("PATIENTNAME"), tmpStr);
    rptDetail->SetValue(_T("PATIENTNAME2"), tmpStr);
    rptDetail->SetValue(_T("PATIENTNAME3"), tmpStr);
    rs.GetValue(_T("age"), tmpStr);
    rptDetail->SetValue(_T("Age"), tmpStr);
    rptDetail->SetValue(_T("Age2"), tmpStr);
    rptDetail->SetValue(_T("Age3"), tmpStr);
    rs.GetValue(_T("sex"), tmpStr);
    rptDetail->SetValue(_T("Sex"), tmpStr);
    rptDetail->SetValue(_T("Sex2"), tmpStr);
    rptDetail->SetValue(_T("Sex3"), tmpStr);

    rs.GetValue(_T("objname"), tmpStr);
    rptDetail->SetValue(_T("Object"), tmpStr);
    rptDetail->SetValue(_T("Object"), tmpStr);
    rptDetail->SetValue(_T("Object"), tmpStr);

    rs.GetValue(_T("rank"), tmpStr);
    rptDetail->SetValue(_T("Rank"), tmpStr);
    rptDetail->SetValue(_T("Rank"), tmpStr);
    rptDetail->SetValue(_T("Rank"), tmpStr);

    rs.GetValue(_T("position"), tmpStr);
    rptDetail->SetValue(_T("position"), tmpStr);
    rptDetail->SetValue(_T("position"), tmpStr);
    rptDetail->SetValue(_T("position"), tmpStr);

    rs.GetValue(_T("address"), tmpStr);
    rptDetail->SetValue(_T("Address"), tmpStr);
    rptDetail->SetValue(_T("Address2"), tmpStr);
    rptDetail->SetValue(_T("Address3"), tmpStr);

    rs.GetValue(_T("deptname"), tmpStr);
    rptDetail->SetValue(_T("Department"), tmpStr);
    rptDetail->SetValue(_T("Department2"), tmpStr);
    rptDetail->SetValue(_T("Department3"), tmpStr);
    rs.GetValue(_T("reason"), tmpStr);
    if (tmpStr.GetLength() <= 2)
    {
        tmpStr = pMF->GetSelectionString(_T("hms_invoice_desc"), tmpStr);
    }
    rptDetail->SetValue(_T("Reason"), tmpStr);
    rptDetail->SetValue(_T("Reason2"), tmpStr);
    rptDetail->SetValue(_T("Reason3"), tmpStr);

    rs.GetValue(_T("hfe_receipttime"), szReceiptTime);
    rptDetail->SetValue(_T("ReceiptTime"), szReceiptTime);
    rptDetail->SetValue(_T("ReceiptTime2"), szReceiptTime);
    rptDetail->SetValue(_T("ReceiptTime3"), szReceiptTime);

    rs.GetValue(_T("depts"), tmpStr);
    CString szDeptName;
    // CString szDeptName = GetDepartments(tmpStr);
    szDeptName = tmpStr;
    rptDetail->SetValue(_T("Department"), szDeptName);
    rptDetail->SetValue(_T("Department2"), szDeptName);
    rptDetail->SetValue(_T("Department3"), szDeptName);

    FormatCurrencyStr(rs.GetValue(_T("cost")), tmpStr);
    rptDetail->SetValue(_T("TotalAmount"), tmpStr);
    rptDetail->SetValue(_T("TotalAmount2"), tmpStr);
    rptDetail->SetValue(_T("TotalAmount3"), tmpStr);
    CString szSumInWord;

    rs.GetValue(_T("cost"), tmpStr);

    MoneyToString(tmpStr, szSumInWord);
    szSumInWord += _T(" đồng");
    rptDetail->SetValue(_T("SumInWord"), szSumInWord);
    rptDetail->SetValue(_T("SumInWord2"), szSumInWord);
    rptDetail->SetValue(_T("SumInWord3"), szSumInWord);

    CString szDate;

    rs.GetValue(_T("recvdate"), tmpStr);
    szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
    rptDetail->SetValue(_T("ReceiptDate"), szDate);
    rptDetail->SetValue(_T("ReceiptDate2"), szDate);
    rptDetail->SetValue(_T("ReceiptDate3"), szDate);

    // rs.GetValue(_T("recvdate"), tmpStr);

    tmpStr = pMF->GetSysDateTime();
    szDate.Format(rptDetail->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),
                  tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
    rptDetail->SetValue(_T("PrintDate"), szDate);
    rptDetail->SetValue(_T("PrintDate2"), szDate);
    rptDetail->SetValue(_T("PrintDate3"), szDate);

    rs.GetValue(_T("ReceiveBy"), tmpStr);
    tmpStr.Trim();
    CString szDoctor = pMF->GetDoctorName(tmpStr);
    rptDetail->SetValue(_T("ReceiveBy"), szDoctor);
    rptDetail->SetValue(_T("ReceiveBy2"), szDoctor);
    rptDetail->SetValue(_T("ReceiveBy3"), szDoctor);
    rptDetail->SetValue(_T("SheetNumber"), _T("1"));

    rpt.Print();
    // rpt.PrintPreview();

    szSQL.Format(_T("UPDATE hms_fee_deposit SET hfe_print=hfe_print+1 WHERE ")
                 _T("hfe_invoiceno=%ld "),
                 nInvoiceNo);
    pMF->ExecSQL(szSQL);
}

void CHMSRegistration::OnCreateExaminationReceiptFee()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    szSQL.Format(_T("HMS_FEE_CREATE_RECEIPTEXM_C14(%ld, %ld,'%s') "),
                 m_nDocumentNo, m_nReceptIdx, pMF->GetCurrentUser());
    long nInvoiceNo = str2int(pMF->ExecDML(szSQL));
    if (nInvoiceNo > 0)
    {
        pMF->PrintReceipt(nInvoiceNo, true);
    }
    else
    {
        ShowMessageBox(_T("Cannot process with current status."));
    }
}

#include "HMSWorkPlaceDlg.h"

void CHMSRegistration::OnWorkingPlaceLabelClick()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_arWorkPlaces.RemoveAll();
    CWnd *pFocus = GetFocus();

    UpdateData(TRUE);

    CHMSWorkPlaceDlg dlg(this);
    if (GetMode() == VM_ADDPAT)
        dlg.m_nPatientNo = 0;
    else
        dlg.m_nPatientNo = m_nPatientNo;
    if (dlg.DoModal() == IDOK)
    {
        m_szWorkingPlaceID = dlg.m_szWorkingPlaceID;
        m_szWorkingPlaceKey = dlg.m_szWorkingPlaceID;
        m_szWorkingPlace.Format(_T("%s [%s]"), dlg.m_szWorkingPlace,
                                dlg.m_szDepartmentKey);
        if (m_nPatientNo > 0)
        {
            CString szSQL;
            szSQL.Format(_T("UPDATE hms_patient ")
                         _T(" SET hp_workplace = '%s', hp_workplaceid = '%s', ")
                         _T("hp_department = '%s', hp_type = 'E' ")
                         _T(" WHERE hp_patientno = %ld"),
                         dlg.m_szWorkingPlace, dlg.m_szWorkingPlaceID,
                         dlg.m_szDepartmentKey, m_nPatientNo);
            pMF->ExecSQL(szSQL);
        }
        else
        {
            WorkPlaceInfo wpi;
            wpi.szWorkPlaceID = dlg.m_szWorkingPlaceID;
            wpi.szWorkPlaceName.Format(_T("%s [%s]"), dlg.m_szWorkingPlace,
                                       dlg.m_szDepartmentKey);
            wpi.szDepartmentID = dlg.m_szDepartmentKey;
            m_arWorkPlaces.Add(wpi);
        }
        UpdateData(FALSE);
    }
    pFocus->SetFocus();
}

void CHMSRegistration::OnWorkingPlaceEXLabelClick()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (!pMF->CheckPermission(_T("RM.100.1")))
    {
        ShowMessageBox(_T("Cấp quyền RM.100.1 để sử dụng chức năng này!"));
        return;
    }
    CHMSThietLap_Diachi_Vaccine dlg(this);
    dlg.DoModal();
}

void CHMSRegistration::OnResizeLayout()
{

    AddResize(&m_wndExamList, 100, 100);
    AddResize(&m_wndExaminationList, 100, 100);
    AddBottom(&m_wndAddNew, 5, true);
    AddBottom(&m_wndEdit, 5, true);
    AddBottom(&m_wndDelete, 5, true);
    AddBottom(&m_wndSave, 5, true);
    AddBottom(&m_wndCancel, 5, true);
    AddBottom(&m_wndPrint, 5, true);
}

void CHMSRegistration::OnDeptButtonSelect()
{
    return;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (GetMode() == VM_ADDPAT || GetMode() == VM_ADDDOC ||
        GetMode() == VM_ADDEXAM || GetMode() == VM_EDIT)
    {
        UpdateData(TRUE);
        CHMSSpecialExamDialog dlg(this, true);
        m_szCurrentDept = pMF->m_szDept;
        if (dlg.DoModal() == IDOK)
        {
            m_szCurrentDept = dlg.m_szDepartmentKey;
            m_szRoomKey = dlg.m_szRoomKey;
            UpdateData(FALSE);
        }
    }
}

bool CHMSRegistration::IsNewBorn(long nDocNo)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    szSQL.Format(
        _T("SELECT count(*) FROM hms_newborn_record WHERE hnr_docno = %ld"),
        nDocNo);
    rs.ExecSQL(szSQL);
    _tprintf(_T("\r\nNewborn:%d"), rs.GetIntValue());
    if (rs.GetIntValue() > 0)
        return true;
    return false;
}

int CHMSRegistration::OnRoomCheckValue() { return 0; }

int CHMSRegistration::OnExamTypeCheckValue() { return 0; }

void CHMSRegistration::LoadCustomerInfo()
{
    if (m_nCustomerId <= 0)
    {
        return;
    }
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    szSQL.Format(_T("SELECT hbp_name as ten,  extract(year from current_date) ")
                 _T("- hbp_yob as tuoi, hbp_provid, hbp_distid, hbp_villid, ")
                 _T("hbp_phone as sdt ")
                 _T(" FROM hms_birth_package WHERE hbp_id = %ld"),
                 m_nCustomerId);
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("ten"), m_szPatientName);
        rs.GetValue(_T("tuoi"), m_szAge);
        rs.GetValue(_T("hbp_provid"), m_szProvillKey);
        rs.GetValue(_T("hbp_distid"), m_szDistrictKey);
        rs.GetValue(_T("hbp_villid"), m_szVillageKey);
        rs.GetValue(_T("sdt"), m_szPhone);
        UpdateData(FALSE);
    }
}
int CHMSRegistration::OnCheckInsSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (IsCheckCardInfo())
    {
        // NhanLichSuKCB_BH(true);
    }
    return 1;
}

bool CHMSRegistration::IsCheckCardInfo()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    //_msg(_T("%s"),m_szBirthDate);
    if (!pMF->m_bIsAutoCheckCard)
        return false;

    if (pMF->m_szInsuranceWebService != _T("Y"))
        return false;
    if (m_szCardNo.IsEmpty())
        return false;

    if (m_szPatientName.IsEmpty())
        return false;

    if (m_szBirthDate.IsEmpty() || m_szBirthDate == _T("1752/09/14"))
        return false;

    if (m_szSexKey.IsEmpty())
        return false;

    return true;
}
#include "bh_Kiemtrathongtinkham_BH.h"
bool CHMSRegistration::NhanLichSuKCB_BH(bool bShowHis)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    JSONVALUE jsonResponse;
    JSONVALUE jResponse;
    CString szData, szSQL;
    CString szJsonData, tmpStr;
    CString szMahoso; // Ma ho so kham tren du lieu BHXH
    int nTongsobanghi = 0;
    bool nFound = false;
    int nMaloi = 0;
    UpdateData(true);

    if (!pMF->m_bIsAutoCheckCard)
        return false;

    tmpStr = m_szCardNo.Mid(5, 2);
    if (tmpStr == _T("KT"))
    {
        return false;
    }

    JSONVALUE jsonRequest;
    JSONVALUE jRCard_info;
    jsonRequest["maThe"] = m_szCardNo.Left(15);
    jsonRequest["hoTen"] = m_szPatientName;

    tmpStr = CDate::Convert(m_szBirthDate, yyyymmdd, ddmmyyyy);
    tmpStr.Replace(_T("-"), _T("/"));

    jsonRequest["ngaySinh"] = tmpStr;
    jsonRequest["gioiTinh"] = m_szSexKey == _T("F") ? 2 : 1;
    jsonRequest["maCSKCB"] = m_sCardInfo.regplacecde;
    tmpStr = CDate::Convert(m_sCardInfo.regdate, yyyymmdd, ddmmyyyy);
    tmpStr.Replace(_T("-"), _T("/"));
    jsonRequest["ngayBD"] = tmpStr;
    tmpStr = CDate::Convert(m_sCardInfo.expdate, yyyymmdd, ddmmyyyy);
    tmpStr.Replace(_T("-"), _T("/"));
    jsonRequest["ngayKT"] = tmpStr;

    std::wstring json_string;
    jsonRequest.ToString(json_string);
    szJsonData.Format(_T("%s"), json_string.c_str());

    //_msg(_T("%s"),szJsonData);

    bool res = m_insCheckin.NhanLichSuKCB(szJsonData, &jsonResponse);
    if (res)
    {
        CString tmpStr, tmpStr1;
        std::wstring strData;
        JSONVALUE j2, j3, j4;
        JSONVALUE j = jsonResponse.At(_T("maKetQua"));
        JSONVALUE jj = jsonResponse.At(_T("dsLichSuKCB"));
        std::wstring json_string;

        j.ToString(strData);
        tmpStr = strData.c_str();
        tmpStr1.Format(_T("%c"), 34);
        tmpStr.Replace(tmpStr1, _T(""));
        nMaloi = ToInt(tmpStr);
        m_nError = nMaloi;
        CString szMsg;
        szMsg.Empty();
        CWnd *focus = GetFocus();
        if (nMaloi == 0)
        {
            if (bShowHis)
            {
                JSONVALUE j2, j3, j4;
                std::wstring strData;

                CString tmpStr, tmpStr1;
                pMF->Patient.RemoveAll();
                for (int i = 0; i < jj.Size(); i++)
                {

                    j2 = jj.At(i);

                    pMF->patientInfo.HOTEN = m_szPatientName;
                    pMF->patientInfo.GIOITINH = m_szSexKey;
                    pMF->patientInfo.NAMSINH = m_szBirthDate;
                    pMF->patientInfo.SOTHE = m_szCardNo;

                    j3 = j2["maHoSo"];
                    j3.ToString(strData);
                    tmpStr = strData.c_str();
                    tmpStr1.Format(_T("%c"), 34);
                    tmpStr.Replace(tmpStr1, _T(""));
                    pMF->patientInfo.MAKCB = tmpStr;

                    _tprintf(_T("\r\nmaHoSo:%s"), tmpStr);

                    // if(i == 0){
                    szMahoso = tmpStr;
                    //}

                    j3 = j2["maCSKCB"];
                    j3.ToString(strData);
                    tmpStr = strData.c_str();
                    tmpStr1.Format(_T("%c"), 34);
                    tmpStr.Replace(tmpStr1, _T(""));
                    pMF->patientInfo.MABENHVIEN = tmpStr;
                    _tprintf(_T("\r\nmaCSKCB:%s"), tmpStr);

                    j3 = j2["tuNgay"];
                    j3.ToString(strData);
                    tmpStr = strData.c_str();
                    tmpStr1.Format(_T("%c"), 34);
                    tmpStr.Replace(tmpStr1, _T(""));
                    pMF->patientInfo.NGAYGIOVAO = tmpStr;

                    _tprintf(_T("\r\ntuNgay:%s"), tmpStr);

                    j3 = j2["denNgay"];
                    j3.ToString(strData);
                    tmpStr = strData.c_str();
                    tmpStr1.Format(_T("%c"), 34);
                    tmpStr.Replace(tmpStr1, _T(""));
                    pMF->patientInfo.NGAYGIORA = tmpStr;
                    //_tprintf(_T("\r\ndenNgay:%s"), tmpStr);
                    //_msg(_T("%s"),tmpStr);

                    // if(i==0)
                    //{
                    //	if((CompareDate(pMF->GetSysDate(),
                    //m_sCardInfo.szExpdate) <=5)) 		_msg(_T(" vua di kham cach
                    //day 5 ngay"));
                    //
                    // }

                    j3 = j2["tenBenh"];
                    j3.ToString(strData);
                    tmpStr = strData.c_str();
                    tmpStr1.Format(_T("%c"), 34);
                    tmpStr.Replace(tmpStr1, _T(""));
                    pMF->patientInfo.TENBENH = tmpStr;
                    _tprintf(_T("\r\ntenBenh:%s"), tmpStr);

                    j3 = j2["tinhTrang"];
                    j3.ToString(strData);
                    tmpStr = strData.c_str();
                    tmpStr1.Format(_T("%c"), 34);
                    tmpStr.Replace(tmpStr1, _T(""));
                    pMF->patientInfo.TRANGTHAI = tmpStr;
                    _tprintf(_T("\r\ntinhTrang:%s"), tmpStr);

                    j3 = j2["kqDieuTri"];
                    j3.ToString(strData);
                    tmpStr = strData.c_str();
                    tmpStr1.Format(_T("%c"), 34);
                    tmpStr.Replace(tmpStr1, _T(""));
                    pMF->patientInfo.KQDIEUTRI = tmpStr;
                    _tprintf(_T("\r\nkqDieuTri:%s"), tmpStr);
                    pMF->Patient.Add(pMF->patientInfo);
                }

                if (pMF->Patient.GetCount() > 0)
                {

                    Cbh_Kiemtrathongtinkham_BH dlg(this);
                    dlg.DoModal();
                }
                else
                {
                    ShowMessageBox(_T("Thông tin thẻ BH chính xác, xin mời ")
                                   _T("tiếp đón bệnh nhân !"),
                                   0);
                }
            }
        }
        else
        {
            switch (nMaloi)
            {
            case 1:
                szMsg.Format(_T("Thẻ do BHXH BQP Quản lý,đề nghị kiểm tra thẻ ")
                             _T("và giấy tờ tùy thân"));
                break;
            case 2:
                szMsg.Format(_T("Thẻ do BHXH BQP Quản lý,đề nghị kiểm tra thẻ ")
                             _T("và giấy tờ tùy thân"));
                break;
            case 10:
                szMsg.Format(_T("Thẻ hết hạn sử dụng"));
                break;
            case 51:
                szMsg.Format(_T("Mã thẻ không đúng"));
                break;
            case 52:
                szMsg.Format(
                    _T("Mã tỉnh cấp thẻ(kí tự thứ 4,5 của mã thẻ) không đúng"));
                break;
            case 53:
                szMsg.Format(
                    _T("Mã quyền lợi thẻ(kí tự thứ 3 của mã thẻ) không đúng"));
                break;
            case 50:
                szMsg.Format(_T("Không tìm thấy thông tin thẻ BH"));
                ;
                break;
            case 60:
                szMsg.Format(_T("Thẻ sai họ tên"));
                focus = &m_wndPatientName;
                break;
            case 61:
                szMsg.Format(_T("Thẻ sai họ tên(đúng kí tự đầu)"));
                focus = &m_wndPatientName;
                break;

            case 70:
                szMsg.Format(_T("Thẻ sai ngày sinh"));
                focus = &m_wndAge;
                break;
            case 80:
                szMsg.Format(_T("Thẻ sai giới tính"));
                focus = &m_wndSex;
                break;
            case 90:
                szMsg.Format(_T("Thẻ sai nơi đăng ký KCB ban đầu"));
                break;
            case 100:
                szMsg.Format(_T("Lỗi khi lấy dữ liệu sổ thẻ"));
                break;
            case 101:
                szMsg.Format(_T("Lỗi server"));
                break;
            case 110:
                szMsg.Format(_T("Thẻ đã thu hồi"));
                break;
            case 120:
                szMsg.Format(_T("Thẻ đã báo giảm"));
                break;

            case 121:
                szMsg.Format(_T("Thẻ đã báo giảm. Giảm chuyển ngoại tỉnh"));
                break;
            case 122:
                szMsg.Format(_T("Thẻ đã báo giảm. Giảm chuyển nội tỉnh"));
                break;
            case 123:
                szMsg.Format(
                    _T("Thẻ đã báo giảm. Thu hồi do tăng lại cùng đơn vị"));
                break;
            case 124:
                szMsg.Format(_T("Thẻ đã báo giảm. Ngừng tham gia"));
                break;
            case 130:
                szMsg.Format(_T("Trẻ em không xuất trình thẻ"));
                break;
            }
            if (pMF->m_szIPWebSevice.GetLength() == 0)
            {
                szSQL.Format(_T("DELETE from bh_cardinfo where mathe='%s' "),
                             m_szCardNo.Left(15));
                pMF->ExecSQL(szSQL);

                jRCard_info["maThe"] = m_szCardNo.Left(15);
                jRCard_info["hoTen"] = m_szPatientName;
                jRCard_info["ngaySinh"] = m_szBirthDate.Left(4);
                std::wstring jStr;
                jRCard_info.ToString(jStr);
                szJsonData.Format(_T("%s"), jStr.c_str());
                bool res = m_insCheckin.NhanThongTinHanhChinhCuaThe(
                    szJsonData, &jResponse, 0);
                jResponse.ToString(jStr);
                szData.Format(_T("%s"), jStr.c_str());
                CString tmpStr, tmpStr1;
                j = jResponse.At(_T("message"));

                std::wstring strData;
                std::wstring json_string;

                j.ToString(json_string);
                szData.Format(_T("%s"), json_string.c_str());

                tmpStr.Format(_T("%c"), 34);
                szData.Replace(tmpStr, _T(""));
                szData.Replace(_T("("), _T(""));
                szData.Replace(_T(")."), _T(""));
                szData.Replace(_T(")"), _T(""));

                szData.Replace(_T("\\u003cb\\u003e"), _T(""));
                szData.Replace(_T("\\u003c/b\\u003e"), _T(""));

                szData.Replace(_T("<b>"), _T(""));
                szData.Replace(_T("</b>"), _T(""));

                CStringToken data(szData, _T("!"));

                // data 1
                data.GetAt(1, tmpStr);
                CStringToken patient(tmpStr, _T(","));
                patient.GetAt(0, tmpStr);
                CStringToken patient0(tmpStr, _T(":"));
                patient0.GetAt(1, tmpStr);
                tmpStr.Trim();
                m_bh_cardinfoTbl.SetValue(_T("hoten"), tmpStr);

                patient.GetAt(1, tmpStr);
                CStringToken patient2(tmpStr, _T(":"));
                patient2.GetAt(1, tmpStr);
                tmpStr.Trim();
                m_bh_cardinfoTbl.SetValue(_T("ngaysinh"), tmpStr);

                patient.GetAt(2, tmpStr);
                CStringToken patient3(tmpStr, _T(":"));
                patient3.GetAt(1, tmpStr);
                tmpStr.Trim();
                m_bh_cardinfoTbl.SetValue(_T("gioitinh"), tmpStr);

                // data 2
                data.GetAt(2, tmpStr);
                CStringToken patient_1(tmpStr, _T(";"));
                patient_1.GetAt(0, tmpStr);
                CStringToken patient4(tmpStr, _T(":"));
                patient4.GetAt(1, tmpStr);
                tmpStr.Trim();
                m_bh_cardinfoTbl.SetValue(_T("diachi"), tmpStr);

                patient_1.GetAt(1, tmpStr);
                CStringToken patient5(tmpStr, _T(":"));
                patient5.GetAt(1, tmpStr);
                tmpStr.Trim();
                m_bh_cardinfoTbl.SetValue(_T("kcbbd"), tmpStr);

                patient_1.GetAt(2, tmpStr);
                CStringToken patient6(tmpStr, _T(":"));
                patient6.GetAt(1, tmpStr);
                tmpStr.Trim();
                m_bh_cardinfoTbl.SetValue(_T("ngaydk"), tmpStr.Left(10));
                m_bh_cardinfoTbl.SetValue(_T("ngayhh"), tmpStr.Right(10));

                patient_1.GetAt(3, tmpStr);
                CStringToken patient7(tmpStr, _T(":"));
                patient7.GetAt(1, tmpStr);
                tmpStr.Trim();
                m_bh_cardinfoTbl.SetValue(_T("du5nam"), tmpStr.Left(10));

                m_bh_cardinfoTbl.SetValue(_T("docno"), _T("0"));
                m_bh_cardinfoTbl.SetValue(_T("mathe"), m_szCardNo.Left(15));

                szSQL = m_bh_cardinfoTbl.GetInsertSQL();
                pMF->ExecSQL(szSQL);
            }

            ChmsBhCardInfor dlg(this);
            dlg.m_szInfo = szMsg;
            dlg.m_szCardno = m_szCardNo.Left(15);
            dlg.DoModal();

            if (focus)
            {
                focus->SetFocus();
            }
        }

        if (nMaloi > 0)
            return false;
        return true;
    }
    return 0;
}

int CHMSRegistration::OnIssueCardSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, tmpStr, szCardId = pMF->GetCardId();
    bool bCancel = false;
    if (m_nPatientNo < 0 || m_nDocumentNo < 0)
    {
        return -1;
    }
    if ((m_szSmartcardID != szCardId) && (!m_szSmartcardID.IsEmpty()))
    {
        // TODO:
        tmpStr.Format(_T("Bệnh nhân đã được cấp thẻ mã [%s]. Tác vụ này sẽ ")
                      _T("đổi thẻ mới có mã [%s]. Tiếp tục?"),
                      m_szSmartcardID, szCardId);
        if (ShowMessageBox(tmpStr, MB_YESNO) == IDNO)
        {
            return 0;
        }
        bCancel = true;
    }
    pMF->BeginTransaction();
    szSQL.Format(_T("HMS_SMARTCARD_REGISTRATION('%s', '%s', %ld, %ld, '%s', ")
                 _T("'%s', '%s', '02')"),
                 pMF->GetCurrentUser(), szCardId, m_nPatientNo, m_nDocumentNo,
                 _T("Y"), pMF->GetSysDate(), _T(""));
    long nRet = str2long(pMF->ExecDML(szSQL));
    if (nRet < 0)
    {
        pMF->Rollback();
        if (nRet == -1)
        {
            AfxMessageBox(_T("Thẻ đã được sử dụng cho bệnh nhân khác!"));
        }
        if (nRet == -2)
        {
            AfxMessageBox(_T("Thẻ đã được đăng ký!"));
        }
        return nRet;
    }
    if (bCancel)
    {
        szSQL.Format(_T("HMS_SMARTCARD_DELETE('%s','%s') "), szCardId,
                     pMF->GetCurrentUser());
        nRet = str2long(pMF->ExecDML(szSQL));
        if (nRet <= 0)
        {
            pMF->Rollback();
            AfxMessageBox(_T("Hủy thẻ cũ không thành công!"));
            return nRet;
        }
    }
    pMF->Commit();
    AfxMessageBox(_T("Cấp thẻ mới thành công!"));
    return 0;
}
#include "HMS_Doc_Note_View.h"
void CHMSRegistration::OnCaptureSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    /*if (pMF->m_nPatientNo > 0)
    {
        pMF->SetActivePane(4);
    }*/

    CRecord rs(&pMF->m_db);
    CString szSQL, szdocnote;

    if (m_nDocumentNo <= 0)
        return;

    CHMS_Doc_Note_View dlg(this, true);
    dlg.DoModal();
}
void CHMSRegistration::OnPrintTriageC13(bool m_bPreview, bool m_bDirect)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    static CReport rpt;
    CString szSQL, tmpStr, szWhere;
    CRecord rs(&pMF->m_db);

    m_bDirect = false;

    if (!rpt.Init(_T("Reports/HMS/HR_EXAMINATIONSHEETC13.RPT")))
    {
        _msg(_T("Reports/HMS/HR_EXAMINATIONSHEETC13.RPT"));
        return;
    }

    szSQL.Format(
        _T(" SELECT 	hd_patientno as patientno,  ")
        _T(" 	hd_docno as docno,")
        _T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,")
        _T(" 	hp_birthdate as birthdate,")
        _T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,")
        _T("	HMS_GETDEPARTMENTNAME(he_deptid) as admitdept, ")
        _T(" 	extract(year from hp_birthdate) as yob,")
        _T(" 	hp_sex as sexid,")
        _T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,")
        _T(" 	hp_occupation as occupationid,")
        _T(" 	HMS_GETOCCUPATIENT(hp_occupation) as occupation,")
        _T(" 	sys_sel_getname('hms_rank', cast(hp_rank as nvarchar2(15))) ")
        _T("as rank,")
        _T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,")
        _T(" 	hp_provid as provid,")
        _T(" 	SYS_GetProvillName(hp_provid) as provill,")
        _T(" 	hp_distid as distid,")
        _T(" 	SYS_GetDistrictName(hp_distid) as district,")
        _T(" 	hp_villid as villid,")
        _T(" 	Sys_GetVillageName(hp_villid) as village,")
        _T(" 	hp_workplaceid as workplaceid,")
        _T(" 	hp_workplace as workplace,")
        _T("	hp_department, ")
        _T(" 	hd_object as objectid,")
        _T(" 	HMS_GetObjectName(hd_object) as objectname,")
        _T(" 	case when hd_insline = 'Y' then hd_cardno||' (Trái tuyến)' ")
        _T("else hd_cardno end as cardno,")
        _T(" 	hd_cardidx as cardidx,")
        _T(" 	hc_regdate as regdate,")
        _T(" 	hc_expdate as expdate,")
        _T(" 	hfl_name as examtype,")
        _T(" 	HMS_GetRoomName(he_deptid,he_roomid) as roomname, ")
        _T("	he_receptno as receptno, ")
        _T("	hfl_servprice as amount, ")
        _T("	hd_transplace as transplace, ")
        _T("	hd_transdiagn as transdiagn, ")
        _T("	hd_xobject as xobject, ")
        _T("	(hd_admitdate) as admitdate, ")
        _T("	hd_xcardno as xcardno, ")
        _T("	hd_xissuedate as xissuedate, ")
        _T("	ho_type, hd_healthexam as healthexam, he_examdate as examdate ")
        _T(" FROM hms_patient")
        _T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
        _T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno and ")
        _T("hc_cardno=hd_cardno and hc_idx=hd_cardidx) ")
        _T(" LEFT JOIN hms_exam ON(he_docno=hd_docno)")
        _T(" LEFT JOIN hms_fee_list ON(hfl_typeid='E' and ")
        _T("hfl_feeid=he_examtype) ")
        _T(" LEFT JOIN hms_object ON (hd_object = ho_id)")
        _T(" WHERE he_docno=%ld AND he_receptidx=%d"),
        m_nDocumentNo, m_nReceptIdx);

    int ret = rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    if (rs.IsEOF())
        return;

    // Report Header
    rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"),
                                    pMF->m_CompanyInfo.sc_pname);
    rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"),
                                    pMF->m_CompanyInfo.sc_name);
    tmpStr = pMF->GetSysDateTime();

    CString printDate, szExamDate;
    rs.GetValue(_T("examdate"), szExamDate);

    // MessageBox(tmpStr);

    tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ExamDate")),
                  szExamDate.Mid(11, 5), szExamDate.Mid(8, 2),
                  szExamDate.Mid(5, 2), szExamDate.Left(4));
    rpt.GetReportHeader()->SetValue(_T("Examdate"), tmpStr);

    printDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                     tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));

    rpt.GetReportHeader()->SetValue(_T("PrintDate"), printDate);

    rs.GetValue(_T("admitdate"), szExamDate);
    tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("AdmitDate")),
                  szExamDate.Mid(11, 5), szExamDate.Mid(8, 2),
                  szExamDate.Mid(5, 2), szExamDate.Left(4));
    rpt.GetReportHeader()->SetValue(_T("AdmitDate"), tmpStr);

    rpt.GetReportHeader()->SetValue(_T("PatientNo"),
                                    rs.GetValue(_T("patientno")));
    rs.GetValue(_T("docno"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[128A]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[128C]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[39]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[93]"), tmpStr);

    StringUpper(rs.GetValue(_T("pname")), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("yearofbirth"), rs.GetValue(_T("yob")));

    if (rs.GetValue(_T("objectid")).Trim() == _T("1") &&
        !rs.GetValue(_T("rank")).Trim().IsEmpty())
    {
        tmpStr.Format(_T("%s (%s)"), rs.GetValue(_T("objectname")),
                      rs.GetValue(_T("rank")));
        rpt.GetReportHeader()->SetValue(_T("object"), tmpStr);
    }
    else
        rpt.GetReportHeader()->SetValue(_T("object"),
                                        rs.GetValue(_T("objectname")));

    rpt.GetReportHeader()->SetValue(_T("Department"),
                                    rs.GetValue(_T("admitdept")));
    tmpStr.Empty();
    rpt.GetReportHeader()->SetValue(_T("Age"), rs.GetValue(_T("age")));
    rpt.GetReportHeader()->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
    rpt.GetReportHeader()->SetValue(_T("Occupation"),
                                    rs.GetValue(_T("occupation")));
    tmpStr.Format(_T("%s - %s - %s"), rs.GetValue(_T("village")),
                  rs.GetValue(_T("district")), rs.GetValue(_T("provill")));
    rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
    rs.GetValue(_T("detailaddress"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("DetailAddress"), tmpStr);
    tmpStr.Empty();
    CString szWorkPlace;
    rs.GetValue(_T("workplace"), szWorkPlace);
    rs.GetValue(_T("hp_department"), tmpStr);
    if (!tmpStr.IsEmpty())
    {
        CString szName = pMF->GetDepartmentName(tmpStr);
        if (!szName.IsEmpty())
        {
            szWorkPlace.AppendFormat(_T(" - %s"), szName);
        }
    }
    rpt.GetReportHeader()->SetValue(_T("WorkPlace"), szWorkPlace);
    rpt.GetReportHeader()->SetValue(_T("cardno"), rs.GetValue(_T("cardno")));
    // rpt.PrintPreview();

    rpt.Print();
}
int CHMSRegistration::OnShowPreHistory()
{
    // if(!pMF->CheckPermission(_T("02.05")))
    //{
    // ShowMessageBox(_T("Permission Denined."), 0);
    // return;
    //}
    if ((ToInt(m_szRankKey) >= 15 && ToInt(m_szRankKey) <= 18) ||
        (ToInt(m_szRankKey) >= 22 && ToInt(m_szRankKey) <= 24))
        return -1;
    CHMSDocumentPreviewDialog dlg(this);
    dlg.DoModal();
    return 1;
}

#include "HMSExtInsCardDialog.h"
int CHMSRegistration::OnUpdateExtInsCard()
{
    if (m_nDocumentNo <= 0)
        return 0;

    CHMSExtInsCardDialog dlg(this);
    dlg.DoModal();
    return 0;
}

#include "HMSPatientSelectDialog.h"
#include "HMSUpdateExtraInformation.h"

int CHMSRegistration::OnUpdateExTraInFor()
{
    if (m_nDocumentNo <= 0)
        return 0;

    CCHMSUpdateExtraInFor dlg(this);
    dlg.DoModal();
    return 0;
}

void CHMSRegistration::On108StaffSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // UpdateData(true);
    if ((m_nDocumentNo <= 0) && (GetMode() != VM_ADDPAT))
    {
        AfxMessageBox(_T("Không có hồ sơ nào được chọn"));
        return;
    }
    else
    {

        CHMSWorkPlace108StaffDlg dlg(this);
        if (GetMode() == VM_ADDPAT)
        {
            dlg.m_nDocumentNo = 0;
            dlg.m_szDepartmentKey.Empty();
            dlg.m_szNote.Empty();
        }
        else
        {
            dlg.m_nDocumentNo = m_nDocumentNo;
        }
        if (dlg.DoModal() == IDOK)
        {

            // CString szSQL;
            m_szKhoa = dlg.m_szDepartmentKey;
            m_szNote108Staff = dlg.m_szNote;
            // if (m_b108Staff)
            // szSQL.Format(_T("UPDATE hms_doc SET hd_bv108 ='BV108',
            // hd_khoa='%s', hd_note_108_staff='%s', HD_108staff='%s' WHERE
            // hd_docno = %ld") ,dlg.m_szDepartmentKey,dlg.m_szNote,
            // m_b108Staff?_T("Y"):_T("N"),m_nDocumentNo); pMF->ExecSQL(szSQL);
            //_msg(_T("%s"), szSQL);
        }
        // UpdateData(false);
    }
    m_wndRoom.SetFocus();
}

int CHMSRegistration::OnUpdatePaymentInFor()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    UpdateData(true);

    if (m_nDocumentNo <= 0)
        return 0;

    szSQL.Format(_T(" select count(*) from HMS_FEE_INVOICE fi")
                 _T(" left join hms_fee fe ON (fi.hfe_docno=fe.hfe_docno AND ")
                 _T("fi.HFE_INVOICENO=fe.HFE_INVOICENO)")
                 _T(" where fi.hfe_docno=%ld")
                 _T(" and fi.hfe_status='A'")
                 _T(" and fe.hfe_status='A'")
                 _T(" and fe.hfe_type <> 'E'")
                 _T(" and fe.HFE_CATEGORY <> 'Y'"),
                 pMF->m_nDocumentNo);

    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() > 0)
    {
        ShowMessageBox(_T(" Có hóa đơn thu khoa đã xác nhận chưa thanh toán, ")
                       _T("vui lòng kiểm tra lại!"));
        return 0;
    }

    int ret = ShowMessageBox(
        _T(" Chức năng này sẽ cập nhật lại số hồ sơ thành trạng thái đã thanh ")
        _T("toán, khi sử dụng cần kiểm tra kỹ hồ sơ phí của bệnh nhân tại ")
        _T("module viện phí, các anh KHQS chắc chắn cho bệnh nhân tiếp đón ")
        _T("chứ? "),
        MB_YESNO);
    if (ret == IDNO)
        return -1;
    else
        pMF->BeginTransaction();
    {
        szSQL.Format(
            _T("UPDATE hms_doc SET HDF_ACCEPTEDFEE ='P', HD_UPDATEDBY = '%s', ")
            _T(" HD_UPDATEDDATE = TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
            _T("where hd_docno = %ld "),
            pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->m_nDocumentNo);
        pMF->ExecSQL(szSQL);

        szSQL.Format(
            _T("UPDATE hms_fee_invoice SET HFE_STATUS ='C', HFE_UPDATEDBY = ")
            _T("'%s',  HFE_UPDATEDDATE = TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
            _T("HH24:MI:SS') where HFE_DOCNO = %ld and hfe_status = 'A' "),
            pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->m_nDocumentNo);
        pMF->ExecSQL(szSQL);
    }
    pMF->Commit();
    //_msg(_T("%s"), szSQL);
    SetMode(VM_VIEW);
    return 0;
}

int CHMSRegistration::OnSynInForFromHIStoLIS()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    int nMode = GetMode();
    CString szSQL;
    CRecord rs(&pMF->m_db);

    int ret = ShowMessageBox(_T("Chức năng này sẽ đồng bộ thông tin từ HIS -> ")
                             _T("LIS, Bạn chắc chắn không? "),
                             MB_YESNO);
    if (ret == IDNO)
        return -1;
    else
        // kiem tra xem co send xet nghiem qua TPH ko thi moi bat option
        // szSQL.Format(_T("select count(*) as qty from hms_testorder where
        // nvl(hpc_lab_posted,'N') ='Y' and hpc_docno =%ld  "),m_nDocumentNo );
        szSQL.Format(_T("select count(*) as qty from HMS_TESTORDERLINE where ")
                     _T("nvl(HPCL_POSTED,'N') ='Y' and hpcl_docno =%ld  "),
                     m_nDocumentNo);
    rs.ExecSQL(szSQL);
    int nCount = 0;
    nCount = rs.GetIntValue();
    if (nCount > 0)
    {
        CString szAdress;
        m_sPatientInfoNew.nDocumentNo = m_nDocumentNo;
        m_sPatientInfoNew.nPatientNo = m_nPatientNo;
        m_sPatientInfoNew.szPatientName = m_szPatientName;
        m_sPatientInfoNew.nYearOfBirth = str2int(m_szBirthDate.Left(4));
        m_sPatientInfoNew.szBirthDate = m_szBirthDate;
        m_sPatientInfoNew.szSex = m_szSexKey;
        szAdress.Empty();
        szSQL.Format(
            _T("select case when length(trim(hp_dtladdr)) >1 then  ")
            _T(" hp_dtladdr ||','||hms_getaddress(hp_provid,hp_distid, ")
            _T("hp_villid)  ")
            _T(" else hms_getaddress(hp_provid,hp_distid, hp_villid)  end  as ")
            _T("address ")
            _T(" from hms_patient where hp_patientno = %ld "),
            m_nPatientNo);
        rs.ExecSQL(szSQL);
        m_sPatientInfoNew.szAddress = rs.GetStringValue();
        m_sPatientInfoNew.szPhone = m_szPhone;
        m_sPatientInfoNew.szMaKhoa = pMF->m_szDept;
        szSQL.Format(_T("Select HMS_GETDEPTNOW(%ld) as deptid from dual "),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);
        m_sPatientInfoNew.szMaKhoaHienThoi = rs.GetStringValue();

        // Lấy thêm thông tin hộ chiếu
        szSQL.Format(_T(" SELECT HD_SOHOCHIEU as Sohochieu,")
                     _T(" HD_NGAYCAP_HOCHIEU as Ngaycap,")
                     _T(" HD_HOCHIEU_GHICHU as Note")
                     _T(" from hms_doc where hd_docno=%ld"),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("Sohochieu"), m_szSohochieuNew);
            rs.GetValue(_T("Ngaycap"), m_szApplyDateNew);
            rs.GetValue(_T("Note"), m_szNoteNew);
        }
        m_sPatientInfoNew.szSoHoChieu = m_szSohochieuNew;
        m_sPatientInfoNew.szNgayCapHoChieu = m_szApplyDateNew;
        m_sPatientInfoNew.szGhiChuHoChieu = m_szNoteNew;

        //_msg(_T("%s"),m_szSohochieuOld);
        //_msg(_T("%s"),m_szSohochieuNew);
        //_msg(_T("%s"),m_sPatientInfoNew.szSex);
        //_msg(_T("%s"),m_sPatientInfoNew.szAddress);

        OnSendTPH();
    }
    else
        ShowMessageBox(
            _T("Bệnh nhân này không có mục cận lâm sàng nào được chuyển sang ")
            _T("LIS nên không cần thực hiện tác vụ này"));
    return 0;
}

bool CHMSRegistration::OnSendTPH()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szHost;
    JSONVALUE jbuilder, jDetail, jval;
    CString szJson;

    jbuilder[_T("mabenhnhan")] = m_sPatientInfoNew.nPatientNo;
    jbuilder[_T("sohoso")] = m_sPatientInfoNew.nDocumentNo;

    jbuilder[_T("hoten")] = m_sPatientInfoNew.szPatientName;
    jbuilder[_T("namsinh")] = m_sPatientInfoNew.nYearOfBirth;
    jbuilder[_T("sinhnhat")] = m_sPatientInfoNew.szBirthDate;
    jbuilder[_T("gioitinh")] = m_sPatientInfoNew.szSex;

    jbuilder[_T("diachi")] = m_sPatientInfoNew.szAddress;
    jbuilder[_T("sodienthoai")] = m_sPatientInfoNew.szPhone;
    jbuilder[_T("makhoa")] = m_sPatientInfoNew.szMaKhoa;
    jbuilder[_T("makhoahienthoi")] = m_sPatientInfoNew.szMaKhoaHienThoi;
    jbuilder[_T("sohochieu")] = m_sPatientInfoNew.szSoHoChieu;
    jbuilder[_T("ngaycaphochieu")] = m_sPatientInfoNew.szNgayCapHoChieu;
    jbuilder[_T("ghichuhochieu")] = m_sPatientInfoNew.szGhiChuHoChieu;

    std::wstring json_string;
    jbuilder.ToString(json_string);

    szJson.Format(_T("%s"), json_string.c_str());

    CInternetSession session(_T("VIMES_SEND_TPH"));

    CHttpConnection *pServer = NULL;
    CHttpFile *pFile = NULL;
    CString szResponse;

    CString szURL;

    szURL.Format(_T("%s"), pMF->m_szIpTPH);

    _tprintf(_T("\r\n%s"), szURL);

    BOOL result = FALSE;
    try
    {
        CString strServerName;
        INTERNET_PORT nPort;
        DWORD dwRet = 0;

        CString svr, strobj, strParams;
        DWORD svrtype;
        INTERNET_PORT port;

        CString strHeaders;
        strHeaders = _T("Content-Type: application/json; charset=utf-8");
        _tprintf(_T("\r\n%s\r\n%s"), szJson, strHeaders);
        ::AfxParseURL(szURL, svrtype, svr, strobj, port);

        session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 1000);
        pServer = session.GetHttpConnection(svr, port);

        if (szURL.Left(5) == _T("https"))
            pFile = pServer->OpenRequest(
                CHttpConnection::HTTP_VERB_POST, strobj, NULL, 1, NULL, NULL,
                INTERNET_FLAG_EXISTING_CONNECT | INTERNET_FLAG_SECURE);
        else
            pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,
                                         strobj, NULL, 1, NULL, NULL,
                                         INTERNET_FLAG_EXISTING_CONNECT);

        pFile->AddRequestHeaders(strHeaders);

        char *buff;
        int len = szJson.GetLength() * sizeof(WCHAR);
        buff = new char[len];
        memset(buff, '\0', len);
        ::WideCharToMultiByte(CP_UTF8, 0, szJson, szJson.GetLength(), buff, len,
                              0, 0);

        result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));

        delete buff;

        pFile->QueryInfoStatusCode(dwRet);

        _tprintf(_T("\r\n%d"), dwRet);
        if (dwRet == HTTP_STATUS_OK)
        {
            CHAR szBuff[1024];
            WCHAR szData[1024];
            memset(szBuff, L'\0', 1024);

            while (pFile->Read(szBuff, 1024) > 0)
            {
                CString szStatus, szClass, szDesc;
                long nElecInvoice;

                _tprintf(_T("%s"), szBuff);
                int nbyte = ::MultiByteToWideChar(CP_UTF8, 0, szBuff,
                                                  strlen(szBuff), szData, 1024);
                szData[nbyte] = L'\0';

                szResponse.AppendFormat(_T("%s"), szData);
                _tprintf(_T("\r\nResponse:%s"), szResponse);
                /*	tmpStr.Format(_T("%c"), 34);
                    szResponse.Replace(tmpStr, _T(""));
                    szResponse.Replace(_T(":"), _T(";"));
                    szResponse.Replace(_T(","), _T(";"));

                    CStringToken stResult(szResponse, _T(";"));
                    stResult.GetAt(3, tmpStr);
                    float nCount= str2float(tmpStr);
                    stResult.GetAt(7, tmpStr);
                    if (nCount <0) {
                        _msg(_T("%s"),tmpStr);
                        return false;
                    }*/

                return true;
            }
        }
        else
        {
            ShowMessageBox(_T("Không thể kết nối với sever TPH"));
        }
        delete pFile;
        delete pServer;
    }
    catch (CInternetException *pEx)
    {
        // catch errors from WinInet
        TCHAR pszError[64];
        pEx->GetErrorMessage(pszError, 64);
        _tprintf(_T("%63s"), pszError);
        CString szMsg;
        szMsg.Format(_T("Lỗi khi kết nối với Server TPH [%s]"), pszError);
        ShowMessageBox(szMsg);
    }

    return true;
}

int CHMSRegistration::OnUpdateExTraUserInFor()
{
    if (m_nDocumentNo <= 0)
        return 0;

    CHMSAddextrainforUserDialog dlg(this);
    dlg.DoModal();
    return 0;
}

long CHMSRegistration::OnIssuePlaceLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndIssuePlace.SetSearchEx(true, 2);
    return pMF->LoadProvillList(&m_wndIssuePlace, m_szIssuePlaceKey);
}

int CHMSRegistration::OnUpdateVaccineCovid19InFor()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    UpdateData(true);

    if (m_nDocumentNo <= 0)
        return 0;
    CHMSCovid19VaccinInforDialog dlg(this);

    if (dlg.DoModal() == IDOK)
    {
        m_wndSave.SetFocus();
    }

    SetMode(VM_VIEW);
    return 0;
}

int CHMSRegistration::OnFindPatientinformation()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    UpdateData(true);

    if (m_nDocumentNo <= 0)
        return 0;
    CViewPatientAndRelative dlg(this);
    // dlg.m_nFindDocument = m_nDocumentNo;

    if (dlg.DoModal() == IDOK)
    {
        // m_nFindDocument = dlg.m_nFindDocument;
        // m_szDescription = dlg.m_szDescription;
        m_wndSave.SetFocus();
    }

    SetMode(VM_VIEW);
    return 0;
}

int CHMSRegistration::OnUpdateIVFDiscountInFor()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    UpdateData(true);

    if (m_nDocumentNo <= 0)
        return 0;
    CHMSIVFDiscountInforDialog dlg(this);

    if (dlg.DoModal() == IDOK)
    {
        m_wndSave.SetFocus();
    }

    SetMode(VM_VIEW);
    return 0;
}

void CHMSRegistration::OnAddMaterial()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (pMF->m_nDocumentNo <= 0)
    {
        return;
    }
    CHMSOperationMaterialDialog dlg(this);
    dlg.m_bArmletOrder = true;
    dlg.m_bInpackage = false;
    dlg.m_nRefIndex = 0;
    pMF->m_nRefIndex = 0;
    if (dlg.DoModal() == IDOK)
    {
    }
    return;
}

void CHMSRegistration::OnCreateAdministrationForm()
{
    CHMSExamHtmlDialog dlg(this, _T(""));
    dlg.DoModal();
}

void CHMSRegistration::UpdateJson(BOOL bSave)
{
    if (bSave)
    {
        m_jData[_T("PatientNo")] = m_nPatientNo;
        m_jData[_T("DocumentNo")] = m_nDocumentNo;
        m_jData[_T("CardNoFind")] = m_szCardNoFind;
        m_jData[_T("PatientName")] = m_szPatientName;
        m_jData[_T("Age")] = m_szAge;
        m_jData[_T("BirthDate")] = m_szBirthDate;
        m_jData[_T("Sex")] = m_szSexKey;
        m_jData[_T("Ethnic")] = m_szEthnicKey;
        m_jData[_T("Occupation")] = m_szOccupationKey;
        m_jData[_T("Provill")] = m_szProvillKey;
        m_jData[_T("District")] = m_szDistrictKey;
        m_jData[_T("Village")] = m_szVillageKey;
        m_jData[_T("Address")] = m_szAddressKey;
        m_jData[_T("DetailAddress")] = m_szDetailAddress;
        // m_jData[_T("IDNo")] =  m_szIDNo;
        // m_jData[_T("IssueDate")] =  m_szIssueDate;
        // m_jData[_T("IssuePlace")] =  m_szIssuePlaceKey;
        m_jData[_T("WorkingPlace")] = m_szWorkingPlace;
        m_jData[_T("WorkingPlaceEX")] = m_szWorkingPlaceEXKey;
        m_jData[_T("Phone")] = m_szPhone;
        m_jData[_T("Rank")] = m_szRankKey;
        m_jData[_T("Relative")] = m_szRelative;
        m_jData[_T("Position")] = m_szPositionKey;
        m_jData[_T("ContactAddress")] = m_szContactAddress;
        m_jData[_T("SmartcardID")] = m_szSmartcardID;
        // m_jData[_T("Object")] =  m_szObjectKey;
        m_jData[_T("CardNo")] = m_szCardNo;
        // m_jData[_T("PatientState")] =  m_szPatientStateKey;
        // m_jData[_T("ExamDate")] =  m_szExamDate;
        m_jData[_T("SheetNo")] = m_szSheetNo;
        m_jData[_T("ExamType")] = m_szExamTypeKey;
        m_jData[_T("Room")] = m_szRoomKey;
        m_jData[_T("Hospital")] = m_szHospitalKey;
        m_jData[_T("Disease")] = m_szDisease;
        m_jData[_T("OutPatientRecord")] = m_szOutPatientRecord;
        m_jData[_T("AmountDeposit")] = m_nAmountDeposit;
        m_jData[_T("ExaminePerWeek")] = m_nExaminePerWeek;
        m_jData[_T("ExaminePerMonth")] = m_nExaminePerMonth;
        m_jData[_T("AppointReexamine")] = m_bAppointReexamine;
        m_jData[_T("AppointReexamineDate")] = m_szAppointReexamineDate;
        m_jData[_T("Transfer")] = m_bTransfer;
        m_jData[_T("Foreigner")] = m_bForeigner;
        m_jData[_T("Viettel")] = m_bViettel;
        m_jData[_T("108Staff")] = m_b108Staff;
        m_jData[_T("armobject")] = m_szArmObjectKey;
    }
    else
    {
        m_jData[_T("PatientNo")].GetValue(m_nPatientNo);
        m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
        m_jData[_T("CardNoFind")].GetValue(m_szCardNoFind);
        m_jData[_T("PatientName")].GetValue(m_szPatientName);
        m_jData[_T("Age")].GetValue(m_szAge);
        m_jData[_T("BirthDate")].GetValue(m_szBirthDate);
        m_jData[_T("Sex")].GetValue(m_szSexKey);
        m_jData[_T("Ethnic")].GetValue(m_szEthnicKey);
        m_jData[_T("Occupation")].GetValue(m_szOccupationKey);
        m_jData[_T("Provill")].GetValue(m_szProvillKey);
        m_jData[_T("District")].GetValue(m_szDistrictKey);
        m_jData[_T("Village")].GetValue(m_szVillageKey);
        m_jData[_T("Address")].GetValue(m_szAddressKey);
        m_jData[_T("DetailAddress")].GetValue(m_szDetailAddress);
        // m_jData[_T("IDNo")].GetValue(m_szIDNo);
        // m_jData[_T("IssueDate")].GetValue(m_szIssueDate);
        // m_jData[_T("IssuePlace")].GetValue(m_szIssuePlaceKey);
        m_jData[_T("WorkingPlace")].GetValue(m_szWorkingPlace);
        m_jData[_T("WorkingPlaceEX")].GetValue(m_szWorkingPlaceEXKey);
        m_jData[_T("Phone")].GetValue(m_szPhone);
        m_jData[_T("Rank")].GetValue(m_szRankKey);
        m_jData[_T("Relative")].GetValue(m_szRelative);
        m_jData[_T("Position")].GetValue(m_szPositionKey);
        m_jData[_T("ContactAddress")].GetValue(m_szContactAddress);
        m_jData[_T("SmartcardID")].GetValue(m_szSmartcardID);
        // m_jData[_T("Object")].GetValue(m_szObjectKey);
        m_jData[_T("CardNo")].GetValue(m_szCardNo);
        // m_jData[_T("PatientState")].GetValue(m_szPatientStateKey);
        // m_jData[_T("ExamDate")].GetValue(m_szExamDate);
        m_jData[_T("SheetNo")].GetValue(m_szSheetNo);
        m_jData[_T("ExamType")].GetValue(m_szExamTypeKey);
        m_jData[_T("Room")].GetValue(m_szRoomKey);
        m_jData[_T("Hospital")].GetValue(m_szHospitalKey);
        m_jData[_T("Disease")].GetValue(m_szDisease);
        m_jData[_T("OutPatientRecord")].GetValue(m_szOutPatientRecord);
        m_jData[_T("AmountDeposit")].GetValue(m_nAmountDeposit);
        m_jData[_T("ExaminePerWeek")].GetValue(m_nExaminePerWeek);
        m_jData[_T("ExaminePerMonth")].GetValue(m_nExaminePerMonth);
        m_jData[_T("AppointReexamine")].GetValue(m_bAppointReexamine);
        m_jData[_T("AppointReexamineDate")].GetValue(m_szAppointReexamineDate);
        m_jData[_T("Transfer")].GetValue(m_bTransfer);
        m_jData[_T("Foreigner")].GetValue(m_bForeigner);
        m_jData[_T("Viettel")].GetValue(m_bViettel);
        m_jData[_T("108Staff")].GetValue(m_b108Staff);
        m_jData[_T("armobject")] = m_szArmObjectKey;

        m_jData["RegistrationDate"].GetValue(m_sCardInfo.regdate);
        m_jData["ExpiryDate"].GetValue(m_sCardInfo.expdate);
        m_jData["RegistrationPlace"].GetValue(m_sCardInfo.regplacecde);

        UpdateData(FALSE);
    }
}

void CHMSRegistration::CheckCCCD(LPCTSTR lpszCard)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    _tprintf(lpszCard);
    CString szInfo(lpszCard);
    CStringToken info(szInfo, L"|");
    int nRet = ProcessIdCardQrInput(szInfo);
    if (nRet != 0)
    {
        CString szSQL, szIDCard, szPatientName, szBirthDate;
        CRecord rs(&pMF->m_db);
        szInfo.Replace(_T("||"), _T("| |"));

        int nRet = 0, nSize = 0, nCode = 0;
        if (GetMode() != VM_ADD)
        {
            nRet = ShowMessageBox(L"Không tìm thấy thông tin trên cổng. Bạn có "
                                  L"muốn tạo bệnh nhân mới không?",
                                  MB_YESNO);
            if (nRet != IDYES)
                return;
            SetMode(VM_ADDPAT);
        }
        /* Code khong chuan nen comment lại
        // Tìm kiếm trong bảng hms_patient
        CString szSQL2;
        szSQL2.Format(_T("SELECT hp_patientno, hp_surname||' '||hp_midname||'
        '||hp_firstname as fullname, ") \
            _T("hp_birthdate, sys_sel_getname('sys_sex', hp_sex) as gender, ") \
            _T("hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid,
        hp_distid), nvl(hd_villid, hp_villid)) as address ") \ _T("FROM
        hms_patient WHERE hp_sin='%s'"), szIDCard);

        CRecord rs2(&pMF->m_db);
        int nCount = rs2.ExecSQL(szSQL2);

        if (nCount > 0) {
            // Nếu tìm thấy bệnh nhân, hiển thị dialog cho người dùng chọn
            CHMSPatientSelectDialog dlg(this);

            // Thêm các cột cho list control
            dlg.m_wndList.InsertColumn(0, _T("Mã BN"), CFMT_NUMBER, 80);
            dlg.m_wndList.InsertColumn(1, _T("Họ tên"), CFMT_TEXT, 200);
            dlg.m_wndList.InsertColumn(2, _T("Ngày sinh"), CFMT_DATE, 100);
            dlg.m_wndList.InsertColumn(3, _T("Giới tính"), CFMT_TEXT, 80);
            dlg.m_wndList.InsertColumn(4, _T("Địa chỉ"), CFMT_TEXT, 250);

            // Thêm dữ liệu vào list
            while (!rs2.IsEOF()) {
                int nItem = dlg.m_wndList.AddItems(
                    rs2.GetValue(_T("hp_patientno")),
                    rs2.GetValue(_T("fullname")),
                    rs2.GetValue(_T("hp_birthdate")),
                    rs2.GetValue(_T("gender")),
                    rs2.GetValue(_T("address"))
                );
                rs2.MoveNext();
            }

            // Hiển thị dialog
            if (dlg.DoModal() == IDOK) {
                // Nếu người dùng chọn một bệnh nhân, load thông tin
                long nPatientNo = dlg.m_nPatientNo;
                if (nPatientNo > 0) {
                    LoadByPatientNo(nPatientNo);
                    return;
                }
            }
        }
        */

        szInfo.Replace(_T("||"), _T("| |"));

        CString szyear, szmonth, szday;

        info.GetAt(0, szIDCard);
        info.GetAt(2, szPatientName);
        info.GetAt(3, szBirthDate);

        /*
        CHMSTreatmentHistoryDialog dlg(this);
        dlg.m_szIDNo = szIDCard;
        SplitName(szPatientName, dlg.m_szLastName, dlg.m_szMidName,
        dlg.m_szFirstName); dlg.m_nYOB = str2long(szBirthDate.Right(4));
        dlg.m_szBirthDate.Format(L"%s/%s/%s"
            , szBirthDate.Right(4), szBirthDate.Mid(2, 2), szBirthDate.Left(2));
        dlg.SetWindowTitle(_T("Danh sách bệnh nhân cùng thông tin"));

        // Hiển thị dialog
        if (dlg.DoModal() == IDOK)
        {
            return;
        }
        */
        m_szPatientName = szPatientName;
        m_szBirthDate.Format(L"%s/%s/%s", szBirthDate.Right(4),
                             szBirthDate.Mid(2, 2), szBirthDate.Left(2));
        UpdateData(FALSE);
        if (CheckDupPatient() > 0)
            return;

        // CString szyear, szmonth, szday;
        szSQL.Format(L"SELECT * FROM person_information WHERE idcardno='%s' ",
                     szIDCard);
        rs.ExecSQL(szSQL);

        if (!rs.IsEOF())
        {
            m_szPatientName = rs.GetValue(L"name");
            m_szBirthDate = rs.GetValue(L"dateofbirth");
            szyear = m_szBirthDate.Left(4);
            szmonth = m_szBirthDate.Mid(5, 2);
            szday = m_szBirthDate.Mid(8, 2);
            m_szAge = szday + szmonth + szyear;
            m_szSexKey = rs.GetValue(L"gender_code");
            m_szNationality = rs.GetValue(L"nationality_code");
            m_szNationalityDesc = rs.GetValue(L"nationality");
            m_szEthnicKey = rs.GetValue(L"ethnic_code");
            m_szProvillKey = rs.GetValue(L"prov_id");
            m_szDistrictKey = rs.GetValue(L"dist_id");
            m_szVillageKey = rs.GetValue(L"vill_id");
            m_szDetailAddress = rs.GetValue(L"address");
            m_szIDNo = szIDCard;
            m_szIssueDate = rs.GetValue(L"dateofissuance");

            // Bổ sung thêm tính năng tìm trong hms_patient where hp_sin =
            // szIDCard
            //  nếu có thì load danh sanh bệnh nhân lên cho chọn
        }
        UpdateData(false);
    }
}
//
// int CHMSRegistration::CheckDupPatient()
//{
//	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
//	CRecord rs(&pMF->m_db);
//	UpdateData();
//	if (pMF->GetProp(_T("hms_a11_dept")) == _T("Y"))
//	{
//		return 0;
//	}
//	if (GetMode() != VM_ADDPAT)
//	{
//		return 0;
//	}
//	if (m_szIDNo.IsEmpty() && m_szPhone.IsEmpty()
//		&& (m_szPatientName.IsEmpty() || m_szBirthDate.Left(4) == _T("1752")))
//	{
//		return 0;
//	}
//	if (!m_bShowDupWarning)
//	{
//		return 0;
//	}
//
//	CString szSQL, szWhere, szSurName, szMidName, szFirstName;
//	int nRet = 0, nSearchType = 0;
//	if (!m_szIDNo.IsEmpty())
//	{
//		szWhere.AppendFormat(_T(" and hp_sin = '%s'"), m_szIDNo);
//		nSearchType = 0;
//	}
//	else if (!m_szPatientName.IsEmpty() && !m_szBirthDate.IsEmpty())
//	{
//		SplitName(m_szPatientName, szSurName, szMidName, szFirstName);
//		szWhere.AppendFormat(
//			_T(" and lower(hp_surname) = lower('%s')") \
//			_T(" and lower(hp_midname) = lower('%s')") \
//			_T(" and lower(hp_firstname) = lower('%s')") \
//			_T(" and to_date('%s', 'yyyy/mm/dd') = hp_birthdate")
//			, szSurName, szMidName, szFirstName, m_szBirthDate);
//		nSearchType = 1;
//		SetDupWarning(false);
//	}
//	else if (!m_szPhone.IsEmpty())
//	{
//		szWhere.AppendFormat(_T(" and hd_telephone = '%s'"), m_szPhone);
//		nSearchType = 2;
//		SetDupWarning(false);
//	}
//	szSQL.Format(
//		_T("    SELECT /*+index(hms_patient(hp_birthdate))*/ Count (*)") \
//		_T("      FROM hms_doc") \
//		_T(" LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno )") \
//		_T("     WHERE 1=1 %s")
//		, szWhere);
//
//	rs.ExecSQL(szSQL);
//	nRet = rs.GetIntValue();
//	if (nRet > 0)
//	{
//		CHMSTreatmentHistoryDialog dlg(this);
//		switch (nSearchType)
//		{
//		case 0:
//			dlg.m_szIDNo = m_szIDNo;
//			break;
//		case 1:
//			dlg.m_szLastName = szSurName;
//			dlg.m_szMidName = szMidName;
//			dlg.m_szFirstName = szFirstName;
//			dlg.m_nYOB = str2int(m_szBirthDate.Left(4));
//			dlg.m_szBirthDate = m_szBirthDate;
//			break;
//		case 2:
//			dlg.m_szTel = m_szPhone;
//			break;
//		}
//		dlg.SetWindowTitle(_T("Danh sách bệnh nhân cùng thông tin"));
//		dlg.DoModal();
//	}
//	return nRet;
//}

// CNTT fix
int CHMSRegistration::CheckDupPatient()
{
    UpdateData();
    if (GetMode() != VM_ADDPAT)
    {
        return 0;
    }
    if (m_szIDNo.IsEmpty() && m_szPhone.IsEmpty() &&
        (m_szPatientName.IsEmpty() || m_szBirthDate.Left(4) == _T("1752")))
    {
        return 0;
    }
    if (!m_bShowDupWarning)
    {
        return 0;
    }
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere, szSurName, szMidName, szFirstName;
    int nRet = 0, nSearchType = 0;

    bool hasOther =
        !m_szPatientName.IsEmpty() || !(m_szBirthDate.Left(4) == _T("1752"));

    if (!m_szIDNo.IsEmpty() && !hasOther)
    {
        szWhere.AppendFormat(_T(" and hp_sin = '%s'"), m_szIDNo);
        nSearchType = 0;
    }
    else if (!m_szPatientName.IsEmpty() && !m_szBirthDate.IsEmpty())
    {
        SplitName(m_szPatientName, szSurName, szMidName, szFirstName);
        szWhere.AppendFormat(
            _T(" and lower(hp_surname) = lower('%s')")
            _T(" and lower(hp_midname) = lower('%s')")
            _T(" and lower(hp_firstname) = lower('%s')")
            _T(" and to_date('%s', 'yyyy/mm/dd') = hp_birthdate"),
            szSurName, szMidName, szFirstName, m_szBirthDate);
        nSearchType = 1;
        SetDupWarning(false);

        if (!m_szIDNo.IsEmpty() && hasOther)
        {
            szWhere.AppendFormat(_T(" or hp_sin = '%s'"), m_szIDNo);
        }
    }
    else if (!m_szPhone.IsEmpty())
    {
        szWhere.AppendFormat(_T(" and hd_telephone = '%s'"), m_szPhone);
        nSearchType = 2;
        SetDupWarning(false);
    }
    else
    {
        return 0;
    }
    szSQL.Format(
        _T("    SELECT /*+index(hms_patient(hp_birthdate))*/ Count (*)")
        _T("      FROM hms_patient")
        _T(" LEFT JOIN hms_doc ON ( hd_patientno = hp_patientno )")
        _T("     WHERE 1=1 %s"),
        szWhere);

    rs.ExecSQL(szSQL);
    nRet = rs.GetIntValue();
    if (nRet > 0)
    {
        CHMSTreatmentHistoryDialog dlg(this);
        switch (nSearchType)
        {
        case 0:
            dlg.m_szIDNo = m_szIDNo;
            break;
        case 1:
            dlg.m_szLastName = szSurName;
            dlg.m_szMidName = szMidName;
            dlg.m_szFirstName = szFirstName;
            dlg.m_nYOB = str2int(m_szBirthDate.Left(4));
            dlg.m_szBirthDate = m_szBirthDate;

            dlg.m_szIDNo = m_szIDNo;
            break;
        case 2:
            dlg.m_szTel = m_szPhone;
            break;
        }
        dlg.SetWindowTitle(_T("Danh sách bệnh nhân cùng thông tin"));
        dlg.DoModal();
    }
    return nRet;
}

void CHMSRegistration::CheckQrCode(LPCTSTR lpszCard)
{
    /*
    CString szNewCard(lpszCard);

    int p = szNewCard.Find(L"|");

    if (p > 0 && !m_szCardNoFind.IsEmpty() &&
    m_szCardNoFind.Find(szNewCard.Left(p)) != -1)
    {
        cout << "Existing.." << endl;
        return;
    }
    */
    m_szCardNoFind = lpszCard;
    OnCardNoFindCheckValue();
}
void CHMSRegistration::SetDupWarning(bool bShow) { m_bShowDupWarning = bShow; }

void CHMSRegistration::SetDupWarning(CWnd *pWnd, CString szValue)
{
    bool bShow = true;
    CString szText;
    pWnd->GetWindowText(szText);
    m_bShowDupWarning = szText == szValue ? false : true;
}
bool CHMSRegistration::isValidPhoneNumber(const CString &input)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // Kiem tra do dai chuoi
    int length = input.GetLength();
    if ((length < 10 || length > 11) &&
        pMF->GetProp(_T("hms_a11_dept")) != _T("Y"))
    {
        return false;
    }

    // kiem tra trong chuoi co ky tu nao ngoai so khong
    for (int i = 0; i < input.GetLength(); ++i)
    {
        if (!isdigit(input[i]))
        {
            return false;
        }
    }
    return true;
}

bool CHMSRegistration::isValidIdCardNumber(const CString &input)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // Kiem tra do dai chuoi
    int length = input.GetLength();
    if ((length < 11 || length > 12) &&
        pMF->GetProp(_T("hms_a11_dept")) != _T("Y"))
    {
        return false;
    }

    // kiem tra trong chuoi co ky tu nao ngoai so khong
    for (int i = 0; i < input.GetLength(); ++i)
    {
        if (!isdigit(input[i]))
        {
            return false;
        }
    }
    return true;
}

int CHMSRegistration::OnPrintFreeBf()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr, szWhere;
    // m_bDirect = false;
    static CReport rpt;
    // rpt.Print(m_bDirect);
    // rpt.PrintPreview();
    // check phải tích vào gói hợp đồng

    szSQL.Format(
        _T(" SELECT ")
        _T("   hee_docno,")
        _T("   NVL(hec_freebf, 'N') as hec_freebf")
        _T(" FROM hms_exm_employee")
        _T(" LEFT JOIN hms_exm_contract ON (HEC_CONTRACT_ID = hee_contract_id)")
        _T(" WHERE hee_docno = %ld"),
        m_nDocumentNo);

    int ret = rs.ExecSQL(szSQL);
    if (rs.IsEOF())
        return 0;

    rs.GetValue(_T("hec_freebf"), tmpStr);

    if (tmpStr == _T("Y"))
    {
        PrintFastFoodReceipt(true);
    }
    else
        return 0;
    return 0;
}
#include "HMSUpdatePatientInforDialog.h"
void CHMSRegistration::OnUpdatePatientInforSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    if (m_nDocumentNo <= 0)
    {
        ShowMessageBox(_T("Không tìm thấy bệnh nhân"), MB_ICONERROR);
        return;
    }

    if (pMF->GetCurrentUser() != _T("admin"))
    {
        ShowMessageBox(_T("Không có quyền thao tác, liên hệ admin"),
                       MB_ICONERROR);
        return;
    }

    CHMSUpdatePatientInforDialog dlg(this);
    dlg.m_nDocumentNo = m_nDocumentNo;
    if (dlg.DoModal() == IDOK)
    {
    }
}

void CHMSRegistration::OnViewEMR()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    /*
    if (pEMRViewed)
    {
        pEMRViewed->BringWindowToTop();
        return;
    }
    */

    pMF->ShowBackstage(new CHMSPatientEMR());
}