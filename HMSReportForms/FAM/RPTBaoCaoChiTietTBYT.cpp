#include "stdafx.h"
#include "RPTBaoCaoChiTietTBYT.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CRPTBaoCaoChiTietTBYT *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoChiTietTBYT *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoChiTietTBYT *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTBaoCaoChiTietTBYT *)pWnd)->OnDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTBaoCaoChiTietTBYT* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTBaoCaoChiTietTBYT *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoChiTietTBYT *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoChiTietTBYT *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTBaoCaoChiTietTBYT *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTBaoCaoChiTietTBYT *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTBaoCaoChiTietTBYT* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CRPTBaoCaoChiTietTBYT *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoChiTietTBYT *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoChiTietTBYT *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CRPTBaoCaoChiTietTBYT *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CRPTBaoCaoChiTietTBYT *)pWnd)->OnTypeAddNew();
}*/
static void _OnInventoriedSelectFnc(CWnd *pWnd){
	  ((CRPTBaoCaoChiTietTBYT*)pWnd)->OnInventoriedSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CRPTBaoCaoChiTietTBYT*)pWnd)->OnAllSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTBaoCaoChiTietTBYT *pVw = (CRPTBaoCaoChiTietTBYT *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTBaoCaoChiTietTBYT *pVw = (CRPTBaoCaoChiTietTBYT *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRPTBaoCaoChiTietTBYT *pVw = (CRPTBaoCaoChiTietTBYT *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddRPTBaoCaoChiTietTBYTFnc(CWnd *pWnd){
	 return ((CRPTBaoCaoChiTietTBYT*)pWnd)->OnAddRPTBaoCaoChiTietTBYT();
} 
static int _OnEditRPTBaoCaoChiTietTBYTFnc(CWnd *pWnd){
	 return ((CRPTBaoCaoChiTietTBYT*)pWnd)->OnEditRPTBaoCaoChiTietTBYT();
} 
static int _OnDeleteRPTBaoCaoChiTietTBYTFnc(CWnd *pWnd){
	 return ((CRPTBaoCaoChiTietTBYT*)pWnd)->OnDeleteRPTBaoCaoChiTietTBYT();
} 
static int _OnSaveRPTBaoCaoChiTietTBYTFnc(CWnd *pWnd){
	 return ((CRPTBaoCaoChiTietTBYT*)pWnd)->OnSaveRPTBaoCaoChiTietTBYT();
} 
static int _OnCancelRPTBaoCaoChiTietTBYTFnc(CWnd *pWnd){
	 return ((CRPTBaoCaoChiTietTBYT*)pWnd)->OnCancelRPTBaoCaoChiTietTBYT();
} 
CRPTBaoCaoChiTietTBYT::CRPTBaoCaoChiTietTBYT(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTBaoCaoChiTietTBYT::~CRPTBaoCaoChiTietTBYT(){
}
void CRPTBaoCaoChiTietTBYT::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("\x42\xE1o \x63\xE1o \x63hi ti\x1EBFt thi\x1EBFt \x62\x1ECB y t\x1EBF"), 5, 5, 490, 120);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 90, 55);
	m_wndDate.Create(this,95, 30, 195, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 200, 30, 280, 55);
	m_wndDepartment.Create(this,285, 30, 485, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 60, 90, 85);
	m_wndType.Create(this,95, 60, 485, 85); 
	m_wndInventoried.Create(this, _T("Inventoried"), 95, 90, 195, 115);
	m_wndAll.Create(this, _T("All"), 200, 90, 300, 115);
	m_wndPrint.Create(this, _T("&Print"), 240, 125, 320, 150);
	m_wndExport.Create(this, _T("&Export"), 325, 125, 405, 150);
	m_wndClose.Create(this, _T("&Close"), 410, 125, 490, 150);

}
void CRPTBaoCaoChiTietTBYT::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

}
void CRPTBaoCaoChiTietTBYT::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndInventoried.SetEvent(WE_CLICK, _OnInventoriedSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);

}
void CRPTBaoCaoChiTietTBYT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Radio(pDX, m_wndInventoried.GetDlgCtrlID(), m_nInventoried);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);

}
void CRPTBaoCaoChiTietTBYT::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTBaoCaoChiTietTBYT::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTBaoCaoChiTietTBYT::SetDefaultValues(){

	m_szDate.Empty();
	m_szDepartmentKey.Empty();
	m_szTypeKey.Empty();
	m_nInventoried=1;
	m_nAll=0;

}
int CRPTBaoCaoChiTietTBYT::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_szDate = pMF->GetSysDate();
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
/*void CRPTBaoCaoChiTietTBYT::OnDateChange(){
	
} */
/*void CRPTBaoCaoChiTietTBYT::OnDateSetfocus(){
	
} */
/*void CRPTBaoCaoChiTietTBYT::OnDateKillfocus(){
	
} */
int CRPTBaoCaoChiTietTBYT::OnDateCheckValue(){
	return 0;
} 
void CRPTBaoCaoChiTietTBYT::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTBaoCaoChiTietTBYT::OnDepartmentSelendok(){
	 
}
/*void CRPTBaoCaoChiTietTBYT::OnDepartmentSetfocus(){
	
}*/
/*void CRPTBaoCaoChiTietTBYT::OnDepartmentKillfocus(){
	
}*/
long CRPTBaoCaoChiTietTBYT::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept %s ORDER BY sd_id"),
		         szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTBaoCaoChiTietTBYT::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTBaoCaoChiTietTBYT::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTBaoCaoChiTietTBYT::OnTypeSelendok(){
	 
}
/*void CRPTBaoCaoChiTietTBYT::OnTypeSetfocus(){
	
}*/
/*void CRPTBaoCaoChiTietTBYT::OnTypeKillfocus(){
	
}*/
long CRPTBaoCaoChiTietTBYT::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" and famc_id='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT famc_id AS id, famc_name AS description FROM fam_category")\
				 _T(" WHERE 1=1 %s ORDER BY famc_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTBaoCaoChiTietTBYT::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTBaoCaoChiTietTBYT::OnInventoriedSelect(){
	m_nInventoried = 0;
	m_nAll = 1;
}
void CRPTBaoCaoChiTietTBYT::OnAllSelect(){
	m_nInventoried = 1;
	m_nAll = 0;
}
void CRPTBaoCaoChiTietTBYT::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTBaoCaoChiTietTBYT::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;		double grpCost[11];
	double grpLine[11];
	double cost = 0;
	
	for (int i =0; i <= 11; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
	}	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 40);	xls.SetColumnWidth(2, 11);	xls.SetColumnWidth(3, 9);	xls.SetColumnWidth(4, 9);	xls.SetColumnWidth(5, 9);	xls.SetColumnWidth(6, 8);	xls.SetColumnWidth(7, 13);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 15);	CString szTemp;	szTemp.Format(_T("\x42\xC1O \x43\xC1O T\x1ED4NG H\x1EE2P TR\x41NG \x42\x1ECA Y T\x1EBE KHO\x41 %s"), m_szDepartmentKey);	xls.SetCellText(0, 0, szTemp, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	szTemp.Format(_T("NG\xC0Y \x42\xC1O \x43\xC1O: %s"), CDate::Convert(m_szDate, yyyymmdd||ddmmyyyy));	xls.SetCellText(0, 1, szTemp, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 2, _T("T\xCAN THI\x1EBET \x42\x1ECA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 2, _T("MO\x44\x45L"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 2, _T("S\x45RI\x41L"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 2, _T("H\xC3NG S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 2, _T("N\x1AF\x1EDA\x43 S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 2, _T("N\x102M S\x1EEC \x44\x1EE4NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 2, _T("NGUY\xCAN GI\xC1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 2, _T("\x43\x1EA4P \x43H\x1EA4T L\x1AF\x1EE2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 2, _T("GI\xC1 TR\x1ECA \x43\xD2N L\x1EA0I"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 8);	xls.SetMerge(1, 1, 0, 8);	szSQL = GetQueryString();	_fmsg(_T("%s"), szSQL);	rs.ExecSQL(szSQL);	nRow = 4;	nCol = 0;	int nCount = 1;	CString szCount;	while(!rs.IsEOF()){		szCount.Format(_T("%d"), nCount++);		xls.SetCellText(nCol+0, nRow, szCount, FMT_TEXT);		rs.GetValue(_T("fa_name"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_model"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_serial"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hangsx"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_madein"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("usingyear"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("fa_purchaseprice"), cost);		grpLine[7] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("capcl"), tmpStr);		xls.SetCellText(nCol+8	, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("gtcl"), cost);		grpLine[9] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);		nRow++;			rs.MoveNext();	}	if (grpLine[7] > 0)
		{
			nRow++;
			CString szField, szAmount, szTmp2;
			TranslateString(_T("T\x1ED5ng \x63\x1ED9ng:"), szAmount);
			szTmp2.Format(_T("%s"), szAmount);
			//xls.SetCellMergedColumns(1,nRow,10);
			xls.SetCellText(1, nRow, szTmp2, FMT_TEXT, true);
			for (int i = 5; i <= 11; i++)
			{				
				szTmp2.Format(_T("%.2f"), grpLine[i]);
				xls.SetCellText(i, nRow, szTmp2, FMT_NUMBER1 | FMT_CENTER, true);
			}	
		}	nRow++;	xls.SetMerge(nRow, nRow, 1, 2);	xls.SetCellText(nCol+1, nRow, _T("\x43H\x1EE6 NHI\x1EC6M KHO\x41 TR\x41NG \x42\x1ECA"), FMT_CENTER, true);		CString szTmp3;	xls.SetMerge(nRow, nRow, 5, 9);	xls.SetMerge(nRow+1, nRow+1, 5, 9);	szTmp3.Format(_T("H\xE0 N\x1ED9i, ng\xE0y %s th\xE1ng %s n\x103m %s"), m_szDate.Right(2), m_szDate.Mid(5, 2), m_szDate.Left(4));	xls.SetCellText(nCol+5, nRow, szTmp3, FMT_CENTER);	xls.SetCellText(nCol+5, nRow+1, _T("NG\x1AF\x1EDCI \x42\xC1O \x43\xC1O"), FMT_CENTER, true);	EndWaitCursor();	xls.Save(_T("Exports\\Bao Cao Chi Tiet TBYT.xls"));
} 
void CRPTBaoCaoChiTietTBYT::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CRPTBaoCaoChiTietTBYT::OnAddRPTBaoCaoChiTietTBYT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTBaoCaoChiTietTBYT::OnEditRPTBaoCaoChiTietTBYT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTBaoCaoChiTietTBYT::OnDeleteRPTBaoCaoChiTietTBYT(){
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
 		OnCancelRPTBaoCaoChiTietTBYT();
 	}
	return 0;
}
int CRPTBaoCaoChiTietTBYT::OnSaveRPTBaoCaoChiTietTBYT(){
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
 		//OnRPTBaoCaoChiTietTBYTListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTBaoCaoChiTietTBYT::OnCancelRPTBaoCaoChiTietTBYT(){
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
int CRPTBaoCaoChiTietTBYT::OnRPTBaoCaoChiTietTBYTListLoadData(){
	return 0;
}
CString CRPTBaoCaoChiTietTBYT::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere;

	if(!m_szDepartmentKey.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_department = '%s'"), m_szDepartmentKey);	}	if(!m_szTypeKey.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_category = '%s'"), m_szTypeKey);	}
	
	if(m_nInventoried == 0 || m_nAll == 1)
	{
		szSQL.Format(_T("SELECT fa_assetno, fa_name, fa_model, fa_serial, usingyear, fa_purchaseprice, fa_madein, capcl, hangsx, ") \
					_T(" case when gtcl > 0 then gtcl else 0 end as gtcl ") \
					_T(" FROM( ") \
					_T("	select fa_assetno, fa_name, fa_model, fa_serial, usingyear, fa_purchaseprice, fa_madein, capcl, hangsx, ") \
					_T("		fa_purchaseprice - (fa_purchaseprice * ((deprrate / 100) * deprtime)) as gtcl ") \
					_T("	FROM ") \
					_T("		( ") \
					_T("		SELECT fa_assetno,fa_name,fa_model,fa_serial, (SELECT famm_name FROM fam_manufacture WHERE famm_id = fa_mfgid) AS hangsx, ") \
					_T("			case when extract(YEAR FROM fa_useddate) = 1752 then 0 else extract(YEAR FROM fa_useddate) end AS usingyear,  ") \
					_T("			fa_purchaseprice, (SELECT sc_name FROM sys_country WHERE sc_id = fa_madein) AS fa_madein,  ") \
					_T("			(SELECT MAX(fil_qtylevel) FROM fam_invent_line LEFT JOIN fam_invent ON(fi_orderno = fil_orderno) ") \
					_T("			WHERE fil_assetno = fa_assetno AND fi_status = 'Y') AS capcl,  ") \
					_T("			(select fast_deprrate from fam_assettype where fast_id = fa_type) as deprrate,  ") \
					_T("			extract(year from sysdate) - extract(year from fa_useddate) as deprtime ") \
					_T("		FROM fam_asset  ") \
					_T("		WHERE fa_createddate <= to_timestamp ('%s 23:59:59', 'YYYY/MM/DD HH24:MI:SS') AND fa_org_id = 'FAM' ") \
					_T("		AND fa_assetno IN (select fil_assetno from fam_invent_line) %s) )"), m_szDate, szWhere);
	}
	else
	{
		szSQL.Format(_T("SELECT fa_assetno, fa_name, fa_model, fa_serial, usingyear, fa_purchaseprice, fa_madein, capcl, hangsx, ") \
					_T(" case when gtcl > 0 then gtcl else 0 end as gtcl ") \
					_T(" FROM( ") \
					_T("	select fa_assetno, fa_name, fa_model, fa_serial, usingyear, fa_purchaseprice, fa_madein, capcl, hangsx, ") \
					_T("		fa_purchaseprice - (fa_purchaseprice * ((deprrate / 100) * deprtime)) as gtcl ") \
					_T("	FROM ") \
					_T("		( ") \
					_T("		SELECT fa_assetno,fa_name,fa_model,fa_serial,  (SELECT famm_name FROM fam_manufacture WHERE famm_id = fa_mfgid) AS hangsx,") \
					_T("			case when extract(YEAR FROM fa_useddate) = 1752 then 0 else extract(YEAR FROM fa_useddate) end AS usingyear,  ") \
					_T("			fa_purchaseprice, (SELECT sc_name FROM sys_country WHERE sc_id = fa_madein) AS fa_madein,  ") \
					_T("			(SELECT MAX(fil_qtylevel) FROM fam_invent_line LEFT JOIN fam_invent ON(fi_orderno = fil_orderno) ") \
					_T("			WHERE fil_assetno = fa_assetno AND fi_status = 'Y') AS capcl,  ") \
					_T("			(select fast_deprrate from fam_assettype where fast_id = fa_type) as deprrate,  ") \
					_T("			extract(year from sysdate) - extract(year from fa_useddate) as deprtime ") \
					_T("		FROM fam_asset  ") \
					_T("		WHERE fa_createddate <= to_timestamp ('%s 23:59:59', 'YYYY/MM/DD HH24:MI:SS') AND fa_org_id = 'FAM' ") \
					_T("		%s) )"), m_szDate, szWhere);
	}
	return szSQL;
}