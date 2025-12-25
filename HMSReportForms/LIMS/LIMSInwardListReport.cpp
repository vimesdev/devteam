#include "stdafx.h"
#include "LIMSInwardListReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInwardListReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInwardListReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSInwardListReport* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CLIMSInwardListReport *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnObjectAddNew();
}*/
static void _OnSectionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSInwardListReport* )pWnd)->OnSectionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSectionSelendokFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnSectionSelendok();
}
/*static void _OnSectionSetfocusFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnSectionKillfocus();
}*/
/*static void _OnSectionKillfocusFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnSectionKillfocus();
}*/
static long _OnSectionLoadDataFnc(CWnd *pWnd){
	return ((CLIMSInwardListReport *)pWnd)->OnSectionLoadData();
}
/*static void _OnSectionAddNewFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnSectionAddNew();
}*/
static void _OnInDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSInwardListReport* )pWnd)->OnInDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInDeptSelendokFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnInDeptSelendok();
}
/*static void _OnInDeptSetfocusFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnInDeptKillfocus();
}*/
/*static void _OnInDeptKillfocusFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnInDeptKillfocus();
}*/
static long _OnInDeptLoadDataFnc(CWnd *pWnd){
	return ((CLIMSInwardListReport *)pWnd)->OnInDeptLoadData();
}
/*static void _OnInDeptAddNewFnc(CWnd *pWnd){
	((CLIMSInwardListReport *)pWnd)->OnInDeptAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSInwardListReport*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CLIMSInwardListReport*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSInwardListReport*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	return ((CLIMSInwardListReport*)pWnd)->OnListDeleteItem();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CLIMSInwardListReport*)pWnd)->OnListCheckAll();
}
static int _OnListUncheckAllFnc(CWnd *pWnd){
	return ((CLIMSInwardListReport*)pWnd)->OnListUncheckAll();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CLIMSInwardListReport *pVw = (CLIMSInwardListReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CLIMSInwardListReport *pVw = (CLIMSInwardListReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddLIMSInwardListReportFnc(CWnd *pWnd){
	 return ((CLIMSInwardListReport*)pWnd)->OnAddLIMSInwardListReport();
} 
static int _OnEditLIMSInwardListReportFnc(CWnd *pWnd){
	 return ((CLIMSInwardListReport*)pWnd)->OnEditLIMSInwardListReport();
} 
static int _OnDeleteLIMSInwardListReportFnc(CWnd *pWnd){
	 return ((CLIMSInwardListReport*)pWnd)->OnDeleteLIMSInwardListReport();
} 
static int _OnSaveLIMSInwardListReportFnc(CWnd *pWnd){
	 return ((CLIMSInwardListReport*)pWnd)->OnSaveLIMSInwardListReport();
} 
static int _OnCancelLIMSInwardListReportFnc(CWnd *pWnd){
	 return ((CLIMSInwardListReport*)pWnd)->OnCancelLIMSInwardListReport();
} 
CLIMSInwardListReport::CLIMSInwardListReport(CWnd *pParent){

	m_nDlgWidth = 500;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CLIMSInwardListReport::~CLIMSInwardListReport(){
}
void CLIMSInwardListReport::OnCreateComponents(){
	m_wndInwardListReport.Create(this, _T("Inward List Report"), 5, 5, 490, 545);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 60, 90, 85);
	m_wndObject.Create(this,95, 60, 245, 85); 
	m_wndObject.SetCheckBox(TRUE);
	m_wndSectionLabel.Create(this, _T("Section"), 250, 60, 330, 85);
	m_wndSection.Create(this,335, 60, 485, 85); 
	m_wndSection.SetCheckBox(TRUE);
	m_wndInDeptLabel.Create(this, _T("In Dept"), 10, 90, 90, 115);
	m_wndInDept.Create(this,95, 90, 485, 115); 
	m_wndInDept.SetCheckBox(TRUE);
	m_wndList.Create(this,10, 120, 485, 540); 
	//m_wndPrint.Create(this, _T("&Print"), 335, 550, 410, 575);
	m_wndExport.Create(this, _T("&Export"), 415, 550, 490, 575);

}
void CLIMSInwardListReport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	//m_wndSection.SetCheckValue(true);
	m_wndSection.LimitText(35);
	//m_wndInDept.SetCheckValue(true);
	m_wndInDept.LimitText(35);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 150);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndSection.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 150);
	m_wndSection.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndInDept.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 180);
	m_wndInDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndList.InsertColumn(1, _T("Nhóm"), CFMT_TEXT, 450);
	m_wndList.SetCheckBox(true);

}
void CLIMSInwardListReport::OnSetWindowEvents(){
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
	m_wndSection.SetEvent(WE_SELENDOK, _OnSectionSelendokFnc);
	//m_wndSection.SetEvent(WE_SETFOCUS, _OnSectionSetfocusFnc);
	//m_wndSection.SetEvent(WE_KILLFOCUS, _OnSectionKillfocusFnc);
	m_wndSection.SetEvent(WE_SELCHANGE, _OnSectionSelectChangeFnc);
	m_wndSection.SetEvent(WE_LOADDATA, _OnSectionLoadDataFnc);
	//m_wndSection.SetEvent(WE_ADDNEW, _OnSectionAddNewFnc);
	m_wndInDept.SetEvent(WE_SELENDOK, _OnInDeptSelendokFnc);
	//m_wndInDept.SetEvent(WE_SETFOCUS, _OnInDeptSetfocusFnc);
	//m_wndInDept.SetEvent(WE_KILLFOCUS, _OnInDeptKillfocusFnc);
	m_wndInDept.SetEvent(WE_SELCHANGE, _OnInDeptSelectChangeFnc);
	m_wndInDept.SetEvent(WE_LOADDATA, _OnInDeptLoadDataFnc);
	//m_wndInDept.SetEvent(WE_ADDNEW, _OnInDeptAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUncheckAllFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLIMSInwardListReportFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLIMSInwardListReportFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLIMSInwardListReportFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLIMSInwardListReportFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLIMSInwardListReportFnc, 0, 'T', VK_CONTROL);
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	OnListLoadData();
	UpdateData(false);

}
void CLIMSInwardListReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndSection.GetDlgCtrlID(), m_szSectionKey);
	DDX_TextEx(pDX, m_wndInDept.GetDlgCtrlID(), m_szInDeptKey);

}
void CLIMSInwardListReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSInwardListReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLIMSInwardListReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szSectionKey.Empty();
	m_szInDeptKey.Empty();

}
int CLIMSInwardListReport::SetMode(int nMode){
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
/*void CLIMSInwardListReport::OnFromDateChange(){
	
} */
/*void CLIMSInwardListReport::OnFromDateSetfocus(){
	
} */
/*void CLIMSInwardListReport::OnFromDateKillfocus(){
	
} */
int CLIMSInwardListReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CLIMSInwardListReport::OnToDateChange(){
	
} */
/*void CLIMSInwardListReport::OnToDateSetfocus(){
	
} */
/*void CLIMSInwardListReport::OnToDateKillfocus(){
	
} */
int CLIMSInwardListReport::OnToDateCheckValue(){
	return 0;
} 
void CLIMSInwardListReport::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSInwardListReport::OnObjectSelendok(){
	 
}
/*void CLIMSInwardListReport::OnObjectSetfocus(){
	
}*/
/*void CLIMSInwardListReport::OnObjectKillfocus(){
	
}*/
long CLIMSInwardListReport::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		//szWhere.Format();
	};
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as description FROM hms_object ORDER BY cast(id as integer)"));
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CLIMSInwardListReport::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSInwardListReport::OnSectionSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSInwardListReport::OnSectionSelendok(){
	 
}
/*void CLIMSInwardListReport::OnSectionSetfocus(){
	
}*/
/*void CLIMSInwardListReport::OnSectionKillfocus(){
	
}*/
long CLIMSInwardListReport::OnSectionLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSection.IsSearchKey() && !m_szSectionKey.IsEmpty()){
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as description FROM sys_dept WHERE sd_type = 'KB' ORDER BY sd_id"));
	m_wndSection.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSection.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CLIMSInwardListReport::OnSectionAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSInwardListReport::OnInDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSInwardListReport::OnInDeptSelendok(){
	 
}
/*void CLIMSInwardListReport::OnInDeptSetfocus(){
	
}*/
/*void CLIMSInwardListReport::OnInDeptKillfocus(){
	
}*/
long CLIMSInwardListReport::OnInDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInDept.IsSearchKey() && !m_szInDeptKey.IsEmpty()){
	 szWhere.Format(_T(" AND sd_id='%s' "), m_szInDeptKey);
};
	m_wndInDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept WHERE sd_type = 'DT' %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CLIMSInwardListReport::OnInDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSInwardListReport::OnListDblClick(){

} 
void CLIMSInwardListReport::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
int CLIMSInwardListReport::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CLIMSInwardListReport::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name FROM hms_fee_group WHERE SUBSTR(hfg_id, 1, 2) = 'B1' AND SUBSTR(hfg_id, 1, 3) NOT IN('B1B', 'B1E', 'B1G') AND hfg_feeid = 'N' AND hfg_active = 'Y' ORDER BY hfg_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CLIMSInwardListReport::OnListCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return 0;	
}

int CLIMSInwardListReport::OnListUncheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return 0;	
}
void CLIMSInwardListReport::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nRetired = 0, nCount = 0, ret = 0, nSoldier = 0;
	szSQL = GetQueryString();
	if (!rpt.Init(_T("Reports\\HMS\\HE_DANHSACHBENHNHANVAOVIEN.RPT")))
		return;
	ret = rs.ExecSQL(szSQL);
	nCount = rs.GetRecordCount();
	if (ret <=0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail = NULL;
	int nIdx=0;
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), tmpStr);
		//sovaovien
		rs.GetValue(_T("inwardno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		//tenbn
		rs.GetValue(_T("tenbenhnhan"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		//namsinh
		rs.GetValue(_T("namsinh"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		//capbac
		rs.GetValue(_T("capbac"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		//dv
		rs.GetValue(_T("dv"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		//chandoan
		rs.GetValue(_T("chandoan"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		//doituong
		rs.GetValue(_T("doituong"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("objid"), tmpStr);
		if (tmpStr == _T("2"))
			nRetired++;
		//vaovien
		rs.GetValue(_T("vaokhoa"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.MoveNext();
	}
	nSoldier = nCount - nRetired;
	FormatCurrency(nSoldier, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("bodoi"), tmpStr);
	FormatCurrency(nRetired, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("huu"), tmpStr);
	FormatCurrency(nCount, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("tongcong"), tmpStr);
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CLIMSInwardListReport::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	CString szSQL, tmpStr, szNewDept, szOldDept;
	int nCol = 0, nRow = 0;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryString();
	BeginWaitCursor();
	int ret = rs.ExecSQL(szSQL);
	if (ret <=0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	
	//Width
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 25);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 30);
	xls.SetColumnWidth(5, 16);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 15);

	xls.SetCellMergedColumns(nCol, nRow , 4);
	xls.SetCellMergedColumns(nCol, nRow+1, 4);
	xls.SetCellMergedColumns(nCol, nRow+2, 10);
	xls.SetCellMergedColumns(nCol, nRow+3, 10);
	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow+1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow+2, _T("DANH SÁCH BỆNH NHÂN VÀO VIỆN CÓ CLS"), FMT_TEXT | FMT_CENTER, true, 11);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow+3, tmpStr, FMT_TEXT | FMT_CENTER, false, 10);
	//Column header
	nRow = 4;
	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Số hồ sơ"));
	arrCol.Add(_T("Tên bệnh nhân"));
	arrCol.Add(_T("Năm sinh"));
	arrCol.Add(_T("Chẩn đoán"));
	arrCol.Add(_T("Đối tượng"));
	arrCol.Add(_T("Vào khoa"));
	arrCol.Add(_T("Khoa kê"));
	arrCol.Add(_T("Nhóm"));
	for (int i = 0;i<arrCol.GetCount();i++)
	{
		xls.SetCellText(nCol+i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10);	
	}
	//get data
	int nIdx = 0;
	while (!rs.IsEOF())
	{

		rs.GetValue(_T("vaokhoa"), szNewDept);

		if (szNewDept != szOldDept)
		{
			
			xls.SetCellText(nCol+2, nRow+1, pMF->GetDepartmentName(szNewDept), FMT_TEXT, true);
			nRow++;
			szOldDept = szNewDept;
			nIdx = 0;
		}

		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		xls.SetCellText(nCol, nRow+1, tmpStr, FMT_INTEGER);
		//docno
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow+1, tmpStr, FMT_INTEGER);
		//tenbenhnhan
		rs.GetValue(_T("tenbenhnhan"), tmpStr);
		xls.SetCellText(nCol+2, nRow+1, tmpStr, FMT_TEXT);
		//namsinh
		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+3, nRow+1, tmpStr, FMT_INTEGER);
		//chandoan
		rs.GetValue(_T("chandoan"), tmpStr);
		xls.SetCellText(nCol+4, nRow+1, tmpStr, FMT_TEXT);
		//doituong
		rs.GetValue(_T("doituong"), tmpStr);
		xls.SetCellText(nCol+5, nRow+1, tmpStr, FMT_TEXT);
		//vaokhoa
		rs.GetValue(_T("vaokhoa"), tmpStr);
		xls.SetCellText(nCol+6, nRow+1, tmpStr, FMT_TEXT);
		//khoaketthuc
		rs.GetValue(_T("khoake"), tmpStr);
		xls.SetCellText(nCol+7, nRow+1, tmpStr, FMT_TEXT);
		//nhom
		rs.GetValue(_T("pgroup"), tmpStr);
		xls.SetCellText(nCol+8, nRow+1, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Danh sach BN vao vien co CLS.xls"));
	EndWaitCursor();
	
} 
int CLIMSInwardListReport::OnAddLIMSInwardListReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSInwardListReport::OnEditLIMSInwardListReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSInwardListReport::OnDeleteLIMSInwardListReport(){
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
 		OnCancelLIMSInwardListReport(); 
 	}
	return 0;
}
int CLIMSInwardListReport::OnSaveLIMSInwardListReport(){
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
 		//OnLIMSInwardListReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLIMSInwardListReport::OnCancelLIMSInwardListReport(){
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
int CLIMSInwardListReport::OnLIMSInwardListReportListLoadData(){
	return 0;
}
CString CLIMSInwardListReport::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szList, szObject, szSection, szInDept;
	szWhere.Format(_T(" AND hcr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObject.IsEmpty())
				szObject += _T("', '");
			szObject += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObject.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object IN('%s')"), szObject);
	
	for (int i = 0; i < m_wndSection.GetItemCount(); i++)
	{
		if (m_wndSection.GetCheck(i))
		{
			m_wndSection.SetCurSel(i);
			if (!szSection.IsEmpty())
				szSection += _T("', '");
			szSection += m_wndSection.GetCurrent(0);
		}
	}
	if (!szSection.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_deptid IN ('%s')"), szSection);
	
	for (int i = 0; i < m_wndInDept.GetItemCount(); i++)
	{
		if (m_wndInDept.GetCheck(i))
		{
			m_wndInDept.SetCurSel(i);
			if (!szInDept.IsEmpty())
				szInDept += _T("', '");
			szInDept += m_wndInDept.GetCurrent(0);
		}
	}
	if (!szInDept.IsEmpty())
		szWhere.AppendFormat(_T(" AND hcr_admitdept IN('%s')"), szInDept);

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szList.IsEmpty())
			{
				szList += _T(", ");
			}
			szList.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
		}

	}
	if (!szList.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_groupid IN(%s)"), szList);

	szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                  AS tenbenhnhan,") \
		_T("   extract (YEAR FROM hp_birthdate) AS namsinh,") \
		_T("   hcr_admitdisease AS chandoan,") \
		_T("   CASE") \
		_T("     WHEN hd_object <> 2") \
		_T("     THEN") \
		_T("       (SELECT DISTINCT ho_desc FROM hms_object WHERE ho_id = hd_object") \
		_T("       )") \
		_T("     ELSE") \
		_T("       (SELECT DISTINCT ss_desc") \
		_T("       FROM sys_sel") \
		_T("       WHERE ss_id                 = 'sys_occupation'") \
		_T("       AND CAST(ss_code AS INTEGER)= 24") \
		_T("       )") \
		_T("   END                     AS doituong,") \
		_T("   hd_object               AS objid,") \
		_T("   hcr_admitdept           AS vaokhoa,") \
		_T("   he_deptid               AS khoake,") \
		_T("   (SELECT hfg_name FROM hms_fee_group WHERE hfg_id = hpc_groupid) AS pgroup,") \
		_T("   hpc_groupid") \
		_T(" FROM hms_clinical_record") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hd_docno = hcr_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON (hd_patientno   = hp_patientno)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(he_docno = hd_docno)") \
		_T(" LEFT JOIN hms_testorder") \
		_T(" ON(he_docno = hpc_docno AND he_deptid = hpc_deptid AND he_roomid = hpc_roomid)") \
		_T(" WHERE hpc_docno IS NOT NULL %s") \
		_T(" ORDER BY hpc_groupid, hcr_admitdept, docno"), szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}