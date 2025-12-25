#include "IVFPhieuTheoDoiPhoiDialog.h"
#include "MainFrm.h"
static void _OnXinTrungSelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnXinTrungSelect();
}
static void _OnIVFSelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnIVFSelect();
}
static void _OnICSISelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnICSISelect();
}
static void _OnICSIAOASelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnICSIAOASelect();
}
/*static void _OnNgayChocHutChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNgayChocHutChange();
} */
/*static void _OnNgayChocHutSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNgayChocHutSetfocus();} */ 
/*static void _OnNgayChocHutKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNgayChocHutKillfocus();
} */
static int _OnNgayChocHutCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNgayChocHutCheckValue();
} 
static void _OnTuoiSelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnTuoiSelect();
}
static void _OnTruSelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnTruSelect();
}
static void _OnPESASelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnPESASelect();
}
static void _OnTESESelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnTESESelect();
}
static void _OnBSChocHutSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieuTheoDoiPhoiDialog* )pWnd)->OnBSChocHutSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBSChocHutSelendokFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnBSChocHutSelendok();
}
/*static void _OnBSChocHutSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnBSChocHutKillfocus();
}*/
/*static void _OnBSChocHutKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnBSChocHutKillfocus();
}*/
static long _OnBSChocHutLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnBSChocHutLoadData();
}
/*static void _OnBSChocHutAddNewFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnBSChocHutAddNew();
}*/
/*static void _OnVChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnVChange();
} */
/*static void _OnVSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnVSetfocus();} */ 
/*static void _OnVKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnVKillfocus();
} */
static int _OnVCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnVCheckValue();
} 
/*static void _OnMDChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnMDChange();
} */
/*static void _OnMDSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnMDSetfocus();} */ 
/*static void _OnMDKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnMDKillfocus();
} */
static int _OnMDCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnMDCheckValue();
} 
/*static void _OnDDChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDDChange();
} */
/*static void _OnDDSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDDSetfocus();} */ 
/*static void _OnDDKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDDKillfocus();
} */
static int _OnDDCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDDCheckValue();
} 
/*static void _OnHDChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnHDChange();
} */
/*static void _OnHDSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnHDSetfocus();} */ 
/*static void _OnHDKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnHDKillfocus();
} */
static int _OnHDCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnHDCheckValue();
} 
/*static void _OnGioHCGChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioHCGChange();
} */
/*static void _OnGioHCGSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioHCGSetfocus();} */ 
/*static void _OnGioHCGKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioHCGKillfocus();
} */
static int _OnGioHCGCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioHCGCheckValue();
} 
/*static void _OnGioChocHutChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioChocHutChange();
} */
/*static void _OnGioChocHutSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioChocHutSetfocus();} */ 
/*static void _OnGioChocHutKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioChocHutKillfocus();
} */
static int _OnGioChocHutCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioChocHutCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnDanhgiachatluongtrungChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhgiachatluongtrungChange();
} */
/*static void _OnDanhgiachatluongtrungSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhgiachatluongtrungSetfocus();} */ 
/*static void _OnDanhgiachatluongtrungKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhgiachatluongtrungKillfocus();
} */
static int _OnDanhgiachatluongtrungCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhgiachatluongtrungCheckValue();
} 
/*static void _OnNhanXetChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNhanXetChange();
} */
/*static void _OnNhanXetSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNhanXetSetfocus();} */ 
/*static void _OnNhanXetKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNhanXetKillfocus();
} */
static int _OnNhanXetCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNhanXetCheckValue();
} 
/*static void _OnDanhgiachatluongtinhtrungChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhgiachatluongtinhtrungChange();
} */
/*static void _OnDanhgiachatluongtinhtrungSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhgiachatluongtinhtrungSetfocus();} */ 
/*static void _OnDanhgiachatluongtinhtrungKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhgiachatluongtinhtrungKillfocus();
} */
static int _OnDanhgiachatluongtinhtrungCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhgiachatluongtinhtrungCheckValue();
} 
/*static void _OnTongSoTrungChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnTongSoTrungChange();
} */
/*static void _OnTongSoTrungSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnTongSoTrungSetfocus();} */ 
/*static void _OnTongSoTrungKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnTongSoTrungKillfocus();
} */
static int _OnTongSoTrungCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnTongSoTrungCheckValue();
} 
/*static void _OnSoTrungICSIChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoTrungICSIChange();
} */
/*static void _OnSoTrungICSISetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoTrungICSISetfocus();} */ 
/*static void _OnSoTrungICSIKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoTrungICSIKillfocus();
} */
static int _OnSoTrungICSICheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoTrungICSICheckValue();
} 
/*static void _OnThuTinhChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnThuTinhChange();
} */
/*static void _OnThuTinhSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnThuTinhSetfocus();} */ 
/*static void _OnThuTinhKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnThuTinhKillfocus();
} */
static int _OnThuTinhCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnThuTinhCheckValue();
} 
/*static void _OnDanhGiaChatLuongPhoiChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhGiaChatLuongPhoiChange();
} */
/*static void _OnDanhGiaChatLuongPhoiSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhGiaChatLuongPhoiSetfocus();} */ 
/*static void _OnDanhGiaChatLuongPhoiKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhGiaChatLuongPhoiKillfocus();
} */
static int _OnDanhGiaChatLuongPhoiCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnDanhGiaChatLuongPhoiCheckValue();
} 
/*static void _OnTongSoPhoiChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnTongSoPhoiChange();
} */
/*static void _OnTongSoPhoiSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnTongSoPhoiSetfocus();} */ 
/*static void _OnTongSoPhoiKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnTongSoPhoiKillfocus();
} */
static int _OnTongSoPhoiCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnTongSoPhoiCheckValue();
} 
/*static void _OnSoPhoiChuyenChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoPhoiChuyenChange();
} */
/*static void _OnSoPhoiChuyenSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoPhoiChuyenSetfocus();} */ 
/*static void _OnSoPhoiChuyenKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoPhoiChuyenKillfocus();
} */
static int _OnSoPhoiChuyenCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoPhoiChuyenCheckValue();
} 
/*static void _OnSoPhoiTruChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoPhoiTruChange();
} */
/*static void _OnSoPhoiTruSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoPhoiTruSetfocus();} */ 
/*static void _OnSoPhoiTruKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoPhoiTruKillfocus();
} */
static int _OnSoPhoiTruCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSoPhoiTruCheckValue();
} 
/*static void _OnLanChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnLanChange();
} */
/*static void _OnLanSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnLanSetfocus();} */ 
/*static void _OnLanKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnLanKillfocus();
} */
static int _OnLanCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnLanCheckValue();
} 
static void _OnDeSelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnDeSelect();
}
static void _OnChuyenPhoi_KhoSelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnChuyenPhoi_KhoSelect();
}
/*static void _OnNMTCChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNMTCChange();
} */
/*static void _OnNMTCSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNMTCSetfocus();} */ 
/*static void _OnNMTCKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNMTCKillfocus();
} */
static int _OnNMTCCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNMTCCheckValue();
} 
/*static void _OnSotPhoiChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSotPhoiChange();
} */
/*static void _OnSotPhoiSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSotPhoiSetfocus();} */ 
/*static void _OnSotPhoiKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSotPhoiKillfocus();
} */
static int _OnSotPhoiCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnSotPhoiCheckValue();
} 
static void _OnSachSelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnSachSelect();
}
static void _OnNhaySelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnNhaySelect();
}
static void _OnMauSelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnMauSelect();
}
/*static void _OnPARAChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnPARAChange();
} */
/*static void _OnPARASetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnPARASetfocus();} */ 
/*static void _OnPARAKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnPARAKillfocus();
} */
static int _OnPARACheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnPARACheckValue();
} 
/*static void _OnGioAHChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioAHChange();
} */
/*static void _OnGioAHSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioAHSetfocus();} */ 
/*static void _OnGioAHKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioAHKillfocus();
} */
static int _OnGioAHCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioAHCheckValue();
} 
static void _OnNguoiAHSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieuTheoDoiPhoiDialog* )pWnd)->OnNguoiAHSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNguoiAHSelendokFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNguoiAHSelendok();
}
/*static void _OnNguoiAHSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNguoiAHKillfocus();
}*/
/*static void _OnNguoiAHKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNguoiAHKillfocus();
}*/
static long _OnNguoiAHLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNguoiAHLoadData();
}
/*static void _OnNguoiAHAddNewFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNguoiAHAddNew();
}*/
/*static void _OnChiDinhChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnChiDinhChange();
} */
/*static void _OnChiDinhSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnChiDinhSetfocus();} */ 
/*static void _OnChiDinhKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnChiDinhKillfocus();
} */
static int _OnChiDinhCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnChiDinhCheckValue();
} 
/*static void _OnGioCPChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioCPChange();
} */
/*static void _OnGioCPSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioCPSetfocus();} */ 
/*static void _OnGioCPKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioCPKillfocus();
} */
static int _OnGioCPCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnGioCPCheckValue();
} 
static void _OnNguoiLoadSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieuTheoDoiPhoiDialog* )pWnd)->OnNguoiLoadSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNguoiLoadSelendokFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNguoiLoadSelendok();
}
/*static void _OnNguoiLoadSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNguoiLoadKillfocus();
}*/
/*static void _OnNguoiLoadKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNguoiLoadKillfocus();
}*/
static long _OnNguoiLoadLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNguoiLoadLoadData();
}
/*static void _OnNguoiLoadAddNewFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnNguoiLoadAddNew();
}*/
static void _OnBacsiCPSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieuTheoDoiPhoiDialog* )pWnd)->OnBacsiCPSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBacsiCPSelendokFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnBacsiCPSelendok();
}
/*static void _OnBacsiCPSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnBacsiCPKillfocus();
}*/
/*static void _OnBacsiCPKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnBacsiCPKillfocus();
}*/
static long _OnBacsiCPLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnBacsiCPLoadData();
}
/*static void _OnBacsiCPAddNewFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiPhoiDialog *)pWnd)->OnBacsiCPAddNew();
}*/
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiPhoiDialog *pVw = (CIVFPhieuTheoDoiPhoiDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiPhoiDialog *pVw = (CIVFPhieuTheoDoiPhoiDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiPhoiDialog *pVw = (CIVFPhieuTheoDoiPhoiDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiPhoiDialog *pVw = (CIVFPhieuTheoDoiPhoiDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiPhoiDialog *pVw = (CIVFPhieuTheoDoiPhoiDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFPhieuTheoDoiPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnAddIVFPhieuTheoDoiPhoiDialog();
} 
static int _OnEditIVFPhieuTheoDoiPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnEditIVFPhieuTheoDoiPhoiDialog();
} 
static int _OnDeleteIVFPhieuTheoDoiPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnDeleteIVFPhieuTheoDoiPhoiDialog();
} 
static int _OnSaveIVFPhieuTheoDoiPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnSaveIVFPhieuTheoDoiPhoiDialog();
} 
static int _OnCancelIVFPhieuTheoDoiPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiPhoiDialog*)pWnd)->OnCancelIVFPhieuTheoDoiPhoiDialog();
} 
CIVFPhieuTheoDoiPhoiDialog::CIVFPhieuTheoDoiPhoiDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CIVFPhieuTheoDoiPhoiDialog::~CIVFPhieuTheoDoiPhoiDialog(){
}
void CIVFPhieuTheoDoiPhoiDialog::OnCreateComponents(){
	m_wndXinTrung.Create(this, _T("Xin trứng"), 4, 6, 84, 31);
	m_wndKyThuat.Create(this, _T("Kỹ thuật"), 89, 6, 169, 31);
	m_wndIVF.Create(this, _T("IVF"), 174, 6, 254, 31);
	m_wndICSI.Create(this, _T("ICSI"), 259, 6, 351, 31);
	m_wndICSIAOA.Create(this, _T("ICSI/AOA"), 356, 6, 448, 31);
	m_wndNgayChocHutLabel.Create(this, _T("Ngày chọc hút"), 612, 6, 692, 31);
	m_wndNgayChocHut.Create(this,697, 6, 787, 31); 
	m_wndTinhTrung.Create(this, _T("Tinh trùng"), 4, 36, 84, 61);
	m_wndTuoi.Create(this, _T("Tươi"), 89, 36, 169, 61);
	m_wndTru.Create(this, _T("Trữ"), 174, 36, 254, 61);
	m_wndPESA.Create(this, _T("PESA"), 259, 36, 351, 61);
	m_wndTESE.Create(this, _T("TESE"), 356, 36, 448, 61);
	m_wndBSChocHutLabel.Create(this, _T("BS chọc hút"), 612, 36, 692, 61);
	m_wndBSChocHut.Create(this,697, 36, 917, 61); 
	m_wndVLabel.Create(this, _T("V="), 4, 66, 84, 91);
	m_wndV.Create(this,89, 66, 135, 91); 
	m_wndMl.Create(this, _T("ml"), 140, 66, 170, 91);
	m_wndMDLabel.Create(this, _T("MD"), 175, 66, 255, 91);
	m_wndMD.Create(this,260, 66, 303, 91); 
	m_wnd10_6ml.Create(this, _T("10^6ml"), 308, 66, 351, 91);
	m_wndDDLabel.Create(this, _T("DD"), 356, 66, 396, 91);
	m_wndDD.Create(this,401, 66, 450, 91); 
	m_wndpercentLabel1.Create(this, _T("%"), 455, 66, 472, 91);
	m_wndHDLabel.Create(this, _T("HD"), 477, 66, 524, 91);
	m_wndHD.Create(this,529, 66, 577, 91); 
	m_wndPercentLabel2.Create(this, _T("%"), 582, 66, 597, 91);
	m_wndGioHCGLabel.Create(this, _T("Giờ hCG"), 602, 66, 682, 91);
	m_wndGioHCG.Create(this,687, 66, 757, 91); 
	m_wndGioChocHutLabel.Create(this, _T("Giờ chọc hút"), 762, 66, 842, 91);
	m_wndGioChocHut.Create(this,847, 66, 917, 91); 
	m_wndList.Create(this,5, 96, 959, 361); 
	m_wndDanhgiachatluongtrungLabel.Create(this, _T("Đánh giá chất lượng trứng"), 5, 366, 165, 391);
	m_wndDanhgiachatluongtrung.Create(this,170, 366, 450, 391); 
	m_wndNhanXetLabel.Create(this, _T("Nhận xét"), 455, 366, 535, 391);
	m_wndNhanXet.Create(this,540, 366, 960, 391); 
	m_wndDanhgiachatluongtinhtrungLabel.Create(this, _T("Đánh giá chất lượng tinh trùng"), 5, 396, 165, 421);
	m_wndDanhgiachatluongtinhtrung.Create(this,170, 396, 450, 421); 
	m_wndTongSoTrungLabel.Create(this, _T("Tổng số trứng"), 455, 396, 535, 421);
	m_wndTongSoTrung.Create(this,540, 396, 620, 421); 
	m_wndSoTrungICSILabel.Create(this, _T("Số trứng ICSI"), 625, 396, 705, 421);
	m_wndSoTrungICSI.Create(this,710, 396, 790, 421); 
	m_wndThuTinhLabel.Create(this, _T("Thụ tinh"), 795, 396, 875, 421);
	m_wndThuTinh.Create(this,880, 396, 960, 421); 
	m_wndDanhGiaChatLuongPhoiLabel.Create(this, _T("Đánh giá chất lượng phôi"), 5, 426, 165, 451);
	m_wndDanhGiaChatLuongPhoi.Create(this,170, 426, 450, 451); 
	m_wndTongSoPhoiLabel.Create(this, _T("Tổng số phôi"), 455, 426, 535, 451);
	m_wndTongSoPhoi.Create(this,540, 426, 620, 451); 
	m_wndSoPhoiChuyenLabel.Create(this, _T("Số phôi chuyển"), 625, 426, 705, 451);
	m_wndSoPhoiChuyen.Create(this,710, 426, 790, 451); 
	m_wndSoPhoiTruLabel.Create(this, _T("Số phôi trữ"), 795, 426, 875, 451);
	m_wndSoPhoiTru.Create(this,880, 426, 960, 451); 
	m_wndLanLabel.Create(this, _T("Lần"), 5, 456, 165, 481);
	m_wndLan.Create(this,170, 456, 251, 481); 
	m_wndChuyenPhoiLabel.Create(this, _T("Chuyển phôi"), 455, 456, 535, 481);
	m_wndDe.Create(this, _T("Dễ"), 540, 456, 620, 481);
	m_wndChuyenPhoi_Kho.Create(this, _T("Khó"), 625, 456, 705, 481);
	m_wndPozziCatheter.Create(this, _T("->Pozzi+Catheter"), 710, 456, 875, 481);
	m_wndNMTCLabel.Create(this, _T("NMTC"), 5, 486, 165, 511);
	m_wndNMTC.Create(this,170, 486, 251, 511); 
	m_wndSotPhoiLabel.Create(this, _T("Sót phôi"), 455, 486, 535, 511);
	m_wndSotPhoi.Create(this,540, 486, 620, 511); 
	m_wndChuyenLan.Create(this, _T("chuyển lần 2"), 625, 486, 705, 511);
	m_wndSach.Create(this, _T("Sạch"), 710, 486, 790, 511);
	m_wndNhay.Create(this, _T("Nhầy"), 795, 486, 875, 511);
	m_wndMau.Create(this, _T("Máu"), 880, 486, 960, 511);
	m_wndPARALabel.Create(this, _T("PARA"), 5, 516, 165, 541);
	m_wndPARA.Create(this,170, 516, 251, 541); 
	m_wndGioAHLabel.Create(this, _T("Giờ AH"), 455, 516, 535, 541);
	m_wndGioAH.Create(this,540, 516, 620, 541); 
	m_wndNguoiAHLabel.Create(this, _T("Người AH"), 625, 516, 705, 541);
	m_wndNguoiAH.Create(this,710, 516, 790, 541); 
	m_wndChiDinhLabel.Create(this, _T("Chỉ định"), 5, 546, 165, 571);
	m_wndChiDinh.Create(this,170, 546, 251, 571); 
	m_wndGioCPLabel.Create(this, _T("Giờ CP"), 455, 546, 535, 571);
	m_wndGioCP.Create(this,540, 546, 620, 571); 
	m_wndNguoiLoadLabel.Create(this, _T("Người Load"), 625, 546, 705, 571);
	m_wndNguoiLoad.Create(this,710, 546, 790, 571); 
	m_wndBacsiCPLabel.Create(this, _T("Bác sĩ CP"), 795, 546, 875, 571);
	m_wndBacsiCP.Create(this,880, 546, 960, 571); 
	m_wndUpdate.Create(this, _T("&Update"), 540, 576, 620, 601);
	m_wndSave.Create(this, _T("&Save"), 625, 576, 705, 601);
	m_wndCancel.Create(this, _T("&Cancel"), 710, 576, 790, 601);
	m_wndPrint.Create(this, _T("&Print"), 795, 576, 875, 601);
	m_wndClose.Create(this, _T("&Close"), 880, 576, 960, 601);

}
void CIVFPhieuTheoDoiPhoiDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNgayChocHut.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgayChocHut.SetCheckValue(true);
	m_wndBSChocHut.SetCheckValue(true);
	m_wndBSChocHut.LimitText(35);
	m_wndV.SetLimitText(35);
	m_wndV.SetCheckValue(true);
	m_wndMD.SetLimitText(35);
	m_wndMD.SetCheckValue(true);
	m_wndDD.SetLimitText(35);
	m_wndDD.SetCheckValue(true);
	m_wndHD.SetLimitText(35);
	m_wndHD.SetCheckValue(true);
//	m_wndGioHCG.SetMax(CTime(pMF->GetSysTime()));
	m_wndGioHCG.SetCheckValue(true);
//	m_wndGioChocHut.SetMax(CTime(pMF->GetSysTime()));
	m_wndGioChocHut.SetCheckValue(true);
	m_wndDanhgiachatluongtrung.SetLimitText(35);
	m_wndDanhgiachatluongtrung.SetCheckValue(true);
	m_wndNhanXet.SetLimitText(35);
	m_wndNhanXet.SetCheckValue(true);
	m_wndDanhgiachatluongtinhtrung.SetLimitText(35);
	m_wndDanhgiachatluongtinhtrung.SetCheckValue(true);
	m_wndTongSoTrung.SetLimitText(16);
	m_wndTongSoTrung.SetCheckValue(true);
	m_wndSoTrungICSI.SetLimitText(16);
	m_wndSoTrungICSI.SetCheckValue(true);
	m_wndThuTinh.SetLimitText(16);
	m_wndThuTinh.SetCheckValue(true);
	m_wndDanhGiaChatLuongPhoi.SetLimitText(35);
	m_wndDanhGiaChatLuongPhoi.SetCheckValue(true);
	m_wndTongSoPhoi.SetLimitText(16);
	m_wndTongSoPhoi.SetCheckValue(true);
	m_wndSoPhoiChuyen.SetLimitText(16);
	m_wndSoPhoiChuyen.SetCheckValue(true);
	m_wndSoPhoiTru.SetLimitText(16);
	m_wndSoPhoiTru.SetCheckValue(true);
	m_wndLan.SetLimitText(16);
	m_wndLan.SetCheckValue(true);
	m_wndNMTC.SetLimitText(16);
	m_wndNMTC.SetCheckValue(true);
	m_wndSotPhoi.SetLimitText(16);
	m_wndSotPhoi.SetCheckValue(true);
	m_wndPARA.SetLimitText(16);
	m_wndPARA.SetCheckValue(true);
//	m_wndGioAH.SetMax(CTime(pMF->GetSysTime()));
	m_wndGioAH.SetCheckValue(true);
	m_wndNguoiAH.SetCheckValue(true);
	m_wndNguoiAH.LimitText(35);
	m_wndChiDinh.SetLimitText(35);
	m_wndChiDinh.SetCheckValue(true);
//	m_wndGioCP.SetMax(CTime(pMF->GetSysTime()));
	m_wndGioCP.SetCheckValue(true);
	m_wndNguoiLoad.SetCheckValue(true);
	m_wndNguoiLoad.LimitText(35);
	m_wndBacsiCP.SetCheckValue(true);
	m_wndBacsiCP.LimitText(35);


	m_wndBSChocHut.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBSChocHut.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Ngày 0"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Ngày 1"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Ngày 2"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Ngày 3"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Ngày 4"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Ngày 5"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(7, _T("Ngày 6"), CFMT_TEXT, 150);




	m_wndNguoiLoad.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNguoiLoad.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndBacsiCP.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBacsiCP.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CIVFPhieuTheoDoiPhoiDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndXinTrung.SetEvent(WE_CLICK, _OnXinTrungSelectFnc);
	m_wndIVF.SetEvent(WE_CLICK, _OnIVFSelectFnc);
	m_wndICSI.SetEvent(WE_CLICK, _OnICSISelectFnc);
	m_wndICSIAOA.SetEvent(WE_CLICK, _OnICSIAOASelectFnc);
	//m_wndNgayChocHut.SetEvent(WE_CHANGE, _OnNgayChocHutChangeFnc);
	//m_wndNgayChocHut.SetEvent(WE_SETFOCUS, _OnNgayChocHutSetfocusFnc);
	//m_wndNgayChocHut.SetEvent(WE_KILLFOCUS, _OnNgayChocHutKillfocusFnc);
	m_wndNgayChocHut.SetEvent(WE_CHECKVALUE, _OnNgayChocHutCheckValueFnc);
	m_wndTuoi.SetEvent(WE_CLICK, _OnTuoiSelectFnc);
	m_wndTru.SetEvent(WE_CLICK, _OnTruSelectFnc);
	m_wndPESA.SetEvent(WE_CLICK, _OnPESASelectFnc);
	m_wndTESE.SetEvent(WE_CLICK, _OnTESESelectFnc);
	m_wndBSChocHut.SetEvent(WE_SELENDOK, _OnBSChocHutSelendokFnc);
	//m_wndBSChocHut.SetEvent(WE_SETFOCUS, _OnBSChocHutSetfocusFnc);
	//m_wndBSChocHut.SetEvent(WE_KILLFOCUS, _OnBSChocHutKillfocusFnc);
	m_wndBSChocHut.SetEvent(WE_SELCHANGE, _OnBSChocHutSelectChangeFnc);
	m_wndBSChocHut.SetEvent(WE_LOADDATA, _OnBSChocHutLoadDataFnc);
	//m_wndBSChocHut.SetEvent(WE_ADDNEW, _OnBSChocHutAddNewFnc);
	//m_wndV.SetEvent(WE_CHANGE, _OnVChangeFnc);
	//m_wndV.SetEvent(WE_SETFOCUS, _OnVSetfocusFnc);
	//m_wndV.SetEvent(WE_KILLFOCUS, _OnVKillfocusFnc);
	m_wndV.SetEvent(WE_CHECKVALUE, _OnVCheckValueFnc);
	//m_wndMD.SetEvent(WE_CHANGE, _OnMDChangeFnc);
	//m_wndMD.SetEvent(WE_SETFOCUS, _OnMDSetfocusFnc);
	//m_wndMD.SetEvent(WE_KILLFOCUS, _OnMDKillfocusFnc);
	m_wndMD.SetEvent(WE_CHECKVALUE, _OnMDCheckValueFnc);
	//m_wndDD.SetEvent(WE_CHANGE, _OnDDChangeFnc);
	//m_wndDD.SetEvent(WE_SETFOCUS, _OnDDSetfocusFnc);
	//m_wndDD.SetEvent(WE_KILLFOCUS, _OnDDKillfocusFnc);
	m_wndDD.SetEvent(WE_CHECKVALUE, _OnDDCheckValueFnc);
	//m_wndHD.SetEvent(WE_CHANGE, _OnHDChangeFnc);
	//m_wndHD.SetEvent(WE_SETFOCUS, _OnHDSetfocusFnc);
	//m_wndHD.SetEvent(WE_KILLFOCUS, _OnHDKillfocusFnc);
	m_wndHD.SetEvent(WE_CHECKVALUE, _OnHDCheckValueFnc);
	//m_wndGioHCG.SetEvent(WE_CHANGE, _OnGioHCGChangeFnc);
	//m_wndGioHCG.SetEvent(WE_SETFOCUS, _OnGioHCGSetfocusFnc);
	//m_wndGioHCG.SetEvent(WE_KILLFOCUS, _OnGioHCGKillfocusFnc);
	m_wndGioHCG.SetEvent(WE_CHECKVALUE, _OnGioHCGCheckValueFnc);
	//m_wndGioChocHut.SetEvent(WE_CHANGE, _OnGioChocHutChangeFnc);
	//m_wndGioChocHut.SetEvent(WE_SETFOCUS, _OnGioChocHutSetfocusFnc);
	//m_wndGioChocHut.SetEvent(WE_KILLFOCUS, _OnGioChocHutKillfocusFnc);
	m_wndGioChocHut.SetEvent(WE_CHECKVALUE, _OnGioChocHutCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDanhgiachatluongtrung.SetEvent(WE_CHANGE, _OnDanhgiachatluongtrungChangeFnc);
	//m_wndDanhgiachatluongtrung.SetEvent(WE_SETFOCUS, _OnDanhgiachatluongtrungSetfocusFnc);
	//m_wndDanhgiachatluongtrung.SetEvent(WE_KILLFOCUS, _OnDanhgiachatluongtrungKillfocusFnc);
	m_wndDanhgiachatluongtrung.SetEvent(WE_CHECKVALUE, _OnDanhgiachatluongtrungCheckValueFnc);
	//m_wndNhanXet.SetEvent(WE_CHANGE, _OnNhanXetChangeFnc);
	//m_wndNhanXet.SetEvent(WE_SETFOCUS, _OnNhanXetSetfocusFnc);
	//m_wndNhanXet.SetEvent(WE_KILLFOCUS, _OnNhanXetKillfocusFnc);
	m_wndNhanXet.SetEvent(WE_CHECKVALUE, _OnNhanXetCheckValueFnc);
	//m_wndDanhgiachatluongtinhtrung.SetEvent(WE_CHANGE, _OnDanhgiachatluongtinhtrungChangeFnc);
	//m_wndDanhgiachatluongtinhtrung.SetEvent(WE_SETFOCUS, _OnDanhgiachatluongtinhtrungSetfocusFnc);
	//m_wndDanhgiachatluongtinhtrung.SetEvent(WE_KILLFOCUS, _OnDanhgiachatluongtinhtrungKillfocusFnc);
	m_wndDanhgiachatluongtinhtrung.SetEvent(WE_CHECKVALUE, _OnDanhgiachatluongtinhtrungCheckValueFnc);
	//m_wndTongSoTrung.SetEvent(WE_CHANGE, _OnTongSoTrungChangeFnc);
	//m_wndTongSoTrung.SetEvent(WE_SETFOCUS, _OnTongSoTrungSetfocusFnc);
	//m_wndTongSoTrung.SetEvent(WE_KILLFOCUS, _OnTongSoTrungKillfocusFnc);
	m_wndTongSoTrung.SetEvent(WE_CHECKVALUE, _OnTongSoTrungCheckValueFnc);
	//m_wndSoTrungICSI.SetEvent(WE_CHANGE, _OnSoTrungICSIChangeFnc);
	//m_wndSoTrungICSI.SetEvent(WE_SETFOCUS, _OnSoTrungICSISetfocusFnc);
	//m_wndSoTrungICSI.SetEvent(WE_KILLFOCUS, _OnSoTrungICSIKillfocusFnc);
	m_wndSoTrungICSI.SetEvent(WE_CHECKVALUE, _OnSoTrungICSICheckValueFnc);
	//m_wndThuTinh.SetEvent(WE_CHANGE, _OnThuTinhChangeFnc);
	//m_wndThuTinh.SetEvent(WE_SETFOCUS, _OnThuTinhSetfocusFnc);
	//m_wndThuTinh.SetEvent(WE_KILLFOCUS, _OnThuTinhKillfocusFnc);
	m_wndThuTinh.SetEvent(WE_CHECKVALUE, _OnThuTinhCheckValueFnc);
	//m_wndDanhGiaChatLuongPhoi.SetEvent(WE_CHANGE, _OnDanhGiaChatLuongPhoiChangeFnc);
	//m_wndDanhGiaChatLuongPhoi.SetEvent(WE_SETFOCUS, _OnDanhGiaChatLuongPhoiSetfocusFnc);
	//m_wndDanhGiaChatLuongPhoi.SetEvent(WE_KILLFOCUS, _OnDanhGiaChatLuongPhoiKillfocusFnc);
	m_wndDanhGiaChatLuongPhoi.SetEvent(WE_CHECKVALUE, _OnDanhGiaChatLuongPhoiCheckValueFnc);
	//m_wndTongSoPhoi.SetEvent(WE_CHANGE, _OnTongSoPhoiChangeFnc);
	//m_wndTongSoPhoi.SetEvent(WE_SETFOCUS, _OnTongSoPhoiSetfocusFnc);
	//m_wndTongSoPhoi.SetEvent(WE_KILLFOCUS, _OnTongSoPhoiKillfocusFnc);
	m_wndTongSoPhoi.SetEvent(WE_CHECKVALUE, _OnTongSoPhoiCheckValueFnc);
	//m_wndSoPhoiChuyen.SetEvent(WE_CHANGE, _OnSoPhoiChuyenChangeFnc);
	//m_wndSoPhoiChuyen.SetEvent(WE_SETFOCUS, _OnSoPhoiChuyenSetfocusFnc);
	//m_wndSoPhoiChuyen.SetEvent(WE_KILLFOCUS, _OnSoPhoiChuyenKillfocusFnc);
	m_wndSoPhoiChuyen.SetEvent(WE_CHECKVALUE, _OnSoPhoiChuyenCheckValueFnc);
	//m_wndSoPhoiTru.SetEvent(WE_CHANGE, _OnSoPhoiTruChangeFnc);
	//m_wndSoPhoiTru.SetEvent(WE_SETFOCUS, _OnSoPhoiTruSetfocusFnc);
	//m_wndSoPhoiTru.SetEvent(WE_KILLFOCUS, _OnSoPhoiTruKillfocusFnc);
	m_wndSoPhoiTru.SetEvent(WE_CHECKVALUE, _OnSoPhoiTruCheckValueFnc);
	//m_wndLan.SetEvent(WE_CHANGE, _OnLanChangeFnc);
	//m_wndLan.SetEvent(WE_SETFOCUS, _OnLanSetfocusFnc);
	//m_wndLan.SetEvent(WE_KILLFOCUS, _OnLanKillfocusFnc);
	m_wndLan.SetEvent(WE_CHECKVALUE, _OnLanCheckValueFnc);
	m_wndDe.SetEvent(WE_CLICK, _OnDeSelectFnc);
	m_wndChuyenPhoi_Kho.SetEvent(WE_CLICK, _OnChuyenPhoi_KhoSelectFnc);
	//m_wndNMTC.SetEvent(WE_CHANGE, _OnNMTCChangeFnc);
	//m_wndNMTC.SetEvent(WE_SETFOCUS, _OnNMTCSetfocusFnc);
	//m_wndNMTC.SetEvent(WE_KILLFOCUS, _OnNMTCKillfocusFnc);
	m_wndNMTC.SetEvent(WE_CHECKVALUE, _OnNMTCCheckValueFnc);
	//m_wndSotPhoi.SetEvent(WE_CHANGE, _OnSotPhoiChangeFnc);
	//m_wndSotPhoi.SetEvent(WE_SETFOCUS, _OnSotPhoiSetfocusFnc);
	//m_wndSotPhoi.SetEvent(WE_KILLFOCUS, _OnSotPhoiKillfocusFnc);
	m_wndSotPhoi.SetEvent(WE_CHECKVALUE, _OnSotPhoiCheckValueFnc);
	m_wndSach.SetEvent(WE_CLICK, _OnSachSelectFnc);
	m_wndNhay.SetEvent(WE_CLICK, _OnNhaySelectFnc);
	m_wndMau.SetEvent(WE_CLICK, _OnMauSelectFnc);
	//m_wndPARA.SetEvent(WE_CHANGE, _OnPARAChangeFnc);
	//m_wndPARA.SetEvent(WE_SETFOCUS, _OnPARASetfocusFnc);
	//m_wndPARA.SetEvent(WE_KILLFOCUS, _OnPARAKillfocusFnc);
	m_wndPARA.SetEvent(WE_CHECKVALUE, _OnPARACheckValueFnc);
	//m_wndGioAH.SetEvent(WE_CHANGE, _OnGioAHChangeFnc);
	//m_wndGioAH.SetEvent(WE_SETFOCUS, _OnGioAHSetfocusFnc);
	//m_wndGioAH.SetEvent(WE_KILLFOCUS, _OnGioAHKillfocusFnc);
	m_wndGioAH.SetEvent(WE_CHECKVALUE, _OnGioAHCheckValueFnc);
	m_wndNguoiAH.SetEvent(WE_SELENDOK, _OnNguoiAHSelendokFnc);
	//m_wndNguoiAH.SetEvent(WE_SETFOCUS, _OnNguoiAHSetfocusFnc);
	//m_wndNguoiAH.SetEvent(WE_KILLFOCUS, _OnNguoiAHKillfocusFnc);
	m_wndNguoiAH.SetEvent(WE_SELCHANGE, _OnNguoiAHSelectChangeFnc);
	m_wndNguoiAH.SetEvent(WE_LOADDATA, _OnNguoiAHLoadDataFnc);
	//m_wndNguoiAH.SetEvent(WE_ADDNEW, _OnNguoiAHAddNewFnc);
	//m_wndChiDinh.SetEvent(WE_CHANGE, _OnChiDinhChangeFnc);
	//m_wndChiDinh.SetEvent(WE_SETFOCUS, _OnChiDinhSetfocusFnc);
	//m_wndChiDinh.SetEvent(WE_KILLFOCUS, _OnChiDinhKillfocusFnc);
	m_wndChiDinh.SetEvent(WE_CHECKVALUE, _OnChiDinhCheckValueFnc);
	//m_wndGioCP.SetEvent(WE_CHANGE, _OnGioCPChangeFnc);
	//m_wndGioCP.SetEvent(WE_SETFOCUS, _OnGioCPSetfocusFnc);
	//m_wndGioCP.SetEvent(WE_KILLFOCUS, _OnGioCPKillfocusFnc);
	m_wndGioCP.SetEvent(WE_CHECKVALUE, _OnGioCPCheckValueFnc);
	m_wndNguoiLoad.SetEvent(WE_SELENDOK, _OnNguoiLoadSelendokFnc);
	//m_wndNguoiLoad.SetEvent(WE_SETFOCUS, _OnNguoiLoadSetfocusFnc);
	//m_wndNguoiLoad.SetEvent(WE_KILLFOCUS, _OnNguoiLoadKillfocusFnc);
	m_wndNguoiLoad.SetEvent(WE_SELCHANGE, _OnNguoiLoadSelectChangeFnc);
	m_wndNguoiLoad.SetEvent(WE_LOADDATA, _OnNguoiLoadLoadDataFnc);
	//m_wndNguoiLoad.SetEvent(WE_ADDNEW, _OnNguoiLoadAddNewFnc);
	m_wndBacsiCP.SetEvent(WE_SELENDOK, _OnBacsiCPSelendokFnc);
	//m_wndBacsiCP.SetEvent(WE_SETFOCUS, _OnBacsiCPSetfocusFnc);
	//m_wndBacsiCP.SetEvent(WE_KILLFOCUS, _OnBacsiCPKillfocusFnc);
	m_wndBacsiCP.SetEvent(WE_SELCHANGE, _OnBacsiCPSelectChangeFnc);
	m_wndBacsiCP.SetEvent(WE_LOADDATA, _OnBacsiCPLoadDataFnc);
	//m_wndBacsiCP.SetEvent(WE_ADDNEW, _OnBacsiCPAddNewFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CIVFPhieuTheoDoiPhoiDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndXinTrung.GetDlgCtrlID(), m_bXinTrung);
	DDX_Check(pDX, m_wndIVF.GetDlgCtrlID(), m_bIVF);
	DDX_Check(pDX, m_wndICSI.GetDlgCtrlID(), m_bICSI);
	DDX_Check(pDX, m_wndICSIAOA.GetDlgCtrlID(), m_bICSIAOA);
	DDX_TextEx(pDX, m_wndNgayChocHut.GetDlgCtrlID(), m_szNgayChocHut);
	DDX_Check(pDX, m_wndTuoi.GetDlgCtrlID(), m_bTuoi);
	DDX_Check(pDX, m_wndTru.GetDlgCtrlID(), m_bTru);
	DDX_Check(pDX, m_wndPESA.GetDlgCtrlID(), m_bPESA);
	DDX_Check(pDX, m_wndTESE.GetDlgCtrlID(), m_bTESE);
	DDX_TextEx(pDX, m_wndBSChocHut.GetDlgCtrlID(), m_szBSChocHutKey);
	DDX_Text(pDX, m_wndV.GetDlgCtrlID(), m_szV);
	DDX_Text(pDX, m_wndMD.GetDlgCtrlID(), m_szMD);
	DDX_Text(pDX, m_wndDD.GetDlgCtrlID(), m_szDD);
	DDX_Text(pDX, m_wndHD.GetDlgCtrlID(), m_szHD);
	DDX_TextEx(pDX, m_wndGioHCG.GetDlgCtrlID(), m_szGioHCG);
	DDX_TextEx(pDX, m_wndGioChocHut.GetDlgCtrlID(), m_szGioChocHut);
	DDX_Text(pDX, m_wndDanhgiachatluongtrung.GetDlgCtrlID(), m_szDanhgiachatluongtrung);
	DDX_Text(pDX, m_wndNhanXet.GetDlgCtrlID(), m_szNhanXet);
	DDX_Text(pDX, m_wndDanhgiachatluongtinhtrung.GetDlgCtrlID(), m_szDanhgiachatluongtinhtrung);
	DDX_Text(pDX, m_wndTongSoTrung.GetDlgCtrlID(), m_nTongSoTrung);
	DDX_Text(pDX, m_wndSoTrungICSI.GetDlgCtrlID(), m_nSoTrungICSI);
	DDX_Text(pDX, m_wndThuTinh.GetDlgCtrlID(), m_nThuTinh);
	DDX_Text(pDX, m_wndDanhGiaChatLuongPhoi.GetDlgCtrlID(), m_szDanhGiaChatLuongPhoi);
	DDX_Text(pDX, m_wndTongSoPhoi.GetDlgCtrlID(), m_nTongSoPhoi);
	DDX_Text(pDX, m_wndSoPhoiChuyen.GetDlgCtrlID(), m_nSoPhoiChuyen);
	DDX_Text(pDX, m_wndSoPhoiTru.GetDlgCtrlID(), m_nSoPhoiTru);
	DDX_Text(pDX, m_wndLan.GetDlgCtrlID(), m_nLan);
	DDX_Check(pDX, m_wndDe.GetDlgCtrlID(), m_bDe);
	DDX_Check(pDX, m_wndChuyenPhoi_Kho.GetDlgCtrlID(), m_bChuyenPhoi_Kho);
	DDX_Text(pDX, m_wndNMTC.GetDlgCtrlID(), m_nNMTC);
	DDX_Text(pDX, m_wndSotPhoi.GetDlgCtrlID(), m_nSotPhoi);
	DDX_Check(pDX, m_wndSach.GetDlgCtrlID(), m_bSach);
	DDX_Check(pDX, m_wndNhay.GetDlgCtrlID(), m_bNhay);
	DDX_Check(pDX, m_wndMau.GetDlgCtrlID(), m_bMau);
	DDX_Text(pDX, m_wndPARA.GetDlgCtrlID(), m_nPARA);
	DDX_TextEx(pDX, m_wndGioAH.GetDlgCtrlID(), m_szGioAH);
	DDX_TextEx(pDX, m_wndNguoiAH.GetDlgCtrlID(), m_szNguoiAHKey);
	DDX_Text(pDX, m_wndChiDinh.GetDlgCtrlID(), m_szChiDinh);
	DDX_TextEx(pDX, m_wndGioCP.GetDlgCtrlID(), m_szGioCP);
	DDX_TextEx(pDX, m_wndNguoiLoad.GetDlgCtrlID(), m_szNguoiLoadKey);
	DDX_TextEx(pDX, m_wndBacsiCP.GetDlgCtrlID(), m_szBacsiCPKey);

}
void CIVFPhieuTheoDoiPhoiDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("XinTrung")] =  m_bXinTrung;
	m_jData[_T("IVF")] =  m_bIVF;
	m_jData[_T("ICSI")] =  m_bICSI;
	m_jData[_T("ICSIAOA")] =  m_bICSIAOA;
	m_jData[_T("NgayChocHut")] =  m_szNgayChocHut;
	m_jData[_T("Tuoi")] =  m_bTuoi;
	m_jData[_T("Tru")] =  m_bTru;
	m_jData[_T("PESA")] =  m_bPESA;
	m_jData[_T("TESE")] =  m_bTESE;
	m_jData[_T("BSChocHut")] =  m_szBSChocHutKey;
	m_jData[_T("V")] =  m_szV;
	m_jData[_T("MD")] =  m_szMD;
	m_jData[_T("DD")] =  m_szDD;
	m_jData[_T("HD")] =  m_szHD;
	m_jData[_T("GioHCG")] =  m_szGioHCG;
	m_jData[_T("GioChocHut")] =  m_szGioChocHut;
	m_jData[_T("Danhgiachatluongtrung")] =  m_szDanhgiachatluongtrung;
	m_jData[_T("NhanXet")] =  m_szNhanXet;
	m_jData[_T("Danhgiachatluongtinhtrung")] =  m_szDanhgiachatluongtinhtrung;
	m_jData[_T("TongSoTrung")] =  m_nTongSoTrung;
	m_jData[_T("SoTrungICSI")] =  m_nSoTrungICSI;
	m_jData[_T("ThuTinh")] =  m_nThuTinh;
	m_jData[_T("DanhGiaChatLuongPhoi")] =  m_szDanhGiaChatLuongPhoi;
	m_jData[_T("TongSoPhoi")] =  m_nTongSoPhoi;
	m_jData[_T("SoPhoiChuyen")] =  m_nSoPhoiChuyen;
	m_jData[_T("SoPhoiTru")] =  m_nSoPhoiTru;
	m_jData[_T("Lan")] =  m_nLan;
	m_jData[_T("De")] =  m_bDe;
	m_jData[_T("ChuyenPhoi_Kho")] =  m_bChuyenPhoi_Kho;
	m_jData[_T("NMTC")] =  m_nNMTC;
	m_jData[_T("SotPhoi")] =  m_nSotPhoi;
	m_jData[_T("Sach")] =  m_bSach;
	m_jData[_T("Nhay")] =  m_bNhay;
	m_jData[_T("Mau")] =  m_bMau;
	m_jData[_T("PARA")] =  m_nPARA;
	m_jData[_T("GioAH")] =  m_szGioAH;
	m_jData[_T("NguoiAH")] =  m_szNguoiAHKey;
	m_jData[_T("ChiDinh")] =  m_szChiDinh;
	m_jData[_T("GioCP")] =  m_szGioCP;
	m_jData[_T("NguoiLoad")] =  m_szNguoiLoadKey;
	m_jData[_T("BacsiCP")] =  m_szBacsiCPKey;
	}
	else
	{
			
	m_jData[_T("XinTrung")].GetValue(m_bXinTrung);
	m_jData[_T("IVF")].GetValue(m_bIVF);
	m_jData[_T("ICSI")].GetValue(m_bICSI);
	m_jData[_T("ICSIAOA")].GetValue(m_bICSIAOA);
	m_jData[_T("NgayChocHut")].GetValue(m_szNgayChocHut);
	m_jData[_T("Tuoi")].GetValue(m_bTuoi);
	m_jData[_T("Tru")].GetValue(m_bTru);
	m_jData[_T("PESA")].GetValue(m_bPESA);
	m_jData[_T("TESE")].GetValue(m_bTESE);
	m_jData[_T("BSChocHut")].GetValue(m_szBSChocHutKey);
	m_jData[_T("V")].GetValue(m_szV);
	m_jData[_T("MD")].GetValue(m_szMD);
	m_jData[_T("DD")].GetValue(m_szDD);
	m_jData[_T("HD")].GetValue(m_szHD);
	m_jData[_T("GioHCG")].GetValue(m_szGioHCG);
	m_jData[_T("GioChocHut")].GetValue(m_szGioChocHut);
	m_jData[_T("Danhgiachatluongtrung")].GetValue(m_szDanhgiachatluongtrung);
	m_jData[_T("NhanXet")].GetValue(m_szNhanXet);
	m_jData[_T("Danhgiachatluongtinhtrung")].GetValue(m_szDanhgiachatluongtinhtrung);
	m_jData[_T("TongSoTrung")].GetValue(m_nTongSoTrung);
	m_jData[_T("SoTrungICSI")].GetValue(m_nSoTrungICSI);
	m_jData[_T("ThuTinh")].GetValue(m_nThuTinh);
	m_jData[_T("DanhGiaChatLuongPhoi")].GetValue(m_szDanhGiaChatLuongPhoi);
	m_jData[_T("TongSoPhoi")].GetValue(m_nTongSoPhoi);
	m_jData[_T("SoPhoiChuyen")].GetValue(m_nSoPhoiChuyen);
	m_jData[_T("SoPhoiTru")].GetValue(m_nSoPhoiTru);
	m_jData[_T("Lan")].GetValue(m_nLan);
	m_jData[_T("De")].GetValue(m_bDe);
	m_jData[_T("ChuyenPhoi_Kho")].GetValue(m_bChuyenPhoi_Kho);
	m_jData[_T("NMTC")].GetValue(m_nNMTC);
	m_jData[_T("SotPhoi")].GetValue(m_nSotPhoi);
	m_jData[_T("Sach")].GetValue(m_bSach);
	m_jData[_T("Nhay")].GetValue(m_bNhay);
	m_jData[_T("Mau")].GetValue(m_bMau);
	m_jData[_T("PARA")].GetValue(m_nPARA);
	m_jData[_T("GioAH")].GetValue(m_szGioAH);
	m_jData[_T("NguoiAH")].GetValue(m_szNguoiAHKey);
	m_jData[_T("ChiDinh")].GetValue(m_szChiDinh);
	m_jData[_T("GioCP")].GetValue(m_szGioCP);
	m_jData[_T("NguoiLoad")].GetValue(m_szNguoiLoadKey);
	m_jData[_T("BacsiCP")].GetValue(m_szBacsiCPKey);
	}

}
void CIVFPhieuTheoDoiPhoiDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFPhieuTheoDoiPhoiDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFPhieuTheoDoiPhoiDialog::SetDefaultValues(){

	m_bXinTrung=FALSE;
	m_bIVF=FALSE;
	m_bICSI=FALSE;
	m_bICSIAOA=FALSE;
	m_szNgayChocHut.Empty();
	m_bTuoi=FALSE;
	m_bTru=FALSE;
	m_bPESA=FALSE;
	m_bTESE=FALSE;
	m_szBSChocHutKey.Empty();
	m_szV.Empty();
	m_szMD.Empty();
	m_szDD.Empty();
	m_szHD.Empty();
	m_szGioHCG.Empty();
	m_szGioChocHut.Empty();
	m_szDanhgiachatluongtrung.Empty();
	m_szNhanXet.Empty();
	m_szDanhgiachatluongtinhtrung.Empty();
	m_nTongSoTrung=0;
	m_nSoTrungICSI=0;
	m_nThuTinh=0;
	m_szDanhGiaChatLuongPhoi.Empty();
	m_nTongSoPhoi=0;
	m_nSoPhoiChuyen=0;
	m_nSoPhoiTru=0;
	m_nLan=0;
	m_bDe=FALSE;
	m_bChuyenPhoi_Kho=FALSE;
	m_nNMTC=0;
	m_nSotPhoi=0;
	m_bSach=FALSE;
	m_bNhay=FALSE;
	m_bMau=FALSE;
	m_nPARA=0;
	m_szGioAH.Empty();
	m_szNguoiAHKey.Empty();
	m_szChiDinh.Empty();
	m_szGioCP.Empty();
	m_szNguoiLoadKey.Empty();
	m_szBacsiCPKey.Empty();

}
int CIVFPhieuTheoDoiPhoiDialog::SetMode(int nMode){
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
	void CIVFPhieuTheoDoiPhoiDialog::OnXinTrungSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CIVFPhieuTheoDoiPhoiDialog::OnIVFSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CIVFPhieuTheoDoiPhoiDialog::OnICSISelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CIVFPhieuTheoDoiPhoiDialog::OnICSIAOASelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnNgayChocHutChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnNgayChocHutSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnNgayChocHutKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnNgayChocHutCheckValue(){
	return 0;
} 
	void CIVFPhieuTheoDoiPhoiDialog::OnTuoiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CIVFPhieuTheoDoiPhoiDialog::OnTruSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CIVFPhieuTheoDoiPhoiDialog::OnPESASelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CIVFPhieuTheoDoiPhoiDialog::OnTESESelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CIVFPhieuTheoDoiPhoiDialog::OnBSChocHutSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiPhoiDialog::OnBSChocHutSelendok(){
	 
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnBSChocHutSetfocus(){
	
}*/
/*void CIVFPhieuTheoDoiPhoiDialog::OnBSChocHutKillfocus(){
	
}*/
long CIVFPhieuTheoDoiPhoiDialog::OnBSChocHutLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBSChocHut.IsSearchKey() && !m_szBSChocHutKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBSChocHutKey
};
	m_wndBSChocHut.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBSChocHut.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnBSChocHutAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnVChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnVSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnVKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnVCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnMDChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnMDSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnMDKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnMDCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnDDChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnDDSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnDDKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnDDCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnHDChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnHDSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnHDKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnHDCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioHCGChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioHCGSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioHCGKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnGioHCGCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioChocHutChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioChocHutSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioChocHutKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnGioChocHutCheckValue(){
	return 0;
} 
void CIVFPhieuTheoDoiPhoiDialog::OnListDblClick(){
	
} 
void CIVFPhieuTheoDoiPhoiDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFPhieuTheoDoiPhoiDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFPhieuTheoDoiPhoiDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("STT")), 
			rs.GetValue(_T("Ngay0")), 
			rs.GetValue(_T("Ngay1")), 
			rs.GetValue(_T("Ngay2")), 
			rs.GetValue(_T("Ngay3")), 
			rs.GetValue(_T("Ngay4")), 
			rs.GetValue(_T("Ngay5")), 
			rs.GetValue(_T("Ngay6")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnDanhgiachatluongtrungChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnDanhgiachatluongtrungSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnDanhgiachatluongtrungKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnDanhgiachatluongtrungCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnNhanXetChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnNhanXetSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnNhanXetKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnNhanXetCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnDanhgiachatluongtinhtrungChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnDanhgiachatluongtinhtrungSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnDanhgiachatluongtinhtrungKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnDanhgiachatluongtinhtrungCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnTongSoTrungChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnTongSoTrungSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnTongSoTrungKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnTongSoTrungCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnSoTrungICSIChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnSoTrungICSISetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnSoTrungICSIKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnSoTrungICSICheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnThuTinhChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnThuTinhSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnThuTinhKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnThuTinhCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnDanhGiaChatLuongPhoiChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnDanhGiaChatLuongPhoiSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnDanhGiaChatLuongPhoiKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnDanhGiaChatLuongPhoiCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnTongSoPhoiChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnTongSoPhoiSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnTongSoPhoiKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnTongSoPhoiCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnSoPhoiChuyenChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnSoPhoiChuyenSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnSoPhoiChuyenKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnSoPhoiChuyenCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnSoPhoiTruChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnSoPhoiTruSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnSoPhoiTruKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnSoPhoiTruCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnLanChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnLanSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnLanKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnLanCheckValue(){
	return 0;
} 
	void CIVFPhieuTheoDoiPhoiDialog::OnDeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CIVFPhieuTheoDoiPhoiDialog::OnChuyenPhoi_KhoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnNMTCChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnNMTCSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnNMTCKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnNMTCCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnSotPhoiChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnSotPhoiSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnSotPhoiKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnSotPhoiCheckValue(){
	return 0;
} 
	void CIVFPhieuTheoDoiPhoiDialog::OnSachSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CIVFPhieuTheoDoiPhoiDialog::OnNhaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CIVFPhieuTheoDoiPhoiDialog::OnMauSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnPARAChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnPARASetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnPARAKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnPARACheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioAHChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioAHSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioAHKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnGioAHCheckValue(){
	return 0;
} 
void CIVFPhieuTheoDoiPhoiDialog::OnNguoiAHSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiPhoiDialog::OnNguoiAHSelendok(){
	 
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnNguoiAHSetfocus(){
	
}*/
/*void CIVFPhieuTheoDoiPhoiDialog::OnNguoiAHKillfocus(){
	
}*/
long CIVFPhieuTheoDoiPhoiDialog::OnNguoiAHLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNguoiAH.IsSearchKey() && !m_szNguoiAHKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNguoiAHKey
};
	m_wndNguoiAH.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNguoiAH.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnNguoiAHAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnChiDinhChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnChiDinhSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnChiDinhKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnChiDinhCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioCPChange(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioCPSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiPhoiDialog::OnGioCPKillfocus(){
	
} */
int CIVFPhieuTheoDoiPhoiDialog::OnGioCPCheckValue(){
	return 0;
} 
void CIVFPhieuTheoDoiPhoiDialog::OnNguoiLoadSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiPhoiDialog::OnNguoiLoadSelendok(){
	 
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnNguoiLoadSetfocus(){
	
}*/
/*void CIVFPhieuTheoDoiPhoiDialog::OnNguoiLoadKillfocus(){
	
}*/
long CIVFPhieuTheoDoiPhoiDialog::OnNguoiLoadLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNguoiLoad.IsSearchKey() && !m_szNguoiLoadKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNguoiLoadKey
};
	m_wndNguoiLoad.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNguoiLoad.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnNguoiLoadAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFPhieuTheoDoiPhoiDialog::OnBacsiCPSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiPhoiDialog::OnBacsiCPSelendok(){
	 
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnBacsiCPSetfocus(){
	
}*/
/*void CIVFPhieuTheoDoiPhoiDialog::OnBacsiCPKillfocus(){
	
}*/
long CIVFPhieuTheoDoiPhoiDialog::OnBacsiCPLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBacsiCP.IsSearchKey() && !m_szBacsiCPKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBacsiCPKey
};
	m_wndBacsiCP.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBacsiCP.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFPhieuTheoDoiPhoiDialog::OnBacsiCPAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFPhieuTheoDoiPhoiDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiPhoiDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiPhoiDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiPhoiDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiPhoiDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFPhieuTheoDoiPhoiDialog::OnAddIVFPhieuTheoDoiPhoiDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFPhieuTheoDoiPhoiDialog::OnEditIVFPhieuTheoDoiPhoiDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFPhieuTheoDoiPhoiDialog::OnDeleteIVFPhieuTheoDoiPhoiDialog(){
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
 		OnCancelIVFPhieuTheoDoiPhoiDialog();
 	}
	return 0;
}
int CIVFPhieuTheoDoiPhoiDialog::OnSaveIVFPhieuTheoDoiPhoiDialog(){
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
 		//OnIVFPhieuTheoDoiPhoiDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFPhieuTheoDoiPhoiDialog::OnCancelIVFPhieuTheoDoiPhoiDialog(){
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
int CIVFPhieuTheoDoiPhoiDialog::OnIVFPhieuTheoDoiPhoiDialogListLoadData(){
	return 0;
}
