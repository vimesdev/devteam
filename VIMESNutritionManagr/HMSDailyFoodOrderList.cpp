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
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyFoodOrderList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderList *)pWnd)->OnDepartmentAddNew();
}*/

static long _OnPhanloaiLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderList *)pWnd)->OnPhanloaiLoadData();
}


CHMSDailyFoodOrderList::CHMSDailyFoodOrderList()	
{
	m_nDlgWidth = 1024;
	m_nDlgHeight = 620;
	SetDefaultValues();
	m_bAllStatus = m_bSendStatus = m_bIssueStatus = TRUE;
	m_bOpenStatus = TRUE;

}
CHMSDailyFoodOrderList::~CHMSDailyFoodOrderList(){
}
void CHMSDailyFoodOrderList::OnCreateComponents()
{
	/*m_wndAllStatus.Create(this, _T("All"), 10, 590, 110, 615);	
	m_wndSendStatus.Create(this, _T("Sending"), 115, 590, 215, 615);
	m_wndIssueStatus.Create(this, _T("Issued"), 220, 590, 320, 615);
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 1015, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 85, 55);
	m_wndFromDate.Create(this,90, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 255, 55);
	m_wndToDate.Create(this,260, 30, 345, 55);
	m_wndDepartmentLabel.Create(this, _T("Department"), 350, 30, 415, 55);
	m_wndDepartment.Create(this,420, 30, 675, 55); 
	m_wndOrderNoLabel.Create(this, _T("Sheet No"), 680, 30, 755, 55);
	m_wndOrderNo.Create(this,760, 30, 895, 55); 
	
	m_wndFind.Create(this, _T("&Find"), 900, 30, 1000, 55);
	m_wndPrint.Create(this, _T("&Print"), 795, 590, 895, 615);
	m_wndCancel.Create(this, _T("&Cancel"), 900, 590, 1000, 615);

	m_wndList.Create(this, 5, 65, 1015, 585);*/
	
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 1015, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 85, 55);
	m_wndFromDate.Create(this,90, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 255, 55);
	m_wndToDate.Create(this,260, 30, 345, 55); 
	m_wndOrderNoLabel.Create(this, _T("Sheet No"), 680, 30, 755, 55);
	m_wndOrderNo.Create(this,760, 30, 895, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 350, 30, 415, 55);
	m_wndDepartment.Create(this,420, 30, 675, 55); 
	m_wndList.Create(this,5, 91, 1015, 584); 
	m_wndPrint.Create(this, _T("&Print"), 795, 590, 895, 615);
	m_wndCancel.Create(this, _T("&Cancel"), 900, 590, 1000, 615);
	m_wndAllStatus.Create(this, _T("All"), 10, 590, 110, 615);
	m_wndSendStatus.Create(this, _T("Sending"), 115, 590, 215, 615);
	m_wndIssueStatus.Create(this, _T("Issued"), 220, 590, 320, 615);
	m_wndFind.Create(this, _T("&Find"), 900, 30, 1000, 55);
	m_wndPhanloailabel.Create(this, _T("Phân loại"), 10, 62, 90, 87);
	m_wndPhanloai.Create(this,95, 62, 675, 87); 

}
void CHMSDailyFoodOrderList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);	//batch_id
	m_wndList.InsertColumn(1, _T("Order No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(2, _T("Created Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(3, _T("Order Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(4, _T("Approval Date"), CFMT_DATETIME, 100);
	m_wndList.InsertColumn(5, _T("Status"), CFMT_TEXT|CFMT_CENTER, 90);
	m_wndList.InsertColumn(6, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(7, _T("Department"), CFMT_TEXT, 90);	
	m_wndList.InsertColumn(8, _T("Primary"), CFMT_TEXT, 100);	
	m_wndList.InsertColumn(9, _T("Order Type"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(10, _T("Created By"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(11, _T("Send Date"), CFMT_TEXT, 120);
	m_wndList.GetHeaderControl()->SetItemHeight(2);	

	m_wndPhanloai.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndPhanloai.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

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
	
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);

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
	m_wndPhanloai.SetEvent(WE_LOADDATA, _OnPhanloaiLoadDataFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(m_szFromDate.IsEmpty())
	{
		m_szFromDate = pMF->GetSysDate();
		m_szToDate = m_szFromDate;
	}
	m_szFromTime = _T("00:00:00");
	m_szToTime = _T("23:59:00");

	if(pMF->m_UserInfo.su_deptid == _T("PTTYC"))
		OnDepartmentLoadData();
	SetMode(VM_VIEW);

	OnListLoadData();
	

}
void CHMSDailyFoodOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Check(pDX, m_wndAllStatus.GetDlgCtrlID(), m_bAllStatus);
	//DDX_Check(pDX, m_wndOpenStatus.GetDlgCtrlID(), m_bOpenStatus);
	DDX_Check(pDX, m_wndSendStatus.GetDlgCtrlID(), m_bSendStatus);
	DDX_Check(pDX, m_wndIssueStatus.GetDlgCtrlID(), m_bIssueStatus);
	DDX_TextEx(pDX, m_wndPhanloai.GetDlgCtrlID(), m_szPhanloaiKey);

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
	m_szPhanloaiKey.Empty();

}
int CHMSDailyFoodOrderList::SetMode(int nMode){ 
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
 			EnableButtons(TRUE, 3, 4, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		if(pMF->m_UserInfo.su_deptid == _T("PTTYC"))
		{
			m_wndDepartment.EnableWindow(FALSE);
			m_szDepartmentKey == _T("PTTYC");
		}
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
	long m_nID = ToLong(m_wndList.GetItemText(nSel, 0));	
	((CHMSDailyFoodOrder*)m_wndOrder)->m_nOID = m_nOID;
	((CHMSDailyFoodOrder*)m_wndOrder)->m_szOrderType = m_szOrderType;
	((CHMSDailyFoodOrder*)m_wndOrder)->GetDataToScreen();
	((CGuiTabCtrl*)GetParent())->SetCurSel(1);
} 
void CHMSDailyFoodOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	if(nNewItem < 0)
		return;
	m_nOID = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_szOrderType = m_wndList.GetItemText(nNewItem, 8);
	
} 
int CHMSDailyFoodOrderList::OnListSelectItem(){
	//OnOK();
	return 0;
} 

long CHMSDailyFoodOrderList::OnPhanloaiLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPhanloai.IsSearchKey() && !m_szPhanloaiKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szPhanloaiKey);
	};

	m_wndPhanloai.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select ss_code as ma, ss_desc as ten from sys_sel where ss_id='hms_phanloai_baoan' %s "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPhanloai.AddItems(
			rs.GetValue(_T("ma")), 
			rs.GetValue(_T("ten")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
long CHMSDailyFoodOrderList::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStatusFilter;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;

			
	if(m_bAllStatus){
		m_bOpenStatus = m_bSendStatus = m_bIssueStatus = TRUE;
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

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfos_deptid ='%s' "), m_szDepartmentKey);
	}

	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfos_sheetno='%s' "), m_szOrderNo);
	}

	if(pMF->m_UserInfo.su_deptid == _T("PTTYC"))
	{
		szWhere.AppendFormat(_T(" AND hfos_deptid ='PTTYC' "));
	}
	else
	{
		//szWhere.AppendFormat(_T(" AND hfos_deptid <>'PTTYC' "));
	}	

	if(pMF->m_UserInfo.su_deptid == _T("HCKT"))
	{
		szWhere.AppendFormat(_T(" AND (hfos_depttype='HC' OR HFOS_DEPTTYPE_NN = 'HCNN' OR (hfos_deptid = 'PTTYC' and hfos_ordertype = 'F')) "));
	}

	else
	{
		szWhere.AppendFormat(_T(" AND nvl(hfos_depttype,'XX') <> 'HC' and NVL(HFOS_DEPTTYPE_NN, 'N') <> 'HCNN' "));
	}

	if (m_szPhanloaiKey == _T("D"))
	{
		szWhere.AppendFormat(_T(" and nvl(hfos_depttype, 'DD')= 'HC' "));
	}
	else if (m_szPhanloaiKey == _T("NN"))
	{
		szWhere.AppendFormat(_T(" and nvl(hfos_depttype_nn, 'DD')= 'HCNN' "));
	}
	else if (m_szPhanloaiKey == _T("F"))
	{
		szWhere.AppendFormat(_T(" and nvl(hfos_depttype, 'DD')= 'DD' and nvl(hfos_depttype_nn, 'DD') <> 'HCNN'"));
	}
	else
	{
		szWhere.AppendFormat(_T(" and 1=1 "));
	}

	szSQL.Format(_T(" SELECT HFOS_ORDERID as ORDERID,") \
		_T(" HFOS_SHEETNO as SHEETNO, ") \
		_T("   HFOS_ORDERDATE                     AS orderdate,hfos_senddate as senddate,") \
		_T("  hfos_createddate as createDate, ") \
		_T("   hfos_approvedate                     AS issuedate,") \
		_T("   HFOS_DESCRIPTION as description,") \
		_T("   HFOS_ORDERSTATUS as status,") \
		_T("   HFOS_ORDERTYPE as ORDERTYPE,") \
		_T("   HFOS_DEPTID AS DEPTID, ") \
		_T("   hfos_isprimary as isprimary, ") \
		_T("   m_transaction_getstatusdesc(HFOS_ORDERSTATUS) as statusdesc,") \
		_T("   GET_USERNAME(HFOS_CREATEDBY) as createdby ") \
		_T(" FROM HMS_FOODORDERSHEET ") \
		_T(" WHERE HFOS_ORDERDATE BETWEEN TO_TIMESTAMP('%s %s', 'yyyy/mm/dd HH24:MI:SS') AND TO_TIMESTAMP('%s %s', 'yyyy/mm/dd HH24:MI:SS') AND HFOS_ORDERSTATUS IN('S','A')") \
		_T(" %s ") \
		_T(" ORDER BY HFOS_DEPTID,ORDERID, HFOS_ORDERDATE"), m_szFromDate, m_szFromTime, m_szToDate, m_szToTime,  szWhere);
	
	//_msg(_T("%s"), szSQL);

	CString szStatus, tmpStr;
	int nItem = 0;
	int nIndex = 1;
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("status"), szStatus);
		
		tmpStr.Empty();
		if(rs.GetValue(_T("ORDERTYPE")) == _T("F"))
		{
			if(rs.GetValue(_T("isprimary")) == _T("Y"))
				tmpStr.Format(_T("Báo chính"));
			else
				tmpStr.Format(_T("Báo phụ"));
		}

		nItem = m_wndList.AddItems(
			rs.GetValue(_T("ORDERID")), 
			rs.GetValue(_T("SHEETNO")),
			rs.GetValue(_T("createDate")),
			rs.GetValue(_T("orderDate")), 
			rs.GetValue(_T("IssueDate")), 
			rs.GetValue(_T("statusdesc")),
			rs.GetValue(_T("description")),
			rs.GetValue(_T("deptid")),
			tmpStr, 
			rs.GetValue(_T("ORDERTYPE")), 
			rs.GetValue(_T("createdby")),			
			rs.GetValue(_T("senddate")),
			NULL);

		if(szStatus == _T("A"))
		{
			m_wndList.SetItemBkColor(nItem, COLOR_SEND, FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_BLACK, FALSE);
		}
		/*else if(szStatus == _T("S")){
			m_wndList.SetItemBkColor(nItem, COLOR_TERMINATE, FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		}*/

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
void CHMSDailyFoodOrderList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodOrderList::OnDepartmentSelendok(){
	 
}
/*void CHMSDailyFoodOrderList::OnDepartmentSetfocus(){
	
}*/
/*void CHMSDailyFoodOrderList::OnDepartmentKillfocus(){
	
}*/
long CHMSDailyFoodOrderList::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty() || pMF->m_UserInfo.su_deptid == _T("PTTYC")){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	};

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_dept WHERE sd_type in('DT','KB') and sd_isactive='Y' %s ORDER BY sd_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDailyFoodOrderList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSDailyFoodOrderList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);

	AddBottom(&m_wndAllStatus, 0, true);
	AddBottom(&m_wndSendStatus, 0, true);
	AddBottom(&m_wndIssueStatus, 0, true);
	AddBottom(&m_wndPrint);
	AddBottom(&m_wndCancel);

}
