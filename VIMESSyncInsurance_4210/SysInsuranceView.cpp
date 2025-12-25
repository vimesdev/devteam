#include "SysInsuranceView.h"
#include "MainFrm.h"
#include "Excel.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include "shlobj.h"
#include <string>
using namespace std;
#pragma comment(lib, "../lib/libxml.lib")
#include "libxml/LibXMLHelper.h"
#include "libxml/UTF8Conv.h"
#include <atlenc.h>
#include "HttpClient.h"
#include "ImportListDocument.h"
#include "fml.h"

static int _OnExportInsuranceReportFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnExportInsuranceReport();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceView *)pWnd)->OnToDateCheckValue();
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CSysInsuranceView*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CSysInsuranceView*)pWnd)->OnInPatientSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CSysInsuranceView*)pWnd)->OnAllSelect();
}
static void _OnLoadSelectFnc(CWnd *pWnd){
	CSysInsuranceView *pVw = (CSysInsuranceView *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportXmlSelectFnc(CWnd *pWnd){
	CSysInsuranceView *pVw = (CSysInsuranceView *)pWnd;
	pVw->OnExportXmlSelect();
} 
/*static void _OnDocnoChangeFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnDocnoChange();
} */
/*static void _OnDocnoSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnDocnoSetfocus();} */ 
/*static void _OnDocnoKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnDocnoKillfocus();
} */
static int _OnDocnoCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceView *)pWnd)->OnDocnoCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysInsuranceView* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CSysInsuranceView *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnStatusAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysInsuranceView* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CSysInsuranceView *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnDeptAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceView *)pWnd)->OnPatientNameCheckValue();
} 
static long _OnListPatientLoadDataFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnListPatientLoadData();
} 
static void _OnListPatientDblClickFnc(CWnd *pWnd){
	((CSysInsuranceView*)pWnd)->OnListPatientDblClick();
} 
static void _OnListPatientSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysInsuranceView*)pWnd)->OnListPatientSelectChange(nOldItem, nNewItem);
} 
static int _OnListPatientDeleteItemFnc(CWnd *pWnd){
	 return ((CSysInsuranceView*)pWnd)->OnListPatientDeleteItem();
} 
static int _OnListChangeMonthQTFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnListChangeMonthQT();
}

/*static void _OntotalChangeFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OntotalChange();
} */
/*static void _OntotalSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OntotalSetfocus();} */ 
/*static void _OntotalKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OntotalKillfocus();
} */
static int _OntotalCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceView *)pWnd)->OntotalCheckValue();
} 
/*static void _OnsendedChangeFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnsendedChange();
} */
/*static void _OnsendedSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnsendedSetfocus();} */ 
/*static void _OnsendedKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnsendedKillfocus();
} */
static int _OnsendedCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceView *)pWnd)->OnsendedCheckValue();
} 
/*static void _OnCancedChangeFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnCancedChange();
} */
/*static void _OnCancedSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnCancedSetfocus();} */ 
/*static void _OnCancedKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnCancedKillfocus();
} */
static int _OnCancedCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceView *)pWnd)->OnCancedCheckValue();
} 
/*static void _OnDirectoryChangeFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnDirectoryChange();
} */
/*static void _OnDirectorySetfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnDirectorySetfocus();} */ 
/*static void _OnDirectoryKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceView *)pWnd)->OnDirectoryKillfocus();
} */
static void _OnOpenSelectFnc(CWnd *pWnd){
	CSysInsuranceView *pVw = (CSysInsuranceView *)pWnd;
	pVw->OnOpenSelect();
} 
static int _OnDirectoryCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceView *)pWnd)->OnDirectoryCheckValue();
} 
static void _OnbrowseSelectFnc(CWnd *pWnd){
	CSysInsuranceView *pVw = (CSysInsuranceView *)pWnd;
	pVw->OnbrowseSelect();
} 
static int _OnAddSysInsuranceViewFnc(CWnd *pWnd){
	 return ((CSysInsuranceView*)pWnd)->OnAddSysInsuranceView();
} 
static int _OnEditSysInsuranceViewFnc(CWnd *pWnd){
	 return ((CSysInsuranceView*)pWnd)->OnEditSysInsuranceView();
} 
static int _OnDeleteSysInsuranceViewFnc(CWnd *pWnd){
	 return ((CSysInsuranceView*)pWnd)->OnDeleteSysInsuranceView();
} 
static int _OnSaveSysInsuranceViewFnc(CWnd *pWnd){
	 return ((CSysInsuranceView*)pWnd)->OnSaveSysInsuranceView();
} 
static int _OnCancelSysInsuranceViewFnc(CWnd *pWnd){
	 return ((CSysInsuranceView*)pWnd)->OnCancelSysInsuranceView();
} 
static int _OnReCheckOutFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnReCheckOut();
}
static int _OnReCheckOutPatientErrorFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnReCheckOutPatientError();
}

static int _OnMarkAllFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnMarkAll();
}
static int _OnUnMarkAllFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnUnMarkAll();
}
static int _OnUnApproveFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnUnApprove();
}
static int _OnExportFileTongHopFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnExportFileTongHop();
} 
static int _OnExportFileTongHopNotSendFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnExportFileTongHopNotSend();
} 
static int _OnDeleteDaTaFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnDeleteDaTa();
}
static int _OnExportBHFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnExportBH();
} 
static int _OnCheckDocumentErrorFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnCheckDocumentError();
}
static int _OnCheckLoiCacHoSoDaTaoFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnCheckLoiCacHoSoDaTao();
} 
static int _OnExportDrugNotMapFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnExportDrugNotMap();
}
static int _OnCheckDocumentWarningFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnCheckDocumentWarning();
}

static int _OnImportListPatientFromExcelFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnImportListPatientFromExcel();
}



static int _OnImportListPatientByMaLKFnc(CWnd *pWnd){
	return ((CSysInsuranceView*)pWnd)->OnImportListPatientByMaLK();
}
static int _OnExportPatientListToExcel(CWnd *pWnd)
{
	return ((CSysInsuranceView*)pWnd)->ExportPatientListToExcel();
}
static void _OnLoadFromTmpTableSelectFnc(CWnd *pWnd)
{
	 ((CSysInsuranceView*)pWnd)->OnLoadFromTmpTableSelect();
}
static void _OnShowDiffSelectFnc(CWnd *pWnd)
{
	 ((CSysInsuranceView*)pWnd)->OnShowDiffSelect();
}

CSysInsuranceView::CSysInsuranceView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 733;
	SetDefaultValues();
}
CSysInsuranceView::~CSysInsuranceView(){
}
void CSysInsuranceView::OnCreateComponents(){
	m_wndGrp1.Create(this, _T("BHYT"), 5, 5, 1014, 124);
	m_wndFromDateLabel.Create(this, _T("From Date"), 9, 32, 89, 57);
	m_wndFromDate.Create(this,94, 32, 214, 57); 
	m_wndToDateLabel.Create(this, _T("To Date"), 9, 62, 89, 87);
	m_wndToDate.Create(this,94, 62, 214, 87); 
	m_wndOutPatient.Create(this, _T("Out Patient"), 219, 32, 357, 57);
	m_wndInPatient.Create(this, _T("In Patient"), 219, 62, 357, 87);
	m_wndAll.Create(this, _T("All"), 219, 92, 357, 117);
	m_wndLoad.Create(this, _T("&Load"), 934, 31, 1009, 56);
	m_wndExportXml.Create(this, _T("&Export XML"), 934, 60, 1009, 85);
	m_wndDocnoLabel.Create(this, _T("Doc No"), 362, 32, 442, 57);
	m_wndDocno.Create(this,447, 32, 577, 57); 
	m_wndStatusLabel.Create(this, _T("Status"), 362, 62, 442, 87);
	m_wndStatus.Create(this,447, 62, 577, 87); 
	m_wndDeptIDLaBel.Create(this, _T("Dept"), 362, 92, 442, 117);
	m_wndDept.Create(this,447, 92, 577, 117); 
	m_wndPatientNameLabel.Create(this, _T("CardNo"), 583, 32, 677, 57);
	m_wndPatientName.Create(this,682, 32, 929, 57); 
	m_wndListPatient.Create(this,5, 133, 1014, 615); 
	m_wndTotalLabel.Create(this, _T("Total"), 583, 62, 677, 87);
	m_wndtotal.Create(this,682, 62, 762, 87); 
	m_wndSendedLabel.Create(this, _T("Sended"), 583, 92, 677, 117);
	m_wndsended.Create(this,682, 92, 762, 117); 
	m_wndCancedLabel.Create(this, _T("Canced"), 766, 62, 846, 87);
	m_wndCanced.Create(this,851, 62, 931, 87);
	m_wndQNOject.Create(this, _T("Chỉ lấy QN CA CY"), 766, 90, 900, 110);
	m_wndBHBQP.Create(this, _T("Thẻ BQP"), 905, 90, 1010, 110);
	m_wndBHXH.Create(this, _T("Thẻ BHXH HN"), 905, 120, 1010, 140); 

	m_wndOpen.Create(this, _T("Open Dir"), 558, 620, 638, 645);
	m_wndDirectory.Create(this,643, 620, 963, 645); 
	m_wndbrowse.Create(this, _T("..."), 969, 620, 998, 645);
	m_wndLoadFromTmpTable.Create(this, _T("View từ table tạm"), 9, 620, 141, 645);
	m_wndShowDiff.Create(this, _T("BN Lệch BHTT"), 155, 620, 300, 645);

}
void CSysInsuranceView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDocno.SetLimitText(8);
	m_wndDocno.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndPatientName.SetLimitText(15);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.ModifyStyle (0,ES_UPPERCASE);

	m_wndPatientName.SetInitCap(true);
	m_wndtotal.SetLimitText(35);
	m_wndtotal.SetCheckValue(true);
	m_wndsended.SetLimitText(35);
	m_wndsended.SetCheckValue(true);
	m_wndCanced.SetLimitText(35);
	m_wndCanced.SetCheckValue(true);

	m_wndDirectory.SetLimitText(1024);
	m_wndDirectory.SetCheckValue(true);
	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	
	m_wndListPatient.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndListPatient.InsertColumn(1, _T("DocNo"), CFMT_TEXT, 80);
	m_wndListPatient.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndListPatient.InsertColumn(3, _T("Year Of Birth"), CFMT_TEXT, 0);
	m_wndListPatient.InsertColumn(4, _T("CardNo"), CFMT_TEXT, 140);
	m_wndListPatient.InsertColumn(5, _T("Dept"), CFMT_TEXT, 50);
	m_wndListPatient.InsertColumn(6, _T("Admit Date"), CFMT_DATETIME, 125);
	m_wndListPatient.InsertColumn(7, _T("Discharge Date"), CFMT_DATETIME, 125);
	m_wndListPatient.InsertColumn(8, _T("phoi_t_chi"), CFMT_MONEY, 100);
	m_wndListPatient.InsertColumn(9, _T("xml_t_chi"), CFMT_MONEY, 100);
	m_wndListPatient.InsertColumn(10, _T("phoi_t_bhtt"), CFMT_MONEY, 100);
	m_wndListPatient.InsertColumn(11, _T("xml_t_bhtt"), CFMT_MONEY, 100);
	m_wndListPatient.InsertColumn(12, _T("phoi_t_bntt"), CFMT_MONEY, 100);
	m_wndListPatient.InsertColumn(13, _T("xml_t_bntt"), CFMT_MONEY, 100);
	m_wndListPatient.InsertColumn(14, _T("Sended"), CFMT_TEXT, 50);
	m_wndListPatient.InsertColumn(15, _T("Invoiceno"), CFMT_TEXT, 80);
	m_wndListPatient.InsertColumn(16, _T("ma_lk"), CFMT_TEXT, 80);
	m_wndListPatient.InsertColumn(17, _T("Ngày TT"), CFMT_DATETIME, 125);
	m_wndListPatient.SetCheckBox(true);

}
void CSysInsuranceView::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExportXml.SetEvent(WE_CLICK, _OnExportXmlSelectFnc);
	//m_wndDocno.SetEvent(WE_CHANGE, _OnDocnoChangeFnc);
	//m_wndDocno.SetEvent(WE_SETFOCUS, _OnDocnoSetfocusFnc);
	//m_wndDocno.SetEvent(WE_KILLFOCUS, _OnDocnoKillfocusFnc);
	m_wndDocno.SetEvent(WE_CHECKVALUE, _OnDocnoCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));
	SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize()+3, true);
	m_wndListPatient.SetEvent(WE_SELCHANGE, _OnListPatientSelectChangeFnc);
	m_wndListPatient.SetEvent(WE_LOADDATA, _OnListPatientLoadDataFnc);
	m_wndListPatient.SetEvent(WE_DBLCLICK, _OnListPatientDblClickFnc);
	m_wndLoadFromTmpTable.SetEvent(WE_CLICK, _OnLoadFromTmpTableSelectFnc);
	//m_wndListPatient.AddEvent(1, _T("Delete"), _OnListPatientDeleteItemFnc, 0, VK_DELETE, 0);
	
	m_wndListPatient.AddEvent(11,_T("Mark All"), _OnMarkAllFnc);
	m_wndListPatient.AddEvent(0,_T("-"), NULL);
	m_wndListPatient.AddEvent(12,_T("UnMark"), _OnUnMarkAllFnc);
	m_wndListPatient.AddEvent(0,_T("-"), NULL);

	m_wndListPatient.AddEvent(1,_T("Tạo dữ liệu"), _OnReCheckOutFnc);
	m_wndListPatient.AddEvent(2,_T("Hủy Duyệt"), _OnUnApproveFnc);
//	m_wndListPatient.AddEvent(3,_T("Tạo FILE XML tổng hợp"), _OnExportFileTongHopFnc);
	m_wndListPatient.AddEvent(4,_T("Xuất Dữ Liệu BH To Exel"), _OnExportBHFnc);
	m_wndListPatient.AddEvent(5,_T("Xóa Dữ liệu từ ngày đến ngày"), _OnDeleteDaTaFnc);
	//m_wndListPatient.AddEvent(6,_T("Tìm hồ sơ sai theo số hồ sơ của VAS"), _OnCheckDocumentErrorFnc);
	//m_wndListPatient.AddEvent(7,_T("Tìm hồ sơ sai trong dữ liệu VIMES"), _OnCheckLoiCacHoSoDaTaoFnc);
	//m_wndListPatient.AddEvent(8,_T("Tìm hồ sơ cảnh bảo ( Thuốc - DVKT)"), _OnCheckDocumentWarningFnc);
	m_wndListPatient.AddEvent(9,_T("Tạo dữ liệu cho bệnh nhân lỗi "), _OnReCheckOutPatientErrorFnc);
//	m_wndListPatient.AddEvent(10,_T("Tạo FILE XML tổng hợp chưa tạo dữ liệu XML"), _OnExportFileTongHopNotSendFnc);
	m_wndListPatient.AddEvent(11,_T("Import list patient From Excel"),_OnImportListPatientFromExcelFnc);
	m_wndListPatient.AddEvent(16,_T("Load danh sách theo mã liên kết"),_OnImportListPatientByMaLKFnc);

	m_wndListPatient.AddEvent(13,_T("Change Month QT"),_OnListChangeMonthQTFnc);

	m_wndListPatient.AddEvent(0,_T("-"),NULL);
	m_wndListPatient.AddEvent(14,_T("Export danh sách trên màn hình ra Excel"),_OnExportPatientListToExcel);

	
	//m_wndtotal.SetEvent(WE_CHANGE, _OntotalChangeFnc);
	//m_wndtotal.SetEvent(WE_SETFOCUS, _OntotalSetfocusFnc);
	//m_wndtotal.SetEvent(WE_KILLFOCUS, _OntotalKillfocusFnc);
	m_wndtotal.SetEvent(WE_CHECKVALUE, _OntotalCheckValueFnc);
	//m_wndsended.SetEvent(WE_CHANGE, _OnsendedChangeFnc);
	//m_wndsended.SetEvent(WE_SETFOCUS, _OnsendedSetfocusFnc);
	//m_wndsended.SetEvent(WE_KILLFOCUS, _OnsendedKillfocusFnc);
	m_wndsended.SetEvent(WE_CHECKVALUE, _OnsendedCheckValueFnc);
	//m_wndCanced.SetEvent(WE_CHANGE, _OnCancedChangeFnc);
	//m_wndCanced.SetEvent(WE_SETFOCUS, _OnCancedSetfocusFnc);
	//m_wndCanced.SetEvent(WE_KILLFOCUS, _OnCancedKillfocusFnc);
	m_wndCanced.SetEvent(WE_CHECKVALUE, _OnCancedCheckValueFnc);
	//m_wndDirectory.SetEvent(WE_CHANGE, _OnDirectoryChangeFnc);
	//m_wndDirectory.SetEvent(WE_SETFOCUS, _OnDirectorySetfocusFnc);
	//m_wndDirectory.SetEvent(WE_KILLFOCUS, _OnDirectoryKillfocusFnc);
	m_wndOpen.SetEvent(WE_CLICK, _OnOpenSelectFnc);
	m_wndDirectory.SetEvent(WE_CHECKVALUE, _OnDirectoryCheckValueFnc);
	m_wndbrowse.SetEvent(WE_CLICK, _OnbrowseSelectFnc);
	m_wndShowDiff.SetEvent(WE_CLICK, _OnShowDiffSelectFnc);
	AddEvent(1,_T(" Export Drug Not Map"),_OnExportDrugNotMapFnc,0,0,0);
	AddEvent(2,_T("Báo cáo BHYT Gửi Cổng lấy từ dữ liệu XML"),_OnExportInsuranceReportFnc,0,0,0);
	SetMode(VM_ADD);
	m_wndDirectory.EnableWindow(false);
	m_szDirectory=AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory"));
	UpdateData(false);
	CString szData=_T("abc");
	//XMLSigner(szData);

}
void CSysInsuranceView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Text(pDX, m_wndDocno.GetDlgCtrlID(), m_nDocno);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndtotal.GetDlgCtrlID(), m_sztotal);
	DDX_Text(pDX, m_wndsended.GetDlgCtrlID(), m_szsended);
	DDX_Text(pDX, m_wndCanced.GetDlgCtrlID(), m_szCanced);
	DDX_Text(pDX, m_wndDirectory.GetDlgCtrlID(), m_szDirectory);
	DDX_Check(pDX, m_wndQNOject.GetDlgCtrlID(), m_bQNObject);
	DDX_Check(pDX, m_wndBHBQP.GetDlgCtrlID(), m_bBHBQP);
	DDX_Check(pDX, m_wndBHXH.GetDlgCtrlID(), m_bBHXH);
	DDX_Check(pDX, m_wndLoadFromTmpTable.GetDlgCtrlID(), m_bLoadFromTmpTable);
	DDX_Check(pDX, m_wndShowDiff.GetDlgCtrlID(), m_bShowDiff);
}
void CSysInsuranceView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysInsuranceView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysInsuranceView::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nOutPatient=0;
	m_nInPatient=1;
	m_nAll=1;
	m_nDocno=0;
	m_szStatusKey.Empty();
	m_szDeptKey.Empty();
	m_szPatientName.Empty();
	m_sztotal.Empty();
	m_szsended.Empty();
	m_szCanced.Empty();
	m_szDirectory.Empty();
	m_szStatusKey=_T("A");
	m_bImport = false;
	m_bBHBQP= false;
	m_bBHXH = true;	
	m_bLoadFromTmpTable=FALSE;
	m_bShowDiff=FALSE;

}
int CSysInsuranceView::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1,2,3, -1); 
 			SetDefaultValues(); 
			m_szFromDate= pMF->GetSysDate() + _T(" 00:00");
			m_szToDate= pMF->GetSysDate() + _T(" 23:59");

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
/*void CSysInsuranceView::OnFromDateChange(){
	
} */
/*void CSysInsuranceView::OnFromDateSetfocus(){
	
} */
/*void CSysInsuranceView::OnFromDateKillfocus(){
	
} */
int CSysInsuranceView::OnFromDateCheckValue(){
	return 0;
} 
/*void CSysInsuranceView::OnToDateChange(){
	
} */
/*void CSysInsuranceView::OnToDateSetfocus(){
	
} */
/*void CSysInsuranceView::OnToDateKillfocus(){
	
} */
int CSysInsuranceView::OnToDateCheckValue(){
	return 0;
} 
void CSysInsuranceView::OnOutPatientSelect(){
	
}
void CSysInsuranceView::OnInPatientSelect(){
	
}
void CSysInsuranceView::OnAllSelect(){
	
}
void CSysInsuranceView::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListPatientLoadData();	
}

void CSysInsuranceView::OnShowDiffSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//OnListPatientLoadData();	
}

void CSysInsuranceView::OnExportXmlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//UpdateData(true);
	//OnExport4210();

	UpdateData(true);

	CString tmpStr;
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	TranslateString(_T("Export 4210 thư mục VAS"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Export 4210 thư mục BH BQP"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Export From Table"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Export From MaLK"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);
	
	CRect rect;
	m_wndExportXml.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.bottom+85, this);
	switch (nPos)
	{
	case 1:
		OnExport4210();
	break;
	case 2:
		OnExport4210(true);
	break;
	case 3:
		OnExportFromTable();
	break;
	case 4:
		OnExportFromMaLK();
	break;
	}
	
} 
/*void CSysInsuranceView::OnDocnoChange(){
	
} */
/*void CSysInsuranceView::OnDocnoSetfocus(){
	
} */
/*void CSysInsuranceView::OnDocnoKillfocus(){
	
} */
int CSysInsuranceView::OnDocnoCheckValue(){
	return 0;
} 
void CSysInsuranceView::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysInsuranceView::OnStatusSelendok(){
	 
}
/*void CSysInsuranceView::OnStatusSetfocus(){
	
}*/
/*void CSysInsuranceView::OnStatusKillfocus(){
	
}*/
long CSysInsuranceView::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	};
	m_wndStatus.DeleteAllItems(); 
		m_wndStatus.AddItems(
			_T("A"), 
			_T("Tất cả"), NULL);
		m_wndStatus.AddItems(
			_T("Y"), 
			_T("Đã tạo dữ liệu"), NULL);
		m_wndStatus.AddItems(
			_T("N"), 
			_T("Chưa tạo dữ liệu"), NULL);
		m_wndStatus.AddItems(
			_T("S"), 
			_T("Đã tạo file tổng hợp"), NULL);
		m_wndStatus.AddItems(
			_T("D"), 
			_T("Đã hủy"), NULL);
		
		
	return 1;

}
/*void CSysInsuranceView::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CSysInsuranceView::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysInsuranceView::OnDeptSelendok(){
	 
}
/*void CSysInsuranceView::OnDeptSetfocus(){
	
}*/
/*void CSysInsuranceView::OnDeptKillfocus(){
	
}*/
long CSysInsuranceView::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	};
	szSQL.Format(_T("select sd_id as id, sd_name as description from sys_dept where sd_type in('KB','DT') "));
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CSysInsuranceView::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CSysInsuranceView::OnPatientNameChange(){
	
} */
/*void CSysInsuranceView::OnPatientNameSetfocus(){
	
} */
/*void CSysInsuranceView::OnPatientNameKillfocus(){
	
} */
int CSysInsuranceView::OnPatientNameCheckValue(){
	return 0;
} 
void CSysInsuranceView::OnListPatientDblClick()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CDetailPatientDialog dlg(this);
	int nItem=m_wndListPatient.GetCurSel(); 

	dlg.m_szMaLK=m_wndListPatient.GetItemText(nItem,16);
	dlg.DoModal();
	
} 
void CSysInsuranceView::OnListPatientSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysInsuranceView::OnListPatientDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysInsuranceView::OnListPatientLoadData()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	UpdateData(true);
	CString szSQL,szWhere,tmpStr,szMaLk,szSQL1,szSender;
	m_wndListPatient.BeginLoad(); 
	m_wndListPatient.DeleteAllItems();
	if (!m_bLoadFromTmpTable)
		szSQL=GetQueryString();
	else
		szSQL=GetQueryStringFromTable();
	double n_t_tongchi = 0;
	double n_t_bhtt = 0;
	double n_t_bntt = 0;
	double n_xml_t_tongchi = 0, n_xml_t_bhtt = 0, n_xml_t_bntt = 0;

	double n_total_tongchi = 0, n_total_bhtt = 0, n_total_bntt = 0;
	double n_total_xml_tongchi = 0, n_total_xml_bhtt = 0, n_total_xml_bntt = 0;

//	_fmsg(_T("%s"),szSQL);

	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	int nIndex=1;
	int nItem=0;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("malk"),szMaLk);
		if(m_bUseMaLK)
			szSQL1.Format(_T("select trangthaigui from bh_thongtinchitiet_tonghop WHERE ma_lk='%s'"),szMaLk);
		else
		szSQL1.Format(_T("select trangthaigui from bh_thongtinchitiet_tonghop WHERE ma_lk='%s' and  ") \
		_T("	TO_TIMESTAMP(ngay_ttoan,'YYYYMMDDHH24MI') BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T("	AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')	"),szMaLk,m_szFromDate,m_szToDate);
		//_msg(_T("%s"),szSQL1);
		long nCost=rs1.ExecSQL(szSQL1);
		if(nCost==0)
		{
			szSender.Format(_T("N"));
		}
		else 
		{	
			if(rs1.GetValue(_T("trangthaigui"))==_T("N"))
			{
				szSender=_T("D");
			}
			else 
			{
				if(rs1.GetValue(_T("trangthaigui"))==_T("Y"))
				{
					szSender=_T("Y");
				}
				else 
				{
					szSender=_T("S");
				}
			}

		}
		//_tprintf(_T("%s,%s,%s    "),m_szStatusKey,szSender,szMaLk );
		if(m_szStatusKey!= szSender && m_szStatusKey!=_T("A"))
		{
			rs.MoveNext();
			continue;
			
		}
		rs.GetValue(_T("t_tongchi"), n_t_tongchi);
		rs.GetValue(_T("t_bhtt"), n_t_bhtt);
		rs.GetValue(_T("t_bntt"), n_t_bntt);
		
		rs.GetValue(_T("xml_t_chi"), n_xml_t_tongchi);
		rs.GetValue(_T("xml_t_bhtt"), n_xml_t_bhtt);
		rs.GetValue(_T("xml_t_bntt"), n_xml_t_bntt);

		n_total_tongchi += n_t_tongchi;
		n_total_bhtt += n_t_bhtt;
		n_total_bntt += n_t_bntt;

		n_total_xml_tongchi += n_xml_t_tongchi;
		n_total_xml_bhtt += n_xml_t_bhtt;
		n_total_xml_bntt += n_xml_t_bntt;

		tmpStr.Format(_T("%d"),nIndex++);
		nItem = m_wndListPatient.AddItems(
			tmpStr, 
			rs.GetValue(_T("ma_bn")),
			rs.GetValue(_T("ho_ten")),
			rs.GetValue(_T("yearofbirth")),
			rs.GetValue(_T("ma_the")), 
			rs.GetValue(_T("ma_khoabv")), 
			rs.GetValue(_T("ngay_vao")), 
			rs.GetValue(_T("ngay_ra")), 
			rs.GetValue(_T("t_tongchi")),
			rs.GetValue(_T("xml_t_chi")),
			rs.GetValue(_T("t_bhtt")),
			rs.GetValue(_T("xml_t_bhtt")),
			rs.GetValue(_T("t_bntt")),
			rs.GetValue(_T("xml_t_bntt")),
			szSender,
			rs.GetValue(_T("invoiceno")),
			rs.GetValue(_T("malk")),
			rs.GetValue(_T("ngay_tt")),
			NULL);
		if(szSender==_T("N"))
			m_wndListPatient.SetItemBkColor(nItem,RGB(166, 237, 246), FALSE);
		if(szSender==_T("D"))
			m_wndListPatient.SetItemBkColor(nItem,RGB(250, 0, 0), FALSE);

		if ((fabs(n_xml_t_bhtt - n_t_bhtt) >= 1000) && (n_xml_t_bhtt > 0))
		{
			m_wndListPatient.SetSubItemBkColor(nItem,10, RGB(255, 255, 0), FALSE);
			m_wndListPatient.SetSubItemBkColor(nItem,11,RGB(255, 255, 0), FALSE);
		}
		m_wndListPatient.SetCheck(nIndex-2,true);
		rs.MoveNext();
	}
	if(n_total_tongchi > 0)
	{
		TranslateString(_T("Total"), tmpStr);
		int nItem = m_wndListPatient.AddItems(_T(""),_T(""),_T(""),_T(""),_T(""),_T(""),_T(""),tmpStr,
			ToString(n_total_tongchi),
			ToString(n_total_xml_tongchi),
			ToString(n_total_bhtt),
			ToString(n_total_xml_bhtt),
			ToString(n_total_bntt), 
			ToString(n_total_xml_bntt), NULL);
		m_wndListPatient.SetItemBkColor(nItem, RGB(192, 192, 192), FALSE);
		m_wndListPatient.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
		m_wndListPatient.MergeCell(nItem, 0, nItem, 5, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);		
	}
	m_wndListPatient.EndLoad(); 
	
	return nCount;

}
/*void CSysInsuranceView::OntotalChange(){
	
} */
/*void CSysInsuranceView::OntotalSetfocus(){
	
} */
/*void CSysInsuranceView::OntotalKillfocus(){
	
} */
int CSysInsuranceView::OntotalCheckValue(){
	return 0;
} 
/*void CSysInsuranceView::OnsendedChange(){
	
} */
/*void CSysInsuranceView::OnsendedSetfocus(){
	
} */
/*void CSysInsuranceView::OnsendedKillfocus(){
	
} */
int CSysInsuranceView::OnsendedCheckValue(){
	return 0;
} 
/*void CSysInsuranceView::OnCancedChange(){
	
} */
/*void CSysInsuranceView::OnCancedSetfocus(){
	
} */
/*void CSysInsuranceView::OnCancedKillfocus(){
	
} */
int CSysInsuranceView::OnCancedCheckValue(){
	return 0;
} 
void CSysInsuranceView::OnOpenSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	//system("explorer m_szDirectory");
	
	ShellExecute(NULL, _T("open"), m_szDirectory, NULL, NULL,SW_SHOW);

	
} 
/*void CSysInsuranceView::OnDirectoryChange(){
	
} */
/*void CSysInsuranceView::OnDirectorySetfocus(){
	
} */
/*void CSysInsuranceView::OnDirectoryKillfocus(){
	
} */
int CSysInsuranceView::OnDirectoryCheckValue(){
	return 0;
} 
#include "SYSSetUpDir.h"
void CSysInsuranceView::OnbrowseSelect(){
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		CString szPath= _T("");
		CSYSSetUpDir dlg(this);
		if(dlg.DoModal() == IDOK);
		{
			if(!dlg.m_szPathBHXH.IsEmpty())
			{
				m_szDirectory=dlg.m_szPathBHXH;
				UpdateData(false);
				//AfxGetApp()->WriteProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory"), m_szDirectory);
			}
		}
		return;



		::GetFolder(szPath, "Select Folder",NULL);
		if(!szPath.IsEmpty())
		{
			m_szDirectory=szPath;
			UpdateData(false);
			AfxGetApp()->WriteProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory"), m_szDirectory);
		}
					
} 
int CSysInsuranceView::OnAddSysInsuranceView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSysInsuranceView::OnEditSysInsuranceView(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysInsuranceView::OnDeleteSysInsuranceView(){
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
 		OnCancelSysInsuranceView(); 
 	}
	return 0;
}
int CSysInsuranceView::OnSaveSysInsuranceView(){
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
 		//OnSysInsuranceViewListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CSysInsuranceView::OnCancelSysInsuranceView(){
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
int CSysInsuranceView::OnSysInsuranceViewListLoadData(){
	return 0;
}
CString CSysInsuranceView::GetQueryString()
{
	CString szSQL,szWhere;
	UpdateData(true);
	CString szToDate;

	szToDate = m_szToDate.Left(17);
	szToDate += _T("59");

	if(m_nDocno >0)
		szWhere.Format(_T(" and hfe_docno=%ld"),m_nDocno);
	
	if(!m_nInPatient)
		{
			szWhere.AppendFormat(_T("and hfe_class in ('I') "));
		}
	if(!m_nOutPatient)
		{
			szWhere.AppendFormat(_T("and hfe_class in ('E','O') "));
		}
	if(!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T("and hfe_deptid='%s' "),m_szDeptKey);

	if(!m_szPatientName.IsEmpty())
		szWhere.AppendFormat(_T(" and substr(hd_cardno,1,15) = '%s'"),m_szPatientName);

	if(m_bImport)
			szWhere.AppendFormat(_T(" and hfe_docno in (%s)"),m_szArrayDocno);

	szWhere.AppendFormat(_T(" and hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') "), m_szFromDate, m_szToDate);


	if(m_bQNObject)
		szWhere.AppendFormat(_T(" and substr(hd_cardno,1,2) in ('QN','CA','CY') "));

	if(m_bBHBQP)
		szWhere.AppendFormat(_T(" and ( (hfe_class='E' and  substr(hd_cardno,4,2) ='97' ) or (select count(*) from hms_fee_invoice_card where hfec_docno =hfe_docno  and hfec_invoiceno =hfe_invoiceno   and substr(hfec_cardno,4,2) ='97' and hfec_regdate > '14-SEP-52') >0  ) "));
	if(m_bBHXH) 
		szWhere.AppendFormat(_T(" and ( (hfe_class='E' and  substr(hd_cardno,4,2) <> '97' ) or (select count(*) from hms_fee_invoice_card where hfec_docno =hfe_docno  and hfec_invoiceno =hfe_invoiceno   and substr(hfec_cardno,4,2) <> '97' and hfec_regdate > '14-SEP-52') > 0  ) "));

	if(m_bUseMaLK && !m_szCaseInvoiceTreattime.IsEmpty())
		szWhere.Format(_T(" %s"),m_szCaseInvoiceTreattime);
	if (m_bShowDiff)
	{
		szWhere.AppendFormat(_T(" and abs(t_bhtt - hfe_discount) >=1000 "));
	}

szSQL.Format(_T(" SELECT hfe_docno                   AS ma_bn,") \
				_T("   get_patientname(hfe_docno)       AS ho_ten,") \
				_T("   TO_CHAR(hp_birthdate,'YYYYMMDD') AS ngay_sinh,") \
				_T("   CASE") \
				_T("     WHEN hp_sex='F'") \
				_T("     THEN 2") \
				_T("     ELSE 1") \
				_T("   END AS gioi_tinh,") \
				_T("   SUBSTR(hd_cardno,1,15)                           AS ma_the,") \
				_T("   CASE") \
				_T("     WHEN hfe_admitdate IS NOT NULL") \
				_T("     THEN hfe_admitdate") \
				_T("     ELSE hd_admitdate") \
				_T("   END AS ngay_vao,") \
				_T("   CASE") \
				_T("     WHEN hfe_dischargedate IS NOT NULL") \
				_T("     THEN hfe_dischargedate") \
				_T("     ELSE hd_enddate") \
				_T("   END AS ngay_ra,") \
				_T("   hfe_date as ngay_tt,") \
				_T("   hfe_inspaid                        AS t_tongchi,") \
				_T("   t_tongchi                          AS xml_t_chi,") \
				_T("   hfe_discount                       AS t_bhtt,") \
				_T("   t_bhtt                             AS xml_t_bhtt,") \
				//_T("   t_bhtt - hfe_discount              AS diff_xml_t_bhtt,") \//
				_T("   hfe_inspaid - hfe_discount         AS t_bntt,") \
				_T("   t_bntt                             AS xml_t_bntt,") \
				_T("   ' '                          AS ma_pttt_qt,") \
				_T("   hd_docno                     AS so_phieu,") \
				_T("   CASE") \
				_T("     WHEN LENGTH(hfe_deptid)>1") \
				_T("     THEN hfe_deptid") \
				_T("     WHEN hd_suggestion NOT IN ('C','D')") \
				_T("     THEN hd_admitdept") \
				_T("     ELSE NULL") \
				_T("   END         AS ma_khoabv,") \
				_T("   hms_fee_invoice.hfe_invoiceno AS invoiceno,") \
				_T("   CAST (hfe_docno AS NVARCHAR2(8))") \
				_T("   ||'-'") \
				_T("   ||CAST(hfe_treattime AS NVARCHAR2(5)) AS malk,") \
				_T("   TO_CHAR(hfe_date,'YYYYMMDDHH24MI') AS ngay_ttoan") \
				_T(" FROM hms_fee_invoice") \
				_T(" LEFT JOIN BH_THONGTINCHITIET_TONGHOP") \
				_T(" ON (MA_BN = CAST(hfe_docno AS NVARCHAR2(8))") \
				_T(" AND HFE_TREATTIME = SUBSTR(MA_LK, 10,11))") \
				_T(" LEFT JOIN hms_object ON (ho_id = hfe_objectid) ") \
				_T(" LEFT JOIN sys_dept") \
				_T(" ON (sd_id=hfe_deptid)") \
				_T(" LEFT JOIN hms_doc") \
				_T(" ON (hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_patient") \
				_T(" ON (hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record") \
				_T(" ON (hcr_docno=hd_docno)") \
				//_T(" WHERE 1=1 and bh_check_invoiceshow(hfe_docno,hfe_invoiceno)=0 ") \//
				_T(" WHERE 1=1") \
				_T(" %s ") \
				_T(" AND hfe_discount      >0") \
				_T(" AND hfe_status       ='P'") \
				//_T(" AND LENGTH(hd_cardno) >=10") \//
				_T(" AND ho_type in ('I','C') ") \
				_T(" ORDER BY ma_khoabv,ngay_ttoan,") \
				_T("   ma_bn "),szWhere);
				//_msg(_T("%s"),szSQL);	
		// bo tam di da
		//and bh_check_invoiceshow(hfe_docno,hfe_invoiceno)=0
	return szSQL;
}
int CSysInsuranceView::OnReCheckOut()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db); 
	CRecord rs1(&pMF->m_db);
	CString szSQL,tmpStr,szSQL1,tmpTem,szStatus;
	long Invoiceno=0;
	szSQL.Format(_T(" DELETE FROM BH_ERROR"));
	rs.ExecSQL(szSQL);
	int nCount = 0;
	int nCountOK = 0;
	int nCountWrong =0;
	for (int i=0;i< m_wndListPatient.GetItemCount();i++)
	{	if(m_wndListPatient.GetCheck(i))
		{
			if(m_wndListPatient.GetItemText(i,14)==_T("N"))
			{
				nCount++;
				Invoiceno=0;
				tmpStr.Format(_T("%s"),m_wndListPatient.GetItemText(i,1));
				Invoiceno= str2long(m_wndListPatient.GetItemText(i,15));
				//User test
				if (pMF->GetCurrentUser() == _T("vimes"))
				{
					szSQL.Format(_T("BH_CHECKOUT_4210_VL1(%d,%d)"),str2long(tmpStr),Invoiceno);
				}
				else
					szSQL.Format(_T("BH_CHECKOUT_4210(%d,%d)"),str2long(tmpStr),Invoiceno);
					_tprintf(_T("%s"),szSQL);
					//_msg(_T("%s"),szSQL);
				 tmpTem=pMF->ExecDML(szSQL);
				 int nTemp=str2int(tmpTem);
				 szStatus.Format(_T("Bệnh nhân :%s : Số HS : %d"), m_wndListPatient.GetItemText(i,2),str2long(tmpStr));
				 pMF->SetStatusText(szStatus,1);
				 if (nTemp==1)
				 {
					m_wndListPatient.SetItemBkColor(i,RGB(255, 255, 255), FALSE);
					m_wndListPatient.SetItemText(i,14,_T("Y"));
					 nCountOK ++;
				 }
				 if(nTemp < 1)
					 nCountWrong ++;
				if(nTemp < 0)
				{	
					
					szSQL1.Format(_T("INSERT INTO BH_ERROR ") \
								_T("		(MA_LK, V_ERROR)  ") \
								_T("		VALUES (%s, %d) "), tmpStr,nTemp);
					rs1.ExecSQL(szSQL1);
				}
			}
		}


	}
	/*szSQL.Format(_T("SELECT count(*) as nTotal from BH_ERROR"));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("nTotal"),tmpStr);*/
	//if(ToInt(tmpStr) >0)
	tmpStr.Format(_T("Tổng số BN: %d,Thành công : %d BN ,Lỗi :%d BN "),nCount,nCountOK,nCountWrong);
	pMF->SetStatusText(tmpStr,1);
	//OnCheckDocumentError();
	
	return nCount;
}

int CSysInsuranceView::OnReCheckOutPatientError()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db); 
	CRecord rs1(&pMF->m_db);
	CString szSQL,tmpStr,szSQL1,tmpTem,szStatus;
	long Invoiceno=0;
	szSQL.Format(_T(" DELETE FROM BH_ERROR"));
	rs.ExecSQL(szSQL);
	int nCount = 0;
	int nCountOK = 0;
	int nCountWrong =0;
	for (int i=0;i< m_wndListPatient.GetItemCount();i++)
	{	if(m_wndListPatient.GetCheck(i))
		{
			if(m_wndListPatient.GetItemText(i,14)==_T("D"))
			{
				nCount++;
				tmpStr.Format(_T("%s"),m_wndListPatient.GetItemText(i,1));
				Invoiceno= str2long(m_wndListPatient.GetItemText(i,15));
				if (pMF->GetCurrentUser() == _T("vimes"))
				{
					szSQL.Format(_T("BH_CHECKOUT_4210_VL1(%d,%d)"),str2long(tmpStr),Invoiceno);
				}
				else
					szSQL.Format(_T("BH_CHECKOUT_4210(%d,%d)"),str2long(tmpStr),Invoiceno);
					_tprintf(_T("%s"),szSQL);
					//_msg(_T("%s"), szSQL);
				 tmpTem=pMF->ExecDML(szSQL);
				 int nTemp=str2int(tmpTem);
				 szStatus.Format(_T("Bệnh nhân :%s : Số HS : %d"), m_wndListPatient.GetItemText(i,2),str2long(tmpStr));
				 pMF->SetStatusText(szStatus,1);
				 if (nTemp==1)
				 {
					m_wndListPatient.SetItemBkColor(i,RGB(255, 255, 255), FALSE);
					m_wndListPatient.SetItemText(i,14,_T("Y"));
					 nCountOK ++;
				 }
				 if(nTemp < 1)
					 nCountWrong ++;
				if(nTemp < 0)
				{	
					
					szSQL1.Format(_T("INSERT INTO BH_ERROR ") \
								_T("		(MA_LK, V_ERROR)  ") \
								_T("		VALUES (%s, %d) "), tmpStr,nTemp);
					rs1.ExecSQL(szSQL1);
				}
			}
		}


	}

	tmpStr.Format(_T("Tổng số BN: %d,Thành công : %d BN ,Lỗi :%d BN "),nCount,nCountOK,nCountWrong);
	pMF->SetStatusText(tmpStr,1);
	
	return nCount;
}
int CSysInsuranceView::OnUnApprove()
{	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	int nItem=m_wndListPatient.GetCurSel();
	
	for (int i=0;i< m_wndListPatient.GetItemCount();i++)
	{	if(m_wndListPatient.GetCheck(i))
		{
			bool bcheck=false;
			tmpStr = m_wndListPatient.GetItemText(i,16);
			bcheck=pMF->OnDeleteCheckOut(tmpStr);
			if(bcheck==true)
			{
				m_wndListPatient.SetItemBkColor(i,RGB(250, 0, 0), FALSE);
				m_wndListPatient.SetItemText(i,14,_T("D"));
			}
		}
	}
	

	
	
	return nItem;
}
int CSysInsuranceView::OnExportFileTongHop(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		BeginWaitCursor();
		UpdateData(true);
		CRecord rs(&pMF->m_db), crs(&pMF->m_db);
		CString szSQL, szCardNo, tmpStr, szMaLK,szWhere;
		int nCount=0;
		CString szFieldName,szData;
		pMF->SetStatusText(_T("Đang tạo file tổng hợp"),1);
		CString szFile;
		szFile=AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory"));
		CString szFileName;
		tmpStr=m_szFromDate.Left(11);
		tmpStr.Replace(_T("-"), _T(""));
		tmpStr.Replace(_T("/"), _T(""));
		tmpStr.Replace(_T(" "), _T(""));
		tmpStr.Replace(_T(":"), _T(""));
		szFileName=tmpStr;

		tmpStr=m_szToDate.Left(11);
		tmpStr.Replace(_T("-"), _T(""));
		tmpStr.Replace(_T("/"), _T(""));
		tmpStr.Replace(_T(" "), _T(""));
		tmpStr.Replace(_T(":"), _T(""));

		szFileName.Format(_T("%s-%s"),szFileName,tmpStr);

		
		szFile.Format(_T("%s\\FILETONGHOP-%s.xml"), szFile,szFileName);
		_fmsg(_T("%s"),szFile);
		szFile.MakeUpper();
		char szPath[MAX_PATH];
		memset(szPath, 0, MAX_PATH);
		::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath, MAX_PATH, 0, 0);
		std::wfstream fs;
		fs.open (szPath,std::fstream::out | std::fstream::trunc);

		CString szMaBV;
		std::wstring macskcb, ngaylap, soluong;

		szSQL.Format(_T("SELECT	sc_id as MACSKCB FROM sys_company   "));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("MACSKCB"), szMaBV);
		macskcb = (LPCTSTR) szMaBV;

	
		if(!m_nInPatient)
		{
			szWhere.Format(_T("and ma_loai_kcb in (3) "));
		}
		if(!m_nOutPatient)
		{
			szWhere.Format(_T("and ma_loai_kcb in (1,2) "));
		}

		szSQL.Format(_T("select count(*) as SoLuongHoSo,TO_CHAR(CURRENT_TIMESTAMP, 'YYYYMMDD') as NgayLap ") \
					_T("	from bh_thongtinchitiet_tonghop ") \
					_T("	where TO_TIMESTAMP(ngay_ttoan,'YYYYMMDDHH24MI') BETWEEN CAST_STRING2TIMESTAMP('%s')  ") \
					_T("		AND CAST_STRING2TIMESTAMP('%s') %s AND trangthaigui in ('Y','S')  	"),m_szFromDate,m_szToDate,szWhere);
		_fmsg(_T("%s"),szSQL);
		rs.ExecSQL(szSQL);

		if(!rs.IsEOF())
		{
			rs.GetValue(_T("SoLuongHoSo"), tmpStr);
			nCount= ToInt(tmpStr);
			soluong = (LPCTSTR) tmpStr;
			rs.GetValue(_T("NgayLap"), tmpStr);
			ngaylap = (LPCTSTR) tmpStr;

		}
		
		
		fs << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl;
		fs << "<GIAMDINHHS xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">" << endl;
		fs << "<THONGTINDONVI>" << endl;
		fs << "<MACSKCB>"<< macskcb << "</MACSKCB>" << endl;
		fs << "</THONGTINDONVI>" << endl;
		fs << "<THONGTINHOSO>" << endl;
		fs << "<NGAYLAP>" << ngaylap << "</NGAYLAP>" << endl;
		fs << "<SOLUONGHOSO>" << soluong << "</SOLUONGHOSO>" << endl;
		fs << "<DANHSACHHOSO>" << endl;

		
		
		

		szSQL.Format(_T("SELECT ma_lk,so_phieu  as docno from bh_thongtinchitiet_tonghop ") \
					_T(" where TO_TIMESTAMP(ngay_ttoan,'YYYYMMDDHH24MI') BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') %s AND trangthaigui in ('Y','S') 	"),m_szFromDate,m_szToDate,szWhere);
		_fmsg(_T("%s"),szSQL);
		rs.ExecSQL(szSQL);



		STLString strData;

		while (!rs.IsEOF())
		{	
			
			rs.GetValue(_T("ma_lk"), szMaLK);

			fs << "<HOSO>" << endl;

			strData=pMF->GetXML1(szMaLK);
			
			fs << "<FILEHOSO>" << endl;
			fs << "<LOAIHOSO>XML1</LOAIHOSO>" << endl;
			fs << "<NOIDUNGFILE>";
			fs << strData.c_str();
			fs <<"</NOIDUNGFILE>" << endl;
			fs << "</FILEHOSO>" << endl;

			strData=pMF->GetXML2(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML2</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}
			strData=pMF->GetXML3(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML3</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str() ;
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}
			strData=pMF->GetXML4(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML4</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}
			strData=pMF->GetXML5(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML5</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}

			fs << "</HOSO>" << endl;
			szSQL.Format(_T("Update bh_thongtinchitiet_tonghop set trangthaigui='S' where ma_lk='%s' "),szMaLK);
			pMF->ExecSQL(szSQL);
			rs.MoveNext();
		}
		

	fs << "</DANHSACHHOSO>" << endl;
	fs << "</THONGTINHOSO>" << endl;
	fs << "<CHUKYDONVI/>" << endl;
	fs << "</GIAMDINHHS>" << endl;
	
	
	fs.close();
	//XMLSigner(szPath,szFileName);



	

	
	tmpStr.Format(_T("Tạo file tổng hợp thành công: %d BN"),nCount);
	pMF->SetStatusText(tmpStr,1);
	return 0;
}
int CSysInsuranceView::OnExportFileTongHopNotSend(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		BeginWaitCursor();
		UpdateData(true);
		CRecord rs(&pMF->m_db), crs(&pMF->m_db);
		CString szSQL, szCardNo, tmpStr, szMaLK,szWhere;
		int nCount=0;
		CString szFieldName,szData;
		pMF->SetStatusText(_T("Đang tạo file tổng hợp"),1);
		CString szFile;
		szFile=AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory"));
		CString szFileName;
		tmpStr=m_szFromDate.Left(11);
		tmpStr.Replace(_T("-"), _T(""));
		tmpStr.Replace(_T("/"), _T(""));
		tmpStr.Replace(_T(" "), _T(""));
		tmpStr.Replace(_T(":"), _T(""));
		szFileName=tmpStr;

		tmpStr=m_szToDate.Left(11);
		tmpStr.Replace(_T("-"), _T(""));
		tmpStr.Replace(_T("/"), _T(""));
		tmpStr.Replace(_T(" "), _T(""));
		tmpStr.Replace(_T(":"), _T(""));

		szFileName.Format(_T("%s-%sNOTSEND"),szFileName,tmpStr);

		
		szFile.Format(_T("%s\\FILETONGHOP-%s.xml"), szFile,szFileName);
		_fmsg(_T("%s"),szFile);
		szFile.MakeUpper();
		char szPath[MAX_PATH];
		memset(szPath, 0, MAX_PATH);
		::WideCharToMultiByte(CP_UTF8, 0, szFile, szFile.GetLength(), szPath, MAX_PATH, 0, 0);
		std::wfstream fs;
		fs.open (szPath,std::fstream::out | std::fstream::trunc);

		CString szMaBV;
		std::wstring macskcb, ngaylap, soluong;

		szSQL.Format(_T("SELECT	sc_id as MACSKCB FROM sys_company   "));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("MACSKCB"), szMaBV);
		macskcb = (LPCTSTR) szMaBV;

	
		if(!m_nInPatient)
		{
			szWhere.Format(_T("and ma_loai_kcb in (3) "));
		}
		if(!m_nOutPatient)
		{
			szWhere.Format(_T("and ma_loai_kcb in (1,2) "));
		}

		szSQL.Format(_T("select count(*) as SoLuongHoSo,TO_CHAR(CURRENT_TIMESTAMP, 'YYYYMMDD') as NgayLap ") \
					_T("	from bh_thongtinchitiet_tonghop ") \
					_T("	where TO_TIMESTAMP(ngay_ttoan,'YYYYMMDDHH24MI') BETWEEN CAST_STRING2TIMESTAMP('%s')  ") \
					_T("		AND CAST_STRING2TIMESTAMP('%s') %s AND trangthaigui ='Y'  	"),m_szFromDate,m_szToDate,szWhere);
		_fmsg(_T("%s"),szSQL);
		rs.ExecSQL(szSQL);

		if(!rs.IsEOF())
		{
			rs.GetValue(_T("SoLuongHoSo"), tmpStr);
			nCount= ToInt(tmpStr);
			soluong = (LPCTSTR) tmpStr;
			rs.GetValue(_T("NgayLap"), tmpStr);
			ngaylap = (LPCTSTR) tmpStr;

		}
		
		
		fs << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl;
		fs << "<GIAMDINHHS xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">" << endl;
		fs << "<THONGTINDONVI>" << endl;
		fs << "<MACSKCB>"<< macskcb << "</MACSKCB>" << endl;
		fs << "</THONGTINDONVI>" << endl;
		fs << "<THONGTINHOSO>" << endl;
		fs << "<NGAYLAP>" << ngaylap << "</NGAYLAP>" << endl;
		fs << "<SOLUONGHOSO>" << soluong << "</SOLUONGHOSO>" << endl;
		fs << "<DANHSACHHOSO>" << endl;

		
		
		

		szSQL.Format(_T("SELECT ma_lk,so_phieu  as docno from bh_thongtinchitiet_tonghop ") \
					_T(" where TO_TIMESTAMP(ngay_ttoan,'YYYYMMDDHH24MI') BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') %s AND trangthaigui ='Y'	"),m_szFromDate,m_szToDate,szWhere);
		_fmsg(_T("%s"),szSQL);
		rs.ExecSQL(szSQL);



		STLString strData;

		while (!rs.IsEOF())
		{	
			
			rs.GetValue(_T("ma_lk"), szMaLK);

			fs << "<HOSO>" << endl;

			strData=pMF->GetXML1(szMaLK);
			
			fs << "<FILEHOSO>" << endl;
			fs << "<LOAIHOSO>XML1</LOAIHOSO>" << endl;
			fs << "<NOIDUNGFILE>";
			fs << strData.c_str();
			fs <<"</NOIDUNGFILE>" << endl;
			fs << "</FILEHOSO>" << endl;

			strData=pMF->GetXML2(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML2</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}
			strData=pMF->GetXML3(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML3</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str() ;
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}
			strData=pMF->GetXML4(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML4</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}
			strData=pMF->GetXML5(szMaLK);
			if(strData.length() > 0)
			{
				fs << "<FILEHOSO>" << endl;
				fs << "<LOAIHOSO>XML5</LOAIHOSO>" << endl;
				fs << "<NOIDUNGFILE>";
				fs << strData.c_str();
				fs <<"</NOIDUNGFILE>" << endl;
				fs << "</FILEHOSO>" << endl;
			}

			fs << "</HOSO>" << endl;
			szSQL.Format(_T("Update bh_thongtinchitiet_tonghop set trangthaigui='S' where ma_lk='%s' "),szMaLK);
			pMF->ExecSQL(szSQL);
			rs.MoveNext();
		}
		

	fs << "</DANHSACHHOSO>" << endl;
	fs << "</THONGTINHOSO>" << endl;
	fs << "<CHUKYDONVI/>" << endl;
	fs << "</GIAMDINHHS>" << endl;
	
	
	fs.close();
	//XMLSigner(szPath,szFileName);



	

	
	tmpStr.Format(_T("Tạo file tổng hợp thành công: %d BN"),nCount);
	pMF->SetStatusText(tmpStr,1);
	return 0;
}
int CSysInsuranceView::OnDeleteDaTa()
{	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&pMF->m_db), crs(&pMF->m_db);
	CString szSQL, szCardNo, tmpStr, szMaLK,szWhere;
	CString szFieldName,szData;

	szSQL.Format(_T("BH_DELETE_DATA('%s','%s') "),m_szFromDate,m_szToDate);
	_tprintf(_T("%s"),szSQL);
	tmpStr=pMF->ExecDML(szSQL);
	pMF->GetLocalIP();
	CString szDesc;
	szDesc.Format(_T("%s, %s"),szSQL,pMF->GetLocalIP());
	pMF->SystemLog(_T("DELETE"),szDesc);
	
	//_tprintf(_T("%d"),nCount);
	return ToInt(tmpStr);


}
int CSysInsuranceView::OnExportBH()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString tmpStr,szSQL,szWhere;
	int nCount=0 ;
	CExcel xls;	
	xls.CreateSheet(3);
	xls.SetWorksheet(0);

	int nRow=1,nCol=0;
	if(!m_nInPatient)
		{
			szWhere.Format(_T("and ma_loai_kcb in (3) "));
		}
		if(!m_nOutPatient)
		{
			szWhere.Format(_T("and ma_loai_kcb in (1,2) "));
		}

	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellMergedColumns(nCol, nRow + 1, 4);

	//xls.SetCellText(nCol, nRow, m_CompanyInfo.sc_pname,FMT_TEXT|FMT_CENTER, true);
	//xls.SetCellText(nCol, nRow + 1, m_CompanyInfo.sc_name,FMT_TEXT|FMT_CENTER, true);
	//xls.SetCellMergedColumns(nCol, nRow+ 3, 20);

	xls.SetCellText(nCol,nRow+3,_T("BANG CHI TIET TONG HOP"),FMT_TEXT|FMT_CENTER,true);
	
	
	szSQL.Format(_T("SELECT * from bh_thongtinchitiet_tonghop  ") \
			_T(" where to_timestamp(ngay_ttoan,'YYYYMMDDHH24MI') between CAST_STRING2TIMESTAMP('%s') and CAST_STRING2TIMESTAMP('%s') %s	"),m_szFromDate,m_szToDate,szWhere);

	rs.ExecSQL(szSQL);
	nRow=5;
	xls.SetCellText(nCol,nRow,_T("STT"),FMT_TEXT|FMT_CENTER,true,12);

	for(int i=0;i <rs.GetFieldCount();i++)
	{	
		xls.SetCellText(i+1,nRow,rs.GetFieldName(i),FMT_TEXT|FMT_CENTER,true,12);
	}
int nIndex=1;
	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
		for(int i=0;i <rs.GetFieldCount();i++)
		{	
			xls.SetCellText(i+1,nRow,rs.GetValue(rs.GetFieldName(i)),FMT_TEXT|FMT_CENTER,false);
		}
		rs.MoveNext();
	}

	xls.AddSheet(_T("CHI TIET THUOC"));
	xls.SetWorksheet(1);
	nRow=1;



	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellMergedColumns(nCol, nRow + 1, 4);

	//xls.SetCellText(nCol, nRow, m_CompanyInfo.sc_pname,FMT_TEXT|FMT_CENTER, true);
	//xls.SetCellText(nCol, nRow + 1, m_CompanyInfo.sc_name,FMT_TEXT|FMT_CENTER, true);
	//xls.SetCellMergedColumns(nCol, nRow+ 3, 20);

	xls.SetCellText(nCol,nRow+3,_T("BANG CHI TIET THUOC"),FMT_TEXT|FMT_CENTER,true);

	
	szSQL.Format(_T("select b.* from bh_thongtinchitiet_tonghop  a  ") \
				_T(" LEFT JOIN bh_bang_ctthuoc   b ON (b.ma_lk=a.ma_lk)  ") \
				_T(" where to_timestamp(ngay_ttoan,'YYYYMMDDHH24MI') between CAST_STRING2TIMESTAMP('%s') and CAST_STRING2TIMESTAMP('%s') %s "),m_szFromDate,m_szToDate,szWhere);

	rs.ExecSQL(szSQL);
	nRow=5;
	xls.SetCellText(nCol,nRow,_T("STT"),FMT_TEXT|FMT_CENTER,true,12);

	for(int i=0;i <rs.GetFieldCount();i++)
	{	
		xls.SetCellText(i+1,nRow,rs.GetFieldName(i),FMT_TEXT|FMT_CENTER,true,12);
	}
 nIndex=1;
	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
		for(int i=0;i <rs.GetFieldCount();i++)
		{	
			xls.SetCellText(i+1,nRow,rs.GetValue(rs.GetFieldName(i)),FMT_TEXT|FMT_CENTER,false);
		}
		rs.MoveNext();
	}


	xls.AddSheet(_T("CHI TIET DICH VU"));
	xls.SetWorksheet(2);
	nRow=1;



	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellMergedColumns(nCol, nRow + 1, 4);

	//xls.SetCellText(nCol, nRow, m_CompanyInfo.sc_pname,FMT_TEXT|FMT_CENTER, true);
	//xls.SetCellText(nCol, nRow + 1, m_CompanyInfo.sc_name,FMT_TEXT|FMT_CENTER, true);
	//xls.SetCellMergedColumns(nCol, nRow+ 3, 20);

	xls.SetCellText(nCol,nRow+3,_T("BANG CHI TIET DICH VU"),FMT_TEXT|FMT_CENTER,true);

	
	szSQL.Format(_T("select b.* from bh_thongtinchitiet_tonghop  a  ") \
				_T(" LEFT JOIN bh_bang_ctdv  b ON (b.ma_lk=a.ma_lk)  ") \
				_T(" where to_timestamp(ngay_ttoan,'YYYYMMDDHH24MI') between CAST_STRING2TIMESTAMP('%s') and CAST_STRING2TIMESTAMP('%s') %s "),m_szFromDate,m_szToDate,szWhere);

	rs.ExecSQL(szSQL);
	nRow=5;
	xls.SetCellText(nCol,nRow,_T("STT"),FMT_TEXT|FMT_CENTER,true,12);

	for(int i=0;i <rs.GetFieldCount();i++)
	{	
		xls.SetCellText(i+1,nRow,rs.GetFieldName(i),FMT_TEXT|FMT_CENTER,true,12);
	}
 nIndex=1;
	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
		for(int i=0;i <rs.GetFieldCount();i++)
		{	
			xls.SetCellText(i+1,nRow,rs.GetValue(rs.GetFieldName(i)),FMT_TEXT|FMT_CENTER,false);
		}
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\BANGCHITIETTONGHOP.XLS"));	

	return 1 ;
}
int CSysInsuranceView::OnCheckDocumentError(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&pMF->m_db), crs(&pMF->m_db);
	CString szSQL, szCardNo, tmpStr, szMaLK,szWhere;
	int nCount=0;
	int nIndex= ToInt(m_szCanced);
	CString szFieldName,szData;

		if(!m_nInPatient)
		{
			szWhere.Format(_T("and ma_loai_kcb in (3) "));
		}
		if(!m_nOutPatient)
		{
			szWhere.Format(_T("and ma_loai_kcb in (1,2) "));
		}

		szSQL.Format(_T("SELECT ma_lk,so_phieu  as docno from bh_thongtinchitiet_tonghop ") \
					_T(" where TO_TIMESTAMP(ngay_ttoan,'YYYYMMDDHH24MI') BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s') %s	"),m_szFromDate,m_szToDate,szWhere);
		_fmsg(_T("%s"),szSQL);
		rs.ExecSQL(szSQL);

		while(!rs.IsEOF())
		{
			nCount++;
			if(nCount==nIndex)
			{
				rs.GetValue(_T("ma_lk"),tmpStr);
				//_msg(_T("%s"),tmpStr);
				break;
			}
			rs.MoveNext();
		}
		return nCount;

}
int CSysInsuranceView::OnCheckLoiCacHoSoDaTao()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&pMF->m_db), crs(&pMF->m_db);
	CString szSQL, szCardNo, tmpStr, szMaLK,szWhere;
	int nCount=0;
	szSQL.Format(_T("DELETE FROM BH_ERROR_DETAIL"));
	pMF->ExecSQL(szSQL);

	szSQL.Format(_T("BH_CHECKERROR_DETAIL('%s','%s')"),m_szFromDate,m_szToDate);
	tmpStr=pMF->ExecDML(szSQL);

	szSQL.Format(_T("SELECT count(*) as qty FROM BH_ERROR_DETAIL"));
	rs.ExecSQL(szSQL);
	
	nCount=rs.GetIntValue();

	if(ToInt(rs.GetValue(_T("qty"))) >0)
	{
			CPatientListErrorDialog dlg(this);
			dlg.DoModal();
	}
	UpdateData(false);
return 1;
}
int CSysInsuranceView::OnExportDrugNotMap(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		BeginWaitCursor();
		UpdateData(true);
		CRecord rs(&pMF->m_db);
		CString tmpStr,szSQL;
		int nCount=0 ;
		CExcel xls;	
		xls.CreateSheet(1);
		xls.SetWorksheet(0);
		
	int nCol=0;
	int nRow=0;
		xls.SetCellMergedColumns(nCol, nRow, 4);
		xls.SetCellMergedColumns(nCol, nRow + 1, 4);

		//xls.SetCellText(nCol, nRow, m_CompanyInfo.sc_pname,FMT_TEXT|FMT_CENTER, true);
		//xls.SetCellText(nCol, nRow + 1, m_CompanyInfo.sc_name,FMT_TEXT|FMT_CENTER, true);
		xls.SetCellMergedColumns(nCol, nRow+ 3, 5);

		xls.SetCellText(nCol,nRow+3,_T("Danh sách thuốc - vật tư chưa map"),FMT_TEXT|FMT_CENTER,true,12);
		
		szSQL.Format(_T(" SELECT distinct(itemid) as itemid, hfe_insprice,feename,groupid") \
					_T(" FROM (") \
					_T(" SELECT case when hfe_feegroup='DYN' then b.hfe_deptid") \
					_T("       ||'.'") \
					_T("       ||b.hfe_itemid") \
					_T("       else b.hfe_itemid end as itemid,b.hfe_desc as feename,hfe_insprice, b.hfe_group as groupid") \
					_T(" FROM hms_fee_invoice a") \
					_T(" LEFT JOIN hms_fee b") \
					_T(" ON (b.hfe_docno    =a.hfe_docno") \
					_T(" LEFT JOIN hms_fee_list ON (hfl_feeid=b.hfe_itemid) ") \
					_T(" AND a.hfe_invoiceno=b.HFE_INVOICENO)") \
					_T(" LEFT JOIN hms_doc") \
					_T(" ON (hd_docno=a.hfe_docno)") \
					_T(" LEFT JOIN hms_circular_map") \
					_T("     ON (hcm_fee_id=b.hfe_itemid") \
					_T("     OR(hcm_fee_id = b.hfe_deptid") \
					_T("       ||'.'") \
					_T("       ||b.hfe_itemid") \
					_T("     AND hfe_feegroup='DYN'))") \
					_T(" WHERE a.hfe_date BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')") \
					_T(" AND a.hfe_discount    >0") \
					_T(" AND a.hfe_status      ='P'") \
					_T(" AND b.hfe_discount >0") \
					_T(" AND LENGTH(hd_cardno) >15") \
					_T(" AND b.hfe_type not in ('D','M') ") \
					_T(" AND (( hcm_map_id is null AND hfe_feegroup='DYN' ) OR (hfe_feegroup <> 'DYN' AND length(hfl_insmap)<=0) ") \
					_T(" ) tbl") \
					_T(" ORDER BY  groupid") ,m_szFromDate,m_szToDate);

		rs.ExecSQL(szSQL);
		nRow=5;
		xls.SetColumnWidth(0,6);
		xls.SetColumnWidth(1,15);
		xls.SetColumnWidth(2,42);
		xls.SetColumnWidth(3,23);
		xls.SetColumnWidth(4,20);
		xls.SetCellText(nCol,nRow,_T("STT"),FMT_TEXT|FMT_CENTER,true,11);
		xls.SetCellText(nCol +1 ,nRow,_T("Mã Thuốc BV"),FMT_TEXT|FMT_CENTER,true,11);
		xls.SetCellText(nCol +2 ,nRow,_T("Tên thuốc BV"),FMT_TEXT|FMT_CENTER,true,11);
		xls.SetCellText(nCol +3 ,nRow,_T("Đơn giá BN thanh toán"),FMT_TEXT|FMT_CENTER,true,11);
		xls.SetCellText(nCol +4 ,nRow,_T("Sitem nhập kho"),FMT_TEXT|FMT_CENTER,true,11);
		int nIndex=1;
		while(!rs.IsEOF())
		{
			nRow++;
			tmpStr.Format(_T("%d"),nIndex++);
			xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
			rs.GetValue(_T("itemid"),tmpStr);
			xls.SetCellText(nCol + 1,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
			rs.GetValue(_T("feename"),tmpStr);
			xls.SetCellText(nCol + 2,nRow,tmpStr,FMT_TEXT,false);
			rs.GetValue(_T("hfe_insprice"),tmpStr);
			xls.SetCellText(nCol + 3,nRow,tmpStr,FMT_NUMBER1,false);
			rs.GetValue(_T("groupid"),tmpStr);
			xls.SetCellText(nCol + 4,nRow,tmpStr,FMT_TEXT,false);
			rs.MoveNext();
		}

		szSQL.Format(_T(" SELECT distinct mp_code,mp_name,hfe_insprice,mpi_product_item_id,b.hfe_group as groupid ") \
					_T(" FROM hms_fee_invoice a") \
					_T(" LEFT JOIN hms_fee b") \
					_T(" ON (b.hfe_docno    =a.hfe_docno") \
					_T(" AND a.hfe_invoiceno=b.HFE_INVOICENO)") \
					_T(" LEFT JOIN hms_doc") \
					_T(" ON (hd_docno=a.hfe_docno)") \
					_T(" LEFT JOIN m_product_item") \
					_T(" ON (CAST(MPI_PRODUCT_ITEM_ID AS NVARCHAR2(15))=b.hfe_itemid)") \
					_T(" LEFT JOIN m_product ON (mp_product_id=mpi_product_id) ") \
					_T(" LEFT JOIN m_product_extra_info") \
					_T("     ON (mpei_id=MPI_PRODUCTEXTRA_ID)") \
					_T(" WHERE a.hfe_date BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')") \
					_T(" AND b.hfe_type in ('D') and mp_org_id='PM'") \
					_T(" AND a.hfe_status      ='P'") \
					_T(" AND LENGTH(hd_cardno) >15 AND b.hfe_discount >0 ") \
					_T(" AND hfe_category        ='N' ") \
					_T(" AND  mpei_id is null ORDER BY groupid "),m_szFromDate,m_szToDate);

		rs.ExecSQL(szSQL);
		/*nRow=5;
		xls.SetColumnWidth(0,6);
		xls.SetColumnWidth(1,15);
		xls.SetColumnWidth(2,42);
		xls.SetColumnWidth(3,23);
		xls.SetColumnWidth(4,20);
		xls.SetCellText(nCol,nRow,_T("STT"),FMT_TEXT|FMT_CENTER,true,11);
		xls.SetCellText(nCol +1 ,nRow,_T("Mã Thuốc BV"),FMT_TEXT|FMT_CENTER,true,11);
		xls.SetCellText(nCol +2 ,nRow,_T("Tên thuốc BV"),FMT_TEXT|FMT_CENTER,true,11);
		xls.SetCellText(nCol +3 ,nRow,_T("Đơn giá BN thanh toán"),FMT_TEXT|FMT_CENTER,true,11);
		xls.SetCellText(nCol +4 ,nRow,_T("Sitem nhập kho"),FMT_TEXT|FMT_CENTER,true,11);*/
		//int nIndex=1;
		while(!rs.IsEOF())
		{
			nRow++;
			tmpStr.Format(_T("%d"),nIndex++);
			xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
			rs.GetValue(_T("mp_code"),tmpStr);
			xls.SetCellText(nCol + 1,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
			rs.GetValue(_T("mp_name"),tmpStr);
			xls.SetCellText(nCol + 2,nRow,tmpStr,FMT_TEXT,false);
			rs.GetValue(_T("hfe_insprice"),tmpStr);
			xls.SetCellText(nCol + 3,nRow,tmpStr,FMT_NUMBER1,false);
			rs.GetValue(_T("mpi_product_item_id"),tmpStr);
			xls.SetCellText(nCol + 4,nRow,tmpStr,FMT_TEXT,false);
			rs.MoveNext();
		}
		
		EndWaitCursor();
		xls.Save(_T("Exports\\DANHSACHTHUOCCHUAMAP.xls"));	

		return nCount ;
}
int CSysInsuranceView::OnCheckDocumentWarning(){
	int nCount=0;
	
	return nCount;
}
int CSysInsuranceView::OnExport4210(bool bBQP){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int tmp=0;
	long docno=0;
	CString tmpStr;
	int nRes=0;
	pMF->SetStatusText(_T("Đang tạo file XML"),0);
	for(int i =0;i<m_wndListPatient.GetItemCount();i++)
	{
		if(m_wndListPatient.GetCheck(i) &&(m_wndListPatient.GetItemText(i,14)!=_T("A") || m_wndListPatient.GetItemText(i,14)!=_T("S")))
		{	
			tmpStr=m_wndListPatient.GetItemText(i,16);
			_tprintf(_T("\r\n %s"),tmpStr);
			nRes = pMF->OnWriteCheckOut4210(tmpStr,bBQP);	
			tmp++;
		}

	}
	pMF->SetStatusText(_T("Hoàn Thành tạo file XML từng bệnh nhân "),0);
	return tmp;
}

int CSysInsuranceView::OnExportFromTable(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int tmp=0;
	long docno=0;
	CString tmpStr,szSQL;
	CRecord rs(&pMF->m_db);
	int nRes=0;
	pMF->SetStatusText(_T("Đang tạo file XML"),0);
	szSQL.Format(_T("select distinct ma_lk from tmp_oxy "));
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		nRes= pMF->OnWriteCheckOut4210(rs.GetValue(_T("ma_lk")));	
		tmp++;
		rs.MoveNext();
	}
	pMF->SetStatusText(_T("Hoàn Thành tạo file XML từng bệnh nhân "),0);
	return tmp;
}

int CSysInsuranceView::OnExportFromMaLK(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int tmp=0;
	long docno=0;
	CString tmpStr,szSQL,szArrMaLK;
	CRecord rs(&pMF->m_db);
	int nRes=0;


	CImportListDocument dlg(this,true);
	if(dlg.DoModal()==IDOK)
	{
		szArrMaLK= dlg.m_szImput;
		if(!szArrMaLK.IsEmpty())
		{
			pMF->SetStatusText(_T("Đang tạo file XML"),0);


			szSQL.Format(_T("select distinct ma_lk from bh_thongtinchitiet_tonghop where ma_lk in (%s) "),szArrMaLK);
			rs.ExecSQL(szSQL);
			while(!rs.IsEOF())
			{
				nRes= pMF->OnWriteCheckOut4210(rs.GetValue(_T("ma_lk")));	
				tmp++;
				rs.MoveNext();
			}
		}
	}


	
	pMF->SetStatusText(_T("Hoàn Thành tạo file XML từng bệnh nhân "),0);
	return tmp;
}

int CSysInsuranceView::XMLSigner(char szPath[260],CString szFileName)
{
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		BeginWaitCursor();
		UpdateData(true);
		CRecord rs(&pMF->m_db), crs(&pMF->m_db);
		CString szSQL, szCardNo, tmpStr, szMaLK,szWhere,szFile;
		std::wfstream fs;
		fs.open (szPath,  std::fstream::in);
		//CString szFileName;


		std::wstring  output;
		
		if (fs.is_open()) 
		{	
			 fs.seekg (0, fs.end);
			int length = fs.tellg();
			fs.seekg (0, fs.beg);

			wchar_t * buffer = new wchar_t [length];
			memset( buffer, '\0', sizeof(wchar_t)*length );
			fs.read (buffer,length);
			output=buffer;
			fs.close();
			delete[] buffer;
		}
		else
		{
			_msg(_T( "Error opening file"));
		}


		std::string my_string = fml::WideStringToUtf8(output);
		
		STLString outString;
		CLibXMLHelper::xmlBase64Encode(my_string,outString);
		//_tprintf(_T("ket qua cuoi cung nhu nao :  %s"),outString.c_str());
		JSONVALUE jsonRequest;
		JSONVALUE jsonResponse;
		jsonRequest["data"] =outString.c_str() ;
		jsonRequest["filename"] =szFileName;
		std::wstring json_string;
		jsonRequest.ToString(json_string);
		CString szJsonData,szParams;
		szJsonData.Format(_T("%s"), json_string.c_str());
		
		bool res = m_wndCheckIn.SingerXML_VNPT(szJsonData,&jsonResponse);
		
		if(res)
		{
			CString tmpStr, tmpStr1;
			std::wstring strData;
			JSONVALUE j = jsonResponse.At(_T("filename"));
			std::wstring json_string;
			
			j.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));	

			CString szQuery;
			szFile=AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE"), _T("Drirectory"));
			szFile.Format(_T("%s\\%s"), szFile,tmpStr);
			szQuery.Format(_T("http://localhost:3000/api/ins/download?file_name=%s --output %s"),tmpStr,szFile);
			TCHAR lpszPath[MAX_PATH];
			GetCurrentDirectory(MAX_PATH, lpszPath);
			ShellExecute(
				0, 
				L"open", 
				L"curl.exe", 
				szQuery, 
				lpszPath, 
				SW_HIDE
				);

		}
		return 1;
}


int CSysInsuranceView::OnMarkAll()
{
	for (int i =0; i < m_wndListPatient.GetItemCount(); i++)
	{
		m_wndListPatient.SetCheck(i, TRUE);
	}
	return 0;
}

int CSysInsuranceView::OnUnMarkAll()
{
	for (int i =0; i < m_wndListPatient.GetItemCount(); i++)
	{
		m_wndListPatient.SetCheck(i, FALSE);
	}
	return 0;
}


int CSysInsuranceView::OnImportListPatientFromExcel()
{
	CImportListDocument dlg(this);
	if(dlg.DoModal()==IDOK)
	{
		m_szArrayDocno= dlg.m_szImput;
		if(!m_szArrayDocno.IsEmpty())
			m_bImport = true;

		else
			m_bImport = false;
	}
	else
	{
		m_bImport = false;
	}
	return 0;
}

#include "StringToken.h"
int CSysInsuranceView::OnImportListPatientByMaLK()
{
	CImportListDocument dlg(this);
	m_szCaseInvoiceTreattime.Empty();
	if(dlg.DoModal()==IDOK)
	{
		m_szArrayDocno= dlg.m_szImput;
		if(!m_szArrayDocno.IsEmpty())
		{
			CStringToken tk(m_szArrayDocno);
		/*	if(tk.GetSize()>0)
				m_szCaseInvoiceTreattime.Format(_T(" and*/
			CString tmpStr;

			for(int i=0; i< tk.GetSize(); i++)
			{
				CString szTemp;
				tk.GetAt(i,szTemp);
				
				CStringToken tk1(szTemp,_T("-"));
				if(tk1.GetSize()!= 2)
					continue;
			
				CString szDocno, szTreattime;
				tk1.GetAt(0,szDocno);
				tk1.GetAt(1,szTreattime);

				if(!tmpStr.IsEmpty())
					tmpStr.AppendFormat(_T(" or "));

				tmpStr.AppendFormat(_T(" (hfe_docno= %s and hfe_treattime =%s) "),szDocno, szTreattime);
			}

			if(!tmpStr.IsEmpty())
			{
				m_szCaseInvoiceTreattime.Format(_T(" and (%s) "), tmpStr);
			}
			m_bUseMaLK = true;
			OnListPatientLoadData();
			

		}
		else
			m_bUseMaLK = false;
	}
	else
	{
		m_bUseMaLK = false;
	}
	return 0;
}
#include "SysChangeMonth.h"
int CSysInsuranceView::OnListChangeMonthQT()
{
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		BeginWaitCursor();
		UpdateData(true);
		CRecord rs(&pMF->m_db), crs(&pMF->m_db);
		CString szSQL, szCardNo, tmpStr, szMaLK,szWhere,szFile;
		int nSel = m_wndListPatient.GetCurSel();
		szMaLK = m_wndListPatient.GetItemText(nSel,16);
		int nThangQt=0;
		int nYear=0;
		int nCount=0;
		CSysChangeMonth dlg(this);
		dlg.m_szMaLk = szMaLK;
		if(dlg.DoModal() == IDOK)
		{
			nThangQt = ToInt(dlg.m_szMonthKey);
			nYear = ToInt(dlg.m_szYearKey);
			if( nThangQt >0 && nYear >0 )
			{
				for (int i =0; i < m_wndListPatient.GetItemCount(); i++)
				{
					if(m_wndListPatient.GetCheck(i))
					{
						szMaLK = m_wndListPatient.GetItemText(i,16);
						szSQL.Format(_T("update  bh_thongtinchitiet_tonghop set nam_qt= %d, thang_qt_old=thang_qt, ") \
									_T(" thang_qt=%d,is_change_month='Y'  where ma_lk='%s'"), nYear,nThangQt,szMaLK) ;
						rs.ExecSQL(szSQL);
						nCount++;
					}
				}
				if(nCount == 0)
				{		
					if(nSel < 0) return 0;
					szMaLK = m_wndListPatient.GetItemText(nSel,16);
					szSQL.Format(_T("update  bh_thongtinchitiet_tonghop set nam_qt= %d, thang_qt_old=thang_qt,thang_qt=%d,is_change_month='Y'  where ma_lk='%s'"), nYear,nThangQt,szMaLK) ;
						rs.ExecSQL(szSQL);
				}	
			}
			else
			{
				_msg(_T("Update thất bại! Xin kiểm tra lại tháng quyết toán"));
			}	
		}
		return 1;
}

#include "HMSInsuraceReportDialog.h"
int CSysInsuranceView::OnExportInsuranceReport()
{
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		BeginWaitCursor();
		UpdateData(true);

		CHMSInsuraceReportDialog dlg(this);
		if(dlg.DoModal() == IDOK)
		{
			

		}		
		return 1;
}

int CSysInsuranceView::ExportPatientListToExcel()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	ShowMessageBox(_T("Chức năng này sẽ Export ra Excel danh sách trên màn hình!"), MB_OK);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CStringArray arrCol;
	CExcel xls;
	CString szSQL, tmpStr, strtype;
	double nTmp = 0;
	long double nTotalAmount = 0;
	int nIdx = 1, nRow = 0, nCol = 0, nTotalOrder = 0;

	if (m_nOutPatient == 0)
	{
		strtype = _T("Điều trị ngoại trú phòng khám");
	}

	if (m_nInPatient == 0)
	{
		strtype = _T("Điều trị nội trú");
	}

	if (m_nAll == 0)
	{
		strtype = _T("Tất cả bệnh nhân");
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 0);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 22);
	xls.SetColumnWidth(6,12);

	xls.SetColumnWidth(7,14);
	xls.SetColumnWidth(8,14);
	xls.SetColumnWidth(9,20);
	xls.SetColumnWidth(10,15);
	xls.SetColumnWidth(11,15);
	xls.SetColumnWidth(12,15);
	xls.SetColumnWidth(13,15);
	xls.SetColumnWidth(14,15);
	xls.SetColumnWidth(15,15);
	xls.SetColumnWidth(16,15);	


	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 11);
	xls.SetCellMergedColumns(0, 3, 11);
	xls.SetCellMergedColumns(0, 4, 11);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	xls.SetCellText(0, 2, _T("Danh sách bệnh nhân tạo dữ liệu bảo hiểm"), 4098, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	xls.SetCellText(0, 4, strtype, 4098, true);

	//TODO: Write Column Header

	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Số HS"));
	arrCol.Add(_T("Tên bệnh nhân"));
	arrCol.Add(_T("Năm sinh"));
	arrCol.Add(_T("Mã thẻ"));
	arrCol.Add(_T("Khoa"));
	arrCol.Add(_T("Ngày vào"));
	arrCol.Add(_T("Ngày ra"));
	arrCol.Add(_T("Tổng chi_Phơi"));
	arrCol.Add(_T("Tổng chi_XML"));
	arrCol.Add(_T("Tổng BHTT_Phơi"));
	arrCol.Add(_T("Tổng BHTT_XML"));
	arrCol.Add(_T("Tổng BNTT_Phơi"));
	arrCol.Add(_T("Tổng BNTT_XML"));
	arrCol.Add(_T("Đã gửi"));
	arrCol.Add(_T("Số hóa đơn"));
	arrCol.Add(_T("Mã Liên kết"));
	

	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(i, 5, arrCol.GetAt(i), 4098, true);
		nRow = 6;
		
	for( int i=0; i < m_wndListPatient.GetItemCount();i++)
	{
		for(int j=0; j < m_wndListPatient.GetColumnCount(); j++)
		{
			
			tmpStr= m_wndListPatient.GetItemText(i,j);
		
			switch(j)
			{
			case 0:
			
				xls.SetCellText(j, nRow, tmpStr, FMT_INTEGER);
				break;
			
			case 1:
			
				xls.SetCellText(j, nRow, tmpStr, FMT_INTEGER);
				break;
		
			case 8:
		
				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;
		
			case 9:
			
				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;
			
			case 10:
			
				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;

			case 11:
			
				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;
			
			case 12:
		
				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;

			case 13:
		
				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;

			case 15:
		
				xls.SetCellText(j, nRow, tmpStr, FMT_NUMBER1);
				break;
		
			default:
			xls.SetCellText(j, nRow, tmpStr, FMT_TEXT);
			break;
			}
		}
		nRow++;

	}
	
	/*if (nTotalOrder > 0)
	{
		xls.SetCellText(4, nRow, _T("Số đơn:"), 4098, true);
		xls.SetCellText(5, nRow, int2str(nTotalOrder), FMT_NUMBER1, true);
		nRow++;
		xls.SetCellText(4, nRow, _T("Tổng số tiền:"), 4098, true);
		tmpStr.Format(_T("%f"), nTotalAmount);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
	}*/
	EndWaitCursor();

	xls.Save(_T("Exports\\DanhsachtaodulieuBH.xls"));
	
	return 1;
}
	void CSysInsuranceView::OnLoadFromTmpTableSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
CString CSysInsuranceView::GetQueryStringFromTable()
{
	CString szSQL,szWhere;
	UpdateData(true);
	CString szToDate;

	szToDate = m_szToDate.Left(17);
	szToDate += _T("59");

	if(m_nDocno >0)
		szWhere.Format(_T(" and hfe_docno=%ld"),m_nDocno);
	
	if(!m_nInPatient)
		{
			szWhere.AppendFormat(_T("and hfe_class in ('I') "));
		}
	if(!m_nOutPatient)
		{
			szWhere.AppendFormat(_T("and hfe_class in ('E','O') "));
		}
	if(!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T("and hfe_deptid='%s' "),m_szDeptKey);

	if(!m_szPatientName.IsEmpty())
		szWhere.AppendFormat(_T(" and substr(hd_cardno,1,15) = '%s'"),m_szPatientName);

	if(m_bImport== true)
			szWhere.AppendFormat(_T(" and hfe_docno in (%s)"),m_szArrayDocno);

	if(m_bQNObject)
		szWhere.AppendFormat(_T(" and substr(hd_cardno,1,2) in ('QN','CA','CY') "));

	if(m_bBHBQP)
		szWhere.AppendFormat(_T(" and ( (hfe_class='E' and  substr(hd_cardno,4,2) ='97' ) or (select count(*) from hms_fee_invoice_card where hfec_docno =hfe_docno  and hfec_invoiceno =hfe_invoiceno   and substr(hfec_cardno,4,2) ='97' and hfec_regdate > '14-SEP-52') >0  ) "));
	if(m_bBHXH) 
		szWhere.AppendFormat(_T(" and ( (hfe_class='E' and  substr(hd_cardno,4,2) <> '97' ) or (select count(*) from hms_fee_invoice_card where hfec_docno =hfe_docno  and hfec_invoiceno =hfe_invoiceno   and substr(hfec_cardno,4,2) <> '97' and hfec_regdate > '14-SEP-52') > 0  ) "));

szSQL.Format(_T(" SELECT hfe_docno                   AS ma_bn,") \
				_T("   get_patientname(hfe_docno)       AS ho_ten,") \
				_T("   TO_CHAR(hp_birthdate,'YYYYMMDD') AS ngay_sinh,") \
				_T("   CASE") \
				_T("     WHEN hp_sex='F'") \
				_T("     THEN 2") \
				_T("     ELSE 1") \
				_T("   END AS gioi_tinh,") \
				_T("   SUBSTR(hd_cardno,1,15)                           AS ma_the,") \
				_T("   CASE") \
				_T("     WHEN hcr_admitdate IS NOT NULL") \
				_T("     THEN hcr_admitdate") \
				_T("     ELSE hd_admitdate") \
				_T("   END AS ngay_vao,") \
				_T("   CASE") \
				_T("     WHEN hcr_dischargedate IS NOT NULL") \
				_T("     THEN hcr_dischargedate") \
				_T("     ELSE hd_enddate") \
				_T("   END AS ngay_ra,") \
				_T("   hfe_inspaid                        AS t_tongchi,") \
				_T("   hfe_inspaid - hfe_discount         AS t_bntt,") \
				_T("   hfe_discount                       AS t_bhtt,") \
				_T("   ' '                          AS ma_pttt_qt,") \
				_T("   hd_docno                     AS so_phieu,") \
				_T("   hfe_deptid         AS ma_khoabv,") \
				_T("   hfe_invoiceno AS invoiceno,") \
				_T("   CAST (hfe_docno AS NVARCHAR2(8))") \
				_T("   ||'-'") \
				_T("   ||CAST(hfe_treattime AS NVARCHAR2(5)) AS malk,") \
				_T("   TO_CHAR(hfe_date,'YYYYMMDDHH24MI') AS ngay_ttoan") \
				_T(" FROM hms_fee_invoice") \
				_T(" LEFT JOIN hms_object ON (ho_id = hfe_objectid) ") \
				_T(" LEFT JOIN sys_dept") \
				_T(" ON (sd_id=hfe_deptid)") \
				_T(" LEFT JOIN hms_doc") \
				_T(" ON (hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_patient") \
				_T(" ON (hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record") \
				_T(" ON (hcr_docno=hd_docno)") \
				_T(" LEFT JOIN BH_IMPORT_FROM_TABLE tmp") \
				_T(" ON (tmp.MA_LK = hfe_docno||'-'||hfe_treattime)") \
				
				//_T(" AND hfe_treattime                        = SUBSTR(tmp.MA_LK, 10,11))") \//

				_T(" WHERE hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS')") \
				_T(" %s ") \
				_T(" AND hfe_discount      >0") \
				_T(" AND hfe_status       ='P'") \
				//_T(" AND LENGTH(hd_cardno) >=15") \//
				_T(" AND ho_type in ('I','C') AND tmp.MA_LK is NOT NULL") \
				_T(" ORDER BY ma_khoabv,ngay_ttoan,") \
				_T("   ma_bn "),m_szFromDate,szToDate,szWhere);
				//_msg(_T("%s"),szSQL);				

	return szSQL;
}