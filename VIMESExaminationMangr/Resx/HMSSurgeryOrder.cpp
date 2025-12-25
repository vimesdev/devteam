#include "HMSSurgeryOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryOrder*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSSurgeryOrder*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgeryOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOrder*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOrder *)pWnd)->OnPerformDateCheckValue();
} 
static void _OnMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryOrder* )pWnd)->OnMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMethodSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnMethodSelendok();
}
/*static void _OnMethodSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnMethodKillfocus();
}*/
/*static void _OnMethodKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnMethodKillfocus();
}*/
static long _OnMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryOrder *)pWnd)->OnMethodLoadData();
}
/*static void _OnMethodAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnMethodAddNew();
}*/
/*static void _OnInsensibleMethodChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnInsensibleMethodChange();
} */
/*static void _OnInsensibleMethodSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnInsensibleMethodSetfocus();} */ 
/*static void _OnInsensibleMethodKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnInsensibleMethodKillfocus();
} */
static int _OnInsensibleMethodCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOrder *)pWnd)->OnInsensibleMethodCheckValue();
} 
/*static void _OnBeforeSOChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnBeforeSOChange();
} */
/*static void _OnBeforeSOSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnBeforeSOSetfocus();} */ 
/*static void _OnBeforeSOKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnBeforeSOKillfocus();
} */
static int _OnBeforeSOCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOrder *)pWnd)->OnBeforeSOCheckValue();
} 
/*static void _OnAfterSOChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnAfterSOChange();
} */
/*static void _OnAfterSOSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnAfterSOSetfocus();} */ 
/*static void _OnAfterSOKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnAfterSOKillfocus();
} */
static int _OnAfterSOCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOrder *)pWnd)->OnAfterSOCheckValue();
} 
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryOrder* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryOrder *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnPractitionerAddNew();
}*/
static void _OnAnesthetistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryOrder* )pWnd)->OnAnesthetistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthetistSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnAnesthetistSelendok();
}
/*static void _OnAnesthetistSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnAnesthetistKillfocus();
}*/
/*static void _OnAnesthetistKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnAnesthetistKillfocus();
}*/
static long _OnAnesthetistLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryOrder *)pWnd)->OnAnesthetistLoadData();
}
/*static void _OnAnesthetistAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnAnesthetistAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryOrder *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSurgeryOrder *pVw = (CHMSSurgeryOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSSurgeryOrder *pVw = (CHMSSurgeryOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSurgeryOrder *pVw = (CHMSSurgeryOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSurgeryOrder *pVw = (CHMSSurgeryOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSSurgeryOrder *pVw = (CHMSSurgeryOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryOrder* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryOrder *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryOrder *)pWnd)->OnPerformDeptAddNew();
}*/
static int _OnAddHMSSurgeryOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOrder*)pWnd)->OnAddHMSSurgeryOrder();
} 
static int _OnEditHMSSurgeryOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOrder*)pWnd)->OnEditHMSSurgeryOrder();
} 
static int _OnDeleteHMSSurgeryOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOrder*)pWnd)->OnDeleteHMSSurgeryOrder();
} 
static int _OnSaveHMSSurgeryOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOrder*)pWnd)->OnSaveHMSSurgeryOrder();
} 
static int _OnCancelHMSSurgeryOrderFnc(CWnd *pWnd){
	 return ((CHMSSurgeryOrder*)pWnd)->OnCancelHMSSurgeryOrder();
} 
CHMSSurgeryOrder::CHMSSurgeryOrder(){

	m_nDlgWidth = 630;
	m_nDlgHeight = 596;
	SetDefaultValues();
}
CHMSSurgeryOrder::~CHMSSurgeryOrder(){
}
void CHMSSurgeryOrder::OnCreateComponents(){
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
void CHMSSurgeryOrder::OnInitializeComponents(){
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


	m_wndMethod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);






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
void CHMSSurgeryOrder::OnSetWindowEvents(){
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSSurgeryOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSSurgeryOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSSurgeryOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSSurgeryOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSSurgeryOrderFnc, 0, 'T', VK_CONTROL);

}
void CHMSSurgeryOrder::OnDoDataExchange(CDataExchange* pDX){
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
void CHMSSurgeryOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hso_performdate"), m_szPerformDate);

}
void CHMSSurgeryOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_soperationTbl.SetValue(_T("hso_createdby"), pMF->GetCurrentUser());
	m_hms_soperationTbl.SetValue(_T("hso_createddate"), pMF->GetSysDateTime());
	m_hms_soperationTbl.SetValue(_T("hso_updatedby"), pMF->GetCurrentUser());
	m_hms_soperationTbl.SetValue(_T("hso_updateddate"), pMF->GetSysDateTime());
	m_hms_soperationTbl.SetValue(_T("hso_performdate"), m_szPerformDate);

}
void CHMSSurgeryOrder::SetDefaultValues(){

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
int CHMSSurgeryOrder::SetMode(int nMode){ 
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
void CHMSSurgeryOrder::OnOrderListDblClick(){
	
} 
void CHMSSurgeryOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgeryOrder::OnOrderListLoadData(){
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
			rs.GetValue(_T("PerformDate")), 
			rs.GetValue(_T("Status")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryOrder::OnOrderDateChange(){
	
} */
/*void CHMSSurgeryOrder::OnOrderDateSetfocus(){
	
} */
/*void CHMSSurgeryOrder::OnOrderDateKillfocus(){
	
} */
int CHMSSurgeryOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CHMSSurgeryOrder::OnPerformDateChange(){
	
} */
/*void CHMSSurgeryOrder::OnPerformDateSetfocus(){
	
} */
/*void CHMSSurgeryOrder::OnPerformDateKillfocus(){
	
} */
int CHMSSurgeryOrder::OnPerformDateCheckValue(){
	return 0;
} 
void CHMSSurgeryOrder::OnMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOrder::OnMethodSelendok(){
	 
}
/*void CHMSSurgeryOrder::OnMethodSetfocus(){
	
}*/
/*void CHMSSurgeryOrder::OnMethodKillfocus(){
	
}*/
long CHMSSurgeryOrder::OnMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMethod.IsSearchKey() && !m_szMethodKey.IsEmpty()){
	};
	m_wndMethod.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryOrder::OnMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryOrder::OnInsensibleMethodChange(){
	
} */
/*void CHMSSurgeryOrder::OnInsensibleMethodSetfocus(){
	
} */
/*void CHMSSurgeryOrder::OnInsensibleMethodKillfocus(){
	
} */
int CHMSSurgeryOrder::OnInsensibleMethodCheckValue(){
	return 0;
} 
/*void CHMSSurgeryOrder::OnBeforeSOChange(){
	
} */
/*void CHMSSurgeryOrder::OnBeforeSOSetfocus(){
	
} */
/*void CHMSSurgeryOrder::OnBeforeSOKillfocus(){
	
} */
int CHMSSurgeryOrder::OnBeforeSOCheckValue(){
	return 0;
} 
/*void CHMSSurgeryOrder::OnAfterSOChange(){
	
} */
/*void CHMSSurgeryOrder::OnAfterSOSetfocus(){
	
} */
/*void CHMSSurgeryOrder::OnAfterSOKillfocus(){
	
} */
int CHMSSurgeryOrder::OnAfterSOCheckValue(){
	return 0;
} 
void CHMSSurgeryOrder::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOrder::OnPractitionerSelendok(){
	 
}
/*void CHMSSurgeryOrder::OnPractitionerSetfocus(){
	
}*/
/*void CHMSSurgeryOrder::OnPractitionerKillfocus(){
	
}*/
long CHMSSurgeryOrder::OnPractitionerLoadData(){
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
/*void CHMSSurgeryOrder::OnPractitionerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryOrder::OnAnesthetistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOrder::OnAnesthetistSelendok(){
	 
}
/*void CHMSSurgeryOrder::OnAnesthetistSetfocus(){
	
}*/
/*void CHMSSurgeryOrder::OnAnesthetistKillfocus(){
	
}*/
long CHMSSurgeryOrder::OnAnesthetistLoadData(){
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
/*void CHMSSurgeryOrder::OnAnesthetistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryOrder::OnNoteChange(){
	
} */
/*void CHMSSurgeryOrder::OnNoteSetfocus(){
	
} */
/*void CHMSSurgeryOrder::OnNoteKillfocus(){
	
} */
int CHMSSurgeryOrder::OnNoteCheckValue(){
	return 0;
} 
void CHMSSurgeryOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOrder::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryOrder::OnPerformDeptSelendok(){
	 
}
/*void CHMSSurgeryOrder::OnPerformDeptSetfocus(){
	
}*/
/*void CHMSSurgeryOrder::OnPerformDeptKillfocus(){
	
}*/
long CHMSSurgeryOrder::OnPerformDeptLoadData(){
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
/*void CHMSSurgeryOrder::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSSurgeryOrder::OnAddHMSSurgeryOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSSurgeryOrder"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSSurgeryOrder::OnEditHMSSurgeryOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSSurgeryOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSSurgeryOrder::OnDeleteHMSSurgeryOrder(){
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
 		OnCancelHMSSurgeryOrder(); 
 	}
return 0;
 } 
int CHMSSurgeryOrder::OnSaveHMSSurgeryOrder(){
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
 		//OnHMSSurgeryOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSurgeryOrder::OnCancelHMSSurgeryOrder(){
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
int CHMSSurgeryOrder::OnHMSSurgeryOrderListLoadData(){
	return 0;
}
