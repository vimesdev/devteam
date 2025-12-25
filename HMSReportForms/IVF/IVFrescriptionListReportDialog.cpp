#include "stdafx.h"
#include "IVFPrescriptionListReportDialog.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((IVFPrescriptionListReportDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnStockAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((IVFPrescriptionListReportDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnDoctorAddNew();
}*/
static long _OnApprovedByLoadDataFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog *)pWnd)->OnApprovedByLoadData();
}
static int _OnMinTotalAmtCheckValueFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog *)pWnd)->OnMinTotalAmtCheckValue();
}
static void _OnSaleOrderSelectFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog*)pWnd)->OnSaleOrderSelect();
}
static void _OnCheckAllSelectFnc(CWnd *pWnd){
	 ((IVFPrescriptionListReportDialog*)pWnd)->OnCheckAllSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((IVFPrescriptionListReportDialog*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((IVFPrescriptionListReportDialog*)pWnd)->OnInPatientSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	IVFPrescriptionListReportDialog *pVw = (IVFPrescriptionListReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	IVFPrescriptionListReportDialog *pVw = (IVFPrescriptionListReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	IVFPrescriptionListReportDialog *pVw = (IVFPrescriptionListReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((IVFPrescriptionListReportDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog *)pWnd)->OnObjectAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((IVFPrescriptionListReportDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((IVFPrescriptionListReportDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListCheckC11RoomFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog*)pWnd)->OnListCheckC11Room();
} 
static int _OnListCheckC12RoomFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog*)pWnd)->OnListCheckC12Room();
} 
static int _OnListCheckC13RoomFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog*)pWnd)->OnListCheckC13Room();
} 
static int _OnAddPMSPrescriptionListReportDialogFnc(CWnd *pWnd){
	 return ((IVFPrescriptionListReportDialog*)pWnd)->OnAddPMSPrescriptionListReportDialog();
} 
static int _OnEditPMSPrescriptionListReportDialogFnc(CWnd *pWnd){
	 return ((IVFPrescriptionListReportDialog*)pWnd)->OnEditPMSPrescriptionListReportDialog();
}
static int _OnListUncheckAllFnc(CWnd *pWnd){
	return ((IVFPrescriptionListReportDialog*)pWnd)->OnListUncheckAll();
} 
static int _OnDeletePMSPrescriptionListReportDialogFnc(CWnd *pWnd){
	 return ((IVFPrescriptionListReportDialog*)pWnd)->OnDeletePMSPrescriptionListReportDialog();
} 
static int _OnSavePMSPrescriptionListReportDialogFnc(CWnd *pWnd){
	 return ((IVFPrescriptionListReportDialog*)pWnd)->OnSavePMSPrescriptionListReportDialog();
} 
static int _OnCancelPMSPrescriptionListReportDialogFnc(CWnd *pWnd){
	 return ((IVFPrescriptionListReportDialog*)pWnd)->OnCancelPMSPrescriptionListReportDialog();
} 
IVFPrescriptionListReportDialog::IVFPrescriptionListReportDialog(CWnd *pParent)
{
	m_nDlgWidth = 590;
	m_nDlgHeight = 495;
	SetDefaultValues();
}
IVFPrescriptionListReportDialog::~IVFPrescriptionListReportDialog()
{
}
void IVFPrescriptionListReportDialog::OnCreateComponents()
{
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 395, 55);
	m_wndToDate.Create(this,400, 30, 570, 55); 
	m_wndItemType.Create(this, _T("Item Type"), 295, 185, 575, 240);
	m_wndDeptType.Create(this, _T("Dept Type"), 5, 185, 290, 240);
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 110, 85);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 180);
	//m_wndStock.SetCheckBox(TRUE);
	m_wndStock.Create(this,115, 60, 570, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 89, 110, 114);
	//m_wndObject.SetCheckBox(TRUE);
	m_wndObject.Create(this,115, 89, 570, 114); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 120, 110, 145);
	m_wndDoctor.Create(this,115, 120, 290, 145); 
	m_wndApprovedByLabel.Create(this, _T("Approved By"), 295, 120, 395, 145);
	m_wndApprovedBy.Create(this,400, 120, 570, 145); 
	m_wndMinTotalAmtLabel.Create(this, _T("Min Total Amt"), 10, 150, 110, 175);
	m_wndMinTotalAmt.Create(this,115, 150, 290, 175); 
	//m_wndServicePrice.Create(this, _T("Serv Price"), 295, 150, 395, 175);
	m_wndSaleOrder.Create(this, _T("Bán lẻ"), 295, 150, 395, 175);
	//m_wndCheckAll.Create(this, _T("Check All"), 10, 210, 95, 235);
	//m_wndOutPatient.Create(this, _T("OutPatient"), 100, 210, 170, 235);
	//m_wndInPatient.Create(this, _T("In Patient"), 175, 210, 285, 235);

	m_wndCheckAll.Create(this, _T("Check All"), 0, 0, 0, 0);
	m_wndOutPatient.Create(this, _T("OutPatient"), 0, 0, 0, 0);
	m_wndInPatient.Create(this, _T("In Patient"), 0, 0, 0, 0);

	m_wndOrientalMedicine.Create(this, _T("Oriental Medicine"), 300, 210, 430, 235);
	m_wndOccidentMedicine.Create(this, _T("Occident Medicine"), 435, 210, 570, 235);
	m_wndList.Create(this,5, 245, 575, 550); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 370, 555, 480, 580);
	
	m_wndExport.Create(this, _T("&Export"), 485, 555, 575, 580);

}
void IVFPrescriptionListReportDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
//	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	m_wndMinTotalAmt.SetCurrencyFormat(true);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 100);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	
	m_wndList.SetCheckBox(true);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 390);
	m_wndList.InsertColumn(2, _T("DeptID"), CFMT_TEXT, 0);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 80);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);

	m_wndApprovedBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndApprovedBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	

	m_szFromDate = pMF->GetSysDate() + _T("00:00");
	m_szToDate = pMF->GetSysDate() + _T("23:59");
	SetMode(VM_EDIT);

}
void IVFPrescriptionListReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndMinTotalAmt.SetEvent(WE_CHECKVALUE, _OnMinTotalAmtCheckValueFnc);
	m_wndSaleOrder.SetEvent(WE_CLICK, _OnSaleOrderSelectFnc);
	m_wndCheckAll.SetEvent(WE_CLICK, _OnCheckAllSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndApprovedBy.SetEvent(WE_LOADDATA, _OnApprovedByLoadDataFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Check C1.1 Room"), _OnListCheckC11RoomFnc, 0, 0, 0);
	//m_wndList.AddEvent(2, _T("Check C1.2 Room"), _OnListCheckC12RoomFnc, 0, 0, 0);
	//m_wndList.AddEvent(3, _T("Check C1.3 Room"), _OnListCheckC13RoomFnc, 0, 0, 0);
	//m_wndList.AddEvent(4, _T("Uncheck All"), _OnListUncheckAllFnc, 0, 0, 0);
	m_wndCheckAll.SetCheck(true);
	m_szCondition = _T("A");
}
void IVFPrescriptionListReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndApprovedBy.GetDlgCtrlID(), m_szApprovedByKey);
	DDX_Text(pDX, m_wndMinTotalAmt.GetDlgCtrlID(), m_nMinTotalAmt);
	DDX_Check(pDX, m_wndSaleOrder.GetDlgCtrlID(), m_bSaleOrder);
	//DDX_Check(pDX, m_wndServicePrice.GetDlgCtrlID(), m_bServPrice);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Check(pDX, m_wndOrientalMedicine.GetDlgCtrlID(), m_bOriental);
	DDX_Check(pDX, m_wndOccidentMedicine.GetDlgCtrlID(), m_bOccident);
}
void IVFPrescriptionListReportDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void IVFPrescriptionListReportDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void IVFPrescriptionListReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szDoctorKey.Empty();
	m_szObjectKey.Empty();
	m_bSaleOrder = FALSE;
	m_bOriental = FALSE;
	m_bOccident = FALSE;
	

}
int IVFPrescriptionListReportDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void IVFPrescriptionListReportDialog::OnFromDateChange(){
	
} */
/*void IVFPrescriptionListReportDialog::OnFromDateSetfocus(){
	
} */
/*void IVFPrescriptionListReportDialog::OnFromDateKillfocus(){
	
} */
int IVFPrescriptionListReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void IVFPrescriptionListReportDialog::OnToDateChange(){
	
} */
/*void IVFPrescriptionListReportDialog::OnToDateSetfocus(){
	
} */
/*void IVFPrescriptionListReportDialog::OnToDateKillfocus(){
	
} */
int IVFPrescriptionListReportDialog::OnToDateCheckValue(){
	return 0;
} 
void IVFPrescriptionListReportDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void IVFPrescriptionListReportDialog::OnStockSelendok(){
	 
}
/*void IVFPrescriptionListReportDialog::OnStockSetfocus(){
	
}*/
/*void IVFPrescriptionListReportDialog::OnStockKillfocus(){
	
}*/
long IVFPrescriptionListReportDialog::OnStockLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
		szWhere.Format(_T(" and msl_storage_id ='%s' "), m_szStockKey);
	}
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE 1=1 %s and msl_org_id='PM' and MSL_ISACTIVE='Y' and MSL_CATEGORY='S' ORDER BY msl_storage_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void IVFPrescriptionListReportDialog::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void IVFPrescriptionListReportDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void IVFPrescriptionListReportDialog::OnDoctorSelendok(){
	 
}
/*void IVFPrescriptionListReportDialog::OnDoctorSetfocus(){
	
}*/
/*void IVFPrescriptionListReportDialog::OnDoctorKillfocus(){
	
}*/
long IVFPrescriptionListReportDialog::OnDoctorLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();		

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" WHERE su_userid='%s' "), m_szDoctorKey);
	};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT su_userid as id, su_name as name FROM sys_user where SU_DEPTID in ('TTHTSS','TTDTHM') %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void IVFPrescriptionListReportDialog::OnDoctorAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
long IVFPrescriptionListReportDialog::OnApprovedByLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();		
	CString szFilter;
	szFilter.Format(_T(" AND su_deptid = 'KD'"));
	return pMF->LoadUserList(&m_wndApprovedBy, m_szApprovedByKey, szFilter);

}
int IVFPrescriptionListReportDialog::OnMinTotalAmtCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return 0;
}
void IVFPrescriptionListReportDialog::OnSaleOrderSelect(){

} 
void IVFPrescriptionListReportDialog::OnListDblClick(){
	
} 
void IVFPrescriptionListReportDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int IVFPrescriptionListReportDialog::OnListCheckC11Room(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_szCondition == _T("I"))
		return 0;
	CString tmpStr;

	for (int i = 0 ; i<m_wndList.GetItemCount(); i++)
	{
		tmpStr = m_wndList.GetItemText(i, 2);
		if (tmpStr == _T("C1.1"))
			m_wndList.SetCheck(i);
	}
	return 0;
} 
int IVFPrescriptionListReportDialog::OnListCheckC12Room(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_szCondition == _T("I"))
		return 0;
	CString tmpStr;
	for (int i = 0 ; i<m_wndList.GetItemCount(); i++)
	{
		tmpStr = m_wndList.GetItemText(i, 2);
		if (tmpStr == _T("C1.2"))
			m_wndList.SetCheck(i);
	}
	return 0;
} 
int IVFPrescriptionListReportDialog::OnListCheckC13Room(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_szCondition == _T("I"))
		return 0;
	CString tmpStr;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		tmpStr = m_wndList.GetItemText(i, 2);
		if (tmpStr == _T("C1.3"))
			m_wndList.SetCheck(i);
	}
	return 0;
} 
int IVFPrescriptionListReportDialog::OnListUncheckAll(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_szCondition == _T("I"))
		return 0;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, false);
	}
	return 0;
} 
long IVFPrescriptionListReportDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	if (m_szCondition == _T("O"))	
		szSQL.Format(_T(" SELECT hrl_id as id, hrl_name as name, hrl_deptid as deptid FROM hms_roomlist WHERE hrl_deptid IN ('TTHTSS') ORDER BY hrl_deptid, hrl_id"));	
	else if (m_szCondition == _T("I")) 
		szSQL.Format(_T(" SELECT sd_id as id, sd_name as name, 0 as deptid FROM sys_dept WHERE sd_type ='DT' and sd_id='TTDTHM' ORDER BY sd_index"));
	else szSQL.Format(_T(" SELECT sd_id as id, sd_name as name, 0 as deptid FROM sys_dept WHERE  sd_id in ('TTHTSS', 'TTDTHM') ORDER BY sd_index"));
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void IVFPrescriptionListReportDialog::OnCheckAllSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szCondition = _T("A");
	OnListLoadData();
}
void IVFPrescriptionListReportDialog::OnOutPatientSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szCondition = _T("O");
	OnListLoadData();
}
void IVFPrescriptionListReportDialog::OnInPatientSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szCondition = _T("I");
	OnListLoadData();
}
void IVFPrescriptionListReportDialog::OnPrintPreviewSelect()
{
	return;
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	TranslateString(_T("Print Synthesis Format"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Print Detail Format"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	if(pMF->GetCurrentUser()== _T("duoc"))
	{
			menu.AppendMenu(MF_SEPARATOR);
			TranslateString(_T("Print Detail By Drug Format"), tmpStr);
			menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	}


	CRect rect;
	m_wndPrintPreview.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrintSynthesis();
			break;
		case 2:
			OnPrintPreview();
			break;
		case 3:
			OnPrintDetailByDrug();
			break;
	}
} 
void IVFPrescriptionListReportDialog::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	TranslateString(_T("Export đơn thuốc tổng hợp"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Export đơn thuốc chi tiết 1"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Export đơn thuốc chi tiết 2"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSynthesis();
			break;
		case 2:
			OnExport();
			break;
		case 3:
			OnExportDetailByDrug();
			break;
	}
} 
void IVFPrescriptionListReportDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void IVFPrescriptionListReportDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void IVFPrescriptionListReportDialog::OnObjectSelendok(){
	 
}
/*void IVFPrescriptionListReportDialog::OnObjectSetfocus(){
	
}*/
/*void IVFPrescriptionListReportDialog::OnObjectKillfocus(){
	
}*/
long IVFPrescriptionListReportDialog::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object ORDER BY ho_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void IVFPrescriptionListReportDialog::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
int IVFPrescriptionListReportDialog::OnAddPMSPrescriptionListReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int IVFPrescriptionListReportDialog::OnEditPMSPrescriptionListReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int IVFPrescriptionListReportDialog::OnDeletePMSPrescriptionListReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelPMSPrescriptionListReportDialog(); 
 	}
	return 0;
}
int IVFPrescriptionListReportDialog::OnSavePMSPrescriptionListReportDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
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
 		//OnPMSPrescriptionListReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int IVFPrescriptionListReportDialog::OnCancelPMSPrescriptionListReportDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	return 0;
} 
int IVFPrescriptionListReportDialog::OnPMSPrescriptionListReportDialogListLoadData(){
	return 0;
}


void IVFPrescriptionListReportDialog::OnPrintPreview()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString szDate, szSysDate;
	CString tmpStr, tmpStr2, szObjectID, 
		szObjectName, szTemp, szOldOrderID, szNewOrderID, szDept, szOldDept, szNewDept;;
	CString szSQL, szDeptType, szDeptType2, szWhereRoomID, szWhereRoomID2, szWhere, szWhere2, szWhere3,
		szListID, szRoomID, szRoomName, szHavingClause, szProductType, szObjects, szStocks;
	if(!rpt.Init(_T("Reports/HMS/PMS_PRESCRIPTIONLISTREPORT.RPT"),true) )
	{
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere3.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);	

	CString szRoomC11, szRoomC12, szRoomC13;
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			szDeptType2.Format(_T(" and su_deptid IN('TTHTSS') "));
			if (!szRoomC11.IsEmpty())
			{
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
				szWhereRoomID2.AppendFormat(_T(" and ((su_roomid in (%s) and su_deptid= 'C1.1') "), szRoomC11);
			}
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
				{
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2')"), szRoomC12);
					szWhereRoomID2.AppendFormat(_T(" or (su_roomid in (%s) and su_deptid= 'C1.2')"), szRoomC12);
				}
				else
				{
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
					szWhereRoomID2.AppendFormat(_T(" and ((su_roomid in (%s) and su_deptid= 'C1.2') "), szRoomC12);
				}
				if (!szRoomC13.IsEmpty())
					if (!szWhereRoomID.IsEmpty())
					{
						szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
						szWhereRoomID2.AppendFormat(_T(" or (su_roomid in (%s) and su_deptid= 'C1.3')"), szRoomC13);
					}
					else
					{
						szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3') "), szRoomC13);
						szWhereRoomID2.AppendFormat(_T(" and ((su_roomid in (%s) and su_deptid= 'C1.3') "), szRoomC13);
					}
					if (!szWhereRoomID.IsEmpty())
					{
						szWhereRoomID.AppendFormat(_T(")"));
						szWhereRoomID2.AppendFormat(_T(")"));
					}
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			szDeptType2.Format(_T(" and su_deptid IN('TTDTHM') "));
			if(!szListID.IsEmpty())
			{
				szWhereRoomID.Format(_T(" and hpo_deptid in(%s) ") , szListID);
				szWhereRoomID2.Format(_T(" and su_deptid in(%s) ") , szListID);
			}
		}
		if (!szDeptType.IsEmpty())
		{
			szWhere.AppendFormat(_T("%s"), szDeptType);
			szWhere2.AppendFormat(_T("%s"), szDeptType2);
		}

		if(!m_szDoctorKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and hpo_doctor='%s' "), m_szDoctorKey);
			szWhere2.AppendFormat(_T(" and so_user_id='%s' "), m_szDoctorKey);
		}

		for (int i = 0; i < m_wndStock.GetItemCount(); i++)
		{
			if (m_wndStock.GetCheck(i))
			{
				m_wndStock.SetCurSel(i);
				if (!szStocks.IsEmpty())
					szStocks += _T(", ");
				szStocks += m_wndStock.GetCurrent(0);
			}
		}
		if (!szStocks.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);
			szWhere2.AppendFormat(_T(" AND so_storage_id IN(%s)"), szStocks);
		}
		//szPrice = _T("product_taxprice");
		//if (m_bServPrice)
		//szPrice = _T("hpol_unitprice");
		if (m_nMinTotalAmt > 0)
			szHavingClause.Format(_T(" HAVING SUM(amount) > %ld"), m_nMinTotalAmt);
		if (!m_szApprovedByKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND hpo_approveby = '%s'"), m_szApprovedByKey);
			szWhere2.AppendFormat(_T(" AND so_approvedby = '%s'"), m_szApprovedByKey);
		}
		if (m_bOriental)
			szProductType = _T(" product_producttype = 'A1301'");
		if (m_bOccident)
		{
			if (!szProductType.IsEmpty())
				szProductType += _T(" OR");
			szProductType += _T(" product_producttype <> 'A1301'");
		}
		if (!szProductType.IsEmpty())
			szWhere3.AppendFormat(_T(" AND (%s)"), szProductType);	

		if(m_bSaleOrder)
			szWhere.AppendFormat(_T(" AND 0 = 1"));
		//Page Header
		//Report Detail
		szSQL.Format(_T(" SELECT") \
			_T("   (SELECT sd_name FROM sys_dept WHERE sd_id = deptid") \
			_T("   ) AS deptid,") \
			_T("   orderid,") \
			_T("   product_code AS id,") \
			_T("   docno,") \
			_T("   Get_patientname(docno)              AS pname,") \
			_T("   Hms_getagebydoc(docno)              AS age,") \
			_T("   Get_username(hpo_doctor)            AS doctor,") \
			_T("   product_name                        AS pdname,") \
			_T("   Get_uomname(product_purchase_uomid) AS unit,") \
			_T("   price,") \
			_T("   SUM(qty) qty,") \
			_T("   SUM(amount) amount") \
			_T(" FROM") \
			_T("   (SELECT hpo_deptid                   AS deptid,") \
			_T("     CAST(hpo_orderid AS NVARCHAR2(10)) AS orderid,") \
			_T("     hpol_qtyissue * hpol_unitprice     AS amount,") \
			_T("     hpo_docno                          AS docno,") \
			_T("     hpo_doctor,") \
			_T("     hpol_unitprice       AS price,") \
			_T("     hpol_qtyissue        AS qty,") \
			_T("     hpol_product_item_id AS productitem_id") \
			_T("   FROM hms_pharmaorder") \
			_T("   LEFT JOIN hms_pharmaorderline") \
			_T("   ON ( hpo_orderid      = hpol_orderid )") \
			_T("   WHERE hpo_orderstatus = 'A'") \
			_T("   AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T("   AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T("   AND hpo_ordertype  IN ('P', 'D', 'M', 'E')") \
			_T("   %s %s") \
			_T("   UNION ALL") \
			_T("   SELECT su_deptid                  AS deptid,") \
			_T("     so_orderno                      AS orderid,") \
			_T("     sol_qtydelivery * sol_unitprice AS amount,") \
			_T("     so_docno                        AS docno,") \
			_T("     so_user_id                      AS doctor,") \
			_T("     sol_unitprice                   AS price,") \
			_T("     sol_qtydelivery                 AS qty,") \
			_T("     sol_product_item_id             AS productitem_id") \
			_T("   FROM sale_order") \
			_T("   LEFT JOIN sale_orderline") \
			_T("   ON(so_sale_order_id = sol_sale_order_id)") \
			_T("   LEFT JOIN hms_fee_invoice") \
			_T("   ON (hfe_docno     = so_docno") \
			_T("   AND hfe_invoiceno = so_invoiceno)") \
			_T("   LEFT JOIN sys_user") \
			_T("   ON( su_userid                                        = so_user_id)") \
			_T("   WHERE so_org_id                                     IN('GL','PM','TM')") \
			_T("   AND DECODE('R', so_partner_type_id, 'P', hfe_status) = 'P'") \
			_T("   AND DECODE('R', so_partner_type_id, so_approveddate, hfe_createddate) BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T("   AND NVL(so_partner_type_id, 'W') IN('W', 'I')") \
			_T("   AND so_status                   IN('A')") \
			_T("   %s %s") \
			_T("   )") \
			_T(" LEFT JOIN m_productitem_view") \
			_T(" ON ( product_item_id = productitem_id )") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON ( docno = hd_docno )") \
			_T(" LEFT JOIN hms_patient") \
			_T(" ON ( hd_patientno = hp_patientno )") \
			_T(" LEFT JOIN hms_object") \
			_T(" ON ( ho_id = hd_object )") \
			_T(" WHERE 1 = 1 %s") \
			_T(" GROUP BY deptid,") \
			_T("   orderid,") \
			_T("   product_code,") \
			_T("   docno,") \
			_T("   hpo_doctor,") \
			_T("   product_name,") \
			_T("   product_purchase_uomid,") \
			_T("   price") \
			_T(" ORDER BY deptid,") \
			_T("   orderid,") \
			_T("   docno"), m_szFromDate, m_szToDate, szWhere, szWhereRoomID, m_szFromDate, m_szToDate, szWhere2, szWhereRoomID2, szWhere3, szHavingClause);
		_fmsg(_T("%s"), szSQL);

	CReportSection* rptDetail = NULL;
	CReportSection* rptGroup = NULL;
	CRecord rs(&pMF->m_db);
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		//_fmsg(_T("%s"), szSQL);
		//QueryOpener(szSQL);
		return;
	}
	long nItem = 1, nTotalOrder=0, nItemCount = 0;
	long nOrderID;
	double nTotalAmount=0, cost = 0, nAmount = 0, nDeptAmount = 0;
	while(!rs.IsEOF())
	{

		rs.GetValue(_T("deptid"), szNewDept);
		if (szNewDept != szOldDept)
		{
			if (nDeptAmount > 0)
			{		
				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
				TranslateString(_T("Tổng khoa"), tmpStr);
				rptGroup->SetValue(_T("PName"), tmpStr);
				FormatCurrency(nDeptAmount, tmpStr);		
				rptGroup->SetValue(_T("Amount"), tmpStr);
				nDeptAmount = 0;
			}	
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptGroup->SetValue(_T("PName"), szNewDept);
			szOldDept = szNewDept;
		}

		rs.GetValue(_T("orderid"), szNewOrderID);
		if (szNewOrderID != szOldOrderID)
		{
			if (nAmount > 0)
			{			
				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
				if (rptGroup)
				{
					rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
					rptGroup->GetItem(_T("PName"))->SetItalic(true);
					rptGroup->GetItem(_T("Amount"))->SetItalic(true);
					TranslateString(_T("Total Amount"), tmpStr);
					rptGroup->SetValue(_T("PName"), tmpStr);
					FormatCurrency(nAmount, tmpStr);		
					rptGroup->SetValue(_T("Amount"), tmpStr);
				}
				nTotalAmount += nAmount;
				nAmount = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rs.GetValue(_T("orderid"), nOrderID);
				tmpStr.Format(_T("%ld"), nOrderID);
				rptGroup->SetValue(_T("OrderID"), tmpStr);
				TranslateString(_T("Age"), tmpStr2);
				tmpStr.Format(_T("[%s]  -  %s   -   %s:%s  -  %s"), rs.GetValue(_T("docno")), rs.GetValue(_T("pname")),tmpStr2,rs.GetValue(_T("Age")), rs.GetValue(_T("doctor")));
				rptGroup->SetValue(_T("PName"), tmpStr);
				rs.GetValue(_T("doctor"), tmpStr);
				rptGroup->SetValue(_T("Amount"), tmpStr);
			}
			nItemCount += nItem - 1;
			nTotalOrder++;
			szOldOrderID = szNewOrderID;
			nItem = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			tmpStr.Format(_T("%ld"), nItem++);			
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("pdname"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rs.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);			
			rs.GetValue(_T("price"), tmpStr);			
			rptDetail->SetValue(_T("4"), tmpStr);
			rs.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rs.GetValue(_T("amount"), cost);
			FormatCurrency(cost, tmpStr);			
			rptDetail->SetValue(_T("6"), tmpStr);				
			nAmount +=cost;
			nDeptAmount +=cost;
		}
		rs.MoveNext();
	}
	if (nAmount > 0)
	{			
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
		if (rptGroup)
		{
			rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
			rptGroup->GetItem(_T("PName"))->SetItalic(true);
			rptGroup->GetItem(_T("Amount"))->SetItalic(true);
			TranslateString(_T("Total Amount"), tmpStr);
			rptGroup->SetValue(_T("PName"), tmpStr);
			FormatCurrency(nAmount, tmpStr);		
			rptGroup->SetValue(_T("Amount"), tmpStr);
		}
		nTotalAmount += nAmount;
		nAmount = 0;
	}
	nItemCount += nItem - 1;

	if (nDeptAmount > 0)
	{		
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
		TranslateString(_T("Tổng khoa"), tmpStr);
		rptGroup->SetValue(_T("PName"), tmpStr);
		FormatCurrency(nDeptAmount, tmpStr);		
		rptGroup->SetValue(_T("Amount"), tmpStr);
	}	

	//Page Footer
	//Report Footer
	
	tmpStr.Format(_T("%ld"), nTotalOrder);
	rpt.GetReportFooter()->SetValue(_T("TotalOrder"), tmpStr);
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	FormatCurrency(nTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	tmpStr.Format(_T("%ld"), nItemCount);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	rpt.PrintPreview();
	EndWaitCursor();


}

void IVFPrescriptionListReportDialog::OnPrintSynthesis(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	long double nAmount = 0, nTotalAmount = 0;
	int nIdx = 1, j = 0, nOrder = 0, nTotalOrder = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldDept, szNewDept;;
	szReportName = _T("Reports\\HMS\\PMS_PRESCRIPTIONLISTREPORT_TH.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}

	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
	CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szNewDept);
		if (szNewDept != szOldDept)
		{
			if (nOrder > 0)
			{	
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalOrder"), int2str(nOrder));
				tmpStr.Format(_T("%.2f"), nAmount);
				rptGroup->SetValue(_T("TotalAmount"), tmpStr);	
				nTotalAmount += nAmount;
				nTotalOrder += nOrder;
				nAmount = nOrder = 0;
			}	

			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptGroup->SetValue(_T("GroupName"), szNewDept);
			szOldDept = szNewDept;
		}

		//Group Seperation
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("1"), rs.GetValue(_T("orderid")));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("age")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("docno")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("doctor")));
		rs.GetValue(_T("amount"), nTmp);
		nTotalAmount+= nTmp;
		rptDetail->SetValue(_T("6"), double2str(nTmp));
		rptDetail->SetValue(_T("7"), rs.GetValue(_T("workplace")));
		nTotalOrder++;
		rs.MoveNext();
	}

	if (nOrder > 0)
	{	
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalOrder"), int2str(nOrder));
		tmpStr.Format(_T("%.2f"), nAmount);
		rptGroup->SetValue(_T("TotalAmount"), tmpStr);	
		nTotalAmount += nAmount;
		nTotalOrder += nOrder;
	}

	if (nTotalOrder > 0)
	{	
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalOrder"), int2str(nTotalOrder));
		tmpStr.Format(_T("%.2f"), nTotalAmount);
		rptGroup->SetValue(_T("TotalAmount"), tmpStr);	
	}

	rptHeader = rpt.GetReportFooter();
	tmpStr = pMF->GetSysDate();
	szDate.Format(rptHeader->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rptHeader->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();
}
void IVFPrescriptionListReportDialog::OnPrintDetailByDrug(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL, szObjectID, szObjectName, szWhere, szWhere1, 
		szWhere2, tmpStr2,szListID, szRoomID, szRoomName;
	if(!rpt.Init(_T("Reports/HMS/PMS_PRESCRIPTIONLISTREPORT.RPT"),true) )
	{
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	CString szStocksName;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocksName.IsEmpty())
				szStocksName += _T(", ");
			szStocksName += m_wndStock.GetCurrent(1);
		}
	}
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStocksName);
	//rpt.GetReportHeader()->SetValue(_T("Doctor"), m_wndDoctor.GetCurrent(1));
	

	tmpStr2 = _T("' '");
	//for(int i=0; i < m_wndObject.GetCount(); i++)
	//{
	//	//if(m_wndObject.GetCheck(i))
	//	{
	//		m_wndObject.SetCurSel(i);
	//		if (!szObjectID.IsEmpty())
	//			szObjectID += _T(",");
	//		szObjectID.AppendFormat(_T("'%s'"), m_wndObject.GetCurrent(0));

	//		if (!szObjectName.IsEmpty())
	//			szObjectName += _T(",");
	//		szObjectName.AppendFormat(_T("%s"), m_wndObject.GetCurrent(1));
	//	}
	//}
	szWhere.Format(_T(" AND hpo_orderstatus = 'A' AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				   _T(" AND hpo_ordertype IN ('P', 'D', 'M', 'E')"), m_szFromDate, m_szToDate);
	CString szObjects;
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);
	
	CString szRoomC11, szRoomC12, szRoomC13, szDept, szProductType, szNewOrderID, szOldOrderID;
	szProductType.Empty();
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	BeginWaitCursor();
	CString szDeptType, szWhereRoomID, szTable, szLineTable;
	szDeptType.Empty();
	szWhereRoomID.Empty();
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			if (!szRoomC11.IsEmpty())				
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
			if (!szRoomC13.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
			if (!szWhereRoomID.IsEmpty())
				szWhereRoomID.AppendFormat(_T(")"));
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			if(!szListID.IsEmpty())
				szWhereRoomID.Format(_T(" and hpo_deptid in(%s) ") , szListID);
		}
	if (!szDeptType.IsEmpty())
		szWhere.AppendFormat(_T("%s"), szDeptType);

	if(!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpo_doctor='%s' "), m_szDoctorKey);

	CString szStocks;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocks.IsEmpty())
				szStocks += _T(", ");
			szStocks += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStocks.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);

	if (m_nMinTotalAmt > 0)
		szWhere2.Format(_T(" AND taxamount >= %ld"), m_nMinTotalAmt);
	if (!m_szApprovedByKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_approveby = '%s'"), m_szApprovedByKey);
	//szPrice = _T("product_taxprice");
	//if (m_bServPrice)
	//szPrice = _T("hpol_unitprice");
	if (m_bOriental)
		szProductType = _T(" product_producttype = 'A1301'");
	if (m_bOccident)
	{
		if (!szProductType.IsEmpty())
			szProductType += _T(" OR");
		szProductType += _T(" product_producttype <> 'A1301'");
	}
	if (!szProductType.IsEmpty())
		szWhere.AppendFormat(_T(" AND (%s)"), szProductType);
	rpt.GetReportHeader()->SetValue(_T("Object"), szObjectName);
	//Page Header
	//Report Detail
	szSQL.Format(_T(" SELECT  ") \
	_T("        Get_username(hpo_doctor) doctor, ") \
	_T("        NAME, ") \
	_T("        Get_uomname(product_purchase_uomid) unit, ") \
	_T("        price, ") \
	_T("        SUM(qty) qty, ") \
	_T("        SUM(amount) amount ") \
	_T(" FROM   (SELECT    hpol_orderid orderid, ") \
	_T("                   hpol_orderlineid, ") \
	_T("                   hpol_qtyissue * hpol_unitprice amount, ") \
	_T("                   SUM(hpol_qtyissue * hpol_unitprice) ") \
	_T("                     OVER ( ") \
	_T("                       PARTITION BY (hpol_orderid)) taxamount, ") \
	_T("                   hpo_docno docno, ") \
	_T("                   Hms_getage(( hd_admitdate ), hp_birthdate) age, ") \
	_T("                   hpo_doctor, ") \
	_T("                   product_id, ") \
	_T("                   product_name NAME, ") \
	_T("                   product_purchase_uomid, ") \
	_T("                   hpol_unitprice price, ") \
	_T("                   hpol_qtyissue qty ") \
	_T("         FROM      hms_pharmaorder ") \
	_T("         LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
	_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
	_T("         LEFT JOIN hms_doc ON ( hpo_docno = hd_docno ) ") \
	_T("         LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
	_T("         LEFT JOIN hms_object ON ( ho_id = hpo_object_id ) ") \
	_T("		 WHERE 1=1 %s %s) ") \
	_T(" WHERE 1=1 %s") \
	_T(" GROUP  BY hpo_doctor,NAME,price,product_purchase_uomid ") \
	_T(" ORDER BY hpo_doctor, NAME"), szWhere, szWhereRoomID, szWhere2);

	//rpt.GetReportHeader()->SetValue(_T("RoomName"), szRoomName);

	CReportSection* rptDetail = NULL;
	CReportSection* rptGroup = NULL;
	CRecord rs(&pMF->m_db);
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		_fmsg(_T("%s"), szSQL);
		//QueryOpener(szSQL);
		return;
	}
	long nItem = 1, nTotalOrder=0, nItemCount = 0;

	double nTotalAmount=0,cost = 0, nAmount = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("doctor"), szNewOrderID);
		if (szNewOrderID != szOldOrderID)
		{
			if (nAmount > 0)
			{			
				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
				if (rptGroup)
				{
					rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
					rptGroup->GetItem(_T("PName"))->SetItalic(true);
					rptGroup->GetItem(_T("Amount"))->SetItalic(true);
					TranslateString(_T("Total Amount"), tmpStr);
					rptGroup->SetValue(_T("PName"), tmpStr);
					FormatCurrency(nAmount, tmpStr);		
					rptGroup->SetValue(_T("Amount"), tmpStr);
				}
				nTotalAmount += nAmount;
				nAmount = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rs.GetValue(_T("doctor"), tmpStr);
				rptGroup->SetValue(_T("Amount"), tmpStr);
			}
			nItemCount += nItem - 1;
			nTotalOrder++;
			szOldOrderID = szNewOrderID;
			nItem = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			tmpStr.Format(_T("%ld"), nItem++);			
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("name"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rs.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);			
			rs.GetValue(_T("price"), tmpStr);			
			rptDetail->SetValue(_T("4"), tmpStr);
			rs.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rs.GetValue(_T("amount"), cost);
			FormatCurrency(cost, tmpStr);			
			rptDetail->SetValue(_T("6"), tmpStr);				
			nAmount +=cost;
		}
		rs.MoveNext();
	}
	if (nAmount > 0)
	{			
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
		if (rptGroup)
		{
			rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
			rptGroup->GetItem(_T("PName"))->SetItalic(true);
			rptGroup->GetItem(_T("Amount"))->SetItalic(true);
			TranslateString(_T("Total Amount"), tmpStr);
			rptGroup->SetValue(_T("PName"), tmpStr);
			FormatCurrency(nAmount, tmpStr);		
			rptGroup->SetValue(_T("Amount"), tmpStr);
		}
		nTotalAmount += nAmount;
		nAmount = 0;
	}
	nItemCount += nItem - 1;
	//Page Footer
	//Report Footer
	
	tmpStr.Format(_T("%ld"), nTotalOrder);
	rpt.GetReportFooter()->SetValue(_T("TotalOrder"), tmpStr);
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	FormatCurrency(nTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	tmpStr.Format(_T("%ld"), nItemCount);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	rpt.PrintPreview();
	EndWaitCursor();

}

void IVFPrescriptionListReportDialog::OnExportSynthesis(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CStringArray arrCol;
	CExcel xls;
	CString szSQL, tmpStr, szOldDept, szNewDept;
	double nTmp = 0;
	long double nAmount = 0, nTotalAmount = 0;
	int nIdx = 1, nRow = 0, nOrder = 0, nTotalOrder = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(2, 5);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 25);
	xls.SetColumnWidth(5, 25);
	xls.SetColumnWidth(6, 15);
	xls.SetColumnWidth(7, 20);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 7);
	xls.SetCellMergedColumns(0, 3, 7);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	xls.SetCellText(0, 2, _T("\x42\x1EA2NG K\xCA \x110\x1A0N T\x1ED4NG H\x1EE2P"), 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	arrCol.Add(_T("S\x1ED1 phi\x1EBFu"));
	arrCol.Add(_T("T\xEAn \x42N"));
	arrCol.Add(_T("Tu\x1ED5i"));
	arrCol.Add(_T("S\x1ED1 h\x1ED3 s\x1A1"));
	arrCol.Add(_T("Đơn vị công tác"));
	arrCol.Add(_T("T\xEAn \x62\xE1\x63 s\x1EF9"));
	arrCol.Add(_T("Th\xE0nh ti\x1EC1n"));
	arrCol.Add(_T("Ngày mua"));
	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(i, 4, arrCol.GetAt(i), 4098, true);
	nRow = 5;
	while (!rs.IsEOF())
	{

		rs.GetValue(_T("deptid"), szNewDept);
		if (szNewDept != szOldDept)
		{
			if (nOrder > 0)
			{		
				xls.SetCellText(5, nRow, _T("S\x1ED1 \x111\x1A1n:"), 4098, true);
				xls.SetCellText(6, nRow, int2str(nOrder), FMT_NUMBER1, true);
				nRow++;
				TranslateString(_T("Total Amount"), tmpStr);
				xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);	
				xls.SetCellText(6, nRow, double2str(nAmount), FMT_NUMBER1 | FMT_RIGHT, true);	
				nTotalAmount += nAmount;
				nTotalOrder += nOrder;
				nAmount = nOrder = 0;
				nRow++;	
			}	
			xls.SetCellMergedColumns(0, nRow, 6);
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nRow++;
		}

		xls.SetCellText(0, nRow, rs.GetValue(_T("orderid")), FMT_TEXT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("pname")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("age")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("docno")), FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("workplace")), FMT_TEXT);
		xls.SetCellText(5, nRow, rs.GetValue(_T("doctor")), FMT_TEXT);
		xls.SetCellText(7, nRow, rs.GetValue(_T("ngaymua")), FMT_TEXT);
		rs.GetValue(_T("amount"), nTmp);
		nAmount += nTmp;
		xls.SetCellText(6, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		nOrder++;
		rs.MoveNext();
	}

	if (nOrder > 0)
	{		
		xls.SetCellText(5, nRow, _T("S\x1ED1 \x111\x1A1n:"), 4098, true);
		xls.SetCellText(6, nRow, int2str(nOrder), FMT_NUMBER1, true);
		nRow++;
		TranslateString(_T("Total Amount"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);	
		xls.SetCellText(6, nRow, double2str(nAmount), FMT_NUMBER1 | FMT_RIGHT, true);	
		nTotalAmount += nAmount;
		nRow++;	
	}

	if (nTotalOrder > 0)
	{
		xls.SetCellText(5, nRow, _T("S\x1ED1 \x111\x1A1n:"), 4098, true);
		xls.SetCellText(6, nRow, int2str(nTotalOrder), FMT_NUMBER1, true);
		nRow++;
		xls.SetCellText(5, nRow, _T("T\x1ED5ng s\x1ED1 ti\x1EC1n:"), 4098, true);
		tmpStr.Format(_T("%f"), nTotalAmount);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang ke don thuoc_TH.xls"));
}

void IVFPrescriptionListReportDialog::OnExport()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CString tmpStr, tmpStr2, szObjectID, 
		szObjectName, szTemp, szOldOrderID, szNewOrderID, szDept, szOldDept, szNewDept;;
	CString szSQL, szDeptType, szDeptType2, szWhereRoomID, szWhereRoomID2, szWhere, szWhere2, szWhere3,
		szListID, szRoomID, szRoomName, szHavingClause, szProductType, szObjects, szStocks;
	CExcel xls;
	double nTemp = 0;
	xls.CreateSheet(0);
	int nSheet=0;
	xls.SetWorksheet(nSheet);
	CellFormat df(&xls), cf(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	cf.SetFontName(_T("Segoe UI"));

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 13);
	xls.SetColumnWidth(5, 13);
	xls.SetColumnWidth(6, 15);
	int nCol = 0;
	int nRow = 0;
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0, 2, 6);
	TranslateString(_T("Prescription List Report"), szTemp);
	StringUpper(szTemp, tmpStr);
	xls.SetCellText(0, 2, tmpStr, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(0, 3, 6);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow+3, tmpStr, &df);
	nRow = 4;

	xls.SetCellText(0, nRow, _T("STT"), &hf);
	xls.SetCellText(1, nRow, _T("M\xE3 thu\x1ED1\x63"), &hf);
	xls.SetCellText(2, nRow, _T("T\xEAn thu\x1ED1\x63/ H\xE0m l\x1B0\x1EE3ng"), &hf);
	xls.SetCellText(3, nRow, _T("\x110\x1A1n v\x1ECB"), &hf);
	xls.SetCellText(4, nRow, _T("\x110\x1A1n gi\xE1"), &hf);		
	xls.SetCellText(5, nRow, _T("SL"), &hf);
	xls.SetCellText(6, nRow, _T("Th\xE0nh ti\x1EC1n"), &hf);
	nRow++;
	BeginWaitCursor();

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere3.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);	

	CString szRoomC11, szRoomC12, szRoomC13;
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			szDeptType2.Format(_T(" and su_deptid IN('TTHTSS') "));
			if (!szRoomC11.IsEmpty())
			{
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
				szWhereRoomID2.AppendFormat(_T(" and ((su_roomid in (%s) and su_deptid= 'C1.1') "), szRoomC11);
			}
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
				{
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2')"), szRoomC12);
					szWhereRoomID2.AppendFormat(_T(" or (su_roomid in (%s) and su_deptid= 'C1.2')"), szRoomC12);
				}
				else
				{
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
					szWhereRoomID2.AppendFormat(_T(" and ((su_roomid in (%s) and su_deptid= 'C1.2') "), szRoomC12);
				}
				if (!szRoomC13.IsEmpty())
					if (!szWhereRoomID.IsEmpty())
					{
						szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
						szWhereRoomID2.AppendFormat(_T(" or (su_roomid in (%s) and su_deptid= 'C1.3')"), szRoomC13);
					}
					else
					{
						szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3') "), szRoomC13);
						szWhereRoomID2.AppendFormat(_T(" and ((su_roomid in (%s) and su_deptid= 'C1.3') "), szRoomC13);
					}
					if (!szWhereRoomID.IsEmpty())
					{
						szWhereRoomID.AppendFormat(_T(")"));
						szWhereRoomID2.AppendFormat(_T(")"));
					}
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			szDeptType2.Format(_T(" and su_deptid IN('TTDTHM') "));
			if(!szListID.IsEmpty())
			{
				szWhereRoomID.Format(_T(" and hpo_deptid in(%s) ") , szListID);
				szWhereRoomID2.Format(_T(" and su_deptid in(%s) ") , szListID);
			}
		}
		if (!szDeptType.IsEmpty())
		{
			szWhere.AppendFormat(_T("%s"), szDeptType);
			szWhere2.AppendFormat(_T("%s"), szDeptType2);
		}

		if(!m_szDoctorKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and hpo_doctor='%s' "), m_szDoctorKey);
			szWhere2.AppendFormat(_T(" and so_user_id='%s' "), m_szDoctorKey);
		}

		for (int i = 0; i < m_wndStock.GetItemCount(); i++)
		{
			if (m_wndStock.GetCheck(i))
			{
				m_wndStock.SetCurSel(i);
				if (!szStocks.IsEmpty())
					szStocks += _T(", ");
				szStocks += m_wndStock.GetCurrent(0);
			}
		}
		if (!szStocks.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);
			szWhere2.AppendFormat(_T(" AND so_storage_id IN(%s)"), szStocks);
		}
		//szPrice = _T("product_taxprice");
		//if (m_bServPrice)
		//szPrice = _T("hpol_unitprice");
		if (m_nMinTotalAmt > 0)
			szHavingClause.Format(_T(" HAVING SUM(amount) > %ld"), m_nMinTotalAmt);
		if (!m_szApprovedByKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND hpo_approveby = '%s'"), m_szApprovedByKey);
			szWhere2.AppendFormat(_T(" AND so_approvedby = '%s'"), m_szApprovedByKey);
		}
		if (m_bOriental)
			szProductType = _T(" product_producttype = 'A1301'");
		if (m_bOccident)
		{
			if (!szProductType.IsEmpty())
				szProductType += _T(" OR");
			szProductType += _T(" product_producttype <> 'A1301'");
		}
		if (!szProductType.IsEmpty())
			szWhere3.AppendFormat(_T(" AND (%s)"), szProductType);	

		if(m_bSaleOrder)
			szWhere.AppendFormat(_T(" AND 0 = 1"));
	//Page Header
	//Report Detail
	szSQL.Format(_T(" SELECT") \
		_T("   (SELECT sd_name FROM sys_dept WHERE sd_id = deptid") \
		_T("   ) AS deptid,") \
		_T("   orderid,") \
		_T("   product_code AS id,") \
		_T("   docno,") \
		_T("   Get_patientname(docno)              AS pname,") \
		_T("   Hms_getagebydoc(docno)              AS age,") \
		_T("   Get_username(hpo_doctor)            AS doctor,") \
		_T("   product_name                        AS pdname,") \
		_T("   Get_uomname(product_purchase_uomid) AS unit,") \
		_T("   price,") \
		_T("   SUM(qty) qty,") \
		_T("   SUM(amount) amount") \
		_T(" FROM") \
		_T("   (SELECT hpo_deptid                   AS deptid,") \
		_T("     CAST(hpo_orderid AS NVARCHAR2(10)) AS orderid,") \
		_T("     hpol_qtyissue * hpol_unitprice     AS amount,") \
		_T("     hpo_docno                          AS docno,") \
		_T("     hpo_doctor,") \
		_T("     hpol_unitprice       AS price,") \
		_T("     hpol_qtyissue        AS qty,") \
		_T("     hpol_product_item_id AS productitem_id") \
		_T("   FROM hms_pharmaorder") \
		_T("   LEFT JOIN hms_pharmaorderline") \
		_T("   ON ( hpo_orderid      = hpol_orderid )") \
		_T("   LEFT JOIN hms_fee_invoice ON (hpo_docno=hfe_docno AND HPO_INVOICENO=HFE_INVOICENO) ") \
		_T("   WHERE hpo_orderstatus = 'A' AND HPO_DEPTID        IN ('TTHTSS', 'TTDTHM')") \
		_T("   AND HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND hpo_ordertype  IN ('P', 'D', 'M', 'E')") \
		_T("   %s %s") \
		_T("   UNION ALL") \
		_T("   SELECT hpo_deptid                   AS deptid,") \
		_T("     CAST(hpo_orderid AS NVARCHAR2(10)) AS orderid,") \
		_T("     hpol_qtyissue * hpol_unitprice     AS amount,") \
		_T("     hpo_docno                          AS docno,") \
		_T("     hpo_doctor,") \
		_T("     hpol_unitprice       AS price,") \
		_T("     hpol_qtyissue        AS qty,") \
		_T("     hpol_product_item_id AS productitem_id") \
		_T("   FROM hms_ipharmaorder") \
		_T("   LEFT JOIN hms_ipharmaorderline") \
		_T("   ON ( hpo_orderid      = hpol_orderid )") \
		_T("   LEFT JOIN hms_fee_invoice ON (hpo_docno=hfe_docno AND HPO_INVOICENO=HFE_INVOICENO) ") \
		_T("   WHERE hpo_orderstatus = 'A' AND HPO_DEPTID        IN ('TTHTSS', 'TTDTHM')") \
		_T("   AND HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND hpo_ordertype  IN ('P', 'D', 'M', 'E')") \
		_T("   %s %s") \
		_T("   UNION ALL") \
		_T("   SELECT su_deptid                  AS deptid,") \
		_T("     so_orderno                      AS orderid,") \
		_T("     sol_qtydelivery * sol_unitprice AS amount,") \
		_T("     so_docno                        AS docno,") \
		_T("     so_user_id                      AS doctor,") \
		_T("     sol_unitprice                   AS price,") \
		_T("     sol_qtydelivery                 AS qty,") \
		_T("     sol_product_item_id             AS productitem_id") \
		_T("   FROM sale_order") \
		_T("   LEFT JOIN sale_orderline") \
		_T("   ON(so_sale_order_id = sol_sale_order_id)") \
		_T("   LEFT JOIN hms_fee_invoice") \
		_T("   ON (hfe_docno     = so_docno") \
		_T("   AND hfe_invoiceno = so_invoiceno)") \
		_T("   LEFT JOIN sys_user") \
		_T("   ON( su_userid                                        = so_user_id)") \
		_T("   WHERE so_org_id                                     IN('GL','PM','TM')") \
		_T("   AND DECODE('R', so_partner_type_id, 'P', hfe_status) = 'P' AND su_deptid                                       IN('TTHTSS','TTDTHM')") \
		_T("   AND HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND NVL(so_partner_type_id, 'W') IN('W', 'I')") \
		_T("   AND so_status                   IN('A')") \
		_T("   %s %s") \
		_T("   )") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON ( product_item_id = productitem_id )") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON ( docno = hd_docno )") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON ( hd_patientno = hp_patientno )") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON ( ho_id = hd_object )") \
		_T(" WHERE 1 = 1 %s") \
		_T(" GROUP BY deptid,") \
		_T("   orderid,") \
		_T("   product_code,") \
		_T("   docno,") \
		_T("   hpo_doctor,") \
		_T("   product_name,") \
		_T("   product_purchase_uomid,") \
		_T("   price") \
		_T(" ORDER BY deptid,") \
		_T("   orderid,") \
		_T("   docno"), m_szFromDate, m_szToDate, szWhere, szWhereRoomID,m_szFromDate, m_szToDate, szWhere, szWhereRoomID, m_szFromDate, m_szToDate, szWhere2, szWhereRoomID2, szWhere3, szHavingClause);
	_fmsg(_T("%s"), szSQL);
	//QueryOpener(szSQL);

	CRecord rs(&pMF->m_db);
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	int nItem = 1;
	long nItemCount = 0;
	long nOrderID = 0, nTotalOrder=0;
	long double nTotalAmount=0, nAmount = 0, nDeptAmount = 0;
	long double nLine =0;

	while(!rs.IsEOF())
	{

		rs.GetValue(_T("deptid"), szNewDept);
		if (szNewDept != szOldDept)
		{
			if (nDeptAmount > 0)
			{		
				TranslateString(_T("Tổng khoa"), tmpStr);
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);	
				xls.SetCellText(6, nRow, double2str(nDeptAmount), FMT_NUMBER1 | FMT_RIGHT, true);	
				nDeptAmount = 0;
				nRow++;
				nLine++;
			}	
			xls.SetCellMergedColumns(0, nRow, 7);
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nRow++;
			nLine++;
		}
		
		rs.GetValue(_T("orderid"), szNewOrderID);
		if (szNewOrderID != szOldOrderID)
		{
			if (nAmount > 0)
			{
				TranslateString(_T("Total Amount"), tmpStr);
				//xls.SetCellMergedColumns(1,nRow,3);
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
				tmpStr.Format(_T("%.2f"), nAmount);
				xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);	
				nTotalAmount += nAmount;
				nAmount = 0;
				nRow++;	
				nLine++;
			}
			//xls.SetCellMergedColumns(1,nRow,4);		
			rs.GetValue(_T("orderid"), nOrderID);
			tmpStr.Format(_T("%ld"), nOrderID);
			xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER,true,10,0);
			TranslateString(_T("Age"), tmpStr2);
			tmpStr.Format(_T("[%s]  -  %s   -   %s:%s  -  %s"), rs.GetValue(_T("docno")), rs.GetValue(_T("pname")),
			tmpStr2,rs.GetValue(_T("Age")), rs.GetValue(_T("doctor")));
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,10,0);
			rs.GetValue(_T("doctor"), tmpStr);
			xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true,10,0);

			szOldOrderID = szNewOrderID;
			nTotalOrder++;
			nItemCount += nItem - 1;
			nItem = 1;
			nRow++;
			nLine++;
		}
		tmpStr.Format(_T("%ld"), nItem++);			
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("id"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("pdname"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);			
		rs.GetValue(_T("price"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("qty"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("amount"), nTemp);
		nAmount += nTemp;
		nDeptAmount += nTemp;
		xls.SetCellText(6, nRow, double2str(nTemp), FMT_NUMBER1);	
		nRow++;
		nLine++;
		_tprintf(_T("%f \n"),nLine);
		if(nLine >= 30000 )
		{
			nSheet++;
			tmpStr.Format(_T("Sheet %d"),nSheet);

			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nRow=5;
			xls.SetCellText(0, nRow, _T("STT"), &hf);
			xls.SetCellText(1, nRow, _T("M\xE3 thu\x1ED1\x63"), &hf);
			xls.SetCellText(2, nRow, _T("T\xEAn thu\x1ED1\x63/ H\xE0m l\x1B0\x1EE3ng"), &hf);
			xls.SetCellText(3, nRow, _T("\x110\x1A1n v\x1ECB"), &hf);
			xls.SetCellText(4, nRow, _T("\x110\x1A1n gi\xE1"), &hf);		
			xls.SetCellText(5, nRow, _T("SL"), &hf);
			xls.SetCellText(6, nRow, _T("Th\xE0nh ti\x1EC1n"), &hf);
			nRow++;
			nLine=0;
		}
		rs.MoveNext();
	}
	nItemCount += nItem - 1;
	if (nAmount > 0)
	{
		TranslateString(_T("Total Amount"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);	
		nTotalAmount += nAmount;
		nRow++;		
	}

	if (nDeptAmount > 0)
	{		
		TranslateString(_T("Tổng khoa"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);	
		xls.SetCellText(6, nRow, double2str(nDeptAmount), FMT_NUMBER1 | FMT_RIGHT, true);	
		nRow++;	
	}	

	//Page Footer
	//Report Footer
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellMergedColumns(1,nRow,3);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("%ld"), nTotalOrder);
	xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
	nRow++;
	//Tong so thuoc trong don
	TranslateString(_T("Total Item"), tmpStr);
	xls.SetCellMergedColumns(1,nRow,3);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("%ld"), nItemCount);
	xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
	nRow++;
	//Tong tien
	TranslateString(_T("Total Amount"), tmpStr);
	xls.SetCellMergedColumns(1,nRow,3);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);

	xls.Save(_T("Exports\\Bang Ke Don Thuoc.xls"));
	EndWaitCursor();

}
void IVFPrescriptionListReportDialog::OnExportDetailByDrug(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CString tmpStr, szDate, szSysDate, szSQL, szObjectID, szObjectName, szWhere, szWhere1, 
		szWhere2, tmpStr2,szListID, szRoomID, szRoomName;
	CExcel xls;
	double nTemp = 0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	CellFormat df(&xls), cf(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	cf.SetFontName(_T("Segoe UI"));

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 13);
	xls.SetColumnWidth(4, 13);
	xls.SetColumnWidth(5, 15);
	int nCol = 0;
	int nRow = 0;
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0, 2, 6);
	xls.SetCellText(0, 2, _T("\x42\x1EA2NG K\xCA \x110\x1A0N THU\x1ED0\x43"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(0, 3, 6);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, &df);
	nRow = 4;
	CString szStocksName;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocksName.IsEmpty())
				szStocksName += _T(", ");
			szStocksName += m_wndStock.GetCurrent(1);
		}
	}

	if (!szStocksName.IsEmpty())
	{
		xls.SetCellMergedColumns(0, nRow, 6);
		xls.SetCellText(nCol, nRow++, szStocksName, &cf);
	}
	if (!m_szDoctorKey.IsEmpty())
	{
		xls.SetCellMergedColumns(0, nRow, 6);
		xls.SetCellText(nCol, nRow++, m_wndDoctor.GetCurrent(1), &cf);
	}
	tmpStr2 = _T("' '");
	//for(int i=0; i < m_wndObject.GetCount(); i++)
	//{
	//	//if(m_wndObject.GetCheck(i))
	//	{
	//		m_wndObject.SetCurSel(i);
	//		if (!szObjectID.IsEmpty())
	//			szObjectID += _T(",");
	//		szObjectID.AppendFormat(_T("'%s'"), m_wndObject.GetCurrent(0));

	//		if (!szObjectName.IsEmpty())
	//			szObjectName += _T(",");
	//		szObjectName.AppendFormat(_T("%s"), m_wndObject.GetCurrent(1));
	//	}
	//}
	szWhere.Format(_T(" AND hpo_orderstatus = 'A' AND HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpo_ordertype IN ('P', 'D', 'M', 'E')"), m_szFromDate, m_szToDate);
	CString szObjects;
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);

	CString szRoomC11, szRoomC12, szRoomC13, szDept, szProductType, szNewOrderID, szOldOrderID;
	szProductType.Empty();
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	if (!szRoomName.IsEmpty())
	{
		tmpStr.Format(_T("Khoa Ph\xF2ng: %s"), szRoomName);
		xls.SetCellMergedColumns(0, nRow, 6);
		xls.SetCellText(0, nRow++, tmpStr, &cf);
	}
	xls.SetCellText(0, nRow, _T("STT"), &hf);
	xls.SetCellText(1, nRow, _T("T\xEAn thu\x1ED1\x63/ H\xE0m l\x1B0\x1EE3ng"), &hf);
	xls.SetCellText(2, nRow, _T("\x110\x1A1n v\x1ECB"), &hf);
	xls.SetCellText(3, nRow, _T("\x110\x1A1n gi\xE1"), &hf);		
	xls.SetCellText(4, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng"), &hf);
	xls.SetCellText(5, nRow, _T("Th\xE0nh ti\x1EC1n"), &hf);
	nRow++;
	BeginWaitCursor();
	CString szDeptType, szWhereRoomID, szTable, szLineTable;
	szDeptType.Empty();
	szWhereRoomID.Empty();
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' and hpo_deptid='TTHTSS'"));
			if (!szRoomC11.IsEmpty())				
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
			if (!szRoomC13.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
			if (!szWhereRoomID.IsEmpty())
				szWhereRoomID.AppendFormat(_T(")"));
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' and hpo_deptid='TTDTHM'"));
			if(!szListID.IsEmpty())
				szWhereRoomID.Format(_T(" and	hpo_deptid in(%s) ") , szListID);
		}
		if (!szDeptType.IsEmpty())
			szWhere.AppendFormat(_T("%s"), szDeptType);

		if(!m_szDoctorKey.IsEmpty())
			szWhere.AppendFormat(_T(" and hpo_doctor='%s' "), m_szDoctorKey);

		CString szStocks;
		for (int i = 0; i < m_wndStock.GetItemCount(); i++)
		{
			if (m_wndStock.GetCheck(i))
			{
				m_wndStock.SetCurSel(i);
				if (!szStocks.IsEmpty())
					szStocks += _T(", ");
				szStocks += m_wndStock.GetCurrent(0);
			}
		}
		if (!szStocks.IsEmpty())
			szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);

		if (m_nMinTotalAmt > 0)
			szWhere2.Format(_T(" AND taxamount >= %ld"), m_nMinTotalAmt);
		if (!m_szApprovedByKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND hpo_approveby = '%s'"), m_szApprovedByKey);
		//szPrice = _T("product_taxprice");
		//if (m_bServPrice)
		//szPrice = _T("hpol_unitprice");
		if (m_bOriental)
			szProductType = _T(" product_producttype = 'A1301'");
		if (m_bOccident)
		{
			if (!szProductType.IsEmpty())
				szProductType += _T(" OR");
			szProductType += _T(" product_producttype <> 'A1301'");
		}
		if (!szProductType.IsEmpty())
			szWhere.AppendFormat(_T(" AND (%s)"), szProductType);
		if (!szObjectName.IsEmpty())
		{
			tmpStr.Format(_T("\x110\x1ED1i t\x1B0\x1EE3ng: %s"), szObjectName);
			xls.SetCellMergedColumns(0, nRow, 6);
			xls.SetCellText(0, nRow++, tmpStr, &cf);
		}

		szSQL.Format(_T(" SELECT  ") \
			_T("        Get_username(hpo_doctor) doctor, ") \
			_T("        NAME, ") \
			_T("        Get_uomname(product_purchase_uomid) unit, ") \
			_T("        price, ") \
			_T("        SUM(qty) qty, ") \
			_T("        SUM(amount) amount ") \
			_T(" FROM   (SELECT    hpol_orderid orderid, ") \
			_T("                   hpol_orderlineid, ") \
			_T("                   hpol_qtyissue * hpol_unitprice amount, ") \
			_T("                   SUM(hpol_qtyissue * hpol_unitprice) ") \
			_T("                     OVER ( ") \
			_T("                       PARTITION BY (hpol_orderid)) taxamount, ") \
			_T("                   hpo_docno docno, ") \
			_T("                   Hms_getage(( hd_admitdate ), hp_birthdate) age, ") \
			_T("                   hpo_doctor, ") \
			_T("                   product_id, ") \
			_T("                   product_name NAME, ") \
			_T("                   product_purchase_uomid, ") \
			_T("                   hpol_unitprice price, ") \
			_T("                   hpol_qtyissue qty ") \
			_T("         FROM      hms_pharmaorder ") \
			_T("         LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
			_T("         LEFT JOIN hms_fee_invoice ON (hpo_docno=hfe_docno AND HPO_INVOICENO=HFE_INVOICENO) ") \
			_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
			_T("         LEFT JOIN hms_doc ON ( hpo_docno = hd_docno ) ") \
			_T("         LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
			_T("         LEFT JOIN hms_object ON ( ho_id = hpo_object_id ) ") \
			_T("		 WHERE 1=1 AND HPO_DEPTID        IN ('TTHTSS', 'TTDTHM') %s %s ") \

			_T("		 UNION ALL ") \

			_T(" SELECT    hpol_orderid orderid, ") \
			_T("                   hpol_orderlineid, ") \
			_T("                   hpol_qtyissue * hpol_unitprice amount, ") \
			_T("                   SUM(hpol_qtyissue * hpol_unitprice) ") \
			_T("                     OVER ( ") \
			_T("                       PARTITION BY (hpol_orderid)) taxamount, ") \
			_T("                   hpo_docno docno, ") \
			_T("                   Hms_getage(( hd_admitdate ), hp_birthdate) age, ") \
			_T("                   hpo_doctor, ") \
			_T("                   product_id, ") \
			_T("                   product_name NAME, ") \
			_T("                   product_purchase_uomid, ") \
			_T("                   hpol_unitprice price, ") \
			_T("                   hpol_qtyissue qty ") \
			_T("         FROM      hms_ipharmaorder ") \
			_T("         LEFT JOIN hms_ipharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
			_T("         LEFT JOIN hms_fee_invoice ON (hpo_docno=hfe_docno AND HPO_INVOICENO=HFE_INVOICENO) ") \
			_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
			_T("         LEFT JOIN hms_doc ON ( hpo_docno = hd_docno ) ") \
			_T("         LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
			_T("         LEFT JOIN hms_object ON ( ho_id = hpo_object_id ) ") \
			_T("		 WHERE 1=1 AND HPO_DEPTID        IN ('TTHTSS', 'TTDTHM') %s %s) ") \
			_T(" WHERE 1=1 %s") \
			_T(" GROUP  BY hpo_doctor,NAME,price,product_purchase_uomid") \
			_T(" ORDER BY hpo_doctor, NAME"), szWhere, szWhereRoomID, szWhere, szWhereRoomID, szWhere2);

		CRecord rs(&pMF->m_db);
		int nCount = rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
		if (nCount <= 0)
		{
			ShowMessage(150, MB_ICONSTOP);
			_fmsg(_T("%s"), szSQL);
			return;
		}
		long nItem = 1, nTotalOrder=0, nItemCount = 0;

		double nTotalAmount=0,cost = 0, nAmount = 0;
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("doctor"), szNewOrderID);
			if (szNewOrderID != szOldOrderID)
			{
				if (nAmount > 0)
				{			
						TranslateString(_T("Total Amount"), tmpStr);
						xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);	
						xls.SetCellText(5, nRow, double2str(nAmount), FMT_NUMBER1 | FMT_RIGHT, true);	
					nTotalAmount += nAmount;
					nAmount = 0;
					nRow++;	
				}	
				xls.SetCellMergedColumns(0, nRow, 6);
				xls.SetCellText(0, nRow, szNewOrderID, FMT_TEXT | FMT_RIGHT, true);
				nItemCount += nItem - 1;
				szOldOrderID = szNewOrderID;
				nTotalOrder++;
				nItem = 1;
				nRow++;
			}
			tmpStr.Format(_T("%ld"), nItem++);			
			xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
			rs.GetValue(_T("name"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
			rs.GetValue(_T("unit"), tmpStr);
			xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);			
			rs.GetValue(_T("price"), nTemp);
			xls.SetCellText(3, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
			rs.GetValue(_T("qty"), nTemp);
			xls.SetCellText(4, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
			rs.GetValue(_T("amount"), cost);
			nAmount += cost;
			xls.SetCellText(5, nRow, double2str(cost), FMT_NUMBER1 | FMT_RIGHT);
			nRow++;
			rs.MoveNext();
		}
		if (nAmount > 0)
		{			
			TranslateString(_T("Total Amount"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
			nTotalAmount += nAmount;
			xls.SetCellText(5, nRow, double2str(nAmount), FMT_NUMBER1 | FMT_RIGHT, true);	
			nRow++;	
		}
		nItemCount += nItem - 1;
		//Page Footer
		//Report Footer
		TranslateString(_T("Total"), tmpStr);
		xls.SetCellMergedColumns(1,nRow,3);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(5, nRow, long2str(nTotalOrder), FMT_NUMBER1 | FMT_RIGHT, true);
		nRow++;
		//Tong so thuoc trong don
		TranslateString(_T("Total Item"), tmpStr);
		xls.SetCellMergedColumns(1,nRow,3);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(5, nRow, long2str(nItemCount), FMT_NUMBER1 | FMT_RIGHT, true);
		nRow++;
		//Tong tien
		TranslateString(_T("Total Amount"), tmpStr);
		xls.SetCellMergedColumns(1,nRow,3);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(5, nRow, double2str(nTotalAmount), FMT_NUMBER1 | FMT_RIGHT, true);

		xls.Save(_T("Exports\\Bang Ke Don Thuoc.xls"));
		EndWaitCursor();
}
CString IVFPrescriptionListReportDialog::GetQueryString()
{
	CString szSQL, szDeptType, szDeptType2, szWhereRoomID, szWhereRoomID2, szWhere, szWhere2, szWhere3, szListID, szRoomID, szRoomName, szHavingClause, szProductType, szObjects, szStocks;
	szDeptType.Empty();
	szWhereRoomID.Empty();

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere3.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);	
	
	CString szRoomC11, szRoomC12, szRoomC13, szDept;
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			szDeptType2.Format(_T(" and su_deptid IN('TTHTSS') "));
			if (!szRoomC11.IsEmpty())
				{
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
					szWhereRoomID2.AppendFormat(_T(" and ((su_roomid in (%s) and su_deptid= 'C1.1') "), szRoomC11);
				}
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
				{
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2')"), szRoomC12);
					szWhereRoomID2.AppendFormat(_T(" or (su_roomid in (%s) and su_deptid= 'C1.2')"), szRoomC12);
				}
				else
				{
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
					szWhereRoomID2.AppendFormat(_T(" and ((su_roomid in (%s) and su_deptid= 'C1.2') "), szRoomC12);
				}
			if (!szRoomC13.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
				{
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
					szWhereRoomID2.AppendFormat(_T(" or (su_roomid in (%s) and su_deptid= 'C1.3')"), szRoomC13);
				}
				else
				{
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3') "), szRoomC13);
					szWhereRoomID2.AppendFormat(_T(" and ((su_roomid in (%s) and su_deptid= 'C1.3') "), szRoomC13);
				}
			if (!szWhereRoomID.IsEmpty())
				{
					szWhereRoomID.AppendFormat(_T(")"));
					szWhereRoomID2.AppendFormat(_T(")"));
				}
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			szDeptType2.Format(_T(" and su_deptid IN('TTDTHM') "));
			if(!szListID.IsEmpty())
				{
					szWhereRoomID.Format(_T(" and hpo_deptid in(%s) ") , szListID);
					szWhereRoomID2.Format(_T(" and su_deptid in(%s) ") , szListID);
				}
		}
	if (!szDeptType.IsEmpty())
		{
			szWhere.AppendFormat(_T("%s"), szDeptType);
			szWhere2.AppendFormat(_T("%s"), szDeptType2);
		}

	if(!m_szDoctorKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and hpo_doctor='%s' "), m_szDoctorKey);
			szWhere2.AppendFormat(_T(" and so_user_id='%s' "), m_szDoctorKey);
		}

	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocks.IsEmpty())
				szStocks += _T(", ");
			szStocks += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStocks.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);
			szWhere2.AppendFormat(_T(" AND so_storage_id IN(%s)"), szStocks);
		}
	//szPrice = _T("product_taxprice");
	//if (m_bServPrice)
	//szPrice = _T("hpol_unitprice");
	if (m_nMinTotalAmt > 0)
		szHavingClause.Format(_T(" HAVING SUM(amount) > %ld"), m_nMinTotalAmt);
	if (!m_szApprovedByKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND hpo_approveby = '%s'"), m_szApprovedByKey);
			szWhere2.AppendFormat(_T(" AND so_approvedby = '%s'"), m_szApprovedByKey);
		}
	if (m_bOriental)
		szProductType = _T(" product_producttype = 'A1301'");
	if (m_bOccident)
	{
		if (!szProductType.IsEmpty())
			szProductType += _T(" OR");
		szProductType += _T(" product_producttype <> 'A1301'");
	}
	if (!szProductType.IsEmpty())
		szWhere3.AppendFormat(_T(" AND (%s)"), szProductType);	

	if(m_bSaleOrder)
		szWhere.AppendFormat(_T(" AND 0 = 1"));


	szSQL.Format(_T(" SELECT (SELECT sd_name FROM sys_dept WHERE sd_id = deptid) AS deptid,") \
		_T("   orderid,") \
		_T("   docno,") \
		_T("   doctor,") \
		_T("   pname,") \
		_T("   age,") \
		_T("   SUM(amount) AS amount,") \
		_T("     to_char(ngaymua, 'HH24:MI:SS DD/MM/YYYY') as ngaymua,") \
		_T("     (SELECT hp_workplace FROM hms_patient WHERE hp_patientno = hd_patientno") \
		_T("     )                    AS workplace") \
		_T(" FROM") \
		_T("   (SELECT hpo_deptid                   AS deptid,") \
		_T("     CAST(hpo_orderid AS NVARCHAR2(10)) AS orderid,") \
		_T("     hpo_docno                          AS docno,") \
		_T("     get_username(hpo_doctor)           AS doctor,") \
		_T("     get_patientname(hpo_docno)         AS pname,") \
		_T("     hms_getagebydoc(hpo_docno)         AS age,") \
		_T("     hpol_qtyissue*hpol_unitprice       AS amount,") \
		_T("     hfe_date as ngaymua,") \
		_T("     hpol_product_item_id AS productitem_id") \
		_T("   FROM hms_pharmaorder") \
		_T("   LEFT JOIN hms_pharmaorderline") \
		_T("   ON (hpo_orderid = hpol_orderid)") \
		_T("   LEFT JOIN HMS_FEE_INVOICE  ON (hpo_docno=hfe_docno AND HPO_INVOICENO=HFE_INVOICENO)") \
		_T("   WHERE hpo_orderstatus IN('A','I') and HPO_DEPTID in ('TTHTSS', 'TTDTHM')") \
		_T("   AND HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND hpo_ordertype  IN('P','D','M','E') %s %s") \
		_T("   UNION ALL") \
		_T("   SELECT hpo_deptid                   AS deptid,") \
		_T("     CAST(hpo_orderid AS NVARCHAR2(10)) AS orderid,") \
		_T("     hpo_docno                          AS docno,") \
		_T("     get_username(hpo_doctor)           AS doctor,") \
		_T("     get_patientname(hpo_docno)         AS pname,") \
		_T("     hms_getagebydoc(hpo_docno)         AS age,") \
		_T("     hpol_qtyissue*hpol_unitprice       AS amount,") \
		_T("     hfe_date as ngaymua,") \
		_T("     hpol_product_item_id AS productitem_id") \
		_T("   FROM hms_ipharmaorder") \
		_T("   LEFT JOIN hms_ipharmaorderline") \
		_T("   ON (hpo_orderid = hpol_orderid)") \
		_T("   LEFT JOIN HMS_FEE_INVOICE  ON (hpo_docno=hfe_docno AND HPO_INVOICENO=HFE_INVOICENO)") \
		_T("   WHERE hpo_orderstatus IN('A','I') and HPO_DEPTID in ('TTHTSS', 'TTDTHM')") \
		_T("   AND HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND hpo_ordertype  IN('P','D','M','E') %s %s") \
		_T("   UNION ALL") \
		_T("   SELECT") \
		_T("     su_deptid                       AS deptid,") \
		_T("     so_orderno                      AS orderid,") \
		_T("     so_docno                        AS docno,") \
		_T("     get_username(so_user_id)        AS doctor,") \
		_T("     get_patientname(so_docno)       AS pname,") \
		_T("     hms_getagebydoc(so_docno)       AS age,") \
		_T("     sol_qtydelivery * sol_unitprice AS amount,") \
		_T("     hfe_date as ngaymua,") \
		_T("     sol_product_item_id AS productitem_id") \
		_T("   FROM sale_order") \
		_T("   LEFT JOIN sale_orderline") \
		_T("   ON(so_sale_order_id = sol_sale_order_id)") \
		_T("   LEFT JOIN hms_fee_invoice") \
		_T("   ON (hfe_docno                                        = so_docno)") \
		_T("   LEFT JOIN sys_user") \
		_T("   ON( su_userid = so_user_id)") \
		_T("   WHERE so_org_id                                     IN('GL','PM','TM')") \
		_T("   AND DECODE('R', so_partner_type_id, 'P', hfe_status) = 'P' and su_deptid IN('TTHTSS','TTDTHM')") \
		//_T("   AND DECODE('R', so_partner_type_id, so_approveddate, hfe_createddate) BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \//
		_T("   AND HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND NVL(so_partner_type_id, 'W') IN('W', 'I')") \
		_T("   AND so_status                   IN('A') %s %s") \
		_T("   ) tbl") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (product_item_id = productitem_id)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hd_docno = docno)") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON (hd_object = ho_id)") \
		_T(" WHERE 1 = 1 %s") \
		_T(" GROUP BY deptid,") \
		_T("   orderid,") \
		_T("   docno,") \
		_T("   doctor,") \
		_T("   pname,") \
		_T("   age,") \
		_T("   hd_patientno, ngaymua %s") \
		_T(" ORDER BY deptid,") \
		_T("   orderid"), m_szFromDate, m_szToDate, szWhere, szWhereRoomID,m_szFromDate, m_szToDate, szWhere, szWhereRoomID, m_szFromDate, m_szToDate, szWhere2, szWhereRoomID2, szWhere3, szHavingClause);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}

BEGIN_MESSAGE_MAP(IVFPrescriptionListReportDialog, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void IVFPrescriptionListReportDialog::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
