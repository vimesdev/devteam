#include "stdafx.h"
#include "EMOperationListEX.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMOperationListEX *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMOperationListEX* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMOperationListEX *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMOperationListEX *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMOperationListEX *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMOperationListEX* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CEMOperationListEX *)pWnd)->OnDeptLoadData();
}
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMOperationListEX *)pWnd)->OnRoomLoadData();
}
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMOperationListEX* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMOperationListEX *pVw = (CEMOperationListEX *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMOperationListEX *pVw = (CEMOperationListEX *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnPolicySelect();
}
static void _OnPaymentSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnPaymentSelect();
}
static void _OnPayment2SelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnPayment2Select();
}
static void _OnSurgerySelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnSurgerySelect();
}
static void _OnOperationSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnOperationSelect();
}
static void _OnParaclinicalSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnParaclinicalSelect();
}
static void _OnKPLSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnKPLSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnAllSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnOutpatientSelect();
}
static void _OnFromExamSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnFromExamSelect();
}
static void _OnBNTYCSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnBNTYCSelect();
}
static void _OnKBNTYCSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnKBNTYCSelect();
}
static void _OnGiamDauSelectFnc(CWnd *pWnd){
	((CEMOperationListEX*)pWnd)->OnGiamDauSelect();
}
static int _OnAddTMOperationListFnc(CWnd *pWnd){
	 return ((CEMOperationListEX*)pWnd)->OnAddTMOperationList();
} 
static int _OnEditTMOperationListFnc(CWnd *pWnd){
	 return ((CEMOperationListEX*)pWnd)->OnEditTMOperationList();
} 
static int _OnDeleteTMOperationListFnc(CWnd *pWnd){
	 return ((CEMOperationListEX*)pWnd)->OnDeleteTMOperationList();
} 
static int _OnSaveTMOperationListFnc(CWnd *pWnd){
	 return ((CEMOperationListEX*)pWnd)->OnSaveTMOperationList();
} 
static int _OnCancelTMOperationListFnc(CWnd *pWnd){
	 return ((CEMOperationListEX*)pWnd)->OnCancelTMOperationList();
}
static void _OnDeptDblClickFnc(CWnd *pWnd)
{
	((CEMOperationListEX*)pWnd)->OnDeptDblClick();
}
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CEMOperationListEX *)pWnd)->OnRoomSelendok();
}



CEMOperationListEX::CEMOperationListEX(CWnd* pParent)
{

	m_nDlgWidth = 470;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CEMOperationListEX::~CEMOperationListEX(){
}
void CEMOperationListEX::OnCreateComponents()
{
	
	m_wndReportFilter.Create(this, _T("Report Parameters"), 6, 4, 511, 276);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
	m_wndYear.Create(this,105, 30, 255, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 260, 30, 350, 55);
	m_wndReportPeriod.Create(this,355, 30, 505, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 255, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 260, 60, 350, 85);
	m_wndToDate.Create(this,355, 60, 505, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 100, 115);
	m_wndDept.Create(this,105, 90, 505, 115); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 120, 100, 145);
	m_wndRoom.Create(this,105, 120, 505, 145); 
	m_wndInsurance.Create(this, _T("Insurance"), 10, 156, 100, 181);
	m_wndService.Create(this, _T("Service"), 105, 156, 195, 181);
	m_wndPolicy.Create(this, _T("Policies"), 200, 156, 280, 181);
	m_wndPayment.Create(this, _T("Chưa nộp quỹ"), 285, 156, 395, 181);
	m_wndPayment2.Create(this, _T("Ðã nộp quỹ"), 400, 156, 505, 181);
	m_wndSurgery.Create(this, _T("Surgery"), 10, 186, 100, 211);
	m_wndOperation.Create(this, _T("Operation"), 105, 186, 195, 211);
	m_wndParaclinical.Create(this, _T("Paraclinical"), 200, 186, 320, 211);
	m_wndKPL.Create(this, _T("Không phân loại"), 325, 186, 445, 211);
	m_wndAll.Create(this, _T("All"), 10, 215, 100, 240);
	m_wndInpatient.Create(this, _T("InPatient"), 105, 216, 195, 241);
	m_wndOutpatient.Create(this, _T("OutPatient"), 200, 216, 320, 241);
	m_wndFromExam.Create(this, _T("Từ phòng khám"), 325, 217, 445, 242);
	m_wndBNTYC.Create(this, _T("BN TYC"), 10, 246, 100, 271);
	m_wndKBNTYC.Create(this, _T("Bỏ BN TYC"), 105, 246, 195, 271);
	m_wndGiamDau.Create(this, _T("Gói giảm đau"), 200, 246, 320, 271);
	m_wndExport.Create(this, _T("&ExportXLS"), 405, 246, 505, 271); 

}
void CEMOperationListEX::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	/*m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndRoom.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 90);*/

	m_wndRoom.InsertColumn(0, _T("Khoa"), CFMT_TEXT | CFMT_RIGHT , 120);//id
	m_wndRoom.InsertColumn(1, _T("Phòng"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(2, _T("Tên phòng"), CFMT_TEXT, 380);
	m_wndRoom.InsertColumn(3, _T("Mã phòng"), CFMT_TEXT, 90);

	m_wndRoom.SetCheckBox(TRUE);

}
void CEMOperationListEX::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);	
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndDept.SetEvent(WE_DBLCLICK, _OnDeptDblClickFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndPayment2.SetEvent(WE_CLICK, _OnPayment2SelectFnc);
	m_wndSurgery.SetEvent(WE_CLICK, _OnSurgerySelectFnc);
	m_wndOperation.SetEvent(WE_CLICK, _OnOperationSelectFnc);
	m_wndParaclinical.SetEvent(WE_CLICK, _OnParaclinicalSelectFnc);
	m_wndKPL.SetEvent(WE_CLICK, _OnKPLSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndFromExam.SetEvent(WE_CLICK, _OnFromExamSelectFnc);
	m_wndBNTYC.SetEvent(WE_CLICK, _OnBNTYCSelectFnc);
	m_wndKBNTYC.SetEvent(WE_CLICK, _OnKBNTYCSelectFnc);
	m_wndGiamDau.SetEvent(WE_CLICK, _OnGiamDauSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddTMOperationListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditTMOperationListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteTMOperationListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveTMOperationListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelTMOperationListFnc, 0, 'T', VK_CONTROL);
	OnDeptLoadData();
	CString szSQL;
	SetMode(VM_ADD);
}
void CEMOperationListEX::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Check(pDX, m_wndPayment.GetDlgCtrlID(), m_bPayment);
	DDX_Check(pDX, m_wndPayment2.GetDlgCtrlID(), m_bPayment2);
	DDX_Check(pDX, m_wndSurgery.GetDlgCtrlID(), m_bSurgery);
	DDX_Check(pDX, m_wndOperation.GetDlgCtrlID(), m_bOperation);
	DDX_Check(pDX, m_wndParaclinical.GetDlgCtrlID(), m_bParaclinical);
	DDX_Check(pDX, m_wndKPL.GetDlgCtrlID(), m_bKPL);
	DDX_Check(pDX, m_wndAll.GetDlgCtrlID(), m_bAll);
	DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndFromExam.GetDlgCtrlID(), m_bFromExam);
	DDX_Check(pDX, m_wndBNTYC.GetDlgCtrlID(), m_bBNTYC);
	DDX_Check(pDX, m_wndKBNTYC.GetDlgCtrlID(), m_bKBNTYC);
	DDX_Check(pDX, m_wndGiamDau.GetDlgCtrlID(), m_bGiamDau);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);

}
void CEMOperationListEX::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMOperationListEX::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMOperationListEX::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_nInsurance=0;
	m_nService=1;
	m_nPolicy=1;
	m_bPayment=FALSE;
	m_bPayment2=FALSE;
	m_bSurgery=FALSE;
	m_bOperation=FALSE;
	m_bParaclinical=FALSE;
	m_bKPL=FALSE;
	m_bAll=FALSE;
	m_bInpatient=FALSE;
	m_bOutpatient=FALSE;
	m_bFromExam=FALSE;
	m_bBNTYC=FALSE;
	m_bKBNTYC=FALSE;
	m_bGiamDau=FALSE;

}
int CEMOperationListEX::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL, szSysDate;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			szSysDate = pMF->GetSysDate();
			m_nYear = ToInt(szSysDate.Left(4));
			m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
			m_szFromDate = m_szToDate = pMF->GetSysDate();
			m_szFromDate += _T(" 00:00");
			m_szToDate += _T(" 23:59");
			
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
/*void CEMOperationListEX::OnYearChange(){
	
} */
/*void CEMOperationListEX::OnYearSetfocus(){
	
} */
/*void CEMOperationListEX::OnYearKillfocus(){
	
} */
int CEMOperationListEX::OnYearCheckValue(){
	UpdateData(TRUE);
	if (m_nYear > 0)
	{
		CDateTime dt;
		CDate date;
		CString szTemp;

		dt.ParseDateTime(m_szFromDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szFromDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}

	UpdateData(FALSE);
	return 0;
} 
void CEMOperationListEX::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CEMOperationListEX::OnDeptDblClick()
{
	
} 

void CEMOperationListEX::OnReportPeriodSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/03/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/04/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/06/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/07/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/09/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/10/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/12/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 
	 
}
/*void CEMOperationListEX::OnReportPeriodSetfocus(){
	
}*/
/*void CEMOperationListEX::OnReportPeriodKillfocus(){
	
}*/
long CEMOperationListEX::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szReportPeriodKey));
	}
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMOperationListEX::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMOperationListEX::OnFromDateChange(){
	
} */
/*void CEMOperationListEX::OnFromDateSetfocus(){
	
} */
/*void CEMOperationListEX::OnFromDateKillfocus(){
	
} */
int CEMOperationListEX::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMOperationListEX::OnToDateChange(){
	
} */
/*void CEMOperationListEX::OnToDateSetfocus(){
	
} */
/*void CEMOperationListEX::OnToDateKillfocus(){
	
} */
int CEMOperationListEX::OnToDateCheckValue(){
	return 0;
} 
void CEMOperationListEX::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMOperationListEX::OnDeptSelendok()
{	
	UpdateData(true);
	OnRoomLoadData();
}
/*void CEMOperationListEX::OnDeptSetfocus(){
	
}*/
/*void CEMOperationListEX::OnDeptKillfocus(){
	
}*/
long CEMOperationListEX::OnDeptLoadData()
{
	/*CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{

	};
	

	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_id in ('C1.1', 'C1.2', 'C1.3', 'AB','TYC')  ORDER BY id "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return 0;*/

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{

	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as description FROM sys_dept WHERE sd_type = 'KB' ORDER BY sd_id"));
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
long CEMOperationListEX::OnRoomLoadData()
{
	/*CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if (!m_szDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hrl_deptid='%s' "), m_szDeptKey);
	}
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hrl_id='%s' "), m_szRoomKey);
	}

	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name, hrl_deptid as deptid FROM hms_roomlist WHERE 1=1 %s ORDER BY hrl_deptid, id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;*/
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if (!m_szDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hrl_deptid='%s' "), m_szDeptKey);
	}

	szSQL.Format(_T("select hrl_index as room_id, ") \
				_T("	hrl_deptid as dept_id, ") \
				_T("	hrl_name as room_name,") \
				_T("	hrl_id as hrl_id") \
				_T(" from hms_roomlist") \
				_T(" left join sys_dept on (sd_id = hrl_deptid)") \
				_T(" where sd_type = 'KB' AND hrl_active = 'Y' %s") \
				_T(" order by hrl_deptid, hrl_index, hrl_name"), szWhere);
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	while(!rs.IsEOF())
	{ 
		m_wndRoom.AddItems
			(
			rs.GetValue(_T("dept_id")),
			rs.GetValue(_T("room_id")), 
			rs.GetValue(_T("room_name")),
			rs.GetValue(_T("hrl_id")), NULL);
		rs.MoveNext();
		
	}	
	return nCount;


}
void CEMOperationListEX::OnRoomSelendok()
{
	 
}

/*void CEMOperationListEX::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMOperationListEX::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMOperationListEX::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("Xuất tổng hợp"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("Xuất chi tiết"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport1();
		break;
	case 2:
		OnExport2();
		break;
	}
} 
void CEMOperationListEX::OnExport1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szTemp2;
	int nIdx = 1, nRow = 0,nCol=0;
	double nAmount = 0, nTotalAmount = 0;
	double nTotalGroup[5];
	for(int i=0;i <5;i++)
	{
		nTotalGroup[i]=0;
	}

	szSQL = GetQuerySring();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header
	xls.SetColumnWidth(0, 3);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 4);
	xls.SetColumnWidth(5, 4);
	xls.SetColumnWidth(6, 4);
	xls.SetColumnWidth(7, 4);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 20);
	xls.SetColumnWidth(13, 14);
	xls.SetColumnWidth(14, 20);
	xls.SetColumnWidth(15, 10);
	xls.SetColumnWidth(16, 20);
	xls.SetCellMergedColumns(0, 0, 5);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(7, 0, 5);
	xls.SetCellMergedColumns(7, 1, 5);
	xls.SetCellMergedColumns(0, 3, 14);
	xls.SetCellMergedColumns(0, 4, 14);
	xls.SetCellMergedColumns(0, 5, 14);
	xls.SetCellText(0, 0, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(7, 0, _T("CỘNG HÒA XÃ HỘI CHỦ NGHĨA VIỆT NAM"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, false);
	xls.SetCellText(7, 1, _T("Độc lập - Tự do - Hạnh phúc"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(0, 1, pMF->GetCurrentDepartmentName(), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);

	xls.SetCellText(0, 3, _T("DANH SÁCH ĐỀ NGHỊ BỒI DƯỠNG PHẪU THUẬT, THỦ THUẬT"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true, 12);

	if (m_nInsurance == 0)
		tmpStr.Format(_T("Bệnh nhân BHYT"));
	else if (m_nService == 0)
		tmpStr.Format(_T("Bệnh nhân DỊCH VỤ"));
	else if (m_nPolicy == 0)
		tmpStr.Format(_T("Bệnh nhân Quân"));
	xls.SetCellText(0, 4,tmpStr , FMT_TEXT|FMT_CENTER|FMT_WRAPING, true, 12);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);

	xls.SetCellText(10, 2, _T("Mẫu số 05/BV"), FMT_TEXT, true);
	xls.SetCellText(10, 6, _T("Đơn vị tính: Đồng"), FMT_TEXT);

	nRow=8;
	xls.SetCellMergedRows(nCol,nRow,2);
	xls.SetCellText(nCol,nRow,_T("Số TT"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+1,nRow,2);
	xls.SetCellText(nCol+1,nRow,_T("Họ và tên"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+2,nRow,2);
	xls.SetCellText(nCol+2,nRow,_T("Số Hồ Sơ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+3,nRow,2);
	xls.SetCellText(nCol+3,nRow,_T("Tên phẫu thuật, thủ thuật"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedColumns(nCol+4,nRow,4);
	xls.SetCellText(nCol+4,nRow,_T("Phân loại"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	if(m_bKPL == TRUE)
		xls.SetCellText(nCol+4,nRow+1,_T("KPL"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	else
		xls.SetCellText(nCol+4,nRow+1,_T("Đặc biệt"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+5,nRow+1,_T("Loại 1"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+6,nRow+1,_T("Loại 2"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+7,nRow+1,_T("Loại 3"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedColumns(nCol+8,nRow,3);
	xls.SetCellText(nCol+8,nRow,_T("Kíp thực hiện"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+8,nRow+1,_T("Chính"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+9,nRow+1,_T("Phụ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+10,nRow+1,_T("Giúp việc"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+11,nRow,2);
	xls.SetCellText(nCol+11,nRow,_T("Số tiền"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellMergedRows(nCol+12,nRow,2);
	xls.SetCellText(nCol+12,nRow,_T("Tên phẫu thuật theo phần mềm"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellMergedRows(nCol+13,nRow,2);
	xls.SetCellText(nCol+13,nRow,_T("Ngày thực hiện"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellMergedRows(nCol+14,nRow,2);
	xls.SetCellText(nCol+14,nRow,_T("Đối tượng"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+15,nRow,2);
	xls.SetCellText(nCol+15,nRow,_T("Khu"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+16,nRow,2);
	xls.SetCellText(nCol+16,nRow,_T("Phòng"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	//Detail
	nRow = 10;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING);
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(2, nRow, rs.GetValue(_T("docno")), FMT_TEXT|FMT_RIGHT|FMT_WRAPING);
		xls.SetCellText(3, nRow, rs.GetValue(_T("operation_name1")), FMT_TEXT|FMT_WRAPING);
		if(m_bKPL == TRUE)
		{
			rs.GetValue(_T("KPL"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		}
		else
		{
			rs.GetValue(_T("LDB"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		}		
		nTotalGroup[0] += nAmount;

		rs.GetValue(_T("L1"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[1] += nAmount;

		rs.GetValue(_T("L2"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[2] += nAmount;

		rs.GetValue(_T("L3"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[3] += nAmount;

		rs.GetValue(_T("practitioner"),tmpStr);
		tmpStr=GetNameUser(tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("assistant"),tmpStr);
		tmpStr=GetNameUser(tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("anethetist"),tmpStr);
		szTemp=GetNameUser(tmpStr);
		rs.GetValue(_T("anethetist1"),tmpStr);
		szTemp2=GetNameUser(tmpStr);
		tmpStr.Format(_T("%s %s"), szTemp, szTemp2);
		xls.SetCellText(10, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("amount"), nAmount);
		nTotalAmount += nAmount;
		xls.SetCellText(11, nRow, double2str(nAmount), FMT_NUMBER1|FMT_WRAPING);
		xls.SetCellText(12, nRow, rs.GetValue(_T("operation_name")), FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("performdate"), tmpStr);
		xls.SetCellText(13, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(14, nRow, rs.GetValue(_T("objectname")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(15, nRow, rs.GetValue(_T("pdeptid")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(16, nRow, rs.GetValue(_T("roomname")), FMT_TEXT|FMT_WRAPING);
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(4,nRow,double2str(nTotalGroup[0]),FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING, true);
	xls.SetCellText(5,nRow,double2str(nTotalGroup[1]),FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING, true);
	xls.SetCellText(6,nRow,double2str(nTotalGroup[2]),FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING, true);
	xls.SetCellText(7,nRow,double2str(nTotalGroup[3]),FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING, true);
	xls.SetCellText(11, nRow, double2str(nTotalAmount),FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING, true);
	nRow++;
	nCol = 0;

	xls.SetCellText(nCol, nRow+2, _T("Loại đặc biệt"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+3, _T("Loại 1"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+4, _T("Loại 2"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+5, _T("Loại 3"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+6, _T("Cộng"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+ 8, _T("Số tiền bằng chữ:"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+10, _T("TRƯỞNG PHÒNG KHTH"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+11, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+19, _T("Đã ghi sổ cho thanh toán"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+20, _T("Ngày     tháng     năm"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+21, _T("CƠ QUAN TÀI CHÍNH"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+2, nRow, _T("Đơn giá"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+2, nRow+1, _T("Phẫu thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+3, nRow+1, _T("Thủ thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow, _T("Số lượng"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+1, _T("Phẫu thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+10, _T("HÀNH CHÍNH TRƯỞNG"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+11, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+21, _T("CHỨNG NHẬN CỦA CẤP CÓ THẨM QUYỀN"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+8, nRow+1, _T("Thủ thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+9, nRow+9, _T("Ngày     tháng      năm"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+9, nRow+10, _T("CHỦ NHIỆM KHOA"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+9, nRow+11, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+11, nRow, _T("Thành tiền"), FMT_TEXT, true, 10);

	EndWaitCursor();

	if(m_nInsurance==0)
		xls.Save(_T("Exports\\BOIDUONGPTTT BH.xls"));
	if(m_nService== 0)
		xls.Save(_T("Exports\\BOIDUONGPTTT DV.xls"));
	if(m_nPolicy == 0)
		xls.Save(_T("Exports\\BOIDUONGPTTT QUAN.xls"));

} 
void CEMOperationListEX::OnExport2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szTemp2;
	int nIdx = 1, nRow = 0, nCol = 0;
	double nAmount = 0;

	szSQL = GetQuerySring1();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header
	xls.SetColumnWidth(0, 3);
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 30);
	xls.SetColumnWidth(6, 15);
	xls.SetColumnWidth(7, 30);

	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellMergedColumns(7, 0, 6);
	xls.SetCellMergedColumns(7, 1, 6);
	xls.SetCellMergedColumns(0, 3, 13);
	xls.SetCellMergedColumns(0, 4, 13);
	xls.SetCellMergedColumns(0, 5, 13);
	xls.SetCellText(0, 0, _T("BỆNH VIỆN TW QUÂN ĐỘI 108"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(7, 0, _T("CỘNG HÒA XÃ HỘI CHỦ NGHĨA VIỆT NAM"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, false);
	xls.SetCellText(7, 1, _T("Độc lập - Tự do - Hạnh phúc"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
	xls.SetCellText(0, 1, pMF->GetCurrentDepartmentName(), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);

	xls.SetCellText(0, 3, _T("DANH SÁCH PHẪU THUẬT, THỦ THUẬT"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true, 12);

	if (m_nInsurance == 0)
		tmpStr.Format(_T("Bệnh nhân BHYT"));
	else if (m_nService == 0)
		tmpStr.Format(_T("Bệnh nhân DỊCH VỤ"));
	else if (m_nPolicy == 0)
		tmpStr.Format(_T("Bệnh nhân Quân"));
	xls.SetCellText(0, 4,tmpStr , FMT_TEXT|FMT_CENTER|FMT_WRAPING, true, 12);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);

	nRow=8;
	
	xls.SetCellText(nCol++,nRow,_T("Số TT"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Số hồ sơ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Họ và tên"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Đối tượng"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Mã thẻ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Tên phẫu thuật, thủ thuật"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Tên khu"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Tên phòng"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	CDate iDate, eDate;
	CString szNewMonth, szOldMonth;
	iDate.ParseDate(m_szFromDate);
	eDate.ParseDate(m_szToDate);

	int nMerge = 0;
	while (iDate <= eDate){
		for (iDate; iDate <= eDate; iDate++)
		{
			szNewMonth.Format(_T("%d"), iDate.GetMonth());
			if (szNewMonth != szOldMonth && !szNewMonth.IsEmpty())
			{
				xls.SetCellMergedColumns(nCol-nMerge, nRow-1, nMerge);
				szTemp.Format(_T("Tháng %s"), szNewMonth);
				xls.SetCellText(nCol,nRow-1,szTemp,FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
				szOldMonth = szNewMonth;
				nMerge = 0;
			}
			szTemp.Format(_T("%d"), iDate.GetDay());
			xls.SetCellText(nCol++,nRow,szTemp,FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
			nMerge++;
		}
		xls.SetCellMergedColumns(nCol-nMerge, nRow-1, nMerge);
	}

	xls.SetCellText(nCol++,nRow,_T("Tổng cộng"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Chính"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Phụ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);
	xls.SetCellText(nCol++,nRow,_T("Giúp việc"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	//Detail
	nRow = 9;
	while (!rs.IsEOF())
	{
		nCol = 0;
		xls.SetCellText(nCol++, nRow, int2str(nIdx++), FMT_NUMBER1|FMT_RIGHT|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("docno")), FMT_INTEGER|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("pobject")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("extra_info")), FMT_TEXT|FMT_RIGHT|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("operation_name")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("pdeptid")), FMT_TEXT|FMT_WRAPING);
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("roomname")), FMT_TEXT|FMT_WRAPING);

		int i = 0;

		iDate.ParseDate(m_szFromDate);
		eDate.ParseDate(m_szToDate);
		while (iDate <= eDate){
			for (iDate; iDate <= eDate; iDate++)
			{
				szTemp.Format(_T("ngay%d"), i);
				rs.GetValue(szTemp, tmpStr);
				xls.SetCellText(nCol++,nRow,tmpStr,FMT_NUMBER1|FMT_WRAPING,true,10);
				i++;
			}
		}

		rs.GetValue(_T("total"), nAmount);
		xls.SetCellText(nCol++, nRow, double2str(nAmount), FMT_NUMBER1|FMT_WRAPING);
		rs.GetValue(_T("practitioner"),tmpStr);
		tmpStr=GetNameUser(tmpStr);
		xls.SetCellText(nCol++, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("assistant"),tmpStr);
		tmpStr=GetNameUser(tmpStr);
		xls.SetCellText(nCol++, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		rs.GetValue(_T("anethetist"),tmpStr);
		szTemp=GetNameUser(tmpStr);
		rs.GetValue(_T("anethetist1"),tmpStr);
		szTemp2=GetNameUser(tmpStr);
		tmpStr.Format(_T("%s %s"), szTemp, szTemp2);
		xls.SetCellText(nCol++, nRow, tmpStr, FMT_TEXT|FMT_WRAPING);
		nRow++;
		rs.MoveNext();
	}


	EndWaitCursor();

	if(m_nInsurance==0)
		xls.Save(_T("Exports\\BOIDUONGPTTTchitiet BH.xls"));
	if(m_nService== 0)
		xls.Save(_T("Exports\\BOIDUONGPTTTchitiet DV.xls"));
	if(m_nPolicy == 0)
		xls.Save(_T("Exports\\BOIDUONGPTTTchitiet QUAN.xls"));

} 
void CEMOperationListEX::OnInsuranceSelect(){
	
}
void CEMOperationListEX::OnServiceSelect(){
	
}
void CEMOperationListEX::OnPolicySelect(){
	
}
	void CEMOperationListEX::OnOperationSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bOperation)
	{
		m_bSurgery = FALSE;
		m_bParaclinical = FALSE;
	}
	UpdateData(false);
}
	void CEMOperationListEX::OnSurgerySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bSurgery)
	{
		m_bOperation = FALSE;
		m_bParaclinical = FALSE;
	}
	UpdateData(false);
}
	void CEMOperationListEX::OnParaclinicalSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bParaclinical)
	{
		m_bOperation = FALSE;
		m_bSurgery = FALSE;
	}
	UpdateData(false);
}
	void CEMOperationListEX::OnPaymentSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bPayment)
		{
			m_bPayment2 = FALSE;
		}
		UpdateData(false);
	}
	void CEMOperationListEX::OnPayment2Select()
	{
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bPayment2)
		{
			m_bPayment = FALSE;
		}
		UpdateData(false);
	}
	void CEMOperationListEX::OnAllSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bAll)
		{
			m_bInpatient = FALSE;
			m_bOutpatient = FALSE;
			m_bFromExam = FALSE;
		}
		UpdateData(false);
	}
	void CEMOperationListEX::OnInpatientSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bInpatient)
		{
			m_bAll = FALSE;
			m_bOutpatient = FALSE;
			m_bFromExam = FALSE;
		}
		UpdateData(false);
	}
	void CEMOperationListEX::OnOutpatientSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bOutpatient)
		{
			m_bAll = FALSE;
			m_bInpatient = FALSE;
			m_bFromExam = FALSE;
		}
		UpdateData(false);
	}
	void CEMOperationListEX::OnFromExamSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bFromExam)
		{
			m_bAll = FALSE;
			m_bInpatient = FALSE;
			m_bOutpatient = FALSE;
		}
		UpdateData(false);
	}
	void CEMOperationListEX::OnBNTYCSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bBNTYC)
		{
			m_bKBNTYC = FALSE;
		}
		UpdateData(false);
	}
	void CEMOperationListEX::OnKBNTYCSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		if(m_bKBNTYC)
		{
			m_bBNTYC = FALSE;
		}
		UpdateData(false);
	}
	void CEMOperationListEX::OnKPLSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	}
	void CEMOperationListEX::OnGiamDauSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	}
int CEMOperationListEX::OnAddTMOperationList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEMOperationListEX::OnEditTMOperationList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMOperationListEX::OnDeleteTMOperationList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelTMOperationList();
 	}
	return 0;
}
int CEMOperationListEX::OnSaveTMOperationList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnTMOperationListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEMOperationListEX::OnCancelTMOperationList(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CEMOperationListEX::OnTMOperationListListLoadData(){
	return 0;
}
void CEMOperationListEX::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	
}
CString CEMOperationListEX::GetQuerySring()
{
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szWhere, szWhere1, szWhere2, szPTTYC, szTemp, szDept, szRoom;
	
	if(m_bPayment)
	{
		szWhere.AppendFormat(_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND (i.hfe_posted <> 'Y' AND NVL(re.hfe_posted, 'N') <> 'Y')"));
	}
	else if(m_bPayment2)
	{
		szWhere.AppendFormat(_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND (i.hfe_posted = 'Y' OR re.hfe_posted = 'Y')"));
	}
	else
	{
		szWhere1.AppendFormat(_T(" AND ho_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
							  _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);		
	}

	if (m_bSurgery == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='B4' "));			
		}
	else if (m_bOperation == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='B5' "));			
		}
	else if (m_bParaclinical == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='00' "));			
		}

	if (m_bAll == TRUE)
		{

		}
	else if (m_bInpatient == TRUE)
		{
			szWhere1.AppendFormat(_T("AND deptid NOT IN('C1.1', 'C1.2', 'C.3', 'TYC','AB')"));
			//szWhere2.AppendFormat(_T("AND hpc_deptid NOT IN('C1.1', 'C1.2', 'C.3', 'TYC')"));
		}
	else if (m_bOutpatient == TRUE)
		{
			szWhere1.AppendFormat(_T("AND deptid IN('C1.1', 'C1.2', 'C.3', 'TYC', 'AB')"));
			//szWhere2.AppendFormat(_T("AND hpc_deptid IN('C1.1', 'C1.2', 'C.3', 'TYC')"));
		}
	else if(m_bFromExam == TRUE)
		{
			szWhere1.AppendFormat(_T("AND (deptid IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'AB') AND pdeptid NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'AB'))"));
		}
	
	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" AND ho_type in('I','C') "));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" AND ho_type in('S') "));
	else if (m_nPolicy == 0)
		szWhere.AppendFormat(_T(" AND ho_type not in('I','C','S') "));

		
	if (!m_szDeptKey.IsEmpty())
	{
		szWhere1.AppendFormat(_T(" AND pdeptid = '%s'"), m_szDeptKey);		
	}

	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
		{
			m_wndRoom.SetCurSel(i);
			if (!szRoom.IsEmpty())
				szRoom.AppendFormat(_T(", "));
			szRoom.AppendFormat(_T("%s"), m_wndRoom.GetCurrent(3));
		}
	}

	if (!szRoom.IsEmpty())
		szWhere1.AppendFormat(_T(" AND roomid in (%s)"), szRoom);
	
	/*if (!m_szRoomKey.IsEmpty())
	{
		szWhere1.AppendFormat(_T(" AND roomid = '%s'"), m_szRoomKey);		
	}*/	

	if(m_bKPL == TRUE)
		szWhere.AppendFormat(_T("AND groupid NOT IN ('B41', 'B45', 'B51', 'B42', 'B46', 'B52', 'B43', 'B47', 'B53', 'B44', 'B54')"));
	else
		szWhere.AppendFormat(_T("AND groupid IN ('B41', 'B45', 'B51', 'B42', 'B46', 'B52', 'B43', 'B47', 'B53', 'B44', 'B54')"));

	if(pMF->GetModuleID() == _T("SOM"))
		szPTTYC.Format(_T("   ho_qty * hfl_servprice        AS amount,"));
	else
		szPTTYC.Format(_T("   ho_qty * hfl_retprice        AS amount,"));

	if(m_bBNTYC)
		szWhere.AppendFormat(_T(" AND NVL(hd_isreq, 'N') = 'Y'"));
	if(m_bKBNTYC)
		szWhere.AppendFormat(_T(" AND NVL(hd_isreq, 'N') <> 'Y'"));

	if(m_bGiamDau)
		{
			szWhere1.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) = '500' "));			
		}
	else
		{
			szWhere1.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) <> '500' "));			
		}

	szSQL.Format(_T(" SELECT") \
		_T(" docno, ") \
		_T(" hcr_recordno AS record_no,") \
		_T(" get_patientname(docno) AS patient_name,") \
		_T(" extract(YEAR FROM hp_birthdate) AS yob,") \
		_T(" CASE WHEN ho_type NOT IN('I','C') AND hd_rank > 0 THEN") \
		_T(" (SELECT ss_vndesc FROM sys_sel WHERE ss_id = 'hms_rank' AND ss_code = hd_rank)||hp_workplace ELSE hd_cardno END extra_info,") \
		_T(" operation_name,") \
		_T(" operation_name1,") \
		_T(" CASE") \
		_T(" WHEN groupid IN ('B41', 'B45', 'B51')") \
		_T(" THEN quantity") \
		_T(" ELSE 0") \
		_T(" END AS L1,") \
		_T(" CASE") \
		_T(" WHEN groupid IN ('B42', 'B46', 'B52')") \
		_T(" THEN quantity") \
		_T(" ELSE 0") \
		_T(" END AS L2,") \
		_T(" CASE") \
		_T(" WHEN groupid IN ('B43', 'B47', 'B53')") \
		_T(" THEN quantity") \
		_T(" ELSE 0") \
		_T(" END AS L3,") \
		_T(" CASE") \
		_T(" WHEN groupid IN ('B44', 'B54')") \
		_T(" THEN quantity") \
		_T(" ELSE 0") \
		_T(" END AS LDB,") \
		_T(" CASE") \
		_T(" WHEN groupid NOT IN ('B41', 'B45', 'B51', 'B42', 'B46', 'B52', 'B43', 'B47', 'B53', 'B44', 'B54')") \
		_T(" THEN quantity") \
		_T(" ELSE 0") \
		_T(" END AS KPL,") \
		_T(" amount,") \
		_T(" practitioner,") \
		_T(" assistant,") \
		_T(" anethetist,") \
		_T(" anethetist1,") \
		_T(" ho_desc AS objectname,") \
		_T(" performdate,pdeptid, HMS_GETROOMNAME(pdeptid,roomid) as roomname") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ho_docno                 AS docno,") \
		_T("   hfl_name                      AS operation_name,") \
		_T("   ho_comment                    AS operation_name1,") \
		_T("   SUBSTR(hfl_groupid,1,3)       AS groupid,") \
		_T("   get_username(ho_practitioner) AS practitioner,") \
		_T("   get_username(ho_assistant)    AS assistant,") \
		_T("   get_username(ho_user4)        AS anethetist,") \
		_T("   get_username(ho_anesthetist)  AS anethetist1,") \
		_T("   ho_qty                        AS quantity, %s") \
		_T("   ho_invoiceno                  AS invoiceno,") \
		_T("   ho_performdate                AS performdate, pdeptid, roomid") \
		_T(" FROM") \
		_T("   (SELECT ho_docno,") \
		_T("     ho_comment,") \
		_T("     ho_practitioner,") \
		_T("     ho_assistant,") \
		_T("     ho_user4,") \
		_T("     ho_anesthetist,") \
		_T("     ho_qty,") \
		_T("     ho_invoiceno,") \
		_T("     ho_performdate,") \
		_T("     ho_itemid,") \
		_T("     CASE") \
		_T("       WHEN ho_pdeptid = 'B5'") \
		_T("       THEN ho_deptid") \
		_T("       ELSE ho_pdeptid") \
		_T("     END AS pdeptid,") \
		_T("     ho_deptid AS deptid,") \
		_T("     ho_roomid AS roomid") \
		_T("   FROM hms_operation") \
		_T("   WHERE ho_status <> 'O' ") \
		_T("   ) tbl1") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid  = ho_itemid)") \
		_T(" WHERE 1 = 1 %s") \
		_T(" ) tbl") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(docno = hd_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hd_patientno = hp_patientno)") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id = hd_object)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON(hcr_docno = hd_docno)") \
		_T(" LEFT JOIN hms_fee_invoice i") \
		_T(" ON(i.hfe_docno   = docno") \
		_T(" AND i.hfe_invoiceno = invoiceno)") \
		_T(" LEFT JOIN hms_fee_refund re") \
		_T(" ON(re.hfe_docno   = i.hfe_docno") \
		_T(" AND re.hfe_refidx = i.hfe_invoiceno)") \
		_T(" WHERE 1 = 1 %s ORDER BY performdate, docno"), szPTTYC, szWhere1, szWhere);
		//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CEMOperationListEX::GetQuerySring1()
{
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szWhere, szWhere1, szWhere2, szPTTYC, szTemp, szDept, szRoom;
	

	if(m_bPayment)
	{
		szWhere.AppendFormat(_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND (i.hfe_posted <> 'Y' AND NVL(re.hfe_posted, 'N') <> 'Y')"));
	}
	else if(m_bPayment2)
	{
		szWhere.AppendFormat(_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" AND (i.hfe_posted = 'Y' OR re.hfe_posted = 'Y')"));
	}
	else
	{
		szWhere1.AppendFormat(_T(" AND ho_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
							  _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		
	}

	if (m_bSurgery == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='B4' "));
			
		}
	else if (m_bOperation == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='B5' "));
			
		}
	else if (m_bParaclinical == TRUE)
		{
			szWhere1.AppendFormat(_T(" AND substr(hfl_groupid,1,2)='00' "));
			
		}

	if (m_bAll == TRUE)
		{

		}
	else if (m_bInpatient == TRUE)
		{
			szWhere1.AppendFormat(_T("AND deptid NOT IN('C1.1', 'C1.2', 'C.3', 'TYC','AB')"));
			//szWhere2.AppendFormat(_T("AND hpc_deptid NOT IN('C1.1', 'C1.2', 'C.3', 'TYC')"));
		}
	else if (m_bOutpatient == TRUE)
		{
			szWhere1.AppendFormat(_T("AND deptid IN('C1.1', 'C1.2', 'C.3', 'TYC', 'AB')"));
			//szWhere2.AppendFormat(_T("AND hpc_deptid IN('C1.1', 'C1.2', 'C.3', 'TYC')"));
		}
	else if(m_bFromExam == TRUE)
		{
			szWhere1.AppendFormat(_T("AND (deptid IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'AB') AND pdeptid NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'AB'))"));
		}
	
	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" AND ho_type in('I','C') "));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" AND ho_type in('S') "));
	else if (m_nPolicy == 0)
		szWhere.AppendFormat(_T(" AND ho_type not in('I','C','S') "));

	
	if (!m_szDeptKey.IsEmpty())
	{
		szWhere1.AppendFormat(_T(" AND pdeptid = '%s'"), m_szDeptKey);		
	}
	
	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
		{
			m_wndRoom.SetCurSel(i);
			if (!szRoom.IsEmpty())
				szRoom.AppendFormat(_T(", "));
			szRoom.AppendFormat(_T("%s"), m_wndRoom.GetCurrent(3));
		}
	}

	if (!szRoom.IsEmpty())
		szWhere1.AppendFormat(_T(" AND roomid in (%s)"), szRoom);	

	if(m_bKPL == TRUE)
		szWhere.AppendFormat(_T("AND groupid NOT IN ('B41', 'B45', 'B51', 'B42', 'B46', 'B52', 'B43', 'B47', 'B53', 'B44', 'B54')"));
	else
		szWhere.AppendFormat(_T("AND groupid IN ('B41', 'B45', 'B51', 'B42', 'B46', 'B52', 'B43', 'B47', 'B53', 'B44', 'B54')"));

	if(pMF->GetModuleID() == _T("SOM"))
		szPTTYC.Format(_T("   ho_qty * hfl_servprice        AS amount,"));
	else
		szPTTYC.Format(_T("   ho_qty * hfl_retprice        AS amount,"));

	if(m_bBNTYC)
		szWhere.AppendFormat(_T(" AND NVL(hd_isreq, 'N') = 'Y'"));
	if(m_bKBNTYC)
		szWhere.AppendFormat(_T(" AND NVL(hd_isreq, 'N') <> 'Y'"));

	if(m_bGiamDau)
		{
			szWhere1.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) = '500' "));
			
		}
	else
		{
			szWhere1.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) <> '500' "));
			
		}
	CDate iDate, eDate;
	iDate.ParseDate(m_szFromDate);
	eDate.ParseDate(m_szToDate);

	CString szField, szField2, szSum;
	szTemp.IsEmpty();
	
	while (iDate <= eDate)
	{
		int i = 0;
		for (iDate; iDate <= eDate; iDate++)
		{
			szTemp.Format(_T("%.4d/%.2d/%.2d"), iDate.GetYear(), iDate.GetMonth(), iDate.GetDay());
			szField.AppendFormat(_T("CASE WHEN TRUNC(ho_performdate) = TO_DATE('%s', 'YYYY-MM-DD') THEN ho_qty ELSE 0 END AS ngay%d, "), szTemp, i);			
			szSum.AppendFormat(_T("SUM(ngay%d) AS ngay%d, "), i, i);
			i++;
		}
	}

	szSQL.Format(_T(" SELECT") \
		_T(" docno, pdeptid, HMS_GETROOMNAME(pdeptid,roomid) as roomname,") \
		_T(" hcr_recordno AS record_no,") \
		_T(" get_patientname(docno) AS patient_name,") \
		_T(" extract(YEAR FROM hp_birthdate) AS yob,") \
		_T(" CASE WHEN ho_type NOT IN('I','C') AND hd_rank > 0 THEN") \
		_T(" (SELECT ss_vndesc FROM sys_sel WHERE ss_id = 'hms_rank' AND ss_code = hd_rank)||hp_workplace ELSE hd_cardno END extra_info,") \
		_T(" ho_desc AS pobject,") \
		_T(" operation_name,") \
		_T(" operation_name1, %s") \
		_T(" SUM(quantity) AS total,") \
		_T(" MIN(practitioner) AS practitioner,") \
		_T(" MIN(assistant) AS assistant,") \
		_T(" MIN(anethetist) AS anethetist,") \
		_T(" MIN(anethetist1) AS anethetist1") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ho_docno                 AS docno,") \
		_T("   hfl_name                      AS operation_name,") \
		_T("   ho_comment                    AS operation_name1,") \
		_T("   SUBSTR(hfl_groupid,1,3)       AS groupid, %s") \
		_T("   get_username(ho_practitioner) AS practitioner,") \
		_T("   get_username(ho_assistant)    AS assistant,") \
		_T("   get_username(ho_user4)        AS anethetist,") \
		_T("   get_username(ho_anesthetist)  AS anethetist1,") \
		_T("   ho_qty                        AS quantity,") \
		_T("   ho_qty * hfl_servprice        AS amount,") \
		_T("   ho_invoiceno                  AS invoiceno,") \
		_T("   ho_performdate                AS orderdate, pdeptid, roomid") \
		_T(" FROM") \
		_T("   (SELECT ho_docno,") \
		_T("     ho_comment,") \
		_T("     ho_practitioner,") \
		_T("     ho_assistant,") \
		_T("     ho_user4,") \
		_T("     ho_anesthetist,") \
		_T("     ho_qty,") \
		_T("     ho_invoiceno,") \
		_T("     ho_performdate,") \
		_T("     ho_itemid,") \
		_T("     CASE") \
		_T("       WHEN ho_pdeptid = 'B5'") \
		_T("       THEN ho_deptid") \
		_T("       ELSE ho_pdeptid") \
		_T("     END AS pdeptid,") \
		_T("     ho_deptid AS deptid,") \
		_T("     ho_roomid AS roomid") \
		_T("   FROM hms_operation") \
		_T("   WHERE ho_status <> 'O' ") \
		_T("   ) tbl1") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid  = ho_itemid)") \
		_T(" WHERE 1 = 1 %s") \
		_T(" ) tbl") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(docno = hd_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hd_patientno = hp_patientno)") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id = hd_object)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON(hcr_docno = hd_docno)") \
		_T(" LEFT JOIN hms_fee_invoice i") \
		_T(" ON(i.hfe_docno   = docno") \
		_T(" AND i.hfe_invoiceno = invoiceno)") \
		_T(" LEFT JOIN hms_fee_refund re") \
		_T(" ON(re.hfe_docno   = i.hfe_docno") \
		_T(" AND re.hfe_refidx = i.hfe_invoiceno)") \
		_T(" WHERE 1 = 1 %s ")
		_T(" GROUP BY") \
		_T(" docno,pdeptid, roomid,") \
		_T(" hcr_recordno,") \
		_T(" hp_birthdate,") \
		_T(" ho_type,") \
		_T(" hd_rank,") \
		_T(" hp_workplace,") \
		_T(" hd_cardno,") \
		_T(" operation_name,") \
		_T(" operation_name1,") \
		_T(" ho_desc") \
		_T(" ORDER BY docno"), szSum, szField, szWhere1, szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CEMOperationListEX::GetNameUser(CString UserName, CString LastName ){
	CString szValue,tmpStr;
	int nIndex=0;
	bool flag= true;
	CString szFind;
	szFind=_T(" ");
	if(UserName.GetLength() >0)
	{
		for(int i=1;i < UserName.GetLength();i++)
		{	
			tmpStr=UserName.Right(i);
			if(tmpStr.Find(szFind) == 1 && flag== true && i>2)
			{
				nIndex=i;
				flag=false;	
			}
		}
	}
	if(nIndex >0)
	{
		szValue=UserName.Right(nIndex-1);
	}
	else
	{
		szValue=UserName;
	}
	return szValue;
	

}
CString CEMOperationListEX::GetItemAbbreviation(CString szItemName, CString szExtraWord)
{
	CStringArray arr;
	CString szTemp;
	CString szValue;
	int nIndex = 0;
	szValue.Empty();

	for (int i = 0; i < szItemName.GetLength(); i++)
	{
		if (szItemName[i] == _T(' '))
		{
			szTemp = szItemName.Mid(nIndex, i - nIndex);
			arr.Add(szTemp);
			nIndex = i + 1;
		}
	}

	if (szItemName.GetLength() > 0)
	{
		szTemp = szItemName.Mid(nIndex, szItemName.GetLength() - nIndex);
		arr.Add(szTemp);
	}

	szTemp.Empty();
	LPTSTR str = new TCHAR[1];

	for (int i = 0; i < arr.GetSize(); i++)
	{
		szTemp = arr[i];

		if (szTemp.Left(1) != _T("Đ") && szTemp.Left(1) != _T("đ"))
		{
			UnMarkString(szTemp.Left(1), str);
			CString tmpStr = CString(str);
			szValue.AppendFormat(_T("%s"), tmpStr.Left(1));
		}
		else
			szValue.AppendFormat(_T("%s"), szTemp.Left(1));
	}

	delete[] str;

	if (szExtraWord.IsEmpty())
		return szValue;
	else
		return szValue + _T(" ") + szExtraWord;
}
