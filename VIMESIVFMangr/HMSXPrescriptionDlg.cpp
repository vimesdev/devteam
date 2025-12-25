#include "HMSXPrescriptionDlg.h"
//#include "stdafx.h"
#include "MainFrm.h"

#include "HMSDrugUsageDialog.h"
#include "HMSSmartPrescriptionDialog.h"
#include "HMSConfirmDialog.h"
#include "HMSAdviceDialog.h"
#include "HMSExternalPrescriptionDialog.h"
#include "HMSOLDPrescriptionDialog.h"

static int _OnListEditQuantityItemFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionDlg*)pWnd)->OnListEditQuantityItem();
}

static int _OnDrugListEditDrugUsageFnc(CWnd *pWnd){
	((CHMSXPrescriptionDlg*)pWnd)->OnDrugListEditDrugUsage();
	 return 0;
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionDlg*)pWnd)->OnListDeleteItem();
}
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionDlg*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSXPrescriptionDlg*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSXPrescriptionDlg*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListSmartPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionDlg*)pWnd)->OnOrderListSmartPrescription();
} 
static int _OnOldPrescriprionFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionDlg*)pWnd)->OnOldPrescriprion();
}
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionDlg*)pWnd)->OnOrderListDeleteItem();
} 

static int _OnOrderListPrintPreviewFnc(CWnd *pWnd){
	((CHMSXPrescriptionDlg*)pWnd)->OnPrintPreview();
	return 0;
} 

static int _OnOrderListPrintPreviewDeliveryOrderFnc(CWnd *pWnd){
	((CHMSXPrescriptionDlg*)pWnd)->OnPrintPreviewDeliveryOrder();
	return 0;
} 

static int _OnAddExternalPrescriptionFnc(CWnd *pWnd){
	 ((CHMSXPrescriptionDlg*)pWnd)->OnAddExternalPrescription();
	 return 0;
} 
static int _OnOrderListRefreshFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionDlg*)pWnd)->OnOrderListLoadData();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionDlg*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSXPrescriptionDlg*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSXPrescriptionDlg*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 

static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionDlg*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnAddAdviceFnc(CWnd *pWnd){
	 ((CHMSXPrescriptionDlg*)pWnd)->OnAddAdvice();
	 return 0;
} 


/*static void _OnAdviceChangeFnc(CWnd *pWnd){
	((CHMSXPrescriptionDlg *)pWnd)->OnAdviceChange();
} */
/*static void _OnAdviceSetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionDlg *)pWnd)->OnAdviceSetfocus();} */ 
/*static void _OnAdviceKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionDlg *)pWnd)->OnAdviceKillfocus();
} */
static int _OnAdviceCheckValueFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionDlg *)pWnd)->OnAdviceCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSXPrescriptionDlg *pVw = (CHMSXPrescriptionDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSXPrescriptionDlg *pVw = (CHMSXPrescriptionDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSXPrescriptionDlg *pVw = (CHMSXPrescriptionDlg *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSXPrescriptionDlg *pVw = (CHMSXPrescriptionDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionDlg*)pWnd)->OnAddHMSPrescription();
} 
static int _OnEditHMSPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionDlg*)pWnd)->OnEditHMSPrescription();
} 
static int _OnDeleteHMSPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionDlg*)pWnd)->OnDeleteHMSPrescription();
} 
static int _OnSaveHMSPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionDlg*)pWnd)->OnSaveHMSPrescription();
} 
static int _OnCancelHMSPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionDlg*)pWnd)->OnCancelHMSPrescription();
} 
static int _OnPrescriptionApprovedFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionDlg*)pWnd)->OnPrescriptionApproved();
} 
CHMSXPrescriptionDlg::CHMSXPrescriptionDlg(CWnd* pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 605;
	m_nDlgHeight = 585;
	SetDefaultValues();
	m_bAddEntry = false;
}
CHMSXPrescriptionDlg::~CHMSXPrescriptionDlg(){
}
void CHMSXPrescriptionDlg::OnCreateComponents(){
	m_wndPrescriptionInformation.Create(this, _T("Prescription Information"), 5, 5, 600, 525);
	m_wndOrderList.Create(this,10, 30, 595, 123); 
	m_wndList.Create(this,10, 125, 595, 465); 
	m_wndAdviceLabel.Create(this, _T("Advice"), 10, 470, 80, 495);
	m_wndAdvice.Create(this,85, 470, 595, 520); 
	m_wndAdd.Create(this, _T("&Add"), 265, 530, 345, 555);
	m_wndDelete.Create(this, _T("&Delete"), 350, 530, 430, 555);
	m_wndSend.Create(this, _T("&Send"), 435, 530, 510, 555);
	m_wndPrint.Create(this, _T("&Print"), 515, 530, 595, 555);

	m_wndPopup.Create(this);
//	m_wndPopup.ShowWindow(SW_HIDE);
}
void CHMSXPrescriptionDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdvice.SetLimitText(35);
	m_wndAdvice.SetReadOnly(true);
//	m_wndAdvice.SetCheckValue(true);

	m_wndOrderList.InsertColumn(0, _T("Order ID"), CFMT_NUMBER, 70);
	m_wndOrderList.InsertColumn(1, _T("Order Date"), CFMT_DATE, 90);
	m_wndOrderList.InsertColumn(2, _T("Doctor"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(3, _T("Status"), CFMT_TEXT|CFMT_CENTER, 100);
	m_wndOrderList.InsertColumn(4, _T("Distributed Stock"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT|CFMT_RIGHT, 40);
	m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(5, _T("Money"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Prod.Country"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(7, _T("ItemID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(8, _T("itemrefidx"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T("hfe_status"), CFMT_TEXT, 0);
	m_wndList.SetSortHeader(false);	
	

}
void CHMSXPrescriptionDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);

	m_wndList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);

	//Neu co quyen in tong ket kham
		m_wndList.SetWindowText(_T("Drug Items"));	
		m_wndList.AddEvent(1, _T("Edit Quantity"), _OnListEditQuantityItemFnc);
		m_wndList.AddEvent(0, _T("-"));
		m_wndList.AddEvent(2, _T("Delete Items"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
		m_wndList.SetColumnWidth(4, 0);
		//m_wndAdvice.SetEvent(WE_CHANGE, _OnAdviceChangeFnc);
		//m_wndAdvice.SetEvent(WE_SETFOCUS, _OnAdviceSetfocusFnc);
		//m_wndAdvice.SetEvent(WE_KILLFOCUS, _OnAdviceKillfocusFnc);
		m_wndAdvice.SetEvent(WE_CHECKVALUE, _OnAdviceCheckValueFnc);
		m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
		m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
		m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
		m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

		SetWindowText(_T("Prescription Information"));

		
		if (pMF->CheckPermission(_T("05.09")))
		{
			//m_wndOrderList.SetMenuState(4, TRUE);
			m_wndOrderList.SetWindowText(_T("Prescription"));
			m_wndOrderList.AddEvent(1, _T("Smart Prescription"), _OnOrderListSmartPrescriptionFnc, 0, VK_F2);	
			m_wndOrderList.AddEvent(2, _T("Old Prescription"), _OnOldPrescriprionFnc);
			m_wndOrderList.AddEvent(0, _T("-"), NULL);
			m_wndOrderList.AddEvent(3, _T("Add Advice"), _OnAddAdviceFnc);
			m_wndOrderList.AddEvent(0, _T("-"), NULL);
			m_wndOrderList.AddEvent(4, _T("Prescription Approved"), _OnPrescriptionApprovedFnc);
			m_wndOrderList.AddEvent(0, _T("-"), NULL);
			m_wndOrderList.AddEvent(5, _T("Print Preview Prescription"), _OnOrderListPrintPreviewFnc);	
			m_wndOrderList.AddEvent(6, _T("Print Preview Delivery Order"), _OnOrderListPrintPreviewDeliveryOrderFnc);
			m_wndOrderList.AddEvent(0, _T("-"), NULL);
			m_wndOrderList.AddEvent(7, _T("External Prescription"), _OnAddExternalPrescriptionFnc);
			m_wndOrderList.AddEvent(0, _T("-"), NULL);
			m_wndOrderList.AddEvent(8, _T("Refresh Data"), _OnOrderListRefreshFnc, 0, VK_F5, 0);
		}
		else
		{
			//m_wndOrderList.SetMenuState(4, FALSE);
			m_wndOrderList.SetWindowText(_T("Prescription"));
			m_wndOrderList.AddEvent(1, _T("Smart Prescription"), _OnOrderListSmartPrescriptionFnc, 0, VK_F2);	
			m_wndOrderList.AddEvent(2, _T("Old Prescription"), _OnOldPrescriprionFnc);
			m_wndOrderList.AddEvent(0, _T("-"), NULL);
			m_wndOrderList.AddEvent(3, _T("Add Advice"), _OnAddAdviceFnc);
			m_wndOrderList.AddEvent(0, _T("-"), NULL);
			m_wndOrderList.AddEvent(4, _T("Print Preview Prescription"), _OnOrderListPrintPreviewFnc);	
			m_wndOrderList.AddEvent(5, _T("Print Preview Delivery Order"), _OnOrderListPrintPreviewDeliveryOrderFnc);
			m_wndOrderList.AddEvent(0, _T("-"), NULL);
			m_wndOrderList.AddEvent(6, _T("External Prescription"), _OnAddExternalPrescriptionFnc);
			m_wndOrderList.AddEvent(0, _T("-"), NULL);
			m_wndOrderList.AddEvent(7, _T("Refresh Data"), _OnOrderListRefreshFnc, 0, VK_F5, 0);
		}
	
	
	SetMode(VM_NONE);
	OnOrderListLoadData();
}
void CHMSXPrescriptionDlg::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_Text(pDX, m_wndAdvice.GetDlgCtrlID(), m_szAdvice);

}
void CHMSXPrescriptionDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT hpo_createdby,hpo_orderstatus, hpo_storage_id,hpo_feeid, hpo_advice,hpo_payment, hpo_doctor ") \
		_T("FROM hms_pharma_xorder WHERE hpo_orderid=%ld "), m_nOrderID);

	rs.ExecSQL(szSQL);
	m_szoperaID.Empty();
	if(!rs.IsEOF()){
		rs.GetValue(_T("hpo_createdby"),  m_szCreatedBy); 
		m_szCreatedBy.MakeLower();

		rs.GetValue(_T("hpo_orderstatus"), m_szStatus);
		rs.GetValue(_T("hpo_storage_id"), m_nStockID);
		rs.GetValue(_T("hpo_feeid"), m_szoperaID);
		rs.GetValue(_T("hpo_advice"), m_szAdvice);
		rs.GetValue(_T("hpo_payment"), tmpStr);
		rs.GetValue(_T("hpo_doctor"), m_szDoctor);
		SetMode(VM_VIEW);
		CString szLabel;
		if(m_szStatus == _T("O")){
			TranslateString(_T("&Confirm"), szLabel);
			m_wndSend.SetWindowText(szLabel);
		}
		else
		{
			TranslateString(_T("&Disconfirm"), szLabel);
			m_wndSend.SetWindowText(szLabel);
		}


		if(tmpStr == _T("P"))
			m_wndSend.EnableWindow(false);
		OnDrugListLoadData();
	}
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.EnableWindow(true);
	}

	
}
void CHMSXPrescriptionDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSXPrescriptionDlg::SetDefaultValues(){

	m_szAdvice.Empty();

}
int CHMSXPrescriptionDlg::SetMode(int nMode){ 
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
			if(!m_wndPopup.IsWindowVisible())
			{
				m_wndPopup.ShowPopup(&m_wndList, WPS_BOTTOM);
				m_wndPopup.SetMode(VM_ADD);
			}

 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
			if(!m_wndPopup.IsWindowVisible())
			{
				m_wndPopup.ShowPopup(&m_wndList, WPS_BOTTOM);
				m_wndPopup.SetMode(VM_EDIT);
			}
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1);			
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
} 

int CHMSXPrescriptionDlg::OnOrderListSmartPrescription()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->IsActiveDocument())
		return 0;
	
	CHMSSmartPrescriptionDialog dlg(pMF);
	if(dlg.DoModal() == IDOK){
		OnOrderListLoadData();
	}
	return 0;
}
void CHMSXPrescriptionDlg::OnOrderListDblClick(){
	
} 
void CHMSXPrescriptionDlg::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderID = ToLong(m_wndOrderList.GetItemText(nNewItem, 0));
	OnDrugListLoadData();
	GetDataToScreen();
	m_wndPopup.ClosePopup();

} 

int CHMSXPrescriptionDlg::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL; 
	

	if(GetMode() != VM_VIEW)
		return -1;
/*
	if(m_wndList.GetItemCount() > 0){
		return -1;
	}
*/
	if(m_szCreatedBy != pMF->GetCurrentUser()){
		CString tmpStr, szMsg;
		TranslateString(_T("This is order created by an [%s]. Can not process it"), tmpStr);
		szMsg.Format(tmpStr, m_szCreatedBy);
		ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
		return -1;
	}

 	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not delete with current status."), MB_OK);
		return 0;
	}

	if(pMF->IsPaymentFee(_T("D"), m_nOrderID))
	{
		ShowMessageBox(_T("This order is payment. Can not delte it."), 0);
		return 0;
	}


 	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	
	szSQL.Format(_T("hms_pharma_xorder_delete(%ld,'%s') "), m_nOrderID, pMF->GetCurrentUser());
_fmsg(_T("%s"), szSQL);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret >=0)
	{
		OnOrderListLoadData();
		if(m_wndOrderList.GetItemCount() > 0)
		{
			m_wndOrderList.SetCurSel(0);
			GetDataToScreen();
		}
	}
	return 0;
} 
long CHMSXPrescriptionDlg::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, tmpStr, szStatusDesc;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0, i = 0;
	long nOrderID;
	szSQL.Format(_T("SELECT hpo_orderid,hpo_orderstatus,hpo_doctor,hpo_storage_id, hpo_orderdate, ") \
		_T("(select distinct pmsl_name from pms_stocklist where pmsl_stockid=hpo_storage_id) as stockname ") \
		_T("FROM hms_pharma_xorder ") \
		_T("WHERE hpo_docno=%ld AND hpo_deptid='%s' AND hpo_ordertype='P' ") \
		_T("ORDER BY hpo_orderid "), pMF->m_nDocumentNo, pMF->m_szDept);

	nCount = rs.ExecSQL(szSQL);
	_debug(_T("%s: %d"), szSQL, nCount);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hpo_orderid"), nOrderID);
		rs.GetValue(_T("hpo_orderstatus"), szStatus);
		if(nOrderID == m_nOrderID){
			i = m_wndOrderList.GetItemCount();
		}
		
		if(szStatus != _T("P"))
		{
			szStatusDesc = pMF->GetStatusString(szStatus);
		}
		else
		{
			TranslateString(_T("Paid"), szStatusDesc);
		}

		int nItem = m_wndOrderList.AddItems(
			rs.GetValue(_T("hpo_orderid")), 
			rs.GetValue(_T("hpo_orderdate")), 
			pMF->GetDoctorName(rs.GetValue(_T("hpo_doctor"))), 
			szStatusDesc, 
			rs.GetValue(_T("stockname")), 
			NULL);

		if(szStatus == _T("S"))
		{
			m_wndOrderList.SetItemBkColor(nItem, COLOR_TERMINATE, FALSE);
			m_wndOrderList.SetItemTextColor(nItem, RGB(255, 255, 0), FALSE);
		}
		else if(szStatus==_T("T"))
		{
			m_wndOrderList.SetItemBkColor(nItem, COLOR_TERMINATE, FALSE);
			m_wndOrderList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		}
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	m_wndList.DeleteAllItems();
	//m_wndOrderList.SetCurSel(i);
	return nCount;

}


void CHMSXPrescriptionDlg::OnDrugListEditDrugUsage(){
	CMainFrame *pMF  = (CMainFrame *) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	CString szText, szItemID;
	szText = m_wndList.GetItemText(nSel, 0);
	szItemID = m_wndList.GetItemText(nSel, 7);
	long nItemRefIdx = str2long(m_wndList.GetItemText(nSel,8));
	if(nItemRefIdx <= 0)
		return;

	if(!szItemID.IsEmpty())
		return;
	CHMSDrugUsageDialog dlg(this);
	dlg.m_szUsage = m_wndList.GetItemText(nSel, 1);
	if(dlg.DoModal() == IDOK){
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("UPDATE hms_pharma_xorder_line SET hpol_usage='%s' ") \
			_T("WHERE hpol_orderid=%ld AND hpol_itemrefidx=%ld"), dlg.m_szUsage, m_nOrderID, nItemRefIdx);
_debug(_T("\r\n%s"), szSQL);

		pMF->ExecSQL(szSQL);
		if(szText.IsEmpty())
			m_wndList.SetItemText(nSel, 1, dlg.m_szUsage);
		else
			OnDrugListLoadData();
	}
} 


void CHMSXPrescriptionDlg::OnDrugListDblClick(){
	OnListEditQuantityItem();
} 
void CHMSXPrescriptionDlg::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_wndPopup.ClosePopup();
} 
int CHMSXPrescriptionDlg::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(m_szStatus != _T("O"))
		return 0;
	if(m_szCreatedBy != pMF->GetCurrentUser())
		return -1;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	
 	
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	long nItemRefIdx  = str2long(m_wndList.GetItemText(nSel, 8));
	CString szItemID = m_wndList.GetItemText(nSel, 7);
	CString szSQL;
//	szSQL.Format(_T("SELECT hms_pharma_xorder_delline(%d, %ld, '%s', %ld) "), m_nStockID, m_nOrderID, szItemID, nItemRefIdx);
	
	szSQL.Format(_T("HMS_PHARMA_XORDER_DELLINE(%ld, %ld, '%s', %ld)"),
				pMF->m_nDocumentNo, m_nOrderID, szItemID, nItemRefIdx);

//_fmsg(_T("%s"), szSQL);
	int res = str2int(pMF->ExecDML(szSQL));
	if(res > 0)
	{
		OnDrugListLoadData();
		pMF->CreateFees(_T("D"));
		//pMF->SystemLog(_T("")));
	}
	else
	{
		ShowMessageBox(_T("Cannot delete item."));
	}
	return 0;
} 
long CHMSXPrescriptionDlg::OnDrugListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szUsage, tmpStr;
	int nIndex=1;
	double totalMoney = 0.0;
	if(m_nOrderID <= 0){
		m_wndList.DeleteAllItems();
		return 0;
	}
	m_wndList.BeginLoad(); 
	int nItem=0;


	if(pMF->m_bPrintSummarize){
		szSQL.Format(_T("SELECT hpol_itemrefidx as refidx, hpol_index, hpol_product_id, product_name, product_uomname, hpol_unitprice, ") \
			_T(" (SELECT sc_name FROM sys_country where sc_id=pmsi_countryid) as hpol_prodcountry, hfe_refstatus, ") \
			_T("	sum(hpol_orderqty) as hpol_orderqty, hpol_usage, ") \
			_T("	sum(hpol_unitprice*hpol_orderqty) as Money ") \
			_T(" FROM hms_pharma_xorder_line ") \
			_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
			_T(" WHERE hpol_orderid=%ld ") \
			_T(" GROUP BY hpol_itemrefidx, hpol_index, hpol_product_id,product_name, product_uomname, hpol_unitprice, pmsi_countryid, hpol_usage, hfe_refstatus ORDER BY hpol_index"), m_nOrderID);
	
	}
	else
	{
		szSQL.Format(_T("SELECT hpol_itemrefidx as refidx, hpol_index, hpol_product_id, product_name, product_uomname, ") \
			_T(" (SELECT sc_name FROM sys_country where sc_id=pmsi_countryid) as hpol_prodcountry, hfe_refstatus, ") \
			_T("	sum(hpol_orderqty) as hpol_orderqty, hpol_usage, ") \
			_T("	sum(hpol_unitprice*hpol_orderqty) as Money ") \
			_T(" FROM hms_pharma_xorder_line ") \
			_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
			_T(" WHERE hpol_orderid=%ld ") \
			_T(" GROUP BY hpol_itemrefidx, hpol_index, hpol_product_id,product_name, product_uomname, pmsi_countryid, hpol_usage, hfe_refstatus ORDER BY hpol_index"), m_nOrderID);
	}
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hpol_usage"), szUsage);
		double money;
		rs.GetValue(_T("Money"), money);
		totalMoney += money;
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("hpol_orderqty")), 
			rs.GetValue(_T("hpol_unitprice")), 
			rs.GetValue(_T("Money")),
			rs.GetValue(_T("hpol_prodcountry")), 
			rs.GetValue(_T("hpol_product_id")), 
			rs.GetValue(_T("refidx")),
			rs.GetValue(_T("hfe_refstatus")),
			NULL);
		if(!szUsage.IsEmpty() && m_szoperaID.IsEmpty())
		{
			nItem = m_wndList.AddItems(_T(""), 
				szUsage, 
				_T(""),
				_T(""),
				_T(""),
				_T(""),
				_T(""),
				_T(""), 
				rs.GetValue(_T("refidx")), 
				NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 5, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false ,true);
			m_wndList.SetItemBkColor(nItem, RGB(103, 134,214), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	if(totalMoney > 0)
	{
		CString tmpStr;		
		TranslateString(_T("Total Amount"), tmpStr);
		nItem = m_wndList.AddItems(_T("+"), tmpStr, _T(""), _T(""), _T(""), ToString((double)totalMoney), NULL);		
		m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
	}
	m_wndList.EndLoad(); 
	return nItem;

}
void CHMSXPrescriptionDlg::OnAddAdvice(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(m_nOrderID <= 0)
		return;
	if(m_szCreatedBy != pMF->GetCurrentUser()){
		CString tmpStr, szMsg;
		TranslateString(_T("This is order created by an [%s]. Can not process it"), tmpStr);
		szMsg.Format(tmpStr, m_szCreatedBy);
		ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
		return;
	}
	CHMSAdviceDialog dlg(this);
	dlg.m_nOrderID = m_nOrderID;
	if(dlg.DoModal() == IDOK){
		m_szAdvice = dlg.m_szAdvice;
		UpdateData(false);
	}
}
/*void CHMSXPrescriptionDlg::OnAdviceChange(){
	
} */
/*void CHMSXPrescriptionDlg::OnAdviceSetfocus(){
	
} */
/*void CHMSXPrescriptionDlg::OnAdviceKillfocus(){
	
} */


int CHMSXPrescriptionDlg::OnAdviceCheckValue(){
	return 0;
} 
void CHMSXPrescriptionDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->IsActiveDocument())
		return;

	if(!pMF->IsOutPatient())
	{
		if(pMF->GetTotalDepositAmount(pMF->m_nDocumentNo, _T("I")) < 0)
		{
			ShowMessageBox(_T("The total costs are greater than deposit amount. Required to pay deposit."));
			return;
		}
	}
	
	SetMode(VM_ADD);	

} 
void CHMSXPrescriptionDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListDeleteItem();
} 
void CHMSXPrescriptionDlg::OnSendSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szDoctor;
	CString szSQL, szStockType, szMsg,tmpStr;
	int nStockID;

	szDoctor = pMF->m_szDoctor;

	szSQL.Format(_T("SELECT hpo_storage_id, hpo_orderstatus, hpo_payment,hpo_createdby,hpo_doctor FROM hms_pharma_xorder WHERE hpo_orderid=%ld"), m_nOrderID);
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

	
	if(m_szCreatedBy != pMF->GetCurrentUser() && pMF->GetCurrentUser() != _T("admin"))
	{
		TranslateString(_T("This is order created by an [%s]. Can not process it"), tmpStr);
		szMsg.Format(tmpStr, m_szCreatedBy);
		ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
		return;
	}
	if(!pMF->IsActiveDocument())
		return;

	
	szSQL.Format(_T("select count(*) from hms_pharma_xorder_line where hpol_orderid=%ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
		return;
	
	szSQL.Format(_T("SELECT pmsl_type FROM pms_stocklist WHERE pmsl_stockid =%d "), nStockID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("pmsl_type"), szStockType);

	if(m_szStatus != _T("O") && m_szStatus != _T("S") && szStockType != _T("C")){
		ShowMessageBox(_T("Can not manipulate with current status. "), 0);
		return;
	}

	//Kiem tra neu thuoc lay tu tu truc va duoc tao phieu tra lai roi thi ko bo xac nhan duoc.
	if(szStockType == _T("C"))
	{
		if(m_szStatus == _T("I"))
		{
			szSQL.Format(_T("select count(*) from hms_pharma_xorder_line where hpol_orderid=%ld and (hpol_return='Y' or hpol_status in('S','A','I') ) "), m_nOrderID);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() > 0)
			{
				ShowMessageBox(_T("Benh nhan da duoc tao phieu bo sung bu lai tu truc. Khong huy xac nhan duoc"));
				return;
			}
		}
	}
	if(pMF->m_bConfirm)
	{
		CHMSConfirmDialog dlg;
		if(!m_szDoctor.IsEmpty())
			dlg.m_szDoctor = m_szDoctor;
		else
			dlg.m_szDoctor = pMF->m_szDoctor;
		if(m_szStatus != _T("O"))
			dlg.SetMode(VM_EDIT);

		if(dlg.DoModal() != IDOK)
			return;
		szDoctor = dlg.m_szDoctor;
	}
	CString szLabel;
	pMF->BeginTransaction();


	if(m_szStatus == _T("O"))
	{
		TranslateString(_T("&Disconfirm"), szLabel);
		szSQL.Format(_T("UPDATE hms_pharma_xorder SET hpo_orderstatus='S', hpo_doctor='%s' WHERE hpo_orderid=%ld AND hpo_orderstatus='O' and hpo_ordertype='P' "),
			szDoctor, m_nOrderID);
		pMF->ExecSQL(szSQL);

		if(szStockType == _T("C"))
		{
			szSQL.Format(_T(" HMS_PHARMA_XORDER_APPROVAL(%ld, '%s') "), m_nOrderID, pMF->GetCurrentUser());
			pMF->ExecDML(szSQL);			
		}
	}
	else 
	{
		TranslateString(_T("&Confirm"), szLabel);		
		if(szStockType == _T("C")){

			szSQL.Format(_T("SELECT hms_pharma_xorder_rollback(%ld) "), m_nOrderID);
			pMF->ExecSQL(szSQL);
		}
	//	if(pMF->m_szAllowCancelPrescriptionOrder == _T("Y"))
		{
			szSQL.Format(_T("UPDATE hms_pharma_xorder SET hpo_orderstatus='O' WHERE hpo_orderid=%ld AND hpo_orderstatus='S' and hpo_ordertype='P' "),  m_nOrderID);

			pMF->ExecSQL(szSQL);
		}
		
	}
	pMF->Commit();
	/*pMF->CreateFees(_T("D"));*/
	szSQL.Format(_T("SELECT hpo_orderstatus FROM hms_pharma_xorder WHERE hpo_orderid=%ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderstatus"), m_szStatus);
	m_wndSend.SetWindowText(szLabel);
	RefreshData();	
} 
void CHMSXPrescriptionDlg::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(m_szStatus != _T("O"))
		pMF->PrintPrescription(m_nOrderID);
	else
		ShowMessageBox(_T("Request confirm before print"));
} 
void CHMSXPrescriptionDlg::OnPrintPreview(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(m_szStatus != _T("O"))
		pMF->PrintPrescription(m_nOrderID, true);
	else
		ShowMessageBox(_T("Request confirm before print"));
}

void CHMSXPrescriptionDlg::OnPrintPreviewDeliveryOrder(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(m_szStatus != _T("O"))
		pMF->PrintDrugDelivery(m_nOrderID, true);
	else
	{
		ShowMessageBox(_T("Request confirm before print"));
	}
}

int CHMSXPrescriptionDlg::OnAddHMSPrescription(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT) 
		OnAddSelect();
 	/*	return -1; 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 


	 	
 	SetMode(VM_ADD);*/
return 0; 
 
} 
int CHMSXPrescriptionDlg::OnEditHMSPrescription(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSXPrescriptionDlg::OnDeleteHMSPrescription(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	if(GetMode() != VM_VIEW) 
 		return -1; 

	if(m_szCreatedBy != pMF->GetCurrentUser()){
		CString tmpStr, szMsg;
		TranslateString(_T("This is order created by an [%s]. Can not process it"), tmpStr);
		szMsg.Format(tmpStr, m_szCreatedBy);
		ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
		return -1;
	}

 	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not delete with current status."), MB_OK);
		return 0;
	}

	if(pMF->IsPaymentFee(_T("D"), m_nOrderID))
		return 0;


 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSPrescription(); 
		//pMF->CreateFees(_T("D"));
 	}
return 0;
 } 
int CHMSXPrescriptionDlg::OnSaveHMSPrescription(){
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
 		//OnHMSPrescriptionListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSXPrescriptionDlg::OnCancelHMSPrescription(){
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
int CHMSXPrescriptionDlg::OnHMSPrescriptionListLoadData(){
	return 0;
}


void CHMSXPrescriptionDlg::RefreshData(){
	HidePopup();
	OnOrderListLoadData();	
	m_szAdvice.Empty();
	if(m_wndOrderList.GetItemCount() > 0){
		m_wndOrderList.SetCurSel(0);
	}

	SetMode(VM_VIEW);
}



void CHMSXPrescriptionDlg::OnAddExternalPrescription(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CHMSExternalPrescriptionDialog dlg(this);
	dlg.m_nDocumentNo = pMF->m_nDocumentNo;
	dlg.m_nReceptIdx = pMF->m_nRefIndex;
	dlg.DoModal();
}
#include "GuiInputDataDialog.h"
int CHMSXPrescriptionDlg::OnListEditQuantityItem()
{
	CMainFrame *pMF  = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;

	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;

	CString szText, szItemID, szFeeStatus;
	szItemID = m_wndList.GetItemText(nSel, 7);
	szFeeStatus = m_wndList.GetItemText(nSel, 9);

	if(szFeeStatus == _T("P"))
	{
		ShowMessageBox(_T("This order is payment fee. Cannot edit"));
		return -1;
	}

	long nItemRefIdx = str2long(m_wndList.GetItemText(nSel,8));
	if (nItemRefIdx <= 0 || szItemID.IsEmpty())
		return 0;

	CGuiInputDataDialog dlg(this, true);
	dlg.m_nNumberValue = str2int(m_wndList.GetItemText(nSel, 3));
	dlg.m_nMax = str2int(m_wndList.GetItemText(nSel, 3));
	if(dlg.DoModal()==IDOK)
	{
		if (pMF->CheckPermission(_T("05.09")))
		{
			szSQL.Format(_T("HMS_PHARMA_XORDER_EDITQTY1(%ld, %ld, '%s', %ld, %d)"),
						 pMF->m_nDocumentNo, m_nOrderID, szItemID, nItemRefIdx, (int)dlg.GetNumberValue());
		}
		else
		{
			szSQL.Format(_T("HMS_PHARMA_XORDER_EDITQTY(%ld, %ld, '%s', %ld, %d)"),
					     pMF->m_nDocumentNo, m_nOrderID, szItemID, nItemRefIdx, (int)dlg.GetNumberValue());
		}
		int ret = str2int(pMF->ExecDML(szSQL));
		if (ret < 0)
		{
			ShowMessageBox(_T("Cannot edit quantity"));
		}
		else
		{
			OnDrugListLoadData();					
		}	
	}


	return 0;
}
int CHMSXPrescriptionDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString szItemID = m_wndList.GetItemText(nSel, 7);
	long nItemRefIdx = str2long(m_wndList.GetItemText(nSel, 8));
	if(szItemID.IsEmpty() || nItemRefIdx <= 0)
		return 0;
	CString szSQL;
	
	int retMsg = ShowMessageBox(_T("Do you want to delete item?(Y/N"), MB_YESNO);
	if(retMsg == IDNO)
		return 0;
	szSQL.Format(_T("HMS_PHARMA_XORDER_DELLINE(%ld, %ld, '%s', %ld)"),
				pMF->m_nDocumentNo, m_nOrderID, szItemID, nItemRefIdx);
_fmsg(_T("%s"), szSQL);
	int res = str2int(pMF->ExecDML(szSQL));
	if(res > 0)
	{
		OnDrugListLoadData();
		if(m_wndList.GetItemCount()==0)
			OnOrderListLoadData();
	}
	 return 0;
} 

int CHMSXPrescriptionDlg::OnOldPrescriprion(){

	return 0;
}

int CHMSXPrescriptionDlg::OnPrescriptionApproved()
{
	int nSel = m_wndOrderList.GetCurSel();
	if (nSel < 0)
		return -1;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	long nOrderID;
	pMF->BeginTransaction();
	nOrderID = ToLong(m_wndOrderList.GetItemText(nSel, 0));
	szSQL.Format(_T(" HMS_PHARMA_XORDER_APPROVAL(%ld, '%s') "), nOrderID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if (ret < 0)
	{
		ShowMessageBox(_T("Can not approve prescription!"), MB_ICONERROR | MB_OK);
		pMF->Rollback();
	}
	else
	{
		pMF->Commit();
		m_wndOrderList.SetCurSel(nSel);
	}
	return ret;
}
void CHMSXPrescriptionDlg::ShowPopup()
{
	SetMode(VM_ADD);	
}

void CHMSXPrescriptionDlg::HidePopup()
{
	m_wndPopup.ClosePopup();
}

void CHMSXPrescriptionDlg::OnAfterClosePopup(){
	int nMode = GetMode();
	if(nMode == VM_EDIT)
		SetMode(VM_VIEW);
	else
		SetMode(VM_NONE);

}

BOOL CHMSXPrescriptionDlg::PreTranslateMessage(MSG *pMsg)
{
	if (pMsg->message == WM_KEYDOWN)
	{
		int nMode = GetMode();
		if(nMode == VM_ADD || nMode == VM_EDIT){
			return CGuiDialog::PreTranslateMessage(pMsg);
		}
		switch (pMsg->wParam)
		{
			case VK_F5:
				OnPrintPreview();
				break;
			case VK_F6:
				OnPrintPreviewDeliveryOrder();
				break;
			case VK_F7:
				OnOrderListSmartPrescription();
				break;
			case VK_F8:
				OnOldPrescriprion();
				break;
			case VK_F9:
				OnAddAdvice();
				break;
			case VK_F10:
				OnAddExternalPrescription();
				break;
		}
	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}