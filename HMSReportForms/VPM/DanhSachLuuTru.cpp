#include "stdafx.h"
#include "DanhSachLuuTru.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CDanhSachLuuTru *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CDanhSachLuuTru* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CDanhSachLuuTru *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CDanhSachLuuTru *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CDanhSachLuuTru *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CDanhSachLuuTru *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportToExcelSelectFnc(CWnd *pWnd)
{
	CDanhSachLuuTru *pVw = (CDanhSachLuuTru *)pWnd;
	pVw->OnExportToExcelSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CDanhSachLuuTru*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CDanhSachLuuTru*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CDanhSachLuuTru*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CDanhSachLuuTru*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CDanhSachLuuTru*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CDanhSachLuuTru*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnDeptListDeleteItem();
} 
static void _OnDeptSendSelectFnc(CWnd *pWnd){
	 ((CDanhSachLuuTru*)pWnd)->OnDeptSendSelect();
}
static long _OnPackageListLoadDataFnc(CWnd *pWnd){
	return ((CDanhSachLuuTru*)pWnd)->OnPackageListLoadData();
} 
static void _OnPackageListDblClickFnc(CWnd *pWnd){
	((CDanhSachLuuTru*)pWnd)->OnPackageListDblClick();
} 
static void _OnPackageListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CDanhSachLuuTru*)pWnd)->OnPackageListSelectChange(nOldItem, nNewItem);
} 
static int _OnPackageListDeleteItemFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnPackageListDeleteItem();
} 
static void _OnStayInSelectFnc(CWnd *pWnd){
	 ((CDanhSachLuuTru*)pWnd)->OnStayInSelect();
}
static void _OnFinishStayInSelectFnc(CWnd *pWnd){
	 ((CDanhSachLuuTru*)pWnd)->OnFinishStayInSelect();
}
static void _OnPostedSelectFnc(CWnd *pWnd){
	  ((CDanhSachLuuTru*)pWnd)->OnPostedSelect();
}
static int _OnAddCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnAddCFMServicePackageIncomeList();
} 
static int _OnEditCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnEditCFMServicePackageIncomeList();
} 
static int _OnDeleteCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnDeleteCFMServicePackageIncomeList();
} 
static int _OnSaveCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnSaveCFMServicePackageIncomeList();
} 
static int _OnCancelCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnCancelCFMServicePackageIncomeList();
}

static void _OnDoi_Luu_TruSelectFnc(CWnd *pWnd){
	  ((CDanhSachLuuTru*)pWnd)->OnDoi_Luu_TruSelect();
}
static void _OnDang_Luu_TruSelectFnc(CWnd *pWnd){
	  ((CDanhSachLuuTru*)pWnd)->OnDang_Luu_TruSelect();
}
static void _OnKetThuc_TraTheSelectFnc(CWnd *pWnd){
	  ((CDanhSachLuuTru*)pWnd)->OnKetThuc_TraTheSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CDanhSachLuuTru*)pWnd)->OnAllSelect();
}
static void _OnKhoa_Gui_DenSelectFnc(CWnd *pWnd){
	 ((CDanhSachLuuTru*)pWnd)->OnKhoa_Gui_DenSelect();
}
static void _OnNgoai_TruSelectFnc(CWnd *pWnd){
	 ((CDanhSachLuuTru*)pWnd)->OnNgoai_TruSelect();
}

static int _OnAddDanhSachLuuTruFnc(CWnd *pWnd)
{
	 return ((CDanhSachLuuTru*)pWnd)->OnAddDanhSachLuuTru();
} 
static int _OnEditDanhSachLuuTruFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnEditDanhSachLuuTru();
} 
static int _OnDeleteDanhSachLuuTruFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnDeleteDanhSachLuuTru();
} 
static int _OnSaveDanhSachLuuTruFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnSaveDanhSachLuuTru();
} 
static int _OnCancelDanhSachLuuTruFnc(CWnd *pWnd){
	 return ((CDanhSachLuuTru*)pWnd)->OnCancelDanhSachLuuTru();
} 
static int _OnObjectListCheckAllFnc(CWnd *pWnd)
{
	return ((CDanhSachLuuTru*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd)
{
	return ((CDanhSachLuuTru*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd)
{
	return ((CDanhSachLuuTru*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd)
{
	return ((CDanhSachLuuTru*)pWnd)->OnDeptListUnCheckAll();
}
static void _OnDang_Ky_Ngoai_GioSelectFnc(CWnd *pWnd){
	  ((CDanhSachLuuTru*)pWnd)->OnDang_Ky_Ngoai_GioSelect();
}

CDanhSachLuuTru::CDanhSachLuuTru(CWnd *pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CDanhSachLuuTru::~CDanhSachLuuTru()
{

}
void CDanhSachLuuTru::OnCreateComponents()
{
	/*m_wndYear.Create(this,120, 29, 256, 54); 
	m_wndReportPeriod.Create(this,364, 29, 500, 54); 
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 115, 55);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 263, 30, 359, 55);
	m_wndFromDate.Create(this,120, 59, 256, 84); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 115, 85);
	m_wndToDateLabel.Create(this, _T("To Date"), 263, 60, 359, 85);
	m_wndReportCondition.Create(this, _T("Report Condition"), 6, 4, 501, 448);
	m_wndToDate.Create(this,364, 60, 500, 85); 
	m_wndObjectList.Create(this,10, 90, 501, 200); 
	m_wndDeptList.Create(this,10, 203, 501, 327); 
	m_wndPackageList.Create(this,10, 332, 501, 449); 
	m_wndDoi_Luu_Tru.Create(this, _T("Đăng ký trong ngày"), 11, 454, 113, 479);
	m_wndDang_Luu_Tru.Create(this, _T("Dang_Luu_Tru"), 119, 454, 233, 479);
	m_wndKetThuc_TraThe.Create(this, _T("KetThuc_TraThe"), 239, 454, 368, 479);
	m_wndAll.Create(this, _T("All"), 374, 454, 501, 479);
	m_wndKhoa_Gui_Den.Create(this, _T("Khoa_Gui_Den"), 12, 485, 168, 510);
	m_wndNgoai_Tru.Create(this, _T("Ngoai_Tru"), 174, 485, 330, 510);
	m_wndExportToExcel.Create(this, _T("&ExportToExcel"), 336, 485, 501, 510);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 500, 449);
	m_wndYearLabel.Create(this, _T("Year"), 9, 31, 114, 56);
	m_wndYear.Create(this,119, 30, 255, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 262, 31, 358, 56);
	m_wndReportPeriod.Create(this,363, 30, 499, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 9, 61, 114, 86);
	m_wndFromDate.Create(this,119, 60, 255, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 262, 61, 358, 86);
	m_wndToDate.Create(this,363, 61, 499, 86); 
	m_wndExportToExcel.Create(this, _T("&ExportToExcel"), 335, 517, 500, 542);
	m_wndObjectList.Create(this,9, 91, 500, 201); 
	m_wndDeptList.Create(this,9, 204, 500, 328); 
	m_wndPackageList.Create(this,9, 333, 500, 450); 
	m_wndDoi_Luu_Tru.Create(this, _T("Đăng ký trong ngày"), 10, 455, 255, 480);
	m_wndDang_Luu_Tru.Create(this, _T("Dang_Luu_Tru"), 10, 486, 139, 511);
	m_wndKetThuc_TraThe.Create(this, _T("KetThuc_TraThe"), 144, 486, 273, 511);
	m_wndAll.Create(this, _T("All"), 278, 486, 500, 511);
	m_wndKhoa_Gui_Den.Create(this, _T("Khoa_Gui_Den"), 10, 517, 166, 542);
	m_wndNgoai_Tru.Create(this, _T("Ngoai_Tru"), 173, 517, 329, 542);
	m_wndDang_Ky_Ngoai_Gio.Create(this, _T("Đăng ký ngoài giờ"), 260, 455, 500, 480);
}
void CDanhSachLuuTru::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);	
	m_wndReportPeriod.LimitText(35);	
	m_wndFromDate.SetCheckValue(true);	
	m_wndToDate.SetCheckValue(true);
	
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObjectList.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);
	m_wndObjectList.SetCheckBox(TRUE);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);
	
	m_wndPackageList.InsertColumn(0, _T("id"), CFMT_TEXT, 90);
	m_wndPackageList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndPackageList.InsertColumn(2, _T("Price"), CFMT_TEXT, 100);

	m_wndPackageList.SetCheckBox(TRUE);


}
void CDanhSachLuuTru::OnSetWindowEvents(){
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
	m_wndExportToExcel.SetEvent(WE_CLICK, _OnExportToExcelSelectFnc);
	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);	

	m_wndObjectList.AddEvent(1, _T("Check All"), _OnObjectListCheckAllFnc);
	m_wndObjectList.AddEvent(2, _T("UnCheck All"), _OnObjectListUnCheckAllFnc);

	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);

	m_wndDeptList.AddEvent(1, _T("Check All"), _OnDeptListCheckAllFnc);
	m_wndDeptList.AddEvent(2, _T("UnCheck All"), _OnDeptListUnCheckAllFnc);

	m_wndDeptSend.SetEvent(WE_CLICK, _OnDeptSendSelectFnc);
	m_wndPackageList.SetEvent(WE_SELCHANGE, _OnPackageListSelectChangeFnc);
	m_wndPackageList.SetEvent(WE_LOADDATA, _OnPackageListLoadDataFnc);
	m_wndPackageList.SetEvent(WE_DBLCLICK, _OnPackageListDblClickFnc);
	
	m_wndStayIn.SetEvent(WE_CLICK, _OnStayInSelectFnc);
	m_wndFinishStayIn.SetEvent(WE_CLICK, _OnFinishStayInSelectFnc);
	m_wndPosted.SetEvent(WE_CLICK, _OnPostedSelectFnc);

	m_wndDoi_Luu_Tru.SetEvent(WE_CLICK, _OnDoi_Luu_TruSelectFnc);
	m_wndDang_Luu_Tru.SetEvent(WE_CLICK, _OnDang_Luu_TruSelectFnc);
	m_wndKetThuc_TraThe.SetEvent(WE_CLICK, _OnKetThuc_TraTheSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndKhoa_Gui_Den.SetEvent(WE_CLICK, _OnKhoa_Gui_DenSelectFnc);
	m_wndNgoai_Tru.SetEvent(WE_CLICK, _OnNgoai_TruSelectFnc);
	m_wndDang_Ky_Ngoai_Gio.SetEvent(WE_CLICK, _OnDang_Ky_Ngoai_GioSelectFnc);


	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCFMServicePackageIncomeListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCFMServicePackageIncomeListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCFMServicePackageIncomeListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCFMServicePackageIncomeListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCFMServicePackageIncomeListFnc, 0, 'T', VK_CONTROL);
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnObjectListLoadData();
	OnDeptListLoadData();
	OnPackageListLoadData();

}
void CDanhSachLuuTru::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndDoi_Luu_Tru.GetDlgCtrlID(), m_nDoi_Luu_Tru);
	DDX_Radio(pDX, m_wndDang_Luu_Tru.GetDlgCtrlID(), m_nDang_Luu_Tru);
	DDX_Radio(pDX, m_wndKetThuc_TraThe.GetDlgCtrlID(), m_nKetThuc_TraThe);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Check(pDX, m_wndKhoa_Gui_Den.GetDlgCtrlID(), m_bKhoa_Gui_Den);
	DDX_Check(pDX, m_wndNgoai_Tru.GetDlgCtrlID(), m_bNgoai_Tru);
	DDX_Radio(pDX, m_wndDang_Ky_Ngoai_Gio.GetDlgCtrlID(), m_nDang_Ky_Ngoai_Gio);

}
void CDanhSachLuuTru::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("ReportPeriod")] =  m_szReportPeriodKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("DeptSend")] =  m_bDeptSend;
	m_jData[_T("StayIn")] =  m_bStayIn;
	m_jData[_T("FinishStayIn")] =  m_bFinishStayIn;
	m_jData[_T("Posted")] =  m_nPosted;
	}
	else
	{
			
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("DeptSend")].GetValue(m_bDeptSend);
	m_jData[_T("StayIn")].GetValue(m_bStayIn);
	m_jData[_T("FinishStayIn")].GetValue(m_bFinishStayIn);
	m_jData[_T("Posted")].GetValue(m_nPosted);
	}

}
void CDanhSachLuuTru::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CDanhSachLuuTru::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CDanhSachLuuTru::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDoi_Luu_Tru=1;
	m_nDang_Luu_Tru=1;
	m_nKetThuc_TraThe=1;
	m_nDang_Ky_Ngoai_Gio=1;
	m_nAll=0;
	m_bKhoa_Gui_Den=FALSE;
	m_bNgoai_Tru=FALSE;

}
int CDanhSachLuuTru::SetMode(int nMode){
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
/*void CDanhSachLuuTru::OnYearChange(){
	
} */
/*void CDanhSachLuuTru::OnYearSetfocus(){
	
} */
/*void CDanhSachLuuTru::OnYearKillfocus(){
	
} */
void CDanhSachLuuTru::OnDang_Ky_Ngoai_GioSelect()
{
	AfxMessageBox(_T("Nhớ chọn thời gian từ 18h hôm trước đến 7h sáng hôm sau khi chạy báo cáo"));
}
int CDanhSachLuuTru::OnYearCheckValue(){
	return 0;
} 
void CDanhSachLuuTru::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CDanhSachLuuTru::OnReportPeriodSelendok(){
	 
}
/*void CDanhSachLuuTru::OnReportPeriodSetfocus(){
	
}*/
/*void CDanhSachLuuTru::OnReportPeriodKillfocus(){
	
}*/
long CDanhSachLuuTru::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReportPeriodKey
};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CDanhSachLuuTru::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CDanhSachLuuTru::OnFromDateChange(){
	
} */
/*void CDanhSachLuuTru::OnFromDateSetfocus(){
	
} */
/*void CDanhSachLuuTru::OnFromDateKillfocus(){
	
} */
int CDanhSachLuuTru::OnFromDateCheckValue(){
	return 0;
} 
/*void CDanhSachLuuTru::OnToDateChange(){
	
} */
/*void CDanhSachLuuTru::OnToDateSetfocus(){
	
} */
/*void CDanhSachLuuTru::OnToDateKillfocus(){
	
} */
int CDanhSachLuuTru::OnToDateCheckValue(){
	return 0;
} 
void CDanhSachLuuTru::OnExportToExcelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DSLUUTRU.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("yob"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phone"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfel_desc"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("begindate"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("enddate"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfe_status"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		
		nRow++;
		rs.MoveNext();
	}
	
	if (nTotal[11] > 0)
	{
		xls.SetCellText(10, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 11; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}
	
	xls.Save(_T("Exports\\DSLUUTRU2.xls"));
} 
void CDanhSachLuuTru::OnObjectListDblClick(){
	
} 
void CDanhSachLuuTru::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CDanhSachLuuTru::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CDanhSachLuuTru::OnObjectListLoadData()
{
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	m_wndObjectList.BeginLoad(); 
	int nCount = 0;

	//szWhere.Format(_T(" AND ho_type IN('S') "));

	szSQL.Format(_T("SELECT ho_id AS ID, ") \
		         _T("ho_desc AS Name, ") \
				 _T("ho_type AS Type ") \
		         _T("FROM hms_object ") \
				 _T("WHERE 1=1 %s ") \
				 _T("ORDER BY cast(ho_id as integer)"),
				 szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("Type")), NULL);
		rs.MoveNext();
	}
	m_wndObjectList.EndLoad(); 
	return nCount;
}
void CDanhSachLuuTru::OnDeptListDblClick(){
	
} 
void CDanhSachLuuTru::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CDanhSachLuuTru::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CDanhSachLuuTru::OnDeptListLoadData()
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
	void CDanhSachLuuTru::OnDeptSendSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CDanhSachLuuTru::OnPackageListDblClick(){
	
} 
void CDanhSachLuuTru::OnPackageListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CDanhSachLuuTru::OnPackageListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CDanhSachLuuTru::OnPackageListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndPackageList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("select hfl_feeid AS id, hfl_name AS name, hfl_servprice AS price from hms_fee_list left join sys_sel ON (hfl_feeid=ss_code) where hfl_typeid='X' and hfl_active='Y' ") \
		         _T("and hfl_feeid in (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE' AND ss_vndesc in ('GNLT','GNNOLPB')) order by ss_vndesc"));				 

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndPackageList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
		    rs.GetValue(_T("price")), NULL);
		rs.MoveNext();
	}
	m_wndPackageList.EndLoad();
	return nCount;
}
	void CDanhSachLuuTru::OnStayInSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CDanhSachLuuTru::OnFinishStayInSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CDanhSachLuuTru::OnPostedSelect(){
	
}
int CDanhSachLuuTru::OnAddCFMServicePackageIncomeList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CDanhSachLuuTru::OnEditCFMServicePackageIncomeList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CDanhSachLuuTru::OnDeleteCFMServicePackageIncomeList(){
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
 		OnCancelCFMServicePackageIncomeList();
 	}
	return 0;
}
int CDanhSachLuuTru::OnSaveCFMServicePackageIncomeList(){
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
 		//OnCFMServicePackageIncomeListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CDanhSachLuuTru::OnCancelCFMServicePackageIncomeList(){
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
int CDanhSachLuuTru::OnCFMServicePackageIncomeListListLoadData(){
	return 0;
}

void CDanhSachLuuTru::OnDoi_Luu_TruSelect()
{
	m_nDoi_Luu_Tru = 0;
	m_nDang_Luu_Tru = 1;
	m_nKetThuc_TraThe = 1;
	m_nAll = 1;
}
void CDanhSachLuuTru::OnDang_Luu_TruSelect()
{
	m_nDoi_Luu_Tru = 1;
	m_nDang_Luu_Tru = 0;
	m_nKetThuc_TraThe = 1;	
	m_nAll = 1;
}
void CDanhSachLuuTru::OnKetThuc_TraTheSelect()
{
	m_nDoi_Luu_Tru = 1;
	m_nDang_Luu_Tru = 1;
	m_nKetThuc_TraThe = 0;	
	m_nAll = 1;	
}
void CDanhSachLuuTru::OnAllSelect()

{
	m_nDoi_Luu_Tru = 1;
	m_nDang_Luu_Tru = 1;
	m_nKetThuc_TraThe = 1;	
	m_nAll = 0;
}
	void CDanhSachLuuTru::OnKhoa_Gui_DenSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CDanhSachLuuTru::OnNgoai_TruSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

int CDanhSachLuuTru::OnAddDanhSachLuuTru()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CDanhSachLuuTru::OnEditDanhSachLuuTru(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CDanhSachLuuTru::OnDeleteDanhSachLuuTru(){
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
 		OnCancelDanhSachLuuTru();
 	}
	return 0;
}
int CDanhSachLuuTru::OnSaveDanhSachLuuTru(){
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
 		//OnDanhSachLuuTruListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CDanhSachLuuTru::OnCancelDanhSachLuuTru(){
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
int CDanhSachLuuTru::OnDanhSachLuuTruListLoadData(){
	return 0;
}



int CDanhSachLuuTru::OnDeptListCheckAll()
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

int CDanhSachLuuTru::OnDeptListUnCheckAll()
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


int CDanhSachLuuTru::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (!m_wndObjectList.GetCheck(i))
		{
			m_wndObjectList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CDanhSachLuuTru::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			m_wndObjectList.SetCheck(i, FALSE);
		}
	}
	return 0;
}
CString CDanhSachLuuTru::GetQueryString()
{
	CString szSQL, szWhere, szDepts, szObjects, szPackages;

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	
	for (int i = 0; i < m_wndPackageList.GetItemCount(); i++)
	{
		if (m_wndPackageList.GetCheck(i))
		{
			if (!szPackages.IsEmpty())
				szPackages += _T(",");
			szPackages.AppendFormat(_T("'%s'"), m_wndPackageList.GetItemText(i, 0));
		}
	}	
	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and object_id in(%s) "), szObjects);
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and HFE_DEPTID in(%s) "), szDepts);
	}
	if (!szPackages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfel_itemid in(%s) "), szPackages);
	}
	
	if (m_nDoi_Luu_Tru == 0)
	{
		szWhere.AppendFormat(_T("and hfe_status in ('I') and hfe_orderdate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"),m_szFromDate, m_szToDate);
	}
	if (m_nDang_Ky_Ngoai_Gio == 0)
	{
		
		szWhere.AppendFormat(_T("and hfe_status in ('I') and hfe_orderdate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"),m_szFromDate, m_szToDate);
	}

	else if (m_nDang_Luu_Tru == 0)
	{
		szWhere.AppendFormat(_T("and hfe_status in ('I') and hfe_orderdate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"),m_szFromDate, m_szToDate);
	}

	else if (m_nKetThuc_TraThe == 0)
	{
		szWhere.AppendFormat(_T("and hfe_status in ('T', 'R') and HFE_ENDDATE between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"),m_szFromDate, m_szToDate);
	}
	else if(m_nAll == 0)
	{
		szWhere.AppendFormat(_T("and hfe_status in ('S','O','T','R') and hfe_orderdate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"),m_szFromDate, m_szToDate);
	}

	if (m_bKhoa_Gui_Den)
	{
		
	szWhere.AppendFormat(_T("and hfe_deptid not in ('CTXH')"));
	
	}

	if (m_bNgoai_Tru)
	{
		
	szWhere.AppendFormat(_T("and hfe_deptid in ('CTXH')"));
	
	}

	szSQL.Format(_T(" SELECT hfe_docno AS docno,hfe_fee_extra_id,") \
		_T("     HFE_DEPTID deptid,") \
		_T("     trim( hp_surname") \
		_T("     ||' '") \
		_T("     ||hp_midname") \
		_T("     ||' '") \
		_T("     ||hp_firstname) AS pname,") \
		_T("     TO_CHAR(hp_birthdate, 'YYYY')                   AS yob,    ") \
		_T("     hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T("     hd_telephone") \
		_T("     ||','") \
		_T("     ||hd_contacttel AS phone,") \
		_T("     hfel_itemid, hfel_desc, hfe_status,") \
		_T("     TO_CHAR(hfe_orderdate,'DD/MM/YYYY HH24:MI') AS begindate,") \
		_T("     TO_CHAR(hfe_enddate,'DD/MM/YYYY HH24:MI')   AS enddate   ") \
		_T("   FROM hms_patient") \
		_T("   LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
		_T("   LEFT JOIN hms_fee_extra") \
		_T("   ON(hp_patientno = HFE_PATIENTNO AND hfe_docno = hd_docno AND hfe_type ='S')") \
		_T("   LEFT JOIN hms_fee_extraline") \
		_T("   ON (hfe_docno        =hfel_docno") \
		_T("   AND hfe_fee_extra_id=hfel_fee_extra_id)") \
		_T("   WHERE 1             =1 AND hfel_itemid in (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE' AND ss_vndesc in ('GNLT','GNNOLPB')) %s") \
		_T(" GROUP BY hfe_docno, hfe_fee_extra_id, HFE_DEPTID, hp_surname,hp_midname, hp_firstname, hp_birthdate, ") \
		_T("   hd_provid,hp_provid,hd_distid,hp_distid,hd_villid,hp_villid, ") \
		_T(" hd_telephone,hd_contacttel,hfel_itemid, hfel_desc, hfe_orderdate,hfe_enddate,hfe_status ")\
		_T("   ORDER BY HFE_DEPTID,hfe_orderdate"), szWhere);	
		
	return szSQL;
}