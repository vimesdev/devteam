#include "HMSDynamicBedInformation.h"
#include "HMSMainFrame.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformation*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDynamicBedInformation*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDynamicBedInformation*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformation*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSDynamicBedInformationFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformation*)pWnd)->OnAddHMSDynamicBedInformation();
} 
static int _OnEditHMSDynamicBedInformationFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformation*)pWnd)->OnEditHMSDynamicBedInformation();
} 
static int _OnDeleteHMSDynamicBedInformationFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformation*)pWnd)->OnDeleteHMSDynamicBedInformation();
} 
static int _OnSaveHMSDynamicBedInformationFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformation*)pWnd)->OnSaveHMSDynamicBedInformation();
} 
static int _OnCancelHMSDynamicBedInformationFnc(CWnd *pWnd){
	return ((CHMSDynamicBedInformation*)pWnd)->OnCancelHMSDynamicBedInformation();
}
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDynamicBedInformation *pVw = (CHMSDynamicBedInformation *)pWnd;
	pVw->OnCloseSelect();
} 
CHMSDynamicBedInformation::CHMSDynamicBedInformation(CWnd *pParent):
CGuiDialog(pParent){

	m_nDlgWidth = 825;
	m_nDlgHeight = 815;
	SetDefaultValues();
}
CHMSDynamicBedInformation::~CHMSDynamicBedInformation()
{
}
void CHMSDynamicBedInformation::OnCreateComponents(){
	
	m_wndDrugIinteractions.Create(this, _T("Thông tin giường động theo lượt điều trị"), 5, 5, 815, 550);
	m_wndList.Create(this,10, 30, 805, 545); 
	m_wndClose.Create(this, _T("&Close"), 655, 555, 800, 580);

}
void CHMSDynamicBedInformation::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndList.InsertColumn(1, _T("Tên khoa"), CFMT_TEXT | CFMT_CENTER , 80);
	m_wndList.InsertColumn(2, _T("Tên giường"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(3, _T("Từ ngày"), CFMT_TEXT, 120);	
	m_wndList.InsertColumn(4, _T("Đến ngày"), CFMT_TEXT, 120);	
	m_wndList.InsertColumn(5, _T("Số lượng"), CFMT_MONEY|CFMT_CENTER, 80);
}
void CHMSDynamicBedInformation::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
	SetMode(VM_NONE);

}
void CHMSDynamicBedInformation::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSDynamicBedInformation::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDynamicBedInformation::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSDynamicBedInformation::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
void CHMSDynamicBedInformation::SetDefaultValues(){


}
int CHMSDynamicBedInformation::SetMode(int nMode){
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
	UpdateData(FALSE);
	return nOldMode;
}
void CHMSDynamicBedInformation::OnListDblClick(){

} 
void CHMSDynamicBedInformation::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
int CHMSDynamicBedInformation::OnListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CHMSDynamicBedInformation::OnListLoadData()
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
int CHMSDynamicBedInformation::OnAddHMSDynamicBedInformation(){
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSDynamicBedInformation::OnEditHMSDynamicBedInformation(){
	if(GetMode() != VM_VIEW)
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDynamicBedInformation::OnDeleteHMSDynamicBedInformation(){
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
		OnCancelHMSDynamicBedInformation();
	}
	return 0;
}
int CHMSDynamicBedInformation::OnSaveHMSDynamicBedInformation(){
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
		//OnHMSDynamicBedInformationListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSDynamicBedInformation::OnCancelHMSDynamicBedInformation(){
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
int CHMSDynamicBedInformation::OnHMSDynamicBedInformationListLoadData(){
	return 0;
}
