#include "stdafx.h"
#include "VPMBaocaochitiet1.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "SearchPopup.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CVPMBaocaochitiet1 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CVPMBaocaochitiet1 *)pWnd)->OnToDateCheckValue();
} 
static void _OnPackageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVPMBaocaochitiet1* )pWnd)->OnPackageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPackageSelendokFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnPackageSelendok();
}
/*static void _OnPackageSetfocusFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnPackageKillfocus();
}*/
/*static void _OnPackageKillfocusFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnPackageKillfocus();
}*/
static long _OnPackageLoadDataFnc(CWnd *pWnd){
	return ((CVPMBaocaochitiet1 *)pWnd)->OnPackageLoadData();
}
/*static void _OnPackageAddNewFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnPackageAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVPMBaocaochitiet1* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CVPMBaocaochitiet1 *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnDeptAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVPMBaocaochitiet1* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CVPMBaocaochitiet1 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1 *)pWnd)->OnStatusAddNew();
}*/
static void _OnTreatingSelectFnc(CWnd *pWnd){
	 ((CVPMBaocaochitiet1*)pWnd)->OnTreatingSelect();
}
static void _OnGetOutDeptSelectFnc(CWnd *pWnd){
	 ((CVPMBaocaochitiet1*)pWnd)->OnGetOutDeptSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CVPMBaocaochitiet1*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CVPMBaocaochitiet1*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVPMBaocaochitiet1*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVPMBaocaochitiet1*)pWnd)->OnListDeleteItem();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CVPMBaocaochitiet1 *pVw = (CVPMBaocaochitiet1 *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CVPMBaocaochitiet1 *pVw = (CVPMBaocaochitiet1 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddVPMBaocaochitiet1Fnc(CWnd *pWnd){
	 return ((CVPMBaocaochitiet1*)pWnd)->OnAddVPMBaocaochitiet1();
} 
static int _OnEditVPMBaocaochitiet1Fnc(CWnd *pWnd){
	 return ((CVPMBaocaochitiet1*)pWnd)->OnEditVPMBaocaochitiet1();
} 
static int _OnDeleteVPMBaocaochitiet1Fnc(CWnd *pWnd){
	 return ((CVPMBaocaochitiet1*)pWnd)->OnDeleteVPMBaocaochitiet1();
} 
static int _OnSaveVPMBaocaochitiet1Fnc(CWnd *pWnd){
	 return ((CVPMBaocaochitiet1*)pWnd)->OnSaveVPMBaocaochitiet1();
} 
static int _OnCancelVPMBaocaochitiet1Fnc(CWnd *pWnd){
	 return ((CVPMBaocaochitiet1*)pWnd)->OnCancelVPMBaocaochitiet1();
}

static int _OnPackageListCheckAllFnc(CWnd *pWnd){
	return ((CVPMBaocaochitiet1*)pWnd)->OnPackageListCheckAll();
}
static int _OnPackageListUnCheckAllFnc(CWnd *pWnd){
	return ((CVPMBaocaochitiet1*)pWnd)->OnPackageListUnCheckAll();
}
static int _OnPackageSearchItemFnc(CWnd *pWnd){
	 ((CVPMBaocaochitiet1*)pWnd)->OnPackageSearchItem();
	 return 0;
}


CVPMBaocaochitiet1::CVPMBaocaochitiet1(CWnd *pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CVPMBaocaochitiet1::~CVPMBaocaochitiet1(){
}
void CVPMBaocaochitiet1::OnCreateComponents()
{
	/*m_wndFromDateLabel.Create(this, _T("From Date"), 22, 26, 102, 51);
	m_wndFromDate.Create(this,105, 26, 265, 51); 
	m_wndToDateLabel.Create(this, _T("To Date"), 330, 26, 410, 51);
	m_wndToDate.Create(this,415, 26, 575, 51);
	m_wndPackage.SetCheckBox(true);
	m_wndPackageLabel.Create(this, _T("Package"), 22, 62, 102, 87);
	m_wndPackage.Create(this,105, 63, 575, 88); 
	m_wndReportCondition.Create(this, _T("Report Condition"), 3, 0, 575, 650);
	m_wndDeptLabel.Create(this, _T("Dept"), 21, 94, 101, 119);
	m_wndDept.Create(this,105, 95, 575, 120); 
	m_wndStatus.SetCheckBox(true);
	m_wndStatusLabel.Create(this, _T("Status"), 21, 125, 101, 150);
	m_wndStatus.Create(this,105, 125, 575, 150);
	
	m_wndTreating.Create(this, _T("Treating"), 20, 155, 115, 180);

	m_wndGetOutDept.Create(this, _T("Discharged"), 120, 155, 200, 180);

	m_wndList.Create(this,19, 186, 575, 500); 
	m_wndLoad.Create(this, _T("Load"), 410, 525, 490, 550);
	m_wndExport.Create(this, _T("Export"), 495, 525, 575, 550);*/
	
	m_wndReportCondition.Create(this, _T("Report Condition"), 3, 0, 575, 564);
	m_wndFromDateLabel.Create(this, _T("From Date"), 19, 26, 99, 51);
	m_wndFromDate.Create(this,105, 26, 265, 51); 
	m_wndToDateLabel.Create(this, _T("To Date"), 330, 26, 410, 51);
	m_wndToDate.Create(this,415, 26, 575, 51); 
	m_wndPackage.Create(this,19, 56, 575, 244);
	m_wndPackage.SetCheckBox(true);
	m_wndDeptLabel.Create(this, _T("Dept"), 19, 248, 99, 273);
	m_wndDept.Create(this,105, 249, 575, 274);
	m_wndStatus.SetCheckBox(true);
	m_wndStatusLabel.Create(this, _T("Status"), 19, 279, 99, 304);
	m_wndStatus.Create(this,105, 279, 575, 304); 
	m_wndTreating.Create(this, _T("Treating"), 19, 309, 124, 334);
	m_wndGetOutDept.Create(this, _T("Discharged"), 130, 309, 235, 334);
	m_wndList.Create(this,19, 340, 575, 534); 
	m_wndLoad.Create(this, _T("Load"), 410, 539, 490, 564);
	m_wndExport.Create(this, _T("Export"), 495, 539, 575, 564);

}
void CVPMBaocaochitiet1::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndPackage.SetCheckValue(true);
	
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	


	m_wndPackage.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndPackage.InsertColumn(1, _T("Danh sách gói"), CFMT_TEXT, 450);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Tên gói"), CFMT_TEXT, 450);
	m_wndList.InsertColumn(2, _T("Số lượng"), CFMT_TEXT, 50);

	m_wndPackage.AddEvent(1, _T("Check All"), _OnPackageListCheckAllFnc);
	m_wndPackage.AddEvent(2, _T("UnCheck All"), _OnPackageListUnCheckAllFnc);

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndPackage.GetHeaderControl()->SetItemHeight(1);

}
void CVPMBaocaochitiet1::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPackage.SetEvent(WE_SELENDOK, _OnPackageSelendokFnc);
	//m_wndPackage.SetEvent(WE_SETFOCUS, _OnPackageSetfocusFnc);
	//m_wndPackage.SetEvent(WE_KILLFOCUS, _OnPackageKillfocusFnc);
	m_wndPackage.SetEvent(WE_SELCHANGE, _OnPackageSelectChangeFnc);
	m_wndPackage.SetEvent(WE_LOADDATA, _OnPackageLoadDataFnc);
	m_wndPackage.AddEvent(3, _T("Search"), _OnPackageSearchItemFnc);
	//m_wndPackage.SetEvent(WE_ADDNEW, _OnPackageAddNewFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndTreating.SetEvent(WE_CLICK, _OnTreatingSelectFnc);
	m_wndGetOutDept.SetEvent(WE_CLICK, _OnGetOutDeptSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = szSysDate + _T("00:00");
	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate = szSysDate + _T("23:59");
	OnPackageLoadData();
	UpdateData(false);

}
void CVPMBaocaochitiet1::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackageKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Check(pDX, m_wndTreating.GetDlgCtrlID(), m_bTreating);
	DDX_Check(pDX, m_wndGetOutDept.GetDlgCtrlID(), m_bGetOutDept);

}
void CVPMBaocaochitiet1::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Package")] =  m_szPackageKey;
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("Status")] =  m_szStatusKey;
	m_jData[_T("Treating")] =  m_bTreating;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Package")].GetValue(m_szPackageKey);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	m_jData[_T("Treating")].GetValue(m_bTreating);
	}

}
void CVPMBaocaochitiet1::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVPMBaocaochitiet1::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CVPMBaocaochitiet1::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPackageKey.Empty();
	m_szDeptKey.Empty();
	m_szStatusKey.Empty();
	m_bTreating=FALSE;

}
int CVPMBaocaochitiet1::SetMode(int nMode){
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
/*void CVPMBaocaochitiet1::OnFromDateChange(){
	
} */
/*void CVPMBaocaochitiet1::OnFromDateSetfocus(){
	
} */
/*void CVPMBaocaochitiet1::OnFromDateKillfocus(){
	
} */
int CVPMBaocaochitiet1::OnFromDateCheckValue(){
	return 0;
} 
/*void CVPMBaocaochitiet1::OnToDateChange(){
	
} */
/*void CVPMBaocaochitiet1::OnToDateSetfocus(){
	
} */
/*void CVPMBaocaochitiet1::OnToDateKillfocus(){
	
} */
int CVPMBaocaochitiet1::OnToDateCheckValue(){
	return 0;
} 
void CVPMBaocaochitiet1::OnPackageSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CVPMBaocaochitiet1::OnPackageSelendok(){
	 
}
/*void CVPMBaocaochitiet1::OnPackageSetfocus(){
	
}*/
/*void CVPMBaocaochitiet1::OnPackageKillfocus(){
	
}*/
long CVPMBaocaochitiet1::OnPackageLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	m_wndPackage.BeginLoad(); 
	int nCount = 0;	

	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE  ss_id='HMS_SERVICE_PACKAGE' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndPackage.AddItems(
			rs.GetValue(_T("ID")),			
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndPackage.EndLoad(); 
	return nCount;

}
/*void CVPMBaocaochitiet1::OnPackageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CVPMBaocaochitiet1::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CVPMBaocaochitiet1::OnDeptSelendok(){
	 
}
/*void CVPMBaocaochitiet1::OnDeptSetfocus(){
	
}*/
/*void CVPMBaocaochitiet1::OnDeptKillfocus(){
	
}*/
long CVPMBaocaochitiet1::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" and id='%s' "), m_szDeptKey);
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
/*void CVPMBaocaochitiet1::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CVPMBaocaochitiet1::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CVPMBaocaochitiet1::OnStatusSelendok(){
	 
}
/*void CVPMBaocaochitiet1::OnStatusSetfocus(){
	
}*/
/*void CVPMBaocaochitiet1::OnStatusKillfocus(){
	
}*/
long CVPMBaocaochitiet1::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey);
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_visit_status' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CVPMBaocaochitiet1::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CVPMBaocaochitiet1::OnTreatingSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CVPMBaocaochitiet1::OnGetOutDeptSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CVPMBaocaochitiet1::OnListDblClick(){
	
} 
void CVPMBaocaochitiet1::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CVPMBaocaochitiet1::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVPMBaocaochitiet1::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere ,szOldLine ,szNewLine, szOldLine1, szNewLine1;
	UpdateData(TRUE);
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	m_wndList.BeginLoad(); 
	int nCount = 0;
	int Index =1;
	int Index1 =1;
	int Index2 =1;
	int nItem=0;
	int nChapter = 0;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	int nCost=0, ttlCost=0;
	CString tmpStr;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("deptid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			if (nCost > 0 )
			{
				TranslateString(_T("Total"), tmpStr);				
				nItem = m_wndList.AddItems(_T(""),tmpStr,NULL);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 200), false);
				tmpStr.Format(_T("%d"), nCost);
				m_wndList.SetItemText(nItem,2,tmpStr);
				ttlCost+=nCost;
				nCost=0;
			}

			nItem = m_wndList.AddItems(_T(" "), rs.GetValue(_T("deptid")), NULL);
			m_wndList.SetItemTextColor(nItem, RGB(0, 0, 250), true);
			szOldLine = szNewLine;			
			Index1=1;
			szOldLine1.Empty();
		}
		rs.GetValue(_T("goi"), szNewLine1);
		if(szNewLine1 != szOldLine1 && !szNewLine1.IsEmpty())
		{	
			nItem = m_wndList.AddItems(int2str(Index1++), rs.GetValue(_T("goi")), NULL);
			m_wndList.SetItemTextColor(nItem, RGB(0, 0, 250), false);
			szOldLine1 = szNewLine1;	
			Index = 1;
		}
		rs.GetValue(_T("qty"), nCount);
		nCost+=nCount;
		m_wndList.AddItems(
			int2str(Index++), 
			rs.GetValue(_T("patientname")), 
			rs.GetValue(_T("qty")), NULL);
		rs.MoveNext(); 
		}

	if (nCost > 0 )
	{			
		TranslateString(_T("Total"), tmpStr);
		nItem = m_wndList.AddItems(_T(""),tmpStr,NULL);
		m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), false);			
		tmpStr.Format(_T("%d"), nCost);
		m_wndList.SetItemText(nItem,2,tmpStr);
		ttlCost+=nCost;

	}

	if (ttlCost > 0 )
	{			
		TranslateString(_T("Total"), tmpStr);
		nItem = m_wndList.AddItems(_T(""),tmpStr,NULL);
		m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), false);		
		tmpStr.Format(_T("%d"), ttlCost);
		m_wndList.SetItemText(nItem,2,tmpStr);

	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CVPMBaocaochitiet1::OnLoadSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CVPMBaocaochitiet1::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldLine ,szNewLine, szOldLine1, szNewLine1;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, nIdx1 =1, nIdx2=1;
	double nTemp = 0, nTemp1=0, nCost =0, ttlCost=0;
	int nChapter = 0;
    TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	CExcel xls;
	if (!xls.Load(_T("Exports\\BAOCAOCHITIET1.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);

	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{	
			if(nCost > 0)
			{				
				TranslateString(_T("Total Group"), tmpStr);
				xls.SetCellMergedColumns(nCol, nRow, 2);
				xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
				xls.SetCellText(nCol + 3, nRow, double2str(nCost), FMT_NUMBER1, true, 11);
				ttlCost += nCost;
				nIdx = 1;

				nCost = 0;
				nRow++;
			}

			xls.SetCellText(nCol, nRow, _T(" "), FMT_TEXT, true);
			xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("deptid")), FMT_TEXT, true);
			szOldLine = szNewLine;			
			nIdx1 = 1;
			nRow++;
			szOldLine1.Empty();
		}
		rs.GetValue(_T("goi"), szNewLine1);
		if(szNewLine1 != szOldLine1 && !szNewLine1.IsEmpty())
		{	
			xls.SetCellText(nCol, nRow, int2str(nIdx1++), FMT_TEXT, true);
			xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("goi")), FMT_TEXT, true);
			szOldLine1 = szNewLine1;			
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("patientname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("the_mo_rong"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("qty"), nTemp);
		nCost += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);
		

		rs.GetValue(_T("orderdate"), tmpStr);
		xls.SetCellText(nCol+4, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_DATETIME);

		rs.GetValue(_T("enddate"), tmpStr);
		xls.SetCellText(nCol+5, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_DATETIME);
		
		

		nRow++;
		rs.MoveNext();
	}

	if(nCost > 0)
	{
		CString szAmount;		
		TranslateString(_T("Tổng nhóm"), szAmount);
		xls.SetCellMergedColumns(nCol, nRow, 2);
		xls.SetCellText(nCol, nRow, szAmount, FMT_TEXT | FMT_CENTER, true, 11);
		xls.SetCellText(nCol + 3, nRow, double2str(nCost), FMT_NUMBER1, true, 11);
		nRow++;
	}

	if (ttlCost > 0)
	{
		xls.SetCellText(0, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		xls.SetCellText(2, nRow, double2str(ttlCost), FMT_NUMBER1, true);		

		nRow++;
	}

	xls.Save(_T("Exports\\BAOCAOCHITIET11.xls"));
} 
int CVPMBaocaochitiet1::OnAddVPMBaocaochitiet1(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CVPMBaocaochitiet1::OnEditVPMBaocaochitiet1(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CVPMBaocaochitiet1::OnDeleteVPMBaocaochitiet1(){
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
 		OnCancelVPMBaocaochitiet1();
 	}
	return 0;
}
int CVPMBaocaochitiet1::OnSaveVPMBaocaochitiet1(){
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
 		//OnVPMBaocaochitiet1ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CVPMBaocaochitiet1::OnCancelVPMBaocaochitiet1(){
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
int CVPMBaocaochitiet1::OnVPMBaocaochitiet1ListLoadData(){
	return 0;
}
CString CVPMBaocaochitiet1::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szWhere, szPackages;
	UpdateData(true);
		if (m_bTreating && !m_bGetOutDept)
		{
			if (!m_szDeptKey.IsEmpty())
			{
				szWhere.Format(_T(" ( htr_status in('A','I') and htr_deptid= '%s' and nvl(hfe_enddate, current_timestamp) >= current_timestamp   )  "), m_szDeptKey);
			}
			else
			{
				szWhere.Format(_T(" ( htr_status in('A','I') and nvl(hfe_enddate, current_timestamp) >= current_timestamp )"));
			}
			
		}
		else if (m_bTreating && m_bGetOutDept)
		{
			if (!m_szDeptKey.IsEmpty())
			{
				szWhere.Format(_T("( (htr_status in('A','I') and htr_deptid= '%s')  or (hcr_status='T' and hcrf_acceptedfee<>'P' and hcr_dischargedept='%s') )  "), m_szDeptKey,m_szDeptKey);
			}
			else
			{
				szWhere.Format(_T(" ( htr_status in('A','I')  or (hcr_status='T' and hcrf_acceptedfee<>'P') )"));
			}
		}
		else if( m_bGetOutDept && !m_bTreating)
		{
			if (!m_szDeptKey.IsEmpty())
			{
				szWhere.Format(_T("( (hcr_status='T' and hcrf_acceptedfee<>'P' and hcr_dischargedept='%s') )  "), m_szDeptKey,m_szDeptKey);
			}
			else
			{
				szWhere.Format(_T(" (  hcrf_acceptedfee<>'P' )"));
			}
		}
		else
		{
			szWhere.Format(_T("hfe_orderdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate,m_szToDate);
			if (!m_szDeptKey.IsEmpty())
			{
				szWhere.AppendFormat(_T(" and hfe_deptid ='%s' "),m_szDeptKey);
			}
		}
	/*CString szPackage;
		for(int i=0; i < m_wndPackage.GetCount(); i++)
		{
			if(m_wndPackage.GetCheck(i))
			{
				m_wndPackage.SetCurSel(i);
				if(!szPackage.IsEmpty())
					szPackage.AppendFormat(_T(","));
				szPackage.AppendFormat(_T("'%s'"),m_wndPackage.GetCurrent(0));
			}

		}
	if(!szPackage.IsEmpty())
		{
		szWhere.AppendFormat(_T("and hfel_itemid in  (%s) "),szPackage);
		}*/

	for (int i = 0; i < m_wndPackage.GetItemCount(); i++)
	{
		if (m_wndPackage.GetCheck(i))
		{
			if (!szPackages.IsEmpty())
				szPackages += _T(",");
			szPackages.AppendFormat(_T("'%s'"), m_wndPackage.GetItemText(i, 0));
		}
	}

	if (!szPackages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfel_itemid in(%s) "), szPackages);
	}

	CString szStatus;
		for(int i=0; i < m_wndStatus.GetCount(); i++)
		{
			if(m_wndStatus.GetCheck(i))
			{
				m_wndStatus.SetCurSel(i);
				if(!szStatus.IsEmpty())
					szStatus.AppendFormat(_T(","));
				szStatus.AppendFormat(_T("'%s'"),m_wndStatus.GetCurrent(0));
			}

		}
	if(!szStatus.IsEmpty())
		{
		szWhere.AppendFormat(_T("and hfe_status in (%s)"), szStatus);
		}

	
		szSQL.Format(_T(" SELECT deptid, goi,") \
			_T("   patientname,") \
			_T("   SUM(qty)  AS qty,enddate,orderdate,the_mo_rong ") \
			_T(" FROM") \
			_T("   (SELECT") \
			_T("     (SELECT sd_name FROM sys_dept WHERE hfe_deptid = sd_id") \
			_T("     )         AS deptid,") \
			_T("     ss_desc AS goi,") \
			_T("     get_patientname(hfe_docno) as patientname,") \
			_T("     CASE") \
			_T("       WHEN hfel_group = 'F0000'") \
			_T("       THEN 1") \
			_T("       ELSE 0") \
			_T("     END           AS sobn,") \
			_T("     hfel_quantity AS qty, ") \
			_T("	hfe_orderdate as orderdate, hfe_enddate as enddate, HFE_CARDNUMBEREX as the_mo_rong	") \
			_T("   FROM VIMES.HMS_FEE_EXTRA") \
			_T("   LEFT JOIN VIMES.HMS_FEE_EXTRALINE") \
			_T("   ON ( hfel_fee_extra_id = hfe_fee_extra_id)") \
			_T("   LEFT JOIN sys_sel ON (  ss_id='HMS_SERVICE_PACKAGE' and ss_code = hfel_itemid) ") \
			_T("   LEFT JOIN VIMES.HMS_TREATMENT_RECORD ON(hfe_docno=HTR_DOCNO and hfe_deptid= htr_deptid and nvl(hfe_refidx,1) = htr_idx )") \
			_T("   LEFT JOIN VIMES.HMS_CLINICAL_RECORD ON(hfe_docno=VIMES.HMS_CLINICAL_RECORD.HCR_DOCNO)") \
			_T("   WHERE  %s  ") \
			_T("   )") \
			_T(" GROUP BY ") \
			_T("  deptid, goi,patientname,orderdate,enddate, the_mo_rong") \
			_T(" ORDER BY deptid, goi,patientname"),szWhere);
		_fmsg(_T("%s"),szSQL);
	// and nvl(hfel_status,'O') <> 'P'
	return szSQL;
}

int CVPMBaocaochitiet1::OnPackageListCheckAll()
{
	for (int i = 0; i < m_wndPackage.GetItemCount(); i++)
	{
		if (!m_wndPackage.GetCheck(i))
			m_wndPackage.SetCheck(i, TRUE);
	}

	return 0;
}
int CVPMBaocaochitiet1::OnPackageListUnCheckAll()
{
	for (int i = 0; i < m_wndPackage.GetItemCount(); i++)
	{
		if (m_wndPackage.GetCheck(i))
			m_wndPackage.SetCheck(i, FALSE);
	}

	return 0;
}
void CVPMBaocaochitiet1::OnPackageSearchItem()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndPackage);
	newPopup->ShowPopup(&m_wndPackage);
}