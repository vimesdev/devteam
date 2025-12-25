#include "IVFLabPhieuRaDialog.h"
#include "MainFrm.h"
/*static void _OnSophieuChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnSophieuChange();
} */
/*static void _OnSophieuSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnSophieuSetfocus();} */ 
/*static void _OnSophieuKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnSophieuKillfocus();
} */
static int _OnSophieuCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnSophieuCheckValue();
} 
/*static void _OnIdChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnIdChange();
} */
/*static void _OnIdSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnIdSetfocus();} */ 
/*static void _OnIdKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnIdKillfocus();
} */
static int _OnIdCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnIdCheckValue();
} 
/*static void _OnSohosoChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnSohosoChange();
} */
/*static void _OnSohosoSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnSohosoSetfocus();} */ 
/*static void _OnSohosoKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnSohosoKillfocus();
} */
static int _OnSohosoCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnSohosoCheckValue();
} 
/*static void _OnMabenhnhanChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnMabenhnhanChange();
} */
/*static void _OnMabenhnhanSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnMabenhnhanSetfocus();} */ 
/*static void _OnMabenhnhanKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnMabenhnhanKillfocus();
} */
static int _OnMabenhnhanCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnMabenhnhanCheckValue();
} 
/*static void _OnHovatenChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnHovatenChange();
} */
/*static void _OnHovatenSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnHovatenSetfocus();} */ 
/*static void _OnHovatenKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnHovatenKillfocus();
} */
static int _OnHovatenCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnHovatenCheckValue();
} 
/*static void _OnNgaysinhChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnNgaysinhChange();
} */
/*static void _OnNgaysinhSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnNgaysinhSetfocus();} */ 
/*static void _OnNgaysinhKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnNgaysinhKillfocus();
} */
static int _OnNgaysinhCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnNgaysinhCheckValue();
} 
static void _OnThungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuRaDialog* )pWnd)->OnThungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnThungSelendok();
}
/*static void _OnThungSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnThungKillfocus();
}*/
/*static void _OnThungKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnThungKillfocus();
}*/
static long _OnThungLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnThungLoadData();
}
/*static void _OnThungAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnThungAddNew();
}*/
static void _OnGiaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuRaDialog* )pWnd)->OnGiaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGiaSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnGiaSelendok();
}
/*static void _OnGiaSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnGiaKillfocus();
}*/
/*static void _OnGiaKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnGiaKillfocus();
}*/
static long _OnGiaLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnGiaLoadData();
}
/*static void _OnGiaAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnGiaAddNew();
}*/
static void _OnCassetteSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuRaDialog* )pWnd)->OnCassetteSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCassetteSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnCassetteSelendok();
}
/*static void _OnCassetteSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnCassetteKillfocus();
}*/
/*static void _OnCassetteKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnCassetteKillfocus();
}*/
static long _OnCassetteLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnCassetteLoadData();
}
/*static void _OnCassetteAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnCassetteAddNew();
}*/
static void _OnTopSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuRaDialog* )pWnd)->OnTopSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTopSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnTopSelendok();
}
/*static void _OnTopSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnTopKillfocus();
}*/
/*static void _OnTopKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnTopKillfocus();
}*/
static long _OnTopLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnTopLoadData();
}
/*static void _OnTopAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnTopAddNew();
}*/
static void _OnNguoithuchienSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuRaDialog* )pWnd)->OnNguoithuchienSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNguoithuchienSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnNguoithuchienSelendok();
}
/*static void _OnNguoithuchienSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnNguoithuchienKillfocus();
}*/
/*static void _OnNguoithuchienKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnNguoithuchienKillfocus();
}*/
static long _OnNguoithuchienLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnNguoithuchienLoadData();
}
/*static void _OnNguoithuchienAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnNguoithuchienAddNew();
}*/
/*static void _OnTgthuchienChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnTgthuchienChange();
} */
/*static void _OnTgthuchienSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnTgthuchienSetfocus();} */ 
/*static void _OnTgthuchienKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnTgthuchienKillfocus();
} */
static int _OnTgthuchienCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnTgthuchienCheckValue();
} 
static void _OnNguoichecklistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuRaDialog* )pWnd)->OnNguoichecklistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNguoichecklistSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnNguoichecklistSelendok();
}
/*static void _OnNguoichecklistSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnNguoichecklistKillfocus();
}*/
/*static void _OnNguoichecklistKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnNguoichecklistKillfocus();
}*/
static long _OnNguoichecklistLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnNguoichecklistLoadData();
}
/*static void _OnNguoichecklistAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnNguoichecklistAddNew();
}*/
/*static void _OnTgchecklistChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnTgchecklistChange();
} */
/*static void _OnTgchecklistSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnTgchecklistSetfocus();} */ 
/*static void _OnTgchecklistKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnTgchecklistKillfocus();
} */
static int _OnTgchecklistCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnTgchecklistCheckValue();
} 
static void _OnMoitruongraSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuRaDialog* )pWnd)->OnMoitruongraSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMoitruongraSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnMoitruongraSelendok();
}
/*static void _OnMoitruongraSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnMoitruongraKillfocus();
}*/
/*static void _OnMoitruongraKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnMoitruongraKillfocus();
}*/
static long _OnMoitruongraLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnMoitruongraLoadData();
}
/*static void _OnMoitruongraAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnMoitruongraAddNew();
}*/
static void _OnPhuongphapraSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuRaDialog* )pWnd)->OnPhuongphapraSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPhuongphapraSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnPhuongphapraSelendok();
}
/*static void _OnPhuongphapraSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnPhuongphapraKillfocus();
}*/
/*static void _OnPhuongphapraKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnPhuongphapraKillfocus();
}*/
static long _OnPhuongphapraLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnPhuongphapraLoadData();
}
/*static void _OnPhuongphapraAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnPhuongphapraAddNew();
}*/
static void _OnChatluongphoiSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuRaDialog* )pWnd)->OnChatluongphoiSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChatluongphoiSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnChatluongphoiSelendok();
}
/*static void _OnChatluongphoiSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnChatluongphoiKillfocus();
}*/
/*static void _OnChatluongphoiKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnChatluongphoiKillfocus();
}*/
static long _OnChatluongphoiLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnChatluongphoiLoadData();
}
/*static void _OnChatluongphoiAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnChatluongphoiAddNew();
}*/
static void _OnAHSelectFnc(CWnd *pWnd){
	 ((CIVFLabPhieuRaDialog*)pWnd)->OnAHSelect();
}
/*static void _OnGhichuChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnGhichuChange();
} */
/*static void _OnGhichuSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnGhichuSetfocus();} */ 
/*static void _OnGhichuKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuRaDialog *)pWnd)->OnGhichuKillfocus();
} */
static int _OnGhichuCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaDialog *)pWnd)->OnGhichuCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFLabPhieuRaDialog *pVw = (CIVFLabPhieuRaDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFLabPhieuRaDialog *pVw = (CIVFLabPhieuRaDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFLabPhieuRaDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuRaDialog*)pWnd)->OnAddIVFLabPhieuRaDialog();
} 
static int _OnEditIVFLabPhieuRaDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuRaDialog*)pWnd)->OnEditIVFLabPhieuRaDialog();
} 
static int _OnDeleteIVFLabPhieuRaDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuRaDialog*)pWnd)->OnDeleteIVFLabPhieuRaDialog();
} 
static int _OnSaveIVFLabPhieuRaDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuRaDialog*)pWnd)->OnSaveIVFLabPhieuRaDialog();
} 
static int _OnCancelIVFLabPhieuRaDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuRaDialog*)pWnd)->OnCancelIVFLabPhieuRaDialog();
} 
CIVFLabPhieuRaDialog::CIVFLabPhieuRaDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 545;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CIVFLabPhieuRaDialog::~CIVFLabPhieuRaDialog(){
}
void CIVFLabPhieuRaDialog::OnCreateComponents(){
	m_wndSophieu.Create(this,131, 4, 280, 29); 
	m_wndSophieuLabel.Create(this, _T("so_phieu"), 5, 5, 125, 30);
	m_wndIdLabel.Create(this, _T("id"), 285, 5, 405, 30);
	m_wndId.Create(this,410, 5, 530, 30); 
	m_wndSohosoLabel.Create(this, _T("so_ho_so"), 5, 35, 125, 60);
	m_wndSohoso.Create(this,130, 35, 280, 60); 
	m_wndMabenhnhanLabel.Create(this, _T("ma_benh_nhan"), 285, 35, 405, 60);
	m_wndMabenhnhan.Create(this,410, 35, 530, 60); 
	m_wndHovatenLabel.Create(this, _T("ho_va_ten"), 5, 65, 125, 90);
	m_wndHovaten.Create(this,130, 65, 530, 90); 
	m_wndNgaysinhLabel.Create(this, _T("ngay_sinh"), 5, 95, 125, 120);
	m_wndNgaysinh.Create(this,130, 95, 280, 120); 
	m_wndThungLabel.Create(this, _T("thung"), 5, 125, 125, 150);
	m_wndThung.Create(this,130, 125, 280, 150); 
	m_wndGiaLabel.Create(this, _T("gia"), 285, 125, 405, 150);
	m_wndGia.Create(this,410, 125, 530, 150); 
	m_wndCassetteLabel.Create(this, _T("cassette"), 5, 155, 125, 180);
	m_wndCassette.Create(this,130, 155, 280, 180); 
	m_wndTopLabel.Create(this, _T("top"), 285, 155, 405, 180);
	m_wndTop.Create(this,410, 155, 530, 180); 
	m_wndNguoithuchienLabel.Create(this, _T("nguoi_thuc_hien"), 5, 185, 125, 210);
	m_wndNguoithuchien.Create(this,130, 185, 280, 210); 
	m_wndTgthuchienLabel.Create(this, _T("tg_thuchien"), 285, 185, 405, 210);
	m_wndTgthuchien.Create(this,410, 185, 530, 210); 
	m_wndNguoichecklistLabel.Create(this, _T("nguoi_checklist"), 5, 215, 125, 240);
	m_wndNguoichecklist.Create(this,130, 215, 280, 240); 
	m_wndTgchecklistLabel.Create(this, _T("tg_checklist"), 285, 215, 405, 240);
	m_wndTgchecklist.Create(this,410, 215, 530, 240); 
	m_wndMoitruongraLabel.Create(this, _T("moi_truong_ra"), 5, 245, 125, 270);
	m_wndMoitruongra.Create(this,130, 245, 280, 270); 
	m_wndPhuongphapraLabel.Create(this, _T("phuong_phap_ra"), 285, 245, 405, 270);
	m_wndPhuongphapra.Create(this,410, 245, 530, 270); 
	m_wndChatluongphoiLabel.Create(this, _T("chat_luong_phoi"), 5, 275, 125, 300);
	m_wndChatluongphoi.Create(this,130, 275, 280, 300); 
	m_wndAH.Create(this, _T("AH"), 285, 275, 405, 300);
	m_wndGhichuLabel.Create(this, _T("ghi_chu"), 5, 305, 125, 330);
	m_wndGhichu.Create(this,130, 305, 530, 330); 
	m_wndSave.Create(this, _T("&Save"), 365, 335, 445, 360);
	m_wndClose.Create(this, _T("&Close"), 450, 335, 530, 360);

}
void CIVFLabPhieuRaDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSophieu.SetLimitText(15);
	m_wndSophieu.SetCheckValue(true);
	m_wndId.SetLimitText(22);
	m_wndId.SetCheckValue(true);
	m_wndSohoso.SetLimitText(22);
	m_wndSohoso.SetCheckValue(true);
	m_wndMabenhnhan.SetLimitText(35);
	m_wndMabenhnhan.SetCheckValue(true);
	m_wndHovaten.SetLimitText(65);
	m_wndHovaten.SetCheckValue(true);
	m_wndNgaysinh.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgaysinh.SetCheckValue(true);
	m_wndThung.SetCheckValue(true);
	m_wndThung.LimitText(22);
	m_wndGia.SetCheckValue(true);
	m_wndGia.LimitText(20);
	m_wndCassette.SetCheckValue(true);
	m_wndCassette.LimitText(20);
	m_wndTop.SetCheckValue(true);
	m_wndTop.LimitText(22);
	m_wndNguoithuchien.SetCheckValue(true);
	m_wndNguoithuchien.LimitText(15);
	m_wndTgthuchien.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTgthuchien.SetCheckValue(true);
	m_wndNguoichecklist.SetCheckValue(true);
	m_wndNguoichecklist.LimitText(15);
	m_wndTgchecklist.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTgchecklist.SetCheckValue(true);
	m_wndMoitruongra.SetCheckValue(true);
	m_wndMoitruongra.LimitText(20);
	m_wndPhuongphapra.SetCheckValue(true);
	m_wndPhuongphapra.LimitText(20);
	m_wndChatluongphoi.SetCheckValue(true);
	m_wndChatluongphoi.LimitText(3);
	m_wndGhichu.SetLimitText(254);
	m_wndGhichu.SetCheckValue(true);


	m_wndThung.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndThung.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndGia.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGia.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCassette.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCassette.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTop.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTop.InsertColumn(1, _T("Name"), CFMT_TEXT, 120);


	m_wndNguoithuchien.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNguoithuchien.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNguoichecklist.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNguoichecklist.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMoitruongra.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMoitruongra.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPhuongphapra.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPhuongphapra.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndChatluongphoi.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndChatluongphoi.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_ivf_phieuraTbl.SetTableName(_T("ivf_phieura"));
	m_ivf_phieuraTbl.AddField(_T("ID_MAPHIEU"), dfLong); 
	m_ivf_phieuraTbl.AddField(_T("SO_PHIEU"), dfText, 15); 
	m_ivf_phieuraTbl.AddField(_T("NGAY_TAO"), dfDateTime); 
	m_ivf_phieuraTbl.AddField(_T("NGUOI_TAO"), dfText, 15); 
	m_ivf_phieuraTbl.AddField(_T("NGAY_CAPNHAT"), dfDateTime); 
	m_ivf_phieuraTbl.AddField(_T("NGUOI_CAPNHAT"), dfText, 15); 
	m_ivf_phieuraTbl.AddField(_T("TRANG_THAI"), dfText, 1); 
	m_ivf_phieuraTbl.AddField(_T("ID_MAKHO"), dfLong); 
	m_ivf_phieuraTbl.AddField(_T("ID_MAPHONG"), dfLong); 
	m_ivf_phieuraTbl.AddField(_T("ID_MATHUNG"), dfLong); 
	m_ivf_phieuraTbl.AddField(_T("ID_GIATRU"), dfText, 20); 
	m_ivf_phieuraTbl.AddField(_T("ID_CASSETTE"), dfText, 20); 
	m_ivf_phieuraTbl.AddField(_T("TOP"), dfLong); 
	m_ivf_phieuraTbl.AddField(_T("NGUOI_THUCHIEN"), dfText, 15); 
	m_ivf_phieuraTbl.AddField(_T("TG_THUCHIEN"), dfDateTime); 
	m_ivf_phieuraTbl.AddField(_T("NGUOI_CHECKLIST"), dfText, 15); 
	m_ivf_phieuraTbl.AddField(_T("TG_CHECKLIST"), dfDateTime); 
	m_ivf_phieuraTbl.AddField(_T("MOITRUONG_RA"), dfText, 20); 
	m_ivf_phieuraTbl.AddField(_T("PHUONGPHAP_RA"), dfText, 20); 
	m_ivf_phieuraTbl.AddField(_T("CHATLUONG_PHOI"), dfText, 3); 
	m_ivf_phieuraTbl.AddField(_T("AH"), dfText, 1); 
	m_ivf_phieuraTbl.AddField(_T("DOCNO"), dfLong); 
	m_ivf_phieuraTbl.AddField(_T("HOVATEN"), dfText, 65); 
	m_ivf_phieuraTbl.AddField(_T("NGAYSINH"), dfDate); 
	m_ivf_phieuraTbl.AddField(_T("GHI_CHU"), dfText, 254); 

}
void CIVFLabPhieuRaDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSophieu.SetEvent(WE_CHANGE, _OnSophieuChangeFnc);
	//m_wndSophieu.SetEvent(WE_SETFOCUS, _OnSophieuSetfocusFnc);
	//m_wndSophieu.SetEvent(WE_KILLFOCUS, _OnSophieuKillfocusFnc);
	m_wndSophieu.SetEvent(WE_CHECKVALUE, _OnSophieuCheckValueFnc);
	//m_wndId.SetEvent(WE_CHANGE, _OnIdChangeFnc);
	//m_wndId.SetEvent(WE_SETFOCUS, _OnIdSetfocusFnc);
	//m_wndId.SetEvent(WE_KILLFOCUS, _OnIdKillfocusFnc);
	m_wndId.SetEvent(WE_CHECKVALUE, _OnIdCheckValueFnc);
	//m_wndSohoso.SetEvent(WE_CHANGE, _OnSohosoChangeFnc);
	//m_wndSohoso.SetEvent(WE_SETFOCUS, _OnSohosoSetfocusFnc);
	//m_wndSohoso.SetEvent(WE_KILLFOCUS, _OnSohosoKillfocusFnc);
	m_wndSohoso.SetEvent(WE_CHECKVALUE, _OnSohosoCheckValueFnc);
	//m_wndMabenhnhan.SetEvent(WE_CHANGE, _OnMabenhnhanChangeFnc);
	//m_wndMabenhnhan.SetEvent(WE_SETFOCUS, _OnMabenhnhanSetfocusFnc);
	//m_wndMabenhnhan.SetEvent(WE_KILLFOCUS, _OnMabenhnhanKillfocusFnc);
	m_wndMabenhnhan.SetEvent(WE_CHECKVALUE, _OnMabenhnhanCheckValueFnc);
	//m_wndHovaten.SetEvent(WE_CHANGE, _OnHovatenChangeFnc);
	//m_wndHovaten.SetEvent(WE_SETFOCUS, _OnHovatenSetfocusFnc);
	//m_wndHovaten.SetEvent(WE_KILLFOCUS, _OnHovatenKillfocusFnc);
	m_wndHovaten.SetEvent(WE_CHECKVALUE, _OnHovatenCheckValueFnc);
	//m_wndNgaysinh.SetEvent(WE_CHANGE, _OnNgaysinhChangeFnc);
	//m_wndNgaysinh.SetEvent(WE_SETFOCUS, _OnNgaysinhSetfocusFnc);
	//m_wndNgaysinh.SetEvent(WE_KILLFOCUS, _OnNgaysinhKillfocusFnc);
	m_wndNgaysinh.SetEvent(WE_CHECKVALUE, _OnNgaysinhCheckValueFnc);
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
	m_wndTop.SetEvent(WE_SELENDOK, _OnTopSelendokFnc);
	//m_wndTop.SetEvent(WE_SETFOCUS, _OnTopSetfocusFnc);
	//m_wndTop.SetEvent(WE_KILLFOCUS, _OnTopKillfocusFnc);
	m_wndTop.SetEvent(WE_SELCHANGE, _OnTopSelectChangeFnc);
	m_wndTop.SetEvent(WE_LOADDATA, _OnTopLoadDataFnc);
	//m_wndTop.SetEvent(WE_ADDNEW, _OnTopAddNewFnc);
	m_wndNguoithuchien.SetEvent(WE_SELENDOK, _OnNguoithuchienSelendokFnc);
	//m_wndNguoithuchien.SetEvent(WE_SETFOCUS, _OnNguoithuchienSetfocusFnc);
	//m_wndNguoithuchien.SetEvent(WE_KILLFOCUS, _OnNguoithuchienKillfocusFnc);
	m_wndNguoithuchien.SetEvent(WE_SELCHANGE, _OnNguoithuchienSelectChangeFnc);
	m_wndNguoithuchien.SetEvent(WE_LOADDATA, _OnNguoithuchienLoadDataFnc);
	//m_wndNguoithuchien.SetEvent(WE_ADDNEW, _OnNguoithuchienAddNewFnc);
	//m_wndTgthuchien.SetEvent(WE_CHANGE, _OnTgthuchienChangeFnc);
	//m_wndTgthuchien.SetEvent(WE_SETFOCUS, _OnTgthuchienSetfocusFnc);
	//m_wndTgthuchien.SetEvent(WE_KILLFOCUS, _OnTgthuchienKillfocusFnc);
	m_wndTgthuchien.SetEvent(WE_CHECKVALUE, _OnTgthuchienCheckValueFnc);
	m_wndNguoichecklist.SetEvent(WE_SELENDOK, _OnNguoichecklistSelendokFnc);
	//m_wndNguoichecklist.SetEvent(WE_SETFOCUS, _OnNguoichecklistSetfocusFnc);
	//m_wndNguoichecklist.SetEvent(WE_KILLFOCUS, _OnNguoichecklistKillfocusFnc);
	m_wndNguoichecklist.SetEvent(WE_SELCHANGE, _OnNguoichecklistSelectChangeFnc);
	m_wndNguoichecklist.SetEvent(WE_LOADDATA, _OnNguoichecklistLoadDataFnc);
	//m_wndNguoichecklist.SetEvent(WE_ADDNEW, _OnNguoichecklistAddNewFnc);
	//m_wndTgchecklist.SetEvent(WE_CHANGE, _OnTgchecklistChangeFnc);
	//m_wndTgchecklist.SetEvent(WE_SETFOCUS, _OnTgchecklistSetfocusFnc);
	//m_wndTgchecklist.SetEvent(WE_KILLFOCUS, _OnTgchecklistKillfocusFnc);
	m_wndTgchecklist.SetEvent(WE_CHECKVALUE, _OnTgchecklistCheckValueFnc);
	m_wndMoitruongra.SetEvent(WE_SELENDOK, _OnMoitruongraSelendokFnc);
	//m_wndMoitruongra.SetEvent(WE_SETFOCUS, _OnMoitruongraSetfocusFnc);
	//m_wndMoitruongra.SetEvent(WE_KILLFOCUS, _OnMoitruongraKillfocusFnc);
	m_wndMoitruongra.SetEvent(WE_SELCHANGE, _OnMoitruongraSelectChangeFnc);
	m_wndMoitruongra.SetEvent(WE_LOADDATA, _OnMoitruongraLoadDataFnc);
	//m_wndMoitruongra.SetEvent(WE_ADDNEW, _OnMoitruongraAddNewFnc);
	m_wndPhuongphapra.SetEvent(WE_SELENDOK, _OnPhuongphapraSelendokFnc);
	//m_wndPhuongphapra.SetEvent(WE_SETFOCUS, _OnPhuongphapraSetfocusFnc);
	//m_wndPhuongphapra.SetEvent(WE_KILLFOCUS, _OnPhuongphapraKillfocusFnc);
	m_wndPhuongphapra.SetEvent(WE_SELCHANGE, _OnPhuongphapraSelectChangeFnc);
	m_wndPhuongphapra.SetEvent(WE_LOADDATA, _OnPhuongphapraLoadDataFnc);
	//m_wndPhuongphapra.SetEvent(WE_ADDNEW, _OnPhuongphapraAddNewFnc);
	m_wndChatluongphoi.SetEvent(WE_SELENDOK, _OnChatluongphoiSelendokFnc);
	//m_wndChatluongphoi.SetEvent(WE_SETFOCUS, _OnChatluongphoiSetfocusFnc);
	//m_wndChatluongphoi.SetEvent(WE_KILLFOCUS, _OnChatluongphoiKillfocusFnc);
	m_wndChatluongphoi.SetEvent(WE_SELCHANGE, _OnChatluongphoiSelectChangeFnc);
	m_wndChatluongphoi.SetEvent(WE_LOADDATA, _OnChatluongphoiLoadDataFnc);
	//m_wndChatluongphoi.SetEvent(WE_ADDNEW, _OnChatluongphoiAddNewFnc);
	m_wndAH.SetEvent(WE_CLICK, _OnAHSelectFnc);
	//m_wndGhichu.SetEvent(WE_CHANGE, _OnGhichuChangeFnc);
	//m_wndGhichu.SetEvent(WE_SETFOCUS, _OnGhichuSetfocusFnc);
	//m_wndGhichu.SetEvent(WE_KILLFOCUS, _OnGhichuKillfocusFnc);
	m_wndGhichu.SetEvent(WE_CHECKVALUE, _OnGhichuCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CIVFLabPhieuRaDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSophieu.GetDlgCtrlID(), m_nSophieu);
	DDX_Text(pDX, m_wndId.GetDlgCtrlID(), m_nId);
	DDX_Text(pDX, m_wndSohoso.GetDlgCtrlID(), m_nSohoso);
	DDX_Text(pDX, m_wndMabenhnhan.GetDlgCtrlID(), m_szMabenhnhan);
	DDX_Text(pDX, m_wndHovaten.GetDlgCtrlID(), m_szHovaten);
	DDX_TextEx(pDX, m_wndNgaysinh.GetDlgCtrlID(), m_szNgaysinh);
	DDX_TextEx(pDX, m_wndThung.GetDlgCtrlID(), m_szThungKey);
	DDX_TextEx(pDX, m_wndGia.GetDlgCtrlID(), m_szGiaKey);
	DDX_TextEx(pDX, m_wndCassette.GetDlgCtrlID(), m_szCassetteKey);
	DDX_TextEx(pDX, m_wndTop.GetDlgCtrlID(), m_szTopKey);
	DDX_TextEx(pDX, m_wndNguoithuchien.GetDlgCtrlID(), m_szNguoithuchienKey);
	DDX_TextEx(pDX, m_wndTgthuchien.GetDlgCtrlID(), m_szTgthuchien);
	DDX_TextEx(pDX, m_wndNguoichecklist.GetDlgCtrlID(), m_szNguoichecklistKey);
	DDX_TextEx(pDX, m_wndTgchecklist.GetDlgCtrlID(), m_szTgchecklist);
	DDX_TextEx(pDX, m_wndMoitruongra.GetDlgCtrlID(), m_szMoitruongraKey);
	DDX_TextEx(pDX, m_wndPhuongphapra.GetDlgCtrlID(), m_szPhuongphapraKey);
	DDX_TextEx(pDX, m_wndChatluongphoi.GetDlgCtrlID(), m_szChatluongphoiKey);
	DDX_Check(pDX, m_wndAH.GetDlgCtrlID(), m_bAH);
	DDX_Text(pDX, m_wndGhichu.GetDlgCtrlID(), m_szGhichu);

}
void CIVFLabPhieuRaDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Sophieu")] =  m_nSophieu;
	m_jData[_T("Id")] =  m_nId;
	m_jData[_T("Sohoso")] =  m_nSohoso;
	m_jData[_T("Mabenhnhan")] =  m_szMabenhnhan;
	m_jData[_T("Hovaten")] =  m_szHovaten;
	m_jData[_T("Ngaysinh")] =  m_szNgaysinh;
	m_jData[_T("Thung")] =  m_szThungKey;
	m_jData[_T("Gia")] =  m_szGiaKey;
	m_jData[_T("Cassette")] =  m_szCassetteKey;
	m_jData[_T("Top")] =  m_szTopKey;
	m_jData[_T("Nguoithuchien")] =  m_szNguoithuchienKey;
	m_jData[_T("Tgthuchien")] =  m_szTgthuchien;
	m_jData[_T("Nguoichecklist")] =  m_szNguoichecklistKey;
	m_jData[_T("Tgchecklist")] =  m_szTgchecklist;
	m_jData[_T("Moitruongra")] =  m_szMoitruongraKey;
	m_jData[_T("Phuongphapra")] =  m_szPhuongphapraKey;
	m_jData[_T("Chatluongphoi")] =  m_szChatluongphoiKey;
	m_jData[_T("AH")] =  m_bAH;
	m_jData[_T("Ghichu")] =  m_szGhichu;
	}
	else
	{
			
	m_jData[_T("Sophieu")].GetValue(m_nSophieu);
	m_jData[_T("Id")].GetValue(m_nId);
	m_jData[_T("Sohoso")].GetValue(m_nSohoso);
	m_jData[_T("Mabenhnhan")].GetValue(m_szMabenhnhan);
	m_jData[_T("Hovaten")].GetValue(m_szHovaten);
	m_jData[_T("Ngaysinh")].GetValue(m_szNgaysinh);
	m_jData[_T("Thung")].GetValue(m_szThungKey);
	m_jData[_T("Gia")].GetValue(m_szGiaKey);
	m_jData[_T("Cassette")].GetValue(m_szCassetteKey);
	m_jData[_T("Top")].GetValue(m_szTopKey);
	m_jData[_T("Nguoithuchien")].GetValue(m_szNguoithuchienKey);
	m_jData[_T("Tgthuchien")].GetValue(m_szTgthuchien);
	m_jData[_T("Nguoichecklist")].GetValue(m_szNguoichecklistKey);
	m_jData[_T("Tgchecklist")].GetValue(m_szTgchecklist);
	m_jData[_T("Moitruongra")].GetValue(m_szMoitruongraKey);
	m_jData[_T("Phuongphapra")].GetValue(m_szPhuongphapraKey);
	m_jData[_T("Chatluongphoi")].GetValue(m_szChatluongphoiKey);
	m_jData[_T("AH")].GetValue(m_bAH);
	m_jData[_T("Ghichu")].GetValue(m_szGhichu);
	}

}
void CIVFLabPhieuRaDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ID_MAPHIEU"), m_nId);
	rs.GetValue(_T("SO_PHIEU"), m_nSophieu);
	rs.GetValue(_T("ID_MATHUNG"), m_szThungKey);
	rs.GetValue(_T("ID_GIATRU"), m_szGiaKey);
	rs.GetValue(_T("ID_CASSETTE"), m_szCassetteKey);
	rs.GetValue(_T("TOP"), m_szTopKey);
	rs.GetValue(_T("NGUOI_THUCHIEN"), m_szNguoithuchienKey);
	rs.GetValue(_T("TG_THUCHIEN"), m_szTgthuchien);
	rs.GetValue(_T("NGUOI_CHECKLIST"), m_szNguoichecklistKey);
	rs.GetValue(_T("TG_CHECKLIST"), m_szTgchecklist);
	rs.GetValue(_T("MOITRUONG_RA"), m_szMoitruongraKey);
	rs.GetValue(_T("PHUONGPHAP_RA"), m_szPhuongphapraKey);
	rs.GetValue(_T("CHATLUONG_PHOI"), m_szChatluongphoiKey);
	rs.GetValue(_T("AH"), m_bAH);
	rs.GetValue(_T("DOCNO"), m_nSohoso);
	rs.GetValue(_T("HOVATEN"), m_szHovaten);
	rs.GetValue(_T("NGAYSINH"), m_szNgaysinh);
	rs.GetValue(_T("GHI_CHU"), m_szGhichu);

}
void CIVFLabPhieuRaDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_ivf_phieuraTbl.SetValue(_T("ID_MAPHIEU"), m_nId);
	m_ivf_phieuraTbl.SetValue(_T("SO_PHIEU"), m_nSophieu);
	m_ivf_phieuraTbl.SetValue(_T("ID_MATHUNG"), m_szThungKey);
	m_ivf_phieuraTbl.SetValue(_T("ID_GIATRU"), m_szGiaKey);
	m_ivf_phieuraTbl.SetValue(_T("ID_CASSETTE"), m_szCassetteKey);
	m_ivf_phieuraTbl.SetValue(_T("TOP"), m_szTopKey);
	m_ivf_phieuraTbl.SetValue(_T("NGUOI_THUCHIEN"), m_szNguoithuchienKey);
	m_ivf_phieuraTbl.SetValue(_T("TG_THUCHIEN"), m_szTgthuchien);
	m_ivf_phieuraTbl.SetValue(_T("NGUOI_CHECKLIST"), m_szNguoichecklistKey);
	m_ivf_phieuraTbl.SetValue(_T("TG_CHECKLIST"), m_szTgchecklist);
	m_ivf_phieuraTbl.SetValue(_T("MOITRUONG_RA"), m_szMoitruongraKey);
	m_ivf_phieuraTbl.SetValue(_T("PHUONGPHAP_RA"), m_szPhuongphapraKey);
	m_ivf_phieuraTbl.SetValue(_T("CHATLUONG_PHOI"), m_szChatluongphoiKey);
	m_ivf_phieuraTbl.SetValue(_T("AH"), m_bAH);
	m_ivf_phieuraTbl.SetValue(_T("DOCNO"), m_nSohoso);
	m_ivf_phieuraTbl.SetValue(_T("HOVATEN"), m_szHovaten);
	m_ivf_phieuraTbl.SetValue(_T("NGAYSINH"), m_szNgaysinh);
	m_ivf_phieuraTbl.SetValue(_T("GHI_CHU"), m_szGhichu);

}
void CIVFLabPhieuRaDialog::SetDefaultValues(){

	m_nSophieu=0;
	m_nId=0;
	m_nSohoso=0;
	m_szMabenhnhan.Empty();
	m_szHovaten.Empty();
	m_szNgaysinh.Empty();
	m_szThungKey.Empty();
	m_szGiaKey.Empty();
	m_szCassetteKey.Empty();
	m_szTopKey.Empty();
	m_szNguoithuchienKey.Empty();
	m_szTgthuchien.Empty();
	m_szNguoichecklistKey.Empty();
	m_szTgchecklist.Empty();
	m_szMoitruongraKey.Empty();
	m_szPhuongphapraKey.Empty();
	m_szChatluongphoiKey.Empty();
	m_bAH=FALSE;
	m_szGhichu.Empty();

}
int CIVFLabPhieuRaDialog::SetMode(int nMode){
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
/*void CIVFLabPhieuRaDialog::OnSophieuChange(){
	
} */
/*void CIVFLabPhieuRaDialog::OnSophieuSetfocus(){
	
} */
/*void CIVFLabPhieuRaDialog::OnSophieuKillfocus(){
	
} */
int CIVFLabPhieuRaDialog::OnSophieuCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuRaDialog::OnIdChange(){
	
} */
/*void CIVFLabPhieuRaDialog::OnIdSetfocus(){
	
} */
/*void CIVFLabPhieuRaDialog::OnIdKillfocus(){
	
} */
int CIVFLabPhieuRaDialog::OnIdCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuRaDialog::OnSohosoChange(){
	
} */
/*void CIVFLabPhieuRaDialog::OnSohosoSetfocus(){
	
} */
/*void CIVFLabPhieuRaDialog::OnSohosoKillfocus(){
	
} */
int CIVFLabPhieuRaDialog::OnSohosoCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuRaDialog::OnMabenhnhanChange(){
	
} */
/*void CIVFLabPhieuRaDialog::OnMabenhnhanSetfocus(){
	
} */
/*void CIVFLabPhieuRaDialog::OnMabenhnhanKillfocus(){
	
} */
int CIVFLabPhieuRaDialog::OnMabenhnhanCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuRaDialog::OnHovatenChange(){
	
} */
/*void CIVFLabPhieuRaDialog::OnHovatenSetfocus(){
	
} */
/*void CIVFLabPhieuRaDialog::OnHovatenKillfocus(){
	
} */
int CIVFLabPhieuRaDialog::OnHovatenCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuRaDialog::OnNgaysinhChange(){
	
} */
/*void CIVFLabPhieuRaDialog::OnNgaysinhSetfocus(){
	
} */
/*void CIVFLabPhieuRaDialog::OnNgaysinhKillfocus(){
	
} */
int CIVFLabPhieuRaDialog::OnNgaysinhCheckValue(){
	return 0;
} 
void CIVFLabPhieuRaDialog::OnThungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuRaDialog::OnThungSelendok(){
	 
}
/*void CIVFLabPhieuRaDialog::OnThungSetfocus(){
	
}*/
/*void CIVFLabPhieuRaDialog::OnThungKillfocus(){
	
}*/
long CIVFLabPhieuRaDialog::OnThungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CIVFLabPhieuRaDialog::OnThungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuRaDialog::OnGiaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuRaDialog::OnGiaSelendok(){
	 
}
/*void CIVFLabPhieuRaDialog::OnGiaSetfocus(){
	
}*/
/*void CIVFLabPhieuRaDialog::OnGiaKillfocus(){
	
}*/
long CIVFLabPhieuRaDialog::OnGiaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CIVFLabPhieuRaDialog::OnGiaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuRaDialog::OnCassetteSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuRaDialog::OnCassetteSelendok(){
	 
}
/*void CIVFLabPhieuRaDialog::OnCassetteSetfocus(){
	
}*/
/*void CIVFLabPhieuRaDialog::OnCassetteKillfocus(){
	
}*/
long CIVFLabPhieuRaDialog::OnCassetteLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CIVFLabPhieuRaDialog::OnCassetteAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuRaDialog::OnTopSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuRaDialog::OnTopSelendok(){
	 
}
/*void CIVFLabPhieuRaDialog::OnTopSetfocus(){
	
}*/
/*void CIVFLabPhieuRaDialog::OnTopKillfocus(){
	
}*/
long CIVFLabPhieuRaDialog::OnTopLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CIVFLabPhieuRaDialog::OnTopAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuRaDialog::OnNguoithuchienSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuRaDialog::OnNguoithuchienSelendok(){
	 
}
/*void CIVFLabPhieuRaDialog::OnNguoithuchienSetfocus(){
	
}*/
/*void CIVFLabPhieuRaDialog::OnNguoithuchienKillfocus(){
	
}*/
long CIVFLabPhieuRaDialog::OnNguoithuchienLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNguoithuchien.IsSearchKey() && !m_szNguoithuchienKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNguoithuchienKey
};
	m_wndNguoithuchien.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNguoithuchien.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuRaDialog::OnNguoithuchienAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFLabPhieuRaDialog::OnTgthuchienChange(){
	
} */
/*void CIVFLabPhieuRaDialog::OnTgthuchienSetfocus(){
	
} */
/*void CIVFLabPhieuRaDialog::OnTgthuchienKillfocus(){
	
} */
int CIVFLabPhieuRaDialog::OnTgthuchienCheckValue(){
	return 0;
} 
void CIVFLabPhieuRaDialog::OnNguoichecklistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuRaDialog::OnNguoichecklistSelendok(){
	 
}
/*void CIVFLabPhieuRaDialog::OnNguoichecklistSetfocus(){
	
}*/
/*void CIVFLabPhieuRaDialog::OnNguoichecklistKillfocus(){
	
}*/
long CIVFLabPhieuRaDialog::OnNguoichecklistLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNguoichecklist.IsSearchKey() && !m_szNguoichecklistKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNguoichecklistKey
};
	m_wndNguoichecklist.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNguoichecklist.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuRaDialog::OnNguoichecklistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFLabPhieuRaDialog::OnTgchecklistChange(){
	
} */
/*void CIVFLabPhieuRaDialog::OnTgchecklistSetfocus(){
	
} */
/*void CIVFLabPhieuRaDialog::OnTgchecklistKillfocus(){
	
} */
int CIVFLabPhieuRaDialog::OnTgchecklistCheckValue(){
	return 0;
} 
void CIVFLabPhieuRaDialog::OnMoitruongraSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuRaDialog::OnMoitruongraSelendok(){
	 
}
/*void CIVFLabPhieuRaDialog::OnMoitruongraSetfocus(){
	
}*/
/*void CIVFLabPhieuRaDialog::OnMoitruongraKillfocus(){
	
}*/
long CIVFLabPhieuRaDialog::OnMoitruongraLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMoitruongra.IsSearchKey() && !m_szMoitruongraKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMoitruongraKey
};
	m_wndMoitruongra.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMoitruongra.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuRaDialog::OnMoitruongraAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuRaDialog::OnPhuongphapraSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuRaDialog::OnPhuongphapraSelendok(){
	 
}
/*void CIVFLabPhieuRaDialog::OnPhuongphapraSetfocus(){
	
}*/
/*void CIVFLabPhieuRaDialog::OnPhuongphapraKillfocus(){
	
}*/
long CIVFLabPhieuRaDialog::OnPhuongphapraLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPhuongphapra.IsSearchKey() && !m_szPhuongphapraKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPhuongphapraKey
};
	m_wndPhuongphapra.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPhuongphapra.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuRaDialog::OnPhuongphapraAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuRaDialog::OnChatluongphoiSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuRaDialog::OnChatluongphoiSelendok(){
	 
}
/*void CIVFLabPhieuRaDialog::OnChatluongphoiSetfocus(){
	
}*/
/*void CIVFLabPhieuRaDialog::OnChatluongphoiKillfocus(){
	
}*/
long CIVFLabPhieuRaDialog::OnChatluongphoiLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChatluongphoi.IsSearchKey() && !m_szChatluongphoiKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szChatluongphoiKey
};
	m_wndChatluongphoi.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChatluongphoi.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuRaDialog::OnChatluongphoiAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CIVFLabPhieuRaDialog::OnAHSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CIVFLabPhieuRaDialog::OnGhichuChange(){
	
} */
/*void CIVFLabPhieuRaDialog::OnGhichuSetfocus(){
	
} */
/*void CIVFLabPhieuRaDialog::OnGhichuKillfocus(){
	
} */
int CIVFLabPhieuRaDialog::OnGhichuCheckValue(){
	return 0;
} 
void CIVFLabPhieuRaDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuRaDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabPhieuRaDialog::OnAddIVFLabPhieuRaDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFLabPhieuRaDialog::OnEditIVFLabPhieuRaDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFLabPhieuRaDialog::OnDeleteIVFLabPhieuRaDialog(){
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
 		OnCancelIVFLabPhieuRaDialog();
 	}
	return 0;
}
int CIVFLabPhieuRaDialog::OnSaveIVFLabPhieuRaDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_ivf_phieuraTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_ivf_phieuraTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnIVFLabPhieuRaDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFLabPhieuRaDialog::OnCancelIVFLabPhieuRaDialog(){
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
int CIVFLabPhieuRaDialog::OnIVFLabPhieuRaDialogListLoadData(){
	return 0;
}
