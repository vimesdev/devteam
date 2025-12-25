#include "stdafx.h"
#include "VPM_THONGKENGUOINHAOLAI.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CThongKeNguoiNhaOLai *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CThongKeNguoiNhaOLai* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CThongKeNguoiNhaOLai *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CThongKeNguoiNhaOLai *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CThongKeNguoiNhaOLai *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportToExcelSelectFnc(CWnd *pWnd)
{
	CThongKeNguoiNhaOLai *pVw = (CThongKeNguoiNhaOLai *)pWnd;
	pVw->OnExportToExcelSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CThongKeNguoiNhaOLai*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CThongKeNguoiNhaOLai*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CThongKeNguoiNhaOLai*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CThongKeNguoiNhaOLai*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnDeptListDeleteItem();
} 
static void _OnDeptSendSelectFnc(CWnd *pWnd){
	 ((CThongKeNguoiNhaOLai*)pWnd)->OnDeptSendSelect();
}
static long _OnPackageListLoadDataFnc(CWnd *pWnd){
	return ((CThongKeNguoiNhaOLai*)pWnd)->OnPackageListLoadData();
} 
static void _OnPackageListDblClickFnc(CWnd *pWnd){
	((CThongKeNguoiNhaOLai*)pWnd)->OnPackageListDblClick();
} 
static void _OnPackageListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CThongKeNguoiNhaOLai*)pWnd)->OnPackageListSelectChange(nOldItem, nNewItem);
} 
static int _OnPackageListDeleteItemFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnPackageListDeleteItem();
} 
static void _OnStayInSelectFnc(CWnd *pWnd){
	 ((CThongKeNguoiNhaOLai*)pWnd)->OnStayInSelect();
}
static void _OnFinishStayInSelectFnc(CWnd *pWnd){
	 ((CThongKeNguoiNhaOLai*)pWnd)->OnFinishStayInSelect();
}
static void _OnPostedSelectFnc(CWnd *pWnd){
	  ((CThongKeNguoiNhaOLai*)pWnd)->OnPostedSelect();
}
static int _OnAddCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnAddCFMServicePackageIncomeList();
} 
static int _OnEditCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnEditCFMServicePackageIncomeList();
} 
static int _OnDeleteCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnDeleteCFMServicePackageIncomeList();
} 
static int _OnSaveCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnSaveCFMServicePackageIncomeList();
} 
static int _OnCancelCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnCancelCFMServicePackageIncomeList();
}

static void _OnDoi_Luu_TruSelectFnc(CWnd *pWnd){
	  ((CThongKeNguoiNhaOLai*)pWnd)->OnDoi_Luu_TruSelect();
}
static void _OnDang_Luu_TruSelectFnc(CWnd *pWnd){
	  ((CThongKeNguoiNhaOLai*)pWnd)->OnDang_Luu_TruSelect();
}
static void _OnKetThuc_TraTheSelectFnc(CWnd *pWnd){
	  ((CThongKeNguoiNhaOLai*)pWnd)->OnKetThuc_TraTheSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CThongKeNguoiNhaOLai*)pWnd)->OnAllSelect();
}
static void _OnKhoa_Gui_DenSelectFnc(CWnd *pWnd){
	 ((CThongKeNguoiNhaOLai*)pWnd)->OnKhoa_Gui_DenSelect();
}
static void _OnNgoai_TruSelectFnc(CWnd *pWnd){
	 ((CThongKeNguoiNhaOLai*)pWnd)->OnNgoai_TruSelect();
}

static int _OnAddDanhSachLuuTruFnc(CWnd *pWnd)
{
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnAddDanhSachLuuTru();
} 
static int _OnEditDanhSachLuuTruFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnEditDanhSachLuuTru();
} 
static int _OnDeleteDanhSachLuuTruFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnDeleteDanhSachLuuTru();
} 
static int _OnSaveDanhSachLuuTruFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnSaveDanhSachLuuTru();
} 
static int _OnCancelDanhSachLuuTruFnc(CWnd *pWnd){
	 return ((CThongKeNguoiNhaOLai*)pWnd)->OnCancelDanhSachLuuTru();
} 
static int _OnObjectListCheckAllFnc(CWnd *pWnd)
{
	return ((CThongKeNguoiNhaOLai*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd)
{
	return ((CThongKeNguoiNhaOLai*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd)
{
	return ((CThongKeNguoiNhaOLai*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd)
{
	return ((CThongKeNguoiNhaOLai*)pWnd)->OnDeptListUnCheckAll();
}
static void _OnDang_Ky_Ngoai_GioSelectFnc(CWnd *pWnd){
	  ((CThongKeNguoiNhaOLai*)pWnd)->OnDang_Ky_Ngoai_GioSelect();
}

CThongKeNguoiNhaOLai::CThongKeNguoiNhaOLai(CWnd *pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CThongKeNguoiNhaOLai::~CThongKeNguoiNhaOLai()
{

}
void CThongKeNguoiNhaOLai::OnCreateComponents()
{
	
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

	/*m_wndDoi_Luu_Tru.Create(this, _T("Đăng ký trong ngày"), 10, 455, 255, 480);
	m_wndDang_Luu_Tru.Create(this, _T("Dang_Luu_Tru"), 10, 486, 139, 511);
	m_wndKetThuc_TraThe.Create(this, _T("KetThuc_TraThe"), 144, 486, 273, 511);
	m_wndAll.Create(this, _T("All"), 278, 486, 500, 511);
	m_wndKhoa_Gui_Den.Create(this, _T("Khoa_Gui_Den"), 10, 517, 166, 542);
	m_wndNgoai_Tru.Create(this, _T("Ngoai_Tru"), 173, 517, 329, 542);
	m_wndDang_Ky_Ngoai_Gio.Create(this, _T("Đăng ký ngoài giờ"), 260, 455, 500, 480);*/


	m_wndDoi_Luu_Tru.Create(this, _T("Đăng ký trong ngày"), 0, 0, 0, 0);
	m_wndDang_Luu_Tru.Create(this, _T("Dang_Luu_Tru"), 0, 0, 0, 0);
	m_wndKetThuc_TraThe.Create(this, _T("KetThuc_TraThe"), 0, 0, 0, 0);
	m_wndAll.Create(this, _T("All"), 0, 0, 0, 0);
	m_wndKhoa_Gui_Den.Create(this, _T("Khoa_Gui_Den"), 0, 0, 0, 0);
	m_wndNgoai_Tru.Create(this, _T("Ngoai_Tru"), 0, 0, 0, 0);
	m_wndDang_Ky_Ngoai_Gio.Create(this, _T("Đăng ký ngoài giờ"), 0, 0, 0, 0);
}
void CThongKeNguoiNhaOLai::OnInitializeComponents()
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
void CThongKeNguoiNhaOLai::OnSetWindowEvents(){
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
void CThongKeNguoiNhaOLai::OnDoDataExchange(CDataExchange* pDX){
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
void CThongKeNguoiNhaOLai::UpdateJson(BOOL bSave){
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
void CThongKeNguoiNhaOLai::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CThongKeNguoiNhaOLai::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CThongKeNguoiNhaOLai::SetDefaultValues(){

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
int CThongKeNguoiNhaOLai::SetMode(int nMode){
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
/*void CThongKeNguoiNhaOLai::OnYearChange(){
	
} */
/*void CThongKeNguoiNhaOLai::OnYearSetfocus(){
	
} */
/*void CThongKeNguoiNhaOLai::OnYearKillfocus(){
	
} */
void CThongKeNguoiNhaOLai::OnDang_Ky_Ngoai_GioSelect()
{
	AfxMessageBox(_T("Nhớ chọn thời gian từ 18h hôm trước đến 7h sáng hôm sau khi chạy báo cáo"));
}
int CThongKeNguoiNhaOLai::OnYearCheckValue(){
	return 0;
} 
void CThongKeNguoiNhaOLai::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CThongKeNguoiNhaOLai::OnReportPeriodSelendok(){
    CString tmpStr;
    CDate dte;
    UpdateData(true);
    int nMonth = ToInt(m_szReportPeriodKey);
    if (nMonth > 0 && nMonth <= 12)
    {
        m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
        dte.ParseDate(m_szFromDate);
        m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth,
                          dte.GetMonthLastDay());
    }
    if (nMonth == 13)
    {
        m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
        tmpStr.Format(_T("%.4d/03/01"), m_nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,
                          dte.GetMonthLastDay());
    }
    if (nMonth == 14)
    {
        m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
        tmpStr.Format(_T("%.4d/06/01"), m_nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear,
                          dte.GetMonthLastDay());
    }
    if (nMonth == 15)
    {
        m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
        tmpStr.Format(_T("%.4d/09/01"), m_nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear,
                          dte.GetMonthLastDay());
    }
    if (nMonth == 16)
    {
        m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
        tmpStr.Format(_T("%.4d/10/01"), m_nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear,
                          dte.GetMonthLastDay());
    }
    if (nMonth == 17)
    {
        m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
        tmpStr.Format(_T("%.4d/12/01"), m_nYear);
        dte.ParseDate(tmpStr);
        m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear,
                          dte.GetMonthLastDay());
    }
    UpdateData(false);
}
/*void CThongKeNguoiNhaOLai::OnReportPeriodSetfocus(){
	
}*/
/*void CThongKeNguoiNhaOLai::OnReportPeriodKillfocus(){
	
}*/
long CThongKeNguoiNhaOLai::OnReportPeriodLoadData(){
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
    {
        szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
    };
    m_wndReportPeriod.DeleteAllItems();
    int nCount = 0;
    szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "),
                 szWhere);
    nCount = rs.ExecSQL(szSQL);
    while (!rs.IsEOF())
    {
        m_wndReportPeriod.AddItems(rs.GetValue(_T("hpr_idx")),
                                   rs.GetValue(_T("hpr_name")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CThongKeNguoiNhaOLai::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CThongKeNguoiNhaOLai::OnFromDateChange(){
	
} */
/*void CThongKeNguoiNhaOLai::OnFromDateSetfocus(){
	
} */
/*void CThongKeNguoiNhaOLai::OnFromDateKillfocus(){
	
} */
int CThongKeNguoiNhaOLai::OnFromDateCheckValue(){
	return 0;
} 
/*void CThongKeNguoiNhaOLai::OnToDateChange(){
	
} */
/*void CThongKeNguoiNhaOLai::OnToDateSetfocus(){
	
} */
/*void CThongKeNguoiNhaOLai::OnToDateKillfocus(){
	
} */
int CThongKeNguoiNhaOLai::OnToDateCheckValue(){
	return 0;
} 
void CThongKeNguoiNhaOLai::OnExportToExcelSelect()
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
	if (!xls.Load(_T("Exports\\BCCTXH_THONGKENGUOINHAOLAI.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

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

		rs.GetValue(_T("card"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("cardEX"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("yob"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ObjectName"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("CardNo"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phone"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("relative"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfel_desc"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("begindate"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("enddate"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfe_status"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT | FMT_CENTER);

		rs.GetValue(_T("note"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("WHO_CAPTHE"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("who_ketthuc"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("who_trathe"), tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfe_noteex"), tmpStr);
		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_TEXT);
		
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
	
	xls.Save(_T("Exports\\BCCTXH_THONGKENGUOINHAOLAI2.xls"));
} 
void CThongKeNguoiNhaOLai::OnObjectListDblClick(){
	
} 
void CThongKeNguoiNhaOLai::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CThongKeNguoiNhaOLai::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CThongKeNguoiNhaOLai::OnObjectListLoadData()
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
void CThongKeNguoiNhaOLai::OnDeptListDblClick(){
	
} 
void CThongKeNguoiNhaOLai::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CThongKeNguoiNhaOLai::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CThongKeNguoiNhaOLai::OnDeptListLoadData()
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
	void CThongKeNguoiNhaOLai::OnDeptSendSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CThongKeNguoiNhaOLai::OnPackageListDblClick(){
	
} 
void CThongKeNguoiNhaOLai::OnPackageListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CThongKeNguoiNhaOLai::OnPackageListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CThongKeNguoiNhaOLai::OnPackageListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndPackageList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("select hfl_feeid AS id, hfl_name AS name, hfl_servprice AS price from hms_fee_list left join sys_sel ON (hfl_feeid=ss_code) where hfl_typeid='X' and hfl_active='Y' ") \
		         _T("and hfl_feeid in (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE' AND ss_vndesc in ('GNNOLPB')) order by ss_vndesc"));				 

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
	void CThongKeNguoiNhaOLai::OnStayInSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CThongKeNguoiNhaOLai::OnFinishStayInSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CThongKeNguoiNhaOLai::OnPostedSelect(){
	
}
int CThongKeNguoiNhaOLai::OnAddCFMServicePackageIncomeList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CThongKeNguoiNhaOLai::OnEditCFMServicePackageIncomeList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CThongKeNguoiNhaOLai::OnDeleteCFMServicePackageIncomeList(){
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
int CThongKeNguoiNhaOLai::OnSaveCFMServicePackageIncomeList(){
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
int CThongKeNguoiNhaOLai::OnCancelCFMServicePackageIncomeList(){
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
int CThongKeNguoiNhaOLai::OnCFMServicePackageIncomeListListLoadData(){
	return 0;
}

void CThongKeNguoiNhaOLai::OnDoi_Luu_TruSelect()
{
	m_nDoi_Luu_Tru = 0;
	m_nDang_Luu_Tru = 1;
	m_nKetThuc_TraThe = 1;
	m_nAll = 1;
}
void CThongKeNguoiNhaOLai::OnDang_Luu_TruSelect()
{
	m_nDoi_Luu_Tru = 1;
	m_nDang_Luu_Tru = 0;
	m_nKetThuc_TraThe = 1;	
	m_nAll = 1;
}
void CThongKeNguoiNhaOLai::OnKetThuc_TraTheSelect()
{
	m_nDoi_Luu_Tru = 1;
	m_nDang_Luu_Tru = 1;
	m_nKetThuc_TraThe = 0;	
	m_nAll = 1;	
}
void CThongKeNguoiNhaOLai::OnAllSelect()

{
	m_nDoi_Luu_Tru = 1;
	m_nDang_Luu_Tru = 1;
	m_nKetThuc_TraThe = 1;	
	m_nAll = 0;
}
	void CThongKeNguoiNhaOLai::OnKhoa_Gui_DenSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CThongKeNguoiNhaOLai::OnNgoai_TruSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

int CThongKeNguoiNhaOLai::OnAddDanhSachLuuTru()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CThongKeNguoiNhaOLai::OnEditDanhSachLuuTru(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CThongKeNguoiNhaOLai::OnDeleteDanhSachLuuTru(){
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
int CThongKeNguoiNhaOLai::OnSaveDanhSachLuuTru(){
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
int CThongKeNguoiNhaOLai::OnCancelDanhSachLuuTru(){
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
int CThongKeNguoiNhaOLai::OnDanhSachLuuTruListLoadData(){
	return 0;
}



int CThongKeNguoiNhaOLai::OnDeptListCheckAll()
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

int CThongKeNguoiNhaOLai::OnDeptListUnCheckAll()
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


int CThongKeNguoiNhaOLai::OnObjectListCheckAll()
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

int CThongKeNguoiNhaOLai::OnObjectListUnCheckAll()
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
CString CThongKeNguoiNhaOLai::GetQueryString()
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
		szWhere.AppendFormat(_T(" and hd_object in(%s) "), szObjects);
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
		szWhere.AppendFormat(_T("and hfe_status in ('S', 'O', 'T', 'R', 'I', 'M') and hfe_orderdate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"),m_szFromDate, m_szToDate);
	}

	if (m_bKhoa_Gui_Den)
	{
		
	szWhere.AppendFormat(_T("and hfe_deptid not in ('CTXH')"));
	
	}

	if (m_bNgoai_Tru)
	{
		
	szWhere.AppendFormat(_T("and hfe_deptid in ('CTXH')"));
	
	}
	szSQL.Format(_T(" SELECT ") \
		_T("   hfe_fee_extra_id,") \
		_T("   HFE_DEPTID deptid,") \
		_T("   hfe_docno AS docno,") \
		_T("   HFE_CARDNUMBER AS card,") \
		_T("   HFE_CARDNUMBEREX AS cardEX,") \
		_T("   trim( hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                                 AS pname,") \
		_T("   TO_CHAR(hp_birthdate, 'YYYY')                   AS yob,") \
		_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T("   HMS_GETOBJECTNAME(hd_object) as ObjectName,") \
		_T("   HD_CARDNO as CardNo,") \
		_T("   hd_telephone") \
		_T("   ||','") \
		_T("   ||hd_contacttel AS phone,") \
		_T("   LISTAGG(CAST(hr_name AS VARCHAR2(1024)), ', ') WITHIN GROUP (ORDER BY hr_relative_id) AS relative,") \
		_T("   hfel_itemid,") \
		_T("   hfel_desc,") \
		_T("   TO_CHAR(hfe_orderdate,'DD/MM/YYYY HH24:MI') AS begindate,") \
		_T("   TO_CHAR(hfe_enddate,'DD/MM/YYYY HH24:MI')   AS enddate,") \
		_T("   hfe_status,") \
		_T("   HFE_NOTE as note,") \
		_T("   WHO_CAPTHE,") \
		_T("   who_ketthuc,") \
		_T("   who_trathe,") \
		_T("   hfe_noteex") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_fee_extra") \
		_T(" ON(hp_patientno = HFE_PATIENTNO") \
		_T(" AND hfe_docno   = hd_docno") \
		_T(" AND hfe_type    ='S')") \
		_T(" LEFT JOIN hms_fee_extraline") \
		_T(" ON (hfe_docno       =hfel_docno") \
		_T(" AND hfe_fee_extra_id=hfel_fee_extra_id)") \
		_T(" LEFT JOIN hms_relative ON (hd_docno = hr_docno)") \
		_T(" WHERE 1             =1") \
		_T(" AND hfel_itemid    IN") \
		_T("   (SELECT ss_code") \
		_T("   FROM sys_sel") \
		_T("   WHERE ss_id    ='HMS_SERVICE_PACKAGE'") \
		_T("   AND ss_vndesc IN ('GNNOLPB')") \
		_T("   )") \
		_T(" AND hfe_status IN ('S','O','T','R', 'I', 'M')") \
		_T(" %s") \
		_T(" GROUP BY hfe_docno,") \
		_T("   hfe_fee_extra_id,") \
		_T("   HFE_DEPTID,") \
		_T("   hp_surname,") \
		_T("   hp_midname,") \
		_T("   hp_firstname,") \
		_T("   hp_birthdate,") \
		_T("   hd_provid,") \
		_T("   hp_provid,") \
		_T("   hd_distid,") \
		_T("   hp_distid,") \
		_T("   hd_villid,") \
		_T("   hp_villid,") \
		_T("   hd_telephone,") \
		_T("   hd_contacttel,") \
		_T("   hfel_itemid,") \
		_T("   hfel_desc,") \
		_T("   hfe_orderdate,") \
		_T("   hfe_enddate,") \
		_T("   hfe_status,") \
		_T("   hd_object,") \
		_T("   HFE_CARDNUMBER,") \
		_T("   HFE_CARDNUMBEREX,") \
		_T("   HD_CARDNO,") \
		_T("   HFE_NOTE,") \
		_T("   WHO_CAPTHE,") \
		_T("   who_ketthuc,") \
		_T("   who_trathe,") \
		_T("   hfe_noteex") \
		_T(" ORDER BY HFE_DEPTID,") \
		_T("   hfe_orderdate"), szWhere);

	return szSQL;
}