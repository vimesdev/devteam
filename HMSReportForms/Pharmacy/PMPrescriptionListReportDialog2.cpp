#include "stdafx.h"
#include "PMPrescriptionListReportDialog2.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMPrescriptionListReportDialog2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMPrescriptionListReportDialog2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMPrescriptionListReportDialog2* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMPrescriptionListReportDialog2 *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnStockAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMPrescriptionListReportDialog2* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CPMPrescriptionListReportDialog2 *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2 *)pWnd)->OnObjectAddNew();
}*/
static void _OnCheckAllSelectFnc(CWnd *pWnd){
	  ((CPMPrescriptionListReportDialog2*)pWnd)->OnCheckAllSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CPMPrescriptionListReportDialog2*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CPMPrescriptionListReportDialog2*)pWnd)->OnInPatientSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMPrescriptionListReportDialog2*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMPrescriptionListReportDialog2*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMPrescriptionListReportDialog2*)pWnd)->OnListDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CPMPrescriptionListReportDialog2*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CPMPrescriptionListReportDialog2*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMPrescriptionListReportDialog2*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMPrescriptionListReportDialog2*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMPrescriptionListReportDialog2 *pVw = (CPMPrescriptionListReportDialog2 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMPrescriptionListReportDialog2 *pVw = (CPMPrescriptionListReportDialog2 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMPrescriptionListReportDialog2Fnc(CWnd *pWnd){
	 return ((CPMPrescriptionListReportDialog2*)pWnd)->OnAddPMPrescriptionListReportDialog2();
} 
static int _OnEditPMPrescriptionListReportDialog2Fnc(CWnd *pWnd){
	 return ((CPMPrescriptionListReportDialog2*)pWnd)->OnEditPMPrescriptionListReportDialog2();
} 
static int _OnDeletePMPrescriptionListReportDialog2Fnc(CWnd *pWnd){
	 return ((CPMPrescriptionListReportDialog2*)pWnd)->OnDeletePMPrescriptionListReportDialog2();
} 
static int _OnSavePMPrescriptionListReportDialog2Fnc(CWnd *pWnd){
	 return ((CPMPrescriptionListReportDialog2*)pWnd)->OnSavePMPrescriptionListReportDialog2();
} 
static int _OnCancelPMPrescriptionListReportDialog2Fnc(CWnd *pWnd){
	 return ((CPMPrescriptionListReportDialog2*)pWnd)->OnCancelPMPrescriptionListReportDialog2();
}
static int _OnListCheckC11RoomFnc(CWnd *pWnd){
	return ((CPMPrescriptionListReportDialog2*)pWnd)->OnListCheckC11Room();
} 
static int _OnListCheckC12RoomFnc(CWnd *pWnd){
	return ((CPMPrescriptionListReportDialog2*)pWnd)->OnListCheckC12Room();
} 
static int _OnListCheckC13RoomFnc(CWnd *pWnd){
	return ((CPMPrescriptionListReportDialog2*)pWnd)->OnListCheckC13Room();
}
static int _OnListUncheckAllFnc(CWnd *pWnd){
	return ((CPMPrescriptionListReportDialog2*)pWnd)->OnListUncheckAll();
}  
static int _OnLoadDrugListFnc(CWnd *pWnd){
	return ((CPMPrescriptionListReportDialog2*)pWnd)->OnDrugListLoadData();
} 
CPMPrescriptionListReportDialog2::CPMPrescriptionListReportDialog2(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMPrescriptionListReportDialog2::~CPMPrescriptionListReportDialog2(){
}
void CPMPrescriptionListReportDialog2::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 120);
	m_wndDeptType.Create(this, _T("Dept Type"), 5, 125, 290, 180);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 395, 55);
	m_wndToDate.Create(this,400, 30, 570, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 110, 85);
	m_wndStock.SetCheckBox(TRUE);
	m_wndStock.Create(this,115, 60, 570, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 89, 110, 114);
	m_wndObject.SetCheckBox(TRUE);
	m_wndObject.Create(this,115, 89, 570, 114); 
	m_wndCheckAll.Create(this, _T("Check All"), 10, 150, 95, 175);
	m_wndOutPatient.Create(this, _T("OutPatient"), 100, 150, 170, 175);
	m_wndInPatient.Create(this, _T("In Patient"), 175, 150, 285, 175);
	m_wndList.Create(this,5, 185, 290, 550); 
	m_wndDrugList.Create(this,295, 125, 575, 550); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 370, 555, 480, 580);
	m_wndExport.Create(this, _T("&Export"), 485, 555, 575, 580);

}
void CPMPrescriptionListReportDialog2::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);



	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 220);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 80);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	
	m_wndList.SetCheckBox(true);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 390);
	m_wndList.InsertColumn(2, _T("DeptID"), CFMT_TEXT, 0);

	m_wndDrugList.SetCheckBox(true);
	m_wndDrugList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndDrugList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 390);





}
void CPMPrescriptionListReportDialog2::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndCheckAll.SetEvent(WE_CLICK, _OnCheckAllSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Check C1.1 Room"), _OnListCheckC11RoomFnc, 0, 0, 0);
	m_wndList.AddEvent(2, _T("Check C1.2 Room"), _OnListCheckC12RoomFnc, 0, 0, 0);
	m_wndList.AddEvent(3, _T("Check C1.3 Room"), _OnListCheckC13RoomFnc, 0, 0, 0);
	m_wndList.AddEvent(4, _T("Uncheck All"), _OnListUncheckAllFnc, 0, 0, 0);
	m_wndCheckAll.SetCheck(true);
	m_szCondition = _T("A");
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Load thuốc"), _OnLoadDrugListFnc, 0, 0, 0);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPMPrescriptionListReportDialog2Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMPrescriptionListReportDialog2Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMPrescriptionListReportDialog2Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMPrescriptionListReportDialog2Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPMPrescriptionListReportDialog2Fnc, 0, 'T', VK_CONTROL);
	m_szFromDate = pMF->GetSysDate() + _T("00:00");
	m_szToDate = pMF->GetSysDate() + _T("23:59");
	UpdateData(FALSE);

}
void CPMPrescriptionListReportDialog2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Radio(pDX, m_wndCheckAll.GetDlgCtrlID(), m_nCheckAll);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);

}
void CPMPrescriptionListReportDialog2::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Stock")] =  m_szStockKey;
	m_jData[_T("Object")] =  m_szObjectKey;
	m_jData[_T("CheckAll")] =  m_nCheckAll;
	m_jData[_T("OutPatient")] =  m_nOutPatient;
	m_jData[_T("InPatient")] =  m_nInPatient;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Stock")].GetValue(m_szStockKey);
	m_jData[_T("Object")].GetValue(m_szObjectKey);
	m_jData[_T("CheckAll")].GetValue(m_nCheckAll);
	m_jData[_T("OutPatient")].GetValue(m_nOutPatient);
	m_jData[_T("InPatient")].GetValue(m_nInPatient);
	}

}
void CPMPrescriptionListReportDialog2::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMPrescriptionListReportDialog2::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMPrescriptionListReportDialog2::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szObjectKey.Empty();
	m_nCheckAll=0;
	m_nOutPatient=1;
	m_nInPatient=1;

}
int CPMPrescriptionListReportDialog2::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CPMPrescriptionListReportDialog2::OnFromDateChange(){
	
} */
/*void CPMPrescriptionListReportDialog2::OnFromDateSetfocus(){
	
} */
/*void CPMPrescriptionListReportDialog2::OnFromDateKillfocus(){
	
} */
int CPMPrescriptionListReportDialog2::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMPrescriptionListReportDialog2::OnToDateChange(){
	
} */
/*void CPMPrescriptionListReportDialog2::OnToDateSetfocus(){
	
} */
/*void CPMPrescriptionListReportDialog2::OnToDateKillfocus(){
	
} */
int CPMPrescriptionListReportDialog2::OnToDateCheckValue(){
	return 0;
} 
void CPMPrescriptionListReportDialog2::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMPrescriptionListReportDialog2::OnStockSelendok(){
	 
}
/*void CPMPrescriptionListReportDialog2::OnStockSetfocus(){
	
}*/
/*void CPMPrescriptionListReportDialog2::OnStockKillfocus(){
	
}*/
long CPMPrescriptionListReportDialog2::OnStockLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0){
		szWhere.Format(_T(" AND msl_storage_id=%d"), ToInt(m_szStockKey));
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE 1=1 %s ORDER BY msl_storage_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMPrescriptionListReportDialog2::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMPrescriptionListReportDialog2::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMPrescriptionListReportDialog2::OnObjectSelendok(){
	 
}
/*void CPMPrescriptionListReportDialog2::OnObjectSetfocus(){
	
}*/
/*void CPMPrescriptionListReportDialog2::OnObjectKillfocus(){
	
}*/
long CPMPrescriptionListReportDialog2::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object ORDER BY ho_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMPrescriptionListReportDialog2::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMPrescriptionListReportDialog2::OnCheckAllSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szCondition = _T("A");
	OnListLoadData();
}
void CPMPrescriptionListReportDialog2::OnOutPatientSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szCondition = _T("O");
	OnListLoadData();
}
void CPMPrescriptionListReportDialog2::OnInPatientSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szCondition = _T("I");
	OnListLoadData();
}
void CPMPrescriptionListReportDialog2::OnListDblClick(){
} 
void CPMPrescriptionListReportDialog2::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
} 
int CPMPrescriptionListReportDialog2::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
int CPMPrescriptionListReportDialog2::OnListCheckC11Room(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_szCondition == _T("I"))
		return 0;
	CString tmpStr;

	for (int i = 0 ; i<m_wndList.GetItemCount(); i++)
	{
		tmpStr = m_wndList.GetItemText(i, 2);
		if (tmpStr == _T("C1.1"))
			m_wndList.SetCheck(i);
	}
	return 0;
} 
int CPMPrescriptionListReportDialog2::OnListCheckC12Room(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_szCondition == _T("I"))
		return 0;
	CString tmpStr;
	for (int i = 0 ; i<m_wndList.GetItemCount(); i++)
	{
		tmpStr = m_wndList.GetItemText(i, 2);
		if (tmpStr == _T("C1.2"))
			m_wndList.SetCheck(i);
	}
	return 0;
} 
int CPMPrescriptionListReportDialog2::OnListCheckC13Room(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_szCondition == _T("I"))
		return 0;
	CString tmpStr;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		tmpStr = m_wndList.GetItemText(i, 2);
		if (tmpStr == _T("C1.3"))
			m_wndList.SetCheck(i);
	}
	return 0;
} 
int CPMPrescriptionListReportDialog2::OnListUncheckAll(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_szCondition == _T("I"))
		return 0;
	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, false);
	}
	return 0;
} 
long CPMPrescriptionListReportDialog2::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	if (m_szCondition == _T("O"))	
		szSQL.Format(_T(" SELECT hrl_id as id, hrl_name as name, hrl_deptid as deptid FROM hms_roomlist WHERE hrl_deptid IN ('C1.1', 'C1.2', 'C1.3','TYC') ORDER BY hrl_deptid, hrl_id"));	
	if (m_szCondition == _T("I")) 
		szSQL.Format(_T(" SELECT sd_id as id, sd_name as name, 0 as deptid FROM sys_dept WHERE sd_type ='DT' ORDER BY sd_index"));
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CPMPrescriptionListReportDialog2::OnDrugListDblClick(){
	
} 
void CPMPrescriptionListReportDialog2::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMPrescriptionListReportDialog2::OnDrugListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMPrescriptionListReportDialog2::OnDrugListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhereRoomID, szWhere1, szObjects;
	m_wndDrugList.BeginLoad();
	m_wndDrugList.DeleteAllItems(); 

	szWhere.Format(_T(" AND hpo_orderstatus = 'A' AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpo_ordertype IN ('P', 'D', 'M', 'E')"), m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);

	CString szDeptType, szRoomC11, szRoomC12, szRoomC13, szListID, szDept;	
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
		}
	}

	szDeptType.Empty();
	szWhereRoomID.Empty();
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			if (!szRoomC11.IsEmpty())				
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
			if (!szRoomC13.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
			if (!szWhereRoomID.IsEmpty())
				szWhereRoomID.AppendFormat(_T(")"));
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			if(!szListID.IsEmpty())
				szWhereRoomID.Format(_T(" and hpo_deptid in(%s) ") , szListID);
		}
		if (!szDeptType.IsEmpty())
			szWhere.AppendFormat(_T("%s"), szDeptType);

		CString szStocks;
		for (int i = 0; i < m_wndStock.GetItemCount(); i++)
		{
			if (m_wndStock.GetCheck(i))
			{
				m_wndStock.SetCurSel(i);
				if (!szStocks.IsEmpty())
					szStocks += _T(", ");
				szStocks += m_wndStock.GetCurrent(0);
			}
		}
		if (!szStocks.IsEmpty())
			szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);

		szSQL.Format(_T("SELECT DISTINCT mp_code AS product_code, ") \
			_T("		 mp_name AS product_name") \
			_T("         FROM      hms_pharmaorder ") \
			_T("         LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
			_T("         LEFT JOIN m_product_item ON ( mpi_product_item_id = hpol_product_item_id ) ") \
			_T("         LEFT JOIN m_product ON ( mp_product_id = mpi_product_id ) ") \
			_T("         LEFT JOIN hms_doc ON ( hpo_docno = hd_docno ) ") \
			_T("         LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
			_T("         LEFT JOIN hms_object ON ( ho_id = hpo_object_id ) ") \
			_T("		 WHERE 1=1 %s %s %s ") \
			_T(" ORDER BY mp_name, mp_code"), szWhere, szWhereRoomID, szWhere1);

	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
			rs.GetValue(_T("product_code")), 
			rs.GetValue(_T("product_name")), NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
}
void CPMPrescriptionListReportDialog2::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	TranslateString(_T("Print Synthesis Format"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Print Detail Format"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	
		menu.AppendMenu(MF_SEPARATOR);
		TranslateString(_T("Chi tiết theo thuốc"), tmpStr);
		menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
		menu.AppendMenu(MF_SEPARATOR);
		TranslateString(_T("Chi tiết theo thuốc (sắp xếp từ nhiều nhất)"), tmpStr);
		menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);


	CRect rect;
	m_wndPrintPreview.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrintSynthesis();
			break;
		case 2:
			OnPrintPreview();
			break;
		case 3:
			OnPrintDetailByDrug();
			break;
		case 4:
			OnPrintDetailByDrug2();
			break;
	}
} 
void CPMPrescriptionListReportDialog2::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	TranslateString(_T("Export Synthesis Format"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Export Detail Format"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Chi tiết theo thuốc"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Chi tiết theo thuốc (sắp xếp từ nhiều nhất)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);
	
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSynthesis();
			break;
		case 2:
			OnExport();
			break;
		case 3:
			OnExportDetailByDrug();
			break;
		case 4:
			OnExportDetailByDrug2();
			break;
	}
} 
void CPMPrescriptionListReportDialog2::OnPrintPreview()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL, szObjectID, szObjectName, szWhere, szWhere1, 
		szWhere2, tmpStr2,szListID, szRoomID, szRoomName, szDrugs;
	if(!rpt.Init(_T("Reports/HMS/PMS_PRESCRIPTIONLISTREPORT.RPT"),true) )
	{
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	CString szStocksName;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocksName.IsEmpty())
				szStocksName += _T(", ");
			szStocksName += m_wndStock.GetCurrent(1);
		}
	}
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStocksName);
	//rpt.GetReportHeader()->SetValue(_T("Doctor"), m_wndDoctor.GetCurrent(1));
	

	tmpStr2 = _T("' '");
	//for(int i=0; i < m_wndObject.GetCount(); i++)
	//{
	//	//if(m_wndObject.GetCheck(i))
	//	{
	//		m_wndObject.SetCurSel(i);
	//		if (!szObjectID.IsEmpty())
	//			szObjectID += _T(",");
	//		szObjectID.AppendFormat(_T("'%s'"), m_wndObject.GetCurrent(0));

	//		if (!szObjectName.IsEmpty())
	//			szObjectName += _T(",");
	//		szObjectName.AppendFormat(_T("%s"), m_wndObject.GetCurrent(1));
	//	}
	//}
	szWhere.Format(_T(" AND hpo_orderstatus = 'A' AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				   _T(" AND hpo_ordertype IN ('P', 'D', 'M', 'E')"), m_szFromDate, m_szToDate);
	CString szObjects;
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);	
	
	CString szRoomC11, szRoomC12, szRoomC13, szDept, szProductType, szNewOrderID, szOldOrderID;
	szProductType.Empty();
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	BeginWaitCursor();
	CString szDeptType, szWhereRoomID, szTable, szLineTable;
	szDeptType.Empty();
	szWhereRoomID.Empty();
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			if (!szRoomC11.IsEmpty())				
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
			if (!szRoomC13.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
			if (!szWhereRoomID.IsEmpty())
				szWhereRoomID.AppendFormat(_T(")"));
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			if(!szListID.IsEmpty())
				szWhereRoomID.Format(_T(" and hpo_deptid in(%s) ") , szListID);
		}
	if (!szDeptType.IsEmpty())
		szWhere.AppendFormat(_T("%s"), szDeptType);

	CString szStocks;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocks.IsEmpty())
				szStocks += _T(", ");
			szStocks += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStocks.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);

	for(int i=0; i < m_wndDrugList.GetItemCount(); i++)
	{
		if(m_wndDrugList.GetCheck(i))
		{
			m_wndDrugList.SetCurSel(i);
			if (!szDrugs.IsEmpty())
				szDrugs += _T(",");
			szDrugs.AppendFormat(_T("'%s'"), m_wndDrugList.GetItemText(i,0));
		}
	}
	if(!szDrugs.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_code IN(%s)"), szDrugs);


	rpt.GetReportHeader()->SetValue(_T("Object"), szObjectName);
	//Page Header
	//Report Detail
	szSQL.Format(_T(" SELECT orderid, ") \
	_T("        docno, ") \
	_T("        get_patientname(docno) pname, ") \
	_T("        Hms_getagebydoc(docno) age, ") \
	_T("        Get_username(hpo_doctor) doctor, ") \
	_T("        NAME, ") \
	_T("        Get_uomname(product_purchase_uomid) unit, ") \
	_T("        price, ") \
	_T("        SUM(qty) qty, ") \
	_T("        SUM(amount) amount ") \
	_T(" FROM   (SELECT    hpol_orderid orderid, ") \
	_T("                   hpol_orderlineid, ") \
	_T("                   hpol_qtyissue * hpol_unitprice amount, ") \
	_T("                   SUM(hpol_qtyissue * hpol_unitprice) ") \
	_T("                     OVER ( ") \
	_T("                       PARTITION BY (hpol_orderid)) taxamount, ") \
	_T("                   hpo_docno docno, ") \
	_T("                   Hms_getage(( hd_admitdate ), hp_birthdate) age, ") \
	_T("                   hpo_doctor, ") \
	_T("                   product_id, ") \
	_T("                   product_name NAME, ") \
	_T("                   product_purchase_uomid, ") \
	_T("                   hpol_unitprice price, ") \
	_T("                   hpol_qtyissue qty ") \
	_T("         FROM      hms_pharmaorder ") \
	_T("         LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
	_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
	_T("         LEFT JOIN hms_doc ON ( hpo_docno = hd_docno ) ") \
	_T("         LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
	_T("         LEFT JOIN hms_object ON ( ho_id = hpo_object_id ) ") \
	_T("		 WHERE 1=1 %s %s) ") \
	_T(" WHERE 1=1 %s") \
	_T(" GROUP  BY orderid,docno,hpo_doctor,NAME,price,product_purchase_uomid ") \
	_T(" ORDER BY orderid, docno, hpo_doctor, NAME"), szWhere, szWhereRoomID, szWhere2);

	//rpt.GetReportHeader()->SetValue(_T("RoomName"), szRoomName);

	CReportSection* rptDetail = NULL;
	CReportSection* rptGroup = NULL;
	CRecord rs(&pMF->m_db);
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		//_msg(_T("%s"), szSQL);
		//QueryOpener(szSQL);
		return;
	}
	long nItem = 1, nTotalOrder=0, nItemCount = 0;
	long nOrderID;
	double nTotalAmount=0,cost = 0, nAmount = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("orderid"), szNewOrderID);
		if (szNewOrderID != szOldOrderID)
		{
			if (nAmount > 0)
			{			
				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
				if (rptGroup)
				{
					rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
					rptGroup->GetItem(_T("PName"))->SetItalic(true);
					rptGroup->GetItem(_T("Amount"))->SetItalic(true);
					TranslateString(_T("Total Amount"), tmpStr);
					rptGroup->SetValue(_T("PName"), tmpStr);
					FormatCurrency(nAmount, tmpStr);		
					rptGroup->SetValue(_T("Amount"), tmpStr);
				}
				nTotalAmount += nAmount;
				nAmount = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rs.GetValue(_T("orderid"), nOrderID);
				tmpStr.Format(_T("%ld"), nOrderID);
				rptGroup->SetValue(_T("OrderID"), tmpStr);
				TranslateString(_T("Age"), tmpStr2);
				tmpStr.Format(_T("[%s]  -  %s   -   %s:%s  -  %s"), rs.GetValue(_T("docno")), rs.GetValue(_T("pname")),tmpStr2,rs.GetValue(_T("Age")), rs.GetValue(_T("doctor")));
				rptGroup->SetValue(_T("PName"), tmpStr);
				rs.GetValue(_T("doctor"), tmpStr);
				rptGroup->SetValue(_T("Amount"), tmpStr);
			}
			nItemCount += nItem - 1;
			nTotalOrder++;
			szOldOrderID = szNewOrderID;
			nItem = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			tmpStr.Format(_T("%ld"), nItem++);			
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("name"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rs.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);			
			rs.GetValue(_T("price"), tmpStr);			
			rptDetail->SetValue(_T("4"), tmpStr);
			rs.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rs.GetValue(_T("amount"), cost);
			FormatCurrency(cost, tmpStr);			
			rptDetail->SetValue(_T("6"), tmpStr);				
			nAmount +=cost;
		}
		rs.MoveNext();
	}
	if (nAmount > 0)
	{			
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
		if (rptGroup)
		{
			rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
			rptGroup->GetItem(_T("PName"))->SetItalic(true);
			rptGroup->GetItem(_T("Amount"))->SetItalic(true);
			TranslateString(_T("Total Amount"), tmpStr);
			rptGroup->SetValue(_T("PName"), tmpStr);
			FormatCurrency(nAmount, tmpStr);		
			rptGroup->SetValue(_T("Amount"), tmpStr);
		}
		nTotalAmount += nAmount;
		nAmount = 0;
	}
	nItemCount += nItem - 1;
	//Page Footer
	//Report Footer
	
	tmpStr.Format(_T("%ld"), nTotalOrder);
	rpt.GetReportFooter()->SetValue(_T("TotalOrder"), tmpStr);
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	FormatCurrency(nTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	tmpStr.Format(_T("%ld"), nItemCount);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	rpt.PrintPreview();
	EndWaitCursor();


}

void CPMPrescriptionListReportDialog2::OnPrintSynthesis(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0, nTotalOrder = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos;
	long double nTotalAmount = 0;
	szReportName = _T("Reports\\HMS\\PMS_PRESCRIPTIONLISTREPORT_TH.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		//Group Seperation
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("1"), rs.GetValue(_T("orderid")));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("age")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("docno")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("doctor")));
			rs.GetValue(_T("amount"), nTmp);
			nTotalAmount+= nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("workplace")));
		}
		nTotalOrder++;
		rs.MoveNext();
	}
	rptHeader = rpt.GetReportFooter();
	if (rptHeader)
	{
		if (nTotalOrder > 0)
			rptHeader->SetValue(_T("TotalOrder"), int2str(nTotalOrder));
		if (nTotalAmount > 0)
		{
			tmpStr.Format(_T("%.2f"), nTotalAmount);
			rptHeader->SetValue(_T("TotalAmount"), tmpStr);
		}
		tmpStr = pMF->GetSysDate();
		szDate.Format(rptHeader->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
		rptHeader->SetValue(_T("PrintDate"), szDate);
	}
	EndWaitCursor();
	rpt.PrintPreview();
}
void CPMPrescriptionListReportDialog2::OnPrintDetailByDrug(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL, szObjectID, szObjectName, szWhere, szWhere1, 
		szWhere2, tmpStr2,szListID, szRoomID, szRoomName, szDrugs;
	if(!rpt.Init(_T("Reports/HMS/PMS_PRESCRIPTIONLISTREPORT.RPT"),true) )
	{
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	CString szStocksName;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocksName.IsEmpty())
				szStocksName += _T(", ");
			szStocksName += m_wndStock.GetCurrent(1);
		}
	}
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStocksName);
	//rpt.GetReportHeader()->SetValue(_T("Doctor"), m_wndDoctor.GetCurrent(1));
	

	tmpStr2 = _T("' '");
	//for(int i=0; i < m_wndObject.GetCount(); i++)
	//{
	//	//if(m_wndObject.GetCheck(i))
	//	{
	//		m_wndObject.SetCurSel(i);
	//		if (!szObjectID.IsEmpty())
	//			szObjectID += _T(",");
	//		szObjectID.AppendFormat(_T("'%s'"), m_wndObject.GetCurrent(0));

	//		if (!szObjectName.IsEmpty())
	//			szObjectName += _T(",");
	//		szObjectName.AppendFormat(_T("%s"), m_wndObject.GetCurrent(1));
	//	}
	//}
	szWhere.Format(_T(" AND hpo_orderstatus = 'A' AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				   _T(" AND hpo_ordertype IN ('P', 'D', 'M', 'E')"), m_szFromDate, m_szToDate);
	CString szObjects;
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);
	
	CString szRoomC11, szRoomC12, szRoomC13, szDept, szProductType, szNewOrderID, szOldOrderID;
	szProductType.Empty();
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	BeginWaitCursor();
	CString szDeptType, szWhereRoomID, szTable, szLineTable;
	szDeptType.Empty();
	szWhereRoomID.Empty();
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			if (!szRoomC11.IsEmpty())				
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
			if (!szRoomC13.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
			if (!szWhereRoomID.IsEmpty())
				szWhereRoomID.AppendFormat(_T(")"));
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			if(!szListID.IsEmpty())
				szWhereRoomID.Format(_T(" and hpo_deptid in(%s) ") , szListID);
		}
	if (!szDeptType.IsEmpty())
		szWhere.AppendFormat(_T("%s"), szDeptType);

	CString szStocks;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocks.IsEmpty())
				szStocks += _T(", ");
			szStocks += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStocks.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);

	for(int i=0; i < m_wndDrugList.GetItemCount(); i++)
	{
		if(m_wndDrugList.GetCheck(i))
		{
			m_wndDrugList.SetCurSel(i);
			if (!szDrugs.IsEmpty())
				szDrugs += _T(",");
			szDrugs.AppendFormat(_T("'%s'"), m_wndDrugList.GetItemText(i,0));
		}
	}
	if(!szDrugs.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_code IN(%s)"), szDrugs);

	rpt.GetReportHeader()->SetValue(_T("Object"), szObjectName);
	//Page Header
	//Report Detail
	szSQL.Format(_T(" SELECT  ") \
	_T("        Get_username(hpo_doctor) doctor, ") \
	_T("        NAME, ") \
	_T("        Get_uomname(product_purchase_uomid) unit, ") \
	_T("        price, ") \
	_T("        SUM(qty) qty, ") \
	_T("        SUM(amount) amount ") \
	_T(" FROM   (SELECT    hpol_orderid orderid, ") \
	_T("                   hpol_orderlineid, ") \
	_T("                   hpol_qtyissue * hpol_unitprice amount, ") \
	_T("                   SUM(hpol_qtyissue * hpol_unitprice) ") \
	_T("                     OVER ( ") \
	_T("                       PARTITION BY (hpol_orderid)) taxamount, ") \
	_T("                   hpo_docno docno, ") \
	_T("                   Hms_getage(( hd_admitdate ), hp_birthdate) age, ") \
	_T("                   hpo_doctor, ") \
	_T("                   product_id, ") \
	_T("                   product_name NAME, ") \
	_T("                   product_purchase_uomid, ") \
	_T("                   hpol_unitprice price, ") \
	_T("                   hpol_qtyissue qty ") \
	_T("         FROM      hms_pharmaorder ") \
	_T("         LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
	_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
	_T("         LEFT JOIN hms_doc ON ( hpo_docno = hd_docno ) ") \
	_T("         LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
	_T("         LEFT JOIN hms_object ON ( ho_id = hpo_object_id ) ") \
	_T("		 WHERE 1=1 %s %s) ") \
	_T(" WHERE 1=1 %s") \
	_T(" GROUP  BY hpo_doctor,NAME,price,product_purchase_uomid ") \
	_T(" ORDER BY hpo_doctor, NAME"), szWhere, szWhereRoomID, szWhere2);

	//rpt.GetReportHeader()->SetValue(_T("RoomName"), szRoomName);

	CReportSection* rptDetail = NULL;
	CReportSection* rptGroup = NULL;
	CRecord rs(&pMF->m_db);
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		_msg(_T("%s"), szSQL);
		//QueryOpener(szSQL);
		return;
	}
	long nItem = 1, nTotalOrder=0, nItemCount = 0;

	double nTotalAmount=0,cost = 0, nAmount = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("doctor"), szNewOrderID);
		if (szNewOrderID != szOldOrderID)
		{
			if (nAmount > 0)
			{			
				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
				if (rptGroup)
				{
					rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
					rptGroup->GetItem(_T("PName"))->SetItalic(true);
					rptGroup->GetItem(_T("Amount"))->SetItalic(true);
					TranslateString(_T("Total Amount"), tmpStr);
					rptGroup->SetValue(_T("PName"), tmpStr);
					FormatCurrency(nAmount, tmpStr);		
					rptGroup->SetValue(_T("Amount"), tmpStr);
				}
				nTotalAmount += nAmount;
				nAmount = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rs.GetValue(_T("doctor"), tmpStr);
				rptGroup->SetValue(_T("Amount"), tmpStr);
			}
			nItemCount += nItem - 1;
			nTotalOrder++;
			szOldOrderID = szNewOrderID;
			nItem = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			tmpStr.Format(_T("%ld"), nItem++);			
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("name"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rs.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);			
			rs.GetValue(_T("price"), tmpStr);			
			rptDetail->SetValue(_T("4"), tmpStr);
			rs.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rs.GetValue(_T("amount"), cost);
			FormatCurrency(cost, tmpStr);			
			rptDetail->SetValue(_T("6"), tmpStr);				
			nAmount +=cost;
		}
		rs.MoveNext();
	}
	if (nAmount > 0)
	{			
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
		if (rptGroup)
		{
			rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
			rptGroup->GetItem(_T("PName"))->SetItalic(true);
			rptGroup->GetItem(_T("Amount"))->SetItalic(true);
			TranslateString(_T("Total Amount"), tmpStr);
			rptGroup->SetValue(_T("PName"), tmpStr);
			FormatCurrency(nAmount, tmpStr);		
			rptGroup->SetValue(_T("Amount"), tmpStr);
		}
		nTotalAmount += nAmount;
		nAmount = 0;
	}
	nItemCount += nItem - 1;
	//Page Footer
	//Report Footer
	
	tmpStr.Format(_T("%ld"), nTotalOrder);
	rpt.GetReportFooter()->SetValue(_T("TotalOrder"), tmpStr);
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	FormatCurrency(nTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	tmpStr.Format(_T("%ld"), nItemCount);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	rpt.PrintPreview();
	EndWaitCursor();

}

void CPMPrescriptionListReportDialog2::OnPrintDetailByDrug2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL, szObjectID, szObjectName, szWhere, szWhere1, 
		szWhere2, tmpStr2,szListID, szRoomID, szRoomName, szDrugs;
	if(!rpt.Init(_T("Reports/HMS/PMS_PRESCRIPTIONLISTREPORT.RPT"),true) )
	{
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	CString szStocksName;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocksName.IsEmpty())
				szStocksName += _T(", ");
			szStocksName += m_wndStock.GetCurrent(1);
		}
	}
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStocksName);
	//rpt.GetReportHeader()->SetValue(_T("Doctor"), m_wndDoctor.GetCurrent(1));


	tmpStr2 = _T("' '");
	//for(int i=0; i < m_wndObject.GetCount(); i++)
	//{
	//	//if(m_wndObject.GetCheck(i))
	//	{
	//		m_wndObject.SetCurSel(i);
	//		if (!szObjectID.IsEmpty())
	//			szObjectID += _T(",");
	//		szObjectID.AppendFormat(_T("'%s'"), m_wndObject.GetCurrent(0));

	//		if (!szObjectName.IsEmpty())
	//			szObjectName += _T(",");
	//		szObjectName.AppendFormat(_T("%s"), m_wndObject.GetCurrent(1));
	//	}
	//}
	szWhere.Format(_T(" AND hpo_orderstatus = 'A' AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpo_ordertype IN ('P', 'D', 'M', 'E')"), m_szFromDate, m_szToDate);
	CString szObjects;
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);

	CString szRoomC11, szRoomC12, szRoomC13, szDept, szProductType, szNewOrderID, szOldOrderID;
	szProductType.Empty();
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	BeginWaitCursor();
	CString szDeptType, szWhereRoomID, szTable, szLineTable;
	szDeptType.Empty();
	szWhereRoomID.Empty();
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			if (!szRoomC11.IsEmpty())				
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
			if (!szRoomC13.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
			if (!szWhereRoomID.IsEmpty())
				szWhereRoomID.AppendFormat(_T(")"));
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			if(!szListID.IsEmpty())
				szWhereRoomID.Format(_T(" and hpo_deptid in(%s) ") , szListID);
		}
		if (!szDeptType.IsEmpty())
			szWhere.AppendFormat(_T("%s"), szDeptType);

		CString szStocks;
		for (int i = 0; i < m_wndStock.GetItemCount(); i++)
		{
			if (m_wndStock.GetCheck(i))
			{
				m_wndStock.SetCurSel(i);
				if (!szStocks.IsEmpty())
					szStocks += _T(", ");
				szStocks += m_wndStock.GetCurrent(0);
			}
		}
		if (!szStocks.IsEmpty())
			szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);

		for(int i=0; i < m_wndDrugList.GetItemCount(); i++)
		{
			if(m_wndDrugList.GetCheck(i))
			{
				m_wndDrugList.SetCurSel(i);
				if (!szDrugs.IsEmpty())
					szDrugs += _T(",");
				szDrugs.AppendFormat(_T("'%s'"), m_wndDrugList.GetItemText(i,0));
			}
		}
		if(!szDrugs.IsEmpty())
			szWhere.AppendFormat(_T(" AND product_code IN(%s)"), szDrugs);

		rpt.GetReportHeader()->SetValue(_T("Object"), szObjectName);
		//Page Header
		//Report Detail
		szSQL.Format(_T(" SELECT  ") \
			_T("        Get_username(hpo_doctor) doctor, ") \
			_T("        NAME, ") \
			_T("        Get_uomname(product_purchase_uomid) unit, ") \
			_T("        price, ") \
			_T("        SUM(qty) qty, ") \
			_T("        SUM(amount) amount ") \
			_T(" FROM   (SELECT    hpol_orderid orderid, ") \
			_T("                   hpol_orderlineid, ") \
			_T("                   hpol_qtyissue * hpol_unitprice amount, ") \
			_T("                   SUM(hpol_qtyissue * hpol_unitprice) ") \
			_T("                     OVER ( ") \
			_T("                       PARTITION BY (hpol_orderid)) taxamount, ") \
			_T("                   hpo_docno docno, ") \
			_T("                   Hms_getage(( hd_admitdate ), hp_birthdate) age, ") \
			_T("                   hpo_doctor, ") \
			_T("                   product_id, ") \
			_T("                   product_name NAME, ") \
			_T("                   product_purchase_uomid, ") \
			_T("                   hpol_unitprice price, ") \
			_T("                   hpol_qtyissue qty ") \
			_T("         FROM      hms_pharmaorder ") \
			_T("         LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
			_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
			_T("         LEFT JOIN hms_doc ON ( hpo_docno = hd_docno ) ") \
			_T("         LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
			_T("         LEFT JOIN hms_object ON ( ho_id = hpo_object_id ) ") \
			_T("		 WHERE 1=1 %s %s) ") \
			_T(" WHERE 1=1 %s") \
			_T(" GROUP  BY hpo_doctor,NAME,price,product_purchase_uomid ") \
			_T(" ORDER BY qty DESC, hpo_doctor, NAME"), szWhere, szWhereRoomID, szWhere2);

		//rpt.GetReportHeader()->SetValue(_T("RoomName"), szRoomName);

		CReportSection* rptDetail = NULL;
		CReportSection* rptGroup = NULL;
		CRecord rs(&pMF->m_db);
		int nCount = rs.ExecSQL(szSQL);
		if (nCount <= 0)
		{
			ShowMessage(150, MB_ICONSTOP);
			_msg(_T("%s"), szSQL);
			//QueryOpener(szSQL);
			return;
		}
		long nItem = 1, nTotalOrder=0, nItemCount = 0;

		double nTotalAmount=0,cost = 0, nAmount = 0;
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("doctor"), szNewOrderID);
			if (szNewOrderID != szOldOrderID)
			{
				if (nAmount > 0)
				{			
					rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
					if (rptGroup)
					{
						rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
						rptGroup->GetItem(_T("PName"))->SetItalic(true);
						rptGroup->GetItem(_T("Amount"))->SetItalic(true);
						TranslateString(_T("Total Amount"), tmpStr);
						rptGroup->SetValue(_T("PName"), tmpStr);
						FormatCurrency(nAmount, tmpStr);		
						rptGroup->SetValue(_T("Amount"), tmpStr);
					}
					nTotalAmount += nAmount;
					nAmount = 0;
				}
				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
				if (rptGroup)
				{
					rs.GetValue(_T("doctor"), tmpStr);
					rptGroup->SetValue(_T("Amount"), tmpStr);
				}
				nItemCount += nItem - 1;
				nTotalOrder++;
				szOldOrderID = szNewOrderID;
				nItem = 1;
			}
			rptDetail = rpt.AddDetail();
			if (rptDetail)
			{
				tmpStr.Format(_T("%ld"), nItem++);			
				rptDetail->SetValue(_T("1"), tmpStr);
				rs.GetValue(_T("name"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				rs.GetValue(_T("unit"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);			
				rs.GetValue(_T("price"), tmpStr);			
				rptDetail->SetValue(_T("4"), tmpStr);
				rs.GetValue(_T("qty"), tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				rs.GetValue(_T("amount"), cost);
				FormatCurrency(cost, tmpStr);			
				rptDetail->SetValue(_T("6"), tmpStr);				
				nAmount +=cost;
			}
			rs.MoveNext();
		}
		if (nAmount > 0)
		{			
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
			if (rptGroup)
			{
				rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
				rptGroup->GetItem(_T("PName"))->SetItalic(true);
				rptGroup->GetItem(_T("Amount"))->SetItalic(true);
				TranslateString(_T("Total Amount"), tmpStr);
				rptGroup->SetValue(_T("PName"), tmpStr);
				FormatCurrency(nAmount, tmpStr);		
				rptGroup->SetValue(_T("Amount"), tmpStr);
			}
			nTotalAmount += nAmount;
			nAmount = 0;
		}
		nItemCount += nItem - 1;
		//Page Footer
		//Report Footer

		tmpStr.Format(_T("%ld"), nTotalOrder);
		rpt.GetReportFooter()->SetValue(_T("TotalOrder"), tmpStr);
		tmpStr.Format(_T("%.2f"), nTotalAmount);
		FormatCurrency(nTotalAmount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
		tmpStr.Format(_T("%ld"), nItemCount);
		rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
		szSysDate = pMF->GetSysDate(); 
		szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
		rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
		//rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
		rpt.PrintPreview();
		EndWaitCursor();

}

void CPMPrescriptionListReportDialog2::OnExportSynthesis(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CStringArray arrCol;
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	long double nTotalAmount = 0;
	int nIdx = 1, nRow = 0, nTotalOrder = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(2, 5);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 25);
	xls.SetColumnWidth(5, 25);
	xls.SetColumnWidth(6, 15);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 7);
	xls.SetCellMergedColumns(0, 3, 7);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	xls.SetCellText(0, 2, _T("\x42\x1EA2NG K\xCA \x110\x1A0N T\x1ED4NG H\x1EE2P"), 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	arrCol.Add(_T("S\x1ED1 phi\x1EBFu"));
	arrCol.Add(_T("T\xEAn \x42N"));
	arrCol.Add(_T("Tu\x1ED5i"));
	arrCol.Add(_T("S\x1ED1 h\x1ED3 s\x1A1"));
	arrCol.Add(_T("on v? c�ng t�c"));
	arrCol.Add(_T("T\xEAn \x62\xE1\x63 s\x1EF9"));
	arrCol.Add(_T("Th\xE0nh ti\x1EC1n"));
	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(i, 4, arrCol.GetAt(i), 4098, true);
	nRow = 5;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, rs.GetValue(_T("orderid")), FMT_TEXT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("pname")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("age")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("docno")), FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("workplace")), FMT_TEXT);
		xls.SetCellText(5, nRow, rs.GetValue(_T("doctor")), FMT_TEXT);
		rs.GetValue(_T("amount"), nTmp);
		nTotalAmount += nTmp;
		xls.SetCellText(6, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		nTotalOrder++;
		rs.MoveNext();
	}
	if (nTotalOrder > 0)
	{
		xls.SetCellText(5, nRow, _T("S\x1ED1 \x111\x1A1n:"), 4098, true);
		xls.SetCellText(6, nRow, int2str(nTotalOrder), FMT_NUMBER1, true);
		nRow++;
		xls.SetCellText(5, nRow, _T("T\x1ED5ng s\x1ED1 ti\x1EC1n:"), 4098, true);
		tmpStr.Format(_T("%f"), nTotalAmount);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang ke don thuoc_TH.xls"));
}

void CPMPrescriptionListReportDialog2::OnExport()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CString tmpStr, szSQL, szObjects, szWhere, szWhere1, szProductType, tmpStr2, szObjectID, 
		szObjectName,szRoomName,szRoomID, szListID, szTemp, szOldOrderID, szNewOrderID, szDept, szDrugs;
	CExcel xls;
	double nTemp = 0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	CellFormat df(&xls), cf(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	cf.SetFontName(_T("Segoe UI"));

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 13);
	xls.SetColumnWidth(5, 13);
	xls.SetColumnWidth(6, 15);
	int nCol = 0;
	int nRow = 0;
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0, 2, 6);
	TranslateString(_T("Prescription List Report"), szTemp);
	StringUpper(szTemp, tmpStr);
	xls.SetCellText(0, 2, tmpStr, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(0, 3, 6);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow+3, tmpStr, &df);
	nRow = 4;

	CString szStocksName;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocksName.IsEmpty())
				szStocksName += _T(", ");
			szStocksName += m_wndStock.GetCurrent(1);
		}
	}

	if (!szStocksName.IsEmpty())
	{
		xls.SetCellMergedColumns(0, nRow, 6);
		xls.SetCellText(nCol, nRow++, szStocksName, &cf);
	}
	
	tmpStr2 = _T("' '");
	
	
	szWhere.Format(_T(" AND hpo_orderstatus = 'A' AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				   _T(" AND hpo_ordertype IN ('P', 'D', 'M', 'E')"), m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);
	CString szDeptType, szWhereRoomID, szRoomC11, szRoomC12, szRoomC13;	
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	if (!szRoomName.IsEmpty())
	{
		tmpStr.Format(_T("Khoa Ph\xF2ng: %s"), szRoomName);
		xls.SetCellMergedColumns(0, nRow, 6);
		xls.SetCellText(0, nRow++, tmpStr, &cf);
	}
	xls.SetCellText(0, nRow, _T("STT"), &hf);
	xls.SetCellText(1, nRow, _T("M\xE3 thu\x1ED1\x63"), &hf);
	xls.SetCellText(2, nRow, _T("T\xEAn thu\x1ED1\x63/ H\xE0m l\x1B0\x1EE3ng"), &hf);
	xls.SetCellText(3, nRow, _T("\x110\x1A1n v\x1ECB"), &hf);
	xls.SetCellText(4, nRow, _T("\x110\x1A1n gi\xE1"), &hf);		
	xls.SetCellText(5, nRow, _T("SL"), &hf);
	xls.SetCellText(6, nRow, _T("Th\xE0nh ti\x1EC1n"), &hf);
	nRow++;
	BeginWaitCursor();

	szDeptType.Empty();
	szWhereRoomID.Empty();
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			if (!szRoomC11.IsEmpty())				
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
			if (!szRoomC13.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
			if (!szWhereRoomID.IsEmpty())
				szWhereRoomID.AppendFormat(_T(")"));
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			if(!szListID.IsEmpty())
				szWhereRoomID.Format(_T(" and hpo_deptid in(%s) ") , szListID);
		}
	if (!szDeptType.IsEmpty())
		szWhere.AppendFormat(_T("%s"), szDeptType);

	CString szStocks;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocks.IsEmpty())
				szStocks += _T(", ");
			szStocks += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStocks.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);

	for(int i=0; i < m_wndDrugList.GetItemCount(); i++)
	{
		if(m_wndDrugList.GetCheck(i))
		{
			m_wndDrugList.SetCurSel(i);
			if (!szDrugs.IsEmpty())
				szDrugs += _T(",");
			szDrugs.AppendFormat(_T("'%s'"), m_wndDrugList.GetItemText(i,0));
		}
	}
	if(!szDrugs.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_code IN(%s)"), szDrugs);

	//Page Header
	//Report Detail
	szSQL.Format(_T(" SELECT orderid, ") \
	_T("		product_code id,") \
	_T("        docno, ") \
	_T("        Get_patientname(docno) pname, ") \
	_T("        Hms_getagebydoc(docno) age, ") \
	_T("        Get_username(hpo_doctor) doctor, ") \
	_T("        NAME, ") \
	_T("        Get_uomname(product_purchase_uomid) unit, ") \
	_T("        price, ") \
	_T("        SUM(qty) qty, ") \
	_T("        SUM(amount) amount ") \
	_T(" FROM   (SELECT    hpol_orderid orderid, ") \
	_T("                   hpol_qtyissue * hpol_unitprice amount, ") \
	_T("                   SUM(hpol_qtyissue * hpol_unitprice) ") \
	_T("                     OVER ( ") \
	_T("                       PARTITION BY (hpol_orderid)) taxamount, ") \
	_T("                   hpo_docno docno, ") \
	_T("                   hpo_doctor, ") \
	_T("                   product_id, ") \
	_T("				   product_code,") \
	_T("                   product_name NAME, ") \
	_T("                   product_purchase_uomid, ") \
	_T("                   hpol_unitprice price, ") \
	_T("                   hpol_qtyissue qty ") \
	_T("         FROM      hms_pharmaorder ") \
	_T("         LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
	_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
	_T("         LEFT JOIN hms_doc ON ( hpo_docno = hd_docno ) ") \
	_T("         LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
	_T("         LEFT JOIN hms_object ON ( ho_id = hpo_object_id ) ") \
	_T("		 WHERE 1=1 %s %s) ") \
	_T(" WHERE 1=1 %s") \
	_T(" GROUP  BY orderid,docno,hpo_doctor,NAME,price,product_purchase_uomid, product_code ") \
	_T(" ORDER BY orderid, docno, hpo_doctor, NAME, product_code"), szWhere, szWhereRoomID, szWhere1);

	//QueryOpener(szSQL);

	CRecord rs(&pMF->m_db);
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	int nItem = 1;
	long nItemCount = 0;
	long nOrderID = 0, nTotalOrder=0;
	long double nTotalAmount=0, nAmount = 0;

	while(!rs.IsEOF())
	{	
		rs.GetValue(_T("orderid"), szNewOrderID);
		if (szNewOrderID != szOldOrderID)
		{
			if (nAmount > 0)
			{
				TranslateString(_T("Total Amount"), tmpStr);
				//xls.SetCellMergedColumns(1,nRow,3);
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
				tmpStr.Format(_T("%.2f"), nAmount);
				xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);	
				nTotalAmount += nAmount;
				nAmount = 0;
				nRow++;		
			}
			//xls.SetCellMergedColumns(1,nRow,4);		
			rs.GetValue(_T("orderid"), nOrderID);
			tmpStr.Format(_T("%ld"), nOrderID);
			xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER,true,10,0);
			TranslateString(_T("Age"), tmpStr2);
			tmpStr.Format(_T("[%s]  -  %s   -   %s:%s  -  %s"), rs.GetValue(_T("docno")), rs.GetValue(_T("pname")),
				tmpStr2,rs.GetValue(_T("Age")), rs.GetValue(_T("doctor")));
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,10,0);
			rs.GetValue(_T("doctor"), tmpStr);
			xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true,10,0);

			szOldOrderID = szNewOrderID;
			nTotalOrder++;
			nItemCount += nItem - 1;
			nItem = 1;
			nRow++;
		}
		tmpStr.Format(_T("%ld"), nItem++);			
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("id"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);			
		rs.GetValue(_T("price"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("qty"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("amount"), nTemp);
		nAmount += nTemp;
		xls.SetCellText(6, nRow, double2str(nTemp), FMT_NUMBER1);	
		nRow++;
		rs.MoveNext();
	}
	nItemCount += nItem - 1;
	if (nAmount > 0)
	{
		TranslateString(_T("Total Amount"), tmpStr);
		xls.SetCellMergedColumns(1,nRow,3);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);	
		nTotalAmount += nAmount;
		nRow++;		
	}
	//Page Footer
	//Report Footer
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellMergedColumns(1,nRow,3);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("%ld"), nTotalOrder);
	xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
	nRow++;
	//Tong so thuoc trong don
	TranslateString(_T("Total Item"), tmpStr);
	xls.SetCellMergedColumns(1,nRow,3);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("%ld"), nItemCount);
	xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
	nRow++;
	//Tong tien
	TranslateString(_T("Total Amount"), tmpStr);
	xls.SetCellMergedColumns(1,nRow,3);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);

	xls.Save(_T("Exports\\Bang Ke Don Thuoc.xls"));
	EndWaitCursor();

}
void CPMPrescriptionListReportDialog2::OnExportDetailByDrug(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CString tmpStr, szDate, szSysDate, szSQL, szObjectID, szObjectName, szWhere, szWhere1, 
		szWhere2, tmpStr2,szListID, szRoomID, szRoomName, szDrugs;
	CExcel xls;
	double nTemp = 0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	CellFormat df(&xls), cf(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	cf.SetFontName(_T("Segoe UI"));

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 13);
	xls.SetColumnWidth(4, 13);
	xls.SetColumnWidth(5, 15);
	int nCol = 0;
	int nRow = 0;
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0, 2, 6);
	xls.SetCellText(0, 2, _T("\x42\x1EA2NG K\xCA \x110\x1A0N THU\x1ED0\x43"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(0, 3, 6);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, &df);
	nRow = 4;
	CString szStocksName;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocksName.IsEmpty())
				szStocksName += _T(", ");
			szStocksName += m_wndStock.GetCurrent(1);
		}
	}

	if (!szStocksName.IsEmpty())
	{
		xls.SetCellMergedColumns(0, nRow, 6);
		xls.SetCellText(nCol, nRow++, szStocksName, &cf);
	}
	
	tmpStr2 = _T("' '");
	
	szWhere.Format(_T(" AND hpo_orderstatus = 'A' AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpo_ordertype IN ('P', 'D', 'M', 'E')"), m_szFromDate, m_szToDate);
	CString szObjects;
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);

	CString szRoomC11, szRoomC12, szRoomC13, szDept, szProductType, szNewOrderID, szOldOrderID;
	szProductType.Empty();
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	if (!szRoomName.IsEmpty())
	{
		tmpStr.Format(_T("Khoa Ph\xF2ng: %s"), szRoomName);
		xls.SetCellMergedColumns(0, nRow, 6);
		xls.SetCellText(0, nRow++, tmpStr, &cf);
	}
	xls.SetCellText(0, nRow, _T("STT"), &hf);
	xls.SetCellText(1, nRow, _T("T\xEAn thu\x1ED1\x63/ H\xE0m l\x1B0\x1EE3ng"), &hf);
	xls.SetCellText(2, nRow, _T("\x110\x1A1n v\x1ECB"), &hf);
	xls.SetCellText(3, nRow, _T("\x110\x1A1n gi\xE1"), &hf);		
	xls.SetCellText(4, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng"), &hf);
	xls.SetCellText(5, nRow, _T("Th\xE0nh ti\x1EC1n"), &hf);
	nRow++;
	BeginWaitCursor();
	CString szDeptType, szWhereRoomID, szTable, szLineTable;
	szDeptType.Empty();
	szWhereRoomID.Empty();
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			if (!szRoomC11.IsEmpty())				
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
			if (!szRoomC13.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
			if (!szWhereRoomID.IsEmpty())
				szWhereRoomID.AppendFormat(_T(")"));
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			if(!szListID.IsEmpty())
				szWhereRoomID.Format(_T(" and	hpo_deptid in(%s) ") , szListID);
		}
		if (!szDeptType.IsEmpty())
			szWhere.AppendFormat(_T("%s"), szDeptType);

		CString szStocks;
		for (int i = 0; i < m_wndStock.GetItemCount(); i++)
		{
			if (m_wndStock.GetCheck(i))
			{
				m_wndStock.SetCurSel(i);
				if (!szStocks.IsEmpty())
					szStocks += _T(", ");
				szStocks += m_wndStock.GetCurrent(0);
			}
		}
		if (!szStocks.IsEmpty())
			szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);

		for(int i=0; i < m_wndDrugList.GetItemCount(); i++)
		{
			if(m_wndDrugList.GetCheck(i))
			{
				m_wndDrugList.SetCurSel(i);
				if (!szDrugs.IsEmpty())
					szDrugs += _T(",");
				szDrugs.AppendFormat(_T("'%s'"), m_wndDrugList.GetItemText(i,0));
			}
		}
		if(!szDrugs.IsEmpty())
			szWhere.AppendFormat(_T(" AND product_code IN(%s)"), szDrugs);

		if (!szObjectName.IsEmpty())
		{
			tmpStr.Format(_T("\x110\x1ED1i t\x1B0\x1EE3ng: %s"), szObjectName);
			xls.SetCellMergedColumns(0, nRow, 6);
			xls.SetCellText(0, nRow++, tmpStr, &cf);
		}

		szSQL.Format(_T(" SELECT  ") \
			_T("        Get_username(hpo_doctor) doctor, ") \
			_T("        NAME, ") \
			_T("        Get_uomname(product_purchase_uomid) unit, ") \
			_T("        price, ") \
			_T("        SUM(qty) qty, ") \
			_T("        SUM(amount) amount ") \
			_T(" FROM   (SELECT    hpol_orderid orderid, ") \
			_T("                   hpol_orderlineid, ") \
			_T("                   hpol_qtyissue * hpol_unitprice amount, ") \
			_T("                   SUM(hpol_qtyissue * hpol_unitprice) ") \
			_T("                     OVER ( ") \
			_T("                       PARTITION BY (hpol_orderid)) taxamount, ") \
			_T("                   hpo_docno docno, ") \
			_T("                   Hms_getage(( hd_admitdate ), hp_birthdate) age, ") \
			_T("                   hpo_doctor, ") \
			_T("                   product_id, ") \
			_T("                   product_name NAME, ") \
			_T("                   product_purchase_uomid, ") \
			_T("                   hpol_unitprice price, ") \
			_T("                   hpol_qtyissue qty ") \
			_T("         FROM      hms_pharmaorder ") \
			_T("         LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
			_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
			_T("         LEFT JOIN hms_doc ON ( hpo_docno = hd_docno ) ") \
			_T("         LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
			_T("         LEFT JOIN hms_object ON ( ho_id = hpo_object_id ) ") \
			_T("		 WHERE 1=1 %s %s) ") \
			_T(" WHERE 1=1 %s") \
			_T(" GROUP  BY hpo_doctor,NAME,price,product_purchase_uomid") \
			_T(" ORDER BY hpo_doctor, NAME"), szWhere, szWhereRoomID, szWhere2);

		CRecord rs(&pMF->m_db);
		int nCount = rs.ExecSQL(szSQL);
		if (nCount <= 0)
		{
			ShowMessage(150, MB_ICONSTOP);
			_msg(_T("%s"), szSQL);
			return;
		}
		long nItem = 1, nTotalOrder=0, nItemCount = 0;

		double nTotalAmount=0,cost = 0, nAmount = 0;
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("doctor"), szNewOrderID);
			if (szNewOrderID != szOldOrderID)
			{
				if (nAmount > 0)
				{			
						TranslateString(_T("Total Amount"), tmpStr);
						xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);	
						xls.SetCellText(5, nRow, double2str(nAmount), FMT_NUMBER1 | FMT_RIGHT, true);	
					nTotalAmount += nAmount;
					nAmount = 0;
					nRow++;	
				}	
				xls.SetCellMergedColumns(0, nRow, 6);
				xls.SetCellText(0, nRow, szNewOrderID, FMT_TEXT | FMT_RIGHT, true);
				nItemCount += nItem - 1;
				szOldOrderID = szNewOrderID;
				nTotalOrder++;
				nItem = 1;
				nRow++;
			}
			tmpStr.Format(_T("%ld"), nItem++);			
			xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
			rs.GetValue(_T("name"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
			rs.GetValue(_T("unit"), tmpStr);
			xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);			
			rs.GetValue(_T("price"), nTemp);
			xls.SetCellText(3, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
			rs.GetValue(_T("qty"), nTemp);
			xls.SetCellText(4, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
			rs.GetValue(_T("amount"), cost);
			nAmount += cost;
			xls.SetCellText(5, nRow, double2str(cost), FMT_NUMBER1 | FMT_RIGHT);
			nRow++;
			rs.MoveNext();
		}
		if (nAmount > 0)
		{			
			TranslateString(_T("Total Amount"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
			nTotalAmount += nAmount;
			xls.SetCellText(5, nRow, double2str(nAmount), FMT_NUMBER1 | FMT_RIGHT, true);	
			nRow++;	
		}
		nItemCount += nItem - 1;
		//Page Footer
		//Report Footer
		TranslateString(_T("Total"), tmpStr);
		xls.SetCellMergedColumns(1,nRow,3);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(5, nRow, long2str(nTotalOrder), FMT_NUMBER1 | FMT_RIGHT, true);
		nRow++;
		//Tong so thuoc trong don
		TranslateString(_T("Total Item"), tmpStr);
		xls.SetCellMergedColumns(1,nRow,3);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(5, nRow, long2str(nItemCount), FMT_NUMBER1 | FMT_RIGHT, true);
		nRow++;
		//Tong tien
		TranslateString(_T("Total Amount"), tmpStr);
		xls.SetCellMergedColumns(1,nRow,3);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(5, nRow, double2str(nTotalAmount), FMT_NUMBER1 | FMT_RIGHT, true);

		xls.Save(_T("Exports\\Bang Ke Don Thuoc.xls"));
		EndWaitCursor();
}
void CPMPrescriptionListReportDialog2::OnExportDetailByDrug2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	CString tmpStr, szDate, szSysDate, szSQL, szObjectID, szObjectName, szWhere, szWhere1, 
		szWhere2, tmpStr2,szListID, szRoomID, szRoomName, szDrugs;
	CExcel xls;
	double nTemp = 0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	CellFormat df(&xls), cf(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	cf.SetFontName(_T("Segoe UI"));

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 13);
	xls.SetColumnWidth(4, 13);
	xls.SetColumnWidth(5, 15);
	int nCol = 0;
	int nRow = 0;
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0, 2, 6);
	xls.SetCellText(0, 2, _T("\x42\x1EA2NG K\xCA \x110\x1A0N THU\x1ED0\x43"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(0, 3, 6);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, &df);
	nRow = 4;
	CString szStocksName;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocksName.IsEmpty())
				szStocksName += _T(", ");
			szStocksName += m_wndStock.GetCurrent(1);
		}
	}

	if (!szStocksName.IsEmpty())
	{
		xls.SetCellMergedColumns(0, nRow, 6);
		xls.SetCellText(nCol, nRow++, szStocksName, &cf);
	}

	tmpStr2 = _T("' '");

	szWhere.Format(_T(" AND hpo_orderstatus = 'A' AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpo_ordertype IN ('P', 'D', 'M', 'E')"), m_szFromDate, m_szToDate);
	CString szObjects;
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);

	CString szRoomC11, szRoomC12, szRoomC13, szDept, szProductType, szNewOrderID, szOldOrderID;
	szProductType.Empty();
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	if (!szRoomName.IsEmpty())
	{
		tmpStr.Format(_T("Khoa Ph\xF2ng: %s"), szRoomName);
		xls.SetCellMergedColumns(0, nRow, 6);
		xls.SetCellText(0, nRow++, tmpStr, &cf);
	}
	xls.SetCellText(0, nRow, _T("STT"), &hf);
	xls.SetCellText(1, nRow, _T("T\xEAn thu\x1ED1\x63/ H\xE0m l\x1B0\x1EE3ng"), &hf);
	xls.SetCellText(2, nRow, _T("\x110\x1A1n v\x1ECB"), &hf);
	xls.SetCellText(3, nRow, _T("\x110\x1A1n gi\xE1"), &hf);		
	xls.SetCellText(4, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng"), &hf);
	xls.SetCellText(5, nRow, _T("Th\xE0nh ti\x1EC1n"), &hf);
	nRow++;
	BeginWaitCursor();
	CString szDeptType, szWhereRoomID, szTable, szLineTable;
	szDeptType.Empty();
	szWhereRoomID.Empty();
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			if (!szRoomC11.IsEmpty())				
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
			if (!szRoomC13.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
			if (!szWhereRoomID.IsEmpty())
				szWhereRoomID.AppendFormat(_T(")"));
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			if(!szListID.IsEmpty())
				szWhereRoomID.Format(_T(" and	hpo_deptid in(%s) ") , szListID);
		}
		if (!szDeptType.IsEmpty())
			szWhere.AppendFormat(_T("%s"), szDeptType);

		CString szStocks;
		for (int i = 0; i < m_wndStock.GetItemCount(); i++)
		{
			if (m_wndStock.GetCheck(i))
			{
				m_wndStock.SetCurSel(i);
				if (!szStocks.IsEmpty())
					szStocks += _T(", ");
				szStocks += m_wndStock.GetCurrent(0);
			}
		}
		if (!szStocks.IsEmpty())
			szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);

		for(int i=0; i < m_wndDrugList.GetItemCount(); i++)
		{
			if(m_wndDrugList.GetCheck(i))
			{
				m_wndDrugList.SetCurSel(i);
				if (!szDrugs.IsEmpty())
					szDrugs += _T(",");
				szDrugs.AppendFormat(_T("'%s'"), m_wndDrugList.GetItemText(i,0));
			}
		}
		if(!szDrugs.IsEmpty())
			szWhere.AppendFormat(_T(" AND product_code IN(%s)"), szDrugs);

		if (!szObjectName.IsEmpty())
		{
			tmpStr.Format(_T("\x110\x1ED1i t\x1B0\x1EE3ng: %s"), szObjectName);
			xls.SetCellMergedColumns(0, nRow, 6);
			xls.SetCellText(0, nRow++, tmpStr, &cf);
		}

		szSQL.Format(_T(" SELECT  ") \
			_T("        Get_username(hpo_doctor) doctor, ") \
			_T("        NAME, ") \
			_T("        Get_uomname(product_purchase_uomid) unit, ") \
			_T("        price, ") \
			_T("        SUM(qty) qty, ") \
			_T("        SUM(amount) amount ") \
			_T(" FROM   (SELECT    hpol_orderid orderid, ") \
			_T("                   hpol_orderlineid, ") \
			_T("                   hpol_qtyissue * hpol_unitprice amount, ") \
			_T("                   SUM(hpol_qtyissue * hpol_unitprice) ") \
			_T("                     OVER ( ") \
			_T("                       PARTITION BY (hpol_orderid)) taxamount, ") \
			_T("                   hpo_docno docno, ") \
			_T("                   Hms_getage(( hd_admitdate ), hp_birthdate) age, ") \
			_T("                   hpo_doctor, ") \
			_T("                   product_id, ") \
			_T("                   product_name NAME, ") \
			_T("                   product_purchase_uomid, ") \
			_T("                   hpol_unitprice price, ") \
			_T("                   hpol_qtyissue qty ") \
			_T("         FROM      hms_pharmaorder ") \
			_T("         LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
			_T("         LEFT JOIN m_productitem_view ON ( product_item_id = hpol_product_item_id ) ") \
			_T("         LEFT JOIN hms_doc ON ( hpo_docno = hd_docno ) ") \
			_T("         LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno ) ") \
			_T("         LEFT JOIN hms_object ON ( ho_id = hpo_object_id ) ") \
			_T("		 WHERE 1=1 %s %s) ") \
			_T(" WHERE 1=1 %s") \
			_T(" GROUP  BY hpo_doctor,NAME,price,product_purchase_uomid") \
			_T(" ORDER BY qty DESC, hpo_doctor, NAME"), szWhere, szWhereRoomID, szWhere2);

		CRecord rs(&pMF->m_db);
		int nCount = rs.ExecSQL(szSQL);
		if (nCount <= 0)
		{
			ShowMessage(150, MB_ICONSTOP);
			_msg(_T("%s"), szSQL);
			return;
		}
		long nItem = 1, nTotalOrder=0, nItemCount = 0;

		double nTotalAmount=0,cost = 0, nAmount = 0;
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("doctor"), szNewOrderID);
			if (szNewOrderID != szOldOrderID)
			{
				if (nAmount > 0)
				{			
					TranslateString(_T("Total Amount"), tmpStr);
					xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);	
					xls.SetCellText(5, nRow, double2str(nAmount), FMT_NUMBER1 | FMT_RIGHT, true);	
					nTotalAmount += nAmount;
					nAmount = 0;
					nRow++;	
				}	
				xls.SetCellMergedColumns(0, nRow, 6);
				xls.SetCellText(0, nRow, szNewOrderID, FMT_TEXT | FMT_RIGHT, true);
				nItemCount += nItem - 1;
				szOldOrderID = szNewOrderID;
				nTotalOrder++;
				nItem = 1;
				nRow++;
			}
			tmpStr.Format(_T("%ld"), nItem++);			
			xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
			rs.GetValue(_T("name"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
			rs.GetValue(_T("unit"), tmpStr);
			xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);			
			rs.GetValue(_T("price"), nTemp);
			xls.SetCellText(3, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
			rs.GetValue(_T("qty"), nTemp);
			xls.SetCellText(4, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
			rs.GetValue(_T("amount"), cost);
			nAmount += cost;
			xls.SetCellText(5, nRow, double2str(cost), FMT_NUMBER1 | FMT_RIGHT);
			nRow++;
			rs.MoveNext();
		}
		if (nAmount > 0)
		{			
			TranslateString(_T("Total Amount"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
			nTotalAmount += nAmount;
			xls.SetCellText(5, nRow, double2str(nAmount), FMT_NUMBER1 | FMT_RIGHT, true);	
			nRow++;	
		}
		nItemCount += nItem - 1;
		//Page Footer
		//Report Footer
		TranslateString(_T("Total"), tmpStr);
		xls.SetCellMergedColumns(1,nRow,3);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(5, nRow, long2str(nTotalOrder), FMT_NUMBER1 | FMT_RIGHT, true);
		nRow++;
		//Tong so thuoc trong don
		TranslateString(_T("Total Item"), tmpStr);
		xls.SetCellMergedColumns(1,nRow,3);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(5, nRow, long2str(nItemCount), FMT_NUMBER1 | FMT_RIGHT, true);
		nRow++;
		//Tong tien
		TranslateString(_T("Total Amount"), tmpStr);
		xls.SetCellMergedColumns(1,nRow,3);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(5, nRow, double2str(nTotalAmount), FMT_NUMBER1 | FMT_RIGHT, true);

		xls.Save(_T("Exports\\Bang Ke Don Thuoc.xls"));
		EndWaitCursor();
}
CString CPMPrescriptionListReportDialog2::GetQueryString(){
	CString szSQL, szDeptType, szWhereRoomID, szWhere, szListID, szRoomID, szRoomName, szHavingClause, szProductType, szObjects, szStocks, szDrugs;
	szDeptType.Empty();
	szWhereRoomID.Empty();

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), szObjects);	
	
	CString szRoomC11, szRoomC12, szRoomC13, szDept;
	for(int i=0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szListID.IsEmpty())
				szListID += _T(",");
			szListID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i,0));
			szDept = m_wndList.GetItemText(i, 2);
			if (szDept == _T("C1.1"))
			{
				if (!szRoomC11.IsEmpty())
					szRoomC11 += _T(", ");
				szRoomC11.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.2"))
			{
				if (!szRoomC12.IsEmpty())
					szRoomC12 += _T(", ");
				szRoomC12.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			else if (szDept == _T("C1.3"))
			{
				if (!szRoomC13.IsEmpty())
					szRoomC13 += _T(", ");
				szRoomC13.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			}
			if (!szRoomName.IsEmpty())
				szRoomName += _T(", ");
			szRoomName.AppendFormat(_T("%s"), m_wndList.GetItemText(i,1));
		}
	}
	if (m_szCondition == _T("A"))
		szDeptType.IsEmpty();
	else
		if (m_szCondition == _T("O"))
		{
			szDeptType.Format(_T(" and hpo_depttype ='KB' "));
			if (!szRoomC11.IsEmpty())				
				szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.1') "), szRoomC11);
			if (!szRoomC12.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.2') "), szRoomC12);
			if (!szRoomC13.IsEmpty())
				if (!szWhereRoomID.IsEmpty())
					szWhereRoomID.AppendFormat(_T(" or (hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
				else
					szWhereRoomID.AppendFormat(_T(" and ((hpo_roomid in (%s) and hpo_deptid= 'C1.3')"), szRoomC13);
			if (!szWhereRoomID.IsEmpty())
				szWhereRoomID.AppendFormat(_T(")"));
		}
		else
		{
			szDeptType.Format(_T(" and hpo_depttype ='DT' "));
			if(!szListID.IsEmpty())
				szWhereRoomID.Format(_T(" and hpo_deptid in(%s) ") , szListID);
		}
	if (!szDeptType.IsEmpty())
		szWhere.AppendFormat(_T("%s"), szDeptType);

	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocks.IsEmpty())
				szStocks += _T(", ");
			szStocks += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStocks.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);

	for(int i=0; i < m_wndDrugList.GetItemCount(); i++)
	{
		if(m_wndDrugList.GetCheck(i))
		{
			m_wndDrugList.SetCurSel(i);
			if (!szDrugs.IsEmpty())
				szDrugs += _T(",");
			szDrugs.AppendFormat(_T("'%s'"), m_wndDrugList.GetItemText(i,0));
		}
	}
	if(!szDrugs.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_code IN(%s)"), szDrugs);
		
	szSQL.Format(_T(" SELECT hpo_orderid as orderid,") \
		_T(" 	hpo_docno as docno,") \
		_T("	get_username(hpo_doctor) as doctor,") \
		_T(" 	get_patientname(hpo_docno) as pname,") \
		_T(" 	hms_getagebydoc(hpo_docno) as age, ") \
		_T("	sum(hpol_qtyissue*hpol_unitprice) amount, ") \
		_T("	(SELECT hp_workplace FROM hms_patient WHERE hp_patientno = hd_patientno) AS workplace ") \
		_T(" FROM hms_pharmaorder ") \
		_T(" LEFT JOIN hms_pharmaorderline ON (hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN m_productitem_view ON (product_item_id = hpol_product_item_id)") \
		_T(" LEFT JOIN hms_doc ON (hpo_docno=hd_docno)") \
		_T(" LEFT JOIN hms_object ON (hpo_object_id = ho_id)") \
		_T(" WHERE 	hpo_orderstatus IN('A','I')") \
		_T("	and hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
		_T(" 	and hpo_ordertype in('P','D','M','E') %s %s ") \
		_T(" GROUP BY hpo_orderid, hpo_docno, hpo_doctor, hd_patientno %s") \
		_T(" ORDER BY hpo_orderid"), m_szFromDate, m_szToDate, szWhere, szWhereRoomID, szHavingClause);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
int CPMPrescriptionListReportDialog2::OnAddPMPrescriptionListReportDialog2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMPrescriptionListReportDialog2::OnEditPMPrescriptionListReportDialog2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMPrescriptionListReportDialog2::OnDeletePMPrescriptionListReportDialog2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPMPrescriptionListReportDialog2();
 	}
	return 0;
}
int CPMPrescriptionListReportDialog2::OnSavePMPrescriptionListReportDialog2(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPMPrescriptionListReportDialog2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMPrescriptionListReportDialog2::OnCancelPMPrescriptionListReportDialog2(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPMPrescriptionListReportDialog2::OnPMPrescriptionListReportDialog2ListLoadData(){
	return 0;
}
