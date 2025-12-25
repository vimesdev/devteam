#include "HMSDailyFoodOrder.h"
#include "HMSDailyFoodOrderList.h"
//#include "stdafx.h"

#include "MainFrm.h"
static void _OnAllStatusCheckFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnAllStatusCheck();
}
static void _OnOpenStatusCheckFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnOpenStatusCheck();
}
static void _OnSendStatusCheckFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnSendStatusCheck();
}
static void _OnIssueStatusCheckFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnIssueStatusCheck();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderList *)pWnd)->OnToDateCheckValue();
} 



static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderList *)pWnd)->OnOrderNoCheckValue();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListSelectItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderList*)pWnd)->OnListSelectItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderList *pVw = (CHMSDailyFoodOrderList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderList *pVw = (CHMSDailyFoodOrderList *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDailyDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderList*)pWnd)->OnAddHMSDailyDrugOrderListDialog();
} 
static int _OnEditHMSDailyDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderList*)pWnd)->OnEditHMSDailyDrugOrderListDialog();
} 
static int _OnDeleteHMSDailyDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderList*)pWnd)->OnDeleteHMSDailyDrugOrderListDialog();
} 
static int _OnSaveHMSDailyDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderList*)pWnd)->OnSaveHMSDailyDrugOrderListDialog();
} 
static int _OnCancelHMSDailyDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderList*)pWnd)->OnCancelHMSDailyDrugOrderListDialog();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderList *pVw = (CHMSDailyFoodOrderList *)pWnd;
	pVw->OnFindSelect();
} 

CHMSDailyFoodOrderList::CHMSDailyFoodOrderList(CWnd *pParent):CGuiDialog(pParent)
{
	m_nDlgWidth = 785;
	m_nDlgHeight = 410;
	SetDefaultValues();
	m_bAllStatus = m_bSendStatus = m_bIssueStatus = TRUE;
	m_bOpenStatus = TRUE;

}
CHMSDailyFoodOrderList::~CHMSDailyFoodOrderList(){
}
void CHMSDailyFoodOrderList::OnCreateComponents(){
	m_wndAllStatus.Create(this, _T("All"), 10, 550, 75, 575);
	m_wndOpenStatus.Create(this, _T("Open"), 80, 550, 75+75, 575);
	m_wndSendStatus.Create(this, _T("Sending"), 170, 550, 170+90, 575);
	m_wndIssueStatus.Create(this, _T("Issued"), 170+95, 550, 170+95+90, 575);
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 1000, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 85, 55);
	m_wndFromDate.Create(this,90, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 255, 55);
	m_wndToDate.Create(this,260, 30, 345, 55);
	m_wndOrderNoLabel.Create(this, _T("Sheet No"), 580, 30, 655, 55);
	m_wndOrderNo.Create(this,660, 30, 795, 55); 
	m_wndFind.Create(this, _T("&Find"), 800, 30, 880, 55);
	m_wndList.Create(this,10, 65, 960, 545); 
	
	m_wndPrint.Create(this, _T("&Print"), 790, 550, 875, 575);
	m_wndCancel.Create(this, _T("&Cancel"), 880, 550, 965, 575);
}
void CHMSDailyFoodOrderList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);	//batch_id
	m_wndList.InsertColumn(1, _T("ORDERNO"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(2, _T("ORDERDATE"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(3, _T("Issue Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(4, _T("Status"), CFMT_TEXT|CFMT_CENTER, 120);
	m_wndList.InsertColumn(5, _T("Description"), CFMT_TEXT, 310);
	m_wndList.InsertColumn(6, _T("Created By"), CFMT_TEXT, 150);
	m_wndList.GetHeaderControl()->SetItemHeight(2);
	if(pMF->GetModuleID() == _T("PM")){
		m_wndOpenStatus.EnableWindow(false);
		m_bOpenStatus = FALSE;
	}

}
void CHMSDailyFoodOrderList::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);

	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Select"), _OnListSelectItemFnc, 0, VK_F3, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

	m_wndAllStatus.SetEvent(WE_CLICK, _OnAllStatusCheckFnc);
	m_wndOpenStatus.SetEvent(WE_CLICK, _OnOpenStatusCheckFnc);
	m_wndSendStatus.SetEvent(WE_CLICK, _OnSendStatusCheckFnc);
	m_wndIssueStatus.SetEvent(WE_CLICK, _OnIssueStatusCheckFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(m_szFromDate.IsEmpty())
	{
		m_szFromDate = pMF->GetSysDate();
		m_szToDate = m_szFromDate;
	}
	if(!m_szDeptKey.IsEmpty())
	{
	//	m_wndDept.EnableWindow(false);
	}
	UpdateData(false);	
	
	OnListLoadData();

}
void CHMSDailyFoodOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Check(pDX, m_wndAllStatus.GetDlgCtrlID(), m_bAllStatus);
	DDX_Check(pDX, m_wndOpenStatus.GetDlgCtrlID(), m_bOpenStatus);
	DDX_Check(pDX, m_wndSendStatus.GetDlgCtrlID(), m_bSendStatus);
	DDX_Check(pDX, m_wndIssueStatus.GetDlgCtrlID(), m_bIssueStatus);
}
void CHMSDailyFoodOrderList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyFoodOrderList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSDailyFoodOrderList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szFromStockKey.Empty();
	m_szDeptKey.Empty();

}
int CHMSDailyFoodOrderList::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
/*void CHMSDailyFoodOrderList::OnFromDateChange(){
	
} */
/*void CHMSDailyFoodOrderList::OnFromDateSetfocus(){
	
} */
/*void CHMSDailyFoodOrderList::OnFromDateKillfocus(){
	
} */
int CHMSDailyFoodOrderList::OnFromDateCheckValue(){
	OnListLoadData();
	return 1;
} 
/*void CHMSDailyFoodOrderList::OnToDateChange(){
	
} */
/*void CHMSDailyFoodOrderList::OnToDateSetfocus(){
	
} */
/*void CHMSDailyFoodOrderList::OnToDateKillfocus(){
	
} */
int CHMSDailyFoodOrderList::OnToDateCheckValue(){
	OnListLoadData();
	return 1;
} 


int CHMSDailyFoodOrderList::OnOrderNoCheckValue(){
	OnListLoadData();
	return 1;
}

void CHMSDailyFoodOrderList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}	
	
	CGuiDialog::OnOK();
} 
void CHMSDailyFoodOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	if(nNewItem < 0)
		return;
	m_nOID = str2long(m_wndList.GetItemText(nNewItem, 0));
	
} 
int CHMSDailyFoodOrderList::OnListSelectItem(){	
	return 0;
} 
long CHMSDailyFoodOrderList::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStatusFilter;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;

	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(hfos_orderno) like(chr(37)||lower('%s')||chr(37)) "), m_szOrderNo);
	}
	
	szWhere.AppendFormat(_T(" and HFOS_DEPTID='%s' "), pMF->GetDepartmentID());
	if(m_bAllStatus){
		m_bOpenStatus = m_bSendStatus = m_bIssueStatus = TRUE;
	}
	if(m_bOpenStatus){
		if(!szStatusFilter.IsEmpty())
			szStatusFilter += _T(",");
		szStatusFilter += _T("'O'");
	}
	if(m_bSendStatus){
		if(!szStatusFilter.IsEmpty())
			szStatusFilter += _T(",");
		szStatusFilter += _T("'S'");
	}
	if(m_bIssueStatus){
		if(!szStatusFilter.IsEmpty())
			szStatusFilter += _T(",");
		szStatusFilter += _T("'A','I'");
	}
	if(!szStatusFilter.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and HFOS_ORDERSTATUS in(%s) "), szStatusFilter);
	}


	szSQL.Format(_T(" SELECT HFOS_ORDERID as ORDERID,") \
		_T(" HFOS_SHEETNO as SHEETNO, ") \
		_T("   HFOS_ORDERDATE                     AS orderdate,") \
		_T("   HFOS_UPDATEDDATE                     AS issuedate,") \
		_T("   HFOS_DESCRIPTION as description,") \
		_T("   HFOS_ORDERSTATUS as status,") \
		_T("   m_transaction_getstatusdesc(HFOS_ORDERSTATUS) as statusdesc,") \
		_T("   HFOS_CREATEDBY as createdby ") \
		_T(" FROM HMS_FOODORDERSHEET ") \
		_T(" WHERE trunc_date(HFOS_ORDERDATE) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" %s ") \
		_T(" ORDER BY ORDERID, HFOS_ORDERDATE"), m_szFromDate, m_szToDate,  szWhere);

	
	_fmsg(_T("%s"), szSQL);	

	CString szStatus, tmpStr;
	int nItem = 0;
	int nIndex = 1;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("status"), szStatus);
		tmpStr.Format(_T("%d"), nIndex++);		
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("ORDERID")), 
			rs.GetValue(_T("SHEETNO")),			
			rs.GetValue(_T("orderDate")), 
			rs.GetValue(_T("IssueDate")), 
			rs.GetValue(_T("statusdesc")),
			rs.GetValue(_T("description")), 
			rs.GetValue(_T("createdby")), 
			NULL);

		if(szStatus == _T("A")){
			m_wndList.SetItemBkColor(nItem, COLOR_SEND, FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_BLACK, FALSE);
		}
		else if(szStatus == _T("S")){
			m_wndList.SetItemBkColor(nItem, COLOR_TERMINATE, FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		}

		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSDailyFoodOrderList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodOrderList::OnCancelSelect(){
//	OnCancel();	
} 
int CHMSDailyFoodOrderList::OnAddHMSDailyDrugOrderListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;  
} 
int CHMSDailyFoodOrderList::OnEditHMSDailyDrugOrderListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSDailyFoodOrderList::OnDeleteHMSDailyDrugOrderListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSDailyDrugOrderListDialog(); 
 	}
return 0;
 } 
int CHMSDailyFoodOrderList::OnSaveHMSDailyDrugOrderListDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_dm_purchaseorderlnTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_dm_purchaseorderlnTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSDailyDrugOrderListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDailyFoodOrderList::OnCancelHMSDailyDrugOrderListDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	 
 	return 0;
} 
int CHMSDailyFoodOrderList::OnHMSDailyDrugOrderListDialogListLoadData(){
	return 0;
}

void CHMSDailyFoodOrderList::OnAllStatusCheck(){
	UpdateData(TRUE);
	m_bAllStatus =TRUE;
	m_bOpenStatus = m_bSendStatus = m_bIssueStatus = FALSE;
    OnListLoadData();
	UpdateData(FALSE);
}
void CHMSDailyFoodOrderList::OnOpenStatusCheck(){
	UpdateData(TRUE);
	m_bOpenStatus =TRUE;
	m_bAllStatus = m_bSendStatus = m_bIssueStatus = FALSE;
    OnListLoadData();
	UpdateData(FALSE);
}
void CHMSDailyFoodOrderList::OnSendStatusCheck(){
	UpdateData(TRUE);
	m_bSendStatus =TRUE;
	m_bAllStatus = m_bOpenStatus = m_bIssueStatus = FALSE;
    OnListLoadData();
	UpdateData(FALSE);
}
void CHMSDailyFoodOrderList::OnIssueStatusCheck(){
	UpdateData(TRUE);
	m_bIssueStatus =TRUE;
	m_bAllStatus = m_bSendStatus = m_bOpenStatus = FALSE;
    OnListLoadData();
	UpdateData(FALSE);
}
void CHMSDailyFoodOrderList::OnFindSelect(){
	OnListLoadData();
}