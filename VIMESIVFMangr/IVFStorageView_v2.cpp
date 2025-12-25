#include "IVFStorageView_v2.h"
#include "MainFrm.h"
#include "IVFLabPhieutruDialog.h"
#include "IVFPhieuTruTTDialog.h"
#include "IVFReminderTrackDlg.h"

static int _OnReminderTrackFnc(CWnd* pWnd){
	return ((CIVFStorageView_v2* )pWnd)->OnReminderTrack();
	
} 
static void _OnThungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageView_v2* )pWnd)->OnThungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungSelendokFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnThungSelendok();
}
/*static void _OnThungSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnThungKillfocus();
}*/
/*static void _OnThungKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnThungKillfocus();
}*/
static long _OnThungLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView_v2 *)pWnd)->OnThungLoadData();
}
/*static void _OnThungAddNewFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnThungAddNew();
}*/
static void _OnGiaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageView_v2* )pWnd)->OnGiaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGiaSelendokFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnGiaSelendok();
}
/*static void _OnGiaSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnGiaKillfocus();
}*/
/*static void _OnGiaKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnGiaKillfocus();
}*/
static long _OnGiaLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView_v2 *)pWnd)->OnGiaLoadData();
}
/*static void _OnGiaAddNewFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnGiaAddNew();
}*/
static void _OnCassetteSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageView_v2* )pWnd)->OnCassetteSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCassetteSelendokFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnCassetteSelendok();
}
/*static void _OnCassetteSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnCassetteKillfocus();
}*/
/*static void _OnCassetteKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnCassetteKillfocus();
}*/
static long _OnCassetteLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView_v2 *)pWnd)->OnCassetteLoadData();
}
/*static void _OnCassetteAddNewFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnCassetteAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2 *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CIVFStorageView_v2 *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CIVFStorageView_v2 *pVw = (CIVFStorageView_v2 *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView_v2*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFStorageView_v2*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFStorageView_v2*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2*)pWnd)->OnListDeleteItem();
} 

static void _OnExpiredSelectFnc(CWnd* pWnd)
{
	((CIVFStorageView_v2*)pWnd)->OnExpiredSelect();
}
static void _OnNearlyExpiredSelectFnc(CWnd* pWnd)
{
	((CIVFStorageView_v2*)pWnd)->OnNearlyExpiredSelect();
}
static void _OnExpiredInMonthSelectFnc(CWnd* pWnd)
{
	((CIVFStorageView_v2*)pWnd)->OnExpiredInMonthSelect();
}

static void _OnTrutinhtrungSelectFnc(CWnd* pWnd)
{
	((CIVFStorageView_v2*)pWnd)->OnTrutinhtrungSelect();
}
static int _OnAddIVFStorageView_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2*)pWnd)->OnAddIVFStorageView_v2();
} 
static int _OnEditIVFStorageView_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2*)pWnd)->OnEditIVFStorageView_v2();
} 
static int _OnDeleteIVFStorageView_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2*)pWnd)->OnDeleteIVFStorageView_v2();
} 
static int _OnSaveIVFStorageView_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2*)pWnd)->OnSaveIVFStorageView_v2();
} 
static int _OnCancelIVFStorageView_v2Fnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2*)pWnd)->OnCancelIVFStorageView_v2();
} 
CIVFStorageView_v2::CIVFStorageView_v2(){

	m_nDlgWidth = 945;
	m_nDlgHeight = 635;
	SetDefaultValues();
}
CIVFStorageView_v2::~CIVFStorageView_v2(){
}
void CIVFStorageView_v2::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 940, 60);
	m_wndStorageInformation.Create(this, _T("Storage Information"), 5, 65, 940, 600);
	m_wndThungLabel.Create(this, _T("thung"), 10, 30, 90, 55);
	m_wndThung.Create(this,95, 30, 235, 55); 
	m_wndGiaLabel.Create(this, _T("gia"), 240, 30, 320, 55);
	m_wndGia.Create(this,325, 30, 465, 55); 
	m_wndCassetteLabel.Create(this, _T("cassette"), 470, 30, 550, 55);
	m_wndCassette.Create(this,555, 30, 695, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 700, 30, 780, 55);
	m_wndSearch.Create(this,785, 30, 885, 55); 
	m_wndFind.Create(this, _T("@"), 890, 30, 930, 55);
	m_wndList.Create(this,10, 90, 930, 595); 
	m_wndExpired.Create(this, _T("Expired"), 5, 605, 205, 630);
	m_wndNearlyExpired.Create(this, _T("Expired in 15 days"), 210, 605, 410, 630);
	m_wndExpiredInMonth.Create(this, _T("Expired in Month"), 415, 605, 615, 630);
	m_wndTrutinhtrung.Create(this, _T("Trữ tinh trùng"), 820, 605, 940, 630);
}
void CIVFStorageView_v2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndThung.SetCheckValue(false);
	m_wndThung.LimitText(35);
	m_wndGia.SetCheckValue(false);
	m_wndGia.LimitText(35);
	m_wndCassette.SetCheckValue(false);
	m_wndCassette.LimitText(35);
	m_wndSearch.SetLimitText(16);
	//m_wndSearch.SetCheckValue(true);


	m_wndThung.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndThung.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndGia.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGia.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCassette.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCassette.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT|CFMT_RIGHT, 50);
	m_wndList.InsertColumn(1, _T("Cassette"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(2, _T("Số phôi"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Số phôi rã"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(4, _T("Số phiếu trữ"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(5, _T("Số hồ sơ"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(6, _T("Họ và tên"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(7, _T("Năm sinh"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(8, _T("Giới tính"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(9, _T("Ngày hết hạn"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(10, _T("Số điện thoại"), CFMT_TEXT, 400);

}
void CIVFStorageView_v2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndThung.SetEvent(WE_SELENDOK, _OnThungSelendokFnc);
	//m_wndThung.SetEvent(WE_SETFOCUS, _OnThungSetfocusFnc);
	//m_wndThung.SetEvent(WE_KILLFOCUS, _OnThungKillfocusFnc);
	m_wndThung.SetEvent(WE_SELCHANGE, _OnThungSelectChangeFnc);
	m_wndThung.SetEvent(WE_LOADDATA, _OnThungLoadDataFnc);
	//m_wndThung.SetEvent(WE_ADDNEW, _OnThungAddNewFnc);
	m_wndGia.SetEvent(WE_SELENDOK, _OnGiaSelendokFnc);
	//m_wndGia.SetEvent(WE_SETFOCUS, _OnGiaSetfocusFnc);
	//m_wndGia.SetEvent(WE_KILLFOCUS, _OnGiaKillfocusFnc);
	m_wndGia.SetEvent(WE_SELCHANGE, _OnGiaSelectChangeFnc);
	m_wndGia.SetEvent(WE_LOADDATA, _OnGiaLoadDataFnc);
	//m_wndGia.SetEvent(WE_ADDNEW, _OnGiaAddNewFnc);
	m_wndCassette.SetEvent(WE_SELENDOK, _OnCassetteSelendokFnc);
	//m_wndCassette.SetEvent(WE_SETFOCUS, _OnCassetteSetfocusFnc);
	//m_wndCassette.SetEvent(WE_KILLFOCUS, _OnCassetteKillfocusFnc);
	m_wndCassette.SetEvent(WE_SELCHANGE, _OnCassetteSelectChangeFnc);
	m_wndCassette.SetEvent(WE_LOADDATA, _OnCassetteLoadDataFnc);
	//m_wndCassette.SetEvent(WE_ADDNEW, _OnCassetteAddNewFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Reminder Track"), _OnReminderTrackFnc);
	m_wndExpired.SetEvent(WE_CLICK, _OnExpiredSelectFnc);
	m_wndNearlyExpired.SetEvent(WE_CLICK, _OnNearlyExpiredSelectFnc);
	m_wndExpiredInMonth.SetEvent(WE_CLICK, _OnExpiredInMonthSelectFnc);
	m_wndTrutinhtrung.SetEvent(WE_CLICK, _OnTrutinhtrungSelectFnc);

	AddEvent(1, _T("Add	Ctrl+A"), _OnAddIVFStorageView_v2Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditIVFStorageView_v2Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteIVFStorageView_v2Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveIVFStorageView_v2Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelIVFStorageView_v2Fnc, 0, 'T', VK_CONTROL);
	EnableControls();
	EnableButtons(FALSE, -1);

}
void CIVFStorageView_v2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndTrutinhtrung.GetDlgCtrlID(), m_bTrutinhtrung);
	DDX_TextEx(pDX, m_wndThung.GetDlgCtrlID(), m_szThungKey);
	DDX_TextEx(pDX, m_wndGia.GetDlgCtrlID(), m_szGiaKey);
	DDX_TextEx(pDX, m_wndCassette.GetDlgCtrlID(), m_szCassetteKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndExpired.GetDlgCtrlID(), m_bExpired);
	DDX_Check(pDX, m_wndNearlyExpired.GetDlgCtrlID(), m_bNearlyExpired);
	DDX_Check(pDX, m_wndExpiredInMonth.GetDlgCtrlID(), m_bExpiredInMonth);
}
void CIVFStorageView_v2::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Thung")] =  m_szThungKey;
	m_jData[_T("Gia")] =  m_szGiaKey;
	m_jData[_T("Cassette")] =  m_szCassetteKey;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("Thung")].GetValue(m_szThungKey);
	m_jData[_T("Gia")].GetValue(m_szGiaKey);
	m_jData[_T("Cassette")].GetValue(m_szCassetteKey);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CIVFStorageView_v2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFStorageView_v2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFStorageView_v2::SetDefaultValues(){
	m_bTrutinhtrung = FALSE;
	m_bExpired = FALSE;
	m_bNearlyExpired = FALSE;
	m_bExpiredInMonth = FALSE;
	m_szThungKey.Empty();
	m_szGiaKey.Empty();
	m_szCassetteKey.Empty();
	m_szSearch.Empty();

}
int CIVFStorageView_v2::SetMode(int nMode){
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
void CIVFStorageView_v2::OnThungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageView_v2::OnThungSelendok(){
	 UpdateData();
	 OnGiaLoadData();
}
/*void CIVFStorageView_v2::OnThungSetfocus(){
	
}*/
/*void CIVFStorageView_v2::OnThungKillfocus(){
	
}*/
long CIVFStorageView_v2::OnThungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadComboBoxList(&m_wndThung, m_szThungKey, _T("ivf_storage_thung"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndThung.IsSearchKey() && !m_szThungKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szThungKey
};
	m_wndThung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndThung.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFStorageView_v2::OnThungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFStorageView_v2::OnGiaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageView_v2::OnGiaSelendok(){
	UpdateData();
	OnCassetteLoadData();
}
/*void CIVFStorageView_v2::OnGiaSetfocus(){
	
}*/
/*void CIVFStorageView_v2::OnGiaKillfocus(){
	
}*/
long CIVFStorageView_v2::OnGiaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	if (!m_szThungKey.IsEmpty())
	{
		szFilter.Format(_T(" and parent_id = '%s'"), m_szThungKey);
	}
	return pMF->LoadComboBoxList(&m_wndGia, m_szGiaKey, _T("ivf_storage_gia"), szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGia.IsSearchKey() && !m_szGiaKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGiaKey
};
	m_wndGia.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGia.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFStorageView_v2::OnGiaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFStorageView_v2::OnCassetteSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageView_v2::OnCassetteSelendok(){
	 
}
/*void CIVFStorageView_v2::OnCassetteSetfocus(){
	
}*/
/*void CIVFStorageView_v2::OnCassetteKillfocus(){
	
}*/
long CIVFStorageView_v2::OnCassetteLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	if (!m_szThungKey.IsEmpty())
	{
		szFilter.Format(_T(" and parent_id = '%s'"), m_szGiaKey);
	}
	return pMF->LoadComboBoxList(&m_wndCassette, m_szCassetteKey, _T("ivf_storage_cassette"), szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCassette.IsSearchKey() && !m_szCassetteKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCassetteKey
};
	m_wndCassette.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCassette.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFStorageView_v2::OnCassetteAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFStorageView_v2::OnSearchChange(){
	
} */
/*void CIVFStorageView_v2::OnSearchSetfocus(){
	
} */
/*void CIVFStorageView_v2::OnSearchKillfocus(){
	
} */
int CIVFStorageView_v2::OnSearchCheckValue(){
	return 0;
} 
void CIVFStorageView_v2::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
void CIVFStorageView_v2::OnListDblClick(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	long nDocNo = 0, nId = 0;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;

	nId = str2long(m_wndList.GetItemText(nSel, 4));
	nDocNo = str2long(m_wndList.GetItemText(nSel, 5));
	if(nId <= 0 || nDocNo <= 0)
		return;

	szSQL.Format(_T("SELECT    ilg_type") \
	_T(" FROM      ivf_storage_top") \
	_T(" left join hmsv_paraclinic ON ( hpc_orderid = order_id )") \
	_T(" left JOIN hms_testorderline t ON ( hpc_orderid = t.hpcl_orderid )") \
	_T(" left JOIN hms_pacsorderline p ON ( hpc_orderid = p.hpcl_orderid )") \
	_T(" LEFT JOIN ivf_lab_group ON( ilg_itemid = coalesce(t.hpcl_itemid, p.hpcl_itemid) )") \
	_T(" LEFT JOIN ivf_storage_loai ON (ilg_type = ivf_storage_loai_id)") \
	_T(" WHERE     order_id = %ld and parent_id = 'TRU'"), nId);
 
	rs.ExecSQL(szSQL);
	tmpStr = rs.GetStringValue();
	if (tmpStr.IsEmpty())
	{
		return;
	}
	if (tmpStr == _T("TTT"))
	{
		CIVFPhieuTruTTDialog dlg(this, nDocNo, nId);
		dlg.SetMode(VM_VIEW);
		dlg.DoModal();
	}
	else
	{
		CIVFLabPhieuTruDialog dlg(this, nDocNo, nId);
		dlg.SetMode(VM_VIEW);
		dlg.DoModal();
	}
} 
void CIVFStorageView_v2::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageView_v2::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFStorageView_v2::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOldLocation, szNewLocation, szWhere;
	
	LoadByContainer();
	return 0;


	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1, nItem = -1;
	szWhere.Empty();
	if (!m_szThungKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and top.id_thungtru = '%s'"), m_szThungKey);
	}
	if (!m_szGiaKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and top.id_giatru = '%s'"), m_szGiaKey);
	}
	if (!m_szCassetteKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and id_cassette = '%s'"), m_szCassetteKey);
	}
	if (!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(get_patientname(top.docno)||to_char(top.docno)) like lower('%s') "), m_szSearch);
	}
	szSQL.Format(_T("SELECT upper(Ivf_get_setting_desc('ivf_storage_thung', top.id_thungtru)") \
	_T("       ||', '") \
	_T("       ||Ivf_get_setting_desc('ivf_storage_gia', top.id_giatru)") \
	_T("       ||', '") \
	_T("       ||Ivf_get_setting_desc('ivf_storage_cassette', id_cassette)) AS address,") \
	_T("       top,") \
	_T("       sophoi AS so_luong,") \
	_T("       order_id AS so_phieu,") \
	_T("       top.docno,") \
	_T("       Get_patientname(top.docno) AS ten_bn, to_char(ngay_het_han, 'dd/mm/yyyy') as ngay_het_han,") \
	_T("	   case when sysdate >= ngay_het_han then 1 else 0 end as het_han,") \
	_T("	   CASE WHEN sysdate >= add_months(ngay_het_han, -1) AND sysdate < ngay_het_han THEN 1 ELSE 0 END AS can_han") \
	_T(" FROM   ivf_storage_top top") \
	_T(" left join ivf_phieutru_view ON (id = order_id)") \
	_T(" WHERE 1=1 %s") \
	_T(" ORDER  BY top.id_thungtru,top.id_giatru,id_cassette "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	szOldLocation.Empty();
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("address"), szNewLocation);
		if (szOldLocation != szNewLocation)
		{
			nItem = m_wndList.AddItems(_T(""), szNewLocation, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 6, DT_LEFT, true);
			m_wndList.SetSubItemBkColor(nItem, 1, RGB(230, 230, 230)); 
			szOldLocation = szNewLocation;
		}
		nItem = m_wndList.AddItems(
			int2str(nIdx++), 
			rs.GetValue(_T("Top")), 
			rs.GetValue(_T("so_luong")), 
			rs.GetValue(_T("so_phieu")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("ten_bn")), 
			rs.GetValue(_T("ngay_het_han")), 
			NULL);
		if (rs.GetValue(_T("het_han"))== _T("1"))
		{
			m_wndList.SetSubItemBkColor(nItem, 6, RGB(255, 0, 0), FALSE);
		}
		if (rs.GetValue(_T("can_han"))== _T("1"))
		{
			m_wndList.SetSubItemBkColor(nItem, 6, RGB(255, 165, 0), FALSE);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CIVFStorageView_v2::LoadByContainer()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsg(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CRecord rsp(&pMF->m_db);
	CString szSQL, szOldLocation, szNewLocation, szWhere, szExpired;
	bool bSearchMode = false;
	if (!m_szSearch.IsEmpty())
	{
		bSearchMode = true;
	}
	int nCount = 0, nIdx = 1, nItem = -1, nItemCassette = -1;
	szWhere.Empty();
	if(!m_szThungKey.IsEmpty())
	{
		szWhere.Format(_T(" and ivf_storage_thung_id = '%s' "), m_szThungKey);
	}
	szExpired.Empty();
	if (m_bExpired && m_bNearlyExpired)
	{
		szExpired.Format(_T(" AND (sysdate >= ngay_het_han OR (sysdate >= ngay_het_han- interval '15' day AND sysdate < ngay_het_han))"));
	}
	else if (m_bExpired && m_bExpiredInMonth)
	{
		szExpired.Format(_T(" AND (sysdate >= ngay_het_han OR (sysdate >= ngay_het_han- interval '30' day AND sysdate < ngay_het_han))"));
	}
	else
	{
		if (m_bExpired)
		{
			szExpired.Format(_T(" AND sysdate >= ngay_het_han "));
		}
		if (m_bNearlyExpired)
		{
			szExpired.Format(_T(" AND (sysdate >= ngay_het_han- interval '15' day AND sysdate < ngay_het_han) "));
		}
		if (m_bExpiredInMonth)
		{
			szExpired.Format(_T(" AND (sysdate >= ngay_het_han- interval '30' day AND sysdate < ngay_het_han) "));
		}
	}
	szSQL.Format(_T("SELECT ivf_storage_thung_id, description, max_capacity, to_char(nito_date, 'DD/MM/YYYY') as ngaydo_nito ") \
		_T(" FROM ivf_storage_thung WHERE isactive='Y' %s ORDER BY category "), szWhere);
	rs.ExecSQL(szSQL);
	m_wndList.BeginLoad(); 
	CString szDesc, szDate, tmpStr;
	int nCapacity;
	CString szIdThung, szIdGia, szIdCassette;

	while(!rs.IsEOF())
	{
		CGridListItem* pItem = new CGridListItem();
		pItem->SetTextColor(RGB(255, 255, 255));
		pItem->SetBkColor(RGB(64, 128, 192));
		
		rs.GetValue(_T("ivf_storage_thung_id"), szIdThung);
		pItem->Insert(0, szIdThung, 50, DT_LEFT|DT_SINGLELINE);

		rs.GetValue(_T("description"), tmpStr);
		
		pItem->Insert(1, tmpStr, 170, DT_LEFT|DT_SINGLELINE);
		rs.GetValue(_T("max_capacity"), nCapacity);
		tmpStr.Format(_T("Số giá chứa: %d"), nCapacity);
		pItem->Insert(2, tmpStr, 110, DT_LEFT|DT_SINGLELINE);
		rs.GetValue(_T("ngaydo_nito"), szDate);
		tmpStr.Format(_T("Ngày đổ nito: %s"), szDate);
		pItem->Insert(3, tmpStr, 190, DT_LEFT|DT_SINGLELINE);
		m_wndList.Add(pItem);

		szWhere.Empty();
		if(!m_szGiaKey.IsEmpty())
		{
			szWhere.Format(_T(" and ivf_storage_gia_id='%s' "), m_szGiaKey);
		}
		if (bSearchMode)
		{
			szWhere.AppendFormat(_T(" and tbl.da_dung > 0"));
		}
		szSQL.Format(_T("WITH tbl as (") \
		_T("         SELECT parent_id as gia_id," ) \
		_T("             COUNT(*) as da_dung") \
		_T("         FROM") \
		_T("             ivf_storage_cassette") \
		_T("         WHERE 1=1 ") \
		_T("             AND isactive = 'Y'") \
		_T("             AND status = 'C'") \
		_T("		GROUP BY parent_id") \
		_T("	)") \
		_T(" SELECT") \
		_T("     ivf_storage_gia_id,") \
		_T("     description,") \
		_T("     (") \
		_T("         SELECT") \
		_T("             COUNT(*)") \
		_T("         FROM") \
		_T("             ivf_storage_cassette") \
		_T("         WHERE") \
		_T("             parent_id = ivf_storage_gia_id") \
		_T("             AND isactive = 'Y'") \
		_T("     ) AS tong_so,") \
		_T("     tbl.da_dung") \
		_T(" FROM ivf_storage_gia, tbl") \
		_T(" WHERE parent_id ='%s' and isactive='Y' %s and tbl.gia_id = ivf_storage_gia_id ") \
		_T(" ORDER BY description "), szIdThung, szWhere);

		_tprintf(_T("\r\n%s"), szSQL);

		rsg.ExecSQL(szSQL);
		while(!rsg.IsEOF())
		{

			CGridListItem* pItem = new CGridListItem();
			pItem->SetTextColor(RGB(255, 255, 255));
			pItem->SetBkColor(RGB(192, 192, 192));
			
			rsg.GetValue(_T("ivf_storage_gia_id"), szIdGia);

			pItem->Insert(0, szIdGia, 50, DT_LEFT|DT_SINGLELINE);
			
			rsg.GetValue(_T("description"), tmpStr);
			pItem->Insert(1, _T("  ")+tmpStr, 170, DT_LEFT|DT_SINGLELINE);
			
			rsg.GetValue(_T("tong_so"), nCapacity);
			tmpStr.Format(_T("Số thanh: %d"), nCapacity);
			pItem->Insert(2, tmpStr, 110, DT_LEFT|DT_SINGLELINE);
			rsg.GetValue(_T("da_dung"), nCapacity);
			tmpStr.Format(_T("Đã sử dụng: %d"), nCapacity);
			pItem->Insert(3, tmpStr, 190, DT_LEFT|DT_SINGLELINE);
			m_wndList.Add(pItem);

			szWhere.Empty();
			if(!m_szCassetteKey.IsEmpty())
			{
				szWhere.Format(_T(" and ivf_storage_cassette_id='%s' "), m_szCassetteKey);
			}
			if(bSearchMode)
			{
				szWhere.AppendFormat(_T(" and status='C' "));
			}
			szSQL.Format(_T(" select * from ivf_storage_cassette ") \
			_T(" where isactive='Y' and parent_id='%s' %s ") \
			_T(" order by ivf_storage_cassette_id") , szIdGia, szWhere);
			rsl.ExecSQL(szSQL);

			//Load cassette
			long nDocNo;
			while(!rsl.IsEOF())
			{
				szWhere.Empty();
				rsl.GetValue(_T("ivf_storage_cassette_id"), szIdCassette);
				rsl.GetValue(_T("docno"), nDocNo);
				if(nDocNo > 0)
				{	
					if (!m_szSearch.IsEmpty())
					{
						szWhere.Format(_T(" and lower(get_patientname(top.docno)||to_char(top.docno)) like chr(37)||lower('%s')||chr(37) "), m_szSearch);
					}
					if (m_bTrutinhtrung)
					{
						szWhere.AppendFormat(_T(" and nhan_thanh is not null"));
					}
					else
					{
						szWhere.AppendFormat(_T(" and nhan_thanh is null"));
					}
					szSQL.Format(_T(" SELECT") \
					_T("     id_thungtru,") \
					_T("     id_giatru,") \
					_T("     id_cassette,") \
					_T("     top.docno, order_id, ") \
					_T("     hp_surname") \
					_T("     || ' '") \
					_T("     || hp_midname") \
					_T("     || ' '") \
					_T("     || hp_firstname AS pname,") \
					_T("     to_char(hp_birthdate, 'YYYY') AS yob,") \
					_T("     hms_getsex(hp_sex) AS gender,") \
					_T("     ngay_het_han, ") \
					_T("	  case when sysdate >= ngay_het_han then 1 else 0 end as het_han,") \
					_T("	   CASE WHEN sysdate >= ngay_het_han- interval '15' day AND sysdate < ngay_het_han THEN 1 ELSE 0 END AS can_han,") \
					_T("	   CASE WHEN sysdate >= ngay_het_han- interval '30' day AND sysdate < ngay_het_han THEN 1 ELSE 0 END AS can_han_thang,") \
					_T("	 ivf_get_sel('ivf_nhan_cassette', NVL(nhan_cassette, nhan_thanh)) as nhan_cassette,") \
					_T("     SUM(sophoi) AS sophoi,") \
					_T("	 SUM(the_tich) AS the_tich,") \
					_T("	 SUM(case when status = 'R' then sophoi else 0 end) as sophoi_ra,  so_dien_thoai_chong ||'/'|| hd_telephone ||'/'|| HD_CONTACTTEL AS phone") \
					_T(" FROM") \
					_T("     ivf_storage_top top ") \
					_T("     LEFT JOIN hms_doc ON ( hd_docno = docno ) LEFT JOIN ivf_doc ivf ON (hd_docno=ivf.docno)") \
					_T("     LEFT JOIN hms_patient ON ( hp_patientno = hd_patientno )") \
					_T(" WHERE top.docno=%ld") \
					_T("     AND id_thungtru = '%s'") \
					_T("     AND id_giatru = '%s'") \
					_T("     AND id_cassette = '%s' %s %s") \
					_T("	 AND status = 'O' ") \
					_T(" GROUP BY") \
					_T("     id_thungtru,") \
					_T("     id_giatru,") \
					_T("     id_cassette,") \
					_T("     top.docno, order_id, ") \
					_T("     hp_surname") \
					_T("     || ' '") \
					_T("     || hp_midname") \
					_T("     || ' '") \
					_T("     || hp_firstname,") \
					_T("     to_char(hp_birthdate, 'YYYY'),") \
					_T("     hms_getsex(hp_sex), hd_telephone, HD_CONTACTTEL,so_dien_thoai_chong,") \
					_T("     ngay_het_han, nhan_cassette, nhan_thanh"), nDocNo, szIdThung, szIdGia, szIdCassette, szExpired, szWhere);

					rsp.ExecSQL(szSQL);
					while (!rsp.IsEOF())
					{
						CGridListItem* pItem = new CGridListItem();
						int nExpired = 0, nNearlyExpired = 0, nExpiredInMonth = 0;
						
						pItem->Add(szIdCassette, 50);
						
						rsl.GetValue(_T("description"), tmpStr);
						//pItem->Add(tmpStr, 170);
						rsp.GetValue(_T("nhan_cassette"), tmpStr);
						if (m_bTrutinhtrung)
						{
							tmpStr.Replace(_T("Cassette"), _T("Cryocane"));
						}
						pItem->Add(tmpStr, 170);

						if (m_bTrutinhtrung)
						{
							rsp.GetValue(_T("the_tich"), tmpStr);
						}
						else
						{
							rsp.GetValue(_T("sophoi"), tmpStr);
						}
						pItem->Add(tmpStr, 50, CELLTYPE_STRING, DT_CENTER|DT_SINGLELINE|DT_VCENTER);

						rsp.GetValue(_T("sophoi_ra"), tmpStr);
						pItem->Add(tmpStr, 60, CELLTYPE_STRING, DT_CENTER|DT_SINGLELINE|DT_VCENTER);

						rsp.GetValue(_T("order_id"), tmpStr);
						pItem->Add(tmpStr, 90,  CELLTYPE_NUMBER, DT_CENTER|DT_SINGLELINE|DT_VCENTER);

						rsp.GetValue(_T("docno"), tmpStr);
						pItem->Add(tmpStr, 100, CELLTYPE_NUMBER,  DT_CENTER|DT_SINGLELINE|DT_VCENTER);

						rsp.GetValue(_T("pname"), tmpStr);
						pItem->Add(tmpStr, 200);

						rsp.GetValue(_T("yob"), tmpStr);
						pItem->Add(tmpStr, 50, CELLTYPE_NUMBER,  DT_CENTER|DT_SINGLELINE|DT_VCENTER);

						rsp.GetValue(_T("gender"), tmpStr);
						pItem->Add(tmpStr, 70, CELLTYPE_STRING, DT_CENTER|DT_SINGLELINE|DT_VCENTER);

						rsp.GetValue(_T("ngay_het_han"), tmpStr);
						nItem = pItem->Add(tmpStr, 90, CELLTYPE_STRING, DT_CENTER|DT_SINGLELINE|DT_VCENTER);
						rsp.GetValue(_T("het_han"), nExpired);
						rsp.GetValue(_T("can_han"), nNearlyExpired);
						rsp.GetValue(_T("can_han_thang"), nExpiredInMonth);
						if (nExpired == 1)
						{
							pItem->GetCell(nItem - 1)->SetBkColor(RGB(255, 0, 0));
						}
						if (nExpiredInMonth == 1) 
						{
							pItem->GetCell(nItem - 1)->SetBkColor(RGB(255, 225, 0));
							//pItem->GetCell(nItem - 1)->SetBkColor(RGB(64, 128, 128));
						}
						if (nNearlyExpired == 1)
						{
							pItem->GetCell(nItem - 1)->SetBkColor(RGB(255, 165, 0));
						}	
						rsp.GetValue(_T("phone"), tmpStr);
						pItem->Add(tmpStr, 400, CELLTYPE_STRING, DT_CENTER|DT_SINGLELINE|DT_VCENTER);
						m_wndList.Add(pItem);
						rsp.MoveNext();
					}

				}
				//m_wndList.Add(pItem);
				rsl.MoveNext();
			}

			rsg.MoveNext();
		}

		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return;
}
int CIVFStorageView_v2::OnAddIVFStorageView_v2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFStorageView_v2::OnEditIVFStorageView_v2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFStorageView_v2::OnDeleteIVFStorageView_v2(){
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
 		OnCancelIVFStorageView_v2();
 	}
	return 0;
}
int CIVFStorageView_v2::OnSaveIVFStorageView_v2(){
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
 		//OnIVFStorageView_v2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFStorageView_v2::OnCancelIVFStorageView_v2(){
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
int CIVFStorageView_v2::OnIVFStorageView_v2ListLoadData(){
	return 0;
}

void CIVFStorageView_v2::OnResizeLayout()
{
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100);
	AddLayoutControl(&m_wndThung, WS_RESIZEX, 0, 0, 25, 0);
	AddLayoutControl(&m_wndGiaLabel, WS_REPOSX, 25, 0, 0, 0);
	AddLayoutControl(&m_wndGia, WS_REPOSX| WS_RESIZEX, 25, 0, 25, 0);
	AddLayoutControl(&m_wndCassetteLabel, WS_REPOSX, 50, 0, 0, 0);
	AddLayoutControl(&m_wndCassette, WS_REPOSX| WS_RESIZEX, 50, 0, 25, 0);
	AddLayoutControl(&m_wndSearchLabel, WS_REPOSX, 75, 0, 0, 0);
	AddLayoutControl(&m_wndSearch, WS_REPOSX|WS_RESIZEX, 75, 0, 25, 0);
	AddLayoutControl(&m_wndFind, WS_REPOSX, 100, 0, 0, 0);
	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 0, 0, 100, 0);
	AddLayoutControl(&m_wndStorageInformation, WS_RESIZEY|WS_RESIZEX, 0, 0, 100, 100);
	AddLayoutControl(&m_wndExpired, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndNearlyExpired, WS_REPOSY, 0, 100, 0, 0);
}

void CIVFStorageView_v2::OnExpiredSelect()
{
	UpdateData();
	OnListLoadData();
}

void CIVFStorageView_v2::OnNearlyExpiredSelect()
{
	UpdateData();
	OnListLoadData();
}

void CIVFStorageView_v2::OnExpiredInMonthSelect()
{
	UpdateData();
	OnListLoadData();
}

BEGIN_MESSAGE_MAP(CIVFStorageView_v2, CGuiView)
    //{{AFX_MSG_MAP(CMyDialog)
    ON_WM_CTLCOLOR()
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()

HBRUSH CIVFStorageView_v2::OnCtlColor(CDC* pDC, CWnd *pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CGuiView::OnCtlColor(pDC, pWnd, nCtlColor);
	if (pWnd == &m_wndExpired)
	{
		pDC->SetTextColor(RGB(255, 0, 0));
	}
	if (pWnd == &m_wndNearlyExpired)
	{
		pDC->SetTextColor(RGB(255, 165, 0));
	}
	if (pWnd == &m_wndExpiredInMonth)
	{
		pDC->SetTextColor(RGB(255, 225, 0));
		//pDC->SetTextColor(RGB(64, 128, 128));
	}
	return hbr;
}

int CIVFStorageView_v2::OnReminderTrack()
{
	CIVFReminderTrackDlg dlg(this);
	dlg.DoModal();
	return 0;
}

void CIVFStorageView_v2::OnTrutinhtrungSelect()
{
	UpdateData();
	m_wndList.DeleteAllColumn();
	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT|CFMT_RIGHT, 50);
	m_wndList.InsertColumn(1, m_bTrutinhtrung?_T("Cryoncane"):_T("Cassette"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(2, _T("Số lượng"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(3, _T("Số lượng rã"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(4, _T("Số phiếu trữ"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(5, _T("Số hồ sơ"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(6, _T("Họ và tên"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(7, _T("Năm sinh"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(8, _T("Giới tính"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(9, _T("Ngày hết hạn"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(10, _T("Số điện thoại"), CFMT_TEXT, 90);
	OnListLoadData();
}