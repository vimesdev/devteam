#include "IVFTheodoiDieutriNamDialog.h"
#include "MainFrm.h"
/*static void _OnNgaylocruaChangeFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNgaylocruaChange();
} */
/*static void _OnNgaylocruaSetfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNgaylocruaSetfocus();} */ 
/*static void _OnNgaylocruaKillfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNgaylocruaKillfocus();
} */
static int _OnNgaylocruaCheckValueFnc(CWnd *pWnd){
	return ((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNgaylocruaCheckValue();
} 
/*static void _OnTglaymauChangeFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnTglaymauChange();
} */
/*static void _OnTglaymauSetfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnTglaymauSetfocus();} */ 
/*static void _OnTglaymauKillfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnTglaymauKillfocus();
} */
static int _OnTglaymauCheckValueFnc(CWnd *pWnd){
	return ((CIVFTheodoiDieutriNamDialog *)pWnd)->OnTglaymauCheckValue();
} 
/*static void _OnTgnhanmauChangeFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnTgnhanmauChange();
} */
/*static void _OnTgnhanmauSetfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnTgnhanmauSetfocus();} */ 
/*static void _OnTgnhanmauKillfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnTgnhanmauKillfocus();
} */
static int _OnTgnhanmauCheckValueFnc(CWnd *pWnd){
	return ((CIVFTheodoiDieutriNamDialog *)pWnd)->OnTgnhanmauCheckValue();
} 
static void _OnNguontinhtrungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFTheodoiDieutriNamDialog* )pWnd)->OnNguontinhtrungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNguontinhtrungSelendokFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNguontinhtrungSelendok();
}
/*static void _OnNguontinhtrungSetfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNguontinhtrungKillfocus();
}*/
/*static void _OnNguontinhtrungKillfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNguontinhtrungKillfocus();
}*/
static long _OnNguontinhtrungLoadDataFnc(CWnd *pWnd){
	return ((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNguontinhtrungLoadData();
}
/*static void _OnNguontinhtrungAddNewFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNguontinhtrungAddNew();
}*/
/*static void _OnNgaykiengxuattinhChangeFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNgaykiengxuattinhChange();
} */
/*static void _OnNgaykiengxuattinhSetfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNgaykiengxuattinhSetfocus();} */ 
/*static void _OnNgaykiengxuattinhKillfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNgaykiengxuattinhKillfocus();
} */
static int _OnNgaykiengxuattinhCheckValueFnc(CWnd *pWnd){
	return ((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNgaykiengxuattinhCheckValue();
} 
static void _OnChatluongtinhtrungtruoclocruaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFTheodoiDieutriNamDialog* )pWnd)->OnChatluongtinhtrungtruoclocruaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChatluongtinhtrungtruoclocruaSelendokFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnChatluongtinhtrungtruoclocruaSelendok();
}
/*static void _OnChatluongtinhtrungtruoclocruaSetfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnChatluongtinhtrungtruoclocruaKillfocus();
}*/
/*static void _OnChatluongtinhtrungtruoclocruaKillfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnChatluongtinhtrungtruoclocruaKillfocus();
}*/
static long _OnChatluongtinhtrungtruoclocruaLoadDataFnc(CWnd *pWnd){
	return ((CIVFTheodoiDieutriNamDialog *)pWnd)->OnChatluongtinhtrungtruoclocruaLoadData();
}
/*static void _OnChatluongtinhtrungtruoclocruaAddNewFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnChatluongtinhtrungtruoclocruaAddNew();
}*/
static void _OnChatluongtinhtrungsaulocruaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFTheodoiDieutriNamDialog* )pWnd)->OnChatluongtinhtrungsaulocruaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChatluongtinhtrungsaulocruaSelendokFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnChatluongtinhtrungsaulocruaSelendok();
}
/*static void _OnChatluongtinhtrungsaulocruaSetfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnChatluongtinhtrungsaulocruaKillfocus();
}*/
/*static void _OnChatluongtinhtrungsaulocruaKillfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnChatluongtinhtrungsaulocruaKillfocus();
}*/
static long _OnChatluongtinhtrungsaulocruaLoadDataFnc(CWnd *pWnd){
	return ((CIVFTheodoiDieutriNamDialog *)pWnd)->OnChatluongtinhtrungsaulocruaLoadData();
}
/*static void _OnChatluongtinhtrungsaulocruaAddNewFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnChatluongtinhtrungsaulocruaAddNew();
}*/
static void _OnHinhthuctinhtrungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFTheodoiDieutriNamDialog* )pWnd)->OnHinhthuctinhtrungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHinhthuctinhtrungSelendokFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnHinhthuctinhtrungSelendok();
}
/*static void _OnHinhthuctinhtrungSetfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnHinhthuctinhtrungKillfocus();
}*/
/*static void _OnHinhthuctinhtrungKillfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnHinhthuctinhtrungKillfocus();
}*/
static long _OnHinhthuctinhtrungLoadDataFnc(CWnd *pWnd){
	return ((CIVFTheodoiDieutriNamDialog *)pWnd)->OnHinhthuctinhtrungLoadData();
}
/*static void _OnHinhthuctinhtrungAddNewFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnHinhthuctinhtrungAddNew();
}*/
static void _OnNoilaytinhtrungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFTheodoiDieutriNamDialog* )pWnd)->OnNoilaytinhtrungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNoilaytinhtrungSelendokFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNoilaytinhtrungSelendok();
}
/*static void _OnNoilaytinhtrungSetfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNoilaytinhtrungKillfocus();
}*/
/*static void _OnNoilaytinhtrungKillfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNoilaytinhtrungKillfocus();
}*/
static long _OnNoilaytinhtrungLoadDataFnc(CWnd *pWnd){
	return ((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNoilaytinhtrungLoadData();
}
/*static void _OnNoilaytinhtrungAddNewFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnNoilaytinhtrungAddNew();
}*/
static void _OnCachlaytinhtrungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFTheodoiDieutriNamDialog* )pWnd)->OnCachlaytinhtrungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCachlaytinhtrungSelendokFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnCachlaytinhtrungSelendok();
}
/*static void _OnCachlaytinhtrungSetfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnCachlaytinhtrungKillfocus();
}*/
/*static void _OnCachlaytinhtrungKillfocusFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnCachlaytinhtrungKillfocus();
}*/
static long _OnCachlaytinhtrungLoadDataFnc(CWnd *pWnd){
	return ((CIVFTheodoiDieutriNamDialog *)pWnd)->OnCachlaytinhtrungLoadData();
}
/*static void _OnCachlaytinhtrungAddNewFnc(CWnd *pWnd){
	((CIVFTheodoiDieutriNamDialog *)pWnd)->OnCachlaytinhtrungAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFTheodoiDieutriNamDialog *pVw = (CIVFTheodoiDieutriNamDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFTheodoiDieutriNamDialog *pVw = (CIVFTheodoiDieutriNamDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFTheodoiDieutriNamDialogFnc(CWnd *pWnd){
	 return ((CIVFTheodoiDieutriNamDialog*)pWnd)->OnAddIVFTheodoiDieutriNamDialog();
} 
static int _OnEditIVFTheodoiDieutriNamDialogFnc(CWnd *pWnd){
	 return ((CIVFTheodoiDieutriNamDialog*)pWnd)->OnEditIVFTheodoiDieutriNamDialog();
} 
static int _OnDeleteIVFTheodoiDieutriNamDialogFnc(CWnd *pWnd){
	 return ((CIVFTheodoiDieutriNamDialog*)pWnd)->OnDeleteIVFTheodoiDieutriNamDialog();
} 
static int _OnSaveIVFTheodoiDieutriNamDialogFnc(CWnd *pWnd){
	 return ((CIVFTheodoiDieutriNamDialog*)pWnd)->OnSaveIVFTheodoiDieutriNamDialog();
} 
static int _OnCancelIVFTheodoiDieutriNamDialogFnc(CWnd *pWnd){
	 return ((CIVFTheodoiDieutriNamDialog*)pWnd)->OnCancelIVFTheodoiDieutriNamDialog();
} 
CIVFTheodoiDieutriNamDialog::CIVFTheodoiDieutriNamDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 465;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CIVFTheodoiDieutriNamDialog::~CIVFTheodoiDieutriNamDialog(){
}
void CIVFTheodoiDieutriNamDialog::OnCreateComponents(){
	m_wndNgaylocruaLabel.Create(this, _T("ngay_loc_rua"), 5, 5, 225, 30);
	m_wndNgaylocrua.Create(this,230, 5, 400, 30); 
	m_wndTglaymauLabel.Create(this, _T("tg_lay_mau"), 5, 35, 225, 60);
	m_wndTglaymau.Create(this,230, 35, 400, 60); 
	m_wndTgnhanmauLabel.Create(this, _T("tg_nhan_mau"), 5, 65, 225, 90);
	m_wndTgnhanmau.Create(this,230, 65, 400, 90); 
	m_wndNguontinhtrungLabel.Create(this, _T("nguon_tinh_trung"), 5, 95, 225, 120);
	m_wndNguontinhtrung.Create(this,230, 95, 400, 120); 
	m_wndNgaykiengxuattinhLabel.Create(this, _T("ngay_kieng_xuat_tinh"), 5, 125, 225, 150);
	m_wndNgaykiengxuattinh.Create(this,230, 125, 400, 150); 
	m_wndChatluongtinhtrungtruoclocruaLabel.Create(this, _T("chat_luong_tinh_trung_truoc_loc_rua"), 5, 155, 225, 180);
	m_wndChatluongtinhtrungtruoclocrua.Create(this,230, 155, 400, 180); 
	m_wndChatluongtinhtrungsaulocruaLabel.Create(this, _T("chat_luong_tinh_trung_sau_loc_rua"), 5, 185, 225, 210);
	m_wndChatluongtinhtrungsaulocrua.Create(this,230, 185, 400, 210); 
	m_wndHinhthuctinhtrungLabel.Create(this, _T("hinh_thuc_tinh_trung"), 5, 215, 225, 240);
	m_wndHinhthuctinhtrung.Create(this,230, 215, 400, 240); 
	m_wndNoilaytinhtrungLabel.Create(this, _T("noi_lay_tinh_trung"), 5, 245, 225, 270);
	m_wndNoilaytinhtrung.Create(this,230, 245, 400, 270); 
	m_wndCachlaytinhtrungLabel.Create(this, _T("cach_lay_tinh_trung"), 5, 275, 225, 300);
	m_wndCachlaytinhtrung.Create(this,230, 275, 400, 300); 
	m_wndSave.Create(this, _T("&Save"), 231, 305, 311, 330);
	m_wndClose.Create(this, _T("&Close"), 316, 305, 396, 330);

}
void CIVFTheodoiDieutriNamDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNgaylocrua.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndNgaylocrua.SetCheckValue(true);
	m_wndTglaymau.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTglaymau.SetCheckValue(true);
	m_wndTgnhanmau.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTgnhanmau.SetCheckValue(true);
	m_wndNguontinhtrung.SetCheckValue(true);
	m_wndNguontinhtrung.LimitText(35);
	m_wndNgaykiengxuattinh.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgaykiengxuattinh.SetCheckValue(true);
	m_wndChatluongtinhtrungtruoclocrua.SetCheckValue(true);
	m_wndChatluongtinhtrungtruoclocrua.LimitText(35);
	m_wndChatluongtinhtrungsaulocrua.SetCheckValue(true);
	m_wndChatluongtinhtrungsaulocrua.LimitText(35);
	m_wndHinhthuctinhtrung.SetCheckValue(true);
	m_wndHinhthuctinhtrung.LimitText(35);
	m_wndNoilaytinhtrung.SetCheckValue(true);
	m_wndNoilaytinhtrung.LimitText(35);
	m_wndCachlaytinhtrung.SetCheckValue(true);
	m_wndCachlaytinhtrung.LimitText(35);


	m_wndNguontinhtrung.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNguontinhtrung.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndChatluongtinhtrungtruoclocrua.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndChatluongtinhtrungtruoclocrua.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndChatluongtinhtrungsaulocrua.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndChatluongtinhtrungsaulocrua.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndHinhthuctinhtrung.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndHinhthuctinhtrung.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNoilaytinhtrung.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNoilaytinhtrung.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCachlaytinhtrung.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCachlaytinhtrung.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CIVFTheodoiDieutriNamDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndNgaylocrua.SetEvent(WE_CHANGE, _OnNgaylocruaChangeFnc);
	//m_wndNgaylocrua.SetEvent(WE_SETFOCUS, _OnNgaylocruaSetfocusFnc);
	//m_wndNgaylocrua.SetEvent(WE_KILLFOCUS, _OnNgaylocruaKillfocusFnc);
	m_wndNgaylocrua.SetEvent(WE_CHECKVALUE, _OnNgaylocruaCheckValueFnc);
	//m_wndTglaymau.SetEvent(WE_CHANGE, _OnTglaymauChangeFnc);
	//m_wndTglaymau.SetEvent(WE_SETFOCUS, _OnTglaymauSetfocusFnc);
	//m_wndTglaymau.SetEvent(WE_KILLFOCUS, _OnTglaymauKillfocusFnc);
	m_wndTglaymau.SetEvent(WE_CHECKVALUE, _OnTglaymauCheckValueFnc);
	//m_wndTgnhanmau.SetEvent(WE_CHANGE, _OnTgnhanmauChangeFnc);
	//m_wndTgnhanmau.SetEvent(WE_SETFOCUS, _OnTgnhanmauSetfocusFnc);
	//m_wndTgnhanmau.SetEvent(WE_KILLFOCUS, _OnTgnhanmauKillfocusFnc);
	m_wndTgnhanmau.SetEvent(WE_CHECKVALUE, _OnTgnhanmauCheckValueFnc);
	m_wndNguontinhtrung.SetEvent(WE_SELENDOK, _OnNguontinhtrungSelendokFnc);
	//m_wndNguontinhtrung.SetEvent(WE_SETFOCUS, _OnNguontinhtrungSetfocusFnc);
	//m_wndNguontinhtrung.SetEvent(WE_KILLFOCUS, _OnNguontinhtrungKillfocusFnc);
	m_wndNguontinhtrung.SetEvent(WE_SELCHANGE, _OnNguontinhtrungSelectChangeFnc);
	m_wndNguontinhtrung.SetEvent(WE_LOADDATA, _OnNguontinhtrungLoadDataFnc);
	//m_wndNguontinhtrung.SetEvent(WE_ADDNEW, _OnNguontinhtrungAddNewFnc);
	//m_wndNgaykiengxuattinh.SetEvent(WE_CHANGE, _OnNgaykiengxuattinhChangeFnc);
	//m_wndNgaykiengxuattinh.SetEvent(WE_SETFOCUS, _OnNgaykiengxuattinhSetfocusFnc);
	//m_wndNgaykiengxuattinh.SetEvent(WE_KILLFOCUS, _OnNgaykiengxuattinhKillfocusFnc);
	m_wndNgaykiengxuattinh.SetEvent(WE_CHECKVALUE, _OnNgaykiengxuattinhCheckValueFnc);
	m_wndChatluongtinhtrungtruoclocrua.SetEvent(WE_SELENDOK, _OnChatluongtinhtrungtruoclocruaSelendokFnc);
	//m_wndChatluongtinhtrungtruoclocrua.SetEvent(WE_SETFOCUS, _OnChatluongtinhtrungtruoclocruaSetfocusFnc);
	//m_wndChatluongtinhtrungtruoclocrua.SetEvent(WE_KILLFOCUS, _OnChatluongtinhtrungtruoclocruaKillfocusFnc);
	m_wndChatluongtinhtrungtruoclocrua.SetEvent(WE_SELCHANGE, _OnChatluongtinhtrungtruoclocruaSelectChangeFnc);
	m_wndChatluongtinhtrungtruoclocrua.SetEvent(WE_LOADDATA, _OnChatluongtinhtrungtruoclocruaLoadDataFnc);
	//m_wndChatluongtinhtrungtruoclocrua.SetEvent(WE_ADDNEW, _OnChatluongtinhtrungtruoclocruaAddNewFnc);
	m_wndChatluongtinhtrungsaulocrua.SetEvent(WE_SELENDOK, _OnChatluongtinhtrungsaulocruaSelendokFnc);
	//m_wndChatluongtinhtrungsaulocrua.SetEvent(WE_SETFOCUS, _OnChatluongtinhtrungsaulocruaSetfocusFnc);
	//m_wndChatluongtinhtrungsaulocrua.SetEvent(WE_KILLFOCUS, _OnChatluongtinhtrungsaulocruaKillfocusFnc);
	m_wndChatluongtinhtrungsaulocrua.SetEvent(WE_SELCHANGE, _OnChatluongtinhtrungsaulocruaSelectChangeFnc);
	m_wndChatluongtinhtrungsaulocrua.SetEvent(WE_LOADDATA, _OnChatluongtinhtrungsaulocruaLoadDataFnc);
	//m_wndChatluongtinhtrungsaulocrua.SetEvent(WE_ADDNEW, _OnChatluongtinhtrungsaulocruaAddNewFnc);
	m_wndHinhthuctinhtrung.SetEvent(WE_SELENDOK, _OnHinhthuctinhtrungSelendokFnc);
	//m_wndHinhthuctinhtrung.SetEvent(WE_SETFOCUS, _OnHinhthuctinhtrungSetfocusFnc);
	//m_wndHinhthuctinhtrung.SetEvent(WE_KILLFOCUS, _OnHinhthuctinhtrungKillfocusFnc);
	m_wndHinhthuctinhtrung.SetEvent(WE_SELCHANGE, _OnHinhthuctinhtrungSelectChangeFnc);
	m_wndHinhthuctinhtrung.SetEvent(WE_LOADDATA, _OnHinhthuctinhtrungLoadDataFnc);
	//m_wndHinhthuctinhtrung.SetEvent(WE_ADDNEW, _OnHinhthuctinhtrungAddNewFnc);
	m_wndNoilaytinhtrung.SetEvent(WE_SELENDOK, _OnNoilaytinhtrungSelendokFnc);
	//m_wndNoilaytinhtrung.SetEvent(WE_SETFOCUS, _OnNoilaytinhtrungSetfocusFnc);
	//m_wndNoilaytinhtrung.SetEvent(WE_KILLFOCUS, _OnNoilaytinhtrungKillfocusFnc);
	m_wndNoilaytinhtrung.SetEvent(WE_SELCHANGE, _OnNoilaytinhtrungSelectChangeFnc);
	m_wndNoilaytinhtrung.SetEvent(WE_LOADDATA, _OnNoilaytinhtrungLoadDataFnc);
	//m_wndNoilaytinhtrung.SetEvent(WE_ADDNEW, _OnNoilaytinhtrungAddNewFnc);
	m_wndCachlaytinhtrung.SetEvent(WE_SELENDOK, _OnCachlaytinhtrungSelendokFnc);
	//m_wndCachlaytinhtrung.SetEvent(WE_SETFOCUS, _OnCachlaytinhtrungSetfocusFnc);
	//m_wndCachlaytinhtrung.SetEvent(WE_KILLFOCUS, _OnCachlaytinhtrungKillfocusFnc);
	m_wndCachlaytinhtrung.SetEvent(WE_SELCHANGE, _OnCachlaytinhtrungSelectChangeFnc);
	m_wndCachlaytinhtrung.SetEvent(WE_LOADDATA, _OnCachlaytinhtrungLoadDataFnc);
	//m_wndCachlaytinhtrung.SetEvent(WE_ADDNEW, _OnCachlaytinhtrungAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CIVFTheodoiDieutriNamDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndNgaylocrua.GetDlgCtrlID(), m_szNgaylocrua);
	DDX_TextEx(pDX, m_wndTglaymau.GetDlgCtrlID(), m_szTglaymau);
	DDX_TextEx(pDX, m_wndTgnhanmau.GetDlgCtrlID(), m_szTgnhanmau);
	DDX_TextEx(pDX, m_wndNguontinhtrung.GetDlgCtrlID(), m_szNguontinhtrungKey);
	DDX_TextEx(pDX, m_wndNgaykiengxuattinh.GetDlgCtrlID(), m_szNgaykiengxuattinh);
	DDX_TextEx(pDX, m_wndChatluongtinhtrungtruoclocrua.GetDlgCtrlID(), m_szChatluongtinhtrungtruoclocruaKey);
	DDX_TextEx(pDX, m_wndChatluongtinhtrungsaulocrua.GetDlgCtrlID(), m_szChatluongtinhtrungsaulocruaKey);
	DDX_TextEx(pDX, m_wndHinhthuctinhtrung.GetDlgCtrlID(), m_szHinhthuctinhtrungKey);
	DDX_TextEx(pDX, m_wndNoilaytinhtrung.GetDlgCtrlID(), m_szNoilaytinhtrungKey);
	DDX_TextEx(pDX, m_wndCachlaytinhtrung.GetDlgCtrlID(), m_szCachlaytinhtrungKey);

}
void CIVFTheodoiDieutriNamDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Ngaylocrua")] =  m_szNgaylocrua;
	m_jData[_T("Tglaymau")] =  m_szTglaymau;
	m_jData[_T("Tgnhanmau")] =  m_szTgnhanmau;
	m_jData[_T("Nguontinhtrung")] =  m_szNguontinhtrungKey;
	m_jData[_T("Ngaykiengxuattinh")] =  m_szNgaykiengxuattinh;
	m_jData[_T("Chatluongtinhtrungtruoclocrua")] =  m_szChatluongtinhtrungtruoclocruaKey;
	m_jData[_T("Chatluongtinhtrungsaulocrua")] =  m_szChatluongtinhtrungsaulocruaKey;
	m_jData[_T("Hinhthuctinhtrung")] =  m_szHinhthuctinhtrungKey;
	m_jData[_T("Noilaytinhtrung")] =  m_szNoilaytinhtrungKey;
	m_jData[_T("Cachlaytinhtrung")] =  m_szCachlaytinhtrungKey;
	}
	else
	{
			
	m_jData[_T("Ngaylocrua")].GetValue(m_szNgaylocrua);
	m_jData[_T("Tglaymau")].GetValue(m_szTglaymau);
	m_jData[_T("Tgnhanmau")].GetValue(m_szTgnhanmau);
	m_jData[_T("Nguontinhtrung")].GetValue(m_szNguontinhtrungKey);
	m_jData[_T("Ngaykiengxuattinh")].GetValue(m_szNgaykiengxuattinh);
	m_jData[_T("Chatluongtinhtrungtruoclocrua")].GetValue(m_szChatluongtinhtrungtruoclocruaKey);
	m_jData[_T("Chatluongtinhtrungsaulocrua")].GetValue(m_szChatluongtinhtrungsaulocruaKey);
	m_jData[_T("Hinhthuctinhtrung")].GetValue(m_szHinhthuctinhtrungKey);
	m_jData[_T("Noilaytinhtrung")].GetValue(m_szNoilaytinhtrungKey);
	m_jData[_T("Cachlaytinhtrung")].GetValue(m_szCachlaytinhtrungKey);
	}

}
void CIVFTheodoiDieutriNamDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFTheodoiDieutriNamDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFTheodoiDieutriNamDialog::SetDefaultValues(){

	m_szNgaylocrua.Empty();
	m_szTglaymau.Empty();
	m_szTgnhanmau.Empty();
	m_szNguontinhtrungKey.Empty();
	m_szNgaykiengxuattinh.Empty();
	m_szChatluongtinhtrungtruoclocruaKey.Empty();
	m_szChatluongtinhtrungsaulocruaKey.Empty();
	m_szHinhthuctinhtrungKey.Empty();
	m_szNoilaytinhtrungKey.Empty();
	m_szCachlaytinhtrungKey.Empty();

}
int CIVFTheodoiDieutriNamDialog::SetMode(int nMode){
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
/*void CIVFTheodoiDieutriNamDialog::OnNgaylocruaChange(){
	
} */
/*void CIVFTheodoiDieutriNamDialog::OnNgaylocruaSetfocus(){
	
} */
/*void CIVFTheodoiDieutriNamDialog::OnNgaylocruaKillfocus(){
	
} */
int CIVFTheodoiDieutriNamDialog::OnNgaylocruaCheckValue(){
	return 0;
} 
/*void CIVFTheodoiDieutriNamDialog::OnTglaymauChange(){
	
} */
/*void CIVFTheodoiDieutriNamDialog::OnTglaymauSetfocus(){
	
} */
/*void CIVFTheodoiDieutriNamDialog::OnTglaymauKillfocus(){
	
} */
int CIVFTheodoiDieutriNamDialog::OnTglaymauCheckValue(){
	return 0;
} 
/*void CIVFTheodoiDieutriNamDialog::OnTgnhanmauChange(){
	
} */
/*void CIVFTheodoiDieutriNamDialog::OnTgnhanmauSetfocus(){
	
} */
/*void CIVFTheodoiDieutriNamDialog::OnTgnhanmauKillfocus(){
	
} */
int CIVFTheodoiDieutriNamDialog::OnTgnhanmauCheckValue(){
	return 0;
} 
void CIVFTheodoiDieutriNamDialog::OnNguontinhtrungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheodoiDieutriNamDialog::OnNguontinhtrungSelendok(){
	 
}
/*void CIVFTheodoiDieutriNamDialog::OnNguontinhtrungSetfocus(){
	
}*/
/*void CIVFTheodoiDieutriNamDialog::OnNguontinhtrungKillfocus(){
	
}*/
long CIVFTheodoiDieutriNamDialog::OnNguontinhtrungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNguontinhtrung.IsSearchKey() && !m_szNguontinhtrungKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNguontinhtrungKey
};
	m_wndNguontinhtrung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNguontinhtrung.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFTheodoiDieutriNamDialog::OnNguontinhtrungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFTheodoiDieutriNamDialog::OnNgaykiengxuattinhChange(){
	
} */
/*void CIVFTheodoiDieutriNamDialog::OnNgaykiengxuattinhSetfocus(){
	
} */
/*void CIVFTheodoiDieutriNamDialog::OnNgaykiengxuattinhKillfocus(){
	
} */
int CIVFTheodoiDieutriNamDialog::OnNgaykiengxuattinhCheckValue(){
	return 0;
} 
void CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungtruoclocruaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungtruoclocruaSelendok(){
	 
}
/*void CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungtruoclocruaSetfocus(){
	
}*/
/*void CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungtruoclocruaKillfocus(){
	
}*/
long CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungtruoclocruaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChatluongtinhtrungtruoclocrua.IsSearchKey() && !m_szChatluongtinhtrungtruoclocruaKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szChatluongtinhtrungtruoclocruaKey
};
	m_wndChatluongtinhtrungtruoclocrua.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChatluongtinhtrungtruoclocrua.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungtruoclocruaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungsaulocruaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungsaulocruaSelendok(){
	 
}
/*void CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungsaulocruaSetfocus(){
	
}*/
/*void CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungsaulocruaKillfocus(){
	
}*/
long CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungsaulocruaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChatluongtinhtrungsaulocrua.IsSearchKey() && !m_szChatluongtinhtrungsaulocruaKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szChatluongtinhtrungsaulocruaKey
};
	m_wndChatluongtinhtrungsaulocrua.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChatluongtinhtrungsaulocrua.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFTheodoiDieutriNamDialog::OnChatluongtinhtrungsaulocruaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFTheodoiDieutriNamDialog::OnHinhthuctinhtrungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheodoiDieutriNamDialog::OnHinhthuctinhtrungSelendok(){
	 
}
/*void CIVFTheodoiDieutriNamDialog::OnHinhthuctinhtrungSetfocus(){
	
}*/
/*void CIVFTheodoiDieutriNamDialog::OnHinhthuctinhtrungKillfocus(){
	
}*/
long CIVFTheodoiDieutriNamDialog::OnHinhthuctinhtrungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHinhthuctinhtrung.IsSearchKey() && !m_szHinhthuctinhtrungKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szHinhthuctinhtrungKey
};
	m_wndHinhthuctinhtrung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHinhthuctinhtrung.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFTheodoiDieutriNamDialog::OnHinhthuctinhtrungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFTheodoiDieutriNamDialog::OnNoilaytinhtrungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheodoiDieutriNamDialog::OnNoilaytinhtrungSelendok(){
	 
}
/*void CIVFTheodoiDieutriNamDialog::OnNoilaytinhtrungSetfocus(){
	
}*/
/*void CIVFTheodoiDieutriNamDialog::OnNoilaytinhtrungKillfocus(){
	
}*/
long CIVFTheodoiDieutriNamDialog::OnNoilaytinhtrungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNoilaytinhtrung.IsSearchKey() && !m_szNoilaytinhtrungKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNoilaytinhtrungKey
};
	m_wndNoilaytinhtrung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNoilaytinhtrung.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFTheodoiDieutriNamDialog::OnNoilaytinhtrungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFTheodoiDieutriNamDialog::OnCachlaytinhtrungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheodoiDieutriNamDialog::OnCachlaytinhtrungSelendok(){
	 
}
/*void CIVFTheodoiDieutriNamDialog::OnCachlaytinhtrungSetfocus(){
	
}*/
/*void CIVFTheodoiDieutriNamDialog::OnCachlaytinhtrungKillfocus(){
	
}*/
long CIVFTheodoiDieutriNamDialog::OnCachlaytinhtrungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCachlaytinhtrung.IsSearchKey() && !m_szCachlaytinhtrungKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCachlaytinhtrungKey
};
	m_wndCachlaytinhtrung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCachlaytinhtrung.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFTheodoiDieutriNamDialog::OnCachlaytinhtrungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFTheodoiDieutriNamDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheodoiDieutriNamDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFTheodoiDieutriNamDialog::OnAddIVFTheodoiDieutriNamDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFTheodoiDieutriNamDialog::OnEditIVFTheodoiDieutriNamDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFTheodoiDieutriNamDialog::OnDeleteIVFTheodoiDieutriNamDialog(){
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
 		OnCancelIVFTheodoiDieutriNamDialog();
 	}
	return 0;
}
int CIVFTheodoiDieutriNamDialog::OnSaveIVFTheodoiDieutriNamDialog(){
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
 		//OnIVFTheodoiDieutriNamDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFTheodoiDieutriNamDialog::OnCancelIVFTheodoiDieutriNamDialog(){
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
int CIVFTheodoiDieutriNamDialog::OnIVFTheodoiDieutriNamDialogListLoadData(){
	return 0;
}
