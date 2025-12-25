#include "HMSSurgery_OperationOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgery_OperationOrder*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgery_OperationOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgery_OperationOrder*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgery_OperationOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgery_OperationOrder *)pWnd)->OnPerformDateCheckValue();
} 
static void _OnMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgery_OperationOrder* )pWnd)->OnMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMethodSelendokFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnMethodSelendok();
}
/*static void _OnMethodSetfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnMethodKillfocus();
}*/
/*static void _OnMethodKillfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnMethodKillfocus();
}*/
static long _OnMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgery_OperationOrder *)pWnd)->OnMethodLoadData();
}
/*static void _OnMethodAddNewFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnMethodAddNew();
}*/
/*static void _OnInsensibleMethodChangeFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnInsensibleMethodChange();
} */
/*static void _OnInsensibleMethodSetfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnInsensibleMethodSetfocus();} */ 
/*static void _OnInsensibleMethodKillfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnInsensibleMethodKillfocus();
} */
static int _OnInsensibleMethodCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgery_OperationOrder *)pWnd)->OnInsensibleMethodCheckValue();
} 
/*static void _OnBeforeSOChangeFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnBeforeSOChange();
} */
/*static void _OnBeforeSOSetfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnBeforeSOSetfocus();} */ 
/*static void _OnBeforeSOKillfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnBeforeSOKillfocus();
} */
static int _OnBeforeSOCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgery_OperationOrder *)pWnd)->OnBeforeSOCheckValue();
} 
/*static void _OnAfterSOChangeFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnAfterSOChange();
} */
/*static void _OnAfterSOSetfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnAfterSOSetfocus();} */ 
/*static void _OnAfterSOKillfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnAfterSOKillfocus();
} */
static int _OnAfterSOCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgery_OperationOrder *)pWnd)->OnAfterSOCheckValue();
} 
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgery_OperationOrder* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgery_OperationOrder *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnPractitionerAddNew();
}*/
static void _OnAnesthetistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgery_OperationOrder* )pWnd)->OnAnesthetistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthetistSelendokFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnAnesthetistSelendok();
}
/*static void _OnAnesthetistSetfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnAnesthetistKillfocus();
}*/
/*static void _OnAnesthetistKillfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnAnesthetistKillfocus();
}*/
static long _OnAnesthetistLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgery_OperationOrder *)pWnd)->OnAnesthetistLoadData();
}
/*static void _OnAnesthetistAddNewFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnAnesthetistAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgery_OperationOrder *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSurgery_OperationOrder *pVw = (CHMSSurgery_OperationOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSSurgery_OperationOrder *pVw = (CHMSSurgery_OperationOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSurgery_OperationOrder *pVw = (CHMSSurgery_OperationOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSurgery_OperationOrder *pVw = (CHMSSurgery_OperationOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSSurgery_OperationOrder *pVw = (CHMSSurgery_OperationOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgery_OperationOrder* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgery_OperationOrder *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CHMSSurgery_OperationOrder *)pWnd)->OnPerformDeptAddNew();
}*/
static int _OnAddHMSSurgery_OperationOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgery_OperationOrder*)pWnd)->OnAddHMSSurgery_OperationOrder();
} 
static int _OnEditHMSSurgery_OperationOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgery_OperationOrder*)pWnd)->OnEditHMSSurgery_OperationOrder();
} 
static int _OnDeleteHMSSurgery_OperationOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgery_OperationOrder*)pWnd)->OnDeleteHMSSurgery_OperationOrder();
} 
static int _OnSaveHMSSurgery_OperationOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgery_OperationOrder*)pWnd)->OnSaveHMSSurgery_OperationOrder();
} 
static int _OnCancelHMSSurgery_OperationOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgery_OperationOrder*)pWnd)->OnCancelHMSSurgery_OperationOrder();
} 
CHMSSurgery_OperationOrder::CHMSSurgery_OperationOrder(){

	m_nDlgWidth = 630;
	m_nDlgHeight = 596;
	SetDefaultValues();
}
CHMSSurgery_OperationOrder::~CHMSSurgery_OperationOrder(){
}
void CHMSSurgery_OperationOrder::OnCreateComponents(){
	m_wndSurgery_OperationInformation.Create(this, _T("Surgery Information"), 6, 5, 420, 394);
	m_wndOrderList.Create(this,11, 25, 416, 97); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 129, 130, 151);
	m_wndOrderDate.Create(this,135, 129, 255, 151); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 10, 156, 130, 178);
	m_wndPerformDate.Create(this,135, 156, 255, 178); 
	m_wndMethodLabel.Create(this, _T("Method"), 10, 183, 130, 205);
	m_wndMethod.Create(this,135, 183, 414, 205); 
	m_wndInsensibleMethodLabel.Create(this, _T("Insensible Method"), 10, 210, 130, 232);
	m_wndInsensibleMethod.Create(this,135, 210, 414, 232); 
	m_wndAfterSOLabel.Create(this, _T("After Surgery"), 10, 264, 130, 286);
	m_wndBeforeSO.Create(this,135, 237, 414, 259); 
	m_wndBeforeSOLabel.Create(this, _T("Before Surgery"), 10, 237, 130, 259);
	m_wndAfterSO.Create(this,135, 264, 414, 286); 
	m_wndSurgeonLabel.Create(this, _T("Surgeon"), 10, 291, 130, 313);
	m_wndPractitioner.Create(this,135, 291, 414, 313); 
	m_wndAnesthetistLabel.Create(this, _T("Anesthetist"), 10, 318, 130, 340);
	m_wndAnesthetist.Create(this,135, 318, 414, 340); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 345, 130, 367);
	m_wndNote.Create(this,135, 345, 414, 389); 
	m_wndAdd.Create(this, _T("&Add"), 50, 399, 120, 421);
	m_wndDelete.Create(this, _T("&Delete"), 125, 399, 195, 421);
	m_wndSave.Create(this, _T("&Save"), 200, 399, 270, 421);
	m_wndCancel.Create(this, _T("&Cancel"), 275, 399, 345, 421);
	m_wndPrint.Create(this, _T("&Print"), 350, 399, 420, 421);
	m_wndPerformDeptLabel.Create(this, _T("Perform Department"), 11, 102, 131, 124);
	m_wndPerformDept.Create(this,136, 102, 414, 124); 

}
void CHMSSurgery_OperationOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndPerformDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndPerformDate.SetCheckValue(true);
	m_wndMethod.SetCheckValue(true);
	m_wndMethod.LimitText(1024);
	m_wndInsensibleMethod.SetLimitText(35);
	m_wndInsensibleMethod.SetCheckValue(true);
	m_wndBeforeSO.SetLimitText(35);
	m_wndBeforeSO.SetCheckValue(true);
	m_wndAfterSO.SetLimitText(35);
	m_wndAfterSO.SetCheckValue(true);
	m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(35);
	m_wndAnesthetist.SetCheckValue(true);
	m_wndAnesthetist.LimitText(35);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	m_wndPerformDept.SetCheckValue(true);
	m_wndPerformDept.LimitText(35);


	m_wndOrderList.InsertColumn(0, _T("Order ID"), CFMT_NUMBER, 70);
	m_wndOrderList.InsertColumn(1, _T("Order Date"), CFMT_DATETIME, 100);
	m_wndOrderList.InsertColumn(2, _T("Perform Date"), CFMT_DATETIME, 100);
	m_wndOrderList.InsertColumn(3, _T("Status"), CFMT_TEXT, 80);

	m_wndOrderList.InsertColumn(0, _T("Order ID"), CFMT_NUMBER, 60);
	m_wndOrderList.InsertColumn(1, _T("Order Date"), CFMT_DATETIME, 105);
	m_wndOrderList.InsertColumn(2, _T("Name"), CFMT_TEXT, 130);
	m_wndOrderList.InsertColumn(3, _T("Status"), CFMT_TEXT|CFMT_CENTER, 65);

	m_wndMethod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndMethod.InsertColumn(2, _T("Department"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndMethod.InsertColumn(3, _T("Serv"), CFMT_TEXT, 0);
	m_wndMethod.InsertColumn(4, _T("Insprice"), CFMT_TEXT, 0);
	m_wndMethod.InsertColumn(5, _T("Polpric"), CFMT_TEXT, 0);
	m_wndMethod.InsertColumn(6, _T("Group"), CFMT_TEXT, 0);

	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPractitioner.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndAnesthetist.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAnesthetist.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);





	m_wndPerformDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPerformDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_hms_soperationTbl.SetTableName(_T("hms_soperation"));
	m_hms_soperationTbl.AddField(_T("hso_createdby"), dfText, 15); 
	m_hms_soperationTbl.AddField(_T("hso_createddate"), dfText, 4); 
	m_hms_soperationTbl.AddField(_T("hso_updatedby"), dfText, 15); 
	m_hms_soperationTbl.AddField(_T("hso_updateddate"), dfText, 4); 
	m_hms_soperationTbl.AddField(_T("hso_type"), dfText, 1); 
	m_hms_soperationTbl.AddField(_T("hso_group"), dfText, 3); 
	m_hms_soperationTbl.AddField(_T("hso_patientno"), dfInteger); 
	m_hms_soperationTbl.AddField(_T("hso_docno"), dfInteger); 
	m_hms_soperationTbl.AddField(_T("hso_orderno"), dfText, 13); 
	m_hms_soperationTbl.AddField(_T("hso_orderdate"), dfText, 4); 
	m_hms_soperationTbl.AddField(_T("hso_doctor"), dfText, 15); 
	m_hms_soperationTbl.AddField(_T("hso_fdeptid"), dfText, 7); 
	m_hms_soperationTbl.AddField(_T("hso_froomid"), dfInteger); 
	m_hms_soperationTbl.AddField(_T("hso_fbedid"), dfInteger); 
	m_hms_soperationTbl.AddField(_T("hso_freceptidx"), dfInteger); 
	m_hms_soperationTbl.AddField(_T("hso_itemid"), dfText, 7); 
	m_hms_soperationTbl.AddField(_T("hso_name"), dfText, 254); 
	m_hms_soperationTbl.AddField(_T("hso_inmethod"), dfText, 81); 
	m_hms_soperationTbl.AddField(_T("hso_beforeso"), dfText, 81); 
	m_hms_soperationTbl.AddField(_T("hso_pdeptid"), dfText, 7); 
	m_hms_soperationTbl.AddField(_T("hso_proomid"), dfInteger); 
	m_hms_soperationTbl.AddField(_T("hso_afterso"), dfText, 81); 
	m_hms_soperationTbl.AddField(_T("hso_anesthetist"), dfText, 15); 
	m_hms_soperationTbl.AddField(_T("hso_performdate"), dfText, 4); 
	m_hms_soperationTbl.AddField(_T("hso_status"), dfText, 1); 
	m_hms_soperationTbl.AddField(_T("hso_payment"), dfText, 1); 
	m_hms_soperationTbl.AddField(_T("hso_hasfee"), dfText, 1); 
	m_hms_soperationTbl.AddField(_T("hso_note"), dfText, 81); 
	m_hms_soperationTbl.AddField(_T("hso_surgeon"), dfText, 15); 

	SetMode(VM_NONE);
}
void CHMSSurgery_OperationOrder::OnSetWindowEvents(){
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);

	m_wndOrderList.SetWindowText(_T("Order List"));
	m_wndOrderList.AddEvent(1, _T("Delete Entry"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOrderList.AddEvent(0, _T("-"));
	m_wndOrderList.AddEvent(2, _T("Confirm"), _OnConfirmSelectFnc);
	m_wndOrderList.AddEvent(3, _T("Discard"), _OnDiscardSelectFnc);
	m_wndOrderList.AddEvent(0, _T("-"));
	m_wndOrderList.AddEvent(4, _T("Print"), _OnPrintSelectFnc, 0, 'P', VK_CONTROL);

	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	m_wndMethod.SetEvent(WE_SELENDOK, _OnMethodSelendokFnc);
	//m_wndMethod.SetEvent(WE_SETFOCUS, _OnMethodSetfocusFnc);
	//m_wndMethod.SetEvent(WE_KILLFOCUS, _OnMethodKillfocusFnc);
	m_wndMethod.SetEvent(WE_SELCHANGE, _OnMethodSelectChangeFnc);
	m_wndMethod.SetEvent(WE_LOADDATA, _OnMethodLoadDataFnc);
	//m_wndMethod.SetEvent(WE_ADDNEW, _OnMethodAddNewFnc);
	//m_wndInsensibleMethod.SetEvent(WE_CHANGE, _OnInsensibleMethodChangeFnc);
	//m_wndInsensibleMethod.SetEvent(WE_SETFOCUS, _OnInsensibleMethodSetfocusFnc);
	//m_wndInsensibleMethod.SetEvent(WE_KILLFOCUS, _OnInsensibleMethodKillfocusFnc);
	m_wndInsensibleMethod.SetEvent(WE_CHECKVALUE, _OnInsensibleMethodCheckValueFnc);
	//m_wndBeforeSO.SetEvent(WE_CHANGE, _OnBeforeSOChangeFnc);
	//m_wndBeforeSO.SetEvent(WE_SETFOCUS, _OnBeforeSOSetfocusFnc);
	//m_wndBeforeSO.SetEvent(WE_KILLFOCUS, _OnBeforeSOKillfocusFnc);
	m_wndBeforeSO.SetEvent(WE_CHECKVALUE, _OnBeforeSOCheckValueFnc);
	//m_wndAfterSO.SetEvent(WE_CHANGE, _OnAfterSOChangeFnc);
	//m_wndAfterSO.SetEvent(WE_SETFOCUS, _OnAfterSOSetfocusFnc);
	//m_wndAfterSO.SetEvent(WE_KILLFOCUS, _OnAfterSOKillfocusFnc);
	m_wndAfterSO.SetEvent(WE_CHECKVALUE, _OnAfterSOCheckValueFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);
	m_wndAnesthetist.SetEvent(WE_SELENDOK, _OnAnesthetistSelendokFnc);
	//m_wndAnesthetist.SetEvent(WE_SETFOCUS, _OnAnesthetistSetfocusFnc);
	//m_wndAnesthetist.SetEvent(WE_KILLFOCUS, _OnAnesthetistKillfocusFnc);
	m_wndAnesthetist.SetEvent(WE_SELCHANGE, _OnAnesthetistSelectChangeFnc);
	m_wndAnesthetist.SetEvent(WE_LOADDATA, _OnAnesthetistLoadDataFnc);
	//m_wndAnesthetist.SetEvent(WE_ADDNEW, _OnAnesthetistAddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPerformDept.SetEvent(WE_SELENDOK, _OnPerformDeptSelendokFnc);
	//m_wndPerformDept.SetEvent(WE_SETFOCUS, _OnPerformDeptSetfocusFnc);
	//m_wndPerformDept.SetEvent(WE_KILLFOCUS, _OnPerformDeptKillfocusFnc);
	m_wndPerformDept.SetEvent(WE_SELCHANGE, _OnPerformDeptSelectChangeFnc);
	m_wndPerformDept.SetEvent(WE_LOADDATA, _OnPerformDeptLoadDataFnc);
	//m_wndPerformDept.SetEvent(WE_ADDNEW, _OnPerformDeptAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSSurgery_OperationOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSSurgery_OperationOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSSurgery_OperationOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSSurgery_OperationOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSSurgery_OperationOrderFnc, 0, 'T', VK_CONTROL);

}
void CHMSSurgery_OperationOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_TextEx(pDX, m_wndMethod.GetDlgCtrlID(), m_szMethodKey);
	DDX_Text(pDX, m_wndInsensibleMethod.GetDlgCtrlID(), m_szInsensibleMethod);
	DDX_Text(pDX, m_wndBeforeSO.GetDlgCtrlID(), m_szBeforeSO);
	DDX_Text(pDX, m_wndAfterSO.GetDlgCtrlID(), m_szAfterSO);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_TextEx(pDX, m_wndAnesthetist.GetDlgCtrlID(), m_szAnesthetistKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndPerformDept.GetDlgCtrlID(), m_szPerformDeptKey);

}
void CHMSSurgery_OperationOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_soperation WHERE hso_orderno='%s' "), m_szOrderNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hso_group"),  m_szGroupKey);
		m_szTypeKey = pMF->GetSelectionString(_T("hms_fee_list"), m_szGroupKey);
		rs.GetValue(_T("hso_orderdate"),  m_szOrderDate); 
		rs.GetValue(_T("hso_itemid"),  m_szMethodKey); 
		rs.GetValue(_T("hso_beforeso"),  m_szBeforeSO); 
/*
		rs.GetValue(_T("hso_pdeptid"),  m_sz); 
		rs.GetValue(_T("hso_proomid"), dfInteger); 
*/
		rs.GetValue(_T("hso_status"),  m_szStatus); 
		rs.GetValue(_T("hso_inmethod"),  m_szInsensibleMethod); 
		rs.GetValue(_T("hso_afterso"),  m_szAfterSO); 
		rs.GetValue(_T("hso_Practitioner"),  m_szPractitionerKey); 
		rs.GetValue(_T("hso_anesthetist"),  m_szAnesthetistKey); 
		rs.GetValue(_T("hso_performdate"),  m_szPerformDate); 
		rs.GetValue(_T("hso_status"),  m_szStatus); 
		rs.GetValue(_T("hso_note"),  m_szNote); 

		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
	UpdateData(false);
	
}
void CHMSSurgery_OperationOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szGroupKey = m_wndMethod.GetCurrent(6);
	if(GetMode() == VM_ADD)
	{
		m_szStatus = _T("S");
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(count(*), 0)+1 FROM hms_soperation WHERE hso_group='%s' "), m_szGroupKey);
		rs.ExecSQL(szSQL);
		m_szOrderNo.Format(_T("%s%.5d"), m_szGroupKey, rs.GetIntValue());
		m_hms_soperationTbl.SetValue(_T("hso_createdby"),  pMF->GetCurrentUser()); 
		m_hms_soperationTbl.SetValue(_T("hso_createddate"), pMF->GetSysDateTime()); 
		m_hms_soperationTbl.SetValue(_T("hso_updatedby"),  pMF->GetCurrentUser()); 
		m_hms_soperationTbl.SetValue(_T("hso_type"),  m_szTypeKey); 
		m_hms_soperationTbl.SetValue(_T("hso_group"),  m_szGroupKey); 
		m_hms_soperationTbl.SetValue(_T("hso_patientno"), pMF->m_gPatientNo); 
		m_hms_soperationTbl.SetValue(_T("hso_docno"), pMF->m_gDocumentNo); 
		m_hms_soperationTbl.SetValue(_T("hso_orderno"),  m_szOrderNo); 
		m_hms_soperationTbl.SetValue(_T("hso_orderdate"),  m_szOrderDate); 
		m_hms_soperationTbl.SetValue(_T("hso_doctor"),  pMF->m_gDoctor); 
		m_hms_soperationTbl.SetValue(_T("hso_fdeptid"),  pMF->m_gDept); 
		m_hms_soperationTbl.SetValue(_T("hso_froomid"), pMF->m_gRoomID); 
		m_hms_soperationTbl.SetValue(_T("hso_fbedid"), 0); 
		m_hms_soperationTbl.SetValue(_T("hso_freceptidx"), pMF->m_gReceptIdx); 
		m_hms_soperationTbl.SetValue(_T("hso_itemid"),  m_szMethodKey); 
		m_hms_soperationTbl.SetValue(_T("hso_name"),  m_wndMethod.GetCurrent(1)); 
		m_hms_soperationTbl.SetValue(_T("hso_beforeso"),  m_szBeforeSO); 
/*
		m_hms_soperationTbl.SetValue(_T("hso_pdeptid"),  m_sz); 
		m_hms_soperationTbl.SetValue(_T("hso_proomid"), dfInteger); 
*/
		m_hms_soperationTbl.SetValue(_T("hso_status"),  m_szStatus); 
		m_hms_soperationTbl.SetValue(_T("hso_payment"),  _T("O")); 
		m_hms_soperationTbl.SetValue(_T("hso_hasfee"),  _T("Y")); 
		m_hms_soperationTbl.SetValue(_T("hso_note"),  m_szNote); 
	}
	else if(GetMode() == VM_EDIT){
		m_szStatus = _T("T");
		m_hms_soperationTbl.SetValue(_T("hso_updatedby"),  pMF->GetCurrentUser()); 
		m_hms_soperationTbl.SetValue(_T("hso_inmethod"),  m_szInsensibleMethod); 
/*
		m_hms_soperationTbl.SetValue(_T("hso_pdeptid"),  m_sz); 
		m_hms_soperationTbl.SetValue(_T("hso_proomid"), dfInteger); 
*/
		m_hms_soperationTbl.SetValue(_T("hso_afterso"),  m_szAfterSO); 
		m_hms_soperationTbl.SetValue(_T("hso_Practitioner"),  m_szPractitionerKey); 
		m_hms_soperationTbl.SetValue(_T("hso_anesthetist"),  m_szAnesthetistKey); 
		m_hms_soperationTbl.SetValue(_T("hso_performdate"),  m_szPerformDate); 
		m_hms_soperationTbl.SetValue(_T("hso_status"),  m_szStatus); 
		m_hms_soperationTbl.SetValue(_T("hso_note"),  m_szNote); 
	}


}
void CHMSSurgery_OperationOrder::SetDefaultValues(){

	m_szOrderDate.Empty();
	m_szPerformDate.Empty();
	m_szMethodKey.Empty();
	m_szInsensibleMethod.Empty();
	m_szBeforeSO.Empty();
	m_szAfterSO.Empty();
	m_szPractitionerKey.Empty();
	m_szAnesthetistKey.Empty();
	m_szNote.Empty();
	m_szPerformDeptKey.Empty();

}
int CHMSSurgery_OperationOrder::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues();
			m_wndInsensibleMethod.EnableWindow(false);
			m_wndPerformDate.EnableWindow(false);
			m_wndBeforeSO.EnableWindow(false);
			m_wndAfterSO.EnableWindow(false);
			m_wndPractitioner.EnableWindow(false);
			m_wndAnesthetist.EnableWindow(false);
			m_wndMethod.SetCheckValue(true);
			m_wndMethod.SetFocus();

 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndOrderDate.EnableWindow(false);
			m_wndMethod.EnableWindow(false);
			m_wndPractitioner.SetCheckValue(true);
			m_wndInsensibleMethod.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
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
void CHMSSurgery_OperationOrder::OnOrderListDblClick(){
	
} 
int CHMSSurgery_OperationOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CString szStatus;
	if(nNewItem < 0)
		return -1;
	m_szOrderNo = m_wndOrderList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	szStatus = m_wndOrderList.GetItemText(nNewItem, 3);
	if(szStatus == _T("O"))
	{
		m_wndConfirm.EnableWindow(true);
		m_wndDelete.EnableWindow(true);
	}
	else if(szStatus==_T("S"))
	{
		m_wndConfirm.EnableWindow(false);
		m_wndEdit.EnableWindow(true);
		m_wndDelete.EnableWindow(true);
	}
	else
	{
		m_wndConfirm.EnableWindow(false);
		m_wndDelete.EnableWindow(false);
	}
	return 0;
} 
int CHMSSurgery_OperationOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0)
		return -1;
	m_szOrderNo = m_wndOrderList.GetItemText(nSel, 0);
	if(m_szOrderNo.IsEmpty())
		return -1;

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szSQL.Format(_T("DELETE FROM hms_soperation WHERE hso_orderno='%s' AND (hso_status='O' OR hso_payment<>'P') "), m_szOrderNo);
	int ret = pMF->ExecSQL(szSQL);
	if(ret >= 0){
		m_wndOrderList.DeleteItem(nSel);
		EnableButtons(0, -1);
	}
	return 0;
} 
long CHMSSurgery_OperationOrder::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndOrderList.BeginLoad(); 
	m_wndOrderList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("hso_orderno")), 
			CDateTime::Convert(rs.GetValue(_T("hso_orderdate")), yyyymmdd|hhmmss, ddmmyyyy|hhmm), 
			rs.GetValue(_T("hso_name")), 
			rs.GetValue(_T("hso_status")), 
			NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSSurgery_OperationOrder::OnOrderDateChange(){
	
} */
/*void CHMSSurgery_OperationOrder::OnOrderDateSetfocus(){
	
} */
/*void CHMSSurgery_OperationOrder::OnOrderDateKillfocus(){
	
} */
int CHMSSurgery_OperationOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CHMSSurgery_OperationOrder::OnPerformDateChange(){
	
} */
/*void CHMSSurgery_OperationOrder::OnPerformDateSetfocus(){
	
} */
/*void CHMSSurgery_OperationOrder::OnPerformDateKillfocus(){
	
} */
int CHMSSurgery_OperationOrder::OnPerformDateCheckValue(){
	return 0;
} 
void CHMSSurgery_OperationOrder::OnMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgery_OperationOrder::OnMethodSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	UpdateData(true);
	m_szPerformDept = m_wndMethod.GetCurrent(2);
	m_szGroupKey = m_wndMethod.GetCurrent(6);
	m_szTypeKey = pMF->GetSelectionString(_T("hms_fee_list"), m_szGroupKey);
	UpdateData(false);
*/
	return 0;
}
/*void CHMSSurgery_OperationOrder::OnMethodSetfocus(){
	
}*/
/*void CHMSSurgery_OperationOrder::OnMethodKillfocus(){
	
}*/
long CHMSSurgery_OperationOrder::OnMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMethod.IsSearchKey()){
		szWhere.Format(_T(" AND hfl_id='%s' "), m_szMethodKey);
	};
	szSQL.Format(_T("SELECT * FROM hms_feelist WHERE substr(hfl_group, 1, 1) in('2','3','4') and hfl_active='Y' %s ORDER BY hfl_group, hfl_name"), szWhere);
	m_wndMethod.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMethod.AddItems(
			rs.GetValue(_T("hfl_id")), 
			rs.GetValue(_T("hfl_name")), 
			rs.GetValue(_T("hfl_deptid")), 
			rs.GetValue(_T("hfl_servprice")), 
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_polprice")),
			rs.GetValue(_T("hfl_group")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgery_OperationOrder::OnMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgery_OperationOrder::OnInsensibleMethodChange(){
	
} */
/*void CHMSSurgery_OperationOrder::OnInsensibleMethodSetfocus(){
	
} */
/*void CHMSSurgery_OperationOrder::OnInsensibleMethodKillfocus(){
	
} */
int CHMSSurgery_OperationOrder::OnInsensibleMethodCheckValue(){
	return 0;
} 
/*void CHMSSurgery_OperationOrder::OnBeforeSOChange(){
	
} */
/*void CHMSSurgery_OperationOrder::OnBeforeSOSetfocus(){
	
} */
/*void CHMSSurgery_OperationOrder::OnBeforeSOKillfocus(){
	
} */
int CHMSSurgery_OperationOrder::OnBeforeSOCheckValue(){
	return 0;
} 
/*void CHMSSurgery_OperationOrder::OnAfterSOChange(){
	
} */
/*void CHMSSurgery_OperationOrder::OnAfterSOSetfocus(){
	
} */
/*void CHMSSurgery_OperationOrder::OnAfterSOKillfocus(){
	
} */
int CHMSSurgery_OperationOrder::OnAfterSOCheckValue(){
	return 0;
} 
void CHMSSurgery_OperationOrder::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgery_OperationOrder::OnPractitionerSelendok(){
	 
}
/*void CHMSSurgery_OperationOrder::OnPractitionerSetfocus(){
	
}*/
/*void CHMSSurgery_OperationOrder::OnPractitionerKillfocus(){
	
}*/
long CHMSSurgery_OperationOrder::OnPractitionerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDoctorList(&m_wndPractitioner, m_szPractitionerKey, m_szPerformDept);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPractitioner.IsSearchKey() && !m_szPractitionerKey.IsEmpty()){
	};
	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgery_OperationOrder::OnPractitionerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgery_OperationOrder::OnAnesthetistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgery_OperationOrder::OnAnesthetistSelendok(){
	 
}
/*void CHMSSurgery_OperationOrder::OnAnesthetistSetfocus(){
	
}*/
/*void CHMSSurgery_OperationOrder::OnAnesthetistKillfocus(){
	
}*/
long CHMSSurgery_OperationOrder::OnAnesthetistLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDoctorList(&m_wndAnesthetist, m_szAnesthetistKey, m_szPerformDept);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAnesthetist.IsSearchKey() && !m_szAnesthetistKey.IsEmpty()){
	};
	m_wndAnesthetist.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAnesthetist.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgery_OperationOrder::OnAnesthetistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgery_OperationOrder::OnNoteChange(){
	
} */
/*void CHMSSurgery_OperationOrder::OnNoteSetfocus(){
	
} */
/*void CHMSSurgery_OperationOrder::OnNoteKillfocus(){
	
} */
int CHMSSurgery_OperationOrder::OnNoteCheckValue(){
	return 0;
} 
void CHMSSurgery_OperationOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSSurgery_OperationOrder();
	 return 0;
} 
void CHMSSurgery_OperationOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSSurgery_OperationOrder();
	 return 0;
} 
void CHMSSurgery_OperationOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListDeleteItem();
	 return 0;
} 
void CHMSSurgery_OperationOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	OnSaveHMSSurgery_OperationOrder();
	 return 0;
} 
void CHMSSurgery_OperationOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0)
		return -1;
	m_szOrderNo = m_wndOrderList.GetItemText(nSel, 0);
	if(m_szStatus != _T("O"))
		return -1;
	CHMSConfirmDialog dlg;
	if(dlg.DoModal() == IDOK){
		CString szSQL;
		szSQL.Format(_T("UPDATE hms_soperation SET hso_status='S' WHERE hso_orderno='%s' AND hso_status='O' "), m_szOrderNo);
		pMF->ExecSQL(szSQL);
		OnOrderListLoadData();
		m_wndOrderList.SetCurSel(nSel);
	}
	return 0;
} 
void CHMSSurgery_OperationOrder::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgery_OperationOrder::OnPerformDeptSelendok(){
	 
}
/*void CHMSSurgery_OperationOrder::OnPerformDeptSetfocus(){
	
}*/
/*void CHMSSurgery_OperationOrder::OnPerformDeptKillfocus(){
	
}*/
long CHMSSurgery_OperationOrder::OnPerformDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformDept.IsSearchKey() && !m_szPerformDeptKey.IsEmpty()){
	};
	m_wndPerformDept.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgery_OperationOrder::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSSurgery_OperationOrder::OnAddHMSSurgery_OperationOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSSurgery_OperationOrder"))) 
 		return -1; 
 	SetMode(VM_ADD);
	m_szOrderDate = pMF->GetSysDateTime();
	UpdateData(false);
	return 0; 
} 
int CHMSSurgery_OperationOrder::OnEditHMSSurgery_OperationOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
//Kiem tra neu khong phai la thu thuat thi khong duoc cap nhat ket qua
//Ket qua nay se do module phau thuat-thu thuat nhap lieu
	if(m_szGroupKey[0] != _T('3'))
		return -1;


 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSSurgery_OperationOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
	m_szPerformDate = pMF->GetSysDateTime();
	UpdateData(false);
	return 0;  
 
} 
int CHMSSurgery_OperationOrder::OnDeleteHMSSurgery_OperationOrder(){
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
 		OnCancelHMSSurgery_OperationOrder(); 
 	}
return 0;
 } 
int CHMSSurgery_OperationOrder::OnSaveHMSSurgery_OperationOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndOrderDate.SetMax((LPCTSTR)pMF->GetSysDateTime());
 	if(!IsValidateData()) 
 		return -1; 

 	

 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
		bool bConfirm = true;
		if(bConfirm)
		{
			CHMSConfirmDialog dlg;
			if(dlg.DoModal() != IDOK)
				return -1;
		}

 		szSQL = m_hms_soperationTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
		CString szWhere;
		szWhere.Format(_T(" WHERE hso_orderno='%s' "), m_szOrderNo);
		szSQL.Format(_T("UPDATE hms_soperation ")\
			_T("SET hso_pdeptid='%s', hso_beforeso='%s', hso_inmethod='%s', hso_afterso='%s', ") \
			_T("hso_practitioner='%s', hso_anesthetist='%s',hso_performdate='%s', hso_note='%s' %s "),
			m_wndMethod.GetCurrent(2), m_szBeforeSO, m_szInsensibleMethod, m_szAfterSO, m_szPractitionerKey, m_szAnesthetistKey, m_szPerformDate, m_szNote, szWhere);
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSSurgery_OperationOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
		OnOrderListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSurgery_OperationOrder::OnCancelHMSSurgery_OperationOrder(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSSurgery_OperationOrder::OnHMSSurgery_OperationOrderListLoadData(){
	return 0;
}

void CHMSSurgery_OperationOrder::RefreshView(long nDocNo, int nReceptIdx){
	OnOrderListLoadData();
	SetDefaultValues();
	UpdateData(false);
}
int CHMSSurgery_OperationOrder::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0)
		return -1;
	if(m_szStatus != _T("S"))
		return -1;
	m_szOrderNo = m_wndOrderList.GetItemText(nSel, 0);
	CHMSConfirmDialog dlg;
	if(dlg.DoModal() == IDOK){
		CString szSQL;
		szSQL.Format(_T("UPDATE hms_soperation SET hso_status='O' WHERE hso_orderno='%s' AND hso_status='S' "), m_szOrderNo);
		pMF->ExecSQL(szSQL);
		OnOrderListLoadData();
		m_wndOrderList.SetCurSel(nSel);
	}
	return 0;
}
