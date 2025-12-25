#include "HMSPatientFoodOrderEntry.h"
#include "HMSDailyFoodOrder.h"
#include "MainFrm.h"

static int _OnNameCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnNameCheckValue();
}

static int _OnName1CheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnName1CheckValue();
}

static int _OnName2CheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnName2CheckValue();
}

static void _OnMultipleDaySelectFnc(CWnd *pWnd)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnMultipleDaySelect();
}
static void _OnDaysChangeFnc(CWnd *pWnd)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnDaysChange();
}

/*static void _OnDaysSetfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnDaysSetfocus();} */
/*static void _OnDaysKillfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnDaysKillfocus();
} */
static int _OnDaysCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnDaysCheckValue();
}
static void _OnPatientNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                          int nNewItemSel)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)
        ->OnPatientNameSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnPatientNameSelendokFnc(CWnd *pWnd)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnPatientNameSelendok();
}
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnPatientNameKillfocus();
}*/
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnPatientNameKillfocus();
}*/
static long _OnPatientNameLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnPatientNameLoadData();
}
/*static void _OnPatientNameAddNewFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnPatientNameAddNew();
}*/
static void _OnOrderDateChangeFnc(CWnd *pWnd)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnOrderDateChange();
}
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnOrderDateSetfocus();} */
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnOrderDateCheckValue();
}
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)
        ->OnNameSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnNameSelendokFnc(CWnd *pWnd)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnNameAddNew();
}*/

static void _OnName2SelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                    int nNewItemSel)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)
        ->OnName2SelectChange(nOldItemSel, nNewItemSel);
}
static void _OnName2SelendokFnc(CWnd *pWnd)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnName2Selendok();
}
/*static void _OnName2SetfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnName2Killfocus();
}*/
/*static void _OnName2KillfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnName2Killfocus();
}*/
static long _OnName2LoadDataFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnName2LoadData();
}
/*static void _OnName2AddNewFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnName2AddNew();
}*/
static void _OnName1SelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                    int nNewItemSel)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)
        ->OnName1SelectChange(nOldItemSel, nNewItemSel);
}
static void _OnName1SelendokFnc(CWnd *pWnd)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnName1Selendok();
}
/*static void _OnName1SetfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnName1Killfocus();
}*/
/*static void _OnName1KillfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnName1Killfocus();
}*/
static long _OnName1LoadDataFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnName1LoadData();
}
/*static void _OnName1AddNewFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnName1AddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnQtySetfocus();} */
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnQtyCheckValue();
}
/*static void _OnQty2ChangeFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnQty2Change();
} */
/*static void _OnQty2SetfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnQty2Setfocus();} */
/*static void _OnQty2KillfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnQty2Killfocus();
} */
static int _OnQty2CheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnQty2CheckValue();
}
static void _OnBreakfastRelativeSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                                int nNewItemSel)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)
        ->OnBreakfastRelativeSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnBreakfastRelativeSelendokFnc(CWnd *pWnd)
{
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnBreakfastRelativeSelendok();
}
/*static void _OnBreakfastRelativeSetfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnBreakfastRelativeKillfocus();
}*/
/*static void _OnBreakfastRelativeKillfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnBreakfastRelativeKillfocus();
}*/
static long _OnBreakfastRelativeLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnBreakfastRelativeLoadData();
}
/*static void _OnBreakfastRelativeAddNewFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnBreakfastRelativeAddNew();
}*/
/*static void _OnQty3ChangeFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnQty3Change();
} */
/*static void _OnQty3SetfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnQty3Setfocus();} */
/*static void _OnQty3KillfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnQty3Killfocus();
} */
static int _OnQty3CheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnQty3CheckValue();
}
/*static void _OnNoteChangeFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnNoteSetfocus();} */
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
    ((CHMSPatientFoodOrderEntry *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnNoteCheckValue();
}
static void _OnSaveSelectFnc(CWnd *pWnd)
{
    CHMSPatientFoodOrderEntry *pVw = (CHMSPatientFoodOrderEntry *)pWnd;
    pVw->OnSaveSelect();
}
static void _OnCloseSelectFnc(CWnd *pWnd)
{
    CHMSPatientFoodOrderEntry *pVw = (CHMSPatientFoodOrderEntry *)pWnd;
    pVw->OnCloseSelect();
}
static int _OnAddHMSPatientFoodOrderEntryFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)->OnAddHMSPatientFoodOrderEntry();
}
static int _OnEditHMSPatientFoodOrderEntryFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)
        ->OnEditHMSPatientFoodOrderEntry();
}
static int _OnDeleteHMSPatientFoodOrderEntryFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)
        ->OnDeleteHMSPatientFoodOrderEntry();
}
static int _OnSaveHMSPatientFoodOrderEntryFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)
        ->OnSaveHMSPatientFoodOrderEntry();
}
static int _OnCancelHMSPatientFoodOrderEntryFnc(CWnd *pWnd)
{
    return ((CHMSPatientFoodOrderEntry *)pWnd)
        ->OnCancelHMSPatientFoodOrderEntry();
}
CHMSPatientFoodOrderEntry::CHMSPatientFoodOrderEntry(CWnd *pParent, int nMode,
                                                     int nType)
    : CGuiDialog(pParent)
{
    CGuiDialog::SetMode(nMode);
    m_nDlgWidth = 480;
    m_nDlgHeight = 220;
    SetDefaultValues();
    m_szPatientNameKey.Empty();
    m_bMultipleDay = FALSE;
    m_nDays = 1;
    m_nQty = 1;
    m_nQty1 = 1;
    m_nQty2 = 1;
    m_nQty3 = 1;
    m_nLevel = 0;
    m_nDocumentNo = 0;
    m_szOrderDate.Empty();
    m_pWndOrder = pParent;
    m_nType = nType;
    m_szSkipName2 =
        _T("'PK1','PK2','PK3','PK4','PK5','PK6','PK7','PK8','PK9','PK10'");
    m_bHaucan = FALSE;
    m_szFastFoodIDS_A16 = _T("'FF000132', ")
                          _T("'FF000189','FF000207','FF000220','FF000221','")
                          _T("FF000222','FF0001205', 'FF0001206', 'FF0001207'");
    m_szFastFoodIDS = _T("'FF000132','FF000220','FF000221','FF000222','")
                      _T("FF000474', 'FF000475', 'FF0001035', 'FF0001036', ")
                      _T("'FF0001205', 'FF0001206', 'FF0001207'");
}
CHMSPatientFoodOrderEntry::~CHMSPatientFoodOrderEntry() {}
void CHMSPatientFoodOrderEntry::OnCreateComponents()
{
    m_wndMultipleDay.Create(this, _T("Multiple Day"), 5, 5, 115, 30);
    m_wndDays.Create(this, 120, 5, 200, 30);
    m_wndOrderDateLabel.Create(this, _T("Date"), 305, 5, 375, 30);
    m_wndOrderDate.Create(this, 380, 5, 475, 30);
    m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 35, 115, 60);
    m_wndPatientName.Create(this, 120, 35, 375, 60);
    m_wndDocumentNo.Create(this, 380, 35, 475, 60);
    m_wndNameLabel.Create(this, _T("\x102n s\xE1ng"), 5, 65, 115, 90);
    m_wndName.Create(this, 120, 65, 375, 90);
    m_wndQtyLabel.Create(this, _T("S\x1ED1 su\x1EA5t"), 380, 65, 435, 90);
    m_wndQty.Create(this, 440, 65, 475, 90);
    m_wndName1Label.Create(this, _T("\x102n tr\x1B0\x61"), 5, 95, 115, 120);
    m_wndName1.Create(this, 120, 95, 375, 120);
    m_wndQty1Label.Create(this, _T("S\x1ED1 su\x1EA5t"), 380, 95, 435, 120);
    m_wndQty1.Create(this, 440, 95, 475, 120);
    m_wndName2Label.Create(this, _T("\x102n t\x1ED1i"), 5, 125, 115, 150);
    m_wndName2.Create(this, 120, 125, 375, 150);
    m_wndQty2Label.Create(this, _T("S\x1ED1 su\x1EA5t"), 380, 125, 435, 150);
    m_wndQty2.Create(this, 440, 125, 475, 150);
    m_wndBreakfastRelativeLabel.Create(
        this, _T("\x102n s\xE1ng ng\x1B0\x1EDDi nh\xE0"), 5, 155, 115, 180);
    m_wndBreakfastRelative.Create(this, 120, 155, 375, 180);
    m_wndQty3Label.Create(this, _T("Qty3"), 380, 155, 435, 180);
    m_wndQty3.Create(this, 440, 155, 475, 180);
    m_wndNoteLabel.Create(this, _T("Note"), 5, 185, 115, 210);
    m_wndNote.Create(this, 120, 185, 374, 210);
    m_wndSave.Create(this, _T("&Save"), 379, 185, 434, 210);
    m_wndClose.Create(this, _T("X"), 439, 185, 474, 210);

    m_wndInformation.Create(this, _T(""), 0, 0, 0, 0);
    m_wndInformation.ShowWindow(SW_HIDE);
    m_wndInformation.EnableWindow(FALSE);
    m_wndDocumentNoLabel.Create(this, _T(""), 0, 0, 0, 0);
    m_wndDocumentNoLabel.ShowWindow(SW_HIDE);
    m_wndDocumentNoLabel.EnableWindow(FALSE);
    m_wndLevel.Create(this, _T(""), 0, 0, 0, 0);
    m_wndLevel.ShowWindow(SW_HIDE);
    m_wndLevel.EnableWindow(FALSE);
}
void CHMSPatientFoodOrderEntry::OnInitializeComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndPatientName.SetCheckValue(true);
    m_wndMultipleDay.ModifyStyle(WS_TABSTOP, 0);
    m_wndDays.SetCheckValue(true);
    // m_wndName.SetCheckValue(true);
    m_wndName.LimitText(235);
    m_wndNote.SetLimitText(254);

    m_wndQty.SetLimitText(3);
    m_wndQty.SetCheckValue(true);
    m_wndQty1.SetLimitText(3);
    m_wndQty1.SetCheckValue(true);
    m_wndQty2.SetLimitText(3);
    m_wndQty2.SetCheckValue(true);

    m_wndBreakfastRelative.SetCheckValue(false);
    m_wndBreakfastRelative.LimitText(35);
    m_wndQty3.SetLimitText(16);
    m_wndQty3.SetCheckValue(true);
    m_wndNote.SetLimitText(35);
    m_wndNote.SetCheckValue(false);

    m_wndPatientName.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 85);
    m_wndPatientName.InsertColumn(1, _T("Record No"), CFMT_TEXT, 80);
    m_wndPatientName.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 180);
    m_wndPatientName.InsertColumn(3, _T("Age"), CFMT_TEXT, 50);
    m_wndPatientName.InsertColumn(4, _T("Sex"), CFMT_TEXT, 50);
    m_wndPatientName.InsertColumn(5, _T("Object"), CFMT_TEXT, 150);
    m_wndPatientName.InsertColumn(6, _T("Room"), CFMT_NUMBER, 50);
    m_wndPatientName.InsertColumn(7, _T("patientno"), CFMT_NUMBER, 0);
    m_wndPatientName.InsertColumn(8, _T("Refindex"), CFMT_NUMBER, 0);
    m_wndPatientName.InsertColumn(9, _T("objectid"), CFMT_NUMBER, 0);
    m_wndPatientName.InsertColumn(10, _T("issctg"), CFMT_TEXT, 0);

    m_wndPatientName.Format(9, 2, 10);

    m_wndName.Format(7, 2);
    m_wndName.InsertColumn(0, _T(""), CFMT_TEXT, 0);     // itemid
    m_wndName.InsertColumn(1, _T("ID"), CFMT_TEXT, 100); // refidx
    m_wndName.InsertColumn(2, _T("Description"), CFMT_TEXT, 450);
    m_wndName.InsertColumn(3, _T("Unit"), CFMT_TEXT | CFMT_CENTER, 80);
    m_wndName.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 70);
    m_wndName.InsertColumn(5, _T("GroupID"), CFMT_TEXT, 0);
    m_wndName.InsertColumn(6, _T("Level"), CFMT_TEXT, 0);
    m_wndName.SetSearchEx(TRUE, 1);
    m_wndName.SetSearchStyle(SS_LIKE);

    m_wndName1.Format(6, 2);
    m_wndName1.InsertColumn(0, _T(""), CFMT_TEXT, 0);     // itemid
    m_wndName1.InsertColumn(1, _T("ID"), CFMT_TEXT, 100); // refidx
    m_wndName1.InsertColumn(2, _T("Description"), CFMT_TEXT, 450);
    m_wndName1.InsertColumn(3, _T("Unit"), CFMT_TEXT | CFMT_CENTER, 80);
    m_wndName1.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 70);
    m_wndName1.InsertColumn(5, _T("GroupID"), CFMT_TEXT, 0);
    m_wndName1.InsertColumn(6, _T("Level"), CFMT_TEXT, 0);
    m_wndName1.SetSearchStyle(SS_LIKE);
    m_wndName1.SetSearchEx(TRUE, 1);

    m_wndName2.Format(6, 2);
    m_wndName2.InsertColumn(0, _T(""), CFMT_TEXT, 0);     // itemid
    m_wndName2.InsertColumn(1, _T("ID"), CFMT_TEXT, 100); // refidx
    m_wndName2.InsertColumn(2, _T("Description"), CFMT_TEXT, 450);
    m_wndName2.InsertColumn(3, _T("Unit"), CFMT_TEXT | CFMT_CENTER, 80);
    m_wndName2.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 70);
    m_wndName2.InsertColumn(5, _T("GroupID"), CFMT_TEXT, 0);
    m_wndName2.InsertColumn(6, _T("Level"), CFMT_TEXT, 0);
    m_wndName2.SetSearchStyle(SS_LIKE);
    m_wndName2.SetSearchEx(TRUE, 1);

    m_wndBreakfastRelative.Format(6, 2);
    m_wndBreakfastRelative.InsertColumn(0, _T(""), CFMT_TEXT, 0);     // itemid
    m_wndBreakfastRelative.InsertColumn(1, _T("ID"), CFMT_TEXT, 100); // refidx
    m_wndBreakfastRelative.InsertColumn(2, _T("Description"), CFMT_TEXT, 450);
    m_wndBreakfastRelative.InsertColumn(3, _T("Unit"), CFMT_TEXT | CFMT_CENTER,
                                        80);
    m_wndBreakfastRelative.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 70);
    m_wndBreakfastRelative.InsertColumn(5, _T("GroupID"), CFMT_TEXT, 0);
    m_wndBreakfastRelative.InsertColumn(6, _T("Level"), CFMT_TEXT, 0);
    m_wndBreakfastRelative.SetSearchEx(TRUE, 1);
    m_wndBreakfastRelative.SetSearchStyle(SS_LIKE);

    m_hms_feefodorderTbl.SetTableName(_T("HMS_FEEFOOD"));

    m_hms_feefodorderTbl.AddField(_T("hfo_org_id"), dfText, 15);
    m_hms_feefodorderTbl.AddField(_T("hfo_user_id"), dfText, 15);
    m_hms_feefodorderTbl.AddField(_T("hfo_patientno"), dfLong);
    m_hms_feefodorderTbl.AddField(_T("hfo_docno"), dfLong);
    m_hms_feefodorderTbl.AddField(_T("hfo_deptid"), dfText, 7);
    m_hms_feefodorderTbl.AddField(_T("hfo_refidx"), dfInteger);
    m_hms_feefodorderTbl.AddField(_T("hfo_roomid"), dfInteger);
    m_hms_feefodorderTbl.AddField(_T("hfo_bedid"), dfInteger);
    m_hms_feefodorderTbl.AddField(_T("hfo_ordertype"), dfText, 1);
    m_hms_feefodorderTbl.AddField(_T("hfo_orderdate"), dfDateTime);
    m_hms_feefodorderTbl.AddField(_T("hfo_doctor"), dfText, 15);
    m_hms_feefodorderTbl.AddField(_T("hfo_reforder_id"), dfLong);
    m_hms_feefodorderTbl.AddField(_T("hfo_advice"), dfText, 128);
    m_hms_feefodorderTbl.AddField(_T("hfo_payment"), dfText, 1);
    m_hms_feefodorderTbl.AddField(_T("hfo_isvip"), dfText, 1);

    m_hms_feefodorderlineTbl.SetTableName(_T("HMS_FEEFOODLINE"));
    m_hms_feefodorderlineTbl.AddField(_T("hfol_orderid"), dfLong);
    m_hms_feefodorderlineTbl.AddField(_T("hfol_groupid"), dfText);
    m_hms_feefodorderlineTbl.AddField(_T("hfol_itemid"), dfText);
    m_hms_feefodorderlineTbl.AddField(_T("hfol_qtyorder"), dfFloat);
    m_hms_feefodorderlineTbl.AddField(_T("hfol_type"), dfText);
    m_hms_feefodorderlineTbl.AddField(_T("hfol_level"), dfInteger);

    m_szFeeIDS.Format(_T("'FF000132', 'FF000189', ")
                      _T("'FF000207','FF000132','FF000220','FF000221','")
                      _T("FF0001205', 'FF0001206', 'FF0001207'"));
}
void CHMSPatientFoodOrderEntry::OnSetWindowEvents()
{

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_wndMultipleDay.SetEvent(WE_CLICK, _OnMultipleDaySelectFnc);
    m_wndDays.SetEvent(WE_CHANGE, _OnDaysChangeFnc);
    // m_wndDays.SetEvent(WE_SETFOCUS, _OnDaysSetfocusFnc);
    // m_wndDays.SetEvent(WE_KILLFOCUS, _OnDaysKillfocusFnc);
    m_wndDays.SetEvent(WE_CHECKVALUE, _OnDaysCheckValueFnc);
    m_wndPatientName.SetEvent(WE_SELENDOK, _OnPatientNameSelendokFnc);
    // m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
    // m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
    m_wndPatientName.SetEvent(WE_SELCHANGE, _OnPatientNameSelectChangeFnc);
    m_wndPatientName.SetEvent(WE_LOADDATA, _OnPatientNameLoadDataFnc);
    // m_wndPatientName.SetEvent(WE_ADDNEW, _OnPatientNameAddNewFnc);
    m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
    // m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
    // m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
    m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);

    m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
    // m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
    // m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
    m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
    m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
    // m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);

    m_wndName1.SetEvent(WE_SELENDOK, _OnName1SelendokFnc);
    // m_wndName1.SetEvent(WE_SETFOCUS, _OnName1SetfocusFnc);
    // m_wndName1.SetEvent(WE_KILLFOCUS, _OnName1KillfocusFnc);
    m_wndName1.SetEvent(WE_SELCHANGE, _OnName1SelectChangeFnc);
    m_wndName1.SetEvent(WE_LOADDATA, _OnName1LoadDataFnc);
    // m_wndName1.SetEvent(WE_ADDNEW, _OnName1AddNewFnc);

    m_wndName2.SetEvent(WE_SELENDOK, _OnName2SelendokFnc);
    // m_wndName2.SetEvent(WE_SETFOCUS, _OnName2SetfocusFnc);
    // m_wndName2.SetEvent(WE_KILLFOCUS, _OnName2KillfocusFnc);
    m_wndName2.SetEvent(WE_SELCHANGE, _OnName2SelectChangeFnc);
    m_wndName2.SetEvent(WE_LOADDATA, _OnName2LoadDataFnc);
    // m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);

    // m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
    // m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
    // m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
    m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
    // m_wndQty2.SetEvent(WE_CHANGE, _OnQty2ChangeFnc);
    // m_wndQty2.SetEvent(WE_SETFOCUS, _OnQty2SetfocusFnc);
    // m_wndQty2.SetEvent(WE_KILLFOCUS, _OnQty2KillfocusFnc);
    m_wndQty2.SetEvent(WE_CHECKVALUE, _OnQty2CheckValueFnc);

    m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
    m_wndName1.SetEvent(WE_CHECKVALUE, _OnName1CheckValueFnc);
    m_wndName2.SetEvent(WE_CHECKVALUE, _OnName2CheckValueFnc);

    m_wndBreakfastRelative.SetEvent(WE_SELENDOK,
                                    _OnBreakfastRelativeSelendokFnc);
    // m_wndBreakfastRelative.SetEvent(WE_SETFOCUS,
    // _OnBreakfastRelativeSetfocusFnc);
    // m_wndBreakfastRelative.SetEvent(WE_KILLFOCUS,
    // _OnBreakfastRelativeKillfocusFnc);
    m_wndBreakfastRelative.SetEvent(WE_SELCHANGE,
                                    _OnBreakfastRelativeSelectChangeFnc);
    m_wndBreakfastRelative.SetEvent(WE_LOADDATA,
                                    _OnBreakfastRelativeLoadDataFnc);
    // m_wndBreakfastRelative.SetEvent(WE_ADDNEW,
    // _OnBreakfastRelativeAddNewFnc); m_wndQty3.SetEvent(WE_CHANGE,
    // _OnQty3ChangeFnc); m_wndQty3.SetEvent(WE_SETFOCUS, _OnQty3SetfocusFnc);
    // m_wndQty3.SetEvent(WE_KILLFOCUS, _OnQty3KillfocusFnc);
    m_wndQty3.SetEvent(WE_CHECKVALUE, _OnQty3CheckValueFnc);
    // m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
    // m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
    // m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
    m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);

    m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
    m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

    SetWindowFont(&m_wndLevel, GetFaceName(), GetFaceSize() + 2, TRUE);
    m_wndLevel.SetTextColor(RGB(0, 0, 255));

    int nMode = GetMode();
    if (nMode == VM_EDIT || nMode == VM_VIEW)
        GetDataToScreen();
    SetMode(nMode);
    if (m_nType != 0)
    {
        m_wndMultipleDay.ShowWindow(SW_HIDE);
        m_wndDays.ShowWindow(SW_HIDE);
    }
    CRect rect;
    ((CHMSDailyFoodOrder *)m_pWndOrder)->m_wndRationList.GetWindowRect(&rect);
    MoveWindow(rect.left, rect.bottom - GetHeight() - 30, GetWidth(),
               GetHeight() + 30);
}
void CHMSPatientFoodOrderEntry::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_Check(pDX, m_wndMultipleDay.GetDlgCtrlID(), m_bMultipleDay);
    DDX_Text(pDX, m_wndDays.GetDlgCtrlID(), m_nDays);
    DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
    DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
    DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);

    DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
    DDX_TextEx(pDX, m_wndName1.GetDlgCtrlID(), m_szName1Key);
    DDX_TextEx(pDX, m_wndName2.GetDlgCtrlID(), m_szName2Key);
    // DDX_Check(pDX, m_wndLevel.GetDlgCtrlID(), m_nLevel);
    DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
    DDX_Text(pDX, m_wndQty1.GetDlgCtrlID(), m_nQty1);
    DDX_Text(pDX, m_wndQty2.GetDlgCtrlID(), m_nQty2);
    DDX_TextEx(pDX, m_wndBreakfastRelative.GetDlgCtrlID(),
               m_szBreakfastRelativeKey);
    DDX_Text(pDX, m_wndQty3.GetDlgCtrlID(), m_nQty3);
    DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
}
void CHMSPatientFoodOrderEntry::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    szSQL.Format(_T("SELECT * FROM "));
    rs.ExecSQL(szSQL);
    rs.GetValue(_T("hfo_orderdate"), m_szOrderDate);
    rs.GetValue(_T("hfo_storage_id"), m_szPatientNameKey);
    rs.GetValue(_T("hfo_usage"), m_szNote);
}
void CHMSPatientFoodOrderEntry::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_hms_feefodorderTbl.SetValue(_T("hfo_org_id"), pMF->GetModuleID());
    m_hms_feefodorderTbl.SetValue(_T("hfo_user_id"), pMF->GetCurrentUser());
    m_hms_feefodorderTbl.SetValue(_T("hfo_patientno"), m_nPatientNo);
    m_hms_feefodorderTbl.SetValue(_T("hfo_docno"),
                                  str2long(m_szPatientNameKey));
    m_hms_feefodorderTbl.SetValue(_T("hfo_deptid"), pMF->m_szDept);
    m_hms_feefodorderTbl.SetValue(_T("hfo_roomid"), m_nRoomID);
    m_hms_feefodorderTbl.SetValue(_T("hfo_bedid"), m_nBedID);
    m_hms_feefodorderTbl.SetValue(_T("hfo_refidx"), m_nRefIndex);
    m_hms_feefodorderTbl.SetValue(_T("hfo_ordertype"), _T("D"));
    m_hms_feefodorderTbl.SetValue(_T("hfo_orderdate"), m_szOrderDate);
    m_hms_feefodorderTbl.SetValue(_T("hfo_reforder_id"), m_nOID);
    m_hms_feefodorderTbl.SetValue(_T("hfo_doctor"), m_szDoctor);
    m_hms_feefodorderTbl.SetValue(_T("hfo_advice"), m_szNote);
    // m_hms_feefodorderTbl.SetValue(_T("hfo_payment"),
    // m_bHaucan?_T("Y"):_T("N"));
    m_hms_feefodorderTbl.SetValue(_T("hfo_payment"), _T("N"));
    m_hms_feefodorderTbl.SetValue(_T("hfo_isvip"),
                                  m_bIsVipA ? _T("A") : _T(""));

    m_hms_feefodorderlineTbl.SetValue(_T("hfol_orderid"), 0);
    m_hms_feefodorderlineTbl.SetValue(_T("hfol_groupid"), _T("FF000"));
    m_hms_feefodorderlineTbl.SetValue(_T("hfol_itemid"), _T(""));
    m_hms_feefodorderlineTbl.SetValue(_T("hfol_qtyorder"), m_nQty);
    m_hms_feefodorderlineTbl.SetValue(_T("hfol_type"), _T("S"));
    m_hms_feefodorderlineTbl.SetValue(_T("hfol_level"), m_nLevel);
}
void CHMSPatientFoodOrderEntry::SetDefaultValues()
{

    m_szNameKey.Empty();
    m_szName1Key.Empty();
    m_szName2Key.Empty();
    m_szNote.Empty();
    m_nQty = 1;
    m_nQty1 = 1;
    m_nQty2 = 1;
    m_szBreakfastRelativeKey.Empty();
    m_nQty3 = 1;
    m_szNote.Empty();
}
int CHMSPatientFoodOrderEntry::SetMode(int nMode)
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
        EnableButtons(TRUE, 0, 1, -1);
        SetDefaultValues();
        if (m_szPatientNameKey.IsEmpty())
            m_wndPatientName.SetFocus();

        // m_szOrderDate = pMF->GetSysDate();
        m_wndDays.EnableWindow(false);
        // m_wndOrderDate.EnableWindow(false);
        m_bAddOrder = true;
        for (int i = 0; i < 5; i++)
            m_nID[i] = 0;
        m_nDays = 1;
        m_bMultipleDay = FALSE;
        break;
    case VM_ADDCHILD:
        // SetDefaultValues();
        m_wndPatientName.SetFocus();
        m_szPatientNameKey.Empty();
        break;
    case VM_EDIT:
        EnableControls(TRUE);
        EnableButtons(TRUE, 0, 1, -1);
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

    m_wndDocumentNo.EnableWindow(false);
    // m_wndOrderDate.EnableWindow(FALSE);

    if (!pMF->CheckPermission(_T("16.01")))
    {
        // m_wndLevel.ShowWindow(false);
        m_wndQty.EnableWindow(false);
        m_wndQty1.EnableWindow(false);
        m_wndQty2.EnableWindow(false);
    }
    if (!m_bHaucan)
    {
        m_wndBreakfastRelative.EnableWindow(false);
        m_wndQty3.EnableWindow(false);
    }

    m_wndBreakfastRelative.EnableWindow(false);
    UpdateData(FALSE);
    return nOldMode;
}
void CHMSPatientFoodOrderEntry::OnMultipleDaySelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(true);
    if (m_bMultipleDay)
    {
        m_wndDays.EnableWindow(true);
        m_wndOrderDate.EnableWindow(true);
        m_nDays = 3;
    }
    else
    {
        m_nDays = 1;
        m_wndDays.EnableWindow(false);
        // m_wndOrderDate.EnableWindow(false);
    }
    if (!m_bAddOrder)
    {
        for (int i = 0; i < 5; i++)
            m_nID[i] = 0;
        m_bAddOrder = true;
    }
    UpdateData(false);
}
void CHMSPatientFoodOrderEntry::OnDaysChange() { m_bAddOrder = true; }
/*void CHMSPatientFoodOrderEntry::OnDaysSetfocus(){

} */
/*void CHMSPatientFoodOrderEntry::OnDaysKillfocus(){

} */
int CHMSPatientFoodOrderEntry::OnDaysCheckValue()
{
    UpdateData(true);
    if (m_nDays < 0 || m_nDays > 9)
        return -1;
    return 0;
}
void CHMSPatientFoodOrderEntry::OnPatientNameSelectChange(int nOldItemSel,
                                                          int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSPatientFoodOrderEntry::OnPatientNameSelendok()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    UpdateData(TRUE);
    CString szSQL, szissctg;
    // ShowMessageBox(_T("Số tiền tạm gửi của bệnh nhân đã hết, vui lòng nộp
    // thêm tiền để tiếp tục sử dụng dịch vụ!"));
    CRecord rs(&pMF->m_db);
    m_bIsVipA = false;
    // SetDefaultValues();
    m_wndOrderDate.SetCheckValue(true);
    //	m_szOrderDate = m_szCurrentOrderDate.Left(10);
    CGuiDialog::SetMode(VM_ADD);

    if (m_nDays <= 1)
    {
        m_nDays = 1;
        // m_wndOrderDate.EnableWindow(false);
    }
    m_bAddOrder = true;

    if (m_nDocumentNo != str2long(m_szPatientNameKey))
    {

        m_nDocumentNo = str2long(m_wndPatientName.GetCurrent(0));
        m_nPatientNo = str2long(m_wndPatientName.GetCurrent(7));
        m_szObjectID = m_wndPatientName.GetCurrent(9);
        szissctg = m_wndPatientName.GetCurrent(10);

        szSQL.Format(
            _T("SELECT ")
            _T("htr_patientno as patientno, ")
            _T("htr_docno as docno, ")
            _T("htr_deptid as deptid, ")
            _T("htr_idx as refidx, ")
            _T("htr_doctor as doctor, ")
            _T("hb_roomid as roomid, ")
            _T("hb_bedid as bedid ")
            _T("FROM hms_treatment_record ")
            _T("LEFT JOIN hms_bed on(hb_docno=htr_docno and ")
            _T("hb_deptid=htr_deptid and hb_refidx=htr_idx and hb_status='O') ")
            _T("WHERE htr_docno=%ld AND htr_status='I' AND htr_deptid='%s' "),
            m_nDocumentNo, pMF->m_szDept);
        _fmsg(_T("%s"), szSQL);
        rs.ExecSQL(szSQL);
        m_nRefIndex = 0;
        m_nRoomID = 0;
        m_nBedID = 0;
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("refidx"), m_nRefIndex);
            rs.GetValue(_T("doctor"), m_szDoctor);
            rs.GetValue(_T("roomid"), m_nRoomID);
            rs.GetValue(_T("bedid"), m_nBedID);
        }

        szSQL.Format(_T("SELECT hfo_orderid as orderid ")
                     _T("FROM hms_feefood ")
                     _T("WHERE hfo_docno=%ld and hfo_reforder_id=%ld and ")
                     _T("hfo_orderstatus='O' and hfo_ordertype='D'"),
                     m_nDocumentNo, m_nOID);
        rs.ExecSQL(szSQL);
        if (!rs.IsEOF())
        {
            ((CHMSDailyFoodOrder *)m_pWndOrder)->OnRationListLoadData();
        }
        else
        {

            ((CHMSDailyFoodOrder *)m_pWndOrder)
                ->m_wndRationList.DeleteAllItems();
        }
    }
    m_wndName.EnableWindow(true);
    m_wndName1.EnableWindow(true);
    m_wndName2.EnableWindow(true);
    m_wndBreakfastRelative.EnableWindow(false);
    if (m_nDocumentNo > 0 && m_bHaucan)
    {
        m_wndBreakfastRelative.EnableWindow(true);
        // kiem tra co phai la Vip  thi hien 3 o bao an
        szSQL.Format(
            _T(" select count(*) from hms_fee_extra ")
            _T("	left join hms_fee_extraline ON (hfe_fee_extra_id = ")
            _T("hfel_fee_extra_id) ")
            _T("	LEFT JOIN hms_fee_list ON (hfl_feeid= hfel_itemid) ")
            _T("	where hfe_status='I' and hfe_docno= %ld  and ")
            _T("hfe_deptid='%s'   ")
            _T("		and  nvl(hfl_subitem,'N') = 'VIP' and ")
            _T("nvl(hfl_subgroup,'N') <> 'DVTC' "),
            m_nDocumentNo, pMF->m_szDept);

        rs.ExecSQL(szSQL);
        _tprintf(_T("%s"), szSQL);
        if (rs.GetIntValue() <= 0 && szissctg == _T("N"))
        {
            m_wndName.EnableWindow(false);
            m_wndName1.EnableWindow(false);
            m_wndName2.EnableWindow(false);
            m_szNameKey.Empty();
            m_szName1Key.Empty();
            m_szName2Key.Empty();
        }
        else
        {
            szSQL.Format(
                _T(" select count(*) from hms_fee_extra ")
                _T("	left join hms_fee_extraline ON (hfe_fee_extra_id = ")
                _T("hfel_fee_extra_id) ")
                _T("	LEFT JOIN hms_fee_list ON (hfl_feeid= hfel_itemid) ")
                _T("	where hfe_status='I' and hfe_docno= %ld  and ")
                _T("hfe_deptid='%s'   ")
                _T("		and  nvl(hfl_subitem,'N') = 'VIP'  and ")
                _T("hfl_index2='A' and nvl(hfl_subgroup,'N') <> 'DVTC' "),
                m_nDocumentNo, pMF->m_szDept);
            rs.ExecSQL(szSQL);
            if (rs.GetIntValue() > 0)
                m_bIsVipA = true;
        }
        // Bỏ đi theo ticket 2986, Tuấn báo bỏ = AND hfl_servprice >0

        szSQL.Format(
            _T(" select count(*) from VIMES.hms_fee_extra ")
            _T("	left join hms_fee_extraline ON (hfe_fee_extra_id = ")
            _T("hfel_fee_extra_id) ")
            _T("	LEFT JOIN hms_fee_list ON (hfl_feeid= hfel_itemid) ")
            _T("	where hfe_status='I' and hfe_docno= %ld  and ")
            _T("hfe_deptid='%s'   ")
            _T("		and  hfl_subitem = 'NN' "),
            m_nDocumentNo, pMF->m_szDept);

        rs.ExecSQL(szSQL);
        _tprintf(_T("%s"), szSQL);
        if (rs.GetIntValue() <= 0 && m_bIsVipA == false)
        {
            m_wndBreakfastRelative.EnableWindow(false);
            m_szBreakfastRelativeKey.Empty();
        }
    }

    // dung yeu cau tat ca ko ke bao sang nguoi nha o lai o day nua
    // m_wndBreakfastRelative.EnableWindow(false);
    UpdateData(FALSE);
}
/*void CHMSPatientFoodOrderEntry::OnPatientNameSetfocus(){

}*/
/*void CHMSPatientFoodOrderEntry::OnPatientNameKillfocus(){

}*/
long CHMSPatientFoodOrderEntry::OnPatientNameLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db), rsl(&pMF->m_db);
    CString szSQL, szWhere;
    CStringArray arr_Docs;
    bool bFound = false;
    if (m_wndPatientName.IsSearchKey() && str2long(m_szPatientNameKey) > 0)
    {
        szWhere.Format(_T(" AND hd_docno=%d "), str2long(m_szPatientNameKey));
    };
    m_wndPatientName.DeleteAllItems();
    int nCount = 0;

    /*
        if(m_bHaucan)
        {
            //szWhere.AppendFormat(_T(" and hcr_isvip ='Y' "));
            szWhere.AppendFormat(_T(" AND  ( select count(*) from
       VIMES.hms_fee_extra ") \
                                _T("	left join hms_fee_extraline ON
       (hfe_fee_extra_id = hfel_fee_extra_id) ") \
                                _T("	LEFT JOIN hms_fee_list ON (hfl_feeid=
       hfel_itemid) ") \
                                _T("	where hfe_status='I' and hfe_docno=
       htr_docno  and hfe_deptid='%s'   ") \ _T("		and nvl(hfl_subitem,'N')
       in ('VIP','NN')  and hfel_quantity >0 and trunc_date(hfe_enddate)  >=
       trunc_date(sysdate) ) > 0 "), pMF->m_szDept);

        }
        else
        {
            szWhere.AppendFormat(_T(" AND  ( select count(*) from
       VIMES.hms_fee_extra ") \
                                _T("	left join hms_fee_extraline ON
       (hfe_fee_extra_id = hfel_fee_extra_id) ") \
                                _T("	LEFT JOIN hms_fee_list ON (hfl_feeid=
       hfel_itemid) ") \
                                _T("	where hfe_status='I' and hfe_docno=
       htr_docno  and hfe_deptid='%s'   ") \ _T("		and nvl(hfl_subitem,'N')
       ='VIP' and hfel_quantity >0  and nvl(hfl_subgroup,'N') <> 'DVTC' and
       trunc_date(hfe_enddate)  >= trunc_date(sysdate) ) =0 "), pMF->m_szDept);
        }
        //else
        //	szWhere.AppendFormat(_T(" and nvl(hcr_isvip,'N')<>'Y' "));
    */
    if (pMF->GetCurrentDepartmentID() == _T("A6-C"))
    {
        szSQL.Format(_T(" SELECT tbl1.*,")
                     _T("   COALESCE(hb_roomid, 0) AS roomid,")
                     _T("   COALESCE(hb_bedid, 0)  AS bedid")
                     _T(" FROM")
                     _T("   (SELECT htr_deptid as dept_id,")
                     _T("     htr_idx,")
                     _T("     hd_docno     AS docno,")
                     _T("     hp_patientno AS patientno,")
                     _T("     htr_recordno AS recordno,")
                     _T("     trim(hp_surname")
                     _T("     ||' '")
                     _T("     ||hp_midname")
                     _T("     ||' '")
                     _T("     ||hp_firstname)                                 ")
                     _T("    AS pname,")
                     _T("     hms_getage( trunc_date(hd_admitdate), ")
                     _T("hp_birthdate) AS age,")
                     _T("     HMS_GETSEX(hp_sex)                              ")
                     _T("    AS sex,")
                     _T("     hd_object                                       ")
                     _T("    AS objectid,")
                     _T("     HMS_GetObjectName(hd_object)                    ")
                     _T("    AS objectname")
                     _T("   FROM hms_patient,")
                     _T("     hms_doc,")
                     _T("     hms_clinical_record,")
                     _T("     hms_treatment_record")
                     _T("   WHERE hd_patientno     = hp_patientno")
                     _T("   AND hcr_docno          = hd_docno")
                     _T("   AND htr_docno          = hcr_docno")
                     _T("   AND htr_status         ='I'")
                     _T("   AND (htr_deptid        ='%s' ")
                     _T("   OR ( htr_combinedtreat ='Y'")
                     _T("   AND htr_ctdeptid       ='A16') )")
                     _T(" %s ")
                     _T("   ) tbl1")
                     _T(" LEFT JOIN hms_bed")
                     _T(" ON(hb_docno   = docno")
                     _T(" AND hb_deptid = dept_id")
                     _T(" AND hb_refidx = htr_idx and hb_status='O' )")
                     _T(" ORDER BY pname"),
                     pMF->m_szDept, szWhere);
        _fmsg(_T("%s"), szSQL);
        _tprintf(_T("%s"), szSQL);
    }
    else if (pMF->GetCurrentDepartmentID() == _T("A16"))
    {
        szSQL.Format(
            _T(" SELECT tbl1.*,")
            _T("   COALESCE(hb_roomid, 0) AS roomid,")
            _T("   COALESCE(hb_bedid, 0)  AS bedid")
            _T(" FROM")
            _T("   (SELECT htr_deptid as dept_id,")
            _T("     htr_idx,")
            _T("     hd_docno     AS docno,")
            _T("     hp_patientno AS patientno,")
            _T("     htr_recordno AS recordno,")
            _T("     trim(hp_surname")
            _T("     ||' '")
            _T("     ||hp_midname")
            _T("     ||' '")
            _T("     ||hp_firstname)                                     AS ")
            _T("pname,")
            _T("     hms_getage( trunc_date(hd_admitdate), hp_birthdate) AS ")
            _T("age,")
            _T("     HMS_GETSEX(hp_sex)                                  AS ")
            _T("sex,")
            _T("     hd_object                                           AS ")
            _T("objectid,")
            _T("     HMS_GetObjectName(hd_object)                        AS ")
            _T("objectname")
            _T("  FROM hms_patient")
            _T("   LEFT JOIN hms_doc ON (hd_patientno = hp_patientno)")
            _T("   LEFT JOIN hms_clinical_record ON (hd_docno = hcr_docno)")
            _T("   LEFT JOIN hms_treatment_record ON ( hcr_docno= htr_docno)")
            _T("   LEFT JOIN HMS_TREAT_MOVEMENT ON (htr_docno=htm_docno AND ")
            _T("htr_idx=htm_refidx  AND htm_status ='O')")
            _T("   WHERE htr_status         ='I' AND NVL(htr_outpatient, 'N') ")
            _T("<> 'Y' ")
            _T(" AND (htr_deptid               ='%s'")
            _T(" OR ( htr_combinedtreat        ='Y'")
            _T(" AND htr_ctdeptid              ='%s')")
            _T(" OR (HTM_PERFORM_DEPTID='%s'")
            _T(" AND htm_status        ='O'))")
            _T(" %s ")
            _T("   ) tbl1")
            _T(" LEFT JOIN hms_bed")
            _T(" ON(hb_docno   = docno")
            _T(" AND hb_deptid = dept_id")
            _T(" AND hb_refidx = htr_idx and hb_status='O' )")
            _T(" ORDER BY pname"),
            pMF->m_szDept, pMF->m_szDept, pMF->m_szDept, szWhere);
        _fmsg(_T("%s"), szSQL);
        _tprintf(_T("%s"), szSQL);
    }
    else
    {
        szSQL.Format(_T(" SELECT tbl1.*,")
                     _T("   COALESCE(hb_roomid, 0) AS roomid,")
                     _T("   COALESCE(hb_bedid, 0)  AS bedid")
                     _T(" FROM")
                     _T("   (SELECT htr_deptid as dept_id,")
                     _T("     htr_idx,")
                     _T("     hd_docno     AS docno,")
                     _T("     hp_patientno AS patientno,")
                     _T("     htr_recordno AS recordno,")
                     _T("     ISSINHCONTRONGOI(htr_docno) as issctg,")
                     _T("     trim(hp_surname")
                     _T("     ||' '")
                     _T("     ||hp_midname")
                     _T("     ||' '")
                     _T("     ||hp_firstname)                                 ")
                     _T("    AS pname,")
                     _T("     hms_getage( trunc_date(hd_admitdate), ")
                     _T("hp_birthdate) AS age,")
                     _T("     HMS_GETSEX(hp_sex)                              ")
                     _T("    AS sex,")
                     _T("     hd_object                                       ")
                     _T("    AS objectid,")
                     _T("     HMS_GetObjectName(hd_object)                    ")
                     _T("    AS objectname")
                     _T("   FROM hms_patient,")
                     _T("     hms_doc,")
                     _T("     hms_clinical_record,")
                     _T("     hms_treatment_record")
                     _T("   WHERE hd_patientno     = hp_patientno")
                     _T("   AND hcr_docno          = hd_docno")
                     _T("   AND htr_docno          = hcr_docno")
                     _T("   AND htr_status         ='I' AND ")
                     _T("NVL(htr_outpatient, 'N') <> 'Y' ")
                     _T("   AND (htr_deptid        ='%s' ")
                     _T("   OR ( htr_combinedtreat ='Y'")
                     _T("   AND htr_ctdeptid       ='A16') )")
                     _T(" %s ")
                     _T("   ) tbl1")
                     _T(" LEFT JOIN hms_bed")
                     _T(" ON(hb_docno   = docno")
                     _T(" AND hb_deptid = dept_id")
                     _T(" AND hb_refidx = htr_idx and hb_status='O' )")
                     _T(" ORDER BY pname"),
                     pMF->m_szDept, szWhere);
        _fmsg(_T("%s"), szSQL);
        _tprintf(_T("%s"), szSQL);
    }
    nCount = rs.ExecSQL(szSQL);
    if (m_bHaucan)
    {
        /*szSQL.Format(_T("SELECT    distinct hfe_docno as doc_no ") \
        _T(" FROM      VIMES.hms_fee_extra ") \
        _T(" left join hms_fee_extraline ON ( hfe_fee_extra_id =
        hfel_fee_extra_id )") \
        _T(" LEFT JOIN hms_fee_list ON ( hfl_feeid = hfel_itemid )") \
        _T(" WHERE     hfe_status = 'I' AND hfe_deptid = '%s' and
        nvl(hfl_subgroup,'N') <> 'DVTC'  AND") \
        _T("                    Nvl(hfl_subitem, 'N') IN ( 'VIP', 'NN' ) AND
        hfel_quantity > 0 and hfel_unitprice >0  AND") \ _T("
        Trunc_date(hfe_enddate) >= Trunc_date(SYSDATE) "), pMF->m_szDept);*/

        szSQL.Format(_T(" SELECT DISTINCT hfe_docno AS doc_no")
                     _T(" FROM hms_fee_extra")
                     _T(" LEFT JOIN hms_fee_extraline")
                     _T(" ON ( hfe_fee_extra_id = hfel_fee_extra_id )")
                     _T(" LEFT JOIN hms_fee_list")
                     _T(" ON ( hfl_feeid               = hfel_itemid )")
                     _T(" WHERE hfe_status             = 'I'")
                     _T(" AND hfe_deptid               = '%s'")
                     _T(" AND NVL(hfl_subgroup,'N')   <> 'DVTC'")
                     _T(" AND NVL(hfl_subitem, 'N')   IN ( 'VIP', 'NN' )")
                     _T(" AND hfel_quantity            > 0")
                     _T(" AND hfel_unitprice           >0")
                     _T(" AND Trunc_date(hfe_enddate) >= Trunc_date(SYSDATE)")
                     _T(" UNION ALL")
                     _T(" SELECT distinct(htr_docno) as docno")
                     _T(" FROM hms_treatment_record")
                     _T(" WHERE htr_status = 'I'")
                     _T(" and htr_deptid ='%s'")
                     _T(" and ISSINHCONTRONGOI(htr_docno)='Y'"),
                     pMF->m_szDept, pMF->m_szDept);
    }
    else
    {
        szSQL.Format(
            _T("SELECT    distinct hfe_docno as doc_no ")
            _T(" FROM      VIMES.hms_fee_extra")
            _T(" left join hms_fee_extraline ON ( hfe_fee_extra_id = ")
            _T("hfel_fee_extra_id )")
            _T(" LEFT JOIN hms_fee_list ON ( hfl_feeid = hfel_itemid )")
            _T(" WHERE     hfe_status = 'I' AND hfe_deptid = '%s' AND")
            _T("          Nvl(hfl_subitem, 'N') = 'VIP'")
            _T("          AND hfel_quantity > 0 AND Nvl(hfl_subgroup, 'N') <> ")
            _T("'DVTC'  ") // S?a do?n này d? ph?c v? tru?ng h?p n?u báo an h?u
                           // c?n r?i thì v?n load b?nh nhân dó lên d? báo an
                           // chính (covid-19) _T("         AND
                           //Trunc_date(hfe_enddate) >= Trunc_date(SYSDATE)
                           //"),pMF->m_szDept);

            _T("         AND Trunc_date(hfe_enddate) >= Trunc_date(SYSDATE + ")
            _T("60) "),
            pMF->m_szDept);
    }
    _tprintf(_T("\nszSQL: %s\n"), szSQL);
    rsl.ExecSQL(szSQL);
    while (!rsl.IsEOF())
    {
        arr_Docs.Add(rsl.GetValue(_T("doc_no")));
        rsl.MoveNext();
    }
    while (!rs.IsEOF())
    {
        bFound = false;
        for (int i = 0; i < arr_Docs.GetCount(); i++)
        {
            if (arr_Docs[i] == rs.GetValue(_T("docno")))
            {
                bFound = true;
                break;
            }
        }
        if (m_bHaucan)
        {
            if (!bFound)
            {
                rs.MoveNext();
                continue;
            }
        }
        else
        {
            if (bFound)
            {
                rs.MoveNext();
                continue;
            }
        }
        m_wndPatientName.AddItems(
            rs.GetValue(_T("docno")), rs.GetValue(_T("recordno")),
            rs.GetValue(_T("pname")), rs.GetValue(_T("age")),
            rs.GetValue(_T("sex")), rs.GetValue(_T("objectname")),
            rs.GetValue(_T("roomid")), rs.GetValue(_T("patientno")),
            rs.GetValue(_T("refidx")), rs.GetValue(_T("objectid")),
            rs.GetValue(_T("issctg")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSPatientFoodOrderEntry::OnPatientNameAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CHMSPatientFoodOrderEntry::OnOrderDateChange() { m_bAddOrder = true; }
/*void CHMSPatientFoodOrderEntry::OnOrderDateSetfocus(){

} */
/*void CHMSPatientFoodOrderEntry::OnOrderDateKillfocus(){

} */
int CHMSPatientFoodOrderEntry::OnOrderDateCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL;
    UpdateData(true);
    CString szDate, m_szInBedDate;
    int nNumberOrderDate = m_nDays, m_nMaxDays = 0;
    if (!m_bMultipleDay)
        nNumberOrderDate += 3;
    szDate = m_szCurrentOrderDate.Left(10);

    szSQL.Format(_T("select MAX(trunc_date(hb_admitdate)) from hms_bed ")
                 _T(" where hb_docno =%ld and hb_deptid='%s'  ")
                 _T(" and hb_refidx=%d "),
                 str2long(m_szPatientNameKey), pMF->m_szDept,
                 ToInt(m_wndPatientName.GetCurrent(8)));

    rs.ExecSQL(szSQL);
    m_szInBedDate = rs.GetStringValue();

    if (!m_szInBedDate.IsEmpty())
        szDate = m_szInBedDate;

    m_nMaxDays = CompareDate(m_szOrderDate.Left(10), m_szCurrentOrderDate);

    int n = CompareDate(m_szOrderDate.Left(10), szDate);
    _tprintf(_T("\r\nn:%d, MaxDay:%d, NumberOrder:%d, %s, %s"), n, m_nMaxDays,
             nNumberOrderDate, m_szOrderDate, m_szCurrentOrderDate);
    if (n < 0 || m_nMaxDays < 0 || m_nMaxDays > nNumberOrderDate)
        return -1;

    return 0;
}
void CHMSPatientFoodOrderEntry::OnNameSelectChange(int nOldItemSel,
                                                   int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSPatientFoodOrderEntry::OnNameSelendok()
{
    /*UpdateData(TRUE);
    OnNameCheckValue();*/
}
/*void CHMSPatientFoodOrderEntry::OnNameSetfocus(){

}*/
/*void CHMSPatientFoodOrderEntry::OnNameKillfocus(){

}*/
long CHMSPatientFoodOrderEntry::OnNameLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty())
    {
        szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szNameKey);
    };

    if (m_bHaucan)
    {
        szWhere.AppendFormat(
            _T(" and NVL(hfl_deptid,'XX') = 'HCKT' and hfl_index2='sang' "));
    }
    else
    {
        if (pMF->m_szDept == _T("A16"))
        {
            szWhere.AppendFormat(
                _T(" and hfl_feeid IN('FF000132', ")
                _T("'FF000189','FF000207','FF000220','FF000221','FF000222','")
                _T("FF000474', 'FF000475', 'FF0001205', 'FF0001206', ")
                _T("'FF0001207', 'FF0030008', 'FF0030009', 'FF0030010', ")
                _T("'FF00030372', 'FF00031439', 'FF00031433', ")
                _T("'FF00031440','FF00031545','FF00031337', 'FF00031363', ")
                _T("'FF00031676','FF00031677', 'FF00031678' ,'FF00033104','FF00033208','FF00033210', 'FF00033209') "));
        }
        else if (pMF->m_szDept == _T("TMNT"))
        {
            szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'PTTYC' and ")
                                 _T("hfl_name2 IN('sang') "));
        }
        else
            szWhere.AppendFormat(
                _T(" and hfl_feeid ")
                _T("IN('FF000132','FF000220','FF000221','FF000222','FF000474',")
                _T(" 'FF000475', 'FF0001035', 'FF0001036', 'FF0001205', ")
                _T("'FF0001206', 'FF0001207', 'FF0030008', 'FF0030009', ")
                _T("'FF0030010', 'FF00030372', 'FF00031439', 'FF00031433', ")
                _T("'FF00031440', 'FF00031545', 'FF00031337', 'FF00031363', ")
                _T("'FF00031676','FF00031677', 'FF00031678','FF00033104','FF00033208','FF00033210', 'FF00033209') "));

        szWhere.AppendFormat(_T(" AND hfl_name2 NOT IN (%s)"), m_szSkipName2);

        if (pMF->m_szDept != _T("TMNT"))
        {
            szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') <> 'PTTYC' "));
        }
    }

    m_wndName.DeleteAllItems();
    int nCount = 0;

    // Check báo ăn hậu cần người nhà

    if (m_bHaucannn)
    {
        szSQL.Format(
            _T(" SELECT  hfl_idx,HFL_MEDICAL_CODE as id,")
            _T(" 	hfl_feeid as itemid, ")
            _T(" 	hfl_name as name, ")
            _T(" 	hfl_unit as unit, ")
            _T("	hfl_categoryid as categoryid, ")
            _T(" 	hfl_servprice as unitprice,")
            _T(" 	hfl_groupid as groupid, ")
            _T(" 	hfl_typeid as typeid ")
            _T(" FROM hms_fee_list ")
            _T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and ")
            _T("nvl(HFL_FEEFOOD_NN,'N') = 'Y'  and hfl_active='Y' %s ")
            _T(" ORDER BY hfl_idx, name, unit, unitprice "),
            szWhere);
    }
    else
    {
        szSQL.Format(_T(" SELECT  hfl_idx,HFL_MEDICAL_CODE as id,")
                     _T(" 	hfl_feeid as itemid, ")
                     _T(" 	hfl_name as name, ")
                     _T(" 	hfl_unit as unit, ")
                     _T("	hfl_categoryid as categoryid, ")
                     _T(" 	hfl_servprice as unitprice,")
                     _T(" 	hfl_groupid as groupid, ")
                     _T(" 	hfl_typeid as typeid ")
                     _T(" FROM hms_fee_list ")
                     _T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' ")
                     _T("and nvl(hfl_subgroup,'N') <> 'NN' and ")
                     _T("nvl(HFL_FEEFOOD_NN,'N') <> 'Y' and hfl_active='Y' %s ")
                     _T(" ORDER BY hfl_idx, name, unit, unitprice "),
                     szWhere);
    }

    nCount = rs.ExecSQL(szSQL);
    //_tprintf(_T("\r\nbbbbbbb:%s, %s, %s"), m_szNameKey, m_szName1Key,
    //m_szName2Key);

    //_msg(_T("%s"), szSQL);
    CString szId;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("id"), szId);
        m_wndName.AddItems(
            rs.GetValue(_T("itemid")), szId, rs.GetValue(_T("name")),
            rs.GetValue(_T("unit")), rs.GetValue(_T("unitprice")),
            rs.GetValue(_T("groupid")), rs.GetValue(_T("categoryid")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSPatientFoodOrderEntry::OnNameAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

void CHMSPatientFoodOrderEntry::OnName2SelectChange(int nOldItemSel,
                                                    int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSPatientFoodOrderEntry::OnName2Selendok()
{
    /*UpdateData(TRUE);
    OnName2CheckValue();*/
}
/*void CHMSPatientFoodOrderEntry::OnName2Setfocus(){

}*/
/*void CHMSPatientFoodOrderEntry::OnName2Killfocus(){

}*/
long CHMSPatientFoodOrderEntry::OnName2LoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndName2.IsSearchKey() && !m_szName2Key.IsEmpty())
    {
        szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szName2Key);
    };

    if (m_bHaucan)
    {
        szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'HCKT' and ")
                             _T("nvl(hfl_index2,'XX') <> 'sang' "));
    }
    else
    {
        //		if(pMF->m_szDept == _T("A16")){

        if (pMF->m_szDept == _T("A16"))
        {
            if (m_szObjectID == _T("8"))
                // szWhere.AppendFormat(_T(" and hfl_feeid NOT IN('FF000132',
                // 'FF000189','FF000207','FF000220','FF000221','FF000222',
                // 'FF0001205', 'FF0001206', 'FF0001207', 'FF00030372') AND
                // COALESCE(hfl_categoryid, 0) > 0 AND NVL(hfl_deptid,'X') <>
                // 'A16'"));
                szWhere.AppendFormat(
                    _T(" and hfl_feeid NOT IN('FF000132', 'FF000189', ")
                    _T("'FF000207','FF000220','FF000221','FF000222','")
                    _T("FF0001205', 'FF0001206', 'FF0001207', 'FF00030372') ")
                    _T("AND (COALESCE(hfl_categoryid, 0) > 0 OR ")
                    _T("COALESCE(hfl_categoryid, 0) = 0)"));
            else
                szWhere.AppendFormat(
                    _T(" and hfl_feeid NOT IN('FF000132', ")
                    _T("'FF000189','FF000207','FF000220','FF000221','FF000222'")
                    _T(", 'FF0001205', 'FF0001206', 'FF0001207', ")
                    _T("'FF00030372') AND COALESCE(hfl_categoryid, 0) <> 1"));
        }
        else if (pMF->m_szDept == _T("TMNT"))
        {
            szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'PTTYC' and ")
                                 _T("hfl_name2 IN('toi') "));
        }

        else
            szWhere.AppendFormat(
                _T(" and hfl_feeid NOT IN('FF000132', ")
                _T("'FF000189','FF000207','FF000220','FF000221','FF000222','")
                _T("FF000474', 'FF000475', 'FF0001205', 'FF0001206', ")
                _T("'FF0001207', 'FF0030008', 'FF0030009', 'FF0030010', ")
                _T("'FF00030372') AND COALESCE(hfl_categoryid, 0) <= 0"));

        //		}
        //		else
        //			szWhere.AppendFormat(_T(" and hfl_feeid NOT IN(%s) AND
        //COALESCE(hfl_categoryid, 0) <= 0"), m_szFastFoodIDS);

        szWhere.AppendFormat(_T(" AND hfl_name2 NOT IN (%s)"), m_szSkipName2);

        if (pMF->m_szDept != _T("TMNT"))
        {
            szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') <> 'PTTYC' "));
        }
    }

    m_wndName2.DeleteAllItems();
    int nCount = 0;

    if (m_bHaucannn)
    {
        szSQL.Format(_T(" SELECT  HFL_MEDICAL_CODE as id,")
                     _T(" 	hfl_feeid as itemid, ")
                     _T(" 	hfl_name as name, ")
                     _T(" 	hfl_unit as unit, ")
                     _T("	hfl_categoryid as categoryid, ")
                     _T(" 	hfl_servprice as unitprice,")
                     _T(" 	hfl_groupid as groupid, ")
                     _T(" 	hfl_typeid as typeid ")
                     _T(" FROM hms_fee_list ")
                     _T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' ")
                     _T("and nvl(HFL_FEEFOOD_NN,'N') = 'Y' and hfl_active='Y' ")
                     _T(" and hfl_feeid not in (select ss_code from sys_sel ")
                     _T("where ss_id = 'hms_fee_nn_unload') %s ")
                     _T(" ORDER BY name, unit, unitprice "),
                     szWhere);
    }
    else
    {
        szSQL.Format(
            _T(" SELECT  HFL_MEDICAL_CODE as id,")
            _T(" 	hfl_feeid as itemid, ")
            _T(" 	hfl_name as name, ")
            _T(" 	hfl_unit as unit, ")
            _T("	hfl_categoryid as categoryid, ")
            _T(" 	hfl_servprice as unitprice,")
            _T(" 	hfl_groupid as groupid, ")
            _T(" 	hfl_typeid as typeid ")
            _T(" FROM hms_fee_list ")
            _T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and ")
            _T("nvl(hfl_subgroup,'N') <> 'NN' and nvl(HFL_FEEFOOD_NN,'N') <> ")
            _T("'Y' AND NVL(hfl_index1, 'N') <> '212' and hfl_active='Y' %s ")
            _T(" ORDER BY name, unit, unitprice "),
            szWhere);
    }

    nCount = rs.ExecSQL(szSQL);
    _tprintf(_T("Toi %s"), szSQL);

    //_msg(_T("%s"), szSQL);
    CString szId;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("id"), szId);
        m_wndName2.AddItems(
            rs.GetValue(_T("itemid")), szId, rs.GetValue(_T("name")),
            rs.GetValue(_T("unit")), rs.GetValue(_T("unitprice")),
            rs.GetValue(_T("groupid")), rs.GetValue(_T("categoryid")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSPatientFoodOrderEntry::OnName2AddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

void CHMSPatientFoodOrderEntry::OnName1SelectChange(int nOldItemSel,
                                                    int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSPatientFoodOrderEntry::OnName1Selendok()
{
    /*UpdateData(TRUE);
    OnName1CheckValue();*/
}
/*void CHMSPatientFoodOrderEntry::OnName1Setfocus(){

}*/
/*void CHMSPatientFoodOrderEntry::OnName1Killfocus(){

}*/
long CHMSPatientFoodOrderEntry::OnName1LoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;

    if (m_wndName1.IsSearchKey() && m_szName1Key)
    {
        szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szName1Key);
    };

    if (m_bHaucan)
    {
        szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'HCKT' and ")
                             _T("nvl(hfl_index2,'XX') <> 'sang' "));
    }
    else
    {
        if (pMF->m_szDept == _T("A16"))
        {
            if (m_szObjectID == _T("8"))
                szWhere.AppendFormat(
                    _T(" and hfl_feeid NOT IN('FF000132', 'FF000189', ")
                    _T("'FF000207','FF000220','FF000221','FF000222','")
                    _T("FF0001205', 'FF0001206', 'FF0001207', 'FF00030372') ")
                    _T("AND (COALESCE(hfl_categoryid, 0) > 0 OR ")
                    _T("COALESCE(hfl_categoryid, 0) = 0 )"));
            else
                szWhere.AppendFormat(
                    _T(" and hfl_feeid NOT IN('FF000132', 'FF000189', ")
                    _T("'FF000207','FF000220','FF000221','FF000222', ")
                    _T("'FF0001205', 'FF0001206', 'FF0001207', 'FF00030372') ")
                    _T("AND COALESCE(hfl_categoryid, 0) <> 1"));
        }
        else if (pMF->m_szDept == _T("TMNT"))
        {
            szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'PTTYC' and ")
                                 _T("hfl_name2 IN('trua') "));
        }

        else
            szWhere.AppendFormat(
                _T(" and hfl_feeid NOT IN('FF000132', 'FF000189', ")
                _T("'FF000207','FF000220','FF000221','FF000222','FF000474', ")
                _T("'FF000475', 'FF0001205', 'FF0001206', 'FF0001207', ")
                _T("'FF0030008', 'FF0030009', 'FF0030010', 'FF00030372') AND ")
                _T("COALESCE(hfl_categoryid, 0) <= 0"));

        szWhere.AppendFormat(_T(" AND hfl_name2 NOT IN (%s)"), m_szSkipName2);

        if (pMF->m_szDept != _T("TMNT"))
        {
            szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') <> 'PTTYC' "));
        }
    }

    m_wndName1.DeleteAllItems();
    int nCount = 0;

    if (m_bHaucannn)
    {
        szSQL.Format(
            _T(" SELECT  HFL_MEDICAL_CODE as id,")
            _T(" 	hfl_feeid as itemid, ")
            _T(" 	hfl_name as name, ")
            _T(" 	hfl_unit as unit, ")
            _T("	hfl_categoryid as categoryid, ")
            _T(" 	hfl_servprice as unitprice,")
            _T(" 	hfl_groupid as groupid, ")
            _T(" 	hfl_typeid as typeid ")
            _T(" FROM hms_fee_list ")
            _T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' ")
            _T(" and nvl(HFL_FEEFOOD_NN,'N') = 'Y' and hfl_active='Y' ")
            _T(" and hfl_feeid not in (select ss_code from sys_sel where ")
            _T("ss_id = 'hms_fee_nn_unload') %s ")
            _T(" ORDER BY name, unit, unitprice "),
            szWhere);
    }

    else
    {
        szSQL.Format(
            _T(" SELECT  HFL_MEDICAL_CODE as id,")
            _T(" 	hfl_feeid as itemid, ")
            _T(" 	hfl_name as name, ")
            _T(" 	hfl_unit as unit, ")
            _T("	hfl_categoryid as categoryid, ")
            _T(" 	hfl_servprice as unitprice,")
            _T(" 	hfl_groupid as groupid, ")
            _T(" 	hfl_typeid as typeid ")
            _T(" FROM hms_fee_list ")
            _T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and ")
            _T("nvl(hfl_subgroup,'N') <> 'NN' and nvl(HFL_FEEFOOD_NN,'N') <> ")
            _T("'Y' AND NVL(hfl_index1, 'N') <> '212' and hfl_active='Y' %s ")
            _T(" ORDER BY name, unit, unitprice "),
            szWhere);
    }

    nCount = rs.ExecSQL(szSQL);
    _tprintf(_T("Trua %s"), szSQL);

    //_msg(_T("%s"), szSQL);

    CString szId;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("id"), szId);
        m_wndName1.AddItems(
            rs.GetValue(_T("itemid")), szId, rs.GetValue(_T("name")),
            rs.GetValue(_T("unit")), rs.GetValue(_T("unitprice")),
            rs.GetValue(_T("groupid")), rs.GetValue(_T("categoryid")), NULL);
        rs.MoveNext();
    }
    return nCount;
    return 0;
}
/*void CHMSPatientFoodOrderEntry::OnName1AddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSPatientFoodOrderEntry::OnQtyChange(){

} */
/*void CHMSPatientFoodOrderEntry::OnQtySetfocus(){

} */
/*void CHMSPatientFoodOrderEntry::OnQtyKillfocus(){

} */
int CHMSPatientFoodOrderEntry::OnQtyCheckValue() { return 0; }
/*void CHMSPatientFoodOrderEntry::OnQty2Change(){

} */
/*void CHMSPatientFoodOrderEntry::OnQty2Setfocus(){

} */
/*void CHMSPatientFoodOrderEntry::OnQty2Killfocus(){

} */
int CHMSPatientFoodOrderEntry::OnQty2CheckValue() { return 0; }

void CHMSPatientFoodOrderEntry::OnBreakfastRelativeSelectChange(int nOldItemSel,
                                                                int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSPatientFoodOrderEntry::OnBreakfastRelativeSelendok() {}
/*void CHMSPatientFoodOrderEntry::OnBreakfastRelativeSetfocus(){

}*/
/*void CHMSPatientFoodOrderEntry::OnBreakfastRelativeKillfocus(){

}*/
long CHMSPatientFoodOrderEntry::OnBreakfastRelativeLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndBreakfastRelative.IsSearchKey() &&
        !m_szBreakfastRelativeKey.IsEmpty())
    {
        szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szBreakfastRelativeKey);
    };

    szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'HCKT' "));

    m_wndBreakfastRelative.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T(" SELECT  hfl_idx,HFL_MEDICAL_CODE as id,")
                 _T(" 	hfl_feeid as itemid, ")
                 _T(" 	hfl_name as name, ")
                 _T(" 	hfl_unit as unit, ")
                 _T("	hfl_categoryid as categoryid, ")
                 _T(" 	hfl_servprice as unitprice,")
                 _T(" 	hfl_groupid as groupid, ")
                 _T(" 	hfl_typeid as typeid ")
                 _T(" FROM hms_fee_list ")
                 _T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000'  and ")
                 _T("hfl_subgroup='NN' and hfl_active='Y' %s ")
                 _T(" ORDER BY hfl_idx, name, unit, unitprice "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    //_tprintf(_T("\r\nbbbbbbb:%s, %s, %s"), m_szBreakfastRelativeKey,
    //m_szBreakfastRelative1Key, m_szBreakfastRelative2Key);

    _fmsg(_T("%s"), szSQL);
    CString szId;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("id"), szId);
        m_wndBreakfastRelative.AddItems(
            rs.GetValue(_T("itemid")), szId, rs.GetValue(_T("name")),
            rs.GetValue(_T("unit")), rs.GetValue(_T("unitprice")),
            rs.GetValue(_T("groupid")), rs.GetValue(_T("categoryid")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSPatientFoodOrderEntry::OnBreakfastRelativeAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
/*void CHMSPatientFoodOrderEntry::OnQty3Change(){

} */
/*void CHMSPatientFoodOrderEntry::OnQty3Setfocus(){

} */
/*void CHMSPatientFoodOrderEntry::OnQty3Killfocus(){

} */
int CHMSPatientFoodOrderEntry::OnQty3CheckValue() { return 0; }
/*void CHMSPatientFoodOrderEntry::OnNoteChange(){

} */
/*void CHMSPatientFoodOrderEntry::OnNoteSetfocus(){

} */
/*void CHMSPatientFoodOrderEntry::OnNoteKillfocus(){

} */
int CHMSPatientFoodOrderEntry::OnNoteCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}

void CHMSPatientFoodOrderEntry::OnSaveSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    OnSaveHMSPatientFoodOrderEntry();
}
void CHMSPatientFoodOrderEntry::OnCloseSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    ((CHMSDailyFoodOrder *)m_pWndOrder)->GetDataToScreen();
    CGuiDialog::OnCancel();
}
int CHMSPatientFoodOrderEntry::OnAddHMSPatientFoodOrderEntry()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_ADD);
    return 0;
}
int CHMSPatientFoodOrderEntry::OnEditHMSPatientFoodOrderEntry()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    SetMode(VM_EDIT);
    return 0;
}
int CHMSPatientFoodOrderEntry::OnDeleteHMSPatientFoodOrderEntry()
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
        OnCancelHMSPatientFoodOrderEntry();
    }
    return 0;
}
int CHMSPatientFoodOrderEntry::OnSaveHMSPatientFoodOrderEntry()
{
    if (GetMode() != VM_ADD && GetMode() != VM_ADDCHILD)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    CString szSQL;
    CRecord rs(&pMF->m_db);
    int ret, nRet = 10;
    long nOrderID = 0;
    bool bAddFlag = true;
    CString szMfgID;
    int nLevel = 0;
    // Cảnh báo khi bệnh nhân hết tiền tạm gửi

    if (pMF->GetModuleID() == _T("TM") || pMF->GetModuleID() == _T("SOM"))
    {
        CRecord rs(&pMF->m_db);
        double nExtraAmount1 = 0, nExtraAmount2 = 0, nExtraAmount3 = 0;
        double nExtraAmount = 0;
        double nDepositAmount = 0;
        CString szSQL1, szObjectId, szOutPatient, szCardno;
        szSQL1.Format(
            _T("Select hd_object as ObjectID, NVL(HTR_OUTPATIENT,'N') as ")
            _T("OutPatient, CASE WHEN SUBSTR(hd_cardno,1,2) in ('QN', 'CA') ")
            _T("THEN 'Y' ELSE 'N' END  AS CardNo from hms_doc left join ")
            _T("hms_treatment_record ON (hd_docno=htr_docno) where hd_docno = ")
            _T("%ld AND htr_treattime = %ld"),
            pMF->m_nDocumentNo, pMF->GetTreatTime());
        rs.ExecSQL(szSQL1);
        //_msg(_T("%s"), szSQL1);
        if (!rs.IsEOF())
        {
            rs.GetValue(_T("ObjectID"), szObjectId);
            rs.GetValue(_T("OutPatient"), szOutPatient);
            rs.GetValue(_T("CardNo"), szCardno);
        }
        szSQL.Format(_T("HMS_GetExtraAmount(%ld, '%s', %d)"),
                     pMF->m_nDocumentNo, m_szNameKey, m_nQty);
        nExtraAmount1 += str2float(pMF->ExecDML(szSQL));

        szSQL.Format(_T("HMS_GetExtraAmount(%ld, '%s', %d)"),
                     pMF->m_nDocumentNo, m_szName1Key, m_nQty1);
        nExtraAmount2 += str2float(pMF->ExecDML(szSQL));

        szSQL.Format(_T("HMS_GetExtraAmount(%ld, '%s', %d)"),
                     pMF->m_nDocumentNo, m_szName2Key, m_nQty2);
        nExtraAmount3 += str2float(pMF->ExecDML(szSQL));

        nExtraAmount = nExtraAmount1 + nExtraAmount2 + nExtraAmount3;

        szSQL.Format(_T("HMS_GetDepositAmount(%ld, 'I', %.2f) "),
                     pMF->m_nDocumentNo, nExtraAmount);
        nDepositAmount = str2double(pMF->ExecDML(szSQL));
        if (nDepositAmount < 0 && nExtraAmount > 0)

        {
            int ret = ShowMessageBox(
                _T("S\x1ED1 ti\x1EC1n \x62\x1EC7nh nh\xE2n t\x1EA1m g\x1EEDi ")
                _T("\x111\xE3 h\x1EBFt.\x42\x1EA1n \x63\xF3 mu\x1ED1n ")
                _T("ti\x1EBFp t\x1EE5\x63 \x63h\x1EC9 \x111\x1ECBnh ")
                _T("kh\xF4ng! "),
                MB_YESNO);
            if (ret == IDNO)
                return -1;
        }
    }

    if (GetMode() != VM_ADD && GetMode() != VM_ADDCHILD)
        return -1;

    if (!IsValidateData())
        return -1;

    if (m_nDocumentNo <= 0)
        return -1;

    if (m_szName1Key.IsEmpty() && m_szName2Key.IsEmpty() &&
        m_szNameKey.IsEmpty() && m_szBreakfastRelativeKey.IsEmpty())
    {
        m_wndName.SetFocus();
        return -1;
    }

    for (int i = 0; i < 5; i++)
        m_nID[i] = 0;

    m_hms_feefodorderTbl.SetValue(_T("hfo_reforder_id"), m_nOID);

    _tprintf(_T("\r\n%ld"), m_nOID);
    pMF->BeginTransaction();
    for (int i = 0; i < m_nDays; i++)
    {
        CDate odate;
        odate.ParseDate(m_szOrderDate.Left(10));
        odate += i;
        CString szOrderDate = odate.GetDate();
        szOrderDate.AppendFormat(_T(" %s"), pMF->GetSysTime());

        m_hms_feefodorderTbl.SetValue(_T("hfo_orderdate"), szOrderDate);

        szSQL.Format(_T("HMS_FOODORDER_CREATE(%s) "),
                     m_hms_feefodorderTbl.FormatSQL());

        nOrderID = str2long(pMF->ExecDML(szSQL));
        if (nOrderID <= 0)
        {
            bAddFlag = false;
            break;
        }
        m_hms_feefodorderlineTbl.SetValue(_T("hfol_orderid"), nOrderID);

        m_nID[i] = nOrderID;
        CString szFeeID;

        szFeeID = m_wndName.GetCurrent(0);
        nLevel = ToInt(m_wndName.GetCurrent(6));

        m_hms_feefodorderlineTbl.SetValue(_T("hfol_groupid"), _T("FF000"));

        _tprintf(_T("\r\n%ld, %s"), nOrderID, szFeeID);
        if (!szFeeID.IsEmpty())
        {
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_itemid"), szFeeID);
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_qtyorder"), m_nQty);
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_type"), _T("S"));
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_level"), nLevel);
            szSQL.Format(_T("HMS_FOODORDER_ADDLINE(%s) "),
                         m_hms_feefodorderlineTbl.FormatSQL());
            ret = str2long(pMF->ExecDML(szSQL));
            _tprintf(_T("%s"), szSQL);
            if (ret <= 0)
            {
                bAddFlag = false;
                break;
            }
        }

        szFeeID = m_wndName1.GetCurrent(0);
        nLevel = ToInt(m_wndName1.GetCurrent(6));
        if (!szFeeID.IsEmpty())
        {
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_itemid"), szFeeID);
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_qtyorder"), m_nQty2);
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_type"), _T("T"));
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_level"), nLevel);
            szSQL.Format(_T("HMS_FOODORDER_ADDLINE(%s) "),
                         m_hms_feefodorderlineTbl.FormatSQL());
            ret = str2long(pMF->ExecDML(szSQL));
            _tprintf(_T("%s"), szSQL);
            if (ret <= 0)
            {
                bAddFlag = false;
                break;
            }
        }

        szFeeID = m_wndName2.GetCurrent(0);
        nLevel = ToInt(m_wndName2.GetCurrent(6));

        if (!szFeeID.IsEmpty())
        {
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_itemid"), szFeeID);
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_qtyorder"), m_nQty2);
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_type"), _T("C"));
            m_hms_feefodorderlineTbl.SetValue(_T("hfol_level"), nLevel);
            szSQL.Format(_T("HMS_FOODORDER_ADDLINE(%s) "),
                         m_hms_feefodorderlineTbl.FormatSQL());
            ret = str2long(pMF->ExecDML(szSQL));
            _tprintf(_T("%s:%d"), szSQL, ret);
            if (ret <= 0)
            {
                bAddFlag = false;
                break;
            }
        }

        if (m_bHaucan)
        {
            szFeeID = m_wndBreakfastRelative.GetCurrent(0);
            nLevel = ToInt(m_wndBreakfastRelative.GetCurrent(6));

            if (!szFeeID.IsEmpty())
            {
                m_hms_feefodorderlineTbl.SetValue(_T("hfol_itemid"), szFeeID);
                m_hms_feefodorderlineTbl.SetValue(_T("hfol_qtyorder"), m_nQty3);
                m_hms_feefodorderlineTbl.SetValue(_T("hfol_type"), _T("S"));
                m_hms_feefodorderlineTbl.SetValue(_T("hfol_level"), nLevel);
                m_hms_feefodorderlineTbl.SetValue(_T("hfol_groupid"),
                                                  _T("NN000"));
                szSQL.Format(_T("HMS_FOODORDER_ADDLINE_EX(%s) "),
                             m_hms_feefodorderlineTbl.FormatSQL());

                ret = str2long(pMF->ExecDML(szSQL));
                _tprintf(_T("%s:%d"), szSQL, ret);
                if (ret <= 0)
                {
                    bAddFlag = false;
                    break;
                }
            }
        }
    }

    _tprintf(_T("\r\nAddFlag:%d"), bAddFlag);

    if (bAddFlag)
    {
        pMF->Commit();
        if (nOrderID > 0)
        {
            long nDocumentNo = str2long(m_szPatientNameKey);

            ((CHMSDailyFoodOrder *)m_pWndOrder)->Refresh(0, nDocumentNo);
        }

        SetMode(VM_ADDCHILD);
    }
    else
    {
        pMF->Rollback();

        //	ShowMessageBox(_T("Can not add item"), 0);
    }
    return ret;
}
int CHMSPatientFoodOrderEntry::OnCancelHMSPatientFoodOrderEntry()
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
int CHMSPatientFoodOrderEntry::OnHMSPatientFoodOrderEntryListLoadData()
{
    return 0;
}

BOOL CHMSPatientFoodOrderEntry::PreTranslateMessage(MSG *pMsg)
{

    BOOL ret = CGuiDialog::PreTranslateMessage(pMsg);
    if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE)
    {
    }
    return ret;
}

int CHMSPatientFoodOrderEntry::OnNameCheckValue()
{
    /*if(m_szNameKey.IsEmpty())
    {
        m_wndQty.EnableWindow(FALSE);
    }
    else
    {
        m_wndQty.EnableWindow(TRUE);
    }*/
    return 0;
}

int CHMSPatientFoodOrderEntry::OnName1CheckValue()
{
    /*if(m_szName1Key.IsEmpty())
    {
        m_wndQty1.EnableWindow(FALSE);
    }
    else
    {
        m_wndQty1.EnableWindow(TRUE);
    }*/

    return 0;
}

int CHMSPatientFoodOrderEntry::OnName2CheckValue()
{
    /*if(m_szName2Key.IsEmpty())
    {
        m_wndQty2.EnableWindow(FALSE);
    }
    else
    {
        m_wndQty2.EnableWindow(TRUE);
    }*/

    return 0;
}