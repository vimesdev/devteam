#include "TMCollectingDataDialog.h"
//#include "stdafx.h"
#include "HMSMainFrame.h"
#include "HMSConfirmDialog.h"
#include "HMSSelectionListDialog.h"
#include "GuiInputDataDialog.h"
#include "HMSAddSampleCommentDialog.h"
#include "HMSAddRelativeInforDialog.h"
#include "HMSAddSampleCommentEXDialog.h"
#include "HMSReportForms/PrintForms.h"
#include ".\TMCollectingDataDialog.h"
#include "StringToken.h"
#include <set>

static long _OnParaclinicalListLoadDataFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnParaclinicalListLoadData();
}
static void _OnParaclinicalListDblClickFnc(CWnd* pWnd) {
	((CTMCollectingDataDialog*)pWnd)->OnParaclinicalListDblClick();
}
static void _OnParaclinicalListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CTMCollectingDataDialog*)pWnd)->OnParaclinicalListSelectChange(nOldItem, nNewItem);
}
static int _OnParaclinicalListDeleteItemFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnParaclinicalListDeleteItem();
}

static int _OnParaclinicalListSelectCallbackFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CTMCollectingDataDialog*)pWnd)->OnParaclinicalListSelectChange(nOldItem, nNewItem);
	return 0;
}
static void _OnPerformDepartmentSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CTMCollectingDataDialog*)pWnd)->OnPerformDepartmentSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnPerformDepartmentSelendokFnc(CWnd* pWnd) {
	((CTMCollectingDataDialog*)pWnd)->OnPerformDepartmentSelendok();
}
/*static void _OnPerformDepartmentSetfocusFnc(CWnd *pWnd){
	((CTMCollectingDataDialog *)pWnd)->OnPerformDepartmentKillfocus();
}*/
/*static void _OnPerformDepartmentKillfocusFnc(CWnd *pWnd){
	((CTMCollectingDataDialog *)pWnd)->OnPerformDepartmentKillfocus();
}*/
static long _OnPerformDepartmentLoadDataFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnPerformDepartmentLoadData();
}
/*static void _OnPerformDepartmentAddNewFnc(CWnd *pWnd){
	((CTMCollectingDataDialog *)pWnd)->OnPerformDepartmentAddNew();
}*/
static long _OnTestListLoadDataFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnTestListLoadData();
}
static void _OnTestListDblClickFnc(CWnd* pWnd) {
	((CTMCollectingDataDialog*)pWnd)->OnTestListDblClick();
}

static void _OnTestListClickFnc(CWnd* pWnd) {
	((CTMCollectingDataDialog*)pWnd)->OnTestListClick();
}

static void _OnTestListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CTMCollectingDataDialog*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
}
static int _OnTestListDeleteItemFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnTestListDeleteItem();
}
static long _OnTestListItemLoadDataFnc(CWnd *pWnd)
{
    return ((CTMCollectingDataDialog *)pWnd)->OnTestListItemLoadData();
}
static void _OnTestListItemDblClickFnc(CWnd *pWnd)
{
    ((CTMCollectingDataDialog *)pWnd)->OnTestListItemDblClick();
}

static void _OnTestListItemClickFnc(CWnd *pWnd)
{
    ((CTMCollectingDataDialog *)pWnd)->OnTestListItemClick();
}

static void _OnTestListItemSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
    ((CTMCollectingDataDialog *)pWnd)->OnTestListItemSelectChange(nOldItem, nNewItem);
}
static int _OnTestListItemDeleteItemFnc(CWnd *pWnd)
{
    return ((CTMCollectingDataDialog *)pWnd)->OnTestListItemDeleteItem();
}
static void _OnSearchChangeFnc(CWnd* pWnd) {
	((CTMCollectingDataDialog*)pWnd)->OnSearchChange();
}
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CTMCollectingDataDialog *)pWnd)->OnSearchSetfocus();} */
	/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
		((CTMCollectingDataDialog *)pWnd)->OnSearchKillfocus();
	} */
static int _OnSearchCheckValueFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnSearchCheckValue();
}
static void _OnAddSelectFnc(CWnd* pWnd) {
	CTMCollectingDataDialog* pVw = (CTMCollectingDataDialog*)pWnd;
	pVw->OnAddSelect();
}
static int _OnSelectListAddDescItemFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnSelectListAddDescItem();
}
static long _OnSelectListLoadDataFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnSelectListLoadData();
}
static void _OnSelectListDblClickFnc(CWnd* pWnd) {
	((CTMCollectingDataDialog*)pWnd)->OnSelectListDblClick();
}
static void _OnSelectListSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CTMCollectingDataDialog*)pWnd)->OnSelectListSelectChange(nOldItem, nNewItem);
}
static int _OnSelectListDeleteItemFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnSelectListDeleteItem();
}
static void _OnRemoveSelectFnc(CWnd* pWnd) {
	CTMCollectingDataDialog* pVw = (CTMCollectingDataDialog*)pWnd;
	pVw->OnRemoveSelect();
}

static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CTMCollectingDataDialog *)pWnd)->OnFromDateCheckValue();
}
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CTMCollectingDataDialog *)pWnd)->OnToDateCheckValue();
}

static void _OnAllListSelectFnc(CWnd* pWnd) {
	CTMCollectingDataDialog* pVw = (CTMCollectingDataDialog*)pWnd;
	pVw->OnAllListSelect();
}

static void _OnApplySelectFnc(CWnd* pWnd) {
	CTMCollectingDataDialog* pVw = (CTMCollectingDataDialog*)pWnd;
	pVw->OnApplySelect();
}
static void _OnCloseSelectFnc(CWnd* pWnd) {
	CTMCollectingDataDialog* pVw = (CTMCollectingDataDialog*)pWnd;
	pVw->OnCloseSelect();
}


static void _OnGroupSelectFnc(CWnd* pWnd) {
	CTMCollectingDataDialog* pVw = (CTMCollectingDataDialog*)pWnd;
	pVw->OnGroupSelect();
}
static int _OnAddTMCollectingDataDialogFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnAddTMCollectingDataDialog();
}
static int _OnEditTMCollectingDataDialogFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnEditTMCollectingDataDialog();
}
static int _OnDeleteTMCollectingDataDialogFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnDeleteTMCollectingDataDialog();
}
static int _OnSaveTMCollectingDataDialogFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnSaveTMCollectingDataDialog();
}
static int _OnCancelTMCollectingDataDialogFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnCancelTMCollectingDataDialog();
}
static long _OnPaySourceLoadDataFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnPaySourceLoadData();
}

static long _OnTestTypeLoadDataFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnTestTypeLoadData();
}
static int _OnPerformRoomUsageSelectFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnPerformRoomUsageSelect();
}

static int _OnExportToExcelIDFnc(CWnd* pWnd) {
	return ((CTMCollectingDataDialog*)pWnd)->OnExportToExcelID();
}

CTMCollectingDataDialog::CTMCollectingDataDialog(CWnd* pParent) :
	CGuiDialog(pParent)
{

	m_nDlgWidth = 1019;
	m_nDlgHeight = 755;
	SetDefaultValues();
	m_bIsC14 = false;
	m_bTestOnly = false;
	m_nTreatIdx = 0;
	m_nRelativeID = 0;
	m_bOrderDateEnable = FALSE;
	m_bHasApply = true;
}
CTMCollectingDataDialog::~CTMCollectingDataDialog() {
	m_arItems.RemoveAll();
	m_arGroup.RemoveAll();
    m_arSubItems.RemoveAll();
	m_arEditItems.RemoveAll();
	m_szSample.Empty();
	m_szNote.Empty();
	m_szDiagnosis.Empty();
}
void CTMCollectingDataDialog::OnCreateComponents()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRect rect;
    GetDesktopWindow()->GetClientRect(&rect);
    pMF->GetClientRect(&rect);
    float scale = 1.0;
    if (rect.Width() > 1024)
    {
        scale = rect.Width() / 1024.0;
    }
    scale = min(scale, 1.25);
    m_scale = scale;


	m_wndParaclinicalList.Create(this, 5, 5, 240 * scale, 610);
    m_wndTestList.Create(this, 245 * scale, 5, 500 * scale, 575);
    m_wndSelectList.Create(this, 505 * scale, 5, 760 * scale, 575);
    m_wndTestListItem.Create(this, 765 * scale, 5, 1020 * scale, 575);
    m_wndSearchLabel.Create(this, _T("&Search"), 245 * scale, 580, 325 * scale, 605);
    m_wndSearch.Create(this, 330 * scale, 580, 630 * scale, 605);

	m_wndFromDateLabel.Create(this, _T("From Date"), 245 * scale, 610, 325 * scale, 635);
    m_wndFromDate.Create(this, 330 * scale, 610, 450 * scale, 635);
    m_wndToDateLabel.Create(this, _T("To Date"), 455 * scale, 610, 535 * scale,635);
    m_wndToDate.Create(this, 540 * scale, 610, 660 * scale, 635);

	//	m_wndOrderDateLabel.Create(this, _T("Date"), 635, 580, 700, 605);
	//	m_wndOrderDate.Create(this,700, 580, 825, 605); 
	//	m_wndAutoPrint.Create(this, _T("Auto Print"), 830, 580, 930, 605);

	
	m_wndAllList.Create(this, _T("All list of fees"), 5, 615, 240, 635);


    m_wndEmergencyLabel.Create(this, _T("Loại xét nghiệm"), 635 * scale, 580,
                               785 * scale, 605);
    m_wndTestType.Create(this, 790 * scale, 580, 1010 * scale, 605);
   
	//m_wndAdd.Create(this, _T("&Add >>"), 635, 610, 715, 635);
	//m_wndRemove.Create(this, _T("<< &Remove"), 720, 610, 800, 635);
    
	m_wndApply.Create(this, _T("&Export"), 915, 610, 1010, 635);
	m_wndClose.Create(this, _T("&Close"), 1015, 610, 1110, 635);

	m_wndParaclinicalList.SetAutoItemHeight(true);

}
void CTMCollectingDataDialog::OnInitializeComponents() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();

	//	m_wndPerformDepartment.SetCheckValue(true);
	//	m_wndPerformDepartment.LimitText(35);
	//	m_wndPerformDepartment.EnableWindow(false);
	m_wndSearch.SetLimitText(256);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);
	//	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));

	m_wndTestList.ShowTooltip(true);

	m_wndTestType.SetCheckValue(true);
	//	m_wndPerformDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	//	m_wndPerformDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndTestList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 35);
	m_wndTestList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250 * m_scale);
    m_wndTestList.InsertColumn(2, _T("Price"), CFMT_NUMBER, 0);
    m_wndTestList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 0);
    m_wndTestList.InsertColumn(4, _T(""), CFMT_TEXT, 0); // Group
    m_wndTestList.InsertColumn(5, _T(""), CFMT_TEXT, 0); // SubItem
    m_wndTestList.SetCheckBox(true);

	m_wndTestType.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndTestType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndTestListItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
    m_wndTestListItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 250 * m_scale);
    m_wndTestListItem.InsertColumn(2, _T("GroupID"), CFMT_TEXT, 0);
    m_wndTestListItem.SetCheckBox(true);
	//m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	//m_wndTestList.SetCheckBox(true;
//	m_wndTestList.SetFractionDigits(0);	
	//m_wndTestList.SetExtendedStyle(LVS_EX_ONECLICKACTIVATE | LVS_EX_UNDERLINEHOT | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_LABELTIP);

	//m_wndTestList.SetExtendedStyle(LVS_EX_UNDERLINEHOT|LVS_EX_FULLROWSELECT|LVS_EX_LABELTIP| LVS_EX_GRIDLINES);
	m_wndSelectList.InsertColumn(0, _T("Index"), CFMT_TEXT, 35);
	m_wndSelectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 210 * m_scale);
	m_wndSelectList.InsertColumn(2, _T("Price"), CFMT_NUMBER, 75);
	m_wndSelectList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 30);
	m_wndSelectList.InsertColumn(4, _T(""), CFMT_TEXT, 0);	//Group
	m_wndSelectList.InsertColumn(5, _T("SI"), CFMT_TEXT, 30); //SubItem
	m_wndSelectList.InsertColumn(6, _T(""), CFMT_TEXT, 0); //Note của TTXN
	m_wndSelectList.InsertColumn(7, _T(""), CFMT_TEXT, 0); //Note của bác sĩ lâm sàng
	m_wndSelectList.InsertColumn(8, _T(""), CFMT_TEXT, 0); //Sample
	m_wndSelectList.InsertColumn(9, _T(""), CFMT_TEXT, 0); //Diagnosis
    m_wndSelectList.SetCheckBox(true);
	//	m_wndSelectList.InsertColumn(2, _T("ID"), CFMT_TEXT, 0);
	;
	//	m_wndSelectList.InsertColumn(5, _T("Qty"), CFMT_NUMBER, 30);
	//	m_wndSelectList.InsertColumn(6, _T(""), CFMT_TEXT, 0);//note

	//	m_wndSelectList.SetCheckBox(true);
	//	m_wndSelectList.ModifyStyle(0, LVS_NOSORTHEADER);
	//	m_wndSelectList.SetFractionDigits(0);
	m_wndAllList.ModifyStyle(WS_TABSTOP, 0);
}
void CTMCollectingDataDialog::OnSetWindowEvents() {
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	m_wndParaclinicalList.SetCallback(_OnParaclinicalListSelectCallbackFnc);

	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.SetEvent(WE_CLICK, _OnTestListClickFnc);



	//m_wndTestList.SetEvent(LVS_EX_TRACKSELECT, _OnTestListDblClickFnc);

	//m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	//m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	//m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSelectList.SetEvent(WE_SELCHANGE, _OnSelectListSelectChangeFnc);
	m_wndSelectList.SetEvent(WE_LOADDATA, _OnSelectListLoadDataFnc);
	m_wndSelectList.SetEvent(WE_DBLCLICK, _OnSelectListDblClickFnc);
	m_wndSelectList.SetWindowText(_T("Selected Items"));
	m_wndSelectList.AddEvent(1, _T("Desc"), _OnSelectListAddDescItemFnc, 0, VK_ADD, 0);
	m_wndSelectList.AddEvent(0, _T("-"));
	m_wndSelectList.AddEvent(2, _T("Delete Entry"), _OnSelectListDeleteItemFnc, 0, VK_DELETE, 0);

	m_wndTestType.SetEvent(WE_LOADDATA, _OnTestTypeLoadDataFnc);
	//m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);


	m_wndAllList.SetEvent(WE_CLICK, _OnAllListSelectFnc);

	m_wndGroup.SetEvent(WE_CLICK, _OnGroupSelectFnc);

	
	if (pMF->GetCurrentDepartmentID() == _T("C1.3"))
	{
		m_szTestTypeKey = _T("2");
	}
	else
		m_szTestTypeKey = _T("1");
	m_bAutoPrint = AfxGetApp()->GetProfileInt(_T("PARACLINICAL"), _T("AutoPrint"), 0);
    CString szSysDate = pMF->GetSysDate();
    m_szFromDate = szSysDate + _T("00:00");
    // m_szFromDate = m_szToDate = pMF->GetSysDate();
    m_szToDate = szSysDate + _T("23:59");
	SetMode(VM_EDIT);
	OnTMCollectingDataDialogListLoadData();

	CString szSQL;
	CString tmpStr;
	CRecord rs(&pMF->m_db);

	CString szReq, szInfertility;
	CString szInpackage;
	if (pMF->GetModuleID() == _T("EM") || pMF->GetModuleID() == _T("RM"))
	{

		szSQL.Format(_T("SELECT hd_isreq, hd_nonexam, hd_infertility FROM hms_doc WHERE hd_docno = %ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("hd_isreq"), szReq);
		rs.GetValue(_T("hd_infertility"), szInfertility);
		if (szReq == _T("Y"))
		{
			m_bIsC14 = true;
		}
		rs.GetValue(_T("hd_nonexam"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bTestOnly = true;

		//szSQL.Format(_T("SELECT he_icd10 FROM hms_exam WHERE he_docno = %ld and he_receptno=%ld"), pMF->m_nDocumentNo, pMF->m_nReceptNo);
		szSQL.Format(_T("SELECT he_icd10 FROM hms_exam WHERE he_docno = %ld and HE_RECEPTIDX=%ld"), pMF->m_nDocumentNo, pMF->m_nRefIndex);

		rs.ExecSQL(szSQL);
		//_msg(_T("%s"),szSQL);
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("he_icd10"), m_szMainIcd);
		}
		//_msg(_T("%s"),m_szMainIcd);
	}

	if (pMF->GetModuleID() == _T("SOM"))
	{
		CString szSQL;
		CString tmpStr;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT hcr_pregnancy, hcr_definpackage FROM hms_clinical_record WHERE hcr_docno = %ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("hcr_pregnancy"), szInfertility);
		rs.GetValue(_T("hcr_definpackage"), szInpackage);
		szReq = _T("Y");
	}
	else
	{
		szSQL.Format(_T("SELECT htr_mainicd FROM hms_treatment_record WHERE htr_docno = %ld and htr_idx=%ld"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("htr_mainicd"), m_szMainIcd);
		}
	}

	if (szInfertility == _T("Y"))
	{
		if (szReq == _T("Y"))
		{
			m_bOutPackage = FALSE;
		}
		else
		{
			m_bOutPackage = TRUE;

		}
		if (szInpackage == _T("Y"))
		{
			m_bOutPackage = FALSE;
		}
		//m_wndOutPackage.EnableWindow(TRUE);
		//m_wndOutPackage.ShowWindow(SW_SHOW);
	}


	m_szAdmitDate = pMF->GetAdmitDate();

	szSQL.Format(_T("SELECT hp_sex FROM hms_patient WHERE hp_patientno =%ld "), pMF->m_nPatientNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hp_sex"), m_szSex);

	GetDataToScreen();

}
void CTMCollectingDataDialog::OnDoDataExchange(CDataExchange* pDX) {
	//DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorName);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndAllList.GetDlgCtrlID(), m_bAllList);
	//DDX_TextEx(pDX, m_wndPaySource.GetDlgCtrlID(), m_szPaySourceKey);
	DDX_TextEx(pDX, m_wndTestType.GetDlgCtrlID(), m_szTestTypeKey);
}
void CTMCollectingDataDialog::GetDataToScreen() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hd_is_extins FROM hms_doc WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_is_extins"), m_szExtIns);
	if (m_szExtIns == _T("Y"))
	{
		szSQL.Format(_T("SELECT hec_extins_company_id FROM hms_extins_card WHERE hec_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("hec_extins_company_id"), m_nExtInsCompanyId);
		SetWindowTitle(_T("CHÚ Ý CÁC MỤC PHÍ MÀU VÀNG KHÔNG NẰM TRONG DANH MỤC BẢO VIỆT TRẢ. BỆNH NHÂN TỰ THANH TOÁN"));
	}

}
void CTMCollectingDataDialog::GetScreenToData() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();

}
void CTMCollectingDataDialog::SetDefaultValues() {

	m_szDoctorKey.Empty();
	m_szPerformDepartmentKey.Empty();
	m_szSearch.Empty();
	m_szOrderDate.Empty();
	m_bAutoPrint = FALSE;
	m_bOutPackage = FALSE;
	m_bAllList = FALSE;
	m_nIndexB1E = 0;

}
int CTMCollectingDataDialog::SetMode(int nMode)
{
	int nOldMode = GetMode();
	CGuiDialog::SetMode(nMode);
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szphanloaicovid;
	CRecord rs(&pMF->m_db);
	switch (nMode) {
	case VM_ADD:
		EnableControls(TRUE);
		EnableButtons(TRUE, 3, 4, -1);
		SetDefaultValues();
		break;
	case VM_EDIT:
		EnableControls(TRUE);
		EnableButtons(TRUE, 0, 1, 2, 3, 4, 5, -1);
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
	if (m_nTreatIdx > 0 || !m_bOrderDateEnable)
	{
		m_wndOrderDate.EnableWindow(FALSE);
	}

	/*if ((pMF->GetCurrentDepartmentID()).Left(5) == _T("COVID") || (pMF->GetCurrentDepartmentID()).Left(2) == _T("A4"))
	{
		m_wndPaySource.EnableWindow(true);
	}
	else
		m_wndPaySource.EnableWindow(false);*/
		//Thay đổi cơ chế phân loại bệnh covid

	szSQL.Format(_T(" SELECT NVL(HCR_PHANLOAIBENHCOVID19,'N') as phanloaicovid from HMS_CLINICAL_RECORD where hcr_docno=%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("phanloaicovid"), szphanloaicovid);
	if (szphanloaicovid == _T("01") || szphanloaicovid == _T("02"))
	{
		m_wndPaySource.EnableWindow(true);
	}
	else
		m_wndPaySource.EnableWindow(false);

	UpdateData(FALSE);
	return nOldMode;
}
void CTMCollectingDataDialog::OnParaclinicalListDblClick() {

}
void CTMCollectingDataDialog::OnParaclinicalListSelectChange(int nOldItem, int nNewItem) {
	int nSel = m_wndParaclinicalList.GetCurSel();

	if (nNewItem < 0 || nNewItem >= m_wndParaclinicalList.GetCount())
		return;
	m_szGroup = m_arGroup[nNewItem];
	_tprintf(_T("\nitem:%d|group:%s"), nNewItem, m_szGroup);
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	m_wndOrderDate.SetCheckValue(false);

	//	m_wndPerformDepartment.SetCheckValue(true);
	//	if(!IsValidateData())
	//		return;

	OnTestListLoadData();
}
int CTMCollectingDataDialog::OnParaclinicalListDeleteItem() {

	return 0;
}
long CTMCollectingDataDialog::OnParaclinicalListLoadData()
{
	/*
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		m_wndParaclinicalList.BeginLoad();
		m_wndParaclinicalList.DeleteAllItems();
		int nCount = 0;
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndParaclinicalList.AddItems(
			rs.MoveNext();
		}
		m_wndParaclinicalList.EndLoad();
		return nCount;
	*/
	return 0;
}


long CTMCollectingDataDialog::OnTestTypeLoadData()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndTestType.IsSearchKey() && !m_szTestTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s'"), m_szTestTypeKey);
	};
	m_wndTestType.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='phanloai_xetnghiem' %s ORDER BY cast(ss_code as integer) "), szWhere);
	nCount = rs.ExecSQL(szSQL);

	while (!rs.IsEOF()) {
		m_wndTestType.AddItems
		(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}


void CTMCollectingDataDialog::OnPerformDepartmentSelectChange(int nOldItemSel, int nNewItemSel) {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();

}
void CTMCollectingDataDialog::OnPerformDepartmentSelendok() {
	UpdateData(true);
	OnTMCollectingDataDialogListLoadData();
	m_wndTestList.DeleteAllItems();
}
/*void CTMCollectingDataDialog::OnPerformDepartmentSetfocus(){

}*/
/*void CTMCollectingDataDialog::OnPerformDepartmentKillfocus(){

}*/
long CTMCollectingDataDialog::OnPerformDepartmentLoadData() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndPerformDepartment.IsSearchKey() && !m_szPerformDepartmentKey.IsEmpty()) {
		szWhere.Format(_T("WHERE sd_id = '%s' "), m_szPerformDepartmentKey);
	};
	m_wndPerformDepartment.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_dept %s ORDER BY sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndPerformDepartment.AddItems(
			rs.GetValue(_T("sd_id")),
			rs.GetValue(_T("sd_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMCollectingDataDialog::OnPerformDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} */
void CTMCollectingDataDialog::OnTestListDblClick()
{
	//CHMSAddSampleCommentDialog dlg(this);
	//_tprintf(_T("\r\nDblClick"));
	//return;

	//_msg(_T("Vào đây đi?"));
	m_wndOrderDate.SetCheckValue(false);

	//	m_wndPerformDepartment.SetCheckValue(true);
	if (!IsValidateData())
		return;
	int nSel = m_wndTestList.GetCurSel();
	if (nSel < 0)
		return;

	CString szID, szOldID;
	bool bExisting = false;
	//	szID = m_wndTestList.GetItemText(nSel, 2);
	szID = (LPCTSTR)m_wndTestList.GetItemData(2);
	bExisting = false;
	for (int j = 0; j < m_arItems.GetCount(); j++) {
		PARAITEM pi = m_arItems[j];
		szOldID = pi.szID;
		if (szOldID == szID) {
			bExisting = true;
			break;
		}
	}
	if (!bExisting)
	{
		AddParaItem(szID);
		m_wndTestList.DeleteItem(nSel);
		OnSelectListLoadData();
	}

}
void CTMCollectingDataDialog::OnTestListSelectChange(int nOldItem, int nNewItem) {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	/*if(!IsValidateData())
		return;*/
    CString m_szSubItem;
    m_szSubItem = m_wndTestList.GetItemText(nNewItem, 5);
	int nSel = m_wndTestList.GetCurSel();
	if (nSel < 0)
		return;

}
int CTMCollectingDataDialog::OnTestListDeleteItem() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	return 0;
}
long CTMCollectingDataDialog::OnTestListLoadData()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szTemp;
	CString szExisting;
	szWhere.Empty();
	CString szObjectType = pMF->GetObjectType();
	UpdateData(true);
	//small chang here
	if (!m_szSearch.IsEmpty())
	{
		int end = m_szSearch.Find(_T('$'));
		if (end != -1)
		{
			// Tách chuỗi m_szSearch thành hai đoạn văn bản con
			CStringArray arrSearch;
			int start = 0;

			while (end != -1)
			{
				arrSearch.Add(m_szSearch.Mid(start, end - start));
				start = end + 1;
				end = m_szSearch.Find(_T('$'), start);
			}

			arrSearch.Add(m_szSearch.Mid(start));

			if (arrSearch.GetCount() >= 2)
			{
				CString szSearchA = arrSearch.GetAt(0);
				CString szSearchB = arrSearch.GetAt(1);

				if (!szSearchA.IsEmpty() && !szSearchB.IsEmpty())
				{
					szWhere.Format(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), szSearchA, szSearchB);
				}
			}
		}
		else
		{
			// Tìm kiếm với một điều kiện duy nhất
			szWhere.Format(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
		}
	}

	/*if(!m_szSearch.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
	}*/
	/*if(!m_szPerformDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND instr(hfl_deptid, quote_literal('%s')) > 0 "), m_szPerformDepartmentKey);
	}*/
	szExisting = _T("'X'");
	for (int i = 0; i < m_arItems.GetCount(); i++)
	{
		PARAITEM pi = m_arItems[i];
		CString szID = pi.szID;
		if (!szID.IsEmpty())
			szExisting.AppendFormat(_T(",'%s'"), pi.szID);
	}

	bool bInsurance = false;
	if (m_bAllList)
	{

	}
	else
	{
		if (szObjectType == _T("S"))
		{
			szWhere.AppendFormat(_T(" and hfl_object <>'I' "));
		}
		else if (szObjectType == _T("I") || szObjectType == _T("C"))
		{
			szWhere.AppendFormat(_T(" and (hfl_object <>'S' or hfl_insprice > 0) "));
			bInsurance = true;

		}
		else
		{
			szWhere.AppendFormat(_T(" and (hfl_object <>'S') "));
		}
	}
	if (pMF->GetModuleID() == _T("EM") || pMF->GetModuleID() == _T("RM"))
	{
		szWhere.AppendFormat(_T(" and hfl_org_id in('GL','EM') "));
	}
	else if (pMF->GetModuleID() == _T("TM") || pMF->GetModuleID() == _T("SOM"))
	{
		szWhere.AppendFormat(_T(" and hfl_org_id in('GL','TM') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hfl_org_id in('GL','TM','EM') "));

	}

	//Ap dung danh muc phi moi
	//1.Neu ngay vao vien(ngay kham) truoc ngay 01/03/2016 thi ap dung danh muc phi cu
	//2.Neu ngau vao vien(Ngay kham) sau ngay /01/03/2016 va < 01/07/2016 thi ap dung danh muc phi moi(01/03)
	//3.Neu ngay vao vien(ngay kham) >= 01/07/2016 thi ap dung dang muc phi (01/07 )
	CString szApplyDate = _T("2016-03-01");

	CString szAdmitDate = m_szAdmitDate.Left(10);
	bool bNewPrice = str2int(pMF->GetParam(_T("apply_newprice")));
	if (bNewPrice)
	{
		szApplyDate = pMF->GetParam(_T("apply_date"));
		szWhere.AppendFormat(_T(" and hfl_applydate >= TO_DATE('%s','YYYY-MM-DD') "), szApplyDate);
	}
	else
	{
		if (szObjectType == _T("S"))
		{
			szWhere.AppendFormat(_T(" and hfl_applydate < TO_DATE('%s','YYYY-MM-DD') "), szApplyDate);
		}
		else
		{
			int nDate = CompareDate(szAdmitDate, szApplyDate);

			if (nDate < 0)
			{
				szWhere.AppendFormat(_T(" and hfl_applydate < TO_DATE('%s','YYYY-MM-DD') "), szApplyDate);
			}
			else
			{
				szWhere.AppendFormat(_T(" and hfl_applydate >= TO_DATE('%s','YYYY-MM-DD') "), szApplyDate);
			}


		}
	}

	szWhere.AppendFormat(_T(" and nvl(hfl_apply_gender,'A') IN('A','%s') "), m_szSex);

	if (m_szMainIcd.IsEmpty())
		m_szMainIcd = _T("XXX");

	//Nếu đối tượng là bảo hiểm thì mới load câu lệnh check của KHTH còn các đối tượng còn lại thì load hết

	if (szObjectType == _T("I") || szObjectType == _T("C"))
	{
		szWhere.AppendFormat(_T(" AND (hfl_feeid IN") \
			_T("   ( SELECT hpi_itemid FROM HMS_PARACLINIC_ICD ") \
			_T("	WHERE (hpi_icd='%s' ") \
			_T("		OR instr((select hod_diagnostic1||','||hod_diagnostic2||','||hod_diagnostic3||','||hod_diagnostic4||','||hod_diagnostic5 ") \
			_T("			from hms_other_diagnostic where hod_docno= %ld and rownum <=1), hpi_icd) > 0 ) OR instr((SELECT hcd_ids FROM hms_codisease WHERE HCD_DOCNO= %ld AND rownum <=1),hpi_icd)>0 and hpi_active='Y')") \
			_T("	OR hfl_feeid NOT IN") \
			_T("   (SELECT hpi_itemid FROM HMS_PARACLINIC_ICD WHERE hpi_active='Y') ") \
			_T("   )"), m_szMainIcd, pMF->m_nDocumentNo, pMF->m_nDocumentNo);
	}
	CString szFilter;
	szFilter.AppendFormat(_T(" and hfl_groupid='%s' "), m_szGroup);

	if (!m_bHasApply)
	{
		if (m_szGroup == _T("B4") || m_szGroup == _T("B5"))
		{
			szFilter.Format(_T(" and substr(hfl_groupid, 1, 2)='%s' "), m_szGroup);
		}
	}

	if (pMF->GetModuleID() == _T("IVF"))
	{
		szSQL.Format(_T("SELECT hfl_feeid, hfl_name, hfl_line, ") \
			_T("hfl_servprice as servprice, ") \
			_T("hfl_insprice as insprice, ") \
			_T("hfl_polprice as polprice, ") \
			_T(" hfl_reqprice, hfl_reqapply, nvl(hfl_apply_duration, 0) as duration, NVL(HFL_XNCOVID19_NN, 'N') as xnnn ") \
			_T("FROM hms_fee_list ") \
			_T("WHERE hfl_active='Y' %s ") \
			_T("AND  hfl_subgroup<>'Y' ") \
			_T("AND (length(hfl_subitem) <= 1 or hfl_subitem is null) AND hfl_feeid not in(%s) ") \
			_T("AND (hfl_servprice+hfl_insprice+hfl_polprice) > 0 %s ") \
			_T("ORDER BY hfl_line, hfl_name"),
			szFilter, szExisting, szWhere);
	}
	else
	{
		szSQL.Format(_T("SELECT hfl_feeid, hfl_name, hfl_line, ") \
			_T("HMS_FEE_LIST_GETPRICE(to_date('%s','YYYY-MM-DD'), hfl_servprice, hfl_servprice_prev) as servprice,") \
			_T("HMS_FEE_LIST_GETPRICE(to_date('%s','YYYY-MM-DD'), hfl_insprice, hfl_insprice_prev) as insprice, ") \
			_T("HMS_FEE_LIST_GETPRICE(to_date('%s','YYYY-MM-DD'), hfl_polprice, hfl_polprice_prev) as polprice, ") \
			_T(" hfl_reqprice, hfl_reqapply, nvl(hfl_apply_duration, 0) as duration, NVL(HFL_XNCOVID19_NN, 'N') as xnnn, NVL(HFL_INSPAID, 'N') as bhtra, NVL(hfl_insprice,0) as giabh ") \
			_T("FROM hms_fee_list ") \
			_T("WHERE hfl_active='Y' %s ") \
			_T("AND  hfl_subgroup<>'Y' ") \
			_T("AND (length(hfl_subitem) <= 1 or hfl_subitem is null) AND hfl_feeid not in(%s) ") \
			_T("AND (hfl_servprice+hfl_insprice+hfl_polprice) > 0 %s ") \
			_T("ORDER BY hfl_line, hfl_name"),
			szAdmitDate, szAdmitDate, szAdmitDate, szFilter, szExisting, szWhere);
	}
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	_tprintf(_T("\r\n%s"), (LPCTSTR)szSQL);

	int nIndex = 1;

	double nUnitPrice = 0;
	double ngiabh;
	CString szUnitPrice;
	CString szReqApply;

	m_wndTestList.BeginLoad();
	_tprintf(_T("%s: %s: %s"), szObjectType, pMF->m_szDept, pMF->m_UserInfo.su_hms_xdept);
	while (!rs.IsEOF())
	{

		if (szObjectType == _T("I"))
			rs.GetValue(_T("insprice"), nUnitPrice);
		else if (szObjectType == _T("D"))
			rs.GetValue(_T("polprice"), nUnitPrice);
		else
			rs.GetValue(_T("servprice"), nUnitPrice);

		rs.GetValue(_T("hfl_reqapply"), szReqApply);

		szTemp.Format(_T("%s"), rs.GetValue(_T("hfl_name")));

		if (szObjectType == _T("S"))
		{
			if (pMF->m_szDept == _T("TYC") || pMF->m_UserInfo.su_hms_xdept == _T("TYC") || pMF->m_szDept == _T("C11BCLC") || pMF->m_UserInfo.su_hms_xdept == _T("C11BCLC") || pMF->m_szDept == _T("KB_A16") || pMF->m_UserInfo.su_hms_xdept == _T("KB_A16") || pMF->m_szDept == _T("TMNT") || pMF->m_UserInfo.su_hms_xdept == _T("TMNT") || m_bIsC14)

			{
				if (m_bTestOnly)
				{
					if (nUnitPrice > 700000)
					{
						nUnitPrice *= 1;
					}
					else
					{
						nUnitPrice *= 1;
					}

				}
				else
				{
					if (nUnitPrice > 700000)
					{
						nUnitPrice *= 1;
					}
					else
					{
						nUnitPrice *= 1;
					}
				}
				if (szReqApply == _T("Y"))
				{
					rs.GetValue(_T("hfl_reqprice"), nUnitPrice);
				}
			}

			if (pMF->m_szDept == _T("AB") || pMF->m_UserInfo.su_hms_xdept == _T("AB"))
			{
				nUnitPrice *= 1;
			}

		}
		//		tmpStr.Format(_T("%.0f"), nUnitPrice);
		FormatCurrency(nUnitPrice, szUnitPrice, 0);
		tmpStr.Format(_T("%d"), nIndex++);

		CString szID, szbhtra;
		rs.GetValue(_T("hfl_feeid"), szID);
		rs.GetValue(_T("bhtra"), szbhtra);
		rs.GetValue(_T("giabh"), ngiabh);

		int nItem = m_wndTestList.AddItems(
			tmpStr,
			szTemp,
			szUnitPrice,
			rs.GetValue(_T("duration")),
			rs.GetValue(_T("xnnn")), rs.GetValue(_T("hfl_subitem")),
			NULL);
		m_wndTestList.SetItemKey(nItem, szID);

		if (ngiabh == 0 && szObjectType == _T("I"))
		{
			m_wndTestList.SetSubItemBkColor(nItem, 1, RGB(205, 155, 29), FALSE);
			m_wndTestList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndTestList.EndLoad();

	return 1;
}
void CTMCollectingDataDialog::OnSearchChange() {
	m_wndSearch.GetWindowText(m_szSearch);
	OnTestListLoadData();
	//	m_wndSearch.SetFocus();
}
/*void CTMCollectingDataDialog::OnSearchSetfocus(){

} */
/*void CTMCollectingDataDialog::OnSearchKillfocus(){

} */
int CTMCollectingDataDialog::OnSearchCheckValue() {
	return 0;
}
void CTMCollectingDataDialog::OnAddSelect() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szID, szOldID;
	bool bExisting = false;
	/*
		for (int i =0; i < m_wndTestList.GetItemCount(); i++){
			if(m_wndTestList.GetCheck(i)){
				szID = m_wndTestList.GetItemText(i, 2);
				bExisting = false;
				for (int j = 0; j < m_arItems.GetCount(); j++){
					szOldID = m_arItems[j];
					if(szOldID == szID){
						bExisting = true;
						break;
					}
				}
				if(!bExisting)
				{
					m_arItems.Add(szID);
				}
			}
		}
	*/
	bool bChanged = false;
	/*
	for (int i = m_wndTestList.GetItemCount()-1; i>=0 ;i--){
		if(m_wndTestList.GetCheck(i)){
			m_wndTestList.DeleteItem(i);
			bChanged = true;
		}
	}
	*/
	if (bChanged)
		OnSelectListLoadData();
}
void CTMCollectingDataDialog::OnSelectListDblClick() {
	int nSel = m_wndSelectList.GetCurSel();
	if (nSel < 0) return;
	//_msg(_T("Hi"));

	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);

	CString szItemID = m_wndSelectList.GetItemKey(nSel);


	szSQL.Format(_T("SELECT hfl_itype FROM hms_fee_list where hfl_feeid='%s' "), szItemID);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return;
	rs.GetValue(_T("hfl_itype"), tmpStr);
	if (tmpStr != _T("I"))
		return;

	CGuiInputDataDialog dlg(this, true, true);
	dlg.m_szValueName = _T("Quantity");
	dlg.m_nNumberValue = str2int(m_wndSelectList.GetItemText(nSel, 3));
	if (dlg.DoModal() == IDOK) {
		CString szQty;
		szQty.Format(_T("%.0f"), dlg.m_nNumberValue);
		m_wndSelectList.SetItemText(nSel, 3, szQty);
		for (int i = 0; i < m_arItems.GetCount(); i++)
		{
			PARAITEM pi = m_arItems[i];
			if (pi.szID == szItemID)
			{
				pi.szQty = szQty;
				m_arItems.SetAt(i, pi);
				break;
			}
		}

		bool bFound = false;
		for (int i = 0; i < m_arEditItems.GetCount(); i++)
		{
			EDITITEM ei = m_arEditItems[i];

			if (ei.szItemID == szItemID)
			{
				ei.nQty = (int)dlg.m_nNumberValue;
				m_arEditItems.SetAt(i, ei);
				bFound = true;
				break;
			}
		}
		if (!bFound)
		{
			EDITITEM ei;
			ei.szItemID = szItemID;
			ei.nQty = (int)dlg.m_nNumberValue;
			ei.szNote.Empty();
			m_arEditItems.Add(ei);
		}
	}
}
void CTMCollectingDataDialog::OnSelectListSelectChange(int nOldItem, int nNewItem) {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
    int nSel = m_wndSelectList.GetCurSel();
    m_szTestItemID = m_wndSelectList.GetItemKey(nSel);
    OnTestListItemLoadData();
}
int CTMCollectingDataDialog::OnSelectListDeleteItem() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szID;
	int ret = ShowMessage(10, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2);
	if (ret == IDNO)
		return -1;
	int nSel = m_wndSelectList.GetCurSel();
	if (nSel < 0)
		return 0;

	szID = m_wndSelectList.GetItemKey(nSel);
	_tprintf(_T("\r\ndelete %s"), szID);
	for (int j = m_arItems.GetCount() - 1; j >= 0; j--)
	{
		PARAITEM pi = m_arItems[j];
		if (szID == pi.szID)
		{
			m_arItems.RemoveAt(j);
			break;
		}
	}

	/*
		for (int i = m_wndSelectList.GetItemCount()-1; i>=0 ;i--){
			if(m_wndSelectList.GetCheck(i) || m_wndSelectList.GetItemState(i, LVIS_SELECTED)){
				szID = m_wndSelectList.GetItemKey(i);
				for (int j = m_arItems.GetCount()-1; j >= 0; j--)
				{
					if(szID == m_arItems[j])
					{
						m_arItems.RemoveAt(j);
						break;
					}
				}
				m_wndSelectList.DeleteItem(i);

			}
		}

	*/
	for (int i = 0; i < m_arEditItems.GetCount(); i++)
	{
		EDITITEM ei = m_arEditItems[i];
		if (ei.szItemID == szID)
		{
			m_arEditItems.RemoveAt(i);
			break;
		}
	}

	OnSelectListLoadData();
	OnTestListLoadData();
	m_nIndexB1E = 0;
	return 0;
}
long CTMCollectingDataDialog::OnSelectListLoadData() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsg(&pMF->m_db);
	CString szSQL, tmpStr, szItemID;
	CString szCode, szExisting, szGroup, szOldGroup = _T("XX");


	double nUnitPrice;
	int nIndex = 1;
	CString szUnitPrice;
	int nCurSel = 0;


	if (m_arItems.GetCount() <= 0)
	{
		m_wndSelectList.DeleteAllItems();
		return -1;
	}



	CString szObjectType = pMF->GetObjectType();

	szExisting = _T("'X'");
	CString szGrp;
	for (int i = 0; i < m_arItems.GetCount(); i++) {
		PARAITEM pi = m_arItems[i];
		szGrp.Format(_T("'%s'"), pi.szGroup);
		if (szExisting.Find(szGrp) == -1)
			szExisting.AppendFormat(_T(",'%s'"), pi.szGroup);
	}

	szSQL.Format(_T(" select hfg_id, hfg_name") \
		_T(" from hms_fee_group") \
		_T(" where hfg_id in(%s) order by hfg_index "), szExisting);
	rsg.ExecSQL(szSQL);
	//_tprintf(_T("\r\n%s"), (LPCTSTR)  szSQL);

	m_wndSelectList.BeginLoad();
	int nItem = 0;
	CString szGroupID, szTLIID, szName;

	while (!rsg.IsEOF())
	{
		rsg.GetValue(_T("hfg_name"), tmpStr);
		rsg.GetValue(_T("hfg_id"), szGroupID);

		nItem = m_wndSelectList.AddItems(
			_T("*"),
			tmpStr,
			NULL);

		m_wndSelectList.SetItemKey(nItem, _T(""));
		m_wndSelectList.SetItemBkColor(nItem, RGB(240, 240, 240));
		m_wndSelectList.SetItemTextColor(nItem, RGB(0, 192, 255));
		m_wndSelectList.SetItemState(nItem, ODS_DISABLED);

		for (int i = 0; i < m_arItems.GetCount(); i++)
		{
			PARAITEM pi = m_arItems[i];
			szItemID = pi.szID;
			if (pi.szGroup != szGroupID)
				continue;


			if (szObjectType == _T("I"))
			{
				nUnitPrice = str2double(pi.szInsPrice);
				if (nUnitPrice <= 0) {
					nUnitPrice = str2double(pi.szServPrice);
				}
			}
			else if (szObjectType == _T("D"))
			{
				nUnitPrice = str2long(pi.szPolPrice);
				if (nUnitPrice <= 0) {
					nUnitPrice = str2double(pi.szServPrice);
				}
			}
			else
			{
				nUnitPrice = str2double(pi.szServPrice);
			}

			if (pMF->GetObjectType() == _T("S"))
			{
				if (pMF->m_szDept == _T("TYC") || pMF->m_UserInfo.su_hms_xdept == _T("TYC") || pMF->m_szDept == _T("C11BCLC") || pMF->m_UserInfo.su_hms_xdept == _T("C11BCLC") || pMF->m_szDept == _T("KB_A16") || pMF->m_UserInfo.su_hms_xdept == _T("KB_A16") || pMF->m_szDept == _T("TMNT") || pMF->m_UserInfo.su_hms_xdept == _T("TMNT") || m_bIsC14)
				{
					if (m_bTestOnly)
					{
						if (nUnitPrice > 700000)
						{
							//nUnitPrice *= 1.2;
							nUnitPrice *= 1;
						}
						else
						{
							//nUnitPrice *= 1.35;
							nUnitPrice *= 1;
						}

					}
					else
					{
						if (nUnitPrice > 700000)
						{
							nUnitPrice *= 1;
						}
						else
						{
							nUnitPrice *= 1;
						}
					}

					if (pi.szReqApply == _T("Y") && str2double(pi.szReqPrice) > 0)
					{
						nUnitPrice = str2double(pi.szReqPrice);
					}

				}

				if (pMF->m_szDept == _T("AB") || pMF->m_UserInfo.su_hms_xdept == _T("AB"))
				{
					nUnitPrice *= 1;
				}

			}
			FormatCurrency(nUnitPrice, szUnitPrice);

			//tmpStr.Format(_T("%.2f"), nUnitPrice);
			tmpStr.Format(_T("%d"), nIndex++);

			szName = pi.szName;
			if (!pi.szNote.IsEmpty())
			{
				szName.AppendFormat(_T(" (%s)"), pi.szNote);
			}

			if (pi.szGroup == _T("B1E00"))
			{
				m_szGroupB1E = pi.szGroup;
				m_nIndexB1E++;
			}
			else
				m_nIndexB1E = 0;
			nItem = m_wndSelectList.AddItems
			(
				tmpStr,
				szName,
				szUnitPrice,
				pi.szQty,
				pi.szGroup,
				pi.szSubItem,
				pi.szNote,
				_T(""),
				pi.szSample,
				pi.szDiagnosis,
				NULL);

			m_wndSelectList.SetItemKey(nItem, szItemID);

			if (szItemID == m_szID)
			{
				nCurSel = nItem;
			}

		}


		rsg.MoveNext();
	}
	m_wndSelectList.EndLoad();
	if (m_wndSelectList.GetItemCount() > 0)
	{
		m_wndSelectList.SetCurSel(nCurSel);
	}

	//Kiểm tra trường hợp có thẻ bảo việt
	if (m_szExtIns == _T("Y"))
	{
		CString szItemId;
		szSQL.Format(_T("SELECT * FROM hms_extins_unpaid WHERE heu_company_id=%ld"), m_nExtInsCompanyId);
		rs.ExecSQL(szSQL);
		while (!rs.IsEOF())
		{
			rs.GetValue(_T("heu_itemid"), szItemId);
			for (int i = 0; i < m_wndSelectList.GetItemCount(); i++)
			{
				if (m_wndSelectList.GetItemKey(i) == szItemId)
				{
					m_wndSelectList.SetSubItemBkColor(i, 0, RGB(255, 128, 64));
					m_wndSelectList.SetSubItemTextColor(i, 0, COLOR_WHITE);
				}
			}
			rs.MoveNext();
		}
	}
	
	return 0;
}
void CTMCollectingDataDialog::OnRemoveSelect() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szID;
	bool bChanged = false;
	
	if (bChanged) {
		OnSelectListLoadData();
		OnTestListLoadData();
	}
}
void CTMCollectingDataDialog::OnApplySelect()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CString szWhere;

    // Điều kiện khoa
    if (!pMF->GetDepartmentID().IsEmpty() && pMF->GetDepartmentID() != _T("KD") && pMF->GetDepartmentID() != _T("KD1"))
    {
        szWhere.AppendFormat(_T("AND tbl_patient.makhoa = '%s'"),
                             pMF->GetDepartmentID());
	}
	else
	{
            szWhere.AppendFormat(_T(" "));
	}

    struct TestInfo
    {
        CString id;
        CString name;
        CString groupName;
        CString bigGroupName; // Thêm tên nhóm lớn từ hfg_name
    };
    
	std::map<CString, std::vector<TestInfo>> groupMap;
    std::vector<CString> colNames;
    std::map<CString, CString> groupNames; // Map để lưu tên nhóm
    std::map<CString, CString> bigGroupNames; // Map để lưu tên nhóm lớn từ hfg_name
    std::set<CString> addedIds; // Set để track các ID đã thêm, tránh trùng lặp
    
    // Lấy thông tin nhóm lớn từ database
    CRecord rsg(&pMF->m_db);
    CString szGroupSQL;
    szGroupSQL.Format(_T("SELECT hfg_id, hfg_name FROM hms_fee_group WHERE hfg_active='Y'"));
    rsg.ExecSQL(szGroupSQL);
    while (!rsg.IsEOF()) {
        CString hfgId, hfgName;
        rsg.GetValue(_T("hfg_id"), hfgId);
        rsg.GetValue(_T("hfg_name"), hfgName);
        bigGroupNames[hfgId] = hfgName;
        rsg.MoveNext();
    }
    
	for (int i = 0; i < m_arItems.GetSize(); i++) {
		CString groupID;
		groupID.Format(_T("%d"), m_arItems[i].szGroup);
		groupNames[groupID] = m_arItems[i].szName; // Lưu tên nhóm
		bool hasSubItem = FALSE;
		for (int j = 0; j < m_arSubItems.GetSize(); j++) {
			if (m_arSubItems[j].szGroup == m_arItems[i].szGroup) {
				// Kiểm tra ID đã tồn tại chưa
				if (addedIds.find(m_arSubItems[j].szID) == addedIds.end()) {
					TestInfo info;
					info.id = m_arSubItems[j].szID;
					info.name = m_arSubItems[j].szName;
					info.groupName = m_arItems[i].szName;
					info.bigGroupName = bigGroupNames[m_arItems[i].szGroup]; // Lấy tên nhóm lớn
					groupMap[groupID].push_back(info);
					addedIds.insert(m_arSubItems[j].szID); // Thêm vào set đã track
					hasSubItem = TRUE;
				}
			}
		}
		if (!hasSubItem) {
			// Kiểm tra ID đã tồn tại chưa
			if (addedIds.find(m_arItems[i].szID) == addedIds.end()) {
				TestInfo info;
				info.id = m_arItems[i].szID;
				info.name = m_arItems[i].szName;
				info.groupName = m_arItems[i].szName;
				info.bigGroupName = bigGroupNames[m_arItems[i].szGroup]; // Lấy tên nhóm lớn
				groupMap[groupID].push_back(info);
				addedIds.insert(m_arItems[i].szID); // Thêm vào set đã track
			}
		}
	}
	
	// Tạo colNames theo thứ tự nhóm
	for (auto &grp : groupMap) {
		for (auto &test : grp.second) {
			CString colName = test.name;
			
			colNames.push_back(colName);
		}
	}

    // ================== PHẦN tbl_patient ==================
    szSQL.Format(
        _T("WITH tbl_patient AS (")
        _T(" SELECT")
        _T(" hd_docno AS docno,")
        _T(" GET_PATIENTNAME(hd_docno) AS tenbn,")
        _T(" hms_getage(trunc(hd_admitdate), hp_birthdate) AS tuoi,")
        _T(" TO_CHAR(hp_birthdate, 'DD/MM/YYYY') AS namsinh,")
        _T(" HD_ADMITDEPT AS khoakham,")
        _T(" HCR_ADMITDEPT AS khoavaovien,")
        _T(" CASE WHEN NVL(HD_SUGGESTION, 'XX') NOT IN ('C', 'D') ")
        _T("      THEN NVL(hd_icd, 'XX') ELSE NVL(hcr_mainicd, 'XX') END AS ")
        _T("mabenh,")
        _T(" CASE WHEN NVL(HD_SUGGESTION, 'XX') NOT IN ('C', 'D') ")
        _T("      THEN NVL(HD_ADMITDEPT, 'XX') ELSE NVL(HCR_ADMITDEPT, 'XX') ")
        _T("END AS makhoa,")
        _T(" NVL(HOD_DIAGNOSTIC1,'XX') AS benhkem1,")
        _T(" NVL(HOD_DIAGNOSTIC2,'XX') AS benhkem2,")
        _T(" NVL(HOD_DIAGNOSTIC3,'XX') AS benhkem3,")
        _T(" NVL(HOD_DIAGNOSTIC4,'XX') AS benhkem4,")
        _T(" NVL(HOD_DIAGNOSTIC5,'XX') AS benhkem5,")
        _T(" hd_conclusion AS benhchinh,")
        _T(" HCR_ADMITDISEASE AS cd_vaovien,")
        _T(" hcr_maindisease AS cd_ravien,")
        _T(" hms_getaddress(NVL(hd_provid, hp_provid), NVL(hd_distid, ")
        _T("hp_distid), NVL(hd_villid, hp_villid)) AS quequan,")
        _T(" HD_telephone AS dienthoai,")
        _T(" Get_syssel_desc('sys_sex', hp_sex) AS gioitinh,")
        _T(" HCR_ADMITDATE AS ngayvaovien,")
        _T(" hcr_dischargedate AS ngayravien")
        _T(" FROM hms_doc")
        _T(" LEFT JOIN HMS_OTHER_DIAGNOSTIC ON (hd_docno = HOD_DOCNO)")
        _T(" LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)")
        _T(" LEFT JOIN hms_clinical_record ON (hd_docno = hcr_DOCNO)")
        _T(" WHERE hd_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
        _T("HH24:MI:SS')")
        _T("       AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
        _T("   AND HD_ADMITDEPT <> 'C1.2'")
        _T("   AND NVL(HCR_ADMITDEPT, 'XX') NOT IN ('A1-A', 'A1-C')")
        _T("   AND hd_status = 'T'")
        _T("), tbl_xn AS (")
        _T(" SELECT docno"),
        m_szFromDate, m_szToDate);

	// ================== CỘT ĐỘNG ==================
	for (auto &grp : groupMap)
	{
		std::vector<TestInfo> &tests = grp.second;
		for (size_t k = 0; k < tests.size(); k++)
		{
			CString col;
			// Tìm kết quả từ cả testorderline và pacsorderline
			col.Format(_T(", (SELECT DISTINCT FIRST_VALUE(result_value) OVER ")
					   _T("(PARTITION BY docno ORDER BY orderid) ")
					   _T("FROM (")
					   _T("  SELECT hpcl_docno as docno, hpcl_orderid as orderid, hpcl_result as result_value ")
					   _T("  FROM hms_testorderline ")
					   _T("  WHERE hpcl_itemid = '%s' ")
					   _T("  UNION ALL ")
					   _T("  SELECT hpcl_docno as docno, hpcl_orderid as orderid, hpcl_result as result_value ")
					   _T("  FROM hms_pacsorderline ")
					   _T("  WHERE hpcl_itemid = '%s' ")
					   _T(") combined ")
					   _T("WHERE combined.docno = o.docno) AS \"%s\""),
					   tests[k].id, tests[k].id, tests[k].id);
			szSQL += col;
		}
	}

    // ================== PHẦN FROM tbl_xn ==================
    szSQL += _T(" FROM (");
    szSQL.AppendFormat(_T("   SELECT hpcl_docno as docno FROM hms_testorderline ")
             _T("   LEFT JOIN hms_testorder ON (hpcl_docno=hpc_docno AND hpcl_orderid=hpc_orderid) ")
             _T("   WHERE HPC_ORDERDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
             _T("     AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
             _T("     AND HPC_DEPTID NOT IN ('C1.2', 'A1-A', 'A1-C') ")
             _T("   UNION ")
             _T("   SELECT hpcl_docno as docno FROM hms_pacsorderline ")
             _T("   LEFT JOIN hms_pacsorder ON (hpcl_docno=hpc_docno AND hpcl_orderid=hpc_orderid) ")
             _T("   WHERE HPC_ORDERDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
             _T("     AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
             _T("     AND HPC_DEPTID NOT IN ('C1.2', 'A1-A', 'A1-C') "),
             m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);
    szSQL += _T(" ) o ");
    szSQL += _T(" GROUP BY o.docno )");

    // ================== SELECT CUỐI ==================
    szSQL += _T(" SELECT tbl_patient.docno,");
    szSQL += _T(" CAST('Báo cáo mã bệnh' AS nvarchar2(128)) AS baocao,");
    szSQL += _T(" tbl_patient.tenbn, tbl_patient.tuoi, tbl_patient.namsinh,");
    szSQL += _T(" tbl_patient.khoakham, tbl_patient.khoavaovien, tbl_patient.makhoa,")
             _T("tbl_patient.mabenh,");
    szSQL += _T(" tbl_patient.benhkem1, tbl_patient.benhkem2, ")
             _T("tbl_patient.benhkem3,");
    szSQL += _T(" tbl_patient.benhkem4, tbl_patient.benhkem5, ")
             _T("tbl_patient.benhchinh,");
    szSQL += _T(" tbl_patient.cd_vaovien, tbl_patient.cd_ravien, ")
             _T("tbl_patient.quequan,");
    szSQL += _T(" tbl_patient.dienthoai, tbl_patient.gioitinh,");
    szSQL += _T(" TO_CHAR(tbl_patient.ngayvaovien, 'DD/MM/YYYY HH24:MI') AS ")
             _T("ngayvaovien,");
    szSQL += _T(" TO_CHAR(tbl_patient.ngayravien, 'DD/MM/YYYY HH24:MI') AS ")
             _T("ngayravien");

	// Cột động trong SELECT ngoài
	for (auto &grp : groupMap)
	{
		for (auto &test : grp.second)
		{
			szSQL.AppendFormat(_T(", tbl_xn.\"%s\""), test.id);
		}
	}

    szSQL += _T(" FROM tbl_patient, tbl_xn");
    szSQL += _T(" WHERE tbl_patient.docno = tbl_xn.docno");
    szSQL.AppendFormat(_T(" %s"), szWhere);
    szSQL += _T(" ORDER BY tbl_patient.makhoa, tbl_patient.docno");

    // Debug
    AfxMessageBox(szSQL);
    
    // ================== XUẤT EXCEL ==================
    CExcel xls;
    UpdateData(TRUE);
    BeginWaitCursor();
    xls.CreateSheet(1);
    xls.SetWorksheet(0);

    // Set column widths
    xls.SetColumnWidth(0, 8);
    xls.SetColumnWidth(1, 20);
    xls.SetColumnWidth(2, 8);
    xls.SetColumnWidth(3, 24);
    xls.SetColumnWidth(4, 9);
    xls.SetColumnWidth(5, 9);
    xls.SetColumnWidth(6, 9);
    xls.SetColumnWidth(7, 10);
    xls.SetColumnWidth(8, 10);
    xls.SetColumnWidth(9, 10);
    xls.SetColumnWidth(10, 12);
    xls.SetColumnWidth(12, 10);

    // Set headers
    xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetMerge(0, 0, 0, 2);

    xls.SetCellText(1, 0, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetMerge(1, 1, 0, 2);

    xls.SetCellText(2, 0, _T("DANH SÁCH TIỀN MÁU DỊCH VỤ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetMerge(2, 2, 0, 9);

    CString tmpStr;
    tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
    xls.SetCellText(3, 0, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetMerge(3, 3, 0, 9);

    // Set fixed column headers
    xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetMerge(5, 6, 0, 0);

    xls.SetCellText(1, 5, _T("Họ và tên bệnh nhân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetMerge(5, 6, 1, 1);

    xls.SetCellText(2, 5, _T("Tuổi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetMerge(5, 6, 2, 2);

    xls.SetCellText(3, 5, _T("Giới tính"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetMerge(5, 6, 3, 3);

    xls.SetCellText(4, 5, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetMerge(5, 6, 4, 4);

    xls.SetCellText(5, 5, _T("Ngày vào viện"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetMerge(5, 6, 5, 5);

    xls.SetCellText(6, 5, _T("Ngày ra viện"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetMerge(5, 6, 6, 6);

    xls.SetCellText(7, 5, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetMerge(5, 6, 7, 7);

    // Thêm các cột động theo nhóm lớn vào file Excel
    int colStart = 8; // Vị trí bắt đầu cho cột động, sau các cột cố định
    int currentCol = colStart;
    
    // Tạo map nhóm theo bigGroupName để group lại
    std::map<CString, std::vector<std::pair<CString, std::vector<TestInfo>>>> bigGroupMap;
    for (auto &grp : groupMap) {
        if (!grp.second.empty()) {
            CString bigGroupName = grp.second[0].bigGroupName;
            bigGroupMap[bigGroupName].push_back(std::make_pair(grp.first, grp.second));
        }
    }
    
    // Tạo header nhóm lớn, nhóm con và cột con
    for (auto &bigGrp : bigGroupMap) {
        int bigGroupStartCol = currentCol;
        CString bigGroupName = bigGrp.first;
        
        // Đếm tổng số cột trong nhóm lớn
        int totalCols = 0;
        for (auto &grp : bigGrp.second) {
            totalCols += grp.second.size();
        }
        
        // Tạo header nhóm lớn ở dòng 4 (nếu có nhiều hơn 1 cột)
        if (totalCols > 1 && !bigGroupName.IsEmpty()) {
            xls.SetCellText(bigGroupStartCol, 4, bigGroupName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);
            xls.SetMerge(4, 4, bigGroupStartCol, bigGroupStartCol + totalCols - 1);
        }
        
        // Tạo header nhóm con và cột con
        for (auto &grp : bigGrp.second) {
            int groupStartCol = currentCol;
            CString groupName = groupNames[grp.first];
            int groupSize = grp.second.size();
            
            // Tạo header nhóm con ở dòng 5
            if (groupSize > 1) {
                xls.SetCellText(groupStartCol, 5, groupName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
                xls.SetMerge(5, 5, groupStartCol, groupStartCol + groupSize - 1);
            }
            
            // Tạo các cột con ở dòng 6
            for (auto &test : grp.second) {
                CString colName = test.name;
                if (colName.GetLength() > 30) {
                    colName = colName.Left(27) + _T("_c");
                }
                
                if (groupSize == 1) {
                    // Nếu nhóm chỉ có 1 cột, merge từ dòng 5 đến 6
                    if (totalCols == 1 && !bigGroupName.IsEmpty()) {
                        // Nếu cả nhóm lớn cũng chỉ có 1 cột, merge từ dòng 4
                        xls.SetCellText(currentCol, 4, colName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
                        xls.SetMerge(4, 6, currentCol, currentCol);
                    } else {
                        xls.SetCellText(currentCol, 5, colName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
                        xls.SetMerge(5, 6, currentCol, currentCol);
                    }
                } else {
                    // Nếu nhóm có nhiều cột, chỉ đặt tên cột ở dòng 6
                    xls.SetCellText(currentCol, 6, colName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
                }
                
                currentCol++;
            }
        }
    }

    // Execute SQL and fill data
    CRecord rs(&pMF->m_db);
    int nRowData = 8; // Bắt đầu từ dòng 8 (sau header 3 tầng)
    int nSTT = 1;
    
    rs.ExecSQL(szSQL);
    while (!rs.IsEOF()) {
        // Fill các cột cố định
        xls.SetCellText(0, nRowData, int2str(nSTT));
        xls.SetCellText(1, nRowData, rs.GetValue(_T("tenbn")));
        xls.SetCellText(2, nRowData, rs.GetValue(_T("tuoi")));
        xls.SetCellText(3, nRowData, rs.GetValue(_T("gioitinh")));
        xls.SetCellText(4, nRowData, rs.GetValue(_T("khoakham")));
        xls.SetCellText(5, nRowData, rs.GetValue(_T("ngayvaovien")));
        xls.SetCellText(6, nRowData, rs.GetValue(_T("ngayravien")));
        xls.SetCellText(7, nRowData, rs.GetValue(_T("docno")));

        // Fill các cột động theo thứ tự
        int colIndex = colStart;
        for (auto &bigGrp : bigGroupMap) {
            for (auto &grp : bigGrp.second) {
                for (auto &test : grp.second) {
                    // Sử dụng test.id làm alias để lấy dữ liệu từ ResultSet
                    CString value = rs.GetValue(test.id);
                    xls.SetCellText(colIndex, nRowData, value);
                    colIndex++;
                }
            }
        }

        nSTT++;
        nRowData++;
        rs.MoveNext();
    }

    // Tạo và lưu file Excel
    xls.Save(_T("Exports\\DANHSACHTIENMAUDICHVU.xls"));

    EndWaitCursor();
}


void CTMCollectingDataDialog::OnCloseSelect() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	OnCancel();
}
/*void CTMCollectingDataDialog::OnOrderDateChange(){

} */
/*void CTMCollectingDataDialog::OnOrderDateSetfocus(){

} */
/*void CTMCollectingDataDialog::OnOrderDateKillfocus(){

} */


void CTMCollectingDataDialog::OnGroupSelect()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	CHMSSelectionListDialog dlg(this);


	dlg.m_szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ")\
		_T("FROM sys_sel ")\
		_T("WHERE ss_id='hms_testprofile' ")\
		_T("AND (ss_default is null OR ss_default IN('%s','admin'))")\
		_T("ORDER BY ss_code "), pMF->GetCurrentUser());

	//_msg(_T("%s"), dlg.m_szSQL);

	if (dlg.DoModal() == IDOK) {
		for (int n = 0; n < dlg.m_arraySelection.GetCount(); n++)
		{
			CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[n];
			CString szID, szOldID;
			bool bExisting = false;
			szSQL.Format(_T("SELECT * FROM hms_testprofile WHERE htp_profileid='%s' "), si.szID);

			rs.ExecSQL(szSQL);
			while (!rs.IsEOF()) {
				rs.GetValue(_T("htp_itemid"), szID);
				bool bExisting = false;
				for (int j = 0; j < m_arItems.GetCount(); j++) {
					PARAITEM pi = m_arItems[j];
					szOldID = pi.szID;
					if (szOldID == szID) {
						bExisting = true;
						break;
					}
				}
				if (!bExisting)
				{
					AddParaItem(szID);
				}
				rs.MoveNext();
			}
		}
		OnSelectListLoadData();
	}
}

int	CTMCollectingDataDialog::OnSelectListAddDescItem() {
	int nSel = m_wndSelectList.GetCurSel();

	if (nSel < 0) return -1;


	return 0;
}

int CTMCollectingDataDialog::OnAddTMCollectingDataDialog() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;

}
int CTMCollectingDataDialog::OnEditTMCollectingDataDialog() {
	if (GetMode() != VM_VIEW)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;

}
int CTMCollectingDataDialog::OnDeleteTMCollectingDataDialog() {
	if (GetMode() != VM_VIEW)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
		return -1;
	szSQL.Format(_T("DELETE FROM  WHERE  AND"));
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		SetMode(VM_NONE);
		OnCancelTMCollectingDataDialog();
	}
	return 0;
}
int CTMCollectingDataDialog::OnSaveTMCollectingDataDialog() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (GetMode() == VM_ADD) {
		//7szSQL = m_tblTbl.GetInsertSQL(); 
	}
	else if (GetMode() == VM_EDIT) {
		CString szWhere;
		szWhere.Format(_T(" WHERE"));
		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
		szSQL += szWhere;
	}
	//_fmsg(_T("%s"), szSQL); 
	int ret = pMF->ExecSQL(szSQL);
	if (ret > 0)
	{
		//OnTMCollectingDataDialogListLoadData(); 
		SetMode(VM_VIEW);

	}
	else
	{
	}
	return ret;
	return 0;
}
int CTMCollectingDataDialog::OnCancelTMCollectingDataDialog() {
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();

	return 0;
}
int CTMCollectingDataDialog::OnTMCollectingDataDialogListLoadData() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szCode;
	TCHAR chOld = _T(' '), ch;
	//1: Nhom can lam sang
	CString szOptFilter;
	szOptFilter.Empty();

	szSQL.Format(_T("SELECT * FROM hms_fee_group WHERE substr(hfg_id, 1, 2) IN('B1','B2','B3') AND hfg_active='Y' ORDER BY hfg_index, hfg_id "));
	//_msg(_T("%s"), szSQL);	
	rs.ExecSQL(szSQL);
	m_arGroup.RemoveAll();
	while (!rs.IsEOF()) {
		rs.GetValue(_T("hfg_id"), szCode);
		ch = szCode[2];
		if (ch == _T('0'))
		{
			rs.GetValue(_T("hfg_name"), tmpStr);
			m_wndParaclinicalList.AddCaption(tmpStr);
			m_arGroup.Add(CString(_T("")));
		}
		else
		{
			if (szCode == _T("B3800"))
			{
				tmpStr = _T("Điện quang can thiệp C8-B");
				m_wndParaclinicalList.AddCaption(tmpStr);
				m_arGroup.Add(CString(_T("")));
			}
			m_wndParaclinicalList.Add(rs.GetValue(_T("hfg_name")), _T(""), NULL);
			m_arGroup.Add(szCode);
		}
		rs.MoveNext();
	};

	if (!m_bHasApply)
	{
		m_wndParaclinicalList.AddCaption(_T("Phẫu thuật, thủ thuật"));
		m_arGroup.Add(CString(_T("")));
		m_wndParaclinicalList.Add(_T("Phẫu thuật"), _T(""), NULL);
		CString szCode1 = _T("B4");
		m_arGroup.Add(szCode1);
		m_wndParaclinicalList.Add(_T("Thủ thuật"), _T(""), NULL);
		CString szCode2 = _T("B5");
		m_arGroup.Add(szCode2);

	}
	m_wndParaclinicalList.ModifyStyle(0, WS_BORDER | WS_VSCROLL);
	m_wndParaclinicalList.SetAutoItemHeight(true);
	return 0;
}


void CTMCollectingDataDialog::OnAllListSelect()
{
	OnTestListLoadData();
}


void CTMCollectingDataDialog::OnTestListAddItem()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szID, szOldID;
	int nSel = m_wndTestList.GetCurSel();
	if (nSel < 0)
		return;

	szID = m_wndTestList.GetItemKey(nSel);

	//_msg(_T("Hello"));
	//CHMSAddSampleCommentDialog dlg(this);
	//CHMSParaclinicalDescDialog dlg(this);
	

	//	_tprintf(_T("\r\n%d :%s"), nSel, szID);
	bool bExisting = false;
	//	szID = m_wndTestList.GetItemText(nSel, 2);
	bExisting = false;
	for (int j = 0; j < m_arItems.GetCount(); j++)
	{
		PARAITEM pi = m_arItems[j];

		szOldID = pi.szID;
		if (szOldID == szID)
		{
			bExisting = true;
			break;
		}
	}

	if (!bExisting)
	{
		m_szID = szID;
		AddParaItem(szID);
		m_wndTestList.DeleteItem(nSel);
		//		m_wndTestList.SetCurSel(nSel);
		OnSelectListLoadData();

	}

}

void CTMCollectingDataDialog::OnTestListClick()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CRecord rsl5(&pMF->m_db);
	CString szItemID, szID, szkhamsuckhoe, szkeyroom, szOrderRoomID, szSubItem;
	CString szSQL, tmpStr, szdocstatus, szsuggestion, szoutpatient, sztreatstatus, szIsmotheritem, szOrderDept, szInPatient, szPerformDeptID;

	int nroomno = 0, nOrderRoomID = 0;
	CString szWhere;

	int nSel = m_wndTestList.GetCurSel();
	if (nSel < 0)
		return;
	//Đoạn này lấy ra orderdept
	szOrderDept = pMF->m_szDept;

	if (pMF->GetModuleID() == _T("PACS") || pMF->GetModuleID() == _T("SMM"))
	{
		szSQL.Format(_T("SELECT hd_isinpatient, hd_admitdept FROM hms_doc WHERE hd_docno=%ld"),
			pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if (rs.IsEOF())
			return;
		rs.GetValue(_T("hd_isinpatient"), szInPatient);
		rs.GetValue(_T("hd_admitdept"), szOrderDept);
		if (szInPatient == _T("Y"))
		{
			szSQL.Format(_T("SELECT htr_deptid, htr_idx FROM hms_treatment_record WHERE htr_docno=%ld and htr_status='I' "),
				pMF->m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if (!rs.IsEOF())
			{
				rs.GetValue(_T("htr_deptid"), szOrderDept);
			}
		}
	}
	//Đoạn này lấy ra phòng yêu cầu
	szSQL.Format(_T("SELECT NVL(HD_HEALTHEXAM,'N') as khamsuckhoe,  NVL(HE_HASFEE, 'N') as keyroom, HE_ROOMID as roomno FROM hms_doc left join hms_exam ON (hd_docno=he_docno) WHERE hd_docno=%ld AND HE_HASFEE='Y'"),
		pMF->m_nDocumentNo);
	rsl.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (!rsl.IsEOF())
	{
		rsl.GetValue(_T("khamsuckhoe"), szkhamsuckhoe);
		rsl.GetValue(_T("keyroom"), szkeyroom);
		rsl.GetValue(_T("roomno"), nroomno);
	}
	//Xử lý đoạn BN chuyển khám chuyên khoa

	szSQL.Format(_T(" SELECT NVL(hfg_deptid, 'XX') as deptid ") \
	_T(" from hms_fee_group") \
	_T(" where hfg_id='%s' "), m_szGroup);
	rsl.ExecSQL(szSQL);

	if(!rsl5.IsEOF())
	{
		rsl5.GetValue(_T("deptid"), szPerformDeptID);
	}
	
	szSQL.Format(_T("get_roomid_treatment_mv_pat(%ld, '%s', '%s') "), pMF->m_nDocumentNo, szOrderDept, m_szGroup);
	  int vroomid = str2int(pMF->ExecDML(szSQL));
	
	  if(pMF->GetModuleID() == _T("RM") && szkhamsuckhoe == _T("Y") && szkeyroom == _T("Y"))
		  nOrderRoomID = nroomno;
	  else if (vroomid > 0)
		  nOrderRoomID = vroomid;
	  else
		  nOrderRoomID = pMF->m_nRoomID;


	 szOrderRoomID.Format(_T("[%d]"), nOrderRoomID);

	 //_msg(_T("%s - %d"), szOrderDept, nOrderRoomID);

	szID = m_wndTestList.GetItemKey(nSel);

	szSQL.Format(_T("SELECT NVL(hd_status,'X') as docstatus, NVL(HD_SUGGESTION, 'X') as suggestion from hms_doc where hd_docno =%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("docstatus"), szdocstatus);
	rs.GetValue(_T("suggestion"), szsuggestion);

	/*if ((szsuggestion != _T("C")) && (szsuggestion != _T("D")))
	{
		ShowMessageBox(_T("Bệnh nhân phải được kết luận vào viện thì mới được chỉ định xét nghiệm người nhà, vui lòng nhập đúng thông tin!"));
		return;
	}*/
	szSQL.Format(_T("SELECT NVL(hfl_is_mother_group,'X') as Ismotheritem from hms_fee_list where hfl_feeid ='%s'"), szID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("Ismotheritem"), szIsmotheritem);

	szItemID = m_wndTestList.GetItemText(nSel, 4);

	//_msg(_T("%s"), szID);
	//Kiểm tra bệnh nhân phải được kết luận vào viện thì mới cho chỉ định xét nghiệm người nhà

	if (m_szGroup == _T("B1500") || m_szGroup == _T("B1B00") || szIsmotheritem == _T("Y") || m_szGroup == _T("B1510") || m_szGroup == _T("B1520"))
	{
		//if (szItemID == _T("Y") && pMF->GetCurrentDepartmentID() == _T("A16"))
		if (szItemID == _T("Y"))
		{
			if ((szsuggestion != _T("C")) && (szsuggestion != _T("D")))
			{
				ShowMessageBox(_T("Bệnh nhân phải được kết luận vào viện thì mới được chỉ định xét nghiệm người nhà vào hồ sơ bệnh nhân!!"));
				return;
			}
			CHMSAddRelativeInforDialog dlg(this);
			dlg.m_szItemDesc = m_wndTestList.GetItemText(nSel, 1);
			if (dlg.DoModal() != IDOK)
			{

				return;
			}
			m_szSample = dlg.m_szSampleNameKey;
			m_szNote = dlg.m_szNote;
			m_nRelativeID = str2long(dlg.m_szRelativeInforKey);
			//_msg(_T("%ld"), m_nRelativeID);
		}
		else
		{
			CHMSAddSampleCommentDialog dlg(this);
			dlg.m_szItemDesc = m_wndTestList.GetItemText(nSel, 1);
			dlg.m_szItems = szID;
			dlg.m_szGroup = m_szGroup;
			if (dlg.DoModal() != IDOK)
			{
				return;
			}
			m_szSample = dlg.m_szSampleNameKey;
			m_szNote = dlg.m_szNote;
			m_szPhanloainhiemkhuanKey = dlg.m_szPhanloainhiemkhuanKey;


		}

	}
	//Check nếu Selectlist đã có 1 Item của nhóm B1E00 rồi thì không cho Add nữa
	if (m_szGroup == _T("B1E00") && m_nIndexB1E >= 1 && szIsmotheritem != _T("Y"))
	{
		ShowMessageBox(_T("Theo yêu cầu của khoa giải phẫu bệnh, mỗi đề mục chỉ được add vào 1 phiếu!"), MB_ICONERROR);
		return;
	}

	//Đoạn này check xem trong có nhóm phát số được thiết lập hay không?

	szSQL.Format(_T("get_group_id('%s') "), m_szGroup);
	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret > 0)
	{
		szSQL.Format(_T("ISAPPLY_PERFORM_ROOM_C8_VL5('%s') "), szID);
		int ret = str2long(pMF->ExecDML(szSQL));

		szSQL.Format(_T("C8_CHECK_ORDER_DEPT('%s', '%s') "), szID, szOrderDept);
		int ret2 = str2long(pMF->ExecDML(szSQL));
		//_msg(_T("%d"), ret2);

		if (ret <= 0)
		{
			ShowMessageBox(_T("Cảnh báo chỉ định này chưa được thiết lập phòng thực hiện, vui lòng liên hệ khoa thực hiện!"), MB_ICONERROR);
			return;
		}

		if (ret2 <= 0)
		{
			ShowMessageBox(_T("Cảnh báo chỉ định này chưa được thiết lập phòng chỉ định, vui lòng liên hệ khoa thực hiện!"), MB_ICONERROR);
			return;
		}
	}

	//Đoạn này check nhóm nào sẽ hiện lên dialog để nhập sample

	szSQL.Format(_T("get_group_id_add_sample('%s') "), m_szGroup);
	int ret2 = str2int(pMF->ExecDML(szSQL));
	if (ret2 > 0)
	{


		CHMSAddSampleCommentExDialog dlg(this);
		//dlg.m_szItemDesc = m_wndTestList.GetItemText(nSel,1);
		dlg.m_szItemDesc = m_wndTestList.GetItemText(nSel, 1) + _T(" - ") + szID;
		dlg.m_szOrderDept = szOrderDept;
		dlg.m_szOrderRoomID = szOrderRoomID;
		dlg.m_szID = szID;
		dlg.m_szGroup = m_szGroup;
		if (dlg.DoModal() != IDOK)
		{
			return;
		}
		m_szDiagnosis = dlg.m_szDiagnosis;
		m_szNote = dlg.m_szNote;
	}
	OnTestListAddItem();
}

void CTMCollectingDataDialog::AddParaItem(CString szItemID)
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szCode, szOldID;
	CString szAdmitDate = m_szAdmitDate.Left(10);

	bool bExisting = false;
	for (int j = 0; j < m_arItems.GetCount(); j++)
	{
		PARAITEM pi = m_arItems[j];

		szOldID = pi.szID;
		if (szOldID == szItemID)
		{
			bExisting = true;
			break;
		}
	}
	if (bExisting)
	{
		return;
	}
	szSQL.Format(_T("SELECT hfl_feeid, hfl_name, case when hfl_default_qty > 0 then hfl_default_qty else 1 end as hfl_qty, hfl_groupid, hfl_subitem, ") \
		_T(" HMS_FEE_LIST_GETPRICE(to_date('%s','YYYY-MM-DD'), hfl_servprice, hfl_servprice_prev) as servprice, ") \
		_T(" HMS_FEE_LIST_GETPRICE(to_date('%s','YYYY-MM-DD'), hfl_insprice, hfl_insprice_prev) as insprice, ") \
		_T(" HMS_FEE_LIST_GETPRICE(to_date('%s','YYYY-MM-DD'), hfl_polprice, hfl_polprice_prev) as polprice, ") \
		_T(" hfl_reqprice, hfl_reqapply ") \
		_T(" FROM hms_fee_list ") \
		_T(" WHERE hfl_active='Y' and hfl_subgroup<>'Y' and (length(hfl_subitem) <= 1 or hfl_subitem is null) AND hfl_feeid ='%s' ") \
		_T(" ORDER BY hfl_groupid, hfl_line, hfl_name"),
		szAdmitDate, szAdmitDate, szAdmitDate, szItemID);
	rs.ExecSQL(szSQL);

	// doan nay anh xem lai neu nhu ko tinh dung gia cua TYC nhu doan hien thi thi khi add xuong list cua phan kham suc khoe bi sai
	if (!rs.IsEOF())
	{
		PARAITEM pi;
		rs.GetValue(_T("hfl_feeid"), pi.szID);
		rs.GetValue(_T("hfl_groupid"), pi.szGroup);
		rs.GetValue(_T("hfl_subitem"), pi.szSubItem);
		rs.GetValue(_T("servprice"), pi.szServPrice);
		rs.GetValue(_T("insprice"), pi.szInsPrice);
		rs.GetValue(_T("polprice"), pi.szPolPrice);
		rs.GetValue(_T("hfl_reqprice"), pi.szReqPrice);
		rs.GetValue(_T("hfl_reqapply"), pi.szReqApply);
		rs.GetValue(_T("hfl_name"), pi.szName);
		rs.GetValue(_T("hfl_qty"), pi.szQty);
		if (!m_szSample.IsEmpty())
		{
			pi.szSample = m_szSample;
			pi.szNote = m_szNote;
			m_szSample.Empty();
			m_szNote.Empty();

		}

		if (!m_szDiagnosis.IsEmpty())
		{
			pi.szDiagnosis = m_szDiagnosis;
			pi.szNote = m_szNote;
			m_szDiagnosis.Empty();
			m_szNote.Empty();
		}
		m_arItems.Add(pi);
	}
}

void CTMCollectingDataDialog::OnTestListItemDblClick() {
   
}
void CTMCollectingDataDialog::OnTestListItemSelectChange(int nOldItem, int nNewItem)
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    
}
int CTMCollectingDataDialog::OnTestListItemDeleteItem()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CString szID;
    
    return 0;
}
long CTMCollectingDataDialog::OnTestListItemLoadData()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, tmpStr, szItemID, szOldID;
    
   
	if (m_wndTestListItem.GetItemCount() > 0)
    {
        for (int i = 0; i < m_wndTestListItem.GetItemCount(); i++)
        {
            CString szID = m_wndTestListItem.GetItemText(i, 0);
            CString szName = m_wndTestListItem.GetItemText(i, 1);
            CString szGroup = m_wndTestListItem.GetItemText(i, 2);

            if (m_wndTestListItem.GetCheck(i))
            {
                // Thêm nếu chưa có trong m_arSubItems
                BOOL bExists = FALSE;
                for (int j = 0; j < m_arSubItems.GetSize(); j++)
                {
                    if (m_arSubItems[j].szID == szID)
                    {
                        bExists = TRUE;
                        break;
                    }
                }
                if (!bExists)
                {
                    PARASUBITEM psi;
                    psi.szID = szID;
                    psi.szName = szName;
                    psi.szGroup = szGroup;
                    m_arSubItems.Add(psi);
                }
            }
            else
            {
                // Xóa nếu đang tồn tại trong m_arSubItems
                for (int j = m_arSubItems.GetSize() - 1; j >= 0; j--)
                {
                    if (m_arSubItems[j].szID == szID)
                    {
                        m_arSubItems.RemoveAt(j);
                    }
                }
            }
        }
	}
	else
	{
        // Add từ select list
		for (int i = 0; i < m_wndSelectList.GetItemCount(); i++)
		{
			CString szID = m_wndSelectList.GetItemKey(i);
			CString szName = m_wndSelectList.GetItemText(i, 1);
			CString szGroup = m_wndSelectList.GetItemText(i, 2);
			BOOL bExists = FALSE;
			for (int j = 0; j < m_arSubItems.GetSize(); j++)
			{
				if (m_arSubItems[j].szID == szID)
				{
					bExists = TRUE;
					break;
				}
			}
			if (!bExists)
			{
				PARASUBITEM psi;
				psi.szID = szID;
				psi.szName = szName;
				psi.szGroup = szGroup;
				m_arSubItems.Add(psi);
			}
        }
	}


	m_wndTestListItem.DeleteAllItems();

    int nIndex = 1;
    CString szUnitPrice;
    int nCurSel = 0;

    szSQL.Format(_T(" select hfl_feeid, hfl_name, hfl_groupid")
                 _T(" from hms_fee_list")
                 _T(" where hfl_subitem = '%s' order by hfl_idx "),
                 m_szTestItemID);
    rs.ExecSQL(szSQL);
    //_tprintf(_T("\r\n%s"), (LPCTSTR)  szSQL);

    m_wndTestListItem.BeginLoad();
    int nItem = 0;
    CString szGroupID, szTLIID, szName;

    while (!rs.IsEOF())
    {
        m_wndTestListItem.AddItems(
			rs.GetValue(_T("hfl_feeid")), 
			rs.GetValue(_T("hfl_name")), 
			rs.GetValue(_T("hfl_groupid")),NULL);
        szTLIID = rs.GetValue(_T("hfl_feeid"));
        for (int j = 0; j < m_arSubItems.GetCount(); j++)
        {
            PARASUBITEM psi = m_arSubItems[j];
            if (szTLIID == psi.szID)
            {
                m_wndTestListItem.SetCheck(nItem);
            }
        }
        nItem++;
        rs.MoveNext();
    }

    m_wndTestListItem.EndLoad();
    return 0;
}