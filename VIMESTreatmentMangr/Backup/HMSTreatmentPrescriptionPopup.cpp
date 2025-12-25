#include "HMSTreatmentPrescriptionPopup.h"
#include "GuiInputDataDialog.h"
#include "GuiTabCtrl.h"
#include "HMSMessageDialog.h"
#include "HMSReasonExDialog.h"
#include "HMSTreatmentTrackingDialog.h"
#include "HMSTuongTacThuocBenh.h"
#include "MainFrm.h"
#include "StringToken.h"

static void setColumnWidth(CGuiComboBox *pCtrl, int pos, int width)
{
    if (pCtrl == NULL)
        return;

    CGuiHeaderCtrl *pHdr = pCtrl->GetHeaderCtrl();

    if (pos < 0 || pos >= pHdr->GetItemCount())
        return;

    HDITEM hdr;
    TCHAR str[255];
    hdr.pszText = str;
    hdr.cchTextMax = 255;
    pHdr->GetItem(pos, &hdr);
    hdr.cxy = width;
    pHdr->SetItem(pos, &hdr);
}

static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                      int nNewItemSel)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)
        ->OnStorageSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnStorageSelendokFnc(CWnd *pWnd)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageAddNew();
}*/
static void _OnServiceWarehouseSelectFnc(CWnd *pWnd)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnServiceWarehouseSelect();
}

static void _OnInsWarehouseSelectFnc(CWnd *pWnd)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnInsWarehouseSelect();
}

static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)
        ->OnNameSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnNameSelendokFnc(CWnd *pWnd)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNameAddNew();
}*/
static void _OnGenericSearchSelectFnc(CWnd *pWnd)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnGenericSearchSelect();
}
/*static void _OnUnitChangeFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitSetfocus();} */
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitCheckValue();
}
/*static void _OnQtyChangeFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnQtySetfocus();} */
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnQtyCheckValue();
}
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantitySetfocus();} */
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantityCheckValue();
}
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                         int nNewItemSel)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)
        ->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnIndicationSelendokFnc(CWnd *pWnd)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationAddNew();
}*/
static long _OnIndicationCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationCheckValue();
}

/*static void _OnSpeedChangeFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedChange();
} */
/*static void _OnSpeedSetfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedSetfocus();} */
/*static void _OnSpeedKillfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedKillfocus();
} */
static int _OnSpeedCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedCheckValue();
}
/*static void _OnUsageChangeFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageChange();
} */
static void _OnUsageSetfocusFnc(CWnd *pWnd)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageSetfocus();
}

/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageCheckValue();
}
static void _OnSaveSelectFnc(CWnd *pWnd)
{
    CHMSTreatmentPrescriptionPopup *pVw =
        (CHMSTreatmentPrescriptionPopup *)pWnd;
    pVw->OnSaveSelect();
}
static void _OnCloseSelectFnc(CWnd *pWnd)
{
    CHMSTreatmentPrescriptionPopup *pVw =
        (CHMSTreatmentPrescriptionPopup *)pWnd;
    pVw->OnCloseSelect();
}
static int _OnAddHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)
        ->OnAddHMSTreatmentPrescriptionPopup();
}
static int _OnEditHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)
        ->OnEditHMSTreatmentPrescriptionPopup();
}
static int _OnDeleteHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)
        ->OnDeleteHMSTreatmentPrescriptionPopup();
}
static int _OnSaveHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)
        ->OnSaveHMSTreatmentPrescriptionPopup();
}
static int _OnCancelHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)
        ->OnCancelHMSTreatmentPrescriptionPopup();
}
static int _OnOutPrescriptionSelectFnc(CWnd *pWnd)
{
     ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnOutPrescriptionSelect();
    return 0;
}

static long _OnPaySourceLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnPaySourceLoadData();
}
static void _OnDoseWarningSelectFnc(CWnd *pWnd)
{
    CHMSTreatmentPrescriptionPopup *pVw =
        (CHMSTreatmentPrescriptionPopup *)pWnd;
    pVw->OnDoseWarningSelect();
}

static long _OnOtherSourceLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnOtherSourceLoadData();
}


static void _OnAddLineSelectFnc(CWnd *pWnd)
{
    CHMSTreatmentPrescriptionPopup *pVw =
        (CHMSTreatmentPrescriptionPopup *)pWnd;
    pVw->OnAddLineSelect();
}

static long _OnGridLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnGridLoadData();
}
static void _OnGridDblClickFnc(CWnd *pWnd)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnGridDblClick();
}
static void _OnGridSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
    ((CHMSTreatmentPrescriptionPopup *)pWnd)
        ->OnGridSelectChange(nOldItem, nNewItem);
}
static int _OnGridDeleteItemFnc(CWnd *pWnd)
{
    return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnGridDeleteItem();
}


/*
CHMSTreatmentPrescriptionPopup::CHMSTreatmentPrescriptionPopup()
{

    m_nDlgWidth = 600;
    m_nDlgHeight = 155;
    SetDefaultValues();
    m_szStorageKey.Empty();
    m_szOrderDate.Empty();
    m_nOrderID = 0;

}
*/
CHMSTreatmentPrescriptionPopup::CHMSTreatmentPrescriptionPopup(CWnd *pParent,
                                                               int nMode, int x,
                                                               int y)
    : m_pParentOwner(pParent), CGuiPopup(pParent)
{

    CGuiPopup::SetMode(nMode);

    SetDefaultValues();
    m_szStorageKey.Empty();
    m_szOrderDate.Empty();
    m_nOrderID = 0;
    m_nLevel1 = 0;
    m_nLevel2 = 0;
    m_nLevel3 = 0;
    m_bInPackage = false;
    m_bIsReq = false;
    m_bServiceWarehouse = FALSE;
    m_bInsWarehouse = FALSE;
    m_bGenericSearch = FALSE;
    m_nStorageId = 0;
    m_nProductId = 0;
    m_nX = x;
    m_nY = y;
    m_nDlgWidth = 775;
    m_nDlgHeight = 155;
    m_bOutPrescription = false;

    // SetAutoCenter(false);
    //	SetAutoCalcSize(false);
    SetAutoClose(false);
    m_bCancer = FALSE;
    m_bEditQty = false;
    m_nUseQty = 0;
    m_szUseTime.Empty();

}
CHMSTreatmentPrescriptionPopup::~CHMSTreatmentPrescriptionPopup() {}
void CHMSTreatmentPrescriptionPopup::OnCreateComponents()
{
    m_wndStorageLabel.Create(this, _T("Kho"), 10, 30, 115, 55);
    m_wndStorage.Create(this, 120, 30, 430, 55);
    m_wndPrescription.Create(this, _T("Prescription"), 5, 5, 787, 317);
    m_wndInsWarehouse.Create(this, _T("Kho BH"), 435, 30, 505, 55);
    m_wndServiceWarehouse.Create(this, _T("Kho dịch vụ"), 510, 30, 605, 55);
    m_wndOutPrescription.Create(this, _T("Đơn ngoại trú UT"), 610, 30, 780, 55);
    m_wndGenericSearch.Create(this, _T("Tìm theo tên hoạt chất"), 610, 60, 780, 82);
    m_wndName.Create(this, 120, 60, 430, 85);
    m_wndUnitLabel.Create(this, _T("Unit"), 435, 60, 505, 85);
    m_wndUnit.Create(this, 510, 60, 605, 85);
    m_wndNameLabel.Create(this, _T("Tên thuốc/HL"), 10, 60, 115, 85);
    m_wndQuantityLabel.Create(this, _T("Số lượng lĩnh"), 10, 90, 115, 115);
    m_wndQty.Create(this, 120, 90, 205, 115);
    m_wndMaxQuantityLabel.Create(this, _T("Tồn kho"), 210, 90, 310, 115);
    m_wndMaxQuantity.Create(this, 315, 90, 430, 115);
    m_wndPaySourceLabel.Create(this, _T("Nguồn TT covid"), 210, 150, 310, 175);
    m_wndPaySource.Create(this, 315, 150, 430, 175);
    m_wndOtherSourceLabel.Create(this, _T("Nguồn TT"), 435, 90, 505, 115);
    m_wndOtherSource.Create(this, 510, 90, 605, 115);
    m_wndCancerOpt.Create(this, _T("Thuốc dùng pha chế"), 610, 90, 780, 115);
    m_wndIndicationLabel.Create(this, _T("Đường dùng"), 10, 120, 115, 145);
    m_wndIndication.Create(this, 120, 120, 205, 145);
    m_wndSpeedLabel.Create(this, _T("Tốc độ"), 210, 120, 310, 145);
    m_wndSpeed.Create(this, 315, 120, 430, 145);
    m_wndUseQtyLabel.Create(this, _T("Số lượng/lần"), 435, 120, 505, 145);
    m_wndUseQty.Create(this, 510, 120, 605, 145);
    m_wndUsageTimeLabel.Create(this, _T("Thời gian"), 610, 120, 694, 145);
    m_wndUsageTime.Create(this, 699, 120, 754, 145);
    m_wndAddLine.Create(this, _T("+"), 759, 120, 784, 145);
    m_wndGrid.Create(this, 10, 150, 785, 260);
    m_wndUsageLabel.Create(this, _T("Usage"), 10, 265, 115, 290);
    m_wndUsage.Create(this, 120, 265, 785, 310);
    m_wndDoseWarning.Create(this, _T("Dose Warning"), 5, 322, 200, 347);
    
    
    m_wndSave.Create(this, _T("&Save"), 640, 322, 710, 347);
    m_wndClose.Create(this, _T("&Close"), 715, 322, 785, 347);


    m_wndPaySourceLabel.ShowWindow(SW_HIDE);
    m_wndPaySourceLabel.SetTextColor(RGB(255, 0, 0));
    m_wndPaySource.ShowWindow(SW_HIDE);
    m_wndCancerOpt.ModifyStyle(WS_TABSTOP, 0);
    m_wndOutPrescription.ModifyStyle(WS_TABSTOP, 0);
    m_wndInsWarehouse.ModifyStyle(WS_TABSTOP, 0);
    m_wndServiceWarehouse.ModifyStyle(WS_TABSTOP, 0);
    m_wndGenericSearch.ModifyStyle(WS_TABSTOP, 0);

    m_wndPaySource.ShowWindow(SW_HIDE);
    m_wndPaySourceLabel.ShowWindow(SW_HIDE);

    //m_wndAddLine.ModifyStyle(WS_TABSTOP, 0);


}
void CHMSTreatmentPrescriptionPopup::OnInitializeComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    m_wndStorage.SetCheckValue(true);

    //	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
    m_wndName.SetCheckValue(true);
    m_wndName.LimitText(35);
    m_wndQty.SetCheckValue(true);
    m_wndMaxQuantity.SetLimitText(16);
    m_wndMaxQuantity.SetReadOnly(true);
    m_wndUsage.SetLimitText(254);
    m_wndUnit.SetReadOnly(TRUE);
    m_wndPaySource.SetCheckValue(true);

    m_wndUsage.SetCheckValue(true);
    m_wndUsage.SetAllowEmpty(true);
    m_wndUsage.SetInitCap(2);

    m_wndGenericSearch.ModifyStyle(WS_TABSTOP, 0);
    m_wndServiceWarehouse.ModifyStyle(WS_TABSTOP, 0);
    // m_wndSpeed.ModifyStyle(WS_TABSTOP, 0);
    m_wndDoseWarning.SetButtonInfo(NULL, _T(" "), RGB(255, 255, 255),
                                   RGB(255, 128, 0));
    m_wndDoseWarning.ShowWindow(SW_HIDE);
    m_wndDoseWarning.ModifyStyle(WS_TABSTOP, 0);

    m_wndPaySource.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
    m_wndPaySource.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

    m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
    m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
    m_wndStorage.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);

    m_wndIndication.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
    m_wndIndication.InsertColumn(1, _T("Desc"), CFMT_TEXT, 300);
    m_wndIndication.InsertColumn(2, _T(""), CFMT_TEXT, 0); // index
    m_wndIndication.Format(3, 0, 10, 1);
    m_wndIndication.SetCheckValue(true);
    m_wndOtherSource.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
    m_wndOtherSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
    //	m_wndName.SetSearchEx(TRUE);

    m_wndName.InsertColumn(0, _T(""), CFMT_TEXT, 0); // ProductID
    m_wndName.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 350);
    m_wndName.InsertColumn(2, _T("Generic Name"), CFMT_TEXT, 150);
    m_wndName.InsertColumn(3, _T("Uom"), CFMT_TEXT, 60);
    m_wndName.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT, 80);
    m_wndName.InsertColumn(5, _T("On Hand"), CFMT_NUMBER, 65);
    m_wndName.InsertColumn(6, _T(""), CFMT_TEXT, 0); // precision
    m_wndName.InsertColumn(7, _T(""), CFMT_TEXT, 0); // classid
    m_wndName.Format(6, 1);
    m_wndName.SetSearchStyle(SS_COMPARE);

    m_hms_ipharmaorderTbl.SetTableName(_T("hms_ipharmaorder"));
    m_hms_ipharmaorderTbl.AddField(_T("hpo_org_id"), dfText, 3);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_user_id"), dfText, 15);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_storage_id"), dfLong);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_patientno"), dfLong);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_docno"), dfLong);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_refidx"), dfInteger);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_roomid"), dfInteger);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_bedid"), dfInteger);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_treatidx"), dfLong);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 3);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_objecttype"), dfText, 1);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_objectid"), dfInteger);
    m_hms_ipharmaorderTbl.AddField(_T("hpol_product_id"), dfLong);
    m_hms_ipharmaorderTbl.AddField(_T("hpol_qtyorder"), dfDouble);
    m_hms_ipharmaorderTbl.AddField(_T("hpol_speed"), dfText, 32);
    m_hms_ipharmaorderTbl.AddField(_T("hpol_usage"), dfText, 128);
    m_hms_ipharmaorderTbl.AddField(_T("hpol_inpackage"), dfText, 1);
    m_hms_ipharmaorderTbl.AddField(_T("hpol_indication_id"), dfText, 10);
    m_hms_ipharmaorderTbl.AddField(_T("hpo_outpatient_order"), dfText, 10);
    // Sửa covid
    m_hms_ipharmaorderTbl.AddField(_T("hpol_iscovid_paid"), dfText, 2);
    // Nguồn thanh toán: đề tài, BQP, tự cân đối
    m_hms_ipharmaorderTbl.AddField(_T("hpol_other_source"), dfText, 2);

    m_nLevel1 = 1;
    m_nLevel2 = 0;
    m_nLevel3 = 0;
    if (pMF->CheckPermission(_T("05.06")))
    {
        m_nLevel1 = 1;
    }
    if (pMF->CheckPermission(_T("05.07")))
    {
        m_nLevel2 = 2;
    }
    if (pMF->CheckPermission(_T("05.08")))
    {
        m_nLevel3 = 3;
    }
    
    
    m_wndGrid.InsertColumn(0, L"Số lượng/lần", CFMT_NUMBER, 100);
    m_wndGrid.InsertColumn(1, L"TG. Thực hiện", CFMT_TIME, 100);
    m_wndGrid.InsertColumn(2, L"Ghi chú", CFMT_TIME, 400);
    //m_wndGrid.SetEditLabel(0, GUI_NUMBERCTRL);
    //m_wndGrid.SetEditLabel(1, GUI_TEXTCTRL);
    //m_wndGrid.SetEditLabel(2, GUI_TEXTCTRL);
    m_wndGrid.m_nItemHeight = 32;
    m_wndGrid.AdjustLayout();

}
void CHMSTreatmentPrescriptionPopup::OnSetWindowEvents()
{

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
    // m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
    // m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
    m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
    m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
    // m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
    m_wndServiceWarehouse.SetEvent(WE_CLICK, _OnServiceWarehouseSelectFnc);
    m_wndInsWarehouse.SetEvent(WE_CLICK, _OnInsWarehouseSelectFnc);
    m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
    // m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
    // m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
    m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
    m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);

    // m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
    m_wndGenericSearch.SetEvent(WE_CLICK, _OnGenericSearchSelectFnc);
    // m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
    // m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
    // m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
    m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);

    // m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
    // m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
    // m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
    m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
    // m_wndMaxQuantity.SetEvent(WE_CHANGE, _OnMaxQuantityChangeFnc);
    // m_wndMaxQuantity.SetEvent(WE_SETFOCUS, _OnMaxQuantitySetfocusFnc);
    // m_wndMaxQuantity.SetEvent(WE_KILLFOCUS, _OnMaxQuantityKillfocusFnc);
    m_wndMaxQuantity.SetEvent(WE_CHECKVALUE, _OnMaxQuantityCheckValueFnc);
    m_wndIndication.SetEvent(WE_SELENDOK, _OnIndicationSelendokFnc);
    // m_wndIndication.SetEvent(WE_SETFOCUS, _OnIndicationSetfocusFnc);
    // m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
    m_wndIndication.SetEvent(WE_SELCHANGE, _OnIndicationSelectChangeFnc);
    m_wndIndication.SetEvent(WE_LOADDATA, _OnIndicationLoadDataFnc);
    // m_wndIndication.SetEvent(WE_ADDNEW, _OnIndicationAddNewFnc);
    m_wndIndication.SetEvent(WE_CHECKVALUE, _OnIndicationCheckValueFnc);
    // m_wndSpeed.SetEvent(WE_CHANGE, _OnSpeedChangeFnc);
    // m_wndSpeed.SetEvent(WE_SETFOCUS, _OnSpeedSetfocusFnc);
    // m_wndSpeed.SetEvent(WE_KILLFOCUS, _OnSpeedKillfocusFnc);
    m_wndSpeed.SetEvent(WE_CHECKVALUE, _OnSpeedCheckValueFnc);
    // m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
    m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
    // m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
    m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
    m_wndDoseWarning.SetEvent(WE_CLICK, _OnDoseWarningSelectFnc);
    m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
    m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
    m_wndOutPrescription.SetEvent(WE_CLICK, _OnOutPrescriptionSelectFnc);
    m_wndPaySource.SetEvent(WE_LOADDATA, _OnPaySourceLoadDataFnc);
    m_wndOtherSource.SetEvent(WE_LOADDATA, _OnOtherSourceLoadDataFnc);
    m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
    m_wndGrid.SetEvent(WE_SELCHANGE, _OnGridSelectChangeFnc);
    m_wndGrid.SetEvent(WE_LOADDATA, _OnGridLoadDataFnc);
    m_wndGrid.SetEvent(WE_DBLCLICK, _OnGridDblClickFnc);
    
    m_wndGrid.AddEvent(1, _T("Delete"), _OnGridDeleteItemFnc,0, VK_DELETE);



    int nMode = GetMode();

    m_szOrderDate = m_szTreatDate;

    if (nMode == VM_VIEW || nMode == VM_EDIT)
        GetDataToScreen();
    SetMode(nMode);

    if (pMF->GetObjectType() == _T("S") || nMode == VM_EDIT)
    {
        m_wndServiceWarehouse.EnableWindow(FALSE);
        // m_wndServiceWarehouse.ShowWindow(SW_HIDE);
        m_wndInsWarehouse.EnableWindow(FALSE);
        // m_wndInsWarehouse.ShowWindow(SW_HIDE);
    }

    if (pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C") ||
        nMode == VM_EDIT)
    {
        // m_wndInsWarehouse.EnableWindow(FALSE);
        // m_wndInsWarehouse.ShowWindow(SW_HIDE);
    }
    if (!pMF->CheckPermission(_T("20.07")))
    {
        m_wndOutPrescription.EnableWindow(false);
    }

    CString szSQL;
    szSQL.Format(_T(" SELECT msd_storage_id")
                 _T(" FROM M_STORAGE_DEFAULT")
                 _T(" WHERE MSD_OBJECT_ID = %d ")
                 _T(" ORDER BY msd_department_id,")
                 _T("   msd_storage_id"),
                 pMF->GetObjectID());
    CRecord rs(&pMF->m_db);

    rs.ExecSQL(szSQL);
    m_szStorageObjects.Format(_T("-1"));

    while (!rs.IsEOF())
    {
        int storage_id;
        rs.GetValue(_T("msd_storage_id"), storage_id);
        m_szStorageObjects.AppendFormat(_T(",%d"), storage_id);

        rs.MoveNext();
    }

    if (!pMF->IsCancerPatient() && 0 > 1)
    {
        m_wndCancerOpt.ShowWindow(SW_HIDE);
        m_bCancer = FALSE;
    }

    ((CHMSTreatmentTrackingDialog *)m_pParentOwner)->RefreshDrugs();
}
void CHMSTreatmentPrescriptionPopup::OnDoDataExchange(CDataExchange *pDX)
{

    DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
    DDX_Check(pDX, m_wndServiceWarehouse.GetDlgCtrlID(), m_bServiceWarehouse);
    DDX_Check(pDX, m_wndInsWarehouse.GetDlgCtrlID(), m_bInsWarehouse);
    DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
    DDX_Check(pDX, m_wndGenericSearch.GetDlgCtrlID(), m_bGenericSearch);
    DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
    DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
    DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
    DDX_Check(pDX, m_wndCancerOpt.GetDlgCtrlID(), m_bCancer);
    DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
    DDX_Text(pDX, m_wndSpeed.GetDlgCtrlID(), m_szSpeed);
    DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
    DDX_Check(pDX, m_wndOutPrescription.GetDlgCtrlID(), m_bOutPrescription);
    DDX_TextEx(pDX, m_wndPaySource.GetDlgCtrlID(), m_szPaySourceKey);
    DDX_TextEx(pDX, m_wndOtherSource.GetDlgCtrlID(), m_szOtherSourceKey);
    DDX_Text(pDX, m_wndUseQty.GetDlgCtrlID(), m_nUseQty);
    DDX_TextEx(pDX, m_wndUsageTime.GetDlgCtrlID(), m_szUseTime);

}
void CHMSTreatmentPrescriptionPopup::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CRecord rsl(&pMF->m_db);
    CString szSQL;
    szSQL.Format(_T(" SELECT hpo_orderdate, hpo_storage_id,")
                 _T("   hpou_dousage, hpou_index, ")
                 _T("   hpou_speed,")
                 _T("   hpou_qtyorder, hpou_indication_id as indication_id")
                 _T(" FROM hms_ipharmaorder,")
                 _T("   hms_ipharmaorder_usage")
                 _T(" WHERE hpo_orderid   = hpou_orderid")
                 _T(" AND hpou_orderid    = %ld")
                 _T(" AND hpou_product_id =%ld"),
                 m_nOrderID, m_nProductId);

    rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    UpdateData(TRUE);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
        rs.GetValue(_T("hpo_storage_id"), m_nStorageId);
        rs.GetValue(_T("hpou_qtyorder"), m_nQty);
        rs.GetValue(_T("hpou_dousage"), m_szUsage);
        rs.GetValue(_T("hpou_speed"), m_szSpeed);
        rs.GetValue(_T("indication_id"), m_szIndicationKey);

        UpdateData(FALSE);
        m_szStorageKey.Format(_T("%d"), m_nStorageId);
        m_szNameKey.Format(_T("%ld"), m_nProductId);
        OnStorageLoadData();
        OnNameLoadData();
        szSQL.Format(_T("GET_QTYAVAIABLEONHAND(%d, %ld)"), m_nStorageId,
                     m_nProductId);
        float max_qty = str2float(pMF->ExecDML(szSQL));
        m_nMaxQuantity = max_qty + m_nQty;
    }

    szSQL.Format(_T(" SELECT NVL(hpol_iscovid_paid, '01') as covidpaid FROM ")
                 _T("HMS_IPHARMAORDERLINE ")
                 _T(" WHERE hpol_orderid   = %ld")
                 _T(" AND HPOL_PRODUCT_ID =%ld"),
                 m_nOrderID, m_nProductId);

    rsl.ExecSQL(szSQL);
    if (!rsl.IsEOF())
    {
        rsl.GetValue(_T("covidpaid"), m_szPaySourceKey);
    }

    OnGridLoadData();
    
}
void CHMSTreatmentPrescriptionPopup::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    m_hms_ipharmaorderTbl.SetValue(_T("hpo_org_id"), pMF->GetModuleID());
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_storage_id"), m_szStorageKey);
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_user_id"), pMF->GetCurrentUser());
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_patientno"), pMF->m_nPatientNo);
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_docno"), pMF->m_nDocumentNo);
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_roomid"), pMF->m_nRoomID);
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_bedid"), pMF->m_nBedID);
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_refidx"), pMF->m_nRefIndex);
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_treatidx"), m_nTreatIdx);
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_doctor"), pMF->GetCurrentUser());
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderstatus"), _T("O"));
    m_hms_ipharmaorderTbl.SetValue(_T("hpol_iscovid_paid"), m_szPaySourceKey);
    m_hms_ipharmaorderTbl.SetValue(_T("hpol_other_source"), m_szOtherSourceKey);

    //_msg(_T("%d"), pMF->m_nRoomID);
    //_msg(_T("%d"), pMF->m_nBedID);
    CString szOrderType = _T("P");
    CString szGoHome;
    szGoHome = _T("N");
    // Kiem tra neu ke thuoc pha che thi them szOrderType='C';
    if (m_bOutPrescription)
    {
        szGoHome = _T("Y");
    }
    if (m_bCancer)
    {
        szOrderType = _T("C");
        szGoHome = _T("N");
    }

    m_hms_ipharmaorderTbl.SetValue(_T("hpo_ordertype"), szOrderType);
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_objecttype"), pMF->GetObjectType());
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_objectid"), pMF->GetObjectID());
    m_hms_ipharmaorderTbl.SetValue(_T("hpol_product_id"), m_szNameKey);
    m_hms_ipharmaorderTbl.SetValue(_T("hpol_qtyorder"), m_nQty);
    m_hms_ipharmaorderTbl.SetValue(_T("hpol_speed"), m_szSpeed);
    m_hms_ipharmaorderTbl.SetValue(_T("hpol_usage"), m_szUsage);
    m_hms_ipharmaorderTbl.SetValue(_T("hpol_inpackage"), _T("N"));
    m_hms_ipharmaorderTbl.SetValue(_T("hpol_indication_id"), m_szIndicationKey);
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_outpatient_order"), szGoHome);
    
}
void CHMSTreatmentPrescriptionPopup::SetDefaultValues()
{

    m_szNameKey.Empty();
    m_bGenericSearch = FALSE;
    m_szUnit.Empty();
    m_nQty = 0;
    m_nMaxQuantity = 0;
    m_szIndicationKey.Empty();
    m_szSpeed.Empty();
    m_szUsage.Empty();
    m_nUseQty = 0;
    m_szUseTime.Empty();
}
int CHMSTreatmentPrescriptionPopup::SetMode(int nMode)
{

    int nOldMode = GetMode();
    CGuiPopup::SetMode(nMode);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, szphanloaicovid, szisfree;
    CRecord rs(&pMF->m_db);

    switch (nMode)
    {
    case VM_ADD:
        EnableControls(TRUE);
        EnableButtons(TRUE, 0, 1, -1);
        SetDefaultValues();
        m_wndName.SetFocus();
        if (m_szStorageKey.IsEmpty())
            m_wndStorage.SetFocus();
        //			m_szOrderDate = pMF->GetSysDate();
        //	m_wndStorage.SetFocus();
        break;
    case VM_ADDCHILD:
        SetDefaultValues();
        //			m_szOrderDate = pMF->GetSysDate();
        if (m_szStorageKey.IsEmpty())
            m_wndStorage.SetFocus();
        else
            m_wndName.SetFocus();
        //			m_wndStorage.EnableWindow(FALSE);
        break;
    case VM_EDIT:
        EnableControls(TRUE);
        EnableButtons(TRUE, 0, 1, -1);
        m_wndStorage.EnableWindow(FALSE);
        m_wndName.EnableWindow(FALSE);
        if (!m_bEditQty)
        {
            m_wndQty.EnableWindow(FALSE);
        }
        m_wndUsage.SetFocus();
        break;
    case VM_VIEW:
        EnableControls(FALSE);
        EnableButtons(FALSE, 1, -1);
        break;
    case VM_NONE:
        EnableControls(FALSE);
        EnableButtons(TRUE, 0, 6, -1);
        SetDefaultValues();
        break;
    };
    m_wndOtherSource.EnableWindow(false);
    UpdateData(FALSE);
    if (pMF->GetObjectID() == 11)
    {
        m_wndInsWarehouse.EnableWindow(TRUE);
        // m_wndInsWarehouse.ShowWindow(SW_SHOW);
    }
    else
    {
        m_wndInsWarehouse.EnableWindow(FALSE);
    }

    /*if ((pMF->GetCurrentDepartmentID()).Left(5) == _T("COVID") ||
    (pMF->GetCurrentDepartmentID()).Left(2) == _T("A4"))
    {
        m_wndPaySource.EnableWindow(true);
    }
    else
        m_wndPaySource.EnableWindow(false);*/

    szSQL.Format(
        _T(" SELECT NVL(HCR_PHANLOAIBENHCOVID19,'N') as phanloaicovid from ")
        _T("HMS_CLINICAL_RECORD where hcr_docno=%ld"),
        pMF->m_nDocumentNo);
    rs.ExecSQL(szSQL);

    rs.GetValue(_T("phanloaicovid"), szphanloaicovid);
    if (szphanloaicovid == _T("01") || szphanloaicovid == _T("02"))
    {
        m_wndPaySource.EnableWindow(true);
    }
    else
        m_wndPaySource.EnableWindow(false);

    m_wndClose.EnableWindow(TRUE);
    return nOldMode;
}

void CHMSTreatmentPrescriptionPopup::OnStorageSelectChange(int nOldItemSel,
                                                           int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSTreatmentPrescriptionPopup::OnStorageSelendok()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    CRecord rs(&pMF->m_db);
    CString szisfree, szSQL;
    int StorageID = ToInt(m_wndStorage.GetCurrent(0));

    szSQL.Format(_T(" SELECT NVL(msl_isfree, 'N') as isfree ")
                 _T(" from M_STORAGELIST ")
                 _T(" where MSL_STORAGE_ID = %d"),
                 StorageID);

    rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);

    rs.GetValue(_T("isfree"), szisfree);

    if ((GetMode() != VM_EDIT) && szisfree != _T("Y"))
    {
        m_szNameKey.Empty();
        CGuiPopup::SetMode(VM_ADD);
    }
    if (szisfree == _T("Y"))
    {
        m_wndOtherSource.EnableWindow(true);
        // UpdateData(FALSE);
    }
}
long CHMSTreatmentPrescriptionPopup::OnPaySourceLoadData()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndPaySource.IsSearchKey() && !m_szPaySourceKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s'"), m_szPaySourceKey);
    };
    m_wndPaySource.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(
        _T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ")
        _T("ss_id='hms_nguontt_covid19' %s ORDER BY cast(ss_code as integer) "),
        szWhere);
    nCount = rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    while (!rs.IsEOF())
    {
        m_wndPaySource.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                                NULL);
        rs.MoveNext();
    }
    return nCount;
}
long CHMSTreatmentPrescriptionPopup::OnOtherSourceLoadData()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndOtherSource.IsSearchKey() && !m_szOtherSourceKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s'"), m_szOtherSourceKey);
    };
    m_wndOtherSource.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(
        _T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ")
        _T("ss_id='thietlap_nguon' %s ORDER BY cast(ss_code as integer) "),
        szWhere);
    nCount = rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    while (!rs.IsEOF())
    {
        m_wndOtherSource.AddItems(rs.GetValue(_T("id")),
                                  rs.GetValue(_T("name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSTreatmentPrescriptionPopup::OnStorageSetfocus(){

}*/
/*void CHMSTreatmentPrescriptionPopup::OnStorageKillfocus(){

}*/
long CHMSTreatmentPrescriptionPopup::OnStorageLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere, szStorageObject;
    UpdateData(TRUE);

    if (m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty())
    {
        szWhere.Format(_T(" AND msl_storage_id=%d "), ToInt(m_szStorageKey));
    };

    if (GetMode() == VM_EDIT)
    {
        szSQL.Format(_T(" SELECT msl_storage_id,")
                     _T("   msl_name,")
                     _T("   msl_type")
                     _T(" FROM m_storagelist")
                     _T(" WHERE msl_type      IN('A','B','D','C','F')")
                     _T(" AND msl_storage_id=%d"),
                     m_nStorageId);
    }
    else
    {
        CString szObjectType = pMF->GetObjectType();
        if (m_bServiceWarehouse || m_bInsWarehouse)
        {
            if (m_bServiceWarehouse)
            {
                szWhere.AppendFormat(
                    _T(" and msl_category in('S') and msl_type <> 'C' "));
                szWhere.AppendFormat(
                    _T(" and msl_storage_id in(select msd_storage_id from ")
                    _T("m_storage_default where msd_object_id=7) "));
            }
            if (m_bInsWarehouse)
            {
                szWhere.AppendFormat(
                    _T(" and msl_category in('I') and msl_type <> 'C' "));
                szWhere.AppendFormat(
                    _T(" and msl_storage_id in(select msd_storage_id from ")
                    _T("m_storage_default where msd_object_id=4) "));
            }
        }
        else
        {
            szWhere.AppendFormat(_T(" and msl_storage_id in(%s) "),
                                 m_szStorageObjects);
        }

        szWhere.AppendFormat(_T(" and msl_storage_id not in(12, 13) "));
        // Khoa C1.3 nội trú đi vào hoạt động, dùng chung tủ thuốc ở phòng khám
        if (pMF->GetDepartmentID() == _T("C1.3NT"))
        {
            szSQL.Format(
                _T(" SELECT msl_storage_id,")
                _T("   msl_name,")
                _T("   msl_type")
                _T(" FROM m_storagelist")
                _T(" WHERE (msl_type      IN('A','B','D','F') or ")
                _T("(msl_type='C' and msl_dept_id IN ('C1.3', 'C1.3NT')))")
                _T(" AND msl_isactive     ='Y'")
                _T(" AND msl_storage_id <> 23 ")
                _T(" %s ")
                _T(" ORDER BY msl_storage_id"),
                szWhere);
        }
        else
        {
            szSQL.Format(_T(" SELECT msl_storage_id,")
                         _T("   msl_name,")
                         _T("   msl_type")
                         _T(" FROM m_storagelist")
                         _T(" WHERE (msl_type      IN('A','B','D','F') or ")
                         _T("(msl_type='C' and msl_dept_id='%s'))")
                         _T(" AND msl_isactive     ='Y'")
                         _T(" AND msl_storage_id <> 23 ")
                         _T(" %s ")
                         _T(" ORDER BY msl_storage_id"),
                         pMF->GetDepartmentID(), szWhere);
        }
    }

    m_wndStorage.DeleteAllItems();
    int nCount = 0;

    Notice(szSQL);

    nCount = rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    while (!rs.IsEOF())
    {
        m_wndStorage.AddItems(rs.GetValue(_T("msl_storage_id")),
                              rs.GetValue(_T("msl_name")),
                              rs.GetValue(_T("msl_type")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSTreatmentPrescriptionPopup::OnStorageAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

void CHMSTreatmentPrescriptionPopup::OnServiceWarehouseSelect()
{
    UpdateData(TRUE);
    m_wndStorage.DeleteAllItems();
    m_szStorageKey.Empty();
    m_bInsWarehouse = FALSE;
    UpdateData(FALSE);
}

void CHMSTreatmentPrescriptionPopup::OnInsWarehouseSelect()
{
    UpdateData(TRUE);
    m_wndStorage.DeleteAllItems();
    m_szStorageKey.Empty();
    m_bServiceWarehouse = FALSE;
    UpdateData(FALSE);
}

void CHMSTreatmentPrescriptionPopup::OnNameSelectChange(int nOldItemSel,
                                                        int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSTreatmentPrescriptionPopup::OnNameSelendok()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWarning;

    UpdateData(true);
    if (pMF->GetObjectType() != _T("S"))
    {
        szSQL.Format(_T("get_product_class_warning(%ld, 'P')"),
                     str2long(m_szNameKey));
        szWarning = pMF->ExecDML(szSQL);
        if (!szWarning.IsEmpty())
        {
            CString tmpStr;
            tmpStr.Format(_T("%s"), szWarning);
            CHMSMessageDialog dlg(this, tmpStr);
            if (dlg.DoModal() == IDOK)
            {
                m_wndQty.SetFocus();
            }
            /*
            tmpStr.Format(_T("[Dược/TB] %s"), szWarning);
            int nChoice = ShowMessageBox(tmpStr, MB_OK);
            CHMSReasonExDialog dlg(this, _T("hms_reason"));
            if (dlg.DoModal() == IDOK)
            {
                JSONVALUE j;
                CString szEvent, szDesc;
                szEvent = _T("product_class_warning");
                j[_T("reason_id")] = dlg.m_szReasonKey;
                j[_T("note")] = dlg.m_szNote;
                j[_T("choice")] = nChoice;
                j.ToString(szDesc);
                pMF->SystemLog(szEvent, szDesc);
            }
            if (nChoice == IDNO)
            {
                m_szNameKey.Empty();
                UpdateData(FALSE);
                return;
            }
            */
        }
    }
    // m_szProdCountry = m_wndName.GetCurrent(1);
    m_szUnit = m_wndName.GetCurrent(3);
    m_nMaxQuantity = str2float(m_wndName.GetCurrent(5));
    /*
    szSQL.Format(_T("SELECT distinct hpou_dousage ") \
        _T(" FROM hms_ipharmaorder_usage ") \
        _T(" WHERE hpou_user_id='%s' and hpou_product_id=%ld  and rownum <= 1
    and hpou_dousage is not null "), pMF->GetCurrentUser(),
    str2long(m_szNameKey));
*/
    szSQL.Format(_T(" SELECT hpou_dousage")
                 _T(" FROM")
                 _T("   (SELECT hpou_dousage,")
                 _T("     hpou_orderid, hpou_indication_id ")
                 _T("   FROM hms_ipharmaorder_usage")
                 _T("   WHERE hpou_user_id ='%s'")
                 _T("   AND hpou_product_id=%ld ")
                 _T("   AND hpou_dousage  IS NOT NULL")
                 _T("   ORDER BY hpou_orderid DESC")
                 _T("   )")
                 _T(" WHERE rownum <= 1"),
                 pMF->GetCurrentUser(), str2long(m_szNameKey));

    rs.ExecSQL(szSQL);
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("hpou_dousage"), m_szUsage);
        rs.GetValue(_T("hpou_indication_id"), m_szIndicationKey);
    }

    CString szIsPrecision = m_wndName.GetCurrent(6);
    if (szIsPrecision == _T("Y"))
    {
        m_wndQty.SetNumberDecimal(2);
    }
    else
    {
        m_wndQty.SetNumberDecimal(0);
    }

    m_wndQty.SetNumberDecimal(0);

    BOOL bShowWarning = FALSE;
    if (CheckClinicalPharmacy(bShowWarning) > 0)
    {
        if (bShowWarning == FALSE)
        {
            m_wndDoseWarning.ShowWindow(SW_SHOW);
        }
    }
    else
    {
        m_wndDoseWarning.ShowWindow(SW_HIDE);
    }
    UpdateData(false);
}
/*void CHMSTreatmentPrescriptionPopup::OnNameSetfocus(){

}*/
/*void CHMSTreatmentPrescriptionPopup::OnNameKillfocus(){

}*/
long CHMSTreatmentPrescriptionPopup::OnNameLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere, szStorageType;
    szWhere.Empty();

    int nCount = 0;
    if (GetMode() == VM_EDIT)
    {
        m_szNameKey.Format(_T("%ld"), m_nProductId);
        m_szStorageKey.Format(_T("%d"), m_nStorageId);
    }
    _tprintf(_T("\r\nstorage=%s"), m_szStorageKey);
    if (m_szStorageKey.IsEmpty())
        return 0;

    // Neu kho la loai tu truc thi khong can phai kiem tra quyen
    szStorageType = m_wndStorage.GetCurrent(2);
    int nLevel1, nLevel2, nLevel3;
    nLevel1 = m_nLevel1;
    nLevel2 = m_nLevel2;
    nLevel3 = m_nLevel3;

    if (szStorageType == _T("C"))
    {
        nLevel1 = nLevel2 = nLevel3 = 0;
    }

    szWhere.AppendFormat(_T(" and msl_storage_id=%ld "),
                         str2long(m_szStorageKey));
    /*if(pMF->GetObjectType() != _T("S")){
        if (nLevel1 > 0 || nLevel2 > 0 || nLevel3 > 0)
            szWhere.AppendFormat(_T(" AND (product_priority IN(%d,%d,%d,0) OR
    product_priority is null) "), nLevel1, nLevel2, nLevel3);
    }*/

    CString szText;
    m_wndName.GetWindowText(szText);
    if (!szText.IsEmpty())
    {
        szWhere.AppendFormat(
            _T(" and lower(product_name) like(chr(37)||lower('%s')||chr(37)) "),
            szText);
    }

    return pMF->LoadProductItemList(&m_wndName, m_szNameKey, szWhere);

    /*

    //	m_wndName.SetSearchEx(true);

    m_wndName.DeleteAllItems();

     szSQL.Format(_T(" SELECT  pmsi_refidx as refidx, ") \
                _T(" 	pmi_id as itemid, ") \
                _T(" 	CASE WHEN length(pmg_name) > 0 THEN pmi_name ||' ['||
pmg_name ||']' ELSE pmi_name END as name, ") \
                _T("	pmg_name as genericname, ") \
                _T(" 	pmi_unit as unit, ") \
                _T(" 	sum(pmsl_quantity-pmsl_orderqty) as orderqty, ") \
                _T(" 	(select distinct sc_name from sys_country where
sc_id=pmsi_countryid) as country, ") \
                _T("	pmsi_countryid as countryid ") \
                _T(" FROM pms_stockline ") \
                _T(" LEFT JOIN pms_stockitems ON(pmsl_sitemid=pmsi_id)") \
                _T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
                _T(" LEFT JOIN pms_generic  on(pmi_genericid=pmg_id) ") \
                _T(" WHERE msl_storage_id=%ld ") \
                _T(" 	and pmsl_quantity-pmsl_orderqty > 0 ") \
                _T(" 	and (pmsi_expdate=to_date('1752-09-14', 'yyyy/mm/dd
hh24:mi:ss') or pmsi_expdate > to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ) %s ") \
                _T(" GROUP BY pmsi_refidx, pmi_id, pmi_name, pmi_unit, pmg_name,
pmsi_countryid ") \ _T(" ORDER BY name, unit"), str2int(m_szStorageKey),
m_szOrderDate, szWhere ); _fmsg(_T("%s"), szSQL); nCount = rs.ExecSQL(szSQL);
    CString tmpStr;
    while(!rs.IsEOF()){
        rs.GetValue(_T("genericname"), tmpStr);
        m_wndName.AddItems(
            rs.GetValue(_T("refidx")),
            rs.GetValue(_T("name")),
            rs.GetValue(_T("unit")),
            rs.GetValue(_T("vatprice")),
            tmpStr,
            rs.GetValue(_T("country")),
            rs.GetValue(_T("orderqty")),
            rs.GetValue(_T("countryid")),
            rs.GetValue(_T("itemid")),
            rs.GetValue(_T("dosage")),
            NULL);
        rs.MoveNext();
    }

    return nCount;
*/
}
/*void CHMSTreatmentPrescriptionPopup::OnNameAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CHMSTreatmentPrescriptionPopup::OnGenericSearchSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_szNameKey.Empty();
    UpdateData(TRUE);
    if (m_bGenericSearch)
        m_wndName.Format(5, 1, 10, 2);
    else
        m_wndName.Format(5, 1, 10, 1);
    m_wndName.SetFocus();
    UpdateData(FALSE);
}
/*void CHMSTreatmentPrescriptionPopup::OnUnitChange(){

} */
/*void CHMSTreatmentPrescriptionPopup::OnUnitSetfocus(){

} */
/*void CHMSTreatmentPrescriptionPopup::OnUnitKillfocus(){

} */
int CHMSTreatmentPrescriptionPopup::OnUnitCheckValue() { return 0; }
/*void CHMSTreatmentPrescriptionPopup::OnQtyChange(){

} */
/*void CHMSTreatmentPrescriptionPopup::OnQtySetfocus(){

} */
/*void CHMSTreatmentPrescriptionPopup::OnQtyKillfocus(){

} */
int CHMSTreatmentPrescriptionPopup::OnQtyCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr, szMsg;
    if (m_nQty <= 0)
    {
        return -1;
    }
    if (m_nQty > m_nMaxQuantity)
    {
        m_wndQty.SetToolTipMessage(_T("Quantity order > onhand quantity"));
        return -1;
    }
    return 0;
}
/*void CHMSTreatmentPrescriptionPopup::OnMaxQuantityChange(){

} */
/*void CHMSTreatmentPrescriptionPopup::OnMaxQuantitySetfocus(){

} */
/*void CHMSTreatmentPrescriptionPopup::OnMaxQuantityKillfocus(){

} */
int CHMSTreatmentPrescriptionPopup::OnMaxQuantityCheckValue() { return 0; }
void CHMSTreatmentPrescriptionPopup::OnIndicationSelectChange(int nOldItemSel,
                                                              int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSTreatmentPrescriptionPopup::OnIndicationSelendok()
{
    UpdateData(true);
    if (m_szUsage.IsEmpty())
        m_szUsage = m_wndIndication.GetCurrent(1);
    UpdateData(false);
}
/*void CHMSTreatmentPrescriptionPopup::OnIndicationSetfocus(){

}*/
/*void CHMSTreatmentPrescriptionPopup::OnIndicationKillfocus(){

}*/
long CHMSTreatmentPrescriptionPopup::OnIndicationLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return pMF->LoadDrugIndication(&m_wndIndication, m_szIndicationKey);

    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s' "), m_szIndicationKey);
    };

    // szWhere.AppendFormat(_T(" and lower(ss_desc)
    // like(chr(37)||lower('%s')||chr(37)) "), m_szIndicationKey);

    m_wndIndication.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name, ss_index FROM ")
                 _T("sys_sel WHERE ss_id='hms_indication_drug' %s ORDER BY ")
                 _T("name,CAST(ss_code AS INTEGER) "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndIndication.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                                 rs.GetValue(_T("ss_index")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSTreatmentPrescriptionPopup::OnIndicationAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSTreatmentPrescriptionPopup::OnSpeedChange(){

} */
/*void CHMSTreatmentPrescriptionPopup::OnSpeedSetfocus(){

} */
/*void CHMSTreatmentPrescriptionPopup::OnSpeedKillfocus(){

} */
int CHMSTreatmentPrescriptionPopup::OnSpeedCheckValue() { return 0; }
/*void CHMSTreatmentPrescriptionPopup::OnUsageChange(){

} */
void CHMSTreatmentPrescriptionPopup::OnUsageSetfocus()
{
    m_wndUsage.SetSel(-1);
}
/*void CHMSTreatmentPrescriptionPopup::OnUsageKillfocus(){

} */

int CHMSTreatmentPrescriptionPopup::OnUsageCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_szUsage.Trim();
    if (m_szUsage.IsEmpty() && pMF->IsRequireUsage(m_szNameKey))
        return -1;
    return 0;
}
void CHMSTreatmentPrescriptionPopup::OnSaveSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnSaveHMSTreatmentPrescriptionPopup();
}
void CHMSTreatmentPrescriptionPopup::OnDoseWarningSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    BOOL bShowWarning = TRUE;
    CheckClinicalPharmacy(bShowWarning);
    if (bShowWarning)
    {
        ShowClinicalWarning();
    }
}

int CHMSTreatmentPrescriptionPopup::CheckClinicalPharmacy(BOOL &bShow)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    int ret = 0;
    /*Check các đk dược lâm sàng*/
    szSQL.Format(_T("m_product_class_check_clinical(%ld, %ld, '%s')"),
                 pMF->m_nDocumentNo, str2long(m_szNameKey),
                 bShow ? _T("Y") : _T("N"));
    ret = str2int(pMF->ExecDML(szSQL));
    if (ret <= 0)
    {
        bShow = FALSE;
        return ret;
    }
    szSQL.Format(_T(" SELECT Count (*)")
                 _T("   FROM m_product_class_interactionln")
                 _T("  WHERE mpcil_class_id = (SELECT mp_product_class_id")
                 _T("                            FROM m_product")
                 _T("                           WHERE mp_product_id = %ld) ")
                 _T("AND mpcil_isactivewarning = 'Y'"),
                 str2long(m_szNameKey));
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() > 0)
    {
        bShow = TRUE;
    }
    return ret;
}

int CHMSTreatmentPrescriptionPopup::ShowClinicalWarning()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr;
    // Check độ thanh thải https://github.com/vimesdev/BV108/issues/1720
    //  giả sử có ICD chống chỉ định, vậy thì phải kiểm tra theo vòng lặp cứ có
    //  ICD nào thì hiển thị lần lượt ra thôi có class iD lấy ra các ICD chống
    //  chỉ định, chưa quan tâm là có điều kiện hay ko có điều kiện
    CString szICDCCD, szClassIDs, szICDNoNhay;
    long nClassID = 0;
    nClassID = str2long(m_wndName.GetCurrent(7));
    //_msg(_T("%d"), nClassID);

    szSQL.Format(_T("select distinct mpci_icd, mpci_class_id from ")
                 _T("m_product_class_interaction  ")
                 _T("	where mpci_class_id  = %ld  ")
                 _T("		or mpci_class_id in (select mpcl_class_id from ")
                 _T("m_product_classline  where mpcl_refid= %ld) "),
                 nClassID, nClassID);
    rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);
    // neu co ban ghi thi moi lam

    if (!rs.IsEOF())
    {
        szICDCCD.Empty();
        szClassIDs.Empty();
        szICDNoNhay.Empty();
        while (!rs.IsEOF())
        {
            rs.GetValue(_T("mpci_icd"), tmpStr);
            // kiem tra xem la benh nhan co dinh ICD nay ko da
            szSQL.Format(_T("hms_checkicdfordrug_one(%ld, '%s', '%s') "),
                         pMF->m_nDocumentNo, tmpStr, pMF->GetModuleID());
            int nCount = str2int(pMF->ExecDML(szSQL));
            if (nCount >= 1)
            {
                if (!szICDCCD.IsEmpty())
                    szICDCCD += _T(",");
                szICDCCD.AppendFormat(_T("'%s'"), tmpStr);

                if (!szICDNoNhay.IsEmpty())
                    szICDNoNhay += _T(",");
                szICDNoNhay.AppendFormat(_T("%s"), tmpStr);

                if (!szClassIDs.IsEmpty())
                    szClassIDs += _T(",");
                szClassIDs.AppendFormat(_T("%s"),
                                        rs.GetValue(_T("mpci_class_id")));
            }

            rs.MoveNext();
        }
        /*
        if(!szICDCCD.IsEmpty())
        {
            // neu ko empty co nghia la da dinh ICD can check ->>> goi dialog
        tuong tac thuoc benh CHMSTuongTacThuocBenh dlg(this); dlg.m_szICD10CCD=
        szICDCCD; dlg.m_nDocumentNo= pMF->m_nDocumentNo; dlg.m_nProductID=
        str2long(m_szNameKey); dlg.m_szClassIDs=szClassIDs;
            dlg.m_szICD10CCDNoNhay=szICDNoNhay;
            if(dlg.DoModal() != IDOK)
                return -1;
        }
        */
    }

    CHMSTuongTacThuocBenh dlg(this);
    dlg.m_szICD10CCD = szICDCCD;
    dlg.m_nDocumentNo = pMF->m_nDocumentNo;
    dlg.m_nProductID = str2long(m_szNameKey);
    dlg.m_szClassIDs = szClassIDs;
    dlg.m_szICD10CCDNoNhay = szICDNoNhay;
    if (dlg.DoModal() != IDOK)
        return -1;
    // END ticket 1720
    return 0;
}

#include ".\HMSTreatmentPrescriptionPopup.h"
#include "HMSConfirmDialog.h"
/*
void CHMSTreatmentPrescriptionPopup::OnConfirmSelect()
{
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    if(pMF->m_szDoctor == pMF->GetCurrentUser())
    {
    }
    else
    {
        if(pMF->m_bConfirm)
        {
            CHMSConfirmDialog dlg;
            dlg.m_szDoctor = pMF->m_szDoctor;

            if(dlg.DoModal() != IDOK)
                return;
        }
    }
    CString szSQL;
    szSQL.Format(_T("UPDATE hms_ipharmaorder SET hpo_orderstatus='S',
hpo_doctor='%s' WHERE hpo_orderid=%ld and hpo_orderstatus='O' "),
        pMF->m_szDoctor, m_nOrderID);
    _debug(_T("\t\n%s"), szSQL);
    pMF->ExecSQL(szSQL);

}
*/
void CHMSTreatmentPrescriptionPopup::OnCloseSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    //	ClosePopup();
    CGuiPopup::OnCancel();
    m_bInPackage = false;
}
int CHMSTreatmentPrescriptionPopup::OnAddHMSTreatmentPrescriptionPopup()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}
int CHMSTreatmentPrescriptionPopup::OnEditHMSTreatmentPrescriptionPopup()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CHMSTreatmentPrescriptionPopup::OnDeleteHMSTreatmentPrescriptionPopup()
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
        OnCancelHMSTreatmentPrescriptionPopup();
    }
    return 0;
}
int CHMSTreatmentPrescriptionPopup::OnSaveHMSTreatmentPrescriptionPopup()
{
    if (GetMode() != VM_ADD && GetMode() != VM_ADDCHILD && GetMode() != VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr, szSQL1, szSQL2, szObjectId, szOutPatient, szCardno,
        szisfreestock;
    int nRet;

    //Kiem tra neu có line chi tiết thì tổng số lượng trong line = số lượng dự trù
    if (!CheckBeforeSaveLine())
    {
        ShowMessageBox(
            L"Số lượng sử dụng <> số lượng dự trù. Đề nghị kiểm tra lại");
        return false;
    }

    szSQL1.Format(
        _T("Select hd_object as ObjectID, NVL(HTR_OUTPATIENT,'N') as ")
        _T("OutPatient, CASE WHEN SUBSTR(hd_cardno,1,2) in ('QN', 'CA') THEN ")
        _T("'Y' ELSE 'N' END  AS CardNo from hms_doc left join ")
        _T("hms_treatment_record ON (hd_docno=htr_docno) where hd_docno = %ld ")
        _T("AND htr_treattime = %ld"),
        pMF->m_nDocumentNo, pMF->GetTreatTime());
    rs.ExecSQL(szSQL1);

    if (!rs.IsEOF())
    {
        rs.GetValue(_T("ObjectID"), szObjectId);
        rs.GetValue(_T("OutPatient"), szOutPatient);
        rs.GetValue(_T("CardNo"), szCardno);
    }
    // Bổ sung
    szSQL2.Format(
        _T(" SELECT NVL(MSL_ISFREE, 'X') as isfreestock from M_STORAGELIST")
        _T(" where MSL_STORAGE_ID = %ld"),
        str2int(m_szStorageKey));
    rs.ExecSQL(szSQL2);

    if (!rs.IsEOF())
    {
        rs.GetValue(_T("isfreestock"), szisfreestock);
    }

    // Bệnh nhân quân đối tượng có thẻ QN khong cho kê thuốc từ kho dịch vụ nhà
    // thuốc
    szSQL.Format(_T("HMS_ARMY_OBJECT_CHECK(%ld, %ld, %ld)"), pMF->m_nDocumentNo,
                 str2int(m_szStorageKey), str2long(m_szNameKey));
    nRet = str2int(pMF->ExecDML(szSQL));
    //_msg(_T("%s"), szSQL);

    if (nRet < 0)
    {
        ShowMessageBox(_T("Bệnh nhân thuộc đối tượng quân, không được phép kê ")
                       _T("đơn TPCN, y dụng cụ từ kho nhà thuốc bệnh viện ")
                       _T("(theo quy định của dược)!"),
                       MB_ICONERROR);
        return -1;
    }

    //	m_szOrderDate.AppendFormat(_T(" %s"), pMF->GetSysTime());
    m_szOrderDate = m_szTreatDate;
    m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);

    if (!IsValidateData())
        return -1;
    int ret = 0;
    if (GetMode() == VM_ADD)
    {
        bool res =
            pMF->CheckDepositAmount(pMF->m_nDocumentNo, m_szNameKey, m_nQty,
                                    _T("Y"), str2int(m_szStorageKey));
        if (!res)
        /*{
            //m_wndQty.SetToolTipMessage(_T("Số tiền bệnh nhân tạm gửi đã
        hết")); int nret = ShowMessageBox(_T("S\x1ED1 ti\x1EC1n \x62\x1EC7nh
        nh\xE2n t\x1EA1m g\x1EEDi \x111\xE3 h\x1EBFt.\x42\x1EA1n \x63\xF3
        mu\x1ED1n ti\x1EBFp t\x1EE5\x63 \x63h\x1EC9 \x111\x1ECBnh kh\xF4ng!
        "),MB_YESNO); if(nret == IDNO) return -1 ;
            //return -1;
        }*/
        // Update ngày 04/08/2020, locdv
        // Bệnh nhân hết tiền phải check cứng đối tượng dịch vụ & bảo hiểm khác,
        // các đối tượng khác cảnh báo, theo yêu cầu của tài chính & sonld
        {

            if (szOutPatient != _T("Y") && szCardno != _T("Y") &&
                pMF->GetCurrentDepartmentID() != _T("A11") &&
                szisfreestock != _T("Y"))
            {
                ShowMessageBox(
                    _T("Số tiền tạm gửi của bệnh nhân đã hết, vui lòng nộp ")
                    _T("thêm tiền để tiếp tục sử dụng dịch vụ!"));

                return -1;
            }
            else
            {
                int nret = ShowMessageBox(
                    _T("S\x1ED1 ti\x1EC1n \x62\x1EC7nh nh\xE2n t\x1EA1m ")
                    _T("g\x1EEDi \x111\xE3 h\x1EBFt.\x42\x1EA1n \x63\xF3 ")
                    _T("mu\x1ED1n ti\x1EBFp t\x1EE5\x63 \x63h\x1EC9 ")
                    _T("\x111\x1ECBnh kh\xF4ng! "),
                    MB_YESNO);
                if (nret == IDNO)
                    return -1;
            }
        }
    }
    BOOL bShowWarning = TRUE;
    CheckClinicalPharmacy(bShowWarning);
    if (bShowWarning)
    {
        if (ShowClinicalWarning() < 0)
        {
            return -1;
        }
    }

    if (GetMode() == VM_EDIT)
    {
        if (m_bEditQty)
        {
            long lRet = 0;
            pMF->BeginTransaction();
            szSQL.Format(
                _T(" HMS_IPHARMAORDER_DELLINE_V6_2(%ld, %ld, '%s', '%s') "),
                m_nOrderID, m_nProductId, pMF->GetCurrentUser(),
                m_szIndicationKey);

            lRet = str2long(pMF->ExecDML(szSQL));
            if (lRet <= 0)
            {
                _tprintf(_T("\nDelete fail[%ld]\n"), lRet);
                pMF->Rollback();
            }
            else
            {
                szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE_V5(%s) "),
                             m_hms_ipharmaorderTbl.FormatSQL());
                lRet = str2long(pMF->ExecDML(szSQL));
                if (lRet <= 0)
                {
                    _tprintf(_T("\nAdd Fail[%ld]\n"), lRet);
                    pMF->Rollback();
                }
                else
                {
                    m_nOrderID = lRet;
                    pMF->Commit();
                }
            }
            if (lRet <= 0)
            {
                CString szMsg;
                szMsg.Format(
                    _T("[%ld] Lỗi không sửa được số lượng thuốc, vật tư"),
                    lRet);
                ShowToolTip(&m_wndQty, szMsg);
            }
        }
        // szSQL.Format(_T("HMS_IPHARMAORDER_EDITUSAGE_V5(%ld, %ld, %ld,
        // '%s','%s','%s', '%s') "), pMF->m_nDocumentNo, m_nOrderID,
        // m_nProductId, m_szSpeed, m_szUsage, m_szIndicationKey,
        // m_szPaySourceKey);
        szSQL.Format(
            _T("HMS_IPHARMAORDER_EDITUSAGE_V5(%ld, %ld, %ld, '%s','%s','%s') "),
            pMF->m_nDocumentNo, m_nOrderID, m_nProductId, m_szSpeed, m_szUsage,
            m_szIndicationKey);
        ret = str2int(pMF->ExecDML(szSQL));
    }
    else
    {
        szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE_V5(%s) "),
                     m_hms_ipharmaorderTbl.FormatSQL());
        m_nOrderID = str2long(pMF->ExecDML(szSQL));
        if (m_nOrderID > 0)
        {
            ret = 1;
        }
    }
    if (pMF->CheckInteraction(pMF->m_nDocumentNo, m_szOrderDate,
                              str2long(m_szNameKey)) < 0)
    {
        szSQL.Format(_T(" HMS_IPHARMAORDER_DELLINE_V6_2(%ld, %s, '%s', '%s') "),
                     m_nOrderID, m_szNameKey, pMF->GetCurrentUser(),
                     m_szIndicationKey);
        pMF->ExecDML(szSQL);
    }
    //_msg(_T("\r\n%d: %s"), ret, szSQL);
    _tprintf(_T("\norder_id: %ld"), m_nOrderID);
    if (ret <= 0)
    {
        _tprintf(_T("\nszSQL: %s\n"), szSQL);
        CString szMsg;
        szMsg.Format(_T("[%d] Lỗi không thêm được thuốc, vật tư"), ret);
        ShowToolTip(&m_wndName, szMsg);
    }
    else
    {
        if (pMF->GetObjectType() != _T("S"))
        {
            CString szWarning;
            szSQL.Format(_T("get_product_class_warning(%ld, 'P')"),
                         str2long(m_szNameKey));
            szWarning = pMF->ExecDML(szSQL);
            if (!szWarning.IsEmpty())
            {
                JSONVALUE j;
                CString szEvent, szDesc;
                szEvent = _T("product_class_warning2");
                j[_T("order_id")] = m_nOrderID;
                j[_T("product_id")] = m_szNameKey;
                j.ToString(szDesc);
                pMF->SystemLog(szEvent, szDesc);
            }
        }

        //Save chi tiết các line theo số lượng và thời gian sử dụng
        
        SaveDosageLine(pMF->m_nDocumentNo, m_nOrderID, str2long(m_szNameKey));

        if (GetMode() != VM_EDIT)
        {
            SetMode(VM_ADDCHILD);
            // m_pParentOwner->SendMessage(WM_COMMAND, CMD_REFRESHDATA);
            ((CHMSTreatmentTrackingDialog *)m_pParentOwner)->RefreshDrugs();
        }
        else
        {
            ClosePopup();
        }
        // GetParent()->SendMessage(WM_COMMAND, CMD_REFRESHDATA);

        //		((CHMSTreatmentTrackingDialog*)m_pParentOwner)->m_wndTreatList.Invalidate();
    }
    return ret;
}
int CHMSTreatmentPrescriptionPopup::OnCancelHMSTreatmentPrescriptionPopup()
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
int CHMSTreatmentPrescriptionPopup::
    OnHMSTreatmentPrescriptionPopupListLoadData()
{
    return 0;
}
BEGIN_MESSAGE_MAP(CHMSTreatmentPrescriptionPopup, CGuiPopup)

END_MESSAGE_MAP()

/*
void CHMSTreatmentPrescriptionPopup::ShowPopup(CWnd *pWndRef, int nShow){
//	CGuiPopup::ShowPopup(pWndRef, nShow);
}

void CHMSTreatmentPrescriptionPopup::ClosePopup()
{
//	CGuiPopup::ClosePopup();
    m_bInPackage = false;

}
*/

int CHMSTreatmentPrescriptionPopup::OnIndicationCheckValue()
{
    m_wndUsage.SetSel(m_wndUsage.GetWindowTextLength(),
                      m_wndUsage.GetWindowTextLength());
    return 0;
}

/*
void CHMSTreatmentPrescriptionPopup::CreatePopup(bool bInPackage){
    static bool bInited = false;
    m_bInPackage = bInPackage;

    if(!bInited)
    {
        bInited = true;
    }


}
*/

void CHMSTreatmentPrescriptionPopup::OnAddLineSelect() { 
    UpdateData(TRUE);
    if (m_nUseQty <= 0)
    {
        ShowMessageBox(L"Yêu cầu nhập số lượng");
        return;
    }
    CTimeStamp ts;
    if (!ts.ParseTime(m_szUseTime))
    {
        ShowMessageBox(L"Thời gian không hợp lệ");
        return;
    }
    
    float ttlQty = m_nUseQty;
    int nFound = -1;
    for (int i = 0; i < m_wndGrid.GetItemCount(); i++)
    {
        
        if (m_wndGrid.GetItemText(i, 1) == m_szUseTime)
        {
            nFound = i;
        }
        else
        {
            ttlQty += str2float(m_wndGrid.GetItemText(i, 0));
        }
    }

    if (ttlQty > m_nQty)
    {
        CString szMsg;
        szMsg.Format(L"Tổng số lượng [%.2f] <> số lượng dự trù [%.2f]", ttlQty,
                     m_nQty);
        ShowMessageBox(szMsg);
        return;
    }

    CString szQty;
    szQty.Format(L"%.2f", m_nUseQty);
    if (nFound == -1)
    {
        m_wndGrid.AddItems(szQty, m_szUseTime, NULL);
    }
    else
    {
        m_wndGrid.SetItemText(nFound, 0, szQty);
    }
    m_wndGrid.AdjustLayout();
    m_wndUseQty.SetFocus();
}

void CHMSTreatmentPrescriptionPopup::OnGridDblClick() {}
void CHMSTreatmentPrescriptionPopup::OnGridSelectChange(int nOldItem,
                                                         int nNewItem)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (nNewItem < 0)
        return;
    UpdateData(true);
    m_nUseQty = str2float(m_wndGrid.GetItemText(nNewItem, 0));
    m_szUseTime = m_wndGrid.GetItemText(nNewItem, 1);
    UpdateData(false);
}


int CHMSTreatmentPrescriptionPopup::OnGridDeleteItem()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    int nSel = m_wndGrid.GetCurSel();
    if (nSel < 0)
        return 0;
    m_wndGrid.DeleteItem(nSel);
    return 0;
}
long CHMSTreatmentPrescriptionPopup::OnGridLoadData()
{
        CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
        CRecord rs(&pMF->m_db);
        CString szSQL;

        szSQL.Format(
            L"SELECT * FROM hms_ipharmaorder_dosage WHERE docno=%ld and "
            L"order_id=%ld and product_id = %ld ORDER BY use_time",
            pMF->m_nDocumentNo, m_nOrderID, m_nProductId);

        m_wndGrid.BeginLoad();
        int nCount = 0;
        nCount = rs.ExecSQL(szSQL);
        CString szQty;
        while(!rs.IsEOF()){
            float nUseQty;
            rs.GetValue(L"use_qty", nUseQty);
            szQty.Format(L"%.2f", nUseQty);

            m_wndGrid.AddItems(
                szQty, 
                rs.GetValue(L"use_time"), 
                rs.GetValue(L"note"), 
                NULL);

            rs.MoveNext();
        }
        m_wndGrid.EndLoad();
        return nCount;
    return 0;
}


void CHMSTreatmentPrescriptionPopup::ClosePopup()
{
    CGuiPopup::ClosePopup();

    ((CHMSTreatmentTrackingDialog *)m_pParentOwner)->Refresh();
}
void CHMSTreatmentPrescriptionPopup::OnOutPrescriptionSelect()
{
    ShowToolTip(
        &m_wndStorage,
        _T("Tác vụ chỉ dùng cho các bệnh nhân ung thư ngoại trú lĩnh 1 đợt ra ")
        _T("về.Không sử dụng bệnh nhân lĩnh thuốc hàng ngày.Không sử dụng cho ")
        _T("việc mua đơn thuốc ra về. Xin cảm ơn !"));

    
}

void CHMSTreatmentPrescriptionPopup::OnResizeLayout()
{
    AddBottom(&m_wndDoseWarning, 5, true);
    AddBottom(&m_wndSave, 5);
    AddBottom(&m_wndClose, 5);


}
BOOL CHMSTreatmentPrescriptionPopup::PreTranslateMessage(MSG *pMsg)
{
    // TODO: Add your specialized code here and/or call the base class
    if (pMsg->hwnd == m_wndGrid.GetSafeHwnd())
    {
        m_wndGrid.PreTranslateMessage(pMsg);
    }
    return CGuiPopup::PreTranslateMessage(pMsg);
}

bool CHMSTreatmentPrescriptionPopup::CheckBeforeSaveLine()
{

    //Kiem tra tổng số lượng trong list = số lượng dự trù

    float ttlQty = 0;
    //Trường hợp không nhập line
    if (m_wndGrid.GetItemCount() == 0)
        return true;
    for (int i = 0; i < m_wndGrid.GetItemCount(); i++)
    {
        ttlQty += str2float(m_wndGrid.GetItemText(i, 0));

    }
    if (ttlQty != m_nQty)
        return false;
    return true;
}
bool CHMSTreatmentPrescriptionPopup::SaveDosageLine(long docno, long orderId,
                                                    long productId)
{

    CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CDbfMap tbl;

    tbl.SetTableName(_T("hms_ipharmaorder_dosage"));
    tbl.AddField(_T("docno"), dfLong);
    tbl.AddField(_T("order_id"), dfLong);
    tbl.AddField(_T("product_id"), dfLong);
    tbl.AddField(_T("qty"), dfDouble);
    tbl.AddField(_T("time"), dfText, 5);
    tbl.AddField(_T("note"), dfText, 254);

    tbl.SetValue(L"docno", docno);
    tbl.SetValue(L"order_id", orderId);
    tbl.SetValue(L"product_id", productId);
    szSQL.Format(L"DELETE FROM HMS_IPHARMAORDER_DOSAGE WHERE docno=%ld and "
                 L"order_id=%ld and product_id=%ld",
                 docno, orderId, productId);
    pMF->ExecSQL(szSQL);
    for (int i = 0; i < m_wndGrid.GetItemCount(); i++)
    {
        tbl.SetValue(L"qty", str2float(m_wndGrid.GetItemText(i, 0)));
        tbl.SetValue(L"time", m_wndGrid.GetItemText(i, 1));
        tbl.SetValue(L"note", m_wndGrid.GetItemText(i, 2));
        szSQL.Format(L"HMS_IPHARMAORDER_DOSAGE_CREATE(%s) ", tbl.FormatSQL());
        pMF->ExecDML(szSQL);
    }
    m_wndGrid.DeleteAllItems();
    m_nUseQty = 0;
    m_szUseTime.Empty();
    return true;
}