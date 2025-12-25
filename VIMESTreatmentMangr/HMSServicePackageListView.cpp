#include "HMSServicePackageListView.h"
#include "MainFrm.h"
#include "HMSServicePackageCloseDataDialog.h"
#include "HMSReasonDialog.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageListView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageListView *)pWnd)->OnToDateCheckValue();
} 
static void _OnPackageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSServicePackageListView* )pWnd)->OnPackageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPackageSelendokFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnPackageSelendok();
}
/*static void _OnPackageSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnPackageKillfocus();
}*/
/*static void _OnPackageKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnPackageKillfocus();
}*/
static long _OnPackageLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageListView *)pWnd)->OnPackageLoadData();
}
/*static void _OnPackageAddNewFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnPackageAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageListView *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageListView *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSServicePackageListView *pVw = (CHMSServicePackageListView *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageListView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSServicePackageListView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSServicePackageListView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSServicePackageListView*)pWnd)->OnListDeleteItem();
}

static int _OnListTerminateItemFnc(CWnd *pWnd){
	return ((CHMSServicePackageListView*)pWnd)->OnListTerminateItem();
}

static int _OnListRollbackItemFnc(CWnd *pWnd){
	return ((CHMSServicePackageListView*)pWnd)->OnListRollbackItem();
}


static void _OnCloseDataSelectFnc(CWnd *pWnd){
	CHMSServicePackageListView *pVw = (CHMSServicePackageListView *)pWnd;
	pVw->OnCloseDataSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSServicePackageListView *pVw = (CHMSServicePackageListView *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSServicePackageListViewFnc(CWnd *pWnd){
	 return ((CHMSServicePackageListView*)pWnd)->OnAddHMSServicePackageListView();
} 
static int _OnEditHMSServicePackageListViewFnc(CWnd *pWnd){
	 return ((CHMSServicePackageListView*)pWnd)->OnEditHMSServicePackageListView();
} 
static int _OnDeleteHMSServicePackageListViewFnc(CWnd *pWnd){
	 return ((CHMSServicePackageListView*)pWnd)->OnDeleteHMSServicePackageListView();
} 
static int _OnSaveHMSServicePackageListViewFnc(CWnd *pWnd){
	 return ((CHMSServicePackageListView*)pWnd)->OnSaveHMSServicePackageListView();
} 
static int _OnCancelHMSServicePackageListViewFnc(CWnd *pWnd){
	 return ((CHMSServicePackageListView*)pWnd)->OnCancelHMSServicePackageListView();
} 
CHMSServicePackageListView::CHMSServicePackageListView()
{

	m_nDlgWidth = 1019;
	m_nDlgHeight = 631;
	SetDefaultValues();
}
CHMSServicePackageListView::~CHMSServicePackageListView()
{
}
void CHMSServicePackageListView::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1000, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 260, 55);
	m_wndToDate.Create(this,265, 30, 345, 55); 
	m_wndPackageLabel.Create(this, _T("Package"), 350, 30, 430, 55);
	m_wndPackage.Create(this,435, 30, 648, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 653, 30, 733, 55);
	m_wndDescription.Create(this,738, 30, 908, 55); 
	m_wndSearch.Create(this, _T("Search"), 913, 30, 993, 55);
	m_wndList.Create(this,6, 65, 1001, 570); 
	m_wndCloseData.Create(this, _T("Chốt số liệu"), 835, 575, 915, 600);
	m_wndClose.Create(this, _T("&Close"), 920, 575, 1000, 600);

}
void CHMSServicePackageListView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndPackage.SetCheckValue(false);
	m_wndPackage.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(false);


	m_wndPackage.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPackage.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T(""), CFMT_TEXT, 0);//extra_id
	m_wndList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//extraline_id
	m_wndList.InsertColumn(3, _T("Document No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(4, _T("Record No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(5, _T("Patient Name"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(6, _T("Yob"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(7, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(8, _T("Tên gói"), CFMT_TEXT, 320);
	m_wndList.InsertColumn(9, _T("Ngày bắt đầu"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(10, _T("Ngày DK kết thúc"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(11, _T("Ngày dự kiến"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(12, _T("Ngày sử dụng"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(13, _T("Ngày chốt"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(14, _T("Trạng thái"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndList.InsertColumn(15, _T("Báo ăn"), CFMT_TEXT, 50);
	//m_wndList.AddResizeColumn(8);
}
void CHMSServicePackageListView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPackage.SetEvent(WE_SELENDOK, _OnPackageSelendokFnc);
	//m_wndPackage.SetEvent(WE_SETFOCUS, _OnPackageSetfocusFnc);
	//m_wndPackage.SetEvent(WE_KILLFOCUS, _OnPackageKillfocusFnc);
	m_wndPackage.SetEvent(WE_SELCHANGE, _OnPackageSelectChangeFnc);
	m_wndPackage.SetEvent(WE_LOADDATA, _OnPackageLoadDataFnc);
	//m_wndPackage.SetEvent(WE_ADDNEW, _OnPackageAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);

	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Kết thúc không sử dụng dịch vụ"), _OnListTerminateItemFnc);
	m_wndList.AddEvent(0, _T("-"),NULL);
	m_wndList.AddEvent(2, _T("Khôi phục lại"), _OnListRollbackItemFnc);
	m_wndCloseData.SetEvent(WE_CLICK, _OnCloseDataSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_VIEW);
	//OnListLoadData();
}
void CHMSServicePackageListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackageKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSServicePackageListView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Package")] =  m_szPackageKey;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Package")].GetValue(m_szPackageKey);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CHMSServicePackageListView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSServicePackageListView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSServicePackageListView::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPackageKey.Empty();
	m_szDescription.Empty();

}
int CHMSServicePackageListView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			break;
 		case VM_VIEW: 
			m_szFromDate = m_szToDate = pMF->GetSysDate();
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
/*void CHMSServicePackageListView::OnFromDateChange(){
	
} */
/*void CHMSServicePackageListView::OnFromDateSetfocus(){
	
} */
/*void CHMSServicePackageListView::OnFromDateKillfocus(){
	
} */
int CHMSServicePackageListView::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSServicePackageListView::OnToDateChange(){
	
} */
/*void CHMSServicePackageListView::OnToDateSetfocus(){
	
} */
/*void CHMSServicePackageListView::OnToDateKillfocus(){
	
} */
int CHMSServicePackageListView::OnToDateCheckValue(){
	return 0;
} 
void CHMSServicePackageListView::OnPackageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageListView::OnPackageSelendok(){
	 
}
/*void CHMSServicePackageListView::OnPackageSetfocus(){
	
}*/
/*void CHMSServicePackageListView::OnPackageKillfocus(){
	
}*/
long CHMSServicePackageListView::OnPackageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPackage.IsSearchKey() && !m_szPackageKey.IsEmpty()){
		 szWhere.Format(_T(" and id='%s' "), m_szPackageKey);
	};
	m_wndPackage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select hfl_feeid as id, hfl_name as name") \
_T(" from hms_fee_list") \
_T(" where hfl_typeid='X' and hfl_subitem='VIP' ") \
_T(" and hfl_feeid in(select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPackage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CHMSServicePackageListView::OnPackageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSServicePackageListView::OnDescriptionChange(){
	
} */
/*void CHMSServicePackageListView::OnDescriptionSetfocus(){
	
} */
/*void CHMSServicePackageListView::OnDescriptionKillfocus(){
	
} */
int CHMSServicePackageListView::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSServicePackageListView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
} 

#include "HMSServicePackageDetailDialog.h"

void CHMSServicePackageListView::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;

	CHMSServicePackageDetailDialog dlg(this);

	dlg.m_nExtraId = str2long(m_wndList.GetItemText(nSel, 1));
	dlg.m_nExtraLineId = str2long(m_wndList.GetItemText(nSel, 2));
	dlg.m_nDocumentNo = str2long(m_wndList.GetItemText(nSel, 3));
	if(dlg.DoModal() == IDOK)
	{
		m_wndList.SetItemText(nSel, 14, _T("T"));
		m_wndList.RedrawWindow();
	}
} 
void CHMSServicePackageListView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSServicePackageListView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}

int CHMSServicePackageListView::OnListTerminateItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListDblClick();
	 return 0;
}

int CHMSServicePackageListView::OnListRollbackItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString szStatus = m_wndList.GetItemText(nSel, 14);
	if(szStatus != _T("T"))
	{
		ShowMessageBox(_T("Không thể thao tác với trạng thái hiện thời"));
		return 0;
	}
	int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn khôi phục lại không?"), MB_YESNO);
	if(ret == IDNO)
		return 0;
	CHMSReasonDialog dlg(this, _T("Lý do"));
	if(dlg.DoModal() == IDOK)
	{
		CString szDesc, szDate;
		long nExtraId = str2long(m_wndList.GetItemText(nSel, 1));
		long nExtraLineId = str2long(m_wndList.GetItemText(nSel, 2));
		long nDocumentNo = str2long(m_wndList.GetItemText(nSel, 3));
		szDate = m_wndList.GetItemText(nSel, 13);
		
		szSQL.Format(_T("HMS_SERVICE_PACKAGE_UNTERM_V2('%s',%ld, %ld, %ld, '%s')"),
			pMF->GetCurrentUser(), nDocumentNo, nExtraId, nExtraLineId, szDate);
		ret = str2int(pMF->ExecDML(szSQL));
		if(ret < 0)
		{
			ShowMessageBox(_T("Không khôi phục được"));
		}
		else
		{
			szDesc.Format(_T("Khôi phục lại số liệu khi đã chốt:HS[%ld], Số phiếu[%ld], dòng[%ld]"),
			nDocumentNo, nExtraId, nExtraLineId);
			pMF->SystemLog(_T("Gói yêu cầu"), szDesc);

			OnListLoadData();
		}
	}
	return 0;
}


long CHMSServicePackageListView::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	UpdateData(TRUE);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	
	szWhere.Empty();
	if(!m_szPackageKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfl_feeid = '%s' "), m_szPackageKey);
	}
	szWhere.AppendFormat(_T(" and hfe_deptid='%s' "), pMF->GetDepartmentID());
	if(!m_szDescription.IsEmpty())
	{
		if(IsDigit(m_szDescription))
			szWhere.AppendFormat(_T(" and hd_docno=%ld "), str2long(m_szDescription));
		else
		{
			szWhere.AppendFormat(_T(" and (hcr_recordno='%s' or lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(chr(37)||lower('%s')||chr(37)) ) "), m_szDescription, m_szDescription);
		}
	}

	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
_T("   hp_patientno  AS patientno,") \
_T("   hcr_recordno  AS recordno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)               AS pname,") \
_T("   TO_CHAR(hp_birthdate, 'YYYY') AS yob,") \
_T("   HMS_GETSEX(hp_sex)            AS sex,") \
_T("   to_char(hfe_orderdate, 'DD/MM/YYYY HH24:MI') as begindate,") \
_T("   to_char(hfe_enddate, 'DD/MM/YYYY HH24:MI') as enddate,") \
_T("   COALESCE(hfel_qtyorder, hfel_quantity) AS qtyorder,") \
_T("   hfelc_qty as qty, hfe_status as status, ") \
_T(" hfl_name as pkgname, to_char(hfelc_date, 'DD/MM/YYYY') as close_date, hfel_fee_extra_id as extra_id, hfel_fee_extraline_id as extraline_id ") \
_T(" FROM hms_patient,") \
_T("   hms_doc,") \
_T("   hms_clinical_record,") \
_T("   hms_fee_extra,") \
_T("   hms_fee_extraline,") \
_T("   hms_fee_extraline_close, hms_fee_list ") \
_T(" WHERE hd_patientno   = hp_patientno") \
_T(" AND hcr_docno        = hd_docno") \
_T(" AND hcr_status       ='I'") \
_T(" AND hfe_docno        = hd_docno") \
_T(" AND hfe_fee_extra_id = hfel_fee_extra_id") \
_T(" AND hfel_quantity    >= 0") \
_T(" AND hfe_status <>'O' ") \
_T(" AND hfe_docno        = hfelc_docno") \
_T(" AND hfel_fee_extraline_id = hfelc_extraline_id ") \
_T(" AND trunc(hfelc_date)       between to_date('%s','YYYY-MM-DD') and to_date('%s', 'YYYY-MM-DD') ") \
_T(" AND hfel_itemid = hfl_feeid and hfl_subitem in('VIP','VIP2') ") \
_T(" %s ") \
_T(" ORDER BY pname, hfelc_date "), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"),szSQL);
	nCount = rs.ExecSQL(szSQL);
	CString tmpStr;
	int index = 0;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), ++index);
		m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("extra_id")), 
			rs.GetValue(_T("extraline_id")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("RecordNo")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("Yob")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("pkgname")),
			rs.GetValue(_T("BeginDate")),
			rs.GetValue(_T("EndDate")),
			rs.GetValue(_T("qtyorder")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("close_date")), 
			rs.GetValue(_T("Status")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

	return 0;
}
void CHMSServicePackageListView::OnCloseDataSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSServicePackageCloseDataDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
} 
void CHMSServicePackageListView::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSServicePackageListView::OnAddHMSServicePackageListView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSServicePackageListView::OnEditHMSServicePackageListView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSServicePackageListView::OnDeleteHMSServicePackageListView(){
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
 		OnCancelHMSServicePackageListView();
 	}
	return 0;
}
int CHMSServicePackageListView::OnSaveHMSServicePackageListView(){
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
 		//szSQL = m_tblTbl.GetUpFromDateSQL(_T("createdby,createdFromDate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSServicePackageListViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSServicePackageListView::OnCancelHMSServicePackageListView(){
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
int CHMSServicePackageListView::OnHMSServicePackageListViewListLoadData(){
	return 0;
}

void CHMSServicePackageListView::OnResizeLayout()
{
	AddResize(&m_wndList, 100, 100);
	return;

	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 0, 0, 100, 0);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY,0,0,100,100);
	//AddLayoutControls(WS_REPOSY,0,100,0,0, &m_wndCloseData, &m_wndClose, NULL);
	AddLayoutControl(&m_wndFromDate, WS_RESIZEX, 0, 0, 10, 0);
	AddLayoutControl(&m_wndToDateLabel, WS_REPOSX, 10, 0, 0, 0);
	AddLayoutControl(&m_wndToDate, WS_RESIZEX|WS_REPOSX, 10, 0, 10, 0);
	AddLayoutControl(&m_wndPackageLabel, WS_REPOSX, 20, 0, 0, 0);
	AddLayoutControl(&m_wndPackage, WS_RESIZEX|WS_REPOSX, 20, 0, 60, 0);
	AddLayoutControl(&m_wndDescriptionLabel, WS_REPOSX, 80, 0, 0, 0);
	AddLayoutControl(&m_wndDescription, WS_RESIZEX|WS_REPOSX, 80, 0, 20, 0);
	AddLayoutControl(&m_wndSearch, WS_REPOSX, 100, 0, 0, 0);
	AddLayoutControl(&m_wndCloseData, WS_REPOSX|WS_REPOSY, 100, 100, 0, 0);
	AddLayoutControl(&m_wndClose, WS_REPOSX|WS_REPOSY, 100, 100, 0, 0);

}