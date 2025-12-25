#include "HMSMedicalCabinetDrug.h"
#include "MainFrm.h"
#include "HMSConfirmDialog.h"
#include "HMSSearchPatientDialog.h"
#include "HMSMedicalCabinetDrugOrderEntry.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug *)pWnd)->OnToDateCheckValue();
} 
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug *)pWnd)->OnPatientNameCheckValue();
} 

static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListConfirmFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListConfirm();
} 

static int _OnPatientListDisconfirmFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListDisconfirm();
} 

static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListDeleteItem();
} 

static int _OnPatientListReloadFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListLoadData();
} 

static int _OnPatientListSearchFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListSearch();
} 

static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMedicalCabinetDrug*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnDrugListAddItemFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug*)pWnd)->OnAddDrugSelect();
	return 0;
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnAddDrugSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnAddDrugSelect();
} 
static void _OnDeleteDrugSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnDeleteDrugSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnSheetOrderReturnSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnSheetOrderReturnSelect();
} 
static void _OnStorageDetailSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnStorageDetailSelect();
} 
static int _OnAddHMSMedicalCabinetDrugFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnAddHMSMedicalCabinetDrug();
} 
static int _OnEditHMSMedicalCabinetDrugFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnEditHMSMedicalCabinetDrug();
} 
static int _OnDeleteHMSMedicalCabinetDrugFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnDeleteHMSMedicalCabinetDrug();
} 
static int _OnSaveHMSMedicalCabinetDrugFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnSaveHMSMedicalCabinetDrug();
} 
static int _OnCancelHMSMedicalCabinetDrugFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnCancelHMSMedicalCabinetDrug();
} 
CHMSMedicalCabinetDrug::CHMSMedicalCabinetDrug(){

	m_nDlgWidth = 985;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSMedicalCabinetDrug::~CHMSMedicalCabinetDrug(){
}
void CHMSMedicalCabinetDrug::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 999, 245);
	m_wndDrugInformation.Create(this, _T("Drug Informations"), 5, 250, 999, 570);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 120, 55);
	m_wndFromDate.Create(this,125, 29, 245, 54); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 29, 360, 54);
	m_wndToDate.Create(this,365, 29, 485, 54); 
	m_wndPatientNameLable.Create(this, _T("Patien Name"), 490, 29, 600, 54);
	m_wndPatientName.Create(this,605, 30, 760, 55); 
	m_wndLoad.Create(this, _T("@"), 765, 30, 800, 55);
	m_wndOperation.Create(this, _T("Include operation"), 805, 30, 950, 55);
	m_wndPatientList.Create(this,10, 60, 995, 240); 
	m_wndDrugList.Create(this,10, 275, 995, 565); 
	m_wndAddDrug.Create(this, _T("&Add Drug"), 585, 575, 685, 600);
	m_wndDeleteDrug.Create(this, _T("&DeleteDrug"), 690, 575, 790, 600);
	m_wndConfirm.Create(this, _T("&Confirm"), 795, 575, 895, 600);
	m_wndPrint.Create(this, _T("&Print"), 900, 575, 1000, 600);
	m_wndSheetOrderReturn.Create(this, _T("Sheet Cabinet"), 135, 575, 260, 600);
	m_wndStorageDetail.Create(this, _T("Storage Detail"), 5, 575, 130, 600);
}
void CHMSMedicalCabinetDrug::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	


	m_wndPatientList.InsertColumn(0, _T("Order ID"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(1, _T("Order Date"), CFMT_DATE, 100);
	m_wndPatientList.InsertColumn(2, _T("Document No"), CFMT_NUMBER, 90);
	m_wndPatientList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 160);
	m_wndPatientList.InsertColumn(4, _T("YOB"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(5, _T("Sex"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(6, _T("Object"), CFMT_TEXT, 120);
	m_wndPatientList.InsertColumn(7, _T("Bed"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndPatientList.InsertColumn(8, _T("Sts"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(9, _T("Created By"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(10, _T("Type"), CFMT_TEXT, 80);
	m_wndPatientList.InsertColumn(11, _T("Status"), CFMT_TEXT, 80);
	m_wndPatientList.GetHeaderControl()->SetItemHeight(2);
	m_wndPatientList.SetSortHeader(false);

	m_wndDrugList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndDrugList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 460);
	m_wndDrugList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndDrugList.InsertColumn(3, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndDrugList.InsertColumn(4, _T("Quantity"), CFMT_MONEY, 70);
	m_wndDrugList.InsertColumn(5, _T("Issue Qty"), CFMT_MONEY, 70);
	m_wndDrugList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 70);
	m_wndDrugList.InsertColumn(7, _T("ItemID"), CFMT_TEXT, 0);
	m_wndDrugList.InsertColumn(8, _T("idx"), CFMT_NUMBER, 0);
	m_wndDrugList.InsertColumn(9, _T("Supplement"), CFMT_TEXT, 90);
	m_wndDrugList.GetHeaderControl()->SetItemHeight(2);
	m_wndDrugList.SetSortHeader(false);

	m_wndSheetOrderReturn.ModifyStyle(WS_TABSTOP, 0);
	m_wndStorageDetail.ModifyStyle(WS_TABSTOP, 0);
}
void CHMSMedicalCabinetDrug::OnSetWindowEvents(){

	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);

	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
/*
	m_wndPatientList.SetWindowText(_T("Patient List"));
	m_wndPatientList.AddEvent(1, _T("Confirm"), _OnPatientListConfirmFnc);
	m_wndPatientList.AddEvent(0, _T("-"),0);
	m_wndPatientList.AddEvent(2, _T("Disconfirm"), _OnPatientListDisconfirmFnc);
	m_wndPatientList.AddEvent(0, _T("-"),0);
	m_wndPatientList.AddEvent(3, _T("Delete"), _OnPatientListDeleteItemFnc);
*/
	m_wndPatientList.AddEvent(1, _T("Confirm"), _OnPatientListConfirmFnc);
	m_wndPatientList.AddEvent(0, _T("-"),0);
	m_wndPatientList.AddEvent(4, _T("Search for name or document no"), _OnPatientListSearchFnc);

	m_wndPatientList.AddEvent(0, _T("-"),0);
	m_wndPatientList.AddEvent(5, _T("Reload"), _OnPatientListReloadFnc);


	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);

	m_wndDrugList.SetWindowText(_T("Drug List"));
	m_wndDrugList.AddEvent(1, _T("Add Drug"), _OnDrugListAddItemFnc);
	m_wndDrugList.AddEvent(0, _T("-"), 0);
	m_wndDrugList.AddEvent(2, _T("Delete Drug"), _OnDrugListDeleteItemFnc);

	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndAddDrug.SetEvent(WE_CLICK, _OnAddDrugSelectFnc);
	m_wndDeleteDrug.SetEvent(WE_CLICK, _OnDeleteDrugSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	
	m_wndSheetOrderReturn.SetEvent(WE_CLICK, _OnSheetOrderReturnSelectFnc);
	m_wndStorageDetail.SetEvent(WE_CLICK, _OnStorageDetailSelectFnc);

	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate.Format(_T("%s 00:00"), pMF->GetSysDate());
	m_szToDate.Format(_T("%s 23:59"), pMF->GetSysDate());
	m_szCreatedBy = pMF->GetCurrentUser();
	SetMode(VM_VIEW);
}
void CHMSMedicalCabinetDrug::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX,	m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Check(pDX,	m_wndOperation.GetDlgCtrlID(), m_bOperation);
}
void CHMSMedicalCabinetDrug::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMedicalCabinetDrug::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
void CHMSMedicalCabinetDrug::SetDefaultValues(){
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bOperation = FALSE;
}
int CHMSMedicalCabinetDrug::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, 5, 6,  -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		
		m_wndConfirm.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSMedicalCabinetDrug::OnFromDateChange(){
	
} */
/*void CHMSMedicalCabinetDrug::OnFromDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetDrug::OnFromDateKillfocus(){
	
} */
int CHMSMedicalCabinetDrug::OnFromDateCheckValue(){
	m_bFound = false;
	OnPatientListLoadData();
	return 0;
} 
/*void CHMSMedicalCabinetDrug::OnToDateChange(){
	
} */
/*void CHMSMedicalCabinetDrug::OnToDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetDrug::OnToDateKillfocus(){
	
} */
int CHMSMedicalCabinetDrug::OnToDateCheckValue(){
	m_bFound = false;
	OnPatientListLoadData();
	return 0;
} 

int CHMSMedicalCabinetDrug::OnPatientNameCheckValue(){
	m_bFound = false;
	OnPatientListLoadData();
	return 0;
} 

void CHMSMedicalCabinetDrug::OnPatientListDblClick(){
	UpdateData(true);
	OnPrintPatientSummeryDrug(m_nDocumentNo, m_szFromDate, m_szToDate);
} 
void CHMSMedicalCabinetDrug::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem >=0){
		m_nOrderID = str2long(m_wndPatientList.GetItemText(nNewItem, 0));
		m_nDocumentNo = str2long(m_wndPatientList.GetItemText(nNewItem, 2));
		OnDrugListLoadData();
		CString szLabel;
		CString szStatus;
		CString szOrderDate = m_wndPatientList.GetItemText(nNewItem, 1);
		m_szCreatedBy = m_wndPatientList.GetItemText(nNewItem, 9);
		m_szOrderStatus = GetCurrentStatus();
		szStatus = m_szOrderStatus;
		if(szStatus == _T("S")){
			m_wndPatientList.SetMenuState(1, true);
			m_wndPatientList.SetMenuState(2, false);
			m_wndPatientList.SetMenuState(3, true);
			TranslateString(_T("&Confirm"), szLabel);
			m_wndConfirm.EnableWindow(true);

		}
		else
		{
			m_wndConfirm.EnableWindow(false);
			m_wndPatientList.SetMenuState(1, false);
			m_wndPatientList.SetMenuState(2, true);
			m_wndPatientList.SetMenuState(3, false);
//			TranslateString(_T("&Disconfirm"), szLabel);
			//Kiem tra neu khac ngay khong cho huy xac nhan
			if(CompareDate(szOrderDate.Left(10), pMF->GetSysDate()) != 0){
				m_wndPatientList.SetMenuState(1, false);			
				m_wndPatientList.SetMenuState(2, false);			
			}

		}
		m_wndDeleteDrug.EnableWindow(false);
		m_wndPrint.EnableWindow(true);
		m_wndConfirm.SetWindowText(szLabel);
	}
} 

int CHMSMedicalCabinetDrug::OnPatientListConfirm(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnConfirmSelect();
	 return 0;
} 

int CHMSMedicalCabinetDrug::OnPatientListDisconfirm(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnConfirmSelect();
	 return 0;
} 

int CHMSMedicalCabinetDrug::OnPatientListDeleteItem(){
	
	return 0;
} 
long CHMSMedicalCabinetDrug::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	UpdateData(true);

	if(m_bFound){
		szWhere.Format(_T(" and hpo_createddate between TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),	m_szFromDate, m_szToDate);
	}
	else{
		szWhere.Format(_T(" and hpo_orderdate between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') "),
		m_szFromDate, m_szToDate);
	}

	if(!m_bOperation)
	{
		szWhere.AppendFormat(_T(" and ((hpo_feetype <>'PT' and hpo_ordertype in('C','M'))  or (hpo_ordertype='P' and hpo_treatidx > 0))"));
	}
	else
		szWhere.AppendFormat(_T(" and ( hpo_ordertype in('C')  or (hpo_ordertype='P' and hpo_treatidx > 0)) "));


	szSQL.Format(_T(" SELECT 	hpo_orderid as orderid, hpo_docno as docno,") \
_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
_T(" 	date_part('year', hp_birthdate) as yearofbirth,") \
_T(" 	hp_sex as sex,") \
_T(" ho_desc as object_type, ") \
_T(" 	trunc_date(hpo_orderdate) as orderdate,") \
_T(" 	hpo_orderstatus as status,") \
_T(" 	hpo_bedid as bedid, ") \
_T(" 	hpo_createdby as createdby, ") \
_T(" 	hpo_feetype as feetype ") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
_T(" LEFT JOIN hms_object on (ho_id = hpo_object_id) ") \
_T(" WHERE hpo_deptid='%s' %s ORDER BY orderid, pname"),
		pMF->m_szDept, szWhere);
	

	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}
_fmsg(_T("%s"), szSQL);
	int nCount = 0;
	int n= -1;
	long nDocumentNo;
	m_wndPatientList.DeleteAllItems();
	m_wndPatientList.BeginLoad(); 

	nCount = rs.ExecSQL(szSQL);
	CString szStatus;
	while(!rs.IsEOF()){ 

		rs.GetValue(_T("pname"), tmpStr);		

		if(!m_szPatientName.IsEmpty()){
				CString szPatientName;				
				StringLower(tmpStr, szPatientName);
				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szPatientName)
				{
					if(!szFirstName.IsEmpty() && szFirstName != szFirstName2){
						rs.MoveNext();
						continue;
					}
				}

					
					if(!szSurName.IsEmpty() && szSurName != szSurName2){
						rs.MoveNext();
						continue;
					}
					if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
						rs.MoveNext();
						continue;
					}
			
		}

		rs.GetValue(_T("status"), szStatus);
		int nItem = m_wndPatientList.AddItems(
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("yearofbirth")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("object_type")), 
			rs.GetValue(_T("bedid")), 
			szStatus, 
			rs.GetValue(_T("createdby")), 
			rs.GetValue(_T("feetype")), 
			szStatus, 
			NULL);		

		if(szStatus == _T("S"))
		{
			m_wndPatientList.SetItemBkColor(nItem, RGB(0, 64, 192), FALSE);
			m_wndPatientList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		}
		else
		{
			rs.GetValue(_T("docno"), nDocumentNo);		
			if(nDocumentNo == m_nDocumentNo)
			{
				m_wndPatientList.SetItemBkColor(nItem, RGB(0, 128, 192), FALSE);
				m_wndPatientList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
				n = nItem;
			}
		}
		rs.MoveNext();
	}	
	
	m_wndPatientList.EndLoad();
	
	if(n < 0)
		n = m_wndPatientList.GetItemCount();
	
	m_wndPatientList.SetCurSel(n);

	return nCount;
}


int CHMSMedicalCabinetDrug::OnPatientListSearch(){
	CHMSSearchPatientDialog dlg(this);
	if(dlg.DoModal() == IDOK){
		if(!dlg.m_szDocumentNo.IsEmpty()){
			m_wndPatientList.Search(2, dlg.m_szDocumentNo, SEARCH_LIKE);
		}
		else if(!dlg.m_szPatientName.IsEmpty()){
			m_wndPatientList.Search(3, dlg.m_szPatientName, SEARCH_LIKE);
		}
		else
		{
			OnPatientListLoadData();
		}
		m_wndDrugList.DeleteAllItems();

	}
	m_bFound = false;
	return 0;
}
void CHMSMedicalCabinetDrug::OnDrugListDblClick(){
	
} 
void CHMSMedicalCabinetDrug::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if(m_szOrderStatus == _T("A")){
		m_wndDeleteDrug.EnableWindow(true);
		m_wndDrugList.SetMenuState(2, true);
	}
	else
	{
		m_wndDeleteDrug.EnableWindow(true);
		m_wndDrugList.SetMenuState(2, false);
	}
} 
int CHMSMedicalCabinetDrug::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szItemID; 
	CRecord rs(&pMF->m_db);
	
	/*szSQL.Format(_T("SELECT hpo_orderstatus as status FROM hms_ipharmaorder WHERE hpo_orderid=%ld "), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szOrderStatus);

	if(m_szOrderStatus != _T("O"))
		return -1;*/

	
	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString szMsg;
		szMsg.Format(_T("This order created by other user[%s]. Can not delete it"), m_szCreatedBy);
		ShowMessageBox(szMsg);
		return -1;
	}

	int nSel = m_wndDrugList.GetCurSel();
	if(nSel < 0) return -1;
	
	
	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	long nProductID;
	int nCount = 0;
	CString szSupplement;
	for (int i = m_wndDrugList.GetItemCount()-1; i >=0; i--)
	{
		if(m_wndDrugList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
		{
			szSupplement = m_wndDrugList.GetItemText(i, 9);
			if(szSupplement == _T("Y"))
				continue;

			nProductID = str2long(m_wndDrugList.GetItemText(i, 7));
			szSQL.Format(_T("HMS_IPHARMAORDER_DELLINE2(%ld, %ld, '%s') "), m_nOrderID, nProductID, pMF->GetCurrentUser()); 
			int ret = str2int(pMF->ExecDML(szSQL)); 
 			if(ret > 0)
			{
				m_wndDrugList.DeleteItem(i);
				nCount++;
			}
			else
			{
				_msg(_T("%d"),ret);
				CString tmpStr;
				tmpStr.Format(_T("Cannot process with current status"));
				if(ret == -11)
					tmpStr.Format(_T("Mục phí đã thanh toán không thể xóa!"));
				if(ret == -12)
					tmpStr.Format(_T("Thuốc - vật tư đã được cho vào phiếu bổ sung không thể xóa!"));
				if(ret == -13)
					tmpStr.Format(_T("Thuốc - vật tư đã được bổ sung không thể xóa!"));
				ShowMessageBox(tmpStr);
				return -1;
			}
			
			
		}
		
 	}

	if(m_wndDrugList.GetItemCount() <= 0)
	{
		OnPatientListLoadData();
	}
	if(nCount <= 0)
	{
		ShowMessageBox(_T("Cannot process with current status"));
	}
	return 0;
} 
long CHMSMedicalCabinetDrug::OnDrugListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT product_id, hpol_line, ") \
		_T("product_name as drugname, ") \
				_T(" 	product_uomname as unit,") \
				_T(" 	product_unitprice as unitprice,") \
				_T(" hpol_supplement, ") \
				_T(" 	sum(hpol_qtyorder) as orderqty,") \
				_T(" 	sum(hpol_qtyissue) as issueqty, ") \
				_T(" sum(hpol_qtyissue*hpol_unitprice) as amount ") \
				_T(" FROM hms_ipharmaorderline") \
				_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
				_T(" WHERE hpol_orderid=%ld and hpol_line > 0 ") \
				_T(" GROUP BY product_id, product_name, product_uomname, product_unitprice, hpol_line, hpol_supplement ") \
				_T(" ORDER BY hpol_line ") , m_nOrderID);
//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndDrugList.AddItems(
			tmpStr,
			rs.GetValue(_T("drugname")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("orderqty")), 
			rs.GetValue(_T("issueqty")), 
			rs.GetValue(_T("amount")), 
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("product_item_id")), 
			rs.GetValue(_T("hpol_supplement")), 
			NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	m_wndDrugList.EnsureVisible(m_wndDrugList.GetItemCount()-1, true);
	return nCount;

}

void CHMSMedicalCabinetDrug::OnLoadSelect(){
	m_bFound = false;
	OnPatientListLoadData();
}
void CHMSMedicalCabinetDrug::OnAddDrugSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_szFromDate.Format(_T("%s 00:00"), pMF->GetSysDate());
	m_szToDate.Format(_T("%s 23:59"), pMF->GetSysDate());
	m_bFound = true;
	UpdateData(false);
	
	CHMSMedicalCabinetDrugOrderEntry* newPopup = new CHMSMedicalCabinetDrugOrderEntry(this, VM_ADD);
	newPopup->m_nStorageID = 0;
	newPopup->m_szCurrentOrderDate = pMF->GetSysDateTime();
	newPopup->m_szDoctor = pMF->m_szDoctor;
	newPopup->ShowPopup(&m_wndDrugList);

} 
void CHMSMedicalCabinetDrug::OnDeleteDrugSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDrugListDeleteItem();
} 
void CHMSMedicalCabinetDrug::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CString szSQL;
	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0)
		return;
	long nOrderId = str2long(m_wndPatientList.GetItemText(nSel, 0));
	szSQL.Format(_T("HMS_IPHARMAORDER_APPROVE(%ld, '%s') "), nOrderId, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Cannot approve order"));
	}
	else
	{
		OnPatientListLoadData();
	}
} 
void CHMSMedicalCabinetDrug::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrintCabinetDrug(m_szFromDate, m_szToDate, pMF->GetCurrentUser());
} 

void CHMSMedicalCabinetDrug::OnPrintCabinetDrug(LPCTSTR lpszFromDate, LPCTSTR lpszToDate, CString szUserID){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;	
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);
	CRecord prs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	
	if(!rpt.Init(_T("Reports/HMS/HT_MEDICALCABINETDRUG.RPT")))
		return;

	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->m_szDept));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(lpszFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(lpszFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("UserName"), pMF->GetDoctorName(pMF->GetCurrentUser()));

	rpt.GetReportHeader()->SetValue(_T("StorageName"), pMF->GetStorageName(m_nStorageID));
	//Page Header

	
	szSQL.Format(_T(" SELECT DISTINCT hpo_docno       AS docno,") \
	_T("   hpo_orderid          AS orderid,") \
	_T("   trunc_date(hpo_orderdate) AS orderdate,") \
	_T("   htr_mainicd,") \
	_T("   htr_maindisease,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                AS pname,") \
	_T("   hms_getage( trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("   extract(YEAR FROM hp_birthdate)                AS yearofbirth,") \
	_T(" hpo_roomid as roomname, ") \
	_T(" hpo_bedid as bedname ") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_ipharmaorder") \
	_T(" ON(hpo_docno=hd_docno)") \
	_T(" LEFT JOIN hms_treatment_record ") \
	_T(" ON(htr_docno=hpo_docno and htr_idx=hpo_refidx) ") \
	_T(" WHERE hpo_orderdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
	_T(" AND hpo_ordertype ='C'") \
	_T(" AND hpo_deptid    ='%s'") \
	_T(" ORDER BY trunc_date(hpo_orderdate), roomname,") \
	_T("   bedname,") \
	_T("   pname,") \
	_T("   docno"),	
	lpszFromDate, lpszToDate,  pMF->m_szDept);
_fmsg(_T("%s"), szSQL);
	prs.ExecSQL(szSQL);
	CReportSection* rptDetail;
	CString szItemID;
	CString szNewLine, szOldLine, szDateNew, szDateOld;
	long nOrderNo;
	int i = 1;
	int n = 1;

	while(!prs.IsEOF())
	{	
		prs.GetValue(_T("docno"), szNewLine);
		prs.GetValue(_T("orderdate"), szDateNew);
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
				
		prs.GetValue(_T("orderdate"), tmpStr);
		rptDetail->SetValue(_T("1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		prs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		prs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		tmpStr, prs.GetValue(_T("yearofbirth"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
			
		prs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		prs.GetValue(_T("bedname"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		
		tmpStr.Format(_T("%s(%s)"),prs.GetValue(_T("htr_maindisease")),prs.GetValue(_T("htr_mainicd")));
		rptDetail->SetValue(_T("7"),tmpStr);
		
		prs.GetValue(_T("orderid"), nOrderNo);
		
		szDateOld = szDateNew;
		n=1;	

		szSQL.Format(_T(" SELECT ") \
		_T("	product_name as name, product_uomname as unit, ") \
		_T(" 	sum(hpol_qtyorder) as qty ") \
		_T(" FROM hms_ipharmaorderline ") \
		_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
		_T(" WHERE hpol_orderid=%ld ") \
		_T(" GROUP BY product_name, product_uomname ORDER BY product_name "), nOrderNo);
		//_fmsg(_T("%s"), szSQL);
		rsl.ExecSQL(szSQL);		
		while(!rsl.IsEOF()){
			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), n++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rsl.GetValue(_T("name"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rsl.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			rsl.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			rsl.GetValue(_T("usage"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rsl.MoveNext();
		}
		prs.MoveNext();
	}
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
//	rs.GetValue(_T("doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("UserName"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}

	rpt.PrintPreview();
}

#include "WardMedicalCabinetDialog.h"
void CHMSMedicalCabinetDrug::OnSheetOrderReturnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CWardMedicalCabinetDialog dlg(this);
	dlg.DoModal(); 
}

#include "HMSStorageDetailDialog.h"

void CHMSMedicalCabinetDrug::OnStorageDetailSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSStorageDetailDialog dlg(pMF);
	if (dlg.DoModal() == IDOK)
	{
	}
}
int CHMSMedicalCabinetDrug::OnAddHMSMedicalCabinetDrug(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSMedicalCabinetDrug::OnEditHMSMedicalCabinetDrug(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMedicalCabinetDrug::OnDeleteHMSMedicalCabinetDrug(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSMedicalCabinetDrug(); 
 	}
	return 0;
}
int CHMSMedicalCabinetDrug::OnSaveHMSMedicalCabinetDrug(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSMedicalCabinetDrugListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSMedicalCabinetDrug::OnCancelHMSMedicalCabinetDrug(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CHMSMedicalCabinetDrug::OnHMSMedicalCabinetDrugListLoadData(){
	return 0;
}


void CHMSMedicalCabinetDrug::Refresh(long nOrderID){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	_tprintf(_T("OrderID:%d"), nOrderID);
	if(m_nOrderID == nOrderID)
	{
		OnDrugListLoadData();
	}
	else
	{

		long nOID;
		bool bFound = false;
		for (int i =0; i < m_wndPatientList.GetItemCount(); i++){
			nOID = str2long(m_wndPatientList.GetItemText(i, 0));
			if(nOID == nOrderID){
				m_wndPatientList.SetCurSel(i);
				m_wndPatientList.SetItemBkColor(i, RGB(0, 129, 192), FALSE);
				m_wndPatientList.SetItemTextColor(i, RGB(255, 255, 255), TRUE);
				bFound = true;
				break;
			}
		}
		if(!bFound)
		{
			OnPatientListLoadData();
			for (int i =0; i < m_wndPatientList.GetItemCount(); i++){
				nOID = str2long(m_wndPatientList.GetItemText(i, 0));
				if(nOID == nOrderID){
				m_wndPatientList.SetCurSel(i);
				m_wndPatientList.SetItemBkColor(i, RGB(0, 129, 192), FALSE);
				m_wndPatientList.SetItemTextColor(i, RGB(255, 255, 255), TRUE);
				break;
			}
			}
		}
		
		m_nOrderID = nOrderID;
	}
}

CString CHMSMedicalCabinetDrug::GetCurrentStatus(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hpo_orderstatus  FROM hms_ipharmaorder WHERE hpo_orderid=%ld "), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hpo_orderstatus"), m_szOrderStatus);
	}
	return m_szOrderStatus;
}



void CHMSMedicalCabinetDrug::OnPrintPatientSummeryDrug(int nDocumentNo, CString szFromDate, CString szToDate)
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CRecord rsl(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CRecord rsd(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, szSysDate, szReportTitle;
	UpdateData(true);

	if(!rpt.Init(_T("Reports/HMS/TM_NHATTRINHVACONGKHAITHUOC.RPT"),true) )
	{
		return;
	}
	
		
	szWhere.AppendFormat(_T(" and hpo_deptid ='%s' "), pMF->m_szDept);
	

	szSQL.Format(_T(" SELECT hcr_docno as docno,") \
				_T("    trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("    hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
				_T("    sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hms_getobjectname(hd_object)                       AS object, ") \
				_T("    hcr_maindisease as diagnostic,") \
				_T("    trunc_date(hcr_admitdate) as admitdate,") \
				_T("    trunc_date(hcr_dischargedate) as dischargedate,") \
				_T("    htr_deptid,") \
				_T("    hb_roomid,") \
				_T("    hb_bedid,") \
				_T("    (SELECT sd_name FROM sys_dept WHERE htr_deptid=sd_id AND ROWNUM < 2) as deptname,") \
				_T("    hrl_name as roomname,") \
				_T("    hbl_name as bedname") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno)") \
				_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno AND htr_idx=hcr_refidx)") \
				_T(" LEFT JOIN hms_bed ON(hb_docno=hcr_docno AND hb_deptid=htr_deptid AND hb_refidx=hcr_refidx)") \
				_T(" LEFT JOIN hms_roomlist ON(hrl_deptid=htr_deptid and hrl_id=hb_roomid)") \
				_T(" LEFT JOIN hms_bedlist ON(hbl_deptid=htr_deptid and hbl_roomid=hb_roomid and hbl_id=hb_bedid)") \
				_T(" WHERE hd_docno=%ld"), nDocumentNo);

	rs1.ExecSQL(szSQL);

//_fmsg(_T("%s"), szSQL);		
		
	szSQL.Format(_T(" SELECT trunc_date(hpo_orderdate) as orderdate,") \
				_T("        hpol_product_id as itemid") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
				_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx)") \
				_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
				_T(" WHERE hpo_docno=%ld AND hpol_qtyissue > 0") \
				_T(" and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ")
				_T(" and hpo_ordertype='C' and product_org_id in ('GL', 'MA', 'PM') %s") \
				_T(" GROUP BY trunc_date(hpo_orderdate), hpol_product_id") \
				_T(" ORDER BY orderdate, itemid"), nDocumentNo, szFromDate, szToDate, szWhere);
	rsl.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	if(rsl.IsEOF())
	{			
		return;
	}
		
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("ReportTitle"), szReportTitle);

	rs1.GetValue(_T("deptname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DEPARTMENT"), tmpStr);

	rs1.GetValue(_T("pname"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("PatientName"), tmpStr);

	rs1.GetValue(_T("age"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Age"), tmpStr);

	rs1.GetValue(_T("sex"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Sex"), tmpStr);

	rs1.GetValue(_T("bedname"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Bednumber"), tmpStr);

	rs1.GetValue(_T("roomname"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Room"), tmpStr);

	rpt.GetPageHeader()->SetValue(_T("object"), rs1.GetValue(_T("object")));
	rpt.GetPageHeader()->SetValue(_T("yearofbirth"), rs1.GetValue(_T("yearofbirth")));

	tmpStr = CDate::Convert(rs1.GetValue(_T("Admitdate")), yyyymmdd, ddmmyyyy);
	rpt.GetPageHeader()->SetValue(_T("AdmitDate"), tmpStr);

	rs1.GetValue(_T("diagnostic"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Diagnostic"), tmpStr);

	tmpStr = CDate::Convert(rs1.GetValue(_T("Dischargedate")), yyyymmdd, ddmmyyyy);
	rpt.GetPageHeader()->SetValue(_T("DischargeDate"), tmpStr);

	CReportSection* rptDetail;

	double grpCost=0;
	//long cost = 0;
	int nItem;
	
	
	int nIndex=0;
	CString szTemp, szString, szConvert, szDate;
	int nCount = 0, i = 0;
	DAYCOLUMN dc_cotngay;
	DRUGITEM drugItem;
	int y = 1;
	CString szOld;
	CArray<DAYCOLUMN,DAYCOLUMN&> m_array;
	CArray<DRUGITEM, DRUGITEM&> arrDrug;
	CString szStartDay, szEndDay, szItemID;
	bool bCheck = false;

	m_array.RemoveAll();
	arrDrug.RemoveAll();

	while(!rsl.IsEOF())
	{
		if (szDate.IsEmpty() || CompareDate(szDate, rsl.GetValue(_T("orderdate"))) != 0)
		{
			rsl.GetValue(_T("orderdate"), szDate);
			dc_cotngay.szDate = szDate;
			dc_cotngay.nIndex = y;
			m_array.Add(dc_cotngay);
			y++;
		}

		rsl.GetValue(_T("itemid"), szItemID);

		for (int j = 0; j < arrDrug.GetSize(); j++)
		{
			drugItem = arrDrug[j];
			if (drugItem.szItemID == szItemID)
			{
				if (drugItem.nMaxIdx < (y - 1))
				{
					drugItem.nMaxIdx = y - 1;
					arrDrug.SetAt(j, drugItem);
				}
				bCheck = true;
				break;
			}
		}

		if (!bCheck)
		{
			drugItem.szItemID = szItemID;
			drugItem.nMaxIdx = y - 1;
			drugItem.nTotal = 0;
			arrDrug.Add(drugItem);
		}
		else
			bCheck = false;

		rsl.MoveNext();
	}
	szDate.Empty();
	szItemID.Empty();

	int nColIdx = 1;
	int nPage = 0;
	int ktra;

	for(int x = 1; x <= (m_array.GetSize()/31)+1; x++)
	{

		if(nPage > 0)
		{
			if (rptDetail)
			{
				//MessageBox(_T("OK"));
				rptDetail->SetPageBreak(true);
			}
			//rs.MoveFirst();
		}

		if(m_array.GetSize() < (nPage+1)*31)
		{
			ktra = (int)m_array.GetSize();
		}
		else 
		{
			ktra = (nPage + 1)*31;
		}

		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
		CString szDay;
		for (int i = nPage*31; i < ktra; i++)
		{
			dc_cotngay = m_array[i];
			szTemp.Format(_T("l%d"), nColIdx);
			szDay.Format(_T("%s"), CDate::Convert(dc_cotngay.szDate,yyyymmdd,ddmmyyyy));
			rptDetail->SetValue(szTemp, szDay.Left(5));
			if (i == nPage * 31)
				szStartDay = dc_cotngay.szDate;
			if (i == ktra - 1)
				szEndDay = dc_cotngay.szDate;
			nColIdx++;
		}

		nColIdx = 1;
		nItem = 1;
		szOld.Empty();

		szSQL.Format(_T(" SELECT distinct product_name as drugname,") \
			        _T("    product_uomname as unit,") \
					_T(" 	hpol_product_id as itemid ") \
					_T(" FROM hms_doc  ") \
					_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
					_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
					_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
					_T(" WHERE hpo_docno=%ld AND hpol_qtyissue > 0 and product_org_id IN ('GL', 'PM', 'MA')") \
					_T(" 	and hpo_ordertype='C'") \
					_T(" 	%s ") \
					_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T(" ORDER BY drugname"),
					nDocumentNo, szWhere, szStartDay, szEndDay);
//_fmsg(_T("%s"), szSQL);
		rsd.ExecSQL(szSQL);

		while (!rsd.IsEOF())
		{
			rsd.GetValue(_T("itemid"), szItemID);

			szSQL.Format(_T(" SELECT sum(hpol_qtyissue) as issueqty, ") \
						_T(" 	 trunc_date(hpo_orderdate) as orderdate ") \
						_T(" FROM hms_doc  ") \
						_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
						_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
						_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
						_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
						_T(" WHERE hpo_docno=%ld AND hpol_qtyissue > 0") \
						_T(" 	and hpo_ordertype='C'") \
						_T(" 	%s ") \
						_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T("    and hpol_product_id='%s'") \
						_T(" GROUP BY trunc_date(hpo_orderdate)") \
						_T(" ORDER BY trunc_date(hpo_orderdate)"),
						nDocumentNo, szWhere, szStartDay, szEndDay, szItemID);

			/*if (x == 1 && nItem == 1)
				_fmsg(_T("%s"), szSQL);*/

			//_msg(_T("%s"), szSQL);

			rs.ExecSQL(szSQL);

			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nItem++);
			rptDetail->SetValue(_T("Index"), tmpStr);	

			rsd.GetValue(_T("drugname"), tmpStr);
			rptDetail->SetValue(_T("DrugName"), tmpStr);
			rsd.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("Unit"), tmpStr);

			while(!rs.IsEOF())
			{
				rs.GetValue(_T("orderdate"), tmpStr);

				for (int z = 0; z < m_array.GetSize(); z++)
				{
					dc_cotngay = m_array[z];					
					if(tmpStr == dc_cotngay.szDate)
					{
						nIndex = dc_cotngay.nIndex;
						break;
					}

				}

				if(nIndex > (nPage+1) * 31)
				{
					rs.MoveNext();
					continue;
				}

				//Neu bn qua 31 ngay thi tinh lai chi so cot
				if (nPage > 0)
				{
					nIndex = nIndex - (nPage * 31);
				}

				rs.GetValue(_T("issueqty"), tmpStr);
				grpCost += ToDouble(tmpStr);
				szTemp.Format(_T("%d"), nIndex);
				rptDetail->SetValue(szTemp, tmpStr);
			
				rs.MoveNext();
			}

			if(grpCost > 0)
			{
				for (int j = 0; j < arrDrug.GetSize(); j++)
				{
					drugItem = arrDrug[j];
					if (drugItem.szItemID == szItemID)
					{
						drugItem.nTotal += grpCost;

						if ((drugItem.nMaxIdx <= (nPage + 1) * 31) &&
							(drugItem.nMaxIdx > nPage * 31))
						{
							/*if ((drugItem.nTotal - (drugItem.nTotal)) > 0)
							{
								tmpStr.Format(_T("%.3f"), drugItem.nTotal);
							}
							else
								tmpStr.Format(_T("%.0f"), drugItem.nTotal);*/
							tmpStr.Format(_T("%.3f"), drugItem.nTotal);
							rptDetail->SetValue(_T("32"), tmpStr);
						}

						arrDrug.SetAt(j, drugItem);
						break;
					}
				}
				grpCost = 0;
			}

			rsd.MoveNext();
		}
		nPage++;
	}	

	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	rpt.PrintPreview();
}

void CHMSMedicalCabinetDrug::OnResizeLayout()
{
	AddResize(&m_wndDrugInformation, 100, 100);
	AddResize(&m_wndDrugList, 100, 100);
	AddResize(&m_wndPatientInformation, 100, 100);
	AddResize(&m_wndPatientList, 100, 100);

	AddBottom(&m_wndAddDrug);
	AddBottom(&m_wndDeleteDrug);
	AddBottom(&m_wndConfirm);
	AddBottom(&m_wndPrint);

	AddBottom(&m_wndStorageDetail, 5, true);
	AddBottom(&m_wndSheetOrderReturn);
	AddBottom(&m_wndAddDrug);


}