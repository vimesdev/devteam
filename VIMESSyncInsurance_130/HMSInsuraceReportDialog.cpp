#include "HMSInsuraceReportDialog.h"
#include "MainFrm.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuraceReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInsuraceReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuraceReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuraceReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuraceReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSInsuraceReportDialog *pVw = (CHMSInsuraceReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSInsuraceReportDialog *pVw = (CHMSInsuraceReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CHMSInsuraceReportDialog*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((CHMSInsuraceReportDialog*)pWnd)->OnInPatientSelect();
}
static void _OnGroupInsuranceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInsuraceReportDialog* )pWnd)->OnGroupInsuranceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupInsuranceSelendokFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnGroupInsuranceSelendok();
}
/*static void _OnGroupInsuranceSetfocusFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnGroupInsuranceKillfocus();
}*/
/*static void _OnGroupInsuranceKillfocusFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnGroupInsuranceKillfocus();
}*/
static long _OnGroupInsuranceLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuraceReportDialog *)pWnd)->OnGroupInsuranceLoadData();
}
/*static void _OnGroupInsuranceAddNewFnc(CWnd *pWnd){
	((CHMSInsuraceReportDialog *)pWnd)->OnGroupInsuranceAddNew();
}*/
static int _OnAddHMSInsuraceReportDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuraceReportDialog*)pWnd)->OnAddHMSInsuraceReportDialog();
} 
static int _OnEditHMSInsuraceReportDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuraceReportDialog*)pWnd)->OnEditHMSInsuraceReportDialog();
} 
static int _OnDeleteHMSInsuraceReportDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuraceReportDialog*)pWnd)->OnDeleteHMSInsuraceReportDialog();
} 
static int _OnSaveHMSInsuraceReportDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuraceReportDialog*)pWnd)->OnSaveHMSInsuraceReportDialog();
} 
static int _OnCancelHMSInsuraceReportDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuraceReportDialog*)pWnd)->OnCancelHMSInsuraceReportDialog();
} 
CHMSInsuraceReportDialog::CHMSInsuraceReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CHMSInsuraceReportDialog::~CHMSInsuraceReportDialog(){
}
void CHMSInsuraceReportDialog::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 430, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 85, 55);
	m_wndYear.Create(this,90, 30, 210, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 215, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 85, 85);
	m_wndFromDate.Create(this,90, 60, 210, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndPrint.Create(this, _T("&Print"), 265, 155, 345, 180);
	m_wndExport.Create(this, _T("&Export"), 350, 155, 430, 180);
	m_wndOutPatient.Create(this, _T("OutPatient"), 105, 90, 265, 115);
	m_wndInPatient.Create(this, _T("InPatient"), 270, 90, 425, 115);

	m_wndHasDatePayment.Create(this, _T("Lấy theo ngày thu"), 5, 120, 100, 145);
	m_wndGroupInsuranceLabel.Create(this, _T("Group Insurance"), 105, 120, 205, 145);
	m_wndGroupInsurance.Create(this,210, 120, 425, 145); 

}
void CHMSInsuraceReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndGroupInsurance.SetCheckValue(true);
	m_wndGroupInsurance.LimitText(1024);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndReportPeriod.InsertColumn(1, _T("Tháng QT"), CFMT_TEXT, 100);


	m_wndGroupInsurance.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndGroupInsurance.InsertColumn(1, _T("Name"), CFMT_TEXT, 100);

}
void CHMSInsuraceReportDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndGroupInsurance.SetEvent(WE_SELENDOK, _OnGroupInsuranceSelendokFnc);
	//m_wndGroupInsurance.SetEvent(WE_SETFOCUS, _OnGroupInsuranceSetfocusFnc);
	//m_wndGroupInsurance.SetEvent(WE_KILLFOCUS, _OnGroupInsuranceKillfocusFnc);
	m_wndGroupInsurance.SetEvent(WE_SELCHANGE, _OnGroupInsuranceSelectChangeFnc);
	m_wndGroupInsurance.SetEvent(WE_LOADDATA, _OnGroupInsuranceLoadDataFnc);
	//m_wndGroupInsurance.SetEvent(WE_ADDNEW, _OnGroupInsuranceAddNewFnc);

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = pMF->GetSysDate() + _T("00:01");
	m_szToDate = pMF->GetSysDate() + _T("23:59");
	SetMode(VM_EDIT);


}
void CHMSInsuraceReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
	DDX_Check(pDX, m_wndInPatient.GetDlgCtrlID(), m_bInPatient);
	DDX_TextEx(pDX, m_wndGroupInsurance.GetDlgCtrlID(), m_szGroupInsuranceKey);
	DDX_Check(pDX, m_wndHasDatePayment.GetDlgCtrlID(), m_bHasDatePayment);

}
void CHMSInsuraceReportDialog::UpdateJson(BOOL bSave){

}
void CHMSInsuraceReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInsuraceReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInsuraceReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bOutPatient=FALSE;
	m_bInPatient=FALSE;
	m_szGroupInsuranceKey.Empty();
	m_bHasDatePayment= FALSE;

}
int CHMSInsuraceReportDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CHMSInsuraceReportDialog::OnYearChange(){
	
} */
/*void CHMSInsuraceReportDialog::OnYearSetfocus(){
	
} */
/*void CHMSInsuraceReportDialog::OnYearKillfocus(){
	
} */
int CHMSInsuraceReportDialog::OnYearCheckValue(){
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
	return 0;
} 
void CHMSInsuraceReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuraceReportDialog::OnReportPeriodSelendok(){
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		CString tmpStr;
		CDate dte, date;

		UpdateData(true);

		date.ParseDate(pMF->GetSysDate());
		int nYear = date.GetYear();
		int nMonth = ToInt(m_szReportPeriodKey);

		if (nMonth > 0 && nMonth <= 12)
		{
			m_szFromDate.Format(_T("%.4d/%.2d/01 00:01"), nYear, nMonth);
			dte.ParseDate(m_szFromDate);
			m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
		}
		if (nMonth == 13)
		{
			m_szFromDate.Format(_T("%.4d/01/01 00:01"), nYear);
			tmpStr.Format(_T("%.4d/03/01"), nYear);
			dte.ParseDate(tmpStr);
			m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), nYear, dte.GetMonthLastDay());
		}
		if (nMonth == 14)
		{
			m_szFromDate.Format(_T("%.4d/04/01 00:01"), nYear);
			tmpStr.Format(_T("%.4d/06/01"), nYear);
			dte.ParseDate(tmpStr);
			m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), nYear, dte.GetMonthLastDay());
		}
		if (nMonth == 15)
		{
			m_szFromDate.Format(_T("%.4d/07/01 00:01"), nYear);
			tmpStr.Format(_T("%.4d/09/01"), nYear);
			dte.ParseDate(tmpStr);
			m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), nYear, dte.GetMonthLastDay());
		}
		if (nMonth == 16)
		{
			m_szFromDate.Format(_T("%.4d/10/01 00:01"), nYear);
			tmpStr.Format(_T("%.4d/10/01"), nYear);
			dte.ParseDate(tmpStr);
			m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
		}
		if (nMonth == 17)
		{
			m_szFromDate.Format(_T("%.4d/01/01 00:01"), nYear);
			tmpStr.Format(_T("%.4d/12/01"), nYear);
			dte.ParseDate(tmpStr);
			m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
		}

		UpdateData(false);
}
/*void CHMSInsuraceReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSInsuraceReportDialog::OnReportPeriodKillfocus(){
	
}*/
long CHMSInsuraceReportDialog::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%ld "), ToInt(m_szReportPeriodKey));
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
/*void CHMSInsuraceReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInsuraceReportDialog::OnFromDateChange(){
	
} */
/*void CHMSInsuraceReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSInsuraceReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSInsuraceReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSInsuraceReportDialog::OnToDateChange(){
	
} */
/*void CHMSInsuraceReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSInsuraceReportDialog::OnToDateKillfocus(){
	
} */
int CHMSInsuraceReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSInsuraceReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	if(m_nYear <=0) 
		_msg(_T("Yêu cầu chọn năm quyết toán "));

	if(ToInt(m_szReportPeriodKey) <=0) 
		_msg(_T("Yêu cầu chọn tháng quyết toán "));


	CString tmpStr;
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	TranslateString(_T("In mẫu 79 80 gửi BHYT"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	//menu.AppendMenu(MF_SEPARATOR);
	//TranslateString(_T("Export 20"), tmpStr);
	//menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);


	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.bottom+85, this);
	switch (nPos)
	{
	case 1:
		OnPrint7980_TT102();
	break;
	case 2:
		//OnExport20();
	break;
	}
	
} 
void CHMSInsuraceReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	if(m_nYear <=0) 
		_msg(_T("Yêu cầu chọn năm quyết toán "));

	if(ToInt(m_szReportPeriodKey) <=0) 
		_msg(_T("Yêu cầu chọn tháng quyết toán "));


	CString tmpStr;
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	TranslateString(_T("Xuất 79 80 từ dữ liệu XML"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Export 20"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Xuất 79 80 theo mẫu 102"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Xuất 79 80 theo mẫu 102( ARV theo mã bệnh B20.1 "), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);


	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.bottom+85, this);
	switch (nPos)
	{
	case 1:
		OnExport7980();
	break;
	case 2:
		OnExport20();
	break;
	case 3:
		OnExport7980_FromPrint();
	break;
	case 4:
		OnExport7980_FromPrint(true);
	break;
	}
	
	
} 
	void CHMSInsuraceReportDialog::OnOutPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSInsuraceReportDialog::OnInPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSInsuraceReportDialog::OnGroupInsuranceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuraceReportDialog::OnGroupInsuranceSelendok(){
	 
}
/*void CHMSInsuraceReportDialog::OnGroupInsuranceSetfocus(){
	
}*/
/*void CHMSInsuraceReportDialog::OnGroupInsuranceKillfocus(){
	
}*/
long CHMSInsuraceReportDialog::OnGroupInsuranceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndGroupInsurance.DeleteAllItems(); 
	int nCount = 0;
	m_wndGroupInsurance.AddItems(
			_T("BVBN"), 
			_T("Đăng ký tại viện"), NULL);
	m_wndGroupInsurance.AddItems(
			_T("NOI"), 
			_T("Nội tỉnh đến"), NULL);
	m_wndGroupInsurance.AddItems(
			_T("NGOAI"), 
			_T("Ngoại tỉnh"), NULL);
	m_wndGroupInsurance.AddItems(
			_T("TCPT"), 
			_T("Tất cả có phân tuyến"), NULL);
	return 0;
}
/*void CHMSInsuraceReportDialog::OnGroupInsuranceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSInsuraceReportDialog::OnAddHMSInsuraceReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInsuraceReportDialog::OnEditHMSInsuraceReportDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInsuraceReportDialog::OnDeleteHMSInsuraceReportDialog(){
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
 		OnCancelHMSInsuraceReportDialog();
 	}
	return 0;
}
int CHMSInsuraceReportDialog::OnSaveHMSInsuraceReportDialog(){
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
 		//OnHMSInsuraceReportDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInsuraceReportDialog::OnCancelHMSInsuraceReportDialog(){
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
int CHMSInsuraceReportDialog::OnHMSInsuraceReportDialogListLoadData(){
	return 0;
}
int CHMSInsuraceReportDialog::OnExport7980(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szFromDateToDate;
	CString szMonth, szYear;

	CDate dt1, dt2;
	dt1.ParseDate(m_szFromDate);
	dt2.ParseDate(m_szToDate);

	if (dt1.GetYear() == dt2.GetYear())
		szYear.Format(_T("%d"), dt1.GetYear());
	else
		szYear.Format(_T("%d"), dt2.GetYear());

	if (dt1.GetMonth() == dt2.GetMonth())
		szMonth.Format(_T("%d"), dt1.GetMonth());
	else
		szMonth.Format(_T("%d"), dt2.GetMonth());

	BeginWaitCursor();

	szSQL = GetSQLString7980();

	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return -1 ;
	}
	CExcel xls;

	xls.CreateSheet(1);
	xls.SetWorksheet(0);	

	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 25);
	xls.SetColumnWidth(3, 12);
	xls.SetColumnWidth(4, 6);
	xls.SetColumnWidth(5, 30);
	xls.SetColumnWidth(6, 16);
	xls.SetColumnWidth(7, 12);
	xls.SetColumnWidth(8, 16);
	xls.SetColumnWidth(9, 16);
	xls.SetColumnWidth(10, 12);
	xls.SetColumnWidth(11, 12);
	xls.SetColumnWidth(12, 12);
	xls.SetColumnWidth(13, 12);
	xls.SetColumnWidth(14, 12);
	xls.SetColumnWidth(15, 12);
	xls.SetColumnWidth(16, 12);
	xls.SetColumnWidth(17, 12);
	xls.SetColumnWidth(18, 12);
	xls.SetColumnWidth(19, 12);
	xls.SetColumnWidth(20, 12);
	xls.SetColumnWidth(21, 12);
	xls.SetColumnWidth(22, 12);
	xls.SetColumnWidth(23, 12);
	xls.SetColumnWidth(24, 12);
	xls.SetColumnWidth(25, 12);
	xls.SetColumnWidth(26, 12);
	xls.SetColumnWidth(27, 12);
	xls.SetColumnWidth(28, 12);
	xls.SetColumnWidth(29, 12);
	xls.SetColumnWidth(30, 12);
	xls.SetColumnWidth(31, 12);
	xls.SetColumnWidth(32, 12);
	xls.SetColumnWidth(33, 12);
	xls.SetColumnWidth(34, 12);
	xls.SetColumnWidth(35, 12);
	xls.SetColumnWidth(36, 12);
	xls.SetColumnWidth(37, 12);
	xls.SetColumnWidth(38, 12);
	xls.SetColumnWidth(39, 12);
	xls.SetColumnWidth(40, 12);

	int nRow = 0, nCol = 0;

	xls.SetCellText(0, nRow, _T("stt"), FMT_TEXT);	
	xls.SetCellText(1, nRow, _T("ma_bn"), FMT_TEXT);	
	xls.SetCellText(2, nRow, _T("ho_ten"), FMT_TEXT);	
	xls.SetCellText(3, nRow, _T("ngay_sinh"), FMT_TEXT);	
	xls.SetCellText(4, nRow, _T("gioi_tinh"), FMT_TEXT);	
	xls.SetCellText(5, nRow, _T("dia_chi"), FMT_TEXT);	
	xls.SetCellText(6, nRow, _T("ma_the"), FMT_TEXT);
	xls.SetCellText(7, nRow, _T("ma_dkbd"), FMT_TEXT);	
	xls.SetCellText(8, nRow, _T("gt_the_tu"), FMT_TEXT);
	xls.SetCellText(9, nRow, _T("gt_the_den"), FMT_TEXT);
	xls.SetCellText(10, nRow, _T("ma_benh"), FMT_TEXT);
	xls.SetCellText(11, nRow, _T("ma_benhkhac"), FMT_TEXT);	
	xls.SetCellText(12, nRow, _T("ma_lydo_vvien"), FMT_TEXT);
	xls.SetCellText(13, nRow, _T("ma_noi_chuyen"), FMT_TEXT);
	xls.SetCellText(14, nRow, _T("ngay_vao"), FMT_TEXT);	
	xls.SetCellText(15, nRow, _T("ngay_ra"), FMT_TEXT);
	xls.SetCellText(16, nRow, _T("so_ngay_dtri"), FMT_TEXT);
	xls.SetCellText(17, nRow, _T("ket_qua_dtri"), FMT_TEXT);
	xls.SetCellText(18, nRow, _T("tinh_trang_rv"), FMT_TEXT);	
	xls.SetCellText(19, nRow, _T("t_tongchi"), FMT_TEXT);
	xls.SetCellText(20, nRow, _T("t_xn"), FMT_TEXT);
	xls.SetCellText(21, nRow, _T("t_cdha"), FMT_TEXT);	
	xls.SetCellText(22, nRow, _T("t_thuoc"), FMT_TEXT);	
	xls.SetCellText(23, nRow, _T("t_mau"), FMT_TEXT);
	xls.SetCellText(24, nRow, _T("t_pttt"), FMT_TEXT);
	xls.SetCellText(25, nRow, _T("t_vtyt"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(26, nRow, _T("t_dvkt_tyle"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(27, nRow, _T("t_thuoc_tyle"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(28, nRow, _T("t_vtyt_tyle"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(29, nRow, _T("t_kham"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(30, nRow, _T("t_giuong"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(31, nRow, _T("t_vchuyen"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(32, nRow, _T("t_bntt"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(33, nRow, _T("t_bhtt"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(34, nRow, _T("t_bnctt"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(35, nRow, _T("t_ngoaids"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(36, nRow, _T("ma_khoa"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(37, nRow, _T("nam_qt"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(38, nRow, _T("thang_qt"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(39, nRow, _T("ma_khuvuc"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(40, nRow, _T("ma_loaikcb"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(41, nRow, _T("ma_cskcb"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(42, nRow, _T("t_nguonkhac"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(43, nRow, _T("ngay_ttoan"), FMT_TEXT | FMT_CENTER);

	int nIndex = 1;
	double nCost;
	CellFormat xlsFormat(&xls);
	xlsFormat.SetCellStyle(FMT_INTEGER);

	CDate date;

	while (!rs.IsEOF())
	{
		if(nRow == 65000)
		{   
			int i = 0;
			i++;
			tmpStr.Format(_T("Sheet %d"), i);

			xls.AddSheet(tmpStr);
			xls.SetWorksheet(i-1);
			nRow = 1;
		}
		nRow++;
		nCol=0;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sex"), nCost);
		xls.WriteNumber(nRow, nCol + 4, nCost, &xlsFormat);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("regplace"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("regdate"), tmpStr);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("expdate"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("mabenh"), tmpStr);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("reldisease"), tmpStr);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("lydo_vv"), nCost);
		xls.WriteNumber(nRow, nCol + 12, nCost, &xlsFormat);

		rs.GetValue(_T("machuyen"), tmpStr);
		xls.SetCellText(nCol + 13, nRow , tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngay_vao"), tmpStr);
		xls.SetCellText(nCol + 14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngay_ra"), tmpStr);
		xls.SetCellText(nCol + 15, nRow, tmpStr,FMT_TEXT);

		rs.GetValue(_T("ngaydtr"), nCost);
		xls.WriteNumber(nRow, nCol + 16, nCost, &xlsFormat);

		rs.GetValue(_T("ket_qua_dtri"), tmpStr);
		xls.SetCellText(nCol + 17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tinh_trang_rv"), tmpStr);
		xls.SetCellText(nCol + 18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("t_tongchi"), nCost);
		xls.WriteNumber(nRow, nCol + 19, nCost, &xlsFormat);

		rs.GetValue(_T("testfee"), nCost);
		xls.WriteNumber(nRow, nCol + 20, nCost, &xlsFormat);

		rs.GetValue(_T("pacsfee"), nCost);
		xls.WriteNumber(nRow, nCol + 21, nCost, &xlsFormat);

		rs.GetValue(_T("drugfee"), nCost);
		xls.WriteNumber(nRow, nCol + 22, nCost, &xlsFormat);

		rs.GetValue(_T("bloodfee"), nCost);
		xls.WriteNumber(nRow, nCol + 23, nCost, &xlsFormat);

		rs.GetValue(_T("normtechfee"), nCost);
		xls.WriteNumber(nRow, nCol + 24, nCost, &xlsFormat);

		rs.GetValue(_T("materialfee"), nCost);
		xls.WriteNumber(nRow, nCol + 25, nCost, &xlsFormat);

		rs.GetValue(_T("t_dvkt_tyle"), nCost);
		xls.WriteNumber(nRow, nCol + 26, nCost, &xlsFormat);

		rs.GetValue(_T("t_thuoc_tyle"), nCost);
		xls.WriteNumber(nRow, nCol + 27, nCost, &xlsFormat);

		rs.GetValue(_T("t_vtth_tyle"), nCost);
		xls.WriteNumber(nRow, nCol + 28, nCost, &xlsFormat);

		rs.GetValue(_T("examfee"), nCost);
		xls.WriteNumber(nRow, nCol + 29, nCost, &xlsFormat);

		rs.GetValue(_T("bedfee"), nCost);
		xls.WriteNumber(nRow, nCol + 30, nCost, &xlsFormat);

		rs.GetValue(_T("transportfee"), nCost);
		xls.WriteNumber(nRow, nCol + 31, nCost, &xlsFormat);

		rs.GetValue(_T("difpaid"), nCost);
		xls.WriteNumber(nRow, nCol + 32, nCost, &xlsFormat);

		rs.GetValue(_T("inspaid"), nCost);
		xls.WriteNumber(nRow, nCol + 33, nCost, &xlsFormat);

		rs.GetValue(_T("patpaid"), nCost);
		xls.WriteNumber(nRow, nCol + 34, nCost, &xlsFormat);

		rs.GetValue(_T("t_ngoaids"), nCost);
		xls.WriteNumber(nRow, nCol + 35, nCost, &xlsFormat);

		rs.GetValue(_T("ma_khoa"), tmpStr);
		xls.SetCellText(nCol + 36, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("nam_qt"), tmpStr);
		nCost = ToDouble(tmpStr);
		xls.WriteNumber(nRow, nCol + 37, nCost, &xlsFormat);
		
		rs.GetValue(_T("thang_qt"), tmpStr);
		nCost = ToDouble(tmpStr);
		xls.WriteNumber(nRow, nCol + 38, nCost, &xlsFormat);

		rs.GetValue(_T("ma_khuvuc"), tmpStr);
		xls.SetCellText(nCol + 39, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ma_loaikcb"), tmpStr);
		xls.SetCellText(nCol + 40, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ma_cskcb"), tmpStr);
		tmpStr=pMF->m_szCompany;
		xls.SetCellText(nCol + 41, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("t_nguonkhac"), nCost);
		xls.WriteNumber(nRow, nCol + 42, nCost, &xlsFormat);

		rs.GetValue(_T("ngay_tt"), tmpStr);
		xls.SetCellText(nCol + 43, nRow, tmpStr, FMT_TEXT);

		rs.MoveNext();
	}
		
	EndWaitCursor();	if(m_bOutPatient)
		tmpStr.Format(_T("Exports\\7980a_%s_%s%s_file79.xls"), pMF->m_szCompany, m_szFromDate.Left(4), m_szFromDate.Mid(5,2));
	if(m_bInPatient)
		tmpStr.Format(_T("Exports\\7980a_%s_%s%s_file80.xls"), pMF->m_szCompany, m_szFromDate.Left(4), m_szFromDate.Mid(5,2));
	xls.Save(tmpStr);
	return 0;
}
int CHMSInsuraceReportDialog::OnExport20(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	CString tmpStr, szTemp, szFromDateToDate;
	CString szMonth, szYear;

	CDate dt1, dt2;
	dt1.ParseDate(m_szFromDate);
	dt2.ParseDate(m_szToDate);

	if (dt1.GetYear() == dt2.GetYear())
		szYear.Format(_T("%d"), dt1.GetYear());
	else
		szYear.Format(_T("%d"), dt2.GetYear());

	if (dt1.GetMonth() == dt2.GetMonth())
		szMonth.Format(_T("%d"), dt1.GetMonth());
	else
		szMonth.Format(_T("%d"), dt2.GetMonth());	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 7);	xls.SetColumnWidth(1, 12);	xls.SetColumnWidth(2, 15);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 15);	xls.SetColumnWidth(5, 20);	xls.SetColumnWidth(6, 10);	xls.SetColumnWidth(7, 12);	xls.SetColumnWidth(8, 15);	xls.SetColumnWidth(9, 20);	xls.SetColumnWidth(10, 25);	xls.SetColumnWidth(11, 15);	xls.SetColumnWidth(12, 10);	xls.SetColumnWidth(13, 10);	xls.SetColumnWidth(14, 10);	xls.SetColumnWidth(15, 10);	xls.SetColumnWidth(16, 10);	xls.SetColumnWidth(17, 20);	xls.SetColumnWidth(18, 7);	tmpStr.Format(_T("Tên cơ sở KCB:%s"),pMF->m_szHealthService);
	xls.SetCellText(0, 0, tmpStr,FMT_TEXT ,true);
	tmpStr.Format(_T("Mã số:%s"),pMF->m_szHospitalName);
	xls.SetCellText(0, 1, tmpStr,FMT_TEXT,true);	xls.SetCellText(0, 3, _T("THỐNG KÊ TỔNG HỢP THUỐC THANH TOÁN BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 8, _T("(1)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 6, _T("Thông tin kết quả trúng thầu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 7, _T("Thông tin thầu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 8, _T("(2)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 7, _T("Ngày hiệu lực"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 8, _T("(3)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 6, _T("STT theo DMT của BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 8, _T("(4)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 6, _T("Tên hoạt chất"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 8, _T("(5)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 6, _T("Tên thuốc thành phẩm"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 8, _T("(6)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 6, _T("Đường dùng, dạng bào chế"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 8, _T("(7)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 6, _T("Hàm lượng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 8, _T("(8)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 6, _T("SĐK hoặc số GPNK"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 8, _T("(9)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 6, _T("Dạng trình bày"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 8, _T("(10)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(10, 6, _T("Hãng sản xuất"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(10, 8, _T("(11)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(11, 6, _T("Nước sản xuất"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(11, 8, _T("(12)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(12, 6, _T("Đơn vị tính"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(12, 8, _T("(13)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(13, 6, _T("Đơn giá mua vào"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(13, 8, _T("(14)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(14, 6, _T("Giá thanh toán BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(14, 8, _T("(15)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 6, _T("Số lượng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 7, _T("Ngoại trú"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 8, _T("(16)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(16, 6, _T("Tỷ lệ thanh toán"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(16, 8, _T("(18)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 6, _T("Thành tiền"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 8, _T("(19)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(18, 6, _T("Mã cơ sở KCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(18, 8, _T("(20)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	CDate dte, date;
	int nMonth = ToInt(m_szReportPeriodKey);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(m_szFromDate.Left(4));
	if (nMonth == 13)
	{
		tmpStr.Format(_T("  Quý I NĂM %d"), m_nYear);
		xls.SetCellText(0, 4, tmpStr,FMT_TEXT|FMT_CENTER,true,12);
	}
	if (nMonth == 14)
	{
		tmpStr.Format(_T("  Quý II NĂM %d"), m_nYear);
		xls.SetCellText(0, 4, tmpStr,FMT_TEXT|FMT_CENTER,true,12);

	}
	if (nMonth == 15)
	{
		tmpStr.Format(_T("Quý III NĂM %d"), m_nYear);
		xls.SetCellText(0, 4, tmpStr,FMT_TEXT|FMT_CENTER,true,12);
	}
	if (nMonth == 16)
	{
		tmpStr.Format(_T(" Quý IV NĂM %d"), m_nYear);
		xls.SetCellText(0, 4, tmpStr,FMT_TEXT|FMT_CENTER,true,12);
	}
	if (nMonth == 17)
	{
		tmpStr.Format(_T(" NĂM %d"), m_nYear);
		xls.SetCellText(0, 4, tmpStr,FMT_TEXT|FMT_CENTER,true,12);
	}

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01 00:01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());

		tmpStr.Format(_T(" Tháng %d NĂM %d"),nMonth, m_nYear);
		xls.SetCellText(0, 4, tmpStr,FMT_TEXT|FMT_CENTER,true,12);
	}	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(3, 3, 0, 11);	xls.SetMerge(4, 4, 0, 11);	xls.SetMerge(6, 7, 0, 0);	xls.SetMerge(6, 6, 1, 2);	xls.SetMerge(6, 7, 3, 3);	xls.SetMerge(6, 7, 4, 4);	xls.SetMerge(6, 7, 5, 5);	xls.SetMerge(6, 7, 6, 6);	xls.SetMerge(6, 7, 7, 7);	xls.SetMerge(6, 7, 8, 8);	xls.SetMerge(6, 7, 9, 9);	xls.SetMerge(6, 7, 10, 10);	xls.SetMerge(6, 7, 11, 11);	xls.SetMerge(6, 7, 12, 12);	xls.SetMerge(6, 7, 13, 13);	xls.SetMerge(6, 7, 14, 14);	xls.SetMerge(6, 7, 16, 16);	xls.SetMerge(6, 7, 17, 17);	xls.SetMerge(6, 7, 18, 18);	if(m_bOutPatient && !m_bInPatient)
		szWhere.AppendFormat(_T(" and ma_loai_kcb in (1,2) "));
	else if(m_bInPatient && !m_bOutPatient)
		szWhere.AppendFormat(_T(" and ma_loai_kcb =3 "));
	else if((m_bOutPatient && m_bInPatient) || (!m_bOutPatient && !m_bInPatient) )
		szWhere.AppendFormat(_T(" and ma_loai_kcb in (1,2,3) "));	if(m_bHasDatePayment)		szWhere.AppendFormat(_T(" and nam_qt=%d AND thang_qt =%d "),m_nYear, ToInt(m_szReportPeriodKey) );	else		szWhere.AppendFormat(_T(" and to_timestamp(ngay_ttoan,'YYYYMMDDHH24MI') between timestamp '%s' and timestamp '%s' "),m_szFromDate, m_szToDate);	szSQL.Format(_T(" SELECT") \
		_T("        tt_thau,") \
		_T("        ma_thuoc,") \
		_T("        ten_thuoc,") \
		_T("        duong_dung,") \
		_T("        ham_luong,") \
		_T("        so_dang_ky,") \
		_T("        don_vi_tinh,") \
		_T("        don_gia,") \
		_T("        so_luong,") \
		_T("        tyle_tt,") \
		_T("        sum(thanh_tien) AS thanh_tien,") \
		_T("        '12096' AS ma_cskcb") \
		_T(" FROM bh_thongtinchitiet_tonghop a,") \
		_T("      bh_bang_ctthuoc b") \
		_T(" WHERE 1=1 ") \
		_T("    %s") \
		_T("   AND a.ma_lk = b.ma_lk") \
		_T(" GROUP BY ") \
		_T("          tt_thau,") \
		_T("          ma_thuoc,") \
		_T("          ten_thuoc,") \
		_T("          duong_dung,") \
		_T("          ham_luong,") \
		_T("          so_dang_ky,") \
		_T("          don_vi_tinh,") \
		_T("          don_gia,") \
		_T("          so_luong,") \
		_T("          tyle_tt,") \
		_T("          ma_cskcb") \
		_T(" ORDER BY ") \
		_T("          ten_thuoc"),szWhere);	_fmsg(_T("%s"),szSQL);	rs.ExecSQL(szSQL);	nRow = 10;	nCol = 0;	CString szOldLine, szNewLine;
	long double grpCost=0.0;
	long double ttlCost=0.0;
	double cost = 0;
	int qty=0;
	int nItem = 1;	while(!rs.IsEOF()){		rs.GetValue(_T("ma_loai"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{	
			if(grpCost > 0)
			{			
				CString szField, szAmount;
				nRow ++;
				TranslateString(_T("Cộng:"), szAmount);												
				xls.SetCellMergedColumns(1,nRow,10);
				xls.SetCellText(1, nRow, szAmount, FMT_TEXT,true,10);
				tmpStr.Format(_T("%.2f"), grpCost);
				xls.SetCellText(17, nRow, tmpStr, FMT_NUMBER1,true,10);
				ttlCost += grpCost;
				grpCost = 0;								
				nItem=1;
			}
			nRow ++;
			CString szField, szAmount;			
			xls.SetCellMergedColumns(0,nRow,11);			
			xls.SetCellText(0, nRow, szNewLine, FMT_TEXT,true,10);
			szOldLine = szNewLine;
			nItem=1;		}		nRow ++;		tmpStr.Format(_T("%d"), nItem++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING, false);
		rs.GetValue(_T("tt_thau"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ngaycongbo"), tmpStr);		xls.SetCellText(nCol+2, nRow, CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm));		rs.GetValue(_T("ma_thuoc"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("genericid"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ten_thuoc"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("tenduongdung"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ham_luong"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("so_dang_ky"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("donggoi"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_hangsx"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_nuocsx"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("don_vi_tinh"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("don_gia"), tmpStr);		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("so_luong"), tmpStr);		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("tyle_tt"), tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("thanh_tien"), cost);				
		tmpStr.Format(_T("%.2f"), cost);
		grpCost+=cost;
		xls.SetCellText(17,nRow,tmpStr, FMT_NUMBER1, false, 10);		rs.GetValue(_T("ma_cskcb"), tmpStr);		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);		rs.MoveNext();	}	ttlCost += grpCost;
	if(grpCost > 0)
	{
		nRow++;
		TranslateString(_T("Cộng:"), tmpStr);		
		xls.SetCellMergedColumns(1,nRow,10);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11);
		tmpStr.Format(_T("%.2f"), grpCost);
		xls.SetCellText(17, nRow, tmpStr, FMT_NUMBER1,true,11);		
	}
	if(ttlCost > 0)
	{
		nRow++;
		TranslateString(_T("Total Amount"), tmpStr);		
		xls.SetCellMergedColumns(0,nRow,11);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true,12);
		tmpStr.Format(_T("%.2f"), ttlCost);
		xls.SetCellText(17, nRow, tmpStr, FMT_NUMBER1,true,12);		
	}	EndWaitCursor();	xls.Save(_T("Exports\\BaocaoBHYT20.xls"));
	return 0;
}
CString CHMSInsuraceReportDialog::GetSQLString7980()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
		CString szSQL, szWhere;
		CString szExamRoom, szUserReceiver;
		CString szOrder;

	
		if(m_bOutPatient && !m_bInPatient)
			szWhere.AppendFormat(_T(" and ma_loai_kcb in (1,2) "));
		else if(m_bInPatient && !m_bOutPatient)
			szWhere.AppendFormat(_T(" and ma_loai_kcb in (3,9) "));
		else if((m_bOutPatient && m_bInPatient) || (!m_bOutPatient && !m_bInPatient) )
			szWhere.AppendFormat(_T(" and ma_loai_kcb in (1,2,3,9) "));
	if(m_bHasDatePayment)		szWhere.AppendFormat(_T(" and nam_qt=%d AND thang_qt =%d "),m_nYear, ToInt(m_szReportPeriodKey) );	else		szWhere.AppendFormat(_T(" and to_timestamp(ngay_ttoan,'YYYYMMDDHH24MI') between timestamp '%s' and timestamp '%s' "),m_szFromDate, m_szToDate);
		
			szSQL.Format(_T(" SELECT ma_bn as docno,") \
	_T(" 	ho_ten as pname,") \
	_T(" 	ngay_sinh as birthyear,") \
	_T(" 	gioi_tinh as sex,") \
	_T(" 	dia_chi as address,") \
	_T(" 	ma_the  as cardno,") \
	_T(" 	ma_dkbd as regplace,") \
	_T(" 	gt_the_tu as regdate,") \
	_T(" 	gt_the_den as expdate, ") \
	_T(" 	ma_benh as mabenh,") \
	_T(" 	ma_benhkhac as reldisease,") \
	_T(" 	ma_lydo_vvien as lydo_vv,") \
	_T(" 	ma_noi_chuyen AS machuyen,") \
	_T(" 	ngay_vao AS ngay_vao,") \
	_T(" 	   ngay_ra    AS ngay_ra,") \
	_T(" 	 so_ngay_dtri AS ngaydtr,") \
	_T(" 	  ket_qua_dtri  as ket_qua_dtri, ") \
	_T(" 	tinh_trang_rv,") \
	_T(" 	sum(cost) as t_tongchi,") \
	_T(" 	round(sum(testfee),2) as testfee,") \
	_T(" 	round(sum(pacsfee),2) as pacsfee,") \
	_T(" 	round(sum(drugfee),2)  as drugfee,") \
	_T(" 	round(sum(bloodfee),2) as bloodfee,") \
	_T(" 	round(sum(normtechfee),2) + round(sum(hitechfee),2)  as normtechfee,") \
	_T(" 	 round(sum(materialfee),2) as materialfee,") \
	_T(" 	 round(sum(dvkt_tyle),2) as t_dvkt_tyle,") \
	_T(" 	 round(sum(drugfeek), 0) as t_thuoc_tyle,") \
	_T(" 	 round(sum(vtyt_tyle), 0) as t_vtth_tyle,") \
	_T(" 	 round(sum(examfee),2) as examfee,") \
	_T(" 	 round(sum(bedfee),2) as bedfee,") \
	_T(" 	 round(sum(transportfee),2) as transportfee,") \
	_T(" 	 round(sum(patpaid),2) as patpaid,") \
	_T(" 	 round(sum(discount),2) as inspaid,round(sum(difpaid),2) as difpaid,") \
	_T("	t_nguonkhac, ") \
	_T(" 	 t_ngoaids,") \
	_T(" 	 ma_khoa,") \
	_T(" 	 nam_qt,") \
	_T(" 	substr(ngay_ttoan,5,2) as thang_qt,") \
	_T(" 	ngay_ttoan as ngay_tt, ") \
	_T(" 	ma_khuvuc,") \
	_T(" 	 ma_loai_kcb AS ma_loaikcb,") \
	_T(" 	ma_cskcb,") \
	_T("       1 as noi_ttoan,") \
	_T("       1 as giam_dinh,") \
	_T("       0 as t_xuattoan,") \
	_T("       ' ' as lydo_xt,") \
	_T("       0 as t_datuyen,") \
	_T("       0 as t_vuottran,") \
	_T("        case when hd_insline ='Y' then 1 else 0 end as hdline,") \
	_T(" 	hc_line as insline,") \
	_T(" 		(select ss_default from sys_sel where ss_id='hms_insline' and cast(ss_code as integer)=hc_line) as linename,") \
	_T(" 	(select hig_group from hms_insurance_group where hig_idx=hc_groupid) as insgroup  ") \
	_T("  FROM") \
	_T("  (") \
	_T(" 		select ") \
	_T(" 		ma_bn,ho_ten,") \
	_T(" 		ngay_sinh,") \
	_T(" 		gioi_tinh,") \
	_T(" 		dia_chi,") \
	_T(" 		ma_the,ma_dkbd,gt_the_tu,gt_the_den,ma_benhkhac,ma_benh,ma_lydo_vvien,") \
	_T(" 		ma_noi_chuyen,ngay_vao,ngay_ra,so_ngay_dtri,ket_qua_dtri,tinh_trang_rv,") \
	_T(" 		a.ma_khoa as ma_khoa,nam_qt, thang_qt,ngay_ttoan,ma_khuvuc,ma_loai_kcb,ma_cskcb,") \
	_T(" 		case when ma_nhom in ('4','5') then thanh_tien else 0 end as drugfee,") \
	_T(" 		case when ma_nhom in ('6') then thanh_tien else 0 end as drugfeek,") \
	_T(" 		case when ma_nhom in ('7','17') then thanh_tien else 0 end as  bloodfee,") \
	_T(" 		case when ma_nhom in ('1') then thanh_tien else 0 end as  testfee,") \
	_T(" 		case when ma_nhom in ('2','3') then thanh_tien else 0 end as  pacsfee,") \
	_T(" 		case when ma_nhom in ('8','18') and hfl_hitech <>'Y' then thanh_tien else 0 end as  normtechfee,") \
	_T(" 		case when ma_nhom in ('8','18') and hfl_hitech = 'Y' then thanh_tien else 0 end as  hitechfee,") \
	_T(" 		case when ma_nhom in ('9') then thanh_tien else 0 end as  dvkt_tyle,") \
	_T(" 		case when ma_nhom in ('10') then thanh_tien else 0 end as  materialfee,") \
	_T(" 		case when ma_nhom in ('11') then thanh_tien else 0 end as  vtyt_tyle,") \
	_T(" 		case when ma_nhom in ('13') then thanh_tien else 0 end as  examfee,") \
	_T(" 		case when ma_nhom in ('12') then thanh_tien else 0 end as  transportfee,") \
	_T(" 		case when ma_nhom in ('15','14') then thanh_tien else 0 end as  bedfee,") \
	_T(" 		case when ma_nhom not in ('1','2','3','4','5','6','7','8','9','10','11','12','13','15','14','17','18') then thanh_tien else 0 end as  otherfee,") \
	_T(" 		 thanh_tien as cost,") \
	_T(" 		 b.t_bhtt as discount,") \
	_T(" 		 b.t_bncct as patpaid,") \
	_T(" 		b. t_bntt as difpaid,") \
	_T(" 		 b.t_bncct+ b.t_bntt  as patdebt,") \
	_T(" 		 a.t_ngoaids as t_ngoaids,		") \
	_T("		a.t_nguonkhac as t_nguonkhac ") \
	_T(" 	 from bh_thongtinchitiet_tonghop  a   ,") \
	_T(" 	      bh_view   b") \
	_T(" 	      LEFT JOIN hms_fee_list ON hfl_feeid= ma_dich_vu_cs	      ") \
	_T("   WHERE 1=1  %s  ") \
	_T("   and a.ma_lk = b.ma_lk and trangthaigui <>'D' ") \
	_T("   )  tbl") \
	_T("   LEFT JOIN hms_doc ON (hd_docno= cast(ma_bn as integer))") \
	_T("   LEFT JOIN hms_card on (hc_cardno= hd_cardno and hc_patientno= hd_patientno and hc_idx= hd_cardidx)") \
	_T("   group by ") \
	_T(" 		ma_bn,ho_ten,") \
	_T(" 		ngay_sinh,") \
	_T(" 		gioi_tinh,") \
	_T(" 		dia_chi,") \
	_T(" 		ma_the,ma_dkbd,gt_the_tu,gt_the_den,ma_benhkhac,ma_benh,ma_lydo_vvien,") \
	_T(" 		ma_noi_chuyen,ngay_vao,ngay_ra,so_ngay_dtri,ket_qua_dtri,tinh_trang_rv,") \
	_T(" 		 ma_khoa,nam_qt, thang_qt,ngay_ttoan,ma_khuvuc,ma_loai_kcb,ma_cskcb,t_ngoaids,t_nguonkhac,") \
	_T(" 		 hd_insline,hc_line,hc_groupid"),szWhere);
		_msg(_T("%s"),szSQL);
		return szSQL;
	
}

void CHMSInsuraceReportDialog::OnPrint7980_TT102()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL;
	CString szWhere, szInpatientCost, szUserReceiver;
	CString szReportPeriod;
	TCHAR *lszLine[] ={_T("I. NGƯƠI BỆNH ĐKBĐ TẠI CƠ SỞ KCB "), _T("II. NGƯỜI BỆNH NỘI TỈNH ĐẾN"), _T("III. NGƯỜI BỆNH NGOẠI TỈNH ĐẾN")};
	
	szSQL= GetSQLString_print7980();
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}
	//HF_BANGKETHANHTOAN_MAU80A//
	if(!rpt.Init(_T("Reports/HMS/HF_BANGKETHANHTOAN_MAU80A.RPT")) )
		return;

	//StringUpper(pMF->m_szSeviceName, tmpStr);
	//rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szSeviceName);
	StringUpper(pMF->m_szCompanyName, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("COMPANYID"), pMF->m_szCompany);

	rpt.GetReportHeader()->SetValue(_T("ObjectGroup"), _T(""));
	rpt.GetReportHeader()->SetValue(_T("ReportPeriod"), szReportPeriod);
	rs.GetValue(_T("invoiceno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd,ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;
	CString szNewOfLine, szOldOfLine,szSumOfline;
	CReportSection* rptDetail;
	long double grpCost[30];
	long double grpLine[30];
	long double ttlCost[30];
	long double	grpOfLine[30];
	double cost = 0;
	for (int i =0; i < 30; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
		grpOfLine[i] =0;
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("ma_loaikcb"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			CString szField,szAmount;
			if (grpOfLine[11] > 0)
			{
				TranslateString(_T("Cộng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =11; i < 29; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}

			if (grpCost[11] > 0)
			{					
				TranslateString(_T("Total Line"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szLineName);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i = 11; i < 29; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					ttlCost[i] += grpCost[i];
					grpLine[i] = 0;
					grpCost[i] = 0;	
				}
			}

			if (grpLine[11] > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s=(a+b)) "),szAmount , szOldGroup);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =11; i < 29; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpLine[i] = 0;
				}
			}
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(12);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(false);
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));	
			rs.GetValue(_T("linename"), szLineName);
			rptDetail->SetValue(_T("InsuranceLine"), szLineName + _T(". ") + pMF->GetSelectionString(_T("ma_loai_kcb"), szNewLine));
			szOldLine = szNewLine;
			szOldOfLine = _T("xxxx");
			szNewGroup.Empty();
			szOldGroup.Empty();
			nIndex=1;
		}
		rs.GetValue(_T("objectbh"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			CString szField, szAmount;
			if(grpOfLine[11] > 0)
			{
				TranslateString(_T("Cộng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i = 11; i < 29; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}
			if (grpLine[11] > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s=(a+b)) "),szAmount , szOldGroup);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i = 11; i < 29; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpLine[i] = 0;
				}
			}
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(10);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InsuranceLine"),rs.GetValue(_T("objectbhname")) +_T(". ") + pMF->GetSelectionString(_T("ma_loai_doituong"), szNewGroup));
			szOldGroup = szNewGroup;
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}

		rs.GetValue(_T("insline"), szNewOfLine);
		if (szNewOfLine != szOldOfLine && !szNewOfLine.IsEmpty())
		{
			CString szField,szAmount;
			if (grpOfLine[11] > 0)
			{
				TranslateString(_T("Cộng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i = 11; i < 29; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}
			
			if (szNewOfLine == _T("1") )
			{
				tmpStr.Format(_T("%s"), lszLine[0]);
				szSumOfline = _T("I");
			}
			else if (szNewOfLine == _T("2") )
			{
				tmpStr.Format(_T("%s"), lszLine[1]);
				szSumOfline = _T("II");
			}
			else

			{
				tmpStr.Format(_T("%s"), lszLine[2]);
				szSumOfline = _T("III");
			}
			
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(10);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InsuranceLine"),tmpStr);
			szOldOfLine = szNewOfLine;			
			nIndex=1;
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("birthyear"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("mabenh"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		
		tmpStr = CDateTime::Convert(rs.GetValue(_T("ngay_vao")), yyyymmdd|hhmm, ddmmyyyy|hhmm);
		rptDetail->SetValue(_T("8"), tmpStr);

		tmpStr = CDateTime::Convert(rs.GetValue(_T("ngay_ra")), yyyymmdd|hhmm, ddmmyyyy|hhmm);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("ngaydtr"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		

		rs.GetValue(_T("t_tongchi"), cost);
		grpCost[11] += cost;
		grpLine[11] += cost;
		grpOfLine[11] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);


		
		rs.GetValue(_T("examfee"), cost);
		grpCost[12] += cost;
		grpLine[12] += cost;
		grpOfLine[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("bedfee"), cost);
		grpCost[13] += cost;
		grpLine[13] += cost;
		grpOfLine[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.GetValue(_T("testfee"), cost);
		grpCost[14] += cost;
		grpLine[14] += cost;
		grpOfLine[14] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);



		rs.GetValue(_T("pacsfee"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		grpOfLine[15] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[16] += cost;
		grpLine[16] += cost;
		grpOfLine[16] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);				

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		grpOfLine[17] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);
		
		rs.GetValue(_T("drugfee"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		grpOfLine[18] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);

		rs.GetValue(_T("materialfee"), cost);
		grpCost[19] += cost;
		grpLine[19] += cost;
		grpOfLine[19] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);		

		rs.GetValue(_T("transportfee"), cost);
		grpCost[20] += cost;
		grpLine[20] += cost;
		grpOfLine[20] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr);
		
		rs.GetValue(_T("inspaid"), cost);
		grpCost[21] += cost;
		grpLine[21] += cost;
		grpOfLine[21] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);

		rs.GetValue(_T("patpaid"), cost);;
		grpCost[24] += cost;
		grpLine[24] += cost;
		grpOfLine[24] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("24"), tmpStr);		
		
		rs.GetValue(_T("difpaid"), cost);
		grpCost[25] += cost;
		grpLine[25] += cost;
		grpOfLine[25] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("25"), tmpStr);



		rs.GetValue(_T("t_nguonkhac"), cost);
		grpCost[27] += cost;
		grpLine[27] += cost;
		grpOfLine[27] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("27"), tmpStr);

		rs.GetValue(_T("t_ngoaids"), cost);
		grpCost[28] += cost;
		grpLine[28] += cost;
		grpOfLine[28] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("28"), tmpStr);
		
		rs.MoveNext();
	}
	for (int i = 0; i < 29; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	
	if (grpOfLine[11] > 0)
	{
		CString szField,szAmount;
		TranslateString(_T("Cộng"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"),szAmount , szSumOfline);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );
		for (int i = 11; i < 29; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpLine[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}	
	}

	if (grpLine[11] > 0)
	{
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s=(a+b))"),szAmount , szOldGroup);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );
		for (int i = 11; i < 29; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpLine[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}	
	}

	if(grpCost[11] > 0)
	{		
		CString szField, szAmount;
		TranslateString(_T("Total Line"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"),szAmount , szLineName);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );
		for (int i = 11; i < 29; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}
	if(ttlCost[11] > 0)
	{
		CString szField, szAmount;
		TranslateString(_T("Total Amount:"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		for (int i = 11; i < 29; i++)
		{
			
			szField.Format(_T("S%d"), i);
			FormatCurrency(ttlCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);		
		}

	}
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);


	CString szSumInWord;
	tmpStr.Format(_T("%.0f"), ttlCost[21]);
	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng.");
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
	
	
	rpt.PrintPreview();
	

	EndWaitCursor();


	return;
}

CString CHMSInsuraceReportDialog::GetSQLString_print7980(bool bUseIcd10)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
		CString szSQL, szWhere;
		CString szExamRoom, szUserReceiver;
		CString szOrder;
		CRecord rs(&pMF->m_db);
		CString szTWTT;

		szSQL.Format(_T("select count(*) from sys_sel where ss_id='ma_loai_kcb' "));
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() <=0)
		{
			szSQL.Format(_T(" INSERT INTO sys_sel VALUES ('ma_loai_doituong', '0', 'Đối tượng theo nghị định 146', '', null, '0', 'Y'); ") \
			_T("	INSERT INTO sys_sel VALUES ('ma_loai_doituong', '1', 'Đối tượng theo nghị định 70', '', null, '0', 'Y');  ") \
			_T("	INSERT INTO sys_sel VALUES ('ma_loai_kcb', '1', 'Khám, chữa bệnh ngoại trú', '', null, '0', 'Y');  ") \
			_T(" INSERT INTO sys_sel VALUES ('ma_loai_kcb', '2', 'Điều trị nội trú', '', null, '0', 'Y'); "));
			rs.ExecSQL(szSQL);
		}

		CString szCompany;
		szSQL.Format(_T("SELECT hf_hospitalidinsline FROM hms_config WHERE hf_hospitalidinsline IS NOT NULL"));
		rs.ExecSQL(szSQL);
		
		rs.GetValue(_T("hf_hospitalidinsline"), szCompany);

		if(m_bOutPatient)
			szWhere.Format(_T(" and ma_loai_kcb in (1,2) "));
		if(m_bInPatient)
			szWhere.Format(_T(" and ma_loai_kcb =3 "));

		if((m_bOutPatient && m_bInPatient) || (!m_bOutPatient && !m_bInPatient  ) )
			szWhere.Format(_T(" and ma_loai_kcb in (1,2,3) "));

		if(!m_szArrayDocs.IsEmpty())
		{
			szWhere.Format(_T(" and ma_bn in (%s) "),m_szArrayDocs);
		}
		if(bUseIcd10)
			szWhere.AppendFormat(_T(" and ma_benh in ('Z21','B20.1') and ((coalesce(b.t_nguonkhac) = 0  and ma_nhom not in ('6','7','4'))  or ( (coalesce(b.t_nguonkhac) >0 or category ='ARV'  ) and ma_nhom  in ('6','7','4') )  ) "));
		
		if(bUseIcd10)
			szTWTT.Format(_T(" case when (coalesce(b.t_nguonkhac) >0 and category ='ARV'  ) and ma_nhom  in ('6','7','4')  then b.t_bhtt else 0 end as t_twtt, "));
		else
			szTWTT.Format(_T(" 0 as t_twtt, "));
			szSQL.Format(_T(" SELECT ma_bn as docno,") \
						_T(" 	ho_ten as pname,") \
						_T(" 	substr(ngay_sinh,1,4) as birthyear,") \
						_T(" 	case when gioi_tinh =1 then 'Nam' else 'Nữ' end as sex,") \
						_T(" 	dia_chi as address,") \
						_T(" 	ma_the  as cardno,") \
						_T(" 	ma_dkbd as regplace,") \
						_T(" 	gt_the_tu as regdate,") \
						_T(" 	gt_the_den as expdate, ") \
						_T(" 	ma_benh as mabenh,") \
						_T(" 	ma_benhkhac as reldisease,") \
						_T(" 	ma_lydo_vvien as lydo_vv,") \
						_T(" 	ma_noi_chuyen AS machuyen,") \
						_T(" 	to_timestamp(ngay_vao,'YYYYMMDDHH24MI') AS ngay_vao,") \
						_T(" 	  to_timestamp(ngay_ra,'YYYYMMDDHH24MI')    AS ngay_ra,") \
						_T(" 	case when ma_loai_kcb =3 then round(sum(giuong_qty)) else  so_ngay_dtri end AS ngaydtr,") \
						_T(" 	  ket_qua_dtri  as ket_qua_dtri, ") \
						_T(" 	tinh_trang_rv,") \
						_T("	case when substr(ma_the,1,3) in ('QN5','CA5','CY5') then 1 else 0 end as objectbh, ") \
						_T("	case when substr(ma_the,1,3) in ('QN5','CA5','CY5') then 'A.2' else 'A.1' end as objectbhname, ") \
						_T(" 	sum(cost) as t_tongchi,") \
						_T(" 	round(sum(testfee)) as testfee,") \
						_T(" 	round(sum(pacsfee)) as pacsfee,") \
						_T(" 	round(sum(drugfee))  as drugfee,") \
						_T(" 	round(sum(bloodfee)) as bloodfee,") \
						_T(" 	round(sum(normtechfee)) as normtechfee,") \
						_T(" 	 round(sum(materialfee)) as materialfee,") \
						_T(" 	 0 as t_dvkt_tyle,") \
						_T(" 	 round(sum(drugfeek)) as t_thuoc_tyle,") \
						_T(" 	 0 as t_vtth_tyle,") \
						_T(" 	 round(sum(examfee)) as examfee,") \
						_T("	round(sum(bedfee)) as bedfee, ") \
						_T(" 	 round(sum(transportfee)) as transportfee,") \
						_T(" 	 round(sum(patpaid))   as patpaid,") \
						_T("	round(sum(difpaid)) as difpaid, ") \
						_T(" 	 round(sum(discount)) as inspaid,") \
						_T("	round(sum(t_twtt)) as t_twtt, ") \
						_T("	t_nguonkhac, ") \
						_T(" 	 t_ngoaids,") \
						_T(" 	 ma_khoa,") \
						_T(" 	 nam_qt,") \
						_T(" 	substr(ngay_ttoan,5,2) as thang_qt,") \
						_T(" 	ngay_ttoan as ngay_tt, ") \
						_T(" 	ma_khuvuc,") \
						_T(" 	case when  ma_loai_kcb in (1,2) then 1 else 2 end AS ma_loaikcb,") \
						_T(" 	ma_cskcb,") \
						_T("       1 as noi_ttoan,") \
						_T("       1 as giam_dinh,") \
						_T("       0 as t_xuattoan,") \
						_T("       ' ' as lydo_xt,") \
						_T("       0 as t_datuyen,") \
						_T("       0 as t_vuottran,") \
						_T("     CASE") \
						_T("       WHEN substring(ma_the,4,2)  ='%s'") \
						_T("       AND ma_dkbd IN(%s)") \
						_T("       THEN 1") \
						_T("       WHEN substring(ma_the,4,2)      ='%s'") \
						_T("       AND substring(ma_the,16,5) NOT IN(%s)") \
						_T("       THEN 2") \
						_T("       WHEN substring(ma_the,4,2)<>'%s'") \
						_T("       THEN 3") \
						_T("     END AS insline,") \
						_T("        case when hd_insline ='Y' then 1 else 0 end as hdline,") \
						_T(" 		(select ss_default from sys_sel where ss_id='hms_insline' and cast(ss_code as integer)=hc_line) as linename,") \
						_T(" 	(select hig_group from hms_insurance_group where hig_idx=hc_groupid) as insgroup ,  ") \
						_T("	dia_chi,ma_dkbd,gt_the_tu,gt_the_den,ma_benhkhac,ma_lydo_vvien,ma_noi_chuyen,ket_qua_dtri,tinh_trang_rv,ma_khoa,nam_qt,thang_qt,ma_khuvuc,ma_loai_kcb,ma_cskcb,t_nguonkhac,ngay_ttoan ") \
						_T("  FROM") \
						_T("  (") \
						_T(" 		select ") \
						_T(" 		ma_bn,ho_ten,") \
						_T(" 		ngay_sinh,") \
						_T(" 		gioi_tinh,") \
						_T(" 		dia_chi,") \
						_T(" 		ma_the,ma_dkbd,gt_the_tu,gt_the_den,ma_benhkhac,ma_benh,ma_lydo_vvien,") \
						_T(" 		ma_noi_chuyen,ngay_vao,ngay_ra,so_ngay_dtri,ket_qua_dtri,tinh_trang_rv,") \
						_T(" 		a.ma_khoa as ma_khoa,nam_qt, thang_qt,ngay_ttoan,ma_khuvuc,ma_loai_kcb,ma_cskcb,") \
						_T(" 		case when ma_nhom in ('4','5') then thanh_tien else 0 end as drugfee,") \
						_T(" 		case when ma_nhom in ('6') then thanh_tien else 0 end as drugfeek,") \
						_T(" 		case when ma_nhom in ('7','17') then thanh_tien else 0 end as  bloodfee,") \
						_T(" 		case when ma_nhom in ('1') then thanh_tien else 0 end as  testfee,") \
						_T(" 		case when ma_nhom in ('2','3') then thanh_tien else 0 end as  pacsfee,") \
						_T(" 		case when ma_nhom in ('8','18') and hfl_hitech <>'Y' then thanh_tien else 0 end as  normtechfee,") \
						_T(" 		case when ma_nhom in ('8','18') and hfl_hitech = 'Y' then thanh_tien else 0 end as  hitechfee,") \
						_T(" 		case when ma_nhom in ('10','11') then thanh_tien else 0 end as  materialfee,") \
						_T(" 		case when ma_nhom in ('13') then thanh_tien else 0 end as  examfee,") \
						_T("		case when ma_nhom in ('15','14') then thanh_tien else 0 end as  bedfee,") \
						_T(" 		case when ma_nhom in ('12') then thanh_tien else 0 end as  transportfee,") \
						_T(" 		case when ma_nhom not in ('1','2','3','4','5','6','7','8','10','11','12','13','18','17') then thanh_tien else 0 end as  otherfee,") \
						_T(" 		 thanh_tien as cost,") \
						_T(" 		 b.t_bhtt as discount,") \
						_T("		%s ") \
						_T(" 		 b.t_bncct as patpaid,") \
						_T(" 		b. t_bntt as difpaid,") \
						_T(" 		 b.t_bncct+ b.t_bntt  as patdebt,") \
						_T(" 		 a.t_ngoaids as t_ngoaids,		") \
						_T("		a.t_nguonkhac as t_nguonkhac , ") \
						_T("		case when ma_nhom ='15'  then b.so_luong else 0 end as  giuong_qty ") \
						_T(" 	 from bh_thongtinchitiet_tonghop  a   ,") \
						_T(" 	      bh_view   b") \
						_T(" 	      LEFT JOIN hms_fee_list ON hfl_feeid= ma_dich_vu_cs	      ") \
						_T("   WHERE nam_qt=%d and thang_qt =%d  %s  ") \
						_T("   and a.ma_lk = b.ma_lk  ") \
						_T("   )  tbl") \
						_T("   LEFT JOIN hms_doc ON (hd_docno= cast(ma_bn as integer))") \
						_T("   LEFT JOIN hms_card on (hc_cardno= hd_cardno and hc_patientno= hd_patientno and hc_idx= hd_cardidx)") \
						_T("   group by ") \
						_T(" 		ma_bn,ho_ten,") \
						_T(" 		ngay_sinh,") \
						_T(" 		gioi_tinh,") \
						_T(" 		dia_chi,") \
						_T(" 		ma_the,ma_dkbd,gt_the_tu,gt_the_den,ma_benhkhac,ma_benh,ma_lydo_vvien,") \
						_T(" 		ma_noi_chuyen,ngay_vao,ngay_ra,so_ngay_dtri,ket_qua_dtri,tinh_trang_rv,") \
						_T(" 		 ma_khoa,nam_qt, thang_qt,ngay_ttoan,ma_khuvuc,ma_loai_kcb,ma_cskcb,t_ngoaids,t_nguonkhac,") \
						_T(" 		 hd_insline,hc_line,hc_groupid order by ma_loai_kcb, objectbh,insline "), pMF->m_szCompany.Left(2), szCompany,
								pMF->m_szCompany.Left(2), szCompany, pMF->m_szCompany.Left(2),szTWTT,m_nYear, ToInt(m_szReportPeriodKey),szWhere);
		return szSQL;
}

int CHMSInsuraceReportDialog::OnExport7980_FromPrint(bool bUseIcd10){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp, szFromDateToDate,sz;
	CString szMonth, szYear;
	TCHAR *lszLine[] ={_T("I. NGƯƠI BỆNH ĐKBĐ TẠI CƠ SỞ KCB "), _T("II. NGƯỜI BỆNH NỘI TỈNH ĐẾN"), _T("III. NGƯỜI BỆNH NGOẠI TỈNH ĐẾN")};

	CDate dt1, dt2;
	dt1.ParseDate(m_szFromDate);
	dt2.ParseDate(m_szToDate);

	if (dt1.GetYear() == dt2.GetYear())
		szYear.Format(_T("%d"), dt1.GetYear());
	else
		szYear.Format(_T("%d"), dt2.GetYear());

	if (dt1.GetMonth() == dt2.GetMonth())
		szMonth.Format(_T("%d"), dt1.GetMonth());
	else
		szMonth.Format(_T("%d"), dt2.GetMonth());

	BeginWaitCursor();

	szSQL = GetSQLString_print7980(bUseIcd10);

	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return -1 ;
	}
	CExcel xls;

	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0,8);
	xls.SetColumnWidth(1,15);
	xls.SetColumnWidth(2,8);
	xls.SetColumnWidth(3,8);
	xls.SetColumnWidth(4,12);
	xls.SetColumnWidth(5,12);
	xls.SetColumnWidth(6,12);
	xls.SetColumnWidth(7,12);
	xls.SetColumnWidth(8,12);
	xls.SetColumnWidth(9,12);
	xls.SetColumnWidth(10,12);
	xls.SetColumnWidth(11,12);
	xls.SetColumnWidth(12,12);
	xls.SetColumnWidth(13,12);
	xls.SetColumnWidth(14,12);
	xls.SetColumnWidth(15,12);
	xls.SetColumnWidth(16,12);
	xls.SetColumnWidth(17,12);
	xls.SetColumnWidth(18,12);
	xls.SetColumnWidth(19,12);
	xls.SetColumnWidth(20,12);
	xls.SetColumnWidth(21,12);
	xls.SetColumnWidth(22,12);
	xls.SetColumnWidth(23,12);
	xls.SetColumnWidth(24,12);

	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellText(0, 0, _T("Tên cơ sở KCB:"), FMT_CENTER,true,10);
	xls.SetCellMergedColumns(3, 0, 5);
	xls.SetCellText(3, 0, pMF->m_szCompanyName, FMT_TEXT,true,10);

	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellText(0, 1, _T("Mã số:"), FMT_CENTER,true,10);
	xls.SetCellMergedColumns(3, 1, 5);
	xls.SetCellText(3, 1, _T("20010"), FMT_TEXT,true,10);

	xls.SetCellMergedColumns(20, 0, 5);
	xls.SetCellText(20, 0, _T("Mẫu số: C79-HD"), FMT_CENTER,true,10);

	xls.SetCellMergedColumns(20, 1, 5);
	xls.SetCellText(20, 1, _T("(Ban hành theo Thông tư số 102/2018/TT-BTC"), FMT_CENTER,true,10);

	xls.SetCellMergedColumns(20, 2, 5);
	xls.SetCellText(20, 2, _T("ngày 14/11/2018 của Bộ Tài chính)"), FMT_CENTER,true,10);

	xls.SetCellMergedColumns(0, 3, 25);
	xls.SetCellText(0, 3, _T("DANH SÁCH NGƯỜI BỆNH BẢO HIỂM Y TẾ KHÁM CHỮA BỆNH NỘI NGOẠI TRÚ ĐỀ NGHỊ THANH TOÁN"), FMT_CENTER,true,14);

	xls.SetCellMergedColumns(0, 4, 25);
	tmpStr.Format(_T("Từ ngày: %s Đến ngày: %s"), 
		CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 4, tmpStr,FMT_CENTER,true,10);

	xls.SetCellMergedColumns(0, 5, 23);
	xls.SetCellText(0, 5, _T("(Gửi cùng với file dữ liệu hàng tháng)"), FMT_CENTER,true,10);

	xls.SetCellMergedColumns(23, 5, 2);
	xls.SetCellText(23, 5, _T("Đơn vị: Đồng"), FMT_CENTER,true,10);

	xls.SetRowHeight(7, 30);
	xls.SetRowHeight(8, 20);
	xls.SetRowHeight(9, 50);

	int nRow = 7;

	xls.SetCellText(0, 7, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(0, 11, _T("A"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(1, 7, _T("Họ và tên"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(1, 11, _T("B"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(2, 7, _T("Năm sinh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(2, 11, _T("C"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(3, 7, _T("Giới tính"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(3, 11, _T("D"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(4, 7, _T("Mã thẻ BHYT "), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(4, 11, _T("E"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(5, 7, _T("Mã bệnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(5, 11, _T("G"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(6, 7, _T("Ngày vào"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(6, 11, _T("H"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(7, 7, _T("Ngày ra"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(7, 11, _T("I"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(8, 7, _T("Số ngày điều trị thực tế"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(8, 11, _T("K"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(9, 7, _T("CHI PHÍ TRONG PHẠM VI BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(9, 8, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(10, 8, _T("Theo nhóm chi phí"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(10, 9, _T("Khám bệnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(11, 9, _T("Ngày giường"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(12, 9, _T("Xét nghiệm"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(13, 9, _T("CĐHA,"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(13, 10, _T("TDCN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(14, 9, _T("TT, PT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(15, 9, _T("Máu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(16, 9, _T("Thuốc, dịch"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(17, 9, _T("VTYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(18, 9, _T("VC người bệnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(19, 8, _T("Quỹ BHYT trả"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(19, 9, _T("Tại tỉnh, thành phố"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(20, 9, _T("Tại Trung ương"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(21, 9, _T("NĐ 70"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(22, 8, _T("Người bệnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(22, 9, _T("Cùng chi trả"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(23, 9, _T("Tự trả"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(24, 8, _T("Nguồn khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(24, 9, _T("NSĐP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(25, 9, _T("Hỗ trợ, tài trợ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(26, 7, _T("Chi phí ngoài phạm vi BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(27, 7, _T("Số HS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(28, 8, _T("dia_chi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(29, 9, _T("ma_dkbd"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(30, 9, _T("gt_the_tu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(31, 9, _T("gt_the_den"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(32, 9, _T("ma_benhkhac"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(33, 10, _T("ma_lydo_vvien"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(34, 9, _T("ma_noi_chuyen"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(35, 9, _T("ket_qua_dtri"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(36, 9, _T("tinh_trang_rv"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(37, 9, _T("ma_khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(38, 9, _T("nam_qt"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(39, 8, _T("thang_qt"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(40, 9, _T("ma_khuvuc"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(41, 9, _T("ma_loai_kcb"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(42, 9, _T("ma_cskcb"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(43, 8, _T("t_nguonkhac"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetCellText(44, 9, _T("ngay_ttoan"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 9);	xls.SetMerge(0, 0, 0, 0);	xls.SetMerge(7, 10, 0, 0);	xls.SetMerge(7, 10, 1, 1);	xls.SetMerge(7, 10, 2, 2);	xls.SetMerge(7, 10, 3, 3);	xls.SetMerge(7, 10, 4, 4);	xls.SetMerge(7, 10, 5, 5);	xls.SetMerge(7, 10, 6, 6);	xls.SetMerge(7, 10, 7, 7);	xls.SetMerge(7, 10, 8, 8);	xls.SetMerge(7, 7, 9, 25);	xls.SetMerge(8, 10, 9, 9);	xls.SetMerge(8, 8, 10, 18);	xls.SetMerge(9, 10, 10, 10);	xls.SetMerge(9, 10, 11, 11);	xls.SetMerge(9, 10, 12, 12);	xls.SetMerge(9, 10, 14, 14);	xls.SetMerge(9, 10, 15, 15);	xls.SetMerge(9, 10, 16, 16);	xls.SetMerge(9, 10, 17, 17);	xls.SetMerge(9, 10, 18, 18);	xls.SetMerge(8, 8, 19, 21);	xls.SetMerge(9, 10, 19, 19);	xls.SetMerge(9, 10, 20, 20);	xls.SetMerge(9, 10, 21, 21);	xls.SetMerge(8, 8, 22, 23);	xls.SetMerge(9, 10, 22, 22);	xls.SetMerge(9, 10, 23, 23);	xls.SetMerge(8, 8, 24, 25);	xls.SetMerge(9, 10, 24, 24);	xls.SetMerge(9, 10, 25, 25);	xls.SetMerge(7, 10, 26, 26);

	nRow = 11;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;
	CString szNewOfLine, szOldOfLine,szSumOfline, szAmount,szField;

	long double grpCost[26];
	long double grpLine[26];
	long double ttlCost[26];
	long double	grpOfLine[26];
	double cost = 0;
	for (int i =0; i < 27; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
		grpOfLine[i] =0;
	}

	int nIndex = 1;
	double nCost;
	CellFormat xlsFormat(&xls);
	xlsFormat.SetCellStyle(FMT_INTEGER);


	while (!rs.IsEOF())
	{		
		rs.GetValue(_T("ma_loaikcb"),szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			CString szField, szAmount;
			if (grpOfLine[9] > 0)
			{
				nRow++;
				TranslateString(_T("Cộng"), szAmount);
				tmpStr.Format(_T("%s (%s)"), szAmount, szSumOfline);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
				for (int i = 9; i < 27; i++)
				{			
					tmpStr.Format(_T("%.2Lf"), grpOfLine[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
					grpOfLine[i] = 0;	
				}
			}

			if (grpCost[9] > 0)
			{	
				CString szField, szAmount;
				nRow++;
				TranslateString(_T("Total Line"), szAmount);
				tmpStr.Format(_T("%s (%s) "),szAmount , szLineName);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
				for (int i = 9; i < 27; i++)
				{
					tmpStr.Format(_T("%.2Lf"),grpCost[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
					ttlCost[i] += grpCost[i];
					grpLine[i] = 0;
					grpCost[i] = 0;	
				}
			}

			if (grpLine[9] > 0)
			{
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				tmpStr.Format(_T("%s (%s=(a+b)) "),szAmount , szOldGroup);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
				for (int i =9; i < 27; i++)
				{

					tmpStr.Format(_T("%.2Lf"), grpLine[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);				
					grpLine[i] = 0;	
				}
			}	
			nRow++;

			tmpStr.Format(_T("%s"),pMF->GetSelectionString(_T("ma_loai_kcb"), szNewLine));
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
			szOldLine = szNewLine;
			szOldOfLine = _T("xxxx");
			nIndex = 1;
		}

		rs.GetValue(_T("objectbh"), szNewGroup);		
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			CString szField, szAmount;
			//Tong nhom (I,II,...	)
			if(grpOfLine[9] > 0)
			{
				nRow++;
				TranslateString(_T("Cộng"), szAmount);
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
				for (int i = 9; i < 27; i++)
				{
					tmpStr.Format(_T("%.2Lf"), grpOfLine[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);				
					grpOfLine[i] = 0;
				}
			}

			if (grpLine[9] > 0)
			{
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				tmpStr.Format(_T("%s (%s=(a+b)) "),szAmount , szOldGroup);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
				for (int i = 9; i < 27; i++)
				{
					tmpStr.Format(_T("%.2Lf"), grpLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);					
					grpLine[i] = 0;
				}
			}
			nRow++;

			rs.GetValue(_T("objectbhname"), szLineName);
			tmpStr.Format(_T("%s"),  szLineName + _T(". ") + pMF->GetSelectionString(_T("ma_loai_doituong"), szNewGroup));
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
			szOldGroup = szNewGroup;
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}

		rs.GetValue(_T("insline"), szNewOfLine);
		if (szNewOfLine != szOldOfLine && !szNewOfLine.IsEmpty())
		{
			CString szField,szAmount;
			if (grpOfLine[9] > 0)
			{
				nRow++;
				TranslateString(_T("Cộng"), szAmount);
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
				for (int i = 9; i < 27; i++)
				{
					tmpStr.Format(_T("%.2Lf"),grpOfLine[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);					
					grpOfLine[i] = 0;
				}
			}

			if (szNewOfLine == _T("1") )
			{
				tmpStr.Format(_T("%s"), lszLine[0]);
				szSumOfline = _T("I");
			}
			else if (szNewOfLine == _T("2") )
			{
				tmpStr.Format(_T("%s"), lszLine[1]);
				szSumOfline = _T("II");
			}
			else

			{
				tmpStr.Format(_T("%s"), lszLine[2]);
				szSumOfline = _T("III");
			}

			nRow++;
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true);
			szOldOfLine = szNewOfLine;			
			nIndex=1;
		}

		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);		
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER, false, 9);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, false, 9);

		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING, false);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT, false, 9);

		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT, false, 9);

		rs.GetValue(_T("mabenh"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT, false,9);

		tmpStr = CDateTime::Convert(rs.GetValue(_T("ngay_vao")), yyyymmdd|hhmm, ddmmyyyy|hhmm);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT, false,9);

		tmpStr = CDateTime::Convert(rs.GetValue(_T("ngay_ra")), yyyymmdd|hhmm, ddmmyyyy|hhmm);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT, false,9);

		rs.GetValue(_T("ngaydtr"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_INTEGER, false, 9);

		rs.GetValue(_T("t_tongchi"), cost);
		grpCost[9] += cost;
		grpLine[9] += cost;
		grpOfLine[9] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1, false, 9);

		rs.GetValue(_T("examfee"), cost);
		grpCost[10] += cost;
		grpLine[10] += cost;
		grpOfLine[10] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER1, false, 9);

		// tien giuong
		rs.GetValue(_T("bedfee"), cost);
		grpCost[11] += cost;
		grpLine[11] += cost;
		grpOfLine[11] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(11, nRow, tmpStr, FMT_NUMBER1, false, 9);


		rs.GetValue(_T("testfee"), cost);
		grpCost[12] += cost;
		grpLine[12] += cost;
		grpOfLine[12] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(12, nRow, tmpStr, FMT_NUMBER1, false, 9);


		rs.GetValue(_T("pacsfee"), cost);
		grpCost[13] += cost;
		grpLine[13] += cost;
		grpOfLine[13] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(13, nRow, tmpStr, FMT_NUMBER1, false, 9);

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[14] += cost;
		grpLine[14] += cost;
		grpOfLine[14] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(14, nRow, tmpStr, FMT_NUMBER1, false, 9);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		grpOfLine[15] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(15, nRow, tmpStr, FMT_NUMBER1, false, 9);


		rs.GetValue(_T("drugfee"), cost);
		grpCost[16] += cost;
		grpLine[16] += cost;	
		grpOfLine[16] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(16, nRow, tmpStr, FMT_NUMBER1, false, 9);

		rs.GetValue(_T("materialfee"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		grpOfLine[17] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(17, nRow, tmpStr, FMT_NUMBER1, false, 9);


		// van chuyen
		rs.GetValue(_T("transportfee"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		grpOfLine[18] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(18, nRow, tmpStr, FMT_NUMBER1, false, 9);

		double ntwtt=0;
		rs.GetValue(_T("t_twtt"), cost);
		grpCost[20] += cost;
		grpLine[20] += cost;
		grpOfLine[20] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(20, nRow, tmpStr, FMT_NUMBER1, false, 9);
		ntwtt =cost;



		if(rs.GetValue(_T("objectbh")) != _T("1"))
		{

			rs.GetValue(_T("inspaid"), cost);
			if(ntwtt>0)
				cost= cost- ntwtt;
			grpCost[19] += cost;
			grpLine[19] += cost;
			grpOfLine[19] += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(19, nRow, tmpStr, FMT_NUMBER1, false, 9);
		}
		
		

		if(rs.GetValue(_T("objectbh")) == _T("1"))
		{

			rs.GetValue(_T("inspaid"), cost);
			if(ntwtt>0)
				cost= cost- ntwtt;
			grpCost[21] += cost;
			grpLine[21] += cost;
			grpOfLine[21] += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(21, nRow, tmpStr, FMT_NUMBER1, false, 9);
		}
		
		
		rs.GetValue(_T("patpaid"), cost);
		grpCost[22] += cost;
		grpLine[22] += cost;
		grpOfLine[22] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(22, nRow, tmpStr, FMT_NUMBER1, false, 9);



		rs.GetValue(_T("difpaid"), cost);
		grpCost[23] += cost;
		grpLine[23] += cost;
		grpOfLine[23] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(23, nRow, tmpStr, FMT_NUMBER1, false, 9);

		rs.GetValue(_T("t_nguonkhac"), cost);
		grpCost[25] += cost;
		grpLine[25] += cost;
		grpOfLine[25] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(25, nRow, tmpStr, FMT_NUMBER1, false, 9);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(27, nRow, tmpStr, FMT_NUMBER1, false, 9);

		
		rs.GetValue(_T("dia_chi"), tmpStr);
		xls.SetCellText(28, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("ma_dkbd"), tmpStr);
		xls.SetCellText(29, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("gt_the_tu"), tmpStr);
		xls.SetCellText(30, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("gt_the_den"), tmpStr);
		xls.SetCellText(31, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("ma_benhkhac"), tmpStr);
		xls.SetCellText(32, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("ma_lydo_vvien"), tmpStr);
		xls.SetCellText(33, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("ma_noi_chuyen"), tmpStr);
		xls.SetCellText(34, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("ket_qua_dtri"), tmpStr);
		xls.SetCellText(35, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("tinh_trang_rv"), tmpStr);
		xls.SetCellText(36, nRow, tmpStr, FMT_TEXT, false, 9);

		rs.GetValue(_T("ma_khoa"), tmpStr);
		xls.SetCellText(37, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("nam_qt"), tmpStr);
		xls.SetCellText(38, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("thang_qt"), tmpStr);
		xls.SetCellText(39, nRow, tmpStr, FMT_TEXT, false, 9);

		rs.GetValue(_T("ma_khuvuc"), tmpStr);
		xls.SetCellText(40, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("ma_loai_kcb"), tmpStr);
		xls.SetCellText(41, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("ma_cskcb"), tmpStr);
		xls.SetCellText(42, nRow, tmpStr, FMT_TEXT, false, 9);

		rs.GetValue(_T("t_nguonkhac"), tmpStr);
		xls.SetCellText(43, nRow, tmpStr, FMT_TEXT, false, 9);
		rs.GetValue(_T("ngay_ttoan"), tmpStr);
		xls.SetCellText(44, nRow, tmpStr, FMT_TEXT, false, 9);

		rs.MoveNext();
	}
	for (int i = 9; i < 27; i++)
	{
		ttlCost[i] += grpCost[i];
	}


	if (grpOfLine[9] > 0)
	{	
		CString szAmount;
		nRow++;
		TranslateString(_T("Cộng"), szAmount);
		//xls.SetCellMergedColumns(0,nRow,11);
		tmpStr.Format(_T("%s (%s)"),szAmount, szSumOfline);				
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
		for (int i = 9; i < 27; i++)
		{					
			tmpStr.Format(_T("%.2Lf"), grpOfLine[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);				
		}
	}

	if (grpLine[9] > 0)
	{
		nRow++;
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		tmpStr.Format(_T("%s (%s=(a+b))"), szAmount , szOldGroup);
		xls.SetCellMergedColumns(1, nRow, 8);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
		for (int i = 9; i < 27; i++)
		{				
			tmpStr.Format(_T("%.2Lf"), grpLine[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
		}	
	}

	if (grpCost[9] > 0)
	{
		nRow++;
		CString szField, szAmount;
		TranslateString(_T("Total Line"), szAmount);
		tmpStr.Format(_T("%s (%s)"), szAmount, szLineName);
		xls.SetCellMergedColumns(1, nRow, 8);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
		for (int i = 9; i < 27; i++)
		{			
			tmpStr.Format(_T("%.2Lf"), grpCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
		}
	}

	if (ttlCost[9] > 0)
	{
		nRow++;
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);	
		tmpStr.Format(_T("%s :"), szAmount);
		//xls.SetCellMergedColumns(1,nRow,10);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
		for (int i = 9; i < 27; i++)
		{			
			tmpStr.Format(_T("%.2Lf"), ttlCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
		}

	}

	xls.Save(_T("Exports\\ChiphikhambenhBHYT_7980aMau102.xls"));
	EndWaitCursor();
}