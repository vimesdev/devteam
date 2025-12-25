#include "IVFLabPhieuTruPopup_v2.h"
#include "MainFrm.h"
static void _OnCassetteSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruPopup_v2* )pWnd)->OnCassetteSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCassetteSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnCassetteSelendok();
}
/*static void _OnCassetteSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnCassetteKillfocus();
}*/
/*static void _OnCassetteKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnCassetteKillfocus();
}*/
static long _OnCassetteLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnCassetteLoadData();
}
/*static void _OnCassetteAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnCassetteAddNew();
}*/
static void _OnNhanCassetteSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruPopup_v2* )pWnd)->OnNhanCassetteSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNhanCassetteSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnNhanCassetteSelendok();
}
/*static void _OnNhanCassetteSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnNhanCassetteKillfocus();
}*/
/*static void _OnNhanCassetteKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnNhanCassetteKillfocus();
}*/
static long _OnNhanCassetteLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnNhanCassetteLoadData();
}
/*static void _OnNhanCassetteAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnNhanCassetteAddNew();
}*/
static void _OnMaucassetteSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruPopup_v2* )pWnd)->OnMaucassetteSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMaucassetteSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnMaucassetteSelendok();
}
/*static void _OnMaucassetteSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnMaucassetteKillfocus();
}*/
/*static void _OnMaucassetteKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnMaucassetteKillfocus();
}*/
static long _OnMaucassetteLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnMaucassetteLoadData();
}
/*static void _OnMaucassetteAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnMaucassetteAddNew();
}*/
static void _OnTopSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruPopup_v2* )pWnd)->OnTopSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTopSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnTopSelendok();
}
/*static void _OnTopSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnTopKillfocus();
}*/
/*static void _OnTopKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnTopKillfocus();
}*/
static long _OnTopLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnTopLoadData();
}
/*static void _OnTopAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnTopAddNew();
}*/
static void _OnNhan_topSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruPopup_v2* )pWnd)->OnNhan_topSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNhan_topSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnNhan_topSelendok();
}
/*static void _OnNhan_topSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnNhan_topKillfocus();
}*/
/*static void _OnNhan_topKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnNhan_topKillfocus();
}*/
static long _OnNhan_topLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnNhan_topLoadData();
}
/*static void _OnNhan_topAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnNhan_topAddNew();
}*/
static void _OnMautopSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruPopup_v2* )pWnd)->OnMautopSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMautopSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnMautopSelendok();
}
/*static void _OnMautopSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnMautopKillfocus();
}*/
/*static void _OnMautopKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnMautopKillfocus();
}*/
static long _OnMautopLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnMautopLoadData();
}
/*static void _OnMautopAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnMautopAddNew();
}*/
static void _OnLoaiSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruPopup_v2* )pWnd)->OnLoaiSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLoaiSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnLoaiSelendok();
}
/*static void _OnLoaiSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnLoaiKillfocus();
}*/
/*static void _OnLoaiKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnLoaiKillfocus();
}*/
static long _OnLoaiLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnLoaiLoadData();
}
/*static void _OnLoaiAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2 *)pWnd)->OnLoaiAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFLabPhieuTruPopup_v2 *pVw = (CIVFLabPhieuTruPopup_v2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFLabPhieuTruPopup_v2 *pVw = (CIVFLabPhieuTruPopup_v2 *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruPopup_v2*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFLabPhieuTruPopup_v2*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFLabPhieuTruPopup_v2*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruPopup_v2*)pWnd)->OnListDeleteItem();
} 
static int _OnAddIVFLabPhieuTruPopup_v2Fnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruPopup_v2*)pWnd)->OnAddIVFLabPhieuTruPopup_v2();
} 
static int _OnEditIVFLabPhieuTruPopup_v2Fnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruPopup_v2*)pWnd)->OnEditIVFLabPhieuTruPopup_v2();
} 
static int _OnDeleteIVFLabPhieuTruPopup_v2Fnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruPopup_v2*)pWnd)->OnDeleteIVFLabPhieuTruPopup_v2();
} 
static int _OnSaveIVFLabPhieuTruPopup_v2Fnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruPopup_v2*)pWnd)->OnSaveIVFLabPhieuTruPopup_v2();
} 
static int _OnCancelIVFLabPhieuTruPopup_v2Fnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruPopup_v2*)pWnd)->OnCancelIVFLabPhieuTruPopup_v2();
} 
CIVFLabPhieuTruPopup_v2::CIVFLabPhieuTruPopup_v2(CWnd *pParent, long nDocNo, long nOrderId, CString szType, CString szIDThung, CString szIDGia):
	CGuiDialog(pParent), m_nDocumentNo(nDocNo), m_szOrderType(szType), m_szIDGia(szIDGia), m_nOrderId(nOrderId), m_szIDThung(szIDThung){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CIVFLabPhieuTruPopup_v2::~CIVFLabPhieuTruPopup_v2(){
}
void CIVFLabPhieuTruPopup_v2::OnCreateComponents(){
	m_wndCassetteLabel.Create(this, _T("stt_pm"), 5, 330, 85, 355);
	m_wndCassette.Create(this,90, 330, 195, 355); 
	m_wndNhanCassetteLabel.Create(this, _T("nhan_cassette"), 200, 330, 295, 355);
	m_wndNhanCassette.Create(this,300, 330, 405, 355); 
	m_wndMaucassetteLabel.Create(this, _T("mau_cassette"), 410, 330, 490, 355);
	m_wndMaucassette.Create(this,495, 330, 600, 355); 
	m_wndTopLabel.Create(this, _T("top"), 5, 360, 85, 385);
	m_wndTop.Create(this,90, 360, 195, 385); 
	m_wndNhan_topLabel.Create(this, _T("nhan_top"), 200, 360, 295, 385);
	m_wndNhan_top.Create(this,300, 360, 405, 385); 
	m_wndMautopLabel.Create(this, _T("mau_top"), 410, 360, 490, 385);
	m_wndMautop.Create(this,495, 360, 600, 385); 
	m_wndLoaiLabel.Create(this, _T("loai"), 5, 390, 85, 415);
	m_wndLoai.Create(this,90, 390, 195, 415); 
	m_wndSave.Create(this, _T("&Save"), 435, 390, 515, 415);
	m_wndClose.Create(this, _T("&Close"), 520, 390, 600, 415);
	m_wndList.Create(this,5, 5, 600, 325); 
	m_wndList.SetCheckBox();
	m_wndLoaiLabel.ShowWindow(SW_HIDE);
	m_wndLoai.ShowWindow(SW_HIDE);
}
void CIVFLabPhieuTruPopup_v2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCassette.SetCheckValue(true);
	m_wndCassette.LimitText(1024);
	m_wndNhanCassette.SetCheckValue(true);
	m_wndNhanCassette.LimitText(1024);
	m_wndMaucassette.SetCheckValue(true);
	m_wndMaucassette.LimitText(1024);
	m_wndTop.SetCheckValue(true);
	m_wndTop.LimitText(1024);
	m_wndNhan_top.SetCheckValue(true);
	m_wndNhan_top.LimitText(1024);
	m_wndMautop.SetCheckValue(true);
	m_wndMautop.LimitText(1024);
	//m_wndLoai.SetCheckValue(true);
	m_wndLoai.LimitText(1024);

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

	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 30);//ID
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(2, _T("Quality"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(4, _T("cassette"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(5, _T("top"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(6, _T("mau_cassette"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(7, _T("mau_top"), CFMT_TEXT, 70);

}
void CIVFLabPhieuTruPopup_v2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCassette.SetEvent(WE_SELENDOK, _OnCassetteSelendokFnc);
	//m_wndCassette.SetEvent(WE_SETFOCUS, _OnCassetteSetfocusFnc);
	//m_wndCassette.SetEvent(WE_KILLFOCUS, _OnCassetteKillfocusFnc);
	m_wndCassette.SetEvent(WE_SELCHANGE, _OnCassetteSelectChangeFnc);
	m_wndCassette.SetEvent(WE_LOADDATA, _OnCassetteLoadDataFnc);
	//m_wndCassette.SetEvent(WE_ADDNEW, _OnCassetteAddNewFnc);
	m_wndNhanCassette.SetEvent(WE_SELENDOK, _OnNhanCassetteSelendokFnc);
	//m_wndNhanCassette.SetEvent(WE_SETFOCUS, _OnNhanCassetteSetfocusFnc);
	//m_wndNhanCassette.SetEvent(WE_KILLFOCUS, _OnNhanCassetteKillfocusFnc);
	m_wndNhanCassette.SetEvent(WE_SELCHANGE, _OnNhanCassetteSelectChangeFnc);
	m_wndNhanCassette.SetEvent(WE_LOADDATA, _OnNhanCassetteLoadDataFnc);
	//m_wndNhanCassette.SetEvent(WE_ADDNEW, _OnNhanCassetteAddNewFnc);
	m_wndMaucassette.SetEvent(WE_SELENDOK, _OnMaucassetteSelendokFnc);
	//m_wndMaucassette.SetEvent(WE_SETFOCUS, _OnMaucassetteSetfocusFnc);
	//m_wndMaucassette.SetEvent(WE_KILLFOCUS, _OnMaucassetteKillfocusFnc);
	m_wndMaucassette.SetEvent(WE_SELCHANGE, _OnMaucassetteSelectChangeFnc);
	m_wndMaucassette.SetEvent(WE_LOADDATA, _OnMaucassetteLoadDataFnc);
	//m_wndMaucassette.SetEvent(WE_ADDNEW, _OnMaucassetteAddNewFnc);
	m_wndTop.SetEvent(WE_SELENDOK, _OnTopSelendokFnc);
	//m_wndTop.SetEvent(WE_SETFOCUS, _OnTopSetfocusFnc);
	//m_wndTop.SetEvent(WE_KILLFOCUS, _OnTopKillfocusFnc);
	m_wndTop.SetEvent(WE_SELCHANGE, _OnTopSelectChangeFnc);
	m_wndTop.SetEvent(WE_LOADDATA, _OnTopLoadDataFnc);
	//m_wndTop.SetEvent(WE_ADDNEW, _OnTopAddNewFnc);
	m_wndNhan_top.SetEvent(WE_SELENDOK, _OnNhan_topSelendokFnc);
	//m_wndNhan_top.SetEvent(WE_SETFOCUS, _OnNhan_topSetfocusFnc);
	//m_wndNhan_top.SetEvent(WE_KILLFOCUS, _OnNhan_topKillfocusFnc);
	m_wndNhan_top.SetEvent(WE_SELCHANGE, _OnNhan_topSelectChangeFnc);
	m_wndNhan_top.SetEvent(WE_LOADDATA, _OnNhan_topLoadDataFnc);
	//m_wndNhan_top.SetEvent(WE_ADDNEW, _OnNhan_topAddNewFnc);
	m_wndMautop.SetEvent(WE_SELENDOK, _OnMautopSelendokFnc);
	//m_wndMautop.SetEvent(WE_SETFOCUS, _OnMautopSetfocusFnc);
	//m_wndMautop.SetEvent(WE_KILLFOCUS, _OnMautopKillfocusFnc);
	m_wndMautop.SetEvent(WE_SELCHANGE, _OnMautopSelectChangeFnc);
	m_wndMautop.SetEvent(WE_LOADDATA, _OnMautopLoadDataFnc);
	//m_wndMautop.SetEvent(WE_ADDNEW, _OnMautopAddNewFnc);
	m_wndLoai.SetEvent(WE_SELENDOK, _OnLoaiSelendokFnc);
	//m_wndLoai.SetEvent(WE_SETFOCUS, _OnLoaiSetfocusFnc);
	//m_wndLoai.SetEvent(WE_KILLFOCUS, _OnLoaiKillfocusFnc);
	m_wndLoai.SetEvent(WE_SELCHANGE, _OnLoaiSelectChangeFnc);
	m_wndLoai.SetEvent(WE_LOADDATA, _OnLoaiLoadDataFnc);
	//m_wndLoai.SetEvent(WE_ADDNEW, _OnLoaiAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	OnListLoadData();
	SetMode(VM_EDIT);

}
void CIVFLabPhieuTruPopup_v2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndCassette.GetDlgCtrlID(), m_szCassetteKey);
	DDX_TextEx(pDX, m_wndNhanCassette.GetDlgCtrlID(), m_szNhanCassetteKey);
	DDX_TextEx(pDX, m_wndMaucassette.GetDlgCtrlID(), m_szMaucassetteKey);
	DDX_TextEx(pDX, m_wndTop.GetDlgCtrlID(), m_szTopKey);
	DDX_TextEx(pDX, m_wndNhan_top.GetDlgCtrlID(), m_szNhan_topKey);
	DDX_TextEx(pDX, m_wndMautop.GetDlgCtrlID(), m_szMautopKey);
	DDX_TextEx(pDX, m_wndLoai.GetDlgCtrlID(), m_szLoaiKey);

}
void CIVFLabPhieuTruPopup_v2::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
		m_jData[_T("Cassette")] =  m_szCassetteKey;
		m_jData[_T("NhanCassette")] =  m_szNhanCassetteKey;
		m_jData[_T("Maucassette")] =  m_szMaucassetteKey;
		m_jData[_T("Top")] =  m_szTopKey;
		m_jData[_T("Nhan_top")] =  m_szNhan_topKey;
		m_jData[_T("Mautop")] =  m_szMautopKey;
		m_jData[_T("Loai")] =  m_szLoaiKey;	

		m_jData[_T("doc_no")] = m_nDocumentNo;
		m_jData[_T("order_id")] = m_nOrderId;
		CString tmpStr;
		for (int i = 0; i < m_wndList.GetItemCount(); i++)
		{
			if (m_wndList.GetCheck(i) == FALSE)
			{
				continue;
			}
			if (!tmpStr.IsEmpty())
			{
				tmpStr += _T(",");
			}
			tmpStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
		m_jData[_T("phoi_id")] = tmpStr;
		m_jData[_T("thung_id")] = m_szIDThung;
		m_jData[_T("gia_id")] = m_szIDGia;
	}
	else
	{
		m_jData[_T("Cassette")].GetValue(m_szCassetteKey);
		m_jData[_T("NhanCassette")].GetValue(m_szNhanCassetteKey);
		m_jData[_T("Maucassette")].GetValue(m_szMaucassetteKey);
		m_jData[_T("Top")].GetValue(m_szTopKey);
		m_jData[_T("Nhan_top")].GetValue(m_szNhan_topKey);
		m_jData[_T("Mautop")].GetValue(m_szMautopKey);
		m_jData[_T("Loai")].GetValue(m_szLoaiKey);
	}

}
void CIVFLabPhieuTruPopup_v2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFLabPhieuTruPopup_v2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CIVFLabPhieuTruPopup_v2::SetDefaultValues(){

	m_szCassetteKey.Empty();
	m_szNhanCassetteKey.Empty();
	m_szMaucassetteKey.Empty();
	m_szTopKey.Empty();
	m_szNhan_topKey.Empty();
	m_szMautopKey.Empty();
	m_szLoaiKey.Empty();

}
int CIVFLabPhieuTruPopup_v2::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, -1);
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
void CIVFLabPhieuTruPopup_v2::OnCassetteSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruPopup_v2::OnCassetteSelendok(){
	 
}
/*void CIVFLabPhieuTruPopup_v2::OnCassetteSetfocus(){
	
}*/
/*void CIVFLabPhieuTruPopup_v2::OnCassetteKillfocus(){
	
}*/
long CIVFLabPhieuTruPopup_v2::OnCassetteLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruPopup_v2::OnCassetteAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruPopup_v2::OnNhanCassetteSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruPopup_v2::OnNhanCassetteSelendok(){
	 
}
/*void CIVFLabPhieuTruPopup_v2::OnNhanCassetteSetfocus(){
	
}*/
/*void CIVFLabPhieuTruPopup_v2::OnNhanCassetteKillfocus(){
	
}*/
long CIVFLabPhieuTruPopup_v2::OnNhanCassetteLoadData(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndNhanCassette, _T("ivf_nhan_cassette"), m_szNhanCassetteKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNhanCassette.IsSearchKey() && !m_szNhanCassetteKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNhanCassetteKey
};
	m_wndNhanCassette.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNhanCassette.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruPopup_v2::OnNhanCassetteAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruPopup_v2::OnMaucassetteSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruPopup_v2::OnMaucassetteSelendok(){
	 
}
/*void CIVFLabPhieuTruPopup_v2::OnMaucassetteSetfocus(){
	
}*/
/*void CIVFLabPhieuTruPopup_v2::OnMaucassetteKillfocus(){
	
}*/
long CIVFLabPhieuTruPopup_v2::OnMaucassetteLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadComboBoxList(&m_wndMaucassette, m_szMaucassetteKey, _T("ivf_storage_mautop"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMaucassette.IsSearchKey() && !m_szMaucassetteKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMaucassetteKey
};
	m_wndMaucassette.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMaucassette.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruPopup_v2::OnMaucassetteAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruPopup_v2::OnTopSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruPopup_v2::OnTopSelendok(){
	 
}
/*void CIVFLabPhieuTruPopup_v2::OnTopSetfocus(){
	
}*/
/*void CIVFLabPhieuTruPopup_v2::OnTopKillfocus(){
	
}*/
long CIVFLabPhieuTruPopup_v2::OnTopLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruPopup_v2::OnTopAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruPopup_v2::OnNhan_topSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruPopup_v2::OnNhan_topSelendok(){
	 
}
/*void CIVFLabPhieuTruPopup_v2::OnNhan_topSetfocus(){
	
}*/
/*void CIVFLabPhieuTruPopup_v2::OnNhan_topKillfocus(){
	
}*/
long CIVFLabPhieuTruPopup_v2::OnNhan_topLoadData(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndNhan_top, _T("ivf_nhan_top"), m_szNhan_topKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNhan_top.IsSearchKey() && !m_szNhan_topKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNhan_topKey
};
	m_wndNhan_top.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNhan_top.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruPopup_v2::OnNhan_topAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruPopup_v2::OnMautopSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruPopup_v2::OnMautopSelendok(){
	 
}
/*void CIVFLabPhieuTruPopup_v2::OnMautopSetfocus(){
	
}*/
/*void CIVFLabPhieuTruPopup_v2::OnMautopKillfocus(){
	
}*/
long CIVFLabPhieuTruPopup_v2::OnMautopLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruPopup_v2::OnMautopAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruPopup_v2::OnLoaiSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruPopup_v2::OnLoaiSelendok(){
	 
}
/*void CIVFLabPhieuTruPopup_v2::OnLoaiSetfocus(){
	
}*/
/*void CIVFLabPhieuTruPopup_v2::OnLoaiKillfocus(){
	
}*/
long CIVFLabPhieuTruPopup_v2::OnLoaiLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruPopup_v2::OnLoaiAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruPopup_v2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFLabPhieuTruPopup_v2();
} 
void CIVFLabPhieuTruPopup_v2::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CIVFLabPhieuTruPopup_v2::OnListDblClick(){
	
} 
void CIVFLabPhieuTruPopup_v2::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabPhieuTruPopup_v2::OnListDeleteItem(){
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szId;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	szId = m_wndList.GetItemText(nSel, 0);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("IVF_STORAGE_TOPLINE_DELETE(%ld, '%s')"), m_nOrderId, szId);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0){
 		OnListLoadData();
 	}	
    return 0;
} 

long CIVFLabPhieuTruPopup_v2::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	if (m_szOrderType == _T("TPDL"))
	{
		szWhere.Format(_T(" AND loai_phoi = 'L'"));
	}
	if (m_szOrderType == _T("TPTUOI"))
	{
		szWhere.Format(_T(" AND loai_phoi = 'F'"));
	}
	szSQL.Format(_T(" SELECT    phoi_id AS id,") \
	_T("           chat_luong AS quality,") \
	_T("           1 AS qty,") \
	_T("           nhan_cassette AS cassette,") \
	_T("           nhan_top AS top,") \
	_T("           mau_cassette,") \
	_T("           t.mau AS mau_top,") \
	_T("           loai_phoi") \
	_T(" FROM      ivf_phoi_view v") \
	_T(" left join ivf_storage_topline ON ( phoi_id = IVF_STORAGE_TOPLINE_ID )") \
	_T(" LEFT JOIN ivf_storage_top t ON ( so_ho_so = docno AND ivf_storage_top_id = storage_top_id)") \
	_T(" WHERE     loai_phoi IN ( 'L', 'F' )  AND so_ho_so = %ld %s") \
	_T(" AND v.trang_thai IN ('O', 'S')"), m_nDocumentNo, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			int2str(nIdx++), 
			rs.GetValue(_T("Quality")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("cassette")), 
			rs.GetValue(_T("top")), 
			rs.GetValue(_T("mau_cassette")), 
			rs.GetValue(_T("mau_top")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

int CIVFLabPhieuTruPopup_v2::OnAddIVFLabPhieuTruPopup_v2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFLabPhieuTruPopup_v2::OnEditIVFLabPhieuTruPopup_v2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFLabPhieuTruPopup_v2::OnDeleteIVFLabPhieuTruPopup_v2(){
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
 		OnCancelIVFLabPhieuTruPopup_v2();
 	}
	return 0;
}
int CIVFLabPhieuTruPopup_v2::OnSaveIVFLabPhieuTruPopup_v2(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, tmpStr;
	m_jData.ToString(tmpStr);
	szSQL.Format(_T("IVF_PHIEU_TRU_LINE_CREATE('%s')"), tmpStr);
 _fmsg(_T("%s"), szSQL);
	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		SetMode(VM_ADD);
		OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
}
int CIVFLabPhieuTruPopup_v2::OnCancelIVFLabPhieuTruPopup_v2(){
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
int CIVFLabPhieuTruPopup_v2::OnIVFLabPhieuTruPopup_v2ListLoadData(){
	return 0;
}
