#include "stdafx.h"
#include "BloodBankListServicePostedEX.h"
#include "HMSMainFrame.h"

static int _OnObjectCheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicePostedEX*)pWnd)->OnObjectCheckAll();
}
static int _OnObjectUncheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicePostedEX*)pWnd)->OnObjectUncheckAll();
}
//-----------------------------------------------------
static int _OnDeptCheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicePostedEX*)pWnd)->OnDeptCheckAll();
}
static int _OnDeptUncheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicePostedEX*)pWnd)->OnDeptUncheckAll();
}
//-----------------------------------------------------
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicePostedEX*)pWnd)->OnListCheckAll();
}
static int _OnListUncheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicePostedEX*)pWnd)->OnListUncheckAll();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBloodBankListServicePostedEX *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBloodBankListServicePostedEX *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBloodBankListServicePostedEX *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBloodBankListServicePostedEX *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBloodBankListServicePostedEX *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBloodBankListServicePostedEX *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBloodBankListServicePostedEX *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBloodBankListServicePostedEX *)pWnd)->OnToDateCheckValue();
} 
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CBloodBankListServicePostedEX*)pWnd)->OnObjectLoadData();
} 
static void _OnObjectDblClickFnc(CWnd *pWnd){
	((CBloodBankListServicePostedEX*)pWnd)->OnObjectDblClick();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBloodBankListServicePostedEX*)pWnd)->OnObjectSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectDeleteItemFnc(CWnd *pWnd){
	 return ((CBloodBankListServicePostedEX*)pWnd)->OnObjectDeleteItem();
} 
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBloodBankListServicePostedEX*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CBloodBankListServicePostedEX*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBloodBankListServicePostedEX*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CBloodBankListServicePostedEX*)pWnd)->OnDepartmentDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBloodBankListServicePostedEX*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBloodBankListServicePostedEX*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBloodBankListServicePostedEX*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBloodBankListServicePostedEX*)pWnd)->OnListDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CBloodBankListServicePostedEX *pVw = (CBloodBankListServicePostedEX *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBloodBankListServicePostedEX *pVw = (CBloodBankListServicePostedEX *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddBloodBankListServiceFnc(CWnd *pWnd){
	 return ((CBloodBankListServicePostedEX*)pWnd)->OnAddBloodBankListService();
} 
static int _OnEditBloodBankListServiceFnc(CWnd *pWnd){
	 return ((CBloodBankListServicePostedEX*)pWnd)->OnEditBloodBankListService();
} 
static int _OnDeleteBloodBankListServiceFnc(CWnd *pWnd){
	 return ((CBloodBankListServicePostedEX*)pWnd)->OnDeleteBloodBankListService();
} 
static int _OnSaveBloodBankListServiceFnc(CWnd *pWnd){
	 return ((CBloodBankListServicePostedEX*)pWnd)->OnSaveBloodBankListService();
} 
static int _OnCancelBloodBankListServiceFnc(CWnd *pWnd){
	 return ((CBloodBankListServicePostedEX*)pWnd)->OnCancelBloodBankListService();
} 
CBloodBankListServicePostedEX::CBloodBankListServicePostedEX(CWnd *pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBloodBankListServicePostedEX::~CBloodBankListServicePostedEX(){
}
void CBloodBankListServicePostedEX::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 395, 55);
	m_wndToDate.Create(this,400, 30, 570, 55); 
	m_wndReportCondition.Create(this, _T("Report Condition"), 6, 5, 576, 545);
	m_wndObject.Create(this,10, 59, 570, 196); 
	m_wndDepartment.Create(this,10, 199, 570, 369); 
	m_wndList.Create(this,10, 373, 570, 540); 
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 385, 550, 495, 575);
	m_wndExport.Create(this, _T("&Export"), 500, 550, 575, 575);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Object"), CFMT_TEXT, 450);
	m_wndObject.SetCheckBox(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Department"), CFMT_TEXT, 450);
	m_wndDepartment.SetCheckBox(true);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("\x43h\x1EBF Ph\x1EA9m"), CFMT_TEXT, 450);
	m_wndList.SetCheckBox(true);

}
void CBloodBankListServicePostedEX::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
}
void CBloodBankListServicePostedEX::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	m_wndObject.SetEvent(WE_DBLCLICK, _OnObjectDblClickFnc);
	m_wndObject.AddEvent(1, _T("Check All"), _OnObjectCheckAllFnc);
	m_wndObject.AddEvent(2, _T("UnCheck All"), _OnObjectUncheckAllFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_wndDepartment.SetEvent(WE_DBLCLICK, _OnDepartmentDblClickFnc);
	m_wndDepartment.AddEvent(1, _T("Check All"), _OnDeptCheckAllFnc);
	m_wndDepartment.AddEvent(2, _T("UnCheck All"), _OnDeptUncheckAllFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUncheckAllFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnObjectLoadData();
	OnDepartmentLoadData();
	OnListLoadData();
	

}
void CBloodBankListServicePostedEX::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBloodBankListServicePostedEX::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
int CBloodBankListServicePostedEX::OnObjectCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndObject.GetItemCount(); i++){
		m_wndObject.SetCheck(i, true);
	}
	return 0;	
}

int CBloodBankListServicePostedEX::OnObjectUncheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndObject.GetItemCount(); i++){
		m_wndObject.SetCheck(i, false);
	}
	return 0;	
}
int CBloodBankListServicePostedEX::OnDeptCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndDepartment.GetItemCount(); i++){
		m_wndDepartment.SetCheck(i, true);
	}
	return 0;	
}

int CBloodBankListServicePostedEX::OnDeptUncheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndDepartment.GetItemCount(); i++){
		m_wndDepartment.SetCheck(i, false);
	}
	return 0;	
}
int CBloodBankListServicePostedEX::OnListCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return 0;	
}

int CBloodBankListServicePostedEX::OnListUncheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return 0;	
}
void CBloodBankListServicePostedEX::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CBloodBankListServicePostedEX::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBloodBankListServicePostedEX::SetMode(int nMode){
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
/*void CBloodBankListServicePostedEX::OnFromDateChange(){
	
} */
/*void CBloodBankListServicePostedEX::OnFromDateSetfocus(){
	
} */
/*void CBloodBankListServicePostedEX::OnFromDateKillfocus(){
	
} */
int CBloodBankListServicePostedEX::OnFromDateCheckValue(){
	return 0;
} 
/*void CBloodBankListServicePostedEX::OnToDateChange(){
	
} */
/*void CBloodBankListServicePostedEX::OnToDateSetfocus(){
	
} */
/*void CBloodBankListServicePostedEX::OnToDateKillfocus(){
	
} */
int CBloodBankListServicePostedEX::OnToDateCheckValue(){
	return 0;
} 
void CBloodBankListServicePostedEX::OnObjectDblClick(){
	
} 
void CBloodBankListServicePostedEX::OnObjectSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
} 
int CBloodBankListServicePostedEX::OnObjectDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBloodBankListServicePostedEX::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndObject.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as description FROM hms_object ORDER BY cast(id as integer)"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	m_wndObject.EndLoad(); 
	return nCount;
}
void CBloodBankListServicePostedEX::OnDepartmentDblClick(){
	
} 
void CBloodBankListServicePostedEX::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CBloodBankListServicePostedEX::OnDepartmentDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBloodBankListServicePostedEX::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartment.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type IN ('DT','KB','XN') order by id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndDepartment.EndLoad(); 
	return nCount;
}
void CBloodBankListServicePostedEX::OnListDblClick(){
	
} 
void CBloodBankListServicePostedEX::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CBloodBankListServicePostedEX::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBloodBankListServicePostedEX::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select mp_product_id id ,mp_name name from m_product where mp_org_id='BB' Order by mp_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBloodBankListServicePostedEX::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBloodBankListServicePostedEX::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOP_CHIPHI_BENHNHAN_C16.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 9;
	nCol = 0;
	i =0;
	while(!rs.IsEOF())
	{
		if(nRow == 65000)		{			i++;			tmpStr.Format(_T("Sheet %d"), i);
			xls.AddSheet(tmpStr);			xls.SetWorksheet(i);			nRow = 1;		}

		rs.GetValue(_T("dept_id"), szNewDept);
		if (!szNewDept.IsEmpty() && szOldDept != szNewDept)
		{
			if (nGroupTotal[25] > 0)
			{
				xls.SetCellText(6, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 7; i < 30; i++)
				{
					xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("HO_TEN"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("dept_id"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoatt"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("NGAY_VAO"), tmpStr);
		xls.SetCellText(nCol+5,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);

		rs.GetValue(_T("NGAY_RA"), tmpStr);
		xls.SetCellText(nCol+6,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);	

		rs.GetValue(_T("posted_date"), tmpStr);
		xls.SetCellText(nCol+7,nRow,CDate::Convert(tmpStr,yyyymmdd, ddmmyyyy), FMT_TEXT);		

		rs.GetValue(_T("TIEN_CLS"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("SL_MAU_150"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("SL_MAU_250"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("SL_MAU_350"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("TIEN_MAU"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("THU_KHAC"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);		

		rs.GetValue(_T("TONG_THU"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[14] > 0)
	{
		xls.SetCellText(7, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 8; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[14] > 0)
	{
		xls.SetCellText(7, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 8; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_CHIPHI_BENHNHAN_C16_1.xls"));
}    
	
int CBloodBankListServicePostedEX::OnAddBloodBankListService(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBloodBankListServicePostedEX::OnEditBloodBankListService(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBloodBankListServicePostedEX::OnDeleteBloodBankListService(){
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
 		OnCancelBloodBankListService();
 	}
	return 0;
}
int CBloodBankListServicePostedEX::OnSaveBloodBankListService(){
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
 		//OnBloodBankListServiceListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBloodBankListServicePostedEX::OnCancelBloodBankListService(){
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
int CBloodBankListServicePostedEX::OnBloodBankListServiceListLoadData(){
	return 0;
}
CString CBloodBankListServicePostedEX::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szDept,szList1, szDeptNameStr, szDeptKey,szObject,szObjectNameStr, szObjectKey , szList,szListNameStr,szListKey;
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			if (!szObject.IsEmpty())
			{
				szObject += _T(", ");
				szObjectNameStr += _T(", ");
			}
			szObjectNameStr.AppendFormat(_T("%s"), m_wndObject.GetItemText(i, 1));
			szObject.AppendFormat(_T("%s"), m_wndObject.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDept.IsEmpty())
			{
				szDept += _T(", ");
				szDeptNameStr += _T(", ");
			}
			szDeptNameStr.AppendFormat(_T("%s"), m_wndDepartment.GetItemText(i, 1));
			szDept.AppendFormat(_T("'%s'"), m_wndDepartment.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szList.IsEmpty())
			{
				szList += _T(", ");
				szListNameStr += _T(", ");
			}
			szListNameStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 1));
			szList.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}

	}
	if (!szObject.IsEmpty())
		szObjectKey.AppendFormat(_T(" AND doituong IN(%s)"), szObject);
	if (!szDept.IsEmpty())
		szDeptKey.AppendFormat(_T(" AND khoaTT IN(%s)"), szDept);
	if (!szList.IsEmpty())
		szListKey.AppendFormat(_T(" AND product_id IN(%s)"), szList);	


	szSQL.Format(_T(" SELECT ") \
	_T("   orderdate,") \
	_T("   HO_TEN,") \
	_T("   docno,") \
	_T("   NGAY_VAO,") \
	_T("   NGAY_RA,") \
	_T("   posted_date,") \
	_T("   CHINDEX,") \
	_T("   dept_id,") \
	_T("   khoatt,") \
	_T("   doituong,") \
	_T("   product_id,") \
	_T("   SUM(TIEN_CLS)                   AS TIEN_CLS,") \
	_T("   SUM(SL_MAU_150)                 AS SL_MAU_150,") \
	_T("   SUM(SL_MAU_250)                 AS SL_MAU_250,") \
	_T("   SUM(SL_MAU_350)                 AS SL_MAU_350,") \
	_T("   SUM(TIEN_MAU)                   AS TIEN_MAU,") \
	_T("   SUM(THU_KHAC)                   AS THU_KHAC,") \
	_T("   SUM(TIEN_CLS+TIEN_MAU+THU_KHAC) AS TONG_THU") \
	_T(" FROM") \
	_T("   (") \
	_T("     SELECT orderdate,") \
	_T("     Get_patientname(hfe_docno) AS HO_TEN,") \
	_T("     hfe_docno                        AS docno,") \
	_T("     CASE") \
	_T("       WHEN HFE_CLASS = 'I'") \
	_T("       THEN HCR_ADMITDATE") \
	_T("       ELSE HD_ADMITDATE") \
	_T("     END NGAY_VAO,") \
	_T("     CASE") \
	_T("       WHEN HFE_CLASS = 'I'") \
	_T("       THEN HCR_DISCHARGEDATE") \
	_T("       ELSE HD_ENDDATE") \
	_T("     END NGAY_RA,") \
	_T("     CASE") \
	_T("       WHEN HFE_CLASS = 'I'") \
	_T("       THEN 'I'") \
	_T("       ELSE 'II'") \
	_T("     END CHINDEX,") \
	_T("     TRUNC(hfe_date)       AS invoice_date,") \
	_T("     TRUNC(FAC_POSTEDDATE) AS posted_date,") \
	_T("     khoa_thuchien         AS dept_id,") \
	_T("     khoatt,") \
	_T("     doituong,") \
	_T("     TIEN_CLS,") \
	_T("     SL_MAU_150,") \
	_T("     SL_MAU_250,") \
	_T("     SL_MAU_350,") \
	_T("     TIEN_MAU,") \
	_T("     THU_KHAC,") \
	_T("     product_id") \
	_T("   FROM") \
	_T("     (SELECT ") \
	_T("       HPC_ORDERDATE AS orderdate,") \
	_T("       f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       f.hfe_date,") \
	_T("       fa.FAC_POSTEDDATE AS FAC_POSTEDDATE,") \
	_T("       iv.hfe_cash_id,") \
	_T("       0 AS hfe_quantity,") \
	_T("       CASE") \
	_T("         WHEN f.hfe_type IN ('P','T')") \
	_T("         AND F.Hfe_Group IN ('B1G00','B1800')") \
	_T("         THEN CAST(DECODE(f.Hfe_Group,'B1G00', 'C16', 'B1800','C16') AS NVARCHAR2(3))") \
	_T("       END khoa_thuchien,") \
	_T("       iv.hfe_deptid as khoatt,") \
	_T("       iv.HFE_OBJECTID as doituong,") \
	_T("       NULL AS product_id,") \
	_T("       iv.hfe_class,") \
	_T("       f.hfe_patpaid AS TIEN_CLS,") \
	_T("       0             AS SL_MAU_150,") \
	_T("       0             AS SL_MAU_250,") \
	_T("       0             AS SL_MAU_350,") \
	_T("       0             AS TIEN_MAU,") \
	_T("       0             AS THU_KHAC,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_C16 iv") \
	_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
	_T("     AND iv.hfe_docno     = f.hfe_docno)") \
	_T("     LEFT JOIN fa_cash fa ON (iv.HFE_CASH_ID = fa.FAC_CASH_ID)") \
	_T("     LEFT JOIN HMSV_PARACLINIC") \
	_T("      ON ( f.hfe_docno  = hpc_docno AND f.hfe_orderid = hpc_orderid)") \
	_T("     WHERE FAC_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')   ") \
	_T("     AND f.hfe_status    IN ('P','R')") \
	_T("     AND F.Hfe_Group     IN ('B1G00','B1800')") \
	_T("     AND f.hfe_type      <> 'X'") \
	_T("     AND f.hfe_category  IN ('N','BQP','XX')") \
	
	_T("  UNION ALL") \
	_T("     SELECT") \
	_T("       hpo_approvedate as orderdate,") \
	_T("       f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       f.hfe_date,") \
	_T("       fa.FAC_POSTEDDATE AS FAC_POSTEDDATE,") \
	_T("       iv.hfe_cash_id,") \
	_T("       0 AS hfe_quantity,") \
	_T("       CAST(DECODE(product_org_id, 'BB', 'C16') AS NVARCHAR2(15)) khoa_thuchien,") \
	_T("       iv.hfe_deptid as khoatt,") \
	_T("       iv.HFE_OBJECTID as doituong,") \
	_T("       product_id,") \
	_T("       iv.hfe_class,") \
	_T("       0             AS TIEN_CLS,") \
	_T("       CASE WHEN lower(f.hfe_desc) LIKE(chr(37)") \
	_T("             ||lower('150')") \
	_T("             ||chr(37))") \
	_T("           THEN f.hfe_quantity ELSE 0 END AS SL_MAU_150,") \
	_T("       CASE WHEN lower(f.hfe_desc) LIKE(chr(37)") \
	_T("             ||lower('250')") \
	_T("             ||chr(37))") \
	_T("           THEN f.hfe_quantity ELSE 0 END AS SL_MAU_250,") \
	_T("       CASE WHEN lower(f.hfe_desc) LIKE(chr(37)") \
	_T("             ||lower('350')") \
	_T("             ||chr(37))") \
	_T("           THEN f.hfe_quantity ELSE 0 END AS SL_MAU_350,") \
	_T("       f.hfe_patpaid AS TIEN_MAU,") \
	_T("       0             AS THU_KHAC,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN M_PRODUCTITEM_VIEW") \
	_T("     ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
	_T("     LEFT JOIN HMS_PHARMAORDER_VIEW") \
	_T("     ON (hpo_orderid = f.hfe_orderid)") \
	_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_C16 iv") \
	_T("     ON (iv.hfe_invoiceno    = f.hfe_invoiceno") \
	_T("     AND iv.hfe_docno        = f.hfe_docno)") \
	_T("     LEFT JOIN fa_cash fa ON (iv.HFE_CASH_ID = fa.FAC_CASH_ID)") \
	_T("     WHERE FAC_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')   ") \
	_T("     AND f.hfe_status       IN ('P','R')") \
	_T("     AND f.hfe_type         IN ('D', 'M', 'R')") \
	_T("     AND product_org_id     IN ('BB')") \
	_T("     AND hfe_category       IN ('N','BQP','XX')") \
	_T("     UNION ALL") \
	_T(" SELECT ") \
	_T("       iv.hfe_date,") \
	_T("       f.hfe_docno,") \
	_T("       f.hfe_type,") \
	_T("       f.hfe_invoiceno,") \
	_T("       f.hfe_date,") \
	_T("       fa.FAC_POSTEDDATE AS FAC_POSTEDDATE,") \
	_T("       iv.hfe_cash_id,") \
	_T("       0 AS hfe_quantity,") \
	_T("       CASE") \
	_T("         WHEN f.hfe_class IN ('X','I','E')") \
	_T("         AND f.hfe_type    ='X'") \
	_T("         AND f.HFE_DEPTID IS NOT NULL") \
	_T("         THEN f.HFE_DEPTID") \
	_T("         ELSE fl.HFL_DEPTID") \
	_T("       END khoa_thuchien,") \
	_T("       iv.hfe_deptid as khoatt,") \
	_T("       iv.HFE_OBJECTID as doituong,") \
	_T("       NULL as product_id,") \
	_T("       iv.hfe_class,") \
	_T("       0             AS TIEN_CLS,") \
	_T("       CASE WHEN lower(f.hfe_desc) LIKE(chr(37)") \
	_T("             ||lower('150')") \
	_T("             ||chr(37))") \
	_T("           THEN f.hfe_quantity ELSE 0 END AS SL_MAU_150,") \
	_T("       CASE WHEN lower(f.hfe_desc) LIKE(chr(37)") \
	_T("             ||lower('250')") \
	_T("             ||chr(37))") \
	_T("           THEN f.hfe_quantity ELSE 0 END AS SL_MAU_250,") \
	_T("       CASE WHEN lower(f.hfe_desc) LIKE(chr(37)") \
	_T("             ||lower('350')") \
	_T("             ||chr(37))") \
	_T("           THEN f.hfe_quantity ELSE 0 END AS SL_MAU_350,") \
	_T("       0             AS TIEN_MAU,") \
	_T("       f.hfe_patpaid AS THU_KHAC,") \
	_T("       f.hfe_category") \
	_T("     FROM hms_fee f") \
	_T("     LEFT JOIN HMS_FEE_INVOICE_VIEW_C16 iv") \
	_T("     ON (iv.hfe_invoiceno = f.hfe_invoiceno") \
	_T("     AND iv.hfe_docno     = f.hfe_docno)") \
	_T("     LEFT JOIN fa_cash fa ON (iv.HFE_CASH_ID = fa.FAC_CASH_ID)") \
	_T("     LEFT JOIN Hms_Fee_List fl") \
	_T("     ON (F.Hfe_Itemid    =fl.hfl_feeid)    ") \
	_T("     WHERE FAC_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')   ") \
	_T("     AND f.hfe_status   IN ('P','R')") \
	_T("     AND f.hfe_class    IN ('X','I','E')") \
	_T("     AND f.hfe_type      ='X'") \
	_T("     AND fl.hfl_deptid   ='C16'") \
	_T("     AND f.hfe_category IN ('N','BQP','XX','P')") \
	_T("     )tbl1 ") \
	_T("   LEFT JOIN HMS_DOC d") \
	_T("   ON ( d.HD_DOCNO=tbl1.HFE_DOCNO)") \
	_T("   LEFT JOIN HMS_CLINICAL_RECORD cr") \
	_T("   ON ( cr.HCR_DOCNO                   =tbl1.HFE_DOCNO)") \
	_T("   WHERE 1                             =1") \
	_T("   AND (TIEN_CLS + TIEN_MAU + THU_KHAC)>0") \
	_T("   AND khoa_thuchien                   ='C16'  ") \
	_T("   AND khoaTT NOT IN ('TYC', 'PTTYC')") \
	_T("   %s %s %s ") \
	_T("   )") \
	_T(" GROUP BY ") \
	_T("   orderdate,") \
	_T("   HO_TEN,") \
	_T("   docno,") \
	_T("   NGAY_VAO,") \
	_T("   NGAY_RA,") \
	_T("   CHINDEX,") \
	_T("   posted_date,") \
	_T("   dept_id,khoatt,doituong, product_id") \
	_T(" ORDER BY orderdate"), m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate, szDeptKey, szObjectKey, szListKey);

	//QueryOpener(szSQL);
	return szSQL;
}