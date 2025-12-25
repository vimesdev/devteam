#include "stdafx.h"
#include "CheckPackageTime.h"
#include "MainFrm.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCheckPackageTime *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCheckPackageTime *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCheckPackageTime* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CCheckPackageTime *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->OnDeptAddNew();
}*/
static void _OnSearchSelectFnc(CWnd *pWnd){
	CCheckPackageTime *pVw = (CCheckPackageTime *)pWnd;
	pVw->OnSearchSelect();
} 
static void _Onten_goiSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCheckPackageTime* )pWnd)->Onten_goiSelectChange(nOldItemSel, nNewItemSel);
} 
static void _Onten_goiSelendokFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->Onten_goiSelendok();
}
/*static void _Onten_goiSetfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->Onten_goiKillfocus();
}*/
/*static void _Onten_goiKillfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->Onten_goiKillfocus();
}*/
static long _Onten_goiLoadDataFnc(CWnd *pWnd){
	return ((CCheckPackageTime *)pWnd)->Onten_goiLoadData();
}
/*static void _Onten_goiAddNewFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->Onten_goiAddNew();
}*/
static void _Oncan_hanSelectFnc(CWnd *pWnd){
	  ((CCheckPackageTime*)pWnd)->Oncan_hanSelect();
}
static void _Onqua_hanSelectFnc(CWnd *pWnd){
	  ((CCheckPackageTime*)pWnd)->Onqua_hanSelect();
}
static void _Ontat_caSelectFnc(CWnd *pWnd){
	  ((CCheckPackageTime*)pWnd)->Ontat_caSelect();
}
/*static void _Onho_ten_benh_nhanChangeFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->Onho_ten_benh_nhanChange();
} */
/*static void _Onho_ten_benh_nhanSetfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->Onho_ten_benh_nhanSetfocus();} */ 
/*static void _Onho_ten_benh_nhanKillfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->Onho_ten_benh_nhanKillfocus();
} */
static int _Onho_ten_benh_nhanCheckValueFnc(CWnd *pWnd){
	return ((CCheckPackageTime *)pWnd)->Onho_ten_benh_nhanCheckValue();
} 
/*static void _Ontong_soChangeFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->Ontong_soChange();
} */
/*static void _Ontong_soSetfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->Ontong_soSetfocus();} */ 
/*static void _Ontong_soKillfocusFnc(CWnd *pWnd){
	((CCheckPackageTime *)pWnd)->Ontong_soKillfocus();
} */
static int _Ontong_soCheckValueFnc(CWnd *pWnd){
	return ((CCheckPackageTime *)pWnd)->Ontong_soCheckValue();
} 
static void _OnVIPABCSelectFnc(CWnd *pWnd){
	 ((CCheckPackageTime*)pWnd)->OnVIPABCSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCheckPackageTime*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCheckPackageTime*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCheckPackageTime*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCheckPackageTime*)pWnd)->OnListDeleteItem();
} 
static int _OnAddCheckPackageTimeFnc(CWnd *pWnd){
	 return ((CCheckPackageTime*)pWnd)->OnAddCheckPackageTime();
} 
static int _OnEditCheckPackageTimeFnc(CWnd *pWnd){
	 return ((CCheckPackageTime*)pWnd)->OnEditCheckPackageTime();
} 
static int _OnDeleteCheckPackageTimeFnc(CWnd *pWnd){
	 return ((CCheckPackageTime*)pWnd)->OnDeleteCheckPackageTime();
} 
static int _OnSaveCheckPackageTimeFnc(CWnd *pWnd){
	 return ((CCheckPackageTime*)pWnd)->OnSaveCheckPackageTime();
} 
static int _OnCancelCheckPackageTimeFnc(CWnd *pWnd){
	 return ((CCheckPackageTime*)pWnd)->OnCancelCheckPackageTime();
}
static void _OnRStatusSelectFnc(CWnd *pWnd){
	 ((CCheckPackageTime*)pWnd)->OnRStatusSelect();
}

static int _OnExportFnc(CWnd *pWnd)
{
	return ((CCheckPackageTime*)pWnd)->OnExport();
}
CCheckPackageTime::CCheckPackageTime(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCheckPackageTime::~CCheckPackageTime(){
}
void CCheckPackageTime::OnCreateComponents(){
	/*m_wndthong_tin_goi_dich_vu_het_han.Create(this, _T("thong_tin_goi_dich_vu_het_han"), 5, 5, 1010, 25);
	m_wndFromDateLabel.Create(this, _T("FromDate"), 11, 28, 111, 53);
	m_wndFromDate.Create(this,115, 28, 234, 53); 
	m_wndToDateLabel.Create(this, _T("ToDate"), 239, 28, 338, 53);
	m_wndToDate.Create(this,349, 28, 461, 53); 
	m_wndDeptLabel.Create(this, _T("Dept"), 469, 28, 538, 53);
	m_wndDept.Create(this,543, 28, 850, 53); 
	m_wndSearch.Create(this, _T("&Search"), 856, 28, 1011, 71);
	m_wndten_goi_label.Create(this, _T("ten_goi_label"), 11, 58, 111, 83);
	m_wndten_goi.Create(this,116, 58, 850, 83); 
	m_wndcan_han.Create(this, _T("can_han_label"), 10, 89, 110, 114);
	m_wndqua_han.Create(this, _T("qua_han_label"), 115, 89, 234, 114);
	//m_wndtat_ca.Create(this, _T("tat_ca_label"), 240, 89, 352, 114);
	m_wndtat_ca.Create(this, _T("tat_ca_label"), 0, 0, 0, 0);
	m_wndho_ten_benh_nhan_label.Create(this, _T("ho_ten_benh_nhan_label"), 359, 89, 538, 114);
	m_wndho_ten_benh_nhan.Create(this,543, 88, 850, 113); 
	m_wndtong_so.Create(this,855, 75, 1010, 113); 
	m_wndVIPABC.Create(this, _T("VIPABC Label"), 9, 120, 234, 145);
	m_wndList.Create(this,12, 153, 1012, 725); */
	m_wndthong_tin_goi_dich_vu_het_han.Create(this, _T("Thong_tin_goi_dich_vu_het_han"), 5, 5, 1010, 25);
	m_wndFromDateLabel.Create(this, _T("FromDate"), 11, 28, 111, 53);
	m_wndFromDate.Create(this,115, 28, 234, 53); 
	m_wndToDateLabel.Create(this, _T("ToDate"), 239, 28, 338, 53);
	m_wndToDate.Create(this,349, 28, 461, 53); 
	m_wndDeptLabel.Create(this, _T("Dept"), 469, 28, 538, 53);
	m_wndDept.Create(this,543, 28, 850, 53); 
	m_wndSearch.Create(this, _T("&Search"), 856, 28, 1011, 71);
	m_wndten_goi_label.Create(this, _T("Ten_goi_label"), 11, 58, 111, 83);
	m_wndten_goi.Create(this,116, 58, 850, 83); 
	m_wndcan_han.Create(this, _T("Can_han_label"), 10, 89, 110, 114);
	m_wndqua_han.Create(this, _T("Qua_han_label"), 115, 89, 234, 114);
	m_wndtat_ca.Create(this, _T("tat_ca_label"), 0, 0, 0, 0);
	m_wndho_ten_benh_nhan_label.Create(this, _T("Ho_ten_benh_nhan_label"), 359, 89, 538, 114);
	m_wndho_ten_benh_nhan.Create(this,543, 88, 850, 113); 
	m_wndtong_so.Create(this,855, 75, 1010, 113); 
	m_wndVIPABC.Create(this, _T("VIPABC Label"), 9, 120, 234, 145);
	m_wndList.Create(this,12, 153, 1012, 725); 
	m_wndRStatus.Create(this, _T("Not include R Status"), 240, 120, 538, 145);


}
void CCheckPackageTime::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(1024);
	m_wndten_goi.SetCheckValue(true);
	m_wndten_goi.LimitText(35);
	m_wndho_ten_benh_nhan.SetLimitText(1024);
	m_wndho_ten_benh_nhan.SetCheckValue(true);
	m_wndtong_so.SetLimitText(1024);
	m_wndtong_so.SetCheckValue(true);
	m_wndtong_so.ModifyStyle(0, ES_UPPERCASE);
	m_wndtong_so.SetTextColor(RGB(255, 0, 0));	


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);

	m_wndten_goi.InsertColumn(0, _T("ID"), CFMT_RIGHT, 120);
	m_wndten_goi.InsertColumn(1, _T("Name"), CFMT_TEXT, 600);
	m_wndten_goi.SetCheckBox(TRUE);

	m_wndList.InsertColumn(0, _T("HS"), CFMT_NUMBER, 80);	
	m_wndList.InsertColumn(1, _T("Họ tên"), CFMT_TEXT, 160);
	m_wndList.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("SL"), CFMT_NUMBER, 20);
	m_wndList.InsertColumn(4, _T("Giá"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(5, _T("Tên gói"), CFMT_TEXT, 300);	
	m_wndList.InsertColumn(6, _T("Bắt đầu"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(7, _T("Kết thúc"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(8, _T("Hours"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(9, _T("status"), CFMT_TEXT, 30);
}
void CCheckPackageTime::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndten_goi.SetEvent(WE_SELENDOK, _Onten_goiSelendokFnc);
	//m_wndten_goi.SetEvent(WE_SETFOCUS, _Onten_goiSetfocusFnc);
	//m_wndten_goi.SetEvent(WE_KILLFOCUS, _Onten_goiKillfocusFnc);
	m_wndten_goi.SetEvent(WE_SELCHANGE, _Onten_goiSelectChangeFnc);
	m_wndten_goi.SetEvent(WE_LOADDATA, _Onten_goiLoadDataFnc);
	//m_wndten_goi.SetEvent(WE_ADDNEW, _Onten_goiAddNewFnc);
	m_wndcan_han.SetEvent(WE_CLICK, _Oncan_hanSelectFnc);
	m_wndqua_han.SetEvent(WE_CLICK, _Onqua_hanSelectFnc);
	m_wndtat_ca.SetEvent(WE_CLICK, _Ontat_caSelectFnc);
	//m_wndho_ten_benh_nhan.SetEvent(WE_CHANGE, _Onho_ten_benh_nhanChangeFnc);
	//m_wndho_ten_benh_nhan.SetEvent(WE_SETFOCUS, _Onho_ten_benh_nhanSetfocusFnc);
	//m_wndho_ten_benh_nhan.SetEvent(WE_KILLFOCUS, _Onho_ten_benh_nhanKillfocusFnc);
	m_wndho_ten_benh_nhan.SetEvent(WE_CHECKVALUE, _Onho_ten_benh_nhanCheckValueFnc);
	m_wndRStatus.SetEvent(WE_CLICK, _OnRStatusSelectFnc);
	//m_wndtong_so.SetEvent(WE_CHANGE, _Ontong_soChangeFnc);
	//m_wndtong_so.SetEvent(WE_SETFOCUS, _Ontong_soSetfocusFnc);
	//m_wndtong_so.SetEvent(WE_KILLFOCUS, _Ontong_soKillfocusFnc);
	m_wndtong_so.SetEvent(WE_CHECKVALUE, _Ontong_soCheckValueFnc);
	m_wndVIPABC.SetEvent(WE_CLICK, _OnVIPABCSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Excel"), _OnExportFnc);
	SetWindowFont(&m_wndtong_so, GetFaceName(), GetFaceSize() + 3, TRUE);
	m_szFromDate = pMF->GetSysDate();	
	m_szFromDate += _T("00:00");	
	m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnListLoadData();
	SetMode(VM_VIEW);

}
void CCheckPackageTime::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndten_goi.GetDlgCtrlID(), m_szten_goiKey);
	DDX_Radio(pDX, m_wndcan_han.GetDlgCtrlID(), m_ncan_han);
	DDX_Radio(pDX, m_wndqua_han.GetDlgCtrlID(), m_nqua_han);
	DDX_Radio(pDX, m_wndtat_ca.GetDlgCtrlID(), m_ntat_ca);
	DDX_Text(pDX, m_wndho_ten_benh_nhan.GetDlgCtrlID(), m_szho_ten_benh_nhan);
	DDX_Text(pDX, m_wndtong_so.GetDlgCtrlID(), m_ntong_so);
	DDX_Check(pDX, m_wndVIPABC.GetDlgCtrlID(), m_bVIPABC);
	DDX_Check(pDX, m_wndRStatus.GetDlgCtrlID(), m_bRStatus);

}
void CCheckPackageTime::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("ten_goi")] =  m_szten_goiKey;
	m_jData[_T("can_han")] =  m_ncan_han;
	m_jData[_T("qua_han")] =  m_nqua_han;
	m_jData[_T("tat_ca")] =  m_ntat_ca;
	m_jData[_T("ho_ten_benh_nhan")] =  m_szho_ten_benh_nhan;
	m_jData[_T("tong_so")] =  m_ntong_so;
	m_jData[_T("VIPABC")] =  m_bVIPABC;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("ten_goi")].GetValue(m_szten_goiKey);
	m_jData[_T("can_han")].GetValue(m_ncan_han);
	m_jData[_T("qua_han")].GetValue(m_nqua_han);
	m_jData[_T("tat_ca")].GetValue(m_ntat_ca);
	m_jData[_T("ho_ten_benh_nhan")].GetValue(m_szho_ten_benh_nhan);
	m_jData[_T("tong_so")].GetValue(m_ntong_so);
	m_jData[_T("VIPABC")].GetValue(m_bVIPABC);
	}

}
void CCheckPackageTime::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCheckPackageTime::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCheckPackageTime::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_szten_goiKey.Empty();
	m_ncan_han=1;
	m_nqua_han=0;
	m_ntat_ca=1;
	m_szho_ten_benh_nhan.Empty();	
	m_bVIPABC=FALSE;
	m_bRStatus=FALSE;
}
int CCheckPackageTime::SetMode(int nMode)
{
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
 			EnableButtons(TRUE, 3, 4, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		};
		m_wndtong_so.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CCheckPackageTime::OnFromDateChange(){
	
} */
/*void CCheckPackageTime::OnFromDateSetfocus(){
	
} */
/*void CCheckPackageTime::OnFromDateKillfocus(){
	
} */
int CCheckPackageTime::OnFromDateCheckValue(){
	return 0;
} 
/*void CCheckPackageTime::OnToDateChange(){
	
} */
/*void CCheckPackageTime::OnToDateSetfocus(){
	
} */
/*void CCheckPackageTime::OnToDateKillfocus(){
	
} */
int CCheckPackageTime::OnToDateCheckValue(){
	return 0;
} 
void CCheckPackageTime::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CCheckPackageTime::OnRStatusSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CCheckPackageTime::OnDeptSelendok(){
	 
}
/*void CCheckPackageTime::OnDeptSetfocus(){
	
}*/
/*void CCheckPackageTime::OnDeptKillfocus(){
	
}*/
long CCheckPackageTime::OnDeptLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}	
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select sd_id as id, sd_name as description from sys_dept where sd_type='DT' and SD_ISACTIVE='Y' %s order by sd_index1 "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCheckPackageTime::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCheckPackageTime::OnSearchSelect()
{
	OnListLoadData();
} 
void CCheckPackageTime::Onten_goiSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCheckPackageTime::Onten_goiSelendok()
{
	 
}
/*void CCheckPackageTime::Onten_goiSetfocus(){
	
}*/
/*void CCheckPackageTime::Onten_goiKillfocus(){
	
}*/
long CCheckPackageTime::Onten_goiLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndten_goi.IsSearchKey() && !m_szten_goiKey.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szten_goiKey);
	};
	m_wndten_goi.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE  ss_id='HMS_SERVICE_PACKAGE' %s ORDER BY SS_INDEX "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndten_goi.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}
/*void CCheckPackageTime::Onten_goiAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCheckPackageTime::Oncan_hanSelect(){
	
}
void CCheckPackageTime::Onqua_hanSelect(){
	
}
void CCheckPackageTime::Ontat_caSelect(){
	
}
/*void CCheckPackageTime::Onho_ten_benh_nhanChange(){
	
} */
/*void CCheckPackageTime::Onho_ten_benh_nhanSetfocus(){
	
} */
/*void CCheckPackageTime::Onho_ten_benh_nhanKillfocus(){
	
} */
int CCheckPackageTime::Onho_ten_benh_nhanCheckValue()

{
	OnListLoadData();
	return 0;
} 
/*void CCheckPackageTime::Ontong_soChange(){
	
} */
/*void CCheckPackageTime::Ontong_soSetfocus(){
	
} */
/*void CCheckPackageTime::Ontong_soKillfocus(){
	
} */
int CCheckPackageTime::Ontong_soCheckValue(){
	return 0;
} 
	void CCheckPackageTime::OnVIPABCSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CCheckPackageTime::OnListDblClick(){
	
} 
void CCheckPackageTime::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCheckPackageTime::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCheckPackageTime::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere,sztengoi;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	int m_nhour = 0;
	m_ntong_so = 0;

	if(!m_szDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfe_deptid='%s' "), m_szDeptKey);
	}

	for (int i = 0; i < m_wndten_goi.GetItemCount(); i++)
	{
		if (m_wndten_goi.GetCheck(i))
		{
			m_wndten_goi.SetCurSel(i);
			if (!sztengoi.IsEmpty())
				sztengoi.AppendFormat(_T(", "));
			sztengoi.AppendFormat(_T("%s"), m_wndten_goi.GetCurrent(0));
		}
	}

	if(m_bVIPABC)
	{
		szWhere.AppendFormat(_T(" and hfl_subitem='VIP' AND hfl_subgroup <> 'DVTC'"));
	}

	if (!sztengoi.IsEmpty())
		szWhere.AppendFormat(_T(" and hfel_itemid in('%s') "), sztengoi);
	
	if (m_nqua_han == 0)
	{
		szWhere.AppendFormat(_T(" AND COALESCE(extract(DAY FROM hfe_enddate - systimestamp)*24+extract(hour FROM hfe_enddate - systimestamp), 0)  <=0 "));
	}
	else if (m_ncan_han == 0)
	{
		szWhere.AppendFormat(_T(" AND COALESCE(extract(DAY FROM hfe_enddate - systimestamp)*24+extract(hour FROM hfe_enddate - systimestamp), 0)  BETWEEN 0 and 24 "));
	}

	if(!m_szho_ten_benh_nhan.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(get_patientname(hfe_docno)) like(lower('%s%s%s')) "), _T("%"), m_szho_ten_benh_nhan, _T("%"));
	}

	if (m_bRStatus)
	{
		szWhere.AppendFormat(_T(" and hfe_status <> 'R'"));
	}

	szWhere.AppendFormat(_T(" AND hfe_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT ") \
	_T("   hfe_docno                  AS docno,") \
	_T("   get_patientname(hfe_docno) AS patientname,  ") \
	_T("   hfe_deptid                 AS deptid,") \
	_T("   hfel_unitprice             AS unit,") \
	_T("   hfel_desc                  AS goi,") \
	_T("   TO_CHAR(hfe_orderdate,'DD/MM/YYYY HH24:MI')                                                                AS begindate,") \
	_T("   TO_CHAR(hfe_enddate,'DD/MM/YYYY HH24:MI')                                                                  AS enddate,") \
	_T("   hfel_quantity                                                                                              AS quantity,") \
	_T("   COALESCE(extract(DAY FROM hfe_enddate - systimestamp)*24+extract(hour FROM hfe_enddate - systimestamp), 0) AS hour,") \
	_T("   hfe_status                 AS status,  ") \
	_T("   (SELECT hd_contacttel FROM hms_doc WHERE hfe_docno=hd_docno") \
	_T("   ) AS contacttel,") \
	_T("   (SELECT hr_name FROM hms_relative WHERE hr_relative_id=hfe_relative_id") \
	_T("   ) AS relative,") \
	_T("   (SELECT hr_phone FROM hms_relative WHERE hr_relative_id=hfe_relative_id") \
	_T("   )                                                                                                          AS phone,    ") \
	_T("   hfl_name                                                                                                   AS pkg_name,") \
	_T("   hfel_cost                                                                                                  AS amount") \
	_T(" FROM hms_fee_extra,") \
	_T("   hms_fee_extraline,") \
	_T("   hms_fee_list") \
	_T(" WHERE 1=1") \
	_T(" AND hfel_docno                                                                                                    = hfe_docno") \
	_T(" AND hfe_fee_extra_id                                                                                              = hfel_fee_extra_id") \
	_T(" AND hfel_itemid                                                                                                   = hfl_feeid") \
	_T(" AND hfe_type                                                                                                   ='S'") \
	_T(" %s") \
	_T(" ORDER BY hfe_deptid, hfel_fee_extraline_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems
			(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("patientname")), 
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("quantity")), 
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("goi")),			
			rs.GetValue(_T("begindate")),
			rs.GetValue(_T("enddate")),
			rs.GetValue(_T("hour")),
		    rs.GetValue(_T("status")),NULL);
			rs.GetValue(_T("hour"), m_nhour);
		    
			if (m_nhour<=0)
			{
				m_wndList.SetItemBkColor(m_wndList.GetItemCount()-1, RGB(255, 128,0), FALSE);
				m_wndList.SetItemTextColor(m_wndList.GetItemCount()-1, RGB(255, 255, 255), FALSE);
			}
			else if(m_nhour >0 && m_nhour <=24)
			{
				m_wndList.SetItemBkColor(m_wndList.GetItemCount()-1, RGB(34, 139, 34), FALSE);
				m_wndList.SetItemTextColor(m_wndList.GetItemCount()-1, RGB(255, 255, 255), FALSE);
			}
		m_ntong_so++;
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	UpdateData(false);
	return nCount;	
}
int CCheckPackageTime::OnAddCheckPackageTime(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCheckPackageTime::OnEditCheckPackageTime(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCheckPackageTime::OnDeleteCheckPackageTime(){
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
 		OnCancelCheckPackageTime();
 	}
	return 0;
}
int CCheckPackageTime::OnSaveCheckPackageTime()
{
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
 		//OnCheckPackageTimeListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCheckPackageTime::OnCancelCheckPackageTime(){
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
int CCheckPackageTime::OnCheckPackageTimeListLoadData(){
	return 0;
}
int CCheckPackageTime::OnExport()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 10);	xls.SetColumnWidth(1, 30);	xls.SetColumnWidth(2, 10);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 15);	xls.SetColumnWidth(5, 50);	xls.SetColumnWidth(6, 20);	xls.SetColumnWidth(7, 20);	xls.SetColumnWidth(8, 10);	xls.SetColumnWidth(9, 10);	xls.SetCellText(0, 0, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 0, _T("Họ và tên"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 0, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 0, _T("Số lượng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 0, _T("Đơn giá"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 0, _T("Tên gói"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 0, _T("Thời gian bắt đầu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 0, _T("Thời gian kết thúc"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 0, _T("Thời gian (giờ)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 0, _T("Trạng thái"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	nRow = 1;	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		tmpStr = m_wndList.GetItemText(i, 0);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 1);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 2);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 3);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 4);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 5);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 6);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 7);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 8);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_INTEGER| FMT_WRAPING);
		tmpStr = m_wndList.GetItemText(i, 9);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT| FMT_WRAPING);
		nRow++;
	}	EndWaitCursor();	xls.Save(_T("Exports\\DanhsachBenhnhanhethan.xls"));
	return 0;
}