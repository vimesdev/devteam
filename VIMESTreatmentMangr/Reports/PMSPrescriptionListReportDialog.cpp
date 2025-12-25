#include "PMSPrescriptionListReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionListReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionListReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionListReportDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionListReportDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnStockAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionListReportDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionListReportDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnDepartmentAddNew();
}*/

static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSPrescriptionListReportDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypetKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionListReportDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPMSPrescriptionListReportDialog *)pWnd)->OnTypeAddNew();
}*/


static void _OnInsuranceSelectFnc(CWnd *pWnd){
	 ((CPMSPrescriptionListReportDialog*)pWnd)->OnInsuranceSelect();
}
static void _OnDiscountSelectFnc(CWnd *pWnd){
	 ((CPMSPrescriptionListReportDialog*)pWnd)->OnDiscountSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	 ((CPMSPrescriptionListReportDialog*)pWnd)->OnServiceSelect();
}
static void _OnOtherSelectFnc(CWnd *pWnd){
	 ((CPMSPrescriptionListReportDialog*)pWnd)->OnOtherSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMSPrescriptionListReportDialog *pVw = (CPMSPrescriptionListReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSPrescriptionListReportDialog *pVw = (CPMSPrescriptionListReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSPrescriptionListReportDialog *pVw = (CPMSPrescriptionListReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMSPrescriptionListReportDialog *pVw = (CPMSPrescriptionListReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMSPrescriptionListReportDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionListReportDialog*)pWnd)->OnAddPMSPrescriptionListReportDialog();
} 
static int _OnEditPMSPrescriptionListReportDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionListReportDialog*)pWnd)->OnEditPMSPrescriptionListReportDialog();
} 
static int _OnDeletePMSPrescriptionListReportDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionListReportDialog*)pWnd)->OnDeletePMSPrescriptionListReportDialog();
} 
static int _OnSavePMSPrescriptionListReportDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionListReportDialog*)pWnd)->OnSavePMSPrescriptionListReportDialog();
} 
static int _OnCancelPMSPrescriptionListReportDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionListReportDialog*)pWnd)->OnCancelPMSPrescriptionListReportDialog();
} 
CPMSPrescriptionListReportDialog::CPMSPrescriptionListReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 285;
	m_szTitle=_T("Bang ke don thuoc");
	SetDefaultValues();
}
CPMSPrescriptionListReportDialog::~CPMSPrescriptionListReportDialog(){
}
void CPMSPrescriptionListReportDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 400, 180);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 225, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 285, 55);
	m_wndToDate.Create(this,285, 30, 395, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 110, 85);
	m_wndStock.Create(this,115, 60, 395, 85); 
	m_wndDepartmentLabel.Create(this, _T("Doctor"), 10, 90, 110, 115);
	m_wndDepartment.Create(this,115, 90, 395, 115); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 120, 110, 145);
	m_wndType.Create(this,115, 120, 395, 145); 

	m_wndInsurance.Create(this, _T("Insurance"), 10, 150, 110, 175);
	m_wndDiscount.Create(this, _T("Discount"), 115, 150, 215, 175);
	m_wndService.Create(this, _T("Service"), 220, 150, 320, 175);
	m_wndOther.Create(this, _T("Other"), 325, 150, 395, 175);
	
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 85, 185, 160, 205);
	m_wndPrint.Create(this, _T("&Print"), 165, 185, 240, 205);
	m_wndExport.Create(this, _T("&Export"), 245, 185, 320, 205);
	m_wndClose.Create(this, _T("&Close"), 325, 185, 400, 205);

}
void CPMSPrescriptionListReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 220);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

}
void CPMSPrescriptionListReportDialog::OnSetWindowEvents(){
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);

	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);

	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndDiscount.SetEvent(WE_CLICK, _OnDiscountSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndOther.SetEvent(WE_CLICK, _OnOtherSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDateTime();
	m_bInsurance = m_bDiscount = m_bService = m_bOther = TRUE;
	SetMode(VM_EDIT);

}
void CPMSPrescriptionListReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Check(pDX, m_wndInsurance.GetDlgCtrlID(), m_bInsurance);
	DDX_Check(pDX, m_wndDiscount.GetDlgCtrlID(), m_bDiscount);
	DDX_Check(pDX, m_wndService.GetDlgCtrlID(), m_bService);
	DDX_Check(pDX, m_wndOther.GetDlgCtrlID(), m_bOther);

}
void CPMSPrescriptionListReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSPrescriptionListReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPMSPrescriptionListReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szDepartmentKey.Empty();
	m_szTypeKey.Empty();
	m_bInsurance=FALSE;
	m_bDiscount=FALSE;
	m_bService=FALSE;
	m_bOther=FALSE;

}
int CPMSPrescriptionListReportDialog::SetMode(int nMode){
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
/*void CPMSPrescriptionListReportDialog::OnFromDateChange(){
	
} */
/*void CPMSPrescriptionListReportDialog::OnFromDateSetfocus(){
	
} */
/*void CPMSPrescriptionListReportDialog::OnFromDateKillfocus(){
	
} */
int CPMSPrescriptionListReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionListReportDialog::OnToDateChange(){
	
} */
/*void CPMSPrescriptionListReportDialog::OnToDateSetfocus(){
	
} */
/*void CPMSPrescriptionListReportDialog::OnToDateKillfocus(){
	
} */
int CPMSPrescriptionListReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CPMSPrescriptionListReportDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionListReportDialog::OnStockSelendok(){
	 
}
/*void CPMSPrescriptionListReportDialog::OnStockSetfocus(){
	
}*/
/*void CPMSPrescriptionListReportDialog::OnStockKillfocus(){
	
}*/
long CPMSPrescriptionListReportDialog::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0){
		szWhere.Format(_T(" AND pmsl_stockid=%d"), ToInt(m_szStockKey));
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT pmsl_stockid as id, pmsl_name as name FROM pms_stocklist %s ORDER BY pmsl_stockid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSPrescriptionListReportDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSPrescriptionListReportDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionListReportDialog::OnDepartmentSelendok(){
	 
}
/*void CPMSPrescriptionListReportDialog::OnDepartmentSetfocus(){
	
}*/
/*void CPMSPrescriptionListReportDialog::OnDepartmentKillfocus(){
	
}*/
long CPMSPrescriptionListReportDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" WHERE su_userid='%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT su_userid as id, su_name as name FROM sys_user %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMSPrescriptionListReportDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CPMSPrescriptionListReportDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSPrescriptionListReportDialog::OnTypeSelendok(){
	 
}
/*void CPMSPrescriptionListReportDialog::OnTypeSetfocus(){
	
}*/
/*void CPMSPrescriptionListReportDialog::OnTypeKillfocus(){
	
}*/
long CPMSPrescriptionListReportDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szTypeKey);
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_feegroup WHERe substr(hfg_id,1, 1)='A' %s ORDER BY hfg_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSPrescriptionListReportDialog::TypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

	void CPMSPrescriptionListReportDialog::OnInsuranceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPMSPrescriptionListReportDialog::OnDiscountSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPMSPrescriptionListReportDialog::OnServiceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPMSPrescriptionListReportDialog::OnOtherSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CPMSPrescriptionListReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint(true);
} 
void CPMSPrescriptionListReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint();
} 
void CPMSPrescriptionListReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnExport();
} 
void CPMSPrescriptionListReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CPMSPrescriptionListReportDialog::OnAddPMSPrescriptionListReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMSPrescriptionListReportDialog::OnEditPMSPrescriptionListReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSPrescriptionListReportDialog::OnDeletePMSPrescriptionListReportDialog(){
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
 		OnCancelPMSPrescriptionListReportDialog(); 
 	}
	return 0;
}
int CPMSPrescriptionListReportDialog::OnSavePMSPrescriptionListReportDialog(){
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
 		//OnPMSPrescriptionListReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMSPrescriptionListReportDialog::OnCancelPMSPrescriptionListReportDialog(){
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
int CPMSPrescriptionListReportDialog::OnPMSPrescriptionListReportDialogListLoadData(){
	return 0;
}


void CPMSPrescriptionListReportDialog::OnPrint(bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL, szObjects, szWhere, tmpStr2;
	if(!rpt.Init(_T("Reports/HMS/PMS_PRESCRIPTIONLISTREPORT.RPT")) )
		return;
	UpdateData(TRUE);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);


	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStock.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("Department"), m_wndDepartment.GetCurrent(1));
	tmpStr2 = _T("' '");
	if(m_bInsurance)
	{
		TranslateString(_T("Insurance"), tmpStr);
		szObjects.Format(_T("%s"), tmpStr);
		tmpStr2 += _T(",'I','C'");
	}
	if(m_bDiscount)
	{
		TranslateString(_T("Discount"), tmpStr);
		if(!szObjects.IsEmpty())
			szObjects += _T("; ");
		szObjects.AppendFormat(_T("%s"), tmpStr);
		tmpStr2 += _T(",'D','Z'");
	}

	if(m_bService)
	{
		TranslateString(_T("Service"), tmpStr);
		if(!szObjects.IsEmpty())
			szObjects += _T("; ");
		szObjects.AppendFormat(_T("%s"), tmpStr);
		tmpStr2 += _T(",'S','X'");
	}
	if(m_bOther)
	{
		TranslateString(_T("Other"), tmpStr);
		if(!szObjects.IsEmpty())
			szObjects += _T("; ");
		szObjects.AppendFormat(_T("%s"), tmpStr);
		tmpStr2 += _T(",'Y'");
	}
	szWhere.Format(_T(" AND ho_type in(%s) "), tmpStr2);
	tmpStr.Empty();
	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpo_doctor='%s' "), m_szDepartmentKey);


	if(!m_szTypeKey.IsEmpty())			
				szWhere.AppendFormat(_T(" and substr(pmi_typeid, 1, length(rtrim('%s','0'))) =rtrim('%s','0')   "), m_szTypeKey, m_szTypeKey);
			
	rpt.GetReportHeader()->SetValue(_T("Object"), szObjects);
	//Page Header
	//Report Detail
	szSQL.Format(_T(" SELECT distinct hpo_orderid as orderid,") \
		_T(" 	hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age, ") \
		_T("	(select su_name from sys_user where su_userid=hpo_doctor) as doctor, ")
		_T("	ho_type as objecttype ")
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pharmacyorder_line ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid) ") \
		_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
		_T(" LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
		_T(" LEFT JOIN hms_object ON(hd_object=ho_id) ")
		_T(" WHERE 	hpo_status IN('A','I')") \
		_T(" 	and hpo_stockid=%d ") \
		_T("	and (hpo_issuedate) between ('%s') and ('%s') ")
		_T(" 	and hpo_type in('P','D','M','E') %s ") \
		_T(" ORDER BY objecttype, orderid") , ToInt(m_szStockKey), m_szFromDate, m_szToDate, szWhere);

	CReportSection* rptDetail;
	CReportSection* rptGroup;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	long nItem = 1, nTotalOrder=0;
	long nOrderID;
	double nTotalAmount=0,cost, nAmount;

	while(!rs.IsEOF())
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
		rs.GetValue(_T("orderid"), nOrderID);
		tmpStr.Format(_T("%ld"), nOrderID);
		rptGroup->SetValue(_T("OrderID"), tmpStr);
		TranslateString(_T("Age"), tmpStr2);
		tmpStr.Format(_T("[%s]  -  %s   -   %s:%s"), rs.GetValue(_T("docno")), rs.GetValue(_T("pname")),tmpStr2,rs.GetValue(_T("Age")));
		rptGroup->SetValue(_T("PName"), tmpStr);
		rs.GetValue(_T("doctor"), tmpStr);
		rptGroup->SetValue(_T("Amount"), tmpStr);		

		szSQL.Format(_T(" SELECT 	hpol_idx as idx, pmi_id as id, ") \
			_T(" 	pmi_name as name,") \
			_T(" 	pmi_unit as unit,") \
			_T(" 	pmsi_vatprice as price,") \
			_T(" 	sum(hpol_issueqty) as qty,") \
			_T(" 	sum(hpol_issueqty)*pmsi_vatprice as amount") \
			_T(" FROM hms_pharmacyorder_line ") \
			_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
			_T(" LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
			_T(" WHERE hpol_orderid=%ld") \
			_T(" GROUP BY id, name, unit, price, idx") \
			_T(" ORDER BY idx"), nOrderID, szWhere);
		//_fmsg(_T("%s"), szSQL);
		rsl.ExecSQL(szSQL);
		nItem = 1;
		nAmount  =0;
		while(!rsl.IsEOF())
		{
			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%ld"), nItem++);			
			rptDetail->SetValue(_T("1"), tmpStr);
			rsl.GetValue(_T("name"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rsl.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);			
			rsl.GetValue(_T("price"), tmpStr);			
			rptDetail->SetValue(_T("4"), tmpStr);
			rsl.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rsl.GetValue(_T("amount"), cost);
			FormatCurrency(cost, tmpStr);			
			rptDetail->SetValue(_T("6"), tmpStr);				
			nAmount +=cost;
			rsl.MoveNext();
		}		 
		nTotalAmount += nAmount;
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));		
		rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
		rptGroup->GetItem(_T("PName"))->SetItalic(true);
		rptGroup->GetItem(_T("Amount"))->SetItalic(true);
		TranslateString(_T("Total Amount"), tmpStr);
		rptGroup->SetValue(_T("PName"), tmpStr);
		FormatCurrency(nAmount, tmpStr);		
		rptGroup->SetValue(_T("Amount"), tmpStr);
		nTotalOrder ++;
		rs.MoveNext();
	}
	
	//Page Footer
	//Report Footer

	tmpStr.Format(_T("%ld"), nTotalOrder);
	rpt.GetReportFooter()->SetValue(_T("TotalOrder"), tmpStr);
	//tmpStr.Format(_T("%.2f"), nTotalAmount);
	FormatCurrency(nTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

}
void CPMSPrescriptionListReportDialog::OnExport()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL, szObjects, szWhere, tmpStr2;
	
	UpdateData(TRUE);

	szSysDate = pMF->GetSysDate(); 
	
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0,3,12);	
	xls.SetCellText(0, 3, _T("BANG KE DON THUOC"),CELL_FORMAT_TEXT,true,18,0);
	xls.SetCellMergedColumns(0,4,12);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr,CELL_FORMAT_TEXT,true,12,0);
	xls.SetCellText(0, 5, m_wndStock.GetCurrent(1),CELL_FORMAT_TEXT,true,12,0);
	xls.SetCellText(0, 6, m_wndDepartment.GetCurrent(1),CELL_FORMAT_TEXT,true,12,0);

	long nRow = 7;
	xls.SetCellText(0, nRow, _T("STT"));
	xls.SetCellText(1, nRow, _T("Ma thuoc"));
	xls.SetCellText(2, nRow, _T("Ten thuoc / Ham luong"));
	xls.SetCellText(3, nRow, _T("Don vi"));
	xls.SetCellText(4, nRow, _T("Don gia"));		
	xls.SetCellText(5, nRow, _T("SL Ton dau"));
	
	
	tmpStr2 = _T("' '");
	if(m_bInsurance)
	{
		TranslateString(_T("Insurance"), tmpStr);
		szObjects.Format(_T("%s"), tmpStr);
		tmpStr2 += _T(",'I','C'");
	}
	if(m_bDiscount)
	{
		TranslateString(_T("Discount"), tmpStr);
		if(!szObjects.IsEmpty())
			szObjects += _T("; ");
		szObjects.AppendFormat(_T("%s"), tmpStr);
		tmpStr2 += _T(",'D','Z'");
	}

	if(m_bService)
	{
		TranslateString(_T("Service"), tmpStr);
		if(!szObjects.IsEmpty())
			szObjects += _T("; ");
		szObjects.AppendFormat(_T("%s"), tmpStr);
		tmpStr2 += _T(",'S','X'");
	}
	if(m_bOther)
	{
		TranslateString(_T("Other"), tmpStr);
		if(!szObjects.IsEmpty())
			szObjects += _T("; ");
		szObjects.AppendFormat(_T("%s"), tmpStr);
		tmpStr2 += _T(",'Y'");
	}
	szWhere.Format(_T(" AND ho_type in(%s) "), tmpStr2);
	tmpStr.Empty();

	if(!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpo_doctor='%s' "), m_szDepartmentKey);
	
	//Page Header
	//Report Detail
	szSQL.Format(_T(" SELECT 	hpo_orderid as orderid,") \
		_T(" 	hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age, ") \
		_T("	(select su_name from sys_user where su_userid=hpo_doctor) as doctor, ")
		_T("	ho_type as objecttype ")
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
		_T(" LEFT JOIN hms_object ON(hd_object=ho_id) ")
		_T(" WHERE 	hpo_status IN('A','I')") \
		_T(" 	and hpo_stockid=%d ") \
		_T("	and (hpo_issuedate) between ('%s') and ('%s') ")
		_T(" 	and hpo_type in('P','D','M','E') %s ") \
		_T(" ORDER BY objecttype, hpo_issuedate") , ToInt(m_szStockKey), m_szFromDate, m_szToDate, szWhere);

	
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	int nItem = 1;
	long nOrderID, nTotalOrder=0;
	long double nTotalAmount=0, nAmount;

	while(!rs.IsEOF())
	{	
		nRow++;
		nTotalOrder++;
		xls.SetCellMergedColumns(1,nRow,4);		
		rs.GetValue(_T("orderid"), nOrderID);
		tmpStr.Format(_T("%ld"), nOrderID);
		xls.SetCellText(0, nRow, tmpStr, CELL_FORMAT_TEXT,true,11,0);
		TranslateString(_T("Age"), tmpStr2);
		tmpStr.Format(_T("[%s]  -  %s   -   %s:%s"), rs.GetValue(_T("docno")), rs.GetValue(_T("pname")),tmpStr2,rs.GetValue(_T("Age")));
		xls.SetCellText(1, nRow, tmpStr, CELL_FORMAT_TEXT,true,11,0);
		rs.GetValue(_T("doctor"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, CELL_FORMAT_TEXT,true,11,0);
		
		szSQL.Format(_T(" SELECT 	hpol_idx as idx, pmi_id as id, ") \
			_T(" 	pmi_name as name,") \
			_T(" 	pmi_unit as unit,") \
			_T(" 	pmsi_vatprice as price,") \
			_T(" 	sum(hpol_issueqty) as qty,") \
			_T(" 	sum(hpol_issueqty*pmsi_vatprice) as amount") \
			_T(" FROM hms_pharmacyorder_line ") \
			_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
			_T(" LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
			_T(" WHERE hpol_orderid=%ld") \
			_T(" GROUP BY id, name, unit, price, idx") \
			_T(" ORDER BY idx"), nOrderID);
		rsl.ExecSQL(szSQL);
		nItem = 1;
		nAmount  =0;
		while(!rsl.IsEOF())
		{
			nRow++;
			tmpStr.Format(_T("%ld"), nItem++);			
			xls.SetCellText(0, nRow, tmpStr, CELL_FORMAT_INTEGER);
			rsl.GetValue(_T("name"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, CELL_FORMAT_TEXT);
			rsl.GetValue(_T("unit"), tmpStr);
			xls.SetCellText(2, nRow, tmpStr, CELL_FORMAT_TEXT);			
			rsl.GetValue(_T("price"), tmpStr);
			xls.SetCellText(3, nRow, tmpStr, CELL_FORMAT_DECIMAL);
			rsl.GetValue(_T("qty"), tmpStr);
			xls.SetCellText(4, nRow, tmpStr, CELL_FORMAT_INTEGER);
			rsl.GetValue(_T("amount"), tmpStr);
			nAmount += ToFloat(tmpStr);
			xls.SetCellText(5, nRow, tmpStr, CELL_FORMAT_DECIMAL);
			rsl.MoveNext();
		}
		nTotalAmount += nAmount;
		nRow++;		
		TranslateString(_T("Total Amount"), tmpStr);
		xls.SetCellMergedColumns(0,nRow,4);
		xls.SetCellText(0, nRow, tmpStr, CELL_FORMAT_TEXT);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(5, nRow, tmpStr, CELL_FORMAT_DECIMAL);		
		rs.MoveNext();
	}
	
	//Page Footer
	//Report Footer
	nRow++;
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(0, nRow, tmpStr, CELL_FORMAT_TEXT);
	tmpStr.Format(_T("%ld"), nTotalOrder);
	xls.SetCellText(5, nRow, tmpStr, CELL_FORMAT_INTEGER);
	nRow++;
	TranslateString(_T("Total Amount"), tmpStr);
	xls.SetCellMergedColumns(0,nRow,4);
	xls.SetCellText(0, nRow, tmpStr, CELL_FORMAT_TEXT);
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	xls.SetCellText(5, nRow, tmpStr, CELL_FORMAT_DECIMAL);


	xls.Save(_T("Exports\\Chitietnhapxuattonkho.xls"));
}