#include "stdafx.h"
#include "TMSuDungDVKT_IVF.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMSuDungDVKTIVF* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMSuDungDVKTIVF* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnRoomAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMSuDungDVKTIVF* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnObjectAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMSuDungDVKTIVF* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnStatusAddNew();
}*/
static void _OnOperationGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMSuDungDVKTIVF* )pWnd)->OnOperationGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationGroupSelendokFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnOperationGroupSelendok();
}
/*static void _OnOperationGroupSetfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnOperationGroupKillfocus();
}*/
/*static void _OnOperationGroupKillfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnOperationGroupKillfocus();
}*/
static long _OnOperationGroupLoadDataFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF *)pWnd)->OnOperationGroupLoadData();
}
/*static void _OnOperationGroupAddNewFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnOperationGroupAddNew();
}*/
static void _OnParaclinicalGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMSuDungDVKTIVF* )pWnd)->OnParaclinicalGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParaclinicalGroupSelendokFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnParaclinicalGroupSelendok();
}
/*static void _OnParaclinicalGroupSetfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnParaclinicalGroupKillfocus();
}*/
/*static void _OnParaclinicalGroupKillfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnParaclinicalGroupKillfocus();
}*/
static long _OnParaclinicalGroupLoadDataFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF *)pWnd)->OnParaclinicalGroupLoadData();
}
/*static void _OnParaclinicalGroupAddNewFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnParaclinicalGroupAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF *)pWnd)->OnNameCheckValue();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CTMSuDungDVKTIVF*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CTMSuDungDVKTIVF*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CTMSuDungDVKTIVF*)pWnd)->OnOutPatientSelect();
}
static void _OnHitechSelectFnc(CWnd *pWnd){
	 ((CTMSuDungDVKTIVF*)pWnd)->OnHitechSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMSuDungDVKTIVF*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMSuDungDVKTIVF*)pWnd)->OnListDeleteItem();
}
static int _OnListSelectAllFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF*)pWnd)->OnListSelectAll();
} 
static int _OnListUnselectAllFnc(CWnd *pWnd){
	return ((CTMSuDungDVKTIVF*)pWnd)->OnListUnselectAll();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMSuDungDVKTIVF *pVw = (CTMSuDungDVKTIVF *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddTMSuDungDVKTFnc(CWnd *pWnd){
	 return ((CTMSuDungDVKTIVF*)pWnd)->OnAddTMSuDungDVKT();
} 
static int _OnEditTMSuDungDVKTFnc(CWnd *pWnd){
	 return ((CTMSuDungDVKTIVF*)pWnd)->OnEditTMSuDungDVKT();
} 
static int _OnDeleteTMSuDungDVKTFnc(CWnd *pWnd){
	 return ((CTMSuDungDVKTIVF*)pWnd)->OnDeleteTMSuDungDVKT();
} 
static int _OnSaveTMSuDungDVKTFnc(CWnd *pWnd){
	 return ((CTMSuDungDVKTIVF*)pWnd)->OnSaveTMSuDungDVKT();
} 
static int _OnCancelTMSuDungDVKTFnc(CWnd *pWnd){
	 return ((CTMSuDungDVKTIVF*)pWnd)->OnCancelTMSuDungDVKT();
} 
static void _OnChuaVaoPhimSelectFnc(CWnd *pWnd){
	((CTMSuDungDVKTIVF*)pWnd)->OnChuaVaoPhimSelect();
}
CTMSuDungDVKTIVF::CTMSuDungDVKTIVF(CWnd* pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMSuDungDVKTIVF::~CTMSuDungDVKTIVF(){
}
void CTMSuDungDVKTIVF::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 535);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 285, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 290, 30, 370, 55);
	m_wndToDate.Create(this,375, 30, 570, 55); 
	m_wndDepartmentLabel.Create(this, _T("Khoa YC"), 10, 60, 90, 85);
	m_wndDepartment.Create(this,95, 60, 285, 85); 
	m_wndRoomLabel.Create(this, _T("Room"), 290, 60, 370, 85);
	m_wndRoom.Create(this,375, 60, 570, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.Create(this,95, 90, 285, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 290, 90, 370, 115);
	m_wndStatus.Create(this,375, 90, 570, 115); 
	m_wndOperationGroupLabel.Create(this, _T("Operation Group"), 10, 120, 90, 145);
	m_wndOperationGroup.Create(this,95, 120, 285, 145); 
	m_wndParaclinicalGroupLabel.Create(this, _T("Paraclinical Group"), 290, 120, 370, 145);
	m_wndParaclinicalGroup.Create(this,375, 120, 570, 145); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 150, 90, 175);
	m_wndName.Create(this,95, 150, 570, 175); 
	m_wndAll.Create(this, _T("All"), 10, 180, 90, 205);
	m_wndInPatient.Create(this, _T("InPatient"), 95, 180, 175, 205);
	m_wndOutPatient.Create(this, _T("OutPatient"), 185, 180, 285, 205);
	m_wndHitech.Create(this, _T("Hitech"), 290, 180, 390, 205);
	m_wndList.Create(this,10, 210, 570, 530); 
	m_wndExport.Create(this, _T("&ExportXLS"), 490, 540, 570, 565);

	m_wndChuaVaoPhim.Create(this, L"", 0, 0, 0, 0);
	m_wndChuaVaoPhim.ShowWindow(SW_HIDE);
	m_wndChuaVaoPhim.EnableWindow(FALSE);
}
void CTMSuDungDVKTIVF::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
// 	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndFromDate.SetCheckValue(true);
// 	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1024);
	m_wndOperationGroup.SetCheckValue(true);
	m_wndOperationGroup.LimitText(1024);
	m_wndParaclinicalGroup.SetCheckValue(true);
	m_wndParaclinicalGroup.LimitText(1024);
// 	m_wndName.SetLimitText(1024);
// 	m_wndName.SetCheckValue(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndRoom.InsertColumn(2, _T("Department"), CFMT_TEXT, 50);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.SetCheckBox(TRUE);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 500);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Group"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Type"), CFMT_TEXT, 0);

	m_wndOperationGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOperationGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndParaclinicalGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndParaclinicalGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CTMSuDungDVKTIVF::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndOperationGroup.SetEvent(WE_SELENDOK, _OnOperationGroupSelendokFnc);
	//m_wndOperationGroup.SetEvent(WE_SETFOCUS, _OnOperationGroupSetfocusFnc);
	//m_wndOperationGroup.SetEvent(WE_KILLFOCUS, _OnOperationGroupKillfocusFnc);
	m_wndOperationGroup.SetEvent(WE_SELCHANGE, _OnOperationGroupSelectChangeFnc);
	m_wndOperationGroup.SetEvent(WE_LOADDATA, _OnOperationGroupLoadDataFnc);
	//m_wndOperationGroup.SetEvent(WE_ADDNEW, _OnOperationGroupAddNewFnc);
	m_wndParaclinicalGroup.SetEvent(WE_SELENDOK, _OnParaclinicalGroupSelendokFnc);
	//m_wndParaclinicalGroup.SetEvent(WE_SETFOCUS, _OnParaclinicalGroupSetfocusFnc);
	//m_wndParaclinicalGroup.SetEvent(WE_KILLFOCUS, _OnParaclinicalGroupKillfocusFnc);
	m_wndParaclinicalGroup.SetEvent(WE_SELCHANGE, _OnParaclinicalGroupSelectChangeFnc);
	m_wndParaclinicalGroup.SetEvent(WE_LOADDATA, _OnParaclinicalGroupLoadDataFnc);
	//m_wndParaclinicalGroup.SetEvent(WE_ADDNEW, _OnParaclinicalGroupAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndHitech.SetEvent(WE_CLICK, _OnHitechSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Select All"), _OnListSelectAllFnc);
	m_wndList.AddEvent(2, _T("Unselect All"), _OnListUnselectAllFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddTMSuDungDVKTFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditTMSuDungDVKTFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteTMSuDungDVKTFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveTMSuDungDVKTFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelTMSuDungDVKTFnc, 0, 'T', VK_CONTROL);
	m_wndChuaVaoPhim.SetEvent(WE_CLICK, _OnChuaVaoPhimSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnListLoadData();

}
void CTMSuDungDVKTIVF::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOperationGroup.GetDlgCtrlID(), m_szOperationGroupKey);
	DDX_TextEx(pDX, m_wndParaclinicalGroup.GetDlgCtrlID(), m_szParaclinicalGroupKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Check(pDX, m_wndHitech.GetDlgCtrlID(), m_bHitech);
	DDX_Check(pDX, m_wndChuaVaoPhim.GetDlgCtrlID(), m_bChuaVaoPhim);

}
void CTMSuDungDVKTIVF::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("Room")] =  m_szRoomKey;
	m_jData[_T("Object")] =  m_szObjectKey;
	m_jData[_T("Status")] =  m_szStatusKey;
	m_jData[_T("OperationGroup")] =  m_szOperationGroupKey;
	m_jData[_T("ParaclinicalGroup")] =  m_szParaclinicalGroupKey;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("All")] =  m_nAll;
	m_jData[_T("InPatient")] =  m_nInPatient;
	m_jData[_T("OutPatient")] =  m_nOutPatient;
	m_jData[_T("Hitech")] =  m_bHitech;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("Room")].GetValue(m_szRoomKey);
	m_jData[_T("Object")].GetValue(m_szObjectKey);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	m_jData[_T("OperationGroup")].GetValue(m_szOperationGroupKey);
	m_jData[_T("ParaclinicalGroup")].GetValue(m_szParaclinicalGroupKey);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("All")].GetValue(m_nAll);
	m_jData[_T("InPatient")].GetValue(m_nInPatient);
	m_jData[_T("OutPatient")].GetValue(m_nOutPatient);
	m_jData[_T("Hitech")].GetValue(m_bHitech);
	}

}
void CTMSuDungDVKTIVF::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMSuDungDVKTIVF::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMSuDungDVKTIVF::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();
	m_szObjectKey.Empty();
	m_szStatusKey.Empty();
	m_szOperationGroupKey.Empty();
	m_szParaclinicalGroupKey.Empty();
	m_szName.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;
	m_bHitech=FALSE;
	m_bChuaVaoPhim=FALSE;

}
int CTMSuDungDVKTIVF::SetMode(int nMode){
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
/*void CTMSuDungDVKTIVF::OnFromDateChange(){
	
} */
/*void CTMSuDungDVKTIVF::OnFromDateSetfocus(){
	
} */
/*void CTMSuDungDVKTIVF::OnFromDateKillfocus(){
	
} */
int CTMSuDungDVKTIVF::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMSuDungDVKTIVF::OnToDateChange(){
	
} */
/*void CTMSuDungDVKTIVF::OnToDateSetfocus(){
	
} */
/*void CTMSuDungDVKTIVF::OnToDateKillfocus(){
	
} */
int CTMSuDungDVKTIVF::OnToDateCheckValue(){
	return 0;
} 
void CTMSuDungDVKTIVF::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMSuDungDVKTIVF::OnDepartmentSelendok(){
	 
}
/*void CTMSuDungDVKTIVF::OnDepartmentSetfocus(){
	
}*/
/*void CTMSuDungDVKTIVF::OnDepartmentKillfocus(){
	
}*/
long CTMSuDungDVKTIVF::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type IN('KB', 'DT') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMSuDungDVKTIVF::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMSuDungDVKTIVF::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMSuDungDVKTIVF::OnRoomSelendok(){
	 
}
/*void CTMSuDungDVKTIVF::OnRoomSetfocus(){
	
}*/
/*void CTMSuDungDVKTIVF::OnRoomKillfocus(){
	
}*/
long CTMSuDungDVKTIVF::OnRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.AppendFormat(_T(" and hrl_id='%s' "), m_szRoomKey);
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name, hrl_deptid as deptid FROM hms_roomlist WHERE hrl_deptid IN('C1.1','C1.2','C1.3') %s ORDER BY deptid, id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMSuDungDVKTIVF::OnRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMSuDungDVKTIVF::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMSuDungDVKTIVF::OnObjectSelendok(){
	 
}
/*void CTMSuDungDVKTIVF::OnObjectSetfocus(){
	
}*/
/*void CTMSuDungDVKTIVF::OnObjectKillfocus(){
	
}*/
long CTMSuDungDVKTIVF::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		//szWhere.Format();
	};
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object ORDER BY ho_id"));
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMSuDungDVKTIVF::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMSuDungDVKTIVF::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMSuDungDVKTIVF::OnStatusSelendok(){
	 
}
/*void CTMSuDungDVKTIVF::OnStatusSetfocus(){
	
}*/
/*void CTMSuDungDVKTIVF::OnStatusKillfocus(){
	
}*/
long CTMSuDungDVKTIVF::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szStatusKey);
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_order_status' AND ss_code IN('T', 'S', 'O') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMSuDungDVKTIVF::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMSuDungDVKTIVF::OnOperationGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMSuDungDVKTIVF::OnOperationGroupSelendok(){
	UpdateData(TRUE);
	m_wndParaclinicalGroup.DeleteAllItems(); 
	OnListLoadData();
}
/*void CTMSuDungDVKTIVF::OnOperationGroupSetfocus(){
	
}*/
/*void CTMSuDungDVKTIVF::OnOperationGroupKillfocus(){
	
}*/
long CTMSuDungDVKTIVF::OnOperationGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperationGroup.IsSearchKey() && !m_szOperationGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szOperationGroupKey);
	};
	m_wndOperationGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name FROM hms_fee_group WHERE substr(hfg_id,1,2) in('B4','B5') ") \
		_T("AND hfg_active='Y' %s ORDER BY hfg_index, hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperationGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMSuDungDVKTIVF::OnOperationGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMSuDungDVKTIVF::OnParaclinicalGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMSuDungDVKTIVF::OnParaclinicalGroupSelendok(){
	UpdateData(TRUE);
	m_wndOperationGroup.DeleteAllItems(); 
	OnListLoadData();
}
/*void CTMSuDungDVKTIVF::OnParaclinicalGroupSetfocus(){
	
}*/
/*void CTMSuDungDVKTIVF::OnParaclinicalGroupKillfocus(){
	
}*/
long CTMSuDungDVKTIVF::OnParaclinicalGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParaclinicalGroup.IsSearchKey() && !m_szParaclinicalGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szParaclinicalGroupKey);
	};
	m_wndParaclinicalGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name FROM hms_fee_group WHERE substr(hfg_id, 1, 2) IN('B1','B2','B3') AND hfg_id='B1H00'") \
		_T("AND hfg_active='Y' %s ORDER BY hfg_index, hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParaclinicalGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMSuDungDVKTIVF::OnParaclinicalGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMSuDungDVKTIVF::OnNameChange(){
	
} */
/*void CTMSuDungDVKTIVF::OnNameSetfocus(){
	
} */
/*void CTMSuDungDVKTIVF::OnNameKillfocus(){
	
} */
int CTMSuDungDVKTIVF::OnNameCheckValue(){
	OnListLoadData();
	return 1;
} 
void CTMSuDungDVKTIVF::OnAllSelect(){
	
}
void CTMSuDungDVKTIVF::OnInPatientSelect(){
	
}
void CTMSuDungDVKTIVF::OnOutPatientSelect(){
	
}
	void CTMSuDungDVKTIVF::OnHitechSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CTMSuDungDVKTIVF::OnListSelectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	return 0;
} 
int CTMSuDungDVKTIVF::OnListUnselectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
	return 0;
} 
void CTMSuDungDVKTIVF::OnListDblClick(){
	UpdateData(TRUE);
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	for (int i=0; i< m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i,false);
	}
	m_wndList.SetCheck(nSel, !m_wndList.GetCheck(nSel));
} 
void CTMSuDungDVKTIVF::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMSuDungDVKTIVF::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMSuDungDVKTIVF::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);

	m_wndList.BeginLoad(); 
	int nCount = 0;

	if(!m_szName.IsEmpty())
	{
	szWhere.AppendFormat(_T(" AND lower(hfl_name) like(lower('%s%s%s')) "), _T("%"), m_szName, _T("%"));
	}

	if(!m_szOperationGroupKey.IsEmpty())
	{
	szWhere.AppendFormat(_T(" AND hfl_groupid = '%s'"), m_szOperationGroupKey);
	}

	if(!m_szParaclinicalGroupKey.IsEmpty())
	{
	szWhere.AppendFormat(_T(" AND hfl_groupid = '%s'"), m_szParaclinicalGroupKey);
	}


	szSQL.Format(_T(" SELECT hfl_feeid AS id, hfl_name AS name, hfl_unit AS unit, hfl_groupid AS groupid, hfl_typeid AS typeid FROM hms_fee_list ") \
	_T(" WHERE hfl_typeid IN('O', 'P', 'T') AND hfl_active = 'Y' %s ORDER BY hfl_feeid, hfl_name "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
	m_wndList.AddItems(
	rs.GetValue(_T("id")), 
	rs.GetValue(_T("name")), 
	rs.GetValue(_T("unit")), 
	rs.GetValue(_T("groupid")),
	rs.GetValue(_T("typeid")),
	NULL);
	rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CTMSuDungDVKTIVF::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\THONGKE_SUDUNG_DICHVU_KYTHUAT_TRUNGTAMHIEMMUON.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

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

		rs.GetValue(_T("ten_benh_nhan"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("so_ho_so"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("khoa_chi_dinh"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("thoigian_chidinh"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoa_thuc_hien"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("thoigian_thuchien"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngay_vao"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngay_ra"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("chan_doan"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bac_si_chi_dinh"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ten"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("so_luong"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("thanh_tien"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("ngay_thu"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT | FMT_CENTER);

		rs.GetValue(_T("doi_tuong"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		
		nRow++;
		rs.MoveNext();
	}
	
	if (nGroupTotal[13] > 0)
	{
		xls.SetCellText(11, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 12; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}
	
	xls.Save(_T("Exports\\THONGKE_SUDUNG_DICHVU_KYTHUAT_TRUNGTAMHIEMMUON2.xls"));
} 
int CTMSuDungDVKTIVF::OnAddTMSuDungDVKT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMSuDungDVKTIVF::OnEditTMSuDungDVKT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMSuDungDVKTIVF::OnDeleteTMSuDungDVKT(){
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
 		OnCancelTMSuDungDVKT();
 	}
	return 0;
}
int CTMSuDungDVKTIVF::OnSaveTMSuDungDVKT(){
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
 		//OnTMSuDungDVKTListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMSuDungDVKTIVF::OnCancelTMSuDungDVKT(){
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
int CTMSuDungDVKTIVF::OnTMSuDungDVKTListLoadData(){
	return 0;
}
CString CTMSuDungDVKTIVF::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szList, szChuaVaoPhim, szChuaVaoPhimPhong;

	if(!m_szDepartmentKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND khoa_chi_dinh = '%s'"), m_szDepartmentKey);			
		}

	
	if (!m_szObjectKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND doi_tuong = '%s'"), m_szObjectKey);			
		}

	if (!m_szStatusKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND trangthai = '%s'"), m_szStatusKey);			
		}
	
	for (int i = 0; i < m_wndList.GetItemCount();i++)
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szList.IsEmpty())
				szList += _T(", ");
			szList.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
		}

		if(!szList.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND ma_dich_vu IN (%s)"), szList);			
		}	
			
			szSQL.Format(_T(" SELECT *") \
			_T(" FROM") \
			_T(" (") \
			_T(" SELECT Get_patientname(ivf.hfe_docno) AS ten_benh_nhan,") \
			_T("   ivf.hfe_docno                       AS so_ho_so,") \
			_T("   pivf.ORDERID                        AS orderid,") \
			_T("   fe.hfe_deptid                       AS khoa_chi_dinh,") \
			_T("   TO_CHAR(pivf.orderdate,'DD/MM/YYYY HH24:MI') AS thoigian_chidinh,") \
			_T("   CASE WHEN pivf.pdeptid is not null THEN pivf.pdeptid else hfl_deptid end as khoa_thuc_hien,") \
			_T("   TO_CHAR(pivf.performdate,'DD/MM/YYYY HH24:MI') as thoigian_thuchien,") \
			_T("    CASE") \
			_T("       WHEN ivf.HFE_CLASS = 'I'") \
			_T("       THEN TO_CHAR(HCR_ADMITDATE, 'DD/MM/YYYY HH24:MI')") \
			_T("       ELSE TO_CHAR(HD_ADMITDATE, 'DD/MM/YYYY HH24:MI')") \
			_T("     END ngay_vao,") \
			_T("     CASE") \
			_T("       WHEN ivf.HFE_CLASS = 'I'") \
			_T("       THEN TO_CHAR(HCR_DISCHARGEDATE, 'DD/MM/YYYY HH24:MI')") \
			_T("       ELSE TO_CHAR(HD_ENDDATE, 'DD/MM/YYYY HH24:MI')") \
			_T("     END ngay_ra,") \
			_T("   CASE ") \
			_T("     WHEN ivf.HFE_CLASS = 'I'") \
			_T("     THEN HCR_MAINDISEASE") \
			_T("     ELSE HD_DIAGNOSTIC") \
			_T("     END chan_doan,") \
			_T("     pivf.doctor as bac_si_chi_dinh,") \
			_T("     fe.hfe_itemid as ma_dich_vu,") \
			_T("     pivf.status as trangthai,") \
			_T("     fe.hfe_desc as ten,") \
			_T("     fe.hfe_quantity as so_luong,") \
			_T("     fe.hfe_cost as thanh_tien,") \
			_T("     ivf.hfe_date as ngay_thu,    ") \
			_T("   Hms_Getobjectname(fe.hfe_object)    AS doi_tuong  ") \
			_T(" FROM Hms_Fee fe") \
			_T(" LEFT JOIN HMS_FEE_INVOICE ivf") \
			_T(" ON (fe.hfe_docno    =ivf.hfe_docno AND fe.hfe_invoiceno=ivf.hfe_invoiceno)") \
			_T(" LEFT JOIN HMSV_PDEPT_PARACLINIC_IVF pivf") \
			_T(" ON ( fe.hfe_docno     = pivf.docno AND fe.hfe_orderid = pivf.orderid)") \
			_T(" LEFT JOIN hms_fee_list ON (fe.hfe_itemid=hfl_feeid)") \
			_T(" LEFT JOIN hms_doc ON (ivf.hfe_docno = hd_docno)") \
			_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (ivf.hfe_docno=hcr_docno)") \
			_T(" WHERE ivf.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND fe.hfe_status IN ('P', 'R')") \
			_T(" AND fe.hfe_type in ('P', 'T', 'O')") \
			_T(" GROUP BY ivf.hfe_docno, pivf.ORDERID,") \
			_T("   pivf.orderdate,") \
			_T("   pivf.pdeptid,") \
			_T("   hfl_deptid,") \
			_T("   pivf.performdate,") \
			_T("   ivf.HFE_CLASS,") \
			_T("   HCR_ADMITDATE,") \
			_T("   HD_ADMITDATE,") \
			_T("   HCR_DISCHARGEDATE,") \
			_T("   HD_ENDDATE,") \
			_T("   HCR_MAINDISEASE,") \
			_T("   HD_DIAGNOSTIC,") \
			_T("   pivf.doctor,") \
			_T("   fe.hfe_object,") \
			_T("   fe.hfe_deptid,") \
			_T("   ivf.hfe_date,") \
			_T("   fe.hfe_itemid,") \
			_T("   pivf.status,") \
			_T("   fe.hfe_desc,") \
			_T("   fe.hfe_quantity,") \
			_T("   fe.hfe_cost") \
			_T(" ORDER BY fe.hfe_deptid,") \
			_T("   ivf.hfe_date") \
			_T(" )") \
			_T(" WHERE 1=1 AND khoa_thuc_hien in ('TTHTSS', 'TTDTHM') %s"), m_szFromDate, m_szToDate, szWhere);					
		
		return szSQL;
}
void CTMSuDungDVKTIVF::OnChuaVaoPhimSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}