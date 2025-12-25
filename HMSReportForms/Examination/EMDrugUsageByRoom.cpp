#include "stdafx.h"
#include "EMDrugUsageByRoom.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "StringToken.h"

static CString GetIds(CGuiComboBox* pComBo)
{
	CListBox* pLb = NULL;
	COMBOBOXINFO info;
	info.cbSize = sizeof(COMBOBOXINFO);
	GetComboBoxInfo(pComBo->GetSafeHwnd(), &info);
	pLb->FromHandle(info.hwndList);
	if (pLb)
	{
		_tprintf(_T("\r\nCount: %d"), pLb->GetCount());
	}
	
	return NULL;
	CString str1, str2;
   int n;
   _tprintf(_T("\r\nCount: %d"), pComBo->GetCount());
   for (int i = 0; i < pComBo->GetCount(); i++)
   {
      n = pComBo->GetLBTextLen(i);
      pComBo->GetLBText(i, str1.GetBuffer(n));
      str1.ReleaseBuffer();

      str2.Format(_T("item %d: %s\r\n"), i, str1.GetBuffer(0));
	  _tprintf(_T("\r\nstr2: %s"), str2);
   }
	return NULL;
	CString szIds;
	szIds.Empty();
	//Count
	_tprintf(_T("\r\nCount: %d"), pComBo->GetItemCount());
	for (int i = 0; i < pComBo->GetItemCount(); i++)
	{
		int nRet = pComBo->SetCurSel(i);
		_tprintf(_T("\r\nnRet: %d| Cursel: %d| %s"), nRet, pComBo->GetCurSel(),pComBo->GetCurrent(0));
		if (!szIds.IsEmpty())
		{
			szIds += _T(",");
		}
		szIds.AppendFormat(_T("%s"), pComBo->GetCurrent(0));
	}
	//ret str
	_tprintf(_T("\r\nszIds: %s"), szIds);
	return szIds;
}

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugUsageByRoom *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugUsageByRoom* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugUsageByRoom *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugUsageByRoom *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugUsageByRoom *)pWnd)->OnToDateCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugUsageByRoom* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugUsageByRoom *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnRoomAddNew();
}*/
static void _OnPTTYCSelendokFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnPTTYCSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMDrugUsageByRoom *pVw = (CEMDrugUsageByRoom *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugUsageByRoom* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugUsageByRoom *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CEMDrugUsageByRoom *)pWnd)->OnItemAddNew();
}*/
CEMDrugUsageByRoom::CEMDrugUsageByRoom(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMDrugUsageByRoom::~CEMDrugUsageByRoom(){
}
void CEMDrugUsageByRoom::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 415, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 215, 30, 295, 55);
	m_wndReportPeriod.Create(this,300, 30, 410, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 410, 85); 
	m_wndRoom.SetCheckBox(TRUE);
	m_wndRoomLabel.Create(this, _T("Room"), 10, 90, 90, 115);
	m_wndRoom.Create(this,95, 90, 410, 115); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 120, 90, 145);
	m_wndItem.Create(this,95, 120, 410, 145); 
	m_wndPTTYC.Create(this, _T("Nhóm PK PTTYC"), 10, 155, 140, 180);
	m_wndExport.Create(this, _T("&Export"), 335, 155, 415, 180);
	m_wndPTTYC.ShowWindow(SW_HIDE);

}
void CEMDrugUsageByRoom::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(35);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);

	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(1, _T("Code"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(2, _T("Name"), CFMT_TEXT, 150);
	m_wndItem.Format(3, 2);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}

void CEMDrugUsageByRoom::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndPTTYC.SetEvent(WE_CLICK, _OnPTTYCSelendokFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), str2int(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnRoomLoadData();
}
void CEMDrugUsageByRoom::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_Check(pDX, m_wndPTTYC.GetDlgCtrlID(), m_bPTTYC);

}
void CEMDrugUsageByRoom::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szItemKey.Empty();
	m_szRoomKey.Empty();
	m_bPTTYC = FALSE;

}

int CEMDrugUsageByRoom::SetMode(int nMode){
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

/*void CEMDrugUsageByRoom::OnYearChange(){
	
} */
/*void CEMDrugUsageByRoom::OnYearSetfocus(){
	
} */
/*void CEMDrugUsageByRoom::OnYearKillfocus(){
	
} */
int CEMDrugUsageByRoom::OnYearCheckValue(){
	return 0;
}
 
void CEMDrugUsageByRoom::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CEMDrugUsageByRoom::OnReportPeriodSelendok(){
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);	 
	  
}

/*void CEMDrugUsageByRoom::OnReportPeriodSetfocus(){
	
}*/
/*void CEMDrugUsageByRoom::OnReportPeriodKillfocus(){
	
}*/
long CEMDrugUsageByRoom::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CEMDrugUsageByRoom::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMDrugUsageByRoom::OnFromDateChange(){
	
} */
/*void CEMDrugUsageByRoom::OnFromDateSetfocus(){
	
} */
/*void CEMDrugUsageByRoom::OnFromDateKillfocus(){
	
} */
int CEMDrugUsageByRoom::OnFromDateCheckValue(){
	return 0;
}
 
/*void CEMDrugUsageByRoom::OnToDateChange(){
	
} */
/*void CEMDrugUsageByRoom::OnToDateSetfocus(){
	
} */
/*void CEMDrugUsageByRoom::OnToDateKillfocus(){
	
} */
int CEMDrugUsageByRoom::OnToDateCheckValue(){
	return 0;
}
 
void CEMDrugUsageByRoom::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CEMDrugUsageByRoom::OnRoomSelendok(){
	 
}

/*void CEMDrugUsageByRoom::OnRoomSetfocus(){
	
}*/
/*void CEMDrugUsageByRoom::OnRoomKillfocus(){
	
}*/
long CEMDrugUsageByRoom::OnRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.Format(_T(" and hrl_id='%s' "), m_szRoomKey);
	}
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE 1=1 AND hrl_deptid = '%s' %s ORDER BY id "), pMF->GetCurrentDepartmentID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CEMDrugUsageByRoom::OnRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CEMDrugUsageByRoom::OnPTTYCSelect(){

}

void CEMDrugUsageByRoom::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, szRoomIds = m_wndRoom.GetCheckData(0);
	if (szRoomIds.IsEmpty())
	{
		szRoomIds = GetIds(&m_wndRoom);
	}
	CStringToken token(szRoomIds);
	int nIdx = 1, nRow = 3, nCol = 2;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	if (!xls.Load(_T("Exports\\MAU_Thongkethuoctheophong.xls")))
	{
		AfxMessageBox(_T("Thiếu file MAU_Thongkethuoctheophong.xls"));
		return;
	}
	xls.SetWorksheet(0);
	//Header add
	xls.SetCellText(nCol++, nRow, _T("Tổng"), FMT_TEXT | FMT_CENTER, true);
	for (int i = 0; i < token.GetSize(); i++)
	{
		token.GetAt(i, tmpStr);
		xls.SetCellText(nCol++, nRow, pMF->GetRoomName(pMF->GetCurrentDepartmentID(), str2int(tmpStr)), FMT_TEXT | FMT_CENTER, true);
	}
	nRow++;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT);
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			xls.SetCellText(i+1, nRow, rs.GetValue(rs.GetFieldName(i)), i>=1?FMT_NUMBER1:FMT_TEXT);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Bang thong ke tung loai thuoc theo phong.xls"));
}
 
void CEMDrugUsageByRoom::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDrugUsageByRoom::OnItemSelendok(){
	 
}
/*void CEMDrugUsageByRoom::OnItemSetfocus(){
	
}*/
/*void CEMDrugUsageByRoom::OnItemKillfocus(){
	
}*/
long CEMDrugUsageByRoom::OnItemLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
		szWhere.Format(_T(" and mp_product_id='%s' "), m_szItemKey);
	}
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mp_product_id as id, mp_name as name, mp_code as code FROM m_product WHERE mp_isactive = 'Y' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("code")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMDrugUsageByRoom::OnItemAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */


CString CEMDrugUsageByRoom::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szUser, szRoomIds;
	szWhere.Format(_T(" AND hpo_approvedate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND hpo_deptid = '%s'"), m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID());
	szUser = pMF->GetCurrentUser();
	szUser.MakeLower();
	//if (szUser != _T("bvtan") && szUser != _T("bvtanc14"))
	//	szWhere.AppendFormat(_T(" AND hpo_Roomid = '%s'"), szUser);
	//szRoomIds = GetSelectedIds(&m_wndRoom);
	szRoomIds = m_wndRoom.GetCheckData(0);
	if (!szRoomIds.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_Roomid IN (%s)"), szRoomIds);
	else
	{
		szRoomIds = GetIds(&m_wndRoom);
	}
	if (!m_szItemKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpol_product_id = '%s'"), m_szItemKey);

	szSQL.Format(_T("SELECT *") \
	_T("FROM   (SELECT    (select mp_name from m_product where mp_product_id = hpol_product_id) as product_name,") \
	_T("                  hpol_qtyorder as qty,") \
	_T("                  hpo_roomid as room_id,") \
	_T("                  SUM(hpol_qtyorder)") \
	_T("                    over (") \
	_T("                      PARTITION BY hpol_product_id) as total_qty") \
	_T("        FROM      hms_pharmaorder") \
	_T("        left join hms_pharmaorderline ON ( hpo_orderid = hpol_orderid )") \
	_T("        WHERE     hpo_orderstatus = 'A' %s) ") \
	_T("		PIVOT ") \
	_T("		(") \
	_T("			sum(qty) ") \
	_T("			for room_id in (%s) ") \
	_T("		)"), szWhere, szRoomIds);
	AfxMessageBox(szSQL);
	return szSQL;
}