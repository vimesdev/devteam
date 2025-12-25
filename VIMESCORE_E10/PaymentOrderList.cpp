#include "PaymentOrderList.h"
#include "MainFrame_E10.h"
#include "PaymentOrderDialog.h"
#include ".\PaymentOrderlist.h"
#include "HMSReportForms/AMPrintForms.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPaymentOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPaymentOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CPaymentOrderList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderList *)pWnd)->OnSearchCheckValue();
} 
static void _OnOptionSelectFnc(CWnd *pWnd){
	CPaymentOrderList *pVw = (CPaymentOrderList *)pWnd;
	pVw->OnOptionSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPaymentOrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPaymentOrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPaymentOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPaymentOrderList*)pWnd)->OnListDeleteItem();
}

static int _OnListPrintItemFnc(CWnd *pWnd){
	 ((CPaymentOrderList*)pWnd)->OnPrint();
	 return 0;
}

static int _OnListSendItemFnc(CWnd *pWnd){
	 ((CPaymentOrderList*)pWnd)->OnSend();
	 return 0;
}

static int _OnListRollbackItemFnc(CWnd *pWnd){
	 return ((CPaymentOrderList*)pWnd)->OnListRollbackItem();
}
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CPaymentOrderList*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CPaymentOrderList*)pWnd)->OnListEditItem();
}

static int _OnListViewItemFnc(CWnd *pWnd){
	 return ((CPaymentOrderList*)pWnd)->OnListViewItem();
}

static void _OnViewSelectFnc(CWnd *pWnd){
	CPaymentOrderList *pVw = (CPaymentOrderList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPaymentOrderList *pVw = (CPaymentOrderList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPaymentOrderList *pVw = (CPaymentOrderList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPaymentOrderList *pVw = (CPaymentOrderList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddPaymentOrderListFnc(CWnd *pWnd){
	 return ((CPaymentOrderList*)pWnd)->OnAddPaymentOrderList();
} 
static int _OnEditPaymentOrderListFnc(CWnd *pWnd){
	 return ((CPaymentOrderList*)pWnd)->OnEditPaymentOrderList();
} 
static int _OnDeletePaymentOrderListFnc(CWnd *pWnd){
	 return ((CPaymentOrderList*)pWnd)->OnDeletePaymentOrderList();
} 
static int _OnSavePaymentOrderListFnc(CWnd *pWnd){
	 return ((CPaymentOrderList*)pWnd)->OnSavePaymentOrderList();
} 
static int _OnCancelPaymentOrderListFnc(CWnd *pWnd){
	 return ((CPaymentOrderList*)pWnd)->OnCancelPaymentOrderList();
} 
CPaymentOrderList::CPaymentOrderList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = _T("POO");
	SetWindowName(_T("PaymentOrderList"));
}
CPaymentOrderList::~CPaymentOrderList(){
}
void CPaymentOrderList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndPaymentOrderInfo.Create(this, _T("List"), 5, 65, 810, 590);
	m_wndFromDate.Create(this,95, 30, 185, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 190, 30, 270, 55);
	m_wndToDate.Create(this,275, 30, 365, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 610, 30, 690, 55);
	m_wndSearch.Create(this,695, 30, 775, 55); 
	m_wndOption.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndView.Create(this, _T("&View"), 475, 595, 555, 620);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndList.Create(this,10, 90, 805, 585); 

}
void CPaymentOrderList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	
	m_wndSearch.SetNotEmpty(true);

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);//pp_c_order_id
    m_wndList.InsertColumn(1, _T("Phiếu TT"), CFMT_TEXT, 90);	
	m_wndList.InsertColumn(2, _T("Order Date"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("Approved Date"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(4, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);	
	m_wndList.InsertColumn(6, _T("Số tiền duyệt TT"), CFMT_MONEY, 100);	
	m_wndList.InsertColumn(7, _T("Status"), CFMT_TEXT|CFMT_CENTER, 100);
	m_wndList.InsertColumn(8, _T("Type"), CFMT_TEXT|CFMT_CENTER, 50);	
	m_wndList.InsertColumn(9, _T("Department"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(10, _T("Proposer"), CFMT_TEXT, 100);
	
	
	m_nSearchID = 1;

}

void CPaymentOrderList::OnSetWindowEvents(){
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
	m_wndOption.SetEvent(WE_CLICK, _OnOptionSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Purchase Order"));
	m_wndList.AddEvent(1, _T("View\tF3"), _OnListViewItemFnc,0, VK_F3);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Thêm phiếu"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Sửa phiếu"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Xóa phiếu"), _OnListDeleteItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("Gửi"), _OnListSendItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(6, _T("In phiếu"), _OnListPrintItemFnc);
	

	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPaymentOrderListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPaymentOrderListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePaymentOrderListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePaymentOrderListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPaymentOrderListFnc, 0, 'T', VK_CONTROL);
*/
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);
	OnListLoadData();

}
void CPaymentOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CPaymentOrderList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CPaymentOrderList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CPaymentOrderList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();

}

int CPaymentOrderList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 2, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			
			GetCurrentStatus();
			if (m_szStatus == _T("O"))
			{
				EnableButtons(FALSE, -1); 
				
			}
			else
			{
				EnableButtons(FALSE, 3, 4, -1);
			}
 			break; 
 		case VM_NONE: 
 			//EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 2, -1); 
 			//SetDefaultValues(); 
 			break; 
 		}; 
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndSearch.EnableWindow(TRUE);
		m_wndOption.EnableWindow(TRUE);
		UpdateData(FALSE);
		
 		return nOldMode; 
}

/*void CPaymentOrderList::OnFromDateChange(){
	
} */
/*void CPaymentOrderList::OnFromDateSetfocus(){
	
} */
/*void CPaymentOrderList::OnFromDateKillfocus(){
	
} */
int CPaymentOrderList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CPaymentOrderList::OnToDateChange(){
	
} */
/*void CPaymentOrderList::OnToDateSetfocus(){
	
} */
/*void CPaymentOrderList::OnToDateKillfocus(){
	
} */
int CPaymentOrderList::OnToDateCheckValue(){
	return 0;
} 
/*void CPaymentOrderList::OnSearchChange(){
	
} */
/*void CPaymentOrderList::OnSearchSetfocus(){
	
} */
/*void CPaymentOrderList::OnSearchKillfocus(){
	
} */
int CPaymentOrderList::OnSearchCheckValue(){
	
	OnListLoadData();

	return 1;
}
 
void CPaymentOrderList::OnOptionSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	OnListLoadData();
}
 
void CPaymentOrderList::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();

}
 
void CPaymentOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	CString status = GetCurrentStatus();

	m_wndList.SetMenuState(5, status == _T("O")?TRUE:FALSE);
	SetMode(VM_VIEW);
}
 
int CPaymentOrderList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePaymentOrderList();
	return 0;
}

int CPaymentOrderList::OnListRollbackItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	return 0;
}

int CPaymentOrderList::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddSelect();
	 return 0;
}
int CPaymentOrderList::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditSelect();
	 return 0;
}

int CPaymentOrderList::OnListViewItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();
	 return 0;
}

long CPaymentOrderList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	UpdateData(TRUE);
	
	szWhere.AppendFormat(_T(" and org_id IN('GL','%s') "), pMF->GetModuleID());
	
	if(!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(description) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
	}

	szSQL.Format(_T(" SELECT c_order_id, INVOICENO, ") \
				_T("	to_char(orderdate, 'DD/MM/YYYY') as orderdate, ") \
				_T("	to_char(approveddate,'DD/MM/YYYY') as approveddate, ") \
				_T("	description, ") \
				_T("	payment_amount, ") \
				_T("	approval_amount, ") \
				_T("	ss_desc as status,") \
				_T("	ordertype, ") \
				_T("	department_id,  ") \
				_T("	proposer ") \
				_T(" FROM c_order ") \
				_T(" LEFT JOIN sys_sel ON (status=ss_code and ss_id='hms_debt_status')") \
				_T(" WHERE trunc(orderdate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s','YYYY-MM-DD') ") \
				_T(" %s ") \
				_T(" ORDER BY C_ORDER_ID desc"), m_szFromDate, m_szToDate, szWhere);

    //_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("c_order_id")),
			rs.GetValue(_T("INVOICENO")),
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("approveddate")), 
			rs.GetValue(_T("description")), 
			rs.GetValue(_T("payment_amount")),
			rs.GetValue(_T("approval_amount")),
			rs.GetValue(_T("status")),
			rs.GetValue(_T("ordertype")),
			rs.GetValue(_T("department_id")),
			rs.GetValue(_T("proposer")),			
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	SetMode(VM_NONE);
	return 0;
}

void CPaymentOrderList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an order"), MB_OK);
		return;
	}

	CPaymentOrderDialog dlg(pMF, VM_VIEW, m_nID);
	
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
}
 
void CPaymentOrderList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(pMF->GetModuleID() != _T("GL"))
	{
		CPaymentOrderDialog dlg(pMF, VM_ADD, 0);
		if(dlg.DoModal() == IDOK){
			m_nID = dlg.m_nId;
			OnPrint();
			Refresh();	
		}
	}
	
}
 
void CPaymentOrderList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)return;
	GetCurrentStatus();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Trạng thái phiếu <> O. không cho phép sửa"));
		return;
	}

	CPaymentOrderDialog dlg(pMF, VM_EDIT, m_nID);
	if(dlg.DoModal() == IDOK){
		Refresh();	
	}
}
 
void CPaymentOrderList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePaymentOrderList();
}
 
int CPaymentOrderList::OnAddPaymentOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CPaymentOrderList::OnEditPaymentOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CPaymentOrderList::OnDeletePaymentOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL, szClientID, szOrgID; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		 return -1;

	GetCurrentStatus();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Trạng thái phiếu <> O. không cho phép sửa"));
		return -1;
	}

 	if(ShowMessageBox(_T("Bạn có chắc chắn muốn xóa mục đã chọn không?(Y/N"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	
	szSQL.Format(_T("C_ORDER_DELETE(%ld, '%s', '%s')"), m_nID, pMF->GetModuleID(), pMF->GetCurrentUser() ); 

	//Notice(szSQL);

 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
		m_wndList.DeleteItem(nSel);
 	}
	else
	{
		ShowMessageBox(_T("Không xóa được đề mục"), MB_OK|MB_ICONWARNING);
	}
	return 0;
}

int CPaymentOrderList::OnSavePaymentOrderList(){
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
 		//OnPaymentOrderListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CPaymentOrderList::OnCancelPaymentOrderList(){
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
 
int CPaymentOrderList::OnPaymentOrderListListLoadData(){
	return 0;
}


void CPaymentOrderList::Refresh(){
	OnListLoadData();

}

BEGIN_MESSAGE_MAP(CPaymentOrderList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPaymentOrderList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndSearch.SetFocus();
}


//HÀM IN PHIẾU ĐỀ NGHỊ THANH TOÁN
void CPaymentOrderList::OnPrint()
{
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return;
	}
	
	
	CAMPrintForms printer;
	CString szType = m_wndList.GetItemText(nSel, 7);
	printer.In_phieu_de_nghi_tt(m_nID);
	printer.In_phieu_de_nghi_tt_mau2(m_nID);
	if (szType == _T("HD"))
	{
		printer.In_danh_sach_de_nghi_tt(m_nID);
	}
	if (szType == _T("TU"))
	{
		printer.In_danh_sach_tam_ung_hop_dong(m_nID);
	}
}

//HÀM IN PHIẾU ĐỀ NGHỊ THANH TOÁN
void CPaymentOrderList::OnSend()
{
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;

	m_nID = str2long(m_wndList.GetItemText(nSel, 0));

	CString szSQL;
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("UPDATE c_order SET status='S' WHERE c_order_ID=%ld AND status='O' "), m_nID);
_tprintf(_T("\r\n%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		OnListLoadData();
	}
}

CString CPaymentOrderList::GetCurrentStatus()
{
	CString szSQL;
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT status FROM c_order WHERE c_order_ID=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("status"), m_szStatus);
	}
	return m_szStatus;
}

void CPaymentOrderList::OnResizeLayout()
{
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndPaymentOrderInfo, 100, 100);

	AddBottom(&m_wndView);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
}