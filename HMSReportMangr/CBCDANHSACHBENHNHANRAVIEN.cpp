#include "CBCDANHSACHBENHNHANRAVIEN.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CCBCDANHSACHBENHNHANRAVIEN *pVw = (CCBCDANHSACHBENHNHANRAVIEN *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnOutPatientSelect();
}
static void _OnApprovalFeeSelectFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnApprovalFeeSelect();
}
static void _OnUnapprovedFeeSelectFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnUnapprovedFeeSelect();
}
static void _OnPaymentSelectFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnPaymentSelect();
}
static void _OnExamSelectFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnExamSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCBCDANHSACHBENHNHANRAVIEN *pVw = (CCBCDANHSACHBENHNHANRAVIEN *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnListDeleteItem();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCBCDANHSACHBENHNHANRAVIEN* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCBCDANHSACHBENHNHANRAVIEN* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCBCDANHSACHBENHNHANRAVIEN* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnRankAddNew();
}*/
static int _OnAddCBCDANHSACHBENHNHANRAVIENFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnAddCBCDANHSACHBENHNHANRAVIEN();
} 
static int _OnEditCBCDANHSACHBENHNHANRAVIENFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnEditCBCDANHSACHBENHNHANRAVIEN();
} 
static int _OnDeleteCBCDANHSACHBENHNHANRAVIENFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnDeleteCBCDANHSACHBENHNHANRAVIEN();
} 
static int _OnSaveCBCDANHSACHBENHNHANRAVIENFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnSaveCBCDANHSACHBENHNHANRAVIEN();
} 
static int _OnCancelCBCDANHSACHBENHNHANRAVIENFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANRAVIEN*)pWnd)->OnCancelCBCDANHSACHBENHNHANRAVIEN();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CCBCDANHSACHBENHNHANRAVIEN *pVw = (CCBCDANHSACHBENHNHANRAVIEN *)pWnd;
	pVw->OnExportSelect();
}
static long _OnZoneLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANRAVIEN *)pWnd)->OnZoneLoadData();
}

CCBCDANHSACHBENHNHANRAVIEN::CCBCDANHSACHBENHNHANRAVIEN(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCBCDANHSACHBENHNHANRAVIEN::~CCBCDANHSACHBENHNHANRAVIEN(){
}
void CCBCDANHSACHBENHNHANRAVIEN::OnCreateComponents()
{
	/*m_wndFromDateLabel.Create(this, _T("From Date"), 9, 29, 81, 54);
	m_wndFromDate.Create(this,85, 29, 195, 54); 
	m_wndToDateLabel.Create(this, _T("To Date"), 197, 29, 277, 54);
	m_wndToDate.Create(this,282, 29, 392, 54); 
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1012, 143);
	m_wndDepartmentLab.Create(this, _T("Department"), 395, 29, 475, 54);
	m_wndDepartment.Create(this,480, 29, 618, 54); 
	m_wndRanklab.Create(this, _T("Rank"), 9, 58, 81, 83);
	m_wndRank.Create(this,84, 58, 194, 83); 
	m_wndObjectLabel.Create(this, _T("Object"), 197, 58, 277, 83);
	m_wndObject.Create(this,282, 58, 618, 83); 
	m_wndLoad.Create(this, _T("&Load"), 622, 29, 706, 83);
	m_wndPrint.Create(this, _T("&Print"), 709, 29, 789, 83);
	m_wndExport.Create(this, _T("Export"), 792, 29, 872, 83);
	m_wndAll.Create(this, _T("All"), 11, 87, 91, 112);
	m_wndInPatient.Create(this, _T("InPatient"), 96, 87, 176, 112);
	m_wndOutPatient.Create(this, _T("OutPatient"), 181, 87, 261, 112);
	m_wndApprovalFee.Create(this, _T("Approval Fee"), 12, 115, 113, 140);
	m_wndUnapprovedFee.Create(this, _T("Unapproved Fee"), 104, 115, 217, 140);
	m_wndPayment.Create(this, _T("Payment"), 218, 115, 350, 140);
	m_wndExam.Create(this, _T("Khoa khám bệnh"), 351, 115, 500, 140);
	m_wndList.Create(this,4, 146, 1011, 614); */

	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 6, 5, 1012, 143);
	m_wndFromDateLabel.Create(this, _T("From Date"), 9, 29, 81, 54);
	m_wndFromDate.Create(this,85, 29, 195, 54); 
	m_wndToDateLabel.Create(this, _T("To Date"), 197, 29, 277, 54);
	m_wndToDate.Create(this,282, 29, 392, 54); 
	m_wndDepartmentLab.Create(this, _T("Department"), 395, 29, 475, 54);
	m_wndDepartment.Create(this,481, 29, 619, 54); 
	m_wndRanklab.Create(this, _T("Rank"), 9, 58, 81, 83);
	m_wndRank.Create(this,84, 58, 194, 83); 
	m_wndObjectLabel.Create(this, _T("Object"), 197, 58, 277, 83);
	m_wndObject.Create(this,282, 58, 618, 83); 
	m_wndLoad.Create(this, _T("&Load"), 622, 29, 706, 83);
	m_wndPrint.Create(this, _T("&Print"), 709, 29, 789, 83);
	m_wndExport.Create(this, _T("Export"), 792, 29, 872, 83);
	m_wndAll.Create(this, _T("All"), 11, 87, 91, 112);
	m_wndInPatient.Create(this, _T("InPatient"), 96, 87, 176, 112);
	m_wndOutPatient.Create(this, _T("OutPatient"), 181, 87, 261, 112);
	m_wndApprovalFee.Create(this, _T("Approval Fee"), 12, 115, 161, 140);
	m_wndUnapprovedFee.Create(this, _T("Unapproved Fee"), 166, 115, 315, 140);
	m_wndPayment.Create(this, _T("Payment"), 321, 115, 470, 140);
	m_wndExam.Create(this, _T("Khoa khám bệnh"), 475, 115, 624, 140);
	m_wndList.Create(this,5, 146, 1012, 614); 
	m_wndZones.Create(this, _T("Zones"), 630, 115, 705, 140);
	m_wndZone.Create(this,710, 115, 1012, 140);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Số hồ sơ"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Tên Bệnh Nhân"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Năm sinh"), CFMT_DATE, 80);
	m_wndList.InsertColumn(4, _T("Cấp bậc"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Đơn vị"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Chấn đoán ban đầu"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(7, _T("Chấn đoán"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(8, _T("Đối tượng"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Vào khoa"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(10, _T("Ngày ra"), CFMT_DATE, 100);
	m_wndList.InsertColumn(11, _T("Số ngày điều trị"), CFMT_DATE, 100);
	m_wndList.InsertColumn(12, _T("Địa chỉ"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(13, _T("Kết luận"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(14, _T("Liên hệ"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(15, _T("Liên hệ 2"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(16, _T("Ý kiến chỉ đạo"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(17, _T("Người nhà"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(18, _T("Địa chỉ chi tiết"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(19, _T("Giới tính"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(20, _T("Nơi làm việc"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	
	m_wndZone.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndZone.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CCBCDANHSACHBENHNHANRAVIEN::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(1024);
}
void CCBCDANHSACHBENHNHANRAVIEN::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndApprovalFee.SetEvent(WE_CLICK, _OnApprovalFeeSelectFnc);
	m_wndUnapprovedFee.SetEvent(WE_CLICK, _OnUnapprovedFeeSelectFnc);
	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndExam.SetEvent(WE_CLICK, _OnExamSelectFnc);
	m_wndZone.SetEvent(WE_LOADDATA, _OnZoneLoadDataFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CCBCDANHSACHBENHNHANRAVIEN::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Check(pDX, m_wndApprovalFee.GetDlgCtrlID(), m_bApprovalFee);
	DDX_Check(pDX, m_wndUnapprovedFee.GetDlgCtrlID(), m_bUnapprovedFee);
	DDX_Check(pDX, m_wndPayment.GetDlgCtrlID(), m_bPayment);
	DDX_Check(pDX, m_wndExam.GetDlgCtrlID(), m_bExam);
	DDX_TextEx(pDX, m_wndZone.GetDlgCtrlID(), m_szZoneKey);

}
void CCBCDANHSACHBENHNHANRAVIEN::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCBCDANHSACHBENHNHANRAVIEN::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCBCDANHSACHBENHNHANRAVIEN::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_szRankKey.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;
	m_bApprovalFee=FALSE;
	m_bUnapprovedFee=FALSE;
	m_bPayment=FALSE;
	m_bExam=FALSE;
	m_szZoneKey.Empty();

}
int CCBCDANHSACHBENHNHANRAVIEN::SetMode(int nMode){
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
/*void CCBCDANHSACHBENHNHANRAVIEN::OnFromDateChange(){
	
} */
/*void CCBCDANHSACHBENHNHANRAVIEN::OnFromDateSetfocus(){
	
} */
/*void CCBCDANHSACHBENHNHANRAVIEN::OnFromDateKillfocus(){
	
} */
int CCBCDANHSACHBENHNHANRAVIEN::OnFromDateCheckValue(){
	return 0;
} 
/*void CCBCDANHSACHBENHNHANRAVIEN::OnToDateChange(){
	
} */
/*void CCBCDANHSACHBENHNHANRAVIEN::OnToDateSetfocus(){
	
} */
/*void CCBCDANHSACHBENHNHANRAVIEN::OnToDateKillfocus(){
	
} */
int CCBCDANHSACHBENHNHANRAVIEN::OnToDateCheckValue(){
	return 0;
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\DANHSACHBENHNHANRAVIENCBCC.RPT")))
		return;
	
	if((m_bExam) && (!m_szZoneKey.IsEmpty()))
		szSQL = GetQueryString3();
	else if(m_bExam)
		szSQL = GetQueryString2();
	else
		szSQL = GetQueryString();

	int ret =0;
	ret = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	if (ret <=0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("BỘ QUỐC PHÒNG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("BỆNH VIỆN TW QUÂN ĐỘI 108"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail = NULL;
	int nIdx=0;
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), tmpStr);
		//tenbenhnhan
		rs.GetValue(_T("hovaten"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		//namsinh
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		//capbac
		rs.GetValue(_T("CAPBAC"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		//donvi
		rs.GetValue(_T("HP_WORKPLACE"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		//chandoan
		rs.GetValue(_T("hcr_maindisease"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		//doituong
		rs.GetValue(_T("DOITUONG"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		//vaokhoa
		rs.GetValue(_T("htr_deptid"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		//diachi
		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		//ketqua
		rs.GetValue(_T("result"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		//lienhe
		rs.GetValue(_T("contact"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		//lienhe2
		rs.GetValue(_T("contact2"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		//ykiendenghi
		rs.GetValue(_T("hcr_gsuggestion2"), tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		//nguoinha
		rs.GetValue(_T("nguoinha"), tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);
		//diachichitiet
		rs.GetValue(_T("diachichitiet"), tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);
		//gioitinh
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);
		//noilamviec
		rs.GetValue(_T("noilamviec"), tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);
		rs.MoveNext();
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 26);
	xls.SetColumnWidth(3, 11);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 17);
	xls.SetColumnWidth(6, 17);
	xls.SetColumnWidth(7, 18);
	xls.SetColumnWidth(8, 19);
	xls.SetColumnWidth(9, 20);
	xls.SetColumnWidth(10, 18);
	xls.SetColumnWidth(11, 17);
	xls.SetColumnWidth(12, 45);
	xls.SetColumnWidth(13, 20);
	xls.SetColumnWidth(14, 12);
	xls.SetColumnWidth(15, 12);
	xls.SetColumnWidth(16, 35);
	xls.SetColumnWidth(17, 25);
	xls.SetColumnWidth(18, 25);
	xls.SetColumnWidth(19, 10);
	xls.SetColumnWidth(20, 25);
	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 2, _T("DANH SÁCH BỆNH NHÂN RA VÀO VIỆN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("Tên bệnh nhân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 6, _T("Năm sinh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 6, _T("Cấp bậc"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("Đơn vị"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 6, _T("Chấn đoán ban đầu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 6, _T("Chấn đoán"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 6, _T("Đối tượng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 6, _T("Vào khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 6, _T("Ngày ra"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 6, _T("Số ngày điều trị"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 6, _T("Địa chỉ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 6, _T("Kết luận"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 6, _T("Liên hệ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(15, 6, _T("Liên hệ 2"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(16, 6, _T("Ý kiến đề nghị"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(17, 6, _T("Người nhà"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(18, 6, _T("Địa chỉ chi tiết"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(19, 6, _T("Giới tính"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(20, 6, _T("Nơi làm việc"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 14);
	xls.SetMerge(3, 3, 0, 14);
	
	if((m_bExam) && (!m_szZoneKey.IsEmpty()))
		szSQL = GetQueryString3();
	else if(m_bExam)
		szSQL = GetQueryString2();
	else
		szSQL = GetQueryString();
	
	rs.ExecSQL(szSQL);
	nRow = 7;
	nCol = 0;
	int nIdx=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"), nIdx++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hd_docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT|FMT_CENTER);

		rs.GetValue(_T("hovaten"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("CAPBAC"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("HP_WORKPLACE"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hcr_admitdisease"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hcr_maindisease"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("DOITUONG"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("htr_deptid"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("htr_dischargedate"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_DATETIME);

		rs.GetValue(_T("treatday"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("result"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("contact"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("contact2"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("hcr_gsuggestion2"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("nguoinha"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("diachichitiet"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("noilamviec"), tmpStr);
		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DANH SACH BENH NHAN RA VAO VIEN.xls"));

} 
void CCBCDANHSACHBENHNHANRAVIEN::OnListDblClick(){
	
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCBCDANHSACHBENHNHANRAVIEN::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCBCDANHSACHBENHNHANRAVIEN::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, szNewGroup, szOldGroup;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	if((m_bExam) && (!m_szZoneKey.IsEmpty()))
		szSQL = GetQueryString3();
	else if(m_bExam)
		szSQL = GetQueryString2();
	else
		szSQL = GetQueryString();

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	int nIndex=1;
	int nItem=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("hd_docno")), 
			rs.GetValue(_T("hovaten")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("CAPBAC")), 
			rs.GetValue(_T("HP_WORKPLACE")), 
			rs.GetValue(_T("hcr_admitdisease")),
			rs.GetValue(_T("hcr_maindisease")),
			rs.GetValue(_T("DOITUONG")), 
			rs.GetValue(_T("htr_deptid")),
			rs.GetValue(_T("htr_dischargedate")),
			rs.GetValue(_T("treatday")),
			rs.GetValue(_T("address")),
			rs.GetValue(_T("result")),
			rs.GetValue(_T("contact")),
			rs.GetValue(_T("contact2")),
			rs.GetValue(_T("hcr_gsuggestion2")),
			rs.GetValue(_T("nguoinha")),
			rs.GetValue(_T("diachichitiet")),
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("noilamviec")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CCBCDANHSACHBENHNHANRAVIEN::OnAllSelect(){
	m_szCondition = _T("A");
	OnListLoadData();
}
void CCBCDANHSACHBENHNHANRAVIEN::OnInPatientSelect(){
	m_szCondition = _T("I");
	OnListLoadData();
}
void CCBCDANHSACHBENHNHANRAVIEN::OnOutPatientSelect(){
	m_szCondition = _T("E");
	OnListLoadData();
}
void CCBCDANHSACHBENHNHANRAVIEN::OnApprovalFeeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bUnapprovedFee = false ;
	m_bPayment = false;
	UpdateData(false);
	OnListLoadData();
}
void CCBCDANHSACHBENHNHANRAVIEN::OnUnapprovedFeeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bApprovalFee = false;
	m_bPayment = false;
	UpdateData(false);
	OnListLoadData();
}
void CCBCDANHSACHBENHNHANRAVIEN::OnPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bApprovalFee = false;
	m_bUnapprovedFee = false ;
	UpdateData(false);
	OnListLoadData();
}
void CCBCDANHSACHBENHNHANRAVIEN::OnExamSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCBCDANHSACHBENHNHANRAVIEN::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnObjectSelendok(){
	 
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnObjectSetfocus(){
	
}*/
/*void CCBCDANHSACHBENHNHANRAVIEN::OnObjectKillfocus(){
	
}*/
long CCBCDANHSACHBENHNHANRAVIEN::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		//szWhere.Format();
	};
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as description FROM hms_object ORDER BY cast(id as integer)"));
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentSelendok(){
	 
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentSetfocus(){
	
}*/
/*void CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentKillfocus(){
	
}*/
long CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type = 'DT' order by id"), szWhere);
	_fmsg(_T("%s"),szSQL);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
long CCBCDANHSACHBENHNHANRAVIEN::OnZoneLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndZone.AddItems(_T("GĐ"), _T("Khu Giảm đau"), NULL);
	m_wndZone.AddItems(_T("PX"), _T("Khu Phóng xạ"), NULL);
	m_wndZone.AddItems(_T("TH"), _T("Khu Thính học"), NULL);
	return 0;
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCBCDANHSACHBENHNHANRAVIEN::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCBCDANHSACHBENHNHANRAVIEN::OnRankSelendok(){
	 
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnRankSetfocus(){
	
}*/
/*void CCBCDANHSACHBENHNHANRAVIEN::OnRankKillfocus(){
	
}*/
long CCBCDANHSACHBENHNHANRAVIEN::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndRank.DeleteAllItems(); 
	szSQL.Format(_T("SELECT ss_code id,ss_desc name FROM sys_sel WHERE ss_id='hms_rank' and ss_code >12"), szWhere);
	_fmsg(_T("%s"),szSQL);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRank.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCBCDANHSACHBENHNHANRAVIEN::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CCBCDANHSACHBENHNHANRAVIEN::OnAddCBCDANHSACHBENHNHANRAVIEN(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCBCDANHSACHBENHNHANRAVIEN::OnEditCBCDANHSACHBENHNHANRAVIEN(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCBCDANHSACHBENHNHANRAVIEN::OnDeleteCBCDANHSACHBENHNHANRAVIEN(){
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
 		OnCancelCBCDANHSACHBENHNHANRAVIEN();
 	}
	return 0;
}
int CCBCDANHSACHBENHNHANRAVIEN::OnSaveCBCDANHSACHBENHNHANRAVIEN(){
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
 		//OnCBCDANHSACHBENHNHANRAVIENListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCBCDANHSACHBENHNHANRAVIEN::OnCancelCBCDANHSACHBENHNHANRAVIEN(){
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
int CCBCDANHSACHBENHNHANRAVIEN::OnCBCDANHSACHBENHNHANRAVIENListLoadData(){
	return 0;
}
CString CCBCDANHSACHBENHNHANRAVIEN::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept, szObject, szRank, szDept1,szFilter;
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND (htr_deptid='%s' or htr_ctdeptid='%s' )"), m_szDepartmentKey, m_szDepartmentKey);
	if (!m_szRankKey.IsEmpty())
		szRank.AppendFormat(_T(" AND hp_rank = '%s'"), m_szRankKey);

	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(" and NVL(htr_outpatient, 'N') IN('N','Y') "));
	//Trang thai noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" and NVL(htr_outpatient, 'N')='N' "));
	//Trang thai ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" and NVL(htr_outpatient, 'N')='Y' "));
	
	if (m_bApprovalFee)
		szFilter = _T(" AND HTRF_ACCEPTEDFEE='Y'");
	else if (m_bUnapprovedFee)
		szFilter = _T(" AND HTRF_ACCEPTEDFEE='N'");
	else if (m_bPayment)
		szFilter = _T(" AND HCRF_ACCEPTEDFEE='P'");

	szWhere.AppendFormat(_T(" AND htr_status='T' AND htr_suggestion <> 'M' AND ") \
		_T(" htr_dischargedate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT * ") \
_T(" FROM(SELECT 1 typeid,hd_docno,") \
_T("        'Cấp tá' loai,") \
_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS hovaten,") \
_T("        extract(YEAR FROM hp_birthdate)       AS age,") \
_T("        (SELECT ss_desc FROM sys_sel where ss_id='hms_rank' and ss_code=hp_rank) as capbac,") \
_T("        hp_workplace as noilamviec,") \
_T("        hcr_admitdisease,") \
_T("        hcr_maindisease,") \
_T("        CASE WHEN getdaysbetween(htr_dischargedate, htr_admitdate) = 0 THEN 1 ELSE getdaysbetween(htr_dischargedate, htr_admitdate) END AS treatday,") \
_T("        hms_getobjectname(hd_object) AS doituong,") \
_T("        trunc_date(htr_admitdate) AS admitdate,") \
_T("        '['||htr_deptid||'] '||get_departmentname(htr_deptid) as htr_deptid,htr_dischargedate,") \
_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
_T("		hd_telephone AS contact,") \
_T("		hd_contacttel AS contact2,") \
_T("	    (SELECT ss_desc FROM sys_sel WHERE ss_id = 'hms_result' AND ss_code = hcr_result) AS result,") \
_T("        hcr_gsuggestion2,") \
_T("        hd_relative as nguoinha,") \
_T("        hd_contactaddr as diachichitiet,") \
_T("        hms_getsex(hp_sex) as sex") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
_T(" WHERE 1=1 %s %s %s %s %s) %s") \
_T(" ORDER BY typeid,htr_deptid,capbac"), szDept, szObject, szRank, szWhere,szFilter, szDept1);

	return szSQL;
}
CString CCBCDANHSACHBENHNHANRAVIEN::GetQueryString2()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept, szObject, szRank, szDept1,szFilter;
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	
	if (!m_szRankKey.IsEmpty())
		szRank.AppendFormat(_T(" AND hp_rank = '%s'"), m_szRankKey);

	if (m_bApprovalFee)
		szFilter = _T(" AND HDF_ACCEPTEDFEE='Y'");
	else if (m_bUnapprovedFee)
		szFilter = _T(" AND HDF_ACCEPTEDFEE='N'");
	else if (m_bPayment)
		szFilter = _T(" AND HDF_ACCEPTEDFEE='P'");
	

	szWhere.AppendFormat(_T(" AND hd_status='T' AND hd_suggestion <> 'D' AND hd_admitdept IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'TTHTSS','TTTM') AND ") \
		_T(" hd_enddate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT * ") \
		_T(" FROM(SELECT 1 typeid,hd_docno,") \
		_T("        'Cấp tá' loai,") \
		_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS hovaten,") \
		_T("        extract(YEAR FROM hp_birthdate)       AS age,") \
		_T("        (SELECT ss_desc FROM sys_sel where ss_id='hms_rank' and ss_code=hp_rank) as capbac,") \
		_T("        hp_workplace as noilamviec,") \
		_T("        hd_transdiagn AS hcr_admitdisease,") \
		_T("        hd_diagnostic AS hcr_maindisease,") \
		_T("        0 AS treatday,") \
		_T("        hms_getobjectname(hd_object) AS doituong,") \
		_T("        trunc_date(hd_admitdate) AS admitdate,") \
		_T("        '['||hd_admitdept||'] '||get_departmentname(hd_admitdept) as htr_deptid, ") \
		_T("		hd_enddate AS htr_dischargedate,") \
		_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T("		hd_telephone AS contact,") \
		_T("		hd_contacttel AS contact2,") \
		_T("	    (SELECT ss_desc FROM sys_sel WHERE ss_id = 'hms_result' AND ss_code = hd_result) AS result,") \
		_T("        hd_conclusion AS hcr_gsuggestion2,") \
		_T("        hd_relative as nguoinha,") \
		_T("        hd_contactaddr as diachichitiet,") \
		_T("        hms_getsex(hp_sex) as sex") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" WHERE 1=1 %s %s %s %s %s) %s") \
		_T(" ORDER BY typeid,htr_deptid,capbac"), szDept, szObject, szRank, szWhere,szFilter, szDept1);

	return szSQL;
}
CString CCBCDANHSACHBENHNHANRAVIEN::GetQueryString3()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept, szObject, szRank, szDept1,szFilter;
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	
	if (!m_szRankKey.IsEmpty())
		szRank.AppendFormat(_T(" AND hp_rank = '%s'"), m_szRankKey);

	if (m_bApprovalFee)
		szFilter = _T(" AND HDF_ACCEPTEDFEE='Y'");
	else if (m_bUnapprovedFee)
		szFilter = _T(" AND HDF_ACCEPTEDFEE='N'");
	else if (m_bPayment)
		szFilter = _T(" AND HDF_ACCEPTEDFEE='P'");

	if(m_szZoneKey == _T("GĐ"))
	{
		szWhere.AppendFormat(_T(" AND he_deptid='TYC' AND he_roomid in (63, 64, 65) "));
	}

	if(m_szZoneKey == _T("PX"))
	{
		szWhere.AppendFormat(_T(" AND he_deptid='TYC' AND he_roomid in (60, 61, 62) "));
	}
	
	if(m_szZoneKey == _T("TH"))
	{
		szWhere.AppendFormat(_T(" AND he_deptid='TYC' AND he_roomid in (83) "));
	}

	szWhere.AppendFormat(_T(" AND hd_status='T' AND hd_suggestion <> 'D' AND hd_admitdept IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'TTHTSS') AND ") \
		_T(" hd_enddate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT * ") \
		_T(" FROM(SELECT 1 typeid,hd_docno,") \
		_T("        'Cấp tá' loai,") \
		_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS hovaten,") \
		_T("        extract(YEAR FROM hp_birthdate)       AS age,") \
		_T("        (SELECT ss_desc FROM sys_sel where ss_id='hms_rank' and ss_code=hp_rank) as capbac,") \
		_T("        hp_workplace as noilamviec,") \
		_T("        hd_transdiagn AS hcr_admitdisease,") \
		_T("        hd_diagnostic AS hcr_maindisease,") \
		_T("        0 AS treatday,") \
		_T("        hms_getobjectname(hd_object) AS doituong,") \
		_T("        trunc_date(hd_admitdate) AS admitdate,") \
		_T("        '['||htr_deptid||'] '||get_departmentname(htr_deptid) as htr_deptid,") \
		_T("		hd_enddate AS htr_dischargedate,") \
		_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T("		hd_telephone AS contact,") \
		_T("		hd_contacttel AS contact2,") \
		_T("	    (SELECT ss_desc FROM sys_sel WHERE ss_id = 'hms_result' AND ss_code = hd_result) AS result,") \
		_T("        hd_conclusion AS hcr_gsuggestion2,") \
		_T("        hd_relative as nguoinha,") \
		_T("        hd_contactaddr as diachichitiet,") \
		_T("        hms_getsex(hp_sex) as sex") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_exam ON (he_patientno = he_patientno AND hd_docno = he_docno)") \
		_T(" WHERE 1=1 %s %s %s %s %s) %s") \
		_T(" ORDER BY typeid,htr_deptid,capbac"), szDept, szObject, szRank, szWhere,szFilter, szDept1);

	return szSQL;
}