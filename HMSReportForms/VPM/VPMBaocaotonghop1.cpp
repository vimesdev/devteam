#include "stdafx.h"
#include "VPMBaocaotonghop1.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CVPMBaocaotonghop1 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CVPMBaocaotonghop1 *)pWnd)->OnToDateCheckValue();
} 
static void _OnPackageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVPMBaocaotonghop1* )pWnd)->OnPackageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPackageSelendokFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnPackageSelendok();
}
/*static void _OnPackageSetfocusFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnPackageKillfocus();
}*/
/*static void _OnPackageKillfocusFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnPackageKillfocus();
}*/
static long _OnPackageLoadDataFnc(CWnd *pWnd){
	return ((CVPMBaocaotonghop1 *)pWnd)->OnPackageLoadData();
}
/*static void _OnPackageAddNewFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnPackageAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVPMBaocaotonghop1* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CVPMBaocaotonghop1 *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnDeptAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVPMBaocaotonghop1* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CVPMBaocaotonghop1 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1 *)pWnd)->OnStatusAddNew();
}*/
static void _OnTreatingSelectFnc(CWnd *pWnd){
	 ((CVPMBaocaotonghop1*)pWnd)->OnTreatingSelect();
}
static void _OnGetOutDeptSelectFnc(CWnd *pWnd){
	 ((CVPMBaocaotonghop1*)pWnd)->OnGetOutDeptSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CVPMBaocaotonghop1*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CVPMBaocaotonghop1*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVPMBaocaotonghop1*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVPMBaocaotonghop1*)pWnd)->OnListDeleteItem();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CVPMBaocaotonghop1 *pVw = (CVPMBaocaotonghop1 *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CVPMBaocaotonghop1 *pVw = (CVPMBaocaotonghop1 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddVPMBaocaotonghop1Fnc(CWnd *pWnd){
	 return ((CVPMBaocaotonghop1*)pWnd)->OnAddVPMBaocaotonghop1();
} 
static int _OnEditVPMBaocaotonghop1Fnc(CWnd *pWnd){
	 return ((CVPMBaocaotonghop1*)pWnd)->OnEditVPMBaocaotonghop1();
} 
static int _OnDeleteVPMBaocaotonghop1Fnc(CWnd *pWnd){
	 return ((CVPMBaocaotonghop1*)pWnd)->OnDeleteVPMBaocaotonghop1();
} 
static int _OnSaveVPMBaocaotonghop1Fnc(CWnd *pWnd){
	 return ((CVPMBaocaotonghop1*)pWnd)->OnSaveVPMBaocaotonghop1();
} 
static int _OnCancelVPMBaocaotonghop1Fnc(CWnd *pWnd){
	 return ((CVPMBaocaotonghop1*)pWnd)->OnCancelVPMBaocaotonghop1();
}
static void _OnOtherSelectFnc(CWnd *pWnd){
	 ((CVPMBaocaotonghop1*)pWnd)->OnOtherSelect();
}

CVPMBaocaotonghop1::CVPMBaocaotonghop1(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CVPMBaocaotonghop1::~CVPMBaocaotonghop1(){
}
void CVPMBaocaotonghop1::OnCreateComponents()
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
	m_wndReportCondition.Create(this, _T("Report Condition"), 3, 0, 575, 549);
	m_wndFromDateLabel.Create(this, _T("From Date"), 22, 26, 102, 51);
	m_wndFromDate.Create(this,105, 26, 265, 51); 
	m_wndToDateLabel.Create(this, _T("To Date"), 330, 26, 410, 51);
	m_wndToDate.Create(this,415, 26, 575, 51);
	m_wndPackage.SetCheckBox(true);
	m_wndPackageLabel.Create(this, _T("Package"), 22, 62, 102, 87);
	m_wndPackage.Create(this,105, 63, 575, 88); 
	m_wndDeptLabel.Create(this, _T("Dept"), 21, 94, 101, 119);
	m_wndDept.Create(this,105, 95, 575, 120);
	m_wndStatus.SetCheckBox(true);
	m_wndStatusLabel.Create(this, _T("Status"), 21, 125, 101, 150);
	m_wndStatus.Create(this,105, 125, 575, 150); 
	m_wndTreating.Create(this, _T("Treating"), 20, 155, 161, 180);
	m_wndGetOutDept.Create(this, _T("Discharged"), 167, 155, 308, 180);
	m_wndList.Create(this,19, 186, 575, 500); 
	m_wndLoad.Create(this, _T("Load"), 410, 525, 490, 550);
	m_wndExport.Create(this, _T("Export"), 495, 525, 575, 550);
	m_wndOther.Create(this, _T("Other"), 315, 155, 456, 180);

}
void CVPMBaocaotonghop1::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndPackage.SetCheckValue(true);
	m_wndPackage.LimitText(35);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);


	m_wndPackage.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100 );
	m_wndPackage.InsertColumn(1, _T("Name"), CFMT_TEXT, 370);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Tên gói"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Số bệnh nhân "), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("Số lượng"), CFMT_TEXT, 60);

}
void CVPMBaocaotonghop1::OnSetWindowEvents(){
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
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndOther.SetEvent(WE_CLICK, _OnOtherSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = szSysDate + _T("00:00");
	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate = szSysDate + _T("23:59");
	UpdateData(false);

}
void CVPMBaocaotonghop1::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackageKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Check(pDX, m_wndTreating.GetDlgCtrlID(), m_bTreating);
	DDX_Check(pDX, m_wndGetOutDept.GetDlgCtrlID(), m_bGetOutDept);
	DDX_Check(pDX, m_wndOther.GetDlgCtrlID(), m_bOther);

}
void CVPMBaocaotonghop1::UpdateJson(BOOL bSave){
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
void CVPMBaocaotonghop1::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVPMBaocaotonghop1::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CVPMBaocaotonghop1::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPackageKey.Empty();
	m_szDeptKey.Empty();
	m_szStatusKey.Empty();
	m_bTreating=FALSE;
	m_bOther=FALSE;

}
int CVPMBaocaotonghop1::SetMode(int nMode){
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
/*void CVPMBaocaotonghop1::OnFromDateChange(){
	
} */
/*void CVPMBaocaotonghop1::OnFromDateSetfocus(){
	
} */
/*void CVPMBaocaotonghop1::OnFromDateKillfocus(){
	
} */
int CVPMBaocaotonghop1::OnFromDateCheckValue(){
	return 0;
} 
/*void CVPMBaocaotonghop1::OnToDateChange(){
	
} */
/*void CVPMBaocaotonghop1::OnToDateSetfocus(){
	
} */
/*void CVPMBaocaotonghop1::OnToDateKillfocus(){
	
} */
int CVPMBaocaotonghop1::OnToDateCheckValue(){
	return 0;
} 
void CVPMBaocaotonghop1::OnPackageSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CVPMBaocaotonghop1::OnPackageSelendok(){
	 
}
void CVPMBaocaotonghop1::OnOtherSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
/*void CVPMBaocaotonghop1::OnPackageSetfocus(){
	
}*/
/*void CVPMBaocaotonghop1::OnPackageKillfocus(){
	
}*/
long CVPMBaocaotonghop1::OnPackageLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPackage.IsSearchKey() && !m_szPackageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPackageKey);
};
	m_wndPackage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE  ss_id='HMS_SERVICE_PACKAGE' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPackage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CVPMBaocaotonghop1::OnPackageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CVPMBaocaotonghop1::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CVPMBaocaotonghop1::OnDeptSelendok(){
	 
}
/*void CVPMBaocaotonghop1::OnDeptSetfocus(){
	
}*/
/*void CVPMBaocaotonghop1::OnDeptKillfocus(){
	
}*/
long CVPMBaocaotonghop1::OnDeptLoadData(){
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
/*void CVPMBaocaotonghop1::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CVPMBaocaotonghop1::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CVPMBaocaotonghop1::OnStatusSelendok(){
	 
}
/*void CVPMBaocaotonghop1::OnStatusSetfocus(){
	
}*/
/*void CVPMBaocaotonghop1::OnStatusKillfocus(){
	
}*/
long CVPMBaocaotonghop1::OnStatusLoadData(){
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
/*void CVPMBaocaotonghop1::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CVPMBaocaotonghop1::OnTreatingSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CVPMBaocaotonghop1::OnGetOutDeptSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CVPMBaocaotonghop1::OnListDblClick(){
	
} 
void CVPMBaocaotonghop1::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CVPMBaocaotonghop1::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVPMBaocaotonghop1::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere ,szOldLine ,szNewLine, tmpStr;
	UpdateData(TRUE);

	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI"), _T("XII"), _T("XIII"), _T("XIV"), _T("XV"), _T("XVI"), _T("XVII"), _T("XVIII"), _T("XIX"), _T("XX"),
		_T("XXI"), _T("XXII"), _T("XXIII"), _T("XXIV"), _T("XXV"), _T("XXVI"), _T("XXVII"), _T("XXVIII"), _T("XXIV"), _T("XXX"), _T("XXXI"), _T("XXXII"), _T("XXXIII"), _T("XXXIV"), _T("XXXV"), _T("XXXVI"), _T("XXXVII"), _T("XXXVIII"), _T("XXXIX"), _T("XL"), _T("XLI"), _T("XLII"), _T("XLIII")};
	m_wndList.BeginLoad(); 
	int nCount = 0;
	int Index =1;
	int Index1 =1;
	int nItem=0;
	int nChapter = 0;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
    int ttlCost = 0, nCost=0;
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
			m_wndList.SetItemText(nItem,3,tmpStr);
			ttlCost+=nCost;
		    nCost=0;
			}
			nItem = m_wndList.AddItems(_T(" "), rs.GetValue(_T("deptid")), NULL);
			m_wndList.SetItemTextColor(nItem, RGB(0, 0, 250), false);
			szOldLine = szNewLine;			
			nChapter++;
			Index = 1;
		}
		rs.GetValue(_T("qty"), nCount);
		nCost+=nCount;

		m_wndList.AddItems(
			int2str(Index++), 
			rs.GetValue(_T("goi")), 
			rs.GetValue(_T("sobn")), 
			rs.GetValue(_T("qty")), NULL);
		rs.MoveNext();
	}
	if (nCost > 0 )
	{			
		TranslateString(_T("Total"), tmpStr);
		nItem = m_wndList.AddItems(_T(""),tmpStr,NULL);
		m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), false);			
		tmpStr.Format(_T("%d"), nCost);
	    m_wndList.SetItemText(nItem,3,tmpStr);
		ttlCost+=nCost;
		
	}

	if (ttlCost > 0 )
	{			
		TranslateString(_T("Total"), tmpStr);
		nItem = m_wndList.AddItems(_T(""),tmpStr,NULL);
		m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), false);		
		tmpStr.Format(_T("%d"), ttlCost);
		m_wndList.SetItemText(nItem,3,tmpStr);
		
	}

	m_wndList.EndLoad(); 
	return nCount;
}
void CVPMBaocaotonghop1::OnLoadSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CVPMBaocaotonghop1::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldLine ,szNewLine;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, nIdx1=1;
	double nTemp = 0, nTemp1=0, nCost =0;
	int nChapter = 0;
    TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	CExcel xls;
	if (!xls.Load(_T("Exports\\BAOCAOTONGHOP1.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);

	nRow = 8;
	nCol = 0;
	long double ttlCost = 0;
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
			xls.SetCellText(nCol, nRow, int2str(nIdx1++), FMT_TEXT, true);
			xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("deptid")), FMT_TEXT, true);
			szOldLine = szNewLine;			
			nChapter++;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("goi"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sobn"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		

		rs.GetValue(_T("qty"), nTemp);
		nCost += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);



		nRow++;
		rs.MoveNext();
	}
	ttlCost += nCost;

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
		xls.SetCellText(3, nRow, double2str(ttlCost), FMT_NUMBER1, true);		

		nRow++;
	}

	xls.Save(_T("Exports\\BAOCAOTONGHOP11.xls.xls"));
} 
int CVPMBaocaotonghop1::OnAddVPMBaocaotonghop1(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CVPMBaocaotonghop1::OnEditVPMBaocaotonghop1(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CVPMBaocaotonghop1::OnDeleteVPMBaocaotonghop1(){
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
 		OnCancelVPMBaocaotonghop1();
 	}
	return 0;
}
int CVPMBaocaotonghop1::OnSaveVPMBaocaotonghop1(){
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
 		//OnVPMBaocaotonghop1ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CVPMBaocaotonghop1::OnCancelVPMBaocaotonghop1(){
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
int CVPMBaocaotonghop1::OnVPMBaocaotonghop1ListLoadData(){
	return 0;
}
CString CVPMBaocaotonghop1::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szWhere;
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
		szWhere.AppendFormat(_T(" and nvl(hfel_status,'O') <> 'P'"));
		
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
		szWhere.AppendFormat(_T(" and nvl(hfel_status,'O') <> 'P'"));

	}
	else if( m_bGetOutDept && !m_bTreating)
	{
		if (!m_szDeptKey.IsEmpty())
		{
			szWhere.Format(_T("( (hcr_status='T' and hcrf_acceptedfee<>'P' and hcr_dischargedept='%s') )  "), m_szDeptKey,m_szDeptKey);
		}
		else
		{
			szWhere.Format(_T(" ( hcr_status = 'T' and hcrf_acceptedfee<>'P' )"));
		}
		szWhere.AppendFormat(_T(" and nvl(hfel_status,'O') <> 'P'"));
	}
	else if (m_bOther)
	{
		szWhere.Format(_T("hfe_orderdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate,m_szToDate);				
		if (!m_szDeptKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and hfe_deptid ='%s' "),m_szDeptKey);
		}
		szWhere.AppendFormat(_T(" and nvl(hfel_status,'O') NOT IN ('C')"));
	}
	else
	{
		szWhere.Format(_T("hfe_orderdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate,m_szToDate);
		if (!m_szDeptKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and hfe_deptid ='%s' "),m_szDeptKey);
		}
		szWhere.AppendFormat(_T(" and nvl(hfel_status,'O') NOT IN ('O', 'C')"));
	}
	CString szPackage;
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
   szSQL.Format(_T(" SELECT deptid,") \
				_T("   goi,") \
				_T("   SUM(sobn) as sobn,") \
				_T("   SUM(qty) AS qty") \
				_T(" FROM") \
				_T("   (SELECT (select sd_name from sys_dept where hfe_deptid = sd_id) AS deptid,") \
				_T("     ss_desc        AS goi,") \
				_T("     count(distinct hfe_docno) as sobn,") \
				_T("     sum(hfel_quantity) AS qty") \
				_T("   FROM VIMES.HMS_FEE_EXTRA") \
				_T("   LEFT JOIN VIMES.HMS_FEE_EXTRALINE") \
				_T("   ON ( hfel_fee_extra_id = hfe_fee_extra_id)") \
				_T("   LEFT JOIN sys_sel ON (  ss_id='HMS_SERVICE_PACKAGE' and ss_code = hfel_itemid) ") \
				_T("   LEFT JOIN VIMES.HMS_TREATMENT_RECORD ON(hfe_docno=HTR_DOCNO and hfe_deptid= htr_deptid and nvl(hfe_refidx,1) = htr_idx )") \
				_T("   LEFT JOIN VIMES.HMS_CLINICAL_RECORD ON(hfe_docno=VIMES.HMS_CLINICAL_RECORD.HCR_DOCNO)") \
				_T("   WHERE  %s ") \
				_T("   GROUP BY hfe_deptid,ss_desc,hfe_docno)") \
				_T(" GROUP BY deptid,") \
				_T("   goi") \
				_T(" ORDER BY deptid,") \
				_T("   goi"),szWhere);	
	_fmsg(_T("%s"),szSQL);
	return szSQL;
}