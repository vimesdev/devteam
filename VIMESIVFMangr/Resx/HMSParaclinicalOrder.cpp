#include "HMSParaclinicalOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSParaclinicalDialog.h"

static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalOrder*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaclinicalOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalOrder*)pWnd)->OnOrderListDeleteItem();
} 
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalOrder *)pWnd)->OnOrderIDCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnResultDateChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnResultDateChange();
} */
/*static void _OnResultDateSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnResultDateSetfocus();} */ 
/*static void _OnResultDateKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnResultDateKillfocus();
} */
static int _OnResultDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalOrder *)pWnd)->OnResultDateCheckValue();
} 
/*static void _OnTreatDoctorChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnTreatDoctorChange();
} */
/*static void _OnTreatDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnTreatDoctorSetfocus();} */ 
/*static void _OnTreatDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnTreatDoctorKillfocus();
} */
static int _OnTreatDoctorCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalOrder *)pWnd)->OnTreatDoctorCheckValue();
} 
/*static void _OnPractitionerChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnPractitionerChange();
} */
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnPractitionerSetfocus();} */ 
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnPractitionerKillfocus();
} */
static int _OnPractitionerCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalOrder *)pWnd)->OnPractitionerCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalOrder *)pWnd)->OnStatusCheckValue();
} 
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalOrder*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaclinicalOrder*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalOrder*)pWnd)->OnTestListDeleteItem();
} 
/*static void _OnRemarkChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnRemarkChange();
} */
/*static void _OnRemarkSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnRemarkSetfocus();} */ 
/*static void _OnRemarkKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnRemarkKillfocus();
} */
static int _OnRemarkCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalOrder *)pWnd)->OnRemarkCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalOrder *)pWnd)->OnConclusionCheckValue();
} 
/*static void _OnResultChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnResultChange();
} */
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnResultSetfocus();} */ 
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalOrder *)pWnd)->OnResultKillfocus();
} */
static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalOrder *)pWnd)->OnResultCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSParaclinicalOrder *pVw = (CHMSParaclinicalOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSParaclinicalOrder *pVw = (CHMSParaclinicalOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSParaclinicalOrder *pVw = (CHMSParaclinicalOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSParaclinicalOrder *pVw = (CHMSParaclinicalOrder *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSParaclinicalOrder *pVw = (CHMSParaclinicalOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSParaclinicalOrderFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalOrder*)pWnd)->OnAddHMSParaclinicalOrder();
} 
static int _OnEditHMSParaclinicalOrderFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalOrder*)pWnd)->OnEditHMSParaclinicalOrder();
} 
static int _OnDeleteHMSParaclinicalOrderFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalOrder*)pWnd)->OnDeleteHMSParaclinicalOrder();
} 
static int _OnSaveHMSParaclinicalOrderFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalOrder*)pWnd)->OnSaveHMSParaclinicalOrder();
} 
static int _OnCancelHMSParaclinicalOrderFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalOrder*)pWnd)->OnCancelHMSParaclinicalOrder();
} 
CHMSParaclinicalOrder::CHMSParaclinicalOrder(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CHMSParaclinicalOrder::~CHMSParaclinicalOrder(){
}
void CHMSParaclinicalOrder::OnCreateComponents(){
	m_wndParaclinicalInformation.Create(this, _T("Paraclinical Information"), 5, 5, 595, 550);
	m_wndOrderList.Create(this,10, 30, 350, 205); 
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 355, 30, 455, 55);
	m_wndOrderID.Create(this,460, 30, 590, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 354, 60, 454, 85);
	m_wndOrderDate.Create(this,459, 60, 590, 85); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 354, 90, 454, 115);
	m_wndResultDate.Create(this,459, 90, 590, 115); 
	m_wndTreatDoctorLabel.Create(this, _T("Treat Doctor"), 354, 120, 454, 145);
	m_wndTreatDoctor.Create(this,459, 120, 590, 145); 
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 354, 150, 454, 175);
	m_wndPractitioner.Create(this,459, 150, 590, 175); 
	m_wndStatusLabel.Create(this, _T("Status"), 354, 180, 454, 205);
	m_wndStatus.Create(this,459, 180, 590, 205); 
	m_wndTestList.Create(this,10, 210, 590, 330); 
	m_wndRemarkLabel.Create(this, _T("Remark"), 10, 335, 90, 360);
	m_wndRemark.Create(this,95, 335, 590, 385); 
	m_wndConclusion.Create(this,95, 390, 590, 465); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 10, 390, 90, 415);
	m_wndResultLabel.Create(this, _T("Result"), 10, 470, 90, 495);
	m_wndResult.Create(this,95, 470, 590, 545); 
	m_wndAdd.Create(this, _T("&Add"), 175, 555, 255, 580);
	m_wndEdit.Create(this, _T("&Edit"), 260, 555, 340, 580);
	m_wndDelete.Create(this, _T("&Delete"), 345, 555, 425, 580);
	m_wndConfirm.Create(this, _T("&Confirm"), 430, 555, 510, 580);
	m_wndPrint.Create(this, _T("&Print"), 515, 555, 595, 580);

}
void CHMSParaclinicalOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOrderID.SetLimitText(13);
	m_wndOrderID.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndResultDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndResultDate.SetCheckValue(true);
	m_wndTreatDoctor.SetLimitText(1024);
	m_wndTreatDoctor.SetCheckValue(true);
	m_wndPractitioner.SetLimitText(1024);
	m_wndPractitioner.SetCheckValue(true);
	m_wndStatus.SetLimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndRemark.SetLimitText(35);
	m_wndRemark.SetCheckValue(true);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);
	m_wndResult.SetLimitText(35);
	m_wndResult.SetCheckValue(true);


	m_wndOrderList.InsertColumn(0, _T("Order ID"), CFMT_NUMBER, 70);
	m_wndOrderList.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(2, _T("SID"), CFMT_TEXT, 50);


	m_wndTestList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 70);
	m_wndTestList.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndTestList.InsertColumn(3, _T("Result"), CFMT_TEXT, 70);
	m_wndTestList.InsertColumn(4, _T("Normal Index"), CFMT_TEXT, 100);
	m_wndTestList.InsertColumn(5, _T("Note"), CFMT_TEXT, 70);
	m_wndTestList.InsertColumn(6, _T("ItemID"), CFMT_TEXT, 0);

}
void CHMSParaclinicalOrder::OnSetWindowEvents(){
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
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndRemark.SetEvent(WE_CHANGE, _OnRemarkChangeFnc);
	//m_wndRemark.SetEvent(WE_SETFOCUS, _OnRemarkSetfocusFnc);
	//m_wndRemark.SetEvent(WE_KILLFOCUS, _OnRemarkKillfocusFnc);
	m_wndRemark.SetEvent(WE_CHECKVALUE, _OnRemarkCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	//m_wndResult.SetEvent(WE_CHANGE, _OnResultChangeFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_CHECKVALUE, _OnResultCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSParaclinicalOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSParaclinicalOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSParaclinicalOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSParaclinicalOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSParaclinicalOrderFnc, 0, 'T', VK_CONTROL);

}
void CHMSParaclinicalOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndResultDate.GetDlgCtrlID(), m_szResultDate);
	DDX_Text(pDX, m_wndTreatDoctor.GetDlgCtrlID(), m_szTreatDoctor);
	DDX_Text(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitioner);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_Text(pDX, m_wndRemark.GetDlgCtrlID(), m_szRemark);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_Text(pDX, m_wndResult.GetDlgCtrlID(), m_szResult);

}
void CHMSParaclinicalOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM pcms_order WHERE pcmso_orderid=%ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pcmso_orderdate"), m_szOrderDate);
		rs.GetValue(_T("pcmso_performdate"), m_szResultDate);
		rs.GetValue(_T("pcmso_doctor"), m_szTreatDoctor);
		rs.GetValue(_T("pcmso_practitioner"), m_szPractitioner);
		rs.GetValue(_T("pcmso_status"), m_szStatus);
		CString szGroupID;
		rs.GetValue(_T("pcmso_groupid"), szGroupID);
		if(szGroupID[0] == _T('A')){
			m_wndTestList.DeleteAllColumns();
			m_wndTestList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 70);
			m_wndTestList.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
			m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
			m_wndTestList.InsertColumn(3, _T("Result"), CFMT_TEXT, 70);
			m_wndTestList.InsertColumn(4, _T("Normal Index"), CFMT_TEXT, 100);
			m_wndTestList.InsertColumn(5, _T("Note"), CFMT_TEXT, 70);
			m_wndTestList.InsertColumn(6, _T("ItemID"), CFMT_TEXT, 0);

		}
		else if(szGroupID[0] == _T('B')){
			m_wndTestList.DeleteAllColumns();
			m_wndTestList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 70);
			m_wndTestList.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
			m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
			m_wndTestList.InsertColumn(3, _T("Result"), CFMT_TEXT, 0);
			m_wndTestList.InsertColumn(4, _T("Normal Index"), CFMT_TEXT, 0);
			m_wndTestList.InsertColumn(5, _T("Note"), CFMT_TEXT, 0);
			m_wndTestList.InsertColumn(6, _T("ItemID"), CFMT_TEXT, 0);

		}
		else if(szGroupID[0] == _T('C')){
			m_wndTestList.DeleteAllColumns();
			m_wndTestList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 70);
			m_wndTestList.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
			m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
			m_wndTestList.InsertColumn(3, _T("Result"), CFMT_TEXT, 0);
			m_wndTestList.InsertColumn(4, _T("Normal Index"), CFMT_TEXT, 0);
			m_wndTestList.InsertColumn(5, _T("Note"), CFMT_TEXT, 0);
			m_wndTestList.InsertColumn(6, _T("ItemID"), CFMT_TEXT, 0);

		}
		OnTestListLoadData();
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);


}
void CHMSParaclinicalOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSParaclinicalOrder::SetDefaultValues(){

	m_nOrderID=0;
	m_szOrderDate.Empty();
	m_szResultDate.Empty();
	m_szTreatDoctor.Empty();
	m_szPractitioner.Empty();
	m_szStatus.Empty();
	m_szRemark.Empty();
	m_szConclusion.Empty();
	m_szResult.Empty();

}
int CHMSParaclinicalOrder::SetMode(int nMode){ 
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
void CHMSParaclinicalOrder::OnOrderListDblClick(){
	
} 
void CHMSParaclinicalOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nOrderID  = ToLong(m_wndOrderList.GetItemText(nNewItem, 0));
	GetDataToScreen();	
} 
int CHMSParaclinicalOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSParaclinicalOrder::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	m_wndOrderList.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT 	pcmso_orderid 	as orderid, ") \
		_T(" pcmso_sid 	as sid," ) \
		_T(" pcmso_status 	as status," ) \
		_T(" pcmsg_name 	as gname" ) \
		_T(" FROM pcms_order  ") \
		_T(" LEFT JOIN pcms_group ON(pcmso_groupid=pcmsg_id) ") \
		_T(" WHERE pcmso_docno=%ld ") \
		_T(" ORDER BY pcmso_groupid,pcmso_orderid"), pMF->m_nDocumentNo);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("status"), szStatus);
		m_wndOrderList.AddItems(
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("gname")), 
			rs.GetValue(_T("sid")), 
			NULL);
		rs.MoveNext();
		if(szStatus == _T("S")){
			m_wndOrderList.SetItemBkColor(m_wndOrderList.GetItemCount()-1, RGB(64, 128, 128), FALSE);
		}
		else if(szStatus == _T("T")){
			m_wndOrderList.SetItemBkColor(m_wndOrderList.GetItemCount()-1, RGB(0, 128, 128), FALSE);
		}

	}
	m_wndOrderList.EndLoad(); 
	return nCount;

}
/*void CHMSParaclinicalOrder::OnOrderIDChange(){
	
} */
/*void CHMSParaclinicalOrder::OnOrderIDSetfocus(){
	
} */
/*void CHMSParaclinicalOrder::OnOrderIDKillfocus(){
	
} */
int CHMSParaclinicalOrder::OnOrderIDCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalOrder::OnOrderDateChange(){
	
} */
/*void CHMSParaclinicalOrder::OnOrderDateSetfocus(){
	
} */
/*void CHMSParaclinicalOrder::OnOrderDateKillfocus(){
	
} */
int CHMSParaclinicalOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalOrder::OnResultDateChange(){
	
} */
/*void CHMSParaclinicalOrder::OnResultDateSetfocus(){
	
} */
/*void CHMSParaclinicalOrder::OnResultDateKillfocus(){
	
} */
int CHMSParaclinicalOrder::OnResultDateCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalOrder::OnTreatDoctorChange(){
	
} */
/*void CHMSParaclinicalOrder::OnTreatDoctorSetfocus(){
	
} */
/*void CHMSParaclinicalOrder::OnTreatDoctorKillfocus(){
	
} */
int CHMSParaclinicalOrder::OnTreatDoctorCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalOrder::OnPractitionerChange(){
	
} */
/*void CHMSParaclinicalOrder::OnPractitionerSetfocus(){
	
} */
/*void CHMSParaclinicalOrder::OnPractitionerKillfocus(){
	
} */
int CHMSParaclinicalOrder::OnPractitionerCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalOrder::OnStatusChange(){
	
} */
/*void CHMSParaclinicalOrder::OnStatusSetfocus(){
	
} */
/*void CHMSParaclinicalOrder::OnStatusKillfocus(){
	
} */
int CHMSParaclinicalOrder::OnStatusCheckValue(){
	return 0;
} 
void CHMSParaclinicalOrder::OnTestListDblClick(){
	
} 
void CHMSParaclinicalOrder::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalOrder::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSParaclinicalOrder::OnTestListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nIndex = 1;
	m_wndTestList.BeginLoad(); 
	m_wndTestList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT 	pcmsol_itemid as itemid, ") \
				_T(" 	hfl_name as name, ") \
				_T(" 	hfl_unit as unit, ") \
				_T(" 	pcmsol_result as result, ") \
				_T(" 	hfl_index1||' - '|| hfl_index2 as normalindex, ") \
				_T(" 	pcmsol_note as note ") \
				_T(" FROM pcms_order_line") \
				_T(" LEFT JOIN hms_feelist ON(pcmsol_itemid=hfl_feeid)") \
				_T(" WHERE pcmsol_orderid=%ld"), m_nOrderID);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndTestList.AddItems(
			tmpStr,
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("result")), 
			rs.GetValue(_T("normalindex")), 
			rs.GetValue(_T("note")), 
			rs.GetValue(_T("itemid")), 
			NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
}
/*void CHMSParaclinicalOrder::OnRemarkChange(){
	
} */
/*void CHMSParaclinicalOrder::OnRemarkSetfocus(){
	
} */
/*void CHMSParaclinicalOrder::OnRemarkKillfocus(){
	
} */
int CHMSParaclinicalOrder::OnRemarkCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalOrder::OnConclusionChange(){
	
} */
/*void CHMSParaclinicalOrder::OnConclusionSetfocus(){
	
} */
/*void CHMSParaclinicalOrder::OnConclusionKillfocus(){
	
} */
int CHMSParaclinicalOrder::OnConclusionCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalOrder::OnResultChange(){
	
} */
/*void CHMSParaclinicalOrder::OnResultSetfocus(){
	
} */
/*void CHMSParaclinicalOrder::OnResultKillfocus(){
	
} */
int CHMSParaclinicalOrder::OnResultCheckValue(){
	return 0;
} 
void CHMSParaclinicalOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSParaclinicalDialog dlg(pMF);
	dlg.DoModal();
	OnOrderListLoadData();
	
} 
void CHMSParaclinicalOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalOrder::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalOrder::OnAddHMSParaclinicalOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSParaclinicalOrder"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSParaclinicalOrder::OnEditHMSParaclinicalOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSParaclinicalOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSParaclinicalOrder::OnDeleteHMSParaclinicalOrder(){
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
 		OnCancelHMSParaclinicalOrder(); 
 	}
return 0;
 } 
int CHMSParaclinicalOrder::OnSaveHMSParaclinicalOrder(){
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
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSParaclinicalOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSParaclinicalOrder::OnCancelHMSParaclinicalOrder(){
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
int CHMSParaclinicalOrder::OnHMSParaclinicalOrderListLoadData(){
	return 0;
}

void CHMSParaclinicalOrder::LoadData()
{
	OnOrderListLoadData();
}
