#include "stdafx.h"
#include "HMSMainFrame.h"
#include "EMServiceDrugTrack.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMServiceDrugTrack *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMServiceDrugTrack *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMServiceDrugTrack *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMServiceDrugTrack *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMServiceDrugTrack *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMServiceDrugTrack *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMServiceDrugTrack *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMServiceDrugTrack *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEMServiceDrugTrack *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEMServiceDrugTrack *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEMServiceDrugTrack *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEMServiceDrugTrack *)pWnd)->OnNameCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMServiceDrugTrack *pVw = (CEMServiceDrugTrack *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEMServiceDrugTrack*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEMServiceDrugTrack*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMServiceDrugTrack*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnApprovedListCheckUncheckAllFnc(CWnd *pWnd){
	 ((CEMServiceDrugTrack*)pWnd)->OnApprovedListCheckUncheck();
	 return 0;
} 
static long _OnApprovedListLoadDataFnc(CWnd *pWnd){
	return ((CEMServiceDrugTrack*)pWnd)->OnApprovedListLoadData();
} 
static int _OnApprovedListDeleteItemFnc(CWnd *pWnd){
	return ((CEMServiceDrugTrack*)pWnd)->OnApprovedListDeleteItem();
}
static int _OnApprovedListDeleteAllItemsFnc(CWnd *pWnd){
	return ((CEMServiceDrugTrack*)pWnd)->OnApprovedListDeleteAllItems();
}
CEMServiceDrugTrack::CEMServiceDrugTrack(CWnd *pParent){
	m_bCheckStatus = false;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMServiceDrugTrack::~CEMServiceDrugTrack(){
}
void CEMServiceDrugTrack::OnCreateComponents(){
	m_wndServiceDrugTrack.Create(this, _T("Service Drug Track"), 5, 5, 490, 305);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 90, 85);
	m_wndName.Create(this,95, 60, 485, 85); 
	m_wndExport.Create(this, _T("&Export"), 410, 525, 490, 550);
	m_wndList.Create(this,10, 90, 485, 300); 
	//m_wndList.SetCheckBox(true);
	m_wndApprovedList.Create(this,10, 305, 485, 515); 
	m_wndApprovedList.SetCheckBox(true);
}
void CEMServiceDrugTrack::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);


	
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T(""), CFMT_NUMBER, 0);

	m_wndApprovedList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndApprovedList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndApprovedList.InsertColumn(2, _T(""), CFMT_NUMBER, 0);

}
void CEMServiceDrugTrack::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndApprovedList.AddEvent(1, _T("Check/Uncheck All"), _OnApprovedListCheckUncheckAllFnc);
	m_wndApprovedList.AddEvent(2, _T("Delete"), _OnApprovedListDeleteItemFnc);
	m_wndApprovedList.AddEvent(3, _T("Delete All"), _OnApprovedListDeleteAllItemsFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	OnListLoadData();
}
void CEMServiceDrugTrack::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CEMServiceDrugTrack::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szName.Empty();

}
int CEMServiceDrugTrack::SetMode(int nMode){
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
/*void CEMServiceDrugTrack::OnFromDateChange(){
	
} */
/*void CEMServiceDrugTrack::OnFromDateSetfocus(){
	
} */
/*void CEMServiceDrugTrack::OnFromDateKillfocus(){
	
} */
int CEMServiceDrugTrack::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMServiceDrugTrack::OnToDateChange(){
	
} */
/*void CEMServiceDrugTrack::OnToDateSetfocus(){
	
} */
/*void CEMServiceDrugTrack::OnToDateKillfocus(){
	
} */
int CEMServiceDrugTrack::OnToDateCheckValue(){
	return 0;
} 
/*void CEMServiceDrugTrack::OnNameChange(){
	
} */
/*void CEMServiceDrugTrack::OnNameSetfocus(){
	
} */
/*void CEMServiceDrugTrack::OnNameKillfocus(){
	
} */
int CEMServiceDrugTrack::OnNameCheckValue(){
	m_wndList.Search(1, m_szName, SEARCH_LIKE);
	return 0;
} 
void CEMServiceDrugTrack::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szOldRoomId, szNewRoomId;
	int nCol = 0, nRow = 0, nPrevRow = 0, nIdx = 1;
	int gnSheet = 1;
	long nQty = 0, nTtlQty = 0, nProductID;
	for (int i = 0; i < m_wndApprovedList.GetItemCount(); i++)
	{
		if (m_wndApprovedList.GetCheck(i))
		{
			nCol = 0, nRow = 0, nPrevRow = 0, nIdx = 1, nQty = 0, nTtlQty = 0;
			nProductID = str2long(m_wndApprovedList.GetItemText(i, 2));
			szSQL = GetQueryString(nProductID);
			rs.ExecSQL(szSQL);
			if (rs.IsEOF())
				continue;
			//Export corresponding sheet
			_fmsg(_T("gnsheet %d"), gnSheet);
			tmpStr = m_wndApprovedList.GetItemText(i, 0);
			if (gnSheet == 1)
			{
				xls.CreateSheet(gnSheet);
				xls.SetSheetName(m_wndApprovedList.GetItemText(i, 0));	
			}
			else
				xls.AddSheet(tmpStr);
			xls.SetWorksheet(gnSheet - 1);

			rs.ExecSQL(szSQL);
			xls.SetCellMergedColumns(nCol, nRow, 2);
			xls.SetCellMergedColumns(nCol, nRow + 1, 2);
			xls.SetCellMergedColumns(nCol, nRow + 2, 3);
			xls.SetCellMergedColumns(nCol, nRow + 3, 3);
			xls.SetColumnWidth(1, 35);
			xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
			xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
			xls.SetCellText(nCol, nRow + 2, _T("TH\x45O \x44\xD5I THU\x1ED0\x43 \x44\x1ECA\x43H V\x1EE4 NGO\x1EA0I TR\xDA"), FMT_TEXT | FMT_CENTER, true, 11);
			tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
			xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 10);
			tmpStr.Format(_T("Thu\x1ED1\x63: %s"), m_wndApprovedList.GetItemText(i, 1));
			xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, true, 10);
			xls.SetCellText(nCol, nRow + 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
			xls.SetCellText(nCol + 1, nRow + 5, _T("\x42\xE1\x63 s\x1EF9"), FMT_TEXT | FMT_CENTER, true, 10);
			xls.SetCellText(nCol + 2, nRow + 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER, true, 10);
			nRow = 6;
			while (!rs.IsEOF())
			{
				rs.GetValue(_T("roomid"), szNewRoomId);
				if (szNewRoomId != szOldRoomId)
				{
					xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
					xls.SetCellText(nCol + 1, nRow, pMF->GetRoomName(pMF->GetCurrentDepartmentID(), str2int(szNewRoomId)));
					if (nQty > 0)
					{
						tmpStr.Format(_T("%ld"), nQty);
						xls.SetCellText(nCol + 2, nPrevRow, tmpStr, FMT_NUMBER1, true);
						nTtlQty += nQty;
						nQty = 0;
					}
					nPrevRow = nRow;
					szOldRoomId = szNewRoomId;
					nRow++;
				}
				xls.SetCellText(nCol + 1, nRow, _T("- ")+rs.GetValue(_T("doctor")));
				rs.GetValue(_T("qtyissue"), tmpStr);
				nQty += str2long(tmpStr);
				xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_NUMBER1);
				nRow++;
				rs.MoveNext();
			}	
			if (nQty > 0)
			{
				tmpStr.Format(_T("%ld"), nQty);
				xls.SetCellText(nCol + 2, nPrevRow, tmpStr, FMT_NUMBER1, true);
				nTtlQty += nQty;
				nQty = 0;
			}
			if (nTtlQty > 0)
			{
				xls.SetCellText(nCol + 1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER, true);
				tmpStr.Format(_T("%ld"), nTtlQty);
				xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_NUMBER1, true);
			}
			gnSheet++;
		}
	}
	xls.Save(_T("Exports\\Theo doi thuoc dich vu.xls"));
} 
void CEMServiceDrugTrack::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	
	//int nCount = m_wndApprovedList.GetItemCount();
	//_tprintf(_T("nCount: %d"), nCount);
	//m_wndApprovedList.BeginLoad(nCount);
	m_wndApprovedList.AddItems(m_wndList.GetItemText(nSel, 0), m_wndList.GetItemText(nSel, 1), m_wndList.GetItemText(nSel, 2), NULL);
	//_tprintf(_T("nItem: %d"), nItem);
	m_wndApprovedList.EndLoad();
	m_wndList.DeleteItem(nSel);
} 
void CEMServiceDrugTrack::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CEMServiceDrugTrack::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CEMServiceDrugTrack::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIDS;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if (!m_szName.IsEmpty())
		szWhere.AppendFormat(_T(" and lower(mp_name) like(lower('%s%s%s')) "), _T("%"), m_szName, _T("%"));
	for (int i = 0; i < m_wndApprovedList.GetItemCount(); i++)
	{
		if (!szIDS.IsEmpty())
			szIDS += _T(", ");
		szIDS.AppendFormat(_T("%ld"), m_wndApprovedList.GetItemText(i, 2));
	}
	if (!szIDS.IsEmpty())
		szWhere.AppendFormat(_T(" AND mp_product_id NOT IN (%s)"), szIDS);
	szSQL.Format(_T(" SELECT") \
			_T("   DISTINCT") \
			_T("   mp_code                                   AS code,") \
			_T("   mp_name                                   AS name,") \
			_T("   Get_uomname(mp_product_uom_id)                    AS unit,") \
			_T("   Get_productclassname(mp_product_class_id) AS genericname,") \
			_T("   Get_countryname((mp_country_id))           AS orgname,") \
			_T("   mp_product_id as id") \
			_T(" FROM   m_storageline") \
			_T(" LEFT JOIN m_product ON(msl_product_id=mp_product_id)") \
			_T(" WHERE  msl_storage_id = %s") \
			_T("        AND msl_product_item_id>0") \
			_T(" ORDER  BY name, unit "), pMF->GetCurrentDepartmentID()==_T("C1.1")?_T("3"):_T("23"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems( 
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("id")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}

CString CEMServiceDrugTrack::GetQueryString(long nProductID){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szIDS;
	szWhere.Format(_T(" AND hpo_deptid = '%s' AND hfe_createddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate);
	szWhere.AppendFormat(_T(" AND hpol_product_id = %ld"), nProductID);
	szSQL.Format(_T("SELECT get_username(hpo_doctor) as doctor, ") \
				_T("       hpo_roomid as roomid, ") \
				_T("       Sum(hpol_qtyissue) as qtyissue ") \
				_T("FROM   hms_pharmaorder ") \
				_T("LEFT JOIN hms_pharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
				_T("LEFT JOIN hms_fee_invoice ON (hpo_invoiceno = hfe_invoiceno)")
				_T("WHERE  hpo_storage_id = %s AND hfe_status = 'P' %s ") \
				_T("GROUP  BY hpo_doctor, hpo_roomid ") \
				_T("HAVING SUM(hpol_qtyissue) > 0") \
				_T("ORDER  BY hpo_roomid, hpo_doctor ")
				, pMF->GetCurrentDepartmentID()==_T("C1.1")?_T("3"):_T("23"), szWhere);
	return szSQL;
}

void CEMServiceDrugTrack::OnApprovedListCheckUncheck(){
	m_bCheckStatus = !m_bCheckStatus;
	for (int i = 0; i < m_wndApprovedList.GetItemCount(); i++)
		m_wndApprovedList.SetCheck(i, m_bCheckStatus);
}

long CEMServiceDrugTrack::OnApprovedListLoadData(){
	return 0;
}

int CEMServiceDrugTrack::OnApprovedListDeleteItem(){
	int nSel = m_wndApprovedList.GetCurSel();
	m_wndApprovedList.DeleteItem(nSel);
	OnListLoadData();
	return 0;
}

int CEMServiceDrugTrack::OnApprovedListDeleteAllItems(){
	int nSel = m_wndApprovedList.GetCurSel();
	m_wndApprovedList.DeleteAllItems();
	OnListLoadData();
	return 0;
}