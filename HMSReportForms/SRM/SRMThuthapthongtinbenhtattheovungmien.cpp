#include "stdafx.h"
#include "SRMThuthapthongtinbenhtattheovungmien.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnAge1ChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnAge1Change();
} */
/*static void _OnAge1SetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnAge1Setfocus();} */ 
/*static void _OnAge1KillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnAge1Killfocus();
} */
static int _OnAge1CheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnAge1CheckValue();
}
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnSexAddNew();
}*/
static void _OnSeasonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnSeasonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSeasonSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnSeasonSelendok();
}
/*static void _OnSeasonSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnSeasonKillfocus();
}*/
/*static void _OnSeasonKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnSeasonKillfocus();
}*/
static long _OnSeasonLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnSeasonLoadData();
}
/*static void _OnSeasonAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnSeasonAddNew();
}*/
static void _OnRegionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnRegionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRegionSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnRegionSelendok();
}
/*static void _OnRegionSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnRegionKillfocus();
}*/
/*static void _OnRegionKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnRegionKillfocus();
}*/
static long _OnRegionLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnRegionLoadData();
}
/*static void _OnRegionAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnRegionAddNew();
}*/
static void _OnOccupationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnOccupationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOccupationSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnOccupationSelendok();
}
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnOccupationKillfocus();
}*/
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnOccupationKillfocus();
}*/
static long _OnOccupationLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnOccupationLoadData();
}
/*static void _OnOccupationAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnOccupationAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnEthnicAddNew();
}*/
static void _OnProvinceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnProvinceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvinceSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnProvinceSelendok();
}
/*static void _OnProvinceSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnProvinceKillfocus();
}*/
/*static void _OnProvinceKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnProvinceKillfocus();
}*/
static long _OnProvinceLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnProvinceLoadData();
}
/*static void _OnProvinceAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnProvinceAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnVillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnVillSelendok();
}
/*static void _OnVillSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnVillKillfocus();
}*/
/*static void _OnVillKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnVillKillfocus();
}*/
static long _OnVillLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnVillLoadData();
}
/*static void _OnVillAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnVillAddNew();
}*/
static void _OnChapterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnChapterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChapterSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnChapterSelendok();
}
/*static void _OnChapterSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnChapterKillfocus();
}*/
/*static void _OnChapterKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnChapterKillfocus();
}*/
static long _OnChapterLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnChapterLoadData();
}
/*static void _OnChapterAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnChapterAddNew();
}*/

static void _OnGroupsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnGroupsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupsSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnGroupsSelendok();
}
/*static void _OnGroupsSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnGroupsKillfocus();
}*/
/*static void _OnGroupsKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnGroupsKillfocus();
}*/
static long _OnGroupsLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnGroupsLoadData();
}
/*static void _OnGroupsAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnGroupsAddNew();
}*/
static void _OnICDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnICDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnICDSelendok();
}
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnICDKillfocus();
}*/
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnICDKillfocus();
}*/
static long _OnICDLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnICDLoadData();
}
/*static void _OnICDAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnICDAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnObjectAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinbenhtattheovungmien* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinbenhtattheovungmien *pVw = (CSRMThuthapthongtinbenhtattheovungmien *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinbenhtattheovungmien *pVw = (CSRMThuthapthongtinbenhtattheovungmien *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinbenhtattheovungmien *pVw = (CSRMThuthapthongtinbenhtattheovungmien *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinbenhtattheovungmien*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSRMThuthapthongtinbenhtattheovungmien*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMThuthapthongtinbenhtattheovungmien*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinbenhtattheovungmien*)pWnd)->OnListDeleteItem();
} 
static int _OnAddSRMThuthapthongtinbenhtattheovungmienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinbenhtattheovungmien*)pWnd)->OnAddSRMThuthapthongtinbenhtattheovungmien();
} 
static int _OnEditSRMThuthapthongtinbenhtattheovungmienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinbenhtattheovungmien*)pWnd)->OnEditSRMThuthapthongtinbenhtattheovungmien();
} 
static int _OnDeleteSRMThuthapthongtinbenhtattheovungmienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinbenhtattheovungmien*)pWnd)->OnDeleteSRMThuthapthongtinbenhtattheovungmien();
} 
static int _OnSaveSRMThuthapthongtinbenhtattheovungmienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinbenhtattheovungmien*)pWnd)->OnSaveSRMThuthapthongtinbenhtattheovungmien();
} 
static int _OnCancelSRMThuthapthongtinbenhtattheovungmienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinbenhtattheovungmien*)pWnd)->OnCancelSRMThuthapthongtinbenhtattheovungmien();
} 
CSRMThuthapthongtinbenhtattheovungmien::CSRMThuthapthongtinbenhtattheovungmien(CWnd *pParent)
{
	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSRMThuthapthongtinbenhtattheovungmien::~CSRMThuthapthongtinbenhtattheovungmien()
{
}
void CSRMThuthapthongtinbenhtattheovungmien::OnCreateComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_wndReportCriteria.Create(this, _T("Report Condition"), 5, 5, 565, 305);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
	m_wndYear.Create(this,105, 30, 250, 55); 
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 255, 30, 335, 55);
	m_wndPeriodReport.Create(this,340, 30, 559, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 250, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 255, 60, 335, 85);
	m_wndToDate.Create(this,340, 60, 559, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 100, 115);
	m_wndAge.Create(this,105, 90, 175, 115); 
	m_wndAge1.Create(this,180, 90, 250, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 255, 90, 335, 115);
	m_wndSex.Create(this,340, 90, 559, 115); 
	m_wndSeasonLabel.Create(this, _T("Season"), 10, 120, 100, 145);
	m_wndSeason.Create(this,105, 120, 250, 145); 
	m_wndRegionLabel.Create(this, _T("Region"), 255, 120, 335, 145);
	m_wndRegion.Create(this,340, 120, 559, 145); 
	m_wndProvinceLabel.Create(this, _T("Province"), 10, 150, 100, 175);
	m_wndProvince.Create(this,105, 150, 250, 175); 
	m_wndDistrictLabel.Create(this, _T("District"), 255, 150, 335, 175);
	m_wndDistrict.Create(this,340, 150, 559, 175); 
	m_wndVillLabel.Create(this, _T("Vill"), 10, 180, 100, 205);
	m_wndVill.Create(this,105, 180, 250, 205); 
	m_wndDeptLabel.Create(this, _T("Dept"), 255, 180, 335, 205);
	m_wndDept.Create(this,340, 180, 559, 205); 
	m_wndChapterLabel.Create(this, _T("Chapter"), 10, 210, 100, 235);
	m_wndChapter.Create(this,105, 210, 250, 235); 
	m_wndGroupsLabel.Create(this, _T("Group"), 255, 210, 335, 235);
	m_wndGroups.Create(this,340, 210, 559, 235); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 240, 100, 265);
	m_wndObject.Create(this,105, 240, 250, 265); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 255, 240, 335, 265);
	m_wndEthnic.Create(this,340, 240, 559, 265); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 9, 270, 99, 295);
	m_wndOccupation.Create(this,104, 270, 250, 295); 
	m_wndICDLabel.Create(this, _T("ICD10"), 255, 270, 335, 295);
	m_wndICD.Create(this,340, 270, 559, 295); 
	m_wndPrint.Create(this, _T("&Print"), 360, 310, 455, 335);
	m_wndExport.Create(this, _T("&Export"), 460, 310, 555, 335);
}
void CSRMThuthapthongtinbenhtattheovungmien::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(35);
	//m_wndYear.SetCheckValue(true);
	//m_wndPeriodReport.SetCheckValue(true);
	m_wndPeriodReport.LimitText(35);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndAge.SetLimitText(16);
	//m_wndAge.SetCheckValue(true);
	m_wndAge1.SetLimitText(16);
	//m_wndAge1.SetCheckValue(true);
	//m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(35);
	//m_wndSeason.SetCheckValue(true);
	m_wndSeason.LimitText(35);
	//m_wndRegion.SetCheckValue(true);
	m_wndRegion.LimitText(35);
	//m_wndOccupation.SetCheckValue(true);
	m_wndOccupation.LimitText(35);
	//m_wndProvince.SetCheckValue(true);
	m_wndProvince.LimitText(35);
	//m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(35);
	//m_wndVill.SetCheckValue(true);
	m_wndVill.LimitText(35);
	//m_wndGroups.SetCheckValue(true);
	m_wndGroups.LimitText(35);
	//m_wndICD.SetCheckValue(true);
	m_wndICD.LimitText(35);
	//m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(81);
	m_wndObject.LimitText(35);

	//m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(81);

	m_wndOccupation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOccupation.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEthnic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndProvince.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProvince.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDistrict.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndVill.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVill.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndChapter.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndChapter.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndGroups.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroups.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndICD.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndICD.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 70);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndSeason.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSeason.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndRegion.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRegion.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT | CFMT_CENTER, 50);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_DATE, 80);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Male"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(4, _T("Female"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(5, _T("Ethnic"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(6, _T("Address"), CFMT_TEXT, 260);
	m_wndList.InsertColumn(7, _T("Insurance Card"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(8, _T("ICD10"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Desc"), CFMT_TEXT, 220);
	m_wndList.InsertColumn(10, _T("Treatment Number"), CFMT_TEXT | CFMT_CENTER, 60);
	m_wndList.InsertColumn(11, _T("Department"), CFMT_TEXT, 150);
	
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	CString tmpStr;
	m_wndList.GetHeaderControl()->SetItemHeight(2);	
	TranslateString(_T("Age"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 3, 1,4);	
	
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	
}
void CSRMThuthapthongtinbenhtattheovungmien::OnSetWindowEvents()
{
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndPeriodReport.SetEvent(WE_SELENDOK, _OnPeriodReportSelendokFnc);
	//m_wndPeriodReport.SetEvent(WE_SETFOCUS, _OnPeriodReportSetfocusFnc);
	//m_wndPeriodReport.SetEvent(WE_KILLFOCUS, _OnPeriodReportKillfocusFnc);
	m_wndPeriodReport.SetEvent(WE_SELCHANGE, _OnPeriodReportSelectChangeFnc);
	m_wndPeriodReport.SetEvent(WE_LOADDATA, _OnPeriodReportLoadDataFnc);
	//m_wndPeriodReport.SetEvent(WE_ADDNEW, _OnPeriodReportAddNewFnc);
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
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
	m_wndSeason.SetEvent(WE_SELENDOK, _OnSeasonSelendokFnc);
	//m_wndSeason.SetEvent(WE_SETFOCUS, _OnSeasonSetfocusFnc);
	//m_wndSeason.SetEvent(WE_KILLFOCUS, _OnSeasonKillfocusFnc);
	m_wndSeason.SetEvent(WE_SELCHANGE, _OnSeasonSelectChangeFnc);
	m_wndSeason.SetEvent(WE_LOADDATA, _OnSeasonLoadDataFnc);
	//m_wndSeason.SetEvent(WE_ADDNEW, _OnSeasonAddNewFnc);
	m_wndRegion.SetEvent(WE_SELENDOK, _OnRegionSelendokFnc);
	//m_wndRegion.SetEvent(WE_SETFOCUS, _OnRegionSetfocusFnc);
	//m_wndRegion.SetEvent(WE_KILLFOCUS, _OnRegionKillfocusFnc);
	m_wndRegion.SetEvent(WE_SELCHANGE, _OnRegionSelectChangeFnc);
	m_wndRegion.SetEvent(WE_LOADDATA, _OnRegionLoadDataFnc);
	//m_wndRegion.SetEvent(WE_ADDNEW, _OnRegionAddNewFnc);
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
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);

	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);

	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddSRMThuthapthongtinbenhtattheovungmienFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSRMThuthapthongtinbenhtattheovungmienFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSRMThuthapthongtinbenhtattheovungmienFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSRMThuthapthongtinbenhtattheovungmienFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSRMThuthapthongtinbenhtattheovungmienFnc, 0, 'T', VK_CONTROL);*/

}
void CSRMThuthapthongtinbenhtattheovungmien::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_nAge);
	DDX_Text(pDX, m_wndAge1.GetDlgCtrlID(), m_nAge1);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndSeason.GetDlgCtrlID(), m_szSeasonKey);
	DDX_TextEx(pDX, m_wndRegion.GetDlgCtrlID(), m_szRegionKey);
	DDX_TextEx(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupationKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
	DDX_TextEx(pDX, m_wndProvince.GetDlgCtrlID(), m_szProvinceKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVill.GetDlgCtrlID(), m_szVillKey);
	DDX_TextEx(pDX, m_wndGroups.GetDlgCtrlID(), m_szGroupsKey);
	DDX_TextEx(pDX, m_wndICD.GetDlgCtrlID(), m_szICDKey);
	DDX_TextEx(pDX, m_wndChapter.GetDlgCtrlID(), m_szChapterKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
}
void CSRMThuthapthongtinbenhtattheovungmien::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CSRMThuthapthongtinbenhtattheovungmien::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
void CSRMThuthapthongtinbenhtattheovungmien::SetDefaultValues()
{
//	m_szFromDate.Empty();
//	m_szToDate.Empty();
	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_nAge=0;
	m_nAge1=0;
	m_szSexKey.Empty();
	m_szSeasonKey.Empty();
	m_szRegionKey.Empty();
	m_szOccupationKey.Empty();
	m_szEthnicKey.Empty();
	m_szProvinceKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillKey.Empty();
	m_szGroupsKey.Empty();
	m_szICDKey.Empty();
	m_szChapterKey.Empty();
	m_szObjectKey.Empty();
	m_szDeptKey.Empty();
}
int CSRMThuthapthongtinbenhtattheovungmien::SetMode(int nMode)
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
/*void CSRMThuthapthongtinbenhtattheovungmien::OnYearChange(){
	
} */
/*void CSRMThuthapthongtinbenhtattheovungmien::OnYearSetfocus(){
	
} */
/*void CSRMThuthapthongtinbenhtattheovungmien::OnYearKillfocus(){
	
} */
int CSRMThuthapthongtinbenhtattheovungmien::OnYearCheckValue(){
	return 0;
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnPeriodReportSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CDate dte;
	CString tmpStr;
	int nMonth = ToInt(m_szPeriodReportKey);
	int nYear = m_nYear;
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/1"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/1/1"), nYear);
		tmpStr.Format(_T("%.4d/3/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/3/%.2d 23:59"), nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/4/1"), nYear);
		tmpStr.Format(_T("%.4d/6/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/6/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/7/1"), nYear);
		tmpStr.Format(_T("%.4d/9/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/9/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/1"), nYear);
		tmpStr.Format(_T("%.4d/10/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/1/1"), nYear);
		tmpStr.Format(_T("%.4d/12/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false); 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnPeriodReportSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnPeriodReportKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnPeriodReportLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndPeriodReport.IsSearchKey() && ToInt(m_szPeriodReportKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szPeriodReportKey));
	}
	m_wndPeriodReport.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriodReport.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnPeriodReportAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CSRMThuthapthongtinbenhtattheovungmien::OnFromDateChange(){
	
} */
/*void CSRMThuthapthongtinbenhtattheovungmien::OnFromDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinbenhtattheovungmien::OnFromDateKillfocus(){
	
} */
int CSRMThuthapthongtinbenhtattheovungmien::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMThuthapthongtinbenhtattheovungmien::OnToDateChange(){
	
} */
/*void CSRMThuthapthongtinbenhtattheovungmien::OnToDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinbenhtattheovungmien::OnToDateKillfocus(){
	
} */
int CSRMThuthapthongtinbenhtattheovungmien::OnToDateCheckValue(){
	return 0;
} 
/*void CSRMThuthapthongtinbenhtattheovungmien::OnAgeChange(){
	
} */
/*void CSRMThuthapthongtinbenhtattheovungmien::OnAgeSetfocus(){
	
} */
/*void CSRMThuthapthongtinbenhtattheovungmien::OnAgeKillfocus(){
	
} */
int CSRMThuthapthongtinbenhtattheovungmien::OnAgeCheckValue(){
	return 0;
} 
/*void CSRMThuthapthongtinbenhtattheovungmien::OnAge1Change(){
	
} */
/*void CSRMThuthapthongtinbenhtattheovungmien::OnAge1Setfocus(){
	
} */
/*void CSRMThuthapthongtinbenhtattheovungmien::OnAge1Killfocus(){
	
} */
int CSRMThuthapthongtinbenhtattheovungmien::OnAge1CheckValue(){
	return 0;
}
void CSRMThuthapthongtinbenhtattheovungmien::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnSexSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnSexSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnSexKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnSexLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code = '%s' "), m_szSexKey);
};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel WHERE ss_id = 'hrm_sex' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnSexAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnSeasonSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnSeasonSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CDate dte;
	CString tmpStr;
	int nMonth = ToInt(m_szSeasonKey);
	int nYear = m_nYear;
	if(nMonth == 1){
		m_szFromDate.Format(_T("%.4d/1/1"), nYear);
		tmpStr.Format(_T("%.4d/3/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/3/%.2d 23:59"), nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 2){
		m_szFromDate.Format(_T("%.4d/4/1"), nYear);
		tmpStr.Format(_T("%.4d/6/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/6/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 3){
		m_szFromDate.Format(_T("%.4d/7/1"), nYear);
		tmpStr.Format(_T("%.4d/9/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/9/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 4){
		m_szFromDate.Format(_T("%.4d/10/1"), nYear);
		tmpStr.Format(_T("%.4d/10/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	UpdateData(false); 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnSeasonSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnSeasonKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnSeasonLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSeason.IsSearchKey() && !m_szSeasonKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code = '%s' "), m_szSeasonKey);
};
	m_wndSeason.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_season' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSeason.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnSeasonAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnRegionSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnRegionSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnRegionSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnRegionKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnRegionLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRegion.IsSearchKey() && !m_szRegionKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code = '%s' "), m_szRegionKey);
};
	m_wndRegion.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_region' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRegion.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnRegionAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnOccupationSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnOccupationSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnOccupationSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnOccupationKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnOccupationLoadData(){
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
/*void CSRMThuthapthongtinbenhtattheovungmien::OnOccupationAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnEthnicSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnEthnicSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnEthnicKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnEthnicLoadData()
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
/*void CSRMThuthapthongtinbenhtattheovungmien::OnEthnicAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnProvinceSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnProvinceSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnProvinceSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnProvinceKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnProvinceLoadData(){
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
/*void CSRMThuthapthongtinbenhtattheovungmien::OnProvinceAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnDistrictSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnDistrictSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnDistrictKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnDistrictLoadData(){
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
/*void CSRMThuthapthongtinbenhtattheovungmien::OnDistrictAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnVillSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnVillSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnVillSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnVillKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnVillLoadData(){
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
/*void CSRMThuthapthongtinbenhtattheovungmien::OnVillAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnChapterSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnChapterSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnChapterSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnChapterKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnChapterLoadData(){
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
/*void CSRMThuthapthongtinbenhtattheovungmien::OnChapterAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CSRMThuthapthongtinbenhtattheovungmien::OnGroupsSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnGroupsSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnGroupsSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnGroupsKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnGroupsLoadData(){
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
/*void CSRMThuthapthongtinbenhtattheovungmien::OnGroupsAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnICDSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnICDSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnICDSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnICDKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnICDLoadData(){
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
/*void CSRMThuthapthongtinbenhtattheovungmien::OnICDAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnObjectSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnObjectSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnObjectKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnObjectLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ho_type='%s' "), m_szObjectKey);
	}
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_type AS id, ho_desc AS name ") \
		         _T("FROM hms_object WHERE ho_active='Y' %s ORDER BY ho_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnDeptSelendok(){
	 
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnDeptSetfocus(){
	
}*/
/*void CSRMThuthapthongtinbenhtattheovungmien::OnDeptKillfocus(){
	
}*/
long CSRMThuthapthongtinbenhtattheovungmien::OnDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		//szWhere.Format(_T(" AND sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept ") \
			     _T("WHERE sd_type IN('KB','DT') %s ORDER BY sd_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSRMThuthapthongtinbenhtattheovungmien::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinbenhtattheovungmien::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CReport rpt; 
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	
	if(!rpt.Init(_T("Reports\\HMS\\THUTHAPTHONGTINBENHTAT.RPT")) )
		return ;

	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr,
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));

	int i, nIndex = 1 ;
	long docno = 0, nTotalPatient=0;
	long c[30];
	for (i = 0; i <= 30; i++)
	{
		c[i]=0;
	}

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);

	/*rs.GetValue(_T("docno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("FromNum"), tmpStr);*/
	CReportSection* rptDetail = rpt.GetDetail(); 
	while (!rs.IsEOF())
	{ 			
		nTotalPatient++;
		rptDetail = rpt.AddDetail();
		
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("AgeMale"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		if (!tmpStr.IsEmpty())
			c[4]++;

		rs.GetValue(_T("ageFemale"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		if (!tmpStr.IsEmpty())
			c[5]++;

		rs.GetValue(_T("ethnic"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("icd"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("treatqty"),tmpStr);	
		if (!tmpStr.IsEmpty())
			c[5]++;
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.MoveNext();
	}
	
	for (i = 3; i <= 22; i++)
	{	CString szFied;
		szFied.Format(_T("s%d"), i);
		tmpStr.Format(_T("%ld"), c[i]);				
		rpt.GetReportFooter()->SetValue(szFied, tmpStr);
	}
	rs.MoveFirst();
	tmpStr.Format(_T("%d"), docno);
	rpt.GetReportHeader()->SetValue(_T("ToNum"), tmpStr);
	tmpStr.Format(_T("%d"), nTotalPatient);
	rpt.GetReportHeader()->SetValue(_T("TotalPatient"), tmpStr);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		          szSysDate.Right(2), szSysDate.Mid(5,2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnLoadSelect()
{
	UpdateData(true);
	OnListLoadData();
	//UpdateData(false);
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL;

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 22);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 5);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 30);
	xls.SetColumnWidth(7, 20);
	xls.SetColumnWidth(8, 6);
	xls.SetColumnWidth(9, 35);
	xls.SetColumnWidth(10, 12);
	xls.SetColumnWidth(11, 18);

	
	xls.SetCellMergedColumns(0, 4, 12);
	xls.SetCellMergedColumns(0, 5, 12);

	xls.SetCellText(0, 1, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 2, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT, true, 12, 0);
	
	xls.SetCellText(0, 4, _T("Thu th\x1EADp th\xF4ng tin \x62\x1EC7nh t\x1EADt"),  FMT_TEXT | FMT_CENTER, true, 16, 0);
	
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);
	
	int nRow = 7, age = 0;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Male"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Female"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Ethnic"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Address"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Insurance Card"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("ICD"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Diagnostic"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Treat Days"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Department"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);

	int nIndex = 1, SongayDT = 0;
	int i = 0,nTotal[10];
	for (i = 0; i < 10; i++)
	{
		nTotal[i] = 0;
	}
	while (!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("Docno"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("PatientName"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		
		rs.GetValue(_T("AgeMale"), tmpStr);
		if (!tmpStr.IsEmpty())
			nTotal[3] ++;
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("AgeFemale"), tmpStr);
		if (!tmpStr.IsEmpty())
			nTotal[4] ++;
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("Ethnic"), tmpStr);				
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("Address"), tmpStr);		
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("cardno"), tmpStr);		
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("ICD"), tmpStr);		
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("diagnostic"), tmpStr);		
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("TreatQty"), tmpStr);	
		xls.SetCellText(10, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("enddept"), tmpStr);	
		xls.SetCellText(11, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		rs.MoveNext();
	}
	rs.MoveFirst();
	nRow++;
	TranslateString(_T("Total"),tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
	for (int i = 2; i < 10; i++)
	{		
		tmpStr.Format(_T("%d"), nTotal[i]);		
		xls.SetCellText(i, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING, true);
	}

	xls.Save(_T("Exports\\SRMThuthapthongtinbenhtat.xls"));
	EndWaitCursor();
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnListDblClick(){
	
} 
void CSRMThuthapthongtinbenhtattheovungmien::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CSRMThuthapthongtinbenhtattheovungmien::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSRMThuthapthongtinbenhtattheovungmien::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhereSub, szWhere;
	CString szObject, szDepts;

	szWhere.Empty();
	szWhereSub.Empty();
	szObject.Empty();
	szDepts.Empty();
	
	int nCount = 0;
	int nIndex = 1;
	
	int nSum[9], n, nItem;
	for (int i =0; i <= 8; i++)
		nSum[i] = 0;

	for (int i = 0; i < m_wndObject.GetCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			if (!szObject.IsEmpty())
				szObject += _T(",");
			szObject.AppendFormat(_T("'%s'"), m_wndObject.GetCheck(i, 0));
		}
	}

	for (int i = 0; i < m_wndDept.GetCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDept.GetCheck(i, 0));
		}
	}

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
	if (!szObject.IsEmpty())
		szWhereSub.AppendFormat(_T(" and ho_type IN(%s) "), szObject);
	
	if (m_nAge >=0 && m_nAge1 >0)
		szWhere.AppendFormat(_T(" and age between %d and %d "), m_nAge, m_nAge1); 

	if (ToInt(m_wndChapter.GetCurrent(0)) >0)
		szWhere.AppendFormat(_T(" and hi_Chapterid =%d "), ToInt(m_wndChapter.GetCurrent(0)));	
	
	if (ToInt(m_wndGroups.GetCurrent(0)) >0)
		szWhere.AppendFormat(_T(" and hi_groupid =%d "), ToInt(m_wndGroups.GetCurrent(0)));

	if (m_wndICD.GetCurrent(1).GetLength() >0)
		szWhere.AppendFormat(_T(" and icd ='%s' "), m_wndICD.GetCurrent(0));
	
	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" and enddept in(%s) "), szDepts);

	
	szSQL.Format(_T(" SELECT Docno, patientname, hp_ethnic, ethnic, agemale, agefemale, cardno, address, ") \
		_T("	 status, icd, hi_name as diagnostic, admitdate, treatqty, age, ") \
		_T("	(select sd_name FROM sys_dept where sd_id=enddept limit 1) as enddept")\
		_T(" FROM ( ") \
		_T("	SELECT 	hd_docno as docno,") \
		_T("		trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T("		hp_ethnic,")\
		_T("		(SELECT ss_desc as name FROM sys_sel WHERE ss_id='sys_ethnic' and cast(ss_code as integer) = hp_ethnic) as ethnic,") \
		_T("		case when hp_sex ='M' then hms_getage(date(hd_admitdate), hp_birthdate) else '' end as ageMale,") \
		_T("		case when hp_sex ='F' then hms_getage(date(hd_admitdate), hp_birthdate) else '' end as ageFeMale,") \
		_T("		hc_cardno as cardno,") \
		_T("		hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
		_T("		case when length(hd_indept)>0 then hcr_status else hd_status end as status,") \
		_T("		case when length(hcr_mainicd) > 0 then hcr_mainicd else hd_icd end as icd ,") \
		_T("		case when length(hd_indept) > 0 then hcr_admitdate else hd_admitdate end as admitdate, ") \
		_T("		case when length(hcr_dischargedept) > 0 then hcr_dischargedept else hd_enddept end as enddept, ") \
		_T("		date_part('year', age(date(hd_admitdate), hp_birthdate)) as age, ") \
		_T("		(select sum(hb_treatqty) from hms_bed where hb_docno=hcr_docno) as treatqty ") \
		_T("	FROM hms_patient ") \
		_T("	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T("	LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T("	LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T("	LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
		_T("	WHERE 1=1 %s") \
		_T(" ) as tblmain ") \
		_T(" LEFT JOIN hms_icd ON(hi_icd=icd) ")
		_T(" WHERE status = 'T' AND admitdate BETWEEN timestamp '%s' and timestamp '%s' %s ") \
		_T(" ORDER BY docno "),
		szWhereSub, m_szFromDate, m_szToDate, szWhere) ;

	m_wndList.BeginLoad(); 
	rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("AgeMale"), n);
		if (n>0) nSum[3] ++;
		rs.GetValue(_T("AgeFemale"), n);
		if (n>0) nSum[4] ++;
		
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("Docno")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("AgeMale")), 
			rs.GetValue(_T("AgeFemale")), 
			rs.GetValue(_T("Ethnic")),
			rs.GetValue(_T("Address")),
			rs.GetValue(_T("cardno")),
			rs.GetValue(_T("ICD")),
			rs.GetValue(_T("diagnostic")),
			rs.GetValue(_T("treatqty")),
			rs.GetValue(_T("enddept")),
			NULL);
		rs.MoveNext();
	}

	if(nSum[3] > 0)
	{
		CString szLabel;
		TranslateString(_T("Total"), szLabel);
		nItem = m_wndList.AddItems(
				_T(""),
				_T(""), 
				szLabel,				
				int2str((int)nSum[3]), 
				int2str((int)nSum[4]), 				
				NULL);
		m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), false);
		m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), false);
	}	
	m_wndList.EndLoad(); 
	rs.MoveFirst();
	return nCount;

}
int CSRMThuthapthongtinbenhtattheovungmien::OnAddSRMThuthapthongtinbenhtattheovungmien(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSRMThuthapthongtinbenhtattheovungmien::OnEditSRMThuthapthongtinbenhtattheovungmien(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMThuthapthongtinbenhtattheovungmien::OnDeleteSRMThuthapthongtinbenhtattheovungmien(){
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
 		OnCancelSRMThuthapthongtinbenhtattheovungmien(); 
 	}
	return 0;
}
int CSRMThuthapthongtinbenhtattheovungmien::OnSaveSRMThuthapthongtinbenhtattheovungmien(){
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
 		//OnSRMThuthapthongtinbenhtattheovungmienListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CSRMThuthapthongtinbenhtattheovungmien::OnCancelSRMThuthapthongtinbenhtattheovungmien(){
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
int CSRMThuthapthongtinbenhtattheovungmien::OnSRMThuthapthongtinbenhtattheovungmienListLoadData(){
	return 0;
}
CString CSRMThuthapthongtinbenhtattheovungmien::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhereSub, szWhere;
	CString szObject, szDepts;

	int nCount = 0;
	int nIndex = 1;

	for (int i = 0; i < m_wndObject.GetCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			if (!szObject.IsEmpty())
				szObject += _T(",");
			szObject.AppendFormat(_T("'%s'"), m_wndObject.GetCheck(i, 0));
		}
	}

	for (int i = 0; i < m_wndDept.GetCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDept.GetCheck(i, 0));
		}
	}

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
	if (!szObject.IsEmpty())
		szWhereSub.AppendFormat(_T(" and ho_type IN(%s) "), szObject);
	if (!m_szSexKey.IsEmpty())
		szWhereSub.AppendFormat(_T(" and hp_sex in('%s') "), m_szSexKey);
	if (ToInt(m_wndRegion.GetCurrent(0)) > 0)
		szWhereSub.AppendFormat(_T(" and sp_zone = %d "), ToInt(m_wndRegion.GetCurrent(0)));

	if (m_nAge >=0 && m_nAge1 >0)
		szWhere.AppendFormat(_T(" and pday between (%d * 365) and (%d * 365)"), m_nAge, m_nAge1);

	if (ToInt(m_wndChapter.GetCurrent(0)) >0)
		szWhere.AppendFormat(_T(" and hi_Chapterid =%d "), ToInt(m_wndChapter.GetCurrent(0)));	

	if (ToInt(m_wndGroups.GetCurrent(0)) >0)
		szWhere.AppendFormat(_T(" and hi_groupid =%d "), ToInt(m_wndGroups.GetCurrent(0)));

	if (m_wndICD.GetCurrent(1).GetLength() >0)
		szWhere.AppendFormat(_T(" and icd ='%s' "), m_wndICD.GetCurrent(0));

	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" and enddept in(%s) "), szDepts);

	szSQL.Format(_T(" SELECT Docno,") \
		_T("   patientname,") \
		_T("   hp_ethnic,") \
		_T("   ethnic,") \
		_T("   agemale,") \
		_T("   agefemale,") \
		_T("   cardno,") \
		_T("   address,") \
		_T("   status,") \
		_T("   icd,") \
		_T("   hi_name AS diagnostic,") \
		_T("   admitdate,") \
		_T("   treatqty,") \
		_T("   age,") \
		_T("   (SELECT sd_name FROM sys_dept WHERE sd_id=enddept") \
		_T("   ) AS enddept,") \
		_T("   pday") \
		_T(" FROM") \
		_T("   (SELECT hd_docno AS docno,") \
		_T("     trim(hp_surname") \
		_T("     ||' '") \
		_T("     ||hp_midname") \
		_T("     ||' '") \
		_T("     ||hp_firstname) AS patientname,") \
		_T("     hp_ethnic,") \
		_T("     (SELECT ss_desc AS name") \
		_T("     FROM sys_sel") \
		_T("     WHERE ss_id                  ='sys_ethnic'") \
		_T("     AND CAST(ss_code AS INTEGER) = hp_ethnic") \
		_T("     ) AS ethnic,") \
		_T("     CASE") \
		_T("       WHEN hp_sex ='M'") \
		_T("       THEN hms_getage(hd_admitdate, hp_birthdate)") \
		_T("     END AS ageMale,") \
		_T("     CASE") \
		_T("       WHEN hp_sex ='F'") \
		_T("       THEN hms_getage(hd_admitdate, hp_birthdate)") \
		_T("     END                                            AS ageFeMale,") \
		_T("     hc_cardno                                      AS cardno,") \
		_T("     hms_getaddress(hp_provid,hp_distid, hp_villid) AS address,") \
		_T("     CASE") \
		_T("       WHEN LENGTH(hd_indept)>0") \
		_T("       THEN hcr_status") \
		_T("       ELSE hd_status") \
		_T("     END AS status,") \
		_T("     CASE") \
		_T("       WHEN LENGTH(hcr_mainicd) > 0") \
		_T("       THEN hcr_mainicd") \
		_T("       ELSE hd_icd") \
		_T("     END AS icd ,") \
		_T("     CASE") \
		_T("       WHEN LENGTH(hd_indept) > 0") \
		_T("       THEN hcr_admitdate") \
		_T("       ELSE hd_admitdate") \
		_T("     END AS admitdate,") \
		_T("     CASE") \
		_T("       WHEN LENGTH(hcr_dischargedept) > 0") \
		_T("       THEN hcr_dischargedept") \
		_T("       ELSE hd_enddept") \
		_T("     END                                                      AS enddept,") \
		_T("     hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T("     (SELECT SUM(hb_treatqty) FROM hms_bed WHERE hb_docno=hcr_docno") \
		_T("     ) AS treatqty,") \
		_T("   GetDaysBetween(hd_admitdate, hp_birthdate) AS pday") \
		_T("   FROM hms_patient") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_patientno=hp_patientno)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno=hd_docno)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON(ho_id=hd_object)") \
		_T("   LEFT JOIN hms_card") \
		_T("   ON(hc_patientno=hd_patientno") \
		_T("   AND hc_idx     =hd_cardidx)") \
		_T("   LEFT JOIN sys_prov") \
		_T("   ON(sp_id = hp_provid)") \
		_T("   WHERE 1        =1 %s") \
		_T("   ) tblmain") \
		_T(" LEFT JOIN hms_icd") \
		_T(" ON(hi_icd    =icd)") \
		_T(" WHERE admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" ORDER BY docno"), szWhereSub, m_szFromDate, m_szToDate, szWhere) ;
	return szSQL;
}