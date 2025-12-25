#include "AdContractList.h"
#include "MainFrame_E10.h"
#include "AdContractDialog.h"
#include "ProductExtraInfoDialog.h"
#include "AdContractLiquidationDlg.h"
#include "MContractAppendixDlg.h"
#include "ImportInsuranceListDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CAdContractList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CAdContractList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CAdContractList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CAdContractList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CAdContractList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CAdContractList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CAdContractList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CAdContractList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CAdContractList *)pWnd)->OnSearchKillfocus();
} */


static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CAdContractList *)pWnd)->OnSearchCheckValue();
}

static void _OnRefreshSelectFnc(CWnd *pWnd){
	CAdContractList *pVw = (CAdContractList *)pWnd;
	pVw->OnRefreshSelect();
}

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdContractList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdContractList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdContractList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdContractList*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdContractList*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdContractList*)pWnd)->OnListDeleteItem();
}

static int _OnListImportFnc(CWnd* pWnd) {
	return ((CAdContractList*)pWnd)->OnImportItems();
}

static int _OnListCreateLiquidationFnc(CWnd* pWnd) {
	((CAdContractList*)pWnd)->OnListCreateLiquidation();
	return 0;
}



static void _OnItemsDblClickFnc(CWnd* pWnd) {
	((CAdContractList*)pWnd->GetParent())->OnItemsDblClick();
}
static void _OnItemsSelectChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem) {
	((CAdContractList*)pWnd->GetParent())->OnItemsSelectChange(nOldItem, nNewItem);
}
static int _OnItemsAddItemFnc(CWnd* pWnd) {
	return ((CAdContractList*)pWnd->GetParent())->OnItemsAddItem();
}
static int _OnItemsEditItemFnc(CWnd* pWnd) {
	return ((CAdContractList*)pWnd->GetParent())->OnItemsEditItem();
}
static int _OnItemsDeleteItemFnc(CWnd* pWnd) {
	return ((CAdContractList*)pWnd->GetParent())->OnItemsDeleteItem();
}
static int _OnItemsImportFnc(CWnd* pWnd) {
	return ((CAdContractList*)pWnd->GetParent())->OnImportItems();
}



static void _OnAddSelectFnc(CWnd *pWnd){
	CAdContractList *pVw = (CAdContractList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdContractList *pVw = (CAdContractList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdContractList *pVw = (CAdContractList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddAdContractListFnc(CWnd *pWnd){
	 return ((CAdContractList*)pWnd)->OnAddAdContractList();
} 
static int _OnEditAdContractListFnc(CWnd *pWnd){
	 return ((CAdContractList*)pWnd)->OnEditAdContractList();
} 
static int _OnDeleteAdContractListFnc(CWnd *pWnd){
	 return ((CAdContractList*)pWnd)->OnDeleteAdContractList();
} 
static int _OnSaveAdContractListFnc(CWnd *pWnd){
	 return ((CAdContractList*)pWnd)->OnSaveAdContractList();
} 
static int _OnCancelAdContractListFnc(CWnd *pWnd){
	 return ((CAdContractList*)pWnd)->OnCancelAdContractList();
} 
CAdContractList::CAdContractList()
{

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szSearchCode.Empty();
}
CAdContractList::~CAdContractList(){
}
void CAdContractList::OnCreateComponents(){
	m_wndContractInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 425, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 430, 30, 530, 55);
	m_wndSearch.Create(this,535, 30, 775, 55); 
	m_wndRefresh.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndList.Create(this, 5, 65, 810, 280);

	m_wndTab.Create(this, 5, 285, 810, 590);
	
	m_wndInvoices.Create(&m_wndTab, 5, 405, 810, 590);
	m_wndItems.Create(&m_wndTab, 5, 405, 810, 590);
	m_wndAppendixView.Create(&m_wndTab, CRect(0, 0, 0, 0));
	m_wndAppendixView.OnInitDialog();

	m_wndTab.Add(L"Items", &m_wndItems);
	m_wndTab.Add(L"Purchase Order", &m_wndInvoices);
	m_wndTab.Add(L"Appendix", &m_wndAppendixView);

	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);

}
void CAdContractList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetWindowText(_T("Contract List"));
	//m_wndSearch.SetCheckValue(TRUE);
	m_wndSearch.SetAllowEmpty(false);

	//m_wndList.DeleteAllColumns();
	

	m_wndList.InsertColumn(0, _T("Mã"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(1, _T("Số hợp đồng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Diễn giải"), CFMT_TEXT, 150);	
	m_wndList.InsertColumn(3, _T("Ngày ký"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(4, _T("Giá trị"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(5, _T("Đã thực hiện"), CFMT_MONEY, 100);	
	m_wndList.InsertColumn(6, _T("Mã khách hàng"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(7, _T("Số quyết định"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(8, _T("Ngày thực hiện"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(9, _T("Thời hạn (tháng)"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(10, _T("Mã ngân hàng"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(11, _T("Chi nhánh ngân hàng"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(12, _T("Địa chỉ công ty"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(13, _T("GT"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(14, _T("partnerid"), CFMT_TEXT,0 );
	

	m_wndInvoices.InsertColumn(0, _T("Invoice No"), CFMT_TEXT, 90);
	m_wndInvoices.InsertColumn(1, _T("Ngày HĐ"), CFMT_TEXT, 90);
	m_wndInvoices.InsertColumn(2, _T("Amount"), CFMT_MONEY, 100);	
	m_wndInvoices.InsertColumn(3, _T("Description"), CFMT_TEXT, 200);
	m_wndInvoices.InsertColumn(4, _T("Số TK"), CFMT_TEXT, 120);
	m_wndInvoices.InsertColumn(5, _T("Ngân hàng"), CFMT_TEXT, 500);
	
	m_wndItems.SetSortHeader(false);
	m_wndItems.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndItems.InsertColumn(1, _T("Item ID"), CFMT_TEXT, 90);
	m_wndItems.InsertColumn(2, _T("Name/ Cnt"), CFMT_TEXT, 250);
	m_wndItems.InsertColumn(3, _T("Uom"), CFMT_TEXT, 100);
	m_wndItems.InsertColumn(4, _T("Unit Price"), CFMT_TEXT, 110);
	m_wndItems.InsertColumn(5, _T("Số lượng hợp động"), CFMT_MONEY, 90);
	m_wndItems.InsertColumn(6, _T("Số tiền hợp động"), CFMT_MONEY, 120);
	m_wndItems.InsertColumn(7, _T("Số lượng nhập"), CFMT_MONEY, 90);
	m_wndItems.InsertColumn(8, _T("Số tiền nhập"), CFMT_MONEY, 120);
	m_wndItems.InsertColumn(9, _T("Số lượng còn lại"), CFMT_MONEY, 90);
	m_wndItems.InsertColumn(10, _T("Số tiền còn lại"), CFMT_MONEY, 120);
	m_wndItems.InsertColumn(11, _T("Số phiếu điều chỉnh"), CFMT_TEXT, 100);

	m_wndTab.SetCurSel(0);
}

void CAdContractList::OnSetWindowEvents(){
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

	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(4, _T("Import items"), _OnListImportFnc, 0);
	/*
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(5, _T("Add Appendix"), _OnAppendixAddItemFnc, 0);
	*/
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(6, _T("Thanh lý hợp đồng"), _OnListCreateLiquidationFnc, 0);


	m_wndItems.SetEvent(WE_DBLCLICK, _OnItemsDblClickFnc);
	m_wndItems.AddEvent(1, _T("Add"), _OnItemsAddItemFnc);
	m_wndItems.AddEvent(2, _T("Edit"), _OnItemsEditItemFnc);
	m_wndItems.AddEvent(3, _T("Delete"), _OnItemsDeleteItemFnc, 0);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);
	OnListLoadData();

}
void CAdContractList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CAdContractList::UpdateJson(BOOL bSave){
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
void CAdContractList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CAdContractList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CAdContractList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();

}

int CAdContractList::SetMode(int nMode){
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
/*void CAdContractList::OnFromDateChange(){
	
} */
/*void CAdContractList::OnFromDateSetfocus(){
	
} */
/*void CAdContractList::OnFromDateKillfocus(){
	
} */
int CAdContractList::OnFromDateCheckValue(){
	return 0;
} 
/*void CAdContractList::OnToDateChange(){
	
} */
/*void CAdContractList::OnToDateSetfocus(){
	
} */
/*void CAdContractList::OnToDateKillfocus(){
	
} */
int CAdContractList::OnToDateCheckValue(){
	return 0;
} 
/*void CAdContractList::OnSearchChange(){
	
} */
/*void CAdContractList::OnSearchSetfocus(){
	
} */
/*void CAdContractList::OnSearchKillfocus(){
	
} */
int CAdContractList::OnSearchCheckValue(){
	OnListLoadData();
	return 1;
}
void CAdContractList::OnRefreshSelect(){
	OnListLoadData();

}
 
void CAdContractList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	OnEditAdContractList();
}
 
void CAdContractList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nContractId = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_nPackageId = str2long(m_wndList.GetItemText(nNewItem, 7));
	m_szPartnerID = m_wndList.GetItemText(nNewItem, 6);
	if (nNewItem != nOldItem)
	{
		OnInvoicesLoadData();
		OnItemsLoadData();
		m_wndAppendixView.m_nContractID = m_nContractId;
		m_wndAppendixView.m_nPackageID = m_nPackageId;
		m_wndAppendixView.OnAppendixLoadData();
	}
	SetMode(VM_VIEW);
	int nSel = m_wndTab.GetCurSel();
	m_wndTab.SetCurSel(nSel);
	m_wndList.SetFocus();
	
}

int CAdContractList::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdContractList();
	 return 0;
}
int CAdContractList::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdContractList();
	 return 0;
}
int CAdContractList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdContractList();
	 return 0;
}
 
long CAdContractList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
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
		else
		{
			szWhere.AppendFormat(_T(" and lower(adc_contract_no||adc_description||get_partnername(adc_partner_id)) ") \
								_T(" like(lower('%%%s%%'))  "), m_szSearch);
		}		
	}
	/*
	szWhere.AppendFormat(_T(" and trunc(adc_signeddate) BETWEEN TO_DATE('%s', 'YYYY-MM-DD') ") \
						_T(" AND TO_DATE('%s', 'YYYY-MM-DD') "),
						m_szFromDate, m_szToDate);
	*/
	szSQL.Format(_T("SELECT ad.*,  ")
		_T(" to_char(adc_signeddate, 'dd/mm/yyyy') as ngay_ky_hop_dong,") \
		_T(" to_char(ADC_PERFORM_DATE, 'dd/mm/yyyy') as ngay_thuchien_hop_dong, ") \
		_T("           adb_enname AS bank_id,") \
		_T("           adba_branch AS bank_branch,") \
		_T("           adp_address AS partner_address ") \
		_T(" FROM      ad_contract ad") \
		_T(" LEFT JOIN ad_partner ON ( adp_partner_id = adc_partner_id )") \
		_T(" LEFT JOIN ad_bank ON ( adb_bank_id = adc_bank_id )") \
		_T(" LEFT JOIN ad_bank_account ON ( adc_bank_id = adba_bank_id AND") \
		_T("                                adc_bank_account = adba_accountno AND ") \
		_T("								adc_partner_id = adba_partner_id)") \
		_T(" WHERE ( adc_org_id='%s' or adc_org_id='GL' ) %s ") \
		_T(" ORDER BY ADC_CONTRACT_PACKAGE_ID desc")
		, pMF->GetModuleID(), szWhere);


	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("adc_contract_id")),
			rs.GetValue(_T("adc_contract_no")),
			rs.GetValue(_T("adc_description")), 
			rs.GetValue(_T("ngay_ky_hop_dong")),
			rs.GetValue(_T("ADC_AMOUNT")),
			rs.GetValue(_T("ADC_PAID_AMOUNT")),			
			rs.GetValue(_T("adc_partner_id")),
			rs.GetValue(_T("adc_contract_package_id")),
			rs.GetValue(_T("ngay_thuchien_hop_dong")),
			rs.GetValue(_T("ADC_DURATION")),			
			rs.GetValue(_T("bank_id")),
			rs.GetValue(_T("bank_branch")),
			rs.GetValue(_T("partner_address")),
			
			
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	m_wndInvoices.DeleteAllItems();
	m_wndItems.DeleteAllItems();
	m_wndTab.SetCurSel(0);
	m_wndTab.Invalidate();
	return nCount;

}

void CAdContractList::OnListCreateLiquidation()
{
	CAdContractLiquidationDlg dlg(this);
	dlg.m_nContractID = m_nContractId;
	dlg.DoModal();
}


void CAdContractList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//SetMode(VM_ADD);
	OnAddAdContractList();
}
 
void CAdContractList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdContractList();
}
 
void CAdContractList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdContractList();
}
 
int CAdContractList::OnAddAdContractList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CAdContractDialog dlg(this, VM_ADD, 0);
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	return 0;
}
int CAdContractList::OnEditAdContractList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return 0;
	CAdContractDialog dlg(this, VM_EDIT, m_nContractId);
	
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
		//_msg(_T("OK"));
	}
	return 0;  
}
int CAdContractList::OnDeleteAdContractList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("AD_CONTRACT_DELETE(%ld, '%s') "), m_nContractId, pMF->GetCurrentUser());
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0){
		OnListLoadData();
 	}
	else
	{
		CString szMsg;
		if (ret == -1)
		{
			szMsg.Format(_T("Không phải user tạo hợp đồng! Không thể xóa."));
		}
		if (ret == -2)
		{
			szMsg.Format(_T("Hợp đồng đã thanh toán! Không thể xóa."));
		}
		if (ret == -3)
		{
			szMsg.Format(_T("Hợp đồng đã có đơn nhập kho! Không thể xóa."));
		}
		if (ret == -4)
		{
			szMsg.Format(_T("Hợp đồng đã có tạm ứng thanh toán! Không thể xóa."));
		}
		ShowMessageBox(szMsg);
	}
	return 0;
}
int CAdContractList::OnSaveAdContractList(){
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
 		//OnAdContractListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdContractList::OnCancelAdContractList(){
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
 
int CAdContractList::OnAdContractListListLoadData(){
	return 0;
}


BEGIN_MESSAGE_MAP(CAdContractList, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CAdContractList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
}

long CAdContractList::OnInvoicesLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndInvoices.BeginLoad(); 
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
	szWhere.AppendFormat(_T(" and ADC_CONTRACT_ID=%ld"), m_nContractId);	

	szSQL.Format(_T(" SELECT ") \
	_T("   po_orderno           AS orderno, ") \
	_T("   to_char(po_invoicedate, 'DD/MM/YYYY')       AS invoicedate,") \
	_T("   po_totalamount             AS totalamount,") \
	_T("   po_description            as desccription,") \
	_T("   adc_bank_account          as bank_account,") \
	_T("   adb_name                  as bank_name,") \
	_T("   po_org_id ") \
	_T(" FROM PURCHASE_ORDER") \
	_T(" LEFT JOIN ad_contract ON (to_char(ADC_CONTRACT_ID)=PO_CONTRACT_ID)") \
	_T(" LEFT JOIN ad_bank ON (adc_bank_id=adb_bank_id)") \
	_T(" WHERE (po_org_id='%s' or adc_org_id='GL') %s") \
	_T(" ORDER BY po_purchase_order_id"), pMF->GetModuleID(), szWhere);


_tprintf(_T("%s"), szSQL);
//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoices.AddItems(
			rs.GetValue(_T("orderno")),			
			rs.GetValue(_T("invoicedate")),
			rs.GetValue(_T("totalamount")), 
			rs.GetValue(_T("desccription")),
			rs.GetValue(_T("bank_account")),
			rs.GetValue(_T("bank_name")),		
			NULL);
		rs.MoveNext();
	}
	m_wndInvoices.EndLoad(); 
	return nCount;
}



long CAdContractList::OnItemsLoadData()
{

	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndItems.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T(" SELECT c.m_contract_line_id, product_extra_id, ") \
		_T("     product_code                                              AS ma_hang,") \
		_T("     product_name                                              AS ten_hang,") \
		_T("     product_uomname                                           AS don_vi,") \
		_T("     c.unit_price                                              AS don_gia,") \
		_T("     c.contract_appendix_id, c.line, ca.appendix_no,") \
		_T("     c.quantity                                                AS so_luong_hop_dong,") \
		_T("     c.quantity * c.unit_price                                 AS so_tien_hop_dong,") \
		_T("     so_luong_nhap,") \
		_T("     so_tien_nhap,") \
		_T("     c.quantity - nvl(so_luong_nhap, 0)                        AS so_luong_con_lai,") \
		_T("     c.quantity * c.unit_price - nvl(so_tien_nhap, 0)          AS so_tien_con_lai") \
		_T(" FROM") \
		_T("     m_contract_line     c") \
		_T("     LEFT JOIN m_product_view  v ON ( c.product_id = v.product_id )") \
		_T("     LEFT JOIN (") \
		_T("         SELECT") \
		_T("             pol_product_id,") \
		_T("             SUM(pol_qtydelivery)                     AS so_luong_nhap,") \
		_T("             SUM(pol_qtydelivery * pol_unitprice)     AS so_tien_nhap") \
		_T("         FROM") \
		_T("             purchase_order") \
		_T("             LEFT JOIN purchase_orderline ON ( po_purchase_order_id = pol_purchase_order_id )") \
		_T("         WHERE") \
		_T("                 po_contract_id = %ld") \
		_T("             AND po_status = 'A'") \
		_T("         GROUP BY") \
		_T("             pol_product_id") \
		_T("     )                   co ON ( c.product_id = co.pol_product_id )") \
		_T(" LEFT JOIN m_contract_appendix ca ON (contract_appendix_id = m_contract_appendix_id)")
		_T(" WHERE") \
		_T("         c.contract_id = %ld") \
		_T("     AND c.product_id > 0 ") \
		_T(" ORDER BY NVL(c.contract_appendix_id, '0'), c.line, product_name, product_uomname"), m_nContractId, m_nContractId);


	_tprintf(_T("%s"), szSQL);
	//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	CString szAppendixID, szOldAppendix, szAppendixNo;
	int nItem = m_wndItems.AddCaptionRow(L"PHỤ LỤC HỢP ĐỒNG");

	while (!rs.IsEOF()) {
		szAppendixID = rs.GetValue(L"contract_appendix_id");
		szAppendixNo = rs.GetValue(L"appendix_no");
		if (!szAppendixID.IsEmpty() && szOldAppendix.IsEmpty())
		{
			szOldAppendix = szAppendixID;
			m_wndItems.AddCaptionRow (L"PHỤ LỤC BỔ SUNG");

		}
		
		m_wndItems.AddItems(
			rs.GetValue(_T("product_extra_id")),
			rs.GetValue(_T("ma_hang")),
			rs.GetValue(_T("ten_hang")),
			rs.GetValue(_T("don_vi")),
			rs.GetValue(_T("don_gia")),
			rs.GetValue(_T("so_luong_hop_dong")),
			rs.GetValue(_T("so_tien_hop_dong")),
			rs.GetValue(_T("so_luong_nhap")),
			rs.GetValue(_T("so_tien_nhap")),
			rs.GetValue(_T("so_luong_con_lai")),
			rs.GetValue(_T("so_tien_con_lai")),			
			szAppendixNo,
			NULL);
		rs.MoveNext();
	}
	//UNDONE:
	m_wndItems.EndLoad();
	return nCount;
}


void CAdContractList::OnItemsDblClick() {
	int nSel = m_wndItems.GetCurSel();
	if (nSel < 0)
		return;
}

void CAdContractList::OnItemsSelectChange(int nOldItem, int nNewItem) {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	if (nNewItem < 0)
		return;

}

int CAdContractList::OnItemsAddItem() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CProductExtraInfoDialog dlg(this, VM_ADD);
	dlg.m_pWndRef = this;
	dlg.m_nPackageID = m_nPackageId;
	dlg.m_nContractID = m_nContractId;	
	dlg.m_szPartnerID = m_szPartnerID;
	dlg.m_nID = 0;
	dlg.DoModal();
	return 0;
}
int CAdContractList::OnItemsEditItem() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	int nSel = m_wndItems.GetCurSel();
	if (nSel < 0)
		return 0;

	CProductExtraInfoDialog dlg(this, VM_EDIT);
	dlg.m_pWndRef = this;
	dlg.m_nPackageID = m_nPackageId;
	dlg.m_nContractID = m_nContractId;
	dlg.m_szHoatchatKey = m_wndItems.GetItemText(nSel, 0);
	dlg.m_nID = str2long(m_wndItems.GetItemText(nSel, 0));
	dlg.DoModal();
	return 0;
}

int CAdContractList::OnItemsDeleteItem() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	
	return 0;
}

int CAdContractList::OnImportItems() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("AD_CONTRACT_IMPORT(%ld,'%s')"), m_nContractId, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	_debug(L"CAdContractList::OnItemsImport(%d)", ret);
	OnItemsLoadData();
	return 0;
}

void CAdContractList::OnResizeLayout()
{
	AddResize(&m_wndTab, 100, 100);

	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);

}

BOOL CAdContractList::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	if (wParam == CMD_REFRESHDATA)
	{
		OnItemsLoadData();
	}
	return CGuiView::OnCommand(wParam, lParam);
}


BOOL CAdContractList::PreTranslateMessage(MSG* pMsg)
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
			OnSearchCheckValue();
		}

		if (pMsg->wParam == VK_F6)
		{
			short status = GetKeyState(VK_CONTROL);
			if ((status >> 15) & 1)
			{
				CImportInsuranceListDialog dlg(this);
				dlg.DoModal();
			}
			else
			{
				OnItemsAddItem();
			}
			
		}
		//OnImportItems();
		if (pMsg->wParam == VK_F7)
		{
			m_wndAppendixView.OnAppendixAddItem();
		}

		if (pMsg->wParam == VK_F8)
		{
			OnListCreateLiquidation();
		}
		
		if (pMsg->wParam == VK_SPACE)
		{
			if (pMsg->hwnd == m_wndList.GetSafeHwnd())
			{
				OnListDblClick();
			}
			if (pMsg->hwnd == m_wndItems.GetSafeHwnd())
			{
				OnItemsEditItem();
			}
		}
	}
	return CGuiView::PreTranslateMessage(pMsg);
}
