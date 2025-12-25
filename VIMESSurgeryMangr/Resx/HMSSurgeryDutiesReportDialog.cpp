#include "HMSSurgeryDutiesReportDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDutiesReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryDutiesReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDutiesReportDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDutiesReportDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnDoctorAddNew();
}*/
static void _OnDoctor1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDutiesReportDialog* )pWnd)->OnDoctor1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctor1SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnDoctor1Selendok();
}
/*static void _OnDoctor1SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnDoctor1Killfocus();
}*/
/*static void _OnDoctor1KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnDoctor1Killfocus();
}*/
static long _OnDoctor1LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDutiesReportDialog *)pWnd)->OnDoctor1LoadData();
}
/*static void _OnDoctor1AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnDoctor1AddNew();
}*/
static void _OnNurses1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDutiesReportDialog* )pWnd)->OnNurses1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurses1SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses1Selendok();
}
/*static void _OnNurses1SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses1Killfocus();
}*/
/*static void _OnNurses1KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses1Killfocus();
}*/
static long _OnNurses1LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses1LoadData();
}
/*static void _OnNurses1AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses1AddNew();
}*/
static void _OnNurses2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDutiesReportDialog* )pWnd)->OnNurses2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurses2SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses2Selendok();
}
/*static void _OnNurses2SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses2Killfocus();
}*/
/*static void _OnNurses2KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses2Killfocus();
}*/
static long _OnNurses2LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses2LoadData();
}
/*static void _OnNurses2AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses2AddNew();
}*/
static void _OnNurses3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDutiesReportDialog* )pWnd)->OnNurses3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurses3SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses3Selendok();
}
/*static void _OnNurses3SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses3Killfocus();
}*/
/*static void _OnNurses3KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses3Killfocus();
}*/
static long _OnNurses3LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses3LoadData();
}
/*static void _OnNurses3AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses3AddNew();
}*/
static void _OnNurses4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDutiesReportDialog* )pWnd)->OnNurses4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurses4SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses4Selendok();
}
/*static void _OnNurses4SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses4Killfocus();
}*/
/*static void _OnNurses4KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses4Killfocus();
}*/
static long _OnNurses4LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses4LoadData();
}
/*static void _OnNurses4AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses4AddNew();
}*/
static void _OnNurses5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDutiesReportDialog* )pWnd)->OnNurses5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurses5SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses5Selendok();
}
/*static void _OnNurses5SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses5Killfocus();
}*/
/*static void _OnNurses5KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses5Killfocus();
}*/
static long _OnNurses5LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses5LoadData();
}
/*static void _OnNurses5AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnNurses5AddNew();
}*/
static void _OnLoadReportSelectFnc(CWnd *pWnd){
	CHMSSurgeryDutiesReportDialog *pVw = (CHMSSurgeryDutiesReportDialog *)pWnd;
	pVw->OnLoadReportSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSSurgeryDutiesReportDialog *pVw = (CHMSSurgeryDutiesReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSurgeryDutiesReportDialog *pVw = (CHMSSurgeryDutiesReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSSurgeryDutiesReportDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDutiesReportDialog*)pWnd)->OnAddHMSSurgeryDutiesReportDialog();
} 
static int _OnEditHMSSurgeryDutiesReportDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDutiesReportDialog*)pWnd)->OnEditHMSSurgeryDutiesReportDialog();
} 
static int _OnDeleteHMSSurgeryDutiesReportDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDutiesReportDialog*)pWnd)->OnDeleteHMSSurgeryDutiesReportDialog();
} 
static int _OnSaveHMSSurgeryDutiesReportDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDutiesReportDialog*)pWnd)->OnSaveHMSSurgeryDutiesReportDialog();
} 
static int _OnCancelHMSSurgeryDutiesReportDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryDutiesReportDialog*)pWnd)->OnCancelHMSSurgeryDutiesReportDialog();
} 
CHMSSurgeryDutiesReportDialog::CHMSSurgeryDutiesReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 430;
	m_nDlgHeight = 310;
	SetDefaultValues();
}
CHMSSurgeryDutiesReportDialog::~CHMSSurgeryDutiesReportDialog(){
}
void CHMSSurgeryDutiesReportDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 420, 270);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 291, 55);
	m_wndToDate.Create(this,296, 30, 416, 55); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 60, 90, 85);
	m_wndDoctor.Create(this,95, 60, 416, 85); 
	m_wndDoctor1Label.Create(this, _T("Doctor1"), 10, 90, 90, 115);
	m_wndDoctor1.Create(this,95, 90, 416, 115); 
	m_wndNurses1Label.Create(this, _T("Nurses1"), 10, 120, 90, 145);
	m_wndNurses1.Create(this,95, 120, 416, 145); 
	m_wndNurses2Label.Create(this, _T("Nurses2"), 10, 150, 90, 175);
	m_wndNurses2.Create(this,95, 150, 416, 175); 
	m_wndNurses3Label.Create(this, _T("Nurses3"), 10, 180, 90, 205);
	m_wndNurses3.Create(this,95, 180, 416, 205); 
	m_wndNurses4Label.Create(this, _T("Nurses4"), 10, 210, 90, 235);
	m_wndNurses4.Create(this,95, 210, 416, 235); 
	m_wndNurses5Label.Create(this, _T("Nurses5"), 10, 240, 90, 265);
	m_wndNurses5.Create(this,95, 240, 416, 265); 
	m_wndLoadReport.Create(this, _T("&Load Report"), 155, 275, 240, 300);
	m_wndExport.Create(this, _T("&Export XLS"), 245, 275, 330, 300);
	m_wndClose.Create(this, _T("&Close"), 335, 275, 420, 300);

}
void CHMSSurgeryDutiesReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndDoctor1.SetCheckValue(true);
	m_wndDoctor1.LimitText(35);
	m_wndNurses1.SetCheckValue(true);
	m_wndNurses1.LimitText(35);
	m_wndNurses2.SetCheckValue(true);
	m_wndNurses2.LimitText(35);
	m_wndNurses3.SetCheckValue(true);
	m_wndNurses3.LimitText(35);
	m_wndNurses4.SetCheckValue(true);
	m_wndNurses4.LimitText(35);
	m_wndNurses5.SetCheckValue(true);
	m_wndNurses5.LimitText(35);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDoctor1.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor1.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndNurses1.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndNurses1.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndNurses2.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndNurses2.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndNurses3.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndNurses3.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndNurses4.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndNurses4.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndNurses5.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndNurses5.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSSurgeryDutiesReportDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndDoctor1.SetEvent(WE_SELENDOK, _OnDoctor1SelendokFnc);
	//m_wndDoctor1.SetEvent(WE_SETFOCUS, _OnDoctor1SetfocusFnc);
	//m_wndDoctor1.SetEvent(WE_KILLFOCUS, _OnDoctor1KillfocusFnc);
	m_wndDoctor1.SetEvent(WE_SELCHANGE, _OnDoctor1SelectChangeFnc);
	m_wndDoctor1.SetEvent(WE_LOADDATA, _OnDoctor1LoadDataFnc);
	//m_wndDoctor1.SetEvent(WE_ADDNEW, _OnDoctor1AddNewFnc);
	m_wndNurses1.SetEvent(WE_SELENDOK, _OnNurses1SelendokFnc);
	//m_wndNurses1.SetEvent(WE_SETFOCUS, _OnNurses1SetfocusFnc);
	//m_wndNurses1.SetEvent(WE_KILLFOCUS, _OnNurses1KillfocusFnc);
	m_wndNurses1.SetEvent(WE_SELCHANGE, _OnNurses1SelectChangeFnc);
	m_wndNurses1.SetEvent(WE_LOADDATA, _OnNurses1LoadDataFnc);
	//m_wndNurses1.SetEvent(WE_ADDNEW, _OnNurses1AddNewFnc);
	m_wndNurses2.SetEvent(WE_SELENDOK, _OnNurses2SelendokFnc);
	//m_wndNurses2.SetEvent(WE_SETFOCUS, _OnNurses2SetfocusFnc);
	//m_wndNurses2.SetEvent(WE_KILLFOCUS, _OnNurses2KillfocusFnc);
	m_wndNurses2.SetEvent(WE_SELCHANGE, _OnNurses2SelectChangeFnc);
	m_wndNurses2.SetEvent(WE_LOADDATA, _OnNurses2LoadDataFnc);
	//m_wndNurses2.SetEvent(WE_ADDNEW, _OnNurses2AddNewFnc);
	m_wndNurses3.SetEvent(WE_SELENDOK, _OnNurses3SelendokFnc);
	//m_wndNurses3.SetEvent(WE_SETFOCUS, _OnNurses3SetfocusFnc);
	//m_wndNurses3.SetEvent(WE_KILLFOCUS, _OnNurses3KillfocusFnc);
	m_wndNurses3.SetEvent(WE_SELCHANGE, _OnNurses3SelectChangeFnc);
	m_wndNurses3.SetEvent(WE_LOADDATA, _OnNurses3LoadDataFnc);
	//m_wndNurses3.SetEvent(WE_ADDNEW, _OnNurses3AddNewFnc);
	m_wndNurses4.SetEvent(WE_SELENDOK, _OnNurses4SelendokFnc);
	//m_wndNurses4.SetEvent(WE_SETFOCUS, _OnNurses4SetfocusFnc);
	//m_wndNurses4.SetEvent(WE_KILLFOCUS, _OnNurses4KillfocusFnc);
	m_wndNurses4.SetEvent(WE_SELCHANGE, _OnNurses4SelectChangeFnc);
	m_wndNurses4.SetEvent(WE_LOADDATA, _OnNurses4LoadDataFnc);
	//m_wndNurses4.SetEvent(WE_ADDNEW, _OnNurses4AddNewFnc);
	m_wndNurses5.SetEvent(WE_SELENDOK, _OnNurses5SelendokFnc);
	//m_wndNurses5.SetEvent(WE_SETFOCUS, _OnNurses5SetfocusFnc);
	//m_wndNurses5.SetEvent(WE_KILLFOCUS, _OnNurses5KillfocusFnc);
	m_wndNurses5.SetEvent(WE_SELCHANGE, _OnNurses5SelectChangeFnc);
	m_wndNurses5.SetEvent(WE_LOADDATA, _OnNurses5LoadDataFnc);
	//m_wndNurses5.SetEvent(WE_ADDNEW, _OnNurses5AddNewFnc);
	m_wndLoadReport.SetEvent(WE_CLICK, _OnLoadReportSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSSurgeryDutiesReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndDoctor1.GetDlgCtrlID(), m_szDoctor1Key);
	DDX_TextEx(pDX, m_wndNurses1.GetDlgCtrlID(), m_szNurses1Key);
	DDX_TextEx(pDX, m_wndNurses2.GetDlgCtrlID(), m_szNurses2Key);
	DDX_TextEx(pDX, m_wndNurses3.GetDlgCtrlID(), m_szNurses3Key);
	DDX_TextEx(pDX, m_wndNurses4.GetDlgCtrlID(), m_szNurses4Key);
	DDX_TextEx(pDX, m_wndNurses5.GetDlgCtrlID(), m_szNurses5Key);

}
void CHMSSurgeryDutiesReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSurgeryDutiesReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSurgeryDutiesReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDoctorKey.Empty();
	m_szDoctor1Key.Empty();
	m_szNurses1Key.Empty();
	m_szNurses2Key.Empty();
	m_szNurses3Key.Empty();
	m_szNurses4Key.Empty();
	m_szNurses5Key.Empty();

}
int CHMSSurgeryDutiesReportDialog::SetMode(int nMode){
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
/*void CHMSSurgeryDutiesReportDialog::OnFromDateChange(){
	
} */
/*void CHMSSurgeryDutiesReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSSurgeryDutiesReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSSurgeryDutiesReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSSurgeryDutiesReportDialog::OnToDateChange(){
	
} */
/*void CHMSSurgeryDutiesReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSSurgeryDutiesReportDialog::OnToDateKillfocus(){
	
} */
int CHMSSurgeryDutiesReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSSurgeryDutiesReportDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDutiesReportDialog::OnDoctorSelendok(){
	 
}
/*void CHMSSurgeryDutiesReportDialog::OnDoctorSetfocus(){
	
}*/
/*void CHMSSurgeryDutiesReportDialog::OnDoctorKillfocus(){
	
}*/
long CHMSSurgeryDutiesReportDialog::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDutiesReportDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDutiesReportDialog::OnDoctor1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDutiesReportDialog::OnDoctor1Selendok(){
	 
}
/*void CHMSSurgeryDutiesReportDialog::OnDoctor1Setfocus(){
	
}*/
/*void CHMSSurgeryDutiesReportDialog::OnDoctor1Killfocus(){
	
}*/
long CHMSSurgeryDutiesReportDialog::OnDoctor1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor1.IsSearchKey() && !m_szDoctor1Key.IsEmpty()){
	};
	m_wndDoctor1.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDutiesReportDialog::OnDoctor1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDutiesReportDialog::OnNurses1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDutiesReportDialog::OnNurses1Selendok(){
	 
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses1Setfocus(){
	
}*/
/*void CHMSSurgeryDutiesReportDialog::OnNurses1Killfocus(){
	
}*/
long CHMSSurgeryDutiesReportDialog::OnNurses1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNurses1.IsSearchKey() && !m_szNurses1Key.IsEmpty()){
	};
	m_wndNurses1.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDutiesReportDialog::OnNurses2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDutiesReportDialog::OnNurses2Selendok(){
	 
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses2Setfocus(){
	
}*/
/*void CHMSSurgeryDutiesReportDialog::OnNurses2Killfocus(){
	
}*/
long CHMSSurgeryDutiesReportDialog::OnNurses2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNurses2.IsSearchKey() && !m_szNurses2Key.IsEmpty()){
	};
	m_wndNurses2.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDutiesReportDialog::OnNurses3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDutiesReportDialog::OnNurses3Selendok(){
	 
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses3Setfocus(){
	
}*/
/*void CHMSSurgeryDutiesReportDialog::OnNurses3Killfocus(){
	
}*/
long CHMSSurgeryDutiesReportDialog::OnNurses3LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNurses3.IsSearchKey() && !m_szNurses3Key.IsEmpty()){
	};
	m_wndNurses3.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDutiesReportDialog::OnNurses4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDutiesReportDialog::OnNurses4Selendok(){
	 
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses4Setfocus(){
	
}*/
/*void CHMSSurgeryDutiesReportDialog::OnNurses4Killfocus(){
	
}*/
long CHMSSurgeryDutiesReportDialog::OnNurses4LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNurses4.IsSearchKey() && !m_szNurses4Key.IsEmpty()){
	};
	m_wndNurses4.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDutiesReportDialog::OnNurses5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDutiesReportDialog::OnNurses5Selendok(){
	 
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses5Setfocus(){
	
}*/
/*void CHMSSurgeryDutiesReportDialog::OnNurses5Killfocus(){
	
}*/
long CHMSSurgeryDutiesReportDialog::OnNurses5LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNurses5.IsSearchKey() && !m_szNurses5Key.IsEmpty()){
	};
	m_wndNurses5.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryDutiesReportDialog::OnLoadReportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDutiesReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDutiesReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgeryDutiesReportDialog::OnAddHMSSurgeryDutiesReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSurgeryDutiesReportDialog::OnEditHMSSurgeryDutiesReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSurgeryDutiesReportDialog::OnDeleteHMSSurgeryDutiesReportDialog(){
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
 		OnCancelHMSSurgeryDutiesReportDialog(); 
 	}
	return 0;
}
int CHMSSurgeryDutiesReportDialog::OnSaveHMSSurgeryDutiesReportDialog(){
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
 		//OnHMSSurgeryDutiesReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSurgeryDutiesReportDialog::OnCancelHMSSurgeryDutiesReportDialog(){
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
int CHMSSurgeryDutiesReportDialog::OnHMSSurgeryDutiesReportDialogListLoadData(){
	return 0;
}
