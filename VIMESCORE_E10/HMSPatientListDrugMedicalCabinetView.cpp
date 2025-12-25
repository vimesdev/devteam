#include "HMSPatientListDrugMedicalCabinetView.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "HMSItemDailyTrackbyDept.h"
#include "StorageMedicalCabinetDialog.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientListDrugMedicalCabinetView *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientListDrugMedicalCabinetView *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientListDrugMedicalCabinetView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientListDrugMedicalCabinetView *)pWnd)->OnPatientNameCheckValue();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListPreviewDailyMaterialFnc(CWnd *pWnd){
	 return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnPatientListPreviewDailyMaterial();
} 
static int _OnPatientListdrugItemFnc(CWnd *pWnd){
	 return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnPatientListdrugItem();
}
static int _OnPatientListPreviewOpertionListFnc(CWnd *pWnd){
	return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnPrintOperationList();
}
static int _OnPatientListPreviewItembyDeptFnc(CWnd *pWnd){
	return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnPatientListPreviewItembyDept();
}

static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSPatientListDrugMedicalCabinetView *pVw = (CHMSPatientListDrugMedicalCabinetView *)pWnd;
	pVw->OnSearchSelect();
} 
static int _OnAddHMSPatientListDrugMedicalCabinetViewFnc(CWnd *pWnd){
	 return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnAddHMSPatientListDrugMedicalCabinetView();
} 
static int _OnEditHMSPatientListDrugMedicalCabinetViewFnc(CWnd *pWnd){
	 return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnEditHMSPatientListDrugMedicalCabinetView();
} 
static int _OnDeleteHMSPatientListDrugMedicalCabinetViewFnc(CWnd *pWnd){
	 return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnDeleteHMSPatientListDrugMedicalCabinetView();
} 
static int _OnSaveHMSPatientListDrugMedicalCabinetViewFnc(CWnd *pWnd){
	 return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnSaveHMSPatientListDrugMedicalCabinetView();
} 
static int _OnCancelHMSPatientListDrugMedicalCabinetViewFnc(CWnd *pWnd){
	 return ((CHMSPatientListDrugMedicalCabinetView*)pWnd)->OnCancelHMSPatientListDrugMedicalCabinetView();
} 
CHMSPatientListDrugMedicalCabinetView::CHMSPatientListDrugMedicalCabinetView(){

	m_nDlgWidth = 995;
	m_nDlgHeight = 345;
	SetDefaultValues();
	m_bInPatient = false;
}
CHMSPatientListDrugMedicalCabinetView::~CHMSPatientListDrugMedicalCabinetView(){
}
void CHMSPatientListDrugMedicalCabinetView::OnCreateComponents(){
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 5, 105, 30);
	m_wndPatientName.Create(this,110, 5, 310, 30); 
	m_wndPatientList.Create(this,5, 35, 505, 335); 
	m_wndDrugList.Create(this,510, 35, 985, 335); 
	m_wndSearch.Create(this, _T("&Search"), 315, 5, 395, 30);
}
void CHMSPatientListDrugMedicalCabinetView::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(35);
	//m_wndPatientName.SetCheckValue(true);


	m_wndPatientList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(1, _T("RecordNo"), CFMT_TEXT, 70);
	m_wndPatientList.InsertColumn(2, _T("DocumentNo"), CFMT_NUMBER, 70);
	m_wndPatientList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 160);
	m_wndPatientList.InsertColumn(4, _T("YOB"), CFMT_TEXT, 60);
	m_wndPatientList.InsertColumn(5, _T("Object"), CFMT_TEXT, 80);
	m_wndPatientList.InsertColumn(6, _T("Bàn mổ"), CFMT_TEXT, 120);


	m_wndDrugList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 40);
	m_wndDrugList.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 150);
	m_wndDrugList.InsertColumn(2, _T("Uom"), CFMT_TEXT, 60);
	m_wndDrugList.InsertColumn(3, _T("Qty"), CFMT_TEXT, 60);
	m_wndDrugList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndDrugList.InsertColumn(5, _T("Manufacture"), CFMT_TEXT, 120);

	
}
void CHMSPatientListDrugMedicalCabinetView::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);

	m_wndPatientList.AddEvent(1, _T("Preview patient daily material"), _OnPatientListPreviewDailyMaterialFnc);
	m_wndPatientList.AddEvent(0, _T("-"));
	m_wndPatientList.AddEvent(2, _T("Preview patient daily drug"), _OnPatientListdrugItemFnc);
	m_wndPatientList.AddEvent(0, _T("-"));
	m_wndPatientList.AddEvent(3, _T("Preview operation list"), _OnPatientListPreviewOpertionListFnc);
	m_wndPatientList.AddEvent(0, _T("-"));
	m_wndPatientList.AddEvent(4, _T("Preview item daily by dept"), _OnPatientListPreviewItembyDeptFnc);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	//m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientListDrugMedicalCabinetViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientListDrugMedicalCabinetViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientListDrugMedicalCabinetViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientListDrugMedicalCabinetViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientListDrugMedicalCabinetViewFnc, 0, 'T', VK_CONTROL);
	*/
	SetMode(VM_NONE);
	
}
void CHMSPatientListDrugMedicalCabinetView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSPatientListDrugMedicalCabinetView::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientListDrugMedicalCabinetView::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CHMSPatientListDrugMedicalCabinetView::SetDefaultValues(){

	m_szPatientName.Empty();

}
int CHMSPatientListDrugMedicalCabinetView::SetMode(int nMode){
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
		m_wndSearch.EnableWindow(true);
		m_wndPatientName.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSPatientListDrugMedicalCabinetView::OnPatientNameChange(){
	
} */
/*void CHMSPatientListDrugMedicalCabinetView::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientListDrugMedicalCabinetView::OnPatientNameKillfocus(){
	
} */
int CHMSPatientListDrugMedicalCabinetView::OnPatientNameCheckValue(){
	return 0;
	OnSearchSelect();
} 
void CHMSPatientListDrugMedicalCabinetView::OnPatientListDblClick(){
	OnPrintDrugdaily(1);
} 
void CHMSPatientListDrugMedicalCabinetView::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	/*if(nOldItem == nNewItem)
		return;*/	
	m_nDocumentNo = ToInt(m_wndPatientList.GetItemText(nNewItem, 2));	
	OnDrugListLoadData();
} 
int CHMSPatientListDrugMedicalCabinetView::OnPatientListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnPrintDrugdaily(1);
	 return 0;
}

int CHMSPatientListDrugMedicalCabinetView::OnPatientListPreviewDailyMaterial(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnPrintDrugdaily(1);
	 return 0;
}

int CHMSPatientListDrugMedicalCabinetView::OnPatientListdrugItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnPrintDrugdaily(2);
	 return 0;
} 
long CHMSPatientListDrugMedicalCabinetView::OnPatientListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szTable;
	int nCount = 0;
	UpdateData(true);
	CStorageMedicalCabinetDialog *p = (CStorageMedicalCabinetDialog*) m_pWndOrder;
	CString szStatus = p->m_szStatus;
	if (p->m_szCategory == _T("D"))
	{
		szTable = _T("hms_medical_transaction_debt");
	}
	else
	{
		if(szStatus == _T("A"))
		{
			szTable = _T("hms_medical_transactionw");
		}
		else
		{
			szTable = _T("hms_medical_transaction");
		}
	}
	if(m_bInPatient)
	{
		szSQL.Format(_T(" SELECT  DISTINCT hpo_docno as docno, htr_recordno as recordno, ") \
			_T("	htr_mainicd, htr_maindisease, ") \
			_T("	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T("	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age, ") \
			_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
			_T("	GET_OBJECTNAME(hd_object)        AS ObjectName, ") \
			_T(" (SELECT hst_name FROM hms_surgery_table WHERE ho_opera_table = hst_idx) AS opertablename") \
			_T(" FROM %s ") \
			_T(" LEFT JOIN HMS_PHARMAORDER_VIEW") \
			_T(" ON(hmt_docno=hpo_docno AND hpo_orderid =hmt_orderid) ") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_docno=hmt_docno)") \
			_T(" LEFT JOIN hms_patient") \
			_T(" ON(hp_patientno=hd_patientno)") \
			_T(" LEFT JOIN hms_operation") \
			_T(" ON (hd_docno    = ho_docno") \
			_T(" AND ho_patientno=hd_patientno AND hpo_reference_id=ho_idx)") \
			_T(" LEFT JOIN hms_treatment_record on(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
			_T(" WHERE 	hmt_reftransaction_id = %ld") \
			_T(" ORDER BY pname, docno"), szTable, m_nTransactionID);
	}
	else
	{
		szSQL.Format(_T(" SELECT  DISTINCT hmt_docno as docno, '' as recordno, ") \
			_T("	hd_icd as htr_mainicd, hd_diagnostic as htr_maindisease, ") \
			_T("	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T("	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age, ") \
			_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
			_T("	GET_OBJECTNAME(hd_object)        AS ObjectName, ") \
			_T(" (SELECT hst_name FROM hms_surgery_table WHERE ho_opera_table = hst_idx) AS opertablename") \
			_T(" FROM %s ") \
			_T(" LEFT JOIN HMS_PHARMAORDER_VIEW") \
			_T(" ON(hmt_docno=hpo_docno AND hpo_orderid =hmt_orderid) ") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_docno=hmt_docno)") \
			_T(" LEFT JOIN hms_patient") \
			_T(" ON(hp_patientno=hd_patientno)") \
			_T(" LEFT JOIN hms_operation") \
			_T(" ON (hd_docno    = ho_docno") \
			_T(" AND ho_patientno=hd_patientno AND hpo_reference_id=ho_idx)") \
			_T(" WHERE 	hmt_reftransaction_id = %ld") \
			_T(" ORDER BY pname, docno"), szTable, m_nTransactionID);
	}
//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nItem =1;
	CString tmpStr;
	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;

	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}
	m_wndPatientList.BeginLoad();
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

		tmpStr.Format(_T("%d"), nItem++);
		m_wndPatientList.AddItems(
			tmpStr,
			rs.GetValue(_T("recordno")),
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("yearofbirth")), 
			rs.GetValue(_T("ObjectName")), 
			rs.GetValue(_T("opertablename")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
}
void CHMSPatientListDrugMedicalCabinetView::OnDrugListDblClick(){
	
} 
void CHMSPatientListDrugMedicalCabinetView::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CHMSPatientListDrugMedicalCabinetView::OnDrugListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientListDrugMedicalCabinetView::OnDrugListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;

	CString szTable, szStatus;

	CStorageMedicalCabinetDialog *p = (CStorageMedicalCabinetDialog*) m_pWndOrder;
	szStatus = p->m_szStatus;

	if (p->m_szCategory == _T("D"))
	{
		szTable = _T("hms_medical_transaction_debt");
	}
	else
	{
		if(szStatus == _T("A"))
		{
			szTable = _T("hms_medical_transactionw");
		}
		else
		{
			szTable = _T("hms_medical_transaction");
		}
	}

	if(m_bInPatient)
	{
		szSQL.Format(_T(" SELECT trunc_date(hpo_orderdate) AS orderdate, hpo_orderstatus, product_id, product_name as drugname, ") \
				_T(" 	product_uomname as unit,") \
				_T(" 	product_countryname as countryname,") \
				_T(" 	product_unitprice as unitprice,") \
				_T(" 	sum(hpol_qtyorder) as qtyorder,") \
				_T(" 	sum(hpol_qtyissue) as qtyissue, ") \
				_T(" 	sum((hpol_qtyissue)*product_unitprice) as amount ") \
				_T(" FROM hms_ipharmaorder  ") \
				_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid) ") \
				_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
				_T(" LEFT JOIN %s ") \
				_T(" ON(hmt_docno=hpo_docno ") \
				_T(" AND hmt_orderid=hpo_orderid ") \
				_T(" AND hmt_product_id=hpol_product_id ) ") \
				_T(" WHERE hpo_docno=%ld and hmt_reftransaction_id=%ld and hpol_line > 0 ") \
				_T(" GROUP BY trunc_date(hpo_orderdate), hpo_orderstatus, hpol_line, product_id, product_name, product_uomname, product_unitprice, product_countryname ") \
				_T(" ORDER BY orderdate,hpol_line, product_name, product_uomname ") , szTable, m_nDocumentNo,  m_nTransactionID);
	}
	else
	{
		szSQL.Format(_T(" SELECT trunc_date(hpo_orderdate) AS orderdate, hpo_orderstatus, product_id, product_name as drugname, ") \
				_T(" 	product_uomname as unit,") \
				_T(" 	product_countryname as countryname,") \
				_T(" 	product_unitprice as unitprice,") \
				_T(" 	sum(hpol_qtyorder) as qtyorder,") \
				_T(" 	sum(hpol_qtyissue) as qtyissue, ") \
				_T(" 	sum((hpol_qtyissue)*product_unitprice) as amount ") \
				_T(" FROM hms_pharmaorder  ") \
				_T(" LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid) ") \
				_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
				_T(" LEFT JOIN %s  ") \
				_T(" ON(hmt_docno=hpo_docno ") \
				_T(" AND hmt_orderid=hpo_orderid ") \
				_T(" AND hmt_product_id=hpol_product_id ) ") \
				_T(" WHERE hpo_docno=%ld and hmt_reftransaction_id=%ld and hpol_line > 0 ") \
				_T(" GROUP BY trunc_date(hpo_orderdate), hpo_orderstatus, hpol_line, product_id, product_name, product_uomname, product_unitprice, product_countryname ") \
				_T(" ORDER BY orderdate,hpol_line, product_name, product_uomname ") , szTable, m_nDocumentNo,  m_nTransactionID);
	}

//_fmsg(_T("%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	CString tmpStr, szNewLine, szOldLine;
	int nItem , nId =1;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("OrderDate"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			nItem = m_wndDrugList.AddItems(
						_T(""),
						CDate::Convert(rs.GetValue(_T("OrderDate")), yyyymmdd, ddmmyyyy),
						NULL);
			m_wndDrugList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndDrugList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			nId= 1;
			szOldLine = szNewLine;
		}

		tmpStr.Format(_T("%d"), nId++);
		m_wndDrugList.AddItems(
			tmpStr,
			rs.GetValue(_T("drugname")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("qtyorder")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("countryname")), NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
}
void CHMSPatientListDrugMedicalCabinetView::OnSearchSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnPatientListLoadData();
} 
int CHMSPatientListDrugMedicalCabinetView::OnAddHMSPatientListDrugMedicalCabinetView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientListDrugMedicalCabinetView::OnEditHMSPatientListDrugMedicalCabinetView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientListDrugMedicalCabinetView::OnDeleteHMSPatientListDrugMedicalCabinetView(){
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
 		OnCancelHMSPatientListDrugMedicalCabinetView();
 	}
	return 0;
}
int CHMSPatientListDrugMedicalCabinetView::OnSaveHMSPatientListDrugMedicalCabinetView(){
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
// _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSPatientListDrugMedicalCabinetViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientListDrugMedicalCabinetView::OnCancelHMSPatientListDrugMedicalCabinetView(){
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
int CHMSPatientListDrugMedicalCabinetView::OnHMSPatientListDrugMedicalCabinetViewListLoadData(){
	return 0;
}
void CHMSPatientListDrugMedicalCabinetView::Refresh(long nOrderID){
	m_nTransactionID = nOrderID;
	OnPatientListLoadData();
}


typedef struct  tagColum
{
	CString szDate;
	int nIndex;
}DAYCOLUMN;

typedef struct tagDrug
{
	CString szItemID;
	double nTotal;
	int nMaxIdx;
}DRUGITEM;

void CHMSPatientListDrugMedicalCabinetView::OnPrintDrugdaily(int nType)
{	
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CReport rpt;
	CRecord rsl(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CRecord rsd(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, szSysDate, szReportTitle;
	CString szTableName;
	UpdateData(true);
	
	if(!rpt.Init(_T("Reports/HMS/TM_NHATTRINHVACONGKHAITHUOC.RPT"),true) )
	{
		return;
	}
	
	
	if(nType == 1){
		szWhere.AppendFormat(_T(" and substr(product_producttype,1,2) IN('A3','A9' )"));
	}

	if(nType == 2){
		szWhere.AppendFormat(_T(" and substr(product_producttype,1,2) IN ('A1', 'A6') "));
	}


	if(m_bInPatient)
	{
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
					_T(" WHERE hd_docno=%ld"), m_nDocumentNo);

		rs1.ExecSQL(szSQL);

//	_fmsg(_T("%s"), szSQL);		
			
		szSQL.Format(_T(" SELECT trunc_date(hpo_orderdate) as orderdate,") \
					_T("        hpol_product_id as itemid") \
					_T(" FROM hms_patient") \
					_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
					_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx)") \
					_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
					_T(" WHERE hpo_docno=%ld and hpo_orderstatus in('S','I','A') AND hpol_qtyissue > 0") \
					_T(" AND hpo_org_id NOT IN('SMM') %s") \
					_T(" GROUP BY trunc_date(hpo_orderdate), hpol_product_id") \
					_T(" ORDER BY orderdate, itemid"), m_nDocumentNo, szWhere);
		rsl.ExecSQL(szSQL);

		szTableName = _T("hms_ipharmaorder");
	}
	else
	{
		szSQL.Format(_T(" SELECT hd_docno as docno,") \
				_T("    trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("    hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
				_T("    sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hms_getobjectname(hd_object)                       AS object, ") \
				_T("    hd_diagnostic as diagnostic,") \
				_T("    trunc_date(hd_admitdate) as admitdate,") \
				_T("    trunc_date(hd_enddate) as dischargedate,") \
				_T("    hd_admitdept, ") \
				_T("    GET_DEPARTMENTNAME(hd_admitdept) as deptname ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" WHERE hd_docno=%ld"), m_nDocumentNo);

		rs1.ExecSQL(szSQL);

//	_fmsg(_T("%s"), szSQL);		
			
		szSQL.Format(_T(" SELECT trunc_date(hpo_orderdate) as orderdate,") \
					_T("        hpol_product_id as itemid") \
					_T(" FROM hms_patient") \
					_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T(" LEFT JOIN hms_pharmaorder ON(hpo_docno=hd_docno)") \
					_T(" LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
					_T(" WHERE hpo_docno=%ld and hpo_orderstatus in('S','I','A') AND hpol_qtyissue > 0") \
					_T(" AND hpo_org_id NOT IN('SMM') %s") \
					_T(" GROUP BY trunc_date(hpo_orderdate), hpol_product_id") \
					_T(" ORDER BY orderdate, itemid"), m_nDocumentNo, szWhere);
		rsl.ExecSQL(szSQL);

		szTableName = _T("hms_pharmaorder");

	}

//_fmsg(_T("%s"), szSQL);
	if(rsl.IsEOF())
	{			
		return;
	}
		
	/*rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);*/
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
	CReportSection* rptDetailH2;

	double grpCost=0;
	//long cost = 0;
	int nItem;
	
	int nIndex=0;
	CString szTemp, szString, szConvert, szDate;
	int nCount = 0, i = 0;
	DAYCOLUMN dc_cotngay;
	DRUGITEM drugItem;
	int y = 1;
	int nMaxDay = 15;
	CString szOld;
	CArray<DAYCOLUMN,DAYCOLUMN&> m_array;
	CArray<DRUGITEM, DRUGITEM&> arrDrug;
	CString szStartDay, szEndDay, szItemID;
	CString szFeeTypeNew, szFeeTypeOld;
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

	for(int x = 1; x <= (m_array.GetSize()/nMaxDay)+1; x++)
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

		if(m_array.GetSize() < (nPage+1)*nMaxDay)
		{
			ktra = m_array.GetSize();
		}
		else 
		{
			ktra = (nPage + 1)*nMaxDay;
		}

		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
		CString szDay;
		for (int i = nPage*nMaxDay; i < ktra; i++)
		{
			dc_cotngay = m_array[i];
			szTemp.Format(_T("l%d"), nColIdx);
			szDay.Format(_T("%s"), CDate::Convert(dc_cotngay.szDate,yyyymmdd,ddmmyyyy));
			rptDetail->SetValue(szTemp, szDay.Left(5));
			if (i == nPage * nMaxDay)
				szStartDay = dc_cotngay.szDate;
			if (i == ktra - 1)
				szEndDay = dc_cotngay.szDate;
			nColIdx++;
		}

		nColIdx = 1;
		nItem = 1;
		szOld.Empty();

		if(m_bInPatient)
		{
		
			szSQL.Format(_T(" SELECT distinct product_name as drugname,") \
					_T("	hpo_feetype as feetype, ") \
			        _T("    product_uomname as unit,") \
					_T(" 	hpol_product_id as itemid ") \
					_T(" FROM hms_ipharmaorder ") \
					_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
					_T(" WHERE hpo_docno=%ld and hpo_orderstatus in('S','I','A') AND hpol_qtyissue > 0 ") \
					_T(" AND hpo_org_id NOT IN('SMM') ") \
					_T(" 	%s ") \
					_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T(" ORDER BY feetype, drugname"),
					m_nDocumentNo, szWhere, szStartDay, szEndDay);
		}
		else
		{
			szSQL.Format(_T("SELECT drugname, feetype, unit, itemid ") \
					_T("	  FROM ") \
					_T("	(SELECT distinct product_name as drugname,") \
					_T("		case when NVL(hpo_feetype, 'X') <> 'PT' then 'CP' ") \
					_T("		else case when coalesce(hpo_reference_id, 0) > 0 then 'PT' ") \
					_T("		else 'DG' end end as feetype, ") \
			        _T("		product_uomname as unit,") \
					_T(" 		hpol_product_id as itemid ") \
					_T("	FROM hms_pharmaorder ") \
					_T("	LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T("	LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
					_T("	WHERE hpo_docno=%ld and hpo_orderstatus in('S','I','A') AND hpol_qtyissue > 0 ") \
					_T("	AND hpo_org_id NOT IN('SMM') ") \
					_T(" 	%s ") \
					_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
					_T(" ORDER BY feetype, drugname"),
					m_nDocumentNo, szWhere, szStartDay, szEndDay);
		}
		rsd.ExecSQL(szSQL);

		while (!rsd.IsEOF())
		{
			rsd.GetValue(_T("itemid"), szItemID);
			rsd.GetValue(_T("feetype"), szFeeTypeNew);

			if(m_bInPatient)
			{
				szSQL.Format(_T(" SELECT sum(hpol_qtyissue) as issueqty, ") \
						_T(" 	 trunc_date(hpo_orderdate) as orderdate ") \
						_T(" FROM hms_ipharmaorder ") \
						_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
						_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
						_T(" WHERE hpo_docno=%ld and hpo_orderstatus in('A') AND hpol_qtyissue > 0") \
						_T(" AND hpo_org_id NOT IN('SMM') ") \
						_T(" 	%s ") \
						_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T("    and hpol_product_id='%s' and hpo_feetype ='%s'") \
						_T(" GROUP BY trunc_date(hpo_orderdate)") \
						_T(" ORDER BY trunc_date(hpo_orderdate)"),
						m_nDocumentNo, szWhere, szStartDay, szEndDay, szItemID, szFeeTypeNew);
			}
			else
			{
				szSQL.Format(_T(" SELECT sum(hpol_qtyissue) as issueqty, ") \
						_T(" 	 trunc_date(hpo_orderdate) as orderdate ") \
						_T(" FROM (") \
						_T(" SELECT hpol_qtyissue, hpo_orderdate, ") \
						_T("		case when NVL(hpo_feetype, 'X') <> 'PT' then 'CP' ") \
						_T("		else case when coalesce(hpo_reference_id, 0) > 0 then 'PT' ") \
						_T("		else 'DG' end end as feetype ") \
						_T(" FROM hms_pharmaorder ") \
						_T(" LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
						_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
						_T(" WHERE hpo_docno=%ld and hpo_orderstatus in('A') AND hpol_qtyissue > 0") \
						_T(" AND hpo_org_id NOT IN('SMM') ") \
						_T(" 	%s ") \
						_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T("    and hpol_product_id='%s' )") \
						_T(" WHERE feetype = '%s'") \
						_T(" GROUP BY trunc_date(hpo_orderdate)") \
						_T(" ORDER BY trunc_date(hpo_orderdate)"),
						m_nDocumentNo, szWhere, szStartDay, szEndDay, szItemID, szFeeTypeNew);
			}
			/*if (x == 1 && nItem == 1)
				_fmsg(_T("%s"), szSQL);*/

			//_msg(_T("%s"), szSQL);
			if(szFeeTypeNew != szFeeTypeOld && !szFeeTypeNew.IsEmpty())
			{
				rptDetailH2 = rpt.AddDetail(rpt.GetGroupHeader(2));
				rptDetailH2->SetValue(_T("GroupName"), pMF->GetSelectionString(_T("hms_cabinetmedical_type"), szFeeTypeNew));
				szFeeTypeOld = szFeeTypeNew;
			}
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

				if(nIndex > (nPage+1) * nMaxDay)
				{
					rs.MoveNext();
					continue;
				}

				//Neu bn qua nMaxDay ngay thi tinh lai chi so cot
				if (nPage > 0)
				{
					nIndex = nIndex - (nPage * nMaxDay);
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

						if ((drugItem.nMaxIdx <= (nPage + 1) * nMaxDay) &&
							(drugItem.nMaxIdx > nPage * nMaxDay))
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

	/*if(grpCost>0)
	{
		tmpStr.Format(_T("%d"),grpCost);
		rptDetail->SetValue(_T("32"), tmpStr);
		grpCost =0;
	}*/

	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	rpt.PrintPreview();
}

int CHMSPatientListDrugMedicalCabinetView::OnPrintOperationList(){	
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CReport rpt;
	CRecord rsl(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CRecord rsd(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, szSysDate, szReportTitle;
	
	UpdateData(true);
	
	if(!rpt.Init(_T("Reports/HMS/PM_DAILYOPERATIONLIST.RPT"),true) )
	{
		return -1;
	}

	szSQL.Format(_T(" SELECT hcr_docno as docno,") \
				_T("    trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("    hms_getage( trunc(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
				_T("    sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hms_getobjectname(hd_object)                       AS object, ") \
				_T("    hcr_maindisease as diagnostic,") \
				_T("    trunc(hcr_admitdate) as admitdate,") \
				_T("    trunc(hcr_dischargedate) as dischargedate,") \
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
				_T(" WHERE hd_docno=%ld"), m_nDocumentNo);

	rs1.ExecSQL(szSQL);

_fmsg(_T("%s"), szSQL);		
		
	szSQL.Format(_T(" SELECT trunc(hpo_orderdate) as orderdate,") \
				_T("  hpol_product_id as itemid") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
				_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx)") \
				_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
				_T(" WHERE hpo_docno=%ld and hpo_orderstatus in('S','I','A') AND hpol_qtyissue > 0") \
				_T(" GROUP BY trunc(hpo_orderdate), hpol_product_id") \
				_T(" ORDER BY orderdate, itemid"), m_nDocumentNo, szWhere);
	rsl.ExecSQL(szSQL);

//_fmsg(_T("%s"), szSQL);
	if(rsl.IsEOF())
	{			
		return -1;
	}
		
	/*rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);*/
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
	CReportSection* rptDetailH2;

	double grpCost=0;
	//long cost = 0;
	int nItem;
	
	int nIndex=0;
	CString szTemp, szString, szConvert, szDate;
	int nCount = 0, i = 0;
	DAYCOLUMN dc_cotngay;
	DRUGITEM drugItem;
	int y = 1;
	int nMaxDay = 15;
	CString szOld;
	CArray<DAYCOLUMN,DAYCOLUMN&> m_array;
	CArray<DRUGITEM, DRUGITEM&> arrDrug;
	CString szStartDay, szEndDay, szItemID;
	CString szFeeTypeNew, szFeeTypeOld;
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

	for(int x = 1; x <= (m_array.GetSize()/nMaxDay)+1; x++)
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

		if(m_array.GetSize() < (nPage+1)*nMaxDay)
		{
			ktra = m_array.GetSize();
		}
		else 
		{
			ktra = (nPage + 1)*nMaxDay;
		}

		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
		CString szDay;
		for (int i = nPage*nMaxDay; i < ktra; i++)
		{
			dc_cotngay = m_array[i];
			szTemp.Format(_T("l%d"), nColIdx);
			szDay.Format(_T("%s"), CDate::Convert(dc_cotngay.szDate,yyyymmdd,ddmmyyyy));
			rptDetail->SetValue(szTemp, szDay.Left(5));
			if (i == nPage * nMaxDay)
				szStartDay = dc_cotngay.szDate;
			if (i == ktra - 1)
				szEndDay = dc_cotngay.szDate;
			nColIdx++;
		}

		nColIdx = 1;
		nItem = 1;
		szOld.Empty();

		szSQL.Format(_T(" SELECT distinct hfl_name as optname,") \
			        _T("    hfl_unit as unit,") \
					_T(" 	hfl_feeid as itemid ") \
					_T(" FROM hms_doc  ") \
					_T(" LEFT JOIN hms_operation ON (hd_docno = ho_docno) ") \
					_T(" LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid) ") \
					_T(" WHERE ho_docno=%ld and ho_status <> 'O'") \
					_T("    and trunc(ho_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T(" ORDER BY optname"),
					m_nDocumentNo, szStartDay, szEndDay);
		rsd.ExecSQL(szSQL);

		while (!rsd.IsEOF())
		{
			rsd.GetValue(_T("itemid"), szItemID);

			szSQL.Format(_T(" SELECT sum(ho_qty) as qty, ") \
						_T(" 	 trunc(ho_orderdate) as orderdate ") \
						_T(" FROM hms_doc  ") \
						_T(" LEFT JOIN hms_operation ON (ho_docno = hd_docno) ") \
						_T(" WHERE ho_docno=%ld and ho_status <> 'O'") \
						_T("    and trunc(ho_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T("    and ho_itemid='%s'") \
						_T(" GROUP BY trunc(ho_orderdate)") \
						_T(" ORDER BY trunc(ho_orderdate)"),
						m_nDocumentNo, szStartDay, szEndDay, szItemID);
			/*if (x == 1 && nItem == 1)
				_fmsg(_T("%s"), szSQL);*/

			//_msg(_T("%s"), szSQL);
			//if(szFeeTypeNew != szFeeTypeOld && !szFeeTypeNew.IsEmpty())
			//{
			//	rptDetailH2 = rpt.AddDetail(rpt.GetGroupHeader(2));
			//	rptDetailH2->SetValue(_T("GroupName"), pMF->GetSelectionString(_T("hms_cabinetmedical_type"), szFeeTypeNew));
			//	szFeeTypeOld = szFeeTypeNew;
			//}
			rs.ExecSQL(szSQL);

			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nItem++);
			rptDetail->SetValue(_T("Index"), tmpStr);	

			rsd.GetValue(_T("optname"), tmpStr);
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

				if(nIndex > (nPage+1) * nMaxDay)
				{
					rs.MoveNext();
					continue;
				}

				//Neu bn qua nMaxDay ngay thi tinh lai chi so cot
				if (nPage > 0)
				{
					nIndex = nIndex - (nPage * nMaxDay);
				}

				rs.GetValue(_T("qty"), tmpStr);
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

						if ((drugItem.nMaxIdx <= (nPage + 1) * nMaxDay) &&
							(drugItem.nMaxIdx > nPage * nMaxDay))
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

	/*if(grpCost>0)
	{
		tmpStr.Format(_T("%d"),grpCost);
		rptDetail->SetValue(_T("32"), tmpStr);
		grpCost =0;
	}*/

	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	rpt.PrintPreview();
	return 0;
}

int CHMSPatientListDrugMedicalCabinetView::OnPatientListPreviewItembyDept(){
	CHMSItemDailyTrackbyDept dlg(&m_wndPatientList, m_nDocumentNo);
	dlg.DoModal();
	return 0;
}