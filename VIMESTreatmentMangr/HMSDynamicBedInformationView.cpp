#include "HMSDynamicBedInformationView.h"
#include "HMSMainFrame.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformationView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDynamicBedInformationView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDynamicBedInformationView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformationView*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSDynamicBedInformationViewFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformationView*)pWnd)->OnAddHMSDynamicBedInformationView();
} 
static int _OnEditHMSDynamicBedInformationViewFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformationView*)pWnd)->OnEditHMSDynamicBedInformationView();
} 
static int _OnDeleteHMSDynamicBedInformationViewFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformationView*)pWnd)->OnDeleteHMSDynamicBedInformationView();
} 
static int _OnSaveHMSDynamicBedInformationViewFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformationView*)pWnd)->OnSaveHMSDynamicBedInformationView();
} 
static int _OnCancelHMSDynamicBedInformationViewFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformationView*)pWnd)->OnCancelHMSDynamicBedInformationView();
}
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDynamicBedInformationView *pVw = (CHMSDynamicBedInformationView *)pWnd;
	pVw->OnCloseSelect();
} 
CHMSDynamicBedInformationView::CHMSDynamicBedInformationView(){

	m_nDlgWidth = 825;
	m_nDlgHeight = 815;
	SetDefaultValues();
}
CHMSDynamicBedInformationView::~CHMSDynamicBedInformationView()
{
}
void CHMSDynamicBedInformationView::OnCreateComponents(){
	
	m_wndDrugIinteractions.Create(this, _T("Thông tin giường động theo lượt điều trị"), 5, 5, 815, 550);
	m_wndList.Create(this,10, 30, 805, 545); 

}
void CHMSDynamicBedInformationView::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndList.InsertColumn(1, _T("Tên khoa"), CFMT_TEXT | CFMT_CENTER , 80);
	m_wndList.InsertColumn(2, _T("Tên giường"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(3, _T("Từ ngày"), CFMT_TEXT, 120);	
	m_wndList.InsertColumn(4, _T("Đến ngày"), CFMT_TEXT, 120);	
	m_wndList.InsertColumn(5, _T("Số lượng"), CFMT_MONEY|CFMT_CENTER, 80);
}
void CHMSDynamicBedInformationView::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	OnListLoadData();
	SetMode(VM_NONE);

}
void CHMSDynamicBedInformationView::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSDynamicBedInformationView::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDynamicBedInformationView::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSDynamicBedInformationView::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	
} 
void CHMSDynamicBedInformationView::SetDefaultValues(){


}
int CHMSDynamicBedInformationView::SetMode(int nMode){
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
void CHMSDynamicBedInformationView::OnListDblClick(){

} 
void CHMSDynamicBedInformationView::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
int CHMSDynamicBedInformationView::OnListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CHMSDynamicBedInformationView::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOldDate, szIssueDate, szDept, szOldDept, tmpStr, szSTT, szSheetNo, szStatus;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx=1;

		szSQL.Format(_T(" SELECT hb_idx as stt, ") \
		_T(" hbi_deptid as deptid,") \
		_T(" GET_DEPTNAME(hbi_deptid) as deptname,") \
		_T(" hdbl_name as bedname,") \
		_T(" to_char(hbi_fromdate, 'DD/MM/YYYY HH24:MI') as starttime,") \
		_T(" to_char(hbi_todate,'DD/MM/YYYY HH24:MI') as endtime,") \
		_T(" SUM(hbi_qty) as qty") \
		_T(" FROM hms_bed_items") \
		_T(" LEFT JOIN hms_bed ON (hbi_docno = hb_docno") \
		_T(" AND hbi_refidx = hb_idx)") \
		_T(" LEFT JOIN hms_dynbedlist ON (hbi_deptid = hdbl_deptid") \
		_T(" AND hbi_priceid = hdbl_idx)") \
		_T(" WHERE hbi_docno=%ld and hbi_treattime =%d ") \
		_T(" GROUP BY hbi_treattime,hb_idx, hbi_deptid, hdbl_name, hbi_fromdate, hbi_todate") \
		_T(" ORDER BY hbi_treattime,hb_idx"), pMF->m_nDocumentNo, pMF->GetTreatTime());

	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);	
	long nQty=0;	 
	long nTotalQty=0;
	long nCost = 0;
	int nItem = 0;
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("deptid"), szDept);
		if(szOldDept != szDept)
		{
			
			if(nQty > 0)
			{
				nItem = m_wndList.AddItems(_T(""), _T("Cộng:"), _T(""),  _T(""), _T(""), ToString(nQty), NULL);
				m_wndList.SetItemBkColor(nItem, RGB(192, 192, 192), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				nTotalQty += nQty;			
				nQty =0;			
			}
			tmpStr.Format(_T("%s"), pMF->GetDepartmentName(szDept));
			nItem = m_wndList.AddItems(_T(""), tmpStr, NULL);
			m_wndList.SetItemBkColor(nItem, RGB(0, 129, 255), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);

			
			m_wndList.MergeCell(nItem, 1, nItem, 6, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			szOldDept = szDept;			
			nIdx=1;
		}
		rs.GetValue(_T("qty"), nCost);
		nTotalQty += nCost;
		
			nItem = m_wndList.AddItems(
			rs.GetValue(_T("stt")), 
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("bedname")),
			rs.GetValue(_T("starttime")), 
			rs.GetValue(_T("endtime")), 
			rs.GetValue(_T("qty")),NULL);

		rs.MoveNext();
	}
	if(nQty > 0)
			{
				nItem = m_wndList.AddItems(_T(""), _T(""), _T(""),  _T(""), _T("Cộng:"), ToString(nQty), NULL);
				m_wndList.SetItemBkColor(nItem, RGB(192, 192, 192), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				nTotalQty += nQty;			
				nQty =0;			
			}

	if(nTotalQty > 0)
			{
				nItem = m_wndList.AddItems(_T(""), _T(""), _T(""),  _T(""), _T("Tổng Cộng:"), ToString(nTotalQty), NULL);
				m_wndList.SetItemBkColor(nItem, RGB(192, 192, 192), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);		
			}

	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSDynamicBedInformationView::OnAddHMSDynamicBedInformationView(){
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSDynamicBedInformationView::OnEditHMSDynamicBedInformationView(){
	if(GetMode() != VM_VIEW)
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDynamicBedInformationView::OnDeleteHMSDynamicBedInformationView(){
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
		OnCancelHMSDynamicBedInformationView();
	}
	return 0;
}
int CHMSDynamicBedInformationView::OnSaveHMSDynamicBedInformationView(){
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
		//OnHMSDynamicBedInformationViewListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSDynamicBedInformationView::OnCancelHMSDynamicBedInformationView(){
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
int CHMSDynamicBedInformationView::OnHMSDynamicBedInformationViewListLoadData(){
	return 0;
}
