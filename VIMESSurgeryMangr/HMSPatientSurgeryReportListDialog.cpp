#include "HMSPatientSurgeryReportListDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"

static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnObjectAddNew();
}*/
static void _OnSurgeryCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnSurgeryCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryCategorySelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryCategorySelendok();
}
/*static void _OnSurgeryCategorySetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryCategoryKillfocus();
}*/
/*static void _OnSurgeryCategoryKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryCategoryKillfocus();
}*/
static long _OnSurgeryCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryCategoryLoadData();
}
/*static void _OnSurgeryCategoryAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryCategoryAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnSurgeryTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnSurgeryTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryTypeSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryTypeSelendok();
}
/*static void _OnSurgeryTypeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryTypeKillfocus();
}*/
/*static void _OnSurgeryTypeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryTypeKillfocus();
}*/
static long _OnSurgeryTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryTypeLoadData();
}
/*static void _OnSurgeryTypeAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryTypeAddNew();
}*/
static void _OnSurgeonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnSurgeonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeonSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeonSelendok();
}
/*static void _OnSurgeonSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeonKillfocus();
}*/
/*static void _OnSurgeonKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeonKillfocus();
}*/
static long _OnSurgeonLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeonLoadData();
}
/*static void _OnSurgeonAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeonAddNew();
}*/
static void _OnLoadReportSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryReportListDialog *pVw = (CHMSPatientSurgeryReportListDialog *)pWnd;
	pVw->OnLoadReportSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryReportListDialog *pVw = (CHMSPatientSurgeryReportListDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryReportListDialog *pVw = (CHMSPatientSurgeryReportListDialog *)pWnd;
	pVw->OnCloseSelect();
}
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientSurgeryReportListDialog*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnObjectListDeleteItem();
}
static int _OnAddHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnAddHMSPatientSurgeryReportListDialog();
} 
static int _OnEditHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnEditHMSPatientSurgeryReportListDialog();
} 
static int _OnDeleteHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnDeleteHMSPatientSurgeryReportListDialog();
} 
static int _OnSaveHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnSaveHMSPatientSurgeryReportListDialog();
} 
static int _OnCancelHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnCancelHMSPatientSurgeryReportListDialog();
}

static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnObjectListCheckAll();
} 

static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnObjectListUnCheckAll();
}

static int _OnDepartmentListCheckAllFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnDepartmentListCheckAll();
} 

static int _OnDepartmentListUnCheckAllFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnDepartmentListUnCheckAll();
}

static void _OnThuThuatSelectFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog*)pWnd)->OnThuThuatSelect();
}
static void _OnTYCSelectFnc(CWnd *pWnd){
	 ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnTYCSelect();
}

CHMSPatientSurgeryReportListDialog::CHMSPatientSurgeryReportListDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 395;
	m_nDlgHeight = 465;
	SetDefaultValues();
}
CHMSPatientSurgeryReportListDialog::~CHMSPatientSurgeryReportListDialog(){
}
void CHMSPatientSurgeryReportListDialog::OnCreateComponents()
{
	/*m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 509, 414);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 10, 30, 115, 55);
	m_wndReportPeriod.Create(this,121, 30, 509, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 115, 85);
	m_wndFromDate.Create(this,121, 60, 283, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 289, 60, 359, 85);
	m_wndToDate.Create(this,364, 60, 508, 85); 
	m_wndSurgeryCategoryLabel.Create(this, _T("Surgery Category"), 10, 90, 115, 115);
	m_wndSurgeryCategory.Create(this,121, 90, 509, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 115, 145);
	m_wndDepartment.Create(this,121, 120, 509, 145); 
	m_wndSurgeryTypeLabel.Create(this, _T("Operation Type"), 11, 180, 115, 205);
	m_wndSurgeryType.Create(this,121, 180, 509, 205); 
	m_wndSurgeonLabel.Create(this, _T("Surgeon"), 10, 150, 115, 175);
	m_wndSurgeon.Create(this,121, 150, 509, 175); 
	m_wndLoadReport.Create(this, _T("&Load Report"), 227, 430, 317, 455);
	m_wndExport.Create(this, _T("&Export XLS"), 322, 430, 412, 455);
	m_wndClose.Create(this, _T("&Close"), 417, 430, 507, 455);
	m_wndObjectList.Create(this,16, 205, 509, 415); 
	m_wndThuThuat.Create(this, _T("Giảm dau"), 10, 430, 89, 455);
	m_wndTYC.Create(this, _T("DV yêu cầu"), 92, 430, 222, 455);*/

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
void CHMSPatientSurgeryReportListDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
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
void CHMSPatientSurgeryReportListDialog::OnSetWindowEvents()
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
	m_nYear = str2int(m_szFromDate.Left(4));

	SetMode(VM_EDIT);
	OnDepartmentLoadData();
	OnObjectListLoadData();
	OnObjectListCheckAll();
}
void CHMSPatientSurgeryReportListDialog::OnDoDataExchange(CDataExchange* pDX)
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
void CHMSPatientSurgeryReportListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientSurgeryReportListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientSurgeryReportListDialog::SetDefaultValues(){

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
int CHMSPatientSurgeryReportListDialog::SetMode(int nMode){
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
void CHMSPatientSurgeryReportListDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnReportPeriodSelendok()
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
/*void CHMSPatientSurgeryReportListDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnReportPeriodKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnReportPeriodLoadData()
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
/*void CHMSPatientSurgeryReportListDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientSurgeryReportListDialog::OnFromDateChange(){
	
} */
/*void CHMSPatientSurgeryReportListDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSPatientSurgeryReportListDialog::OnFromDateKillfocus(){
	
} */
int CHMSPatientSurgeryReportListDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPatientSurgeryReportListDialog::OnToDateChange(){
	
} */
/*void CHMSPatientSurgeryReportListDialog::OnToDateSetfocus(){
	
} */
/*void CHMSPatientSurgeryReportListDialog::OnToDateKillfocus(){
	
} */
int CHMSPatientSurgeryReportListDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSPatientSurgeryReportListDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnObjectSelendok(){
	
}
/*void CHMSPatientSurgeryReportListDialog::OnObjectSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnObjectKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnObjectLoadData()\
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
/*void CHMSPatientSurgeryReportListDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog::OnSurgeryCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnSurgeryCategorySelendok(){
	 
}
void CHMSPatientSurgeryReportListDialog::OnTYCSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSPatientSurgeryReportListDialog::OnSurgeryCategorySetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnSurgeryCategoryKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnSurgeryCategoryLoadData()
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
/*void CHMSPatientSurgeryReportListDialog::OnSurgeryCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnDepartmentLoadData()
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
/*void CHMSPatientSurgeryReportListDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog::OnSurgeryTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnSurgeryTypeSelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog::OnSurgeryTypeSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnSurgeryTypeKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnSurgeryTypeLoadData()
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
/*void CHMSPatientSurgeryReportListDialog::OnSurgeryTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog::OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnSurgeonSelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog::OnSurgeonSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnSurgeonKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnSurgeonLoadData()
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
/*void CHMSPatientSurgeryReportListDialog::OnSurgeonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog::OnLoadReportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	static CReport rpt;
	CString tmpStr, m_szGroups, szWhere, szObject;
	CString szTemp;
	
	szObject.Empty();

	if(!rpt.Init(_T("Reports/HMS/PTTT/LISTOFPATIENTSURGERYREPORT.RPT")) )
	{		//ShowMessageBox(_T("Can not open file report"), MB_OK);		return;
	}

	CString szSQL;
	CRecord rs(&pMF->m_db);
	
	UpdateData(TRUE);

	BeginWaitCursor();

	//int nSel = m_wndObject.GetCurSel();
	szSQL = GetQueryString();

	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK);
		return;
	}

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->m_szDept));
	rpt.GetReportHeader()->Format(_T("ReportDate"), CDate::Convert(m_szFromDate), CDate::Convert(m_szToDate));
	//Page Header
	//Report Detail
	double nTotalAmount = 0;

	while (!rs.IsEOF())
	{
		CReportSection* rptDetail = rpt.AddDetail();
		//rs.GetValue(_T("recordno"), tmpStr);
		rs.GetValue(_T("doc_no"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("patient_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("surgery_name"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rptDetail->SetValue(_T("4"), rs.GetValue(_T("rank")));

		rptDetail->SetValue(_T("5"), rs.GetValue(_T("card_no")));

		rs.GetValue(_T("anaesthetist"), tmpStr);
		rptDetail->SetValue(_T("6"), pMF->GetDoctorName(tmpStr, true));

		rs.GetValue(_T("anaesthetist1"), tmpStr);
		rptDetail->SetValue(_T("7"), pMF->GetDoctorName(tmpStr, true));

		rs.GetValue(_T("user5"), tmpStr);
		rptDetail->SetValue(_T("8"), pMF->GetDoctorName(tmpStr, true));

		rs.GetValue(_T("stype"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("amount"), tmpStr);
		nTotalAmount += str2double(tmpStr);
		FormatCurrency(nTotalAmount, szTemp);
		rptDetail->SetValue(_T("10"), szTemp);
		
		rs.MoveNext();
	}
	if (nTotalAmount > 0)
	{
		tmpStr.Format(_T("%.0f"), nTotalAmount);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	}
	//Page Footer
	//Report Footer
	CDate sysDate;
	sysDate.ParseDate(pMF->GetSysDate());
	rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(), sysDate.GetMonth(), sysDate.GetYear());

	EndWaitCursor();
	rpt.PrintPreview();
	
} 
void CHMSPatientSurgeryReportListDialog::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	long double nTotal = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(5, 16);
	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(13, 15);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 10);
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N L\xC0M PT-TT");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("S\x1ED1 HS"), 4098, true);
	xls.SetCellText(2, 4, _T("T\xEAn \x42N"), 4098, true);
	xls.SetCellText(3, 4, _T("S\x1ED1 \x42\x41"), 4098, true);
	xls.SetCellText(4, 4, _T("\x43\x1EA5p \x62\x1EAD\x63"), 4098, true);
	xls.SetCellText(5, 4, _T("S\x1ED1 th\x1EBB"), 4098, true);
	xls.SetCellText(6, 4, _T("T\xEAn PT-TT"), 4098, true);
	xls.SetCellText(7, 4, _T("PT vi\xEAn"), 4098, true);
	xls.SetCellText(8, 4, _T("G\xE2y m\xEA"), 4098, true);
	xls.SetCellText(9, 4, _T("Ph\x1EE5 m\xEA"), 4098, true);
	xls.SetCellText(10, 4, _T("Vô trùng"), 4098, true);
	xls.SetCellText(11, 4, _T("Hữu trùng"), 4098, true);
	xls.SetCellText(12, 4, _T("Lo\x1EA1i PT"), 4098, true);
	xls.SetCellText(13, 4, _T("S\x1ED1 ti\x1EC1n"), 4098, true);
	xls.SetCellText(14, 4, _T("Ng\xE0y th\x1EF1\x63 hi\x1EC7n"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("doc_no")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("record_no")), FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("rank")), FMT_TEXT);
		xls.SetCellText(5, nRow, rs.GetValue(_T("card_no")), FMT_TEXT);
		xls.SetCellText(6, nRow, rs.GetValue(_T("surgery_name")), FMT_TEXT);
		rs.GetValue(_T("surgeon"), tmpStr);
		xls.SetCellText(7, nRow, pMF->GetDoctorName(tmpStr, true), FMT_TEXT);
		rs.GetValue(_T("anaesthetist1"), tmpStr);
		xls.SetCellText(8, nRow, pMF->GetDoctorName(tmpStr, true), FMT_TEXT);
		rs.GetValue(_T("anaesthetist"), tmpStr);
		xls.SetCellText(9, nRow, pMF->GetDoctorName(tmpStr, true), FMT_TEXT);

		rs.GetValue(_T("user5"), tmpStr);
		xls.SetCellText(10, nRow, pMF->GetDoctorName(tmpStr, true), FMT_TEXT);

		rs.GetValue(_T("user_huutrung"), tmpStr);
		xls.SetCellText(11, nRow, pMF->GetDoctorName(tmpStr, true), FMT_TEXT);

		xls.SetCellText(12, nRow, rs.GetValue(_T("stype")), FMT_TEXT);

		rs.GetValue(_T("amount"), nTmp);
		nTotal += nTmp;
		xls.SetCellText(13, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("performdate"), tmpStr);
		xls.SetCellText(14, nRow, CDateTime::Convert(tmpStr, yyyymmdd | hhmmss, ddmmyyyy | hhmmss), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		xls.SetCellText(10, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), 4098, true);
		tmpStr.Format(_T("%f"), nTotal);
		xls.SetCellText(13, nRow, tmpStr, FMT_NUMBER1, true);

	}
	xls.Save(_T("Exports\\DS BN lam PT-TT.xls"));
	
} 
void CHMSPatientSurgeryReportListDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();		
}
void CHMSPatientSurgeryReportListDialog::OnObjectListDblClick(){
	
} 
void CHMSPatientSurgeryReportListDialog::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientSurgeryReportListDialog::OnObjectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientSurgeryReportListDialog::OnObjectListLoadData()
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
int CHMSPatientSurgeryReportListDialog::OnAddHMSPatientSurgeryReportListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPatientSurgeryReportListDialog::OnEditHMSPatientSurgeryReportListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientSurgeryReportListDialog::OnDeleteHMSPatientSurgeryReportListDialog(){
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
int CHMSPatientSurgeryReportListDialog::OnSaveHMSPatientSurgeryReportListDialog(){
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
int CHMSPatientSurgeryReportListDialog::OnCancelHMSPatientSurgeryReportListDialog(){
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
int CHMSPatientSurgeryReportListDialog::OnHMSPatientSurgeryReportListDialogListLoadData(){
	return 0;
}

int CHMSPatientSurgeryReportListDialog::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (!m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, true);
	}
	return 0;
}

int CHMSPatientSurgeryReportListDialog::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, false);
	}
	return 0;
}

int CHMSPatientSurgeryReportListDialog::OnDepartmentListCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (!m_wndDepartment.GetCheck(i))
			m_wndDepartment.SetCheck(i, true);
	}
	return 0;
}

int CHMSPatientSurgeryReportListDialog::OnDepartmentListUnCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
			m_wndDepartment.SetCheck(i, false);
	}
	return 0;
}



CString CHMSPatientSurgeryReportListDialog::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szObject, szDepts;

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
		 
	 //szWhere.AppendFormat(_T(" AND NVL(hfl_categoryid, 0) not in ('500') AND NVL(HFL_TYC, 0) not in ('TYC') "));


	szSQL.Format(_T(" SELECT ") \
			_T("       ho_docno as doc_no,") \
			_T("       trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patient_name,") \
			_T("       ho_itemid,") \
			_T("       hfg_name as stype,") \
			_T("       case when length(ho_comment) > 0 then ho_comment else hfl_name end as surgery_name,") \
			_T("       ho_practitioner as surgeon,") \
			_T("	   ho_user5 user5, ho_anesthetist anaesthetist, ho_anaes_method anaesthetist1,") \
			_T("	   hcr_recordno record_no,") \
			_T("	   get_syssel_desc('hms_rank', NVL(hd_rank, hp_rank)) rank, hd_cardno card_no, ") \
			_T("       hfl_servprice as amount,") \
			_T("       ho_performdate as performdate, ho_user7 AS user_huutrung") \
			_T(" FROM hms_operation i") \
			_T(" LEFT JOIN hms_doc ON(hd_docno=ho_docno)") \
			_T(" LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
			_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
			_T(" LEFT JOIN hms_fee_list ON(hfl_feeid=ho_itemid)") \
			_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfl_groupid)") \
			_T(" LEFT JOIN hms_object ON(ho_object=cast(ho_id as integer))") \
			_T(" WHERE trunc_date(ho_performdate) BETWEEN to_date('%s', 'YYYY-MM-DD') AND to_date('%s', 'YYYY-MM-DD') AND ho_status = 'T'") \
			_T(" AND ho_pdeptid='%s' %s ORDER BY ho_performdate"), m_szFromDate, m_szToDate, pMF->m_szDepartment, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
void CHMSPatientSurgeryReportListDialog::OnThuThuatSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
