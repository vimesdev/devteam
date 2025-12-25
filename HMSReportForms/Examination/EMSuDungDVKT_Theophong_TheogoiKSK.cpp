#include "stdafx.h"
#include "EMSuDungDVKT_Theophong_TheogoiKSK.h"
#include "HMSMainFrame.h"
#include "HMSListSearchDialog.h"
static void _OnChuaVaoPhimSelectFnc(CWnd *pWnd){
	 ((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnChuaVaoPhimSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnToDateCheckValue();
} 
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnRoomLoadData();
} 
static void _OnRoomDblClickFnc(CWnd *pWnd){
	((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnRoomDblClick();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomDeleteItemFnc(CWnd *pWnd){
	 return ((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnRoomDeleteItem();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd)->OnNameCheckValue();
} 
static long _OnGoiKSKListLoadDataFnc(CWnd *pWnd){
	return ((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnGoiKSKListLoadData();
} 
static void _OnGoiKSKListDblClickFnc(CWnd *pWnd){
	((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnGoiKSKListDblClick();
} 
static void _OnGoiKSKListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnGoiKSKListSelectChange(nOldItem, nNewItem);
} 
static int _OnGoiKSKListDeleteItemFnc(CWnd *pWnd){
	 return ((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnGoiKSKListDeleteItem();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMSuDungDVKT_Theophong_TheogoiKSK *pVw = (CEMSuDungDVKT_Theophong_TheogoiKSK *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddCEMSuDungDVKT_Theophong_TheogoiKSKFnc(CWnd *pWnd){
	 return ((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnAddCEMSuDungDVKT_Theophong_TheogoiKSK();
} 
static int _OnEditCEMSuDungDVKT_Theophong_TheogoiKSKFnc(CWnd *pWnd){
	 return ((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnEditCEMSuDungDVKT_Theophong_TheogoiKSK();
} 
static int _OnDeleteCEMSuDungDVKT_Theophong_TheogoiKSKFnc(CWnd *pWnd){
	 return ((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnDeleteCEMSuDungDVKT_Theophong_TheogoiKSK();
} 
static int _OnSaveCEMSuDungDVKT_Theophong_TheogoiKSKFnc(CWnd *pWnd){
	 return ((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnSaveCEMSuDungDVKT_Theophong_TheogoiKSK();
} 
static int _OnCancelCEMSuDungDVKT_Theophong_TheogoiKSKFnc(CWnd *pWnd){
	 return ((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnCancelCEMSuDungDVKT_Theophong_TheogoiKSK();
}
static int _OnRoomSearchItemFnc(CWnd* pWnd)
{
	return ((CEMSuDungDVKT_Theophong_TheogoiKSK*)pWnd)->OnRoomSearchItem();
}
CEMSuDungDVKT_Theophong_TheogoiKSK::CEMSuDungDVKT_Theophong_TheogoiKSK(CWnd* pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMSuDungDVKT_Theophong_TheogoiKSK::~CEMSuDungDVKT_Theophong_TheogoiKSK()
{
}
void CEMSuDungDVKT_Theophong_TheogoiKSK::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 535);
	m_wndChuaVaoPhim.Create(this, _T("Chua vào phim"), 26, 34, 26, 34);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 285, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 290, 30, 370, 55);
	m_wndToDate.Create(this,375, 30, 570, 55); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 59, 90, 84);
	m_wndRoom.Create(this,11, 90, 571, 264); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 269, 90, 294);
	m_wndName.Create(this,95, 269, 570, 294); 
	m_wndGoiKSKList.Create(this,11, 299, 571, 530); 
	m_wndExport.Create(this, _T("&ExportXLS"), 490, 540, 570, 565);
}
void CEMSuDungDVKT_Theophong_TheogoiKSK::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndRoom.InsertColumn(2, _T("Department"), CFMT_TEXT, 50);
	m_wndRoom.SetCheckBox(true);

	m_wndGoiKSKList.InsertColumn(0, _T("Id"), CFMT_NUMBER, 70);
	m_wndGoiKSKList.InsertColumn(1, _T("Contract No"), CFMT_TEXT, 150);
	m_wndGoiKSKList.InsertColumn(2, _T("Description"), CFMT_TEXT, 350);
	m_wndGoiKSKList.SetCheckBox(true);

}
void CEMSuDungDVKT_Theophong_TheogoiKSK::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndChuaVaoPhim.SetEvent(WE_CLICK, _OnChuaVaoPhimSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	m_wndRoom.SetEvent(WE_DBLCLICK, _OnRoomDblClickFnc);
	m_wndRoom.AddEvent(1, _T("Search"), _OnRoomSearchItemFnc);
	
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndGoiKSKList.SetEvent(WE_SELCHANGE, _OnGoiKSKListSelectChangeFnc);
	m_wndGoiKSKList.SetEvent(WE_LOADDATA, _OnGoiKSKListLoadDataFnc);
	m_wndGoiKSKList.SetEvent(WE_DBLCLICK, _OnGoiKSKListDblClickFnc);
	
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnRoomLoadData();
	OnGoiKSKListLoadData();
	
}
void CEMSuDungDVKT_Theophong_TheogoiKSK::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndChuaVaoPhim.GetDlgCtrlID(), m_bChuaVaoPhim);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CEMSuDungDVKT_Theophong_TheogoiKSK::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ChuaVaoPhim")] =  m_bChuaVaoPhim;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Name")] =  m_szName;
	}
	else
	{
			
	m_jData[_T("ChuaVaoPhim")].GetValue(m_bChuaVaoPhim);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Name")].GetValue(m_szName);
	}

}
void CEMSuDungDVKT_Theophong_TheogoiKSK::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMSuDungDVKT_Theophong_TheogoiKSK::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMSuDungDVKT_Theophong_TheogoiKSK::SetDefaultValues(){

	m_bChuaVaoPhim=FALSE;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szName.Empty();

}
int CEMSuDungDVKT_Theophong_TheogoiKSK::SetMode(int nMode){
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
	void CEMSuDungDVKT_Theophong_TheogoiKSK::OnChuaVaoPhimSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
/*void CEMSuDungDVKT_Theophong_TheogoiKSK::OnFromDateChange(){
	
} */
/*void CEMSuDungDVKT_Theophong_TheogoiKSK::OnFromDateSetfocus(){
	
} */
/*void CEMSuDungDVKT_Theophong_TheogoiKSK::OnFromDateKillfocus(){
	
} */
int CEMSuDungDVKT_Theophong_TheogoiKSK::OnFromDateCheckValue()
{
	OnGoiKSKListLoadData();
	return 0;
} 
/*void CEMSuDungDVKT_Theophong_TheogoiKSK::OnToDateChange(){
	
} */
/*void CEMSuDungDVKT_Theophong_TheogoiKSK::OnToDateSetfocus(){
	
} */
/*void CEMSuDungDVKT_Theophong_TheogoiKSK::OnToDateKillfocus(){
	
} */
int CEMSuDungDVKT_Theophong_TheogoiKSK::OnToDateCheckValue()
{
	OnGoiKSKListLoadData();
	return 0;
} 
void CEMSuDungDVKT_Theophong_TheogoiKSK::OnRoomDblClick(){
	
} 
void CEMSuDungDVKT_Theophong_TheogoiKSK::OnRoomSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CEMSuDungDVKT_Theophong_TheogoiKSK::OnRoomDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEMSuDungDVKT_Theophong_TheogoiKSK::OnRoomLoadData()
{
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;	
	m_wndRoom.BeginLoad(); 
	int nCount;
	
	szSQL.Format(_T("SELECT hrl_id as id, ") \
				_T("	hrl_name as name, ") \
				_T("	hrl_deptid as deptid ") \
				_T(" FROM hms_roomlist ") \
				_T(" LEFT JOIN sys_dept ON (sd_id = hrl_deptid)") \
				_T(" WHERE sd_type = 'KB' AND hrl_deptid='TYC' AND HRL_ACTIVE='Y' ") \
				_T(" ORDER BY deptid, id "));
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	m_wndRoom.EndLoad(); 
	UpdateData(FALSE);
	return nCount;
}
/*void CEMSuDungDVKT_Theophong_TheogoiKSK::OnNameChange(){
	
} */
/*void CEMSuDungDVKT_Theophong_TheogoiKSK::OnNameSetfocus(){
	
} */
/*void CEMSuDungDVKT_Theophong_TheogoiKSK::OnNameKillfocus(){
	
} */
int CEMSuDungDVKT_Theophong_TheogoiKSK::OnNameCheckValue()
{
	OnGoiKSKListLoadData();
	return 0;
} 
void CEMSuDungDVKT_Theophong_TheogoiKSK::OnGoiKSKListDblClick(){
	
} 
void CEMSuDungDVKT_Theophong_TheogoiKSK::OnGoiKSKListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CEMSuDungDVKT_Theophong_TheogoiKSK::OnGoiKSKListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEMSuDungDVKT_Theophong_TheogoiKSK::OnGoiKSKListLoadData()
{
CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndGoiKSKList.BeginLoad(); 
	int nCount = 0;
	
	if(!m_szName.IsEmpty())
	{
	szWhere.AppendFormat(_T(" AND lower(hwp_name) like(lower('%s%s%s')) "), _T("%"), m_szName, _T("%"));
	}

		szSQL.Format(_T(" SELECT hec_contract_id,") \
		_T("   hec_no,  ") \
		_T("   hwp_name                            AS hec_company,") \
		_T("   hec_date                            as ngaykham") \
		_T(" FROM hms_exm_contract,") \
		_T("   hms_workplace") \
		_T(" WHERE hec_company_id=TO_CHAR(hwp_idx)") \
		_T(" AND hec_date BETWEEN to_timestamp('%s','YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s','YYYY-MM-DD HH24:MI:SS') %s ") \
		_T(" ORDER BY hec_contract_id DESC"), m_szFromDate, m_szToDate, szWhere);
	
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndGoiKSKList.AddItems(
			rs.GetValue(_T("hec_contract_id")), 
			rs.GetValue(_T("hec_no")), 
			rs.GetValue(_T("hec_company")),
			rs.GetValue(_T("ngaykham")),NULL);
		rs.MoveNext();
	}
	m_wndGoiKSKList.EndLoad(); 
	UpdateData(FALSE);
	return nCount;

}
void CEMSuDungDVKT_Theophong_TheogoiKSK::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, nMarkRow = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\THONGKEDICHVU_THEOPHONG_THEOGOI_KSK.xls"))) AfxMessageBox(_T("Chưa có Files ở đường dẫn Exports\\Template"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;

	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("hfg_name"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[4] > 0)
			{
				//xls.SetCellText(1, nMarkRow, _T("Tổng nhóm:"), FMT_TEXT, true);

				for(int i = 2; i < 30; i++)
				{
					xls.SetCellText(i, nMarkRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nMarkRow = nRow;
			nRow++;
		}
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("tendichvu"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("soluong"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("dongia"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("bsdoc"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		
		
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[4] > 0)
	{
		//xls.SetCellText(1, nMarkRow, _T("Tổng nhóm:"), FMT_TEXT, true);
		for(int i = 2; i < 30; i++)
		{
			xls.SetCellText(i, nMarkRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[4] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 2; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	
	xls.Save(_T("Exports\\Template\\THONGKEDICHVU_THEOPHONG_THEOGOI_KSK2.xls"));
	
} 
int CEMSuDungDVKT_Theophong_TheogoiKSK::OnAddCEMSuDungDVKT_Theophong_TheogoiKSK(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEMSuDungDVKT_Theophong_TheogoiKSK::OnEditCEMSuDungDVKT_Theophong_TheogoiKSK(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMSuDungDVKT_Theophong_TheogoiKSK::OnDeleteCEMSuDungDVKT_Theophong_TheogoiKSK(){
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
 		OnCancelCEMSuDungDVKT_Theophong_TheogoiKSK();
 	}
	return 0;
}
int CEMSuDungDVKT_Theophong_TheogoiKSK::OnSaveCEMSuDungDVKT_Theophong_TheogoiKSK()
{
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
 		//OnCEMSuDungDVKT_Theophong_TheogoiKSKListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEMSuDungDVKT_Theophong_TheogoiKSK::OnCancelCEMSuDungDVKT_Theophong_TheogoiKSK()
{
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
int CEMSuDungDVKT_Theophong_TheogoiKSK::OnCEMSuDungDVKT_Theophong_TheogoiKSKListLoadData()
{
	return 0;
}

int CEMSuDungDVKT_Theophong_TheogoiKSK::OnRoomSearchItem()
{
	int nSubSel = m_wndRoom.GetSubItemSel();
_tprintf(_T("\nSubSel: %d\n"), nSubSel);
	if (nSubSel < 0)
	{
		nSubSel = 0;
	}
	CHMSListSearchDialog dlg(&m_wndRoom, nSubSel);
	dlg.DoModal();
	return 0;
}

CString CEMSuDungDVKT_Theophong_TheogoiKSK::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szWhere1, szList, szGoiksk;

	for (int i = 0; i < m_wndRoom.GetItemCount();i++)
		if (m_wndRoom.GetCheck(i))
		{
			m_wndRoom.SetCurSel(i);
			if (!szList.IsEmpty())
				szList += _T(", ");
			szList.AppendFormat(_T("'%s'"), m_wndRoom.GetItemText(i, 0));
		}
		if(!szList.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND hpc_roomid IN (%s)"), szList);			
		}

	for (int i = 0; i < m_wndGoiKSKList.GetItemCount();i++)
		if (m_wndGoiKSKList.GetCheck(i))
		{
			m_wndGoiKSKList.SetCurSel(i);
			if (!szGoiksk.IsEmpty())
				szGoiksk += _T(", ");
			szGoiksk.AppendFormat(_T("'%s'"), m_wndGoiKSKList.GetItemText(i, 0));
		}
		if(!szGoiksk.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND hee_contract_id IN (%s)"), szGoiksk);			
		}
		
		szWhere.AppendFormat(_T("AND NVL(iv.hfe_posted, 'X')= 'Y' AND iv.hfe_status='P'"));	

			szSQL.Format(_T(" SELECT") \
			_T(" hfg_name, tendichvu,") \
			_T(" SUM(soluong) as soluong,") \
			_T(" dongia,") \
			_T(" SUM(thanhtien) as thanhtien,") \
			_T(" bsdoc") \
			_T(" FROM") \
			_T(" (") \
			_T(" SELECT hfg_name, ") \
			_T("   fe.hfe_desc                                   AS tendichvu,") \
			_T("   fe.HFE_QUANTITY                               AS soluong,") \
			_T("   fe.HFE_UNITPRICE                              AS dongia,") \
			_T("   fe.hfe_cost                                   AS thanhtien, ") \
			_T("   GET_USERNAME(HPC_PRACTITIONER)                AS bsdoc") \
			_T(" FROM hms_exm_employee") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON (hee_docno=hd_docno)") \
			_T(" LEFT JOIN hms_fee fe") \
			_T(" ON (hd_docno=fe.hfe_docno)") \
			_T(" LEFT JOIN hms_fee_invoice iv") \
			_T(" ON (fe.hfe_docno     =iv.hfe_docno") \
			_T(" AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
			_T(" LEFT JOIN hms_pacsorder") \
			_T(" ON (fe.hfe_docno  = hpc_docno") \
			_T(" AND fe.hfe_orderid=hpc_orderid)") \
			_T(" LEFT JOIN hms_fee_group") \
			_T(" ON (hpc_groupid=hfg_id)") \
			_T(" LEFT JOIN hms_workplace") \
			_T(" ON (hee_company_id =TO_CHAR(hwp_idx))") \
			_T(" WHERE iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
			_T(" AND NVL(iv.hfe_posted, 'X') = 'Y'") \
			_T(" AND iv.hfe_status           ='P'") \
			_T(" AND hee_isactive            ='Y'") \
			_T(" AND fe.hfe_category        <> 'Y'") \
			_T(" AND fe.hfe_status          <> 'C'") \
			_T(" AND NVL(iv.hfe_status,'X') <> 'C'") \
			_T(" AND hpc_status              = 'T'") \
			_T(" AND hpc_deptid              ='TYC'") \
			_T(" )") \
			_T(" GROUP BY hfg_name, tendichvu, dongia, bsdoc") \
			_T(" ORDER BY hfg_name"), m_szFromDate, m_szToDate, szWhere);

		//_msg(_T("%s"), szSQL);
		return szSQL;
}