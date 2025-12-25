#include "stdafx.h"
#include "SRMBienbandanhgiacapcoso.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnTopicIDChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnTopicIDChange();
} */
/*static void _OnTopicIDSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnTopicIDSetfocus();} */ 
/*static void _OnTopicIDKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnTopicIDKillfocus();
} */
static int _OnTopicIDCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnTopicIDCheckValue();
} 
/*static void _OnTopicNameChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnTopicNameChange();
} */
/*static void _OnTopicNameSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnTopicNameSetfocus();} */ 
static void _OnTopicNameKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnTopicNameKillfocus();
}
static int _OnTopicNameCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnTopicNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMBienbandanhgiacapcoso*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSRMBienbandanhgiacapcoso*)pWnd)->OnListDeleteItem();
} 
/*static void _OnFromDateSTChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnFromDateSTChange();
} */
/*static void _OnFromDateSTSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnFromDateSTSetfocus();} */ 
/*static void _OnFromDateSTKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnFromDateSTKillfocus();
} */
static int _OnFromDateSTCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnFromDateSTCheckValue();
} 
/*static void _OnToDateSTChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnToDateSTChange();
} */
/*static void _OnToDateSTSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnToDateSTSetfocus();} */ 
/*static void _OnToDateSTKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnToDateSTKillfocus();
} */
static int _OnToDateSTCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnToDateSTCheckValue();
} 
/*static void _OnMemberChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnMemberChange();
} */
/*static void _OnMemberSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnMemberSetfocus();} */ 
/*static void _OnMemberKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnMemberKillfocus();
} */
static int _OnMemberCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnMemberCheckValue();
} 
/*static void _OnAbsentChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnAbsentChange();
} */
/*static void _OnAbsentSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnAbsentSetfocus();} */ 
/*static void _OnAbsentKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnAbsentKillfocus();
} */
static int _OnAbsentCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnAbsentCheckValue();
} 
/*static void _OnMemberListChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnMemberListChange();
} */
/*static void _OnMemberListSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnMemberListSetfocus();} */ 
/*static void _OnMemberListKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnMemberListKillfocus();
} */
static int _OnMemberListCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnMemberListCheckValue();
} 
/*static void _OnBoKHCNChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnBoKHCNChange();
} */
/*static void _OnBoKHCNSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnBoKHCNSetfocus();} */ 
/*static void _OnBoKHCNKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnBoKHCNKillfocus();
} */
static int _OnBoKHCNCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnBoKHCNCheckValue();
} 
/*static void _OnCTKHCNChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnCTKHCNChange();
} */
/*static void _OnCTKHCNSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnCTKHCNSetfocus();} */ 
/*static void _OnCTKHCNKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnCTKHCNKillfocus();
} */
static int _OnCTKHCNCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnCTKHCNCheckValue();
} 
/*static void _OnVanPhongChuongTrinhChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnVanPhongChuongTrinhChange();
} */
/*static void _OnVanPhongChuongTrinhSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnVanPhongChuongTrinhSetfocus();} */ 
/*static void _OnVanPhongChuongTrinhKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnVanPhongChuongTrinhKillfocus();
} */
static int _OnVanPhongChuongTrinhCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnVanPhongChuongTrinhCheckValue();
} 
/*static void _OnCoquanchuquanChangeFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnCoquanchuquanChange();
} */
/*static void _OnCoquanchuquanSetfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnCoquanchuquanSetfocus();} */ 
/*static void _OnCoquanchuquanKillfocusFnc(CWnd *pWnd){
	((CSRMBienbandanhgiacapcoso *)pWnd)->OnCoquanchuquanKillfocus();
} */
static int _OnCoquanchuquanCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbandanhgiacapcoso *)pWnd)->OnCoquanchuquanCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CSRMBienbandanhgiacapcoso *pVw = (CSRMBienbandanhgiacapcoso *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMBienbandanhgiacapcoso *pVw = (CSRMBienbandanhgiacapcoso *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddSRMBienbandanhgiacapcosoFnc(CWnd *pWnd){
	 return ((CSRMBienbandanhgiacapcoso*)pWnd)->OnAddSRMBienbandanhgiacapcoso();
} 
static int _OnEditSRMBienbandanhgiacapcosoFnc(CWnd *pWnd){
	 return ((CSRMBienbandanhgiacapcoso*)pWnd)->OnEditSRMBienbandanhgiacapcoso();
} 
static int _OnDeleteSRMBienbandanhgiacapcosoFnc(CWnd *pWnd){
	 return ((CSRMBienbandanhgiacapcoso*)pWnd)->OnDeleteSRMBienbandanhgiacapcoso();
} 
static int _OnSaveSRMBienbandanhgiacapcosoFnc(CWnd *pWnd){
	 return ((CSRMBienbandanhgiacapcoso*)pWnd)->OnSaveSRMBienbandanhgiacapcoso();
} 
static int _OnCancelSRMBienbandanhgiacapcosoFnc(CWnd *pWnd){
	 return ((CSRMBienbandanhgiacapcoso*)pWnd)->OnCancelSRMBienbandanhgiacapcoso();
} 
CSRMBienbandanhgiacapcoso::CSRMBienbandanhgiacapcoso(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSRMBienbandanhgiacapcoso::~CSRMBienbandanhgiacapcoso(){
}
void CSRMBienbandanhgiacapcoso::OnCreateComponents(){

	m_wndFilterGroup.Create(this, _T("Filter Group"), 5, 5, 491, 245);
	m_wndAdditionInfo.Create(this, _T("Addition Info"), 5, 250, 491, 510);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndTopicIDLabel.Create(this, _T("Topic ID"), 10, 60, 90, 85);
	m_wndTopicID.Create(this,95, 60, 485, 85); 
	m_wndTopicNameLabel.Create(this, _T("Topic Name"), 10, 90, 90, 115);
	m_wndTopicName.Create(this,95, 90, 485, 115); 
	m_wndList.Create(this,10, 120, 485, 240); 
	m_wndSessionTimeLabel.Create(this, _T("Th\x1EDDi gi\x61n h\x1ECDp"), 10, 275, 130, 300);
	m_wndFromDateSTLabel.Create(this, _T("From Date"), 135, 275, 225, 300);
	m_wndFromDateST.Create(this,230, 275, 310, 300); 
	m_wndToDateSTLabel.Create(this, _T("To Date"), 315, 275, 395, 300);
	m_wndToDateST.Create(this,400, 275, 480, 300); 
	m_wndMemberLabel.Create(this, _T("S\x1ED1 th\xE0nh vi\xEAn"), 10, 305, 90, 330);
	m_wndMember.Create(this,95, 305, 225, 330); 
	m_wndAbsentLabel.Create(this, _T("V\x1EAFng m\x1EB7t"), 230, 305, 310, 330);
	m_wndAbsent.Create(this,315, 305, 480, 330); 
	m_wndMemberListLabel.Create(this, _T("\x44\x61nh s\xE1\x63h"), 10, 335, 90, 360);
	m_wndMemberList.Create(this,95, 335, 480, 385); 
	m_wndBoKHCNLabel.Create(this, _T("\x110\x1EA1i \x64i\x1EC7n \x42\x1ED9 KH\x43N"), 10, 390, 225, 415);
	m_wndBoKHCN.Create(this,230, 390, 480, 415); 
	m_wndCTKHCNLabel.Create(this, _T("\x110\x1EA1i \x64i\xEAn \x62\x61n \x63h\x1EE7 nhi\x1EC7m \x43T KH\x43N"), 10, 420, 225, 445);
	m_wndCTKHCN.Create(this,230, 420, 480, 445); 
	m_wndVanPhongChuongTrinhLabel.Create(this, _T("\x110\x1EA1i \x64i\x1EC7n v\x103n ph\xF2ng \x63\xE1\x63 \x63h\x1B0\x1A1ng tr\xECnh"), 10, 450, 225, 475);
	m_wndVanPhongChuongTrinh.Create(this,230, 450, 480, 475); 
	m_wndCoquanchuquanLabel.Create(this, _T("\x110\x1EA1i \x64i\x1EC7n \x63\x1A1 qu\x61n \x63h\x1EE7 qu\x1EA3n"), 10, 480, 225, 505);
	m_wndCoquanchuquan.Create(this,230, 480, 480, 505); 
	m_wndPrint.Create(this, _T("&Print"), 325, 515, 405, 540);
	m_wndExport.Create(this, _T("&Export"), 410, 515, 490, 540);

}
void CSRMBienbandanhgiacapcoso::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndTopicID.SetLimitText(1024);
	m_wndTopicName.SetLimitText(1024);
	m_wndFromDateST.SetCheckValue(true);
	m_wndToDateST.SetCheckValue(true);
	m_wndMember.SetLimitText(16);
	m_wndAbsent.SetLimitText(16);
	m_wndMemberList.SetLimitText(35);
	m_wndBoKHCN.SetLimitText(35);
	m_wndCTKHCN.SetLimitText(35);
	m_wndVanPhongChuongTrinh.SetLimitText(35);
	m_wndCoquanchuquan.SetLimitText(35);

	m_wndList.InsertColumn(0, _T("Topic ID"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Topic Name"), CFMT_TEXT, 300);

}
void CSRMBienbandanhgiacapcoso::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndTopicID.SetEvent(WE_CHANGE, _OnTopicIDChangeFnc);
	//m_wndTopicID.SetEvent(WE_SETFOCUS, _OnTopicIDSetfocusFnc);
	//m_wndTopicID.SetEvent(WE_KILLFOCUS, _OnTopicIDKillfocusFnc);
	m_wndTopicID.SetEvent(WE_CHECKVALUE, _OnTopicIDCheckValueFnc);
	//m_wndTopicName.SetEvent(WE_CHANGE, _OnTopicNameChangeFnc);
	//m_wndTopicName.SetEvent(WE_SETFOCUS, _OnTopicNameSetfocusFnc);
	m_wndTopicName.SetEvent(WE_KILLFOCUS, _OnTopicNameKillfocusFnc);
	m_wndTopicName.SetEvent(WE_CHECKVALUE, _OnTopicNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	//m_wndFromDateST.SetEvent(WE_CHANGE, _OnFromDateSTChangeFnc);
	//m_wndFromDateST.SetEvent(WE_SETFOCUS, _OnFromDateSTSetfocusFnc);
	//m_wndFromDateST.SetEvent(WE_KILLFOCUS, _OnFromDateSTKillfocusFnc);
	m_wndFromDateST.SetEvent(WE_CHECKVALUE, _OnFromDateSTCheckValueFnc);
	//m_wndToDateST.SetEvent(WE_CHANGE, _OnToDateSTChangeFnc);
	//m_wndToDateST.SetEvent(WE_SETFOCUS, _OnToDateSTSetfocusFnc);
	//m_wndToDateST.SetEvent(WE_KILLFOCUS, _OnToDateSTKillfocusFnc);
	m_wndToDateST.SetEvent(WE_CHECKVALUE, _OnToDateSTCheckValueFnc);
	//m_wndMember.SetEvent(WE_CHANGE, _OnMemberChangeFnc);
	//m_wndMember.SetEvent(WE_SETFOCUS, _OnMemberSetfocusFnc);
	//m_wndMember.SetEvent(WE_KILLFOCUS, _OnMemberKillfocusFnc);
	m_wndMember.SetEvent(WE_CHECKVALUE, _OnMemberCheckValueFnc);
	//m_wndAbsent.SetEvent(WE_CHANGE, _OnAbsentChangeFnc);
	//m_wndAbsent.SetEvent(WE_SETFOCUS, _OnAbsentSetfocusFnc);
	//m_wndAbsent.SetEvent(WE_KILLFOCUS, _OnAbsentKillfocusFnc);
	m_wndAbsent.SetEvent(WE_CHECKVALUE, _OnAbsentCheckValueFnc);
	//m_wndMemberList.SetEvent(WE_CHANGE, _OnMemberListChangeFnc);
	//m_wndMemberList.SetEvent(WE_SETFOCUS, _OnMemberListSetfocusFnc);
	//m_wndMemberList.SetEvent(WE_KILLFOCUS, _OnMemberListKillfocusFnc);
	m_wndMemberList.SetEvent(WE_CHECKVALUE, _OnMemberListCheckValueFnc);
	//m_wndBoKHCN.SetEvent(WE_CHANGE, _OnBoKHCNChangeFnc);
	//m_wndBoKHCN.SetEvent(WE_SETFOCUS, _OnBoKHCNSetfocusFnc);
	//m_wndBoKHCN.SetEvent(WE_KILLFOCUS, _OnBoKHCNKillfocusFnc);
	m_wndBoKHCN.SetEvent(WE_CHECKVALUE, _OnBoKHCNCheckValueFnc);
	//m_wndCTKHCN.SetEvent(WE_CHANGE, _OnCTKHCNChangeFnc);
	//m_wndCTKHCN.SetEvent(WE_SETFOCUS, _OnCTKHCNSetfocusFnc);
	//m_wndCTKHCN.SetEvent(WE_KILLFOCUS, _OnCTKHCNKillfocusFnc);
	m_wndCTKHCN.SetEvent(WE_CHECKVALUE, _OnCTKHCNCheckValueFnc);
	//m_wndVanPhongChuongTrinh.SetEvent(WE_CHANGE, _OnVanPhongChuongTrinhChangeFnc);
	//m_wndVanPhongChuongTrinh.SetEvent(WE_SETFOCUS, _OnVanPhongChuongTrinhSetfocusFnc);
	//m_wndVanPhongChuongTrinh.SetEvent(WE_KILLFOCUS, _OnVanPhongChuongTrinhKillfocusFnc);
	m_wndVanPhongChuongTrinh.SetEvent(WE_CHECKVALUE, _OnVanPhongChuongTrinhCheckValueFnc);
	//m_wndCoquanchuquan.SetEvent(WE_CHANGE, _OnCoquanchuquanChangeFnc);
	//m_wndCoquanchuquan.SetEvent(WE_SETFOCUS, _OnCoquanchuquanSetfocusFnc);
	//m_wndCoquanchuquan.SetEvent(WE_KILLFOCUS, _OnCoquanchuquanKillfocusFnc);
	m_wndCoquanchuquan.SetEvent(WE_CHECKVALUE, _OnCoquanchuquanCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	
	SetMode(VM_EDIT);

}
void CSRMBienbandanhgiacapcoso::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndTopicID.GetDlgCtrlID(), m_szTopicID);
	DDX_Text(pDX, m_wndTopicName.GetDlgCtrlID(), m_szTopicName);
	DDX_TextEx(pDX, m_wndFromDateST.GetDlgCtrlID(), m_szFromDateST);
	DDX_TextEx(pDX, m_wndToDateST.GetDlgCtrlID(), m_szToDateST);
	DDX_Text(pDX, m_wndMember.GetDlgCtrlID(), m_szMember);
	DDX_Text(pDX, m_wndAbsent.GetDlgCtrlID(), m_nAbsent);
	DDX_Text(pDX, m_wndMemberList.GetDlgCtrlID(), m_szMemberList);
	DDX_Text(pDX, m_wndBoKHCN.GetDlgCtrlID(), m_szBoKHCN);
	DDX_Text(pDX, m_wndCTKHCN.GetDlgCtrlID(), m_szCTKHCN);
	DDX_Text(pDX, m_wndVanPhongChuongTrinh.GetDlgCtrlID(), m_szVanPhongChuongTrinh);
	DDX_Text(pDX, m_wndCoquanchuquan.GetDlgCtrlID(), m_szCoquanchuquan);

}
void CSRMBienbandanhgiacapcoso::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSRMBienbandanhgiacapcoso::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSRMBienbandanhgiacapcoso::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTopicID.Empty();
	m_szTopicName.Empty();
	m_szFromDateST.Empty();
	m_szToDateST.Empty();
	m_szMember.Empty();
	m_nAbsent=0;
	m_szMemberList.Empty();
	m_szBoKHCN.Empty();
	m_szCTKHCN.Empty();
	m_szVanPhongChuongTrinh.Empty();
	m_szCoquanchuquan.Empty();

}
int CSRMBienbandanhgiacapcoso::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_szFromDate = pMF->GetSysDate();
			m_szToDate = pMF->GetSysDate();
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
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CSRMBienbandanhgiacapcoso::OnFromDateChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnFromDateSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnFromDateKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMBienbandanhgiacapcoso::OnToDateChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnToDateSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnToDateKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnToDateCheckValue(){
	return 0;
} 
/*void CSRMBienbandanhgiacapcoso::OnTopicIDChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnTopicIDSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnTopicIDKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnTopicIDCheckValue(){
	return 0;
} 
/*void CSRMBienbandanhgiacapcoso::OnTopicNameChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnTopicNameSetfocus(){
	
} */
void CSRMBienbandanhgiacapcoso::OnTopicNameKillfocus(){
	OnListLoadData();
}
int CSRMBienbandanhgiacapcoso::OnTopicNameCheckValue(){
	return 0;
} 
void CSRMBienbandanhgiacapcoso::OnListDblClick(){
	
} 
void CSRMBienbandanhgiacapcoso::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szTopicID = m_wndList.GetItemText(nNewItem, 0);
	m_szTID = m_wndList.GetItemText(nNewItem, 0);
} 
int CSRMBienbandanhgiacapcoso::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSRMBienbandanhgiacapcoso::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(!m_szTopicID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and so_topicid = '%s'"), m_szTopicID);
	}
	if(!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and so_startdate between to_date('%s', 'yyyy/mm/dd') and to_date('%s', 'yyyy/mm/dd')"), m_szFromDate, m_szToDate);
	}
	if(!m_szTopicName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and UPPER(so_topicname) like UPPER(chr(37)||'%s'||chr(37)) "), m_szTopicName);
	}
	szSQL.Format(_T("SELECT * FROM srm_order WHERE 1=1 %s"), szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("so_topicid")),
			rs.GetValue(_T("so_topicname")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CSRMBienbandanhgiacapcoso::OnFromDateSTChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnFromDateSTSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnFromDateSTKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnFromDateSTCheckValue(){
	return 0;
} 
/*void CSRMBienbandanhgiacapcoso::OnToDateSTChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnToDateSTSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnToDateSTKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnToDateSTCheckValue(){
	return 0;
} 
/*void CSRMBienbandanhgiacapcoso::OnMemberChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnMemberSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnMemberKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnMemberCheckValue(){
	return 0;
} 
/*void CSRMBienbandanhgiacapcoso::OnAbsentChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnAbsentSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnAbsentKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnAbsentCheckValue(){
	return 0;
} 
/*void CSRMBienbandanhgiacapcoso::OnMemberListChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnMemberListSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnMemberListKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnMemberListCheckValue(){
	return 0;
} 
/*void CSRMBienbandanhgiacapcoso::OnBoKHCNChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnBoKHCNSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnBoKHCNKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnBoKHCNCheckValue(){
	return 0;
} 
/*void CSRMBienbandanhgiacapcoso::OnCTKHCNChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnCTKHCNSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnCTKHCNKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnCTKHCNCheckValue(){
	return 0;
} 
/*void CSRMBienbandanhgiacapcoso::OnVanPhongChuongTrinhChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnVanPhongChuongTrinhSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnVanPhongChuongTrinhKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnVanPhongChuongTrinhCheckValue(){
	return 0;
} 
/*void CSRMBienbandanhgiacapcoso::OnCoquanchuquanChange(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnCoquanchuquanSetfocus(){
	
} */
/*void CSRMBienbandanhgiacapcoso::OnCoquanchuquanKillfocus(){
	
} */
int CSRMBienbandanhgiacapcoso::OnCoquanchuquanCheckValue(){
	return 0;
} 
void CSRMBienbandanhgiacapcoso::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnPrint2();
	OnPrint3();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr,szDate;
	int nCount = 0, ret = 0;
	szSQL.Format(_T("SELECT so_topicid, so_topicname, ") \
				_T("(select ss_desc from sys_sel where ss_id = 'srm_domain_list' and ss_code = so_type) as linhvuc, ") \
				_T(" (select sml_fullname from srm_memberlist where sml_orderno = so_orderno and sml_type = '1') as cndt,") \
				_T(" (select srmta_name from srm_threadagency where srmta_id = so_host) as dvct") \
				_T(" FROM srm_order WHERE so_topicid = '%s'"), m_szTID);
	if (!rpt.Init(_T("Reports\\SRM\\DGCAPCS1.RPT")))

		return;
	_fmsg(_T("%s"), szSQL);
	ret = rs.ExecSQL(szSQL);
	nCount = rs.GetRecordCount();
	if (ret <=0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}

	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	szDate = pMF->GetSysDate();
	tmpStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), tmpStr);
	
	rs.GetValue(_T("so_topicname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("1"), tmpStr);
	rs.GetValue(_T("so_topicid"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("2"), tmpStr);
	rs.GetValue(_T("linhvuc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("6"), tmpStr);
	rs.GetValue(_T("cndt"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("7"), tmpStr);
	rs.GetValue(_T("dvct"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("8"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("10"), m_szBoKHCN);
	rpt.GetReportHeader()->SetValue(_T("11"), m_szCTKHCN);
	rpt.GetReportHeader()->SetValue(_T("12"), m_szVanPhongChuongTrinh);
	rpt.GetReportHeader()->SetValue(_T("13"), m_szCoquanchuquan);

	rpt.GetReportHeader()->SetValue(_T("sothanhvien"), m_szMember);
	rpt.GetReportHeader()->SetValue(_T("vangmat"), m_nAbsent);
	rpt.GetReportHeader()->SetValue(_T("danhsachtv"), m_szMemberList);

	rpt.PrintPreview();
} 
void CSRMBienbandanhgiacapcoso::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CSRMBienbandanhgiacapcoso::OnAddSRMBienbandanhgiacapcoso(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CSRMBienbandanhgiacapcoso::OnEditSRMBienbandanhgiacapcoso(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMBienbandanhgiacapcoso::OnDeleteSRMBienbandanhgiacapcoso(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelSRMBienbandanhgiacapcoso();
 	}
	return 0;
}
int CSRMBienbandanhgiacapcoso::OnSaveSRMBienbandanhgiacapcoso(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnSRMBienbandanhgiacapcosoListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSRMBienbandanhgiacapcoso::OnCancelSRMBienbandanhgiacapcoso(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	return 0;
} 
int CSRMBienbandanhgiacapcoso::OnSRMBienbandanhgiacapcosoListLoadData(){
	return 0;
}
void CSRMBienbandanhgiacapcoso::OnPrint2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	if (!rpt.Init(_T("Reports\\SRM\\DGCAPCS2.RPT")))
		return;
	rpt.PrintPreview();
}
void CSRMBienbandanhgiacapcoso::OnPrint3()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	if (!rpt.Init(_T("Reports\\SRM\\DGCAPCS3.RPT")))
		return;
	rpt.PrintPreview();
}