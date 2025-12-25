#include "stdafx.h"
#include "PMPrescriptionList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMPrescriptionList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMPrescriptionList *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMPrescriptionList* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMPrescriptionList *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnStockAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMPrescriptionList* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CPMPrescriptionList *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnObjectAddNew();
}*/
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMPrescriptionList* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPMPrescriptionList *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPMPrescriptionList *)pWnd)->OnGroupAddNew();
}*/
static void _OnCPSelectFnc(CWnd *pWnd){
	 ((CPMPrescriptionList*)pWnd)->OnCPSelect();
}
static void _OnPTSelectFnc(CWnd *pWnd){
	 ((CPMPrescriptionList*)pWnd)->OnPTSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMPrescriptionList *pVw = (CPMPrescriptionList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMPrescriptionList *pVw = (CPMPrescriptionList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPayableSelectFnc(CWnd *pWnd){
	  ((CPMPrescriptionList*)pWnd)->OnPayableSelect();
}
static void _OnApprovalSelectFnc(CWnd *pWnd){
	  ((CPMPrescriptionList*)pWnd)->OnApprovalSelect();
}
static void _OnDTTSelectFnc(CWnd *pWnd){
	((CPMPrescriptionList*)pWnd)->OnDTTSelect();
}
static int _OnAddPMPrescriptionListFnc(CWnd *pWnd){
	 return ((CPMPrescriptionList*)pWnd)->OnAddPMPrescriptionList();
} 
static int _OnEditPMPrescriptionListFnc(CWnd *pWnd){
	 return ((CPMPrescriptionList*)pWnd)->OnEditPMPrescriptionList();
} 
static int _OnDeletePMPrescriptionListFnc(CWnd *pWnd){
	 return ((CPMPrescriptionList*)pWnd)->OnDeletePMPrescriptionList();
} 
static int _OnSavePMPrescriptionListFnc(CWnd *pWnd){
	 return ((CPMPrescriptionList*)pWnd)->OnSavePMPrescriptionList();
} 
static int _OnCancelPMPrescriptionListFnc(CWnd *pWnd){
	 return ((CPMPrescriptionList*)pWnd)->OnCancelPMPrescriptionList();
} 
CPMPrescriptionList::CPMPrescriptionList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMPrescriptionList::~CPMPrescriptionList(){
}
void CPMPrescriptionList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 475, 155);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 465, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.SetCheckBox(TRUE);
	m_wndStock.Create(this,95, 60, 465, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.SetCheckBox(TRUE);
	m_wndObject.Create(this,95, 90, 465, 115); 
	m_wndGrouprLabel.Create(this, _T("Group"), 10, 120, 90, 145);
	m_wndGroup.Create(this,95, 120, 465, 145); 
	m_wndCP.Create(this, _T("CP"), 10, 160, 110, 185);
	m_wndPT.Create(this, _T("PT"), 115, 160, 215, 185);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 260, 160, 360, 185);
	m_wndExport.Create(this, _T("&Export"), 365, 160, 465, 185);
	m_wndPayable.Create(this, _T("Payable"), 10, 190, 110, 215);
	m_wndApproval.Create(this, _T("Approval"), 115, 190, 175, 215);
	m_wndDTT.Create(this, _T("\x44uy\x1EC7t \x111\xE3 th\x61nh to\xE1n"), 190, 190, 380, 215);

}
void CPMPrescriptionList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 100);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

}
void CPMPrescriptionList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndCP.SetEvent(WE_CLICK, _OnCPSelectFnc);
	m_wndPT.SetEvent(WE_CLICK, _OnPTSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPayable.SetEvent(WE_CLICK, _OnPayableSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndDTT.SetEvent(WE_CLICK, _OnDTTSelectFnc);
	m_szFromDate = pMF->GetSysDate() + _T("00:00");
	m_szToDate = pMF->GetSysDate() + _T("23:59");
	UpdateData(FALSE);

}
void CPMPrescriptionList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Check(pDX, m_wndCP.GetDlgCtrlID(), m_bCP);
	DDX_Check(pDX, m_wndPT.GetDlgCtrlID(), m_bPT);
	DDX_Radio(pDX, m_wndPayable.GetDlgCtrlID(), m_nPayable);
	DDX_Radio(pDX, m_wndApproval.GetDlgCtrlID(), m_nApproval);
	DDX_Radio(pDX, m_wndDTT.GetDlgCtrlID(), m_nDTT);

}
void CPMPrescriptionList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMPrescriptionList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPMPrescriptionList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szObjectKey.Empty();
	m_szGroupKey.Empty();
	m_bCP=TRUE;
	m_bPT=FALSE;
	m_nPayable=0;
	m_nApproval=1;
	m_nDTT=1;

}
int CPMPrescriptionList::SetMode(int nMode){
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
/*void CPMPrescriptionList::OnFromDateChange(){
	
} */
/*void CPMPrescriptionList::OnFromDateSetfocus(){
	
} */
/*void CPMPrescriptionList::OnFromDateKillfocus(){
	
} */
int CPMPrescriptionList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMPrescriptionList::OnToDateChange(){
	
} */
/*void CPMPrescriptionList::OnToDateSetfocus(){
	
} */
/*void CPMPrescriptionList::OnToDateKillfocus(){
	
} */
int CPMPrescriptionList::OnToDateCheckValue(){
	return 0;
} 
void CPMPrescriptionList::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMPrescriptionList::OnStockSelendok(){
	 
}
/*void CPMPrescriptionList::OnStockSetfocus(){
	
}*/
/*void CPMPrescriptionList::OnStockKillfocus(){
	
}*/
long CPMPrescriptionList::OnStockLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	if(m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0){
		szWhere.Format(_T(" AND msl_storage_id=%d"), ToInt(m_szStockKey));
	};
	m_wndStock.DeleteAllItems(); 
	szSQL.Format(_T("SELECT mup_stocks FROM m_userperm WHERE mup_userid = '%s'"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("mup_stocks"), tmpStr); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as productname FROM m_storagelist WHERE msl_storage_id IN(%s) %s ORDER BY msl_storage_id"), tmpStr, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("productname")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMPrescriptionList::OnStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMPrescriptionList::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMPrescriptionList::OnObjectSelendok(){
	 
}
/*void CPMPrescriptionList::OnObjectSetfocus(){
	
}*/
/*void CPMPrescriptionList::OnObjectKillfocus(){
	
}*/
long CPMPrescriptionList::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as productname FROM hms_object ORDER BY ho_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("productname")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMPrescriptionList::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMPrescriptionList::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMPrescriptionList::OnGroupSelendok(){
	 
}
/*void CPMPrescriptionList::OnGroupSetfocus(){
	
}*/
/*void CPMPrescriptionList::OnGroupKillfocus(){
	
}*/
long CPMPrescriptionList::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" AND mpc_product_category_id='%s' "), m_szGroupKey);
	};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mpc_product_category_id AS id, mpc_name AS name FROM m_product_category WHERE mpc_isactive='Y' AND mpc_org_id IN('GL','PM') %s ORDER BY mpc_product_category_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMPrescriptionList::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CPMPrescriptionList::OnCPSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bCP)
			m_bPT = FALSE;
	UpdateData(FALSE);
	
}
	void CPMPrescriptionList::OnPTSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
		if(m_bPT)
			m_bCP = FALSE;
	UpdateData(FALSE);
}
void CPMPrescriptionList::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CGuiMenu menu(this);
	CRect rect;
	int nPos = 0;
	menu.CreatePopupMenu();
	m_wndPrintPreview.GetWindowRect(&rect);
	menu.AppendMenu(MF_BYPOSITION, 1, _T("In \x63hi ti\x1EBFt"));
	menu.AppendMenu(MF_SEPARATOR);
	menu.AppendMenu(MF_BYPOSITION, 2, _T("In t\x1ED5ng h\x1EE3p"));
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnPrint1();
		break;
	case 2:
		OnPrint2();
		break;
	}
} 
void CPMPrescriptionList::OnPrint1(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, tmpStr2, szDate, szSysDate, szNewOrderID, szOldOrderID;
	if(!rpt.Init(_T("Reports/HMS/PMS_PRESCRIPTIONLISTREPORT.RPT"),true) )
	{
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	CReportSection* rptDetail = NULL;
	CReportSection*	rptGroup = NULL;
	CRecord rs(&pMF->m_db);
	
	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	long nItem = 1, nTotalOrder=0, nItemCount = 0;
	long nOrderID;
	double nTotalAmount=0,cost = 0, nAmount = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("orderid"), szNewOrderID);
		if (szNewOrderID != szOldOrderID)
		{
			if (nAmount > 0)
			{			
				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
				if (rptGroup)
				{
					TranslateString(_T("Total Amount"), tmpStr);
					rptGroup->SetValue(_T("PName"), tmpStr);
					FormatCurrency(nAmount, tmpStr);		
					rptGroup->SetValue(_T("amount"), tmpStr);
				}
				nTotalAmount += nAmount;
				nAmount = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rs.GetValue(_T("orderid"), nOrderID);
				tmpStr.Format(_T("%ld"), nOrderID);
				rptGroup->SetValue(_T("OrderID"), tmpStr);
				TranslateString(_T("Age"), tmpStr2);
				tmpStr.Format(_T("[%s]  -  %s   -   %s:%s  -  %s"), rs.GetValue(_T("docno")), rs.GetValue(_T("patientname")),tmpStr2,rs.GetValue(_T("age")), rs.GetValue(_T("doctor")));
				rptGroup->SetValue(_T("PName"), tmpStr);
				rs.GetValue(_T("doctor"), tmpStr);
				rptGroup->SetValue(_T("amount"), tmpStr);
			}
			nItemCount += nItem - 1;
			nTotalOrder++;
			szOldOrderID = szNewOrderID;
			nItem = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			tmpStr.Format(_T("%ld"), nItem++);			
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("productname"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rs.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);			
			rs.GetValue(_T("price"), tmpStr);			
			rptDetail->SetValue(_T("4"), tmpStr);
			rs.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rs.GetValue(_T("amount"), cost);
			FormatCurrency(cost, tmpStr);			
			rptDetail->SetValue(_T("6"), tmpStr);				
			nAmount +=cost;
		}
		rs.MoveNext();
	}
	if (nAmount > 0)
	{			
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
		if (rptGroup)
		{
			TranslateString(_T("Total Amount"), tmpStr);
			rptGroup->SetValue(_T("PName"), tmpStr);
			FormatCurrency(nAmount, tmpStr);		
			rptGroup->SetValue(_T("amount"), tmpStr);
		}
		nTotalAmount += nAmount;
		nAmount = 0;
	}
	nItemCount += nItem - 1;

	tmpStr.Format(_T("%ld"), nTotalOrder);
	rpt.GetReportFooter()->SetValue(_T("TotalOrder"), tmpStr);
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	FormatCurrency(nTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	tmpStr.Format(_T("%ld"), nItemCount);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
	EndWaitCursor();
} 
void CPMPrescriptionList::OnPrint2(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, tmpStr2, szDate, szSysDate, szNewOrderID, szOldOrderID;
	if(!rpt.Init(_T("Reports/HMS/PMS_PRESCRIPTIONLISTREPORT.RPT"),true) )
	{
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	CReportSection* rptDetail = NULL;
	CReportSection*	rptGroup = NULL;
	CRecord rs(&pMF->m_db);

	szSQL = GetQueryString2();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	long nItem = 1, nTotalOrder=0, nItemCount = 0;
	long nOrderID;
	double nTotalAmount=0,cost = 0, nAmount = 0;
	while(!rs.IsEOF())
	{
// 		rs.GetValue(_T("orderid"), szNewOrderID);
// 		if (szNewOrderID != szOldOrderID)
// 		{
// 			if (nAmount > 0)
// 			{			
// 				rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
// 				if (rptGroup)
// 				{
// 					TranslateString(_T("Total amount"), tmpStr);
// 					rptGroup->SetValue(_T("PName"), tmpStr);
// 					FormatCurrency(nAmount, tmpStr);		
// 					rptGroup->SetValue(_T("amount"), tmpStr);
// 				}
// 				nTotalAmount += nAmount;
// 				nAmount = 0;
// 			}
// 			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
// 			if (rptGroup)
// 			{
// 				rs.GetValue(_T("orderid"), nOrderID);
// 				tmpStr.Format(_T("%ld"), nOrderID);
// 				rptGroup->SetValue(_T("OrderID"), tmpStr);
// 				TranslateString(_T("Age"), tmpStr2);
// 				tmpStr.Format(_T("[%s]  -  %s   -   %s:%s  -  %s"), rs.GetValue(_T("docno")), rs.GetValue(_T("patientname")),tmpStr2,rs.GetValue(_T("age")), rs.GetValue(_T("doctor")));
// 				rptGroup->SetValue(_T("PName"), tmpStr);
// 				rs.GetValue(_T("doctor"), tmpStr);
// 				rptGroup->SetValue(_T("amount"), tmpStr);
// 			}
// 			nItemCount += nItem - 1;
// 			nTotalOrder++;
// 			szOldOrderID = szNewOrderID;
// 			nItem = 1;
// 		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			tmpStr.Format(_T("%ld"), nItem++);			
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("productname"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rs.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);			
			rs.GetValue(_T("price"), tmpStr);			
			rptDetail->SetValue(_T("4"), tmpStr);
			rs.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rs.GetValue(_T("amount"), cost);
			FormatCurrency(cost, tmpStr);			
			rptDetail->SetValue(_T("6"), tmpStr);				
			nAmount +=cost;
		}
		rs.MoveNext();
	}
	if (nAmount > 0)
	{			
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));	
		if (rptGroup)
		{
			TranslateString(_T("Total Amount"), tmpStr);
			rptGroup->SetValue(_T("PName"), tmpStr);
			FormatCurrency(nAmount, tmpStr);		
			rptGroup->SetValue(_T("amount"), tmpStr);
		}
		nTotalAmount += nAmount;
		nAmount = 0;
	}
	nItemCount += nItem - 1;

// 	tmpStr.Format(_T("%ld"), nTotalOrder);
// 	rpt.GetReportFooter()->SetValue(_T("TotalOrder"), tmpStr);
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	FormatCurrency(nTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	tmpStr.Format(_T("%ld"), nItemCount);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
	EndWaitCursor();
} 
void CPMPrescriptionList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CGuiMenu menu(this);
	CRect rect;
	int nPos = 0;
	menu.CreatePopupMenu();
	m_wndPrintPreview.GetWindowRect(&rect);
	menu.AppendMenu(MF_BYPOSITION, 1, _T("\x58u\x1EA5t \x63hi ti\x1EBFt"));
	menu.AppendMenu(MF_SEPARATOR);
	menu.AppendMenu(MF_BYPOSITION, 2, _T("\x58u\x1EA5t t\x1ED5ng h\x1EE3p"));
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport1();
		break;
	case 2:
		OnExport2();
		break;
	}	
} 
void CPMPrescriptionList::OnExport1(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, tmpStr2, szTemp, szWhere, szNewOrderID, szOldOrderID;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 12);
	xls.SetColumnWidth(1, 40);
	xls.SetColumnWidth(2, 14);
	xls.SetColumnWidth(3, 14);
	xls.SetColumnWidth(4, 14);
	xls.SetColumnWidth(5, 30);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);	

	xls.SetCellText(0, 2, _T("\x42\x1EA2NG K\xCA \x110\x1A0N THU\x1ED0\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("T\xEAn thu\x1ED1\x63/H\xE0m l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("\x110VT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 5);
	xls.SetMerge(3, 3, 0, 5);

	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	nRow = 5;
	nCol = 0;
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	long nItem = 1, nTotalOrder=0, nItemCount = 0;
	long nOrderID;
	double nTotalAmount=0,cost = 0, nAmount = 0;
	while(!rs.IsEOF()){
		rs.GetValue(_T("orderid"), szNewOrderID);
		if (szNewOrderID != szOldOrderID)
		{
			if (nAmount > 0)
			{	
				xls.SetCellMergedColumns(nCol, nRow, 5);
				xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_RIGHT, true);				
				xls.SetCellText(nCol+5, nRow, double2str(nAmount), FMT_NUMBER1, true);
				nTotalAmount += nAmount;
				nAmount = 0;
				nRow++;
			}
			rs.GetValue(_T("orderid"), nOrderID);
			tmpStr.Format(_T("%ld"), nOrderID);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
			TranslateString(_T("Age"), tmpStr2);
			tmpStr.Format(_T("[%s]  -  %s   -   %s:%s  -  %s"), rs.GetValue(_T("docno")), rs.GetValue(_T("patientname")),tmpStr2,rs.GetValue(_T("age")), rs.GetValue(_T("doctor")));
			xls.SetCellMergedColumns(nCol+1, nRow, 4);
			xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT, true);
			rs.GetValue(_T("doctor"), tmpStr);
			xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT, true);
			nItemCount += nItem - 1;
			nTotalOrder++;
			szOldOrderID = szNewOrderID;
			nItem = 1;
			nRow++;
		}
		tmpStr.Format(_T("%ld"), nItem++);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("productname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("price"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("qty"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("amount"), cost);
		nAmount +=cost;
		xls.SetCellText(nCol+5, nRow, double2str(cost), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (nAmount > 0)
	{	
		xls.SetCellMergedColumns(nCol, nRow, 5);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_RIGHT, true);			
		xls.SetCellText(nCol+5, nRow, double2str(nAmount), FMT_NUMBER1, true);
		nTotalAmount += nAmount;
		nAmount = 0;
		nRow++;
	}
	nItemCount += nItem - 1;
	xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng s\x1ED1 \x111\x1A1n"), FMT_TEXT, true);
	tmpStr.Format(_T("%ld"), nTotalOrder);
	xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1, true);
	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng s\x1ED1 kho\x1EA3n"), FMT_TEXT, true);
	tmpStr.Format(_T("%ld"), nItemCount);
	xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1, true);
	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng s\x1ED1 ti\x1EC1n"), FMT_TEXT, true);
	xls.SetCellText(nCol+2, nRow, double2str(nTotalAmount), FMT_NUMBER1, true);
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang ke don thuoc tong hop.xls"));
} 
void CPMPrescriptionList::OnExport2(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, tmpStr2, szTemp, szWhere, szNewOrderID, szOldOrderID;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 12);
	xls.SetColumnWidth(1, 40);
	xls.SetColumnWidth(2, 14);
	xls.SetColumnWidth(3, 14);
	xls.SetColumnWidth(4, 14);
	xls.SetColumnWidth(5, 30);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);	

	xls.SetCellText(0, 2, _T("\x42\x1EA2NG K\xCA \x110\x1A0N THU\x1ED0\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("T\xEAn thu\x1ED1\x63/H\xE0m l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("\x110VT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 5);
	xls.SetMerge(3, 3, 0, 5);

	szSQL = GetQueryString2();
	int nCount = rs.ExecSQL(szSQL);
	nRow = 5;
	nCol = 0;
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	long nItem = 1, nTotalOrder=0, nItemCount = 0;
	long nOrderID;
	double nTotalAmount=0,cost = 0, nAmount = 0;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%ld"), nItem++);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("productname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("price"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("qty"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("amount"), cost);
		nAmount +=cost;
		xls.SetCellText(nCol+5, nRow, double2str(cost), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (nAmount > 0)
	{	
		xls.SetCellMergedColumns(nCol, nRow, 5);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_RIGHT, true);			
		xls.SetCellText(nCol+5, nRow, double2str(nAmount), FMT_NUMBER1, true);
		nTotalAmount += nAmount;
		nAmount = 0;
		nRow++;
	}
	nItemCount += nItem - 1;
	xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng s\x1ED1 kho\x1EA3n"), FMT_TEXT, true);
	tmpStr.Format(_T("%ld"), nItemCount);
	xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1, true);
	nRow++;
	xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng s\x1ED1 ti\x1EC1n"), FMT_TEXT, true);
	xls.SetCellText(nCol+2, nRow, double2str(nTotalAmount), FMT_NUMBER1, true);
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang ke don thuoc chi tiet.xls"));
} 
void CPMPrescriptionList::OnPayableSelect(){
	
}
void CPMPrescriptionList::OnApprovalSelect(){
	
}
void CPMPrescriptionList::OnDTTSelect(){

}
int CPMPrescriptionList::OnAddPMPrescriptionList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMPrescriptionList::OnEditPMPrescriptionList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMPrescriptionList::OnDeletePMPrescriptionList(){
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
 		OnCancelPMPrescriptionList();
 	}
	return 0;
}
int CPMPrescriptionList::OnSavePMPrescriptionList(){
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
 		//OnPMPrescriptionListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMPrescriptionList::OnCancelPMPrescriptionList(){
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
int CPMPrescriptionList::OnPMPrescriptionListListLoadData(){
	return 0;
}
CString CPMPrescriptionList::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szStorages, szObjects;

	if(m_nPayable == 0)
		{
			szWhere.AppendFormat(_T(" AND hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		}
	if(m_nApproval == 0)
		{
			szWhere.AppendFormat(_T(" AND hfe_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		}
	if(m_nDTT == 0)
	{
		szWhere.AppendFormat(_T(" AND hfe_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND hfe_status = 'P'"), m_szFromDate, m_szToDate);
	}

	if(m_bCP == TRUE)
		{
			szWhere.AppendFormat(_T(" AND hpo_feetype IN('CP')"));
		}
	if(m_bPT == TRUE)
		{
			szWhere.AppendFormat(_T(" AND hpo_feetype IN('PT')"));
		}

	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorages);
	}

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpo_object_id IN (%s)"), szObjects);
	}
	if (!m_szGroupKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND product_categoryid = %s"), m_szGroupKey);
	}
			

	szSQL.Format(_T(" SELECT") \
		_T(" hpol_orderid AS orderid,") \
		_T(" hpo_docno AS docno,") \
		_T(" get_patientname(hpo_docno) AS patientname,") \
		_T(" hms_getagebydoc(hpo_docno) AS age,") \
		_T(" get_username(hpo_doctor) AS doctor,") \
		_T(" product_name AS productname,") \
		_T(" GET_UOMNAME(product_purchase_uomid) AS unit, ") \
		_T(" hpol_unitprice AS price, ") \
		_T(" hpol_qtyissue AS qty, ") \
		_T(" SUM(hpol_qtyissue * hpol_unitprice) AS amount") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_fee_invoice") \
		_T(" ON(hfe_docno      = hpo_docno") \
		_T(" AND hfe_invoiceno = hpo_invoiceno)") \
		_T(" LEFT JOIN hms_pharmaorderline") \
		_T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(product_item_id   = hpol_product_item_id)") \
		_T(" WHERE product_org_id = 'PM' %s") \
		_T(" GROUP BY") \
		_T(" hpol_orderid,") \
		_T(" hpo_docno,") \
		_T(" hpo_doctor,") \
		_T(" product_name,") \
		_T(" product_purchase_uomid, ") \
		_T(" hpol_unitprice, ") \
		_T(" hpol_qtyissue") \
		_T(" ORDER BY") \
		_T(" hpol_orderid,") \
		_T(" hpo_docno,") \
		_T(" hpo_doctor,") \
		_T(" product_name,") \
		_T(" product_purchase_uomid, ") \
		_T(" hpol_unitprice, ") \
		_T(" hpol_qtyissue"), szWhere);

	return szSQL;
}

CString CPMPrescriptionList::GetQueryString2(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szStorages, szObjects;

	if(m_nPayable == 0)
	{
		szWhere.AppendFormat(_T(" AND hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}
	if(m_nApproval == 0)
	{
		szWhere.AppendFormat(_T(" AND hfe_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}
	if(m_nDTT == 0)
	{
		szWhere.AppendFormat(_T(" AND hfe_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND hfe_status = 'P'"), m_szFromDate, m_szToDate);
	}

	if(m_bCP == TRUE)
	{
		szWhere.AppendFormat(_T(" AND hpo_feetype IN('CP')"));
	}
	if(m_bPT == TRUE)
	{
		szWhere.AppendFormat(_T(" AND hpo_feetype IN('PT')"));
	}

	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorages);
	}

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpo_object_id IN (%s)"), szObjects);
	}


	if (!m_szGroupKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND product_categoryid = %s"), m_szGroupKey);
	}
	szSQL.Format(_T(" SELECT") \
		_T("   product_name                        AS productname,") \
		_T("   GET_UOMNAME(product_purchase_uomid)              AS unit,") \
		_T("   hpol_unitprice                      AS price,") \
		_T("   SUM(hpol_qtyissue)                  AS qty,") \
		_T("   SUM(hpol_qtyissue * hpol_unitprice) AS amount") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_fee_invoice") \
		_T(" ON(hfe_docno      = hpo_docno") \
		_T(" AND hfe_invoiceno = hpo_invoiceno)") \
		_T(" LEFT JOIN hms_pharmaorderline") \
		_T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(product_item_id   = hpol_product_item_id)") \
		_T(" WHERE product_org_id = 'PM' %s") \
		_T(" GROUP BY") \
		_T("   product_name,") \
		_T("   product_purchase_uomid,") \
		_T("   hpol_unitprice") \
		_T(" ORDER BY") \
		_T("   product_name,") \
		_T("   unit,") \
		_T("   hpol_unitprice"), szWhere);

	return szSQL;
}