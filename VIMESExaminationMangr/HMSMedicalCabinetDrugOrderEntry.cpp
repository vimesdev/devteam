#include "HMSMedicalCabinetDrugOrderEntry.h"
#include "MainFrm.h"
#include "HMSMedicalCabinetDrug.h"

static void _OnDocumentNoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetDrugOrderEntry* )pWnd)->OnDocumentNoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDocumentNoSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnDocumentNoSelendok();
}
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnDocumentNoKillfocus();
}*/
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnDocumentNoKillfocus();
}*/
static long _OnDocumentNoLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnDocumentNoLoadData();
}
/*static void _OnDocumentNoAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnDocumentNoAddNew();
}*/
static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOrderDateChange();
} 
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetDrugOrderEntry* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnTypeLoadData();
}

static void _OnTypeCheckValueFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnTypeCheckValue();
}

/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnObjectCheckValue();
} 
static void _OnOperationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetDrugOrderEntry* )pWnd)->OnOperationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOperationSelendok();
}
/*static void _OnOperationSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOperationKillfocus();
}*/
/*static void _OnOperationKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOperationKillfocus();
}*/
static long _OnOperationLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOperationLoadData();
}
/*static void _OnOperationAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnOperationAddNew();
}*/
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetDrugOrderEntry* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnNameAddNew();
}*/
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnUomCheckValue();
} 
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnMaxQuantityCheckValue();
} 

static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrugOrderEntry *pVw = (CHMSMedicalCabinetDrugOrderEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrugOrderEntry *pVw = (CHMSMedicalCabinetDrugOrderEntry *)pWnd;
	pVw->OnCloseSelect();
}


static void _OnDateSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrugOrderEntry *pVw = (CHMSMedicalCabinetDrugOrderEntry *)pWnd;
	pVw->OnDateSelect();
}

static int _OnAddHMSMedicalCabinetDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugOrderEntry*)pWnd)->OnAddHMSMedicalCabinetDrugOrderEntry();
} 
static int _OnEditHMSMedicalCabinetDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugOrderEntry*)pWnd)->OnEditHMSMedicalCabinetDrugOrderEntry();
} 
static int _OnDeleteHMSMedicalCabinetDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugOrderEntry*)pWnd)->OnDeleteHMSMedicalCabinetDrugOrderEntry();
} 
static int _OnSaveHMSMedicalCabinetDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugOrderEntry*)pWnd)->OnSaveHMSMedicalCabinetDrugOrderEntry();
} 
static int _OnCancelHMSMedicalCabinetDrugOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrugOrderEntry*)pWnd)->OnCancelHMSMedicalCabinetDrugOrderEntry();
} 


static int _OnDayNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrugOrderEntry *)pWnd)->OnDayNumberCheckValue();
}

CHMSMedicalCabinetDrugOrderEntry::CHMSMedicalCabinetDrugOrderEntry(CWnd *pParent, int nMode):
CGuiPopup(pParent)
{
	CGuiPopup::SetMode(nMode);
	
	m_nDlgWidth = 960;
	m_nDlgHeight = 100;
	SetDefaultValues();
	m_szDocumentNoKey.Empty();
	m_szOrderDate.Empty();
	m_pWndOrder = pParent;
	m_szTypeKey = _T("CP");
	m_nDayNumber = 1;

}
CHMSMedicalCabinetDrugOrderEntry::~CHMSMedicalCabinetDrugOrderEntry(){
}
void CHMSMedicalCabinetDrugOrderEntry::OnCreateComponents(){
	m_wndDocumentNoLabel.Create(this, _T("Patient Name"), 5, 5, 105, 30);
	m_wndDocumentNo.Create(this,110, 5, 420, 30); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 425, 5, 504, 30);
	m_wndOrderDate.Create(this,509, 5, 599, 30); 
	m_wndTypeLabel.Create(this, _T("Type"), 604, 5, 683, 30);
	m_wndType.Create(this,688, 5, 788, 30); 
	m_wndDayNumberLabel.Create(this, _T("Number of day"), 793, 5, 903, 30);
	m_wndDayNumber.Create(this,908, 5, 958, 30); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 35, 105, 60);
	m_wndName.Create(this,110, 35, 599, 60); 
	m_wndQtyLabel.Create(this, _T("Qty"), 604, 35, 683, 60);
	m_wndQty.Create(this,688, 35, 788, 60); 
	m_wndMaxQuantityLabel.Create(this, _T("Max Qty"), 793, 35, 903, 60);
	m_wndMaxQuantity.Create(this,908, 35, 958, 60); 
	m_wndDescription.Create(this, _T("Description"), 5, 65, 790, 90);
	m_wndSave.Create(this, _T("&Save"), 831, 65, 906, 90);
	m_wndClose.Create(this, _T("X"), 911, 65, 961, 90);

	m_wndOperationLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndOperationLabel.ShowWindow(SW_HIDE);
	m_wndOperationLabel.EnableWindow(FALSE);
	m_wndOperation.Create(this, 0, 0, 0, 0);
	m_wndOperation.ShowWindow(SW_HIDE);
	m_wndOperation.EnableWindow(FALSE);
	m_wndDateButton.Create(this, _T(""), 0, 0, 0, 0);
	m_wndDateButton.ShowWindow(SW_HIDE);
	m_wndDateButton.EnableWindow(FALSE);

}
void CHMSMedicalCabinetDrugOrderEntry::OnInitializeComponents(){
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndQty.SetCheckValue(true);
	m_wndQty.SetLimitText(6);
	m_wndQty.SetNumberDecimal(0);

	m_wndMaxQuantity.SetLimitText(16);
	m_wndMaxQuantity.SetCheckValue(true);
	m_wndMaxQuantity.SetCurrencyFormat(true);
	m_wndMaxQuantity.SetReadOnly(TRUE);	

	m_wndOrderDate.SetCheckValue(TRUE);
//	m_wndDayNumber.SetReadOnly(true);
	m_wndDocumentNo.InsertColumn(0, _T("ID"), CFMT_NUMBER, 85);
	m_wndDocumentNo.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndDocumentNo.InsertColumn(2, _T("Age"), CFMT_TEXT, 50);
	m_wndDocumentNo.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndDocumentNo.InsertColumn(4, _T("Object"), CFMT_TEXT, 150);
	m_wndDocumentNo.InsertColumn(5, _T("patientno"), CFMT_NUMBER, 0);
	m_wndDocumentNo.InsertColumn(6, _T("Refindex"), CFMT_NUMBER, 0);
	m_wndDocumentNo.InsertColumn(7, _T("objectid"), CFMT_NUMBER, 0);


	m_wndName.InsertColumn(0, _T(""), CFMT_TEXT, 0); //refidx
	m_wndName.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 400);
	m_wndName.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndName.InsertColumn(3, _T("Unit Price"), CFMT_MONEY, 0);
	m_wndName.InsertColumn(4, _T("Generic"), CFMT_TEXT, 150);
	m_wndName.InsertColumn(5, _T("OnHand"), CFMT_MONEY, 70);
	m_wndName.InsertColumn(6, _T("Product Country"), CFMT_TEXT, 100);
	m_wndName.InsertColumn(7, _T("Original"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(8, _T("precision"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(9, _T("storage_id"), CFMT_NUMBER, 50);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50); //refidx
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

//	m_wndOperation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50); //refidx
//	m_wndOperation.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	
	m_hms_ipharmaorderTbl.SetTableName(_T("hms_ipharmaorder"));
	
/*	m_hms_ipharmaorderTbl.AddField(_T("hpo_org_id"), dfText, 3); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_user_id"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_storage_id"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_refidx"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_bedid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_object_id"), dfInteger);
	m_hms_ipharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 1); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_storage_id"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_scaledrug"), dfInteger);
	m_hms_ipharmaorderTbl.AddField(_T("hpo_reference_id"), dfLong );
	m_hms_ipharmaorderTbl.AddField(_T("hpo_feetype"), dfText, 2);
	
	
	
	m_hms_ipharmaorder_lineTbl.SetTableName(_T("hms_ipharmaorder_line"));
//	m_hms_ipharmaorder_lineTbl.AddField(_T("hpol_reforder_id"), dfLong); 
	m_hms_ipharmaorder_lineTbl.AddField(_T("hpol_orderid"), dfLong); 
	m_hms_ipharmaorder_lineTbl.AddField(_T("hpol_storage_id"), dfInteger); 
	m_hms_ipharmaorder_lineTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_ipharmaorder_lineTbl.AddField(_T("hpol_qtyorder"), dfFloat); 
	m_hms_ipharmaorder_lineTbl.AddField(_T("hpol_dousage"), dfText, 128); 
*/


	m_hms_ipharmaorderTbl.AddField(_T("hpo_org_id"), dfText, 3); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_user_id"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_storage_id"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_refidx"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_bedid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 1); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_scaledrug"), dfInteger);
	m_hms_ipharmaorderTbl.AddField(_T("hpo_batch_id"), dfLong );
	m_hms_ipharmaorderTbl.AddField(_T("hpo_transaction_id"), dfLong );
	m_hms_ipharmaorderTbl.AddField(_T("hpo_reference_id"), dfLong );
	m_hms_ipharmaorderTbl.AddField(_T("hpo_refitem_id"), dfText, 15);
	m_hms_ipharmaorderTbl.AddField(_T("hpo_feetype"), dfText, 2);
	m_hms_ipharmaorderTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_qtyorder"), dfFloat); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_dousage"), dfText, 128); 

	m_wndType.SetCheckValue(true);
//	m_wndOperation.SetCheckValue(true);
	m_wndDescription.SetWindowText(_T(""));
//	m_wndOperation.ShowWindow(SW_HIDE);	

	m_wndDescription.SetTextColor(RGB(0, 128, 192));
	
}
void CHMSMedicalCabinetDrugOrderEntry::OnSetWindowEvents(){

	m_wndDocumentNo.SetEvent(WE_SELENDOK, _OnDocumentNoSelendokFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_SELCHANGE, _OnDocumentNoSelectChangeFnc);
	m_wndDocumentNo.SetEvent(WE_LOADDATA, _OnDocumentNoLoadDataFnc);
	//m_wndDocumentNo.SetEvent(WE_ADDNEW, _OnDocumentNoAddNewFnc);
	m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndType.SetEvent(WE_CHECKVALUE, _OnTypeCheckValueFnc);
//	m_wndOperation.SetEvent(WE_SELENDOK, _OnOperationSelendokFnc);
	//m_wndOperation.SetEvent(WE_SETFOCUS, _OnOperationSetfocusFnc);
	//m_wndOperation.SetEvent(WE_KILLFOCUS, _OnOperationKillfocusFnc);
//	m_wndOperation.SetEvent(WE_SELCHANGE, _OnOperationSelectChangeFnc);
//	m_wndOperation.SetEvent(WE_LOADDATA, _OnOperationLoadDataFnc);
	//m_wndOperation.SetEvent(WE_ADDNEW, _OnOperationAddNewFnc);
	m_wndDayNumber.SetEvent(WE_CHECKVALUE, _OnDayNumberCheckValueFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	//m_wndMaxQuantity.SetEvent(WE_CHANGE, _OnMaxQuantityChangeFnc);
	//m_wndMaxQuantity.SetEvent(WE_SETFOCUS, _OnMaxQuantitySetfocusFnc);
	//m_wndMaxQuantity.SetEvent(WE_KILLFOCUS, _OnMaxQuantityKillfocusFnc);
	m_wndMaxQuantity.SetEvent(WE_CHECKVALUE, _OnMaxQuantityCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);	
//	m_wndDateButton.SetEvent(WE_CLICK, _OnDateSelectFnc);	

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szOrderDate = pMF->GetSysDate();
}
void CHMSMedicalCabinetDrugOrderEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNoKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
//	DDX_TextEx(pDX, m_wndOperation.GetDlgCtrlID(), m_szOperationKey);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndDayNumber.GetDlgCtrlID(), m_nDayNumber);

}
void CHMSMedicalCabinetDrugOrderEntry::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_storage_id"), m_szDocumentNoKey);
	rs.GetValue(_T("product_name"), m_szNameKey);
	rs.GetValue(_T("hpol_qtyorder"), m_nQty);
	

}
void CHMSMedicalCabinetDrugOrderEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_storage_id"), m_nStorageID);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_org_id"), pMF->GetModuleID());
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_user_id"), pMF->GetCurrentUser());
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_patientno"), m_nPatientNo);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_docno"), str2long(m_szDocumentNoKey));
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_roomid"), m_nRoomID);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_bedid"), m_nBedID);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_refidx"), m_nRefIndex);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_doctor"), m_szDoctor);
//	m_hms_ipharmaorderTbl.SetValue(_T("hpo_object_id"), m_nObjectID);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_ordertype"), _T("C"));
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_scaledrug"), 0);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_feetype"), m_szTypeKey);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_reference_id"), m_szOperationKey);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_batch_id"), 0);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_product_id"), m_szNameKey);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_qtyorder"), m_nQty);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_dousage"), _T(""));
/*	
	m_hms_ipharmaorder_lineTbl.SetValue(_T("hpol_orderid"), 0);
	m_hms_ipharmaorder_lineTbl.SetValue(_T("hpol_storage_id"), m_nStorageID);
	m_hms_ipharmaorder_lineTbl.SetValue(_T("hpol_product_id"), m_szNameKey);
	m_hms_ipharmaorder_lineTbl.SetValue(_T("hpol_qtyorder"), m_nQty);
	m_hms_ipharmaorder_lineTbl.SetValue(_T("hpol_dousage"), _T(""));
*/
	
}
void CHMSMedicalCabinetDrugOrderEntry::SetDefaultValues(){

	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_nObjectID = 7;
}
int CHMSMedicalCabinetDrugOrderEntry::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
		
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			SetDefaultValues();
			if(m_szDocumentNoKey.IsEmpty())
				m_wndDocumentNo.SetFocus();
			else
				m_wndName.SetFocus();
			
			m_bAddOrder = true;
 			break; 
 		case VM_ADDCHILD: 
			SetDefaultValues();
			m_wndName.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 1, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 

	//	m_wndOrderDate.EnableWindow(FALSE);

//		m_wndOperation.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}

void CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	SetDefaultValues();	
	m_szTypeKey.Empty();
	m_szOperationKey.Empty();
	m_szTypeKey = _T("CP");
	

	m_szDocumentNoKey = m_wndDocumentNo.GetCurrent(0);
	m_wndOrderDate.SetCheckValue(true);
//	m_szOrderDate = m_szCurrentOrderDate.Left(10);
	CGuiPopup::SetMode(VM_ADD);
	m_bAddOrder = true;
	m_nObjectID = str2int(m_wndDocumentNo.GetCurrent(7));

	CString szSQL;
	szSQL.Format(_T("SELECT ho_type FROM hms_object WHERE ho_id='%d' "), m_nObjectID);
	rs.ExecSQL(szSQL);
	CString szType;
	szType.Empty();
	if(!rs.IsEOF())
		rs.GetValue(_T("ho_type"), m_szObjectType);
	
	
	if(m_nDocumentNo != str2long(m_szDocumentNoKey))
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		m_nDocumentNo = str2long(m_szDocumentNoKey);
		m_nPatientNo  = str2long(m_wndDocumentNo.GetCurrent(5));

		szSQL.Format(_T("SELECT ") \
				_T("htr_patientno as patientno, ") \
				_T("htr_docno as docno, ") \
				_T("htr_deptid as deptid, ") \
				_T("htr_idx as refidx, ") \
				_T("htr_doctor as doctor, ") \
				_T("hb_roomid as roomid, ") \
				_T("hb_bedid as bedid ") \
			_T("FROM hms_treatment_record ") \
			_T("LEFT JOIN hms_bed on(hb_docno=htr_docno and hb_deptid=htr_deptid and hb_refidx=htr_idx and hb_status='O') ") \
			_T("WHERE htr_docno=%ld AND htr_status='I' AND htr_deptid='%s' "), m_nDocumentNo,  pMF->m_szDept);
	//_fmsg(_T("%s"), szSQL);
		
		rs.ExecSQL(szSQL);
		m_nRefIndex = 0;
		m_nRoomID = 0;
		m_nBedID = 0;
		if(!rs.IsEOF()){
			rs.GetValue(_T("refidx"), m_nRefIndex);
			rs.GetValue(_T("doctor"), m_szDoctor);
			rs.GetValue(_T("roomid"), m_nRoomID);
			rs.GetValue(_T("bedid"), m_nBedID);
		}

		szSQL.Format(_T("SELECT hpo_orderid as orderid ") \
			_T("FROM hms_ipharmaorder ") \
			_T("WHERE hpo_docno=%ld and hpo_storage_id=%ld ") \
			_T(" and  hpo_orderstatus='A' ") \
			_T(" and hpo_ordertype='C'") \
			_T(" and trunc_date(hpo_orderdate)=trunc_date(systimestamp) "),
			str2long(m_szDocumentNoKey), m_nStorageID);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			((CHMSMedicalCabinetDrug*)m_pWndOrder)->OnDrugListLoadData();
		}
		else
		{
			
			((CHMSMedicalCabinetDrug*) m_pWndOrder)->m_wndDrugList.DeleteAllItems();

		}
	}


	UpdateData(FALSE);
}
/*void CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoSetfocus(){
	
}*/
/*void CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoKillfocus(){
	
}*/
long CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDocumentNo.IsSearchKey() && str2long(m_szDocumentNoKey) > 0){
		szWhere.Format(_T(" AND hd_docno=%d "), str2long(m_szDocumentNoKey));
	};
	m_wndDocumentNo.DeleteAllItems(); 
	m_wndName.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT distinct hd_docno as docno, ") \
		_T(" hp_patientno as patientno, ") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
		_T(" hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age, ") \
		_T(" HMS_GETSEX(hp_sex) as sex, hd_object as objectid, HMS_GetObjectName(hd_object) as objectname ") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
		_T(" WHERE (hd_admitdept='%s' or hd_enddept='%s') AND hd_status<>'T' AND hd_object NOT IN(7) ") \
		_T(" %s ORDER BY pname, docno "), pMF->m_szDept,  pMF->m_szDept, szWhere);
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDocumentNo.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("objectname")),
			rs.GetValue(_T("patientno")),
			rs.GetValue(_T("refidx")),
			rs.GetValue(_T("objectid")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSMedicalCabinetDrugOrderEntry::OnDocumentNoAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSMedicalCabinetDrugOrderEntry::OnOrderDateChange(){
	m_bAddOrder	= true;
} 
/*void CHMSMedicalCabinetDrugOrderEntry::OnOrderDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnOrderDateKillfocus(){
	
} */
int CHMSMedicalCabinetDrugOrderEntry::OnOrderDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	CString szDate;

	szSQL.Format(_T("select MAX(trunc_date(htr_admitdate)) from hms_treatment_record ") \
		_T(" where htr_docno =%ld and htr_deptid='%s'  ")\
		,str2long(m_szDocumentNoKey), pMF->m_szDept);
	
	rs.ExecSQL(szSQL);
	szDate = rs.GetStringValue();
	if(CompareDate(m_szOrderDate, szDate) < 0)
		return -1;
	int n = CompareDate(m_szOrderDate, pMF->GetSysDate());
	if(n > 7) return -1;
	return 0;
} 
void CHMSMedicalCabinetDrugOrderEntry::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CHMSMedicalCabinetDrugOrderEntry::OnTypeSelendok(){
	
	UpdateData(TRUE);
/*
	_tprintf(_T("\r\n%s"), m_szTypeKey);
	if(m_szTypeKey == _T("PT")){
		m_wndOperation.EnableWindow(TRUE);
		m_wndOperation.SetCheckValue(true);
	}
	else
	{
		m_wndOperation.EnableWindow(FALSE);
		m_wndOperation.SetCheckValue(false);
		m_szOperationKey.Empty();
	}
	m_wndDescription.SetWindowText(_T(""));
	*/
	m_szOperationKey.Empty();
	UpdateData(FALSE);
}

int CHMSMedicalCabinetDrugOrderEntry::OnTypeCheckValue(){
	return 0;
}
/*void CHMSMedicalCabinetDrugOrderEntry::OnTypeSetfocus(){
	
}*/
/*void CHMSMedicalCabinetDrugOrderEntry::OnTypeKillfocus(){
	
}*/
long CHMSMedicalCabinetDrugOrderEntry::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and ss_code <> 'PT' "));
	return pMF->LoadSelectionList(&m_wndType, _T("hms_drugissue_type"), m_szTypeKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSMedicalCabinetDrugOrderEntry::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnObjectChange(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnObjectSetfocus(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnObjectKillfocus(){
	
} */
int CHMSMedicalCabinetDrugOrderEntry::OnObjectCheckValue(){
	return 0;
} 
void CHMSMedicalCabinetDrugOrderEntry::OnOperationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrugOrderEntry::OnOperationSelendok(){

	m_wndDescription.SetWindowText(m_wndOperation.GetCurrent(1));
	 
}
/*void CHMSMedicalCabinetDrugOrderEntry::OnOperationSetfocus(){
	
}*/
/*void CHMSMedicalCabinetDrugOrderEntry::OnOperationKillfocus(){
	
}*/
long CHMSMedicalCabinetDrugOrderEntry::OnOperationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperation.IsSearchKey() && str2long(m_szOperationKey) > 0){
	 szWhere.Format(_T(" and ho_idx=%ld "), str2long(m_szOperationKey));
	};
	m_wndOperation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_idx as id, hfl_name as name ") \
		_T("FROM hms_operation LEFT JOIN hms_fee_list ON(hfl_feeid=ho_itemid) ") \
		_T("WHERE ho_docno=%ld and ho_deptid='%s' %s ORDER BY id "), m_nDocumentNo, pMF->m_szDept, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSMedicalCabinetDrugOrderEntry::OnOperationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSMedicalCabinetDrugOrderEntry::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrugOrderEntry::OnNameSelendok(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	UpdateData(true);
	m_nMaxQuantity = str2float(m_wndName.GetCurrent(5));

	szSQL.Format(_T("SELECT mp_isprecision FROM m_product WHERE mp_product_id=%ld"), str2long(m_szNameKey));
	rs.ExecSQL(szSQL);

	UpdateData(false);
	CString szPrecision;
	rs.GetValue(_T("mp_isprecision"), szPrecision);
	if(szPrecision == _T("Y"))
		m_wndQty.SetNumberDecimal(2);
	else
		m_wndQty.SetNumberDecimal(0);
	m_wndDescription.SetWindowText(m_wndName.GetCurrent(1));

	m_nStorageID = str2int(m_wndName.GetCurrent(9));

	//m_wndQty.SetMinMax(1, m_nMaxQuantity);


}
/*void CHMSMedicalCabinetDrugOrderEntry::OnNameSetfocus(){
	
}*/
/*void CHMSMedicalCabinetDrugOrderEntry::OnNameKillfocus(){
	
}*/
long CHMSMedicalCabinetDrugOrderEntry::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && str2long(m_szNameKey)){
		szWhere.Format(_T(" AND product_id=%ld "), str2long(m_szNameKey));
	};
	
	

	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	if (m_szObjectType == _T("S"))
	{
		szWhere.AppendFormat(_T(" and msl_category IN('S','A') "));
	
	}
	else if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
	{
		szWhere.AppendFormat(_T(" and msl_category in('I','A') "));
	}
	else if (m_szObjectType == _T("D") || m_szObjectType == _T("P"))
	{
		szWhere.AppendFormat(_T(" and msl_category in('P','A') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and msl_category='A' "));
	}

	szSQL.Format(_T(" SELECT l1.msl_storage_id AS storage_id,") \
_T("   product_id,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   product_classname,") \
_T("   product_countryname,") \
_T("   SUM(msl_qtyonhand-msl_qtyordered-msl_qtypreordered) AS qtyavaiable") \
_T(" FROM m_storageline l1") \
_T(" LEFT JOIN m_storagelist l2") \
_T(" ON(l1.msl_storage_id=l2.msl_storage_id)") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON(l1.msl_product_item_id                          = product_item_id)") \
_T(" WHERE l2.msl_type                                  ='C'") \
_T(" AND msl_dept_id                                    ='%s' ") \
_T(" AND l1.msl_isactive                                ='Y'") \
_T(" AND msl_qtyonhand-msl_qtyordered-msl_qtypreordered > 0 ") \
_T(" AND (product_expdate                               > TO_DATE('%s','YYYY-MM-DD')") \
_T(" OR product_expdate                                IS NULL") \
_T(" OR product_expdate                                 = TO_DATE('1752-09-14','YYYY-MM-DD') )") \
_T(" %s ") \
_T(" GROUP BY l1.msl_storage_id,") \
_T("   product_id,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   product_classname,") \
_T("   product_countryname") \
_T(" ORDER BY product_name,") \
_T("   product_uomname"), pMF->m_szDept, m_szOrderDate, szWhere );

	nCount = rs.ExecSQL(szSQL);

_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("product_classname")), 
			rs.GetValue(_T("qtyavaiable")), 
			rs.GetValue(_T("product_countryname")),
			_T(""), 
			rs.GetValue(_T("product_isprecision")),
			rs.GetValue(_T("storage_id")),
			NULL);
		rs.MoveNext();
	}
	return nCount;


}
/*void CHMSMedicalCabinetDrugOrderEntry::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnUomChange(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnUomSetfocus(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnUomKillfocus(){
	
} */
int CHMSMedicalCabinetDrugOrderEntry::OnUomCheckValue(){
	return 0;
} 
/*void CHMSMedicalCabinetDrugOrderEntry::OnQtyChange(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnQtySetfocus(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnQtyKillfocus(){
	
} */
int CHMSMedicalCabinetDrugOrderEntry::OnQtyCheckValue(){
	UpdateData(true);
	if(m_nQty*m_nDayNumber > m_nMaxQuantity || m_nQty <= 0)
	{
		m_wndQty.SetToolTipMessage(_T("S\x1ED1 l\x1B0\x1EE3ng y\xEAu \x63\x1EA7u l\x1EDBn h\x1A1n s\x1ED1 t\x1ED3n kho"));
		return -1;
	}
	return 0;
} 
/*void CHMSMedicalCabinetDrugOrderEntry::OnMaxQuantityChange(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSMedicalCabinetDrugOrderEntry::OnMaxQuantityKillfocus(){
	
} */
int CHMSMedicalCabinetDrugOrderEntry::OnMaxQuantityCheckValue(){
	return 0;
} 



void CHMSMedicalCabinetDrugOrderEntry::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSMedicalCabinetDrugOrderEntry();
} 

void CHMSMedicalCabinetDrugOrderEntry::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiPopup::ClosePopup();
} 
int CHMSMedicalCabinetDrugOrderEntry::OnAddHMSMedicalCabinetDrugOrderEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSMedicalCabinetDrugOrderEntry::OnEditHMSMedicalCabinetDrugOrderEntry(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMedicalCabinetDrugOrderEntry::OnDeleteHMSMedicalCabinetDrugOrderEntry(){
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
 		OnCancelHMSMedicalCabinetDrugOrderEntry(); 
 	}
	return 0;
}
int CHMSMedicalCabinetDrugOrderEntry::OnSaveHMSMedicalCabinetDrugOrderEntry(){
 	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	CRecord rs(&pMF->m_db);
	int ret=0;
	long nOrderID = 0;
	bool bAddFlag = true;
	CString szMfgID;
	
	
	if(!IsValidateData()) 
 		return -1; 

	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	
	m_nObjectID = str2int(m_wndDocumentNo.GetCurrent(7));
	m_nStorageID = str2int(m_wndName.GetCurrent(9));
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_storage_id"), m_nStorageID);

	if(m_nDocumentNo <= 0)
		return -1;

	if(m_nStorageID <= 0)
		return 0;
	
//	pMF->BeginTransaction();
	
	CString szOrderDate;
	CDate dte;
	long nOID = 0;
	dte.ParseDate(m_szOrderDate);
	for (int i =0; i < m_nDayNumber; i++)
	{
		
		szOrderDate.Format(_T("%s %s"), dte.GetDate(yyyymmdd), pMF->GetSysTime());
		_tprintf(_T("\r\n%s"), dte.GetDate());
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderdate"), szOrderDate);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_object_id"), m_nObjectID);
		szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE2(%s) "), m_hms_ipharmaorderTbl.FormatSQL());		
		nOrderID = str2long(pMF->ExecDML(szSQL));
		if(nOID == 0 && nOrderID > 0)
		{
			nOID = nOrderID;
		}
		dte++;
	}
	if(nOID > 0){
		m_nOrderID = nOID;
		//((CHMSMedicalCabinetDrug*)m_pWndOrder)->Refresh(m_nDocumentNo);
		((CHMSMedicalCabinetDrug*)m_pWndOrder)->m_nDocumentNo = m_nDocumentNo;
		((CHMSMedicalCabinetDrug*)m_pWndOrder)->OnPatientListLoadData();
		SetMode(VM_ADDCHILD);
		return nOID;
	}

	return -1;

}
int CHMSMedicalCabinetDrugOrderEntry::OnCancelHMSMedicalCabinetDrugOrderEntry(){
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
int CHMSMedicalCabinetDrugOrderEntry::OnHMSMedicalCabinetDrugOrderEntryListLoadData(){
	return 0;
}


int CHMSMedicalCabinetDrugOrderEntry::OnDayNumberCheckValue(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(m_nDayNumber > 15 || m_nDayNumber <= 0)
		return -1;
	CDate dte;
	CString tmpStr;
	dte.ParseDate(m_szOrderDate);
	dte += (m_nDayNumber-1);
	tmpStr.Format(_T("%s"), dte.GetDate());
	if (CompareDate(tmpStr, pMF->GetSysDate()) > 0)
		return -1;

	return 0;
}


void CHMSMedicalCabinetDrugOrderEntry::OnDateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	CGuiPopup *newPopup = new CGuiPopup(this);
//	newPopup->ShowPopup(&m_wndDateButton);
}