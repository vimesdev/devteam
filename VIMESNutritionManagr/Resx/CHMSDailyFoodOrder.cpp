#include "CHMSDailyFoodOrder.h"
#include "MainFrm.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CCHMSDailyFoodOrder *pVw = (CCHMSDailyFoodOrder *)pWnd;
	pVw->OnFindSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnIssueDateChangeFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnIssueDateChange();
} */
/*static void _OnIssueDateSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnIssueDateSetfocus();} */ 
/*static void _OnIssueDateKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnIssueDateKillfocus();
} */
static int _OnIssueDateCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder *)pWnd)->OnIssueDateCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder *)pWnd)->OnNoteCheckValue();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CCHMSDailyFoodOrder *pVw = (CCHMSDailyFoodOrder *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCHMSDailyFoodOrder *pVw = (CCHMSDailyFoodOrder *)pWnd;
	pVw->OnPrintSelect();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDeptChangeFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnDeptChange();
} */
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnDeptSetfocus();} */ 
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnDeptKillfocus();
} */
static int _OnDeptCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder *)pWnd)->OnDeptCheckValue();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSDailyFoodOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodOrder*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSDailyFoodOrder*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodOrder*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSDailyFoodOrder*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodOrder*)pWnd)->OnDrugListDeleteItem();
} 
/*static void _OnTypeChangeFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnTypeChange();
} */
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnTypeSetfocus();} */ 
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnTypeKillfocus();
} */
static int _OnTypeCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder *)pWnd)->OnTypeCheckValue();
} 
/*static void _OnTotalCountChangeFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnTotalCountChange();
} */
/*static void _OnTotalCountSetfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnTotalCountSetfocus();} */ 
/*static void _OnTotalCountKillfocusFnc(CWnd *pWnd){
	((CCHMSDailyFoodOrder *)pWnd)->OnTotalCountKillfocus();
} */
static int _OnTotalCountCheckValueFnc(CWnd *pWnd){
	return ((CCHMSDailyFoodOrder *)pWnd)->OnTotalCountCheckValue();
} 
static int _OnAddCHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodOrder*)pWnd)->OnAddCHMSDailyFoodOrder();
} 
static int _OnEditCHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodOrder*)pWnd)->OnEditCHMSDailyFoodOrder();
} 
static int _OnDeleteCHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodOrder*)pWnd)->OnDeleteCHMSDailyFoodOrder();
} 
static int _OnSaveCHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodOrder*)pWnd)->OnSaveCHMSDailyFoodOrder();
} 
static int _OnCancelCHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CCHMSDailyFoodOrder*)pWnd)->OnCancelCHMSDailyFoodOrder();
} 
CCHMSDailyFoodOrder::CCHMSDailyFoodOrder(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 635;
	SetDefaultValues();
}
CCHMSDailyFoodOrder::~CCHMSDailyFoodOrder(){
}
void CCHMSDailyFoodOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 550, 180);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 555, 5, 1020, 410);
	m_wndDrugInformation.Create(this, _T("Food Informations"), 555, 445, 1020, 625);
	m_wndGroupListDrug.Create(this, _T("Food Type List"), 5, 185, 550, 625);
	m_wndOrderNoLabel.Create(this, _T("Order ID"), 10, 30, 140, 55);
	m_wndOrderNo.Create(this,145, 30, 275, 55); 
	m_wndFind.Create(this, _T("&Find"), 825, 415, 925, 440);
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 60, 140, 85);
	m_wndOrderDate.Create(this,145, 60, 275, 85); 
	m_wndIssueDateLabel.Create(this, _T("Issue Date"), 280, 60, 410, 85);
	m_wndIssueDate.Create(this,415, 60, 545, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 280, 30, 410, 55);
	m_wndStatus.Create(this,415, 30, 545, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 90, 140, 115);
	m_wndNote.Create(this,145, 90, 545, 115); 
	m_wndSend.Create(this, _T("&Send"), 370, 150, 455, 175);
	m_wndPrint.Create(this, _T("&Preview"), 460, 150, 545, 175);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 555, 415, 665, 440);
	m_wndPatientName.Create(this,670, 415, 820, 440); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 120, 140, 145);
	m_wndDept.Create(this,145, 120, 545, 145); 
	m_wndOrderList.Create(this,10, 210, 545, 620); 
	m_wndPatientList.Create(this,560, 30, 1015, 405); 
	m_wndDrugList.Create(this,560, 470, 1015, 620); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 149, 140, 174);
	m_wndType.Create(this,145, 149, 360, 174); 
	m_wndTotalCount.Create(this,935, 415, 1015, 440); 

}
void CCHMSDailyFoodOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndIssueDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndIssueDate.SetCheckValue(true);
	m_wndStatus.SetLimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndDept.SetLimitText(35);
	m_wndDept.SetCheckValue(true);
	m_wndType.SetLimitText(35);
	m_wndType.SetCheckValue(true);
	m_wndTotalCount.SetLimitText(16);
	m_wndTotalCount.SetCheckValue(true);







}
void CCHMSDailyFoodOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndIssueDate.SetEvent(WE_CHANGE, _OnIssueDateChangeFnc);
	//m_wndIssueDate.SetEvent(WE_SETFOCUS, _OnIssueDateSetfocusFnc);
	//m_wndIssueDate.SetEvent(WE_KILLFOCUS, _OnIssueDateKillfocusFnc);
	m_wndIssueDate.SetEvent(WE_CHECKVALUE, _OnIssueDateCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDept.SetEvent(WE_CHANGE, _OnDeptChangeFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_CHECKVALUE, _OnDeptCheckValueFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndType.SetEvent(WE_CHANGE, _OnTypeChangeFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_CHECKVALUE, _OnTypeCheckValueFnc);
	//m_wndTotalCount.SetEvent(WE_CHANGE, _OnTotalCountChangeFnc);
	//m_wndTotalCount.SetEvent(WE_SETFOCUS, _OnTotalCountSetfocusFnc);
	//m_wndTotalCount.SetEvent(WE_KILLFOCUS, _OnTotalCountKillfocusFnc);
	m_wndTotalCount.SetEvent(WE_CHECKVALUE, _OnTotalCountCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCHMSDailyFoodOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCHMSDailyFoodOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCHMSDailyFoodOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCHMSDailyFoodOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCHMSDailyFoodOrderFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCHMSDailyFoodOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndIssueDate.GetDlgCtrlID(), m_szIssueDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDept.GetDlgCtrlID(), m_szDept);
	DDX_Text(pDX, m_wndType.GetDlgCtrlID(), m_szType);
	DDX_Text(pDX, m_wndTotalCount.GetDlgCtrlID(), m_nTotalCount);

}
void CCHMSDailyFoodOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSDailyFoodOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSDailyFoodOrder::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szIssueDate.Empty();
	m_szStatus.Empty();
	m_szNote.Empty();
	m_szPatientName.Empty();
	m_szDept.Empty();
	m_szType.Empty();
	m_nTotalCount=0;

}
int CCHMSDailyFoodOrder::SetMode(int nMode){
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
/*void CCHMSDailyFoodOrder::OnOrderNoChange(){
	
} */
/*void CCHMSDailyFoodOrder::OnOrderNoSetfocus(){
	
} */
/*void CCHMSDailyFoodOrder::OnOrderNoKillfocus(){
	
} */
int CCHMSDailyFoodOrder::OnOrderNoCheckValue(){
	return 0;
} 
void CCHMSDailyFoodOrder::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CCHMSDailyFoodOrder::OnOrderDateChange(){
	
} */
/*void CCHMSDailyFoodOrder::OnOrderDateSetfocus(){
	
} */
/*void CCHMSDailyFoodOrder::OnOrderDateKillfocus(){
	
} */
int CCHMSDailyFoodOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CCHMSDailyFoodOrder::OnIssueDateChange(){
	
} */
/*void CCHMSDailyFoodOrder::OnIssueDateSetfocus(){
	
} */
/*void CCHMSDailyFoodOrder::OnIssueDateKillfocus(){
	
} */
int CCHMSDailyFoodOrder::OnIssueDateCheckValue(){
	return 0;
} 
/*void CCHMSDailyFoodOrder::OnStatusChange(){
	
} */
/*void CCHMSDailyFoodOrder::OnStatusSetfocus(){
	
} */
/*void CCHMSDailyFoodOrder::OnStatusKillfocus(){
	
} */
int CCHMSDailyFoodOrder::OnStatusCheckValue(){
	return 0;
} 
/*void CCHMSDailyFoodOrder::OnNoteChange(){
	
} */
/*void CCHMSDailyFoodOrder::OnNoteSetfocus(){
	
} */
/*void CCHMSDailyFoodOrder::OnNoteKillfocus(){
	
} */
int CCHMSDailyFoodOrder::OnNoteCheckValue(){
	return 0;
} 
void CCHMSDailyFoodOrder::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSDailyFoodOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CCHMSDailyFoodOrder::OnPatientNameChange(){
	
} */
/*void CCHMSDailyFoodOrder::OnPatientNameSetfocus(){
	
} */
/*void CCHMSDailyFoodOrder::OnPatientNameKillfocus(){
	
} */
int CCHMSDailyFoodOrder::OnPatientNameCheckValue(){
	return 0;
} 
/*void CCHMSDailyFoodOrder::OnDeptChange(){
	
} */
/*void CCHMSDailyFoodOrder::OnDeptSetfocus(){
	
} */
/*void CCHMSDailyFoodOrder::OnDeptKillfocus(){
	
} */
int CCHMSDailyFoodOrder::OnDeptCheckValue(){
	return 0;
} 
void CCHMSDailyFoodOrder::OnOrderListDblClick(){
	
} 
void CCHMSDailyFoodOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSDailyFoodOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSDailyFoodOrder::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCHMSDailyFoodOrder::OnPatientListDblClick(){
	
} 
void CCHMSDailyFoodOrder::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSDailyFoodOrder::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSDailyFoodOrder::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCHMSDailyFoodOrder::OnDrugListDblClick(){
	
} 
void CCHMSDailyFoodOrder::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSDailyFoodOrder::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSDailyFoodOrder::OnDrugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CCHMSDailyFoodOrder::OnTypeChange(){
	
} */
/*void CCHMSDailyFoodOrder::OnTypeSetfocus(){
	
} */
/*void CCHMSDailyFoodOrder::OnTypeKillfocus(){
	
} */
int CCHMSDailyFoodOrder::OnTypeCheckValue(){
	return 0;
} 
/*void CCHMSDailyFoodOrder::OnTotalCountChange(){
	
} */
/*void CCHMSDailyFoodOrder::OnTotalCountSetfocus(){
	
} */
/*void CCHMSDailyFoodOrder::OnTotalCountKillfocus(){
	
} */
int CCHMSDailyFoodOrder::OnTotalCountCheckValue(){
	return 0;
} 
int CCHMSDailyFoodOrder::OnAddCHMSDailyFoodOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSDailyFoodOrder::OnEditCHMSDailyFoodOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSDailyFoodOrder::OnDeleteCHMSDailyFoodOrder(){
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
 		OnCancelCHMSDailyFoodOrder();
 	}
	return 0;
}
int CCHMSDailyFoodOrder::OnSaveCHMSDailyFoodOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
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
 		//OnCHMSDailyFoodOrderListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSDailyFoodOrder::OnCancelCHMSDailyFoodOrder(){
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
int CCHMSDailyFoodOrder::OnCHMSDailyFoodOrderListLoadData(){
	return 0;
}
