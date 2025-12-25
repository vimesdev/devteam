#include "rptTransferFloorDialog.h"
#include "MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CrptTransferFloorDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptTransferFloorDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CrptTransferFloorDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptTransferFloorDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptTransferFloorDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptTransferFloorDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CrptTransferFloorDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnStatusAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CrptTransferFloorDialog *pVw = (CrptTransferFloorDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptTransferFloorDialog *pVw = (CrptTransferFloorDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptTransferFloorDialog *pVw = (CrptTransferFloorDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	 ((CrptTransferFloorDialog*)pWnd)->OnInsuranceSelect();
}
static void _OnDiscountSelectFnc(CWnd *pWnd){
	 ((CrptTransferFloorDialog*)pWnd)->OnDiscountSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	 ((CrptTransferFloorDialog*)pWnd)->OnServiceSelect();
}
static void _OnFloorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptTransferFloorDialog* )pWnd)->OnFloorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFloorSelendokFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnFloorSelendok();
}
/*static void _OnFloorSetfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnFloorKillfocus();
}*/
/*static void _OnFloorKillfocusFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnFloorKillfocus();
}*/
static long _OnFloorLoadDataFnc(CWnd *pWnd){
	return ((CrptTransferFloorDialog *)pWnd)->OnFloorLoadData();
}
/*static void _OnFloorAddNewFnc(CWnd *pWnd){
	((CrptTransferFloorDialog *)pWnd)->OnFloorAddNew();
}*/
static int _OnAddrptTransferFloorDialogFnc(CWnd *pWnd){
	 return ((CrptTransferFloorDialog*)pWnd)->OnAddrptTransferFloorDialog();
} 
static int _OnEditrptTransferFloorDialogFnc(CWnd *pWnd){
	 return ((CrptTransferFloorDialog*)pWnd)->OnEditrptTransferFloorDialog();
} 
static int _OnDeleterptTransferFloorDialogFnc(CWnd *pWnd){
	 return ((CrptTransferFloorDialog*)pWnd)->OnDeleterptTransferFloorDialog();
} 
static int _OnSaverptTransferFloorDialogFnc(CWnd *pWnd){
	 return ((CrptTransferFloorDialog*)pWnd)->OnSaverptTransferFloorDialog();
} 
static int _OnCancelrptTransferFloorDialogFnc(CWnd *pWnd){
	 return ((CrptTransferFloorDialog*)pWnd)->OnCancelrptTransferFloorDialog();
} 
CrptTransferFloorDialog::CrptTransferFloorDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 410;
	m_nDlgHeight = 220;
	SetDefaultValues();
}
CrptTransferFloorDialog::~CrptTransferFloorDialog(){
}
void CrptTransferFloorDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 400, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 204, 29, 304, 54);
	m_wndReportPeriod.Create(this,309, 29, 394, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 110, 84);
	m_wndFromDate.Create(this,115, 59, 200, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 59, 305, 84);
	m_wndToDate.Create(this,310, 59, 395, 84); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 119, 110, 144);
	m_wndStatus.Create(this,115, 119, 395, 144); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 150, 185, 230, 210);
	m_wndPrint.Create(this, _T("&Print"), 235, 185, 315, 210);
	m_wndClose.Create(this, _T("&Close"), 320, 185, 400, 210);
	m_wndInsurance.Create(this, _T("Insurance"), 80, 155, 180, 180);
	m_wndDiscount.Create(this, _T("Discount"), 185, 155, 285, 180);
	m_wndService.Create(this, _T("Service"), 290, 155, 390, 180);
	m_wndFloorLabel.Create(this, _T("Floor"), 10, 89, 110, 114);
	m_wndFloor.Create(this,115, 89, 395, 114); 

}
void CrptTransferFloorDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndFloor.SetCheckValue(true);
	m_wndFloor.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndFloor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFloor.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CrptTransferFloorDialog::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndDiscount.SetEvent(WE_CLICK, _OnDiscountSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndFloor.SetEvent(WE_SELENDOK, _OnFloorSelendokFnc);
	//m_wndFloor.SetEvent(WE_SETFOCUS, _OnFloorSetfocusFnc);
	//m_wndFloor.SetEvent(WE_KILLFOCUS, _OnFloorKillfocusFnc);
	m_wndFloor.SetEvent(WE_SELCHANGE, _OnFloorSelectChangeFnc);
	m_wndFloor.SetEvent(WE_LOADDATA, _OnFloorLoadDataFnc);
	//m_wndFloor.SetEvent(WE_ADDNEW, _OnFloorAddNewFnc);

}
void CrptTransferFloorDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Check(pDX, m_wndInsurance.GetDlgCtrlID(), m_bInsurance);
	DDX_Check(pDX, m_wndDiscount.GetDlgCtrlID(), m_bDiscount);
	DDX_Check(pDX, m_wndService.GetDlgCtrlID(), m_bService);
	DDX_TextEx(pDX, m_wndFloor.GetDlgCtrlID(), m_szFloorKey);

}
void CrptTransferFloorDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptTransferFloorDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptTransferFloorDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();
	m_bInsurance=FALSE;
	m_bDiscount=FALSE;
	m_bService=FALSE;
	m_szFloorKey.Empty();

}
int CrptTransferFloorDialog::SetMode(int nMode){
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
/*void CrptTransferFloorDialog::OnYearChange(){
	
} */
/*void CrptTransferFloorDialog::OnYearSetfocus(){
	
} */
/*void CrptTransferFloorDialog::OnYearKillfocus(){
	
} */
int CrptTransferFloorDialog::OnYearCheckValue(){
	return 0;
} 
void CrptTransferFloorDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptTransferFloorDialog::OnReportPeriodSelendok(){
	 
}
/*void CrptTransferFloorDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CrptTransferFloorDialog::OnReportPeriodKillfocus(){
	
}*/
long CrptTransferFloorDialog::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptTransferFloorDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CrptTransferFloorDialog::OnFromDateChange(){
	
} */
/*void CrptTransferFloorDialog::OnFromDateSetfocus(){
	
} */
/*void CrptTransferFloorDialog::OnFromDateKillfocus(){
	
} */
int CrptTransferFloorDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptTransferFloorDialog::OnToDateChange(){
	
} */
/*void CrptTransferFloorDialog::OnToDateSetfocus(){
	
} */
/*void CrptTransferFloorDialog::OnToDateKillfocus(){
	
} */
int CrptTransferFloorDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptTransferFloorDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptTransferFloorDialog::OnStatusSelendok(){
	 
}
/*void CrptTransferFloorDialog::OnStatusSetfocus(){
	
}*/
/*void CrptTransferFloorDialog::OnStatusKillfocus(){
	
}*/
long CrptTransferFloorDialog::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptTransferFloorDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptTransferFloorDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptTransferFloorDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptTransferFloorDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CrptTransferFloorDialog::OnInsuranceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CrptTransferFloorDialog::OnDiscountSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CrptTransferFloorDialog::OnServiceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CrptTransferFloorDialog::OnFloorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptTransferFloorDialog::OnFloorSelendok(){
	 
}
/*void CrptTransferFloorDialog::OnFloorSetfocus(){
	
}*/
/*void CrptTransferFloorDialog::OnFloorKillfocus(){
	
}*/
long CrptTransferFloorDialog::OnFloorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFloor.IsSearchKey() && !m_szFloorKey.IsEmpty()){
	};
	m_wndFloor.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFloor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptTransferFloorDialog::OnFloorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CrptTransferFloorDialog::OnAddrptTransferFloorDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptTransferFloorDialog::OnEditrptTransferFloorDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptTransferFloorDialog::OnDeleterptTransferFloorDialog(){
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
 		OnCancelrptTransferFloorDialog(); 
 	}
	return 0;
}
int CrptTransferFloorDialog::OnSaverptTransferFloorDialog(){
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
 		//OnrptTransferFloorDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptTransferFloorDialog::OnCancelrptTransferFloorDialog(){
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
int CrptTransferFloorDialog::OnrptTransferFloorDialogListLoadData(){
	return 0;
}
