#include "HMSDailyDrugOrderListDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnAllStatusCheckFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderListDialog *)pWnd)->OnAllStatusCheck();
}
static void _OnOpenStatusCheckFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderListDialog *)pWnd)->OnOpenStatusCheck();
}
static void _OnSendStatusCheckFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderListDialog *)pWnd)->OnSendStatusCheck();
}
static void _OnIssueStatusCheckFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderListDialog *)pWnd)->OnIssueStatusCheck();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderListDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderListDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderListDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderListDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderListDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderListDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderListDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderListDialog *)pWnd)->OnToDateCheckValue();
} 



static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderListDialog *)pWnd)->OnOrderNoCheckValue();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyDrugOrderListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListSelectItemFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderListDialog*)pWnd)->OnListSelectItem();
}
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderListDialog *pVw = (CHMSDailyDrugOrderListDialog *)pWnd;
	pVw->OnFindSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderListDialog *pVw = (CHMSDailyDrugOrderListDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderListDialog *pVw = (CHMSDailyDrugOrderListDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDailyDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderListDialog*)pWnd)->OnAddHMSDailyDrugOrderListDialog();
} 
static int _OnEditHMSDailyDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderListDialog*)pWnd)->OnEditHMSDailyDrugOrderListDialog();
} 
static int _OnDeleteHMSDailyDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderListDialog*)pWnd)->OnDeleteHMSDailyDrugOrderListDialog();
} 
static int _OnSaveHMSDailyDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderListDialog*)pWnd)->OnSaveHMSDailyDrugOrderListDialog();
} 
static int _OnCancelHMSDailyDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderListDialog*)pWnd)->OnCancelHMSDailyDrugOrderListDialog();
} 
CHMSDailyDrugOrderListDialog::CHMSDailyDrugOrderListDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 785;
	m_nDlgHeight = 410;
	SetDefaultValues();
	m_bAllStatus = m_bSendStatus = m_bIssueStatus = TRUE;
	m_bOpenStatus = TRUE;

}
CHMSDailyDrugOrderListDialog::~CHMSDailyDrugOrderListDialog(){
}
void CHMSDailyDrugOrderListDialog::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 800, 510);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 85, 55);
	m_wndFromDate.Create(this,90, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 255, 55);
	m_wndToDate.Create(this,260, 30, 345, 55); 
	m_wndOrderNoLabel.Create(this, _T("Sheet No"), 480, 30, 555, 55);
	m_wndOrderNo.Create(this,560, 30, 695, 55);
	m_wndFind.Create(this, _T("&Find"), 700, 30, 790, 55);
	m_wndList.Create(this,10, 60, 795, 505); 
	m_wndAllStatus.Create(this, _T("All"), 10, 515, 75, 540);
	m_wndOpenStatus.Create(this, _T("Open"), 80, 515, 75+75, 540);
	m_wndSendStatus.Create(this, _T("Sending"), 170, 515, 170+90, 540);
	m_wndIssueStatus.Create(this, _T("Issued"), 170+95, 515, 170+95+90, 540);
	m_wndPrint.Create(this, _T("&Print"), 635, 515, 715, 540);
	m_wndCancel.Create(this, _T("&Cancel"), 720, 515, 800, 540);
}
void CHMSDailyDrugOrderListDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);	//batch_id
	m_wndList.InsertColumn(1, _T("ORDERNO"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("ORDERDATE"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(3, _T("Issue Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(4, _T("Status"), CFMT_TEXT|CFMT_CENTER, 100);
	m_wndList.InsertColumn(5, _T("Description"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(6, _T("Created By"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(7, _T("Send By"), CFMT_TEXT, 70);
	m_wndList.GetHeaderControl()->SetItemHeight(2);
	if(pMF->GetModuleID() == _T("PM")){
		m_wndOpenStatus.EnableWindow(false);
		m_bOpenStatus = FALSE;
	}

}
void CHMSDailyDrugOrderListDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);

	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);

	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Select"), _OnListSelectItemFnc, 0, VK_F3, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);

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
void CHMSDailyDrugOrderListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Check(pDX, m_wndAllStatus.GetDlgCtrlID(), m_bAllStatus);
	DDX_Check(pDX, m_wndOpenStatus.GetDlgCtrlID(), m_bOpenStatus);
	DDX_Check(pDX, m_wndSendStatus.GetDlgCtrlID(), m_bSendStatus);
	DDX_Check(pDX, m_wndIssueStatus.GetDlgCtrlID(), m_bIssueStatus);
}
void CHMSDailyDrugOrderListDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyDrugOrderListDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSDailyDrugOrderListDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szFromStockKey.Empty();
	m_szDeptKey.Empty();

}
int CHMSDailyDrugOrderListDialog::SetMode(int nMode){ 
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
/*void CHMSDailyDrugOrderListDialog::OnFromDateChange(){
	
} */
/*void CHMSDailyDrugOrderListDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSDailyDrugOrderListDialog::OnFromDateKillfocus(){
	
} */
int CHMSDailyDrugOrderListDialog::OnFromDateCheckValue(){
	OnListLoadData();
	return 1;
} 
/*void CHMSDailyDrugOrderListDialog::OnToDateChange(){
	
} */
/*void CHMSDailyDrugOrderListDialog::OnToDateSetfocus(){
	
} */
/*void CHMSDailyDrugOrderListDialog::OnToDateKillfocus(){
	
} */
int CHMSDailyDrugOrderListDialog::OnToDateCheckValue(){
	OnListLoadData();
	return 1;
} 


int CHMSDailyDrugOrderListDialog::OnOrderNoCheckValue(){
	OnListLoadData();
	return 1;
}

void CHMSDailyDrugOrderListDialog::OnListDblClick(){
	CGuiDialog::OnOK();	
} 
void CHMSDailyDrugOrderListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	if(nNewItem < 0)
		return;
	m_nOID = str2long(m_wndList.GetItemText(nNewItem, 0));
//	m_szOrderNo = m_wndList.GetItemText(nNewItem, 1);
	
} 
int CHMSDailyDrugOrderListDialog::OnListSelectItem(){
	OnOK();
	return 0;
} 
long CHMSDailyDrugOrderListDialog::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStatusFilter;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;

	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(mtb_orderno) like(chr(37)||lower('%s')||chr(37)) "), m_szOrderNo);
	}
	
	szWhere.AppendFormat(_T(" and mtb_department_to_id='%s' "), pMF->GetDepartmentID());
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
		szWhere.AppendFormat(_T(" and mtb_status in(%s) "), szStatusFilter);
	}


	szSQL.Format(_T(" SELECT mtb_transaction_batch_id as batch_id,") \
		_T(" mtb_orderno as orderno, ") \
_T("   mtb_orderdate                     AS orderdate,") \
_T("   mtb_updateddate                     AS issuedate,") \
_T("   mtb_description as description,") \
_T("   mtb_status as status,") \
_T("   m_transaction_getstatusdesc(mtb_status) as statusdesc,") \
_T("   mtb_createdby as createdby, mtb_postedby as postedby ") \
_T(" FROM m_transaction_batch ") \
_T(" WHERE mtb_ordertype in('T','C') AND trunc_date(mtb_orderdate) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
_T(" %s ") \
_T(" ORDER BY mtb_transaction_batch_id"), m_szFromDate, m_szToDate,  szWhere);

	
//	_fmsg(_T("%s"), szSQL);	

	CString szStatus, tmpStr;
	int nItem = 0;
	int nIndex = 1;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("status"), szStatus);
		tmpStr.Format(_T("%d"), nIndex++);		
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("batch_id")), 
			rs.GetValue(_T("orderno")), 
			rs.GetValue(_T("orderDate")), 
			rs.GetValue(_T("IssueDate")), 
			rs.GetValue(_T("statusdesc")),
			rs.GetValue(_T("description")), 
			rs.GetValue(_T("createdby")), 
			rs.GetValue(_T("postedby")), 
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
void CHMSDailyDrugOrderListDialog::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyDrugOrderListDialog::OnFindSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 

void CHMSDailyDrugOrderListDialog::OnCancelSelect(){
	OnCancel();	
} 
int CHMSDailyDrugOrderListDialog::OnAddHMSDailyDrugOrderListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;  
} 
int CHMSDailyDrugOrderListDialog::OnEditHMSDailyDrugOrderListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSDailyDrugOrderListDialog::OnDeleteHMSDailyDrugOrderListDialog(){
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
int CHMSDailyDrugOrderListDialog::OnSaveHMSDailyDrugOrderListDialog(){
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
int CHMSDailyDrugOrderListDialog::OnCancelHMSDailyDrugOrderListDialog(){
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
int CHMSDailyDrugOrderListDialog::OnHMSDailyDrugOrderListDialogListLoadData(){
	return 0;
}

void CHMSDailyDrugOrderListDialog::OnAllStatusCheck(){
	UpdateData(TRUE);
	m_bAllStatus =TRUE;
	m_bOpenStatus = m_bSendStatus = m_bIssueStatus = FALSE;
    OnListLoadData();
	UpdateData(FALSE);
}
void CHMSDailyDrugOrderListDialog::OnOpenStatusCheck(){
	UpdateData(TRUE);
	m_bOpenStatus =TRUE;
	m_bAllStatus = m_bSendStatus = m_bIssueStatus = FALSE;
    OnListLoadData();
	UpdateData(FALSE);
}
void CHMSDailyDrugOrderListDialog::OnSendStatusCheck(){
	UpdateData(TRUE);
	m_bSendStatus =TRUE;
	m_bAllStatus = m_bOpenStatus = m_bIssueStatus = FALSE;
    OnListLoadData();
	UpdateData(FALSE);
}
void CHMSDailyDrugOrderListDialog::OnIssueStatusCheck(){
	UpdateData(TRUE);
	m_bIssueStatus =TRUE;
	m_bAllStatus = m_bSendStatus = m_bOpenStatus = FALSE;
    OnListLoadData();
	UpdateData(FALSE);
}