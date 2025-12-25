#include "IVFLabPhieuTruPopup.h"
#include "MainFrm.h"
static void _OnCassetteSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruPopup* )pWnd)->OnCassetteSelectChange(nOldItemSel, nNewItemSel);
} 

static long _OnNhanCassetteLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup *)pWnd)->OnNhanCassetteLoadData();
}
static void _OnCassetteSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnCassetteSelendok();
}
/*static void _OnCassetteSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnCassetteKillfocus();
}*/
/*static void _OnCassetteKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnCassetteKillfocus();
}*/
static long _OnCassetteLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup *)pWnd)->OnCassetteLoadData();
}
/*static void _OnCassetteAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnCassetteAddNew();
}*/

static long _OnMaucassetteLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup *)pWnd)->OnMaucasetteLoadData();
}
static void _OnTopSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruPopup* )pWnd)->OnTopSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTopSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnTopSelendok();
}
/*static void _OnTopSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnTopKillfocus();
}*/
/*static void _OnTopKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnTopKillfocus();
}*/
static long _OnTopLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup *)pWnd)->OnTopLoadData();
}
/*static void _OnTopAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnTopAddNew();
}*/
static long _OnNhan_topLoadDataFnc(CWnd *pWnd)
{
	return ((CIVFLabPhieuTruPopup *)pWnd)->OnNhan_topLoadData();
}
static void _OnMautopSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruPopup* )pWnd)->OnMautopSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMautopSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnMautopSelendok();
}
/*static void _OnMautopSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnMautopKillfocus();
}*/
/*static void _OnMautopKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnMautopKillfocus();
}*/
static long _OnMautopLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup *)pWnd)->OnMautopLoadData();
}
/*static void _OnMautopAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnMautopAddNew();
}*/
/*static void _OnSophoiChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnSophoiChange();
} */
/*static void _OnSophoiSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnSophoiSetfocus();} */ 
/*static void _OnSophoiKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnSophoiKillfocus();
} */
static int _OnSophoiCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup *)pWnd)->OnSophoiCheckValue();
} 
static void _OnLoaiSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruPopup* )pWnd)->OnLoaiSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLoaiSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnLoaiSelendok();
}
/*static void _OnLoaiSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnLoaiKillfocus();
}*/
/*static void _OnLoaiKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnLoaiKillfocus();
}*/
static long _OnLoaiLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup *)pWnd)->OnLoaiLoadData();
}
/*static void _OnLoaiAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup *)pWnd)->OnLoaiAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFLabPhieuTruPopup *pVw = (CIVFLabPhieuTruPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFLabPhieuTruPopup *pVw = (CIVFLabPhieuTruPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFLabPhieuTruPopupFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruPopup*)pWnd)->OnAddIVFLabPhieuTruPopup();
} 
static int _OnEditIVFLabPhieuTruPopupFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruPopup*)pWnd)->OnEditIVFLabPhieuTruPopup();
} 
static int _OnDeleteIVFLabPhieuTruPopupFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruPopup*)pWnd)->OnDeleteIVFLabPhieuTruPopup();
} 
static int _OnSaveIVFLabPhieuTruPopupFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruPopup*)pWnd)->OnSaveIVFLabPhieuTruPopup();
} 
static int _OnCancelIVFLabPhieuTruPopupFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruPopup*)pWnd)->OnCancelIVFLabPhieuTruPopup();
} 
CIVFLabPhieuTruPopup::CIVFLabPhieuTruPopup(CWnd *pParent, int nMode):
	CGuiPopup(pParent), m_pWndOrder(pParent)
	{
		CGuiPopup::SetMode(nMode);
	m_nDlgWidth = 590;
	m_nDlgHeight = 95;
	SetDefaultValues();
}
CIVFLabPhieuTruPopup::~CIVFLabPhieuTruPopup(){
}
void CIVFLabPhieuTruPopup::OnCreateComponents(){
	m_wndCassetteLabel.Create(this, _T("stt_pm"), 5, 5, 85, 30);
	m_wndCassette.Create(this,90, 5, 195, 30); 
	m_wndNhanCassetteLabel.Create(this, _T("nhan_cassette"), 200, 5, 295, 30);
	m_wndNhanCassette.Create(this,300, 5, 405, 30); 
	m_wndMaucassetteLabel.Create(this, _T("mau_cassette"), 410, 5, 490, 30);
	m_wndMaucassette.Create(this,495, 5, 600, 30); 
	m_wndTopLabel.Create(this, _T("top"), 5, 35, 85, 60);
	m_wndTop.Create(this,90, 35, 195, 60); 
	m_wndNhan_topLabel.Create(this, _T("nhan_top"), 200, 35, 295, 60);
	m_wndNhan_top.Create(this,300, 35, 405, 60); 
	m_wndMautopLabel.Create(this, _T("mau_top"), 410, 35, 490, 60);
	m_wndMautop.Create(this,495, 35, 600, 60); 
	m_wndSophoiLabel.Create(this, _T("sophoi"), 5, 65, 85, 90);
	m_wndSophoi.Create(this,90, 65, 195, 90); 
	m_wndLoaiLabel.Create(this, _T("loai"), 200, 65, 295, 90);
	m_wndLoai.Create(this,300, 65, 405, 90); 
	m_wndSave.Create(this, _T("&Save"), 435, 65, 515, 90);
	m_wndClose.Create(this, _T("&Close"), 520, 65, 600, 90);
	m_wndLoai.ShowWindow(SW_HIDE);
}
void CIVFLabPhieuTruPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCassette.SetCheckValue(true);
	m_wndCassette.LimitText(32);
	m_wndTop.SetCheckValue(true);
	m_wndTop.LimitText(15);
	m_wndMautop.SetCheckValue(true);
	m_wndMautop.LimitText(32);
	m_wndSophoi.SetLimitText(22);
	m_wndSophoi.SetCheckValue(true);
	//m_wndLoai.SetCheckValue(true);
	//m_wndLoai.LimitText(3);

	m_wndCassette.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCassette.InsertColumn(1, _T("Name"), CFMT_TEXT, 100);

	m_wndNhanCassette.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNhanCassette.InsertColumn(1, _T("Name"), CFMT_TEXT, 100);

	m_wndMaucassette.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMaucassette.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndTop.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTop.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndNhan_top.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNhan_top.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndMautop.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMautop.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndLoai.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndLoai.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_ivf_storage_topTbl.SetTableName(_T("ivf_storage_topline"));
	//m_ivf_storage_topTbl.AddField(_T("STORAGE_TOPLINE_ID"), dfText, 32); 
	m_ivf_storage_topTbl.AddField(_T("PHIEUTRU_ID"), dfLong); 
	m_ivf_storage_topTbl.AddField(_T("DOCNO"), dfLong); 
	m_ivf_storage_topTbl.AddField(_T("ID_LOCATION"), dfText, 32); 
	m_ivf_storage_topTbl.AddField(_T("ID_THUNG"), dfText, 32); 
	m_ivf_storage_topTbl.AddField(_T("ID_GIA"), dfText, 32); 
	m_ivf_storage_topTbl.AddField(_T("ID_CASSETTE"), dfText, 32); 
	m_ivf_storage_topTbl.AddField(_T("TOP"), dfText, 15); 
	m_ivf_storage_topTbl.AddField(_T("MAU"), dfText, 32); 
	m_ivf_storage_topTbl.AddField(_T("SOPHOI"), dfLong); 
	m_ivf_storage_topTbl.AddField(_T("CHATLUONG_TRU"), dfText, 3); 
	m_ivf_storage_topTbl.AddField(_T("MAU_CASSETTE"), dfText, 32); 
	//m_ivf_storage_topTbl.AddField(_T("MAT_DO"), dfText, 35); 
	//m_ivf_storage_topTbl.AddField(_T("TIEN_TOI"), dfText, 35); 
	m_ivf_storage_topTbl.AddField(_T("NHAN_CASSETTE"), dfText, 15); 
	m_ivf_storage_topTbl.AddField(_T("NHAN_TOP"), dfText, 15); 

}
void CIVFLabPhieuTruPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNhanCassette.SetEvent(WE_LOADDATA, _OnNhanCassetteLoadDataFnc);
	m_wndCassette.SetEvent(WE_SELENDOK, _OnCassetteSelendokFnc);
	//m_wndCassette.SetEvent(WE_SETFOCUS, _OnCassetteSetfocusFnc);
	//m_wndCassette.SetEvent(WE_KILLFOCUS, _OnCassetteKillfocusFnc);
	m_wndCassette.SetEvent(WE_SELCHANGE, _OnCassetteSelectChangeFnc);
	m_wndCassette.SetEvent(WE_LOADDATA, _OnCassetteLoadDataFnc);
	//m_wndCassette.SetEvent(WE_ADDNEW, _OnCassetteAddNewFnc);
	m_wndMaucassette.SetEvent(WE_LOADDATA, _OnMaucassetteLoadDataFnc);
	m_wndTop.SetEvent(WE_SELENDOK, _OnTopSelendokFnc);
	//m_wndTop.SetEvent(WE_SETFOCUS, _OnTopSetfocusFnc);
	//m_wndTop.SetEvent(WE_KILLFOCUS, _OnTopKillfocusFnc);
	m_wndTop.SetEvent(WE_SELCHANGE, _OnTopSelectChangeFnc);
	m_wndTop.SetEvent(WE_LOADDATA, _OnTopLoadDataFnc);
	//m_wndTop.SetEvent(WE_ADDNEW, _OnTopAddNewFnc);
	m_wndNhan_top.SetEvent(WE_LOADDATA, _OnNhan_topLoadDataFnc);
	m_wndMautop.SetEvent(WE_SELENDOK, _OnMautopSelendokFnc);
	//m_wndMautop.SetEvent(WE_SETFOCUS, _OnMautopSetfocusFnc);
	//m_wndMautop.SetEvent(WE_KILLFOCUS, _OnMautopKillfocusFnc);
	m_wndMautop.SetEvent(WE_SELCHANGE, _OnMautopSelectChangeFnc);
	m_wndMautop.SetEvent(WE_LOADDATA, _OnMautopLoadDataFnc);
	//m_wndMautop.SetEvent(WE_ADDNEW, _OnMautopAddNewFnc);
	//m_wndSophoi.SetEvent(WE_CHANGE, _OnSophoiChangeFnc);
	//m_wndSophoi.SetEvent(WE_SETFOCUS, _OnSophoiSetfocusFnc);
	//m_wndSophoi.SetEvent(WE_KILLFOCUS, _OnSophoiKillfocusFnc);
	m_wndSophoi.SetEvent(WE_CHECKVALUE, _OnSophoiCheckValueFnc);
	m_wndLoai.SetEvent(WE_SELENDOK, _OnLoaiSelendokFnc);
	//m_wndLoai.SetEvent(WE_SETFOCUS, _OnLoaiSetfocusFnc);
	//m_wndLoai.SetEvent(WE_KILLFOCUS, _OnLoaiKillfocusFnc);
	m_wndLoai.SetEvent(WE_SELCHANGE, _OnLoaiSelectChangeFnc);
	m_wndLoai.SetEvent(WE_LOADDATA, _OnLoaiLoadDataFnc);
	//m_wndLoai.SetEvent(WE_ADDNEW, _OnLoaiAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);

}
void CIVFLabPhieuTruPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndNhan_top.GetDlgCtrlID(), m_szNhan_topKey);
	DDX_TextEx(pDX, m_wndNhanCassette.GetDlgCtrlID(), m_szNhanCassetteKey);
	DDX_TextEx(pDX, m_wndCassette.GetDlgCtrlID(), m_szCassetteKey);
	DDX_TextEx(pDX, m_wndMaucassette.GetDlgCtrlID(), m_szMaucasetteKey);
	DDX_TextEx(pDX, m_wndTop.GetDlgCtrlID(), m_szTopKey);
	DDX_TextEx(pDX, m_wndMautop.GetDlgCtrlID(), m_szMautopKey);
	DDX_Text(pDX, m_wndSophoi.GetDlgCtrlID(), m_nSophoi);
	DDX_TextEx(pDX, m_wndLoai.GetDlgCtrlID(), m_szLoaiKey);

}
void CIVFLabPhieuTruPopup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Cassette")] =  m_szCassetteKey;
	m_jData[_T("Top")] =  m_szTopKey;
	m_jData[_T("Mautop")] =  m_szMautopKey;
	m_jData[_T("Sophoi")] =  m_nSophoi;
	m_jData[_T("Loai")] =  m_szLoaiKey;
	}
	else
	{
			
	m_jData[_T("Cassette")].GetValue(m_szCassetteKey);
	m_jData[_T("Top")].GetValue(m_szTopKey);
	m_jData[_T("Mautop")].GetValue(m_szMautopKey);
	m_jData[_T("Sophoi")].GetValue(m_nSophoi);
	m_jData[_T("Loai")].GetValue(m_szLoaiKey);
	}

}
void CIVFLabPhieuTruPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("CASSETTE"), m_szCassetteKey);
	rs.GetValue(_T("TOP"), m_szTopKey);
	rs.GetValue(_T("SOPHOI"), m_nSophoi);
	rs.GetValue(_T("CHATLUONG_TRU"), m_szLoaiKey);
	rs.GetValue(_T("MAU_TOP"), m_szMautopKey);

}
void CIVFLabPhieuTruPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_ivf_storage_topTbl.SetValue(_T("PHIEUTRU_ID"), m_nPhieuTruId);
	m_ivf_storage_topTbl.SetValue(_T("DOCNO"), m_nDocumentNo);
	m_ivf_storage_topTbl.SetValue(_T("ID_LOCATION"), m_szIDLocation);
	m_ivf_storage_topTbl.SetValue(_T("ID_THUNG"), m_szIDThung);
	m_ivf_storage_topTbl.SetValue(_T("ID_GIA"), m_szIDGia);
	m_ivf_storage_topTbl.SetValue(_T("ID_CASSETTE"), m_szCassetteKey);
	m_ivf_storage_topTbl.SetValue(_T("TOP"), m_szTopKey);
	m_ivf_storage_topTbl.SetValue(_T("SOPHOI"), m_nSophoi);
	m_ivf_storage_topTbl.SetValue(_T("CHATLUONG_TRU"), m_szLoaiKey);
	m_ivf_storage_topTbl.SetValue(_T("MAU"), m_szMautopKey);
	m_ivf_storage_topTbl.SetValue(_T("MAU_CASSETTE"), m_szMaucasetteKey);
	m_ivf_storage_topTbl.SetValue(_T("NHAN_CASSETTE"), m_szNhanCassetteKey);
	m_ivf_storage_topTbl.SetValue(_T("NHAN_TOP"), m_szNhan_topKey);

}
void CIVFLabPhieuTruPopup::SetDefaultValues(){
	m_szNhan_topKey.Empty();
	m_szNhanCassetteKey.Empty();
	m_szMaucasetteKey.Empty();
	m_szCassetteKey.Empty();
	m_szTopKey.Empty();
	m_szMautopKey.Empty();
	m_nSophoi=0;
	m_szLoaiKey.Empty();

}
int CIVFLabPhieuTruPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndCassette.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CIVFLabPhieuTruPopup::OnCassetteSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruPopup::OnCassetteSelendok(){
	 
}
/*void CIVFLabPhieuTruPopup::OnCassetteSetfocus(){
	
}*/
/*void CIVFLabPhieuTruPopup::OnCassetteKillfocus(){
	
}*/
long CIVFLabPhieuTruPopup::OnCassetteLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and parent_id='%s' and (status='O' or docno=%ld)"), m_szIDGia, m_nDocumentNo);
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
/*void CIVFLabPhieuTruPopup::OnCassetteAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruPopup::OnTopSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruPopup::OnTopSelendok(){
	 
}
/*void CIVFLabPhieuTruPopup::OnTopSetfocus(){
	
}*/
/*void CIVFLabPhieuTruPopup::OnTopKillfocus(){
	
}*/
long CIVFLabPhieuTruPopup::OnTopLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();
	//szFilter.Format(_T(" and ivf_storage_dstop_id not in (SELECT top FROM ivf_storage_top WHERE docno=%ld and order_id=%ld) "),m_nDocumentNo, m_nPhieuTruId);
	return pMF->LoadComboBoxList(&m_wndTop, m_szTopKey, _T("ivf_storage_dstop"), szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTop.IsSearchKey() && !m_szTopKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTopKey
};
	m_wndTop.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTop.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruPopup::OnTopAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruPopup::OnMautopSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruPopup::OnMautopSelendok(){
	 
}
/*void CIVFLabPhieuTruPopup::OnMautopSetfocus(){
	
}*/
/*void CIVFLabPhieuTruPopup::OnMautopKillfocus(){
	
}*/
long CIVFLabPhieuTruPopup::OnMautopLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadComboBoxList(&m_wndMautop, m_szMautopKey, _T("ivf_storage_mautop"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMautop.IsSearchKey() && !m_szMautopKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMautopKey
};
	m_wndMautop.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMautop.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruPopup::OnMautopAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFLabPhieuTruPopup::OnSophoiChange(){
	
} */
/*void CIVFLabPhieuTruPopup::OnSophoiSetfocus(){
	
} */
/*void CIVFLabPhieuTruPopup::OnSophoiKillfocus(){
	
} */
int CIVFLabPhieuTruPopup::OnSophoiCheckValue(){
	return 0;
} 
void CIVFLabPhieuTruPopup::OnLoaiSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruPopup::OnLoaiSelendok(){
	 
}
/*void CIVFLabPhieuTruPopup::OnLoaiSetfocus(){
	
}*/
/*void CIVFLabPhieuTruPopup::OnLoaiKillfocus(){
	
}*/
long CIVFLabPhieuTruPopup::OnLoaiLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadComboBoxList(&m_wndLoai, m_szLoaiKey, _T("ivf_storage_chatluong"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLoai.IsSearchKey() && !m_szLoaiKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szLoaiKey
};
	m_wndLoai.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLoai.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruPopup::OnLoaiAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFLabPhieuTruPopup();
} 
void CIVFLabPhieuTruPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiPopup::ClosePopup();
} 
int CIVFLabPhieuTruPopup::OnAddIVFLabPhieuTruPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFLabPhieuTruPopup::OnEditIVFLabPhieuTruPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFLabPhieuTruPopup::OnDeleteIVFLabPhieuTruPopup(){
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
 		OnCancelIVFLabPhieuTruPopup();
 	}
	return 0;
}
int CIVFLabPhieuTruPopup::OnSaveIVFLabPhieuTruPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("IVF_STORAGE_TOP_CREATE(%s)"), m_ivf_storage_topTbl.FormatSQL());
 _tprintf(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		SetMode(VM_ADD);
		m_pWndOrder->SendMessage(WM_REFRESH, 0, 0);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFLabPhieuTruPopup::OnCancelIVFLabPhieuTruPopup(){
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
int CIVFLabPhieuTruPopup::OnIVFLabPhieuTruPopupListLoadData(){
	return 0;
}

long CIVFLabPhieuTruPopup::OnMaucasetteLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadComboBoxList(&m_wndMaucassette, m_szMaucasetteKey, _T("ivf_storage_mautop"));
}

long CIVFLabPhieuTruPopup::OnNhanCassetteLoadData()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndNhanCassette, _T("ivf_nhan_cassette"), m_szNhanCassetteKey);
}

long CIVFLabPhieuTruPopup::OnNhan_topLoadData()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndNhan_top, _T("ivf_nhan_top"), m_szNhan_topKey);
}