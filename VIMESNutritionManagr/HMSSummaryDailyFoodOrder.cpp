#include "HMSSummaryDailyFoodOrder.h"
#include "MainFrm.h"
/*static void _OnFormDateChangeFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnFormDateChange();
} */
/*static void _OnFormDateSetfocusFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnFormDateSetfocus();} */ 
/*static void _OnFormDateKillfocusFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnFormDateKillfocus();
} */
static int _OnFormDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSummaryDailyFoodOrder *)pWnd)->OnFormDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSummaryDailyFoodOrder *)pWnd)->OnToDateCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSummaryDailyFoodOrder* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSSummaryDailyFoodOrder *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnStatusAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSSummaryDailyFoodOrder *pVw = (CHMSSummaryDailyFoodOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSummaryDailyFoodOrder*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSummaryDailyFoodOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSummaryDailyFoodOrder*)pWnd)->OnOrderListDeleteItem();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSSummaryDailyFoodOrder *pVw = (CHMSSummaryDailyFoodOrder *)pWnd;
	pVw->OnRefreshSelect();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSummaryDailyFoodOrder* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSSummaryDailyFoodOrder *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSSummaryDailyFoodOrder *)pWnd)->OnObjectAddNew();
}*/
static int _OnAddCHMSSummaryDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSSummaryDailyFoodOrder*)pWnd)->OnAddCHMSSummaryDailyFoodOrder();
} 
static int _OnEditCHMSSummaryDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSSummaryDailyFoodOrder*)pWnd)->OnEditCHMSSummaryDailyFoodOrder();
} 
static int _OnDeleteCHMSSummaryDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSSummaryDailyFoodOrder*)pWnd)->OnDeleteCHMSSummaryDailyFoodOrder();
} 
static int _OnSaveCHMSSummaryDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSSummaryDailyFoodOrder*)pWnd)->OnSaveCHMSSummaryDailyFoodOrder();
} 
static int _OnCancelCHMSSummaryDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSSummaryDailyFoodOrder*)pWnd)->OnCancelCHMSSummaryDailyFoodOrder();
}
static void _OnTheo_Ngay_DuyetSelectFnc(CWnd *pWnd){
	 ((CHMSSummaryDailyFoodOrder*)pWnd)->OnTheo_Ngay_DuyetSelect();
}

CHMSSummaryDailyFoodOrder::CHMSSummaryDailyFoodOrder(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 635;
	SetDefaultValues();
}
CHMSSummaryDailyFoodOrder::~CHMSSummaryDailyFoodOrder(){
}
void CHMSSummaryDailyFoodOrder::OnCreateComponents(){
	/*m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 1020, 60);
	m_wndGroupListDrug.Create(this, _T("Food Type List"), 5, 65, 1020, 625);
	m_wndFormDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFormDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 260, 55);
	m_wndToDate.Create(this,265, 30, 345, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 350, 30, 430, 55);
	m_wndStatus.Create(this,435, 30, 535, 55);	
	m_wndObjectLabel.Create(this, _T("Object"), 540, 30, 620, 55);
	m_wndObject.Create(this, 625, 30, 720, 55);	
	m_wndOrderList.Create(this,10, 90, 1015, 620);	
	m_wndAllDept.Create(this, _T("Summery"), 725, 30, 865, 55);	
	m_wndRefresh.Create(this, _T("Refresh"), 870, 30, 940, 55);
	m_wndPrint.Create(this, _T("&Preview"), 945, 30, 1015, 55);*/
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 1020, 60);
	m_wndGroupListDrug.Create(this, _T("Food Type List"), 5, 95, 1020, 635);
	m_wndFormDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFormDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 260, 55);
	m_wndToDate.Create(this,265, 30, 345, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 350, 30, 430, 55);
	m_wndStatus.Create(this,435, 30, 535, 55); 
	m_wndPrint.Create(this, _T("&Preview"), 945, 30, 1015, 55);
	m_wndOrderList.Create(this,10, 120, 1015, 630); 
	m_wndRefresh.Create(this, _T("Refresh"), 870, 30, 940, 55);
	m_wndObjectLabel.Create(this, _T("Object"), 540, 30, 620, 55);
	m_wndObject.Create(this,625, 30, 720, 55); 
	m_wndAllDept.Create(this, _T("Summery"), 725, 30, 865, 55);
	m_wndTheo_Ngay_Duyet.Create(this, _T("Theo_Ngay_Duyet_Phieu"), 0, 0, 0, 0);

}
void CHMSSummaryDailyFoodOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFormDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFormDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndOrderList.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 60);	//identify
	m_wndOrderList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 350);	
	m_wndOrderList.InsertColumn(2, _T("\x42\xE1o"), CFMT_NUMBER, 40);	
	m_wndOrderList.InsertColumn(3, _T("\x43\x1EAFt"), CFMT_NUMBER, 40);	
	m_wndOrderList.InsertColumn(4, _T("Qty"), CFMT_NUMBER, 40);	
	m_wndOrderList.InsertColumn(5, _T("\x42\xE1o"), CFMT_NUMBER, 40);	
	m_wndOrderList.InsertColumn(6, _T("\x43\x1EAFt"), CFMT_NUMBER, 40);	
	m_wndOrderList.InsertColumn(7, _T("Qty"), CFMT_NUMBER, 40);	
	m_wndOrderList.InsertColumn(8, _T("\x42\xE1o"), CFMT_NUMBER, 40);		
	m_wndOrderList.InsertColumn(9, _T("\x43\x1EAFt"), CFMT_NUMBER, 40);	
	m_wndOrderList.InsertColumn(10, _T("Qty"), CFMT_NUMBER, 40);	
	//m_wndOrderList.InsertColumn(11, _T("\x43\x1EAFt"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(11, _T("T\x1ED5ng s\x1ED1"), CFMT_NUMBER, 50);
	m_wndOrderList.InsertColumn(12, _T("Price"), CFMT_MONEY, 70);
	m_wndOrderList.InsertColumn(13, _T("Amount"), CFMT_MONEY, 90);
	m_wndOrderList.InsertColumn(14, _T("ItemID"), CFMT_TEXT, 0);	
	m_wndOrderList.InsertColumn(15, _T("GroupID"), CFMT_TEXT, 0);
	m_wndOrderList.SetSortHeader(false);
	m_wndOrderList.GetHeaderControl()->SetItemHeight(2);
	m_wndOrderList.GetHeaderControl()->MergeCell(_T("S\xE1ng"), 0, 2, 1, 4, true);
	m_wndOrderList.GetHeaderControl()->MergeCell(_T("Tr\x1B0\x61"), 0, 5, 1, 7, true);
	m_wndOrderList.GetHeaderControl()->MergeCell(_T("T\x1ED1i"), 0, 8, 1, 10, true);
	
	m_wndOrderList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndObject.SetCheckBox(true);

}
void CHMSSummaryDailyFoodOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFormDate.SetEvent(WE_CHANGE, _OnFormDateChangeFnc);
	//m_wndFormDate.SetEvent(WE_SETFOCUS, _OnFormDateSetfocusFnc);
	//m_wndFormDate.SetEvent(WE_KILLFOCUS, _OnFormDateKillfocusFnc);
	m_wndFormDate.SetEvent(WE_CHECKVALUE, _OnFormDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	m_wndTheo_Ngay_Duyet.SetEvent(WE_CLICK, _OnTheo_Ngay_DuyetSelectFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCHMSSummaryDailyFoodOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCHMSSummaryDailyFoodOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCHMSSummaryDailyFoodOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCHMSSummaryDailyFoodOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCHMSSummaryDailyFoodOrderFnc, 0, 'T', VK_CONTROL);
	m_szFormDate = m_szToDate = pMF->GetSysDate();
	m_szFromTime = _T("00:00:00");
	m_szToTime = _T("23:59:00");
	SetMode(VM_EDIT);

}
void CHMSSummaryDailyFoodOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFormDate.GetDlgCtrlID(), m_szFormDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	//DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Check(pDX, m_wndAllDept.GetDlgCtrlID(), m_bAllDept);
	DDX_Check(pDX, m_wndTheo_Ngay_Duyet.GetDlgCtrlID(), m_bTheo_Ngay_Duyet);

}
void CHMSSummaryDailyFoodOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSummaryDailyFoodOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSummaryDailyFoodOrder::SetDefaultValues(){

	m_szFormDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();
	m_szObjectKey.Empty();
	m_bTheo_Ngay_Duyet=FALSE;

}
int CHMSSummaryDailyFoodOrder::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
/*void CHMSSummaryDailyFoodOrder::OnFormDateChange(){
	
} */
/*void CHMSSummaryDailyFoodOrder::OnFormDateSetfocus(){
	
} */
/*void CHMSSummaryDailyFoodOrder::OnFormDateKillfocus(){
	
} */

void CHMSSummaryDailyFoodOrder::OnTheo_Ngay_DuyetSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSSummaryDailyFoodOrder::OnFormDateCheckValue(){
	return 0;
} 
/*void CHMSSummaryDailyFoodOrder::OnToDateChange(){
	
} */
/*void CHMSSummaryDailyFoodOrder::OnToDateSetfocus(){
	
} */
/*void CHMSSummaryDailyFoodOrder::OnToDateKillfocus(){
	
} */
int CHMSSummaryDailyFoodOrder::OnToDateCheckValue(){
	return 0;
} 
void CHMSSummaryDailyFoodOrder::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSummaryDailyFoodOrder::OnStatusSelendok()
{
	 
}
/*void CHMSSummaryDailyFoodOrder::OnStatusSetfocus(){
	
}*/
/*void CHMSSummaryDailyFoodOrder::OnStatusKillfocus(){
	
}*/
long CHMSSummaryDailyFoodOrder::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szLabel;	
	TranslateString(_T("Confirm"), szLabel);
	m_wndStatus.AddItems(_T("S"), szLabel, NULL);
	TranslateString(_T("Approval"), szLabel);
	m_wndStatus.AddItems(_T("A"), szLabel, NULL);

	return 0;
}
/*void CHMSSummaryDailyFoodOrder::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSummaryDailyFoodOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrintDeliverySummery(_T(""), _T(""));
} 
void CHMSSummaryDailyFoodOrder::OnOrderListDblClick(){
	
} 
void CHMSSummaryDailyFoodOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSummaryDailyFoodOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSummaryDailyFoodOrder::OnOrderListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderBy, szObjectWhere, szWhere, szDate;
	bool bObjectServ = false;
	UpdateData(true);
	int nSubQtySC=0,nSubQtyTC=0,nSubQtyCC=0, nSubQtyS=0,nSubQtyT=0,nSubQtyC=0, nSubQty=0, nSubAmount=0,nSubTongS=0, nSubTongT=0, nSubTongC=0;
	int nTotalQtySC,nTotalQtyTC,nTotalQtyCC, nTotalQtyS,nTotalQtyT,nTotalQtyC, nTongS, nTongT, nTongC;
	nTotalQtySC = nTotalQtyTC = nTotalQtyCC = nTotalQtyS = nTotalQtyT = nTotalQtyC = nTongS = nTongT = nTongC=0;
	m_szStatusKey = m_wndStatus.GetCurrent(0);
	if (m_bTheo_Ngay_Duyet)
		{
		szDate = _T("HFO_APPROVEDATE");
		}
	else
		{
		szDate = _T("hfo_orderdate");
		}
	//_msg(_T("%s"),szDate); 
	if(m_szStatusKey == _T("S"))
	{
		szWhere.Format(_T(" AND hfo_orderstatus = 'S' AND %s BETWEEN TO_TIMESTAMP('%s %s', 'yyyy/mm/dd HH24:MI:SS') AND TO_TIMESTAMP('%s %s', 'yyyy/mm/dd HH24:MI:SS') "),  
			szDate, m_szFormDate, m_szFromTime, m_szToDate, m_szToTime);
	}
	else
	{
		szWhere.Format(_T(" AND hfo_orderstatus = 'A' AND %s BETWEEN TO_TIMESTAMP('%s %s', 'yyyy/mm/dd HH24:MI:SS') AND TO_TIMESTAMP('%s %s', 'yyyy/mm/dd HH24:MI:SS') "),  
			szDate, m_szFormDate, m_szFromTime, m_szToDate, m_szToTime);
	}

	for(int i = 0; i < m_wndObject.GetItemCount(); i++){
		if(m_wndObject.GetCheck(i))
		{   
			if(!szObjectWhere.IsEmpty())
				szObjectWhere += _T(", ");
			szObjectWhere.AppendFormat(_T("%s"), m_wndObject.GetCheck(i, 0));

			if(m_wndObject.GetCheck(i, 0) == _T("7")){
				bObjectServ = true;
			}
		}
	}
	
	// 3 la che do an cua nguoi nha benh nhan hfl_categoryid = 3
	if(!szObjectWhere.IsEmpty()){
		
		szWhere.AppendFormat(_T(" AND hd_object IN(%s)"), szObjectWhere);
		
		/*if(bObjectServ)
		{
			szWhere.AppendFormat(_T(" AND (hd_object IN(%s) OR hfol_level = 3)"), szObjectWhere);			
		}
		else
		{
			szWhere.AppendFormat(_T(" AND (hd_object IN(%s) AND hfol_level < 3)"), szObjectWhere);
		}*/
	}

	m_wndOrderList.BeginLoad(); 
	int nCount = 0;

	if(m_bAllDept){
		m_szSQL.Format(_T(" SELECT itemid,") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   groupid,") \
		_T("   unit,") \
		_T("   unitprice,") \
		_T("   SUM(FoodQtyS)          AS QtyS,  ") \
		_T("   SUM(FoodQtySC)          AS QtySC,  ") \
		_T("   SUM(FoodQtyS-FoodQtySC) AS TongS,  ") \
		_T("   SUM(FoodQtyT)          AS QtyT,  ") \
		_T("   SUM(FoodQtyTC)          AS QtyTC,  ") \
		_T("   SUM(FoodQtyT-FoodQtyTC) AS TongT,  ") \
		_T("   SUM(FoodQtyC)          AS QtyC,  ") \
		_T("   SUM(FoodQtyCC)          AS QtyCC,  ") \
		_T("   SUM(FoodQtyC-FoodQtyCC) AS TongC,  ") \
		_T("   SUM(FoodQty-(FoodQtySC+FoodQtyTC+FoodQtyCC))          AS Qty,  ") \
		_T("   SUM(FoodQty-(FoodQtySC+FoodQtyTC+FoodQtyCC))*unitprice AS amount") \
		_T(" FROM") \
		_T("   (SELECT hfol_itemid AS itemid,") \
		_T("	 CASE WHEN hfo_depttype = 'DT' THEN hfo_deptid ELSE hcr_admitdept END    AS deptid,") \
		_T("     hfl_name2          AS foodid,") \
		_T("     hfl_name          AS foodname,") \
		_T("	 hfol_type		   AS type, ") \
		_T("     hfol_groupid      AS groupid,") \
		_T("     hfl_unit          AS unit,") \
		_T("     hfol_unitprice    AS unitprice,    ") \
		_T("     hfol_qtyorder     AS FoodQty,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'S' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyS,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'S' AND hfe_refstatus='C'") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtySC,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'T' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyT,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'T' AND hfe_refstatus='C'") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyTC,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'C' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyC,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'C' AND hfe_refstatus='C'") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyCC    ") \
		_T("   FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid=hfol_orderid)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno =hfo_docno)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno =hfo_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid        =hfol_itemid)") \
		_T("   WHERE hfo_ordertype ='D'") \
		_T("   %s ") \
		_T("   )") \
		_T(" GROUP BY groupid,") \
		_T("   itemid,") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   unit,") \
		_T("   unitprice") \
		_T(" ORDER BY foodname,") \
		_T("   unit,") \
		_T("   unitprice"), szWhere);
	}
	else
	{
		m_szSQL.Format(_T(" SELECT itemid,") \
			_T("   HMS_GETDEPARTMENTNAME(deptid) AS DeptName,") \
			_T("   foodid,") \
			_T("   foodname,") \
			_T("   groupid,") \
			_T("   unit,") \
			_T("   unitprice,") \
			_T("   SUM(FoodQtyS)          AS QtyS,  ") \
			_T("   SUM(FoodQtySC)          AS QtySC,  ") \
			_T("   SUM(FoodQtyS-FoodQtySC) AS TongS,  ") \
			_T("   SUM(FoodQtyT)          AS QtyT,  ") \
			_T("   SUM(FoodQtyTC)          AS QtyTC,  ") \
			_T("   SUM(FoodQtyT-FoodQtyTC) AS TongT,  ") \
			_T("   SUM(FoodQtyC)          AS QtyC,  ") \
			_T("   SUM(FoodQtyCC)          AS QtyCC,  ") \
			_T("   SUM(FoodQtyC-FoodQtyCC) AS TongC,  ") \
			_T("   SUM(FoodQty-(FoodQtySC+FoodQtyTC+FoodQtyCC))          AS Qty,  ") \
			_T("   SUM(FoodQty-(FoodQtySC+FoodQtyTC+FoodQtyCC))*unitprice AS amount") \
			_T(" FROM") \
			_T("   (SELECT hfol_itemid AS itemid,") \
			_T("	 CASE WHEN hfo_depttype = 'DT' THEN hfo_deptid ELSE hcr_admitdept END    AS deptid,") \
			_T("     hfl_name2          AS foodid,") \
			_T("     hfl_name          AS foodname,") \
			_T("	 hfol_type		   AS type, ") \
			_T("     hfol_groupid      AS groupid,") \
			_T("     hfl_unit          AS unit,") \
			_T("     hfol_unitprice    AS unitprice,    ") \
			_T("     hfol_qtyorder     AS FoodQty,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'S' ") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtyS,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'S' AND hfe_refstatus='C'") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtySC,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'T' ") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtyT,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'T' AND hfe_refstatus='C'") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtyTC,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'C' ") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtyC,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'C' AND hfe_refstatus='C'") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtyCC    ") \
			_T("   FROM hms_feefood") \
			_T("   LEFT JOIN hms_feefoodline") \
			_T("   ON(hfo_orderid=hfol_orderid)") \
			_T("   LEFT JOIN hms_clinical_record") \
			_T("   ON(hcr_docno =hfo_docno)") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON(hd_docno =hfo_docno)") \
			_T("   LEFT JOIN hms_fee_list") \
			_T("   ON(hfl_feeid        =hfol_itemid)") \
			_T("   WHERE hfo_ordertype ='D'") \
			_T("   %s ") \
			_T("   )") \
			_T(" GROUP BY groupid,") \
			_T("   itemid,") \
			_T("   deptid,") \
			_T("   foodid,") \
			_T("   foodname,") \
			_T("   unit,") \
			_T("   unitprice") \
			_T(" ORDER BY DeptName,foodname,") \
			_T("   unit,") \
			_T("   unitprice"), szWhere);
	}		

_fmsg(_T("%s"), m_szSQL);
	nCount = rs.ExecSQL(m_szSQL);
	int nIndex = 1;
	double nTotalAmount =0;
	int nItem = 0, nTotalQty =0;	
	CString tmpStr, szStorageName, szProductName, szLineNew, szLineOld;
	
	while(!rs.IsEOF()){		
		nItem++;		
		rs.GetValue(_T("deptname"), szLineNew);
		if(szLineNew != szLineOld && !szLineNew.IsEmpty() && !m_bAllDept)
		{
			if( nSubQty > 0){
				TranslateString(_T("Sum"), tmpStr);
				nItem = m_wndOrderList.AddItems(
					_T(""),
					tmpStr,			
					ToString(nSubQtyS),
					ToString(nSubQtySC),
					ToString(nSubTongS),
					ToString(nSubQtyT),
					ToString(nSubQtyTC),
					ToString(nSubTongT),
					ToString(nSubQtyC),
					ToString(nSubQtyCC),
					ToString(nSubTongC),
					ToString(nSubQty),
					_T(""),
					ToString(nSubAmount), 
					_T(""),
					_T(""),
					NULL);
				m_wndOrderList.SetItemBkColor(nItem, RGB(192, 192, 192), FALSE);
				m_wndOrderList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndOrderList.MergeCell(nItem, 1, nItem, 1, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);

				nTotalQtySC += nSubQtySC;
				nTotalQtyTC += nSubQtyTC;
				nTotalQtyCC += nSubQtyCC; 
				nTotalQtyS += nSubQtyS;
				nTotalQtyT += nSubQtyT;
				nTotalQtyC += nSubQtyC;
				nTongS += nSubTongS;
				nTongT += nSubTongT;
				nTongC += nSubTongC;
				nTotalQty += nSubQty;
				nTotalAmount += nSubAmount;

				nSubQtySC=0,nSubQtyTC=0,nSubQtyCC=0, nSubQtyS=0,nSubQtyT=0,nSubQtyC=0,nSubQty=0;
				nSubAmount=nSubTongS=nSubTongT=nSubTongC=0;
				
			}
			nItem = m_wndOrderList.AddItems(_T(""), szLineNew, NULL);
			m_wndOrderList.SetItemBkColor(nItem, RGB( 64, 128, 128), FALSE);
			m_wndOrderList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndOrderList.MergeCell(nItem, 1, nItem, 10, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);
			szLineOld = szLineNew;
		}


		nSubQtyS += str2int(rs.GetValue(_T("QtyS")));
		nSubQtySC += str2int(rs.GetValue(_T("QtySC")));
		nSubTongS += str2int(rs.GetValue(_T("TongS")));

		nSubQtyT += str2int(rs.GetValue(_T("QtyT")));
		nSubQtyTC += str2int(rs.GetValue(_T("QtyTC")));
		nSubTongT += str2int(rs.GetValue(_T("TongT")));

		nSubQtyC += str2int(rs.GetValue(_T("QtyC")));
		nSubQtyCC += str2int(rs.GetValue(_T("QtyCC")));
		nSubTongC += str2int(rs.GetValue(_T("TongC")));

		nSubQty += str2int(rs.GetValue(_T("Qty")));
		nSubAmount += str2double(rs.GetValue(_T("amount")));


		m_wndOrderList.AddItems(
			rs.GetValue(_T("foodid")),
			rs.GetValue(_T("foodname")),
			rs.GetValue(_T("QtyS")),
			rs.GetValue(_T("QtySC")),
			rs.GetValue(_T("TongS")),
			rs.GetValue(_T("QtyT")),
			rs.GetValue(_T("QtyTC")),
			rs.GetValue(_T("TongT")),
			rs.GetValue(_T("QtyC")),
			rs.GetValue(_T("QtyCC")),
			rs.GetValue(_T("TongC")),
			rs.GetValue(_T("Qty")),
			rs.GetValue(_T("unitprice")),
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("Groupid")),
			NULL);
		rs.MoveNext();
	}
	if( nSubQty > 0){
		TranslateString(_T("Sum"), tmpStr);
		nItem = m_wndOrderList.AddItems(
			_T(""),
			tmpStr,			
			ToString(nSubQtyS),
			ToString(nSubQtySC),
			ToString(nSubTongS),
			ToString(nSubQtyT),
			ToString(nSubQtyTC),
			ToString(nSubTongT),
			ToString(nSubQtyC),
			ToString(nSubQtyCC),
			ToString(nSubTongC),
			ToString(nSubQty),
			_T(""),
			ToString(nSubAmount), 
			_T(""),
			_T(""),
			NULL);
		m_wndOrderList.SetItemBkColor(nItem, RGB(192, 192, 192), FALSE);
		m_wndOrderList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
		m_wndOrderList.MergeCell(nItem, 1, nItem, 1, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);

		nTotalQtySC += nSubQtySC;
		nTotalQtyTC += nSubQtyTC;
		nTotalQtyCC += nSubQtyCC; 
		nTotalQtyS += nSubQtyS;
		nTotalQtyT += nSubQtyT;
		nTotalQtyC += nSubQtyC;
		nTongS += nSubTongS;
		nTongT += nSubTongT;
		nTongC += nSubTongC;
		nTotalQty += nSubQty;
		nTotalAmount += nSubAmount;
	}

	if(nTotalQty > 0 && !m_bAllDept){
		TranslateString(_T("Total"), tmpStr);
		nItem = m_wndOrderList.AddItems(
			_T(""),
			tmpStr,			
			ToString(nTotalQtyS),
			ToString(nTotalQtySC),
			ToString(nTongS),
			ToString(nTotalQtyT),
			ToString(nTotalQtyTC),
			ToString(nTongT),
			ToString(nTotalQtyC),
			ToString(nTotalQtyCC),
			ToString(nTongC),
			ToString(nTotalQty),
			_T(""),
			ToString(nTotalAmount), 
			_T(""),
			_T(""),
			NULL);
		m_wndOrderList.SetItemBkColor(nItem, RGB(192, 192, 192), FALSE);
		m_wndOrderList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
		m_wndOrderList.MergeCell(nItem, 1, nItem, 1, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, true);
	}
	
	m_wndOrderList.EndLoad();

	return nCount;
}
void CHMSSummaryDailyFoodOrder::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListLoadData();
} 
void CHMSSummaryDailyFoodOrder::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSummaryDailyFoodOrder::OnObjectSelendok(){
	 
}
/*void CHMSSummaryDailyFoodOrder::OnObjectSetfocus(){
	
}*/
/*void CHMSSummaryDailyFoodOrder::OnObjectKillfocus(){
	
}*/
long CHMSSummaryDailyFoodOrder::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && str2int(m_szObjectKey)){
		szWhere.Format(_T(" WHERE ho_id='%s' "), m_szObjectKey);
	};
	
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  ho_id as id,	ho_desc as name ") \
_T(" FROM hms_object %s ORDER BY cast(ho_id as integer) "), szWhere );
	nCount = rs.ExecSQL(szSQL);
_tprintf(_T("%s"), szSQL);

_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), 			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSummaryDailyFoodOrder::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSSummaryDailyFoodOrder::OnAddCHMSSummaryDailyFoodOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSummaryDailyFoodOrder::OnEditCHMSSummaryDailyFoodOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSummaryDailyFoodOrder::OnDeleteCHMSSummaryDailyFoodOrder(){
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
 		OnCancelCHMSSummaryDailyFoodOrder();
 	}
	return 0;
}
int CHMSSummaryDailyFoodOrder::OnSaveCHMSSummaryDailyFoodOrder(){
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
 		//OnCHMSSummaryDailyFoodOrderListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSummaryDailyFoodOrder::OnCancelCHMSSummaryDailyFoodOrder(){
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
int CHMSSummaryDailyFoodOrder::OnCHMSSummaryDailyFoodOrderListLoadData(){
	return 0;
}

void CHMSSummaryDailyFoodOrder::OnPrintDeliverySummery(LPCTSTR lpszFromDate, LPCTSTR lpszToDate){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;	
	CString tmpStr;
	CString szSQL, szWhere, szObjectWhere, szObjectName;
	bool bObjectServ = false;
	CRecord rs(&pMF->m_db);	
	int nSubQtySC=0,nSubQtyTC=0,nSubQtyCC=0, nSubQtyS=0,nSubQtyT=0,nSubQtyC=0, nSubQty=0, nSubAmount=0,nSubTongS=0, nSubTongT=0, nSubTongC=0;
	int nTotalQtySC,nTotalQtyTC,nTotalQtyCC, nTotalQtyS,nTotalQtyT,nTotalQtyC, nTongS, nTongT, nTongC;
	nTotalQtySC = nTotalQtyTC = nTotalQtyCC = nTotalQtyS = nTotalQtyT = nTotalQtyC = nTongS = nTongT = nTongC=0;

	UpdateData(true);

	if(m_bAllDept)
	{
	
		if(!rpt.Init(_T("Reports/HMS/TM_FOODORDERSUMMERYALL.RPT")) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/TM_FOODORDERSUMMERY.RPT")) )
			return;
	}
		
	
	m_szStatusKey = m_wndStatus.GetCurrent(0);

	if(m_szStatusKey == _T("S"))
	{
		szWhere.Format(_T(" AND hfo_orderstatus = 'S' AND hfo_orderdate BETWEEN to_date('%s', 'yyyy/mm/dd') AND to_date('%s', 'yyyy/mm/dd') "),  m_szFormDate, m_szToDate);
	}
	else
	{
		szWhere.Format(_T(" AND hfo_orderstatus = 'A' AND hfo_orderdate BETWEEN to_date('%s', 'yyyy/mm/dd') AND to_date('%s', 'yyyy/mm/dd') "),  m_szFormDate, m_szToDate);
	}

	for(int i = 0; i < m_wndObject.GetItemCount(); i++){
		if(m_wndObject.GetCheck(i))
		{
			if(!szObjectWhere.IsEmpty())
				szObjectWhere += _T(", ");
			szObjectWhere.AppendFormat(_T("%s"), m_wndObject.GetCheck(i, 0));

			if(!szObjectName.IsEmpty())
				szObjectName += _T(", ");
			szObjectName.AppendFormat(_T("%s"), m_wndObject.GetCheck(i, 1));

			if(m_wndObject.GetCheck(i, 0) == _T("7"))
			{
				bObjectServ = true;
			}
		}
	}
	
	// 3 la che do an cua nguoi nha benh nhan hfl_categoryid = 3
	if(!szObjectWhere.IsEmpty()){
		
		szWhere.AppendFormat(_T(" AND hd_object IN(%s)"), szObjectWhere);			

		/*if(bObjectServ)
		{
			szWhere.AppendFormat(_T(" AND (hd_object IN(%s) OR hfol_level = 3)"), szObjectWhere);			
		}
		else
		{
			szWhere.AppendFormat(_T(" AND (hd_object IN(%s) AND hfol_level < 3)"), szObjectWhere);
		}*/
	}


	if(m_bAllDept){
		m_szSQL.Format(_T(" SELECT itemid,") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   groupid,") \
		_T("   unit,") \
		_T("   unitprice,") \
		_T("   SUM(FoodQtyS)          AS QtyS,  ") \
		_T("   SUM(FoodQtySC)          AS QtySC,  ") \
		_T("   SUM(FoodQtyS-FoodQtySC) AS TongS,  ") \
		_T("   SUM(FoodQtyT)          AS QtyT,  ") \
		_T("   SUM(FoodQtyTC)          AS QtyTC,  ") \
		_T("   SUM(FoodQtyT-FoodQtyTC) AS TongT,  ") \
		_T("   SUM(FoodQtyC)          AS QtyC,  ") \
		_T("   SUM(FoodQtyCC)          AS QtyCC,  ") \
		_T("   SUM(FoodQtyC-FoodQtyCC) AS TongC,  ") \
		_T("   SUM(FoodQty-(FoodQtySC+FoodQtyTC+FoodQtyCC))          AS Qty,  ") \
		_T("   SUM(FoodQty-(FoodQtySC+FoodQtyTC+FoodQtyCC))*unitprice AS amount") \
		_T(" FROM") \
		_T("   (SELECT hfol_itemid AS itemid,") \
		_T("	 CASE WHEN hfo_depttype = 'DT' THEN hfo_deptid ELSE hcr_admitdept END    AS deptid,") \
		_T("     hfl_name2          AS foodid,") \
		_T("     hfl_name          AS foodname,") \
		_T("	 hfol_type		   AS type, ") \
		_T("     hfol_groupid      AS groupid,") \
		_T("     hfl_unit          AS unit,") \
		_T("     hfol_unitprice    AS unitprice,    ") \
		_T("     hfol_qtyorder     AS FoodQty,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'S' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyS,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'S' AND hfe_refstatus='C'") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtySC,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'T' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyT,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'T' AND hfe_refstatus='C'") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyTC,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'C' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyC,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'C' AND hfe_refstatus='C'") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyCC    ") \
		_T("   FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid=hfol_orderid)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno =hfo_docno)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno =hfo_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid        =hfol_itemid)") \
		_T("   WHERE hfo_ordertype ='D'") \
		_T("   %s ") \
		_T("   )") \
		_T(" GROUP BY groupid,") \
		_T("   itemid,") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   unit,") \
		_T("   unitprice") \
		_T(" ORDER BY foodname,") \
		_T("   unit,") \
		_T("   unitprice"), szWhere);
	}
	else
	{
		m_szSQL.Format(_T(" SELECT itemid,") \
			_T("   HMS_GETDEPARTMENTNAME(deptid) AS DeptName,") \
			_T("   foodid,") \
			_T("   foodname,") \
			_T("   groupid,") \
			_T("   unit,") \
			_T("   unitprice,") \
			_T("   SUM(FoodQtyS)          AS QtyS,  ") \
			_T("   SUM(FoodQtySC)          AS QtySC,  ") \
			_T("   SUM(FoodQtyS-FoodQtySC) AS TongS,  ") \
			_T("   SUM(FoodQtyT)          AS QtyT,  ") \
			_T("   SUM(FoodQtyTC)          AS QtyTC,  ") \
			_T("   SUM(FoodQtyT-FoodQtyTC) AS TongT,  ") \
			_T("   SUM(FoodQtyC)          AS QtyC,  ") \
			_T("   SUM(FoodQtyCC)          AS QtyCC,  ") \
			_T("   SUM(FoodQtyC-FoodQtyCC) AS TongC,  ") \
			_T("   SUM(FoodQty-(FoodQtySC+FoodQtyTC+FoodQtyCC))          AS Qty,  ") \
			_T("   SUM(FoodQty-(FoodQtySC+FoodQtyTC+FoodQtyCC))*unitprice AS amount") \
			_T(" FROM") \
			_T("   (SELECT hfol_itemid AS itemid,") \
			_T("	 CASE WHEN hfo_depttype = 'DT' THEN hfo_deptid ELSE hcr_admitdept END    AS deptid,") \
			_T("     hfl_name2          AS foodid,") \
			_T("     hfl_name          AS foodname,") \
			_T("	 hfol_type		   AS type, ") \
			_T("     hfol_groupid      AS groupid,") \
			_T("     hfl_unit          AS unit,") \
			_T("     hfol_unitprice    AS unitprice,    ") \
			_T("     hfol_qtyorder     AS FoodQty,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'S' ") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtyS,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'S' AND hfe_refstatus='C'") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtySC,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'T' ") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtyT,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'T' AND hfe_refstatus='C'") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtyTC,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'C' ") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtyC,    ") \
			_T("     CASE ") \
			_T("		WHEN hfol_type = 'C' AND hfe_refstatus='C'") \
			_T("		THEN hfol_qtyorder ") \
			_T("		ELSE 0 ") \
			_T("	 END AS FoodQtyCC    ") \
			_T("   FROM hms_feefood") \
			_T("   LEFT JOIN hms_feefoodline") \
			_T("   ON(hfo_orderid=hfol_orderid)") \
			_T("   LEFT JOIN hms_clinical_record") \
			_T("   ON(hcr_docno =hfo_docno)") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON(hd_docno =hfo_docno)") \
			_T("   LEFT JOIN hms_fee_list") \
			_T("   ON(hfl_feeid        =hfol_itemid)") \
			_T("   WHERE hfo_ordertype ='D'") \
			_T("   %s ") \
			_T("   )") \
			_T(" GROUP BY groupid,") \
			_T("   itemid,") \
			_T("   deptid,") \
			_T("   foodid,") \
			_T("   foodname,") \
			_T("   unit,") \
			_T("   unitprice") \
			_T(" ORDER BY DeptName,foodname,") \
			_T("   unit,") \
			_T("   unitprice"), szWhere);
	}
_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(m_szSQL);

	CString szDate;
	CReportSection* rptDetail;
	CString szItemID;	
	int nIndex = 1;
	double nTotalAmount =0;
	int nItem = 0, nTotalQty =0;
	
	szDate.Format(_T("Ng\xE0y %s"), CDate::Convert(m_szFormDate, yyyymmdd, ddmmyyyy));
	if(m_szFormDate != m_szToDate )
		szDate.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s "), CDate::Convert(m_szFormDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	rpt.GetReportHeader()->SetValue(_T("ObjectName"), szObjectName);

	CString szLineNew, szLineOld;
	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("deptname"), szLineNew);
		if(szLineNew != szLineOld && !szLineNew.IsEmpty() && !m_bAllDept)
		{
			if(nSubQty > 0)
			{				
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));			
				rptDetail->SetValue(_T("s3"), nSubQtyS);
				rptDetail->SetValue(_T("s4"), nSubQtySC);
				rptDetail->SetValue(_T("s5"), nSubTongS),
				rptDetail->SetValue(_T("s6"), nSubQtyT);
				rptDetail->SetValue(_T("s7"), nSubQtyTC);
				rptDetail->SetValue(_T("s8"), nSubTongT);
				rptDetail->SetValue(_T("s9"), nSubQtyC);
				rptDetail->SetValue(_T("s10"), nSubQtyCC);
				rptDetail->SetValue(_T("s11"), nSubTongC);
				rptDetail->SetValue(_T("s12"), nSubQty);
				rptDetail->SetValue(_T("s14"), nSubAmount);	

				nTotalQtySC += nSubQtySC;
				nTotalQtyTC += nSubQtyTC;
				nTotalQtyCC += nSubQtyCC; 
				nTotalQtyS += nSubQtyS;
				nTotalQtyT += nSubQtyT;
				nTotalQtyC += nSubQtyC;
				nTongS += nSubTongS;
				nTongT += nSubTongT;
				nTongC += nSubTongC;
				nTotalQty += nSubQty;
				nTotalAmount += nSubAmount;
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("name"), szLineNew);
			szLineOld = szLineNew;

			nSubQtySC=0,nSubQtyTC=0,nSubQtyCC=0, nSubQtyS=0,nSubQtyT=0,nSubQtyC=0,nSubQty=0;
			nSubAmount=nSubTongS=nSubTongT=nSubTongC=0;
		}
		
		rptDetail = rpt.AddDetail();
		nItem++;
		rs.GetValue(_T("foodid"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("foodname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("QtyS"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("QtySC"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("TongS"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("QtyT"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("QtyTC"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("TongT"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("QtyC"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);		
		rs.GetValue(_T("QtyCC"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.GetValue(_T("TongC"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		rs.GetValue(_T("Qty"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		rs.GetValue(_T("unitprice"), tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		rs.GetValue(_T("amount"), tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		nSubQtyS += str2int(rs.GetValue(_T("QtyS")));
		nSubQtySC += str2int(rs.GetValue(_T("QtySC")));
		nSubTongS += str2int(rs.GetValue(_T("TongS")));

		nSubQtyT += str2int(rs.GetValue(_T("QtyT")));
		nSubQtyTC += str2int(rs.GetValue(_T("QtyTC")));
		nSubTongT += str2int(rs.GetValue(_T("TongT")));

		nSubQtyC += str2int(rs.GetValue(_T("QtyC")));
		nSubQtyCC += str2int(rs.GetValue(_T("QtyCC")));
		nSubTongC += str2int(rs.GetValue(_T("TongC")));

		nSubQty += str2int(rs.GetValue(_T("Qty")));
		nSubAmount += str2double(rs.GetValue(_T("amount")));

		
		rs.MoveNext();
	}
	

	if(nSubQty > 0)
	{		
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));			
		rptDetail->SetValue(_T("s3"), nSubQtyS);
		rptDetail->SetValue(_T("s4"), nSubQtySC);
		rptDetail->SetValue(_T("s5"), nSubTongS),
		rptDetail->SetValue(_T("s6"), nSubQtyT);
		rptDetail->SetValue(_T("s7"), nSubQtyTC);
		rptDetail->SetValue(_T("s8"), nSubTongT);
		rptDetail->SetValue(_T("s9"), nSubQtyC);
		rptDetail->SetValue(_T("s10"), nSubQtyCC);
		rptDetail->SetValue(_T("s11"), nSubTongC);
		rptDetail->SetValue(_T("s12"), nSubQty);			
		rptDetail->SetValue(_T("s14"), nSubAmount);	

		nTotalQtySC += nSubQtySC;
		nTotalQtyTC += nSubQtyTC;
		nTotalQtyCC += nSubQtyCC; 
		nTotalQtyS += nSubQtyS;
		nTotalQtyT += nSubQtyT;
		nTotalQtyC += nSubQtyC;
		nTongS += nSubTongS;
		nTongT += nSubTongT;
		nTongC += nSubTongC;
		nTotalQty += nSubQty;
		nTotalAmount += nSubAmount;		
	}

	if(nTotalQty > 0 && !m_bAllDept)
	{		
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));			
		rptDetail->SetValue(_T("s3"), nTotalQtyS);
		rptDetail->SetValue(_T("s4"), nTotalQtySC);
		rptDetail->SetValue(_T("s5"), nTongS),
		rptDetail->SetValue(_T("s6"), nTotalQtyT);
		rptDetail->SetValue(_T("s7"), nTotalQtyTC);
		rptDetail->SetValue(_T("s8"), nTongT);
		rptDetail->SetValue(_T("s9"), nTotalQtyC);
		rptDetail->SetValue(_T("s10"), nTotalQtyCC);
		rptDetail->SetValue(_T("s11"), nTongC);
		rptDetail->SetValue(_T("s12"), nTotalQty);
		rptDetail->SetValue(_T("s14"), nTotalAmount);		
	}


	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
//	rs.GetValue(_T("doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("UserName"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}

	rpt.PrintPreview();
}
void CHMSSummaryDailyFoodOrder::OnResizeLayout() {
	AddResize(&m_wndOrderList, 100, 100);
}