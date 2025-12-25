#include "HMSTestOrder_Backup.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnOrderListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnOrderListLoadData();
} 
static int _OnOrderListDblClickFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnOrderListDblClick();
} 
static int _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnOrderListDeleteItem();
} 
/*static int _OnOrderIDChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnOrderIDChange();
} */
/*static int _OnOrderIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnOrderIDKillfocus();} */ 
/*static int _OnOrderIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnOrderIDCheckValue();
} 
/*static int _OnOrderDateChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnOrderDateChange();
} */
/*static int _OnOrderDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnOrderDateKillfocus();} */ 
/*static int _OnOrderDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnOrderDateCheckValue();
} 
/*static int _OnResultDateChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnResultDateChange();
} */
/*static int _OnResultDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnResultDateKillfocus();} */ 
/*static int _OnResultDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnResultDateKillfocus();
} */
static int _OnResultDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnResultDateCheckValue();
} 
static int _OnTreatDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSTestOrder_Backup* )pWnd)->OnTreatDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnTreatDoctorSelendokFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup *)pWnd)->OnTreatDoctorSelendok();
}
/*static int _OnTreatDoctorSetfocusFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup *)pWnd)->OnTreatDoctorKillfocus();
}*/
/*static int _OnTreatDoctorKillfocusFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup *)pWnd)->OnTreatDoctorKillfocus();
}*/
static int _OnTreatDoctorLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup *)pWnd)->OnTreatDoctorLoadData();
}
/*static int _OnTreatDoctorAddNewFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup *)pWnd)->OnTreatDoctorAddNew();
}*/
static int _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSTestOrder_Backup* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnPractitionerSelendokFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup *)pWnd)->OnPractitionerSelendok();
}
/*static int _OnPractitionerSetfocusFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup *)pWnd)->OnPractitionerKillfocus();
}*/
/*static int _OnPractitionerKillfocusFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup *)pWnd)->OnPractitionerKillfocus();
}*/
static int _OnPractitionerLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup *)pWnd)->OnPractitionerLoadData();
}
/*static int _OnPractitionerAddNewFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup *)pWnd)->OnPractitionerAddNew();
}*/
/*static int _OnStatusChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnStatusChange();
} */
/*static int _OnStatusSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnStatusKillfocus();} */ 
/*static int _OnStatusKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnStatusCheckValue();
} 
/*static int _OnNoteChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnNoteChange();
} */
/*static int _OnNoteSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnNoteKillfocus();} */ 
/*static int _OnNoteKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder_Backup *)pWnd)->OnNoteCheckValue();
} 
static int _OnTestListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnTestListLoadData();
} 
static int _OnTestListDblClickFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnTestListDblClick();
} 
static int _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnTestListDeleteItem();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSTestOrder_Backup *pVw = (CHMSTestOrder_Backup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSTestOrder_Backup *pVw = (CHMSTestOrder_Backup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSTestOrder_Backup *pVw = (CHMSTestOrder_Backup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSTestOrder_Backup *pVw = (CHMSTestOrder_Backup *)pWnd;
	return pVw->OnConfirmSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTestOrder_Backup *pVw = (CHMSTestOrder_Backup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnPrintSelectFnc(CWnd *pWnd){
	CHMSTestOrder_Backup *pVw = (CHMSTestOrder_Backup *)pWnd;
	return pVw->OnPrintSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTestOrder_Backup *pVw = (CHMSTestOrder_Backup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnAddHMSTestOrder_BackupFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnAddHMSTestOrder_Backup();
} 
static int _OnEditHMSTestOrder_BackupFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnEditHMSTestOrder_Backup();
} 
static int _OnDeleteHMSTestOrder_BackupFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnDeleteHMSTestOrder_Backup();
} 
static int _OnSaveHMSTestOrder_BackupFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnSaveHMSTestOrder_Backup();
} 
static int _OnCancelHMSTestOrder_BackupFnc(CWnd *pWnd){
	 return ((CHMSTestOrder_Backup*)pWnd)->OnCancelHMSTestOrder_Backup();
} 
CHMSTestOrder_Backup::CHMSTestOrder_Backup(){

	m_nDlgWidth = 619;
	m_nDlgHeight = 496;
	SetDefaultValues();
}
CHMSTestOrder_Backup::~CHMSTestOrder_Backup(){
}
void CHMSTestOrder_Backup::OnCreateComponents(){
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
void CHMSTestOrder_Backup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOrderID.SetLimitText(1024);
	m_wndOrderID.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndResultDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndResultDate.SetCheckValue(true);
	m_wndTreatDoctor.SetCheckValue(true);
	m_wndTreatDoctor.LimitText(1024);
	m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(1024);
	m_wndStatus.SetLimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);


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
void CHMSTestOrder_Backup::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTestOrder_BackupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTestOrder_BackupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTestOrder_BackupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTestOrder_BackupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTestOrder_BackupFnc, 0, 'T', VK_CONTROL);

}
void CHMSTestOrder_Backup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndResultDate.GetDlgCtrlID(), m_szResultDate);
	DDX_TextEx(pDX, m_wndTreatDoctor.GetDlgCtrlID(), m_szTreatDoctorKey);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSTestOrder_Backup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTestOrder_Backup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTestOrder_Backup::SetDefaultValues(){

	m_nOrderID=0;
	m_szOrderDate.Empty();
	m_szResultDate.Empty();
	m_szTreatDoctorKey.Empty();
	m_szPractitionerKey.Empty();
	m_szStatus.Empty();
	m_szNote.Empty();

}
int CHMSTestOrder_Backup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		//CGuiView::SetMode(nMode); 
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
int CHMSTestOrder_Backup::OnOrderListDblClick(){
	 return 0;
} 
int CHMSTestOrder_Backup::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnOrderListLoadData(){
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
/*int CHMSTestOrder_Backup::OnOrderIDChange(){
	return 0;
} */
/*int CHMSTestOrder_Backup::OnOrderIDSetfocus(){
	return 0;
} */
/*int CHMSTestOrder_Backup::OnOrderIDKillfocus(){
	return 0;
} */
int CHMSTestOrder_Backup::OnOrderIDCheckValue(){
	return 0;
} 
/*int CHMSTestOrder_Backup::OnOrderDateChange(){
	return 0;
} */
/*int CHMSTestOrder_Backup::OnOrderDateSetfocus(){
	return 0;
} */
/*int CHMSTestOrder_Backup::OnOrderDateKillfocus(){
	return 0;
} */
int CHMSTestOrder_Backup::OnOrderDateCheckValue(){
	return 0;
} 
/*int CHMSTestOrder_Backup::OnResultDateChange(){
	return 0;
} */
/*int CHMSTestOrder_Backup::OnResultDateSetfocus(){
	return 0;
} */
/*int CHMSTestOrder_Backup::OnResultDateKillfocus(){
	return 0;
} */
int CHMSTestOrder_Backup::OnResultDateCheckValue(){
	return 0;
} 
int CHMSTestOrder_Backup::OnTreatDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnTreatDoctorSelendok(){
	 return 0;
}
/*int CHMSTestOrder_Backup::OnTreatDoctorSetfocus(){
	 return 0;
}*/
/*int CHMSTestOrder_Backup::OnTreatDoctorKillfocus(){
	 return 0;
}*/
int CHMSTestOrder_Backup::OnTreatDoctorLoadData(){
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
/*int CHMSTestOrder_Backup::OnTreatDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSTestOrder_Backup::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnPractitionerSelendok(){
	 return 0;
}
/*int CHMSTestOrder_Backup::OnPractitionerSetfocus(){
	 return 0;
}*/
/*int CHMSTestOrder_Backup::OnPractitionerKillfocus(){
	 return 0;
}*/
int CHMSTestOrder_Backup::OnPractitionerLoadData(){
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
/*int CHMSTestOrder_Backup::OnPractitionerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSTestOrder_Backup::OnStatusChange(){
	return 0;
} */
/*int CHMSTestOrder_Backup::OnStatusSetfocus(){
	return 0;
} */
/*int CHMSTestOrder_Backup::OnStatusKillfocus(){
	return 0;
} */
int CHMSTestOrder_Backup::OnStatusCheckValue(){
	return 0;
} 
/*int CHMSTestOrder_Backup::OnNoteChange(){
	return 0;
} */
/*int CHMSTestOrder_Backup::OnNoteSetfocus(){
	return 0;
} */
/*int CHMSTestOrder_Backup::OnNoteKillfocus(){
	return 0;
} */
int CHMSTestOrder_Backup::OnNoteCheckValue(){
	return 0;
} 
int CHMSTestOrder_Backup::OnTestListDblClick(){
	 return 0;
} 
int CHMSTestOrder_Backup::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnTestListLoadData(){
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
int CHMSTestOrder_Backup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder_Backup::OnAddHMSTestOrder_Backup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSTestOrder_Backup"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSTestOrder_Backup::OnEditHMSTestOrder_Backup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSTestOrder_Backup"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSTestOrder_Backup::OnDeleteHMSTestOrder_Backup(){
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
 		OnCancelHMSTestOrder_Backup(); 
 	}
return 0;
 } 
int CHMSTestOrder_Backup::OnSaveHMSTestOrder_Backup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSTestOrder_BackupListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSTestOrder_Backup::OnCancelHMSTestOrder_Backup(){
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
int CHMSTestOrder_Backup::OnHMSTestOrder_BackupListLoadData(){
	return 0;
}
