#include "stdafx.h"
#include "HMSNurseModeRPT.h"
#include "HMSMainFrame.h"
#include "ReportUtils.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CHMSNurseModeRPT *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSNurseModeRPT* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSNurseModeRPT *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSNurseModeRPT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSNurseModeRPT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSNurseModeRPT *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSNurseModeRPT *pVw = (CHMSNurseModeRPT *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSNurseModeRPT *pVw = (CHMSNurseModeRPT *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddHMSNurseModeRPTFnc(CWnd *pWnd){
	 return ((CHMSNurseModeRPT*)pWnd)->OnAddHMSNurseModeRPT();
} 
static int _OnEditHMSNurseModeRPTFnc(CWnd *pWnd){
	 return ((CHMSNurseModeRPT*)pWnd)->OnEditHMSNurseModeRPT();
} 
static int _OnDeleteHMSNurseModeRPTFnc(CWnd *pWnd){
	 return ((CHMSNurseModeRPT*)pWnd)->OnDeleteHMSNurseModeRPT();
} 
static int _OnSaveHMSNurseModeRPTFnc(CWnd *pWnd){
	 return ((CHMSNurseModeRPT*)pWnd)->OnSaveHMSNurseModeRPT();
} 
static int _OnCancelHMSNurseModeRPTFnc(CWnd *pWnd){
	 return ((CHMSNurseModeRPT*)pWnd)->OnCancelHMSNurseModeRPT();
} 
CHMSNurseModeRPT::CHMSNurseModeRPT(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSNurseModeRPT::~CHMSNurseModeRPT(){
}
void CHMSNurseModeRPT::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 90);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 90, 84);
	m_wndFromDate.Create(this,95, 59, 245, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 300, 95, 410, 120);
	m_wndExport.Create(this, _T("&Export"), 415, 95, 490, 120);
	m_wndPrintPreview.ShowWindow(SW_HIDE);
}
void CHMSNurseModeRPT::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	CDate dte(pMF->GetSysDate());
	m_nYear = dte.GetYear();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T(" 23:59");
	UpdateData(FALSE);
}

void CHMSNurseModeRPT::OnSetWindowEvents(){
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
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

}
void CHMSNurseModeRPT::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSNurseModeRPT::UpdateJson(BOOL bSave){
	if(bSave)
	{			
		m_jData[_T("Year")] =  m_nYear;
		m_jData[_T("ReportPeriod")] =  m_szReportPeriodKey;
		m_jData[_T("FromDate")] =  m_szFromDate;
		m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{			
		m_jData[_T("Year")].GetValue(m_nYear);
		m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
		m_jData[_T("FromDate")].GetValue(m_szFromDate);
		m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}

void CHMSNurseModeRPT::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSNurseModeRPT::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSNurseModeRPT::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}

int CHMSNurseModeRPT::SetMode(int nMode){
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
 			EnableButtons(TRUE, 3, 4, -1); 
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

/*void CHMSNurseModeRPT::OnYearChange(){
	
} */
/*void CHMSNurseModeRPT::OnYearSetfocus(){
	
} */
/*void CHMSNurseModeRPT::OnYearKillfocus(){
	
} */
int CHMSNurseModeRPT::OnYearCheckValue(){
	return 0;
}
 
void CHMSNurseModeRPT::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CHMSNurseModeRPT::OnReportPeriodSelendok(){
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
	CReportUtils ru;
	ru.LoadReportDate(m_nYear, str2int(m_szReportPeriodKey), m_szFromDate, m_szToDate);
	UpdateData(false);	 
	 
}

/*void CHMSNurseModeRPT::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSNurseModeRPT::OnReportPeriodKillfocus(){
	
}*/
long CHMSNurseModeRPT::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReportUtils ru;
	return ru.LoadReportPeriod(&m_wndReportPeriod, m_szReportPeriodKey);
}

/*void CHMSNurseModeRPT::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSNurseModeRPT::OnFromDateChange(){
	
} */
/*void CHMSNurseModeRPT::OnFromDateSetfocus(){
	
} */
/*void CHMSNurseModeRPT::OnFromDateKillfocus(){
	
} */
int CHMSNurseModeRPT::OnFromDateCheckValue(){
	return 0;
}
 
/*void CHMSNurseModeRPT::OnToDateChange(){
	
} */
/*void CHMSNurseModeRPT::OnToDateSetfocus(){
	
} */
/*void CHMSNurseModeRPT::OnToDateKillfocus(){
	
} */
int CHMSNurseModeRPT::OnToDateCheckValue(){
	return 0;
}
 
void CHMSNurseModeRPT::OnPrintPreviewSelect(){

}
 
void CHMSNurseModeRPT::OnExportSelect(){
	CExcel xls;
	CReportUtils ru;
	CString szFileName = _T("Che_do_ho_ly"), szFilePath;
	JSONVALUE jFormat;
	int nFirst_row = 6, nRet = 0;
	for (int i = 2; i <=9; i++)
	{
		jFormat[int2str(i)] = FMT_NUMBER1;
	}
	nRet = ru.Export(&xls, GetQueryString(), szFileName, jFormat, nFirst_row);
	if (nRet < 0)
	{
		return;
	}
	szFilePath.Format(_T("Exports\\%s.xls"), szFileName);
	xls.Save(szFilePath);	
} 
 
int CHMSNurseModeRPT::OnAddHMSNurseModeRPT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSNurseModeRPT::OnEditHMSNurseModeRPT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSNurseModeRPT::OnDeleteHMSNurseModeRPT(){
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
 		OnCancelHMSNurseModeRPT();
 	}
	return 0;
}
int CHMSNurseModeRPT::OnSaveHMSNurseModeRPT(){
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
 		//OnHMSNurseModeRPTListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSNurseModeRPT::OnCancelHMSNurseModeRPT(){
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
int CHMSNurseModeRPT::OnHMSNurseModeRPTListLoadData(){
	return 0;
}

CString CHMSNurseModeRPT::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Format(_T(" and hsie_date between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T(" and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and hsie_deptid = '%s'")
				, m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID());
	szSQL.Format(_T(" SELECT *") \
			_T(" FROM   (SELECT hsn_docno AS docno,") \
			_T("                Get_patientname(hsn_docno) AS patientname,") \
			_T("                hsn_mode AS nursemode") \
			_T("         FROM   hms_siexam_nursemode") \
			_T("		 LEFT JOIN hms_siexam ON (hsie_docno = hsn_docno AND hsie_idx = hsn_siexamidx)") \
			_T("		 WHERE 1=1 %s)") \
			_T(" pivot ") \
			_T(" ( ") \
			_T(" count(*) ") \
			_T("  for nursemode in (1,2,3,4,5,6,7,8) ") \
			_T(" ) ") \
			_T(" ORDER  BY docno"), szWhere);
	return szSQL;
}
