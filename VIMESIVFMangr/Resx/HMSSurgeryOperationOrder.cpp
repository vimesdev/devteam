#include "HMSSurgeryOperationOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgeryOperationOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOperationOrder*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnRoomChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnRoomChange();
} */
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnRoomSetfocus();} */ 
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnRoomKillfocus();
} */
static int _OnRoomCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnRoomCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryOperationOrder* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnPerformDeptAddNew();
}*/
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnPerformDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryOperationOrder* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnNameAddNew();
}*/
/*static void _OnInsensibleMethodChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnInsensibleMethodChange();
} */
/*static void _OnInsensibleMethodSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnInsensibleMethodSetfocus();} */ 
/*static void _OnInsensibleMethodKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnInsensibleMethodKillfocus();
} */
static int _OnInsensibleMethodCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnInsensibleMethodCheckValue();
} 
/*static void _OnBeforeSOChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnBeforeSOChange();
} */
/*static void _OnBeforeSOSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnBeforeSOSetfocus();} */ 
/*static void _OnBeforeSOKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnBeforeSOKillfocus();
} */
static int _OnBeforeSOCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnBeforeSOCheckValue();
} 
/*static void _OnAfterSOChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnAfterSOChange();
} */
/*static void _OnAfterSOSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnAfterSOSetfocus();} */ 
/*static void _OnAfterSOKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnAfterSOKillfocus();
} */
static int _OnAfterSOCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnAfterSOCheckValue();
} 
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryOperationOrder* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnPractitionerAddNew();
}*/
static void _OnAnesthetistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryOperationOrder* )pWnd)->OnAnesthetistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthetistSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnAnesthetistSelendok();
}
/*static void _OnAnesthetistSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnAnesthetistKillfocus();
}*/
/*static void _OnAnesthetistKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnAnesthetistKillfocus();
}*/
static long _OnAnesthetistLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnAnesthetistLoadData();
}
/*static void _OnAnesthetistAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnAnesthetistAddNew();
}*/
static void _OnAssistantSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryOperationOrder* )pWnd)->OnAssistantSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssistantSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnAssistantSelendok();
}
/*static void _OnAssistantSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnAssistantKillfocus();
}*/
/*static void _OnAssistantKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnAssistantKillfocus();
}*/
static long _OnAssistantLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnAssistantLoadData();
}
/*static void _OnAssistantAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnAssistantAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOperationOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOperationOrder *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSurgeryOperationOrder *pVw = (CHMSSurgeryOperationOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSSurgeryOperationOrder *pVw = (CHMSSurgeryOperationOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSurgeryOperationOrder *pVw = (CHMSSurgeryOperationOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSurgeryOperationOrder *pVw = (CHMSSurgeryOperationOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSSurgeryOperationOrder *pVw = (CHMSSurgeryOperationOrder *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSSurgeryOperationOrder *pVw = (CHMSSurgeryOperationOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSSurgeryOperationOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOperationOrder*)pWnd)->OnAddHMSSurgeryOperationOrder();
} 
static int _OnEditHMSSurgeryOperationOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOperationOrder*)pWnd)->OnEditHMSSurgeryOperationOrder();
} 
static int _OnDeleteHMSSurgeryOperationOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOperationOrder*)pWnd)->OnDeleteHMSSurgeryOperationOrder();
} 
static int _OnSaveHMSSurgeryOperationOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOperationOrder*)pWnd)->OnSaveHMSSurgeryOperationOrder();
} 
static int _OnCancelHMSSurgeryOperationOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOperationOrder*)pWnd)->OnCancelHMSSurgeryOperationOrder();
} 
CHMSSurgeryOperationOrder::CHMSSurgeryOperationOrder(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CHMSSurgeryOperationOrder::~CHMSSurgeryOperationOrder(){
}
void CHMSSurgeryOperationOrder::OnCreateComponents(){
	m_wndSurgery_OperationInformation.Create(this, _T("Surgery Information"), 5, 5, 595, 545);
	m_wndOrderList.Create(this,10, 29, 590, 170); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 175, 130, 200);
	m_wndRoom.Create(this,135, 175, 335, 200); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 340, 175, 445, 200);
	m_wndOrderDate.Create(this,450, 175, 590, 200); 
	m_wndPerformDeptLabel.Create(this, _T("Perform Dept"), 10, 205, 130, 230);
	m_wndPerformDept.Create(this,135, 205, 335, 230); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 340, 205, 445, 230);
	m_wndPerformDate.Create(this,450, 205, 590, 230); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 235, 130, 260);
	m_wndName.Create(this,135, 235, 591, 260); 
	m_wndInsensibleMethodLabel.Create(this, _T("Insensible Method"), 10, 265, 130, 315);
	m_wndInsensibleMethod.Create(this,135, 265, 591, 315); 
	m_wndAfterSOLabel.Create(this, _T("After Surgery"), 10, 375, 130, 400);
	m_wndBeforeSO.Create(this,135, 320, 591, 370); 
	m_wndBeforeSOLabel.Create(this, _T("Before Surgery"), 10, 320, 130, 345);
	m_wndAfterSO.Create(this,135, 375, 591, 425); 
	m_wndSurgeonLabel.Create(this, _T("Surgeon"), 10, 430, 130, 455);
	m_wndPractitioner.Create(this,135, 430, 335, 455); 
	m_wndAnesthetistLabel.Create(this, _T("Anesthetist"), 10, 460, 130, 485);
	m_wndAnesthetist.Create(this,135, 460, 335, 485); 
	m_wndAssistantLabel.Create(this, _T("Assistant"), 340, 460, 410, 485);
	m_wndAssistant.Create(this,415, 460, 591, 485); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 490, 130, 515);
	m_wndNote.Create(this,135, 490, 591, 540); 
	m_wndAdd.Create(this, _T("&Add"), 95, 555, 175, 580);
	m_wndDelete.Create(this, _T("&Delete"), 180, 555, 260, 580);
	m_wndSave.Create(this, _T("&Save"), 265, 555, 345, 580);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 555, 430, 580);
	m_wndConfirm.Create(this, _T("&Confirm"), 435, 555, 510, 580);
	m_wndPrint.Create(this, _T("&Print"), 515, 555, 595, 580);

}
void CHMSSurgeryOperationOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndRoom.SetLimitText(16);
	m_wndRoom.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndPerformDept.SetCheckValue(true);
	m_wndPerformDept.LimitText(35);
	m_wndPerformDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndPerformDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(1024);
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
	m_wndAssistant.SetCheckValue(true);
	m_wndAssistant.LimitText(35);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);


	m_wndOrderList.InsertColumn(0, _T("Order ID"), CFMT_NUMBER, 80);
	m_wndOrderList.InsertColumn(1, _T("Order Date"), CFMT_TEXT, 125);
	m_wndOrderList.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);
	m_wndOrderList.InsertColumn(3, _T("Status"), CFMT_TEXT, 100);


	m_wndPerformDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPerformDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);






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

}
void CHMSSurgeryOperationOrder::OnSetWindowEvents(){
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndRoom.SetEvent(WE_CHANGE, _OnRoomChangeFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_CHECKVALUE, _OnRoomCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndPerformDept.SetEvent(WE_SELENDOK, _OnPerformDeptSelendokFnc);
	//m_wndPerformDept.SetEvent(WE_SETFOCUS, _OnPerformDeptSetfocusFnc);
	//m_wndPerformDept.SetEvent(WE_KILLFOCUS, _OnPerformDeptKillfocusFnc);
	m_wndPerformDept.SetEvent(WE_SELCHANGE, _OnPerformDeptSelectChangeFnc);
	m_wndPerformDept.SetEvent(WE_LOADDATA, _OnPerformDeptLoadDataFnc);
	//m_wndPerformDept.SetEvent(WE_ADDNEW, _OnPerformDeptAddNewFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
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
	m_wndAssistant.SetEvent(WE_SELENDOK, _OnAssistantSelendokFnc);
	//m_wndAssistant.SetEvent(WE_SETFOCUS, _OnAssistantSetfocusFnc);
	//m_wndAssistant.SetEvent(WE_KILLFOCUS, _OnAssistantKillfocusFnc);
	m_wndAssistant.SetEvent(WE_SELCHANGE, _OnAssistantSelectChangeFnc);
	m_wndAssistant.SetEvent(WE_LOADDATA, _OnAssistantLoadDataFnc);
	//m_wndAssistant.SetEvent(WE_ADDNEW, _OnAssistantAddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSSurgeryOperationOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSSurgeryOperationOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSSurgeryOperationOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSSurgeryOperationOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSSurgeryOperationOrderFnc, 0, 'T', VK_CONTROL);

}
void CHMSSurgeryOperationOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoom);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndPerformDept.GetDlgCtrlID(), m_szPerformDeptKey);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndInsensibleMethod.GetDlgCtrlID(), m_szInsensibleMethod);
	DDX_Text(pDX, m_wndBeforeSO.GetDlgCtrlID(), m_szBeforeSO);
	DDX_Text(pDX, m_wndAfterSO.GetDlgCtrlID(), m_szAfterSO);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_TextEx(pDX, m_wndAnesthetist.GetDlgCtrlID(), m_szAnesthetistKey);
	DDX_TextEx(pDX, m_wndAssistant.GetDlgCtrlID(), m_szAssistantKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSSurgeryOperationOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hso_performdate"), m_szPerformDate);

}
void CHMSSurgeryOperationOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_soperationTbl.SetValue(_T("hso_createdby"), pMF->GetCurrentUser());
	m_hms_soperationTbl.SetValue(_T("hso_createddate"), pMF->GetSysDateTime());
	m_hms_soperationTbl.SetValue(_T("hso_updatedby"), pMF->GetCurrentUser());
	m_hms_soperationTbl.SetValue(_T("hso_updateddate"), pMF->GetSysDateTime());
	m_hms_soperationTbl.SetValue(_T("hso_performdate"), m_szPerformDate);

}
void CHMSSurgeryOperationOrder::SetDefaultValues(){

	m_szRoom.Empty();
	m_szOrderDate.Empty();
	m_szPerformDeptKey.Empty();
	m_szPerformDate.Empty();
	m_szNameKey.Empty();
	m_szInsensibleMethod.Empty();
	m_szBeforeSO.Empty();
	m_szAfterSO.Empty();
	m_szPractitionerKey.Empty();
	m_szAnesthetistKey.Empty();
	m_szAssistantKey.Empty();
	m_szNote.Empty();

}
int CHMSSurgeryOperationOrder::SetMode(int nMode){ 
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
void CHMSSurgeryOperationOrder::OnOrderListDblClick(){
	
} 
void CHMSSurgeryOperationOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryOperationOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgeryOperationOrder::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	m_wndOrderList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("OrderID")), 
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Status")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryOperationOrder::OnRoomChange(){
	
} */
/*void CHMSSurgeryOperationOrder::OnRoomSetfocus(){
	
} */
/*void CHMSSurgeryOperationOrder::OnRoomKillfocus(){
	
} */
int CHMSSurgeryOperationOrder::OnRoomCheckValue(){
	return 0;
} 
/*void CHMSSurgeryOperationOrder::OnOrderDateChange(){
	
} */
/*void CHMSSurgeryOperationOrder::OnOrderDateSetfocus(){
	
} */
/*void CHMSSurgeryOperationOrder::OnOrderDateKillfocus(){
	
} */
int CHMSSurgeryOperationOrder::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSSurgeryOperationOrder::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOperationOrder::OnPerformDeptSelendok(){
	 
}
/*void CHMSSurgeryOperationOrder::OnPerformDeptSetfocus(){
	
}*/
/*void CHMSSurgeryOperationOrder::OnPerformDeptKillfocus(){
	
}*/
long CHMSSurgeryOperationOrder::OnPerformDeptLoadData(){
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
/*void CHMSSurgeryOperationOrder::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryOperationOrder::OnPerformDateChange(){
	
} */
/*void CHMSSurgeryOperationOrder::OnPerformDateSetfocus(){
	
} */
/*void CHMSSurgeryOperationOrder::OnPerformDateKillfocus(){
	
} */
int CHMSSurgeryOperationOrder::OnPerformDateCheckValue(){
	return 0;
} 
void CHMSSurgeryOperationOrder::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOperationOrder::OnNameSelendok(){
	 
}
/*void CHMSSurgeryOperationOrder::OnNameSetfocus(){
	
}*/
/*void CHMSSurgeryOperationOrder::OnNameKillfocus(){
	
}*/
long CHMSSurgeryOperationOrder::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryOperationOrder::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryOperationOrder::OnInsensibleMethodChange(){
	
} */
/*void CHMSSurgeryOperationOrder::OnInsensibleMethodSetfocus(){
	
} */
/*void CHMSSurgeryOperationOrder::OnInsensibleMethodKillfocus(){
	
} */
int CHMSSurgeryOperationOrder::OnInsensibleMethodCheckValue(){
	return 0;
} 
/*void CHMSSurgeryOperationOrder::OnBeforeSOChange(){
	
} */
/*void CHMSSurgeryOperationOrder::OnBeforeSOSetfocus(){
	
} */
/*void CHMSSurgeryOperationOrder::OnBeforeSOKillfocus(){
	
} */
int CHMSSurgeryOperationOrder::OnBeforeSOCheckValue(){
	return 0;
} 
/*void CHMSSurgeryOperationOrder::OnAfterSOChange(){
	
} */
/*void CHMSSurgeryOperationOrder::OnAfterSOSetfocus(){
	
} */
/*void CHMSSurgeryOperationOrder::OnAfterSOKillfocus(){
	
} */
int CHMSSurgeryOperationOrder::OnAfterSOCheckValue(){
	return 0;
} 
void CHMSSurgeryOperationOrder::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOperationOrder::OnPractitionerSelendok(){
	 
}
/*void CHMSSurgeryOperationOrder::OnPractitionerSetfocus(){
	
}*/
/*void CHMSSurgeryOperationOrder::OnPractitionerKillfocus(){
	
}*/
long CHMSSurgeryOperationOrder::OnPractitionerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CHMSSurgeryOperationOrder::OnPractitionerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryOperationOrder::OnAnesthetistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOperationOrder::OnAnesthetistSelendok(){
	 
}
/*void CHMSSurgeryOperationOrder::OnAnesthetistSetfocus(){
	
}*/
/*void CHMSSurgeryOperationOrder::OnAnesthetistKillfocus(){
	
}*/
long CHMSSurgeryOperationOrder::OnAnesthetistLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CHMSSurgeryOperationOrder::OnAnesthetistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryOperationOrder::OnAssistantSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOperationOrder::OnAssistantSelendok(){
	 
}
/*void CHMSSurgeryOperationOrder::OnAssistantSetfocus(){
	
}*/
/*void CHMSSurgeryOperationOrder::OnAssistantKillfocus(){
	
}*/
long CHMSSurgeryOperationOrder::OnAssistantLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAssistant.IsSearchKey() && !m_szAssistantKey.IsEmpty()){
	};
	m_wndAssistant.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssistant.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryOperationOrder::OnAssistantAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryOperationOrder::OnNoteChange(){
	
} */
/*void CHMSSurgeryOperationOrder::OnNoteSetfocus(){
	
} */
/*void CHMSSurgeryOperationOrder::OnNoteKillfocus(){
	
} */
int CHMSSurgeryOperationOrder::OnNoteCheckValue(){
	return 0;
} 
void CHMSSurgeryOperationOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOperationOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOperationOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOperationOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOperationOrder::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOperationOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryOperationOrder::OnAddHMSSurgeryOperationOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSSurgeryOperationOrder"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSSurgeryOperationOrder::OnEditHMSSurgeryOperationOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSSurgeryOperationOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSSurgeryOperationOrder::OnDeleteHMSSurgeryOperationOrder(){
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
 		OnCancelHMSSurgeryOperationOrder(); 
 	}
return 0;
 } 
int CHMSSurgeryOperationOrder::OnSaveHMSSurgeryOperationOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_soperationTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_soperationTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSSurgeryOperationOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSurgeryOperationOrder::OnCancelHMSSurgeryOperationOrder(){
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
int CHMSSurgeryOperationOrder::OnHMSSurgeryOperationOrderListLoadData(){
	return 0;
}
