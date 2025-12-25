#include "FAMAllocateToDeptDialog.h"
#include "ReportDocument.h"
#include "MainFrm.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAllocateToDeptDialog* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptDialog *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnWarehouseAddNew();
}*/
static void _OnToDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAllocateToDeptDialog* )pWnd)->OnToDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDeptSelendokFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnToDeptSelendok();
}
/*static void _OnToDeptSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnToDeptKillfocus();
}*/
/*static void _OnToDeptKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnToDeptKillfocus();
}*/
static long _OnToDeptLoadDataFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptDialog *)pWnd)->OnToDeptLoadData();
}
/*static void _OnToDeptAddNewFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnToDeptAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMAllocateToDeptDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMAllocateToDeptDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnLineTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMAllocateToDeptDialog*)pWnd)->OnLineTabSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMAllocateToDeptDialog *pVw = (CFAMAllocateToDeptDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMAllocateToDeptDialog *pVw = (CFAMAllocateToDeptDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMAllocateToDeptDialog *pVw = (CFAMAllocateToDeptDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMAllocateToDeptDialog *pVw = (CFAMAllocateToDeptDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFAMAllocateToDeptDialog *pVw = (CFAMAllocateToDeptDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CFAMAllocateToDeptDialog *pVw = (CFAMAllocateToDeptDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMAllocateToDeptDialog *pVw = (CFAMAllocateToDeptDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMAllocateToDeptDialogFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDeptDialog*)pWnd)->OnAddFAMAllocateToDeptDialog();
} 
static int _OnEditFAMAllocateToDeptDialogFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDeptDialog*)pWnd)->OnEditFAMAllocateToDeptDialog();
} 
static int _OnDeleteFAMAllocateToDeptDialogFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDeptDialog*)pWnd)->OnDeleteFAMAllocateToDeptDialog();
} 
static int _OnSaveFAMAllocateToDeptDialogFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDeptDialog*)pWnd)->OnSaveFAMAllocateToDeptDialog();
} 
static int _OnCancelFAMAllocateToDeptDialogFnc(CWnd *pWnd){
	 return ((CFAMAllocateToDeptDialog*)pWnd)->OnCancelFAMAllocateToDeptDialog();
} 
CFAMAllocateToDeptDialog::CFAMAllocateToDeptDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMAllocateToDeptDialog::~CFAMAllocateToDeptDialog(){
}
void CFAMAllocateToDeptDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 805, 90);
	m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 30, 110, 55);
	m_wndOrderNo.Create(this,115, 30, 265, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 270, 30, 370, 55);
	m_wndOrderDate.Create(this,375, 30, 525, 55); 
	m_wndWarehouseLabel.Create(this, _T("Warehouse"), 530, 30, 610, 55);
	m_wndWarehouse.Create(this,615, 30, 800, 55); 
	m_wndToDeptLabel.Create(this, _T("To Department"), 10, 60, 110, 85);
	m_wndToDept.Create(this,115, 60, 265, 85); 
	m_wndNoteLabel.Create(this, _T("Note"), 270, 60, 370, 85);
	m_wndNote.Create(this,375, 60, 800, 85); 
	m_wndLineTab.Create(this,5, 95, 805, 520); 
	m_wndAdd.Create(this, _T("Add"), 216, 525, 296, 550);
	m_wndEdit.Create(this, _T("Edit"), 300, 525, 380, 550);
	m_wndSave.Create(this, _T("Save"), 385, 525, 465, 550);
	m_wndCancel.Create(this, _T("Cancel"), 470, 525, 550, 550);
	m_wndPrint.Create(this, _T("Print"), 555, 525, 635, 550);
	m_wndImport.Create(this, _T("Post1"), 640, 525, 720, 550);
	m_wndClose.Create(this, _T("Close"), 725, 525, 805, 550);

	//m_wndOrderNo.EnableWindow(FALSE);
	m_wndTTDL.Create(&m_wndLineTab);
	m_wndLineTab.Add(_T("Items"), &m_wndTTDL);
	m_wndTTDL.OnInitDialog();
	m_wndTTDL.SetMode(VM_NONE);

}
void CFAMAllocateToDeptDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetReadOnly(true);
	m_wndOrderDate.SetCheckValue(true);
	m_wndWarehouse.SetCheckValue(true);
	m_wndToDept.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);

	m_wndWarehouse.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWarehouse.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndToDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndToDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CFAMAllocateToDeptDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndWarehouse.SetEvent(WE_SELENDOK, _OnWarehouseSelendokFnc);
	//m_wndWarehouse.SetEvent(WE_SETFOCUS, _OnWarehouseSetfocusFnc);
	//m_wndWarehouse.SetEvent(WE_KILLFOCUS, _OnWarehouseKillfocusFnc);
	m_wndWarehouse.SetEvent(WE_SELCHANGE, _OnWarehouseSelectChangeFnc);
	m_wndWarehouse.SetEvent(WE_LOADDATA, _OnWarehouseLoadDataFnc);
	//m_wndWarehouse.SetEvent(WE_ADDNEW, _OnWarehouseAddNewFnc);
	m_wndToDept.SetEvent(WE_SELENDOK, _OnToDeptSelendokFnc);
	//m_wndToDept.SetEvent(WE_SETFOCUS, _OnToDeptSetfocusFnc);
	//m_wndToDept.SetEvent(WE_KILLFOCUS, _OnToDeptKillfocusFnc);
	m_wndToDept.SetEvent(WE_SELCHANGE, _OnToDeptSelectChangeFnc);
	m_wndToDept.SetEvent(WE_LOADDATA, _OnToDeptLoadDataFnc);
	//m_wndToDept.SetEvent(WE_ADDNEW, _OnToDeptAddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndLineTab.SetEvent(WE_SELCHANGE, _OnLineTabSelectChangeFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndImport.SetEvent(WE_CLICK, _OnImportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	OnToDeptLoadData();
	OnWarehouseLoadData();
	if(GetMode() == VM_ADD)
	{
		SetMode(VM_ADD);
		CString szSQL,szResDetail;
		long res;
		szSQL.Format(_T("STORAGE_TRANSACTION_CREATE('FAM', '', '%s', 'EAO')"), pMF->GetCurrentUser());
		pMF->ExecDMLEx(szSQL, res, szResDetail);
		if(res<0)
		{
			ShowMessageBox(szResDetail);
			return ;
		}
		m_szTransactionID = szResDetail;
		GetDataToScreen();
		m_wndTTDL.m_szTransactionID = m_szTransactionID;
	}else if(GetMode() == VM_EDIT)
	{
		SetMode(VM_EDIT);
		GetDataToScreen();
		m_wndTTDL.SetMode(VM_EDIT);
		m_wndTTDL.szWarehouse = m_szWarehouseKey;
	}else if(GetMode() == VM_VIEW)
		{
			SetMode(VM_VIEW);
			m_wndTTDL.SetMode(VM_VIEW);
			GetDataToScreen();
		}
		
}
void CFAMAllocateToDeptDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_TextEx(pDX, m_wndToDept.GetDlgCtrlID(), m_szToDeptKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CFAMAllocateToDeptDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT st_orderno, st_orderdate, st_createdby, st_exp_storage_id, st_imp_department_id, st_note ") \
		_T(" FROM storage_transaction WHERE st_transaction_id = '%s'"), m_szTransactionID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("st_orderno"), m_szOrderNo);
		rs.GetValue(_T("st_orderdate"), m_szOrderDate);
		rs.GetValue(_T("st_exp_storage_id"), m_szWarehouseKey);
		rs.GetValue(_T("st_imp_department_id"), m_szToDeptKey);
		rs.GetValue(_T("st_note"), m_szNote);
		UpdateData(FALSE);
	}

}
void CFAMAllocateToDeptDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAllocateToDeptDialog::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szWarehouseKey.Empty();
	m_szToDeptKey.Empty();
	m_szNote.Empty();

}
int CFAMAllocateToDeptDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 6, -1);
 			SetDefaultValues();
			m_szOrderDate =  pMF->GetSysDateTime();
			m_wndTTDL.szOrderNo = m_szOrderNo;
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
			//m_wndTTDL.Refresh();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
			m_wndTTDL.szOrderNo = m_szOrderNo;
			m_wndTTDL.m_szTransactionID = m_szTransactionID;
 			EnableButtons(TRUE, 2, 3, 6, -1);
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
			m_wndWarehouse.EnableWindow(FALSE);
			m_wndToDept.EnableWindow(FALSE);
			if(szStatusDlg == _T("P"))
				m_wndImport.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, 2, 3, -1);
			if(szStatusDlg == _T("P"))
				m_wndImport.EnableWindow(FALSE);
			m_wndTTDL.szOrderNo = m_szOrderNo;
			m_wndTTDL.m_szTransactionID = m_szTransactionID;
			GetDataToScreen();
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
/*void CFAMAllocateToDeptDialog::OnOrderNoChange(){
	
} */
/*void CFAMAllocateToDeptDialog::OnOrderNoSetfocus(){
	
} */
/*void CFAMAllocateToDeptDialog::OnOrderNoKillfocus(){
	
} */
int CFAMAllocateToDeptDialog::OnOrderNoCheckValue(){
	UpdateData(TRUE);
	m_wndTTDL.szOrderNo = m_szOrderNo;
	return 0;
} 
/*void CFAMAllocateToDeptDialog::OnOrderDateChange(){
	
} */
/*void CFAMAllocateToDeptDialog::OnOrderDateSetfocus(){
	
} */
/*void CFAMAllocateToDeptDialog::OnOrderDateKillfocus(){
	
} */
int CFAMAllocateToDeptDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CFAMAllocateToDeptDialog::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAllocateToDeptDialog::OnWarehouseSelendok(){
	UpdateData(TRUE);
	m_wndTTDL.szWarehouse = m_szWarehouseKey;
}
/*void CFAMAllocateToDeptDialog::OnWarehouseSetfocus(){
	
}*/
/*void CFAMAllocateToDeptDialog::OnWarehouseKillfocus(){
	
}*/
long CFAMAllocateToDeptDialog::OnWarehouseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWarehouse.IsSearchKey() && !m_szWarehouseKey.IsEmpty()){
		szWhere.Format(_T(" and sl_storage_id='%s' "), m_szWarehouseKey);
	}
	m_wndWarehouse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id as id, sl_name as name FROM storage_location WHERE sl_org_id = 'FAM' and sl_type is null %s ORDER BY sl_storage_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAllocateToDeptDialog::OnWarehouseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMAllocateToDeptDialog::OnToDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAllocateToDeptDialog::OnToDeptSelendok(){
	UpdateData(TRUE);
	m_wndTTDL.szDept = m_szToDeptKey;
	
}
/*void CFAMAllocateToDeptDialog::OnToDeptSetfocus(){
	
}*/
/*void CFAMAllocateToDeptDialog::OnToDeptKillfocus(){
	
}*/
long CFAMAllocateToDeptDialog::OnToDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndToDept.IsSearchKey() && !m_szToDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sl_storage_id='%s' "), m_szToDeptKey);
	}
	m_wndToDept.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id as id, sl_name as name FROM storage_location WHERE sl_type = 'dpt' %s ORDER BY sl_storage_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAllocateToDeptDialog::OnToDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAllocateToDeptDialog::OnNoteChange(){
	
} */
/*void CFAMAllocateToDeptDialog::OnNoteSetfocus(){
	
} */
/*void CFAMAllocateToDeptDialog::OnNoteKillfocus(){
	
} */
int CFAMAllocateToDeptDialog::OnNoteCheckValue(){
	return 0;
} 
void CFAMAllocateToDeptDialog::OnLineTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAllocateToDeptDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMAllocateToDeptDialog();
} 
void CFAMAllocateToDeptDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFAMAllocateToDeptDialog();
} 
void CFAMAllocateToDeptDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMAllocateToDeptDialog();
} 
void CFAMAllocateToDeptDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMAllocateToDeptDialog();
} 
void CFAMAllocateToDeptDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, szSQL2,tmpStr, szTemp, szDate, szOrderID;
	long double nGroupTotal;
	long double nTotal;
	double nCost, nUPrice;
	int nIndex = 1;

	szSQL2.Format(_T("SELECT st_orderid FROM storage_transaction WHERE st_doctype = 'EAO' and st_transaction_id = '%s'"), m_szTransactionID);
	rs1.ExecSQL(szSQL2);
	szOrderID = rs1.GetValue(_T("st_orderid"));

	szSQL.Format(_T("SELECT stl_item_id, fal_assetname, stl_uom_id,  stl_unitprice, stl_qtyorder, stl_amount, fal_model, stl_seri ") \
				_T("FROM      storage_transactionline ") \
				_T("LEFT JOIN storage_transaction ON( st_transaction_id = stl_transaction_id ) ") \
				_T("LEFT JOIN fam_asset_list ON( fal_assetno = stl_item_id ) ") \
				_T("WHERE     st_doctype = 'EAO' and st_transaction_id = '%s'"), m_szTransactionID);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/FAM/FAM_PHIEUXUATKHO.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("KHO\x41 TR\x41NG \x42\x1ECA"));
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), m_szOrderNo);
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndWarehouse.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("ToDept"), m_szToDeptKey);
	rpt.GetReportHeader()->SetValue(_T("ReferenceNo"), szOrderID);
	nGroupTotal = 0;
	nTotal = 0;

	while(!rs.IsEOF())
	{
		/*if(nGroupTotal > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			FormatCurrency(nGroupTotal, tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);
			nTotal += nGroupTotal;
			nGroupTotal = 0;
		}*/
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("fal_assetname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("fal_model"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("stl_seri"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("stl_uom_id"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("expdate"), tmpStr);
		szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("6"), szTemp);

		rs.GetValue(_T("stl_qtyorder"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("stl_unitprice"), nUPrice);
		FormatCurrency(nUPrice, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("stl_amount"), nCost);
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		nGroupTotal += nCost;

		rs.MoveNext();
	}
	if(nGroupTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("tongso"), _T("T\x1ED5ng \x63\x1ED9ng:"));
		FormatCurrency(nGroupTotal, tmpStr);
		rptDetail->SetValue(_T("s8"), tmpStr);
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if(nTotal > 0)
	{
		FormatCurrency(nTotal, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	}

	CString szMoney;
	tmpStr.Replace(_T("."), _T(""));
	MoneyToString(tmpStr, szMoney);
	rpt.GetReportFooter()->SetValue(_T("SumInWords"), szMoney + _T(" \x111\x1ED3ng"));

	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
} 
void CFAMAllocateToDeptDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szRes, szSQL2, szRes2;
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDYES)
	{
		szSQL.Format(_T("STORAGE_TRANSACTION_POST('%s', '%s')"), m_szTransactionID, pMF->GetCurrentUser());
		szRes = pMF->ExecDML(szSQL);
		szSQL2.Format(_T("FAM_ALLOCATETODEPT_POSTED('%s', '%s', '%s', '%s', '%s')"), m_szTransactionID, pMF->GetCurrentUser(),pMF->GetCurrentUser(), m_szToDeptKey, pMF->GetModuleID());
		szRes2 = pMF->ExecDML(szSQL2);
		szStatusDlg.Format(_T("P"));
		SetMode(VM_VIEW);
		m_wndTTDL.SetMode(VM_VIEW);
	}else
		return;
} 
void CFAMAllocateToDeptDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("STORAGE_TRANSACTION_DISCARD('%s')"), m_szTransactionID);
	pMF->ExecDML(szSQL);
	pMF->m_wndAllocateToDept.OnAllocateToDeptListLoadData();
	OnCancel();
} 
int CFAMAllocateToDeptDialog::OnAddFAMAllocateToDeptDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
	return 0;
}
int CFAMAllocateToDeptDialog::OnEditFAMAllocateToDeptDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAllocateToDeptDialog::OnDeleteFAMAllocateToDeptDialog(){
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
 		OnCancelFAMAllocateToDeptDialog();
 	}
	return 0;
}
int CFAMAllocateToDeptDialog::OnSaveFAMAllocateToDeptDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT){
 		szSQL.Format(_T("UPDATE storage_transaction SET st_processing = 'S', st_exp_storage_id = '%s', st_imp_storage_id = '%s',st_imp_department_id = '%s', st_note = '%s' ") \
			_T(" WHERE st_transaction_id = '%s' and st_org_id = 'FAM'"), m_szWarehouseKey, m_szToDeptKey, m_szToDeptKey, m_szNote, m_szTransactionID );
 	}
	
	_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);
			m_wndTTDL.szWarehouse = m_szWarehouseKey;
			pMF->m_wndAllocateToDept.OnAllocateToDeptListLoadData();
			m_wndTTDL.m_wndItemName.SetFocus();
		}
		else
		{
			m_wndTTDL.SetMode(VM_ADD);
			m_wndTTDL.szWarehouse = m_szWarehouseKey;
			pMF->m_wndAllocateToDept.OnAllocateToDeptListLoadData();
			m_wndTTDL.m_wndItemName.SetFocus();
 			SetMode(VM_VIEW);
		}
		return 1;
 	}
 	else
 	{
 	}
 	return ret;

}
int CFAMAllocateToDeptDialog::OnCancelFAMAllocateToDeptDialog(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
		m_wndTTDL.SetMode(VM_VIEW);
		pMF->m_wndReceiptOrder.OnOrderListLoadData();
 	} 
 	else 
 	{
		pMF->m_wndAllocateToDept.OnAllocateToDeptListLoadData();
		m_wndTTDL.SetDefaultValues();
		m_wndTTDL.SetMode(VM_NONE);
		SetMode(VM_NONE);
 	} 
 	return 0;
} 
int CFAMAllocateToDeptDialog::OnFAMAllocateToDeptDialogListLoadData(){
	return 0;
}
