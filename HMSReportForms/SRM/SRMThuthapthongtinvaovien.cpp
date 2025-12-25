#include "stdafx.h"
#include "SRMThuthapthongtinvaovien.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinvaovien *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinvaovien *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinvaovien* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinvaovien *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnObjectAddNew();
}*/
static void _OnSectionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinvaovien* )pWnd)->OnSectionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSectionSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnSectionSelendok();
}
/*static void _OnSectionSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnSectionKillfocus();
}*/
/*static void _OnSectionKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnSectionKillfocus();
}*/
static long _OnSectionLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinvaovien *)pWnd)->OnSectionLoadData();
}
/*static void _OnSectionAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnSectionAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinvaovien *pVw = (CSRMThuthapthongtinvaovien *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinvaovien *pVw = (CSRMThuthapthongtinvaovien *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinvaovien *pVw = (CSRMThuthapthongtinvaovien *)pWnd;
	pVw->OnLoadSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinvaovien*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMThuthapthongtinvaovien*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinvaovien*)pWnd)->OnListDeleteItem();
} 
static int _OnAddSRMThuthapthongtinvaovienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinvaovien*)pWnd)->OnAddSRMThuthapthongtinvaovien();
} 
static int _OnEditSRMThuthapthongtinvaovienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinvaovien*)pWnd)->OnEditSRMThuthapthongtinvaovien();
} 
static int _OnDeleteSRMThuthapthongtinvaovienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinvaovien*)pWnd)->OnDeleteSRMThuthapthongtinvaovien();
} 
static int _OnSaveSRMThuthapthongtinvaovienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinvaovien*)pWnd)->OnSaveSRMThuthapthongtinvaovien();
} 
static int _OnCancelSRMThuthapthongtinvaovienFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinvaovien*)pWnd)->OnCancelSRMThuthapthongtinvaovien();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinvaovien* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinvaovien *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CSRMThuthapthongtinvaovien*)pWnd)->OnOutPatientSelect();
}
CSRMThuthapthongtinvaovien::CSRMThuthapthongtinvaovien(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSRMThuthapthongtinvaovien::~CSRMThuthapthongtinvaovien(){
}
void CSRMThuthapthongtinvaovien::OnCreateComponents(){
	m_wndInwardListReport.Create(this, _T("Inward List Report"), 5, 5, 490, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndDepartmentLab.Create(this, _T("Department"), 10, 60, 90, 85);
	m_wndDepartment.Create(this,95, 60, 485, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.Create(this,95, 90, 245, 115); 
	m_wndSectionLabel.Create(this, _T("Section"), 250, 90, 329, 115);
	m_wndSection.Create(this,334, 90, 484, 115); 
	m_wndAll.Create(this, _T("All"), 10, 120, 90, 145);
	m_wndInPatient.Create(this, _T("InPatient"), 95, 120, 175, 145);
	m_wndOutPatient.Create(this, _T("OutPatient"), 180, 120, 260, 145);
	m_wndPrint.Create(this, _T("&Print"), 316, 155, 396, 180);
	m_wndExport.Create(this, _T("&Export"), 401, 155, 481, 180);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndSection.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSection.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CSRMThuthapthongtinvaovien::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndSection.SetCheckValue(true);
	m_wndSection.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);

}
void CSRMThuthapthongtinvaovien::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	m_wndAll.SetCheck(true);
	m_szCondition = _T("A");

}
void CSRMThuthapthongtinvaovien::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndSection.GetDlgCtrlID(), m_szSectionKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CSRMThuthapthongtinvaovien::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSRMThuthapthongtinvaovien::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSRMThuthapthongtinvaovien::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szSectionKey.Empty();
	m_szDepartmentKey.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;

}
int CSRMThuthapthongtinvaovien::SetMode(int nMode){
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
void CSRMThuthapthongtinvaovien::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinvaovien::OnDepartmentSelendok(){
	 
}
/*void CSRMThuthapthongtinvaovien::OnDepartmentSetfocus(){
	
}*/
/*void CSRMThuthapthongtinvaovien::OnDepartmentKillfocus(){
	
}*/
long CSRMThuthapthongtinvaovien::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type IN ('DT','KB') order by id"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSRMThuthapthongtinvaovien::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CSRMThuthapthongtinvaovien::OnFromDateChange(){
	
} */
/*void CSRMThuthapthongtinvaovien::OnFromDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinvaovien::OnFromDateKillfocus(){
	
} */
int CSRMThuthapthongtinvaovien::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMThuthapthongtinvaovien::OnToDateChange(){
	
} */
/*void CSRMThuthapthongtinvaovien::OnToDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinvaovien::OnToDateKillfocus(){
	
} */
int CSRMThuthapthongtinvaovien::OnToDateCheckValue(){
	return 0;
} 
void CSRMThuthapthongtinvaovien::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinvaovien::OnObjectSelendok(){
	 
}
/*void CSRMThuthapthongtinvaovien::OnObjectSetfocus(){
	
}*/
/*void CSRMThuthapthongtinvaovien::OnObjectKillfocus(){
	
}*/
long CSRMThuthapthongtinvaovien::OnObjectLoadData(){
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
/*void CSRMThuthapthongtinvaovien::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinvaovien::OnSectionSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinvaovien::OnSectionSelendok(){
	 
}
/*void CSRMThuthapthongtinvaovien::OnSectionSetfocus(){
	
}*/
/*void CSRMThuthapthongtinvaovien::OnSectionKillfocus(){
	
}*/
long CSRMThuthapthongtinvaovien::OnSectionLoadData(){
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
/*void CSRMThuthapthongtinvaovien::OnSectionAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinvaovien::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nRetired = 0, nCount = 0, ret = 0, nSoldier = 0;
	szSQL = GetQueryString();
	if (!rpt.Init(_T("Reports\\HMS\\THUTHAPTHONGTINVAOVIEN.RPT")))
		return;
	ret = rs.ExecSQL(szSQL);
	nCount = rs.GetRecordCount();
	if (ret <=0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
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
		//lienhe
		rs.GetValue(_T("contact"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
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
void CSRMThuthapthongtinvaovien::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	CString szSQL, tmpStr;
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
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 25);
	xls.SetColumnWidth(5, 11);
	xls.SetColumnWidth(6, 30);
	xls.SetColumnWidth(7, 45);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 35);

	xls.SetCellMergedColumns(nCol, nRow , 4);
	xls.SetCellMergedColumns(nCol, nRow+1, 4);
	xls.SetCellMergedColumns(nCol, nRow+2, 11);
	xls.SetCellMergedColumns(nCol, nRow+3, 11);
	xls.SetCellText(nCol, nRow, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow+1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow+2, _T("Thu th\x1EADp th\xF4ng tin v\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER, true, 14);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow+3, tmpStr, FMT_TEXT | FMT_CENTER, false, 10);
	//Column header
	nRow = 4;
	CStringArray arrCol;
	arrCol.Add(_T("Stt"));
	arrCol.Add(_T("Doc No"));
	arrCol.Add(_T("Inward No"));
	arrCol.Add(_T("T\xEAn \x62\x1EC7nh nh\xE2n"));
	arrCol.Add(_T("N\x103m sinh"));
	arrCol.Add(_T("\x43\x1EA5p \x62\x1EAD\x63"));
	arrCol.Add(_T("\x110v"));
	arrCol.Add(_T("\x43h\x1EA9n \x111o\xE1n"));
	arrCol.Add(_T("\x110\x1ED1i t\x1B0\x1EE3ng"));
	arrCol.Add(_T("V\xE0o kho\x61"));
	arrCol.Add(_T("Li\xEAn h\x1EC7"));
	for (int i = 0;i<arrCol.GetCount();i++)
	{
		xls.SetCellText(nCol+i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10);	
	}
	//get data
	int nIdx = 0;
	while (!rs.IsEOF())
	{
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		xls.SetCellText(nCol, nRow+1, tmpStr, FMT_INTEGER);
		//docno
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow+1, tmpStr, FMT_INTEGER);
		//inwardno
		rs.GetValue(_T("inwardno"), tmpStr);
		xls.SetCellText(nCol+2, nRow+1, tmpStr, FMT_TEXT);
		//tenbenhnhan
		rs.GetValue(_T("tenbenhnhan"), tmpStr);
		xls.SetCellText(nCol+3, nRow+1, tmpStr, FMT_TEXT);
		//namsinh
		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+4, nRow+1, tmpStr, FMT_INTEGER);
		//capbac
		rs.GetValue(_T("capbac"), tmpStr);
		xls.SetCellText(nCol+5, nRow+1, tmpStr, FMT_TEXT);
		//dv
		rs.GetValue(_T("dv"), tmpStr);
		xls.SetCellText(nCol+6, nRow+1, tmpStr, FMT_TEXT);
		//chandoan
		rs.GetValue(_T("chandoan"), tmpStr);
		xls.SetCellText(nCol+7, nRow+1, tmpStr, FMT_TEXT);
		//doituong
		rs.GetValue(_T("doituong"), tmpStr);
		xls.SetCellText(nCol+8, nRow+1, tmpStr, FMT_TEXT);
		//vaokhoa
		rs.GetValue(_T("vaokhoa"), tmpStr);
		xls.SetCellText(nCol+9, nRow+1, tmpStr, FMT_TEXT);
		//lienhe
		rs.GetValue(_T("contact"), tmpStr);
		xls.SetCellText(nCol+10, nRow+1, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\SRMThuthapthongtinvaovien.xls"));
	EndWaitCursor();
} 
void CSRMThuthapthongtinvaovien::OnLoadSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CSRMThuthapthongtinvaovien::OnAllSelect(){
	m_szCondition = _T("A");
	OnListLoadData();
}
void CSRMThuthapthongtinvaovien::OnInPatientSelect(){
	m_szCondition = _T("I");
	OnListLoadData();
}
void CSRMThuthapthongtinvaovien::OnOutPatientSelect(){
	m_szCondition = _T("E");
	OnListLoadData();
}
void CSRMThuthapthongtinvaovien::OnListDblClick(){
	
} 
void CSRMThuthapthongtinvaovien::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CSRMThuthapthongtinvaovien::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSRMThuthapthongtinvaovien::OnListLoadData(){
	UpdateData(TRUE);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, szNewGroup, szOldGroup;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	int nItem=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("inwardno")), 
			rs.GetValue(_T("tenbenhnhan")), 
			rs.GetValue(_T("namsinh")), 
			rs.GetValue(_T("capbac")), 
			rs.GetValue(_T("dv")), 
			rs.GetValue(_T("chandoan")), 
			rs.GetValue(_T("doituong")),
			rs.GetValue(_T("vaokhoa")),
			rs.GetValue(_T("hd_enddate")),
			rs.GetValue(_T("contact")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CSRMThuthapthongtinvaovien::OnAddSRMThuthapthongtinvaovien(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSRMThuthapthongtinvaovien::OnEditSRMThuthapthongtinvaovien(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMThuthapthongtinvaovien::OnDeleteSRMThuthapthongtinvaovien(){
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
 		OnCancelSRMThuthapthongtinvaovien();
 	}
	return 0;
}
int CSRMThuthapthongtinvaovien::OnSaveSRMThuthapthongtinvaovien(){
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
 		//OnSRMThuthapthongtinvaovienListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSRMThuthapthongtinvaovien::OnCancelSRMThuthapthongtinvaovien(){
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
int CSRMThuthapthongtinvaovien::OnSRMThuthapthongtinvaovienListLoadData(){
	return 0;
}
CString CSRMThuthapthongtinvaovien::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szDept,szSection,szLeftjoin;
	szWhere.Format(_T(" AND hcr_admitdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if (!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szSectionKey.IsEmpty())
		szSection.AppendFormat(_T(" AND hd_enddept = '%s'"), m_szSectionKey);
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND hcr_admitdept = '%s'"), m_szDepartmentKey);

	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(" and 1=1 "));
	//Trang thai noi tru
	if (m_szCondition == _T("I"))
	{	
		szLeftjoin.AppendFormat(_T("LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)"));
		szWhere.AppendFormat(_T(" and htr_outpatient='N' "));
	}
	//Trang thai ngoai tru
	if (m_szCondition == _T("E"))
	{
		szLeftjoin.AppendFormat(_T("LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)"));
		szWhere.AppendFormat(_T(" and htr_outpatient='Y' "));
	}

	szSQL.Format(_T(" SELECT distinct hcr_docno as docno,") \
				_T("         hcr_recordno as inwardno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as tenbenhnhan,") \
				_T("         extract (year from hp_birthdate) as namsinh,") \
				_T("         (select distinct ss_desc from sys_sel where ss_id = 'hms_rank' and ss_code = hp_rank) as capbac,") \
				_T("         hp_workplace as dv,") \
				_T("         hcr_admitdisease as chandoan,") \
				_T("         case when hd_object <> 2 then ") \
				_T("         (select distinct ho_desc from hms_object where ho_id = hd_object) ") \
				_T("         else (select distinct ss_desc from sys_sel where ss_id = 'sys_occupation' and cast(ss_code as integer)= 24)") \
				_T("         end as doituong, hd_object as objid,") \
				_T("         hcr_admitdept as vaokhoa,hd_enddate,") \
				_T("		 CASE WHEN hd_contacttel = hd_telephone THEN hd_telephone WHEN hd_contacttel <> hd_telephone THEN TRIM(hd_telephone || ' (' || hd_contacttel || ')') END AS contact") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" %s ") \
				_T(" WHERE hcr_numinward > 0 ") \
				_T("  %s %s %s") \
				_T(" ORDER BY hcr_docno"),szLeftjoin, szWhere, szSection,szDept);
	//QueryOpener(szSQL);
	return szSQL;
}