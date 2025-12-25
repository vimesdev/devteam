#include "HMSOnlineListView.h"
// #include "stdafx.h"
#include "GuiUtils.h"
#include "HMSReportForms\PrintForms.h"
#include "MainFrm.h"

/*static int _OnFromDateChangeFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnFromDateChange();
} */
/*static int _OnFromDateSetfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnFromDateKillfocus();} */
/*static int _OnFromDateKillfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnFromDateCheckValue();
}
/*static int _OnFromTimeChangeFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnFromTimeChange();
} */
/*static int _OnFromTimeSetfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnFromTimeKillfocus();} */
/*static int _OnFromTimeKillfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnFromTimeKillfocus();
} */
static int _OnFromTimeCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnFromTimeCheckValue();
}
/*static int _OnToDateChangeFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnToDateChange();
} */
/*static int _OnToDateSetfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnToDateKillfocus();} */
/*static int _OnToDateKillfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnToDateCheckValue();
}
/*static int _OnToTimeChangeFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnToTimeChange();
} */
/*static int _OnToTimeSetfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnToTimeKillfocus();} */
/*static int _OnToTimeKillfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnToTimeKillfocus();
} */
static int _OnToTimeCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnToTimeCheckValue();
}
static int _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
    return ((CHMSOnlineListView *)pWnd)
        ->OnRoomSelectChange(nOldItemSel, nNewItemSel);
}
static int _OnRoomSelendokFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnRoomSelendok();
}
/*static int _OnRoomSetfocusFnc(CWnd *pWnd){
     return ((CHMSOnlineListView *)pWnd)->OnRoomKillfocus();
}*/
/*static int _OnRoomKillfocusFnc(CWnd *pWnd){
     return ((CHMSOnlineListView *)pWnd)->OnRoomKillfocus();
}*/
static int _OnRoomLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnRoomLoadData();
}
/*static int _OnRoomAddNewFnc(CWnd *pWnd){
     return ((CHMSOnlineListView *)pWnd)->OnRoomAddNew();
}*/
/*static int _OnDocumentNoChangeFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnDocumentNoChange();
} */
/*static int _OnDocumentNoSetfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnDocumentNoKillfocus();} */
/*static int _OnDocumentNoKillfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnDocumentNoCheckValue();
}
/*static int _OnPatientNameChangeFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnPatientNameChange();
} */
/*static int _OnPatientNameSetfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnPatientNameKillfocus();} */
/*static int _OnPatientNameKillfocusFnc(CWnd *pWnd){
    return ((CHMSOnlineListView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnPatientNameCheckValue();
}
static int _OnWaitingSelectFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnWaitingSelect();
}
static int _OnExaminedSelectFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnExaminedSelect();
}
static int _OnTerminatedSelectFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnTerminatedSelect();
}
static int _OnLoadSelectFnc(CWnd *pWnd)
{
    CHMSOnlineListView *pVw = (CHMSOnlineListView *)pWnd;
    return pVw->OnLoadSelect();
}

static int _OnLoadSubSelectFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnLoadSubSelect();
}
static int _OnPatientListLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnQMSPatientListLoadData();
}
static int _OnPatientListDblClickFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnPatientListDblClick();
}
static int _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
    return ((CHMSOnlineListView *)pWnd)
        ->OnPatientListSelectChange(nOldItem, nNewItem);
}
static int _OnPatientListSelectItemFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnPatientListDblClick();
}

static bool _filter_outpatient = false;
static bool _filter_pregnancy = false;
static int _OnPatientListFilterOutpatientFnc(CWnd *pWnd)
{
    _filter_outpatient = true;
    ((CHMSOnlineListView *)pWnd)->OnQMSPatientListLoadData();
    _filter_outpatient = false;
    return 0;
}

static int _OnPatientListFilterPregnancyFnc(CWnd *pWnd)
{
    _filter_pregnancy = true;
    ((CHMSOnlineListView *)pWnd)->OnQMSPatientListLoadData();
    _filter_pregnancy = false;
    return 0;
}

static int _OnInVongDeoTayFnc(CWnd *pWnd)
{
    ((CHMSOnlineListView *)pWnd)->InVongDeoTay();
    return 0;
}
static int _OnPatientListSetEmergencyFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnPatientListSetEmergency();
}
static int _OnPatientListSetPriorityFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnPatientListSetPriority();
}

static int _OnAddHMSOnlineListViewFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnAddHMSOnlineListView();
}
static int _OnEditHMSOnlineListViewFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnEditHMSOnlineListView();
}
static int _OnDeleteHMSOnlineListViewFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnDeleteHMSOnlineListView();
}
static int _OnSaveHMSOnlineListViewFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnSaveHMSOnlineListView();
}
static int _OnCancelHMSOnlineListViewFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnCancelHMSOnlineListView();
}
static void _OnKhamNhanVienLabelSelectFnc(CWnd *pWnd)
{
    ((CHMSOnlineListView *)pWnd)->OnKhamNhanVienLabelSelect();
}
static int _OnCICCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSOnlineListView *)pWnd)->OnCICCheckValue();
}
static void _OnXnnguoinhaSelectFnc(CWnd *pWnd)
{
    ((CHMSOnlineListView *)pWnd)->OnXnnguoinhaSelect();
}

CHMSOnlineListView::CHMSOnlineListView()
{

    m_nDlgWidth = 790;
    m_nDlgHeight = 629;
}
CHMSOnlineListView::~CHMSOnlineListView() {}
void CHMSOnlineListView::OnCreateComponents()
{
    // m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1010,
    // 60); m_wndPatientInformation.Create(this, _T("Patient Information"), 5,
    // 97, 1010, 672); m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30,
    // 85, 55); m_wndFromDate.Create(this,90, 30, 190, 55);
    // m_wndFromTime.Create(this,195, 30, 245, 55);
    // m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 325, 55);
    // m_wndToDate.Create(this,330, 30, 430, 55);
    // m_wndToTime.Create(this,435, 30, 485, 55);
    // m_wndRoomLabel.Create(this, _T("Examination Room"), 490, 30, 610, 55);
    // m_wndRoom.Create(this,615, 30, 765, 55);
    ////m_wndPatientNameLabel.Create(this, _T("Tên"), 0, 769, 30, 870);
    // m_wndPatientName.Create(this,875, 30, 975, 55);
    // m_wndLoad.Create(this, _T("@>"), 980, 30, 1005, 55);
    // m_wndKhamNhanVienLabel.Create(this, _T("Khám nhân viên BV 108"), 5, 66,
    // 245, 91); m_wndPatientNameLabel.Create(this, _T("Tên, số ĐT"), 769, 30,
    // 870, 55); m_wndCICLabel.Create(this, _T("Thẻ CCCD"), 250, 66, 325, 91);
    // m_wndCIC.Create(this,330, 66, 485, 91);
    // m_wndPatientList.Create(this,5, 115, 1011, 672);

    m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1010, 60);
    m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 70, 1010, 672);
    m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 85, 55);
    m_wndFromDate.Create(this, 90, 30, 190, 55);
    m_wndFromTime.Create(this, 195, 30, 245, 55);
    m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 325, 55);
    m_wndToDate.Create(this, 330, 30, 430, 55);
    m_wndToTime.Create(this, 435, 30, 485, 55);
    m_wndRoomLabel.Create(this, _T("Examination Room"), 490, 30, 610, 55);
    m_wndRoom.Create(this, 615, 30, 765, 55);
    // m_wndPatientNameLabel.Create(this, _T("Tên"), 0, 769, 30, 870);
    m_wndPatientName.Create(this, 875, 30, 975, 55);
    m_wndLoad.Create(this, _T("@>"), 980, 30, 1005, 55);
    //m_wndKhamNhanVienLabel.Create(this, _T("Khám nhân viên BV 108"), 5, 66, 245, 91);
    m_wndPatientNameLabel.Create(this, _T("Tên, số ĐT"), 769, 30, 870, 55);
    //m_wndXnnguoinha.Create(this, _T("Xét nghiệm người nhà"), 250, 66, 485, 91);
   // m_wndCICLabel.Create(this, _T("Thẻ CCCD"), 490, 66, 610, 91);
    //m_wndCIC.Create(this, 615, 66, 765, 91);
    m_wndPatientList.Create(this, 5, 95, 1011, 672);

    m_wndDocumentNo.Create(this, 0, 0, 0, 0);
    m_wndDocumentNo.ShowWindow(SW_HIDE);
    m_wndDocumentNo.EnableWindow(FALSE);
}
void CHMSOnlineListView::OnInitializeComponents()
{

    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // EnableControls(FALSE);
    // EnableButtons(TRUE, 0, -1);
    //	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
    m_wndFromDate.SetCheckValue(true);
    //	m_wndFromTime.SetMax(CDate(pMF->GetSysTime()));
    m_wndFromTime.SetCheckValue(true);
    //	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
    m_wndToDate.SetCheckValue(true);
    //	m_wndToTime.SetMax(CDate(pMF->GetSysTime()));
    m_wndToTime.SetCheckValue(true);
    m_wndRoom.SetCheckValue(true);
    m_wndRoom.LimitText(15);
    //	m_wndDocumentNo.SetLimitText(10);
    //	m_wndDocumentNo.SetCheckValue(true);
    m_wndPatientName.SetLimitText(65);
    m_wndPatientName.SetCheckValue(true);
    m_wndPatientName.SetNotEmpty(false);
    //m_wndCIC.SetLimitText(12);
    //m_wndCIC.SetCheckValue(true);

    m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
    m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

    m_wndPatientList.SetAutoIndex(true);
    m_wndPatientList.InsertColumn(0, _T("Document No"), CFMT_TEXT | CFMT_CENTER,90);
    m_wndPatientList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
    m_wndPatientList.InsertColumn(2, _T("Age"), CFMT_TEXT | CFMT_CENTER, 40);
    m_wndPatientList.InsertColumn(3, _T("Sex"), CFMT_TEXT | CFMT_CENTER, 50);
    m_wndPatientList.InsertColumn(4, _T("Address"), CFMT_TEXT, 350);
    m_wndPatientList.InsertColumn(5, _T("Phone"), CFMT_TEXT, 100);
    m_wndPatientList.InsertColumn(6, _T("Thẻ CCCD"), CFMT_TEXT, 100);
    m_wndPatientList.InsertColumn(7, _T("PK tiếp đón"), CFMT_TEXT, 150);
    m_wndPatientList.InsertColumn(8, _T("Ngày hẹn"), CFMT_DATETIME, 125);
    m_wndPatientList.InsertColumn(9, _T("Giờ/Buổi khám"), CFMT_TEXT, 125);
    m_wndPatientList.InsertColumn(10, _T("Ghi chú"), CFMT_TEXT, 125);
    m_wndPatientList.InsertColumn(11, _T("Doc Sts"), CFMT_TEXT | CFMT_CENTER,85);
    m_wndPatientList.InsertColumn(12, _T("Object"), CFMT_TEXT, 80);
    m_wndPatientList.InsertColumn(13, _T("Created By"), CFMT_TEXT | CFMT_CENTER,100);
    m_wndPatientList.InsertColumn(14, _T("QMS IDX"), CFMT_TEXT, 0);
    m_wndPatientList.InsertColumn(15, _T("PatientNo"), CFMT_TEXT, 0);
}
void CHMSOnlineListView::OnSetWindowEvents()
{

    // m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
    // m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
    // m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
    m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
    // m_wndFromTime.SetEvent(WE_CHANGE, _OnFromTimeChangeFnc);
    // m_wndFromTime.SetEvent(WE_SETFOCUS, _OnFromTimeSetfocusFnc);
    // m_wndFromTime.SetEvent(WE_KILLFOCUS, _OnFromTimeKillfocusFnc);
    m_wndFromTime.SetEvent(WE_CHECKVALUE, _OnFromTimeCheckValueFnc);
    // m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
    // m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
    // m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
    m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
    // m_wndToTime.SetEvent(WE_CHANGE, _OnToTimeChangeFnc);
    // m_wndToTime.SetEvent(WE_SETFOCUS, _OnToTimeSetfocusFnc);
    // m_wndToTime.SetEvent(WE_KILLFOCUS, _OnToTimeKillfocusFnc);
    m_wndToTime.SetEvent(WE_CHECKVALUE, _OnToTimeCheckValueFnc);
    m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
    // m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
    // m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
    m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
    m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
    // m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
    // m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
    // m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
    // m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
    //	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
    // m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
    // m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
    // m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
    m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
    //	m_wndWaiting.SetEvent(WE_CLICK, _OnWaitingSelectFnc);
    //	m_wndExamined.SetEvent(WE_CLICK, _OnExaminedSelectFnc);
    //	m_wndTerminated.SetEvent(WE_CLICK, _OnTerminatedSelectFnc);
    m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
    m_wndCIC.SetEvent(WE_CHECKVALUE, _OnCICCheckValueFnc);
    //	m_wndLoad.SetEvent(WE_ADDNEW, _OnLoadSubSelectFnc);
    m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
    m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
    m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
    m_wndPatientList.SetEvent(WE_CHECKVALUE, _OnPatientListSelectItemFnc);

    m_wndPatientList.SetWindowText(_T("Patients List"));
    m_wndPatientList.AddEvent(1, _T("Select Patient"), _OnPatientListSelectItemFnc);
    m_wndPatientList.AddEvent(0, _T("-"));
    m_wndPatientList.AddEvent(2, _T("Lọc bệnh nhân ngoại trú"), _OnPatientListFilterOutpatientFnc);
    m_wndPatientList.AddEvent(0, _T("-"));
    m_wndPatientList.AddEvent(3, _T("Lọc bệnh nhân đăng ký mổ đẻ"), _OnPatientListFilterPregnancyFnc);
    // m_wndPatientList.AddEvent(0, _T("-"));
    // m_wndPatientList.AddEvent(4, _T("In Vòng Đeo Tay"), _OnInVongDeoTayFnc);
  //  m_wndKhamNhanVienLabel.SetEvent(WE_CLICK, _OnKhamNhanVienLabelSelectFnc);
    //m_wndXnnguoinha.SetEvent(WE_CLICK, _OnXnnguoinhaSelectFnc);
    //	m_wndPatientList.AddEvent(0, _T("-"));
    //	m_wndPatientList.AddEvent(3, _T("Set Priority"),
    //_OnPatientListSetPriorityFnc);
    /*
        AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOnlineListViewFnc, 0, 'A',
       VK_CONTROL); AddEvent(2, _T("Edit	Ctrl+E"),
       _OnEditHMSOnlineListViewFnc, 0, 'E', VK_CONTROL); AddEvent(3,
       _T("Delete	Ctrl+D"), _OnDeleteHMSOnlineListViewFnc, 0, 'D',
       VK_CONTROL); AddEvent(4, _T("Save	Ctrl+S"),
       _OnSaveHMSOnlineListViewFnc, 0, 'S', VK_CONTROL); AddEvent(0, _T("-"));
        AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOnlineListViewFnc, 0,
       'T', VK_CONTROL);
    */

    // Layout

    SetDefaultValues();
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    m_szFromDate = m_szToDate = pMF->GetSysDate();
    UpdateData(false);
    //	OnPatientListLoadData();
    m_wndFromDate.SetFocus();
}
void CHMSOnlineListView::OnDoDataExchange(CDataExchange *pDX)
{

    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndFromTime.GetDlgCtrlID(), m_szFromTime);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
    DDX_TextEx(pDX, m_wndToTime.GetDlgCtrlID(), m_szToTime);
    DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
    //	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
    DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
    //	DDX_Radio(pDX, m_wndWaiting.GetDlgCtrlID(), m_nWaiting);
    //DDX_Check(pDX, m_wndKhamNhanVienLabel.GetDlgCtrlID(), m_bKhamNhanVienLabel);
    //DDX_Text(pDX, m_wndCIC.GetDlgCtrlID(), m_szCIC);
    //DDX_Check(pDX, m_wndXnnguoinha.GetDlgCtrlID(), m_bXnnguoinha);
}
void CHMSOnlineListView::GetDataToScreen()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSOnlineListView::GetScreenToData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSOnlineListView::SetDefaultValues()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    m_szFromTime = _T("00:00");
    m_szToDate = m_szFromDate;
    m_szToTime = _T("23:59");
    m_szRoomKey.Empty();
    m_nDocumentNo = 0;
    m_szPatientName.Empty();
    m_nWaiting = 0;
    //m_bKhamNhanVienLabel = FALSE;
    //m_bXnnguoinha = FALSE;
}
int CHMSOnlineListView::SetMode(int nMode)
{
    int nOldMode = GetMode();
    // CGuiView::SetMode(nMode);
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    switch (nMode)
    {
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
    //_msg(_T("%s"), m_szRoomKey);
    UpdateData(FALSE);
    //_msg(_T("%s"), m_szRoomKey);
    return nOldMode;
}
/*int CHMSOnlineListView::OnFromDateChange(){
    return 0;
} */
/*int CHMSOnlineListView::OnFromDateSetfocus(){
    return 0;
} */
/*int CHMSOnlineListView::OnFromDateKillfocus(){
    return 0;
} */
int CHMSOnlineListView::OnFromDateCheckValue()
{
    //	OnPatientListLoadData();
    return 0;
}
/*int CHMSOnlineListView::OnFromTimeChange(){
    return 0;
} */
/*int CHMSOnlineListView::OnFromTimeSetfocus(){
    return 0;
} */
/*int CHMSOnlineListView::OnFromTimeKillfocus(){
    return 0;
} */
int CHMSOnlineListView::OnFromTimeCheckValue()
{
    // OnPatientListLoadData();
    return 0;
}
/*int CHMSOnlineListView::OnToDateChange(){
    return 0;
} */
/*int CHMSOnlineListView::OnToDateSetfocus(){
    return 0;
} */
/*int CHMSOnlineListView::OnToDateKillfocus(){
    return 0;
} */
int CHMSOnlineListView::OnToDateCheckValue()
{
    // OnPatientListLoadData();
    return 0;
}
/*int CHMSOnlineListView::OnToTimeChange(){
    return 0;
} */
/*int CHMSOnlineListView::OnToTimeSetfocus(){
    return 0;
} */
/*int CHMSOnlineListView::OnToTimeKillfocus(){
    return 0;
} */
int CHMSOnlineListView::OnToTimeCheckValue()
{
    //	OnPatientListLoadData();
    return 0;
}
int CHMSOnlineListView::OnRoomSelectChange(int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSOnlineListView::OnRoomSelendok()
{
    // OnPatientListLoadData();
    return 0;
}
/*int CHMSOnlineListView::OnRoomSetfocus(){
     return 0;
}*/
/*int CHMSOnlineListView::OnRoomKillfocus(){
     return 0;
}*/
int CHMSOnlineListView::OnCICCheckValue()
{
    //OnPatientListLoadData();
    return 0;
}

void CHMSOnlineListView::OnXnnguoinhaSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    //OnPatientListLoadData();
}
int CHMSOnlineListView::OnRoomLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndRoom.IsSearchKey() && ToInt(m_szRoomKey) > 0)
    {
        szWhere.Format(_T(" AND hrl_id=%ld"), ToLong(m_szRoomKey));
    };
    szSQL.Format(_T(" SELECT hrl_id as id, hrl_name as name FROM hms_roomlist ")
                 _T(" WHERE hrl_deptid = '%s' and hrl_active = 'Y' % s ")
                 _T(" ORDER BY hrl_id "),
                 pMF->m_szDept, szWhere);
    _debug(_T("%s"), szSQL);
    m_wndRoom.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndRoom.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                           NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*int CHMSOnlineListView::OnRoomAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
     return 0;
} */
/*int CHMSOnlineListView::OnDocumentNoChange(){
    return 0;
} */
/*int CHMSOnlineListView::OnDocumentNoSetfocus(){
    return 0;
} */
/*int CHMSOnlineListView::OnDocumentNoKillfocus(){
    return 0;
} */
int CHMSOnlineListView::OnDocumentNoCheckValue()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString tmpStr, szDate;
    tmpStr.Format(_T("%ld"), m_nDocumentNo);
    if (tmpStr.GetLength() < 8 && m_nDocumentNo > 0)
    {
        szDate = pMF->GetSysDate(ddmmyyyy);
        tmpStr.Format(_T("%d%.7ld"), ToLong(szDate.Right(2)), m_nDocumentNo);
        m_nDocumentNo = ToLong(tmpStr);
        UpdateData(false);
    }
    m_wndDocumentNo.SetSel(0, 8);
    //OnPatientListLoadData();
    OnQMSPatientListLoadData();
    if (m_nDocumentNo == 0)
        return 0;
    return 1;
}
/*int CHMSOnlineListView::OnPatientNameChange(){
    return 0;
} */
/*int CHMSOnlineListView::OnPatientNameSetfocus(){
    return 0;
} */
/*int CHMSOnlineListView::OnPatientNameKillfocus(){
    return 0;
} */
int CHMSOnlineListView::OnPatientNameCheckValue()
{
    OnQMSPatientListLoadData();
    //OnPatientListLoadData();
    //	if(m_szPatientName.IsEmpty())
    //		return 0;
    return 1;
}
int CHMSOnlineListView::OnWaitingSelect()
{
    OnQMSPatientListLoadData();
    //OnPatientListLoadData();
    return 0;
}
int CHMSOnlineListView::OnExaminedSelect()
{
    OnQMSPatientListLoadData();
    //OnPatientListLoadData();
    return 0;
}
int CHMSOnlineListView::OnTerminatedSelect()
{
    OnQMSPatientListLoadData();
    //OnPatientListLoadData();
    return 0;
}

int CHMSOnlineListView::OnLoadSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    //OnPatientListLoadData();
    OnQMSPatientListLoadData();
    return 0;
}

int CHMSOnlineListView::OnLoadSubSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRect rect;
    m_wndLoad.GetWindowRect(&rect);
    rect.right -= 325;
    //	m_wndPatientList.CreateFilterPopup(rect.right, rect.bottom);

    return 0;
}
int CHMSOnlineListView::OnPatientListDblClick()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    int nSel = m_wndPatientList.GetCurSel();
    if (nSel < 0)
        return -1;
    long nDocNo = ToLong(m_wndPatientList.GetItemText(nSel, 0));

    if (nDocNo > 0)
    {
        ShowMessageBox(
            _T("Bệnh nhân đã được tiếp đón rồi. Vui lòng chọn bệnh nhân khác!"),
            MB_OK | MB_ICONWARNING);
        return -1;
    }

    long nPatientNo = ToLong(m_wndPatientList.GetItemText(nSel, 15));
    pMF->m_wndRegistration.m_nQMSidx = str2int(m_wndPatientList.GetItemText(nSel, 14));
    //_msg(L"%ld", nDocNo);
    if (nPatientNo <= 0)
    {
        pMF->m_wndRegistration.SetMode(VM_ADDPAT);
        
    }
    else
    {
        pMF->m_wndRegistration.SetMode(VM_ADDDOC);
    }
    if (!m_wndPatientList.GetItemText(nSel, 12).IsEmpty())
        pMF->m_wndRegistration.OnCardNoButtonSelect();
  

    pMF->SetActivePane(0);

    return 0;
}
int CHMSOnlineListView::OnPatientListSelectChange(int nOldItem, int nNewItem)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    // pMF->m_nDocumentNo = str2long(m_wndPatientList.GetItemText(nNewItem, 0));
    
    UpdateData(false);
    return 0;
}
int CHMSOnlineListView::OnPatientListDeleteItem()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSOnlineListView::OnPatientListSetEmergency()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

    return 0;
}
int CHMSOnlineListView::OnPatientListSetPriority()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
int CHMSOnlineListView::OnPatientListLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    UpdateData(true);
    if (!m_szRoomKey.IsEmpty())
        szWhere.Format(_T(" AND he_roomid=%ld "), ToLong(m_szRoomKey));
    if (m_nDocumentNo > 0)
    {
        szWhere.AppendFormat(_T(" AND hd_docno=%ld "), m_nDocumentNo);
        m_szPatientName.Empty();
        m_nWaiting = -1;
    }
    else if (!m_szPatientName.IsEmpty())
    {
        //	CString tmpStr;
        //	InitCap(m_szPatientName, tmpStr);
        //	szWhere.AppendFormat(_T(" AND lower(hp_surname||' '||hp_midname||'
        //'||hp_firstname) like(chr(37)||lower('%s')||chr(37)) "), tmpStr);
        m_nDocumentNo = 0;
        m_nWaiting = -1;
    }
    /*
        if(m_nWaiting == 0){
            szWhere.AppendFormat(_T(" AND hd_status='O' "));
        }
        else if(m_nWaiting == 1){
            szWhere.AppendFormat(_T(" AND hd_status='P' "));
        }
        else if(m_nWaiting == 2){
            szWhere.AppendFormat(_T(" AND hd_status='T' "));
        }
    */
    if (m_bKhamNhanVienLabel)
        szWhere.Format(_T(" AND staff108='Y'"));

    if (!m_szCIC.IsEmpty())
    {
        szWhere.Format(_T(" AND CIC = '%s'"), m_szCIC);
    }

    if (_filter_pregnancy)
    {
        szSQL.Format(
            _T(" SELECT DISTINCT docno,")
            _T("   patientno,")
            _T("   patientname,")
            _T("   age,")
            _T("   sex,")
            _T("   admitdate,")
            _T("   address,")
            _T("   detail_address,")
            _T("   status,")
            _T("   createdby,")
            _T("   object,")
            _T("   emergency, contacttel, first_room ")
            _T(" FROM")
            _T("   (SELECT hp_patientno AS patientno,")
            _T("     hd_docno           AS docno,")
            _T("	 he_deptid			AS deptid, ")
            _T("	 he_roomid, ")
            _T("                   First_value (Get_roomname(he_deptid, ")
            _T("he_roomid))")
            _T("                     OVER (")
            _T("                       PARTITION BY he_docno")
            _T("                       ORDER BY he_receptidx ) AS first_room,")
            _T("     trim(hp_surname")
            _T("     ||' '")
            _T("     ||hp_midname")
            _T("     ||' '")
            _T("     ||hp_firstname)                                          ")
            _T("   AS patientname,")
            _T("     hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS ")
            _T("age,")
            _T("     (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ")
            _T("ss_code=hp_sex")
            _T("     )                                               AS sex,")
            _T("     hd_admitdate                                    AS ")
            _T("admitdate,")
            _T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS ")
            _T("address,")
            _T("     nvl(hd_dtladdr, hp_dtladdr) as detail_address,")
            _T("     hd_status    AS status,")
            _T("     hd_emergency AS emergency,")
            _T("     hd_createdby AS createdby,")
            _T("	hd_suggestion, hd_outpatient, ")
            _T("	NVL(HD_108staff, 'N') as  staff108, ")
            _T("     (SELECT DISTINCT ho_desc FROM hms_object WHERE ")
            _T("ho_id=hd_object")
            _T("     ) AS object, ")
            _T(" hd_contacttel as contacttel ")
            _T("   FROM hms_patient")
            _T("   LEFT JOIN hms_doc")
            _T("   ON(hd_patientno=hp_patientno)")
            _T("   LEFT JOIN hms_exam")
            _T("   ON(he_docno    =hd_docno)")
            _T(" LEFT JOIN hms_pregnancy on(hp_docno = hd_docno) ")
            _T(" WHERE hp_docno > 0 ")
            _T("   ) tbl")
            _T("   WHERE deptid='%s'  ")
            _T("   AND admitdate BETWEEN TO_TIMESTAMP('%s %s', 'YYYY-MM-DD ")
            _T("HH24:MI') AND TO_TIMESTAMP('%s %s', 'YYYY-MM-DD HH24:MI') %s")
            _T(" ORDER BY admitdate, docno,status"),
            pMF->m_szDept, m_szFromDate, m_szFromTime, m_szToDate, m_szToTime,
            szWhere);

        //_msg(_T("Vào đây 1"));
    }
    else if (m_bXnnguoinha)
    {
        if (_filter_outpatient)
        {
            szWhere.AppendFormat(
                _T(" and hd_outpatient='Y' and hd_suggestion <> 'D' "));
        }
        CString szOracleLimit, szPostgreSQLLimit;

        szSQL.Format(
            _T(" SELECT DISTINCT docno,")
            _T("   patientno, CIC,")
            _T("   patientname,")
            _T("   age,")
            _T("   sex,")
            _T("   admitdate,")
            _T("   address,")
            _T("   detail_address,")
            _T("   status,")
            _T("   createdby,")
            _T("   object,")
            _T("   emergency, contacttel, relativeid, first_room ")
            _T(" FROM")
            _T("   (SELECT hp_patientno AS patientno, hp_sin as CIC,")
            _T("     hd_docno           AS docno,")
            _T("	 he_deptid			AS deptid, ")
            _T("	 he_roomid, ")
            _T("                   First_value (Get_roomname(he_deptid, ")
            _T("he_roomid))")
            _T("                     OVER (")
            _T("                       PARTITION BY he_docno")
            _T("                       ORDER BY he_receptidx ) AS first_room,")
            _T("     trim(hp_surname")
            _T("     ||' '")
            _T("     ||hp_midname")
            _T("     ||' '")
            _T("     ||hp_firstname)                                          ")
            _T("   AS patientname,")
            _T("     hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS ")
            _T("age,")
            _T("     (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ")
            _T("ss_code=hp_sex")
            _T("     )                                               AS sex,")
            _T("     hpc_orderdate                                   AS ")
            _T("admitdate,")
            _T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS ")
            _T("address,")
            _T("     nvl(hd_dtladdr, hp_dtladdr) as detail_address,")
            _T("     hd_status    AS status,")
            _T("     hd_emergency AS emergency,")
            _T("     HPC_CREATEDBY AS createdby,")
            _T("	hd_suggestion, hd_outpatient, ")
            _T("	NVL(HD_108staff, 'N') as  staff108, ")
            _T("     (SELECT DISTINCT ho_desc FROM hms_object WHERE ")
            _T("ho_id=hd_object")
            _T("     ) AS object, hd_contacttel as contacttel, ")
            _T("HPC_RELATIVE_ID as relativeid ")
            _T("   FROM hms_patient")
            _T("   LEFT JOIN hms_doc")
            _T("   ON(hd_patientno=hp_patientno)")
            _T("   LEFT JOIN hms_exam")
            _T("   ON(he_docno    =hd_docno)")
            _T("   LEFT JOIN hms_testorder ON (hd_docno=hpc_docno)")
            _T("   ) tbl")
            _T("   WHERE relativeid > 0 AND createdby = '%s' ")
            _T("   AND admitdate BETWEEN TO_TIMESTAMP('%s %s', 'YYYY-MM-DD ")
            _T("HH24:MI') AND TO_TIMESTAMP('%s %s', 'YYYY-MM-DD HH24:MI') %s")
            _T(" ORDER BY admitdate, docno,status"),
            pMF->GetCurrentUser(), m_szFromDate, m_szFromTime, m_szToDate,
            m_szToTime, szWhere);
        //_msg(_T("Vào xn người nhà"));
    }
    else
    {
        if (_filter_outpatient)
        {
            szWhere.AppendFormat(
                _T(" and hd_outpatient='Y' and hd_suggestion <> 'D' "));
        }
        CString szOracleLimit, szPostgreSQLLimit;

        szSQL.Format(
            _T(" SELECT DISTINCT docno,")
            _T("   patientno, CIC,")
            _T("   patientname,")
            _T("   age,")
            _T("   sex,")
            _T("   admitdate,")
            _T("   address,")
            _T("   detail_address,")
            _T("   status,")
            _T("   createdby,")
            _T("   object,")
            _T("   emergency, contacttel, first_room ")
            _T(" FROM")
            _T("   (SELECT hp_patientno AS patientno, hp_sin as CIC,")
            _T("     hd_docno           AS docno,")
            _T("	 he_deptid			AS deptid, ")
            _T("	 he_roomid, ")
            _T("                   First_value (Get_roomname(he_deptid, ")
            _T("he_roomid))")
            _T("                     OVER (")
            _T("                       PARTITION BY he_docno")
            _T("                       ORDER BY he_receptidx ) AS first_room,")
            _T("     trim(hp_surname")
            _T("     ||' '")
            _T("     ||hp_midname")
            _T("     ||' '")
            _T("     ||hp_firstname)                                          ")
            _T("   AS patientname,")
            _T("     hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS ")
            _T("age,")
            _T("     (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ")
            _T("ss_code=hp_sex")
            _T("     )                                               AS sex,")
            _T("     hd_admitdate                                    AS ")
            _T("admitdate,")
            _T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS ")
            _T("address,")
            _T("     nvl(hd_dtladdr, hp_dtladdr) as detail_address,")
            _T("     hd_status    AS status,")
            _T("     hd_emergency AS emergency,")
            _T("     hd_createdby AS createdby,")
            _T("	hd_suggestion, hd_outpatient, ")
            _T("	NVL(HD_108staff, 'N') as  staff108, ")
            _T("     (SELECT ho_desc FROM hms_object WHERE ho_id=hd_object")
            _T("     ) AS object, hd_contacttel as contacttel ")
            _T("   FROM hms_patient")
            _T("   LEFT JOIN hms_doc")
            _T("   ON(hd_patientno=hp_patientno)")
            _T("   LEFT JOIN hms_exam")
            _T("   ON(he_docno    =hd_docno)")
            _T("   WHERE hd_admitdate BETWEEN TO_TIMESTAMP('%s %s', ")
            _T("'YYYY/MM/DD HH24:MI:SS') ")
            _T("		AND TO_TIMESTAMP('%s %s', 'YYYY/MM/DD HH24:MI:SS')) ")
            _T("tbl")
            _T("   WHERE deptid='%s' ")
            _T("   %s")
            _T(" ORDER BY admitdate, docno,status"),
            m_szFromDate, m_szFromTime, m_szToDate, m_szToTime, pMF->m_szDept,
            szWhere);
    }
    //_msg(_T("%s"), szSQL);
    //_flog(_T("RECEPTION:CHMSOnlineListView:OnPatientListLoadData[%s]"),
    // szSQL);

    m_wndPatientList.BeginLoad();
    int nCount = 0;
    CString szEmergency, tmpStr;
    CString szFirstName, szMidName, szSurName, szSearchName;
    CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
    CString szAddress;
    CString szCIC;

    if (!m_szPatientName.IsEmpty())
    {
        StringLower(m_szPatientName, szSearchName);
        SplitName(szSearchName, szSurName, szMidName, szFirstName);
    }
    nCount = rs.ExecSQL(szSQL);

    CString szSearchPhone;
    CString szContactTel;

    szSearchPhone.Empty();
    if (!m_szPatientName.IsEmpty() && IsDigit(m_szPatientName))
    {
        szSearchPhone = m_szPatientName;
    }
    while (!rs.IsEOF())
    {

        rs.GetValue(_T("patientname"), tmpStr);
        if (szSearchPhone.IsEmpty() && !m_szPatientName.IsEmpty())
        {

            CString szPatientName;

            StringLower(tmpStr, szPatientName);

            SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
            GetShortName(szPatientName, szShortName);
            if (szShortName != m_szPatientName)
            {
                if (!szFirstName.IsEmpty() && szFirstName != szFirstName2)
                {
                    rs.MoveNext();
                    continue;
                }
            }

            if (!szSurName.IsEmpty() && szSurName != szSurName2)
            {
                rs.MoveNext();
                continue;
            }
            if (!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1)
            {
                rs.MoveNext();
                continue;
            }
        }

        if (!szSearchPhone.IsEmpty())
        {
            rs.GetValue(_T("contacttel"), szContactTel);
            if (szContactTel.Find(szSearchPhone) == -1)
            {
                rs.MoveNext();
                continue;
            }
        }

        rs.GetValue(_T("emergency"), szEmergency);

        rs.GetValue(_T("detail_address"), szAddress);
        if (!szAddress.IsEmpty())
            szAddress += _T(" - ");
        szAddress.AppendFormat(_T("%s"), rs.GetValue(_T("address")));

        int nItem = m_wndPatientList.AddItems(
            rs.GetValue(_T("docno")), rs.GetValue(_T("patientname")),
            rs.GetValue(_T("age")), rs.GetValue(_T("sex")), szAddress,
            rs.GetValue(_T("contacttel")), rs.GetValue(_T("CIC")),
            rs.GetValue(L"first_room"), rs.GetValue(_T("admitdate")),
            rs.GetValue(_T("status")), rs.GetValue(_T("object")),
            rs.GetValue(_T("createdby")), NULL);

        if (szEmergency == _T("Y"))
        {
            m_wndPatientList.SetItemBkColor(nItem, RGB(128, 0, 0), FALSE);
            m_wndPatientList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
        }

        rs.MoveNext();
    }

    m_wndPatientList.EndLoad();
    return nCount;
}

void CHMSOnlineListView::OnKhamNhanVienLabelSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
int CHMSOnlineListView::OnAddHMSOnlineListView()
{
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (!pMF->SetStartWork(this, _T("Add HMSOnlineListView")))
        return -1;
    SetMode(VM_ADD);
    return 0;
}
int CHMSOnlineListView::OnEditHMSOnlineListView()
{
    if (GetMode() != VM_VIEW)
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    if (!pMF->SetStartWork(this, _T("Edit HMSOnlineListView")))
        return -1;
    SetMode(VM_EDIT);
    return 0;
}
int CHMSOnlineListView::OnDeleteHMSOnlineListView()
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
        OnCancelHMSOnlineListView();
    }
    return 0;
}
int CHMSOnlineListView::OnSaveHMSOnlineListView()
{
    if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
        return -1;
    if (!IsValidateData())
        return -1;
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    if (GetMode() == VM_ADD)
    {
        //	szSQL = m_tblTbl.GetInsertSQL();
    }
    else if (GetMode() == VM_EDIT)
    {
        CString szWhere;
        szWhere.Format(_T(" WHERE"));
        // 		szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
        szSQL += szWhere;
    }
    _fmsg(_T("%s"), szSQL);
    int ret = pMF->ExecSQL(szSQL);
    if (ret > 0)
    {
        // OnHMSOnlineListViewListLoadData();
        SetMode(VM_VIEW);
        pMF->FinishWork(this);
    }
    else
    {
    }
    return ret;
    return 0;
}
int CHMSOnlineListView::OnCancelHMSOnlineListView()
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
    pMF->FinishWork(this);
    return 0;
}
int CHMSOnlineListView::OnHMSOnlineListViewListLoadData() { return 0; }

BOOL CHMSOnlineListView::PreTranslateMessage(MSG *pMsg)
{
    if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN)
    {
        if (pMsg->hwnd == m_wndPatientList.GetSafeHwnd())
        {
            OnPatientListDblClick();
            return TRUE;
        }
    }
    /*
        while(GetSafeHwnd())
                {
                    long mfRequest = m_MF5AXCTrl.mfRequest();
                    if(mfRequest > 0)
                    {
                    //	if(m_MF5AXCTrl.mfAnticollision())
                        {
                            CString szCardID =
       m_MF5AXCTrl.get_mfAnticollisionHex(); if(!szCardID.IsEmpty())
                            {
                                _debug(_T("\r\nCardID=%s: %ld"), szCardID,
       mfRequest);
                            }

                        }
                    }
                }
    */
    return CGuiView::PreTranslateMessage(pMsg);
}

void CHMSOnlineListView::RefreshData() { 
    OnQMSPatientListLoadData();
    //OnPatientListLoadData(); 
}

void CHMSOnlineListView::OnResizeLayout()
{
    AddResize(&m_wndSearchInformation, 100, 100);
    AddResize(&m_wndPatientInformation, 100, 100);
    AddResize(&m_wndPatientList, 100, 100);
    /*AddLayoutControls(WS_RESIZEX, 0, 0, 100, 0, &m_wndSearchInformation,
    NULL); AddLayoutControls(WS_RESIZEX, 0, 0, 50, 0,&m_wndRoom,NULL);
    AddLayoutControls(WS_REPOSX|WS_RESIZEX, 50, 0, 10,
    0,&m_wndPatientNameLabel,NULL); AddLayoutControls(WS_REPOSX|WS_RESIZEX, 50,
    0, 40, 0,&m_wndPatientName,NULL); AddLayoutControls(WS_REPOSX, 100, 0, 0,
    0,&m_wndLoad,NULL); AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 100,
    100,&m_wndPatientInformation, &m_wndPatientList,NULL);
    */
}

void CHMSOnlineListView::InVongDeoTay()
{
    CPrintForms printer;
    printer.InVongDeoTay();
}
int CHMSOnlineListView::OnQMSPatientListLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    UpdateData(true);

    // Example: filter by department if needed
    //if (!pMF->m_szDept.IsEmpty())
        //szWhere.Format(_T(" AND QMS_DEPTID = '%s' "), pMF->m_szDept);

    // Example: filter by date range if needed
    if (!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
        szWhere.AppendFormat(_T(" AND QMS_APPOINTMENT_DATE BETWEEN TO_DATE('%s', 'YYYY-MM-DD') AND TO_DATE('%s', 'YYYY-MM-DD') "), m_szFromDate, m_szToDate);

    szSQL.Format(
        _T("SELECT QMS_DOCNO, QMS_PATIENTNAME, ") \
        _T("       TO_CHAR(FLOOR(MONTHS_BETWEEN(SYSDATE, QMS_BIRTHDATE)/12)) AS AGE, ") \
        _T("       QMS_SEX, ") \
        _T("       QMS_ADDRESS, ") \
        _T("       QMS_CONTACT, ") \
        _T("       QMS_IDCARD, ") \
        _T("       (SELECT hrl_name FROM hms_roomlist WHERE hrl_id = QMS_ROOMID and hrl_deptid = '%s' ) as room, ") \
        _T("       QMS_APPOINTMENT_DATE, ") \
        _T(" CASE WHEN QMS_SESSION = 'AM' THEN 'Sáng' ") \
        _T(" WHEN QMS_SESSION = 'PM' THEN 'Chiều' ELSE '' END AS buoi,") \
        _T("       QMS_TRANGTHAI, QMS_REASON || ' ' || QMS_COMMENT AS note,") \
        _T("       QMS_TYPE, QMS_MAHUONG,") \
        _T("       QMS_CREATEDBY, QMS_IDX, QMS_PATIENTNO ") \
        _T("FROM QMS_PATIENT WHERE 1=1 AND QMS_DEPTID = '%s' %s ") \
        _T("ORDER BY QMS_APPOINTMENT_DATE DESC, QMS_DOCNO DESC"), pMF->m_szDept,pMF->m_szDept, szWhere);

    m_wndPatientList.BeginLoad();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);

    while (!rs.IsEOF())
    {
        int nItem = m_wndPatientList.AddItems(
            rs.GetValue(_T("QMS_DOCNO")),
            rs.GetValue(_T("QMS_PATIENTNAME")),
            rs.GetValue(_T("AGE")),
            rs.GetValue(_T("QMS_SEX")),
            rs.GetValue(_T("QMS_ADDRESS")),
            rs.GetValue(_T("QMS_CONTACT")),
            rs.GetValue(_T("QMS_IDCARD")),
            rs.GetValue(_T("room")),
            rs.GetValue(_T("QMS_APPOINTMENT_DATE")),
            rs.GetValue(_T("buoi")),
            rs.GetValue(_T("note")),
            rs.GetValue(_T("QMS_TRANGTHAI")),
            rs.GetValue(_T("QMS_MAHUONG")),
            rs.GetValue(_T("QMS_CREATEDBY")),
            rs.GetValue(_T("QMS_IDX")), 
            rs.GetValue(_T("QMS_PATIENTNO")),
            NULL);

        // Optional: highlight emergency or special status
        CString szStatus;
        rs.GetValue(_T("QMS_TRANGTHAI"), szStatus);
        if (szStatus == _T("Y")) {
            m_wndPatientList.SetItemBkColor(nItem, RGB(128, 0, 0), FALSE);
            m_wndPatientList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
        }

        rs.MoveNext();
    }

    m_wndPatientList.EndLoad();
    return nCount;
}