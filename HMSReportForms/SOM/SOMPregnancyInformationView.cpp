#include "stdafx.h"
#include "SOMPregnancyButtonView.h"
#include "SOMPregnancyInformationView.h"
#include "SOMPregnancyViewDetail.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

static void _OnSearchSelectFnc(CWnd *pWnd)
{
	CSOMPregnancyInformationView *pVw = (CSOMPregnancyInformationView *)pWnd;
	pVw->OnSearchSelect();
}
static int _OnTotalDepositCheckValueFnc(CWnd *pWnd){
	return ((CSOMPregnancyInformationView *)pWnd)->OnTotalDepositCheckValue();
}
static void _OnDepositSelectFnc(CWnd *pWnd)
{
	 ((CSOMPregnancyInformationView*)pWnd)->OnDepositSelect();
}
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSOMPregnancyInformationView* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CSOMPregnancyInformationView *)pWnd)->OnDeptSelendok();
}
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMPregnancyInformationView *)pWnd)->OnFromDateCheckValue();
} 
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMPregnancyInformationView *)pWnd)->OnToDateCheckValue();
}
static int _OnMobileNumberCheckValueFnc(CWnd *pWnd){
	return ((CSOMPregnancyInformationView *)pWnd)->OnMobileNumberCheckValue();
}

/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CSOMPregnancyInformationView *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CSOMPregnancyInformationView *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CSOMPregnancyInformationView *)pWnd)->OnDeptLoadData();
}
static void _OnOneWeekSelectFnc(CWnd *pWnd){
	  ((CSOMPregnancyInformationView*)pWnd)->OnOneWeekSelect();
}
static void _OnTwoWeekSelectFnc(CWnd *pWnd){
	  ((CSOMPregnancyInformationView*)pWnd)->OnTwoWeekSelect();
}
static void _OnThreeWeekSelectFnc(CWnd *pWnd){
	  ((CSOMPregnancyInformationView*)pWnd)->OnThreeWeekSelect();
}
static void _OnAllWeekSelectFnc(CWnd *pWnd){
	  ((CSOMPregnancyInformationView*)pWnd)->OnAllWeekSelect();
}

/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CSOMPregnancyInformationView *)pWnd)->OnDeptAddNew();
}*/
/*static void _OnParaclinicalNameChangeFnc(CWnd *pWnd){
	((CSOMPregnancyInformationView *)pWnd)->OnParaclinicalNameChange();
} */
/*static void _OnParaclinicalNameSetfocusFnc(CWnd *pWnd){
	((CSOMPregnancyInformationView *)pWnd)->OnParaclinicalNameSetfocus();} */ 
/*static void _OnParaclinicalNameKillfocusFnc(CWnd *pWnd){
	((CSOMPregnancyInformationView *)pWnd)->OnParaclinicalNameKillfocus();
} */

/*static void _OnTotalChangeFnc(CWnd *pWnd){
	((CSOMPregnancyInformationView *)pWnd)->OnTotalChange();
} */
/*static void _OnTotalSetfocusFnc(CWnd *pWnd){
	((CSOMPregnancyInformationView *)pWnd)->OnTotalSetfocus();} */ 
/*static void _OnTotalKillfocusFnc(CWnd *pWnd){
	((CSOMPregnancyInformationView *)pWnd)->OnTotalKillfocus();
} */
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSOMPregnancyInformationView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSOMPregnancyInformationView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSOMPregnancyInformationView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSOMPregnancyInformationView*)pWnd)->OnListDeleteItem();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CSOMPregnancyInformationView *pVw = (CSOMPregnancyInformationView *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddParaclinicalInformationViewFnc(CWnd *pWnd){
	 return ((CSOMPregnancyInformationView*)pWnd)->OnAddParaclinicalInformationView();
} 
static int _OnEditParaclinicalInformationViewFnc(CWnd *pWnd){
	 return ((CSOMPregnancyInformationView*)pWnd)->OnEditParaclinicalInformationView();
} 
static int _OnDeleteParaclinicalInformationViewFnc(CWnd *pWnd){
	 return ((CSOMPregnancyInformationView*)pWnd)->OnDeleteParaclinicalInformationView();
} 
static int _OnSaveParaclinicalInformationViewFnc(CWnd *pWnd){
	 return ((CSOMPregnancyInformationView*)pWnd)->OnSaveParaclinicalInformationView();
} 
static int _OnCancelParaclinicalInformationViewFnc(CWnd *pWnd){
	 return ((CSOMPregnancyInformationView*)pWnd)->OnCancelParaclinicalInformationView();
}
CSOMPregnancyInformationView::CSOMPregnancyInformationView(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1020;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CSOMPregnancyInformationView::~CSOMPregnancyInformationView()
{
}
void CSOMPregnancyInformationView::OnCreateComponents()
{
	m_wndParaclinicalInformation.Create(this, _T("Th\x1ED1ng k\xEA \x62\x1EC7nh nh\xE2n \x111\x103ng k\xFD m\x1ED5 \x111\x1EBB"), 5, 5, 1010, 25);
	m_wndSearch.Create(this, _T("&Search"), 855, 28, 1010, 53);
	m_wndDeptLabel.Create(this, _T("Dept"), 468, 28, 537, 53);
	m_wndDept.Create(this,543, 28, 850, 53); 
	m_wndMobileLabel.Create(this, _T("MobileLabel"), 468, 59, 537, 84);
	m_wndMobileNumber.Create(this,543, 59, 850, 84); 
	m_wndList.Create(this,11, 91, 1011, 614); 
	m_wndFromDateLabel.Create(this, _T("FromDate"), 10, 28, 110, 53);
	m_wndFromDate.Create(this,115, 28, 234, 53); 
	m_wndToDateLabel.Create(this, _T("ToDate"), 239, 28, 338, 53);
	m_wndOneWeek.Create(this, _T("OneWeek"), 10, 59, 110, 84);
	m_wndTwoWeek.Create(this, _T("TwoWeek"), 115, 59, 234, 84);
	m_wndThreeWeek.Create(this, _T("ThreeWeek"), 239, 59, 343, 84);
	m_wndAllWeek.Create(this, _T("AllWeek"), 349, 59, 461, 84);
	m_wndToDate.Create(this,349, 28, 461, 53); 
	m_wndDeposit.Create(this, _T("Deposit"), 855, 59, 1010, 84);
}
void CSOMPregnancyInformationView::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndMobileNumber.SetLimitText(35);
	m_wndMobileNumber.SetCheckValue(true);	
	m_wndFromDate.SetCheckValue(true);	
	m_wndToDate.SetCheckValue(true);
	m_wndTotalDeposit.SetLimitText(16);
	m_wndTotalDeposit.SetCheckValue(true);	




	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);
	
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("DocNo"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("PatientName"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(3, _T("Object"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Mobile"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("YearOfBirth"), CFMT_DATE, 50);
	m_wndList.InsertColumn(6, _T("Conclusion"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(7, _T("RegDate"), CFMT_DATE, 100);
	m_wndList.InsertColumn(8, _T("Expecteddateofdelivery"), CFMT_DATE, 100);
	m_wndList.InsertColumn(9, _T("WaitingTime"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(10, _T("Deposit"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(11, _T("Dept"), CFMT_TEXT, 50);


}
void CSOMPregnancyInformationView::OnSetWindowEvents(){
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
	m_wndMobileNumber.SetEvent(WE_CHECKVALUE, _OnMobileNumberCheckValueFnc);
	//m_wndTotal.SetEvent(WE_CHANGE, _OnTotalChangeFnc);
	//m_wndTotal.SetEvent(WE_SETFOCUS, _OnTotalSetfocusFnc);
	//m_wndTotal.SetEvent(WE_KILLFOCUS, _OnTotalKillfocusFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOneWeek.SetEvent(WE_CLICK, _OnOneWeekSelectFnc);
	m_wndTwoWeek.SetEvent(WE_CLICK, _OnTwoWeekSelectFnc);
	m_wndThreeWeek.SetEvent(WE_CLICK, _OnThreeWeekSelectFnc);
	m_wndAllWeek.SetEvent(WE_CLICK, _OnAllWeekSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);	
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);	
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndTotalDeposit.SetEvent(WE_CHECKVALUE, _OnTotalDepositCheckValueFnc);
	m_wndDeposit.SetEvent(WE_CLICK, _OnDepositSelectFnc);
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
void CSOMPregnancyInformationView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Text(pDX, m_wndMobileNumber.GetDlgCtrlID(), m_szMobileNumber);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_Radio(pDX, m_wndOneWeek.GetDlgCtrlID(), m_nOneWeek);
	DDX_Radio(pDX, m_wndTwoWeek.GetDlgCtrlID(), m_nTwoWeek);
	DDX_Radio(pDX, m_wndThreeWeek.GetDlgCtrlID(), m_nThreeWeek);
	DDX_Radio(pDX, m_wndAllWeek.GetDlgCtrlID(), m_nAllWeek);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndTotalDeposit.GetDlgCtrlID(), m_nTotalDeposit);
	DDX_Check(pDX, m_wndDeposit.GetDlgCtrlID(), m_bDeposit);

}
void CSOMPregnancyInformationView::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSOMPregnancyInformationView::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSOMPregnancyInformationView::SetDefaultValues(){

	m_nOneWeek=0;
	m_nTwoWeek=1;
	m_nThreeWeek=1;
	m_nAllWeek=1;
	m_szToDate.Empty();
	m_nTotalDeposit=0;
	m_bDeposit=FALSE;

}
int CSOMPregnancyInformationView::SetMode(int nMode){
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
		m_wndTotalDeposit.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CSOMPregnancyInformationView::OnSearchSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}
	void CSOMPregnancyInformationView::OnDepositSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CSOMPregnancyInformationView::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CSOMPregnancyInformationView::OnFromDateCheckValue(){
	return 0;
} 

int CSOMPregnancyInformationView::OnToDateCheckValue(){
	return 0;
}
int CSOMPregnancyInformationView::OnMobileNumberCheckValue()
{
	return 0;
} 
void CSOMPregnancyInformationView::OnOneWeekSelect(){
	
}
void CSOMPregnancyInformationView::OnTwoWeekSelect(){
	
}
void CSOMPregnancyInformationView::OnThreeWeekSelect()
{
	
}
void CSOMPregnancyInformationView::OnAllWeekSelect()
{
	
}

void CSOMPregnancyInformationView::OnDeptSelendok(){
	 
}
/*void CSOMPregnancyInformationView::OnDeptSetfocus(){
	
}*/
/*void CSOMPregnancyInformationView::OnDeptKillfocus(){
	
}*/
long CSOMPregnancyInformationView::OnDeptLoadData(){
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
		szWhere.Format(_T(" and id='%s' "), m_szDeptKey);
	}
	if (!m_szPermGroupID.IsEmpty())
		szWhere.AppendFormat(_T(" AND id IN (%s)"), m_szPermGroupID);
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as description FROM sys_dept WHERE sd_id in ('C1.1', 'C1.2','C1.3','TYC', 'PTTYC') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSOMPregnancyInformationView::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CSOMPregnancyInformationView::OnParaclinicalNameChange(){
	
} */
/*void CSOMPregnancyInformationView::OnParaclinicalNameSetfocus(){
	
} */
/*void CSOMPregnancyInformationView::OnParaclinicalNameKillfocus(){
	
} */
/*void CSOMPregnancyInformationView::OnTotalChange(){
	
} */
/*void CSOMPregnancyInformationView::OnTotalSetfocus(){
	
} */
/*void CSOMPregnancyInformationView::OnTotalKillfocus(){
	
} */
void CSOMPregnancyInformationView::OnListDblClick()
{
	return;	
} 
void CSOMPregnancyInformationView::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CSOMPregnancyInformationView::OnListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSOMPregnancyInformationView::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	UpdateData(true);
	int m_ntotaldeposit=0;
	int m_nleftweeks=0;
	
	szWhere.AppendFormat(_T(" AND regdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),m_szFromDate, m_szToDate);
		if (!m_szDeptKey.IsEmpty())						
			szWhere.AppendFormat(_T("and dept in ('%s')"),m_szDeptKey);		
		else if (m_nOneWeek == 0)		
			szWhere.AppendFormat(_T("and leftweeks between 0 and 1"));		
		if (m_nTwoWeek == 0)		
			szWhere.AppendFormat(_T("and leftweeks between 1 and 2"));
		else if (m_nThreeWeek == 0)
			szWhere.AppendFormat(_T("and leftweeks between 2 and 3"));
		else if (m_nAllWeek == 0)
			szWhere.AppendFormat(_T("and leftweeks between 0 and 999999999"));
		if	(!m_szMobileNumber.IsEmpty())	
		szWhere.AppendFormat(_T("AND mobile ='%s'"), m_szMobileNumber);			
	m_wndList.BeginLoad();	
	m_wndList.DeleteAllItems();	
	int nCount = 0, nIndex = 1;
	if (m_bDeposit)
		szSQL.Format(_T(" 	 SELECT  ") \
				_T(" 	 docno, pname, object,mobile, age, conclusion,regdate, expecteddate, ") \
				_T("      leftdays, leftweeks,") \
				_T("      deposit, sum(deposit) as totaldeposit, dept	 ") \
				_T(" 	 FROM ") \
				_T(" 	 (") \
				_T(" 	   SELECT") \
				_T(" 	          hp_docno   as docno, ") \
				_T(" 	          trim(hp_surname || ' ' || hp_midname || ' ' || hp_firstname) AS pname,ho_desc as object,") \
				_T("               HD_TELEPHONE as mobile,	          ") \
				_T(" 	          hms_getage (trunc(hd_admitdate), hp_birthdate) AS age, ") \
				_T("               hd_conclusion as conclusion,") \
				_T("               trunc(pr.hp_createddate) as regdate,") \
				_T("               trunc(pr.hp_regdate) as expecteddate,") \
				_T("               trunc(pr.hp_regdate)-trunc(current_date) as leftdays,") \
				_T("              (trunc(pr.hp_regdate)-trunc(current_date))/7 as leftweeks,") \
				_T("               current_date as currentdate,") \
				_T("               hfe_amount as deposit,") \
				_T("               hp_deptid as dept	          ") \
				_T(" 	   FROM Hms_Pregnancy pr") \
				_T(" 	   LEFT JOIN hms_doc ON (pr.hp_patientno=hd_patientno AND hp_docno=hd_docno) ") \
				_T(" 	   LEFT JOIN hms_object ON (hd_object=ho_id)") \
				_T(" 	   LEFT JOIN hms_patient pa ON (hd_patientno=pa.hp_patientno) ") \
				_T(" 	   LEFT JOIN Hms_Fee_Deposit ON (pr.hp_patientno=hd_patientno AND hp_docno=hfe_docno) ") \
				_T(" 	   WHERE hd_status in ('O','P','T') ") \
				_T("        AND HFE_PREGNANCY='Y' AND hfe_status <> 'C'") \
				_T(" 	   ORDER BY pr.hp_createddate ") \
				_T(" 	   )WHERE 1=1") \
				_T("        %s GROUP BY docno,pname,object, mobile,age,conclusion,regdate,expecteddate,leftdays,leftweeks,deposit,dept"), szWhere);		
	else 
				szSQL.Format(_T(" 	 SELECT  ") \
				_T(" 	 docno, pname,object, mobile, age, conclusion,regdate, expecteddate, ") \
				_T("      leftdays, leftweeks,") \
				_T("      deposit, sum(deposit) as totaldeposit, dept	 ") \
				_T(" 	 FROM ") \
				_T(" 	 (") \
				_T(" 	   SELECT") \
				_T(" 	          hp_docno   as docno, ") \
				_T(" 	          trim(hp_surname || ' ' || hp_midname || ' ' || hp_firstname) AS pname,ho_desc as object,") \
				_T("               HD_TELEPHONE as mobile,	          ") \
				_T(" 	          hms_getage (trunc(hd_admitdate), hp_birthdate) AS age, ") \
				_T("               hd_conclusion as conclusion,") \
				_T("               trunc(pr.hp_createddate) as regdate,") \
				_T("               trunc(pr.hp_regdate) as expecteddate,") \
				_T("               trunc(pr.hp_regdate)-trunc(current_date) as leftdays,") \
				_T("              (trunc(pr.hp_regdate)-trunc(current_date))/7 as leftweeks,") \
				_T("               current_date as currentdate,") \
				_T("               NULL as deposit,") \
				_T("               hp_deptid as dept	          ") \
				_T(" 	   FROM Hms_Pregnancy pr") \
				_T(" 	   LEFT JOIN hms_doc ON (pr.hp_patientno=hd_patientno AND hp_docno=hd_docno) ") \
				_T(" 	   LEFT JOIN hms_object ON (hd_object=ho_id)") \
				_T(" 	   LEFT JOIN hms_patient pa ON (hd_patientno=pa.hp_patientno) ") \
				_T(" 	   WHERE hd_status in ('O','P','T') ") \
				_T(" 	   ORDER BY pr.hp_createddate ") \
				_T(" 	   )WHERE 1=1") \
				_T("        %s GROUP BY docno,pname,object,mobile,age,conclusion,regdate,expecteddate,leftdays,leftweeks,deposit,dept"), szWhere);	
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems
			(
			int2str(nIndex++), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("object")),
			rs.GetValue(_T("mobile")),
			rs.GetValue(_T("age")),
			rs.GetValue(_T("conclusion")),
			rs.GetValue(_T("regdate")),
			rs.GetValue(_T("expecteddate")),
			rs.GetValue(_T("leftdays")),
			rs.GetValue(_T("deposit")),			
			rs.GetValue(_T("dept")),NULL),
			rs.GetValue(_T("totaldeposit"),m_nTotalDeposit),
			rs.GetValue(_T("leftweeks"), m_nleftweeks);		    
			if(m_nleftweeks <= 1)
			{
			m_wndList.SetItemBkColor(m_wndList.GetItemCount()-1, RGB(34, 139, 34), FALSE);
			m_wndList.SetItemTextColor(m_wndList.GetItemCount()-1, RGB(255, 255, 255), FALSE);
			}			
		rs.MoveNext();
		//_msg(_T("%d"), m_ntotaldeposit);
	}	
	m_wndList.EndLoad();
	UpdateData(false);
	return nCount;	
}
void CSOMPregnancyInformationView::OnUpdateSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	CSOMPregnancyViewDetail dlg(this);
	dlg.m_szID = m_wndList.GetItemText(nSel, 0);	
	if (dlg.DoModal() == IDOK)
		OnListLoadData();
	m_wndList.SetCurSel(nSel);
	return;
}
int CSOMPregnancyInformationView::OnTotalDepositCheckValue()
{
	return 0;
} 

int CSOMPregnancyInformationView::OnAddParaclinicalInformationView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSOMPregnancyInformationView::OnEditParaclinicalInformationView(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSOMPregnancyInformationView::OnDeleteParaclinicalInformationView(){
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
 		OnCancelParaclinicalInformationView(); 
 	}
	return 0;
}
int CSOMPregnancyInformationView::OnSaveParaclinicalInformationView(){
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
int CSOMPregnancyInformationView::OnCancelParaclinicalInformationView(){
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
int CSOMPregnancyInformationView::OnParaclinicalInformationViewListLoadData()
{
	return 0;
}