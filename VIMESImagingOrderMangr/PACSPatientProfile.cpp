#include ".\pacspatientprofile.h"
#include "Guiutils.h"
#include "Tlhelp32.h"
#include "afxinet.h"
#include <gdiplus.h>

#include "MainFrm.h"
#include "PACSPatientProfile.h"

#include "PACSImageCapture.h"

#include "HMSParaclinicalDialog.h"
#include "ReportDocument.h"
#include "StringToken.h"

#include "DcmImage/DcmInformation.h"
#include "DcmImage/DcmManager.h"
#include "HMSDocumentPreviewDialog.h"
#include "PCMSSearchByRecordNo.h"
#include "PacsDetailLineInfo.h"
#include "PacsLineInfo.h"

void KillProcess(LPCTSTR appname)
{
    ///////////////////////////////////////////////////////////////
    // Finding Application which we have specified once that
    // application finds it will give you message Application found
    // then first of all it opens that process and getting all rights
    // of that application.Once we have all rights then we can kill
    // that application with Terminate Process.
    ///////////////////////////////////////////////////////////////
    HANDLE hndl = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    DWORD dwsma = GetLastError();

    DWORD dwExitCode = 0;

    PROCESSENTRY32 procEntry = {0};
    procEntry.dwSize = sizeof(PROCESSENTRY32);
    Process32First(hndl, &procEntry);
    do
    {
        if (_tcsicmp(procEntry.szExeFile, appname) == 0)
        {
            ///////////////////////////////////////////////////////////////
            HANDLE hHandle;
            hHandle =
                ::OpenProcess(PROCESS_ALL_ACCESS, 0, procEntry.th32ProcessID);

            ::GetExitCodeProcess(hHandle, &dwExitCode);
            ::TerminateProcess(hHandle, dwExitCode);

            break;
        }
        // cout<<"Running Process "<<"          "<<procEntry.szExeFile<<endl;
    } while (Process32Next(hndl, &procEntry));
}

static int _OnViewExaminationHistoryFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnViewExaminationHistory();
    return 0;
}
static int _OnSendPatientTreatmentFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnSendPatientTreatment();
}
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDocumentNoSetfocus();} */
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnDocumentNoCheckValue();
}
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnBarcodeSetfocus();} */
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnBarcodeCheckValue();
}
static int _OnCodeSaveCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnCodeSaveCheckValue();
}
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnPatientNameSetfocus();} */
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnPatientNameCheckValue();
}

/*static void _OnAgeChangeFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnAgeSetfocus();} */
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnAgeCheckValue();
}
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
    ((CPACSPatientProfile *)pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSexSelendokFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnSexAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnAddressSetfocus();} */
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnAddressCheckValue();
}
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDiagnosticSetfocus();} */
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnDiagnosticCheckValue();
}
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnOrderDateSetfocus();} */
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnOrderDateCheckValue();
}
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                     int nNewItemSel)
{
    ((CPACSPatientProfile *)pWnd)
        ->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDoctorSelendokFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDepartmentSetfocus();} */
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnDepartmentCheckValue();
}
/*static void _OnRoomChangeFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnRoomChange();
} */
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnRoomSetfocus();} */
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnRoomKillfocus();
} */
static int _OnRoomCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnRoomCheckValue();
}
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                     int nNewItemSel)
{
    ((CPACSPatientProfile *)pWnd)
        ->OnObjectSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnObjectSelendokFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnObjectAddNew();
}*/
static void _OnEmergencySelectFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnEmergencySelect();
}
static void _OnPerformRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                          int nNewItemSel)
{
    ((CPACSPatientProfile *)pWnd)
        ->OnPerformRoomSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnPerformRoomSelendokFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnPerformRoomSelendok();
}
/*static void _OnPerformRoomSetfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnPerformRoomKillfocus();
}*/
/*static void _OnPerformRoomKillfocusFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnPerformRoomKillfocus();
}*/
static long _OnPerformRoomLoadDataFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnPerformRoomLoadData();
}
/*static void _OnPerformRoomAddNewFnc(CWnd *pWnd){
    ((CPACSPatientProfile *)pWnd)->OnPerformRoomAddNew();
}*/
static long _OnOrderListLoadDataFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnOrderListLoadData();
}
static void _OnOrderListDblClickFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnOrderListDblClick();
}
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
    ((CPACSPatientProfile *)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
}
static int _OnOrderListDeleteItemFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnOrderListDeleteItem();
}
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew)
{
    ((CPACSPatientProfile *)pWnd)->OnTabSelectChange(nOld, nNew);
}
static void _OnUpdateSelectFnc(CWnd *pWnd)
{
    CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
    pVw->OnUpdateSelect();
}
static void _OnSearchSelectFnc(CWnd *pWnd)
{
    CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
    pVw->OnSearchSelect();
}

static void _OnSaveSelectFnc(CWnd *pWnd)
{
    CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
    pVw->OnSaveSelect();
}
static void _OnCancelSelectFnc(CWnd *pWnd)
{
    CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
    pVw->OnCancelSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd)
{
    CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
    pVw->OnPrintSelect();
}

static void _OnInputFormSelectFnc(CWnd *pWnd)
{
    CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
    pVw->OnInputFormSelect();
}

static void _OnCaptureSelectFnc(CWnd *pWnd)
{
    CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
    pVw->OnCaptureSelect();
}
static long _OnMaterialListLoadDataFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnMaterialListLoadData();
}
static void _OnMaterialListDblClickFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnMaterialListDblClick();
}
static void _OnMaterialListSelectChangeFnc(CWnd *pWnd, int nOldItem,
                                           int nNewItem)
{
    ((CPACSPatientProfile *)pWnd)
        ->OnMaterialListSelectChange(nOldItem, nNewItem);
}
static int _OnMaterialListDeleteItemFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnMaterialListDeleteItem();
}

static void _OnAddMaterialInpackageSelectFnc(CWnd *pWnd)
{
    CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
    pVw->OnAddMaterialInpackageSelect();
}

static void _OnAddMaterialOutpackageSelectFnc(CWnd *pWnd)
{
    CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
    pVw->OnAddMaterialOutpackageSelect();
}
static void _OnCallPatientSelectFnc(CWnd *pWnd)
{
    CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
    pVw->OnCallPatientSelect();
}
static int _OnAddPACSPatientProfileFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnAddPACSPatientProfile();
}
static int _OnEditPACSPatientProfileFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnEditPACSPatientProfile();
}
static int _OnDeletePACSPatientProfileFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnDeletePACSPatientProfile();
}
static int _OnSavePACSPatientProfileFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnSavePACSPatientProfile();
}
static int _OnCancelPACSPatientProfileFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnCancelPACSPatientProfile();
}
static int _OnChangeOrderTestFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnChangeOrderTestSelect();
    return 0;
}

static int _OnRollBackOrderFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnRollBackOrder();
    return 0;
}

static int _OnPrintOrderFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnPrintOrder();
    return 0;
}

static int _OnDeleteOrderFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnDeleteOrder();
    return 0;
}

static int _OnCaptureImageFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnCaptureSelect();
    return 0;
}
static int _OnDownloadImageFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->DownloadImage();
    return 0;
}

static int _OnImportImageFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->ImportImage();
    return 0;
}

static int _OnRefreshListFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnOrderListLoadData();
}
static int _OnAddPacsLineInfoFnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnAddPacsLineInfo();
    return 0;
}

static int _OnPrintResultV2Fnc(CWnd *pWnd)
{
    ((CPACSPatientProfile *)pWnd)->OnPrintResultV2();
    return 0;
}

static void _OnPrintPACSSelectFnc(CWnd *pWnd)
{
    CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
    pVw->OnPrintPACSSelect();
}

static int _OnMobileCheckValueFnc(CWnd *pWnd)
{
    return ((CPACSPatientProfile *)pWnd)->OnMobileCheckValue();
}

CPACSPatientProfile::CPACSPatientProfile()
{

    m_nDlgWidth = 1020;
    m_nDlgHeight = 655;
    SetDefaultValues();
    m_wndResult = NULL;
    m_hDicomThread = NULL;
    m_szCheckEnterMaterialOfParaclinical = _T("N");
}
CPACSPatientProfile::~CPACSPatientProfile()
{
    // if(m_wndResult) delete m_wndResult;
}
void CPACSPatientProfile::OnCreateComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndPatientProfile.Create(this, _T("Patient Profile"), 5, 5, 390, 655);
    m_wndDocumentNoLabel.Create(this, _T("DocumentNo"), 10, 30, 110, 55);
    m_wndDocumentNo.Create(this, 115, 30, 200, 55);
    m_wndBarcodeLabel.Create(this, _T("Barcode"), 205, 30, 290, 55);
    m_wndBarcode.Create(this, 295, 30, 385, 55);
    m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
    m_wndPatientName.Create(this, 115, 60, 355, 85);
    m_wndSearch.Create(this, _T("@"), 360, 60, 385, 85);

    m_wndAgeLabel.Create(this, _T("Năm sinh"), 10, 90, 110, 115);
    m_wndAge.Create(this, 115, 90, 200, 115);
    m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 290, 115);
    m_wndSex.Create(this, 295, 90, 385, 115);
    m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 110, 145);
    m_wndAddress.Create(this, 115, 120, 385, 145);
    m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 150, 110, 175);
    m_wndDiagnostic.Create(this, 115, 150, 385, 175);
    m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 180, 110, 205);
    m_wndOrderDate.Create(this, 115, 180, 200, 205);
    m_wndDoctorLabel.Create(this, _T("Doctor"), 205, 180, 250, 205);
    m_wndDoctor.Create(this, 255, 180, 385, 205);
    m_wndDepartmentLabel.Create(this, _T("Department"), 10, 210, 110, 235);
    m_wndDepartment.Create(this, 115, 210, 200, 235);
    m_wndRoomLabel.Create(this, _T("Room"), 205, 210, 250, 235);
    m_wndRoom.Create(this, 255, 210, 385, 235);
    m_wndObjectLabel.Create(this, _T("Object"), 10, 240, 110, 265);
    m_wndObject.Create(this, 115, 240, 385, 265);

    m_wndMobileLabel.Create(this, _T("Điện thoại"), 10, 270, 110, 295);
    m_wndMobileLabel.SetTextColor(RGB(255, 0, 0));
    m_wndMobile.Create(this, 115, 270, 385, 295);
    m_wndPerformRoomLabel.Create(this, _T("Perform Room"), 10, 300, 110, 325);
    m_wndPerformRoom.Create(this, 115, 300, 285, 325);
    m_wndCallPatient.Create(this, _T("Gọi bệnh nhân"), 290, 300, 385, 325);

    m_wndEmergency.Create(this, _T("Emergency"), 300, 625, 385, 650);
    m_wndOrderList.Create(this, 10, 330, 385, 520);
    m_wndTab.Create(this, 395, 5, 1010, 620);

    /*m_wndUpdate.Create(this, _T("&Update"), 395, 625, 485, 650);
    m_wndSave.Create(this, _T("&Save"), 490, 625, 580, 650);
    m_wndCancel.Create(this, _T("&Cancel"), 585, 625, 675, 650);
    m_wndPrint.Create(this, _T("&Print"), 680, 625, 770, 650);
    m_wndInputForm.Create(this, _T("&Input Form"), 775, 625, 865, 650);
    m_wndCapture.Create(this, _T("&Capture - F5"), 920, 625, 1010, 650);*/
    m_wndUpdate.Create(this, _T("&Update"), 395, 625, 480, 650);
    m_wndSave.Create(this, _T("&Save"), 485, 625, 565, 650);
    m_wndCancel.Create(this, _T("&Cancel"), 570, 625, 650, 650);
    m_wndPrint.Create(this, _T("&Print"), 656, 625, 726, 650);
    m_wndInputForm.Create(this, _T("&Input Form"), 824, 625, 909, 650);
    m_wndCapture.Create(this, _T("&Capture - F5"), 920, 625, 1010, 650);

    m_wndMaterialList.Create(this, 10, 522, 385, 620);
    m_wndAddMaterialInpackage.Create(this, _T("Add Material &Inpackage"), 10,
                                     625, 150, 650);
    m_wndAddMaterialOutpackage.Create(this, _T("Add Material &Outpackage"), 155,
                                      625, 295, 650);
    // m_wndCallPatient.Create(this, _T("Call Patient"), 290, 270, 385, 295);
    // m_wndPrintPACS.Create(this, _T("&PrintPACS"), 734, 625, 809, 650);
    m_wndPrintPACS.Create(this, _T("&PrintPACS"), 0, 0, 0, 0);

    m_wndView.Create(NULL, _T(""), WS_CHILD | WS_VISIBLE | WS_BORDER,
                     CRect(405, 35, 995, 615), this, NULL);
    m_wndParaclinicalOrder.Create(&m_wndTab);
    m_wndOperationOrder.Create(&m_wndTab);
    m_wndFeeDocument.Create(&m_wndTab);

    m_wndTab.Add(_T("Result"), &m_wndView);
    m_wndTab.Add(_T("Paraclinical"), &m_wndParaclinicalOrder);
    m_wndTab.Add(_T("Phẫu thuật - thủ thuật"), &m_wndOperationOrder);
    m_wndTab.Add(_T("Viện phí"), &m_wndFeeDocument);
    m_wndTab.SetCurSel(0);

    // m_wndCodeSave.Create(this, 0, 0, 0, 0);
    // m_wndCodeSave.ShowWindow(SW_HIDE);
    // m_wndCodeSave.EnableWindow(FALSE);
}
void CPACSPatientProfile::OnInitializeComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndDocumentNo.SetCheckValue(true);
    m_wndBarcode.SetLimitText(35);
    m_wndBarcode.SetCheckValue(true);
    m_wndPatientName.SetLimitText(65);
    m_wndPatientName.SetCheckValue(true);
    m_wndPatientName.SetTextColor(RGB(0, 0, 255));

    m_wndPatientName.SetInitCap(true);
    m_wndAge.SetLimitText(15);
    m_wndAge.SetCheckValue(true);
    m_wndSex.SetCheckValue(true);
    m_wndSex.LimitText(1);
    m_wndAddress.SetLimitText(254);
    // m_wndAddress.SetCheckValue(true);
    m_wndDiagnostic.SetLimitText(254);
    // m_wndDiagnostic.SetCheckValue(true);
    m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
    m_wndOrderDate.SetCheckValue(true);
    m_wndDoctor.SetCheckValue(true);
    m_wndDoctor.LimitText(15);
    m_wndDepartment.SetCheckValue(true);
    m_wndRoom.SetLimitText(1024);
    m_wndRoom.SetCheckValue(true);
    m_wndObject.SetCheckValue(true);
    m_wndObject.LimitText(1024);
    m_wndPerformRoom.SetCheckValue(true);
    m_wndPerformRoom.LimitText(1024);

    m_wndPerformRoom.SetCheckValue(true);

    m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndSex.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

    m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

    /*
        m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
        m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


        m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
        m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
    */

    m_wndPerformRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_CENTER, 30);
    m_wndPerformRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
    m_wndPerformRoom.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 50);
    m_wndPerformRoom.InsertColumn(3, _T("Máy"), CFMT_TEXT, 120);

    m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
    //	m_wndOrderList.GetHeaderControl()->SetItemHeight(2);
    m_wndOrderList.ModifyStyle(0, LVS_NOSORTHEADER);

    m_wndOrderList.InsertColumn(0, _T("Order ID"), CFMT_TEXT, 80);
    m_wndOrderList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
    m_wndOrderList.InsertColumn(2, _T("Dept"), CFMT_TEXT, 60);
    m_wndOrderList.InsertColumn(3, _T("Order Date"), CFMT_DATE, 120);
    m_wndOrderList.InsertColumn(4, _T("Perform Date"), CFMT_DATE, 120);
    m_wndOrderList.InsertColumn(5, _T("Created By"), CFMT_TEXT, 90);
    m_wndOrderList.InsertColumn(6, _T("Practitioner"), CFMT_TEXT, 120);
    m_wndOrderList.InsertColumn(7, _T("Result"), CFMT_TEXT, 0);
    m_wndOrderList.InsertColumn(8, _T("itemid"), CFMT_TEXT, 0);
    m_wndOrderList.InsertColumn(9, _T("formid"), CFMT_TEXT, 0);
    m_wndOrderList.InsertColumn(10, _T("Orderlineid"), CFMT_NUMBER, 0);
    m_wndOrderList.InsertColumn(11, _T("Status Line"), CFMT_TEXT, 0);
    m_wndOrderList.InsertColumn(12, _T("Perform Room"), CFMT_TEXT, 90);
    m_wndOrderList.InsertColumn(13, _T("isreq"), CFMT_TEXT, 0);
    m_wndOrderList.InsertColumn(14, _T(""), CFMT_TEXT, 0); // statusmap
    m_wndOrderList.InsertColumn(15, _T(""), CFMT_TEXT, 0); // group
    m_wndOrderList.InsertColumn(16, _T(""), CFMT_TEXT, 0); // class
    m_wndOrderList.InsertColumn(17, _T("ServPrice"), CFMT_MONEY, 100); // don
                                                                       // gia
    m_wndOrderList.InsertColumn(18, _T("InsPrice"), CFMT_MONEY, 100); // don gia
    m_wndOrderList.InsertColumn(
        19, _T("Thanh toán"), CFMT_TEXT,
        80); // Trạng thái thanh toán hay chưa dùng check IVF
    m_wndOrderList.InsertColumn(
        20, _T("Feestatus"), CFMT_TEXT,
        0); // Trạng thái trả lại 1 mục phí lấy trong hms_fee dùng check IVF
    m_wndOrderList.InsertColumn(21, _T(""), CFMT_TEXT, 0);
    m_wndOrderList.InsertColumn(22, _T(""), CFMT_TEXT,
                                0); // Phân biệt chỉ định cản quang hay không?

    m_wndMaterialList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 40);
    m_wndMaterialList.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
    m_wndMaterialList.InsertColumn(2, _T("Uom"), CFMT_TEXT, 70);
    m_wndMaterialList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 60);
    m_wndMaterialList.InsertColumn(4, _T("Người tạo"), CFMT_TEXT, 100);
    m_wndMaterialList.InsertColumn(5, _T("Trạng thái"), CFMT_TEXT, 80);

    m_PACS_patientTbl.SetTableName(_T("PACS_patient"));
    m_PACS_patientTbl.AddField(_T("pacsp_createdby"), dfText, 15);
    m_PACS_patientTbl.AddField(_T("pacsp_createddate"), dfDateTime);
    m_PACS_patientTbl.AddField(_T("pacsp_updatedby"), dfText, 15);
    m_PACS_patientTbl.AddField(_T("pacsp_updateddate"), dfDateTime);
    m_PACS_patientTbl.AddField(_T("pacsp_docno"), dfLong);
    m_PACS_patientTbl.AddField(_T("pacsp_object"), dfLong);
    m_PACS_patientTbl.AddField(_T("pacsp_emergcy"), dfText, 1);
    m_PACS_patientTbl.AddField(_T("pacsp_pid"), dfText, 15);
    m_PACS_patientTbl.AddField(_T("pacsp_pname"), dfText, 65);
    m_PACS_patientTbl.AddField(_T("pacsp_birthdate"), dfDate);
    m_PACS_patientTbl.AddField(_T("pacsp_age"), dfText, 15);
    m_PACS_patientTbl.AddField(_T("pacsp_sex"), dfText, 1);
    m_PACS_patientTbl.AddField(_T("pacsp_address"), dfText, 254);
    m_PACS_patientTbl.AddField(_T("pacsp_phone"), dfText, 13);
    m_PACS_patientTbl.AddField(_T("pacsp_occupation"), dfLong);
    m_PACS_patientTbl.AddField(_T("pacsp_diagnostic"), dfText, 254);
    m_PACS_patientTbl.AddField(_T("pacsp_icd10"), dfText, 13);
    m_PACS_patientTbl.AddField(_T("pacsp_doctorid"), dfText, 15);
    m_PACS_patientTbl.AddField(_T("pacsp_orderdate"), dfDateTime);
    m_PACS_patientTbl.AddField(_T("pacsp_orderdept"), dfText, 7);
    m_PACS_patientTbl.AddField(_T("pacsp_orderroom"), dfLong);
    m_PACS_patientTbl.AddField(_T("pacsp_performdate"), dfDateTime);
    m_PACS_patientTbl.AddField(_T("pacsp_performdept"), dfText, 7);
    m_PACS_patientTbl.AddField(_T("pacsp_performroom"), dfLong);
    m_PACS_patientTbl.AddField(_T("pacsp_performerid"), dfText, 15);
    m_szDate = m_szOrderDate = m_szPerformDate = pMF->GetSysDate();

    CString szSQL;
    szSQL.Format(_T("SELECT hc_checkentermaterial_pacs FROM hms_config WHERE ")
                 _T("rownum < 2"));
    CRecord rs(&pMF->m_db);
    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("hc_checkentermaterial_pacs"),
                    m_szCheckEnterMaterialOfParaclinical);
    }

    m_szPerformRoomKey =
        AfxGetApp()->GetProfileString(_T("PERFORM"), _T("ROOMID"), _T(""));

    SetMode(VM_NONE);
}
void CPACSPatientProfile::OnSetWindowEvents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
    // m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
    // m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
    m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
    // m_wndBarcode.SetEvent(WE_CHANGE, _OnBarcodeChangeFnc);
    // m_wndBarcode.SetEvent(WE_SETFOCUS, _OnBarcodeSetfocusFnc);
    // m_wndBarcode.SetEvent(WE_KILLFOCUS, _OnBarcodeKillfocusFnc);
    m_wndBarcode.SetEvent(WE_CHECKVALUE, _OnBarcodeCheckValueFnc);
    //	m_wndCodeSave.SetEvent(WE_CHECKVALUE, _OnCodeSaveCheckValueFnc);
    // m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
    // m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
    // m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
    m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
    // m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
    // m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
    // m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
    m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
    m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
    // m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
    // m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
    m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
    m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
    // m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
    // m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
    // m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
    // m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
    m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
    // m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
    // m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
    // m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
    m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
    // m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
    // m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
    // m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
    m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
    m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
    // m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
    // m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
    m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
    m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
    // m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
    // m_wndDepartment.SetEvent(WE_CHANGE, _OnDepartmentChangeFnc);
    // m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
    // m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
    m_wndDepartment.SetEvent(WE_CHECKVALUE, _OnDepartmentCheckValueFnc);
    // m_wndRoom.SetEvent(WE_CHANGE, _OnRoomChangeFnc);
    // m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
    // m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
    m_wndRoom.SetEvent(WE_CHECKVALUE, _OnRoomCheckValueFnc);
    m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
    // m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
    // m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
    m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
    m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
    // m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
    m_wndEmergency.SetEvent(WE_CLICK, _OnEmergencySelectFnc);
    m_wndPerformRoom.SetEvent(WE_SELENDOK, _OnPerformRoomSelendokFnc);
    // m_wndPerformRoom.SetEvent(WE_SETFOCUS, _OnPerformRoomSetfocusFnc);
    // m_wndPerformRoom.SetEvent(WE_KILLFOCUS, _OnPerformRoomKillfocusFnc);
    m_wndPerformRoom.SetEvent(WE_SELCHANGE, _OnPerformRoomSelectChangeFnc);
    m_wndPerformRoom.SetEvent(WE_LOADDATA, _OnPerformRoomLoadDataFnc);
    // m_wndPerformRoom.SetEvent(WE_ADDNEW, _OnPerformRoomAddNewFnc);
    m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
    m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
    m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);

    //	m_wndOrderList.AddEvent(0, _T("-"), NULL);
    m_wndOrderList.AddEvent(1, _T("&Change Test Order"), _OnChangeOrderTestFnc);
    m_wndOrderList.AddEvent(0, _T("-"), NULL);
    m_wndOrderList.AddEvent(2, _T("Capture\tF5"), _OnCaptureImageFnc);
    m_wndOrderList.AddEvent(0, _T("-"), NULL);
    m_wndOrderList.AddEvent(3, _T("Import image from directory"),
                            _OnImportImageFnc);
    m_wndOrderList.AddEvent(0, _T("-"), NULL);
    m_wndOrderList.AddEvent(4, _T("Download Image"), _OnDownloadImageFnc);
    m_wndOrderList.AddEvent(0, _T("-"), NULL);
    m_wndOrderList.AddEvent(5, _T("Refresh List"), _OnRefreshListFnc);
    m_wndOrderList.AddEvent(0, _T("-"), NULL);
    m_wndOrderList.AddEvent(6, _T("Add Pacs Line Info"), _OnAddPacsLineInfoFnc);
    m_wndOrderList.AddEvent(0, _T("-"), NULL);

    m_wndOrderList.AddEvent(8, _T("In phiếu yêu cầu"), _OnPrintOrderFnc);
    m_wndOrderList.AddEvent(0, _T("-"), NULL);

    m_wndOrderList.AddEvent(9, _T("In phiếu hẹn trả kết quả"),
                            _OnPrintResultV2Fnc);
    m_wndOrderList.AddEvent(0, _T("-"), NULL);

    if (pMF->m_UserInfo.su_groupid == _T("A"))
    {
        m_wndOrderList.AddEvent(
            10, _T("Cập nhật lại trạng thái phiếu đã trả kết quả"),
            _OnRollBackOrderFnc);
        m_wndOrderList.AddEvent(0, _T("-"), NULL);
    }

    m_wndCallPatient.ModifyStyle(WS_TABSTOP, 0);
    m_wndSearch.ModifyStyle(WS_TABSTOP, 0);

    //	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0,
    //VK_DELETE, 0); 	m_wndImage.SetAddImageFnc(_OnAddImageFnc);
    //	m_wndImage.SetRemoveImageFnc(_OnRemoveImageFnc);
    m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
    m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
    m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
    m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
    m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
    m_wndPrintPACS.SetEvent(WE_CLICK, _OnPrintPACSSelectFnc);
    m_wndInputForm.SetEvent(WE_CLICK, _OnInputFormSelectFnc);
    m_wndCapture.SetEvent(WE_CLICK, _OnCaptureSelectFnc);
    m_wndCallPatient.SetEvent(WE_CLICK, _OnCallPatientSelectFnc);
    m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
    m_wndMobile.SetEvent(WE_CHECKVALUE, _OnMobileCheckValueFnc);

    m_wndMaterialList.SetEvent(WE_SELCHANGE, _OnMaterialListSelectChangeFnc);
    m_wndMaterialList.SetEvent(WE_LOADDATA, _OnMaterialListLoadDataFnc);
    m_wndMaterialList.SetEvent(WE_DBLCLICK, _OnMaterialListDblClickFnc);
    m_wndMaterialList.AddEvent(1, _T("Delete"), _OnMaterialListDeleteItemFnc, 0,
                               VK_DELETE, 0);
    m_wndAddMaterialInpackage.SetEvent(WE_CLICK,
                                       _OnAddMaterialInpackageSelectFnc);
    m_wndAddMaterialOutpackage.SetEvent(WE_CLICK,
                                        _OnAddMaterialOutpackageSelectFnc);

    // AddLayoutControl(&m_wndPatientProfile, WS_RESIZEX|WS_RESIZEY, 100, 50,
    // 100, 120); AddLayoutControl(&m_wndTab, WS_RESIZEX|WS_RESIZEY, 100, 100,
    // 100, 100); AddLayoutControl(&m_wndView, WS_RESIZEX|WS_RESIZEY, 100, 100,
    // 100, 100); AddLayoutControl(&m_wndOrderList, WS_REPOSY|WS_RESIZEY, 100,
    // 0, 100, 50); AddLayoutControl(&m_wndImage, WS_REPOSY|WS_RESIZEY, 100, 50,
    // 100, 50); AddLayoutControl(&m_wndUpdate, WS_REPOSY, 100, 100, 100, 100);
    // AddLayoutControl(&m_wndSave, WS_REPOSY, 100, 100, 100, 100);
    // AddLayoutControl(&m_wndCancel, WS_REPOSY, 100, 100, 100, 100);
    // AddLayoutControl(&m_wndPrint, WS_REPOSY, 100, 100, 100, 100);
    // AddLayoutControl(&m_wndInputForm, WS_REPOSY, 100, 100, 100, 100);
    // AddLayoutControl(&m_wndCapture, WS_REPOSY, 100, 100, 100, 100);
    // m_wndTab.SetAutoColumnSize(true);

    /*
        AddEvent(1, _T("Add	Ctrl+A"), _OnAddPACSPatientProfileFnc, 0, 'A',
       VK_CONTROL); AddEvent(2, _T("Edit	Ctrl+E"),
       _OnEditPACSPatientProfileFnc, 0, 'E', VK_CONTROL); AddEvent(3, _T("Delete
       Ctrl+D"), _OnDeletePACSPatientProfileFnc, 0, 'D', VK_CONTROL);
        AddEvent(4, _T("Save	Ctrl+S"), _OnSavePACSPatientProfileFnc, 0, 'S',
       VK_CONTROL); AddEvent(0, _T("-")); AddEvent(5, _T("Cancel	Ctrl+T"),
       _OnCancelPACSPatientProfileFnc, 0, 'T', VK_CONTROL);
    */
    EnableButtons(TRUE, 0, 3, 5, -1);

    // SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize()+2, TRUE);
    m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));
    // SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize()+2, TRUE);
    m_wndPatientName.SetTextColor(RGB(0, 0, 255));
    if (pMF->m_szUserGroup == _T("D") || pMF->m_szUserGroup == _T("P"))
    {
        AddEvent(1, _T("Examination History"), _OnViewExaminationHistoryFnc);
    }
    AddEvent(2, _T("Phiếu khám chuyên khoa"), _OnSendPatientTreatmentFnc);
}
void CPACSPatientProfile::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
    DDX_Text(pDX, m_wndBarcode.GetDlgCtrlID(), m_nBarcode);
    DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
    DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
    DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
    DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
    DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
    DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
    DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
    DDX_Text(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
    DDX_Text(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
    DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
    DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);
    DDX_TextEx(pDX, m_wndPerformRoom.GetDlgCtrlID(), m_szPerformRoomKey);
    DDX_Text(pDX, m_wndMobile.GetDlgCtrlID(), m_szMobile);
    // DDX_Text(pDX, m_wndCodeSave.GetDlgCtrlID(), m_szCodeSave);
}
void CPACSPatientProfile::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();

    if (m_nOrderID > 0)
        szWhere.Format(_T(" and hpc_orderid=%ld"), m_nOrderID);

    szWhere.AppendFormat(_T(" and hpc_groupid in(select sup_permid from ")
                         _T("sys_userperm where sup_userid='%s' ) "),
                         pMF->GetCurrentUser());
    szWhere.AppendFormat(
        _T(" and (substr(hpc_groupid, 1,2) in('B2','B3') or ")
        _T("substr(hpc_groupid, 1, 3) IN('B1E','B1F','B1G','B1H')) "));

    szSQL.Format(
        _T(" SELECT 	hpc_groupid as groupid, hpc_orderid as orderid,")
        _T(" 	hd_patientno as patientno,")
        _T(" 	hd_docno as docno,")
        _T(" 	GET_PATIENTNAME(hd_docno) as pname,")
        _T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,")
        _T(" 	extract(year from hp_birthdate) as yearofbirth,")
        _T(" 	hp_sex as sex,")
        _T(" 	hd_object as objectid,")
        _T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,")
        _T(" 	hd_diagnostic as diagnostic,")
        _T(" 	trunc(hpc_orderdate) as orderdate,")
        _T(" 	hpc_doctor as doctor,")
        _T(" 	hpc_deptid as deptid,")
        _T(" 	hpc_roomid as roomid,")
        _T(" 	trunc(hpc_performdate) as performdate,")
        _T(" 	hpc_practitioner as perfromby, ")
        _T(" 	hpc_instid as instid, ")
        _T(" 	hpc_class as depttype, ")
        _T(" 	hpc_status as status, ")
        _T(" 	hpc_emergency as emergency, ")
        _T("	hd_isinpatient, hd_isreq, hpc_isreq, hd_status, hcr_status, ")
        _T("hd_suggestion, hd_telephone, ho_type as object_type ")
        _T(" FROM hms_patient")
        _T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
        _T(" LEFT JOIN hms_clinical_record on (hcr_docno= hd_docno) ")
        _T(" LEFT JOIN hms_pacsorder ON(hpc_docno=hd_docno)")
        _T(" LEFT JOIN hms_object ON (hd_object = ho_id)")
        _T(" WHERE hpc_docno=%ld %s "),
        m_nDocumentNo, szWhere);

    //_fmsg(_T("%s"), szSQL);
    rs.ExecSQL(szSQL);
    /*if(rs.IsEOF()){
        return;
    }*/
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("docno"), m_nDocumentNo);
        rs.GetValue(_T("hd_status"), m_szDocStatus);
        rs.GetValue(_T("groupid"), m_szGroup);
        rs.GetValue(_T("hcr_status"), m_szClincStatus);
        rs.GetValue(_T("hd_suggestion"), m_szSusgestion);

        pMF->m_nDocumentNo = m_nDocumentNo;
        rs.GetValue(_T("patientno"), pMF->m_nPatientNo);
        pMF->m_nRefIndex = m_nOrderID;

        rs.GetValue(_T("instid"), m_nBarcode);
        rs.GetValue(_T("objectid"), m_szObjectKey);
        rs.GetValue(_T("pname"), m_szPatientName);

        // rs.GetValue(_T("age"), m_szAge);

        rs.GetValue(_T("yearofbirth"), m_szAge);

        rs.GetValue(_T("sex"), m_szSexKey);
        rs.GetValue(_T("address"), m_szAddress);
        rs.GetValue(_T("diagnostic"), m_szDiagnostic);
        rs.GetValue(_T("doctor"), m_szDoctorKey);
        rs.GetValue(_T("orderdate"), m_szOrderDate);
        pMF->m_szOrderDate = m_szOrderDate;
        rs.GetValue(_T("deptid"), m_szDepartmentKey);

        rs.GetValue(_T("roomid"), m_szRoomKey);
        rs.GetValue(_T("performdate"), m_szPerformDate);
        rs.GetValue(_T("PerformedBy"), m_szPerformedBy);
        rs.GetValue(_T("emergency"), m_bEmergency);
        rs.GetValue(_T("status"), m_szStatus);
        rs.GetValue(_T("depttype"), m_szDepartmentType);
        rs.GetValue(_T("hpc_isreq"), m_szReq);
        pMF->m_szID = ToString(m_nDocumentNo);
        rs.GetValue(_T("hd_telephone"), m_szMobile);

        CString tmpStr;
        rs.GetValue(_T("hd_isinpatient"), tmpStr);
        if (tmpStr == _T("Y"))
            m_bInpatient = true;
        else
            m_bInpatient = false;
        pMF->m_szInPatient = tmpStr;

        pMF->m_szObject = m_szObjectKey;

        SetMode(VM_VIEW);
        if (m_nOrderID <= 0)
        {
            OnOrderListLoadData();
        }
        m_wndParaclinicalOrder.RefreshData();
        m_wndOperationOrder.RefreshData();

        pMF->m_szObject = m_szObjectKey;
    }
    else
    {
        m_wndOrderList.DeleteAllItems();
        SetMode(VM_NONE);
    }
}
void CPACSPatientProfile::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_PACS_patientTbl.SetValue(_T("pacsp_createdby"), pMF->GetCurrentUser());
    m_PACS_patientTbl.SetValue(_T("pacsp_createddate"), pMF->GetSysDateTime());
    m_PACS_patientTbl.SetValue(_T("pacsp_updatedby"), pMF->GetCurrentUser());
    m_PACS_patientTbl.SetValue(_T("pacsp_updateddate"), pMF->GetSysDateTime());
    m_PACS_patientTbl.SetValue(_T("pacsp_docno"), m_nDocumentNo);
    m_PACS_patientTbl.SetValue(_T("pacsp_object"), m_szObjectKey);
    m_PACS_patientTbl.SetValue(_T("pacsp_emergcy"), m_bEmergency);
    m_PACS_patientTbl.SetValue(_T("pacsp_pname"), m_szPatientName);
    m_PACS_patientTbl.SetValue(_T("pacsp_age"), m_szAge);
    m_PACS_patientTbl.SetValue(_T("pacsp_sex"), m_szSexKey);
    m_PACS_patientTbl.SetValue(_T("pacsp_address"), m_szAddress);
    m_PACS_patientTbl.SetValue(_T("pacsp_diagnostic"), m_szDiagnostic);
    m_PACS_patientTbl.SetValue(_T("pacsp_doctorid"), m_szDoctorKey);
    m_PACS_patientTbl.SetValue(_T("pacsp_orderdate"), m_szOrderDate);
    m_PACS_patientTbl.SetValue(_T("pacsp_orderdept"), m_szDepartmentKey);
    m_PACS_patientTbl.SetValue(_T("pacsp_orderroom"), m_szRoomKey);
    m_PACS_patientTbl.SetValue(_T("pacsp_performdate"), m_szPerformDate);
    m_PACS_patientTbl.SetValue(_T("pacsp_performerid"), m_szPerformedBy);
}
void CPACSPatientProfile::SetDefaultValues()
{

    m_nDocumentNo = 0;
    m_nBarcode = 0;
    m_szPatientName.Empty();
    m_szAge.Empty();
    m_szSexKey.Empty();
    m_szAddress.Empty();
    m_szDiagnostic.Empty();
    m_szOrderDate.Empty();
    m_szDoctorKey.Empty();
    m_szDepartmentKey.Empty();
    m_szRoomKey.Empty();
    m_szObjectKey.Empty();
    m_bEmergency = FALSE;
    m_bInpatient = false;
    m_szMobile.Empty();
    m_szReq = _T("N");
}
int CPACSPatientProfile::SetMode(int nMode)
{
    int nOldMode = GetMode();
    CGuiView::SetMode(nMode);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    switch (nMode)
    {
    case VM_ADD:
        EnableControls(TRUE);
        EnableButtons(TRUE, 3, 4, -1);
        m_wndDocumentNo.EnableWindow(false);
        m_wndBarcode.EnableWindow(false);
        m_wndPatientName.SetFocus();
        SetDefaultValues();
        szSQL.Format(_T("SELECT max(pacsp_docno)+1 FROM PACS_patient"));
        rs.ExecSQL(szSQL);
        m_nDocumentNo = rs.GetIntValue();
        if (m_nDocumentNo <= 0)
            m_nDocumentNo = 1;

        break;
    case VM_EDIT:
        EnableControls(TRUE);
        EnableButtons(TRUE, 3, 4, -1);
        m_wndDocumentNo.EnableWindow(false);
        m_wndBarcode.EnableWindow(false);
        m_wndPatientName.SetFocus();
        break;
    case VM_VIEW:
        EnableControls(FALSE);
        EnableButtons(FALSE, 0, 3, 4, -1);
        m_wndDocumentNo.EnableWindow(true);
        m_wndBarcode.EnableWindow(true);
        m_wndInputForm.EnableWindow(true);
        break;
    case VM_NONE:
        EnableControls(FALSE);
        EnableButtons(TRUE, 6, 5, -1);
        m_wndDocumentNo.EnableWindow(true);
        m_wndBarcode.EnableWindow(true);
        SetDefaultValues();
        break;
    };
    if (m_szStatus != _T("S") && m_szStatus != _T("T") && m_szStatus != _T("I"))
    {
        m_wndUpdate.EnableWindow(false);
    }

    m_wndPerformRoom.EnableWindow(true);

    m_wndAddMaterialInpackage.EnableWindow(TRUE);
    if (m_szReq == _T("Y"))
        m_wndAddMaterialOutpackage.EnableWindow(TRUE);
    /*if(pMF->GetCurrentDepartmentID() == _T("C5"))
        m_wndCodeSave.EnableWindow(TRUE);
    else
        m_wndCodeSave.EnableWindow(FALSE);*/

    m_wndCallPatient.EnableWindow(TRUE);
    m_wndSearch.EnableWindow(TRUE);
    m_wndMobile.SetReadOnly(true);
    UpdateData(FALSE);
    return nOldMode;
}
/*void CPACSPatientProfile::OnDocumentNoChange(){

} */
/*void CPACSPatientProfile::OnDocumentNoSetfocus(){

} */
/*void CPACSPatientProfile::OnDocumentNoKillfocus(){

} */
int CPACSPatientProfile::OnDocumentNoCheckValue()
{
    UpdateData(TRUE);
    m_nOrderID = 0;
    GetDataToScreen();
    return 0;
}

int CPACSPatientProfile::OnMobileCheckValue() { return 0; }

int CPACSPatientProfile::OnCodeSaveCheckValue()
{
    UpdateData(TRUE);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();
    szSQL.Format(
        _T("select distinct hpc_docno as docno,hpc_orderdate as orderdate ")
        _T("	from hms_pacsorder  ")
        _T("	left join hms_pacs_result ON (hpr_orderid= hpc_orderid) ")
        _T("	where  hpc_pdeptid='C5' and hpr_name='6' ")
        _T("		and lower(hpr_desc) like(chr(37)||lower('%s')||chr(37))  ")
        _T("	and rownum =1 order by hpc_orderdate desc "),
        m_szCodeSave);
    rs.ExecSQL(szSQL);
    //_msg(_T("%s"),szSQL);
    if (rs.IsEOF())
    {
        ShowMessageBox(_T("Không tìm thấy số lưu trữ. Vui lòng kiểm tra lại"),
                       MB_OK);
        return -1;
    }
    else
    {
        rs.GetValue(_T("docno"), m_nDocumentNo);
        if (m_nDocumentNo > 0)
            GetDataToScreen();
    }

    return 0;
}
/*void CPACSPatientProfile::OnBarcodeChange(){

} */
/*void CPACSPatientProfile::OnBarcodeSetfocus(){

} */
/*void CPACSPatientProfile::OnBarcodeKillfocus(){

} */
int CPACSPatientProfile::OnBarcodeCheckValue()
{
    UpdateData(TRUE);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;

    if (m_szDepartmentType.Trim().IsEmpty())
    {
        return -1;
    }

    szSQL.Format(_T("SELECT count(*) FROM hms_pacsorder WHERE hpc_sid=%ld AND ")
                 _T("trunc(hpc_performdate)=trunc(current_date) "),
                 m_nBarcode);
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() > 0)
    {
        m_wndBarcode.SetToolTipMessage(
            _T("This code is using by other patient."));
        return -1;
    }

    szSQL.Format(_T("UPDATE hms_pacsorder SET hpc_sid=%ld WHERE ")
                 _T("hpc_orderid=%ld AND hpc_status='S' "),
                 m_nBarcode, m_nOrderID);
    pMF->ExecSQL(szSQL);
    szSQL.Format(_T("UPDATE hms_pacsorder SET hpc_sid=%ld WHERE hpc_docno=%ld ")
                 _T("AND hpc_status='S' AND hpc_sid<=0 "),
                 m_nBarcode, m_nBarcode, m_nDocumentNo);
    pMF->ExecSQL(szSQL);
    return 0;
}
/*void CPACSPatientProfile::OnPatientNameChange(){

} */
/*void CPACSPatientProfile::OnPatientNameSetfocus(){

} */
/*void CPACSPatientProfile::OnPatientNameKillfocus(){

} */
int CPACSPatientProfile::OnPatientNameCheckValue() { return 0; }
/*void CPACSPatientProfile::OnAgeChange(){

} */
/*void CPACSPatientProfile::OnAgeSetfocus(){

} */
/*void CPACSPatientProfile::OnAgeKillfocus(){

} */
int CPACSPatientProfile::OnAgeCheckValue() { return 0; }
void CPACSPatientProfile::OnPrintOrder()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CPacsDetailLineInfo dlg(&m_wndOrderList);
    dlg.m_szItemName = m_szItemName;
    dlg.m_nOrderLineID = m_nOrderlineID;
    dlg.DoModal();
}

int CPACSPatientProfile::OnRollBackOrder()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    UpdateData(true);
    szSQL.Format(_T("hms_checkbf_update('%s', %ld, %ld, '')"),
                 _T("hms_pacsorder"), pMF->m_nDocumentNo, m_nOrderID);

    int ret0 = str2int(pMF->ExecDML(szSQL));

    if (ret0 > 0)
    {
        ShowMessageBox(_T(" Phiếu đã có ký số, không được phép thao tác! "),
                       MB_ICONERROR);
        return -1;
    }
    int ret = ShowMessageBox(
        _T(" Chức năng này sẽ cập nhật lại trạng thái phiếu thành chưa nhập ")
        _T("kết quả, các anh KHQS chắc chắn chứ? "),
        MB_YESNO);
    if (ret == IDNO)
        return -1;
    else
        pMF->BeginTransaction();
    {
        szSQL.Format(_T("update HMS_PACSORDERLINE set hpcl_status='S', ")
                     _T("HPCL_PRACTITIONER='' where hpcl_docno=%ld and ")
                     _T("hpcl_orderid=%ld and HPCL_ORDERLINEID=%ld "),
                     pMF->m_nDocumentNo, m_nOrderID, m_nOrderlineID);
        rs.ExecSQL(szSQL);

        szSQL.Format(_T("update HMS_PACSORDER set hpc_status='S', ")
                     _T("HPC_PRACTITIONER='', HPC_UPDATEDBY ='%s', ")
                     _T("HPC_UPDATEDDATE = cast_string2timestamp('%s') where ")
                     _T("hpc_docno=%ld and hpc_orderid=%ld"),
                     pMF->GetCurrentUser(), pMF->GetSysDateTime(),
                     pMF->m_nDocumentNo, m_nOrderID);
        rs.ExecSQL(szSQL);
    }
    pMF->Commit();
    OnOrderListLoadData();
    //_msg(_T("%s"), szSQL);
    return 0;
}

void CPACSPatientProfile::OnSexSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CPACSPatientProfile::OnSexSelendok() {}
/*void CPACSPatientProfile::OnSexSetfocus(){

}*/
/*void CPACSPatientProfile::OnSexKillfocus(){

}*/
long CPACSPatientProfile::OnSexLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s' "), m_szSexKey);
    };
    m_wndSex.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel where ")
                 _T("ss_id='sys_sex' %s ORDER BY ss_code"),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndSex.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CPACSPatientProfile::OnSexAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CPACSPatientProfile::OnAddressChange(){

} */
/*void CPACSPatientProfile::OnAddressSetfocus(){

} */
/*void CPACSPatientProfile::OnAddressKillfocus(){

} */
int CPACSPatientProfile::OnAddressCheckValue() { return 0; }
/*void CPACSPatientProfile::OnDiagnosticChange(){

} */
/*void CPACSPatientProfile::OnDiagnosticSetfocus(){

} */
/*void CPACSPatientProfile::OnDiagnosticKillfocus(){

} */
int CPACSPatientProfile::OnDiagnosticCheckValue() { return 0; }
/*void CPACSPatientProfile::OnOrderDateChange(){

} */
/*void CPACSPatientProfile::OnOrderDateSetfocus(){

} */
/*void CPACSPatientProfile::OnOrderDateKillfocus(){

} */
int CPACSPatientProfile::OnOrderDateCheckValue() { return 0; }
void CPACSPatientProfile::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CPACSPatientProfile::OnDoctorSelendok() {}
/*void CPACSPatientProfile::OnDoctorSetfocus(){

}*/
/*void CPACSPatientProfile::OnDoctorKillfocus(){

}*/
long CPACSPatientProfile::OnDoctorLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty())
    {
        szWhere.Format(_T(" WHERE lower(su_userid)=lower('%s') "),
                       m_szDoctorKey);
    };
    m_wndDoctor.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user %s ")
                 _T("ORDER BY su_userid"),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndDoctor.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                             NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CPACSPatientProfile::OnDoctorAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CPACSPatientProfile::OnDepartmentChange(){

} */
/*void CPACSPatientProfile::OnDepartmentSetfocus(){

} */
/*void CPACSPatientProfile::OnDepartmentKillfocus(){

} */
int CPACSPatientProfile::OnDepartmentCheckValue() { return 0; }
/*void CPACSPatientProfile::OnRoomChange(){

} */
/*void CPACSPatientProfile::OnRoomSetfocus(){

} */
/*void CPACSPatientProfile::OnRoomKillfocus(){

} */
int CPACSPatientProfile::OnRoomCheckValue() { return 0; }

void CPACSPatientProfile::OnPerformRoomSelectChange(int nOldItemSel,
                                                    int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CPACSPatientProfile::OnPerformRoomSelendok()
{
    UpdateData(TRUE);
    AfxGetApp()->WriteProfileString(_T("PERFORM"), _T("ROOMID"),
                                    m_szPerformRoomKey);
}
/*void CPACSPatientProfile::OnPerformRoomSetfocus(){

}*/
/*void CPACSPatientProfile::OnPerformRoomKillfocus(){

}*/
long CPACSPatientProfile::OnPerformRoomLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndPerformRoom.IsSearchKey() && ToInt(m_szPerformRoomKey) > 0)
    {
        szWhere.Format(_T(" AND hrl_id=%d "), ToInt(m_szPerformRoomKey));
    };
    m_wndPerformRoom.DeleteAllItems();
    int nCount = 0;
    if (pMF->m_szZoneID == _T("PTTYC") ||
        !pMF->m_UserInfo.su_hms_xdepts.IsEmpty())
    {
        /*szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name ") \
            _T("FROM hms_roomlist LEFT JOIN sys_dept ON(sd_id=hrl_deptid) ") \
            _T("WHERE (sd_id='%s') and hrl_section='HA' AND hrl_active ='Y' AND
           CAST(hrl_id AS NVARCHAR2(5)) IN (select * from table (SElect
           split_str(EX_PERFORMDEPT) from E_USERPERFORMDEPTPERM WHERE
           EX_USERID='%s'))%s ORDER BY hrl_id "), pMF->m_szDept,
           pMF->GetCurrentUser() , szWhere);*/

        szSQL.Format(_T(" SELECT hrl_id AS id,")
                     _T("   hrl_name    AS name,")
                     _T("   hrl_deptid as deptid ")
                     _T(" FROM hms_roomlist")
                     _T(" LEFT JOIN sys_dept")
                     _T(" ON(sd_id                          =hrl_deptid)")
                     _T(" WHERE 1=1")
                     _T(" AND hrl_section                   ='HA'")
                     _T(" AND hrl_active                    ='Y'")
                     _T(" and ((sd_id='%s')")
                     _T(" OR CAST(hrl_id AS NVARCHAR2(3)) IN")
                     _T("   (SELECT                         *")
                     _T("   FROM TABLE")
                     _T("     (SELECT split_str(EX_PERFORMDEPT)")
                     _T("     FROM E_USERPERFORMDEPTPERM")
                     _T("     WHERE EX_USERID='%s'")
                     _T("     )")
                     _T("   ))")
                     _T(" and hrl_deptid ='%s'")
                     _T(" %s ORDER BY hrl_deptid, hrl_id"),
                     pMF->m_szDept, pMF->GetCurrentUser(), pMF->m_szDept,
                     szWhere);
    }
    else
        szSQL.Format(
            _T("SELECT hrl_id as id, hrl_name as name, hrl_deptid as deptid,  ")
            _T(" ma_shortname as serialcode")
            _T(" FROM hms_roomlist LEFT JOIN sys_dept ON(sd_id=hrl_deptid) ")
            _T(" LEFT JOIN hms_machine_list_for_ins")
            _T(" ON (hrl_deptid = ma_deptid and hrl_id = ma_roomid )")
            _T("WHERE (sd_id='%s') and hrl_section='HA' AND hrl_active ='Y' ")
            _T("%s ORDER BY hrl_id "),
            pMF->m_szDept, szWhere);
    nCount = rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    while (!rs.IsEOF())
    {
        m_wndPerformRoom.AddItems(
            rs.GetValue(_T("id")), rs.GetValue(_T("name")),
            rs.GetValue(_T("deptid")), rs.GetValue(_T("serialcode")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CPACSPatientProfile::OnPerformRoomAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

void CPACSPatientProfile::OnObjectSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CPACSPatientProfile::OnObjectSelendok() {}
/*void CPACSPatientProfile::OnObjectSetfocus(){

}*/
/*void CPACSPatientProfile::OnObjectKillfocus(){

}*/
long CPACSPatientProfile::OnObjectLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
    {
        szWhere.Format(_T(" WHERE ho_id='%s' "), m_szObjectKey);
    };
    m_wndObject.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object %s ")
                 _T("ORDER BY ho_id "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndObject.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                             NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CPACSPatientProfile::OnObjectAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CPACSPatientProfile::OnEmergencySelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}

#include "HMSOperationMaterialDialog.h"
void CPACSPatientProfile::OnAddMaterialInpackageSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szDate, tmpStr, szItemID;

    int nSel = m_wndOrderList.GetCurSel();
    if (nSel < 0)
        return;

    UpdateData(true);

    m_nRoomID = ToInt(m_szPerformRoomKey);
    pMF->m_nRoomID = m_nRoomID;

    if (m_nRoomID <= 0)
    {
        ShowMessageBox(_T("Phải chọn phòng làm việc"), MB_OK);
        m_wndPerformRoom.SetFocus();
        return;
    }

    /*if(!pMF->IsActiveDocument())
    {
        ShowMessageBox(_T("H\x1ED3 s\x1A1 \x111\xE3 k\x1EBFt th\xFA\x63 kh\xF4ng
    \x63ho ph\xE9p nh\x1EADp v\x1EADt t\x1B0")); return;
    }*/
    m_nOrderID = str2long(m_wndOrderList.GetItemText(nSel, 0));
    szItemID = m_wndOrderList.GetItemText(nSel, 8);
    CString szClass = m_wndOrderList.GetItemText(nSel, 16);
    CString szOrderDept = m_wndOrderList.GetItemText(nSel, 2);
    CString szPayment = m_wndOrderList.GetItemText(nSel, 19);
    CString szfeestatus = m_wndOrderList.GetItemText(nSel, 20);
    //_msg(_T("%s"), szfeestatus);

    if (szClass == _T("I"))
    {
        szSQL.Format(_T(" SELECT htr_status, htr_treattime")
                     _T(" FROM hms_treatment_record")
                     _T(" WHERE htr_docno=%ld")
                     _T(" AND htr_idx   IN")
                     _T("   (SELECT hpc_refidx FROM hms_pacsorder WHERE ")
                     _T("hpc_docno=%ld AND hpc_orderid=%ld")
                     _T("   )"),
                     m_nDocumentNo, m_nDocumentNo, m_nOrderID);

        rs.ExecSQL(szSQL);
        CString szStatus;
        rs.GetValue(_T("htr_status"), szStatus);
        szSQL.Format(
            _T("Select count(*) from hms_treatment_record where htr_docno = ")
            _T("%ld and htr_status <>'T' and  htr_treattime = %s "),
            m_nDocumentNo, rs.GetValue(_T("htr_treattime")));
        rs.ExecSQL(szSQL);
        int nInt = rs.GetIntValue();
        if (szStatus == _T("T") && nInt == 0)
        {
            ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép thêm"));
            return;
        }
    }
    else
    {
        /*if( (m_szDocStatus == _T("T") &&  m_szSusgestion != _T("C") &&
        m_szSusgestion != _T("D"))
            || (m_szDocStatus == _T("T") &&  (m_szSusgestion ==_T("C") ||
        m_szSusgestion != _T("D")) && m_szClincStatus == _T("T") )   )
        {
            ShowMessageBox(_T("H? so dã k?t thúc. Không cho phép thêm"));
            return;
        }
        */
    }
    if ((szOrderDept == _T("TTDTHM") || szOrderDept == _T("TTHTSS")) &&
        (szPayment != _T("P")))
    {
        ShowMessageBox(
            _T("Bệnh nhân chưa thanh toán, không cho phép nhập thuốc, vật tư"));
        return;
    }

    if ((szOrderDept == _T("TTDTHM") || szOrderDept == _T("TTHTSS")) &&
        (szfeestatus == _T("R")))
    {
        ShowMessageBox(
            _T("Bệnh nhân đã trả lại tiền, không cho phép nhập thuốc, vật tư"));
        return;
    }

    CHMSOperationMaterialDialog dlg(this, 390, 0);
    dlg.SetAutoCenter(false);
    dlg.m_bInpackage = true;
    dlg.m_szOperationName = m_wndOrderList.GetItemText(nSel, 1);

    if (CompareDateTime(m_szPerformDate, pMF->GetSysDateTime()) > 0)
        szDate = m_szPerformDate;
    else
        szDate = pMF->GetSysDateTime();

    dlg.m_szOrderDate = szDate;
    dlg.m_szFeeID = szItemID;
    dlg.m_nRefIndex = m_nOrderID;
    dlg.m_szCreatedBy = pMF->GetCurrentUser();
    dlg.m_szOrderDept = pMF->m_szDept;
    dlg.m_szType = _T("P");
    dlg.m_nRoomID = m_nRoomID;

    // dlg.SetMode(VM_NONE);
    if (dlg.DoModal() == IDOK)
    {
    }
    OnMaterialListLoadData();
}

void CPACSPatientProfile::OnAddMaterialOutpackageSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    CRecord rs(&pMF->m_db);
    CString szSQL, szDate, tmpStr, szItemID;

    int nSel = m_wndOrderList.GetCurSel();
    if (nSel < 0)
        return;

    UpdateData(true);

    m_nRoomID = ToInt(m_szPerformRoomKey);
    pMF->m_nRoomID = m_nRoomID;

    if (m_nRoomID <= 0)
    {
        ShowMessageBox(_T("Phải chọn phòng làm việc"), MB_OK);
        m_wndPerformRoom.SetFocus();
        return;
    }

    /*if(!pMF->IsActiveDocument())
    {
        ShowMessageBox(_T("H\x1ED3 s\x1A1 \x111\xE3 k\x1EBFt th\xFA\x63 kh\xF4ng
    \x63ho ph\xE9p nh\x1EADp v\x1EADt t\x1B0")); return;
    }*/

    m_nOrderID = str2long(m_wndOrderList.GetItemText(nSel, 0));
    szItemID = m_wndOrderList.GetItemText(nSel, 8);

    CString szClass = m_wndOrderList.GetItemText(nSel, 16);
    CString szOrderDept = m_wndOrderList.GetItemText(nSel, 2);
    CString szPayment = m_wndOrderList.GetItemText(nSel, 19);
    CString szfeestatus = m_wndOrderList.GetItemText(nSel, 20);

    _tprintf(_T("\r\n%s"), szClass);
    if (szClass == _T("I"))
    {
        szSQL.Format(_T(" SELECT htr_status, htr_treattime")
                     _T(" FROM hms_treatment_record")
                     _T(" WHERE htr_docno=%ld")
                     _T(" AND htr_idx   IN")
                     _T("   (SELECT hpc_refidx FROM hms_pacsorder WHERE ")
                     _T("hpc_docno=%ld AND hpc_orderid=%ld")
                     _T("   )"),
                     m_nDocumentNo, m_nDocumentNo, m_nOrderID);

        rs.ExecSQL(szSQL);
        CString szStatus;
        rs.GetValue(_T("htr_status"), szStatus);
        szSQL.Format(
            _T("Select count(*) from hms_treatment_record where htr_docno = ")
            _T("%ld and htr_status <>'T' and  htr_treattime = %s "),
            m_nDocumentNo, rs.GetValue(_T("htr_treattime")));
        rs.ExecSQL(szSQL);
        int nInt = rs.GetIntValue();
        if (szStatus == _T("T") && nInt == 0)
        {
            ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép thêm"));
            return;
        }
    }
    else
    {
        if ((m_szDocStatus == _T("T") && m_szSusgestion != _T("C") &&
             m_szSusgestion != _T("D")) ||
            (m_szDocStatus == _T("T") &&
             (m_szSusgestion == _T("C") || m_szSusgestion != _T("D")) &&
             m_szClincStatus == _T("T")))
        {
            ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép thêm"));
            return;
        }
    }
    if ((szOrderDept == _T("TTDTHM") || szOrderDept == _T("TTHTSS")) &&
        (szPayment != _T("P")))
    {
        ShowMessageBox(
            _T("Bệnh nhân chưa thanh toán, không cho phép nhập thuốc, vật tư"));
        return;
    }

    if ((szOrderDept == _T("TTDTHM") || szOrderDept == _T("TTHTSS")) &&
        (szfeestatus == _T("R")))
    {
        ShowMessageBox(
            _T("Bệnh nhân đã trả lại tiền, không cho phép nhập thuốc, vật tư"));
        return;
    }

    CHMSOperationMaterialDialog dlg(this, 390, 0);
    dlg.SetAutoCenter(false);
    dlg.m_bInpackage = false;
    dlg.m_szOperationName = m_wndOrderList.GetItemText(nSel, 1);

    if (CompareDateTime(m_szPerformDate, pMF->GetSysDateTime()) > 0)
        szDate = m_szPerformDate;
    else
        szDate = pMF->GetSysDateTime();

    dlg.m_szOrderDate = szDate;
    dlg.m_szFeeID = szItemID;
    dlg.m_nRefIndex = m_nOrderID;
    dlg.m_szCreatedBy = pMF->GetCurrentUser();
    dlg.m_szOrderDept = pMF->m_szDept;
    dlg.m_szType = _T("P");
    dlg.m_nRoomID = m_nRoomID;

    // dlg.SetMode(VM_NONE);
    if (dlg.DoModal() == IDOK)
    {
    }
    OnMaterialListLoadData();
}

void CPACSPatientProfile::OnAddNewOrder()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    CString szOrderDept;
    CString szInPatient;

    CString szDept = pMF->m_szDept;

    szSQL.Format(_T("SELECT hd_isinpatient, hd_admitdept FROM hms_doc WHERE ")
                 _T("hd_docno=%ld"),
                 m_nDocumentNo);
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
        return;
    rs.GetValue(_T("hd_isinpatient"), szInPatient);
    rs.GetValue(_T("hd_admitdept"), szOrderDept);
    if (szInPatient == _T("Y"))
    {
        szSQL.Format(_T("SELECT hcr_dischargedept FROM hms_clinical_record ")
                     _T("WHERE hcr_docno=%ld"),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("hcr_dischargedept"), szOrderDept);
        }
    }
    pMF->m_szDept = szOrderDept;
    CHMSParaclinicalDialog dlg(pMF);

    if (dlg.DoModal() == IDOK)
    {
        OnOrderListLoadData();
    }
    pMF->m_szDept = szDept;
}
void CPACSPatientProfile::OnDeleteOrder()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;

    int nSel = m_wndOrderList.GetCurSel();
    if (nSel < 0)
        return;
    long nOrderID = str2long(m_wndOrderList.GetItemText(nSel, 0));
    CString szType = m_wndOrderList.GetItemText(nSel, 12);

    if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
        return;

    if (szType == _T("T"))
        szSQL.Format(_T("HMS_TESTORDER_DELETE(%ld,'%s') "), nOrderID,
                     pMF->GetCurrentUser());
    else
        szSQL.Format(_T("HMS_PACSORDER_DELETE(%ld,'%s') "), nOrderID,
                     pMF->GetCurrentUser());

    int ret = str2int(pMF->ExecDML(szSQL));

    if (ret >= 0)
    {
        OnOrderListLoadData();
        m_wndOrderList.SetCurSel(nSel);
    }
}

void CPACSPatientProfile::OnOrderListDblClick()
{
    OnAddMaterialInpackageSelect();
    // CPacsLineInfo *newPopup = new CPacsLineInfo(this);
    // newPopup->OnInitDialog();
    // newPopup->ShowPopup(&m_wndOrderList);
}
#include "atlpath.h"
void CPACSPatientProfile::OnOrderListSelectChange(int nOldItem, int nNewItem)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szFileName, szName, szSQL, tmpStr, szStatus;
    CString szCreatedBy;
    UpdateData(TRUE);

    m_nOrderID = 0;
    m_szItemID.Empty();

    if (nNewItem < 0)
        return;
    OnCancelSelect();

    if (m_wndResult)
    {
        m_wndResult->SendMessage(WM_DESTROY);
        delete m_wndResult;
        m_wndResult = NULL;
    }

    CString szItemID, szFormID;
    int nWidth, nHeight, nOrderID_New, nOrderID_Old;
    CRect rect;
    szItemID = m_wndOrderList.GetItemText(nNewItem, 8);
    m_szItemID = szItemID;
    szCreatedBy = m_wndOrderList.GetItemText(nNewItem, 5);

    m_szDepartmentKey = m_wndOrderList.GetItemText(nNewItem, 2);
    m_szOrderDate = m_wndOrderList.GetItemText(nNewItem, 3);

    m_szPerformDate = m_wndOrderList.GetItemText(nNewItem, 4);
    m_szDoctorKey = m_wndOrderList.GetItemText(nNewItem, 5);
    m_szPerformedBy = m_wndOrderList.GetItemText(nNewItem, 6);
    m_szItemName = m_wndOrderList.GetItemText(nNewItem, 1);
    CString szStatusMap = m_wndOrderList.GetItemText(nNewItem, 14);

    m_szGroup = m_wndOrderList.GetItemText(nNewItem, 15);

    if (szStatusMap == _T("P") || szStatusMap == _T("T"))
    {
        m_szPerformRoomKey = m_wndOrderList.GetItemText(nNewItem, 12);

        if (m_szGroup.Left(3) == _T("B22") || m_szGroup.Left(3) == _T("B23"))
        {
        }
        //		else
        //			m_wndPerformRoom.EnableWindow(FALSE);
    }
    else
    {
        //	m_wndPerformRoom.EnableWindow(TRUE);
        m_szPerformRoomKey =
            AfxGetApp()->GetProfileString(_T("PERFORM"), _T("ROOMID"), _T(""));
    }
    m_wndPerformRoom.EnableWindow(TRUE);
    pMF->m_nPRoomID = ToInt(m_szPerformRoomKey);

    szFormID = m_wndOrderList.GetItemText(nNewItem, 9);
    m_nOrderID = ToLong(m_wndOrderList.GetItemText(nNewItem, 0));
    m_nOrderlineID = ToLong(m_wndOrderList.GetItemText(nNewItem, 10));
    m_szStatusLine = m_wndOrderList.GetItemText(nNewItem, 11);
    m_szThuoc_can_quang = m_wndOrderList.GetItemText(nNewItem, 22);

    m_szReq = m_wndOrderList.GetItemText(nNewItem, 13);

    if (szCreatedBy == pMF->GetCurrentUser() && m_szStatusLine != _T("T"))
    {
        m_wndOrderList.SetMenuState(7, true);
    }
    else
    {
        m_wndOrderList.SetMenuState(7, false);
    }

    pMF->m_wndImageCapture.SetReference(pMF->GetCurrentDirectory(),
                                        m_nDocumentNo, m_nOrderID, m_szItemID);
    // CreateResultView(szItemID, szFormID);

    m_wndResult = new CPACSInputResult();
    nWidth = m_wndResult->GetWidth();
    nHeight = m_wndResult->GetHeight();
    m_wndResult->m_nDocumentNo = m_nDocumentNo;
    m_wndResult->m_szDeptType = m_szDepartmentType;
    m_wndResult->m_nOrderlineID = m_nOrderlineID;

    m_wndResult->SetReference(m_nOrderID, szItemID, szFormID);
    m_wndView.GetClientRect(&rect);
    rect.right = rect.left + m_wndResult->GetWidth();
    rect.bottom = rect.top + m_wndResult->GetHeight();
    // m_wndView.SetScrollSizes(MM_TEXT, CSize(rect.Width() - 5,
    // rect.Height())); m_wndView.SetScrollPos(SB_VERT, 0);
    AfxGetApp()->BeginWaitCursor();
    m_wndResult->Create(&m_wndView, &rect);
    m_wndResult->ShowWindow(SW_HIDE);
    m_wndResult->OnInitDialog();
    m_wndResult->ShowWindow(SW_SHOW);
    m_wndView.GetClientRect(&rect);
    m_wndResult->MoveWindow(rect);
    // if (rect.Height() < nHeight)
    //{
    //	rect.bottom = rect.top + nHeight;
    // }
    // m_wndResult->MoveWindow(&rect);
    // m_wndResult->Invalidate();
    AfxGetApp()->EndWaitCursor();

    nOrderID_New = m_nOrderID;
    pMF->m_wndImageCapture.OnLoadThumb();

    GetOrderInformation(m_nOrderID, szItemID);

    m_wndCapture.EnableWindow(true);
    m_wndInputForm.EnableWindow(true);
    if (m_szStatus == _T("T"))
        m_wndPrint.EnableWindow(true);
    m_wndPrintPACS.EnableWindow(true);

    UINT nShow = SW_SHOW;
    m_wndTab.SetCurSel(0);
    m_wndUpdate.ShowWindow(nShow);
    m_wndSave.ShowWindow(nShow);
    m_wndCancel.ShowWindow(nShow);
    m_wndPrint.ShowWindow(nShow);
    m_wndPrintPACS.ShowWindow(nShow);
    m_wndInputForm.ShowWindow(nShow);
    m_wndCapture.ShowWindow(nShow);

    OnMaterialListLoadData();
    m_wndAddMaterialInpackage.EnableWindow(TRUE);
    m_wndAddMaterialOutpackage.EnableWindow(TRUE);
    UpdateData(false);
}
int CPACSPatientProfile::OnOrderListDeleteItem()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
long CPACSPatientProfile::OnOrderListLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CRecord rs2(&pMF->m_db);
    CString szSQL, tmpStr, normindex, szWhere, szFormID, szstatusline, szName,
        szNote, szorgcode, szfeestatus;
    int nItem = 0, instid = 0;
    m_wndOrderList.BeginLoad();
    m_wndOrderList.DeleteAllItems();
    int nCount = 0;
    CString szStatus, szpayment;

    szWhere.AppendFormat(_T(" and hpc_groupid in(select sup_permid from ")
                         _T("sys_userperm where sup_userid='%s' ) "),
                         pMF->GetCurrentUser());
    szWhere.AppendFormat(
        _T(" and (substr(hpc_groupid, 1,2) in('B2','B3') or ")
        _T("substr(hpc_groupid, 1, 3) IN('B1E','B1F','B1H')) "));

    szSQL.Format(_T(" SELECT * FROM")
                 _T(" (")
                 _T(" SELECT hpc_orderid                    AS orderid,")
                 _T("   TO_CHAR(hpc_orderdate,'YYYY-MM-DD') AS orderdate,")
                 _T("   hpc_deptid                          AS orderdept,")
                 _T("   hpc_status,")
                 _T("   hpc_createdby     AS createdby,")
                 _T("   hpcl_itemid       AS itemid,")
                 _T("   hpcl_practitioner AS practitioner,")
                 _T("   hpcl_perform_deptid,")
                 _T("   hpcl_proomid                    AS proomid,")
                 _T("   TO_CHAR(hpcl_date,'YYYY-MM-DD') AS performeddate,")
                 _T("   hpcl_orderlineid                AS orderlineid,")
                 _T("   hfl_name                        AS name,")
                 _T("   hfl_unit                        AS unit,")
                 _T("   hfl_index1 ,")
                 _T("   hpcl_status    AS statusline,")
                 _T("   hpcl_statusmap AS statusmap,")
                 _T("   hpcl_result    AS formid,")
                 _T("   hpc_isreq,")
                 _T("   hpc_groupid,")
                 _T("   hpc_class,")
                 _T("   hfl_insprice  AS insprice,")
                 _T("   hfl_servprice AS servprice,")
                 _T("   HPC_PAYMENT   AS payment,")
                 _T("   hpcl_note     AS note,")
                 _T("   hfe_status    AS feestatus,")
                 _T("   hfl_line,")
                 _T("  (select NVL(hobx_org_id, 'XXX') from hl7_obx ")
                 _T("   where hobx_orderid = hpcl_orderid and ")
                 _T("hobx_orderlineid = hpcl_orderlineid and rownum<=1) ")
                 _T("   as orgcode,")

                 _T("   NVL(hfl_thuoc_can_quang, 'N') as thuoc_can_quang")
                 _T(" FROM hms_pacsorder")
                 _T(" LEFT JOIN hms_pacsorderline")
                 _T(" ON(hpc_orderid=hpcl_orderid)")
                 _T(" LEFT JOIN hms_fee")
                 _T(" ON (hfe_docno     = hpcl_docno")
                 _T(" AND hfe_orderid   = hpcl_orderid")
                 _T(" AND hfe_orderline = hpcl_orderlineid")
                 _T(" AND hpcl_itemid   = hfe_itemid)")
                 _T(" LEFT JOIN hms_fee_list")
                 _T(" ON(hfl_feeid            =hpcl_itemid)")
                 _T(" WHERE hpc_docno         =%ld")
                 _T(" AND NVL(HPC_REFOPERATION,0)=0")
                 _T(" AND hpc_status         <>'O'")
                 _T(" AND NVL(hfe_status, 'O')         NOT IN ('C')")
                 _T(" AND LENGTH(hpcl_itemid) > 0 %s ")
                 _T(" UNION ALL")
                 _T(" SELECT hpc_orderid                    AS orderid,")
                 _T("   TO_CHAR(hpc_orderdate,'YYYY-MM-DD') AS orderdate,")
                 _T("   hpc_deptid                          AS orderdept,")
                 _T("   hpc_status,")
                 _T("   hpc_createdby     AS createdby,")
                 _T("   hpcl_itemid       AS itemid,")
                 _T("   hpcl_practitioner AS practitioner,")
                 _T("   hpcl_perform_deptid,")
                 _T("   hpcl_proomid                    AS proomid,")
                 _T("   TO_CHAR(hpcl_date,'YYYY-MM-DD') AS performeddate,")
                 _T("   hpcl_orderlineid                AS orderlineid,")
                 _T("   '('|| HPC_REFOPERATION  ||') '|| hfl_name  AS name,")
                 _T("   hfl_unit                        AS unit,")
                 _T("   hfl_index1 ,")
                 _T("   hpcl_status    AS statusline,")
                 _T("   hpcl_statusmap AS statusmap,")
                 _T("   hpcl_result    AS formid,")
                 _T("   hms_pacsorder.hpc_isreq,")
                 _T("   hpc_groupid,")
                 _T("   hpc_class,")
                 _T("   0  AS insprice,")
                 _T("   0  AS servprice,")
                 _T("   HPC_PAYMENT   AS payment,")
                 _T("   hpcl_note     AS note,")
                 _T("   hfe_status    AS feestatus,")
                 _T("   hfl_line,")
                 _T("  (select NVL(hobx_org_id, 'XXX') from hl7_obx ")
                 _T("   where hobx_orderid = hpcl_orderid and ")
                 _T("hobx_orderlineid = hpcl_orderlineid and rownum<=1) ")
                 _T("   as orgcode,")
                 _T("   NVL(hfl_thuoc_can_quang, 'N') as thuoc_can_quang")
                 _T(" FROM hms_pacsorder")
                 _T(" LEFT JOIN hms_pacsorderline")
                 _T(" ON(hpc_orderid=hpcl_orderid)")
                 _T(" LEFT JOIN hms_fee")
                 _T(" ON (hfe_docno     = hpcl_docno")
                 _T(" AND hfe_orderid   = hpcl_orderid")
                 _T(" AND hfe_orderline = hpcl_orderlineid")
                 _T(" AND hpcl_itemid   = hfe_itemid)")
                 _T(" LEFT JOIN hms_operation ON (ho_docno=hpc_docno AND ")
                 _T("HPC_REFOPERATION= ho_idx)")
                 _T(" LEFT JOIN hms_fee_list")
                 _T(" ON(hfl_feeid            =ho_itemid)")
                 _T(" WHERE hpc_docno         =%ld")
                 _T(" AND NVL(HPC_REFOPERATION,0)>0")
                 _T(" AND hpc_status         <>'O'")
                 _T(" AND NVL(hfe_status, 'O')         NOT IN ('C')")
                 _T(" AND LENGTH(hpcl_itemid) > 0 %s")
                 _T(" )")
                 _T(" ORDER BY ")
                 _T(" proomid,")
                 _T(" orderid,")
                 _T(" hfl_line"),
                 m_nDocumentNo, szWhere, m_nDocumentNo, szWhere);
    //_msg(_T("%s"), szSQL);
    rs.ExecSQL(szSQL);
    // Lấy ra giá trị tạm gửi
    szSQL.Format(_T("HMS_CHECKDEPOSITAMOUNT_VL5(%ld,'E') "), m_nDocumentNo);
    double nAmount = str2double(pMF->ExecDML(szSQL));
    //_msg(_T("%s"), szSQL);

    nItem = 1;

    CString szObject = pMF->GetObjectType();

    while (!rs.IsEOF())
    {
        rs.GetValue(_T("formid"), tmpStr);
        if (tmpStr.GetLength() <= 0)
            rs.GetValue(_T("hfl_index1"), szFormID);
        else
            szFormID = tmpStr;
        rs.GetValue(_T("name"), szName);
        rs.GetValue(_T("hpc_status"), szStatus),
            rs.GetValue(_T("statusline"), szstatusline);
        rs.GetValue(_T("note"), szNote);
        rs.GetValue(_T("feestatus"), szfeestatus);
        if (szstatusline == _T("C"))
        {
            szNote = _T("Đề mục đã được khoa chỉ định hủy rồi, không phải ")
                     _T("thực hiện!");
        }

        if (szfeestatus == _T("R"))
        {
            szNote = _T("Đề mục đã được trả lại tiền ở tài chính, không phải ")
                     _T("thực hiện!");
        }

        rs.GetValue(_T("payment"), szpayment);

        if (!szNote.IsEmpty())
            szName.AppendFormat(_T("(%s)"), szNote);
        rs.GetValue(_T("orgcode"), szorgcode);

        int nItem = m_wndOrderList.AddItems(
            rs.GetValue(_T("orderid")), szName, rs.GetValue(_T("orderdept")),
            rs.GetValue(_T("orderdate")), rs.GetValue(_T("performeddate")),
            rs.GetValue(_T("createdby")), rs.GetValue(_T("practitioner")),
            rs.GetValue(_T("result")), rs.GetValue(_T("itemid")), szFormID,
            rs.GetValue(_T("orderlineid")), rs.GetValue(_T("statusline")),
            rs.GetValue(_T("proomid")), rs.GetValue(_T("hpc_isreq")),
            rs.GetValue(_T("statusmap")), rs.GetValue(_T("hpc_groupid")),
            rs.GetValue(_T("hpc_class")), rs.GetValue(_T("servprice")),
            rs.GetValue(_T("insprice")), rs.GetValue(_T("payment")),
            rs.GetValue(_T("feestatus")), szstatusline,
            rs.GetValue(_T("thuoc_can_quang")), NULL);
        if (szStatus == _T("T"))
        {
            m_wndOrderList.SetSubItemBkColor(nItem, 0, RGB(244, 164, 96),
                                             FALSE);
            m_wndOrderList.SetSubItemTextColor(nItem, 0, RGB(255, 255, 255),
                                               FALSE);
        }

        if (szStatus == _T("T") && szorgcode == _T("PACS"))
        {
            m_wndOrderList.SetSubItemBkColor(nItem, 1, RGB(50, 205, 50), FALSE);
            m_wndOrderList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255),
                                               FALSE);

            m_wndOrderList.SetSubItemBkColor(nItem, 2, RGB(50, 205, 50), FALSE);
            m_wndOrderList.SetSubItemTextColor(nItem, 2, RGB(255, 255, 255),
                                               FALSE);
        }

        if (szstatusline == _T("C"))
        {
            m_wndOrderList.SetSubItemBkColor(nItem, 1, RGB(244, 164, 96),
                                             FALSE);
            m_wndOrderList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255),
                                               FALSE);
        }

        if (pMF->GetObjectType() == _T("S") && szpayment != _T("P") &&
            nAmount < 0)
        {

            m_wndOrderList.SetSubItemBkColor(nItem, 0, RGB(255, 0, 0));
            m_wndOrderList.SetSubItemTextColor(nItem, 0, RGB(255, 255, 255));

            m_wndOrderList.SetSubItemBkColor(nItem, 1, RGB(255, 0, 0));
            m_wndOrderList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255));

            m_wndOrderList.SetSubItemBkColor(nItem, 2, RGB(255, 0, 0));
            m_wndOrderList.SetSubItemTextColor(nItem, 2, RGB(255, 255, 255));
        }

        rs.MoveNext();
    }

    m_wndOrderList.EndLoad();
    if (nItem > 0)
        m_wndOrderList.SetCurSel(0);

    return nCount;
}
void CPACSPatientProfile::OnTabSelectChange(int nOld, int nNew)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UINT nShow = SW_SHOW;
    if (nNew == 0)
    {
        nShow = SW_SHOW;
    }
    if (nNew >= 1)
    {
        nShow = SW_HIDE;
    }
    m_wndUpdate.ShowWindow(nShow);
    m_wndSave.ShowWindow(nShow);
    m_wndCancel.ShowWindow(nShow);
    m_wndPrint.ShowWindow(nShow);
    m_wndPrintPACS.ShowWindow(nShow);
    m_wndInputForm.ShowWindow(nShow);
    m_wndCapture.ShowWindow(nShow);

    switch (nNew)
    {
    case 3:
    {
        CString szSQL;
        szSQL.Format(_T("hms_fee_create(%ld, '%s', '%s', 'Y') "), m_nDocumentNo,
                     _T("ETPIOFXJ"), pMF->GetModuleID());
        int ret = str2int(pMF->ExecDML(szSQL));
        m_wndFeeDocument.RefreshData();
    }
    }
}
void CPACSPatientProfile::OnUpdateSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, szObjectType, szPayment, szPaymentline, tmpStr, szinpackage,
        szishealthexam, szinvoiceno;

    double nTotalAmount = 0, ninvoiceno;

    // Kiem tra neu chua chon mau thi khong cho cap nhat ket qua
    if (m_wndResult == NULL || m_wndResult->m_szFormID.IsEmpty() ||
        m_wndResult->m_szFormID == L"0")
    {
        ShowMessageBox(L"Yêu cầu chọn mẫu");
        return;
    }

    UpdateData(true);
    if (!pMF->CheckPermission(_T("01")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return;
    }

    if (m_szStatusLine != _T("S") && m_szStatusLine != _T("T") &&
        m_szStatusLine != _T("I"))
    {
        ShowMessageBox(_T("Không thao tác được với trạng thái hiện thời!"),
                       MB_OK);
        return;
    }

    if (m_szFeeStatusLine == _T("R"))
    {
        ShowMessageBox(_T("Mục phí đã được trả lại tiền, không thao tác được!"),
                       MB_ICONERROR);
        return;
    }

    if (m_szThuoc_can_quang == _T("Y"))
    {
        ShowMessageBox(_T("Chỉ định có phân loại cản quang, cần lưu ý đổi chỉ ")
                       _T("định cho phù hợp!"));
        // return ;
    }

    CRecord rs(&pMF->m_db);
    CRecord rsCheck(&pMF->m_db);
    // Kiem tra xem nhom pacs da nhap vat tu tieu hao chua
    // #2801

    if (m_szCheckEnterMaterialOfParaclinical.Find(m_szGroup.Left(3)) != -1)
    {
        CString tmpStr, szSQL, szCheckItem;

        szCheckItem.Format(
            _T("SELECT COUNT(*) FROM sys_sel WHERE ")
            _T("ss_id='hms_pacs_input_passcheck' AND ss_code='%s'"),
            m_szItemID);
        rsCheck.ExecSQL(szCheckItem);

        if (rsCheck.GetIntValue() == 0)
        {

            szSQL.Format(
                _T("SELECT count(*) as ncount FROM hms_pharmaorder_view WHERE ")
                _T("hpo_docno=%ld and HPO_REFERENCE_ID=%ld "),
                m_nDocumentNo, m_nOrderID);

            rs.ExecSQL(szSQL);
            if (rs.GetIntValue() <= 0)
            {
                ShowMessageBox(
                    _T("Cần tích thuốc, vật tư trước khi nhập kết quả"),
                    MB_ICONERROR);
                return;
            }
        }
    }
    // Kiểm tra thuốc cản quang hay không thì thông báo cho người nhập!

    if (m_bInpatient)
    {
    }
    else
    {

        szSQL.Format(_T("hms_fee_create(%ld, '%s', '%s') "), m_nDocumentNo,
                     _T("P"), pMF->GetModuleID());
        pMF->ExecDML(szSQL);

        szSQL.Format(_T("SELECT ho_type as objecttype from hms_doc left join ")
                     _T("hms_object on(ho_id=hd_object) where hd_docno=%ld"),
                     m_nDocumentNo);
        rs.ExecSQL(szSQL);
        if (rs.IsEOF())
            return;
        rs.GetValue(_T("objecttype"), szObjectType);

        // if(pMF->m_szFree_PaymentCostExam ==_T("Y"))
        {
            // Kiem tra neu la benh nhan dich vu thi phai thu phi truoc
            if (szObjectType == _T("S"))
            {
                szSQL.Format(_T("SELECT count(*) FROM hms_exam WHERE ")
                             _T("he_docno=%ld and he_emergency='Y' "),
                             m_nDocumentNo);
                rs.ExecSQL(szSQL);
                if (rs.GetIntValue() <= 0)
                {
                    szSQL.Format(
                        _T("SELECT hpc_payment as payment, NVL(hpc_inpackage, ")
                        _T("'N') as inpackage FROM hms_pacsorder WHERE ")
                        _T("hpc_docno=%ld AND hpc_orderid=%ld"),
                        m_nDocumentNo, m_nOrderID);

                    rs.ExecSQL(szSQL);
                    if (rs.IsEOF())
                        return;
                    rs.GetValue(_T("payment"), szPayment);
                    if (szPayment != _T("P"))
                    {
                        szSQL.Format(_T("HMS_CHECKDEPOSITAMOUNT(%ld,'E') "),
                                     m_nDocumentNo);
                        double nAmount = str2double(pMF->ExecDML(szSQL));
                        if (nAmount < 0)
                        {
                            ShowMessageBox(_T("This patients unpaid fee. Can ")
                                           _T("not update result"),
                                           MB_ICONERROR, MB_OK);
                            return;
                        }
                    }
                }
            }
            // Thêm đoạn này để check tiếp đối với những hóa đơn xác nhận phí ở
            // phòng khám
            if (szObjectType == _T("S"))
            {

                szSQL.Format(
                    _T("SELECT NVL(hms_get_paid_drug(hpc_docno, hpc_orderid), ")
                    _T("'N') as payment, hpc_payment as paymentline FROM ")
                    _T("hms_pacsorder WHERE hpc_docno=%ld AND hpc_orderid=%ld"),
                    m_nDocumentNo, m_nOrderID);

                rs.ExecSQL(szSQL);
                if (rs.IsEOF())
                    return;
                rs.GetValue(_T("payment"), szPayment);
                rs.GetValue(_T("paymentline"), szPaymentline);
                //_msg(_T("%s"), szPayment);
                if (szPayment != _T("P") && szPaymentline != _T("P"))
                {
                    szSQL.Format(_T("HMS_CHECKDEPOSITAMOUNT_VL5(%ld,'E') "),
                                 m_nDocumentNo);
                    double nAmount = str2double(pMF->ExecDML(szSQL));
                    if (nAmount < 0)
                    {
                        ShowMessageBox(_T("This patients unpaid fee. Can not ")
                                       _T("update result"),
                                       MB_ICONERROR, MB_OK);
                        return;
                    }
                }
            }

            // Thêm đoạn này để check khám sức khỏe nhưng chỉ định ngoài gói thì
            // không cho thực hiện

            if (szObjectType == _T("S"))
            {

                szSQL.Format(_T(" SELECT hpc_payment as payment, ")
                             _T(" NVL(hpc_inpackage, 'N') as inpackage,")
                             _T(" NVL(hpc_invoiceno, 0) as invoiceno,")
                             _T(" NVL(hd_healthexam, 'N') as ishealthexam")
                             _T(" FROM hms_pacsorder")
                             _T(" LEFT JOIN hms_doc ON (hpc_docno = hd_docno)")
                             _T(" WHERE hpc_docno=%ld ")
                             _T(" AND hpc_orderid=%ld"),
                             m_nDocumentNo, m_nOrderID);

                rs.ExecSQL(szSQL);
                if (rs.IsEOF())
                    return;
                rs.GetValue(_T("payment"), szPayment);
                rs.GetValue(_T("inpackage"), szinpackage);
                rs.GetValue(_T("invoiceno"), szinvoiceno);
                rs.GetValue(_T("ishealthexam"), szishealthexam);
                //_msg(_T("%s"), szPayment);
                if (szPayment == _T("P") && szinpackage != _T("Y") &&
                    szishealthexam == _T("Y") && szinvoiceno == _T("1"))
                {

                    {
                        ShowMessageBox(_T("This patients unpaid fee. Can not ")
                                       _T("update result"),
                                       MB_ICONERROR, MB_OK);
                        return;
                    }
                }
            }
        }
    }
    // Kiem tra neu la doi tuoc I,C ma co phan phi yc ko cho nhap kq
    // if(szObjectType == _T("I") || szObjectType == _T("C") || szObjectType ==
    // _T("D"))
    //{
    //	szSQL.Format(_T("SELECT sum(hfe_patdebt-hfe_patpaid) as Amount FROM
    //hms_fee_view ") \
 		_T(" WHERE hfe_docno = %ld and (hfe_diffcost > 0 and
    //hfe_insprice =0 and hfe_class ='E') and  hfe_itemid ='%s' "),
    //m_nDocumentNo,m_szItemID); 	rs.ExecSQL(szSQL); 	if(!rs.IsEOF()){
    //		rs.GetValue(_T("Amount"), nTotalAmount);
    //	}
    //

    //	szSQL.Format(_T("SELECT hpcl_itemid FROM hms_pacsorderline ")\
	//					 _T("WHERE hpcl_orderid=%ld and hpcl_itemid='%s'"), m_nOrderID, m_szItemID);

    //	rs.ExecSQL(szSQL);

    //	//if(!rs.IsEOF() && nTotalAmount > 0 && pMF->m_szFree_PaymentCostExam ==
    //_T("Y")) 	if(!rs.IsEOF() && nTotalAmount > 0)
    //	{
    //		ShowMessageBox(_T("This patients unpaid fee. Can not update
    //result"), MB_OK); 		return;
    //	}
    //}

    if (m_szStatus == _T("T"))
    {
        CString szPractitioner, szGroupID, szSQL, tmpStr, szMsg;
        int nPerformDate = 0;
        szSQL.Format(
            _T("SELECT trunc(sysdate) - trunc(hpcl_date) as performeddate, ")
            _T("trim(hpcl_practitioner) as practitioner, hpc_groupid ")
            _T(" FROM hms_pacsorder ")
            _T(" LEFT JOIN hms_pacsorderline ON(hpcl_orderid=hpc_orderid) ")
            _T(" WHERE hpc_docno=%ld and hpc_orderid=%ld and ")
            _T("hpcl_itemid='%s' "),
            m_nDocumentNo, m_nOrderID, m_szItemID);
        //_msg(_T("%s"), szSQL);
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("practitioner"), szPractitioner);
            rs.GetValue(_T("performeddate"), nPerformDate);
            rs.GetValue(_T("hpc_groupid"), szGroupID);
        }
        // Khoa C5 có nhóm B1E00 không cần check người nào tạo thì người đó được
        // phép cập nhật, sau đó ai cập nhật thì sẽ ghi vào table log//
        if (pMF->GetCurrentUser() != szPractitioner &&
            !szPractitioner.IsEmpty() && szGroupID != _T("B1E00"))
        {
            TranslateString(
                _T("Phiếu này được tạo bởi user [%s]. Không cho phép cập nhật"),
                tmpStr);
            szMsg.Format(tmpStr, szPractitioner);

            ShowMessageBox(szMsg, MB_OK);
            return;
        }

        /*	if(nPerformDate > 1 && szGroupID != _T("B1E00"))
            {
                TranslateString(_T("This order is update in day. Can not update
           result"), szMsg); ShowMessageBox(szMsg, MB_OK); return ;
            }*/
    }

    if (m_wndResult)
    {
        EnableButtons(TRUE, 1, 2, -1);
        m_wndCapture.EnableWindow(true);
        m_wndResult->m_nPerformedRoom_ID = str2int(m_szPerformRoomKey);
        m_wndResult->m_szSerialCode = m_wndPerformRoom.GetCurrent(3);
        //_msg(_T("%s"), m_wndResult->m_szSerialCode);
        m_wndResult->OnEditCPACSInputResult();
    }
}
void CPACSPatientProfile::OnSearchSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CPCMSSearchByRecordNo dlg(this);
    if (dlg.DoModal() == IDOK)
    {
        m_nDocumentNo = dlg.m_nDocumentNo;
        UpdateData(false);
        OnDocumentNoCheckValue();
    }
}
void CPACSPatientProfile::OnSaveSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // Check quyền tại đây vì khi bắt đầu chạy PM, KTV gõ số hồ sơ -> Nhấn lưu
    // -> Phiếu chuyển thành trạng thái T luôn -> BS không trả được kết quả nữa
    if (!pMF->CheckPermission(_T("01")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return;
    }

    if (m_szPerformRoomKey.IsEmpty())
    {
        ShowMessageBox(_T("Bạn chưa chọn phòng thực hiện!"), MB_ICONERROR);
        return;
    }

    if (m_wndResult)
    {
        UpdateData(true);
        m_wndResult->m_nPerformedRoom_ID = str2int(m_szPerformRoomKey);
        m_wndResult->m_szSerialCode = m_wndPerformRoom.GetCurrent(3);
        //_msg(_T("%s"), m_wndResult->m_szSerialCode);
        if (m_wndResult->OnSaveCPACSInputResult() > 0)
            EnableButtons(TRUE, 0, 3, -1);
    }
}
void CPACSPatientProfile::OnCancelSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (m_wndResult)
    {
        m_wndResult->OnCancelCPACSInputResult();
        EnableButtons(TRUE, 0, 3, -1);
        // Kiem tra nếu trạng thái <> T thì cho phép chọn lại mẫu
        if (m_szStatus != _T("T"))
        {
            m_wndInputForm.EnableWindow(true);
        }
    }
}
void CPACSPatientProfile::OnPrintSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr;

    if (!pMF->CheckPermission(_T("02")))
    {
        ShowMessageBox(_T("Permission Denined."), 0);
        return;
    }
    szSQL.Format(_T("SELECT count(*) FROM hl7_obx WHERE hobx_docno=%ld and ")
                 _T("hobx_orderlineid=%ld and NVL(hobx_org_id, 'HIS')='PACS' "),
                 m_nDocumentNo, m_nOrderlineID);
    rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);

    if (rs.GetIntValue() <= 0)
    {
        if (m_wndResult)
            m_wndResult->OnPrintSelect();
        m_wndDocumentNo.SetFocus();
    }

    else
    {
        OnPrintPACSSelect();
    }
}

void CPACSPatientProfile::OnInputFormSelect()
{

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord grs(&pMF->m_db);
    CRecord rs(&pMF->m_db);
    CString szSQL;
    CRect rect;

    m_wndInputForm.GetWindowRect(&rect);
    CPoint point = CPoint(rect.left, rect.top);
    CGuiMenu menu(pMF);
    menu.CreatePopupMenu();
    CMenu submenu;
    int nID = 1;
    int nIdx = 1;
    int nCount = 0;
    CString szName;
    int nNewGroup, nMenuGroup;
    CMap<int, int, CString, CString> mapForm;

    szSQL.Format(
        _T("SELECT DISTINCT HPF_MENUID, ")
        _T(" (select distinct ss_desc ")
        _T(" from sys_sel ")
        _T(" where ss_id='hms_pacs_form_menu_group' ")
        _T(" and ss_code=cast(hpf_menuid as nvarchar2(15))) as hpf_groupname ")
        _T(" FROM hms_pacs_form ")
        _T(" LEFT JOIN hms_pacs_form_menu ON(hpf_id=hpfm_formid) ")
        _T(" WHERE hpfm_itemid='%s' and hpf_menuid > 0 "),
        m_szItemID);
    grs.ExecSQL(szSQL);

    while (!grs.IsEOF())
    {

        grs.GetValue(_T("HPF_MENUID"), nNewGroup);
        szSQL.Format(_T(" SELECT hpfm_itemid, hpfm_formid, hpf_name ")
                     _T(" FROM hms_pacs_form_menu ")
                     _T(" LEFT JOIN hms_pacs_form ON(hpf_id=hpfm_formid) ")
                     _T(" WHERE hpfm_itemid='%s' and hpf_menuid=%d ")
                     _T(" ORDER BY hpfm_index "),
                     m_szItemID, nNewGroup);
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            CGuiMenu newmenu(pMF);
            newmenu.CreatePopupMenu();
            grs.GetValue(_T("hpf_groupname"), szName);

            if (nCount++ > 0)
            {
                menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
            }
            menu.AppendMenu(MF_POPUP, (UINT_PTR)newmenu.m_hMenu, szName);

            if (newmenu)
            {

                while (!rs.IsEOF())
                {
                    mapForm[nID] = rs.GetValue(_T("hpfm_formid"));
                    szName.Format(_T("%d. %s"), nIdx,
                                  rs.GetValue(_T("hpf_name")));
                    newmenu.AppendMenu(MF_BYPOSITION, nID++, szName);

                    nIdx++;
                    rs.MoveNext();
                }
            }
        }

        grs.MoveNext();
    }

    szSQL.Format(_T(" SELECT hpfm_itemid, hpfm_formid, hpf_name ")
                 _T(" FROM hms_pacs_form ")
                 _T(" LEFT JOIN hms_pacs_form_menu ON(hpf_id=hpfm_formid) ")
                 _T(" WHERE hpfm_itemid='%s'  and hpf_menuid=0 ")
                 _T(" ORDER BY hpfm_index "),
                 m_szItemID);
    rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        if (nID > 1)
            menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
        mapForm[nID] = rs.GetValue(_T("hpfm_formid"));
        szName.Format(_T("%d. %s"), nIdx, rs.GetValue(_T("hpf_name")));
        menu.AppendMenu(MF_BYPOSITION, nID++, szName);
        nIdx++;

        rs.MoveNext();
    }

    int ret = menu.TrackPopupMenu(TPM_NONOTIFY | TPM_RETURNCMD | TPM_LEFTALIGN |
                                      TPM_RIGHTBUTTON,
                                  point.x, point.y, pMF);
    CString szFormID;

    if (mapForm.Lookup(ret, szFormID))
    {
        OnCancelSelect();

        // CreateResultView(m_szItemID, szFormID);

        if (m_wndResult)
        {
            m_wndResult->SendMessage(WM_DESTROY);
            delete m_wndResult;
        }
        int nWidth, nHeight, nOrderID_New, nOrderID_Old;
        CRect rect;

        m_wndResult = new CPACSInputResult();
        nWidth = m_wndResult->GetWidth();
        nHeight = m_wndResult->GetHeight();
        m_wndResult->m_nDocumentNo = m_nDocumentNo;
        m_wndResult->m_szDeptType = m_szDepartmentType;
        m_wndResult->m_nOrderlineID = m_nOrderlineID;
        m_wndResult->SetReference(m_nOrderID, m_szItemID, szFormID);
        m_wndView.GetClientRect(&rect);
        rect.right = rect.left + m_wndResult->GetWidth();
        rect.bottom = rect.top + m_wndResult->GetHeight();
        // m_wndView.SetScrollSizes(MM_TEXT, CSize(rect.Width() - 5,
        // rect.Height()));
        m_wndResult->Create(&m_wndView, &rect);
        m_wndResult->OnInitDialog();

        m_wndView.GetClientRect(&rect);
        m_wndResult->MoveWindow(&rect);
        m_wndResult->Invalidate();
        // if (rect.Height() < nHeight)
        //{
        //	rect.bottom = rect.top + nHeight;
        // }
        // m_wndResult->MoveWindow(&rect);
        // m_wndResult->Invalidate();

        //		pMF->DownloadDicomFile(m_nDocumentNo, m_nOrderID, m_szItemID);
        /*
                nOrderID_New = m_nOrderID;

                pMF->m_szID.Format(_T("PACS_%ld_%ld_%s"), m_nDocumentNo,
           m_nOrderID, m_szItemID);

                CString szFileName;
                ::GetCurrentDirectory(MAX_PATH, pMF->szPath);
                pMF->m_szFileName.Format(_T("%s.jpg"), pMF->m_szID);
                szFileName.Format(_T("%s\\Images\\%s"), pMF->szPath,
           pMF->m_szFileName);

                    struct _stat stat;
                    int ret = _wstat(szFileName, &stat);
                    if(ret == 0)
                    {
                        m_wndImage.Release();
                        m_wndImage.SetFileName(szFileName, TRUE);

                    }
                    else
                    {
                        m_wndImage.SetFileName(_T(""),TRUE);
                    }
                    m_wndImage.Invalidate();

                /*
                if(nOrderID_New > 0 && nOrderID_New != pMF->m_nOrderIDTmp)
                {
                    OnImageSelectChange(m_nDocumentNo, m_nOrderID);
                    pMF->m_nOrderIDTmp = nOrderID_New;
                }
            */
        m_wndCapture.EnableWindow(true);
        m_wndInputForm.EnableWindow(true);
        GetCurrentStatus();
    }
}
#include "PCMSChangeOrderDialog.h"
void CPACSPatientProfile::OnChangeOrderTestSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CPCMSChangeOrderDialog dlg(this);
    CString szOldItemID = m_szItemID;
    dlg.m_szNameCurrentKey = m_szItemID;
    dlg.m_nOrderID = m_nOrderID;
    dlg.m_nOrderlineID = m_nOrderlineID;
    if (dlg.DoModal() == IDOK)
    {
        /*CString szSQL;
        szSQL.Format(_T("UPDATE hms_pacs_result SET hpr_itemid='%s' WHERE
        hpr_docno = %ld and hpr_orderid=%ld and hpr_itemid='%s' "),
            m_nDocumentNo, m_nOrderID, szOldItemID);
        pMF->ExecSQL(szSQL);*/
        m_szItemID = dlg.m_szNameNewKey;
        OnOrderListLoadData();
    }
}

void CPACSPatientProfile::OnCaptureSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szParam;
    CString szPath;

    if (m_nOrderID <= 0 || m_szItemID.IsEmpty())
        return;

    pMF->SetActivePane(2);
    pMF->m_wndImageCapture.m_pWndFocus = GetFocus();
    pMF->m_wndImageCapture.m_nDocumentNo = m_nDocumentNo;
    pMF->m_wndImageCapture.m_nOrderID = m_nOrderID;
    pMF->m_wndImageCapture.m_szItemID = m_szItemID;
    pMF->m_wndImageCapture.m_szPatientName = m_szPatientName;
    pMF->m_wndImageCapture.m_szSex = m_szSexKey;
    pMF->m_wndImageCapture.m_szBirthDate = m_szAge;
    pMF->m_wndImageCapture.m_szAddress = m_szAddress;
    pMF->m_wndImageCapture.StartCapture();
}

void CPACSPatientProfile::OnMaterialListDblClick() {}
void CPACSPatientProfile::OnMaterialListSelectChange(int nOldItem, int nNewItem)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
int CPACSPatientProfile::OnMaterialListDeleteItem()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
long CPACSPatientProfile::OnMaterialListLoadData()
{

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szUsage, tmpStr, szStatus, szpayment, szpaymentdesc;
    long nOldOID = 0, nNewOID;
    int nItem;
    double nTotalAmount = 0;
    int nCount = 0;

    m_wndMaterialList.BeginLoad();

    CString szDept = m_szDepartmentKey;
    /*
    if(szDept == _T("C1.1") || szDept == _T("C1.2") || szDept == _T("C1.3") ||
    szDept == _T("TYC"))
    {
        szSQL.Format(_T(" SELECT hpol_line,") \
        _T("   product_id                        AS id,") \
        _T("   product_countryid                 AS countryid,") \
        _T("   product_name                      AS name,") \
        _T("   product_countryname               AS country,") \
        _T("   product_uomname                   AS unit,") \
        _T("   hpo_deptid						 AS deptid, ") \
        _T("   hpo_doctor						 AS doctor, ") \
        _T("   hpo_storage_id					 AS storageid, ") \
        _T("   hpo_orderstatus					 AS orderstatus, ") \
        _T("   hpo_orderdate					 AS orderdate, ") \
        _T("   hpol_orderid						 AS orderid, ") \
        _T("   hpol_qtyorder                     AS qty,") \
        _T("   hpol_unitprice					 AS unitprice, ") \
        _T("   SUM(hpol_unitprice*hpol_qtyorder) AS Amount ") \
        _T(" FROM hms_pharmaorder") \
        _T(" LEFT JOIN hms_pharmaorderline ") \
        _T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
        _T(" LEFT JOIN m_productitem_view") \
        _T(" ON(product_item_id=hpol_product_item_id)") \
        _T(" WHERE hpo_docno = %ld") \
        _T(" AND hpo_reference_id = %ld and hpo_refitem_id='%s' ") \
        _T(" GROUP BY hpol_line,") \
        _T("   product_id,") \
        _T("   product_countryid,") \
        _T("   product_name,") \
        _T("   product_countryname,") \
        _T("   product_uomname ,") \
        _T("   hpol_qtyorder,") \
        _T("   hpo_orderstatus, hpol_orderid, hpo_orderdate, hpol_unitprice, ")
    \
        _T("   hpol_orderid, hpol_product_id, hpo_storage_id, hpo_deptid,
    hpo_doctor") \ _T(" ORDER BY hpol_orderid, hpol_line"), m_nDocumentNo,
    m_nOrderID, m_szItemID);

    }
    else
    {
        szSQL.Format(_T(" SELECT hpol_line,") \
        _T("   product_id                        AS id,") \
        _T("   product_countryid                 AS countryid,") \
        _T("   product_name                      AS name,") \
        _T("   product_countryname               AS country,") \
        _T("   product_uomname                   AS unit,") \
        _T("   hpo_deptid						 AS deptid, ") \
        _T("   hpo_doctor						 AS doctor, ") \
        _T("   hpo_storage_id					 AS storageid, ") \
        _T("   hpo_orderstatus					 AS orderstatus, ") \
        _T("   hpo_orderdate					 AS orderdate, ") \
        _T("   hpol_orderid						 AS orderid, ") \
        _T("   hpol_qtyorder                     AS qty,") \
        _T("   hpol_unitprice					 AS unitprice, ") \
        _T("   SUM(hpol_unitprice*hpol_qtyorder) AS Amount ") \
        _T(" FROM hms_ipharmaorder") \
        _T(" LEFT JOIN hms_ipharmaorderline ") \
        _T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
        _T(" LEFT JOIN m_productitem_view") \
        _T(" ON(product_item_id=hpol_product_item_id)") \
        _T(" WHERE hpo_docno = %ld") \
        _T(" AND hpo_reference_id = %ld and hpo_refitem_id='%s' ") \
        _T(" GROUP BY hpol_line,") \
        _T("   product_id,") \
        _T("   product_countryid,") \
        _T("   product_name,") \
        _T("   product_countryname,") \
        _T("   product_uomname ,") \
        _T("   hpol_qtyorder,") \
        _T("   hpo_orderstatus, hpol_orderid, hpo_orderdate, hpol_unitprice, ")
    \
        _T("   hpol_orderid, hpol_product_id, hpo_storage_id, hpo_deptid,
    hpo_doctor") \ _T(" ORDER BY hpol_orderid, hpol_line"), m_nDocumentNo,
    m_nOrderID, m_szItemID);

    }

    */
    szSQL.Format(_T(" SELECT hpol_line,")
                 _T("   product_id                        AS id,")
                 _T("   product_countryid                 AS countryid,")
                 _T("   product_name                      AS name,")
                 _T("   product_countryname               AS country,")
                 _T("   product_uomname                   AS unit,")
                 _T("   hpo_deptid                        AS deptid,")
                 _T("   hpo_doctor                        AS ")
                 _T("doctor,hpo_createdby as createdby ,")
                 _T("   hpo_storage_id                    AS storageid,")
                 _T("   hpo_orderstatus                   AS orderstatus,")
                 _T("   hpo_orderdate                     AS orderdate,")
                 _T("   hpol_orderid                      AS orderid,")
                 _T("   sum(hpol_qtyorder)                     AS qty,")
                 _T("   hpol_unitprice                    AS unitprice,")
                 _T("   NVL(hms_get_paid_drug(hpo_docno, hpol_orderid), 'N') ")
                 _T("AS ispayment,")
                 _T("   SUM(hpol_unitprice*hpol_qtyorder) AS Amount")
                 _T(" FROM")
                 _T("   (SELECT hpo_orderid,hpo_createdby,")
                 _T("     hpo_docno,")
                 _T("     hpo_doctor,")
                 _T("     hpo_deptid,")
                 _T("     hpo_storage_id,")
                 _T("     hpo_orderdate,")
                 _T("     hpo_orderstatus,")
                 _T("     hpo_refitem_id,")
                 _T("     hpo_reference_id,")
                 _T("     hpol_product_id,")
                 _T("     hpol_unitprice,")
                 _T("     hpol_product_item_id,")
                 _T("     hpol_qtyorder,")
                 _T("     hpol_orderid,")
                 _T("     hpol_line")
                 _T("   FROM hms_pharmaorder")
                 _T("   LEFT JOIN hms_pharmaorderline")
                 _T("   ON(hpol_orderid =hpo_orderid)")
                 _T("   WHERE hpo_docno = %ld")
                 _T("   UNION ALL")
                 _T("   SELECT hpo_orderid,hpo_createdby,")
                 _T("     hpo_docno,")
                 _T("     hpo_doctor,")
                 _T("     hpo_deptid,")
                 _T("     hpo_storage_id,")
                 _T("     hpo_orderdate,")
                 _T("     hpo_orderstatus,")
                 _T("     hpo_refitem_id,")
                 _T("     hpo_reference_id,")
                 _T("     hpol_product_id,")
                 _T("     hpol_unitprice,")
                 _T("     hpol_product_item_id,")
                 _T("     hpol_qtyorder,")
                 _T("     hpol_orderid,")
                 _T("     hpol_line")
                 _T("   FROM hms_ipharmaorder")
                 _T("   LEFT JOIN hms_ipharmaorderline")
                 _T("   ON(hpol_orderid =hpo_orderid)")
                 _T("   WHERE hpo_docno = %ld")
                 _T("   ) tbl")
                 _T(" LEFT JOIN m_productitem_view")
                 _T(" ON(product_item_id     =hpol_product_item_id)")
                 _T(" WHERE hpo_reference_id = %ld")
                 _T(" AND hpo_refitem_id     ='%s'")
                 _T(" GROUP BY hpol_line,")
                 _T("   product_id,")
                 _T("   product_countryid,")
                 _T("   product_name,")
                 _T("   product_countryname,")
                 _T("   product_uomname ,")
                 _T("   hpo_orderstatus,")
                 _T("   hpol_orderid,")
                 _T("   hpo_orderdate,")
                 _T("   hpol_unitprice,")
                 _T("   hpol_orderid,")
                 _T("   hpol_product_id,")
                 _T("   hpo_storage_id,")
                 _T("   hpo_deptid,")
                 _T("   hpo_doctor, hpo_createdby, hpo_docno")
                 _T(" ORDER BY hpol_orderid,")
                 _T("   hpol_line"),
                 m_nDocumentNo, m_nDocumentNo, m_nOrderID, m_szItemID);

    _fmsg(_T("%s"), szSQL);

    CString szIndex;
    int nIndex = 0;
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("orderid"), nNewOID);
        rs.GetValue(_T("ispayment"), szpayment);

        if (szpayment == _T("P"))
        {
            szpaymentdesc = _T("Đã thanh toán");
        }
        else
        {
            szpaymentdesc = _T("Chưa thanh toán");
        }

        double nAmount;
        rs.GetValue(_T("amount"), nAmount);
        nTotalAmount += nAmount;
        tmpStr.Format(_T("%ld"), nNewOID);
        nIndex++;
        szIndex.Format(_T("%d"), nIndex);
        m_wndMaterialList.AddItems(
            szIndex, rs.GetValue(_T("name")), rs.GetValue(_T("unit")),
            rs.GetValue(_T("qty")), rs.GetValue(_T("createdby")), szpaymentdesc,
            NULL);
        rs.MoveNext();
    }
    m_wndMaterialList.EndLoad();
    return 0;
}

int CPACSPatientProfile::OnAddPACSPatientProfile()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}
int CPACSPatientProfile::OnEditPACSPatientProfile()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CPACSPatientProfile::OnDeletePACSPatientProfile()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
        return -1;
    szSQL.Format(_T("DELETE FROM  WHERE  AND"));
    int ret = pMF->ExecSQL(szSQL);
    if (ret >= 0)
    {
        SetMode(VM_NONE);
        OnCancelPACSPatientProfile();
    }
    return 0;
}
int CPACSPatientProfile::OnSavePACSPatientProfile()
{
    if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
        return -1;
    if (!IsValidateData())
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    if (GetMode() == VM_ADD)
    {
        // szSQL = m_lims_orderTbl.GetInsertSQL();
    }
    else if (GetMode() == VM_EDIT)
    {
        CString szWhere;
        szWhere.Format(_T(" WHERE"));
        // szSQL = m_lims_orderTbl.GetUpdateSQL(_T("createdby,createddate"));
        szSQL += szWhere;
    }
    _fmsg(_T("%s"), szSQL);
    int ret = pMF->ExecSQL(szSQL);
    if (ret > 0)
    {
        // OnPACSPatientProfileListLoadData();
        SetMode(VM_VIEW);
    }
    else
    {
    }
    return ret;
}
int CPACSPatientProfile::OnCancelPACSPatientProfile()
{
    if (GetMode() == VM_EDIT)
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
int CPACSPatientProfile::OnPACSPatientProfileListLoadData() { return 0; }

void CPACSPatientProfile::GetCurrentStatus()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;

    szSQL.Format(_T("SELECT hpcl_status as status, hpc_groupid as groupid ")
                 _T("FROM hms_pacsorder LEFT JOIN hms_pacsorderline ")
                 _T("ON(hpcl_orderid=hpc_orderid) WHERE hpc_orderid=%ld and ")
                 _T("hpcl_itemid='%s'"),
                 m_nOrderID, m_szItemID);

    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("status"), m_szStatus);
        rs.GetValue(_T("groupid"), m_szGroup);
    }

    if (m_szStatus != _T("S") && m_szStatus != _T("T") && m_szStatus != _T("I"))
    {
        m_wndUpdate.EnableWindow(false);
    }
}
BOOL CPACSPatientProfile::AddImage(CString szFileName)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szFileNameAdd;
    if (pMF->m_szID.IsEmpty())
        return FALSE;

    pMF->m_szFileName.Format(_T("%s.jpg"), pMF->m_szID);
    szFileNameAdd.Format(_T("%s\\Images\\%s"), pMF->szPath, pMF->m_szFileName);
    CopyFile(szFileName, szFileNameAdd, FALSE);

    if (pMF->UploadFile(pMF->m_szFileName, szFileName))
    {
        // m_wndImage.SaveFile(szFileNameAdd);
        return TRUE;
    }

    return FALSE;
}
BOOL CPACSPatientProfile::RemoveImage(CString szFileName)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (pMF->m_szID.IsEmpty())
        return FALSE;

    pMF->m_szFileName.Format(_T("%s"), pMF->m_szID);
    pMF->UnlinkFile(pMF->m_szFileName);
    return TRUE;
}

BOOL CPACSPatientProfile::DownloadImage()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CWaitDialog dlg;
    dlg.BeginWait();
    if (pMF->IsDicomMode())
    {
        PreMakeDir();

        CString szFile =
            pMF->DownloadDicomFile(m_nDocumentNo, m_nOrderID, m_szItemID);
        if (szFile.IsEmpty())
            return FALSE;

        CDcmManager dcm;
        CLSID imgClsid;
        dcm.LoadToBitmap(szFile);
        CString szPath, szSaveFile;

        szPath.Format(_T("%s\\DATA\\PACS\\%ld\\%ld\\%s"),
                      pMF->GetCurrentDirectory(), m_nDocumentNo, m_nOrderID,
                      m_szItemID);
        _tmkdir(szPath);

        szSaveFile.Format(_T("%s\\info.img"), szPath);

        CString szLine;
        CFile file;

        if (!file.Open(szSaveFile, CFile::modeWrite | CFile::modeCreate))
            return false;

        CString szComments;
        CString szCommentImage;

        szComments = dcm.m_szStudyDescription;
        CStringToken tk(szComments, _T("\n"), false);

        for (int i = 0; i < dcm.GetFrameCount(); i++)
        {
            Bitmap *bmp = (Bitmap *)dcm.GetBitmap(i);

            szSaveFile.Format(_T("%s\\image%.4d.jpg"), szPath, i + 1);
            GetEncoderClsid(L"image/jpeg", &imgClsid);
            bmp->Save(szSaveFile, &imgClsid, NULL);
            char fname[MAX_PATH];
            szCommentImage.Empty();
            if (i < tk.GetSize())
            {
                tk.GetAt(i, szCommentImage);
                szCommentImage.Trim();
            }

            szLine.AppendFormat(_T("%d|image%.4d.jpg|%s\r\n"), i, i + 1,
                                szCommentImage);
        }

        int length = szLine.GetLength() * sizeof(WCHAR);
        char *szImgInfo = new char[length + sizeof(char)];
        memset(szImgInfo, '\0', length);
        int byte = ::WideCharToMultiByte(CP_UTF8, 0, szLine, szLine.GetLength(),
                                         szImgInfo, length, 0, 0);
        file.Write(szImgInfo, strlen(szImgInfo));
        delete szImgInfo;

        file.Close();

        int nSel = m_wndOrderList.GetCurSel();
        m_wndOrderList.SetCurSel(-1);
        m_wndOrderList.SetCurSel(nSel);
    }
    else
    {
        pMF->m_nDownloadOrderID = 0;
        if (pMF->m_szID.IsEmpty())
            return FALSE;
        BeginWaitCursor();

        CString szFileName;
        ::GetCurrentDirectory(MAX_PATH, pMF->szPath);
        pMF->m_szFileName.Format(_T("%s.jpg"), pMF->m_szID);
        szFileName.Format(_T("%s\\Images\\%s"), pMF->szPath, pMF->m_szFileName);

        SetFileAttributes(szFileName, FILE_ATTRIBUTE_NORMAL);
        ::DeleteFile(szFileName);
        if (pMF->DownloadFile(pMF->m_szFileName, szFileName))
        {
            return TRUE;
        }

        EndWaitCursor();
        return FALSE;
    }

    dlg.EndWait();
    return FALSE;
}

BOOL CPACSPatientProfile::PreTranslateMessage(MSG *pMsg)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // TODO: Add your specialized code here and/or call the base class
    if (pMsg->message == WM_KEYDOWN && IsWindowVisible())
    {
        if (pMsg->wParam == VK_F5 && !pMF->m_bTabActiveImage)
        {
            OnCaptureSelect();
            return TRUE;
        }
        if (pMsg->wParam == VK_F4)
        {
            m_wndDocumentNo.SetFocus();
            m_wndDocumentNo.SetSel(0, 8);
            return TRUE;
        }
        if (pMsg->wParam == VK_F3 && m_wndResult)
        {
            m_wndResult->OnPrintSelect();
            return FALSE;
        }
    }
    return CGuiView::PreTranslateMessage(pMsg);
}
BEGIN_MESSAGE_MAP(CPACSPatientProfile, CGuiView)
ON_WM_DESTROY()
// ON_WM_SIZE()
END_MESSAGE_MAP()

void CPACSPatientProfile::OnDestroy()
{
    if (m_hDicomThread)
    {
        CloseHandle(m_hDicomThread);
    }
    // if(m_wndResult) delete m_wndResult;
    // m_wndResult = NULL;
    CGuiView::OnDestroy();
}
void CPACSPatientProfile::RefreshFormID(CString szFormID)
{
    int nSel = m_wndOrderList.GetCurSel();
    if (nSel < 0)
        return;
    m_wndOrderList.SetItemText(nSel, 5, szFormID);
}

BOOL CPACSPatientProfile::ImportImage()
{
    CString szPath;
    GetFolder(szPath, _T("Directory"));

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szFileName, szName, szYear, szDate, szComment, tmpStr;
    CString szSQL;
    CRecord rs(&pMF->m_db);
    CDcmManager dcm;
    CRect rc;

    CString szOpt, szFile;
    CString szServerAETitle;
    CString szServerAddress;
    CString szModality;
    int nServerPort;
    int nClientPort;
    bool nFound = false;
    CString szClientAETitle;

    szServerAddress = pMF->m_szServerAddress;
    szServerAETitle = pMF->m_szServerAETitle;
    tmpStr = pMF->GetLocalIP();

    if (pMF->m_szClientAETitle.CompareNoCase(_T("auto")) == 0)
    {
        szClientAETitle.Format(_T("%s"), pMF->GetLocalIP());
    }
    else
        szClientAETitle = pMF->m_szClientAETitle;

    nServerPort = pMF->m_nServerPort;
    nClientPort = pMF->m_nClientPort;

    dcm.SetServerAETitle(szServerAETitle);
    dcm.SetServerAddress(szServerAddress);
    dcm.SetServerPort(nServerPort);
    dcm.SetClientPort(nClientPort);
    dcm.SetClientAETitle(szClientAETitle);
    dcm.m_szPatientID.Format(_T("%ld"), m_nDocumentNo);
    TCHAR szPName[128];
    memset(szPName, _T('\0'), 128);
    UnMarkString(m_szPatientName, szPName);
    dcm.m_szPatientName = szPName;
    dcm.m_szStudyDate = pMF->GetSysDate();
    dcm.m_szStudyTime = pMF->GetSysTime();
    dcm.m_szPatientSex = m_szSexKey;
    dcm.m_szPatientBirthDate = m_szAge;
    dcm.m_szOtherPatientIDs.Format(_T("%.10ld%s"), m_nOrderID, m_szItemID);

    CString szGroup = pMF->m_wndPatientProfile.m_szGroup.Left(3);
    if (szGroup == _T("B21"))
    {
        szModality = _T("CR");
    }
    else if (szGroup == _T("B22"))
    {
        szModality = _T("CT");
    }
    else if (szGroup == _T("B23"))
    {
        szModality = _T("MR");
    }
    else if (szGroup == _T("B24"))
    {
        szModality = _T("ES");
    }
    else if (szGroup == _T("B32"))
    {
        szModality = _T("US");
    }
    else if (szGroup == _T("B1"))
    {
        szModality = _T("EM");
    }
    else if (szGroup == _T("B31"))
    {
        szModality = _T("SC");
    }
    else
    {
        szModality = _T("OT");
    }

    dcm.m_szModality = szModality;

    pMF->BeginWaitCursor();
    CWaitDialog dlg;
    dlg.BeginWait();

    szPath.AppendFormat(_T("\\*.jpg"));

    CFileFind finder;
    BOOL bWorking = finder.FindFile(szPath);
    int i = 0;
    CArray<Bitmap *, Bitmap *> bmps;
    while (bWorking)
    {
        bWorking = finder.FindNextFile();
        szFileName = finder.GetFilePath();
        Bitmap *bmp = new Bitmap(szFileName);
        dcm.AddBitmap(bmp);
        bmps.Add(bmp);
    }

    szFile.Format(_T("%s\\DATA\\PACS\\%ld\\%ld\\%s_%s.dcm"),
                  pMF->GetCurrentDirectory(), m_nDocumentNo, m_nOrderID,
                  szModality, m_szItemID);

    PreMakeDir();

    if (dcm.SaveAsDicomFile(szFile))
    {
        szOpt.Format(_T(" \"%s\" "), szFile);
        if (dcm.storescu(szOpt) == 0)
        {
            ShowMessageBox(_T("Upload completed."));
        }
    }

    dlg.EndWait();
    pMF->EndWaitCursor();

    return TRUE;
}

void CPACSPatientProfile::PreMakeDir()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szTemp, tmpStr;
    CString szPathName;
    szTemp.Format(_T("DATA\\PACS\\%ld\\%ld"), m_nDocumentNo, m_nOrderID);
    szPathName.Format(_T("%s"), pMF->GetCurrentDirectory());
    CStringToken tk(szTemp, _T("\\"));
    for (int i = 0; i < tk.GetSize(); i++)
    {
        tk.GetAt(i, tmpStr);
        szPathName.AppendFormat(_T("\\%s"), tmpStr);
        _tmkdir(szPathName);
    }
}

void CPACSPatientProfile::GetOrderInformation(long nOrderID, CString szItemID)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();
    m_szDescription.Empty();
    m_szPerformedBy.Empty();
    m_szStatusDesc.Empty();

    if (m_nOrderID <= 0)
    {
        UpdateData(FALSE);
        return;
    }

    szSQL.Format(_T(" SELECT hpcl_orderid,")
                 _T("   hpcl_itemid,")
                 _T("   hfl_name as description,")
                 _T("   hpcl_status as orderstatus,")
                 _T("   NVL(hfe_refstatus, 'O') as feeorderstatus,")
                 _T("   hpcl_proomid as performed_roomid,")
                 _T("   get_username(hpcl_practitioner) AS performedby")
                 _T(" FROM hms_pacsorderline")
                 _T(" LEFT JOIN hms_fee_list")
                 _T(" ON hpcl_itemid    =hfl_feeid")
                 _T(" WHERE hpcl_orderid=%ld ")
                 _T(" AND hpcl_itemid   ='%s'"),
                 nOrderID, szItemID);

    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        UpdateData(FALSE);
        return;
    }

    if (!rs.IsEOF())
    {
        // rs.GetValue(_T("description"), m_szDescription);
        // rs.GetValue(_T("orderstatus"), m_szStatusLine);
        rs.GetValue(_T("feeorderstatus"), m_szFeeStatusLine);
        // rs.GetValue(_T("performed_roomid"), m_szPerformRoomKey);
        // rs.GetValue(_T("performedby"), m_szPerformedBy);
    }
    UpdateData(FALSE);
}

void CPACSPatientProfile::LoadData(long nDocumentNo)
{
    m_wndOrderList.DeleteAllItems();
    m_nDocumentNo = nDocumentNo;
    m_nOrderID = 0;
    GetDataToScreen();
    // OnOrderListLoadData();
}

void CPACSPatientProfile::OnCallPatientSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;

    szSQL.Format(_T("HMS_PACS_PENDING_CALL(%ld, '%s', %d, %ld)"), m_nDocumentNo,
                 pMF->m_szDept, ToLong(m_szPerformRoomKey), 0);
    _debug(_T("\r\n%s"), szSQL);
    int ret = str2int(pMF->ExecDML(szSQL));
    if (ret < 0)
    {
        ShowMessageBox(_T("Bệnh nhân chưa được phát số"));
    }
}

void CPACSPatientProfile::OnAddPacsLineInfo()
{
    CPacsLineInfo dlg(&m_wndOrderList);
    dlg.m_szItemName = m_szItemName;
    dlg.m_nOrderLineID = m_nOrderlineID;
    dlg.DoModal();
}
void CPACSPatientProfile::OnPrintResultV2()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CReport rpt;
    CString tmpStr, szGroupID, szSex, szStatus, szDate;
    CString szReportName, szOrderName, szDeptID;
    CString szSQL;
    CRecord rs(&pMF->m_db);
    CRecord rsl(&pMF->m_db), rsd(&pMF->m_db), rs2(&pMF->m_db);

    long nDocumentNo;
    int nNumberOrder = 0;
    CString tmpStr2, szDeptType;
    CString szFormID;

    szSQL.Format(
        _T(" SELECT hd_patientno AS mabenhnhan,")
        _T("   hd_docno          AS DocumentNo,")
        _T("   hd_indept         AS khoavao,")
        _T(" hpc_deptid         AS khoayeucau,")
        _T("  get_roomname(hpc_deptid, hpc_roomid) AS phongyeucau,")
        _T("   trim(hp_surname")
        _T("   ||' '")
        _T("   ||hp_midname")
        _T("   ||' '")
        _T("   ||hp_firstname)                     AS pname,")
        _T("   TO_CHAR(hp_birthdate, 'DD/MM/YYYY') AS namsinh,")
        _T("   hfl_name AS OrderName,")
        _T("   get_roomname(hpcl_perform_deptid, hpcl_proomid) AS PerformRoom,")
        _T("   date_part('year', hp_birthdate)     AS nam,")
        _T("   HMS_GETSEX(hp_sex)                  AS Gender,")
        _T("   hd_contacttel                       AS phone")
        _T(" FROM hms_doc")
        _T(" LEFT JOIN hms_patient")
        _T(" ON (hd_patientno=hp_patientno)")
        _T(" LEFT JOIN HMS_PACSORDERLINE ON (hd_docno = hpcl_docno)")
        _T(" LEFT JOIN hms_pacsorder ON (hpcl_docno = hpc_docno AND ")
        _T("hpcl_orderid = hpc_orderid)")
        _T(" LEFT JOIN hms_fee_list ON (hpcl_itemid = hfl_feeid)")
        _T(" WHERE hd_docno  =%ld")
        _T(" AND hpcl_orderlineid = %ld"),
        m_nDocumentNo, m_nOrderlineID);
    //_T(" AND hpcl_status  IN('T') "), m_nDocumentNo, m_nOrderlineID);//

    rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);

    if (rs.IsEOF())
    {
        return;
    }

    if (!rpt.Init(_T("REPORTS/HMS/HMS_HENTRAKETQUA_C8.RPT")))
    {
        return;
    }

    // rs.GetValue(_T("khoavao"), szDeptID);
    // rpt.GetReportHeader()->SetValue(_T("Department"), szDeptID);

    tmpStr.Format(_T("%s %s"), _T("Khoa"), rs.GetValue(_T("khoavao")));
    rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);

    rs.GetValue(_T("DocumentNo"), nDocumentNo);
    tmpStr.Format(_T("%ld"), nDocumentNo);

    rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[128A]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[128C]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[39]"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Barcode[93]"), tmpStr);

    rs.GetValue(_T("pname"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);

    rs.GetValue(_T("namsinh"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

    rs.GetValue(_T("nam"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("YearOfBirth1"), tmpStr);

    rs.GetValue(_T("OrderName"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("OrderName"), tmpStr);

    rs.GetValue(_T("PerformRoom"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("PerformRoom"), tmpStr);

    tmpStr = pMF->GetSysDateTime();
    szDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDateTime")),
                  tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
    rpt.GetReportHeader()->SetValue(_T("PrintDateTime"), szDate);

    rs.GetValue(_T("Gender"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Gender"), tmpStr);

    rs.GetValue(_T("phone"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("phone"), tmpStr);

    rs.GetValue(_T("khoayeucau"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Khoayeucau"), tmpStr);

    rs.GetValue(_T("phongyeucau"), tmpStr);
    rpt.GetReportHeader()->SetValue(_T("Phongyeucau"), tmpStr);

    // if(bPreview)
    rpt.PrintPreview();
    // else
    //	rpt.Print();
}

void CPACSPatientProfile::OnViewExaminationHistory()
{
    CHMSDocumentPreviewDialog dlg(this);
    dlg.DoModal();
}

void CPACSPatientProfile::OnSize(UINT nType, int cx, int cy)
{
    CGuiView::OnSize(nType, cx, cy);

    // TODO: Add your message handler code here
    CRect rect;
    if (m_wndView.GetSafeHwnd())
    {
        int nHeight = m_wndResult->GetHeight();
        m_wndView.GetClientRect(&rect);
        // if (rect.Height() < nHeight)
        //{
        //	rect.bottom = rect.top + nHeight;
        // }
        // m_wndResult->MoveWindow(&rect);
    }
}

void CPACSPatientProfile::OnPrintPACSSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CString szLink, szLink1, szUrlView, szUrlResult;
    // 1. Link này là của VIETRAD
    // szLink.Format(_T("%s/studies/print/multiple?serviceID=%ld"),
    // pMF->m_szServerAddressPACS, m_nOrderlineID); ShellExecute(NULL,
    // _T("open"), szLink, NULL, NULL, SW_SHOWNORMAL);

    // 2. Link này là của VRPACS
    // http://10.0.0.82/view-images-h?ris_exam_id=35317151&service_id=20728874&his_code=0

    szLink.Format(
        _T("%s/view-images-h?ris_exam_id=%ld&service_id=%ld&his_code=0"),
        pMF->m_szServerAddressPACS, m_nOrderID, m_nOrderlineID);
    _tprintf(_T("%s"), szLink);
    ShellExecute(NULL, _T("open"), szLink, NULL, NULL, SW_SHOWNORMAL);
}

void CPACSPatientProfile::CreateResultView(CString szItemID, CString szFormID)
{
    int nWidth, nHeight;
    if (m_wndResult)
    {
        m_wndResult->SendMessage(WM_DESTROY);
        delete m_wndResult;
    }

    CRect rect;
    m_wndResult = new CPACSInputResult();
    nWidth = m_wndResult->GetWidth();
    nHeight = m_wndResult->GetHeight();
    m_wndResult->m_nDocumentNo = m_nDocumentNo;
    m_wndResult->m_szDeptType = m_szDepartmentType;
    m_wndResult->m_nOrderlineID = m_nOrderlineID;

    m_wndResult->SetReference(m_nOrderID, szItemID, szFormID);
    m_wndView.GetClientRect(&rect);
    rect.right = rect.left + m_wndResult->GetWidth();
    rect.bottom = rect.top + m_wndResult->GetHeight();
    // m_wndView.SetScrollSizes(MM_TEXT, CSize(rect.Width() - 5,
    // rect.Height()+100)); m_wndView.SetScrollPos(SB_VERT, 0);
    AfxGetApp()->BeginWaitCursor();
    m_wndResult->Create(&m_wndView, &rect);
    m_wndResult->ShowWindow(SW_HIDE);
    m_wndResult->OnInitDialog();
    m_wndResult->SetScrollSizes(MM_TEXT,
                                CSize(rect.Width() - 5, rect.Height()));
    m_wndResult->SetScrollPos(SB_VERT, 0);
    m_wndView.GetClientRect(&rect);
    m_wndResult->SetWindowPos(NULL, rect.left, rect.top, rect.Width(),
                              rect.Height(),
                              SWP_NOZORDER | SWP_SHOWWINDOW | SWP_FRAMECHANGED);
    m_wndResult->Invalidate();
    AfxGetApp()->EndWaitCursor();
}

BEGIN_MESSAGE_MAP(CPACSView, CScrollView)
ON_WM_SIZE()
ON_WM_ERASEBKGND()
END_MESSAGE_MAP()

void CPACSView::OnSize(UINT nType, int cx, int cy)
{
    CScrollView::OnSize(nType, cx, cy);
    CWnd *pWnd = GetWindow(GW_CHILD);
    if (pWnd && pWnd->GetSafeHwnd())
    {
        CRect rect;
        GetClientRect(&rect);
        rect.right -= 20;
        pWnd->MoveWindow(rect);
    }

    // TODO: Add your message handler code here
}

void CPACSView::PostNcDestroy()
{
    // TODO: Add your specialized code here and/or call the base class

    // CScrollView::PostNcDestroy();
}

#include "HMSTreatMovementDialogV2.h"

int CPACSPatientProfile::OnSendPatientTreatment()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // khám chuyên khoa, kết thúc hồ sơ ko thao tác được

    /*if(m_szDocStatus != _T("I"))
        return 0;*/
    if (pMF->IsDocumentReadOnly())
    {
        ShowMessageBox(_T("Cannot process with current status"));
        return 0;
    }
    CHMSTreatMovementDialogV2 dlg(this);
    dlg.m_nDocumentNo = m_nDocumentNo;
    dlg.m_nRefIdx = pMF->m_nRefIndex;
    if (dlg.DoModal() == IDOK)
    {
    }
    return 0;
}

void CPACSPatientProfile::OnResizeLayout()
{
    AddResize(&m_wndTab, 100, 100);
    AddResize(&m_wndOrderList, 100, 100);
    AddResize(&m_wndMaterialList, 100, 100);
}

void CPACSView::OnDraw(CDC *pDC) {}

BOOL CPACSView::OnEraseBkgnd(CDC *pDC)
{
    // TODO: Add your message handler code here and/or call default
    CRect rect;
    GetClientRect(&rect);
    pDC->FillSolidRect(rect, RGB(205, 205, 205));
    // return CScrollView::OnEraseBkgnd(pDC);
    return TRUE;
}
#include "EMRPatientProfile.h"
void CPACSPatientProfile::OnViewEMR()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    /*
    if (pEMRViewed)
    {
        pEMRViewed->BringWindowToTop();
        return;
    }
    */

    pMF->ShowBackstage(new CEMRPatientProfile(m_nDocumentNo));
}