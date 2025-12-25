#include "AdContractAppendixView.h"
#include "MainFrame_E10.h"
#include "MContractAppendixDlg.h"

static int _OnAppendixSelChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem)
{
	((CAdContractAppendixView*)pWnd)->OnAppendixSelectChange(nOldItem, nNewItem);
	return 0;
}
static void _OnAppendixDblClickFnc(CWnd *pWnd)
{
	return ((CAdContractAppendixView*)pWnd)->OnAppendixDblClick();
}
static int _OnAppendixAddItemFnc(CWnd* pWnd) {
	return ((CAdContractAppendixView*)pWnd->GetParent())->OnAppendixAddItem();
}
static int _OnAppendixEditItemFnc(CWnd* pWnd) {
	return ((CAdContractAppendixView*)pWnd->GetParent())->OnAppendixEditItem();
}
static int _OnAppendixDeleteItemFnc(CWnd* pWnd) {
	return ((CAdContractAppendixView*)pWnd->GetParent())->OnAppendixDeleteItem();
}

static int _OnAppendixLineSelChangeFnc(CWnd* pWnd, int nOldItem, int nNewItem)
{
	((CAdContractAppendixView*)pWnd)->OnAppendixLineSelectChange(nOldItem, nNewItem);
	return 0;
}
static void _OnAppendixLineDblClickFnc(CWnd* pWnd)
{
	return ((CAdContractAppendixView*)pWnd)->OnAppendixLineDblClick();
}
static int _OnAppendixLineAddItemFnc(CWnd* pWnd) {
	return ((CAdContractAppendixView*)pWnd->GetParent())->OnAppendixLineAddItem();
}
static int _OnAppendixLineEditItemFnc(CWnd* pWnd) {
	return ((CAdContractAppendixView*)pWnd->GetParent())->OnAppendixLineEditItem();
}
static int _OnAppendixLineDeleteItemFnc(CWnd* pWnd) {
	return ((CAdContractAppendixView*)pWnd->GetParent())->OnAppendixLineDeleteItem();
}

CAdContractAppendixView::CAdContractAppendixView()
{

}

CAdContractAppendixView::~CAdContractAppendixView()
{

}

void CAdContractAppendixView::OnCreateComponents()
{
	// TODO: Add your implementation code here.
	m_wndAppendix.Create(this, 0, 0, 800, 100);
	m_wndAppendixLine.Create(this, 0, 105, 800, 205);
}

void CAdContractAppendixView::OnInitializeComponents()
{

	m_wndAppendix.InsertColumn(0, _T(""), CFMT_TEXT, 0);//ID
	m_wndAppendix.InsertColumn(1, _T("Số phiếu"), CFMT_TEXT, 200);
	m_wndAppendix.InsertColumn(2, _T("Ngày"), CFMT_DATE, 120);
	m_wndAppendix.InsertColumn(3, _T("Diễn giải"), CFMT_TEXT, 300);
	m_wndAppendix.InsertColumn(4, _T("Số tiền"), CFMT_MONEY, 120);

	m_wndAppendixLine.InsertColumn(0, _T(""), CFMT_TEXT, 0);//ID
	m_wndAppendixLine.InsertColumn(1, _T("Mã hàng"), CFMT_TEXT, 200);
	m_wndAppendixLine.InsertColumn(2, _T("Tên"), CFMT_DATE, 120);
	m_wndAppendixLine.InsertColumn(3, _T("Đơn vị"), CFMT_TEXT, 300);
	m_wndAppendixLine.InsertColumn(4, _T("Đơn giá"), CFMT_MONEY, 120);
	m_wndAppendixLine.InsertColumn(5, _T("Số lượng"), CFMT_MONEY, 120);
	m_wndAppendixLine.InsertColumn(6, _T("Thành tiền"), CFMT_MONEY, 120);
}

void CAdContractAppendixView::OnSetWindowEvents()
{
	m_wndAppendix.SetEvent(WE_SELCHANGE, _OnAppendixSelChangeFnc);
	m_wndAppendix.SetEvent(WE_DBLCLICK, _OnAppendixDblClickFnc);
	m_wndAppendix.AddEvent(1, _T("Add"), _OnAppendixAddItemFnc);
	m_wndAppendix.AddEvent(2, _T("Edit"), _OnAppendixEditItemFnc);
	m_wndAppendix.AddEvent(3, _T("Delete"), _OnAppendixDeleteItemFnc);

	m_wndAppendixLine.SetEvent(WE_SELCHANGE, _OnAppendixLineSelChangeFnc);
	m_wndAppendixLine.SetEvent(WE_DBLCLICK, _OnAppendixLineDblClickFnc);
	m_wndAppendixLine.AddEvent(1, _T("Add"), _OnAppendixLineAddItemFnc);
	m_wndAppendixLine.AddEvent(2, _T("Edit"), _OnAppendixLineEditItemFnc);
	m_wndAppendixLine.AddEvent(3, _T("Delete"), _OnAppendixLineDeleteItemFnc);
}

BEGIN_MESSAGE_MAP(CAdContractAppendixView, CGuiView)
ON_WM_SIZE()
END_MESSAGE_MAP()


void CAdContractAppendixView::OnSize(UINT nType, int cx, int cy)
{
	CGuiView::OnSize(nType, cx, cy);

	// TODO: Add your message handler code here
	CRect rc, prc;
	GetClientRect(prc);
	rc = prc;
	rc.bottom = prc.Height() / 2;
	m_wndAppendix.MoveWindow(rc);
	rc.top = rc.bottom;
	rc.bottom = prc.Height();
	m_wndAppendixLine.MoveWindow(rc);
}


int CAdContractAppendixView::OnAppendixLoadData()
{
	// TODO: Add your implementation code here.
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nItem = 0;

	m_wndAppendix.BeginLoad();
	szSQL.Format(
		_T(" SELECT m_contract_appendix_id as appendix_id, ") \
		_T("		Get_username(createdby) AS nguoi_tao, ") \
		_T("        appendix_date AS ngay,") \
		_T("        description AS dien_giai,") \
		_T("        total_amount AS so_tien,") \
		_T("		appendix_no as so_phieu ") \
		_T("   FROM m_contract_appendix") \
		_T("  WHERE contract_id = %ld")
		, m_nContractID);

	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		nItem = m_wndAppendix.AddItems(
			rs.GetValue(_T("appendix_id")),
			rs.GetValue(_T("so_phieu")),
			rs.GetValue(_T("ngay")),
			rs.GetValue(_T("dien_giai")),
			rs.GetValue(_T("so_tien")),
			NULL);
		rs.MoveNext();
	}
	m_wndAppendix.EndLoad();
	return 0;
}


int CAdContractAppendixView::OnAppendixLineLoadData()
{
	// TODO: Add your implementation code here.
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	m_wndAppendixLine.BeginLoad();
	szSQL.Format(
		_T("    SELECT product_extra_id,") \
		_T("           l.product_id ma_hang,") \
		_T("           v.product_name AS ten_hang,") \
		_T("           v.product_uomname AS don_vi,") \
		_T("           unit_price AS don_gia,") \
		_T("           quantity AS so_luong_hop_dong,") \
		_T("           total_amount AS so_tien_hop_dong") \
		_T("      FROM m_contract_line l") \
		_T(" LEFT JOIN m_product_view v ON ( v.product_id = l.product_id )") \
		_T("     WHERE contract_appendix_id = '%s' ")
		, m_szAppendixID);

	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		m_wndAppendixLine.AddItems(
			m_szAppendixID,
			rs.GetValue(_T("product_extra_id")),
			rs.GetValue(_T("ma_hang")),
			rs.GetValue(_T("ten_hang")),
			rs.GetValue(_T("don_vi")),
			rs.GetValue(_T("don_gia")),
			rs.GetValue(_T("so_luong_hop_dong")),
			rs.GetValue(_T("so_tien_hop_dong")),
			NULL
		);
		rs.MoveNext();
	}
	m_wndAppendixLine.EndLoad();
	return 0;
}


int CAdContractAppendixView::OnAppendixSelectChange(int nOldItem, int nNewItem)
{
	// TODO: Add your implementation code here.
	m_szAppendixID = m_wndAppendix.GetItemText(0, nNewItem);
	OnAppendixLineLoadData();
	return 0;
}

int CAdContractAppendixView::OnAppendixAddItem() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CMContractAppendixDlg dlg(this, m_nContractID);
	dlg.m_nPackageID = m_nPackageID;
	dlg.SetMode(VM_ADD);
	if (dlg.DoModal() == IDOK)
	{
		OnAppendixLoadData();
	}
	return 0;
}
int CAdContractAppendixView::OnAppendixEditItem() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	if (m_wndAppendix.GetCurSel() < 0)
	{
		return 0;
	}
	CMContractAppendixDlg dlg(this, m_nContractID);
	dlg.m_szAppendixID = m_szAppendixID;
	dlg.m_nPackageID = m_nPackageID;
	dlg.SetMode(VM_EDIT);
	if (dlg.DoModal() == IDOK)
	{
		OnAppendixLoadData();
	}
	return 0;
}

int CAdContractAppendixView::OnAppendixDeleteItem() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	if (m_wndAppendix.GetCurSel() < 0)
	{
		return 0;
	}
	CString szSQL;
	szSQL.Format(_T("M_CONTRACT_APPENDIX_DELETE('%s', '%s')")
		, pMF->GetCurrentUser(), m_szAppendixID);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		OnAppendixLoadData();
	}
	else
	{
		CString szMsg;
		switch (nRet)
		{
		case -1:
			szMsg.Format(_T("Mục được tạo bởi người dùng khác. Không thể thao tác!"));
			break;
		case -2:
			szMsg.Format(_T("Phụ lục đã có mục hàng chi tiết. Không thể thao tác tiếp!"));
			break;
		}
		ShowMessageBox(szMsg);
	}
	return nRet;
}



void CAdContractAppendixView::OnAppendixDblClick()
{
	// TODO: Add your implementation code here.
	OnAppendixEditItem();
}

BOOL CAdContractAppendixView::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->wParam == VK_SPACE)
		{
			if (pMsg->hwnd == m_wndAppendix.GetSafeHwnd())
			{
				OnAppendixDblClick();
			}
			if (pMsg->hwnd == m_wndAppendixLine.GetSafeHwnd())
			{

			}
		}
	}
	return CGuiView::PreTranslateMessage(pMsg);
}


int CAdContractAppendixView::OnAppendixLineSelectChange(int nOldItem, int nNewItem)
{
	// TODO: Add your implementation code here.
	return 0;
}


void CAdContractAppendixView::OnAppendixLineDblClick()
{
	// TODO: Add your implementation code here.
}


int CAdContractAppendixView::OnAppendixLineAddItem()
{
	// TODO: Add your implementation code here.
	return 0;
}


int CAdContractAppendixView::OnAppendixLineEditItem()
{
	// TODO: Add your implementation code here.
	return 0;
}


int CAdContractAppendixView::OnAppendixLineDeleteItem()
{
	// TODO: Add your implementation code here.
	return 0;
}
