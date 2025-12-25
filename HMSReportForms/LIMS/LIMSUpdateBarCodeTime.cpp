#include "stdafx.h"
#include "LIMSUpdateBarCodeTime.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

static void _OnSearchSelectFnc(CWnd *pWnd)
{
	CLIMSUpdateBarCodeTime *pVw = (CLIMSUpdateBarCodeTime *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSUpdateBarCodeTime* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CLIMSUpdateBarCodeTime *)pWnd)->OnDeptSelendok();
}
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSUpdateBarCodeTime *)pWnd)->OnFromDateCheckValue();
} 
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSUpdateBarCodeTime *)pWnd)->OnToDateCheckValue();
}
static int _OnTotalBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CLIMSUpdateBarCodeTime *)pWnd)->OnTotalBarcodeCheckValue();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CLIMSUpdateBarCodeTime *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CLIMSUpdateBarCodeTime *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CLIMSUpdateBarCodeTime *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CLIMSUpdateBarCodeTime *)pWnd)->OnDeptAddNew();
}*/
/*static void _OnParaclinicalNameChangeFnc(CWnd *pWnd){
	((CLIMSUpdateBarCodeTime *)pWnd)->OnParaclinicalNameChange();
} */
/*static void _OnParaclinicalNameSetfocusFnc(CWnd *pWnd){
	((CLIMSUpdateBarCodeTime *)pWnd)->OnParaclinicalNameSetfocus();} */ 
/*static void _OnParaclinicalNameKillfocusFnc(CWnd *pWnd){
	((CLIMSUpdateBarCodeTime *)pWnd)->OnParaclinicalNameKillfocus();
} */
static int _OnParaclinicalNameCheckValueFnc(CWnd *pWnd){
	return ((CLIMSUpdateBarCodeTime *)pWnd)->OnParaclinicalNameCheckValue();
}
static int _OnBarcodeNameCheckValueFnc(CWnd *pWnd){
	return ((CLIMSUpdateBarCodeTime *)pWnd)->OnBarcodeNameCheckValue();
} 

/*static void _OnTotalChangeFnc(CWnd *pWnd){
	((CLIMSUpdateBarCodeTime *)pWnd)->OnTotalChange();
} */
/*static void _OnTotalSetfocusFnc(CWnd *pWnd){
	((CLIMSUpdateBarCodeTime *)pWnd)->OnTotalSetfocus();} */ 
/*static void _OnTotalKillfocusFnc(CWnd *pWnd){
	((CLIMSUpdateBarCodeTime *)pWnd)->OnTotalKillfocus();
} */
static int _OnTotalCheckValueFnc(CWnd *pWnd){
	return ((CLIMSUpdateBarCodeTime *)pWnd)->OnTotalCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSUpdateBarCodeTime*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CLIMSUpdateBarCodeTime*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSUpdateBarCodeTime*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSUpdateBarCodeTime*)pWnd)->OnListDeleteItem();
} 
static void _OnServiceLabelSelectFnc(CWnd *pWnd){
	  ((CLIMSUpdateBarCodeTime*)pWnd)->OnServiceLabelSelect();
}
static void _OnInsuranceandSolderLabelSelectFnc(CWnd *pWnd){
	  ((CLIMSUpdateBarCodeTime*)pWnd)->OnInsuranceandSolderLabelSelect();
}
static void _OnAllLabelSelectFnc(CWnd *pWnd){
	  ((CLIMSUpdateBarCodeTime*)pWnd)->OnAllLabelSelect();
}
static void _OnSubItemsSelectFnc(CWnd *pWnd){
	 ((CLIMSUpdateBarCodeTime*)pWnd)->OnSubItemsSelect();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CLIMSUpdateBarCodeTime *pVw = (CLIMSUpdateBarCodeTime *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CLIMSUpdateBarCodeTime*)pWnd)->OnAddParaclinicalInformation();
} 
static int _OnEditParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CLIMSUpdateBarCodeTime*)pWnd)->OnEditParaclinicalInformation();
} 
static int _OnDeleteParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CLIMSUpdateBarCodeTime*)pWnd)->OnDeleteParaclinicalInformation();
} 
static int _OnSaveParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CLIMSUpdateBarCodeTime*)pWnd)->OnSaveParaclinicalInformation();
} 
static int _OnCancelParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CLIMSUpdateBarCodeTime*)pWnd)->OnCancelParaclinicalInformation();
}
static void _OnSODSelectFnc(CWnd *pWnd)
{
	  ((CLIMSUpdateBarCodeTime*)pWnd)->OnSODSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd)
{
	  ((CLIMSUpdateBarCodeTime*)pWnd)->OnOutpatientSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd)
{
	  ((CLIMSUpdateBarCodeTime*)pWnd)->OnInpatientSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd)
{
	  ((CLIMSUpdateBarCodeTime*)pWnd)->OnAllSelect();
}
static int _OnExportFnc(CWnd *pWnd)
{
	return ((CLIMSUpdateBarCodeTime*)pWnd)->OnExport();
}

static void _OnUpdateTimeSelectFnc(CWnd *pWnd)
{
	CLIMSUpdateBarCodeTime *pVw = (CLIMSUpdateBarCodeTime *)pWnd;
	pVw->OnUpdateTimeSelect();
}

static int _OnCheckAllFnc(CWnd *pWnd)
{
	return ((CLIMSUpdateBarCodeTime*)pWnd)->OnCheckAll();
} 
static int _OnUnCheckAllFnc(CWnd *pWnd)
{
	return ((CLIMSUpdateBarCodeTime*)pWnd)->OnUnCheckAll();
} 
static int _OnUpdateSampleOrderFnc(CWnd *pWnd)
{
	return ((CLIMSUpdateBarCodeTime*)pWnd)->OnUpdateSampleOrder();
} 

CLIMSUpdateBarCodeTime::CLIMSUpdateBarCodeTime(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1020;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CLIMSUpdateBarCodeTime::~CLIMSUpdateBarCodeTime()
{
}
void CLIMSUpdateBarCodeTime::OnCreateComponents()
{
	m_wndParaclinicalInformation.Create(this, _T("Paraclinical Information"), 5, 5, 1010, 25);
	m_wndSearch.Create(this, _T("&Search"), 855, 30, 1010, 55);
	m_wndDeptLabel.Create(this, _T("Dept"), 468, 30, 537, 55);
	m_wndDept.Create(this,543, 30, 850, 55); 
	m_wndBarCodeLabel.Create(this, _T("Barcode Name"), 468, 61, 537, 86);
	m_wndBarcodeName.Create(this,543, 61, 850, 86); 
	m_wndList.Create(this,11, 94, 1011, 575);
	m_wndList.SetCheckBox(TRUE);
	m_wndFromDateLabel.Create(this, _T("FromDate"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 234, 55); 
	m_wndToDateLabel.Create(this, _T("ToDate"), 239, 30, 338, 55);
	m_wndToDate.Create(this,349, 30, 461, 55); 
	m_wndSOD.Create(this, _T("SOD"), 10, 61, 110, 86);
	m_wndOutpatient.Create(this, _T("Outpatient"), 115, 61, 234, 86);
	m_wndInpatient.Create(this, _T("Inpatient"), 239, 61, 343, 86);
	m_wndAll.Create(this, _T("All"), 349, 61, 461, 86);
	m_wndTotalBarcode.Create(this,855, 61, 1010, 86); 
	m_wndUpdateTime.Create(this, _T("&UpdateTime"), 856, 580, 1011, 605);
}
void CLIMSUpdateBarCodeTime::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndParaclinicalName.SetLimitText(35);
	m_wndParaclinicalName.SetCheckValue(true);
	m_wndTotal.SetLimitText(35);
	m_wndTotal.SetCheckValue(true);
	m_wndBarcodeName.SetLimitText(10);
	m_wndBarcodeName.SetCheckValue(true);	
	m_wndFromDate.SetCheckValue(true);	
	m_wndToDate.SetCheckValue(true);
	m_wndTotalBarcode.SetLimitText(16);
	m_wndTotalBarcode.SetCheckValue(true);
	m_wndTotalBarcode.ModifyStyle(0, ES_UPPERCASE);
	m_wndTotalBarcode.SetTextColor(RGB(255, 0, 0));




	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);


	m_wndList.InsertColumn(0, _T("OrderID"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(1, _T("BarCode"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(2, _T("DocNo"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(3, _T("PatientName"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("YearOfBirth"), CFMT_DATE, 50);
	m_wndList.InsertColumn(6, _T("Dept"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T("MapDate"), CFMT_DATETIME, 130);
	m_wndList.InsertColumn(8, _T("status"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(9, _T("groupname"), CFMT_TEXT, 250);
	
}
void CLIMSUpdateBarCodeTime::OnSetWindowEvents(){
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
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
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
	m_wndList.AddEvent(1, _T("Xuất ra Excel"), _OnExportFnc);
	m_wndList.AddEvent(2, _T("Check All"), _OnCheckAllFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(3, _T("UnCheck All"), _OnUnCheckAllFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(4, _T("Update Sample Order"), _OnUpdateSampleOrderFnc);
	m_wndUpdateTime.SetEvent(WE_CLICK, _OnUpdateTimeSelectFnc);
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
void CLIMSUpdateBarCodeTime::OnDoDataExchange(CDataExchange* pDX){
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
void CLIMSUpdateBarCodeTime::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSUpdateBarCodeTime::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLIMSUpdateBarCodeTime::SetDefaultValues(){

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
	m_nSOD=1;
	m_nOutpatient=0;
	m_nInpatient=1;
	m_nAll=1;

}
int CLIMSUpdateBarCodeTime::SetMode(int nMode){
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
int CLIMSUpdateBarCodeTime::OnTotalBarcodeCheckValue()
{
	return 0;
} 

void CLIMSUpdateBarCodeTime::OnSearchSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
} 
void CLIMSUpdateBarCodeTime::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CLIMSUpdateBarCodeTime::OnFromDateCheckValue(){
	return 0;
} 

int CLIMSUpdateBarCodeTime::OnToDateCheckValue(){
	return 0;
} 
void CLIMSUpdateBarCodeTime::OnSODSelect(){
	
}
void CLIMSUpdateBarCodeTime::OnOutpatientSelect(){
	
}
void CLIMSUpdateBarCodeTime::OnInpatientSelect(){
	
}
void CLIMSUpdateBarCodeTime::OnAllSelect(){
	
}
void CLIMSUpdateBarCodeTime::OnDeptSelendok(){
	 
}
/*void CLIMSUpdateBarCodeTime::OnDeptSetfocus(){
	
}*/
/*void CLIMSUpdateBarCodeTime::OnDeptKillfocus(){
	
}*/
long CLIMSUpdateBarCodeTime::OnDeptLoadData(){
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
/*void CLIMSUpdateBarCodeTime::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CLIMSUpdateBarCodeTime::OnParaclinicalNameChange(){
	
} */
/*void CLIMSUpdateBarCodeTime::OnParaclinicalNameSetfocus(){
	
} */
/*void CLIMSUpdateBarCodeTime::OnParaclinicalNameKillfocus(){
	
} */
int CLIMSUpdateBarCodeTime::OnParaclinicalNameCheckValue()
{
	OnListLoadData();
	return 1;
} 
/*void CLIMSUpdateBarCodeTime::OnTotalChange(){
	
} */
/*void CLIMSUpdateBarCodeTime::OnTotalSetfocus(){
	
} */
/*void CLIMSUpdateBarCodeTime::OnTotalKillfocus(){
	
} */
int CLIMSUpdateBarCodeTime::OnTotalCheckValue(){
	return 0;
}
int CLIMSUpdateBarCodeTime::OnBarcodeNameCheckValue()
{
	OnListLoadData();
	return 1;
} 

void CLIMSUpdateBarCodeTime::OnListDblClick()
{
	return;	
}
void CLIMSUpdateBarCodeTime::OnUpdateTimeSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 

void CLIMSUpdateBarCodeTime::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSUpdateBarCodeTime::OnListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSUpdateBarCodeTime::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	UpdateData(true);
	int m_ntotalminutes;
	m_ntotalminutes = 0;
	m_nTotalBarcode = 0;	

	szWhere.AppendFormat(_T(" AND limso_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),m_szFromDate, m_szToDate);
		if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" and LIMSO_GROUPID = '%s'"), m_szDeptKey);
		else		
		szWhere.AppendFormat(_T(" and LIMSO_GROUPID IN (%s)"), m_szPermGroupID);
		if (m_nSOD == 0)		
			szWhere.AppendFormat(_T("and LIMSO_ORDERDEPT in ('TYC', 'PTTYC')"));		
		else if (m_nOutpatient == 0)		
			szWhere.AppendFormat(_T("and LIMSO_ORDERDEPT in ('C1.1', 'C1.2', 'C1.3','AB')"));		
		if (m_nInpatient == 0)		
			szWhere.AppendFormat(_T("and LIMSO_ORDERDEPT not in ('C1.1', 'C1.2', 'C1.3','TYC','AB','PTTYC')"));		
		else if	(!m_szBarcodeName.IsEmpty())	
		szWhere.AppendFormat(_T("AND LIMSO_BARCODE ='%s'"), m_szBarcodeName);			
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	
	szSQL.Format(_T(" SELECT limso_orderid AS orderid,") \
	_T("       limso_barcode       AS barcode,") \
	_T("       limso_docno         AS docno,") \
	_T("       trim(hp_surname") \
	_T("       || ' '") \
	_T("       || hp_midname") \
	_T("       || ' '") \
	_T("       || hp_firstname)                               AS pname,") \
	_T("       HMS_GETSEX (hp_sex)                            AS sex,") \
	_T("       hms_getage (TRUNC(hd_admitdate), hp_birthdate) AS age,") \
	_T("       LIMSO_ORDERDEPT                                AS dept,      ") \
	_T("       limso_orderdate                                AS mapdate,") \
	_T("       limso_status                                   AS status,      ") \
	_T("       hfg_name                                       AS groupname     ") \
	_T("     FROM lims_order   ") \
	_T("     LEFT JOIN HMS_TESTORDER") \
	_T("     ON(limso_docno   =hpc_docno") \
	_T("     AND LIMSO_ORDERID=hpc_orderid)") \
	_T("     LEFT JOIN hms_doc") \
	_T("     ON (limso_docno=hd_docno)    ") \
	_T("     LEFT JOIN hms_patient") \
	_T("     ON (hd_patientno=hp_patientno)") \
	_T("     LEFT JOIN hms_fee_group") \
	_T("     ON (limso_groupid       =hfg_id)") \
	_T("     WHERE limso_status NOT IN ('T','P') %s") \
	_T("     ORDER BY limso_orderdate"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems
			(
			rs.GetValue(_T("orderid")),
			rs.GetValue(_T("barcode")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("dept")),
			rs.GetValue(_T("mapdate")),			
			rs.GetValue(_T("status")),
			rs.GetValue(_T("groupname"))
			);			
			if(m_ntotalminutes >=4320)
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
void CLIMSUpdateBarCodeTime::OnServiceLabelSelect()
{
	OnListLoadData();	
}
void CLIMSUpdateBarCodeTime::OnInsuranceandSolderLabelSelect()
{
	OnListLoadData();	
}
void CLIMSUpdateBarCodeTime::OnAllLabelSelect()
{
	OnListLoadData();
}
	void CLIMSUpdateBarCodeTime::OnSubItemsSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CLIMSUpdateBarCodeTime::OnUpdateSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;
} 
int CLIMSUpdateBarCodeTime::OnAddParaclinicalInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSUpdateBarCodeTime::OnEditParaclinicalInformation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSUpdateBarCodeTime::OnDeleteParaclinicalInformation(){
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
int CLIMSUpdateBarCodeTime::OnSaveParaclinicalInformation(){
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
int CLIMSUpdateBarCodeTime::OnCancelParaclinicalInformation(){
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
int CLIMSUpdateBarCodeTime::OnParaclinicalInformationListLoadData()
{
	return 0;
}
int CLIMSUpdateBarCodeTime::OnExport()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 17);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 26);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 17);

	
	xls.SetCellText(0, 0, _T("Barcode"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 0, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 0, _T("Họ tên"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 0, _T("Giới tính"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 0, _T("Năm sinh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 0, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 0, _T("Thời gian map"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 0, _T("Trạng thái"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, 0, _T("Tên nhóm"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	

	nRow = 1;

	for(int i = 0; i < m_wndList.GetItemCount(); i++)
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
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);

		tmpStr = m_wndList.GetItemText(i, 8);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);		
		
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\KiemTraThoiGianThucHienBarcode.xls"));
	return 0;
}
int CLIMSUpdateBarCodeTime::OnCheckAll()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	for (int i=0; i< m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, true);
	}
	return 0;
} 
int CLIMSUpdateBarCodeTime::OnUnCheckAll()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	for (int i=0; i< m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, false);
	}
	return 0;
} 

int CLIMSUpdateBarCodeTime::OnUpdateSampleOrder()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	long m_nOrderID, m_nBarcode;
	for (int i=0; i< m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_nOrderID = str2long(m_wndList.GetItemText(i, 0));
			m_nBarcode = str2long(m_wndList.GetItemText(i, 1));
			//_msg(_T("%ld"), m_nOrderID);
			//_msg(_T("%ld"), m_nBarcode);
			szSQL.Format(_T("LIMS_UPDATE_BARCODE(%ld, %ld,'%s') "), m_nOrderID, m_nBarcode, pMF->GetCurrentUser());
		   //_msg(_T("%s"), szSQL);
			int ret = str2int(pMF->ExecDML(szSQL));

		}
		
	}
	_msg(_T("Tổng số ca = %d"), m_wndList.GetItemCount());
	OnListLoadData();
	return 0;
}