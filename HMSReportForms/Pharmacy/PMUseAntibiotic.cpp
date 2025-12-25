#include "stdafx.h"
#include "PMUseAntibiotic.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMUseAntibiotic *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMUseAntibiotic *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMUseAntibiotic* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CPMUseAntibiotic *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnDeptAddNew();
}*/
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMUseAntibiotic* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPMUseAntibiotic *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPMUseAntibiotic *)pWnd)->OnGroupAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMUseAntibiotic*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMUseAntibiotic*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMUseAntibiotic*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMUseAntibiotic*)pWnd)->OnListDeleteItem();
} 
static void _OnB5SelectFnc(CWnd *pWnd){
	  ((CPMUseAntibiotic*)pWnd)->OnB5Select();
}
static void _OnOtherB5SelectFnc(CWnd *pWnd){
	  ((CPMUseAntibiotic*)pWnd)->OnOtherB5Select();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMUseAntibiotic *pVw = (CPMUseAntibiotic *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMUseAntibioticFnc(CWnd *pWnd){
	 return ((CPMUseAntibiotic*)pWnd)->OnAddPMUseAntibiotic();
} 
static int _OnEditPMUseAntibioticFnc(CWnd *pWnd){
	 return ((CPMUseAntibiotic*)pWnd)->OnEditPMUseAntibiotic();
} 
static int _OnDeletePMUseAntibioticFnc(CWnd *pWnd){
	 return ((CPMUseAntibiotic*)pWnd)->OnDeletePMUseAntibiotic();
} 
static int _OnSavePMUseAntibioticFnc(CWnd *pWnd){
	 return ((CPMUseAntibiotic*)pWnd)->OnSavePMUseAntibiotic();
} 
static int _OnCancelPMUseAntibioticFnc(CWnd *pWnd){
	 return ((CPMUseAntibiotic*)pWnd)->OnCancelPMUseAntibiotic();
} 
CPMUseAntibiotic::CPMUseAntibiotic(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMUseAntibiotic::~CPMUseAntibiotic(){
}
void CPMUseAntibiotic::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 7, 505, 432);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 250, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 255, 30, 355, 55);
	m_wndToDate.Create(this,360, 30, 500, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 110, 85);
	m_wndDept.Create(this,115, 60, 500, 85); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 90, 110, 115);
	m_wndGroup.Create(this,115, 90, 500, 115); 
	m_wndList.Create(this,10, 120, 500, 425); 
	m_wndList.SetCheckBox(TRUE);
	m_wndB5.Create(this, _T("B5"), 10, 437, 110, 462);
	m_wndOtherB5.Create(this, _T("OtherB5"), 115, 437, 215, 462);
	m_wndExport.Create(this, _T("&Export"), 425, 437, 500, 462);

}
void CPMUseAntibiotic::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndGroup.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);



}
void CPMUseAntibiotic::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndB5.SetEvent(WE_CLICK, _OnB5SelectFnc);
	m_wndOtherB5.SetEvent(WE_CLICK, _OnOtherB5SelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPMUseAntibioticFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMUseAntibioticFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMUseAntibioticFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMUseAntibioticFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPMUseAntibioticFnc, 0, 'T', VK_CONTROL);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	m_szGroupKey = _T("6.2.1");
	UpdateData(false);
	OnListLoadData();

}
void CPMUseAntibiotic::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Radio(pDX, m_wndB5.GetDlgCtrlID(), m_nB5);
	DDX_Radio(pDX, m_wndOtherB5.GetDlgCtrlID(), m_nOtherB5);

}
void CPMUseAntibiotic::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMUseAntibiotic::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMUseAntibiotic::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_szGroupKey.Empty();
	m_nB5=0;
	m_nOtherB5=1;

}
int CPMUseAntibiotic::SetMode(int nMode){
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
/*void CPMUseAntibiotic::OnFromDateChange(){
	
} */
/*void CPMUseAntibiotic::OnFromDateSetfocus(){
	
} */
/*void CPMUseAntibiotic::OnFromDateKillfocus(){
	
} */
int CPMUseAntibiotic::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMUseAntibiotic::OnToDateChange(){
	
} */
/*void CPMUseAntibiotic::OnToDateSetfocus(){
	
} */
/*void CPMUseAntibiotic::OnToDateKillfocus(){
	
} */
int CPMUseAntibiotic::OnToDateCheckValue(){
	return 0;
}
void CPMUseAntibiotic::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMUseAntibiotic::OnDeptSelendok(){
	 
}
/*void CPMUseAntibiotic::OnDeptSetfocus(){
	
}*/
/*void CPMUseAntibiotic::OnDeptKillfocus(){
	
}*/
long CPMUseAntibiotic::OnDeptLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey);
};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type IN('KB', 'DT') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMUseAntibiotic::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMUseAntibiotic::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMUseAntibiotic::OnGroupSelendok(){
	 
}
/*void CPMUseAntibiotic::OnGroupSetfocus(){
	
}*/
/*void CPMUseAntibiotic::OnGroupKillfocus(){
	
}*/
long CPMUseAntibiotic::OnGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and mpc_code ='%s' "), m_szGroupKey);
};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mpc_code AS id, mpc_name AS name FROM m_product_category WHERE mpc_isactive='Y' AND mpc_org_id IN('GL','PM') %s ORDER BY mpc_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("ID")),
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMUseAntibiotic::OnGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMUseAntibiotic::OnListDblClick(){
	
} 
void CPMUseAntibiotic::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMUseAntibiotic::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMUseAntibiotic::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(m_nB5 == 0)
	{
		szSQL.Format(_T("SELECT msl_storage_id AS id, msl_name AS name FROM m_storagelist WHERE msl_dept_id = 'B5' ORDER BY msl_storage_id"));
	}
	if(m_nOtherB5 == 0)
	{
		szSQL.Format(_T("SELECT msl_storage_id AS id, msl_name AS name FROM m_storagelist WHERE msl_dept_id <> 'B5' ORDER BY msl_storage_id"));
	}
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CPMUseAntibiotic::OnB5Select(){
	UpdateData(TRUE);
	OnListLoadData();
}
void CPMUseAntibiotic::OnOtherB5Select(){
	UpdateData(TRUE);
	OnListLoadData();
}
void CPMUseAntibiotic::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CRecord rs1(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	CString m_szDocNo, m_szIdx;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 4);	xls.SetColumnWidth(1, 8);	xls.SetColumnWidth(2, 20);	xls.SetColumnWidth(3, 20);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 6);	xls.SetColumnWidth(6, 12);	xls.SetColumnWidth(7, 20);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 10);	xls.SetColumnWidth(10, 10);	xls.SetColumnWidth(11, 6);	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);		xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O S\x1EEC \x44\x1EE4NG KH\xC1NG SINH \x44\x1EF0 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("\x43h\x1EA9n \x111o\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("Gi\x1EDBi t\xEDnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Lo\x1EA1i ph\x1EABu thu\x1EADt"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("T\xEAn thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 4, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 11);	xls.SetMerge(3, 3, 0, 11);	if(m_nB5 == 0)		szSQL = GetQueryString();	if(m_nOtherB5 == 0)		szSQL = GetQueryString3();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("docno"), m_szDocNo);		xls.SetCellText(nCol+1, nRow, m_szDocNo, FMT_INTEGER);		rs.GetValue(_T("pobject"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("diagnostic"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("age"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("sex"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("loaipt"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("deptid"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("idx"), m_szIdx);		if(m_nB5 == 0)			{				szSQL = GetQueryString2(m_szDocNo, m_szIdx);				rs1.ExecSQL(szSQL);				while(!rs1.IsEOF())
				{					rs1.GetValue(_T("productname"), tmpStr);					xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);					rs1.GetValue(_T("qty"), tmpStr);					xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);					rs1.GetValue(_T("price"), tmpStr);					xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);					rs1.GetValue(_T("amount"), tmpStr);					xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);					rs1.MoveNext();					nRow++;				}			}				if(m_nOtherB5 == 0)			{				rs.GetValue(_T("productname"), tmpStr);				xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("qty"), tmpStr);				xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("price"), tmpStr);				xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("amount"), tmpStr);				xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);				nRow++;			}		rs.MoveNext();
	}	EndWaitCursor();	xls.Save(_T("Exports\\BCsudungthuockhangsinh.xls"));
} 
int CPMUseAntibiotic::OnAddPMUseAntibiotic(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMUseAntibiotic::OnEditPMUseAntibiotic(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMUseAntibiotic::OnDeletePMUseAntibiotic(){
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
 		OnCancelPMUseAntibiotic();
 	}
	return 0;
}
int CPMUseAntibiotic::OnSavePMUseAntibiotic(){
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
 		//OnPMUseAntibioticListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMUseAntibiotic::OnCancelPMUseAntibiotic(){
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
int CPMUseAntibiotic::OnPMUseAntibioticListLoadData(){
	return 0;
}
CString CPMUseAntibiotic::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szStorages, szTemp;

	if(!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T("AND ho_deptid = '%s'"), m_szDeptKey);
	if(!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T("AND mpc_code = '%s'"), m_szGroupKey);

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			szTemp = m_wndList.GetItemText(i, 0);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("%s"), szTemp);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorages);
	}

	szSQL.Format(_T(" SELECT DISTINCT") \
				_T(" hd_docno AS docno,") \
				_T(" (SELECT ho_desc FROM hms_object WHERE ho_id = hd_object) AS pobject,") \
				_T(" hd_diagnostic AS diagnostic,") \
				_T(" hms_getagebydoc(hd_docno) AS age,") \
				_T(" (SELECT hms_getsex(hp_sex) FROM hms_patient WHERE hp_patientno = hd_patientno) AS sex,") \
				_T(" (SELECT hfg_name FROM hms_fee_group WHERE hfg_id = substr(ho_itemid, 0, 5)) AS loaipt,") \
				_T(" ho_deptid AS deptid,") \
				_T(" ho_idx AS idx,") \
				_T(" ho_performdate") \
				_T(" FROM hms_operation") \
				_T(" LEFT JOIN hms_doc") \
				_T(" ON(hd_docno = ho_docno)") \
				_T(" LEFT JOIN hms_ipharmaorder") \
				_T(" ON(ho_docno = hpo_docno AND ho_idx = hpo_reference_id)") \
				_T(" LEFT JOIN hms_ipharmaorderline") \
				_T(" ON(hpo_orderid = hpol_orderid)") \
				_T(" LEFT JOIN m_product_view") \
				_T(" ON(product_id = hpol_product_id)") \
				_T(" LEFT JOIN m_product_category") \
				_T(" ON(product_categoryid = mpc_product_category_id)") \
				_T(" WHERE ho_pdeptid = 'B5'") \
				_T(" AND ho_status = 'T'") \
				_T(" AND ho_antibiotic = 'Y'") \
				_T(" AND ho_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
				_T(" AND hpo_orderstatus = 'A'") \
				_T(" ORDER BY") \
				_T(" ho_performdate, hd_docno"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}
CString CPMUseAntibiotic::GetQueryString2(CString m_szDocNo, CString m_szIdx){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szTemp, szStorages;

	if(!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T("AND ho_deptid = '%s'"), m_szDeptKey);
	if(!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T("AND mpc_code = '%s'"), m_szGroupKey);

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			szTemp = m_wndList.GetItemText(i, 0);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("%s"), szTemp);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorages);
	}

	szSQL.Format(_T(" SELECT") \
		_T(" product_name AS productname,") \
		_T(" hpol_qtyissue AS qty,") \
		_T(" hpol_unitprice AS price,") \
		_T(" hpol_unitprice * hpol_qtyissue AS amount") \
		_T(" FROM hms_ipharmaorder") \
		_T(" LEFT JOIN hms_ipharmaorderline") \
		_T(" ON(hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN m_product_view") \
		_T(" ON(product_id = hpol_product_id)") \
		_T(" LEFT JOIN m_product_category") \
		_T(" ON(product_categoryid = mpc_product_category_id)") \
		_T(" WHERE hpo_orderstatus = 'A'") \
		_T(" AND hpo_docno = %s") \
		_T(" AND hpo_reference_id = %s %s") \
		_T(" ORDER BY") \
		_T(" product_name"), m_szDocNo, m_szIdx, szWhere);

	return szSQL;
}
CString CPMUseAntibiotic::GetQueryString3(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szStorages, szTemp;

	if(!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T("AND hpo_deptid = '%s'"), m_szDeptKey);
	if(!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T("AND mpc_code = '%s'"), m_szGroupKey);

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			szTemp = m_wndList.GetItemText(i, 0);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("%s"), szTemp);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorages);
	}

	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
		_T("   (SELECT ho_desc FROM hms_object WHERE ho_id = hd_object") \
		_T("   )                         AS pobject,") \
		_T("   hd_diagnostic             AS diagnostic,") \
		_T("   hms_getagebydoc(hd_docno) AS age,") \
		_T("   (SELECT hms_getsex(hp_sex)") \
		_T("   FROM hms_patient") \
		_T("   WHERE hp_patientno = hd_patientno") \
		_T("   )                                   AS sex,") \
		_T("   ''                                  AS loaipt,") \
		_T("   product_name                        AS productname,") \
		_T("   SUM(hpol_qtyissue)                  AS qty,") \
		_T("   hpol_unitprice                      AS price,") \
		_T("   SUM(hpol_unitprice * hpol_qtyissue) AS amount,") \
		_T("   hpo_deptid AS deptid") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_ipharmaorder") \
		_T(" ON(hd_docno = hpo_docno)") \
		_T(" LEFT JOIN hms_ipharmaorderline") \
		_T(" ON(hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN m_product_view") \
		_T(" ON(product_id = hpol_product_id)") \
		_T(" LEFT JOIN m_product_category") \
		_T(" ON(product_categoryid = mpc_product_category_id)") \
		_T(" WHERE hpo_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpo_orderstatus = 'A' %s") \
		_T(" GROUP BY hd_docno,") \
		_T("   hd_object,") \
		_T("   hd_diagnostic,") \
		_T("   hd_patientno,") \
		_T("   product_name,") \
		_T("   hpol_unitprice,") \
		_T("   hpo_deptid") \
		_T(" ORDER BY hd_docno"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}
