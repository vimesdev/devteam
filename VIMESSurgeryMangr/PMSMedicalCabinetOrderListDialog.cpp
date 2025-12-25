#include "PMSMedicalCabinetOrderListDialog.h"
//#include "stdafx.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnFromStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSMedicalCabinetOrderListDialog* )pWnd)->OnFromStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStockSelendokFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnFromStockSelendok();
}
/*static void _OnFromStockSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnFromStockKillfocus();
}*/
/*static void _OnFromStockKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnFromStockKillfocus();
}*/
static long _OnFromStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnFromStockLoadData();
}
/*static void _OnFromStockAddNewFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnFromStockAddNew();
}*/
static void _OnToStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSMedicalCabinetOrderListDialog* )pWnd)->OnToStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStockSelendokFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnToStockSelendok();
}
/*static void _OnToStockSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnToStockKillfocus();
}*/
/*static void _OnToStockKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnToStockKillfocus();
}*/
static long _OnToStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnToStockLoadData();
}
/*static void _OnToStockAddNewFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog *)pWnd)->OnToStockAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrderListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSMedicalCabinetOrderListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListSelectItemFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrderListDialog*)pWnd)->OnListSelectItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrderListDialog *pVw = (CPMSMedicalCabinetOrderListDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrderListDialog *pVw = (CPMSMedicalCabinetOrderListDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddPMSCabinetDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrderListDialog*)pWnd)->OnAddPMSCabinetDrugOrderListDialog();
} 
static int _OnEditPMSCabinetDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrderListDialog*)pWnd)->OnEditPMSCabinetDrugOrderListDialog();
} 
static int _OnDeletePMSCabinetDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrderListDialog*)pWnd)->OnDeletePMSCabinetDrugOrderListDialog();
} 
static int _OnSavePMSCabinetDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrderListDialog*)pWnd)->OnSavePMSCabinetDrugOrderListDialog();
} 
static int _OnCancelPMSCabinetDrugOrderListDialogFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrderListDialog*)pWnd)->OnCancelPMSCabinetDrugOrderListDialog();
} 
CPMSMedicalCabinetOrderListDialog::CPMSMedicalCabinetOrderListDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 785;
	m_nDlgHeight = 410;
	SetDefaultValues();
}
CPMSMedicalCabinetOrderListDialog::~CPMSMedicalCabinetOrderListDialog(){
}
void CPMSMedicalCabinetOrderListDialog::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 779, 376);
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 28, 81, 50);
	m_wndFromDate.Create(this,86, 28, 166, 50); 
	m_wndToDateLabel.Create(this, _T("To Date"), 171, 28, 241, 50);
	m_wndToDate.Create(this,246, 28, 326, 50); 
	m_wndFromStockLabel.Create(this, _T("From Stock"), 331, 28, 401, 50);
	m_wndFromStock.Create(this,406, 28, 556, 50); 
	m_wndToStockLabel.Create(this, _T("To Stock"), 561, 28, 621, 50);
	
	m_wndToStock.Create(this,626, 28, 776, 50); 
	m_wndList.Create(this,9, 55, 776, 371); 
	m_wndPrint.Create(this, _T("&Print"), 634, 381, 704, 403);
	m_wndCancel.Create(this, _T("&Cancel"), 709, 381, 779, 403);

}
void CPMSMedicalCabinetOrderListDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndFromStock.SetCheckValue(true);
	m_wndFromStock.LimitText(35);
	m_wndToStock.SetCheckValue(true);
	m_wndToStock.LimitText(16);


	m_wndFromStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFromStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndToStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndToStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndList.InsertColumn(0, _T("Invoice No"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Order Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(2, _T("Issue Date"), CFMT_DATETIME, 110);
	m_wndList.InsertColumn(3, _T("From Stock"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("To Stock"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Status"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndList.InsertColumn(6, _T("Description"), CFMT_TEXT, 150);
	m_szFromDate = pMF->GetSysDate();
	m_szToDate = m_szFromDate;
	UpdateData(false);
	OnListLoadData();
}
void CPMSMedicalCabinetOrderListDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndFromStock.SetEvent(WE_SELENDOK, _OnFromStockSelendokFnc);
	//m_wndFromStock.SetEvent(WE_SETFOCUS, _OnFromStockSetfocusFnc);
	//m_wndFromStock.SetEvent(WE_KILLFOCUS, _OnFromStockKillfocusFnc);
	m_wndFromStock.SetEvent(WE_SELCHANGE, _OnFromStockSelectChangeFnc);
	m_wndFromStock.SetEvent(WE_LOADDATA, _OnFromStockLoadDataFnc);
	//m_wndFromStock.SetEvent(WE_ADDNEW, _OnFromStockAddNewFnc);
	m_wndToStock.SetEvent(WE_SELENDOK, _OnToStockSelendokFnc);
	//m_wndToStock.SetEvent(WE_SETFOCUS, _OnToStockSetfocusFnc);
	//m_wndToStock.SetEvent(WE_KILLFOCUS, _OnToStockKillfocusFnc);
	m_wndToStock.SetEvent(WE_SELCHANGE, _OnToStockSelectChangeFnc);
	m_wndToStock.SetEvent(WE_LOADDATA, _OnToStockLoadDataFnc);
	//m_wndToStock.SetEvent(WE_ADDNEW, _OnToStockAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Select"), _OnListSelectItemFnc, 0, VK_F3, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CPMSMedicalCabinetOrderListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndFromStock.GetDlgCtrlID(), m_szFromStockKey);
	DDX_TextEx(pDX, m_wndToStock.GetDlgCtrlID(), m_szToStockKey);

}
void CPMSMedicalCabinetOrderListDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSMedicalCabinetOrderListDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPMSMedicalCabinetOrderListDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szFromStockKey.Empty();
	m_szToStockKey.Empty();

}
int CPMSMedicalCabinetOrderListDialog::SetMode(int nMode){ 
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
/*void CPMSMedicalCabinetOrderListDialog::OnFromDateChange(){
	
} */
/*void CPMSMedicalCabinetOrderListDialog::OnFromDateSetfocus(){
	
} */
/*void CPMSMedicalCabinetOrderListDialog::OnFromDateKillfocus(){
	
} */
int CPMSMedicalCabinetOrderListDialog::OnFromDateCheckValue(){
	OnListLoadData();
	return 1;
} 
/*void CPMSMedicalCabinetOrderListDialog::OnToDateChange(){
	
} */
/*void CPMSMedicalCabinetOrderListDialog::OnToDateSetfocus(){
	
} */
/*void CPMSMedicalCabinetOrderListDialog::OnToDateKillfocus(){
	
} */
int CPMSMedicalCabinetOrderListDialog::OnToDateCheckValue(){
	OnListLoadData();
	return 1;
} 
void CPMSMedicalCabinetOrderListDialog::OnFromStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMSMedicalCabinetOrderListDialog::OnFromStockSelendok(){
	 OnListLoadData();
}
/*void CPMSMedicalCabinetOrderListDialog::OnFromStockSetfocus(){
	
}*/
/*void CPMSMedicalCabinetOrderListDialog::OnFromStockKillfocus(){
	
}*/
long CPMSMedicalCabinetOrderListDialog::OnFromStockLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nfStockID = ToInt(m_szFromStockKey);
	if(m_wndFromStock.IsSearchKey() && nfStockID > 0){
		szWhere.Format(_T(" AND pmsl_stockid=%d "), nfStockID);
	};
	
	szWhere.AppendFormat(_T(" AND pmsl_type<>'C' "));

	if(pMF->GetModuleID() == _T("PM") && !m_szStockList.IsEmpty()){
		szWhere.AppendFormat(_T(" and pmsl_stockid in(%s) "), m_szStockList);
	}

	m_wndFromStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM pms_stocklist WHERE 0=0 %s ORDER BY pmsl_stockid "),  szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromStock.AddItems(
			rs.GetValue(_T("pmsl_stockid")), 
			rs.GetValue(_T("pmsl_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMSMedicalCabinetOrderListDialog::OnFromStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMSMedicalCabinetOrderListDialog::OnToStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMSMedicalCabinetOrderListDialog::OnToStockSelendok(){
	 OnListLoadData();
}
/*void CPMSMedicalCabinetOrderListDialog::OnToStockSetfocus(){
	
}*/
/*void CPMSMedicalCabinetOrderListDialog::OnToStockKillfocus(){
	
}*/
long CPMSMedicalCabinetOrderListDialog::OnToStockLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nCount = 0;
		int ntStockID = ToInt(m_szToStockKey);
		if(m_wndFromStock.IsSearchKey() && ntStockID > 0){
			szWhere.Format(_T(" AND pmsl_stockid=%d "), ntStockID);
		};

		if(pMF->GetModuleID() != _T("PM") && !m_szDeptID.IsEmpty())
			szWhere.AppendFormat(_T(" AND pmsl_deptid ='%s' "), m_szDeptID);

	if(pMF->GetModuleID() == _T("PM") && !m_szStockList.IsEmpty()){
		szWhere.AppendFormat(_T(" and pmsl_stockid in(%s) "), m_szStockList);
	}
		m_wndToStock.DeleteAllItems(); 
		
		szSQL.Format(_T("SELECT * FROM pms_stocklist WHERE pmsl_stockid <> %d AND pmsl_type='C' %s ORDER BY pmsl_stockid "), ToInt(m_szFromStockKey), szWhere);
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){ 
			m_wndToStock.AddItems(
				rs.GetValue(_T("pmsl_stockid")), 
				rs.GetValue(_T("pmsl_name")), NULL);
			rs.MoveNext();
		}
	return nCount;
}
/*void CPMSMedicalCabinetOrderListDialog::OnToStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMSMedicalCabinetOrderListDialog::OnListDblClick(){
	OnOK();	
} 
void CPMSMedicalCabinetOrderListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	
} 
int CPMSMedicalCabinetOrderListDialog::OnListSelectItem(){
	OnOK();
	return 0;
} 
long CPMSMedicalCabinetOrderListDialog::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStatus;
	int nItem;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(ToInt(m_szFromStockKey) > 0){
		szWhere.Format(_T(" AND pmst_expstockid=%d "), ToInt(m_szFromStockKey));
	}

	if(ToInt(m_szToStockKey) > 0){
			szWhere.AppendFormat(_T(" AND pmst_impstockid=%d "), ToInt(m_szToStockKey));
	}
	if(pMF->GetModuleID() != _T("PM") && !m_szDeptID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND pmst_deptid ='%s' "), m_szDeptID);
	}
	else
	{
	//	szWhere.AppendFormat(_T(" AND (pmst_ordertype='P' or (pmst_ordertype in('T','M') and pmst_status <>'O') )   "));
	}

	szWhere.AppendFormat(_T(" and pmst_type='%s' "), m_szType);

	if(pMF->GetModuleID() == _T("PM") && !m_szStockList.IsEmpty()){
		szWhere.AppendFormat(_T(" and pmst_expstockid in(%s) "), m_szStockList);
	}

		szSQL.Format(_T(" SELECT pmst_id, ") \
				_T(" 	(SELECT pmsl_name FROM pms_stocklist WHERE pmsl_stockid=pmst_expstockid) as pmst_fromstock, ") \
				_T(" 	date(pmst_orderdate) as pmst_orderdate,") \
				_T(" 	(SELECT pmsl_name FROM pms_stocklist WHERE pmsl_stockid=pmst_impstockid) as pmst_tostock,") \
				_T(" 	pmst_issuedate as pmst_issuedate,") \
				_T(" 	pmst_desc, ") \
				_T(" 	pmst_status") \
				_T("   FROM pms_stocktransfer") \
				_T(" WHERE 1=1 AND date(pmst_orderdate) BETWEEN date('%s') AND date('%s')  %s ORDER BY pmst_orderdate,pmst_id "), m_szFromDate, m_szToDate,  szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("pmst_status"), szStatus);
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("pmst_id")), 
			rs.GetValue(_T("pmst_orderDate")), 
			rs.GetValue(_T("pmst_issuedate")), 
			rs.GetValue(_T("pmst_fromstock")), 
			rs.GetValue(_T("pmst_tostock")), 
			pMF->GetStatusString(szStatus), 
			rs.GetValue(_T("pmst_desc")), NULL);

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
void CPMSMedicalCabinetOrderListDialog::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMSMedicalCabinetOrderListDialog::OnCancelSelect(){
	OnCancel();	
} 
int CPMSMedicalCabinetOrderListDialog::OnAddPMSCabinetDrugOrderListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CPMSMedicalCabinetOrderListDialog::OnEditPMSCabinetDrugOrderListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CPMSMedicalCabinetOrderListDialog::OnDeletePMSCabinetDrugOrderListDialog(){
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
 		OnCancelPMSCabinetDrugOrderListDialog(); 
 	}
return 0;
 } 
int CPMSMedicalCabinetOrderListDialog::OnSavePMSCabinetDrugOrderListDialog(){
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
 		//OnPMSCabinetDrugOrderListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMSMedicalCabinetOrderListDialog::OnCancelPMSCabinetDrugOrderListDialog(){
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
int CPMSMedicalCabinetOrderListDialog::OnPMSCabinetDrugOrderListDialogListLoadData(){
	return 0;
}
