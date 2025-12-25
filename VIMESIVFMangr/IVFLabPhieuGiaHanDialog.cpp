#include "IVFLabPhieuGiaHanDialog.h"
#include "MainFrm.h"
/*static void _OnSophieuChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnSophieuChange();
} */
/*static void _OnSophieuSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnSophieuSetfocus();} */ 
/*static void _OnSophieuKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnSophieuKillfocus();
} */
static int _OnSophieuCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuGiaHanDialog *)pWnd)->OnSophieuCheckValue();
} 
static void _OnNguoi_gia_hanSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuGiaHanDialog* )pWnd)->OnNguoi_gia_hanSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNguoi_gia_hanSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnNguoi_gia_hanSelendok();
}
/*static void _OnNguoi_gia_hanSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnNguoi_gia_hanKillfocus();
}*/
/*static void _OnNguoi_gia_hanKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnNguoi_gia_hanKillfocus();
}*/
static long _OnNguoi_gia_hanLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuGiaHanDialog *)pWnd)->OnNguoi_gia_hanLoadData();
}
/*static void _OnNguoi_gia_hanAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnNguoi_gia_hanAddNew();
}*/
/*static void _Onngay_gia_hanChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->Onngay_gia_hanChange();
} */
/*static void _Onngay_gia_hanSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->Onngay_gia_hanSetfocus();} */ 
/*static void _Onngay_gia_hanKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->Onngay_gia_hanKillfocus();
} */
static int _Onngay_gia_hanCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuGiaHanDialog *)pWnd)->Onngay_gia_hanCheckValue();
} 
/*static void _OnThoiluongChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnThoiluongChange();
} */
/*static void _OnThoiluongSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnThoiluongSetfocus();} */ 
/*static void _OnThoiluongKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnThoiluongKillfocus();
} */
static int _OnThoiluongCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuGiaHanDialog *)pWnd)->OnThoiluongCheckValue();
} 
/*static void _OnNgayhethanChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnNgayhethanChange();
} */
/*static void _OnNgayhethanSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnNgayhethanSetfocus();} */ 
/*static void _OnNgayhethanKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnNgayhethanKillfocus();
} */
static int _OnNgayhethanCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuGiaHanDialog *)pWnd)->OnNgayhethanCheckValue();
} 
/*static void _OnDiengiaiChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnDiengiaiChange();
} */
/*static void _OnDiengiaiSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnDiengiaiSetfocus();} */ 
/*static void _OnDiengiaiKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->OnDiengiaiKillfocus();
} */
static int _OnDiengiaiCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuGiaHanDialog *)pWnd)->OnDiengiaiCheckValue();
} 
static void _Onphieu_truSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuGiaHanDialog* )pWnd)->Onphieu_truSelectChange(nOldItemSel, nNewItemSel);
} 
static void _Onphieu_truSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->Onphieu_truSelendok();
}
/*static void _Onphieu_truSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->Onphieu_truKillfocus();
}*/
/*static void _Onphieu_truKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->Onphieu_truKillfocus();
}*/
static long _Onphieu_truLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuGiaHanDialog *)pWnd)->Onphieu_truLoadData();
}
/*static void _Onphieu_truAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog *)pWnd)->Onphieu_truAddNew();
}*/
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CIVFLabPhieuGiaHanDialog *pVw = (CIVFLabPhieuGiaHanDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CIVFLabPhieuGiaHanDialog *pVw = (CIVFLabPhieuGiaHanDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFLabPhieuGiaHanDialog *pVw = (CIVFLabPhieuGiaHanDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnAcceptSelectFnc(CWnd *pWnd){
	CIVFLabPhieuGiaHanDialog *pVw = (CIVFLabPhieuGiaHanDialog *)pWnd;
	pVw->OnAcceptSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuGiaHanDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFLabPhieuGiaHanDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFLabPhieuGiaHanDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuGiaHanDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddIVFLabPhieuGiaHanDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuGiaHanDialog*)pWnd)->OnAddIVFLabPhieuGiaHanDialog();
} 
static int _OnEditIVFLabPhieuGiaHanDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuGiaHanDialog*)pWnd)->OnEditIVFLabPhieuGiaHanDialog();
} 
static int _OnDeleteIVFLabPhieuGiaHanDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuGiaHanDialog*)pWnd)->OnDeleteIVFLabPhieuGiaHanDialog();
} 
static int _OnSaveIVFLabPhieuGiaHanDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuGiaHanDialog*)pWnd)->OnSaveIVFLabPhieuGiaHanDialog();
} 
static int _OnCancelIVFLabPhieuGiaHanDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuGiaHanDialog*)pWnd)->OnCancelIVFLabPhieuGiaHanDialog();
} 
CIVFLabPhieuGiaHanDialog::CIVFLabPhieuGiaHanDialog(CWnd *pParent, long nDocNo, long nID):
	CGuiDialog(pParent){
	m_nDocNo = nDocNo;
	m_nID = nID;
	m_nDlgWidth = 575;
	m_nDlgHeight = 465;
	SetDefaultValues();
	m_bAccept = FALSE;
}
CIVFLabPhieuGiaHanDialog::~CIVFLabPhieuGiaHanDialog(){
}
void CIVFLabPhieuGiaHanDialog::OnCreateComponents(){
	m_wndSophieuLabel.Create(this, _T("so_phieu"), 5, 5, 105, 30);
	m_wndSophieu.Create(this,110, 5, 210, 30); 
	m_wndNguoigiahanLabel.Create(this, _T("nguoi_gia_han"), 215, 5, 315, 30);
	m_wndNguoi_gia_han.Create(this,320, 5, 570, 30); 
	m_wndNgayGiaHanLabel.Create(this, _T("ngay_gia_han"), 5, 35, 105, 60);
	m_wndngay_gia_han.Create(this,110, 35, 210, 60); 
	m_wndThoiluongLabel.Create(this, _T("thoi_luong"), 215, 35, 315, 60);
	m_wndThoiluong.Create(this,320, 35, 381, 60); 
	m_wndNgayhethanLabel.Create(this, _T("ngay_het_han"), 385, 35, 465, 60);
	m_wndNgayhethan.Create(this,470, 35, 570, 60); 
	m_wndDiengiaiLabel.Create(this, _T("dien_giai"), 5, 65, 105, 90);
	m_wndDiengiai.Create(this,110, 65, 570, 90); 
	m_wndPhieutruLabel.Create(this, _T("phieu_tru"), 5, 95, 105, 120);
	m_wndphieu_tru.Create(this,110, 95, 540, 120); 
	m_wndAddLine.Create(this, _T("+"), 545, 95, 570, 120);
	m_wndUpdate.Create(this, _T("&Update"), 310, 430, 400, 455);
	m_wndSave.Create(this, _T("&Save"), 405, 430, 485, 455);
	m_wndAccept.Create(this, _T("&Accept"), 490, 430, 570, 455);
	m_wndList.Create(this,5, 125, 570, 425); 

}
void CIVFLabPhieuGiaHanDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSophieu.SetLimitText(1024);
	m_wndSophieu.SetCheckValue(true);
	m_wndNguoi_gia_han.SetCheckValue(true);
	m_wndNguoi_gia_han.LimitText(1024);
	//m_wndngay_gia_han.SetMax(CDate(pMF->GetSysDate()));
	m_wndngay_gia_han.SetCheckValue(true);
	m_wndThoiluong.SetLimitText(16);
	m_wndThoiluong.SetCheckValue(true);
	//m_wndNgayhethan.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgayhethan.SetCheckValue(true);
	m_wndDiengiai.SetLimitText(1024);
	//m_wndDiengiai.SetCheckValue(true);
	//m_wndphieu_tru.SetCheckValue(true);
	m_wndphieu_tru.LimitText(1024);

	m_wndNguoi_gia_han.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndNguoi_gia_han.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndphieu_tru.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndphieu_tru.InsertColumn(1, _T("so_phieu"), CFMT_TEXT, 120);
	m_wndphieu_tru.InsertColumn(2, _T("ngay_het_han"), CFMT_DATE, 120);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("so_phieu"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(3, _T("ngay_het_han"), CFMT_DATE, 120);
}
void CIVFLabPhieuGiaHanDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSophieu.SetEvent(WE_CHANGE, _OnSophieuChangeFnc);
	//m_wndSophieu.SetEvent(WE_SETFOCUS, _OnSophieuSetfocusFnc);
	//m_wndSophieu.SetEvent(WE_KILLFOCUS, _OnSophieuKillfocusFnc);
	m_wndSophieu.SetEvent(WE_CHECKVALUE, _OnSophieuCheckValueFnc);
	m_wndNguoi_gia_han.SetEvent(WE_SELENDOK, _OnNguoi_gia_hanSelendokFnc);
	//m_wndNguoi_gia_han.SetEvent(WE_SETFOCUS, _OnNguoi_gia_hanSetfocusFnc);
	//m_wndNguoi_gia_han.SetEvent(WE_KILLFOCUS, _OnNguoi_gia_hanKillfocusFnc);
	m_wndNguoi_gia_han.SetEvent(WE_SELCHANGE, _OnNguoi_gia_hanSelectChangeFnc);
	m_wndNguoi_gia_han.SetEvent(WE_LOADDATA, _OnNguoi_gia_hanLoadDataFnc);
	//m_wndNguoi_gia_han.SetEvent(WE_ADDNEW, _OnNguoi_gia_hanAddNewFnc);
	//m_wndngay_gia_han.SetEvent(WE_CHANGE, _Onngay_gia_hanChangeFnc);
	//m_wndngay_gia_han.SetEvent(WE_SETFOCUS, _Onngay_gia_hanSetfocusFnc);
	//m_wndngay_gia_han.SetEvent(WE_KILLFOCUS, _Onngay_gia_hanKillfocusFnc);
	m_wndngay_gia_han.SetEvent(WE_CHECKVALUE, _Onngay_gia_hanCheckValueFnc);
	//m_wndThoiluong.SetEvent(WE_CHANGE, _OnThoiluongChangeFnc);
	//m_wndThoiluong.SetEvent(WE_SETFOCUS, _OnThoiluongSetfocusFnc);
	//m_wndThoiluong.SetEvent(WE_KILLFOCUS, _OnThoiluongKillfocusFnc);
	m_wndThoiluong.SetEvent(WE_CHECKVALUE, _OnThoiluongCheckValueFnc);
	//m_wndNgayhethan.SetEvent(WE_CHANGE, _OnNgayhethanChangeFnc);
	//m_wndNgayhethan.SetEvent(WE_SETFOCUS, _OnNgayhethanSetfocusFnc);
	//m_wndNgayhethan.SetEvent(WE_KILLFOCUS, _OnNgayhethanKillfocusFnc);
	m_wndNgayhethan.SetEvent(WE_CHECKVALUE, _OnNgayhethanCheckValueFnc);
	//m_wndDiengiai.SetEvent(WE_CHANGE, _OnDiengiaiChangeFnc);
	//m_wndDiengiai.SetEvent(WE_SETFOCUS, _OnDiengiaiSetfocusFnc);
	//m_wndDiengiai.SetEvent(WE_KILLFOCUS, _OnDiengiaiKillfocusFnc);
	m_wndDiengiai.SetEvent(WE_CHECKVALUE, _OnDiengiaiCheckValueFnc);
	m_wndphieu_tru.SetEvent(WE_SELENDOK, _Onphieu_truSelendokFnc);
	//m_wndphieu_tru.SetEvent(WE_SETFOCUS, _Onphieu_truSetfocusFnc);
	//m_wndphieu_tru.SetEvent(WE_KILLFOCUS, _Onphieu_truKillfocusFnc);
	m_wndphieu_tru.SetEvent(WE_SELCHANGE, _Onphieu_truSelectChangeFnc);
	m_wndphieu_tru.SetEvent(WE_LOADDATA, _Onphieu_truLoadDataFnc);
	//m_wndphieu_tru.SetEvent(WE_ADDNEW, _Onphieu_truAddNewFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndAccept.SetEvent(WE_CLICK, _OnAcceptSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	GetDataToScreen();
	OnListLoadData();
}
void CIVFLabPhieuGiaHanDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSophieu.GetDlgCtrlID(), m_szSophieu);
	DDX_TextEx(pDX, m_wndNguoi_gia_han.GetDlgCtrlID(), m_szNguoi_gia_hanKey);
	DDX_TextEx(pDX, m_wndngay_gia_han.GetDlgCtrlID(), m_szngay_gia_han);
	DDX_Text(pDX, m_wndThoiluong.GetDlgCtrlID(), m_nThoiluong);
	DDX_TextEx(pDX, m_wndNgayhethan.GetDlgCtrlID(), m_szNgayhethan);
	DDX_Text(pDX, m_wndDiengiai.GetDlgCtrlID(), m_szDiengiai);
	DDX_TextEx(pDX, m_wndphieu_tru.GetDlgCtrlID(), m_szphieu_truKey);

}
void CIVFLabPhieuGiaHanDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
		m_jData[_T("Sophieu")] =  m_szSophieu;
		m_jData[_T("Nguoi_gia_han")] =  m_szNguoi_gia_hanKey;
		m_jData[_T("ngay_gia_han")] =  m_szngay_gia_han;
		m_jData[_T("Thoiluong")] =  m_nThoiluong;
		m_jData[_T("Ngayhethan")] =  m_szNgayhethan;
		m_jData[_T("Diengiai")] =  m_szDiengiai;
		//m_jData[_T("phieu_tru")] =  m_szphieu_truKey;
		JSONARRAY jArr;
		for (int i = 0; i < m_wndList.GetItemCount(); i++)
		{
			jArr.push_back(str2long(m_wndList.GetItemText(i, 0)));	
		}
		m_jData[_T("list")] = jArr;
	}
	else
	{				
		m_jData[_T("Sophieu")].GetValue(m_szSophieu);
		m_jData[_T("Nguoi_gia_han")].GetValue(m_szNguoi_gia_hanKey);
		m_jData[_T("ngay_gia_han")].GetValue(m_szngay_gia_han);
		m_jData[_T("Thoiluong")].GetValue(m_nThoiluong);
		m_jData[_T("Ngayhethan")].GetValue(m_szNgayhethan);
		m_jData[_T("Diengiai")].GetValue(m_szDiengiai);
		//m_jData[_T("phieu_tru")].GetValue(m_szphieu_truKey);
	}

}
void CIVFLabPhieuGiaHanDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ivf_phieu_gia_han WHERE ivf_phieu_gia_han_id = %ld"), m_nID);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		SetMode(VM_ADD);
		return;
	}
	rs.GetValue(_T("so_phieu"), m_szSophieu);
	rs.GetValue(_T("nguoi_tao"), m_szNguoi_gia_hanKey);
	rs.GetValue(_T("ngay_gia_han"), m_szngay_gia_han);
	rs.GetValue(_T("thoi_luong"), m_nThoiluong);
	rs.GetValue(_T("ngay_het_han"), m_szNgayhethan);
	rs.GetValue(_T("dien_giai"), m_szDiengiai);
	SetMode(GetMode());

}
void CIVFLabPhieuGiaHanDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CIVFLabPhieuGiaHanDialog::SetDefaultValues(){

	m_szSophieu.Empty();
	m_szNguoi_gia_hanKey.Empty();
	m_szngay_gia_han.Empty();
	m_nThoiluong=0;
	m_szNgayhethan.Empty();
	m_szDiengiai.Empty();
	m_szphieu_truKey.Empty();

}
int CIVFLabPhieuGiaHanDialog::SetMode(int nMode){
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	CString szSQL;
 	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select count(*) from ivf_phieu_gia_han where ivf_phieu_gia_han_id = %ld and trang_thai <> 'O'"), m_nID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		nMode = VM_READONLY;
	}
 	int nOldMode = GetMode();
 	CGuiDialog::SetMode(nMode);
	
  	switch(nMode){
 	case VM_ADD: 
 		EnableControls(TRUE);
 		EnableButtons(FALSE, 1, -1);
 		SetDefaultValues();
		m_szngay_gia_han = pMF->GetSysDate();
 		break;
 	case VM_EDIT: 
 		EnableControls(TRUE);
 		EnableButtons(FALSE, 1, -1);
		m_wndSophieu.EnableWindow(FALSE);
		m_wndNguoi_gia_han.SetFocus();
 		break;
 	case VM_VIEW: 
 		EnableControls(FALSE);
 		EnableButtons(TRUE, 1, 3, -1);
 		break;
 	case VM_NONE: 
 		EnableControls(FALSE);
 		EnableButtons(TRUE, 0, 6, -1);
 		SetDefaultValues();
 		break;
	case VM_READONLY:
		EnableControls(FALSE);
		EnableButtons(TRUE, -1);
 	};
 	UpdateData(FALSE);
 	return nOldMode;
}
/*void CIVFLabPhieuGiaHanDialog::OnSophieuChange(){
	
} */
/*void CIVFLabPhieuGiaHanDialog::OnSophieuSetfocus(){
	
} */
/*void CIVFLabPhieuGiaHanDialog::OnSophieuKillfocus(){
	
} */
int CIVFLabPhieuGiaHanDialog::OnSophieuCheckValue(){
	return 0;
} 
void CIVFLabPhieuGiaHanDialog::OnNguoi_gia_hanSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuGiaHanDialog::OnNguoi_gia_hanSelendok(){
	 
}
/*void CIVFLabPhieuGiaHanDialog::OnNguoi_gia_hanSetfocus(){
	
}*/
/*void CIVFLabPhieuGiaHanDialog::OnNguoi_gia_hanKillfocus(){
	
}*/
long CIVFLabPhieuGiaHanDialog::OnNguoi_gia_hanLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and su_deptid = 'TTDTHM' and rownum < 11"));
	return pMF->LoadIVFLabUser(&m_wndNguoi_gia_han, m_szNguoi_gia_hanKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNguoi_gia_han.IsSearchKey() && !m_szNguoi_gia_hanKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNguoi_gia_hanKey
};
	m_wndNguoi_gia_han.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNguoi_gia_han.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuGiaHanDialog::OnNguoi_gia_hanAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFLabPhieuGiaHanDialog::Onngay_gia_hanChange(){
	
} */
/*void CIVFLabPhieuGiaHanDialog::Onngay_gia_hanSetfocus(){
	
} */
/*void CIVFLabPhieuGiaHanDialog::Onngay_gia_hanKillfocus(){
	
} */
int CIVFLabPhieuGiaHanDialog::Onngay_gia_hanCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuGiaHanDialog::OnThoiluongChange(){
	
} */
/*void CIVFLabPhieuGiaHanDialog::OnThoiluongSetfocus(){
	
} */
/*void CIVFLabPhieuGiaHanDialog::OnThoiluongKillfocus(){
	
} */
int CIVFLabPhieuGiaHanDialog::OnThoiluongCheckValue(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select add_months(to_date('%s', 'yyyy/mm/dd'), %d) as ngay_het_han from dual"), m_szngay_gia_han, m_nThoiluong);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ngay_het_han"), m_szNgayhethan);
	UpdateData(FALSE);
	return 0;
} 
/*void CIVFLabPhieuGiaHanDialog::OnNgayhethanChange(){
	
} */
/*void CIVFLabPhieuGiaHanDialog::OnNgayhethanSetfocus(){
	
} */
/*void CIVFLabPhieuGiaHanDialog::OnNgayhethanKillfocus(){
	
} */
int CIVFLabPhieuGiaHanDialog::OnNgayhethanCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuGiaHanDialog::OnDiengiaiChange(){
	
} */
/*void CIVFLabPhieuGiaHanDialog::OnDiengiaiSetfocus(){
	
} */
/*void CIVFLabPhieuGiaHanDialog::OnDiengiaiKillfocus(){
	
} */
int CIVFLabPhieuGiaHanDialog::OnDiengiaiCheckValue(){
	return 0;
} 
void CIVFLabPhieuGiaHanDialog::Onphieu_truSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuGiaHanDialog::Onphieu_truSelendok(){
	 
}
/*void CIVFLabPhieuGiaHanDialog::Onphieu_truSetfocus(){
	
}*/
/*void CIVFLabPhieuGiaHanDialog::Onphieu_truKillfocus(){
	
}*/
long CIVFLabPhieuGiaHanDialog::Onphieu_truLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIds;
	if(m_wndphieu_tru.IsSearchKey() && !m_szphieu_truKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szphieu_truKey);
	}
	m_wndphieu_tru.DeleteAllItems(); 
	int nCount = 0;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (!szIds.IsEmpty())
		{
			szIds += _T(", ");
		}
		szIds.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
	}
	szWhere.Format(_T(" AND docno = %ld"), m_nDocNo);
	if (!szIds.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and id not in (%s)"), szIds);
	}
	szSQL.Format(_T("SELECT id,") \
	_T("       so_phieu,") \
	_T("       to_char(ngay_het_han, 'dd/mm/yyyy') as ngay_het_han") \
	_T(" FROM   ivf_phieutru_view") \
	_T(" WHERE  1=1 AND trang_thai = 'T' %s") \
	_T(" ORDER BY ngay_het_han desc"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndphieu_tru.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("so_phieu")),
			rs.GetValue(_T("ngay_het_han")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CIVFLabPhieuGiaHanDialog::Onphieu_truAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuGiaHanDialog::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	if (m_szphieu_truKey.IsEmpty())
	{
		return;
	}
	m_wndList.AddItems(m_wndphieu_tru.GetCurrent(0), int2str(m_wndList.GetItemCount()+1), m_wndphieu_tru.GetCurrent(1), m_wndphieu_tru.GetCurrent(2));
	m_wndList.EndLoad();
	m_wndphieu_tru.SetFocus();
	Onphieu_truLoadData();
} 
void CIVFLabPhieuGiaHanDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditIVFLabPhieuGiaHanDialog();
} 
void CIVFLabPhieuGiaHanDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFLabPhieuGiaHanDialog();
} 
void CIVFLabPhieuGiaHanDialog::OnAcceptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bAccept = TRUE;
	int nRet = OnSaveIVFLabPhieuGiaHanDialog();
	m_bAccept = FALSE;
	if (nRet > 0)
	{
		CGuiDialog::OnOK();
	}
} 
void CIVFLabPhieuGiaHanDialog::OnListDblClick(){
	
} 
void CIVFLabPhieuGiaHanDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabPhieuGiaHanDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	m_wndList.DeleteItem(nSel);
	return 0;
} 
long CIVFLabPhieuGiaHanDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T("SELECT ID,") \
	_T("       so_phieu,") \
	_T("       to_char(ngay_het_han, 'dd/mm/yyyy') as ngay_het_han") \
	_T(" FROM   ivf_phieutru_view") \
	_T(" WHERE  ID IN (SELECT id_phieu_tru FROM ivf_phieu_gia_han_line WHERE id_phieu_gia_han = %ld)"), m_nID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			int2str(nIdx++),
			rs.GetValue(_T("so_phieu")),
			rs.GetValue(_T("ngay_het_han")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

int CIVFLabPhieuGiaHanDialog::OnAddIVFLabPhieuGiaHanDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFLabPhieuGiaHanDialog::OnEditIVFLabPhieuGiaHanDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFLabPhieuGiaHanDialog::OnDeleteIVFLabPhieuGiaHanDialog(){
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
 		OnCancelIVFLabPhieuGiaHanDialog();
 	}
	return 0;
}
int CIVFLabPhieuGiaHanDialog::OnSaveIVFLabPhieuGiaHanDialog(){
 	//if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 	//	return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, tmpStr;
	m_jData.ToString(tmpStr);
	szSQL.Format(_T("IVF_PHIEU_GIA_HAN_CREATE(%ld, %ld, '%s', '%s')"), m_nDocNo, m_nID, tmpStr, m_bAccept?_T("Y"):_T("N"));
 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
	{
  		//OnIVFLabPhieuGiaHanDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFLabPhieuGiaHanDialog::OnCancelIVFLabPhieuGiaHanDialog(){
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
int CIVFLabPhieuGiaHanDialog::OnIVFLabPhieuGiaHanDialogListLoadData(){
	return 0;
}
