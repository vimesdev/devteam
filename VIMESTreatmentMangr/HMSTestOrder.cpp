#include "HMSTestOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnOrderListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTestOrder*)pWnd)->OnOrderListLoadData();
} 
static int _OnOrderListDblClickFnc(CWnd *pWnd){
	 return ((CHMSTestOrder*)pWnd)->OnOrderListDblClick();
} 
static int _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSTestOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTestOrder*)pWnd)->OnOrderListDeleteItem();
} 
/*static int _OnOrderIDChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnOrderIDChange();
} */
/*static int _OnOrderIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnOrderIDKillfocus();} */ 
/*static int _OnOrderIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnOrderIDCheckValue();
} 
/*static int _OnOrderDateChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnOrderDateChange();
} */
/*static int _OnOrderDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnOrderDateKillfocus();} */ 
/*static int _OnOrderDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static int _OnResultDateChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnResultDateChange();
} */
/*static int _OnResultDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnResultDateKillfocus();} */ 
/*static int _OnResultDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnResultDateKillfocus();
} */
static int _OnResultDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnResultDateCheckValue();
} 
/*static int _OnTreatDoctorChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnTreatDoctorChange();
} */
/*static int _OnTreatDoctorSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnTreatDoctorKillfocus();} */ 
/*static int _OnTreatDoctorKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnTreatDoctorKillfocus();
} */
static int _OnTreatDoctorCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnTreatDoctorCheckValue();
} 
/*static int _OnPractitionerChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnPractitionerChange();
} */
/*static int _OnPractitionerSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnPractitionerKillfocus();} */ 
/*static int _OnPractitionerKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnPractitionerKillfocus();
} */
static int _OnPractitionerCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnPractitionerCheckValue();
} 
/*static int _OnStatusChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnStatusChange();
} */
/*static int _OnStatusSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnStatusKillfocus();} */ 
/*static int _OnStatusKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnStatusCheckValue();
} 
/*static int _OnNoteChangeFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnNoteChange();
} */
/*static int _OnNoteSetfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnNoteKillfocus();} */ 
/*static int _OnNoteKillfocusFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestOrder *)pWnd)->OnNoteCheckValue();
} 
static int _OnTestListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTestOrder*)pWnd)->OnTestListLoadData();
} 
static int _OnTestListDblClickFnc(CWnd *pWnd){
	 return ((CHMSTestOrder*)pWnd)->OnTestListDblClick();
} 
static int _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSTestOrder*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTestOrder*)pWnd)->OnTestListDeleteItem();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSTestOrder *pVw = (CHMSTestOrder *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSTestOrder *pVw = (CHMSTestOrder *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSTestOrder *pVw = (CHMSTestOrder *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSTestOrder *pVw = (CHMSTestOrder *)pWnd;
	return pVw->OnConfirmSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTestOrder *pVw = (CHMSTestOrder *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnPrintSelectFnc(CWnd *pWnd){
	CHMSTestOrder *pVw = (CHMSTestOrder *)pWnd;
	return pVw->OnPrintSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTestOrder *pVw = (CHMSTestOrder *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnAddHMSTestOrderFnc(CWnd *pWnd){
	 return ((CHMSTestOrder*)pWnd)->OnAddHMSTestOrder();
} 
static int _OnEditHMSTestOrderFnc(CWnd *pWnd){
	 return ((CHMSTestOrder*)pWnd)->OnEditHMSTestOrder();
} 
static int _OnDeleteHMSTestOrderFnc(CWnd *pWnd){
	 return ((CHMSTestOrder*)pWnd)->OnDeleteHMSTestOrder();
} 
static int _OnSaveHMSTestOrderFnc(CWnd *pWnd){
	 return ((CHMSTestOrder*)pWnd)->OnSaveHMSTestOrder();
} 
static int _OnCancelHMSTestOrderFnc(CWnd *pWnd){
	 return ((CHMSTestOrder*)pWnd)->OnCancelHMSTestOrder();
} 
CHMSTestOrder::CHMSTestOrder(){

	m_nDlgWidth = 781;
	m_nDlgHeight = 639;
	SetDefaultValues();
}
CHMSTestOrder::~CHMSTestOrder(){
}
void CHMSTestOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 4, 5, 398, 436);
	m_wndOrderList.Create(this,5, 25, 210, 182); 
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 215, 25, 278, 47);
	m_wndOrderID.Create(this,283, 25, 363, 47); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 214, 52, 277, 74);
	m_wndOrderDate.Create(this,282, 52, 394, 74); 
	m_wndResultDateLabel.Create(this, _T("Result Date"), 214, 79, 277, 101);
	m_wndResultDate.Create(this,282, 79, 394, 101); 
	m_wndTreatDoctorLabel.Create(this, _T("Treat Doctor"), 214, 106, 277, 128);
	m_wndTreatDoctor.Create(this,282, 106, 394, 128); 
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 214, 133, 277, 155);
	m_wndPractitioner.Create(this,282, 133, 394, 155); 
	m_wndStatusLabel.Create(this, _T("Status"), 214, 160, 277, 182);
	m_wndStatus.Create(this,282, 160, 394, 182); 
	m_wndNoteLabel.Create(this, _T("Note"), 5, 392, 42, 414);
	m_wndNote.Create(this,47, 392, 394, 431); 
	m_wndTestList.Create(this,5, 187, 394, 387); 
	m_wndAdd.Create(this, _T("&Add"), 5, 441, 57, 463);
	m_wndEdit.Create(this, _T("&Edit"), 62, 441, 114, 463);
	m_wndDelete.Create(this, _T("&Delete"), 119, 441, 171, 463);
	m_wndConfirm.Create(this, _T("&Confirm"), 233, 441, 285, 463);
	m_wndCancel.Create(this, _T("&Cancel"), 347, 441, 399, 463);
	m_wndPrint.Create(this, _T("&Print"), 290, 441, 342, 463);
	m_wndSave.Create(this, _T("&Save"), 176, 441, 228, 463);

}
void CHMSTestOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOrderID.SetLimitText(13);
	m_wndOrderID.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndResultDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndResultDate.SetCheckValue(true);
	m_wndTreatDoctor.SetLimitText(1024);
	m_wndTreatDoctor.SetCheckValue(true);
	m_wndPractitioner.SetLimitText(1024);
	m_wndPractitioner.SetCheckValue(true);
	m_wndStatus.SetLimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);


	m_wndOrderList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndOrderList.InsertColumn(1, _T("Order Date"), CFMT_DATE, 70);
	m_wndOrderList.InsertColumn(2, _T("Status"), CFMT_TEXT, 55);


	m_wndTestList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTestList.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndTestList.InsertColumn(3, _T("Result"), CFMT_TEXT, 60);
	m_wndTestList.InsertColumn(4, _T("Normal Index"), CFMT_TEXT, 100);

}
void CHMSTestOrder::OnSetWindowEvents(){
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
	//m_wndTreatDoctor.SetEvent(WE_CHANGE, _OnTreatDoctorChangeFnc);
	//m_wndTreatDoctor.SetEvent(WE_SETFOCUS, _OnTreatDoctorSetfocusFnc);
	//m_wndTreatDoctor.SetEvent(WE_KILLFOCUS, _OnTreatDoctorKillfocusFnc);
	m_wndTreatDoctor.SetEvent(WE_CHECKVALUE, _OnTreatDoctorCheckValueFnc);
	//m_wndPractitioner.SetEvent(WE_CHANGE, _OnPractitionerChangeFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_CHECKVALUE, _OnPractitionerCheckValueFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTestOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTestOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTestOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTestOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTestOrderFnc, 0, 'T', VK_CONTROL);

}
void CHMSTestOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_szOrderID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndResultDate.GetDlgCtrlID(), m_szResultDate);
	DDX_Text(pDX, m_wndTreatDoctor.GetDlgCtrlID(), m_szTreatDoctor);
	DDX_Text(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitioner);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSTestOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTestOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTestOrder::SetDefaultValues(){

	m_szOrderID.Empty();
	m_szOrderDate.Empty();
	m_szResultDate.Empty();
	m_szTreatDoctor.Empty();
	m_szPractitioner.Empty();
	m_szStatus.Empty();
	m_szNote.Empty();

}
int CHMSTestOrder::SetMode(int nMode){ 
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
int CHMSTestOrder::OnOrderListDblClick(){
	 return 0;
} 
int CHMSTestOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder::OnOrderListLoadData(){
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
			rs.GetValue(_T("ResultDate")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*int CHMSTestOrder::OnOrderIDChange(){
	return 0;
} */
/*int CHMSTestOrder::OnOrderIDSetfocus(){
	return 0;
} */
/*int CHMSTestOrder::OnOrderIDKillfocus(){
	return 0;
} */
int CHMSTestOrder::OnOrderIDCheckValue(){
	return 0;
} 
/*int CHMSTestOrder::OnOrderDateChange(){
	return 0;
} */
/*int CHMSTestOrder::OnOrderDateSetfocus(){
	return 0;
} */
/*int CHMSTestOrder::OnOrderDateKillfocus(){
	return 0;
} */
int CHMSTestOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*int CHMSTestOrder::OnResultDateChange(){
	return 0;
} */
/*int CHMSTestOrder::OnResultDateSetfocus(){
	return 0;
} */
/*int CHMSTestOrder::OnResultDateKillfocus(){
	return 0;
} */
int CHMSTestOrder::OnResultDateCheckValue(){
	return 0;
} 
/*int CHMSTestOrder::OnTreatDoctorChange(){
	return 0;
} */
/*int CHMSTestOrder::OnTreatDoctorSetfocus(){
	return 0;
} */
/*int CHMSTestOrder::OnTreatDoctorKillfocus(){
	return 0;
} */
int CHMSTestOrder::OnTreatDoctorCheckValue(){
	return 0;
} 
/*int CHMSTestOrder::OnPractitionerChange(){
	return 0;
} */
/*int CHMSTestOrder::OnPractitionerSetfocus(){
	return 0;
} */
/*int CHMSTestOrder::OnPractitionerKillfocus(){
	return 0;
} */
int CHMSTestOrder::OnPractitionerCheckValue(){
	return 0;
} 
/*int CHMSTestOrder::OnStatusChange(){
	return 0;
} */
/*int CHMSTestOrder::OnStatusSetfocus(){
	return 0;
} */
/*int CHMSTestOrder::OnStatusKillfocus(){
	return 0;
} */
int CHMSTestOrder::OnStatusCheckValue(){
	return 0;
} 
/*int CHMSTestOrder::OnNoteChange(){
	return 0;
} */
/*int CHMSTestOrder::OnNoteSetfocus(){
	return 0;
} */
/*int CHMSTestOrder::OnNoteKillfocus(){
	return 0;
} */
int CHMSTestOrder::OnNoteCheckValue(){
	return 0;
} 
int CHMSTestOrder::OnTestListDblClick(){
	 return 0;
} 
int CHMSTestOrder::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder::OnTestListLoadData(){
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
			rs.GetValue(_T("Result")), 
			rs.GetValue(_T("NormalIndex")), NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSTestOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTestOrder::OnAddHMSTestOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSTestOrder"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSTestOrder::OnEditHMSTestOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSTestOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSTestOrder::OnDeleteHMSTestOrder(){
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
 		OnCancelHMSTestOrder(); 
 	}
return 0;
 } 
int CHMSTestOrder::OnSaveHMSTestOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
// 		szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 //		szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSTestOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSTestOrder::OnCancelHMSTestOrder(){
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
int CHMSTestOrder::OnHMSTestOrderListLoadData(){
	return 0;
}
