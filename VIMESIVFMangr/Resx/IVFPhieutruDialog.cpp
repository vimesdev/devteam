#include "IVFPhieutruDialog.h"
#include "MainFrm.h"
/*static void _OnIdChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnIdChange();
} */
/*static void _OnIdSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnIdSetfocus();} */ 
/*static void _OnIdKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnIdKillfocus();
} */
static int _OnIdCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnIdCheckValue();
} 
/*static void _OnSophieuChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSophieuChange();
} */
/*static void _OnSophieuSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSophieuSetfocus();} */ 
/*static void _OnSophieuKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSophieuKillfocus();
} */
static int _OnSophieuCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnSophieuCheckValue();
} 
/*static void _OnSohosoChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSohosoChange();
} */
/*static void _OnSohosoSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSohosoSetfocus();} */ 
/*static void _OnSohosoKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSohosoKillfocus();
} */
static int _OnSohosoCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnSohosoCheckValue();
} 
/*static void _OnMabenhnhanChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnMabenhnhanChange();
} */
/*static void _OnMabenhnhanSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnMabenhnhanSetfocus();} */ 
/*static void _OnMabenhnhanKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnMabenhnhanKillfocus();
} */
static int _OnMabenhnhanCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnMabenhnhanCheckValue();
} 
/*static void _OnHovatenChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnHovatenChange();
} */
/*static void _OnHovatenSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnHovatenSetfocus();} */ 
/*static void _OnHovatenKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnHovatenKillfocus();
} */
static int _OnHovatenCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnHovatenCheckValue();
} 
/*static void _OnNgaysinhChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgaysinhChange();
} */
/*static void _OnNgaysinhSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgaysinhSetfocus();} */ 
/*static void _OnNgaysinhKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgaysinhKillfocus();
} */
static int _OnNgaysinhCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnNgaysinhCheckValue();
} 
static void _OnDungcuSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieutruDialog* )pWnd)->OnDungcuSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDungcuSelendokFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnDungcuSelendok();
}
/*static void _OnDungcuSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnDungcuKillfocus();
}*/
/*static void _OnDungcuKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnDungcuKillfocus();
}*/
static long _OnDungcuLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnDungcuLoadData();
}
/*static void _OnDungcuAddNewFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnDungcuAddNew();
}*/
static void _OnPhuongphaptruSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieutruDialog* )pWnd)->OnPhuongphaptruSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPhuongphaptruSelendokFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnPhuongphaptruSelendok();
}
/*static void _OnPhuongphaptruSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnPhuongphaptruKillfocus();
}*/
/*static void _OnPhuongphaptruKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnPhuongphaptruKillfocus();
}*/
static long _OnPhuongphaptruLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnPhuongphaptruLoadData();
}
/*static void _OnPhuongphaptruAddNewFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnPhuongphaptruAddNew();
}*/
static void _OnMoitruongtruSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieutruDialog* )pWnd)->OnMoitruongtruSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMoitruongtruSelendokFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnMoitruongtruSelendok();
}
/*static void _OnMoitruongtruSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnMoitruongtruKillfocus();
}*/
/*static void _OnMoitruongtruKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnMoitruongtruKillfocus();
}*/
static long _OnMoitruongtruLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnMoitruongtruLoadData();
}
/*static void _OnMoitruongtruAddNewFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnMoitruongtruAddNew();
}*/
static void _OnThungtruSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieutruDialog* )pWnd)->OnThungtruSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungtruSelendokFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnThungtruSelendok();
}
/*static void _OnThungtruSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnThungtruKillfocus();
}*/
/*static void _OnThungtruKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnThungtruKillfocus();
}*/
static long _OnThungtruLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnThungtruLoadData();
}
/*static void _OnThungtruAddNewFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnThungtruAddNew();
}*/
static void _OnGiatruSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieutruDialog* )pWnd)->OnGiatruSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGiatruSelendokFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnGiatruSelendok();
}
/*static void _OnGiatruSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnGiatruKillfocus();
}*/
/*static void _OnGiatruKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnGiatruKillfocus();
}*/
static long _OnGiatruLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnGiatruLoadData();
}
/*static void _OnGiatruAddNewFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnGiatruAddNew();
}*/
static void _OnCassetteSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieutruDialog* )pWnd)->OnCassetteSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCassetteSelendokFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnCassetteSelendok();
}
/*static void _OnCassetteSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnCassetteKillfocus();
}*/
/*static void _OnCassetteKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnCassetteKillfocus();
}*/
static long _OnCassetteLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnCassetteLoadData();
}
/*static void _OnCassetteAddNewFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnCassetteAddNew();
}*/
/*static void _OnTopChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnTopChange();
} */
/*static void _OnTopSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnTopSetfocus();} */ 
/*static void _OnTopKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnTopKillfocus();
} */
static int _OnTopCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnTopCheckValue();
} 
/*static void _OnMautopChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnMautopChange();
} */
/*static void _OnMautopSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnMautopSetfocus();} */ 
/*static void _OnMautopKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnMautopKillfocus();
} */
static int _OnMautopCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnMautopCheckValue();
} 
/*static void _OnSophoiChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSophoiChange();
} */
/*static void _OnSophoiSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSophoiSetfocus();} */ 
/*static void _OnSophoiKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSophoiKillfocus();
} */
static int _OnSophoiCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnSophoiCheckValue();
} 
/*static void _OnNgaychochutChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgaychochutChange();
} */
/*static void _OnNgaychochutSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgaychochutSetfocus();} */ 
/*static void _OnNgaychochutKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgaychochutKillfocus();
} */
static int _OnNgaychochutCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnNgaychochutCheckValue();
} 
/*static void _OnNgaydoinitoChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgaydoinitoChange();
} */
/*static void _OnNgaydoinitoSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgaydoinitoSetfocus();} */ 
/*static void _OnNgaydoinitoKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgaydoinitoKillfocus();
} */
static int _OnNgaydoinitoCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnNgaydoinitoCheckValue();
} 
/*static void _OnSoluongmauChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSoluongmauChange();
} */
/*static void _OnSoluongmauSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSoluongmauSetfocus();} */ 
/*static void _OnSoluongmauKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnSoluongmauKillfocus();
} */
static int _OnSoluongmauCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnSoluongmauCheckValue();
} 
/*static void _OnGiaidoanChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnGiaidoanChange();
} */
/*static void _OnGiaidoanSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnGiaidoanSetfocus();} */ 
/*static void _OnGiaidoanKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnGiaidoanKillfocus();
} */
static int _OnGiaidoanCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnGiaidoanCheckValue();
} 
static void _OnNoitiepnhanSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieutruDialog* )pWnd)->OnNoitiepnhanSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNoitiepnhanSelendokFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNoitiepnhanSelendok();
}
/*static void _OnNoitiepnhanSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNoitiepnhanKillfocus();
}*/
/*static void _OnNoitiepnhanKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNoitiepnhanKillfocus();
}*/
static long _OnNoitiepnhanLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnNoitiepnhanLoadData();
}
/*static void _OnNoitiepnhanAddNewFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNoitiepnhanAddNew();
}*/
/*static void _OnTgtiepnhanChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnTgtiepnhanChange();
} */
/*static void _OnTgtiepnhanSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnTgtiepnhanSetfocus();} */ 
/*static void _OnTgtiepnhanKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnTgtiepnhanKillfocus();
} */
static int _OnTgtiepnhanCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnTgtiepnhanCheckValue();
} 
static void _OnNguoiluutruSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieutruDialog* )pWnd)->OnNguoiluutruSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNguoiluutruSelendokFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNguoiluutruSelendok();
}
/*static void _OnNguoiluutruSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNguoiluutruKillfocus();
}*/
/*static void _OnNguoiluutruKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNguoiluutruKillfocus();
}*/
static long _OnNguoiluutruLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnNguoiluutruLoadData();
}
/*static void _OnNguoiluutruAddNewFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNguoiluutruAddNew();
}*/
/*static void _OnTgluuChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnTgluuChange();
} */
/*static void _OnTgluuSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnTgluuSetfocus();} */ 
/*static void _OnTgluuKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnTgluuKillfocus();
} */
static int _OnTgluuCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnTgluuCheckValue();
} 
/*static void _OnNgayhethanChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgayhethanChange();
} */
/*static void _OnNgayhethanSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgayhethanSetfocus();} */ 
/*static void _OnNgayhethanKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnNgayhethanKillfocus();
} */
static int _OnNgayhethanCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnNgayhethanCheckValue();
} 
/*static void _OnGhichuChangeFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnGhichuChange();
} */
/*static void _OnGhichuSetfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnGhichuSetfocus();} */ 
/*static void _OnGhichuKillfocusFnc(CWnd *pWnd){
	((CIVFPhieutruDialog *)pWnd)->OnGhichuKillfocus();
} */
static int _OnGhichuCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieutruDialog *)pWnd)->OnGhichuCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFPhieutruDialog *pVw = (CIVFPhieutruDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFPhieutruDialog *pVw = (CIVFPhieutruDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFPhieutruDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieutruDialog*)pWnd)->OnAddIVFPhieutruDialog();
} 
static int _OnEditIVFPhieutruDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieutruDialog*)pWnd)->OnEditIVFPhieutruDialog();
} 
static int _OnDeleteIVFPhieutruDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieutruDialog*)pWnd)->OnDeleteIVFPhieutruDialog();
} 
static int _OnSaveIVFPhieutruDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieutruDialog*)pWnd)->OnSaveIVFPhieutruDialog();
} 
static int _OnCancelIVFPhieutruDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieutruDialog*)pWnd)->OnCancelIVFPhieutruDialog();
} 
CIVFPhieutruDialog::CIVFPhieutruDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CIVFPhieutruDialog::~CIVFPhieutruDialog(){
}
void CIVFPhieutruDialog::OnCreateComponents(){
	m_wndIdLabel.Create(this, _T("id"), 5, 5, 125, 30);
	m_wndId.Create(this,130, 5, 250, 30); 
	m_wndSophieuLabel.Create(this, _T("so_phieu"), 255, 5, 375, 30);
	m_wndSophieu.Create(this,380, 5, 500, 30); 
	m_wndSohosoLabel.Create(this, _T("so_ho_so"), 5, 35, 125, 60);
	m_wndSohoso.Create(this,130, 35, 250, 60); 
	m_wndMabenhnhanLabel.Create(this, _T("ma_benh_nhan"), 255, 35, 375, 60);
	m_wndMabenhnhan.Create(this,380, 35, 500, 60); 
	m_wndHovatenLabel.Create(this, _T("ho_va_ten"), 5, 65, 125, 90);
	m_wndHovaten.Create(this,130, 65, 501, 90); 
	m_wndNgaysinhLabel.Create(this, _T("ngay_sinh"), 5, 95, 125, 120);
	m_wndNgaysinh.Create(this,130, 95, 250, 120); 
	m_wndDungcuLabel.Create(this, _T("dung_cu"), 255, 95, 375, 120);
	m_wndDungcu.Create(this,380, 95, 500, 120); 
	m_wndPhuongphaptruLabel.Create(this, _T("phuongphap_tru"), 5, 125, 125, 150);
	m_wndPhuongphaptru.Create(this,130, 125, 250, 150); 
	m_wndMoitruongtruLabel.Create(this, _T("moitruong_tru"), 255, 125, 375, 150);
	m_wndMoitruongtru.Create(this,380, 125, 500, 150); 
	m_wndThungtruLabel.Create(this, _T("thung_tru"), 5, 155, 125, 180);
	m_wndThungtru.Create(this,130, 155, 250, 180); 
	m_wndGiatruLabel.Create(this, _T("gia_tru"), 255, 155, 375, 180);
	m_wndGiatru.Create(this,380, 155, 500, 180); 
	m_wndCassetteLabel.Create(this, _T("cassette"), 5, 185, 125, 210);
	m_wndCassette.Create(this,130, 185, 250, 210); 
	m_wndTopLabel.Create(this, _T("top"), 255, 185, 375, 210);
	m_wndTop.Create(this,380, 185, 500, 210); 
	m_wndMautopLabel.Create(this, _T("mau_top"), 5, 215, 125, 240);
	m_wndMautop.Create(this,130, 215, 250, 240); 
	m_wndSophoiLabel.Create(this, _T("so_phoi"), 255, 215, 375, 240);
	m_wndSophoi.Create(this,380, 215, 500, 240); 
	m_wndNgaychochutLabel.Create(this, _T("ngay_choc_hut"), 5, 245, 125, 270);
	m_wndNgaychochut.Create(this,130, 245, 250, 270); 
	m_wndNgaydoinitoLabel.Create(this, _T("ngaydoi_nito"), 255, 245, 375, 270);
	m_wndNgaydoinito.Create(this,380, 245, 500, 270); 
	m_wndSoluongmauLabel.Create(this, _T("so_luong_mau"), 5, 275, 125, 300);
	m_wndSoluongmau.Create(this,130, 275, 250, 300); 
	m_wndGiaidoanLabel.Create(this, _T("giai_doan"), 255, 275, 375, 300);
	m_wndGiaidoan.Create(this,380, 275, 500, 300); 
	m_wndNoitiepnhanLabel.Create(this, _T("noi_tiepnhan"), 5, 305, 125, 330);
	m_wndNoitiepnhan.Create(this,130, 305, 250, 330); 
	m_wndTgtiepnhanLabel.Create(this, _T("tg_tiepnhan"), 255, 305, 375, 330);
	m_wndTgtiepnhan.Create(this,380, 305, 500, 330); 
	m_wndNguoiluutruLabel.Create(this, _T("nguoi_luutru"), 5, 335, 125, 360);
	m_wndNguoiluutru.Create(this,130, 335, 250, 360); 
	m_wndTgluuLabel.Create(this, _T("tg_luu"), 255, 335, 375, 360);
	m_wndTgluu.Create(this,380, 335, 500, 360); 
	m_wndNgayhethanLabel.Create(this, _T("ngay_het_han"), 5, 365, 125, 390);
	m_wndNgayhethan.Create(this,130, 365, 250, 390); 
	m_wndGhichuLabel.Create(this, _T("ghi_chu"), 5, 395, 125, 420);
	m_wndGhichu.Create(this,130, 395, 500, 420); 
	m_wndSave.Create(this, _T("&Save"), 336, 425, 416, 450);
	m_wndClose.Create(this, _T("&Close"), 421, 425, 501, 450);

}
void CIVFPhieutruDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndId.SetLimitText(22);
	m_wndId.SetCheckValue(true);
	m_wndSophieu.SetLimitText(15);
	m_wndSophieu.SetCheckValue(true);
	m_wndSohoso.SetLimitText(22);
	m_wndSohoso.SetCheckValue(true);
	m_wndMabenhnhan.SetLimitText(35);
	m_wndMabenhnhan.SetCheckValue(true);
	m_wndHovaten.SetLimitText(65);
	m_wndHovaten.SetCheckValue(true);
	m_wndNgaysinh.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgaysinh.SetCheckValue(true);
	m_wndDungcu.SetCheckValue(true);
	m_wndDungcu.LimitText(22);
	m_wndPhuongphaptru.SetCheckValue(true);
	m_wndPhuongphaptru.LimitText(20);
	m_wndMoitruongtru.SetCheckValue(true);
	m_wndMoitruongtru.LimitText(20);
	m_wndThungtru.SetCheckValue(true);
	m_wndThungtru.LimitText(22);
	m_wndGiatru.SetCheckValue(true);
	m_wndGiatru.LimitText(20);
	m_wndCassette.SetCheckValue(true);
	m_wndCassette.LimitText(20);
	m_wndTop.SetLimitText(22);
	m_wndTop.SetCheckValue(true);
	m_wndMautop.SetLimitText(15);
	m_wndMautop.SetCheckValue(true);
	m_wndSophoi.SetLimitText(22);
	m_wndSophoi.SetCheckValue(true);
	m_wndNgaychochut.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgaychochut.SetCheckValue(true);
	m_wndNgaydoinito.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgaydoinito.SetCheckValue(true);
	m_wndSoluongmau.SetLimitText(22);
	m_wndSoluongmau.SetCheckValue(true);
	m_wndGiaidoan.SetLimitText(15);
	m_wndGiaidoan.SetCheckValue(true);
	m_wndNoitiepnhan.SetCheckValue(true);
	m_wndNoitiepnhan.LimitText(15);
	m_wndTgtiepnhan.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTgtiepnhan.SetCheckValue(true);
	m_wndNguoiluutru.SetCheckValue(true);
	m_wndNguoiluutru.LimitText(15);
	m_wndTgluu.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTgluu.SetCheckValue(true);
	m_wndNgayhethan.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgayhethan.SetCheckValue(true);
	m_wndGhichu.SetLimitText(35);
	m_wndGhichu.SetCheckValue(true);


	m_wndDungcu.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDungcu.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPhuongphaptru.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPhuongphaptru.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMoitruongtru.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMoitruongtru.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndThungtru.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndThungtru.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndGiatru.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGiatru.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCassette.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCassette.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNoitiepnhan.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNoitiepnhan.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNguoiluutru.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNguoiluutru.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
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
void CIVFPhieutruDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndId.SetEvent(WE_CHANGE, _OnIdChangeFnc);
	//m_wndId.SetEvent(WE_SETFOCUS, _OnIdSetfocusFnc);
	//m_wndId.SetEvent(WE_KILLFOCUS, _OnIdKillfocusFnc);
	m_wndId.SetEvent(WE_CHECKVALUE, _OnIdCheckValueFnc);
	//m_wndSophieu.SetEvent(WE_CHANGE, _OnSophieuChangeFnc);
	//m_wndSophieu.SetEvent(WE_SETFOCUS, _OnSophieuSetfocusFnc);
	//m_wndSophieu.SetEvent(WE_KILLFOCUS, _OnSophieuKillfocusFnc);
	m_wndSophieu.SetEvent(WE_CHECKVALUE, _OnSophieuCheckValueFnc);
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
	m_wndDungcu.SetEvent(WE_SELENDOK, _OnDungcuSelendokFnc);
	//m_wndDungcu.SetEvent(WE_SETFOCUS, _OnDungcuSetfocusFnc);
	//m_wndDungcu.SetEvent(WE_KILLFOCUS, _OnDungcuKillfocusFnc);
	m_wndDungcu.SetEvent(WE_SELCHANGE, _OnDungcuSelectChangeFnc);
	m_wndDungcu.SetEvent(WE_LOADDATA, _OnDungcuLoadDataFnc);
	//m_wndDungcu.SetEvent(WE_ADDNEW, _OnDungcuAddNewFnc);
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
	m_wndCassette.SetEvent(WE_SELENDOK, _OnCassetteSelendokFnc);
	//m_wndCassette.SetEvent(WE_SETFOCUS, _OnCassetteSetfocusFnc);
	//m_wndCassette.SetEvent(WE_KILLFOCUS, _OnCassetteKillfocusFnc);
	m_wndCassette.SetEvent(WE_SELCHANGE, _OnCassetteSelectChangeFnc);
	m_wndCassette.SetEvent(WE_LOADDATA, _OnCassetteLoadDataFnc);
	//m_wndCassette.SetEvent(WE_ADDNEW, _OnCassetteAddNewFnc);
	//m_wndTop.SetEvent(WE_CHANGE, _OnTopChangeFnc);
	//m_wndTop.SetEvent(WE_SETFOCUS, _OnTopSetfocusFnc);
	//m_wndTop.SetEvent(WE_KILLFOCUS, _OnTopKillfocusFnc);
	m_wndTop.SetEvent(WE_CHECKVALUE, _OnTopCheckValueFnc);
	//m_wndMautop.SetEvent(WE_CHANGE, _OnMautopChangeFnc);
	//m_wndMautop.SetEvent(WE_SETFOCUS, _OnMautopSetfocusFnc);
	//m_wndMautop.SetEvent(WE_KILLFOCUS, _OnMautopKillfocusFnc);
	m_wndMautop.SetEvent(WE_CHECKVALUE, _OnMautopCheckValueFnc);
	//m_wndSophoi.SetEvent(WE_CHANGE, _OnSophoiChangeFnc);
	//m_wndSophoi.SetEvent(WE_SETFOCUS, _OnSophoiSetfocusFnc);
	//m_wndSophoi.SetEvent(WE_KILLFOCUS, _OnSophoiKillfocusFnc);
	m_wndSophoi.SetEvent(WE_CHECKVALUE, _OnSophoiCheckValueFnc);
	//m_wndNgaychochut.SetEvent(WE_CHANGE, _OnNgaychochutChangeFnc);
	//m_wndNgaychochut.SetEvent(WE_SETFOCUS, _OnNgaychochutSetfocusFnc);
	//m_wndNgaychochut.SetEvent(WE_KILLFOCUS, _OnNgaychochutKillfocusFnc);
	m_wndNgaychochut.SetEvent(WE_CHECKVALUE, _OnNgaychochutCheckValueFnc);
	//m_wndNgaydoinito.SetEvent(WE_CHANGE, _OnNgaydoinitoChangeFnc);
	//m_wndNgaydoinito.SetEvent(WE_SETFOCUS, _OnNgaydoinitoSetfocusFnc);
	//m_wndNgaydoinito.SetEvent(WE_KILLFOCUS, _OnNgaydoinitoKillfocusFnc);
	m_wndNgaydoinito.SetEvent(WE_CHECKVALUE, _OnNgaydoinitoCheckValueFnc);
	//m_wndSoluongmau.SetEvent(WE_CHANGE, _OnSoluongmauChangeFnc);
	//m_wndSoluongmau.SetEvent(WE_SETFOCUS, _OnSoluongmauSetfocusFnc);
	//m_wndSoluongmau.SetEvent(WE_KILLFOCUS, _OnSoluongmauKillfocusFnc);
	m_wndSoluongmau.SetEvent(WE_CHECKVALUE, _OnSoluongmauCheckValueFnc);
	//m_wndGiaidoan.SetEvent(WE_CHANGE, _OnGiaidoanChangeFnc);
	//m_wndGiaidoan.SetEvent(WE_SETFOCUS, _OnGiaidoanSetfocusFnc);
	//m_wndGiaidoan.SetEvent(WE_KILLFOCUS, _OnGiaidoanKillfocusFnc);
	m_wndGiaidoan.SetEvent(WE_CHECKVALUE, _OnGiaidoanCheckValueFnc);
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
	SetMode(VM_NONE);

}
void CIVFPhieutruDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndId.GetDlgCtrlID(), m_nId);
	DDX_Text(pDX, m_wndSophieu.GetDlgCtrlID(), m_szSophieu);
	DDX_Text(pDX, m_wndSohoso.GetDlgCtrlID(), m_nSohoso);
	DDX_Text(pDX, m_wndMabenhnhan.GetDlgCtrlID(), m_szMabenhnhan);
	DDX_Text(pDX, m_wndHovaten.GetDlgCtrlID(), m_szHovaten);
	DDX_TextEx(pDX, m_wndNgaysinh.GetDlgCtrlID(), m_szNgaysinh);
	DDX_TextEx(pDX, m_wndDungcu.GetDlgCtrlID(), m_szDungcuKey);
	DDX_TextEx(pDX, m_wndPhuongphaptru.GetDlgCtrlID(), m_szPhuongphaptruKey);
	DDX_TextEx(pDX, m_wndMoitruongtru.GetDlgCtrlID(), m_szMoitruongtruKey);
	DDX_TextEx(pDX, m_wndThungtru.GetDlgCtrlID(), m_szThungtruKey);
	DDX_TextEx(pDX, m_wndGiatru.GetDlgCtrlID(), m_szGiatruKey);
	DDX_TextEx(pDX, m_wndCassette.GetDlgCtrlID(), m_szCassetteKey);
	DDX_Text(pDX, m_wndTop.GetDlgCtrlID(), m_nTop);
	DDX_Text(pDX, m_wndMautop.GetDlgCtrlID(), m_szMautop);
	DDX_Text(pDX, m_wndSophoi.GetDlgCtrlID(), m_nSophoi);
	DDX_TextEx(pDX, m_wndNgaychochut.GetDlgCtrlID(), m_szNgaychochut);
	DDX_TextEx(pDX, m_wndNgaydoinito.GetDlgCtrlID(), m_szNgaydoinito);
	DDX_Text(pDX, m_wndSoluongmau.GetDlgCtrlID(), m_nSoluongmau);
	DDX_Text(pDX, m_wndGiaidoan.GetDlgCtrlID(), m_szGiaidoan);
	DDX_TextEx(pDX, m_wndNoitiepnhan.GetDlgCtrlID(), m_szNoitiepnhanKey);
	DDX_TextEx(pDX, m_wndTgtiepnhan.GetDlgCtrlID(), m_szTgtiepnhan);
	DDX_TextEx(pDX, m_wndNguoiluutru.GetDlgCtrlID(), m_szNguoiluutruKey);
	DDX_TextEx(pDX, m_wndTgluu.GetDlgCtrlID(), m_szTgluu);
	DDX_TextEx(pDX, m_wndNgayhethan.GetDlgCtrlID(), m_szNgayhethan);
	DDX_Text(pDX, m_wndGhichu.GetDlgCtrlID(), m_szGhichu);

}
void CIVFPhieutruDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Id")] =  m_nId;
	m_jData[_T("Sophieu")] =  m_szSophieu;
	m_jData[_T("Sohoso")] =  m_nSohoso;
	m_jData[_T("Mabenhnhan")] =  m_szMabenhnhan;
	m_jData[_T("Hovaten")] =  m_szHovaten;
	m_jData[_T("Ngaysinh")] =  m_szNgaysinh;
	m_jData[_T("Dungcu")] =  m_szDungcuKey;
	m_jData[_T("Phuongphaptru")] =  m_szPhuongphaptruKey;
	m_jData[_T("Moitruongtru")] =  m_szMoitruongtruKey;
	m_jData[_T("Thungtru")] =  m_szThungtruKey;
	m_jData[_T("Giatru")] =  m_szGiatruKey;
	m_jData[_T("Cassette")] =  m_szCassetteKey;
	m_jData[_T("Top")] =  m_nTop;
	m_jData[_T("Mautop")] =  m_szMautop;
	m_jData[_T("Sophoi")] =  m_nSophoi;
	m_jData[_T("Ngaychochut")] =  m_szNgaychochut;
	m_jData[_T("Ngaydoinito")] =  m_szNgaydoinito;
	m_jData[_T("Soluongmau")] =  m_nSoluongmau;
	m_jData[_T("Giaidoan")] =  m_szGiaidoan;
	m_jData[_T("Noitiepnhan")] =  m_szNoitiepnhanKey;
	m_jData[_T("Tgtiepnhan")] =  m_szTgtiepnhan;
	m_jData[_T("Nguoiluutru")] =  m_szNguoiluutruKey;
	m_jData[_T("Tgluu")] =  m_szTgluu;
	m_jData[_T("Ngayhethan")] =  m_szNgayhethan;
	m_jData[_T("Ghichu")] =  m_szGhichu;
	}
	else
	{
			
	m_jData[_T("Id")].GetValue(m_nId);
	m_jData[_T("Sophieu")].GetValue(m_szSophieu);
	m_jData[_T("Sohoso")].GetValue(m_nSohoso);
	m_jData[_T("Mabenhnhan")].GetValue(m_szMabenhnhan);
	m_jData[_T("Hovaten")].GetValue(m_szHovaten);
	m_jData[_T("Ngaysinh")].GetValue(m_szNgaysinh);
	m_jData[_T("Dungcu")].GetValue(m_szDungcuKey);
	m_jData[_T("Phuongphaptru")].GetValue(m_szPhuongphaptruKey);
	m_jData[_T("Moitruongtru")].GetValue(m_szMoitruongtruKey);
	m_jData[_T("Thungtru")].GetValue(m_szThungtruKey);
	m_jData[_T("Giatru")].GetValue(m_szGiatruKey);
	m_jData[_T("Cassette")].GetValue(m_szCassetteKey);
	m_jData[_T("Top")].GetValue(m_nTop);
	m_jData[_T("Mautop")].GetValue(m_szMautop);
	m_jData[_T("Sophoi")].GetValue(m_nSophoi);
	m_jData[_T("Ngaychochut")].GetValue(m_szNgaychochut);
	m_jData[_T("Ngaydoinito")].GetValue(m_szNgaydoinito);
	m_jData[_T("Soluongmau")].GetValue(m_nSoluongmau);
	m_jData[_T("Giaidoan")].GetValue(m_szGiaidoan);
	m_jData[_T("Noitiepnhan")].GetValue(m_szNoitiepnhanKey);
	m_jData[_T("Tgtiepnhan")].GetValue(m_szTgtiepnhan);
	m_jData[_T("Nguoiluutru")].GetValue(m_szNguoiluutruKey);
	m_jData[_T("Tgluu")].GetValue(m_szTgluu);
	m_jData[_T("Ngayhethan")].GetValue(m_szNgayhethan);
	m_jData[_T("Ghichu")].GetValue(m_szGhichu);
	}

}
void CIVFPhieutruDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ID_MAPHIEU"), m_nId);
	rs.GetValue(_T("SO_PHIEU"), m_szSophieu);
	rs.GetValue(_T("ID_MATHUNG"), m_szThungtruKey);
	rs.GetValue(_T("ID_GIATRU"), m_szGiatruKey);
	rs.GetValue(_T("ID_CASSETTE"), m_szCassetteKey);
	rs.GetValue(_T("TOP"), m_nTop);
	rs.GetValue(_T("MAU"), m_szMautop);
	rs.GetValue(_T("NOI_TIEPNHAN"), m_szNoitiepnhanKey);
	rs.GetValue(_T("TG_TIEPNHAN"), m_szTgtiepnhan);
	rs.GetValue(_T("NGUOI_LUUTRU"), m_szNguoiluutruKey);
	rs.GetValue(_T("TG_LUU"), m_szTgluu);
	rs.GetValue(_T("MOITRUONG_TRU"), m_szMoitruongtruKey);
	rs.GetValue(_T("PHUONGPHAP_TRU"), m_szPhuongphaptruKey);
	rs.GetValue(_T("DOCNO"), m_nSohoso);
	rs.GetValue(_T("HOVATEN"), m_szHovaten);
	rs.GetValue(_T("NGAYSINH"), m_szNgaysinh);
	rs.GetValue(_T("SOPHOI"), m_nSophoi);
	rs.GetValue(_T("NGAYCHOCHUT"), m_szNgaychochut);
	rs.GetValue(_T("NGAYDO_NITO"), m_szNgaydoinito);
	rs.GetValue(_T("ID_MADUNGCU"), m_szDungcuKey);
	rs.GetValue(_T("SOLUONG_MAU"), m_nSoluongmau);
	rs.GetValue(_T("GIAI_DOAN"), m_szGiaidoan);
	rs.GetValue(_T("NGAY_HETHAN"), m_szNgayhethan);

}
void CIVFPhieutruDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_ivf_phieutruTbl.SetValue(_T("ID_MAPHIEU"), m_nId);
	m_ivf_phieutruTbl.SetValue(_T("SO_PHIEU"), m_szSophieu);
	m_ivf_phieutruTbl.SetValue(_T("ID_MATHUNG"), m_szThungtruKey);
	m_ivf_phieutruTbl.SetValue(_T("ID_GIATRU"), m_szGiatruKey);
	m_ivf_phieutruTbl.SetValue(_T("ID_CASSETTE"), m_szCassetteKey);
	m_ivf_phieutruTbl.SetValue(_T("TOP"), m_nTop);
	m_ivf_phieutruTbl.SetValue(_T("MAU"), m_szMautop);
	m_ivf_phieutruTbl.SetValue(_T("NOI_TIEPNHAN"), m_szNoitiepnhanKey);
	m_ivf_phieutruTbl.SetValue(_T("TG_TIEPNHAN"), m_szTgtiepnhan);
	m_ivf_phieutruTbl.SetValue(_T("NGUOI_LUUTRU"), m_szNguoiluutruKey);
	m_ivf_phieutruTbl.SetValue(_T("TG_LUU"), m_szTgluu);
	m_ivf_phieutruTbl.SetValue(_T("MOITRUONG_TRU"), m_szMoitruongtruKey);
	m_ivf_phieutruTbl.SetValue(_T("PHUONGPHAP_TRU"), m_szPhuongphaptruKey);
	m_ivf_phieutruTbl.SetValue(_T("DOCNO"), m_nSohoso);
	m_ivf_phieutruTbl.SetValue(_T("HOVATEN"), m_szHovaten);
	m_ivf_phieutruTbl.SetValue(_T("NGAYSINH"), m_szNgaysinh);
	m_ivf_phieutruTbl.SetValue(_T("SOPHOI"), m_nSophoi);
	m_ivf_phieutruTbl.SetValue(_T("NGAYCHOCHUT"), m_szNgaychochut);
	m_ivf_phieutruTbl.SetValue(_T("NGAYDO_NITO"), m_szNgaydoinito);
	m_ivf_phieutruTbl.SetValue(_T("ID_MADUNGCU"), m_szDungcuKey);
	m_ivf_phieutruTbl.SetValue(_T("SOLUONG_MAU"), m_nSoluongmau);
	m_ivf_phieutruTbl.SetValue(_T("GIAI_DOAN"), m_szGiaidoan);
	m_ivf_phieutruTbl.SetValue(_T("NGAY_HETHAN"), m_szNgayhethan);

}
void CIVFPhieutruDialog::SetDefaultValues(){

	m_nId=0;
	m_szSophieu.Empty();
	m_nSohoso=0;
	m_szMabenhnhan.Empty();
	m_szHovaten.Empty();
	m_szNgaysinh.Empty();
	m_szDungcuKey.Empty();
	m_szPhuongphaptruKey.Empty();
	m_szMoitruongtruKey.Empty();
	m_szThungtruKey.Empty();
	m_szGiatruKey.Empty();
	m_szCassetteKey.Empty();
	m_nTop=0;
	m_szMautop.Empty();
	m_nSophoi=0;
	m_szNgaychochut.Empty();
	m_szNgaydoinito.Empty();
	m_nSoluongmau=0;
	m_szGiaidoan.Empty();
	m_szNoitiepnhanKey.Empty();
	m_szTgtiepnhan.Empty();
	m_szNguoiluutruKey.Empty();
	m_szTgluu.Empty();
	m_szNgayhethan.Empty();
	m_szGhichu.Empty();

}
int CIVFPhieutruDialog::SetMode(int nMode){
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
/*void CIVFPhieutruDialog::OnIdChange(){
	
} */
/*void CIVFPhieutruDialog::OnIdSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnIdKillfocus(){
	
} */
int CIVFPhieutruDialog::OnIdCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnSophieuChange(){
	
} */
/*void CIVFPhieutruDialog::OnSophieuSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnSophieuKillfocus(){
	
} */
int CIVFPhieutruDialog::OnSophieuCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnSohosoChange(){
	
} */
/*void CIVFPhieutruDialog::OnSohosoSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnSohosoKillfocus(){
	
} */
int CIVFPhieutruDialog::OnSohosoCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnMabenhnhanChange(){
	
} */
/*void CIVFPhieutruDialog::OnMabenhnhanSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnMabenhnhanKillfocus(){
	
} */
int CIVFPhieutruDialog::OnMabenhnhanCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnHovatenChange(){
	
} */
/*void CIVFPhieutruDialog::OnHovatenSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnHovatenKillfocus(){
	
} */
int CIVFPhieutruDialog::OnHovatenCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnNgaysinhChange(){
	
} */
/*void CIVFPhieutruDialog::OnNgaysinhSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnNgaysinhKillfocus(){
	
} */
int CIVFPhieutruDialog::OnNgaysinhCheckValue(){
	return 0;
} 
void CIVFPhieutruDialog::OnDungcuSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieutruDialog::OnDungcuSelendok(){
	 
}
/*void CIVFPhieutruDialog::OnDungcuSetfocus(){
	
}*/
/*void CIVFPhieutruDialog::OnDungcuKillfocus(){
	
}*/
long CIVFPhieutruDialog::OnDungcuLoadData(){
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
/*void CIVFPhieutruDialog::OnDungcuAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFPhieutruDialog::OnPhuongphaptruSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieutruDialog::OnPhuongphaptruSelendok(){
	 
}
/*void CIVFPhieutruDialog::OnPhuongphaptruSetfocus(){
	
}*/
/*void CIVFPhieutruDialog::OnPhuongphaptruKillfocus(){
	
}*/
long CIVFPhieutruDialog::OnPhuongphaptruLoadData(){
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
/*void CIVFPhieutruDialog::OnPhuongphaptruAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFPhieutruDialog::OnMoitruongtruSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieutruDialog::OnMoitruongtruSelendok(){
	 
}
/*void CIVFPhieutruDialog::OnMoitruongtruSetfocus(){
	
}*/
/*void CIVFPhieutruDialog::OnMoitruongtruKillfocus(){
	
}*/
long CIVFPhieutruDialog::OnMoitruongtruLoadData(){
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
/*void CIVFPhieutruDialog::OnMoitruongtruAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFPhieutruDialog::OnThungtruSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieutruDialog::OnThungtruSelendok(){
	 
}
/*void CIVFPhieutruDialog::OnThungtruSetfocus(){
	
}*/
/*void CIVFPhieutruDialog::OnThungtruKillfocus(){
	
}*/
long CIVFPhieutruDialog::OnThungtruLoadData(){
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
/*void CIVFPhieutruDialog::OnThungtruAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFPhieutruDialog::OnGiatruSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieutruDialog::OnGiatruSelendok(){
	 
}
/*void CIVFPhieutruDialog::OnGiatruSetfocus(){
	
}*/
/*void CIVFPhieutruDialog::OnGiatruKillfocus(){
	
}*/
long CIVFPhieutruDialog::OnGiatruLoadData(){
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
/*void CIVFPhieutruDialog::OnGiatruAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFPhieutruDialog::OnCassetteSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieutruDialog::OnCassetteSelendok(){
	 
}
/*void CIVFPhieutruDialog::OnCassetteSetfocus(){
	
}*/
/*void CIVFPhieutruDialog::OnCassetteKillfocus(){
	
}*/
long CIVFPhieutruDialog::OnCassetteLoadData(){
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
/*void CIVFPhieutruDialog::OnCassetteAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFPhieutruDialog::OnTopChange(){
	
} */
/*void CIVFPhieutruDialog::OnTopSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnTopKillfocus(){
	
} */
int CIVFPhieutruDialog::OnTopCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnMautopChange(){
	
} */
/*void CIVFPhieutruDialog::OnMautopSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnMautopKillfocus(){
	
} */
int CIVFPhieutruDialog::OnMautopCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnSophoiChange(){
	
} */
/*void CIVFPhieutruDialog::OnSophoiSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnSophoiKillfocus(){
	
} */
int CIVFPhieutruDialog::OnSophoiCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnNgaychochutChange(){
	
} */
/*void CIVFPhieutruDialog::OnNgaychochutSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnNgaychochutKillfocus(){
	
} */
int CIVFPhieutruDialog::OnNgaychochutCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnNgaydoinitoChange(){
	
} */
/*void CIVFPhieutruDialog::OnNgaydoinitoSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnNgaydoinitoKillfocus(){
	
} */
int CIVFPhieutruDialog::OnNgaydoinitoCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnSoluongmauChange(){
	
} */
/*void CIVFPhieutruDialog::OnSoluongmauSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnSoluongmauKillfocus(){
	
} */
int CIVFPhieutruDialog::OnSoluongmauCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnGiaidoanChange(){
	
} */
/*void CIVFPhieutruDialog::OnGiaidoanSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnGiaidoanKillfocus(){
	
} */
int CIVFPhieutruDialog::OnGiaidoanCheckValue(){
	return 0;
} 
void CIVFPhieutruDialog::OnNoitiepnhanSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieutruDialog::OnNoitiepnhanSelendok(){
	 
}
/*void CIVFPhieutruDialog::OnNoitiepnhanSetfocus(){
	
}*/
/*void CIVFPhieutruDialog::OnNoitiepnhanKillfocus(){
	
}*/
long CIVFPhieutruDialog::OnNoitiepnhanLoadData(){
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
/*void CIVFPhieutruDialog::OnNoitiepnhanAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFPhieutruDialog::OnTgtiepnhanChange(){
	
} */
/*void CIVFPhieutruDialog::OnTgtiepnhanSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnTgtiepnhanKillfocus(){
	
} */
int CIVFPhieutruDialog::OnTgtiepnhanCheckValue(){
	return 0;
} 
void CIVFPhieutruDialog::OnNguoiluutruSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieutruDialog::OnNguoiluutruSelendok(){
	 
}
/*void CIVFPhieutruDialog::OnNguoiluutruSetfocus(){
	
}*/
/*void CIVFPhieutruDialog::OnNguoiluutruKillfocus(){
	
}*/
long CIVFPhieutruDialog::OnNguoiluutruLoadData(){
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
/*void CIVFPhieutruDialog::OnNguoiluutruAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFPhieutruDialog::OnTgluuChange(){
	
} */
/*void CIVFPhieutruDialog::OnTgluuSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnTgluuKillfocus(){
	
} */
int CIVFPhieutruDialog::OnTgluuCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnNgayhethanChange(){
	
} */
/*void CIVFPhieutruDialog::OnNgayhethanSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnNgayhethanKillfocus(){
	
} */
int CIVFPhieutruDialog::OnNgayhethanCheckValue(){
	return 0;
} 
/*void CIVFPhieutruDialog::OnGhichuChange(){
	
} */
/*void CIVFPhieutruDialog::OnGhichuSetfocus(){
	
} */
/*void CIVFPhieutruDialog::OnGhichuKillfocus(){
	
} */
int CIVFPhieutruDialog::OnGhichuCheckValue(){
	return 0;
} 
void CIVFPhieutruDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieutruDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFPhieutruDialog::OnAddIVFPhieutruDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFPhieutruDialog::OnEditIVFPhieutruDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFPhieutruDialog::OnDeleteIVFPhieutruDialog(){
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
 		OnCancelIVFPhieutruDialog();
 	}
	return 0;
}
int CIVFPhieutruDialog::OnSaveIVFPhieutruDialog(){
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
 		//OnIVFPhieutruDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFPhieutruDialog::OnCancelIVFPhieutruDialog(){
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
int CIVFPhieutruDialog::OnIVFPhieutruDialogListLoadData(){
	return 0;
}
