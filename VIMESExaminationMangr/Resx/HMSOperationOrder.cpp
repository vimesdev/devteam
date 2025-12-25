#include "HMSOperationOrder.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrder*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSOperationOrder*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationOrder*)pWnd)->OnOrderListDeleteItem();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrder* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrder* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnNameAddNew();
}*/
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrder* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnPerformDeptAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnInsensibleMethodChangeFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnInsensibleMethodChange();
} */
/*static void _OnInsensibleMethodSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnInsensibleMethodSetfocus();} */ 
/*static void _OnInsensibleMethodKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnInsensibleMethodKillfocus();
} */
static int _OnInsensibleMethodCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnInsensibleMethodCheckValue();
} 
/*static void _OnBeforeOperationChangeFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnBeforeOperationChange();
} */
/*static void _OnBeforeOperationSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnBeforeOperationSetfocus();} */ 
/*static void _OnBeforeOperationKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnBeforeOperationKillfocus();
} */
static int _OnBeforeOperationCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnBeforeOperationCheckValue();
} 
/*static void _OnAfterOperationChangeFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnAfterOperationChange();
} */
/*static void _OnAfterOperationSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnAfterOperationSetfocus();} */ 
/*static void _OnAfterOperationKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnAfterOperationKillfocus();
} */
static int _OnAfterOperationCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnAfterOperationCheckValue();
} 
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrder* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnPractitionerAddNew();
}*/
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnPerformDateCheckValue();
} 
static void _OnAnesthetistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrder* )pWnd)->OnAnesthetistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthetistSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnAnesthetistSelendok();
}
/*static void _OnAnesthetistSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnAnesthetistKillfocus();
}*/
/*static void _OnAnesthetistKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnAnesthetistKillfocus();
}*/
static long _OnAnesthetistLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnAnesthetistLoadData();
}
/*static void _OnAnesthetistAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnAnesthetistAddNew();
}*/
static void _OnAssistantSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrder* )pWnd)->OnAssistantSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssistantSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnAssistantSelendok();
}
/*static void _OnAssistantSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnAssistantKillfocus();
}*/
/*static void _OnAssistantKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnAssistantKillfocus();
}*/
static long _OnAssistantLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnAssistantLoadData();
}
/*static void _OnAssistantAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnAssistantAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrder *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSOperationOrder *pVw = (CHMSOperationOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSOperationOrder *pVw = (CHMSOperationOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSOperationOrder *pVw = (CHMSOperationOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOperationOrder *pVw = (CHMSOperationOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOperationOrder *pVw = (CHMSOperationOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSOperationOrder *pVw = (CHMSOperationOrder *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSOperationOrder *pVw = (CHMSOperationOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSOperationOrderFnc(CWnd *pWnd){
	 return ((CHMSOperationOrder*)pWnd)->OnAddHMSOperationOrder();
} 
static int _OnEditHMSOperationOrderFnc(CWnd *pWnd){
	 return ((CHMSOperationOrder*)pWnd)->OnEditHMSOperationOrder();
} 
static int _OnDeleteHMSOperationOrderFnc(CWnd *pWnd){
	 return ((CHMSOperationOrder*)pWnd)->OnDeleteHMSOperationOrder();
} 
static int _OnSaveHMSOperationOrderFnc(CWnd *pWnd){
	 return ((CHMSOperationOrder*)pWnd)->OnSaveHMSOperationOrder();
} 
static int _OnCancelHMSOperationOrderFnc(CWnd *pWnd){
	 return ((CHMSOperationOrder*)pWnd)->OnCancelHMSOperationOrder();
} 
CHMSOperationOrder::CHMSOperationOrder(){

	m_nDlgWidth = 906;
	m_nDlgHeight = 751;
	SetDefaultValues();
}
CHMSOperationOrder::~CHMSOperationOrder(){
}
void CHMSOperationOrder::OnCreateComponents(){
	m_wndOperationInformation.Create(this, _T("Operation Information"), 5, 5, 595, 525);
	m_wndOrderList.Create(this,11, 30, 591, 150); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 155, 130, 180);
	m_wndGroup.Create(this,135, 155, 335, 180); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 340, 155, 445, 180);
	m_wndOrderDate.Create(this,450, 155, 590, 180); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 185, 130, 210);
	m_wndName.Create(this,135, 185, 590, 210); 
	m_wndPerformDeptLabel.Create(this, _T("Perform Dept"), 10, 215, 130, 240);
	m_wndPerformDept.Create(this,135, 215, 335, 240); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 340, 215, 445, 240);
	m_wndQuantity.Create(this,450, 215, 520, 240); 
	m_wndInsensibleMethodLabel.Create(this, _T("Insensible Method"), 10, 245, 130, 295);
	m_wndInsensibleMethod.Create(this,135, 245, 591, 295); 
	m_wndAfterOperationLabel.Create(this, _T("After Operation"), 10, 355, 130, 380);
	m_wndBeforeOperation.Create(this,134, 300, 590, 350); 
	m_wndBeforeOperationLabel.Create(this, _T("Before Operation"), 9, 300, 129, 325);
	m_wndAfterOperation.Create(this,135, 355, 591, 405); 
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 10, 410, 130, 435);
	m_wndPractitioner.Create(this,135, 410, 335, 435); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 340, 410, 445, 435);
	m_wndPerformDate.Create(this,450, 410, 590, 435); 
	m_wndAnesthetistLabel.Create(this, _T("Anesthetist"), 10, 440, 130, 465);
	m_wndAnesthetist.Create(this,135, 440, 335, 465); 
	m_wndAssistantLabel.Create(this, _T("Assistant"), 340, 440, 445, 465);
	m_wndAssistant.Create(this,450, 440, 590, 465); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 470, 130, 495);
	m_wndNote.Create(this,135, 470, 591, 520); 
	m_wndAdd.Create(this, _T("&Add"), 15, 530, 95, 555);
	m_wndEdit.Create(this, _T("&Edit"), 100, 530, 175, 555);
	m_wndDelete.Create(this, _T("&Delete"), 180, 530, 260, 555);
	m_wndSave.Create(this, _T("&Save"), 265, 530, 345, 555);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 530, 430, 555);
	m_wndConfirm.Create(this, _T("&Confirm"), 435, 530, 510, 555);
	m_wndPrint.Create(this, _T("&Print"), 515, 530, 595, 555);

}
void CHMSOperationOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(16);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(1024);
	m_wndPerformDept.SetCheckValue(true);
	m_wndPerformDept.LimitText(35);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndInsensibleMethod.SetLimitText(35);
	m_wndInsensibleMethod.SetCheckValue(true);
	m_wndBeforeOperation.SetLimitText(35);
	m_wndBeforeOperation.SetCheckValue(true);
	m_wndAfterOperation.SetLimitText(35);
	m_wndAfterOperation.SetCheckValue(true);
	m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(35);
	m_wndPerformDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndPerformDate.SetCheckValue(true);
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




	m_wndName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


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

}
void CHMSOperationOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	m_wndPerformDept.SetEvent(WE_SELENDOK, _OnPerformDeptSelendokFnc);
	//m_wndPerformDept.SetEvent(WE_SETFOCUS, _OnPerformDeptSetfocusFnc);
	//m_wndPerformDept.SetEvent(WE_KILLFOCUS, _OnPerformDeptKillfocusFnc);
	m_wndPerformDept.SetEvent(WE_SELCHANGE, _OnPerformDeptSelectChangeFnc);
	m_wndPerformDept.SetEvent(WE_LOADDATA, _OnPerformDeptLoadDataFnc);
	//m_wndPerformDept.SetEvent(WE_ADDNEW, _OnPerformDeptAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndInsensibleMethod.SetEvent(WE_CHANGE, _OnInsensibleMethodChangeFnc);
	//m_wndInsensibleMethod.SetEvent(WE_SETFOCUS, _OnInsensibleMethodSetfocusFnc);
	//m_wndInsensibleMethod.SetEvent(WE_KILLFOCUS, _OnInsensibleMethodKillfocusFnc);
	m_wndInsensibleMethod.SetEvent(WE_CHECKVALUE, _OnInsensibleMethodCheckValueFnc);
	//m_wndBeforeOperation.SetEvent(WE_CHANGE, _OnBeforeOperationChangeFnc);
	//m_wndBeforeOperation.SetEvent(WE_SETFOCUS, _OnBeforeOperationSetfocusFnc);
	//m_wndBeforeOperation.SetEvent(WE_KILLFOCUS, _OnBeforeOperationKillfocusFnc);
	m_wndBeforeOperation.SetEvent(WE_CHECKVALUE, _OnBeforeOperationCheckValueFnc);
	//m_wndAfterOperation.SetEvent(WE_CHANGE, _OnAfterOperationChangeFnc);
	//m_wndAfterOperation.SetEvent(WE_SETFOCUS, _OnAfterOperationSetfocusFnc);
	//m_wndAfterOperation.SetEvent(WE_KILLFOCUS, _OnAfterOperationKillfocusFnc);
	m_wndAfterOperation.SetEvent(WE_CHECKVALUE, _OnAfterOperationCheckValueFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
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
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOperationOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOperationOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOperationOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOperationOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOperationOrderFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSOperationOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_TextEx(pDX, m_wndPerformDept.GetDlgCtrlID(), m_szPerformDeptKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndInsensibleMethod.GetDlgCtrlID(), m_szInsensibleMethod);
	DDX_Text(pDX, m_wndBeforeOperation.GetDlgCtrlID(), m_szBeforeOperation);
	DDX_Text(pDX, m_wndAfterOperation.GetDlgCtrlID(), m_szAfterOperation);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_TextEx(pDX, m_wndAnesthetist.GetDlgCtrlID(), m_szAnesthetistKey);
	DDX_TextEx(pDX, m_wndAssistant.GetDlgCtrlID(), m_szAssistantKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSOperationOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hso_performdate"), m_szPerformDate);

}
void CHMSOperationOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_soperationTbl.SetValue(_T("hso_createdby"), pMF->GetCurrentUser());
	m_hms_soperationTbl.SetValue(_T("hso_createddate"), pMF->GetSysDateTime());
	m_hms_soperationTbl.SetValue(_T("hso_updatedby"), pMF->GetCurrentUser());
	m_hms_soperationTbl.SetValue(_T("hso_updateddate"), pMF->GetSysDateTime());
	m_hms_soperationTbl.SetValue(_T("hso_performdate"), m_szPerformDate);

}
void CHMSOperationOrder::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szOrderDate.Empty();
	m_szNameKey.Empty();
	m_szPerformDeptKey.Empty();
	m_nQuantity=0;
	m_szInsensibleMethod.Empty();
	m_szBeforeOperation.Empty();
	m_szAfterOperation.Empty();
	m_szPractitionerKey.Empty();
	m_szPerformDate.Empty();
	m_szAnesthetistKey.Empty();
	m_szAssistantKey.Empty();
	m_szNote.Empty();

}
int CHMSOperationOrder::SetMode(int nMode){
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
void CHMSOperationOrder::OnOrderListDblClick(){
	
} 
void CHMSOperationOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOperationOrder::OnOrderListLoadData(){
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
void CHMSOperationOrder::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnGroupSelendok(){
	 
}
/*void CHMSOperationOrder::OnGroupSetfocus(){
	
}*/
/*void CHMSOperationOrder::OnGroupKillfocus(){
	
}*/
long CHMSOperationOrder::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationOrder::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationOrder::OnOrderDateChange(){
	
} */
/*void CHMSOperationOrder::OnOrderDateSetfocus(){
	
} */
/*void CHMSOperationOrder::OnOrderDateKillfocus(){
	
} */
int CHMSOperationOrder::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSOperationOrder::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnNameSelendok(){
	 
}
/*void CHMSOperationOrder::OnNameSetfocus(){
	
}*/
/*void CHMSOperationOrder::OnNameKillfocus(){
	
}*/
long CHMSOperationOrder::OnNameLoadData(){
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
/*void CHMSOperationOrder::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationOrder::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnPerformDeptSelendok(){
	 
}
/*void CHMSOperationOrder::OnPerformDeptSetfocus(){
	
}*/
/*void CHMSOperationOrder::OnPerformDeptKillfocus(){
	
}*/
long CHMSOperationOrder::OnPerformDeptLoadData(){
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
/*void CHMSOperationOrder::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationOrder::OnQuantityChange(){
	
} */
/*void CHMSOperationOrder::OnQuantitySetfocus(){
	
} */
/*void CHMSOperationOrder::OnQuantityKillfocus(){
	
} */
int CHMSOperationOrder::OnQuantityCheckValue(){
	return 0;
} 
/*void CHMSOperationOrder::OnInsensibleMethodChange(){
	
} */
/*void CHMSOperationOrder::OnInsensibleMethodSetfocus(){
	
} */
/*void CHMSOperationOrder::OnInsensibleMethodKillfocus(){
	
} */
int CHMSOperationOrder::OnInsensibleMethodCheckValue(){
	return 0;
} 
/*void CHMSOperationOrder::OnBeforeOperationChange(){
	
} */
/*void CHMSOperationOrder::OnBeforeOperationSetfocus(){
	
} */
/*void CHMSOperationOrder::OnBeforeOperationKillfocus(){
	
} */
int CHMSOperationOrder::OnBeforeOperationCheckValue(){
	return 0;
} 
/*void CHMSOperationOrder::OnAfterOperationChange(){
	
} */
/*void CHMSOperationOrder::OnAfterOperationSetfocus(){
	
} */
/*void CHMSOperationOrder::OnAfterOperationKillfocus(){
	
} */
int CHMSOperationOrder::OnAfterOperationCheckValue(){
	return 0;
} 
void CHMSOperationOrder::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnPractitionerSelendok(){
	 
}
/*void CHMSOperationOrder::OnPractitionerSetfocus(){
	
}*/
/*void CHMSOperationOrder::OnPractitionerKillfocus(){
	
}*/
long CHMSOperationOrder::OnPractitionerLoadData(){
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
/*void CHMSOperationOrder::OnPractitionerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationOrder::OnPerformDateChange(){
	
} */
/*void CHMSOperationOrder::OnPerformDateSetfocus(){
	
} */
/*void CHMSOperationOrder::OnPerformDateKillfocus(){
	
} */
int CHMSOperationOrder::OnPerformDateCheckValue(){
	return 0;
} 
void CHMSOperationOrder::OnAnesthetistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnAnesthetistSelendok(){
	 
}
/*void CHMSOperationOrder::OnAnesthetistSetfocus(){
	
}*/
/*void CHMSOperationOrder::OnAnesthetistKillfocus(){
	
}*/
long CHMSOperationOrder::OnAnesthetistLoadData(){
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
/*void CHMSOperationOrder::OnAnesthetistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationOrder::OnAssistantSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnAssistantSelendok(){
	 
}
/*void CHMSOperationOrder::OnAssistantSetfocus(){
	
}*/
/*void CHMSOperationOrder::OnAssistantKillfocus(){
	
}*/
long CHMSOperationOrder::OnAssistantLoadData(){
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
/*void CHMSOperationOrder::OnAssistantAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationOrder::OnNoteChange(){
	
} */
/*void CHMSOperationOrder::OnNoteSetfocus(){
	
} */
/*void CHMSOperationOrder::OnNoteKillfocus(){
	
} */
int CHMSOperationOrder::OnNoteCheckValue(){
	return 0;
} 
void CHMSOperationOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationOrder::OnAddHMSOperationOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSOperationOrder::OnEditHMSOperationOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationOrder::OnDeleteHMSOperationOrder(){
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
 		OnCancelHMSOperationOrder(); 
 	}
	return 0;
}
int CHMSOperationOrder::OnSaveHMSOperationOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_soperationTbl.GetInsertSQL(); 
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
 		//OnHMSOperationOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSOperationOrder::OnCancelHMSOperationOrder(){
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
int CHMSOperationOrder::OnHMSOperationOrderListLoadData(){
	return 0;
}
