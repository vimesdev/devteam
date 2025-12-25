#include "IVFPhieuRaTTPopup.h"
#include "MainFrm.h"
#include "IVFPhieuRaTTDialog.h"
static void _OnTopSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieuRaTTPopup* )pWnd)->OnTopSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTopSelendokFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->OnTopSelendok();
}
/*static void _OnTopSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->OnTopKillfocus();
}*/
/*static void _OnTopKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->OnTopKillfocus();
}*/
static long _OnTopLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieuRaTTPopup *)pWnd)->OnTopLoadData();
}
/*static void _OnTopAddNewFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->OnTopAddNew();
}*/
/*static void _Onso_luongChangeFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->Onso_luongChange();
} */
/*static void _Onso_luongSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->Onso_luongSetfocus();} */ 
/*static void _Onso_luongKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->Onso_luongKillfocus();
} */
static int _Onso_luongCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuRaTTPopup *)pWnd)->Onso_luongCheckValue();
} 
/*static void _Onmat_doChangeFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->Onmat_doChange();
} */
/*static void _Onmat_doSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->Onmat_doSetfocus();} */ 
/*static void _Onmat_doKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->Onmat_doKillfocus();
} */
static int _Onmat_doCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuRaTTPopup *)pWnd)->Onmat_doCheckValue();
} 
/*static void _Ontien_toiChangeFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->Ontien_toiChange();
} */
/*static void _Ontien_toiSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->Ontien_toiSetfocus();} */ 
/*static void _Ontien_toiKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->Ontien_toiKillfocus();
} */
static int _Ontien_toiCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuRaTTPopup *)pWnd)->Ontien_toiCheckValue();
} 
/*static void _OnKhong_tien_toiChangeFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->OnKhong_tien_toiChange();
} */
/*static void _OnKhong_tien_toiSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->OnKhong_tien_toiSetfocus();} */ 
/*static void _OnKhong_tien_toiKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->OnKhong_tien_toiKillfocus();
} */
static int _OnKhong_tien_toiCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuRaTTPopup *)pWnd)->OnKhong_tien_toiCheckValue();
} 
/*static void _OnHinh_dangChangeFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->OnHinh_dangChange();
} */
/*static void _OnHinh_dangSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->OnHinh_dangSetfocus();} */ 
/*static void _OnHinh_dangKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuRaTTPopup *)pWnd)->OnHinh_dangKillfocus();
} */
static int _OnHinh_dangCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuRaTTPopup *)pWnd)->OnHinh_dangCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFPhieuRaTTPopup *pVw = (CIVFPhieuRaTTPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFPhieuRaTTPopup *pVw = (CIVFPhieuRaTTPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFPhieuRaTTPopupFnc(CWnd *pWnd){
	 return ((CIVFPhieuRaTTPopup*)pWnd)->OnAddIVFPhieuRaTTPopup();
} 
static int _OnEditIVFPhieuRaTTPopupFnc(CWnd *pWnd){
	 return ((CIVFPhieuRaTTPopup*)pWnd)->OnEditIVFPhieuRaTTPopup();
} 
static int _OnDeleteIVFPhieuRaTTPopupFnc(CWnd *pWnd){
	 return ((CIVFPhieuRaTTPopup*)pWnd)->OnDeleteIVFPhieuRaTTPopup();
} 
static int _OnSaveIVFPhieuRaTTPopupFnc(CWnd *pWnd){
	 return ((CIVFPhieuRaTTPopup*)pWnd)->OnSaveIVFPhieuRaTTPopup();
} 
static int _OnCancelIVFPhieuRaTTPopupFnc(CWnd *pWnd){
	 return ((CIVFPhieuRaTTPopup*)pWnd)->OnCancelIVFPhieuRaTTPopup();
}
CIVFPhieuRaTTPopup::CIVFPhieuRaTTPopup(CWnd* pParent):CGuiPopup(pParent){

	m_nDlgWidth = 540;
	m_nDlgHeight = 90;
	SetDefaultValues();
}
CIVFPhieuRaTTPopup::CIVFPhieuRaTTPopup(){

	m_nDlgWidth = 540;
	m_nDlgHeight = 90;
	SetDefaultValues();
}
CIVFPhieuRaTTPopup::~CIVFPhieuRaTTPopup(){
}
void CIVFPhieuRaTTPopup::OnCreateComponents(){
	m_wndTopLabel.Create(this, _T("Cong"), 5, 5, 85, 30);
	m_wndTop.Create(this,90, 5, 540, 30); 
	m_wndso_luongLabel.Create(this, _T("so_luong"), 5, 35, 85, 60);
	m_wndso_luong.Create(this,90, 35, 135, 60); 
	m_wnddon_vi_1Label.Create(this, _T("ml"), 140, 35, 180, 60);
	m_wndmat_doLabel.Create(this, _T("mat_do"), 185, 35, 265, 60);
	m_wndmat_do.Create(this,270, 35, 315, 60); 
	m_wnddon_vi_2Label.Create(this, _T("10^6"), 320, 35, 360, 60);
	m_wndtien_toiLabel.Create(this, _T("tien_toi"), 365, 35, 445, 60);
	m_wndtien_toi.Create(this,450, 35, 495, 60); 
	m_wnddon_vi_3Label.Create(this, _T("%"), 500, 35, 540, 60);
	m_wndKhong_tien_toiLabel.Create(this, _T("khg_tien_toi"), 5, 65, 85, 90);
	m_wndKhong_tien_toi.Create(this,90, 65, 135, 90); 
	m_wndDon_vi4.Create(this, _T("%"), 140, 65, 180, 90);
	m_wndHinh_dangLabel.Create(this, _T("hinh_dang"), 185, 65, 265, 90);
	m_wndHinh_dang.Create(this,270, 65, 315, 90); 
	m_wndDon_vi5.Create(this, _T("%"), 320, 65, 360, 90);
	m_wndSave.Create(this, _T("&Save"), 365, 65, 450, 90);
	m_wndClose.Create(this, _T("&Close"), 455, 65, 540, 90);

}
void CIVFPhieuRaTTPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTop.SetCheckValue(true);
	m_wndTop.LimitText(1024);
	m_wndso_luong.SetLimitText(1024);
	m_wndso_luong.SetCheckValue(true);
	m_wndmat_do.SetLimitText(1024);
	m_wndmat_do.SetCheckValue(true);
	m_wndtien_toi.SetLimitText(1024);
	m_wndtien_toi.SetCheckValue(true);
	m_wndKhong_tien_toi.SetLimitText(1024);
	m_wndKhong_tien_toi.SetCheckValue(true);
	m_wndHinh_dang.SetLimitText(1024);
	m_wndHinh_dang.SetCheckValue(true);

	m_wndTop.Format(9, 3);
	m_wndTop.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndTop.InsertColumn(1, _T("STT"), CFMT_TEXT, 30);
	m_wndTop.InsertColumn(2, _T("Thanh"), CFMT_TEXT, 100);
	m_wndTop.InsertColumn(3, _T("Cong"), CFMT_TEXT, 100);
	m_wndTop.InsertColumn(4, _T("The tich"), CFMT_TEXT, 60);
	m_wndTop.InsertColumn(5, _T("Mat do"), CFMT_TEXT, 60);
	m_wndTop.InsertColumn(6, _T("Tien Toi"), CFMT_TEXT, 60);
	m_wndTop.InsertColumn(7, _T("Khong tien toi"), CFMT_TEXT, 60);
	m_wndTop.InsertColumn(8, _T("Hinh dang"), CFMT_TEXT, 60);

}
void CIVFPhieuRaTTPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTop.SetEvent(WE_SELENDOK, _OnTopSelendokFnc);
	//m_wndTop.SetEvent(WE_SETFOCUS, _OnTopSetfocusFnc);
	//m_wndTop.SetEvent(WE_KILLFOCUS, _OnTopKillfocusFnc);
	m_wndTop.SetEvent(WE_SELCHANGE, _OnTopSelectChangeFnc);
	m_wndTop.SetEvent(WE_LOADDATA, _OnTopLoadDataFnc);
	//m_wndTop.SetEvent(WE_ADDNEW, _OnTopAddNewFnc);
	//m_wndso_luong.SetEvent(WE_CHANGE, _Onso_luongChangeFnc);
	//m_wndso_luong.SetEvent(WE_SETFOCUS, _Onso_luongSetfocusFnc);
	//m_wndso_luong.SetEvent(WE_KILLFOCUS, _Onso_luongKillfocusFnc);
	m_wndso_luong.SetEvent(WE_CHECKVALUE, _Onso_luongCheckValueFnc);
	//m_wndmat_do.SetEvent(WE_CHANGE, _Onmat_doChangeFnc);
	//m_wndmat_do.SetEvent(WE_SETFOCUS, _Onmat_doSetfocusFnc);
	//m_wndmat_do.SetEvent(WE_KILLFOCUS, _Onmat_doKillfocusFnc);
	m_wndmat_do.SetEvent(WE_CHECKVALUE, _Onmat_doCheckValueFnc);
	//m_wndtien_toi.SetEvent(WE_CHANGE, _Ontien_toiChangeFnc);
	//m_wndtien_toi.SetEvent(WE_SETFOCUS, _Ontien_toiSetfocusFnc);
	//m_wndtien_toi.SetEvent(WE_KILLFOCUS, _Ontien_toiKillfocusFnc);
	m_wndtien_toi.SetEvent(WE_CHECKVALUE, _Ontien_toiCheckValueFnc);
	//m_wndKhong_tien_toi.SetEvent(WE_CHANGE, _OnKhong_tien_toiChangeFnc);
	//m_wndKhong_tien_toi.SetEvent(WE_SETFOCUS, _OnKhong_tien_toiSetfocusFnc);
	//m_wndKhong_tien_toi.SetEvent(WE_KILLFOCUS, _OnKhong_tien_toiKillfocusFnc);
	m_wndKhong_tien_toi.SetEvent(WE_CHECKVALUE, _OnKhong_tien_toiCheckValueFnc);
	//m_wndHinh_dang.SetEvent(WE_CHANGE, _OnHinh_dangChangeFnc);
	//m_wndHinh_dang.SetEvent(WE_SETFOCUS, _OnHinh_dangSetfocusFnc);
	//m_wndHinh_dang.SetEvent(WE_KILLFOCUS, _OnHinh_dangKillfocusFnc);
	m_wndHinh_dang.SetEvent(WE_CHECKVALUE, _OnHinh_dangCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddIVFPhieuRaTTPopupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditIVFPhieuRaTTPopupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteIVFPhieuRaTTPopupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveIVFPhieuRaTTPopupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelIVFPhieuRaTTPopupFnc, 0, 'T', VK_CONTROL);
	//SetMode(VM_NONE);
	m_wndTop.SetFocus();
}
void CIVFPhieuRaTTPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTop.GetDlgCtrlID(), m_szTopKey);
	DDX_Text(pDX, m_wndso_luong.GetDlgCtrlID(), m_nso_luong);
	DDX_Text(pDX, m_wndmat_do.GetDlgCtrlID(), m_szmat_do);
	DDX_Text(pDX, m_wndtien_toi.GetDlgCtrlID(), m_sztien_toi);
	DDX_Text(pDX, m_wndKhong_tien_toi.GetDlgCtrlID(), m_szKhong_tien_toi);
	DDX_Text(pDX, m_wndHinh_dang.GetDlgCtrlID(), m_szHinh_dang);

}
void CIVFPhieuRaTTPopup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
		m_jData[_T("Top")] =  m_szTopKey;
		m_jData[_T("so_luong")] =  m_nso_luong;
		m_jData[_T("mat_do")] =  m_szmat_do;
		m_jData[_T("tien_toi")] =  m_sztien_toi;
		m_jData[_T("Khong_tien_toi")] =  m_szKhong_tien_toi;
		m_jData[_T("Hinh_dang")] =  m_szHinh_dang;

		m_jData[_T("order_id")] = m_nOrderID;
	}
	else
	{
			
		m_jData[_T("Top")].GetValue(m_szTopKey);
		m_jData[_T("so_luong")].GetValue(m_nso_luong);
		m_jData[_T("mat_do")].GetValue(m_szmat_do);
		m_jData[_T("tien_toi")].GetValue(m_sztien_toi);
		m_jData[_T("Khong_tien_toi")].GetValue(m_szKhong_tien_toi);
		m_jData[_T("Hinh_dang")].GetValue(m_szHinh_dang);
	}

}
void CIVFPhieuRaTTPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFPhieuRaTTPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CIVFPhieuRaTTPopup::SetDefaultValues(){

	m_szTopKey.Empty();
	m_nso_luong=0;
	m_szmat_do.Empty();
	m_sztien_toi.Empty();
	m_szKhong_tien_toi.Empty();
	m_szHinh_dang.Empty();

}
int CIVFPhieuRaTTPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
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
void CIVFPhieuRaTTPopup::OnTopSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuRaTTPopup::OnTopSelendok(){
	UpdateData();
	m_nso_luong = str2float(m_wndTop.GetCurrent(4));
	m_szmat_do = m_wndTop.GetCurrent(5);
	m_sztien_toi = m_wndTop.GetCurrent(6);
	m_szKhong_tien_toi = m_wndTop.GetCurrent(7);
	m_szHinh_dang = m_wndTop.GetCurrent(8);
	UpdateData(FALSE);
}
/*void CIVFPhieuRaTTPopup::OnTopSetfocus(){
	
}*/
/*void CIVFPhieuRaTTPopup::OnTopKillfocus(){
	
}*/
long CIVFPhieuRaTTPopup::OnTopLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTop.IsSearchKey() && !m_szTopKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szTopKey);
	};
	m_wndTop.DeleteAllItems(); 
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T("SELECT ivf_storage_top_id AS storage_top_id,") \
	_T("       coalesce(Ivf_get_sel('ivf_nhan_thanh', nhan_thanh), nhan_thanh, id_cassette) AS thanh,") \
	_T("       Ivf_get_setting_desc('ivf_storage_mautop', mau_cassette) AS mau_cassette,") \
	_T("       coalesce(Ivf_get_sel('ivf_nhan_cong', nhan_cong), nhan_cong, top) AS cong,") \
	_T("       Ivf_get_setting_desc('ivf_storage_mautop', mau) AS mau,") \
	_T("		nvl(the_tich, sophoi) as the_tich,") \
	_T("		mat_do,") \
	_T("		tien_toi,") \
	_T("		khong_tien_toi,") \
	_T("		hinh_dang_tt") \
	_T(" FROM   ivf_storage_top") \
	_T(" WHERE  docno = %ld AND id_thungtru = '%s' AND id_giatru = '%s' AND status = 'O'")
	,	m_nDocNo, m_szThungKey, m_szGiaKey, m_nOrderID);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTop.AddItems(
			rs.GetValue(_T("storage_top_id")), 
			int2str(nIdx++),
			rs.GetValue(_T("thanh")), 
			rs.GetValue(_T("cong")), 
			rs.GetValue(_T("the_tich")), 
			rs.GetValue(_T("mat_do")), 
			rs.GetValue(_T("tien_toi")), 
			rs.GetValue(_T("khong_tien_toi")), 
			rs.GetValue(_T("hinh_dang_tt")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CIVFPhieuRaTTPopup::OnTopAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFPhieuRaTTPopup::Onso_luongChange(){
	
} */
/*void CIVFPhieuRaTTPopup::Onso_luongSetfocus(){
	
} */
/*void CIVFPhieuRaTTPopup::Onso_luongKillfocus(){
	
} */
int CIVFPhieuRaTTPopup::Onso_luongCheckValue(){
	return 0;
} 
/*void CIVFPhieuRaTTPopup::Onmat_doChange(){
	
} */
/*void CIVFPhieuRaTTPopup::Onmat_doSetfocus(){
	
} */
/*void CIVFPhieuRaTTPopup::Onmat_doKillfocus(){
	
} */
int CIVFPhieuRaTTPopup::Onmat_doCheckValue(){
	return 0;
} 
/*void CIVFPhieuRaTTPopup::Ontien_toiChange(){
	
} */
/*void CIVFPhieuRaTTPopup::Ontien_toiSetfocus(){
	
} */
/*void CIVFPhieuRaTTPopup::Ontien_toiKillfocus(){
	
} */
int CIVFPhieuRaTTPopup::Ontien_toiCheckValue(){
	return 0;
} 
/*void CIVFPhieuRaTTPopup::OnKhong_tien_toiChange(){
	
} */
/*void CIVFPhieuRaTTPopup::OnKhong_tien_toiSetfocus(){
	
} */
/*void CIVFPhieuRaTTPopup::OnKhong_tien_toiKillfocus(){
	
} */
int CIVFPhieuRaTTPopup::OnKhong_tien_toiCheckValue(){
	return 0;
} 
/*void CIVFPhieuRaTTPopup::OnHinh_dangChange(){
	
} */
/*void CIVFPhieuRaTTPopup::OnHinh_dangSetfocus(){
	
} */
/*void CIVFPhieuRaTTPopup::OnHinh_dangKillfocus(){
	
} */
int CIVFPhieuRaTTPopup::OnHinh_dangCheckValue(){
	return 0;
} 
void CIVFPhieuRaTTPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFPhieuRaTTPopup();
} 
void CIVFPhieuRaTTPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	ClosePopup();
} 
int CIVFPhieuRaTTPopup::OnAddIVFPhieuRaTTPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFPhieuRaTTPopup::OnEditIVFPhieuRaTTPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFPhieuRaTTPopup::OnDeleteIVFPhieuRaTTPopup(){
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
 		OnCancelIVFPhieuRaTTPopup();
 	}
	return 0;
}
int CIVFPhieuRaTTPopup::OnSaveIVFPhieuRaTTPopup(){
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, tmpStr;
	m_jData.ToString(tmpStr);
	szSQL.Format(_T("IVF_PHIEU_RATT_CREATELINE('%s')"), tmpStr);
 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		//OnIVFPhieuRaTTPopupListLoadData();
		((CIVFPhieuRaTTDialog*) GetParent())->OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFPhieuRaTTPopup::OnCancelIVFPhieuRaTTPopup(){
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
int CIVFPhieuRaTTPopup::OnIVFPhieuRaTTPopupListLoadData(){
	return 0;
}
