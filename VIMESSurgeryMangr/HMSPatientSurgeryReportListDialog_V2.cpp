#include "HMSPatientSurgeryReportListDialog_V2.h"
#include "MainFrm.h"
#include "ReportDocument.h"

static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog_V2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog_V2* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnObjectAddNew();
}*/
static void _OnSurgeryCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog_V2* )pWnd)->OnSurgeryCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryCategorySelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeryCategorySelendok();
}
/*static void _OnSurgeryCategorySetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeryCategoryKillfocus();
}*/
/*static void _OnSurgeryCategoryKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeryCategoryKillfocus();
}*/
static long _OnSurgeryCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeryCategoryLoadData();
}
/*static void _OnSurgeryCategoryAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeryCategoryAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog_V2* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnSurgeryTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog_V2* )pWnd)->OnSurgeryTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryTypeSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeryTypeSelendok();
}
/*static void _OnSurgeryTypeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeryTypeKillfocus();
}*/
/*static void _OnSurgeryTypeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeryTypeKillfocus();
}*/
static long _OnSurgeryTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeryTypeLoadData();
}
/*static void _OnSurgeryTypeAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeryTypeAddNew();
}*/
static void _OnSurgeonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog_V2* )pWnd)->OnSurgeonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeonSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeonSelendok();
}
/*static void _OnSurgeonSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeonKillfocus();
}*/
/*static void _OnSurgeonKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeonKillfocus();
}*/
static long _OnSurgeonLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeonLoadData();
}
/*static void _OnSurgeonAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2 *)pWnd)->OnSurgeonAddNew();
}*/
static void _OnLoadReportSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryReportListDialog_V2 *pVw = (CHMSPatientSurgeryReportListDialog_V2 *)pWnd;
	pVw->OnLoadReportSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryReportListDialog_V2 *pVw = (CHMSPatientSurgeryReportListDialog_V2 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryReportListDialog_V2 *pVw = (CHMSPatientSurgeryReportListDialog_V2 *)pWnd;
	pVw->OnCloseSelect();
}
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnObjectListDeleteItem();
}
static int _OnAddHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnAddHMSPatientSurgeryReportListDialog();
} 
static int _OnEditHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnEditHMSPatientSurgeryReportListDialog();
} 
static int _OnDeleteHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnDeleteHMSPatientSurgeryReportListDialog();
} 
static int _OnSaveHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnSaveHMSPatientSurgeryReportListDialog();
} 
static int _OnCancelHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnCancelHMSPatientSurgeryReportListDialog();
}

static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnObjectListCheckAll();
} 

static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnObjectListUnCheckAll();
}

static int _OnDepartmentListCheckAllFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnDepartmentListCheckAll();
} 

static int _OnDepartmentListUnCheckAllFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnDepartmentListUnCheckAll();
}

static void _OnThuThuatSelectFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnThuThuatSelect();
}
static void _OnTYCSelectFnc(CWnd *pWnd){
	 ((CHMSPatientSurgeryReportListDialog_V2*)pWnd)->OnTYCSelect();
}

CHMSPatientSurgeryReportListDialog_V2::CHMSPatientSurgeryReportListDialog_V2(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 395;
	m_nDlgHeight = 465;
	SetDefaultValues();
}
CHMSPatientSurgeryReportListDialog_V2::~CHMSPatientSurgeryReportListDialog_V2(){
}

void CHMSPatientSurgeryReportListDialog_V2::OnCreateComponents()
{
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 509, 527);
	m_wndObjectInfo.Create(this, _T("Object"), 5, 355, 509, 527);
	m_wndDeptInfor.Create(this, _T("Khoa"), 5, 120, 509, 294);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 10, 30, 115, 55);
	m_wndReportPeriod.Create(this,121, 30, 509, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 115, 85);
	m_wndFromDate.Create(this,121, 60, 283, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 289, 60, 359, 85);
	m_wndToDate.Create(this,364, 60, 508, 85); 
	m_wndSurgeryCategoryLabel.Create(this, _T("Surgery Category"), 10, 90, 115, 115);
	m_wndSurgeryCategory.Create(this,121, 90, 509, 115); 
	m_wndDepartment.Create(this,10, 144, 509, 295); 
	m_wndSurgeryTypeLabel.Create(this, _T("Operation Type"), 11, 329, 115, 354);
	m_wndSurgeryType.Create(this,121, 329, 509, 354); 
	m_wndSurgeonLabel.Create(this, _T("Surgeon"), 10, 299, 115, 324);
	m_wndSurgeon.Create(this,121, 299, 509, 324); 
	m_wndLoadReport.Create(this, _T("&Load Report"), 227, 535, 317, 560);
	m_wndExport.Create(this, _T("&Export XLS"), 322, 535, 412, 560);
	m_wndClose.Create(this, _T("&Close"), 417, 535, 507, 560);
	m_wndObjectList.Create(this,10, 375, 509, 527); 
	m_wndThuThuat.Create(this, _T("Giảm đau"), 6, 535, 95, 560);
	m_wndTYC.Create(this, _T("DV yêu cầu"), 101, 535, 222, 560);
}
void CHMSPatientSurgeryReportListDialog_V2::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	//m_wndSurgeryCategory.SetCheckValue(true);
	m_wndSurgeryCategory.LimitText(128);

	//m_wndDepartment.SetCheckValue(true);
	

	//m_wndSurgeryType.SetCheckValue(true);
	m_wndSurgeryType.LimitText(128);

	//m_wndSurgeon.SetCheckValue(true);
	m_wndSurgeon.LimitText(65);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndReportPeriod.Format(2, 1, 18);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	

	m_wndSurgeryCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSurgeryCategory.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 550);
	m_wndDepartment.SetCheckBox(TRUE);


	m_wndSurgeryType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSurgeryType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndSurgeon.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndSurgeon.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);



	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 550);
	m_wndObjectList.SetCheckBox(TRUE);
	m_wndObjectList.ModifyStyle(0, LVS_NOSORTHEADER);
}
void CHMSPatientSurgeryReportListDialog_V2::OnSetWindowEvents()
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
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndSurgeryCategory.SetEvent(WE_SELENDOK, _OnSurgeryCategorySelendokFnc);
	//m_wndSurgeryCategory.SetEvent(WE_SETFOCUS, _OnSurgeryCategorySetfocusFnc);
	//m_wndSurgeryCategory.SetEvent(WE_KILLFOCUS, _OnSurgeryCategoryKillfocusFnc);
	m_wndSurgeryCategory.SetEvent(WE_SELCHANGE, _OnSurgeryCategorySelectChangeFnc);
	m_wndSurgeryCategory.SetEvent(WE_LOADDATA, _OnSurgeryCategoryLoadDataFnc);
	//m_wndSurgeryCategory.SetEvent(WE_ADDNEW, _OnSurgeryCategoryAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndSurgeryType.SetEvent(WE_SELENDOK, _OnSurgeryTypeSelendokFnc);
	//m_wndSurgeryType.SetEvent(WE_SETFOCUS, _OnSurgeryTypeSetfocusFnc);
	//m_wndSurgeryType.SetEvent(WE_KILLFOCUS, _OnSurgeryTypeKillfocusFnc);
	m_wndSurgeryType.SetEvent(WE_SELCHANGE, _OnSurgeryTypeSelectChangeFnc);
	m_wndSurgeryType.SetEvent(WE_LOADDATA, _OnSurgeryTypeLoadDataFnc);
	//m_wndSurgeryType.SetEvent(WE_ADDNEW, _OnSurgeryTypeAddNewFnc);
	m_wndSurgeon.SetEvent(WE_SELENDOK, _OnSurgeonSelendokFnc);
	//m_wndSurgeon.SetEvent(WE_SETFOCUS, _OnSurgeonSetfocusFnc);
	//m_wndSurgeon.SetEvent(WE_KILLFOCUS, _OnSurgeonKillfocusFnc);
	m_wndSurgeon.SetEvent(WE_SELCHANGE, _OnSurgeonSelectChangeFnc);
	m_wndSurgeon.SetEvent(WE_LOADDATA, _OnSurgeonLoadDataFnc);
	//m_wndSurgeon.SetEvent(WE_ADDNEW, _OnSurgeonAddNewFnc);
	m_wndLoadReport.SetEvent(WE_CLICK, _OnLoadReportSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);

	m_wndObjectList.AddEvent(1, _T("Check All"), _OnObjectListCheckAllFnc);
	m_wndObjectList.AddEvent(2, _T("UnCheck All"), _OnObjectListUnCheckAllFnc);

	m_wndDepartment.AddEvent(1, _T("Check All"), _OnDepartmentListCheckAllFnc);
	m_wndDepartment.AddEvent(2, _T("UnCheck All"), _OnDepartmentListUnCheckAllFnc);

	m_wndThuThuat.SetEvent(WE_CLICK, _OnThuThuatSelectFnc);
	m_wndTYC.SetEvent(WE_CLICK, _OnTYCSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	m_nYear = str2int(m_szFromDate.Left(4));

	SetMode(VM_EDIT);
	OnDepartmentLoadData();
	OnObjectListLoadData();
	OnObjectListCheckAll();
}
void CHMSPatientSurgeryReportListDialog_V2::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	//DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndSurgeryCategory.GetDlgCtrlID(), m_szSurgeryCategoryKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndSurgeryType.GetDlgCtrlID(), m_szSurgeryTypeKey);
	DDX_TextEx(pDX, m_wndSurgeon.GetDlgCtrlID(), m_szSurgeonKey);
	DDX_Check(pDX, m_wndThuThuat.GetDlgCtrlID(), m_bThuThuat);
	DDX_Check(pDX, m_wndTYC.GetDlgCtrlID(), m_bTYC);

}
void CHMSPatientSurgeryReportListDialog_V2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientSurgeryReportListDialog_V2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientSurgeryReportListDialog_V2::SetDefaultValues(){

	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szSurgeryCategoryKey.Empty();
	m_szDepartmentKey.Empty();
	m_szSurgeryTypeKey.Empty();
	m_szSurgeonKey.Empty();
	m_bThuThuat=FALSE;

}
int CHMSPatientSurgeryReportListDialog_V2::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_wndFromDate.SetFocus();
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
void CHMSPatientSurgeryReportListDialog_V2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog_V2::OnReportPeriodSelendok()
{
	CString tmpStr;
	CDate dte;
	UpdateData(true);

	int nMonth = ToInt(m_szReportPeriodKey);
	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), m_nYear,  dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), m_nYear, dte.GetMonthLastDay());
	}

	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);
}
/*void CHMSPatientSurgeryReportListDialog_V2::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog_V2::OnReportPeriodKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog_V2::OnReportPeriodLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CHMSPatientSurgeryReportListDialog_V2::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientSurgeryReportListDialog_V2::OnFromDateChange(){
	
} */
/*void CHMSPatientSurgeryReportListDialog_V2::OnFromDateSetfocus(){
	
} */
/*void CHMSPatientSurgeryReportListDialog_V2::OnFromDateKillfocus(){
	
} */
int CHMSPatientSurgeryReportListDialog_V2::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPatientSurgeryReportListDialog_V2::OnToDateChange(){
	
} */
/*void CHMSPatientSurgeryReportListDialog_V2::OnToDateSetfocus(){
	
} */
/*void CHMSPatientSurgeryReportListDialog_V2::OnToDateKillfocus(){
	
} */
int CHMSPatientSurgeryReportListDialog_V2::OnToDateCheckValue(){
	return 0;
} 
void CHMSPatientSurgeryReportListDialog_V2::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog_V2::OnObjectSelendok(){
	
}
/*void CHMSPatientSurgeryReportListDialog_V2::OnObjectSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog_V2::OnObjectKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog_V2::OnObjectLoadData()\
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE ho_id='%s' "), m_szObjectKey);
	}

	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object %s ORDER BY cast(ho_id as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	int nItem;
	while(!rs.IsEOF()){ 
		nItem = m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		m_wndObject.SetCheck(nItem, true);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPatientSurgeryReportListDialog_V2::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog_V2::OnSurgeryCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog_V2::OnSurgeryCategorySelendok(){
	 
}
void CHMSPatientSurgeryReportListDialog_V2::OnTYCSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSPatientSurgeryReportListDialog_V2::OnSurgeryCategorySetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog_V2::OnSurgeryCategoryKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog_V2::OnSurgeryCategoryLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndSurgeryCategory.IsSearchKey() && !m_szSurgeryCategoryKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szSurgeryCategoryKey);
	}

	m_wndSurgeryCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ") \
				 _T("FROM sys_sel WHERE ss_id='hms_operation_type' %s ORDER BY cast(ss_code as integer)"),
		         szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeryCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPatientSurgeryReportListDialog_V2::OnSurgeryCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog_V2::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog_V2::OnDepartmentSelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog_V2::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog_V2::OnDepartmentKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog_V2::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartment.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" select sd_id as deptid,") \
				_T("        sd_name as deptname,") \
				_T("        sd_type as depttype") \
				_T(" from sys_dept") \
				_T(" where sd_type in('KB','DT')") \
				_T(" order by sd_type, sd_id"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("deptname")),
			rs.GetValue(_T("depttype")), NULL);
		rs.MoveNext();
	}
	m_wndDepartment.EndLoad(); 
	return nCount;
	
}
/*void CHMSPatientSurgeryReportListDialog_V2::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog_V2::OnSurgeryTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog_V2::OnSurgeryTypeSelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog_V2::OnSurgeryTypeSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog_V2::OnSurgeryTypeKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog_V2::OnSurgeryTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSurgeryType.IsSearchKey() && m_szSurgeryTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE ss_code='%s' "), m_szSurgeryTypeKey);
	}
	m_wndSurgeryType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ")\
		         _T("FROM sys_sel WHERE ss_id='hms_operation_type' ")\
				 _T("%s ORDER BY cast(ss_code as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeryType.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSPatientSurgeryReportListDialog_V2::OnSurgeryTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog_V2::OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog_V2::OnSurgeonSelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog_V2::OnSurgeonSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog_V2::OnSurgeonKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog_V2::OnSurgeonLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndSurgeon.IsSearchKey() && !m_szSurgeonKey.IsEmpty())
	{
		szWhere.Format(_T(" and lower(su_userid) = lower('%s') "), m_szSurgeonKey);
	}
	m_wndSurgeon.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name ") \
		         _T("FROM sys_user ") \
				 _T("LEFT JOIN sys_dept ON(sd_id=su_deptid) ") \
				 _T("WHERE sd_type NOT IN('KB','HC') %s ORDER BY su_userid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeon.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPatientSurgeryReportListDialog_V2::OnSurgeonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog_V2::OnLoadReportSelect()
{
		
} 
void CHMSPatientSurgeryReportListDialog_V2::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	AfxMessageBox(_T("Báo cáo bồi dưỡng PTTT thục hiện tại khoa B5"));

	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\Baocaooiduongpttt.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\\Template"));

	xls.SetWorksheet(0);	xls.SetSheetName(_T("Sheet 0"));
	//xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	//xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	
	
	nRow = 7;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		
			
		rs.GetValue(_T("khoa"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[16] > 0)
			{
				xls.SetCellText(2, nRow, _T("Cộng"), FMT_TEXT, true);

				for(int i = 3; i < 30; i++)
				{
					if (nGroupTotal[i] > 0)
					{
						xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_CURRENCY1, true);
						nTotal[i] += nGroupTotal[i];
					}
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("hovaten"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sobenhan"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("capbac"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sothe"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenpttt"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phauthuatvien"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("gayme"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phume"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("votrung"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("huutrung"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phanloai"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("soluong"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("dongia"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("ttthanhtoan"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngaythuchien"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[16] > 0)
	{
		xls.SetCellText(1, nRow, _T("CCộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	if (nTotal[16] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 2; i < 30; i++)
		{
			if (nTotal[i] > 0)
			{
				xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_CURRENCY1, true);
			}
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\Baocaooiduongpttt2.xls"));	
	
} 
void CHMSPatientSurgeryReportListDialog_V2::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();		
}
void CHMSPatientSurgeryReportListDialog_V2::OnObjectListDblClick(){
	
} 
void CHMSPatientSurgeryReportListDialog_V2::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientSurgeryReportListDialog_V2::OnObjectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientSurgeryReportListDialog_V2::OnObjectListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndObjectList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT ho_id as ID, ") \
		         _T("ho_desc as Name ") \
				 _T("FROM hms_object ") \
				 _T("ORDER BY cast(ho_id as integer)"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndObjectList.EndLoad(); 
	return nCount;
}
int CHMSPatientSurgeryReportListDialog_V2::OnAddHMSPatientSurgeryReportListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPatientSurgeryReportListDialog_V2::OnEditHMSPatientSurgeryReportListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientSurgeryReportListDialog_V2::OnDeleteHMSPatientSurgeryReportListDialog(){
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
 		OnCancelHMSPatientSurgeryReportListDialog(); 
 	}
	return 0;
}
int CHMSPatientSurgeryReportListDialog_V2::OnSaveHMSPatientSurgeryReportListDialog(){
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
 		//OnHMSPatientSurgeryReportListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPatientSurgeryReportListDialog_V2::OnCancelHMSPatientSurgeryReportListDialog(){
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
int CHMSPatientSurgeryReportListDialog_V2::OnHMSPatientSurgeryReportListDialogListLoadData(){
	return 0;
}

int CHMSPatientSurgeryReportListDialog_V2::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (!m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, true);
	}
	return 0;
}

int CHMSPatientSurgeryReportListDialog_V2::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, false);
	}
	return 0;
}

int CHMSPatientSurgeryReportListDialog_V2::OnDepartmentListCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (!m_wndDepartment.GetCheck(i))
			m_wndDepartment.SetCheck(i, true);
	}
	return 0;
}

int CHMSPatientSurgeryReportListDialog_V2::OnDepartmentListUnCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
			m_wndDepartment.SetCheck(i, false);
	}
	return 0;
}



CString CHMSPatientSurgeryReportListDialog_V2::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szObject, szDepts;

	szWhere.Format(_T(" AND ho_performdate BETWEEN To_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("  AND To_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')")
				, m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		 {
			//m_wndObject.SetCurSel(i);
		 	if (!szObject.IsEmpty())
				szObject += _T(",");						
			szObject.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	 }
	 
	 if (!szObject.IsEmpty())
		 szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObject);

	
	 
	 for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");

			szDepts.AppendFormat(_T("'%s'"), m_wndDepartment.GetItemText(i, 0));
		}
	}

	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" and ho_deptid in(%s) "), szDepts);


	/* if (!m_szDepartmentKey.IsEmpty())
	 {
		 szWhere.AppendFormat(_T(" AND ho_deptid='%s' "), m_szDepartmentKey);
	 }*/

	 if (!m_szSurgeonKey.IsEmpty())
	 {
		 szWhere.AppendFormat(_T(" AND ho_practitioner='%s' "), m_szSurgeonKey);
	 }

	 if (!m_szSurgeryCategoryKey.IsEmpty())
	 {
		 szWhere.AppendFormat(_T(" AND i.ho_type='%s' "), m_szSurgeryCategoryKey);
	 }

	 if(m_bThuThuat)

	 {
		 szWhere.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) = '500' "));
	 }
	 else
	 {
		szWhere.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) <> '500' "));
	 }

	 if(m_bTYC)
	 {
		 szWhere.AppendFormat(_T(" AND NVL(HFL_TYC, 0) = 'TYC' "));
	 }
	 else
	 {
		 szWhere.AppendFormat(_T(" AND NVL(HFL_TYC, 0) <> 'TYC' "));
	 }
		 
	 szWhere.AppendFormat(_T(" and ho_status = 'T' AND ho_pdeptid='%s' "), pMF->m_szDepartment);	

			szSQL.Format(_T(" SELECT ho_docno AS sohoso, ho_deptid as khoa, ") \
			_T("   trim(hp_surname") \
			_T("   ||' '") \
			_T("   ||hp_midname") \
			_T("   ||' '") \
			_T("   ||hp_firstname) AS hovaten,") \
			_T("   ho_itemid as maphauthuat,") \
			_T("   hfg_name AS phanloai,") \
			_T("   CASE") \
			_T("     WHEN LENGTH(ho_comment) > 0") \
			_T("     THEN ho_comment") \
			_T("     ELSE hfl_name") \
			_T("   END             AS tenpttt,") \
			_T("   GET_USERNAME(ho_practitioner) AS phauthuatvien,") \
			_T("   GET_USERNAME(ho_user5) votrung,") \
			_T("   GET_USERNAME(ho_anesthetist) phume,") \
			_T("   GET_USERNAME(ho_anaes_method) gayme,") \
			_T("   hcr_recordno sobenhan,") \
			_T("   get_syssel_desc('hms_rank', NVL(hd_rank, hp_rank)) capbac,") \
			_T("   hd_cardno sothe,") \
			_T("   hfe_quantity as soluong,") \
			_T("   hfe_unitprice as dongia,") \
			_T("   hfe_quantity * hfe_unitprice as thanhtien,") \
			_T("   to_char(ho_performdate, 'DD/MM/YYYY') AS ngaythuchien,") \
			_T("   GET_USERNAME(ho_user7)       AS huutrung, ") \
			_T("  case when ho_payment='P' then cast('Đã thanh toán' as nvarchar2(64))") \
			_T("   else cast('Chưa thanh toán' as nvarchar2(64))") \
			_T("   end AS ttthanhtoan") \
			_T(" FROM hms_operation i") \
			_T(" LEFT JOIN hms_fee ON (i.ho_docno = hfe_docno AND i.ho_idx = hfe_orderid)") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_docno=ho_docno)") \
			_T(" LEFT JOIN hms_patient") \
			_T(" ON (hd_patientno = hp_patientno)") \
			_T(" LEFT JOIN hms_clinical_record") \
			_T(" ON(hcr_docno=hd_docno)") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(hfl_feeid=ho_itemid)") \
			_T(" LEFT JOIN hms_fee_group") \
			_T(" ON(hfg_id=hfl_groupid)") \
			_T(" LEFT JOIN hms_object") \
			_T(" ON(ho_object=CAST(ho_id AS INTEGER))") \
			_T(" WHERE 1=1 %s") \
			_T(" ORDER BY khoa, ho_performdate"), szWhere);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}
void CHMSPatientSurgeryReportListDialog_V2::OnThuThuatSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
