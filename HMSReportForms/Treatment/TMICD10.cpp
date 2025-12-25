#include "stdafx.h"
#include "TMICD10.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMICD10Report* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnAge1ChangeFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnAge1Change();
} */
/*static void _OnAge1SetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnAge1Setfocus();} */ 
/*static void _OnAge1KillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnAge1Killfocus();
} */
static int _OnAge1CheckValueFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnAge1CheckValue();
} 
static void _OnOccupationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMICD10Report* )pWnd)->OnOccupationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOccupationSelendokFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnOccupationSelendok();
}
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnOccupationKillfocus();
}*/
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnOccupationKillfocus();
}*/
static long _OnOccupationLoadDataFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnOccupationLoadData();
}
/*static void _OnOccupationAddNewFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnOccupationAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMICD10Report* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnEthnicAddNew();
}*/
static void _OnProvinceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMICD10Report* )pWnd)->OnProvinceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvinceSelendokFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnProvinceSelendok();
}
/*static void _OnProvinceSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnProvinceKillfocus();
}*/
/*static void _OnProvinceKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnProvinceKillfocus();
}*/
static long _OnProvinceLoadDataFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnProvinceLoadData();
}
/*static void _OnProvinceAddNewFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnProvinceAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMICD10Report* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMICD10Report* )pWnd)->OnVillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillSelendokFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnVillSelendok();
}
/*static void _OnVillSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnVillKillfocus();
}*/
/*static void _OnVillKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnVillKillfocus();
}*/
static long _OnVillLoadDataFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnVillLoadData();
}
/*static void _OnVillAddNewFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnVillAddNew();
}*/
static void _OnChapterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMICD10Report* )pWnd)->OnChapterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChapterSelendokFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnChapterSelendok();
}
/*static void _OnChapterSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnChapterKillfocus();
}*/
/*static void _OnChapterKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnChapterKillfocus();
}*/
static long _OnChapterLoadDataFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnChapterLoadData();
}
/*static void _OnChapterAddNewFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnChapterAddNew();
}*/
static void _OnGroupsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMICD10Report* )pWnd)->OnGroupsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupsSelendokFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnGroupsSelendok();
}
/*static void _OnGroupsSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnGroupsKillfocus();
}*/
/*static void _OnGroupsKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnGroupsKillfocus();
}*/
static long _OnGroupsLoadDataFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnGroupsLoadData();
}
/*static void _OnGroupsAddNewFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnGroupsAddNew();
}*/
static void _OnICDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMICD10Report* )pWnd)->OnICDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDSelendokFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnICDSelendok();
}
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnICDKillfocus();
}*/
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnICDKillfocus();
}*/
static long _OnICDLoadDataFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnICDLoadData();
}
/*static void _OnICDAddNewFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnICDAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMICD10Report* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CTMICD10Report *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CTMICD10Report *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMICD10Report *pVw = (CTMICD10Report *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMICD10Report *pVw = (CTMICD10Report *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CTMICD10Report *pVw = (CTMICD10Report *)pWnd;
	pVw->OnLoadSelect();
} 
static int _OnAddrptICD10ReportFnc(CWnd *pWnd){
	 return ((CTMICD10Report*)pWnd)->OnAddrptICD10Report();
} 
static int _OnEditrptICD10ReportFnc(CWnd *pWnd){
	 return ((CTMICD10Report*)pWnd)->OnEditrptICD10Report();
} 
static int _OnDeleterptICD10ReportFnc(CWnd *pWnd){
	 return ((CTMICD10Report*)pWnd)->OnDeleterptICD10Report();
} 
static int _OnSaverptICD10ReportFnc(CWnd *pWnd){
	 return ((CTMICD10Report*)pWnd)->OnSaverptICD10Report();
} 
static int _OnCancelrptICD10ReportFnc(CWnd *pWnd){
	 return ((CTMICD10Report*)pWnd)->OnCancelrptICD10Report();
} 
CTMICD10Report::CTMICD10Report(CWnd *pParent)
{
	m_nDlgWidth = 555;
	m_nDlgHeight = 220;
	SetDefaultValues();

	//Báo cáo danh sách bệnh nhân theo mã ICD
}
CTMICD10Report::~CTMICD10Report()
{
	if (m_rs != NULL) 
		delete m_rs;
}
void CTMICD10Report::OnCreateComponents()
{
	/*m_wndReportCriteria.Create(this, _T("Report Condition"), 5, 5, 815, 150);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 10, 30, 110, 55);
	m_wndReportPeriod.Create(this,115, 30, 290, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 295, 30, 375, 55);
	m_wndFromDate.Create(this,380, 30, 550, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 555, 30, 635, 55);
	m_wndToDate.Create(this,640, 30, 810, 55); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 60, 110, 85);
	m_wndAge.Create(this,115, 60, 200, 85); 
	m_wndAge1.Create(this,205, 60, 290, 85); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 295, 60, 375, 85);
	m_wndOccupation.Create(this,380, 60, 550, 85); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 555, 60, 635, 85);
	m_wndEthnic.Create(this,640, 60, 810, 85); 
	m_wndProvinceLabel.Create(this, _T("Province"), 10, 90, 110, 115);
	m_wndProvince.Create(this,115, 90, 290, 115); 
	m_wndDistrictLabel.Create(this, _T("District"), 295, 90, 375, 115);
	m_wndDistrict.Create(this,380, 90, 550, 115); 
	m_wndVillLabel.Create(this, _T("Vill"), 555, 90, 635, 115);
	m_wndVill.Create(this,640, 90, 810, 115); 
	m_wndChapterLabel.Create(this, _T("Chapter"), 10, 120, 110, 145);
	m_wndChapter.Create(this,115, 120, 290, 145); 
	m_wndGroupsLabel.Create(this, _T("Group"), 295, 120, 375, 145);
	m_wndGroups.Create(this,380, 120, 550, 145); 
	m_wndICDLabel.Create(this, _T("ICD10"), 555, 120, 635, 145);
	m_wndICD.Create(this,640, 120, 810, 145); 
	m_wndPrint.Create(this, _T("&Print"), 565, 155, 645, 180);
	m_wndExport.Create(this, _T("&Export"), 650, 155, 730, 180);
	m_wndLoad.Create(this, _T("&Close"), 735, 155, 815, 180);*/
	m_wndReportCriteria.Create(this, _T("Report Condition"), 5, 5, 545, 210);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 195, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 275, 55);
	m_wndToDate.Create(this,280, 30, 360, 55); 
	m_wndAgeLabel.Create(this, _T("Age"), 365, 30, 420, 55);
	m_wndAge.Create(this,425, 30, 480, 55); 
	m_wndAge1.Create(this,485, 30, 540, 55); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 10, 60, 110, 85);
	m_wndOccupation.Create(this,115, 60, 275, 85); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 280, 60, 360, 85);
	m_wndEthnic.Create(this,365, 60, 540, 85); 
	m_wndProvinceLabel.Create(this, _T("Province"), 10, 90, 110, 115);
	m_wndProvince.Create(this,115, 90, 275, 115); 
	m_wndDistrictLabel.Create(this, _T("District"), 280, 90, 360, 115);
	m_wndDistrict.Create(this,365, 90, 540, 115); 
	m_wndVillLabel.Create(this, _T("Vill"), 10, 120, 110, 145);
	m_wndVill.Create(this,115, 120, 275, 145); 
	m_wndChapterLabel.Create(this, _T("Chapter"), 280, 120, 360, 145);
	m_wndChapter.Create(this,365, 120, 540, 145); 
	m_wndGroupsLabel.Create(this, _T("Group"), 10, 150, 110, 175);
	m_wndGroups.Create(this,115, 150, 275, 175); 
	m_wndICDLabel.Create(this, _T("ICD10"), 280, 150, 360, 175);
	m_wndICD.Create(this,365, 150, 540, 175); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 180, 110, 205);
	m_wndDept.Create(this,115, 180, 540, 205); 
	m_wndPrint.Create(this, _T("&Print"), 380, 215, 460, 240);
	m_wndExport.Create(this, _T("&Export"), 465, 215, 545, 240);
}
void CTMICD10Report::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(15);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndAge.SetLimitText(16);
	//m_wndAge.SetCheckValue(true);
	m_wndAge1.SetLimitText(16);
	//m_wndAge1.SetCheckValue(true);
	//m_wndOccupation.SetCheckValue(true);
	m_wndOccupation.LimitText(35);
	//m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(81);
	//m_wndProvince.SetCheckValue(true);
	m_wndProvince.LimitText(35);
	//m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(35);
	//m_wndVill.SetCheckValue(true);
	m_wndVill.LimitText(35);
	//m_wndChapter.SetCheckValue(true);
	m_wndChapter.LimitText(35);
	//m_wndGroups.SetCheckValue(true);
	m_wndGroups.LimitText(35);
	//m_wndICD.SetCheckValue(true);
	m_wndICD.LimitText(35);

	m_rs = new CRecord(&pMF->m_db);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 60);


	m_wndOccupation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOccupation.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndEthnic.InsertColumn(1, _T("Description"), CFMT_TEXT, 120);


	m_wndProvince.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProvince.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_NUMBER, 45);
	m_wndDistrict.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);


	m_wndVill.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVill.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndChapter.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndChapter.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndGroups.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroups.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndICD.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndICD.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Dept"), CFMT_TEXT, 250);

	m_szFromDate=m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	SetMode(VM_EDIT);
}
void CTMICD10Report::OnSetWindowEvents()
{
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
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndAge1.SetEvent(WE_CHANGE, _OnAge1ChangeFnc);
	//m_wndAge1.SetEvent(WE_SETFOCUS, _OnAge1SetfocusFnc);
	//m_wndAge1.SetEvent(WE_KILLFOCUS, _OnAge1KillfocusFnc);
	m_wndAge1.SetEvent(WE_CHECKVALUE, _OnAge1CheckValueFnc);
	m_wndOccupation.SetEvent(WE_SELENDOK, _OnOccupationSelendokFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_SELCHANGE, _OnOccupationSelectChangeFnc);
	m_wndOccupation.SetEvent(WE_LOADDATA, _OnOccupationLoadDataFnc);
	//m_wndOccupation.SetEvent(WE_ADDNEW, _OnOccupationAddNewFnc);
	m_wndEthnic.SetEvent(WE_SELENDOK, _OnEthnicSelendokFnc);
	//m_wndEthnic.SetEvent(WE_SETFOCUS, _OnEthnicSetfocusFnc);
	//m_wndEthnic.SetEvent(WE_KILLFOCUS, _OnEthnicKillfocusFnc);
	m_wndEthnic.SetEvent(WE_SELCHANGE, _OnEthnicSelectChangeFnc);
	m_wndEthnic.SetEvent(WE_LOADDATA, _OnEthnicLoadDataFnc);
	//m_wndEthnic.SetEvent(WE_ADDNEW, _OnEthnicAddNewFnc);
	m_wndProvince.SetEvent(WE_SELENDOK, _OnProvinceSelendokFnc);
	//m_wndProvince.SetEvent(WE_SETFOCUS, _OnProvinceSetfocusFnc);
	//m_wndProvince.SetEvent(WE_KILLFOCUS, _OnProvinceKillfocusFnc);
	m_wndProvince.SetEvent(WE_SELCHANGE, _OnProvinceSelectChangeFnc);
	m_wndProvince.SetEvent(WE_LOADDATA, _OnProvinceLoadDataFnc);
	//m_wndProvince.SetEvent(WE_ADDNEW, _OnProvinceAddNewFnc);
	m_wndDistrict.SetEvent(WE_SELENDOK, _OnDistrictSelendokFnc);
	//m_wndDistrict.SetEvent(WE_SETFOCUS, _OnDistrictSetfocusFnc);
	//m_wndDistrict.SetEvent(WE_KILLFOCUS, _OnDistrictKillfocusFnc);
	m_wndDistrict.SetEvent(WE_SELCHANGE, _OnDistrictSelectChangeFnc);
	m_wndDistrict.SetEvent(WE_LOADDATA, _OnDistrictLoadDataFnc);
	//m_wndDistrict.SetEvent(WE_ADDNEW, _OnDistrictAddNewFnc);
	m_wndVill.SetEvent(WE_SELENDOK, _OnVillSelendokFnc);
	//m_wndVill.SetEvent(WE_SETFOCUS, _OnVillSetfocusFnc);
	//m_wndVill.SetEvent(WE_KILLFOCUS, _OnVillKillfocusFnc);
	m_wndVill.SetEvent(WE_SELCHANGE, _OnVillSelectChangeFnc);
	m_wndVill.SetEvent(WE_LOADDATA, _OnVillLoadDataFnc);
	//m_wndVill.SetEvent(WE_ADDNEW, _OnVillAddNewFnc);
	m_wndChapter.SetEvent(WE_SELENDOK, _OnChapterSelendokFnc);
	//m_wndChapter.SetEvent(WE_SETFOCUS, _OnChapterSetfocusFnc);
	//m_wndChapter.SetEvent(WE_KILLFOCUS, _OnChapterKillfocusFnc);
	m_wndChapter.SetEvent(WE_SELCHANGE, _OnChapterSelectChangeFnc);
	m_wndChapter.SetEvent(WE_LOADDATA, _OnChapterLoadDataFnc);
	//m_wndChapter.SetEvent(WE_ADDNEW, _OnChapterAddNewFnc);
	m_wndGroups.SetEvent(WE_SELENDOK, _OnGroupsSelendokFnc);
	//m_wndGroups.SetEvent(WE_SETFOCUS, _OnGroupsSetfocusFnc);
	//m_wndGroups.SetEvent(WE_KILLFOCUS, _OnGroupsKillfocusFnc);
	m_wndGroups.SetEvent(WE_SELCHANGE, _OnGroupsSelectChangeFnc);
	m_wndGroups.SetEvent(WE_LOADDATA, _OnGroupsLoadDataFnc);
	//m_wndGroups.SetEvent(WE_ADDNEW, _OnGroupsAddNewFnc);
	m_wndICD.SetEvent(WE_SELENDOK, _OnICDSelendokFnc);
	//m_wndICD.SetEvent(WE_SETFOCUS, _OnICDSetfocusFnc);
	//m_wndICD.SetEvent(WE_KILLFOCUS, _OnICDKillfocusFnc);
	m_wndICD.SetEvent(WE_SELCHANGE, _OnICDSelectChangeFnc);
	m_wndICD.SetEvent(WE_LOADDATA, _OnICDLoadDataFnc);
	//m_wndICD.SetEvent(WE_ADDNEW, _OnICDAddNewFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);

}
void CTMICD10Report::OnDoDataExchange(CDataExchange* pDX)
{
	//DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_nAge);
	DDX_Text(pDX, m_wndAge1.GetDlgCtrlID(), m_nAge1);
	DDX_TextEx(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupationKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
	DDX_TextEx(pDX, m_wndProvince.GetDlgCtrlID(), m_szProvinceKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVill.GetDlgCtrlID(), m_szVillKey);
	DDX_TextEx(pDX, m_wndChapter.GetDlgCtrlID(), m_szChapterKey);
	DDX_TextEx(pDX, m_wndGroups.GetDlgCtrlID(), m_szGroupsKey);
	DDX_TextEx(pDX, m_wndICD.GetDlgCtrlID(), m_szICDKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);

}
void CTMICD10Report::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMICD10Report::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMICD10Report::SetDefaultValues(){

	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAge=0;
	m_nAge1=0;
	m_szOccupationKey.Empty();
	m_szEthnicKey.Empty();
	m_szProvinceKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillKey.Empty();
	m_szChapterKey.Empty();
	m_szGroupsKey.Empty();
	m_szICDKey.Empty();
	m_szDeptKey.Empty();

}
int CTMICD10Report::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1); 
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
void CTMICD10Report::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMICD10Report::OnReportPeriodSelendok()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	/*CString tmpStr;
	CDate dte, date;
	UpdateData(true);
	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), nYear);
		tmpStr.Format(_T("%.4d/03/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), nYear);
		tmpStr.Format(_T("%.4d/06/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), nYear, dte.GetMonthLastDay());
	}

	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), nYear);
		tmpStr.Format(_T("%.4d/09/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), nYear);
		tmpStr.Format(_T("%.4d/10/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), nYear);
		tmpStr.Format(_T("%.4d/12/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), nYear, dte.GetMonthLastDay());
	}
	UpdateData(false);*/
}
/*void CTMICD10Report::OnReportPeriodSetfocus(){
	
}*/
/*void CTMICD10Report::OnReportPeriodKillfocus(){
	
}*/
long CTMICD10Report::OnReportPeriodLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
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
/*void CTMICD10Report::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMICD10Report::OnFromDateChange(){
	
} */
/*void CTMICD10Report::OnFromDateSetfocus(){
	
} */
/*void CTMICD10Report::OnFromDateKillfocus(){
	
} */
int CTMICD10Report::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMICD10Report::OnToDateChange(){
	
} */
/*void CTMICD10Report::OnToDateSetfocus(){
	
} */
/*void CTMICD10Report::OnToDateKillfocus(){
	
} */
int CTMICD10Report::OnToDateCheckValue(){
	return 0;
} 
/*void CTMICD10Report::OnAgeChange(){
	
} */
/*void CTMICD10Report::OnAgeSetfocus(){
	
} */
/*void CTMICD10Report::OnAgeKillfocus(){
	
} */
int CTMICD10Report::OnAgeCheckValue(){
	return 0;
} 
/*void CTMICD10Report::OnAge1Change(){
	
} */
/*void CTMICD10Report::OnAge1Setfocus(){
	
} */
/*void CTMICD10Report::OnAge1Killfocus(){
	
} */
int CTMICD10Report::OnAge1CheckValue(){
	return 0;
} 
void CTMICD10Report::OnOccupationSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMICD10Report::OnOccupationSelendok(){
	 
}
/*void CTMICD10Report::OnOccupationSetfocus(){
	
}*/
/*void CTMICD10Report::OnOccupationKillfocus(){
	
}*/
long CTMICD10Report::OnOccupationLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOccupation.IsSearchKey() && !m_szOccupationKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szOccupationKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_occupation' %s ORDER BY cast(ss_code as integer) "),szWhere);

	m_wndOccupation.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOccupation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMICD10Report::OnOccupationAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMICD10Report::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMICD10Report::OnEthnicSelendok(){
	 
}
/*void CTMICD10Report::OnEthnicSetfocus(){
	
}*/
/*void CTMICD10Report::OnEthnicKillfocus(){
	
}*/
long CTMICD10Report::OnEthnicLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndEthnic.IsSearchKey() && ToInt(m_szEthnicKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szEthnicKey);
	}
	m_wndEthnic.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel ")\
				 _T("WHERE ss_id='sys_ethnic' %s ORDER BY cast(ss_code as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEthnic.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMICD10Report::OnEthnicAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMICD10Report::OnProvinceSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMICD10Report::OnProvinceSelendok(){
	 
}
/*void CTMICD10Report::OnProvinceSetfocus(){
	
}*/
/*void CTMICD10Report::OnProvinceKillfocus(){
	
}*/
long CTMICD10Report::OnProvinceLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvince.IsSearchKey() && !m_szProvinceKey.IsEmpty()){
		szWhere.Format(_T(" Where sp_id =%d "), ToInt(m_szProvinceKey));
	};
	m_wndProvince.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" Select sp_id as id, sp_name as name from sys_prov %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvince.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMICD10Report::OnProvinceAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMICD10Report::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMICD10Report::OnDistrictSelendok(){
	 
}
/*void CTMICD10Report::OnDistrictSetfocus(){
	
}*/
/*void CTMICD10Report::OnDistrictKillfocus(){
	
}*/
long CTMICD10Report::OnDistrictLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDistrict.IsSearchKey() && !m_szDistrictKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id = %d "), ToInt(m_szDistrictKey));
	};
	m_wndDistrict.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT sd_id as id, sd_name as Name FROM sys_dist WHERE sd_provid = %d %s"), ToInt(m_wndProvince.GetCurrent(0)), szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistrict.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMICD10Report::OnDistrictAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMICD10Report::OnVillSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMICD10Report::OnVillSelendok(){
	 
}
/*void CTMICD10Report::OnVillSetfocus(){
	
}*/
/*void CTMICD10Report::OnVillKillfocus(){
	
}*/
long CTMICD10Report::OnVillLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVill.IsSearchKey() && !m_szVillKey.IsEmpty()){
		szWhere.Format(_T(" and sv_id =%d "), ToInt(m_szVillKey));
	};
	m_wndVill.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT sv_id as id, sv_name as name FROM sys_vill WHERE sv_provid=%d and sv_distid = %d %s"), ToInt(m_wndProvince.GetCurrent(0)), ToInt(m_wndDistrict.GetCurrent(0)), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVill.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMICD10Report::OnVillAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMICD10Report::OnChapterSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMICD10Report::OnChapterSelendok(){
	 
}
/*void CTMICD10Report::OnChapterSetfocus(){
	
}*/
/*void CTMICD10Report::OnChapterKillfocus(){
	
}*/
long CTMICD10Report::OnChapterLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChapter.IsSearchKey() && !m_szChapterKey.IsEmpty()){
		szWhere.Format(_T(" WHERE hic_id = %d "), ToInt(m_szChapterKey));
	};
	m_wndChapter.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hic_id as id, hic_name as name FROM hms_icdChapter %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChapter.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMICD10Report::OnChapterAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMICD10Report::OnGroupsSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMICD10Report::OnGroupsSelendok(){
	 
}
/*void CTMICD10Report::OnGroupsSetfocus(){
	
}*/
/*void CTMICD10Report::OnGroupsKillfocus(){
	
}*/
long CTMICD10Report::OnGroupsLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroups.IsSearchKey() && !m_szGroupsKey.IsEmpty()){
		szWhere.Format(_T(" AND hig_id = %d "), ToInt(m_szGroupsKey));
	};
	m_wndGroups.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hig_id as id, hig_name as name FROM hms_icdgroup WHERE hig_chapterid =%d %s"), ToInt(m_wndChapter.GetCurrent(0)), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroups.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMICD10Report::OnGroupsAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMICD10Report::OnICDSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMICD10Report::OnICDSelendok(){
	 
}
/*void CTMICD10Report::OnICDSetfocus(){
	
}*/
/*void CTMICD10Report::OnICDKillfocus(){
	
}*/
long CTMICD10Report::OnICDLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	if (ToInt(m_wndChapter.GetCurrent(0)) > 0)
		tmpStr.Format(_T("	AND hi_chapterid =%d "),ToInt(m_wndChapter.GetCurrent(0)));
	if ( ToInt(m_wndGroups.GetCurrent(0)) >0 )
		tmpStr.AppendFormat(_T(" and hi_groupid=%d"), ToInt(m_wndGroups.GetCurrent(0)));

	if(m_wndICD.IsSearchKey() && !m_szICDKey.IsEmpty()){
		szWhere.Format(_T("AND hi_icd ='%s' "), m_szICDKey);
	};
	m_wndICD.DeleteAllItems(); 
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROm hms_icd WHERE 1=1 %s %s"), tmpStr, szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMICD10Report::OnICDAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMICD10Report::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMICD10Report::OnDeptSelendok(){
	 
}
/*void CTMICD10Report::OnDeptSetfocus(){
	
}*/
/*void CTMICD10Report::OnDeptKillfocus(){
	
}*/
long CTMICD10Report::OnDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" and sd_id = '%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMICD10Report::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMICD10Report::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere, szWhereSub;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	
	if(!rpt.Init(_T("Reports/HMS/Tonghoptheomabenh.RPT")) )
		return ;

	UpdateData(TRUE);
	BeginWaitCursor();

	szSQL = GetQueryString();
	_fmsg(_T("%s"), szSQL);
	m_rs->ExecSQL(szSQL);

	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
	CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);

	int i,nIndex = 1 ;
	long docno=0, nTotalPatient=0;
	long c[30];
	for (i=0;i<=30;i++)
	{
		c[i]=0;
	}

	/*m_rs->GetValue(_T("docno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("FromNum"), tmpStr);*/
	CReportSection* rptDetail = rpt.GetDetail(); 
	while(!m_rs->IsEOF())
	{ 			
		nTotalPatient++;
		rptDetail = rpt.AddDetail();
		
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		m_rs->GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		m_rs->GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		m_rs->GetValue(_T("AgeMale"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		if (!tmpStr.IsEmpty())
			c[4]++;
		m_rs->GetValue(_T("ageFemale"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		if (!tmpStr.IsEmpty())
			c[5]++;

		m_rs->GetValue(_T("ethnic"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		m_rs->GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		m_rs->GetValue(_T("icd"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		m_rs->GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		m_rs->GetValue(_T("treatqty"),tmpStr);	
		if (!tmpStr.IsEmpty())
			c[5]++;
		rptDetail->SetValue(_T("10"), tmpStr);
		m_rs->MoveNext();
	}
	
	for(i=3;i<=22;i++)
	{	CString szFied;
		szFied.Format(_T("s%d"),i);
		tmpStr.Format(_T("%ld"),c[i]);				
		rpt.GetReportFooter()->SetValue(szFied, tmpStr);
	}

	tmpStr.Format(_T("%d"), docno);
	rpt.GetReportHeader()->SetValue(_T("ToNum"), tmpStr);
	tmpStr.Format(_T("%d"), nTotalPatient);
	rpt.GetReportHeader()->SetValue(_T("TotalPatient"), tmpStr);	
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CTMICD10Report::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szWhere, szWhereSub;
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	szWhere.Empty();
	szWhereSub.Empty();

	UpdateData(TRUE);
	BeginWaitCursor();

	szSQL = GetQueryString();
	_fmsg(_T("%s"), szSQL);
	m_rs->ExecSQL(szSQL);
		
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	xls.SetCellMergedColumns(0,3,12);	
	xls.SetCellText(0, 4, _T("BAO CAO THEO MA ICD"),true,16,0);
	xls.SetCellMergedColumns(0,4,12);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,12,0);
	
	int nRow = 7, age=0;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Male"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Female"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Ethnic"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Address"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("ICD"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Diagnostic"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("TreatQty"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);
	int nIndex = 1, SongayDT=0;
	int i=0,nTotal[10];
	for (i=0;i<10;i++)
	{
		nTotal[i]=0;
	}
	while(!m_rs->IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
		m_rs->GetValue(_T("Docno"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_INTEGER);
		m_rs->GetValue(_T("PatientName"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
		
		m_rs->GetValue(_T("AgeMale"), tmpStr);
		if (!tmpStr.IsEmpty())
			nTotal[3] ++;
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);
		m_rs->GetValue(_T("AgeFemale"), tmpStr);
		if (!tmpStr.IsEmpty())
			nTotal[4] ++;
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		m_rs->GetValue(_T("Ethnic"), tmpStr);				
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);
		m_rs->GetValue(_T("Address"), tmpStr);		
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);		
		m_rs->GetValue(_T("ICD"), tmpStr);		
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);
		m_rs->GetValue(_T("diagnostic"), tmpStr);		
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT);
		m_rs->GetValue(_T("TreatQty"), tmpStr);	
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);
		m_rs->MoveNext();
	}

	nRow++;
	TranslateString(_T("Total"),tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
	for (int i =2; i < 10; i++){		
		tmpStr.Format(_T("%d"),nTotal[i] );		
		xls.SetCellText(i, nRow, tmpStr, FMT_INTEGER, true);
	}

	xls.Save(_T("Exports\\BaocaotheomabenhICD10.xls"));
	EndWaitCursor();
} 
void CTMICD10Report::OnLoadSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMICD10Report::OnAddrptICD10Report(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTMICD10Report::OnEditrptICD10Report(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMICD10Report::OnDeleterptICD10Report(){
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
 		OnCancelrptICD10Report(); 
 	}
	return 0;
}
int CTMICD10Report::OnSaverptICD10Report(){
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
 		//OnrptICD10ReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CTMICD10Report::OnCancelrptICD10Report(){
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
int CTMICD10Report::OnrptICD10ReportListLoadData(){
	return 0;
}

CString CTMICD10Report::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhereSub;

	if (ToInt(m_wndOccupation.GetCurrent(0)) > 0)
		szWhereSub.AppendFormat(_T(" AND hp_occupation =%d"),ToInt(m_wndOccupation.GetCurrent(0)));
	if (ToInt(m_wndEthnic.GetCurrent(0)) > 0)
		szWhereSub.AppendFormat(_T(" AND hp_ethnic=%d "),ToInt(m_wndEthnic.GetCurrent(0)));
	if (ToInt(m_wndProvince.GetCurrent(0)) > 0 )
		szWhereSub.AppendFormat(_T(" and hp_provid = %d "), ToInt(m_wndProvince.GetCurrent(0)));
	if (ToInt(m_wndDistrict.GetCurrent(0)) > 0 )
		szWhereSub.AppendFormat(_T(" and hp_distid = %d "), ToInt(m_wndDistrict.GetCurrent(0)));
	if (ToInt(m_wndVill.GetCurrent(0)) > 0 )
		szWhereSub.AppendFormat(_T(" and hp_villid = %d "), ToInt(m_wndVill.GetCurrent(0)));

	if (m_nAge >=0 && m_nAge1 >0)
		szWhere.AppendFormat(_T(" and age between %d and %d "), m_nAge, m_nAge1); 

	if (ToInt(m_wndChapter.GetCurrent(0)) >0)
		szWhere.AppendFormat(_T(" and hi_Chapterid =%d "), ToInt(m_wndChapter.GetCurrent(0)));	

	if (ToInt(m_wndGroups.GetCurrent(0)) >0)
		szWhere.AppendFormat(_T(" and hi_groupid =%d "), ToInt(m_wndGroups.GetCurrent(0)));

	if (m_wndICD.GetCurrent(1).GetLength() >0)
		szWhere.AppendFormat(_T(" and icd ='%s' "), m_wndICD.GetCurrent(0));

	if (!m_szDeptKey.IsEmpty())
		szWhereSub.AppendFormat(_T(" and hcr_admitdept ='%s' "), m_szDeptKey);

	szSQL.Format(_T(" SELECT Docno, patientname, hp_ethnic, ethnic, agemale, agefemale, address, ") \
		_T("	status, icd,hi_name as diagnostic, admitdate, treatqty, age ") \
		_T(" FROM ( ") \
		_T("	SELECT 	hd_docno as docno,") \
		_T("		trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T("		hp_ethnic,")\
		_T("		(SELECT ss_desc as name FROM sys_sel WHERE ss_id='sys_ethnic' and cast(ss_code as integer) = hp_ethnic) as ethnic,") \
		_T("		case when hp_sex ='M' then hms_getage(hd_admitdate, hp_birthdate) else '' end as ageMale,") \
		_T("		case when hp_sex ='F' then hms_getage(hd_admitdate, hp_birthdate) else '' end as ageFeMale,") \
		_T("		hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
		_T("		case when length(hd_indept)>0 then hcr_status else hd_status end as status,") \
		_T("		case when length(hcr_mainicd) > 0 then hcr_mainicd else hd_icd end as icd ,") \
		_T("		case when length(hd_indept) > 0 then hcr_admitdate else hd_admitdate end as admitdate, ") \
		_T("		date_part('year', hp_birthdate) as age, ") \
		_T("		(select sum(hb_treatqty) from hms_bed where hb_docno=hcr_docno) as treatqty ") \
		_T("	FROM hms_patient ") \
		_T("	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T("	LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T("	WHERE 1=1 %s") \
		_T(" ) ") \
		_T(" LEFT JOIN hms_icd ON(hi_icd=icd) ")
		_T(" WHERE status = 'T' AND admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T(" ORDER BY docno "),szWhereSub, m_szFromDate, m_szToDate, szWhere);

	_fmsg(_T("%s"), szSQL);
	return szSQL;
}