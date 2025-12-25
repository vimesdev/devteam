#include "stdafx.h"
#include "FMInsuranceCost79A_917.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceCost79A_917* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917 *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceCost79A_917* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917 *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnClerkAddNew();
}*/

static void _OnFileNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceCost79A_917* )pWnd)->OnFileNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFileNameSelendokFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnFileNameSelendok();
}
/*static void _OnFileNameSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnFileNameKillfocus();
}*/
/*static void _OnFileNameKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnFileNameKillfocus();
}*/
static long _OnFileNameLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917 *)pWnd)->OnFileNameLoadData();
}
/*static void _OnFileNameAddNewFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnFileNameAddNew();
}*/

static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceCost79A_917* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917 *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917 *)pWnd)->OnDeptAddNew();
}*/
static void _OnWithoutEmergencySelectFnc(CWnd *pWnd){
	 ((CFMInsuranceCost79A_917*)pWnd)->OnWithoutEmergencySelect();
}
static void _OnOnlyEmergencySelectFnc(CWnd *pWnd){
	 ((CFMInsuranceCost79A_917*)pWnd)->OnOnlyEmergencySelect();
}
static void _OnUnapprovedSelectFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917*)pWnd)->OnUnapprovedSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMInsuranceCost79A_917 *pVw = (CFMInsuranceCost79A_917 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsuranceCost79A_917 *pVw = (CFMInsuranceCost79A_917 *)pWnd;
	pVw->OnExportSelect();
}
static void _OnExportForInsSelectFnc(CWnd *pWnd){
	CFMInsuranceCost79A_917 *pVw = (CFMInsuranceCost79A_917 *)pWnd;
	pVw->OnExportForInsSelect();
}
//static long _OnListLoadDataFnc(CWnd *pWnd){
//	return ((CFMInsuranceCost79A_917*)pWnd)->OnListLoadData();
//} 
//static void _OnListDblClickFnc(CWnd *pWnd){
//	((CFMInsuranceCost79A_917*)pWnd)->OnListDblClick();
//} 
//static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
//	((CFMInsuranceCost79A_917*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
//} 
//static int _OnListDeleteItemFnc(CWnd *pWnd){
//	 return ((CFMInsuranceCost79A_917*)pWnd)->OnListDeleteItem();
//}
static long _OnCardListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917*)pWnd)->OnCardListLoadData();
} 
static void _OnCardListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917*)pWnd)->OnCardListDblClick();
} 
static void _OnCardListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceCost79A_917*)pWnd)->OnCardListSelectChange(nOldItem, nNewItem);
} 
static int _OnCardListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_917*)pWnd)->OnCardListDeleteItem();
} 

static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceCost79A_917*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_917*)pWnd)->OnDeptListDeleteItem();
}
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_917*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceCost79A_917*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_917*)pWnd)->OnRoomListDeleteItem();
}
static int _OnAddFMInsuranceCost79A_917Fnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_917*)pWnd)->OnAddFMInsuranceCost79A_917();
} 
static int _OnEditFMInsuranceCost79A_917Fnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_917*)pWnd)->OnEditFMInsuranceCost79A_917();
} 
static int _OnDeleteFMInsuranceCost79A_917Fnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_917*)pWnd)->OnDeleteFMInsuranceCost79A_917();
} 
static int _OnSaveFMInsuranceCost79A_917Fnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_917*)pWnd)->OnSaveFMInsuranceCost79A_917();
} 
static int _OnCancelFMInsuranceCost79A_917Fnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_917*)pWnd)->OnCancelFMInsuranceCost79A_917();
}
static int _OnRoomListCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917*)pWnd)->OnRoomListCheckAll();
}
static int _OnRoomListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917*)pWnd)->OnRoomListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917*)pWnd)->OnDeptListUnCheckAll();
}
static int _OnCardListCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917*)pWnd)->OnCardListCheckAll();
}
static int _OnCardListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_917*)pWnd)->OnCardListUnCheckAll();
}
CFMInsuranceCost79A_917::CFMInsuranceCost79A_917(CWnd *pParent)
{
	m_nDlgWidth = 450;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CFMInsuranceCost79A_917::~CFMInsuranceCost79A_917()
{
}
void CFMInsuranceCost79A_917::OnCreateComponents()
{
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 490, 545);
	m_wndInsCardInfo.Create(this, _T("Insurance Card Information"), 10, 120, 485, 225);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 230, 485, 340);
	m_wndExamRoomInfo.Create(this, _T("Exam Room"), 10, 345, 485, 450);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this, 95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 340, 55);
	m_wndReportPeriod.Create(this, 345, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this, 95, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 340, 85);
	m_wndToDate.Create(this, 345, 60, 485, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this, 95, 90, 245, 115); 
	m_wndNumberOfDocLabel.Create(this, _T("Number of Doc"), 250, 90, 340, 115);
	m_wndNumberOfDoc.Create(this, 345, 90, 485, 115); 
	m_wndWithoutEmergency.Create(this, _T("Without Emergency"), 10, 455, 245, 480);
	m_wndOnlyEmergency.Create(this, _T("Only Emergency"), 250, 455, 435, 480);
	m_wndOnlyCommander.Create(this, _T("Only General"), 10, 485, 125, 510);
	m_wndUnapproved.Create(this, _T("Unapproved"), 130, 485, 245, 510);
	m_wndOutpatientTreatment.Create(this, _T("Outpatient Treatment"), 250, 485, 435, 510);
	m_wndByDischargedDate.Create(this, _T("By Discharged Date"), 10, 515, 125, 540);
	m_wndSoldierPatient.Create(this, _T("Soldier Patient"), 130, 515, 245, 540);
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 145, 550, 245, 575);
	//m_wndExport.Create(this, _T("&Export"), 250, 550, 335, 575);
	m_wndExportForIns.Create(this, _T("Export for Ins"), 385, 550, 485, 575);
	m_wndCardList.Create(this, 15, 145, 480, 220); 
	m_wndDeptList.Create(this, 15, 255, 480, 335); 
	m_wndRoomList.Create(this, 15, 370, 480, 445); 
	m_wndFileNameLabel.Create(this, _T("File_Name"), 10, 550, 90, 575);
	m_wndFileName.Create(this, 95, 550, 345, 575); 
}
void CFMInsuranceCost79A_917::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

	//m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(65);

	//m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(254);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 270);

	/*m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);*/
	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);


	m_wndCardList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndCardList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 300);
	m_wndCardList.SetCheckBox(TRUE);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);

	m_wndRoomList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndRoomList.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);
	m_wndRoomList.InsertColumn(2, _T("Dept"), CFMT_TEXT, 80);
	m_wndRoomList.SetCheckBox(TRUE);

	m_wndFileName.InsertColumn(0, _T("ID"), CFMT_TEXT, 200);

}
void CFMInsuranceCost79A_917::OnSetWindowEvents()
{
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
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
	m_wndFileName.SetEvent(WE_SELENDOK, _OnFileNameSelendokFnc);
	//m_wndFileName.SetEvent(WE_SETFOCUS, _OnFileNameSetfocusFnc);
	//m_wndFileName.SetEvent(WE_KILLFOCUS, _OnFileNameKillfocusFnc);
	m_wndFileName.SetEvent(WE_SELCHANGE, _OnFileNameSelectChangeFnc);
	m_wndFileName.SetEvent(WE_LOADDATA, _OnFileNameLoadDataFnc);
	//m_wndFileName.SetEvent(WE_ADDNEW, _OnFileNameAddNewFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndWithoutEmergency.SetEvent(WE_CLICK, _OnWithoutEmergencySelectFnc);
	m_wndOnlyEmergency.SetEvent(WE_CLICK, _OnOnlyEmergencySelectFnc);
	m_wndUnapproved.SetEvent(WE_CLICK, _OnUnapprovedSelectFnc);

	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndExportForIns.SetEvent(WE_CLICK, _OnExportForInsSelectFnc);
	m_wndCardList.SetEvent(WE_SELCHANGE, _OnCardListSelectChangeFnc);
	m_wndCardList.SetEvent(WE_LOADDATA, _OnCardListLoadDataFnc);
	m_wndCardList.SetEvent(WE_DBLCLICK, _OnCardListDblClickFnc);
	m_wndCardList.SetWindowText(_T(""));
	m_wndCardList.AddEvent(1, _T("Check All"), _OnCardListCheckAllFnc);
	m_wndCardList.AddEvent(2, _T("UnCheck All"), _OnCardListUnCheckAllFnc);

	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);

	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);

	m_wndRoomList.SetWindowText(_T("Room List"));
	m_wndRoomList.AddEvent(1, _T("Check All"), _OnRoomListCheckAllFnc);
	m_wndRoomList.AddEvent(2, _T("UnCheck All"), _OnRoomListUnCheckAllFnc);

	m_wndDeptList.SetWindowText(_T("Dept List"));
	m_wndDeptList.AddEvent(1, _T("Check All"), _OnDeptListCheckAllFnc);
	m_wndDeptList.AddEvent(2, _T("UnCheck All"), _OnDeptListUnCheckAllFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnDeptListLoadData();
	OnRoomListLoadData();
	OnCardListLoadData();
}
void CFMInsuranceCost79A_917::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Text(pDX, m_wndNumberOfDoc.GetDlgCtrlID(), m_nNumberofDoc);
	//DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndWithoutEmergency.GetDlgCtrlID(), m_bWithoutEmergency);
	DDX_Check(pDX, m_wndOnlyEmergency.GetDlgCtrlID(), m_bOnlyEmergency);
	DDX_Check(pDX, m_wndUnapproved.GetDlgCtrlID(), m_bUnapproved);
	DDX_Check(pDX, m_wndOnlyCommander.GetDlgCtrlID(), m_bOnlyCommander);
	DDX_Check(pDX, m_wndOutpatientTreatment.GetDlgCtrlID(), m_bOutpatientTreament);
	DDX_Check(pDX, m_wndByDischargedDate.GetDlgCtrlID(), m_bByDischargedDate);
	DDX_Check(pDX, m_wndSoldierPatient.GetDlgCtrlID(), m_bSoldierPatient);
	DDX_TextEx(pDX, m_wndFileName.GetDlgCtrlID(), m_szFileNameKey);

}
void CFMInsuranceCost79A_917::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsuranceCost79A_917::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsuranceCost79A_917::SetDefaultValues()
{
	m_nYear = 0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_szDeptKey.Empty();
	m_bWithoutEmergency=FALSE;
	m_bOnlyEmergency=FALSE;
	m_bUnapproved=FALSE;
	m_bIsInsPurpose = FALSE;
	m_bByDischargedDate = FALSE;
	m_bShowDiff = FALSE;
	m_bSoldierPatient = FALSE;
	m_szFileNameKey.Empty();
}
int CFMInsuranceCost79A_917::SetMode(int nMode)
{
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
/*void CFMInsuranceCost79A_917::OnYearChange(){
	
} */
/*void CFMInsuranceCost79A_917::OnYearSetfocus(){
	
} */
/*void CFMInsuranceCost79A_917::OnYearKillfocus(){
	
} */
int CFMInsuranceCost79A_917::OnYearCheckValue()
{
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
void CFMInsuranceCost79A_917::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceCost79A_917::OnReportPeriodSelendok()
{
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
/*void CFMInsuranceCost79A_917::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsuranceCost79A_917::OnReportPeriodKillfocus(){
	
}*/
long CFMInsuranceCost79A_917::OnReportPeriodLoadData()
{
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
/*void CFMInsuranceCost79A_917::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsuranceCost79A_917::OnFromDateChange(){
	
} */
/*void CFMInsuranceCost79A_917::OnFromDateSetfocus(){
	
} */
/*void CFMInsuranceCost79A_917::OnFromDateKillfocus(){
	
} */
int CFMInsuranceCost79A_917::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMInsuranceCost79A_917::OnToDateChange(){
	
} */
/*void CFMInsuranceCost79A_917::OnToDateSetfocus(){
	
} */
/*void CFMInsuranceCost79A_917::OnToDateKillfocus(){
	
} */
int CFMInsuranceCost79A_917::OnToDateCheckValue(){
	return 0;
} 
void CFMInsuranceCost79A_917::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceCost79A_917::OnClerkSelendok(){
	 
}
/*void CFMInsuranceCost79A_917::OnClerkSetfocus(){
	
}*/
/*void CFMInsuranceCost79A_917::OnClerkKillfocus(){
	
}*/
long CFMInsuranceCost79A_917::OnClerkLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty())
	{
		szWhere.Format(_T(" and lower(su_userid)=lower('%s') "), m_szClerkKey);
	}
	m_wndClerk.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_groupid in('A','F') %s ORDER BY su_userid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		m_wndClerk.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMInsuranceCost79A_917::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CFMInsuranceCost79A_917::OnFileNameSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceCost79A_917::OnFileNameSelendok(){
	 
}
/*void CFMInsuranceCost79A_917::OnFileNameSetfocus(){
	
}*/
/*void CFMInsuranceCost79A_917::OnFileNameKillfocus(){
	
}*/
long CFMInsuranceCost79A_917::OnFileNameLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	m_wndFileName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT DISTINCT file_name AS id FROM bh_79 ORDER BY file_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		m_wndFileName.AddItems(
			rs.GetValue(_T("id")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMInsuranceCost79A_917::OnFileNameAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CFMInsuranceCost79A_917::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceCost79A_917::OnDeptSelendok()
{
	UpdateData(TRUE);
	OnRoomListLoadData();
}
/*void CFMInsuranceCost79A_917::OnDeptSetfocus(){
	
}*/
/*void CFMInsuranceCost79A_917::OnDeptKillfocus(){
	
}*/
long CFMInsuranceCost79A_917::OnDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
	  szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type='KB' %s ORDER BY id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMInsuranceCost79A_917::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceCost79A_917::OnWithoutEmergencySelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMInsuranceCost79A_917::OnOnlyEmergencySelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMInsuranceCost79A_917::OnUnapprovedSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_bUnapproved)
		m_wndClerk.EnableWindow(FALSE);
	else
		m_wndClerk.EnableWindow(TRUE);
}

void CFMInsuranceCost79A_917::OnCardListDblClick(){
	
} 
void CFMInsuranceCost79A_917::OnCardListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceCost79A_917::OnCardListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInsuranceCost79A_917::OnCardListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;

	m_wndCardList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" select hig_note as itemid, hig_name as itemname") \
				_T(" from hms_insurance_group") \
				_T(" order by hig_group, hig_idx"));

	nCount = rs.ExecSQL(szSQL);

	while (!rs.IsEOF())
	{ 
		m_wndCardList.AddItems(
			rs.GetValue(_T("itemid")), 
			rs.GetValue(_T("itemname")), NULL);
		rs.MoveNext();
	}

	m_wndCardList.EndLoad(); 
	return nCount;
}

void CFMInsuranceCost79A_917::OnDeptListDblClick(){
	
} 
void CFMInsuranceCost79A_917::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceCost79A_917::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInsuranceCost79A_917::OnDeptListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDeptList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as ID, sd_name as Name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE sd_type='KB' ") \
				 _T("ORDER BY id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad(); 
	return nCount;
}

void CFMInsuranceCost79A_917::OnRoomListDblClick(){
	
} 
void CFMInsuranceCost79A_917::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceCost79A_917::OnRoomListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInsuranceCost79A_917::OnRoomListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT hrl_id AS ID,") \
				_T("        hrl_name AS Name, ") \
				_T("        hrl_deptid AS DeptID") \
				_T(" FROM hms_roomlist") \
				_T(" LEFT JOIN sys_dept ON(sd_id=hrl_deptid)") \
				_T(" WHERE sd_type='KB'") \
				_T(" ORDER BY hrl_deptid, hrl_id"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("DeptID")), NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;
}

void CFMInsuranceCost79A_917::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	TCHAR *lszLine[] ={_T("a) \x42\x1EC7nh nh\xE2n \x111\xFAng tuy\x1EBFn."),
		               _T("b) \x42\x1EC7nh nh\xE2n tr\xE1i tuy\x1EBFn.")};
	
	szSQL = GetQueryString();

	//MessageBox(szSQL);

	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		if (nCount < 0)
			_msg(_T("%s"), szSQL);
		else
			_fmsg(_T("%s"), szSQL);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_GENERALEXAMINATIONCOST79AREPORT.RPT")))
		return;
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);

	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("ObjectGroup"), _T(""));
	rpt.GetReportHeader()->SetValue(_T("ReportPeriod"), m_szClerkKey);

	rs.GetValue(_T("invoiceno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);

	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	int nIndex = 1;

	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;
	CString szNewOfLine, szOldOfLine, szSumOfline;

	CReportSection* rptDetail;
	double grpCost[24], grpLine[24], ttlCost[24], grpOfLine[24];
	double cost = 0;

	for (int i = 0; i < 24; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
		grpOfLine[i] =0;
	}

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("insline"), szNewLine);

		if (szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			CString szField, szAmount;

			/*if (grpOfLine[20] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(9);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "), szAmount, szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				for (int i = 10; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}*/

			if (grpCost[9] > 0)
			{					
				TranslateString(_T("Total Group"), szAmount);

				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(11);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s)"), szAmount, szOldGroup);

				rptDetail->SetValue(_T("TotalGroup"), tmpStr);

				for (int i = 9; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					//_msg(_T("%s"), tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					//grpLine[i] = 0;
					grpCost[i] = 0;
				}
			}

			if (grpLine[9] > 0)
			{
				TranslateString(_T("Total Line"), szAmount);

				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s)"), szAmount, szLineName);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				for (int i = 9; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);		
					ttlCost[i] += grpLine[i];
					grpLine[i] = 0;
				}
			}

			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(11);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(false);
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));

			rs.GetValue(_T("linename"), szLineName);
			rptDetail->SetValue(_T("InsuranceLine"), szLineName + _T(". ") + pMF->GetSelectionString(_T("hms_insline"), szNewLine));
			szOldLine = szNewLine;
			szOldOfLine.Empty();
			szOldGroup.Empty();

			nIndex = 1;
		}

		rs.GetValue(_T("insgroup"), szNewGroup);

		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			CString szField, szAmount;
			/*if (grpOfLine[8] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(9);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =10; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}*/
			if (grpCost[9] > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));

				tmpStr.Format(_T("%s (%s)"), szAmount, szOldGroup);

				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				for (int i = 9; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);				
					grpCost[i] = 0;
				}
			}
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(10);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InsuranceLine"), szNewGroup + _T(". ") + pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			szOldGroup = szNewGroup;
			szOldOfLine.Empty();
			nIndex = 1;
		}

		/*rs.GetValue(_T("hdline"), szNewOfLine);

		if(szNewOfLine != szOldOfLine && !szNewOfLine.IsEmpty())
		{
			CString szField, szAmount;
			if (grpOfLine[9] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(9);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i = 9; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}
			
			if (szNewOfLine == _T("0") )
			{
				tmpStr.Format(_T("%s"), lszLine[0]);
				szSumOfline = _T("a");
			}
			else
			{
				tmpStr.Format(_T("%s"), lszLine[1]);
				szSumOfline = _T("b");
			}
			
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(9);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InsuranceLine"),tmpStr);
			szOldOfLine = szNewOfLine;			
			nIndex = 1;
		}*/

		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("mbirthyear"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("fbirthyear"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		/*rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);*/

		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("regplace"), tmpStr);
		tmpStr.Insert(2, _T("-"));
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("icd10"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("examdate"), tmpStr);
		//tmpStr = CDate::Convert(rs.GetValue(_T("examdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("8"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		/*rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);*/

		rs.GetValue(_T("cost"), cost);
		grpCost[9] += cost;
		grpLine[9] += cost;
		//grpOfLine[9] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		
		rs.GetValue(_T("testfee"), cost);
		grpCost[10] += cost;
		grpLine[10] += cost;
		//grpOfLine[10] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[11] += cost;
		grpLine[11] += cost;
		//grpOfLine[11] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("drugfee"), cost);
		grpCost[12] += cost;
		grpLine[12] += cost;
		//grpOfLine[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[13] += cost;
		grpLine[13] += cost;
		//grpOfLine[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);				

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[14] += cost;
		grpLine[14] += cost;
		//grpOfLine[14] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);
		
		rs.GetValue(_T("materialfee"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		//grpOfLine[15] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		//grpOfLine[17] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);		

		rs.GetValue(_T("drugfeek"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		//grpOfLine[18] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);
		
		rs.GetValue(_T("examfee"), cost);
		grpCost[19] += cost;
		grpLine[19] += cost;
		//grpOfLine[19] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);

		/*rs.GetValue(_T("otherfee"), cost);;
		grpCost[19] += cost;
		grpLine[19] += cost;
		grpOfLine[19] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);*/		
		

		rs.GetValue(_T("patpaid"), cost);
		grpCost[21] += cost;
		grpLine[21] += cost;
		//grpOfLine[21] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);

		rs.GetValue(_T("inspaid"), cost);
		grpCost[22] += cost;
		grpLine[22] += cost;
		//grpOfLine[22] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("22"), tmpStr);
		
		rs.MoveNext();
	}

	for (int i = 9; i < 24; i++)
	{
		ttlCost[i] += grpLine[i];
	}
	
	/*if (grpOfLine[20] > 0)
	{
		CString szField,szAmount;
		TranslateString(_T("\x43\x1ED9ng"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(9);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"),szAmount , szSumOfline);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );
		for (int i =10; i < 24; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpLine[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}	
	}*/

	if (grpCost[9] > 0)
	{
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"), szAmount, szOldGroup);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		for (int i = 9; i < 24; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	}

	if (grpLine[9] > 0)
	{		
		CString szField, szAmount;
		TranslateString(_T("Total Line"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(11);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"), szAmount, szLineName);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		for (int i = 9; i < 24; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}

	if (ttlCost[9] > 0)
	{
		CString szField, szAmount;

		TranslateString(_T("Total Amount:"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(12);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		for (int i = 9; i < 24; i++)
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
	EndWaitCursor();	
	rpt.PrintPreview();
	
} 
void CFMInsuranceCost79A_917::OnExportSelect()
{	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	menu.CreatePopupMenu();
	m_wndExportForIns.GetWindowRect(&rect);
	TranslateString(_T("Ngoại trú Phòng Khám xuất cổng BH"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Ngoại trú trong khoa xuất cổng BH"), tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	TranslateString(_T("Ngoại trú theo File_Name"), tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	TranslateString(_T("Ngoại trú trong khoa theo File_Name"), tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExportForInsNew2Select();
		break;
	case 2:
		OnExportForInsNewOutPatient2Select();
		break;
	case 3:
		OnExportForInsNewSelect();
		break;
	case 4:
		OnExportForInsNewOutPatientSelect();
		break;
	}	/*	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szYear, szMonth, szDate;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1, nTemp = 0;	CDate dt1, dt2;
	dt1.ParseDate(m_szFromDate);
	dt2.ParseDate(m_szToDate);
	if (dt1.GetYear() == dt2.GetYear()) szYear.Format(_T("%d"), dt1.GetYear());
	else szYear.Format(_T("%d"), dt2.GetYear());

	if (dt1.GetMonth() == dt2.GetMonth()) szMonth.Format(_T("%d"), dt1.GetMonth());
	else szMonth.Format(_T("%d"), dt2.GetMonth());	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 10);	xls.SetColumnWidth(2, 25);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 50);	xls.SetColumnWidth(6, 16);	xls.SetColumnWidth(7, 6);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 14);	xls.SetColumnWidth(12, 8);	xls.SetColumnWidth(13, 8);	xls.SetColumnWidth(14, 12);	xls.SetColumnWidth(15, 12);	xls.SetColumnWidth(16, 6);	xls.SetColumnWidth(17, 6);	xls.SetColumnWidth(18, 6);	xls.SetColumnWidth(19, 10);	xls.SetColumnWidth(20, 10);	xls.SetColumnWidth(21, 10);	xls.SetColumnWidth(22, 10);	xls.SetColumnWidth(23, 10);	xls.SetColumnWidth(24, 10);	xls.SetColumnWidth(25, 10);	xls.SetColumnWidth(26, 10);	xls.SetColumnWidth(27, 10);	xls.SetColumnWidth(28, 10);	xls.SetColumnWidth(29, 10);	xls.SetColumnWidth(30, 10);	xls.SetColumnWidth(31, 10);	xls.SetColumnWidth(32, 10);	xls.SetColumnWidth(33, 10);	xls.SetColumnWidth(34, 6);	xls.SetColumnWidth(35, 6);	xls.SetColumnWidth(36, 6);	xls.SetColumnWidth(37, 6);	xls.SetColumnWidth(38, 6);	xls.SetColumnWidth(39, 6);	xls.SetColumnWidth(40, 6);	xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 0, _T("MA_BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 0, _T("HO_TEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 0, _T("NGAY_SINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 0, _T("GIOI_TINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 0, _T("DIA_CHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 0, _T("MA_THE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 0, _T("MA_DKBD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 0, _T("GT_THE_TU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 0, _T("GT_THE_DEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(10, 0, _T("MA_BENH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(11, 0, _T("MA_BENHKHAC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(12, 0, _T("MA_LYDO_VVIEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(13, 0, _T("MA_NOI_CHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(14, 0, _T("NGAY_VAO"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 0, _T("NGAY_RA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(16, 0, _T("SO_NGAY_DTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 0, _T("KET_QUA_dTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(18, 0, _T("TINH_TRANG_RV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(19, 0, _T("T_TONGCHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(20, 0, _T("T_XN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(21, 0, _T("T_CDHA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(22, 0, _T("T_THUOC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(23, 0, _T("T_MAU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(24, 0, _T("T_PTTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(25, 0, _T("T_VTYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(26, 0, _T("T_DVKT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(27, 0, _T("T_THUOC_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(28, 0, _T("T_VTYT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(29, 0, _T("T_KHAM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(30, 0, _T("T_GIUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(31, 0, _T("T_VCHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(32, 0, _T("T_BNTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(33, 0, _T("T_BHTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(34, 0, _T("T_NGOAIDS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(35, 0, _T("MA_KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(36, 0, _T("NAM_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(37, 0, _T("THANG_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(38, 0, _T("MA_KHUVUC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(39, 0, _T("MA_LOAIKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(40, 0, _T("MA_CSKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 1;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("sex"), tmpStr);
		if (tmpStr == _T("F"))
		{
			rs.GetValue(_T("fbirthyear"), tmpStr);
			xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);

			xls.SetCellText(nCol + 4, nRow, _T("2"), FMT_INTEGER);
		}
		else
		{
			rs.GetValue(_T("mbirthyear"), tmpStr);
			xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);

			xls.SetCellText(nCol + 4, nRow, _T("1"), FMT_INTEGER);
		}		rs.GetValue(_T("address"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("cardno"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("regplace"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("regdate"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("expdate"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hd_icd"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("reldisease"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("emergency"), tmpStr);
		if (tmpStr == _T("Y"))
			nTemp = 2;
		else
		{
			rs.GetValue(_T("hdline"), tmpStr);
			if (tmpStr == _T("1"))
			{
				nTemp = 3;
			}
			else
			{
				nTemp = 1;
			}
		}		xls.SetCellText(nCol+12, nRow, int2str(nTemp), FMT_TEXT); 		rs.GetValue(_T("ma_noi_chuyen"), tmpStr);
 		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("examdate"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("enddate"), tmpStr);
		if (!tmpStr.IsEmpty())
			xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("totaltreat"), tmpStr);
		if (!tmpStr.IsEmpty())
			xls.SetCellText(nCol+16, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ket_qua_dtri"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("tinh_trang_rv"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("cost"), tmpStr);		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("testfee"), tmpStr);		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("pacsfee"), tmpStr);		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("drugfee"), tmpStr);		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("bloodfee"), tmpStr);		xls.SetCellText(nCol+23, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("normtechfee"), tmpStr);		xls.SetCellText(nCol+24, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("materialfee"), tmpStr);		xls.SetCellText(nCol+25, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("hitechfee"), tmpStr);		xls.SetCellText(nCol+26, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("drugfeek"), tmpStr);		xls.SetCellText(nCol+27, nRow, tmpStr, FMT_NUMBER1);		//t_thuoctt// 		rs.GetValue(_T(""), tmpStr);
// 		xls.SetCellText(nCol+28, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("examfee"), tmpStr);		xls.SetCellText(nCol+29, nRow, tmpStr, FMT_NUMBER1);		//t_giuong// 		rs.GetValue(_T(""), tmpStr);
// 		xls.SetCellText(nCol+30, nRow, tmpStr, FMT_TEXT);

		//t_vchuyen
// 		rs.GetValue(_T(""), tmpStr);
// 		xls.SetCellText(nCol+31, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("patpaid"), tmpStr);		xls.SetCellText(nCol+32, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("inspaid"), tmpStr);		xls.SetCellText(nCol+33, nRow, tmpStr, FMT_NUMBER1);		//t_ngoaids// 		rs.GetValue(_T(""), tmpStr);
// 		xls.SetCellText(nCol+34, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("deptid"), tmpStr);		xls.SetCellText(nCol+35, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("nam_qt"), tmpStr);
		xls.SetCellText(nCol+36, nRow, szYear, FMT_INTEGER);		rs.GetValue(_T("thang_qt"), tmpStr);		xls.SetCellText(nCol+37, nRow, szMonth, FMT_INTEGER);		rs.GetValue(_T("ma_khuvuc"), tmpStr);
		xls.SetCellText(nCol+38, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ma_loaikcb"), tmpStr);
		xls.SetCellText(nCol+39, nRow, tmpStr, FMT_INTEGER);		tmpStr.Format(_T("%s"), pMF->m_CompanyInfo.sc_id);		xls.SetCellText(nCol+40, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\ChiphikhamchuabenhBHYT79_917.xls"));

	*/
}

void CFMInsuranceCost79A_917::OnExportForInsSelect(){
	m_bIsInsPurpose = true;
	OnExportSelect();
	m_bIsInsPurpose = false;

}

void CFMInsuranceCost79A_917::OnExportForInsNewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szYear, szMonth, szDate;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1, nTemp = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 10);	xls.SetColumnWidth(2, 25);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 50);	xls.SetColumnWidth(6, 16);	xls.SetColumnWidth(7, 6);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 14);	xls.SetColumnWidth(12, 8);	xls.SetColumnWidth(13, 8);	xls.SetColumnWidth(14, 12);	xls.SetColumnWidth(15, 12);	xls.SetColumnWidth(16, 6);	xls.SetColumnWidth(17, 6);	xls.SetColumnWidth(18, 6);	xls.SetColumnWidth(19, 10);	xls.SetColumnWidth(20, 10);	xls.SetColumnWidth(21, 10);	xls.SetColumnWidth(22, 10);	xls.SetColumnWidth(23, 10);	xls.SetColumnWidth(24, 10);	xls.SetColumnWidth(25, 10);	xls.SetColumnWidth(26, 10);	xls.SetColumnWidth(27, 10);	xls.SetColumnWidth(28, 10);	xls.SetColumnWidth(29, 10);	xls.SetColumnWidth(30, 10);	xls.SetColumnWidth(31, 10);	xls.SetColumnWidth(32, 10);	xls.SetColumnWidth(33, 10);	xls.SetColumnWidth(34, 6);	xls.SetColumnWidth(35, 6);	xls.SetColumnWidth(36, 6);	xls.SetColumnWidth(37, 6);	xls.SetColumnWidth(38, 6);	xls.SetColumnWidth(39, 6);	xls.SetColumnWidth(40, 6);	xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 0, _T("MA_BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 0, _T("HO_TEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 0, _T("NGAY_SINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 0, _T("GIOI_TINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 0, _T("DIA_CHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 0, _T("MA_THE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 0, _T("MA_DKBD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 0, _T("GT_THE_TU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 0, _T("GT_THE_DEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(10, 0, _T("MA_BENH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(11, 0, _T("MA_BENHKHAC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(12, 0, _T("MA_LYDO_VVIEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(13, 0, _T("MA_NOI_CHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(14, 0, _T("NGAY_VAO"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 0, _T("NGAY_RA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(16, 0, _T("SO_NGAY_DTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 0, _T("KET_QUA_dTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(18, 0, _T("TINH_TRANG_RV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(19, 0, _T("T_TONGCHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(20, 0, _T("T_XN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(21, 0, _T("T_CDHA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(22, 0, _T("T_THUOC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(23, 0, _T("T_MAU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(24, 0, _T("T_PTTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(25, 0, _T("T_VTYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(26, 0, _T("T_DVKT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(27, 0, _T("T_THUOC_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(28, 0, _T("T_VTYT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(29, 0, _T("T_KHAM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(30, 0, _T("T_GIUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(31, 0, _T("T_VCHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(32, 0, _T("T_BNTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(33, 0, _T("T_BHTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(34, 0, _T("T_NGOAIDS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(35, 0, _T("MA_KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(36, 0, _T("NAM_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(37, 0, _T("THANG_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(38, 0, _T("MA_KHUVUC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(39, 0, _T("MA_LOAIKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(40, 0, _T("MA_CSKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	if(!m_szFileNameKey.IsEmpty())		szWhere.Format(_T(" AND file_name = '%s'"), m_szFileNameKey);	szSQL.Format(_T(" SELECT") \
		_T(" sophieu AS ma_bn,") \
		_T(" hoten AS ho_ten,") \
		_T(" namsinh AS ngay_sinh,") \
		_T(" gioitinh AS gioi_tinh,") \
		_T(" diachi AS dia_chi,") \
		_T(" mathe AS ma_the,") \
		_T(" ma_dkbd AS ma_dkbd,") \
		_T(" TRIM(SUBSTR(gt_tu, 7, 4) || SUBSTR(gt_tu, 1, 2) || SUBSTR(gt_tu, 4, 2)) AS gt_the_tu,") \
		_T(" TRIM(SUBSTR(gt_den, 7, 4) || SUBSTR(gt_den, 1, 2) || SUBSTR(gt_den, 4, 2)) AS gt_the_den,") \
		_T(" maicd10 AS ma_benh,") \
		_T(" '' AS ma_benhkhac,") \
		_T(" lydo_vv AS ma_lydo_vvien,") \
		_T(" (SELECT hd_transplaceid FROM hms_doc WHERE hd_docno = sophieu) AS ma_noi_chuyen,") \
		_T(" TRIM(SUBSTR(ngay_vao, 7, 4) || SUBSTR(ngay_vao, 4, 2) || SUBSTR(ngay_vao, 1, 2) || '0000') AS ngay_vao,") \
		_T(" TRIM(SUBSTR(ngay_ra, 7, 4) || SUBSTR(ngay_ra, 4, 2) || SUBSTR(ngay_ra, 1, 2) || '0000') AS ngay_ra,") \
		_T(" 0 AS so_ngay_dtri,") \
		_T(" '' AS ket_qua_dtri, ") \
		_T(" (SELECT") \
		_T(" CASE") \
		_T(" WHEN hd_suggestion='F'") \
		_T(" THEN 2") \
		_T(" WHEN hd_suggestion='T'") \
		_T(" AND hcr_result     ='8'") \
		_T(" THEN 3") \
		_T(" WHEN hd_suggestion='T'") \
		_T(" AND hcr_result     ='7'") \
		_T(" THEN 4") \
		_T(" ELSE 1") \
		_T(" END AS abc") \
		_T(" FROM") \
		_T(" hms_doc") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON(hcr_docno = hd_docno)") \
		_T(" WHERE hd_docno = sophieu") \
		_T(" AND ROWNUM = 1") \
		_T(" )") \
		_T(" AS tinh_trang_rv,") \
		_T(" t_tongchi AS t_tongchi,") \
		_T(" t_xn AS t_xn,") \
		_T(" t_cdha AS t_cdha,") \
		_T(" t_thuoc AS t_thuoc,") \
		_T(" t_mau AS t_mau,") \
		_T(" t_pttt AS t_pttt,") \
		_T(" t_vtytth AS t_vtth,") \
		_T(" t_dvktc AS t_dvkt_tyle,") \
		_T(" t_ktg AS t_thuoc_tyle,") \
		_T(" t_vtyttt AS t_vtyt_tyle,") \
		_T(" t_kham AS t_kham,") \
		_T(" 0 AS t_giuong,") \
		_T(" NVL(t_vchuyen, 0) AS t_vchuyen,") \
		_T(" t_bnct AS t_bntt,	") \
		_T(" t_bhtt AS t_bhtt,	") \
		_T(" NVL(t_ngoaids, 0) AS t_ngoaids,") \
		_T(" (SELECT sd_insuranceid FROM sys_dept WHERE sd_id = UPPER(khoa)) AS ma_khoa,") \
		_T(" nam_qt AS nam_qt,") \
		_T(" thang_qt AS thang_qt,") \
		_T(" (SELECT CASE WHEN hc_area='KV1' THEN 'K1' WHEN hc_area='KV2' THEN 'K2' WHEN hc_area='KV3' THEN 'K3' ELSE ' ' END AS abc FROM hms_doc ") \
		_T(" LEFT JOIN hms_card ON(hc_patientno = hd_patientno) WHERE hd_docno = sophieu AND rownum = 1) AS ma_khuvuc,") \
		_T(" (SELECT CASE WHEN hd_suggestion='D' THEN 3 WHEN hd_suggestion='C' THEN 2 ELSE 1 END AS abc FROM hms_doc WHERE hd_docno = sophieu) AS ma_loaikcb, ") \
		_T(" noikcb AS ma_cskcb") \
		_T(" FROM bh_79") \
		_T(" WHERE 1 = 1 %s") \
		_T(" ORDER BY ngay_tt, sophieu"), szWhere);	rs.ExecSQL(szSQL);	nRow = 1;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("ma_bn"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ho_ten"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ngay_sinh"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("gioi_tinh"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("dia_chi"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_the"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_dkbd"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("gt_the_tu"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("gt_the_den"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_benh"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_benhkhac"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_lydo_vvien"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_noi_chuyen"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ngay_vao"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ngay_ra"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("so_ngay_dtri"), tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ket_qua_dtri"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("tinh_trang_rv"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_tongchi"), tmpStr);		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_xn"), tmpStr);		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_cdha"), tmpStr);		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_thuoc"), tmpStr);		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_mau"), tmpStr);		xls.SetCellText(nCol+23, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_pttt"), tmpStr);		xls.SetCellText(nCol+24, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_vtth"), tmpStr);		xls.SetCellText(nCol+25, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_dvkt_tyle"), tmpStr);		xls.SetCellText(nCol+26, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_thuoc_tyle"), tmpStr);		xls.SetCellText(nCol+27, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_vtyt_tyle"), tmpStr);
		xls.SetCellText(nCol+28, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_kham"), tmpStr);		xls.SetCellText(nCol+29, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_giuong"), tmpStr);
		xls.SetCellText(nCol+30, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_vchuyen"), tmpStr);
		xls.SetCellText(nCol+31, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_bntt"), tmpStr);		xls.SetCellText(nCol+32, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_bhtt"), tmpStr);		xls.SetCellText(nCol+33, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_ngoaids"), tmpStr);		xls.SetCellText(nCol+34, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("ma_khoa"), tmpStr);		xls.SetCellText(nCol+35, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("nam_qt"), tmpStr);
		xls.SetCellText(nCol+36, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("thang_qt"), tmpStr);		xls.SetCellText(nCol+37, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ma_khuvuc"), tmpStr);
		xls.SetCellText(nCol+38, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ma_loaikcb"), tmpStr);
		xls.SetCellText(nCol+39, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ma_cskcb"), tmpStr);		xls.SetCellText(nCol+40, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	tmpStr.Format(_T("Exports\\%s.xls"), m_szFileNameKey);	xls.Save(tmpStr);
}


void CFMInsuranceCost79A_917::OnExportForInsNewOutPatientSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szYear, szMonth, szDate;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1, nTemp = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 10);	xls.SetColumnWidth(2, 25);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 50);	xls.SetColumnWidth(6, 16);	xls.SetColumnWidth(7, 6);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 14);	xls.SetColumnWidth(12, 8);	xls.SetColumnWidth(13, 8);	xls.SetColumnWidth(14, 12);	xls.SetColumnWidth(15, 12);	xls.SetColumnWidth(16, 6);	xls.SetColumnWidth(17, 6);	xls.SetColumnWidth(18, 6);	xls.SetColumnWidth(19, 10);	xls.SetColumnWidth(20, 10);	xls.SetColumnWidth(21, 10);	xls.SetColumnWidth(22, 10);	xls.SetColumnWidth(23, 10);	xls.SetColumnWidth(24, 10);	xls.SetColumnWidth(25, 10);	xls.SetColumnWidth(26, 10);	xls.SetColumnWidth(27, 10);	xls.SetColumnWidth(28, 10);	xls.SetColumnWidth(29, 10);	xls.SetColumnWidth(30, 10);	xls.SetColumnWidth(31, 10);	xls.SetColumnWidth(32, 10);	xls.SetColumnWidth(33, 10);	xls.SetColumnWidth(34, 6);	xls.SetColumnWidth(35, 6);	xls.SetColumnWidth(36, 6);	xls.SetColumnWidth(37, 6);	xls.SetColumnWidth(38, 6);	xls.SetColumnWidth(39, 6);	xls.SetColumnWidth(40, 6);	xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 0, _T("MA_BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 0, _T("HO_TEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 0, _T("NGAY_SINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 0, _T("GIOI_TINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 0, _T("DIA_CHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 0, _T("MA_THE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 0, _T("MA_DKBD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 0, _T("GT_THE_TU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 0, _T("GT_THE_DEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(10, 0, _T("MA_BENH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(11, 0, _T("MA_BENHKHAC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(12, 0, _T("MA_LYDO_VVIEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(13, 0, _T("MA_NOI_CHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(14, 0, _T("NGAY_VAO"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 0, _T("NGAY_RA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(16, 0, _T("SO_NGAY_DTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 0, _T("KET_QUA_dTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(18, 0, _T("TINH_TRANG_RV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(19, 0, _T("T_TONGCHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(20, 0, _T("T_XN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(21, 0, _T("T_CDHA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(22, 0, _T("T_THUOC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(23, 0, _T("T_MAU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(24, 0, _T("T_PTTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(25, 0, _T("T_VTYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(26, 0, _T("T_DVKT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(27, 0, _T("T_THUOC_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(28, 0, _T("T_VTYT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(29, 0, _T("T_KHAM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(30, 0, _T("T_GIUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(31, 0, _T("T_VCHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(32, 0, _T("T_BNTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(33, 0, _T("T_BHTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(34, 0, _T("T_NGOAIDS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(35, 0, _T("MA_KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(36, 0, _T("NAM_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(37, 0, _T("THANG_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(38, 0, _T("MA_KHUVUC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(39, 0, _T("MA_LOAIKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(40, 0, _T("MA_CSKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	if(!m_szFileNameKey.IsEmpty())		szWhere.Format(_T(" AND file_name = '%s'"), m_szFileNameKey);	szSQL.Format(_T(" SELECT") \
		_T(" sophieu AS ma_bn,") \
		_T(" hoten AS ho_ten,") \
		_T(" namsinh AS ngay_sinh,") \
		_T(" gioitinh AS gioi_tinh,") \
		_T(" diachi AS dia_chi,") \
		_T(" mathe AS ma_the,") \
		_T(" ma_dkbd AS ma_dkbd,") \
		_T(" TRIM(SUBSTR(gt_tu, 7, 4) || SUBSTR(gt_tu, 1, 2) || SUBSTR(gt_tu, 4, 2)) AS gt_the_tu,") \
		_T(" TRIM(SUBSTR(gt_den, 7, 4) || SUBSTR(gt_den, 1, 2) || SUBSTR(gt_den, 4, 2)) AS gt_the_den,") \
		_T(" maicd10 AS ma_benh,") \
		_T(" '' AS ma_benhkhac,") \
		_T(" SUBSTR(lydo_vv, 1, 1) AS ma_lydo_vvien,") \
		_T(" (SELECT hd_transplaceid FROM hms_doc WHERE hd_docno = sophieu) AS ma_noi_chuyen,") \
		_T(" TRIM(SUBSTR(ngay_vao, 7, 4) || SUBSTR(ngay_vao, 4, 2) || SUBSTR(ngay_vao, 1, 2) || '0000') AS ngay_vao,") \
		_T(" TRIM(SUBSTR(ngay_ra, 7, 4) || SUBSTR(ngay_ra, 4, 2) || SUBSTR(ngay_ra, 1, 2) || '0000') AS ngay_ra,") \
		_T(" 0 AS so_ngay_dtri,") \
		_T(" (SELECT") \
		_T(" CASE WHEN hcr_result='1' THEN 1 WHEN hcr_result='2' THEN 2 WHEN hcr_result='4' THEN 4 ") \
		_T(" WHEN hcr_result IN ('5','6') THEN 5 ELSE 3 END AS abc") \
		_T(" FROM hms_clinical_record") \
		_T(" WHERE hcr_docno = sophieu") \
		_T(" AND ROWNUM = 1") \
		_T(" )") \
		_T(" AS ket_qua_dtri, ") \
		_T(" (SELECT") \
		_T(" CASE WHEN hcr_suggestion='F' THEN 2 WHEN hcr_suggestion='T' AND hcr_result ='8' THEN 3 ") \
		_T(" WHEN hcr_suggestion='T' AND hcr_result ='7' THEN 4 ELSE 1 END AS abc") \
		_T(" FROM") \
		_T(" hms_clinical_record") \
		_T(" WHERE hcr_docno = sophieu") \
		_T(" AND ROWNUM = 1") \
		_T(" )") \
		_T(" AS tinh_trang_rv,") \
		_T(" t_tongchi AS t_tongchi,") \
		_T(" t_xn AS t_xn,") \
		_T(" t_cdha AS t_cdha,") \
		_T(" t_thuoc AS t_thuoc,") \
		_T(" t_mau AS t_mau,") \
		_T(" t_pttt AS t_pttt,") \
		_T(" t_vtytth AS t_vtth,") \
		_T(" t_dvktc AS t_dvkt_tyle,") \
		_T(" t_ktg AS t_thuoc_tyle,") \
		_T(" t_vtyttt AS t_vtyt_tyle,") \
		_T(" t_giuong AS t_kham,") \
		_T(" 0 AS t_giuong,") \
		_T(" NVL(t_vchuyen, 0) AS t_vchuyen,") \
		_T(" t_bnct AS t_bntt,	") \
		_T(" t_bhtt AS t_bhtt,	") \
		_T(" NVL(t_ngoaids, 0) AS t_ngoaids,") \
		_T(" (SELECT sd_insuranceid FROM sys_dept WHERE sd_id = UPPER(khoa)) AS ma_khoa,") \
		_T(" nam_qt AS nam_qt,") \
		_T(" thang_qt AS thang_qt,") \
		_T(" (SELECT CASE WHEN hc_area='KV1' THEN 'K1' WHEN hc_area='KV2' THEN 'K2' WHEN hc_area='KV3' THEN 'K3' ELSE ' ' END AS abc FROM hms_doc ") \
		_T(" LEFT JOIN hms_card ON(hc_patientno = hd_patientno) WHERE hd_docno = sophieu AND rownum = 1) AS ma_khuvuc,") \
		_T(" (SELECT CASE WHEN hd_suggestion='D' THEN 3 WHEN hd_suggestion='C' THEN 2 ELSE 1 END AS abc FROM hms_doc WHERE hd_docno = sophieu) AS ma_loaikcb, ") \
		_T(" noikcb AS ma_cskcb") \
		_T(" FROM bh_79") \
		_T(" WHERE 1 = 1 %s") \
		_T(" ORDER BY ngay_tt, sophieu"), szWhere);	rs.ExecSQL(szSQL);	nRow = 1;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("ma_bn"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ho_ten"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ngay_sinh"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("gioi_tinh"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("dia_chi"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_the"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_dkbd"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("gt_the_tu"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("gt_the_den"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_benh"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_benhkhac"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_lydo_vvien"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_noi_chuyen"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ngay_vao"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ngay_ra"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("so_ngay_dtri"), tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ket_qua_dtri"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("tinh_trang_rv"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_tongchi"), tmpStr);		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_xn"), tmpStr);		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_cdha"), tmpStr);		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_thuoc"), tmpStr);		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_mau"), tmpStr);		xls.SetCellText(nCol+23, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_pttt"), tmpStr);		xls.SetCellText(nCol+24, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_vtth"), tmpStr);		xls.SetCellText(nCol+25, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_dvkt_tyle"), tmpStr);		xls.SetCellText(nCol+26, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_thuoc_tyle"), tmpStr);		xls.SetCellText(nCol+27, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_vtyt_tyle"), tmpStr);
		xls.SetCellText(nCol+28, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_kham"), tmpStr);		xls.SetCellText(nCol+29, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_giuong"), tmpStr);
		xls.SetCellText(nCol+30, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_vchuyen"), tmpStr);
		xls.SetCellText(nCol+31, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_bntt"), tmpStr);		xls.SetCellText(nCol+32, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_bhtt"), tmpStr);		xls.SetCellText(nCol+33, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_ngoaids"), tmpStr);		xls.SetCellText(nCol+34, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("ma_khoa"), tmpStr);		xls.SetCellText(nCol+35, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("nam_qt"), tmpStr);
		xls.SetCellText(nCol+36, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("thang_qt"), tmpStr);		xls.SetCellText(nCol+37, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ma_khuvuc"), tmpStr);
		xls.SetCellText(nCol+38, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ma_loaikcb"), tmpStr);
		xls.SetCellText(nCol+39, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ma_cskcb"), tmpStr);		xls.SetCellText(nCol+40, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	tmpStr.Format(_T("Exports\\%s.xls"), m_szFileNameKey);	xls.Save(tmpStr);
}


void CFMInsuranceCost79A_917::OnExportForInsNew2Select(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szYear, szMonth, szDate;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1, nTemp = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 10);	xls.SetColumnWidth(2, 25);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 50);	xls.SetColumnWidth(6, 16);	xls.SetColumnWidth(7, 6);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 14);	xls.SetColumnWidth(12, 8);	xls.SetColumnWidth(13, 8);	xls.SetColumnWidth(14, 12);	xls.SetColumnWidth(15, 12);	xls.SetColumnWidth(16, 6);	xls.SetColumnWidth(17, 6);	xls.SetColumnWidth(18, 6);	xls.SetColumnWidth(19, 10);	xls.SetColumnWidth(20, 10);	xls.SetColumnWidth(21, 10);	xls.SetColumnWidth(22, 10);	xls.SetColumnWidth(23, 10);	xls.SetColumnWidth(24, 10);	xls.SetColumnWidth(25, 10);	xls.SetColumnWidth(26, 10);	xls.SetColumnWidth(27, 10);	xls.SetColumnWidth(28, 10);	xls.SetColumnWidth(29, 10);	xls.SetColumnWidth(30, 10);	xls.SetColumnWidth(31, 10);	xls.SetColumnWidth(32, 10);	xls.SetColumnWidth(33, 10);	xls.SetColumnWidth(34, 6);	xls.SetColumnWidth(35, 6);	xls.SetColumnWidth(36, 6);	xls.SetColumnWidth(37, 6);	xls.SetColumnWidth(38, 6);	xls.SetColumnWidth(39, 6);	xls.SetColumnWidth(40, 6);	xls.SetColumnWidth(41, 6);	xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 0, _T("MA_BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 0, _T("HO_TEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 0, _T("NGAY_SINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 0, _T("GIOI_TINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 0, _T("DIA_CHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 0, _T("MA_THE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 0, _T("MA_DKBD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 0, _T("GT_THE_TU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 0, _T("GT_THE_DEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(10, 0, _T("MA_BENH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(11, 0, _T("MA_BENHKHAC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(12, 0, _T("MA_LYDO_VVIEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(13, 0, _T("MA_NOI_CHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(14, 0, _T("NGAY_VAO"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 0, _T("NGAY_RA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(16, 0, _T("SO_NGAY_DTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 0, _T("KET_QUA_dTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(18, 0, _T("TINH_TRANG_RV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(19, 0, _T("T_TONGCHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(20, 0, _T("T_XN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(21, 0, _T("T_CDHA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(22, 0, _T("T_THUOC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(23, 0, _T("T_MAU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(24, 0, _T("T_PTTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(25, 0, _T("T_VTYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(26, 0, _T("T_DVKT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(27, 0, _T("T_THUOC_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(28, 0, _T("T_VTYT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(29, 0, _T("T_KHAM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(30, 0, _T("T_GIUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(31, 0, _T("T_VCHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(32, 0, _T("T_BNTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(33, 0, _T("T_BHTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(34, 0, _T("T_NGOAIDS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(35, 0, _T("MA_KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(36, 0, _T("NAM_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(37, 0, _T("THANG_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(38, 0, _T("MA_KHUVUC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(39, 0, _T("MA_LOAIKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(40, 0, _T("MA_CSKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(41, 0, _T("NGAY_TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 15);	szSQL.Format(_T(" SELECT hd_docno AS ma_bn,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                 AS ho_ten,") \
		_T("   extract(YEAR FROM hp_birthdate) AS ngay_sinh,") \
		_T("   CASE") \
		_T("     WHEN hp_sex = 'F'") \
		_T("     THEN 1") \
		_T("     ELSE 2") \
		_T("   END                                             AS gioi_tinh,") \
		_T("   hms_getaddress(hp_provid, hp_distid, hp_villid) AS dia_chi,") \
		_T("   CASE") \
		_T("     WHEN LENGTH(hc_cardno) > 15") \
		_T("     THEN SUBSTR(hc_cardno,1,15)") \
		_T("     ELSE hc_cardno") \
		_T("   END                                    AS ma_the,") \
		_T("   hc_regcode                             AS ma_dkbd,") \
		_T("   TO_CHAR(hc_regdate,'YYYYMMDD')         AS gt_the_tu,") \
		_T("   TO_CHAR(hc_expdate,'YYYYMMDD')         AS gt_the_den,") \
		_T("   hd_icd                                 AS ma_benh,") \
		_T("   HMS_GET_BENHKEM(hd_docno)			  AS ma_benhkhac,") \
		_T("   hc_line                                AS ma_lydo_vvien,") \
		_T("   hd_transplaceid                        AS ma_noi_chuyen,") \
		_T("   TO_CHAR(hd_admitdate,'YYYYMMDDHH24MI') AS ngay_vao,") \
		_T("   TO_CHAR(hd_enddate,'YYYYMMDDHH24MI')   AS ngay_ra,") \
		_T("   TO_CHAR(invoicedate,'YYYYMMDDHH24MI')   AS ngay_tt,") \
		_T("   0                                      AS so_ngay_dtri,") \
		_T("   CASE") \
		_T("     WHEN hd_result='1'") \
		_T("     THEN 1") \
		_T("     WHEN hd_result='2'") \
		_T("     THEN 2") \
		_T("     WHEN hd_result='4'") \
		_T("     THEN 4") \
		_T("     WHEN hd_result IN ('5','6')") \
		_T("     THEN 5") \
		_T("     ELSE 3") \
		_T("   END AS ket_qua_dtri,") \
		_T("   CASE") \
		_T("     WHEN hd_suggestion='F'") \
		_T("     THEN 2") \
		_T("     WHEN hd_suggestion='T'") \
		_T("     AND hd_result     ='8'") \
		_T("     THEN 3") \
		_T("     WHEN hd_suggestion='T'") \
		_T("     AND hd_result     ='7'") \
		_T("     THEN 4") \
		_T("     ELSE 1") \
		_T("   END                          AS tinh_trang_rv,") \
		_T("   ROUND(SUM(inspaid))          AS t_tongchi,") \
		_T("   ROUND(SUM(testfee))          AS t_xn,") \
		_T("   ROUND(SUM(pacsfee))          AS t_cdha,") \
		_T("   ROUND(SUM(drugfee))          AS t_thuoc,") \
		_T("   ROUND(SUM(bloodfee))         AS t_mau,") \
		_T("   ROUND(SUM(normtechfee))      AS t_pttt,") \
		_T("   ROUND(SUM(materialfee))      AS t_vtth,") \
		_T("   ROUND(SUM(hitechfee))        AS t_dvkt_tyle,") \
		_T("   ROUND(SUM(drugfeek))         AS t_thuoc_tyle,") \
		_T("   0                            AS t_vtyt_tyle,") \
		_T("   ROUND(SUM(examfee))          AS t_kham,") \
		_T("   0                            AS t_giuong,") \
		_T("   0                            AS t_vchuyen,") \
		_T("   ROUND(SUM(inspaid-discount)) AS t_bntt,") \
		_T("   ROUND(SUM(discount))         AS t_bhtt,") \
		_T("   0                            AS t_ngoaids,") \
		_T("   (SELECT sd_insuranceid FROM sys_dept WHERE sd_id = UPPER(deptid)") \
		_T("   )                               AS ma_khoa,") \
		_T("   extract(YEAR FROM invoicedate)  AS nam_qt,") \
		_T("   extract(MONTH FROM invoicedate) AS thang_qt,") \
		_T("   CASE") \
		_T("     WHEN hc_area='KV1'") \
		_T("     THEN 'K1'") \
		_T("     WHEN hc_area='KV2'") \
		_T("     THEN 'K2'") \
		_T("     WHEN hc_area='KV3'") \
		_T("     THEN 'K3'") \
		_T("     ELSE ' '") \
		_T("   END AS ma_khuvuc,") \
		_T("   CASE") \
		_T("     WHEN hd_suggestion='D'") \
		_T("     THEN 3") \
		_T("     WHEN hd_suggestion='C'") \
		_T("     THEN 2") \
		_T("     ELSE 1") \
		_T("   END     AS ma_loaikcb,") \
		_T("   '01014' AS ma_cskcb,") \
		_T("   invoiceno") \
		_T(" FROM") \
		_T("   (SELECT fi.hfe_deptid AS deptid,") \
		_T("     fi.hfe_class,") \
		_T("     fi.hfe_objectid AS hfe_objectid,") \
		_T("     fi.hfe_docno     AS docno,") \
		_T("     fi.hfe_invoiceno AS invoiceno,") \
		_T("     fi.hfe_date      AS invoicedate,") \
		_T("     fe.hfe_group     AS groupid,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6')") \
		_T("       AND fe.hfe_group NOT          IN('A1400', 'A1500', 'A1600')") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS drugfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group='A1400'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS drugfeek,") \
		_T("     CASE") \
		_T("       WHEN (NVL(hfl_bloodfee, 'X') = 'Y'") \
		_T("       OR fe.hfe_group              ='A2000')") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS bloodfee,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group, 1, 2)='B1'") \
		_T("       AND hfe_hitech                 = 'N'") \
		_T("       AND NVL(hfl_bloodfee, 'X')    <> 'Y'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS testfee,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3')") \
		_T("       AND fe.hfe_hitech                ='N'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS pacsfee,") \
		_T("     CASE") \
		_T("       WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5')") \
		_T("       AND fe.hfe_hitech                ='N'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS normtechfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_hitech='Y'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS hitechfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group       IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
		_T("       AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT')") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS materialfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group='D0000'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END AS examfee,") \
		_T("     CASE") \
		_T("       WHEN fe.hfe_group='F0000'") \
		_T("       THEN fe.hfe_inspaid") \
		_T("       ELSE 0") \
		_T("     END             AS otherfee,") \
		_T("     fe.hfe_cost     AS cost,") \
		_T("     fe.hfe_inspaid  AS inspaid,") \
		_T("     fe.hfe_discount AS discount,") \
		_T("     fe.hfe_patpaid  AS patpaid,") \
		_T("     fe.hfe_diffpaid AS diffpaid") \
		_T("   FROM hms_fee_invoice fi") \
		_T("   LEFT JOIN hms_fee_view fe") \
		_T("   ON(fe.hfe_invoiceno  =fi.hfe_invoiceno") \
		_T("   AND fe.hfe_docno     =fi.hfe_docno") \
		_T("   AND fe.hfe_category <> 'Y')") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON (hfl_feeid       = hfe_itemid)") \
		_T("   WHERE fi.hfe_class IN('E')") \
		_T("   AND fe.hfe_discount > 0") \
		_T("   AND fi.hfe_status   ='P'") \
		_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T("   UNION ALL") \
		_T("  SELECT fi.hfe_deptid AS deptid,") \
		_T("     fi.hfe_class,") \
		_T("     fi.hfe_objectid AS hfe_objectid,") \
		_T("     fi.hfe_docno     AS docno,") \
		_T("     fi.hfe_invoiceno AS invoiceno,") \
		_T("     fi.hfe_date      AS invoicedate,") \
		_T("     fe.hfe_group     AS groupid,") \
		_T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
		_T("     DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt) AS diffpaid") \
		_T("   FROM hms_fee_invoice fi") \
		_T("   LEFT JOIN hms_fee_view fe") \
		_T("   ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("   AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON (hfl_feeid       = hfe_itemid)") \
		_T("   WHERE fi.hfe_class IN('E')") \
		_T("   AND fe.hfe_discount = 0") \
		_T("   AND fi.hfe_status   ='P'") \
		_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T("   ) tbl") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(docno=hd_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card") \
		_T(" ON(hc_patientno=hp_patientno") \
		_T(" AND hc_idx     =hd_cardidx)") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id=hfe_objectid)") \
		_T(" LEFT JOIN hms_icd") \
		_T(" ON(hd_icd             =hi_icd)") \
		_T(" WHERE 1=1") \
		_T(" AND ho_type          IN ('I', 'C')") \
		_T(" AND LENGTH(hc_cardno) > 0") \
		_T(" GROUP BY hd_docno,") \
		_T("   hp_surname,") \
		_T("   hp_midname,") \
		_T("   hp_firstname,") \
		_T("   hp_birthdate,") \
		_T("   hp_sex,") \
		_T("   hc_cardno,") \
		_T("   hc_line,") \
		_T("   hc_regcode,") \
		_T("   hc_regdate,") \
		_T("   hc_expdate,") \
		_T("   hd_icd,") \
		_T("   hd_admitdate,") \
		_T("   hd_enddate,") \
		_T("   hp_provid,") \
		_T("   hp_distid,") \
		_T("   hp_villid,") \
		_T("   hd_reldisease,") \
		_T("   deptid,") \
		_T("   hd_transplaceid,") \
		_T("   hd_result,") \
		_T("   hd_suggestion,") \
		_T("   invoicedate,") \
		_T("   hc_area,") \
		_T("   invoiceno") \
		_T(" HAVING SUM(cost) > 0") \
		_T(" ORDER BY hd_docno,invoicedate,") \
		_T("   deptid,") \
		_T("   hp_surname,") \
		_T("   hp_midname,") \
		_T("   hp_firstname"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);	rs.ExecSQL(szSQL);	_msg(_T("%s"),szSQL);	nRow = 1;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("ma_bn"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ho_ten"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ngay_sinh"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("gioi_tinh"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("dia_chi"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_the"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_dkbd"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("gt_the_tu"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("gt_the_den"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_benh"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_benhkhac"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_lydo_vvien"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_noi_chuyen"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ngay_vao"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ngay_ra"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("so_ngay_dtri"), tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ket_qua_dtri"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("tinh_trang_rv"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_tongchi"), tmpStr);		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_xn"), tmpStr);		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_cdha"), tmpStr);		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_thuoc"), tmpStr);		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_mau"), tmpStr);		xls.SetCellText(nCol+23, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_pttt"), tmpStr);		xls.SetCellText(nCol+24, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_vtth"), tmpStr);		xls.SetCellText(nCol+25, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_dvkt_tyle"), tmpStr);		xls.SetCellText(nCol+26, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_thuoc_tyle"), tmpStr);		xls.SetCellText(nCol+27, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_vtyt_tyle"), tmpStr);
		xls.SetCellText(nCol+28, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_kham"), tmpStr);		xls.SetCellText(nCol+29, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_giuong"), tmpStr);
		xls.SetCellText(nCol+30, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_vchuyen"), tmpStr);
		xls.SetCellText(nCol+31, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_bntt"), tmpStr);		xls.SetCellText(nCol+32, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_bhtt"), tmpStr);		xls.SetCellText(nCol+33, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_ngoaids"), tmpStr);		xls.SetCellText(nCol+34, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("ma_khoa"), tmpStr);		xls.SetCellText(nCol+35, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("nam_qt"), tmpStr);
		xls.SetCellText(nCol+36, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("thang_qt"), tmpStr);		xls.SetCellText(nCol+37, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ma_khuvuc"), tmpStr);
		xls.SetCellText(nCol+38, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ma_loaikcb"), tmpStr);
		xls.SetCellText(nCol+39, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ma_cskcb"), tmpStr);		xls.SetCellText(nCol+40, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ngay_tt"), tmpStr);
		xls.SetCellText(nCol+41, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\PhongKham_79a.xls"));
}


void CFMInsuranceCost79A_917::OnExportForInsNewOutPatient2Select(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szYear, szMonth, szDate;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1, nTemp = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 10);	xls.SetColumnWidth(2, 25);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 50);	xls.SetColumnWidth(6, 16);	xls.SetColumnWidth(7, 6);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 14);	xls.SetColumnWidth(12, 8);	xls.SetColumnWidth(13, 8);	xls.SetColumnWidth(14, 12);	xls.SetColumnWidth(15, 12);	xls.SetColumnWidth(16, 6);	xls.SetColumnWidth(17, 6);	xls.SetColumnWidth(18, 6);	xls.SetColumnWidth(19, 10);	xls.SetColumnWidth(20, 10);	xls.SetColumnWidth(21, 10);	xls.SetColumnWidth(22, 10);	xls.SetColumnWidth(23, 10);	xls.SetColumnWidth(24, 10);	xls.SetColumnWidth(25, 10);	xls.SetColumnWidth(26, 10);	xls.SetColumnWidth(27, 10);	xls.SetColumnWidth(28, 10);	xls.SetColumnWidth(29, 10);	xls.SetColumnWidth(30, 10);	xls.SetColumnWidth(31, 10);	xls.SetColumnWidth(32, 10);	xls.SetColumnWidth(33, 10);	xls.SetColumnWidth(34, 6);	xls.SetColumnWidth(35, 6);	xls.SetColumnWidth(36, 6);	xls.SetColumnWidth(37, 6);	xls.SetColumnWidth(38, 6);	xls.SetColumnWidth(39, 6);	xls.SetColumnWidth(40, 6);	xls.SetColumnWidth(41, 6);	xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 0, _T("MA_BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 0, _T("HO_TEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 0, _T("NGAY_SINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 0, _T("GIOI_TINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 0, _T("DIA_CHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 0, _T("MA_THE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 0, _T("MA_DKBD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 0, _T("GT_THE_TU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 0, _T("GT_THE_DEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(10, 0, _T("MA_BENH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(11, 0, _T("MA_BENHKHAC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(12, 0, _T("MA_LYDO_VVIEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(13, 0, _T("MA_NOI_CHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(14, 0, _T("NGAY_VAO"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 0, _T("NGAY_RA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(16, 0, _T("SO_NGAY_DTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 0, _T("KET_QUA_dTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(18, 0, _T("TINH_TRANG_RV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(19, 0, _T("T_TONGCHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(20, 0, _T("T_XN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(21, 0, _T("T_CDHA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(22, 0, _T("T_THUOC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(23, 0, _T("T_MAU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(24, 0, _T("T_PTTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(25, 0, _T("T_VTYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(26, 0, _T("T_DVKT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(27, 0, _T("T_THUOC_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(28, 0, _T("T_VTYT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(29, 0, _T("T_KHAM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(30, 0, _T("T_GIUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(31, 0, _T("T_VCHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(32, 0, _T("T_BNTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(33, 0, _T("T_BHTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(34, 0, _T("T_NGOAIDS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(35, 0, _T("MA_KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(36, 0, _T("NAM_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(37, 0, _T("THANG_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(38, 0, _T("MA_KHUVUC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(39, 0, _T("MA_LOAIKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(40, 0, _T("MA_CSKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(41, 0, _T("NGAY_TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 15);	szSQL.Format(_T(" SELECT docno                  AS ma_bn,") \
		_T("   pname                       AS ho_ten,") \
		_T("   birthyear                   AS ngay_sinh,") \
		_T("   sex                         AS gioi_tinh,") \
		_T("   address                     AS dia_chi,") \
		_T("   cardno                      AS ma_the,") \
		_T("   regplace                    AS ma_dkbd,") \
		_T("   TO_CHAR(regdate,'YYYYMMDD') AS gt_the_tu,") \
		_T("   TO_CHAR(expdate,'YYYYMMDD') AS gt_the_den,") \
		_T("   hcr_mainicd                 AS ma_benh,") \
		_T("   HMS_GET_BENHKEM(docno)      AS ma_benhkhac,") \
		_T("   insline                     AS ma_lydo_vvien,") \
		_T("   workplaceid                 AS ma_noi_chuyen,") \
		_T("   admitdate                   AS ngay_vao,") \
		_T("   dischargedate               AS ngay_ra,") \
		_T("   totaltreat                  AS so_ngay_dtri,") \
		_T("   ket_qua_dtri,") \
		_T("   tinh_trang_rv,") \
		_T("   cost                AS t_tongchi,") \
		_T("   testfee             AS t_xn,") \
		_T("   pacsfee             AS t_cdha,") \
		_T("   drugfee             AS t_thuoc,") \
		_T("   bloodfee            AS t_mau,") \
		_T("   normtechfee         AS t_pttt,") \
		_T("   materialfee         AS t_vtth,") \
		_T("   hitechfee           AS t_dvkt_tyle,") \
		_T("   drugfeek            AS t_thuoc_tyle,") \
		_T("   replace_materialfee AS t_vtyt_tyle,") \
		_T("   0                   AS t_kham,") \
		_T("   bedfee              AS t_giuong,") \
		_T("   transportfee        AS t_vchuyen,") \
		_T("   patpaid             AS t_bntt,") \
		_T("   inspaid             AS t_bhtt,") \
		_T("   0                   AS t_ngoaids,") \
		_T("   (SELECT sd_insuranceid FROM sys_dept WHERE sd_id = UPPER(deptid)") \
		_T("   )                                AS ma_khoa,") \
		_T("   extract(YEAR FROM invoice_date)  AS nam_qt,") \
		_T("   extract(MONTH FROM invoice_date) AS thang_qt,") \
		_T("   ma_khuvuc,") \
		_T("   ma_loaikcb,") \
		_T("   '01014' AS ma_cskcb,") \
		_T("   invoiceno,") \
		_T("   TO_CHAR(invoice_date, 'YYYYMMDDHH24MI')              AS ngay_tt") \
		_T(" FROM") \
		_T("   (SELECT hd_docno AS docno,") \
		_T("     MAX(invoiceno) AS invoiceno,") \
		_T("     trim(hp_surname") \
		_T("     ||' '") \
		_T("     ||hp_midname") \
		_T("     ||' '") \
		_T("     ||hp_firstname) AS pname,") \
		_T("     CASE") \
		_T("       WHEN hp_sex='M'") \
		_T("       THEN extract(YEAR FROM hp_birthdate)") \
		_T("       ELSE 0") \
		_T("     END AS mbirthyear,") \
		_T("     CASE") \
		_T("       WHEN hp_sex='F'") \
		_T("       THEN extract(YEAR FROM hp_birthdate)") \
		_T("       ELSE 0") \
		_T("     END                             AS fbirthyear,") \
		_T("     extract(YEAR FROM hp_birthdate) AS birthyear,") \
		_T("     CASE") \
		_T("       WHEN hp_sex = 'F'") \
		_T("       THEN 1") \
		_T("       ELSE 2") \
		_T("     END                                             AS sex,") \
		_T("     hms_getaddress(hp_provid, hp_distid, hp_villid) AS address,") \
		_T("     hcr_reldisease                                  AS reldisease,") \
		_T("     CASE") \
		_T("       WHEN LENGTH(hd_cardno) > 15") \
		_T("       THEN SUBSTR(hd_cardno,1,15)") \
		_T("       ELSE hd_cardno") \
		_T("     END           AS cardno,") \
		_T("     hd_insregdate AS regdate,") \
		_T("     hd_insexpdate AS expdate,") \
		_T("     CASE") \
		_T("       WHEN hd_insline='Y'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END             AS hdline,") \
		_T("     hc_regcode      AS regplace,") \
		_T("     hd_transplaceid AS workplaceid,") \
		_T("     hc_line         AS insline,") \
		_T("     (SELECT DISTINCT ss_default") \
		_T("     FROM sys_sel") \
		_T("     WHERE ss_id='hms_insline'") \
		_T("     AND ss_code=CAST(hc_line AS NVARCHAR2(15))") \
		_T("     ) AS linename,") \
		_T("     (SELECT DISTINCT hig_group") \
		_T("     FROM hms_insurance_group") \
		_T("     WHERE hig_idx= hc_groupid") \
		_T("     )                                        AS insgroup,") \
		_T("     TO_CHAR(hfe_admitdate, 'YYYYMMDDHH24MI') AS admitdate,") \
		_T("     TO_CHAR(hfe_dischargedate, 'YYYYMMDDHH24MI') AS dischargedate,") \
		_T("     (TRUNC(hfe_dischargedate) - trunc(hfe_admitdate) +1 )                            AS totaltreat,") \
		_T("     hcr_mainicd,") \
		_T("     hcr_maindisease AS icd10,") \
		_T("     CASE") \
		_T("       WHEN hd_admitdept='C1.3'") \
		_T("       THEN 'Y'") \
		_T("       ELSE 'N'") \
		_T("     END                                                                                                                AS emergency,") \
		_T("     lower(deptid)                                                                                                      AS deptid,") \
		_T("     invoice_date                                                                                                       AS invoice_date,") \
		_T("     ROUND(SUM(drugfee))                                                                                                AS drugfee,") \
		_T("     ROUND(SUM(drugfeek))                                                                                               AS drugfeek,") \
		_T("     ROUND(SUM(bloodfee))                                                                                               AS bloodfee,") \
		_T("     ROUND(SUM(testfee))                                                                                                AS testfee,") \
		_T("     ROUND(SUM(pacsfee))                                                                                                AS pacsfee,") \
		_T("     ROUND(SUM(normtechfee))                                                                                            AS normtechfee,") \
		_T("     ROUND(SUM(hitechfee))                                                                                              AS hitechfee,") \
		_T("     ROUND(SUM(materialfee))                                                                                            AS materialfee,") \
		_T("     ROUND(SUM(replace_materialfee))                                                                                    AS replace_materialfee,") \
		_T("     ROUND(SUM(ref_materialfee))                                                                                        AS ref_materialfee,") \
		_T("     ROUND(SUM(bedfee))                                                                                                 AS bedfee,") \
		_T("     ROUND(SUM(transportfee))                                                                                           AS transportfee,") \
		_T("     ROUND(SUM(drugfee+drugfeek+bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee)) AS cost,") \
		_T("     ROUND(SUM(otherfee))                                                                                               AS otherfee,") \
		_T("     ROUND(SUM(discount))                                                                                               AS inspaid,") \
		//_T("     ROUND(SUM(inspaid-discount))                                                                                       AS patpaid,") \//
		_T("     ROUND(SUM(patpaid))                                                                                                AS patpaid,") \
		_T("     ROUND(SUM(diffpaid))                                                                                               AS diffpaid,") \
		_T("     CASE") \
		_T("       WHEN hd_result='1'") \
		_T("       THEN 1") \
		_T("       WHEN hd_result='2'") \
		_T("       THEN 2") \
		_T("       WHEN hd_result='4'") \
		_T("       THEN 4") \
		_T("       WHEN hd_result IN ('5','6')") \
		_T("       THEN 5") \
		_T("       ELSE 3") \
		_T("     END AS ket_qua_dtri,") \
		_T("     CASE") \
		_T("       WHEN hd_suggestion='F'") \
		_T("       THEN 2") \
		_T("       WHEN hd_suggestion='T'") \
		_T("       AND hd_result     ='8'") \
		_T("       THEN 3") \
		_T("       WHEN hd_suggestion='T'") \
		_T("       AND hd_result     ='7'") \
		_T("       THEN 4") \
		_T("       ELSE 1") \
		_T("     END AS tinh_trang_rv,") \
		_T("     CASE") \
		_T("       WHEN hc_area='KV1'") \
		_T("       THEN 'K1'") \
		_T("       WHEN hc_area='KV2'") \
		_T("       THEN 'K2'") \
		_T("       WHEN hc_area='KV3'") \
		_T("       THEN 'K3'") \
		_T("       ELSE ' '") \
		_T("     END AS ma_khuvuc,") \
		_T("     CASE") \
		_T("       WHEN hd_suggestion='D'") \
		_T("       THEN 3") \
		_T("       WHEN hd_suggestion='C'") \
		_T("       THEN 2") \
		_T("       ELSE 1") \
		_T("     END AS ma_loaikcb") \
		_T("   FROM") \
		_T("     (SELECT fi.hfe_deptid AS deptid,") \
		_T("       fi.hfe_class,") \
		_T("       fe.hfe_docno     AS docno,") \
		_T("       fe.hfe_invoiceno AS invoiceno,") \
		_T("       fe.hfe_group     AS groupid,") \
		_T("       hcr_reldisease,") \
		_T("       hfe_admitdate,") \
		_T("       hfe_dischargedate,") \
		_T("       hcr_sumtreat,") \
		_T("       hcr_mainicd,") \
		_T("       hcr_maindisease,") \
		_T("       fi.hfe_date AS invoice_date,") \
		_T("       CASE") \
		_T("           WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6') ") \
        _T("			AND nvl(fe.hfe_payrate,100) =100 ") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS drugfee,") \
		_T("       CASE") \
		_T("          WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6') ") \
        _T("		AND nvl(fe.hfe_payrate,100) = 50  ") \
		_T("         THEN fe.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END AS drugfeek,") \
		_T("       CASE") \
		_T("         WHEN NVL(hfl_bloodfee, 'X') = 'Y'") \
		_T("         OR fe.hfe_group             ='A2000'") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS bloodfee,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(fe.hfe_group, 1, 2)='B1'") \
		_T("         AND NVL(hfl_bloodfee, 'X')    <> 'Y'") \
		_T("         AND fe.hfe_hitech              ='N'") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS testfee,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3')") \
		_T("         AND fe.hfe_hitech                ='N'") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS pacsfee,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5')") \
		_T("         AND fe.hfe_hitech                ='N'") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS normtechfee,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_hitech='Y'") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS hitechfee,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_group       IN ('A1600', 'A9000', 'A9001', 'A9002', 'A9003', 'A3000', 'A7000', 'A4000', 'A5000', 'A8500', 'A8000', 'A8100', 'A8200', 'A8300', 'A5100', 'A8400', 'A1500', 'A1600')") \
		_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT')") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS materialfee,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_group   IN ('A1600', 'A9000', 'A9001', 'A9002', 'A9003', 'A3000', 'A7000', 'A4000', 'A5000', 'A8500', 'A8000', 'A8100', 'A8200', 'A8300', 'A5100', 'A8400', 'A1500', 'A1600')") \
		_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT')") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS replace_materialfee,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_group   IN ('A1600', 'A9000', 'A9001', 'A9002', 'A9003', 'A3000', 'A7000', 'A4000', 'A5000', 'A8500', 'A8000', 'A8100', 'A8200', 'A8300', 'A5100', 'A8400', 'A1500', 'A1600')") \
		_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT')") \
		_T("         THEN fe.hfe_cost") \
		_T("         ELSE 0") \
		_T("       END AS ref_materialfee,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_group in ('D0000', 'C0000')") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS bedfee,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_group='E0000'") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS transportfee,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_group='F0000'") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END         AS otherfee,") \
		_T("       fe.hfe_cost AS cost,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_feegroup = 'OPT_L'") \
		_T("         AND fe.hfe_type      = 'D'") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END l_materialfee,") \
		_T("       CASE") \
		//_T("         WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \//
		_T("           WHEN fe.hfe_feegroup NOT IN ('OPT_L')") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS inspaid,") \
		_T("       CASE") \
		//_T("         WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \//
		_T("           WHEN fe.hfe_feegroup NOT IN ('OPT_L')") \
		_T("         THEN fe.hfe_discount") \
		_T("         ELSE 0") \
		_T("       END            AS discount,") \
		_T("       fe.hfe_patpaid AS patpaid,") \
		_T("       CASE") \
		//_T("         WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \//
		_T("           WHEN fe.hfe_feegroup NOT IN ('OPT_L')") \
		_T("         THEN fe.hfe_diffpaid") \
		_T("         ELSE 0") \
		_T("       END AS diffpaid") \
		_T("     FROM hms_clinical_record") \
		_T("       LEFT JOIN hms_treatment_record") \
		_T("       ON (hcr_docno = htr_docno)") \
		_T("       LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
		_T("       LEFT JOIN hms_fee_invoice fi") \
		_T("       ON (hcr_docno       = fi.hfe_docno") \
		_T("       AND htr_treattime = fi.hfe_treattime AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
		_T("     LEFT JOIN hms_fee_view fe") \
		_T("     ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("     AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON (fe.hfe_itemid    = hfl_feeid)") \
		_T("     WHERE fi.hfe_class  IN('A', 'I')") \
		_T("     AND fe.hfe_discount  > 0") \
		_T("     AND fe.hfe_category <> 'Y'") \
		_T("     AND htr_status       ='T'") \
		_T("     AND fe.hfe_type     <> 'V'") \
		_T("     AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("     AND fi.hfe_status            = 'P'") \
		_T("     AND NVL(htr_outpatient, 'X') = 'Y'") \
		_T("     UNION ALL") \
		_T("     SELECT fi.hfe_deptid AS deptid,") \
		_T("       fi.hfe_class,") \
		_T("       fe.hfe_docno     AS docno,") \
		_T("       fe.hfe_invoiceno AS invoiceno,") \
		_T("       fe.hfe_group     AS groupid,") \
		_T("       hcr_reldisease,") \
		_T("       hfe_admitdate,") \
		_T("       hfe_dischargedate,") \
		_T("       hcr_sumtreat,") \
		_T("       hcr_mainicd,") \
		_T("       hcr_maindisease,") \
		_T("       fi.hfe_date invoice_date,") \
		_T("       0,") \
		_T("       0,") \
		_T("       0,") \
		_T("       0,") \
		_T("       0,") \
		_T("       0,") \
		_T("       0,") \
		_T("       0,") \
		_T("       0,") \
		_T("       0,") \
		_T("       0,") \
		_T("       0,") \
		_T("       0,") \
		_T("       fe.hfe_cost AS cost,") \
		_T("       0 l_materialfee,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L')") \
		_T("         THEN fe.hfe_inspaid") \
		_T("         ELSE 0") \
		_T("       END AS inspaid,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L')") \
		_T("         THEN fe.hfe_discount") \
		_T("         ELSE 0") \
		_T("       END            AS discount,") \
		_T("       fe.hfe_patpaid AS patpaid,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L')") \
		_T("         THEN fe.hfe_diffpaid") \
		_T("         ELSE 0") \
		_T("       END AS diffpaid") \
		_T("     FROM hms_clinical_record") \
		_T("       LEFT JOIN hms_treatment_record") \
		_T("       ON (hcr_docno = htr_docno)") \
		_T("       LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
		_T("       LEFT JOIN hms_fee_invoice fi") \
		_T("       ON (hcr_docno       = fi.hfe_docno") \
		_T("       AND htr_treattime = fi.hfe_treattime AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
		_T("     LEFT JOIN hms_fee_view fe") \
		_T("     ON(fe.hfe_invoiceno  =fi.hfe_invoiceno") \
		_T("     AND fe.hfe_docno     =fi.hfe_docno)") \
		_T("     WHERE fi.hfe_class  IN('A', 'I')") \
		_T("     AND fe.hfe_discount  > 0") \
		_T("     AND fe.hfe_category <> 'Y'") \
		_T("     AND htr_status       ='T'") \
		_T("     AND fe.hfe_type      = 'V'") \
		_T("     AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("     AND fi.hfe_status            = 'P'") \
		_T("     AND NVL(htr_outpatient, 'X') = 'Y'") \
		_T("     UNION ALL") \
		_T("     SELECT fi.hfe_deptid AS deptid,") \
		_T("       fi.hfe_class,") \
		_T("       fe.hfe_docno     AS docno,") \
		_T("       fe.hfe_invoiceno AS invoiceno,") \
		_T("       fe.hfe_group     AS groupid,") \
		_T("       hcr_reldisease,") \
		_T("       hfe_admitdate,") \
		_T("       hfe_dischargedate,") \
		_T("       hcr_sumtreat,") \
		_T("       hcr_mainicd,") \
		_T("       hcr_maindisease,") \
		_T("       fi.hfe_date invoice_date,") \
		_T("       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
		_T("         THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
		_T("         ELSE 0") \
		_T("       END AS diffpaid") \
		_T("     FROM hms_clinical_record") \
		_T("       LEFT JOIN hms_treatment_record") \
		_T("       ON (hcr_docno = htr_docno)") \
		_T("       LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
		_T("       LEFT JOIN hms_fee_invoice fi") \
		_T("       ON (hcr_docno       = fi.hfe_docno") \
		_T("       AND htr_treattime = fi.hfe_treattime AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
		_T("     LEFT JOIN hms_fee_view fe") \
		_T("     ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("     AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON (fe.hfe_itemid    = hfl_feeid)") \
		_T("     WHERE fi.hfe_class  IN('A', 'I')") \
		_T("     AND fe.hfe_discount  = 0") \
		_T("     AND fe.hfe_category <> 'Y'") \
		_T("     AND htr_status       ='T'") \
		_T("     AND fe.hfe_type     <> 'V'") \
		_T("     AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("     AND fi.hfe_status            = 'P'") \
		_T("     AND NVL(htr_outpatient, 'X') = 'Y'") \
		_T("     UNION ALL") \
		_T("     SELECT fi.hfe_deptid AS deptid,") \
		_T("       fi.hfe_class,") \
		_T("       fe.hfe_docno     AS docno,") \
		_T("       fe.hfe_invoiceno AS invoiceno,") \
		_T("       fe.hfe_group     AS groupid,") \
		_T("       hcr_reldisease,") \
		_T("       hfe_admitdate,") \
		_T("       hfe_dischargedate,") \
		_T("       hcr_sumtreat,") \
		_T("       hcr_mainicd,") \
		_T("       hcr_maindisease,") \
		_T("       fi.hfe_date invoice_date,") \
		_T("       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
		_T("       CASE") \
		_T("         WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L')") \
		_T("         THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
		_T("         ELSE 0") \
		_T("       END AS diffpaid") \
		_T("     FROM hms_clinical_record") \
		_T("       LEFT JOIN hms_treatment_record") \
		_T("       ON (hcr_docno = htr_docno)") \
		_T("       LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
		_T("       LEFT JOIN hms_fee_invoice fi") \
		_T("       ON (hcr_docno       = fi.hfe_docno") \
		_T("       AND htr_treattime = fi.hfe_treattime AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
		_T("     LEFT JOIN hms_fee_view fe") \
		_T("     ON(fe.hfe_invoiceno  =fi.hfe_invoiceno") \
		_T("     AND fe.hfe_docno     =fi.hfe_docno)") \
		_T("     WHERE fi.hfe_class  IN('A', 'I')") \
		_T("     AND fe.hfe_discount  = 0") \
		_T("     AND fe.hfe_category <> 'Y'") \
		_T("     AND htr_status       ='T'") \
		_T("     AND fe.hfe_type      = 'V'") \
		_T("     AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("     AND fi.hfe_status            = 'P'") \
		_T("     AND NVL(htr_outpatient, 'X') = 'Y'") \
		_T("     ) tbl") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(docno=hd_docno)") \
		_T("   LEFT JOIN hms_patient") \
		_T("   ON(hd_patientno=hp_patientno)") \
		_T("   LEFT JOIN hms_card") \
		_T("   ON(hc_patientno=hp_patientno") \
		_T("   AND hc_idx     =hd_cardidx)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON(ho_id=hd_object)") \
		_T("   LEFT JOIN hms_icd") \
		_T("   ON(hcr_mainicd        =hi_icd)") \
		_T("   WHERE ho_type        IN('I','C')") \
		_T("   AND LENGTH(hd_cardno) > 1") \
		_T("   GROUP BY hd_docno,") \
		_T("     hp_surname,") \
		_T("     hp_midname,") \
		_T("     hp_firstname,") \
		_T("     hp_birthdate,") \
		_T("     hp_sex,") \
		_T("     hd_cardno,") \
		_T("     hd_insline,") \
		_T("     hc_groupid,") \
		_T("     hc_line,") \
		_T("     hd_insline,") \
		_T("     hc_regcode,") \
		_T("     hcr_mainicd,") \
		_T("     hcr_maindisease,") \
		_T("     hfe_admitdate,") \
		_T("     hfe_dischargedate,") \
		_T("     hcr_sumtreat,") \
		_T("     hp_provid,") \
		_T("     hp_distid,") \
		_T("     hp_villid,") \
		_T("     hd_insregdate,") \
		_T("     hd_Insexpdate,") \
		_T("     hcr_reldisease,") \
		_T("     hi_name,") \
		_T("     hd_emergency,") \
		_T("     deptid,") \
		_T("     hd_admitdept,") \
		_T("     invoice_date,") \
		_T("     hd_transplaceid,") \
		_T("     hd_result,") \
		_T("     hd_suggestion,") \
		_T("     hc_area") \
		_T("   HAVING SUM(cost) > 0") \
		_T("   ORDER BY docno, invoice_date, dischargedate,") \
		_T("     deptid,") \
		_T("     hp_surname,") \
		_T("     hp_midname,") \
		_T("     hp_firstname") \
		_T("   )"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);_msg(_T("%s"),szSQL);	rs.ExecSQL(szSQL);	nRow = 1;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("ma_bn"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ho_ten"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ngay_sinh"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("gioi_tinh"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("dia_chi"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_the"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_dkbd"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("gt_the_tu"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("gt_the_den"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_benh"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_benhkhac"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_lydo_vvien"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_noi_chuyen"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ngay_vao"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ngay_ra"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("so_ngay_dtri"), tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ket_qua_dtri"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("tinh_trang_rv"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_tongchi"), tmpStr);		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_xn"), tmpStr);		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_cdha"), tmpStr);		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_thuoc"), tmpStr);		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_mau"), tmpStr);		xls.SetCellText(nCol+23, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_pttt"), tmpStr);		xls.SetCellText(nCol+24, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_vtth"), tmpStr);		xls.SetCellText(nCol+25, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_dvkt_tyle"), tmpStr);		xls.SetCellText(nCol+26, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_thuoc_tyle"), tmpStr);		xls.SetCellText(nCol+27, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_vtyt_tyle"), tmpStr);
		xls.SetCellText(nCol+28, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_kham"), tmpStr);		xls.SetCellText(nCol+29, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_giuong"), tmpStr);
		xls.SetCellText(nCol+30, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_vchuyen"), tmpStr);
		xls.SetCellText(nCol+31, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_bntt"), tmpStr);		xls.SetCellText(nCol+32, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("t_bhtt"), tmpStr);		xls.SetCellText(nCol+33, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("t_ngoaids"), tmpStr);		xls.SetCellText(nCol+34, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("ma_khoa"), tmpStr);		xls.SetCellText(nCol+35, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("nam_qt"), tmpStr);
		xls.SetCellText(nCol+36, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("thang_qt"), tmpStr);		xls.SetCellText(nCol+37, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ma_khuvuc"), tmpStr);
		xls.SetCellText(nCol+38, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ma_loaikcb"), tmpStr);
		xls.SetCellText(nCol+39, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ma_cskcb"), tmpStr);		xls.SetCellText(nCol+40, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ngay_tt"), tmpStr);
		xls.SetCellText(nCol+41, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\79aNT.xls"));
}


int CFMInsuranceCost79A_917::OnAddFMInsuranceCost79A_917()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsuranceCost79A_917::OnEditFMInsuranceCost79A_917()
{
 	if(GetMode() != VM_VIEW) 
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsuranceCost79A_917::OnDeleteFMInsuranceCost79A_917(){
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
 		OnCancelFMInsuranceCost79A_917(); 
 	}
	return 0;
}
int CFMInsuranceCost79A_917::OnSaveFMInsuranceCost79A_917(){
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
 		//OnFMInsuranceCost79A_917ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMInsuranceCost79A_917::OnCancelFMInsuranceCost79A_917()
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
int CFMInsuranceCost79A_917::OnFMInsuranceCost79A_917ListLoadData()
{
	return 0;
}
CString CFMInsuranceCost79A_917::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CString szSQL, szWhere, szSubWhere, szSubSQL1, szSubSQL2,  szOrderBy, szObjectCondition;
	CString szRooms, szDeptID, szDepts, szCards;
	CString tmpStr, szTemp;

	int nIndex = 0;

	szWhere.Empty();

	szCards.Empty();
	szDepts.Empty();
	szRooms.Empty();
	szDeptID.Empty();
	szSubWhere.Empty();

	if (m_bWithoutEmergency)
		szWhere.AppendFormat(_T(" AND hd_emergency<>'Y' "));
	if (m_bOnlyEmergency)
		szWhere.AppendFormat(_T(" AND hd_emergency='Y' "));

	if (!m_szClerkKey.IsEmpty() && (!m_bUnapproved))
		szSubWhere.AppendFormat(_T(" AND fi.hfe_staff='%s' "), m_szClerkKey);

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (m_wndRoomList.GetCheck(i))
		{
			if (!szRooms.IsEmpty())
				szRooms += _T(",");

			if (szDeptID.IsEmpty())
				szDeptID = m_wndRoomList.GetItemText(i, 2);

			szRooms.AppendFormat(_T("%s"), m_wndRoomList.GetItemText(i, 0));
		}
	}

	
	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (m_wndCardList.GetCheck(i))
		{
			tmpStr = m_wndCardList.GetItemText(i, 0);
			nIndex = 0;

			if (tmpStr.Find(_T(',')) > -1)
			{
				for (int i = 0; i < tmpStr.GetLength(); i++)
				{
					if (tmpStr[i] == _T(','))
					{
						szTemp = tmpStr.Mid(nIndex, i - nIndex);
						nIndex = i + 1;
						if (!szCards.IsEmpty())
							szCards += _T(",");
						szCards.AppendFormat(_T("'%s'"), szTemp);
					}
				}

				szTemp = tmpStr.Right(tmpStr.GetLength() - nIndex);
			}
			else
			{
				szTemp = tmpStr;
			}

			if (!szCards.IsEmpty())
				szCards += _T(",");

			szCards.AppendFormat(_T("'%s'"), szTemp);
		}
	}

	if (!szCards.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND substr(hd_cardno,1,2) IN(%s) "), szCards);
		//MessageBox(szCards);
	}

	if (!szRooms.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND (select he_roomid from hms_exam where he_docno=docno and upper(he_deptid)=upper(deptid) and he_status='T' ") \
			                 _T("and he_receptidx=(select max(he_receptidx) from hms_exam where he_docno=docno)) IN(%s) "),
							 szRooms);
	}

	if (!szDepts.IsEmpty() || !szDeptID.IsEmpty())
	{
		if (szDepts.IsEmpty())
			szDepts = _T("''");
		if (!m_bUnapproved)
			szSubWhere.AppendFormat(_T(" AND (fi.hfe_deptid IN(%s)) "),
			                    szDepts, szDeptID);
		else
			szWhere.AppendFormat(_T(" AND hd_enddept IN (%s)"), szDepts);
	}
	if (m_nNumberofDoc > 0)
		szWhere.AppendFormat(_T(" AND hms_getnumberofdocument(hd_docno, '%s', '%s') > %d"), m_szFromDate, m_szToDate, m_nNumberofDoc);
	if (m_bOnlyCommander)
	{
		szWhere.AppendFormat(_T(" AND hd_rank IN (15, 16, 17, 18, 21, 22, 23, 24)"));
	}
	if (m_bOutpatientTreament)
		szWhere.AppendFormat(_T(" AND hd_outpatient = 'Y'"));
	szOrderBy = _T(" insline, insgroup, hdline, examdate, docno, cardno");
	if (m_bIsInsPurpose)
		szOrderBy = _T(" TO_CHAR(hd_enddate, 'YYYYMMDDHH24MI'), deptid, hp_surname, hp_midname, hp_firstname");
	if (m_bOnlyCommander || (szCards == _T("'QN'")))
		m_bShowDiff = true;
	else
		m_bShowDiff = false;
	szObjectCondition = _T(" AND ho_type IN ('I', 'C') AND length(hc_cardno) > 0");
	if (m_bSoldierPatient)
		szObjectCondition = _T(" AND hd_object = 1");
	m_bShowDiff = true;
	szWhere += szObjectCondition;
	if (m_bShowDiff)
	{
		//phi chenh cho doi tuong cap tuong , QN
		//th da thu phi
		szSubSQL1.Format(_T(" UNION ALL ") \
				_T("  SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fi.hfe_docno as docno,") \
				_T("         fi.hfe_invoiceno as invoiceno,") \
				_T("		 fi.hfe_date as invoicedate,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("         0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
				_T("         DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt) AS diffpaid") \
				_T("   FROM hms_fee_invoice fi ") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (hfl_feeid = hfe_itemid)	") \
				_T("   WHERE fi.hfe_class IN('E') AND fe.hfe_discount = 0 AND fi.hfe_status='P' ") \
				_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T("   %s"), m_szFromDate, m_szToDate, szSubWhere);
		//phi chenh cho doi tuong cap tuong , QN
		//th da xac nhan phi o khoa
		szSubSQL2.Format(_T(" UNION ALL ") \
					_T("  SELECT hfe_docno as docno,") \
					_T("         0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
					_T("         DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt) AS difpaid") \
					_T("   FROM hms_fee_view fe ") \
					_T("   LEFT JOIN hms_fee_list ON (hfe_itemid = hfl_feeid)") \
					_T("   WHERE hfe_class IN('E') AND hfe_discount = 0 AND hfe_status NOT IN ('C', 'P')"));
	}
	szSQL.Format(_T("SELECT hd_docno AS docno,") \
				_T("        max(invoiceno) AS invoiceno,") \
				_T("		max(invoicedate) AS invoicedate,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname,") \
				_T("        case when hp_sex='M' then TO_CHAR(hp_birthdate, 'YYYYMMDD') end AS mbirthyear,") \
				_T("        case when hp_sex='F' then TO_CHAR(hp_birthdate, 'YYYYMMDD') end AS fbirthyear,") \
				_T("        hp_sex AS sex,") \
				_T("        hms_getaddress(hp_provid, hp_distid, hp_villid) as address,") \
				_T("        hd_reldisease as reldisease,") \
				_T("        CASE WHEN LENGTH(hd_cardno) > 15 THEN SUBSTR(hd_cardno,1,15) ELSE hd_cardno END AS cardno,") \
				_T("        TO_CHAR(hd_insregdate, 'YYYYMMDD') AS regdate,") \
				_T("        TO_CHAR(hd_insexpdate, 'YYYYMMDD') AS expdate,") \
				_T("        CASE WHEN hd_insline='Y' THEN 1 ELSE 0 END AS hdline,") \
				_T("        hc_regcode AS regplace,") \
				_T("        hc_line AS insline,") \
				_T("        (SELECT distinct ss_default FROM sys_sel WHERE ss_id='hms_insline' AND ss_code=CAST(hc_line AS NVARCHAR2(15))) AS linename,") \
				_T("        (SELECT distinct hig_group FROM hms_insurance_group WHERE hig_idx= hc_groupid) AS insgroup,") \
				_T(" 	    hd_transplaceid AS ma_noi_chuyen,") \
				_T("        TO_CHAR(hd_admitdate, 'YYYYMMDDHH24MI') AS examdate,") \
				_T("        TO_CHAR(hd_enddate, 'YYYYMMDDHH24MI') AS enddate,") \
				_T("   extract(YEAR FROM invoicedate)  AS nam_qt,") \
				_T("   extract(MONTH FROM invoicedate) AS thang_qt,") \
				_T("   CASE") \
				_T("     WHEN hd_suggestion='D'") \
				_T("     THEN 3") \
				_T("     WHEN hd_suggestion='C'") \
				_T("     THEN 2") \
				_T("     ELSE 1") \
				_T("   END AS ma_loaikcb,") \
				_T("   CASE") \
				_T("     WHEN hc_area='KV1'") \
				_T("     THEN 'K1'") \
				_T("     WHEN hc_area='KV2'") \
				_T("     THEN 'K2'") \
				_T("     WHEN hc_area='KV3'") \
				_T("     THEN 'K3'") \
				_T("     ELSE ' '") \
				_T("   END AS ma_khuvuc,") \
				_T("   0 AS ket_qua_dtri,") \
				_T("   CASE") \
				_T("     WHEN hd_suggestion='F'") \
				_T("     THEN 2") \
				_T("     WHEN hd_suggestion='T'") \
				_T("     AND hcr_result     ='8'") \
				_T("     THEN 3") \
				_T("     WHEN hd_suggestion='T'") \
				_T("     AND hcr_result     ='7'") \
				_T("     THEN 4") \
				_T("     ELSE 1") \
				_T("   END AS tinh_trang_rv,") \
				_T("        0 AS totaltreat,") \
				_T("        hd_icd,") \
				_T("        CASE WHEN length(hd_icd) > 0 THEN hi_name||'['||hd_icd||']' ELSE NULL END AS icd10,") \
				_T("        hd_emergency AS emergency,") \
				_T("        (SELECT sd_insuranceid FROM sys_dept WHERE sd_id = NVL(deptid, hd_admitdept)) AS deptid,") \
				_T("		(select ss_vndesc from sys_sel where ss_id = 'hms_rank' and ss_code = hd_rank) soldier_rank,") \
				_T("		get_syssel_desc('hms_rank', hd_rank) generalrank,") \
				_T("		get_syssel_desc('hms_position', hp_position) position,") \
				_T("		hp_workplace work_place,") \
				_T("        round(SUM(drugfee)) AS drugfee,") \
				_T("        round(SUM(drugfeek)) AS drugfeek,") \
				_T("        round(SUM(bloodfee)) AS bloodfee,") \
				_T("        round(SUM(testfee)) AS testfee,") \
				_T("        round(SUM(pacsfee)) AS pacsfee,") \
				_T("        round(SUM(normtechfee)) AS normtechfee,") \
				_T("        round(SUM(hitechfee)) AS hitechfee,") \
				_T("        round(SUM(materialfee)) AS materialfee,") \
				_T("        round(SUM(examfee)) AS examfee,") \
				_T("        round(SUM(inspaid)) AS cost,") \
				_T("        round(SUM(otherfee)) AS otherfee,") \
				_T("        round(SUM(discount)) AS inspaid,") \
				_T("        round(SUM(inspaid-discount)) AS patpaid,") \
				_T("		round(SUM(diffpaid)) AS diffpaid") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class AS hfe_class,") \
				_T("         fi.hfe_docno as docno,") \
				_T("         fi.hfe_invoiceno as invoiceno,") \
				_T("		 fi.hfe_date as invoicedate,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6') AND fe.hfe_group NOT IN('A1400', 'A1500', 'A1600') THEN fe.hfe_inspaid ELSE 0 END AS drugfee,") \
				_T("         CASE WHEN fe.hfe_group='A1400' THEN fe.hfe_inspaid ELSE 0 END AS drugfeek,") \
				_T("         CASE WHEN (NVL(hfl_bloodfee, 'X') = 'Y' OR fe.hfe_group='A2000') THEN fe.hfe_inspaid ELSE 0 END AS bloodfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2)='B1' AND hfe_hitech = 'N' AND NVL(hfl_bloodfee, 'X') <> 'Y' THEN fe.hfe_inspaid ELSE 0 END AS testfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS pacsfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS normtechfee,") \
				_T("         CASE WHEN fe.hfe_hitech='Y' THEN fe.hfe_inspaid ELSE 0 END AS hitechfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS materialfee,") \
				_T("         CASE WHEN fe.hfe_group='D0000' THEN fe.hfe_inspaid ELSE 0 END AS examfee,") \
				_T("         CASE WHEN fe.hfe_group='F0000' THEN fe.hfe_inspaid ELSE 0 END AS otherfee,") \
				_T("         fe.hfe_cost AS cost,") \
				_T("         fe.hfe_inspaid AS inspaid,") \
				_T("         fe.hfe_discount AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         fe.hfe_diffpaid AS diffpaid") \
				_T("   FROM hms_fee_invoice fi ") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno AND fe.hfe_category <> 'Y')") \
				_T("   LEFT JOIN hms_fee_list ON (hfl_feeid = hfe_itemid)	") \
				_T("   WHERE fi.hfe_class IN('E') AND fe.hfe_discount > 0 AND fi.hfe_status='P' ") \
				_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T(" %s %s") \
				_T(" ) tbl") \
				_T(" LEFT JOIN hms_doc ON(docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
				_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" LEFT JOIN hms_icd ON(hd_icd=hi_icd)") \
				_T(" WHERE hd_status='T' ") \
				_T(" %s ") \
				_T(" GROUP BY hd_docno, hp_surname, hp_midname, hp_firstname, hp_birthdate, hp_sex, hd_cardno, hd_insline, hc_groupid, hc_line, hd_insline, hc_regcode,") \
				_T("          hd_icd, hd_admitdate, hd_enddate, hp_provid, hp_distid, hp_villid, hd_insregdate, hd_insexpdate, hd_reldisease, hi_name, hd_emergency, deptid, hd_admitdept,") \
				_T("		  hd_rank, hp_position, hp_workplace, hd_transplaceid, hc_area, hd_suggestion, invoicedate, hcr_result") \
				_T(" HAVING SUM(cost) > 0") \
				_T(" ORDER BY ") \
				_T(" %s") , m_szFromDate, m_szToDate, szSubWhere, szSubSQL1, szWhere, szOrderBy);
	if (m_bUnapproved)
					szSQL.Format(_T("SELECT hd_docno AS docno,") \
					_T("        he_roomid,") \
					_T("		(SELECT sd_insuranceid FROM sys_dept WHERE sd_id = hd_enddept) AS deptid,") \
					_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname,") \
					_T("        case when hp_sex='M' then TO_CHAR(hp_birthdate, 'YYYYMMDD') end AS mbirthyear,") \
					_T("        case when hp_sex='F' then TO_CHAR(hp_birthdate, 'YYYYMMDD') end AS fbirthyear,") \
					_T("        hp_sex AS sex,") \
					_T("        hms_getaddress(hp_provid, hp_distid, hp_villid) as address,") \
					_T("        hd_reldisease as reldisease,") \
					_T("        CASE WHEN LENGTH(hd_cardno) > 15 THEN SUBSTR(hd_cardno,1,15) ELSE hd_cardno END AS cardno,") \
					_T("        TO_CHAR(hd_insregdate, 'YYYYMMDD') AS regdate,") \
					_T("        TO_CHAR(hd_insexpdate, 'YYYYMMDD') AS expdate,") \
					_T("        CASE WHEN hd_insline='Y' THEN 1 ELSE 0 END AS hdline,") \
					_T("        hc_regcode AS regplace,") \
					_T("        hc_line AS insline,") \
					_T("        (SELECT distinct ss_default FROM sys_sel WHERE ss_id='hms_insline' AND ss_code=CAST(hc_line AS NVARCHAR2(15))) AS linename,") \
					_T("        (SELECT distinct hig_group FROM hms_insurance_group WHERE hig_idx= hc_groupid) AS insgroup,") \
					_T(" 	    hd_transplaceid AS ma_noi_chuyen,") \
					_T("        TO_CHAR(hd_admitdate, 'YYYYMMDDHH24MI') AS examdate,") \
					_T("        TO_CHAR(hd_enddate, 'YYYYMMDDHH24MI') AS enddate,") \
					_T("   0  AS nam_qt,") \
					_T("   0 AS thang_qt,") \
					_T("   CASE") \
					_T("     WHEN hd_suggestion='D'") \
					_T("     THEN 3") \
					_T("     WHEN hd_suggestion='C'") \
					_T("     THEN 2") \
					_T("     ELSE 1") \
					_T("   END AS ma_loaikcb,") \
					_T("   CASE") \
					_T("     WHEN hc_area='KV1'") \
					_T("     THEN 'K1'") \
					_T("     WHEN hc_area='KV2'") \
					_T("     THEN 'K2'") \
					_T("     WHEN hc_area='KV3'") \
					_T("     THEN 'K3'") \
					_T("     ELSE ' '") \
					_T("   END AS ma_khuvuc,") \
					_T("   0 AS ket_qua_dtri,") \
					_T("   CASE") \
					_T("     WHEN hd_suggestion='F'") \
					_T("     THEN 2") \
					_T("     WHEN hd_suggestion='T'") \
					_T("     AND hcr_result     ='8'") \
					_T("     THEN 3") \
					_T("     WHEN hd_suggestion='T'") \
					_T("     AND hcr_result     ='7'") \
					_T("     THEN 4") \
					_T("     ELSE 1") \
					_T("   END AS tinh_trang_rv,") \
					_T("        0 AS totaltreat,") \
					_T("        hd_icd,") \
					_T("        CASE WHEN length(hd_icd) > 0 THEN hi_name||'['||hd_icd||']' ELSE NULL END AS icd10,") \
					_T("        hd_emergency AS emergency,") \
					_T("		(select ss_vndesc from sys_sel where ss_id = 'hms_rank' and ss_code = hd_rank) soldier_rank,") \
					_T("		get_syssel_desc('hms_rank', hd_rank) generalrank,") \
					_T("		get_syssel_desc('hms_position', hp_position) position,") \
					_T("		hp_workplace work_place,") \
					_T("        round(SUM(drugfee)) AS drugfee,") \
					_T("        round(SUM(drugfeek)) AS drugfeek,") \
					_T("        round(SUM(bloodfee)) AS bloodfee,") \
					_T("        round(SUM(testfee)) AS testfee,") \
					_T("        round(SUM(pacsfee)) AS pacsfee,") \
					_T("        round(SUM(normtechfee)) AS normtechfee,") \
					_T("        round(SUM(hitechfee)) AS hitechfee,") \
					_T("        round(SUM(materialfee)) AS materialfee,") \
					_T("        round(SUM(examfee)) AS examfee,") \
					_T("        round(SUM(inspaid)) AS cost,") \
					_T("        round(SUM(otherfee)) AS otherfee,") \
					_T("        round(SUM(discount)) AS inspaid,") \
					_T("        round(SUM(inspaid-discount)) AS patpaid,") \
					_T("		round(SUM(diffpaid)) AS diffpaid") \
					_T(" FROM") \
					_T(" (") \
					_T("  SELECT hfe_docno as docno,") \
					_T("         CASE WHEN SUBSTR(hfe_group,1,2) IN('A1','A6') AND hfe_group NOT IN ('A1400', 'A1500', 'A1600') THEN hfe_inspaid ELSE 0 END AS drugfee,") \
					_T("         CASE WHEN hfe_group='A1400' THEN hfe_inspaid ELSE 0 END AS drugfeek,") \
					_T("         CASE WHEN (NVL(hfl_bloodfee, 'X') = 'Y' OR fe.hfe_group='A2000') THEN hfe_inspaid ELSE 0 END AS bloodfee,") \
					_T("         CASE WHEN SUBSTR(hfe_group, 1, 2)='B1' AND hfe_hitech = 'N' AND NVL(hfl_bloodfee, 'X') <> 'Y' THEN hfe_inspaid ELSE 0 END AS testfee,") \
					_T("         CASE WHEN SUBSTR(hfe_group, 1, 2) IN('B2','B3') AND hfe_hitech ='N' THEN hfe_inspaid ELSE 0 END AS pacsfee,") \
					_T("         CASE WHEN SUBSTR(hfe_group, 1, 2) IN('B4','B5') AND hfe_hitech ='N' THEN hfe_inspaid ELSE 0 END AS normtechfee,") \
					_T("         CASE WHEN hfe_hitech='Y' THEN hfe_inspaid ELSE 0 END AS hitechfee,") \
					_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
					_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
					_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS materialfee,") \
					_T("         CASE WHEN hfe_group='D0000' THEN hfe_inspaid ELSE 0 END AS examfee,") \
					_T("         CASE WHEN hfe_group='F0000' THEN hfe_inspaid ELSE 0 END AS otherfee,") \
					_T("         hfe_cost AS cost,") \
					_T("         hfe_inspaid AS inspaid,") \
					_T("         hfe_discount AS discount,") \
					_T("         hfe_patpaid AS patpaid,") \
					_T("         hfe_diffpaid AS diffpaid") \
					_T("   FROM hms_fee_view fe ") \
					_T("   LEFT JOIN hms_fee_list ON (hfe_itemid = hfl_feeid)") \
					_T("   WHERE hfe_class IN('E') AND hfe_discount > 0 AND hfe_status NOT IN ('C', 'P')") \
					_T(" %s") \
					_T(" ) tbl") \
					_T(" LEFT JOIN hms_doc ON(docno=hd_docno)") \
					_T(" LEFT JOIN hms_exam ON (hd_docno = he_docno AND hd_doctor = he_doctor)") \
					_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
					_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
					_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
					_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
					_T(" LEFT JOIN hms_icd ON(hd_icd=hi_icd)") \
					_T(" WHERE hd_status='T' AND hd_suggestion NOT IN ('C', 'D') ") \
					_T(" AND hd_enddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
					_T(" %s %s") \
					_T(" GROUP BY hd_docno, hp_surname, hp_midname, hp_firstname, hp_birthdate, hp_sex, hd_cardno, hd_insline, hc_groupid, hc_line, hd_insline, hc_regcode,") \
					_T("          hd_icd, hd_admitdate, hd_enddate, hp_provid, hp_distid, hp_villid, hd_insregdate, hd_insexpdate, hd_reldisease, hi_name, hd_emergency, hd_enddept, hd_admitdept, he_roomid,") \
					_T("		  hd_rank, hp_position, hp_workplace, hd_transplaceid, hc_area, hd_suggestion, hcr_result") \
					_T(" HAVING SUM(cost) > 0") \
					_T(" ORDER BY ") \
					_T(" %s"),szSubSQL2, m_szFromDate, m_szToDate, szSubWhere, szWhere, szOrderBy);
_fmsg(_T("%s"), szSQL);
	return szSQL;
}


int CFMInsuranceCost79A_917::OnCardListCheckAll()
{
	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (!m_wndCardList.GetCheck(i))
		{
			m_wndCardList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CFMInsuranceCost79A_917::OnCardListUnCheckAll()
{
	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (m_wndCardList.GetCheck(i))
		{
			m_wndCardList.SetCheck(i, FALSE);
		}
	}
	return 0;
}


int CFMInsuranceCost79A_917::OnDeptListCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (!m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CFMInsuranceCost79A_917::OnDeptListUnCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, FALSE);
		}
	}
	return 0;
}


int CFMInsuranceCost79A_917::OnRoomListCheckAll()
{
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (!m_wndRoomList.GetCheck(i))
		{
			m_wndRoomList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CFMInsuranceCost79A_917::OnRoomListUnCheckAll()
{
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (m_wndRoomList.GetCheck(i))
		{
			m_wndRoomList.SetCheck(i, FALSE);
		}
	}
	return 0;
}
