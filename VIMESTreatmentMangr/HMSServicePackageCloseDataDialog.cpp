#include "HMSServicePackageCloseDataDialog.h"
#include "MainFrm.h"
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageCloseDataDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPackageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSServicePackageCloseDataDialog* )pWnd)->OnPackageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPackageSelendokFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnPackageSelendok();
}
/*static void _OnPackageSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnPackageKillfocus();
}*/
/*static void _OnPackageKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnPackageKillfocus();
}*/
static long _OnPackageLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageCloseDataDialog *)pWnd)->OnPackageLoadData();
}
/*static void _OnPackageAddNewFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnPackageAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageCloseDataDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSServicePackageCloseDataDialog *pVw = (CHMSServicePackageCloseDataDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSServicePackageCloseDataDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnListDeleteItem();
}


static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSServicePackageCloseDataDialog *pVw = (CHMSServicePackageCloseDataDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSServicePackageCloseDataDialog *pVw = (CHMSServicePackageCloseDataDialog *)pWnd;
	pVw->OnCloseSelect();
} 

static void _OnMarkSelectFnc(CWnd *pWnd){
	CHMSServicePackageCloseDataDialog *pVw = (CHMSServicePackageCloseDataDialog *)pWnd;
	pVw->OnMarkSelect();
} 

static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSServicePackageCloseDataDialog *pVw = (CHMSServicePackageCloseDataDialog *)pWnd;
	pVw->OnUnMarkSelect();
} 


static int _OnAddHMSServicePackageCloseDataDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnAddHMSServicePackageCloseDataDialog();
} 
static int _OnEditHMSServicePackageCloseDataDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnEditHMSServicePackageCloseDataDialog();
} 
static int _OnDeleteHMSServicePackageCloseDataDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnDeleteHMSServicePackageCloseDataDialog();
} 
static int _OnSaveHMSServicePackageCloseDataDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnSaveHMSServicePackageCloseDataDialog();
} 
static int _OnCancelHMSServicePackageCloseDataDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnCancelHMSServicePackageCloseDataDialog();
} 
CHMSServicePackageCloseDataDialog::CHMSServicePackageCloseDataDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 905;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSServicePackageCloseDataDialog::~CHMSServicePackageCloseDataDialog(){
}
void CHMSServicePackageCloseDataDialog::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("SearchInformation"), 5, 5, 896, 60);
	m_wndToDateLabel.Create(this, _T("To Date"), 12, 30, 92, 55);
	m_wndToDate.Create(this,97, 30, 177, 55); 
	m_wndPackageLabel.Create(this, _T("Package"), 182, 30, 262, 55);
	m_wndPackage.Create(this,267, 30, 547, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 552, 30, 632, 55);
	m_wndDescription.Create(this,637, 30, 807, 55); 
	m_wndSearch.Create(this, _T("Search"), 812, 30, 892, 55);
	m_wndList.Create(this,5, 65, 895, 570); 
	m_wndApply.Create(this, _T("&Apply"), 730, 575, 810, 600);
	m_wndClose.Create(this, _T("&Close"), 815, 575, 895, 600);
	m_wndMark.Create(this, _T("Chọn [><]"), 5, 575, 100, 600);
	m_wndUnMark.Create(this, _T("Bỏ chọn [<>]"), 105, 575, 200, 600);
}
void CHMSServicePackageCloseDataDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndPackage.SetCheckValue(false);
	m_wndPackage.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(false);
	m_wndMark.ModifyStyle(WS_TABSTOP,  0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);

	m_wndPackage.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPackage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	
	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T(""), CFMT_TEXT, 0);//extra_id
	m_wndList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//extraline_id
	m_wndList.InsertColumn(3, _T("Document No"), CFMT_NUMBER, 85);
	m_wndList.InsertColumn(4, _T("Record No"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Patient Name"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(6, _T("Yob"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(7, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(8, _T("Tên gói"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(9, _T("Ngày bắt đầu"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(10, _T("Ngày DK kết thúc"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(11, _T("Ngày dự kiến"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(12, _T("Ngày sử dụng"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(13, _T("Chọn"), CFMT_TEXT|CFMT_CENTER, 50);

}
void CHMSServicePackageCloseDataDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
//	m_wndList.AddEvent(1, _T("Kết thúc không hiện trên danh sách chốt"), _OnListDeleteItemFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndMark.SetEvent(WE_CLICK, _OnMarkSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	SetMode(VM_VIEW);
	OnListLoadData();

}
void CHMSServicePackageCloseDataDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackageKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSServicePackageCloseDataDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Package")] =  m_szPackageKey;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Package")].GetValue(m_szPackageKey);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CHMSServicePackageCloseDataDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSServicePackageCloseDataDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSServicePackageCloseDataDialog::SetDefaultValues(){

	m_szToDate.Empty();
	m_szPackageKey.Empty();
	m_szDescription.Empty();

}
int CHMSServicePackageCloseDataDialog::SetMode(int nMode){
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
			m_szToDate = pMF->GetSysDate();
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
/*void CHMSServicePackageCloseDataDialog::OnToDateChange(){
	
} */
/*void CHMSServicePackageCloseDataDialog::OnToDateSetfocus(){
	
} */
/*void CHMSServicePackageCloseDataDialog::OnToDateKillfocus(){
	
} */
int CHMSServicePackageCloseDataDialog::OnToDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int n = CompareDate(m_szToDate, pMF->GetSysDate());
	if (n > 5 || n < 0)
	{
		return -1;
	}
	OnListLoadData();
	return 0;
} 
void CHMSServicePackageCloseDataDialog::OnPackageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageCloseDataDialog::OnPackageSelendok(){
	 
}
/*void CHMSServicePackageCloseDataDialog::OnPackageSetfocus(){
	
}*/
/*void CHMSServicePackageCloseDataDialog::OnPackageKillfocus(){
	
}*/
long CHMSServicePackageCloseDataDialog::OnPackageLoadData(){
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
/*void CHMSServicePackageCloseDataDialog::OnPackageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSServicePackageCloseDataDialog::OnDescriptionChange(){
	
} */
/*void CHMSServicePackageCloseDataDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSServicePackageCloseDataDialog::OnDescriptionKillfocus(){
	
} */
int CHMSServicePackageCloseDataDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSServicePackageCloseDataDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CHMSServicePackageCloseDataDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CString szMark = m_wndList.GetItemText(nSel, 13);
	if(szMark == _T("[X]"))
		szMark.Empty();
	else
		szMark = _T("[X]");
	m_wndList.SetItemText(nSel, 13, szMark);
	m_wndList.RedrawWindow();
} 
void CHMSServicePackageCloseDataDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSServicePackageCloseDataDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;

	int retMsg = ShowMessageBox(_T("Bạn có muốn kết thúc mục đã chọn và không hiện trên danh sách chốt số liệu không?"), MB_YESNO);
	if(retMsg == IDNO)
		return 0;
	
	long nDocNo = str2long(m_wndList.GetItemText(nSel, 3));
	long nExtraId = str2long(m_wndList.GetItemText(nSel, 1));

	CString szSQL;
	szSQL.Format(_T("UPDATE hms_fee_extra SET hfe_status='T' WHERE hfe_docno =%ld and hfe_fee_extra_id=%ld"),
		nDocNo, nExtraId);
	if(pMF->ExecSQL(szSQL) > 0)
	{
		m_wndList.DeleteItem(nSel);
	}
	 return 0;
}


long CHMSServicePackageCloseDataDialog::OnListLoadData(){
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
			
			szWhere.AppendFormat(_T(" and (hcr_recordno='%s' or lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(chr(37)||lower('%s')||chr(37)) )  "), m_szDescription, m_szDescription);
			szWhere.AppendFormat(_T(" and trunc(hfe_enddate) >= trunc(sysdate) ") );
			szWhere.AppendFormat(_T(" AND hfel_quantity    > 0 "));
		}
	}

	szWhere.AppendFormat(_T(" and trunc(hfe_orderdate) <= to_date('%s', 'YYYY-MM-DD') "), m_szToDate);
	//Điều kiện dưới để test
	//szWhere.AppendFormat(_T(" and trunc(hfe_enddate) >= to_date('%s', 'YYYY-MM-DD') "), m_szToDate);
	
	

	szSQL.Format(_T(" SELECT hfe_fee_extra_id as extra_id, hfel_fee_extraline_id as extraline_id, hd_docno AS docno,") \
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
_T("   case when hfel_qtyorder is null then trunc(hfe_enddate)-trunc(hfe_orderdate) else hfel_qtyorder end AS qtyorder,") \
_T("   hfel_quantity as qty,hfl_name as pkgname ") \
_T(" FROM hms_patient,") \
_T("   hms_doc,") \
_T("   hms_clinical_record,") \
_T("   hms_treatment_record, ") \
_T("   hms_fee_extra,") \
_T("   hms_fee_extraline, hms_fee_list ") \
_T(" WHERE hd_patientno   = hp_patientno") \
_T(" AND hcr_docno        = hd_docno") \
_T(" AND htr_docno = hd_docno ") \
_T(" AND hcr_status       ='I'") \
_T(" AND hfe_docno        = hd_docno") \
_T(" AND hfe_fee_extra_id = hfel_fee_extra_id") \
_T(" AND hfe_status not in('O','T') ") \
_T(" AND hfel_locked <> 'Y' ") \
_T(" AND hfl_feeid = hfel_itemid and hfl_subitem in('VIP','VIP2') ") \
_T(" AND (hfe_treattime = hcr_treattime  or hfe_treattime=0) ") \
_T(" AND htr_status='I' ") \
_T(" AND htr_idx = hfe_refidx ") \
_T(" AND hfe_docno NOT   IN") \
_T("   (SELECT hfelc_docno FROM hms_fee_extraline_close WHERE hfelc_docno = hfe_docno and hfelc_extraline_id = hfel_fee_extraline_id and trunc(hfelc_date)=to_date('%s', 'YYYY-MM-DD') ") \
_T("   )") \
_T(" %s ") \
_T(" ORDER BY pname"), m_szToDate, szWhere);
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nIndex = 0;
	CString tmpStr;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), ++nIndex);
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
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return 0;
}
void CHMSServicePackageCloseDataDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int res = 0;
	int nCount = 0;
	long nDocNo, nExtraId, nExtraLineId;
	
	int n = CompareDate(m_szToDate, pMF->GetSysDate());
	if (n > 5 || n < 0)
	{
		ShowMessageBox(_T("Ngày chốt không hợp lệ"));
		return;
	}

	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		CString szMark = m_wndList.GetItemText(i, 13);
		if(szMark == _T("[X]"))
		{
			nDocNo = str2long(m_wndList.GetItemText(i, 3));
			nExtraId = str2long(m_wndList.GetItemText(i, 1));
			nExtraLineId = str2long(m_wndList.GetItemText(i, 2));
			szSQL.Format(_T("HMS_SERVICE_PACKAGE_LOCKDATA(%ld, %ld, %ld, '%s','%s') "),
				nDocNo,nExtraId, nExtraLineId, pMF->GetCurrentUser(), m_szToDate);

			res = str2int(pMF->ExecDML(szSQL));
			if(res > 0)
			{
				nCount++;
			}
		}
	}
	if(nCount <= 0)
	{
		ShowMessageBox(_T("Không có bệnh nhân nào được áp dụng"));
		return;
	}
	CGuiDialog::OnOK();
} 
void CHMSServicePackageCloseDataDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 

void CHMSServicePackageCloseDataDialog::OnMarkSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetItemText(i, 13, _T("[X]"));
	}
	m_wndList.RedrawWindow();
} 

void CHMSServicePackageCloseDataDialog::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetItemText(i, 13, _T(""));
	}
	m_wndList.RedrawWindow();
} 


int CHMSServicePackageCloseDataDialog::OnAddHMSServicePackageCloseDataDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSServicePackageCloseDataDialog::OnEditHMSServicePackageCloseDataDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSServicePackageCloseDataDialog::OnDeleteHMSServicePackageCloseDataDialog(){
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
 		OnCancelHMSServicePackageCloseDataDialog();
 	}
	return 0;
}
int CHMSServicePackageCloseDataDialog::OnSaveHMSServicePackageCloseDataDialog(){
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
 		//OnHMSServicePackageCloseDataDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSServicePackageCloseDataDialog::OnCancelHMSServicePackageCloseDataDialog(){
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
int CHMSServicePackageCloseDataDialog::OnHMSServicePackageCloseDataDialogListLoadData(){
	return 0;
}
