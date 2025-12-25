#include "stdafx.h"
#include "MAMaterialUsageTrack.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMAMaterialUsageTrack *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMAMaterialUsageTrack *)pWnd)->OnToDateCheckValue();
} 
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAMaterialUsageTrack* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialUsageTrack *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack *)pWnd)->OnItemGroupAddNew();
}*/
static long _OnDepartmentListLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialUsageTrack*)pWnd)->OnDepartmentListLoadData();
} 
static void _OnDepartmentListDblClickFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack*)pWnd)->OnDepartmentListDblClick();
} 
static void _OnDepartmentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMAMaterialUsageTrack*)pWnd)->OnDepartmentListSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentListDeleteItemFnc(CWnd *pWnd){
	 return ((CMAMaterialUsageTrack*)pWnd)->OnDepartmentListDeleteItem();
} 
static long _OnStorageListLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialUsageTrack*)pWnd)->OnStorageListLoadData();
} 
static void _OnStorageListDblClickFnc(CWnd *pWnd){
	((CMAMaterialUsageTrack*)pWnd)->OnStorageListDblClick();
} 
static void _OnStorageListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMAMaterialUsageTrack*)pWnd)->OnStorageListSelectChange(nOldItem, nNewItem);
} 
static int _OnStorageListDeleteItemFnc(CWnd *pWnd){
	 return ((CMAMaterialUsageTrack*)pWnd)->OnStorageListDeleteItem();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMAMaterialUsageTrack *pVw = (CMAMaterialUsageTrack *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddMAMaterialUsageTrackFnc(CWnd *pWnd){
	 return ((CMAMaterialUsageTrack*)pWnd)->OnAddMAMaterialUsageTrack();
} 
static int _OnEditMAMaterialUsageTrackFnc(CWnd *pWnd){
	 return ((CMAMaterialUsageTrack*)pWnd)->OnEditMAMaterialUsageTrack();
} 
static int _OnDeleteMAMaterialUsageTrackFnc(CWnd *pWnd){
	 return ((CMAMaterialUsageTrack*)pWnd)->OnDeleteMAMaterialUsageTrack();
} 
static int _OnSaveMAMaterialUsageTrackFnc(CWnd *pWnd){
	 return ((CMAMaterialUsageTrack*)pWnd)->OnSaveMAMaterialUsageTrack();
} 
static int _OnCancelMAMaterialUsageTrackFnc(CWnd *pWnd){
	 return ((CMAMaterialUsageTrack*)pWnd)->OnCancelMAMaterialUsageTrack();
} 
CMAMaterialUsageTrack::CMAMaterialUsageTrack(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMAMaterialUsageTrack::~CMAMaterialUsageTrack(){
}
void CMAMaterialUsageTrack::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 540);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 60, 90, 85);
	m_wndItemGroup.Create(this,95, 60, 425, 85); 
	m_wndDepartmentList.Create(this,10, 90, 425, 310); 
	m_wndDepartmentList.SetCheckBox(true);
	m_wndStorageList.Create(this,10, 315, 425, 535); 
	m_wndStorageList.SetCheckBox(true);
	m_wndExport.Create(this, _T("&Export"), 345, 545, 425, 570);

}
void CMAMaterialUsageTrack::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndItemGroup.SetCheckValue(true);
	m_wndItemGroup.LimitText(1024);

	m_wndStorageList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorageList.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndDepartmentList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartmentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndItemGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndItemGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);






}
void CMAMaterialUsageTrack::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndItemGroup.SetEvent(WE_SELENDOK, _OnItemGroupSelendokFnc);
	//m_wndItemGroup.SetEvent(WE_SETFOCUS, _OnItemGroupSetfocusFnc);
	//m_wndItemGroup.SetEvent(WE_KILLFOCUS, _OnItemGroupKillfocusFnc);
	m_wndItemGroup.SetEvent(WE_SELCHANGE, _OnItemGroupSelectChangeFnc);
	m_wndItemGroup.SetEvent(WE_LOADDATA, _OnItemGroupLoadDataFnc);
	//m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
	m_wndDepartmentList.SetEvent(WE_SELCHANGE, _OnDepartmentListSelectChangeFnc);
	m_wndDepartmentList.SetEvent(WE_LOADDATA, _OnDepartmentListLoadDataFnc);
	m_wndDepartmentList.SetEvent(WE_DBLCLICK, _OnDepartmentListDblClickFnc);
	m_wndDepartmentList.AddEvent(1, _T("Delete"), _OnDepartmentListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndStorageList.SetEvent(WE_SELCHANGE, _OnStorageListSelectChangeFnc);
	m_wndStorageList.SetEvent(WE_LOADDATA, _OnStorageListLoadDataFnc);
	m_wndStorageList.SetEvent(WE_DBLCLICK, _OnStorageListDblClickFnc);
	m_wndStorageList.AddEvent(1, _T("Delete"), _OnStorageListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	OnDepartmentListLoadData();
	OnStorageListLoadData();
	UpdateData(false);

}
void CMAMaterialUsageTrack::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);

}
void CMAMaterialUsageTrack::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMAMaterialUsageTrack::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CMAMaterialUsageTrack::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szItemGroupKey.Empty();

}
int CMAMaterialUsageTrack::SetMode(int nMode){
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
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CMAMaterialUsageTrack::OnFromDateChange(){
	
} */
/*void CMAMaterialUsageTrack::OnFromDateSetfocus(){
	
} */
/*void CMAMaterialUsageTrack::OnFromDateKillfocus(){
	
} */
int CMAMaterialUsageTrack::OnFromDateCheckValue(){
	return 0;
} 
/*void CMAMaterialUsageTrack::OnToDateChange(){
	
} */
/*void CMAMaterialUsageTrack::OnToDateSetfocus(){
	
} */
/*void CMAMaterialUsageTrack::OnToDateKillfocus(){
	
} */
int CMAMaterialUsageTrack::OnToDateCheckValue(){
	return 0;
} 
void CMAMaterialUsageTrack::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMAMaterialUsageTrack::OnItemGroupSelendok(){
	 
}
/*void CMAMaterialUsageTrack::OnItemGroupSetfocus(){
	
}*/
/*void CMAMaterialUsageTrack::OnItemGroupKillfocus(){
	
}*/
long CMAMaterialUsageTrack::OnItemGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T(" SELECT DISTINCT product_type_id, ") \
		_T("                 product_type_name ") \
		_T(" FROM   (SELECT CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
		_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'A0000' ") \
		_T("                ELSE mpt_product_type_id ") \
		_T("                END product_type_id, ") \
		_T("                CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
		_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'Thu\x1ED1\x63' ") \
		_T("                ELSE mpt_name ") \
		_T("                END product_type_name ") \
		_T("         FROM   m_product_type ") \
		_T("         WHERE  mpt_org_id = '%s' ") \
		_T("            AND mpt_isactive = 'Y' AND mpt_product_type_id <> 'A1000') ") \
		_T(" ORDER BY product_type_id"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	m_wndItemGroup.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndItemGroup.AddItems(
			rs.GetValue(_T("product_type_id")),
			rs.GetValue(_T("product_type_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMAMaterialUsageTrack::OnItemGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMAMaterialUsageTrack::OnDepartmentListDblClick(){
	
} 
void CMAMaterialUsageTrack::OnDepartmentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CMAMaterialUsageTrack::OnDepartmentListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CMAMaterialUsageTrack::OnDepartmentListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND msl_org_id = 'MA'"));
	return pMF->LoadStorageIntoListCtrl(&m_wndStorageList, szFilter);
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartmentList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartmentList.AddItems(
		rs.MoveNext();
	}
	m_wndDepartmentList.EndLoad(); 
	return nCount;
*/
}
void CMAMaterialUsageTrack::OnStorageListDblClick(){
	
} 
void CMAMaterialUsageTrack::OnStorageListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CMAMaterialUsageTrack::OnStorageListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CMAMaterialUsageTrack::OnStorageListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartmentList.BeginLoad(); 
	m_wndDepartmentList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_type IN ('DT', 'KB') order by  sd_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartmentList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDepartmentList.EndLoad(); 
	return nCount;
}
void CMAMaterialUsageTrack::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szNewGroup, szOldGroup;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nTemp = 0, nTotal[3];
	for (int i = 0; i < 4; i++)
	{
		nTotal[i] = 0;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 20);
	xls.SetColumnWidth(5, 20);
	xls.SetColumnWidth(6, 20);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(0, 2, _T("T\xCCNH H\xCCNH S\x1EEC \x44\x1EE4NG V\x1EACT T\x1AF Y T\x1EBE \x44VYT"), FMT_TEXT | FMT_CENTER , true, 14);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(1, 4, _T("T\xEAn v\x1EADt t\x1B0"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(2, 4, _T("\x110VT"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(3, 4, _T("S\x1ED1 l\x1B0\x1EE3ng \x44V"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(4, 4, _T("S\x1ED1 l\x1B0\x1EE3ng \x42HYT"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(5, 4, _T("S\x1ED1 l\x1B0\x1EE3ng Qu\xE2n"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(6, 4, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER , true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 6);
	xls.SetMerge(3, 3, 0, 6);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 5;
	nCol = 0;
	int nIDx = 1;
	while(!rs.IsEOF()){
		rs.GetValue(_T("product_groupname"), szNewGroup);
		if(szNewGroup != szOldGroup)
		{
			if(nTotal[3] > 0)
			{
				xls.SetCellMergedColumns(nCol, nRow, 3);
				xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_CENTER, true);
				for (int i = 0; i < 4; i++)
				{
					xls.SetCellText(nCol+3+i, nRow, int2str(nTotal[i]), FMT_NUMBER1 | FMT_RIGHT);
					nTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 7);
			xls.SetCellText(nCol, nRow, szNewGroup, FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nIDx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIDx++), FMT_TEXT);
		rs.GetValue(_T("product_name"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("product_purchase_uomname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("dv"), nTemp);
		nTotal[0] += nTemp;
		xls.SetCellText(nCol+3, nRow, int2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
		rs.GetValue(_T("bhyt"), nTemp);
		nTotal[1] += nTemp;
		xls.SetCellText(nCol+4, nRow, int2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
		rs.GetValue(_T("quan"), nTemp);
		nTotal[2] += nTemp;
		xls.SetCellText(nCol+5, nRow, int2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
		rs.GetValue(_T("tong"), nTemp);
		nTotal[3] += nTemp;
		xls.SetCellText(nCol+6, nRow, int2str(nTemp), FMT_NUMBER1 | FMT_RIGHT);
		nRow++;
		rs.MoveNext();
	}
	if(nTotal[3] > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 3);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_CENTER, true);
		for (int i = 0; i < 4; i++)
		{
			xls.SetCellText(nCol+3+i, nRow, int2str(nTotal[i]), FMT_NUMBER1 | FMT_RIGHT);
		}
		nRow++;
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\tinhhinhsudungvattuyte.xls"));
} 
int CMAMaterialUsageTrack::OnAddMAMaterialUsageTrack(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMAMaterialUsageTrack::OnEditMAMaterialUsageTrack(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMAMaterialUsageTrack::OnDeleteMAMaterialUsageTrack(){
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
 		OnCancelMAMaterialUsageTrack();
 	}
	return 0;
}
int CMAMaterialUsageTrack::OnSaveMAMaterialUsageTrack(){
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
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnMAMaterialUsageTrackListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMAMaterialUsageTrack::OnCancelMAMaterialUsageTrack(){
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
int CMAMaterialUsageTrack::OnMAMaterialUsageTrackListLoadData(){
	return 0;
}
CString CMAMaterialUsageTrack::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CString szSQL, szWhere, szStorages, szDepts;

	szWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
	
	for (int i = 0; i < m_wndStorageList.GetItemCount();i++)
	{
		if (m_wndStorageList.GetCheck(i))
		{
			m_wndStorageList.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("'%s'"), m_wndStorageList.GetItemText(i, 0));
		}
	}
	if(!szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);

	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCurSel(i);
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), m_wndDepartmentList.GetItemText(i, 0));

		}
	}
	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" AND mt_department_to_id IN(%s)"), szDepts);

	szSQL.Format(_T(" SELECT") \
		_T(" product_groupid,") \
		_T(" product_groupname,") \
		_T(" product_name,") \
		_T(" GET_UOMNAME(product_purchase_uomid) as product_purchase_uomname,") \
		_T(" CASE WHEN ho_type = 'S' THEN SUM(hpol_qtyissue) ELSE 0 END AS dv,") \
		_T(" CASE WHEN ho_type = 'I' THEN SUM(hpol_qtyissue) ELSE 0 END AS bhyt,") \
		_T(" CASE WHEN ho_type = 'D' THEN SUM(hpol_qtyissue) ELSE 0 END AS quan,") \
		_T(" CASE WHEN ho_type IN('S', 'I', 'D') THEN SUM(hpol_qtyissue) ELSE 0 END AS tong") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN purchase_orderline2 ON (mt_transaction_id = pol_transaction_id )") \
		_T(" LEFT JOIN hms_ipharmaorderline ON (hpol_orderid = pol_orderid AND hpol_product_id = pol_product_id)") \
		_T(" LEFT JOIN hms_ipharmaorder ON (hpo_docno = hpol_docno AND hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN hms_object ON (ho_id = hpo_object_id)") \
		_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = pol_product_item_id)") \
		_T(" WHERE mt_doctype = 'CON'") \
		_T(" AND mt_status IN('A')") \
		_T(" AND product_org_id = 'MA' %s") \
		_T(" GROUP BY product_groupid, product_groupname,") \
		_T(" product_name,") \
		_T(" product_purchase_uomid,") \
		_T(" ho_type") \
		_T(" ORDER BY product_groupid, product_name"), szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}
