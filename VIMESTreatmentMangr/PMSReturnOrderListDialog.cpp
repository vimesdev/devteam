#include "PMSReturnOrderListDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSReturnOrderListDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSReturnOrderListDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnFromStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSReturnOrderListDialog* )pWnd)->OnFromStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStockSelendokFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnFromStockSelendok();
}
/*static void _OnFromStockSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnFromStockKillfocus();
}*/
/*static void _OnFromStockKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnFromStockKillfocus();
}*/
static long _OnFromStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnOrderListDialog *)pWnd)->OnFromStockLoadData();
}
/*static void _OnFromStockAddNewFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnFromStockAddNew();
}*/
static void _OnToStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSReturnOrderListDialog* )pWnd)->OnToStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStockSelendokFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnToStockSelendok();
}
/*static void _OnToStockSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnToStockKillfocus();
}*/
/*static void _OnToStockKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnToStockKillfocus();
}*/
static long _OnToStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnOrderListDialog *)pWnd)->OnToStockLoadData();
}
/*static void _OnToStockAddNewFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog *)pWnd)->OnToStockAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnOrderListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMSReturnOrderListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSReturnOrderListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListSelectItemFnc(CWnd *pWnd){
	 return ((CPMSReturnOrderListDialog*)pWnd)->OnListSelectItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSReturnOrderListDialog *pVw = (CPMSReturnOrderListDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPMSReturnOrderListDialog *pVw = (CPMSReturnOrderListDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddPMSReturnOrderListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnOrderListDialog*)pWnd)->OnAddPMSReturnOrderListDialog();
} 
static int _OnEditPMSReturnOrderListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnOrderListDialog*)pWnd)->OnEditPMSReturnOrderListDialog();
} 
static int _OnDeletePMSReturnOrderListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnOrderListDialog*)pWnd)->OnDeletePMSReturnOrderListDialog();
} 
static int _OnSavePMSReturnOrderListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnOrderListDialog*)pWnd)->OnSavePMSReturnOrderListDialog();
} 
static int _OnCancelPMSReturnOrderListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnOrderListDialog*)pWnd)->OnCancelPMSReturnOrderListDialog();
} 
CPMSReturnOrderListDialog::CPMSReturnOrderListDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 785;
	m_nDlgHeight = 410;
	SetDefaultValues();
}
CPMSReturnOrderListDialog::~CPMSReturnOrderListDialog(){
}
void CPMSReturnOrderListDialog::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 779, 376);
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 28, 81, 50);
	m_wndFromDate.Create(this,86, 28, 166, 50); 
	m_wndToDateLabel.Create(this, _T("To Date"), 171, 28, 241, 50);
	m_wndToDate.Create(this,246, 28, 326, 50); 
	m_wndFromStockLabel.Create(this, _T("From Stock"), 331, 28, 401, 50);
	m_wndFromStock.Create(this,406, 28, 556, 50); 
	m_wndToStockLabel.Create(this, _T("Type"), 561, 28, 621, 50);
	
	m_wndToStock.Create(this,626, 28, 776, 50); 
	m_wndList.Create(this,9, 55, 776, 371); 
	m_wndPrint.Create(this, _T("&Print"), 634, 381, 704, 403);
	m_wndCancel.Create(this, _T("&Cancel"), 709, 381, 779, 403);

}
void CPMSReturnOrderListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndList.InsertColumn(4, _T("Type"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Status"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndList.InsertColumn(6, _T("Description"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(7, _T("Created By"), CFMT_TEXT, 90);
	if(m_szFromDate.IsEmpty())
	{
		m_szFromDate = pMF->GetSysDate();
		m_szToDate = m_szFromDate;
	}
	UpdateData(false);
	OnListLoadData();
}
void CPMSReturnOrderListDialog::OnSetWindowEvents(){
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
void CPMSReturnOrderListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndFromStock.GetDlgCtrlID(), m_szFromStockKey);
	DDX_TextEx(pDX, m_wndToStock.GetDlgCtrlID(), m_szToStockKey);

}
void CPMSReturnOrderListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSReturnOrderListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPMSReturnOrderListDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szFromStockKey.Empty();
	m_szToStockKey.Empty();

}
int CPMSReturnOrderListDialog::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
/*void CPMSReturnOrderListDialog::OnFromDateChange(){
	
} */
/*void CPMSReturnOrderListDialog::OnFromDateSetfocus(){
	
} */
/*void CPMSReturnOrderListDialog::OnFromDateKillfocus(){
	
} */
int CPMSReturnOrderListDialog::OnFromDateCheckValue(){
	OnListLoadData();
	return 1;
} 
/*void CPMSReturnOrderListDialog::OnToDateChange(){
	
} */
/*void CPMSReturnOrderListDialog::OnToDateSetfocus(){
	
} */
/*void CPMSReturnOrderListDialog::OnToDateKillfocus(){
	
} */
int CPMSReturnOrderListDialog::OnToDateCheckValue(){
	OnListLoadData();
	return 1;
} 
void CPMSReturnOrderListDialog::OnFromStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSReturnOrderListDialog::OnFromStockSelendok(){
	 OnListLoadData();
}
/*void CPMSReturnOrderListDialog::OnFromStockSetfocus(){
	
}*/
/*void CPMSReturnOrderListDialog::OnFromStockKillfocus(){
	
}*/
long CPMSReturnOrderListDialog::OnFromStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nfStockID = ToInt(m_szFromStockKey);
	if(m_wndFromStock.IsSearchKey() && nfStockID > 0){
		szWhere.Format(_T(" AND pmsl_stockid=%d "), nfStockID);
	};
	
	szWhere.AppendFormat(_T(" AND pmsl_type<>'C' "));

	m_wndFromStock.DeleteAllItems(); 
	int nCount = 0;
	
	if(!pMF->m_szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" and pmsl_stockid in(%s) "), pMF->m_szStorages);

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
/*void CPMSReturnOrderListDialog::OnFromStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSReturnOrderListDialog::OnToStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSReturnOrderListDialog::OnToStockSelendok(){
	 OnListLoadData();
}
/*void CPMSReturnOrderListDialog::OnToStockSetfocus(){
	
}*/
/*void CPMSReturnOrderListDialog::OnToStockKillfocus(){
	
}*/
long CPMSReturnOrderListDialog::OnToStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nCount = 0;
//Neu la nhap xuat khac
	if(m_wndFromStock.IsSearchKey() && !m_szToStockKey.IsEmpty()){
			szWhere.Format(_T(" AND sd_code='%s' "), m_szToStockKey);
	};


	m_wndToStock.DeleteAllItems(); 
	szSQL.Format(_T("SELECT * FROM sys_sel WHERE ss_id='pms_import_type'  %s ORDER BY ss_code "), szWhere);
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){ 
			m_wndToStock.AddItems(
				rs.GetValue(_T("ss_code")), 
				rs.GetValue(_T("ss_desc")), NULL);
			rs.MoveNext();
		}

	return nCount;
}
/*void CPMSReturnOrderListDialog::OnToStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSReturnOrderListDialog::OnListDblClick(){
	OnOK();	
} 
void CPMSReturnOrderListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	
} 
int CPMSReturnOrderListDialog::OnListSelectItem(){
	OnOK();
	return 0;
} 
long CPMSReturnOrderListDialog::OnListLoadData(){	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(ToInt(m_szFromStockKey) > 0){
		szWhere.Format(_T(" AND pmro_retstockid=%d "), ToInt(m_szFromStockKey));
	}

	szSQL.Format(_T(" SELECT pmro_id, ") \
				_T(" 	(SELECT pmsl_name FROM pms_stocklist WHERE pmsl_stockid=pmro_impstockid) as pmro_impstock, ") \
				_T(" 	 trunc_date(pmro_orderdate) as pmro_orderdate,") \
				_T(" 	(SELECT ss_desc FROM sys_sel WHERE ss_id='pms_import_type' AND ss_code=pmro_type) as pmro_imptype,") \
				_T(" 	 trunc_date(pmro_issuedate) as pmro_issuedate,") \
				_T(" 	pmro_desc, ") \
				_T(" 	pmro_status") \
				_T("   FROM pms_return_order") \
				_T(" WHERE pmro_type in('Y') AND pmro_retdeptid='%s' AND trunc_date(pmro_orderdate) BETWEEN trunc_date('%s') AND trunc_date('%s')  %s "), pMF->m_szDept, m_szFromDate, m_szToDate,  szWhere);
//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("pmro_id")), 
			rs.GetValue(_T("pmro_orderDate")), 
			rs.GetValue(_T("pmro_issuedate")), 
			rs.GetValue(_T("pmro_impstock")), 
			rs.GetValue(_T("pmro_imptype")), 
			rs.GetValue(_T("pmro_status")), 
			rs.GetValue(_T("pmro_desc")), 
			rs.GetValue(_T("pmro_createdby")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CPMSReturnOrderListDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSReturnOrderListDialog::OnCancelSelect(){
	OnCancel();	
} 
int CPMSReturnOrderListDialog::OnAddPMSReturnOrderListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CPMSReturnOrderListDialog::OnEditPMSReturnOrderListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CPMSReturnOrderListDialog::OnDeletePMSReturnOrderListDialog(){
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
 		OnCancelPMSReturnOrderListDialog(); 
 	}
return 0;
 } 
int CPMSReturnOrderListDialog::OnSavePMSReturnOrderListDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
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
 		//OnPMSReturnOrderListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMSReturnOrderListDialog::OnCancelPMSReturnOrderListDialog(){
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
int CPMSReturnOrderListDialog::OnPMSReturnOrderListDialogListLoadData(){
	return 0;
}
