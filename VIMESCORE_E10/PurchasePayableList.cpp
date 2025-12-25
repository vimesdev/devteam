#include "PurchasePayableList.h"
#include "MainFrame_E10.h"
#include "PurchaseOrderDialog.h"
#include "PurchaseOrderDialogEx.h"
#include "PurchaseReturnOrderDialog.h"
#include "FilterOption.h"


/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchasePayableList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchasePayableList *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchasePayableList* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPurchasePayableList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CPurchasePayableList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CPurchasePayableList *)pWnd)->OnSearchCheckValue();
} 
static void _OnOptionSelectFnc(CWnd *pWnd){
	CPurchasePayableList *pVw = (CPurchasePayableList *)pWnd;
	pVw->OnOptionSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPurchasePayableList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPurchasePayableList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPurchasePayableList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPurchasePayableList*)pWnd)->OnListDeleteItem();
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CPurchasePayableList*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CPurchasePayableList*)pWnd)->OnListEditItem();
}

static int _OnListViewItemFnc(CWnd *pWnd){
	 return ((CPurchasePayableList*)pWnd)->OnListViewItem();
}

static void _OnViewSelectFnc(CWnd *pWnd){
	CPurchasePayableList *pVw = (CPurchasePayableList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPurchasePayableList *pVw = (CPurchasePayableList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPurchasePayableList *pVw = (CPurchasePayableList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPurchasePayableList *pVw = (CPurchasePayableList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddPurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchasePayableList*)pWnd)->OnAddPurchaseOrderList();
} 
static int _OnEditPurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchasePayableList*)pWnd)->OnEditPurchaseOrderList();
} 
static int _OnDeletePurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchasePayableList*)pWnd)->OnDeletePurchaseOrderList();
} 
static int _OnSavePurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchasePayableList*)pWnd)->OnSavePurchaseOrderList();
} 
static int _OnCancelPurchaseOrderListFnc(CWnd *pWnd){
	 return ((CPurchasePayableList*)pWnd)->OnCancelPurchaseOrderList();
} 
CPurchasePayableList::CPurchasePayableList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = _T("POO");
	SetWindowName(_T("PurchasePayableList"));
}
CPurchasePayableList::~CPurchasePayableList(){
}
void CPurchasePayableList::OnCreateComponents(){

	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 800, 60);
	m_wndQuoteList.Create(this, _T("Quote List"), 5, 65, 800, 570);
	m_wndFromDate.Create(this,95, 30, 185, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 190, 30, 270, 55);
	m_wndToDate.Create(this,275, 30, 365, 55); 
	m_wndStorageLabel.Create(this, _T("Storage"), 370, 30, 450, 55);
	m_wndStorage.Create(this,455, 30, 595, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 600, 30, 680, 55);
	m_wndSearch.Create(this,685, 30, 765, 55); 
	m_wndOption.Create(this, _T("@"), 770, 30, 795, 55);
	m_wndList.Create(this,10, 90, 795, 565); 
	m_wndView.Create(this, _T("&View"), 465, 575, 545, 600);
	m_wndAdd.Create(this, _T("&Add"), 550, 575, 630, 600);
	m_wndEdit.Create(this, _T("&Edit"), 635, 575, 715, 600);
	m_wndDelete.Create(this, _T("&Delete"), 720, 575, 800, 600);

}
void CPurchasePayableList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	
	m_wndSearch.SetNotEmpty(true);
	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.InsertColumn(0, _T("Vendor ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Vendor Name"), CFMT_TEXT, 360);
	m_wndList.InsertColumn(2, _T("Open Balance"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(3, _T("Total Amount"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(4, _T("Paid Amount"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(5, _T("Amount dues"), CFMT_MONEY, 110);

	m_nSearchID = 1;

}

void CPurchasePayableList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
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
	m_wndList.AddEvent(2, _T("New Purchase Order"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Edit Purchase Order"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Delete Purchase Order"), _OnListDeleteItemFnc, 0);


	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseOrderListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseOrderListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseOrderListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseOrderListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseOrderListFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	OnListLoadData();

}
void CPurchasePayableList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CPurchasePayableList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CPurchasePayableList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}

void CPurchasePayableList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();

}

int CPurchasePayableList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
			
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 2, -1); 
 			SetDefaultValues(); 
			m_szFromDate = m_szToDate = pMF->GetSysDate();
 			break; 
 		}; 
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndSearch.EnableWindow(TRUE);
		m_wndOption.EnableWindow(TRUE);
		UpdateData(FALSE);
		
 		return nOldMode; 
}

/*void CPurchasePayableList::OnFromDateChange(){
	
} */
/*void CPurchasePayableList::OnFromDateSetfocus(){
	
} */
/*void CPurchasePayableList::OnFromDateKillfocus(){
	
} */
int CPurchasePayableList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CPurchasePayableList::OnToDateChange(){
	
} */
/*void CPurchasePayableList::OnToDateSetfocus(){
	
} */
/*void CPurchasePayableList::OnToDateKillfocus(){
	
} */
int CPurchasePayableList::OnToDateCheckValue(){
	return 0;
} 
void CPurchasePayableList::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchasePayableList::OnStorageSelendok(){
	 
}
/*void CPurchasePayableList::OnStorageSetfocus(){
	
}*/
/*void CPurchasePayableList::OnStorageKillfocus(){
	
}*/
long CPurchasePayableList::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchasePayableList::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchasePayableList::OnSearchChange(){
	
} */
/*void CPurchasePayableList::OnSearchSetfocus(){
	
} */
/*void CPurchasePayableList::OnSearchKillfocus(){
	
} */
int CPurchasePayableList::OnSearchCheckValue(){
	OnListLoadData();

	return 1;
}
 
void CPurchasePayableList::OnOptionSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	OnListLoadData();
	return;
	CFilterOption *newPopup = new CFilterOption(this);
	CRect rect;
	m_wndOption.GetWindowRect(&rect);
	
	rect.left = rect.right - newPopup->GetWidth();
	rect.top = rect.bottom;
	rect.bottom = rect.top + newPopup->GetHeight();
	newPopup->ShowPopup(rect.left, rect.top, rect.Width(), rect.Height());

	

}
 
void CPurchasePayableList::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();

}
 
void CPurchasePayableList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	SetMode(VM_VIEW);
}
 
int CPurchasePayableList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeletePurchaseOrderList();
	 return 0;
}

int CPurchasePayableList::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddSelect();
	 return 0;
}
int CPurchasePayableList::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditSelect();
	 return 0;
}

int CPurchasePayableList::OnListViewItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnViewSelect();
	 return 0;
}

long CPurchasePayableList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	UpdateData(TRUE);
	
	szWhere.AppendFormat(_T(" and po_org_id IN('GL','%s') "), pMF->GetModuleID());
	
	if(!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(adp_name) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
	}
	if(!m_szStorageKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and po_storage_id = %d "), str2int(m_szStorageKey));

	}
	szSQL.Format(_T(" SELECT adp_partner_id,") \
_T("   adp_name ,") \
_T("   (po_totalamount)               AS total_amount,") \
_T("   (po_totalamount-po_paidamount) AS unpaid_amount,") \
_T("   (po_paidamount)                AS paid_amount") \
_T(" FROM ad_partner") \
_T(" LEFT JOIN purchase_order") \
_T(" ON(po_partner_id=adp_partner_id)") \
_T(" WHERE trunc_date(po_orderdate) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss') %s ") \
_T(" ORDER BY adp_name"), m_szFromDate, m_szToDate, szWhere);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("adp_partner_id")),
			rs.GetValue(_T("adp_name")), 
			_T(""),
			rs.GetValue(_T("total_amount")), 
			rs.GetValue(_T("paid_amount")),
			rs.GetValue(_T("unpaid_amount")), 
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return 0;
}

void CPurchasePayableList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an order"), MB_OK);
		return;
	}

	if(pMF->GetModuleID() == _T("GL"))
	{
		if(m_szType == _T("POO"))
		{
			CPurchaseOrderDialog dlg(pMF, VM_VIEW);
			
			dlg.m_nID = m_nID;
			if(dlg.DoModal() == IDOK){
				
			}
		}
		else if(m_szType == _T("PRO"))
		{
			CPurchaseReturnOrderDialog dlg(pMF, VM_VIEW);
			
			dlg.m_nID = m_nID;
			if(dlg.DoModal() == IDOK){
				
			}
		}
	}
	else
	{
		if(m_szType == _T("POO"))
		{
			CPurchaseOrderDialogEx dlg(pMF, VM_VIEW);
			
			dlg.m_nID = m_nID;
			if(dlg.DoModal() == IDOK){
				
			}
		}
		else if(m_szType == _T("PRO"))
		{
			CPurchaseReturnOrderDialog dlg(pMF, VM_VIEW);
			
			dlg.m_nID = m_nID;
			if(dlg.DoModal() == IDOK){
				
			}
		}
	}
	Refresh();
}
 
void CPurchasePayableList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(pMF->GetModuleID() != _T("GL"))
	{
		if(m_szType == _T("POO"))
		{
			CPurchaseOrderDialogEx dlg(pMF, VM_ADD);
			if(dlg.DoModal() == IDOK){
				
			}
		}
		else if(m_szType == _T("PRO"))
		{
			CPurchaseReturnOrderDialog dlg(pMF, VM_ADD);
			if(dlg.DoModal() == IDOK){
				
			}
		}
	}
	else
	{
		if(m_szType == _T("POO"))
		{
			CPurchaseOrderDialog dlg(pMF, VM_ADD);
			if(dlg.DoModal() == IDOK){
				
			}
		}
		else if(m_szType == _T("PRO"))
		{
			CPurchaseReturnOrderDialog dlg(pMF, VM_ADD);
			if(dlg.DoModal() == IDOK){
				
			}
		}

	}
	Refresh();
}
 
void CPurchasePayableList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szType == _T("POO"))
	{
		CPurchaseOrderDialog dlg(pMF, VM_EDIT);
		dlg.m_nID = m_nID;
		if(dlg.DoModal() == IDOK){
		}
	}
	else if(m_szType == _T("PRO"))
	{
		CPurchaseReturnOrderDialog dlg(pMF, VM_EDIT);
		dlg.m_nID = m_nID;
		if(dlg.DoModal() == IDOK){
		}
	}
	Refresh();
}
 
void CPurchasePayableList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	Refresh();
}
 
int CPurchasePayableList::OnAddPurchaseOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CPurchasePayableList::OnEditPurchaseOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CPurchasePayableList::OnDeletePurchaseOrderList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL, szClientID, szOrgID; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		 return -1;

 	if(ShowMessageBox(_T("Do you want to delete invoice?(Y/N"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szClientID = m_wndList.GetItemText(nSel, 0);
	szOrgID = m_wndList.GetItemText(nSel, 10);
	
	szSQL.Format(_T("PURCHASE_ORDER_DELETE(%ld, '%s', '%s')"), m_nID, szOrgID, pMF->GetCurrentUser() ); 

	//Notice(szSQL);

 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
		m_wndList.DeleteItem(nSel);
 	}
	else
	{
		ShowMessageBox(_T("Cannot delete invoice with current status"), MB_OK|MB_ICONWARNING);
	}
	return 0;
}

int CPurchasePayableList::OnSavePurchaseOrderList(){
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
 		//OnPurchaseOrderListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CPurchasePayableList::OnCancelPurchaseOrderList(){
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
 
int CPurchasePayableList::OnPurchaseOrderListListLoadData(){
	return 0;
}


void CPurchasePayableList::Refresh(){
	int nSel = m_wndList.GetCurSel();
	OnListLoadData();
	m_wndList.SetCurSel(nSel);

}