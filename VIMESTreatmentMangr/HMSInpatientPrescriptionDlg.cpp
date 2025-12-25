#include "HMSInpatientPrescriptionDlg.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSDrugUsageDialog.h"
#include "HMSSmartPrescriptionDialog.h"
#include "HMSConfirmDialog.h"
#include "HMSReportForms/PrintForms.h"


static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionDlg*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionDlg*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInpatientPrescriptionDlg*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListSmartInpatientPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionDlg*)pWnd)->OnOrderListSmartInpatientPrescription();
} 

static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionDlg*)pWnd)->OnOrderListDeleteItem();
} 

static int _OnOrderListPrintPreviewFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionDlg*)pWnd)->OnPrintPreview();
	return 0;
} 

static int _OnOrderListPrintDeliveryDrugFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionDlg*)pWnd)->OnPrintDeliveryDrug();
	return 0;
} 


static int _OnOrderListRefreshFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionDlg*)pWnd)->OnOrderListLoadData();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionDlg*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionDlg*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInpatientPrescriptionDlg*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 

static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionDlg*)pWnd)->OnDrugListDeleteItem();
} 
/*static void _OnAdviceChangeFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionDlg *)pWnd)->OnAdviceChange();
} */
/*static void _OnAdviceSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionDlg *)pWnd)->OnAdviceSetfocus();} */ 
/*static void _OnAdviceKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionDlg *)pWnd)->OnAdviceKillfocus();
} */
static int _OnAdviceCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionDlg *)pWnd)->OnAdviceCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSInpatientPrescriptionDlg *pVw = (CHMSInpatientPrescriptionDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSInpatientPrescriptionDlg *pVw = (CHMSInpatientPrescriptionDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSInpatientPrescriptionDlg *pVw = (CHMSInpatientPrescriptionDlg *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSInpatientPrescriptionDlg *pVw = (CHMSInpatientPrescriptionDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSInpatientPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionDlg*)pWnd)->OnAddHMSInpatientPrescriptionDlg();
} 
static int _OnEditHMSInpatientPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionDlg*)pWnd)->OnEditHMSInpatientPrescriptionDlg();
} 
static int _OnDeleteHMSInpatientPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionDlg*)pWnd)->OnDeleteHMSInpatientPrescriptionDlg();
} 
static int _OnSaveHMSInpatientPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionDlg*)pWnd)->OnSaveHMSInpatientPrescriptionDlg();
} 
static int _OnCancelHMSInpatientPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionDlg*)pWnd)->OnCancelHMSInpatientPrescriptionDlg();
} 
CHMSInpatientPrescriptionDlg::CHMSInpatientPrescriptionDlg(CWnd *pParent){
	SetParent(pParent);
	m_nDlgWidth = 605;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CHMSInpatientPrescriptionDlg::CHMSInpatientPrescriptionDlg(){
	m_nDlgWidth = 605;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CHMSInpatientPrescriptionDlg::~CHMSInpatientPrescriptionDlg(){
}
void CHMSInpatientPrescriptionDlg::OnCreateComponents(){
	m_wndInpatientPrescriptionInformation.Create(this, _T("InpatientPrescription Information"), 5, 5, 620, 525);
	m_wndOrderList.Create(this,10, 30, 615, 123); 
	m_wndList.Create(this,10, 125, 615, 465); 
	m_wndAdviceLabel.Create(this, _T("Advice"), 10, 470, 80, 495);
	m_wndAdvice.Create(this,85, 470, 615, 520); 
	m_wndAdd.Create(this, _T("&Add"), 280, 530, 360, 555);
	m_wndDelete.Create(this, _T("&Delete"), 365, 530, 445, 555);
	m_wndSend.Create(this, _T("&Send"), 450, 530, 525, 555);
	m_wndPrint.Create(this, _T("&Print"), 530, 530, 615, 555);
}
void CHMSInpatientPrescriptionDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdvice.SetLimitText(35);
	m_wndAdvice.SetReadOnly(true);
//	m_wndAdvice.SetCheckValue(true);

	m_wndOrderList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndOrderList.InsertColumn(1, _T("Order Date"), CFMT_DATE, 90);
	m_wndOrderList.InsertColumn(2, _T("Doctor"), CFMT_TEXT, 140);
	m_wndOrderList.InsertColumn(3, _T("Status"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(4, _T("Storage"), CFMT_TEXT|CFMT_CENTER, 140);
	m_wndOrderList.InsertColumn(5, _T("Created By"), CFMT_TEXT, 100);

	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //product_id
	m_wndList.InsertColumn(1, _T(""), CFMT_TEXT, 0); //country_id
	m_wndList.InsertColumn(2, _T("Index"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndList.InsertColumn(3, _T("Drug Name /Cnt"), CFMT_TEXT, 230);
	m_wndList.InsertColumn(4, _T("Unit"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Quantity"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(6, _T("Delivery Qty"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(7, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(8, _T("Amount"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(9, _T("Prod.Country"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(10, _T("hfe_status"), CFMT_TEXT, 0);
	m_wndList.SetSortHeader(false);	
}
void CHMSInpatientPrescriptionDlg::OnSetWindowEvents(){
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.SetWindowText(_T("InpatientPrescription"));
	m_wndOrderList.AddEvent(1, _T("Smart InpatientPrescription"), _OnOrderListSmartInpatientPrescriptionFnc, 0, VK_F2);
	m_wndOrderList.AddEvent(2, _T("Delete Order"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOrderList.AddEvent(0, _T("-"), NULL);
	m_wndOrderList.AddEvent(3, _T("Print Preview"), _OnOrderListPrintPreviewFnc);
	m_wndOrderList.AddEvent(0, _T("-"), NULL);
	m_wndOrderList.AddEvent(4, _T("Print Delivery Drug"), _OnOrderListPrintDeliveryDrugFnc);
	m_wndOrderList.AddEvent(0, _T("-"), NULL);
	m_wndOrderList.AddEvent(5, _T("Refresh Data"), _OnOrderListRefreshFnc, 0, VK_F5, 0);

	m_wndList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete Item"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetWindowText(_T("Drug List"));

	//m_wndAdvice.SetEvent(WE_CHANGE, _OnAdviceChangeFnc);
	//m_wndAdvice.SetEvent(WE_SETFOCUS, _OnAdviceSetfocusFnc);
	//m_wndAdvice.SetEvent(WE_KILLFOCUS, _OnAdviceKillfocusFnc);
	m_wndAdvice.SetEvent(WE_CHECKVALUE, _OnAdviceCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSInpatientPrescriptionDlgFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSInpatientPrescriptionDlgFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSInpatientPrescriptionDlgFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSInpatientPrescriptionDlgFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSInpatientPrescriptionDlgFnc, 0, 'T', VK_CONTROL);
*/
	//ChangeViewMode(VM_ADD);
	OnOrderListLoadData();
//	m_wndEntry.SetMode(VM_NONE);
	SetMode(VM_NONE);
	
}
void CHMSInpatientPrescriptionDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndAdvice.GetDlgCtrlID(), m_szAdvice);

}
void CHMSInpatientPrescriptionDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szTable;
	/*if(pMF->IsOutPatient())
		szSQL.Format(_T("SELECT * FROM hms_pharmaorder WHERE hpo_orderid=%ld "), m_nOrderID);
	else*/
	
	szSQL.Format(_T("SELECT * FROM hms_ipharmaorder WHERE hpo_orderid=%ld "), m_nOrderID);

	rs.ExecSQL(szSQL);
	m_szoperaID.Empty();
	if(!rs.IsEOF()){
		rs.GetValue(_T("hpo_orderstatus"), m_szStatus);
		rs.GetValue(_T("hpo_storage_id"), m_nStockID);
		rs.GetValue(_T("hpo_feeid"), m_szoperaID);
		SetMode(VM_VIEW);
		OnDrugListLoadData();

		CString szLabel;
		if(m_szStatus == _T("O")){
			TranslateString(_T("&Confirm"), szLabel);
		}
		else
		{
			TranslateString(_T("&Disconfirm"), szLabel);
		}
		m_wndSend.SetWindowText(szLabel);
	}
	else
	{
		SetMode(VM_NONE);
		
	}

	
}
void CHMSInpatientPrescriptionDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInpatientPrescriptionDlg::SetDefaultValues(){

	m_szAdvice.Empty();

}
int CHMSInpatientPrescriptionDlg::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 0, 1, 2, 3, -1); 
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
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
} 

int CHMSInpatientPrescriptionDlg::OnOrderListSmartInpatientPrescription()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("07.05")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(!pMF->IsActiveDocument())
		return 0;
	CHMSSmartPrescriptionDialog dlg(pMF);
	if(dlg.DoModal() == IDOK){
		OnOrderListLoadData();
	}
	return 0;
}
void CHMSInpatientPrescriptionDlg::OnOrderListDblClick(){
	
} 
void CHMSInpatientPrescriptionDlg::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderID = str2long(m_wndOrderList.GetItemText(nNewItem, 0));	
	OnDrugListLoadData();
	GetDataToScreen();	
} 

int CHMSInpatientPrescriptionDlg::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() != VM_VIEW)
		return -1;
	if(m_szStatus != _T("O") && m_szStatus != _T("S"))
		return -1;
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	CString szSQL; 	
	szSQL.Format(_T("SELECT hms_inpharmaorder_delete(%ld,'%s') "), m_nOrderID, pMF->GetCurrentUser());
	int ret = pMF->ExecSQL(szSQL);
	if(ret >=0)
	{
		OnOrderListLoadData();
		m_wndOrderList.SetCurSel(0);
		GetDataToScreen();
	}
	return 0;
} 
long CHMSInpatientPrescriptionDlg::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, tmpStr;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0, i = 0;
	long nOrderID;
	
	szSQL.Format(_T("SELECT * FROM hms_ipharmaorder WHERE hpo_docno=%ld AND hpo_deptid='%s' AND hpo_ordertype='P' ORDER BY hpo_orderid "), pMF->m_nDocumentNo, pMF->m_szDept, pMF->m_szDept);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hpo_orderid"), nOrderID);
		rs.GetValue(_T("hpo_orderstatus"), szStatus);

		
		int nItem = m_wndOrderList.AddItems(
			rs.GetValue(_T("hpo_orderid")), 
			rs.GetValue(_T("hpo_orderdate")), 
			pMF->GetDoctorName(rs.GetValue(_T("hpo_doctor"))), 
			pMF->GetStatusString(szStatus), 
			pMF->GetStorageName(ToInt(rs.GetValue(_T("hpo_storage_id")))),
			rs.GetValue(_T("hpo_createdby")), 
			NULL);

		if(szStatus == _T("S"))
		{
			m_wndOrderList.SetSubItemBkColor(nItem, 3, RGB(0, 129, 192), FALSE);
			m_wndOrderList.SetSubItemTextColor(nItem, 3, RGB(255, 255, 255), FALSE);
		}
		else if(szStatus==_T("T"))
		{
			m_wndOrderList.SetItemBkColor(nItem, RGB(255, 128, 0), FALSE);
			m_wndOrderList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		}

		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	
	if(GetMode() != VM_ADD)
	{
		m_wndList.DeleteAllItems();
	}

	return nCount;

}


void CHMSInpatientPrescriptionDlg::OnDrugListDblClick(){
	CMainFrame *pMF  = (CMainFrame *) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	CString szText, szItemID;
	szText = m_wndList.GetItemText(nSel, 0);
	szItemID = m_wndList.GetItemText(nSel, 6);
	if(szItemID.IsEmpty())
		return;
	CHMSDrugUsageDialog dlg(this);
	dlg.m_szUsage = m_wndList.GetItemText(nSel, 1);
	if(dlg.DoModal() == IDOK){
		CString szSQL;
		CRecord rs(&pMF->m_db);

		szSQL.Format(_T("SELECT max(hpol_lnidx) FROM hms_ipharmaorderline WHERE hpol_orderid=%ld and hpol_product_id='%s' "), m_nOrderID, szItemID);
		rs.ExecSQL(szSQL);
		long nLnIdx = rs.GetIntValue();

		szSQL.Format(_T("UPDATE hms_ipharmaorderline SET hpol_usage='%s' WHERE hpol_orderid=%ld AND hpol_product_id='%s' and hpol_lnidx=%ld "), dlg.m_szUsage, m_nOrderID, szItemID, nLnIdx);
		pMF->ExecSQL(szSQL);
		if(szText.IsEmpty())
			m_wndList.SetItemText(nSel, 1, dlg.m_szUsage);
		else
			OnDrugListLoadData();
	}
} 
void CHMSInpatientPrescriptionDlg::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

} 
int CHMSInpatientPrescriptionDlg::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if(!pMF->CheckPermission(_T("07.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(m_szStatus != _T("O"))
		return 0;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 


	long nProductID;
	int nCount = 0;
	CString szSQL;
	m_nOrderID = str2long(m_wndOrderList.GetItemText(m_wndOrderList.GetCurSel(), 0));
	for (int i = m_wndList.GetItemCount()-1; i >=0; i --)
	{
		if(!(m_wndList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED))
			continue;
		nProductID = ToLong(m_wndList.GetItemText(i, 0));
		szSQL.Format(_T("HMS_IPHARMAORDER_DELLINE(%ld, %ld,'%s', 1, 1)"), m_nOrderID, nProductID, pMF->GetCurrentUser());	
		int res = str2int(pMF->ExecDML(szSQL));
		if(res > 0)
		{
			nCount++;
			m_wndList.DeleteItem(i);
		}
	}
	if(nCount > 0)
	{
		if(m_wndList.GetItemCount() <= 0)
		{
			OnOrderListLoadData();
		}
	}
	return 0;
} 
long CHMSInpatientPrescriptionDlg::OnDrugListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szUsage, tmpStr;
	double nTotalAmount = 0.0, nAmount = 0.0;
	if(m_nOrderID <= 0){
		m_wndList.DeleteAllItems();
		return 0;
	}
	m_wndList.BeginLoad(); 
	int nItem=0, nIndex = 1;
		szSQL.Format(_T(" SELECT ") \
	_T("   hpol_Product_id,") \
	_T("   hpol_productname,") \
	_T("   hpol_productuom,") \
	_T("   hpol_productcountryid,") \
	_T("   hpol_productcountry,") \
	_T("   hpol_unitprice,") \
	_T("   hpol_qtyorder                             AS hpol_qtyorder,") \
	_T("   hpol_unitprice*hpol_qtyorder              AS hpol_amount2 ,") \
	_T("   hms_getdousage(hpol_orderid, hpol_product_id) AS hpol_usage, ") \
	_T("   SUM(hpol_qtyissue)                             AS hpol_qtyissue,") \
	_T("   SUM(hpol_unitprice*hpol_qtyissue)              AS hpol_amount ") \
	_T(" FROM hms_ipharmaorderline_view") \
	_T(" WHERE hpol_orderid =%ld %s ") \
	_T(" GROUP BY hpol_orderid,") \
	_T("   hpol_product_id,") \
	_T("   hpol_productcountryid,") \
	_T("   hpol_productcountry,") \
	_T("   hpol_productname,") \
	_T("   hpol_productuom,") \
	_T("   hpol_unitprice,") \
	_T("   hpol_qtyorder,") \
	_T("   hpol_line") \
	_T(" ORDER BY hpol_line"), m_nOrderID, szWhere);
_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hpol_usage"), szUsage);
		double money;
		rs.GetValue(_T("hpol_money"), money);
		nTotalAmount += money;
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			rs.GetValue(_T("hpol_product_id")), 
			rs.GetValue(_T("hpol_productcountryid")), 
			tmpStr,
			rs.GetValue(_T("hpol_productname")), 
			rs.GetValue(_T("hpol_productuom")), 
			rs.GetValue(_T("hpol_qtyorder")), 
			rs.GetValue(_T("hpol_qtyissue")), 
			rs.GetValue(_T("hpol_unitprice")), 
			rs.GetValue(_T("hpol_money")), 
			rs.GetValue(_T("hpol_productcountry")), 
			rs.GetValue(_T("hpol_qtyorder")),
			NULL);
		rs.GetValue(_T("hpol_usage"), szUsage);
		if(!szUsage.IsEmpty())
		{
			nItem = m_wndList.AddItems(
				rs.GetValue(_T("hpol_product_id")), 
				_T("XXX"),
				_T(""),
				szUsage, 
				_T(""),
				_T(""),
				_T(""),
				_T(""),
				_T(""), 
				NULL);
			m_wndList.MergeCell(nItem, 3, nItem, 8, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false ,true);
			m_wndList.SetItemBkColor(nItem, RGB(255, 255, 255), FALSE);	
			m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);		
		}
		rs.MoveNext();
	}
	if(nTotalAmount > 0)
	{
		CString tmpStr;		
		TranslateString(_T("Total Amount"), tmpStr);
		nItem = m_wndList.AddItems(_T(""), _T(""), _T("*"), tmpStr, _T(""), _T(""), _T(""), _T(""), ToString((double)nTotalAmount), NULL);		
		m_wndList.SetItemBkColor(nItem, RGB(0, 125, 135), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndList.MergeCell(nItem, 3, nItem, 5, DT_VCENTER|DT_SINGLELINE, true);		
	}
	m_wndList.EndLoad(); 
	return nItem;

}
/*void CHMSInpatientPrescriptionDlg::OnAdviceChange(){
	
} */
/*void CHMSInpatientPrescriptionDlg::OnAdviceSetfocus(){
	
} */
/*void CHMSInpatientPrescriptionDlg::OnAdviceKillfocus(){
	
} */
int CHMSInpatientPrescriptionDlg::OnAdviceCheckValue(){
	return 0;
} 
void CHMSInpatientPrescriptionDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("07.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(!pMF->IsActiveDocument())
		return;

	CHMSInpatientPrescriptionPopup *newPopup = new CHMSInpatientPrescriptionPopup(this, VM_ADD);
	newPopup->m_nOrderID = m_nOrderID;
	newPopup->ShowPopup(&m_wndList);
} 
void CHMSInpatientPrescriptionDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListDeleteItem();
} 
void CHMSInpatientPrescriptionDlg::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szDoctor, szLabel;
	CString szSQL, szStockType, tmpStr;
	int nStockID;

	if(!pMF->CheckPermission(_T("07.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0) return;
	m_nOrderID = str2long(m_wndOrderList.GetItemText(nSel, 0));

	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return;
	}

	szSQL.Format(_T("select count(*) from hms_ipharmaorderline where hpol_orderid=%ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
	{
		ShowMessageBox(_T("No item"));
		return;
	}
	szDoctor = pMF->m_szDoctor;



	if(pMF->m_bConfirm)
	{
		CHMSConfirmDialog dlg;
		dlg.m_szDoctor = pMF->m_szDoctor;
		if(dlg.DoModal() != IDOK)
			return;
		szDoctor = dlg.m_szDoctor;
	}


	szSQL.Format(_T("HMS_IPHARMAORDER_SEND(%ld, '%s','%s') "), m_nOrderID, pMF->GetCurrentUser(), szDoctor);
	int res = str2int(pMF->ExecDML(szSQL));
	if(res < 0)
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return;
	}
	m_szStatus = GetCurrentStatus();
	if(m_szStatus == _T("O"))
	{
		TranslateString(_T("&Confirm"), szLabel);
		m_wndOrderList.SetItemBkColor(nSel, RGB(0, 128, 192));
		m_wndOrderList.SetItemTextColor(nSel, RGB(255, 255, 255));
	}
	else
	{
		TranslateString(_T("&Disconfirm"), szLabel);
		m_wndOrderList.SetItemBkColor(nSel, RGB(255, 128, 0));
		m_wndOrderList.SetItemTextColor(nSel, RGB(255, 255, 255));
	}
	m_wndOrderList.SetItemText(nSel, 3, pMF->GetStatusString(m_szStatus));
	m_wndSend.SetWindowText(szLabel);
	return;

	szSQL.Format(_T("SELECT hpo_storage_id, hpo_orderstatus, hpo_payment, hpo_createdby,hpo_doctor ") \
		_T(" FROM hms_ipharmaorder ") \
		_T(" WHERE hpo_orderid=%ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	rs.GetValue(_T("hpo_storage_id"), nStockID);
	rs.GetValue(_T("hpo_orderstatus"), m_szStatus);
	rs.GetValue(_T("hpo_payment"), tmpStr);
	rs.GetValue(_T("hpo_createdby"), m_szCreatedBy);
	if(tmpStr == _T("P"))
	{
		ShowMessageBox(_T("This order is paid"), 0);
		return;
	}

	rs.GetValue(_T("hpo_doctor"), tmpStr);
	if(!tmpStr.IsEmpty()){
		szDoctor=tmpStr;
	}


	if(m_szStatus != _T("O") && pMF->GetCurrentUser() != _T("admin"))
	{
	//	ShowMessageBox(_T("Can not disconfirm. Contact administrator"), MB_OK);
	//	return ;
	}
	if(m_szCreatedBy != pMF->GetCurrentUser() && pMF->GetCurrentUser() != _T("admin")){
		ShowMessageBox(_T("This is order created by an other. Can not process it"), MB_OK);
		return;
	}
	if(!pMF->IsActiveDocument())
		return;

	
	szSQL.Format(_T("select count(*) from hms_ipharmaorderline where hpol_orderid=%ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
		return;
	
	szSQL.Format(_T("SELECT msl_type FROM m_storagelist WHERE msl_storage_id =%d "), nStockID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("msl_type"), szStockType);

	if(m_szStatus != _T("O") && m_szStatus != _T("S") && szStockType != _T("C")){
		ShowMessageBox(_T("Can not manipulate with current status. "), 0);
		return;
	}



	if(pMF->m_bConfirm)
	{
		CHMSConfirmDialog dlg;
		dlg.m_szDoctor = pMF->m_szDoctor;
		if(dlg.DoModal() != IDOK)
			return;
		szDoctor = dlg.m_szDoctor;
	}
	CString szSQL2;
	

	if(m_szStatus == _T("O"))
	{
		szSQL.Format(_T("UPDATE hms_ipharmaorder SET hpo_orderstatus='S', hpo_doctor='%s' WHERE hpo_orderid=%ld AND hpo_orderstatus='O' and hpo_ordertype in('P','M') "), szDoctor, m_nOrderID);
		pMF->ExecSQL(szSQL);
		/*if(szStockType == _T("C"))
		{
			szSQL2.Format(_T(" SELECT hms_ipharmaorder_accept(%ld, '%s') "), m_nOrderID, pMF->GetCurrentUser());
			pMF->ExecSQL(szSQL2);
		}*/
		TranslateString(_T("&Disconfirm"), szLabel);
	}
	else
	{
		
		/*if(szStockType == _T("C") && m_szStatus == _T("I"))
		{
			szSQL2.Format(_T(" SELECT hms_ipharmaorder_rollback(%ld) "), m_nOrderID);
			pMF->ExecSQL(szSQL2);
		}*/

		szSQL.Format(_T("UPDATE hms_ipharmaorder SET hpo_orderstatus='O' WHERE hpo_orderid=%ld AND hpo_orderstatus in('S') and hpo_ordertype in('P','M') and hpo_processed<>'Y' "), m_nOrderID);
		pMF->ExecSQL(szSQL);
		TranslateString(_T("&Confirm"), szLabel);		
	}
	szSQL.Format(_T("SELECT hpo_orderstatus FROM hms_ipharmaorder WHERE hpo_orderid=%ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderstatus"), m_szStatus);

	m_wndSend.SetWindowText(szLabel);
	pMF->CreateFees(_T("D"));
	Refresh();	
	
	
} 
void CHMSInpatientPrescriptionDlg::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if(!pMF->CheckPermission(_T("07.04")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(m_szStatus != _T("O"))
		pMF->PrintPrescription(m_nOrderID, false, false, 1, true);
} 
void CHMSInpatientPrescriptionDlg::OnPrintPreview(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
		pMF->PrintPrescription(m_nOrderID, true, false, 1, true);
}

void CHMSInpatientPrescriptionDlg::OnPrintDeliveryDrug(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		CPrintForms printer;
		printer.PrintDrugDeliveryin(m_nOrderID, true);
	}

}

int CHMSInpatientPrescriptionDlg::OnAddHMSInpatientPrescriptionDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	if(!pMF->IsActiveDocument())
		return 0;
	
	if(pMF->GetModuleID() == _T("TM") && pMF->m_nBedID <= 0 && pMF->m_szOutpatient != _T("Y"))
	{
		ShowMessageBox(_T("\x42\x1EC7nh nhân \x63h\x1B0\x61 \x111\x1B0\x1EE3\x63 x\x1EBFp gi\x1B0\x1EDDng. Không th\x1EC3 thêm \x111\x1B0\x1EE3\x63 thu\x1ED1\x63."), MB_OK);
		return 0;
	} 
	
 	SetMode(VM_ADD);
	return 0; 
 
} 
int CHMSInpatientPrescriptionDlg::OnEditHMSInpatientPrescriptionDlg(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSInpatientPrescriptionDlg"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSInpatientPrescriptionDlg::OnDeleteHMSInpatientPrescriptionDlg(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

	if(!pMF->CheckPermission(_T("07.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(!pMF->IsActiveDocument())
		return 0;

 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSInpatientPrescriptionDlg(); 
		//pMF->CreateFees(_T("D"));
 	}
return 0;
 } 
int CHMSInpatientPrescriptionDlg::OnSaveHMSInpatientPrescriptionDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSInpatientPrescriptionDlgListLoadData(); 
 		SetMode(VM_VIEW); 
 	//	pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSInpatientPrescriptionDlg::OnCancelHMSInpatientPrescriptionDlg(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 //	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSInpatientPrescriptionDlg::OnHMSInpatientPrescriptionDlgListLoadData(){
	return 0;
}


void CHMSInpatientPrescriptionDlg::Refresh(long nOrderID){
	OnOrderListLoadData();	
	if(nOrderID > 0)
	{
		for (int i =0; i < m_wndOrderList.GetItemCount(); i++)
		{
			long nOID = str2long(m_wndOrderList.GetItemText(i, 0));
			_tprintf(_T("\r\n%ld: %ld"), nOrderID, nOID);
			if(nOID == nOrderID)
			{
				m_wndOrderList.SetCurSel(i);
				m_nOrderID = nOrderID;
				break;
			}
		}

	}
}


void CHMSInpatientPrescriptionDlg::ShowPopup()
{
	SetMode(VM_ADD);	
}

void CHMSInpatientPrescriptionDlg::HidePopup()
{
}
void CHMSInpatientPrescriptionDlg::OnAfterClosePopup(){
	int nMode = GetMode();
	for (int i = 0; i < m_wndOrderList.GetItemCount(); i++){
		long nOID = str2long(m_wndOrderList.GetItemText(i, 0));
		if(nOID == m_nOrderID)
		{
			m_wndOrderList.SetCurSel(i);
			break;
		}
	}

	SetMode(VM_VIEW);

}

BOOL CHMSInpatientPrescriptionDlg::PreTranslateMessage(MSG* pMsg)
{
	return CGuiDialog::PreTranslateMessage(pMsg);
}


CString CHMSInpatientPrescriptionDlg::GetCurrentStatus()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szStatus.Empty();
	szSQL.Format(_T("SELECT hpo_orderstatus FROM hms_ipharmaorder WHERe hpo_orderid=%ld "), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hpo_orderstatus"), szStatus);

	}
	return szStatus;
}