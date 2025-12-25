#include "stdafx.h"
#include "LIMSTestSetupButtonView.h"
#include "ParaclinicalInformationView.h"
#include "ParaclinicalInfor.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

static void _OnSearchSelectFnc(CWnd *pWnd)
{
	CParaclinicalInformationView *pVw = (CParaclinicalInformationView *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CParaclinicalInformationView* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CParaclinicalInformationView *)pWnd)->OnDeptSelendok();
}
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInformationView *)pWnd)->OnFromDateCheckValue();
} 
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInformationView *)pWnd)->OnToDateCheckValue();
}
static int _OnTotalBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInformationView *)pWnd)->OnTotalBarcodeCheckValue();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInformationView *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInformationView *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CParaclinicalInformationView *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CParaclinicalInformationView *)pWnd)->OnDeptAddNew();
}*/
/*static void _OnParaclinicalNameChangeFnc(CWnd *pWnd){
	((CParaclinicalInformationView *)pWnd)->OnParaclinicalNameChange();
} */
/*static void _OnParaclinicalNameSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInformationView *)pWnd)->OnParaclinicalNameSetfocus();} */ 
/*static void _OnParaclinicalNameKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInformationView *)pWnd)->OnParaclinicalNameKillfocus();
} */
static int _OnParaclinicalNameCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInformationView *)pWnd)->OnParaclinicalNameCheckValue();
}
static int _OnBarcodeNameCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInformationView *)pWnd)->OnBarcodeNameCheckValue();
} 

/*static void _OnTotalChangeFnc(CWnd *pWnd){
	((CParaclinicalInformationView *)pWnd)->OnTotalChange();
} */
/*static void _OnTotalSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInformationView *)pWnd)->OnTotalSetfocus();} */ 
/*static void _OnTotalKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInformationView *)pWnd)->OnTotalKillfocus();
} */
static int _OnTotalCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInformationView *)pWnd)->OnTotalCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CParaclinicalInformationView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CParaclinicalInformationView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CParaclinicalInformationView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CParaclinicalInformationView*)pWnd)->OnListDeleteItem();
} 
static void _OnServiceLabelSelectFnc(CWnd *pWnd){
	  ((CParaclinicalInformationView*)pWnd)->OnServiceLabelSelect();
}
static void _OnInsuranceandSolderLabelSelectFnc(CWnd *pWnd){
	  ((CParaclinicalInformationView*)pWnd)->OnInsuranceandSolderLabelSelect();
}
static void _OnAllLabelSelectFnc(CWnd *pWnd){
	  ((CParaclinicalInformationView*)pWnd)->OnAllLabelSelect();
}
static void _OnSubItemsSelectFnc(CWnd *pWnd){
	 ((CParaclinicalInformationView*)pWnd)->OnSubItemsSelect();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CParaclinicalInformationView *pVw = (CParaclinicalInformationView *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CParaclinicalInformationView*)pWnd)->OnAddParaclinicalInformation();
} 
static int _OnEditParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CParaclinicalInformationView*)pWnd)->OnEditParaclinicalInformation();
} 
static int _OnDeleteParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CParaclinicalInformationView*)pWnd)->OnDeleteParaclinicalInformation();
} 
static int _OnSaveParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CParaclinicalInformationView*)pWnd)->OnSaveParaclinicalInformation();
} 
static int _OnCancelParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CParaclinicalInformationView*)pWnd)->OnCancelParaclinicalInformation();
}
static void _OnSODSelectFnc(CWnd *pWnd)
{
	  ((CParaclinicalInformationView*)pWnd)->OnSODSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd)
{
	  ((CParaclinicalInformationView*)pWnd)->OnOutpatientSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd)
{
	  ((CParaclinicalInformationView*)pWnd)->OnInpatientSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd)
{
	  ((CParaclinicalInformationView*)pWnd)->OnAllSelect();
}
static int _OnExportFnc(CWnd *pWnd)
{
	return ((CParaclinicalInformationView*)pWnd)->OnExport();
}

CParaclinicalInformationView::CParaclinicalInformationView(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1020;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CParaclinicalInformationView::~CParaclinicalInformationView()
{
}
void CParaclinicalInformationView::OnCreateComponents()
{
	/*m_wndParaclinicalInformation.Create(this, _T("Paraclinical Information"), 5, 5, 1010, 25);
	m_wndSearch.Create(this, _T("&Search"), 855, 27, 1010, 81);
	m_wndDeptLabel.Create(this, _T("Dept"), 468, 28, 537, 53);
	m_wndDept.Create(this,543, 28, 850, 53); 
	m_wndBarCodeLabel.Create(this, _T("Barcode Name"), 468, 57, 537, 82);
	m_wndBarcodeName.Create(this,543, 57, 850, 82); 
	m_wndList.Create(this,11, 92, 1011, 615); 
	m_wndFromDateLabel.Create(this, _T("FromDate"), 10, 27, 110, 52);
	m_wndFromDate.Create(this,115, 27, 234, 52); 
	m_wndToDateLabel.Create(this, _T("ToDate"), 239, 27, 338, 52);
	m_wndToDate.Create(this,343, 27, 462, 52); 
	m_wndSOD.Create(this, _T("SOD"), 10, 57, 110, 82);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 57, 234, 82);
	m_wndInpatient.Create(this, _T("Inpatient"), 239, 56, 343, 81);
	m_wndAll.Create(this, _T("All"), 349, 57, 461, 82);*/
	m_wndParaclinicalInformation.Create(this, _T("Paraclinical Information"), 5, 5, 1010, 25);
	m_wndSearch.Create(this, _T("&Search"), 855, 28, 1010, 53);
	m_wndDeptLabel.Create(this, _T("Dept"), 468, 28, 537, 53);
	m_wndDept.Create(this,543, 28, 850, 53); 
	m_wndBarCodeLabel.Create(this, _T("Barcode Name"), 468, 59, 537, 84);
	m_wndBarcodeName.Create(this,543, 59, 850, 84); 
	m_wndList.Create(this,11, 92, 1011, 615); 
	m_wndFromDateLabel.Create(this, _T("FromDate"), 10, 28, 110, 53);
	m_wndFromDate.Create(this,115, 28, 234, 53); 
	m_wndToDateLabel.Create(this, _T("ToDate"), 239, 28, 338, 53);
	m_wndSOD.Create(this, _T("SOD"), 10, 59, 110, 84);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 59, 234, 84);
	m_wndInpatient.Create(this, _T("Inpatient"), 239, 59, 343, 84);
	m_wndAll.Create(this, _T("All"), 349, 59, 461, 84);
	m_wndToDate.Create(this,349, 28, 461, 53); 
	m_wndTotalBarcode.Create(this,855, 59, 1010, 84);
}
void CParaclinicalInformationView::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndParaclinicalName.SetLimitText(35);
	m_wndParaclinicalName.SetCheckValue(true);
	m_wndTotal.SetLimitText(35);
	m_wndTotal.SetCheckValue(true);
	m_wndBarcodeName.SetLimitText(5);
	m_wndBarcodeName.SetCheckValue(true);	
	m_wndFromDate.SetCheckValue(true);	
	m_wndToDate.SetCheckValue(true);
	m_wndTotalBarcode.SetLimitText(16);
	m_wndTotalBarcode.SetCheckValue(true);
	m_wndTotalBarcode.ModifyStyle(0, ES_UPPERCASE);
	m_wndTotalBarcode.SetTextColor(RGB(255, 0, 0));




		m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
		m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);


	/*m_wndList.InsertColumn(0, _T("BarCode"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("DocNo"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("PatientName"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("YearOfBirth"), CFMT_DATE, 50);
	m_wndList.InsertColumn(5, _T("MapDate"), CFMT_DATETIME, 130);
	m_wndList.InsertColumn(6, _T("SystemDateTime"), CFMT_DATETIME, 130);
	m_wndList.InsertColumn(7, _T("totalminutes"), CFMT_NUMBER, 120);
	m_wndList.InsertColumn(8, _T("groupname"), CFMT_TEXT, 250);*/
	m_wndList.InsertColumn(0, _T("BarCode"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("DocNo"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("PatientName"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("YearOfBirth"), CFMT_DATE, 50);
	m_wndList.InsertColumn(5, _T("Dept"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(6, _T("ReceiveDate"), CFMT_DATETIME, 130);
	m_wndList.InsertColumn(7, _T("SystemDateTime"), CFMT_DATETIME, 130);
	m_wndList.InsertColumn(8, _T("WaitingTime"), CFMT_NUMBER, 120);
	m_wndList.InsertColumn(9, _T("groupname"), CFMT_TEXT, 250);


}
void CParaclinicalInformationView::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	//m_wndParaclinicalName.SetEvent(WE_CHANGE, _OnParaclinicalNameChangeFnc);
	//m_wndParaclinicalName.SetEvent(WE_SETFOCUS, _OnParaclinicalNameSetfocusFnc);
	//m_wndParaclinicalName.SetEvent(WE_KILLFOCUS, _OnParaclinicalNameKillfocusFnc);
	m_wndParaclinicalName.SetEvent(WE_CHECKVALUE, _OnParaclinicalNameCheckValueFnc);
	//m_wndTotal.SetEvent(WE_CHANGE, _OnTotalChangeFnc);
	//m_wndTotal.SetEvent(WE_SETFOCUS, _OnTotalSetfocusFnc);
	//m_wndTotal.SetEvent(WE_KILLFOCUS, _OnTotalKillfocusFnc);
	m_wndTotal.SetEvent(WE_CHECKVALUE, _OnTotalCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(2, _T("Xuất"), _OnExportFnc);
	m_wndServiceLabel.SetEvent(WE_CLICK, _OnServiceLabelSelectFnc);
	m_wndInsuranceandSolderLabel.SetEvent(WE_CLICK, _OnInsuranceandSolderLabelSelectFnc);
	m_wndAllLabel.SetEvent(WE_CLICK, _OnAllLabelSelectFnc);
	m_wndSubItems.SetEvent(WE_CLICK, _OnSubItemsSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndBarcodeName.SetEvent(WE_CHECKVALUE, _OnBarcodeNameCheckValueFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);	
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSOD.SetEvent(WE_CLICK, _OnSODSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndTotalBarcode.SetEvent(WE_CHECKVALUE, _OnTotalBarcodeCheckValueFnc);	
	SetWindowFont(&m_wndTotalBarcode, GetFaceName(), GetFaceSize() + 3, TRUE);
	m_szFromDate = pMF->GetSysDate();	
	m_szFromDate += _T("00:00");	
	m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT sup_permid perm_id FROM sys_userperm WHERE sup_userid = '%s' AND sup_moduleid = '%s'") \
				 _T(" AND substr(sup_permid, 1, 2) = 'B1'"), pMF->GetCurrentUser(), pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		if (!m_szPermGroupID.IsEmpty())
			m_szPermGroupID += _T(", ");
		m_szPermGroupID.AppendFormat(_T("'%s'"), rs.GetValue(_T("perm_id")));
		rs.MoveNext();
	}
	UpdateData(false);
	OnListLoadData();

}
void CParaclinicalInformationView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Text(pDX, m_wndParaclinicalName.GetDlgCtrlID(), m_szParaclinicalName);
	DDX_Text(pDX, m_wndTotal.GetDlgCtrlID(), m_nTotal);
	DDX_Radio(pDX, m_wndServiceLabel.GetDlgCtrlID(), m_nServiceLabel);
	DDX_Radio(pDX, m_wndInsuranceandSolderLabel.GetDlgCtrlID(), m_nInsuranceandSolderLabel);
	DDX_Radio(pDX, m_wndAllLabel.GetDlgCtrlID(), m_nAllLabel);
	DDX_Check(pDX, m_wndSubItems.GetDlgCtrlID(), m_bSubItems);
	DDX_Text(pDX, m_wndBarcodeName.GetDlgCtrlID(), m_szBarcodeName);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndSOD.GetDlgCtrlID(), m_nSOD);
	DDX_Radio(pDX, m_wndOutpatient.GetDlgCtrlID(), m_nOutpatient);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nInpatient);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Text(pDX, m_wndTotalBarcode.GetDlgCtrlID(), m_nTotalBarcode);

}
void CParaclinicalInformationView::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CParaclinicalInformationView::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CParaclinicalInformationView::SetDefaultValues(){

	m_szDeptKey.Empty();
	m_szParaclinicalName.Empty();
	m_nTotal=0;
	m_nServiceLabel=1;
	m_nInsuranceandSolderLabel=1;
	m_nAllLabel=0;
	m_bSubItems=FALSE;
	m_szBarcodeName.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nSOD=0;
	m_nOutpatient=1;
	m_nInpatient=1;
	m_nAll=1;

}
int CParaclinicalInformationView::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
		m_wndTotalBarcode.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
int CParaclinicalInformationView::OnTotalBarcodeCheckValue()
{
	return 0;
} 

void CParaclinicalInformationView::OnSearchSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
} 
void CParaclinicalInformationView::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CParaclinicalInformationView::OnFromDateCheckValue(){
	return 0;
} 

int CParaclinicalInformationView::OnToDateCheckValue(){
	return 0;
} 
void CParaclinicalInformationView::OnSODSelect(){
	
}
void CParaclinicalInformationView::OnOutpatientSelect(){
	
}
void CParaclinicalInformationView::OnInpatientSelect(){
	
}
void CParaclinicalInformationView::OnAllSelect(){
	
}
void CParaclinicalInformationView::OnDeptSelendok(){
	 
}
/*void CParaclinicalInformationView::OnDeptSetfocus(){
	
}*/
/*void CParaclinicalInformationView::OnDeptKillfocus(){
	
}*/
long CParaclinicalInformationView::OnDeptLoadData(){
	/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	};
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

	return 0;*/
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szDeptKey);
	}
	if (!m_szPermGroupID.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfg_id IN (%s)"), m_szPermGroupID);
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as description FROM hms_fee_group WHERE substr(hfg_id , 1, 2) = 'B1' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CParaclinicalInformationView::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CParaclinicalInformationView::OnParaclinicalNameChange(){
	
} */
/*void CParaclinicalInformationView::OnParaclinicalNameSetfocus(){
	
} */
/*void CParaclinicalInformationView::OnParaclinicalNameKillfocus(){
	
} */
int CParaclinicalInformationView::OnParaclinicalNameCheckValue()
{
	OnListLoadData();
	return 1;
} 
/*void CParaclinicalInformationView::OnTotalChange(){
	
} */
/*void CParaclinicalInformationView::OnTotalSetfocus(){
	
} */
/*void CParaclinicalInformationView::OnTotalKillfocus(){
	
} */
int CParaclinicalInformationView::OnTotalCheckValue(){
	return 0;
}
int CParaclinicalInformationView::OnBarcodeNameCheckValue()
{
	OnListLoadData();
	return 1;
} 

void CParaclinicalInformationView::OnListDblClick()
{
	return;	
} 
void CParaclinicalInformationView::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CParaclinicalInformationView::OnListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CParaclinicalInformationView::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	UpdateData(true);
	int m_ntotalminutes;
	m_nTotalBarcode = 0;
	szWhere.AppendFormat(_T(" AND LIMSOE_MAP_DATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),m_szFromDate, m_szToDate);
		if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" and LIMSO_GROUPID = '%s'"), m_szDeptKey);
		else		
		szWhere.AppendFormat(_T(" and LIMSO_GROUPID IN (%s)"), m_szPermGroupID);
		if (m_nSOD == 0)		
			szWhere.AppendFormat(_T("and LIMSO_ORDERDEPT in ('TYC', 'PTTYC')"));		
		else if (m_nOutpatient == 0)		
			szWhere.AppendFormat(_T("and LIMSO_ORDERDEPT in ('C1.1', 'C1.2', 'C1.3','AB')"));		
		if (m_nInpatient == 0)		
			szWhere.AppendFormat(_T("and LIMSO_ORDERDEPT not in ('C1.1', 'C1.2', 'C1.3','AB','TYC','PTTYC')"));		
		else if	(!m_szBarcodeName.IsEmpty())	
		szWhere.AppendFormat(_T("AND LIMSO_BARCODE ='%s'"), m_szBarcodeName);			
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT") \
	_T(" orderid,barcode,docno,pname,sex, age,dept, mapdate, SystemDateTime,groupname,") \
	_T(" (Gio*60 + Phut) as totalminutes") \
	_T(" FROM") \
	_T(" (") \
	_T(" SELECT ") \
	_T(" orderid,barcode,docno,pname,sex, age,dept, mapdate, SystemDateTime,groupname,") \
	_T(" extract(Hour from (t2-t1)) Gio,") \
	_T(" extract(minute from (t2-t1)) Phut") \
	_T(" FROM") \
	_T(" (") \
	_T("   SELECT limso_orderid as orderid,") \
	_T("          limso_barcode as barcode,") \
	_T("          limso_docno   as docno,") \
	_T("          trim(hp_surname || ' ' || hp_midname || ' ' || hp_firstname) AS pname,") \
	_T("          HMS_GETSEX (hp_sex) AS sex,") \
	_T("          hms_getage (trunc(hd_admitdate), hp_birthdate) AS age,") \
	_T("          LIMSO_ORDERDEPT AS dept,") \
	//_T("          limso_orderdate as mapdate,") \//
	_T("          LIMSOE_MAP_DATE as mapdate,") \
	_T("          current_timestamp as SystemDateTime,") \
	_T("          hfg_name as groupname,") \
	//_T("          limso_orderdate as t1, ") \//
	//_T("          LIMSOE_MAP_DATE as t1, ") \//
	_T("          LIMSOE_RECEIVE_DATE as t1, ") \
	_T("          current_timestamp as t2,") \
	_T("          current_date as t3,") \
	_T("          trunc(LIMSOE_MAP_DATE) t4,") \
	_T("          current_date as t5,") \
	_T("          current_timestamp-LIMSOE_MAP_DATE as difftime        ") \
	_T("   FROM lims_order") \
	_T("   LEFT JOIN lims_order_extra ON (LIMSO_DOCNO=LIMSOE_DOCNO AND LIMSO_ORDERID=LIMSOE_ORDERID)") \
	_T("   LEFT JOIN hms_doc ON (limso_docno=hd_docno)") \
	_T("   LEFT JOIN hms_patient ON (hd_patientno=hp_patientno)") \
	_T("   LEFT JOIN hms_fee_group ON (limso_groupid=hfg_id)") \
	//_T("   WHERE limso_orderdept in ('TYC','PTTYC')") \//
	//_T("   AND trunc(limso_orderdate)=trunc(current_date)") \//
	_T("   WHERE limso_status not in ('P','T', 'C') ") \
	_T("   %s ORDER BY limso_orderdate") \
	_T("   ))WHERE 1=1 AND (Gio*60 + Phut)>=60"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems
			(
			rs.GetValue(_T("barcode")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("dept")),
			rs.GetValue(_T("mapdate")),			
			rs.GetValue(_T("SystemDateTime")),
			rs.GetValue(_T("totalminutes")),
			rs.GetValue(_T("groupname")),NULL),
			rs.GetValue(_T("totalminutes"), m_ntotalminutes);		    
			if(m_ntotalminutes >=60)
			{
			m_wndList.SetItemBkColor(m_wndList.GetItemCount()-1, RGB(34, 139, 34), FALSE);
			m_wndList.SetItemTextColor(m_wndList.GetItemCount()-1, RGB(255, 255, 255), FALSE);
			}
		m_nTotalBarcode++;
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	UpdateData(false);
	return nCount;	
}
void CParaclinicalInformationView::OnServiceLabelSelect()
{
	OnListLoadData();	
}
void CParaclinicalInformationView::OnInsuranceandSolderLabelSelect()
{
	OnListLoadData();	
}
void CParaclinicalInformationView::OnAllLabelSelect()
{
	OnListLoadData();
}
	void CParaclinicalInformationView::OnSubItemsSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CParaclinicalInformationView::OnUpdateSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	CParaclinicalInfor dlg(this);
	dlg.m_szID = m_wndList.GetItemText(nSel, 0);	
	if (dlg.DoModal() == IDOK)
		OnListLoadData();
	m_wndList.SetCurSel(nSel);	
} 
int CParaclinicalInformationView::OnAddParaclinicalInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CParaclinicalInformationView::OnEditParaclinicalInformation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CParaclinicalInformationView::OnDeleteParaclinicalInformation(){
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
 		OnCancelParaclinicalInformation(); 
 	}
	return 0;
}
int CParaclinicalInformationView::OnSaveParaclinicalInformation(){
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
 		//OnParaclinicalInformationListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CParaclinicalInformationView::OnCancelParaclinicalInformation(){
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
int CParaclinicalInformationView::OnParaclinicalInformationListLoadData()
{
	return 0;
}
int CParaclinicalInformationView::OnExport(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 17);	xls.SetColumnWidth(1, 8);	xls.SetColumnWidth(2, 26);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 8);	xls.SetColumnWidth(6, 17);	xls.SetColumnWidth(7, 17);	xls.SetColumnWidth(8, 17);	xls.SetColumnWidth(9, 17);	xls.SetCellText(0, 0, _T("Barcode"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 0, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 0, _T("H tên"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 0, _T("Giới tính"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 0, _T("Năm sinh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 0, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 0, _T("Ngày map"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 0, _T("Giờ hệ thống"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 0, _T("Thời gian cảnh báo"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 0, _T("Tên nhóm"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	nRow = 1;	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		tmpStr = m_wndList.GetItemText(i, 0);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 1);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 2);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 3);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 4);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 5);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 6);
		xls.SetCellText(nCol+6, nRow, CDateTime::Convert(tmpStr, yyyymmdd | hhmm, ddmmyyyy | hhmm), FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 7);
		xls.SetCellText(nCol+7, nRow, CDateTime::Convert(tmpStr, yyyymmdd | hhmm, ddmmyyyy | hhmm), FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 8);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 9);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		nRow++;
	}	EndWaitCursor();	xls.Save(_T("Exports\\KiemTraThoiGianThucHien.xls"));
	return 0;
}