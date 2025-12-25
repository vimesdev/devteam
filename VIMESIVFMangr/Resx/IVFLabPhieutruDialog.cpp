#include "IVFLabPhieuTruDialog.h"
#include "MainFrm.h"
/*static void _OnSophieuChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnSophieuChange();
} */
/*static void _OnSophieuSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnSophieuSetfocus();} */ 
/*static void _OnSophieuKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnSophieuKillfocus();
} */
static int _OnSophieuCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnSophieuCheckValue();
} 
/*static void _OnIdChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnIdChange();
} */
/*static void _OnIdSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnIdSetfocus();} */ 
/*static void _OnIdKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnIdKillfocus();
} */
static int _OnIdCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnIdCheckValue();
} 
/*static void _OnSohosoChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnSohosoChange();
} */
/*static void _OnSohosoSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnSohosoSetfocus();} */ 
/*static void _OnSohosoKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnSohosoKillfocus();
} */
static int _OnSohosoCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnSohosoCheckValue();
} 
/*static void _OnMabenhnhanChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnMabenhnhanChange();
} */
/*static void _OnMabenhnhanSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnMabenhnhanSetfocus();} */ 
/*static void _OnMabenhnhanKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnMabenhnhanKillfocus();
} */
static int _OnMabenhnhanCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnMabenhnhanCheckValue();
} 
/*static void _OnHovatenChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnHovatenChange();
} */
/*static void _OnHovatenSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnHovatenSetfocus();} */ 
/*static void _OnHovatenKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnHovatenKillfocus();
} */
static int _OnHovatenCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnHovatenCheckValue();
} 
/*static void _OnNgaysinhChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgaysinhChange();
} */
/*static void _OnNgaysinhSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgaysinhSetfocus();} */ 
/*static void _OnNgaysinhKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgaysinhKillfocus();
} */
static int _OnNgaysinhCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnNgaysinhCheckValue();
} 
/*static void _OnNgaychochutChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgaychochutChange();
} */
/*static void _OnNgaychochutSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgaychochutSetfocus();} */ 
/*static void _OnNgaychochutKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgaychochutKillfocus();
} */
static int _OnNgaychochutCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnNgaychochutCheckValue();
} 
/*static void _OnSoluongmauChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnSoluongmauChange();
} */
/*static void _OnSoluongmauSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnSoluongmauSetfocus();} */ 
/*static void _OnSoluongmauKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnSoluongmauKillfocus();
} */
static int _OnSoluongmauCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnSoluongmauCheckValue();
} 
static void _OnNgayphoiSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruDialog* )pWnd)->OnNgayphoiSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNgayphoiSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgayphoiSelendok();
}
/*static void _OnNgayphoiSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgayphoiKillfocus();
}*/
/*static void _OnNgayphoiKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgayphoiKillfocus();
}*/
static long _OnNgayphoiLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnNgayphoiLoadData();
}
/*static void _OnNgayphoiAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgayphoiAddNew();
}*/
/*static void _OnNgaydoinitoChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgaydoinitoChange();
} */
/*static void _OnNgaydoinitoSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgaydoinitoSetfocus();} */ 
/*static void _OnNgaydoinitoKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgaydoinitoKillfocus();
} */
static int _OnNgaydoinitoCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnNgaydoinitoCheckValue();
} 
static void _OnNoitiepnhanSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruDialog* )pWnd)->OnNoitiepnhanSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNoitiepnhanSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNoitiepnhanSelendok();
}
/*static void _OnNoitiepnhanSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNoitiepnhanKillfocus();
}*/
/*static void _OnNoitiepnhanKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNoitiepnhanKillfocus();
}*/
static long _OnNoitiepnhanLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnNoitiepnhanLoadData();
}
/*static void _OnNoitiepnhanAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNoitiepnhanAddNew();
}*/
/*static void _OnTgtiepnhanChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnTgtiepnhanChange();
} */
/*static void _OnTgtiepnhanSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnTgtiepnhanSetfocus();} */ 
/*static void _OnTgtiepnhanKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnTgtiepnhanKillfocus();
} */
static int _OnTgtiepnhanCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnTgtiepnhanCheckValue();
} 
static void _OnNguoiluutruSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruDialog* )pWnd)->OnNguoiluutruSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNguoiluutruSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNguoiluutruSelendok();
}
/*static void _OnNguoiluutruSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNguoiluutruKillfocus();
}*/
/*static void _OnNguoiluutruKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNguoiluutruKillfocus();
}*/
static long _OnNguoiluutruLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnNguoiluutruLoadData();
}
/*static void _OnNguoiluutruAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNguoiluutruAddNew();
}*/
/*static void _OnTgluuChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnTgluuChange();
} */
/*static void _OnTgluuSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnTgluuSetfocus();} */ 
/*static void _OnTgluuKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnTgluuKillfocus();
} */
static int _OnTgluuCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnTgluuCheckValue();
} 
static void _OnPhuongphaptruSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruDialog* )pWnd)->OnPhuongphaptruSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPhuongphaptruSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnPhuongphaptruSelendok();
}
/*static void _OnPhuongphaptruSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnPhuongphaptruKillfocus();
}*/
/*static void _OnPhuongphaptruKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnPhuongphaptruKillfocus();
}*/
static long _OnPhuongphaptruLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnPhuongphaptruLoadData();
}
/*static void _OnPhuongphaptruAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnPhuongphaptruAddNew();
}*/
static void _OnMoitruongtruSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruDialog* )pWnd)->OnMoitruongtruSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMoitruongtruSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnMoitruongtruSelendok();
}
/*static void _OnMoitruongtruSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnMoitruongtruKillfocus();
}*/
/*static void _OnMoitruongtruKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnMoitruongtruKillfocus();
}*/
static long _OnMoitruongtruLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnMoitruongtruLoadData();
}
/*static void _OnMoitruongtruAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnMoitruongtruAddNew();
}*/
static void _OnDungcuSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruDialog* )pWnd)->OnDungcuSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDungcuSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnDungcuSelendok();
}
/*static void _OnDungcuSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnDungcuKillfocus();
}*/
/*static void _OnDungcuKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnDungcuKillfocus();
}*/
static long _OnDungcuLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnDungcuLoadData();
}
/*static void _OnDungcuAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnDungcuAddNew();
}*/
static void _OnThungtruSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruDialog* )pWnd)->OnThungtruSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungtruSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnThungtruSelendok();
}
/*static void _OnThungtruSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnThungtruKillfocus();
}*/
/*static void _OnThungtruKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnThungtruKillfocus();
}*/
static long _OnThungtruLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnThungtruLoadData();
}
/*static void _OnThungtruAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnThungtruAddNew();
}*/
static void _OnGiatruSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuTruDialog* )pWnd)->OnGiatruSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGiatruSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnGiatruSelendok();
}
/*static void _OnGiatruSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnGiatruKillfocus();
}*/
/*static void _OnGiatruKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnGiatruKillfocus();
}*/
static long _OnGiatruLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnGiatruLoadData();
}
/*static void _OnGiatruAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnGiatruAddNew();
}*/
/*static void _OnNgayhethanChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgayhethanChange();
} */
/*static void _OnNgayhethanSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgayhethanSetfocus();} */ 
/*static void _OnNgayhethanKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnNgayhethanKillfocus();
} */
static int _OnNgayhethanCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnNgayhethanCheckValue();
} 
/*static void _OnGhichuChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnGhichuChange();
} */
/*static void _OnGhichuSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnGhichuSetfocus();} */ 
/*static void _OnGhichuKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog *)pWnd)->OnGhichuKillfocus();
} */
static int _OnGhichuCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog *)pWnd)->OnGhichuCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFLabPhieuTruDialog *pVw = (CIVFLabPhieuTruDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFLabPhieuTruDialog *pVw = (CIVFLabPhieuTruDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuTruDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFLabPhieuTruDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFLabPhieuTruDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddCassetteSelectFnc(CWnd *pWnd){
	CIVFLabPhieuTruDialog *pVw = (CIVFLabPhieuTruDialog *)pWnd;
	pVw->OnAddCassetteSelect();
} 
static int _OnAddIVFLabPhieuTruDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruDialog*)pWnd)->OnAddIVFLabPhieuTruDialog();
} 
static int _OnEditIVFLabPhieuTruDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruDialog*)pWnd)->OnEditIVFLabPhieuTruDialog();
} 
static int _OnDeleteIVFLabPhieuTruDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruDialog*)pWnd)->OnDeleteIVFLabPhieuTruDialog();
} 
static int _OnSaveIVFLabPhieuTruDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruDialog*)pWnd)->OnSaveIVFLabPhieuTruDialog();
} 
static int _OnCancelIVFLabPhieuTruDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuTruDialog*)pWnd)->OnCancelIVFLabPhieuTruDialog();
} 
CIVFLabPhieuTruDialog::CIVFLabPhieuTruDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CIVFLabPhieuTruDialog::~CIVFLabPhieuTruDialog(){
}
void CIVFLabPhieuTruDialog::OnCreateComponents(){
	m_wndSophieuLabel.Create(this, _T("so_phieu"), 5, 5, 125, 30);
	m_wndSophieu.Create(this,130, 5, 310, 30); 
	m_wndIdLabel.Create(this, _T("id"), 315, 5, 435, 30);
	m_wndId.Create(this,440, 5, 620, 30); 
	m_wndSohosoLabel.Create(this, _T("so_ho_so"), 5, 35, 125, 60);
	m_wndSohoso.Create(this,130, 35, 310, 60); 
	m_wndMabenhnhanLabel.Create(this, _T("ma_benh_nhan"), 315, 35, 435, 60);
	m_wndMabenhnhan.Create(this,440, 35, 620, 60); 
	m_wndHovatenLabel.Create(this, _T("ho_va_ten"), 5, 65, 125, 90);
	m_wndHovaten.Create(this,130, 65, 310, 90); 
	m_wndNgaysinhLabel.Create(this, _T("ngay_sinh"), 315, 65, 435, 90);
	m_wndNgaysinh.Create(this,440, 65, 620, 90); 
	m_wndNgaychochutLabel.Create(this, _T("ngay_choc_hut"), 5, 95, 125, 120);
	m_wndNgaychochut.Create(this,130, 95, 310, 120); 
	m_wndSoluongmauLabel.Create(this, _T("so_luong_mau"), 315, 95, 435, 120);
	m_wndSoluongmau.Create(this,440, 95, 620, 120); 
	m_wndNgayphoiLabel.Create(this, _T("ngay_phoi"), 5, 125, 125, 150);
	m_wndNgayphoi.Create(this,130, 125, 310, 150); 
	m_wndNgaydoinitoLabel.Create(this, _T("ngaydoi_nito"), 315, 125, 435, 150);
	m_wndNgaydoinito.Create(this,440, 125, 620, 150); 
	m_wndNoitiepnhanLabel.Create(this, _T("noi_tiepnhan"), 5, 155, 125, 180);
	m_wndNoitiepnhan.Create(this,130, 155, 310, 180); 
	m_wndTgtiepnhanLabel.Create(this, _T("tg_tiepnhan"), 315, 155, 435, 180);
	m_wndTgtiepnhan.Create(this,440, 155, 620, 180); 
	m_wndNguoiluutruLabel.Create(this, _T("nguoi_luutru"), 5, 185, 125, 210);
	m_wndNguoiluutru.Create(this,130, 185, 310, 210); 
	m_wndTgluuLabel.Create(this, _T("tg_luu"), 315, 185, 435, 210);
	m_wndTgluu.Create(this,440, 185, 620, 210); 
	m_wndPhuongphaptruLabel.Create(this, _T("phuongphap_tru"), 5, 215, 125, 240);
	m_wndPhuongphaptru.Create(this,130, 215, 310, 240); 
	m_wndMoitruongtruLabel.Create(this, _T("moitruong_tru"), 315, 215, 435, 240);
	m_wndMoitruongtru.Create(this,440, 215, 620, 240); 
	m_wndDungcuLabel.Create(this, _T("dung_cu"), 5, 245, 125, 270);
	m_wndDungcu.Create(this,130, 245, 310, 270); 
	m_wndThungtruLabel.Create(this, _T("thung_tru"), 315, 245, 435, 270);
	m_wndThungtru.Create(this,440, 245, 620, 270); 
	m_wndGiatruLabel.Create(this, _T("gia_tru"), 5, 275, 125, 300);
	m_wndGiatru.Create(this,130, 275, 310, 300); 
	m_wndNgayhethanLabel.Create(this, _T("ngay_het_han"), 315, 275, 435, 300);
	m_wndNgayhethan.Create(this,440, 275, 620, 300); 
	m_wndGhichuLabel.Create(this, _T("ghi_chu"), 5, 305, 125, 330);
	m_wndGhichu.Create(this,130, 305, 620, 330); 
	m_wndSave.Create(this, _T("&Save"), 451, 485, 531, 510);
	m_wndClose.Create(this, _T("&Close"), 536, 485, 616, 510);
	m_wndList.Create(this,5, 335, 620, 480); 
	m_wndAddCassette.Create(this, _T("&Add cassette"), 4, 485, 104, 510);

}
void CIVFLabPhieuTruDialog::OnInitializeComponents(){
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
	m_wndNgaychochut.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgaychochut.SetCheckValue(true);
	m_wndSoluongmau.SetLimitText(16);
	m_wndSoluongmau.SetCheckValue(true);
	m_wndNgayphoi.SetCheckValue(true);
	m_wndNgayphoi.LimitText(35);
	m_wndNgaydoinito.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgaydoinito.SetCheckValue(true);
	m_wndNoitiepnhan.SetCheckValue(true);
	m_wndNoitiepnhan.LimitText(15);
	m_wndTgtiepnhan.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTgtiepnhan.SetCheckValue(true);
	m_wndNguoiluutru.SetCheckValue(true);
	m_wndNguoiluutru.LimitText(15);
	m_wndTgluu.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTgluu.SetCheckValue(true);
	m_wndPhuongphaptru.SetCheckValue(true);
	m_wndPhuongphaptru.LimitText(20);
	m_wndMoitruongtru.SetCheckValue(true);
	m_wndMoitruongtru.LimitText(20);
	m_wndDungcu.SetCheckValue(true);
	m_wndDungcu.LimitText(22);
	m_wndThungtru.SetCheckValue(true);
	m_wndThungtru.LimitText(22);
	m_wndGiatru.SetCheckValue(true);
	m_wndGiatru.LimitText(20);
	m_wndNgayhethan.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgayhethan.SetCheckValue(true);
	m_wndGhichu.SetLimitText(35);
	m_wndGhichu.SetCheckValue(true);


	m_wndNgayphoi.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNgayphoi.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNoitiepnhan.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNoitiepnhan.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNguoiluutru.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNguoiluutru.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPhuongphaptru.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPhuongphaptru.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMoitruongtru.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMoitruongtru.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDungcu.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDungcu.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndThungtru.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndThungtru.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndGiatru.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGiatru.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Cassette"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Top"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(2, _T("Mau top"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(3, _T("So phoi"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(4, _T("Chat luong"), CFMT_TEXT, 120);
	m_ivf_phieutruTbl.SetTableName(_T("ivf_phieutru"));
	m_ivf_phieutruTbl.AddField(_T("ID_MAPHIEU"), dfLong); 
	m_ivf_phieutruTbl.AddField(_T("SO_PHIEU"), dfText, 15); 
	m_ivf_phieutruTbl.AddField(_T("NGAY_TAO"), dfDateTime); 
	m_ivf_phieutruTbl.AddField(_T("NGUOI_TAO"), dfText, 15); 
	m_ivf_phieutruTbl.AddField(_T("NGAY_CAPNHAT"), dfDateTime); 
	m_ivf_phieutruTbl.AddField(_T("NGUOI_CAPNHAT"), dfText, 15); 
	m_ivf_phieutruTbl.AddField(_T("TRANG_THAI"), dfText, 1); 
	m_ivf_phieutruTbl.AddField(_T("ID_MAKHO"), dfLong); 
	m_ivf_phieutruTbl.AddField(_T("ID_MAPHONG"), dfLong); 
	m_ivf_phieutruTbl.AddField(_T("ID_MATHUNG"), dfLong); 
	m_ivf_phieutruTbl.AddField(_T("ID_GIATRU"), dfText, 20); 
	m_ivf_phieutruTbl.AddField(_T("ID_CASSETTE"), dfText, 20); 
	m_ivf_phieutruTbl.AddField(_T("TOP"), dfLong); 
	m_ivf_phieutruTbl.AddField(_T("MAU"), dfText, 15); 
	m_ivf_phieutruTbl.AddField(_T("NOI_TIEPNHAN"), dfText, 15); 
	m_ivf_phieutruTbl.AddField(_T("TG_TIEPNHAN"), dfDateTime); 
	m_ivf_phieutruTbl.AddField(_T("NGUOI_LUUTRU"), dfText, 15); 
	m_ivf_phieutruTbl.AddField(_T("TG_LUU"), dfDateTime); 
	m_ivf_phieutruTbl.AddField(_T("MOITRUONG_TRU"), dfText, 20); 
	m_ivf_phieutruTbl.AddField(_T("PHUONGPHAP_TRU"), dfText, 20); 
	m_ivf_phieutruTbl.AddField(_T("DOCNO"), dfLong); 
	m_ivf_phieutruTbl.AddField(_T("HOVATEN"), dfText, 65); 
	m_ivf_phieutruTbl.AddField(_T("NGAYSINH"), dfDate); 
	m_ivf_phieutruTbl.AddField(_T("SOPHOI"), dfLong); 
	m_ivf_phieutruTbl.AddField(_T("NGAYCHOCHUT"), dfDate); 
	m_ivf_phieutruTbl.AddField(_T("NGAYDO_NITO"), dfDate); 
	m_ivf_phieutruTbl.AddField(_T("GHI_CHU"), dfText, 254); 
	m_ivf_phieutruTbl.AddField(_T("ID_MADUNGCU"), dfLong); 
	m_ivf_phieutruTbl.AddField(_T("ID_LOAIDUNGCU"), dfText, 3); 
	m_ivf_phieutruTbl.AddField(_T("SOLUONG_MAU"), dfLong); 
	m_ivf_phieutruTbl.AddField(_T("GIAI_DOAN"), dfText, 15); 
	m_ivf_phieutruTbl.AddField(_T("NGAY_HETHAN"), dfDate); 

}
void CIVFLabPhieuTruDialog::OnSetWindowEvents(){
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
	//m_wndNgaychochut.SetEvent(WE_CHANGE, _OnNgaychochutChangeFnc);
	//m_wndNgaychochut.SetEvent(WE_SETFOCUS, _OnNgaychochutSetfocusFnc);
	//m_wndNgaychochut.SetEvent(WE_KILLFOCUS, _OnNgaychochutKillfocusFnc);
	m_wndNgaychochut.SetEvent(WE_CHECKVALUE, _OnNgaychochutCheckValueFnc);
	//m_wndSoluongmau.SetEvent(WE_CHANGE, _OnSoluongmauChangeFnc);
	//m_wndSoluongmau.SetEvent(WE_SETFOCUS, _OnSoluongmauSetfocusFnc);
	//m_wndSoluongmau.SetEvent(WE_KILLFOCUS, _OnSoluongmauKillfocusFnc);
	m_wndSoluongmau.SetEvent(WE_CHECKVALUE, _OnSoluongmauCheckValueFnc);
	m_wndNgayphoi.SetEvent(WE_SELENDOK, _OnNgayphoiSelendokFnc);
	//m_wndNgayphoi.SetEvent(WE_SETFOCUS, _OnNgayphoiSetfocusFnc);
	//m_wndNgayphoi.SetEvent(WE_KILLFOCUS, _OnNgayphoiKillfocusFnc);
	m_wndNgayphoi.SetEvent(WE_SELCHANGE, _OnNgayphoiSelectChangeFnc);
	m_wndNgayphoi.SetEvent(WE_LOADDATA, _OnNgayphoiLoadDataFnc);
	//m_wndNgayphoi.SetEvent(WE_ADDNEW, _OnNgayphoiAddNewFnc);
	//m_wndNgaydoinito.SetEvent(WE_CHANGE, _OnNgaydoinitoChangeFnc);
	//m_wndNgaydoinito.SetEvent(WE_SETFOCUS, _OnNgaydoinitoSetfocusFnc);
	//m_wndNgaydoinito.SetEvent(WE_KILLFOCUS, _OnNgaydoinitoKillfocusFnc);
	m_wndNgaydoinito.SetEvent(WE_CHECKVALUE, _OnNgaydoinitoCheckValueFnc);
	m_wndNoitiepnhan.SetEvent(WE_SELENDOK, _OnNoitiepnhanSelendokFnc);
	//m_wndNoitiepnhan.SetEvent(WE_SETFOCUS, _OnNoitiepnhanSetfocusFnc);
	//m_wndNoitiepnhan.SetEvent(WE_KILLFOCUS, _OnNoitiepnhanKillfocusFnc);
	m_wndNoitiepnhan.SetEvent(WE_SELCHANGE, _OnNoitiepnhanSelectChangeFnc);
	m_wndNoitiepnhan.SetEvent(WE_LOADDATA, _OnNoitiepnhanLoadDataFnc);
	//m_wndNoitiepnhan.SetEvent(WE_ADDNEW, _OnNoitiepnhanAddNewFnc);
	//m_wndTgtiepnhan.SetEvent(WE_CHANGE, _OnTgtiepnhanChangeFnc);
	//m_wndTgtiepnhan.SetEvent(WE_SETFOCUS, _OnTgtiepnhanSetfocusFnc);
	//m_wndTgtiepnhan.SetEvent(WE_KILLFOCUS, _OnTgtiepnhanKillfocusFnc);
	m_wndTgtiepnhan.SetEvent(WE_CHECKVALUE, _OnTgtiepnhanCheckValueFnc);
	m_wndNguoiluutru.SetEvent(WE_SELENDOK, _OnNguoiluutruSelendokFnc);
	//m_wndNguoiluutru.SetEvent(WE_SETFOCUS, _OnNguoiluutruSetfocusFnc);
	//m_wndNguoiluutru.SetEvent(WE_KILLFOCUS, _OnNguoiluutruKillfocusFnc);
	m_wndNguoiluutru.SetEvent(WE_SELCHANGE, _OnNguoiluutruSelectChangeFnc);
	m_wndNguoiluutru.SetEvent(WE_LOADDATA, _OnNguoiluutruLoadDataFnc);
	//m_wndNguoiluutru.SetEvent(WE_ADDNEW, _OnNguoiluutruAddNewFnc);
	//m_wndTgluu.SetEvent(WE_CHANGE, _OnTgluuChangeFnc);
	//m_wndTgluu.SetEvent(WE_SETFOCUS, _OnTgluuSetfocusFnc);
	//m_wndTgluu.SetEvent(WE_KILLFOCUS, _OnTgluuKillfocusFnc);
	m_wndTgluu.SetEvent(WE_CHECKVALUE, _OnTgluuCheckValueFnc);
	m_wndPhuongphaptru.SetEvent(WE_SELENDOK, _OnPhuongphaptruSelendokFnc);
	//m_wndPhuongphaptru.SetEvent(WE_SETFOCUS, _OnPhuongphaptruSetfocusFnc);
	//m_wndPhuongphaptru.SetEvent(WE_KILLFOCUS, _OnPhuongphaptruKillfocusFnc);
	m_wndPhuongphaptru.SetEvent(WE_SELCHANGE, _OnPhuongphaptruSelectChangeFnc);
	m_wndPhuongphaptru.SetEvent(WE_LOADDATA, _OnPhuongphaptruLoadDataFnc);
	//m_wndPhuongphaptru.SetEvent(WE_ADDNEW, _OnPhuongphaptruAddNewFnc);
	m_wndMoitruongtru.SetEvent(WE_SELENDOK, _OnMoitruongtruSelendokFnc);
	//m_wndMoitruongtru.SetEvent(WE_SETFOCUS, _OnMoitruongtruSetfocusFnc);
	//m_wndMoitruongtru.SetEvent(WE_KILLFOCUS, _OnMoitruongtruKillfocusFnc);
	m_wndMoitruongtru.SetEvent(WE_SELCHANGE, _OnMoitruongtruSelectChangeFnc);
	m_wndMoitruongtru.SetEvent(WE_LOADDATA, _OnMoitruongtruLoadDataFnc);
	//m_wndMoitruongtru.SetEvent(WE_ADDNEW, _OnMoitruongtruAddNewFnc);
	m_wndDungcu.SetEvent(WE_SELENDOK, _OnDungcuSelendokFnc);
	//m_wndDungcu.SetEvent(WE_SETFOCUS, _OnDungcuSetfocusFnc);
	//m_wndDungcu.SetEvent(WE_KILLFOCUS, _OnDungcuKillfocusFnc);
	m_wndDungcu.SetEvent(WE_SELCHANGE, _OnDungcuSelectChangeFnc);
	m_wndDungcu.SetEvent(WE_LOADDATA, _OnDungcuLoadDataFnc);
	//m_wndDungcu.SetEvent(WE_ADDNEW, _OnDungcuAddNewFnc);
	m_wndThungtru.SetEvent(WE_SELENDOK, _OnThungtruSelendokFnc);
	//m_wndThungtru.SetEvent(WE_SETFOCUS, _OnThungtruSetfocusFnc);
	//m_wndThungtru.SetEvent(WE_KILLFOCUS, _OnThungtruKillfocusFnc);
	m_wndThungtru.SetEvent(WE_SELCHANGE, _OnThungtruSelectChangeFnc);
	m_wndThungtru.SetEvent(WE_LOADDATA, _OnThungtruLoadDataFnc);
	//m_wndThungtru.SetEvent(WE_ADDNEW, _OnThungtruAddNewFnc);
	m_wndGiatru.SetEvent(WE_SELENDOK, _OnGiatruSelendokFnc);
	//m_wndGiatru.SetEvent(WE_SETFOCUS, _OnGiatruSetfocusFnc);
	//m_wndGiatru.SetEvent(WE_KILLFOCUS, _OnGiatruKillfocusFnc);
	m_wndGiatru.SetEvent(WE_SELCHANGE, _OnGiatruSelectChangeFnc);
	m_wndGiatru.SetEvent(WE_LOADDATA, _OnGiatruLoadDataFnc);
	//m_wndGiatru.SetEvent(WE_ADDNEW, _OnGiatruAddNewFnc);
	//m_wndNgayhethan.SetEvent(WE_CHANGE, _OnNgayhethanChangeFnc);
	//m_wndNgayhethan.SetEvent(WE_SETFOCUS, _OnNgayhethanSetfocusFnc);
	//m_wndNgayhethan.SetEvent(WE_KILLFOCUS, _OnNgayhethanKillfocusFnc);
	m_wndNgayhethan.SetEvent(WE_CHECKVALUE, _OnNgayhethanCheckValueFnc);
	//m_wndGhichu.SetEvent(WE_CHANGE, _OnGhichuChangeFnc);
	//m_wndGhichu.SetEvent(WE_SETFOCUS, _OnGhichuSetfocusFnc);
	//m_wndGhichu.SetEvent(WE_KILLFOCUS, _OnGhichuKillfocusFnc);
	m_wndGhichu.SetEvent(WE_CHECKVALUE, _OnGhichuCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddCassette.SetEvent(WE_CLICK, _OnAddCassetteSelectFnc);
	SetMode(VM_NONE);

}
void CIVFLabPhieuTruDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSophieu.GetDlgCtrlID(), m_szSophieu);
	DDX_Text(pDX, m_wndId.GetDlgCtrlID(), m_nId);
	DDX_Text(pDX, m_wndSohoso.GetDlgCtrlID(), m_nSohoso);
	DDX_Text(pDX, m_wndMabenhnhan.GetDlgCtrlID(), m_szMabenhnhan);
	DDX_Text(pDX, m_wndHovaten.GetDlgCtrlID(), m_szHovaten);
	DDX_TextEx(pDX, m_wndNgaysinh.GetDlgCtrlID(), m_szNgaysinh);
	DDX_TextEx(pDX, m_wndNgaychochut.GetDlgCtrlID(), m_szNgaychochut);
	DDX_Text(pDX, m_wndSoluongmau.GetDlgCtrlID(), m_nSoluongmau);
	DDX_TextEx(pDX, m_wndNgayphoi.GetDlgCtrlID(), m_szNgayphoiKey);
	DDX_TextEx(pDX, m_wndNgaydoinito.GetDlgCtrlID(), m_szNgaydoinito);
	DDX_TextEx(pDX, m_wndNoitiepnhan.GetDlgCtrlID(), m_szNoitiepnhanKey);
	DDX_TextEx(pDX, m_wndTgtiepnhan.GetDlgCtrlID(), m_szTgtiepnhan);
	DDX_TextEx(pDX, m_wndNguoiluutru.GetDlgCtrlID(), m_szNguoiluutruKey);
	DDX_TextEx(pDX, m_wndTgluu.GetDlgCtrlID(), m_szTgluu);
	DDX_TextEx(pDX, m_wndPhuongphaptru.GetDlgCtrlID(), m_szPhuongphaptruKey);
	DDX_TextEx(pDX, m_wndMoitruongtru.GetDlgCtrlID(), m_szMoitruongtruKey);
	DDX_TextEx(pDX, m_wndDungcu.GetDlgCtrlID(), m_szDungcuKey);
	DDX_TextEx(pDX, m_wndThungtru.GetDlgCtrlID(), m_szThungtruKey);
	DDX_TextEx(pDX, m_wndGiatru.GetDlgCtrlID(), m_szGiatruKey);
	DDX_TextEx(pDX, m_wndNgayhethan.GetDlgCtrlID(), m_szNgayhethan);
	DDX_Text(pDX, m_wndGhichu.GetDlgCtrlID(), m_szGhichu);

}
void CIVFLabPhieuTruDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Sophieu")] =  m_szSophieu;
	m_jData[_T("Id")] =  m_nId;
	m_jData[_T("Sohoso")] =  m_nSohoso;
	m_jData[_T("Mabenhnhan")] =  m_szMabenhnhan;
	m_jData[_T("Hovaten")] =  m_szHovaten;
	m_jData[_T("Ngaysinh")] =  m_szNgaysinh;
	m_jData[_T("Ngaychochut")] =  m_szNgaychochut;
	m_jData[_T("Soluongmau")] =  m_nSoluongmau;
	m_jData[_T("Ngayphoi")] =  m_szNgayphoiKey;
	m_jData[_T("Ngaydoinito")] =  m_szNgaydoinito;
	m_jData[_T("Noitiepnhan")] =  m_szNoitiepnhanKey;
	m_jData[_T("Tgtiepnhan")] =  m_szTgtiepnhan;
	m_jData[_T("Nguoiluutru")] =  m_szNguoiluutruKey;
	m_jData[_T("Tgluu")] =  m_szTgluu;
	m_jData[_T("Phuongphaptru")] =  m_szPhuongphaptruKey;
	m_jData[_T("Moitruongtru")] =  m_szMoitruongtruKey;
	m_jData[_T("Dungcu")] =  m_szDungcuKey;
	m_jData[_T("Thungtru")] =  m_szThungtruKey;
	m_jData[_T("Giatru")] =  m_szGiatruKey;
	m_jData[_T("Ngayhethan")] =  m_szNgayhethan;
	m_jData[_T("Ghichu")] =  m_szGhichu;
	}
	else
	{
			
	m_jData[_T("Sophieu")].GetValue(m_szSophieu);
	m_jData[_T("Id")].GetValue(m_nId);
	m_jData[_T("Sohoso")].GetValue(m_nSohoso);
	m_jData[_T("Mabenhnhan")].GetValue(m_szMabenhnhan);
	m_jData[_T("Hovaten")].GetValue(m_szHovaten);
	m_jData[_T("Ngaysinh")].GetValue(m_szNgaysinh);
	m_jData[_T("Ngaychochut")].GetValue(m_szNgaychochut);
	m_jData[_T("Soluongmau")].GetValue(m_nSoluongmau);
	m_jData[_T("Ngayphoi")].GetValue(m_szNgayphoiKey);
	m_jData[_T("Ngaydoinito")].GetValue(m_szNgaydoinito);
	m_jData[_T("Noitiepnhan")].GetValue(m_szNoitiepnhanKey);
	m_jData[_T("Tgtiepnhan")].GetValue(m_szTgtiepnhan);
	m_jData[_T("Nguoiluutru")].GetValue(m_szNguoiluutruKey);
	m_jData[_T("Tgluu")].GetValue(m_szTgluu);
	m_jData[_T("Phuongphaptru")].GetValue(m_szPhuongphaptruKey);
	m_jData[_T("Moitruongtru")].GetValue(m_szMoitruongtruKey);
	m_jData[_T("Dungcu")].GetValue(m_szDungcuKey);
	m_jData[_T("Thungtru")].GetValue(m_szThungtruKey);
	m_jData[_T("Giatru")].GetValue(m_szGiatruKey);
	m_jData[_T("Ngayhethan")].GetValue(m_szNgayhethan);
	m_jData[_T("Ghichu")].GetValue(m_szGhichu);
	}

}
void CIVFLabPhieuTruDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ID_MAPHIEU"), m_nId);
	rs.GetValue(_T("SO_PHIEU"), m_szSophieu);
	rs.GetValue(_T("ID_MATHUNG"), m_szThungtruKey);
	rs.GetValue(_T("ID_GIATRU"), m_szGiatruKey);
	rs.GetValue(_T("NOI_TIEPNHAN"), m_szNoitiepnhanKey);
	rs.GetValue(_T("TG_TIEPNHAN"), m_szTgtiepnhan);
	rs.GetValue(_T("NGUOI_LUUTRU"), m_szNguoiluutruKey);
	rs.GetValue(_T("TG_LUU"), m_szTgluu);
	rs.GetValue(_T("MOITRUONG_TRU"), m_szMoitruongtruKey);
	rs.GetValue(_T("PHUONGPHAP_TRU"), m_szPhuongphaptruKey);
	rs.GetValue(_T("DOCNO"), m_nSohoso);
	rs.GetValue(_T("HOVATEN"), m_szHovaten);
	rs.GetValue(_T("NGAYSINH"), m_szNgaysinh);
	rs.GetValue(_T("NGAYCHOCHUT"), m_szNgaychochut);
	rs.GetValue(_T("NGAYDO_NITO"), m_szNgaydoinito);
	rs.GetValue(_T("ID_MADUNGCU"), m_szDungcuKey);
	rs.GetValue(_T("NGAY_HETHAN"), m_szNgayhethan);

}
void CIVFLabPhieuTruDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_ivf_phieutruTbl.SetValue(_T("ID_MAPHIEU"), m_nId);
	m_ivf_phieutruTbl.SetValue(_T("SO_PHIEU"), m_szSophieu);
	m_ivf_phieutruTbl.SetValue(_T("ID_MATHUNG"), m_szThungtruKey);
	m_ivf_phieutruTbl.SetValue(_T("ID_GIATRU"), m_szGiatruKey);
	m_ivf_phieutruTbl.SetValue(_T("NOI_TIEPNHAN"), m_szNoitiepnhanKey);
	m_ivf_phieutruTbl.SetValue(_T("TG_TIEPNHAN"), m_szTgtiepnhan);
	m_ivf_phieutruTbl.SetValue(_T("NGUOI_LUUTRU"), m_szNguoiluutruKey);
	m_ivf_phieutruTbl.SetValue(_T("TG_LUU"), m_szTgluu);
	m_ivf_phieutruTbl.SetValue(_T("MOITRUONG_TRU"), m_szMoitruongtruKey);
	m_ivf_phieutruTbl.SetValue(_T("PHUONGPHAP_TRU"), m_szPhuongphaptruKey);
	m_ivf_phieutruTbl.SetValue(_T("DOCNO"), m_nSohoso);
	m_ivf_phieutruTbl.SetValue(_T("HOVATEN"), m_szHovaten);
	m_ivf_phieutruTbl.SetValue(_T("NGAYSINH"), m_szNgaysinh);
	m_ivf_phieutruTbl.SetValue(_T("NGAYCHOCHUT"), m_szNgaychochut);
	m_ivf_phieutruTbl.SetValue(_T("NGAYDO_NITO"), m_szNgaydoinito);
	m_ivf_phieutruTbl.SetValue(_T("ID_MADUNGCU"), m_szDungcuKey);
	m_ivf_phieutruTbl.SetValue(_T("NGAY_HETHAN"), m_szNgayhethan);

}
void CIVFLabPhieuTruDialog::SetDefaultValues(){

	m_szSophieu.Empty();
	m_nId=0;
	m_nSohoso=0;
	m_szMabenhnhan.Empty();
	m_szHovaten.Empty();
	m_szNgaysinh.Empty();
	m_szNgaychochut.Empty();
	m_nSoluongmau=0;
	m_szNgayphoiKey.Empty();
	m_szNgaydoinito.Empty();
	m_szNoitiepnhanKey.Empty();
	m_szTgtiepnhan.Empty();
	m_szNguoiluutruKey.Empty();
	m_szTgluu.Empty();
	m_szPhuongphaptruKey.Empty();
	m_szMoitruongtruKey.Empty();
	m_szDungcuKey.Empty();
	m_szThungtruKey.Empty();
	m_szGiatruKey.Empty();
	m_szNgayhethan.Empty();
	m_szGhichu.Empty();

}
int CIVFLabPhieuTruDialog::SetMode(int nMode){
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
/*void CIVFLabPhieuTruDialog::OnSophieuChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnSophieuSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnSophieuKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnSophieuCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuTruDialog::OnIdChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnIdSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnIdKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnIdCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuTruDialog::OnSohosoChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnSohosoSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnSohosoKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnSohosoCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuTruDialog::OnMabenhnhanChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnMabenhnhanSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnMabenhnhanKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnMabenhnhanCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuTruDialog::OnHovatenChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnHovatenSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnHovatenKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnHovatenCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuTruDialog::OnNgaysinhChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnNgaysinhSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnNgaysinhKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnNgaysinhCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuTruDialog::OnNgaychochutChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnNgaychochutSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnNgaychochutKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnNgaychochutCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuTruDialog::OnSoluongmauChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnSoluongmauSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnSoluongmauKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnSoluongmauCheckValue(){
	return 0;
} 
void CIVFLabPhieuTruDialog::OnNgayphoiSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruDialog::OnNgayphoiSelendok(){
	 
}
/*void CIVFLabPhieuTruDialog::OnNgayphoiSetfocus(){
	
}*/
/*void CIVFLabPhieuTruDialog::OnNgayphoiKillfocus(){
	
}*/
long CIVFLabPhieuTruDialog::OnNgayphoiLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNgayphoi.IsSearchKey() && !m_szNgayphoiKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNgayphoiKey
};
	m_wndNgayphoi.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNgayphoi.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruDialog::OnNgayphoiAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFLabPhieuTruDialog::OnNgaydoinitoChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnNgaydoinitoSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnNgaydoinitoKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnNgaydoinitoCheckValue(){
	return 0;
} 
void CIVFLabPhieuTruDialog::OnNoitiepnhanSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruDialog::OnNoitiepnhanSelendok(){
	 
}
/*void CIVFLabPhieuTruDialog::OnNoitiepnhanSetfocus(){
	
}*/
/*void CIVFLabPhieuTruDialog::OnNoitiepnhanKillfocus(){
	
}*/
long CIVFLabPhieuTruDialog::OnNoitiepnhanLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNoitiepnhan.IsSearchKey() && !m_szNoitiepnhanKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNoitiepnhanKey
};
	m_wndNoitiepnhan.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNoitiepnhan.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruDialog::OnNoitiepnhanAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFLabPhieuTruDialog::OnTgtiepnhanChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnTgtiepnhanSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnTgtiepnhanKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnTgtiepnhanCheckValue(){
	return 0;
} 
void CIVFLabPhieuTruDialog::OnNguoiluutruSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruDialog::OnNguoiluutruSelendok(){
	 
}
/*void CIVFLabPhieuTruDialog::OnNguoiluutruSetfocus(){
	
}*/
/*void CIVFLabPhieuTruDialog::OnNguoiluutruKillfocus(){
	
}*/
long CIVFLabPhieuTruDialog::OnNguoiluutruLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNguoiluutru.IsSearchKey() && !m_szNguoiluutruKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNguoiluutruKey
};
	m_wndNguoiluutru.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNguoiluutru.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruDialog::OnNguoiluutruAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFLabPhieuTruDialog::OnTgluuChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnTgluuSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnTgluuKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnTgluuCheckValue(){
	return 0;
} 
void CIVFLabPhieuTruDialog::OnPhuongphaptruSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruDialog::OnPhuongphaptruSelendok(){
	 
}
/*void CIVFLabPhieuTruDialog::OnPhuongphaptruSetfocus(){
	
}*/
/*void CIVFLabPhieuTruDialog::OnPhuongphaptruKillfocus(){
	
}*/
long CIVFLabPhieuTruDialog::OnPhuongphaptruLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPhuongphaptru.IsSearchKey() && !m_szPhuongphaptruKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPhuongphaptruKey
};
	m_wndPhuongphaptru.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPhuongphaptru.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruDialog::OnPhuongphaptruAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruDialog::OnMoitruongtruSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruDialog::OnMoitruongtruSelendok(){
	 
}
/*void CIVFLabPhieuTruDialog::OnMoitruongtruSetfocus(){
	
}*/
/*void CIVFLabPhieuTruDialog::OnMoitruongtruKillfocus(){
	
}*/
long CIVFLabPhieuTruDialog::OnMoitruongtruLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMoitruongtru.IsSearchKey() && !m_szMoitruongtruKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMoitruongtruKey
};
	m_wndMoitruongtru.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMoitruongtru.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruDialog::OnMoitruongtruAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruDialog::OnDungcuSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruDialog::OnDungcuSelendok(){
	 
}
/*void CIVFLabPhieuTruDialog::OnDungcuSetfocus(){
	
}*/
/*void CIVFLabPhieuTruDialog::OnDungcuKillfocus(){
	
}*/
long CIVFLabPhieuTruDialog::OnDungcuLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDungcu.IsSearchKey() && !m_szDungcuKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDungcuKey
};
	m_wndDungcu.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDungcu.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruDialog::OnDungcuAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruDialog::OnThungtruSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruDialog::OnThungtruSelendok(){
	 
}
/*void CIVFLabPhieuTruDialog::OnThungtruSetfocus(){
	
}*/
/*void CIVFLabPhieuTruDialog::OnThungtruKillfocus(){
	
}*/
long CIVFLabPhieuTruDialog::OnThungtruLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndThungtru.IsSearchKey() && !m_szThungtruKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szThungtruKey
};
	m_wndThungtru.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndThungtru.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruDialog::OnThungtruAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuTruDialog::OnGiatruSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruDialog::OnGiatruSelendok(){
	 
}
/*void CIVFLabPhieuTruDialog::OnGiatruSetfocus(){
	
}*/
/*void CIVFLabPhieuTruDialog::OnGiatruKillfocus(){
	
}*/
long CIVFLabPhieuTruDialog::OnGiatruLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGiatru.IsSearchKey() && !m_szGiatruKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGiatruKey
};
	m_wndGiatru.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGiatru.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuTruDialog::OnGiatruAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFLabPhieuTruDialog::OnNgayhethanChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnNgayhethanSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnNgayhethanKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnNgayhethanCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuTruDialog::OnGhichuChange(){
	
} */
/*void CIVFLabPhieuTruDialog::OnGhichuSetfocus(){
	
} */
/*void CIVFLabPhieuTruDialog::OnGhichuKillfocus(){
	
} */
int CIVFLabPhieuTruDialog::OnGhichuCheckValue(){
	return 0;
} 
void CIVFLabPhieuTruDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuTruDialog::OnListDblClick(){
	
} 
void CIVFLabPhieuTruDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabPhieuTruDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFLabPhieuTruDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Cassette")), 
			rs.GetValue(_T("Top")), 
			rs.GetValue(_T("Mautop")), 
			rs.GetValue(_T("Sophoi")), 
			rs.GetValue(_T("Chatluong")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CIVFLabPhieuTruDialog::OnAddCassetteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabPhieuTruDialog::OnAddIVFLabPhieuTruDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFLabPhieuTruDialog::OnEditIVFLabPhieuTruDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFLabPhieuTruDialog::OnDeleteIVFLabPhieuTruDialog(){
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
 		OnCancelIVFLabPhieuTruDialog();
 	}
	return 0;
}
int CIVFLabPhieuTruDialog::OnSaveIVFLabPhieuTruDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_ivf_phieutruTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_ivf_phieutruTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnIVFLabPhieuTruDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFLabPhieuTruDialog::OnCancelIVFLabPhieuTruDialog(){
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
int CIVFLabPhieuTruDialog::OnIVFLabPhieuTruDialogListLoadData(){
	return 0;
}
