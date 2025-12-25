#include "HMSBloodOrderDialog.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSBloodOrderDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSBloodOrderDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSBloodOrderDialog*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSBloodOrderDialog *)pWnd)->OnOrderIDCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBloodOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnBloodGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBloodOrderDialog* )pWnd)->OnBloodGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBloodGroupSelendokFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnBloodGroupSelendok();
}
/*static void _OnBloodGroupSetfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnBloodGroupKillfocus();
}*/
/*static void _OnBloodGroupKillfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnBloodGroupKillfocus();
}*/
static long _OnBloodGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSBloodOrderDialog *)pWnd)->OnBloodGroupLoadData();
}
/*static void _OnBloodGroupAddNewFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnBloodGroupAddNew();
}*/
/*static void _OnTransfusionNumberChangeFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnTransfusionNumberChange();
} */
/*static void _OnTransfusionNumberSetfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnTransfusionNumberSetfocus();} */ 
/*static void _OnTransfusionNumberKillfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnTransfusionNumberKillfocus();
} */
static int _OnTransfusionNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSBloodOrderDialog *)pWnd)->OnTransfusionNumberCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSBloodOrderDialog *)pWnd)->OnReasonCheckValue();
} 
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBloodOrderDialog* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSBloodOrderDialog *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnItemAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSBloodOrderDialog *)pWnd)->OnQtyCheckValue();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CHMSBloodOrderDialog *pVw = (CHMSBloodOrderDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSBloodOrderDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSBloodOrderDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSBloodOrderDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSBloodOrderDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSBloodOrderDialog *pVw = (CHMSBloodOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSBloodOrderDialog *pVw = (CHMSBloodOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSBloodOrderDialog *pVw = (CHMSBloodOrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSBloodOrderDialog *pVw = (CHMSBloodOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSBloodOrderDialog *pVw = (CHMSBloodOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSBloodOrderDialog *pVw = (CHMSBloodOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSBloodOrderDialog *pVw = (CHMSBloodOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSBloodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSBloodOrderDialog*)pWnd)->OnAddHMSBloodOrderDialog();
} 
static int _OnEditHMSBloodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSBloodOrderDialog*)pWnd)->OnEditHMSBloodOrderDialog();
} 
static int _OnDeleteHMSBloodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSBloodOrderDialog*)pWnd)->OnDeleteHMSBloodOrderDialog();
} 
static int _OnSaveHMSBloodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSBloodOrderDialog*)pWnd)->OnSaveHMSBloodOrderDialog();
} 
static int _OnCancelHMSBloodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSBloodOrderDialog*)pWnd)->OnCancelHMSBloodOrderDialog();
} 
CHMSBloodOrderDialog::CHMSBloodOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSBloodOrderDialog::~CHMSBloodOrderDialog(){
}
void CHMSBloodOrderDialog::OnCreateComponents(){
	m_wndOrderList.Create(this,5, 5, 595, 205); 
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 6, 210, 126, 235);
	m_wndOrderID.Create(this,131, 210, 231, 235); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 335, 210, 455, 235);
	m_wndOrderDate.Create(this,460, 210, 595, 235); 
	m_wndBloodGroupLabel.Create(this, _T("Blood Group"), 5, 240, 125, 265);
	m_wndBloodGroup.Create(this,130, 240, 330, 265); 
	m_wndTransfusionNumberLabel.Create(this, _T("Transfusion Number"), 335, 240, 455, 265);
	m_wndTransfusionNumber.Create(this,460, 240, 595, 265); 
	m_wndReasonLabel.Create(this, _T("Reason"), 5, 270, 125, 295);
	m_wndReason.Create(this,130, 270, 595, 295); 
	m_wndItemLabel.Create(this, _T("Blood Item"), 5, 300, 125, 325);
	m_wndItem.Create(this,130, 300, 330, 325); 
	m_wndQtyLabel.Create(this, _T("Qty"), 335, 300, 455, 325);
	m_wndQty.Create(this,460, 300, 520, 325); 
	m_wndAddLine.Create(this, _T("Add Line"), 525, 300, 595, 325);
	m_wndList.Create(this,5, 330, 595, 450); 
	m_wndAdd.Create(this, _T("&Add"), 5, 455, 85, 480);
	m_wndEdit.Create(this, _T("&Edit"), 90, 455, 170, 480);
	m_wndDelete.Create(this, _T("&Delete"), 175, 455, 255, 480);
	m_wndSave.Create(this, _T("&Save"), 260, 455, 340, 480);
	m_wndCancel.Create(this, _T("Cancel"), 345, 455, 425, 480);
	m_wndPrint.Create(this, _T("&Print"), 430, 455, 510, 480);
	m_wndClose.Create(this, _T("&Close"), 515, 455, 595, 480);

}
void CHMSBloodOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderID.SetLimitText(22);
	m_wndOrderID.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndBloodGroup.SetCheckValue(true);
	m_wndBloodGroup.LimitText(3);
	m_wndTransfusionNumber.SetLimitText(22);
	m_wndTransfusionNumber.SetCheckValue(true);
	m_wndReason.SetLimitText(128);
	m_wndReason.SetCheckValue(true);
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(35);
	m_wndQty.SetLimitText(16);
	m_wndQty.SetCheckValue(true);


	m_wndOrderList.InsertColumn(0, _T("Order Id"), CFMT_NUMBER, 70);
	m_wndOrderList.InsertColumn(1, _T("Order Date"), CFMT_DATETIME, 120);
	m_wndOrderList.InsertColumn(2, _T("Barcode"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(3, _T("Tranfusion"), CFMT_NUMBER, 30);
	m_wndOrderList.InsertColumn(4, _T("Reason"), CFMT_TEXT, 200);
	m_wndOrderList.InsertColumn(5, _T("Createdby"), CFMT_TEXT, 80);


	m_wndBloodGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBloodGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);
	m_wndList.InsertColumn(2, _T("Qty"), CFMT_NUMBER, 50);
	m_hms_blood_orderTbl.SetTableName(_T("hms_blood_order"));
	m_hms_blood_orderTbl.AddField(_T("HBO_ORDERID"), dfLong); 
	m_hms_blood_orderTbl.AddField(_T("HBO_CREATEDBY"), dfText, 15); 
	m_hms_blood_orderTbl.AddField(_T("HBO_CREATEDATE"), dfDateTime); 
	m_hms_blood_orderTbl.AddField(_T("HBO_UPDATEDBY"), dfText, 15); 
	m_hms_blood_orderTbl.AddField(_T("HBO_UPDATEDDATE"), dfDateTime); 
	m_hms_blood_orderTbl.AddField(_T("HBO_ORG_ID"), dfText, 15); 
	m_hms_blood_orderTbl.AddField(_T("HBO_CLIENT_ID"), dfText, 15); 
	m_hms_blood_orderTbl.AddField(_T("HBO_DEPTID"), dfText, 7); 
	m_hms_blood_orderTbl.AddField(_T("HBO_HTRIDX"), dfLong); 
	m_hms_blood_orderTbl.AddField(_T("HBO_TREATTIME"), dfLong); 
	m_hms_blood_orderTbl.AddField(_T("HBO_TREATIDX"), dfLong); 
	m_hms_blood_orderTbl.AddField(_T("HBO_DOCNO"), dfLong); 
	m_hms_blood_orderTbl.AddField(_T("HBO_BARCODE"), dfLong); 
	m_hms_blood_orderTbl.AddField(_T("HBO_ORDERDATE"), dfDateTime); 
	m_hms_blood_orderTbl.AddField(_T("HBO_POSTEDDATE"), dfDateTime); 
	m_hms_blood_orderTbl.AddField(_T("HBO_STATUS"), dfText, 1); 
	m_hms_blood_orderTbl.AddField(_T("HBO_DOCTOR"), dfText, 15); 
	m_hms_blood_orderTbl.AddField(_T("HBO_REASON"), dfText, 128); 
	m_hms_blood_orderTbl.AddField(_T("HBO_BLOOD_TYPE"), dfText, 3); 
	m_hms_blood_orderTbl.AddField(_T("HBO_TRANSFUSIONS_NUMBER"), dfLong); 
	m_hms_blood_orderTbl.AddField(_T("HBO_SAMPLER"), dfText, 15); 
	m_hms_blood_orderTbl.AddField(_T("HBO_SAMPLER_DATE"), dfDateTime); 
	m_hms_blood_orderTbl.AddField(_T("HBO_RECIPIENT"), dfText, 15); 
	m_hms_blood_orderTbl.AddField(_T("HBO_RECIPIENT_DATE"), dfDateTime); 
	m_hms_blood_orderTbl.AddField(_T("HBO_SAMPLE_TYPE"), dfText, 32); 
	m_hms_blood_orderTbl.AddField(_T("HBO_SAMPLE_STATE"), dfText, 32); 
	m_hms_blood_orderTbl.AddField(_T("HBO_APPROVEDBY"), dfText, 15); 
	m_hms_blood_orderTbl.AddField(_T("HBO_APPROVED_DATE"), dfDateTime); 
	m_hms_blood_orderTbl.AddField(_T("HBO_APPROVED_STATE"), dfText, 1); 
	m_hms_blood_orderTbl.AddField(_T("HBO_REF_ORDERID"), dfLong); 
	m_hms_blood_orderTbl.AddField(_T("HBO_EMERGENCY"), dfText, 1); 
	m_hms_blood_orderTbl.AddField(_T("HBO_CLASS"), dfText, 1); 
	m_hms_blood_orderTbl.AddField(_T("HBO_ROOMID"), dfLong); 
	m_hms_blood_orderTbl.AddField(_T("HBO_PATIENTNO"), dfLong); 
	m_hms_blood_orderTbl.AddField(_T("HBO_LAB_POSTED"), dfText, 1); 
	m_hms_blood_orderTbl.AddField(_T("HBO_GROUPID"), dfText, 15); 
	m_hms_blood_orderTbl.AddField(_T("HBO_OBJECT"), dfLong); 

}
void CHMSBloodOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndOrderID.SetEvent(WE_CHANGE, _OnOrderIDChangeFnc);
	//m_wndOrderID.SetEvent(WE_SETFOCUS, _OnOrderIDSetfocusFnc);
	//m_wndOrderID.SetEvent(WE_KILLFOCUS, _OnOrderIDKillfocusFnc);
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndBloodGroup.SetEvent(WE_SELENDOK, _OnBloodGroupSelendokFnc);
	//m_wndBloodGroup.SetEvent(WE_SETFOCUS, _OnBloodGroupSetfocusFnc);
	//m_wndBloodGroup.SetEvent(WE_KILLFOCUS, _OnBloodGroupKillfocusFnc);
	m_wndBloodGroup.SetEvent(WE_SELCHANGE, _OnBloodGroupSelectChangeFnc);
	m_wndBloodGroup.SetEvent(WE_LOADDATA, _OnBloodGroupLoadDataFnc);
	//m_wndBloodGroup.SetEvent(WE_ADDNEW, _OnBloodGroupAddNewFnc);
	//m_wndTransfusionNumber.SetEvent(WE_CHANGE, _OnTransfusionNumberChangeFnc);
	//m_wndTransfusionNumber.SetEvent(WE_SETFOCUS, _OnTransfusionNumberSetfocusFnc);
	//m_wndTransfusionNumber.SetEvent(WE_KILLFOCUS, _OnTransfusionNumberKillfocusFnc);
	m_wndTransfusionNumber.SetEvent(WE_CHECKVALUE, _OnTransfusionNumberCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSBloodOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndBloodGroup.GetDlgCtrlID(), m_szBloodGroupKey);
	DDX_Text(pDX, m_wndTransfusionNumber.GetDlgCtrlID(), m_nTransfusionNumber);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);

}
void CHMSBloodOrderDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("OrderID")] =  m_nOrderID;
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("BloodGroup")] =  m_szBloodGroupKey;
	m_jData[_T("TransfusionNumber")] =  m_nTransfusionNumber;
	m_jData[_T("Reason")] =  m_szReason;
	m_jData[_T("Item")] =  m_szItemKey;
	m_jData[_T("Qty")] =  m_nQty;
	}
	else
	{
			
	m_jData[_T("OrderID")].GetValue(m_nOrderID);
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("BloodGroup")].GetValue(m_szBloodGroupKey);
	m_jData[_T("TransfusionNumber")].GetValue(m_nTransfusionNumber);
	m_jData[_T("Reason")].GetValue(m_szReason);
	m_jData[_T("Item")].GetValue(m_szItemKey);
	m_jData[_T("Qty")].GetValue(m_nQty);
	}

}
void CHMSBloodOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HBO_ORDERID"), m_nOrderID);
	rs.GetValue(_T("HBO_ORDERDATE"), m_szOrderDate);
	rs.GetValue(_T("HBO_REASON"), m_szReason);
	rs.GetValue(_T("HBO_BLOOD_TYPE"), m_szBloodGroupKey);
	rs.GetValue(_T("HBO_TRANSFUSIONS_NUMBER"), m_nTransfusionNumber);

}
void CHMSBloodOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_blood_orderTbl.SetValue(_T("HBO_ORDERID"), m_nOrderID);
	m_hms_blood_orderTbl.SetValue(_T("HBO_ORDERDATE"), m_szOrderDate);
	m_hms_blood_orderTbl.SetValue(_T("HBO_REASON"), m_szReason);
	m_hms_blood_orderTbl.SetValue(_T("HBO_BLOOD_TYPE"), m_szBloodGroupKey);
	m_hms_blood_orderTbl.SetValue(_T("HBO_TRANSFUSIONS_NUMBER"), m_nTransfusionNumber);

}
void CHMSBloodOrderDialog::SetDefaultValues(){

	m_nOrderID=0;
	m_szOrderDate.Empty();
	m_szBloodGroupKey.Empty();
	m_nTransfusionNumber=0;
	m_szReason.Empty();
	m_szItemKey.Empty();
	m_nQty=0;

}
int CHMSBloodOrderDialog::SetMode(int nMode){
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
void CHMSBloodOrderDialog::OnOrderListDblClick(){
	
} 
void CHMSBloodOrderDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSBloodOrderDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSBloodOrderDialog::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("OrderId")), 
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("Barcode")), 
			rs.GetValue(_T("Tranfusion")), 
			rs.GetValue(_T("Reason")), 
			rs.GetValue(_T("Createdby")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSBloodOrderDialog::OnOrderIDChange(){
	
} */
/*void CHMSBloodOrderDialog::OnOrderIDSetfocus(){
	
} */
/*void CHMSBloodOrderDialog::OnOrderIDKillfocus(){
	
} */
int CHMSBloodOrderDialog::OnOrderIDCheckValue(){
	return 0;
} 
/*void CHMSBloodOrderDialog::OnOrderDateChange(){
	
} */
/*void CHMSBloodOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSBloodOrderDialog::OnOrderDateKillfocus(){
	
} */
int CHMSBloodOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSBloodOrderDialog::OnBloodGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBloodOrderDialog::OnBloodGroupSelendok(){
	 
}
/*void CHMSBloodOrderDialog::OnBloodGroupSetfocus(){
	
}*/
/*void CHMSBloodOrderDialog::OnBloodGroupKillfocus(){
	
}*/
long CHMSBloodOrderDialog::OnBloodGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBloodGroup.IsSearchKey() && !m_szBloodGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBloodGroupKey
};
	m_wndBloodGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBloodGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBloodOrderDialog::OnBloodGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSBloodOrderDialog::OnTransfusionNumberChange(){
	
} */
/*void CHMSBloodOrderDialog::OnTransfusionNumberSetfocus(){
	
} */
/*void CHMSBloodOrderDialog::OnTransfusionNumberKillfocus(){
	
} */
int CHMSBloodOrderDialog::OnTransfusionNumberCheckValue(){
	return 0;
} 
/*void CHMSBloodOrderDialog::OnReasonChange(){
	
} */
/*void CHMSBloodOrderDialog::OnReasonSetfocus(){
	
} */
/*void CHMSBloodOrderDialog::OnReasonKillfocus(){
	
} */
int CHMSBloodOrderDialog::OnReasonCheckValue(){
	return 0;
} 
void CHMSBloodOrderDialog::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBloodOrderDialog::OnItemSelendok(){
	 
}
/*void CHMSBloodOrderDialog::OnItemSetfocus(){
	
}*/
/*void CHMSBloodOrderDialog::OnItemKillfocus(){
	
}*/
long CHMSBloodOrderDialog::OnItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemKey
};
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBloodOrderDialog::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSBloodOrderDialog::OnQtyChange(){
	
} */
/*void CHMSBloodOrderDialog::OnQtySetfocus(){
	
} */
/*void CHMSBloodOrderDialog::OnQtyKillfocus(){
	
} */
int CHMSBloodOrderDialog::OnQtyCheckValue(){
	return 0;
} 
void CHMSBloodOrderDialog::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBloodOrderDialog::OnListDblClick(){
	
} 
void CHMSBloodOrderDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSBloodOrderDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSBloodOrderDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Idx")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Qty")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSBloodOrderDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBloodOrderDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBloodOrderDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBloodOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBloodOrderDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBloodOrderDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBloodOrderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSBloodOrderDialog::OnAddHMSBloodOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSBloodOrderDialog::OnEditHMSBloodOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSBloodOrderDialog::OnDeleteHMSBloodOrderDialog(){
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
 		OnCancelHMSBloodOrderDialog();
 	}
	return 0;
}
int CHMSBloodOrderDialog::OnSaveHMSBloodOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_blood_orderTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_blood_orderTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSBloodOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSBloodOrderDialog::OnCancelHMSBloodOrderDialog(){
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
int CHMSBloodOrderDialog::OnHMSBloodOrderDialogListLoadData(){
	return 0;
}
