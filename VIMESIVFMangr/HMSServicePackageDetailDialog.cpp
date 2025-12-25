#include "HMSServicePackageDetailDialog.h"
#include "MainFrm.h"
#include "HMSServicePackageEditQuantityDialog.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageDetailDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnOrderIdChangeFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnOrderIdChange();
} */
/*static void _OnOrderIdSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnOrderIdSetfocus();} */ 
/*static void _OnOrderIdKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnOrderIdKillfocus();
} */
static int _OnOrderIdCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageDetailDialog *)pWnd)->OnOrderIdCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageDetailDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnBeginDateChangeFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnBeginDateChange();
} */
/*static void _OnBeginDateSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnBeginDateSetfocus();} */ 
/*static void _OnBeginDateKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnBeginDateKillfocus();
} */
static int _OnBeginDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageDetailDialog *)pWnd)->OnBeginDateCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageDetailDialog *)pWnd)->OnEndDateCheckValue();
} 
/*static void _OnOrderQtyChangeFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnOrderQtyChange();
} */
/*static void _OnOrderQtySetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnOrderQtySetfocus();} */ 
/*static void _OnOrderQtyKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnOrderQtyKillfocus();
} */
static int _OnOrderQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageDetailDialog *)pWnd)->OnOrderQtyCheckValue();
} 
/*static void _OnRealQtyChangeFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnRealQtyChange();
} */
/*static void _OnRealQtySetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnRealQtySetfocus();} */ 
/*static void _OnRealQtyKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnRealQtyKillfocus();
} */
static int _OnRealQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageDetailDialog *)pWnd)->OnRealQtyCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageDetailDialog *)pWnd)->OnStatusCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageDetailDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSServicePackageDetailDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSServicePackageDetailDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSServicePackageDetailDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CHMSServicePackageDetailDialog*)pWnd)->OnListEditItem();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CHMSServicePackageDetailDialog *pVw = (CHMSServicePackageDetailDialog *)pWnd;
	pVw->OnTerminateSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSServicePackageDetailDialog *pVw = (CHMSServicePackageDetailDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSServicePackageDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageDetailDialog*)pWnd)->OnAddHMSServicePackageDetailDialog();
} 
static int _OnEditHMSServicePackageDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageDetailDialog*)pWnd)->OnEditHMSServicePackageDetailDialog();
} 
static int _OnDeleteHMSServicePackageDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageDetailDialog*)pWnd)->OnDeleteHMSServicePackageDetailDialog();
} 
static int _OnSaveHMSServicePackageDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageDetailDialog*)pWnd)->OnSaveHMSServicePackageDetailDialog();
} 
static int _OnCancelHMSServicePackageDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageDetailDialog*)pWnd)->OnCancelHMSServicePackageDetailDialog();
} 
CHMSServicePackageDetailDialog::CHMSServicePackageDetailDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 505;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CHMSServicePackageDetailDialog::~CHMSServicePackageDetailDialog(){
}
void CHMSServicePackageDetailDialog::OnCreateComponents(){
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 5, 5, 125, 30);
	m_wndDocumentNo.Create(this,130, 5, 250, 30); 
	m_wndOrderIdLabel.Create(this, _T("Order ID"), 255, 5, 375, 30);
	m_wndOrderId.Create(this,380, 5, 500, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 35, 125, 60);
	m_wndPatientName.Create(this,130, 35, 500, 60); 
	m_wndBeginDateLabel.Create(this, _T("Begin Date"), 5, 65, 125, 90);
	m_wndBeginDate.Create(this,130, 65, 250, 90); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 255, 65, 375, 90);
	m_wndEndDate.Create(this,380, 65, 500, 90); 
	m_wndOrderQtyLabel.Create(this, _T("Ngày dự kiến"), 5, 95, 125, 120);
	m_wndOrderQty.Create(this,130, 95, 250, 120); 
	m_wndRealQtyLabel.Create(this, _T("Ngày sử dụng"), 255, 95, 375, 120);
	m_wndRealQty.Create(this,380, 95, 500, 120); 
	m_wndStatusLabel.Create(this, _T("Status"), 5, 125, 125, 150);
	m_wndStatus.Create(this,130, 125, 500, 150); 
	m_wndList.Create(this,5, 155, 500, 553); 
	m_wndTerminate.Create(this, _T("Kết thúc không sử dụng dịch vụ"), 200, 558, 414, 583);
	m_wndClose.Create(this, _T("&Close"), 419, 558, 499, 583);

}
void CHMSServicePackageDetailDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(35);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndOrderId.SetLimitText(35);
	m_wndOrderId.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndBeginDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndBeginDate.SetCheckValue(true);
	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	m_wndOrderQty.SetLimitText(16);
	m_wndOrderQty.SetCheckValue(true);
	m_wndRealQty.SetLimitText(16);
	m_wndRealQty.SetCheckValue(true);
	m_wndStatus.SetLimitText(35);
	m_wndStatus.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Ngày chốt"), CFMT_TEXT, 75);
	m_wndList.InsertColumn(1, _T("Số lượng"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(2, _T("Ngày thực hiện"), CFMT_TEXT, 110);
	m_wndList.InsertColumn(3, _T("Người thực hiện"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(4, _T("Lý do"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(5, _T("Người sửa"), CFMT_TEXT, 90);

}
void CHMSServicePackageDetailDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndOrderId.SetEvent(WE_CHANGE, _OnOrderIdChangeFnc);
	//m_wndOrderId.SetEvent(WE_SETFOCUS, _OnOrderIdSetfocusFnc);
	//m_wndOrderId.SetEvent(WE_KILLFOCUS, _OnOrderIdKillfocusFnc);
	m_wndOrderId.SetEvent(WE_CHECKVALUE, _OnOrderIdCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndBeginDate.SetEvent(WE_CHANGE, _OnBeginDateChangeFnc);
	//m_wndBeginDate.SetEvent(WE_SETFOCUS, _OnBeginDateSetfocusFnc);
	//m_wndBeginDate.SetEvent(WE_KILLFOCUS, _OnBeginDateKillfocusFnc);
	m_wndBeginDate.SetEvent(WE_CHECKVALUE, _OnBeginDateCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	//m_wndOrderQty.SetEvent(WE_CHANGE, _OnOrderQtyChangeFnc);
	//m_wndOrderQty.SetEvent(WE_SETFOCUS, _OnOrderQtySetfocusFnc);
	//m_wndOrderQty.SetEvent(WE_KILLFOCUS, _OnOrderQtyKillfocusFnc);
	m_wndOrderQty.SetEvent(WE_CHECKVALUE, _OnOrderQtyCheckValueFnc);
	//m_wndRealQty.SetEvent(WE_CHANGE, _OnRealQtyChangeFnc);
	//m_wndRealQty.SetEvent(WE_SETFOCUS, _OnRealQtySetfocusFnc);
	//m_wndRealQty.SetEvent(WE_KILLFOCUS, _OnRealQtyKillfocusFnc);
	m_wndRealQty.SetEvent(WE_CHECKVALUE, _OnRealQtyCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.AddEvent(1, _T("Sửa số lượng"), _OnListEditItemFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();
	SetMode(VM_VIEW);
	OnListLoadData();

}
void CHMSServicePackageDetailDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_Text(pDX, m_wndOrderId.GetDlgCtrlID(), m_szOrderId);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndBeginDate.GetDlgCtrlID(), m_szBeginDate);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_Text(pDX, m_wndOrderQty.GetDlgCtrlID(), m_nOrderQty);
	DDX_Text(pDX, m_wndRealQty.GetDlgCtrlID(), m_nRealQty);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusDesc);

}
void CHMSServicePackageDetailDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DocumentNo")] =  m_szDocumentNo;
	m_jData[_T("OrderId")] =  m_szOrderId;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("BeginDate")] =  m_szBeginDate;
	m_jData[_T("EndDate")] =  m_szEndDate;
	m_jData[_T("OrderQty")] =  m_nOrderQty;
	m_jData[_T("RealQty")] =  m_nRealQty;
	m_jData[_T("Status")] =  m_szStatus;
	}
	else
	{
			
	m_jData[_T("DocumentNo")].GetValue(m_szDocumentNo);
	m_jData[_T("OrderId")].GetValue(m_szOrderId);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("BeginDate")].GetValue(m_szBeginDate);
	m_jData[_T("EndDate")].GetValue(m_szEndDate);
	m_jData[_T("OrderQty")].GetValue(m_nOrderQty);
	m_jData[_T("RealQty")].GetValue(m_nRealQty);
	m_jData[_T("Status")].GetValue(m_szStatus);
	}

}
void CHMSServicePackageDetailDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT hfe_docno AS docno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T("   hfe_orderdate   AS begin_date,") \
_T("   hfe_enddate     AS end_date,") \
_T("   hfel_qtyorder   AS order_qty,") \
_T("   hfel_quantity   AS qty, hfe_status as status ") \
_T(" FROM HMS_FEE_EXTRA,") \
_T("   hms_fee_extraline,") \
_T("   hms_patient") \
_T(" WHERE hfe_fee_extra_id = hfel_fee_extra_id") \
_T(" AND hfe_patientno      = hp_patientno") \
_T(" AND hfe_docno=%ld and hfe_fee_extra_id=%ld and hfel_fee_extraline_id=%ld "), m_nDocumentNo, m_nExtraId, m_nExtraLineId);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("begin_date"), m_szBeginDate);
		rs.GetValue(_T("end_date"), m_szEndDate);
		rs.GetValue(_T("order_qty"), m_nOrderQty);
		rs.GetValue(_T("qty"), m_nRealQty);
		rs.GetValue(_T("status"), m_szStatus);

		m_szStatusDesc = _T("Đang mở");
		if(m_szStatus == _T("O"))
		{
			m_szStatusDesc = _T("Đang mở");
		}
		if(m_szStatus == _T("S"))
		{
			m_szStatusDesc = _T("Đã xác nhận");
		}
		if(m_szStatus == _T("T"))
		{
			m_szStatusDesc = _T("Đã kết thúc");
		}


	}
	m_szOrderId.Format(_T("%ld"), m_nExtraId);
	m_szDocumentNo.Format(_T("%ld"),  m_nDocumentNo);

}
void CHMSServicePackageDetailDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSServicePackageDetailDialog::SetDefaultValues(){

	m_szDocumentNo.Empty();
	m_szOrderId.Empty();
	m_szPatientName.Empty();
	m_szBeginDate.Empty();
	m_szEndDate.Empty();
	m_nOrderQty=0;
	m_nRealQty=0;
	m_szStatus.Empty();

}
int CHMSServicePackageDetailDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
/*void CHMSServicePackageDetailDialog::OnDocumentNoChange(){
	
} */
/*void CHMSServicePackageDetailDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSServicePackageDetailDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSServicePackageDetailDialog::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSServicePackageDetailDialog::OnOrderIdChange(){
	
} */
/*void CHMSServicePackageDetailDialog::OnOrderIdSetfocus(){
	
} */
/*void CHMSServicePackageDetailDialog::OnOrderIdKillfocus(){
	
} */
int CHMSServicePackageDetailDialog::OnOrderIdCheckValue(){
	return 0;
} 
/*void CHMSServicePackageDetailDialog::OnPatientNameChange(){
	
} */
/*void CHMSServicePackageDetailDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSServicePackageDetailDialog::OnPatientNameKillfocus(){
	
} */
int CHMSServicePackageDetailDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSServicePackageDetailDialog::OnBeginDateChange(){
	
} */
/*void CHMSServicePackageDetailDialog::OnBeginDateSetfocus(){
	
} */
/*void CHMSServicePackageDetailDialog::OnBeginDateKillfocus(){
	
} */
int CHMSServicePackageDetailDialog::OnBeginDateCheckValue(){
	return 0;
} 
/*void CHMSServicePackageDetailDialog::OnEndDateChange(){
	
} */
/*void CHMSServicePackageDetailDialog::OnEndDateSetfocus(){
	
} */
/*void CHMSServicePackageDetailDialog::OnEndDateKillfocus(){
	
} */
int CHMSServicePackageDetailDialog::OnEndDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("HMS_CHECKDATE('%s','%s') "), m_szBeginDate, m_szEndDate);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret == -1)
	{
		m_wndEndDate.SetToolTipMessage(_T("Ngày kết thúc phải lớn hơn ngày bắt đầu"));
		return -1;
	}
	return 0;
} 
/*void CHMSServicePackageDetailDialog::OnOrderQtyChange(){
	
} */
/*void CHMSServicePackageDetailDialog::OnOrderQtySetfocus(){
	
} */
/*void CHMSServicePackageDetailDialog::OnOrderQtyKillfocus(){
	
} */
int CHMSServicePackageDetailDialog::OnOrderQtyCheckValue(){
	return 0;
} 
/*void CHMSServicePackageDetailDialog::OnRealQtyChange(){
	
} */
/*void CHMSServicePackageDetailDialog::OnRealQtySetfocus(){
	
} */
/*void CHMSServicePackageDetailDialog::OnRealQtyKillfocus(){
	
} */
int CHMSServicePackageDetailDialog::OnRealQtyCheckValue(){
	return 0;
} 
/*void CHMSServicePackageDetailDialog::OnStatusChange(){
	
} */
/*void CHMSServicePackageDetailDialog::OnStatusSetfocus(){
	
} */
/*void CHMSServicePackageDetailDialog::OnStatusKillfocus(){
	
} */
int CHMSServicePackageDetailDialog::OnStatusCheckValue(){
	return 0;
} 

void CHMSServicePackageDetailDialog::OnListDblClick(){
	
} 
void CHMSServicePackageDetailDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 

int CHMSServicePackageDetailDialog::OnListEditItem(){

	if(m_szStatus == _T("T"))
	{
		ShowMessageBox(_T("Phiếu đã kết thúc. Không cho phép sửa số lượng"));
		return 0;
	}

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;

	CHMSServicePackageEditQuantityDialog dlg(this);
	dlg.m_nQuantity = str2float(m_wndList.GetItemText(nSel, 1));
	dlg.m_nRealQty = dlg.m_nQuantity;
	CString szDate = m_wndList.GetItemText(nSel, 0);
	if(dlg.DoModal() == IDOK)
	{
		CString szSQL;
		szSQL.Format(_T("HMS_SERVICE_PACKAGE_EDITQTY('%s', %ld, %ld, %ld, '%s', %f, '%s') "),
			pMF->GetCurrentUser(), m_nDocumentNo, m_nExtraId, m_nExtraLineId, szDate, dlg.m_nRealQty, dlg.m_szReason);

	/*	szSQL.Format(_T("UPDATE hms_fee_extraline_close ") \
			_T(" SET hfelc_qty=%f, hfelc_reason='%s', hfelc_updatedby='%s', hfelc_updateddate=systimestamp ") \
			_T(" WHERE hfelc_docno=%ld and hfelc_extra_id=%ld ") \
			_T(" and hfelc_extraline_id=%ld and hfelc_date=to_date('%s', 'DD/MM/YYYY') "),
			dlg.m_nRealQty, dlg.m_szReason, pMF->GetCurrentUser(),
			m_nDocumentNo, m_nExtraId, m_nExtraLineId, szDate);
*/
		int ret = str2int(pMF->ExecDML(szSQL));
		if(ret > 0) OnListLoadData();
	}
	 return 0;
}


int CHMSServicePackageDetailDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}


long CHMSServicePackageDetailDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT to_char(hfelc_date, 'DD/MM/YYYY') as close_date, ") \
		_T(" hfelc_qty as quantity, to_char(hfelc_createddate,'DD/MM/YYYY HH24:MI') as createddate, hfelc_createdby as createdby, hfelc_reason as reason, hfelc_updatedby as updatedby ") \
		_T("FROM hms_fee_extraline_close WHERE hfelc_docno=%ld and hfelc_extra_id=%ld and hfelc_extraline_id=%ld"),
		m_nDocumentNo, m_nExtraId, m_nExtraLineId);
//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("close_date")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("createddate")), 
			rs.GetValue(_T("CreatedBy")),
			rs.GetValue(_T("reason")),
			rs.GetValue(_T("updatedBy")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSServicePackageDetailDialog::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus == _T("T"))
	{
		ShowMessageBox(_T("Đề mục đã được kết thúc"));
		return;
	}
	if(m_szStatus != _T("I"))
	{
		CString szMsg;
		szMsg.Format(_T("Không cho phép kết thúc với trạng thái [%s] "), m_szStatus);
		ShowMessageBox(szMsg);
		return;
	}
	int retMsg = ShowMessageBox(_T("Bạn có chắc chắn muốn kết thúc gói dịch vụ của bệnh nhân không? Gói dịch vụ sẽ được khóa lại không cho phép sửa đổi)"), MB_YESNO);
	if(retMsg == IDNO)
		return;
	CString szSQL;
	szSQL.Format(_T("HMS_SERVICE_PACKAGE_TERM_V2('%s', %ld, %ld, %ld) "), 
		pMF->GetCurrentUser(), m_nDocumentNo, m_nExtraId, m_nExtraLineId);

	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		CString szMsg;
		szMsg.Format(_T("[%d] Lỗi không kết thúc được"), ret);
		ShowMessageBox(szMsg);
	}
	else
	{
		CGuiDialog::OnOK();
	}
} 
void CHMSServicePackageDetailDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSServicePackageDetailDialog::OnAddHMSServicePackageDetailDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSServicePackageDetailDialog::OnEditHMSServicePackageDetailDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSServicePackageDetailDialog::OnDeleteHMSServicePackageDetailDialog(){
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
 		OnCancelHMSServicePackageDetailDialog();
 	}
	return 0;
}
int CHMSServicePackageDetailDialog::OnSaveHMSServicePackageDetailDialog(){
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
 		//OnHMSServicePackageDetailDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSServicePackageDetailDialog::OnCancelHMSServicePackageDetailDialog(){
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
int CHMSServicePackageDetailDialog::OnHMSServicePackageDetailDialogListLoadData(){
	return 0;
}
