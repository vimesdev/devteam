#include "stdafx.h"
#include "BBOnHandList.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CBBOnHandList *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBBOnHandList* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CBBOnHandList *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBBOnHandList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBBOnHandList *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBBOnHandList* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CBBOnHandList *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnObjectAddNew();
}*/
static void _OnBloodTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBBOnHandList* )pWnd)->OnBloodTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBloodTypeSelendokFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnBloodTypeSelendok();
}
/*static void _OnBloodTypeSetfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnBloodTypeKillfocus();
}*/
/*static void _OnBloodTypeKillfocusFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnBloodTypeKillfocus();
}*/
static long _OnBloodTypeLoadDataFnc(CWnd *pWnd){
	return ((CBBOnHandList *)pWnd)->OnBloodTypeLoadData();
}
/*static void _OnBloodTypeAddNewFnc(CWnd *pWnd){
	((CBBOnHandList *)pWnd)->OnBloodTypeAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBBOnHandList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBBOnHandList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBBOnHandList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	return ((CBBOnHandList*)pWnd)->OnListDeleteItem();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CBBOnHandList*)pWnd)->OnListCheckAll();
}
static int _OnListUncheckAllFnc(CWnd *pWnd){
	return ((CBBOnHandList*)pWnd)->OnListUncheckAll();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBBOnHandList *pVw = (CBBOnHandList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBBOnHandList *pVw = (CBBOnHandList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddBBOnHandListFnc(CWnd *pWnd){
	 return ((CBBOnHandList*)pWnd)->OnAddBBOnHandList();
} 
static int _OnEditBBOnHandListFnc(CWnd *pWnd){
	 return ((CBBOnHandList*)pWnd)->OnEditBBOnHandList();
} 
static int _OnDeleteBBOnHandListFnc(CWnd *pWnd){
	 return ((CBBOnHandList*)pWnd)->OnDeleteBBOnHandList();
} 
static int _OnSaveBBOnHandListFnc(CWnd *pWnd){
	 return ((CBBOnHandList*)pWnd)->OnSaveBBOnHandList();
} 
static int _OnCancelBBOnHandListFnc(CWnd *pWnd){
	 return ((CBBOnHandList*)pWnd)->OnCancelBBOnHandList();
} 
CBBOnHandList::CBBOnHandList(CWnd *pWnd){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBBOnHandList::~CBBOnHandList(){
}
void CBBOnHandList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 455);
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 221, 30, 301, 55);
	m_wndYearLabel.Create(this, _T("Year"), 11, 30, 91, 55);
	m_wndYear.Create(this,96, 30, 216, 55); 
	m_wndPeriodReport.Create(this,306, 30, 426, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 60, 91, 85);
	m_wndFromDate.Create(this,96, 60, 216, 85); 
	m_wndFromDate.EnableWindow(FALSE);
	m_wndToDateLabel.Create(this, _T("To Date"), 221, 60, 301, 85);
	m_wndToDate.Create(this,306, 60, 426, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 11, 90, 91, 115);
	m_wndObject.Create(this,96, 90, 426, 115); 
	m_wndBloodTypeLabel.Create(this, _T("Blood Type"), 10, 120, 90, 145);
	m_wndBloodType.Create(this,95, 120, 425, 145); 
	m_wndExport.Create(this, _T("&Export"), 345, 460, 425, 485);
	m_wndList.Create(this,10, 150, 425, 450);
	m_wndList.SetCheckBox(true);
	//m_wndPrint.Create(this, _T("&Print"), 260, 160, 340, 185);

}
void CBBOnHandList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	//m_wndYear.SetCheckValue(true);
	m_wndPeriodReport.SetCheckValue(true);
	//m_wndPeriodReport.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndBloodType.SetCheckValue(true);
	m_wndBloodType.LimitText(1024);

	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | FMT_RIGHT, 150);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndBloodType.InsertColumn(0, _T("ID"), CFMT_TEXT | FMT_RIGHT, 150);
	m_wndBloodType.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT | FMT_RIGHT, 100);
	m_wndList.InsertColumn(1, _T("\x43h\x1EBF Ph\x1EA9m"), CFMT_TEXT, 350);

}
void CBBOnHandList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndPeriodReport.SetEvent(WE_SELENDOK, _OnPeriodReportSelendokFnc);
	//m_wndPeriodReport.SetEvent(WE_SETFOCUS, _OnPeriodReportSetfocusFnc);
	//m_wndPeriodReport.SetEvent(WE_KILLFOCUS, _OnPeriodReportKillfocusFnc);
	m_wndPeriodReport.SetEvent(WE_SELCHANGE, _OnPeriodReportSelectChangeFnc);
	m_wndPeriodReport.SetEvent(WE_LOADDATA, _OnPeriodReportLoadDataFnc);
	//m_wndPeriodReport.SetEvent(WE_ADDNEW, _OnPeriodReportAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndBloodType.SetEvent(WE_SELENDOK, _OnBloodTypeSelendokFnc);
	//m_wndBloodType.SetEvent(WE_SETFOCUS, _OnBloodTypeSetfocusFnc);
	//m_wndBloodType.SetEvent(WE_KILLFOCUS, _OnBloodTypeKillfocusFnc);
	m_wndBloodType.SetEvent(WE_SELCHANGE, _OnBloodTypeSelectChangeFnc);
	m_wndBloodType.SetEvent(WE_LOADDATA, _OnBloodTypeLoadDataFnc);
	//m_wndBloodType.SetEvent(WE_ADDNEW, _OnBloodTypeAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUncheckAllFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	OnListLoadData();

}
void CBBOnHandList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndBloodType.GetDlgCtrlID(), m_szBloodTypeKey);

}
void CBBOnHandList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBBOnHandList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CBBOnHandList::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szBloodTypeKey.Empty();

}
int CBBOnHandList::SetMode(int nMode){
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
/*void CBBOnHandList::OnYearChange(){
	
} */
/*void CBBOnHandList::OnYearSetfocus(){
	
} */
/*void CBBOnHandList::OnYearKillfocus(){
	
} */
int CBBOnHandList::OnYearCheckValue(){
	return 0;
} 
void CBBOnHandList::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBBOnHandList::OnPeriodReportSelendok(){
	CString tmpStr;
	CDate date;
	UpdateData(true);
	int nMonth = ToInt(m_szPeriodReportKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		date.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, date.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  date.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());		
	}	
	UpdateData(false);	
}
/*void CBBOnHandList::OnPeriodReportSetfocus(){
	
}*/
/*void CBBOnHandList::OnPeriodReportKillfocus(){
	
}*/
long CBBOnHandList::OnPeriodReportLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPeriodReport.IsSearchKey() && ToInt(m_szPeriodReportKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szPeriodReportKey));
	};
	m_wndPeriodReport.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriodReport.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
} 
/*void CBBOnHandList::OnPeriodReportAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CBBOnHandList::OnFromDateChange(){
	
} */
/*void CBBOnHandList::OnFromDateSetfocus(){
	
} */
/*void CBBOnHandList::OnFromDateKillfocus(){
	
} */
int CBBOnHandList::OnFromDateCheckValue(){
	return 0;
} 
/*void CBBOnHandList::OnToDateChange(){
	
} */
/*void CBBOnHandList::OnToDateSetfocus(){
	
} */
/*void CBBOnHandList::OnToDateKillfocus(){
	
} */
int CBBOnHandList::OnToDateCheckValue(){
	return 0;
} 
void CBBOnHandList::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBBOnHandList::OnObjectSelendok(){
	 
}
/*void CBBOnHandList::OnObjectSetfocus(){
	
}*/
/*void CBBOnHandList::OnObjectKillfocus(){
	
}*/
long CBBOnHandList::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey);
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mbo_id as id, mbo_desc as name FROM m_blood_object WHERE 1=1 %s ORDER BY mbo_line, mbo_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CBBOnHandList::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CBBOnHandList::OnBloodTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBBOnHandList::OnBloodTypeSelendok(){
	 
}
/*void CBBOnHandList::OnBloodTypeSetfocus(){
	
}*/
/*void CBBOnHandList::OnBloodTypeKillfocus(){
	
}*/
long CBBOnHandList::OnBloodTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBloodType.IsSearchKey() && !m_szBloodTypeKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szBloodTypeKey);
	}
	m_wndBloodType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mbt_id as id, mbt_name as name FROM m_blood_type WHERE 1=1 %s ORDER BY mbt_line, mbt_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBloodType.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBBOnHandList::OnBloodTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
int CBBOnHandList::OnListCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return 0;	
}

int CBBOnHandList::OnListUncheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return 0;	
}
void CBBOnHandList::OnListDblClick(){

} 
void CBBOnHandList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
int CBBOnHandList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CBBOnHandList::OnListLoadData(){
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
void CBBOnHandList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBBOnHandList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 8);	xls.SetColumnWidth(2, 25);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 25);	xls.SetColumnWidth(6, 10);	xls.SetColumnWidth(7, 10);	xls.SetColumnWidth(8, 10);	xls.SetColumnWidth(9, 25);	xls.SetColumnWidth(10, 10);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	tmpStr.Format(_T("\x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O TH\x45O \x44\xD5I M\xC1U T\x1ED2N KHO"), FMT_TEXT | FMT_CENTER , true, 14);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(1, 4, _T("M\xE3 t\xFAi"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(2, 4, _T("T\xEAn ng\x1B0\x1EDDi \x63ho"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(3, 4, _T("S\x1ED1 \x58N"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(4, 4, _T("Nh\xF3m"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(5, 4, _T("Th\x1EC3 t\xED\x63h"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(6, 4, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(7, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(8, 4, _T("Ng\xE0y l\x1EA5y"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(9, 4, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetCellText(10, 4, _T("H\x1EA1n \x64\xF9ng"), FMT_TEXT | FMT_CENTER , true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 10);	xls.SetMerge(3, 3, 0, 10);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);		rs.GetValue(_T("package_id"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("donorname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("testid"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("bloodtype"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("product_name"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("unit"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("qty"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("blooddate"), tmpStr);		xls.SetCellText(nCol+8, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("bloodaddress"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("expiredate"), tmpStr);		xls.SetCellText(nCol+10, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\BCtheodoimautonkho.xls"));
} 
int CBBOnHandList::OnAddBBOnHandList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBBOnHandList::OnEditBBOnHandList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBBOnHandList::OnDeleteBBOnHandList(){
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
 		OnCancelBBOnHandList();
 	}
	return 0;
}
int CBBOnHandList::OnSaveBBOnHandList(){
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
 		//OnBBOnHandListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBBOnHandList::OnCancelBBOnHandList(){
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
int CBBOnHandList::OnBBOnHandListListLoadData(){
	return 0;
}
CString CBBOnHandList::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szList;

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szList.IsEmpty())
			{
				szList += _T(", ");
			}
			szList.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
	if (!szList.IsEmpty())
		szWhere.AppendFormat(_T(" AND mpi_product_id IN(%s)"), szList);

	if(!m_szObjectKey.IsEmpty())
		szWhere.AppendFormat(_T("AND mbd_blood_object = '%s'"), m_szObjectKey);
	if(!m_szBloodTypeKey.IsEmpty())
		szWhere.AppendFormat(_T("AND mbd_blood_type = '%s'"), m_szBloodTypeKey);

	szSQL.Format(_T(" SELECT mbd_package_id         AS package_id,") \
		_T("   mbd_donor_name              AS donorname,") \
		_T("   mbd_test_id                 AS testid,") \
		_T("   mbd_blood_type              AS bloodtype,") \
		_T("   mp_name                     AS product_name,") \
		_T("   mbd_unit                    AS unit,") \
		_T("   msl_qtyonhand               AS qty,") \
		_T("   mbd_date                    AS blooddate,") \
		_T("   (SELECT i.mbd_address FROM m_blood_donor i WHERE i.mbd_id = mbd_donor_id") \
		_T("   )                          AS bloodaddress,") \
		_T("   mbd_expire_date            AS expiredate") \
		_T(" FROM m_storageline") \
		_T(" LEFT JOIN m_product_item") \
		_T(" ON(mpi_product_item_id = msl_product_item_id)") \
		_T(" LEFT JOIN m_blood_donation") \
		_T(" ON(msl_product_item_id = mbd_product_item_id)") \
		_T(" LEFT JOIN m_product") \
		_T(" ON(mp_product_id        = mpi_product_id)") \
		_T(" WHERE msl_storage_id    = 20") \
		_T(" AND mpi_product_item_id > 0") \
		_T(" AND msl_qtyonhand       > 0") \
		_T(" AND mbd_date <= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" ORDER BY mp_name, bloodtype, blooddate, mbd_package_id"), m_szToDate, szWhere);

	return szSQL;
}
CString CBBOnHandList::GetNameUser(CString UserName, CString LastName ){
	CString szValue,tmpStr;
	int nIndex=0;
	bool flag= true;
	CString szFind;
	szFind=_T(" ");
	if(UserName.GetLength() >0)
	{
		for(int i=1;i < UserName.GetLength();i++)
		{	
			tmpStr=UserName.Right(i);
			if(tmpStr.Find(szFind) == 1 && flag== true && i>2)
			{
				nIndex=i;
				flag=false;	
			}
		}
	}
	if(nIndex >0)
	{
		szValue=UserName.Right(nIndex-1);
	}
	return szValue;
}