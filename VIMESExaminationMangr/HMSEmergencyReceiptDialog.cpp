#include "HMSEmergencyReceiptDialog.h"
#include "HMSReportForms/PrintForms.h"
#include "MainFrm.h"
#include "ReportDocument.h"

static void _OnResolveLabelSelectFnc(CWnd *pWnd)
{
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnResolveLabelSelect();
}
/*static void _OnWorkPlaceChangeFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnWorkPlaceChange();
} */
/*static void _OnWorkPlaceSetfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnWorkPlaceSetfocus();} */
/*static void _OnWorkPlaceKillfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnWorkPlaceKillfocus();
} */
static int _OnWorkPlaceCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)->OnWorkPlaceCheckValue();
}
static void _OnTransferPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                            int nNewItemSel)
{
    ((CHMSEmergencyReceiptDialog *)pWnd)
        ->OnTransferPlaceSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnTransferPlaceSelendokFnc(CWnd *pWnd)
{
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnTransferPlaceSelendok();
}
/*static void _OnTransferPlaceSetfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnTransferPlaceKillfocus();
}*/
/*static void _OnTransferPlaceKillfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnTransferPlaceKillfocus();
}*/
static long _OnTransferPlaceLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)->OnTransferPlaceLoadData();
}
/*static void _OnTransferPlaceAddNewFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnTransferPlaceAddNew();
}*/
static void _OnEmergencyTimeSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                            int nNewItemSel)
{
    ((CHMSEmergencyReceiptDialog *)pWnd)
        ->OnEmergencyTimeSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnEmergencyTimeSelendokFnc(CWnd *pWnd)
{
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyTimeSelendok();
}
/*static void _OnEmergencyTimeSetfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyTimeKillfocus();
}*/
/*static void _OnEmergencyTimeKillfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyTimeKillfocus();
}*/
static long _OnEmergencyTimeLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyTimeLoadData();
}
/*static void _OnEmergencyTimeAddNewFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyTimeAddNew();
}*/
/*static void _OnTransferDiagnosticChangeFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnTransferDiagnosticChange();
} */
/*static void _OnTransferDiagnosticSetfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnTransferDiagnosticSetfocus();} */
/*static void _OnTransferDiagnosticKillfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnTransferDiagnosticKillfocus();
} */
static int _OnTransferDiagnosticCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)
        ->OnTransferDiagnosticCheckValue();
}
static void _OnEmergencyTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                            int nNewItemSel)
{
    ((CHMSEmergencyReceiptDialog *)pWnd)
        ->OnEmergencyTypeSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnEmergencyTypeSelendokFnc(CWnd *pWnd)
{
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyTypeSelendok();
}
/*static void _OnEmergencyTypeSetfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyTypeKillfocus();
}*/
/*static void _OnEmergencyTypeKillfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyTypeKillfocus();
}*/
static long _OnEmergencyTypeLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyTypeLoadData();
}
/*static void _OnEmergencyTypeAddNewFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyTypeAddNew();
}*/
static void _OnPatientStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                            int nNewItemSel)
{
    ((CHMSEmergencyReceiptDialog *)pWnd)
        ->OnPatientStatusSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnPatientStatusSelendokFnc(CWnd *pWnd)
{
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnPatientStatusSelendok();
}
/*static void _OnPatientStatusSetfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnPatientStatusKillfocus();
}*/
/*static void _OnPatientStatusKillfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnPatientStatusKillfocus();
}*/
static long _OnPatientStatusLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)->OnPatientStatusLoadData();
}
/*static void _OnPatientStatusAddNewFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnPatientStatusAddNew();
}*/
/*static void _OnAdmitExamineChangeFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnAdmitExamineChange();
} */
/*static void _OnAdmitExamineSetfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnAdmitExamineSetfocus();} */
/*static void _OnAdmitExamineKillfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnAdmitExamineKillfocus();
} */
static int _OnAdmitExamineCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)->OnAdmitExamineCheckValue();
}
/*static void _OnTestChangeFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnTestChange();
} */
/*static void _OnTestSetfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnTestSetfocus();} */
/*static void _OnTestKillfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnTestKillfocus();
} */
static int _OnTestCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)->OnTestCheckValue();
}
/*static void _OnEmergencyDiagnosticChangeFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyDiagnosticChange();
} */
/*static void _OnEmergencyDiagnosticSetfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyDiagnosticSetfocus();} */
/*static void _OnEmergencyDiagnosticKillfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnEmergencyDiagnosticKillfocus();
} */
static int _OnEmergencyDiagnosticCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)
        ->OnEmergencyDiagnosticCheckValue();
}
/*static void _OnResolveChangeFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnResolveChange();
} */
/*static void _OnResolveSetfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnResolveSetfocus();} */
/*static void _OnResolveKillfocusFnc(CWnd *pWnd){
    ((CHMSEmergencyReceiptDialog *)pWnd)->OnResolveKillfocus();
} */
static int _OnResolveCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)->OnResolveCheckValue();
}
static void _OnUpdateSelectFnc(CWnd *pWnd)
{
    CHMSEmergencyReceiptDialog *pVw = (CHMSEmergencyReceiptDialog *)pWnd;
    pVw->OnUpdateSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd)
{
    CHMSEmergencyReceiptDialog *pVw = (CHMSEmergencyReceiptDialog *)pWnd;
    pVw->OnSaveSelect();
}
static void _OnCancelSelectFnc(CWnd *pWnd)
{
    CHMSEmergencyReceiptDialog *pVw = (CHMSEmergencyReceiptDialog *)pWnd;
    pVw->OnCancelSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd)
{
    CHMSEmergencyReceiptDialog *pVw = (CHMSEmergencyReceiptDialog *)pWnd;
    pVw->OnPrintSelect();
}
static void _OnCloseSelectFnc(CWnd *pWnd)
{
    CHMSEmergencyReceiptDialog *pVw = (CHMSEmergencyReceiptDialog *)pWnd;
    pVw->OnCloseSelect();
}
static int _OnAddHMSEmergencyReceiptDialogFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)
        ->OnAddHMSEmergencyReceiptDialog();
}
static int _OnEditHMSEmergencyReceiptDialogFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)
        ->OnEditHMSEmergencyReceiptDialog();
}
static int _OnDeleteHMSEmergencyReceiptDialogFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)
        ->OnDeleteHMSEmergencyReceiptDialog();
}
static int _OnSaveHMSEmergencyReceiptDialogFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)
        ->OnSaveHMSEmergencyReceiptDialog();
}
static int _OnCancelHMSEmergencyReceiptDialogFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)
        ->OnCancelHMSEmergencyReceiptDialog();
}
static void _OnPhieuChamSocSelectFnc(CWnd *pWnd)
{
    CHMSEmergencyReceiptDialog *pVw = (CHMSEmergencyReceiptDialog *)pWnd;
    pVw->OnPhieuChamSocSelect();
}

static long _OnHuongXuTriLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSEmergencyReceiptDialog *)pWnd)->OnHuongXuTriLoadData();
}

CHMSEmergencyReceiptDialog::CHMSEmergencyReceiptDialog(CWnd *pParent)
    : CGuiDialog(pParent)
{
    m_nDlgWidth = 1005;
    m_nDlgHeight = 625;
    SetDefaultValues();
}
CHMSEmergencyReceiptDialog::~CHMSEmergencyReceiptDialog() {}
void CHMSEmergencyReceiptDialog::OnCreateComponents()
{
    m_wndEmergencyInfo.Create(this, _T("Emergency Receipt Information"), 5, 5,
                              995, 650);
    m_wndWorkPlaceLabel.Create(this, _T("Work Place"), 10, 31, 155, 56);
    m_wndWorkPlace.Create(this, 160, 31, 990, 81, 1, 0, 1);
    m_wndTransferPlaceLabel.Create(this, _T("Transfer Place"), 10, 86, 155,
                                   111);
    m_wndTransferPlace.Create(this, 160, 86, 990, 111);
    m_wndEmergencyTimeLabel.Create(this, _T("Emergency Time"), 10, 116, 155,
                                   141);
    m_wndEmergencyTime.Create(this, 160, 116, 990, 141);
    m_wndTransferDiagnosticLabel.Create(this, _T("Transfer Diagnostic"), 10,
                                        146, 155, 171);
    m_wndTransferDiagnostic.Create(this, 160, 146, 990, 196);
    m_wndEmergencyTypeLabel.Create(this, _T("Emergency Type"), 10, 201, 155,
                                   226);
    m_wndEmergencyType.Create(this, 160, 201, 990, 226);
    m_wndPatientStatusLabel.Create(this, _T("Patient Status"), 10, 231, 155,
                                   256);
    m_wndPatientStatus.Create(this, 160, 231, 990, 256);
    m_wndAdmitExamineLabel.Create(this, _T("Admit Examine"), 10, 261, 155, 286);
    m_wndAdmitExamine.Create(this, 160, 261, 990, 364, 1, 0, 1);
    m_wndEmergencyDiagnosticLabel.Create(this, _T("Emergency Diagnostic"), 10,
                                         368, 155, 393);
    m_wndEmergencyDiagnostic.Create(this, 160, 368, 990, 393);
    m_wndResolveLabel.Create(this, _T("Resolve"), 10, 398, 155, 423);
    m_wndResolve.Create(this, 160, 398, 990, 531, 1, 0, 1);

    m_wndHuongXuTriLabel.Create(this, _T("Hướng Xử trí"), 10, 536, 155, 561);
    m_wndHuongXuTri.Create(this, 160, 536, 990, 561);

    m_wndSpecialityDiagnosticLabel.Create(this, _T("Speciality Diagnostic"), 10,
                                          566, 155, 591);
    m_wndSpecialityDiagnostic.Create(this, 160, 566, 990, 645, 1, 0, 1);

    m_wndUpdate.Create(this, _T("&Update"), 569, 657, 649, 682);
    m_wndSave.Create(this, _T("&Save"), 654, 657, 734, 682);
    m_wndCancel.Create(this, _T("&Cancel"), 739, 657, 819, 682);
    m_wndPrint.Create(this, _T("&Print"), 824, 657, 904, 682);
    m_wndClose.Create(this, _T("&Close"), 909, 657, 989, 682);
    m_wndPhieuChamSoc.Create(this, _T("&Phiếu cấp cứu"), 10, 657, 210, 682);

    m_wndTestLabel.Create(this, _T(""), 0, 0, 0, 0);
    m_wndTestLabel.ShowWindow(SW_HIDE);
    m_wndTestLabel.EnableWindow(FALSE);
    m_wndTest.Create(this, 0, 0, 0, 0);
    m_wndTest.ShowWindow(SW_HIDE);
    m_wndTest.EnableWindow(FALSE);
}
void CHMSEmergencyReceiptDialog::OnInitializeComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    m_wndWorkPlace.SetMultiLine(TRUE);
    m_wndWorkPlace.SetLimitText(512);
    // m_wndWorkPlace.SetCheckValue(true);

    // m_wndTransferPlace.SetCheckValue(true);
    m_wndTransferPlace.LimitText(81);

    // m_wndEmergencyTime.SetCheckValue(true);
    m_wndEmergencyTime.LimitText(81);

    m_wndTransferDiagnostic.SetMultiLine(TRUE);
    m_wndTransferDiagnostic.SetLimitText(512);
    // m_wndTransferDiagnostic.SetCheckValue(true);

    // m_wndEmergencyType.SetCheckValue(true);
    m_wndEmergencyType.LimitText(81);

    // m_wndPatientStatus.SetCheckValue(true);
    m_wndPatientStatus.LimitText(81);

    m_wndAdmitExamine.SetMultiLine(TRUE);
    m_wndAdmitExamine.SetLimitText(1024);
    // m_wndAdmitExamine.SetCheckValue(true);

    // m_wndTest.SetMultiLine(TRUE);
    // m_wndTest.SetLimitText(512);
    // m_wndTest.SetCheckValue(true);

    // m_wndEmergencyDiagnostic.SetMultiLine(TRUE);
    m_wndEmergencyDiagnostic.SetLimitText(512);
    // m_wndEmergencyDiagnostic.SetCheckValue(true);

    m_wndResolve.SetMultiLine(TRUE);
    m_wndResolve.SetLimitText(512);
    m_wndResolveLabel.SetHyperlink(true);
    // m_wndResolve.SetCheckValue(true);

    m_wndSpecialityDiagnostic.SetMultiLine();
    m_wndSpecialityDiagnostic.SetLimitText(512);

    m_wndHuongXuTri.SetCheckValue(true);

    m_wndTransferPlace.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndTransferPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

    m_wndEmergencyTime.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndEmergencyTime.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

    m_wndEmergencyType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndEmergencyType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

    m_wndPatientStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndPatientStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

    m_wndHuongXuTri.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndHuongXuTri.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

    m_hms_emergencyTbl.SetTableName(_T("hms_emergency"));
    m_hms_emergencyTbl.AddField(_T("HE_CREATEDBY"), dfText, 15);
    m_hms_emergencyTbl.AddField(_T("HE_CREATEDDATE"), dfDateTime);
    m_hms_emergencyTbl.AddField(_T("HE_UPDATEDBY"), dfText, 15);
    m_hms_emergencyTbl.AddField(_T("HE_UPDATEDDATE"), dfDateTime);
    m_hms_emergencyTbl.AddField(_T("HE_DOCNO"), dfLong);
    m_hms_emergencyTbl.AddField(_T("HE_RECEPTIDX"), dfLong);
    m_hms_emergencyTbl.AddField(_T("HE_WORKPLACE"), dfText, 512);
    m_hms_emergencyTbl.AddField(_T("HE_TRANSPLACE"), dfText, 15);
    m_hms_emergencyTbl.AddField(_T("HE_STARTTIME"), dfText, 15);
    m_hms_emergencyTbl.AddField(_T("HE_TRANSDIAGN"), dfText, 512);
    m_hms_emergencyTbl.AddField(_T("HE_DISEASETYPE"), dfText, 15);
    m_hms_emergencyTbl.AddField(_T("HE_PATIENTSTATUS"), dfText, 15);
    m_hms_emergencyTbl.AddField(_T("HE_EXAMINE"), dfText, 512);
    m_hms_emergencyTbl.AddField(_T("HE_TEST"), dfText, 512);
    m_hms_emergencyTbl.AddField(_T("HE_DIAGNOSTIC"), dfText, 512);
    m_hms_emergencyTbl.AddField(_T("HE_TREATMENT"), dfText, 512);
    m_hms_emergencyTbl.AddField(_T("HE_SUGGESTION"), dfText, 15);
    m_hms_emergencyTbl.AddField(_T("HE_INDEPT"), dfText, 14);
    m_hms_emergencyTbl.AddField(_T("HE_SPECIALITY_DIAGNOSTIC"), dfText, 512);
    m_hms_emergencyTbl.AddField(_T("HE_HUONGXUTRI"), dfText, 2);
}
void CHMSEmergencyReceiptDialog::OnSetWindowEvents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // m_wndWorkPlace.SetEvent(WE_CHANGE, _OnWorkPlaceChangeFnc);
    // m_wndWorkPlace.SetEvent(WE_SETFOCUS, _OnWorkPlaceSetfocusFnc);
    // m_wndWorkPlace.SetEvent(WE_KILLFOCUS, _OnWorkPlaceKillfocusFnc);
    m_wndWorkPlace.SetEvent(WE_CHECKVALUE, _OnWorkPlaceCheckValueFnc);
    m_wndTransferPlace.SetEvent(WE_SELENDOK, _OnTransferPlaceSelendokFnc);
    // m_wndTransferPlace.SetEvent(WE_SETFOCUS, _OnTransferPlaceSetfocusFnc);
    // m_wndTransferPlace.SetEvent(WE_KILLFOCUS, _OnTransferPlaceKillfocusFnc);
    m_wndTransferPlace.SetEvent(WE_SELCHANGE, _OnTransferPlaceSelectChangeFnc);
    m_wndTransferPlace.SetEvent(WE_LOADDATA, _OnTransferPlaceLoadDataFnc);
    // m_wndTransferPlace.SetEvent(WE_ADDNEW, _OnTransferPlaceAddNewFnc);
    m_wndEmergencyTime.SetEvent(WE_SELENDOK, _OnEmergencyTimeSelendokFnc);
    // m_wndEmergencyTime.SetEvent(WE_SETFOCUS, _OnEmergencyTimeSetfocusFnc);
    // m_wndEmergencyTime.SetEvent(WE_KILLFOCUS, _OnEmergencyTimeKillfocusFnc);
    m_wndEmergencyTime.SetEvent(WE_SELCHANGE, _OnEmergencyTimeSelectChangeFnc);
    m_wndEmergencyTime.SetEvent(WE_LOADDATA, _OnEmergencyTimeLoadDataFnc);
    // m_wndEmergencyTime.SetEvent(WE_ADDNEW, _OnEmergencyTimeAddNewFnc);
    // m_wndTransferDiagnostic.SetEvent(WE_CHANGE,
    // _OnTransferDiagnosticChangeFnc);
    // m_wndTransferDiagnostic.SetEvent(WE_SETFOCUS,
    // _OnTransferDiagnosticSetfocusFnc);
    // m_wndTransferDiagnostic.SetEvent(WE_KILLFOCUS,
    // _OnTransferDiagnosticKillfocusFnc);
    m_wndTransferDiagnostic.SetEvent(WE_CHECKVALUE,
                                     _OnTransferDiagnosticCheckValueFnc);
    m_wndEmergencyType.SetEvent(WE_SELENDOK, _OnEmergencyTypeSelendokFnc);
    // m_wndEmergencyType.SetEvent(WE_SETFOCUS, _OnEmergencyTypeSetfocusFnc);
    // m_wndEmergencyType.SetEvent(WE_KILLFOCUS, _OnEmergencyTypeKillfocusFnc);
    m_wndEmergencyType.SetEvent(WE_SELCHANGE, _OnEmergencyTypeSelectChangeFnc);
    m_wndEmergencyType.SetEvent(WE_LOADDATA, _OnEmergencyTypeLoadDataFnc);
    // m_wndEmergencyType.SetEvent(WE_ADDNEW, _OnEmergencyTypeAddNewFnc);
    m_wndPatientStatus.SetEvent(WE_SELENDOK, _OnPatientStatusSelendokFnc);
    // m_wndPatientStatus.SetEvent(WE_SETFOCUS, _OnPatientStatusSetfocusFnc);
    // m_wndPatientStatus.SetEvent(WE_KILLFOCUS, _OnPatientStatusKillfocusFnc);
    m_wndPatientStatus.SetEvent(WE_SELCHANGE, _OnPatientStatusSelectChangeFnc);
    m_wndPatientStatus.SetEvent(WE_LOADDATA, _OnPatientStatusLoadDataFnc);
    // m_wndPatientStatus.SetEvent(WE_ADDNEW, _OnPatientStatusAddNewFnc);
    // m_wndAdmitExamine.SetEvent(WE_CHANGE, _OnAdmitExamineChangeFnc);
    // m_wndAdmitExamine.SetEvent(WE_SETFOCUS, _OnAdmitExamineSetfocusFnc);
    // m_wndAdmitExamine.SetEvent(WE_KILLFOCUS, _OnAdmitExamineKillfocusFnc);
    m_wndAdmitExamine.SetEvent(WE_CHECKVALUE, _OnAdmitExamineCheckValueFnc);
    // m_wndTest.SetEvent(WE_CHANGE, _OnTestChangeFnc);
    // m_wndTest.SetEvent(WE_SETFOCUS, _OnTestSetfocusFnc);
    // m_wndTest.SetEvent(WE_KILLFOCUS, _OnTestKillfocusFnc);
    // m_wndTest.SetEvent(WE_CHECKVALUE, _OnTestCheckValueFnc);
    // m_wndEmergencyDiagnostic.SetEvent(WE_CHANGE,
    // _OnEmergencyDiagnosticChangeFnc);
    // m_wndEmergencyDiagnostic.SetEvent(WE_SETFOCUS,
    // _OnEmergencyDiagnosticSetfocusFnc);
    // m_wndEmergencyDiagnostic.SetEvent(WE_KILLFOCUS,
    // _OnEmergencyDiagnosticKillfocusFnc);
    m_wndEmergencyDiagnostic.SetEvent(WE_CHECKVALUE,
                                      _OnEmergencyDiagnosticCheckValueFnc);
    // m_wndResolve.SetEvent(WE_CHANGE, _OnResolveChangeFnc);
    // m_wndResolve.SetEvent(WE_SETFOCUS, _OnResolveSetfocusFnc);
    // m_wndResolve.SetEvent(WE_KILLFOCUS, _OnResolveKillfocusFnc);
    m_wndPhieuChamSoc.SetEvent(WE_CLICK, _OnPhieuChamSocSelectFnc);
    m_wndResolve.SetEvent(WE_CHECKVALUE, _OnResolveCheckValueFnc);
    m_wndResolveLabel.SetEvent(WE_CLICK, _OnResolveLabelSelectFnc);
    m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
    m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
    m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
    m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
    m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
    m_wndHuongXuTri.SetEvent(WE_LOADDATA, _OnHuongXuTriLoadDataFnc);
    // SetMode(VM_NONE);

    GetDataToScreen();
    SetMode(GetMode());
}
void CHMSEmergencyReceiptDialog::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_Text(pDX, m_wndWorkPlace.GetDlgCtrlID(), m_szWorkPlace);
    DDX_TextEx(pDX, m_wndTransferPlace.GetDlgCtrlID(), m_szTransferPlaceKey);
    DDX_TextEx(pDX, m_wndEmergencyTime.GetDlgCtrlID(), m_szEmergencyTimeKey);
    DDX_Text(pDX, m_wndTransferDiagnostic.GetDlgCtrlID(),
             m_szTransferDiagnostic);
    DDX_TextEx(pDX, m_wndEmergencyType.GetDlgCtrlID(), m_szEmergencyTypeKey);
    DDX_TextEx(pDX, m_wndPatientStatus.GetDlgCtrlID(), m_szPatientStatusKey);
    DDX_Text(pDX, m_wndAdmitExamine.GetDlgCtrlID(), m_szAdmitExamine);
    // DDX_Text(pDX, m_wndTest.GetDlgCtrlID(), m_szTest);
    DDX_Text(pDX, m_wndEmergencyDiagnostic.GetDlgCtrlID(),
             m_szEmergencyDiagnostic);
    DDX_Text(pDX, m_wndResolve.GetDlgCtrlID(), m_szResolve);
    DDX_Text(pDX, m_wndSpecialityDiagnostic.GetDlgCtrlID(),
             m_szSpecialityDiagnostic);
    DDX_TextEx(pDX, m_wndHuongXuTri.GetDlgCtrlID(), m_szHuongXuTriKey);
}
void CHMSEmergencyReceiptDialog::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CRecord rsl(&pMF->m_db);
    CString szSQL;
    CString tmpStr, szTemp;
    bool bCheck = false;
    bool bCheckbp = false;

    szSQL.Format(_T("SELECT hd_suggestion AS suggestion, ")
                 _T("hd_indept AS indept ")
                 _T("FROM hms_doc ")
                 _T("WHERE hd_docno=%ld"),
                 m_nDocNo);
    rsl.ExecSQL(szSQL);

	if (m_bIsUpdate)
	{
		szSQL.Format(_T("SELECT * FROM hms_emergency WHERE he_docno=%ld AND he_receptidx=%ld "),
			         m_nDocNo, m_nReceptIdx);
		rs.ExecSQL(szSQL);
		
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("HE_DOCNO"), m_nDocNo);
			rs.GetValue(_T("HE_RECEPTIDX"), m_nReceptIdx);
			rs.GetValue(_T("HE_WORKPLACE"), m_szWorkPlace);
			rs.GetValue(_T("HE_TRANSPLACE"), m_szTransferPlaceKey);
			rs.GetValue(_T("HE_STARTTIME"), m_szEmergencyTimeKey);
			rs.GetValue(_T("HE_TRANSDIAGN"), m_szTransferDiagnostic);
			rs.GetValue(_T("HE_DISEASETYPE"), m_szEmergencyTypeKey);
			rs.GetValue(_T("HE_PATIENTSTATUS"), m_szPatientStatusKey);
			rs.GetValue(_T("HE_EXAMINE"), m_szAdmitExamine);
			rs.GetValue(_T("HE_TEST"), m_szTest);
			rs.GetValue(_T("HE_DIAGNOSTIC"), m_szEmergencyDiagnostic);
			rs.GetValue(_T("HE_TREATMENT"), m_szResolve);
			rsl.GetValue(_T("suggestion"), m_szSuggestion);
			rsl.GetValue(_T("indept"), m_szInDept);
			rs.GetValue(_T("HE_SPECIALITY_DIAGNOSTIC"), m_szSpecialityDiagnostic);
			UpdateData(FALSE);
		}
	}
	else
	{
		szSQL.Format(_T(" select he_pulse as pulse,") \
					_T("        he_temperature as temperature,") \
					_T("        he_bloodpressure as bloodpressure, ") \
					_T("        he_bloodpressurex as bloodpressurex,") \
					_T("        he_breathinterval as breathinterval,") \
					_T("        he_weight as weight,") \
					_T("        he_height as height,") \
					_T("        he_medical as medical,") \
					_T("        he_examine as examine,") \
					_T("        he_diagnostic as diagnostic,") \
					_T("        hp_workplace as workplace,") \
					_T("        hms_getaddress(hp_provid, hp_distid, hp_villid) as address,") \
					_T("        sys_sel_getname('hms_relation', hd_relation) as relation, ") \
					_T("        hd_relative as relative,") \
					_T("        hd_contactaddr as contactaddr,") \
					_T("        hd_contacttel as contacttel,") \
					_T("        hd_transdiagn as transdiagn,") \
					_T("        he_examdate as examdate,") \
					_T("		case when he_pulse+he_temperature+he_bloodpressure+he_bloodpressurex+he_breathinterval+he_weight+he_height > 0 then 'M: '||he_pulse||',NÐ: '||he_temperature||',HA: '||he_bloodpressure||'/'||he_bloodpressurex||',NT: '||he_breathinterval||',CN: '||he_weight||', CC: '||he_height else null end living_index") \
					_T(" from hms_patient") \
					_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
					_T(" left join hms_exam on(he_docno=hd_docno)") \
					_T(" where he_docno=%ld and he_receptidx=%ld"),
					m_nDocNo, m_nReceptIdx);

        rs.ExecSQL(szSQL);

        if (!rs.IsEOF())
        {
            rs.GetValue(_T("address"), tmpStr);
            if (!tmpStr.IsEmpty())
                m_szWorkPlace.AppendFormat(_T("\x110\x43: %s"), tmpStr);

            rs.GetValue(_T("workplace"), tmpStr);
            if (!tmpStr.IsEmpty())
            {
                if (!m_szWorkPlace.IsEmpty())
                    m_szWorkPlace += _T(",");
                m_szWorkPlace.AppendFormat(_T("\x43Q: %s"), tmpStr);
            }

            rs.GetValue(_T("relation"), tmpStr);
            if (!tmpStr.IsEmpty())
            {
                if (!m_szWorkPlace.IsEmpty())
                {
                    m_szWorkPlace.AppendFormat(_T("\r\n"));
                    bCheck = true;
                }
                m_szWorkPlace.AppendFormat(_T("%s"), tmpStr);
            }

            rs.GetValue(_T("relative"), tmpStr);
            if (!tmpStr.IsEmpty())
            {
                if (!bCheck)
                {
                    m_szWorkPlace.AppendFormat(_T("\r\n"));
                    bCheck = true;
                }
                m_szWorkPlace.AppendFormat(_T(":%s"), tmpStr);
            }

            rs.GetValue(_T("contactaddr"), tmpStr);
            if (!tmpStr.IsEmpty())
            {
                if (!bCheck)
                {
                    m_szWorkPlace.AppendFormat(_T("\r\n"));
                    bCheck = true;
                }
                m_szWorkPlace.AppendFormat(_T("-%s"), tmpStr);
            }

            rs.GetValue(_T("contacttel"), tmpStr);
            if (!tmpStr.IsEmpty())
            {
                if (!bCheck)
                {
                    m_szWorkPlace.AppendFormat(_T("\r\n"));
                    bCheck = true;
                }
                m_szWorkPlace.AppendFormat(_T("-%s"), tmpStr);
            }

            // rs.GetValue(_T("pulse"), tmpStr);
            // if (!tmpStr.IsEmpty())
            //{
            //	if (m_szAdmitExamine.IsEmpty())
            //		m_szAdmitExamine += _T("- ");

            //	m_szAdmitExamine.AppendFormat(_T("M: %s"), tmpStr);
            //}

            // rs.GetValue(_T("temperature"), tmpStr);
            // if (!tmpStr.IsEmpty())
            //{
            //	if (!m_szAdmitExamine.IsEmpty())
            //		m_szAdmitExamine += _T(",");
            //	else
            //		m_szAdmitExamine += _T("- ");

            //	m_szAdmitExamine.AppendFormat(_T("N\x110: %s"), tmpStr);
            //}

            // rs.GetValue(_T("bloodpressure"), tmpStr);
            // if (!tmpStr.IsEmpty())
            //{
            //	if (!m_szAdmitExamine.IsEmpty())
            //		m_szAdmitExamine += _T(",");
            //	else
            //		m_szAdmitExamine += _T("- ");

            //	m_szAdmitExamine.AppendFormat(_T("H\x41: %s"), tmpStr);
            //	bCheckbp = true;
            //}

            // rs.GetValue(_T("bloodpressurex"), tmpStr);
            // if (!tmpStr.IsEmpty())
            //{
            //	if (bCheckbp)
            //		m_szAdmitExamine.AppendFormat(_T("/%s"), tmpStr);
            //	else
            //	{
            //		if (!m_szAdmitExamine.IsEmpty())
            //			m_szAdmitExamine += _T(",");
            //		else
            //			m_szAdmitExamine += _T("- ");

            //		m_szAdmitExamine.AppendFormat(_T("H\x41: %s"), tmpStr);
            //	}
            //}

            // rs.GetValue(_T("breathinterval"), tmpStr);
            // if (!tmpStr.IsEmpty())
            //{
            //	if (!m_szAdmitExamine.IsEmpty())
            //		m_szAdmitExamine += _T(",");
            //	else
            //		m_szAdmitExamine += _T("- ");
            //	m_szAdmitExamine.AppendFormat(_T("NT: %s"), tmpStr);
            // }

            // rs.GetValue(_T("weight"), tmpStr);
            // if (!tmpStr.IsEmpty())
            //{
            //	if (!m_szAdmitExamine.IsEmpty())
            //		m_szAdmitExamine += _T(",");
            //	else
            //		m_szAdmitExamine += _T("- ");
            //	m_szAdmitExamine.AppendFormat(_T("\x43N: %s"), tmpStr);
            // }

            // rs.GetValue(_T("height"), tmpStr);
            // if (!tmpStr.IsEmpty())
            //{
            //	if (!m_szAdmitExamine.IsEmpty())
            //		m_szAdmitExamine += _T(",");
            //	else
            //		m_szAdmitExamine += _T("- ");
            //	m_szAdmitExamine.AppendFormat(_T("\x43\x43: %s"), tmpStr);
            // }

            // rs.GetValue(_T("medical"), tmpStr);

            ///*if (!m_szAdmitExamine.IsEmpty())
            //	m_szAdmitExamine.AppendFormat(_T("\r\n"));*/

            // if (!tmpStr.IsEmpty())
            //{
            //	m_szAdmitExamine.AppendFormat(_T("\r\n- %s"), tmpStr);
            // }

            // rs.GetValue(_T("examine"), tmpStr);

            ///*if (!m_szAdmitExamine.IsEmpty())
            //	m_szAdmitExamine.AppendFormat(_T("\r\n"));*/

            // if (!tmpStr.IsEmpty())
            //{
            //	m_szAdmitExamine.AppendFormat(_T("\r\n- %s"), tmpStr);
            // }
            // rs.GetValue(_T("admit_examine"), m_szAdmitExamine);
            rs.GetValue(_T("living_index"), tmpStr);
            if (!tmpStr.IsEmpty())
                m_szAdmitExamine.Format(_T("- %s"), tmpStr);
            rs.GetValue(_T("medical"), tmpStr);
            if (!tmpStr.IsEmpty())
            {
                if (!m_szAdmitExamine.IsEmpty())
                    m_szAdmitExamine += _T("\r\n");
                m_szAdmitExamine.AppendFormat(_T("- %s"), tmpStr);
            }
            rs.GetValue(_T("examine"), tmpStr);
            if (!tmpStr.IsEmpty())
            {
                if (!m_szAdmitExamine.IsEmpty())
                    m_szAdmitExamine += _T("\r\n");
                m_szAdmitExamine.AppendFormat(_T("- %s"), tmpStr);
            }
            rs.GetValue(_T("diagnostic"), tmpStr);
            if (!tmpStr.IsEmpty())
            {
                m_szEmergencyDiagnostic.Format(_T("%s"), tmpStr);
            }

            rs.GetValue(_T("transdiagn"), tmpStr);
            if (!tmpStr.IsEmpty())
            {
                m_szTransferDiagnostic.Format(_T("%s"), tmpStr);
            }
        }

        szSQL.Format(_T(" select groupid,")
                     _T("        groupname")
                     _T(" from")
                     _T(" (")
                     _T("  select distinct hpc_groupid as groupid,")
                     _T("         hfg_name as groupname")
                     _T("  from hms_testorder")
                     _T("  left join hms_fee_group on(hfg_id=hpc_groupid)")
                     _T("  where hpc_docno=%ld and hpc_deptid='C1.3'")
                     _T("  union all")
                     _T("  select distinct hpc_groupid,")
                     _T("         hfg_name")
                     _T("  from hms_pacsorder")
                     _T("  left join hms_fee_group on(hfg_id=hpc_groupid)")
                     _T("  where hpc_docno=%ld and hpc_deptid='C1.3'")
                     _T(" ) Tbl")
                     _T(" order by groupid, groupname"),
                     m_nDocNo, m_nDocNo);

        rs.ExecSQL(szSQL);

        CString szNewGroup, szOldGroup;
        CString szGroupName;

        while (!rs.IsEOF())
        {
            rs.GetValue(_T("groupid"), tmpStr);
            szNewGroup = tmpStr.Left(2);

            if (!szNewGroup.IsEmpty() && szNewGroup != szOldGroup)
            {
                if (szNewGroup == _T("B1"))
                    szTemp = _T("\x58N: ");
                else if (szNewGroup == _T("B2"))
                    szTemp = _T("\x43\x110H\x41: ");
                else if (szNewGroup == _T("B3"))
                    szTemp = _T("T\x44\x43N: ");

                if (!szGroupName.IsEmpty())
                    m_szTest.AppendFormat(_T("%s"), szGroupName);

                if (m_szTest.IsEmpty())
                    m_szTest.AppendFormat(_T("%s"), szTemp);
                else
                    m_szTest.AppendFormat(_T("\r\n%s"), szTemp);

                szOldGroup = szNewGroup;
                szGroupName.Empty();
            }

            rs.GetValue(_T("groupname"), tmpStr);
            if (!szGroupName.IsEmpty())
                szGroupName += _T(",");
            szGroupName.AppendFormat(_T("%s"), tmpStr);
            rs.MoveNext();
        }

        if (!szGroupName.IsEmpty())
            m_szTest.AppendFormat(_T("%s"), szGroupName);

        CString szOperation;

        szSQL.Format(
            _T(" select ho_itemid as itemid,")
            _T("        hfl_name as itemname")
            _T(" from hms_operation")
            _T(" left join hms_fee_list on(hfl_feeid=ho_itemid)")
            _T(" where ho_docno=%ld and ho_deptid='C1.3' and ho_depttype='E'"),
            m_nDocNo);
        rs.ExecSQL(szSQL);

        while (!rs.IsEOF())
        {
            if (!szOperation.IsEmpty())
                szOperation.AppendFormat(_T("\r\n"));
            rs.GetValue(_T("itemname"), tmpStr);
            szOperation.AppendFormat(_T("- %s"), tmpStr);
            rs.MoveNext();
        }

        CString szDrug;

        szSQL.Format(
            _T(" SELECT hpol_productname AS productname,")
            _T("        hpol_productuom AS productuom,")
            _T("        hms_getdousage(hpol_orderid, hpol_product_id) AS usage")
            _T(" FROM hms_pharmaorderline_view")
            _T(" LEFT JOIN hms_pharmaorder ON(hpol_orderid=hpo_orderid AND ")
            _T("hpol_docno=hpo_docno)")
            _T(" WHERE hpol_docno=%ld AND hpo_ordertype='P' AND ")
            _T("hpo_deptid='C1.3' AND hpo_depttype='KB'")
            _T(" ORDER BY hpol_line"),
            m_nDocNo);
        rs.ExecSQL(szSQL);

        while (!rs.IsEOF())
        {
            if (!szDrug.IsEmpty())
                szDrug.AppendFormat(_T("\r\n"));
            szDrug.AppendFormat(_T("- %s/%s"), rs.GetValue(_T("productname")),
                                rs.GetValue(_T("usage")));
            rs.MoveNext();
        }

        if (!szOperation.IsEmpty() && !szDrug.IsEmpty())
            m_szResolve.Format(_T("%s\r\n%s"), szOperation, szDrug);
        else if (szOperation.IsEmpty() && !szDrug.IsEmpty())
            m_szResolve.Format(_T("%s"), szDrug);
        else if (!szOperation.IsEmpty() && szDrug.IsEmpty())
            m_szResolve.Format(_T("%s"), szOperation);
        m_szResolve.Empty();
        UpdateData(FALSE);
    }
}
void CHMSEmergencyReceiptDialog::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_hms_emergencyTbl.SetValue(_T("HE_CREATEDBY"), pMF->GetCurrentUser());
    m_hms_emergencyTbl.SetValue(_T("HE_CREATEDDATE"), pMF->GetSysDateTime());
    m_hms_emergencyTbl.SetValue(_T("HE_UPDATEDBY"), pMF->GetCurrentUser());
    m_hms_emergencyTbl.SetValue(_T("HE_UPDATEDDATE"), pMF->GetSysDateTime());

    m_hms_emergencyTbl.SetValue(_T("HE_DOCNO"), m_nDocNo);
    m_hms_emergencyTbl.SetValue(_T("HE_RECEPTIDX"), m_nReceptIdx);
    m_hms_emergencyTbl.SetValue(_T("HE_WORKPLACE"), m_szWorkPlace);
    m_hms_emergencyTbl.SetValue(_T("HE_TRANSPLACE"), m_szTransferPlaceKey);
    m_hms_emergencyTbl.SetValue(_T("HE_STARTTIME"), m_szEmergencyTimeKey);
    m_hms_emergencyTbl.SetValue(_T("HE_TRANSDIAGN"), m_szTransferDiagnostic);
    m_hms_emergencyTbl.SetValue(_T("HE_DISEASETYPE"), m_szEmergencyTypeKey);
    m_hms_emergencyTbl.SetValue(_T("HE_PATIENTSTATUS"), m_szPatientStatusKey);
    m_hms_emergencyTbl.SetValue(_T("HE_EXAMINE"), m_szAdmitExamine);
    m_hms_emergencyTbl.SetValue(_T("HE_TEST"), m_szTest);
    m_hms_emergencyTbl.SetValue(_T("HE_DIAGNOSTIC"), m_szEmergencyDiagnostic);
    m_hms_emergencyTbl.SetValue(_T("HE_TREATMENT"), m_szResolve);
    m_hms_emergencyTbl.SetValue(_T("HE_SUGGESTION"), m_szSuggestion);
    m_hms_emergencyTbl.SetValue(_T("HE_INDEPT"), m_szInDept);
    m_hms_emergencyTbl.SetValue(_T("HE_SPECIALITY_DIAGNOSTIC"),
                                m_szSpecialityDiagnostic);
    m_hms_emergencyTbl.SetValue(_T("he_huongxutri"), m_szHuongXuTriKey);
}
void CHMSEmergencyReceiptDialog::SetDefaultValues()
{

    m_szWorkPlace.Empty();
    m_szTransferPlaceKey.Empty();
    m_szEmergencyTimeKey.Empty();
    m_szTransferDiagnostic.Empty();
    m_szEmergencyTypeKey.Empty();
    m_szPatientStatusKey.Empty();
    m_szAdmitExamine.Empty();
    m_szTest.Empty();
    m_szEmergencyDiagnostic.Empty();
    m_szResolve.Empty();
    m_szSpecialityDiagnostic.Empty();
    m_szHuongXuTriKey.Empty();
}
int CHMSEmergencyReceiptDialog::SetMode(int nMode)
{
    int nOldMode = GetMode();
    CGuiDialog::SetMode(nMode);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    switch (nMode)
    {
    case VM_ADD:
        EnableControls(TRUE);
        EnableButtons(TRUE, 1, 2, -1);
        // SetDefaultValues();
        break;
    case VM_EDIT:
        EnableControls(TRUE);
        EnableButtons(TRUE, 1, 2, -1);
        m_wndWorkPlace.SetFocus();
        m_wndWorkPlace.SetSel(m_wndWorkPlace.GetWindowTextLength(),
                              m_wndWorkPlace.GetWindowTextLength());
        break;
    case VM_VIEW:
        EnableControls(FALSE);
        EnableButtons(FALSE, 1, 2, -1);
        m_wndUpdate.SetFocus();
        break;
    case VM_NONE:
        EnableControls(FALSE);
        EnableButtons(TRUE, 0, 3, 4, -1);
        // SetDefaultValues();
        break;
    };
    m_wndSpecialityDiagnostic.EnableWindow(0);
    UpdateData(FALSE);
    return nOldMode;
}
/*void CHMSEmergencyReceiptDialog::OnWorkPlaceChange(){

} */
/*void CHMSEmergencyReceiptDialog::OnWorkPlaceSetfocus(){

} */
/*void CHMSEmergencyReceiptDialog::OnWorkPlaceKillfocus(){

} */
int CHMSEmergencyReceiptDialog::OnWorkPlaceCheckValue() { return 0; }
void CHMSEmergencyReceiptDialog::OnTransferPlaceSelectChange(int nOldItemSel,
                                                             int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSEmergencyReceiptDialog::OnTransferPlaceSelendok() {}
#include "HMSTreatmentCareEMDialog.h"
void CHMSEmergencyReceiptDialog::OnPhieuChamSocSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (m_nDocNo <= 0)
        return;

    CHMSTreatmentCareEMDialog dlg(this, VM_VIEW, m_nDocNo);
    // CHMSTreatmentCareEMDialog dlg(this);
    if (dlg.DoModal() == IDOK)
    {
    }
}
/*void CHMSEmergencyReceiptDialog::OnTransferPlaceSetfocus(){

}*/
/*void CHMSEmergencyReceiptDialog::OnTransferPlaceKillfocus(){

}*/
long CHMSEmergencyReceiptDialog::OnTransferPlaceLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();

    if (m_wndTransferPlace.IsSearchKey() && !m_szTransferPlaceKey.IsEmpty())
    {
        szWhere.Format(_T(" and ss_code='%s' "), m_szTransferPlaceKey);
    }

    m_wndTransferPlace.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ")
                 _T("FROM sys_sel WHERE 1=1 AND ss_id='hms_transfer_place' ")
                 _T("ORDER BY cast(ss_code as integer) "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndTransferPlace.AddItems(rs.GetValue(_T("id")),
                                    rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSEmergencyReceiptDialog::OnTransferPlaceAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CHMSEmergencyReceiptDialog::OnEmergencyTimeSelectChange(int nOldItemSel,
                                                             int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSEmergencyReceiptDialog::OnEmergencyTimeSelendok() {}
/*void CHMSEmergencyReceiptDialog::OnEmergencyTimeSetfocus(){

}*/
/*void CHMSEmergencyReceiptDialog::OnEmergencyTimeKillfocus(){

}*/
long CHMSEmergencyReceiptDialog::OnEmergencyTimeLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();

    if (m_wndEmergencyTime.IsSearchKey() && !m_szEmergencyTimeKey.IsEmpty())
    {
        szWhere.Format(_T(" and ss_code='%s' "), m_szEmergencyTimeKey);
    }
    m_wndEmergencyTime.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ")
                 _T("FROM sys_sel ")
                 _T("WHERE 1=1 AND ss_id='hms_emergency_time' %s ")
                 _T("ORDER BY cast(ss_code as integer) "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndEmergencyTime.AddItems(rs.GetValue(_T("id")),
                                    rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSEmergencyReceiptDialog::OnEmergencyTimeAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSEmergencyReceiptDialog::OnTransferDiagnosticChange(){

} */
/*void CHMSEmergencyReceiptDialog::OnTransferDiagnosticSetfocus(){

} */
/*void CHMSEmergencyReceiptDialog::OnTransferDiagnosticKillfocus(){

} */
int CHMSEmergencyReceiptDialog::OnTransferDiagnosticCheckValue() { return 0; }
void CHMSEmergencyReceiptDialog::OnEmergencyTypeSelectChange(int nOldItemSel,
                                                             int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSEmergencyReceiptDialog::OnEmergencyTypeSelendok() {}
/*void CHMSEmergencyReceiptDialog::OnEmergencyTypeSetfocus(){

}*/
/*void CHMSEmergencyReceiptDialog::OnEmergencyTypeKillfocus(){

}*/
long CHMSEmergencyReceiptDialog::OnEmergencyTypeLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();

    if (m_wndEmergencyType.IsSearchKey() && !m_szEmergencyTypeKey.IsEmpty())
    {
        szWhere.Format(_T(" and ss_code='%s' "), m_szEmergencyTypeKey);
    }
    m_wndEmergencyType.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ")
                 _T("FROM sys_sel ")
                 _T("WHERE 1=1 AND ss_id='hms_emerdisease_type' %s ")
                 _T("ORDER BY cast(ss_code as integer) "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndEmergencyType.AddItems(rs.GetValue(_T("id")),
                                    rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSEmergencyReceiptDialog::OnEmergencyTypeAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CHMSEmergencyReceiptDialog::OnPatientStatusSelectChange(int nOldItemSel,
                                                             int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSEmergencyReceiptDialog::OnPatientStatusSelendok() {}
/*void CHMSEmergencyReceiptDialog::OnPatientStatusSetfocus(){

}*/
/*void CHMSEmergencyReceiptDialog::OnPatientStatusKillfocus(){

}*/
long CHMSEmergencyReceiptDialog::OnPatientStatusLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();

    if (m_wndPatientStatus.IsSearchKey() && !m_szPatientStatusKey.IsEmpty())
    {
        szWhere.Format(_T(" and ss_code='%s' "), m_szPatientStatusKey);
    }
    m_wndPatientStatus.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ")
                 _T("FROM sys_sel ")
                 _T("WHERE 1=1 AND ss_id='hms_emerpatient_status' %s ")
                 _T("ORDER BY cast(ss_code as integer) "),
                 szWhere);

    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndPatientStatus.AddItems(rs.GetValue(_T("id")),
                                    rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSEmergencyReceiptDialog::OnPatientStatusAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSEmergencyReceiptDialog::OnAdmitExamineChange(){

} */
/*void CHMSEmergencyReceiptDialog::OnAdmitExamineSetfocus(){

} */
/*void CHMSEmergencyReceiptDialog::OnAdmitExamineKillfocus(){

} */
int CHMSEmergencyReceiptDialog::OnAdmitExamineCheckValue() { return 0; }
/*void CHMSEmergencyReceiptDialog::OnTestChange(){

} */
/*void CHMSEmergencyReceiptDialog::OnTestSetfocus(){

} */
/*void CHMSEmergencyReceiptDialog::OnTestKillfocus(){

} */
int CHMSEmergencyReceiptDialog::OnTestCheckValue() { return 0; }
/*void CHMSEmergencyReceiptDialog::OnEmergencyDiagnosticChange(){

} */
/*void CHMSEmergencyReceiptDialog::OnEmergencyDiagnosticSetfocus(){

} */
/*void CHMSEmergencyReceiptDialog::OnEmergencyDiagnosticKillfocus(){

} */
int CHMSEmergencyReceiptDialog::OnEmergencyDiagnosticCheckValue() { return 0; }
/*void CHMSEmergencyReceiptDialog::OnResolveChange(){

} */
/*void CHMSEmergencyReceiptDialog::OnResolveSetfocus(){

} */
/*void CHMSEmergencyReceiptDialog::OnResolveKillfocus(){

} */
int CHMSEmergencyReceiptDialog::OnResolveCheckValue() { return 0; }
void CHMSEmergencyReceiptDialog::OnUpdateSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
}
void CHMSEmergencyReceiptDialog::OnSaveSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnSaveHMSEmergencyReceiptDialog();
}
void CHMSEmergencyReceiptDialog::OnCancelSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_NONE);
}
void CHMSEmergencyReceiptDialog::OnPrintSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // OnPrintReceipt(true);
    CPrintForms printer;
    printer.EM_OnPrintEmergencyReceipt(m_nDocNo, m_nReceptIdx);
}
void CHMSEmergencyReceiptDialog::OnCloseSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnCancel();
}
int CHMSEmergencyReceiptDialog::OnAddHMSEmergencyReceiptDialog()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}
int CHMSEmergencyReceiptDialog::OnEditHMSEmergencyReceiptDialog()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CHMSEmergencyReceiptDialog::OnDeleteHMSEmergencyReceiptDialog()
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
        OnCancelHMSEmergencyReceiptDialog();
    }
    return 0;
}
int CHMSEmergencyReceiptDialog::OnSaveHMSEmergencyReceiptDialog()
{
    /*if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
        return -1;*/
    if (!IsValidateData())
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;

    if (!m_bIsUpdate)
    {
        szSQL = m_hms_emergencyTbl.GetInsertSQL();
    }
    else
    {
        CString szWhere;
        szWhere.Format(_T(" WHERE HE_DOCNO=%ld AND HE_RECEPTIDX=%ld "),
                       m_nDocNo, m_nReceptIdx);
        szSQL = m_hms_emergencyTbl.GetUpdateSQL(
            _T("HE_CREATEDBY,HE_CREATEDDATE,HE_DOCNO,HE_RECEPTIDX"));
        szSQL += szWhere;
    }
    //_msg(_T("%s"), szSQL);
    int ret = pMF->ExecSQL(szSQL);
    if (ret > 0)
    {
        // OnHMSEmergencyReceiptDialogListLoadData();
        // SetMode(VM_VIEW);
        m_bIsUpdate = true;
        GetDataToScreen();
        SetMode(VM_VIEW);
    }
    else
    {
    }
    return ret;
    // return 0;
}
int CHMSEmergencyReceiptDialog::OnCancelHMSEmergencyReceiptDialog()
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
int CHMSEmergencyReceiptDialog::OnHMSEmergencyReceiptDialogListLoadData()
{
    return 0;
}

void CHMSEmergencyReceiptDialog::OnPrintReceipt(bool bPreview)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CRecord rss(&pMF->m_db);
    CString szSQL;
    CString tmpStr, szTemp;
    CString szDate, strTmp, szSysDate;
    CReportSection *rptDetail = NULL;
    szSysDate = pMF->GetSysDate();
    CReport rpt;

    if (!rpt.Init(_T("Reports/HMS/HE_PHIEUCAPCUU.RPT")))
    {
        return;
    }

    rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"),
                                    pMF->m_CompanyInfo.sc_pname);
    rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"),
                                    pMF->m_CompanyInfo.sc_name);

    szSQL.Format(
        _T(" SELECT he_examdate as examdate,")
        _T("        hms_emergency.*")
        _T(" FROM hms_emergency ")
        _T(" LEFT JOIN hms_exam ON(hms_exam.he_docno=hms_emergency.he_docno")
        _T("                       AND ")
        _T("hms_exam.he_docno=hms_emergency.he_docno) ")
        _T(" WHERE hms_emergency.he_docno=%ld")
        _T("       AND hms_emergency.he_receptidx=%ld"),
        m_nDocNo, m_nReceptIdx);
    rs.ExecSQL(szSQL);

    if (rs.IsEOF())
    {
        return;
    }

    szSQL.Format(
        _T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as ")
        _T("pname,")
        _T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,")
        _T("        extract(year from hp_birthdate) as yob,")
        _T("        hp_sex,")
        _T("        hms_getsex(hp_sex) as sex,")
        _T("        hms_getobjectname(hd_object) as objectname, ")
        _T("        sys_sel_getname('hms_rank', hp_rank) as rank,")
        _T("        hc_cardno as cardno")
        _T(" FROM hms_patient")
        _T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
        _T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND ")
        _T("hc_idx=hd_cardidx)")
        _T(" WHERE hd_docno=%ld"),
        m_nDocNo);
    rss.ExecSQL(szSQL);

    if (!rs.IsEOF())
    {

        tmpStr.Format(_T("%ld"), m_nDocNo);
        rpt.GetReportHeader()->SetValue(_T("DocNo"), tmpStr);

        rs.GetValue(_T("examdate"), tmpStr);
        szTemp = rpt.GetReportHeader()->GetValue(_T("OrderDate"));

        strTmp.Format(_T("%s/%s/%s"), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2),
                      tmpStr.Left(4));

        szDate.Format(szTemp, tmpStr.Mid(11, 2), tmpStr.Mid(14, 2), strTmp);
        rpt.GetReportHeader()->SetValue(_T("OrderDate"), szDate);

        rs.GetValue(_T("he_workplace"), tmpStr);
        rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);

        rs.GetValue(_T("he_transplace"), tmpStr);
        szTemp.Format(_T("ov%d"), str2int(tmpStr) - 3);
        rpt.GetReportHeader()->SetValue(szTemp, _T("X"));

        rs.GetValue(_T("he_starttime"), tmpStr);
        szTemp.Format(_T("ov%d_%d"), str2int(tmpStr), str2int(tmpStr) + 4);
        rpt.GetReportHeader()->SetValue(szTemp, _T("X"));

        rs.GetValue(_T("he_transdiagn"), tmpStr);
        rpt.GetReportHeader()->SetValue(_T("TransDiagn"), tmpStr);

        rs.GetValue(_T("he_diseasetype"), tmpStr);
        szTemp.Format(_T("ov2_6_%d"), str2int(tmpStr));
        rpt.GetReportHeader()->SetValue(szTemp, _T("X"));

        rs.GetValue(_T("he_patientstatus"), tmpStr);
        szTemp.Format(_T("ov2_6_6_%d"), str2int(tmpStr));
        rpt.GetReportHeader()->SetValue(szTemp, _T("X"));

        rs.GetValue(_T("he_examine"), tmpStr);
        rpt.GetReportHeader()->SetValue(_T("Pathological"), tmpStr);

        rs.GetValue(_T("he_test"), tmpStr);
        rpt.GetReportHeader()->SetValue(_T("Summarize"), tmpStr);

        rs.GetValue(_T("he_diagnostic"), tmpStr);
        rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);

        rs.GetValue(_T("he_treatment"), tmpStr);
        rpt.GetReportHeader()->SetValue(_T("Drugs"), tmpStr);

        rs.GetValue(_T("he_suggestion"), tmpStr);
        if (tmpStr == _T("D") || tmpStr == _T("C"))
        {
            rpt.GetReportFooter()->SetValue(_T("ov2_1"), _T("X"));
        }
        else if (tmpStr == _T("F"))
        {
            rpt.GetReportFooter()->SetValue(_T("ov2_2"), _T("X"));
        }
        else if (tmpStr == _T("A") || tmpStr == _T("E"))
        {
            rpt.GetReportFooter()->SetValue(_T("ov2_3"), _T("X"));
        }
        else if (tmpStr == _T("X") || tmpStr == _T("Y"))
        {
            rpt.GetReportFooter()->SetValue(_T("ov2_4"), _T("X"));
        }

        rs.GetValue(_T("he_indept"), tmpStr);
        rpt.GetReportFooter()->SetValue(_T("AdmitDept"),
                                        pMF->GetDepartmentName(tmpStr));
    }

    if (!rss.IsEOF())
    {
        rss.GetValue(_T("pname"), tmpStr);
        StringUpper(tmpStr, szTemp);
        rpt.GetReportHeader()->SetValue(_T("PatientName"), szTemp);

        rss.GetValue(_T("yob"), tmpStr);
        rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

        rss.GetValue(_T("hp_sex"), tmpStr);

        if (tmpStr == _T("M"))
            rpt.GetReportHeader()->SetValue(_T("Male"), _T("X"));
        else
            rpt.GetReportHeader()->SetValue(_T("Female"), _T("X"));

        rss.GetValue(_T("objectname"), tmpStr);
        rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);

        rss.GetValue(_T("rank"), tmpStr);
        rpt.GetReportHeader()->SetValue(_T("Rank"), tmpStr);

        rss.GetValue(_T("cardno"), tmpStr);
        rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
    }

    szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
                  szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
    rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

    szSQL.Format(_T(" SELECT hci_date AS thoi_gian,")
                 _T("        hci_disease AS dien_bien,")
                 _T("        hci_care AS xu_tri")
                 _T(" FROM   hms_careinfo")
                 _T(" WHERE  hci_docno = %ld")
                 _T(" and hci_deptid = '%s'"),
                 m_nDocNo, pMF->GetCurrentDepartmentID());

    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupHeader(7));
    }
    while (!rs.IsEOF())
    {
        rptDetail->SetValue(_T("1"), rs.GetValue(_T("thoi_gian")));
        rptDetail->SetValue(_T("2"), rs.GetValue(_T("dien_bien")));
        rptDetail->SetValue(_T("3"), rs.GetValue(_T("xu_tri")));
        rs.MoveNext();
    }
    if (bPreview)
        rpt.PrintPreview();
    else
        rpt.Print();
}

#include "HEDrugListEmergencyDialog.h"

void CHMSEmergencyReceiptDialog::OnResolveLabelSelect()
{
    UpdateData(true);

    CHEDrugListEmergencyDialog dlg(this);
    dlg.m_nDocumentNo = m_nDocNo;
    if (dlg.DoModal() == IDOK)
    {
        if (!dlg.m_szDrugInfo.IsEmpty())
        {
            if (!m_szResolve.IsEmpty())
                m_szResolve.AppendFormat(_T("\r\n"));
            m_szResolve.AppendFormat(_T("%s"), dlg.m_szDrugInfo);
        }
    }

    UpdateData(false);
}

long CHMSEmergencyReceiptDialog::OnHuongXuTriLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    szWhere.Empty();

    if (m_wndHuongXuTri.IsSearchKey() && !m_szHuongXuTriKey.IsEmpty())
    {
        szWhere.Format(_T(" and ss_code='%s' "), m_szHuongXuTriKey);
    }
    m_wndHuongXuTri.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ")
                 _T("FROM sys_sel ")
                 _T("WHERE 1=1 AND ss_id='hms_huongxutri_capcuu' %s ")
                 _T("ORDER BY cast(ss_code as integer) "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndHuongXuTri.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                                 NULL);
        rs.MoveNext();
    }
    return nCount;
}