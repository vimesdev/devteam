#include "stdafx.h"
#include "FMInsuranceCost79_80AIN_80AOUT.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79_80A *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceCost79_80A* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79_80A *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
	return ((CFMInsuranceCost79_80A *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79_80A *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceCost79_80A* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79_80A *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A *)pWnd)->OnClerkAddNew();
}*/
static void _OnByDischargedDateSelectFnc(CWnd *pWnd){
	CFMInsuranceCost79_80A *pVw = (CFMInsuranceCost79_80A *)pWnd;
	pVw->OnByDischargedDateSelect();
} 
static void _OnUnapprovedSelectFnc(CWnd *pWnd){
	CFMInsuranceCost79_80A *pVw = (CFMInsuranceCost79_80A *)pWnd;
	pVw->OnUnapprovedSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsuranceCost79_80A *pVw = (CFMInsuranceCost79_80A *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsuranceCost79_80A *pVw = (CFMInsuranceCost79_80A *)pWnd;
	pVw->OnExportSelect();
}
static void _OnExportForInsSelectFnc(CWnd *pWnd){
	CFMInsuranceCost79_80A *pVw = (CFMInsuranceCost79_80A *)pWnd;
	pVw->OnExportForInsSelect();
}
static long _OnCardListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79_80A*)pWnd)->OnCardListLoadData();
} 
static void _OnCardListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A*)pWnd)->OnCardListDblClick();
} 
static void _OnCardListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceCost79_80A*)pWnd)->OnCardListSelectChange(nOldItem, nNewItem);
} 
static int _OnCardListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79_80A*)pWnd)->OnCardListDeleteItem();
}
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79_80A*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceCost79_80A*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceCost79_80A*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79_80A*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnAddFMInsuranceCost80AFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79_80A*)pWnd)->OnAddFMInsuranceCost80A();
} 
static int _OnEditFMInsuranceCost80AFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79_80A*)pWnd)->OnEditFMInsuranceCost80A();
} 
static int _OnDeleteFMInsuranceCost80AFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79_80A*)pWnd)->OnDeleteFMInsuranceCost80A();
} 
static int _OnSaveFMInsuranceCost80AFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79_80A*)pWnd)->OnSaveFMInsuranceCost80A();
} 
static int _OnCancelFMInsuranceCost80AFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79_80A*)pWnd)->OnCancelFMInsuranceCost80A();
}

static int _OnCardListCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79_80A*)pWnd)->OnCardListCheckAll();
}
static int _OnCardListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79_80A*)pWnd)->OnCardListUnCheckAll();
}

static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79_80A*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79_80A*)pWnd)->OnDeptListUnCheckAll();
}
static long _OnphanloaibhLoadDataFnc(CWnd *pWnd)
{
	return ((CFMInsuranceCost79_80A *)pWnd)->OnphanloaibhLoadData();
}
static void _On79ASelectFnc(CWnd *pWnd){
	  ((CFMInsuranceCost79_80A*)pWnd)->On79ASelect();
}
static void _On80AINSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceCost79_80A*)pWnd)->On80AINSelect();
}
static void _On80AOUTSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceCost79_80A*)pWnd)->On80AOUTSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMInsuranceCost79_80A*)pWnd)->OnAllSelect();
}

static void _OnChilaybndoiqtSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceCost79_80A*)pWnd)->OnChilaybndoiqtSelect();
}
static void _OnKolaybndoiqtSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceCost79_80A*)pWnd)->OnKolaybndoiqtSelect();
}

CFMInsuranceCost79_80A::CFMInsuranceCost79_80A(CWnd* pParent)
{
	m_nDlgWidth = 450;
	m_nDlgHeight = 590;
	SetDefaultValues();
}
CFMInsuranceCost79_80A::~CFMInsuranceCost79_80A()
{
}
void CFMInsuranceCost79_80A::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condtion"), 5, 5, 440, 545);
	m_wndInsuranceCardInfo.Create(this, _T("Insurance Card Information"), 10, 120, 435, 255);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 260, 435, 450);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 310, 55);
	m_wndReportPeriod.Create(this,315, 30, 435, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 310, 85);
	m_wndToDate.Create(this,315, 60, 435, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 435, 115); 
	m_wndByDischargedDate.Create(this, _T("By Discharged Date"), 10, 455, 145, 480);
	m_wndUnapproved.Create(this, _T("Unapproved"), 150, 455, 290, 480);
	m_wndInsuranceApproval.Create(this, _T("Insurance Approval"), 295, 455, 435, 480);
	m_wndOnlyCommander.Create(this, _T("Only Commander"), 10, 485, 145, 510);
	m_wndSoldierPatient.Create(this, _T("Soldier Patient"), 150, 485, 290, 510);
	m_wndLockedDate.Create(this, _T("Locked Date"), 294, 485, 434, 510);
	m_wndPrint.Create(this, _T("&Print"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&Export"), 0, 0, 0, 0);
	m_wndExportForIns.Create(this, _T("Export for Ins"), 360, 551, 440, 576);	
	m_wndCardList.Create(this,15, 145, 430, 250); 
	m_wndDeptList.Create(this,15, 285, 430, 445); 
	m_wndOverceilMaterial.Create(this, _T("Overceil Material"), 10, 515, 145, 540);
	m_wndFilterLabel.Create(this, _T("Bộ Lọc"), 150, 515, 212, 540);
	m_wndphanloaibh.Create(this,217, 515, 434, 540);
	m_wnd79A.Create(this, _T("79A"), 10, 551, 90, 576);
	m_wnd80AIN.Create(this, _T("80A Nội"), 96, 551, 176, 576);
	m_wnd80AOUT.Create(this, _T("80A Ngoại"), 182, 551, 262, 576);
	m_wndAll.Create(this, _T("All"), 267, 551, 347, 576);*/
	m_wndReportCondition.Create(this, _T("Report Condtion"), 5, 5, 440, 521);
	m_wndInsuranceCardInfo.Create(this, _T("Insurance Card Information"), 10, 120, 435, 230);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 236, 435, 426);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 310, 55);
	m_wndReportPeriod.Create(this,315, 30, 435, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 310, 85);
	m_wndToDate.Create(this,315, 60, 435, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 435, 115); 
	m_wndByDischargedDate.Create(this, _T("By Discharged Date"), 12, 432, 147, 457);
	m_wndUnapproved.Create(this, _T("Unapproved"), 152, 432, 292, 457);
	m_wndInsuranceApproval.Create(this, _T("Insurance Approval"), 297, 432, 437, 457);
	m_wndOnlyCommander.Create(this, _T("Only Commander"), 11, 462, 146, 487);
	m_wndSoldierPatient.Create(this, _T("Soldier Patient"), 152, 462, 292, 487);
	m_wndLockedDate.Create(this, _T("Locked Date"), 296, 462, 436, 487);
	m_wndPrint.Create(this, _T("&Print"), 2, 3, 2, 3);
	m_wndExport.Create(this, _T("&Export"), 2, 3, 2, 3);
	m_wndExportForIns.Create(this, _T("Export for Ins"), 331, 591, 436, 616);
	m_wndCardList.Create(this,15, 145, 430, 226); 
	m_wndDeptList.Create(this,15, 261, 430, 421); 
	m_wndOverceilMaterial.Create(this, _T("Overceil Material"), 12, 492, 147, 517);
	m_wndphanloaibh.Create(this,219, 491, 436, 516); 
	m_wndFilterLabel.Create(this, _T("Bộ Lọc"), 152, 492, 214, 517);
	m_wnd79A.Create(this, _T("79A"), 10, 527, 100, 552);
	m_wnd80AIN.Create(this, _T("80A Nội"), 117, 527, 207, 552);
	m_wnd80AOUT.Create(this, _T("80A Ngoại"), 225, 527, 315, 552);
	m_wndAll.Create(this, _T("All"), 331, 526, 436, 551);
	m_wndChilaybndoiqt.Create(this, _T("Chỉ lấy BN đổi kỳ quyết toán"), 10, 558, 262, 583);
	m_wndKolaybndoiqt.Create(this, _T("Không lấy BN đổi kỳ quyết toán"), 10, 591, 262, 616);


	m_wndByDischargedDate.EnableWindow(false);
	m_wndUnapproved.EnableWindow(false);
	m_wndOverceilMaterial.EnableWindow(false);
	m_wndInsuranceApproval.EnableWindow(false);
	m_wndOnlyCommander.EnableWindow(false);
	m_wndSoldierPatient.EnableWindow(false);
	m_wndLockedDate.EnableWindow(false);
	//m_wndChilaybndoiqt.EnableWindow(false);
}
void CFMInsuranceCost79_80A::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(75);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 240);


	m_wndCardList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndCardList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 300);
	m_wndCardList.SetCheckBox(TRUE);


	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);

	m_wndphanloaibh.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndphanloaibh.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFMInsuranceCost79_80A::OnSetWindowEvents()
{
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
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
	m_wndByDischargedDate.SetEvent(WE_CLICK, _OnByDischargedDateSelectFnc);
	m_wndUnapproved.SetEvent(WE_CLICK, _OnUnapprovedSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndExportForIns.SetEvent(WE_CLICK, _OnExportForInsSelectFnc);
	m_wndCardList.SetEvent(WE_SELCHANGE, _OnCardListSelectChangeFnc);
	m_wndCardList.SetEvent(WE_LOADDATA, _OnCardListLoadDataFnc);
	m_wndCardList.SetEvent(WE_DBLCLICK, _OnCardListDblClickFnc);

	m_wnd79A.SetEvent(WE_CLICK, _On79ASelectFnc);
	m_wnd80AIN.SetEvent(WE_CLICK, _On80AINSelectFnc);
	m_wnd80AOUT.SetEvent(WE_CLICK, _On80AOUTSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);

	m_wndCardList.SetWindowText(_T(""));
	m_wndCardList.AddEvent(1, _T("Check All"), _OnCardListCheckAllFnc);
	m_wndCardList.AddEvent(2, _T("UnCheck All"), _OnCardListUnCheckAllFnc);

	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);

	m_wndDeptList.AddEvent(1, _T("Check All"), _OnDeptListCheckAllFnc);
	m_wndDeptList.AddEvent(2, _T("UnCheck All"), _OnDeptListUnCheckAllFnc);

	m_wndphanloaibh.SetEvent(WE_LOADDATA, _OnphanloaibhLoadDataFnc);
	m_wndChilaybndoiqt.SetEvent(WE_CLICK, _OnChilaybndoiqtSelectFnc);
	m_wndKolaybndoiqt.SetEvent(WE_CLICK, _OnKolaybndoiqtSelectFnc);

	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnDeptListLoadData();
	OnCardListLoadData();

}
void CFMInsuranceCost79_80A::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndByDischargedDate.GetDlgCtrlID(), m_bByDischargedDate);
	DDX_Check(pDX, m_wndUnapproved.GetDlgCtrlID(), m_bUnapproved);
	DDX_Check(pDX, m_wndInsuranceApproval.GetDlgCtrlID(), m_bInsuranceApproval);
	DDX_Check(pDX, m_wndOnlyCommander.GetDlgCtrlID(), m_bOnlyCommander);
	DDX_Check(pDX, m_wndSoldierPatient.GetDlgCtrlID(), m_bSoldierPatient);
	DDX_Check(pDX, m_wndLockedDate.GetDlgCtrlID(), m_bLockedDate);
	DDX_Check(pDX, m_wndOverceilMaterial.GetDlgCtrlID(), m_bOverceilMaterial);
	DDX_TextEx(pDX, m_wndphanloaibh.GetDlgCtrlID(), m_szphanloaibhKey);
	DDX_Radio(pDX, m_wnd79A.GetDlgCtrlID(), m_n79A);
	DDX_Radio(pDX, m_wnd80AIN.GetDlgCtrlID(), m_n80AIN);
	DDX_Radio(pDX, m_wnd80AOUT.GetDlgCtrlID(), m_n80AOUT);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Check(pDX, m_wndChilaybndoiqt.GetDlgCtrlID(), m_bChilaybndoiqt);
	DDX_Check(pDX, m_wndKolaybndoiqt.GetDlgCtrlID(), m_bKolaybndoiqt);

}
void CFMInsuranceCost79_80A::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsuranceCost79_80A::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsuranceCost79_80A::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bIsInsPurpose = FALSE;
	m_bByDischargedDate = FALSE;
	m_bUnapproved = FALSE;
	m_bInsuranceApproval = FALSE;
	m_bShowDiff = FALSE;
	m_bLockedDate = FALSE;
	m_bOverceilMaterial = FALSE;
	m_n79A=1;
	m_n80AIN=1;
	m_n80AOUT=1;
	m_nAll=0;
	m_bChilaybndoiqt=FALSE;
	m_bKolaybndoiqt=FALSE;
}
int CFMInsuranceCost79_80A::SetMode(int nMode){
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
/*void CFMInsuranceCost79_80A::OnYearChange(){
	
} */
/*void CFMInsuranceCost79_80A::OnYearSetfocus(){
	
} */
/*void CFMInsuranceCost79_80A::OnYearKillfocus(){
	
} */

void CFMInsuranceCost79_80A::OnChilaybndoiqtSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	ShowMessageBox(_T("Khi chọn option này + mẫu 2 -> chỉ lấy BN đổi kỳ quyết toán -> sẽ lấy theo thời gian như bên 3360!"), MB_OK | MB_ICONWARNING);
	m_bKolaybndoiqt = false;
	UpdateData(false);	
	
}
	void CFMInsuranceCost79_80A::OnKolaybndoiqtSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bChilaybndoiqt = false;
	UpdateData(false);		
}

int CFMInsuranceCost79_80A::OnYearCheckValue()
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
void CFMInsuranceCost79_80A::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceCost79_80A::OnReportPeriodSelendok()
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
/*void CFMInsuranceCost79_80A::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsuranceCost79_80A::OnReportPeriodKillfocus(){
	
}*/
long CFMInsuranceCost79_80A::OnReportPeriodLoadData()
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
/*void CFMInsuranceCost79_80A::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsuranceCost79_80A::OnFromDateChange(){
	
} */
/*void CFMInsuranceCost79_80A::OnFromDateSetfocus(){
	
} */
/*void CFMInsuranceCost79_80A::OnFromDateKillfocus(){
	
} */
int CFMInsuranceCost79_80A::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMInsuranceCost79_80A::OnToDateChange(){
	
} */
/*void CFMInsuranceCost79_80A::OnToDateSetfocus(){
	
} */
/*void CFMInsuranceCost79_80A::OnToDateKillfocus(){
	
} */
int CFMInsuranceCost79_80A::OnToDateCheckValue(){
	return 0;
} 
void CFMInsuranceCost79_80A::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceCost79_80A::OnClerkSelendok(){
	 
}
/*void CFMInsuranceCost79_80A::OnClerkSetfocus(){
	
}*/
/*void CFMInsuranceCost79_80A::OnClerkKillfocus(){
	
}*/
long CFMInsuranceCost79_80A::OnClerkLoadData()
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
/*void CFMInsuranceCost79_80A::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMInsuranceCost79_80A::OnphanloaibhLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndphanloaibh.AddItems(_T("BHBQP"), _T("Bảo hiểm BQP"), NULL);
	m_wndphanloaibh.AddItems(_T("BHHN"), _T("Bảo hiểm Hà Nội"), NULL);
	m_wndphanloaibh.AddItems(_T("ALL"), _T("Tất cả"), NULL);
	m_wndphanloaibh.AddItems(_T("***"), _T("***"), NULL);
	m_wndphanloaibh.AddItems(_T("B3A"), _T("Bệnh nhân ghép gan"), NULL);
	return 0;
}

void CFMInsuranceCost79_80A::OnByDischargedDateSelect(){
	UpdateData(true);
	if (m_bUnapproved)
		m_wndUnapproved.SetCheck(false);
}

void CFMInsuranceCost79_80A::OnUnapprovedSelect(){
	UpdateData(true);
	if (m_bByDischargedDate)
		m_wndByDischargedDate.SetCheck(false);
}

void CFMInsuranceCost79_80A::On79ASelect()
{	
	
	
}
void CFMInsuranceCost79_80A::On80AINSelect()
{	
	
	
}
void CFMInsuranceCost79_80A::On80AOUTSelect()
{
	
}
void CFMInsuranceCost79_80A::OnAllSelect()
{
	
}

void CFMInsuranceCost79_80A::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	TCHAR *lszLine[] ={_T("a) \x42\x1EC7nh nh\xE2n \x111\xFAng tuy\x1EBFn."),
		               _T("b) \x42\x1EC7nh nh\xE2n tr\xE1i tuy\x1EBFn.")};
	
	szSQL = GetQueryString();
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);

	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_BANGKETHANHTOAN_MAU80A.RPT")))
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
	double grpCost[26], grpLine[26], ttlCost[26], grpOfLine[26];
	double cost = 0;

	for (int i = 0; i < 26; i++)
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

			if (grpCost[11] > 0)
			{					
				TranslateString(_T("Total Group"), szAmount);

				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(11);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s)"), szAmount, szOldGroup);

				rptDetail->SetValue(_T("TotalGroup"), tmpStr);

				for (int i = 11; i < 26; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					//_msg(_T("%s"), tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					//grpLine[i] = 0;
					grpCost[i] = 0;
				}
			}

			if (grpLine[11] > 0)
			{
				TranslateString(_T("Total Line"), szAmount);

				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s)"), szAmount, szLineName);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				for (int i = 11; i < 26; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);		
					ttlCost[i] += grpLine[i];
					grpLine[i] = 0;
				}
			}

			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetFaceSize(11);
			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetBold(true);
			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetItalic(false);
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));

			rs.GetValue(_T("linename"), szLineName);
			rptDetail->SetValue(_T("GroupName"), szLineName + _T(". ") + pMF->GetSelectionString(_T("hms_insline"), szNewLine));
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
			if (grpCost[11] > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));

				tmpStr.Format(_T("%s (%s)"), szAmount, szOldGroup);

				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				for (int i = 11; i < 26; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);				
					grpCost[i] = 0;
				}
			}
			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetFaceSize(10);
			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetItalic(true);
			rpt.GetGroupHeader(1)->GetItem(_T("GroupName"))->SetBold(true);			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), szNewGroup + _T(". ") + pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
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

		rs.GetValue(_T("admitdate"), tmpStr);
		//tmpStr = CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("dischargedate"), tmpStr);
		//tmpStr = CDate::Convert(rs.GetValue(_T("dischargedate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("totaltreat"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("cost"), cost);
		grpCost[11] += cost;
		grpLine[11] += cost;
		//grpOfLine[9] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		
		rs.GetValue(_T("testfee"), cost);
		grpCost[12] += cost;
		grpLine[12] += cost;
		//grpOfLine[10] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[13] += cost;
		grpLine[13] += cost;
		//grpOfLine[11] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.GetValue(_T("drugfee"), cost);
		grpCost[14] += cost;
		grpLine[14] += cost;
		//grpOfLine[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		//grpOfLine[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);				

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[16] += cost;
		grpLine[16] += cost;
		//grpOfLine[14] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);
		
		rs.GetValue(_T("materialfee"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		//grpOfLine[15] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		rs.GetValue(_T("replace_materialfee"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		//grpOfLine[15] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[19] += cost;
		grpLine[19] += cost;
		//grpOfLine[17] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);		

		rs.GetValue(_T("drugfeek"), cost);
		grpCost[20] += cost;
		grpLine[20] += cost;
		//grpOfLine[18] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr);
		
		rs.GetValue(_T("bedfee"), cost);
		grpCost[21] += cost;
		grpLine[21] += cost;
		//grpOfLine[19] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);

		rs.GetValue(_T("transportfee"), cost);;
		grpCost[22] += cost;
		grpLine[22] += cost;
		//grpOfLine[19] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("22"), tmpStr);	

		rs.GetValue(_T("patpaid"), cost);
		grpCost[23] += cost;
		grpLine[23] += cost;
		//grpOfLine[21] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("23"), tmpStr);

		rs.GetValue(_T("inspaid"), cost);
		grpCost[24] += cost;
		grpLine[24] += cost;
		//grpOfLine[22] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("24"), tmpStr);
		
		rs.MoveNext();
	}

	for (int i = 11; i < 26; i++)
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

	if (grpCost[11] > 0)
	{
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"), szAmount, szOldGroup);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		for (int i = 11; i < 26; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	}

	if (grpLine[11] > 0)
	{		
		CString szField, szAmount;
		TranslateString(_T("Total Line"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(11);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"), szAmount, szLineName);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		for (int i = 11; i < 26; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	}

	if (ttlCost[11] > 0)
	{
		CString szField, szAmount;

		TranslateString(_T("Total Amount:"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(12);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		for (int i = 11; i < 26; i++)
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

void CFMInsuranceCost79_80A::OnExportForInsSelect()
{
	
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	menu.CreatePopupMenu();
	m_wndExportForIns.GetWindowRect(&rect);	
	TranslateString(_T("Export Excel biểu gộp 79_80AIN_80AOUT ***)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	TranslateString(_T("Export Danh sách bệnh nhân đổi kỳ quyết toán ***)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		m_bIsInsPurpose = true;
		OnExportSelect_6();
		m_bIsInsPurpose = false;
		break;
	case 2:
		m_bIsInsPurpose = true;
		OnExport7980();
		m_bIsInsPurpose = false;
		break;
	}	
}
void CFMInsuranceCost79_80A::OnExportDetailPatient()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal=0;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_80A.xls"))) AfxMessageBox(_T("Chưa có file này trong thu mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString_check();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("totalamount"), nTemp);
		ntotal += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);			
		nRow++;
		rs.MoveNext();
	}
	if (ntotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT, true);		
		xls.SetCellText(3, nRow, double2str(ntotal), FMT_NUMBER1, true);					
		nRow++;
	}
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_80A2.xls"));
}

void CFMInsuranceCost79_80A::OnExportDetailPatient21A()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal=0;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_80A_21A.xls"))) AfxMessageBox(_T("Chưa có file này trong thu mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString_check21A();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("totalamount"), nTemp);
		ntotal += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);			
		nRow++;
		rs.MoveNext();
	}
	if (ntotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT, true);		
		xls.SetCellText(3, nRow, double2str(ntotal), FMT_NUMBER1, true);					
		nRow++;
	}
	
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_80A2_21A2.xls"));
}

void CFMInsuranceCost79_80A::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szTemp, szFromDateToDate, szDate, szMonth, szYear;
	BeginWaitCursor();
	UpdateData();
	rs.ExecSQL(GetQueryString());
	//_msg(_T("%s"), GetQueryString());
	if (rs.IsEOF()){
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	CDate dt1, dt2;
	dt1.ParseDate(m_szFromDate);
	dt2.ParseDate(m_szToDate);
	if (dt1.GetYear() == dt2.GetYear()) szYear.Format(_T("%d"), dt1.GetYear());
	else szYear.Format(_T("%d"), dt2.GetYear());

	if (dt1.GetMonth() == dt2.GetMonth()) szMonth.Format(_T("%d"), dt1.GetMonth());
	else szMonth.Format(_T("%d"), dt2.GetMonth());
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 17);
	xls.SetColumnWidth(2, 7);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 16);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 24);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 8);
	xls.SetColumnWidth(18, 8);
	xls.SetColumnWidth(19, 8);
	xls.SetColumnWidth(20, 8);
	xls.SetColumnWidth(21, 8);
	xls.SetColumnWidth(22, 8);
	xls.SetColumnWidth(23, 8);
	xls.SetColumnWidth(24, 8);
	xls.SetColumnWidth(25, 6);
	xls.SetColumnWidth(26, 9);
	xls.SetColumnWidth(27, 6);
	xls.SetColumnWidth(28, 5);
	xls.SetColumnWidth(29, 6);
	xls.SetColumnWidth(30, 7);
	xls.SetColumnWidth(31, 10);
	xls.SetColumnWidth(32, 10);
	xls.SetColumnWidth(33, 44);
	xls.SetColumnWidth(34, 8);
	xls.SetColumnWidth(35, 9);
	xls.SetColumnWidth(36, 6);
	xls.SetColumnWidth(37, 8);
	xls.SetColumnWidth(38, 8);
	xls.SetColumnWidth(39, 6);
	xls.SetColumnWidth(40, 8);
	xls.SetColumnWidth(41, 8);
	xls.SetColumnWidth(42, 7);
	xls.SetColumnWidth(43, 5);
	xls.SetColumnWidth(46, 20);
	xls.SetColumnWidth(47, 10);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 5);
	xls.SetCellMergedColumns(37, 1, 7);
	xls.SetCellMergedColumns(37, 2, 7);
	xls.SetCellMergedColumns(0, 3, 44);
	xls.SetCellMergedColumns(0, 4, 44);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(37, 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(37, 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA TH\x41NH TO\xC1N \x43HI PH\xCD KH\xC1M \x43H\x1EEE\x41 \x42\x1EC6NH N\x1ED8I TR\xDA"), FMT_TEXT|FMT_CENTER, true, 18);
	TranslateString(_T("From Date"), tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	TranslateString(_T("To Date"), tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));	
	xls.SetCellText(0, 4, szFromDateToDate, FMT_TEXT | FMT_CENTER, true, 12);

	int nRow = 6, nCol = 0;
	xls.SetCellText(0, nRow, _T("stt"), FMT_TEXT);
	xls.SetCellText(1, nRow, _T("hoten"), FMT_TEXT);	
	xls.SetCellText(2, nRow, _T("namsinh"), FMT_TEXT);
	xls.SetCellText(3, nRow, _T("gioitinh"), FMT_TEXT);
	xls.SetCellText(4, nRow, _T("mathe"), FMT_TEXT);
	xls.SetCellText(5, nRow, _T("ma_dkbd"), FMT_TEXT);	
	xls.SetCellText(6, nRow, _T("mabenh"), FMT_TEXT);
	xls.SetCellText(7, nRow, _T("ngay_vao"), FMT_TEXT);
	xls.SetCellText(8, nRow, _T("ngay_ra"), FMT_TEXT);
	xls.SetCellText(9, nRow, _T("ngay_dtr"), FMT_TEXT);	
	xls.SetCellText(10, nRow, _T("t_tongchi"), FMT_TEXT);
	xls.SetCellText(11, nRow, _T("t_xn"), FMT_TEXT);	
	xls.SetCellText(12, nRow, _T("t_cdha"), FMT_TEXT);
	xls.SetCellText(13, nRow, _T("t_thuoc"), FMT_TEXT);
	xls.SetCellText(14, nRow, _T("t_mau"), FMT_TEXT);	
	xls.SetCellText(15, nRow, _T("t_pttt"), FMT_TEXT);
	xls.SetCellText(16, nRow, _T("t_vtytth"), FMT_TEXT);
	xls.SetCellText(17, nRow, _T("t_vtyttt"), FMT_TEXT);
	xls.SetCellText(18, nRow, _T("t_dvktc"), FMT_TEXT);	
	xls.SetCellText(19, nRow, _T("t_ktg"), FMT_TEXT);
	xls.SetCellText(20, nRow, _T("t_giuong"), FMT_TEXT);
	xls.SetCellText(21, nRow, _T("t_vchuyen"), FMT_TEXT);	
	xls.SetCellText(22, nRow, _T("t_bnct"), FMT_TEXT);	
	xls.SetCellText(23, nRow, _T("t_bhtt"), FMT_TEXT);
	xls.SetCellText(24, nRow, _T("t_ngoaids"), FMT_TEXT);
	xls.SetCellText(25, nRow, _T("lydo_vv"), FMT_TEXT);
	xls.SetCellText(26, nRow, _T("benhkhac"), FMT_TEXT);
	xls.SetCellText(27, nRow, _T("noikcb"), FMT_TEXT);
	xls.SetCellText(28, nRow, _T("khoa"), FMT_TEXT);
	xls.SetCellText(29, nRow, _T("nam_qt"), FMT_TEXT);
	xls.SetCellText(30, nRow, _T("thang_qt"), FMT_TEXT);
	xls.SetCellText(31, nRow, _T("gt_tu"), FMT_TEXT);
	xls.SetCellText(32, nRow, _T("gt_den"), FMT_TEXT);
	xls.SetCellText(33, nRow, _T("diachi"), FMT_TEXT);
	xls.SetCellText(34, nRow, _T("giamdinh"), FMT_TEXT);
	xls.SetCellText(35, nRow, _T("t_xuattoan"), FMT_TEXT);
	xls.SetCellText(36, nRow, _T("lydo_xt"), FMT_TEXT);
	xls.SetCellText(37, nRow, _T("t_datuyen"), FMT_TEXT);
	xls.SetCellText(38, nRow, _T("t_vuottran"), FMT_TEXT);
	xls.SetCellText(39, nRow, _T("loaikcb"), FMT_TEXT);
	xls.SetCellText(40, nRow, _T("noi_ttoan"), FMT_TEXT);
	xls.SetCellText(41, nRow, _T("sophieu"), FMT_TEXT);
	xls.SetCellText(42, nRow, _T("maicd10"), FMT_TEXT);
	xls.SetCellText(43, nRow, _T("tuyen"), FMT_TEXT);
	nCol = 44;
	if (m_bIsInsPurpose){
		xls.SetCellText(nCol++, nRow, _T("nhom"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("ngay_tt"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("tt_vtyttt"), FMT_TEXT);
	}
	if (m_bShowDiff) xls.SetCellText(nCol++, nRow, _T("chenh"), FMT_TEXT);
	if (m_bSoldierPatient){
		xls.SetCellText(nCol++, nRow, _T("ky_hieu"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("noi_lam_viec"), FMT_TEXT);
	}
	xls.SetCellText(nCol++, nRow, _T("t_vattuvt"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("t_bhttvt"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("t_vattuvtchenh"), FMT_TEXT);
	if (m_bShowDiff) xls.SetCellText(nCol++, nRow, _T("t_an"), FMT_TEXT);
	int nIndex = 1, nTemp = 0, nIncrement = 0;
	double nCost = 0;
	double nTotal[14];
	CellFormat xlsFormat(&xls);
	xlsFormat.SetCellStyle(FMT_INTEGER);
	CDate date;
	CString szNewLine, szOldLine;
	CString szNewGroup, szOldGroup;
	nCol = 0;//reinit
	for (int i = 0; i < 14; i++)
		nTotal[i] = 0;
	while (!rs.IsEOF()){
		if (!m_bIsInsPurpose)
			rs.GetValue(_T("insline"), szNewLine);
		if (szOldLine != szNewLine && !szNewLine.IsEmpty()){
			nRow++;
			xls.SetCellMergedColumns(nCol + 1, nRow, 9);
			rs.GetValue(_T("linename"), tmpStr);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
			szTemp.Format(_T("%s"), pMF->GetSelectionString(_T("hms_insline"), szNewLine));
			xls.SetCellText(nCol + 1, nRow, szTemp, FMT_TEXT, true);
			szOldLine = szNewLine;
			szOldGroup.Empty();
		}
		if (!m_bIsInsPurpose)
			rs.GetValue(_T("insgroup"), szNewGroup);

		if (szOldGroup != szNewGroup && !szNewGroup.IsEmpty()){
			nRow++;
			xls.SetCellText(nCol, nRow, szNewGroup, FMT_TEXT, true);
			xls.SetCellMergedColumns(nCol + 1, nRow, 9);
			tmpStr.Format(_T("%s"), pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nIndex = 1;
		}
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sex"), tmpStr);
		if (tmpStr == _T("F")){
			rs.GetValue(_T("fbirthyear"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER);
			xls.WriteNumber(nRow, nCol + 3, 2, &xlsFormat);
		}
		else{
			rs.GetValue(_T("mbirthyear"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER);

			xls.WriteNumber(nRow, nCol + 3, 1, &xlsFormat);
		}
		
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("regplace"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("admitdate"), tmpStr);
		//szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dischargedate"), tmpStr);
		//szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("totaltreat"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("inscost"), nCost);
		nTotal[0] += nCost;
		xls.WriteNumber(nRow, nCol + 10, nCost, &xlsFormat);

		rs.GetValue(_T("testfee"), nCost);
		nTotal[1] += nCost;
		xls.WriteNumber(nRow, nCol + 11, nCost, &xlsFormat);

		rs.GetValue(_T("pacsfee"), nCost);
		nTotal[2] += nCost;
		xls.WriteNumber(nRow, nCol + 12, nCost, &xlsFormat);

		rs.GetValue(_T("drugfee"), nCost);
		nTotal[3] += nCost;
		xls.WriteNumber(nRow, nCol + 13, nCost, &xlsFormat);

		rs.GetValue(_T("bloodfee"), nCost);
		nTotal[4] += nCost;
		xls.WriteNumber(nRow, nCol + 14, nCost, &xlsFormat);

		rs.GetValue(_T("normtechfee"), nCost);
		nTotal[5] += nCost;
		xls.WriteNumber(nRow, nCol + 15, nCost, &xlsFormat);

		rs.GetValue(_T("materialfee"), nCost);
		nTotal[6] += nCost;
		xls.WriteNumber(nRow, nCol + 16, nCost, &xlsFormat);

		rs.GetValue(_T("replace_materialfee"), nCost);
		nTotal[7] += nCost;
		xls.WriteNumber(nRow, nCol + 17, nCost, &xlsFormat);

		rs.GetValue(_T("hitechfee"), nCost);
		nTotal[8] += nCost;
		xls.WriteNumber(nRow, nCol + 18, nCost, &xlsFormat);

		rs.GetValue(_T("drugfeek"), nCost);
		nTotal[9] += nCost;
		xls.WriteNumber(nRow, nCol + 19, nCost, &xlsFormat);

		rs.GetValue(_T("bedfee"), nCost);
		nTotal[10] += nCost;
		xls.WriteNumber(nRow, nCol + 20, nCost, &xlsFormat);

		/*rs.GetValue(_T("transportfee"), nCost);
		xls.WriteNumber(nRow, nCol + 19, nCost, &xlsFormat);*/

		rs.GetValue(_T("inspatpaid"), nCost);
		nTotal[12] += nCost;
		xls.WriteNumber(nRow, nCol + 22, nCost, &xlsFormat);

		rs.GetValue(_T("inspaid"), nCost);
		nTotal[13] += nCost;
		xls.WriteNumber(nRow, nCol + 23, nCost, &xlsFormat);

		/*rs.GetValue(_T("ratefee"), nCost);
		xls.WriteNumber(nRow, nCol + 23, nCost, &xlsFormat);*/

		rs.GetValue(_T("emergency"), tmpStr);
		if (tmpStr == _T("Y")) nTemp = 2;
		else{
			rs.GetValue(_T("hdline"), tmpStr);
			if (tmpStr == _T("1")) nTemp = 0;
			else nTemp = 1;
		}
		
		xls.WriteNumber(nRow, nCol + 25, nTemp, &xlsFormat);

		rs.GetValue(_T("reldisease"), tmpStr);
		xls.SetCellText(nCol + 26, nRow, tmpStr, FMT_TEXT);

		tmpStr.Format(_T("%s"), pMF->m_CompanyInfo.sc_id);
		xls.SetCellText(nCol + 27, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol + 28, nRow, tmpStr, FMT_TEXT);

		nCost = ToDouble(szYear);
		xls.WriteNumber(nRow, nCol + 29, nCost, &xlsFormat);

		nCost = ToDouble(szMonth);
		xls.WriteNumber(nRow, nCol + 30, nCost, &xlsFormat);
		
		rs.GetValue(_T("regdate"), tmpStr);
		szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 31, nRow, szDate, FMT_DATE);

		rs.GetValue(_T("expdate"), tmpStr);
		szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 32, nRow, szDate, FMT_DATE);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 33, nRow, tmpStr, FMT_TEXT);

		xls.WriteNumber(nRow, nCol + 35, 0, &xlsFormat);

		xls.WriteNumber(nRow, nCol + 37, 0, &xlsFormat);
		xls.WriteNumber(nRow, nCol + 38, 0, &xlsFormat);

		xls.SetCellText(nCol + 39, nRow, _T("NOI"), FMT_TEXT);
		xls.SetCellText(nCol + 40, nRow, _T("\x43SK\x43\x42"), FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 41, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hcr_mainicd"), tmpStr);
		xls.SetCellText(nCol + 42, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("insline"), tmpStr);
		xls.SetCellText(nCol + 43, nRow, tmpStr, FMT_INTEGER);

		//xls.SetCellText(nCol + 40, nRow, _T("\x30\x31"), FMT_TEXT);
		nIncrement = 0;
		if (m_bIsInsPurpose){
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("insgroup")), FMT_TEXT);
			nIncrement++;
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("invoice_date")), FMT_TEXT);
			nIncrement++;
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("ref_materialfee")), FMT_NUMBER1);
			nIncrement++;
		}
		if (m_bShowDiff)
		{
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("diffpaid")), FMT_NUMBER1);
			nIncrement++;
		}
		if (m_bSoldierPatient){
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("soldier_rank")), FMT_TEXT);
			nIncrement++;             
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("work_place")), FMT_TEXT);
			nIncrement++;
		}
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_materialfee")), FMT_TEXT);
		nIncrement++;
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_discount")), FMT_TEXT);
		nIncrement++;
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_diffpaid")), FMT_TEXT);
		nIncrement++;
		if (m_bShowDiff){
			xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("food_fee")), FMT_TEXT);
			nIncrement++;
		}
		rs.MoveNext();
	}
	nRow++;
	xls.SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
	for (int i = 0; i < 14; i++){
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+10, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\ChiphikhambenhBHYT_80a.xls"));
	EndWaitCursor();
}

void CFMInsuranceCost79_80A::OnCardListDblClick()
{
	
} 
void CFMInsuranceCost79_80A::OnCardListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceCost79_80A::OnCardListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CFMInsuranceCost79_80A::OnCardListLoadData()
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

void CFMInsuranceCost79_80A::OnDeptListDblClick(){
	
} 
void CFMInsuranceCost79_80A::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceCost79_80A::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInsuranceCost79_80A::OnDeptListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndDeptList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type='DT' ORDER BY id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad();
	return nCount;
}
int CFMInsuranceCost79_80A::OnAddFMInsuranceCost80A(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsuranceCost79_80A::OnEditFMInsuranceCost80A(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsuranceCost79_80A::OnDeleteFMInsuranceCost80A(){
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
 		OnCancelFMInsuranceCost80A();
 	}
	return 0;
}
int CFMInsuranceCost79_80A::OnSaveFMInsuranceCost80A(){
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
 		//OnFMInsuranceCost80AListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMInsuranceCost79_80A::OnCancelFMInsuranceCost80A(){
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
int CFMInsuranceCost79_80A::OnFMInsuranceCost80AListLoadData(){
	return 0;
}

int CFMInsuranceCost79_80A::OnCardListCheckAll()
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

int CFMInsuranceCost79_80A::OnCardListUnCheckAll()
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

int CFMInsuranceCost79_80A::OnDeptListCheckAll()
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

int CFMInsuranceCost79_80A::OnDeptListUnCheckAll()
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

CString CFMInsuranceCost79_80A::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szSubSQL, szWhere, szSubWhere, szOrderBy, szTable, szObjectCondition, szHavingClause;
	CString szDepts, szCards;
	CString tmpStr, szTemp, szMaterialID;
	int nIndex = 0;

	szWhere.Empty();
	szSubWhere.Empty();
	szDepts.Empty();
	szCards.Empty();


	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND fi.hfe_staff='%s' "), m_szClerkKey);

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND fi.hfe_deptid IN(%s) "), szDepts);
	}

	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (m_wndCardList.GetCheck(i))
		{
			tmpStr = m_wndCardList.GetItemText(i, 0);
			if (tmpStr.Find(_T(',')) > -1)
				tmpStr.Replace(_T(","), _T("','"));
			if (!szCards.IsEmpty())
				szCards += _T(",");
			szCards.AppendFormat(_T("'%s'"), tmpStr);
		}
	}

	if (!szCards.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND substr(hd_cardno,1,2) IN(%s) "), szCards);
		//MessageBox(szCards);
	}
	szSQL.Format(_T("SELECT hsd_id id FROM hms_surgery_drugtype WHERE hsd_type = 'M'"));
	rs.ExecSQL(szSQL);
// 	while (!rs.IsEOF())
// 	{
// 		if (!szMaterialID.IsEmpty())
// 			szMaterialID += _T(", ");
// 		szMaterialID.AppendFormat(_T("'%s'"),rs.GetValue(_T("id")));
// 		rs.MoveNext();
// 	}
// 	if (!szMaterialID.IsEmpty())
// 		szMaterialID += _T(", ");
// 	szMaterialID += _T("'A1500', 'A1600'");
	szOrderBy = _T(" insline, insgroup, hdline, admitdate, docno, cardno)");
	if (m_bIsInsPurpose)
		szOrderBy = _T(" to_date(dischargedate, 'dd/mm/yyyy') , deptid, hp_surname, hp_midname, hp_firstname)");
	if (m_bByDischargedDate)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee IN ('P', 'Y') AND hcr_status='T'"), m_szFromDate, m_szToDate);
	else if (m_bUnapproved)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bInsuranceApproval)
		szWhere.AppendFormat(_T(" AND hfe_approveddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hfe_approved = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bLockedDate)
		szWhere.AppendFormat(_T(" AND fi.hfe_lockeddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							 _T(" AND fi.hfe_locked = 'Y'"), m_szFromDate, m_szToDate);
	else
		szWhere.AppendFormat(_T(" AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND fi.hfe_status = 'P'"), m_szFromDate, m_szToDate);
	if (m_bOnlyCommander)
		szSubWhere.AppendFormat(_T(" AND hd_rank IN (15, 16, 17, 18, 21, 22, 23, 24)"));
	szObjectCondition = _T(" AND ho_type IN ('I', 'C') AND hd_cardno IS NOT NULL");
	if (m_bSoldierPatient)
		szObjectCondition = _T(" AND hd_object = 1");
	szSubWhere += szObjectCondition;
	szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'X') <> 'Y' AND fe.hfe_group <> 'D0000'"));
	if (m_bOnlyCommander || (szCards == _T("'QN'")))
		m_bShowDiff = true;
	else
		m_bShowDiff = false;
	//Hien chenh lech tat ca doi tuong
	m_bShowDiff = true;
	if (m_bOverceilMaterial)
		szHavingClause.Format(_T(" AND SUM(l_materialfee) > 0"));
	if (m_bShowDiff)
		szSubSQL.Format(_T("UNION ALL") \
				_T("		SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fe.hfe_object    AS objectid,") \
				//_T("         fi.hfe_objectid    AS objectid,") \//
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') ") \
				_T("		 THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
				_T("		 ELSE 0 END AS diffpaid, 0, 0, 0, (CASE WHEN fe.hfe_type = 'F' THEN fe.hfe_patpaid ELSE 0 END) food_fee") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno  AND hcrf_invoicefee = fi.hfe_invoiceno)") \
				//_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno)") \//
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount = 0 AND fe.hfe_category NOT IN ('Y', 'COV')") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("    %s"), szWhere);
    szSQL.Format(_T(" SELECT ") \
				_T(" docno,invoiceno,pname,mbirthyear,fbirthyear,sex,address,reldisease,cardno,regdate,expdate,hdline,regplace,insline,soldier_rank,work_place,linename,insgroup,") \
				_T(" admitdate,dischargedate,totaltreat,hcr_mainicd,icd10,emergency,deptid,invoice_date,") \
				_T(" inscost,drugfee,drugfeek,bloodfee,testfee,pacsfee,normtechfee,hitechfee,materialfee,replace_materialfee,ref_materialfee,bedfee,transportfee,") \
				_T(" cost,otherfee,scoliosisfee,l_materialfee,l_discount,l_diffpaid,inspaid,patpaid,diffpaid,food_fee,inscost-inspaid AS inspatpaid") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT hd_docno AS docno,") \
				_T("        max(invoiceno) AS invoiceno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname,") \
				_T("        case when hp_sex='M' then extract(year from hp_birthdate) else 0 end AS mbirthyear,") \
				_T("        case when hp_sex='F' then extract(year from hp_birthdate) else 0 end AS fbirthyear,") \
				_T("        hp_sex AS sex,") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
				_T("        hcr_reldisease as reldisease,") \
				_T("        CASE WHEN LENGTH(hc_cardno) > 15 THEN SUBSTR(hc_cardno,1,15) ELSE hc_cardno END AS cardno,") \
				_T("        hc_regdate AS regdate,") \
				_T("        hc_expdate AS expdate,") \
				_T("        CASE WHEN hd_insline='Y' THEN 1 ELSE 0 END AS hdline,") \
				_T("        hc_regcode AS regplace,") \
				_T("        hc_line AS insline,") \
				_T("		get_syssel_desc('hms_rank', hd_rank) soldier_rank,") \
				_T("		hp_workplace work_place,") \
				_T("		DECODE(hc_line, 1, 'A', 2, 'B', 3, 'C') AS linename,") \
				_T("        hig_group AS insgroup,") \
				_T("        TO_CHAR(hcr_admitdate, 'DD/MM/YYYY') AS admitdate,") \
				_T("        TO_CHAR(hcr_dischargedate, 'DD/MM/YYYY') AS dischargedate,") \
				_T("        hcr_sumtreat AS totaltreat,") \
				_T("        hcr_mainicd,") \
				_T("        hcr_maindisease AS icd10,") \
				_T("        hd_emergency AS emergency,") \
				_T("        lower(deptid) AS deptid,") \
				_T("		TO_CHAR(invoice_date, 'DD/MM/YYYY') invoice_date,") \
				_T("		round(SUM(drugfee+drugfeek+bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee+transportfee)) AS inscost,") \
				_T("        round(SUM(drugfee)) AS drugfee,") \
				_T("        round(SUM(drugfeek)) AS drugfeek,") \
				_T("        round(SUM(bloodfee)) AS bloodfee,") \
				_T("        round(SUM(testfee)) AS testfee,") \
				_T("        round(SUM(pacsfee)) AS pacsfee,") \
				_T("        round(SUM(normtechfee)) AS normtechfee,") \
				_T("        round(SUM(hitechfee)) AS hitechfee,") \
				_T("        round(SUM(materialfee)) AS materialfee,") \
				_T("        round(SUM(replace_materialfee)) AS replace_materialfee,") \
				_T("        round(SUM(ref_materialfee)) AS ref_materialfee,") \
				_T("        round(SUM(bedfee)) AS bedfee,") \
				_T("        round(SUM(transportfee)) AS transportfee,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid)) ELSE ROUND(SUM(inspaid)) END AS cost,") \
				_T("        round(SUM(otherfee)) AS otherfee,") \
				_T("		round(SUM(scoliosisfee)) scoliosisfee,") \
				_T("		round(SUM(l_materialfee)) l_materialfee,") \
				_T("		round(SUM(l_discount)) l_discount,") \
				_T("		round(SUM(l_materialfee - l_discount)) l_diffpaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_discount)) ELSE ROUND(SUM(discount)) END AS inspaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid - v_discount)) ELSE ROUND(SUM(inspaid-discount)) END AS patpaid,") \
				_T("		round(SUM(diffpaid)) AS diffpaid,") \
				_T("		round(SUM(food_fee)) AS food_fee") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6') AND fe.hfe_group NOT IN ('A1400', 'A1500', 'A1600') THEN fe.hfe_inspaid ELSE 0 END AS drugfee,") \
				_T("         CASE WHEN fe.hfe_group='A1400' THEN fe.hfe_inspaid ELSE 0 END AS drugfeek,") \
				_T("         CASE WHEN (NVL(hfl_bloodfee, 'X') = 'Y' OR fe.hfe_group='A2000') THEN fe.hfe_inspaid ELSE 0 END AS bloodfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2)='B1' AND NVL(hfl_bloodfee, 'X') <> 'Y'") \
				_T("		 AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS testfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS pacsfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS normtechfee,") \
				_T("         CASE WHEN fe.hfe_hitech='Y' THEN fe.hfe_inspaid ELSE 0 END AS hitechfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS replace_materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_cost ELSE 0 END AS ref_materialfee,") \
				_T("         CASE WHEN fe.hfe_group='C0000' THEN fe.hfe_inspaid ELSE 0 END AS bedfee,") \
				_T("         CASE WHEN fe.hfe_group='E0000' THEN fe.hfe_inspaid ELSE 0 END AS transportfee,") \
				_T("         CASE WHEN fe.hfe_group='F0000' THEN fe.hfe_inspaid ELSE 0 END AS otherfee,") \
				_T("		 0 scoliosisfee,") \
				_T("		 CASE WHEN fe.hfe_feegroup = 'OPT_L' AND fe.hfe_type = 'D' THEN fe.hfe_inspaid ELSE 0 END l_materialfee,") \
				_T("		 0 l_discount, ") \
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_inspaid ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_diffcost ELSE 0 END diffpaid, 0 is_scoliosis, 0 v_inspaid, 0 v_discount, 0 food_fee ") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno  AND hcrf_invoicefee = fi.hfe_invoiceno)") \
				//_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno)") \//
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y'") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("   %s") \
				_T("   UNION ALL") \
				_T("   SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("		 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN fe.hfe_discount ELSE 0 END,") \
				_T("		 0, CASE WHEN NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END,")
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount / hd_disrate * 100 ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 0 ELSE fe.hfe_diffcost END diffpaid,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END is_scoliosis, fe.hfe_discount / hd_disrate * 100 AS hfe_inspaid, fe.hfe_discount, 0 food_fee") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND hcrf_invoicefee = fi.hfe_invoiceno)") \
				//_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno)") \//
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_operation ON (ho_docno = hcr_docno AND ho_itemid = hfe_subgroup AND ho_idx = hfe_orderid)") \
				_T("   LEFT JOIN hms_doc ON(hd_docno = hcr_docno)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y'") \
				_T("         AND fe.hfe_type = 'V' ") \
				_T("   %s %s") \
				_T(" ) tbl") \
				_T(" LEFT JOIN hms_doc ON(docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
				_T(" LEFT JOIN hms_object ON(ho_id=objectid)") \
				_T(" LEFT JOIN hms_icd ON(hcr_mainicd=hi_icd)") \
				_T(" LEFT JOIN hms_insurance_group ON (hig_idx= hc_groupid)") \
				_T(" WHERE 1=1 ") \
				_T(" %s") \
				_T(" GROUP BY hd_docno, hp_surname, hp_midname, hp_firstname, hp_birthdate, hp_sex, hc_cardno, hd_insline, hd_rank, hp_workplace,") \
				_T("		  hc_groupid, hc_line, hd_insline, hc_regcode, hcr_mainicd, hcr_maindisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		  hcr_sumtreat, hp_provid, hp_distid, hp_villid, hc_regdate, hc_expdate, hcr_reldisease, hi_name, ") \
				_T("		  hd_emergency, deptid, hd_admitdept, invoice_date, hig_group") \
				_T(" HAVING SUM(cost) > 0 AND SUM(inspaid-discount) >= 0 ") \
				_T(" %s") \
				_T(" ORDER BY ") \
				_T(" %s"), szWhere, szWhere, szSubSQL, szSubWhere, szHavingClause, szOrderBy);
				//_msg(_T("%s"), szSQL);

	return szSQL;
}

CString CFMInsuranceCost79_80A::GetQueryString_New(){
	CString szSQL;
	return szSQL;
}

void CFMInsuranceCost79_80A::GetDataFiltering(CString& szWhere, CString& szOrderBy, CString& szHavingClause, CString& szMaterialID){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szObjectCondition, szCards, szDepts, tmpStr;
	CRecord rs(&pMF->m_db);
	szWhere.Empty();
	szOrderBy.Empty();
	szHavingClause.Empty();
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND tbl.hfe_staff='%s' "), m_szClerkKey);

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND tbl.deptid IN(%s) "), szDepts);
	}
	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (m_wndCardList.GetCheck(i))
		{
			tmpStr = m_wndCardList.GetItemText(i, 0);
			if (tmpStr.Find(_T(',')) > -1)
				tmpStr.Replace(_T(","), _T("','"));
			if (!szCards.IsEmpty())
				szCards += _T(",");
			szCards.AppendFormat(_T("'%s'"), tmpStr);
		}
	}

	if (!szCards.IsEmpty())
		szWhere.AppendFormat(_T(" AND substr(hd_cardno,1,2) IN(%s) "), szCards);
	szSQL.Format(_T("SELECT hsd_id id FROM hms_surgery_drugtype WHERE hsd_type = 'M'"));
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		if (!szMaterialID.IsEmpty())
			szMaterialID += _T(", ");
		szMaterialID.AppendFormat(_T("'%s'"),rs.GetValue(_T("id")));
		rs.MoveNext();
	}
	if (!szMaterialID.IsEmpty())
		szMaterialID += _T(", ");
	szMaterialID += _T("'A1500', 'A1600'");
	szOrderBy = _T(" insline, insgroup, hdline, admitdate, docno, cardno");
	if (m_bIsInsPurpose)
		szOrderBy = _T(" to_date(dischargedate, 'dd/mm/yyyy') , deptid, hp_surname, hp_midname, hp_firstname");	
	if (m_bByDischargedDate)
		szWhere.AppendFormat(_T(" AND tbl.hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND tbl.hcrf_acceptedfee IN ('P', 'Y')"), m_szFromDate, m_szToDate);
	else if (m_bUnapproved)
		szWhere.AppendFormat(_T(" AND tbl.hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND tbl.hcrf_acceptedfee = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bInsuranceApproval)
		szWhere.AppendFormat(_T(" AND tbl.hfe_approveddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND tbl.hfe_approved = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bLockedDate)
		szWhere.AppendFormat(_T(" AND tbl.hfe_lockeddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							 _T(" AND tbl.hfe_locked = 'Y'"), m_szFromDate, m_szToDate);
	else
		szWhere.AppendFormat(_T(" AND tbl.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND tbl.hfe_status = 'P'"), m_szFromDate, m_szToDate);
	if (m_bOnlyCommander)
		szWhere.AppendFormat(_T(" AND hd_rank IN (15, 16, 17, 18, 21, 22, 23, 24)"));
	szObjectCondition = _T(" AND ho_type IN ('I', 'C') AND hc_cardno IS NOT NULL");
	if (m_bSoldierPatient)
		szObjectCondition = _T(" AND hd_object = 1");
	szWhere += szObjectCondition;
	szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'X') <> 'Y' AND fe.hfe_group <> 'D0000'"));
}

CString CFMInsuranceCost79_80A::GetMainQuery(){
	CString szSQL;

	return szSQL;
}

CString CFMInsuranceCost79_80A::GetQueryString_check()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szSubSQL, szWhere, szSubWhere, szOrderBy, szTable, szObjectCondition, szHavingClause;
	CString szDepts, szCards;
	CString tmpStr, szTemp, szMaterialID;
	int nIndex = 0;

	szWhere.Empty();
	szSubWhere.Empty();
	szDepts.Empty();
	szCards.Empty();


	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND fi.hfe_staff='%s' "), m_szClerkKey);

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND fi.hfe_deptid IN(%s) "), szDepts);
	}

	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (m_wndCardList.GetCheck(i))
		{
			tmpStr = m_wndCardList.GetItemText(i, 0);
			if (tmpStr.Find(_T(',')) > -1)
				tmpStr.Replace(_T(","), _T("','"));
			if (!szCards.IsEmpty())
				szCards += _T(",");
			szCards.AppendFormat(_T("'%s'"), tmpStr);
		}
	}

	if (!szCards.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND substr(hd_cardno,1,2) IN(%s) "), szCards);
		//MessageBox(szCards);
	}
	szSQL.Format(_T("SELECT hsd_id id FROM hms_surgery_drugtype WHERE hsd_type = 'M'"));
	rs.ExecSQL(szSQL);
// 	while (!rs.IsEOF())
// 	{
// 		if (!szMaterialID.IsEmpty())
// 			szMaterialID += _T(", ");
// 		szMaterialID.AppendFormat(_T("'%s'"),rs.GetValue(_T("id")));
// 		rs.MoveNext();
// 	}
// 	if (!szMaterialID.IsEmpty())
// 		szMaterialID += _T(", ");
// 	szMaterialID += _T("'A1500', 'A1600'");
	szOrderBy = _T(" insline, insgroup, hdline, admitdate, docno, cardno)");
	if (m_bIsInsPurpose)
		szOrderBy = _T(" to_date(dischargedate, 'dd/mm/yyyy') , deptid, hp_surname, hp_midname, hp_firstname)");
	if (m_bByDischargedDate)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee IN ('P', 'Y') and hcr_status='T'"), m_szFromDate, m_szToDate);
	else if (m_bUnapproved)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bInsuranceApproval)
		szWhere.AppendFormat(_T(" AND hfe_approveddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hfe_approved = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bLockedDate)
		szWhere.AppendFormat(_T(" AND fi.hfe_lockeddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							 _T(" AND fi.hfe_locked = 'Y'"), m_szFromDate, m_szToDate);
	else
		szWhere.AppendFormat(_T(" AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND fi.hfe_status = 'P'"), m_szFromDate, m_szToDate);
	if (m_bOnlyCommander)
		szSubWhere.AppendFormat(_T(" AND hd_rank IN (15, 16, 17, 18, 21, 22, 23, 24)"));
	szObjectCondition = _T(" AND ho_type IN ('I', 'C') AND hd_cardno IS NOT NULL");
	if (m_bSoldierPatient)
		szObjectCondition = _T(" AND hd_object = 1");
	szSubWhere += szObjectCondition;
	szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'X') <> 'Y' AND fe.hfe_group <> 'D0000'"));
	if (m_bOnlyCommander || (szCards == _T("'QN'")))
		m_bShowDiff = true;
	else
		m_bShowDiff = false;
	//Hien chenh lech tat ca doi tuong
	m_bShowDiff = true;
	if (m_bOverceilMaterial)
		szHavingClause.Format(_T(" AND SUM(l_materialfee) > 0"));
	if (m_bShowDiff)
		szSubSQL.Format(_T("UNION ALL") \
				_T("		SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid    AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') ") \
				_T("		 THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
				_T("		 ELSE 0 END AS diffpaid, 0, 0, 0, (CASE WHEN fe.hfe_type = 'F' THEN fe.hfe_patpaid ELSE 0 END) food_fee") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount = 0 AND fe.hfe_category <> 'Y' AND htr_status='T'") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("    %s"), szWhere);
	szSQL.Format(_T(" select ") \
				_T(" docno,") \
				_T(" pname,") \
				_T(" sum (drugfee+drugfeek+bloodfee) as totalamount") \
				_T(" From") \
				_T(" (") \
				_T(" select ") \
				_T(" docno,") \
				_T(" pname,") \
				_T(" drugfee,drugfeek,bloodfee") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT ") \
				_T(" docno,invoiceno,pname,mbirthyear,fbirthyear,sex,address,reldisease,cardno,regdate,expdate,hdline,regplace,insline,soldier_rank,work_place,linename,insgroup,") \
				_T(" admitdate,dischargedate,totaltreat,hcr_mainicd,icd10,emergency,deptid,invoice_date,") \
				_T(" inscost,drugfee,drugfeek,bloodfee,testfee,pacsfee,normtechfee,hitechfee,materialfee,replace_materialfee,ref_materialfee,bedfee,transportfee,") \
				_T(" cost,otherfee,scoliosisfee,l_materialfee,l_discount,l_diffpaid,inspaid,patpaid,diffpaid,food_fee,inscost-inspaid AS inspatpaid") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT hd_docno AS docno,") \
				_T("        max(invoiceno) AS invoiceno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname,") \
				_T("        case when hp_sex='M' then extract(year from hp_birthdate) else 0 end AS mbirthyear,") \
				_T("        case when hp_sex='F' then extract(year from hp_birthdate) else 0 end AS fbirthyear,") \
				_T("        hp_sex AS sex,") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
				_T("        hcr_reldisease as reldisease,") \
				_T("        CASE WHEN LENGTH(hc_cardno) > 15 THEN SUBSTR(hc_cardno,1,15) ELSE hc_cardno END AS cardno,") \
				_T("        hc_regdate AS regdate,") \
				_T("        hc_expdate AS expdate,") \
				_T("        CASE WHEN hd_insline='Y' THEN 1 ELSE 0 END AS hdline,") \
				_T("        hc_regcode AS regplace,") \
				_T("        hc_line AS insline,") \
				_T("		get_syssel_desc('hms_rank', hd_rank) soldier_rank,") \
				_T("		hp_workplace work_place,") \
				_T("		DECODE(hc_line, 1, 'A', 2, 'B', 3, 'C') AS linename,") \
				_T("        hig_group AS insgroup,") \
				_T("        TO_CHAR(hcr_admitdate, 'DD/MM/YYYY') AS admitdate,") \
				_T("        TO_CHAR(hcr_dischargedate, 'DD/MM/YYYY') AS dischargedate,") \
				_T("        hcr_sumtreat AS totaltreat,") \
				_T("        hcr_mainicd,") \
				_T("        hcr_maindisease AS icd10,") \
				_T("        hd_emergency AS emergency,") \
				_T("        lower(deptid) AS deptid,") \
				_T("		TO_CHAR(invoice_date, 'DD/MM/YYYY') invoice_date,") \
				_T("		round(SUM(drugfee+drugfeek+bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee+transportfee)) AS inscost,") \
				_T("        round(SUM(drugfee)) AS drugfee,") \
				_T("        round(SUM(drugfeek)) AS drugfeek,") \
				_T("        round(SUM(bloodfee)) AS bloodfee,") \
				_T("        round(SUM(testfee)) AS testfee,") \
				_T("        round(SUM(pacsfee)) AS pacsfee,") \
				_T("        round(SUM(normtechfee)) AS normtechfee,") \
				_T("        round(SUM(hitechfee)) AS hitechfee,") \
				_T("        round(SUM(materialfee)) AS materialfee,") \
				_T("        round(SUM(replace_materialfee)) AS replace_materialfee,") \
				_T("        round(SUM(ref_materialfee)) AS ref_materialfee,") \
				_T("        round(SUM(bedfee)) AS bedfee,") \
				_T("        round(SUM(transportfee)) AS transportfee,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid)) ELSE ROUND(SUM(inspaid)) END AS cost,") \
				_T("        round(SUM(otherfee)) AS otherfee,") \
				_T("		round(SUM(scoliosisfee)) scoliosisfee,") \
				_T("		round(SUM(l_materialfee)) l_materialfee,") \
				_T("		round(SUM(l_discount)) l_discount,") \
				_T("		round(SUM(l_materialfee - l_discount)) l_diffpaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_discount)) ELSE ROUND(SUM(discount)) END AS inspaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid - v_discount)) ELSE ROUND(SUM(inspaid-discount)) END AS patpaid,") \
				_T("		round(SUM(diffpaid)) AS diffpaid,") \
				_T("		round(SUM(food_fee)) AS food_fee") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid    AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6') AND fe.hfe_group NOT IN ('A1400', 'A1500', 'A1600') THEN fe.hfe_inspaid ELSE 0 END AS drugfee,") \
				_T("         CASE WHEN fe.hfe_group='A1400' THEN fe.hfe_inspaid ELSE 0 END AS drugfeek,") \
				_T("         CASE WHEN (NVL(hfl_bloodfee, 'X') = 'Y' OR fe.hfe_group='A2000') THEN fe.hfe_inspaid ELSE 0 END AS bloodfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2)='B1' AND NVL(hfl_bloodfee, 'X') <> 'Y'") \
				_T("		 AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS testfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS pacsfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS normtechfee,") \
				_T("         CASE WHEN fe.hfe_hitech='Y' THEN fe.hfe_inspaid ELSE 0 END AS hitechfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS replace_materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_cost ELSE 0 END AS ref_materialfee,") \
				_T("         CASE WHEN fe.hfe_group='C0000' THEN fe.hfe_inspaid ELSE 0 END AS bedfee,") \
				_T("         CASE WHEN fe.hfe_group='E0000' THEN fe.hfe_inspaid ELSE 0 END AS transportfee,") \
				_T("         CASE WHEN fe.hfe_group='F0000' THEN fe.hfe_inspaid ELSE 0 END AS otherfee,") \
				_T("		 0 scoliosisfee,") \
				_T("		 CASE WHEN fe.hfe_feegroup = 'OPT_L' AND fe.hfe_type = 'D' THEN fe.hfe_inspaid ELSE 0 END l_materialfee,") \
				_T("		 0 l_discount, ") \
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_inspaid ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_diffcost ELSE 0 END diffpaid, 0 is_scoliosis, 0 v_inspaid, 0 v_discount, 0 food_fee ") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y' and htr_status='T'") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("   %s") \
				_T("   UNION ALL") \
				_T("   SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid    AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("		 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN fe.hfe_discount ELSE 0 END,") \
				_T("		 0, CASE WHEN NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END,")
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount / hd_disrate * 100 ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 0 ELSE fe.hfe_diffcost END diffpaid,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END is_scoliosis, fe.hfe_discount / hd_disrate * 100 AS hfe_inspaid, fe.hfe_discount, 0 food_fee") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_operation ON (ho_docno = hcr_docno AND ho_itemid = hfe_subgroup AND ho_idx = hfe_orderid)") \
				_T("   LEFT JOIN hms_doc ON(hd_docno = hcr_docno)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y' and htr_status='T'") \
				_T("         AND fe.hfe_type = 'V' ") \
				_T("   %s %s") \
				_T(" ) tbl") \
				_T(" LEFT JOIN hms_doc ON(docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
				_T(" LEFT JOIN hms_object ON(ho_id=objectid)") \
				_T(" LEFT JOIN hms_icd ON(hcr_mainicd=hi_icd)") \
				_T(" LEFT JOIN hms_insurance_group ON (hig_idx= hc_groupid)") \
				_T(" WHERE 1=1 ") \
				_T(" %s") \
				_T(" GROUP BY hd_docno, hp_surname, hp_midname, hp_firstname, hp_birthdate, hp_sex, hc_cardno, hd_insline, hd_rank, hp_workplace,") \
				_T("		  hc_groupid, hc_line, hd_insline, hc_regcode, hcr_mainicd, hcr_maindisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		  hcr_sumtreat, hp_provid, hp_distid, hp_villid, hc_regdate, hc_expdate, hcr_reldisease, hi_name, ") \
				_T("		  hd_emergency, deptid, hd_admitdept, invoice_date, hig_group") \
				_T(" HAVING SUM(cost) > 0 AND SUM(inspaid-discount) >= 0 ") \
				_T(" %s") \
				_T(" ORDER BY ") \
				_T(" %s") \
				_T("  )tmp") \
				_T("   WHERE (drugfee+drugfeek+bloodfee)>0 ") \
				_T("   order by docno, pname") \
				_T("   )tmp") \
				_T("   group by docno, pname") \
				_T("   order by docno, pname,totalamount "), szWhere, szWhere, szSubSQL, szSubWhere, szHavingClause, szOrderBy);
//_msg(_T("%s"), szSQL);
	return szSQL;	
}
CString CFMInsuranceCost79_80A::GetQueryString_check21A()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szSubSQL, szWhere, szSubWhere, szOrderBy, szTable, szObjectCondition, szHavingClause;
	CString szDepts, szCards;
	CString tmpStr, szTemp, szMaterialID;
	int nIndex = 0;

	szWhere.Empty();
	szSubWhere.Empty();
	szDepts.Empty();
	szCards.Empty();


	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND fi.hfe_staff='%s' "), m_szClerkKey);

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND fi.hfe_deptid IN(%s) "), szDepts);
	}

	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (m_wndCardList.GetCheck(i))
		{
			tmpStr = m_wndCardList.GetItemText(i, 0);
			if (tmpStr.Find(_T(',')) > -1)
				tmpStr.Replace(_T(","), _T("','"));
			if (!szCards.IsEmpty())
				szCards += _T(",");
			szCards.AppendFormat(_T("'%s'"), tmpStr);
		}
	}

	if (!szCards.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND substr(hd_cardno,1,2) IN(%s) "), szCards);
		//MessageBox(szCards);
	}
	szSQL.Format(_T("SELECT hsd_id id FROM hms_surgery_drugtype WHERE hsd_type = 'M'"));
	rs.ExecSQL(szSQL);
// 	while (!rs.IsEOF())
// 	{
// 		if (!szMaterialID.IsEmpty())
// 			szMaterialID += _T(", ");
// 		szMaterialID.AppendFormat(_T("'%s'"),rs.GetValue(_T("id")));
// 		rs.MoveNext();
// 	}
// 	if (!szMaterialID.IsEmpty())
// 		szMaterialID += _T(", ");
// 	szMaterialID += _T("'A1500', 'A1600'");
	szOrderBy = _T(" insline, insgroup, hdline, admitdate, docno, cardno)");
	if (m_bIsInsPurpose)
		szOrderBy = _T(" to_date(dischargedate, 'dd/mm/yyyy') , deptid, hp_surname, hp_midname, hp_firstname)");
	if (m_bByDischargedDate)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee IN ('P', 'Y') and hcr_status='T'"), m_szFromDate, m_szToDate);
	else if (m_bUnapproved)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bInsuranceApproval)
		szWhere.AppendFormat(_T(" AND hfe_approveddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hfe_approved = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bLockedDate)
		szWhere.AppendFormat(_T(" AND fi.hfe_lockeddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							 _T(" AND fi.hfe_locked = 'Y'"), m_szFromDate, m_szToDate);
	else
		szWhere.AppendFormat(_T(" AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND fi.hfe_status = 'P'"), m_szFromDate, m_szToDate);
	if (m_bOnlyCommander)
		szSubWhere.AppendFormat(_T(" AND hd_rank IN (15, 16, 17, 18, 21, 22, 23, 24)"));
	szObjectCondition = _T(" AND ho_type IN ('I', 'C') AND hd_cardno IS NOT NULL");
	if (m_bSoldierPatient)
		szObjectCondition = _T(" AND hd_object = 1");
	szSubWhere += szObjectCondition;
	szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'X') <> 'Y' AND fe.hfe_group <> 'D0000'"));
	if (m_bOnlyCommander || (szCards == _T("'QN'")))
		m_bShowDiff = true;
	else
		m_bShowDiff = false;
	//Hien chenh lech tat ca doi tuong
	m_bShowDiff = true;
	if (m_bOverceilMaterial)
		szHavingClause.Format(_T(" AND SUM(l_materialfee) > 0"));
	if (m_bShowDiff)
		szSubSQL.Format(_T("UNION ALL") \
				_T("		SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fe.hfe_object    AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') ") \
				_T("		 THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
				_T("		 ELSE 0 END AS diffpaid, 0, 0, 0, (CASE WHEN fe.hfe_type = 'F' THEN fe.hfe_patpaid ELSE 0 END) food_fee") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
				//_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno  AND hcrf_invoicefee = fi.hfe_invoiceno)") \//
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				//_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount = 0 AND fe.hfe_category <> 'Y' AND hcr_status='T'") \//
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount = 0 AND fe.hfe_category <> 'Y'") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("    %s"), szWhere);
	szSQL.Format(_T(" select ") \
				_T(" docno,") \
				_T(" pname,") \
				_T(" sum(bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee+transportfee) as totalamount") \
				_T(" From") \
				_T(" (") \
				_T(" select ") \
				_T(" docno,") \
				_T(" pname,") \
				_T(" bloodfee, testfee, pacsfee, normtechfee, hitechfee, materialfee, replace_materialfee, bedfee, transportfee") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT ") \
				_T(" docno,invoiceno,pname,mbirthyear,fbirthyear,sex,address,reldisease,cardno,regdate,expdate,hdline,regplace,insline,soldier_rank,work_place,linename,insgroup,") \
				_T(" admitdate,dischargedate,totaltreat,hcr_mainicd,icd10,emergency,deptid,invoice_date,") \
				_T(" inscost,drugfee,drugfeek,bloodfee,testfee,pacsfee,normtechfee,hitechfee,materialfee,replace_materialfee,ref_materialfee,bedfee,transportfee,") \
				_T(" cost,otherfee,scoliosisfee,l_materialfee,l_discount,l_diffpaid,inspaid,patpaid,diffpaid,food_fee,inscost-inspaid AS inspatpaid") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT hd_docno AS docno,") \
				_T("        max(invoiceno) AS invoiceno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname,") \
				_T("        case when hp_sex='M' then extract(year from hp_birthdate) else 0 end AS mbirthyear,") \
				_T("        case when hp_sex='F' then extract(year from hp_birthdate) else 0 end AS fbirthyear,") \
				_T("        hp_sex AS sex,") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
				_T("        hcr_reldisease as reldisease,") \
				_T("        CASE WHEN LENGTH(hc_cardno) > 15 THEN SUBSTR(hc_cardno,1,15) ELSE hc_cardno END AS cardno,") \
				_T("        hc_regdate AS regdate,") \
				_T("        hc_expdate AS expdate,") \
				_T("        CASE WHEN hd_insline='Y' THEN 1 ELSE 0 END AS hdline,") \
				_T("        hc_regcode AS regplace,") \
				_T("        hc_line AS insline,") \
				_T("		get_syssel_desc('hms_rank', hd_rank) soldier_rank,") \
				_T("		hp_workplace work_place,") \
				_T("		DECODE(hc_line, 1, 'A', 2, 'B', 3, 'C') AS linename,") \
				_T("        hig_group AS insgroup,") \
				_T("        TO_CHAR(hcr_admitdate, 'DD/MM/YYYY') AS admitdate,") \
				_T("        TO_CHAR(hcr_dischargedate, 'DD/MM/YYYY') AS dischargedate,") \
				_T("        hcr_sumtreat AS totaltreat,") \
				_T("        hcr_mainicd,") \
				_T("        hcr_maindisease AS icd10,") \
				_T("        hd_emergency AS emergency,") \
				_T("        lower(deptid) AS deptid,") \
				_T("		TO_CHAR(invoice_date, 'DD/MM/YYYY') invoice_date,") \
				_T("		round(SUM(drugfee+drugfeek+bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee+transportfee)) AS inscost,") \
				_T("        round(SUM(drugfee)) AS drugfee,") \
				_T("        round(SUM(drugfeek)) AS drugfeek,") \
				_T("        round(SUM(bloodfee)) AS bloodfee,") \
				_T("        round(SUM(testfee)) AS testfee,") \
				_T("        round(SUM(pacsfee)) AS pacsfee,") \
				_T("        round(SUM(normtechfee)) AS normtechfee,") \
				_T("        round(SUM(hitechfee)) AS hitechfee,") \
				_T("        round(SUM(materialfee)) AS materialfee,") \
				_T("        round(SUM(replace_materialfee)) AS replace_materialfee,") \
				_T("        round(SUM(ref_materialfee)) AS ref_materialfee,") \
				_T("        round(SUM(bedfee)) AS bedfee,") \
				_T("        round(SUM(transportfee)) AS transportfee,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid)) ELSE ROUND(SUM(inspaid)) END AS cost,") \
				_T("        round(SUM(otherfee)) AS otherfee,") \
				_T("		round(SUM(scoliosisfee)) scoliosisfee,") \
				_T("		round(SUM(l_materialfee)) l_materialfee,") \
				_T("		round(SUM(l_discount)) l_discount,") \
				_T("		round(SUM(l_materialfee - l_discount)) l_diffpaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_discount)) ELSE ROUND(SUM(discount)) END AS inspaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid - v_discount)) ELSE ROUND(SUM(inspaid-discount)) END AS patpaid,") \
				_T("		round(SUM(diffpaid)) AS diffpaid,") \
				_T("		round(SUM(food_fee)) AS food_fee") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fe.hfe_object    AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6') AND fe.hfe_group NOT IN ('A1400', 'A1500', 'A1600') THEN fe.hfe_inspaid ELSE 0 END AS drugfee,") \
				_T("         CASE WHEN fe.hfe_group='A1400' THEN fe.hfe_inspaid ELSE 0 END AS drugfeek,") \
				_T("         CASE WHEN (NVL(hfl_bloodfee, 'X') = 'Y' OR fe.hfe_group='A2000') THEN fe.hfe_inspaid ELSE 0 END AS bloodfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2)='B1' AND NVL(hfl_bloodfee, 'X') <> 'Y'") \
				_T("		 AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS testfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS pacsfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS normtechfee,") \
				_T("         CASE WHEN fe.hfe_hitech='Y' THEN fe.hfe_inspaid ELSE 0 END AS hitechfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS replace_materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_cost ELSE 0 END AS ref_materialfee,") \
				_T("         CASE WHEN fe.hfe_group='C0000' THEN fe.hfe_inspaid ELSE 0 END AS bedfee,") \
				_T("         CASE WHEN fe.hfe_group='E0000' THEN fe.hfe_inspaid ELSE 0 END AS transportfee,") \
				_T("         CASE WHEN fe.hfe_group='F0000' THEN fe.hfe_inspaid ELSE 0 END AS otherfee,") \
				_T("		 0 scoliosisfee,") \
				_T("		 CASE WHEN fe.hfe_feegroup = 'OPT_L' AND fe.hfe_type = 'D' THEN fe.hfe_inspaid ELSE 0 END l_materialfee,") \
				_T("		 0 l_discount, ") \
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_inspaid ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_diffcost ELSE 0 END diffpaid, 0 is_scoliosis, 0 v_inspaid, 0 v_discount, 0 food_fee ") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
				//_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno  AND hcrf_invoicefee = fi.hfe_invoiceno)") \//
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				//_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y' AND hcr_status='T'") \//
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y'") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("   %s") \
				_T("   UNION ALL") \
				_T("   SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fe.hfe_object    AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("		 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN fe.hfe_discount ELSE 0 END,") \
				_T("		 0, CASE WHEN NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END,")
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount / hd_disrate * 100 ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 0 ELSE fe.hfe_diffcost END diffpaid,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END is_scoliosis, fe.hfe_discount / hd_disrate * 100 AS hfe_inspaid, fe.hfe_discount, 0 food_fee") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
				//_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND hcrf_invoicefee = fi.hfe_invoiceno)") \//
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_operation ON (ho_docno = hcr_docno AND ho_itemid = hfe_subgroup AND ho_idx = hfe_orderid)") \
				_T("   LEFT JOIN hms_doc ON(hd_docno = hcr_docno)") \
				//_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y' AND hcr_status='T'") \//
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y'") \
				_T("         AND fe.hfe_type = 'V' ") \
				_T("   %s %s") \
				_T(" ) tbl") \
				_T(" LEFT JOIN hms_doc ON(docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
				_T(" LEFT JOIN hms_object ON(ho_id=objectid)") \
				_T(" LEFT JOIN hms_icd ON(hcr_mainicd=hi_icd)") \
				_T(" LEFT JOIN hms_insurance_group ON (hig_idx= hc_groupid)") \
				_T(" WHERE 1=1 ") \
				_T(" %s") \
				_T(" GROUP BY hd_docno, hp_surname, hp_midname, hp_firstname, hp_birthdate, hp_sex, hc_cardno, hd_insline, hd_rank, hp_workplace,") \
				_T("		  hc_groupid, hc_line, hd_insline, hc_regcode, hcr_mainicd, hcr_maindisease, hcr_admitdate, hcr_dischargedate, ") \
				_T("		  hcr_sumtreat, hp_provid, hp_distid, hp_villid, hc_regdate, hc_expdate, hcr_reldisease, hi_name, ") \
				_T("		  hd_emergency, deptid, hd_admitdept, invoice_date, hig_group") \
				_T(" HAVING SUM(cost) > 0 AND SUM(inspaid-discount) >= 0 ") \
				_T(" %s") \
				_T(" ORDER BY ") \
				_T(" %s") \
				_T("  )tmp") \
				_T("   WHERE (bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee+transportfee)>0 ") \
				_T("   order by docno, pname") \
				_T("   )tmp") \
				_T("   group by docno, pname") \
				_T("   order by docno, pname,totalamount "), szWhere, szWhere, szSubSQL, szSubWhere, szHavingClause, szOrderBy);
//_msg(_T("%s"), szSQL);
	return szSQL;	
}
void CFMInsuranceCost79_80A::OnExportSelect_1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szTemp, szFromDateToDate, szDate, szMonth, szYear;
	BeginWaitCursor();
	UpdateData();	
	//ShowMessageBox(_T("Lưu ý: Báo cáo này lấy thêm tiền khám từ phơi thanh toán của bệnh nhân nội trú -> đưa vào cột tiền giường!"), MB_OK | MB_ICONWARNING);
	ShowMessageBox(_T("Lưu ý: Báo cáo này cập nhật cách tính phần chênh khi chọn option BHYT quân --> chỉ tính nguồn BQP thôi, update 12/7/2022"), MB_OK | MB_ICONWARNING);
	rs.ExecSQL(GetQueryString_1());
	//_msg(_T("%s"), GetQueryString_1());
	
	if (rs.IsEOF()){
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	CDate dt1, dt2;
	dt1.ParseDate(m_szFromDate);
	dt2.ParseDate(m_szToDate);
	if (dt1.GetYear() == dt2.GetYear()) szYear.Format(_T("%d"), dt1.GetYear());
	else szYear.Format(_T("%d"), dt2.GetYear());

	if (dt1.GetMonth() == dt2.GetMonth()) szMonth.Format(_T("%d"), dt1.GetMonth());
	else szMonth.Format(_T("%d"), dt2.GetMonth());
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 17);
	xls.SetColumnWidth(2, 7);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 16);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 24);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 8);
	xls.SetColumnWidth(18, 8);
	xls.SetColumnWidth(19, 8);
	xls.SetColumnWidth(20, 8);
	xls.SetColumnWidth(21, 8);
	xls.SetColumnWidth(22, 8);
	xls.SetColumnWidth(23, 8);
	xls.SetColumnWidth(24, 8);
	xls.SetColumnWidth(25, 6);
	xls.SetColumnWidth(26, 9);
	xls.SetColumnWidth(27, 6);
	xls.SetColumnWidth(28, 5);
	xls.SetColumnWidth(29, 6);
	xls.SetColumnWidth(30, 7);
	xls.SetColumnWidth(31, 10);
	xls.SetColumnWidth(32, 10);
	xls.SetColumnWidth(33, 44);
	xls.SetColumnWidth(34, 8);
	xls.SetColumnWidth(35, 9);
	xls.SetColumnWidth(36, 6);
	xls.SetColumnWidth(37, 8);
	xls.SetColumnWidth(38, 8);
	xls.SetColumnWidth(39, 6);
	xls.SetColumnWidth(40, 8);
	xls.SetColumnWidth(41, 10);
	xls.SetColumnWidth(42, 7);
	xls.SetColumnWidth(43, 5);
	xls.SetColumnWidth(44, 10);
	xls.SetColumnWidth(45, 15);
	xls.SetColumnWidth(46, 20);
	xls.SetColumnWidth(47, 10);
	xls.SetColumnWidth(48, 20);
	xls.SetColumnWidth(49, 30);
	xls.SetColumnWidth(50, 12);
	xls.SetColumnWidth(51, 12);
	xls.SetColumnWidth(52, 12);
	xls.SetColumnWidth(53, 12);
	xls.SetColumnWidth(54, 30);
	xls.SetColumnWidth(55, 12);
	xls.SetColumnWidth(56, 12);
	xls.SetColumnWidth(57, 12);
	xls.SetColumnWidth(58, 12);
	xls.SetColumnWidth(59, 12);
	xls.SetColumnWidth(60, 12);
	xls.SetColumnWidth(61, 12);
	xls.SetColumnWidth(62, 12);
	xls.SetColumnWidth(63, 12);
	xls.SetColumnWidth(64, 12);
	xls.SetColumnWidth(65, 12);
	xls.SetColumnWidth(66, 12);
	xls.SetColumnWidth(67, 15);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 5);
	xls.SetCellMergedColumns(37, 1, 7);
	xls.SetCellMergedColumns(37, 2, 7);
	xls.SetCellMergedColumns(0, 3, 44);
	xls.SetCellMergedColumns(0, 4, 44);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(37, 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(37, 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA TH\x41NH TO\xC1N \x43HI PH\xCD KH\xC1M \x43H\x1EEE\x41 \x42\x1EC6NH N\x1ED8I TR\xDA"), FMT_TEXT|FMT_CENTER, true, 18);
	TranslateString(_T("From Date"), tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	TranslateString(_T("To Date"), tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));	
	xls.SetCellText(0, 4, szFromDateToDate, FMT_TEXT | FMT_CENTER, true, 12);
	int nRow = 6, nCol = 0;
	xls.SetCellText(0, nRow, _T("stt"), FMT_TEXT);
	xls.SetCellText(1, nRow, _T("hoten"), FMT_TEXT);	
	xls.SetCellText(2, nRow, _T("namsinh"), FMT_TEXT);
	xls.SetCellText(3, nRow, _T("gioitinh"), FMT_TEXT);
	xls.SetCellText(4, nRow, _T("mathe"), FMT_TEXT);
	xls.SetCellText(5, nRow, _T("ma_dkbd"), FMT_TEXT);	
	xls.SetCellText(6, nRow, _T("mabenh"), FMT_TEXT);
	xls.SetCellText(7, nRow, _T("ngay_vao"), FMT_TEXT);
	xls.SetCellText(8, nRow, _T("ngay_ra"), FMT_TEXT);
	xls.SetCellText(9, nRow, _T("ngay_dtr"), FMT_TEXT);	
	xls.SetCellText(10, nRow, _T("t_tongchi"), FMT_TEXT);
	xls.SetCellText(11, nRow, _T("t_xn"), FMT_TEXT);	
	xls.SetCellText(12, nRow, _T("t_cdha"), FMT_TEXT);
	xls.SetCellText(13, nRow, _T("t_thuoc"), FMT_TEXT);
	xls.SetCellText(14, nRow, _T("t_mau"), FMT_TEXT);	
	xls.SetCellText(15, nRow, _T("t_pttt"), FMT_TEXT);
	xls.SetCellText(16, nRow, _T("t_vtytth"), FMT_TEXT);
	xls.SetCellText(17, nRow, _T("t_vtyttt"), FMT_TEXT);
	xls.SetCellText(18, nRow, _T("t_dvktc"), FMT_TEXT);	
	xls.SetCellText(19, nRow, _T("t_ktg"), FMT_TEXT);
	xls.SetCellText(20, nRow, _T("t_giuong"), FMT_TEXT);
	xls.SetCellText(21, nRow, _T("t_vchuyen"), FMT_TEXT);	
	xls.SetCellText(22, nRow, _T("t_bnct"), FMT_TEXT);	
	xls.SetCellText(23, nRow, _T("t_bhtt"), FMT_TEXT);
	xls.SetCellText(24, nRow, _T("t_ngoaids"), FMT_TEXT);
	xls.SetCellText(25, nRow, _T("lydo_vv"), FMT_TEXT);
	xls.SetCellText(26, nRow, _T("benhkhac"), FMT_TEXT);
	xls.SetCellText(27, nRow, _T("noikcb"), FMT_TEXT);
	xls.SetCellText(28, nRow, _T("khoa"), FMT_TEXT);
	xls.SetCellText(29, nRow, _T("nam_qt"), FMT_TEXT);
	xls.SetCellText(30, nRow, _T("thang_qt"), FMT_TEXT);
	xls.SetCellText(31, nRow, _T("gt_tu"), FMT_TEXT);
	xls.SetCellText(32, nRow, _T("gt_den"), FMT_TEXT);
	xls.SetCellText(33, nRow, _T("diachi"), FMT_TEXT);
	xls.SetCellText(34, nRow, _T("giamdinh"), FMT_TEXT);
	xls.SetCellText(35, nRow, _T("t_xuattoan"), FMT_TEXT);
	xls.SetCellText(36, nRow, _T("lydo_xt"), FMT_TEXT);
	xls.SetCellText(37, nRow, _T("t_datuyen"), FMT_TEXT);
	xls.SetCellText(38, nRow, _T("t_vuottran"), FMT_TEXT);
	xls.SetCellText(39, nRow, _T("loaikcb"), FMT_TEXT);
	xls.SetCellText(40, nRow, _T("noi_ttoan"), FMT_TEXT);
	xls.SetCellText(41, nRow, _T("sophieu"), FMT_TEXT);
	xls.SetCellText(42, nRow, _T("maicd10"), FMT_TEXT);
	xls.SetCellText(43, nRow, _T("tuyen"), FMT_TEXT);
	xls.SetCellText(44, nRow, _T("nhom"), FMT_TEXT);
	xls.SetCellText(45, nRow, _T("ngay_tt"), FMT_TEXT);
	xls.SetCellText(46, nRow, _T("tt_vtyttt"), FMT_TEXT);
	xls.SetCellText(47, nRow, _T("chenh"), FMT_TEXT);
	xls.SetCellText(48, nRow, _T("ky_hieu"), FMT_TEXT);
	xls.SetCellText(49, nRow, _T("noi_lam_viec"), FMT_TEXT);

	xls.SetCellText(50, nRow, _T("t_vattuvt"), FMT_TEXT);
	xls.SetCellText(51, nRow, _T("t_bhttvt"), FMT_TEXT);
	xls.SetCellText(52, nRow, _T("t_vattuvtchenh"), FMT_TEXT);
	xls.SetCellText(53, nRow, _T("t_an"), FMT_TEXT);
	xls.SetCellText(54, nRow, _T("t_an_nn"), FMT_TEXT);
	xls.SetCellText(55, nRow, _T("doi_tuong"), FMT_TEXT);

	xls.SetCellText(56, nRow, _T("t_xn_chenh"), FMT_TEXT);
	xls.SetCellText(57, nRow, _T("t_cdha_chenh"), FMT_TEXT);
	xls.SetCellText(58, nRow, _T("t_thuoc_chenh"), FMT_TEXT);
	xls.SetCellText(59, nRow, _T("t_mau_chenh"), FMT_TEXT);
	xls.SetCellText(60, nRow, _T("t_pttt_chenh"), FMT_TEXT);
	xls.SetCellText(61, nRow, _T("t_vtytth_chenh"), FMT_TEXT);
	xls.SetCellText(62, nRow, _T("t_vtyttt_chenh"), FMT_TEXT);
	xls.SetCellText(63, nRow, _T("t_dvktc_chenh"), FMT_TEXT);
	xls.SetCellText(64, nRow, _T("t_ktg_chenh"), FMT_TEXT);
	xls.SetCellText(65, nRow, _T("t_giuong_chenh"), FMT_TEXT);
	xls.SetCellText(66, nRow, _T("t_phikhac_chenh"), FMT_TEXT);
	xls.SetCellText(67, nRow, _T("ma_lienket"), FMT_TEXT);

	/*nCol = 44;
	if (m_bIsInsPurpose)
	{
		xls.SetCellText(nCol++, nRow, _T("nhom"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("ngay_tt"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("tt_vtyttt"), FMT_TEXT);
	}
	if (m_bShowDiff) xls.SetCellText(nCol++, nRow, _T("chenh"), FMT_TEXT);
	if (m_bSoldierPatient){
		xls.SetCellText(nCol++, nRow, _T("ky_hieu"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("noi_lam_viec"), FMT_TEXT);
	}
	xls.SetCellText(nCol++, nRow, _T("t_vattuvt"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("t_bhttvt"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("t_vattuvtchenh"), FMT_TEXT);
	if (m_bShowDiff) xls.SetCellText(nCol++, nRow, _T("t_an"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("doi_tuong"), FMT_TEXT);*/

	int nIndex = 1, nTemp = 0, nIncrement = 0;
	double nCost = 0;
	double nTotal[14];
	CellFormat xlsFormat(&xls);
	xlsFormat.SetCellStyle(FMT_INTEGER);
	CDate date;
	CString szNewLine, szOldLine;
	CString szNewGroup, szOldGroup;
	nCol = 0;//reinit
	for (int i = 0; i < 14; i++)
		nTotal[i] = 0;
	while (!rs.IsEOF()){
		if (!m_bIsInsPurpose)
			rs.GetValue(_T("insline"), szNewLine);
		if (szOldLine != szNewLine && !szNewLine.IsEmpty()){
			nRow++;
			xls.SetCellMergedColumns(nCol + 1, nRow, 9);
			rs.GetValue(_T("linename"), tmpStr);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
			szTemp.Format(_T("%s"), pMF->GetSelectionString(_T("hms_insline"), szNewLine));
			xls.SetCellText(nCol + 1, nRow, szTemp, FMT_TEXT, true);
			szOldLine = szNewLine;
			szOldGroup.Empty();
		}
		if (!m_bIsInsPurpose)
			rs.GetValue(_T("insgroup"), szNewGroup);

		if (szOldGroup != szNewGroup && !szNewGroup.IsEmpty()){
			nRow++;
			xls.SetCellText(nCol, nRow, szNewGroup, FMT_TEXT, true);
			xls.SetCellMergedColumns(nCol + 1, nRow, 9);
			tmpStr.Format(_T("%s"), pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nIndex = 1;
		}
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sex"), tmpStr);
		if (tmpStr == _T("F")){
			rs.GetValue(_T("fbirthyear"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER);
			xls.WriteNumber(nRow, nCol + 3, 2, &xlsFormat);
		}
		else{
			rs.GetValue(_T("mbirthyear"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER);

			xls.WriteNumber(nRow, nCol + 3, 1, &xlsFormat);
		}
		
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("regplace"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("admitdate"), tmpStr);
		//szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dischargedate"), tmpStr);
		//szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("totaltreat"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("inscost"), nCost);
		nTotal[0] += nCost;
		xls.WriteNumber(nRow, nCol + 10, nCost, &xlsFormat);

		rs.GetValue(_T("testfee"), nCost);
		nTotal[1] += nCost;
		xls.WriteNumber(nRow, nCol + 11, nCost, &xlsFormat);

		rs.GetValue(_T("pacsfee"), nCost);
		nTotal[2] += nCost;
		xls.WriteNumber(nRow, nCol + 12, nCost, &xlsFormat);

		rs.GetValue(_T("drugfee"), nCost);
		nTotal[3] += nCost;
		xls.WriteNumber(nRow, nCol + 13, nCost, &xlsFormat);

		rs.GetValue(_T("bloodfee"), nCost);
		nTotal[4] += nCost;
		xls.WriteNumber(nRow, nCol + 14, nCost, &xlsFormat);

		rs.GetValue(_T("normtechfee"), nCost);
		nTotal[5] += nCost;
		xls.WriteNumber(nRow, nCol + 15, nCost, &xlsFormat);

		rs.GetValue(_T("materialfee"), nCost);
		nTotal[6] += nCost;
		xls.WriteNumber(nRow, nCol + 16, nCost, &xlsFormat);

		rs.GetValue(_T("replace_materialfee"), nCost);
		nTotal[7] += nCost;
		xls.WriteNumber(nRow, nCol + 17, nCost, &xlsFormat);

		rs.GetValue(_T("hitechfee"), nCost);
		nTotal[8] += nCost;
		xls.WriteNumber(nRow, nCol + 18, nCost, &xlsFormat);

		rs.GetValue(_T("drugfeek"), nCost);
		nTotal[9] += nCost;
		xls.WriteNumber(nRow, nCol + 19, nCost, &xlsFormat);

		rs.GetValue(_T("bedfee"), nCost);
		nTotal[10] += nCost;
		xls.WriteNumber(nRow, nCol + 20, nCost, &xlsFormat);

		/*rs.GetValue(_T("transportfee"), nCost);
		xls.WriteNumber(nRow, nCol + 19, nCost, &xlsFormat);*/

		rs.GetValue(_T("inspatpaid"), nCost);
		nTotal[12] += nCost;
		xls.WriteNumber(nRow, nCol + 22, nCost, &xlsFormat);

		rs.GetValue(_T("inspaid"), nCost);
		nTotal[13] += nCost;
		xls.WriteNumber(nRow, nCol + 23, nCost, &xlsFormat);

		/*rs.GetValue(_T("ratefee"), nCost);
		xls.WriteNumber(nRow, nCol + 23, nCost, &xlsFormat);*/

		rs.GetValue(_T("emergency"), tmpStr);
		if (tmpStr == _T("Y")) nTemp = 2;
		else{
			rs.GetValue(_T("hdline"), tmpStr);
			if (tmpStr == _T("1")) nTemp = 0;
			else nTemp = 1;
		}
		
		xls.WriteNumber(nRow, nCol + 25, nTemp, &xlsFormat);

		rs.GetValue(_T("reldisease"), tmpStr);
		xls.SetCellText(nCol + 26, nRow, tmpStr, FMT_TEXT);

		tmpStr.Format(_T("%s"), pMF->m_CompanyInfo.sc_id);
		xls.SetCellText(nCol + 27, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol + 28, nRow, tmpStr, FMT_TEXT);

		nCost = ToDouble(szYear);
		xls.WriteNumber(nRow, nCol + 29, nCost, &xlsFormat);

		nCost = ToDouble(szMonth);
		xls.WriteNumber(nRow, nCol + 30, nCost, &xlsFormat);
		
		rs.GetValue(_T("regdate"), tmpStr);
		szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 31, nRow, szDate, FMT_DATE);

		rs.GetValue(_T("expdate"), tmpStr);
		szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 32, nRow, szDate, FMT_DATE);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 33, nRow, tmpStr, FMT_TEXT);

		xls.WriteNumber(nRow, nCol + 35, 0, &xlsFormat);

		xls.WriteNumber(nRow, nCol + 37, 0, &xlsFormat);
		xls.WriteNumber(nRow, nCol + 38, 0, &xlsFormat);

		xls.SetCellText(nCol + 39, nRow, _T("NOI"), FMT_TEXT);
		xls.SetCellText(nCol + 40, nRow, _T("\x43SK\x43\x42"), FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 41, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hcr_mainicd"), tmpStr);
		xls.SetCellText(nCol + 42, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("insline"), tmpStr);
		xls.SetCellText(nCol + 43, nRow, tmpStr, FMT_INTEGER);

		xls.SetCellText(nCol +44 , nRow, rs.GetValue(_T("insgroup")), FMT_TEXT);
			
		xls.SetCellText(nCol +45 , nRow, rs.GetValue(_T("invoice_date")), FMT_TEXT);
			
		xls.SetCellText(nCol +46 , nRow, rs.GetValue(_T("ref_materialfee")), FMT_NUMBER1);
		xls.SetCellText(nCol +47 , nRow, rs.GetValue(_T("diffpaid")), FMT_NUMBER1);
		xls.SetCellText(nCol +48 , nRow, rs.GetValue(_T("soldier_rank")), FMT_TEXT);
		xls.SetCellText(nCol +49 , nRow, rs.GetValue(_T("work_place")), FMT_TEXT);
		xls.SetCellText(nCol + 50 , nRow, rs.GetValue(_T("l_materialfee")), FMT_TEXT);
		xls.SetCellText(nCol + 51 , nRow, rs.GetValue(_T("l_discount")), FMT_NUMBER1);
		xls.SetCellText(nCol + 52 , nRow, rs.GetValue(_T("l_diffpaid")), FMT_NUMBER1);
		xls.SetCellText(nCol + 53 , nRow, rs.GetValue(_T("food_fee")), FMT_NUMBER1);
		xls.SetCellText(nCol + 54 , nRow, rs.GetValue(_T("food_fee_nn")), FMT_NUMBER1);
		xls.SetCellText(nCol + 55 , nRow, rs.GetValue(_T("Objectname")), FMT_TEXT);

		xls.SetCellText(nCol +56 , nRow, rs.GetValue(_T("t_xn_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +57 , nRow, rs.GetValue(_T("t_cdha_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +58 , nRow, rs.GetValue(_T("t_thuoc_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +59 , nRow, rs.GetValue(_T("t_mau_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +60 , nRow, rs.GetValue(_T("t_pttt_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +61 , nRow, rs.GetValue(_T("t_vtytth_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +62 , nRow, rs.GetValue(_T("t_vtyttt_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +63 , nRow, rs.GetValue(_T("t_dvktc_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +64 , nRow, rs.GetValue(_T("t_ktg_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +65 , nRow, rs.GetValue(_T("t_giuong_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +66 , nRow, rs.GetValue(_T("t_phikhac_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +67 , nRow, rs.GetValue(_T("ma_lienket")), FMT_TEXT);

		//xls.SetCellText(nCol + 40, nRow, _T("\x30\x31"), FMT_TEXT);
		/*nIncrement = 0;
		if (m_bIsInsPurpose)
		{
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("insgroup")), FMT_TEXT);
			nIncrement++;
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("invoice_date")), FMT_TEXT);
			nIncrement++;
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("ref_materialfee")), FMT_NUMBER1);
			nIncrement++;
		}
		if (m_bShowDiff){
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("diffpaid")), FMT_NUMBER1);
			nIncrement++;
		}
		if (m_bSoldierPatient){
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("soldier_rank")), FMT_TEXT);
			nIncrement++;             
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("work_place")), FMT_TEXT);
			nIncrement++;
		}
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_materialfee")), FMT_TEXT);
		nIncrement++;
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_discount")), FMT_TEXT);
		nIncrement++;
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_diffpaid")), FMT_TEXT);
		nIncrement++;
		if (m_bShowDiff)
		{
			xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("food_fee")), FMT_TEXT);
			nIncrement++;
		}
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("Objectname")), FMT_TEXT);
		nIncrement++;*/

		rs.MoveNext();
	}
	nRow++;
	xls.SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
	for (int i = 0; i < 14; i++){
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+10, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\ChiphikhambenhBHYT_80a_1.xls"));
	EndWaitCursor();
}
CString CFMInsuranceCost79_80A::GetQueryString_1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szSubSQL, szWhere, szWhereBQP, szSubWhere, szOrderBy, szTable, szObjectCondition, szHavingClause;
	CString szDepts, szCards;
	CString tmpStr, szTemp, szMaterialID;
	int nIndex = 0;

	szWhere.Empty();
	szSubWhere.Empty();
	szDepts.Empty();
	szCards.Empty();


	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND fi.hfe_staff='%s' "), m_szClerkKey);

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND fi.hfe_deptid IN(%s) "), szDepts);
	}

	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (m_wndCardList.GetCheck(i))
		{
			tmpStr = m_wndCardList.GetItemText(i, 0);
			if (tmpStr.Find(_T(',')) > -1)
				tmpStr.Replace(_T(","), _T("','"));
			if (!szCards.IsEmpty())
				szCards += _T(",");
			szCards.AppendFormat(_T("'%s'"), tmpStr);
		}
	}

	if (!szCards.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND substr(hd_cardno,1,2) IN(%s) "), szCards);
		//MessageBox(szCards);
	}
	szSQL.Format(_T("SELECT hsd_id id FROM hms_surgery_drugtype WHERE hsd_type = 'M'"));
	rs.ExecSQL(szSQL);
// 	while (!rs.IsEOF())
// 	{
// 		if (!szMaterialID.IsEmpty())
// 			szMaterialID += _T(", ");
// 		szMaterialID.AppendFormat(_T("'%s'"),rs.GetValue(_T("id")));
// 		rs.MoveNext();
// 	}
// 	if (!szMaterialID.IsEmpty())
// 		szMaterialID += _T(", ");
// 	szMaterialID += _T("'A1500', 'A1600'");
	szOrderBy = _T(" insline, insgroup, hdline, admitdate, docno, cardno)");
	if (m_bIsInsPurpose)
		szOrderBy = _T(" to_date(dischargedate, 'dd/mm/yyyy') , deptid, hp_surname, hp_midname, hp_firstname)");
	if (m_bByDischargedDate)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee IN ('P', 'Y') AND hcr_status='T'"), m_szFromDate, m_szToDate);
	else if (m_bUnapproved)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bInsuranceApproval)
		szWhere.AppendFormat(_T(" AND hfe_approveddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hfe_approved = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bLockedDate)
		szWhere.AppendFormat(_T(" AND fi.hfe_lockeddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							 _T(" AND fi.hfe_locked = 'Y'"), m_szFromDate, m_szToDate);
	else
		szWhere.AppendFormat(_T(" AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND fi.hfe_status = 'P'"), m_szFromDate, m_szToDate);
	if (m_bOnlyCommander)
		szSubWhere.AppendFormat(_T(" AND hd_rank IN (15, 16, 17, 18, 21, 22, 23, 24)"));
	szObjectCondition = _T(" AND ho_type IN ('I', 'C') AND hd_cardno IS NOT NULL");
	if (m_bSoldierPatient)
		szObjectCondition = _T(" AND hd_object = 1");

	//Lọc đối tượng bảo hiểm BQP, bảo hiểm Hà Nội
	if (m_szphanloaibhKey == _T("BHBQP"))
		{
			szObjectCondition = _T(" AND SUBSTR(hd_cardno, 4,2) = '97'");
			szWhereBQP.AppendFormat(_T(" AND fe.hfe_category IN ('BQP')"));
		}
	else if
		(m_szphanloaibhKey == _T("BHHN"))
		{
			szObjectCondition = _T(" AND SUBSTR(hd_cardno, 4,2) <> '97'");
		}
	else
		{
		
		}

	szSubWhere += szObjectCondition;
	//szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'X') <> 'Y' AND fe.hfe_group <> 'D0000' AND fe.hfe_status <> 'C'"));
	szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'X') <> 'Y' AND fe.hfe_status <> 'C'"));
	if (m_bOnlyCommander || (szCards == _T("'QN'")))
		m_bShowDiff = true;
	else
		m_bShowDiff = false;
	//Hien chenh lech tat ca doi tuong
	m_bShowDiff = true;
	if (m_bOverceilMaterial)
		szHavingClause.Format(_T(" AND SUM(l_materialfee) > 0"));
	if (m_bShowDiff)
		szSubSQL.Format(_T("UNION ALL") \
				_T("		SELECT fi.hfe_deptid as deptid, fi.hfe_treattime AS treattime,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid    AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_ADMITDATE,'DD/MM/YYYY') ELSE to_char(hcr_admitdate, 'DD/MM/YYYY')  END AS admitdate,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_DISCHARGEDATE,'DD/MM/YYYY') ELSE to_char(hcr_dischargedate, 'DD/MM/YYYY') END AS dischargedate,") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') ") \
				_T("		 THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
				_T("		 ELSE 0 END AS diffpaid, 0, 0, 0, (CASE WHEN fe.hfe_type = 'F' THEN fe.hfe_patpaid ELSE 0 END) food_fee, (CASE WHEN fe.hfe_type = 'F' AND NVL(hfl_feefood_nn,'N')='Y' THEN fe.hfe_patpaid ELSE 0 END) food_fee_nn,") \

				_T(" CASE") \
				_T("         WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6')") \
				_T("         AND fe.hfe_group NOT          IN ('A1400', 'A1500', 'A1600', 'A1700')") \
				_T("         THEN fe.hfe_cost-fe.hfe_inspaid") \
				_T("         ELSE 0") \
				_T("       END AS drugfeediff,") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_group='A1400'") \
				_T("         THEN fe.hfe_cost-fe.hfe_inspaid") \
				_T("         ELSE 0") \
				_T("       END AS drugfeekdiff,") \
				_T("       CASE") \
				_T("         WHEN (NVL(hfl_bloodfee, 'X') = 'Y'") \
				_T("         OR fe.hfe_group              ='A2000')") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS bloodfeediff,") \
				_T("       CASE") \
				_T("         WHEN SUBSTR(fe.hfe_group, 1, 2)='B1'") \
				_T("         AND NVL(hfl_bloodfee, 'X')    <> 'Y'") \
				_T("         AND fe.hfe_hitech              ='N'") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS testfeediff,") \
				_T("       CASE") \
				_T("         WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3')") \
				_T("         AND fe.hfe_hitech                ='N'") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS pacsfeediff,") \
				_T("       CASE") \
				_T("         WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5')") \
				_T("         AND NVL(fe.hfe_hitech,'N')='N'") \

				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS normtechfeediff,") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_hitech='Y'") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS hitechfeediff,") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_group       IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT')") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS materialfeediff,") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_group   IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT')") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS replace_materialfeediff,     ") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_group='C0000'") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS bedfeediff,      ") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_group='F0000'") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS otherfeediff") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_category NOT IN ('Y', 'COV') AND htr_status='T'") \
				_T("   AND (fe.hfe_discount  = 0 OR (SUBSTR(fe.hfe_group,1,2) IN('A1','A6') AND fe.hfe_discount  > 0))") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("    %s %s"), szWhere, szWhereBQP);
    szSQL.Format(_T(" SELECT ") \
				_T(" docno,ma_lienket, treattime,Objectname,invoiceno,pname,mbirthyear,fbirthyear,sex,address,reldisease,cardno,regdate,expdate,hdline,regplace,insline,soldier_rank,work_place,linename,insgroup,") \
				_T(" admitdate,dischargedate,totaltreat,hcr_mainicd,icd10,emergency,deptid,invoice_date, invoice_date_detail,") \
				_T(" inscost,drugfee,drugfeek,bloodfee,testfee,pacsfee,normtechfee,hitechfee,materialfee,replace_materialfee,ref_materialfee,bedfee,transportfee,") \
				_T(" cost,otherfee,scoliosisfee,l_materialfee,l_discount,l_diffpaid,inspaid,patpaid,diffpaid,food_fee,food_fee_nn,inscost-inspaid AS inspatpaid,") \

				_T("   t_xn_chenh,") \
				_T("   t_cdha_chenh,") \
				_T("   t_thuoc_chenh,") \
				_T("   t_mau_chenh,") \
				_T("   t_pttt_chenh,") \
				_T("   t_vtytth_chenh,") \
				_T("   t_vtyttt_chenh,") \
				_T("   t_dvktc_chenh,") \
				_T("   t_ktg_chenh,") \
				_T("   t_giuong_chenh,") \
				_T("   t_phikhac_chenh  ") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT hd_docno AS docno, iv.HFE_DISCOUNT as t_bhtt, TO_CHAR(invoice_date, 'YYYYMMDDHH24MI') invoice_date_detail, MA_LK AS ma_lienket,treattime,") \
				_T("        HMS_GETOBJECTNAME(objectid) AS Objectname,") \
				_T("        max(invoiceno) AS invoiceno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname,") \
				_T("        case when hp_sex='M' then extract(year from hp_birthdate) else 0 end AS mbirthyear,") \
				_T("        case when hp_sex='F' then extract(year from hp_birthdate) else 0 end AS fbirthyear,") \
				_T("        hp_sex AS sex,") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
				_T("        hcr_reldisease as reldisease,") \
				_T("        CASE WHEN LENGTH(hc_cardno) > 15 THEN SUBSTR(hc_cardno,1,15) ELSE hc_cardno END AS cardno,") \
				_T("        hc_regdate AS regdate,") \
				_T("        hc_expdate AS expdate,") \
				_T("        CASE WHEN hd_insline='Y' THEN 1 ELSE 0 END AS hdline,") \
				_T("        hc_regcode AS regplace,") \
				_T("        hc_line AS insline,") \
				_T("		get_syssel_desc('hms_rank', hd_rank) soldier_rank,") \
				_T("		hp_workplace work_place,") \
				_T("		DECODE(hc_line, 1, 'A', 2, 'B', 3, 'C') AS linename,") \
				_T("        hig_group AS insgroup,") \
				_T("        admitdate,") \
				_T("        dischargedate,") \
				_T("        hcr_sumtreat AS totaltreat,") \
				_T("        hcr_mainicd,") \
				_T("        hcr_maindisease AS icd10,") \
				_T("        hd_emergency AS emergency,") \
				_T("        lower(deptid) AS deptid,") \
				_T("		TO_CHAR(invoice_date, 'DD/MM/YYYY') invoice_date,") \
				_T("		round(SUM(drugfee+drugfeek+bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee+transportfee)) AS inscost,") \
				_T("        round(SUM(drugfee)) AS drugfee,") \
				_T("        round(SUM(drugfeek)) AS drugfeek,") \
				_T("        round(SUM(bloodfee)) AS bloodfee,") \
				_T("        round(SUM(testfee)) AS testfee,") \
				_T("        round(SUM(pacsfee)) AS pacsfee,") \
				_T("        round(SUM(normtechfee)) AS normtechfee,") \
				_T("        round(SUM(hitechfee)) AS hitechfee,") \
				_T("        round(SUM(materialfee)) AS materialfee,") \
				_T("        round(SUM(replace_materialfee)) AS replace_materialfee,") \
				_T("        round(SUM(ref_materialfee)) AS ref_materialfee,") \
				_T("        round(SUM(bedfee)) AS bedfee,") \
				_T("        round(SUM(transportfee)) AS transportfee,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid)) ELSE ROUND(SUM(inspaid)) END AS cost,") \
				_T("        round(SUM(otherfee)) AS otherfee,") \
				_T("		round(SUM(scoliosisfee)) scoliosisfee,") \
				_T("		round(SUM(l_materialfee)) l_materialfee,") \
				_T("		round(SUM(l_discount)) l_discount,") \
				_T("		round(SUM(l_materialfee - l_discount)) l_diffpaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_discount)) ELSE ROUND(SUM(discount)) END AS inspaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid - v_discount)) ELSE ROUND(SUM(inspaid-discount)) END AS patpaid,") \
				//_T("		round(SUM(diffpaid)) AS diffpaid,") \//
				_T("        ROUND(SUM(food_fee+testfeediff+pacsfeediff+drugfeediff+bloodfeediff+normtechfeediff+materialfeediff+replace_materialfeediff+hitechfeediff+drugfeekdiff+bedfeediff+otherfeediff)) AS diffpaid,") \
				_T("		round(SUM(food_fee)) AS food_fee,") \
				_T("		round(SUM(food_fee_nn)) AS food_fee_nn,") \

				_T("				   ROUND(SUM(testfeediff))     AS t_xn_chenh,") \
				_T(" 				   ROUND(SUM(pacsfeediff))     AS t_cdha_chenh,") \
				_T(" 				   ROUND(SUM(drugfeediff))      AS t_thuoc_chenh,") \
				_T(" 				   ROUND(SUM(bloodfeediff))     AS t_mau_chenh,") \
				_T(" 				   ROUND(SUM(normtechfeediff))     AS t_pttt_chenh,") \
				_T(" 				   ROUND(SUM(materialfeediff))     AS t_vtytth_chenh,") \
				_T(" 				   ROUND(SUM(replace_materialfeediff)) AS t_vtyttt_chenh,") \
				_T(" 				   ROUND(SUM(hitechfeediff))     AS t_dvktc_chenh,") \
				_T(" 				   ROUND(SUM(drugfeekdiff))     AS t_ktg_chenh,   ") \
				_T(" 				   ROUND(SUM(bedfeediff))     AS t_giuong_chenh,") \
				_T(" 				   ROUND(SUM(otherfeediff))     AS t_phikhac_chenh") \

				_T(" FROM") \
				_T(" (") \
				_T("  SELECT fi.hfe_deptid as deptid, fi.hfe_treattime AS treattime,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_ADMITDATE,'DD/MM/YYYY') ELSE to_char(hcr_admitdate, 'DD/MM/YYYY')  END AS admitdate,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_DISCHARGEDATE,'DD/MM/YYYY') ELSE to_char(hcr_dischargedate, 'DD/MM/YYYY') END AS dischargedate,") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6') AND fe.hfe_group NOT IN ('A1400', 'A1500', 'A1600') THEN fe.hfe_inspaid ELSE 0 END AS drugfee,") \
				_T("         CASE WHEN fe.hfe_group='A1400' THEN fe.hfe_inspaid ELSE 0 END AS drugfeek,") \
				_T("         CASE WHEN (NVL(hfl_bloodfee, 'X') = 'Y' OR fe.hfe_group='A2000') THEN fe.hfe_inspaid ELSE 0 END AS bloodfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2)='B1' AND NVL(hfl_bloodfee, 'X') <> 'Y'") \
				_T("		 AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS testfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS pacsfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS normtechfee,") \
				_T("         CASE WHEN fe.hfe_hitech='Y' THEN fe.hfe_inspaid ELSE 0 END AS hitechfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS replace_materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_cost ELSE 0 END AS ref_materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN ('C0000', 'D0000') THEN fe.hfe_inspaid ELSE 0 END AS bedfee,") \
				_T("         CASE WHEN fe.hfe_group='E0000' THEN fe.hfe_inspaid ELSE 0 END AS transportfee,") \
				_T("         CASE WHEN fe.hfe_group='F0000' THEN fe.hfe_inspaid ELSE 0 END AS otherfee,") \
				_T("		 0 scoliosisfee,") \
				_T("		 CASE WHEN fe.hfe_feegroup = 'OPT_L' AND fe.hfe_type = 'D' THEN fe.hfe_inspaid ELSE 0 END l_materialfee,") \
				_T("		 0 l_discount, ") \
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_inspaid ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_diffcost ELSE 0 END diffpaid, 0 is_scoliosis, 0 v_inspaid, 0 v_discount, 0 food_fee,0 food_fee_nn, ") \

				_T("     0               AS drugfeediff,") \
				_T("     0               AS drugfeekdiff,") \
				_T("     0               AS bloodfeediff,") \
				_T("     0               AS testfeediff,") \
				_T("     0               AS pacsfeediff,") \
				_T("     0               AS normtechfeediff,") \
				_T("     0               AS hitechfeediff,") \
				_T("     0               AS materialfeediff,") \
				_T("     0               AS replace_materialfeediff,") \
				_T("     0               AS bedfeediff,") \
				_T("     0               AS otherfeediff") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category NOT IN ('Y', 'COV') AND htr_status='T'") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("   %s") \
				_T("   UNION ALL") \
				_T("   SELECT fi.hfe_deptid as deptid, fi.hfe_treattime AS treattime,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_ADMITDATE,'DD/MM/YYYY') ELSE to_char(hcr_admitdate, 'DD/MM/YYYY')  END AS admitdate,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_DISCHARGEDATE,'DD/MM/YYYY') ELSE to_char(hcr_dischargedate, 'DD/MM/YYYY') END AS dischargedate,") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("		 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN fe.hfe_discount ELSE 0 END,") \
				_T("		 0, CASE WHEN NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END,")
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount / hd_disrate * 100 ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 0 ELSE fe.hfe_diffcost END diffpaid,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END is_scoliosis, fe.hfe_discount / hd_disrate * 100 AS hfe_inspaid, fe.hfe_discount, 0 food_fee,0 food_fee_nn,") \

				_T("     0               AS drugfeediff,") \
				_T("     0               AS drugfeekdiff,") \
				_T("     0               AS bloodfeediff,") \
				_T("     0               AS testfeediff,") \
				_T("     0               AS pacsfeediff,") \
				_T("     0               AS normtechfeediff,") \
				_T("     0               AS hitechfeediff,") \
				_T("     0               AS materialfeediff,") \
				_T("     fe.hfe_cost-fe.hfe_inspaid AS replace_materialfeediff,") \
				_T("     0               AS bedfeediff,") \
				_T("     0               AS otherfeediff") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_operation ON (ho_docno = hcr_docno AND ho_itemid = hfe_subgroup AND ho_idx = hfe_orderid)") \
				_T("   LEFT JOIN hms_doc ON(hd_docno = hcr_docno)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category NOT IN ('Y', 'COV') AND htr_status='T'") \
				_T("         AND fe.hfe_type = 'V' ") \
				_T("   %s %s %s") \
				_T(" ) tbl") \
				_T(" LEFT JOIN hms_doc ON(docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
				_T(" LEFT JOIN hms_object ON(ho_id=objectid)") \
				_T(" LEFT JOIN hms_icd ON(hcr_mainicd=hi_icd)") \
				_T(" LEFT JOIN hms_insurance_group ON (hig_idx= hc_groupid)") \
				_T(" LEFT JOIN BH_XML_1 ON (MA_BN = cast(hd_docno as NVARCHAR2(8)) AND treattime = substr(MA_LK, 10,11))") \
				_T(" LEFT JOIN hms_fee_invoice iv ON (iv.hfe_docno = hd_docno AND iv.hfe_invoiceno = invoiceno) ") \
				_T(" WHERE 1=1 ") \
				_T(" %s") \
				_T(" GROUP BY hd_docno, iv.HFE_DISCOUNT,MA_LK, treattime,objectid, hp_surname, hp_midname, hp_firstname, hp_birthdate, hp_sex, hc_cardno, hd_insline, hd_rank, hp_workplace,") \
				_T("		  hc_groupid, hc_line, hd_insline, hc_regcode, hcr_mainicd, hcr_maindisease, admitdate, dischargedate, ") \
				_T("		  hcr_sumtreat, hp_provid, hp_distid, hp_villid, hc_regdate, hc_expdate, hcr_reldisease, hi_name, ") \
				_T("		  hd_emergency, deptid, hd_admitdept, invoice_date, hig_group") \
				_T(" HAVING SUM(cost) > 0 AND SUM(inspaid-discount) >= 0 ") \
				_T(" %s") \
				_T(" ORDER BY ") \
				_T(" %s"), szWhere, szWhere, szWhereBQP,szSubSQL, szSubWhere, szHavingClause, szOrderBy);
				//_msg(_T("%s"), szSQL);

	return szSQL;
}
void CFMInsuranceCost79_80A::OnExportSelect_2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szYear, szMonth, szDate;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;
	double nTemp = 0;
	double nTotal[43], nGroupTotal[43];
	for(int i = 0; i < 43; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 10);	xls.SetColumnWidth(2, 25);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 50);	xls.SetColumnWidth(6, 16);	xls.SetColumnWidth(7, 6);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 14);	xls.SetColumnWidth(12, 8);	xls.SetColumnWidth(13, 8);	xls.SetColumnWidth(14, 12);	xls.SetColumnWidth(15, 12);	xls.SetColumnWidth(16, 6);	xls.SetColumnWidth(17, 6);	xls.SetColumnWidth(18, 6);	xls.SetColumnWidth(19, 15);	xls.SetColumnWidth(20, 15);	xls.SetColumnWidth(21, 15);	xls.SetColumnWidth(22, 15);	xls.SetColumnWidth(23, 15);	xls.SetColumnWidth(24, 15);	xls.SetColumnWidth(25, 15);	xls.SetColumnWidth(26, 15);	xls.SetColumnWidth(27, 15);	xls.SetColumnWidth(28, 15);	xls.SetColumnWidth(29, 15);	xls.SetColumnWidth(30, 15);	xls.SetColumnWidth(31, 15);	xls.SetColumnWidth(32, 15);	xls.SetColumnWidth(33, 15);	xls.SetColumnWidth(34, 6);	xls.SetColumnWidth(35, 6);	xls.SetColumnWidth(36, 6);	xls.SetColumnWidth(37, 6);	xls.SetColumnWidth(38, 6);	xls.SetColumnWidth(39, 6);	xls.SetColumnWidth(40, 6);	xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 0, _T("MA_BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 0, _T("HO_TEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 0, _T("NGAY_SINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 0, _T("GIOI_TINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 0, _T("DIA_CHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 0, _T("MA_THE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 0, _T("MA_DKBD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 0, _T("GT_THE_TU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 0, _T("GT_THE_DEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(10, 0, _T("MA_BENH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(11, 0, _T("MA_BENHKHAC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(12, 0, _T("MA_LYDO_VVIEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(13, 0, _T("MA_NOI_CHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(14, 0, _T("NGAY_VAO"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 0, _T("NGAY_RA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(16, 0, _T("SO_NGAY_DTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 0, _T("KET_QUA_dTRI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(18, 0, _T("TINH_TRANG_RV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(19, 0, _T("T_TONGCHI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(20, 0, _T("T_XN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(21, 0, _T("T_CDHA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(22, 0, _T("T_THUOC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(23, 0, _T("T_MAU"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(24, 0, _T("T_PTTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(25, 0, _T("T_VTYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(26, 0, _T("T_DVKT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(27, 0, _T("T_THUOC_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(28, 0, _T("T_VTYT_TYLE"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(29, 0, _T("T_KHAM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(30, 0, _T("T_GIUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(31, 0, _T("T_VCHUYEN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(32, 0, _T("T_BNTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(33, 0, _T("T_BHTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(34, 0, _T("T_NGOAIDS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(35, 0, _T("MA_KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(36, 0, _T("NAM_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(37, 0, _T("THANG_QT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(38, 0, _T("MA_KHUVUC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(39, 0, _T("MA_LOAIKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(40, 0, _T("MA_CSKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	szSQL.Format(_T(" SELECT docno                  AS ma_bn,") \
		_T("   pname                       AS ho_ten,") \
		_T("   birthyear                   AS ngay_sinh,") \
		_T("   sex                         AS gioi_tinh,") \
		_T("   address                     AS dia_chi,") \
		_T("   cardno                      AS ma_the,") \
		_T("   regplace                    AS ma_dkbd,") \
		_T("   TO_CHAR(regdate,'YYYYMMDD') AS gt_the_tu,") \
		_T("   TO_CHAR(expdate,'YYYYMMDD') AS gt_the_den,") \
		_T("   hcr_mainicd                 AS ma_benh,") \
		_T("   ''                          AS ma_benhkhac,") \
		_T("   insline                     AS ma_lydo_vvien,") \
		_T("   workplaceid                 AS ma_noi_chuyen,") \
		_T("   admitdate                   AS ngay_vao,") \
		_T("   dischargedate               AS ngay_ra,") \
		_T("   totaltreat                  AS so_ngay_dtri,") \
		_T("   ket_qua_dtri,") \
		_T("   tinh_trang_rv,") \
		_T("   inscost             AS t_tongchi,") \
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
		_T("   inscost-inspaid     AS t_bntt,") \
		_T("   inspaid             AS t_bhtt,") \
		_T("   0                   AS t_ngoaids,") \
		_T("   (SELECT sd_insuranceid FROM sys_dept WHERE sd_id = UPPER(deptid)") \
		_T("   )                                AS ma_khoa,") \
		_T("   extract(YEAR FROM invoice_date)  AS nam_qt,") \
		_T("   extract(MONTH FROM invoice_date) AS thang_qt,") \
		_T("   ma_khuvuc,") \
		_T("   ma_loaikcb,") \
		_T("   '01014' AS ma_cskcb,") \
		_T("   invoiceno") \
		_T("     FROM") \
		_T("     (SELECT hd_docno AS docno,") \
		_T("       MAX(invoiceno) AS invoiceno,") \
		_T("       trim(hp_surname") \
		_T("       ||' '") \
		_T("       ||hp_midname") \
		_T("       ||' '") \
		_T("       ||hp_firstname) AS pname,") \
		_T("       CASE") \
		_T("         WHEN hp_sex='M'") \
		_T("         THEN extract(YEAR FROM hp_birthdate)") \
		_T("         ELSE 0") \
		_T("       END AS mbirthyear,") \
		_T("       CASE") \
		_T("         WHEN hp_sex='F'") \
		_T("         THEN extract(YEAR FROM hp_birthdate)") \
		_T("         ELSE 0") \
		_T("       END                             AS fbirthyear,") \
		_T("       extract(YEAR FROM hp_birthdate) AS birthyear,") \
		_T("       CASE") \
		_T("         WHEN hp_sex = 'F'") \
		_T("         THEN 1") \
		_T("         ELSE 2") \
		_T("       END                                             AS sex,") \
		_T("       hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T("       hcr_reldisease                                  AS reldisease,") \
		_T("       CASE") \
		_T("         WHEN LENGTH(hc_cardno) > 15") \
		_T("         THEN SUBSTR(hc_cardno,1,15)") \
		_T("         ELSE hc_cardno") \
		_T("       END        AS cardno,") \
		_T("       hc_regdate AS regdate,") \
		_T("       hc_expdate AS expdate,") \
		_T("       CASE") \
		_T("         WHEN hd_insline='Y'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END        AS hdline,") \
		_T("       hc_regcode AS regplace,") \
		_T("       hc_line    AS insline,") \
		_T("       get_syssel_desc('hms_rank', hd_rank) soldier_rank,") \
		_T("       hp_workplace                            AS work_place,") \
		_T("       hd_transplaceid                         AS workplaceid,") \
		_T("       DECODE(hc_line, 1, 'A', 2, 'B', 3, 'C') AS linename,") \
		_T("       hig_group                               AS insgroup,") \
		_T("       admitdate,") \
		_T("       dischargedate,") \
		_T("       hcr_sumtreat AS totaltreat,") \
		_T("       hcr_mainicd,") \
		_T("       hcr_maindisease                                                                                                                 AS icd10,") \
		_T("       hd_emergency                                                                                                                    AS emergency,") \
		_T("       lower(deptid)                                                                                                                   AS deptid,") \
		_T("       invoice_date                                                                                                                    AS invoice_date,") \
		_T("       ROUND(SUM(drugfee+drugfeek+bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee+transportfee)) AS inscost,") \
		_T("       ROUND(SUM(drugfee))                                                                                                             AS drugfee,") \
		_T("       ROUND(SUM(drugfeek))                                                                                                            AS drugfeek,") \
		_T("       ROUND(SUM(bloodfee))                                                                                                            AS bloodfee,") \
		_T("       ROUND(SUM(testfee))                                                                                                             AS testfee,") \
		_T("       ROUND(SUM(pacsfee))                                                                                                             AS pacsfee,") \
		_T("       ROUND(SUM(normtechfee))                                                                                                         AS normtechfee,") \
		_T("       ROUND(SUM(hitechfee))                                                                                                           AS hitechfee,") \
		_T("       ROUND(SUM(materialfee))                                                                                                         AS materialfee,") \
		_T("       ROUND(SUM(replace_materialfee))                                                                                                 AS replace_materialfee,") \
		_T("       ROUND(SUM(ref_materialfee))                                                                                                     AS ref_materialfee,") \
		_T("       ROUND(SUM(bedfee))                                                                                                              AS bedfee,") \
		_T("       ROUND(SUM(transportfee))                                                                                                        AS transportfee,") \
		_T("       CASE") \
		_T("         WHEN SUM(is_scoliosis) > 0") \
		_T("         THEN ROUND(SUM(v_inspaid))") \
		_T("         ELSE ROUND(SUM(inspaid))") \
		_T("       END                  AS cost,") \
		_T("       ROUND(SUM(otherfee)) AS otherfee,") \
		_T("       ROUND(SUM(scoliosisfee)) scoliosisfee,") \
		_T("       ROUND(SUM(l_materialfee)) l_materialfee,") \
		_T("       ROUND(SUM(l_discount)) l_discount,") \
		_T("       ROUND(SUM(l_materialfee - l_discount)) l_diffpaid,") \
		_T("       CASE") \
		_T("         WHEN SUM(is_scoliosis) > 0") \
		_T("         THEN ROUND(SUM(v_discount))") \
		_T("         ELSE ROUND(SUM(discount))") \
		_T("       END AS inspaid,") \
		_T("       CASE") \
		_T("         WHEN SUM(is_scoliosis) > 0") \
		_T("         THEN ROUND(SUM(v_inspaid - v_discount))") \
		_T("         ELSE ROUND(SUM(inspaid   -discount))") \
		_T("       END                  AS patpaid,") \
		_T("       ROUND(SUM(diffpaid)) AS diffpaid,") \
		_T("       ROUND(SUM(food_fee)) AS food_fee,") \
		
		_T("       CASE") \
		_T("         WHEN hcr_result='1'") \
		_T("         THEN 1") \
		_T("         WHEN hcr_result='2'") \
		_T("         THEN 2") \
		_T("         WHEN hcr_result='4'") \
		_T("         THEN 4") \
		_T("         WHEN hcr_result IN ('5','6')") \
		_T("         THEN 5") \
		_T("         ELSE 3") \
		_T("       END AS ket_qua_dtri,") \
		_T("       CASE") \
		_T("         WHEN hcr_suggestion='F'") \
		_T("         THEN 2") \
		_T("         WHEN hcr_suggestion='T'") \
		_T("         AND hcr_result     ='8'") \
		_T("         THEN 3") \
		_T("         WHEN hcr_suggestion='T'") \
		_T("         AND hcr_result     ='7'") \
		_T("         THEN 4") \
		_T("         ELSE 1") \
		_T("       END AS tinh_trang_rv,") \
		_T("       CASE") \
		_T("         WHEN hc_area='KV1'") \
		_T("         THEN 'K1'") \
		_T("         WHEN hc_area='KV2'") \
		_T("         THEN 'K2'") \
		_T("         WHEN hc_area='KV3'") \
		_T("         THEN 'K3'") \
		_T("         ELSE ' '") \
		_T("       END AS ma_khuvuc,") \
		_T("       CASE") \
		_T("         WHEN hd_suggestion='D'") \
		_T("         THEN 3") \
		_T("         WHEN hd_suggestion='C'") \
		_T("         THEN 2") \
		_T("         ELSE 1") \
		_T("       END AS ma_loaikcb") \
		_T("     FROM") \
		_T("       (SELECT fi.hfe_deptid AS deptid,") \
		_T("         fi.hfe_class,") \
		_T("         fe.hfe_docno     AS docno,") \
		_T("         fi.hfe_objectid  AS objectid,") \
		_T("         fe.hfe_invoiceno AS invoiceno,") \
		_T("         fe.hfe_group     AS groupid,") \
		_T("         hcr_reldisease,") \
		_T("         CASE") \
		_T("           WHEN HTR_TREATTIME>0") \
		_T("           THEN TO_CHAR(HTR_ADMITDATE,'YYYYMMDDHH24MI')") \
		_T("           ELSE TO_CHAR(hcr_admitdate, 'YYYYMMDDHH24MI')") \
		_T("         END AS admitdate,") \
		_T("         CASE") \
		_T("           WHEN HTR_TREATTIME>0") \
		_T("           THEN TO_CHAR(HTR_DISCHARGEDATE,'YYYYMMDDHH24MI')") \
		_T("           ELSE TO_CHAR(hcr_dischargedate, 'YYYYMMDDHH24MI')") \
		_T("         END AS dischargedate,") \
		_T("         hcr_sumtreat,") \
		_T("         hcr_mainicd,") \
		_T("         hcr_maindisease,") \
		_T("         fi.hfe_date invoice_date,") \
		_T("         CASE") \
		_T("           WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6')") \
		_T("           AND fe.hfe_group NOT          IN ('A1400', 'A1500', 'A1600')") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS drugfee,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_group='A1400'") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS drugfeek,") \
		_T("         CASE") \
		_T("           WHEN (NVL(hfl_bloodfee, 'X') = 'Y'") \
		_T("           OR fe.hfe_group              ='A2000')") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS bloodfee,") \
		_T("         CASE") \
		_T("           WHEN SUBSTR(fe.hfe_group, 1, 2)='B1'") \
		_T("           AND NVL(hfl_bloodfee, 'X')    <> 'Y'") \
		_T("           AND fe.hfe_hitech              ='N'") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS testfee,") \
		_T("         CASE") \
		_T("           WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3')") \
		_T("           AND fe.hfe_hitech                ='N'") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS pacsfee,") \
		_T("         CASE") \
		_T("           WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5')") \
		_T("           AND fe.hfe_hitech                ='N'") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS normtechfee,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_hitech='Y'") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS hitechfee,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_group       IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
		_T("           AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT')") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS materialfee,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_group   IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
		_T("           AND fe.hfe_feegroup IN ('OPT_L', 'OPT')") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS replace_materialfee,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_group   IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
		_T("           AND fe.hfe_feegroup IN ('OPT_L', 'OPT')") \
		_T("           THEN fe.hfe_cost") \
		_T("           ELSE 0") \
		_T("         END AS ref_materialfee,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_group='C0000'") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS bedfee,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_group='E0000'") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS transportfee,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_group='F0000'") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS otherfee,") \
		_T("         0 scoliosisfee,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_feegroup = 'OPT_L'") \
		_T("           AND fe.hfe_type      = 'D'") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END l_materialfee,") \
		_T("         0 l_discount,") \
		_T("         fe.hfe_cost AS cost,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
		_T("           THEN fe.hfe_inspaid") \
		_T("           ELSE 0") \
		_T("         END AS inspaid,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
		_T("           THEN fe.hfe_discount") \
		_T("           ELSE 0") \
		_T("         END            AS discount,") \
		_T("         fe.hfe_patpaid AS patpaid,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
		_T("           THEN fe.hfe_diffcost") \
		_T("           ELSE 0") \
		_T("         END diffpaid,") \
		_T("         0 is_scoliosis,") \
		_T("         0 v_inspaid,") \
		_T("         0 v_discount,") \
		_T("         0 food_fee,") \
		_T("         hcr_result,") \
		_T("         hcr_suggestion") \
		_T("       FROM hms_clinical_record") \
		_T("       LEFT JOIN hms_treatment_record") \
		_T("       ON (hcr_docno = htr_docno)") \
		_T("       LEFT JOIN Hms_Fee_Approve fa") \
		_T("       ON (hcr_docno=fa.hfe_docno") \
		_T("       AND htr_idx  =fa.Hfe_Refidx)") \
		_T("       LEFT JOIN hms_fee_invoice fi") \
		_T("       ON (hcr_docno       = fi.hfe_docno") \
		_T("       AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
		_T("       LEFT JOIN hms_fee_view fe") \
		_T("       ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("       AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("       LEFT JOIN hms_fee_list") \
		_T("       ON (fe.hfe_itemid    = hfl_feeid)") \
		_T("       WHERE fi.hfe_class  IN('A', 'I')") \
		_T("       AND fe.hfe_discount  > 0") \
		_T("       AND fe.hfe_category <> 'Y'") \
		_T("       AND htr_status       ='T'") \
		_T("       AND fe.hfe_type     <> 'V'") \
		_T("       AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("       AND fi.hfe_status             = 'P'") \
		_T("       AND NVL(htr_outpatient, 'X') <> 'Y'") \
		_T("       AND fe.hfe_group             <> 'D0000'") \
		_T("       UNION ALL") \
		_T("       SELECT fi.hfe_deptid AS deptid,") \
		_T("         fi.hfe_class,") \
		_T("         fe.hfe_docno     AS docno,") \
		_T("         fi.hfe_objectid  AS objectid,") \
		_T("         fe.hfe_invoiceno AS invoiceno,") \
		_T("         fe.hfe_group     AS groupid,") \
		_T("         hcr_reldisease,") \
		_T("         CASE") \
		_T("           WHEN HTR_TREATTIME>0") \
		_T("           THEN TO_CHAR(HTR_ADMITDATE,'YYYYMMDDHH24MI')") \
		_T("           ELSE TO_CHAR(hcr_admitdate, 'YYYYMMDDHH24MI')") \
		_T("         END AS admitdate,") \
		_T("         CASE") \
		_T("           WHEN HTR_TREATTIME>0") \
		_T("           THEN TO_CHAR(HTR_DISCHARGEDATE,'YYYYMMDDHH24MI')") \
		_T("           ELSE TO_CHAR(hcr_dischargedate, 'YYYYMMDDHH24MI')") \
		_T("         END AS dischargedate,") \
		_T("         hcr_sumtreat,") \
		_T("         hcr_mainicd,") \
		_T("         hcr_maindisease,") \
		_T("         fi.hfe_date invoice_date,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         CASE") \
		_T("           WHEN NVL(ho_scoliosis, 'N') = 'Y'") \
		_T("           THEN fe.hfe_discount") \
		_T("           ELSE 0") \
		_T("         END,") \
		_T("         0,") \
		_T("         CASE") \
		_T("           WHEN NVL(ho_scoliosis, 'N') <> 'Y'") \
		_T("           THEN fe.hfe_discount") \
		_T("           ELSE 0") \
		_T("         END,") \
		_T("         fe.hfe_cost AS cost,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_feegroup       IN ('HITECH_L', 'OPT_L')") \
		_T("           AND NVL(ho_scoliosis, 'N') <> 'Y'") \
		_T("           THEN fe.hfe_discount / hd_disrate * 100") \
		_T("           ELSE 0") \
		_T("         END AS inspaid,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_feegroup       IN ('HITECH_L', 'OPT_L')") \
		_T("           AND NVL(ho_scoliosis, 'N') <> 'Y'") \
		_T("           THEN fe.hfe_discount") \
		_T("           ELSE 0") \
		_T("         END            AS discount,") \
		_T("         fe.hfe_patpaid AS patpaid,") \
		_T("         CASE") \
		_T("           WHEN NVL(ho_scoliosis, 'N') = 'Y'") \
		_T("           THEN 0") \
		_T("           ELSE fe.hfe_diffcost") \
		_T("         END diffpaid,") \
		_T("         CASE") \
		_T("           WHEN NVL(ho_scoliosis, 'N') = 'Y'") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END is_scoliosis,") \
		_T("         fe.hfe_discount / hd_disrate * 100 AS hfe_inspaid,") \
		_T("         fe.hfe_discount,") \
		_T("         0 food_fee,") \
		_T("         hcr_result,") \
		_T("         hcr_suggestion") \
		_T("       FROM hms_clinical_record") \
		_T("       LEFT JOIN hms_treatment_record") \
		_T("       ON (hcr_docno = htr_docno)") \
		_T("       LEFT JOIN Hms_Fee_Approve fa") \
		_T("       ON (hcr_docno=fa.hfe_docno") \
		_T("       AND htr_idx  =fa.Hfe_Refidx)") \
		_T("       LEFT JOIN hms_fee_invoice fi") \
		_T("       ON (hcr_docno       = fi.hfe_docno") \
		_T("       AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
		_T("       LEFT JOIN hms_fee_view fe") \
		_T("       ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("       AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("       LEFT JOIN hms_operation") \
		_T("       ON (ho_docno  = hcr_docno") \
		_T("       AND ho_itemid = hfe_subgroup") \
		_T("       AND ho_idx    = hfe_orderid)") \
		_T("       LEFT JOIN hms_doc") \
		_T("       ON(hd_docno          = hcr_docno)") \
		_T("       WHERE fi.hfe_class  IN('A', 'I')") \
		_T("       AND fe.hfe_discount  > 0") \
		_T("       AND fe.hfe_category <> 'Y'") \
		_T("       AND htr_status       ='T'") \
		_T("       AND fe.hfe_type      = 'V'") \
		_T("       AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("       AND fi.hfe_status             = 'P'") \
		_T("       AND NVL(htr_outpatient, 'X') <> 'Y'") \
		_T("       AND fe.hfe_group             <> 'D0000'") \
		_T("       UNION ALL") \
		_T("       SELECT fi.hfe_deptid AS deptid,") \
		_T("         fi.hfe_class,") \
		_T("         fe.hfe_docno     AS docno,") \
		_T("         fi.hfe_objectid  AS objectid,") \
		_T("         fe.hfe_invoiceno AS invoiceno,") \
		_T("         fe.hfe_group     AS groupid,") \
		_T("         hcr_reldisease,") \
		_T("         CASE") \
		_T("           WHEN HTR_TREATTIME>0") \
		_T("           THEN TO_CHAR(HTR_ADMITDATE,'YYYYMMDDHH24MI')") \
		_T("           ELSE TO_CHAR(hcr_admitdate, 'YYYYMMDDHH24MI')") \
		_T("         END AS admitdate,") \
		_T("         CASE") \
		_T("           WHEN HTR_TREATTIME>0") \
		_T("           THEN TO_CHAR(HTR_DISCHARGEDATE,'YYYYMMDDHH24MI')") \
		_T("           ELSE TO_CHAR(hcr_dischargedate, 'YYYYMMDDHH24MI')") \
		_T("         END AS dischargedate,") \
		_T("         hcr_sumtreat,") \
		_T("         hcr_mainicd,") \
		_T("         hcr_maindisease,") \
		_T("         fi.hfe_date invoice_date,") \
		_T("         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
		_T("         0,") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
		_T("           THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
		_T("           ELSE 0") \
		_T("         END AS diffpaid,") \
		_T("         0,") \
		_T("         0,") \
		_T("         0,") \
		_T("         (") \
		_T("         CASE") \
		_T("           WHEN fe.hfe_type = 'F'") \
		_T("           THEN fe.hfe_patpaid") \
		_T("           ELSE 0") \
		_T("         END) food_fee,") \
		_T("         hcr_result,") \
		_T("         hcr_suggestion") \
		_T("       FROM hms_clinical_record") \
		_T("       LEFT JOIN hms_treatment_record") \
		_T("       ON (hcr_docno = htr_docno)") \
		_T("       LEFT JOIN Hms_Fee_Approve fa") \
		_T("       ON (hcr_docno=fa.hfe_docno") \
		_T("       AND htr_idx  =fa.Hfe_Refidx)") \
		_T("       LEFT JOIN hms_fee_invoice fi") \
		_T("       ON (hcr_docno       = fi.hfe_docno") \
		_T("       AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
		_T("       LEFT JOIN hms_fee_view fe") \
		_T("       ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("       AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("       LEFT JOIN hms_fee_list") \
		_T("       ON (fe.hfe_itemid    = hfl_feeid)") \
		_T("       WHERE fi.hfe_class  IN('A', 'I')") \
		_T("       AND fe.hfe_discount  = 0") \
		_T("       AND fe.hfe_category <> 'Y'") \
		_T("       AND htr_status       ='T'") \
		_T("       AND fe.hfe_type     <> 'V'") \
		_T("       AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T("       AND fi.hfe_status             = 'P'") \
		_T("       AND NVL(htr_outpatient, 'X') <> 'Y'") \
		_T("       AND fe.hfe_group             <> 'D0000'") \
		_T("       ) tbl") \
		_T("     LEFT JOIN hms_doc") \
		_T("     ON(docno=hd_docno)") \
		_T("     LEFT JOIN hms_patient") \
		_T("     ON(hd_patientno=hp_patientno)") \
		_T("     LEFT JOIN hms_card") \
		_T("     ON(hc_patientno=hp_patientno") \
		_T("     AND hc_idx     =hd_cardidx)") \
		_T("     LEFT JOIN hms_object") \
		_T("     ON(ho_id=objectid)") \
		_T("     LEFT JOIN hms_icd") \
		_T("     ON(hcr_mainicd=hi_icd)") \
		_T("     LEFT JOIN hms_insurance_group") \
		_T("     ON (hig_idx    = hc_groupid)") \
		_T("     WHERE 1        =1") \
		_T("     AND ho_type   IN ('I', 'C')") \
		_T("     AND hd_cardno IS NOT NULL") \
		_T("     GROUP BY hd_docno,") \
		_T("       hp_surname,") \
		_T("       hp_midname,") \
		_T("       hp_firstname,") \
		_T("       hp_birthdate,") \
		_T("       hp_sex,") \
		_T("       hc_cardno,") \
		_T("       hd_insline,") \
		_T("       hd_rank,") \
		_T("       hp_workplace,") \
		_T("       hc_groupid,") \
		_T("       hc_line,") \
		_T("       hd_insline,") \
		_T("       hc_regcode,") \
		_T("       hcr_mainicd,") \
		_T("       hcr_maindisease,") \
		_T("       admitdate,") \
		_T("       dischargedate,") \
		_T("       hcr_sumtreat,") \
		_T("       hp_provid,") \
		_T("       hp_distid,") \
		_T("       hp_villid,") \
		_T("       hc_regdate,") \
		_T("       hc_expdate,") \
		_T("       hcr_reldisease,") \
		_T("       hi_name,") \
		_T("       hd_emergency,") \
		_T("       deptid,") \
		_T("       hd_admitdept,") \
		_T("       invoice_date,") \
		_T("       hig_group,") \
		_T("       hd_transplaceid,") \
		_T("       hcr_result,") \
		_T("       hcr_suggestion,") \
		_T("       hc_area,") \
		_T("       hd_suggestion") \
		_T("     HAVING SUM(cost)           > 0") \
		_T("     AND SUM(inspaid-discount) >= 0") \
		_T("     ORDER BY dischargedate,") \
		_T("       deptid,") \
		_T("       hp_surname,") \
		_T("       hp_midname,") \
		_T("       hp_firstname") \
		_T("     )"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);	rs.ExecSQL(szSQL);		nRow = 1;	nCol = 0;	while(!rs.IsEOF())	{		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("ma_bn"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ho_ten"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ngay_sinh"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("gioi_tinh"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("dia_chi"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_the"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_dkbd"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
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
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("t_tongchi"), nTemp);		nGroupTotal[19] += nTemp;		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("t_xn"), nTemp);		nGroupTotal[20] += nTemp;		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("t_cdha"), nTemp);		nGroupTotal[21] += nTemp;		xls.SetCellText(nCol+21, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("t_thuoc"), nTemp);		nGroupTotal[22] += nTemp;		xls.SetCellText(nCol+22, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("t_mau"), nTemp);		nGroupTotal[23] += nTemp;		xls.SetCellText(nCol+23, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("t_pttt"), nTemp);		nGroupTotal[24] += nTemp;		xls.SetCellText(nCol+24, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("t_vtth"), nTemp);		nGroupTotal[25] += nTemp;		xls.SetCellText(nCol+25, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("t_dvkt_tyle"), nTemp);		nGroupTotal[26] += nTemp;		xls.SetCellText(nCol+26, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("t_thuoc_tyle"), nTemp);		nGroupTotal[27] += nTemp;		xls.SetCellText(nCol+27, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("t_vtyt_tyle"), nTemp);
		nGroupTotal[28] += nTemp;
		xls.SetCellText(nCol+28, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("t_kham"), nTemp);		nGroupTotal[29] += nTemp;		xls.SetCellText(nCol+29, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("t_giuong"), nTemp);
		nGroupTotal[30] += nTemp;
		xls.SetCellText(nCol+30, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("t_vchuyen"), nTemp);
		nGroupTotal[31] += nTemp;
		xls.SetCellText(nCol+31, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("t_bntt"), nTemp);		nGroupTotal[32] += nTemp;		xls.SetCellText(nCol+32, nRow, double2str(nTemp), FMT_NUMBER1);		rs.GetValue(_T("t_bhtt"), nTemp);		nGroupTotal[33] += nTemp;		xls.SetCellText(nCol+33, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("t_ngoaids"), tmpStr);		xls.SetCellText(nCol+34, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("ma_khoa"), tmpStr);		xls.SetCellText(nCol+35, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("nam_qt"), tmpStr);
		xls.SetCellText(nCol+36, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("thang_qt"), tmpStr);		xls.SetCellText(nCol+37, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ma_khuvuc"), tmpStr);
		xls.SetCellText(nCol+38, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("ma_loaikcb"), tmpStr);
		xls.SetCellText(nCol+39, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("ma_cskcb"), tmpStr);		xls.SetCellText(nCol+40, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	if (nGroupTotal[19] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 19; i < 43; i++)
		{
			nTotal[i] += nGroupTotal[i];
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}	EndWaitCursor();	xls.Save(_T("Exports\\80a_Chuyen_len_cong_BH.xls"));
}
CString CFMInsuranceCost79_80A::GetQueryString_2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szSubSQL, szWhere, szSubWhere, szOrderBy, szTable, szObjectCondition, szHavingClause;
	CString szDepts, szCards;
	CString tmpStr, szTemp, szMaterialID;
	int nIndex = 0;

	szWhere.Empty();
	szSubWhere.Empty();
	szDepts.Empty();
	szCards.Empty();


	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND fi.hfe_staff='%s' "), m_szClerkKey);

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND fi.hfe_deptid IN(%s) "), szDepts);
	}

	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (m_wndCardList.GetCheck(i))
		{
			tmpStr = m_wndCardList.GetItemText(i, 0);
			if (tmpStr.Find(_T(',')) > -1)
				tmpStr.Replace(_T(","), _T("','"));
			if (!szCards.IsEmpty())
				szCards += _T(",");
			szCards.AppendFormat(_T("'%s'"), tmpStr);
		}
	}

	if (!szCards.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND substr(hd_cardno,1,2) IN(%s) "), szCards);
		//MessageBox(szCards);
	}
	szSQL.Format(_T("SELECT hsd_id id FROM hms_surgery_drugtype WHERE hsd_type = 'M'"));
	rs.ExecSQL(szSQL);
// 	while (!rs.IsEOF())
// 	{
// 		if (!szMaterialID.IsEmpty())
// 			szMaterialID += _T(", ");
// 		szMaterialID.AppendFormat(_T("'%s'"),rs.GetValue(_T("id")));
// 		rs.MoveNext();
// 	}
// 	if (!szMaterialID.IsEmpty())
// 		szMaterialID += _T(", ");
// 	szMaterialID += _T("'A1500', 'A1600'");
	szOrderBy = _T(" insline, insgroup, hdline, admitdate, docno, cardno)");
	if (m_bIsInsPurpose)
		szOrderBy = _T(" to_date(dischargedate, 'dd/mm/yyyy') , deptid, hp_surname, hp_midname, hp_firstname)");
	if (m_bByDischargedDate)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee IN ('P', 'Y') AND hcr_status='T'"), m_szFromDate, m_szToDate);
	else if (m_bUnapproved)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bInsuranceApproval)
		szWhere.AppendFormat(_T(" AND hfe_approveddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hfe_approved = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bLockedDate)
		szWhere.AppendFormat(_T(" AND fi.hfe_lockeddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							 _T(" AND fi.hfe_locked = 'Y'"), m_szFromDate, m_szToDate);
	else
		szWhere.AppendFormat(_T(" AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND fi.hfe_status = 'P'"), m_szFromDate, m_szToDate);
	if (m_bOnlyCommander)
		szSubWhere.AppendFormat(_T(" AND hd_rank IN (15, 16, 17, 18, 21, 22, 23, 24)"));
	szObjectCondition = _T(" AND ho_type IN ('I', 'C') AND hd_cardno IS NOT NULL");
	if (m_bSoldierPatient)
		szObjectCondition = _T(" AND hd_object = 1");
	szSubWhere += szObjectCondition;
	szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'X') <> 'Y' AND fe.hfe_group <> 'D0000'"));
	if (m_bOnlyCommander || (szCards == _T("'QN'")))
		m_bShowDiff = true;
	else
		m_bShowDiff = false;
	//Hien chenh lech tat ca doi tuong
	m_bShowDiff = true;
	if (m_bOverceilMaterial)
		szHavingClause.Format(_T(" AND SUM(l_materialfee) > 0"));
	if (m_bShowDiff)
		szSubSQL.Format(_T("UNION ALL") \
				_T("		SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid    AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_ADMITDATE,'YYYYMMDDHH24MI') ELSE to_char(hcr_admitdate, 'YYYYMMDDHH24MI')  END AS admitdate,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_DISCHARGEDATE,'YYYYMMDDHH24MI') ELSE to_char(hcr_dischargedate, 'YYYYMMDDHH24MI') END AS dischargedate,") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease,hcr_suggestion, hcr_result, fi.hfe_date invoice_date,") \
				_T("         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') ") \
				_T("		 THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
				_T("		 ELSE 0 END AS diffpaid, 0, 0, 0, (CASE WHEN fe.hfe_type = 'F' THEN fe.hfe_patpaid ELSE 0 END) food_fee") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount = 0 AND fe.hfe_category <> 'Y' AND htr_status='T'") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("    %s"), szWhere);
    szSQL.Format(_T(" SELECT ") \
				_T(" docno,invoiceno,pname,mbirthyear,fbirthyear,sex,address,reldisease,cardno,regdate,expdate,hdline,regplace,insline,soldier_rank,work_place,linename,insgroup,") \
				_T(" ma_noi_chuyen,admitdate,dischargedate,totaltreat,hcr_mainicd,icd10,emergency,deptid,nam_qt,thang_qt,ma_loaikcb,ma_khuvuc,ket_qua_dtri,tinh_trang_rv,invoice_date,") \
				_T(" inscost,drugfee,drugfeek,bloodfee,testfee,pacsfee,normtechfee,hitechfee,materialfee,replace_materialfee,ref_materialfee,bedfee,transportfee,") \
				_T(" cost,otherfee,scoliosisfee,l_materialfee,l_discount,l_diffpaid,inspaid,patpaid,diffpaid,food_fee,inscost-inspaid AS inspatpaid") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT hd_docno AS docno,") \
				_T("        max(invoiceno) AS invoiceno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname,") \
				_T("        case when hp_sex='M' THEN TO_CHAR(hp_birthdate, 'YYYYMMDD') END AS mbirthyear,") \
				_T("        case when hp_sex='F' THEN TO_CHAR(hp_birthdate, 'YYYYMMDD') END AS fbirthyear,") \
				_T("        hp_sex AS sex,") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
				_T("        hcr_reldisease as reldisease,") \
				_T("        CASE WHEN LENGTH(hc_cardno) > 15 THEN SUBSTR(hc_cardno,1,15) ELSE hc_cardno END AS cardno,") \
				_T("        TO_CHAR(hc_regdate, 'YYYYMMDD') AS regdate,") \
				_T("        TO_CHAR(hc_expdate, 'YYYYMMDD') AS expdate,") \
				_T("        CASE WHEN hd_insline='Y' THEN 1 ELSE 0 END AS hdline,") \
				_T("        hc_regcode AS regplace,") \
				_T("        hc_line AS insline,") \
				_T("		get_syssel_desc('hms_rank', hd_rank) soldier_rank,") \
				_T("		hp_workplace work_place,") \
				_T("		DECODE(hc_line, 1, 'A', 2, 'B', 3, 'C') AS linename,") \
				_T("        hig_group AS insgroup,") \
				_T("        hd_transplaceid                         AS ma_noi_chuyen,") \
				_T("        admitdate,") \
				_T("        dischargedate,") \
				_T("        hcr_sumtreat AS totaltreat,") \
				_T("        hcr_mainicd,") \
				_T("        hcr_maindisease AS icd10,") \
				_T("        hd_emergency AS emergency,") \
				_T("        (SELECT sd_insuranceid FROM sys_dept WHERE sd_id = deptid) AS deptid,") \
				_T("   extract(YEAR FROM invoice_date)  AS nam_qt,") \
				_T("   extract(MONTH FROM invoice_date) AS thang_qt,") \
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
				_T("   CASE") \
				_T("     WHEN hcr_result='1'") \
				_T("     THEN 1") \
				_T("     WHEN hcr_result='2'") \
				_T("     THEN 2") \
				_T("     WHEN hcr_result='4'") \
				_T("     THEN 4") \
				_T("     WHEN hcr_result IN ('5','6')") \
				_T("     THEN 5") \
				_T("     ELSE 3") \
				_T("   END AS ket_qua_dtri,") \
				_T("   CASE") \
				_T("     WHEN hcr_suggestion='F'") \
				_T("     THEN 2") \
				_T("     WHEN hcr_suggestion='T'") \
				_T("     AND hcr_result     ='8'") \
				_T("     THEN 3") \
				_T("     WHEN hcr_suggestion='T'") \
				_T("     AND hcr_result     ='7'") \
				_T("     THEN 4") \
				_T("     ELSE 1") \
				_T("   END AS tinh_trang_rv,") \
				_T("		TO_CHAR(invoice_date, 'DD/MM/YYYY') invoice_date,") \
				_T("		round(SUM(drugfee+drugfeek+bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee+transportfee)) AS inscost,") \
				_T("        round(SUM(drugfee)) AS drugfee,") \
				_T("        round(SUM(drugfeek)) AS drugfeek,") \
				_T("        round(SUM(bloodfee)) AS bloodfee,") \
				_T("        round(SUM(testfee)) AS testfee,") \
				_T("        round(SUM(pacsfee)) AS pacsfee,") \
				_T("        round(SUM(normtechfee)) AS normtechfee,") \
				_T("        round(SUM(hitechfee)) AS hitechfee,") \
				_T("        round(SUM(materialfee)) AS materialfee,") \
				_T("        round(SUM(replace_materialfee)) AS replace_materialfee,") \
				_T("        round(SUM(ref_materialfee)) AS ref_materialfee,") \
				_T("        round(SUM(bedfee)) AS bedfee,") \
				_T("        round(SUM(transportfee)) AS transportfee,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid)) ELSE ROUND(SUM(inspaid)) END AS cost,") \
				_T("        round(SUM(otherfee)) AS otherfee,") \
				_T("		round(SUM(scoliosisfee)) scoliosisfee,") \
				_T("		round(SUM(l_materialfee)) l_materialfee,") \
				_T("		round(SUM(l_discount)) l_discount,") \
				_T("		round(SUM(l_materialfee - l_discount)) l_diffpaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_discount)) ELSE ROUND(SUM(discount)) END AS inspaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid - v_discount)) ELSE ROUND(SUM(inspaid-discount)) END AS patpaid,") \
				_T("		round(SUM(diffpaid)) AS diffpaid,") \
				_T("		round(SUM(food_fee)) AS food_fee") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_ADMITDATE,'YYYYMMDDHH24MI') ELSE to_char(hcr_admitdate, 'YYYYMMDDHH24MI')  END AS admitdate,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_DISCHARGEDATE,'YYYYMMDDHH24MI') ELSE to_char(hcr_dischargedate, 'YYYYMMDDHH24MI') END AS dischargedate,") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease,hcr_suggestion, hcr_result, fi.hfe_date invoice_date,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6') AND fe.hfe_group NOT IN ('A1400', 'A1500', 'A1600') THEN fe.hfe_inspaid ELSE 0 END AS drugfee,") \
				_T("         CASE WHEN fe.hfe_group='A1400' THEN fe.hfe_inspaid ELSE 0 END AS drugfeek,") \
				_T("         CASE WHEN (NVL(hfl_bloodfee, 'X') = 'Y' OR fe.hfe_group='A2000') THEN fe.hfe_inspaid ELSE 0 END AS bloodfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2)='B1' AND NVL(hfl_bloodfee, 'X') <> 'Y'") \
				_T("		 AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS testfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS pacsfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS normtechfee,") \
				_T("         CASE WHEN fe.hfe_hitech='Y' THEN fe.hfe_inspaid ELSE 0 END AS hitechfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS replace_materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_cost ELSE 0 END AS ref_materialfee,") \
				_T("         CASE WHEN fe.hfe_group='C0000' THEN fe.hfe_inspaid ELSE 0 END AS bedfee,") \
				_T("         CASE WHEN fe.hfe_group='E0000' THEN fe.hfe_inspaid ELSE 0 END AS transportfee,") \
				_T("         CASE WHEN fe.hfe_group='F0000' THEN fe.hfe_inspaid ELSE 0 END AS otherfee,") \
				_T("		 0 scoliosisfee,") \
				_T("		 CASE WHEN fe.hfe_feegroup = 'OPT_L' AND fe.hfe_type = 'D' THEN fe.hfe_inspaid ELSE 0 END l_materialfee,") \
				_T("		 0 l_discount, ") \
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_inspaid ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_diffcost ELSE 0 END diffpaid, 0 is_scoliosis, 0 v_inspaid, 0 v_discount, 0 food_fee ") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y' AND htr_status='T'") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("   %s") \
				_T("   UNION ALL") \
				_T("   SELECT fi.hfe_deptid as deptid,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_ADMITDATE,'YYYYMMDDHH24MI') ELSE to_char(hcr_admitdate, 'YYYYMMDDHH24MI')  END AS admitdate,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_DISCHARGEDATE,'YYYYMMDDHH24MI') ELSE to_char(hcr_dischargedate, 'YYYYMMDDHH24MI') END AS dischargedate,") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease,hcr_suggestion, hcr_result, fi.hfe_date invoice_date,") \
				_T("		 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN fe.hfe_discount ELSE 0 END,") \
				_T("		 0, CASE WHEN NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END,")
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount / hd_disrate * 100 ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 0 ELSE fe.hfe_diffcost END diffpaid,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END is_scoliosis, fe.hfe_discount / hd_disrate * 100 AS hfe_inspaid, fe.hfe_discount, 0 food_fee") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_operation ON (ho_docno = hcr_docno AND ho_itemid = hfe_subgroup AND ho_idx = hfe_orderid)") \
				_T("   LEFT JOIN hms_doc ON(hd_docno = hcr_docno)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category <> 'Y' AND htr_status='T'") \
				_T("         AND fe.hfe_type = 'V' ") \
				_T("   %s %s") \
				_T(" ) tbl") \
				_T(" LEFT JOIN hms_doc ON(docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
				_T(" LEFT JOIN hms_object ON(ho_id=objectid)") \
				_T(" LEFT JOIN hms_icd ON(hcr_mainicd=hi_icd)") \
				_T(" LEFT JOIN hms_insurance_group ON (hig_idx= hc_groupid)") \
				_T(" WHERE 1=1 ") \
				_T(" %s") \
				_T(" GROUP BY hd_docno, hp_surname, hp_midname, hp_firstname, hp_birthdate, hp_sex, hc_cardno, hd_insline, hd_rank, hp_workplace,") \
				_T("		  hc_groupid, hc_line, hd_insline, hc_regcode, hcr_mainicd, hcr_maindisease, admitdate, dischargedate, ") \
				_T("		  hcr_sumtreat, hp_provid, hp_distid, hp_villid, hc_regdate, hc_expdate, hcr_reldisease, hi_name, ") \
				_T("		  hd_emergency, deptid, hd_admitdept, invoice_date, hig_group,hd_transplaceid,  hc_area,  hcr_suggestion,  hcr_result,  hd_suggestion") \
				_T(" HAVING SUM(cost) > 0 AND SUM(inspaid-discount) >= 0 ") \
				_T(" %s") \
				_T(" ORDER BY ") \
				_T(" %s"), szWhere, szWhere, szSubSQL, szSubWhere, szHavingClause, szOrderBy);
				//_msg(_T("%s"), szSQL);

	return szSQL;
}
void CFMInsuranceCost79_80A::OnExportSelect_6()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szTemp, szFromDateToDate, szDate, szMonth, szYear;
	BeginWaitCursor();
	UpdateData();	
	
	ShowMessageBox(_T("Đối chiếu số liệu báo cáo với số liệu đẩy lên cổng BH!"), MB_OK | MB_ICONWARNING);
	rs.ExecSQL(GetQueryString_6());
	//MessageBox(GetQueryString_6());
	//_msg(_T("%s"), GetQueryString_6());
	
	if (rs.IsEOF()){
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	CDate dt1, dt2;
	dt1.ParseDate(m_szFromDate);
	dt2.ParseDate(m_szToDate);
	if (dt1.GetYear() == dt2.GetYear()) szYear.Format(_T("%d"), dt1.GetYear());
	else szYear.Format(_T("%d"), dt2.GetYear());

	if (dt1.GetMonth() == dt2.GetMonth()) szMonth.Format(_T("%d"), dt1.GetMonth());
	else szMonth.Format(_T("%d"), dt2.GetMonth());
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 17);
	xls.SetColumnWidth(2, 7);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 16);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 24);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 8);
	xls.SetColumnWidth(18, 8);
	xls.SetColumnWidth(19, 8);
	xls.SetColumnWidth(20, 8);
	xls.SetColumnWidth(21, 8);
	xls.SetColumnWidth(22, 8);
	xls.SetColumnWidth(23, 8);
	xls.SetColumnWidth(24, 8);
	xls.SetColumnWidth(25, 6);
	xls.SetColumnWidth(26, 9);
	xls.SetColumnWidth(27, 6);
	xls.SetColumnWidth(28, 5);
	xls.SetColumnWidth(29, 6);
	xls.SetColumnWidth(30, 7);
	xls.SetColumnWidth(31, 10);
	xls.SetColumnWidth(32, 10);
	xls.SetColumnWidth(33, 44);
	xls.SetColumnWidth(34, 8);
	xls.SetColumnWidth(35, 9);
	xls.SetColumnWidth(36, 6);
	xls.SetColumnWidth(37, 8);
	xls.SetColumnWidth(38, 8);
	xls.SetColumnWidth(39, 6);
	xls.SetColumnWidth(40, 8);
	xls.SetColumnWidth(41, 10);
	xls.SetColumnWidth(42, 7);
	xls.SetColumnWidth(43, 5);
	xls.SetColumnWidth(44, 10);
	xls.SetColumnWidth(45, 15);
	xls.SetColumnWidth(46, 20);
	xls.SetColumnWidth(47, 10);
	xls.SetColumnWidth(48, 20);
	xls.SetColumnWidth(49, 30);
	xls.SetColumnWidth(50, 12);
	xls.SetColumnWidth(51, 12);
	xls.SetColumnWidth(52, 12);
	xls.SetColumnWidth(53, 12);
	xls.SetColumnWidth(54, 30);
	xls.SetColumnWidth(55, 12);
	xls.SetColumnWidth(56, 12);
	xls.SetColumnWidth(57, 12);
	xls.SetColumnWidth(58, 12);
	xls.SetColumnWidth(59, 12);
	xls.SetColumnWidth(60, 12);
	xls.SetColumnWidth(61, 12);
	xls.SetColumnWidth(62, 12);
	xls.SetColumnWidth(63, 12);
	xls.SetColumnWidth(64, 12);
	xls.SetColumnWidth(65, 12);
	xls.SetColumnWidth(66, 12);
	xls.SetColumnWidth(67, 15);
	xls.SetColumnWidth(68, 15);
	xls.SetColumnWidth(69, 15);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 5);
	xls.SetCellMergedColumns(37, 1, 7);
	xls.SetCellMergedColumns(37, 2, 7);
	xls.SetCellMergedColumns(0, 3, 44);
	xls.SetCellMergedColumns(0, 4, 44);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(37, 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(37, 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA TH\x41NH TO\xC1N \x43HI PH\xCD KH\xC1M \x43H\x1EEE\x41 \x42\x1EC6NH N\x1ED8I TR\xDA"), FMT_TEXT|FMT_CENTER, true, 18);
	TranslateString(_T("From Date"), tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	TranslateString(_T("To Date"), tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));	
	xls.SetCellText(0, 4, szFromDateToDate, FMT_TEXT | FMT_CENTER, true, 12);
	int nRow = 6, nCol = 0;
	xls.SetCellText(0, nRow, _T("stt"), FMT_TEXT);
	xls.SetCellText(1, nRow, _T("hoten"), FMT_TEXT);	
	xls.SetCellText(2, nRow, _T("namsinh"), FMT_TEXT);
	xls.SetCellText(3, nRow, _T("gioitinh"), FMT_TEXT);
	xls.SetCellText(4, nRow, _T("mathe"), FMT_TEXT);
	xls.SetCellText(5, nRow, _T("ma_dkbd"), FMT_TEXT);	
	xls.SetCellText(6, nRow, _T("mabenh"), FMT_TEXT);
	xls.SetCellText(7, nRow, _T("ngay_vao"), FMT_TEXT);
	xls.SetCellText(8, nRow, _T("ngay_ra"), FMT_TEXT);
	xls.SetCellText(9, nRow, _T("ngay_dtr"), FMT_TEXT);	
	xls.SetCellText(10, nRow, _T("t_tongchi"), FMT_TEXT);
	xls.SetCellText(11, nRow, _T("t_xn"), FMT_TEXT);	
	xls.SetCellText(12, nRow, _T("t_cdha"), FMT_TEXT);
	xls.SetCellText(13, nRow, _T("t_thuoc"), FMT_TEXT);
	xls.SetCellText(14, nRow, _T("t_mau"), FMT_TEXT);	
	xls.SetCellText(15, nRow, _T("t_pttt"), FMT_TEXT);
	xls.SetCellText(16, nRow, _T("t_vtytth"), FMT_TEXT);
	xls.SetCellText(17, nRow, _T("t_vtyttt"), FMT_TEXT);
	xls.SetCellText(18, nRow, _T("t_dvktc"), FMT_TEXT);	
	xls.SetCellText(19, nRow, _T("t_ktg"), FMT_TEXT);
	xls.SetCellText(20, nRow, _T("t_giuong"), FMT_TEXT);
	xls.SetCellText(21, nRow, _T("t_vchuyen"), FMT_TEXT);	
	xls.SetCellText(22, nRow, _T("t_bnct"), FMT_TEXT);	
	xls.SetCellText(23, nRow, _T("t_bhtt"), FMT_TEXT);
	xls.SetCellText(24, nRow, _T("nguon_bqp"), FMT_TEXT);
	xls.SetCellText(25, nRow, _T("t_ngoaids"), FMT_TEXT);
	xls.SetCellText(26, nRow, _T("lydo_vv"), FMT_TEXT);
	xls.SetCellText(27, nRow, _T("benhkhac"), FMT_TEXT);
	xls.SetCellText(28, nRow, _T("noikcb"), FMT_TEXT);
	xls.SetCellText(29, nRow, _T("khoa"), FMT_TEXT);
	xls.SetCellText(30, nRow, _T("nam_qt"), FMT_TEXT);
	xls.SetCellText(31, nRow, _T("thang_qt"), FMT_TEXT);
	xls.SetCellText(32, nRow, _T("gt_tu"), FMT_TEXT);
	xls.SetCellText(33, nRow, _T("gt_den"), FMT_TEXT);
	xls.SetCellText(34, nRow, _T("diachi"), FMT_TEXT);
	xls.SetCellText(35, nRow, _T("giamdinh"), FMT_TEXT);
	xls.SetCellText(36, nRow, _T("t_xuattoan"), FMT_TEXT);
	xls.SetCellText(37, nRow, _T("lydo_xt"), FMT_TEXT);
	xls.SetCellText(38, nRow, _T("t_datuyen"), FMT_TEXT);
	xls.SetCellText(39, nRow, _T("t_vuottran"), FMT_TEXT);
	xls.SetCellText(40, nRow, _T("loaikcb"), FMT_TEXT);
	xls.SetCellText(41, nRow, _T("noi_ttoan"), FMT_TEXT);
	xls.SetCellText(42, nRow, _T("sophieu"), FMT_TEXT);
	xls.SetCellText(43, nRow, _T("maicd10"), FMT_TEXT);
	xls.SetCellText(44, nRow, _T("tuyen"), FMT_TEXT);
	xls.SetCellText(45, nRow, _T("nhom"), FMT_TEXT);
	xls.SetCellText(46, nRow, _T("ngay_tt"), FMT_TEXT);
	xls.SetCellText(47, nRow, _T("tt_vtyttt"), FMT_TEXT);
	xls.SetCellText(48, nRow, _T("chenh"), FMT_TEXT);
	xls.SetCellText(49, nRow, _T("ky_hieu"), FMT_TEXT);
	xls.SetCellText(50, nRow, _T("noi_lam_viec"), FMT_TEXT);

	xls.SetCellText(51, nRow, _T("t_vattuvt"), FMT_TEXT);
	xls.SetCellText(52, nRow, _T("t_bhttvt"), FMT_TEXT);
	xls.SetCellText(53, nRow, _T("t_vattuvtchenh"), FMT_TEXT);
	xls.SetCellText(54, nRow, _T("t_an"), FMT_TEXT);
	xls.SetCellText(55, nRow, _T("t_an_nn"), FMT_TEXT);
	xls.SetCellText(56, nRow, _T("doi_tuong"), FMT_TEXT);

	xls.SetCellText(57, nRow, _T("t_xn_chenh"), FMT_TEXT);
	xls.SetCellText(58, nRow, _T("t_cdha_chenh"), FMT_TEXT);
	xls.SetCellText(59, nRow, _T("t_thuoc_chenh"), FMT_TEXT);
	xls.SetCellText(60, nRow, _T("t_mau_chenh"), FMT_TEXT);
	xls.SetCellText(61, nRow, _T("t_pttt_chenh"), FMT_TEXT);
	xls.SetCellText(62, nRow, _T("t_vtytth_chenh"), FMT_TEXT);
	xls.SetCellText(63, nRow, _T("t_vtyttt_chenh"), FMT_TEXT);
	xls.SetCellText(64, nRow, _T("t_dvktc_chenh"), FMT_TEXT);
	xls.SetCellText(65, nRow, _T("t_ktg_chenh"), FMT_TEXT);
	xls.SetCellText(66, nRow, _T("t_giuong_chenh"), FMT_TEXT);
	xls.SetCellText(67, nRow, _T("t_phikhac_chenh"), FMT_TEXT);
	xls.SetCellText(68, nRow, _T("ma_lienket"), FMT_TEXT);
	xls.SetCellText(69, nRow, _T("nguon_tt"), FMT_TEXT);
	

	/*nCol = 44;
	if (m_bIsInsPurpose)
	{
		xls.SetCellText(nCol++, nRow, _T("nhom"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("ngay_tt"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("tt_vtyttt"), FMT_TEXT);
	}
	if (m_bShowDiff) xls.SetCellText(nCol++, nRow, _T("chenh"), FMT_TEXT);
	if (m_bSoldierPatient){
		xls.SetCellText(nCol++, nRow, _T("ky_hieu"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("noi_lam_viec"), FMT_TEXT);
	}
	xls.SetCellText(nCol++, nRow, _T("t_vattuvt"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("t_bhttvt"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("t_vattuvtchenh"), FMT_TEXT);
	if (m_bShowDiff) xls.SetCellText(nCol++, nRow, _T("t_an"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("doi_tuong"), FMT_TEXT);*/

	int nIndex = 1, nTemp = 0, nIncrement = 0;
	double nCost = 0;
	double nTotal[15];
	CellFormat xlsFormat(&xls);
	xlsFormat.SetCellStyle(FMT_INTEGER);
	CDate date;
	CString szNewLine, szOldLine;
	CString szNewGroup, szOldGroup;
	nCol = 0;//reinit
	for (int i = 0; i < 15; i++)
		nTotal[i] = 0;
	while (!rs.IsEOF()){
		if (!m_bIsInsPurpose)
			rs.GetValue(_T("insline"), szNewLine);
		if (szOldLine != szNewLine && !szNewLine.IsEmpty()){
			nRow++;
			xls.SetCellMergedColumns(nCol + 1, nRow, 9);
			rs.GetValue(_T("linename"), tmpStr);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
			szTemp.Format(_T("%s"), pMF->GetSelectionString(_T("hms_insline"), szNewLine));
			xls.SetCellText(nCol + 1, nRow, szTemp, FMT_TEXT, true);
			szOldLine = szNewLine;
			szOldGroup.Empty();
		}
		if (!m_bIsInsPurpose)
			rs.GetValue(_T("insgroup"), szNewGroup);

		if (szOldGroup != szNewGroup && !szNewGroup.IsEmpty()){
			nRow++;
			xls.SetCellText(nCol, nRow, szNewGroup, FMT_TEXT, true);
			xls.SetCellMergedColumns(nCol + 1, nRow, 9);
			tmpStr.Format(_T("%s"), pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nIndex = 1;
		}
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sex"), tmpStr);
		if (tmpStr == _T("F")){
			rs.GetValue(_T("fbirthyear"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER);
			xls.WriteNumber(nRow, nCol + 3, 2, &xlsFormat);
		}
		else{
			rs.GetValue(_T("mbirthyear"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER);

			xls.WriteNumber(nRow, nCol + 3, 1, &xlsFormat);
		}
		
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("regplace"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("admitdate"), tmpStr);
		//szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dischargedate"), tmpStr);
		//szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("totaltreat"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("inscost"), nCost);
		nTotal[0] += nCost;
		xls.WriteNumber(nRow, nCol + 10, nCost, &xlsFormat);

		rs.GetValue(_T("testfee"), nCost);
		nTotal[1] += nCost;
		xls.WriteNumber(nRow, nCol + 11, nCost, &xlsFormat);

		rs.GetValue(_T("pacsfee"), nCost);
		nTotal[2] += nCost;
		xls.WriteNumber(nRow, nCol + 12, nCost, &xlsFormat);

		rs.GetValue(_T("drugfee"), nCost);
		nTotal[3] += nCost;
		xls.WriteNumber(nRow, nCol + 13, nCost, &xlsFormat);

		rs.GetValue(_T("bloodfee"), nCost);
		nTotal[4] += nCost;
		xls.WriteNumber(nRow, nCol + 14, nCost, &xlsFormat);

		rs.GetValue(_T("normtechfee"), nCost);
		nTotal[5] += nCost;
		xls.WriteNumber(nRow, nCol + 15, nCost, &xlsFormat);

		rs.GetValue(_T("materialfee"), nCost);
		nTotal[6] += nCost;
		xls.WriteNumber(nRow, nCol + 16, nCost, &xlsFormat);

		rs.GetValue(_T("replace_materialfee"), nCost);
		nTotal[7] += nCost;
		xls.WriteNumber(nRow, nCol + 17, nCost, &xlsFormat);

		rs.GetValue(_T("hitechfee"), nCost);
		nTotal[8] += nCost;
		xls.WriteNumber(nRow, nCol + 18, nCost, &xlsFormat);

		rs.GetValue(_T("drugfeek"), nCost);
		nTotal[9] += nCost;
		xls.WriteNumber(nRow, nCol + 19, nCost, &xlsFormat);

		rs.GetValue(_T("bedfee"), nCost);
		nTotal[10] += nCost;
		xls.WriteNumber(nRow, nCol + 20, nCost, &xlsFormat);

		/*rs.GetValue(_T("transportfee"), nCost);
		xls.WriteNumber(nRow, nCol + 19, nCost, &xlsFormat);*/

		rs.GetValue(_T("inspatpaid"), nCost);
		nTotal[12] += nCost;
		xls.WriteNumber(nRow, nCol + 22, nCost, &xlsFormat);

		rs.GetValue(_T("inspaid"), nCost);
		nTotal[13] += nCost;
		xls.WriteNumber(nRow, nCol + 23, nCost, &xlsFormat);

		rs.GetValue(_T("t_bqp"), nCost);
		nTotal[14] += nCost;
		xls.WriteNumber(nRow, nCol + 24, nCost, &xlsFormat);

		/*rs.GetValue(_T("ratefee"), nCost);
		xls.WriteNumber(nRow, nCol + 23, nCost, &xlsFormat);*/

		rs.GetValue(_T("emergency"), tmpStr);
		if (tmpStr == _T("Y")) nTemp = 2;
		else{
			rs.GetValue(_T("hdline"), tmpStr);
			if (tmpStr == _T("1")) nTemp = 0;
			else nTemp = 1;
		}
		
		xls.WriteNumber(nRow, nCol + 26, nTemp, &xlsFormat);

		rs.GetValue(_T("reldisease"), tmpStr);
		xls.SetCellText(nCol + 27, nRow, tmpStr, FMT_TEXT);

		tmpStr.Format(_T("%s"), pMF->m_CompanyInfo.sc_id);
		xls.SetCellText(nCol + 28, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol + 29, nRow, tmpStr, FMT_TEXT);

		nCost = ToDouble(szYear);
		xls.WriteNumber(nRow, nCol + 30, nCost, &xlsFormat);

		nCost = ToDouble(szMonth);
		xls.WriteNumber(nRow, nCol + 31, nCost, &xlsFormat);
		
		rs.GetValue(_T("regdate"), tmpStr);
		szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 32, nRow, szDate, FMT_DATE);

		rs.GetValue(_T("expdate"), tmpStr);
		szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 33, nRow, szDate, FMT_DATE);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 34, nRow, tmpStr, FMT_TEXT);

		xls.WriteNumber(nRow, nCol + 35, 0, &xlsFormat);

		xls.WriteNumber(nRow, nCol + 38, 0, &xlsFormat);
		xls.WriteNumber(nRow, nCol + 39, 0, &xlsFormat);

		xls.SetCellText(nCol + 40, nRow, _T("NOI"), FMT_TEXT);
		xls.SetCellText(nCol + 41, nRow, _T("\x43SK\x43\x42"), FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 42, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hcr_mainicd"), tmpStr);
		xls.SetCellText(nCol + 43, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("insline"), tmpStr);
		xls.SetCellText(nCol + 44, nRow, tmpStr, FMT_INTEGER);

		xls.SetCellText(nCol +45 , nRow, rs.GetValue(_T("insgroup")), FMT_TEXT);
			
		xls.SetCellText(nCol +46 , nRow, rs.GetValue(_T("invoice_date")), FMT_TEXT);
			
		xls.SetCellText(nCol +47 , nRow, rs.GetValue(_T("ref_materialfee")), FMT_NUMBER1);
		xls.SetCellText(nCol +48 , nRow, rs.GetValue(_T("diffpaid")), FMT_NUMBER1);
		xls.SetCellText(nCol +49 , nRow, rs.GetValue(_T("soldier_rank")), FMT_TEXT);
		xls.SetCellText(nCol +50 , nRow, rs.GetValue(_T("work_place")), FMT_TEXT);
		xls.SetCellText(nCol + 51 , nRow, rs.GetValue(_T("l_materialfee")), FMT_TEXT);
		xls.SetCellText(nCol + 52 , nRow, rs.GetValue(_T("l_discount")), FMT_NUMBER1);
		xls.SetCellText(nCol + 53 , nRow, rs.GetValue(_T("l_diffpaid")), FMT_NUMBER1);
		xls.SetCellText(nCol + 54 , nRow, rs.GetValue(_T("food_fee")), FMT_NUMBER1);
		xls.SetCellText(nCol + 55 , nRow, rs.GetValue(_T("food_fee_nn")), FMT_NUMBER1);
		xls.SetCellText(nCol + 56 , nRow, rs.GetValue(_T("Objectname")), FMT_TEXT);

		xls.SetCellText(nCol +57 , nRow, rs.GetValue(_T("t_xn_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +58 , nRow, rs.GetValue(_T("t_cdha_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +59 , nRow, rs.GetValue(_T("t_thuoc_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +60 , nRow, rs.GetValue(_T("t_mau_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +61 , nRow, rs.GetValue(_T("t_pttt_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +62 , nRow, rs.GetValue(_T("t_vtytth_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +63 , nRow, rs.GetValue(_T("t_vtyttt_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +64 , nRow, rs.GetValue(_T("t_dvktc_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +65 , nRow, rs.GetValue(_T("t_ktg_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +66 , nRow, rs.GetValue(_T("t_giuong_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +67 , nRow, rs.GetValue(_T("t_phikhac_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +68 , nRow, rs.GetValue(_T("ma_lienket")), FMT_TEXT);
		xls.SetCellText(nCol +69 , nRow, rs.GetValue(_T("nguontt")), FMT_TEXT);

		
		//xls.SetCellText(nCol + 40, nRow, _T("\x30\x31"), FMT_TEXT);
		/*nIncrement = 0;
		if (m_bIsInsPurpose)
		{
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("insgroup")), FMT_TEXT);
			nIncrement++;
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("invoice_date")), FMT_TEXT);
			nIncrement++;
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("ref_materialfee")), FMT_NUMBER1);
			nIncrement++;
		}
		if (m_bShowDiff){
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("diffpaid")), FMT_NUMBER1);
			nIncrement++;
		}
		if (m_bSoldierPatient){
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("soldier_rank")), FMT_TEXT);
			nIncrement++;             
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("work_place")), FMT_TEXT);
			nIncrement++;
		}
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_materialfee")), FMT_TEXT);
		nIncrement++;
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_discount")), FMT_TEXT);
		nIncrement++;
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_diffpaid")), FMT_TEXT);
		nIncrement++;
		if (m_bShowDiff)
		{
			xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("food_fee")), FMT_TEXT);
			nIncrement++;
		}
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("Objectname")), FMT_TEXT);
		nIncrement++;*/

		rs.MoveNext();
	}
	nRow++;
	xls.SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
	for (int i = 0; i < 15; i++){
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+10, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\ChiphikhambenhBHYT_79_80ain_80aout.xls"));
	EndWaitCursor();
}

CString CFMInsuranceCost79_80A::GetQueryString_6()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szSubSQL, szWhere, szWhereBQP, szSubWhere, szOrderBy, szTable, szObjectCondition, szHavingClause;
	CString szDepts, szCards;
	CString tmpStr, szTemp, szMaterialID;
	CString szIsOutPatient, szWhere_is_change_settlement_period;
	int nIndex = 0;

	szWhere.Empty();
	szSubWhere.Empty();
	szDepts.Empty();
	szCards.Empty();		

	//Lọc đối tượng bảo hiểm BQP, bảo hiểm Hà Nội
	if (m_szphanloaibhKey == _T("BHBQP"))
		{
			szObjectCondition = _T(" AND SUBSTR(hd_cardno, 4,2) = '97'");
			szWhereBQP.AppendFormat(_T(" AND fe.hfe_category IN ('BQP')"));
		}
	else if
		(m_szphanloaibhKey == _T("BHHN"))
		{
			szObjectCondition = _T(" AND SUBSTR(hd_cardno, 4,2) <> '97'");
		}
	else
		{
			
		}
	//Lọc ngoại trú, nội trú, ngoại trú trong khoa

	if (m_n79A == 0)
	{
		szIsOutPatient = _T(" AND isoutpatient = 'X'");
	}
	else if (m_n80AIN == 0)
	{
		szIsOutPatient = _T(" AND isoutpatient = 'N'");
	}
	else if (m_n80AOUT == 0)
	{
		szIsOutPatient = _T(" AND isoutpatient = 'Y'");
	}
	else
	{
		
	}

	 if (m_bChilaybndoiqt)
	{
		szWhere_is_change_settlement_period.AppendFormat(_T(" and NVL(is_change_settlement_period,'N') ='Y' "));
	}

	if (m_bKolaybndoiqt)
	{
		szWhere_is_change_settlement_period.AppendFormat(_T(" and NVL(is_change_settlement_period,'N') <>'Y' "));
	}

	//1. Lấy biểu 80 nội trú & ngoại trú
	//Hôm nay
	szSQL.Format(_T(" SELECT docno,") \
			_T("   docno||'-'||treattime as ma_lienket,") \
			_T("   treattime,") \
			_T("   Objectname,") \
			_T("   invoiceno,") \
			_T("   pname,") \
			_T("   mbirthyear,") \
			_T("   fbirthyear,") \
			_T("   sex,") \
			_T("   address,") \
			_T("   reldisease,") \
			_T("   cardno,") \
			_T("   regdate,") \
			_T("   expdate,") \
			_T("   hdline,") \
			_T("   regplace,") \
			_T("   insline,  ") \
			_T("   soldier_rank,  ") \
			_T("   work_place,  ") \
			_T("   linename,  ") \
			_T("   insgroup,  ") \
			_T("   admitdate,") \
			_T("   dischargedate,") \
			_T("   totaltreat,") \
			_T("   hcr_mainicd,") \
			_T("   icd10,") \
			_T("   emergency,") \
			_T("   deptid,") \
			_T("   invoice_date,") \
			_T("   invoice_date_detail,") \
			_T("   ROUND(t_tongbh) AS inscost,") \
			_T("   drugfee,") \
			_T("   drugfeek,") \
			_T("   bloodfee,") \
			_T("   testfee,") \
			_T("   pacsfee,") \
			_T("   normtechfee,") \
			_T("   hitechfee,") \
			_T("   materialfee,") \
			_T("   replace_materialfee,") \
			_T("   ref_materialfee,") \
			_T("   bedfee,") \
			_T("   transportfee,") \
			_T("   cost,") \
			_T("   otherfee,") \
			_T("   scoliosisfee,") \
			_T("   l_materialfee,") \
			_T("   l_discount,") \
			_T("   l_diffpaid,") \
			_T("   ROUND(t_bhtt) AS inspaid,") \
			_T("   patpaid,") \
			_T("   diffpaid,") \
			_T("   food_fee,") \
			_T("   food_fee_nn,") \
			_T("   ROUND(t_tongbh)-ROUND(t_bhtt) AS inspatpaid,") \
			_T("   t_xn_chenh,") \
			_T("   t_cdha_chenh,") \
			_T("   t_thuoc_chenh,") \
			_T("   t_mau_chenh,") \
			_T("   t_pttt_chenh,") \
			_T("   t_vtytth_chenh,") \
			_T("   t_vtyttt_chenh,") \
			_T("   t_dvktc_chenh,") \
			_T("   t_ktg_chenh,") \
			_T("   t_giuong_chenh,") \
			_T("   t_phikhac_chenh,") \
			_T("   nguontt,") \
			//_T("   isoutpatient, ROUND(t_bhtt + t_bqp) as t_bqp") \//
			_T("   isoutpatient, ROUND(t_bhtt + GET_BQP_PAID(docno, invoiceno) - NVL(GET_COVID_PAID(docno, invoiceno), 0)) AS t_bqp") \
			_T(" FROM") \
			_T("   (SELECT hd_docno             AS docno,") \
			_T("     iv.hfe_inspaid             AS t_tongbh,") \
			_T("     iv.HFE_DISCOUNT            AS t_bhtt,") \
			_T("     NVL(iv.HFE_PAYSOURCE, 'N') AS nguontt,") \
			_T("     iv.hfe_otherpaid           AS t_bqp,") \
			_T("     TO_CHAR(invoice_date, 'YYYYMMDDHH24MI') invoice_date_detail,") \
			_T("     MA_LK AS ma_lienket,") \
			_T("     treattime,") \
			_T("     isoutpatient,") \
			_T("     HMS_GETOBJECTNAME(objectid) AS Objectname,") \
			_T("     MAX(invoiceno)              AS invoiceno,") \
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
			_T("     END                                             AS fbirthyear,") \
			_T("     hp_sex                                          AS sex,") \
			_T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
			_T("     hcr_reldisease                                  AS reldisease,") \
			_T("     CASE") \
			_T("       WHEN LENGTH(hc_cardno) > 15") \
			_T("       THEN SUBSTR(hc_cardno,1,15)") \
			_T("  ELSE hc_cardno") \
			_T("     END        AS cardno,") \
			_T("     hc_regdate AS regdate,") \
			_T("     hc_expdate AS expdate,") \
			_T("     CASE") \
			_T("       WHEN hd_insline='Y'") \
			_T("       THEN 1") \
			_T("       ELSE 0") \
			_T("     END        AS hdline,") \
			_T("     hc_regcode AS regplace,") \
			_T("     hc_line    AS insline,") \
			_T("     get_syssel_desc('hms_rank', hd_rank) soldier_rank,") \
			_T("     hp_workplace work_place,") \
			_T("     DECODE(hc_line, 1, 'A', 2, 'B', 3, 'C') AS linename,") \
			_T("     hig_group                               AS insgroup,") \
			_T("     admitdate,") \
			_T("     dischargedate,") \
			_T("     hcr_sumtreat AS totaltreat,") \
			_T("     hcr_mainicd,") \
			_T("     hcr_maindisease AS icd10,") \
			_T("     hd_emergency    AS emergency,") \
			_T("     lower(deptid)   AS deptid,") \
			_T("     invoice_date AS invoice_date,") \
			_T("     ROUND(SUM(drugfee+drugfeek+bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee+transportfee)) AS inscost,") \
			_T("     ROUND(SUM(drugfee)) AS drugfee,") \
			_T("     ROUND(SUM(drugfeek)) AS drugfeek,") \
			_T("     ROUND(SUM(bloodfee)) AS bloodfee,") \
			_T("     ROUND(SUM(testfee)) AS testfee,") \
			_T("     ROUND(SUM(pacsfee)) AS pacsfee,") \
			_T("     ROUND(SUM(normtechfee)) AS normtechfee,") \
			_T("     ROUND(SUM(hitechfee))  AS hitechfee,") \
			_T("     ROUND(SUM(materialfee)) AS materialfee,") \
			_T("     ROUND(SUM(replace_materialfee)) AS replace_materialfee,") \
			_T("     ROUND(SUM(ref_materialfee)) AS ref_materialfee,") \
			_T("     ROUND(SUM(bedfee)) AS bedfee,") \
			_T("     ROUND(SUM(transportfee)) AS transportfee,") \
			_T("     CASE") \
			_T("       WHEN SUM(is_scoliosis) > 0") \
			_T("       THEN ROUND(SUM(v_inspaid))") \
			_T("       ELSE ROUND(SUM(inspaid))") \
			_T("     END                  AS cost,") \
			_T("     ROUND(SUM(otherfee)) AS otherfee,") \
			_T("     ROUND(SUM(scoliosisfee)) scoliosisfee,") \
			_T("     ROUND(SUM(l_materialfee)) l_materialfee,") \
			_T("     ROUND(SUM(l_discount)) l_discount,") \
			_T("     ROUND(SUM(l_materialfee - l_discount)) l_diffpaid,") \
			_T("     CASE") \
			_T("       WHEN SUM(is_scoliosis) > 0") \
			_T("       THEN ROUND(SUM(v_discount))") \
			_T("       ELSE ROUND(SUM(discount))") \
			_T("     END AS inspaid,") \
			_T("     CASE") \
			_T("       WHEN SUM(is_scoliosis) > 0") \
			_T("       THEN ROUND(SUM(v_inspaid - v_discount))") \
			_T("       ELSE ROUND(SUM(inspaid   -discount))") \
			_T("     END AS patpaid,") \
			_T("     ROUND(SUM(food_fee+testfeediff+pacsfeediff+drugfeediff+bloodfeediff+normtechfeediff+materialfeediff+replace_materialfeediff+hitechfeediff+drugfeekdiff+bedfeediff+otherfeediff)) AS diffpaid,") \
			_T("     ROUND(SUM(food_fee)) AS food_fee,") \
			_T("     ROUND(SUM(food_fee_nn)) AS food_fee_nn,") \
			_T("     ROUND(SUM(testfeediff)) AS t_xn_chenh,") \
			_T("     ROUND(SUM(pacsfeediff)) AS t_cdha_chenh,") \
			_T("     ROUND(SUM(drugfeediff)) AS t_thuoc_chenh,") \
			_T("     ROUND(SUM(bloodfeediff)) AS t_mau_chenh,") \
			_T("     ROUND(SUM(normtechfeediff)) AS t_pttt_chenh,") \
			_T("     ROUND(SUM(materialfeediff)) AS t_vtytth_chenh,") \
			_T("     ROUND(SUM(replace_materialfeediff)) AS t_vtyttt_chenh,") \
			_T("     ROUND(SUM(hitechfeediff)) AS t_dvktc_chenh,") \
			_T("     ROUND(SUM(drugfeekdiff)) AS t_ktg_chenh,") \
			_T("     ROUND(SUM(bedfeediff)) AS t_giuong_chenh,") \
			_T("     ROUND(SUM(otherfeediff)) AS t_phikhac_chenh") \
			_T("   FROM") \
			_T("     (SELECT fi.hfe_deptid AS deptid,") \
			_T("       fi.hfe_treattime    AS treattime,") \
			_T("       fi.hfe_class,") \
			_T("       fe.hfe_docno     AS docno,") \
			_T("       fi.hfe_objectid  AS objectid,") \
			_T("       fe.hfe_invoiceno AS invoiceno,") \
			_T("       fe.hfe_group     AS groupid,") \
			_T("       hcr_reldisease,") \
			_T("       CASE") \
			_T("         WHEN HTR_TREATTIME>0") \
			_T("         THEN TO_CHAR(HTR_ADMITDATE,'DD/MM/YYYY')") \
			_T("         ELSE TO_CHAR(hcr_admitdate, 'DD/MM/YYYY')") \
			_T("       END AS admitdate,") \
			_T("       CASE") \
			_T("         WHEN HTR_TREATTIME>0") \
			_T("         THEN TO_CHAR(HTR_DISCHARGEDATE,'DD/MM/YYYY')") \
			_T("         ELSE TO_CHAR(hcr_dischargedate, 'DD/MM/YYYY')") \
			_T("       END AS dischargedate,") \
			_T("       hcr_sumtreat,") \
			_T("       hcr_mainicd,") \
			_T("       hcr_maindisease,") \
			_T("       fi.hfe_date invoice_date,") \
			_T("       CASE") \
			_T("         WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6')") \
			_T("         AND fe.hfe_group NOT          IN ('A1400', 'A1500', 'A1600')") \
			_T("         THEN fe.hfe_inspaid") \
			_T("         ELSE 0") \
			_T("       END AS drugfee,") \
			_T("       CASE") \
			_T(" WHEN fe.hfe_group='A1400'") \
			_T("         THEN fe.hfe_inspaid") \
			_T("         ELSE 0") \
			_T("       END AS drugfeek,") \
			_T("       CASE") \
			_T("         WHEN (NVL(hfl_bloodfee, 'X') = 'Y'") \
			_T("         OR fe.hfe_group              ='A2000')") \
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
			_T("         WHEN fe.hfe_group       IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
			_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT')") \
			_T("         THEN fe.hfe_inspaid") \
			_T("         ELSE 0") \
			_T("       END AS materialfee,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_group   IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
			_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT')") \
			_T("         THEN fe.hfe_inspaid") \
			_T("         ELSE 0") \
			_T("       END AS replace_materialfee,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_group   IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
			_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT')") \
			_T("         THEN fe.hfe_cost") \
			_T("         ELSE 0") \
			_T("       END AS ref_materialfee,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_group IN ('C0000', 'D0000')") \
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
			_T("       END AS otherfee,") \
			_T("       0 scoliosisfee,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_feegroup = 'OPT_L'") \
			_T("         AND fe.hfe_type      = 'D'") \
			_T("         THEN fe.hfe_inspaid") \
			_T("         ELSE 0") \
			_T("       END l_materialfee,") \
			_T("       0 l_discount,") \
			_T("       fe.hfe_cost AS cost,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
			_T("         THEN fe.hfe_inspaid") \
			_T("         ELSE 0") \
			_T("       END AS inspaid,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
			_T("         THEN fe.hfe_discount") \
			_T("         ELSE 0") \
			_T("       END            AS discount,") \
			_T("       fe.hfe_patpaid AS patpaid,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
			_T("         THEN fe.hfe_diffcost") \
			_T("         ELSE 0") \
			_T("       END diffpaid,") \
			_T("       0 is_scoliosis,") \
			_T("       0 v_inspaid,") \
			_T("       0 v_discount,") \
			_T("       0 food_fee,") \
			_T("       0 food_fee_nn,") \
			_T("       0 AS drugfeediff,") \
			_T("       0 AS drugfeekdiff,") \
			_T("       0 AS bloodfeediff,") \
			_T(" 0 AS testfeediff,") \
			_T("       0 AS pacsfeediff,") \
			_T("       0 AS normtechfeediff,") \
			_T("       0 AS hitechfeediff,") \
			_T("       0 AS materialfeediff,") \
			_T("       0 AS replace_materialfeediff,") \
			_T("       0 AS bedfeediff,") \
			_T("       0 AS otherfeediff,") \
			_T("       NVL(htr_outpatient, 'X') as isoutpatient") \
			_T("     FROM hms_clinical_record") \
			_T("     LEFT JOIN hms_treatment_record") \
			_T("     ON (hcr_docno = htr_docno)") \
			_T("     LEFT JOIN Hms_Fee_Approve fa") \
			_T("     ON (hcr_docno=fa.hfe_docno") \
			_T("     AND htr_idx  =fa.Hfe_Refidx)") \
			_T("     LEFT JOIN hms_fee_invoice fi") \
			_T("     ON (hcr_docno       = fi.hfe_docno") \
			_T("     AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
			_T("     LEFT JOIN hms_fee_view fe") \
			_T("     ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
			_T("     AND fe.hfe_docno   =fi.hfe_docno)") \
			_T("     LEFT JOIN hms_fee_list") \
			_T("     ON (fe.hfe_itemid        = hfl_feeid)") \
			_T("     WHERE fi.hfe_class      IN('A', 'I')") \
			_T("     AND fe.hfe_discount      > 0") \
			_T("     AND fe.hfe_category NOT IN ('Y', 'COV')") \
			_T("     AND htr_status           ='T'") \
			_T("     AND fe.hfe_type         <> 'V'") \
			_T("     AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
			_T("     AND fi.hfe_status             = 'P'    ") \
			_T("     AND fe.hfe_status            <> 'C'") \
			_T("     UNION ALL") \
			_T("     SELECT fi.hfe_deptid AS deptid,") \
			_T("       fi.hfe_treattime   AS treattime,") \
			_T("       fi.hfe_class,") \
			_T("       fe.hfe_docno     AS docno,") \
			_T("       fi.hfe_objectid  AS objectid,") \
			_T("       fe.hfe_invoiceno AS invoiceno,") \
			_T("       fe.hfe_group     AS groupid,") \
			_T("       hcr_reldisease,") \
			_T("       CASE") \
			_T("         WHEN HTR_TREATTIME>0") \
			_T("         THEN TO_CHAR(HTR_ADMITDATE,'DD/MM/YYYY')") \
			_T("         ELSE TO_CHAR(hcr_admitdate, 'DD/MM/YYYY')") \
			_T("       END AS admitdate,") \
			_T("       CASE") \
			_T("         WHEN HTR_TREATTIME>0") \
			_T("         THEN TO_CHAR(HTR_DISCHARGEDATE,'DD/MM/YYYY')") \
			_T("         ELSE TO_CHAR(hcr_dischargedate, 'DD/MM/YYYY')") \
			_T("       END AS dischargedate,") \
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
			_T("       CASE") \
			_T("         WHEN NVL(ho_scoliosis, 'N') = 'Y'") \
			_T("         THEN fe.hfe_discount") \
			_T("         ELSE 0") \
			_T("       END,") \
			_T("       0,") \
			_T("       CASE") \
			_T("         WHEN NVL(ho_scoliosis, 'N') <> 'Y'") \
			_T("         THEN fe.hfe_discount") \
			_T("         ELSE 0") \
			_T("       END,") \
			_T("       fe.hfe_cost AS cost,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_feegroup       IN ('HITECH_L', 'OPT_L')") \
			_T("         AND NVL(ho_scoliosis, 'N') <> 'Y'") \
			_T("         THEN fe.hfe_discount / hd_disrate * 100") \
			_T("         ELSE 0") \
			_T("       END AS inspaid,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_feegroup       IN ('HITECH_L', 'OPT_L')") \
			_T("         AND NVL(ho_scoliosis, 'N') <> 'Y'") \
			_T("         THEN fe.hfe_discount") \
			_T("         ELSE 0") \
			_T("       END            AS discount,") \
			_T("       fe.hfe_patpaid AS patpaid,") \
			_T("       CASE") \
			_T("         WHEN NVL(ho_scoliosis, 'N') = 'Y'") \
			_T("         THEN 0") \
			_T("         ELSE fe.hfe_diffcost") \
			_T("       END diffpaid,") \
			_T("       CASE") \
			_T("         WHEN NVL(ho_scoliosis, 'N') = 'Y'") \
			_T("         THEN 1") \
			_T("         ELSE 0") \
			_T("       END is_scoliosis,") \
			_T("       fe.hfe_discount / hd_disrate * 100 AS hfe_inspaid,") \
			_T("       fe.hfe_discount,") \
			_T("       0 food_fee,") \
			_T("       0 food_fee_nn,") \
			_T("       0                          AS drugfeediff,") \
			_T("       0                          AS drugfeekdiff,") \
			_T("       0                          AS bloodfeediff,") \
			_T("       0                          AS testfeediff,") \
			_T("       0                          AS pacsfeediff,") \
			_T("       0                          AS normtechfeediff,") \
			_T("       0                          AS hitechfeediff,") \
			_T("       0                          AS materialfeediff,") \
			_T("       fe.hfe_cost-fe.hfe_inspaid AS replace_materialfeediff,") \
			_T("       0                          AS bedfeediff,") \
			_T("       0                          AS otherfeediff,") \
			_T("       NVL(htr_outpatient, 'X') as isoutpatient") \
			_T("     FROM hms_clinical_record") \
			_T("     LEFT JOIN hms_treatment_record") \
			_T("     ON (hcr_docno = htr_docno)") \
			_T("     LEFT JOIN Hms_Fee_Approve fa") \
			_T("     ON (hcr_docno=fa.hfe_docno") \
			_T("     AND htr_idx  =fa.Hfe_Refidx)") \
			_T("     LEFT JOIN hms_fee_invoice fi") \
			_T("     ON (hcr_docno       = fi.hfe_docno") \
			_T("     AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
			_T("     LEFT JOIN hms_fee_view fe") \
			_T("     ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
			_T("     AND fe.hfe_docno   =fi.hfe_docno)") \
			_T("     LEFT JOIN hms_operation") \
			_T("     ON (ho_docno  = hcr_docno") \
			_T("     AND ho_itemid = hfe_subgroup") \
			_T("     AND ho_idx    = hfe_orderid)") \
			_T("     LEFT JOIN hms_doc") \
			_T("     ON(hd_docno              = hcr_docno)") \
			_T("     WHERE fi.hfe_class      IN('A', 'I')") \
			_T("     AND fe.hfe_discount      > 0") \
			_T("     AND fe.hfe_category NOT IN ('Y', 'COV')") \
			_T("     AND htr_status           ='T'") \
			_T("     AND fe.hfe_type          = 'V'") \
			_T("     AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
			_T("     AND fi.hfe_status             = 'P'") \
			//_T("     AND NVL(htr_outpatient, 'X') <> 'Y'") \//
			//%s = szWhereBQP
			_T("     AND fe.hfe_status            <> 'C' %s") \
			_T("     UNION ALL") \
			_T("     SELECT fi.hfe_deptid AS deptid,") \
			_T("       fi.hfe_treattime   AS treattime,") \
			_T("       fi.hfe_class,") \
			_T("       fe.hfe_docno     AS docno,") \
			_T("       fi.hfe_objectid  AS objectid,") \
			_T("       fe.hfe_invoiceno AS invoiceno,") \
			_T("       fe.hfe_group     AS groupid,") \
			_T("       hcr_reldisease,") \
			_T("       CASE") \
			_T("         WHEN HTR_TREATTIME>0") \
			_T("         THEN TO_CHAR(HTR_ADMITDATE,'DD/MM/YYYY')") \
			_T("         ELSE TO_CHAR(hcr_admitdate, 'DD/MM/YYYY')") \
			_T("       END AS admitdate,") \
			_T("       CASE") \
			_T("         WHEN HTR_TREATTIME>0") \
			_T("         THEN TO_CHAR(HTR_DISCHARGEDATE,'DD/MM/YYYY')") \
			_T("         ELSE TO_CHAR(hcr_dischargedate, 'DD/MM/YYYY')") \
			_T("       END AS dischargedate,") \
			_T("       hcr_sumtreat,") \
			_T("       hcr_mainicd,") \
			_T("       hcr_maindisease,") \
			_T("       fi.hfe_date invoice_date,") \
			_T("       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
			_T("       0,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L')") \
			_T("         THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
			_T("         ELSE 0") \
			_T("       END AS diffpaid,") \
			_T("       0,") \
			_T("       0,") \
			_T("       0,") \
			_T("       (") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_type = 'F'") \
			_T("         THEN fe.hfe_patpaid") \
			_T("         ELSE 0") \
			_T("       END) food_fee,") \
			_T("       (") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_type           = 'F'") \
			_T("         AND NVL(hfl_feefood_nn,'N')='Y'") \
			_T("         THEN fe.hfe_patpaid") \
			_T("         ELSE 0") \
			_T("       END) food_fee_nn,") \
			_T("       CASE") \
			_T("         WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6')") \
			_T("         AND fe.hfe_group NOT          IN ('A1400', 'A1500', 'A1600', 'A1700')") \
			_T("         THEN fe.hfe_cost               -fe.hfe_inspaid") \
			_T("         ELSE 0") \
			_T("       END AS drugfeediff,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_group='A1400'") \
			_T("         THEN fe.hfe_cost-fe.hfe_inspaid") \
			_T("         ELSE 0") \
			_T("       END AS drugfeekdiff,") \
			_T("       CASE") \
			_T("         WHEN (NVL(hfl_bloodfee, 'X') = 'Y'") \
			_T("         OR fe.hfe_group              ='A2000')") \
			_T("         THEN fe.hfe_patpaid") \
			_T("         ELSE 0") \
			_T("       END AS bloodfeediff,") \
			_T("       CASE") \
			_T("         WHEN SUBSTR(fe.hfe_group, 1, 2)='B1'") \
			_T("         AND NVL(hfl_bloodfee, 'X')    <> 'Y'") \
			_T("         AND fe.hfe_hitech              ='N'") \
			_T("         THEN fe.hfe_patpaid") \
			_T("         ELSE 0") \
			_T("       END AS testfeediff,") \
			_T("       CASE") \
			_T("         WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3')") \
			_T("         AND fe.hfe_hitech                ='N'") \
			_T("         THEN fe.hfe_patpaid") \
			_T("         ELSE 0") \
			_T("       END AS pacsfeediff,") \
			_T("       CASE") \
			_T("         WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5')") \
			_T("         AND NVL(fe.hfe_hitech,'N')       ='N'") \
			_T("         THEN fe.hfe_patpaid") \
			_T("         ELSE 0") \
			_T("       END AS normtechfeediff,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_hitech='Y'") \
			_T("         THEN fe.hfe_patpaid") \
			_T("         ELSE 0") \
			_T("       END AS hitechfeediff,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_group       IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
			_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT')") \
			_T("         THEN fe.hfe_patpaid") \
			_T("         ELSE 0") \
			_T("       END AS materialfeediff,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_group   IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
			_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT')") \
			_T("         THEN fe.hfe_patpaid") \
			_T("         ELSE 0") \
			_T("       END AS replace_materialfeediff,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_group='C0000'") \
			_T("         THEN fe.hfe_patpaid") \
			_T("         ELSE 0") \
			_T("       END AS bedfeediff,") \
			_T("       CASE") \
			_T("         WHEN fe.hfe_group='F0000'") \
			_T("         THEN fe.hfe_patpaid") \
			_T("         ELSE 0") \
			_T("       END AS otherfeediff,") \
			_T("       NVL(htr_outpatient, 'X') as isoutpatient") \
			_T("     FROM hms_clinical_record") \
			_T("     LEFT JOIN hms_treatment_record") \
			_T("     ON (hcr_docno = htr_docno)") \
			_T("     LEFT JOIN Hms_Fee_Approve fa") \
			_T("     ON (hcr_docno=fa.hfe_docno") \
			_T("     AND htr_idx  =fa.Hfe_Refidx)") \
			_T("     LEFT JOIN hms_fee_invoice fi") \
			_T("     ON (hcr_docno       = fi.hfe_docno") \
			_T("     AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
			_T("     LEFT JOIN hms_fee_view fe") \
			_T("     ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
			_T("     AND fe.hfe_docno   =fi.hfe_docno)") \
			_T("     LEFT JOIN hms_fee_list") \
			_T("     ON (fe.hfe_itemid             = hfl_feeid)") \
			_T("     WHERE fi.hfe_class           IN('A', 'I')") \
			_T("     AND fe.hfe_category NOT      IN ('Y', 'COV')") \
			_T("     AND htr_status                ='T'") \
			_T("     AND (fe.hfe_discount          = 0") \
			_T("     OR (SUBSTR(fe.hfe_group,1,2) IN('A1','A6','A8')") \
			_T("     AND fe.hfe_discount           > 0) OR ( fe.hfe_discount > 0 AND fe.hfe_diffcost > 0) )") \
			_T("     AND fe.hfe_type              <> 'V'") \
			_T("     AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
			_T("     AND fi.hfe_status             = 'P'") \
			//_T("     AND NVL(htr_outpatient, 'X') <> 'Y'") \//
			_T("     AND fe.hfe_status            <> 'C' %s") \
			//%s = szWhereBQP
			_T("     ) tbl") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON(docno=hd_docno)") \
			_T("   LEFT JOIN hms_patient") \
			_T("   ON(hd_patientno=hp_patientno)") \
			_T("   LEFT JOIN hms_card") \
			_T("   ON(hc_patientno=hp_patientno") \
			_T("   AND hc_idx     =hd_cardidx)") \
			_T("   LEFT JOIN hms_object") \
			_T("   ON(ho_id=objectid)") \
			_T("   LEFT JOIN hms_icd") \
			_T("   ON(hcr_mainicd=hi_icd)") \
			_T("   LEFT JOIN hms_insurance_group") \
			_T("   ON (hig_idx= hc_groupid)") \
			_T("   LEFT JOIN BH_XML_1") \
			_T("   ON (MA_BN     = CAST(hd_docno AS NVARCHAR2(8))") \
			_T("   AND treattime = SUBSTR(MA_LK, 10,11))") \
			_T("   LEFT JOIN hms_fee_invoice iv") \
			_T("   ON (iv.hfe_docno     = hd_docno") \
			_T("   AND iv.hfe_invoiceno = invoiceno)") \
			_T("   WHERE 1              =1 %s %s %s") \
			_T("   AND ho_type         IN ('I', 'C')") \
			_T("   AND hd_cardno       IS NOT NULL  ") \
			_T("   GROUP BY hd_docno,") \
			_T("     iv.hfe_inspaid,") \
			_T("     iv.HFE_DISCOUNT,") \
			_T("     iv.HFE_PAYSOURCE,") \
			_T("     iv.hfe_otherpaid,") \
			_T("     MA_LK,") \
			_T("     treattime,") \
			_T("     objectid,") \
			_T("     hp_surname,") \
			_T("     hp_midname,") \
			_T("     hp_firstname,") \
			_T("     hp_birthdate,") \
			_T("     hp_sex,") \
			_T("     hc_cardno,") \
			_T("     hd_insline,") \
			_T("     hd_rank,") \
			_T("     hp_workplace,") \
			_T("     hc_groupid,") \
			_T("     hc_line,") \
			_T("     hd_insline,") \
			_T("     hc_regcode,") \
			_T("     hcr_mainicd,") \
			_T("     hcr_maindisease,") \
			_T("     admitdate,") \
			_T("     dischargedate,") \
			_T("     hcr_sumtreat,") \
			_T("     hp_provid,") \
			_T("     hp_distid,") \
			_T("     hp_villid,") \
			_T("     hc_regdate,") \
			_T("     hc_expdate,") \
			_T("     hcr_reldisease,") \
			_T("     hi_name,") \
			_T("     hd_emergency,") \
			_T("     deptid,") \
			_T("     hd_admitdept,") \
			_T("     invoice_date,") \
			_T("     hig_group,") \
			_T("     isoutpatient") \
			_T("   HAVING SUM(cost)           > 0") \
			_T("   AND SUM(inspaid-discount) >= 0") \
			_T("   ORDER BY to_date(dischargedate, 'dd/mm/yyyy') ,") \
			_T("     deptid,") \
			_T("     hp_surname,") \
			_T("     hp_midname,") \
			_T("     hp_firstname") \
			_T("   )") \
		//2. Lấy ra biểu 79A
			_T("   UNION ALL") \
			_T("   SELECT ") \
			_T("   docno,") \
			_T("   docno||'-'||treattime as ma_lienket,") \
			_T("   treattime, ") \
			_T("   Objectname,") \
			_T("   invoiceno,") \
			_T("   pname,") \
			_T("   mbirthyear,") \
			_T("   fbirthyear,") \
			_T("   sex,") \
			_T("   address,") \
			_T("   reldisease,") \
			_T("   cardno,") \
			_T("   regdate,") \
			_T("   expdate,") \
			_T("   hdline,") \
			_T("   regplace,") \
			_T("   insline,") \
			_T("   soldier_rank,  ") \
			_T("   work_place,  ") \
			_T("   linename, ") \
			_T("   insgroup,  ") \
			_T("   examdate as admitdate,") \
			_T("   enddate as dischargedate,") \
			_T("   totaltreat,") \
			_T("   CAST ('' as nvarchar2(1)) as hcr_mainicd,") \
			_T("   icd10,") \
			_T("   emergency,") \
			_T("   deptid,") \
			_T("   invoicedate as invoice_date,") \
			_T("   TO_CHAR(invoicedate, 'YYYYMMDDHH24MI') invoice_date_detail,") \
			_T("   ROUND(t_tongbh) AS inscost,") \
			_T("   drugfee,") \
			_T("   drugfeek,") \
			_T("   bloodfee,") \
			_T("   testfee,") \
			_T("   pacsfee,") \
			_T("   normtechfee,") \
			_T("   hitechfee,") \
			_T("   materialfee,") \
			_T("   0 as replace_materialfee,") \
			_T("   0 as ref_materialfee,") \
			_T("   0 as bedfee,") \
			_T("   0 as transportfee,") \
			_T("   0 as cost,") \
			_T("   otherfee,") \
			_T("   0 as scoliosisfee,") \
			_T("   0 as l_materialfee,") \
			_T("   0 as l_discount,") \
			_T("   0 as l_diffpaid,") \
			_T("   ROUND(t_bhtt) AS inspaid,") \
			_T("   patpaid,") \
			_T("   diffpaid,") \
			_T("   0 as food_fee,") \
			_T("   0 as food_fee_nn,") \
			_T("   ROUND(t_tongbh)-ROUND(t_bhtt) AS inspatpaid,") \
			_T("   t_xn_chenh,") \
			_T("   t_cdha_chenh,") \
			_T("   t_thuoc_chenh,") \
			_T("   t_mau_chenh,") \
			_T("   t_pttt_chenh,") \
			_T("   t_vtytth_chenh,") \
			_T("   t_vtyttt_chenh,") \
			_T("   t_dvktc_chenh,") \
			_T("   t_ktg_chenh,") \
			_T("   0 as t_giuong_chenh,") \
			_T("   t_phikhac_chenh,") \
			_T("   CAST ('N' as nvarchar2(1)) nguontt,") \
			//_T("   isoutpatient, t_bqp") \//
			_T("   isoutpatient, ROUND(t_bhtt + GET_BQP_PAID(docno, invoiceno) - NVL(GET_COVID_PAID(docno, invoiceno), 0)) AS t_bqp") \
			_T(" FROM") \
			_T(" (") \
			_T(" SELECT hd_docno AS docno,") \
			_T("   MA_LK         AS ma_lienket,") \
			_T("   treattime,") \
			_T("   isoutpatient,") \
			_T("   HMS_GETOBJECTNAME(objectid) AS Objectname,") \
			_T("   MAX(invoiceno)              AS invoiceno,") \
			_T("   MAX(invoicedate)            AS invoicedate,") \
			_T("   trim(hp_surname") \
			_T("   ||' '") \
			_T("   ||hp_midname") \
			_T("   ||' '") \
			_T("   ||hp_firstname) AS pname,") \
			_T("   CASE") \
			_T("     WHEN hp_sex='M'") \
			_T("     THEN extract(YEAR FROM hp_birthdate)") \
			_T("     ELSE 0") \
			_T("   END AS mbirthyear,") \
			_T("   CASE") \
			_T("     WHEN hp_sex='F'") \
			_T("     THEN extract(YEAR FROM hp_birthdate)") \
			_T("     ELSE 0") \
			_T("   END                                             AS fbirthyear,") \
			_T("   hp_sex                                          AS sex,") \
			_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
			_T("   hd_reldisease                                   AS reldisease,") \
			_T("   CASE") \
			_T("     WHEN LENGTH(hd_cardno) > 15") \
			_T("     THEN SUBSTR(hd_cardno,1,15)") \
			_T("     ELSE hd_cardno") \
			_T("   END           AS cardno,") \
			_T("   hd_insregdate AS regdate,") \
			_T("   hd_insexpdate AS expdate,") \
			_T("   CASE") \
			_T("     WHEN hd_insline='Y'") \
			_T("     THEN 1") \
			_T("     ELSE 0") \
			_T("   END        AS hdline,") \
			_T("   hc_regcode AS regplace,") \
			_T("   hc_line    AS insline,") \
			_T("   DECODE(hc_line, 1, 'A', 2, 'B', 3, 'C') AS linename,") \
			_T("   (SELECT DISTINCT hig_group FROM hms_insurance_group WHERE hig_idx= hc_groupid") \
			_T("   )                                       AS insgroup,") \
			_T("   TO_CHAR(hd_admitdate, 'DD/MM/YYYY')     AS examdate,") \
			_T("   TO_CHAR(hd_enddate, 'DD/MM/YYYY')       AS enddate,") \
			_T("   TRUNC(hd_enddate)-TRUNC(hd_admitdate)+1 AS totaltreat,") \
			_T("   hd_icd,") \
			_T("   CASE") \
			_T("     WHEN LENGTH(hd_icd) > 0") \
			_T("     THEN hi_name") \
			_T("       ||'['") \
			_T("       ||hd_icd") \
			_T("       ||']'") \
			_T("     ELSE NULL") \
			_T("   END                                     AS icd10,") \
			_T("   HD_CONCLUSION                           AS conclusion,") \
			_T("   hd_emergency                            AS emergency,") \
			_T("   NVL(lower(deptid), lower(hd_admitdept)) AS deptid,") \
			_T("   (SELECT ss_vndesc FROM sys_sel WHERE ss_id = 'hms_rank' AND ss_code = hd_rank") \
			_T("   ) soldier_rank,") \
			_T("   get_syssel_desc('hms_rank', hd_rank) generalrank,") \
			_T("   get_syssel_desc('hms_position', hp_position) position,") \
			_T("   hp_workplace work_place,") \
			_T("   ROUND(SUM(drugfee))          AS drugfee,") \
			_T("   ROUND(SUM(drugfeek))         AS drugfeek,") \
			_T("   ROUND(SUM(bloodfee))         AS bloodfee,") \
			_T("   ROUND(SUM(testfee))          AS testfee,") \
			_T("   ROUND(SUM(pacsfee))          AS pacsfee,") \
			_T("   ROUND(SUM(normtechfee))      AS normtechfee,") \
			_T("   ROUND(SUM(hitechfee))        AS hitechfee,") \
			_T("   ROUND(SUM(materialfee))      AS materialfee,") \
			_T("   ROUND(SUM(examfee))          AS examfee,") \
			_T("   ROUND(SUM(inspaid))          AS t_tongbh,") \
			_T("   ROUND(SUM(otherfee))         AS otherfee,") \
			_T("   ROUND(SUM(discount))         AS t_bhtt,") \
			_T("   ROUND(SUM(inspaid-discount)) AS patpaid,") \
			_T("   ROUND(SUM(diffpaid))         AS diffpaid,") \
			_T("   ROUND(SUM(testfeediff))      AS t_xn_chenh,") \
			_T("   ROUND(SUM(pacsfeediff))      AS t_cdha_chenh,") \
			_T("   ROUND(SUM(drugfeediff))      AS t_thuoc_chenh,") \
			_T("   ROUND(SUM(bloodfeediff))     AS t_mau_chenh,") \
			_T("   ROUND(SUM(normtechfeediff))  AS t_pttt_chenh,") \
			_T("   ROUND(SUM(materialfeediff))  AS t_vtytth_chenh,") \
			_T("   0                            AS t_vtyttt_chenh,") \
			_T("   ROUND(SUM(hitechfeediff))    AS t_dvktc_chenh,") \
			_T("   ROUND(SUM(drugfeekdiff))     AS t_ktg_chenh,") \
			_T("   ROUND(SUM(examfeediff))      AS t_kham_chenh,") \
			_T("   ROUND(SUM(otherfeediff))     AS t_phikhac_chenh,") \
			_T("   ROUND(iv.hfe_otherpaid + iv.hfe_discount) as t_bqp") \
			_T(" FROM") \
			_T("   (SELECT fi.hfe_deptid AS deptid,") \
			_T("     fi.hfe_treattime    AS treattime,") \
			_T("     fi.hfe_class,") \
			_T("     fi.hfe_docno     AS docno,") \
			_T("     fi.hfe_objectid  AS objectid,") \
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
			_T("       AND NVL(fe.hfe_hitech,'N')       ='N'") \
			_T("       THEN fe.hfe_inspaid") \
			_T("       ELSE 0") \
			_T("     END AS normtechfee,") \
			_T("     CASE") \
			_T("       WHEN fe.hfe_hitech='Y'") \
			_T("       THEN fe.hfe_inspaid") \
			_T("       ELSE 0") \
			_T("     END AS hitechfee,") \
			_T("     CASE") \
			_T("       WHEN fe.hfe_group       IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
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
			_T("     0               AS diffpaid,") \
			_T("     0               AS drugfeediff,") \
			_T("     0               AS drugfeekdiff,") \
			_T("     0               AS bloodfeediff,") \
			_T("     0               AS testfeediff,") \
			_T("     0               AS pacsfeediff,") \
			_T("     0               AS normtechfeediff,") \
			_T("     0               AS hitechfeediff,") \
			_T("     0               AS materialfeediff,") \
			_T("     0               AS examfeediff,") \
			_T("     0               AS otherfeediff,") \
			_T("     CAST ('X' as nvarchar2(1)) as isoutpatient") \
			_T("   FROM hms_fee_invoice fi") \
			_T("   LEFT JOIN hms_fee_view fe") \
			_T("   ON(fe.hfe_invoiceno      =fi.hfe_invoiceno") \
			_T("   AND fe.hfe_docno         =fi.hfe_docno") \
			_T("   AND fe.hfe_category NOT IN ('Y', 'COV'))") \
			_T("   LEFT JOIN hms_fee_list") \
			_T("   ON (hfl_feeid       = hfe_itemid)") \
			_T("   WHERE fi.hfe_class IN('E')") \
			_T("   AND fe.hfe_discount > 0") \
			_T("   AND fi.hfe_status   ='P'") \
			_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
			_T("   UNION ALL") \
			_T("   SELECT fi.hfe_deptid AS deptid,") \
			_T("     fi.hfe_treattime   AS treattime,") \
			_T("     fi.hfe_class,") \
			_T("     fi.hfe_docno     AS docno,") \
			_T("     fi.hfe_objectid  AS objectid,") \
			_T("     fi.hfe_invoiceno AS invoiceno,") \
			_T("     fi.hfe_date      AS invoicedate,") \
			_T("     fe.hfe_group     AS groupid,") \
			_T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
			_T("     DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt) AS diffpaid,") \
			_T("     CASE") \
			_T("       WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6')") \
			_T("       AND fe.hfe_group NOT          IN('A1400', 'A1500', 'A1600')") \
			_T("       THEN fe.hfe_patpaid") \
			_T("       ELSE 0") \
			_T("     END AS drugfeediff,") \
			_T("     CASE") \
			_T("       WHEN fe.hfe_group='A1400'") \
			_T("       THEN fe.hfe_cost-fe.hfe_inspaid") \
			_T("       ELSE 0") \
			_T("     END AS drugfeekdiff,") \
			_T("     CASE") \
			_T("       WHEN (NVL(hfl_bloodfee, 'X') = 'Y'") \
			_T("       OR fe.hfe_group              ='A2000')") \
			_T("       THEN fe.hfe_patpaid") \
			_T("       ELSE 0") \
			_T("     END AS bloodfeediff,") \
			_T("     CASE") \
			_T("       WHEN SUBSTR(fe.hfe_group, 1, 2)='B1'") \
			_T("       AND NVL(fe.hfe_hitech, 'N')    = 'N'") \
			_T("       AND NVL(hfl_bloodfee, 'X')    <> 'Y'") \
			_T("       THEN fe.hfe_patpaid") \
			_T("       ELSE 0") \
			_T("     END AS testfeediff,") \
			_T("     CASE") \
			_T("       WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3')") \
			_T("       AND NVL(fe.hfe_hitech, 'N')      ='N'") \
			_T("       THEN fe.hfe_patpaid") \
			_T("       ELSE 0") \
			_T("     END AS pacsfeediff,") \
			_T("     CASE") \
			_T("       WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5')") \
			_T("       AND NVL(fe.hfe_hitech,'N')       ='N'") \
			_T("       THEN fe.hfe_patpaid") \
			_T("       ELSE 0") \
			_T("     END AS normtechfeediff,") \
			_T("     CASE") \
			_T("       WHEN fe.hfe_hitech='Y'") \
			_T("       THEN fe.hfe_patpaid") \
			_T("       ELSE 0") \
			_T("     END AS hitechfeediff,") \
			_T("     CASE") \
			_T("       WHEN fe.hfe_group       IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
			_T("       AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT')") \
			_T("       THEN fe.hfe_patpaid") \
			_T("       ELSE 0") \
			_T("     END AS materialfeediff,") \
			_T("     CASE") \
			_T("       WHEN fe.hfe_group='D0000'") \
			_T("       THEN fe.hfe_patpaid") \
			_T("       ELSE 0") \
			_T("     END AS examfeediff,") \
			_T("     CASE") \
			_T("       WHEN fe.hfe_group='F0000'") \
			_T("       THEN fe.hfe_patpaid") \
			_T("       ELSE 0") \
			_T("     END AS otherfeediff,") \
			_T("   CAST ('X' as nvarchar2(1)) as isoutpatient") \
			_T("   FROM hms_fee_invoice fi") \
			_T("   LEFT JOIN hms_fee_view fe") \
			_T("   ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
			_T("   AND fe.hfe_docno   =fi.hfe_docno)") \
			_T("   LEFT JOIN hms_fee_list") \
			_T("   ON (hfl_feeid            = hfe_itemid)") \
			_T("   WHERE fi.hfe_class      IN('E')") \
			_T("   AND (fe.hfe_discount     = 0") \
			_T("   OR (fe.hfe_discount      > 0") \
			_T("   AND fe.hfe_diffpaid      > 0") \
			_T("   AND fe.hfe_type NOT     IN ('D', 'M')))") \
			_T("   AND hfe_group NOT       IN 'FF000'") \
			_T("   AND fi.hfe_status        ='P'") \
			_T("   AND fe.hfe_category NOT IN ('Y', 'COV') ") \
			_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') %s") \
			_T("   UNION ALL") \
			_T("   SELECT fi.hfe_deptid AS deptid,") \
			_T("     fi.hfe_treattime   AS treattime,") \
			_T("     fi.hfe_class,") \
			_T("     fi.hfe_docno     AS docno,") \
			_T("     fi.hfe_objectid  AS objectid,") \
			_T("     fi.hfe_invoiceno AS invoiceno,") \
			_T("     fi.hfe_date      AS invoicedate,") \
			_T("     fe.hfe_group     AS groupid,") \
			_T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,") \
			_T("     DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt) AS diffpaid,") \
			_T("     CASE") \
			_T("       WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6')") \
			_T("       AND fe.hfe_group NOT          IN('A1400', 'A1500', 'A1600', 'A1700')") \
			_T("       THEN fe.hfe_patpaid") \
			_T("       ELSE 0") \
			_T("     END AS drugfeediff,") \
			_T("     CASE") \
			_T("       WHEN fe.hfe_group='A1400'") \
			_T("       THEN fe.hfe_cost-fe.hfe_inspaid") \
			_T("       ELSE 0") \
			_T("     END AS drugfeekdiff,") \
			_T("     0   AS bloodfeediff,") \
			_T("     0   AS testfeediff,") \
			_T("     0   AS pacsfeediff,") \
			_T("     0   AS normtechfeediff,") \
			_T("     0   AS hitechfeediff,") \
			_T("     0   AS materialfeediff,") \
			_T("     0   AS examfeediff,") \
			_T("     0   AS otherfeediff,") \
			_T("   CAST ('X' as nvarchar2(1)) as isoutpatient") \
			_T("   FROM hms_fee_invoice fi") \
			_T("   LEFT JOIN hms_fee_view fe") \
			_T("   ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
			_T("   AND fe.hfe_docno   =fi.hfe_docno)") \
			_T("   LEFT JOIN hms_fee_list") \
			_T("   ON (hfl_feeid            = hfe_itemid)") \
			_T("   WHERE fi.hfe_class      IN('E')") \
			_T("   AND fe.hfe_discount      > 0") \
			_T("   AND fe.hfe_type         IN ('D', 'M')") \
			_T("   AND fe.hfe_payrate       <100") \
			_T("   AND fi.hfe_status        ='P'") \
			_T("   AND fe.hfe_category NOT IN ('Y', 'COV')") \
			_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') %s") \
			_T("   ) tbl") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(docno=hd_docno)") \
			_T(" LEFT JOIN hms_patient") \
			_T(" ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_card") \
			_T(" ON(hc_patientno=hp_patientno") \
			_T(" AND hc_idx     =hd_cardidx)") \
			_T(" LEFT JOIN hms_object") \
			_T(" ON(ho_id = objectid)") \
			_T(" LEFT JOIN hms_icd") \
			_T(" ON(hd_icd=hi_icd)") \
			_T(" LEFT JOIN BH_XML_1") \
			_T(" ON (MA_BN             = CAST(hd_docno AS NVARCHAR2(8))") \
			_T(" AND treattime         = SUBSTR(MA_LK, 10,11))") \
			_T(" LEFT JOIN hms_fee_invoice iv") \
			_T("   ON (iv.hfe_docno           = hd_docno") \
			_T("   AND iv.hfe_invoiceno       = invoiceno)") \
			_T(" WHERE 1               =1 %s %s %s") \
			_T(" AND ho_type          IN ('I', 'C')") \
			_T(" AND LENGTH(hc_cardno) > 0") \
			_T(" GROUP BY hd_docno,") \
			_T("   MA_LK,") \
			_T("   treattime,") \
			_T("   objectid,") \
			_T("   hp_surname,") \
			_T("   hp_midname,") \
			_T("   hp_firstname,") \
			_T("   hp_birthdate,") \
			_T("   hp_sex,") \
			_T("   hd_cardno,") \
			_T("   hd_insline,") \
			_T("   hc_groupid,") \
			_T("   hc_line,") \
			_T("   hd_insline,") \
			_T("   hc_regcode,") \
			_T("   hd_icd,") \
			_T("   HD_CONCLUSION,") \
			_T("   hd_admitdate,") \
			_T("   hd_enddate,") \
			_T("   hp_provid,") \
			_T("   hp_distid,") \
			_T("   hp_villid,") \
			_T("   hd_insregdate,") \
			_T("   hd_insexpdate,") \
			_T("   hd_reldisease,") \
			_T("   hi_name,") \
			_T("   hd_emergency,") \
			_T("   deptid,") \
			_T("   hd_admitdept,") \
			_T("   hd_rank,") \
			_T("   hp_position,") \
			_T("   hp_workplace,") \
			_T("   isoutpatient,") \
			_T("   iv.hfe_discount,") \
			_T("   iv.hfe_otherpaid") \
			_T(" HAVING SUM(cost) > 0") \
			_T(" ORDER BY to_date(enddate, 'dd/mm/yyyy'),") \
			_T("   deptid,") \
			_T("   hp_surname,") \
			_T("   hp_midname,") \
			_T(" hp_firstname)"), m_szFromDate, m_szToDate, 
			m_szFromDate, m_szToDate, szWhereBQP,
			m_szFromDate, m_szToDate, szWhereBQP, szObjectCondition, szIsOutPatient,szWhere_is_change_settlement_period, 
			m_szFromDate, m_szToDate, 
			m_szFromDate, m_szToDate, szWhereBQP,
			m_szFromDate, m_szToDate, szWhereBQP, szObjectCondition, szIsOutPatient, szWhere_is_change_settlement_period);
			
				
		//_msg(_T("%s"), szSQL);
			//MessageBox(szSQL);
				return szSQL;
}
void CFMInsuranceCost79_80A::OnExportSelect_A11()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szTemp, szFromDateToDate, szDate, szMonth, szYear;
	BeginWaitCursor();
	UpdateData();	
	//ShowMessageBox(_T("Lưu ý: Báo cáo này lấy thêm tiền khám từ phơi thanh toán của bệnh nhân nội trú -> đưa vào cột tiền giường, và cập nhật lại cột tổng BH, BHTT, BNTT như trong phơi thanh toán, update 23/6/2022"), MB_OK | MB_ICONWARNING);
	ShowMessageBox(_T("Lưu ý: Báo cáo này cập nhật cách tính phần chênh dùng cho A11"), MB_OK | MB_ICONWARNING);
	rs.ExecSQL(GetQueryString_A11());
	//_msg(_T("%s"), GetQueryString_A11());
	
	if (rs.IsEOF()){
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	CDate dt1, dt2;
	dt1.ParseDate(m_szFromDate);
	dt2.ParseDate(m_szToDate);
	if (dt1.GetYear() == dt2.GetYear()) szYear.Format(_T("%d"), dt1.GetYear());
	else szYear.Format(_T("%d"), dt2.GetYear());

	if (dt1.GetMonth() == dt2.GetMonth()) szMonth.Format(_T("%d"), dt1.GetMonth());
	else szMonth.Format(_T("%d"), dt2.GetMonth());
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 17);
	xls.SetColumnWidth(2, 7);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 16);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 24);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 8);
	xls.SetColumnWidth(18, 8);
	xls.SetColumnWidth(19, 8);
	xls.SetColumnWidth(20, 8);
	xls.SetColumnWidth(21, 8);
	xls.SetColumnWidth(22, 8);
	xls.SetColumnWidth(23, 8);
	xls.SetColumnWidth(24, 8);
	xls.SetColumnWidth(25, 6);
	xls.SetColumnWidth(26, 9);
	xls.SetColumnWidth(27, 6);
	xls.SetColumnWidth(28, 5);
	xls.SetColumnWidth(29, 6);
	xls.SetColumnWidth(30, 7);
	xls.SetColumnWidth(31, 10);
	xls.SetColumnWidth(32, 10);
	xls.SetColumnWidth(33, 44);
	xls.SetColumnWidth(34, 8);
	xls.SetColumnWidth(35, 9);
	xls.SetColumnWidth(36, 6);
	xls.SetColumnWidth(37, 8);
	xls.SetColumnWidth(38, 8);
	xls.SetColumnWidth(39, 6);
	xls.SetColumnWidth(40, 8);
	xls.SetColumnWidth(41, 10);
	xls.SetColumnWidth(42, 7);
	xls.SetColumnWidth(43, 5);
	xls.SetColumnWidth(44, 10);
	xls.SetColumnWidth(45, 15);
	xls.SetColumnWidth(46, 20);
	xls.SetColumnWidth(47, 10);
	xls.SetColumnWidth(48, 20);
	xls.SetColumnWidth(49, 30);
	xls.SetColumnWidth(50, 12);
	xls.SetColumnWidth(51, 12);
	xls.SetColumnWidth(52, 12);
	xls.SetColumnWidth(53, 12);
	xls.SetColumnWidth(54, 30);
	xls.SetColumnWidth(55, 12);
	xls.SetColumnWidth(56, 12);
	xls.SetColumnWidth(57, 12);
	xls.SetColumnWidth(58, 12);
	xls.SetColumnWidth(59, 12);
	xls.SetColumnWidth(60, 12);
	xls.SetColumnWidth(61, 12);
	xls.SetColumnWidth(62, 12);
	xls.SetColumnWidth(63, 12);
	xls.SetColumnWidth(64, 12);
	xls.SetColumnWidth(65, 12);
	xls.SetColumnWidth(66, 12);
	xls.SetColumnWidth(67, 15);
	xls.SetColumnWidth(68, 15);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 5);
	xls.SetCellMergedColumns(37, 1, 7);
	xls.SetCellMergedColumns(37, 2, 7);
	xls.SetCellMergedColumns(0, 3, 44);
	xls.SetCellMergedColumns(0, 4, 44);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(37, 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(37, 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA TH\x41NH TO\xC1N \x43HI PH\xCD KH\xC1M \x43H\x1EEE\x41 \x42\x1EC6NH N\x1ED8I TR\xDA"), FMT_TEXT|FMT_CENTER, true, 18);
	TranslateString(_T("From Date"), tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	TranslateString(_T("To Date"), tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));	
	xls.SetCellText(0, 4, szFromDateToDate, FMT_TEXT | FMT_CENTER, true, 12);
	int nRow = 6, nCol = 0;
	xls.SetCellText(0, nRow, _T("stt"), FMT_TEXT);
	xls.SetCellText(1, nRow, _T("hoten"), FMT_TEXT);	
	xls.SetCellText(2, nRow, _T("namsinh"), FMT_TEXT);
	xls.SetCellText(3, nRow, _T("gioitinh"), FMT_TEXT);
	xls.SetCellText(4, nRow, _T("mathe"), FMT_TEXT);
	xls.SetCellText(5, nRow, _T("ma_dkbd"), FMT_TEXT);	
	xls.SetCellText(6, nRow, _T("mabenh"), FMT_TEXT);
	xls.SetCellText(7, nRow, _T("ngay_vao"), FMT_TEXT);
	xls.SetCellText(8, nRow, _T("ngay_ra"), FMT_TEXT);
	xls.SetCellText(9, nRow, _T("ngay_dtr"), FMT_TEXT);	
	xls.SetCellText(10, nRow, _T("t_tongchi"), FMT_TEXT);
	xls.SetCellText(11, nRow, _T("t_xn"), FMT_TEXT);	
	xls.SetCellText(12, nRow, _T("t_cdha"), FMT_TEXT);
	xls.SetCellText(13, nRow, _T("t_thuoc"), FMT_TEXT);
	xls.SetCellText(14, nRow, _T("t_mau"), FMT_TEXT);	
	xls.SetCellText(15, nRow, _T("t_pttt"), FMT_TEXT);
	xls.SetCellText(16, nRow, _T("t_vtytth"), FMT_TEXT);
	xls.SetCellText(17, nRow, _T("t_vtyttt"), FMT_TEXT);
	xls.SetCellText(18, nRow, _T("t_dvktc"), FMT_TEXT);	
	xls.SetCellText(19, nRow, _T("t_ktg"), FMT_TEXT);
	xls.SetCellText(20, nRow, _T("t_giuong"), FMT_TEXT);
	xls.SetCellText(21, nRow, _T("t_vchuyen"), FMT_TEXT);	
	xls.SetCellText(22, nRow, _T("t_bnct"), FMT_TEXT);	
	xls.SetCellText(23, nRow, _T("t_bhtt"), FMT_TEXT);
	xls.SetCellText(24, nRow, _T("t_ngoaids"), FMT_TEXT);
	xls.SetCellText(25, nRow, _T("lydo_vv"), FMT_TEXT);
	xls.SetCellText(26, nRow, _T("benhkhac"), FMT_TEXT);
	xls.SetCellText(27, nRow, _T("noikcb"), FMT_TEXT);
	xls.SetCellText(28, nRow, _T("khoa"), FMT_TEXT);
	xls.SetCellText(29, nRow, _T("nam_qt"), FMT_TEXT);
	xls.SetCellText(30, nRow, _T("thang_qt"), FMT_TEXT);
	xls.SetCellText(31, nRow, _T("gt_tu"), FMT_TEXT);
	xls.SetCellText(32, nRow, _T("gt_den"), FMT_TEXT);
	xls.SetCellText(33, nRow, _T("diachi"), FMT_TEXT);
	xls.SetCellText(34, nRow, _T("giamdinh"), FMT_TEXT);
	xls.SetCellText(35, nRow, _T("t_xuattoan"), FMT_TEXT);
	xls.SetCellText(36, nRow, _T("lydo_xt"), FMT_TEXT);
	xls.SetCellText(37, nRow, _T("t_datuyen"), FMT_TEXT);
	xls.SetCellText(38, nRow, _T("t_vuottran"), FMT_TEXT);
	xls.SetCellText(39, nRow, _T("loaikcb"), FMT_TEXT);
	xls.SetCellText(40, nRow, _T("noi_ttoan"), FMT_TEXT);
	xls.SetCellText(41, nRow, _T("sophieu"), FMT_TEXT);
	xls.SetCellText(42, nRow, _T("maicd10"), FMT_TEXT);
	xls.SetCellText(43, nRow, _T("tuyen"), FMT_TEXT);
	xls.SetCellText(44, nRow, _T("nhom"), FMT_TEXT);
	xls.SetCellText(45, nRow, _T("ngay_tt"), FMT_TEXT);
	xls.SetCellText(46, nRow, _T("tt_vtyttt"), FMT_TEXT);
	xls.SetCellText(47, nRow, _T("chenh"), FMT_TEXT);
	xls.SetCellText(48, nRow, _T("ky_hieu"), FMT_TEXT);
	xls.SetCellText(49, nRow, _T("noi_lam_viec"), FMT_TEXT);

	xls.SetCellText(50, nRow, _T("t_vattuvt"), FMT_TEXT);
	xls.SetCellText(51, nRow, _T("t_bhttvt"), FMT_TEXT);
	xls.SetCellText(52, nRow, _T("t_vattuvtchenh"), FMT_TEXT);
	xls.SetCellText(53, nRow, _T("t_an"), FMT_TEXT);
	xls.SetCellText(54, nRow, _T("t_an_nn"), FMT_TEXT);
	xls.SetCellText(55, nRow, _T("doi_tuong"), FMT_TEXT);

	xls.SetCellText(56, nRow, _T("t_xn_chenh"), FMT_TEXT);
	xls.SetCellText(57, nRow, _T("t_cdha_chenh"), FMT_TEXT);
	xls.SetCellText(58, nRow, _T("t_thuoc_chenh"), FMT_TEXT);
	xls.SetCellText(59, nRow, _T("t_mau_chenh"), FMT_TEXT);
	xls.SetCellText(60, nRow, _T("t_pttt_chenh"), FMT_TEXT);
	xls.SetCellText(61, nRow, _T("t_vtytth_chenh"), FMT_TEXT);
	xls.SetCellText(62, nRow, _T("t_vtyttt_chenh"), FMT_TEXT);
	xls.SetCellText(63, nRow, _T("t_dvktc_chenh"), FMT_TEXT);
	xls.SetCellText(64, nRow, _T("t_ktg_chenh"), FMT_TEXT);
	xls.SetCellText(65, nRow, _T("t_giuong_chenh"), FMT_TEXT);
	xls.SetCellText(66, nRow, _T("t_phikhac_chenh"), FMT_TEXT);
	xls.SetCellText(67, nRow, _T("ma_lienket"), FMT_TEXT);
	xls.SetCellText(68, nRow, _T("nguon_tt"), FMT_TEXT);

	/*nCol = 44;
	if (m_bIsInsPurpose)
	{
		xls.SetCellText(nCol++, nRow, _T("nhom"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("ngay_tt"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("tt_vtyttt"), FMT_TEXT);
	}
	if (m_bShowDiff) xls.SetCellText(nCol++, nRow, _T("chenh"), FMT_TEXT);
	if (m_bSoldierPatient){
		xls.SetCellText(nCol++, nRow, _T("ky_hieu"), FMT_TEXT);
		xls.SetCellText(nCol++, nRow, _T("noi_lam_viec"), FMT_TEXT);
	}
	xls.SetCellText(nCol++, nRow, _T("t_vattuvt"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("t_bhttvt"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("t_vattuvtchenh"), FMT_TEXT);
	if (m_bShowDiff) xls.SetCellText(nCol++, nRow, _T("t_an"), FMT_TEXT);
	xls.SetCellText(nCol++, nRow, _T("doi_tuong"), FMT_TEXT);*/

	int nIndex = 1, nTemp = 0, nIncrement = 0;
	double nCost = 0;
	double nTotal[14];
	CellFormat xlsFormat(&xls);
	xlsFormat.SetCellStyle(FMT_INTEGER);
	CDate date;
	CString szNewLine, szOldLine;
	CString szNewGroup, szOldGroup;
	nCol = 0;//reinit
	for (int i = 0; i < 14; i++)
		nTotal[i] = 0;
	while (!rs.IsEOF()){
		if (!m_bIsInsPurpose)
			rs.GetValue(_T("insline"), szNewLine);
		if (szOldLine != szNewLine && !szNewLine.IsEmpty()){
			nRow++;
			xls.SetCellMergedColumns(nCol + 1, nRow, 9);
			rs.GetValue(_T("linename"), tmpStr);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
			szTemp.Format(_T("%s"), pMF->GetSelectionString(_T("hms_insline"), szNewLine));
			xls.SetCellText(nCol + 1, nRow, szTemp, FMT_TEXT, true);
			szOldLine = szNewLine;
			szOldGroup.Empty();
		}
		if (!m_bIsInsPurpose)
			rs.GetValue(_T("insgroup"), szNewGroup);

		if (szOldGroup != szNewGroup && !szNewGroup.IsEmpty()){
			nRow++;
			xls.SetCellText(nCol, nRow, szNewGroup, FMT_TEXT, true);
			xls.SetCellMergedColumns(nCol + 1, nRow, 9);
			tmpStr.Format(_T("%s"), pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nIndex = 1;
		}
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sex"), tmpStr);
		if (tmpStr == _T("F")){
			rs.GetValue(_T("fbirthyear"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER);
			xls.WriteNumber(nRow, nCol + 3, 2, &xlsFormat);
		}
		else{
			rs.GetValue(_T("mbirthyear"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER);

			xls.WriteNumber(nRow, nCol + 3, 1, &xlsFormat);
		}
		
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("regplace"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("admitdate"), tmpStr);
		//szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dischargedate"), tmpStr);
		//szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("totaltreat"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("inscost"), nCost);
		nTotal[0] += nCost;
		xls.WriteNumber(nRow, nCol + 10, nCost, &xlsFormat);

		rs.GetValue(_T("testfee"), nCost);
		nTotal[1] += nCost;
		xls.WriteNumber(nRow, nCol + 11, nCost, &xlsFormat);

		rs.GetValue(_T("pacsfee"), nCost);
		nTotal[2] += nCost;
		xls.WriteNumber(nRow, nCol + 12, nCost, &xlsFormat);

		rs.GetValue(_T("drugfee"), nCost);
		nTotal[3] += nCost;
		xls.WriteNumber(nRow, nCol + 13, nCost, &xlsFormat);

		rs.GetValue(_T("bloodfee"), nCost);
		nTotal[4] += nCost;
		xls.WriteNumber(nRow, nCol + 14, nCost, &xlsFormat);

		rs.GetValue(_T("normtechfee"), nCost);
		nTotal[5] += nCost;
		xls.WriteNumber(nRow, nCol + 15, nCost, &xlsFormat);

		rs.GetValue(_T("materialfee"), nCost);
		nTotal[6] += nCost;
		xls.WriteNumber(nRow, nCol + 16, nCost, &xlsFormat);

		rs.GetValue(_T("replace_materialfee"), nCost);
		nTotal[7] += nCost;
		xls.WriteNumber(nRow, nCol + 17, nCost, &xlsFormat);

		rs.GetValue(_T("hitechfee"), nCost);
		nTotal[8] += nCost;
		xls.WriteNumber(nRow, nCol + 18, nCost, &xlsFormat);

		rs.GetValue(_T("drugfeek"), nCost);
		nTotal[9] += nCost;
		xls.WriteNumber(nRow, nCol + 19, nCost, &xlsFormat);

		rs.GetValue(_T("bedfee"), nCost);
		nTotal[10] += nCost;
		xls.WriteNumber(nRow, nCol + 20, nCost, &xlsFormat);

		/*rs.GetValue(_T("transportfee"), nCost);
		xls.WriteNumber(nRow, nCol + 19, nCost, &xlsFormat);*/

		rs.GetValue(_T("inspatpaid"), nCost);
		nTotal[12] += nCost;
		xls.WriteNumber(nRow, nCol + 22, nCost, &xlsFormat);

		rs.GetValue(_T("inspaid"), nCost);
		nTotal[13] += nCost;
		xls.WriteNumber(nRow, nCol + 23, nCost, &xlsFormat);

		/*rs.GetValue(_T("ratefee"), nCost);
		xls.WriteNumber(nRow, nCol + 23, nCost, &xlsFormat);*/

		rs.GetValue(_T("emergency"), tmpStr);
		if (tmpStr == _T("Y")) nTemp = 2;
		else{
			rs.GetValue(_T("hdline"), tmpStr);
			if (tmpStr == _T("1")) nTemp = 0;
			else nTemp = 1;
		}
		
		xls.WriteNumber(nRow, nCol + 25, nTemp, &xlsFormat);

		rs.GetValue(_T("reldisease"), tmpStr);
		xls.SetCellText(nCol + 26, nRow, tmpStr, FMT_TEXT);

		tmpStr.Format(_T("%s"), pMF->m_CompanyInfo.sc_id);
		xls.SetCellText(nCol + 27, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol + 28, nRow, tmpStr, FMT_TEXT);

		nCost = ToDouble(szYear);
		xls.WriteNumber(nRow, nCol + 29, nCost, &xlsFormat);

		nCost = ToDouble(szMonth);
		xls.WriteNumber(nRow, nCol + 30, nCost, &xlsFormat);
		
		rs.GetValue(_T("regdate"), tmpStr);
		szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 31, nRow, szDate, FMT_DATE);

		rs.GetValue(_T("expdate"), tmpStr);
		szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 32, nRow, szDate, FMT_DATE);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 33, nRow, tmpStr, FMT_TEXT);

		xls.WriteNumber(nRow, nCol + 35, 0, &xlsFormat);

		xls.WriteNumber(nRow, nCol + 37, 0, &xlsFormat);
		xls.WriteNumber(nRow, nCol + 38, 0, &xlsFormat);

		xls.SetCellText(nCol + 39, nRow, _T("NOI"), FMT_TEXT);
		xls.SetCellText(nCol + 40, nRow, _T("\x43SK\x43\x42"), FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 41, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hcr_mainicd"), tmpStr);
		xls.SetCellText(nCol + 42, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("insline"), tmpStr);
		xls.SetCellText(nCol + 43, nRow, tmpStr, FMT_INTEGER);

		xls.SetCellText(nCol +44 , nRow, rs.GetValue(_T("insgroup")), FMT_TEXT);
			
		xls.SetCellText(nCol +45 , nRow, rs.GetValue(_T("invoice_date")), FMT_TEXT);
			
		xls.SetCellText(nCol +46 , nRow, rs.GetValue(_T("ref_materialfee")), FMT_NUMBER1);
		xls.SetCellText(nCol +47 , nRow, rs.GetValue(_T("diffpaid")), FMT_NUMBER1);
		xls.SetCellText(nCol +48 , nRow, rs.GetValue(_T("soldier_rank")), FMT_TEXT);
		xls.SetCellText(nCol +49 , nRow, rs.GetValue(_T("work_place")), FMT_TEXT);
		xls.SetCellText(nCol + 50 , nRow, rs.GetValue(_T("l_materialfee")), FMT_TEXT);
		xls.SetCellText(nCol + 51 , nRow, rs.GetValue(_T("l_discount")), FMT_NUMBER1);
		xls.SetCellText(nCol + 52 , nRow, rs.GetValue(_T("l_diffpaid")), FMT_NUMBER1);
		xls.SetCellText(nCol + 53 , nRow, rs.GetValue(_T("food_fee")), FMT_NUMBER1);
		xls.SetCellText(nCol + 54 , nRow, rs.GetValue(_T("food_fee_nn")), FMT_NUMBER1);
		xls.SetCellText(nCol + 55 , nRow, rs.GetValue(_T("Objectname")), FMT_TEXT);

		xls.SetCellText(nCol +56 , nRow, rs.GetValue(_T("t_xn_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +57 , nRow, rs.GetValue(_T("t_cdha_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +58 , nRow, rs.GetValue(_T("t_thuoc_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +59 , nRow, rs.GetValue(_T("t_mau_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +60 , nRow, rs.GetValue(_T("t_pttt_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +61 , nRow, rs.GetValue(_T("t_vtytth_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +62 , nRow, rs.GetValue(_T("t_vtyttt_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +63 , nRow, rs.GetValue(_T("t_dvktc_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +64 , nRow, rs.GetValue(_T("t_ktg_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +65 , nRow, rs.GetValue(_T("t_giuong_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +66 , nRow, rs.GetValue(_T("t_phikhac_chenh")), FMT_NUMBER1);
		xls.SetCellText(nCol +67 , nRow, rs.GetValue(_T("ma_lienket")), FMT_TEXT);
		xls.SetCellText(nCol +68 , nRow, rs.GetValue(_T("nguontt")), FMT_TEXT);
		//xls.SetCellText(nCol + 40, nRow, _T("\x30\x31"), FMT_TEXT);
		/*nIncrement = 0;
		if (m_bIsInsPurpose)
		{
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("insgroup")), FMT_TEXT);
			nIncrement++;
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("invoice_date")), FMT_TEXT);
			nIncrement++;
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("ref_materialfee")), FMT_NUMBER1);
			nIncrement++;
		}
		if (m_bShowDiff){
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("diffpaid")), FMT_NUMBER1);
			nIncrement++;
		}
		if (m_bSoldierPatient){
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("soldier_rank")), FMT_TEXT);
			nIncrement++;             
			xls.SetCellText(nCol +44 + nIncrement, nRow, rs.GetValue(_T("work_place")), FMT_TEXT);
			nIncrement++;
		}
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_materialfee")), FMT_TEXT);
		nIncrement++;
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_discount")), FMT_TEXT);
		nIncrement++;
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("l_diffpaid")), FMT_TEXT);
		nIncrement++;
		if (m_bShowDiff)
		{
			xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("food_fee")), FMT_TEXT);
			nIncrement++;
		}
		xls.SetCellText(nCol + 44 + nIncrement, nRow, rs.GetValue(_T("Objectname")), FMT_TEXT);
		nIncrement++;*/

		rs.MoveNext();
	}
	nRow++;
	xls.SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
	for (int i = 0; i < 14; i++){
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+10, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\ChiphikhambenhBHYT_80a_1.xls"));
	EndWaitCursor();
}
CString CFMInsuranceCost79_80A::GetQueryString_A11()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szSubSQL, szWhere, szWhereBQP, szSubWhere, szOrderBy, szTable, szObjectCondition, szHavingClause;
	CString szDepts, szCards;
	CString tmpStr, szTemp, szMaterialID;
	int nIndex = 0;

	szWhere.Empty();
	szSubWhere.Empty();
	szDepts.Empty();
	szCards.Empty();


	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND fi.hfe_staff='%s' "), m_szClerkKey);

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND fi.hfe_deptid IN(%s) "), szDepts);
	}

	for (int i = 0; i < m_wndCardList.GetItemCount(); i++)
	{
		if (m_wndCardList.GetCheck(i))
		{
			tmpStr = m_wndCardList.GetItemText(i, 0);
			if (tmpStr.Find(_T(',')) > -1)
				tmpStr.Replace(_T(","), _T("','"));
			if (!szCards.IsEmpty())
				szCards += _T(",");
			szCards.AppendFormat(_T("'%s'"), tmpStr);
		}
	}

	if (!szCards.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND substr(hd_cardno,1,2) IN(%s) "), szCards);
		//MessageBox(szCards);
	}
	szSQL.Format(_T("SELECT hsd_id id FROM hms_surgery_drugtype WHERE hsd_type = 'M'"));
	rs.ExecSQL(szSQL);
// 	while (!rs.IsEOF())
// 	{
// 		if (!szMaterialID.IsEmpty())
// 			szMaterialID += _T(", ");
// 		szMaterialID.AppendFormat(_T("'%s'"),rs.GetValue(_T("id")));
// 		rs.MoveNext();
// 	}
// 	if (!szMaterialID.IsEmpty())
// 		szMaterialID += _T(", ");
// 	szMaterialID += _T("'A1500', 'A1600'");
	szOrderBy = _T(" insline, insgroup, hdline, admitdate, docno, cardno)");
	if (m_bIsInsPurpose)
		szOrderBy = _T(" to_date(dischargedate, 'dd/mm/yyyy') , deptid, hp_surname, hp_midname, hp_firstname)");
	if (m_bByDischargedDate)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee IN ('P', 'Y') AND hcr_status='T'"), m_szFromDate, m_szToDate);
	else if (m_bUnapproved)
		szWhere.AppendFormat(_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hcrf_acceptedfee = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bInsuranceApproval)
		szWhere.AppendFormat(_T(" AND hfe_approveddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND hfe_approved = 'Y'"), m_szFromDate, m_szToDate);
	else if (m_bLockedDate)
		szWhere.AppendFormat(_T(" AND fi.hfe_lockeddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							 _T(" AND fi.hfe_locked = 'Y'"), m_szFromDate, m_szToDate);
	else
		szWhere.AppendFormat(_T(" AND fi.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
							_T("  AND fi.hfe_status = 'P'"), m_szFromDate, m_szToDate);
	if (m_bOnlyCommander)
		szSubWhere.AppendFormat(_T(" AND hd_rank IN (15, 16, 17, 18, 21, 22, 23, 24)"));
	szObjectCondition = _T(" AND ho_type IN ('I', 'C') AND hd_cardno IS NOT NULL");
	if (m_bSoldierPatient)
		szObjectCondition = _T(" AND hd_object = 1");

	//Lọc đối tượng bảo hiểm BQP, bảo hiểm Hà Nội
	if (m_szphanloaibhKey == _T("BHBQP"))
		{
			szObjectCondition = _T(" AND SUBSTR(hd_cardno, 4,2) = '97'");			
		}
	else if
		(m_szphanloaibhKey == _T("BHHN"))
		{
			szObjectCondition = _T(" AND SUBSTR(hd_cardno, 4,2) <> '97'");
		}
	else
		{
		
		}

	szSubWhere += szObjectCondition;
	//szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'X') <> 'Y' AND fe.hfe_group <> 'D0000' AND fe.hfe_status <> 'C'"));
	//szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'X') <> 'Y' AND fe.hfe_status <> 'C'"));
	szWhere.AppendFormat(_T(" AND fe.hfe_status <> 'C'"));
	if (m_bOnlyCommander || (szCards == _T("'QN'")))
		m_bShowDiff = true;
	else
		m_bShowDiff = false;
	//Hien chenh lech tat ca doi tuong
	m_bShowDiff = true;
	if (m_bOverceilMaterial)
		szHavingClause.Format(_T(" AND SUM(l_materialfee) > 0"));
	if (m_bShowDiff)
		szSubSQL.Format(_T("UNION ALL") \
				_T("		SELECT fi.hfe_deptid as deptid, fi.hfe_treattime AS treattime,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid    AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_ADMITDATE,'DD/MM/YYYY') ELSE to_char(hcr_admitdate, 'DD/MM/YYYY')  END AS admitdate,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_DISCHARGEDATE,'DD/MM/YYYY') ELSE to_char(hcr_dischargedate, 'DD/MM/YYYY') END AS dischargedate,") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') ") \
				_T("		 THEN DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt)") \
				_T("		 ELSE 0 END AS diffpaid, 0, 0, 0, (CASE WHEN fe.hfe_type = 'F' THEN fe.hfe_patpaid ELSE 0 END) food_fee, (CASE WHEN fe.hfe_type = 'F' AND NVL(hfl_feefood_nn,'N')='Y' THEN fe.hfe_patpaid ELSE 0 END) food_fee_nn,") \

				_T(" CASE") \
				_T("         WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6')") \
				_T("         AND fe.hfe_group NOT          IN ('A1400', 'A1500', 'A1600', 'A1700')") \
				_T("         THEN fe.hfe_cost-fe.hfe_inspaid") \
				_T("         ELSE 0") \
				_T("       END AS drugfeediff,") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_group='A1400'") \
				_T("         THEN fe.hfe_cost-fe.hfe_inspaid") \
				_T("         ELSE 0") \
				_T("       END AS drugfeekdiff,") \
				_T("       CASE") \
				_T("         WHEN (NVL(hfl_bloodfee, 'X') = 'Y'") \
				_T("         OR fe.hfe_group              ='A2000')") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS bloodfeediff,") \
				_T("       CASE") \
				_T("         WHEN SUBSTR(fe.hfe_group, 1, 2)='B1'") \
				_T("         AND NVL(hfl_bloodfee, 'X')    <> 'Y'") \
				_T("         AND fe.hfe_hitech              ='N'") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS testfeediff,") \
				_T("       CASE") \
				_T("         WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3')") \
				_T("         AND fe.hfe_hitech                ='N'") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS pacsfeediff,") \
				_T("       CASE") \
				_T("         WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5')") \
				_T("         AND NVL(fe.hfe_hitech,'N')='N'") \

				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS normtechfeediff,") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_hitech='Y'") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS hitechfeediff,") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_group       IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT')") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS materialfeediff,") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_group   IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100', 'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT')") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS replace_materialfeediff,     ") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_group='C0000'") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS bedfeediff,      ") \
				_T("       CASE") \
				_T("         WHEN fe.hfe_group='F0000'") \
				_T("         THEN fe.hfe_patpaid") \
				_T("         ELSE 0") \
				_T("       END AS otherfeediff") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_category NOT IN ('Y', 'COV') AND htr_status='T'") \
				_T("   AND (fe.hfe_discount  = 0 OR (SUBSTR(fe.hfe_group,1,2) IN('A1','A6') AND fe.hfe_discount  > 0))") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("    %s %s"), szWhere, szWhereBQP);
    szSQL.Format(_T(" SELECT ") \
				_T(" docno,ma_lienket, treattime,Objectname,invoiceno,pname,mbirthyear,fbirthyear,sex,address,reldisease,cardno,regdate,expdate,hdline,regplace,insline,soldier_rank,work_place,linename,insgroup,") \
				_T(" admitdate,dischargedate,totaltreat,hcr_mainicd,icd10,emergency,deptid,invoice_date, invoice_date_detail,") \
				_T("  ROUND(t_tongbh) AS inscost,drugfee,drugfeek,bloodfee,testfee,pacsfee,normtechfee,hitechfee,materialfee,replace_materialfee,ref_materialfee,bedfee,transportfee,") \
				_T(" cost,otherfee,scoliosisfee,l_materialfee,l_discount,l_diffpaid,ROUND(t_bhtt) AS inspaid,patpaid,diffpaid,food_fee,food_fee_nn,ROUND(t_tongbh)-ROUND(t_bhtt) AS inspatpaid,") \

				_T("   t_xn_chenh,") \
				_T("   t_cdha_chenh,") \
				_T("   t_thuoc_chenh,") \
				_T("   t_mau_chenh,") \
				_T("   t_pttt_chenh,") \
				_T("   t_vtytth_chenh,") \
				_T("   t_vtyttt_chenh,") \
				_T("   t_dvktc_chenh,") \
				_T("   t_ktg_chenh,") \
				_T("   t_giuong_chenh,") \
				_T("   t_phikhac_chenh, nguontt  ") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT hd_docno AS docno, iv.hfe_inspaid AS t_tongbh,iv.HFE_DISCOUNT as t_bhtt, NVL(iv.HFE_PAYSOURCE, 'N') as nguontt, TO_CHAR(invoice_date, 'YYYYMMDDHH24MI') invoice_date_detail, MA_LK AS ma_lienket,treattime,") \
				_T("        HMS_GETOBJECTNAME(objectid) AS Objectname,") \
				_T("        max(invoiceno) AS invoiceno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname,") \
				_T("        case when hp_sex='M' then extract(year from hp_birthdate) else 0 end AS mbirthyear,") \
				_T("        case when hp_sex='F' then extract(year from hp_birthdate) else 0 end AS fbirthyear,") \
				_T("        hp_sex AS sex,") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
				_T("        hcr_reldisease as reldisease,") \
				_T("        CASE WHEN LENGTH(hc_cardno) > 15 THEN SUBSTR(hc_cardno,1,15) ELSE hc_cardno END AS cardno,") \
				_T("        hc_regdate AS regdate,") \
				_T("        hc_expdate AS expdate,") \
				_T("        CASE WHEN hd_insline='Y' THEN 1 ELSE 0 END AS hdline,") \
				_T("        hc_regcode AS regplace,") \
				_T("        hc_line AS insline,") \
				_T("		get_syssel_desc('hms_rank', hd_rank) soldier_rank,") \
				_T("		hp_workplace work_place,") \
				_T("		DECODE(hc_line, 1, 'A', 2, 'B', 3, 'C') AS linename,") \
				_T("        hig_group AS insgroup,") \
				_T("        admitdate,") \
				_T("        dischargedate,") \
				_T("        hcr_sumtreat AS totaltreat,") \
				_T("        hcr_mainicd,") \
				_T("        hcr_maindisease AS icd10,") \
				_T("        hd_emergency AS emergency,") \
				_T("        lower(deptid) AS deptid,") \
				_T("		TO_CHAR(invoice_date, 'DD/MM/YYYY') invoice_date,") \
				_T("		round(SUM(drugfee+drugfeek+bloodfee+testfee+pacsfee+normtechfee+hitechfee+materialfee+replace_materialfee+bedfee+transportfee)) AS inscost,") \
				_T("        round(SUM(drugfee)) AS drugfee,") \
				_T("        round(SUM(drugfeek)) AS drugfeek,") \
				_T("        round(SUM(bloodfee)) AS bloodfee,") \
				_T("        round(SUM(testfee)) AS testfee,") \
				_T("        round(SUM(pacsfee)) AS pacsfee,") \
				_T("        round(SUM(normtechfee)) AS normtechfee,") \
				_T("        round(SUM(hitechfee)) AS hitechfee,") \
				_T("        round(SUM(materialfee)) AS materialfee,") \
				_T("        round(SUM(replace_materialfee)) AS replace_materialfee,") \
				_T("        round(SUM(ref_materialfee)) AS ref_materialfee,") \
				_T("        round(SUM(bedfee)) AS bedfee,") \
				_T("        round(SUM(transportfee)) AS transportfee,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid)) ELSE ROUND(SUM(inspaid)) END AS cost,") \
				_T("        round(SUM(otherfee)) AS otherfee,") \
				_T("		round(SUM(scoliosisfee)) scoliosisfee,") \
				_T("		round(SUM(l_materialfee)) l_materialfee,") \
				_T("		round(SUM(l_discount)) l_discount,") \
				_T("		round(SUM(l_materialfee - l_discount)) l_diffpaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_discount)) ELSE ROUND(SUM(discount)) END AS inspaid,") \
				_T("        CASE WHEN SUM(is_scoliosis) > 0 THEN ROUND(SUM(v_inspaid - v_discount)) ELSE ROUND(SUM(inspaid-discount)) END AS patpaid,") \
				//_T("		round(SUM(diffpaid)) AS diffpaid,") \//
				_T("        ROUND(SUM(food_fee+testfeediff+pacsfeediff+drugfeediff+bloodfeediff+normtechfeediff+materialfeediff+replace_materialfeediff+hitechfeediff+drugfeekdiff+bedfeediff+otherfeediff)) AS diffpaid,") \
				_T("		round(SUM(food_fee)) AS food_fee,") \
				_T("		round(SUM(food_fee_nn)) AS food_fee_nn,") \

				_T("				   ROUND(SUM(testfeediff))     AS t_xn_chenh,") \
				_T(" 				   ROUND(SUM(pacsfeediff))     AS t_cdha_chenh,") \
				_T(" 				   ROUND(SUM(drugfeediff))      AS t_thuoc_chenh,") \
				_T(" 				   ROUND(SUM(bloodfeediff))     AS t_mau_chenh,") \
				_T(" 				   ROUND(SUM(normtechfeediff))     AS t_pttt_chenh,") \
				_T(" 				   ROUND(SUM(materialfeediff))     AS t_vtytth_chenh,") \
				_T(" 				   ROUND(SUM(replace_materialfeediff)) AS t_vtyttt_chenh,") \
				_T(" 				   ROUND(SUM(hitechfeediff))     AS t_dvktc_chenh,") \
				_T(" 				   ROUND(SUM(drugfeekdiff))     AS t_ktg_chenh,   ") \
				_T(" 				   ROUND(SUM(bedfeediff))     AS t_giuong_chenh,") \
				_T(" 				   ROUND(SUM(otherfeediff))     AS t_phikhac_chenh") \

				_T(" FROM") \
				_T(" (") \
				_T("  SELECT fi.hfe_deptid as deptid, fi.hfe_treattime AS treattime,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_ADMITDATE,'DD/MM/YYYY') ELSE to_char(hcr_admitdate, 'DD/MM/YYYY')  END AS admitdate,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_DISCHARGEDATE,'DD/MM/YYYY') ELSE to_char(hcr_dischargedate, 'DD/MM/YYYY') END AS dischargedate,") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group,1,2) IN('A1','A6') AND fe.hfe_group NOT IN ('A1400', 'A1500', 'A1600') THEN fe.hfe_inspaid ELSE 0 END AS drugfee,") \
				_T("         CASE WHEN fe.hfe_group='A1400' THEN fe.hfe_inspaid ELSE 0 END AS drugfeek,") \
				_T("         CASE WHEN (NVL(hfl_bloodfee, 'X') = 'Y' OR fe.hfe_group='A2000') THEN fe.hfe_inspaid ELSE 0 END AS bloodfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2)='B1' AND NVL(hfl_bloodfee, 'X') <> 'Y'") \
				_T("		 AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS testfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B2','B3') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS pacsfee,") \
				_T("         CASE WHEN SUBSTR(fe.hfe_group, 1, 2) IN('B4','B5') AND fe.hfe_hitech ='N' THEN fe.hfe_inspaid ELSE 0 END AS normtechfee,") \
				_T("         CASE WHEN fe.hfe_hitech='Y' THEN fe.hfe_inspaid ELSE 0 END AS hitechfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup NOT IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_inspaid ELSE 0 END AS replace_materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN('A9600', 'A1500', 'A1600', 'A3000' , 'A4000', 'A5000', 'A5100', 'A7000' , 'A8000', 'A8100',") \
				_T("         'A8200', 'A8300', 'A8400', 'A8500', 'A8600', 'A8700', 'A8800', 'A9000', 'A9001', 'A9002', 'A9003')") \
				_T("         AND fe.hfe_feegroup IN ('OPT_L', 'OPT') THEN fe.hfe_cost ELSE 0 END AS ref_materialfee,") \
				_T("         CASE WHEN fe.hfe_group IN ('C0000', 'D0000') THEN fe.hfe_inspaid ELSE 0 END AS bedfee,") \
				_T("         CASE WHEN fe.hfe_group='E0000' THEN fe.hfe_inspaid ELSE 0 END AS transportfee,") \
				_T("         CASE WHEN fe.hfe_group='F0000' THEN fe.hfe_inspaid ELSE 0 END AS otherfee,") \
				_T("		 0 scoliosisfee,") \
				_T("		 CASE WHEN fe.hfe_feegroup = 'OPT_L' AND fe.hfe_type = 'D' THEN fe.hfe_inspaid ELSE 0 END l_materialfee,") \
				_T("		 0 l_discount, ") \
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_inspaid ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN fe.hfe_feegroup NOT IN ('HITECH_L', 'OPT_L') THEN fe.hfe_diffcost ELSE 0 END diffpaid, 0 is_scoliosis, 0 v_inspaid, 0 v_discount, 0 food_fee,0 food_fee_nn, ") \

				_T("     0               AS drugfeediff,") \
				_T("     0               AS drugfeekdiff,") \
				_T("     0               AS bloodfeediff,") \
				_T("     0               AS testfeediff,") \
				_T("     0               AS pacsfeediff,") \
				_T("     0               AS normtechfeediff,") \
				_T("     0               AS hitechfeediff,") \
				_T("     0               AS materialfeediff,") \
				_T("     0               AS replace_materialfeediff,") \
				_T("     0               AS bedfeediff,") \
				_T("     0               AS otherfeediff") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_fee_list ON (fe.hfe_itemid = hfl_feeid)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category NOT IN ('Y', 'COV') AND htr_status='T'") \
				_T("         AND fe.hfe_type <> 'V' ") \
				_T("   %s") \
				_T("   UNION ALL") \
				_T("   SELECT fi.hfe_deptid as deptid, fi.hfe_treattime AS treattime,") \
				_T("         fi.hfe_class,") \
				_T("         fe.hfe_docno as docno,") \
				_T("         fi.hfe_objectid AS objectid,") \
				_T("         fe.hfe_invoiceno as invoiceno,") \
				_T("         fe.hfe_group AS groupid,") \
				_T("		 hcr_reldisease,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_ADMITDATE,'DD/MM/YYYY') ELSE to_char(hcr_admitdate, 'DD/MM/YYYY')  END AS admitdate,") \
				_T("		 CASE WHEN HTR_TREATTIME>0 THEN to_char(HTR_DISCHARGEDATE,'DD/MM/YYYY') ELSE to_char(hcr_dischargedate, 'DD/MM/YYYY') END AS dischargedate,") \
				_T("		 hcr_sumtreat, hcr_mainicd, hcr_maindisease, fi.hfe_date invoice_date,") \
				_T("		 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN fe.hfe_discount ELSE 0 END,") \
				_T("		 0, CASE WHEN NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END,")
				_T("         fe.hfe_cost AS cost,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount / hd_disrate * 100 ELSE 0 END AS inspaid,") \
				_T("         CASE WHEN fe.hfe_feegroup IN ('HITECH_L', 'OPT_L') AND NVL(ho_scoliosis, 'N') <> 'Y' THEN fe.hfe_discount ELSE 0 END AS discount,") \
				_T("         fe.hfe_patpaid AS patpaid,") \
				_T("         CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 0 ELSE fe.hfe_diffcost END diffpaid,") \
				_T("		 CASE WHEN NVL(ho_scoliosis, 'N') = 'Y' THEN 1 ELSE 0 END is_scoliosis, fe.hfe_discount / hd_disrate * 100 AS hfe_inspaid, fe.hfe_discount, 0 food_fee,0 food_fee_nn,") \

				_T("     0               AS drugfeediff,") \
				_T("     0               AS drugfeekdiff,") \
				_T("     0               AS bloodfeediff,") \
				_T("     0               AS testfeediff,") \
				_T("     0               AS pacsfeediff,") \
				_T("     0               AS normtechfeediff,") \
				_T("     0               AS hitechfeediff,") \
				_T("     0               AS materialfeediff,") \
				_T("     fe.hfe_cost-fe.hfe_inspaid AS replace_materialfeediff,") \
				_T("     0               AS bedfeediff,") \
				_T("     0               AS otherfeediff") \
				_T("   FROM hms_clinical_record ") \
				_T("   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
				_T("   LEFT JOIN Hms_Fee_Approve fa ON (hcr_docno=fa.hfe_docno AND htr_idx=fa.Hfe_Refidx)") \
				_T("   LEFT JOIN hms_fee_invoice fi ON (hcr_docno = fi.hfe_docno AND fi.HFE_INVOICENO=fa.HFE_INVOICENO)") \
				_T("   LEFT JOIN hms_fee_view fe ON(fe.hfe_invoiceno=fi.hfe_invoiceno AND fe.hfe_docno=fi.hfe_docno)") \
				_T("   LEFT JOIN hms_operation ON (ho_docno = hcr_docno AND ho_itemid = hfe_subgroup AND ho_idx = hfe_orderid)") \
				_T("   LEFT JOIN hms_doc ON(hd_docno = hcr_docno)") \
				_T("   WHERE fi.hfe_class IN('A', 'I') AND fe.hfe_discount > 0 AND fe.hfe_category NOT IN ('Y', 'COV') AND htr_status='T'") \
				_T("         AND fe.hfe_type = 'V' ") \
				_T("   %s %s %s") \
				_T(" ) tbl") \
				_T(" LEFT JOIN hms_doc ON(docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
				_T(" LEFT JOIN hms_object ON(ho_id=objectid)") \
				_T(" LEFT JOIN hms_icd ON(hcr_mainicd=hi_icd)") \
				_T(" LEFT JOIN hms_insurance_group ON (hig_idx= hc_groupid)") \
				_T(" LEFT JOIN BH_XML_1 ON (MA_BN = cast(hd_docno as NVARCHAR2(8)) AND treattime = substr(MA_LK, 10,11))") \
				_T(" LEFT JOIN hms_fee_invoice iv ON (iv.hfe_docno = hd_docno AND iv.hfe_invoiceno = invoiceno) ") \
				_T(" WHERE 1=1 ") \
				_T(" %s") \
				_T(" GROUP BY hd_docno, iv.hfe_inspaid,iv.HFE_DISCOUNT,iv.HFE_PAYSOURCE, MA_LK, treattime,objectid, hp_surname, hp_midname, hp_firstname, hp_birthdate, hp_sex, hc_cardno, hd_insline, hd_rank, hp_workplace,") \
				_T("		  hc_groupid, hc_line, hd_insline, hc_regcode, hcr_mainicd, hcr_maindisease, admitdate, dischargedate, ") \
				_T("		  hcr_sumtreat, hp_provid, hp_distid, hp_villid, hc_regdate, hc_expdate, hcr_reldisease, hi_name, ") \
				_T("		  hd_emergency, deptid, hd_admitdept, invoice_date, hig_group") \
				_T(" HAVING SUM(cost) > 0 AND SUM(inspaid-discount) >= 0 ") \
				_T(" %s") \
				_T(" ORDER BY ") \
				_T(" %s"), szWhere, szWhere, szWhereBQP,szSubSQL, szSubWhere, szHavingClause, szOrderBy);
				//_msg(_T("%s"), szSQL);

	return szSQL;
}

int CFMInsuranceCost79_80A::OnExport7980()
{
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

	tmpStr.Format(_T("Exports\\7980a_%s%s_file3360.xls"), m_szFromDate.Left(4), m_szFromDate.Mid(5,2));
	xls.Save(tmpStr);
	EndWaitCursor();
	return 0;
}
CString CFMInsuranceCost79_80A::GetSQLString7980()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
		CString szSQL, szWhere;
		CString szExamRoom, szUserReceiver;
		CString szOrder;	

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
	_T(" 	 from BH_XML_1  a   ,") \
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
