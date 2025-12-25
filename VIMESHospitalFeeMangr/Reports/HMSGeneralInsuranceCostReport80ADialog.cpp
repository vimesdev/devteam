#include "HMSGeneralInsuranceCostReport80ADialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSGeneralInsuranceCostReport80ADialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralInsuranceCostReport80ADialog *)pWnd)->OnToDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSGeneralInsuranceCostReport80ADialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSGeneralInsuranceCostReport80ADialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSGeneralInsuranceCostReport80ADialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSGeneralInsuranceCostReport80ADialog*)pWnd)->OnListDeleteItem();
} 

static int _OnListSelectAllFnc(CWnd *pWnd){
	 return ((CHMSGeneralInsuranceCostReport80ADialog*)pWnd)->OnListSelectAll();
} 

static int _OnListUnselectAllFnc(CWnd *pWnd){
	 return ((CHMSGeneralInsuranceCostReport80ADialog*)pWnd)->OnListUnselectAll();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSGeneralInsuranceCostReport80ADialog *pVw = (CHMSGeneralInsuranceCostReport80ADialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSGeneralInsuranceCostReport80ADialog *pVw = (CHMSGeneralInsuranceCostReport80ADialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSGeneralInsuranceCostReport80ADialog *pVw = (CHMSGeneralInsuranceCostReport80ADialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralInsuranceCostReport80ADialog *pVw = (CHMSGeneralInsuranceCostReport80ADialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralInsuranceCostReport80ADialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralInsuranceCostReport80ADialog*)pWnd)->OnAddHMSGeneralInsuranceCostReport80ADialog();
} 
static int _OnEditHMSGeneralInsuranceCostReport80ADialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralInsuranceCostReport80ADialog*)pWnd)->OnEditHMSGeneralInsuranceCostReport80ADialog();
} 
static int _OnDeleteHMSGeneralInsuranceCostReport80ADialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralInsuranceCostReport80ADialog*)pWnd)->OnDeleteHMSGeneralInsuranceCostReport80ADialog();
} 
static int _OnSaveHMSGeneralInsuranceCostReport80ADialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralInsuranceCostReport80ADialog*)pWnd)->OnSaveHMSGeneralInsuranceCostReport80ADialog();
} 
static int _OnCancelHMSGeneralInsuranceCostReport80ADialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralInsuranceCostReport80ADialog*)pWnd)->OnCancelHMSGeneralInsuranceCostReport80ADialog();
} 
CHMSGeneralInsuranceCostReport80ADialog::CHMSGeneralInsuranceCostReport80ADialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CHMSGeneralInsuranceCostReport80ADialog::~CHMSGeneralInsuranceCostReport80ADialog(){
}
void CHMSGeneralInsuranceCostReport80ADialog::OnCreateComponents(){
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 205, 30, 305, 55);
	m_wndReportPeriod.Create(this,310, 30, 395, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 200, 85); 
	m_wndReportFilter.Create(this, _T("Report Filter"), 5, 5, 400, 370);
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 395, 85); 
	m_wndList.Create(this,10, 90, 395, 365); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 65, 375, 145, 400);
	m_wndPrint.Create(this, _T("&Print"), 150, 375, 230, 400);
	m_wndExport.Create(this, _T("&Export"), 235, 375, 315, 400);
	m_wndClose.Create(this, _T("&Close"), 320, 375, 400, 400);

}
void CHMSGeneralInsuranceCostReport80ADialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.Format(2, 1, 17);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 220);
	m_wndList.InsertColumn(2, _T("Code"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Group"), CFMT_TEXT, 45);
	m_wndList.SetCheckBox(true);

}
void CHMSGeneralInsuranceCostReport80ADialog::OnSetWindowEvents(){
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
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.AddEvent(1, _T("Select All"), _OnListSelectAllFnc);
	m_wndList.AddEvent(2, _T("Unselect All"), _OnListUnselectAllFnc);

	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_EDIT);
	OnListLoadData();
}
void CHMSGeneralInsuranceCostReport80ADialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSGeneralInsuranceCostReport80ADialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGeneralInsuranceCostReport80ADialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralInsuranceCostReport80ADialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	

}
int CHMSGeneralInsuranceCostReport80ADialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
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
/*void CHMSGeneralInsuranceCostReport80ADialog::OnYearChange(){
	
} */
/*void CHMSGeneralInsuranceCostReport80ADialog::OnYearSetfocus(){
	
} */
/*void CHMSGeneralInsuranceCostReport80ADialog::OnYearKillfocus(){
	
} */
int CHMSGeneralInsuranceCostReport80ADialog::OnYearCheckValue(){
	return 0;
} 
void CHMSGeneralInsuranceCostReport80ADialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralInsuranceCostReport80ADialog::OnReportPeriodSelendok(){
	
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), m_nYear, dte.GetMonthLastDay());
	}

	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	UpdateData(false);
}
/*void CHMSGeneralInsuranceCostReport80ADialog::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSGeneralInsuranceCostReport80ADialog::OnReportPeriodKillfocus(){
	
}*/
long CHMSGeneralInsuranceCostReport80ADialog::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	};
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
/*void CHMSGeneralInsuranceCostReport80ADialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSGeneralInsuranceCostReport80ADialog::OnFromDateChange(){
	
} */
/*void CHMSGeneralInsuranceCostReport80ADialog::OnFromDateSetfocus(){
	
} */
/*void CHMSGeneralInsuranceCostReport80ADialog::OnFromDateKillfocus(){
	
} */
int CHMSGeneralInsuranceCostReport80ADialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSGeneralInsuranceCostReport80ADialog::OnToDateChange(){
	
} */
/*void CHMSGeneralInsuranceCostReport80ADialog::OnToDateSetfocus(){
	
} */
/*void CHMSGeneralInsuranceCostReport80ADialog::OnToDateKillfocus(){
	
} */
int CHMSGeneralInsuranceCostReport80ADialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSGeneralInsuranceCostReport80ADialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, !bCheck);	
} 
void CHMSGeneralInsuranceCostReport80ADialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSGeneralInsuranceCostReport80ADialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSGeneralInsuranceCostReport80ADialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hig_idx as id, hig_name as name, hig_note as code, hig_group as group FROM hms_insurance_group ORDER BY hig_idx"));

	int nItem;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("group")), 
			NULL);
		nItem = m_wndList.SetCheck(nItem, TRUE);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSGeneralInsuranceCostReport80ADialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = true;
	m_szGroups.Empty();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		if(m_wndList.GetCheck(i)){
			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");
			m_szGroups.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
	PrintGeneralCost80AReport(m_szReportPeriodKey, m_szFromDate, m_szToDate, m_szGroups, m_bPreview);	
} 
void CHMSGeneralInsuranceCostReport80ADialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = false;
	m_szGroups.Empty();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		if(m_wndList.GetCheck(i)){
			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");
			m_szGroups.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}

	PrintGeneralCost80AReport(m_szReportPeriodKey, m_szFromDate, m_szToDate, m_szGroups, m_bPreview);	
} 
void CHMSGeneralInsuranceCostReport80ADialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szGroups.Empty();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		if(m_wndList.GetCheck(i)){
			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");
			m_szGroups.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
} 
void CHMSGeneralInsuranceCostReport80ADialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSGeneralInsuranceCostReport80ADialog::OnAddHMSGeneralInsuranceCostReport80ADialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSGeneralInsuranceCostReport80ADialog::OnEditHMSGeneralInsuranceCostReport80ADialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralInsuranceCostReport80ADialog::OnDeleteHMSGeneralInsuranceCostReport80ADialog(){
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
 		OnCancelHMSGeneralInsuranceCostReport80ADialog(); 
 	}
	return 0;
}
int CHMSGeneralInsuranceCostReport80ADialog::OnSaveHMSGeneralInsuranceCostReport80ADialog(){
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
 		//OnHMSGeneralInsuranceCostReport80ADialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSGeneralInsuranceCostReport80ADialog::OnCancelHMSGeneralInsuranceCostReport80ADialog(){
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
int CHMSGeneralInsuranceCostReport80ADialog::OnHMSGeneralInsuranceCostReport80ADialogListLoadData(){
	return 0;
}


int CHMSGeneralInsuranceCostReport80ADialog::OnListSelectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return i;
}

int CHMSGeneralInsuranceCostReport80ADialog::OnListUnselectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return i;
}
void CHMSGeneralInsuranceCostReport80ADialog::PrintGeneralCost80AReport(CString szReportPeriod, CString szFromDate, CString szToDate, CString szGroups, bool bPreview)
{	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere;
	szWhere.Empty();
	if(!szGroups.IsEmpty())
		szWhere.Format(_T(" and hc_groupid in(%s) "), szGroups);

	szSQL.Format(__T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	hc_cardno as cardno,") \
		_T("  	hc_regcode as regplace,") \
		_T("  	hc_line as insline,") \
		_T(" 	date(hcr_admitdate) as admitdate, ") \
		_T(" 	date(hcr_dischargedate) as dischargedate, ") \
		_T(" 	bedqty as totaltreat, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(cost) as cost,") \
		_T("  	sum(difcost) as difcost,") \
		_T("  	sum(inscost) as inscost,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(bloodfee) as bloodfee ,") \
		_T("  	sum(perfusionfee) as perfusionfee ,") \
		_T("  	sum(testfee+explorationfee) as testfee ,") \
		_T("  	sum(pacsfee) as pacsfee ,") \
		_T("  	sum(normtechfee) as normtechfee ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(examfee) as examfee ,") \
		_T("  	sum(bedfee) as bedfee ,") \
		_T("  	sum(otherfee) as otherfee ,") \
		_T("  	sum(discount) as inspaid ,") \
		_T("  	sum(patpaid) as patpaid ") \
		_T("  FROM") \
		_T("  (") \
		_T("      SELECT ") \
		_T("  	hfi_deptid,") \
		_T("  	hfi_class,") \
		_T("  	hfi_docno,") \
		_T("  	hfi_invoiceno,") \
		_T("  	hfe_group as groupid,") \
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("  	hfe_cost as cost,") \
		_T("  	hfe_diffcost as difcost,") \
		_T("  	hfe_cost-hfe_diffcost as inscost,") \
		_T("  	case when substr(hfe_group, 1, 2)='A1'then hfe_cost-hfe_diffcost else 0 end as drugfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A2'then hfe_cost-hfe_diffcost else 0 end as bloodfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A3'then hfe_cost-hfe_diffcost else 0 end as perfusionfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='B1'then hfe_cost-hfe_diffcost else 0 end as testfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='B2' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='B3'then hfe_cost-hfe_diffcost else 0 end as explorationfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as normtechfee,") \
		_T("  	case when hfe_hitech='Y' then hfe_cost-hfe_diffcost else 0 end as hitechfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A9' then hfe_cost-hfe_diffcost else 0 end as materialfee,") \
		_T("	(select  sum(hb_treatqty) from hms_bed  where hb_docno =hfe_docno) as bedqty, ") \
		_T("  	case when hfe_group='C0000' then hfe_cost-hfe_diffcost else 0 end as bedfee,") \
		_T("  	case when hfe_group='D0000' then hfe_cost-hfe_diffcost else 0 end as examfee,") \
		_T("  	case when hfe_group='F0000' then hfe_cost-hfe_diffcost else 0 end as otherfee,") \
		_T("  	hfe_discount as discount,") \
		_T("  	hfe_patpaid as patpaid,") \
		_T("  	hfe_diffpaid as diffpaid,") \
		_T("  	hfe_patdebt as patdebt") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfe_invoiceno=hfi_invoiceno)") \
		_T("     WHERE hfe_status='P' and hfe_type not in('E')") \
		_T(" 	and hfe_cost > 0 ") \
		_T(" 	and date(hfi_recvdate) between date('%s') and date('%s')") \
		_T(" 	and hfi_type='P' and hfe_group<>'D0000' ") \
		_T(" 	and hfi_class in('I','O') ") \
		_T("  ) as tbl ") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ") \
		_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T("  LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
		_T("  WHERE 	hcr_status ='T' and ho_type in('I','C') and length(hc_cardno) > 0 %s") \
		_T("  GROUP BY docno, pname, birthyear, sex, cardno, insline, regplace, icd10, admitdate, dischargedate, totaltreat ") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY insline,invoiceno"), szFromDate, szToDate, szWhere);
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No Data"), MB_OK);
		return ;
	}
	if(!rpt.Init(_T("Reports/HMS/HF_GENERALCOSTOFINPATIENT80AREPORT.RPT")) )
		return;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ObjectGroup"), _T(""));
	rpt.GetReportHeader()->SetValue(_T("ReportPeriod"), szReportPeriod);
	rs.GetValue(_T("invoiceno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(szToDate, yyyymmdd,ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;

	long double grpCost[13];
	long double ttlCost[13];
	double cost = 0;
	for (int i =0; i < 13; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("insline"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField;
			if(grpCost[0] > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i =0; i < 13; i++)
				{
					szField.Format(_T("S%d"), i+12);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					ttlCost[i] += grpCost[i];
					
					grpCost[i] = 0;				
				}
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InsuranceLine"), pMF->GetSelectionString(_T("hms_insline"), szNewLine));
			szOldLine = szNewLine;
			
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
		rs.GetValue(_T("regplace"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		//tmpStr.AppendFormat(_T("-%s"), rs.GetValue(_T("invoiceno")));
		rptDetail->SetValue(_T("8"), tmpStr);
		tmpStr = CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("9"), tmpStr);
		tmpStr = CDate::Convert(rs.GetValue(_T("dischargedate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("totaltreat"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		
		rs.GetValue(_T("inscost"), cost);
		grpCost[0] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		
		rs.GetValue(_T("bedfee"), cost);
		grpCost[1] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.GetValue(_T("drugfee"), cost);
		grpCost[2] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[3] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);

		rs.GetValue(_T("perfusionfee"), cost);
		grpCost[4] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);

		rs.GetValue(_T("testfee"), cost);
		grpCost[5] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[6] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[7] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[8] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr);

		rs.GetValue(_T("materialfee"), cost);
		grpCost[9] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);

		rs.GetValue(_T("otherfee"), cost);
		grpCost[10] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("22"), tmpStr);
		
		rs.GetValue(_T("patpaid"), cost);
		grpCost[11] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("23"), tmpStr);

		rs.GetValue(_T("inspaid"), cost);
		grpCost[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("24"), tmpStr);
		rs.MoveNext();
	}
	for (int i =0; i < 13; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	if(grpCost[0] > 0){
		CString szField;
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i =0; i < 13; i++)
		{
			szField.Format(_T("S%d"), i+12);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}
	if(ttlCost[0] > 0){
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		for (int i =0; i < 13; i++)
		{
			
			szField.Format(_T("S%d"), i+12);
			FormatCurrency(ttlCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
			ttlCost[i] += grpCost[i];
		}

	}

	//Page Footer
	//Report Footer
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

}