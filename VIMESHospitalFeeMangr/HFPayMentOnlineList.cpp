#include "HFPayMentOnlineList.h"
#include "MainFrm.h"
#include "HMSMainFrame.h"
#include "HMSBankInvoiceInfoDialog.h"
#include <afxwin.h>
#include <afxinet.h>
#include <fstream>
#include <iostream>
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHFPayMentOnlineList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHFPayMentOnlineList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHFPayMentOnlineList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHFPayMentOnlineList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHFPayMentOnlineList *)pWnd)->OnSearchCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHFPayMentOnlineList *pVw = (CHFPayMentOnlineList *)pWnd;
	pVw->OnLoadSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHFPayMentOnlineList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHFPayMentOnlineList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHFPayMentOnlineList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHFPayMentOnlineList*)pWnd)->OnListDeleteItem();
} 
static int _OnListPaymentItemFnc(CWnd* pWnd) {
	return ((CHFPayMentOnlineList*)pWnd)->OnListPaymentItem();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CHFPayMentOnlineList *pVw = (CHFPayMentOnlineList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnSearchBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHFPayMentOnlineList* )pWnd)->OnSearchBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSearchBySelendokFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnSearchBySelendok();
}
/*static void _OnSearchBySetfocusFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnSearchByKillfocus();
}*/
/*static void _OnSearchByKillfocusFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnSearchByKillfocus();
}*/
static long _OnSearchByLoadDataFnc(CWnd *pWnd){
	return ((CHFPayMentOnlineList *)pWnd)->OnSearchByLoadData();
}
/*static void _OnSearchByAddNewFnc(CWnd *pWnd){
	((CHFPayMentOnlineList *)pWnd)->OnSearchByAddNew();
}*/
static void _OnSearchBtnSelectFnc(CWnd* pWnd) {
	CHFPayMentOnlineList* pVw = (CHFPayMentOnlineList*)pWnd;
	pVw->OnSearchBtnSelect();
}
static void _OnReconciliationSelectFnc(CWnd* pWnd) {
	CHFPayMentOnlineList* pVw = (CHFPayMentOnlineList*)pWnd;
	pVw->OnReconciliationSelect();
}
static int _OnAddHFPayMentOnlineListFnc(CWnd *pWnd){
	 return ((CHFPayMentOnlineList*)pWnd)->OnAddHFPayMentOnlineList();
} 
static int _OnEditHFPayMentOnlineListFnc(CWnd *pWnd){
	 return ((CHFPayMentOnlineList*)pWnd)->OnEditHFPayMentOnlineList();
} 
static int _OnDeleteHFPayMentOnlineListFnc(CWnd *pWnd){
	 return ((CHFPayMentOnlineList*)pWnd)->OnDeleteHFPayMentOnlineList();
} 
static int _OnSaveHFPayMentOnlineListFnc(CWnd *pWnd){
	 return ((CHFPayMentOnlineList*)pWnd)->OnSaveHFPayMentOnlineList();
} 
static int _OnCancelHFPayMentOnlineListFnc(CWnd *pWnd){
	 return ((CHFPayMentOnlineList*)pWnd)->OnCancelHFPayMentOnlineList();
} 
CHFPayMentOnlineList::CHFPayMentOnlineList()
{

	m_nDlgWidth = 1024;
	m_nDlgHeight = 780;
	SetDefaultValues();
}
CHFPayMentOnlineList::~CHFPayMentOnlineList(){
}
void CHFPayMentOnlineList::OnCreateComponents(){
	m_wndGrpPreriot.Create(this, _T("Điều kiện tìm kiếm"), 5, 5, 1005, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 135, 55);
	m_wndFromDate.Create(this, 140, 30, 265, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 270, 30, 400, 55);
	m_wndToDate.Create(this, 405, 30, 530, 55);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 60, 135, 85);
	m_wndType.Create(this, 140, 60, 531, 85);
	m_wndSearchLabel.Create(this, _T("Số HS"), 535, 30, 660, 55);
	m_wndSearch.Create(this, 665, 30, 830, 55);
	m_wndLoad.Create(this, _T("Load"), 835, 30, 915, 55);
	m_wndList.Create(this, 3, 95, 1003, 725);
	m_wndExport.Create(this, _T("Export"), 920, 30, 1000, 55);
	m_wndSearchByLabel.Create(this, _T("Search By"), 535, 60, 660, 85);
	m_wndSearchBy.Create(this, 665, 60, 830, 85);
	m_wndReconciliation.Create(this, _T("Đối soát"), 835, 60, 915, 85);
	m_wndSearchBtn.Create(this, _T("@"), 920, 60, 1000, 85);
}
void CHFPayMentOnlineList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndSearchBy.SetCheckValue(true);
	m_wndSearchBy.LimitText(35);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(1, _T("RefID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Docno"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Mã tham chiếu"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("InvoiceNo"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Payment Time"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(7, _T("Amount"), CFMT_MONEY, 125);
	m_wndList.InsertColumn(8, _T("Status"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(9, _T("Type"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(10, _T("Khoa"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(11, _T("Người tạo"), CFMT_TEXT, 150);


	m_wndSearchBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSearchBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHFPayMentOnlineList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("In phiếu"), _OnListDeleteItemFnc);

	if (pMF->GetModuleID() == _T("FM") && pMF->CheckPermission(_T("FM.100.100")))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		//m_wndList.AddEvent(2, _T("Cập nhật trạng thái phiếu"), _OnListPaymentItemFnc);
	}

	CRecord rs(&pMF->m_db);
	CString szSQL, szTmp;
	szSQL.Format(_T("SELECT viettin_bank_qr_address FROM hms_config"));
	rs.ExecSQL(szSQL);
	szTmp = rs.GetStringValue();
	int start = szTmp.Find(_T("http://")) + 7;
	int end = szTmp.Find(_T(":"), start);
	m_szUrlBank = szTmp.Mid(start, end - start);	

	if (m_szUrlBank.IsEmpty())
	{
		_msg(_T("Chưa thiết lập địa chỉ máy chủ dịch vụ Bank. [hf_url_qr_bank= http://vimes.xyz]"));
	}

	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndSearchBy.SetEvent(WE_SELENDOK, _OnSearchBySelendokFnc);
	//m_wndSearchBy.SetEvent(WE_SETFOCUS, _OnSearchBySetfocusFnc);
	//m_wndSearchBy.SetEvent(WE_KILLFOCUS, _OnSearchByKillfocusFnc);
	m_wndSearchBy.SetEvent(WE_SELCHANGE, _OnSearchBySelectChangeFnc);
	m_wndSearchBy.SetEvent(WE_LOADDATA, _OnSearchByLoadDataFnc);
	//m_wndSearchBy.SetEvent(WE_ADDNEW, _OnSearchByAddNewFnc);
	m_wndReconciliation.SetEvent(WE_CLICK, _OnReconciliationSelectFnc);
	m_wndSearchBtn.SetEvent(WE_CLICK, _OnSearchBtnSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHFPayMentOnlineListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHFPayMentOnlineListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHFPayMentOnlineListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHFPayMentOnlineListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHFPayMentOnlineListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_ADD);

}
void CHFPayMentOnlineList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndSearchBy.GetDlgCtrlID(), m_szSearchByKey);

}
void CHFPayMentOnlineList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("SearchBy")] =  m_szSearchByKey;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("SearchBy")].GetValue(m_szSearchByKey);
	}

}
void CHFPayMentOnlineList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHFPayMentOnlineList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHFPayMentOnlineList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_szSearch.Empty();
	m_szSearchByKey.Empty();

}
int CHFPayMentOnlineList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, -1);
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

		m_szFromDate.Format(_T("%s %s"), pMF->GetSysDate(), _T("00:00:00"));
		m_szToDate.Format(_T("%s"), pMF->GetSysDateTime());
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHFPayMentOnlineList::OnFromDateChange(){
	
} */
/*void CHFPayMentOnlineList::OnFromDateSetfocus(){
	
} */
/*void CHFPayMentOnlineList::OnFromDateKillfocus(){
	
} */
int CHFPayMentOnlineList::OnFromDateCheckValue(){
	return 0;
} 
/*void CHFPayMentOnlineList::OnToDateChange(){
	
} */
/*void CHFPayMentOnlineList::OnToDateSetfocus(){
	
} */
/*void CHFPayMentOnlineList::OnToDateKillfocus(){
	
} */
int CHFPayMentOnlineList::OnToDateCheckValue(){
	return 0;
} 
void CHFPayMentOnlineList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHFPayMentOnlineList::OnTypeSelendok(){
	 
}
/*void CHFPayMentOnlineList::OnTypeSetfocus(){
	
}*/
/*void CHFPayMentOnlineList::OnTypeKillfocus(){
	
}*/
long CHFPayMentOnlineList::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHFPayMentOnlineList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHFPayMentOnlineList::OnSearchChange(){
	
} */
/*void CHFPayMentOnlineList::OnSearchSetfocus(){
	
} */
/*void CHFPayMentOnlineList::OnSearchKillfocus(){
	
} */
int CHFPayMentOnlineList::OnSearchCheckValue(){
	return 0;
} 
void CHFPayMentOnlineList::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
} 
void CHFPayMentOnlineList::OnListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;

	long nDoc = ToLong(m_wndList.GetItemText(nSel, 2));
	long nInvoiceNo = ToLong(m_wndList.GetItemText(nSel, 5));
	pMF->m_nDocumentNo = nDoc;	
	pMF->m_wndPatientFee.LoadData(nDoc);
	if(nInvoiceNo > 0){
		pMF->m_wndPatientFee.OnInvoiceListSelectCurrent(nInvoiceNo);
	}
} 
void CHFPayMentOnlineList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_nDocumentNo = ToLong(m_wndList.GetItemText(nNewItem, 2));
	m_nKey = ToLong(m_wndList.GetItemText(nNewItem, 1));
	m_szPatientName = m_wndList.GetItemText(nNewItem, 3);
	m_nAmount = ToLong(m_wndList.GetItemText(nNewItem, 7));
} 
int CHFPayMentOnlineList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSBankInvoiceInfoDialog dlg(this, VM_VIEW);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nKey = m_nKey;
	dlg.PrintQRCodeSheet(m_nDocumentNo, m_nKey);
	
	return 0;
} 
long CHFPayMentOnlineList::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere1,szWhere2, tmpStr;
	m_wndList.BeginLoad(); 
	UpdateData(true);
	int nCount = 0;
	if(!m_szSearch.IsEmpty())
	{
		if(str2long(m_szSearch)>0)
		{
			szWhere1.Format(_T(" AND (hfb_docno=%s OR hfb_requestid='%s') "), m_szSearch,m_szSearch);
		}		
	}
	
	szSQL.Format(_T("SELECT hfb_key,") \
	_T("     hfb_requestid              AS refkey,") \
	_T("     get_username(hfb_userid)	AS ma_nv,") \
	_T("     hfb_posid                  AS POS_ID,") \
	_T("     hfb_time                   AS tg_ttoan,") \
	_T("     hfb_status                 AS status,") \
	_T("     hfb_amount                 AS so_tien,") \
	_T("     hfb_sequence               AS refno,") \
	_T("     hfb_docno                  AS so_hs,") \
	_T("     get_patientname(hfb_docno) AS pname,") \
	_T("     hfb_invoiceno              AS invoice_his,") \
	_T("     'QR'                       AS type,") \
	_T("     hfb_deptid                 AS deptid") \
	_T("   FROM hms_fee_invoice_mb") \
	_T("   WHERE hfb_time BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
	_T(" ORDER BY refkey,") \
	_T(" tg_ttoan"), m_szFromDate, m_szToDate ,szWhere1);


	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	int nTmpInt=1;
	int nItem =0;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"),nTmpInt++);
		CString szStatus;
		if(rs.GetValue(_T("status")) == _T("P"))
			szStatus = _T("Đã thanh toán");
		else if(rs.GetValue(_T("status")) == _T("O"))
			szStatus = _T("Đợi thanh toán");
		else if(rs.GetValue(_T("status")) == _T("C"))
			szStatus = _T("Hủy thanh toán");

		nItem = m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("hfb_key")), 
			rs.GetValue(_T("so_hs")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("refno")), 
			rs.GetValue(_T("invoice_his")), 
			rs.GetValue(_T("tg_ttoan")), 
			rs.GetValue(_T("so_tien")), 
			szStatus,
			rs.GetValue(_T("type")),
			rs.GetValue(_T("deptid")),
			rs.GetValue(_T("ma_nv")), NULL);

		if(rs.GetValue(_T("status")) == _T("P")){
			
			m_wndList.SetSubItemBkColor(nItem, 8, RGB(185, 122, 87), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 8, RGB(255, 255, 255), FALSE);
		}

		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHFPayMentOnlineList::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CExcel xls;
	CRecord rs(&pMF->m_db);
	enum
	{
		sizeOfBuffer = 256
	};
	TCHAR szName[sizeOfBuffer]; // This is the buffer where the name will be stored
	//LVCOLUMN lvColInfo;
	HDITEM hdi;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	int nRow = 0, nType = 0, nWidth = 0;
	int nCol=0;
	
	for (int i = 0; i < m_wndList.GetColumnCount(); i++)
	{
		hdi.mask = HDI_TEXT;
		hdi.pszText = szName;
		//m_wndList.GetHeaderControl()->GetItem(i, &hdi);
		 
//		_debug(_T("%d|%s"), i, szName);
		nWidth = m_wndList.GetColumnWidth(i);
		xls.SetColumnWidth(i, nWidth/8);
		//xls.SetCellText(i, 0, arrCol.GetAt(i), 4098, true);
		xls.SetCellText(i, 0, szName, 4098, true);
	}	
	nRow++;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		for (int j = 0; j < m_wndList.GetColumnCount(); j++)
		{
			nType = m_wndList.GetColumnFmt(j);
		//	_msg(_T("%d"),nType);
			if (nType == 256 )
				xls.SetCellText(j, nRow, m_wndList.GetItemText(i, j), FMT_TEXT);
			else if (nType == 8192)
			{
				if (!m_wndList.GetItemText(i, j).IsEmpty())
					xls.SetCellText(j, nRow, m_wndList.GetItemText(i, j), FMT_DATETIME);
			}
			else
				xls.SetCellText(j, nRow, m_wndList.GetItemText(i, j), FMT_NUMBER1);
		}
		nRow++;
	}

	xls.Save(_T("Exports\\Du Lieu Thanh Toan QR POS.xls"));
	
} 
void CHFPayMentOnlineList::OnSearchBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHFPayMentOnlineList::OnSearchBySelendok(){
	 
}
/*void CHFPayMentOnlineList::OnSearchBySetfocus(){
	
}*/
/*void CHFPayMentOnlineList::OnSearchByKillfocus(){
	
}*/
long CHFPayMentOnlineList::OnSearchByLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSearchBy.IsSearchKey() && !m_szSearchByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSearchByKey
};
	m_wndSearchBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSearchBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHFPayMentOnlineList::OnSearchByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHFPayMentOnlineList::OnAddHFPayMentOnlineList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHFPayMentOnlineList::OnEditHFPayMentOnlineList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHFPayMentOnlineList::OnDeleteHFPayMentOnlineList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHFPayMentOnlineList();
 	}
	return 0;
}
int CHFPayMentOnlineList::OnSaveHFPayMentOnlineList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnHFPayMentOnlineListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHFPayMentOnlineList::OnCancelHFPayMentOnlineList(){
 	if(GetMode() == VM_EDIT)
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
int CHFPayMentOnlineList::OnHFPayMentOnlineListListLoadData(){
	return 0;
}

void CHFPayMentOnlineList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	
}

void CHFPayMentOnlineList::OnReconciliationSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	UpdateData(TRUE);

	ReplaceSpacesWithT(m_szFromDate);
	ReplaceSpacesWithT(m_szToDate);
	// JSON Body
	CStringA jsonBody;

	CStringA m_szFromDateAnsi(m_szFromDate);
	CStringA m_szToDateAnsi(m_szToDate);

	jsonBody.Format(R"({"fromDate":"%s","toDate":"%s"})", m_szFromDateAnsi, m_szToDateAnsi);

	CInternetSession session(_T("VIMES_RECONCILIATION"));
	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	DWORD dwRet = 0;

	// Set timeouts before making the connection
	session.SetOption(INTERNET_OPTION_CONNECT_TIMEOUT, 60000);  // 60 seconds for connecting
	session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 120000); // 120 seconds for receiving data
	session.SetOption(INTERNET_OPTION_SEND_TIMEOUT, 60000);     // 60 seconds for sending data

	CString strW(jsonBody); 
	_debug(_T("jsonBody %s..."), strW);
	try
	{

		// URL to the API
		CString strServerName = m_szUrlBank;
        CString strObject;

		if (pMF->m_szuse_viettin_bank_qr == _T("Y"))
		{
            strObject = _T("/api/vtb/108/transactionhistory");
		}
        else
        {
            strObject = _T("/api/mb/transactionhistory");
        }		
		INTERNET_PORT nPort = 80;  // Assuming HTTP, change to 443 if using HTTPS

		// Connect to the server
		pServer = session.GetHttpConnection(strServerName, nPort);

		// Open the HTTP request for POST
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST, strObject, NULL, 1, NULL, NULL, INTERNET_FLAG_EXISTING_CONNECT);

		// Add request headers
		pFile->AddRequestHeaders(_T("Content-Type: application/json"));
		pFile->AddRequestHeaders(_T("Authorization: Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VybmFtZSI6InZpbWVzIiwicm9sZSI6InN5c3RlbSIsImlhdCI6MTY5OTI1Njg4MH0.U_Cn6XIhgPFSieVloSZGMxofG-Nq8aja1MfcdhM5IFc"));

		// Send the request with the JSON body
		pFile->SendRequest(NULL, 0, (LPVOID)(LPCSTR)jsonBody, jsonBody.GetLength());

		// Get the status code of the response
		pFile->QueryInfoStatusCode(dwRet);

		if (dwRet == HTTP_STATUS_OK)
		{
			// Show the Save As dialog
			CString defaultFileName = _T("transaction_history.xlsx");
			CFileDialog dlg(FALSE, _T("xlsx"), defaultFileName, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, _T("Excel Files (*.xls;*.xlsx)|*.xls;*.xlsx|All Files (*.*)|*.*"));

			if (dlg.DoModal() == IDOK)
			{
				CString saveFilePath = dlg.GetPathName();

				// Open a file to save the downloaded content
				std::ofstream outFile(saveFilePath, std::ios::binary);

				// Read the response and write the content to the file
				DWORD dwRead;
				BYTE buffer[4096];
				while ((dwRead = pFile->Read(buffer, sizeof(buffer))) > 0)
				{
					outFile.write((const char*)buffer, dwRead);
				}

				outFile.close();
				AfxMessageBox(_T("Downloaded successfully!"));
			}
			else
			{
				AfxMessageBox(_T("Download canceled."));
			}
		}
		else
		{
			// Display error message if the status code is not OK
			CString statusMessage;
			statusMessage.Format(_T("Failed to download. Status code: %lu"), dwRet);
			AfxMessageBox(statusMessage);
		}

		// Close the HTTP file and connection
		pFile->Close();
	}
	catch (CInternetException* e)
	{
		TCHAR errorMsg[1024];
		e->GetErrorMessage(errorMsg, 1024);
		AfxMessageBox(errorMsg);
		e->Delete();
	}

	session.Close();
}

void CHFPayMentOnlineList::ReplaceSpacesWithT(CString& str)
{
	// Replace all spaces with "T"
	str.Replace(_T(" "), _T("T"));
	str.Replace(_T('/'), _T('-'));
}
#include "HMSCheckQRPayDlg.h"
void CHFPayMentOnlineList::OnSearchBtnSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	UpdateData(TRUE);

	ReplaceSpacesWithT(m_szFromDate);
	ReplaceSpacesWithT(m_szToDate);

	CStringA m_szFromDateAnsi(m_szFromDate);
	CStringA m_szToDateAnsi(m_szToDate);

	CHMSCheckQRPayDlg dlg(this);
	dlg.m_szFromDateAnsi = m_szFromDateAnsi;
	dlg.m_szToDateAnsi = m_szToDateAnsi;
	dlg.m_szUrlBank = m_szUrlBank;

	if (dlg.DoModal() == IDOK)
	{

	}
}

int CHFPayMentOnlineList::OnListPaymentItem()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();


	return 0;
}