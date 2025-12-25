#include "stdafx.h"
#include "HMSInsuraceReportDialog.h"
#include "HMSMainFrame.h"
#include "Excel.h"
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

static void _OnChilaybndoiqtSelectFnc(CWnd *pWnd)
{
	 ((CHMSInsuraceReportDialog*)pWnd)->OnChilaybndoiqtSelect();
}
static void _OnKolaybndoiqtSelectFnc(CWnd *pWnd)
{
	 ((CHMSInsuraceReportDialog*)pWnd)->OnKolaybndoiqtSelect();
}

CHMSInsuraceReportDialog::CHMSInsuraceReportDialog(CWnd *pParent):
	CGuiView(pParent)
	{

	m_nDlgWidth = 440;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CHMSInsuraceReportDialog::~CHMSInsuraceReportDialog(){
}
void CHMSInsuraceReportDialog::OnCreateComponents()
{
	/*m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 430, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 85, 55);
	m_wndYear.Create(this,90, 30, 210, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 215, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 85, 85);
	m_wndFromDate.Create(this,90, 60, 210, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndPrint.Create(this, _T("&Print"), 265, 155, 345, 180);
	m_wndExport.Create(this, _T("&ExportXLS"), 350, 155, 430, 180);
	m_wndOutPatient.Create(this, _T("OutPatient"), 105, 90, 265, 115);
	m_wndInPatient.Create(this, _T("InPatient"), 270, 90, 425, 115);
	m_wndGroupInsuranceLabel.Create(this, _T("Group Insurance"), 105, 120, 205, 145);
	m_wndGroupInsurance.Create(this,210, 120, 425, 145); */

	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 459, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 95, 55);
	m_wndYear.Create(this,95, 30, 220, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 225, 30, 320, 55);
	m_wndReportPeriod.Create(this,325, 30, 455, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 95, 84);
	m_wndFromDate.Create(this,95, 59, 220, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 59, 320, 84);
	m_wndToDate.Create(this,325, 59, 455, 84); 
	m_wndPrint.Create(this, _T("&Print"), 274, 155, 364, 180);
	m_wndExport.Create(this, _T("&Export"), 369, 155, 459, 180);
	m_wndOutPatient.Create(this, _T("OutPatient"), 105, 90, 275, 115);
	m_wndInPatient.Create(this, _T("InPatient"), 290, 90, 455, 115);
	m_wndGroupInsuranceLabel.Create(this, _T("Group Insurance"), 105, 120, 215, 145);
	m_wndGroupInsurance.Create(this,220, 120, 455, 145); 
	m_wndChilaybndoiqt.Create(this, _T("Chỉ lấy BN đổi kỳ quyết toán"), 10, 154, 239, 179);
	m_wndKolaybndoiqt.Create(this, _T("Không lấy BN đổi kỳ quyết toán"), 10, 185, 239, 210);

}
void CHMSInsuraceReportDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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

	m_wndChilaybndoiqt.SetEvent(WE_CLICK, _OnChilaybndoiqtSelectFnc);
	m_wndKolaybndoiqt.SetEvent(WE_CLICK, _OnKolaybndoiqtSelectFnc);

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = pMF->GetSysDate() + _T("00:01");
	m_szToDate = pMF->GetSysDate() + _T("23:59");
	SetMode(VM_EDIT);


}
void CHMSInsuraceReportDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
	DDX_Check(pDX, m_wndInPatient.GetDlgCtrlID(), m_bInPatient);
	DDX_TextEx(pDX, m_wndGroupInsurance.GetDlgCtrlID(), m_szGroupInsuranceKey);
	DDX_Check(pDX, m_wndChilaybndoiqt.GetDlgCtrlID(), m_bChilaybndoiqt);
	DDX_Check(pDX, m_wndKolaybndoiqt.GetDlgCtrlID(), m_bKolaybndoiqt);
}
void CHMSInsuraceReportDialog::UpdateJson(BOOL bSave){

}
void CHMSInsuraceReportDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInsuraceReportDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSInsuraceReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bOutPatient=FALSE;
	m_bInPatient=FALSE;
	m_szGroupInsuranceKey.Empty();
	m_bChilaybndoiqt=FALSE;
	m_bKolaybndoiqt=FALSE;

}
int CHMSInsuraceReportDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
} 

void CHMSInsuraceReportDialog::OnChilaybndoiqtSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bKolaybndoiqt = false;
	UpdateData(false);	
}
	void CHMSInsuraceReportDialog::OnKolaybndoiqtSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	UpdateData(TRUE);
	m_bChilaybndoiqt = false;
	UpdateData(false);	
	
}

void CHMSInsuraceReportDialog::OnReportPeriodSelendok(){
		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
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
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuraceReportDialog::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	}
	
	
} 
	void CHMSInsuraceReportDialog::OnOutPatientSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CHMSInsuraceReportDialog::OnInPatientSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CHMSInsuraceReportDialog::OnGroupInsuranceSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuraceReportDialog::OnGroupInsuranceSelendok(){
	 
}
/*void CHMSInsuraceReportDialog::OnGroupInsuranceSetfocus(){
	
}*/
/*void CHMSInsuraceReportDialog::OnGroupInsuranceKillfocus(){
	
}*/
long CHMSInsuraceReportDialog::OnGroupInsuranceLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
int CHMSInsuraceReportDialog::OnAddHMSInsuraceReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInsuraceReportDialog::OnEditHMSInsuraceReportDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInsuraceReportDialog::OnDeleteHMSInsuraceReportDialog(){
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
 		OnCancelHMSInsuraceReportDialog();
 	}
	return 0;
}
int CHMSInsuraceReportDialog::OnSaveHMSInsuraceReportDialog(){
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
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSInsuraceReportDialog::OnHMSInsuraceReportDialogListLoadData(){
	return 0;
}
int CHMSInsuraceReportDialog::OnExport7980(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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


	//_msg(_T("%s"), szSQL);
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
	xls.SetColumnWidth(41, 12);

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
	xls.SetCellText(34, nRow, _T("t_ngoaids"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(35, nRow, _T("ma_khoa"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(36, nRow, _T("nam_qt"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(37, nRow, _T("thang_qt"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(38, nRow, _T("ma_khuvuc"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(39, nRow, _T("ma_loaikcb"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(40, nRow, _T("ma_cskcb"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(41, nRow, _T("t_nguonkhac"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(42, nRow, _T("ngay_ttoan"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(43, nRow, _T("ma_lk"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(44, nRow, _T("doiky_quyettoan"), FMT_TEXT | FMT_CENTER);
	int nIndex = 1;
	double nCost;
	CellFormat xlsFormat(&xls);
	xlsFormat.SetCellStyle(FMT_INTEGER);

	CDate date;

	while (!rs.IsEOF())
	{
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

		rs.GetValue(_T("patpaid"), nCost);
		xls.WriteNumber(nRow, nCol + 32, nCost, &xlsFormat);

		rs.GetValue(_T("inspaid"), nCost);
		xls.WriteNumber(nRow, nCol + 33, nCost, &xlsFormat);

		rs.GetValue(_T("t_ngoaids"), nCost);
		xls.WriteNumber(nRow, nCol + 34, nCost, &xlsFormat);

		rs.GetValue(_T("ma_khoa"), tmpStr);
		xls.SetCellText(nCol + 35, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("nam_qt"), tmpStr);
		nCost = ToDouble(tmpStr);
		xls.WriteNumber(nRow, nCol + 36, nCost, &xlsFormat);
		
		rs.GetValue(_T("thang_qt"), tmpStr);
		nCost = ToDouble(tmpStr);
		xls.WriteNumber(nRow, nCol + 37, nCost, &xlsFormat);

		rs.GetValue(_T("ma_khuvuc"), tmpStr);
		xls.SetCellText(nCol + 38, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ma_loaikcb"), tmpStr);
		xls.SetCellText(nCol + 39, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ma_cskcb"), tmpStr);
		//tmpStr=pMF->m_szCompany;
		xls.SetCellText(nCol + 40, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("t_nguonkhac"), nCost);
		xls.WriteNumber(nRow, nCol + 41, nCost, &xlsFormat);

		rs.GetValue(_T("ngay_tt"), tmpStr);
		xls.SetCellText(nCol + 42, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ma_lk"), tmpStr);
		xls.SetCellText(nCol + 43, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doiky_quyetoan"), tmpStr);
		xls.SetCellText(nCol + 44, nRow, tmpStr, FMT_TEXT);

		rs.MoveNext();
	}
	if(m_bOutPatient)
		tmpStr.Format(_T("Exports\\7980a_%s_%s%s_file79.xls"), pMF->m_szCompany, m_szFromDate.Left(4), m_szFromDate.Mid(5,2));

	else if(m_bInPatient)
		tmpStr.Format(_T("Exports\\7980a_%s_%s%s_file80.xls"), pMF->m_szCompany, m_szFromDate.Left(4), m_szFromDate.Mid(5,2));

	else
		tmpStr.Format(_T("Exports\\7980a_%s_%s%s_file7980.xls"), pMF->m_szCompany, m_szFromDate.Left(4), m_szFromDate.Mid(5,2));
	xls.Save(tmpStr);
	EndWaitCursor();
	return 0;
}
int CHMSInsuraceReportDialog::OnExport20(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr,szObjects,m_szFacList,tmpStr2, szDate, szSysDate, szSQL,szName,szAmount,szFromDate,szToDate, szWhere;
	CString  m_szServiceFlag,m_szInsFlag,m_szChildFlag,m_szFreeFlag,m_szGroups,szOrderBy;
	CString szStatus;
	CRecord rs(&pMF->m_db);
	
	bool bHavePrice = false;


		szOrderBy.Format(_T("groupname"));


	CString szType, szTypeName;
	
	
	

	CString szCompany;
	szSQL.Format(_T("SELECT hf_hospitalidinsline FROM hms_config WHERE hf_hospitalidinsline IS NOT NULL"));
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("Chưa thiết lập nhóm ID bảo hiểm của bệnh viện. ") \
			_T(" Vào hms_config thiết lập ở trường hf_hospitalidinsline theo mẫu: 'mã BV 1', 'mã BV2' "), MB_OK);
		szSQL.Format(_T(" ALTER TABLE hms_config") \
			_T(" ADD COLUMN hf_hospitalidinsline character varying(128)"));
		pMF->ExecSQL(szSQL);
		return -1;
	}
	else{
		rs.GetValue(_T("hf_hospitalidinsline"), szCompany);
	}

	CString szLine, szInsLine, szWhere2;
	szInsLine.Empty();
	if(m_szGroupInsuranceKey == _T("BVBN"))
		szLine.Format(_T("and substring(hd_cardno,4,2)='%s' and substring(hd_cardno,16,5) IN(%s) "), pMF->m_szCompany.Left(2), szCompany);
	if(m_szGroupInsuranceKey == _T("NOI"))
		szLine.Format(_T("and substring(hd_cardno,4,2)='%s' and substring(hd_cardno,16,5) NOT IN(%s) "), pMF->m_szCompany.Left(2), szCompany);
	if(m_szGroupInsuranceKey == _T("NGOAI"))
		szLine.Format(_T("and substring(hd_cardno,4,2)<>'%s'"), pMF->m_szCompany.Left(2));
	if(m_szGroupInsuranceKey == _T("TCPT"))
		szInsLine.Format(_T("insline,"));

	if(!m_szGroupInsuranceKey.IsEmpty())
		szWhere2.Format(_T(" and 0=1 "));

	UpdateData(false);

	szSQL.Format(_T(" SELECT") \
		_T("   name,") \
		_T("   regcode,") \
		_T("   content,") \
		_T("   duongdung,") \
		_T("   genericname,") \
		_T("   unit,") \
		_T("   mathuoc,") \
		_T("   ROUND(price,2)          AS price,") \
		_T("   SUM(outqty)             AS outqty,") \
		_T("   SUM(intqty)             AS intqty,") \
		_T("   SUM(qty)*ROUND(price,2) AS amount") \
		_T(" FROM (		") \
		_T(" SELECT ") \
		_T("			CASE WHEN substring(hd_cardno,4,2)='%s' and substring(hd_cardno,16,5) IN(%s) THEN 1") \
		_T("			WHEN substring(hd_cardno,4,2)='%s' and substring(hd_cardno,16,5) NOT IN(%s) THEN 2") \
		_T("			WHEN substring(hd_cardno,4,2)<>'%s' THEN 3 END AS insline,") \
		_T("			hfg_index as idx,hfg_name as typename,pmi_typeid,pmi_id as id, ") \
		_T("		 	pmi_name as name,") \
		_T("			case when pmc_mathuoc is not null then pmc_mathuoc else pmi_insuranceid end as mathuoc, ") \
		_T("			case   ") \
		_T("				when pmc_sodangky is not null then pmc_sodangky ") \
		_T("				when pmsi_regcode is null or pmsi_regcode ='' then pmi_regcode  ") \
		_T("				else pmsi_regcode end  as regcode, ") \
		_T("			pmc_hamluong as content, ") \
		_T("			case when pmsi_codeidx is null or pmsi_codeidx ='' then pmi_atccode else pmsi_codeidx end as atccode, ") \
		_T("		 	pms_generic.pmg_name as genericname,") \
		_T("			pms_group.pmg_id || '> ' || pms_group.pmg_name as groupname, ") \
		_T(" 		 	CASE WHEN LENGTH(pmc_drugunit) > 0 THEN pmc_drugunit ELSE pmi_unit END AS unit,") \
		_T("			pmc_donggoi AS quycach, ") \
		_T("			pmc_maduongdung AS duongdung,") \
		_T("			(SELECT pmm_name from pms_mfg where pmm_id=pmsi_mfgid) as mfgname,") \
		_T("			(SELECT sc_name from sys_country where sc_id=pmi_countryid limit 1) as countryname,") \
		_T(" 		 	 pmc_unitprice AS price,	") \
		_T("		case when hfi_class  in ('E','O') then  sum(hpol_issueqty) else 0 end as outqty,  ") \
		_T(" 	case when hfi_class in ('I') then  sum(hpol_issueqty) else 0 end as intqty,  ") \
		_T(" 	sum(hpol_issueqty) as qty, pmc_quyetdinh as quyetdinh, pmc_ngaycongbo as ngaycongbo			") \
		_T(" FROM hms_pharmacyorder ") \
		_T(" LEFT JOIN hms_pharmacyorder_line ON (hpol_orderid=hpo_orderid)") \
		_T(" LEFT JOIN hms_doc ON(hd_docno=hpo_docno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_fee_invoice on(hfi_docno = hd_docno and hfi_invoiceno = hfe_invoiceno) ") \
		_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
		_T(" LEFT JOIN pms_items ON(pmsi_itemid = pmi_id)") \
		_T(" LEFT JOIN pms_contractorlist ON (pmc_id=pmi_id AND pmc_uid = pmsi_contractlist_uid) ") \
		_T(" LEFT JOIN pms_usedrug ON (pu_id = pmc_maduongdung) ") \
		_T(" LEFT JOIN pms_generic ON(pms_generic.pmg_id=pmi_genericid) ") \
		_T(" LEFT JOIN pms_group ON(pms_group.pmg_id=pmi_groupid) ") \
		_T(" LEFT JOIN hms_feegroup ON(hfg_id = pmi_typeid) ") \
		_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx AND hc_cardno=hd_cardno)") \
		_T(" LEFT JOIN hms_object ON(hd_object=ho_id)") \
		_T(" WHERE  hfe_discount > 0 and hfi_recvdate between timestamp '%s' and timestamp '%s' %s") \
		_T(" AND ho_type in('I','C')and  substring(pmi_typeid,1,2)<>'A9' and %s and hpo_status IN('A','I','S') and hpo_payment ='P' and length(hc_cardno) > 1 AND substr(hfe_group, 1, 2)<>'A2' %s %s") \
		_T(" GROUP BY quycach,hfi_class,hpo_deptid,hpol_issueqty,pmc_unitprice,idx,typename,genericname, ") \
		_T("	groupname,pmi_typeid,pmi_id,name,unit,hfe_insprice,countryname,mfgname, ") \
		_T("	regcode,content,atccode,pmsi_codeidx,pmsi_regcode,pmsi_vatprice,pmi_insuranceid,pmc_mathuoc,pmc_maduongdung,pmi_dosage,hd_cardno,quyetdinh,ngaycongbo") \
		_T(" HAVING sum(hpol_issueqty) > 0 ) as tbl ") \
		_T(" GROUP BY name,") \
		_T("   regcode,") \
		_T("   content,") \
		_T("   duongdung,") \
		_T("   genericname,") \
		_T("   unit,") \
		_T("   mathuoc,") \
		_T("   price") \
		_T(" ORDER BY name,") \
		_T("   unit"),
		pMF->m_szCompany.Left(2), szCompany,
		pMF->m_szCompany.Left(2), szCompany, pMF->m_szCompany.Left(2),m_szFromDate, m_szToDate,szLine, szWhere, szStatus);
	_fmsg(_T("%s"),szSQL);
	BeginWaitCursor();
//	CReportSection* rptDetail;
	CString szOldLine, szNewLine;
	//CRecord rs(&pMF->m_db);
	long double grpCost=0.0;
	long double ttlCost=0.0;
	double cost = 0;
	int qty=0;
	int nItem = 1;
	int nRow = 0;
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return -1;
	}
				
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0,6);
	xls.SetColumnWidth(1,14);
	xls.SetColumnWidth(2,25);
	xls.SetColumnWidth(3,25);
	xls.SetColumnWidth(4,15);
	xls.SetColumnWidth(5,12);
	xls.SetColumnWidth(6,12);
	xls.SetColumnWidth(7,12);
	xls.SetColumnWidth(8,12);
	xls.SetColumnWidth(8,12);
	xls.SetColumnWidth(8,12);
	xls.SetColumnWidth(8,12);

	xls.SetCellText(0, nRow, _T("stt"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	xls.SetCellText(1, nRow, _T("ma_thuoc"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	xls.SetCellText(2, nRow, _T("ten_hoatchat"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	xls.SetCellText(3, nRow, _T("ten_thuoc"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	xls.SetCellText(4, nRow, _T("duong_dung"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	xls.SetCellText(5, nRow, _T("ham_luong"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	xls.SetCellText(6, nRow, _T("so_dky"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	xls.SetCellText(7, nRow, _T("don_vi"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	xls.SetCellText(8, nRow , _T("sl_noitru"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	xls.SetCellText(9, nRow , _T("sl_ngoaitru"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	xls.SetCellText(10, nRow, _T("don_gia"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	xls.SetCellText(11, nRow, _T("thanh_tien"),FMT_TEXT|FMT_WRAPING|FMT_CENTER,true);
	
	CString szInsLineNew,szInsLineOld;
CString szInsLineNameNew,szInsLineNameOld;
CString szGroupNew,szGroupOld;
CString szNameGroupNew,szNameGroupOld;
CString szGroupPTTNew,szGroupPTTOld;
CString szGroupBedNew,szGroupBedOld;
long double ttInsQty=0,ttOutQty=0;
long double totalCost=0;
long double totalInsLineCost=0;
	grpCost=ttlCost=cost=0;
	while(!rs.IsEOF())
	{
		nRow ++;		

		tmpStr.Format(_T("%d"),nItem++);
		xls.SetCellText(0,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("mathuoc"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("genericname"), tmpStr);
		xls.SetCellText(2,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(3,nRow,tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("duongdung"), tmpStr);
		xls.SetCellText(4,nRow,tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("content"), tmpStr);
		xls.SetCellText(5,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("regcode"), tmpStr);
		xls.SetCellText(6,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("unit"), tmpStr);		
		xls.SetCellText(7,nRow,tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("outqty"), qty);
		tmpStr.Format(_T("%d"), qty);
		xls.SetCellText(9,nRow,tmpStr, FMT_NUMBER1);
		
		rs.GetValue(_T("intqty"), qty);
		tmpStr.Format(_T("%d"), qty);
		xls.SetCellText(8,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("price"), tmpStr);				
		xls.SetCellText(10,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("Amount"), cost);				
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(11,nRow,tmpStr, FMT_NUMBER1);
	
		rs.MoveNext();
	}
	
	if (grpCost > 0)
	{
		nRow++;
		TranslateString(_T("Cộng:"), tmpStr);		
		xls.SetCellMergedColumns(1,nRow,6);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11,0);
		tmpStr.Format(_T("%.2f"), grpCost);
		ttlCost += grpCost;
		totalInsLineCost += grpCost;
		xls.SetCellText(11, nRow, tmpStr, FMT_NUMBER1,true,11,0);		
	}

	tmpStr.Format(_T("Exports\\20_%s_%s%s_file20.xls"), pMF->m_szCompany, m_szFromDate.Left(4), m_szFromDate.Mid(5,2));
	xls.Save(tmpStr);
	EndWaitCursor();
	return 0;
}
CString CHMSInsuraceReportDialog::GetSQLString7980()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
		CString szSQL, szWhere;
		CString szExamRoom, szUserReceiver;
		CString szOrder;

	
		if(m_bOutPatient)

			szWhere.Format(_T(" and ma_loai_kcb in (1,2) "));
		if(m_bInPatient)
			szWhere.Format(_T(" and ma_loai_kcb =3 "));

		if((m_bOutPatient && m_bInPatient) || (!m_bOutPatient && !m_bInPatient  ) )
			szWhere.Format(_T(" and ma_loai_kcb in (1,2,3) "));

    if (m_bChilaybndoiqt)
	{
		szWhere.AppendFormat(_T(" and NVL(is_change_settlement_period,'N') ='Y' "));
	}

	if (m_bKolaybndoiqt)
	{
		szWhere.AppendFormat(_T(" and NVL(is_change_settlement_period,'N') <>'Y' "));
	}


		szWhere.AppendFormat(_T(" and substr(ma_the,4,2) ='97' "));
		
			szSQL.Format(_T(" SELECT ma_bn as docno,ma_lk, doiky_quyetoan,") \
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
	_T(" 	round(sum(normtechfee+hitechfee),2) as normtechfee,") \
	_T(" 	 round(sum(materialfee),2) as materialfee,") \
	_T(" 	 0 as t_dvkt_tyle,") \
	_T(" 	 round(sum(drugfeek),2) as t_thuoc_tyle,") \
	_T(" 	 0 as t_vtth_tyle,") \
	_T(" 	 round(sum(examfee),2) as examfee,") \
	_T("	round(sum(bedfee),2) as bedfee, ") \
	_T(" 	 round(sum(transportfee),2) as transportfee,") \
	_T(" 	 round(sum(patpaid+ difpaid),2)   as patpaid,") \
	_T(" 	 round(sum(discount),2) as inspaid,") \
	_T("	t_nguonkhac, ") \
	_T(" 	 t_ngoaids,") \
	_T(" 	 ma_khoa,") \
	_T(" 	 nam_qt,") \
	_T(" 	substr(ngay_ttoan,5,2) as thang_qt,") \
	_T(" 	TO_timestamp(ngay_ttoan, 'YYYYMMDD HH24MI') as ngay_tt, ") \
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
	_T(" 	(select hig_group from hms_insurance_group where hig_idx=hc_groupid) as insgroup   ") \
	_T("  FROM") \
	_T("  (") \
	_T(" 		select ") \
	_T(" 		ma_bn,a.ma_lk,ho_ten, a.IS_CHANGE_SETTLEMENT_PERIOD as doiky_quyetoan, ") \
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
	_T(" 		case when ma_nhom in ('8','18') and nvl(hfl_hitech,'N') <>'Y' then thanh_tien else 0 end as  normtechfee,") \
	_T(" 		case when ma_nhom in ('8','18') and nvl(hfl_hitech,'N') = 'Y' then thanh_tien else 0 end as  hitechfee,") \
	_T(" 		case when ma_nhom in ('10','11') then thanh_tien else 0 end as  materialfee,") \
	_T(" 		case when ma_nhom in ('13') then thanh_tien else 0 end as  examfee,") \
	_T("		case when ma_nhom in ('15','14') then thanh_tien else 0 end as  bedfee,") \
	_T(" 		case when ma_nhom in ('12') then thanh_tien else 0 end as  transportfee,") \
	_T(" 		case when ma_nhom not in ('1','2','3','4','5','6','7','8','10','11','12','13','14','15','17','18') then thanh_tien else 0 end as  otherfee,") \
	_T(" 		 thanh_tien as cost,") \
	_T(" 		 b.t_bhtt as discount,") \
	_T(" 		 b.t_bncct as patpaid,") \
	_T(" 		b.t_bntt as difpaid,") \
	_T(" 		 b.t_bncct+ b.t_bntt  as patdebt,") \
	_T(" 		 a.t_ngoaids as t_ngoaids,		") \
	_T("		a.t_nguonkhac as t_nguonkhac ") \
	_T(" 	 from bh_thongtinchitiet_tonghop  a   ,") \
	_T(" 	      bh_view   b") \
	_T(" 	      LEFT JOIN hms_fee_list ON hfl_feeid= ma_dich_vu_cs	      ") \
	//_T("   WHERE nam_qt=%d and thang_qt =%d and trangthaigui <> 'D'  %s  ") \//
	_T("   WHERE trangthaigui <> 'D' %s ") \
	_T("   AND to_timestamp(ngay_ttoan, 'YYYYMMDDHH24MI') BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T("   AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
	_T("   ") \
	_T("   and a.ma_lk = b.ma_lk  ") \
	_T("   )  tbl") \
	_T("   LEFT JOIN hms_doc ON (hd_docno= cast(ma_bn as integer))") \
	_T("   LEFT JOIN hms_card on (hc_cardno= hd_cardno and hc_patientno= hd_patientno and hc_idx= hd_cardidx)") \
	_T("   group by ") \
	_T(" 		ma_bn,ma_lk,ho_ten,doiky_quyetoan,") \
	_T(" 		ngay_sinh,") \
	_T(" 		gioi_tinh,") \
	_T(" 		dia_chi,") \
	_T(" 		ma_the,ma_dkbd,gt_the_tu,gt_the_den,ma_benhkhac,ma_benh,ma_lydo_vvien,") \
	_T(" 		ma_noi_chuyen,ngay_vao,ngay_ra,so_ngay_dtri,ket_qua_dtri,tinh_trang_rv,") \
	_T(" 		 ma_khoa,nam_qt, thang_qt,ngay_ttoan,ma_khuvuc,ma_loai_kcb,ma_cskcb,t_ngoaids,t_nguonkhac,") \
	_T(" 		 hd_insline,hc_line,hc_groupid"),szWhere, m_szFromDate, m_szToDate);
	//_T(" 		 hd_insline,hc_line,hc_groupid"), m_nYear, ToInt(m_szReportPeriodKey),szWhere);//
	
		_fmsg(_T("%s"),szSQL);
		return szSQL;
	
}