#include "HMSPACSOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnOrderListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder*)pWnd)->OnOrderListLoadData();
} 
static int _OnOrderListDblClickFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder*)pWnd)->OnOrderListDblClick();
} 
static int _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSPACSOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder*)pWnd)->OnOrderListDeleteItem();
} 
/*static int _OnOrderIDChangeFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnOrderIDChange();
} */
/*static int _OnOrderIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnOrderIDKillfocus();} */ 
/*static int _OnOrderIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnOrderIDCheckValue();
} 
/*static int _OnOrderDateChangeFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnOrderDateChange();
} */
/*static int _OnOrderDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnOrderDateKillfocus();} */ 
/*static int _OnOrderDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static int _OnResultDateChangeFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnResultDateChange();
} */
/*static int _OnResultDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnResultDateKillfocus();} */ 
/*static int _OnResultDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnResultDateKillfocus();
} */
static int _OnResultDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnResultDateCheckValue();
} 
static int _OnTreatDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSPACSOrder* )pWnd)->OnTreatDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnTreatDoctorSelendokFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder *)pWnd)->OnTreatDoctorSelendok();
}
/*static int _OnTreatDoctorSetfocusFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder *)pWnd)->OnTreatDoctorKillfocus();
}*/
/*static int _OnTreatDoctorKillfocusFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder *)pWnd)->OnTreatDoctorKillfocus();
}*/
static int _OnTreatDoctorLoadDataFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder *)pWnd)->OnTreatDoctorLoadData();
}
/*static int _OnTreatDoctorAddNewFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder *)pWnd)->OnTreatDoctorAddNew();
}*/
static int _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSPACSOrder* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnPractitionerSelendokFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder *)pWnd)->OnPractitionerSelendok();
}
/*static int _OnPractitionerSetfocusFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder *)pWnd)->OnPractitionerKillfocus();
}*/
/*static int _OnPractitionerKillfocusFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder *)pWnd)->OnPractitionerKillfocus();
}*/
static int _OnPractitionerLoadDataFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder *)pWnd)->OnPractitionerLoadData();
}
/*static int _OnPractitionerAddNewFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder *)pWnd)->OnPractitionerAddNew();
}*/
/*static int _OnStatusChangeFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnStatusChange();
} */
/*static int _OnStatusSetfocusFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnStatusKillfocus();} */ 
/*static int _OnStatusKillfocusFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnStatusCheckValue();
} 
/*static int _OnNoteChangeFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnNoteChange();
} */
/*static int _OnNoteSetfocusFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnNoteKillfocus();} */ 
/*static int _OnNoteKillfocusFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSPACSOrder *)pWnd)->OnNoteCheckValue();
} 
static int _OnTestListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder*)pWnd)->OnTestListLoadData();
} 
static int _OnTestListDblClickFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder*)pWnd)->OnTestListDblClick();
} 
static int _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSPACSOrder*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder*)pWnd)->OnTestListDeleteItem();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSPACSOrder *pVw = (CHMSPACSOrder *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSPACSOrder *pVw = (CHMSPACSOrder *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPACSOrder *pVw = (CHMSPACSOrder *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSPACSOrder *pVw = (CHMSPACSOrder *)pWnd;
	return pVw->OnConfirmSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPACSOrder *pVw = (CHMSPACSOrder *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPACSOrder *pVw = (CHMSPACSOrder *)pWnd;
	return pVw->OnPrintSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPACSOrder *pVw = (CHMSPACSOrder *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnAddHMSPACSOrderFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder*)pWnd)->OnAddHMSPACSOrder();
} 
static int _OnEditHMSPACSOrderFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder*)pWnd)->OnEditHMSPACSOrder();
} 
static int _OnDeleteHMSPACSOrderFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder*)pWnd)->OnDeleteHMSPACSOrder();
} 
static int _OnSaveHMSPACSOrderFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder*)pWnd)->OnSaveHMSPACSOrder();
} 
static int _OnCancelHMSPACSOrderFnc(CWnd *pWnd){
	 return ((CHMSPACSOrder*)pWnd)->OnCancelHMSPACSOrder();
} 
CHMSPACSOrder::CHMSPACSOrder(){

	m_nDlgWidth = 614;
	m_nDlgHeight = 491;
	SetDefaultValues();
}
CHMSPACSOrder::~CHMSPACSOrder(){
}
void CHMSPACSOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 601, 25);
	m_wndOrderList.Create(this,6, 30, 598, 118); 
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 8, 123, 70, 143);
	m_wndOrderID.Create(this,75, 123, 150, 143); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 155, 123, 217, 143);
	m_wndOrderDate.Create(this,222, 123, 292, 143); 
	m_wndResultDateLabel.Create(this, _T("Result Date"), 297, 123, 359, 143);
	m_wndResultDate.Create(this,364, 123, 434, 143); 
	m_wndTreatDoctorLabel.Create(this, _T("Treat Doctor"), 6, 148, 68, 168);
	m_wndTreatDoctor.Create(this,73, 148, 291, 168); 
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 296, 148, 358, 168);
	m_wndPractitioner.Create(this,363, 148, 598, 168); 
	m_wndStatusLabel.Create(this, _T("Status"), 439, 123, 489, 143);
	m_wndStatus.Create(this,494, 123, 597, 143); 
	m_wndNoteLabel.Create(this, _T("Note"), 6, 173, 68, 193);
	m_wndNote.Create(this,73, 173, 597, 212); 
	m_wndTestList.Create(this,7, 217, 596, 456); 
	m_wndAdd.Create(this, _T("&Add"), 106, 461, 171, 483);
	m_wndEdit.Create(this, _T("&Edit"), 176, 461, 241, 483);
	m_wndDelete.Create(this, _T("&Delete"), 246, 461, 311, 483);
	m_wndConfirm.Create(this, _T("&Confirm"), 391, 461, 456, 483);
	m_wndCancel.Create(this, _T("&Cancel"), 531, 461, 596, 483);
	m_wndPrint.Create(this, _T("&Print"), 461, 461, 526, 483);
	m_wndSave.Create(this, _T("&Save"), 316, 461, 386, 485);

}
void CHMSPACSOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOrderID.SetLimitText(1024);
	m_wndOrderID.SetDataRequirement(TRUE);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetDataRequirement(TRUE);
	m_wndResultDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndResultDate.SetDataRequirement(TRUE);
	m_wndTreatDoctor.SetDataRequirement(TRUE);
	m_wndTreatDoctor.LimitText(1024);
	m_wndPractitioner.SetDataRequirement(TRUE);
	m_wndPractitioner.LimitText(1024);
	m_wndStatus.SetLimitText(1024);
	m_wndStatus.SetDataRequirement(TRUE);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetDataRequirement(TRUE);


	m_wndOrderList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndOrderList.InsertColumn(1, _T("Order Date"), CFMT_DATE, 70);
	m_wndOrderList.InsertColumn(2, _T("Result Date"), CFMT_DATE, 70);
	m_wndOrderList.InsertColumn(3, _T("Status"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(4, _T("Note"), CFMT_TEXT, 250);
	m_wndOrderList.InsertColumn(5, _T("User ID"), CFMT_TEXT, 50);


	m_wndTreatDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTreatDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPractitioner.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTestList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTestList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndTestList.InsertColumn(3, _T("Normal Index"), CFMT_TEXT, 100);
	m_wndTestList.InsertColumn(4, _T("Result"), CFMT_TEXT, 120);

}
void CHMSPACSOrder::OnSetWindowEvents(){
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
	//m_wndResultDate.SetEvent(WE_CHANGE, _OnResultDateChangeFnc);
	//m_wndResultDate.SetEvent(WE_SETFOCUS, _OnResultDateSetfocusFnc);
	//m_wndResultDate.SetEvent(WE_KILLFOCUS, _OnResultDateKillfocusFnc);
	m_wndResultDate.SetEvent(WE_CHECKVALUE, _OnResultDateCheckValueFnc);
	m_wndTreatDoctor.SetEvent(WE_SELENDOK, _OnTreatDoctorSelendokFnc);
	//m_wndTreatDoctor.SetEvent(WE_SETFOCUS, _OnTreatDoctorSetfocusFnc);
	//m_wndTreatDoctor.SetEvent(WE_KILLFOCUS, _OnTreatDoctorKillfocusFnc);
	m_wndTreatDoctor.SetEvent(WE_SELCHANGE, _OnTreatDoctorSelectChangeFnc);
	m_wndTreatDoctor.SetEvent(WE_LOADDATA, _OnTreatDoctorLoadDataFnc);
	//m_wndTreatDoctor.SetEvent(WE_ADDNEW, _OnTreatDoctorAddNewFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPACSOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPACSOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPACSOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPACSOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPACSOrderFnc, 0, 'T', VK_CONTROL);

}
void CHMSPACSOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndResultDate.GetDlgCtrlID(), m_szResultDate);
	DDX_TextEx(pDX, m_wndTreatDoctor.GetDlgCtrlID(), m_szTreatDoctorKey);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSPACSOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPACSOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPACSOrder::SetDefaultValues(){

	m_nOrderID=0;
	m_szOrderDate.Empty();
	m_szResultDate.Empty();
	m_szTreatDoctorKey.Empty();
	m_szPractitionerKey.Empty();
	m_szStatus.Empty();
	m_szNote.Empty();

}
int CHMSPACSOrder::OnOrderListDblClick(){
	 return 0;
} 
int CHMSPACSOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnOrderListLoadData(){
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
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("ResultDate")), 
			rs.GetValue(_T("Status")), 
			rs.GetValue(_T("Note")), 
			rs.GetValue(_T("UserID")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*int CHMSPACSOrder::OnOrderIDChange(){
	return 0;
} */
/*int CHMSPACSOrder::OnOrderIDSetfocus(){
	return 0;
} */
/*int CHMSPACSOrder::OnOrderIDKillfocus(){
	return 0;
} */
int CHMSPACSOrder::OnOrderIDCheckValue(){
	return 0;
} 
/*int CHMSPACSOrder::OnOrderDateChange(){
	return 0;
} */
/*int CHMSPACSOrder::OnOrderDateSetfocus(){
	return 0;
} */
/*int CHMSPACSOrder::OnOrderDateKillfocus(){
	return 0;
} */
int CHMSPACSOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*int CHMSPACSOrder::OnResultDateChange(){
	return 0;
} */
/*int CHMSPACSOrder::OnResultDateSetfocus(){
	return 0;
} */
/*int CHMSPACSOrder::OnResultDateKillfocus(){
	return 0;
} */
int CHMSPACSOrder::OnResultDateCheckValue(){
	return 0;
} 
int CHMSPACSOrder::OnTreatDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnTreatDoctorSelendok(){
	 return 0;
}
/*int CHMSPACSOrder::OnTreatDoctorSetfocus(){
	 return 0;
}*/
/*int CHMSPACSOrder::OnTreatDoctorKillfocus(){
	 return 0;
}*/
int CHMSPACSOrder::OnTreatDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTreatDoctor.IsSearchKey()){
	};
	m_wndTreatDoctor.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTreatDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSPACSOrder::OnTreatDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSPACSOrder::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnPractitionerSelendok(){
	 return 0;
}
/*int CHMSPACSOrder::OnPractitionerSetfocus(){
	 return 0;
}*/
/*int CHMSPACSOrder::OnPractitionerKillfocus(){
	 return 0;
}*/
int CHMSPACSOrder::OnPractitionerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPractitioner.IsSearchKey()){
	};
	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSPACSOrder::OnPractitionerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSPACSOrder::OnStatusChange(){
	return 0;
} */
/*int CHMSPACSOrder::OnStatusSetfocus(){
	return 0;
} */
/*int CHMSPACSOrder::OnStatusKillfocus(){
	return 0;
} */
int CHMSPACSOrder::OnStatusCheckValue(){
	return 0;
} 
/*int CHMSPACSOrder::OnNoteChange(){
	return 0;
} */
/*int CHMSPACSOrder::OnNoteSetfocus(){
	return 0;
} */
/*int CHMSPACSOrder::OnNoteKillfocus(){
	return 0;
} */
int CHMSPACSOrder::OnNoteCheckValue(){
	return 0;
} 
int CHMSPACSOrder::OnTestListDblClick(){
	 return 0;
} 
int CHMSPACSOrder::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnTestListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestList.BeginLoad(); 
	m_wndTestList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("NormalIndex")), 
			rs.GetValue(_T("Result")), NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSPACSOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSPACSOrder::OnAddHMSPACSOrder(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPACSOrder"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSPACSOrder::OnEditHMSPACSOrder(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPACSOrder"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSPACSOrder::OnDeleteHMSPACSOrder(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSPACSOrder(); 
 		OnHMSPACSOrderLoadData(); 
 	} */ return 0;
 } 
int CHMSPACSOrder::OnSaveHMSPACSOrder(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_vimes_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_vimes_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("HMSPACSOrder"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?Ä?kListLoadData(); 
 		EnableButtons(FALSE, 3, 4, -1); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	*/ 	return 0; 
}
int CHMSPACSOrder::OnCancelHMSPACSOrder(){ /* 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 		EnableButtons(FALSE, 3, 4, -1); 
 	} 
 	else 
 	{ 
 		SetDefaultValues(); 
 		SetMode(VM_NONE); 
 		UpdateData(FALSE); 
 		EnableButtons(FALSE, 1, 2, 3, 4, -1); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	*/ 
 	return 0;
} 
