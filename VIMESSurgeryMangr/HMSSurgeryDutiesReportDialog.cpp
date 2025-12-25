#include "HMSSurgeryDutiesReportDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryDutiesReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryDutiesReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryDutiesReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
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
static void _OnLoadReportSelectFnc(CWnd *pWnd){
	CHMSSurgeryDutiesReportDialog *pVw = (CHMSSurgeryDutiesReportDialog *)pWnd;
	pVw->OnLoadReportSelect();
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
//	m_szDutiesSheet.Empty();
}
CHMSSurgeryDutiesReportDialog::~CHMSSurgeryDutiesReportDialog(){
}
void CHMSSurgeryDutiesReportDialog::OnCreateComponents()
{
	/*m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 460, 301);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 10, 30, 130, 55);
	m_wndReportPeriod.Create(this,135, 30, 456, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 130, 85);
	m_wndFromDate.Create(this,135, 60, 255, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 260, 60, 331, 85);
	m_wndToDate.Create(this,336, 60, 456, 85); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 90, 130, 115);
	m_wndDoctor.Create(this,135, 90, 456, 115); 
	m_wndDoctor1Label.Create(this, _T("Doctor1"), 10, 120, 130, 145);
	m_wndDoctor1.Create(this,135, 120, 456, 145); 
	m_wndNurses1Label.Create(this, _T("Nurses1"), 10, 150, 130, 175);
	m_wndNurses1.Create(this,135, 150, 456, 175); 
	m_wndNurses2Label.Create(this, _T("Nurses2"), 10, 180, 130, 205);
	m_wndNurses2.Create(this,135, 180, 456, 205); 
	m_wndNurses3Label.Create(this, _T("Nurses3"), 10, 210, 130, 235);
	m_wndNurses3.Create(this,135, 210, 456, 235); 
	m_wndNurses4Label.Create(this, _T("Nurses4"), 10, 240, 130, 265);
	m_wndNurses4.Create(this,135, 240, 456, 265); 
	m_wndNurses5Label.Create(this, _T("Nurses5"), 10, 270, 130, 295);
	m_wndNurses5.Create(this,135, 270, 456, 295); 
	m_wndLoadReport.Create(this, _T("&Load Report"), 195, 306, 280, 331);
	m_wndExport.Create(this, _T("&Export XLS"), 285, 306, 370, 331);
	m_wndClose.Create(this, _T("&Close"), 375, 306, 460, 331);*/

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
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(45);
	m_wndDoctor1.SetCheckValue(true);
	m_wndDoctor1.LimitText(45);
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



	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndDoctor.InsertColumn(2, _T("Dept"), CFMT_TEXT, 80);

	m_wndDoctor1.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndDoctor1.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndDoctor1.InsertColumn(2, _T("Dept"), CFMT_TEXT, 80);


	m_wndNurses1.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndNurses1.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndNurses1.InsertColumn(2, _T("Dept"), CFMT_TEXT, 80);


	m_wndNurses2.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndNurses2.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndNurses2.InsertColumn(2, _T("Dept"), CFMT_TEXT, 80);

	m_wndNurses3.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndNurses3.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndNurses3.InsertColumn(2, _T("Dept"), CFMT_TEXT, 80);


	m_wndNurses4.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndNurses4.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndNurses4.InsertColumn(2, _T("Dept"), CFMT_TEXT, 80);

	m_wndNurses5.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndNurses5.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndNurses5.InsertColumn(2, _T("Dept"), CFMT_TEXT, 80);
	

	m_szFromDate = m_szToDate = pMF->GetSysDateTime();
	
}
void CHMSSurgeryDutiesReportDialog::OnSetWindowEvents(){
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
	m_wndLoadReport.SetEvent(WE_CLICK, _OnLoadReportSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
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
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctor1AddNewFnc);

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

	SetMode(VM_EDIT);
}
void CHMSSurgeryDutiesReportDialog::OnDoDataExchange(CDataExchange* pDX){
	//DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
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

	m_szReportPeriodKey.Empty();
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
int CHMSSurgeryDutiesReportDialog::SetMode(int nMode)
{
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
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, -1);
			if (pMF->CheckPermission(_T("3.7")))
				EnableControls(TRUE);
			else
			{
				m_wndFromDate.EnableWindow(TRUE);
				m_wndToDate.EnableWindow(TRUE);
			}
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
void CHMSSurgeryDutiesReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDutiesReportDialog::OnReportPeriodSelendok(){
	 
}
/*void CHMSSurgeryDutiesReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSSurgeryDutiesReportDialog::OnReportPeriodKillfocus(){
	
}*/
long CHMSSurgeryDutiesReportDialog::OnReportPeriodLoadData(){
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
/*void CHMSSurgeryDutiesReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
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
long CHMSSurgeryDutiesReportDialog::OnDoctorLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szNurses1Key.IsEmpty())
		m_szNurses1Key = _T("''''");

	if (m_szNurses2Key.IsEmpty())
		m_szNurses2Key = _T("''''");

	if (m_szNurses3Key.IsEmpty())
		m_szNurses3Key = _T("''''");

	if (m_szNurses4Key.IsEmpty())
		m_szNurses4Key = _T("''''");

	if (m_szNurses5Key.IsEmpty())
		m_szNurses5Key = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctorKey);
	}

	m_wndDoctor.DeleteAllItems(); 	
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE lower(su_userid) not in('%s', '%s','%s', '%s','%s', '%s') %s ORDER BY su_userid"), 
		         m_szNurses1Key, m_szNurses2Key,m_szNurses3Key,m_szNurses4Key,m_szNurses5Key,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
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
long CHMSSurgeryDutiesReportDialog::OnDoctor1LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szNurses1Key.IsEmpty())
	{
		m_szNurses1Key = _T("''''");
	}

	if (m_szNurses2Key.IsEmpty())
	{
		m_szNurses2Key = _T("''''");
	}

	if (m_szNurses3Key.IsEmpty())
	{
		m_szNurses3Key = _T("''''");
	}

	if (m_szNurses4Key.IsEmpty())
	{
		m_szNurses4Key = _T("''''");
	}

	if (m_szNurses5Key.IsEmpty())
	{
		m_szNurses5Key = _T("''''");
	}

	if (m_szDoctorKey.IsEmpty())
	{
		m_szDoctorKey = _T("''''");
	}

	if(m_wndDoctor1.IsSearchKey() && !m_szDoctor1Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctor1Key);
	}

	//m_szNurses1Key, m_szNurses2Key,m_szNurses3Key,m_szNurses4Key,m_szNurses5Key,m_szDoctorKey;

	m_wndDoctor1.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE lower(su_userid) not in('%s', '%s','%s','%s','%s','%s') %s ORDER BY su_userid"), 
		         m_szNurses1Key, m_szNurses2Key,m_szNurses3Key,m_szNurses4Key,m_szNurses5Key,m_szDoctorKey, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDoctor1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
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
long CHMSSurgeryDutiesReportDialog::OnNurses1LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	//m_szNurses2Key,m_szNurses3Key,m_szNurses4Key,m_szNurses5Key, m_szDoctorKey,m_szDoctor1Key;

	if (m_szNurses2Key.IsEmpty())
		m_szNurses2Key = _T("''''");

	if (m_szNurses3Key.IsEmpty())
		m_szNurses3Key = _T("''''");

	if (m_szNurses4Key.IsEmpty())
		m_szNurses4Key = _T("''''");

	if (m_szNurses5Key.IsEmpty())
		m_szNurses5Key = _T("''''");

	if (m_szDoctorKey.IsEmpty())
		m_szDoctorKey = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndNurses1.IsSearchKey() && !m_szNurses1Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szNurses1Key);
	}
	m_wndNurses1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE lower(su_userid) not in('%s', '%s','%s', '%s','%s', '%s') %s ORDER BY su_userid"),
		         m_szNurses2Key,m_szNurses3Key,m_szNurses4Key,m_szNurses5Key, m_szDoctorKey,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
long CHMSSurgeryDutiesReportDialog::OnNurses2LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	//m_szNurses1Key,m_szNurses3Key ,m_szNurses4Key,m_szNurses5Key, m_szDoctorKey,m_szDoctor1Key

	if (m_szNurses1Key.IsEmpty())
		m_szNurses1Key = _T("''''");

	if (m_szNurses3Key.IsEmpty())
		m_szNurses3Key = _T("''''");

	if (m_szNurses4Key.IsEmpty())
		m_szNurses4Key = _T("''''");

	if (m_szNurses5Key.IsEmpty())
		m_szNurses5Key = _T("''''");

	if (m_szDoctorKey.IsEmpty())
		m_szDoctorKey = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndNurses2.IsSearchKey() && !m_szNurses2Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szNurses2Key);
	}
	m_wndNurses2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE lower(su_userid) not in('%s', '%s','%s', '%s','%s', '%s') %s ORDER BY su_userid"),
		         m_szNurses1Key,m_szNurses3Key ,m_szNurses4Key,m_szNurses5Key, m_szDoctorKey,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
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
long CHMSSurgeryDutiesReportDialog::OnNurses3LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szNurses1Key.IsEmpty())
		m_szNurses1Key = _T("''''");

	if (m_szNurses2Key.IsEmpty())
		m_szNurses2Key = _T("''''");

	if (m_szNurses4Key.IsEmpty())
		m_szNurses4Key = _T("''''");

	if (m_szNurses5Key.IsEmpty())
		m_szNurses5Key = _T("''''");

	if (m_szDoctorKey.IsEmpty())
		m_szDoctorKey = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndNurses3.IsSearchKey() && !m_szNurses3Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szNurses3Key);
	}
	m_wndNurses3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE lower(su_userid) not in('%s', '%s','%s', '%s','%s', '%s') %s ORDER BY su_userid"),
		         m_szNurses1Key,m_szNurses2Key ,m_szNurses4Key,m_szNurses5Key, m_szDoctorKey,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
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
long CHMSSurgeryDutiesReportDialog::OnNurses4LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szNurses1Key.IsEmpty())
		m_szNurses1Key = _T("''''");

	if (m_szNurses2Key.IsEmpty())
		m_szNurses2Key = _T("''''");

	if (m_szNurses3Key.IsEmpty())
		m_szNurses3Key = _T("''''");

	if (m_szNurses5Key.IsEmpty())
		m_szNurses5Key = _T("''''");

	if (m_szDoctorKey.IsEmpty())
		m_szDoctorKey = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndNurses4.IsSearchKey() && !m_szNurses4Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szNurses4Key);
	}
	m_wndNurses4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE lower(su_userid) not in('%s', '%s','%s', '%s','%s', '%s') %s ORDER BY su_userid"),
		         m_szNurses1Key,m_szNurses2Key ,m_szNurses3Key,m_szNurses5Key, m_szDoctorKey,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSSurgeryDutiesReportDialog::OnNurses5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryDutiesReportDialog::OnNurses5Selendok(){
	 
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses3Setfocus(){
	
}*/
/*void CHMSSurgeryDutiesReportDialog::OnNurses3Killfocus(){
	
}*/
long CHMSSurgeryDutiesReportDialog::OnNurses5LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szNurses1Key.IsEmpty())
		m_szNurses1Key = _T("''''");

	if (m_szNurses2Key.IsEmpty())
		m_szNurses2Key = _T("''''");

	if (m_szNurses3Key.IsEmpty())
		m_szNurses3Key = _T("''''");

	if (m_szNurses4Key.IsEmpty())
		m_szNurses4Key = _T("''''");

	if (m_szDoctorKey.IsEmpty())
		m_szDoctorKey = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndNurses5.IsSearchKey() && !m_szNurses5Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szNurses5Key);
	}

	//m_szNurses1Key,m_szNurses2Key ,m_szNurses3Key,m_szNurses4Key, m_szDoctorKey,m_szDoctor1Key;

	m_wndNurses5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE lower(su_userid) not in('%s', '%s','%s', '%s','%s', '%s') %s ORDER BY su_userid"),
		         m_szNurses1Key,m_szNurses2Key ,m_szNurses3Key,m_szNurses4Key, m_szDoctorKey,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSurgeryDutiesReportDialog::OnNurses5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */


void CHMSSurgeryDutiesReportDialog::OnLoadReportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);
	UpdateData(true);
	
	static CReport rpt;
	CString tmpStr, tmpStr1;
	if(!rpt.Init(_T("Reports/HMS/PTTT/DUTIESREPORT.RPT")) )
	{		//ShowMessageBox(_T("Can not open file report"), MB_OK);		return ;
	}

	BeginWaitCursor();

	/*szSQL.Format(_T("  SELECT hps_recordno as recordno,") \
_T("  	hps_docno as docno,") \
_T("  	hps_pname as pname,") \
_T("	hms_getage(date(hsd_date),date(hps_birthdate)) as age, ") \
_T(" 	(select ho_desc from hms_object where ho_id =cast(hps_object as text) limit 1) as objectname, ") \
_T(" 	case when length(hsd_comment) > 0 then hsd_comment else hfl_name end as surgeryname,") \
_T(" 	(select ham_name from hms_anesthesia_method where ham_idx=hsd_anes_method limit 1) as anaes_method,") \
_T(" 	(select ham_name from hms_anesthesia_method where ham_idx=hsd_anes_method2 limit 1) as anaes_method1,") \
_T("  	hsd_surgeon as surgeon,") \
_T("  	hsd_anesthetist as anesthetish,") \
_T("  	hsd_assist1 as assist1,") \
_T("  	hsd_anaes_method as assist2,") \
_T("  	hsd_assist3 as assist3,  ") \
_T("  	hsd_category as category,  ") \
_T("	(SELECT hst_name as name FROM hms_surgery_type WHERE hst_idx=hsd_category) as categeryname,") \
_T("  	hsd_subcategory as subcategory  ") \
_T("  FROM hms_patient_surgery") \
_T("  LEFT JOIN hms_surgery_detail ON(hsd_docno=hps_docno)") \
_T("  LEFT JOIN hms_feelist ON(hfl_feeid=hsd_refitem)") \
_T("  LEFT JOIN hms_feegroup ON(hfg_id=hfl_groupid) ") \
_T("  WHERE hsd_deptid ='%s' AND (hsd_date) between ('%s') AND ('%s') ORDER BY category,hsd_date"),pMF->m_szDepartment, m_szFromDate, m_szToDate);*/

	szSQL.Format(_T(" SELECT ") \
				_T("        ho_docno as docno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age, ") \
				_T("        (select ho_desc from hms_object where ho_id=cast(ho_object as nvarchar2(2)) and rownum < 2) as objectname, ") \
				_T("        case when length(ho_comment) > 0 then ho_comment else hfl_name end as surgeryname,") \
				_T("        (select ham_name from hms_anesthesia_method where ham_idx=ho_anes_method and rownum < 2) as anaes_method,") \
				_T("        (select ham_name from hms_anesthesia_method where ham_idx=ho_anes_method2 and rownum < 2) as anaes_method1,") \
				_T("        ho_practitioner as surgeon,") \
				_T("        ho_anesthetist as anesthetish,") \
				_T("        ho_user5 as assist1,") \
				_T("        ho_anaes_method as assist2,") \
				_T("        ho_user7 as assist3,  ") \
				_T("        ho_type as category, ") \
				_T("        (SELECT ss_desc as name FROM sys_sel WHERE ss_code=ho_type AND ss_id='hms_operation_type') as categeryname,") \
				_T("        ho_subcategory as subcategory") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_operation ON(ho_docno=hcr_docno and ho_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_fee_list ON(hfl_feeid=ho_itemid)") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfl_groupid)") \
				_T(" WHERE ho_pdeptid='%s'") \
				_T("       AND ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T(" ORDER BY ho_type, ho_performdate"), pMF->m_szDepartment, m_szFromDate, m_szToDate);



//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	/*if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK);
		return;
	}*/

	
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);	
	rpt.GetReportHeader()->Format(_T("ReportDate"), CDateTime::Convert(m_szFromDate,yyyymmdd|hhmmss,ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate,yyyymmdd|hhmmss,ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("DutiesSheet"), _T(""));
	
	if (pMF->CheckPermission(_T("3.7")))
	{
		tmpStr = m_wndDoctor.GetCurrent(1);
		rpt.GetReportHeader()->SetValue(_T("B1"), tmpStr);
		tmpStr = m_wndDoctor1.GetCurrent(1);
		rpt.GetReportHeader()->SetValue(_T("B2"), tmpStr);
		tmpStr = m_wndNurses1.GetCurrent(1);
		rpt.GetReportHeader()->SetValue(_T("Y1"), tmpStr);
		tmpStr = m_wndNurses2.GetCurrent(1);
		rpt.GetReportHeader()->SetValue(_T("Y2"), tmpStr);
		tmpStr = m_wndNurses3.GetCurrent(1);
		rpt.GetReportHeader()->SetValue(_T("Y3"), tmpStr);
		tmpStr = m_wndNurses4.GetCurrent(1);
		rpt.GetReportHeader()->SetValue(_T("Y4"), tmpStr);
		tmpStr.Format(_T("%s"), m_wndNurses5.GetCurrent(1));	
		rpt.GetReportHeader()->SetValue(_T("Y5"), tmpStr);
	}
	else
	{
		szSQL.Format(_T(" SELECT (SELECT su_name FROM sys_user WHERE su_userid=hssl_doctor) AS Doctor,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_doctor1) AS Doctor1,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_nurse1) AS Nurse1,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_nurse2) AS Nurse2,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_nurse3) AS Nurse3,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_nurse4) AS Nurse4,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_nurse5) AS Nurse5") \
				_T(" FROM hms_surgery_schedule_line") \
				_T(" LEFT JOIN hms_surgery_schedule ON(hss_idx=hssl_refidx)") \
				_T(" WHERE hss_starttime BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T(" AND hss_endtime >= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') <= hss_endtime") \
				_T(" AND rownum=1") \
				_T(" ORDER BY hss_starttime, hss_endtime DESC"),
				m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);
		rss.ExecSQL(szSQL);

		if (!rss.IsEOF())
		{
			rss.GetValue(_T("Doctor"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("B1"), tmpStr);
			rss.GetValue(_T("Doctor1"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("B2"), tmpStr);
			rss.GetValue(_T("Nurse1"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Y1"), tmpStr);
			rss.GetValue(_T("Nurse2"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Y2"), tmpStr);
			rss.GetValue(_T("Nurse3"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Y3"), tmpStr);
			rss.GetValue(_T("Nurse4"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Y4"), tmpStr);
			rss.GetValue(_T("Nurse5"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Y5"), tmpStr);
		}
	}

	//Page Header
	//Report Detail
	int nIndex = 1;
	int nTotalSurgeryType[20];
	int nTotalHitech[20];
	int grpCost=0;
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;
	for (int i =0; i < 11; i++) 
	{
		nTotalSurgeryType[i] = 0;
		nTotalHitech[i] = 0;
	}

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("categeryname"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), szNewLine);
			szOldLine = szNewLine;
			nIndex=1;
		}

		CReportSection* rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("Age"), tmpStr);
		rptDetail->SetValue(_T("2_0"), tmpStr);

		rs.GetValue(_T("objectname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("surgeryname"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("anaes_method"), tmpStr);		
		rs.GetValue(_T("anaes_method1"), tmpStr1);
		if (!tmpStr1.IsEmpty())
			tmpStr.AppendFormat(_T(",%s"), tmpStr1);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("surgeon"), tmpStr);
		rptDetail->SetValue(_T("7"), pMF->GetDoctorName(tmpStr, true));

		rs.GetValue(_T("anesthetish"), tmpStr);
		rptDetail->SetValue(_T("8"), pMF->GetDoctorName(tmpStr, true));

		rs.GetValue(_T("assist1"), tmpStr);
		rptDetail->SetValue(_T("9"), pMF->GetDoctorName(tmpStr, true));

		rs.GetValue(_T("assist2"), tmpStr);
		rptDetail->SetValue(_T("10"), pMF->GetDoctorName(tmpStr, true));

		rs.GetValue(_T("assist3"), tmpStr);
		rptDetail->SetValue(_T("11"), pMF->GetDoctorName(tmpStr, true));
		int n, hitech;
		rs.GetValue(_T("category"), n);
		rs.GetValue(_T("subcategory"), hitech);	
		
		if (hitech > 0)
			nTotalHitech[0] ++;
		nTotalSurgeryType[0]++;
		if(n > 0 && n < 11)
		{
			nTotalSurgeryType[n] ++;		  	
			if(hitech > 0 && hitech < 11)
			{				
				nTotalHitech[hitech] ++;
			}
		}		

		rs.MoveNext();
	}
	for (int i = 0; i < 11; i++)
	{
		tmpStr.Format(_T("T%d"), i+1);
		rpt.GetReportFooter()->SetValue(tmpStr, int2str(nTotalSurgeryType[i]));
		tmpStr.Format(_T("H%d"), i);
		rpt.GetReportFooter()->SetValue(tmpStr, int2str(nTotalHitech[i]));
	}
	
	//Page Footer
	//Report Footer
	CString szTime, szSysDate,szDate;
	szTime = pMF->GetSysDateTime();
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szTime.Right(8),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	EndWaitCursor();
	rpt.PrintPreview();

} 
void CHMSSurgeryDutiesReportDialog::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CString tmpStr, szDate, szSysDate, szSQL, szObjects, szWhere, tmpStr2, tmpStr1;
	CRecord rs(&pMF->m_db);
	UpdateData(true);

	BeginWaitCursor();
	
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(2, 5);
	xls.SetColumnWidth(3, 29);
	xls.SetColumnWidth(4, 9);
	xls.SetColumnWidth(5, 20);
	xls.SetColumnWidth(6, 20);
	xls.SetColumnWidth(7, 12);
	xls.SetColumnWidth(8, 12);
	xls.SetColumnWidth(9, 12);
	xls.SetColumnWidth(10, 12);
	xls.SetColumnWidth(11, 12);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT, true, 12);	
	//xls.SetCellMergedColumns(0,3,12);
	//xls.SetCellMergedColumns(0,4,12);
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O TR\x1EF0\x43"), FMT_TEXT, true, 18, 0);
	tmpStr.Format(_T("Ng\xE0y %s "), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT, true, 12, 0);
	
	long nRow = 7;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(1, nRow, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(2, nRow, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(3, nRow, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(4, nRow, _T("S\x1ED1 \x42\x41"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(5, nRow, _T("Ph\x1B0\x1A1ng ph\xE1p PT"), FMT_TEXT | FMT_CENTER, true, 11);		
	xls.SetCellText(6, nRow, _T("PP T\xEA/m\xEA"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(7, nRow, _T("PTV"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(8, nRow, _T("\x43h\xEDnh"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(9, nRow, _T("Ph\x1EE5"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(10, nRow, _T("Gi\xFAp vi\x1EC7\x63 \x31"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(11, nRow, _T("Gi\xFAp vi\x1EC7\x63 \x32"), FMT_TEXT | FMT_CENTER, true, 11);
	

	/*szSQL.Format(_T("  SELECT hps_recordno as recordno,") \
_T("  	hps_docno as docno,") \
_T("  	hps_pname as pname,") \
_T("	hms_getage(date(hsd_date),date(hps_birthdate)) as age, ") \
_T(" 	(select ho_desc from hms_object where ho_id =cast(hps_object as text) limit 1) as objectname, ") \
_T(" 	case when length(hsd_comment) > 0 then hsd_comment else hfl_name end as surgeryname,") \
_T(" 	(select ham_name from hms_anesthesia_method where ham_idx=hsd_anes_method limit 1) as anaes_method,") \
_T(" 	(select ham_name from hms_anesthesia_method where ham_idx=hsd_anes_method2 limit 1) as anaes_method1,") \
_T("  	hsd_surgeon as surgeon,") \
_T("  	hsd_anesthetist as anesthetish,") \
_T("  	hsd_assist1 as assist1,") \
_T("  	hsd_anaes_method as assist2,") \
_T("  	hsd_assist3 as assist3,  ") \
_T("  	hsd_category as category,  ") \
_T("	(SELECT hst_name as name FROM hms_surgery_type WHERE hst_idx=hsd_category) as categeryname,") \
_T("  	hsd_subcategory as subcategory  ") \
_T("  FROM hms_patient_surgery") \
_T("  LEFT JOIN hms_surgery_detail ON(hsd_docno=hps_docno)") \
_T("  LEFT JOIN hms_feelist ON(hfl_feeid=hsd_refitem)") \
_T("  LEFT JOIN hms_feegroup ON(hfg_id=hfl_groupid) ") \
_T("  WHERE hsd_deptid ='%s' AND date(hsd_date) between date('%s') AND date('%s') ORDER BY category,hsd_date"),pMF->m_szDepartment, m_szFromDate, m_szToDate);*/

	szSQL.Format(_T(" SELECT ") \
				_T("        ho_docno as docno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age, ") \
				_T("        (select ho_desc from hms_object where ho_id=cast(ho_object as nvarchar2(2)) and rownum < 2) as objectname, ") \
				_T("        case when length(ho_comment) > 0 then ho_comment else hfl_name end as surgeryname,") \
				_T("        (select ham_name from hms_anesthesia_method where ham_idx=ho_anes_method and rownum < 2) as anaes_method,") \
				_T("        (select ham_name from hms_anesthesia_method where ham_idx=ho_anes_method2 and rownum < 2) as anaes_method1,") \
				_T("        ho_practitioner as surgeon,") \
				_T("        ho_anesthetist as anesthetish,") \
				_T("        ho_user5 as assist1,") \
				_T("        ho_anaes_method as assist2,") \
				_T("        ho_user7 as assist3,  ") \
				_T("        ho_type as category, ") \
				_T("        (SELECT ss_desc as name FROM sys_sel WHERE ss_code=ho_type AND ss_id='hms_operation_type') as categeryname,") \
				_T("        ho_subcategory as subcategory") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_operation ON(ho_docno=hcr_docno and ho_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_fee_list ON(hfl_feeid=ho_itemid)") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfl_groupid)") \
				_T(" WHERE ho_pdeptid='%s'") \
				_T("       AND ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T(" ORDER BY ho_type, ho_performdate"), pMF->m_szDepartment, m_szFromDate, m_szToDate);
//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK);
		return;
	}

	
	//Page Header
	//Report Detail
	int nIndex = 1;
	int nTotalSurgeryType[20];
	int nTotalHitech[20];
	CString szOldLine, szNewLine;
	for (int i = 0; i < 20; i++)
	{
		nTotalSurgeryType[i] = 0;
		nTotalHitech[i] = 0;
	}
	

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("categeryname"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			nRow++;
			xls.SetCellText(0, nRow, szNewLine, FMT_TEXT,true);
			szOldLine = szNewLine;
			nIndex = 1;
		}

		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("objectname"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("surgeryname"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("anaes_method"), tmpStr);
		rs.GetValue(_T("anaes_method1"), tmpStr1);
		if (!tmpStr1.IsEmpty())
			tmpStr.AppendFormat(_T(",%s"), tmpStr1);	

		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("surgeon"), tmpStr);
		xls.SetCellText(7, nRow, pMF->GetDoctorName(tmpStr, true), FMT_TEXT);

		rs.GetValue(_T("anesthetish"), tmpStr);
		xls.SetCellText(8, nRow, pMF->GetDoctorName(tmpStr, true), FMT_TEXT);

		rs.GetValue(_T("assist1"), tmpStr);
		xls.SetCellText(9, nRow, pMF->GetDoctorName(tmpStr, true), FMT_TEXT);

		rs.GetValue(_T("assist2"), tmpStr);
		xls.SetCellText(10, nRow, pMF->GetDoctorName(tmpStr, true), FMT_TEXT);

		rs.GetValue(_T("assist3"), tmpStr);
		xls.SetCellText(11, nRow, pMF->GetDoctorName(tmpStr, true), FMT_TEXT);

		int n, hitech;
		rs.GetValue(_T("category"), n);
		nTotalSurgeryType[0]++;
		if (n > 0 && n < 10)
		{
			nTotalSurgeryType[n]++;
		   //Neu la mo ky thuat cao			
			rs.GetValue(_T("subcategory"), hitech);
			if(hitech > 0 && hitech < 10)
			{
				nTotalHitech[hitech]++;		
			}
		}
		rs.MoveNext();
	}
	
	for (int i = 0; i < 10; i++)
	{
		//tmpStr.Format(_T("T%d"), i);
		if (nTotalSurgeryType[i] > 0)
		{
			szSQL.Format(_T("SELECT ss_desc AS Name FROM sys_sel WHERE ss_code=%d AND ss_id='hms_operation_type'"), i);
			rs.ExecSQL(szSQL);
			if (!rs.IsEOF())
			{
				tmpStr.Format(_T("%s: %d"), rs.GetValue(_T("Name")), nTotalSurgeryType[i]);
				xls.SetCellText(0, ++nRow, tmpStr, FMT_TEXT, true, 11);
			}
		}
		if (nTotalHitech[i] > 0)
		{
			szSQL.Format(_T("SELECT hho_name AS Name FROM hms_hitech_operation WHERE hho_idx=%d"), i);
			rs.ExecSQL(szSQL);

			if (!rs.IsEOF())
			{
				tmpStr.Format(_T("%s: %d"), rs.GetValue(_T("Name")), nTotalHitech[i]);
				xls.SetCellText(0, ++nRow, tmpStr, FMT_TEXT, true, 11);
			}
		}
	}

	EndWaitCursor();
	
	xls.Save(_T("Exports\\Baocaotruc.xls"));
} 
void CHMSSurgeryDutiesReportDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
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
