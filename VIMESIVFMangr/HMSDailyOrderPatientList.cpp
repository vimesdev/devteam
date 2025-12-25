#include "HMSDailyOrderPatientList.h"
#include "MainFrm.h"
#include "HMSReportForms/PrintForms.h"
#include "HMSReportForms/PatientProfileDialog.h"
#include "HMSDailyOrderView.h"


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyOrderPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnListDeleteItem();
}

static int _OnAddPatientFromPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnAddPatientFromPrescription();
}

static int _OnUndoPatientPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnUndoPatientPrescription();
}


static int _OnPreviewDrugLogFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnPreviewDrugLog();
}
static int _OnPrintDecoctionPrescriptionFnc(CWnd *pWnd){
	 ((CHMSDailyOrderPatientList*)pWnd)->OnPrintDecoctionPrescription();
	 return 0;
}

static int _OnPrintPhieuTruyenDichVaSuDungThuocFnc(CWnd *pWnd){
	 ((CHMSDailyOrderPatientList*)pWnd)->OnPrintPhieuTruyenDichVaSuDungThuoc();
	 return 0;
}

static int _OnPatientListIssueAllFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnPatientListIssueAll();
} 

static int _OnPatientListIssueFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnPatientListIssue();
} 

static int _OnPatientListRollbackFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnPatientListRollback();
} 


/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderPatientList *)pWnd)->OnSearchCheckValue();
} 
/*static void _OnTotalItemsChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnTotalItemsChange();
} */
/*static void _OnTotalItemsSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnTotalItemsSetfocus();} */ 
/*static void _OnTotalItemsKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderPatientList *)pWnd)->OnTotalItemsKillfocus();
} */
static int _OnTotalItemsCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderPatientList *)pWnd)->OnTotalItemsCheckValue();
} 
static int _OnAddHMSDailyOrderPatientListFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnAddHMSDailyOrderPatientList();
} 
static int _OnEditHMSDailyOrderPatientListFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnEditHMSDailyOrderPatientList();
} 
static int _OnDeleteHMSDailyOrderPatientListFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnDeleteHMSDailyOrderPatientList();
} 
static int _OnSaveHMSDailyOrderPatientListFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnSaveHMSDailyOrderPatientList();
} 
static int _OnCancelHMSDailyOrderPatientListFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderPatientList*)pWnd)->OnCancelHMSDailyOrderPatientList();
} 
CHMSDailyOrderPatientList::CHMSDailyOrderPatientList(){

	m_nDlgWidth = 405;
	m_nDlgHeight = 400;
	SetDefaultValues();
	m_wndDailyOrderBatch = NULL;
}
CHMSDailyOrderPatientList::~CHMSDailyOrderPatientList(){
}
void CHMSDailyOrderPatientList::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 385, 355); 
	m_wndSearchLabel.Create(this, _T("Search"), 5, 360, 85, 385);
	m_wndSearch.Create(this,90, 360, 230, 385); 
	m_wndTotalItemsLabel.Create(this, _T("Total Patient"), 235, 360, 325, 385);
	m_wndTotalItems.Create(this,330, 360, 385, 385); 
}
void CHMSDailyOrderPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);
	m_wndTotalItems.SetLimitText(16);
	
//	m_wndTotalItems.SetCheckValue(true);

	
	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);	//orderid
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(3, _T("Bed"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(4, _T("Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(5, _T("Status"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndList.InsertColumn(6, _T("OrderNo"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(7, _T("Doctor"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(8, _T("Created By"), CFMT_TEXT, 0);


}
void CHMSDailyOrderPatientList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Add patient from prescription"), _OnAddPatientFromPrescriptionFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Undo patient prescription"), _OnUndoPatientPrescriptionFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Preview drug logs"), _OnPreviewDrugLogFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Print Decoction Prescription"), _OnPrintDecoctionPrescriptionFnc);

	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("In phi\x1EBFu truy\x1EC1n \x64\x1ECB\x63h v\xE0 s\x1EED \x64\x1EE5ng thu\x1ED1\x63"), _OnPrintPhieuTruyenDichVaSuDungThuocFnc);

	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	//m_wndTotalItems.SetEvent(WE_CHANGE, _OnTotalItemsChangeFnc);
	//m_wndTotalItems.SetEvent(WE_SETFOCUS, _OnTotalItemsSetfocusFnc);
	//m_wndTotalItems.SetEvent(WE_KILLFOCUS, _OnTotalItemsKillfocusFnc);
	m_wndTotalItems.SetEvent(WE_CHECKVALUE, _OnTotalItemsCheckValueFnc);
	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDailyOrderPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDailyOrderPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDailyOrderPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDailyOrderPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDailyOrderPatientListFnc, 0, 'T', VK_CONTROL);
	*/
	SetMode(VM_VIEW);

}
void CHMSDailyOrderPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndTotalItems.GetDlgCtrlID(), m_nTotalItems);

}
void CHMSDailyOrderPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyOrderPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyOrderPatientList::SetDefaultValues(){

	m_szSearch.Empty();
	m_nTotalItems=0;

}
int CHMSDailyOrderPatientList::SetMode(int nMode){
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
 			EnableControls(FALSE);
 			EnableButtons(FALSE, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
		m_wndSearch.EnableWindow(TRUE);
 		return nOldMode;
}
void CHMSDailyOrderPatientList::OnListDblClick(){
	OnPatientListIssueAll();
} 
void CHMSDailyOrderPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_szIssueState = m_wndList.GetItemText(nNewItem, 5);
	m_szDoctor = m_wndList.GetItemText(nNewItem, 7);
	m_nDocumentNo = str2long(m_wndList.GetItemText(nNewItem, 1));
	m_szPatientOrderDate = m_wndList.GetItemText(nNewItem, 4);
	m_szOrderStatus = m_wndList.GetItemText(nNewItem, 5);
//	OnDrugListLoadData();
	if(m_wndDailyOrderBatch)
	{
		((CHMSDailyOrderView*) m_wndDailyOrderBatch)->LoadDrugList(m_nDocumentNo, m_szPatientOrderDate);
	}
} 
int CHMSDailyOrderPatientList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL, szMsg, szDate;
	
	
	/*if(m_wndDrugList.GetItemCount() > 0){
		ShowMessageBox(_T("Ban phai xoa thuoc truoc khi xoa benh nhan"));
		return 0;
	}*/
	
	int nOrderid, nReforderid;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return -1;
	nReforderid = ToLong(m_wndList.GetItemText(nSel, 6));
	nOrderid = ToLong(m_wndList.GetItemText(nSel, 0));
	szDate = m_wndList.GetItemText(nSel, 4);

	szMsg.Format(_T("T\xE1\x63 v\x1EE5 n\xE0y s\x1EBD \x78\xF3\x61 to\xE0n \x62\x1ED9 thu\x1ED1\x63 \x63\x1EE7\x61 \x62\x1EC7nh nh\xE2n trong ng\xE0y [%s]."), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));

 	if(ShowMessageBox(szMsg, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("SELECT mt_status as status FROM m_transaction WHERE mt_transaction_id=%ld and mt_doctype='DMO' "), nReforderid);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);

	if(m_szStatus != _T("O"))
		return -1;

	szSQL.Format(_T("HMS_IPHARMAORDER_DELETE(%ld, '%s') "), nOrderid, pMF->GetCurrentUser()); 
	//_fmsg(_T("%s"), szSQL);	
 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
		OnListLoadData();
		//OnOrderListLoadData();
 	}
	
	return 0;
} 
long CHMSDailyOrderPatientList::OnListLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere;
	
	UpdateData(true);

	szWhere.Format(_T(" and hpo_transaction_id in(%s) "), m_szTransactionString);
	m_wndList.BeginLoad(); 
	
	m_nTotalItems = 0;
	int nCount = 0, nIndex =1;
	

	szSQL.Format(_T(" SELECT distinct hpo_docno as docno,") \
	_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
	_T(" 	hpo_roomid||'.'||hpo_bedid as bedid,") \
	_T(" 	trunc_date(hpo_orderdate) as orderdate ") \
	_T(" FROM hms_ipharmaorder ") \
	_T(" LEFT JOIN hms_doc ON(hd_docno=hpo_docno) ") \
	_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
	_T(" WHERE hpo_ordertype='D' %s ORDER BY docno,orderdate "), szWhere);
	
	nCount = rs.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);
	
	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	CString szNewLine, szOldLine;
	if(!m_szSearch.IsEmpty())
	{
		StringLower(m_szSearch, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}
	long nDocumentNo;
	int n = -1;
	while(!rs.IsEOF()){

		rs.GetValue(_T("pname"), tmpStr);
		if(!m_szSearch.IsEmpty()){

				CString szPatientName;
				
				StringLower(tmpStr, szPatientName);

				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szSearch)
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

		rs.GetValue(_T("docno"), nDocumentNo);
		tmpStr.Format(_T("%d"), nIndex++);
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("bedid")), 
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("orderstatus")), 
			rs.GetValue(_T("reforderid")), 
			rs.GetValue(_T("doctor")), 
			rs.GetValue(_T("createdby")), 
			NULL);

		/*if(nDocumentNo == m_nDocumentNo)
		{
			m_wndList.SetItemBkColor(nItem, RGB(0, 128, 192), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			n = nItem;
		}*/

		szNewLine.Format(_T("%d"), nDocumentNo);
		if(szNewLine !=szOldLine && !szNewLine.IsEmpty()){
			m_nTotalItems++;
			szOldLine = szNewLine;
		}
		rs.MoveNext();
	}
	
	m_wndList.EndLoad(); 
	if(n < 0)
		n = m_wndList.GetItemCount();
	
	m_wndList.SetCurSel(n);
	
	UpdateData(false);
	return nCount;
}


int CHMSDailyOrderPatientList::OnPatientListIssueAll(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();	
	CString szTransactionIDS;
	for(int i =0; i < m_transaction_orders.GetCount(); i++)
	{
		if(!szTransactionIDS.IsEmpty())
			szTransactionIDS.AppendFormat(_T(","));
		szTransactionIDS.AppendFormat(_T("%d"), m_transaction_orders[i]);		
	}
	CPrintForms printer;
	printer.PM_PrintDailyMaterialAndDrugsOfPatient(m_nDocumentNo, _T("GL"), szTransactionIDS);
	return 0;


	//CString szSQL;
	//CRecord rs(&pMF->m_db);

	//int nMsg = ShowMessage(14);
	//if(nMsg == IDNO)
	//	return 0;
	//
	//szSQL.Format(_T("SELECT mt_status as status ") \
	//	_T("FROM m_transaction ") \
	//	_T("WHERE mt_transaction_id=%ld and mt_ordertype='T' "), m_nBatchID);
	//rs.ExecSQL(szSQL);
	//if(rs.IsEOF())
	//	return -1;
	//rs.GetValue(_T("status"), m_szStatus);

	//if(m_szStatus != _T("A"))
	//	return -1;


	//szSQL.Format(_T("UPDATE hms_ipharmaorder ") \
	//	_T("SET hpo_orderstatus='I', hpo_updatedby='%s', hpo_updateddate=systimestamp ") \
	//	_T("WHERE hpo_transaction_id=%ld AND hpo_orderstatus in('O','S','A') "),
	//	pMF->GetCurrentUser(), m_nBatchID);
	//int ret = pMF->ExecSQL(szSQL);
	//if(ret >= 0){
	//	OnPatientListLoadData();
	//}
	return 0;
}


int CHMSDailyOrderPatientList::OnPatientListIssue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	int nMsg = ShowMessage(15);
	if(nMsg == IDNO)
		return 0;

	szSQL.Format(_T("SELECT mt_status as status ") \
		_T("FROM m_transaction ") \
		_T("WHERE mt_transaction_id=%ld and mt_ordertype='T' "), m_nBatchID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);


	if(m_szStatus != _T("A"))
		return -1;



	//szSQL.Format(_T("UPDATE hms_ipharmaorder ") \
	//	_T("SET hpo_orderstatus='I', hpo_updatedby='%s', hpo_updateddate=systimestamp ") \
	//	_T("WHERE hpo_orderid=%ld AND hpo_orderstatus in('O','S','A') "),
	//	pMF->GetCurrentUser(), m_nPharmaOID);
	//int ret = pMF->ExecSQL(szSQL);
	//if(ret >= 0){
	//	OnPatientListLoadData();
	//	pMF->CreateFees(_T("D"));
	//}
	return 0;
}

int CHMSDailyOrderPatientList::OnPatientListRollback(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	if(m_szStatus != _T("A"))
		return -1;
	int nMsg = ShowMessage(16);
	if(nMsg == IDNO)
		return 0;

	//szSQL.Format(_T("UPDATE hms_ipharmaorder SET hpo_orderstatus='A', hpo_updatedby='%s', hpo_updateddate=systimestamp ") \
	//	_T("WHERE hpo_orderid=%ld AND hpo_orderstatus='I' AND hpo_payment<>'P'"),
	//	pMF->GetCurrentUser(), m_nPharmaOID);
	//int ret = pMF->ExecSQL(szSQL);
	//if(ret >= 0){
	//	OnPatientListLoadData();
	//}
	return 0;
}

/*void CHMSDailyOrderPatientList::OnSearchChange(){
	
} */
/*void CHMSDailyOrderPatientList::OnSearchSetfocus(){
	
} */
/*void CHMSDailyOrderPatientList::OnSearchKillfocus(){
	
} */
int CHMSDailyOrderPatientList::OnSearchCheckValue(){
	m_nDocumentNo = 0;
	OnListLoadData();
	return 1;
} 
/*void CHMSDailyOrderPatientList::OnTotalItemsChange(){
	
} */
/*void CHMSDailyOrderPatientList::OnTotalItemsSetfocus(){
	
} */
/*void CHMSDailyOrderPatientList::OnTotalItemsKillfocus(){
	
} */
int CHMSDailyOrderPatientList::OnTotalItemsCheckValue(){
	return 0;
} 
int CHMSDailyOrderPatientList::OnAddHMSDailyOrderPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDailyOrderPatientList::OnEditHMSDailyOrderPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDailyOrderPatientList::OnDeleteHMSDailyOrderPatientList(){
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
 		OnCancelHMSDailyOrderPatientList();
 	}
	return 0;
}
int CHMSDailyOrderPatientList::OnSaveHMSDailyOrderPatientList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnHMSDailyOrderPatientListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDailyOrderPatientList::OnCancelHMSDailyOrderPatientList(){
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
int CHMSDailyOrderPatientList::OnHMSDailyOrderPatientListListLoadData(){
	return 0;
}

void CHMSDailyOrderPatientList::Select(long nDocumentNo){
	m_nDocumentNo = nDocumentNo;
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		long docno = str2long(m_wndList.GetItemText(i, 1));
		if(docno == m_nDocumentNo)
		{
			m_wndList.SetCurSel(i);
			_tprintf(_T("\r\n%ld: %ld"), docno, nDocumentNo);
			if(nDocumentNo == docno)
			{
				m_wndList.SetItemBkColor(i, RGB(0, 128, 192), FALSE);
				m_wndList.SetItemTextColor(i, RGB(255, 255, 255), TRUE);
			}
			break;
		}
	}
}


#include "HMSTreatmentPrescriptionListDialog.h"
int CHMSDailyOrderPatientList::OnAddPatientFromPrescription(){

	CString szStatus = GetBatchStatus();
	if(szStatus != _T("O"))
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}

	CHMSTreatmentPrescriptionListDialog dlg(this);
	dlg.m_szOrderDate = m_szOrderDate;
	dlg.m_nBatchId = m_nBatchID;
	dlg.m_szBatchNo = m_szBatchNo;
	dlg.m_szOrderType = m_szOrderType;

	if(dlg.DoModal() == IDOK)
	{
		((CHMSDailyOrderView*) m_wndDailyOrderBatch)->GetDataToScreen();
		
	}
	return 0;
}



int CHMSDailyOrderPatientList::OnUndoPatientPrescription(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

	CString szSQL;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	long nDocumentNo = str2long(m_wndList.GetItemText(nSel, 1));
	szSQL.Format(_T("HMS_IPHARMAORDER_UNDOTRANS_V5(%ld, %ld, '%s') "), m_nBatchID, nDocumentNo, pMF->GetCurrentUser());
	int ret = ShowMessageBox(_T("\x42\x1EA1n \x63\xF3 mu\x1ED1n kh\xF4i ph\x1EE5\x63 l\x1EA1i \x111\x1A1n thu\x1ED1\x63 kh\xF4ng?"), MB_YESNO);
	if(ret == IDOK)
		return 0;

	ret = str2int(pMF->ExecDML(szSQL));
	if(ret < 0)
	{
		ShowMessageBox(_T("Kh\xF4ng th\x1EC3 kh\xF4i ph\x1EE5\x63 \x111\x1B0\x1EE3\x63"));
		return -1;
	}
	((CHMSDailyOrderView*) m_wndDailyOrderBatch)->GetDataToScreen();
	return 0;
}


int CHMSDailyOrderPatientList::OnPreviewDrugLog(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;

	long docno = str2long(m_wndList.GetItemText(nSel, 1));
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CPatientProfileDialog dlg(pMF, docno);
	dlg.DoModal();
	return 0;
}

void CHMSDailyOrderPatientList::OnPrintDecoctionPrescription(){
	CPrintForms printer;
	printer.TM_OnPrintDecoctionPrescription(m_nDocumentNo, m_nBatchID);
}

void CHMSDailyOrderPatientList::OnPrintPhieuTruyenDichVaSuDungThuoc(){
	CPrintForms printer;
	printer.TM_OnPrintPhieuTDSDCongKhaiThuoc(m_nBatchID, m_nDocumentNo, m_szOrderDate.Left(10), 0);
}

void CHMSDailyOrderPatientList::OnResizeLayout()
{
	AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100,&m_wndList,NULL);
	AddLayoutControls(WS_REPOSY, 0, 100, 0, 0,&m_wndSearchLabel,&m_wndSearch,&m_wndTotalItemsLabel,&m_wndTotalItems,NULL);

}

CString CHMSDailyOrderPatientList::GetBatchStatus()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT mtb_status FROM m_transaction_batch WHERE mtb_transaction_batch_id=%ld"), m_nBatchID);
	rs.ExecSQL(szSQL);
	szStatus.Empty();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mtb_status"), szStatus);
	}
	return szStatus;

}