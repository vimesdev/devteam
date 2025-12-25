#include "PACSInpackageMaterialView.h"
#include "MainFrm.h"
static void _OnWaittingSelectFnc(CWnd *pWnd){
	  ((CPACSInpackageMaterialView*)pWnd)->OnWaittingSelect();
}
static void _OnPerformedSelectFnc(CWnd *pWnd){
	  ((CPACSInpackageMaterialView*)pWnd)->OnPerformedSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSInpackageMaterialView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSInpackageMaterialView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSInpackageMaterialView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSInpackageMaterialView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSInpackageMaterialView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSInpackageMaterialView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSInpackageMaterialView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSInpackageMaterialView *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CPACSInpackageMaterialView *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CPACSInpackageMaterialView *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CPACSInpackageMaterialView *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CPACSInpackageMaterialView *)pWnd)->OnSearchCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CPACSInpackageMaterialView *pVw = (CPACSInpackageMaterialView *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPACSInpackageMaterialView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPACSInpackageMaterialView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSInpackageMaterialView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSInpackageMaterialView*)pWnd)->OnListDeleteItem();
} 
static long _OnMaterialListLoadDataFnc(CWnd *pWnd){
	return ((CPACSInpackageMaterialView*)pWnd)->OnMaterialListLoadData();
} 
static void _OnMaterialListDblClickFnc(CWnd *pWnd){
	((CPACSInpackageMaterialView*)pWnd)->OnMaterialListDblClick();
} 
static void _OnMaterialListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSInpackageMaterialView*)pWnd)->OnMaterialListSelectChange(nOldItem, nNewItem);
} 
static int _OnMaterialListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSInpackageMaterialView*)pWnd)->OnMaterialListDeleteItem();
} 
static void _OnAddMaterialSelectFnc(CWnd *pWnd){
	CPACSInpackageMaterialView *pVw = (CPACSInpackageMaterialView *)pWnd;
	pVw->OnAddMaterialSelect();
} 

static void _OnCheckAllSelectFnc(CWnd *pWnd){
	CPACSInpackageMaterialView *pVw = (CPACSInpackageMaterialView *)pWnd;
	pVw->OnCheckAllSelect();
} 
static int _OnAddPACSInpackageMaterialViewFnc(CWnd *pWnd){
	 return ((CPACSInpackageMaterialView*)pWnd)->OnAddPACSInpackageMaterialView();
} 
static int _OnEditPACSInpackageMaterialViewFnc(CWnd *pWnd){
	 return ((CPACSInpackageMaterialView*)pWnd)->OnEditPACSInpackageMaterialView();
} 
static int _OnDeletePACSInpackageMaterialViewFnc(CWnd *pWnd){
	 return ((CPACSInpackageMaterialView*)pWnd)->OnDeletePACSInpackageMaterialView();
} 
static int _OnSavePACSInpackageMaterialViewFnc(CWnd *pWnd){
	 return ((CPACSInpackageMaterialView*)pWnd)->OnSavePACSInpackageMaterialView();
} 
static int _OnCancelPACSInpackageMaterialViewFnc(CWnd *pWnd){
	 return ((CPACSInpackageMaterialView*)pWnd)->OnCancelPACSInpackageMaterialView();
} 
CPACSInpackageMaterialView::CPACSInpackageMaterialView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPACSInpackageMaterialView::~CPACSInpackageMaterialView(){
}
void CPACSInpackageMaterialView::OnCreateComponents(){
	m_wndOrderList.Create(this, _T("Order List"), 5, 65, 1015, 410);
	m_wndWaitting.Create(this, _T("Waitting"), 10, 30, 85, 55);
	m_wndPerformed.Create(this, _T("Performed"), 90, 30, 185, 55);
	m_wndFromDateLabel.Create(this, _T("From Date"), 200, 30, 300, 55);
	m_wndFromDate.Create(this,305, 30, 415, 55); 
	m_wndStatus.Create(this, _T("Status"), 5, 5, 190, 60);
	m_wndSearchInformation.Create(this, _T("Search Information"), 195, 5, 1015, 60);
	m_wndToDateLabel.Create(this, _T("To Date"), 420, 30, 520, 55);
	m_wndToDate.Create(this,525, 30, 635, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 640, 30, 720, 55);
	m_wndSearch.Create(this,725, 30, 930, 55); 
	m_wndRefresh.Create(this, _T("&Refresh"), 935, 30, 1010, 55);
	m_wndList.Create(this,10, 90, 1010, 405); 
	m_wndMaterialList.Create(this,4, 415, 1014, 560); 
	m_wndAddMaterial.Create(this, _T("Add Material"), 900, 565, 1016, 590);
	m_wndList.SetCheckBox();
	m_wndCheckAll.Create(this, _T("Check All"), 5, 565, 100, 590);
}
void CPACSInpackageMaterialView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("DocNo"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Order ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("orderlineid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(5, _T("itemid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(6, _T("Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(7, _T("Perform Date"), CFMT_TEXT, 150);


	m_wndMaterialList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndMaterialList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndMaterialList.InsertColumn(2, _T("Uom"), CFMT_TEXT, 80);
	m_wndMaterialList.InsertColumn(3, _T("Qty"), CFMT_TEXT, 80);

}
void CPACSInpackageMaterialView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWaitting.SetEvent(WE_CLICK, _OnWaittingSelectFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMaterialList.SetEvent(WE_SELCHANGE, _OnMaterialListSelectChangeFnc);
	m_wndMaterialList.SetEvent(WE_LOADDATA, _OnMaterialListLoadDataFnc);
	m_wndMaterialList.SetEvent(WE_DBLCLICK, _OnMaterialListDblClickFnc);
	m_wndMaterialList.AddEvent(1, _T("Delete"), _OnMaterialListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddMaterial.SetEvent(WE_CLICK, _OnAddMaterialSelectFnc);
	m_wndCheckAll.SetEvent(WE_CLICK, _OnCheckAllSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T(" 23:59");
	UpdateData(FALSE);

}
void CPACSInpackageMaterialView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndWaitting.GetDlgCtrlID(), m_nWaitting);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndCheckAll.GetDlgCtrlID(), m_bCheckAll);
}
void CPACSInpackageMaterialView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Waitting")] =  m_nWaitting;
	m_jData[_T("Performed")] =  m_nPerformed;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("Waitting")].GetValue(m_nWaitting);
	m_jData[_T("Performed")].GetValue(m_nPerformed);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CPACSInpackageMaterialView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSInpackageMaterialView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPACSInpackageMaterialView::SetDefaultValues(){

	m_nWaitting=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();
	m_bCheckAll = FALSE;
}
int CPACSInpackageMaterialView::SetMode(int nMode){
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
void CPACSInpackageMaterialView::OnWaittingSelect(){
	UpdateData();
	OnListLoadData();
}
void CPACSInpackageMaterialView::OnPerformedSelect(){
	UpdateData();
	OnListLoadData();	
}
/*void CPACSInpackageMaterialView::OnFromDateChange(){
	
} */
/*void CPACSInpackageMaterialView::OnFromDateSetfocus(){
	
} */
/*void CPACSInpackageMaterialView::OnFromDateKillfocus(){
	
} */
int CPACSInpackageMaterialView::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSInpackageMaterialView::OnToDateChange(){
	
} */
/*void CPACSInpackageMaterialView::OnToDateSetfocus(){
	
} */
/*void CPACSInpackageMaterialView::OnToDateKillfocus(){
	
} */
int CPACSInpackageMaterialView::OnToDateCheckValue(){
	return 0;
} 
/*void CPACSInpackageMaterialView::OnSearchChange(){
	
} */
/*void CPACSInpackageMaterialView::OnSearchSetfocus(){
	
} */
/*void CPACSInpackageMaterialView::OnSearchKillfocus(){
	
} */
int CPACSInpackageMaterialView::OnSearchCheckValue(){
	return 0;
} 
void CPACSInpackageMaterialView::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
void CPACSInpackageMaterialView::OnListDblClick(){
	
} 
void CPACSInpackageMaterialView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nDoc_no = str2long(m_wndList.GetItemText(nNewItem, 1));
	m_nOrder_id = str2long(m_wndList.GetItemText(nNewItem, 3));
	m_szItem_id = m_wndList.GetItemText(nNewItem, 5);
	OnMaterialListLoadData();
} 
int CPACSInpackageMaterialView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSInpackageMaterialView::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szWhere.Format(_T(" and hpc_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T(" and to_timestamp('%s 23:59:00', 'yyyy/mm/dd hh24:mi:ss')")
				, m_szFromDate, m_szToDate);
	if (m_nWaitting == 0)
	{
		szWhere.AppendFormat(_T(" and nvl(hpcl_pharma_orderid, 0) = 0 "));
	}
	if (m_nWaitting == 1)
	{
		szWhere.AppendFormat(_T(" and nvl(hpcl_pharma_orderid, 0) > 0 "));
	}
	if (!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(hpc_docno||get_patientname(hpc_docno)) like lower(chr(37)||'%s'||chr(37))"), m_szSearch);
	}
	szWhere.AppendFormat(_T(" and hpc_groupid in(select sup_permid from sys_userperm where sup_userid='%s' ) ")
		, pMF->GetCurrentUser());
	szWhere.AppendFormat(_T(" and (substr(hpc_groupid, 1,2) in('B2','B3') or substr(hpc_groupid, 1, 3) IN('B1E','B1F','B1G','B1H'))"));
	szWhere.AppendFormat(_T(" and hpc_groupid in('B3300','B3400','B3500','B3600') and hpc_pdeptid = '%s'") \
						_T(" and hpc_deptid not in ('C1.2', 'C1.3', 'TYC')")
						, pMF->GetCurrentDepartmentID());

	szSQL.Format(_T(" SELECT    hpc_docno AS docno,") \
	_T("           Get_patientname(hpc_docno) AS patientname,") \
	_T("           hpc_orderid AS orderid,") \
	_T("           hpcl_orderlineid AS orderlineid,") \
	_T("           hpcl_itemid AS itemid,") \
	_T("           (SELECT hfl_name") \
	_T("            FROM   hms_fee_list") \
	_T("            WHERE  hfl_feeid = hpcl_itemid) AS linename,") \
	_T("           To_char(hpc_performdate, 'dd/mm/yyyy hh24:mi:ss') AS performdate") \
	_T(" FROM      hms_pacsorder") \
	_T(" left join hms_pacsorderline ON ( hpc_orderid = hpcl_orderid AND hpc_docno = hpcl_docno )") \
	_T(" WHERE     hpc_status = 'T' %s") \
	_T("ORDER BY hpcl_receptno, patientname"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			int2str(nIdx++), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("patientname")), 
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("orderlineid")), 
			rs.GetValue(_T("itemid")), 
			rs.GetValue(_T("linename")), 
			rs.GetValue(_T("performdate")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CPACSInpackageMaterialView::OnMaterialListDblClick(){
	
} 
void CPACSInpackageMaterialView::OnMaterialListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSInpackageMaterialView::OnMaterialListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSInpackageMaterialView::OnMaterialListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMaterialList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	
	szSQL.Format(_T(" SELECT    hpol_productname AS productname,") \
	_T("           hpol_productuom AS uomname,") \
	_T("           hpol_qtyorder AS qty") \
	_T(" FROM      hms_pharmaorder_view") \
	_T(" left join hms_pharmaorderline_view2 ON ( hpo_orderid = hpol_orderid AND") \
	_T("                                          hpo_docno = hpol_docno )") \
	_T(" WHERE     hpo_docno = %ld and hpo_reference_id = %ld and hpo_refitem_id = '%s'")
	,m_nDoc_no, m_nOrder_id, m_szItem_id);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMaterialList.AddItems(
			int2str(nIdx++),
			rs.GetValue(_T("productname")), 
			rs.GetValue(_T("uomname")), 
			rs.GetValue(_T("qty")), NULL);
		rs.MoveNext();
	}
	m_wndMaterialList.EndLoad(); 
	return nCount;
}
void CPACSInpackageMaterialView::OnAddMaterialSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szItem_id;
	int nRet = 0;
	long nOrder_id = 0, nDoc_no = 0;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i) == FALSE)
		{
			continue;
		}
		nDoc_no = str2long(m_wndList.GetItemText(i, 1));
		nOrder_id = str2long(m_wndList.GetItemText(i, 3));
		szItem_id = m_wndList.GetItemText(i, 5);
		szSQL.Format(_T("hms_pharmaorder_createpkg_pacs('%s', '%s', %ld, %ld, '%s')")
				, pMF->GetModuleID(), pMF->GetCurrentUser(), nDoc_no
				, nOrder_id, szItem_id);
		nRet += str2int(pMF->ExecDML(szSQL));
	}
	if (nRet > 0)
	{
		OnListLoadData();
	}
} 
int CPACSInpackageMaterialView::OnAddPACSInpackageMaterialView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSInpackageMaterialView::OnEditPACSInpackageMaterialView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSInpackageMaterialView::OnDeletePACSInpackageMaterialView(){
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
 		OnCancelPACSInpackageMaterialView();
 	}
	return 0;
}
int CPACSInpackageMaterialView::OnSavePACSInpackageMaterialView(){
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
 		//OnPACSInpackageMaterialViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSInpackageMaterialView::OnCancelPACSInpackageMaterialView(){
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
int CPACSInpackageMaterialView::OnPACSInpackageMaterialViewListLoadData(){
	return 0;
}

void CPACSInpackageMaterialView::OnCheckAllSelect()
{
	UpdateData();
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, m_bCheckAll);
	}
}
void CPACSInpackageMaterialView::OnResizeLayout(){
	AddResize(&m_wndMaterialList, 100, 100);	
}