#include "AdContractPackageList.h"
#include "MainFrame_E10.h"
#include "AdContractPackageDialog.h"
#include "HMSReportForms/AMPrintForms.h"
#include "../HMSCore/DialogView.h"
#include "ProductTenderList.h"
#include "ProductTenderEntryDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageList *)pWnd)->OnSearchCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CAdContractPackageList *pVw = (CAdContractPackageList *)pWnd;
	pVw->OnRefreshSelect();
} 


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdContractPackageList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdContractPackageList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdContractPackageList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnListDeleteItem();
} 
static int _OnListPrintItemFnc(CWnd *pWnd){
	 ((CAdContractPackageList*)pWnd)->OnListPrintItem();
	 return 0;
}



static long _OnItemsLoadDataFnc(CWnd* pWnd) {
	return ((CAdContractPackageList*)pWnd->GetParent())->OnItemsLoadData();
}
static void _OnItemsDblClickFnc(CWnd* pWnd) {
	((CAdContractPackageList*)pWnd->GetParent())->OnItemsDblClick();
}
static void _OnItemsSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CAdContractPackageList*)pWnd->GetParent())->OnItemsSelectChange(nOldItem, nNewItem);
}
static int _OnItemsAddItemFnc(CWnd* pWnd) {
	return ((CAdContractPackageList*)pWnd->GetParent())->OnItemsAddItem();
}
static int _OnItemsEditItemFnc(CWnd* pWnd) {
	return ((CAdContractPackageList*)pWnd->GetParent())->OnItemsEditItem();
}
static int _OnItemsDeleteItemFnc(CWnd* pWnd) {
	return ((CAdContractPackageList*)pWnd->GetParent())->OnItemsDeleteItem();
}


static void _OnAddSelectFnc(CWnd *pWnd){
	CAdContractPackageList *pVw = (CAdContractPackageList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdContractPackageList *pVw = (CAdContractPackageList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdContractPackageList *pVw = (CAdContractPackageList *)pWnd;
	pVw->OnDeleteSelect();
}

static int _OnAddAdContractPackageListFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnAddAdContractPackageList();
} 
static int _OnEditAdContractPackageListFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnEditAdContractPackageList();
} 
static int _OnDeleteAdContractPackageListFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnDeleteAdContractPackageList();
} 
static int _OnSaveAdContractPackageListFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnSaveAdContractPackageList();
} 
static int _OnCancelAdContractPackageListFnc(CWnd *pWnd){
	 return ((CAdContractPackageList*)pWnd)->OnCancelAdContractPackageList();
}
static void _OnInActiveSelectFnc(CWnd *pWnd)
{
	 ((CAdContractPackageList*)pWnd)->OnInActiveSelect();
}
CAdContractPackageList::CAdContractPackageList()
{

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nPackageId = 0;
}
CAdContractPackageList::~CAdContractPackageList()
{
}
void CAdContractPackageList::OnCreateComponents()
{
	m_wndContractInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 425, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 430, 30, 530, 55);
	m_wndSearch.Create(this,535, 30, 770, 55); 
	m_wndRefresh.Create(this, _T("@"), 775, 30, 805, 55);

	m_wndList.Create(this, 5, 65, 810, 250);
	m_wndTab.Create(this, 5, 255, 810, 590);
	m_wndContracts.Create(&m_wndTab, 5, 255, 810, 590);
	m_wndItems.Create(&m_wndTab, 5, 255, 810, 590);
	m_wndTab.Add(L"Items", &m_wndItems);
	m_wndTab.Add(L"Contracts", &m_wndContracts);
	m_wndTab.SetCurSel(0);


	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndInActive.Create(this, _T("Không hoạt động"), 10, 595, 151, 620);
	
}
void CAdContractPackageList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowText(_T("Contract List"));
	//m_wndSearch.SetCheckValue(TRUE);
	m_wndSearch.SetAllowEmpty(false);

//	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T("Mã"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(1, _T("Gói thầu"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Year"), CFMT_NUMBER, 50);	
	m_wndList.InsertColumn(4, _T("Ngày mở thầu"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(5, _T("Thời hạn (tháng) "), CFMT_NUMBER, 120);
	m_wndList.InsertColumn(6, _T("Giá trị"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(7, _T("Hình thức"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(8, _T("Trạng thái"), CFMT_TEXT, 100);
	


	m_wndContracts.InsertColumn(0, _T("Mã"), CFMT_NUMBER, 70);
	m_wndContracts.InsertColumn(1, _T("Số hợp đồng"), CFMT_TEXT, 100);
	m_wndContracts.InsertColumn(2, _T("Diễn giải"), CFMT_TEXT, 150);	
	m_wndContracts.InsertColumn(3, _T("Ngày ký"), CFMT_TEXT, 90);
	m_wndContracts.InsertColumn(4, _T("Giá trị"), CFMT_MONEY, 100);
	m_wndContracts.InsertColumn(5, _T("Đã thực hiện"), CFMT_MONEY, 100);	
	m_wndContracts.InsertColumn(6, _T("Mã khách hàng"), CFMT_TEXT, 90);
	m_wndContracts.InsertColumn(7, _T("Mã gói thầu"), CFMT_TEXT, 0);
	m_wndContracts.InsertColumn(8, _T("Ngày thực hiện"), CFMT_TEXT, 120);
	m_wndContracts.InsertColumn(9, _T("Thời hạn (tháng)"), CFMT_NUMBER, 90);




	m_wndItems.SetSortHeader(false);
	m_wndItems.GetHeaderControl()->SetItemHeight(2);
	m_wndItems.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);               // MPEI_ID	
	m_wndItems.InsertColumn(1, _T("Mã hoạt chất"), CFMT_TEXT, 60);    // MPEI_MA_HOAT_CHAT
	m_wndItems.InsertColumn(2, _T("Tên hoạt chất"), CFMT_TEXT, 200);   // MPEI_HOAT_CHAT
	m_wndItems.InsertColumn(3, _T("Nồng độ, hàm lượng"), CFMT_TEXT, 80);     // MPEI_DUONG_DUNG
	m_wndItems.InsertColumn(4, _T("Dạng bào chế"), CFMT_TEXT, 70);     // MPEI_DUONG_DUNG
	m_wndItems.InsertColumn(5, _T("Đường dùng"), CFMT_TEXT, 70);     // MPEI_DUONG_DUNG
	m_wndItems.InsertColumn(6, _T("Đơn vị"), CFMT_TEXT, 80);    // MPEI_DON_VI_TINH
	m_wndItems.InsertColumn(7, _T("Nhóm TCKT"), CFMT_TEXT, 50);         // MPEI_MA_LOAI
	m_wndItems.InsertColumn(8, _T("Số lượng dự kiến"), CFMT_MONEY, 60); // MPEI_SO_LUONG
	m_wndItems.InsertColumn(9, _T("Đơn giá dự kiến"), CFMT_MONEY, 80); // MPEI_DON_GIA
	m_wndItems.InsertColumn(10, _T("Số tiền dự kiến"), CFMT_MONEY, 100); // MPEI_DON_GIA
	m_wndItems.InsertColumn(11, _T("Mã danh mục"), CFMT_TEXT, 70);     // MPEI_PRODUCT_ID
	m_wndItems.InsertColumn(12, _T("Tên thuốc, biệt dược"), CFMT_TEXT, 150);      // MPEI_TEN_THUOC	
	m_wndItems.InsertColumn(13, _T("Số lượng thầu"), CFMT_MONEY, 70); // MPEI_SO_LUONG
	m_wndItems.InsertColumn(14, _T("Đơn giá thầu"), CFMT_MONEY, 90); // MPEI_DON_GIA
	m_wndItems.InsertColumn(15, _T("Số tiền thầu"), CFMT_MONEY, 120); // MPEI_DON_GIA_TT
	m_wndItems.InsertColumn(16, _T("Hãng sản xuất"), CFMT_TEXT, 150);  // MPEI_HANG_SX
	m_wndItems.InsertColumn(17, _T("Nước sản xuất"), CFMT_TEXT, 150);  // MPEI_NUOC_SX
	m_wndItems.InsertColumn(18, _T("Nhà thầu"), CFMT_TEXT, 150);      // MPEI_NHA_THAU
	m_wndItems.InsertColumn(19, _T("Quyết định"), CFMT_TEXT, 100);    // MPEI_QUYET_DINH
	m_wndItems.InsertColumn(20, _T("Ngày công bố"), CFMT_DATE, 90);    // MPEI_CONG_BO
	m_wndItems.InsertColumn(21, _T("Mã thuốc BV"), CFMT_TEXT, 100);    // MPEI_MA_THUOC_BV
	m_wndItems.InsertColumn(22, _T("Mã nhóm VTYT"), CFMT_TEXT, 100);   // MPEI_MA_NHOM_VTYT
	m_wndItems.InsertColumn(23, _T("Tên nhóm VTYT"), CFMT_TEXT, 150);  // MPEI_TEN_NHOM_VTYT
	m_wndItems.InsertColumn(24, _T("Mã hiệu"), CFMT_TEXT, 100);       // MPEI_MA_HIEU
	m_wndItems.InsertColumn(25, _T("Định mức"), CFMT_NUMBER, 90);     // MPEI_DINH_MUC
	m_wndItems.InsertColumn(26, _T("Loại thầu"), CFMT_TEXT, 100);     // MPEI_LOAI_THAU
	m_wndItems.InsertColumn(27, _T("Mã gói thầu"), CFMT_TEXT, 100);   // MPEI_MA_GOI_THAU
	m_wndItems.InsertColumn(28, _T("Mã TT30"), CFMT_TEXT, 100);       // MPEI_MA_TT30
	m_wndItems.InsertColumn(29, _T("Mã AX"), CFMT_TEXT, 60);          // MPEI_CHANGE_MA_AX
	m_wndItems.InsertColumn(30, _T("Số hợp đồng"), CFMT_TEXT, 150);   // MPEI_SO_HOP_DONG
	m_wndItems.InsertColumn(31, _T("Mã hợp đồng"), CFMT_TEXT, 120);   // MPEI_CONTRACT_ID
	m_wndItems.InsertColumn(32, _T("product_tender_id"), CFMT_TEXT, 0);   // MPEI_PRODUCT_TENDER_ID
	
}

void CAdContractPackageList::OnSetWindowEvents()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndInActive.SetEvent(WE_CLICK, _OnInActiveSelectFnc);
	//m_wndList.AddEvent(0, _T("-"));
	//m_wndList.AddEvent(4, _T("Print"), _OnListPrintItemFnc);


	m_wndItems.SetEvent(WE_DBLCLICK, _OnItemsDblClickFnc);
	m_wndItems.AddEvent(1, _T("Add"), _OnItemsAddItemFnc);
	m_wndItems.AddEvent(2, _T("Edit"), _OnItemsEditItemFnc);
	m_wndItems.AddEvent(3, _T("Delete"), _OnItemsDeleteItemFnc, 0);


	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);
	OnListLoadData();

}
void CAdContractPackageList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndInActive.GetDlgCtrlID(), m_bInActive);

}
void CAdContractPackageList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CAdContractPackageList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CAdContractPackageList::GetScreenToData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CAdContractPackageList::SetDefaultValues()
{
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();
	m_bInActive=FALSE;
}

int CAdContractPackageList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CAdContractPackageList::OnFromDateChange(){
	
} */
/*void CAdContractPackageList::OnFromDateSetfocus(){
	
} */
/*void CAdContractPackageList::OnFromDateKillfocus(){
	
} */
int CAdContractPackageList::OnFromDateCheckValue(){
	return 0;
} 
/*void CAdContractPackageList::OnToDateChange(){
	
} */
/*void CAdContractPackageList::OnToDateSetfocus(){
	
} */
/*void CAdContractPackageList::OnToDateKillfocus(){
	
} */
int CAdContractPackageList::OnToDateCheckValue(){
	return 0;
} 
/*void CAdContractPackageList::OnSearchChange(){
	
} */
/*void CAdContractPackageList::OnSearchSetfocus(){
	
} */
/*void CAdContractPackageList::OnSearchKillfocus(){
	
} */
int CAdContractPackageList::OnSearchCheckValue(){
	return 0;
}
void CAdContractPackageList::OnInActiveSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
	
}
void CAdContractPackageList::OnRefreshSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
}

int CAdContractPackageList::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdContractPackageList();
	 return 0;
}
int CAdContractPackageList::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdContractPackageList();
	 return 0;
}
int CAdContractPackageList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdContractPackageList();
	 return 0;
}
 
long CAdContractPackageList::OnListLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(TRUE);
	m_wndList.BeginLoad(); 
	m_wndContracts.DeleteAllItems();
	int nCount = 0;	
	
	/*if(m_szSearchCode == _T("Deactive"))
	{
		szWhere.Format(_T(" and adcp_isactive <> 'Y' "));
	}
	else
	{
		szWhere.Format(_T(" and adcp_isactive = 'Y' "));
	}*/

	if (m_bInActive)

	{
		szWhere.AppendFormat(_T(" and NVL(adcp_isactive,'N') = 'N' "));
	}

	else
	{
		szWhere.AppendFormat(_T(" and NVL(adcp_isactive,'N') = 'Y' "));
	}


	if(!m_szSearch.IsEmpty()){
		/*
		if(m_szSearchCode == _T("Contract_No")){
			szWhere.AppendFormat(_T(" and lower(adcp_contract_package_id) like(lower('%%%s%%')) "), m_szSearch);
		}
		else
		{
			szWhere.AppendFormat(_T(" and lower(adcp_description) like(lower('%%%s%%'))  "), m_szSearch);
		}
		*/
		szWhere.AppendFormat(_T(" and (lower(adcp_description||adcp_contract_package_uid||adcp_contract_package_id) like(lower('%%%s%%'))  )"), m_szSearch, m_szSearch);
	}

	szWhere.AppendFormat(_T(" and adcp_date BETWEEN TO_DATE('%s', 'YYYY-MM-DD') AND TO_DATE('%s', 'YYYY-MM-DD') "),
		m_szFromDate, m_szToDate);

	szSQL.Format(_T("SELECT cp.*, ")
		_T("		get_syssel_desc('CONTRACT_METHOD', adcp_method) as method, ") \
		_T("		to_char(adcp_date, 'dd/mm/yyyy') as ngay_mo_thau,") \
		_T("		to_char(adcp_expdate, 'dd/mm/yyyy') as ngay_het_han, ") \
		_T("		ADCP_DURATION as thoi_han ") \
		_T(" FROM ad_contract_package cp") \
		_T(" WHERE ( adcp_org_id='%s' or adcp_org_id='GL' ) %s ") \
		_T(" ORDER BY adcp_contract_package_uid desc"), pMF->GetModuleID(), szWhere);

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("adcp_contract_package_uid")), 
			rs.GetValue(_T("adcp_contract_package_id")),
			rs.GetValue(_T("adcp_description")), 
			rs.GetValue(_T("adcp_year")), 
			rs.GetValue(_T("ngay_mo_thau")), 
			//rs.GetValue(_T("ngay_het_han")),
			rs.GetValue(_T("ADCP_DURATION")),
			rs.GetValue(_T("adcp_amount")), 
			rs.GetValue(_T("method")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}

void CAdContractPackageList::OnListSelectChange(int nOldItem, int nNewItem){
	if(nNewItem < 0)
		return;
	m_nPackageId = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_szID = m_wndList.GetItemText(nNewItem, 1);
	//if (nNewItem != nOldItem)
	{
		OnItemsLoadData();
		OnContractsLoadData();
	}
	int nSel = m_wndTab.GetCurSel();
	m_wndTab.SetCurSel(nSel);
	m_wndList.SetFocus();
	
}

void CAdContractPackageList::OnListDblClick()
{
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	OnListEditItem();
}

int CAdContractPackageList::OnItemsAddItem() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	if (m_szID.IsEmpty())
		return -1;

	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return 0;

	CProductTenderEntryDialog dlg(this, VM_ADD);
	dlg.m_pWndRef = this;
	dlg.m_nTenderID = m_nPackageId;
	dlg.DoModal();
	return 0;
}
int CAdContractPackageList::OnItemsEditItem() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	if (m_szID.IsEmpty())
		return -1;
	int nSel = m_wndItems.GetCurSel();
	if (nSel < 0)
		return 0;
	

	CProductTenderEntryDialog dlg(this, VM_EDIT);
	dlg.m_pWndRef = this;
	dlg.m_nTenderID = m_nPackageId;
	dlg.m_nID = str2long(m_wndItems.GetItemText(nSel, 0));
	dlg.m_szActiveIngredientIDKey = m_wndItems.GetItemText(nSel, 32);
	_debug(L"%s", dlg.m_szActiveIngredientIDKey);
	dlg.DoModal();

	return 0;
}
int CAdContractPackageList::OnItemsDeleteItem() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CString szSQL;
	int nSel = m_wndItems.GetCurSel();
	if (nSel < 0)
		return 0;
	int ret = ShowMessageBox(L"Vui lòng xác nhận xóa mục đã chọn?", MB_YESNO);
	if (ret == IDNO)
		return -1;

	m_nProductExtraId = str2long(m_wndItems.GetItemText(nSel, 0));
	szSQL.Format(L"AD_CONTRACT_PACKAGE_DELETELINE(%ld, %ld, '%s')", m_nPackageId, m_nProductExtraId, pMF->GetCurrentUser());
	ret = str2int(pMF->ExecDML(szSQL));
	cout << ret << endl;
	if (ret <= 0)
	{
		CString szMsg;
		szMsg.Format(L"[%d] Lỗi không xóa được đề mục", ret);
		ShowMessageBox(szMsg);
		return -1;
	}
	m_wndItems.DeleteItem(nSel);
	return 0;
}

long CAdContractPackageList::OnItemsLoadData()
{

	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndItems.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T(" SELECT") \
		_T("     m_product_tender.*,") \
		_T("     m_product_extra_info.*,") \
		_T("     mpei_so_luong_du_kien * mpei_don_gia_du_kien  AS mpei_so_tien_du_kien,") \
		_T("     (") \
		_T("         SELECT DISTINCT") \
		_T("             pu_name") \
		_T("         FROM") \
		_T("             pms_usedrug") \
		_T("         WHERE") \
		_T("             pu_id = route_id") \
		_T("     )                                             AS route,") \
		_T("     get_uomname(uom_id)                           AS uom") \
		_T(" FROM") \
		_T("     m_product_extra_info") \
		_T("     LEFT JOIN m_product_tender ON ( m_product_tender_id = mpei_product_tender_id )") \
		_T(" WHERE") \
		_T("     mpei_ma_goi_thau = %ld ") \
		_T(" ORDER BY") \
		_T("     mpei_stt,") \
		_T("     mpei_hoat_chat"), m_nPackageId);


	nCount = rs.ExecSQL(szSQL);




	while (!rs.IsEOF()) {
		m_wndItems.AddItems(
			rs.GetValue(_T("mpei_id")),           // Column 0: MPEI_ID
			rs.GetValue(_T("code")),            // Column 2: MPEI_MA_HOAT_CHAT
			rs.GetValue(_T("active_ingredient")),            // Column 3: MPEI_HOAT_CHAT (can be same as Column 2)
			rs.GetValue(_T("dosage_id")),
			rs.GetValue(_T("dosage_form")),
			rs.GetValue(_T("route")),
			rs.GetValue(_T("uom")),         // Column 5: MPEI_DON_VI_TINH
			rs.GetValue(_T("category_id")),           // Column 1: MPEI_PRODUCT_ID
			rs.GetValue(_T("mpei_so_luong_du_kien")),          // Column 7: MPEI_DON_GIA_TT
			rs.GetValue(_T("mpei_don_gia_du_kien")),             // Column 6: MPEI_DON_GIA
			rs.GetValue(_T("mpei_so_tien_du_kien")),            // Column 8: MPEI_SO_LUONG*DON_GIA_DU_KIEN
			rs.GetValue(_T("mpei_product_id")),           // Column 1: MPEI_PRODUCT_ID
			rs.GetValue(_T("mpei_ten_thuoc")),            // Column 4: MPEI_TEN_THUOC
			rs.GetValue(_T("mpei_so_luong")),            // Column 8: MPEI_SO_LUONG
			rs.GetValue(_T("mpei_don_gia")),             // Column 6: MPEI_DON_GIA
			rs.GetValue(_T("mpei_don_gia_tt")),          // Column 7: MPEI_DON_GIA_TT
			rs.GetValue(_T("mpei_so_tien_thau")),        // Column 9: MPEI_SO_TIEN_THAU
			rs.GetValue(_T("mpei_hang_sx")),             // Column 10: MPEI_HANG_SX
			rs.GetValue(_T("mpei_nuoc_sx")),             // Column 11: MPEI_NUOC_SX
			rs.GetValue(_T("mpei_nha_thau")),            // Column 12: MPEI_NHA_THAU
			rs.GetValue(_T("mpei_quyet_dinh")),          // Column 13: MPEI_QUYET_DINH
			rs.GetValue(_T("mpei_cong_bo")),             // Column 14: MPEI_CONG_BO
			rs.GetValue(_T("mpei_ma_thuoc_bv")),         // Column 15: MPEI_MA_THUOC_BV
			rs.GetValue(_T("mpei_ma_nhom_vtyt")),        // Column 16: MPEI_MA_NHOM_VTYT
			rs.GetValue(_T("mpei_ten_nhom_vtyt")),       // Column 17: MPEI_TEN_NHOM_VTYT
			rs.GetValue(_T("mpei_ma_hieu")),             // Column 18: MPEI_MA_HIEU
			rs.GetValue(_T("mpei_dinh_muc")),            // Column 19: MPEI_DINH_MUC
			rs.GetValue(_T("mpei_loai_thau")),           // Column 20: MPEI_LOAI_THAU
			rs.GetValue(_T("mpei_ma_goi_thau")),         // Column 21: MPEI_MA_GOI_THAU
			rs.GetValue(_T("mpei_ma_tt30")),             // Column 23: MPEI_MA_TT30
			rs.GetValue(_T("mpei_so_hop_dong")),         // Column 25: MPEI_SO_HOP_DONG
			rs.GetValue(_T("mpei_contract_id")),         // Column 26: MPEI_CONTRACT_ID			
			rs.GetValue(_T("mpei_product_tender_id")),         // Column 26: MPEI_PRODUCT_TENDER_ID			
			NULL                                  
		);

		rs.MoveNext();
	}
	m_wndItems.EndLoad();
	return nCount;

}

void CAdContractPackageList::OnItemsSelectChange(int nOldItem, int nNewItem) {
	if (nNewItem < 0)
		return;
}

void CAdContractPackageList::OnItemsDblClick()
{
	OnItemsEditItem();
}

void CAdContractPackageList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//SetMode(VM_ADD);
	OnAddAdContractPackageList();
}
 
void CAdContractPackageList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdContractPackageList();
}
 
void CAdContractPackageList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdContractPackageList();
}
 
int CAdContractPackageList::OnAddAdContractPackageList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CAdContractPackageDialog dlg(this, VM_ADD, 0);
	if(dlg.DoModal() == IDOK)
	{
	}
	return 0;
}
int CAdContractPackageList::OnEditAdContractPackageList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return 0;
	CAdContractPackageDialog dlg(this, VM_EDIT, m_nPackageId);
	dlg.m_szID = m_szID;
	if(dlg.DoModal() == IDOK)
	{
	}
	return 0;  
}
int CAdContractPackageList::OnDeleteAdContractPackageList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	szSQL.Format(_T("AD_CONTRACT_PACKAGE_DELETE_V2(%ld, '%s', '%s') "), m_nPackageId, pMF->GetCurrentUser(), pMF->GetModuleID());
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0){
		OnListLoadData();
 	}
	return 0;
}
int CAdContractPackageList::OnSaveAdContractPackageList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnAdContractPackageListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdContractPackageList::OnCancelAdContractPackageList(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
}
 
int CAdContractPackageList::OnAdContractPackageListListLoadData(){
	return 0;
}

BEGIN_MESSAGE_MAP(CAdContractPackageList, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CAdContractPackageList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
}

int CAdContractPackageList::OnContractsLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndContracts.BeginLoad(); 
	int nCount = 0;
	
	if(m_szSearchCode == _T("Deactive")){
		szWhere.Format(_T(" and adc_isactive <> 'Y' "));
	}
	else
	{
		szWhere.Format(_T(" and adc_isactive = 'Y' "));
	}

	if(!m_szSearch.IsEmpty()){
		if(m_szSearchCode == _T("Contract_No")){
			szWhere.AppendFormat(_T(" and lower(adc_contract_id) like(lower(chr(37)||'%s'||chr(37))) "), m_szSearch);
		}
		if(m_szSearchCode == _T("Description")){
			szWhere.AppendFormat(_T(" and lower(adc_description) like(lower('%%%s%%'))  "), m_szSearch);
		}

		
	}
	szWhere.AppendFormat(_T(" and adc_contract_package_id=%ld"), m_nPackageId);

	szSQL.Format(_T("SELECT ad.*,  ")
		_T("to_char(adc_signeddate, 'dd/mm/yyyy') as ngay_ky_hop_dong,") \
		_T("to_char(ADC_PERFORM_DATE, 'dd/mm/yyyy') as ngay_thuchien_hop_dong ") \
		_T("FROM ad_contract ad ") \
		_T("WHERE adc_org_id in('%s','GL') %s ") \
		_T("ORDER BY adc_contract_id"), pMF->GetModuleID(), szWhere);

_tprintf(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndContracts.AddItems(
			rs.GetValue(_T("adc_contract_id")),
			rs.GetValue(_T("adc_contract_no")),
			rs.GetValue(_T("adc_description")), 
			rs.GetValue(_T("ngay_ky_hop_dong")),
			rs.GetValue(_T("ADC_AMOUNT")),
			rs.GetValue(_T("ADC_PAID_AMOUNT")),			
			rs.GetValue(_T("adc_partner_id")),
			rs.GetValue(_T("adc_contract_package_id")),
			rs.GetValue(_T("ADC_DURATION")),
			rs.GetValue(_T("ngay_thuchien_hop_dong")),			
			rs.GetValue(_T("ADC_PAYMENT_DATE")),
			NULL);
		rs.MoveNext();
	}
	m_wndContracts.EndLoad(); 
	return nCount;
}

void CAdContractPackageList::OnRefresh()
{
	OnListLoadData();
}

void CAdContractPackageList::OnListPrintItem()
{
	CAMPrintForms printer;
	printer.In_phieu_de_nghi_tt(str2long(m_szID));
}

void CAdContractPackageList::OnResizeLayout()
{
	AddResize(&m_wndTab, 100, 100);

	AddBottom(&m_wndInActive, 5, true);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
}

BOOL CAdContractPackageList::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	if (wParam == CMD_REFRESHDATA)
	{
		OnItemsLoadData();
	}
	return CGuiView::OnCommand(wParam, lParam);
}


BOOL CAdContractPackageList::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->wParam == VK_F3)
		{
			m_wndSearch.SetFocus();
		}
		if (pMsg->wParam == VK_F4)
		{
			OnAddSelect();
		}
		if (pMsg->wParam == VK_F5)
		{
			OnRefresh();
		}
		if (pMsg->wParam == VK_F6)
		{
			OnItemsAddItem();
		}
		if (pMsg->wParam == VK_SPACE)
		{
			if (pMsg->hwnd == m_wndList.GetSafeHwnd())
			{
				OnListDblClick();
			}
			if (pMsg->hwnd == m_wndItems.GetSafeHwnd())
			{
				OnItemsDblClick();
			}
		}

	}
	return CGuiView::PreTranslateMessage(pMsg);
}
