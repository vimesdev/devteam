#include "IVFParaclinicResultDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CIVFParaclinicResultDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CIVFParaclinicResultDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CIVFParaclinicResultDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFParaclinicResultDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CIVFParaclinicResultDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CIVFParaclinicResultDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CIVFParaclinicResultDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFParaclinicResultDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnSpecialFilterSelectFnc(CWnd *pWnd){
	 ((CIVFParaclinicResultDialog*)pWnd)->OnSpecialFilterSelect();
}

static void _OnAllDeptSelectFnc(CWnd *pWnd){
	 ((CIVFParaclinicResultDialog*)pWnd)->OnAllDeptSelect();
}

static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CIVFParaclinicResultDialog*)pWnd)->OnItemLoadData();
} 
static void _OnItemDblClickFnc(CWnd *pWnd){
	((CIVFParaclinicResultDialog*)pWnd)->OnItemDblClick();
} 
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFParaclinicResultDialog*)pWnd)->OnItemSelectChange(nOldItem, nNewItem);
} 
static int _OnItemDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFParaclinicResultDialog*)pWnd)->OnItemDeleteItem();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CIVFParaclinicResultDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CIVFParaclinicResultDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CIVFParaclinicResultDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CIVFParaclinicResultDialog *)pWnd)->OnDescriptionCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFParaclinicResultDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFParaclinicResultDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFParaclinicResultDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFParaclinicResultDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CIVFParaclinicResultDialog *pVw = (CIVFParaclinicResultDialog *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CIVFParaclinicResultDialog *pVw = (CIVFParaclinicResultDialog *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CIVFParaclinicResultDialog *pVw = (CIVFParaclinicResultDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFParaclinicResultDialog *pVw = (CIVFParaclinicResultDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSParaclinicResultDialogFnc(CWnd *pWnd){
	 return ((CIVFParaclinicResultDialog*)pWnd)->OnAddHMSParaclinicResultDialog();
} 
static int _OnEditHMSParaclinicResultDialogFnc(CWnd *pWnd){
	 return ((CIVFParaclinicResultDialog*)pWnd)->OnEditHMSParaclinicResultDialog();
} 
static int _OnDeleteHMSParaclinicResultDialogFnc(CWnd *pWnd){
	 return ((CIVFParaclinicResultDialog*)pWnd)->OnDeleteHMSParaclinicResultDialog();
} 
static int _OnSaveHMSParaclinicResultDialogFnc(CWnd *pWnd){
	 return ((CIVFParaclinicResultDialog*)pWnd)->OnSaveHMSParaclinicResultDialog();
} 
static int _OnCancelHMSParaclinicResultDialogFnc(CWnd *pWnd){
	 return ((CIVFParaclinicResultDialog*)pWnd)->OnCancelHMSParaclinicResultDialog();
} 
CIVFParaclinicResultDialog::CIVFParaclinicResultDialog(CWnd *pParent, long nDocumentNo, bool bAllDept):
	CGuiDialog(pParent){
	m_nDocumentNo = nDocumentNo;
	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szData.Empty();
	m_bAllDept = bAllDept;
}
CIVFParaclinicResultDialog::~CIVFParaclinicResultDialog(){
}
void CIVFParaclinicResultDialog::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 5, 85, 30);
	m_wndFromDate.Create(this,90, 5, 180, 30); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 5, 255, 30);
	m_wndToDate.Create(this,260, 5, 350, 30); 
	m_wndSpecialFilter.Create(this, _T("Kết quả bất thường"), 355, 5, 520, 30);
	m_wndAllDept.Create(this, _T("Tất cả các khoa"), 525, 5, 650, 30);
	m_wndItem.Create(this,5, 35, 475, 515); 
	m_wndDescription.Create(this,5, 520, 475, 570); 
	m_wndList.Create(this,480, 35, 950, 570); 
	m_wndMarkAll.Create(this, _T("&Mark All"), 4, 575, 84, 600);
	m_wndUnMark.Create(this, _T("&UnMark"), 89, 575, 169, 600);
	m_wndApply.Create(this, _T("&Apply"), 785, 575, 865, 600);
	m_wndClose.Create(this, _T("&Close"), 870, 575, 950, 600);

}
void CIVFParaclinicResultDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetReadOnly(TRUE);
	
	m_wndItem.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndItem.InsertColumn(2, _T("Result"), CFMT_TEXT, 100);
	m_wndItem.InsertColumn(3, _T("Note"), CFMT_TEXT, 100);
	m_wndItem.InsertColumn(4, _T(""), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(5, _T("LineID"), CFMT_TEXT, 0);

	m_wndItem.SetCheckBox(TRUE);
	m_wndItem.SetSortHeader(false);
	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Result"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Note"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(5, _T("LineID"), CFMT_TEXT, 0);
	m_wndList.SetSortHeader(false);
}
void CIVFParaclinicResultDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSpecialFilter.SetEvent(WE_CLICK, _OnSpecialFilterSelectFnc);
	m_wndAllDept.SetEvent(WE_CLICK, _OnAllDeptSelectFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	m_wndItem.SetEvent(WE_DBLCLICK, _OnItemDblClickFnc);
	m_wndItem.AddEvent(1, _T("Delete"), _OnItemDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
	m_szToDate = pMF->GetSysDate();
	CDate dte;
	dte.ParseDate(m_szToDate);
	dte -= 3;
	m_szFromDate = dte.GetDate();
	SetMode(VM_EDIT);
	OnItemLoadData();
	

}
void CIVFParaclinicResultDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndSpecialFilter.GetDlgCtrlID(), m_bSpecialFilter);
	DDX_Check(pDX, m_wndAllDept.GetDlgCtrlID(), m_bAllDept);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CIVFParaclinicResultDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("SpecialFilter")] =  m_bSpecialFilter;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("SpecialFilter")].GetValue(m_bSpecialFilter);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CIVFParaclinicResultDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFParaclinicResultDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFParaclinicResultDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bSpecialFilter=FALSE;
	m_szDescription.Empty();

}
int CIVFParaclinicResultDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CIVFParaclinicResultDialog::OnFromDateChange(){
	
} */
/*void CIVFParaclinicResultDialog::OnFromDateSetfocus(){
	
} */
/*void CIVFParaclinicResultDialog::OnFromDateKillfocus(){
	
} */
int CIVFParaclinicResultDialog::OnFromDateCheckValue(){
	OnItemLoadData();
	return 0;
} 
/*void CIVFParaclinicResultDialog::OnToDateChange(){
	
} */
/*void CIVFParaclinicResultDialog::OnToDateSetfocus(){
	
} */
/*void CIVFParaclinicResultDialog::OnToDateKillfocus(){
	
} */
int CIVFParaclinicResultDialog::OnToDateCheckValue(){
	OnItemLoadData();
	return 0;
} 
void CIVFParaclinicResultDialog::OnSpecialFilterSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnItemLoadData();
	UpdateData(FALSE);
}

void CIVFParaclinicResultDialog::OnAllDeptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnItemLoadData();
	UpdateData(FALSE);
}
void CIVFParaclinicResultDialog::OnItemDblClick(){
	int nSel = m_wndItem.GetCurSel();
	if(nSel < 0)
		return;
	BOOL bCheck = m_wndItem.GetCheck(nSel);
	CString tmpStr  = m_wndItem.GetItemText(nSel, 0);
	CString szGroupId  = m_wndItem.GetItemText(nSel, 4);
	CString szNewGroup;
	bCheck = !bCheck;
	m_wndItem.SetCheck(nSel, bCheck);
	if(tmpStr == _T("*"))
	{
		for (int i = nSel; i < m_wndItem.GetItemCount(); i++)
		{
			szNewGroup  = m_wndItem.GetItemText(i, 4);
			if(szNewGroup != szGroupId)
				break;
			m_wndItem.SetCheck(i, bCheck);
		}
	}
	else
	{
		
		if(bCheck)
		{
			for (int i = nSel; i >= 0; i--)
			{
				szNewGroup = m_wndItem.GetItemText(i, 4);
				tmpStr = m_wndItem.GetItemText(i, 0);
				if(tmpStr == _T("*") && szNewGroup == szGroupId)
				{
					m_wndItem.SetCheck(i, TRUE);
					break;
				}
			}
		}
		else
		{
			bool bFound = false;
			int nGrp = -1;
			for (int i = nSel; i > 0; i--)
			{
				szNewGroup = m_wndItem.GetItemText(i, 4);
				tmpStr = m_wndItem.GetItemText(i, 0);
				if(szNewGroup == szGroupId)
				{
					if(tmpStr == _T("*") && szNewGroup == szGroupId)
					{
						nGrp = i;
					}
					if(m_wndItem.GetCheck(i))
					{
						bFound = true;
						break;
					}
				}
			}
			if(bFound && nGrp >=0)
			{
				m_wndItem.SetCheck(nGrp, FALSE);
			}

		}
	}
	OnListLoadData();
} 
void CIVFParaclinicResultDialog::OnItemSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szDescription = m_wndItem.GetItemText(nNewItem, 2);
	UpdateData(FALSE);
} 
int CIVFParaclinicResultDialog::OnItemDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFParaclinicResultDialog::OnItemLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	m_wndItem.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	if(!m_bAllDept)
	{
		szWhere.AppendFormat(_T(" and hpc_deptid='%s' "), pMF->m_szDept);
	}

	szWhere.AppendFormat(_T(" and hpc_orderdate between to_DATE('%s', 'YYYY-MM-DD') and to_DATE('%s', 'YYYY-MM-DD') "), m_szFromDate, m_szToDate);

	szWhere.AppendFormat(_T(" and hpc_status in('P','T') "));
	szSQL.Format(_T(" SELECT hfg_id   AS group_id,") \
	_T("   hfg_name      AS group_name,") \
	_T("   hpc_orderid   AS order_id,") \
	_T("   to_char(hpc_orderdate, 'DD/MM/YYYY') AS order_date") \
	_T(" FROM hmsv_paraclinic,") \
	_T("   hms_fee_group") \
	_T(" WHERE hpc_docno = %ld and hfg_id = hpc_groupid") \
	_T(" %s ") \
	_T(" ORDER BY trunc(hpc_orderdate), hfg_index2, hfg_id, hpc_orderid ") , m_nDocumentNo, szWhere);


	CString szIndex, tmpStr, szDate, szNewDate;
	CString szDesc, szResult, szNote, szGroupId;
	int nIndex= 1, nItem = 0, nItemChild = 0;
	long nOrderId;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("order_date"), szNewDate);
		rs.GetValue(_T("group_name"), szDesc);
		rs.GetValue(_T("group_id"), szGroupId);
		rs.GetValue(_T("order_id"), nOrderId);
		if(szNewDate != szDate)
		{
			nItem = m_wndItem.AddItems(_T("[*]"), szNewDate, _T(""), _T(""), szGroupId, NULL);
			m_wndItem.SetItemBkColor(nItem, RGB(0,128, 128), FALSE);
			m_wndItem.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szDate = szNewDate;
		}
		nItem = m_wndItem.AddItems(
			_T("*"), 
			szDesc, 
			_T(""), 
			_T(""), 
			szGroupId,
			NULL);
		m_wndItem.SetItemBkColor(nItem, RGB(0, 128, 192), FALSE);
		m_wndItem.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
	
		if(szGroupId.Left(2) == _T("B1") && szGroupId.Left(3) != _T("B1E") && szGroupId.Left(3) != _T("B1F") 
			&& szGroupId.Left(3) != _T("B1G"))
		{

			CString szFilter;
			szFilter.Empty();
			if(m_bSpecialFilter)
			{
				szFilter.AppendFormat(_T(" and nvl(hpcl_note,'XX') <> 'XX' "));
			}

			szSQL.Format(_T(" SELECT hpcl_orderid,") \
			_T("   hpcl_itemid      AS itemid,") \
			_T("   hfl_name         AS name,") \
			_T("   hfl_unit         AS unit,") \
			_T("   hpcl_result      AS result,") \
			_T("   hpcl_note        AS note,") \
			_T("   hpcl_orderlineid AS order_line,") \
			_T("   hpcl_approved	AS approved") \
			_T(" FROM hms_testorderline,") \
			_T("   hms_fee_list") \
			_T(" WHERE hpcl_docno     =%ld") \
			_T(" AND hpcl_orderid     =%ld") \
			_T(" AND hpcl_itemid      = hfl_feeid") \
			_T(" AND hpcl_status NOT IN('C') %s ") \
			_T(" ORDER BY hpcl_orderlineid"), m_nDocumentNo, nOrderId, szFilter);

		}
		else
		{
			szSQL.Format(_T(" SELECT hpcl_orderid,") \
			_T("   hpcl_itemid      AS itemid,") \
			_T("   hfl_name         AS name,") \
			_T("   hfl_unit         AS unit,") \
			_T("   hpr_desc         AS result,") \
			_T("   hpcl_note        AS note,") \
			_T("   hpcl_orderlineid AS order_line,") \
			_T("   hpcl_approved	AS approved") \
			_T(" FROM hms_pacsorderline") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(hfl_feeid=hpcl_itemid)") \
			_T(" LEFT JOIN hms_pacs_result") \
			_T(" ON(hpcl_docno        = hpr_docno") \
			_T(" AND hpcl_orderid     = hpr_orderid") \
			_T(" AND hpcl_itemid      = hpr_itemid") \
			_T(" AND hpr_name         ='Conclusion')") \
			_T(" WHERE hpcl_docno     =%ld") \
			_T(" AND hpcl_orderid     =%ld") \
			_T(" AND hpcl_status NOT IN('C')"), m_nDocumentNo, nOrderId);
		}
	
		rsl.ExecSQL(szSQL);
		nIndex = 1;
		nCount = 0;
		while(!rsl.IsEOF())
		{
			szIndex.Format(_T("%d"), nIndex++);
			nItemChild = m_wndItem.AddItems(szIndex, 
				rsl.GetValue(_T("name")),
				rsl.GetValue(_T("result")),
				rsl.GetValue(_T("note")),
				szGroupId, 
				rsl.GetValue(_T("order_line")),
				NULL);
			if (rsl.GetValue(_T("approved"))== _T("Y"))
			{
				m_wndItem.SetCheck(nItemChild, true);
				nCount++;
			}
			rsl.MoveNext();
		}
		if (nCount > 0)
		{
			m_wndItem.SetCheck(nItem, true);
		}
		rs.MoveNext();
	}
	m_wndItem.EndLoad(); 
	OnListLoadData();
	return nCount;
}
/*void CIVFParaclinicResultDialog::OnDescriptionChange(){
	
} */
/*void CIVFParaclinicResultDialog::OnDescriptionSetfocus(){
	
} */
/*void CIVFParaclinicResultDialog::OnDescriptionKillfocus(){
	
} */
int CIVFParaclinicResultDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CIVFParaclinicResultDialog::OnListDblClick(){
	
} 
void CIVFParaclinicResultDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFParaclinicResultDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFParaclinicResultDialog::OnListLoadData(){

	CString tmpStr, szIndex;
	int nIndex = 1;
	m_wndList.BeginLoad();
	for (int i =0; i < m_wndItem.GetItemCount(); i++)
	{
		if(m_wndItem.GetCheck(i))
		{
			szIndex = m_wndItem.GetItemText(i, 0);
			if(szIndex == _T("[*]"))
				continue;
			int nItem = m_wndList.AddItems(szIndex,
				m_wndItem.GetItemText(i, 1),
				m_wndItem.GetItemText(i, 2),
				m_wndItem.GetItemText(i, 3),
				m_wndItem.GetItemText(i, 4),
				m_wndItem.GetItemText(i, 5),
				NULL);
			if(szIndex == _T("*"))
			{
				m_wndList.SetItemBkColor(nItem, RGB(0, 182, 192), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			}

		}
	}
	m_wndList.EndLoad();
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Result")), 
			rs.GetValue(_T("Note")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CIVFParaclinicResultDialog::OnMarkAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i < m_wndItem.GetItemCount(); i++)
	{
		m_wndItem.SetCheck(i, TRUE);
	}
	OnListLoadData();
} 
void CIVFParaclinicResultDialog::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i < m_wndItem.GetItemCount(); i++)
	{
		m_wndItem.SetCheck(i, FALSE);
	}
	OnListLoadData();
} 
void CIVFParaclinicResultDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szLineIDs, szSQL;
	long nLineID =0;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		nLineID = str2long(m_wndList.GetItemText(i, 5));
		if (nLineID > 0)
		{
			if (!szLineIDs.IsEmpty())
			{
				szLineIDs += _T(",");
			}
			szLineIDs.AppendFormat(_T("%ld"), nLineID);
		}
	}
	szSQL.Format(_T("IVF_PARA_RESULT_APPROVE(%ld, %d, '%s')"), m_nDocumentNo, pMF->GetTreatTime(), szLineIDs);
	pMF->ExecDML(szSQL);
	CGuiDialog::OnOK();
} 
void CIVFParaclinicResultDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CIVFParaclinicResultDialog::OnAddHMSParaclinicResultDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFParaclinicResultDialog::OnEditHMSParaclinicResultDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFParaclinicResultDialog::OnDeleteHMSParaclinicResultDialog(){
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
 		OnCancelHMSParaclinicResultDialog();
 	}
	return 0;
}
int CIVFParaclinicResultDialog::OnSaveHMSParaclinicResultDialog(){
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
 		//OnHMSParaclinicResultDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFParaclinicResultDialog::OnCancelHMSParaclinicResultDialog(){
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
int CIVFParaclinicResultDialog::OnHMSParaclinicResultDialogListLoadData(){
	return 0;
}
