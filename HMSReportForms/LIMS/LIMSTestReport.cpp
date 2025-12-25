#include "stdafx.h"
#include "LIMSTestReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
	return ((CLIMSTestReport *)pWnd)->OnFromDateCheckValue();
}
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
	return ((CLIMSTestReport *)pWnd)->OnToDateCheckValue();
}
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestReport*)pWnd)->OnTestGroupLoadData();
} 
static void _OnTestGroupDblClickFnc(CWnd *pWnd){
	((CLIMSTestReport*)pWnd)->OnTestGroupDblClick();
} 
static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestReport*)pWnd)->OnTestGroupSelectChange(nOldItem, nNewItem);
} 
static int _OnTestGroupDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestReport*)pWnd)->OnTestGroupDeleteItem();
}
static void _OnManualInputSelectFnc(CWnd *pWnd)
{
	 return ((CLIMSTestReport*)pWnd)->OnManualInputSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CLIMSTestReport*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((CLIMSTestReport*)pWnd)->OnInPatientSelect();
}
static void _OnAllHospitalsSelectFnc(CWnd *pWnd){
	 ((CLIMSTestReport*)pWnd)->OnAllHospitalsSelect();
}
static void _OnWaitingLabelSelectFnc(CWnd *pWnd){
	CLIMSTestReport *pVw = (CLIMSTestReport *)pWnd;
	pVw->OnWaitingLabelSelect();
} 
/*static void _OnWaitingtestChangeFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnWaitingtestChange();
} */
/*static void _OnWaitingtestSetfocusFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnWaitingtestSetfocus();} */ 
/*static void _OnWaitingtestKillfocusFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnWaitingtestKillfocus();
} */
static int _OnWaitingtestCheckValueFnc(CWnd *pWnd){
	return ((CLIMSTestReport *)pWnd)->OnWaitingtestCheckValue();
} 
static void _OnRunningLabelSelectFnc(CWnd *pWnd){
	CLIMSTestReport *pVw = (CLIMSTestReport *)pWnd;
	pVw->OnRunningLabelSelect();
} 
/*static void _OnRunningtestChangeFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnRunningtestChange();
} */
/*static void _OnRunningtestSetfocusFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnRunningtestSetfocus();} */ 
/*static void _OnRunningtestKillfocusFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnRunningtestKillfocus();
} */
static int _OnRunningtestCheckValueFnc(CWnd *pWnd){
	return ((CLIMSTestReport *)pWnd)->OnRunningtestCheckValue();
} 
static void _OnPerformedLabelSelectFnc(CWnd *pWnd){
	CLIMSTestReport *pVw = (CLIMSTestReport *)pWnd;
	pVw->OnPerformedLabelSelect();
} 
/*static void _OnPerformedtestChangeFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnPerformedtestChange();
} */
/*static void _OnPerformedtestSetfocusFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnPerformedtestSetfocus();} */ 
/*static void _OnPerformedtestKillfocusFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnPerformedtestKillfocus();
} */
static int _OnPerformedtestCheckValueFnc(CWnd *pWnd)
{
	return ((CLIMSTestReport *)pWnd)->OnPerformedtestCheckValue();
} 
static void _OnUploadedlabelSelectFnc(CWnd *pWnd)
{
	CLIMSTestReport *pVw = (CLIMSTestReport *)pWnd;
	pVw->OnUploadedlabelSelect();
}
/*static void _OnUploadedtestChangeFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnUploadedtestChange();
} */
/*static void _OnUploadedtestSetfocusFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnUploadedtestSetfocus();} */ 
/*static void _OnUploadedtestKillfocusFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnUploadedtestKillfocus();
} */
static int _OnUploadedtestCheckValueFnc(CWnd *pWnd){
	return ((CLIMSTestReport *)pWnd)->OnUploadedtestCheckValue();
}
static void _OnTotalLabelSelectFnc(CWnd *pWnd)
{
	CLIMSTestReport *pVw = (CLIMSTestReport *)pWnd;
	pVw->OnTotalLabelSelect();
} 
/*static void _OnTotalTestChangeFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnTotalTestChange();
} */
/*static void _OnTotalTestSetfocusFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnTotalTestSetfocus();} */ 
/*static void _OnTotalTestKillfocusFnc(CWnd *pWnd){
	((CLIMSTestReport *)pWnd)->OnTotalTestKillfocus();
} */
static int _OnTotalTestCheckValueFnc(CWnd *pWnd)
{
	return ((CLIMSTestReport *)pWnd)->OnTotalTestCheckValue();
} 
static void _OnRunningManSelectFnc(CWnd *pWnd){
	CLIMSTestReport *pVw = (CLIMSTestReport *)pWnd;
	pVw->OnRunningManSelect();
    }
static long _OnMachineLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestReport*)pWnd)->OnMachineLoadData();
} 
static void _OnMachineDblClickFnc(CWnd *pWnd){
	((CLIMSTestReport*)pWnd)->OnMachineDblClick();
} 
static void _OnMachineSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestReport*)pWnd)->OnMachineSelectChange(nOldItem, nNewItem);
} 
static int _OnMachineDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestReport*)pWnd)->OnMachineDeleteItem();
}
static int _OnMachineListCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestReport*)pWnd)->OnMachineListCheckAll();
}
static int _OnMachineListUnCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestReport*)pWnd)->OnMachineListUnCheckAll();
}
static void _OnExportByDocnoSelectFnc(CWnd *pWnd){
	CLIMSTestReport *pVw = (CLIMSTestReport *)pWnd;
	pVw->OnExportByDocnoSelect();
} 
static void _OnExportByOrderSelectFnc(CWnd *pWnd){
	CLIMSTestReport *pVw = (CLIMSTestReport *)pWnd;
	pVw->OnExportByOrderSelect();
} 

static int _OnAddLIMSTestReportFnc(CWnd *pWnd){
	 return ((CLIMSTestReport*)pWnd)->OnAddLIMSTestReport();
} 
static int _OnEditLIMSTestReportFnc(CWnd *pWnd){
	 return ((CLIMSTestReport*)pWnd)->OnEditLIMSTestReport();
} 
static int _OnDeleteLIMSTestReportFnc(CWnd *pWnd){
	 return ((CLIMSTestReport*)pWnd)->OnDeleteLIMSTestReport();
} 
static int _OnSaveLIMSTestReportFnc(CWnd *pWnd){
	 return ((CLIMSTestReport*)pWnd)->OnSaveLIMSTestReport();
} 
static int _OnCancelLIMSTestReportFnc(CWnd *pWnd){
	 return ((CLIMSTestReport*)pWnd)->OnCancelLIMSTestReport();
} 
CLIMSTestReport::CLIMSTestReport(CWnd *pParent):
CGuiDialog(pParent)
{
	m_nDlgWidth = 585;
	m_nDlgHeight = 670;
	SetDefaultValues();
}
CLIMSTestReport::~CLIMSTestReport()
{
}
void CLIMSTestReport::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 617);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 155, 55);
	m_wndFromDate.Create(this,160, 30, 285, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 290, 30, 435, 55);
	m_wndToDate.Create(this,440, 30, 565, 55); 
	m_wndTestGroup.Create(this,10, 60, 565, 175); 
	m_wndManualInput.Create(this, _T("ManualInput"), 20, 180, 145, 210);
	m_wndOutPatient.Create(this, _T("OutPatient"), 158, 180, 283, 210);
	m_wndInPatient.Create(this, _T("InPatient"), 299, 180, 424, 210);
	m_wndAllHospitals.Create(this, _T("All Hospitals"), 440, 180, 565, 210);
	m_wndMachine.Create(this,10, 215, 565, 340); 
	m_wndWaitingLabel.Create(this, _T("Waiting"), 10, 345, 265, 395);
	m_wndWaitingtest.Create(this,285, 345, 565, 395); 
	m_wndRunningLabel.Create(this, _T("Running"), 10, 400, 265, 450);
	m_wndRunningtest.Create(this,285, 400, 565, 450); 
	m_wndPerformedLabel.Create(this, _T("Performed"), 10, 455, 265, 505);
	m_wndPerformedtest.Create(this,285, 455, 565, 505); 
	m_wndUploadedlabel.Create(this, _T("Uploaded"), 10, 510, 265, 560);
	m_wndUploadedtest.Create(this,285, 510, 565, 560); 
	m_wndTotalLabel.Create(this, _T("Total"), 10, 565, 265, 615);
	m_wndTotalTest.Create(this,285, 565, 565, 615); 
	m_wndRunningMan.Create(this, _T("&RunningMan"), 10, 620, 150, 660);
	m_wndExportByDocno.Create(this, _T("&ExportByDocno"), 215, 620, 355, 660);
	m_wndExportByOrder.Create(this, _T("&ExportByOrder"), 425, 620, 565, 660);
}
void CLIMSTestReport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndWaitingtest.SetReadOnly(true);
	m_wndRunningtest.SetReadOnly(true);
	m_wndPerformedtest.SetReadOnly(true);
	m_wndUploadedtest.SetReadOnly(true);
	m_wndTotalTest.SetReadOnly(true);
	//EnableButtons(TRUE, 0, -1);
	/*m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);*/
	m_wndWaitingtest.SetLimitText(35);
	m_wndWaitingtest.SetCheckValue(true);
	m_wndRunningtest.SetLimitText(35);
	m_wndRunningtest.SetCheckValue(true);
	m_wndPerformedtest.SetLimitText(35);
	m_wndPerformedtest.SetCheckValue(true);
	m_wndUploadedtest.SetLimitText(35);
	m_wndUploadedtest.SetCheckValue(true);
	m_wndTotalTest.SetLimitText(35);
	m_wndTotalTest.SetCheckValue(true);
	
	m_wndTestGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndTestGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);
	m_wndTestGroup.SetCheckBox(TRUE);

	/*m_wndMachine.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndMachine.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);*/
	m_wndMachine.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndMachine.InsertColumn(1, _T("Description"), CFMT_TEXT, 380);
	m_wndMachine.InsertColumn(2, _T("Port"), CFMT_TEXT, 70);
	m_wndMachine.InsertColumn(3, _T("Baudrate"), CFMT_TEXT, 100);
	m_wndMachine.SetCheckBox(TRUE);
	UpdateData(FALSE);
}
void CLIMSTestReport::OnSetWindowEvents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndTestGroup.SetEvent(WE_SELCHANGE, _OnTestGroupSelectChangeFnc);
	m_wndTestGroup.SetEvent(WE_LOADDATA, _OnTestGroupLoadDataFnc);
	m_wndTestGroup.SetEvent(WE_DBLCLICK, _OnTestGroupDblClickFnc);
	//m_wndTestGroup.AddEvent(1, _T("Delete"), _OnTestGroupDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndManualInput.SetEvent(WE_CLICK, _OnManualInputSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndAllHospitals.SetEvent(WE_CLICK, _OnAllHospitalsSelectFnc);
	m_wndWaitingLabel.SetEvent(WE_CLICK, _OnWaitingLabelSelectFnc);
	//m_wndWaitingtest.SetEvent(WE_CHANGE, _OnWaitingtestChangeFnc);
	//m_wndWaitingtest.SetEvent(WE_SETFOCUS, _OnWaitingtestSetfocusFnc);
	//m_wndWaitingtest.SetEvent(WE_KILLFOCUS, _OnWaitingtestKillfocusFnc);
	m_wndWaitingtest.SetEvent(WE_CHECKVALUE, _OnWaitingtestCheckValueFnc);
	m_wndRunningLabel.SetEvent(WE_CLICK, _OnRunningLabelSelectFnc);
	//m_wndRunningtest.SetEvent(WE_CHANGE, _OnRunningtestChangeFnc);
	//m_wndRunningtest.SetEvent(WE_SETFOCUS, _OnRunningtestSetfocusFnc);
	//m_wndRunningtest.SetEvent(WE_KILLFOCUS, _OnRunningtestKillfocusFnc);
	m_wndRunningtest.SetEvent(WE_CHECKVALUE, _OnRunningtestCheckValueFnc);
	m_wndPerformedLabel.SetEvent(WE_CLICK, _OnPerformedLabelSelectFnc);
	//m_wndPerformedtest.SetEvent(WE_CHANGE, _OnPerformedtestChangeFnc);
	//m_wndPerformedtest.SetEvent(WE_SETFOCUS, _OnPerformedtestSetfocusFnc);
	//m_wndPerformedtest.SetEvent(WE_KILLFOCUS, _OnPerformedtestKillfocusFnc);
	m_wndPerformedtest.SetEvent(WE_CHECKVALUE, _OnPerformedtestCheckValueFnc);
	m_wndUploadedlabel.SetEvent(WE_CLICK, _OnUploadedlabelSelectFnc);
	m_wndTotalLabel.SetEvent(WE_CLICK, _OnTotalLabelSelectFnc);
	m_wndTotalTest.SetEvent(WE_CHECKVALUE, _OnTotalTestCheckValueFnc);
	//m_wndUploadedtest.SetEvent(WE_CHANGE, _OnUploadedtestChangeFnc);
	//m_wndUploadedtest.SetEvent(WE_SETFOCUS, _OnUploadedtestSetfocusFnc);
	//m_wndUploadedtest.SetEvent(WE_KILLFOCUS, _OnUploadedtestKillfocusFnc);
	m_wndUploadedtest.SetEvent(WE_CHECKVALUE, _OnUploadedtestCheckValueFnc);
	m_wndRunningMan.SetEvent(WE_CLICK, _OnRunningManSelectFnc);
	m_wndMachine.SetEvent(WE_SELCHANGE, _OnMachineSelectChangeFnc);
	m_wndMachine.SetEvent(WE_LOADDATA, _OnMachineLoadDataFnc);
	m_wndMachine.SetEvent(WE_DBLCLICK, _OnMachineDblClickFnc);

	m_wndMachine.SetWindowText(_T("MachineList"));
	m_wndMachine.AddEvent(1, _T("Check All"), _OnMachineListCheckAllFnc);
	m_wndMachine.AddEvent(2, _T("UnCheck All"), _OnMachineListUnCheckAllFnc);
	
	m_wndExportByDocno.SetEvent(WE_CLICK, _OnExportByDocnoSelectFnc);
	m_wndExportByOrder.SetEvent(WE_CLICK, _OnExportByOrderSelectFnc);
	m_szPerformDeptKey = pMF->m_szDept;
	m_szUserKey=pMF->m_szUser;
	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = szSysDate + _T("00:00");
	m_szToDate = szSysDate + _T("23:59");
	//_msg(_T("%s"), m_szUserKey);
	//_msg(_T("%s"), m_szPerformDeptKey);
	SetWindowFont(&m_wndWaitingtest, GetFaceName(), GetFaceSize() + 25, TRUE);
	m_wndWaitingtest.SetTextColor(RGB(255,0,0));
	
	SetWindowFont(&m_wndWaitingLabel, GetFaceName(), GetFaceSize() + 25, TRUE);

	SetWindowFont(&m_wndRunningtest, GetFaceName(), GetFaceSize() + 25, TRUE);
	m_wndRunningtest.SetTextColor(RGB(255,0,0));

	SetWindowFont(&m_wndPerformedtest, GetFaceName(), GetFaceSize() + 25, TRUE);
	m_wndPerformedtest.SetTextColor(RGB(255,0,0));

	SetWindowFont(&m_wndUploadedtest, GetFaceName(), GetFaceSize() + 25, TRUE);
	m_wndUploadedtest.SetTextColor(RGB(255,0,0));
	
	SetWindowFont(&m_wndTotalTest, GetFaceName(), GetFaceSize() + 25, TRUE);
	m_wndTotalTest.SetTextColor(RGB(255,0,0));
	OnTestGroupLoadData();
	OnMachineLoadData();
	OnWaitingLabelSelect();
	OnRunningLabelSelect();
	OnPerformedLabelSelect();
	OnUploadedlabelSelect();
	OnTotalLabelSelect();
	UpdateData(FALSE);
	/*m_wndWaitingtest.ModifyStyle(0, SS_CENTER | SS_CENTERIMAGE);
	m_wndWaitingtest.SetBorder(TRUE);
	m_wndWaitingtest.SetFontName(_T("Arial"), UNICODE);
	m_wndWaitingtest.SetFontSize(9);
	m_wndWaitingtest.SetBkColor(RGB(255, 222, 173));
	m_wndWaitingtest.SetTextColor(RGB(0, 0, 192));*/
	
}
void CLIMSTestReport::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndManualInput.GetDlgCtrlID(), m_bManualInput);
	DDX_TextEx(pDX, m_wndTestGroup.GetDlgCtrlID(), m_szUserKey);
	DDX_TextEx(pDX, m_wndMachine.GetDlgCtrlID(), m_szPerformDeptKey);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
	DDX_Check(pDX, m_wndInPatient.GetDlgCtrlID(), m_bInPatient);
	DDX_Check(pDX, m_wndAllHospitals.GetDlgCtrlID(), m_bAllHospitals);
	DDX_Text(pDX, m_wndWaitingtest.GetDlgCtrlID(), m_nTotalWaiting);
	DDX_Text(pDX, m_wndRunningtest.GetDlgCtrlID(), m_nTotalRunning);
	DDX_Text(pDX, m_wndPerformedtest.GetDlgCtrlID(), m_nTotalPerformed);
	DDX_Text(pDX, m_wndUploadedtest.GetDlgCtrlID(), m_nTotalUploaded);
	DDX_Text(pDX, m_wndTotalTest.GetDlgCtrlID(), m_nTotal);

}
void CLIMSTestReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSTestReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLIMSTestReport::SetDefaultValues()
{
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bOutPatient=TRUE;
	m_bInPatient=FALSE;
	m_bAllHospitals=FALSE;
	m_szUserKey.Empty();
	m_szWaitingtest.Empty();
	m_szRunningtest.Empty();
	m_szPerformedtest.Empty();
	m_szUploadedtest.Empty();
	m_nTotalWaiting=0;
	m_nTotalRunning=0;
	m_nTotalPerformed=0;
	m_nTotalUploaded=0;
	m_nTotal=0;
	m_bManualInput=FALSE;
}
int CLIMSTestReport::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
int CLIMSTestReport::OnFromDateCheckValue(){
	return 0;
} 
int CLIMSTestReport::OnToDateCheckValue(){
	return 0;
} 
void CLIMSTestReport::OnTestGroupDblClick(){
	
} 
void CLIMSTestReport::OnTestGroupSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestReport::OnTestGroupDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestReport::OnTestGroupLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestGroup.BeginLoad(); 
	m_wndTestGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT sup_permid as testID, hfg_name as Testname FROM sys_userperm LEFT JOIN hms_fee_group ON (sup_permid=hfg_id) WHERE substr(hfg_id,1,2)='B1' AND sup_userid='%s'"), m_szUserKey);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndTestGroup.AddItems(
			rs.GetValue(_T("TestID")), 
			rs.GetValue(_T("TestName")), NULL);
		rs.MoveNext();
	}
	m_wndTestGroup.EndLoad();
	for (int i=0; i< m_wndTestGroup.GetItemCount(); i++)
	{
		m_wndTestGroup.SetCheck(i,true);
	}
	return nCount;
	return 0;
}
	void CLIMSTestReport::OnManualInputSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true); 
	}
	void CLIMSTestReport::OnOutPatientSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_bOutPatient)
	{
		m_bOutPatient=1;
		m_bInPatient=0;
		m_bAllHospitals=0;		
	}
	UpdateData(false);
	}
	void CLIMSTestReport::OnInPatientSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_bInPatient)
	{
		m_bOutPatient=0;
		m_bInPatient=1;
		m_bAllHospitals=0;
	}
	UpdateData(false);
	
}
	void CLIMSTestReport::OnAllHospitalsSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_bAllHospitals)
	{
		m_bOutPatient=0;
		m_bInPatient=0;
		m_bAllHospitals=1;
	}
	UpdateData(false);	
}
void CLIMSTestReport::OnWaitingLabelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szTestID, szTestName;
	CString szMachineID, szMachineName;
	for (int i = 0; i < m_wndTestGroup.GetItemCount(); i++)
	{
		if (m_wndTestGroup.GetCheck(i))
		{
			if (!szTestName.IsEmpty())
				szTestName += _T(",");
				szTestName.AppendFormat(_T("'%s'"), m_wndTestGroup.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndMachine.GetItemCount(); i++)
	{
		if (m_wndMachine.GetCheck(i))
		{
			if (!szMachineName.IsEmpty())
				szMachineName += _T(",");
				szMachineName.AppendFormat(_T("'%s'"), m_wndMachine.GetItemText(i, 0));
		}
	}
	if (!szTestName.IsEmpty())
		{
		szWhere.AppendFormat(_T("and hpc_groupid in (%s)"), szTestName);
        }

	if (!szMachineName.IsEmpty())
		{
		szWhere.AppendFormat(_T("and limsol_instid in (%s)"), szMachineName);
        }
	if (m_bManualInput)
	{
		{
		szWhere.AppendFormat(_T("and limso_instid is NULL"));
		}
	}
	if (m_bOutPatient)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class='E'"));
		}
	}
	if (m_bInPatient)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class='I'"));
		}
	}
	if (m_bAllHospitals)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class in ('E','I')"));
		}
	}
	szSQL.Format (_T(" SELECT count(docno) AS TotalWaiting FROM") \
	_T(" (") \
	_T(" SELECT DISTINCT hd_docno AS docno,") \
	_T("   hpc_orderid            AS orderid,") \
	_T("   hpc_sid                AS barcode,") \
	_T("   hpc_status             AS status,") \
	_T("   limsol_instid          AS machineID") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_object") \
	_T(" ON(ho_id=hd_object)") \
	_T(" LEFT JOIN hms_testorder") \
	_T(" ON(hpc_docno      =hd_docno)") \
	//Tinh theo so order//
	_T(" LEFT JOIN lims_order ON(hpc_orderid=limso_orderid)") \
	_T(" LEFT JOIN lims_order_line ON (limso_orderid=limsol_orderid)") \
	//Tinh theo so ho so thi khong select hpc_orderid nua
	//_T(" LEFT JOIN lims_order ON(hpc_docno=limso_docno)") \//
	_T(" WHERE hpc_orderid > 0") \
	/*_T(" AND (ho_type      < >'S'") \
	_T(" OR (ho_type       ='S'") \
	_T(" AND hpc_payment   ='P') )") \*/
	_T(" AND hpc_status    in ('S')") \
	//_T(" AND TRUNC(hpc_performdate) = TRUNC(current_date)") \//
	_T(" AND hpc_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') %s ") \
	//_T(" AND hd_status   IN('O','P')") \
	//_T(" AND limsol_instid>0") \
	//_T(" AND hpc_groupid IN ('B0000','B1200','B1300','B1600')") \//
	_T(" ORDER BY barcode") \
	_T(" )tmp1"), m_szFromDate, m_szToDate, szWhere);\
	rs.ExecSQL(szSQL);	
	//_msg(_T("%s"), szSQL);
	//if 
	//(rs.GetIntValue()>0)
	{
		rs.GetValue(_T("TotalWaiting"), m_nTotalWaiting);
		//_msg(_T("%ld"), m_nTotalWaiting);
	}
	UpdateData(FALSE);
} 
/*void CLIMSTestReport::OnWaitingtestChange(){
	
} */
/*void CLIMSTestReport::OnWaitingtestSetfocus(){
	
} */
/*void CLIMSTestReport::OnWaitingtestKillfocus(){
	
} */
int CLIMSTestReport::OnWaitingtestCheckValue()
{
	return 0;
} 
void CLIMSTestReport::OnRunningLabelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szTestID, szTestName;
	CString szMachineID, szMachineName;
	for (int i = 0; i < m_wndTestGroup.GetItemCount(); i++)
	{
		if (m_wndTestGroup.GetCheck(i))
		{
			if (!szTestName.IsEmpty())
				szTestName += _T(",");
				szTestName.AppendFormat(_T("'%s'"), m_wndTestGroup.GetItemText(i, 0));
		}
	}
	
	for (int i = 0; i < m_wndMachine.GetItemCount(); i++)
	{
		if (m_wndMachine.GetCheck(i))
		{
			if (!szMachineName.IsEmpty())
				szMachineName += _T(",");
				szMachineName.AppendFormat(_T("'%s'"), m_wndMachine.GetItemText(i, 0));
		}
	}
	if (!szTestName.IsEmpty())
		{
		szWhere.AppendFormat(_T("and hpc_groupid in (%s)"), szTestName);
        }

	if (!szMachineName.IsEmpty())
		{
		szWhere.AppendFormat(_T("and limso_instid in (%s)"), szMachineName);
        }
	if (m_bManualInput)
	{
		{
		szWhere.AppendFormat(_T(" and limso_instid is NULL"));
		}
	}
	if (m_bOutPatient)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class='E'"));
		}
	}
	if (m_bInPatient)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class='I'"));
		}
	}
	if (m_bAllHospitals)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class in ('E','I')"));
		}
	}
	szSQL.Format (_T(" SELECT count(docno) AS TotalRunning FROM") \
	_T(" (") \
	_T(" SELECT DISTINCT hd_docno AS docno,") \
	_T("   hpc_orderid            AS orderid,") \
	_T("   hpc_sid                AS barcode,") \
	_T("   hpc_status             AS status,") \
	_T("   limso_instid			  AS machineID") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_object") \
	_T(" ON(ho_id=hd_object)") \
	_T(" LEFT JOIN hms_testorder") \
	_T(" ON(hpc_docno      =hd_docno)") \
	_T(" LEFT JOIN lims_order ON(hpc_orderid=limso_orderid)") \
	_T(" LEFT JOIN lims_order_line ON (limso_orderid=limsol_orderid)") \
	_T(" WHERE hpc_orderid > 0") \
	/*_T(" AND (ho_type      < >'S'") \
	_T(" OR (ho_type       ='S'") \
	_T(" AND hpc_payment   ='P') )") \*/
	_T(" AND hpc_status    ='R'") \
	_T(" AND hpc_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') %s ") \
	_T(" AND hd_status   IN('O','P','T')") \
	_T(" AND limso_instid>0") \
	//_T(" AND hpc_groupid IN('B0000','B1200','B1300','B1600') ") \//
	_T(" ORDER BY barcode") \
	_T(" )tmp2"), m_szFromDate, m_szToDate, szWhere);\
 	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	//if (rs.GetIntValue()>0)
	{
		rs.GetValue(_T("TotalRunning"), m_nTotalRunning);
	}	
	UpdateData(FALSE);
} 
/*void CLIMSTestReport::OnRunningtestChange(){
	
} */
/*void CLIMSTestReport::OnRunningtestSetfocus(){
	
} */
/*void CLIMSTestReport::OnRunningtestKillfocus(){
	
} */
int CLIMSTestReport::OnRunningtestCheckValue(){
	return 0;
} 
void CLIMSTestReport::OnPerformedLabelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szTestID, szTestName;
	CString szMachineID, szMachineName;
	for (int i = 0; i < m_wndTestGroup.GetItemCount(); i++)
	{
		if (m_wndTestGroup.GetCheck(i))
		{
			if (!szTestName.IsEmpty())
				szTestName += _T(",");
				szTestName.AppendFormat(_T("'%s'"), m_wndTestGroup.GetItemText(i, 0));
		}
	}
	
	for (int i = 0; i < m_wndMachine.GetItemCount(); i++)
	{
		if (m_wndMachine.GetCheck(i))
		{
			if (!szMachineName.IsEmpty())
				szMachineName += _T(",");
				szMachineName.AppendFormat(_T("'%s'"), m_wndMachine.GetItemText(i, 0));
		}
	}
	if (!szTestName.IsEmpty())
		{
		szWhere.AppendFormat(_T("and hpc_groupid in (%s)"), szTestName);
        }

	if (!szMachineName.IsEmpty())
		{
		szWhere.AppendFormat(_T("and limsol_instid in (%s)"), szMachineName);
        }
	if (m_bManualInput)
	{
		{
		szWhere.AppendFormat(_T(" and limso_instid is NULL"));
		}
	}
	if (m_bOutPatient)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class='E'"));
		}
	}
	if (m_bInPatient)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class='I'"));
		}
	}
	if (m_bAllHospitals)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class in ('E','I')"));
		}
	}
	szSQL.Format (_T(" SELECT count(docno) AS TotalPerformed FROM") \
	_T(" (") \
	_T(" SELECT DISTINCT hd_docno AS docno,") \
	_T("   hpc_orderid            AS orderid,") \
	_T("   hpc_sid                AS barcode,") \
	_T("   hpc_status             AS status,") \
	_T("   limsol_instid          AS machineID") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_object") \
	_T(" ON(ho_id=hd_object)") \
	_T(" LEFT JOIN hms_testorder") \
    _T(" ON(hpc_docno      =hd_docno)") \
	_T(" LEFT JOIN lims_order ON(hpc_orderid=limso_orderid)") \
	_T(" LEFT JOIN lims_order_line ON (limso_orderid=limsol_orderid)") \
	_T(" WHERE hpc_orderid > 0") \
	/*_T(" AND (ho_type      < >'S'") \
	_T(" OR (ho_type       ='S'") \
	_T(" AND hpc_payment   ='P') )") \*/
	_T(" AND hpc_status    ='P'") \
	_T(" AND hpc_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') %s ") \
	_T(" AND hd_status   IN('O','P','T')") \
	_T(" AND limsol_instid>0") \
	//_T(" AND hpc_groupid IN('B0000','B1200','B1300','B1600') ") \//
	_T(" ORDER BY barcode") \
	_T(" )tmp3"), m_szFromDate, m_szToDate, szWhere);\
 	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	//if (rs.GetIntValue()>0)
	{
		rs.GetValue(_T("TotalPerformed"), m_nTotalPerformed);
	}
	UpdateData(FALSE);
	} 
/*void CLIMSTestReport::OnPerformedtestChange(){
	
} */
/*void CLIMSTestReport::OnPerformedtestSetfocus(){
	
} */
/*void CLIMSTestReport::OnPerformedtestKillfocus(){
	
} */
int CLIMSTestReport::OnPerformedtestCheckValue(){
	return 0;
} 
void CLIMSTestReport::OnUploadedlabelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szTestID, szTestName;
	CString szMachineID, szMachineName;
	for (int i = 0; i < m_wndTestGroup.GetItemCount(); i++)
	{
		if (m_wndTestGroup.GetCheck(i))
		{
			if (!szTestName.IsEmpty())
				szTestName += _T(",");
			szTestName.AppendFormat(_T("'%s'"), m_wndTestGroup.GetItemText(i, 0));
		}
	}
	
	for (int i = 0; i < m_wndMachine.GetItemCount(); i++)
	{
		if (m_wndMachine.GetCheck(i))
		{
			if (!szMachineName.IsEmpty())
				szMachineName += _T(",");
				szMachineName.AppendFormat(_T("'%s'"), m_wndMachine.GetItemText(i, 0));
		}
	}
	if (!szTestName.IsEmpty())
	{
		szWhere.AppendFormat(_T("and hpc_groupid in (%s)"), szTestName);
    }

	if (!szMachineName.IsEmpty())
	{
		szWhere.AppendFormat(_T("and hpcl_instid in (%s)"), szMachineName);
    }

	if (m_bManualInput)
	{
		szWhere.AppendFormat(_T(" and hpcl_instid is NULL"));
	}
	if (m_bOutPatient)
	{
		szWhere.AppendFormat(_T(" AND hpc_class='E'"));
	}
	if (m_bInPatient)
	{
		szWhere.AppendFormat(_T(" AND hpc_class='I'"));
	}
	if (m_bAllHospitals)
	{
		szWhere.AppendFormat(_T(" AND hpc_class in ('E','I')"));
	}
	szSQL.Format (_T(" SELECT count(docno) AS TotalUploaded FROM") \
	_T(" (") \
	_T(" SELECT DISTINCT hd_docno AS docno,") \
	_T("   hpc_orderid            AS orderid,") \
	_T("   hpc_sid                AS barcode,") \
	_T("   hpc_status             AS status,") \
	_T("   hpcl_instid          AS machineID") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_object") \
	_T(" ON(ho_id=hd_object)") \
	_T(" LEFT JOIN hms_testorder") \
	_T(" ON(hpc_docno      =hd_docno)") \
	/*_T(" LEFT JOIN lims_order ON(hpc_orderid=limso_orderid)") \
	_T(" LEFT JOIN lims_order_line ON (limso_orderid=limsol_orderid)") \*/
	_T("  LEFT JOIN hms_testorderline ON (hpc_orderid=hpcl_orderid)") \
	_T("  LEFT JOIN lims_order ON(hpc_orderid=limso_orderid)") \
	_T(" WHERE hpc_orderid > 0") \
	/*_T(" AND (ho_type      < >'S'") \
	_T(" OR (ho_type       ='S'") \
	_T(" AND hpc_payment   ='P') )") \*/
	_T(" AND hpc_status    IN ('T')") \
	_T(" AND hpc_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') %s ") \
	_T(" AND hd_status   IN('O','P','T')") \
	_T("  AND hpcl_instid>0") \
	/*_T(" AND limsol_instid>0") \//
	//_T(" AND hpc_groupid IN('B0000','B1200','B1300','B1600') ") \*/
	_T(" ORDER BY barcode") \
	_T(" )tmp4"), m_szFromDate, m_szToDate, szWhere);\
 	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	//if (rs.GetIntValue()>0)
	{
		rs.GetValue(_T("TotalUploaded"), m_nTotalUploaded);
	}
	UpdateData(FALSE);
} 
/*void CLIMSTestReport::OnUploadedtestChange(){
	
} */
/*void CLIMSTestReport::OnUploadedtestSetfocus(){
	
} */
/*void CLIMSTestReport::OnUploadedtestKillfocus(){
	
} */
int CLIMSTestReport::OnUploadedtestCheckValue(){
	return 0;
}
void CLIMSTestReport::OnTotalLabelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	/*CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format (_T(" SELECT count(docno) AS Total FROM") \
	_T(" (") \
	_T(" SELECT DISTINCT hd_docno AS docno,") \
	_T("   hpc_orderid            AS orderid,") \
	_T("   hpc_sid                AS barcode,") \
	_T("   hpc_status                                     AS status") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_object") \
	_T(" ON(ho_id=hd_object)") \
	_T(" LEFT JOIN hms_testorder") \
	_T(" ON(hpc_docno      =hd_docno)") \
	_T(" WHERE hpc_orderid > 0") \
	_T(" AND (ho_type      < >'S'") \
	_T(" OR (ho_type       ='S'") \
	_T(" AND hpc_payment   ='P') )") \
	_T(" AND hpc_status    IN ('S','R','P','T')") \
	_T(" AND TRUNC(hpc_performdate) = TRUNC(current_date)") \
	_T(" AND hd_status   IN('O','P','T')") \
	_T(" AND hpc_groupid IN('B0000','B1200','B1300','B1600') ") \
	_T(" ORDER BY barcode") \
	_T(" )tmp5"));\
 	rs.ExecSQL(szSQL);	
	if (rs.GetIntValue()>0)
	{
		rs.GetValue(_T("Total"), m_nTotal);
	}*/
	m_nTotal=m_nTotalWaiting+m_nTotalRunning+m_nTotalPerformed+m_nTotalUploaded;
	UpdateData(false);
} 
/*void CLIMSTestReport::OnTotalTestChange(){
	
} */
/*void CLIMSTestReport::OnTotalTestSetfocus(){
	
} */
/*void CLIMSTestReport::OnTotalTestKillfocus(){
	
} */
int CLIMSTestReport::OnTotalTestCheckValue()
{
	return 0;
} 

void CLIMSTestReport::OnRunningManSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//OnTestGroupLoadData();
	m_nTotalWaiting=0;
	m_nTotalRunning=0;
	m_nTotalPerformed=0;
	m_nTotalUploaded=0;
	m_nTotal=0;
	OnWaitingLabelSelect();
	OnRunningLabelSelect();
	OnPerformedLabelSelect();
	OnUploadedlabelSelect();
	OnTotalLabelSelect();
	UpdateData(FALSE);
}
void CLIMSTestReport::OnMachineDblClick(){
	
} 
void CLIMSTestReport::OnMachineSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestReport::OnMachineDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestReport::OnMachineLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMachine.BeginLoad(); 
	m_wndMachine.DeleteAllItems(); 
	int nCount = 0;
	//szSQL.Format(_T(" select limsi_id as id, limsi_model as name, limsi_port as port, limsi_baudrate as baudrate from lims_instrument where limsi_deptid = '%s' order by limsi_id "), m_szPerformDeptKey);//
	szSQL.Format(_T(" select tph_id as id, TPH_NAME as name from TPH_MACHINE_LIST where TPH_DEPTS = '%s' order by tph_id "), m_szPerformDeptKey);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndMachine.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("port")), 
			rs.GetValue(_T("baudrate")),NULL);
		rs.MoveNext();
	}
    m_wndMachine.EndLoad(); 
	for (int i=0; i< m_wndMachine.GetItemCount(); i++)
	{
		m_wndMachine.SetCheck(i,false);
	}
	return nCount;

	return 0;}
void CLIMSTestReport::OnExportByOrderSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, tmpStr, szTemp;
	CRecord rs(&pMF->m_db);
	CString szTestID, szTestName;
	CString szMachineID, szMachineName;
	int nMachineID;
	CExcel xls;
	UpdateData(TRUE);
	BeginWaitCursor();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	
	for (int i = 0; i < m_wndTestGroup.GetItemCount(); i++)
	{
		if (m_wndTestGroup.GetCheck(i))
		{
			if (!szTestName.IsEmpty())
				szTestName += _T(",");
				szTestName.AppendFormat(_T("'%s'"), m_wndTestGroup.GetItemText(i, 0));
		}
	}
	
	for (int i = 0; i < m_wndMachine.GetItemCount(); i++)
	{
		if (m_wndMachine.GetCheck(i))
		{
			if (!szMachineName.IsEmpty())
				szMachineID += _T(",");
				szMachineName += _T("-");
				szMachineID.AppendFormat(_T("'%s'"), m_wndMachine.GetItemText(i, 0));
				szMachineName.AppendFormat(_T("'%s'"), m_wndMachine.GetItemText(i, 1));
		}
	}
	if (!szTestName.IsEmpty())
		{
		szWhere.AppendFormat(_T("and hpc_groupid in (%s)"), szTestName);
        }

	if (!szMachineName.IsEmpty())
		{
		szWhere.AppendFormat(_T("and hpcl_instid in (%s)"), szMachineID);
        }

	if (m_bManualInput)
	{
		{
		szWhere.AppendFormat(_T(" and hpcl_instid is NULL"));
		}
	}
	if (m_bOutPatient)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class='E'"));
		}
	}
	if (m_bInPatient)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class='I'"));
		}
	}
	if (m_bAllHospitals)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class in ('E','I')"));
		}
	}
	//Old Version
	/*szSQL.Format(_T("  SELECT") \
	_T("  nametest as nametest,") \
	_T("  MachineName as MachineName,") \
	_T("  sum(tongso) as tongso,") \
	_T("  sum(quan) as quan,") \
	_T("  sum(bhytquan) as bhytquan,") \
	_T("  sum(bhytquandoi) as bhytquandoi,") \
	_T("  sum(bhytthannhansyquan) as bhytthannhansyquan,") \
	_T("  sum(bhytkhac) as bhytkhac,") \
	_T("  sum(bhytquannhan) as bhytquannhan,") \
	_T("  sum(bhytnothe) as bhytnothe,") \
	_T("  sum(treem) as treem,") \
	_T("  sum(treemcothe) as treemcothe,") \
	_T("  sum(chinhsach) as chinhsach,") \
	_T("  sum(dichvu) as dichvu,") \
	_T("  sum(ban) as ban, ") \
	_T("  sum(tyc) as tyc") \
	_T("  FROM ") \
	_T("  ( ") \
	_T("  SELECT DISTINCT ") \
	_T("  hd_docno AS docno,   ") \
	_T("  1 as tongso,") \
	_T("  hfg_name as nametest,") \
	//_T("  limsi_name as MachineName,") \//
	_T("  CASE WHEN hpcl_posted ='Y' THEN hpcl_instname else limsi_name end               AS MachineName,") \
	_T("  case when hd_object='1' then 1 else 0 end as quan,") \
	_T("  case when hd_object='2' then 1 else 0 end as bhytquan,") \
	_T("  case when hd_object='3' then 1 else 0 end as chinhsach,") \
	_T("  case when hd_object='4' then 1 else 0 end as bhytkhac,") \
	_T("  case when hd_object='5' then 1 else 0 end as bhytthannhansyquan,") \
	_T("  case when hd_object='6' then 1 else 0 end as treem,") \
	//_T("  case when hd_object='7' then 1 else 0 end as dichvu,") \//
	_T("  case when hd_object='7' AND NVL(hd_isreq, 'N') <> 'Y' then 1 else 0 end as dichvu,") \
	_T("  case when hd_object='7' and hd_isreq ='Y' then 1 else 0 end as tyc,") \
	_T("  case when hd_object='8' then 1 else 0 end as ban,") \
	_T("  case when hd_object='9' then 1 else 0 end as treemcothe,") \
	_T("  case when hd_object='10' then 1 else 0 end as bhytquandoi,") \
	_T("  case when hd_object='11' then 1 else 0 end as bhytquannhan,") \
	_T("  case when hd_object='12' then 1 else 0 end as bhytnothe,") \
	_T("  case when hd_object in('1','2','3','4','5','6','7','8','9','10','11','12','13') then 1 else 0 end as tongsoluot,") \
	_T("  hpc_orderid            AS orderid,   ") \
	_T("  hpc_sid                AS barcode,   ") \
	_T("  hpc_status             AS status, ") \
	_T("  hpcl_instid             AS machineID ") \
	_T("  FROM hms_patient ") \
	_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
	_T("  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
	_T("  LEFT JOIN hms_testorder ON(hpc_docno      =hd_docno)") \
	_T("  LEFT JOIN hms_testorderline ON (hpc_orderid=hpcl_orderid)") \
	_T("  LEFT JOIN lims_instrument ON (hpcl_instid=limsi_id)") \
	_T("  lEFT JOIN hms_fee_group ON (hfg_id=hpc_groupid)") \
	_T("  LEFT JOIN lims_order ON(hpc_orderid=limso_orderid) WHERE hpc_orderid > 0 ") \
	//_T("  AND (ho_type      < >'S' OR (ho_type       ='S' AND hpc_payment   ='P') ) ") \//
	_T("  AND hpc_status   IN ('P','T')") \
	_T("  AND hpcl_instid>0") \
	_T("  AND hpc_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')%s") \
	_T("  AND hd_status   IN('O','P','T') ORDER BY barcode ") \
	_T("  )tmp3") \
	_T("  GROUP BY nametest, MachineName") \
	_T("  ORDER BY nametest"), m_szFromDate, m_szToDate, szWhere); \*/

	//New Version
	szSQL.Format(_T("  SELECT") \
	_T("  nametest as nametest,") \
	_T("  MachineName as MachineName,") \
	_T("  sum(tongso) as tongso,") \
	_T("  sum(quan) as quan,") \
	_T("  sum(bhytquan) as bhytquan,") \
	_T("  sum(bhytquandoi) as bhytquandoi,") \
	_T("  sum(bhytthannhansyquan) as bhytthannhansyquan,") \
	_T("  sum(bhytkhac) as bhytkhac,") \
	_T("  sum(bhytquannhan) as bhytquannhan,") \
	_T("  sum(bhytnothe) as bhytnothe,") \
	_T("  sum(treem) as treem,") \
	_T("  sum(treemcothe) as treemcothe,") \
	_T("  sum(chinhsach) as chinhsach,") \
	_T("  sum(dichvu) as dichvu,") \
	_T("  sum(ban) as ban, ") \
	_T("  sum(tyc) as tyc") \
	_T("  FROM ") \
	_T("  ( ") \
	_T("  SELECT DISTINCT ") \
	_T("  hd_docno AS docno,   ") \
	_T("  1 as tongso,") \
	_T("  hfg_name as nametest,") \
	_T("  null as MachineName,") \
	//_T("  CASE WHEN hpcl_posted ='Y' THEN hpcl_instname else limsi_name end               AS MachineName,") \//
	_T("  case when hd_object='1' then 1 else 0 end as quan,") \
	_T("  case when hd_object='2' then 1 else 0 end as bhytquan,") \
	_T("  case when hd_object='3' then 1 else 0 end as chinhsach,") \
	_T("  case when hd_object='4' then 1 else 0 end as bhytkhac,") \
	_T("  case when hd_object='5' then 1 else 0 end as bhytthannhansyquan,") \
	_T("  case when hd_object='6' then 1 else 0 end as treem,") \
	//_T("  case when hd_object='7' then 1 else 0 end as dichvu,") \//
	_T("  case when hd_object='7' AND NVL(hd_isreq, 'N') <> 'Y' then 1 else 0 end as dichvu,") \
	_T("  case when hd_object='7' and hd_isreq ='Y' then 1 else 0 end as tyc,") \
	_T("  case when hd_object='8' then 1 else 0 end as ban,") \
	_T("  case when hd_object='9' then 1 else 0 end as treemcothe,") \
	_T("  case when hd_object='10' then 1 else 0 end as bhytquandoi,") \
	_T("  case when hd_object='11' then 1 else 0 end as bhytquannhan,") \
	_T("  case when hd_object='12' then 1 else 0 end as bhytnothe,") \
	_T("  case when hd_object in('1','2','3','4','5','6','7','8','9','10','11','12','13') then 1 else 0 end as tongsoluot,") \
	_T("  hpc_orderid            AS orderid,   ") \
	_T("  hpc_sid                AS barcode,   ") \
	_T("  hpc_status             AS status, ") \
	_T("  hpcl_instid            AS machineID ") \
	_T("  FROM hms_patient ") \
	_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
	_T("  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
	_T("  LEFT JOIN hms_testorder ON(hpc_docno      =hd_docno)") \
	_T("  LEFT JOIN hms_testorderline ON (hpc_orderid=hpcl_orderid)") \
	//_T("  LEFT JOIN TPH_MACHINE_LIST ON (hpcl_instid=to_number(TPH_ID))") \//
	_T("  lEFT JOIN hms_fee_group ON (hfg_id=hpc_groupid)") \
	_T("  LEFT JOIN lims_order ON(hpc_orderid=limso_orderid) WHERE hpc_orderid > 0 ") \
	//_T("  AND (ho_type      < >'S' OR (ho_type       ='S' AND hpc_payment   ='P') ) ") \//
	_T("  AND hpc_status   IN ('P','T')") \
	//_T("  AND hpcl_instid>0") \//
	_T("  AND hpc_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')%s") \
	_T("  AND hd_status   IN('O','P','T') ORDER BY barcode ") \
	_T("  )tmp3") \
	_T("  GROUP BY nametest, MachineName") \
	_T("  ORDER BY nametest"), m_szFromDate, m_szToDate, szWhere); \

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 6);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 12);
	xls.SetColumnWidth(7, 13);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 14);
	xls.SetColumnWidth(10, 10);
	xls.SetColumnWidth(11, 7);
	xls.SetColumnWidth(12, 9);
	xls.SetColumnWidth(13, 11);
	xls.SetColumnWidth(14, 7);
	xls.SetColumnWidth(15, 4);
	xls.SetColumnWidth(16, 7);

	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 5);
	xls.SetRowHeight(4, 20);
	xls.SetCellMergedColumns(0, 4, 15);
	xls.SetCellMergedColumns(0, 5, 15);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT, true, 12, 0);
	TranslateString(_T("Department"), tmpStr);
	szTemp.Format(_T("%s: %s"), tmpStr, pMF->m_szDept);
	xls.SetCellText(0, 3, szTemp, FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 4, _T("\x42\xC1O \x43\xC1O S\x1ED0 L\x1AF\x1EE2T \x43\x1EACN L\xC2M S\xC0NG TH\x45O M\xC1Y"),
					FMT_TEXT | FMT_CENTER, true, 16, 0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);
	TranslateString(_T("MachineName"), tmpStr);
	szTemp.Format(_T("%s: %s"), tmpStr, szMachineName);
	xls.SetCellText(0, 7, szTemp, FMT_TEXT, false, 12, 0);

	int nRow = 8;

	//xls.SetCellMergedRows(0, nRow, 2);
	xls.SetCellText(0, nRow+1, _T("STT"), FMT_TEXT | FMT_CENTER,true);
	
	//xls.SetCellMergedRows(1, nRow, 2);
	TranslateString(_T("Test Name"), tmpStr);
	xls.SetCellText(1, nRow+1, tmpStr, FMT_TEXT | FMT_CENTER,true);

	/*xls.SetCellMergedColumns(2, nRow, 2);
	xls.SetCellText(2, nRow, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT | FMT_CENTER, true);*/
	//Ten may
	TranslateString(_T("MachineList"), tmpStr);
	xls.SetCellText(2, nRow+1, tmpStr, FMT_TEXT,true);

	//1. Tong so order 
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(3, nRow+1, tmpStr, FMT_TEXT,true);
	//2. Tong so test
	/*TranslateString(_T("Total Test"), tmpStr);
	xls.SetCellText(3, nRow+1, tmpStr, FMT_TEXT,true);*/

	/*xls.SetCellMergedColumns(4, nRow, 2);
	xls.SetCellText(4, nRow, _T("\x42\x1EA3o hi\x1EC3m"), FMT_TEXT | FMT_CENTER, true);*/
	//3. So order benh nhan quan
	TranslateString(_T("Quan"), tmpStr);
	xls.SetCellText(4, nRow+1, tmpStr, FMT_TEXT,true);
	//4. So test benh nhan quan
	/*TranslateString(_T("Quan Test"), tmpStr);
	xls.SetCellText(5, nRow+1, tmpStr, FMT_TEXT,true);*/
		
	/*xls.SetCellMergedColumns(6, nRow, 2);
	xls.SetCellText(6, nRow, _T("Tr\x1EBB \x65m"), FMT_TEXT | FMT_CENTER, true);*/
	
	//5. So order bao hiem quan
	TranslateString(_T("Bao Hiem Quan"), tmpStr);
	xls.SetCellText(5, nRow+1, tmpStr, FMT_TEXT,true);
	//6. So test bao hiem quan
	/*TranslateString(_T("Bao Hiem Quan Test"), tmpStr);
	xls.SetCellText(7, nRow+1, tmpStr, FMT_TEXT,true);
	*/
	/*xls.SetCellMergedColumns(8, nRow, 2);
	xls.SetCellText(8, nRow, _T("BVSK"), FMT_TEXT | FMT_CENTER, true);*/
	//7. So order bao hiem quan doi
	TranslateString(_T("Bao Hiem Quan Doi"), tmpStr);
	xls.SetCellText(6, nRow+1, tmpStr, FMT_TEXT,true);
	
	//8. So test bao hiem quan doi
	/*TranslateString(_T("Bao Hiem Quan Doi Test"), tmpStr);
	xls.SetCellText(9, nRow+1, tmpStr, FMT_TEXT,true);*/
	
	/*xls.SetCellMergedColumns(10, nRow, 2);
	xls.SetCellText(10, nRow, _T("Mi\x1EC5n gi\x1EA3m"), FMT_TEXT | FMT_CENTER, true);*/
	//9. So order bao hiem than nhan
	TranslateString(_T("Bao Hiem Than Nhan"), tmpStr);
	xls.SetCellText(7, nRow+1, tmpStr, FMT_TEXT,true);
	//10. So test bao hiem than nhan

	/*TranslateString(_T("Bao Hiem Than Nhan Test"), tmpStr);
	xls.SetCellText(11, nRow+1, tmpStr, FMT_TEXT,true);*/

	/*xls.SetCellMergedColumns(12, nRow, 2);
	xls.SetCellText(12, nRow, _T("Ng\x1B0\x1EDDi n\x1B0\x1EDB\x63 ngo\xE0i"), FMT_TEXT | FMT_CENTER, true);*/
	//11. So order bao hiem khac
	TranslateString(_T("Bao Hiem Khac"), tmpStr);
	xls.SetCellText(8, nRow+1, tmpStr, FMT_TEXT,true);
	//12. So test bao hiem khac
	
	/*TranslateString(_T("Bao Hiem Khac Test"), tmpStr);
	xls.SetCellText(13, nRow+1, tmpStr, FMT_TEXT,true);*/
	
	/*xls.SetCellMergedColumns(14, nRow, 2);
	xls.SetCellText(14, nRow, _T("\x44\x1ECB\x63h v\x1EE5"), FMT_TEXT | FMT_CENTER, true);*/
	//13. So order bao hiem quan nhan

	TranslateString(_T("Bao Hiem Quan Nhan"), tmpStr);
	xls.SetCellText(9, nRow+1, tmpStr, FMT_TEXT,true);
	
	//14. So test bao hiem quan nhan
	/*TranslateString(_T("Bao Hiem Quan Nhan Test"), tmpStr);
	xls.SetCellText(15, nRow+1, tmpStr, FMT_TEXT,true);*/

	//15. So order BH no the
	TranslateString(_T("Bao Hiem No The"), tmpStr);
	xls.SetCellText(10, nRow+1, tmpStr, FMT_TEXT,true);

	//16. So test BH no the
	/*TranslateString(_T("Bao Hiem No The Test"), tmpStr);
	xls.SetCellText(17, nRow+1, tmpStr, FMT_TEXT,true);*/
	//17. So order tre em
	TranslateString(_T("Tre Em"), tmpStr);
	xls.SetCellText(11, nRow+1, tmpStr, FMT_TEXT,true);
	//18. So test tre em
	/*TranslateString(_T("Tre Em Test"), tmpStr);
	xls.SetCellText(19, nRow+1, tmpStr, FMT_TEXT,true);
	*///19. So order tre em co the
	TranslateString(_T("Tre Em Co The"), tmpStr);
	xls.SetCellText(12, nRow+1, tmpStr, FMT_TEXT,true);
	//20. So test tre em co the
	/*TranslateString(_T("Tre Em Co The Test"), tmpStr);
	xls.SetCellText(21, nRow+1, tmpStr, FMT_TEXT,true);*/
	//21. So order chinh sach
	TranslateString(_T("Chinh Sach"), tmpStr);
	xls.SetCellText(13, nRow+1, tmpStr, FMT_TEXT,true);
	//22. So test chinh sach
	/*TranslateString(_T("Chinh Sach Test"), tmpStr);
	xls.SetCellText(23, nRow+1, tmpStr, FMT_TEXT,true);
	*///23. So order dich vu
	TranslateString(_T("Dich Vu"), tmpStr);
	xls.SetCellText(14, nRow+1, tmpStr, FMT_TEXT,true);
	//24. So test dich vu
	/*TranslateString(_T("Dich Vu Test"), tmpStr);
	xls.SetCellText(25, nRow+1, tmpStr, FMT_TEXT,true);
	*///25. So order ban
	TranslateString(_T("Ban"), tmpStr);
	xls.SetCellText(15, nRow+1, tmpStr, FMT_TEXT,true);
	//26. So test ban
	/*TranslateString(_T("Ban Test"), tmpStr);
	xls.SetCellText(27, nRow+1, tmpStr, FMT_TEXT,true);*/

	TranslateString(_T("tyc"), tmpStr);
	xls.SetCellText(16, nRow+1, tmpStr, FMT_TEXT,true);


	int nIndex=1, nTotal[15];
	for (int i = 0; i < 15; i++)
	{
		nTotal[i]=0;
	}
	while(!rs.IsEOF())
	{
	nRow++;
	tmpStr.Format(_T("%d"), nIndex++);
	xls.SetCellText(0, nRow+1, tmpStr, FMT_INTEGER);

	//1. Ten XN
	rs.GetValue(_T("nametest"), tmpStr);
	xls.SetCellText(1, nRow+1, tmpStr, FMT_TEXT);
	//Ten may
	rs.GetValue(_T("MachineName"), tmpStr);
	xls.SetCellText(2, nRow+1, tmpStr, FMT_TEXT);
	//2. Tong so order
	rs.GetValue(_T("tongso"), tmpStr);
	xls.SetCellText(3, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[0] +=ToInt(tmpStr);
	//3. Tong so test
	/*rs.GetValue(_T("tongsotest"), tmpStr);
	xls.SetCellText(3, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[1] +=ToInt(tmpStr);
	*///4. Order quan
	rs.GetValue(_T("quan"), tmpStr);
	xls.SetCellText(4, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[1] +=ToInt(tmpStr);
	//5. Order quan test
	/*rs.GetValue(_T("quantest"), tmpStr);
	xls.SetCellText(5, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[3] +=ToInt(tmpStr);*/
	//6. order bhytquan
	rs.GetValue(_T("bhytquan"), tmpStr);
	xls.SetCellText(5, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[2] +=ToInt(tmpStr);
	//7. Test bhytquandoi
	/*rs.GetValue(_T("bhytquantest"), tmpStr);
	xls.SetCellText(7, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[5] +=ToInt(tmpStr);*/

	//8. Order bhytquandoi
	rs.GetValue(_T("bhytquandoi"), tmpStr);
	xls.SetCellText(6, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[3] +=ToInt(tmpStr);
	//9. Test bhytquandoitest
	/*rs.GetValue(_T("bhytquandoitest"), tmpStr);
	xls.SetCellText(9, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[7] +=ToInt(tmpStr);
	*///10. Order bhytthannhansyquan
	rs.GetValue(_T("bhytthannhansyquan"), tmpStr);
	xls.SetCellText(7, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[4] +=ToInt(tmpStr);
	//11. Test bhytthannhansyquan
	/*rs.GetValue(_T("bhytthannhansyquantest"), tmpStr);
	xls.SetCellText(11, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[9] +=ToInt(tmpStr);*/
	//12. Order bhytkhac
	rs.GetValue(_T("bhytkhac"), tmpStr);
	xls.SetCellText(8, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[5] +=ToInt(tmpStr);
	//13. Test bhytkhactest
	/*rs.GetValue(_T("bhytkhactest"), tmpStr);
	xls.SetCellText(13, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[11] +=ToInt(tmpStr);*/
	//14. Order bhytquannhan
	rs.GetValue(_T("bhytquannhan"), tmpStr);
	xls.SetCellText(9, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[6] +=ToInt(tmpStr);
	//15. Test bhytquannhantest
	/*rs.GetValue(_T("bhytquannhantest"), tmpStr);
	xls.SetCellText(15, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[13] +=ToInt(tmpStr);*/
	//16. Order bhytnothe
	rs.GetValue(_T("bhytnothe"), tmpStr);
	xls.SetCellText(10, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[7] +=ToInt(tmpStr);
	//17. Test bhytnothetest
	/*rs.GetValue(_T("bhytnothetest"), tmpStr);
	xls.SetCellText(17, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[15] +=ToInt(tmpStr);*/
	//18. Order treem
	rs.GetValue(_T("treem"), tmpStr);
	xls.SetCellText(11, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[8] +=ToInt(tmpStr);
	//19. Test treemtest
	/*rs.GetValue(_T("treemtest"), tmpStr);
	xls.SetCellText(19, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[17] +=ToInt(tmpStr);*/
	//20. Order treemcothe
	rs.GetValue(_T("treemcothe"), tmpStr);
	xls.SetCellText(12, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[9] +=ToInt(tmpStr);
	//21. Test treemcothe
	/*rs.GetValue(_T("treemcothetest"), tmpStr);
	xls.SetCellText(21, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[19] +=ToInt(tmpStr);*/
	//22. Order chinhsach
	rs.GetValue(_T("chinhsach"), tmpStr);
	xls.SetCellText(13, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[10] +=ToInt(tmpStr);
	//23. Test chinhsachtest
	/*rs.GetValue(_T("chinhsachtest"), tmpStr);
	xls.SetCellText(23, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[21] +=ToInt(tmpStr);*/
	//24. Order dichvu
	rs.GetValue(_T("dichvu"), tmpStr);
	xls.SetCellText(14, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[11] +=ToInt(tmpStr);
	//25. Test dichvutest
	/*rs.GetValue(_T("dichvutest"), tmpStr);
	xls.SetCellText(25, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[23] +=ToInt(tmpStr);*/
	//26. Order ban
	rs.GetValue(_T("ban"), tmpStr);
	xls.SetCellText(15, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[12] +=ToInt(tmpStr);
	//26. Test ban
	/*rs.GetValue(_T("bantest"), tmpStr);
	xls.SetCellText(27, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[25] +=ToInt(tmpStr);*/
	rs.GetValue(_T("tyc"), tmpStr);
	xls.SetCellText(16, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[13] +=ToInt(tmpStr);
	rs.MoveNext();
    }
	nRow++;
	TranslateString(_T("Total Order"),tmpStr);
	xls.SetCellText(1, nRow+1, tmpStr, FMT_TEXT, true);
	for (int i = 0; i < 15; i++)
		{		
		tmpStr.Format(_T("%d"),nTotal[i] );		
		xls.SetCellText(i+3, nRow+1, tmpStr, FMT_NUMBER1, true);
		}
	EndWaitCursor();
	xls.SetPaperSize(XLPAPER_A4,true);
	xls.Save(_T("Exports\\BAO CAO SO LUOT CAN LAM SANG THEO MAY.XLS"));
}
void CLIMSTestReport::OnExportByDocnoSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, tmpStr, szTemp;
	CRecord rs(&pMF->m_db);
	CString szTestID, szTestName;
	CString szMachineID, szMachineName;
	CExcel xls;
	UpdateData(TRUE);
	BeginWaitCursor();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	
	for (int i = 0; i < m_wndTestGroup.GetItemCount(); i++)
	{
		if (m_wndTestGroup.GetCheck(i))
		{
			if (!szTestName.IsEmpty())
				szTestName += _T(",");
				szTestName.AppendFormat(_T("'%s'"), m_wndTestGroup.GetItemText(i, 0));
		}
	}
	
	for (int i = 0; i < m_wndMachine.GetItemCount(); i++)
	{
		if (m_wndMachine.GetCheck(i))
		{
			if (!szMachineName.IsEmpty())
				szMachineID += _T(",");
				szMachineName += _T("-");
				szMachineID.AppendFormat(_T("'%s'"), m_wndMachine.GetItemText(i, 0));
				szMachineName.AppendFormat(_T("'%s'"), m_wndMachine.GetItemText(i, 1));
		}
	}
	if (!szTestName.IsEmpty())
		{
		szWhere.AppendFormat(_T("and hpc_groupid in (%s)"), szTestName);
        }

	if (!szMachineName.IsEmpty())
		{
		szWhere.AppendFormat(_T("and limso_instid in (%s)"), szMachineID);
        }

	if (m_bManualInput)
	{
		{
		szWhere.AppendFormat(_T(" and limso_instid is NULL"));
		}
	}
	if (m_bOutPatient)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class='E'"));
		}
	}
	if (m_bInPatient)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class='I'"));
		}
	}
	if (m_bAllHospitals)
	{
		{
		szWhere.AppendFormat(_T(" AND hpc_class in ('E','I')"));
		}
	}
	szSQL.Format(_T("  SELECT") \
	_T("  nametest as nametest,") \
	_T("  sum(tongso) as tongso,") \
	_T("  sum(quan) as quan,") \
	_T("  sum(bhytquan) as bhytquan,") \
	_T("  sum(bhytquandoi) as bhytquandoi,") \
	_T("  sum(bhytthannhansyquan) as bhytthannhansyquan,") \
	_T("  sum(bhytkhac) as bhytkhac,") \
	_T("  sum(bhytquannhan) as bhytquannhan,") \
	_T("  sum(bhytnothe) as bhytnothe,") \
	_T("  sum(treem) as treem,") \
	_T("  sum(treemcothe) as treemcothe,") \
	_T("  sum(chinhsach) as chinhsach,") \
	_T("  sum(dichvu) as dichvu,") \
	_T("  sum(tyc) as tyc,") \
	_T("  sum(ban) as ban ") \
	_T("  FROM ") \
	_T("  ( ") \
	_T("  SELECT DISTINCT ") \
	_T("  hd_docno AS docno,   ") \
	_T("  1 as tongso,") \
	_T("  hfg_name as nametest,") \
	_T("  case when hd_object='1' then 1 else 0 end as quan,") \
	_T("  case when hd_object='2' then 1 else 0 end as bhytquan,") \
	_T("  case when hd_object='3' then 1 else 0 end as chinhsach,") \
	_T("  case when hd_object='4' then 1 else 0 end as bhytkhac,") \
	_T("  case when hd_object='5' then 1 else 0 end as bhytthannhansyquan,") \
	_T("  case when hd_object='6' then 1 else 0 end as treem,") \
	//_T("  case when hd_object='7' then 1 else 0 end as dichvu,") \//
	_T("  case when hd_object='7' AND NVL(hd_isreq, 'N') <> 'Y' then 1 else 0 end as dichvu,") \
	_T("  case when hd_object='7' and hd_isreq ='Y' then 1 else 0 end as tyc,") \
	_T("  case when hd_object='8' then 1 else 0 end as ban,") \
	_T("  case when hd_object='9' then 1 else 0 end as treemcothe,") \
	_T("  case when hd_object='10' then 1 else 0 end as bhytquandoi,") \
	_T("  case when hd_object='11' then 1 else 0 end as bhytquannhan,") \
	_T("  case when hd_object='12' then 1 else 0 end as bhytnothe,") \
	_T("  case when hd_object in('1','2','3','4','5','6','7','8','9','10','11','12','13') then 1 else 0 end as tongsoluot,") \
	/*_T("  hpc_orderid            AS orderid,   ") \
	_T("  hpc_sid                AS barcode,   ") \*/
	_T("  hpc_status             AS status ") \
	_T("  FROM hms_patient ") \
	_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
	_T("  LEFT JOIN hms_object ON(ho_id=hd_object) ") \
	_T("  LEFT JOIN hms_testorder ON(hpc_docno      =hd_docno)") \
	_T("  lEFT JOIN hms_fee_group ON (hfg_id=hpc_groupid)") \
	_T("  LEFT JOIN lims_order ON(hpc_orderid=limso_orderid) WHERE hpc_orderid > 0 ") \
	//_T("  AND (ho_type      < >'S' OR (ho_type       ='S' AND hpc_payment   ='P') ) ") \//
	_T("  AND hpc_status   IN ('P','T')") \
	_T("  AND hpc_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')%s") \
	_T("  AND hd_status   IN('O','P','T') ORDER BY hfg_name ") \
	_T("  )tmp3") \
	_T("  GROUP BY nametest") \
	_T("  ORDER BY nametest"), m_szFromDate, m_szToDate, szWhere); \
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 12);
	xls.SetColumnWidth(6, 13);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 14);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 7);
	xls.SetColumnWidth(11, 9);
	xls.SetColumnWidth(12, 11);
	xls.SetColumnWidth(13, 7);
	xls.SetColumnWidth(14, 4);
	xls.SetColumnWidth(15, 7);

	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 5);
	xls.SetRowHeight(4, 20);
	xls.SetCellMergedColumns(0, 4, 15);
	xls.SetCellMergedColumns(0, 5, 15);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT, true, 12, 0);
	TranslateString(_T("Department"), tmpStr);
	szTemp.Format(_T("%s: %s"), tmpStr, pMF->m_szDept);
	xls.SetCellText(0, 3, szTemp, FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 4, _T("\x42\xC1O \x43\xC1O S\x1ED0 \x42\x1EC6NH NH\xC2N L\xC0M \x43\x1EACN L\xC2M S\xC0NG TH\x45O M\xC1Y"),
					FMT_TEXT | FMT_CENTER, true, 16, 0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);
	
	TranslateString(_T("MachineName"), tmpStr);
	szTemp.Format(_T("%s: %s"), tmpStr, szMachineName);
	xls.SetCellText(0, 7, szTemp, FMT_TEXT, false, 12, 0);
	
	int nRow = 8;

	//xls.SetCellMergedRows(0, nRow, 2);
	xls.SetCellText(0, nRow+1, _T("STT"), FMT_TEXT | FMT_CENTER,true);
	
	//xls.SetCellMergedRows(1, nRow, 2);
	TranslateString(_T("Test Name"), tmpStr);
	xls.SetCellText(1, nRow+1, tmpStr, FMT_TEXT | FMT_CENTER,true);

	/*xls.SetCellMergedColumns(2, nRow, 2);
	xls.SetCellText(2, nRow, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT | FMT_CENTER, true);*/

	//1. Tong so order 
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(2, nRow+1, tmpStr, FMT_TEXT,true);
	//2. Tong so test
	/*TranslateString(_T("Total Test"), tmpStr);
	xls.SetCellText(3, nRow+1, tmpStr, FMT_TEXT,true);*/

	/*xls.SetCellMergedColumns(4, nRow, 2);
	xls.SetCellText(4, nRow, _T("\x42\x1EA3o hi\x1EC3m"), FMT_TEXT | FMT_CENTER, true);*/
	//3. So order benh nhan quan
	TranslateString(_T("Quan"), tmpStr);
	xls.SetCellText(3, nRow+1, tmpStr, FMT_TEXT,true);
	//4. So test benh nhan quan
	/*TranslateString(_T("Quan Test"), tmpStr);
	xls.SetCellText(5, nRow+1, tmpStr, FMT_TEXT,true);*/
		
	/*xls.SetCellMergedColumns(6, nRow, 2);
	xls.SetCellText(6, nRow, _T("Tr\x1EBB \x65m"), FMT_TEXT | FMT_CENTER, true);*/
	
	//5. So order bao hiem quan
	TranslateString(_T("Bao Hiem Quan"), tmpStr);
	xls.SetCellText(4, nRow+1, tmpStr, FMT_TEXT,true);
	//6. So test bao hiem quan
	/*TranslateString(_T("Bao Hiem Quan Test"), tmpStr);
	xls.SetCellText(7, nRow+1, tmpStr, FMT_TEXT,true);
	*/
	/*xls.SetCellMergedColumns(8, nRow, 2);
	xls.SetCellText(8, nRow, _T("BVSK"), FMT_TEXT | FMT_CENTER, true);*/
	//7. So order bao hiem quan doi
	TranslateString(_T("Bao Hiem Quan Doi"), tmpStr);
	xls.SetCellText(5, nRow+1, tmpStr, FMT_TEXT,true);
	
	//8. So test bao hiem quan doi
	/*TranslateString(_T("Bao Hiem Quan Doi Test"), tmpStr);
	xls.SetCellText(9, nRow+1, tmpStr, FMT_TEXT,true);*/
	
	/*xls.SetCellMergedColumns(10, nRow, 2);
	xls.SetCellText(10, nRow, _T("Mi\x1EC5n gi\x1EA3m"), FMT_TEXT | FMT_CENTER, true);*/
	//9. So order bao hiem than nhan
	TranslateString(_T("Bao Hiem Than Nhan"), tmpStr);
	xls.SetCellText(6, nRow+1, tmpStr, FMT_TEXT,true);
	//10. So test bao hiem than nhan

	/*TranslateString(_T("Bao Hiem Than Nhan Test"), tmpStr);
	xls.SetCellText(11, nRow+1, tmpStr, FMT_TEXT,true);*/

	/*xls.SetCellMergedColumns(12, nRow, 2);
	xls.SetCellText(12, nRow, _T("Ng\x1B0\x1EDDi n\x1B0\x1EDB\x63 ngo\xE0i"), FMT_TEXT | FMT_CENTER, true);*/
	//11. So order bao hiem khac
	TranslateString(_T("Bao Hiem Khac"), tmpStr);
	xls.SetCellText(7, nRow+1, tmpStr, FMT_TEXT,true);
	//12. So test bao hiem khac
	
	/*TranslateString(_T("Bao Hiem Khac Test"), tmpStr);
	xls.SetCellText(13, nRow+1, tmpStr, FMT_TEXT,true);*/
	
	/*xls.SetCellMergedColumns(14, nRow, 2);
	xls.SetCellText(14, nRow, _T("\x44\x1ECB\x63h v\x1EE5"), FMT_TEXT | FMT_CENTER, true);*/
	//13. So order bao hiem quan nhan

	TranslateString(_T("Bao Hiem Quan Nhan"), tmpStr);
	xls.SetCellText(8, nRow+1, tmpStr, FMT_TEXT,true);
	
	//14. So test bao hiem quan nhan
	/*TranslateString(_T("Bao Hiem Quan Nhan Test"), tmpStr);
	xls.SetCellText(15, nRow+1, tmpStr, FMT_TEXT,true);*/

	//15. So order BH no the
	TranslateString(_T("Bao Hiem No The"), tmpStr);
	xls.SetCellText(9, nRow+1, tmpStr, FMT_TEXT,true);

	//16. So test BH no the
	/*TranslateString(_T("Bao Hiem No The Test"), tmpStr);
	xls.SetCellText(17, nRow+1, tmpStr, FMT_TEXT,true);*/
	//17. So order tre em
	TranslateString(_T("Tre Em"), tmpStr);
	xls.SetCellText(10, nRow+1, tmpStr, FMT_TEXT,true);
	//18. So test tre em
	/*TranslateString(_T("Tre Em Test"), tmpStr);
	xls.SetCellText(19, nRow+1, tmpStr, FMT_TEXT,true);
	*///19. So order tre em co the
	TranslateString(_T("Tre Em Co The"), tmpStr);
	xls.SetCellText(11, nRow+1, tmpStr, FMT_TEXT,true);
	//20. So test tre em co the
	/*TranslateString(_T("Tre Em Co The Test"), tmpStr);
	xls.SetCellText(21, nRow+1, tmpStr, FMT_TEXT,true);*/
	//21. So order chinh sach
	TranslateString(_T("Chinh Sach"), tmpStr);
	xls.SetCellText(12, nRow+1, tmpStr, FMT_TEXT,true);
	//22. So test chinh sach
	/*TranslateString(_T("Chinh Sach Test"), tmpStr);
	xls.SetCellText(23, nRow+1, tmpStr, FMT_TEXT,true);
	*///23. So order dich vu
	TranslateString(_T("Dich Vu"), tmpStr);
	xls.SetCellText(13, nRow+1, tmpStr, FMT_TEXT,true);
	//24. So test dich vu
	/*TranslateString(_T("Dich Vu Test"), tmpStr);
	xls.SetCellText(25, nRow+1, tmpStr, FMT_TEXT,true);
	*///25. So order ban
	TranslateString(_T("Ban"), tmpStr);
	xls.SetCellText(14, nRow+1, tmpStr, FMT_TEXT,true);
	//26. So test ban
	/*TranslateString(_T("Ban Test"), tmpStr);
	xls.SetCellText(27, nRow+1, tmpStr, FMT_TEXT,true);*/
	
	TranslateString(_T("tyc"), tmpStr);
	xls.SetCellText(15, nRow+1, tmpStr, FMT_TEXT,true);

	int nIndex=1, nTotal[14];
	for (int i = 0; i < 14; i++)
	{
		nTotal[i]=0;
	}
	while(!rs.IsEOF())
	{
	nRow++;
	tmpStr.Format(_T("%d"), nIndex++);
	xls.SetCellText(0, nRow+1, tmpStr, FMT_INTEGER);

	//1. Ten XN
	rs.GetValue(_T("nametest"), tmpStr);
	xls.SetCellText(1, nRow+1, tmpStr, FMT_TEXT);
	//2. Tong so order
	rs.GetValue(_T("tongso"), tmpStr);
	xls.SetCellText(2, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[0] +=ToInt(tmpStr);
	//3. Tong so test
	/*rs.GetValue(_T("tongsotest"), tmpStr);
	xls.SetCellText(3, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[1] +=ToInt(tmpStr);
	*///4. Order quan
	rs.GetValue(_T("quan"), tmpStr);
	xls.SetCellText(3, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[1] +=ToInt(tmpStr);
	//5. Order quan test
	/*rs.GetValue(_T("quantest"), tmpStr);
	xls.SetCellText(5, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[3] +=ToInt(tmpStr);*/
	//6. order bhytquan
	rs.GetValue(_T("bhytquan"), tmpStr);
	xls.SetCellText(4, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[2] +=ToInt(tmpStr);
	//7. Test bhytquandoi
	/*rs.GetValue(_T("bhytquantest"), tmpStr);
	xls.SetCellText(7, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[5] +=ToInt(tmpStr);*/

	//8. Order bhytquandoi
	rs.GetValue(_T("bhytquandoi"), tmpStr);
	xls.SetCellText(5, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[3] +=ToInt(tmpStr);
	//9. Test bhytquandoitest
	/*rs.GetValue(_T("bhytquandoitest"), tmpStr);
	xls.SetCellText(9, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[7] +=ToInt(tmpStr);
	*///10. Order bhytthannhansyquan
	rs.GetValue(_T("bhytthannhansyquan"), tmpStr);
	xls.SetCellText(6, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[4] +=ToInt(tmpStr);
	//11. Test bhytthannhansyquan
	/*rs.GetValue(_T("bhytthannhansyquantest"), tmpStr);
	xls.SetCellText(11, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[9] +=ToInt(tmpStr);*/
	//12. Order bhytkhac
	rs.GetValue(_T("bhytkhac"), tmpStr);
	xls.SetCellText(7, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[5] +=ToInt(tmpStr);
	//13. Test bhytkhactest
	/*rs.GetValue(_T("bhytkhactest"), tmpStr);
	xls.SetCellText(13, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[11] +=ToInt(tmpStr);*/
	//14. Order bhytquannhan
	rs.GetValue(_T("bhytquannhan"), tmpStr);
	xls.SetCellText(8, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[6] +=ToInt(tmpStr);
	//15. Test bhytquannhantest
	/*rs.GetValue(_T("bhytquannhantest"), tmpStr);
	xls.SetCellText(15, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[13] +=ToInt(tmpStr);*/
	//16. Order bhytnothe
	rs.GetValue(_T("bhytnothe"), tmpStr);
	xls.SetCellText(9, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[7] +=ToInt(tmpStr);
	//17. Test bhytnothetest
	/*rs.GetValue(_T("bhytnothetest"), tmpStr);
	xls.SetCellText(17, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[15] +=ToInt(tmpStr);*/
	//18. Order treem
	rs.GetValue(_T("treem"), tmpStr);
	xls.SetCellText(10, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[8] +=ToInt(tmpStr);
	//19. Test treemtest
	/*rs.GetValue(_T("treemtest"), tmpStr);
	xls.SetCellText(19, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[17] +=ToInt(tmpStr);*/
	//20. Order treemcothe
	rs.GetValue(_T("treemcothe"), tmpStr);
	xls.SetCellText(11, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[9] +=ToInt(tmpStr);
	//21. Test treemcothe
	/*rs.GetValue(_T("treemcothetest"), tmpStr);
	xls.SetCellText(21, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[19] +=ToInt(tmpStr);*/
	//22. Order chinhsach
	rs.GetValue(_T("chinhsach"), tmpStr);
	xls.SetCellText(12, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[10] +=ToInt(tmpStr);
	//23. Test chinhsachtest
	/*rs.GetValue(_T("chinhsachtest"), tmpStr);
	xls.SetCellText(23, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[21] +=ToInt(tmpStr);*/
	//24. Order dichvu
	rs.GetValue(_T("dichvu"), tmpStr);
	xls.SetCellText(13, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[11] +=ToInt(tmpStr);
	//25. Test dichvutest
	/*rs.GetValue(_T("dichvutest"), tmpStr);
	xls.SetCellText(25, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[23] +=ToInt(tmpStr);*/
	//26. Order ban
	rs.GetValue(_T("ban"), tmpStr);
	xls.SetCellText(14, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[12] +=ToInt(tmpStr);
	//26. Test ban
	/*rs.GetValue(_T("bantest"), tmpStr);
	xls.SetCellText(27, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[25] +=ToInt(tmpStr);*/
	rs.GetValue(_T("tyc"), tmpStr);
	xls.SetCellText(15, nRow+1, tmpStr, FMT_INTEGER);
	if (!tmpStr.IsEmpty())nTotal[13] +=ToInt(tmpStr);

	rs.MoveNext();
    }
	nRow++;
	TranslateString(_T("Total Patient"),tmpStr);
	xls.SetCellText(1, nRow+1, tmpStr, FMT_TEXT, true);
	for (int i = 0; i < 14; i++)
		{		
		tmpStr.Format(_T("%d"),nTotal[i] );		
		xls.SetCellText(i+2, nRow+1, tmpStr, FMT_NUMBER1, true);
		}
	EndWaitCursor();
	xls.SetPaperSize(XLPAPER_A4,true);
	xls.Save(_T("Exports\\BAO CAO SO BENH NHAN LAM CAN LAM SANG THEO MAY.XLS"));
} 

int CLIMSTestReport::OnAddLIMSTestReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSTestReport::OnEditLIMSTestReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSTestReport::OnDeleteLIMSTestReport(){
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
 		OnCancelLIMSTestReport(); 
 	}
	return 0;
}
int CLIMSTestReport::OnSaveLIMSTestReport(){
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
 		//OnLIMSTestReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLIMSTestReport::OnCancelLIMSTestReport()
{
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
int CLIMSTestReport::OnLIMSTestReportListLoadData()
{
	return 0;
}
int CLIMSTestReport::OnMachineListCheckAll()
{
	for (int i = 0; i < m_wndMachine.GetItemCount(); i++)
	{
		if (!m_wndMachine.GetCheck(i))
			m_wndMachine.SetCheck(i, TRUE);
	}

	return 0;
}
int CLIMSTestReport::OnMachineListUnCheckAll()
{
	for (int i = 0; i < m_wndMachine.GetItemCount(); i++)
	{
		if (m_wndMachine.GetCheck(i))
			m_wndMachine.SetCheck(i, FALSE);
	}

	return 0;
}
